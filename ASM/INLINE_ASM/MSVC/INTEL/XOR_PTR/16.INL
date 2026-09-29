#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define XOR_AL_FROM_PTR_(VALUE) xor al, byte ptr [VALUE]
#define XOR_BL_FROM_PTR_(VALUE) xor bl, byte ptr [VALUE]
#define XOR_CL_FROM_PTR_(VALUE) xor cl, byte ptr [VALUE]
#define XOR_DL_FROM_PTR_(VALUE) xor dl, byte ptr [VALUE]

#define XOR_AL_TO_PTR_(VALUE) xor byte ptr [VALUE], al
#define XOR_BL_TO_PTR_(VALUE) xor byte ptr [VALUE], bl
#define XOR_CL_TO_PTR_(VALUE) xor byte ptr [VALUE], cl
#define XOR_DL_TO_PTR_(VALUE) xor byte ptr [VALUE], dl

#define XOR_AL_FROM_PTR_BX xor al, byte ptr [bx]
#define XOR_AL_FROM_PTR_BP xor al, byte ptr [bp]
#define XOR_AL_FROM_PTR_SI xor al, byte ptr [si]
#define XOR_AL_FROM_PTR_DI xor al, byte ptr [di]

#define XOR_BL_FROM_PTR_BX xor bl, byte ptr [bx]
#define XOR_BL_FROM_PTR_BP xor bl, byte ptr [bp]
#define XOR_BL_FROM_PTR_SI xor bl, byte ptr [si]
#define XOR_BL_FROM_PTR_DI xor bl, byte ptr [di]

#define XOR_CL_FROM_PTR_BX xor cl, byte ptr [bx]
#define XOR_CL_FROM_PTR_BP xor cl, byte ptr [bp]
#define XOR_CL_FROM_PTR_SI xor cl, byte ptr [si]
#define XOR_CL_FROM_PTR_DI xor cl, byte ptr [di]

#define XOR_DL_FROM_PTR_BX xor dl, byte ptr [bx]
#define XOR_DL_FROM_PTR_BP xor dl, byte ptr [bp]
#define XOR_DL_FROM_PTR_SI xor dl, byte ptr [si]
#define XOR_DL_FROM_PTR_DI xor dl, byte ptr [di]

#define XOR_AL_TO_PTR_BX xor byte ptr [bx], al
#define XOR_AL_TO_PTR_BP xor byte ptr [bp], al
#define XOR_AL_TO_PTR_SI xor byte ptr [si], al
#define XOR_AL_TO_PTR_DI xor byte ptr [di], al

#define XOR_BL_TO_PTR_BX xor byte ptr [bx], bl
#define XOR_BL_TO_PTR_BP xor byte ptr [bp], bl
#define XOR_BL_TO_PTR_SI xor byte ptr [si], bl
#define XOR_BL_TO_PTR_DI xor byte ptr [di], bl

#define XOR_CL_TO_PTR_BX xor byte ptr [bx], cl
#define XOR_CL_TO_PTR_BP xor byte ptr [bp], cl
#define XOR_CL_TO_PTR_SI xor byte ptr [si], cl
#define XOR_CL_TO_PTR_DI xor byte ptr [di], cl

#define XOR_DL_TO_PTR_BX xor byte ptr [bx], dl
#define XOR_DL_TO_PTR_BP xor byte ptr [bp], dl
#define XOR_DL_TO_PTR_SI xor byte ptr [si], dl
#define XOR_DL_TO_PTR_DI xor byte ptr [di], dl

#define XOR_AL_FROM_PTR_BX_(VALUE) xor al, byte ptr [bx + VALUE]
#define XOR_AL_FROM_PTR_BP_(VALUE) xor al, byte ptr [bp + VALUE]
#define XOR_AL_FROM_PTR_SI_(VALUE) xor al, byte ptr [si + VALUE]
#define XOR_AL_FROM_PTR_DI_(VALUE) xor al, byte ptr [di + VALUE]

#define XOR_BL_FROM_PTR_BX_(VALUE) xor bl, byte ptr [bx + VALUE]
#define XOR_BL_FROM_PTR_BP_(VALUE) xor bl, byte ptr [bp + VALUE]
#define XOR_BL_FROM_PTR_SI_(VALUE) xor bl, byte ptr [si + VALUE]
#define XOR_BL_FROM_PTR_DI_(VALUE) xor bl, byte ptr [di + VALUE]

#define XOR_CL_FROM_PTR_BX_(VALUE) xor cl, byte ptr [bx + VALUE]
#define XOR_CL_FROM_PTR_BP_(VALUE) xor cl, byte ptr [bp + VALUE]
#define XOR_CL_FROM_PTR_SI_(VALUE) xor cl, byte ptr [si + VALUE]
#define XOR_CL_FROM_PTR_DI_(VALUE) xor cl, byte ptr [di + VALUE]

#define XOR_DL_FROM_PTR_BX_(VALUE) xor dl, byte ptr [bx + VALUE]
#define XOR_DL_FROM_PTR_BP_(VALUE) xor dl, byte ptr [bp + VALUE]
#define XOR_DL_FROM_PTR_SI_(VALUE) xor dl, byte ptr [si + VALUE]
#define XOR_DL_FROM_PTR_DI_(VALUE) xor dl, byte ptr [di + VALUE]

#define XOR_AL_TO_PTR_BX_(VALUE) xor byte ptr [bx + VALUE], al
#define XOR_AL_TO_PTR_BP_(VALUE) xor byte ptr [bp + VALUE], al
#define XOR_AL_TO_PTR_SI_(VALUE) xor byte ptr [si + VALUE], al
#define XOR_AL_TO_PTR_DI_(VALUE) xor byte ptr [di + VALUE], al

#define XOR_BL_TO_PTR_BX_(VALUE) xor byte ptr [bx + VALUE], bl
#define XOR_BL_TO_PTR_BP_(VALUE) xor byte ptr [bp + VALUE], bl
#define XOR_BL_TO_PTR_SI_(VALUE) xor byte ptr [si + VALUE], bl
#define XOR_BL_TO_PTR_DI_(VALUE) xor byte ptr [di + VALUE], bl

#define XOR_CL_TO_PTR_BX_(VALUE) xor byte ptr [bx + VALUE], cl
#define XOR_CL_TO_PTR_BP_(VALUE) xor byte ptr [bp + VALUE], cl
#define XOR_CL_TO_PTR_SI_(VALUE) xor byte ptr [si + VALUE], cl
#define XOR_CL_TO_PTR_DI_(VALUE) xor byte ptr [di + VALUE], cl

#define XOR_DL_TO_PTR_BX_(VALUE) xor byte ptr [bx + VALUE], dl
#define XOR_DL_TO_PTR_BP_(VALUE) xor byte ptr [bp + VALUE], dl
#define XOR_DL_TO_PTR_SI_(VALUE) xor byte ptr [si + VALUE], dl
#define XOR_DL_TO_PTR_DI_(VALUE) xor byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XOR_AL_FROM_PTR_(VALUE) xor al, byte ptr [VALUE]
#define XOR_BL_FROM_PTR_(VALUE) xor bl, byte ptr [VALUE]
#define XOR_CL_FROM_PTR_(VALUE) xor cl, byte ptr [VALUE]
#define XOR_DL_FROM_PTR_(VALUE) xor dl, byte ptr [VALUE]

#define XOR_AL_TO_PTR_(VALUE) xor byte ptr [VALUE], al
#define XOR_BL_TO_PTR_(VALUE) xor byte ptr [VALUE], bl
#define XOR_CL_TO_PTR_(VALUE) xor byte ptr [VALUE], cl
#define XOR_DL_TO_PTR_(VALUE) xor byte ptr [VALUE], dl

#define XOR_AL_FROM_PTR_EAX xor al, byte ptr [eax]
#define XOR_AL_FROM_PTR_EBX xor al, byte ptr [ebx]
#define XOR_AL_FROM_PTR_ECX xor al, byte ptr [ecx]
#define XOR_AL_FROM_PTR_EDX xor al, byte ptr [edx]
#define XOR_AL_FROM_PTR_EDI xor al, byte ptr [edi]
#define XOR_AL_FROM_PTR_ESI xor al, byte ptr [esi]
#define XOR_AL_FROM_PTR_EBP xor al, byte ptr [ebp]
#define XOR_AL_FROM_PTR_ESP xor al, byte ptr [esp]
#define XOR_AL_FROM_PTR_BX xor al, byte ptr [bx]
#define XOR_AL_FROM_PTR_BP xor al, byte ptr [bp]
#define XOR_AL_FROM_PTR_SI xor al, byte ptr [si]
#define XOR_AL_FROM_PTR_DI xor al, byte ptr [di]

#define XOR_BL_FROM_PTR_EAX xor bl, byte ptr [eax]
#define XOR_BL_FROM_PTR_EBX xor bl, byte ptr [ebx]
#define XOR_BL_FROM_PTR_ECX xor bl, byte ptr [ecx]
#define XOR_BL_FROM_PTR_EDX xor bl, byte ptr [edx]
#define XOR_BL_FROM_PTR_EDI xor bl, byte ptr [edi]
#define XOR_BL_FROM_PTR_ESI xor bl, byte ptr [esi]
#define XOR_BL_FROM_PTR_EBP xor bl, byte ptr [ebp]
#define XOR_BL_FROM_PTR_ESP xor bl, byte ptr [esp]
#define XOR_BL_FROM_PTR_BX xor bl, byte ptr [bx]
#define XOR_BL_FROM_PTR_BP xor bl, byte ptr [bp]
#define XOR_BL_FROM_PTR_SI xor bl, byte ptr [si]
#define XOR_BL_FROM_PTR_DI xor bl, byte ptr [di]

#define XOR_CL_FROM_PTR_EAX xor cl, byte ptr [eax]
#define XOR_CL_FROM_PTR_EBX xor cl, byte ptr [ebx]
#define XOR_CL_FROM_PTR_ECX xor cl, byte ptr [ecx]
#define XOR_CL_FROM_PTR_EDX xor cl, byte ptr [edx]
#define XOR_CL_FROM_PTR_EDI xor cl, byte ptr [edi]
#define XOR_CL_FROM_PTR_ESI xor cl, byte ptr [esi]
#define XOR_CL_FROM_PTR_EBP xor cl, byte ptr [ebp]
#define XOR_CL_FROM_PTR_ESP xor cl, byte ptr [esp]
#define XOR_CL_FROM_PTR_BX xor cl, byte ptr [bx]
#define XOR_CL_FROM_PTR_BP xor cl, byte ptr [bp]
#define XOR_CL_FROM_PTR_SI xor cl, byte ptr [si]
#define XOR_CL_FROM_PTR_DI xor cl, byte ptr [di]

#define XOR_DL_FROM_PTR_EAX xor dl, byte ptr [eax]
#define XOR_DL_FROM_PTR_EBX xor dl, byte ptr [ebx]
#define XOR_DL_FROM_PTR_ECX xor dl, byte ptr [ecx]
#define XOR_DL_FROM_PTR_EDX xor dl, byte ptr [edx]
#define XOR_DL_FROM_PTR_EDI xor dl, byte ptr [edi]
#define XOR_DL_FROM_PTR_ESI xor dl, byte ptr [esi]
#define XOR_DL_FROM_PTR_EBP xor dl, byte ptr [ebp]
#define XOR_DL_FROM_PTR_ESP xor dl, byte ptr [esp]
#define XOR_DL_FROM_PTR_BX xor dl, byte ptr [bx]
#define XOR_DL_FROM_PTR_BP xor dl, byte ptr [bp]
#define XOR_DL_FROM_PTR_SI xor dl, byte ptr [si]
#define XOR_DL_FROM_PTR_DI xor dl, byte ptr [di]

#define XOR_AL_TO_PTR_EAX xor byte ptr [eax], al
#define XOR_AL_TO_PTR_EBX xor byte ptr [ebx], al
#define XOR_AL_TO_PTR_ECX xor byte ptr [ecx], al
#define XOR_AL_TO_PTR_EDX xor byte ptr [edx], al
#define XOR_AL_TO_PTR_EDI xor byte ptr [edi], al
#define XOR_AL_TO_PTR_ESI xor byte ptr [esi], al
#define XOR_AL_TO_PTR_EBP xor byte ptr [ebp], al
#define XOR_AL_TO_PTR_ESP xor byte ptr [esp], al
#define XOR_AL_TO_PTR_BX xor byte ptr [bx], al
#define XOR_AL_TO_PTR_BP xor byte ptr [bp], al
#define XOR_AL_TO_PTR_SI xor byte ptr [si], al
#define XOR_AL_TO_PTR_DI xor byte ptr [di], al

#define XOR_BL_TO_PTR_EAX xor byte ptr [eax], bl
#define XOR_BL_TO_PTR_EBX xor byte ptr [ebx], bl
#define XOR_BL_TO_PTR_ECX xor byte ptr [ecx], bl
#define XOR_BL_TO_PTR_EDX xor byte ptr [edx], bl
#define XOR_BL_TO_PTR_EDI xor byte ptr [edi], bl
#define XOR_BL_TO_PTR_ESI xor byte ptr [esi], bl
#define XOR_BL_TO_PTR_EBP xor byte ptr [ebp], bl
#define XOR_BL_TO_PTR_ESP xor byte ptr [esp], bl
#define XOR_BL_TO_PTR_BX xor byte ptr [bx], bl
#define XOR_BL_TO_PTR_BP xor byte ptr [bp], bl
#define XOR_BL_TO_PTR_SI xor byte ptr [si], bl
#define XOR_BL_TO_PTR_DI xor byte ptr [di], bl

#define XOR_CL_TO_PTR_EAX xor byte ptr [eax], cl
#define XOR_CL_TO_PTR_EBX xor byte ptr [ebx], cl
#define XOR_CL_TO_PTR_ECX xor byte ptr [ecx], cl
#define XOR_CL_TO_PTR_EDX xor byte ptr [edx], cl
#define XOR_CL_TO_PTR_EDI xor byte ptr [edi], cl
#define XOR_CL_TO_PTR_ESI xor byte ptr [esi], cl
#define XOR_CL_TO_PTR_EBP xor byte ptr [ebp], cl
#define XOR_CL_TO_PTR_ESP xor byte ptr [esp], cl
#define XOR_CL_TO_PTR_BX xor byte ptr [bx], cl
#define XOR_CL_TO_PTR_BP xor byte ptr [bp], cl
#define XOR_CL_TO_PTR_SI xor byte ptr [si], cl
#define XOR_CL_TO_PTR_DI xor byte ptr [di], cl

#define XOR_DL_TO_PTR_EAX xor byte ptr [eax], dl
#define XOR_DL_TO_PTR_EBX xor byte ptr [ebx], dl
#define XOR_DL_TO_PTR_ECX xor byte ptr [ecx], dl
#define XOR_DL_TO_PTR_EDX xor byte ptr [edx], dl
#define XOR_DL_TO_PTR_EDI xor byte ptr [edi], dl
#define XOR_DL_TO_PTR_ESI xor byte ptr [esi], dl
#define XOR_DL_TO_PTR_EBP xor byte ptr [ebp], dl
#define XOR_DL_TO_PTR_ESP xor byte ptr [esp], dl
#define XOR_DL_TO_PTR_BX xor byte ptr [bx], dl
#define XOR_DL_TO_PTR_BP xor byte ptr [bp], dl
#define XOR_DL_TO_PTR_SI xor byte ptr [si], dl
#define XOR_DL_TO_PTR_DI xor byte ptr [di], dl

#define XOR_AL_FROM_PTR_EAX_(VALUE) xor al, byte ptr [eax + VALUE]
#define XOR_AL_FROM_PTR_EBX_(VALUE) xor al, byte ptr [ebx + VALUE]
#define XOR_AL_FROM_PTR_ECX_(VALUE) xor al, byte ptr [ecx + VALUE]
#define XOR_AL_FROM_PTR_EDX_(VALUE) xor al, byte ptr [edx + VALUE]
#define XOR_AL_FROM_PTR_EDI_(VALUE) xor al, byte ptr [edi + VALUE]
#define XOR_AL_FROM_PTR_ESI_(VALUE) xor al, byte ptr [esi + VALUE]
#define XOR_AL_FROM_PTR_EBP_(VALUE) xor al, byte ptr [ebp + VALUE]
#define XOR_AL_FROM_PTR_ESP_(VALUE) xor al, byte ptr [esp + VALUE]
#define XOR_AL_FROM_PTR_BX_(VALUE) xor al, byte ptr [bx + VALUE]
#define XOR_AL_FROM_PTR_BP_(VALUE) xor al, byte ptr [bp + VALUE]
#define XOR_AL_FROM_PTR_SI_(VALUE) xor al, byte ptr [si + VALUE]
#define XOR_AL_FROM_PTR_DI_(VALUE) xor al, byte ptr [di + VALUE]

#define XOR_BL_FROM_PTR_EAX_(VALUE) xor bl, byte ptr [eax + VALUE]
#define XOR_BL_FROM_PTR_EBX_(VALUE) xor bl, byte ptr [ebx + VALUE]
#define XOR_BL_FROM_PTR_ECX_(VALUE) xor bl, byte ptr [ecx + VALUE]
#define XOR_BL_FROM_PTR_EDX_(VALUE) xor bl, byte ptr [edx + VALUE]
#define XOR_BL_FROM_PTR_EDI_(VALUE) xor bl, byte ptr [edi + VALUE]
#define XOR_BL_FROM_PTR_ESI_(VALUE) xor bl, byte ptr [esi + VALUE]
#define XOR_BL_FROM_PTR_EBP_(VALUE) xor bl, byte ptr [ebp + VALUE]
#define XOR_BL_FROM_PTR_ESP_(VALUE) xor bl, byte ptr [esp + VALUE]
#define XOR_BL_FROM_PTR_BX_(VALUE) xor bl, byte ptr [bx + VALUE]
#define XOR_BL_FROM_PTR_BP_(VALUE) xor bl, byte ptr [bp + VALUE]
#define XOR_BL_FROM_PTR_SI_(VALUE) xor bl, byte ptr [si + VALUE]
#define XOR_BL_FROM_PTR_DI_(VALUE) xor bl, byte ptr [di + VALUE]

#define XOR_CL_FROM_PTR_EAX_(VALUE) xor cl, byte ptr [eax + VALUE]
#define XOR_CL_FROM_PTR_EBX_(VALUE) xor cl, byte ptr [ebx + VALUE]
#define XOR_CL_FROM_PTR_ECX_(VALUE) xor cl, byte ptr [ecx + VALUE]
#define XOR_CL_FROM_PTR_EDX_(VALUE) xor cl, byte ptr [edx + VALUE]
#define XOR_CL_FROM_PTR_EDI_(VALUE) xor cl, byte ptr [edi + VALUE]
#define XOR_CL_FROM_PTR_ESI_(VALUE) xor cl, byte ptr [esi + VALUE]
#define XOR_CL_FROM_PTR_EBP_(VALUE) xor cl, byte ptr [ebp + VALUE]
#define XOR_CL_FROM_PTR_ESP_(VALUE) xor cl, byte ptr [esp + VALUE]
#define XOR_CL_FROM_PTR_BX_(VALUE) xor cl, byte ptr [bx + VALUE]
#define XOR_CL_FROM_PTR_BP_(VALUE) xor cl, byte ptr [bp + VALUE]
#define XOR_CL_FROM_PTR_SI_(VALUE) xor cl, byte ptr [si + VALUE]
#define XOR_CL_FROM_PTR_DI_(VALUE) xor cl, byte ptr [di + VALUE]

#define XOR_DL_FROM_PTR_EAX_(VALUE) xor dl, byte ptr [eax + VALUE]
#define XOR_DL_FROM_PTR_EBX_(VALUE) xor dl, byte ptr [ebx + VALUE]
#define XOR_DL_FROM_PTR_ECX_(VALUE) xor dl, byte ptr [ecx + VALUE]
#define XOR_DL_FROM_PTR_EDX_(VALUE) xor dl, byte ptr [edx + VALUE]
#define XOR_DL_FROM_PTR_EDI_(VALUE) xor dl, byte ptr [edi + VALUE]
#define XOR_DL_FROM_PTR_ESI_(VALUE) xor dl, byte ptr [esi + VALUE]
#define XOR_DL_FROM_PTR_EBP_(VALUE) xor dl, byte ptr [ebp + VALUE]
#define XOR_DL_FROM_PTR_ESP_(VALUE) xor dl, byte ptr [esp + VALUE]
#define XOR_DL_FROM_PTR_BX_(VALUE) xor dl, byte ptr [bx + VALUE]
#define XOR_DL_FROM_PTR_BP_(VALUE) xor dl, byte ptr [bp + VALUE]
#define XOR_DL_FROM_PTR_SI_(VALUE) xor dl, byte ptr [si + VALUE]
#define XOR_DL_FROM_PTR_DI_(VALUE) xor dl, byte ptr [di + VALUE]

#define XOR_AL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], al
#define XOR_AL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], al
#define XOR_AL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], al
#define XOR_AL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], al
#define XOR_AL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], al
#define XOR_AL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], al
#define XOR_AL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], al
#define XOR_AL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], al
#define XOR_AL_TO_PTR_BX_(VALUE) xor byte ptr [bx + VALUE], al
#define XOR_AL_TO_PTR_BP_(VALUE) xor byte ptr [bp + VALUE], al
#define XOR_AL_TO_PTR_SI_(VALUE) xor byte ptr [si + VALUE], al
#define XOR_AL_TO_PTR_DI_(VALUE) xor byte ptr [di + VALUE], al

#define XOR_BL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], bl
#define XOR_BL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], bl
#define XOR_BL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], bl
#define XOR_BL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], bl
#define XOR_BL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], bl
#define XOR_BL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], bl
#define XOR_BL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], bl
#define XOR_BL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], bl
#define XOR_BL_TO_PTR_BX_(VALUE) xor byte ptr [bx + VALUE], bl
#define XOR_BL_TO_PTR_BP_(VALUE) xor byte ptr [bp + VALUE], bl
#define XOR_BL_TO_PTR_SI_(VALUE) xor byte ptr [si + VALUE], bl
#define XOR_BL_TO_PTR_DI_(VALUE) xor byte ptr [di + VALUE], bl

#define XOR_CL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], cl
#define XOR_CL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], cl
#define XOR_CL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], cl
#define XOR_CL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], cl
#define XOR_CL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], cl
#define XOR_CL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], cl
#define XOR_CL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], cl
#define XOR_CL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], cl
#define XOR_CL_TO_PTR_BX_(VALUE) xor byte ptr [bx + VALUE], cl
#define XOR_CL_TO_PTR_BP_(VALUE) xor byte ptr [bp + VALUE], cl
#define XOR_CL_TO_PTR_SI_(VALUE) xor byte ptr [si + VALUE], cl
#define XOR_CL_TO_PTR_DI_(VALUE) xor byte ptr [di + VALUE], cl

#define XOR_DL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], dl
#define XOR_DL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], dl
#define XOR_DL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], dl
#define XOR_DL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], dl
#define XOR_DL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], dl
#define XOR_DL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], dl
#define XOR_DL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], dl
#define XOR_DL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], dl
#define XOR_DL_TO_PTR_BX_(VALUE) xor byte ptr [bx + VALUE], dl
#define XOR_DL_TO_PTR_BP_(VALUE) xor byte ptr [bp + VALUE], dl
#define XOR_DL_TO_PTR_SI_(VALUE) xor byte ptr [si + VALUE], dl
#define XOR_DL_TO_PTR_DI_(VALUE) xor byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_AL_FROM_PTR_(VALUE) xor al, byte ptr [VALUE]
#define XOR_BL_FROM_PTR_(VALUE) xor bl, byte ptr [VALUE]
#define XOR_CL_FROM_PTR_(VALUE) xor cl, byte ptr [VALUE]
#define XOR_DL_FROM_PTR_(VALUE) xor dl, byte ptr [VALUE]
#define XOR_DIL_FROM_PTR_(VALUE) xor dil, byte ptr [VALUE]
#define XOR_SIL_FROM_PTR_(VALUE) xor sil, byte ptr [VALUE]
#define XOR_BPL_FROM_PTR_(VALUE) xor bpl, byte ptr [VALUE]
#define XOR_SPL_FROM_PTR_(VALUE) xor spl, byte ptr [VALUE]
#define XOR_R8B_FROM_PTR_(VALUE) xor r8b, byte ptr [VALUE]
#define XOR_R9B_FROM_PTR_(VALUE) xor r9b, byte ptr [VALUE]
#define XOR_R10B_FROM_PTR_(VALUE) xor r10b, byte ptr [VALUE]
#define XOR_R11B_FROM_PTR_(VALUE) xor r11b, byte ptr [VALUE]
#define XOR_R12B_FROM_PTR_(VALUE) xor r12b, byte ptr [VALUE]
#define XOR_R13B_FROM_PTR_(VALUE) xor r13b, byte ptr [VALUE]
#define XOR_R14B_FROM_PTR_(VALUE) xor r14b, byte ptr [VALUE]
#define XOR_R15B_FROM_PTR_(VALUE) xor r15b, byte ptr [VALUE]

#define XOR_AL_TO_PTR_(VALUE) xor byte ptr [VALUE], al
#define XOR_BL_TO_PTR_(VALUE) xor byte ptr [VALUE], bl
#define XOR_CL_TO_PTR_(VALUE) xor byte ptr [VALUE], cl
#define XOR_DL_TO_PTR_(VALUE) xor byte ptr [VALUE], dl
#define XOR_DIL_TO_PTR_(VALUE) xor byte ptr [VALUE], dil
#define XOR_SIL_TO_PTR_(VALUE) xor byte ptr [VALUE], sil
#define XOR_BPL_TO_PTR_(VALUE) xor byte ptr [VALUE], bpl
#define XOR_SPL_TO_PTR_(VALUE) xor byte ptr [VALUE], spl
#define XOR_R8B_TO_PTR_(VALUE) xor byte ptr [VALUE], r8b
#define XOR_R9B_TO_PTR_(VALUE) xor byte ptr [VALUE], r9b
#define XOR_R10B_TO_PTR_(VALUE) xor byte ptr [VALUE], r10b
#define XOR_R11B_TO_PTR_(VALUE) xor byte ptr [VALUE], r11b
#define XOR_R12B_TO_PTR_(VALUE) xor byte ptr [VALUE], r12b
#define XOR_R13B_TO_PTR_(VALUE) xor byte ptr [VALUE], r13b
#define XOR_R14B_TO_PTR_(VALUE) xor byte ptr [VALUE], r14b
#define XOR_R15B_TO_PTR_(VALUE) xor byte ptr [VALUE], r15b

#define XOR_AL_FROM_PTR_RAX xor al, byte ptr [rax]
#define XOR_AL_FROM_PTR_RBX xor al, byte ptr [rbx]
#define XOR_AL_FROM_PTR_RCX xor al, byte ptr [rcx]
#define XOR_AL_FROM_PTR_RDX xor al, byte ptr [rdx]
#define XOR_AL_FROM_PTR_RDI xor al, byte ptr [rdi]
#define XOR_AL_FROM_PTR_RSI xor al, byte ptr [rsi]
#define XOR_AL_FROM_PTR_RBP xor al, byte ptr [rbp]
#define XOR_AL_FROM_PTR_RSP xor al, byte ptr [rsp]
#define XOR_AL_FROM_PTR_R8 xor al, byte ptr [r8]
#define XOR_AL_FROM_PTR_R9 xor al, byte ptr [r9]
#define XOR_AL_FROM_PTR_R10 xor al, byte ptr [r10]
#define XOR_AL_FROM_PTR_R11 xor al, byte ptr [r11]
#define XOR_AL_FROM_PTR_R12 xor al, byte ptr [r12]
#define XOR_AL_FROM_PTR_R13 xor al, byte ptr [r13]
#define XOR_AL_FROM_PTR_R14 xor al, byte ptr [r14]
#define XOR_AL_FROM_PTR_R15 xor al, byte ptr [r15]
#define XOR_AL_FROM_PTR_EAX xor al, byte ptr [eax]
#define XOR_AL_FROM_PTR_EBX xor al, byte ptr [ebx]
#define XOR_AL_FROM_PTR_ECX xor al, byte ptr [ecx]
#define XOR_AL_FROM_PTR_EDX xor al, byte ptr [edx]
#define XOR_AL_FROM_PTR_EDI xor al, byte ptr [edi]
#define XOR_AL_FROM_PTR_ESI xor al, byte ptr [esi]
#define XOR_AL_FROM_PTR_EBP xor al, byte ptr [ebp]
#define XOR_AL_FROM_PTR_ESP xor al, byte ptr [esp]

#define XOR_BL_FROM_PTR_RAX xor bl, byte ptr [rax]
#define XOR_BL_FROM_PTR_RBX xor bl, byte ptr [rbx]
#define XOR_BL_FROM_PTR_RCX xor bl, byte ptr [rcx]
#define XOR_BL_FROM_PTR_RDX xor bl, byte ptr [rdx]
#define XOR_BL_FROM_PTR_RDI xor bl, byte ptr [rdi]
#define XOR_BL_FROM_PTR_RSI xor bl, byte ptr [rsi]
#define XOR_BL_FROM_PTR_RBP xor bl, byte ptr [rbp]
#define XOR_BL_FROM_PTR_RSP xor bl, byte ptr [rsp]
#define XOR_BL_FROM_PTR_R8 xor bl, byte ptr [r8]
#define XOR_BL_FROM_PTR_R9 xor bl, byte ptr [r9]
#define XOR_BL_FROM_PTR_R10 xor bl, byte ptr [r10]
#define XOR_BL_FROM_PTR_R11 xor bl, byte ptr [r11]
#define XOR_BL_FROM_PTR_R12 xor bl, byte ptr [r12]
#define XOR_BL_FROM_PTR_R13 xor bl, byte ptr [r13]
#define XOR_BL_FROM_PTR_R14 xor bl, byte ptr [r14]
#define XOR_BL_FROM_PTR_R15 xor bl, byte ptr [r15]
#define XOR_BL_FROM_PTR_EAX xor bl, byte ptr [eax]
#define XOR_BL_FROM_PTR_EBX xor bl, byte ptr [ebx]
#define XOR_BL_FROM_PTR_ECX xor bl, byte ptr [ecx]
#define XOR_BL_FROM_PTR_EDX xor bl, byte ptr [edx]
#define XOR_BL_FROM_PTR_EDI xor bl, byte ptr [edi]
#define XOR_BL_FROM_PTR_ESI xor bl, byte ptr [esi]
#define XOR_BL_FROM_PTR_EBP xor bl, byte ptr [ebp]
#define XOR_BL_FROM_PTR_ESP xor bl, byte ptr [esp]

#define XOR_CL_FROM_PTR_RAX xor cl, byte ptr [rax]
#define XOR_CL_FROM_PTR_RBX xor cl, byte ptr [rbx]
#define XOR_CL_FROM_PTR_RCX xor cl, byte ptr [rcx]
#define XOR_CL_FROM_PTR_RDX xor cl, byte ptr [rdx]
#define XOR_CL_FROM_PTR_RDI xor cl, byte ptr [rdi]
#define XOR_CL_FROM_PTR_RSI xor cl, byte ptr [rsi]
#define XOR_CL_FROM_PTR_RBP xor cl, byte ptr [rbp]
#define XOR_CL_FROM_PTR_RSP xor cl, byte ptr [rsp]
#define XOR_CL_FROM_PTR_R8 xor cl, byte ptr [r8]
#define XOR_CL_FROM_PTR_R9 xor cl, byte ptr [r9]
#define XOR_CL_FROM_PTR_R10 xor cl, byte ptr [r10]
#define XOR_CL_FROM_PTR_R11 xor cl, byte ptr [r11]
#define XOR_CL_FROM_PTR_R12 xor cl, byte ptr [r12]
#define XOR_CL_FROM_PTR_R13 xor cl, byte ptr [r13]
#define XOR_CL_FROM_PTR_R14 xor cl, byte ptr [r14]
#define XOR_CL_FROM_PTR_R15 xor cl, byte ptr [r15]
#define XOR_CL_FROM_PTR_EAX xor cl, byte ptr [eax]
#define XOR_CL_FROM_PTR_EBX xor cl, byte ptr [ebx]
#define XOR_CL_FROM_PTR_ECX xor cl, byte ptr [ecx]
#define XOR_CL_FROM_PTR_EDX xor cl, byte ptr [edx]
#define XOR_CL_FROM_PTR_EDI xor cl, byte ptr [edi]
#define XOR_CL_FROM_PTR_ESI xor cl, byte ptr [esi]
#define XOR_CL_FROM_PTR_EBP xor cl, byte ptr [ebp]
#define XOR_CL_FROM_PTR_ESP xor cl, byte ptr [esp]

#define XOR_DL_FROM_PTR_RAX xor dl, byte ptr [rax]
#define XOR_DL_FROM_PTR_RBX xor dl, byte ptr [rbx]
#define XOR_DL_FROM_PTR_RCX xor dl, byte ptr [rcx]
#define XOR_DL_FROM_PTR_RDX xor dl, byte ptr [rdx]
#define XOR_DL_FROM_PTR_RDI xor dl, byte ptr [rdi]
#define XOR_DL_FROM_PTR_RSI xor dl, byte ptr [rsi]
#define XOR_DL_FROM_PTR_RBP xor dl, byte ptr [rbp]
#define XOR_DL_FROM_PTR_RSP xor dl, byte ptr [rsp]
#define XOR_DL_FROM_PTR_R8 xor dl, byte ptr [r8]
#define XOR_DL_FROM_PTR_R9 xor dl, byte ptr [r9]
#define XOR_DL_FROM_PTR_R10 xor dl, byte ptr [r10]
#define XOR_DL_FROM_PTR_R11 xor dl, byte ptr [r11]
#define XOR_DL_FROM_PTR_R12 xor dl, byte ptr [r12]
#define XOR_DL_FROM_PTR_R13 xor dl, byte ptr [r13]
#define XOR_DL_FROM_PTR_R14 xor dl, byte ptr [r14]
#define XOR_DL_FROM_PTR_R15 xor dl, byte ptr [r15]
#define XOR_DL_FROM_PTR_EAX xor dl, byte ptr [eax]
#define XOR_DL_FROM_PTR_EBX xor dl, byte ptr [ebx]
#define XOR_DL_FROM_PTR_ECX xor dl, byte ptr [ecx]
#define XOR_DL_FROM_PTR_EDX xor dl, byte ptr [edx]
#define XOR_DL_FROM_PTR_EDI xor dl, byte ptr [edi]
#define XOR_DL_FROM_PTR_ESI xor dl, byte ptr [esi]
#define XOR_DL_FROM_PTR_EBP xor dl, byte ptr [ebp]
#define XOR_DL_FROM_PTR_ESP xor dl, byte ptr [esp]

#define XOR_DIL_FROM_PTR_RAX xor dil, byte ptr [rax]
#define XOR_DIL_FROM_PTR_RBX xor dil, byte ptr [rbx]
#define XOR_DIL_FROM_PTR_RCX xor dil, byte ptr [rcx]
#define XOR_DIL_FROM_PTR_RDX xor dil, byte ptr [rdx]
#define XOR_DIL_FROM_PTR_RDI xor dil, byte ptr [rdi]
#define XOR_DIL_FROM_PTR_RSI xor dil, byte ptr [rsi]
#define XOR_DIL_FROM_PTR_RBP xor dil, byte ptr [rbp]
#define XOR_DIL_FROM_PTR_RSP xor dil, byte ptr [rsp]
#define XOR_DIL_FROM_PTR_R8 xor dil, byte ptr [r8]
#define XOR_DIL_FROM_PTR_R9 xor dil, byte ptr [r9]
#define XOR_DIL_FROM_PTR_R10 xor dil, byte ptr [r10]
#define XOR_DIL_FROM_PTR_R11 xor dil, byte ptr [r11]
#define XOR_DIL_FROM_PTR_R12 xor dil, byte ptr [r12]
#define XOR_DIL_FROM_PTR_R13 xor dil, byte ptr [r13]
#define XOR_DIL_FROM_PTR_R14 xor dil, byte ptr [r14]
#define XOR_DIL_FROM_PTR_R15 xor dil, byte ptr [r15]
#define XOR_DIL_FROM_PTR_EAX xor dil, byte ptr [eax]
#define XOR_DIL_FROM_PTR_EBX xor dil, byte ptr [ebx]
#define XOR_DIL_FROM_PTR_ECX xor dil, byte ptr [ecx]
#define XOR_DIL_FROM_PTR_EDX xor dil, byte ptr [edx]
#define XOR_DIL_FROM_PTR_EDI xor dil, byte ptr [edi]
#define XOR_DIL_FROM_PTR_ESI xor dil, byte ptr [esi]
#define XOR_DIL_FROM_PTR_EBP xor dil, byte ptr [ebp]
#define XOR_DIL_FROM_PTR_ESP xor dil, byte ptr [esp]

#define XOR_SIL_FROM_PTR_RAX xor sil, byte ptr [rax]
#define XOR_SIL_FROM_PTR_RBX xor sil, byte ptr [rbx]
#define XOR_SIL_FROM_PTR_RCX xor sil, byte ptr [rcx]
#define XOR_SIL_FROM_PTR_RDX xor sil, byte ptr [rdx]
#define XOR_SIL_FROM_PTR_RDI xor sil, byte ptr [rdi]
#define XOR_SIL_FROM_PTR_RSI xor sil, byte ptr [rsi]
#define XOR_SIL_FROM_PTR_RBP xor sil, byte ptr [rbp]
#define XOR_SIL_FROM_PTR_RSP xor sil, byte ptr [rsp]
#define XOR_SIL_FROM_PTR_R8 xor sil, byte ptr [r8]
#define XOR_SIL_FROM_PTR_R9 xor sil, byte ptr [r9]
#define XOR_SIL_FROM_PTR_R10 xor sil, byte ptr [r10]
#define XOR_SIL_FROM_PTR_R11 xor sil, byte ptr [r11]
#define XOR_SIL_FROM_PTR_R12 xor sil, byte ptr [r12]
#define XOR_SIL_FROM_PTR_R13 xor sil, byte ptr [r13]
#define XOR_SIL_FROM_PTR_R14 xor sil, byte ptr [r14]
#define XOR_SIL_FROM_PTR_R15 xor sil, byte ptr [r15]
#define XOR_SIL_FROM_PTR_EAX xor sil, byte ptr [eax]
#define XOR_SIL_FROM_PTR_EBX xor sil, byte ptr [ebx]
#define XOR_SIL_FROM_PTR_ECX xor sil, byte ptr [ecx]
#define XOR_SIL_FROM_PTR_EDX xor sil, byte ptr [edx]
#define XOR_SIL_FROM_PTR_EDI xor sil, byte ptr [edi]
#define XOR_SIL_FROM_PTR_ESI xor sil, byte ptr [esi]
#define XOR_SIL_FROM_PTR_EBP xor sil, byte ptr [ebp]
#define XOR_SIL_FROM_PTR_ESP xor sil, byte ptr [esp]

#define XOR_BPL_FROM_PTR_RAX xor bpl, byte ptr [rax]
#define XOR_BPL_FROM_PTR_RBX xor bpl, byte ptr [rbx]
#define XOR_BPL_FROM_PTR_RCX xor bpl, byte ptr [rcx]
#define XOR_BPL_FROM_PTR_RDX xor bpl, byte ptr [rdx]
#define XOR_BPL_FROM_PTR_RDI xor bpl, byte ptr [rdi]
#define XOR_BPL_FROM_PTR_RSI xor bpl, byte ptr [rsi]
#define XOR_BPL_FROM_PTR_RBP xor bpl, byte ptr [rbp]
#define XOR_BPL_FROM_PTR_RSP xor bpl, byte ptr [rsp]
#define XOR_BPL_FROM_PTR_R8 xor bpl, byte ptr [r8]
#define XOR_BPL_FROM_PTR_R9 xor bpl, byte ptr [r9]
#define XOR_BPL_FROM_PTR_R10 xor bpl, byte ptr [r10]
#define XOR_BPL_FROM_PTR_R11 xor bpl, byte ptr [r11]
#define XOR_BPL_FROM_PTR_R12 xor bpl, byte ptr [r12]
#define XOR_BPL_FROM_PTR_R13 xor bpl, byte ptr [r13]
#define XOR_BPL_FROM_PTR_R14 xor bpl, byte ptr [r14]
#define XOR_BPL_FROM_PTR_R15 xor bpl, byte ptr [r15]
#define XOR_BPL_FROM_PTR_EAX xor bpl, byte ptr [eax]
#define XOR_BPL_FROM_PTR_EBX xor bpl, byte ptr [ebx]
#define XOR_BPL_FROM_PTR_ECX xor bpl, byte ptr [ecx]
#define XOR_BPL_FROM_PTR_EDX xor bpl, byte ptr [edx]
#define XOR_BPL_FROM_PTR_EDI xor bpl, byte ptr [edi]
#define XOR_BPL_FROM_PTR_ESI xor bpl, byte ptr [esi]
#define XOR_BPL_FROM_PTR_EBP xor bpl, byte ptr [ebp]
#define XOR_BPL_FROM_PTR_ESP xor bpl, byte ptr [esp]

#define XOR_SPL_FROM_PTR_RAX xor spl, byte ptr [rax]
#define XOR_SPL_FROM_PTR_RBX xor spl, byte ptr [rbx]
#define XOR_SPL_FROM_PTR_RCX xor spl, byte ptr [rcx]
#define XOR_SPL_FROM_PTR_RDX xor spl, byte ptr [rdx]
#define XOR_SPL_FROM_PTR_RDI xor spl, byte ptr [rdi]
#define XOR_SPL_FROM_PTR_RSI xor spl, byte ptr [rsi]
#define XOR_SPL_FROM_PTR_RBP xor spl, byte ptr [rbp]
#define XOR_SPL_FROM_PTR_RSP xor spl, byte ptr [rsp]
#define XOR_SPL_FROM_PTR_R8 xor spl, byte ptr [r8]
#define XOR_SPL_FROM_PTR_R9 xor spl, byte ptr [r9]
#define XOR_SPL_FROM_PTR_R10 xor spl, byte ptr [r10]
#define XOR_SPL_FROM_PTR_R11 xor spl, byte ptr [r11]
#define XOR_SPL_FROM_PTR_R12 xor spl, byte ptr [r12]
#define XOR_SPL_FROM_PTR_R13 xor spl, byte ptr [r13]
#define XOR_SPL_FROM_PTR_R14 xor spl, byte ptr [r14]
#define XOR_SPL_FROM_PTR_R15 xor spl, byte ptr [r15]
#define XOR_SPL_FROM_PTR_EAX xor spl, byte ptr [eax]
#define XOR_SPL_FROM_PTR_EBX xor spl, byte ptr [ebx]
#define XOR_SPL_FROM_PTR_ECX xor spl, byte ptr [ecx]
#define XOR_SPL_FROM_PTR_EDX xor spl, byte ptr [edx]
#define XOR_SPL_FROM_PTR_EDI xor spl, byte ptr [edi]
#define XOR_SPL_FROM_PTR_ESI xor spl, byte ptr [esi]
#define XOR_SPL_FROM_PTR_EBP xor spl, byte ptr [ebp]
#define XOR_SPL_FROM_PTR_ESP xor spl, byte ptr [esp]

#define XOR_R8B_FROM_PTR_RAX xor r8b, byte ptr [rax]
#define XOR_R8B_FROM_PTR_RBX xor r8b, byte ptr [rbx]
#define XOR_R8B_FROM_PTR_RCX xor r8b, byte ptr [rcx]
#define XOR_R8B_FROM_PTR_RDX xor r8b, byte ptr [rdx]
#define XOR_R8B_FROM_PTR_RDI xor r8b, byte ptr [rdi]
#define XOR_R8B_FROM_PTR_RSI xor r8b, byte ptr [rsi]
#define XOR_R8B_FROM_PTR_RBP xor r8b, byte ptr [rbp]
#define XOR_R8B_FROM_PTR_RSP xor r8b, byte ptr [rsp]
#define XOR_R8B_FROM_PTR_R8 xor r8b, byte ptr [r8]
#define XOR_R8B_FROM_PTR_R9 xor r8b, byte ptr [r9]
#define XOR_R8B_FROM_PTR_R10 xor r8b, byte ptr [r10]
#define XOR_R8B_FROM_PTR_R11 xor r8b, byte ptr [r11]
#define XOR_R8B_FROM_PTR_R12 xor r8b, byte ptr [r12]
#define XOR_R8B_FROM_PTR_R13 xor r8b, byte ptr [r13]
#define XOR_R8B_FROM_PTR_R14 xor r8b, byte ptr [r14]
#define XOR_R8B_FROM_PTR_R15 xor r8b, byte ptr [r15]
#define XOR_R8B_FROM_PTR_EAX xor r8b, byte ptr [eax]
#define XOR_R8B_FROM_PTR_EBX xor r8b, byte ptr [ebx]
#define XOR_R8B_FROM_PTR_ECX xor r8b, byte ptr [ecx]
#define XOR_R8B_FROM_PTR_EDX xor r8b, byte ptr [edx]
#define XOR_R8B_FROM_PTR_EDI xor r8b, byte ptr [edi]
#define XOR_R8B_FROM_PTR_ESI xor r8b, byte ptr [esi]
#define XOR_R8B_FROM_PTR_EBP xor r8b, byte ptr [ebp]
#define XOR_R8B_FROM_PTR_ESP xor r8b, byte ptr [esp]

#define XOR_R9B_FROM_PTR_RAX xor r9b, byte ptr [rax]
#define XOR_R9B_FROM_PTR_RBX xor r9b, byte ptr [rbx]
#define XOR_R9B_FROM_PTR_RCX xor r9b, byte ptr [rcx]
#define XOR_R9B_FROM_PTR_RDX xor r9b, byte ptr [rdx]
#define XOR_R9B_FROM_PTR_RDI xor r9b, byte ptr [rdi]
#define XOR_R9B_FROM_PTR_RSI xor r9b, byte ptr [rsi]
#define XOR_R9B_FROM_PTR_RBP xor r9b, byte ptr [rbp]
#define XOR_R9B_FROM_PTR_RSP xor r9b, byte ptr [rsp]
#define XOR_R9B_FROM_PTR_R8 xor r9b, byte ptr [r8]
#define XOR_R9B_FROM_PTR_R9 xor r9b, byte ptr [r9]
#define XOR_R9B_FROM_PTR_R10 xor r9b, byte ptr [r10]
#define XOR_R9B_FROM_PTR_R11 xor r9b, byte ptr [r11]
#define XOR_R9B_FROM_PTR_R12 xor r9b, byte ptr [r12]
#define XOR_R9B_FROM_PTR_R13 xor r9b, byte ptr [r13]
#define XOR_R9B_FROM_PTR_R14 xor r9b, byte ptr [r14]
#define XOR_R9B_FROM_PTR_R15 xor r9b, byte ptr [r15]
#define XOR_R9B_FROM_PTR_EAX xor r9b, byte ptr [eax]
#define XOR_R9B_FROM_PTR_EBX xor r9b, byte ptr [ebx]
#define XOR_R9B_FROM_PTR_ECX xor r9b, byte ptr [ecx]
#define XOR_R9B_FROM_PTR_EDX xor r9b, byte ptr [edx]
#define XOR_R9B_FROM_PTR_EDI xor r9b, byte ptr [edi]
#define XOR_R9B_FROM_PTR_ESI xor r9b, byte ptr [esi]
#define XOR_R9B_FROM_PTR_EBP xor r9b, byte ptr [ebp]
#define XOR_R9B_FROM_PTR_ESP xor r9b, byte ptr [esp]

#define XOR_R10B_FROM_PTR_RAX xor r10b, byte ptr [rax]
#define XOR_R10B_FROM_PTR_RBX xor r10b, byte ptr [rbx]
#define XOR_R10B_FROM_PTR_RCX xor r10b, byte ptr [rcx]
#define XOR_R10B_FROM_PTR_RDX xor r10b, byte ptr [rdx]
#define XOR_R10B_FROM_PTR_RDI xor r10b, byte ptr [rdi]
#define XOR_R10B_FROM_PTR_RSI xor r10b, byte ptr [rsi]
#define XOR_R10B_FROM_PTR_RBP xor r10b, byte ptr [rbp]
#define XOR_R10B_FROM_PTR_RSP xor r10b, byte ptr [rsp]
#define XOR_R10B_FROM_PTR_R8 xor r10b, byte ptr [r8]
#define XOR_R10B_FROM_PTR_R9 xor r10b, byte ptr [r9]
#define XOR_R10B_FROM_PTR_R10 xor r10b, byte ptr [r10]
#define XOR_R10B_FROM_PTR_R11 xor r10b, byte ptr [r11]
#define XOR_R10B_FROM_PTR_R12 xor r10b, byte ptr [r12]
#define XOR_R10B_FROM_PTR_R13 xor r10b, byte ptr [r13]
#define XOR_R10B_FROM_PTR_R14 xor r10b, byte ptr [r14]
#define XOR_R10B_FROM_PTR_R15 xor r10b, byte ptr [r15]
#define XOR_R10B_FROM_PTR_EAX xor r10b, byte ptr [eax]
#define XOR_R10B_FROM_PTR_EBX xor r10b, byte ptr [ebx]
#define XOR_R10B_FROM_PTR_ECX xor r10b, byte ptr [ecx]
#define XOR_R10B_FROM_PTR_EDX xor r10b, byte ptr [edx]
#define XOR_R10B_FROM_PTR_EDI xor r10b, byte ptr [edi]
#define XOR_R10B_FROM_PTR_ESI xor r10b, byte ptr [esi]
#define XOR_R10B_FROM_PTR_EBP xor r10b, byte ptr [ebp]
#define XOR_R10B_FROM_PTR_ESP xor r10b, byte ptr [esp]

#define XOR_R11B_FROM_PTR_RAX xor r11b, byte ptr [rax]
#define XOR_R11B_FROM_PTR_RBX xor r11b, byte ptr [rbx]
#define XOR_R11B_FROM_PTR_RCX xor r11b, byte ptr [rcx]
#define XOR_R11B_FROM_PTR_RDX xor r11b, byte ptr [rdx]
#define XOR_R11B_FROM_PTR_RDI xor r11b, byte ptr [rdi]
#define XOR_R11B_FROM_PTR_RSI xor r11b, byte ptr [rsi]
#define XOR_R11B_FROM_PTR_RBP xor r11b, byte ptr [rbp]
#define XOR_R11B_FROM_PTR_RSP xor r11b, byte ptr [rsp]
#define XOR_R11B_FROM_PTR_R8 xor r11b, byte ptr [r8]
#define XOR_R11B_FROM_PTR_R9 xor r11b, byte ptr [r9]
#define XOR_R11B_FROM_PTR_R10 xor r11b, byte ptr [r10]
#define XOR_R11B_FROM_PTR_R11 xor r11b, byte ptr [r11]
#define XOR_R11B_FROM_PTR_R12 xor r11b, byte ptr [r12]
#define XOR_R11B_FROM_PTR_R13 xor r11b, byte ptr [r13]
#define XOR_R11B_FROM_PTR_R14 xor r11b, byte ptr [r14]
#define XOR_R11B_FROM_PTR_R15 xor r11b, byte ptr [r15]
#define XOR_R11B_FROM_PTR_EAX xor r11b, byte ptr [eax]
#define XOR_R11B_FROM_PTR_EBX xor r11b, byte ptr [ebx]
#define XOR_R11B_FROM_PTR_ECX xor r11b, byte ptr [ecx]
#define XOR_R11B_FROM_PTR_EDX xor r11b, byte ptr [edx]
#define XOR_R11B_FROM_PTR_EDI xor r11b, byte ptr [edi]
#define XOR_R11B_FROM_PTR_ESI xor r11b, byte ptr [esi]
#define XOR_R11B_FROM_PTR_EBP xor r11b, byte ptr [ebp]
#define XOR_R11B_FROM_PTR_ESP xor r11b, byte ptr [esp]

#define XOR_R12B_FROM_PTR_RAX xor r12b, byte ptr [rax]
#define XOR_R12B_FROM_PTR_RBX xor r12b, byte ptr [rbx]
#define XOR_R12B_FROM_PTR_RCX xor r12b, byte ptr [rcx]
#define XOR_R12B_FROM_PTR_RDX xor r12b, byte ptr [rdx]
#define XOR_R12B_FROM_PTR_RDI xor r12b, byte ptr [rdi]
#define XOR_R12B_FROM_PTR_RSI xor r12b, byte ptr [rsi]
#define XOR_R12B_FROM_PTR_RBP xor r12b, byte ptr [rbp]
#define XOR_R12B_FROM_PTR_RSP xor r12b, byte ptr [rsp]
#define XOR_R12B_FROM_PTR_R8 xor r12b, byte ptr [r8]
#define XOR_R12B_FROM_PTR_R9 xor r12b, byte ptr [r9]
#define XOR_R12B_FROM_PTR_R10 xor r12b, byte ptr [r10]
#define XOR_R12B_FROM_PTR_R11 xor r12b, byte ptr [r11]
#define XOR_R12B_FROM_PTR_R12 xor r12b, byte ptr [r12]
#define XOR_R12B_FROM_PTR_R13 xor r12b, byte ptr [r13]
#define XOR_R12B_FROM_PTR_R14 xor r12b, byte ptr [r14]
#define XOR_R12B_FROM_PTR_R15 xor r12b, byte ptr [r15]
#define XOR_R12B_FROM_PTR_EAX xor r12b, byte ptr [eax]
#define XOR_R12B_FROM_PTR_EBX xor r12b, byte ptr [ebx]
#define XOR_R12B_FROM_PTR_ECX xor r12b, byte ptr [ecx]
#define XOR_R12B_FROM_PTR_EDX xor r12b, byte ptr [edx]
#define XOR_R12B_FROM_PTR_EDI xor r12b, byte ptr [edi]
#define XOR_R12B_FROM_PTR_ESI xor r12b, byte ptr [esi]
#define XOR_R12B_FROM_PTR_EBP xor r12b, byte ptr [ebp]
#define XOR_R12B_FROM_PTR_ESP xor r12b, byte ptr [esp]

#define XOR_R13B_FROM_PTR_RAX xor r13b, byte ptr [rax]
#define XOR_R13B_FROM_PTR_RBX xor r13b, byte ptr [rbx]
#define XOR_R13B_FROM_PTR_RCX xor r13b, byte ptr [rcx]
#define XOR_R13B_FROM_PTR_RDX xor r13b, byte ptr [rdx]
#define XOR_R13B_FROM_PTR_RDI xor r13b, byte ptr [rdi]
#define XOR_R13B_FROM_PTR_RSI xor r13b, byte ptr [rsi]
#define XOR_R13B_FROM_PTR_RBP xor r13b, byte ptr [rbp]
#define XOR_R13B_FROM_PTR_RSP xor r13b, byte ptr [rsp]
#define XOR_R13B_FROM_PTR_R8 xor r13b, byte ptr [r8]
#define XOR_R13B_FROM_PTR_R9 xor r13b, byte ptr [r9]
#define XOR_R13B_FROM_PTR_R10 xor r13b, byte ptr [r10]
#define XOR_R13B_FROM_PTR_R11 xor r13b, byte ptr [r11]
#define XOR_R13B_FROM_PTR_R12 xor r13b, byte ptr [r12]
#define XOR_R13B_FROM_PTR_R13 xor r13b, byte ptr [r13]
#define XOR_R13B_FROM_PTR_R14 xor r13b, byte ptr [r14]
#define XOR_R13B_FROM_PTR_R15 xor r13b, byte ptr [r15]
#define XOR_R13B_FROM_PTR_EAX xor r13b, byte ptr [eax]
#define XOR_R13B_FROM_PTR_EBX xor r13b, byte ptr [ebx]
#define XOR_R13B_FROM_PTR_ECX xor r13b, byte ptr [ecx]
#define XOR_R13B_FROM_PTR_EDX xor r13b, byte ptr [edx]
#define XOR_R13B_FROM_PTR_EDI xor r13b, byte ptr [edi]
#define XOR_R13B_FROM_PTR_ESI xor r13b, byte ptr [esi]
#define XOR_R13B_FROM_PTR_EBP xor r13b, byte ptr [ebp]
#define XOR_R13B_FROM_PTR_ESP xor r13b, byte ptr [esp]

#define XOR_R14B_FROM_PTR_RAX xor r14b, byte ptr [rax]
#define XOR_R14B_FROM_PTR_RBX xor r14b, byte ptr [rbx]
#define XOR_R14B_FROM_PTR_RCX xor r14b, byte ptr [rcx]
#define XOR_R14B_FROM_PTR_RDX xor r14b, byte ptr [rdx]
#define XOR_R14B_FROM_PTR_RDI xor r14b, byte ptr [rdi]
#define XOR_R14B_FROM_PTR_RSI xor r14b, byte ptr [rsi]
#define XOR_R14B_FROM_PTR_RBP xor r14b, byte ptr [rbp]
#define XOR_R14B_FROM_PTR_RSP xor r14b, byte ptr [rsp]
#define XOR_R14B_FROM_PTR_R8 xor r14b, byte ptr [r8]
#define XOR_R14B_FROM_PTR_R9 xor r14b, byte ptr [r9]
#define XOR_R14B_FROM_PTR_R10 xor r14b, byte ptr [r10]
#define XOR_R14B_FROM_PTR_R11 xor r14b, byte ptr [r11]
#define XOR_R14B_FROM_PTR_R12 xor r14b, byte ptr [r12]
#define XOR_R14B_FROM_PTR_R13 xor r14b, byte ptr [r13]
#define XOR_R14B_FROM_PTR_R14 xor r14b, byte ptr [r14]
#define XOR_R14B_FROM_PTR_R15 xor r14b, byte ptr [r15]
#define XOR_R14B_FROM_PTR_EAX xor r14b, byte ptr [eax]
#define XOR_R14B_FROM_PTR_EBX xor r14b, byte ptr [ebx]
#define XOR_R14B_FROM_PTR_ECX xor r14b, byte ptr [ecx]
#define XOR_R14B_FROM_PTR_EDX xor r14b, byte ptr [edx]
#define XOR_R14B_FROM_PTR_EDI xor r14b, byte ptr [edi]
#define XOR_R14B_FROM_PTR_ESI xor r14b, byte ptr [esi]
#define XOR_R14B_FROM_PTR_EBP xor r14b, byte ptr [ebp]
#define XOR_R14B_FROM_PTR_ESP xor r14b, byte ptr [esp]

#define XOR_R15B_FROM_PTR_RAX xor r15b, byte ptr [rax]
#define XOR_R15B_FROM_PTR_RBX xor r15b, byte ptr [rbx]
#define XOR_R15B_FROM_PTR_RCX xor r15b, byte ptr [rcx]
#define XOR_R15B_FROM_PTR_RDX xor r15b, byte ptr [rdx]
#define XOR_R15B_FROM_PTR_RDI xor r15b, byte ptr [rdi]
#define XOR_R15B_FROM_PTR_RSI xor r15b, byte ptr [rsi]
#define XOR_R15B_FROM_PTR_RBP xor r15b, byte ptr [rbp]
#define XOR_R15B_FROM_PTR_RSP xor r15b, byte ptr [rsp]
#define XOR_R15B_FROM_PTR_R8 xor r15b, byte ptr [r8]
#define XOR_R15B_FROM_PTR_R9 xor r15b, byte ptr [r9]
#define XOR_R15B_FROM_PTR_R10 xor r15b, byte ptr [r10]
#define XOR_R15B_FROM_PTR_R11 xor r15b, byte ptr [r11]
#define XOR_R15B_FROM_PTR_R12 xor r15b, byte ptr [r12]
#define XOR_R15B_FROM_PTR_R13 xor r15b, byte ptr [r13]
#define XOR_R15B_FROM_PTR_R14 xor r15b, byte ptr [r14]
#define XOR_R15B_FROM_PTR_R15 xor r15b, byte ptr [r15]
#define XOR_R15B_FROM_PTR_EAX xor r15b, byte ptr [eax]
#define XOR_R15B_FROM_PTR_EBX xor r15b, byte ptr [ebx]
#define XOR_R15B_FROM_PTR_ECX xor r15b, byte ptr [ecx]
#define XOR_R15B_FROM_PTR_EDX xor r15b, byte ptr [edx]
#define XOR_R15B_FROM_PTR_EDI xor r15b, byte ptr [edi]
#define XOR_R15B_FROM_PTR_ESI xor r15b, byte ptr [esi]
#define XOR_R15B_FROM_PTR_EBP xor r15b, byte ptr [ebp]
#define XOR_R15B_FROM_PTR_ESP xor r15b, byte ptr [esp]

#define XOR_AL_TO_PTR_RAX xor byte ptr [rax], al
#define XOR_AL_TO_PTR_RBX xor byte ptr [rbx], al
#define XOR_AL_TO_PTR_RCX xor byte ptr [rcx], al
#define XOR_AL_TO_PTR_RDX xor byte ptr [rdx], al
#define XOR_AL_TO_PTR_RDI xor byte ptr [rdi], al
#define XOR_AL_TO_PTR_RSI xor byte ptr [rsi], al
#define XOR_AL_TO_PTR_RBP xor byte ptr [rbp], al
#define XOR_AL_TO_PTR_RSP xor byte ptr [rsp], al
#define XOR_AL_TO_PTR_R8 xor byte ptr [r8], al
#define XOR_AL_TO_PTR_R9 xor byte ptr [r9], al
#define XOR_AL_TO_PTR_R10 xor byte ptr [r10], al
#define XOR_AL_TO_PTR_R11 xor byte ptr [r11], al
#define XOR_AL_TO_PTR_R12 xor byte ptr [r12], al
#define XOR_AL_TO_PTR_R13 xor byte ptr [r13], al
#define XOR_AL_TO_PTR_R14 xor byte ptr [r14], al
#define XOR_AL_TO_PTR_R15 xor byte ptr [r15], al
#define XOR_AL_TO_PTR_EAX xor byte ptr [eax], al
#define XOR_AL_TO_PTR_EBX xor byte ptr [ebx], al
#define XOR_AL_TO_PTR_ECX xor byte ptr [ecx], al
#define XOR_AL_TO_PTR_EDX xor byte ptr [edx], al
#define XOR_AL_TO_PTR_EDI xor byte ptr [edi], al
#define XOR_AL_TO_PTR_ESI xor byte ptr [esi], al
#define XOR_AL_TO_PTR_EBP xor byte ptr [ebp], al
#define XOR_AL_TO_PTR_ESP xor byte ptr [esp], al

#define XOR_BL_TO_PTR_RAX xor byte ptr [rax], bl
#define XOR_BL_TO_PTR_RBX xor byte ptr [rbx], bl
#define XOR_BL_TO_PTR_RCX xor byte ptr [rcx], bl
#define XOR_BL_TO_PTR_RDX xor byte ptr [rdx], bl
#define XOR_BL_TO_PTR_RDI xor byte ptr [rdi], bl
#define XOR_BL_TO_PTR_RSI xor byte ptr [rsi], bl
#define XOR_BL_TO_PTR_RBP xor byte ptr [rbp], bl
#define XOR_BL_TO_PTR_RSP xor byte ptr [rsp], bl
#define XOR_BL_TO_PTR_R8 xor byte ptr [r8], bl
#define XOR_BL_TO_PTR_R9 xor byte ptr [r9], bl
#define XOR_BL_TO_PTR_R10 xor byte ptr [r10], bl
#define XOR_BL_TO_PTR_R11 xor byte ptr [r11], bl
#define XOR_BL_TO_PTR_R12 xor byte ptr [r12], bl
#define XOR_BL_TO_PTR_R13 xor byte ptr [r13], bl
#define XOR_BL_TO_PTR_R14 xor byte ptr [r14], bl
#define XOR_BL_TO_PTR_R15 xor byte ptr [r15], bl
#define XOR_BL_TO_PTR_EAX xor byte ptr [eax], bl
#define XOR_BL_TO_PTR_EBX xor byte ptr [ebx], bl
#define XOR_BL_TO_PTR_ECX xor byte ptr [ecx], bl
#define XOR_BL_TO_PTR_EDX xor byte ptr [edx], bl
#define XOR_BL_TO_PTR_EDI xor byte ptr [edi], bl
#define XOR_BL_TO_PTR_ESI xor byte ptr [esi], bl
#define XOR_BL_TO_PTR_EBP xor byte ptr [ebp], bl
#define XOR_BL_TO_PTR_ESP xor byte ptr [esp], bl

#define XOR_CL_TO_PTR_RAX xor byte ptr [rax], cl
#define XOR_CL_TO_PTR_RBX xor byte ptr [rbx], cl
#define XOR_CL_TO_PTR_RCX xor byte ptr [rcx], cl
#define XOR_CL_TO_PTR_RDX xor byte ptr [rdx], cl
#define XOR_CL_TO_PTR_RDI xor byte ptr [rdi], cl
#define XOR_CL_TO_PTR_RSI xor byte ptr [rsi], cl
#define XOR_CL_TO_PTR_RBP xor byte ptr [rbp], cl
#define XOR_CL_TO_PTR_RSP xor byte ptr [rsp], cl
#define XOR_CL_TO_PTR_R8 xor byte ptr [r8], cl
#define XOR_CL_TO_PTR_R9 xor byte ptr [r9], cl
#define XOR_CL_TO_PTR_R10 xor byte ptr [r10], cl
#define XOR_CL_TO_PTR_R11 xor byte ptr [r11], cl
#define XOR_CL_TO_PTR_R12 xor byte ptr [r12], cl
#define XOR_CL_TO_PTR_R13 xor byte ptr [r13], cl
#define XOR_CL_TO_PTR_R14 xor byte ptr [r14], cl
#define XOR_CL_TO_PTR_R15 xor byte ptr [r15], cl
#define XOR_CL_TO_PTR_EAX xor byte ptr [eax], cl
#define XOR_CL_TO_PTR_EBX xor byte ptr [ebx], cl
#define XOR_CL_TO_PTR_ECX xor byte ptr [ecx], cl
#define XOR_CL_TO_PTR_EDX xor byte ptr [edx], cl
#define XOR_CL_TO_PTR_EDI xor byte ptr [edi], cl
#define XOR_CL_TO_PTR_ESI xor byte ptr [esi], cl
#define XOR_CL_TO_PTR_EBP xor byte ptr [ebp], cl
#define XOR_CL_TO_PTR_ESP xor byte ptr [esp], cl

#define XOR_DL_TO_PTR_RAX xor byte ptr [rax], dl
#define XOR_DL_TO_PTR_RBX xor byte ptr [rbx], dl
#define XOR_DL_TO_PTR_RCX xor byte ptr [rcx], dl
#define XOR_DL_TO_PTR_RDX xor byte ptr [rdx], dl
#define XOR_DL_TO_PTR_RDI xor byte ptr [rdi], dl
#define XOR_DL_TO_PTR_RSI xor byte ptr [rsi], dl
#define XOR_DL_TO_PTR_RBP xor byte ptr [rbp], dl
#define XOR_DL_TO_PTR_RSP xor byte ptr [rsp], dl
#define XOR_DL_TO_PTR_R8 xor byte ptr [r8], dl
#define XOR_DL_TO_PTR_R9 xor byte ptr [r9], dl
#define XOR_DL_TO_PTR_R10 xor byte ptr [r10], dl
#define XOR_DL_TO_PTR_R11 xor byte ptr [r11], dl
#define XOR_DL_TO_PTR_R12 xor byte ptr [r12], dl
#define XOR_DL_TO_PTR_R13 xor byte ptr [r13], dl
#define XOR_DL_TO_PTR_R14 xor byte ptr [r14], dl
#define XOR_DL_TO_PTR_R15 xor byte ptr [r15], dl
#define XOR_DL_TO_PTR_EAX xor byte ptr [eax], dl
#define XOR_DL_TO_PTR_EBX xor byte ptr [ebx], dl
#define XOR_DL_TO_PTR_ECX xor byte ptr [ecx], dl
#define XOR_DL_TO_PTR_EDX xor byte ptr [edx], dl
#define XOR_DL_TO_PTR_EDI xor byte ptr [edi], dl
#define XOR_DL_TO_PTR_ESI xor byte ptr [esi], dl
#define XOR_DL_TO_PTR_EBP xor byte ptr [ebp], dl
#define XOR_DL_TO_PTR_ESP xor byte ptr [esp], dl

#define XOR_DIL_TO_PTR_RAX xor byte ptr [rax], dil
#define XOR_DIL_TO_PTR_RBX xor byte ptr [rbx], dil
#define XOR_DIL_TO_PTR_RCX xor byte ptr [rcx], dil
#define XOR_DIL_TO_PTR_RDX xor byte ptr [rdx], dil
#define XOR_DIL_TO_PTR_RDI xor byte ptr [rdi], dil
#define XOR_DIL_TO_PTR_RSI xor byte ptr [rsi], dil
#define XOR_DIL_TO_PTR_RBP xor byte ptr [rbp], dil
#define XOR_DIL_TO_PTR_RSP xor byte ptr [rsp], dil
#define XOR_DIL_TO_PTR_R8 xor byte ptr [r8], dil
#define XOR_DIL_TO_PTR_R9 xor byte ptr [r9], dil
#define XOR_DIL_TO_PTR_R10 xor byte ptr [r10], dil
#define XOR_DIL_TO_PTR_R11 xor byte ptr [r11], dil
#define XOR_DIL_TO_PTR_R12 xor byte ptr [r12], dil
#define XOR_DIL_TO_PTR_R13 xor byte ptr [r13], dil
#define XOR_DIL_TO_PTR_R14 xor byte ptr [r14], dil
#define XOR_DIL_TO_PTR_R15 xor byte ptr [r15], dil
#define XOR_DIL_TO_PTR_EAX xor byte ptr [eax], dil
#define XOR_DIL_TO_PTR_EBX xor byte ptr [ebx], dil
#define XOR_DIL_TO_PTR_ECX xor byte ptr [ecx], dil
#define XOR_DIL_TO_PTR_EDX xor byte ptr [edx], dil
#define XOR_DIL_TO_PTR_EDI xor byte ptr [edi], dil
#define XOR_DIL_TO_PTR_ESI xor byte ptr [esi], dil
#define XOR_DIL_TO_PTR_EBP xor byte ptr [ebp], dil
#define XOR_DIL_TO_PTR_ESP xor byte ptr [esp], dil

#define XOR_SIL_TO_PTR_RAX xor byte ptr [rax], sil
#define XOR_SIL_TO_PTR_RBX xor byte ptr [rbx], sil
#define XOR_SIL_TO_PTR_RCX xor byte ptr [rcx], sil
#define XOR_SIL_TO_PTR_RDX xor byte ptr [rdx], sil
#define XOR_SIL_TO_PTR_RDI xor byte ptr [rdi], sil
#define XOR_SIL_TO_PTR_RSI xor byte ptr [rsi], sil
#define XOR_SIL_TO_PTR_RBP xor byte ptr [rbp], sil
#define XOR_SIL_TO_PTR_RSP xor byte ptr [rsp], sil
#define XOR_SIL_TO_PTR_R8 xor byte ptr [r8], sil
#define XOR_SIL_TO_PTR_R9 xor byte ptr [r9], sil
#define XOR_SIL_TO_PTR_R10 xor byte ptr [r10], sil
#define XOR_SIL_TO_PTR_R11 xor byte ptr [r11], sil
#define XOR_SIL_TO_PTR_R12 xor byte ptr [r12], sil
#define XOR_SIL_TO_PTR_R13 xor byte ptr [r13], sil
#define XOR_SIL_TO_PTR_R14 xor byte ptr [r14], sil
#define XOR_SIL_TO_PTR_R15 xor byte ptr [r15], sil
#define XOR_SIL_TO_PTR_EAX xor byte ptr [eax], sil
#define XOR_SIL_TO_PTR_EBX xor byte ptr [ebx], sil
#define XOR_SIL_TO_PTR_ECX xor byte ptr [ecx], sil
#define XOR_SIL_TO_PTR_EDX xor byte ptr [edx], sil
#define XOR_SIL_TO_PTR_EDI xor byte ptr [edi], sil
#define XOR_SIL_TO_PTR_ESI xor byte ptr [esi], sil
#define XOR_SIL_TO_PTR_EBP xor byte ptr [ebp], sil
#define XOR_SIL_TO_PTR_ESP xor byte ptr [esp], sil

#define XOR_BPL_TO_PTR_RAX xor byte ptr [rax], bpl
#define XOR_BPL_TO_PTR_RBX xor byte ptr [rbx], bpl
#define XOR_BPL_TO_PTR_RCX xor byte ptr [rcx], bpl
#define XOR_BPL_TO_PTR_RDX xor byte ptr [rdx], bpl
#define XOR_BPL_TO_PTR_RDI xor byte ptr [rdi], bpl
#define XOR_BPL_TO_PTR_RSI xor byte ptr [rsi], bpl
#define XOR_BPL_TO_PTR_RBP xor byte ptr [rbp], bpl
#define XOR_BPL_TO_PTR_RSP xor byte ptr [rsp], bpl
#define XOR_BPL_TO_PTR_R8 xor byte ptr [r8], bpl
#define XOR_BPL_TO_PTR_R9 xor byte ptr [r9], bpl
#define XOR_BPL_TO_PTR_R10 xor byte ptr [r10], bpl
#define XOR_BPL_TO_PTR_R11 xor byte ptr [r11], bpl
#define XOR_BPL_TO_PTR_R12 xor byte ptr [r12], bpl
#define XOR_BPL_TO_PTR_R13 xor byte ptr [r13], bpl
#define XOR_BPL_TO_PTR_R14 xor byte ptr [r14], bpl
#define XOR_BPL_TO_PTR_R15 xor byte ptr [r15], bpl
#define XOR_BPL_TO_PTR_EAX xor byte ptr [eax], bpl
#define XOR_BPL_TO_PTR_EBX xor byte ptr [ebx], bpl
#define XOR_BPL_TO_PTR_ECX xor byte ptr [ecx], bpl
#define XOR_BPL_TO_PTR_EDX xor byte ptr [edx], bpl
#define XOR_BPL_TO_PTR_EDI xor byte ptr [edi], bpl
#define XOR_BPL_TO_PTR_ESI xor byte ptr [esi], bpl
#define XOR_BPL_TO_PTR_EBP xor byte ptr [ebp], bpl
#define XOR_BPL_TO_PTR_ESP xor byte ptr [esp], bpl

#define XOR_SPL_TO_PTR_RAX xor byte ptr [rax], spl
#define XOR_SPL_TO_PTR_RBX xor byte ptr [rbx], spl
#define XOR_SPL_TO_PTR_RCX xor byte ptr [rcx], spl
#define XOR_SPL_TO_PTR_RDX xor byte ptr [rdx], spl
#define XOR_SPL_TO_PTR_RDI xor byte ptr [rdi], spl
#define XOR_SPL_TO_PTR_RSI xor byte ptr [rsi], spl
#define XOR_SPL_TO_PTR_RBP xor byte ptr [rbp], spl
#define XOR_SPL_TO_PTR_RSP xor byte ptr [rsp], spl
#define XOR_SPL_TO_PTR_R8 xor byte ptr [r8], spl
#define XOR_SPL_TO_PTR_R9 xor byte ptr [r9], spl
#define XOR_SPL_TO_PTR_R10 xor byte ptr [r10], spl
#define XOR_SPL_TO_PTR_R11 xor byte ptr [r11], spl
#define XOR_SPL_TO_PTR_R12 xor byte ptr [r12], spl
#define XOR_SPL_TO_PTR_R13 xor byte ptr [r13], spl
#define XOR_SPL_TO_PTR_R14 xor byte ptr [r14], spl
#define XOR_SPL_TO_PTR_R15 xor byte ptr [r15], spl
#define XOR_SPL_TO_PTR_EAX xor byte ptr [eax], spl
#define XOR_SPL_TO_PTR_EBX xor byte ptr [ebx], spl
#define XOR_SPL_TO_PTR_ECX xor byte ptr [ecx], spl
#define XOR_SPL_TO_PTR_EDX xor byte ptr [edx], spl
#define XOR_SPL_TO_PTR_EDI xor byte ptr [edi], spl
#define XOR_SPL_TO_PTR_ESI xor byte ptr [esi], spl
#define XOR_SPL_TO_PTR_EBP xor byte ptr [ebp], spl
#define XOR_SPL_TO_PTR_ESP xor byte ptr [esp], spl

#define XOR_R8B_TO_PTR_RAX xor byte ptr [rax], r8b
#define XOR_R8B_TO_PTR_RBX xor byte ptr [rbx], r8b
#define XOR_R8B_TO_PTR_RCX xor byte ptr [rcx], r8b
#define XOR_R8B_TO_PTR_RDX xor byte ptr [rdx], r8b
#define XOR_R8B_TO_PTR_RDI xor byte ptr [rdi], r8b
#define XOR_R8B_TO_PTR_RSI xor byte ptr [rsi], r8b
#define XOR_R8B_TO_PTR_RBP xor byte ptr [rbp], r8b
#define XOR_R8B_TO_PTR_RSP xor byte ptr [rsp], r8b
#define XOR_R8B_TO_PTR_R8 xor byte ptr [r8], r8b
#define XOR_R8B_TO_PTR_R9 xor byte ptr [r9], r8b
#define XOR_R8B_TO_PTR_R10 xor byte ptr [r10], r8b
#define XOR_R8B_TO_PTR_R11 xor byte ptr [r11], r8b
#define XOR_R8B_TO_PTR_R12 xor byte ptr [r12], r8b
#define XOR_R8B_TO_PTR_R13 xor byte ptr [r13], r8b
#define XOR_R8B_TO_PTR_R14 xor byte ptr [r14], r8b
#define XOR_R8B_TO_PTR_R15 xor byte ptr [r15], r8b
#define XOR_R8B_TO_PTR_EAX xor byte ptr [eax], r8b
#define XOR_R8B_TO_PTR_EBX xor byte ptr [ebx], r8b
#define XOR_R8B_TO_PTR_ECX xor byte ptr [ecx], r8b
#define XOR_R8B_TO_PTR_EDX xor byte ptr [edx], r8b
#define XOR_R8B_TO_PTR_EDI xor byte ptr [edi], r8b
#define XOR_R8B_TO_PTR_ESI xor byte ptr [esi], r8b
#define XOR_R8B_TO_PTR_EBP xor byte ptr [ebp], r8b
#define XOR_R8B_TO_PTR_ESP xor byte ptr [esp], r8b

#define XOR_R9B_TO_PTR_RAX xor byte ptr [rax], r9b
#define XOR_R9B_TO_PTR_RBX xor byte ptr [rbx], r9b
#define XOR_R9B_TO_PTR_RCX xor byte ptr [rcx], r9b
#define XOR_R9B_TO_PTR_RDX xor byte ptr [rdx], r9b
#define XOR_R9B_TO_PTR_RDI xor byte ptr [rdi], r9b
#define XOR_R9B_TO_PTR_RSI xor byte ptr [rsi], r9b
#define XOR_R9B_TO_PTR_RBP xor byte ptr [rbp], r9b
#define XOR_R9B_TO_PTR_RSP xor byte ptr [rsp], r9b
#define XOR_R9B_TO_PTR_R8 xor byte ptr [r8], r9b
#define XOR_R9B_TO_PTR_R9 xor byte ptr [r9], r9b
#define XOR_R9B_TO_PTR_R10 xor byte ptr [r10], r9b
#define XOR_R9B_TO_PTR_R11 xor byte ptr [r11], r9b
#define XOR_R9B_TO_PTR_R12 xor byte ptr [r12], r9b
#define XOR_R9B_TO_PTR_R13 xor byte ptr [r13], r9b
#define XOR_R9B_TO_PTR_R14 xor byte ptr [r14], r9b
#define XOR_R9B_TO_PTR_R15 xor byte ptr [r15], r9b
#define XOR_R9B_TO_PTR_EAX xor byte ptr [eax], r9b
#define XOR_R9B_TO_PTR_EBX xor byte ptr [ebx], r9b
#define XOR_R9B_TO_PTR_ECX xor byte ptr [ecx], r9b
#define XOR_R9B_TO_PTR_EDX xor byte ptr [edx], r9b
#define XOR_R9B_TO_PTR_EDI xor byte ptr [edi], r9b
#define XOR_R9B_TO_PTR_ESI xor byte ptr [esi], r9b
#define XOR_R9B_TO_PTR_EBP xor byte ptr [ebp], r9b
#define XOR_R9B_TO_PTR_ESP xor byte ptr [esp], r9b

#define XOR_R10B_TO_PTR_RAX xor byte ptr [rax], r10b
#define XOR_R10B_TO_PTR_RBX xor byte ptr [rbx], r10b
#define XOR_R10B_TO_PTR_RCX xor byte ptr [rcx], r10b
#define XOR_R10B_TO_PTR_RDX xor byte ptr [rdx], r10b
#define XOR_R10B_TO_PTR_RDI xor byte ptr [rdi], r10b
#define XOR_R10B_TO_PTR_RSI xor byte ptr [rsi], r10b
#define XOR_R10B_TO_PTR_RBP xor byte ptr [rbp], r10b
#define XOR_R10B_TO_PTR_RSP xor byte ptr [rsp], r10b
#define XOR_R10B_TO_PTR_R8 xor byte ptr [r8], r10b
#define XOR_R10B_TO_PTR_R9 xor byte ptr [r9], r10b
#define XOR_R10B_TO_PTR_R10 xor byte ptr [r10], r10b
#define XOR_R10B_TO_PTR_R11 xor byte ptr [r11], r10b
#define XOR_R10B_TO_PTR_R12 xor byte ptr [r12], r10b
#define XOR_R10B_TO_PTR_R13 xor byte ptr [r13], r10b
#define XOR_R10B_TO_PTR_R14 xor byte ptr [r14], r10b
#define XOR_R10B_TO_PTR_R15 xor byte ptr [r15], r10b
#define XOR_R10B_TO_PTR_EAX xor byte ptr [eax], r10b
#define XOR_R10B_TO_PTR_EBX xor byte ptr [ebx], r10b
#define XOR_R10B_TO_PTR_ECX xor byte ptr [ecx], r10b
#define XOR_R10B_TO_PTR_EDX xor byte ptr [edx], r10b
#define XOR_R10B_TO_PTR_EDI xor byte ptr [edi], r10b
#define XOR_R10B_TO_PTR_ESI xor byte ptr [esi], r10b
#define XOR_R10B_TO_PTR_EBP xor byte ptr [ebp], r10b
#define XOR_R10B_TO_PTR_ESP xor byte ptr [esp], r10b

#define XOR_R11B_TO_PTR_RAX xor byte ptr [rax], r11b
#define XOR_R11B_TO_PTR_RBX xor byte ptr [rbx], r11b
#define XOR_R11B_TO_PTR_RCX xor byte ptr [rcx], r11b
#define XOR_R11B_TO_PTR_RDX xor byte ptr [rdx], r11b
#define XOR_R11B_TO_PTR_RDI xor byte ptr [rdi], r11b
#define XOR_R11B_TO_PTR_RSI xor byte ptr [rsi], r11b
#define XOR_R11B_TO_PTR_RBP xor byte ptr [rbp], r11b
#define XOR_R11B_TO_PTR_RSP xor byte ptr [rsp], r11b
#define XOR_R11B_TO_PTR_R8 xor byte ptr [r8], r11b
#define XOR_R11B_TO_PTR_R9 xor byte ptr [r9], r11b
#define XOR_R11B_TO_PTR_R10 xor byte ptr [r10], r11b
#define XOR_R11B_TO_PTR_R11 xor byte ptr [r11], r11b
#define XOR_R11B_TO_PTR_R12 xor byte ptr [r12], r11b
#define XOR_R11B_TO_PTR_R13 xor byte ptr [r13], r11b
#define XOR_R11B_TO_PTR_R14 xor byte ptr [r14], r11b
#define XOR_R11B_TO_PTR_R15 xor byte ptr [r15], r11b
#define XOR_R11B_TO_PTR_EAX xor byte ptr [eax], r11b
#define XOR_R11B_TO_PTR_EBX xor byte ptr [ebx], r11b
#define XOR_R11B_TO_PTR_ECX xor byte ptr [ecx], r11b
#define XOR_R11B_TO_PTR_EDX xor byte ptr [edx], r11b
#define XOR_R11B_TO_PTR_EDI xor byte ptr [edi], r11b
#define XOR_R11B_TO_PTR_ESI xor byte ptr [esi], r11b
#define XOR_R11B_TO_PTR_EBP xor byte ptr [ebp], r11b
#define XOR_R11B_TO_PTR_ESP xor byte ptr [esp], r11b

#define XOR_R12B_TO_PTR_RAX xor byte ptr [rax], r12b
#define XOR_R12B_TO_PTR_RBX xor byte ptr [rbx], r12b
#define XOR_R12B_TO_PTR_RCX xor byte ptr [rcx], r12b
#define XOR_R12B_TO_PTR_RDX xor byte ptr [rdx], r12b
#define XOR_R12B_TO_PTR_RDI xor byte ptr [rdi], r12b
#define XOR_R12B_TO_PTR_RSI xor byte ptr [rsi], r12b
#define XOR_R12B_TO_PTR_RBP xor byte ptr [rbp], r12b
#define XOR_R12B_TO_PTR_RSP xor byte ptr [rsp], r12b
#define XOR_R12B_TO_PTR_R8 xor byte ptr [r8], r12b
#define XOR_R12B_TO_PTR_R9 xor byte ptr [r9], r12b
#define XOR_R12B_TO_PTR_R10 xor byte ptr [r10], r12b
#define XOR_R12B_TO_PTR_R11 xor byte ptr [r11], r12b
#define XOR_R12B_TO_PTR_R12 xor byte ptr [r12], r12b
#define XOR_R12B_TO_PTR_R13 xor byte ptr [r13], r12b
#define XOR_R12B_TO_PTR_R14 xor byte ptr [r14], r12b
#define XOR_R12B_TO_PTR_R15 xor byte ptr [r15], r12b
#define XOR_R12B_TO_PTR_EAX xor byte ptr [eax], r12b
#define XOR_R12B_TO_PTR_EBX xor byte ptr [ebx], r12b
#define XOR_R12B_TO_PTR_ECX xor byte ptr [ecx], r12b
#define XOR_R12B_TO_PTR_EDX xor byte ptr [edx], r12b
#define XOR_R12B_TO_PTR_EDI xor byte ptr [edi], r12b
#define XOR_R12B_TO_PTR_ESI xor byte ptr [esi], r12b
#define XOR_R12B_TO_PTR_EBP xor byte ptr [ebp], r12b
#define XOR_R12B_TO_PTR_ESP xor byte ptr [esp], r12b

#define XOR_R13B_TO_PTR_RAX xor byte ptr [rax], r13b
#define XOR_R13B_TO_PTR_RBX xor byte ptr [rbx], r13b
#define XOR_R13B_TO_PTR_RCX xor byte ptr [rcx], r13b
#define XOR_R13B_TO_PTR_RDX xor byte ptr [rdx], r13b
#define XOR_R13B_TO_PTR_RDI xor byte ptr [rdi], r13b
#define XOR_R13B_TO_PTR_RSI xor byte ptr [rsi], r13b
#define XOR_R13B_TO_PTR_RBP xor byte ptr [rbp], r13b
#define XOR_R13B_TO_PTR_RSP xor byte ptr [rsp], r13b
#define XOR_R13B_TO_PTR_R8 xor byte ptr [r8], r13b
#define XOR_R13B_TO_PTR_R9 xor byte ptr [r9], r13b
#define XOR_R13B_TO_PTR_R10 xor byte ptr [r10], r13b
#define XOR_R13B_TO_PTR_R11 xor byte ptr [r11], r13b
#define XOR_R13B_TO_PTR_R12 xor byte ptr [r12], r13b
#define XOR_R13B_TO_PTR_R13 xor byte ptr [r13], r13b
#define XOR_R13B_TO_PTR_R14 xor byte ptr [r14], r13b
#define XOR_R13B_TO_PTR_R15 xor byte ptr [r15], r13b
#define XOR_R13B_TO_PTR_EAX xor byte ptr [eax], r13b
#define XOR_R13B_TO_PTR_EBX xor byte ptr [ebx], r13b
#define XOR_R13B_TO_PTR_ECX xor byte ptr [ecx], r13b
#define XOR_R13B_TO_PTR_EDX xor byte ptr [edx], r13b
#define XOR_R13B_TO_PTR_EDI xor byte ptr [edi], r13b
#define XOR_R13B_TO_PTR_ESI xor byte ptr [esi], r13b
#define XOR_R13B_TO_PTR_EBP xor byte ptr [ebp], r13b
#define XOR_R13B_TO_PTR_ESP xor byte ptr [esp], r13b

#define XOR_R14B_TO_PTR_RAX xor byte ptr [rax], r14b
#define XOR_R14B_TO_PTR_RBX xor byte ptr [rbx], r14b
#define XOR_R14B_TO_PTR_RCX xor byte ptr [rcx], r14b
#define XOR_R14B_TO_PTR_RDX xor byte ptr [rdx], r14b
#define XOR_R14B_TO_PTR_RDI xor byte ptr [rdi], r14b
#define XOR_R14B_TO_PTR_RSI xor byte ptr [rsi], r14b
#define XOR_R14B_TO_PTR_RBP xor byte ptr [rbp], r14b
#define XOR_R14B_TO_PTR_RSP xor byte ptr [rsp], r14b
#define XOR_R14B_TO_PTR_R8 xor byte ptr [r8], r14b
#define XOR_R14B_TO_PTR_R9 xor byte ptr [r9], r14b
#define XOR_R14B_TO_PTR_R10 xor byte ptr [r10], r14b
#define XOR_R14B_TO_PTR_R11 xor byte ptr [r11], r14b
#define XOR_R14B_TO_PTR_R12 xor byte ptr [r12], r14b
#define XOR_R14B_TO_PTR_R13 xor byte ptr [r13], r14b
#define XOR_R14B_TO_PTR_R14 xor byte ptr [r14], r14b
#define XOR_R14B_TO_PTR_R15 xor byte ptr [r15], r14b
#define XOR_R14B_TO_PTR_EAX xor byte ptr [eax], r14b
#define XOR_R14B_TO_PTR_EBX xor byte ptr [ebx], r14b
#define XOR_R14B_TO_PTR_ECX xor byte ptr [ecx], r14b
#define XOR_R14B_TO_PTR_EDX xor byte ptr [edx], r14b
#define XOR_R14B_TO_PTR_EDI xor byte ptr [edi], r14b
#define XOR_R14B_TO_PTR_ESI xor byte ptr [esi], r14b
#define XOR_R14B_TO_PTR_EBP xor byte ptr [ebp], r14b
#define XOR_R14B_TO_PTR_ESP xor byte ptr [esp], r14b

#define XOR_R15B_TO_PTR_RAX xor byte ptr [rax], r15b
#define XOR_R15B_TO_PTR_RBX xor byte ptr [rbx], r15b
#define XOR_R15B_TO_PTR_RCX xor byte ptr [rcx], r15b
#define XOR_R15B_TO_PTR_RDX xor byte ptr [rdx], r15b
#define XOR_R15B_TO_PTR_RDI xor byte ptr [rdi], r15b
#define XOR_R15B_TO_PTR_RSI xor byte ptr [rsi], r15b
#define XOR_R15B_TO_PTR_RBP xor byte ptr [rbp], r15b
#define XOR_R15B_TO_PTR_RSP xor byte ptr [rsp], r15b
#define XOR_R15B_TO_PTR_R8 xor byte ptr [r8], r15b
#define XOR_R15B_TO_PTR_R9 xor byte ptr [r9], r15b
#define XOR_R15B_TO_PTR_R10 xor byte ptr [r10], r15b
#define XOR_R15B_TO_PTR_R11 xor byte ptr [r11], r15b
#define XOR_R15B_TO_PTR_R12 xor byte ptr [r12], r15b
#define XOR_R15B_TO_PTR_R13 xor byte ptr [r13], r15b
#define XOR_R15B_TO_PTR_R14 xor byte ptr [r14], r15b
#define XOR_R15B_TO_PTR_R15 xor byte ptr [r15], r15b
#define XOR_R15B_TO_PTR_EAX xor byte ptr [eax], r15b
#define XOR_R15B_TO_PTR_EBX xor byte ptr [ebx], r15b
#define XOR_R15B_TO_PTR_ECX xor byte ptr [ecx], r15b
#define XOR_R15B_TO_PTR_EDX xor byte ptr [edx], r15b
#define XOR_R15B_TO_PTR_EDI xor byte ptr [edi], r15b
#define XOR_R15B_TO_PTR_ESI xor byte ptr [esi], r15b
#define XOR_R15B_TO_PTR_EBP xor byte ptr [ebp], r15b
#define XOR_R15B_TO_PTR_ESP xor byte ptr [esp], r15b

#define XOR_AL_FROM_PTR_RAX_(VALUE) xor al, byte ptr [rax + VALUE]
#define XOR_AL_FROM_PTR_RBX_(VALUE) xor al, byte ptr [rbx + VALUE]
#define XOR_AL_FROM_PTR_RCX_(VALUE) xor al, byte ptr [rcx + VALUE]
#define XOR_AL_FROM_PTR_RDX_(VALUE) xor al, byte ptr [rdx + VALUE]
#define XOR_AL_FROM_PTR_RDI_(VALUE) xor al, byte ptr [rdi + VALUE]
#define XOR_AL_FROM_PTR_RSI_(VALUE) xor al, byte ptr [rsi + VALUE]
#define XOR_AL_FROM_PTR_RBP_(VALUE) xor al, byte ptr [rbp + VALUE]
#define XOR_AL_FROM_PTR_RSP_(VALUE) xor al, byte ptr [rsp + VALUE]
#define XOR_AL_FROM_PTR_R8_(VALUE) xor al, byte ptr [r8 + VALUE]
#define XOR_AL_FROM_PTR_R9_(VALUE) xor al, byte ptr [r9 + VALUE]
#define XOR_AL_FROM_PTR_R10_(VALUE) xor al, byte ptr [r10 + VALUE]
#define XOR_AL_FROM_PTR_R11_(VALUE) xor al, byte ptr [r11 + VALUE]
#define XOR_AL_FROM_PTR_R12_(VALUE) xor al, byte ptr [r12 + VALUE]
#define XOR_AL_FROM_PTR_R13_(VALUE) xor al, byte ptr [r13 + VALUE]
#define XOR_AL_FROM_PTR_R14_(VALUE) xor al, byte ptr [r14 + VALUE]
#define XOR_AL_FROM_PTR_R15_(VALUE) xor al, byte ptr [r15 + VALUE]
#define XOR_AL_FROM_PTR_EAX_(VALUE) xor al, byte ptr [eax + VALUE]
#define XOR_AL_FROM_PTR_EBX_(VALUE) xor al, byte ptr [ebx + VALUE]
#define XOR_AL_FROM_PTR_ECX_(VALUE) xor al, byte ptr [ecx + VALUE]
#define XOR_AL_FROM_PTR_EDX_(VALUE) xor al, byte ptr [edx + VALUE]
#define XOR_AL_FROM_PTR_EDI_(VALUE) xor al, byte ptr [edi + VALUE]
#define XOR_AL_FROM_PTR_ESI_(VALUE) xor al, byte ptr [esi + VALUE]
#define XOR_AL_FROM_PTR_EBP_(VALUE) xor al, byte ptr [ebp + VALUE]
#define XOR_AL_FROM_PTR_ESP_(VALUE) xor al, byte ptr [esp + VALUE]

#define XOR_BL_FROM_PTR_RAX_(VALUE) xor bl, byte ptr [rax + VALUE]
#define XOR_BL_FROM_PTR_RBX_(VALUE) xor bl, byte ptr [rbx + VALUE]
#define XOR_BL_FROM_PTR_RCX_(VALUE) xor bl, byte ptr [rcx + VALUE]
#define XOR_BL_FROM_PTR_RDX_(VALUE) xor bl, byte ptr [rdx + VALUE]
#define XOR_BL_FROM_PTR_RDI_(VALUE) xor bl, byte ptr [rdi + VALUE]
#define XOR_BL_FROM_PTR_RSI_(VALUE) xor bl, byte ptr [rsi + VALUE]
#define XOR_BL_FROM_PTR_RBP_(VALUE) xor bl, byte ptr [rbp + VALUE]
#define XOR_BL_FROM_PTR_RSP_(VALUE) xor bl, byte ptr [rsp + VALUE]
#define XOR_BL_FROM_PTR_R8_(VALUE) xor bl, byte ptr [r8 + VALUE]
#define XOR_BL_FROM_PTR_R9_(VALUE) xor bl, byte ptr [r9 + VALUE]
#define XOR_BL_FROM_PTR_R10_(VALUE) xor bl, byte ptr [r10 + VALUE]
#define XOR_BL_FROM_PTR_R11_(VALUE) xor bl, byte ptr [r11 + VALUE]
#define XOR_BL_FROM_PTR_R12_(VALUE) xor bl, byte ptr [r12 + VALUE]
#define XOR_BL_FROM_PTR_R13_(VALUE) xor bl, byte ptr [r13 + VALUE]
#define XOR_BL_FROM_PTR_R14_(VALUE) xor bl, byte ptr [r14 + VALUE]
#define XOR_BL_FROM_PTR_R15_(VALUE) xor bl, byte ptr [r15 + VALUE]
#define XOR_BL_FROM_PTR_EAX_(VALUE) xor bl, byte ptr [eax + VALUE]
#define XOR_BL_FROM_PTR_EBX_(VALUE) xor bl, byte ptr [ebx + VALUE]
#define XOR_BL_FROM_PTR_ECX_(VALUE) xor bl, byte ptr [ecx + VALUE]
#define XOR_BL_FROM_PTR_EDX_(VALUE) xor bl, byte ptr [edx + VALUE]
#define XOR_BL_FROM_PTR_EDI_(VALUE) xor bl, byte ptr [edi + VALUE]
#define XOR_BL_FROM_PTR_ESI_(VALUE) xor bl, byte ptr [esi + VALUE]
#define XOR_BL_FROM_PTR_EBP_(VALUE) xor bl, byte ptr [ebp + VALUE]
#define XOR_BL_FROM_PTR_ESP_(VALUE) xor bl, byte ptr [esp + VALUE]

#define XOR_CL_FROM_PTR_RAX_(VALUE) xor cl, byte ptr [rax + VALUE]
#define XOR_CL_FROM_PTR_RBX_(VALUE) xor cl, byte ptr [rbx + VALUE]
#define XOR_CL_FROM_PTR_RCX_(VALUE) xor cl, byte ptr [rcx + VALUE]
#define XOR_CL_FROM_PTR_RDX_(VALUE) xor cl, byte ptr [rdx + VALUE]
#define XOR_CL_FROM_PTR_RDI_(VALUE) xor cl, byte ptr [rdi + VALUE]
#define XOR_CL_FROM_PTR_RSI_(VALUE) xor cl, byte ptr [rsi + VALUE]
#define XOR_CL_FROM_PTR_RBP_(VALUE) xor cl, byte ptr [rbp + VALUE]
#define XOR_CL_FROM_PTR_RSP_(VALUE) xor cl, byte ptr [rsp + VALUE]
#define XOR_CL_FROM_PTR_R8_(VALUE) xor cl, byte ptr [r8 + VALUE]
#define XOR_CL_FROM_PTR_R9_(VALUE) xor cl, byte ptr [r9 + VALUE]
#define XOR_CL_FROM_PTR_R10_(VALUE) xor cl, byte ptr [r10 + VALUE]
#define XOR_CL_FROM_PTR_R11_(VALUE) xor cl, byte ptr [r11 + VALUE]
#define XOR_CL_FROM_PTR_R12_(VALUE) xor cl, byte ptr [r12 + VALUE]
#define XOR_CL_FROM_PTR_R13_(VALUE) xor cl, byte ptr [r13 + VALUE]
#define XOR_CL_FROM_PTR_R14_(VALUE) xor cl, byte ptr [r14 + VALUE]
#define XOR_CL_FROM_PTR_R15_(VALUE) xor cl, byte ptr [r15 + VALUE]
#define XOR_CL_FROM_PTR_EAX_(VALUE) xor cl, byte ptr [eax + VALUE]
#define XOR_CL_FROM_PTR_EBX_(VALUE) xor cl, byte ptr [ebx + VALUE]
#define XOR_CL_FROM_PTR_ECX_(VALUE) xor cl, byte ptr [ecx + VALUE]
#define XOR_CL_FROM_PTR_EDX_(VALUE) xor cl, byte ptr [edx + VALUE]
#define XOR_CL_FROM_PTR_EDI_(VALUE) xor cl, byte ptr [edi + VALUE]
#define XOR_CL_FROM_PTR_ESI_(VALUE) xor cl, byte ptr [esi + VALUE]
#define XOR_CL_FROM_PTR_EBP_(VALUE) xor cl, byte ptr [ebp + VALUE]
#define XOR_CL_FROM_PTR_ESP_(VALUE) xor cl, byte ptr [esp + VALUE]

#define XOR_DL_FROM_PTR_RAX_(VALUE) xor dl, byte ptr [rax + VALUE]
#define XOR_DL_FROM_PTR_RBX_(VALUE) xor dl, byte ptr [rbx + VALUE]
#define XOR_DL_FROM_PTR_RCX_(VALUE) xor dl, byte ptr [rcx + VALUE]
#define XOR_DL_FROM_PTR_RDX_(VALUE) xor dl, byte ptr [rdx + VALUE]
#define XOR_DL_FROM_PTR_RDI_(VALUE) xor dl, byte ptr [rdi + VALUE]
#define XOR_DL_FROM_PTR_RSI_(VALUE) xor dl, byte ptr [rsi + VALUE]
#define XOR_DL_FROM_PTR_RBP_(VALUE) xor dl, byte ptr [rbp + VALUE]
#define XOR_DL_FROM_PTR_RSP_(VALUE) xor dl, byte ptr [rsp + VALUE]
#define XOR_DL_FROM_PTR_R8_(VALUE) xor dl, byte ptr [r8 + VALUE]
#define XOR_DL_FROM_PTR_R9_(VALUE) xor dl, byte ptr [r9 + VALUE]
#define XOR_DL_FROM_PTR_R10_(VALUE) xor dl, byte ptr [r10 + VALUE]
#define XOR_DL_FROM_PTR_R11_(VALUE) xor dl, byte ptr [r11 + VALUE]
#define XOR_DL_FROM_PTR_R12_(VALUE) xor dl, byte ptr [r12 + VALUE]
#define XOR_DL_FROM_PTR_R13_(VALUE) xor dl, byte ptr [r13 + VALUE]
#define XOR_DL_FROM_PTR_R14_(VALUE) xor dl, byte ptr [r14 + VALUE]
#define XOR_DL_FROM_PTR_R15_(VALUE) xor dl, byte ptr [r15 + VALUE]
#define XOR_DL_FROM_PTR_EAX_(VALUE) xor dl, byte ptr [eax + VALUE]
#define XOR_DL_FROM_PTR_EBX_(VALUE) xor dl, byte ptr [ebx + VALUE]
#define XOR_DL_FROM_PTR_ECX_(VALUE) xor dl, byte ptr [ecx + VALUE]
#define XOR_DL_FROM_PTR_EDX_(VALUE) xor dl, byte ptr [edx + VALUE]
#define XOR_DL_FROM_PTR_EDI_(VALUE) xor dl, byte ptr [edi + VALUE]
#define XOR_DL_FROM_PTR_ESI_(VALUE) xor dl, byte ptr [esi + VALUE]
#define XOR_DL_FROM_PTR_EBP_(VALUE) xor dl, byte ptr [ebp + VALUE]
#define XOR_DL_FROM_PTR_ESP_(VALUE) xor dl, byte ptr [esp + VALUE]

#define XOR_DIL_FROM_PTR_RAX_(VALUE) xor dil, byte ptr [rax + VALUE]
#define XOR_DIL_FROM_PTR_RBX_(VALUE) xor dil, byte ptr [rbx + VALUE]
#define XOR_DIL_FROM_PTR_RCX_(VALUE) xor dil, byte ptr [rcx + VALUE]
#define XOR_DIL_FROM_PTR_RDX_(VALUE) xor dil, byte ptr [rdx + VALUE]
#define XOR_DIL_FROM_PTR_RDI_(VALUE) xor dil, byte ptr [rdi + VALUE]
#define XOR_DIL_FROM_PTR_RSI_(VALUE) xor dil, byte ptr [rsi + VALUE]
#define XOR_DIL_FROM_PTR_RBP_(VALUE) xor dil, byte ptr [rbp + VALUE]
#define XOR_DIL_FROM_PTR_RSP_(VALUE) xor dil, byte ptr [rsp + VALUE]
#define XOR_DIL_FROM_PTR_R8_(VALUE) xor dil, byte ptr [r8 + VALUE]
#define XOR_DIL_FROM_PTR_R9_(VALUE) xor dil, byte ptr [r9 + VALUE]
#define XOR_DIL_FROM_PTR_R10_(VALUE) xor dil, byte ptr [r10 + VALUE]
#define XOR_DIL_FROM_PTR_R11_(VALUE) xor dil, byte ptr [r11 + VALUE]
#define XOR_DIL_FROM_PTR_R12_(VALUE) xor dil, byte ptr [r12 + VALUE]
#define XOR_DIL_FROM_PTR_R13_(VALUE) xor dil, byte ptr [r13 + VALUE]
#define XOR_DIL_FROM_PTR_R14_(VALUE) xor dil, byte ptr [r14 + VALUE]
#define XOR_DIL_FROM_PTR_R15_(VALUE) xor dil, byte ptr [r15 + VALUE]
#define XOR_DIL_FROM_PTR_EAX_(VALUE) xor dil, byte ptr [eax + VALUE]
#define XOR_DIL_FROM_PTR_EBX_(VALUE) xor dil, byte ptr [ebx + VALUE]
#define XOR_DIL_FROM_PTR_ECX_(VALUE) xor dil, byte ptr [ecx + VALUE]
#define XOR_DIL_FROM_PTR_EDX_(VALUE) xor dil, byte ptr [edx + VALUE]
#define XOR_DIL_FROM_PTR_EDI_(VALUE) xor dil, byte ptr [edi + VALUE]
#define XOR_DIL_FROM_PTR_ESI_(VALUE) xor dil, byte ptr [esi + VALUE]
#define XOR_DIL_FROM_PTR_EBP_(VALUE) xor dil, byte ptr [ebp + VALUE]
#define XOR_DIL_FROM_PTR_ESP_(VALUE) xor dil, byte ptr [esp + VALUE]

#define XOR_SIL_FROM_PTR_RAX_(VALUE) xor sil, byte ptr [rax + VALUE]
#define XOR_SIL_FROM_PTR_RBX_(VALUE) xor sil, byte ptr [rbx + VALUE]
#define XOR_SIL_FROM_PTR_RCX_(VALUE) xor sil, byte ptr [rcx + VALUE]
#define XOR_SIL_FROM_PTR_RDX_(VALUE) xor sil, byte ptr [rdx + VALUE]
#define XOR_SIL_FROM_PTR_RDI_(VALUE) xor sil, byte ptr [rdi + VALUE]
#define XOR_SIL_FROM_PTR_RSI_(VALUE) xor sil, byte ptr [rsi + VALUE]
#define XOR_SIL_FROM_PTR_RBP_(VALUE) xor sil, byte ptr [rbp + VALUE]
#define XOR_SIL_FROM_PTR_RSP_(VALUE) xor sil, byte ptr [rsp + VALUE]
#define XOR_SIL_FROM_PTR_R8_(VALUE) xor sil, byte ptr [r8 + VALUE]
#define XOR_SIL_FROM_PTR_R9_(VALUE) xor sil, byte ptr [r9 + VALUE]
#define XOR_SIL_FROM_PTR_R10_(VALUE) xor sil, byte ptr [r10 + VALUE]
#define XOR_SIL_FROM_PTR_R11_(VALUE) xor sil, byte ptr [r11 + VALUE]
#define XOR_SIL_FROM_PTR_R12_(VALUE) xor sil, byte ptr [r12 + VALUE]
#define XOR_SIL_FROM_PTR_R13_(VALUE) xor sil, byte ptr [r13 + VALUE]
#define XOR_SIL_FROM_PTR_R14_(VALUE) xor sil, byte ptr [r14 + VALUE]
#define XOR_SIL_FROM_PTR_R15_(VALUE) xor sil, byte ptr [r15 + VALUE]
#define XOR_SIL_FROM_PTR_EAX_(VALUE) xor sil, byte ptr [eax + VALUE]
#define XOR_SIL_FROM_PTR_EBX_(VALUE) xor sil, byte ptr [ebx + VALUE]
#define XOR_SIL_FROM_PTR_ECX_(VALUE) xor sil, byte ptr [ecx + VALUE]
#define XOR_SIL_FROM_PTR_EDX_(VALUE) xor sil, byte ptr [edx + VALUE]
#define XOR_SIL_FROM_PTR_EDI_(VALUE) xor sil, byte ptr [edi + VALUE]
#define XOR_SIL_FROM_PTR_ESI_(VALUE) xor sil, byte ptr [esi + VALUE]
#define XOR_SIL_FROM_PTR_EBP_(VALUE) xor sil, byte ptr [ebp + VALUE]
#define XOR_SIL_FROM_PTR_ESP_(VALUE) xor sil, byte ptr [esp + VALUE]

#define XOR_BPL_FROM_PTR_RAX_(VALUE) xor bpl, byte ptr [rax + VALUE]
#define XOR_BPL_FROM_PTR_RBX_(VALUE) xor bpl, byte ptr [rbx + VALUE]
#define XOR_BPL_FROM_PTR_RCX_(VALUE) xor bpl, byte ptr [rcx + VALUE]
#define XOR_BPL_FROM_PTR_RDX_(VALUE) xor bpl, byte ptr [rdx + VALUE]
#define XOR_BPL_FROM_PTR_RDI_(VALUE) xor bpl, byte ptr [rdi + VALUE]
#define XOR_BPL_FROM_PTR_RSI_(VALUE) xor bpl, byte ptr [rsi + VALUE]
#define XOR_BPL_FROM_PTR_RBP_(VALUE) xor bpl, byte ptr [rbp + VALUE]
#define XOR_BPL_FROM_PTR_RSP_(VALUE) xor bpl, byte ptr [rsp + VALUE]
#define XOR_BPL_FROM_PTR_R8_(VALUE) xor bpl, byte ptr [r8 + VALUE]
#define XOR_BPL_FROM_PTR_R9_(VALUE) xor bpl, byte ptr [r9 + VALUE]
#define XOR_BPL_FROM_PTR_R10_(VALUE) xor bpl, byte ptr [r10 + VALUE]
#define XOR_BPL_FROM_PTR_R11_(VALUE) xor bpl, byte ptr [r11 + VALUE]
#define XOR_BPL_FROM_PTR_R12_(VALUE) xor bpl, byte ptr [r12 + VALUE]
#define XOR_BPL_FROM_PTR_R13_(VALUE) xor bpl, byte ptr [r13 + VALUE]
#define XOR_BPL_FROM_PTR_R14_(VALUE) xor bpl, byte ptr [r14 + VALUE]
#define XOR_BPL_FROM_PTR_R15_(VALUE) xor bpl, byte ptr [r15 + VALUE]
#define XOR_BPL_FROM_PTR_EAX_(VALUE) xor bpl, byte ptr [eax + VALUE]
#define XOR_BPL_FROM_PTR_EBX_(VALUE) xor bpl, byte ptr [ebx + VALUE]
#define XOR_BPL_FROM_PTR_ECX_(VALUE) xor bpl, byte ptr [ecx + VALUE]
#define XOR_BPL_FROM_PTR_EDX_(VALUE) xor bpl, byte ptr [edx + VALUE]
#define XOR_BPL_FROM_PTR_EDI_(VALUE) xor bpl, byte ptr [edi + VALUE]
#define XOR_BPL_FROM_PTR_ESI_(VALUE) xor bpl, byte ptr [esi + VALUE]
#define XOR_BPL_FROM_PTR_EBP_(VALUE) xor bpl, byte ptr [ebp + VALUE]
#define XOR_BPL_FROM_PTR_ESP_(VALUE) xor bpl, byte ptr [esp + VALUE]

#define XOR_SPL_FROM_PTR_RAX_(VALUE) xor spl, byte ptr [rax + VALUE]
#define XOR_SPL_FROM_PTR_RBX_(VALUE) xor spl, byte ptr [rbx + VALUE]
#define XOR_SPL_FROM_PTR_RCX_(VALUE) xor spl, byte ptr [rcx + VALUE]
#define XOR_SPL_FROM_PTR_RDX_(VALUE) xor spl, byte ptr [rdx + VALUE]
#define XOR_SPL_FROM_PTR_RDI_(VALUE) xor spl, byte ptr [rdi + VALUE]
#define XOR_SPL_FROM_PTR_RSI_(VALUE) xor spl, byte ptr [rsi + VALUE]
#define XOR_SPL_FROM_PTR_RBP_(VALUE) xor spl, byte ptr [rbp + VALUE]
#define XOR_SPL_FROM_PTR_RSP_(VALUE) xor spl, byte ptr [rsp + VALUE]
#define XOR_SPL_FROM_PTR_R8_(VALUE) xor spl, byte ptr [r8 + VALUE]
#define XOR_SPL_FROM_PTR_R9_(VALUE) xor spl, byte ptr [r9 + VALUE]
#define XOR_SPL_FROM_PTR_R10_(VALUE) xor spl, byte ptr [r10 + VALUE]
#define XOR_SPL_FROM_PTR_R11_(VALUE) xor spl, byte ptr [r11 + VALUE]
#define XOR_SPL_FROM_PTR_R12_(VALUE) xor spl, byte ptr [r12 + VALUE]
#define XOR_SPL_FROM_PTR_R13_(VALUE) xor spl, byte ptr [r13 + VALUE]
#define XOR_SPL_FROM_PTR_R14_(VALUE) xor spl, byte ptr [r14 + VALUE]
#define XOR_SPL_FROM_PTR_R15_(VALUE) xor spl, byte ptr [r15 + VALUE]
#define XOR_SPL_FROM_PTR_EAX_(VALUE) xor spl, byte ptr [eax + VALUE]
#define XOR_SPL_FROM_PTR_EBX_(VALUE) xor spl, byte ptr [ebx + VALUE]
#define XOR_SPL_FROM_PTR_ECX_(VALUE) xor spl, byte ptr [ecx + VALUE]
#define XOR_SPL_FROM_PTR_EDX_(VALUE) xor spl, byte ptr [edx + VALUE]
#define XOR_SPL_FROM_PTR_EDI_(VALUE) xor spl, byte ptr [edi + VALUE]
#define XOR_SPL_FROM_PTR_ESI_(VALUE) xor spl, byte ptr [esi + VALUE]
#define XOR_SPL_FROM_PTR_EBP_(VALUE) xor spl, byte ptr [ebp + VALUE]
#define XOR_SPL_FROM_PTR_ESP_(VALUE) xor spl, byte ptr [esp + VALUE]

#define XOR_R8B_FROM_PTR_RAX_(VALUE) xor r8b, byte ptr [rax + VALUE]
#define XOR_R8B_FROM_PTR_RBX_(VALUE) xor r8b, byte ptr [rbx + VALUE]
#define XOR_R8B_FROM_PTR_RCX_(VALUE) xor r8b, byte ptr [rcx + VALUE]
#define XOR_R8B_FROM_PTR_RDX_(VALUE) xor r8b, byte ptr [rdx + VALUE]
#define XOR_R8B_FROM_PTR_RDI_(VALUE) xor r8b, byte ptr [rdi + VALUE]
#define XOR_R8B_FROM_PTR_RSI_(VALUE) xor r8b, byte ptr [rsi + VALUE]
#define XOR_R8B_FROM_PTR_RBP_(VALUE) xor r8b, byte ptr [rbp + VALUE]
#define XOR_R8B_FROM_PTR_RSP_(VALUE) xor r8b, byte ptr [rsp + VALUE]
#define XOR_R8B_FROM_PTR_R8_(VALUE) xor r8b, byte ptr [r8 + VALUE]
#define XOR_R8B_FROM_PTR_R9_(VALUE) xor r8b, byte ptr [r9 + VALUE]
#define XOR_R8B_FROM_PTR_R10_(VALUE) xor r8b, byte ptr [r10 + VALUE]
#define XOR_R8B_FROM_PTR_R11_(VALUE) xor r8b, byte ptr [r11 + VALUE]
#define XOR_R8B_FROM_PTR_R12_(VALUE) xor r8b, byte ptr [r12 + VALUE]
#define XOR_R8B_FROM_PTR_R13_(VALUE) xor r8b, byte ptr [r13 + VALUE]
#define XOR_R8B_FROM_PTR_R14_(VALUE) xor r8b, byte ptr [r14 + VALUE]
#define XOR_R8B_FROM_PTR_R15_(VALUE) xor r8b, byte ptr [r15 + VALUE]
#define XOR_R8B_FROM_PTR_EAX_(VALUE) xor r8b, byte ptr [eax + VALUE]
#define XOR_R8B_FROM_PTR_EBX_(VALUE) xor r8b, byte ptr [ebx + VALUE]
#define XOR_R8B_FROM_PTR_ECX_(VALUE) xor r8b, byte ptr [ecx + VALUE]
#define XOR_R8B_FROM_PTR_EDX_(VALUE) xor r8b, byte ptr [edx + VALUE]
#define XOR_R8B_FROM_PTR_EDI_(VALUE) xor r8b, byte ptr [edi + VALUE]
#define XOR_R8B_FROM_PTR_ESI_(VALUE) xor r8b, byte ptr [esi + VALUE]
#define XOR_R8B_FROM_PTR_EBP_(VALUE) xor r8b, byte ptr [ebp + VALUE]
#define XOR_R8B_FROM_PTR_ESP_(VALUE) xor r8b, byte ptr [esp + VALUE]

#define XOR_R9B_FROM_PTR_RAX_(VALUE) xor r9b, byte ptr [rax + VALUE]
#define XOR_R9B_FROM_PTR_RBX_(VALUE) xor r9b, byte ptr [rbx + VALUE]
#define XOR_R9B_FROM_PTR_RCX_(VALUE) xor r9b, byte ptr [rcx + VALUE]
#define XOR_R9B_FROM_PTR_RDX_(VALUE) xor r9b, byte ptr [rdx + VALUE]
#define XOR_R9B_FROM_PTR_RDI_(VALUE) xor r9b, byte ptr [rdi + VALUE]
#define XOR_R9B_FROM_PTR_RSI_(VALUE) xor r9b, byte ptr [rsi + VALUE]
#define XOR_R9B_FROM_PTR_RBP_(VALUE) xor r9b, byte ptr [rbp + VALUE]
#define XOR_R9B_FROM_PTR_RSP_(VALUE) xor r9b, byte ptr [rsp + VALUE]
#define XOR_R9B_FROM_PTR_R8_(VALUE) xor r9b, byte ptr [r8 + VALUE]
#define XOR_R9B_FROM_PTR_R9_(VALUE) xor r9b, byte ptr [r9 + VALUE]
#define XOR_R9B_FROM_PTR_R10_(VALUE) xor r9b, byte ptr [r10 + VALUE]
#define XOR_R9B_FROM_PTR_R11_(VALUE) xor r9b, byte ptr [r11 + VALUE]
#define XOR_R9B_FROM_PTR_R12_(VALUE) xor r9b, byte ptr [r12 + VALUE]
#define XOR_R9B_FROM_PTR_R13_(VALUE) xor r9b, byte ptr [r13 + VALUE]
#define XOR_R9B_FROM_PTR_R14_(VALUE) xor r9b, byte ptr [r14 + VALUE]
#define XOR_R9B_FROM_PTR_R15_(VALUE) xor r9b, byte ptr [r15 + VALUE]
#define XOR_R9B_FROM_PTR_EAX_(VALUE) xor r9b, byte ptr [eax + VALUE]
#define XOR_R9B_FROM_PTR_EBX_(VALUE) xor r9b, byte ptr [ebx + VALUE]
#define XOR_R9B_FROM_PTR_ECX_(VALUE) xor r9b, byte ptr [ecx + VALUE]
#define XOR_R9B_FROM_PTR_EDX_(VALUE) xor r9b, byte ptr [edx + VALUE]
#define XOR_R9B_FROM_PTR_EDI_(VALUE) xor r9b, byte ptr [edi + VALUE]
#define XOR_R9B_FROM_PTR_ESI_(VALUE) xor r9b, byte ptr [esi + VALUE]
#define XOR_R9B_FROM_PTR_EBP_(VALUE) xor r9b, byte ptr [ebp + VALUE]
#define XOR_R9B_FROM_PTR_ESP_(VALUE) xor r9b, byte ptr [esp + VALUE]

#define XOR_R10B_FROM_PTR_RAX_(VALUE) xor r10b, byte ptr [rax + VALUE]
#define XOR_R10B_FROM_PTR_RBX_(VALUE) xor r10b, byte ptr [rbx + VALUE]
#define XOR_R10B_FROM_PTR_RCX_(VALUE) xor r10b, byte ptr [rcx + VALUE]
#define XOR_R10B_FROM_PTR_RDX_(VALUE) xor r10b, byte ptr [rdx + VALUE]
#define XOR_R10B_FROM_PTR_RDI_(VALUE) xor r10b, byte ptr [rdi + VALUE]
#define XOR_R10B_FROM_PTR_RSI_(VALUE) xor r10b, byte ptr [rsi + VALUE]
#define XOR_R10B_FROM_PTR_RBP_(VALUE) xor r10b, byte ptr [rbp + VALUE]
#define XOR_R10B_FROM_PTR_RSP_(VALUE) xor r10b, byte ptr [rsp + VALUE]
#define XOR_R10B_FROM_PTR_R8_(VALUE) xor r10b, byte ptr [r8 + VALUE]
#define XOR_R10B_FROM_PTR_R9_(VALUE) xor r10b, byte ptr [r9 + VALUE]
#define XOR_R10B_FROM_PTR_R10_(VALUE) xor r10b, byte ptr [r10 + VALUE]
#define XOR_R10B_FROM_PTR_R11_(VALUE) xor r10b, byte ptr [r11 + VALUE]
#define XOR_R10B_FROM_PTR_R12_(VALUE) xor r10b, byte ptr [r12 + VALUE]
#define XOR_R10B_FROM_PTR_R13_(VALUE) xor r10b, byte ptr [r13 + VALUE]
#define XOR_R10B_FROM_PTR_R14_(VALUE) xor r10b, byte ptr [r14 + VALUE]
#define XOR_R10B_FROM_PTR_R15_(VALUE) xor r10b, byte ptr [r15 + VALUE]
#define XOR_R10B_FROM_PTR_EAX_(VALUE) xor r10b, byte ptr [eax + VALUE]
#define XOR_R10B_FROM_PTR_EBX_(VALUE) xor r10b, byte ptr [ebx + VALUE]
#define XOR_R10B_FROM_PTR_ECX_(VALUE) xor r10b, byte ptr [ecx + VALUE]
#define XOR_R10B_FROM_PTR_EDX_(VALUE) xor r10b, byte ptr [edx + VALUE]
#define XOR_R10B_FROM_PTR_EDI_(VALUE) xor r10b, byte ptr [edi + VALUE]
#define XOR_R10B_FROM_PTR_ESI_(VALUE) xor r10b, byte ptr [esi + VALUE]
#define XOR_R10B_FROM_PTR_EBP_(VALUE) xor r10b, byte ptr [ebp + VALUE]
#define XOR_R10B_FROM_PTR_ESP_(VALUE) xor r10b, byte ptr [esp + VALUE]

#define XOR_R11B_FROM_PTR_RAX_(VALUE) xor r11b, byte ptr [rax + VALUE]
#define XOR_R11B_FROM_PTR_RBX_(VALUE) xor r11b, byte ptr [rbx + VALUE]
#define XOR_R11B_FROM_PTR_RCX_(VALUE) xor r11b, byte ptr [rcx + VALUE]
#define XOR_R11B_FROM_PTR_RDX_(VALUE) xor r11b, byte ptr [rdx + VALUE]
#define XOR_R11B_FROM_PTR_RDI_(VALUE) xor r11b, byte ptr [rdi + VALUE]
#define XOR_R11B_FROM_PTR_RSI_(VALUE) xor r11b, byte ptr [rsi + VALUE]
#define XOR_R11B_FROM_PTR_RBP_(VALUE) xor r11b, byte ptr [rbp + VALUE]
#define XOR_R11B_FROM_PTR_RSP_(VALUE) xor r11b, byte ptr [rsp + VALUE]
#define XOR_R11B_FROM_PTR_R8_(VALUE) xor r11b, byte ptr [r8 + VALUE]
#define XOR_R11B_FROM_PTR_R9_(VALUE) xor r11b, byte ptr [r9 + VALUE]
#define XOR_R11B_FROM_PTR_R10_(VALUE) xor r11b, byte ptr [r10 + VALUE]
#define XOR_R11B_FROM_PTR_R11_(VALUE) xor r11b, byte ptr [r11 + VALUE]
#define XOR_R11B_FROM_PTR_R12_(VALUE) xor r11b, byte ptr [r12 + VALUE]
#define XOR_R11B_FROM_PTR_R13_(VALUE) xor r11b, byte ptr [r13 + VALUE]
#define XOR_R11B_FROM_PTR_R14_(VALUE) xor r11b, byte ptr [r14 + VALUE]
#define XOR_R11B_FROM_PTR_R15_(VALUE) xor r11b, byte ptr [r15 + VALUE]
#define XOR_R11B_FROM_PTR_EAX_(VALUE) xor r11b, byte ptr [eax + VALUE]
#define XOR_R11B_FROM_PTR_EBX_(VALUE) xor r11b, byte ptr [ebx + VALUE]
#define XOR_R11B_FROM_PTR_ECX_(VALUE) xor r11b, byte ptr [ecx + VALUE]
#define XOR_R11B_FROM_PTR_EDX_(VALUE) xor r11b, byte ptr [edx + VALUE]
#define XOR_R11B_FROM_PTR_EDI_(VALUE) xor r11b, byte ptr [edi + VALUE]
#define XOR_R11B_FROM_PTR_ESI_(VALUE) xor r11b, byte ptr [esi + VALUE]
#define XOR_R11B_FROM_PTR_EBP_(VALUE) xor r11b, byte ptr [ebp + VALUE]
#define XOR_R11B_FROM_PTR_ESP_(VALUE) xor r11b, byte ptr [esp + VALUE]

#define XOR_R12B_FROM_PTR_RAX_(VALUE) xor r12b, byte ptr [rax + VALUE]
#define XOR_R12B_FROM_PTR_RBX_(VALUE) xor r12b, byte ptr [rbx + VALUE]
#define XOR_R12B_FROM_PTR_RCX_(VALUE) xor r12b, byte ptr [rcx + VALUE]
#define XOR_R12B_FROM_PTR_RDX_(VALUE) xor r12b, byte ptr [rdx + VALUE]
#define XOR_R12B_FROM_PTR_RDI_(VALUE) xor r12b, byte ptr [rdi + VALUE]
#define XOR_R12B_FROM_PTR_RSI_(VALUE) xor r12b, byte ptr [rsi + VALUE]
#define XOR_R12B_FROM_PTR_RBP_(VALUE) xor r12b, byte ptr [rbp + VALUE]
#define XOR_R12B_FROM_PTR_RSP_(VALUE) xor r12b, byte ptr [rsp + VALUE]
#define XOR_R12B_FROM_PTR_R8_(VALUE) xor r12b, byte ptr [r8 + VALUE]
#define XOR_R12B_FROM_PTR_R9_(VALUE) xor r12b, byte ptr [r9 + VALUE]
#define XOR_R12B_FROM_PTR_R10_(VALUE) xor r12b, byte ptr [r10 + VALUE]
#define XOR_R12B_FROM_PTR_R11_(VALUE) xor r12b, byte ptr [r11 + VALUE]
#define XOR_R12B_FROM_PTR_R12_(VALUE) xor r12b, byte ptr [r12 + VALUE]
#define XOR_R12B_FROM_PTR_R13_(VALUE) xor r12b, byte ptr [r13 + VALUE]
#define XOR_R12B_FROM_PTR_R14_(VALUE) xor r12b, byte ptr [r14 + VALUE]
#define XOR_R12B_FROM_PTR_R15_(VALUE) xor r12b, byte ptr [r15 + VALUE]
#define XOR_R12B_FROM_PTR_EAX_(VALUE) xor r12b, byte ptr [eax + VALUE]
#define XOR_R12B_FROM_PTR_EBX_(VALUE) xor r12b, byte ptr [ebx + VALUE]
#define XOR_R12B_FROM_PTR_ECX_(VALUE) xor r12b, byte ptr [ecx + VALUE]
#define XOR_R12B_FROM_PTR_EDX_(VALUE) xor r12b, byte ptr [edx + VALUE]
#define XOR_R12B_FROM_PTR_EDI_(VALUE) xor r12b, byte ptr [edi + VALUE]
#define XOR_R12B_FROM_PTR_ESI_(VALUE) xor r12b, byte ptr [esi + VALUE]
#define XOR_R12B_FROM_PTR_EBP_(VALUE) xor r12b, byte ptr [ebp + VALUE]
#define XOR_R12B_FROM_PTR_ESP_(VALUE) xor r12b, byte ptr [esp + VALUE]

#define XOR_R13B_FROM_PTR_RAX_(VALUE) xor r13b, byte ptr [rax + VALUE]
#define XOR_R13B_FROM_PTR_RBX_(VALUE) xor r13b, byte ptr [rbx + VALUE]
#define XOR_R13B_FROM_PTR_RCX_(VALUE) xor r13b, byte ptr [rcx + VALUE]
#define XOR_R13B_FROM_PTR_RDX_(VALUE) xor r13b, byte ptr [rdx + VALUE]
#define XOR_R13B_FROM_PTR_RDI_(VALUE) xor r13b, byte ptr [rdi + VALUE]
#define XOR_R13B_FROM_PTR_RSI_(VALUE) xor r13b, byte ptr [rsi + VALUE]
#define XOR_R13B_FROM_PTR_RBP_(VALUE) xor r13b, byte ptr [rbp + VALUE]
#define XOR_R13B_FROM_PTR_RSP_(VALUE) xor r13b, byte ptr [rsp + VALUE]
#define XOR_R13B_FROM_PTR_R8_(VALUE) xor r13b, byte ptr [r8 + VALUE]
#define XOR_R13B_FROM_PTR_R9_(VALUE) xor r13b, byte ptr [r9 + VALUE]
#define XOR_R13B_FROM_PTR_R10_(VALUE) xor r13b, byte ptr [r10 + VALUE]
#define XOR_R13B_FROM_PTR_R11_(VALUE) xor r13b, byte ptr [r11 + VALUE]
#define XOR_R13B_FROM_PTR_R12_(VALUE) xor r13b, byte ptr [r12 + VALUE]
#define XOR_R13B_FROM_PTR_R13_(VALUE) xor r13b, byte ptr [r13 + VALUE]
#define XOR_R13B_FROM_PTR_R14_(VALUE) xor r13b, byte ptr [r14 + VALUE]
#define XOR_R13B_FROM_PTR_R15_(VALUE) xor r13b, byte ptr [r15 + VALUE]
#define XOR_R13B_FROM_PTR_EAX_(VALUE) xor r13b, byte ptr [eax + VALUE]
#define XOR_R13B_FROM_PTR_EBX_(VALUE) xor r13b, byte ptr [ebx + VALUE]
#define XOR_R13B_FROM_PTR_ECX_(VALUE) xor r13b, byte ptr [ecx + VALUE]
#define XOR_R13B_FROM_PTR_EDX_(VALUE) xor r13b, byte ptr [edx + VALUE]
#define XOR_R13B_FROM_PTR_EDI_(VALUE) xor r13b, byte ptr [edi + VALUE]
#define XOR_R13B_FROM_PTR_ESI_(VALUE) xor r13b, byte ptr [esi + VALUE]
#define XOR_R13B_FROM_PTR_EBP_(VALUE) xor r13b, byte ptr [ebp + VALUE]
#define XOR_R13B_FROM_PTR_ESP_(VALUE) xor r13b, byte ptr [esp + VALUE]

#define XOR_R14B_FROM_PTR_RAX_(VALUE) xor r14b, byte ptr [rax + VALUE]
#define XOR_R14B_FROM_PTR_RBX_(VALUE) xor r14b, byte ptr [rbx + VALUE]
#define XOR_R14B_FROM_PTR_RCX_(VALUE) xor r14b, byte ptr [rcx + VALUE]
#define XOR_R14B_FROM_PTR_RDX_(VALUE) xor r14b, byte ptr [rdx + VALUE]
#define XOR_R14B_FROM_PTR_RDI_(VALUE) xor r14b, byte ptr [rdi + VALUE]
#define XOR_R14B_FROM_PTR_RSI_(VALUE) xor r14b, byte ptr [rsi + VALUE]
#define XOR_R14B_FROM_PTR_RBP_(VALUE) xor r14b, byte ptr [rbp + VALUE]
#define XOR_R14B_FROM_PTR_RSP_(VALUE) xor r14b, byte ptr [rsp + VALUE]
#define XOR_R14B_FROM_PTR_R8_(VALUE) xor r14b, byte ptr [r8 + VALUE]
#define XOR_R14B_FROM_PTR_R9_(VALUE) xor r14b, byte ptr [r9 + VALUE]
#define XOR_R14B_FROM_PTR_R10_(VALUE) xor r14b, byte ptr [r10 + VALUE]
#define XOR_R14B_FROM_PTR_R11_(VALUE) xor r14b, byte ptr [r11 + VALUE]
#define XOR_R14B_FROM_PTR_R12_(VALUE) xor r14b, byte ptr [r12 + VALUE]
#define XOR_R14B_FROM_PTR_R13_(VALUE) xor r14b, byte ptr [r13 + VALUE]
#define XOR_R14B_FROM_PTR_R14_(VALUE) xor r14b, byte ptr [r14 + VALUE]
#define XOR_R14B_FROM_PTR_R15_(VALUE) xor r14b, byte ptr [r15 + VALUE]
#define XOR_R14B_FROM_PTR_EAX_(VALUE) xor r14b, byte ptr [eax + VALUE]
#define XOR_R14B_FROM_PTR_EBX_(VALUE) xor r14b, byte ptr [ebx + VALUE]
#define XOR_R14B_FROM_PTR_ECX_(VALUE) xor r14b, byte ptr [ecx + VALUE]
#define XOR_R14B_FROM_PTR_EDX_(VALUE) xor r14b, byte ptr [edx + VALUE]
#define XOR_R14B_FROM_PTR_EDI_(VALUE) xor r14b, byte ptr [edi + VALUE]
#define XOR_R14B_FROM_PTR_ESI_(VALUE) xor r14b, byte ptr [esi + VALUE]
#define XOR_R14B_FROM_PTR_EBP_(VALUE) xor r14b, byte ptr [ebp + VALUE]
#define XOR_R14B_FROM_PTR_ESP_(VALUE) xor r14b, byte ptr [esp + VALUE]

#define XOR_R15B_FROM_PTR_RAX_(VALUE) xor r15b, byte ptr [rax + VALUE]
#define XOR_R15B_FROM_PTR_RBX_(VALUE) xor r15b, byte ptr [rbx + VALUE]
#define XOR_R15B_FROM_PTR_RCX_(VALUE) xor r15b, byte ptr [rcx + VALUE]
#define XOR_R15B_FROM_PTR_RDX_(VALUE) xor r15b, byte ptr [rdx + VALUE]
#define XOR_R15B_FROM_PTR_RDI_(VALUE) xor r15b, byte ptr [rdi + VALUE]
#define XOR_R15B_FROM_PTR_RSI_(VALUE) xor r15b, byte ptr [rsi + VALUE]
#define XOR_R15B_FROM_PTR_RBP_(VALUE) xor r15b, byte ptr [rbp + VALUE]
#define XOR_R15B_FROM_PTR_RSP_(VALUE) xor r15b, byte ptr [rsp + VALUE]
#define XOR_R15B_FROM_PTR_R8_(VALUE) xor r15b, byte ptr [r8 + VALUE]
#define XOR_R15B_FROM_PTR_R9_(VALUE) xor r15b, byte ptr [r9 + VALUE]
#define XOR_R15B_FROM_PTR_R10_(VALUE) xor r15b, byte ptr [r10 + VALUE]
#define XOR_R15B_FROM_PTR_R11_(VALUE) xor r15b, byte ptr [r11 + VALUE]
#define XOR_R15B_FROM_PTR_R12_(VALUE) xor r15b, byte ptr [r12 + VALUE]
#define XOR_R15B_FROM_PTR_R13_(VALUE) xor r15b, byte ptr [r13 + VALUE]
#define XOR_R15B_FROM_PTR_R14_(VALUE) xor r15b, byte ptr [r14 + VALUE]
#define XOR_R15B_FROM_PTR_R15_(VALUE) xor r15b, byte ptr [r15 + VALUE]
#define XOR_R15B_FROM_PTR_EAX_(VALUE) xor r15b, byte ptr [eax + VALUE]
#define XOR_R15B_FROM_PTR_EBX_(VALUE) xor r15b, byte ptr [ebx + VALUE]
#define XOR_R15B_FROM_PTR_ECX_(VALUE) xor r15b, byte ptr [ecx + VALUE]
#define XOR_R15B_FROM_PTR_EDX_(VALUE) xor r15b, byte ptr [edx + VALUE]
#define XOR_R15B_FROM_PTR_EDI_(VALUE) xor r15b, byte ptr [edi + VALUE]
#define XOR_R15B_FROM_PTR_ESI_(VALUE) xor r15b, byte ptr [esi + VALUE]
#define XOR_R15B_FROM_PTR_EBP_(VALUE) xor r15b, byte ptr [ebp + VALUE]
#define XOR_R15B_FROM_PTR_ESP_(VALUE) xor r15b, byte ptr [esp + VALUE]

#define XOR_AL_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], al
#define XOR_AL_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], al
#define XOR_AL_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], al
#define XOR_AL_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], al
#define XOR_AL_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], al
#define XOR_AL_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], al
#define XOR_AL_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], al
#define XOR_AL_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], al
#define XOR_AL_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], al
#define XOR_AL_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], al
#define XOR_AL_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], al
#define XOR_AL_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], al
#define XOR_AL_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], al
#define XOR_AL_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], al
#define XOR_AL_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], al
#define XOR_AL_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], al
#define XOR_AL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], al
#define XOR_AL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], al
#define XOR_AL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], al
#define XOR_AL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], al
#define XOR_AL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], al
#define XOR_AL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], al
#define XOR_AL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], al
#define XOR_AL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], al

#define XOR_BL_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], bl
#define XOR_BL_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], bl
#define XOR_BL_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], bl
#define XOR_BL_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], bl
#define XOR_BL_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], bl
#define XOR_BL_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], bl
#define XOR_BL_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], bl
#define XOR_BL_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], bl
#define XOR_BL_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], bl
#define XOR_BL_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], bl
#define XOR_BL_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], bl
#define XOR_BL_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], bl
#define XOR_BL_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], bl
#define XOR_BL_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], bl
#define XOR_BL_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], bl
#define XOR_BL_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], bl
#define XOR_BL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], bl
#define XOR_BL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], bl
#define XOR_BL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], bl
#define XOR_BL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], bl
#define XOR_BL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], bl
#define XOR_BL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], bl
#define XOR_BL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], bl
#define XOR_BL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], bl

#define XOR_CL_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], cl
#define XOR_CL_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], cl
#define XOR_CL_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], cl
#define XOR_CL_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], cl
#define XOR_CL_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], cl
#define XOR_CL_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], cl
#define XOR_CL_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], cl
#define XOR_CL_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], cl
#define XOR_CL_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], cl
#define XOR_CL_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], cl
#define XOR_CL_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], cl
#define XOR_CL_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], cl
#define XOR_CL_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], cl
#define XOR_CL_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], cl
#define XOR_CL_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], cl
#define XOR_CL_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], cl
#define XOR_CL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], cl
#define XOR_CL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], cl
#define XOR_CL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], cl
#define XOR_CL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], cl
#define XOR_CL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], cl
#define XOR_CL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], cl
#define XOR_CL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], cl
#define XOR_CL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], cl

#define XOR_DL_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], dl
#define XOR_DL_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], dl
#define XOR_DL_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], dl
#define XOR_DL_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], dl
#define XOR_DL_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], dl
#define XOR_DL_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], dl
#define XOR_DL_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], dl
#define XOR_DL_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], dl
#define XOR_DL_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], dl
#define XOR_DL_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], dl
#define XOR_DL_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], dl
#define XOR_DL_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], dl
#define XOR_DL_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], dl
#define XOR_DL_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], dl
#define XOR_DL_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], dl
#define XOR_DL_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], dl
#define XOR_DL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], dl
#define XOR_DL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], dl
#define XOR_DL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], dl
#define XOR_DL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], dl
#define XOR_DL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], dl
#define XOR_DL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], dl
#define XOR_DL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], dl
#define XOR_DL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], dl

#define XOR_DIL_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], dil
#define XOR_DIL_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], dil
#define XOR_DIL_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], dil
#define XOR_DIL_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], dil
#define XOR_DIL_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], dil
#define XOR_DIL_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], dil
#define XOR_DIL_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], dil
#define XOR_DIL_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], dil
#define XOR_DIL_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], dil
#define XOR_DIL_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], dil
#define XOR_DIL_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], dil
#define XOR_DIL_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], dil
#define XOR_DIL_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], dil
#define XOR_DIL_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], dil
#define XOR_DIL_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], dil
#define XOR_DIL_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], dil
#define XOR_DIL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], dil
#define XOR_DIL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], dil
#define XOR_DIL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], dil
#define XOR_DIL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], dil
#define XOR_DIL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], dil
#define XOR_DIL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], dil
#define XOR_DIL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], dil
#define XOR_DIL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], dil

#define XOR_SIL_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], sil
#define XOR_SIL_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], sil
#define XOR_SIL_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], sil
#define XOR_SIL_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], sil
#define XOR_SIL_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], sil
#define XOR_SIL_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], sil
#define XOR_SIL_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], sil
#define XOR_SIL_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], sil
#define XOR_SIL_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], sil
#define XOR_SIL_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], sil
#define XOR_SIL_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], sil
#define XOR_SIL_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], sil
#define XOR_SIL_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], sil
#define XOR_SIL_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], sil
#define XOR_SIL_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], sil
#define XOR_SIL_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], sil
#define XOR_SIL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], sil
#define XOR_SIL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], sil
#define XOR_SIL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], sil
#define XOR_SIL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], sil
#define XOR_SIL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], sil
#define XOR_SIL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], sil
#define XOR_SIL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], sil
#define XOR_SIL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], sil

#define XOR_BPL_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], bpl
#define XOR_BPL_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], bpl
#define XOR_BPL_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], bpl
#define XOR_BPL_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], bpl
#define XOR_BPL_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], bpl
#define XOR_BPL_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], bpl
#define XOR_BPL_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], bpl
#define XOR_BPL_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], bpl
#define XOR_BPL_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], bpl
#define XOR_BPL_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], bpl
#define XOR_BPL_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], bpl
#define XOR_BPL_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], bpl
#define XOR_BPL_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], bpl
#define XOR_BPL_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], bpl
#define XOR_BPL_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], bpl
#define XOR_BPL_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], bpl
#define XOR_BPL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], bpl
#define XOR_BPL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], bpl
#define XOR_BPL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], bpl
#define XOR_BPL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], bpl
#define XOR_BPL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], bpl
#define XOR_BPL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], bpl
#define XOR_BPL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], bpl
#define XOR_BPL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], bpl

#define XOR_SPL_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], spl
#define XOR_SPL_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], spl
#define XOR_SPL_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], spl
#define XOR_SPL_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], spl
#define XOR_SPL_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], spl
#define XOR_SPL_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], spl
#define XOR_SPL_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], spl
#define XOR_SPL_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], spl
#define XOR_SPL_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], spl
#define XOR_SPL_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], spl
#define XOR_SPL_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], spl
#define XOR_SPL_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], spl
#define XOR_SPL_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], spl
#define XOR_SPL_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], spl
#define XOR_SPL_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], spl
#define XOR_SPL_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], spl
#define XOR_SPL_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], spl
#define XOR_SPL_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], spl
#define XOR_SPL_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], spl
#define XOR_SPL_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], spl
#define XOR_SPL_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], spl
#define XOR_SPL_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], spl
#define XOR_SPL_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], spl
#define XOR_SPL_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], spl

#define XOR_R8B_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], r8b
#define XOR_R8B_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], r8b
#define XOR_R8B_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], r8b
#define XOR_R8B_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], r8b
#define XOR_R8B_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], r8b
#define XOR_R8B_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], r8b
#define XOR_R8B_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], r8b
#define XOR_R8B_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], r8b
#define XOR_R8B_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], r8b
#define XOR_R8B_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], r8b
#define XOR_R8B_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], r8b
#define XOR_R8B_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], r8b
#define XOR_R8B_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], r8b
#define XOR_R8B_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], r8b
#define XOR_R8B_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], r8b
#define XOR_R8B_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], r8b
#define XOR_R8B_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], r8b
#define XOR_R8B_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], r8b
#define XOR_R8B_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], r8b
#define XOR_R8B_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], r8b
#define XOR_R8B_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], r8b
#define XOR_R8B_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], r8b
#define XOR_R8B_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], r8b
#define XOR_R8B_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], r8b

#define XOR_R9B_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], r9b
#define XOR_R9B_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], r9b
#define XOR_R9B_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], r9b
#define XOR_R9B_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], r9b
#define XOR_R9B_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], r9b
#define XOR_R9B_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], r9b
#define XOR_R9B_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], r9b
#define XOR_R9B_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], r9b
#define XOR_R9B_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], r9b
#define XOR_R9B_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], r9b
#define XOR_R9B_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], r9b
#define XOR_R9B_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], r9b
#define XOR_R9B_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], r9b
#define XOR_R9B_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], r9b
#define XOR_R9B_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], r9b
#define XOR_R9B_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], r9b
#define XOR_R9B_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], r9b
#define XOR_R9B_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], r9b
#define XOR_R9B_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], r9b
#define XOR_R9B_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], r9b
#define XOR_R9B_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], r9b
#define XOR_R9B_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], r9b
#define XOR_R9B_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], r9b
#define XOR_R9B_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], r9b

#define XOR_R10B_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], r10b
#define XOR_R10B_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], r10b
#define XOR_R10B_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], r10b
#define XOR_R10B_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], r10b
#define XOR_R10B_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], r10b
#define XOR_R10B_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], r10b
#define XOR_R10B_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], r10b
#define XOR_R10B_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], r10b
#define XOR_R10B_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], r10b
#define XOR_R10B_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], r10b
#define XOR_R10B_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], r10b
#define XOR_R10B_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], r10b
#define XOR_R10B_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], r10b
#define XOR_R10B_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], r10b
#define XOR_R10B_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], r10b
#define XOR_R10B_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], r10b
#define XOR_R10B_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], r10b
#define XOR_R10B_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], r10b
#define XOR_R10B_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], r10b
#define XOR_R10B_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], r10b
#define XOR_R10B_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], r10b
#define XOR_R10B_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], r10b
#define XOR_R10B_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], r10b
#define XOR_R10B_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], r10b

#define XOR_R11B_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], r11b
#define XOR_R11B_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], r11b
#define XOR_R11B_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], r11b
#define XOR_R11B_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], r11b
#define XOR_R11B_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], r11b
#define XOR_R11B_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], r11b
#define XOR_R11B_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], r11b
#define XOR_R11B_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], r11b
#define XOR_R11B_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], r11b
#define XOR_R11B_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], r11b
#define XOR_R11B_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], r11b
#define XOR_R11B_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], r11b
#define XOR_R11B_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], r11b
#define XOR_R11B_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], r11b
#define XOR_R11B_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], r11b
#define XOR_R11B_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], r11b
#define XOR_R11B_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], r11b
#define XOR_R11B_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], r11b
#define XOR_R11B_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], r11b
#define XOR_R11B_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], r11b
#define XOR_R11B_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], r11b
#define XOR_R11B_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], r11b
#define XOR_R11B_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], r11b
#define XOR_R11B_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], r11b

#define XOR_R12B_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], r12b
#define XOR_R12B_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], r12b
#define XOR_R12B_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], r12b
#define XOR_R12B_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], r12b
#define XOR_R12B_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], r12b
#define XOR_R12B_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], r12b
#define XOR_R12B_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], r12b
#define XOR_R12B_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], r12b
#define XOR_R12B_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], r12b
#define XOR_R12B_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], r12b
#define XOR_R12B_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], r12b
#define XOR_R12B_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], r12b
#define XOR_R12B_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], r12b
#define XOR_R12B_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], r12b
#define XOR_R12B_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], r12b
#define XOR_R12B_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], r12b
#define XOR_R12B_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], r12b
#define XOR_R12B_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], r12b
#define XOR_R12B_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], r12b
#define XOR_R12B_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], r12b
#define XOR_R12B_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], r12b
#define XOR_R12B_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], r12b
#define XOR_R12B_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], r12b
#define XOR_R12B_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], r12b

#define XOR_R13B_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], r13b
#define XOR_R13B_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], r13b
#define XOR_R13B_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], r13b
#define XOR_R13B_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], r13b
#define XOR_R13B_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], r13b
#define XOR_R13B_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], r13b
#define XOR_R13B_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], r13b
#define XOR_R13B_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], r13b
#define XOR_R13B_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], r13b
#define XOR_R13B_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], r13b
#define XOR_R13B_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], r13b
#define XOR_R13B_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], r13b
#define XOR_R13B_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], r13b
#define XOR_R13B_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], r13b
#define XOR_R13B_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], r13b
#define XOR_R13B_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], r13b
#define XOR_R13B_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], r13b
#define XOR_R13B_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], r13b
#define XOR_R13B_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], r13b
#define XOR_R13B_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], r13b
#define XOR_R13B_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], r13b
#define XOR_R13B_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], r13b
#define XOR_R13B_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], r13b
#define XOR_R13B_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], r13b

#define XOR_R14B_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], r14b
#define XOR_R14B_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], r14b
#define XOR_R14B_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], r14b
#define XOR_R14B_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], r14b
#define XOR_R14B_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], r14b
#define XOR_R14B_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], r14b
#define XOR_R14B_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], r14b
#define XOR_R14B_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], r14b
#define XOR_R14B_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], r14b
#define XOR_R14B_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], r14b
#define XOR_R14B_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], r14b
#define XOR_R14B_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], r14b
#define XOR_R14B_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], r14b
#define XOR_R14B_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], r14b
#define XOR_R14B_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], r14b
#define XOR_R14B_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], r14b
#define XOR_R14B_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], r14b
#define XOR_R14B_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], r14b
#define XOR_R14B_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], r14b
#define XOR_R14B_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], r14b
#define XOR_R14B_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], r14b
#define XOR_R14B_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], r14b
#define XOR_R14B_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], r14b
#define XOR_R14B_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], r14b

#define XOR_R15B_TO_PTR_RAX_(VALUE) xor byte ptr [rax + VALUE], r15b
#define XOR_R15B_TO_PTR_RBX_(VALUE) xor byte ptr [rbx + VALUE], r15b
#define XOR_R15B_TO_PTR_RCX_(VALUE) xor byte ptr [rcx + VALUE], r15b
#define XOR_R15B_TO_PTR_RDX_(VALUE) xor byte ptr [rdx + VALUE], r15b
#define XOR_R15B_TO_PTR_RDI_(VALUE) xor byte ptr [rdi + VALUE], r15b
#define XOR_R15B_TO_PTR_RSI_(VALUE) xor byte ptr [rsi + VALUE], r15b
#define XOR_R15B_TO_PTR_RBP_(VALUE) xor byte ptr [rbp + VALUE], r15b
#define XOR_R15B_TO_PTR_RSP_(VALUE) xor byte ptr [rsp + VALUE], r15b
#define XOR_R15B_TO_PTR_R8_(VALUE) xor byte ptr [r8 + VALUE], r15b
#define XOR_R15B_TO_PTR_R9_(VALUE) xor byte ptr [r9 + VALUE], r15b
#define XOR_R15B_TO_PTR_R10_(VALUE) xor byte ptr [r10 + VALUE], r15b
#define XOR_R15B_TO_PTR_R11_(VALUE) xor byte ptr [r11 + VALUE], r15b
#define XOR_R15B_TO_PTR_R12_(VALUE) xor byte ptr [r12 + VALUE], r15b
#define XOR_R15B_TO_PTR_R13_(VALUE) xor byte ptr [r13 + VALUE], r15b
#define XOR_R15B_TO_PTR_R14_(VALUE) xor byte ptr [r14 + VALUE], r15b
#define XOR_R15B_TO_PTR_R15_(VALUE) xor byte ptr [r15 + VALUE], r15b
#define XOR_R15B_TO_PTR_EAX_(VALUE) xor byte ptr [eax + VALUE], r15b
#define XOR_R15B_TO_PTR_EBX_(VALUE) xor byte ptr [ebx + VALUE], r15b
#define XOR_R15B_TO_PTR_ECX_(VALUE) xor byte ptr [ecx + VALUE], r15b
#define XOR_R15B_TO_PTR_EDX_(VALUE) xor byte ptr [edx + VALUE], r15b
#define XOR_R15B_TO_PTR_EDI_(VALUE) xor byte ptr [edi + VALUE], r15b
#define XOR_R15B_TO_PTR_ESI_(VALUE) xor byte ptr [esi + VALUE], r15b
#define XOR_R15B_TO_PTR_EBP_(VALUE) xor byte ptr [ebp + VALUE], r15b
#define XOR_R15B_TO_PTR_ESP_(VALUE) xor byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define XOR_AX_FROM_PTR_(VALUE) xor ax, word ptr [VALUE]
#define XOR_BX_FROM_PTR_(VALUE) xor bx, word ptr [VALUE]
#define XOR_CX_FROM_PTR_(VALUE) xor cx, word ptr [VALUE]
#define XOR_DX_FROM_PTR_(VALUE) xor dx, word ptr [VALUE]
#define XOR_DI_FROM_PTR_(VALUE) xor di, word ptr [VALUE]
#define XOR_SI_FROM_PTR_(VALUE) xor si, word ptr [VALUE]
#define XOR_BP_FROM_PTR_(VALUE) xor bp, word ptr [VALUE]
#define XOR_SP_FROM_PTR_(VALUE) xor sp, word ptr [VALUE]

#define XOR_AX_TO_PTR_(VALUE) xor word ptr [VALUE], ax
#define XOR_BX_TO_PTR_(VALUE) xor word ptr [VALUE], bx
#define XOR_CX_TO_PTR_(VALUE) xor word ptr [VALUE], cx
#define XOR_DX_TO_PTR_(VALUE) xor word ptr [VALUE], dx
#define XOR_DI_TO_PTR_(VALUE) xor word ptr [VALUE], di
#define XOR_SI_TO_PTR_(VALUE) xor word ptr [VALUE], si
#define XOR_BP_TO_PTR_(VALUE) xor word ptr [VALUE], bp
#define XOR_SP_TO_PTR_(VALUE) xor word ptr [VALUE], sp

#define XOR_AX_FROM_PTR_BX xor ax, word ptr [bx]
#define XOR_AX_FROM_PTR_BP xor ax, word ptr [bp]
#define XOR_AX_FROM_PTR_SI xor ax, word ptr [si]
#define XOR_AX_FROM_PTR_DI xor ax, word ptr [di]

#define XOR_BX_FROM_PTR_BX xor bx, word ptr [bx]
#define XOR_BX_FROM_PTR_BP xor bx, word ptr [bp]
#define XOR_BX_FROM_PTR_SI xor bx, word ptr [si]
#define XOR_BX_FROM_PTR_DI xor bx, word ptr [di]

#define XOR_CX_FROM_PTR_BX xor cx, word ptr [bx]
#define XOR_CX_FROM_PTR_BP xor cx, word ptr [bp]
#define XOR_CX_FROM_PTR_SI xor cx, word ptr [si]
#define XOR_CX_FROM_PTR_DI xor cx, word ptr [di]

#define XOR_DX_FROM_PTR_BX xor dx, word ptr [bx]
#define XOR_DX_FROM_PTR_BP xor dx, word ptr [bp]
#define XOR_DX_FROM_PTR_SI xor dx, word ptr [si]
#define XOR_DX_FROM_PTR_DI xor dx, word ptr [di]

#define XOR_DI_FROM_PTR_BX xor di, word ptr [bx]
#define XOR_DI_FROM_PTR_BP xor di, word ptr [bp]
#define XOR_DI_FROM_PTR_SI xor di, word ptr [si]
#define XOR_DI_FROM_PTR_DI xor di, word ptr [di]

#define XOR_SI_FROM_PTR_BX xor si, word ptr [bx]
#define XOR_SI_FROM_PTR_BP xor si, word ptr [bp]
#define XOR_SI_FROM_PTR_SI xor si, word ptr [si]
#define XOR_SI_FROM_PTR_DI xor si, word ptr [di]

#define XOR_BP_FROM_PTR_BX xor bp, word ptr [bx]
#define XOR_BP_FROM_PTR_BP xor bp, word ptr [bp]
#define XOR_BP_FROM_PTR_SI xor bp, word ptr [si]
#define XOR_BP_FROM_PTR_DI xor bp, word ptr [di]

#define XOR_SP_FROM_PTR_BX xor sp, word ptr [bx]
#define XOR_SP_FROM_PTR_BP xor sp, word ptr [bp]
#define XOR_SP_FROM_PTR_SI xor sp, word ptr [si]
#define XOR_SP_FROM_PTR_DI xor sp, word ptr [di]

#define XOR_AX_TO_PTR_BX xor word ptr [bx], ax
#define XOR_AX_TO_PTR_BP xor word ptr [bp], ax
#define XOR_AX_TO_PTR_SI xor word ptr [si], ax
#define XOR_AX_TO_PTR_DI xor word ptr [di], ax

#define XOR_BX_TO_PTR_BX xor word ptr [bx], bx
#define XOR_BX_TO_PTR_BP xor word ptr [bp], bx
#define XOR_BX_TO_PTR_SI xor word ptr [si], bx
#define XOR_BX_TO_PTR_DI xor word ptr [di], bx

#define XOR_CX_TO_PTR_BX xor word ptr [bx], cx
#define XOR_CX_TO_PTR_BP xor word ptr [bp], cx
#define XOR_CX_TO_PTR_SI xor word ptr [si], cx
#define XOR_CX_TO_PTR_DI xor word ptr [di], cx

#define XOR_DX_TO_PTR_BX xor word ptr [bx], dx
#define XOR_DX_TO_PTR_BP xor word ptr [bp], dx
#define XOR_DX_TO_PTR_SI xor word ptr [si], dx
#define XOR_DX_TO_PTR_DI xor word ptr [di], dx

#define XOR_DI_TO_PTR_BX xor word ptr [bx], di
#define XOR_DI_TO_PTR_BP xor word ptr [bp], di
#define XOR_DI_TO_PTR_SI xor word ptr [si], di
#define XOR_DI_TO_PTR_DI xor word ptr [di], di

#define XOR_SI_TO_PTR_BX xor word ptr [bx], si
#define XOR_SI_TO_PTR_BP xor word ptr [bp], si
#define XOR_SI_TO_PTR_SI xor word ptr [si], si
#define XOR_SI_TO_PTR_DI xor word ptr [di], si

#define XOR_BP_TO_PTR_BX xor word ptr [bx], bp
#define XOR_BP_TO_PTR_BP xor word ptr [bp], bp
#define XOR_BP_TO_PTR_SI xor word ptr [si], bp
#define XOR_BP_TO_PTR_DI xor word ptr [di], bp

#define XOR_SP_TO_PTR_BX xor word ptr [bx], sp
#define XOR_SP_TO_PTR_BP xor word ptr [bp], sp
#define XOR_SP_TO_PTR_SI xor word ptr [si], sp
#define XOR_SP_TO_PTR_DI xor word ptr [di], sp

#define XOR_AX_FROM_PTR_BX_(VALUE) xor ax, word ptr [bx + VALUE]
#define XOR_AX_FROM_PTR_BP_(VALUE) xor ax, word ptr [bp + VALUE]
#define XOR_AX_FROM_PTR_SI_(VALUE) xor ax, word ptr [si + VALUE]
#define XOR_AX_FROM_PTR_DI_(VALUE) xor ax, word ptr [di + VALUE]

#define XOR_BX_FROM_PTR_BX_(VALUE) xor bx, word ptr [bx + VALUE]
#define XOR_BX_FROM_PTR_BP_(VALUE) xor bx, word ptr [bp + VALUE]
#define XOR_BX_FROM_PTR_SI_(VALUE) xor bx, word ptr [si + VALUE]
#define XOR_BX_FROM_PTR_DI_(VALUE) xor bx, word ptr [di + VALUE]

#define XOR_CX_FROM_PTR_BX_(VALUE) xor cx, word ptr [bx + VALUE]
#define XOR_CX_FROM_PTR_BP_(VALUE) xor cx, word ptr [bp + VALUE]
#define XOR_CX_FROM_PTR_SI_(VALUE) xor cx, word ptr [si + VALUE]
#define XOR_CX_FROM_PTR_DI_(VALUE) xor cx, word ptr [di + VALUE]

#define XOR_DX_FROM_PTR_BX_(VALUE) xor dx, word ptr [bx + VALUE]
#define XOR_DX_FROM_PTR_BP_(VALUE) xor dx, word ptr [bp + VALUE]
#define XOR_DX_FROM_PTR_SI_(VALUE) xor dx, word ptr [si + VALUE]
#define XOR_DX_FROM_PTR_DI_(VALUE) xor dx, word ptr [di + VALUE]

#define XOR_DI_FROM_PTR_BX_(VALUE) xor di, word ptr [bx + VALUE]
#define XOR_DI_FROM_PTR_BP_(VALUE) xor di, word ptr [bp + VALUE]
#define XOR_DI_FROM_PTR_SI_(VALUE) xor di, word ptr [si + VALUE]
#define XOR_DI_FROM_PTR_DI_(VALUE) xor di, word ptr [di + VALUE]

#define XOR_SI_FROM_PTR_BX_(VALUE) xor si, word ptr [bx + VALUE]
#define XOR_SI_FROM_PTR_BP_(VALUE) xor si, word ptr [bp + VALUE]
#define XOR_SI_FROM_PTR_SI_(VALUE) xor si, word ptr [si + VALUE]
#define XOR_SI_FROM_PTR_DI_(VALUE) xor si, word ptr [di + VALUE]

#define XOR_BP_FROM_PTR_BX_(VALUE) xor bp, word ptr [bx + VALUE]
#define XOR_BP_FROM_PTR_BP_(VALUE) xor bp, word ptr [bp + VALUE]
#define XOR_BP_FROM_PTR_SI_(VALUE) xor bp, word ptr [si + VALUE]
#define XOR_BP_FROM_PTR_DI_(VALUE) xor bp, word ptr [di + VALUE]

#define XOR_SP_FROM_PTR_BX_(VALUE) xor sp, word ptr [bx + VALUE]
#define XOR_SP_FROM_PTR_BP_(VALUE) xor sp, word ptr [bp + VALUE]
#define XOR_SP_FROM_PTR_SI_(VALUE) xor sp, word ptr [si + VALUE]
#define XOR_SP_FROM_PTR_DI_(VALUE) xor sp, word ptr [di + VALUE]

#define XOR_AX_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], ax
#define XOR_AX_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], ax
#define XOR_AX_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], ax
#define XOR_AX_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], ax

#define XOR_BX_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], bx
#define XOR_BX_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], bx
#define XOR_BX_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], bx
#define XOR_BX_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], bx

#define XOR_CX_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], cx
#define XOR_CX_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], cx
#define XOR_CX_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], cx
#define XOR_CX_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], cx

#define XOR_DX_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], dx
#define XOR_DX_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], dx
#define XOR_DX_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], dx
#define XOR_DX_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], dx

#define XOR_DI_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], di
#define XOR_DI_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], di
#define XOR_DI_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], di
#define XOR_DI_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], di

#define XOR_SI_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], si
#define XOR_SI_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], si
#define XOR_SI_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], si
#define XOR_SI_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], si

#define XOR_BP_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], bp
#define XOR_BP_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], bp
#define XOR_BP_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], bp
#define XOR_BP_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], bp

#define XOR_SP_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], sp
#define XOR_SP_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], sp
#define XOR_SP_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], sp
#define XOR_SP_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XOR_AX_FROM_PTR_(VALUE) xor ax, word ptr [VALUE]
#define XOR_BX_FROM_PTR_(VALUE) xor bx, word ptr [VALUE]
#define XOR_CX_FROM_PTR_(VALUE) xor cx, word ptr [VALUE]
#define XOR_DX_FROM_PTR_(VALUE) xor dx, word ptr [VALUE]
#define XOR_DI_FROM_PTR_(VALUE) xor di, word ptr [VALUE]
#define XOR_SI_FROM_PTR_(VALUE) xor si, word ptr [VALUE]
#define XOR_BP_FROM_PTR_(VALUE) xor bp, word ptr [VALUE]
#define XOR_SP_FROM_PTR_(VALUE) xor sp, word ptr [VALUE]

#define XOR_AX_TO_PTR_(VALUE) xor word ptr [VALUE], ax
#define XOR_BX_TO_PTR_(VALUE) xor word ptr [VALUE], bx
#define XOR_CX_TO_PTR_(VALUE) xor word ptr [VALUE], cx
#define XOR_DX_TO_PTR_(VALUE) xor word ptr [VALUE], dx
#define XOR_DI_TO_PTR_(VALUE) xor word ptr [VALUE], di
#define XOR_SI_TO_PTR_(VALUE) xor word ptr [VALUE], si
#define XOR_BP_TO_PTR_(VALUE) xor word ptr [VALUE], bp
#define XOR_SP_TO_PTR_(VALUE) xor word ptr [VALUE], sp

#define XOR_AX_FROM_PTR_EAX xor ax, word ptr [eax]
#define XOR_AX_FROM_PTR_EBX xor ax, word ptr [ebx]
#define XOR_AX_FROM_PTR_ECX xor ax, word ptr [ecx]
#define XOR_AX_FROM_PTR_EDX xor ax, word ptr [edx]
#define XOR_AX_FROM_PTR_EDI xor ax, word ptr [edi]
#define XOR_AX_FROM_PTR_ESI xor ax, word ptr [esi]
#define XOR_AX_FROM_PTR_EBP xor ax, word ptr [ebp]
#define XOR_AX_FROM_PTR_ESP xor ax, word ptr [esp]
#define XOR_AX_FROM_PTR_BX xor ax, word ptr [bx]
#define XOR_AX_FROM_PTR_BP xor ax, word ptr [bp]
#define XOR_AX_FROM_PTR_SI xor ax, word ptr [si]
#define XOR_AX_FROM_PTR_DI xor ax, word ptr [di]

#define XOR_BX_FROM_PTR_EAX xor bx, word ptr [eax]
#define XOR_BX_FROM_PTR_EBX xor bx, word ptr [ebx]
#define XOR_BX_FROM_PTR_ECX xor bx, word ptr [ecx]
#define XOR_BX_FROM_PTR_EDX xor bx, word ptr [edx]
#define XOR_BX_FROM_PTR_EDI xor bx, word ptr [edi]
#define XOR_BX_FROM_PTR_ESI xor bx, word ptr [esi]
#define XOR_BX_FROM_PTR_EBP xor bx, word ptr [ebp]
#define XOR_BX_FROM_PTR_ESP xor bx, word ptr [esp]
#define XOR_BX_FROM_PTR_BX xor bx, word ptr [bx]
#define XOR_BX_FROM_PTR_BP xor bx, word ptr [bp]
#define XOR_BX_FROM_PTR_SI xor bx, word ptr [si]
#define XOR_BX_FROM_PTR_DI xor bx, word ptr [di]

#define XOR_CX_FROM_PTR_EAX xor cx, word ptr [eax]
#define XOR_CX_FROM_PTR_EBX xor cx, word ptr [ebx]
#define XOR_CX_FROM_PTR_ECX xor cx, word ptr [ecx]
#define XOR_CX_FROM_PTR_EDX xor cx, word ptr [edx]
#define XOR_CX_FROM_PTR_EDI xor cx, word ptr [edi]
#define XOR_CX_FROM_PTR_ESI xor cx, word ptr [esi]
#define XOR_CX_FROM_PTR_EBP xor cx, word ptr [ebp]
#define XOR_CX_FROM_PTR_ESP xor cx, word ptr [esp]
#define XOR_CX_FROM_PTR_BX xor cx, word ptr [bx]
#define XOR_CX_FROM_PTR_BP xor cx, word ptr [bp]
#define XOR_CX_FROM_PTR_SI xor cx, word ptr [si]
#define XOR_CX_FROM_PTR_DI xor cx, word ptr [di]

#define XOR_DX_FROM_PTR_EAX xor dx, word ptr [eax]
#define XOR_DX_FROM_PTR_EBX xor dx, word ptr [ebx]
#define XOR_DX_FROM_PTR_ECX xor dx, word ptr [ecx]
#define XOR_DX_FROM_PTR_EDX xor dx, word ptr [edx]
#define XOR_DX_FROM_PTR_EDI xor dx, word ptr [edi]
#define XOR_DX_FROM_PTR_ESI xor dx, word ptr [esi]
#define XOR_DX_FROM_PTR_EBP xor dx, word ptr [ebp]
#define XOR_DX_FROM_PTR_ESP xor dx, word ptr [esp]
#define XOR_DX_FROM_PTR_BX xor dx, word ptr [bx]
#define XOR_DX_FROM_PTR_BP xor dx, word ptr [bp]
#define XOR_DX_FROM_PTR_SI xor dx, word ptr [si]
#define XOR_DX_FROM_PTR_DI xor dx, word ptr [di]

#define XOR_DI_FROM_PTR_EAX xor di, word ptr [eax]
#define XOR_DI_FROM_PTR_EBX xor di, word ptr [ebx]
#define XOR_DI_FROM_PTR_ECX xor di, word ptr [ecx]
#define XOR_DI_FROM_PTR_EDX xor di, word ptr [edx]
#define XOR_DI_FROM_PTR_EDI xor di, word ptr [edi]
#define XOR_DI_FROM_PTR_ESI xor di, word ptr [esi]
#define XOR_DI_FROM_PTR_EBP xor di, word ptr [ebp]
#define XOR_DI_FROM_PTR_ESP xor di, word ptr [esp]
#define XOR_DI_FROM_PTR_BX xor di, word ptr [bx]
#define XOR_DI_FROM_PTR_BP xor di, word ptr [bp]
#define XOR_DI_FROM_PTR_SI xor di, word ptr [si]
#define XOR_DI_FROM_PTR_DI xor di, word ptr [di]

#define XOR_SI_FROM_PTR_EAX xor si, word ptr [eax]
#define XOR_SI_FROM_PTR_EBX xor si, word ptr [ebx]
#define XOR_SI_FROM_PTR_ECX xor si, word ptr [ecx]
#define XOR_SI_FROM_PTR_EDX xor si, word ptr [edx]
#define XOR_SI_FROM_PTR_EDI xor si, word ptr [edi]
#define XOR_SI_FROM_PTR_ESI xor si, word ptr [esi]
#define XOR_SI_FROM_PTR_EBP xor si, word ptr [ebp]
#define XOR_SI_FROM_PTR_ESP xor si, word ptr [esp]
#define XOR_SI_FROM_PTR_BX xor si, word ptr [bx]
#define XOR_SI_FROM_PTR_BP xor si, word ptr [bp]
#define XOR_SI_FROM_PTR_SI xor si, word ptr [si]
#define XOR_SI_FROM_PTR_DI xor si, word ptr [di]

#define XOR_BP_FROM_PTR_EAX xor bp, word ptr [eax]
#define XOR_BP_FROM_PTR_EBX xor bp, word ptr [ebx]
#define XOR_BP_FROM_PTR_ECX xor bp, word ptr [ecx]
#define XOR_BP_FROM_PTR_EDX xor bp, word ptr [edx]
#define XOR_BP_FROM_PTR_EDI xor bp, word ptr [edi]
#define XOR_BP_FROM_PTR_ESI xor bp, word ptr [esi]
#define XOR_BP_FROM_PTR_EBP xor bp, word ptr [ebp]
#define XOR_BP_FROM_PTR_ESP xor bp, word ptr [esp]
#define XOR_BP_FROM_PTR_BX xor bp, word ptr [bx]
#define XOR_BP_FROM_PTR_BP xor bp, word ptr [bp]
#define XOR_BP_FROM_PTR_SI xor bp, word ptr [si]
#define XOR_BP_FROM_PTR_DI xor bp, word ptr [di]

#define XOR_SP_FROM_PTR_EAX xor sp, word ptr [eax]
#define XOR_SP_FROM_PTR_EBX xor sp, word ptr [ebx]
#define XOR_SP_FROM_PTR_ECX xor sp, word ptr [ecx]
#define XOR_SP_FROM_PTR_EDX xor sp, word ptr [edx]
#define XOR_SP_FROM_PTR_EDI xor sp, word ptr [edi]
#define XOR_SP_FROM_PTR_ESI xor sp, word ptr [esi]
#define XOR_SP_FROM_PTR_EBP xor sp, word ptr [ebp]
#define XOR_SP_FROM_PTR_ESP xor sp, word ptr [esp]
#define XOR_SP_FROM_PTR_BX xor sp, word ptr [bx]
#define XOR_SP_FROM_PTR_BP xor sp, word ptr [bp]
#define XOR_SP_FROM_PTR_SI xor sp, word ptr [si]
#define XOR_SP_FROM_PTR_DI xor sp, word ptr [di]

#define XOR_AX_TO_PTR_EAX xor word ptr [eax], ax
#define XOR_AX_TO_PTR_EBX xor word ptr [ebx], ax
#define XOR_AX_TO_PTR_ECX xor word ptr [ecx], ax
#define XOR_AX_TO_PTR_EDX xor word ptr [edx], ax
#define XOR_AX_TO_PTR_EDI xor word ptr [edi], ax
#define XOR_AX_TO_PTR_ESI xor word ptr [esi], ax
#define XOR_AX_TO_PTR_EBP xor word ptr [ebp], ax
#define XOR_AX_TO_PTR_ESP xor word ptr [esp], ax
#define XOR_AX_TO_PTR_BX xor word ptr [bx], ax
#define XOR_AX_TO_PTR_BP xor word ptr [bp], ax
#define XOR_AX_TO_PTR_SI xor word ptr [si], ax
#define XOR_AX_TO_PTR_DI xor word ptr [di], ax

#define XOR_BX_TO_PTR_EAX xor word ptr [eax], bx
#define XOR_BX_TO_PTR_EBX xor word ptr [ebx], bx
#define XOR_BX_TO_PTR_ECX xor word ptr [ecx], bx
#define XOR_BX_TO_PTR_EDX xor word ptr [edx], bx
#define XOR_BX_TO_PTR_EDI xor word ptr [edi], bx
#define XOR_BX_TO_PTR_ESI xor word ptr [esi], bx
#define XOR_BX_TO_PTR_EBP xor word ptr [ebp], bx
#define XOR_BX_TO_PTR_ESP xor word ptr [esp], bx
#define XOR_BX_TO_PTR_BX xor word ptr [bx], bx
#define XOR_BX_TO_PTR_BP xor word ptr [bp], bx
#define XOR_BX_TO_PTR_SI xor word ptr [si], bx
#define XOR_BX_TO_PTR_DI xor word ptr [di], bx

#define XOR_CX_TO_PTR_EAX xor word ptr [eax], cx
#define XOR_CX_TO_PTR_EBX xor word ptr [ebx], cx
#define XOR_CX_TO_PTR_ECX xor word ptr [ecx], cx
#define XOR_CX_TO_PTR_EDX xor word ptr [edx], cx
#define XOR_CX_TO_PTR_EDI xor word ptr [edi], cx
#define XOR_CX_TO_PTR_ESI xor word ptr [esi], cx
#define XOR_CX_TO_PTR_EBP xor word ptr [ebp], cx
#define XOR_CX_TO_PTR_ESP xor word ptr [esp], cx
#define XOR_CX_TO_PTR_BX xor word ptr [bx], cx
#define XOR_CX_TO_PTR_BP xor word ptr [bp], cx
#define XOR_CX_TO_PTR_SI xor word ptr [si], cx
#define XOR_CX_TO_PTR_DI xor word ptr [di], cx

#define XOR_DX_TO_PTR_EAX xor word ptr [eax], dx
#define XOR_DX_TO_PTR_EBX xor word ptr [ebx], dx
#define XOR_DX_TO_PTR_ECX xor word ptr [ecx], dx
#define XOR_DX_TO_PTR_EDX xor word ptr [edx], dx
#define XOR_DX_TO_PTR_EDI xor word ptr [edi], dx
#define XOR_DX_TO_PTR_ESI xor word ptr [esi], dx
#define XOR_DX_TO_PTR_EBP xor word ptr [ebp], dx
#define XOR_DX_TO_PTR_ESP xor word ptr [esp], dx
#define XOR_DX_TO_PTR_BX xor word ptr [bx], dx
#define XOR_DX_TO_PTR_BP xor word ptr [bp], dx
#define XOR_DX_TO_PTR_SI xor word ptr [si], dx
#define XOR_DX_TO_PTR_DI xor word ptr [di], dx

#define XOR_DI_TO_PTR_EAX xor word ptr [eax], di
#define XOR_DI_TO_PTR_EBX xor word ptr [ebx], di
#define XOR_DI_TO_PTR_ECX xor word ptr [ecx], di
#define XOR_DI_TO_PTR_EDX xor word ptr [edx], di
#define XOR_DI_TO_PTR_EDI xor word ptr [edi], di
#define XOR_DI_TO_PTR_ESI xor word ptr [esi], di
#define XOR_DI_TO_PTR_EBP xor word ptr [ebp], di
#define XOR_DI_TO_PTR_ESP xor word ptr [esp], di
#define XOR_DI_TO_PTR_BX xor word ptr [bx], di
#define XOR_DI_TO_PTR_BP xor word ptr [bp], di
#define XOR_DI_TO_PTR_SI xor word ptr [si], di
#define XOR_DI_TO_PTR_DI xor word ptr [di], di

#define XOR_SI_TO_PTR_EAX xor word ptr [eax], si
#define XOR_SI_TO_PTR_EBX xor word ptr [ebx], si
#define XOR_SI_TO_PTR_ECX xor word ptr [ecx], si
#define XOR_SI_TO_PTR_EDX xor word ptr [edx], si
#define XOR_SI_TO_PTR_EDI xor word ptr [edi], si
#define XOR_SI_TO_PTR_ESI xor word ptr [esi], si
#define XOR_SI_TO_PTR_EBP xor word ptr [ebp], si
#define XOR_SI_TO_PTR_ESP xor word ptr [esp], si
#define XOR_SI_TO_PTR_BX xor word ptr [bx], si
#define XOR_SI_TO_PTR_BP xor word ptr [bp], si
#define XOR_SI_TO_PTR_SI xor word ptr [si], si
#define XOR_SI_TO_PTR_DI xor word ptr [di], si

#define XOR_BP_TO_PTR_EAX xor word ptr [eax], bp
#define XOR_BP_TO_PTR_EBX xor word ptr [ebx], bp
#define XOR_BP_TO_PTR_ECX xor word ptr [ecx], bp
#define XOR_BP_TO_PTR_EDX xor word ptr [edx], bp
#define XOR_BP_TO_PTR_EDI xor word ptr [edi], bp
#define XOR_BP_TO_PTR_ESI xor word ptr [esi], bp
#define XOR_BP_TO_PTR_EBP xor word ptr [ebp], bp
#define XOR_BP_TO_PTR_ESP xor word ptr [esp], bp
#define XOR_BP_TO_PTR_BX xor word ptr [bx], bp
#define XOR_BP_TO_PTR_BP xor word ptr [bp], bp
#define XOR_BP_TO_PTR_SI xor word ptr [si], bp
#define XOR_BP_TO_PTR_DI xor word ptr [di], bp

#define XOR_SP_TO_PTR_EAX xor word ptr [eax], sp
#define XOR_SP_TO_PTR_EBX xor word ptr [ebx], sp
#define XOR_SP_TO_PTR_ECX xor word ptr [ecx], sp
#define XOR_SP_TO_PTR_EDX xor word ptr [edx], sp
#define XOR_SP_TO_PTR_EDI xor word ptr [edi], sp
#define XOR_SP_TO_PTR_ESI xor word ptr [esi], sp
#define XOR_SP_TO_PTR_EBP xor word ptr [ebp], sp
#define XOR_SP_TO_PTR_ESP xor word ptr [esp], sp
#define XOR_SP_TO_PTR_BX xor word ptr [bx], sp
#define XOR_SP_TO_PTR_BP xor word ptr [bp], sp
#define XOR_SP_TO_PTR_SI xor word ptr [si], sp
#define XOR_SP_TO_PTR_DI xor word ptr [di], sp

#define XOR_AX_FROM_PTR_EAX_(VALUE) xor ax, word ptr [eax + VALUE]
#define XOR_AX_FROM_PTR_EBX_(VALUE) xor ax, word ptr [ebx + VALUE]
#define XOR_AX_FROM_PTR_ECX_(VALUE) xor ax, word ptr [ecx + VALUE]
#define XOR_AX_FROM_PTR_EDX_(VALUE) xor ax, word ptr [edx + VALUE]
#define XOR_AX_FROM_PTR_EDI_(VALUE) xor ax, word ptr [edi + VALUE]
#define XOR_AX_FROM_PTR_ESI_(VALUE) xor ax, word ptr [esi + VALUE]
#define XOR_AX_FROM_PTR_EBP_(VALUE) xor ax, word ptr [ebp + VALUE]
#define XOR_AX_FROM_PTR_ESP_(VALUE) xor ax, word ptr [esp + VALUE]
#define XOR_AX_FROM_PTR_BX_(VALUE) xor ax, word ptr [bx + VALUE]
#define XOR_AX_FROM_PTR_BP_(VALUE) xor ax, word ptr [bp + VALUE]
#define XOR_AX_FROM_PTR_SI_(VALUE) xor ax, word ptr [si + VALUE]
#define XOR_AX_FROM_PTR_DI_(VALUE) xor ax, word ptr [di + VALUE]

#define XOR_BX_FROM_PTR_EAX_(VALUE) xor bx, word ptr [eax + VALUE]
#define XOR_BX_FROM_PTR_EBX_(VALUE) xor bx, word ptr [ebx + VALUE]
#define XOR_BX_FROM_PTR_ECX_(VALUE) xor bx, word ptr [ecx + VALUE]
#define XOR_BX_FROM_PTR_EDX_(VALUE) xor bx, word ptr [edx + VALUE]
#define XOR_BX_FROM_PTR_EDI_(VALUE) xor bx, word ptr [edi + VALUE]
#define XOR_BX_FROM_PTR_ESI_(VALUE) xor bx, word ptr [esi + VALUE]
#define XOR_BX_FROM_PTR_EBP_(VALUE) xor bx, word ptr [ebp + VALUE]
#define XOR_BX_FROM_PTR_ESP_(VALUE) xor bx, word ptr [esp + VALUE]
#define XOR_BX_FROM_PTR_BX_(VALUE) xor bx, word ptr [bx + VALUE]
#define XOR_BX_FROM_PTR_BP_(VALUE) xor bx, word ptr [bp + VALUE]
#define XOR_BX_FROM_PTR_SI_(VALUE) xor bx, word ptr [si + VALUE]
#define XOR_BX_FROM_PTR_DI_(VALUE) xor bx, word ptr [di + VALUE]

#define XOR_CX_FROM_PTR_EAX_(VALUE) xor cx, word ptr [eax + VALUE]
#define XOR_CX_FROM_PTR_EBX_(VALUE) xor cx, word ptr [ebx + VALUE]
#define XOR_CX_FROM_PTR_ECX_(VALUE) xor cx, word ptr [ecx + VALUE]
#define XOR_CX_FROM_PTR_EDX_(VALUE) xor cx, word ptr [edx + VALUE]
#define XOR_CX_FROM_PTR_EDI_(VALUE) xor cx, word ptr [edi + VALUE]
#define XOR_CX_FROM_PTR_ESI_(VALUE) xor cx, word ptr [esi + VALUE]
#define XOR_CX_FROM_PTR_EBP_(VALUE) xor cx, word ptr [ebp + VALUE]
#define XOR_CX_FROM_PTR_ESP_(VALUE) xor cx, word ptr [esp + VALUE]
#define XOR_CX_FROM_PTR_BX_(VALUE) xor cx, word ptr [bx + VALUE]
#define XOR_CX_FROM_PTR_BP_(VALUE) xor cx, word ptr [bp + VALUE]
#define XOR_CX_FROM_PTR_SI_(VALUE) xor cx, word ptr [si + VALUE]
#define XOR_CX_FROM_PTR_DI_(VALUE) xor cx, word ptr [di + VALUE]

#define XOR_DX_FROM_PTR_EAX_(VALUE) xor dx, word ptr [eax + VALUE]
#define XOR_DX_FROM_PTR_EBX_(VALUE) xor dx, word ptr [ebx + VALUE]
#define XOR_DX_FROM_PTR_ECX_(VALUE) xor dx, word ptr [ecx + VALUE]
#define XOR_DX_FROM_PTR_EDX_(VALUE) xor dx, word ptr [edx + VALUE]
#define XOR_DX_FROM_PTR_EDI_(VALUE) xor dx, word ptr [edi + VALUE]
#define XOR_DX_FROM_PTR_ESI_(VALUE) xor dx, word ptr [esi + VALUE]
#define XOR_DX_FROM_PTR_EBP_(VALUE) xor dx, word ptr [ebp + VALUE]
#define XOR_DX_FROM_PTR_ESP_(VALUE) xor dx, word ptr [esp + VALUE]
#define XOR_DX_FROM_PTR_BX_(VALUE) xor dx, word ptr [bx + VALUE]
#define XOR_DX_FROM_PTR_BP_(VALUE) xor dx, word ptr [bp + VALUE]
#define XOR_DX_FROM_PTR_SI_(VALUE) xor dx, word ptr [si + VALUE]
#define XOR_DX_FROM_PTR_DI_(VALUE) xor dx, word ptr [di + VALUE]

#define XOR_DI_FROM_PTR_EAX_(VALUE) xor di, word ptr [eax + VALUE]
#define XOR_DI_FROM_PTR_EBX_(VALUE) xor di, word ptr [ebx + VALUE]
#define XOR_DI_FROM_PTR_ECX_(VALUE) xor di, word ptr [ecx + VALUE]
#define XOR_DI_FROM_PTR_EDX_(VALUE) xor di, word ptr [edx + VALUE]
#define XOR_DI_FROM_PTR_EDI_(VALUE) xor di, word ptr [edi + VALUE]
#define XOR_DI_FROM_PTR_ESI_(VALUE) xor di, word ptr [esi + VALUE]
#define XOR_DI_FROM_PTR_EBP_(VALUE) xor di, word ptr [ebp + VALUE]
#define XOR_DI_FROM_PTR_ESP_(VALUE) xor di, word ptr [esp + VALUE]
#define XOR_DI_FROM_PTR_BX_(VALUE) xor di, word ptr [bx + VALUE]
#define XOR_DI_FROM_PTR_BP_(VALUE) xor di, word ptr [bp + VALUE]
#define XOR_DI_FROM_PTR_SI_(VALUE) xor di, word ptr [si + VALUE]
#define XOR_DI_FROM_PTR_DI_(VALUE) xor di, word ptr [di + VALUE]

#define XOR_SI_FROM_PTR_EAX_(VALUE) xor si, word ptr [eax + VALUE]
#define XOR_SI_FROM_PTR_EBX_(VALUE) xor si, word ptr [ebx + VALUE]
#define XOR_SI_FROM_PTR_ECX_(VALUE) xor si, word ptr [ecx + VALUE]
#define XOR_SI_FROM_PTR_EDX_(VALUE) xor si, word ptr [edx + VALUE]
#define XOR_SI_FROM_PTR_EDI_(VALUE) xor si, word ptr [edi + VALUE]
#define XOR_SI_FROM_PTR_ESI_(VALUE) xor si, word ptr [esi + VALUE]
#define XOR_SI_FROM_PTR_EBP_(VALUE) xor si, word ptr [ebp + VALUE]
#define XOR_SI_FROM_PTR_ESP_(VALUE) xor si, word ptr [esp + VALUE]
#define XOR_SI_FROM_PTR_BX_(VALUE) xor si, word ptr [bx + VALUE]
#define XOR_SI_FROM_PTR_BP_(VALUE) xor si, word ptr [bp + VALUE]
#define XOR_SI_FROM_PTR_SI_(VALUE) xor si, word ptr [si + VALUE]
#define XOR_SI_FROM_PTR_DI_(VALUE) xor si, word ptr [di + VALUE]

#define XOR_BP_FROM_PTR_EAX_(VALUE) xor bp, word ptr [eax + VALUE]
#define XOR_BP_FROM_PTR_EBX_(VALUE) xor bp, word ptr [ebx + VALUE]
#define XOR_BP_FROM_PTR_ECX_(VALUE) xor bp, word ptr [ecx + VALUE]
#define XOR_BP_FROM_PTR_EDX_(VALUE) xor bp, word ptr [edx + VALUE]
#define XOR_BP_FROM_PTR_EDI_(VALUE) xor bp, word ptr [edi + VALUE]
#define XOR_BP_FROM_PTR_ESI_(VALUE) xor bp, word ptr [esi + VALUE]
#define XOR_BP_FROM_PTR_EBP_(VALUE) xor bp, word ptr [ebp + VALUE]
#define XOR_BP_FROM_PTR_ESP_(VALUE) xor bp, word ptr [esp + VALUE]
#define XOR_BP_FROM_PTR_BX_(VALUE) xor bp, word ptr [bx + VALUE]
#define XOR_BP_FROM_PTR_BP_(VALUE) xor bp, word ptr [bp + VALUE]
#define XOR_BP_FROM_PTR_SI_(VALUE) xor bp, word ptr [si + VALUE]
#define XOR_BP_FROM_PTR_DI_(VALUE) xor bp, word ptr [di + VALUE]

#define XOR_SP_FROM_PTR_EAX_(VALUE) xor sp, word ptr [eax + VALUE]
#define XOR_SP_FROM_PTR_EBX_(VALUE) xor sp, word ptr [ebx + VALUE]
#define XOR_SP_FROM_PTR_ECX_(VALUE) xor sp, word ptr [ecx + VALUE]
#define XOR_SP_FROM_PTR_EDX_(VALUE) xor sp, word ptr [edx + VALUE]
#define XOR_SP_FROM_PTR_EDI_(VALUE) xor sp, word ptr [edi + VALUE]
#define XOR_SP_FROM_PTR_ESI_(VALUE) xor sp, word ptr [esi + VALUE]
#define XOR_SP_FROM_PTR_EBP_(VALUE) xor sp, word ptr [ebp + VALUE]
#define XOR_SP_FROM_PTR_ESP_(VALUE) xor sp, word ptr [esp + VALUE]
#define XOR_SP_FROM_PTR_BX_(VALUE) xor sp, word ptr [bx + VALUE]
#define XOR_SP_FROM_PTR_BP_(VALUE) xor sp, word ptr [bp + VALUE]
#define XOR_SP_FROM_PTR_SI_(VALUE) xor sp, word ptr [si + VALUE]
#define XOR_SP_FROM_PTR_DI_(VALUE) xor sp, word ptr [di + VALUE]

#define XOR_AX_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], ax
#define XOR_AX_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], ax
#define XOR_AX_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], ax
#define XOR_AX_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], ax
#define XOR_AX_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], ax
#define XOR_AX_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], ax
#define XOR_AX_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], ax
#define XOR_AX_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], ax
#define XOR_AX_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], ax
#define XOR_AX_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], ax
#define XOR_AX_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], ax
#define XOR_AX_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], ax

#define XOR_BX_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], bx
#define XOR_BX_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], bx
#define XOR_BX_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], bx
#define XOR_BX_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], bx
#define XOR_BX_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], bx
#define XOR_BX_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], bx
#define XOR_BX_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], bx
#define XOR_BX_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], bx
#define XOR_BX_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], bx
#define XOR_BX_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], bx
#define XOR_BX_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], bx
#define XOR_BX_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], bx

#define XOR_CX_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], cx
#define XOR_CX_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], cx
#define XOR_CX_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], cx
#define XOR_CX_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], cx
#define XOR_CX_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], cx
#define XOR_CX_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], cx
#define XOR_CX_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], cx
#define XOR_CX_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], cx
#define XOR_CX_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], cx
#define XOR_CX_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], cx
#define XOR_CX_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], cx
#define XOR_CX_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], cx

#define XOR_DX_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], dx
#define XOR_DX_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], dx
#define XOR_DX_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], dx
#define XOR_DX_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], dx
#define XOR_DX_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], dx
#define XOR_DX_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], dx
#define XOR_DX_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], dx
#define XOR_DX_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], dx
#define XOR_DX_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], dx
#define XOR_DX_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], dx
#define XOR_DX_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], dx
#define XOR_DX_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], dx

#define XOR_DI_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], di
#define XOR_DI_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], di
#define XOR_DI_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], di
#define XOR_DI_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], di
#define XOR_DI_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], di
#define XOR_DI_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], di
#define XOR_DI_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], di
#define XOR_DI_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], di
#define XOR_DI_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], di
#define XOR_DI_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], di
#define XOR_DI_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], di
#define XOR_DI_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], di

#define XOR_SI_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], si
#define XOR_SI_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], si
#define XOR_SI_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], si
#define XOR_SI_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], si
#define XOR_SI_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], si
#define XOR_SI_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], si
#define XOR_SI_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], si
#define XOR_SI_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], si
#define XOR_SI_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], si
#define XOR_SI_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], si
#define XOR_SI_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], si
#define XOR_SI_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], si

#define XOR_BP_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], bp
#define XOR_BP_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], bp
#define XOR_BP_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], bp
#define XOR_BP_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], bp
#define XOR_BP_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], bp
#define XOR_BP_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], bp
#define XOR_BP_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], bp
#define XOR_BP_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], bp
#define XOR_BP_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], bp
#define XOR_BP_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], bp
#define XOR_BP_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], bp
#define XOR_BP_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], bp

#define XOR_SP_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], sp
#define XOR_SP_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], sp
#define XOR_SP_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], sp
#define XOR_SP_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], sp
#define XOR_SP_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], sp
#define XOR_SP_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], sp
#define XOR_SP_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], sp
#define XOR_SP_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], sp
#define XOR_SP_TO_PTR_BX_(VALUE) xor word ptr [bx + VALUE], sp
#define XOR_SP_TO_PTR_BP_(VALUE) xor word ptr [bp + VALUE], sp
#define XOR_SP_TO_PTR_SI_(VALUE) xor word ptr [si + VALUE], sp
#define XOR_SP_TO_PTR_DI_(VALUE) xor word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_AX_FROM_PTR_(VALUE) xor ax, word ptr [VALUE]
#define XOR_BX_FROM_PTR_(VALUE) xor bx, word ptr [VALUE]
#define XOR_CX_FROM_PTR_(VALUE) xor cx, word ptr [VALUE]
#define XOR_DX_FROM_PTR_(VALUE) xor dx, word ptr [VALUE]
#define XOR_DI_FROM_PTR_(VALUE) xor di, word ptr [VALUE]
#define XOR_SI_FROM_PTR_(VALUE) xor si, word ptr [VALUE]
#define XOR_BP_FROM_PTR_(VALUE) xor bp, word ptr [VALUE]
#define XOR_SP_FROM_PTR_(VALUE) xor sp, word ptr [VALUE]
#define XOR_R8W_FROM_PTR_(VALUE) xor r8w, word ptr [VALUE]
#define XOR_R9W_FROM_PTR_(VALUE) xor r9w, word ptr [VALUE]
#define XOR_R10W_FROM_PTR_(VALUE) xor r10w, word ptr [VALUE]
#define XOR_R11W_FROM_PTR_(VALUE) xor r11w, word ptr [VALUE]
#define XOR_R12W_FROM_PTR_(VALUE) xor r12w, word ptr [VALUE]
#define XOR_R13W_FROM_PTR_(VALUE) xor r13w, word ptr [VALUE]
#define XOR_R14W_FROM_PTR_(VALUE) xor r14w, word ptr [VALUE]
#define XOR_R15W_FROM_PTR_(VALUE) xor r15w, word ptr [VALUE]

#define XOR_AX_TO_PTR_(VALUE) xor word ptr [VALUE], ax
#define XOR_BX_TO_PTR_(VALUE) xor word ptr [VALUE], bx
#define XOR_CX_TO_PTR_(VALUE) xor word ptr [VALUE], cx
#define XOR_DX_TO_PTR_(VALUE) xor word ptr [VALUE], dx
#define XOR_DI_TO_PTR_(VALUE) xor word ptr [VALUE], di
#define XOR_SI_TO_PTR_(VALUE) xor word ptr [VALUE], si
#define XOR_BP_TO_PTR_(VALUE) xor word ptr [VALUE], bp
#define XOR_SP_TO_PTR_(VALUE) xor word ptr [VALUE], sp
#define XOR_R8W_TO_PTR_(VALUE) xor word ptr [VALUE], r8w
#define XOR_R9W_TO_PTR_(VALUE) xor word ptr [VALUE], r9w
#define XOR_R10W_TO_PTR_(VALUE) xor word ptr [VALUE], r10w
#define XOR_R11W_TO_PTR_(VALUE) xor word ptr [VALUE], r11w
#define XOR_R12W_TO_PTR_(VALUE) xor word ptr [VALUE], r12w
#define XOR_R13W_TO_PTR_(VALUE) xor word ptr [VALUE], r13w
#define XOR_R14W_TO_PTR_(VALUE) xor word ptr [VALUE], r14w
#define XOR_R15W_TO_PTR_(VALUE) xor word ptr [VALUE], r15w

#define XOR_AX_FROM_PTR_RAX xor ax, word ptr [rax]
#define XOR_AX_FROM_PTR_RBX xor ax, word ptr [rbx]
#define XOR_AX_FROM_PTR_RCX xor ax, word ptr [rcx]
#define XOR_AX_FROM_PTR_RDX xor ax, word ptr [rdx]
#define XOR_AX_FROM_PTR_RDI xor ax, word ptr [rdi]
#define XOR_AX_FROM_PTR_RSI xor ax, word ptr [rsi]
#define XOR_AX_FROM_PTR_RBP xor ax, word ptr [rbp]
#define XOR_AX_FROM_PTR_RSP xor ax, word ptr [rsp]
#define XOR_AX_FROM_PTR_R8 xor ax, word ptr [r8]
#define XOR_AX_FROM_PTR_R9 xor ax, word ptr [r9]
#define XOR_AX_FROM_PTR_R10 xor ax, word ptr [r10]
#define XOR_AX_FROM_PTR_R11 xor ax, word ptr [r11]
#define XOR_AX_FROM_PTR_R12 xor ax, word ptr [r12]
#define XOR_AX_FROM_PTR_R13 xor ax, word ptr [r13]
#define XOR_AX_FROM_PTR_R14 xor ax, word ptr [r14]
#define XOR_AX_FROM_PTR_R15 xor ax, word ptr [r15]
#define XOR_AX_FROM_PTR_EAX xor ax, word ptr [eax]
#define XOR_AX_FROM_PTR_EBX xor ax, word ptr [ebx]
#define XOR_AX_FROM_PTR_ECX xor ax, word ptr [ecx]
#define XOR_AX_FROM_PTR_EDX xor ax, word ptr [edx]
#define XOR_AX_FROM_PTR_EDI xor ax, word ptr [edi]
#define XOR_AX_FROM_PTR_ESI xor ax, word ptr [esi]
#define XOR_AX_FROM_PTR_EBP xor ax, word ptr [ebp]
#define XOR_AX_FROM_PTR_ESP xor ax, word ptr [esp]

#define XOR_BX_FROM_PTR_RAX xor bx, word ptr [rax]
#define XOR_BX_FROM_PTR_RBX xor bx, word ptr [rbx]
#define XOR_BX_FROM_PTR_RCX xor bx, word ptr [rcx]
#define XOR_BX_FROM_PTR_RDX xor bx, word ptr [rdx]
#define XOR_BX_FROM_PTR_RDI xor bx, word ptr [rdi]
#define XOR_BX_FROM_PTR_RSI xor bx, word ptr [rsi]
#define XOR_BX_FROM_PTR_RBP xor bx, word ptr [rbp]
#define XOR_BX_FROM_PTR_RSP xor bx, word ptr [rsp]
#define XOR_BX_FROM_PTR_R8 xor bx, word ptr [r8]
#define XOR_BX_FROM_PTR_R9 xor bx, word ptr [r9]
#define XOR_BX_FROM_PTR_R10 xor bx, word ptr [r10]
#define XOR_BX_FROM_PTR_R11 xor bx, word ptr [r11]
#define XOR_BX_FROM_PTR_R12 xor bx, word ptr [r12]
#define XOR_BX_FROM_PTR_R13 xor bx, word ptr [r13]
#define XOR_BX_FROM_PTR_R14 xor bx, word ptr [r14]
#define XOR_BX_FROM_PTR_R15 xor bx, word ptr [r15]
#define XOR_BX_FROM_PTR_EAX xor bx, word ptr [eax]
#define XOR_BX_FROM_PTR_EBX xor bx, word ptr [ebx]
#define XOR_BX_FROM_PTR_ECX xor bx, word ptr [ecx]
#define XOR_BX_FROM_PTR_EDX xor bx, word ptr [edx]
#define XOR_BX_FROM_PTR_EDI xor bx, word ptr [edi]
#define XOR_BX_FROM_PTR_ESI xor bx, word ptr [esi]
#define XOR_BX_FROM_PTR_EBP xor bx, word ptr [ebp]
#define XOR_BX_FROM_PTR_ESP xor bx, word ptr [esp]

#define XOR_CX_FROM_PTR_RAX xor cx, word ptr [rax]
#define XOR_CX_FROM_PTR_RBX xor cx, word ptr [rbx]
#define XOR_CX_FROM_PTR_RCX xor cx, word ptr [rcx]
#define XOR_CX_FROM_PTR_RDX xor cx, word ptr [rdx]
#define XOR_CX_FROM_PTR_RDI xor cx, word ptr [rdi]
#define XOR_CX_FROM_PTR_RSI xor cx, word ptr [rsi]
#define XOR_CX_FROM_PTR_RBP xor cx, word ptr [rbp]
#define XOR_CX_FROM_PTR_RSP xor cx, word ptr [rsp]
#define XOR_CX_FROM_PTR_R8 xor cx, word ptr [r8]
#define XOR_CX_FROM_PTR_R9 xor cx, word ptr [r9]
#define XOR_CX_FROM_PTR_R10 xor cx, word ptr [r10]
#define XOR_CX_FROM_PTR_R11 xor cx, word ptr [r11]
#define XOR_CX_FROM_PTR_R12 xor cx, word ptr [r12]
#define XOR_CX_FROM_PTR_R13 xor cx, word ptr [r13]
#define XOR_CX_FROM_PTR_R14 xor cx, word ptr [r14]
#define XOR_CX_FROM_PTR_R15 xor cx, word ptr [r15]
#define XOR_CX_FROM_PTR_EAX xor cx, word ptr [eax]
#define XOR_CX_FROM_PTR_EBX xor cx, word ptr [ebx]
#define XOR_CX_FROM_PTR_ECX xor cx, word ptr [ecx]
#define XOR_CX_FROM_PTR_EDX xor cx, word ptr [edx]
#define XOR_CX_FROM_PTR_EDI xor cx, word ptr [edi]
#define XOR_CX_FROM_PTR_ESI xor cx, word ptr [esi]
#define XOR_CX_FROM_PTR_EBP xor cx, word ptr [ebp]
#define XOR_CX_FROM_PTR_ESP xor cx, word ptr [esp]

#define XOR_DX_FROM_PTR_RAX xor dx, word ptr [rax]
#define XOR_DX_FROM_PTR_RBX xor dx, word ptr [rbx]
#define XOR_DX_FROM_PTR_RCX xor dx, word ptr [rcx]
#define XOR_DX_FROM_PTR_RDX xor dx, word ptr [rdx]
#define XOR_DX_FROM_PTR_RDI xor dx, word ptr [rdi]
#define XOR_DX_FROM_PTR_RSI xor dx, word ptr [rsi]
#define XOR_DX_FROM_PTR_RBP xor dx, word ptr [rbp]
#define XOR_DX_FROM_PTR_RSP xor dx, word ptr [rsp]
#define XOR_DX_FROM_PTR_R8 xor dx, word ptr [r8]
#define XOR_DX_FROM_PTR_R9 xor dx, word ptr [r9]
#define XOR_DX_FROM_PTR_R10 xor dx, word ptr [r10]
#define XOR_DX_FROM_PTR_R11 xor dx, word ptr [r11]
#define XOR_DX_FROM_PTR_R12 xor dx, word ptr [r12]
#define XOR_DX_FROM_PTR_R13 xor dx, word ptr [r13]
#define XOR_DX_FROM_PTR_R14 xor dx, word ptr [r14]
#define XOR_DX_FROM_PTR_R15 xor dx, word ptr [r15]
#define XOR_DX_FROM_PTR_EAX xor dx, word ptr [eax]
#define XOR_DX_FROM_PTR_EBX xor dx, word ptr [ebx]
#define XOR_DX_FROM_PTR_ECX xor dx, word ptr [ecx]
#define XOR_DX_FROM_PTR_EDX xor dx, word ptr [edx]
#define XOR_DX_FROM_PTR_EDI xor dx, word ptr [edi]
#define XOR_DX_FROM_PTR_ESI xor dx, word ptr [esi]
#define XOR_DX_FROM_PTR_EBP xor dx, word ptr [ebp]
#define XOR_DX_FROM_PTR_ESP xor dx, word ptr [esp]

#define XOR_DI_FROM_PTR_RAX xor di, word ptr [rax]
#define XOR_DI_FROM_PTR_RBX xor di, word ptr [rbx]
#define XOR_DI_FROM_PTR_RCX xor di, word ptr [rcx]
#define XOR_DI_FROM_PTR_RDX xor di, word ptr [rdx]
#define XOR_DI_FROM_PTR_RDI xor di, word ptr [rdi]
#define XOR_DI_FROM_PTR_RSI xor di, word ptr [rsi]
#define XOR_DI_FROM_PTR_RBP xor di, word ptr [rbp]
#define XOR_DI_FROM_PTR_RSP xor di, word ptr [rsp]
#define XOR_DI_FROM_PTR_R8 xor di, word ptr [r8]
#define XOR_DI_FROM_PTR_R9 xor di, word ptr [r9]
#define XOR_DI_FROM_PTR_R10 xor di, word ptr [r10]
#define XOR_DI_FROM_PTR_R11 xor di, word ptr [r11]
#define XOR_DI_FROM_PTR_R12 xor di, word ptr [r12]
#define XOR_DI_FROM_PTR_R13 xor di, word ptr [r13]
#define XOR_DI_FROM_PTR_R14 xor di, word ptr [r14]
#define XOR_DI_FROM_PTR_R15 xor di, word ptr [r15]
#define XOR_DI_FROM_PTR_EAX xor di, word ptr [eax]
#define XOR_DI_FROM_PTR_EBX xor di, word ptr [ebx]
#define XOR_DI_FROM_PTR_ECX xor di, word ptr [ecx]
#define XOR_DI_FROM_PTR_EDX xor di, word ptr [edx]
#define XOR_DI_FROM_PTR_EDI xor di, word ptr [edi]
#define XOR_DI_FROM_PTR_ESI xor di, word ptr [esi]
#define XOR_DI_FROM_PTR_EBP xor di, word ptr [ebp]
#define XOR_DI_FROM_PTR_ESP xor di, word ptr [esp]

#define XOR_SI_FROM_PTR_RAX xor si, word ptr [rax]
#define XOR_SI_FROM_PTR_RBX xor si, word ptr [rbx]
#define XOR_SI_FROM_PTR_RCX xor si, word ptr [rcx]
#define XOR_SI_FROM_PTR_RDX xor si, word ptr [rdx]
#define XOR_SI_FROM_PTR_RDI xor si, word ptr [rdi]
#define XOR_SI_FROM_PTR_RSI xor si, word ptr [rsi]
#define XOR_SI_FROM_PTR_RBP xor si, word ptr [rbp]
#define XOR_SI_FROM_PTR_RSP xor si, word ptr [rsp]
#define XOR_SI_FROM_PTR_R8 xor si, word ptr [r8]
#define XOR_SI_FROM_PTR_R9 xor si, word ptr [r9]
#define XOR_SI_FROM_PTR_R10 xor si, word ptr [r10]
#define XOR_SI_FROM_PTR_R11 xor si, word ptr [r11]
#define XOR_SI_FROM_PTR_R12 xor si, word ptr [r12]
#define XOR_SI_FROM_PTR_R13 xor si, word ptr [r13]
#define XOR_SI_FROM_PTR_R14 xor si, word ptr [r14]
#define XOR_SI_FROM_PTR_R15 xor si, word ptr [r15]
#define XOR_SI_FROM_PTR_EAX xor si, word ptr [eax]
#define XOR_SI_FROM_PTR_EBX xor si, word ptr [ebx]
#define XOR_SI_FROM_PTR_ECX xor si, word ptr [ecx]
#define XOR_SI_FROM_PTR_EDX xor si, word ptr [edx]
#define XOR_SI_FROM_PTR_EDI xor si, word ptr [edi]
#define XOR_SI_FROM_PTR_ESI xor si, word ptr [esi]
#define XOR_SI_FROM_PTR_EBP xor si, word ptr [ebp]
#define XOR_SI_FROM_PTR_ESP xor si, word ptr [esp]

#define XOR_BP_FROM_PTR_RAX xor bp, word ptr [rax]
#define XOR_BP_FROM_PTR_RBX xor bp, word ptr [rbx]
#define XOR_BP_FROM_PTR_RCX xor bp, word ptr [rcx]
#define XOR_BP_FROM_PTR_RDX xor bp, word ptr [rdx]
#define XOR_BP_FROM_PTR_RDI xor bp, word ptr [rdi]
#define XOR_BP_FROM_PTR_RSI xor bp, word ptr [rsi]
#define XOR_BP_FROM_PTR_RBP xor bp, word ptr [rbp]
#define XOR_BP_FROM_PTR_RSP xor bp, word ptr [rsp]
#define XOR_BP_FROM_PTR_R8 xor bp, word ptr [r8]
#define XOR_BP_FROM_PTR_R9 xor bp, word ptr [r9]
#define XOR_BP_FROM_PTR_R10 xor bp, word ptr [r10]
#define XOR_BP_FROM_PTR_R11 xor bp, word ptr [r11]
#define XOR_BP_FROM_PTR_R12 xor bp, word ptr [r12]
#define XOR_BP_FROM_PTR_R13 xor bp, word ptr [r13]
#define XOR_BP_FROM_PTR_R14 xor bp, word ptr [r14]
#define XOR_BP_FROM_PTR_R15 xor bp, word ptr [r15]
#define XOR_BP_FROM_PTR_EAX xor bp, word ptr [eax]
#define XOR_BP_FROM_PTR_EBX xor bp, word ptr [ebx]
#define XOR_BP_FROM_PTR_ECX xor bp, word ptr [ecx]
#define XOR_BP_FROM_PTR_EDX xor bp, word ptr [edx]
#define XOR_BP_FROM_PTR_EDI xor bp, word ptr [edi]
#define XOR_BP_FROM_PTR_ESI xor bp, word ptr [esi]
#define XOR_BP_FROM_PTR_EBP xor bp, word ptr [ebp]
#define XOR_BP_FROM_PTR_ESP xor bp, word ptr [esp]

#define XOR_SP_FROM_PTR_RAX xor sp, word ptr [rax]
#define XOR_SP_FROM_PTR_RBX xor sp, word ptr [rbx]
#define XOR_SP_FROM_PTR_RCX xor sp, word ptr [rcx]
#define XOR_SP_FROM_PTR_RDX xor sp, word ptr [rdx]
#define XOR_SP_FROM_PTR_RDI xor sp, word ptr [rdi]
#define XOR_SP_FROM_PTR_RSI xor sp, word ptr [rsi]
#define XOR_SP_FROM_PTR_RBP xor sp, word ptr [rbp]
#define XOR_SP_FROM_PTR_RSP xor sp, word ptr [rsp]
#define XOR_SP_FROM_PTR_R8 xor sp, word ptr [r8]
#define XOR_SP_FROM_PTR_R9 xor sp, word ptr [r9]
#define XOR_SP_FROM_PTR_R10 xor sp, word ptr [r10]
#define XOR_SP_FROM_PTR_R11 xor sp, word ptr [r11]
#define XOR_SP_FROM_PTR_R12 xor sp, word ptr [r12]
#define XOR_SP_FROM_PTR_R13 xor sp, word ptr [r13]
#define XOR_SP_FROM_PTR_R14 xor sp, word ptr [r14]
#define XOR_SP_FROM_PTR_R15 xor sp, word ptr [r15]
#define XOR_SP_FROM_PTR_EAX xor sp, word ptr [eax]
#define XOR_SP_FROM_PTR_EBX xor sp, word ptr [ebx]
#define XOR_SP_FROM_PTR_ECX xor sp, word ptr [ecx]
#define XOR_SP_FROM_PTR_EDX xor sp, word ptr [edx]
#define XOR_SP_FROM_PTR_EDI xor sp, word ptr [edi]
#define XOR_SP_FROM_PTR_ESI xor sp, word ptr [esi]
#define XOR_SP_FROM_PTR_EBP xor sp, word ptr [ebp]
#define XOR_SP_FROM_PTR_ESP xor sp, word ptr [esp]

#define XOR_R8W_FROM_PTR_RAX xor r8w, word ptr [rax]
#define XOR_R8W_FROM_PTR_RBX xor r8w, word ptr [rbx]
#define XOR_R8W_FROM_PTR_RCX xor r8w, word ptr [rcx]
#define XOR_R8W_FROM_PTR_RDX xor r8w, word ptr [rdx]
#define XOR_R8W_FROM_PTR_RDI xor r8w, word ptr [rdi]
#define XOR_R8W_FROM_PTR_RSI xor r8w, word ptr [rsi]
#define XOR_R8W_FROM_PTR_RBP xor r8w, word ptr [rbp]
#define XOR_R8W_FROM_PTR_RSP xor r8w, word ptr [rsp]
#define XOR_R8W_FROM_PTR_R8 xor r8w, word ptr [r8]
#define XOR_R8W_FROM_PTR_R9 xor r8w, word ptr [r9]
#define XOR_R8W_FROM_PTR_R10 xor r8w, word ptr [r10]
#define XOR_R8W_FROM_PTR_R11 xor r8w, word ptr [r11]
#define XOR_R8W_FROM_PTR_R12 xor r8w, word ptr [r12]
#define XOR_R8W_FROM_PTR_R13 xor r8w, word ptr [r13]
#define XOR_R8W_FROM_PTR_R14 xor r8w, word ptr [r14]
#define XOR_R8W_FROM_PTR_R15 xor r8w, word ptr [r15]
#define XOR_R8W_FROM_PTR_EAX xor r8w, word ptr [eax]
#define XOR_R8W_FROM_PTR_EBX xor r8w, word ptr [ebx]
#define XOR_R8W_FROM_PTR_ECX xor r8w, word ptr [ecx]
#define XOR_R8W_FROM_PTR_EDX xor r8w, word ptr [edx]
#define XOR_R8W_FROM_PTR_EDI xor r8w, word ptr [edi]
#define XOR_R8W_FROM_PTR_ESI xor r8w, word ptr [esi]
#define XOR_R8W_FROM_PTR_EBP xor r8w, word ptr [ebp]
#define XOR_R8W_FROM_PTR_ESP xor r8w, word ptr [esp]

#define XOR_R9W_FROM_PTR_RAX xor r9w, word ptr [rax]
#define XOR_R9W_FROM_PTR_RBX xor r9w, word ptr [rbx]
#define XOR_R9W_FROM_PTR_RCX xor r9w, word ptr [rcx]
#define XOR_R9W_FROM_PTR_RDX xor r9w, word ptr [rdx]
#define XOR_R9W_FROM_PTR_RDI xor r9w, word ptr [rdi]
#define XOR_R9W_FROM_PTR_RSI xor r9w, word ptr [rsi]
#define XOR_R9W_FROM_PTR_RBP xor r9w, word ptr [rbp]
#define XOR_R9W_FROM_PTR_RSP xor r9w, word ptr [rsp]
#define XOR_R9W_FROM_PTR_R8 xor r9w, word ptr [r8]
#define XOR_R9W_FROM_PTR_R9 xor r9w, word ptr [r9]
#define XOR_R9W_FROM_PTR_R10 xor r9w, word ptr [r10]
#define XOR_R9W_FROM_PTR_R11 xor r9w, word ptr [r11]
#define XOR_R9W_FROM_PTR_R12 xor r9w, word ptr [r12]
#define XOR_R9W_FROM_PTR_R13 xor r9w, word ptr [r13]
#define XOR_R9W_FROM_PTR_R14 xor r9w, word ptr [r14]
#define XOR_R9W_FROM_PTR_R15 xor r9w, word ptr [r15]
#define XOR_R9W_FROM_PTR_EAX xor r9w, word ptr [eax]
#define XOR_R9W_FROM_PTR_EBX xor r9w, word ptr [ebx]
#define XOR_R9W_FROM_PTR_ECX xor r9w, word ptr [ecx]
#define XOR_R9W_FROM_PTR_EDX xor r9w, word ptr [edx]
#define XOR_R9W_FROM_PTR_EDI xor r9w, word ptr [edi]
#define XOR_R9W_FROM_PTR_ESI xor r9w, word ptr [esi]
#define XOR_R9W_FROM_PTR_EBP xor r9w, word ptr [ebp]
#define XOR_R9W_FROM_PTR_ESP xor r9w, word ptr [esp]

#define XOR_R10W_FROM_PTR_RAX xor r10w, word ptr [rax]
#define XOR_R10W_FROM_PTR_RBX xor r10w, word ptr [rbx]
#define XOR_R10W_FROM_PTR_RCX xor r10w, word ptr [rcx]
#define XOR_R10W_FROM_PTR_RDX xor r10w, word ptr [rdx]
#define XOR_R10W_FROM_PTR_RDI xor r10w, word ptr [rdi]
#define XOR_R10W_FROM_PTR_RSI xor r10w, word ptr [rsi]
#define XOR_R10W_FROM_PTR_RBP xor r10w, word ptr [rbp]
#define XOR_R10W_FROM_PTR_RSP xor r10w, word ptr [rsp]
#define XOR_R10W_FROM_PTR_R8 xor r10w, word ptr [r8]
#define XOR_R10W_FROM_PTR_R9 xor r10w, word ptr [r9]
#define XOR_R10W_FROM_PTR_R10 xor r10w, word ptr [r10]
#define XOR_R10W_FROM_PTR_R11 xor r10w, word ptr [r11]
#define XOR_R10W_FROM_PTR_R12 xor r10w, word ptr [r12]
#define XOR_R10W_FROM_PTR_R13 xor r10w, word ptr [r13]
#define XOR_R10W_FROM_PTR_R14 xor r10w, word ptr [r14]
#define XOR_R10W_FROM_PTR_R15 xor r10w, word ptr [r15]
#define XOR_R10W_FROM_PTR_EAX xor r10w, word ptr [eax]
#define XOR_R10W_FROM_PTR_EBX xor r10w, word ptr [ebx]
#define XOR_R10W_FROM_PTR_ECX xor r10w, word ptr [ecx]
#define XOR_R10W_FROM_PTR_EDX xor r10w, word ptr [edx]
#define XOR_R10W_FROM_PTR_EDI xor r10w, word ptr [edi]
#define XOR_R10W_FROM_PTR_ESI xor r10w, word ptr [esi]
#define XOR_R10W_FROM_PTR_EBP xor r10w, word ptr [ebp]
#define XOR_R10W_FROM_PTR_ESP xor r10w, word ptr [esp]

#define XOR_R11W_FROM_PTR_RAX xor r11w, word ptr [rax]
#define XOR_R11W_FROM_PTR_RBX xor r11w, word ptr [rbx]
#define XOR_R11W_FROM_PTR_RCX xor r11w, word ptr [rcx]
#define XOR_R11W_FROM_PTR_RDX xor r11w, word ptr [rdx]
#define XOR_R11W_FROM_PTR_RDI xor r11w, word ptr [rdi]
#define XOR_R11W_FROM_PTR_RSI xor r11w, word ptr [rsi]
#define XOR_R11W_FROM_PTR_RBP xor r11w, word ptr [rbp]
#define XOR_R11W_FROM_PTR_RSP xor r11w, word ptr [rsp]
#define XOR_R11W_FROM_PTR_R8 xor r11w, word ptr [r8]
#define XOR_R11W_FROM_PTR_R9 xor r11w, word ptr [r9]
#define XOR_R11W_FROM_PTR_R10 xor r11w, word ptr [r10]
#define XOR_R11W_FROM_PTR_R11 xor r11w, word ptr [r11]
#define XOR_R11W_FROM_PTR_R12 xor r11w, word ptr [r12]
#define XOR_R11W_FROM_PTR_R13 xor r11w, word ptr [r13]
#define XOR_R11W_FROM_PTR_R14 xor r11w, word ptr [r14]
#define XOR_R11W_FROM_PTR_R15 xor r11w, word ptr [r15]
#define XOR_R11W_FROM_PTR_EAX xor r11w, word ptr [eax]
#define XOR_R11W_FROM_PTR_EBX xor r11w, word ptr [ebx]
#define XOR_R11W_FROM_PTR_ECX xor r11w, word ptr [ecx]
#define XOR_R11W_FROM_PTR_EDX xor r11w, word ptr [edx]
#define XOR_R11W_FROM_PTR_EDI xor r11w, word ptr [edi]
#define XOR_R11W_FROM_PTR_ESI xor r11w, word ptr [esi]
#define XOR_R11W_FROM_PTR_EBP xor r11w, word ptr [ebp]
#define XOR_R11W_FROM_PTR_ESP xor r11w, word ptr [esp]

#define XOR_R12W_FROM_PTR_RAX xor r12w, word ptr [rax]
#define XOR_R12W_FROM_PTR_RBX xor r12w, word ptr [rbx]
#define XOR_R12W_FROM_PTR_RCX xor r12w, word ptr [rcx]
#define XOR_R12W_FROM_PTR_RDX xor r12w, word ptr [rdx]
#define XOR_R12W_FROM_PTR_RDI xor r12w, word ptr [rdi]
#define XOR_R12W_FROM_PTR_RSI xor r12w, word ptr [rsi]
#define XOR_R12W_FROM_PTR_RBP xor r12w, word ptr [rbp]
#define XOR_R12W_FROM_PTR_RSP xor r12w, word ptr [rsp]
#define XOR_R12W_FROM_PTR_R8 xor r12w, word ptr [r8]
#define XOR_R12W_FROM_PTR_R9 xor r12w, word ptr [r9]
#define XOR_R12W_FROM_PTR_R10 xor r12w, word ptr [r10]
#define XOR_R12W_FROM_PTR_R11 xor r12w, word ptr [r11]
#define XOR_R12W_FROM_PTR_R12 xor r12w, word ptr [r12]
#define XOR_R12W_FROM_PTR_R13 xor r12w, word ptr [r13]
#define XOR_R12W_FROM_PTR_R14 xor r12w, word ptr [r14]
#define XOR_R12W_FROM_PTR_R15 xor r12w, word ptr [r15]
#define XOR_R12W_FROM_PTR_EAX xor r12w, word ptr [eax]
#define XOR_R12W_FROM_PTR_EBX xor r12w, word ptr [ebx]
#define XOR_R12W_FROM_PTR_ECX xor r12w, word ptr [ecx]
#define XOR_R12W_FROM_PTR_EDX xor r12w, word ptr [edx]
#define XOR_R12W_FROM_PTR_EDI xor r12w, word ptr [edi]
#define XOR_R12W_FROM_PTR_ESI xor r12w, word ptr [esi]
#define XOR_R12W_FROM_PTR_EBP xor r12w, word ptr [ebp]
#define XOR_R12W_FROM_PTR_ESP xor r12w, word ptr [esp]

#define XOR_R13W_FROM_PTR_RAX xor r13w, word ptr [rax]
#define XOR_R13W_FROM_PTR_RBX xor r13w, word ptr [rbx]
#define XOR_R13W_FROM_PTR_RCX xor r13w, word ptr [rcx]
#define XOR_R13W_FROM_PTR_RDX xor r13w, word ptr [rdx]
#define XOR_R13W_FROM_PTR_RDI xor r13w, word ptr [rdi]
#define XOR_R13W_FROM_PTR_RSI xor r13w, word ptr [rsi]
#define XOR_R13W_FROM_PTR_RBP xor r13w, word ptr [rbp]
#define XOR_R13W_FROM_PTR_RSP xor r13w, word ptr [rsp]
#define XOR_R13W_FROM_PTR_R8 xor r13w, word ptr [r8]
#define XOR_R13W_FROM_PTR_R9 xor r13w, word ptr [r9]
#define XOR_R13W_FROM_PTR_R10 xor r13w, word ptr [r10]
#define XOR_R13W_FROM_PTR_R11 xor r13w, word ptr [r11]
#define XOR_R13W_FROM_PTR_R12 xor r13w, word ptr [r12]
#define XOR_R13W_FROM_PTR_R13 xor r13w, word ptr [r13]
#define XOR_R13W_FROM_PTR_R14 xor r13w, word ptr [r14]
#define XOR_R13W_FROM_PTR_R15 xor r13w, word ptr [r15]
#define XOR_R13W_FROM_PTR_EAX xor r13w, word ptr [eax]
#define XOR_R13W_FROM_PTR_EBX xor r13w, word ptr [ebx]
#define XOR_R13W_FROM_PTR_ECX xor r13w, word ptr [ecx]
#define XOR_R13W_FROM_PTR_EDX xor r13w, word ptr [edx]
#define XOR_R13W_FROM_PTR_EDI xor r13w, word ptr [edi]
#define XOR_R13W_FROM_PTR_ESI xor r13w, word ptr [esi]
#define XOR_R13W_FROM_PTR_EBP xor r13w, word ptr [ebp]
#define XOR_R13W_FROM_PTR_ESP xor r13w, word ptr [esp]

#define XOR_R14W_FROM_PTR_RAX xor r14w, word ptr [rax]
#define XOR_R14W_FROM_PTR_RBX xor r14w, word ptr [rbx]
#define XOR_R14W_FROM_PTR_RCX xor r14w, word ptr [rcx]
#define XOR_R14W_FROM_PTR_RDX xor r14w, word ptr [rdx]
#define XOR_R14W_FROM_PTR_RDI xor r14w, word ptr [rdi]
#define XOR_R14W_FROM_PTR_RSI xor r14w, word ptr [rsi]
#define XOR_R14W_FROM_PTR_RBP xor r14w, word ptr [rbp]
#define XOR_R14W_FROM_PTR_RSP xor r14w, word ptr [rsp]
#define XOR_R14W_FROM_PTR_R8 xor r14w, word ptr [r8]
#define XOR_R14W_FROM_PTR_R9 xor r14w, word ptr [r9]
#define XOR_R14W_FROM_PTR_R10 xor r14w, word ptr [r10]
#define XOR_R14W_FROM_PTR_R11 xor r14w, word ptr [r11]
#define XOR_R14W_FROM_PTR_R12 xor r14w, word ptr [r12]
#define XOR_R14W_FROM_PTR_R13 xor r14w, word ptr [r13]
#define XOR_R14W_FROM_PTR_R14 xor r14w, word ptr [r14]
#define XOR_R14W_FROM_PTR_R15 xor r14w, word ptr [r15]
#define XOR_R14W_FROM_PTR_EAX xor r14w, word ptr [eax]
#define XOR_R14W_FROM_PTR_EBX xor r14w, word ptr [ebx]
#define XOR_R14W_FROM_PTR_ECX xor r14w, word ptr [ecx]
#define XOR_R14W_FROM_PTR_EDX xor r14w, word ptr [edx]
#define XOR_R14W_FROM_PTR_EDI xor r14w, word ptr [edi]
#define XOR_R14W_FROM_PTR_ESI xor r14w, word ptr [esi]
#define XOR_R14W_FROM_PTR_EBP xor r14w, word ptr [ebp]
#define XOR_R14W_FROM_PTR_ESP xor r14w, word ptr [esp]

#define XOR_R15W_FROM_PTR_RAX xor r15w, word ptr [rax]
#define XOR_R15W_FROM_PTR_RBX xor r15w, word ptr [rbx]
#define XOR_R15W_FROM_PTR_RCX xor r15w, word ptr [rcx]
#define XOR_R15W_FROM_PTR_RDX xor r15w, word ptr [rdx]
#define XOR_R15W_FROM_PTR_RDI xor r15w, word ptr [rdi]
#define XOR_R15W_FROM_PTR_RSI xor r15w, word ptr [rsi]
#define XOR_R15W_FROM_PTR_RBP xor r15w, word ptr [rbp]
#define XOR_R15W_FROM_PTR_RSP xor r15w, word ptr [rsp]
#define XOR_R15W_FROM_PTR_R8 xor r15w, word ptr [r8]
#define XOR_R15W_FROM_PTR_R9 xor r15w, word ptr [r9]
#define XOR_R15W_FROM_PTR_R10 xor r15w, word ptr [r10]
#define XOR_R15W_FROM_PTR_R11 xor r15w, word ptr [r11]
#define XOR_R15W_FROM_PTR_R12 xor r15w, word ptr [r12]
#define XOR_R15W_FROM_PTR_R13 xor r15w, word ptr [r13]
#define XOR_R15W_FROM_PTR_R14 xor r15w, word ptr [r14]
#define XOR_R15W_FROM_PTR_R15 xor r15w, word ptr [r15]
#define XOR_R15W_FROM_PTR_EAX xor r15w, word ptr [eax]
#define XOR_R15W_FROM_PTR_EBX xor r15w, word ptr [ebx]
#define XOR_R15W_FROM_PTR_ECX xor r15w, word ptr [ecx]
#define XOR_R15W_FROM_PTR_EDX xor r15w, word ptr [edx]
#define XOR_R15W_FROM_PTR_EDI xor r15w, word ptr [edi]
#define XOR_R15W_FROM_PTR_ESI xor r15w, word ptr [esi]
#define XOR_R15W_FROM_PTR_EBP xor r15w, word ptr [ebp]
#define XOR_R15W_FROM_PTR_ESP xor r15w, word ptr [esp]

#define XOR_AX_TO_PTR_RAX xor word ptr [rax], ax
#define XOR_AX_TO_PTR_RBX xor word ptr [rbx], ax
#define XOR_AX_TO_PTR_RCX xor word ptr [rcx], ax
#define XOR_AX_TO_PTR_RDX xor word ptr [rdx], ax
#define XOR_AX_TO_PTR_RDI xor word ptr [rdi], ax
#define XOR_AX_TO_PTR_RSI xor word ptr [rsi], ax
#define XOR_AX_TO_PTR_RBP xor word ptr [rbp], ax
#define XOR_AX_TO_PTR_RSP xor word ptr [rsp], ax
#define XOR_AX_TO_PTR_R8 xor word ptr [r8], ax
#define XOR_AX_TO_PTR_R9 xor word ptr [r9], ax
#define XOR_AX_TO_PTR_R10 xor word ptr [r10], ax
#define XOR_AX_TO_PTR_R11 xor word ptr [r11], ax
#define XOR_AX_TO_PTR_R12 xor word ptr [r12], ax
#define XOR_AX_TO_PTR_R13 xor word ptr [r13], ax
#define XOR_AX_TO_PTR_R14 xor word ptr [r14], ax
#define XOR_AX_TO_PTR_R15 xor word ptr [r15], ax
#define XOR_AX_TO_PTR_EAX xor word ptr [eax], ax
#define XOR_AX_TO_PTR_EBX xor word ptr [ebx], ax
#define XOR_AX_TO_PTR_ECX xor word ptr [ecx], ax
#define XOR_AX_TO_PTR_EDX xor word ptr [edx], ax
#define XOR_AX_TO_PTR_EDI xor word ptr [edi], ax
#define XOR_AX_TO_PTR_ESI xor word ptr [esi], ax
#define XOR_AX_TO_PTR_EBP xor word ptr [ebp], ax
#define XOR_AX_TO_PTR_ESP xor word ptr [esp], ax

#define XOR_BX_TO_PTR_RAX xor word ptr [rax], bx
#define XOR_BX_TO_PTR_RBX xor word ptr [rbx], bx
#define XOR_BX_TO_PTR_RCX xor word ptr [rcx], bx
#define XOR_BX_TO_PTR_RDX xor word ptr [rdx], bx
#define XOR_BX_TO_PTR_RDI xor word ptr [rdi], bx
#define XOR_BX_TO_PTR_RSI xor word ptr [rsi], bx
#define XOR_BX_TO_PTR_RBP xor word ptr [rbp], bx
#define XOR_BX_TO_PTR_RSP xor word ptr [rsp], bx
#define XOR_BX_TO_PTR_R8 xor word ptr [r8], bx
#define XOR_BX_TO_PTR_R9 xor word ptr [r9], bx
#define XOR_BX_TO_PTR_R10 xor word ptr [r10], bx
#define XOR_BX_TO_PTR_R11 xor word ptr [r11], bx
#define XOR_BX_TO_PTR_R12 xor word ptr [r12], bx
#define XOR_BX_TO_PTR_R13 xor word ptr [r13], bx
#define XOR_BX_TO_PTR_R14 xor word ptr [r14], bx
#define XOR_BX_TO_PTR_R15 xor word ptr [r15], bx
#define XOR_BX_TO_PTR_EAX xor word ptr [eax], bx
#define XOR_BX_TO_PTR_EBX xor word ptr [ebx], bx
#define XOR_BX_TO_PTR_ECX xor word ptr [ecx], bx
#define XOR_BX_TO_PTR_EDX xor word ptr [edx], bx
#define XOR_BX_TO_PTR_EDI xor word ptr [edi], bx
#define XOR_BX_TO_PTR_ESI xor word ptr [esi], bx
#define XOR_BX_TO_PTR_EBP xor word ptr [ebp], bx
#define XOR_BX_TO_PTR_ESP xor word ptr [esp], bx

#define XOR_CX_TO_PTR_RAX xor word ptr [rax], cx
#define XOR_CX_TO_PTR_RBX xor word ptr [rbx], cx
#define XOR_CX_TO_PTR_RCX xor word ptr [rcx], cx
#define XOR_CX_TO_PTR_RDX xor word ptr [rdx], cx
#define XOR_CX_TO_PTR_RDI xor word ptr [rdi], cx
#define XOR_CX_TO_PTR_RSI xor word ptr [rsi], cx
#define XOR_CX_TO_PTR_RBP xor word ptr [rbp], cx
#define XOR_CX_TO_PTR_RSP xor word ptr [rsp], cx
#define XOR_CX_TO_PTR_R8 xor word ptr [r8], cx
#define XOR_CX_TO_PTR_R9 xor word ptr [r9], cx
#define XOR_CX_TO_PTR_R10 xor word ptr [r10], cx
#define XOR_CX_TO_PTR_R11 xor word ptr [r11], cx
#define XOR_CX_TO_PTR_R12 xor word ptr [r12], cx
#define XOR_CX_TO_PTR_R13 xor word ptr [r13], cx
#define XOR_CX_TO_PTR_R14 xor word ptr [r14], cx
#define XOR_CX_TO_PTR_R15 xor word ptr [r15], cx
#define XOR_CX_TO_PTR_EAX xor word ptr [eax], cx
#define XOR_CX_TO_PTR_EBX xor word ptr [ebx], cx
#define XOR_CX_TO_PTR_ECX xor word ptr [ecx], cx
#define XOR_CX_TO_PTR_EDX xor word ptr [edx], cx
#define XOR_CX_TO_PTR_EDI xor word ptr [edi], cx
#define XOR_CX_TO_PTR_ESI xor word ptr [esi], cx
#define XOR_CX_TO_PTR_EBP xor word ptr [ebp], cx
#define XOR_CX_TO_PTR_ESP xor word ptr [esp], cx

#define XOR_DX_TO_PTR_RAX xor word ptr [rax], dx
#define XOR_DX_TO_PTR_RBX xor word ptr [rbx], dx
#define XOR_DX_TO_PTR_RCX xor word ptr [rcx], dx
#define XOR_DX_TO_PTR_RDX xor word ptr [rdx], dx
#define XOR_DX_TO_PTR_RDI xor word ptr [rdi], dx
#define XOR_DX_TO_PTR_RSI xor word ptr [rsi], dx
#define XOR_DX_TO_PTR_RBP xor word ptr [rbp], dx
#define XOR_DX_TO_PTR_RSP xor word ptr [rsp], dx
#define XOR_DX_TO_PTR_R8 xor word ptr [r8], dx
#define XOR_DX_TO_PTR_R9 xor word ptr [r9], dx
#define XOR_DX_TO_PTR_R10 xor word ptr [r10], dx
#define XOR_DX_TO_PTR_R11 xor word ptr [r11], dx
#define XOR_DX_TO_PTR_R12 xor word ptr [r12], dx
#define XOR_DX_TO_PTR_R13 xor word ptr [r13], dx
#define XOR_DX_TO_PTR_R14 xor word ptr [r14], dx
#define XOR_DX_TO_PTR_R15 xor word ptr [r15], dx
#define XOR_DX_TO_PTR_EAX xor word ptr [eax], dx
#define XOR_DX_TO_PTR_EBX xor word ptr [ebx], dx
#define XOR_DX_TO_PTR_ECX xor word ptr [ecx], dx
#define XOR_DX_TO_PTR_EDX xor word ptr [edx], dx
#define XOR_DX_TO_PTR_EDI xor word ptr [edi], dx
#define XOR_DX_TO_PTR_ESI xor word ptr [esi], dx
#define XOR_DX_TO_PTR_EBP xor word ptr [ebp], dx
#define XOR_DX_TO_PTR_ESP xor word ptr [esp], dx

#define XOR_DI_TO_PTR_RAX xor word ptr [rax], di
#define XOR_DI_TO_PTR_RBX xor word ptr [rbx], di
#define XOR_DI_TO_PTR_RCX xor word ptr [rcx], di
#define XOR_DI_TO_PTR_RDX xor word ptr [rdx], di
#define XOR_DI_TO_PTR_RDI xor word ptr [rdi], di
#define XOR_DI_TO_PTR_RSI xor word ptr [rsi], di
#define XOR_DI_TO_PTR_RBP xor word ptr [rbp], di
#define XOR_DI_TO_PTR_RSP xor word ptr [rsp], di
#define XOR_DI_TO_PTR_R8 xor word ptr [r8], di
#define XOR_DI_TO_PTR_R9 xor word ptr [r9], di
#define XOR_DI_TO_PTR_R10 xor word ptr [r10], di
#define XOR_DI_TO_PTR_R11 xor word ptr [r11], di
#define XOR_DI_TO_PTR_R12 xor word ptr [r12], di
#define XOR_DI_TO_PTR_R13 xor word ptr [r13], di
#define XOR_DI_TO_PTR_R14 xor word ptr [r14], di
#define XOR_DI_TO_PTR_R15 xor word ptr [r15], di
#define XOR_DI_TO_PTR_EAX xor word ptr [eax], di
#define XOR_DI_TO_PTR_EBX xor word ptr [ebx], di
#define XOR_DI_TO_PTR_ECX xor word ptr [ecx], di
#define XOR_DI_TO_PTR_EDX xor word ptr [edx], di
#define XOR_DI_TO_PTR_EDI xor word ptr [edi], di
#define XOR_DI_TO_PTR_ESI xor word ptr [esi], di
#define XOR_DI_TO_PTR_EBP xor word ptr [ebp], di
#define XOR_DI_TO_PTR_ESP xor word ptr [esp], di

#define XOR_SI_TO_PTR_RAX xor word ptr [rax], si
#define XOR_SI_TO_PTR_RBX xor word ptr [rbx], si
#define XOR_SI_TO_PTR_RCX xor word ptr [rcx], si
#define XOR_SI_TO_PTR_RDX xor word ptr [rdx], si
#define XOR_SI_TO_PTR_RDI xor word ptr [rdi], si
#define XOR_SI_TO_PTR_RSI xor word ptr [rsi], si
#define XOR_SI_TO_PTR_RBP xor word ptr [rbp], si
#define XOR_SI_TO_PTR_RSP xor word ptr [rsp], si
#define XOR_SI_TO_PTR_R8 xor word ptr [r8], si
#define XOR_SI_TO_PTR_R9 xor word ptr [r9], si
#define XOR_SI_TO_PTR_R10 xor word ptr [r10], si
#define XOR_SI_TO_PTR_R11 xor word ptr [r11], si
#define XOR_SI_TO_PTR_R12 xor word ptr [r12], si
#define XOR_SI_TO_PTR_R13 xor word ptr [r13], si
#define XOR_SI_TO_PTR_R14 xor word ptr [r14], si
#define XOR_SI_TO_PTR_R15 xor word ptr [r15], si
#define XOR_SI_TO_PTR_EAX xor word ptr [eax], si
#define XOR_SI_TO_PTR_EBX xor word ptr [ebx], si
#define XOR_SI_TO_PTR_ECX xor word ptr [ecx], si
#define XOR_SI_TO_PTR_EDX xor word ptr [edx], si
#define XOR_SI_TO_PTR_EDI xor word ptr [edi], si
#define XOR_SI_TO_PTR_ESI xor word ptr [esi], si
#define XOR_SI_TO_PTR_EBP xor word ptr [ebp], si
#define XOR_SI_TO_PTR_ESP xor word ptr [esp], si

#define XOR_BP_TO_PTR_RAX xor word ptr [rax], bp
#define XOR_BP_TO_PTR_RBX xor word ptr [rbx], bp
#define XOR_BP_TO_PTR_RCX xor word ptr [rcx], bp
#define XOR_BP_TO_PTR_RDX xor word ptr [rdx], bp
#define XOR_BP_TO_PTR_RDI xor word ptr [rdi], bp
#define XOR_BP_TO_PTR_RSI xor word ptr [rsi], bp
#define XOR_BP_TO_PTR_RBP xor word ptr [rbp], bp
#define XOR_BP_TO_PTR_RSP xor word ptr [rsp], bp
#define XOR_BP_TO_PTR_R8 xor word ptr [r8], bp
#define XOR_BP_TO_PTR_R9 xor word ptr [r9], bp
#define XOR_BP_TO_PTR_R10 xor word ptr [r10], bp
#define XOR_BP_TO_PTR_R11 xor word ptr [r11], bp
#define XOR_BP_TO_PTR_R12 xor word ptr [r12], bp
#define XOR_BP_TO_PTR_R13 xor word ptr [r13], bp
#define XOR_BP_TO_PTR_R14 xor word ptr [r14], bp
#define XOR_BP_TO_PTR_R15 xor word ptr [r15], bp
#define XOR_BP_TO_PTR_EAX xor word ptr [eax], bp
#define XOR_BP_TO_PTR_EBX xor word ptr [ebx], bp
#define XOR_BP_TO_PTR_ECX xor word ptr [ecx], bp
#define XOR_BP_TO_PTR_EDX xor word ptr [edx], bp
#define XOR_BP_TO_PTR_EDI xor word ptr [edi], bp
#define XOR_BP_TO_PTR_ESI xor word ptr [esi], bp
#define XOR_BP_TO_PTR_EBP xor word ptr [ebp], bp
#define XOR_BP_TO_PTR_ESP xor word ptr [esp], bp

#define XOR_SP_TO_PTR_RAX xor word ptr [rax], sp
#define XOR_SP_TO_PTR_RBX xor word ptr [rbx], sp
#define XOR_SP_TO_PTR_RCX xor word ptr [rcx], sp
#define XOR_SP_TO_PTR_RDX xor word ptr [rdx], sp
#define XOR_SP_TO_PTR_RDI xor word ptr [rdi], sp
#define XOR_SP_TO_PTR_RSI xor word ptr [rsi], sp
#define XOR_SP_TO_PTR_RBP xor word ptr [rbp], sp
#define XOR_SP_TO_PTR_RSP xor word ptr [rsp], sp
#define XOR_SP_TO_PTR_R8 xor word ptr [r8], sp
#define XOR_SP_TO_PTR_R9 xor word ptr [r9], sp
#define XOR_SP_TO_PTR_R10 xor word ptr [r10], sp
#define XOR_SP_TO_PTR_R11 xor word ptr [r11], sp
#define XOR_SP_TO_PTR_R12 xor word ptr [r12], sp
#define XOR_SP_TO_PTR_R13 xor word ptr [r13], sp
#define XOR_SP_TO_PTR_R14 xor word ptr [r14], sp
#define XOR_SP_TO_PTR_R15 xor word ptr [r15], sp
#define XOR_SP_TO_PTR_EAX xor word ptr [eax], sp
#define XOR_SP_TO_PTR_EBX xor word ptr [ebx], sp
#define XOR_SP_TO_PTR_ECX xor word ptr [ecx], sp
#define XOR_SP_TO_PTR_EDX xor word ptr [edx], sp
#define XOR_SP_TO_PTR_EDI xor word ptr [edi], sp
#define XOR_SP_TO_PTR_ESI xor word ptr [esi], sp
#define XOR_SP_TO_PTR_EBP xor word ptr [ebp], sp
#define XOR_SP_TO_PTR_ESP xor word ptr [esp], sp

#define XOR_R8W_TO_PTR_RAX xor word ptr [rax], r8w
#define XOR_R8W_TO_PTR_RBX xor word ptr [rbx], r8w
#define XOR_R8W_TO_PTR_RCX xor word ptr [rcx], r8w
#define XOR_R8W_TO_PTR_RDX xor word ptr [rdx], r8w
#define XOR_R8W_TO_PTR_RDI xor word ptr [rdi], r8w
#define XOR_R8W_TO_PTR_RSI xor word ptr [rsi], r8w
#define XOR_R8W_TO_PTR_RBP xor word ptr [rbp], r8w
#define XOR_R8W_TO_PTR_RSP xor word ptr [rsp], r8w
#define XOR_R8W_TO_PTR_R8 xor word ptr [r8], r8w
#define XOR_R8W_TO_PTR_R9 xor word ptr [r9], r8w
#define XOR_R8W_TO_PTR_R10 xor word ptr [r10], r8w
#define XOR_R8W_TO_PTR_R11 xor word ptr [r11], r8w
#define XOR_R8W_TO_PTR_R12 xor word ptr [r12], r8w
#define XOR_R8W_TO_PTR_R13 xor word ptr [r13], r8w
#define XOR_R8W_TO_PTR_R14 xor word ptr [r14], r8w
#define XOR_R8W_TO_PTR_R15 xor word ptr [r15], r8w
#define XOR_R8W_TO_PTR_EAX xor word ptr [eax], r8w
#define XOR_R8W_TO_PTR_EBX xor word ptr [ebx], r8w
#define XOR_R8W_TO_PTR_ECX xor word ptr [ecx], r8w
#define XOR_R8W_TO_PTR_EDX xor word ptr [edx], r8w
#define XOR_R8W_TO_PTR_EDI xor word ptr [edi], r8w
#define XOR_R8W_TO_PTR_ESI xor word ptr [esi], r8w
#define XOR_R8W_TO_PTR_EBP xor word ptr [ebp], r8w
#define XOR_R8W_TO_PTR_ESP xor word ptr [esp], r8w

#define XOR_R9W_TO_PTR_RAX xor word ptr [rax], r9w
#define XOR_R9W_TO_PTR_RBX xor word ptr [rbx], r9w
#define XOR_R9W_TO_PTR_RCX xor word ptr [rcx], r9w
#define XOR_R9W_TO_PTR_RDX xor word ptr [rdx], r9w
#define XOR_R9W_TO_PTR_RDI xor word ptr [rdi], r9w
#define XOR_R9W_TO_PTR_RSI xor word ptr [rsi], r9w
#define XOR_R9W_TO_PTR_RBP xor word ptr [rbp], r9w
#define XOR_R9W_TO_PTR_RSP xor word ptr [rsp], r9w
#define XOR_R9W_TO_PTR_R8 xor word ptr [r8], r9w
#define XOR_R9W_TO_PTR_R9 xor word ptr [r9], r9w
#define XOR_R9W_TO_PTR_R10 xor word ptr [r10], r9w
#define XOR_R9W_TO_PTR_R11 xor word ptr [r11], r9w
#define XOR_R9W_TO_PTR_R12 xor word ptr [r12], r9w
#define XOR_R9W_TO_PTR_R13 xor word ptr [r13], r9w
#define XOR_R9W_TO_PTR_R14 xor word ptr [r14], r9w
#define XOR_R9W_TO_PTR_R15 xor word ptr [r15], r9w
#define XOR_R9W_TO_PTR_EAX xor word ptr [eax], r9w
#define XOR_R9W_TO_PTR_EBX xor word ptr [ebx], r9w
#define XOR_R9W_TO_PTR_ECX xor word ptr [ecx], r9w
#define XOR_R9W_TO_PTR_EDX xor word ptr [edx], r9w
#define XOR_R9W_TO_PTR_EDI xor word ptr [edi], r9w
#define XOR_R9W_TO_PTR_ESI xor word ptr [esi], r9w
#define XOR_R9W_TO_PTR_EBP xor word ptr [ebp], r9w
#define XOR_R9W_TO_PTR_ESP xor word ptr [esp], r9w

#define XOR_R10W_TO_PTR_RAX xor word ptr [rax], r10w
#define XOR_R10W_TO_PTR_RBX xor word ptr [rbx], r10w
#define XOR_R10W_TO_PTR_RCX xor word ptr [rcx], r10w
#define XOR_R10W_TO_PTR_RDX xor word ptr [rdx], r10w
#define XOR_R10W_TO_PTR_RDI xor word ptr [rdi], r10w
#define XOR_R10W_TO_PTR_RSI xor word ptr [rsi], r10w
#define XOR_R10W_TO_PTR_RBP xor word ptr [rbp], r10w
#define XOR_R10W_TO_PTR_RSP xor word ptr [rsp], r10w
#define XOR_R10W_TO_PTR_R8 xor word ptr [r8], r10w
#define XOR_R10W_TO_PTR_R9 xor word ptr [r9], r10w
#define XOR_R10W_TO_PTR_R10 xor word ptr [r10], r10w
#define XOR_R10W_TO_PTR_R11 xor word ptr [r11], r10w
#define XOR_R10W_TO_PTR_R12 xor word ptr [r12], r10w
#define XOR_R10W_TO_PTR_R13 xor word ptr [r13], r10w
#define XOR_R10W_TO_PTR_R14 xor word ptr [r14], r10w
#define XOR_R10W_TO_PTR_R15 xor word ptr [r15], r10w
#define XOR_R10W_TO_PTR_EAX xor word ptr [eax], r10w
#define XOR_R10W_TO_PTR_EBX xor word ptr [ebx], r10w
#define XOR_R10W_TO_PTR_ECX xor word ptr [ecx], r10w
#define XOR_R10W_TO_PTR_EDX xor word ptr [edx], r10w
#define XOR_R10W_TO_PTR_EDI xor word ptr [edi], r10w
#define XOR_R10W_TO_PTR_ESI xor word ptr [esi], r10w
#define XOR_R10W_TO_PTR_EBP xor word ptr [ebp], r10w
#define XOR_R10W_TO_PTR_ESP xor word ptr [esp], r10w

#define XOR_R11W_TO_PTR_RAX xor word ptr [rax], r11w
#define XOR_R11W_TO_PTR_RBX xor word ptr [rbx], r11w
#define XOR_R11W_TO_PTR_RCX xor word ptr [rcx], r11w
#define XOR_R11W_TO_PTR_RDX xor word ptr [rdx], r11w
#define XOR_R11W_TO_PTR_RDI xor word ptr [rdi], r11w
#define XOR_R11W_TO_PTR_RSI xor word ptr [rsi], r11w
#define XOR_R11W_TO_PTR_RBP xor word ptr [rbp], r11w
#define XOR_R11W_TO_PTR_RSP xor word ptr [rsp], r11w
#define XOR_R11W_TO_PTR_R8 xor word ptr [r8], r11w
#define XOR_R11W_TO_PTR_R9 xor word ptr [r9], r11w
#define XOR_R11W_TO_PTR_R10 xor word ptr [r10], r11w
#define XOR_R11W_TO_PTR_R11 xor word ptr [r11], r11w
#define XOR_R11W_TO_PTR_R12 xor word ptr [r12], r11w
#define XOR_R11W_TO_PTR_R13 xor word ptr [r13], r11w
#define XOR_R11W_TO_PTR_R14 xor word ptr [r14], r11w
#define XOR_R11W_TO_PTR_R15 xor word ptr [r15], r11w
#define XOR_R11W_TO_PTR_EAX xor word ptr [eax], r11w
#define XOR_R11W_TO_PTR_EBX xor word ptr [ebx], r11w
#define XOR_R11W_TO_PTR_ECX xor word ptr [ecx], r11w
#define XOR_R11W_TO_PTR_EDX xor word ptr [edx], r11w
#define XOR_R11W_TO_PTR_EDI xor word ptr [edi], r11w
#define XOR_R11W_TO_PTR_ESI xor word ptr [esi], r11w
#define XOR_R11W_TO_PTR_EBP xor word ptr [ebp], r11w
#define XOR_R11W_TO_PTR_ESP xor word ptr [esp], r11w

#define XOR_R12W_TO_PTR_RAX xor word ptr [rax], r12w
#define XOR_R12W_TO_PTR_RBX xor word ptr [rbx], r12w
#define XOR_R12W_TO_PTR_RCX xor word ptr [rcx], r12w
#define XOR_R12W_TO_PTR_RDX xor word ptr [rdx], r12w
#define XOR_R12W_TO_PTR_RDI xor word ptr [rdi], r12w
#define XOR_R12W_TO_PTR_RSI xor word ptr [rsi], r12w
#define XOR_R12W_TO_PTR_RBP xor word ptr [rbp], r12w
#define XOR_R12W_TO_PTR_RSP xor word ptr [rsp], r12w
#define XOR_R12W_TO_PTR_R8 xor word ptr [r8], r12w
#define XOR_R12W_TO_PTR_R9 xor word ptr [r9], r12w
#define XOR_R12W_TO_PTR_R10 xor word ptr [r10], r12w
#define XOR_R12W_TO_PTR_R11 xor word ptr [r11], r12w
#define XOR_R12W_TO_PTR_R12 xor word ptr [r12], r12w
#define XOR_R12W_TO_PTR_R13 xor word ptr [r13], r12w
#define XOR_R12W_TO_PTR_R14 xor word ptr [r14], r12w
#define XOR_R12W_TO_PTR_R15 xor word ptr [r15], r12w
#define XOR_R12W_TO_PTR_EAX xor word ptr [eax], r12w
#define XOR_R12W_TO_PTR_EBX xor word ptr [ebx], r12w
#define XOR_R12W_TO_PTR_ECX xor word ptr [ecx], r12w
#define XOR_R12W_TO_PTR_EDX xor word ptr [edx], r12w
#define XOR_R12W_TO_PTR_EDI xor word ptr [edi], r12w
#define XOR_R12W_TO_PTR_ESI xor word ptr [esi], r12w
#define XOR_R12W_TO_PTR_EBP xor word ptr [ebp], r12w
#define XOR_R12W_TO_PTR_ESP xor word ptr [esp], r12w

#define XOR_R13W_TO_PTR_RAX xor word ptr [rax], r13w
#define XOR_R13W_TO_PTR_RBX xor word ptr [rbx], r13w
#define XOR_R13W_TO_PTR_RCX xor word ptr [rcx], r13w
#define XOR_R13W_TO_PTR_RDX xor word ptr [rdx], r13w
#define XOR_R13W_TO_PTR_RDI xor word ptr [rdi], r13w
#define XOR_R13W_TO_PTR_RSI xor word ptr [rsi], r13w
#define XOR_R13W_TO_PTR_RBP xor word ptr [rbp], r13w
#define XOR_R13W_TO_PTR_RSP xor word ptr [rsp], r13w
#define XOR_R13W_TO_PTR_R8 xor word ptr [r8], r13w
#define XOR_R13W_TO_PTR_R9 xor word ptr [r9], r13w
#define XOR_R13W_TO_PTR_R10 xor word ptr [r10], r13w
#define XOR_R13W_TO_PTR_R11 xor word ptr [r11], r13w
#define XOR_R13W_TO_PTR_R12 xor word ptr [r12], r13w
#define XOR_R13W_TO_PTR_R13 xor word ptr [r13], r13w
#define XOR_R13W_TO_PTR_R14 xor word ptr [r14], r13w
#define XOR_R13W_TO_PTR_R15 xor word ptr [r15], r13w
#define XOR_R13W_TO_PTR_EAX xor word ptr [eax], r13w
#define XOR_R13W_TO_PTR_EBX xor word ptr [ebx], r13w
#define XOR_R13W_TO_PTR_ECX xor word ptr [ecx], r13w
#define XOR_R13W_TO_PTR_EDX xor word ptr [edx], r13w
#define XOR_R13W_TO_PTR_EDI xor word ptr [edi], r13w
#define XOR_R13W_TO_PTR_ESI xor word ptr [esi], r13w
#define XOR_R13W_TO_PTR_EBP xor word ptr [ebp], r13w
#define XOR_R13W_TO_PTR_ESP xor word ptr [esp], r13w

#define XOR_R14W_TO_PTR_RAX xor word ptr [rax], r14w
#define XOR_R14W_TO_PTR_RBX xor word ptr [rbx], r14w
#define XOR_R14W_TO_PTR_RCX xor word ptr [rcx], r14w
#define XOR_R14W_TO_PTR_RDX xor word ptr [rdx], r14w
#define XOR_R14W_TO_PTR_RDI xor word ptr [rdi], r14w
#define XOR_R14W_TO_PTR_RSI xor word ptr [rsi], r14w
#define XOR_R14W_TO_PTR_RBP xor word ptr [rbp], r14w
#define XOR_R14W_TO_PTR_RSP xor word ptr [rsp], r14w
#define XOR_R14W_TO_PTR_R8 xor word ptr [r8], r14w
#define XOR_R14W_TO_PTR_R9 xor word ptr [r9], r14w
#define XOR_R14W_TO_PTR_R10 xor word ptr [r10], r14w
#define XOR_R14W_TO_PTR_R11 xor word ptr [r11], r14w
#define XOR_R14W_TO_PTR_R12 xor word ptr [r12], r14w
#define XOR_R14W_TO_PTR_R13 xor word ptr [r13], r14w
#define XOR_R14W_TO_PTR_R14 xor word ptr [r14], r14w
#define XOR_R14W_TO_PTR_R15 xor word ptr [r15], r14w
#define XOR_R14W_TO_PTR_EAX xor word ptr [eax], r14w
#define XOR_R14W_TO_PTR_EBX xor word ptr [ebx], r14w
#define XOR_R14W_TO_PTR_ECX xor word ptr [ecx], r14w
#define XOR_R14W_TO_PTR_EDX xor word ptr [edx], r14w
#define XOR_R14W_TO_PTR_EDI xor word ptr [edi], r14w
#define XOR_R14W_TO_PTR_ESI xor word ptr [esi], r14w
#define XOR_R14W_TO_PTR_EBP xor word ptr [ebp], r14w
#define XOR_R14W_TO_PTR_ESP xor word ptr [esp], r14w

#define XOR_R15W_TO_PTR_RAX xor word ptr [rax], r15w
#define XOR_R15W_TO_PTR_RBX xor word ptr [rbx], r15w
#define XOR_R15W_TO_PTR_RCX xor word ptr [rcx], r15w
#define XOR_R15W_TO_PTR_RDX xor word ptr [rdx], r15w
#define XOR_R15W_TO_PTR_RDI xor word ptr [rdi], r15w
#define XOR_R15W_TO_PTR_RSI xor word ptr [rsi], r15w
#define XOR_R15W_TO_PTR_RBP xor word ptr [rbp], r15w
#define XOR_R15W_TO_PTR_RSP xor word ptr [rsp], r15w
#define XOR_R15W_TO_PTR_R8 xor word ptr [r8], r15w
#define XOR_R15W_TO_PTR_R9 xor word ptr [r9], r15w
#define XOR_R15W_TO_PTR_R10 xor word ptr [r10], r15w
#define XOR_R15W_TO_PTR_R11 xor word ptr [r11], r15w
#define XOR_R15W_TO_PTR_R12 xor word ptr [r12], r15w
#define XOR_R15W_TO_PTR_R13 xor word ptr [r13], r15w
#define XOR_R15W_TO_PTR_R14 xor word ptr [r14], r15w
#define XOR_R15W_TO_PTR_R15 xor word ptr [r15], r15w
#define XOR_R15W_TO_PTR_EAX xor word ptr [eax], r15w
#define XOR_R15W_TO_PTR_EBX xor word ptr [ebx], r15w
#define XOR_R15W_TO_PTR_ECX xor word ptr [ecx], r15w
#define XOR_R15W_TO_PTR_EDX xor word ptr [edx], r15w
#define XOR_R15W_TO_PTR_EDI xor word ptr [edi], r15w
#define XOR_R15W_TO_PTR_ESI xor word ptr [esi], r15w
#define XOR_R15W_TO_PTR_EBP xor word ptr [ebp], r15w
#define XOR_R15W_TO_PTR_ESP xor word ptr [esp], r15w

#define XOR_AX_FROM_PTR_RAX_(VALUE) xor ax, word ptr [rax + VALUE]
#define XOR_AX_FROM_PTR_RBX_(VALUE) xor ax, word ptr [rbx + VALUE]
#define XOR_AX_FROM_PTR_RCX_(VALUE) xor ax, word ptr [rcx + VALUE]
#define XOR_AX_FROM_PTR_RDX_(VALUE) xor ax, word ptr [rdx + VALUE]
#define XOR_AX_FROM_PTR_RDI_(VALUE) xor ax, word ptr [rdi + VALUE]
#define XOR_AX_FROM_PTR_RSI_(VALUE) xor ax, word ptr [rsi + VALUE]
#define XOR_AX_FROM_PTR_RBP_(VALUE) xor ax, word ptr [rbp + VALUE]
#define XOR_AX_FROM_PTR_RSP_(VALUE) xor ax, word ptr [rsp + VALUE]
#define XOR_AX_FROM_PTR_R8_(VALUE) xor ax, word ptr [r8 + VALUE]
#define XOR_AX_FROM_PTR_R9_(VALUE) xor ax, word ptr [r9 + VALUE]
#define XOR_AX_FROM_PTR_R10_(VALUE) xor ax, word ptr [r10 + VALUE]
#define XOR_AX_FROM_PTR_R11_(VALUE) xor ax, word ptr [r11 + VALUE]
#define XOR_AX_FROM_PTR_R12_(VALUE) xor ax, word ptr [r12 + VALUE]
#define XOR_AX_FROM_PTR_R13_(VALUE) xor ax, word ptr [r13 + VALUE]
#define XOR_AX_FROM_PTR_R14_(VALUE) xor ax, word ptr [r14 + VALUE]
#define XOR_AX_FROM_PTR_R15_(VALUE) xor ax, word ptr [r15 + VALUE]
#define XOR_AX_FROM_PTR_EAX_(VALUE) xor ax, word ptr [eax + VALUE]
#define XOR_AX_FROM_PTR_EBX_(VALUE) xor ax, word ptr [ebx + VALUE]
#define XOR_AX_FROM_PTR_ECX_(VALUE) xor ax, word ptr [ecx + VALUE]
#define XOR_AX_FROM_PTR_EDX_(VALUE) xor ax, word ptr [edx + VALUE]
#define XOR_AX_FROM_PTR_EDI_(VALUE) xor ax, word ptr [edi + VALUE]
#define XOR_AX_FROM_PTR_ESI_(VALUE) xor ax, word ptr [esi + VALUE]
#define XOR_AX_FROM_PTR_EBP_(VALUE) xor ax, word ptr [ebp + VALUE]
#define XOR_AX_FROM_PTR_ESP_(VALUE) xor ax, word ptr [esp + VALUE]

#define XOR_BX_FROM_PTR_RAX_(VALUE) xor bx, word ptr [rax + VALUE]
#define XOR_BX_FROM_PTR_RBX_(VALUE) xor bx, word ptr [rbx + VALUE]
#define XOR_BX_FROM_PTR_RCX_(VALUE) xor bx, word ptr [rcx + VALUE]
#define XOR_BX_FROM_PTR_RDX_(VALUE) xor bx, word ptr [rdx + VALUE]
#define XOR_BX_FROM_PTR_RDI_(VALUE) xor bx, word ptr [rdi + VALUE]
#define XOR_BX_FROM_PTR_RSI_(VALUE) xor bx, word ptr [rsi + VALUE]
#define XOR_BX_FROM_PTR_RBP_(VALUE) xor bx, word ptr [rbp + VALUE]
#define XOR_BX_FROM_PTR_RSP_(VALUE) xor bx, word ptr [rsp + VALUE]
#define XOR_BX_FROM_PTR_R8_(VALUE) xor bx, word ptr [r8 + VALUE]
#define XOR_BX_FROM_PTR_R9_(VALUE) xor bx, word ptr [r9 + VALUE]
#define XOR_BX_FROM_PTR_R10_(VALUE) xor bx, word ptr [r10 + VALUE]
#define XOR_BX_FROM_PTR_R11_(VALUE) xor bx, word ptr [r11 + VALUE]
#define XOR_BX_FROM_PTR_R12_(VALUE) xor bx, word ptr [r12 + VALUE]
#define XOR_BX_FROM_PTR_R13_(VALUE) xor bx, word ptr [r13 + VALUE]
#define XOR_BX_FROM_PTR_R14_(VALUE) xor bx, word ptr [r14 + VALUE]
#define XOR_BX_FROM_PTR_R15_(VALUE) xor bx, word ptr [r15 + VALUE]
#define XOR_BX_FROM_PTR_EAX_(VALUE) xor bx, word ptr [eax + VALUE]
#define XOR_BX_FROM_PTR_EBX_(VALUE) xor bx, word ptr [ebx + VALUE]
#define XOR_BX_FROM_PTR_ECX_(VALUE) xor bx, word ptr [ecx + VALUE]
#define XOR_BX_FROM_PTR_EDX_(VALUE) xor bx, word ptr [edx + VALUE]
#define XOR_BX_FROM_PTR_EDI_(VALUE) xor bx, word ptr [edi + VALUE]
#define XOR_BX_FROM_PTR_ESI_(VALUE) xor bx, word ptr [esi + VALUE]
#define XOR_BX_FROM_PTR_EBP_(VALUE) xor bx, word ptr [ebp + VALUE]
#define XOR_BX_FROM_PTR_ESP_(VALUE) xor bx, word ptr [esp + VALUE]

#define XOR_CX_FROM_PTR_RAX_(VALUE) xor cx, word ptr [rax + VALUE]
#define XOR_CX_FROM_PTR_RBX_(VALUE) xor cx, word ptr [rbx + VALUE]
#define XOR_CX_FROM_PTR_RCX_(VALUE) xor cx, word ptr [rcx + VALUE]
#define XOR_CX_FROM_PTR_RDX_(VALUE) xor cx, word ptr [rdx + VALUE]
#define XOR_CX_FROM_PTR_RDI_(VALUE) xor cx, word ptr [rdi + VALUE]
#define XOR_CX_FROM_PTR_RSI_(VALUE) xor cx, word ptr [rsi + VALUE]
#define XOR_CX_FROM_PTR_RBP_(VALUE) xor cx, word ptr [rbp + VALUE]
#define XOR_CX_FROM_PTR_RSP_(VALUE) xor cx, word ptr [rsp + VALUE]
#define XOR_CX_FROM_PTR_R8_(VALUE) xor cx, word ptr [r8 + VALUE]
#define XOR_CX_FROM_PTR_R9_(VALUE) xor cx, word ptr [r9 + VALUE]
#define XOR_CX_FROM_PTR_R10_(VALUE) xor cx, word ptr [r10 + VALUE]
#define XOR_CX_FROM_PTR_R11_(VALUE) xor cx, word ptr [r11 + VALUE]
#define XOR_CX_FROM_PTR_R12_(VALUE) xor cx, word ptr [r12 + VALUE]
#define XOR_CX_FROM_PTR_R13_(VALUE) xor cx, word ptr [r13 + VALUE]
#define XOR_CX_FROM_PTR_R14_(VALUE) xor cx, word ptr [r14 + VALUE]
#define XOR_CX_FROM_PTR_R15_(VALUE) xor cx, word ptr [r15 + VALUE]
#define XOR_CX_FROM_PTR_EAX_(VALUE) xor cx, word ptr [eax + VALUE]
#define XOR_CX_FROM_PTR_EBX_(VALUE) xor cx, word ptr [ebx + VALUE]
#define XOR_CX_FROM_PTR_ECX_(VALUE) xor cx, word ptr [ecx + VALUE]
#define XOR_CX_FROM_PTR_EDX_(VALUE) xor cx, word ptr [edx + VALUE]
#define XOR_CX_FROM_PTR_EDI_(VALUE) xor cx, word ptr [edi + VALUE]
#define XOR_CX_FROM_PTR_ESI_(VALUE) xor cx, word ptr [esi + VALUE]
#define XOR_CX_FROM_PTR_EBP_(VALUE) xor cx, word ptr [ebp + VALUE]
#define XOR_CX_FROM_PTR_ESP_(VALUE) xor cx, word ptr [esp + VALUE]

#define XOR_DX_FROM_PTR_RAX_(VALUE) xor dx, word ptr [rax + VALUE]
#define XOR_DX_FROM_PTR_RBX_(VALUE) xor dx, word ptr [rbx + VALUE]
#define XOR_DX_FROM_PTR_RCX_(VALUE) xor dx, word ptr [rcx + VALUE]
#define XOR_DX_FROM_PTR_RDX_(VALUE) xor dx, word ptr [rdx + VALUE]
#define XOR_DX_FROM_PTR_RDI_(VALUE) xor dx, word ptr [rdi + VALUE]
#define XOR_DX_FROM_PTR_RSI_(VALUE) xor dx, word ptr [rsi + VALUE]
#define XOR_DX_FROM_PTR_RBP_(VALUE) xor dx, word ptr [rbp + VALUE]
#define XOR_DX_FROM_PTR_RSP_(VALUE) xor dx, word ptr [rsp + VALUE]
#define XOR_DX_FROM_PTR_R8_(VALUE) xor dx, word ptr [r8 + VALUE]
#define XOR_DX_FROM_PTR_R9_(VALUE) xor dx, word ptr [r9 + VALUE]
#define XOR_DX_FROM_PTR_R10_(VALUE) xor dx, word ptr [r10 + VALUE]
#define XOR_DX_FROM_PTR_R11_(VALUE) xor dx, word ptr [r11 + VALUE]
#define XOR_DX_FROM_PTR_R12_(VALUE) xor dx, word ptr [r12 + VALUE]
#define XOR_DX_FROM_PTR_R13_(VALUE) xor dx, word ptr [r13 + VALUE]
#define XOR_DX_FROM_PTR_R14_(VALUE) xor dx, word ptr [r14 + VALUE]
#define XOR_DX_FROM_PTR_R15_(VALUE) xor dx, word ptr [r15 + VALUE]
#define XOR_DX_FROM_PTR_EAX_(VALUE) xor dx, word ptr [eax + VALUE]
#define XOR_DX_FROM_PTR_EBX_(VALUE) xor dx, word ptr [ebx + VALUE]
#define XOR_DX_FROM_PTR_ECX_(VALUE) xor dx, word ptr [ecx + VALUE]
#define XOR_DX_FROM_PTR_EDX_(VALUE) xor dx, word ptr [edx + VALUE]
#define XOR_DX_FROM_PTR_EDI_(VALUE) xor dx, word ptr [edi + VALUE]
#define XOR_DX_FROM_PTR_ESI_(VALUE) xor dx, word ptr [esi + VALUE]
#define XOR_DX_FROM_PTR_EBP_(VALUE) xor dx, word ptr [ebp + VALUE]
#define XOR_DX_FROM_PTR_ESP_(VALUE) xor dx, word ptr [esp + VALUE]

#define XOR_DI_FROM_PTR_RAX_(VALUE) xor di, word ptr [rax + VALUE]
#define XOR_DI_FROM_PTR_RBX_(VALUE) xor di, word ptr [rbx + VALUE]
#define XOR_DI_FROM_PTR_RCX_(VALUE) xor di, word ptr [rcx + VALUE]
#define XOR_DI_FROM_PTR_RDX_(VALUE) xor di, word ptr [rdx + VALUE]
#define XOR_DI_FROM_PTR_RDI_(VALUE) xor di, word ptr [rdi + VALUE]
#define XOR_DI_FROM_PTR_RSI_(VALUE) xor di, word ptr [rsi + VALUE]
#define XOR_DI_FROM_PTR_RBP_(VALUE) xor di, word ptr [rbp + VALUE]
#define XOR_DI_FROM_PTR_RSP_(VALUE) xor di, word ptr [rsp + VALUE]
#define XOR_DI_FROM_PTR_R8_(VALUE) xor di, word ptr [r8 + VALUE]
#define XOR_DI_FROM_PTR_R9_(VALUE) xor di, word ptr [r9 + VALUE]
#define XOR_DI_FROM_PTR_R10_(VALUE) xor di, word ptr [r10 + VALUE]
#define XOR_DI_FROM_PTR_R11_(VALUE) xor di, word ptr [r11 + VALUE]
#define XOR_DI_FROM_PTR_R12_(VALUE) xor di, word ptr [r12 + VALUE]
#define XOR_DI_FROM_PTR_R13_(VALUE) xor di, word ptr [r13 + VALUE]
#define XOR_DI_FROM_PTR_R14_(VALUE) xor di, word ptr [r14 + VALUE]
#define XOR_DI_FROM_PTR_R15_(VALUE) xor di, word ptr [r15 + VALUE]
#define XOR_DI_FROM_PTR_EAX_(VALUE) xor di, word ptr [eax + VALUE]
#define XOR_DI_FROM_PTR_EBX_(VALUE) xor di, word ptr [ebx + VALUE]
#define XOR_DI_FROM_PTR_ECX_(VALUE) xor di, word ptr [ecx + VALUE]
#define XOR_DI_FROM_PTR_EDX_(VALUE) xor di, word ptr [edx + VALUE]
#define XOR_DI_FROM_PTR_EDI_(VALUE) xor di, word ptr [edi + VALUE]
#define XOR_DI_FROM_PTR_ESI_(VALUE) xor di, word ptr [esi + VALUE]
#define XOR_DI_FROM_PTR_EBP_(VALUE) xor di, word ptr [ebp + VALUE]
#define XOR_DI_FROM_PTR_ESP_(VALUE) xor di, word ptr [esp + VALUE]

#define XOR_SI_FROM_PTR_RAX_(VALUE) xor si, word ptr [rax + VALUE]
#define XOR_SI_FROM_PTR_RBX_(VALUE) xor si, word ptr [rbx + VALUE]
#define XOR_SI_FROM_PTR_RCX_(VALUE) xor si, word ptr [rcx + VALUE]
#define XOR_SI_FROM_PTR_RDX_(VALUE) xor si, word ptr [rdx + VALUE]
#define XOR_SI_FROM_PTR_RDI_(VALUE) xor si, word ptr [rdi + VALUE]
#define XOR_SI_FROM_PTR_RSI_(VALUE) xor si, word ptr [rsi + VALUE]
#define XOR_SI_FROM_PTR_RBP_(VALUE) xor si, word ptr [rbp + VALUE]
#define XOR_SI_FROM_PTR_RSP_(VALUE) xor si, word ptr [rsp + VALUE]
#define XOR_SI_FROM_PTR_R8_(VALUE) xor si, word ptr [r8 + VALUE]
#define XOR_SI_FROM_PTR_R9_(VALUE) xor si, word ptr [r9 + VALUE]
#define XOR_SI_FROM_PTR_R10_(VALUE) xor si, word ptr [r10 + VALUE]
#define XOR_SI_FROM_PTR_R11_(VALUE) xor si, word ptr [r11 + VALUE]
#define XOR_SI_FROM_PTR_R12_(VALUE) xor si, word ptr [r12 + VALUE]
#define XOR_SI_FROM_PTR_R13_(VALUE) xor si, word ptr [r13 + VALUE]
#define XOR_SI_FROM_PTR_R14_(VALUE) xor si, word ptr [r14 + VALUE]
#define XOR_SI_FROM_PTR_R15_(VALUE) xor si, word ptr [r15 + VALUE]
#define XOR_SI_FROM_PTR_EAX_(VALUE) xor si, word ptr [eax + VALUE]
#define XOR_SI_FROM_PTR_EBX_(VALUE) xor si, word ptr [ebx + VALUE]
#define XOR_SI_FROM_PTR_ECX_(VALUE) xor si, word ptr [ecx + VALUE]
#define XOR_SI_FROM_PTR_EDX_(VALUE) xor si, word ptr [edx + VALUE]
#define XOR_SI_FROM_PTR_EDI_(VALUE) xor si, word ptr [edi + VALUE]
#define XOR_SI_FROM_PTR_ESI_(VALUE) xor si, word ptr [esi + VALUE]
#define XOR_SI_FROM_PTR_EBP_(VALUE) xor si, word ptr [ebp + VALUE]
#define XOR_SI_FROM_PTR_ESP_(VALUE) xor si, word ptr [esp + VALUE]

#define XOR_BP_FROM_PTR_RAX_(VALUE) xor bp, word ptr [rax + VALUE]
#define XOR_BP_FROM_PTR_RBX_(VALUE) xor bp, word ptr [rbx + VALUE]
#define XOR_BP_FROM_PTR_RCX_(VALUE) xor bp, word ptr [rcx + VALUE]
#define XOR_BP_FROM_PTR_RDX_(VALUE) xor bp, word ptr [rdx + VALUE]
#define XOR_BP_FROM_PTR_RDI_(VALUE) xor bp, word ptr [rdi + VALUE]
#define XOR_BP_FROM_PTR_RSI_(VALUE) xor bp, word ptr [rsi + VALUE]
#define XOR_BP_FROM_PTR_RBP_(VALUE) xor bp, word ptr [rbp + VALUE]
#define XOR_BP_FROM_PTR_RSP_(VALUE) xor bp, word ptr [rsp + VALUE]
#define XOR_BP_FROM_PTR_R8_(VALUE) xor bp, word ptr [r8 + VALUE]
#define XOR_BP_FROM_PTR_R9_(VALUE) xor bp, word ptr [r9 + VALUE]
#define XOR_BP_FROM_PTR_R10_(VALUE) xor bp, word ptr [r10 + VALUE]
#define XOR_BP_FROM_PTR_R11_(VALUE) xor bp, word ptr [r11 + VALUE]
#define XOR_BP_FROM_PTR_R12_(VALUE) xor bp, word ptr [r12 + VALUE]
#define XOR_BP_FROM_PTR_R13_(VALUE) xor bp, word ptr [r13 + VALUE]
#define XOR_BP_FROM_PTR_R14_(VALUE) xor bp, word ptr [r14 + VALUE]
#define XOR_BP_FROM_PTR_R15_(VALUE) xor bp, word ptr [r15 + VALUE]
#define XOR_BP_FROM_PTR_EAX_(VALUE) xor bp, word ptr [eax + VALUE]
#define XOR_BP_FROM_PTR_EBX_(VALUE) xor bp, word ptr [ebx + VALUE]
#define XOR_BP_FROM_PTR_ECX_(VALUE) xor bp, word ptr [ecx + VALUE]
#define XOR_BP_FROM_PTR_EDX_(VALUE) xor bp, word ptr [edx + VALUE]
#define XOR_BP_FROM_PTR_EDI_(VALUE) xor bp, word ptr [edi + VALUE]
#define XOR_BP_FROM_PTR_ESI_(VALUE) xor bp, word ptr [esi + VALUE]
#define XOR_BP_FROM_PTR_EBP_(VALUE) xor bp, word ptr [ebp + VALUE]
#define XOR_BP_FROM_PTR_ESP_(VALUE) xor bp, word ptr [esp + VALUE]

#define XOR_SP_FROM_PTR_RAX_(VALUE) xor sp, word ptr [rax + VALUE]
#define XOR_SP_FROM_PTR_RBX_(VALUE) xor sp, word ptr [rbx + VALUE]
#define XOR_SP_FROM_PTR_RCX_(VALUE) xor sp, word ptr [rcx + VALUE]
#define XOR_SP_FROM_PTR_RDX_(VALUE) xor sp, word ptr [rdx + VALUE]
#define XOR_SP_FROM_PTR_RDI_(VALUE) xor sp, word ptr [rdi + VALUE]
#define XOR_SP_FROM_PTR_RSI_(VALUE) xor sp, word ptr [rsi + VALUE]
#define XOR_SP_FROM_PTR_RBP_(VALUE) xor sp, word ptr [rbp + VALUE]
#define XOR_SP_FROM_PTR_RSP_(VALUE) xor sp, word ptr [rsp + VALUE]
#define XOR_SP_FROM_PTR_R8_(VALUE) xor sp, word ptr [r8 + VALUE]
#define XOR_SP_FROM_PTR_R9_(VALUE) xor sp, word ptr [r9 + VALUE]
#define XOR_SP_FROM_PTR_R10_(VALUE) xor sp, word ptr [r10 + VALUE]
#define XOR_SP_FROM_PTR_R11_(VALUE) xor sp, word ptr [r11 + VALUE]
#define XOR_SP_FROM_PTR_R12_(VALUE) xor sp, word ptr [r12 + VALUE]
#define XOR_SP_FROM_PTR_R13_(VALUE) xor sp, word ptr [r13 + VALUE]
#define XOR_SP_FROM_PTR_R14_(VALUE) xor sp, word ptr [r14 + VALUE]
#define XOR_SP_FROM_PTR_R15_(VALUE) xor sp, word ptr [r15 + VALUE]
#define XOR_SP_FROM_PTR_EAX_(VALUE) xor sp, word ptr [eax + VALUE]
#define XOR_SP_FROM_PTR_EBX_(VALUE) xor sp, word ptr [ebx + VALUE]
#define XOR_SP_FROM_PTR_ECX_(VALUE) xor sp, word ptr [ecx + VALUE]
#define XOR_SP_FROM_PTR_EDX_(VALUE) xor sp, word ptr [edx + VALUE]
#define XOR_SP_FROM_PTR_EDI_(VALUE) xor sp, word ptr [edi + VALUE]
#define XOR_SP_FROM_PTR_ESI_(VALUE) xor sp, word ptr [esi + VALUE]
#define XOR_SP_FROM_PTR_EBP_(VALUE) xor sp, word ptr [ebp + VALUE]
#define XOR_SP_FROM_PTR_ESP_(VALUE) xor sp, word ptr [esp + VALUE]

#define XOR_R8W_FROM_PTR_RAX_(VALUE) xor r8w, word ptr [rax + VALUE]
#define XOR_R8W_FROM_PTR_RBX_(VALUE) xor r8w, word ptr [rbx + VALUE]
#define XOR_R8W_FROM_PTR_RCX_(VALUE) xor r8w, word ptr [rcx + VALUE]
#define XOR_R8W_FROM_PTR_RDX_(VALUE) xor r8w, word ptr [rdx + VALUE]
#define XOR_R8W_FROM_PTR_RDI_(VALUE) xor r8w, word ptr [rdi + VALUE]
#define XOR_R8W_FROM_PTR_RSI_(VALUE) xor r8w, word ptr [rsi + VALUE]
#define XOR_R8W_FROM_PTR_RBP_(VALUE) xor r8w, word ptr [rbp + VALUE]
#define XOR_R8W_FROM_PTR_RSP_(VALUE) xor r8w, word ptr [rsp + VALUE]
#define XOR_R8W_FROM_PTR_R8_(VALUE) xor r8w, word ptr [r8 + VALUE]
#define XOR_R8W_FROM_PTR_R9_(VALUE) xor r8w, word ptr [r9 + VALUE]
#define XOR_R8W_FROM_PTR_R10_(VALUE) xor r8w, word ptr [r10 + VALUE]
#define XOR_R8W_FROM_PTR_R11_(VALUE) xor r8w, word ptr [r11 + VALUE]
#define XOR_R8W_FROM_PTR_R12_(VALUE) xor r8w, word ptr [r12 + VALUE]
#define XOR_R8W_FROM_PTR_R13_(VALUE) xor r8w, word ptr [r13 + VALUE]
#define XOR_R8W_FROM_PTR_R14_(VALUE) xor r8w, word ptr [r14 + VALUE]
#define XOR_R8W_FROM_PTR_R15_(VALUE) xor r8w, word ptr [r15 + VALUE]
#define XOR_R8W_FROM_PTR_EAX_(VALUE) xor r8w, word ptr [eax + VALUE]
#define XOR_R8W_FROM_PTR_EBX_(VALUE) xor r8w, word ptr [ebx + VALUE]
#define XOR_R8W_FROM_PTR_ECX_(VALUE) xor r8w, word ptr [ecx + VALUE]
#define XOR_R8W_FROM_PTR_EDX_(VALUE) xor r8w, word ptr [edx + VALUE]
#define XOR_R8W_FROM_PTR_EDI_(VALUE) xor r8w, word ptr [edi + VALUE]
#define XOR_R8W_FROM_PTR_ESI_(VALUE) xor r8w, word ptr [esi + VALUE]
#define XOR_R8W_FROM_PTR_EBP_(VALUE) xor r8w, word ptr [ebp + VALUE]
#define XOR_R8W_FROM_PTR_ESP_(VALUE) xor r8w, word ptr [esp + VALUE]

#define XOR_R9W_FROM_PTR_RAX_(VALUE) xor r9w, word ptr [rax + VALUE]
#define XOR_R9W_FROM_PTR_RBX_(VALUE) xor r9w, word ptr [rbx + VALUE]
#define XOR_R9W_FROM_PTR_RCX_(VALUE) xor r9w, word ptr [rcx + VALUE]
#define XOR_R9W_FROM_PTR_RDX_(VALUE) xor r9w, word ptr [rdx + VALUE]
#define XOR_R9W_FROM_PTR_RDI_(VALUE) xor r9w, word ptr [rdi + VALUE]
#define XOR_R9W_FROM_PTR_RSI_(VALUE) xor r9w, word ptr [rsi + VALUE]
#define XOR_R9W_FROM_PTR_RBP_(VALUE) xor r9w, word ptr [rbp + VALUE]
#define XOR_R9W_FROM_PTR_RSP_(VALUE) xor r9w, word ptr [rsp + VALUE]
#define XOR_R9W_FROM_PTR_R8_(VALUE) xor r9w, word ptr [r8 + VALUE]
#define XOR_R9W_FROM_PTR_R9_(VALUE) xor r9w, word ptr [r9 + VALUE]
#define XOR_R9W_FROM_PTR_R10_(VALUE) xor r9w, word ptr [r10 + VALUE]
#define XOR_R9W_FROM_PTR_R11_(VALUE) xor r9w, word ptr [r11 + VALUE]
#define XOR_R9W_FROM_PTR_R12_(VALUE) xor r9w, word ptr [r12 + VALUE]
#define XOR_R9W_FROM_PTR_R13_(VALUE) xor r9w, word ptr [r13 + VALUE]
#define XOR_R9W_FROM_PTR_R14_(VALUE) xor r9w, word ptr [r14 + VALUE]
#define XOR_R9W_FROM_PTR_R15_(VALUE) xor r9w, word ptr [r15 + VALUE]
#define XOR_R9W_FROM_PTR_EAX_(VALUE) xor r9w, word ptr [eax + VALUE]
#define XOR_R9W_FROM_PTR_EBX_(VALUE) xor r9w, word ptr [ebx + VALUE]
#define XOR_R9W_FROM_PTR_ECX_(VALUE) xor r9w, word ptr [ecx + VALUE]
#define XOR_R9W_FROM_PTR_EDX_(VALUE) xor r9w, word ptr [edx + VALUE]
#define XOR_R9W_FROM_PTR_EDI_(VALUE) xor r9w, word ptr [edi + VALUE]
#define XOR_R9W_FROM_PTR_ESI_(VALUE) xor r9w, word ptr [esi + VALUE]
#define XOR_R9W_FROM_PTR_EBP_(VALUE) xor r9w, word ptr [ebp + VALUE]
#define XOR_R9W_FROM_PTR_ESP_(VALUE) xor r9w, word ptr [esp + VALUE]

#define XOR_R10W_FROM_PTR_RAX_(VALUE) xor r10w, word ptr [rax + VALUE]
#define XOR_R10W_FROM_PTR_RBX_(VALUE) xor r10w, word ptr [rbx + VALUE]
#define XOR_R10W_FROM_PTR_RCX_(VALUE) xor r10w, word ptr [rcx + VALUE]
#define XOR_R10W_FROM_PTR_RDX_(VALUE) xor r10w, word ptr [rdx + VALUE]
#define XOR_R10W_FROM_PTR_RDI_(VALUE) xor r10w, word ptr [rdi + VALUE]
#define XOR_R10W_FROM_PTR_RSI_(VALUE) xor r10w, word ptr [rsi + VALUE]
#define XOR_R10W_FROM_PTR_RBP_(VALUE) xor r10w, word ptr [rbp + VALUE]
#define XOR_R10W_FROM_PTR_RSP_(VALUE) xor r10w, word ptr [rsp + VALUE]
#define XOR_R10W_FROM_PTR_R8_(VALUE) xor r10w, word ptr [r8 + VALUE]
#define XOR_R10W_FROM_PTR_R9_(VALUE) xor r10w, word ptr [r9 + VALUE]
#define XOR_R10W_FROM_PTR_R10_(VALUE) xor r10w, word ptr [r10 + VALUE]
#define XOR_R10W_FROM_PTR_R11_(VALUE) xor r10w, word ptr [r11 + VALUE]
#define XOR_R10W_FROM_PTR_R12_(VALUE) xor r10w, word ptr [r12 + VALUE]
#define XOR_R10W_FROM_PTR_R13_(VALUE) xor r10w, word ptr [r13 + VALUE]
#define XOR_R10W_FROM_PTR_R14_(VALUE) xor r10w, word ptr [r14 + VALUE]
#define XOR_R10W_FROM_PTR_R15_(VALUE) xor r10w, word ptr [r15 + VALUE]
#define XOR_R10W_FROM_PTR_EAX_(VALUE) xor r10w, word ptr [eax + VALUE]
#define XOR_R10W_FROM_PTR_EBX_(VALUE) xor r10w, word ptr [ebx + VALUE]
#define XOR_R10W_FROM_PTR_ECX_(VALUE) xor r10w, word ptr [ecx + VALUE]
#define XOR_R10W_FROM_PTR_EDX_(VALUE) xor r10w, word ptr [edx + VALUE]
#define XOR_R10W_FROM_PTR_EDI_(VALUE) xor r10w, word ptr [edi + VALUE]
#define XOR_R10W_FROM_PTR_ESI_(VALUE) xor r10w, word ptr [esi + VALUE]
#define XOR_R10W_FROM_PTR_EBP_(VALUE) xor r10w, word ptr [ebp + VALUE]
#define XOR_R10W_FROM_PTR_ESP_(VALUE) xor r10w, word ptr [esp + VALUE]

#define XOR_R11W_FROM_PTR_RAX_(VALUE) xor r11w, word ptr [rax + VALUE]
#define XOR_R11W_FROM_PTR_RBX_(VALUE) xor r11w, word ptr [rbx + VALUE]
#define XOR_R11W_FROM_PTR_RCX_(VALUE) xor r11w, word ptr [rcx + VALUE]
#define XOR_R11W_FROM_PTR_RDX_(VALUE) xor r11w, word ptr [rdx + VALUE]
#define XOR_R11W_FROM_PTR_RDI_(VALUE) xor r11w, word ptr [rdi + VALUE]
#define XOR_R11W_FROM_PTR_RSI_(VALUE) xor r11w, word ptr [rsi + VALUE]
#define XOR_R11W_FROM_PTR_RBP_(VALUE) xor r11w, word ptr [rbp + VALUE]
#define XOR_R11W_FROM_PTR_RSP_(VALUE) xor r11w, word ptr [rsp + VALUE]
#define XOR_R11W_FROM_PTR_R8_(VALUE) xor r11w, word ptr [r8 + VALUE]
#define XOR_R11W_FROM_PTR_R9_(VALUE) xor r11w, word ptr [r9 + VALUE]
#define XOR_R11W_FROM_PTR_R10_(VALUE) xor r11w, word ptr [r10 + VALUE]
#define XOR_R11W_FROM_PTR_R11_(VALUE) xor r11w, word ptr [r11 + VALUE]
#define XOR_R11W_FROM_PTR_R12_(VALUE) xor r11w, word ptr [r12 + VALUE]
#define XOR_R11W_FROM_PTR_R13_(VALUE) xor r11w, word ptr [r13 + VALUE]
#define XOR_R11W_FROM_PTR_R14_(VALUE) xor r11w, word ptr [r14 + VALUE]
#define XOR_R11W_FROM_PTR_R15_(VALUE) xor r11w, word ptr [r15 + VALUE]
#define XOR_R11W_FROM_PTR_EAX_(VALUE) xor r11w, word ptr [eax + VALUE]
#define XOR_R11W_FROM_PTR_EBX_(VALUE) xor r11w, word ptr [ebx + VALUE]
#define XOR_R11W_FROM_PTR_ECX_(VALUE) xor r11w, word ptr [ecx + VALUE]
#define XOR_R11W_FROM_PTR_EDX_(VALUE) xor r11w, word ptr [edx + VALUE]
#define XOR_R11W_FROM_PTR_EDI_(VALUE) xor r11w, word ptr [edi + VALUE]
#define XOR_R11W_FROM_PTR_ESI_(VALUE) xor r11w, word ptr [esi + VALUE]
#define XOR_R11W_FROM_PTR_EBP_(VALUE) xor r11w, word ptr [ebp + VALUE]
#define XOR_R11W_FROM_PTR_ESP_(VALUE) xor r11w, word ptr [esp + VALUE]

#define XOR_R12W_FROM_PTR_RAX_(VALUE) xor r12w, word ptr [rax + VALUE]
#define XOR_R12W_FROM_PTR_RBX_(VALUE) xor r12w, word ptr [rbx + VALUE]
#define XOR_R12W_FROM_PTR_RCX_(VALUE) xor r12w, word ptr [rcx + VALUE]
#define XOR_R12W_FROM_PTR_RDX_(VALUE) xor r12w, word ptr [rdx + VALUE]
#define XOR_R12W_FROM_PTR_RDI_(VALUE) xor r12w, word ptr [rdi + VALUE]
#define XOR_R12W_FROM_PTR_RSI_(VALUE) xor r12w, word ptr [rsi + VALUE]
#define XOR_R12W_FROM_PTR_RBP_(VALUE) xor r12w, word ptr [rbp + VALUE]
#define XOR_R12W_FROM_PTR_RSP_(VALUE) xor r12w, word ptr [rsp + VALUE]
#define XOR_R12W_FROM_PTR_R8_(VALUE) xor r12w, word ptr [r8 + VALUE]
#define XOR_R12W_FROM_PTR_R9_(VALUE) xor r12w, word ptr [r9 + VALUE]
#define XOR_R12W_FROM_PTR_R10_(VALUE) xor r12w, word ptr [r10 + VALUE]
#define XOR_R12W_FROM_PTR_R11_(VALUE) xor r12w, word ptr [r11 + VALUE]
#define XOR_R12W_FROM_PTR_R12_(VALUE) xor r12w, word ptr [r12 + VALUE]
#define XOR_R12W_FROM_PTR_R13_(VALUE) xor r12w, word ptr [r13 + VALUE]
#define XOR_R12W_FROM_PTR_R14_(VALUE) xor r12w, word ptr [r14 + VALUE]
#define XOR_R12W_FROM_PTR_R15_(VALUE) xor r12w, word ptr [r15 + VALUE]
#define XOR_R12W_FROM_PTR_EAX_(VALUE) xor r12w, word ptr [eax + VALUE]
#define XOR_R12W_FROM_PTR_EBX_(VALUE) xor r12w, word ptr [ebx + VALUE]
#define XOR_R12W_FROM_PTR_ECX_(VALUE) xor r12w, word ptr [ecx + VALUE]
#define XOR_R12W_FROM_PTR_EDX_(VALUE) xor r12w, word ptr [edx + VALUE]
#define XOR_R12W_FROM_PTR_EDI_(VALUE) xor r12w, word ptr [edi + VALUE]
#define XOR_R12W_FROM_PTR_ESI_(VALUE) xor r12w, word ptr [esi + VALUE]
#define XOR_R12W_FROM_PTR_EBP_(VALUE) xor r12w, word ptr [ebp + VALUE]
#define XOR_R12W_FROM_PTR_ESP_(VALUE) xor r12w, word ptr [esp + VALUE]

#define XOR_R13W_FROM_PTR_RAX_(VALUE) xor r13w, word ptr [rax + VALUE]
#define XOR_R13W_FROM_PTR_RBX_(VALUE) xor r13w, word ptr [rbx + VALUE]
#define XOR_R13W_FROM_PTR_RCX_(VALUE) xor r13w, word ptr [rcx + VALUE]
#define XOR_R13W_FROM_PTR_RDX_(VALUE) xor r13w, word ptr [rdx + VALUE]
#define XOR_R13W_FROM_PTR_RDI_(VALUE) xor r13w, word ptr [rdi + VALUE]
#define XOR_R13W_FROM_PTR_RSI_(VALUE) xor r13w, word ptr [rsi + VALUE]
#define XOR_R13W_FROM_PTR_RBP_(VALUE) xor r13w, word ptr [rbp + VALUE]
#define XOR_R13W_FROM_PTR_RSP_(VALUE) xor r13w, word ptr [rsp + VALUE]
#define XOR_R13W_FROM_PTR_R8_(VALUE) xor r13w, word ptr [r8 + VALUE]
#define XOR_R13W_FROM_PTR_R9_(VALUE) xor r13w, word ptr [r9 + VALUE]
#define XOR_R13W_FROM_PTR_R10_(VALUE) xor r13w, word ptr [r10 + VALUE]
#define XOR_R13W_FROM_PTR_R11_(VALUE) xor r13w, word ptr [r11 + VALUE]
#define XOR_R13W_FROM_PTR_R12_(VALUE) xor r13w, word ptr [r12 + VALUE]
#define XOR_R13W_FROM_PTR_R13_(VALUE) xor r13w, word ptr [r13 + VALUE]
#define XOR_R13W_FROM_PTR_R14_(VALUE) xor r13w, word ptr [r14 + VALUE]
#define XOR_R13W_FROM_PTR_R15_(VALUE) xor r13w, word ptr [r15 + VALUE]
#define XOR_R13W_FROM_PTR_EAX_(VALUE) xor r13w, word ptr [eax + VALUE]
#define XOR_R13W_FROM_PTR_EBX_(VALUE) xor r13w, word ptr [ebx + VALUE]
#define XOR_R13W_FROM_PTR_ECX_(VALUE) xor r13w, word ptr [ecx + VALUE]
#define XOR_R13W_FROM_PTR_EDX_(VALUE) xor r13w, word ptr [edx + VALUE]
#define XOR_R13W_FROM_PTR_EDI_(VALUE) xor r13w, word ptr [edi + VALUE]
#define XOR_R13W_FROM_PTR_ESI_(VALUE) xor r13w, word ptr [esi + VALUE]
#define XOR_R13W_FROM_PTR_EBP_(VALUE) xor r13w, word ptr [ebp + VALUE]
#define XOR_R13W_FROM_PTR_ESP_(VALUE) xor r13w, word ptr [esp + VALUE]

#define XOR_R14W_FROM_PTR_RAX_(VALUE) xor r14w, word ptr [rax + VALUE]
#define XOR_R14W_FROM_PTR_RBX_(VALUE) xor r14w, word ptr [rbx + VALUE]
#define XOR_R14W_FROM_PTR_RCX_(VALUE) xor r14w, word ptr [rcx + VALUE]
#define XOR_R14W_FROM_PTR_RDX_(VALUE) xor r14w, word ptr [rdx + VALUE]
#define XOR_R14W_FROM_PTR_RDI_(VALUE) xor r14w, word ptr [rdi + VALUE]
#define XOR_R14W_FROM_PTR_RSI_(VALUE) xor r14w, word ptr [rsi + VALUE]
#define XOR_R14W_FROM_PTR_RBP_(VALUE) xor r14w, word ptr [rbp + VALUE]
#define XOR_R14W_FROM_PTR_RSP_(VALUE) xor r14w, word ptr [rsp + VALUE]
#define XOR_R14W_FROM_PTR_R8_(VALUE) xor r14w, word ptr [r8 + VALUE]
#define XOR_R14W_FROM_PTR_R9_(VALUE) xor r14w, word ptr [r9 + VALUE]
#define XOR_R14W_FROM_PTR_R10_(VALUE) xor r14w, word ptr [r10 + VALUE]
#define XOR_R14W_FROM_PTR_R11_(VALUE) xor r14w, word ptr [r11 + VALUE]
#define XOR_R14W_FROM_PTR_R12_(VALUE) xor r14w, word ptr [r12 + VALUE]
#define XOR_R14W_FROM_PTR_R13_(VALUE) xor r14w, word ptr [r13 + VALUE]
#define XOR_R14W_FROM_PTR_R14_(VALUE) xor r14w, word ptr [r14 + VALUE]
#define XOR_R14W_FROM_PTR_R15_(VALUE) xor r14w, word ptr [r15 + VALUE]
#define XOR_R14W_FROM_PTR_EAX_(VALUE) xor r14w, word ptr [eax + VALUE]
#define XOR_R14W_FROM_PTR_EBX_(VALUE) xor r14w, word ptr [ebx + VALUE]
#define XOR_R14W_FROM_PTR_ECX_(VALUE) xor r14w, word ptr [ecx + VALUE]
#define XOR_R14W_FROM_PTR_EDX_(VALUE) xor r14w, word ptr [edx + VALUE]
#define XOR_R14W_FROM_PTR_EDI_(VALUE) xor r14w, word ptr [edi + VALUE]
#define XOR_R14W_FROM_PTR_ESI_(VALUE) xor r14w, word ptr [esi + VALUE]
#define XOR_R14W_FROM_PTR_EBP_(VALUE) xor r14w, word ptr [ebp + VALUE]
#define XOR_R14W_FROM_PTR_ESP_(VALUE) xor r14w, word ptr [esp + VALUE]

#define XOR_R15W_FROM_PTR_RAX_(VALUE) xor r15w, word ptr [rax + VALUE]
#define XOR_R15W_FROM_PTR_RBX_(VALUE) xor r15w, word ptr [rbx + VALUE]
#define XOR_R15W_FROM_PTR_RCX_(VALUE) xor r15w, word ptr [rcx + VALUE]
#define XOR_R15W_FROM_PTR_RDX_(VALUE) xor r15w, word ptr [rdx + VALUE]
#define XOR_R15W_FROM_PTR_RDI_(VALUE) xor r15w, word ptr [rdi + VALUE]
#define XOR_R15W_FROM_PTR_RSI_(VALUE) xor r15w, word ptr [rsi + VALUE]
#define XOR_R15W_FROM_PTR_RBP_(VALUE) xor r15w, word ptr [rbp + VALUE]
#define XOR_R15W_FROM_PTR_RSP_(VALUE) xor r15w, word ptr [rsp + VALUE]
#define XOR_R15W_FROM_PTR_R8_(VALUE) xor r15w, word ptr [r8 + VALUE]
#define XOR_R15W_FROM_PTR_R9_(VALUE) xor r15w, word ptr [r9 + VALUE]
#define XOR_R15W_FROM_PTR_R10_(VALUE) xor r15w, word ptr [r10 + VALUE]
#define XOR_R15W_FROM_PTR_R11_(VALUE) xor r15w, word ptr [r11 + VALUE]
#define XOR_R15W_FROM_PTR_R12_(VALUE) xor r15w, word ptr [r12 + VALUE]
#define XOR_R15W_FROM_PTR_R13_(VALUE) xor r15w, word ptr [r13 + VALUE]
#define XOR_R15W_FROM_PTR_R14_(VALUE) xor r15w, word ptr [r14 + VALUE]
#define XOR_R15W_FROM_PTR_R15_(VALUE) xor r15w, word ptr [r15 + VALUE]
#define XOR_R15W_FROM_PTR_EAX_(VALUE) xor r15w, word ptr [eax + VALUE]
#define XOR_R15W_FROM_PTR_EBX_(VALUE) xor r15w, word ptr [ebx + VALUE]
#define XOR_R15W_FROM_PTR_ECX_(VALUE) xor r15w, word ptr [ecx + VALUE]
#define XOR_R15W_FROM_PTR_EDX_(VALUE) xor r15w, word ptr [edx + VALUE]
#define XOR_R15W_FROM_PTR_EDI_(VALUE) xor r15w, word ptr [edi + VALUE]
#define XOR_R15W_FROM_PTR_ESI_(VALUE) xor r15w, word ptr [esi + VALUE]
#define XOR_R15W_FROM_PTR_EBP_(VALUE) xor r15w, word ptr [ebp + VALUE]
#define XOR_R15W_FROM_PTR_ESP_(VALUE) xor r15w, word ptr [esp + VALUE]

#define XOR_AX_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], ax
#define XOR_AX_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], ax
#define XOR_AX_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], ax
#define XOR_AX_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], ax
#define XOR_AX_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], ax
#define XOR_AX_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], ax
#define XOR_AX_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], ax
#define XOR_AX_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], ax
#define XOR_AX_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], ax
#define XOR_AX_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], ax
#define XOR_AX_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], ax
#define XOR_AX_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], ax
#define XOR_AX_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], ax
#define XOR_AX_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], ax
#define XOR_AX_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], ax
#define XOR_AX_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], ax
#define XOR_AX_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], ax
#define XOR_AX_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], ax
#define XOR_AX_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], ax
#define XOR_AX_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], ax
#define XOR_AX_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], ax
#define XOR_AX_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], ax
#define XOR_AX_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], ax
#define XOR_AX_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], ax

#define XOR_BX_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], bx
#define XOR_BX_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], bx
#define XOR_BX_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], bx
#define XOR_BX_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], bx
#define XOR_BX_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], bx
#define XOR_BX_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], bx
#define XOR_BX_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], bx
#define XOR_BX_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], bx
#define XOR_BX_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], bx
#define XOR_BX_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], bx
#define XOR_BX_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], bx
#define XOR_BX_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], bx
#define XOR_BX_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], bx
#define XOR_BX_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], bx
#define XOR_BX_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], bx
#define XOR_BX_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], bx
#define XOR_BX_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], bx
#define XOR_BX_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], bx
#define XOR_BX_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], bx
#define XOR_BX_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], bx
#define XOR_BX_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], bx
#define XOR_BX_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], bx
#define XOR_BX_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], bx
#define XOR_BX_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], bx

#define XOR_CX_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], cx
#define XOR_CX_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], cx
#define XOR_CX_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], cx
#define XOR_CX_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], cx
#define XOR_CX_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], cx
#define XOR_CX_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], cx
#define XOR_CX_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], cx
#define XOR_CX_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], cx
#define XOR_CX_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], cx
#define XOR_CX_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], cx
#define XOR_CX_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], cx
#define XOR_CX_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], cx
#define XOR_CX_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], cx
#define XOR_CX_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], cx
#define XOR_CX_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], cx
#define XOR_CX_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], cx
#define XOR_CX_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], cx
#define XOR_CX_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], cx
#define XOR_CX_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], cx
#define XOR_CX_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], cx
#define XOR_CX_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], cx
#define XOR_CX_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], cx
#define XOR_CX_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], cx
#define XOR_CX_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], cx

#define XOR_DX_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], dx
#define XOR_DX_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], dx
#define XOR_DX_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], dx
#define XOR_DX_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], dx
#define XOR_DX_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], dx
#define XOR_DX_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], dx
#define XOR_DX_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], dx
#define XOR_DX_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], dx
#define XOR_DX_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], dx
#define XOR_DX_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], dx
#define XOR_DX_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], dx
#define XOR_DX_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], dx
#define XOR_DX_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], dx
#define XOR_DX_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], dx
#define XOR_DX_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], dx
#define XOR_DX_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], dx
#define XOR_DX_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], dx
#define XOR_DX_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], dx
#define XOR_DX_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], dx
#define XOR_DX_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], dx
#define XOR_DX_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], dx
#define XOR_DX_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], dx
#define XOR_DX_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], dx
#define XOR_DX_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], dx

#define XOR_DI_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], di
#define XOR_DI_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], di
#define XOR_DI_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], di
#define XOR_DI_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], di
#define XOR_DI_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], di
#define XOR_DI_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], di
#define XOR_DI_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], di
#define XOR_DI_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], di
#define XOR_DI_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], di
#define XOR_DI_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], di
#define XOR_DI_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], di
#define XOR_DI_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], di
#define XOR_DI_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], di
#define XOR_DI_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], di
#define XOR_DI_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], di
#define XOR_DI_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], di
#define XOR_DI_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], di
#define XOR_DI_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], di
#define XOR_DI_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], di
#define XOR_DI_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], di
#define XOR_DI_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], di
#define XOR_DI_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], di
#define XOR_DI_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], di
#define XOR_DI_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], di

#define XOR_SI_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], si
#define XOR_SI_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], si
#define XOR_SI_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], si
#define XOR_SI_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], si
#define XOR_SI_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], si
#define XOR_SI_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], si
#define XOR_SI_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], si
#define XOR_SI_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], si
#define XOR_SI_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], si
#define XOR_SI_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], si
#define XOR_SI_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], si
#define XOR_SI_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], si
#define XOR_SI_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], si
#define XOR_SI_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], si
#define XOR_SI_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], si
#define XOR_SI_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], si
#define XOR_SI_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], si
#define XOR_SI_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], si
#define XOR_SI_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], si
#define XOR_SI_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], si
#define XOR_SI_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], si
#define XOR_SI_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], si
#define XOR_SI_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], si
#define XOR_SI_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], si

#define XOR_BP_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], bp
#define XOR_BP_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], bp
#define XOR_BP_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], bp
#define XOR_BP_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], bp
#define XOR_BP_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], bp
#define XOR_BP_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], bp
#define XOR_BP_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], bp
#define XOR_BP_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], bp
#define XOR_BP_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], bp
#define XOR_BP_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], bp
#define XOR_BP_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], bp
#define XOR_BP_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], bp
#define XOR_BP_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], bp
#define XOR_BP_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], bp
#define XOR_BP_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], bp
#define XOR_BP_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], bp
#define XOR_BP_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], bp
#define XOR_BP_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], bp
#define XOR_BP_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], bp
#define XOR_BP_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], bp
#define XOR_BP_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], bp
#define XOR_BP_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], bp
#define XOR_BP_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], bp
#define XOR_BP_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], bp

#define XOR_SP_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], sp
#define XOR_SP_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], sp
#define XOR_SP_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], sp
#define XOR_SP_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], sp
#define XOR_SP_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], sp
#define XOR_SP_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], sp
#define XOR_SP_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], sp
#define XOR_SP_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], sp
#define XOR_SP_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], sp
#define XOR_SP_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], sp
#define XOR_SP_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], sp
#define XOR_SP_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], sp
#define XOR_SP_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], sp
#define XOR_SP_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], sp
#define XOR_SP_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], sp
#define XOR_SP_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], sp
#define XOR_SP_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], sp
#define XOR_SP_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], sp
#define XOR_SP_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], sp
#define XOR_SP_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], sp
#define XOR_SP_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], sp
#define XOR_SP_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], sp
#define XOR_SP_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], sp
#define XOR_SP_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], sp

#define XOR_R8W_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], r8w
#define XOR_R8W_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], r8w
#define XOR_R8W_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], r8w
#define XOR_R8W_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], r8w
#define XOR_R8W_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], r8w
#define XOR_R8W_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], r8w
#define XOR_R8W_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], r8w
#define XOR_R8W_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], r8w
#define XOR_R8W_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], r8w
#define XOR_R8W_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], r8w
#define XOR_R8W_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], r8w
#define XOR_R8W_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], r8w
#define XOR_R8W_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], r8w
#define XOR_R8W_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], r8w
#define XOR_R8W_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], r8w
#define XOR_R8W_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], r8w
#define XOR_R8W_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], r8w
#define XOR_R8W_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], r8w
#define XOR_R8W_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], r8w
#define XOR_R8W_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], r8w
#define XOR_R8W_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], r8w
#define XOR_R8W_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], r8w
#define XOR_R8W_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], r8w
#define XOR_R8W_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], r8w

#define XOR_R9W_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], r9w
#define XOR_R9W_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], r9w
#define XOR_R9W_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], r9w
#define XOR_R9W_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], r9w
#define XOR_R9W_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], r9w
#define XOR_R9W_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], r9w
#define XOR_R9W_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], r9w
#define XOR_R9W_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], r9w
#define XOR_R9W_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], r9w
#define XOR_R9W_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], r9w
#define XOR_R9W_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], r9w
#define XOR_R9W_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], r9w
#define XOR_R9W_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], r9w
#define XOR_R9W_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], r9w
#define XOR_R9W_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], r9w
#define XOR_R9W_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], r9w
#define XOR_R9W_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], r9w
#define XOR_R9W_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], r9w
#define XOR_R9W_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], r9w
#define XOR_R9W_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], r9w
#define XOR_R9W_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], r9w
#define XOR_R9W_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], r9w
#define XOR_R9W_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], r9w
#define XOR_R9W_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], r9w

#define XOR_R10W_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], r10w
#define XOR_R10W_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], r10w
#define XOR_R10W_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], r10w
#define XOR_R10W_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], r10w
#define XOR_R10W_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], r10w
#define XOR_R10W_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], r10w
#define XOR_R10W_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], r10w
#define XOR_R10W_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], r10w
#define XOR_R10W_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], r10w
#define XOR_R10W_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], r10w
#define XOR_R10W_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], r10w
#define XOR_R10W_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], r10w
#define XOR_R10W_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], r10w
#define XOR_R10W_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], r10w
#define XOR_R10W_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], r10w
#define XOR_R10W_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], r10w
#define XOR_R10W_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], r10w
#define XOR_R10W_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], r10w
#define XOR_R10W_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], r10w
#define XOR_R10W_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], r10w
#define XOR_R10W_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], r10w
#define XOR_R10W_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], r10w
#define XOR_R10W_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], r10w
#define XOR_R10W_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], r10w

#define XOR_R11W_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], r11w
#define XOR_R11W_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], r11w
#define XOR_R11W_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], r11w
#define XOR_R11W_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], r11w
#define XOR_R11W_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], r11w
#define XOR_R11W_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], r11w
#define XOR_R11W_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], r11w
#define XOR_R11W_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], r11w
#define XOR_R11W_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], r11w
#define XOR_R11W_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], r11w
#define XOR_R11W_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], r11w
#define XOR_R11W_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], r11w
#define XOR_R11W_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], r11w
#define XOR_R11W_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], r11w
#define XOR_R11W_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], r11w
#define XOR_R11W_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], r11w
#define XOR_R11W_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], r11w
#define XOR_R11W_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], r11w
#define XOR_R11W_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], r11w
#define XOR_R11W_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], r11w
#define XOR_R11W_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], r11w
#define XOR_R11W_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], r11w
#define XOR_R11W_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], r11w
#define XOR_R11W_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], r11w

#define XOR_R12W_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], r12w
#define XOR_R12W_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], r12w
#define XOR_R12W_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], r12w
#define XOR_R12W_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], r12w
#define XOR_R12W_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], r12w
#define XOR_R12W_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], r12w
#define XOR_R12W_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], r12w
#define XOR_R12W_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], r12w
#define XOR_R12W_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], r12w
#define XOR_R12W_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], r12w
#define XOR_R12W_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], r12w
#define XOR_R12W_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], r12w
#define XOR_R12W_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], r12w
#define XOR_R12W_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], r12w
#define XOR_R12W_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], r12w
#define XOR_R12W_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], r12w
#define XOR_R12W_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], r12w
#define XOR_R12W_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], r12w
#define XOR_R12W_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], r12w
#define XOR_R12W_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], r12w
#define XOR_R12W_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], r12w
#define XOR_R12W_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], r12w
#define XOR_R12W_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], r12w
#define XOR_R12W_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], r12w

#define XOR_R13W_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], r13w
#define XOR_R13W_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], r13w
#define XOR_R13W_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], r13w
#define XOR_R13W_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], r13w
#define XOR_R13W_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], r13w
#define XOR_R13W_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], r13w
#define XOR_R13W_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], r13w
#define XOR_R13W_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], r13w
#define XOR_R13W_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], r13w
#define XOR_R13W_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], r13w
#define XOR_R13W_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], r13w
#define XOR_R13W_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], r13w
#define XOR_R13W_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], r13w
#define XOR_R13W_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], r13w
#define XOR_R13W_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], r13w
#define XOR_R13W_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], r13w
#define XOR_R13W_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], r13w
#define XOR_R13W_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], r13w
#define XOR_R13W_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], r13w
#define XOR_R13W_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], r13w
#define XOR_R13W_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], r13w
#define XOR_R13W_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], r13w
#define XOR_R13W_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], r13w
#define XOR_R13W_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], r13w

#define XOR_R14W_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], r14w
#define XOR_R14W_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], r14w
#define XOR_R14W_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], r14w
#define XOR_R14W_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], r14w
#define XOR_R14W_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], r14w
#define XOR_R14W_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], r14w
#define XOR_R14W_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], r14w
#define XOR_R14W_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], r14w
#define XOR_R14W_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], r14w
#define XOR_R14W_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], r14w
#define XOR_R14W_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], r14w
#define XOR_R14W_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], r14w
#define XOR_R14W_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], r14w
#define XOR_R14W_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], r14w
#define XOR_R14W_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], r14w
#define XOR_R14W_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], r14w
#define XOR_R14W_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], r14w
#define XOR_R14W_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], r14w
#define XOR_R14W_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], r14w
#define XOR_R14W_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], r14w
#define XOR_R14W_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], r14w
#define XOR_R14W_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], r14w
#define XOR_R14W_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], r14w
#define XOR_R14W_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], r14w

#define XOR_R15W_TO_PTR_RAX_(VALUE) xor word ptr [rax + VALUE], r15w
#define XOR_R15W_TO_PTR_RBX_(VALUE) xor word ptr [rbx + VALUE], r15w
#define XOR_R15W_TO_PTR_RCX_(VALUE) xor word ptr [rcx + VALUE], r15w
#define XOR_R15W_TO_PTR_RDX_(VALUE) xor word ptr [rdx + VALUE], r15w
#define XOR_R15W_TO_PTR_RDI_(VALUE) xor word ptr [rdi + VALUE], r15w
#define XOR_R15W_TO_PTR_RSI_(VALUE) xor word ptr [rsi + VALUE], r15w
#define XOR_R15W_TO_PTR_RBP_(VALUE) xor word ptr [rbp + VALUE], r15w
#define XOR_R15W_TO_PTR_RSP_(VALUE) xor word ptr [rsp + VALUE], r15w
#define XOR_R15W_TO_PTR_R8_(VALUE) xor word ptr [r8 + VALUE], r15w
#define XOR_R15W_TO_PTR_R9_(VALUE) xor word ptr [r9 + VALUE], r15w
#define XOR_R15W_TO_PTR_R10_(VALUE) xor word ptr [r10 + VALUE], r15w
#define XOR_R15W_TO_PTR_R11_(VALUE) xor word ptr [r11 + VALUE], r15w
#define XOR_R15W_TO_PTR_R12_(VALUE) xor word ptr [r12 + VALUE], r15w
#define XOR_R15W_TO_PTR_R13_(VALUE) xor word ptr [r13 + VALUE], r15w
#define XOR_R15W_TO_PTR_R14_(VALUE) xor word ptr [r14 + VALUE], r15w
#define XOR_R15W_TO_PTR_R15_(VALUE) xor word ptr [r15 + VALUE], r15w
#define XOR_R15W_TO_PTR_EAX_(VALUE) xor word ptr [eax + VALUE], r15w
#define XOR_R15W_TO_PTR_EBX_(VALUE) xor word ptr [ebx + VALUE], r15w
#define XOR_R15W_TO_PTR_ECX_(VALUE) xor word ptr [ecx + VALUE], r15w
#define XOR_R15W_TO_PTR_EDX_(VALUE) xor word ptr [edx + VALUE], r15w
#define XOR_R15W_TO_PTR_EDI_(VALUE) xor word ptr [edi + VALUE], r15w
#define XOR_R15W_TO_PTR_ESI_(VALUE) xor word ptr [esi + VALUE], r15w
#define XOR_R15W_TO_PTR_EBP_(VALUE) xor word ptr [ebp + VALUE], r15w
#define XOR_R15W_TO_PTR_ESP_(VALUE) xor word ptr [esp + VALUE], r15w
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
