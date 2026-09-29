#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define XCHG_AL_FROM_PTR_(VALUE) xchg al, byte ptr [VALUE]
#define XCHG_BL_FROM_PTR_(VALUE) xchg bl, byte ptr [VALUE]
#define XCHG_CL_FROM_PTR_(VALUE) xchg cl, byte ptr [VALUE]
#define XCHG_DL_FROM_PTR_(VALUE) xchg dl, byte ptr [VALUE]

#define XCHG_AL_TO_PTR_(VALUE) xchg byte ptr [VALUE], al
#define XCHG_BL_TO_PTR_(VALUE) xchg byte ptr [VALUE], bl
#define XCHG_CL_TO_PTR_(VALUE) xchg byte ptr [VALUE], cl
#define XCHG_DL_TO_PTR_(VALUE) xchg byte ptr [VALUE], dl

#define XCHG_AL_FROM_PTR_BX xchg al, byte ptr [bx]
#define XCHG_AL_FROM_PTR_BP xchg al, byte ptr [bp]
#define XCHG_AL_FROM_PTR_SI xchg al, byte ptr [si]
#define XCHG_AL_FROM_PTR_DI xchg al, byte ptr [di]

#define XCHG_BL_FROM_PTR_BX xchg bl, byte ptr [bx]
#define XCHG_BL_FROM_PTR_BP xchg bl, byte ptr [bp]
#define XCHG_BL_FROM_PTR_SI xchg bl, byte ptr [si]
#define XCHG_BL_FROM_PTR_DI xchg bl, byte ptr [di]

#define XCHG_CL_FROM_PTR_BX xchg cl, byte ptr [bx]
#define XCHG_CL_FROM_PTR_BP xchg cl, byte ptr [bp]
#define XCHG_CL_FROM_PTR_SI xchg cl, byte ptr [si]
#define XCHG_CL_FROM_PTR_DI xchg cl, byte ptr [di]

#define XCHG_DL_FROM_PTR_BX xchg dl, byte ptr [bx]
#define XCHG_DL_FROM_PTR_BP xchg dl, byte ptr [bp]
#define XCHG_DL_FROM_PTR_SI xchg dl, byte ptr [si]
#define XCHG_DL_FROM_PTR_DI xchg dl, byte ptr [di]

#define XCHG_AL_TO_PTR_BX xchg byte ptr [bx], al
#define XCHG_AL_TO_PTR_BP xchg byte ptr [bp], al
#define XCHG_AL_TO_PTR_SI xchg byte ptr [si], al
#define XCHG_AL_TO_PTR_DI xchg byte ptr [di], al

#define XCHG_BL_TO_PTR_BX xchg byte ptr [bx], bl
#define XCHG_BL_TO_PTR_BP xchg byte ptr [bp], bl
#define XCHG_BL_TO_PTR_SI xchg byte ptr [si], bl
#define XCHG_BL_TO_PTR_DI xchg byte ptr [di], bl

#define XCHG_CL_TO_PTR_BX xchg byte ptr [bx], cl
#define XCHG_CL_TO_PTR_BP xchg byte ptr [bp], cl
#define XCHG_CL_TO_PTR_SI xchg byte ptr [si], cl
#define XCHG_CL_TO_PTR_DI xchg byte ptr [di], cl

#define XCHG_DL_TO_PTR_BX xchg byte ptr [bx], dl
#define XCHG_DL_TO_PTR_BP xchg byte ptr [bp], dl
#define XCHG_DL_TO_PTR_SI xchg byte ptr [si], dl
#define XCHG_DL_TO_PTR_DI xchg byte ptr [di], dl

#define XCHG_AL_FROM_PTR_BX_(VALUE) xchg al, byte ptr [bx + VALUE]
#define XCHG_AL_FROM_PTR_BP_(VALUE) xchg al, byte ptr [bp + VALUE]
#define XCHG_AL_FROM_PTR_SI_(VALUE) xchg al, byte ptr [si + VALUE]
#define XCHG_AL_FROM_PTR_DI_(VALUE) xchg al, byte ptr [di + VALUE]

#define XCHG_BL_FROM_PTR_BX_(VALUE) xchg bl, byte ptr [bx + VALUE]
#define XCHG_BL_FROM_PTR_BP_(VALUE) xchg bl, byte ptr [bp + VALUE]
#define XCHG_BL_FROM_PTR_SI_(VALUE) xchg bl, byte ptr [si + VALUE]
#define XCHG_BL_FROM_PTR_DI_(VALUE) xchg bl, byte ptr [di + VALUE]

#define XCHG_CL_FROM_PTR_BX_(VALUE) xchg cl, byte ptr [bx + VALUE]
#define XCHG_CL_FROM_PTR_BP_(VALUE) xchg cl, byte ptr [bp + VALUE]
#define XCHG_CL_FROM_PTR_SI_(VALUE) xchg cl, byte ptr [si + VALUE]
#define XCHG_CL_FROM_PTR_DI_(VALUE) xchg cl, byte ptr [di + VALUE]

#define XCHG_DL_FROM_PTR_BX_(VALUE) xchg dl, byte ptr [bx + VALUE]
#define XCHG_DL_FROM_PTR_BP_(VALUE) xchg dl, byte ptr [bp + VALUE]
#define XCHG_DL_FROM_PTR_SI_(VALUE) xchg dl, byte ptr [si + VALUE]
#define XCHG_DL_FROM_PTR_DI_(VALUE) xchg dl, byte ptr [di + VALUE]

#define XCHG_AL_TO_PTR_BX_(VALUE) xchg byte ptr [bx + VALUE], al
#define XCHG_AL_TO_PTR_BP_(VALUE) xchg byte ptr [bp + VALUE], al
#define XCHG_AL_TO_PTR_SI_(VALUE) xchg byte ptr [si + VALUE], al
#define XCHG_AL_TO_PTR_DI_(VALUE) xchg byte ptr [di + VALUE], al

#define XCHG_BL_TO_PTR_BX_(VALUE) xchg byte ptr [bx + VALUE], bl
#define XCHG_BL_TO_PTR_BP_(VALUE) xchg byte ptr [bp + VALUE], bl
#define XCHG_BL_TO_PTR_SI_(VALUE) xchg byte ptr [si + VALUE], bl
#define XCHG_BL_TO_PTR_DI_(VALUE) xchg byte ptr [di + VALUE], bl

#define XCHG_CL_TO_PTR_BX_(VALUE) xchg byte ptr [bx + VALUE], cl
#define XCHG_CL_TO_PTR_BP_(VALUE) xchg byte ptr [bp + VALUE], cl
#define XCHG_CL_TO_PTR_SI_(VALUE) xchg byte ptr [si + VALUE], cl
#define XCHG_CL_TO_PTR_DI_(VALUE) xchg byte ptr [di + VALUE], cl

#define XCHG_DL_TO_PTR_BX_(VALUE) xchg byte ptr [bx + VALUE], dl
#define XCHG_DL_TO_PTR_BP_(VALUE) xchg byte ptr [bp + VALUE], dl
#define XCHG_DL_TO_PTR_SI_(VALUE) xchg byte ptr [si + VALUE], dl
#define XCHG_DL_TO_PTR_DI_(VALUE) xchg byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XCHG_AL_FROM_PTR_(VALUE) xchg al, byte ptr [VALUE]
#define XCHG_BL_FROM_PTR_(VALUE) xchg bl, byte ptr [VALUE]
#define XCHG_CL_FROM_PTR_(VALUE) xchg cl, byte ptr [VALUE]
#define XCHG_DL_FROM_PTR_(VALUE) xchg dl, byte ptr [VALUE]

#define XCHG_AL_TO_PTR_(VALUE) xchg byte ptr [VALUE], al
#define XCHG_BL_TO_PTR_(VALUE) xchg byte ptr [VALUE], bl
#define XCHG_CL_TO_PTR_(VALUE) xchg byte ptr [VALUE], cl
#define XCHG_DL_TO_PTR_(VALUE) xchg byte ptr [VALUE], dl

#define XCHG_AL_FROM_PTR_EAX xchg al, byte ptr [eax]
#define XCHG_AL_FROM_PTR_EBX xchg al, byte ptr [ebx]
#define XCHG_AL_FROM_PTR_ECX xchg al, byte ptr [ecx]
#define XCHG_AL_FROM_PTR_EDX xchg al, byte ptr [edx]
#define XCHG_AL_FROM_PTR_EDI xchg al, byte ptr [edi]
#define XCHG_AL_FROM_PTR_ESI xchg al, byte ptr [esi]
#define XCHG_AL_FROM_PTR_EBP xchg al, byte ptr [ebp]
#define XCHG_AL_FROM_PTR_ESP xchg al, byte ptr [esp]
#define XCHG_AL_FROM_PTR_BX xchg al, byte ptr [bx]
#define XCHG_AL_FROM_PTR_BP xchg al, byte ptr [bp]
#define XCHG_AL_FROM_PTR_SI xchg al, byte ptr [si]
#define XCHG_AL_FROM_PTR_DI xchg al, byte ptr [di]

#define XCHG_BL_FROM_PTR_EAX xchg bl, byte ptr [eax]
#define XCHG_BL_FROM_PTR_EBX xchg bl, byte ptr [ebx]
#define XCHG_BL_FROM_PTR_ECX xchg bl, byte ptr [ecx]
#define XCHG_BL_FROM_PTR_EDX xchg bl, byte ptr [edx]
#define XCHG_BL_FROM_PTR_EDI xchg bl, byte ptr [edi]
#define XCHG_BL_FROM_PTR_ESI xchg bl, byte ptr [esi]
#define XCHG_BL_FROM_PTR_EBP xchg bl, byte ptr [ebp]
#define XCHG_BL_FROM_PTR_ESP xchg bl, byte ptr [esp]
#define XCHG_BL_FROM_PTR_BX xchg bl, byte ptr [bx]
#define XCHG_BL_FROM_PTR_BP xchg bl, byte ptr [bp]
#define XCHG_BL_FROM_PTR_SI xchg bl, byte ptr [si]
#define XCHG_BL_FROM_PTR_DI xchg bl, byte ptr [di]

#define XCHG_CL_FROM_PTR_EAX xchg cl, byte ptr [eax]
#define XCHG_CL_FROM_PTR_EBX xchg cl, byte ptr [ebx]
#define XCHG_CL_FROM_PTR_ECX xchg cl, byte ptr [ecx]
#define XCHG_CL_FROM_PTR_EDX xchg cl, byte ptr [edx]
#define XCHG_CL_FROM_PTR_EDI xchg cl, byte ptr [edi]
#define XCHG_CL_FROM_PTR_ESI xchg cl, byte ptr [esi]
#define XCHG_CL_FROM_PTR_EBP xchg cl, byte ptr [ebp]
#define XCHG_CL_FROM_PTR_ESP xchg cl, byte ptr [esp]
#define XCHG_CL_FROM_PTR_BX xchg cl, byte ptr [bx]
#define XCHG_CL_FROM_PTR_BP xchg cl, byte ptr [bp]
#define XCHG_CL_FROM_PTR_SI xchg cl, byte ptr [si]
#define XCHG_CL_FROM_PTR_DI xchg cl, byte ptr [di]

#define XCHG_DL_FROM_PTR_EAX xchg dl, byte ptr [eax]
#define XCHG_DL_FROM_PTR_EBX xchg dl, byte ptr [ebx]
#define XCHG_DL_FROM_PTR_ECX xchg dl, byte ptr [ecx]
#define XCHG_DL_FROM_PTR_EDX xchg dl, byte ptr [edx]
#define XCHG_DL_FROM_PTR_EDI xchg dl, byte ptr [edi]
#define XCHG_DL_FROM_PTR_ESI xchg dl, byte ptr [esi]
#define XCHG_DL_FROM_PTR_EBP xchg dl, byte ptr [ebp]
#define XCHG_DL_FROM_PTR_ESP xchg dl, byte ptr [esp]
#define XCHG_DL_FROM_PTR_BX xchg dl, byte ptr [bx]
#define XCHG_DL_FROM_PTR_BP xchg dl, byte ptr [bp]
#define XCHG_DL_FROM_PTR_SI xchg dl, byte ptr [si]
#define XCHG_DL_FROM_PTR_DI xchg dl, byte ptr [di]

#define XCHG_AL_TO_PTR_EAX xchg byte ptr [eax], al
#define XCHG_AL_TO_PTR_EBX xchg byte ptr [ebx], al
#define XCHG_AL_TO_PTR_ECX xchg byte ptr [ecx], al
#define XCHG_AL_TO_PTR_EDX xchg byte ptr [edx], al
#define XCHG_AL_TO_PTR_EDI xchg byte ptr [edi], al
#define XCHG_AL_TO_PTR_ESI xchg byte ptr [esi], al
#define XCHG_AL_TO_PTR_EBP xchg byte ptr [ebp], al
#define XCHG_AL_TO_PTR_ESP xchg byte ptr [esp], al
#define XCHG_AL_TO_PTR_BX xchg byte ptr [bx], al
#define XCHG_AL_TO_PTR_BP xchg byte ptr [bp], al
#define XCHG_AL_TO_PTR_SI xchg byte ptr [si], al
#define XCHG_AL_TO_PTR_DI xchg byte ptr [di], al

#define XCHG_BL_TO_PTR_EAX xchg byte ptr [eax], bl
#define XCHG_BL_TO_PTR_EBX xchg byte ptr [ebx], bl
#define XCHG_BL_TO_PTR_ECX xchg byte ptr [ecx], bl
#define XCHG_BL_TO_PTR_EDX xchg byte ptr [edx], bl
#define XCHG_BL_TO_PTR_EDI xchg byte ptr [edi], bl
#define XCHG_BL_TO_PTR_ESI xchg byte ptr [esi], bl
#define XCHG_BL_TO_PTR_EBP xchg byte ptr [ebp], bl
#define XCHG_BL_TO_PTR_ESP xchg byte ptr [esp], bl
#define XCHG_BL_TO_PTR_BX xchg byte ptr [bx], bl
#define XCHG_BL_TO_PTR_BP xchg byte ptr [bp], bl
#define XCHG_BL_TO_PTR_SI xchg byte ptr [si], bl
#define XCHG_BL_TO_PTR_DI xchg byte ptr [di], bl

#define XCHG_CL_TO_PTR_EAX xchg byte ptr [eax], cl
#define XCHG_CL_TO_PTR_EBX xchg byte ptr [ebx], cl
#define XCHG_CL_TO_PTR_ECX xchg byte ptr [ecx], cl
#define XCHG_CL_TO_PTR_EDX xchg byte ptr [edx], cl
#define XCHG_CL_TO_PTR_EDI xchg byte ptr [edi], cl
#define XCHG_CL_TO_PTR_ESI xchg byte ptr [esi], cl
#define XCHG_CL_TO_PTR_EBP xchg byte ptr [ebp], cl
#define XCHG_CL_TO_PTR_ESP xchg byte ptr [esp], cl
#define XCHG_CL_TO_PTR_BX xchg byte ptr [bx], cl
#define XCHG_CL_TO_PTR_BP xchg byte ptr [bp], cl
#define XCHG_CL_TO_PTR_SI xchg byte ptr [si], cl
#define XCHG_CL_TO_PTR_DI xchg byte ptr [di], cl

#define XCHG_DL_TO_PTR_EAX xchg byte ptr [eax], dl
#define XCHG_DL_TO_PTR_EBX xchg byte ptr [ebx], dl
#define XCHG_DL_TO_PTR_ECX xchg byte ptr [ecx], dl
#define XCHG_DL_TO_PTR_EDX xchg byte ptr [edx], dl
#define XCHG_DL_TO_PTR_EDI xchg byte ptr [edi], dl
#define XCHG_DL_TO_PTR_ESI xchg byte ptr [esi], dl
#define XCHG_DL_TO_PTR_EBP xchg byte ptr [ebp], dl
#define XCHG_DL_TO_PTR_ESP xchg byte ptr [esp], dl
#define XCHG_DL_TO_PTR_BX xchg byte ptr [bx], dl
#define XCHG_DL_TO_PTR_BP xchg byte ptr [bp], dl
#define XCHG_DL_TO_PTR_SI xchg byte ptr [si], dl
#define XCHG_DL_TO_PTR_DI xchg byte ptr [di], dl

#define XCHG_AL_FROM_PTR_EAX_(VALUE) xchg al, byte ptr [eax + VALUE]
#define XCHG_AL_FROM_PTR_EBX_(VALUE) xchg al, byte ptr [ebx + VALUE]
#define XCHG_AL_FROM_PTR_ECX_(VALUE) xchg al, byte ptr [ecx + VALUE]
#define XCHG_AL_FROM_PTR_EDX_(VALUE) xchg al, byte ptr [edx + VALUE]
#define XCHG_AL_FROM_PTR_EDI_(VALUE) xchg al, byte ptr [edi + VALUE]
#define XCHG_AL_FROM_PTR_ESI_(VALUE) xchg al, byte ptr [esi + VALUE]
#define XCHG_AL_FROM_PTR_EBP_(VALUE) xchg al, byte ptr [ebp + VALUE]
#define XCHG_AL_FROM_PTR_ESP_(VALUE) xchg al, byte ptr [esp + VALUE]
#define XCHG_AL_FROM_PTR_BX_(VALUE) xchg al, byte ptr [bx + VALUE]
#define XCHG_AL_FROM_PTR_BP_(VALUE) xchg al, byte ptr [bp + VALUE]
#define XCHG_AL_FROM_PTR_SI_(VALUE) xchg al, byte ptr [si + VALUE]
#define XCHG_AL_FROM_PTR_DI_(VALUE) xchg al, byte ptr [di + VALUE]

#define XCHG_BL_FROM_PTR_EAX_(VALUE) xchg bl, byte ptr [eax + VALUE]
#define XCHG_BL_FROM_PTR_EBX_(VALUE) xchg bl, byte ptr [ebx + VALUE]
#define XCHG_BL_FROM_PTR_ECX_(VALUE) xchg bl, byte ptr [ecx + VALUE]
#define XCHG_BL_FROM_PTR_EDX_(VALUE) xchg bl, byte ptr [edx + VALUE]
#define XCHG_BL_FROM_PTR_EDI_(VALUE) xchg bl, byte ptr [edi + VALUE]
#define XCHG_BL_FROM_PTR_ESI_(VALUE) xchg bl, byte ptr [esi + VALUE]
#define XCHG_BL_FROM_PTR_EBP_(VALUE) xchg bl, byte ptr [ebp + VALUE]
#define XCHG_BL_FROM_PTR_ESP_(VALUE) xchg bl, byte ptr [esp + VALUE]
#define XCHG_BL_FROM_PTR_BX_(VALUE) xchg bl, byte ptr [bx + VALUE]
#define XCHG_BL_FROM_PTR_BP_(VALUE) xchg bl, byte ptr [bp + VALUE]
#define XCHG_BL_FROM_PTR_SI_(VALUE) xchg bl, byte ptr [si + VALUE]
#define XCHG_BL_FROM_PTR_DI_(VALUE) xchg bl, byte ptr [di + VALUE]

#define XCHG_CL_FROM_PTR_EAX_(VALUE) xchg cl, byte ptr [eax + VALUE]
#define XCHG_CL_FROM_PTR_EBX_(VALUE) xchg cl, byte ptr [ebx + VALUE]
#define XCHG_CL_FROM_PTR_ECX_(VALUE) xchg cl, byte ptr [ecx + VALUE]
#define XCHG_CL_FROM_PTR_EDX_(VALUE) xchg cl, byte ptr [edx + VALUE]
#define XCHG_CL_FROM_PTR_EDI_(VALUE) xchg cl, byte ptr [edi + VALUE]
#define XCHG_CL_FROM_PTR_ESI_(VALUE) xchg cl, byte ptr [esi + VALUE]
#define XCHG_CL_FROM_PTR_EBP_(VALUE) xchg cl, byte ptr [ebp + VALUE]
#define XCHG_CL_FROM_PTR_ESP_(VALUE) xchg cl, byte ptr [esp + VALUE]
#define XCHG_CL_FROM_PTR_BX_(VALUE) xchg cl, byte ptr [bx + VALUE]
#define XCHG_CL_FROM_PTR_BP_(VALUE) xchg cl, byte ptr [bp + VALUE]
#define XCHG_CL_FROM_PTR_SI_(VALUE) xchg cl, byte ptr [si + VALUE]
#define XCHG_CL_FROM_PTR_DI_(VALUE) xchg cl, byte ptr [di + VALUE]

#define XCHG_DL_FROM_PTR_EAX_(VALUE) xchg dl, byte ptr [eax + VALUE]
#define XCHG_DL_FROM_PTR_EBX_(VALUE) xchg dl, byte ptr [ebx + VALUE]
#define XCHG_DL_FROM_PTR_ECX_(VALUE) xchg dl, byte ptr [ecx + VALUE]
#define XCHG_DL_FROM_PTR_EDX_(VALUE) xchg dl, byte ptr [edx + VALUE]
#define XCHG_DL_FROM_PTR_EDI_(VALUE) xchg dl, byte ptr [edi + VALUE]
#define XCHG_DL_FROM_PTR_ESI_(VALUE) xchg dl, byte ptr [esi + VALUE]
#define XCHG_DL_FROM_PTR_EBP_(VALUE) xchg dl, byte ptr [ebp + VALUE]
#define XCHG_DL_FROM_PTR_ESP_(VALUE) xchg dl, byte ptr [esp + VALUE]
#define XCHG_DL_FROM_PTR_BX_(VALUE) xchg dl, byte ptr [bx + VALUE]
#define XCHG_DL_FROM_PTR_BP_(VALUE) xchg dl, byte ptr [bp + VALUE]
#define XCHG_DL_FROM_PTR_SI_(VALUE) xchg dl, byte ptr [si + VALUE]
#define XCHG_DL_FROM_PTR_DI_(VALUE) xchg dl, byte ptr [di + VALUE]

#define XCHG_AL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], al
#define XCHG_AL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], al
#define XCHG_AL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], al
#define XCHG_AL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], al
#define XCHG_AL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], al
#define XCHG_AL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], al
#define XCHG_AL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], al
#define XCHG_AL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], al
#define XCHG_AL_TO_PTR_BX_(VALUE) xchg byte ptr [bx + VALUE], al
#define XCHG_AL_TO_PTR_BP_(VALUE) xchg byte ptr [bp + VALUE], al
#define XCHG_AL_TO_PTR_SI_(VALUE) xchg byte ptr [si + VALUE], al
#define XCHG_AL_TO_PTR_DI_(VALUE) xchg byte ptr [di + VALUE], al

#define XCHG_BL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], bl
#define XCHG_BL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], bl
#define XCHG_BL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], bl
#define XCHG_BL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], bl
#define XCHG_BL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], bl
#define XCHG_BL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], bl
#define XCHG_BL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], bl
#define XCHG_BL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], bl
#define XCHG_BL_TO_PTR_BX_(VALUE) xchg byte ptr [bx + VALUE], bl
#define XCHG_BL_TO_PTR_BP_(VALUE) xchg byte ptr [bp + VALUE], bl
#define XCHG_BL_TO_PTR_SI_(VALUE) xchg byte ptr [si + VALUE], bl
#define XCHG_BL_TO_PTR_DI_(VALUE) xchg byte ptr [di + VALUE], bl

#define XCHG_CL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], cl
#define XCHG_CL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], cl
#define XCHG_CL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], cl
#define XCHG_CL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], cl
#define XCHG_CL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], cl
#define XCHG_CL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], cl
#define XCHG_CL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], cl
#define XCHG_CL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], cl
#define XCHG_CL_TO_PTR_BX_(VALUE) xchg byte ptr [bx + VALUE], cl
#define XCHG_CL_TO_PTR_BP_(VALUE) xchg byte ptr [bp + VALUE], cl
#define XCHG_CL_TO_PTR_SI_(VALUE) xchg byte ptr [si + VALUE], cl
#define XCHG_CL_TO_PTR_DI_(VALUE) xchg byte ptr [di + VALUE], cl

#define XCHG_DL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], dl
#define XCHG_DL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], dl
#define XCHG_DL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], dl
#define XCHG_DL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], dl
#define XCHG_DL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], dl
#define XCHG_DL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], dl
#define XCHG_DL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], dl
#define XCHG_DL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], dl
#define XCHG_DL_TO_PTR_BX_(VALUE) xchg byte ptr [bx + VALUE], dl
#define XCHG_DL_TO_PTR_BP_(VALUE) xchg byte ptr [bp + VALUE], dl
#define XCHG_DL_TO_PTR_SI_(VALUE) xchg byte ptr [si + VALUE], dl
#define XCHG_DL_TO_PTR_DI_(VALUE) xchg byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_AL_FROM_PTR_(VALUE) xchg al, byte ptr [VALUE]
#define XCHG_BL_FROM_PTR_(VALUE) xchg bl, byte ptr [VALUE]
#define XCHG_CL_FROM_PTR_(VALUE) xchg cl, byte ptr [VALUE]
#define XCHG_DL_FROM_PTR_(VALUE) xchg dl, byte ptr [VALUE]
#define XCHG_DIL_FROM_PTR_(VALUE) xchg dil, byte ptr [VALUE]
#define XCHG_SIL_FROM_PTR_(VALUE) xchg sil, byte ptr [VALUE]
#define XCHG_BPL_FROM_PTR_(VALUE) xchg bpl, byte ptr [VALUE]
#define XCHG_SPL_FROM_PTR_(VALUE) xchg spl, byte ptr [VALUE]
#define XCHG_R8B_FROM_PTR_(VALUE) xchg r8b, byte ptr [VALUE]
#define XCHG_R9B_FROM_PTR_(VALUE) xchg r9b, byte ptr [VALUE]
#define XCHG_R10B_FROM_PTR_(VALUE) xchg r10b, byte ptr [VALUE]
#define XCHG_R11B_FROM_PTR_(VALUE) xchg r11b, byte ptr [VALUE]
#define XCHG_R12B_FROM_PTR_(VALUE) xchg r12b, byte ptr [VALUE]
#define XCHG_R13B_FROM_PTR_(VALUE) xchg r13b, byte ptr [VALUE]
#define XCHG_R14B_FROM_PTR_(VALUE) xchg r14b, byte ptr [VALUE]
#define XCHG_R15B_FROM_PTR_(VALUE) xchg r15b, byte ptr [VALUE]

#define XCHG_AL_TO_PTR_(VALUE) xchg byte ptr [VALUE], al
#define XCHG_BL_TO_PTR_(VALUE) xchg byte ptr [VALUE], bl
#define XCHG_CL_TO_PTR_(VALUE) xchg byte ptr [VALUE], cl
#define XCHG_DL_TO_PTR_(VALUE) xchg byte ptr [VALUE], dl
#define XCHG_DIL_TO_PTR_(VALUE) xchg byte ptr [VALUE], dil
#define XCHG_SIL_TO_PTR_(VALUE) xchg byte ptr [VALUE], sil
#define XCHG_BPL_TO_PTR_(VALUE) xchg byte ptr [VALUE], bpl
#define XCHG_SPL_TO_PTR_(VALUE) xchg byte ptr [VALUE], spl
#define XCHG_R8B_TO_PTR_(VALUE) xchg byte ptr [VALUE], r8b
#define XCHG_R9B_TO_PTR_(VALUE) xchg byte ptr [VALUE], r9b
#define XCHG_R10B_TO_PTR_(VALUE) xchg byte ptr [VALUE], r10b
#define XCHG_R11B_TO_PTR_(VALUE) xchg byte ptr [VALUE], r11b
#define XCHG_R12B_TO_PTR_(VALUE) xchg byte ptr [VALUE], r12b
#define XCHG_R13B_TO_PTR_(VALUE) xchg byte ptr [VALUE], r13b
#define XCHG_R14B_TO_PTR_(VALUE) xchg byte ptr [VALUE], r14b
#define XCHG_R15B_TO_PTR_(VALUE) xchg byte ptr [VALUE], r15b

#define XCHG_AL_FROM_PTR_RAX xchg al, byte ptr [rax]
#define XCHG_AL_FROM_PTR_RBX xchg al, byte ptr [rbx]
#define XCHG_AL_FROM_PTR_RCX xchg al, byte ptr [rcx]
#define XCHG_AL_FROM_PTR_RDX xchg al, byte ptr [rdx]
#define XCHG_AL_FROM_PTR_RDI xchg al, byte ptr [rdi]
#define XCHG_AL_FROM_PTR_RSI xchg al, byte ptr [rsi]
#define XCHG_AL_FROM_PTR_RBP xchg al, byte ptr [rbp]
#define XCHG_AL_FROM_PTR_RSP xchg al, byte ptr [rsp]
#define XCHG_AL_FROM_PTR_R8 xchg al, byte ptr [r8]
#define XCHG_AL_FROM_PTR_R9 xchg al, byte ptr [r9]
#define XCHG_AL_FROM_PTR_R10 xchg al, byte ptr [r10]
#define XCHG_AL_FROM_PTR_R11 xchg al, byte ptr [r11]
#define XCHG_AL_FROM_PTR_R12 xchg al, byte ptr [r12]
#define XCHG_AL_FROM_PTR_R13 xchg al, byte ptr [r13]
#define XCHG_AL_FROM_PTR_R14 xchg al, byte ptr [r14]
#define XCHG_AL_FROM_PTR_R15 xchg al, byte ptr [r15]
#define XCHG_AL_FROM_PTR_EAX xchg al, byte ptr [eax]
#define XCHG_AL_FROM_PTR_EBX xchg al, byte ptr [ebx]
#define XCHG_AL_FROM_PTR_ECX xchg al, byte ptr [ecx]
#define XCHG_AL_FROM_PTR_EDX xchg al, byte ptr [edx]
#define XCHG_AL_FROM_PTR_EDI xchg al, byte ptr [edi]
#define XCHG_AL_FROM_PTR_ESI xchg al, byte ptr [esi]
#define XCHG_AL_FROM_PTR_EBP xchg al, byte ptr [ebp]
#define XCHG_AL_FROM_PTR_ESP xchg al, byte ptr [esp]

#define XCHG_BL_FROM_PTR_RAX xchg bl, byte ptr [rax]
#define XCHG_BL_FROM_PTR_RBX xchg bl, byte ptr [rbx]
#define XCHG_BL_FROM_PTR_RCX xchg bl, byte ptr [rcx]
#define XCHG_BL_FROM_PTR_RDX xchg bl, byte ptr [rdx]
#define XCHG_BL_FROM_PTR_RDI xchg bl, byte ptr [rdi]
#define XCHG_BL_FROM_PTR_RSI xchg bl, byte ptr [rsi]
#define XCHG_BL_FROM_PTR_RBP xchg bl, byte ptr [rbp]
#define XCHG_BL_FROM_PTR_RSP xchg bl, byte ptr [rsp]
#define XCHG_BL_FROM_PTR_R8 xchg bl, byte ptr [r8]
#define XCHG_BL_FROM_PTR_R9 xchg bl, byte ptr [r9]
#define XCHG_BL_FROM_PTR_R10 xchg bl, byte ptr [r10]
#define XCHG_BL_FROM_PTR_R11 xchg bl, byte ptr [r11]
#define XCHG_BL_FROM_PTR_R12 xchg bl, byte ptr [r12]
#define XCHG_BL_FROM_PTR_R13 xchg bl, byte ptr [r13]
#define XCHG_BL_FROM_PTR_R14 xchg bl, byte ptr [r14]
#define XCHG_BL_FROM_PTR_R15 xchg bl, byte ptr [r15]
#define XCHG_BL_FROM_PTR_EAX xchg bl, byte ptr [eax]
#define XCHG_BL_FROM_PTR_EBX xchg bl, byte ptr [ebx]
#define XCHG_BL_FROM_PTR_ECX xchg bl, byte ptr [ecx]
#define XCHG_BL_FROM_PTR_EDX xchg bl, byte ptr [edx]
#define XCHG_BL_FROM_PTR_EDI xchg bl, byte ptr [edi]
#define XCHG_BL_FROM_PTR_ESI xchg bl, byte ptr [esi]
#define XCHG_BL_FROM_PTR_EBP xchg bl, byte ptr [ebp]
#define XCHG_BL_FROM_PTR_ESP xchg bl, byte ptr [esp]

#define XCHG_CL_FROM_PTR_RAX xchg cl, byte ptr [rax]
#define XCHG_CL_FROM_PTR_RBX xchg cl, byte ptr [rbx]
#define XCHG_CL_FROM_PTR_RCX xchg cl, byte ptr [rcx]
#define XCHG_CL_FROM_PTR_RDX xchg cl, byte ptr [rdx]
#define XCHG_CL_FROM_PTR_RDI xchg cl, byte ptr [rdi]
#define XCHG_CL_FROM_PTR_RSI xchg cl, byte ptr [rsi]
#define XCHG_CL_FROM_PTR_RBP xchg cl, byte ptr [rbp]
#define XCHG_CL_FROM_PTR_RSP xchg cl, byte ptr [rsp]
#define XCHG_CL_FROM_PTR_R8 xchg cl, byte ptr [r8]
#define XCHG_CL_FROM_PTR_R9 xchg cl, byte ptr [r9]
#define XCHG_CL_FROM_PTR_R10 xchg cl, byte ptr [r10]
#define XCHG_CL_FROM_PTR_R11 xchg cl, byte ptr [r11]
#define XCHG_CL_FROM_PTR_R12 xchg cl, byte ptr [r12]
#define XCHG_CL_FROM_PTR_R13 xchg cl, byte ptr [r13]
#define XCHG_CL_FROM_PTR_R14 xchg cl, byte ptr [r14]
#define XCHG_CL_FROM_PTR_R15 xchg cl, byte ptr [r15]
#define XCHG_CL_FROM_PTR_EAX xchg cl, byte ptr [eax]
#define XCHG_CL_FROM_PTR_EBX xchg cl, byte ptr [ebx]
#define XCHG_CL_FROM_PTR_ECX xchg cl, byte ptr [ecx]
#define XCHG_CL_FROM_PTR_EDX xchg cl, byte ptr [edx]
#define XCHG_CL_FROM_PTR_EDI xchg cl, byte ptr [edi]
#define XCHG_CL_FROM_PTR_ESI xchg cl, byte ptr [esi]
#define XCHG_CL_FROM_PTR_EBP xchg cl, byte ptr [ebp]
#define XCHG_CL_FROM_PTR_ESP xchg cl, byte ptr [esp]

#define XCHG_DL_FROM_PTR_RAX xchg dl, byte ptr [rax]
#define XCHG_DL_FROM_PTR_RBX xchg dl, byte ptr [rbx]
#define XCHG_DL_FROM_PTR_RCX xchg dl, byte ptr [rcx]
#define XCHG_DL_FROM_PTR_RDX xchg dl, byte ptr [rdx]
#define XCHG_DL_FROM_PTR_RDI xchg dl, byte ptr [rdi]
#define XCHG_DL_FROM_PTR_RSI xchg dl, byte ptr [rsi]
#define XCHG_DL_FROM_PTR_RBP xchg dl, byte ptr [rbp]
#define XCHG_DL_FROM_PTR_RSP xchg dl, byte ptr [rsp]
#define XCHG_DL_FROM_PTR_R8 xchg dl, byte ptr [r8]
#define XCHG_DL_FROM_PTR_R9 xchg dl, byte ptr [r9]
#define XCHG_DL_FROM_PTR_R10 xchg dl, byte ptr [r10]
#define XCHG_DL_FROM_PTR_R11 xchg dl, byte ptr [r11]
#define XCHG_DL_FROM_PTR_R12 xchg dl, byte ptr [r12]
#define XCHG_DL_FROM_PTR_R13 xchg dl, byte ptr [r13]
#define XCHG_DL_FROM_PTR_R14 xchg dl, byte ptr [r14]
#define XCHG_DL_FROM_PTR_R15 xchg dl, byte ptr [r15]
#define XCHG_DL_FROM_PTR_EAX xchg dl, byte ptr [eax]
#define XCHG_DL_FROM_PTR_EBX xchg dl, byte ptr [ebx]
#define XCHG_DL_FROM_PTR_ECX xchg dl, byte ptr [ecx]
#define XCHG_DL_FROM_PTR_EDX xchg dl, byte ptr [edx]
#define XCHG_DL_FROM_PTR_EDI xchg dl, byte ptr [edi]
#define XCHG_DL_FROM_PTR_ESI xchg dl, byte ptr [esi]
#define XCHG_DL_FROM_PTR_EBP xchg dl, byte ptr [ebp]
#define XCHG_DL_FROM_PTR_ESP xchg dl, byte ptr [esp]

#define XCHG_DIL_FROM_PTR_RAX xchg dil, byte ptr [rax]
#define XCHG_DIL_FROM_PTR_RBX xchg dil, byte ptr [rbx]
#define XCHG_DIL_FROM_PTR_RCX xchg dil, byte ptr [rcx]
#define XCHG_DIL_FROM_PTR_RDX xchg dil, byte ptr [rdx]
#define XCHG_DIL_FROM_PTR_RDI xchg dil, byte ptr [rdi]
#define XCHG_DIL_FROM_PTR_RSI xchg dil, byte ptr [rsi]
#define XCHG_DIL_FROM_PTR_RBP xchg dil, byte ptr [rbp]
#define XCHG_DIL_FROM_PTR_RSP xchg dil, byte ptr [rsp]
#define XCHG_DIL_FROM_PTR_R8 xchg dil, byte ptr [r8]
#define XCHG_DIL_FROM_PTR_R9 xchg dil, byte ptr [r9]
#define XCHG_DIL_FROM_PTR_R10 xchg dil, byte ptr [r10]
#define XCHG_DIL_FROM_PTR_R11 xchg dil, byte ptr [r11]
#define XCHG_DIL_FROM_PTR_R12 xchg dil, byte ptr [r12]
#define XCHG_DIL_FROM_PTR_R13 xchg dil, byte ptr [r13]
#define XCHG_DIL_FROM_PTR_R14 xchg dil, byte ptr [r14]
#define XCHG_DIL_FROM_PTR_R15 xchg dil, byte ptr [r15]
#define XCHG_DIL_FROM_PTR_EAX xchg dil, byte ptr [eax]
#define XCHG_DIL_FROM_PTR_EBX xchg dil, byte ptr [ebx]
#define XCHG_DIL_FROM_PTR_ECX xchg dil, byte ptr [ecx]
#define XCHG_DIL_FROM_PTR_EDX xchg dil, byte ptr [edx]
#define XCHG_DIL_FROM_PTR_EDI xchg dil, byte ptr [edi]
#define XCHG_DIL_FROM_PTR_ESI xchg dil, byte ptr [esi]
#define XCHG_DIL_FROM_PTR_EBP xchg dil, byte ptr [ebp]
#define XCHG_DIL_FROM_PTR_ESP xchg dil, byte ptr [esp]

#define XCHG_SIL_FROM_PTR_RAX xchg sil, byte ptr [rax]
#define XCHG_SIL_FROM_PTR_RBX xchg sil, byte ptr [rbx]
#define XCHG_SIL_FROM_PTR_RCX xchg sil, byte ptr [rcx]
#define XCHG_SIL_FROM_PTR_RDX xchg sil, byte ptr [rdx]
#define XCHG_SIL_FROM_PTR_RDI xchg sil, byte ptr [rdi]
#define XCHG_SIL_FROM_PTR_RSI xchg sil, byte ptr [rsi]
#define XCHG_SIL_FROM_PTR_RBP xchg sil, byte ptr [rbp]
#define XCHG_SIL_FROM_PTR_RSP xchg sil, byte ptr [rsp]
#define XCHG_SIL_FROM_PTR_R8 xchg sil, byte ptr [r8]
#define XCHG_SIL_FROM_PTR_R9 xchg sil, byte ptr [r9]
#define XCHG_SIL_FROM_PTR_R10 xchg sil, byte ptr [r10]
#define XCHG_SIL_FROM_PTR_R11 xchg sil, byte ptr [r11]
#define XCHG_SIL_FROM_PTR_R12 xchg sil, byte ptr [r12]
#define XCHG_SIL_FROM_PTR_R13 xchg sil, byte ptr [r13]
#define XCHG_SIL_FROM_PTR_R14 xchg sil, byte ptr [r14]
#define XCHG_SIL_FROM_PTR_R15 xchg sil, byte ptr [r15]
#define XCHG_SIL_FROM_PTR_EAX xchg sil, byte ptr [eax]
#define XCHG_SIL_FROM_PTR_EBX xchg sil, byte ptr [ebx]
#define XCHG_SIL_FROM_PTR_ECX xchg sil, byte ptr [ecx]
#define XCHG_SIL_FROM_PTR_EDX xchg sil, byte ptr [edx]
#define XCHG_SIL_FROM_PTR_EDI xchg sil, byte ptr [edi]
#define XCHG_SIL_FROM_PTR_ESI xchg sil, byte ptr [esi]
#define XCHG_SIL_FROM_PTR_EBP xchg sil, byte ptr [ebp]
#define XCHG_SIL_FROM_PTR_ESP xchg sil, byte ptr [esp]

#define XCHG_BPL_FROM_PTR_RAX xchg bpl, byte ptr [rax]
#define XCHG_BPL_FROM_PTR_RBX xchg bpl, byte ptr [rbx]
#define XCHG_BPL_FROM_PTR_RCX xchg bpl, byte ptr [rcx]
#define XCHG_BPL_FROM_PTR_RDX xchg bpl, byte ptr [rdx]
#define XCHG_BPL_FROM_PTR_RDI xchg bpl, byte ptr [rdi]
#define XCHG_BPL_FROM_PTR_RSI xchg bpl, byte ptr [rsi]
#define XCHG_BPL_FROM_PTR_RBP xchg bpl, byte ptr [rbp]
#define XCHG_BPL_FROM_PTR_RSP xchg bpl, byte ptr [rsp]
#define XCHG_BPL_FROM_PTR_R8 xchg bpl, byte ptr [r8]
#define XCHG_BPL_FROM_PTR_R9 xchg bpl, byte ptr [r9]
#define XCHG_BPL_FROM_PTR_R10 xchg bpl, byte ptr [r10]
#define XCHG_BPL_FROM_PTR_R11 xchg bpl, byte ptr [r11]
#define XCHG_BPL_FROM_PTR_R12 xchg bpl, byte ptr [r12]
#define XCHG_BPL_FROM_PTR_R13 xchg bpl, byte ptr [r13]
#define XCHG_BPL_FROM_PTR_R14 xchg bpl, byte ptr [r14]
#define XCHG_BPL_FROM_PTR_R15 xchg bpl, byte ptr [r15]
#define XCHG_BPL_FROM_PTR_EAX xchg bpl, byte ptr [eax]
#define XCHG_BPL_FROM_PTR_EBX xchg bpl, byte ptr [ebx]
#define XCHG_BPL_FROM_PTR_ECX xchg bpl, byte ptr [ecx]
#define XCHG_BPL_FROM_PTR_EDX xchg bpl, byte ptr [edx]
#define XCHG_BPL_FROM_PTR_EDI xchg bpl, byte ptr [edi]
#define XCHG_BPL_FROM_PTR_ESI xchg bpl, byte ptr [esi]
#define XCHG_BPL_FROM_PTR_EBP xchg bpl, byte ptr [ebp]
#define XCHG_BPL_FROM_PTR_ESP xchg bpl, byte ptr [esp]

#define XCHG_SPL_FROM_PTR_RAX xchg spl, byte ptr [rax]
#define XCHG_SPL_FROM_PTR_RBX xchg spl, byte ptr [rbx]
#define XCHG_SPL_FROM_PTR_RCX xchg spl, byte ptr [rcx]
#define XCHG_SPL_FROM_PTR_RDX xchg spl, byte ptr [rdx]
#define XCHG_SPL_FROM_PTR_RDI xchg spl, byte ptr [rdi]
#define XCHG_SPL_FROM_PTR_RSI xchg spl, byte ptr [rsi]
#define XCHG_SPL_FROM_PTR_RBP xchg spl, byte ptr [rbp]
#define XCHG_SPL_FROM_PTR_RSP xchg spl, byte ptr [rsp]
#define XCHG_SPL_FROM_PTR_R8 xchg spl, byte ptr [r8]
#define XCHG_SPL_FROM_PTR_R9 xchg spl, byte ptr [r9]
#define XCHG_SPL_FROM_PTR_R10 xchg spl, byte ptr [r10]
#define XCHG_SPL_FROM_PTR_R11 xchg spl, byte ptr [r11]
#define XCHG_SPL_FROM_PTR_R12 xchg spl, byte ptr [r12]
#define XCHG_SPL_FROM_PTR_R13 xchg spl, byte ptr [r13]
#define XCHG_SPL_FROM_PTR_R14 xchg spl, byte ptr [r14]
#define XCHG_SPL_FROM_PTR_R15 xchg spl, byte ptr [r15]
#define XCHG_SPL_FROM_PTR_EAX xchg spl, byte ptr [eax]
#define XCHG_SPL_FROM_PTR_EBX xchg spl, byte ptr [ebx]
#define XCHG_SPL_FROM_PTR_ECX xchg spl, byte ptr [ecx]
#define XCHG_SPL_FROM_PTR_EDX xchg spl, byte ptr [edx]
#define XCHG_SPL_FROM_PTR_EDI xchg spl, byte ptr [edi]
#define XCHG_SPL_FROM_PTR_ESI xchg spl, byte ptr [esi]
#define XCHG_SPL_FROM_PTR_EBP xchg spl, byte ptr [ebp]
#define XCHG_SPL_FROM_PTR_ESP xchg spl, byte ptr [esp]

#define XCHG_R8B_FROM_PTR_RAX xchg r8b, byte ptr [rax]
#define XCHG_R8B_FROM_PTR_RBX xchg r8b, byte ptr [rbx]
#define XCHG_R8B_FROM_PTR_RCX xchg r8b, byte ptr [rcx]
#define XCHG_R8B_FROM_PTR_RDX xchg r8b, byte ptr [rdx]
#define XCHG_R8B_FROM_PTR_RDI xchg r8b, byte ptr [rdi]
#define XCHG_R8B_FROM_PTR_RSI xchg r8b, byte ptr [rsi]
#define XCHG_R8B_FROM_PTR_RBP xchg r8b, byte ptr [rbp]
#define XCHG_R8B_FROM_PTR_RSP xchg r8b, byte ptr [rsp]
#define XCHG_R8B_FROM_PTR_R8 xchg r8b, byte ptr [r8]
#define XCHG_R8B_FROM_PTR_R9 xchg r8b, byte ptr [r9]
#define XCHG_R8B_FROM_PTR_R10 xchg r8b, byte ptr [r10]
#define XCHG_R8B_FROM_PTR_R11 xchg r8b, byte ptr [r11]
#define XCHG_R8B_FROM_PTR_R12 xchg r8b, byte ptr [r12]
#define XCHG_R8B_FROM_PTR_R13 xchg r8b, byte ptr [r13]
#define XCHG_R8B_FROM_PTR_R14 xchg r8b, byte ptr [r14]
#define XCHG_R8B_FROM_PTR_R15 xchg r8b, byte ptr [r15]
#define XCHG_R8B_FROM_PTR_EAX xchg r8b, byte ptr [eax]
#define XCHG_R8B_FROM_PTR_EBX xchg r8b, byte ptr [ebx]
#define XCHG_R8B_FROM_PTR_ECX xchg r8b, byte ptr [ecx]
#define XCHG_R8B_FROM_PTR_EDX xchg r8b, byte ptr [edx]
#define XCHG_R8B_FROM_PTR_EDI xchg r8b, byte ptr [edi]
#define XCHG_R8B_FROM_PTR_ESI xchg r8b, byte ptr [esi]
#define XCHG_R8B_FROM_PTR_EBP xchg r8b, byte ptr [ebp]
#define XCHG_R8B_FROM_PTR_ESP xchg r8b, byte ptr [esp]

#define XCHG_R9B_FROM_PTR_RAX xchg r9b, byte ptr [rax]
#define XCHG_R9B_FROM_PTR_RBX xchg r9b, byte ptr [rbx]
#define XCHG_R9B_FROM_PTR_RCX xchg r9b, byte ptr [rcx]
#define XCHG_R9B_FROM_PTR_RDX xchg r9b, byte ptr [rdx]
#define XCHG_R9B_FROM_PTR_RDI xchg r9b, byte ptr [rdi]
#define XCHG_R9B_FROM_PTR_RSI xchg r9b, byte ptr [rsi]
#define XCHG_R9B_FROM_PTR_RBP xchg r9b, byte ptr [rbp]
#define XCHG_R9B_FROM_PTR_RSP xchg r9b, byte ptr [rsp]
#define XCHG_R9B_FROM_PTR_R8 xchg r9b, byte ptr [r8]
#define XCHG_R9B_FROM_PTR_R9 xchg r9b, byte ptr [r9]
#define XCHG_R9B_FROM_PTR_R10 xchg r9b, byte ptr [r10]
#define XCHG_R9B_FROM_PTR_R11 xchg r9b, byte ptr [r11]
#define XCHG_R9B_FROM_PTR_R12 xchg r9b, byte ptr [r12]
#define XCHG_R9B_FROM_PTR_R13 xchg r9b, byte ptr [r13]
#define XCHG_R9B_FROM_PTR_R14 xchg r9b, byte ptr [r14]
#define XCHG_R9B_FROM_PTR_R15 xchg r9b, byte ptr [r15]
#define XCHG_R9B_FROM_PTR_EAX xchg r9b, byte ptr [eax]
#define XCHG_R9B_FROM_PTR_EBX xchg r9b, byte ptr [ebx]
#define XCHG_R9B_FROM_PTR_ECX xchg r9b, byte ptr [ecx]
#define XCHG_R9B_FROM_PTR_EDX xchg r9b, byte ptr [edx]
#define XCHG_R9B_FROM_PTR_EDI xchg r9b, byte ptr [edi]
#define XCHG_R9B_FROM_PTR_ESI xchg r9b, byte ptr [esi]
#define XCHG_R9B_FROM_PTR_EBP xchg r9b, byte ptr [ebp]
#define XCHG_R9B_FROM_PTR_ESP xchg r9b, byte ptr [esp]

#define XCHG_R10B_FROM_PTR_RAX xchg r10b, byte ptr [rax]
#define XCHG_R10B_FROM_PTR_RBX xchg r10b, byte ptr [rbx]
#define XCHG_R10B_FROM_PTR_RCX xchg r10b, byte ptr [rcx]
#define XCHG_R10B_FROM_PTR_RDX xchg r10b, byte ptr [rdx]
#define XCHG_R10B_FROM_PTR_RDI xchg r10b, byte ptr [rdi]
#define XCHG_R10B_FROM_PTR_RSI xchg r10b, byte ptr [rsi]
#define XCHG_R10B_FROM_PTR_RBP xchg r10b, byte ptr [rbp]
#define XCHG_R10B_FROM_PTR_RSP xchg r10b, byte ptr [rsp]
#define XCHG_R10B_FROM_PTR_R8 xchg r10b, byte ptr [r8]
#define XCHG_R10B_FROM_PTR_R9 xchg r10b, byte ptr [r9]
#define XCHG_R10B_FROM_PTR_R10 xchg r10b, byte ptr [r10]
#define XCHG_R10B_FROM_PTR_R11 xchg r10b, byte ptr [r11]
#define XCHG_R10B_FROM_PTR_R12 xchg r10b, byte ptr [r12]
#define XCHG_R10B_FROM_PTR_R13 xchg r10b, byte ptr [r13]
#define XCHG_R10B_FROM_PTR_R14 xchg r10b, byte ptr [r14]
#define XCHG_R10B_FROM_PTR_R15 xchg r10b, byte ptr [r15]
#define XCHG_R10B_FROM_PTR_EAX xchg r10b, byte ptr [eax]
#define XCHG_R10B_FROM_PTR_EBX xchg r10b, byte ptr [ebx]
#define XCHG_R10B_FROM_PTR_ECX xchg r10b, byte ptr [ecx]
#define XCHG_R10B_FROM_PTR_EDX xchg r10b, byte ptr [edx]
#define XCHG_R10B_FROM_PTR_EDI xchg r10b, byte ptr [edi]
#define XCHG_R10B_FROM_PTR_ESI xchg r10b, byte ptr [esi]
#define XCHG_R10B_FROM_PTR_EBP xchg r10b, byte ptr [ebp]
#define XCHG_R10B_FROM_PTR_ESP xchg r10b, byte ptr [esp]

#define XCHG_R11B_FROM_PTR_RAX xchg r11b, byte ptr [rax]
#define XCHG_R11B_FROM_PTR_RBX xchg r11b, byte ptr [rbx]
#define XCHG_R11B_FROM_PTR_RCX xchg r11b, byte ptr [rcx]
#define XCHG_R11B_FROM_PTR_RDX xchg r11b, byte ptr [rdx]
#define XCHG_R11B_FROM_PTR_RDI xchg r11b, byte ptr [rdi]
#define XCHG_R11B_FROM_PTR_RSI xchg r11b, byte ptr [rsi]
#define XCHG_R11B_FROM_PTR_RBP xchg r11b, byte ptr [rbp]
#define XCHG_R11B_FROM_PTR_RSP xchg r11b, byte ptr [rsp]
#define XCHG_R11B_FROM_PTR_R8 xchg r11b, byte ptr [r8]
#define XCHG_R11B_FROM_PTR_R9 xchg r11b, byte ptr [r9]
#define XCHG_R11B_FROM_PTR_R10 xchg r11b, byte ptr [r10]
#define XCHG_R11B_FROM_PTR_R11 xchg r11b, byte ptr [r11]
#define XCHG_R11B_FROM_PTR_R12 xchg r11b, byte ptr [r12]
#define XCHG_R11B_FROM_PTR_R13 xchg r11b, byte ptr [r13]
#define XCHG_R11B_FROM_PTR_R14 xchg r11b, byte ptr [r14]
#define XCHG_R11B_FROM_PTR_R15 xchg r11b, byte ptr [r15]
#define XCHG_R11B_FROM_PTR_EAX xchg r11b, byte ptr [eax]
#define XCHG_R11B_FROM_PTR_EBX xchg r11b, byte ptr [ebx]
#define XCHG_R11B_FROM_PTR_ECX xchg r11b, byte ptr [ecx]
#define XCHG_R11B_FROM_PTR_EDX xchg r11b, byte ptr [edx]
#define XCHG_R11B_FROM_PTR_EDI xchg r11b, byte ptr [edi]
#define XCHG_R11B_FROM_PTR_ESI xchg r11b, byte ptr [esi]
#define XCHG_R11B_FROM_PTR_EBP xchg r11b, byte ptr [ebp]
#define XCHG_R11B_FROM_PTR_ESP xchg r11b, byte ptr [esp]

#define XCHG_R12B_FROM_PTR_RAX xchg r12b, byte ptr [rax]
#define XCHG_R12B_FROM_PTR_RBX xchg r12b, byte ptr [rbx]
#define XCHG_R12B_FROM_PTR_RCX xchg r12b, byte ptr [rcx]
#define XCHG_R12B_FROM_PTR_RDX xchg r12b, byte ptr [rdx]
#define XCHG_R12B_FROM_PTR_RDI xchg r12b, byte ptr [rdi]
#define XCHG_R12B_FROM_PTR_RSI xchg r12b, byte ptr [rsi]
#define XCHG_R12B_FROM_PTR_RBP xchg r12b, byte ptr [rbp]
#define XCHG_R12B_FROM_PTR_RSP xchg r12b, byte ptr [rsp]
#define XCHG_R12B_FROM_PTR_R8 xchg r12b, byte ptr [r8]
#define XCHG_R12B_FROM_PTR_R9 xchg r12b, byte ptr [r9]
#define XCHG_R12B_FROM_PTR_R10 xchg r12b, byte ptr [r10]
#define XCHG_R12B_FROM_PTR_R11 xchg r12b, byte ptr [r11]
#define XCHG_R12B_FROM_PTR_R12 xchg r12b, byte ptr [r12]
#define XCHG_R12B_FROM_PTR_R13 xchg r12b, byte ptr [r13]
#define XCHG_R12B_FROM_PTR_R14 xchg r12b, byte ptr [r14]
#define XCHG_R12B_FROM_PTR_R15 xchg r12b, byte ptr [r15]
#define XCHG_R12B_FROM_PTR_EAX xchg r12b, byte ptr [eax]
#define XCHG_R12B_FROM_PTR_EBX xchg r12b, byte ptr [ebx]
#define XCHG_R12B_FROM_PTR_ECX xchg r12b, byte ptr [ecx]
#define XCHG_R12B_FROM_PTR_EDX xchg r12b, byte ptr [edx]
#define XCHG_R12B_FROM_PTR_EDI xchg r12b, byte ptr [edi]
#define XCHG_R12B_FROM_PTR_ESI xchg r12b, byte ptr [esi]
#define XCHG_R12B_FROM_PTR_EBP xchg r12b, byte ptr [ebp]
#define XCHG_R12B_FROM_PTR_ESP xchg r12b, byte ptr [esp]

#define XCHG_R13B_FROM_PTR_RAX xchg r13b, byte ptr [rax]
#define XCHG_R13B_FROM_PTR_RBX xchg r13b, byte ptr [rbx]
#define XCHG_R13B_FROM_PTR_RCX xchg r13b, byte ptr [rcx]
#define XCHG_R13B_FROM_PTR_RDX xchg r13b, byte ptr [rdx]
#define XCHG_R13B_FROM_PTR_RDI xchg r13b, byte ptr [rdi]
#define XCHG_R13B_FROM_PTR_RSI xchg r13b, byte ptr [rsi]
#define XCHG_R13B_FROM_PTR_RBP xchg r13b, byte ptr [rbp]
#define XCHG_R13B_FROM_PTR_RSP xchg r13b, byte ptr [rsp]
#define XCHG_R13B_FROM_PTR_R8 xchg r13b, byte ptr [r8]
#define XCHG_R13B_FROM_PTR_R9 xchg r13b, byte ptr [r9]
#define XCHG_R13B_FROM_PTR_R10 xchg r13b, byte ptr [r10]
#define XCHG_R13B_FROM_PTR_R11 xchg r13b, byte ptr [r11]
#define XCHG_R13B_FROM_PTR_R12 xchg r13b, byte ptr [r12]
#define XCHG_R13B_FROM_PTR_R13 xchg r13b, byte ptr [r13]
#define XCHG_R13B_FROM_PTR_R14 xchg r13b, byte ptr [r14]
#define XCHG_R13B_FROM_PTR_R15 xchg r13b, byte ptr [r15]
#define XCHG_R13B_FROM_PTR_EAX xchg r13b, byte ptr [eax]
#define XCHG_R13B_FROM_PTR_EBX xchg r13b, byte ptr [ebx]
#define XCHG_R13B_FROM_PTR_ECX xchg r13b, byte ptr [ecx]
#define XCHG_R13B_FROM_PTR_EDX xchg r13b, byte ptr [edx]
#define XCHG_R13B_FROM_PTR_EDI xchg r13b, byte ptr [edi]
#define XCHG_R13B_FROM_PTR_ESI xchg r13b, byte ptr [esi]
#define XCHG_R13B_FROM_PTR_EBP xchg r13b, byte ptr [ebp]
#define XCHG_R13B_FROM_PTR_ESP xchg r13b, byte ptr [esp]

#define XCHG_R14B_FROM_PTR_RAX xchg r14b, byte ptr [rax]
#define XCHG_R14B_FROM_PTR_RBX xchg r14b, byte ptr [rbx]
#define XCHG_R14B_FROM_PTR_RCX xchg r14b, byte ptr [rcx]
#define XCHG_R14B_FROM_PTR_RDX xchg r14b, byte ptr [rdx]
#define XCHG_R14B_FROM_PTR_RDI xchg r14b, byte ptr [rdi]
#define XCHG_R14B_FROM_PTR_RSI xchg r14b, byte ptr [rsi]
#define XCHG_R14B_FROM_PTR_RBP xchg r14b, byte ptr [rbp]
#define XCHG_R14B_FROM_PTR_RSP xchg r14b, byte ptr [rsp]
#define XCHG_R14B_FROM_PTR_R8 xchg r14b, byte ptr [r8]
#define XCHG_R14B_FROM_PTR_R9 xchg r14b, byte ptr [r9]
#define XCHG_R14B_FROM_PTR_R10 xchg r14b, byte ptr [r10]
#define XCHG_R14B_FROM_PTR_R11 xchg r14b, byte ptr [r11]
#define XCHG_R14B_FROM_PTR_R12 xchg r14b, byte ptr [r12]
#define XCHG_R14B_FROM_PTR_R13 xchg r14b, byte ptr [r13]
#define XCHG_R14B_FROM_PTR_R14 xchg r14b, byte ptr [r14]
#define XCHG_R14B_FROM_PTR_R15 xchg r14b, byte ptr [r15]
#define XCHG_R14B_FROM_PTR_EAX xchg r14b, byte ptr [eax]
#define XCHG_R14B_FROM_PTR_EBX xchg r14b, byte ptr [ebx]
#define XCHG_R14B_FROM_PTR_ECX xchg r14b, byte ptr [ecx]
#define XCHG_R14B_FROM_PTR_EDX xchg r14b, byte ptr [edx]
#define XCHG_R14B_FROM_PTR_EDI xchg r14b, byte ptr [edi]
#define XCHG_R14B_FROM_PTR_ESI xchg r14b, byte ptr [esi]
#define XCHG_R14B_FROM_PTR_EBP xchg r14b, byte ptr [ebp]
#define XCHG_R14B_FROM_PTR_ESP xchg r14b, byte ptr [esp]

#define XCHG_R15B_FROM_PTR_RAX xchg r15b, byte ptr [rax]
#define XCHG_R15B_FROM_PTR_RBX xchg r15b, byte ptr [rbx]
#define XCHG_R15B_FROM_PTR_RCX xchg r15b, byte ptr [rcx]
#define XCHG_R15B_FROM_PTR_RDX xchg r15b, byte ptr [rdx]
#define XCHG_R15B_FROM_PTR_RDI xchg r15b, byte ptr [rdi]
#define XCHG_R15B_FROM_PTR_RSI xchg r15b, byte ptr [rsi]
#define XCHG_R15B_FROM_PTR_RBP xchg r15b, byte ptr [rbp]
#define XCHG_R15B_FROM_PTR_RSP xchg r15b, byte ptr [rsp]
#define XCHG_R15B_FROM_PTR_R8 xchg r15b, byte ptr [r8]
#define XCHG_R15B_FROM_PTR_R9 xchg r15b, byte ptr [r9]
#define XCHG_R15B_FROM_PTR_R10 xchg r15b, byte ptr [r10]
#define XCHG_R15B_FROM_PTR_R11 xchg r15b, byte ptr [r11]
#define XCHG_R15B_FROM_PTR_R12 xchg r15b, byte ptr [r12]
#define XCHG_R15B_FROM_PTR_R13 xchg r15b, byte ptr [r13]
#define XCHG_R15B_FROM_PTR_R14 xchg r15b, byte ptr [r14]
#define XCHG_R15B_FROM_PTR_R15 xchg r15b, byte ptr [r15]
#define XCHG_R15B_FROM_PTR_EAX xchg r15b, byte ptr [eax]
#define XCHG_R15B_FROM_PTR_EBX xchg r15b, byte ptr [ebx]
#define XCHG_R15B_FROM_PTR_ECX xchg r15b, byte ptr [ecx]
#define XCHG_R15B_FROM_PTR_EDX xchg r15b, byte ptr [edx]
#define XCHG_R15B_FROM_PTR_EDI xchg r15b, byte ptr [edi]
#define XCHG_R15B_FROM_PTR_ESI xchg r15b, byte ptr [esi]
#define XCHG_R15B_FROM_PTR_EBP xchg r15b, byte ptr [ebp]
#define XCHG_R15B_FROM_PTR_ESP xchg r15b, byte ptr [esp]

#define XCHG_AL_TO_PTR_RAX xchg byte ptr [rax], al
#define XCHG_AL_TO_PTR_RBX xchg byte ptr [rbx], al
#define XCHG_AL_TO_PTR_RCX xchg byte ptr [rcx], al
#define XCHG_AL_TO_PTR_RDX xchg byte ptr [rdx], al
#define XCHG_AL_TO_PTR_RDI xchg byte ptr [rdi], al
#define XCHG_AL_TO_PTR_RSI xchg byte ptr [rsi], al
#define XCHG_AL_TO_PTR_RBP xchg byte ptr [rbp], al
#define XCHG_AL_TO_PTR_RSP xchg byte ptr [rsp], al
#define XCHG_AL_TO_PTR_R8 xchg byte ptr [r8], al
#define XCHG_AL_TO_PTR_R9 xchg byte ptr [r9], al
#define XCHG_AL_TO_PTR_R10 xchg byte ptr [r10], al
#define XCHG_AL_TO_PTR_R11 xchg byte ptr [r11], al
#define XCHG_AL_TO_PTR_R12 xchg byte ptr [r12], al
#define XCHG_AL_TO_PTR_R13 xchg byte ptr [r13], al
#define XCHG_AL_TO_PTR_R14 xchg byte ptr [r14], al
#define XCHG_AL_TO_PTR_R15 xchg byte ptr [r15], al
#define XCHG_AL_TO_PTR_EAX xchg byte ptr [eax], al
#define XCHG_AL_TO_PTR_EBX xchg byte ptr [ebx], al
#define XCHG_AL_TO_PTR_ECX xchg byte ptr [ecx], al
#define XCHG_AL_TO_PTR_EDX xchg byte ptr [edx], al
#define XCHG_AL_TO_PTR_EDI xchg byte ptr [edi], al
#define XCHG_AL_TO_PTR_ESI xchg byte ptr [esi], al
#define XCHG_AL_TO_PTR_EBP xchg byte ptr [ebp], al
#define XCHG_AL_TO_PTR_ESP xchg byte ptr [esp], al

#define XCHG_BL_TO_PTR_RAX xchg byte ptr [rax], bl
#define XCHG_BL_TO_PTR_RBX xchg byte ptr [rbx], bl
#define XCHG_BL_TO_PTR_RCX xchg byte ptr [rcx], bl
#define XCHG_BL_TO_PTR_RDX xchg byte ptr [rdx], bl
#define XCHG_BL_TO_PTR_RDI xchg byte ptr [rdi], bl
#define XCHG_BL_TO_PTR_RSI xchg byte ptr [rsi], bl
#define XCHG_BL_TO_PTR_RBP xchg byte ptr [rbp], bl
#define XCHG_BL_TO_PTR_RSP xchg byte ptr [rsp], bl
#define XCHG_BL_TO_PTR_R8 xchg byte ptr [r8], bl
#define XCHG_BL_TO_PTR_R9 xchg byte ptr [r9], bl
#define XCHG_BL_TO_PTR_R10 xchg byte ptr [r10], bl
#define XCHG_BL_TO_PTR_R11 xchg byte ptr [r11], bl
#define XCHG_BL_TO_PTR_R12 xchg byte ptr [r12], bl
#define XCHG_BL_TO_PTR_R13 xchg byte ptr [r13], bl
#define XCHG_BL_TO_PTR_R14 xchg byte ptr [r14], bl
#define XCHG_BL_TO_PTR_R15 xchg byte ptr [r15], bl
#define XCHG_BL_TO_PTR_EAX xchg byte ptr [eax], bl
#define XCHG_BL_TO_PTR_EBX xchg byte ptr [ebx], bl
#define XCHG_BL_TO_PTR_ECX xchg byte ptr [ecx], bl
#define XCHG_BL_TO_PTR_EDX xchg byte ptr [edx], bl
#define XCHG_BL_TO_PTR_EDI xchg byte ptr [edi], bl
#define XCHG_BL_TO_PTR_ESI xchg byte ptr [esi], bl
#define XCHG_BL_TO_PTR_EBP xchg byte ptr [ebp], bl
#define XCHG_BL_TO_PTR_ESP xchg byte ptr [esp], bl

#define XCHG_CL_TO_PTR_RAX xchg byte ptr [rax], cl
#define XCHG_CL_TO_PTR_RBX xchg byte ptr [rbx], cl
#define XCHG_CL_TO_PTR_RCX xchg byte ptr [rcx], cl
#define XCHG_CL_TO_PTR_RDX xchg byte ptr [rdx], cl
#define XCHG_CL_TO_PTR_RDI xchg byte ptr [rdi], cl
#define XCHG_CL_TO_PTR_RSI xchg byte ptr [rsi], cl
#define XCHG_CL_TO_PTR_RBP xchg byte ptr [rbp], cl
#define XCHG_CL_TO_PTR_RSP xchg byte ptr [rsp], cl
#define XCHG_CL_TO_PTR_R8 xchg byte ptr [r8], cl
#define XCHG_CL_TO_PTR_R9 xchg byte ptr [r9], cl
#define XCHG_CL_TO_PTR_R10 xchg byte ptr [r10], cl
#define XCHG_CL_TO_PTR_R11 xchg byte ptr [r11], cl
#define XCHG_CL_TO_PTR_R12 xchg byte ptr [r12], cl
#define XCHG_CL_TO_PTR_R13 xchg byte ptr [r13], cl
#define XCHG_CL_TO_PTR_R14 xchg byte ptr [r14], cl
#define XCHG_CL_TO_PTR_R15 xchg byte ptr [r15], cl
#define XCHG_CL_TO_PTR_EAX xchg byte ptr [eax], cl
#define XCHG_CL_TO_PTR_EBX xchg byte ptr [ebx], cl
#define XCHG_CL_TO_PTR_ECX xchg byte ptr [ecx], cl
#define XCHG_CL_TO_PTR_EDX xchg byte ptr [edx], cl
#define XCHG_CL_TO_PTR_EDI xchg byte ptr [edi], cl
#define XCHG_CL_TO_PTR_ESI xchg byte ptr [esi], cl
#define XCHG_CL_TO_PTR_EBP xchg byte ptr [ebp], cl
#define XCHG_CL_TO_PTR_ESP xchg byte ptr [esp], cl

#define XCHG_DL_TO_PTR_RAX xchg byte ptr [rax], dl
#define XCHG_DL_TO_PTR_RBX xchg byte ptr [rbx], dl
#define XCHG_DL_TO_PTR_RCX xchg byte ptr [rcx], dl
#define XCHG_DL_TO_PTR_RDX xchg byte ptr [rdx], dl
#define XCHG_DL_TO_PTR_RDI xchg byte ptr [rdi], dl
#define XCHG_DL_TO_PTR_RSI xchg byte ptr [rsi], dl
#define XCHG_DL_TO_PTR_RBP xchg byte ptr [rbp], dl
#define XCHG_DL_TO_PTR_RSP xchg byte ptr [rsp], dl
#define XCHG_DL_TO_PTR_R8 xchg byte ptr [r8], dl
#define XCHG_DL_TO_PTR_R9 xchg byte ptr [r9], dl
#define XCHG_DL_TO_PTR_R10 xchg byte ptr [r10], dl
#define XCHG_DL_TO_PTR_R11 xchg byte ptr [r11], dl
#define XCHG_DL_TO_PTR_R12 xchg byte ptr [r12], dl
#define XCHG_DL_TO_PTR_R13 xchg byte ptr [r13], dl
#define XCHG_DL_TO_PTR_R14 xchg byte ptr [r14], dl
#define XCHG_DL_TO_PTR_R15 xchg byte ptr [r15], dl
#define XCHG_DL_TO_PTR_EAX xchg byte ptr [eax], dl
#define XCHG_DL_TO_PTR_EBX xchg byte ptr [ebx], dl
#define XCHG_DL_TO_PTR_ECX xchg byte ptr [ecx], dl
#define XCHG_DL_TO_PTR_EDX xchg byte ptr [edx], dl
#define XCHG_DL_TO_PTR_EDI xchg byte ptr [edi], dl
#define XCHG_DL_TO_PTR_ESI xchg byte ptr [esi], dl
#define XCHG_DL_TO_PTR_EBP xchg byte ptr [ebp], dl
#define XCHG_DL_TO_PTR_ESP xchg byte ptr [esp], dl

#define XCHG_DIL_TO_PTR_RAX xchg byte ptr [rax], dil
#define XCHG_DIL_TO_PTR_RBX xchg byte ptr [rbx], dil
#define XCHG_DIL_TO_PTR_RCX xchg byte ptr [rcx], dil
#define XCHG_DIL_TO_PTR_RDX xchg byte ptr [rdx], dil
#define XCHG_DIL_TO_PTR_RDI xchg byte ptr [rdi], dil
#define XCHG_DIL_TO_PTR_RSI xchg byte ptr [rsi], dil
#define XCHG_DIL_TO_PTR_RBP xchg byte ptr [rbp], dil
#define XCHG_DIL_TO_PTR_RSP xchg byte ptr [rsp], dil
#define XCHG_DIL_TO_PTR_R8 xchg byte ptr [r8], dil
#define XCHG_DIL_TO_PTR_R9 xchg byte ptr [r9], dil
#define XCHG_DIL_TO_PTR_R10 xchg byte ptr [r10], dil
#define XCHG_DIL_TO_PTR_R11 xchg byte ptr [r11], dil
#define XCHG_DIL_TO_PTR_R12 xchg byte ptr [r12], dil
#define XCHG_DIL_TO_PTR_R13 xchg byte ptr [r13], dil
#define XCHG_DIL_TO_PTR_R14 xchg byte ptr [r14], dil
#define XCHG_DIL_TO_PTR_R15 xchg byte ptr [r15], dil
#define XCHG_DIL_TO_PTR_EAX xchg byte ptr [eax], dil
#define XCHG_DIL_TO_PTR_EBX xchg byte ptr [ebx], dil
#define XCHG_DIL_TO_PTR_ECX xchg byte ptr [ecx], dil
#define XCHG_DIL_TO_PTR_EDX xchg byte ptr [edx], dil
#define XCHG_DIL_TO_PTR_EDI xchg byte ptr [edi], dil
#define XCHG_DIL_TO_PTR_ESI xchg byte ptr [esi], dil
#define XCHG_DIL_TO_PTR_EBP xchg byte ptr [ebp], dil
#define XCHG_DIL_TO_PTR_ESP xchg byte ptr [esp], dil

#define XCHG_SIL_TO_PTR_RAX xchg byte ptr [rax], sil
#define XCHG_SIL_TO_PTR_RBX xchg byte ptr [rbx], sil
#define XCHG_SIL_TO_PTR_RCX xchg byte ptr [rcx], sil
#define XCHG_SIL_TO_PTR_RDX xchg byte ptr [rdx], sil
#define XCHG_SIL_TO_PTR_RDI xchg byte ptr [rdi], sil
#define XCHG_SIL_TO_PTR_RSI xchg byte ptr [rsi], sil
#define XCHG_SIL_TO_PTR_RBP xchg byte ptr [rbp], sil
#define XCHG_SIL_TO_PTR_RSP xchg byte ptr [rsp], sil
#define XCHG_SIL_TO_PTR_R8 xchg byte ptr [r8], sil
#define XCHG_SIL_TO_PTR_R9 xchg byte ptr [r9], sil
#define XCHG_SIL_TO_PTR_R10 xchg byte ptr [r10], sil
#define XCHG_SIL_TO_PTR_R11 xchg byte ptr [r11], sil
#define XCHG_SIL_TO_PTR_R12 xchg byte ptr [r12], sil
#define XCHG_SIL_TO_PTR_R13 xchg byte ptr [r13], sil
#define XCHG_SIL_TO_PTR_R14 xchg byte ptr [r14], sil
#define XCHG_SIL_TO_PTR_R15 xchg byte ptr [r15], sil
#define XCHG_SIL_TO_PTR_EAX xchg byte ptr [eax], sil
#define XCHG_SIL_TO_PTR_EBX xchg byte ptr [ebx], sil
#define XCHG_SIL_TO_PTR_ECX xchg byte ptr [ecx], sil
#define XCHG_SIL_TO_PTR_EDX xchg byte ptr [edx], sil
#define XCHG_SIL_TO_PTR_EDI xchg byte ptr [edi], sil
#define XCHG_SIL_TO_PTR_ESI xchg byte ptr [esi], sil
#define XCHG_SIL_TO_PTR_EBP xchg byte ptr [ebp], sil
#define XCHG_SIL_TO_PTR_ESP xchg byte ptr [esp], sil

#define XCHG_BPL_TO_PTR_RAX xchg byte ptr [rax], bpl
#define XCHG_BPL_TO_PTR_RBX xchg byte ptr [rbx], bpl
#define XCHG_BPL_TO_PTR_RCX xchg byte ptr [rcx], bpl
#define XCHG_BPL_TO_PTR_RDX xchg byte ptr [rdx], bpl
#define XCHG_BPL_TO_PTR_RDI xchg byte ptr [rdi], bpl
#define XCHG_BPL_TO_PTR_RSI xchg byte ptr [rsi], bpl
#define XCHG_BPL_TO_PTR_RBP xchg byte ptr [rbp], bpl
#define XCHG_BPL_TO_PTR_RSP xchg byte ptr [rsp], bpl
#define XCHG_BPL_TO_PTR_R8 xchg byte ptr [r8], bpl
#define XCHG_BPL_TO_PTR_R9 xchg byte ptr [r9], bpl
#define XCHG_BPL_TO_PTR_R10 xchg byte ptr [r10], bpl
#define XCHG_BPL_TO_PTR_R11 xchg byte ptr [r11], bpl
#define XCHG_BPL_TO_PTR_R12 xchg byte ptr [r12], bpl
#define XCHG_BPL_TO_PTR_R13 xchg byte ptr [r13], bpl
#define XCHG_BPL_TO_PTR_R14 xchg byte ptr [r14], bpl
#define XCHG_BPL_TO_PTR_R15 xchg byte ptr [r15], bpl
#define XCHG_BPL_TO_PTR_EAX xchg byte ptr [eax], bpl
#define XCHG_BPL_TO_PTR_EBX xchg byte ptr [ebx], bpl
#define XCHG_BPL_TO_PTR_ECX xchg byte ptr [ecx], bpl
#define XCHG_BPL_TO_PTR_EDX xchg byte ptr [edx], bpl
#define XCHG_BPL_TO_PTR_EDI xchg byte ptr [edi], bpl
#define XCHG_BPL_TO_PTR_ESI xchg byte ptr [esi], bpl
#define XCHG_BPL_TO_PTR_EBP xchg byte ptr [ebp], bpl
#define XCHG_BPL_TO_PTR_ESP xchg byte ptr [esp], bpl

#define XCHG_SPL_TO_PTR_RAX xchg byte ptr [rax], spl
#define XCHG_SPL_TO_PTR_RBX xchg byte ptr [rbx], spl
#define XCHG_SPL_TO_PTR_RCX xchg byte ptr [rcx], spl
#define XCHG_SPL_TO_PTR_RDX xchg byte ptr [rdx], spl
#define XCHG_SPL_TO_PTR_RDI xchg byte ptr [rdi], spl
#define XCHG_SPL_TO_PTR_RSI xchg byte ptr [rsi], spl
#define XCHG_SPL_TO_PTR_RBP xchg byte ptr [rbp], spl
#define XCHG_SPL_TO_PTR_RSP xchg byte ptr [rsp], spl
#define XCHG_SPL_TO_PTR_R8 xchg byte ptr [r8], spl
#define XCHG_SPL_TO_PTR_R9 xchg byte ptr [r9], spl
#define XCHG_SPL_TO_PTR_R10 xchg byte ptr [r10], spl
#define XCHG_SPL_TO_PTR_R11 xchg byte ptr [r11], spl
#define XCHG_SPL_TO_PTR_R12 xchg byte ptr [r12], spl
#define XCHG_SPL_TO_PTR_R13 xchg byte ptr [r13], spl
#define XCHG_SPL_TO_PTR_R14 xchg byte ptr [r14], spl
#define XCHG_SPL_TO_PTR_R15 xchg byte ptr [r15], spl
#define XCHG_SPL_TO_PTR_EAX xchg byte ptr [eax], spl
#define XCHG_SPL_TO_PTR_EBX xchg byte ptr [ebx], spl
#define XCHG_SPL_TO_PTR_ECX xchg byte ptr [ecx], spl
#define XCHG_SPL_TO_PTR_EDX xchg byte ptr [edx], spl
#define XCHG_SPL_TO_PTR_EDI xchg byte ptr [edi], spl
#define XCHG_SPL_TO_PTR_ESI xchg byte ptr [esi], spl
#define XCHG_SPL_TO_PTR_EBP xchg byte ptr [ebp], spl
#define XCHG_SPL_TO_PTR_ESP xchg byte ptr [esp], spl

#define XCHG_R8B_TO_PTR_RAX xchg byte ptr [rax], r8b
#define XCHG_R8B_TO_PTR_RBX xchg byte ptr [rbx], r8b
#define XCHG_R8B_TO_PTR_RCX xchg byte ptr [rcx], r8b
#define XCHG_R8B_TO_PTR_RDX xchg byte ptr [rdx], r8b
#define XCHG_R8B_TO_PTR_RDI xchg byte ptr [rdi], r8b
#define XCHG_R8B_TO_PTR_RSI xchg byte ptr [rsi], r8b
#define XCHG_R8B_TO_PTR_RBP xchg byte ptr [rbp], r8b
#define XCHG_R8B_TO_PTR_RSP xchg byte ptr [rsp], r8b
#define XCHG_R8B_TO_PTR_R8 xchg byte ptr [r8], r8b
#define XCHG_R8B_TO_PTR_R9 xchg byte ptr [r9], r8b
#define XCHG_R8B_TO_PTR_R10 xchg byte ptr [r10], r8b
#define XCHG_R8B_TO_PTR_R11 xchg byte ptr [r11], r8b
#define XCHG_R8B_TO_PTR_R12 xchg byte ptr [r12], r8b
#define XCHG_R8B_TO_PTR_R13 xchg byte ptr [r13], r8b
#define XCHG_R8B_TO_PTR_R14 xchg byte ptr [r14], r8b
#define XCHG_R8B_TO_PTR_R15 xchg byte ptr [r15], r8b
#define XCHG_R8B_TO_PTR_EAX xchg byte ptr [eax], r8b
#define XCHG_R8B_TO_PTR_EBX xchg byte ptr [ebx], r8b
#define XCHG_R8B_TO_PTR_ECX xchg byte ptr [ecx], r8b
#define XCHG_R8B_TO_PTR_EDX xchg byte ptr [edx], r8b
#define XCHG_R8B_TO_PTR_EDI xchg byte ptr [edi], r8b
#define XCHG_R8B_TO_PTR_ESI xchg byte ptr [esi], r8b
#define XCHG_R8B_TO_PTR_EBP xchg byte ptr [ebp], r8b
#define XCHG_R8B_TO_PTR_ESP xchg byte ptr [esp], r8b

#define XCHG_R9B_TO_PTR_RAX xchg byte ptr [rax], r9b
#define XCHG_R9B_TO_PTR_RBX xchg byte ptr [rbx], r9b
#define XCHG_R9B_TO_PTR_RCX xchg byte ptr [rcx], r9b
#define XCHG_R9B_TO_PTR_RDX xchg byte ptr [rdx], r9b
#define XCHG_R9B_TO_PTR_RDI xchg byte ptr [rdi], r9b
#define XCHG_R9B_TO_PTR_RSI xchg byte ptr [rsi], r9b
#define XCHG_R9B_TO_PTR_RBP xchg byte ptr [rbp], r9b
#define XCHG_R9B_TO_PTR_RSP xchg byte ptr [rsp], r9b
#define XCHG_R9B_TO_PTR_R8 xchg byte ptr [r8], r9b
#define XCHG_R9B_TO_PTR_R9 xchg byte ptr [r9], r9b
#define XCHG_R9B_TO_PTR_R10 xchg byte ptr [r10], r9b
#define XCHG_R9B_TO_PTR_R11 xchg byte ptr [r11], r9b
#define XCHG_R9B_TO_PTR_R12 xchg byte ptr [r12], r9b
#define XCHG_R9B_TO_PTR_R13 xchg byte ptr [r13], r9b
#define XCHG_R9B_TO_PTR_R14 xchg byte ptr [r14], r9b
#define XCHG_R9B_TO_PTR_R15 xchg byte ptr [r15], r9b
#define XCHG_R9B_TO_PTR_EAX xchg byte ptr [eax], r9b
#define XCHG_R9B_TO_PTR_EBX xchg byte ptr [ebx], r9b
#define XCHG_R9B_TO_PTR_ECX xchg byte ptr [ecx], r9b
#define XCHG_R9B_TO_PTR_EDX xchg byte ptr [edx], r9b
#define XCHG_R9B_TO_PTR_EDI xchg byte ptr [edi], r9b
#define XCHG_R9B_TO_PTR_ESI xchg byte ptr [esi], r9b
#define XCHG_R9B_TO_PTR_EBP xchg byte ptr [ebp], r9b
#define XCHG_R9B_TO_PTR_ESP xchg byte ptr [esp], r9b

#define XCHG_R10B_TO_PTR_RAX xchg byte ptr [rax], r10b
#define XCHG_R10B_TO_PTR_RBX xchg byte ptr [rbx], r10b
#define XCHG_R10B_TO_PTR_RCX xchg byte ptr [rcx], r10b
#define XCHG_R10B_TO_PTR_RDX xchg byte ptr [rdx], r10b
#define XCHG_R10B_TO_PTR_RDI xchg byte ptr [rdi], r10b
#define XCHG_R10B_TO_PTR_RSI xchg byte ptr [rsi], r10b
#define XCHG_R10B_TO_PTR_RBP xchg byte ptr [rbp], r10b
#define XCHG_R10B_TO_PTR_RSP xchg byte ptr [rsp], r10b
#define XCHG_R10B_TO_PTR_R8 xchg byte ptr [r8], r10b
#define XCHG_R10B_TO_PTR_R9 xchg byte ptr [r9], r10b
#define XCHG_R10B_TO_PTR_R10 xchg byte ptr [r10], r10b
#define XCHG_R10B_TO_PTR_R11 xchg byte ptr [r11], r10b
#define XCHG_R10B_TO_PTR_R12 xchg byte ptr [r12], r10b
#define XCHG_R10B_TO_PTR_R13 xchg byte ptr [r13], r10b
#define XCHG_R10B_TO_PTR_R14 xchg byte ptr [r14], r10b
#define XCHG_R10B_TO_PTR_R15 xchg byte ptr [r15], r10b
#define XCHG_R10B_TO_PTR_EAX xchg byte ptr [eax], r10b
#define XCHG_R10B_TO_PTR_EBX xchg byte ptr [ebx], r10b
#define XCHG_R10B_TO_PTR_ECX xchg byte ptr [ecx], r10b
#define XCHG_R10B_TO_PTR_EDX xchg byte ptr [edx], r10b
#define XCHG_R10B_TO_PTR_EDI xchg byte ptr [edi], r10b
#define XCHG_R10B_TO_PTR_ESI xchg byte ptr [esi], r10b
#define XCHG_R10B_TO_PTR_EBP xchg byte ptr [ebp], r10b
#define XCHG_R10B_TO_PTR_ESP xchg byte ptr [esp], r10b

#define XCHG_R11B_TO_PTR_RAX xchg byte ptr [rax], r11b
#define XCHG_R11B_TO_PTR_RBX xchg byte ptr [rbx], r11b
#define XCHG_R11B_TO_PTR_RCX xchg byte ptr [rcx], r11b
#define XCHG_R11B_TO_PTR_RDX xchg byte ptr [rdx], r11b
#define XCHG_R11B_TO_PTR_RDI xchg byte ptr [rdi], r11b
#define XCHG_R11B_TO_PTR_RSI xchg byte ptr [rsi], r11b
#define XCHG_R11B_TO_PTR_RBP xchg byte ptr [rbp], r11b
#define XCHG_R11B_TO_PTR_RSP xchg byte ptr [rsp], r11b
#define XCHG_R11B_TO_PTR_R8 xchg byte ptr [r8], r11b
#define XCHG_R11B_TO_PTR_R9 xchg byte ptr [r9], r11b
#define XCHG_R11B_TO_PTR_R10 xchg byte ptr [r10], r11b
#define XCHG_R11B_TO_PTR_R11 xchg byte ptr [r11], r11b
#define XCHG_R11B_TO_PTR_R12 xchg byte ptr [r12], r11b
#define XCHG_R11B_TO_PTR_R13 xchg byte ptr [r13], r11b
#define XCHG_R11B_TO_PTR_R14 xchg byte ptr [r14], r11b
#define XCHG_R11B_TO_PTR_R15 xchg byte ptr [r15], r11b
#define XCHG_R11B_TO_PTR_EAX xchg byte ptr [eax], r11b
#define XCHG_R11B_TO_PTR_EBX xchg byte ptr [ebx], r11b
#define XCHG_R11B_TO_PTR_ECX xchg byte ptr [ecx], r11b
#define XCHG_R11B_TO_PTR_EDX xchg byte ptr [edx], r11b
#define XCHG_R11B_TO_PTR_EDI xchg byte ptr [edi], r11b
#define XCHG_R11B_TO_PTR_ESI xchg byte ptr [esi], r11b
#define XCHG_R11B_TO_PTR_EBP xchg byte ptr [ebp], r11b
#define XCHG_R11B_TO_PTR_ESP xchg byte ptr [esp], r11b

#define XCHG_R12B_TO_PTR_RAX xchg byte ptr [rax], r12b
#define XCHG_R12B_TO_PTR_RBX xchg byte ptr [rbx], r12b
#define XCHG_R12B_TO_PTR_RCX xchg byte ptr [rcx], r12b
#define XCHG_R12B_TO_PTR_RDX xchg byte ptr [rdx], r12b
#define XCHG_R12B_TO_PTR_RDI xchg byte ptr [rdi], r12b
#define XCHG_R12B_TO_PTR_RSI xchg byte ptr [rsi], r12b
#define XCHG_R12B_TO_PTR_RBP xchg byte ptr [rbp], r12b
#define XCHG_R12B_TO_PTR_RSP xchg byte ptr [rsp], r12b
#define XCHG_R12B_TO_PTR_R8 xchg byte ptr [r8], r12b
#define XCHG_R12B_TO_PTR_R9 xchg byte ptr [r9], r12b
#define XCHG_R12B_TO_PTR_R10 xchg byte ptr [r10], r12b
#define XCHG_R12B_TO_PTR_R11 xchg byte ptr [r11], r12b
#define XCHG_R12B_TO_PTR_R12 xchg byte ptr [r12], r12b
#define XCHG_R12B_TO_PTR_R13 xchg byte ptr [r13], r12b
#define XCHG_R12B_TO_PTR_R14 xchg byte ptr [r14], r12b
#define XCHG_R12B_TO_PTR_R15 xchg byte ptr [r15], r12b
#define XCHG_R12B_TO_PTR_EAX xchg byte ptr [eax], r12b
#define XCHG_R12B_TO_PTR_EBX xchg byte ptr [ebx], r12b
#define XCHG_R12B_TO_PTR_ECX xchg byte ptr [ecx], r12b
#define XCHG_R12B_TO_PTR_EDX xchg byte ptr [edx], r12b
#define XCHG_R12B_TO_PTR_EDI xchg byte ptr [edi], r12b
#define XCHG_R12B_TO_PTR_ESI xchg byte ptr [esi], r12b
#define XCHG_R12B_TO_PTR_EBP xchg byte ptr [ebp], r12b
#define XCHG_R12B_TO_PTR_ESP xchg byte ptr [esp], r12b

#define XCHG_R13B_TO_PTR_RAX xchg byte ptr [rax], r13b
#define XCHG_R13B_TO_PTR_RBX xchg byte ptr [rbx], r13b
#define XCHG_R13B_TO_PTR_RCX xchg byte ptr [rcx], r13b
#define XCHG_R13B_TO_PTR_RDX xchg byte ptr [rdx], r13b
#define XCHG_R13B_TO_PTR_RDI xchg byte ptr [rdi], r13b
#define XCHG_R13B_TO_PTR_RSI xchg byte ptr [rsi], r13b
#define XCHG_R13B_TO_PTR_RBP xchg byte ptr [rbp], r13b
#define XCHG_R13B_TO_PTR_RSP xchg byte ptr [rsp], r13b
#define XCHG_R13B_TO_PTR_R8 xchg byte ptr [r8], r13b
#define XCHG_R13B_TO_PTR_R9 xchg byte ptr [r9], r13b
#define XCHG_R13B_TO_PTR_R10 xchg byte ptr [r10], r13b
#define XCHG_R13B_TO_PTR_R11 xchg byte ptr [r11], r13b
#define XCHG_R13B_TO_PTR_R12 xchg byte ptr [r12], r13b
#define XCHG_R13B_TO_PTR_R13 xchg byte ptr [r13], r13b
#define XCHG_R13B_TO_PTR_R14 xchg byte ptr [r14], r13b
#define XCHG_R13B_TO_PTR_R15 xchg byte ptr [r15], r13b
#define XCHG_R13B_TO_PTR_EAX xchg byte ptr [eax], r13b
#define XCHG_R13B_TO_PTR_EBX xchg byte ptr [ebx], r13b
#define XCHG_R13B_TO_PTR_ECX xchg byte ptr [ecx], r13b
#define XCHG_R13B_TO_PTR_EDX xchg byte ptr [edx], r13b
#define XCHG_R13B_TO_PTR_EDI xchg byte ptr [edi], r13b
#define XCHG_R13B_TO_PTR_ESI xchg byte ptr [esi], r13b
#define XCHG_R13B_TO_PTR_EBP xchg byte ptr [ebp], r13b
#define XCHG_R13B_TO_PTR_ESP xchg byte ptr [esp], r13b

#define XCHG_R14B_TO_PTR_RAX xchg byte ptr [rax], r14b
#define XCHG_R14B_TO_PTR_RBX xchg byte ptr [rbx], r14b
#define XCHG_R14B_TO_PTR_RCX xchg byte ptr [rcx], r14b
#define XCHG_R14B_TO_PTR_RDX xchg byte ptr [rdx], r14b
#define XCHG_R14B_TO_PTR_RDI xchg byte ptr [rdi], r14b
#define XCHG_R14B_TO_PTR_RSI xchg byte ptr [rsi], r14b
#define XCHG_R14B_TO_PTR_RBP xchg byte ptr [rbp], r14b
#define XCHG_R14B_TO_PTR_RSP xchg byte ptr [rsp], r14b
#define XCHG_R14B_TO_PTR_R8 xchg byte ptr [r8], r14b
#define XCHG_R14B_TO_PTR_R9 xchg byte ptr [r9], r14b
#define XCHG_R14B_TO_PTR_R10 xchg byte ptr [r10], r14b
#define XCHG_R14B_TO_PTR_R11 xchg byte ptr [r11], r14b
#define XCHG_R14B_TO_PTR_R12 xchg byte ptr [r12], r14b
#define XCHG_R14B_TO_PTR_R13 xchg byte ptr [r13], r14b
#define XCHG_R14B_TO_PTR_R14 xchg byte ptr [r14], r14b
#define XCHG_R14B_TO_PTR_R15 xchg byte ptr [r15], r14b
#define XCHG_R14B_TO_PTR_EAX xchg byte ptr [eax], r14b
#define XCHG_R14B_TO_PTR_EBX xchg byte ptr [ebx], r14b
#define XCHG_R14B_TO_PTR_ECX xchg byte ptr [ecx], r14b
#define XCHG_R14B_TO_PTR_EDX xchg byte ptr [edx], r14b
#define XCHG_R14B_TO_PTR_EDI xchg byte ptr [edi], r14b
#define XCHG_R14B_TO_PTR_ESI xchg byte ptr [esi], r14b
#define XCHG_R14B_TO_PTR_EBP xchg byte ptr [ebp], r14b
#define XCHG_R14B_TO_PTR_ESP xchg byte ptr [esp], r14b

#define XCHG_R15B_TO_PTR_RAX xchg byte ptr [rax], r15b
#define XCHG_R15B_TO_PTR_RBX xchg byte ptr [rbx], r15b
#define XCHG_R15B_TO_PTR_RCX xchg byte ptr [rcx], r15b
#define XCHG_R15B_TO_PTR_RDX xchg byte ptr [rdx], r15b
#define XCHG_R15B_TO_PTR_RDI xchg byte ptr [rdi], r15b
#define XCHG_R15B_TO_PTR_RSI xchg byte ptr [rsi], r15b
#define XCHG_R15B_TO_PTR_RBP xchg byte ptr [rbp], r15b
#define XCHG_R15B_TO_PTR_RSP xchg byte ptr [rsp], r15b
#define XCHG_R15B_TO_PTR_R8 xchg byte ptr [r8], r15b
#define XCHG_R15B_TO_PTR_R9 xchg byte ptr [r9], r15b
#define XCHG_R15B_TO_PTR_R10 xchg byte ptr [r10], r15b
#define XCHG_R15B_TO_PTR_R11 xchg byte ptr [r11], r15b
#define XCHG_R15B_TO_PTR_R12 xchg byte ptr [r12], r15b
#define XCHG_R15B_TO_PTR_R13 xchg byte ptr [r13], r15b
#define XCHG_R15B_TO_PTR_R14 xchg byte ptr [r14], r15b
#define XCHG_R15B_TO_PTR_R15 xchg byte ptr [r15], r15b
#define XCHG_R15B_TO_PTR_EAX xchg byte ptr [eax], r15b
#define XCHG_R15B_TO_PTR_EBX xchg byte ptr [ebx], r15b
#define XCHG_R15B_TO_PTR_ECX xchg byte ptr [ecx], r15b
#define XCHG_R15B_TO_PTR_EDX xchg byte ptr [edx], r15b
#define XCHG_R15B_TO_PTR_EDI xchg byte ptr [edi], r15b
#define XCHG_R15B_TO_PTR_ESI xchg byte ptr [esi], r15b
#define XCHG_R15B_TO_PTR_EBP xchg byte ptr [ebp], r15b
#define XCHG_R15B_TO_PTR_ESP xchg byte ptr [esp], r15b

#define XCHG_AL_FROM_PTR_RAX_(VALUE) xchg al, byte ptr [rax + VALUE]
#define XCHG_AL_FROM_PTR_RBX_(VALUE) xchg al, byte ptr [rbx + VALUE]
#define XCHG_AL_FROM_PTR_RCX_(VALUE) xchg al, byte ptr [rcx + VALUE]
#define XCHG_AL_FROM_PTR_RDX_(VALUE) xchg al, byte ptr [rdx + VALUE]
#define XCHG_AL_FROM_PTR_RDI_(VALUE) xchg al, byte ptr [rdi + VALUE]
#define XCHG_AL_FROM_PTR_RSI_(VALUE) xchg al, byte ptr [rsi + VALUE]
#define XCHG_AL_FROM_PTR_RBP_(VALUE) xchg al, byte ptr [rbp + VALUE]
#define XCHG_AL_FROM_PTR_RSP_(VALUE) xchg al, byte ptr [rsp + VALUE]
#define XCHG_AL_FROM_PTR_R8_(VALUE) xchg al, byte ptr [r8 + VALUE]
#define XCHG_AL_FROM_PTR_R9_(VALUE) xchg al, byte ptr [r9 + VALUE]
#define XCHG_AL_FROM_PTR_R10_(VALUE) xchg al, byte ptr [r10 + VALUE]
#define XCHG_AL_FROM_PTR_R11_(VALUE) xchg al, byte ptr [r11 + VALUE]
#define XCHG_AL_FROM_PTR_R12_(VALUE) xchg al, byte ptr [r12 + VALUE]
#define XCHG_AL_FROM_PTR_R13_(VALUE) xchg al, byte ptr [r13 + VALUE]
#define XCHG_AL_FROM_PTR_R14_(VALUE) xchg al, byte ptr [r14 + VALUE]
#define XCHG_AL_FROM_PTR_R15_(VALUE) xchg al, byte ptr [r15 + VALUE]
#define XCHG_AL_FROM_PTR_EAX_(VALUE) xchg al, byte ptr [eax + VALUE]
#define XCHG_AL_FROM_PTR_EBX_(VALUE) xchg al, byte ptr [ebx + VALUE]
#define XCHG_AL_FROM_PTR_ECX_(VALUE) xchg al, byte ptr [ecx + VALUE]
#define XCHG_AL_FROM_PTR_EDX_(VALUE) xchg al, byte ptr [edx + VALUE]
#define XCHG_AL_FROM_PTR_EDI_(VALUE) xchg al, byte ptr [edi + VALUE]
#define XCHG_AL_FROM_PTR_ESI_(VALUE) xchg al, byte ptr [esi + VALUE]
#define XCHG_AL_FROM_PTR_EBP_(VALUE) xchg al, byte ptr [ebp + VALUE]
#define XCHG_AL_FROM_PTR_ESP_(VALUE) xchg al, byte ptr [esp + VALUE]

#define XCHG_BL_FROM_PTR_RAX_(VALUE) xchg bl, byte ptr [rax + VALUE]
#define XCHG_BL_FROM_PTR_RBX_(VALUE) xchg bl, byte ptr [rbx + VALUE]
#define XCHG_BL_FROM_PTR_RCX_(VALUE) xchg bl, byte ptr [rcx + VALUE]
#define XCHG_BL_FROM_PTR_RDX_(VALUE) xchg bl, byte ptr [rdx + VALUE]
#define XCHG_BL_FROM_PTR_RDI_(VALUE) xchg bl, byte ptr [rdi + VALUE]
#define XCHG_BL_FROM_PTR_RSI_(VALUE) xchg bl, byte ptr [rsi + VALUE]
#define XCHG_BL_FROM_PTR_RBP_(VALUE) xchg bl, byte ptr [rbp + VALUE]
#define XCHG_BL_FROM_PTR_RSP_(VALUE) xchg bl, byte ptr [rsp + VALUE]
#define XCHG_BL_FROM_PTR_R8_(VALUE) xchg bl, byte ptr [r8 + VALUE]
#define XCHG_BL_FROM_PTR_R9_(VALUE) xchg bl, byte ptr [r9 + VALUE]
#define XCHG_BL_FROM_PTR_R10_(VALUE) xchg bl, byte ptr [r10 + VALUE]
#define XCHG_BL_FROM_PTR_R11_(VALUE) xchg bl, byte ptr [r11 + VALUE]
#define XCHG_BL_FROM_PTR_R12_(VALUE) xchg bl, byte ptr [r12 + VALUE]
#define XCHG_BL_FROM_PTR_R13_(VALUE) xchg bl, byte ptr [r13 + VALUE]
#define XCHG_BL_FROM_PTR_R14_(VALUE) xchg bl, byte ptr [r14 + VALUE]
#define XCHG_BL_FROM_PTR_R15_(VALUE) xchg bl, byte ptr [r15 + VALUE]
#define XCHG_BL_FROM_PTR_EAX_(VALUE) xchg bl, byte ptr [eax + VALUE]
#define XCHG_BL_FROM_PTR_EBX_(VALUE) xchg bl, byte ptr [ebx + VALUE]
#define XCHG_BL_FROM_PTR_ECX_(VALUE) xchg bl, byte ptr [ecx + VALUE]
#define XCHG_BL_FROM_PTR_EDX_(VALUE) xchg bl, byte ptr [edx + VALUE]
#define XCHG_BL_FROM_PTR_EDI_(VALUE) xchg bl, byte ptr [edi + VALUE]
#define XCHG_BL_FROM_PTR_ESI_(VALUE) xchg bl, byte ptr [esi + VALUE]
#define XCHG_BL_FROM_PTR_EBP_(VALUE) xchg bl, byte ptr [ebp + VALUE]
#define XCHG_BL_FROM_PTR_ESP_(VALUE) xchg bl, byte ptr [esp + VALUE]

#define XCHG_CL_FROM_PTR_RAX_(VALUE) xchg cl, byte ptr [rax + VALUE]
#define XCHG_CL_FROM_PTR_RBX_(VALUE) xchg cl, byte ptr [rbx + VALUE]
#define XCHG_CL_FROM_PTR_RCX_(VALUE) xchg cl, byte ptr [rcx + VALUE]
#define XCHG_CL_FROM_PTR_RDX_(VALUE) xchg cl, byte ptr [rdx + VALUE]
#define XCHG_CL_FROM_PTR_RDI_(VALUE) xchg cl, byte ptr [rdi + VALUE]
#define XCHG_CL_FROM_PTR_RSI_(VALUE) xchg cl, byte ptr [rsi + VALUE]
#define XCHG_CL_FROM_PTR_RBP_(VALUE) xchg cl, byte ptr [rbp + VALUE]
#define XCHG_CL_FROM_PTR_RSP_(VALUE) xchg cl, byte ptr [rsp + VALUE]
#define XCHG_CL_FROM_PTR_R8_(VALUE) xchg cl, byte ptr [r8 + VALUE]
#define XCHG_CL_FROM_PTR_R9_(VALUE) xchg cl, byte ptr [r9 + VALUE]
#define XCHG_CL_FROM_PTR_R10_(VALUE) xchg cl, byte ptr [r10 + VALUE]
#define XCHG_CL_FROM_PTR_R11_(VALUE) xchg cl, byte ptr [r11 + VALUE]
#define XCHG_CL_FROM_PTR_R12_(VALUE) xchg cl, byte ptr [r12 + VALUE]
#define XCHG_CL_FROM_PTR_R13_(VALUE) xchg cl, byte ptr [r13 + VALUE]
#define XCHG_CL_FROM_PTR_R14_(VALUE) xchg cl, byte ptr [r14 + VALUE]
#define XCHG_CL_FROM_PTR_R15_(VALUE) xchg cl, byte ptr [r15 + VALUE]
#define XCHG_CL_FROM_PTR_EAX_(VALUE) xchg cl, byte ptr [eax + VALUE]
#define XCHG_CL_FROM_PTR_EBX_(VALUE) xchg cl, byte ptr [ebx + VALUE]
#define XCHG_CL_FROM_PTR_ECX_(VALUE) xchg cl, byte ptr [ecx + VALUE]
#define XCHG_CL_FROM_PTR_EDX_(VALUE) xchg cl, byte ptr [edx + VALUE]
#define XCHG_CL_FROM_PTR_EDI_(VALUE) xchg cl, byte ptr [edi + VALUE]
#define XCHG_CL_FROM_PTR_ESI_(VALUE) xchg cl, byte ptr [esi + VALUE]
#define XCHG_CL_FROM_PTR_EBP_(VALUE) xchg cl, byte ptr [ebp + VALUE]
#define XCHG_CL_FROM_PTR_ESP_(VALUE) xchg cl, byte ptr [esp + VALUE]

#define XCHG_DL_FROM_PTR_RAX_(VALUE) xchg dl, byte ptr [rax + VALUE]
#define XCHG_DL_FROM_PTR_RBX_(VALUE) xchg dl, byte ptr [rbx + VALUE]
#define XCHG_DL_FROM_PTR_RCX_(VALUE) xchg dl, byte ptr [rcx + VALUE]
#define XCHG_DL_FROM_PTR_RDX_(VALUE) xchg dl, byte ptr [rdx + VALUE]
#define XCHG_DL_FROM_PTR_RDI_(VALUE) xchg dl, byte ptr [rdi + VALUE]
#define XCHG_DL_FROM_PTR_RSI_(VALUE) xchg dl, byte ptr [rsi + VALUE]
#define XCHG_DL_FROM_PTR_RBP_(VALUE) xchg dl, byte ptr [rbp + VALUE]
#define XCHG_DL_FROM_PTR_RSP_(VALUE) xchg dl, byte ptr [rsp + VALUE]
#define XCHG_DL_FROM_PTR_R8_(VALUE) xchg dl, byte ptr [r8 + VALUE]
#define XCHG_DL_FROM_PTR_R9_(VALUE) xchg dl, byte ptr [r9 + VALUE]
#define XCHG_DL_FROM_PTR_R10_(VALUE) xchg dl, byte ptr [r10 + VALUE]
#define XCHG_DL_FROM_PTR_R11_(VALUE) xchg dl, byte ptr [r11 + VALUE]
#define XCHG_DL_FROM_PTR_R12_(VALUE) xchg dl, byte ptr [r12 + VALUE]
#define XCHG_DL_FROM_PTR_R13_(VALUE) xchg dl, byte ptr [r13 + VALUE]
#define XCHG_DL_FROM_PTR_R14_(VALUE) xchg dl, byte ptr [r14 + VALUE]
#define XCHG_DL_FROM_PTR_R15_(VALUE) xchg dl, byte ptr [r15 + VALUE]
#define XCHG_DL_FROM_PTR_EAX_(VALUE) xchg dl, byte ptr [eax + VALUE]
#define XCHG_DL_FROM_PTR_EBX_(VALUE) xchg dl, byte ptr [ebx + VALUE]
#define XCHG_DL_FROM_PTR_ECX_(VALUE) xchg dl, byte ptr [ecx + VALUE]
#define XCHG_DL_FROM_PTR_EDX_(VALUE) xchg dl, byte ptr [edx + VALUE]
#define XCHG_DL_FROM_PTR_EDI_(VALUE) xchg dl, byte ptr [edi + VALUE]
#define XCHG_DL_FROM_PTR_ESI_(VALUE) xchg dl, byte ptr [esi + VALUE]
#define XCHG_DL_FROM_PTR_EBP_(VALUE) xchg dl, byte ptr [ebp + VALUE]
#define XCHG_DL_FROM_PTR_ESP_(VALUE) xchg dl, byte ptr [esp + VALUE]

#define XCHG_DIL_FROM_PTR_RAX_(VALUE) xchg dil, byte ptr [rax + VALUE]
#define XCHG_DIL_FROM_PTR_RBX_(VALUE) xchg dil, byte ptr [rbx + VALUE]
#define XCHG_DIL_FROM_PTR_RCX_(VALUE) xchg dil, byte ptr [rcx + VALUE]
#define XCHG_DIL_FROM_PTR_RDX_(VALUE) xchg dil, byte ptr [rdx + VALUE]
#define XCHG_DIL_FROM_PTR_RDI_(VALUE) xchg dil, byte ptr [rdi + VALUE]
#define XCHG_DIL_FROM_PTR_RSI_(VALUE) xchg dil, byte ptr [rsi + VALUE]
#define XCHG_DIL_FROM_PTR_RBP_(VALUE) xchg dil, byte ptr [rbp + VALUE]
#define XCHG_DIL_FROM_PTR_RSP_(VALUE) xchg dil, byte ptr [rsp + VALUE]
#define XCHG_DIL_FROM_PTR_R8_(VALUE) xchg dil, byte ptr [r8 + VALUE]
#define XCHG_DIL_FROM_PTR_R9_(VALUE) xchg dil, byte ptr [r9 + VALUE]
#define XCHG_DIL_FROM_PTR_R10_(VALUE) xchg dil, byte ptr [r10 + VALUE]
#define XCHG_DIL_FROM_PTR_R11_(VALUE) xchg dil, byte ptr [r11 + VALUE]
#define XCHG_DIL_FROM_PTR_R12_(VALUE) xchg dil, byte ptr [r12 + VALUE]
#define XCHG_DIL_FROM_PTR_R13_(VALUE) xchg dil, byte ptr [r13 + VALUE]
#define XCHG_DIL_FROM_PTR_R14_(VALUE) xchg dil, byte ptr [r14 + VALUE]
#define XCHG_DIL_FROM_PTR_R15_(VALUE) xchg dil, byte ptr [r15 + VALUE]
#define XCHG_DIL_FROM_PTR_EAX_(VALUE) xchg dil, byte ptr [eax + VALUE]
#define XCHG_DIL_FROM_PTR_EBX_(VALUE) xchg dil, byte ptr [ebx + VALUE]
#define XCHG_DIL_FROM_PTR_ECX_(VALUE) xchg dil, byte ptr [ecx + VALUE]
#define XCHG_DIL_FROM_PTR_EDX_(VALUE) xchg dil, byte ptr [edx + VALUE]
#define XCHG_DIL_FROM_PTR_EDI_(VALUE) xchg dil, byte ptr [edi + VALUE]
#define XCHG_DIL_FROM_PTR_ESI_(VALUE) xchg dil, byte ptr [esi + VALUE]
#define XCHG_DIL_FROM_PTR_EBP_(VALUE) xchg dil, byte ptr [ebp + VALUE]
#define XCHG_DIL_FROM_PTR_ESP_(VALUE) xchg dil, byte ptr [esp + VALUE]

#define XCHG_SIL_FROM_PTR_RAX_(VALUE) xchg sil, byte ptr [rax + VALUE]
#define XCHG_SIL_FROM_PTR_RBX_(VALUE) xchg sil, byte ptr [rbx + VALUE]
#define XCHG_SIL_FROM_PTR_RCX_(VALUE) xchg sil, byte ptr [rcx + VALUE]
#define XCHG_SIL_FROM_PTR_RDX_(VALUE) xchg sil, byte ptr [rdx + VALUE]
#define XCHG_SIL_FROM_PTR_RDI_(VALUE) xchg sil, byte ptr [rdi + VALUE]
#define XCHG_SIL_FROM_PTR_RSI_(VALUE) xchg sil, byte ptr [rsi + VALUE]
#define XCHG_SIL_FROM_PTR_RBP_(VALUE) xchg sil, byte ptr [rbp + VALUE]
#define XCHG_SIL_FROM_PTR_RSP_(VALUE) xchg sil, byte ptr [rsp + VALUE]
#define XCHG_SIL_FROM_PTR_R8_(VALUE) xchg sil, byte ptr [r8 + VALUE]
#define XCHG_SIL_FROM_PTR_R9_(VALUE) xchg sil, byte ptr [r9 + VALUE]
#define XCHG_SIL_FROM_PTR_R10_(VALUE) xchg sil, byte ptr [r10 + VALUE]
#define XCHG_SIL_FROM_PTR_R11_(VALUE) xchg sil, byte ptr [r11 + VALUE]
#define XCHG_SIL_FROM_PTR_R12_(VALUE) xchg sil, byte ptr [r12 + VALUE]
#define XCHG_SIL_FROM_PTR_R13_(VALUE) xchg sil, byte ptr [r13 + VALUE]
#define XCHG_SIL_FROM_PTR_R14_(VALUE) xchg sil, byte ptr [r14 + VALUE]
#define XCHG_SIL_FROM_PTR_R15_(VALUE) xchg sil, byte ptr [r15 + VALUE]
#define XCHG_SIL_FROM_PTR_EAX_(VALUE) xchg sil, byte ptr [eax + VALUE]
#define XCHG_SIL_FROM_PTR_EBX_(VALUE) xchg sil, byte ptr [ebx + VALUE]
#define XCHG_SIL_FROM_PTR_ECX_(VALUE) xchg sil, byte ptr [ecx + VALUE]
#define XCHG_SIL_FROM_PTR_EDX_(VALUE) xchg sil, byte ptr [edx + VALUE]
#define XCHG_SIL_FROM_PTR_EDI_(VALUE) xchg sil, byte ptr [edi + VALUE]
#define XCHG_SIL_FROM_PTR_ESI_(VALUE) xchg sil, byte ptr [esi + VALUE]
#define XCHG_SIL_FROM_PTR_EBP_(VALUE) xchg sil, byte ptr [ebp + VALUE]
#define XCHG_SIL_FROM_PTR_ESP_(VALUE) xchg sil, byte ptr [esp + VALUE]

#define XCHG_BPL_FROM_PTR_RAX_(VALUE) xchg bpl, byte ptr [rax + VALUE]
#define XCHG_BPL_FROM_PTR_RBX_(VALUE) xchg bpl, byte ptr [rbx + VALUE]
#define XCHG_BPL_FROM_PTR_RCX_(VALUE) xchg bpl, byte ptr [rcx + VALUE]
#define XCHG_BPL_FROM_PTR_RDX_(VALUE) xchg bpl, byte ptr [rdx + VALUE]
#define XCHG_BPL_FROM_PTR_RDI_(VALUE) xchg bpl, byte ptr [rdi + VALUE]
#define XCHG_BPL_FROM_PTR_RSI_(VALUE) xchg bpl, byte ptr [rsi + VALUE]
#define XCHG_BPL_FROM_PTR_RBP_(VALUE) xchg bpl, byte ptr [rbp + VALUE]
#define XCHG_BPL_FROM_PTR_RSP_(VALUE) xchg bpl, byte ptr [rsp + VALUE]
#define XCHG_BPL_FROM_PTR_R8_(VALUE) xchg bpl, byte ptr [r8 + VALUE]
#define XCHG_BPL_FROM_PTR_R9_(VALUE) xchg bpl, byte ptr [r9 + VALUE]
#define XCHG_BPL_FROM_PTR_R10_(VALUE) xchg bpl, byte ptr [r10 + VALUE]
#define XCHG_BPL_FROM_PTR_R11_(VALUE) xchg bpl, byte ptr [r11 + VALUE]
#define XCHG_BPL_FROM_PTR_R12_(VALUE) xchg bpl, byte ptr [r12 + VALUE]
#define XCHG_BPL_FROM_PTR_R13_(VALUE) xchg bpl, byte ptr [r13 + VALUE]
#define XCHG_BPL_FROM_PTR_R14_(VALUE) xchg bpl, byte ptr [r14 + VALUE]
#define XCHG_BPL_FROM_PTR_R15_(VALUE) xchg bpl, byte ptr [r15 + VALUE]
#define XCHG_BPL_FROM_PTR_EAX_(VALUE) xchg bpl, byte ptr [eax + VALUE]
#define XCHG_BPL_FROM_PTR_EBX_(VALUE) xchg bpl, byte ptr [ebx + VALUE]
#define XCHG_BPL_FROM_PTR_ECX_(VALUE) xchg bpl, byte ptr [ecx + VALUE]
#define XCHG_BPL_FROM_PTR_EDX_(VALUE) xchg bpl, byte ptr [edx + VALUE]
#define XCHG_BPL_FROM_PTR_EDI_(VALUE) xchg bpl, byte ptr [edi + VALUE]
#define XCHG_BPL_FROM_PTR_ESI_(VALUE) xchg bpl, byte ptr [esi + VALUE]
#define XCHG_BPL_FROM_PTR_EBP_(VALUE) xchg bpl, byte ptr [ebp + VALUE]
#define XCHG_BPL_FROM_PTR_ESP_(VALUE) xchg bpl, byte ptr [esp + VALUE]

#define XCHG_SPL_FROM_PTR_RAX_(VALUE) xchg spl, byte ptr [rax + VALUE]
#define XCHG_SPL_FROM_PTR_RBX_(VALUE) xchg spl, byte ptr [rbx + VALUE]
#define XCHG_SPL_FROM_PTR_RCX_(VALUE) xchg spl, byte ptr [rcx + VALUE]
#define XCHG_SPL_FROM_PTR_RDX_(VALUE) xchg spl, byte ptr [rdx + VALUE]
#define XCHG_SPL_FROM_PTR_RDI_(VALUE) xchg spl, byte ptr [rdi + VALUE]
#define XCHG_SPL_FROM_PTR_RSI_(VALUE) xchg spl, byte ptr [rsi + VALUE]
#define XCHG_SPL_FROM_PTR_RBP_(VALUE) xchg spl, byte ptr [rbp + VALUE]
#define XCHG_SPL_FROM_PTR_RSP_(VALUE) xchg spl, byte ptr [rsp + VALUE]
#define XCHG_SPL_FROM_PTR_R8_(VALUE) xchg spl, byte ptr [r8 + VALUE]
#define XCHG_SPL_FROM_PTR_R9_(VALUE) xchg spl, byte ptr [r9 + VALUE]
#define XCHG_SPL_FROM_PTR_R10_(VALUE) xchg spl, byte ptr [r10 + VALUE]
#define XCHG_SPL_FROM_PTR_R11_(VALUE) xchg spl, byte ptr [r11 + VALUE]
#define XCHG_SPL_FROM_PTR_R12_(VALUE) xchg spl, byte ptr [r12 + VALUE]
#define XCHG_SPL_FROM_PTR_R13_(VALUE) xchg spl, byte ptr [r13 + VALUE]
#define XCHG_SPL_FROM_PTR_R14_(VALUE) xchg spl, byte ptr [r14 + VALUE]
#define XCHG_SPL_FROM_PTR_R15_(VALUE) xchg spl, byte ptr [r15 + VALUE]
#define XCHG_SPL_FROM_PTR_EAX_(VALUE) xchg spl, byte ptr [eax + VALUE]
#define XCHG_SPL_FROM_PTR_EBX_(VALUE) xchg spl, byte ptr [ebx + VALUE]
#define XCHG_SPL_FROM_PTR_ECX_(VALUE) xchg spl, byte ptr [ecx + VALUE]
#define XCHG_SPL_FROM_PTR_EDX_(VALUE) xchg spl, byte ptr [edx + VALUE]
#define XCHG_SPL_FROM_PTR_EDI_(VALUE) xchg spl, byte ptr [edi + VALUE]
#define XCHG_SPL_FROM_PTR_ESI_(VALUE) xchg spl, byte ptr [esi + VALUE]
#define XCHG_SPL_FROM_PTR_EBP_(VALUE) xchg spl, byte ptr [ebp + VALUE]
#define XCHG_SPL_FROM_PTR_ESP_(VALUE) xchg spl, byte ptr [esp + VALUE]

#define XCHG_R8B_FROM_PTR_RAX_(VALUE) xchg r8b, byte ptr [rax + VALUE]
#define XCHG_R8B_FROM_PTR_RBX_(VALUE) xchg r8b, byte ptr [rbx + VALUE]
#define XCHG_R8B_FROM_PTR_RCX_(VALUE) xchg r8b, byte ptr [rcx + VALUE]
#define XCHG_R8B_FROM_PTR_RDX_(VALUE) xchg r8b, byte ptr [rdx + VALUE]
#define XCHG_R8B_FROM_PTR_RDI_(VALUE) xchg r8b, byte ptr [rdi + VALUE]
#define XCHG_R8B_FROM_PTR_RSI_(VALUE) xchg r8b, byte ptr [rsi + VALUE]
#define XCHG_R8B_FROM_PTR_RBP_(VALUE) xchg r8b, byte ptr [rbp + VALUE]
#define XCHG_R8B_FROM_PTR_RSP_(VALUE) xchg r8b, byte ptr [rsp + VALUE]
#define XCHG_R8B_FROM_PTR_R8_(VALUE) xchg r8b, byte ptr [r8 + VALUE]
#define XCHG_R8B_FROM_PTR_R9_(VALUE) xchg r8b, byte ptr [r9 + VALUE]
#define XCHG_R8B_FROM_PTR_R10_(VALUE) xchg r8b, byte ptr [r10 + VALUE]
#define XCHG_R8B_FROM_PTR_R11_(VALUE) xchg r8b, byte ptr [r11 + VALUE]
#define XCHG_R8B_FROM_PTR_R12_(VALUE) xchg r8b, byte ptr [r12 + VALUE]
#define XCHG_R8B_FROM_PTR_R13_(VALUE) xchg r8b, byte ptr [r13 + VALUE]
#define XCHG_R8B_FROM_PTR_R14_(VALUE) xchg r8b, byte ptr [r14 + VALUE]
#define XCHG_R8B_FROM_PTR_R15_(VALUE) xchg r8b, byte ptr [r15 + VALUE]
#define XCHG_R8B_FROM_PTR_EAX_(VALUE) xchg r8b, byte ptr [eax + VALUE]
#define XCHG_R8B_FROM_PTR_EBX_(VALUE) xchg r8b, byte ptr [ebx + VALUE]
#define XCHG_R8B_FROM_PTR_ECX_(VALUE) xchg r8b, byte ptr [ecx + VALUE]
#define XCHG_R8B_FROM_PTR_EDX_(VALUE) xchg r8b, byte ptr [edx + VALUE]
#define XCHG_R8B_FROM_PTR_EDI_(VALUE) xchg r8b, byte ptr [edi + VALUE]
#define XCHG_R8B_FROM_PTR_ESI_(VALUE) xchg r8b, byte ptr [esi + VALUE]
#define XCHG_R8B_FROM_PTR_EBP_(VALUE) xchg r8b, byte ptr [ebp + VALUE]
#define XCHG_R8B_FROM_PTR_ESP_(VALUE) xchg r8b, byte ptr [esp + VALUE]

#define XCHG_R9B_FROM_PTR_RAX_(VALUE) xchg r9b, byte ptr [rax + VALUE]
#define XCHG_R9B_FROM_PTR_RBX_(VALUE) xchg r9b, byte ptr [rbx + VALUE]
#define XCHG_R9B_FROM_PTR_RCX_(VALUE) xchg r9b, byte ptr [rcx + VALUE]
#define XCHG_R9B_FROM_PTR_RDX_(VALUE) xchg r9b, byte ptr [rdx + VALUE]
#define XCHG_R9B_FROM_PTR_RDI_(VALUE) xchg r9b, byte ptr [rdi + VALUE]
#define XCHG_R9B_FROM_PTR_RSI_(VALUE) xchg r9b, byte ptr [rsi + VALUE]
#define XCHG_R9B_FROM_PTR_RBP_(VALUE) xchg r9b, byte ptr [rbp + VALUE]
#define XCHG_R9B_FROM_PTR_RSP_(VALUE) xchg r9b, byte ptr [rsp + VALUE]
#define XCHG_R9B_FROM_PTR_R8_(VALUE) xchg r9b, byte ptr [r8 + VALUE]
#define XCHG_R9B_FROM_PTR_R9_(VALUE) xchg r9b, byte ptr [r9 + VALUE]
#define XCHG_R9B_FROM_PTR_R10_(VALUE) xchg r9b, byte ptr [r10 + VALUE]
#define XCHG_R9B_FROM_PTR_R11_(VALUE) xchg r9b, byte ptr [r11 + VALUE]
#define XCHG_R9B_FROM_PTR_R12_(VALUE) xchg r9b, byte ptr [r12 + VALUE]
#define XCHG_R9B_FROM_PTR_R13_(VALUE) xchg r9b, byte ptr [r13 + VALUE]
#define XCHG_R9B_FROM_PTR_R14_(VALUE) xchg r9b, byte ptr [r14 + VALUE]
#define XCHG_R9B_FROM_PTR_R15_(VALUE) xchg r9b, byte ptr [r15 + VALUE]
#define XCHG_R9B_FROM_PTR_EAX_(VALUE) xchg r9b, byte ptr [eax + VALUE]
#define XCHG_R9B_FROM_PTR_EBX_(VALUE) xchg r9b, byte ptr [ebx + VALUE]
#define XCHG_R9B_FROM_PTR_ECX_(VALUE) xchg r9b, byte ptr [ecx + VALUE]
#define XCHG_R9B_FROM_PTR_EDX_(VALUE) xchg r9b, byte ptr [edx + VALUE]
#define XCHG_R9B_FROM_PTR_EDI_(VALUE) xchg r9b, byte ptr [edi + VALUE]
#define XCHG_R9B_FROM_PTR_ESI_(VALUE) xchg r9b, byte ptr [esi + VALUE]
#define XCHG_R9B_FROM_PTR_EBP_(VALUE) xchg r9b, byte ptr [ebp + VALUE]
#define XCHG_R9B_FROM_PTR_ESP_(VALUE) xchg r9b, byte ptr [esp + VALUE]

#define XCHG_R10B_FROM_PTR_RAX_(VALUE) xchg r10b, byte ptr [rax + VALUE]
#define XCHG_R10B_FROM_PTR_RBX_(VALUE) xchg r10b, byte ptr [rbx + VALUE]
#define XCHG_R10B_FROM_PTR_RCX_(VALUE) xchg r10b, byte ptr [rcx + VALUE]
#define XCHG_R10B_FROM_PTR_RDX_(VALUE) xchg r10b, byte ptr [rdx + VALUE]
#define XCHG_R10B_FROM_PTR_RDI_(VALUE) xchg r10b, byte ptr [rdi + VALUE]
#define XCHG_R10B_FROM_PTR_RSI_(VALUE) xchg r10b, byte ptr [rsi + VALUE]
#define XCHG_R10B_FROM_PTR_RBP_(VALUE) xchg r10b, byte ptr [rbp + VALUE]
#define XCHG_R10B_FROM_PTR_RSP_(VALUE) xchg r10b, byte ptr [rsp + VALUE]
#define XCHG_R10B_FROM_PTR_R8_(VALUE) xchg r10b, byte ptr [r8 + VALUE]
#define XCHG_R10B_FROM_PTR_R9_(VALUE) xchg r10b, byte ptr [r9 + VALUE]
#define XCHG_R10B_FROM_PTR_R10_(VALUE) xchg r10b, byte ptr [r10 + VALUE]
#define XCHG_R10B_FROM_PTR_R11_(VALUE) xchg r10b, byte ptr [r11 + VALUE]
#define XCHG_R10B_FROM_PTR_R12_(VALUE) xchg r10b, byte ptr [r12 + VALUE]
#define XCHG_R10B_FROM_PTR_R13_(VALUE) xchg r10b, byte ptr [r13 + VALUE]
#define XCHG_R10B_FROM_PTR_R14_(VALUE) xchg r10b, byte ptr [r14 + VALUE]
#define XCHG_R10B_FROM_PTR_R15_(VALUE) xchg r10b, byte ptr [r15 + VALUE]
#define XCHG_R10B_FROM_PTR_EAX_(VALUE) xchg r10b, byte ptr [eax + VALUE]
#define XCHG_R10B_FROM_PTR_EBX_(VALUE) xchg r10b, byte ptr [ebx + VALUE]
#define XCHG_R10B_FROM_PTR_ECX_(VALUE) xchg r10b, byte ptr [ecx + VALUE]
#define XCHG_R10B_FROM_PTR_EDX_(VALUE) xchg r10b, byte ptr [edx + VALUE]
#define XCHG_R10B_FROM_PTR_EDI_(VALUE) xchg r10b, byte ptr [edi + VALUE]
#define XCHG_R10B_FROM_PTR_ESI_(VALUE) xchg r10b, byte ptr [esi + VALUE]
#define XCHG_R10B_FROM_PTR_EBP_(VALUE) xchg r10b, byte ptr [ebp + VALUE]
#define XCHG_R10B_FROM_PTR_ESP_(VALUE) xchg r10b, byte ptr [esp + VALUE]

#define XCHG_R11B_FROM_PTR_RAX_(VALUE) xchg r11b, byte ptr [rax + VALUE]
#define XCHG_R11B_FROM_PTR_RBX_(VALUE) xchg r11b, byte ptr [rbx + VALUE]
#define XCHG_R11B_FROM_PTR_RCX_(VALUE) xchg r11b, byte ptr [rcx + VALUE]
#define XCHG_R11B_FROM_PTR_RDX_(VALUE) xchg r11b, byte ptr [rdx + VALUE]
#define XCHG_R11B_FROM_PTR_RDI_(VALUE) xchg r11b, byte ptr [rdi + VALUE]
#define XCHG_R11B_FROM_PTR_RSI_(VALUE) xchg r11b, byte ptr [rsi + VALUE]
#define XCHG_R11B_FROM_PTR_RBP_(VALUE) xchg r11b, byte ptr [rbp + VALUE]
#define XCHG_R11B_FROM_PTR_RSP_(VALUE) xchg r11b, byte ptr [rsp + VALUE]
#define XCHG_R11B_FROM_PTR_R8_(VALUE) xchg r11b, byte ptr [r8 + VALUE]
#define XCHG_R11B_FROM_PTR_R9_(VALUE) xchg r11b, byte ptr [r9 + VALUE]
#define XCHG_R11B_FROM_PTR_R10_(VALUE) xchg r11b, byte ptr [r10 + VALUE]
#define XCHG_R11B_FROM_PTR_R11_(VALUE) xchg r11b, byte ptr [r11 + VALUE]
#define XCHG_R11B_FROM_PTR_R12_(VALUE) xchg r11b, byte ptr [r12 + VALUE]
#define XCHG_R11B_FROM_PTR_R13_(VALUE) xchg r11b, byte ptr [r13 + VALUE]
#define XCHG_R11B_FROM_PTR_R14_(VALUE) xchg r11b, byte ptr [r14 + VALUE]
#define XCHG_R11B_FROM_PTR_R15_(VALUE) xchg r11b, byte ptr [r15 + VALUE]
#define XCHG_R11B_FROM_PTR_EAX_(VALUE) xchg r11b, byte ptr [eax + VALUE]
#define XCHG_R11B_FROM_PTR_EBX_(VALUE) xchg r11b, byte ptr [ebx + VALUE]
#define XCHG_R11B_FROM_PTR_ECX_(VALUE) xchg r11b, byte ptr [ecx + VALUE]
#define XCHG_R11B_FROM_PTR_EDX_(VALUE) xchg r11b, byte ptr [edx + VALUE]
#define XCHG_R11B_FROM_PTR_EDI_(VALUE) xchg r11b, byte ptr [edi + VALUE]
#define XCHG_R11B_FROM_PTR_ESI_(VALUE) xchg r11b, byte ptr [esi + VALUE]
#define XCHG_R11B_FROM_PTR_EBP_(VALUE) xchg r11b, byte ptr [ebp + VALUE]
#define XCHG_R11B_FROM_PTR_ESP_(VALUE) xchg r11b, byte ptr [esp + VALUE]

#define XCHG_R12B_FROM_PTR_RAX_(VALUE) xchg r12b, byte ptr [rax + VALUE]
#define XCHG_R12B_FROM_PTR_RBX_(VALUE) xchg r12b, byte ptr [rbx + VALUE]
#define XCHG_R12B_FROM_PTR_RCX_(VALUE) xchg r12b, byte ptr [rcx + VALUE]
#define XCHG_R12B_FROM_PTR_RDX_(VALUE) xchg r12b, byte ptr [rdx + VALUE]
#define XCHG_R12B_FROM_PTR_RDI_(VALUE) xchg r12b, byte ptr [rdi + VALUE]
#define XCHG_R12B_FROM_PTR_RSI_(VALUE) xchg r12b, byte ptr [rsi + VALUE]
#define XCHG_R12B_FROM_PTR_RBP_(VALUE) xchg r12b, byte ptr [rbp + VALUE]
#define XCHG_R12B_FROM_PTR_RSP_(VALUE) xchg r12b, byte ptr [rsp + VALUE]
#define XCHG_R12B_FROM_PTR_R8_(VALUE) xchg r12b, byte ptr [r8 + VALUE]
#define XCHG_R12B_FROM_PTR_R9_(VALUE) xchg r12b, byte ptr [r9 + VALUE]
#define XCHG_R12B_FROM_PTR_R10_(VALUE) xchg r12b, byte ptr [r10 + VALUE]
#define XCHG_R12B_FROM_PTR_R11_(VALUE) xchg r12b, byte ptr [r11 + VALUE]
#define XCHG_R12B_FROM_PTR_R12_(VALUE) xchg r12b, byte ptr [r12 + VALUE]
#define XCHG_R12B_FROM_PTR_R13_(VALUE) xchg r12b, byte ptr [r13 + VALUE]
#define XCHG_R12B_FROM_PTR_R14_(VALUE) xchg r12b, byte ptr [r14 + VALUE]
#define XCHG_R12B_FROM_PTR_R15_(VALUE) xchg r12b, byte ptr [r15 + VALUE]
#define XCHG_R12B_FROM_PTR_EAX_(VALUE) xchg r12b, byte ptr [eax + VALUE]
#define XCHG_R12B_FROM_PTR_EBX_(VALUE) xchg r12b, byte ptr [ebx + VALUE]
#define XCHG_R12B_FROM_PTR_ECX_(VALUE) xchg r12b, byte ptr [ecx + VALUE]
#define XCHG_R12B_FROM_PTR_EDX_(VALUE) xchg r12b, byte ptr [edx + VALUE]
#define XCHG_R12B_FROM_PTR_EDI_(VALUE) xchg r12b, byte ptr [edi + VALUE]
#define XCHG_R12B_FROM_PTR_ESI_(VALUE) xchg r12b, byte ptr [esi + VALUE]
#define XCHG_R12B_FROM_PTR_EBP_(VALUE) xchg r12b, byte ptr [ebp + VALUE]
#define XCHG_R12B_FROM_PTR_ESP_(VALUE) xchg r12b, byte ptr [esp + VALUE]

#define XCHG_R13B_FROM_PTR_RAX_(VALUE) xchg r13b, byte ptr [rax + VALUE]
#define XCHG_R13B_FROM_PTR_RBX_(VALUE) xchg r13b, byte ptr [rbx + VALUE]
#define XCHG_R13B_FROM_PTR_RCX_(VALUE) xchg r13b, byte ptr [rcx + VALUE]
#define XCHG_R13B_FROM_PTR_RDX_(VALUE) xchg r13b, byte ptr [rdx + VALUE]
#define XCHG_R13B_FROM_PTR_RDI_(VALUE) xchg r13b, byte ptr [rdi + VALUE]
#define XCHG_R13B_FROM_PTR_RSI_(VALUE) xchg r13b, byte ptr [rsi + VALUE]
#define XCHG_R13B_FROM_PTR_RBP_(VALUE) xchg r13b, byte ptr [rbp + VALUE]
#define XCHG_R13B_FROM_PTR_RSP_(VALUE) xchg r13b, byte ptr [rsp + VALUE]
#define XCHG_R13B_FROM_PTR_R8_(VALUE) xchg r13b, byte ptr [r8 + VALUE]
#define XCHG_R13B_FROM_PTR_R9_(VALUE) xchg r13b, byte ptr [r9 + VALUE]
#define XCHG_R13B_FROM_PTR_R10_(VALUE) xchg r13b, byte ptr [r10 + VALUE]
#define XCHG_R13B_FROM_PTR_R11_(VALUE) xchg r13b, byte ptr [r11 + VALUE]
#define XCHG_R13B_FROM_PTR_R12_(VALUE) xchg r13b, byte ptr [r12 + VALUE]
#define XCHG_R13B_FROM_PTR_R13_(VALUE) xchg r13b, byte ptr [r13 + VALUE]
#define XCHG_R13B_FROM_PTR_R14_(VALUE) xchg r13b, byte ptr [r14 + VALUE]
#define XCHG_R13B_FROM_PTR_R15_(VALUE) xchg r13b, byte ptr [r15 + VALUE]
#define XCHG_R13B_FROM_PTR_EAX_(VALUE) xchg r13b, byte ptr [eax + VALUE]
#define XCHG_R13B_FROM_PTR_EBX_(VALUE) xchg r13b, byte ptr [ebx + VALUE]
#define XCHG_R13B_FROM_PTR_ECX_(VALUE) xchg r13b, byte ptr [ecx + VALUE]
#define XCHG_R13B_FROM_PTR_EDX_(VALUE) xchg r13b, byte ptr [edx + VALUE]
#define XCHG_R13B_FROM_PTR_EDI_(VALUE) xchg r13b, byte ptr [edi + VALUE]
#define XCHG_R13B_FROM_PTR_ESI_(VALUE) xchg r13b, byte ptr [esi + VALUE]
#define XCHG_R13B_FROM_PTR_EBP_(VALUE) xchg r13b, byte ptr [ebp + VALUE]
#define XCHG_R13B_FROM_PTR_ESP_(VALUE) xchg r13b, byte ptr [esp + VALUE]

#define XCHG_R14B_FROM_PTR_RAX_(VALUE) xchg r14b, byte ptr [rax + VALUE]
#define XCHG_R14B_FROM_PTR_RBX_(VALUE) xchg r14b, byte ptr [rbx + VALUE]
#define XCHG_R14B_FROM_PTR_RCX_(VALUE) xchg r14b, byte ptr [rcx + VALUE]
#define XCHG_R14B_FROM_PTR_RDX_(VALUE) xchg r14b, byte ptr [rdx + VALUE]
#define XCHG_R14B_FROM_PTR_RDI_(VALUE) xchg r14b, byte ptr [rdi + VALUE]
#define XCHG_R14B_FROM_PTR_RSI_(VALUE) xchg r14b, byte ptr [rsi + VALUE]
#define XCHG_R14B_FROM_PTR_RBP_(VALUE) xchg r14b, byte ptr [rbp + VALUE]
#define XCHG_R14B_FROM_PTR_RSP_(VALUE) xchg r14b, byte ptr [rsp + VALUE]
#define XCHG_R14B_FROM_PTR_R8_(VALUE) xchg r14b, byte ptr [r8 + VALUE]
#define XCHG_R14B_FROM_PTR_R9_(VALUE) xchg r14b, byte ptr [r9 + VALUE]
#define XCHG_R14B_FROM_PTR_R10_(VALUE) xchg r14b, byte ptr [r10 + VALUE]
#define XCHG_R14B_FROM_PTR_R11_(VALUE) xchg r14b, byte ptr [r11 + VALUE]
#define XCHG_R14B_FROM_PTR_R12_(VALUE) xchg r14b, byte ptr [r12 + VALUE]
#define XCHG_R14B_FROM_PTR_R13_(VALUE) xchg r14b, byte ptr [r13 + VALUE]
#define XCHG_R14B_FROM_PTR_R14_(VALUE) xchg r14b, byte ptr [r14 + VALUE]
#define XCHG_R14B_FROM_PTR_R15_(VALUE) xchg r14b, byte ptr [r15 + VALUE]
#define XCHG_R14B_FROM_PTR_EAX_(VALUE) xchg r14b, byte ptr [eax + VALUE]
#define XCHG_R14B_FROM_PTR_EBX_(VALUE) xchg r14b, byte ptr [ebx + VALUE]
#define XCHG_R14B_FROM_PTR_ECX_(VALUE) xchg r14b, byte ptr [ecx + VALUE]
#define XCHG_R14B_FROM_PTR_EDX_(VALUE) xchg r14b, byte ptr [edx + VALUE]
#define XCHG_R14B_FROM_PTR_EDI_(VALUE) xchg r14b, byte ptr [edi + VALUE]
#define XCHG_R14B_FROM_PTR_ESI_(VALUE) xchg r14b, byte ptr [esi + VALUE]
#define XCHG_R14B_FROM_PTR_EBP_(VALUE) xchg r14b, byte ptr [ebp + VALUE]
#define XCHG_R14B_FROM_PTR_ESP_(VALUE) xchg r14b, byte ptr [esp + VALUE]

#define XCHG_R15B_FROM_PTR_RAX_(VALUE) xchg r15b, byte ptr [rax + VALUE]
#define XCHG_R15B_FROM_PTR_RBX_(VALUE) xchg r15b, byte ptr [rbx + VALUE]
#define XCHG_R15B_FROM_PTR_RCX_(VALUE) xchg r15b, byte ptr [rcx + VALUE]
#define XCHG_R15B_FROM_PTR_RDX_(VALUE) xchg r15b, byte ptr [rdx + VALUE]
#define XCHG_R15B_FROM_PTR_RDI_(VALUE) xchg r15b, byte ptr [rdi + VALUE]
#define XCHG_R15B_FROM_PTR_RSI_(VALUE) xchg r15b, byte ptr [rsi + VALUE]
#define XCHG_R15B_FROM_PTR_RBP_(VALUE) xchg r15b, byte ptr [rbp + VALUE]
#define XCHG_R15B_FROM_PTR_RSP_(VALUE) xchg r15b, byte ptr [rsp + VALUE]
#define XCHG_R15B_FROM_PTR_R8_(VALUE) xchg r15b, byte ptr [r8 + VALUE]
#define XCHG_R15B_FROM_PTR_R9_(VALUE) xchg r15b, byte ptr [r9 + VALUE]
#define XCHG_R15B_FROM_PTR_R10_(VALUE) xchg r15b, byte ptr [r10 + VALUE]
#define XCHG_R15B_FROM_PTR_R11_(VALUE) xchg r15b, byte ptr [r11 + VALUE]
#define XCHG_R15B_FROM_PTR_R12_(VALUE) xchg r15b, byte ptr [r12 + VALUE]
#define XCHG_R15B_FROM_PTR_R13_(VALUE) xchg r15b, byte ptr [r13 + VALUE]
#define XCHG_R15B_FROM_PTR_R14_(VALUE) xchg r15b, byte ptr [r14 + VALUE]
#define XCHG_R15B_FROM_PTR_R15_(VALUE) xchg r15b, byte ptr [r15 + VALUE]
#define XCHG_R15B_FROM_PTR_EAX_(VALUE) xchg r15b, byte ptr [eax + VALUE]
#define XCHG_R15B_FROM_PTR_EBX_(VALUE) xchg r15b, byte ptr [ebx + VALUE]
#define XCHG_R15B_FROM_PTR_ECX_(VALUE) xchg r15b, byte ptr [ecx + VALUE]
#define XCHG_R15B_FROM_PTR_EDX_(VALUE) xchg r15b, byte ptr [edx + VALUE]
#define XCHG_R15B_FROM_PTR_EDI_(VALUE) xchg r15b, byte ptr [edi + VALUE]
#define XCHG_R15B_FROM_PTR_ESI_(VALUE) xchg r15b, byte ptr [esi + VALUE]
#define XCHG_R15B_FROM_PTR_EBP_(VALUE) xchg r15b, byte ptr [ebp + VALUE]
#define XCHG_R15B_FROM_PTR_ESP_(VALUE) xchg r15b, byte ptr [esp + VALUE]

#define XCHG_AL_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], al
#define XCHG_AL_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], al
#define XCHG_AL_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], al
#define XCHG_AL_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], al
#define XCHG_AL_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], al
#define XCHG_AL_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], al
#define XCHG_AL_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], al
#define XCHG_AL_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], al
#define XCHG_AL_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], al
#define XCHG_AL_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], al
#define XCHG_AL_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], al
#define XCHG_AL_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], al
#define XCHG_AL_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], al
#define XCHG_AL_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], al
#define XCHG_AL_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], al
#define XCHG_AL_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], al
#define XCHG_AL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], al
#define XCHG_AL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], al
#define XCHG_AL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], al
#define XCHG_AL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], al
#define XCHG_AL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], al
#define XCHG_AL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], al
#define XCHG_AL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], al
#define XCHG_AL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], al

#define XCHG_BL_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], bl
#define XCHG_BL_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], bl
#define XCHG_BL_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], bl
#define XCHG_BL_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], bl
#define XCHG_BL_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], bl
#define XCHG_BL_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], bl
#define XCHG_BL_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], bl
#define XCHG_BL_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], bl
#define XCHG_BL_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], bl
#define XCHG_BL_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], bl
#define XCHG_BL_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], bl
#define XCHG_BL_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], bl
#define XCHG_BL_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], bl
#define XCHG_BL_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], bl
#define XCHG_BL_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], bl
#define XCHG_BL_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], bl
#define XCHG_BL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], bl
#define XCHG_BL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], bl
#define XCHG_BL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], bl
#define XCHG_BL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], bl
#define XCHG_BL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], bl
#define XCHG_BL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], bl
#define XCHG_BL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], bl
#define XCHG_BL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], bl

#define XCHG_CL_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], cl
#define XCHG_CL_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], cl
#define XCHG_CL_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], cl
#define XCHG_CL_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], cl
#define XCHG_CL_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], cl
#define XCHG_CL_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], cl
#define XCHG_CL_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], cl
#define XCHG_CL_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], cl
#define XCHG_CL_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], cl
#define XCHG_CL_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], cl
#define XCHG_CL_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], cl
#define XCHG_CL_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], cl
#define XCHG_CL_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], cl
#define XCHG_CL_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], cl
#define XCHG_CL_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], cl
#define XCHG_CL_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], cl
#define XCHG_CL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], cl
#define XCHG_CL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], cl
#define XCHG_CL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], cl
#define XCHG_CL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], cl
#define XCHG_CL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], cl
#define XCHG_CL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], cl
#define XCHG_CL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], cl
#define XCHG_CL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], cl

#define XCHG_DL_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], dl
#define XCHG_DL_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], dl
#define XCHG_DL_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], dl
#define XCHG_DL_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], dl
#define XCHG_DL_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], dl
#define XCHG_DL_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], dl
#define XCHG_DL_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], dl
#define XCHG_DL_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], dl
#define XCHG_DL_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], dl
#define XCHG_DL_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], dl
#define XCHG_DL_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], dl
#define XCHG_DL_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], dl
#define XCHG_DL_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], dl
#define XCHG_DL_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], dl
#define XCHG_DL_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], dl
#define XCHG_DL_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], dl
#define XCHG_DL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], dl
#define XCHG_DL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], dl
#define XCHG_DL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], dl
#define XCHG_DL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], dl
#define XCHG_DL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], dl
#define XCHG_DL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], dl
#define XCHG_DL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], dl
#define XCHG_DL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], dl

#define XCHG_DIL_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], dil
#define XCHG_DIL_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], dil
#define XCHG_DIL_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], dil
#define XCHG_DIL_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], dil
#define XCHG_DIL_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], dil
#define XCHG_DIL_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], dil
#define XCHG_DIL_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], dil
#define XCHG_DIL_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], dil
#define XCHG_DIL_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], dil
#define XCHG_DIL_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], dil
#define XCHG_DIL_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], dil
#define XCHG_DIL_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], dil
#define XCHG_DIL_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], dil
#define XCHG_DIL_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], dil
#define XCHG_DIL_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], dil
#define XCHG_DIL_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], dil
#define XCHG_DIL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], dil
#define XCHG_DIL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], dil
#define XCHG_DIL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], dil
#define XCHG_DIL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], dil
#define XCHG_DIL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], dil
#define XCHG_DIL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], dil
#define XCHG_DIL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], dil
#define XCHG_DIL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], dil

#define XCHG_SIL_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], sil
#define XCHG_SIL_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], sil
#define XCHG_SIL_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], sil
#define XCHG_SIL_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], sil
#define XCHG_SIL_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], sil
#define XCHG_SIL_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], sil
#define XCHG_SIL_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], sil
#define XCHG_SIL_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], sil
#define XCHG_SIL_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], sil
#define XCHG_SIL_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], sil
#define XCHG_SIL_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], sil
#define XCHG_SIL_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], sil
#define XCHG_SIL_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], sil
#define XCHG_SIL_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], sil
#define XCHG_SIL_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], sil
#define XCHG_SIL_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], sil
#define XCHG_SIL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], sil
#define XCHG_SIL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], sil
#define XCHG_SIL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], sil
#define XCHG_SIL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], sil
#define XCHG_SIL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], sil
#define XCHG_SIL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], sil
#define XCHG_SIL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], sil
#define XCHG_SIL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], sil

#define XCHG_BPL_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], bpl
#define XCHG_BPL_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], bpl
#define XCHG_BPL_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], bpl
#define XCHG_BPL_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], bpl
#define XCHG_BPL_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], bpl
#define XCHG_BPL_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], bpl
#define XCHG_BPL_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], bpl
#define XCHG_BPL_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], bpl
#define XCHG_BPL_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], bpl
#define XCHG_BPL_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], bpl
#define XCHG_BPL_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], bpl
#define XCHG_BPL_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], bpl
#define XCHG_BPL_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], bpl
#define XCHG_BPL_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], bpl
#define XCHG_BPL_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], bpl
#define XCHG_BPL_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], bpl
#define XCHG_BPL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], bpl
#define XCHG_BPL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], bpl
#define XCHG_BPL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], bpl
#define XCHG_BPL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], bpl
#define XCHG_BPL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], bpl
#define XCHG_BPL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], bpl
#define XCHG_BPL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], bpl
#define XCHG_BPL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], bpl

#define XCHG_SPL_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], spl
#define XCHG_SPL_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], spl
#define XCHG_SPL_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], spl
#define XCHG_SPL_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], spl
#define XCHG_SPL_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], spl
#define XCHG_SPL_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], spl
#define XCHG_SPL_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], spl
#define XCHG_SPL_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], spl
#define XCHG_SPL_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], spl
#define XCHG_SPL_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], spl
#define XCHG_SPL_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], spl
#define XCHG_SPL_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], spl
#define XCHG_SPL_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], spl
#define XCHG_SPL_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], spl
#define XCHG_SPL_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], spl
#define XCHG_SPL_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], spl
#define XCHG_SPL_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], spl
#define XCHG_SPL_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], spl
#define XCHG_SPL_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], spl
#define XCHG_SPL_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], spl
#define XCHG_SPL_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], spl
#define XCHG_SPL_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], spl
#define XCHG_SPL_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], spl
#define XCHG_SPL_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], spl

#define XCHG_R8B_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], r8b
#define XCHG_R8B_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], r8b
#define XCHG_R8B_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], r8b
#define XCHG_R8B_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], r8b
#define XCHG_R8B_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], r8b
#define XCHG_R8B_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], r8b
#define XCHG_R8B_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], r8b
#define XCHG_R8B_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], r8b
#define XCHG_R8B_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], r8b
#define XCHG_R8B_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], r8b
#define XCHG_R8B_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], r8b
#define XCHG_R8B_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], r8b
#define XCHG_R8B_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], r8b
#define XCHG_R8B_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], r8b
#define XCHG_R8B_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], r8b
#define XCHG_R8B_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], r8b
#define XCHG_R8B_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], r8b
#define XCHG_R8B_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], r8b
#define XCHG_R8B_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], r8b
#define XCHG_R8B_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], r8b
#define XCHG_R8B_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], r8b
#define XCHG_R8B_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], r8b
#define XCHG_R8B_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], r8b
#define XCHG_R8B_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], r8b

#define XCHG_R9B_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], r9b
#define XCHG_R9B_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], r9b
#define XCHG_R9B_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], r9b
#define XCHG_R9B_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], r9b
#define XCHG_R9B_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], r9b
#define XCHG_R9B_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], r9b
#define XCHG_R9B_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], r9b
#define XCHG_R9B_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], r9b
#define XCHG_R9B_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], r9b
#define XCHG_R9B_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], r9b
#define XCHG_R9B_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], r9b
#define XCHG_R9B_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], r9b
#define XCHG_R9B_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], r9b
#define XCHG_R9B_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], r9b
#define XCHG_R9B_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], r9b
#define XCHG_R9B_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], r9b
#define XCHG_R9B_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], r9b
#define XCHG_R9B_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], r9b
#define XCHG_R9B_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], r9b
#define XCHG_R9B_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], r9b
#define XCHG_R9B_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], r9b
#define XCHG_R9B_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], r9b
#define XCHG_R9B_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], r9b
#define XCHG_R9B_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], r9b

#define XCHG_R10B_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], r10b
#define XCHG_R10B_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], r10b
#define XCHG_R10B_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], r10b
#define XCHG_R10B_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], r10b
#define XCHG_R10B_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], r10b
#define XCHG_R10B_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], r10b
#define XCHG_R10B_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], r10b
#define XCHG_R10B_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], r10b
#define XCHG_R10B_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], r10b
#define XCHG_R10B_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], r10b
#define XCHG_R10B_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], r10b
#define XCHG_R10B_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], r10b
#define XCHG_R10B_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], r10b
#define XCHG_R10B_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], r10b
#define XCHG_R10B_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], r10b
#define XCHG_R10B_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], r10b
#define XCHG_R10B_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], r10b
#define XCHG_R10B_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], r10b
#define XCHG_R10B_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], r10b
#define XCHG_R10B_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], r10b
#define XCHG_R10B_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], r10b
#define XCHG_R10B_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], r10b
#define XCHG_R10B_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], r10b
#define XCHG_R10B_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], r10b

#define XCHG_R11B_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], r11b
#define XCHG_R11B_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], r11b
#define XCHG_R11B_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], r11b
#define XCHG_R11B_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], r11b
#define XCHG_R11B_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], r11b
#define XCHG_R11B_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], r11b
#define XCHG_R11B_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], r11b
#define XCHG_R11B_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], r11b
#define XCHG_R11B_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], r11b
#define XCHG_R11B_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], r11b
#define XCHG_R11B_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], r11b
#define XCHG_R11B_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], r11b
#define XCHG_R11B_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], r11b
#define XCHG_R11B_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], r11b
#define XCHG_R11B_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], r11b
#define XCHG_R11B_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], r11b
#define XCHG_R11B_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], r11b
#define XCHG_R11B_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], r11b
#define XCHG_R11B_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], r11b
#define XCHG_R11B_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], r11b
#define XCHG_R11B_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], r11b
#define XCHG_R11B_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], r11b
#define XCHG_R11B_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], r11b
#define XCHG_R11B_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], r11b

#define XCHG_R12B_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], r12b
#define XCHG_R12B_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], r12b
#define XCHG_R12B_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], r12b
#define XCHG_R12B_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], r12b
#define XCHG_R12B_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], r12b
#define XCHG_R12B_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], r12b
#define XCHG_R12B_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], r12b
#define XCHG_R12B_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], r12b
#define XCHG_R12B_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], r12b
#define XCHG_R12B_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], r12b
#define XCHG_R12B_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], r12b
#define XCHG_R12B_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], r12b
#define XCHG_R12B_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], r12b
#define XCHG_R12B_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], r12b
#define XCHG_R12B_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], r12b
#define XCHG_R12B_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], r12b
#define XCHG_R12B_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], r12b
#define XCHG_R12B_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], r12b
#define XCHG_R12B_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], r12b
#define XCHG_R12B_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], r12b
#define XCHG_R12B_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], r12b
#define XCHG_R12B_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], r12b
#define XCHG_R12B_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], r12b
#define XCHG_R12B_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], r12b

#define XCHG_R13B_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], r13b
#define XCHG_R13B_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], r13b
#define XCHG_R13B_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], r13b
#define XCHG_R13B_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], r13b
#define XCHG_R13B_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], r13b
#define XCHG_R13B_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], r13b
#define XCHG_R13B_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], r13b
#define XCHG_R13B_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], r13b
#define XCHG_R13B_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], r13b
#define XCHG_R13B_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], r13b
#define XCHG_R13B_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], r13b
#define XCHG_R13B_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], r13b
#define XCHG_R13B_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], r13b
#define XCHG_R13B_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], r13b
#define XCHG_R13B_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], r13b
#define XCHG_R13B_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], r13b
#define XCHG_R13B_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], r13b
#define XCHG_R13B_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], r13b
#define XCHG_R13B_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], r13b
#define XCHG_R13B_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], r13b
#define XCHG_R13B_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], r13b
#define XCHG_R13B_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], r13b
#define XCHG_R13B_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], r13b
#define XCHG_R13B_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], r13b

#define XCHG_R14B_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], r14b
#define XCHG_R14B_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], r14b
#define XCHG_R14B_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], r14b
#define XCHG_R14B_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], r14b
#define XCHG_R14B_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], r14b
#define XCHG_R14B_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], r14b
#define XCHG_R14B_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], r14b
#define XCHG_R14B_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], r14b
#define XCHG_R14B_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], r14b
#define XCHG_R14B_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], r14b
#define XCHG_R14B_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], r14b
#define XCHG_R14B_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], r14b
#define XCHG_R14B_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], r14b
#define XCHG_R14B_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], r14b
#define XCHG_R14B_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], r14b
#define XCHG_R14B_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], r14b
#define XCHG_R14B_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], r14b
#define XCHG_R14B_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], r14b
#define XCHG_R14B_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], r14b
#define XCHG_R14B_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], r14b
#define XCHG_R14B_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], r14b
#define XCHG_R14B_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], r14b
#define XCHG_R14B_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], r14b
#define XCHG_R14B_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], r14b

#define XCHG_R15B_TO_PTR_RAX_(VALUE) xchg byte ptr [rax + VALUE], r15b
#define XCHG_R15B_TO_PTR_RBX_(VALUE) xchg byte ptr [rbx + VALUE], r15b
#define XCHG_R15B_TO_PTR_RCX_(VALUE) xchg byte ptr [rcx + VALUE], r15b
#define XCHG_R15B_TO_PTR_RDX_(VALUE) xchg byte ptr [rdx + VALUE], r15b
#define XCHG_R15B_TO_PTR_RDI_(VALUE) xchg byte ptr [rdi + VALUE], r15b
#define XCHG_R15B_TO_PTR_RSI_(VALUE) xchg byte ptr [rsi + VALUE], r15b
#define XCHG_R15B_TO_PTR_RBP_(VALUE) xchg byte ptr [rbp + VALUE], r15b
#define XCHG_R15B_TO_PTR_RSP_(VALUE) xchg byte ptr [rsp + VALUE], r15b
#define XCHG_R15B_TO_PTR_R8_(VALUE) xchg byte ptr [r8 + VALUE], r15b
#define XCHG_R15B_TO_PTR_R9_(VALUE) xchg byte ptr [r9 + VALUE], r15b
#define XCHG_R15B_TO_PTR_R10_(VALUE) xchg byte ptr [r10 + VALUE], r15b
#define XCHG_R15B_TO_PTR_R11_(VALUE) xchg byte ptr [r11 + VALUE], r15b
#define XCHG_R15B_TO_PTR_R12_(VALUE) xchg byte ptr [r12 + VALUE], r15b
#define XCHG_R15B_TO_PTR_R13_(VALUE) xchg byte ptr [r13 + VALUE], r15b
#define XCHG_R15B_TO_PTR_R14_(VALUE) xchg byte ptr [r14 + VALUE], r15b
#define XCHG_R15B_TO_PTR_R15_(VALUE) xchg byte ptr [r15 + VALUE], r15b
#define XCHG_R15B_TO_PTR_EAX_(VALUE) xchg byte ptr [eax + VALUE], r15b
#define XCHG_R15B_TO_PTR_EBX_(VALUE) xchg byte ptr [ebx + VALUE], r15b
#define XCHG_R15B_TO_PTR_ECX_(VALUE) xchg byte ptr [ecx + VALUE], r15b
#define XCHG_R15B_TO_PTR_EDX_(VALUE) xchg byte ptr [edx + VALUE], r15b
#define XCHG_R15B_TO_PTR_EDI_(VALUE) xchg byte ptr [edi + VALUE], r15b
#define XCHG_R15B_TO_PTR_ESI_(VALUE) xchg byte ptr [esi + VALUE], r15b
#define XCHG_R15B_TO_PTR_EBP_(VALUE) xchg byte ptr [ebp + VALUE], r15b
#define XCHG_R15B_TO_PTR_ESP_(VALUE) xchg byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define XCHG_AX_FROM_PTR_(VALUE) xchg ax, word ptr [VALUE]
#define XCHG_BX_FROM_PTR_(VALUE) xchg bx, word ptr [VALUE]
#define XCHG_CX_FROM_PTR_(VALUE) xchg cx, word ptr [VALUE]
#define XCHG_DX_FROM_PTR_(VALUE) xchg dx, word ptr [VALUE]
#define XCHG_DI_FROM_PTR_(VALUE) xchg di, word ptr [VALUE]
#define XCHG_SI_FROM_PTR_(VALUE) xchg si, word ptr [VALUE]
#define XCHG_BP_FROM_PTR_(VALUE) xchg bp, word ptr [VALUE]
#define XCHG_SP_FROM_PTR_(VALUE) xchg sp, word ptr [VALUE]

#define XCHG_AX_TO_PTR_(VALUE) xchg word ptr [VALUE], ax
#define XCHG_BX_TO_PTR_(VALUE) xchg word ptr [VALUE], bx
#define XCHG_CX_TO_PTR_(VALUE) xchg word ptr [VALUE], cx
#define XCHG_DX_TO_PTR_(VALUE) xchg word ptr [VALUE], dx
#define XCHG_DI_TO_PTR_(VALUE) xchg word ptr [VALUE], di
#define XCHG_SI_TO_PTR_(VALUE) xchg word ptr [VALUE], si
#define XCHG_BP_TO_PTR_(VALUE) xchg word ptr [VALUE], bp
#define XCHG_SP_TO_PTR_(VALUE) xchg word ptr [VALUE], sp

#define XCHG_AX_FROM_PTR_BX xchg ax, word ptr [bx]
#define XCHG_AX_FROM_PTR_BP xchg ax, word ptr [bp]
#define XCHG_AX_FROM_PTR_SI xchg ax, word ptr [si]
#define XCHG_AX_FROM_PTR_DI xchg ax, word ptr [di]

#define XCHG_BX_FROM_PTR_BX xchg bx, word ptr [bx]
#define XCHG_BX_FROM_PTR_BP xchg bx, word ptr [bp]
#define XCHG_BX_FROM_PTR_SI xchg bx, word ptr [si]
#define XCHG_BX_FROM_PTR_DI xchg bx, word ptr [di]

#define XCHG_CX_FROM_PTR_BX xchg cx, word ptr [bx]
#define XCHG_CX_FROM_PTR_BP xchg cx, word ptr [bp]
#define XCHG_CX_FROM_PTR_SI xchg cx, word ptr [si]
#define XCHG_CX_FROM_PTR_DI xchg cx, word ptr [di]

#define XCHG_DX_FROM_PTR_BX xchg dx, word ptr [bx]
#define XCHG_DX_FROM_PTR_BP xchg dx, word ptr [bp]
#define XCHG_DX_FROM_PTR_SI xchg dx, word ptr [si]
#define XCHG_DX_FROM_PTR_DI xchg dx, word ptr [di]

#define XCHG_DI_FROM_PTR_BX xchg di, word ptr [bx]
#define XCHG_DI_FROM_PTR_BP xchg di, word ptr [bp]
#define XCHG_DI_FROM_PTR_SI xchg di, word ptr [si]
#define XCHG_DI_FROM_PTR_DI xchg di, word ptr [di]

#define XCHG_SI_FROM_PTR_BX xchg si, word ptr [bx]
#define XCHG_SI_FROM_PTR_BP xchg si, word ptr [bp]
#define XCHG_SI_FROM_PTR_SI xchg si, word ptr [si]
#define XCHG_SI_FROM_PTR_DI xchg si, word ptr [di]

#define XCHG_BP_FROM_PTR_BX xchg bp, word ptr [bx]
#define XCHG_BP_FROM_PTR_BP xchg bp, word ptr [bp]
#define XCHG_BP_FROM_PTR_SI xchg bp, word ptr [si]
#define XCHG_BP_FROM_PTR_DI xchg bp, word ptr [di]

#define XCHG_SP_FROM_PTR_BX xchg sp, word ptr [bx]
#define XCHG_SP_FROM_PTR_BP xchg sp, word ptr [bp]
#define XCHG_SP_FROM_PTR_SI xchg sp, word ptr [si]
#define XCHG_SP_FROM_PTR_DI xchg sp, word ptr [di]

#define XCHG_AX_TO_PTR_BX xchg word ptr [bx], ax
#define XCHG_AX_TO_PTR_BP xchg word ptr [bp], ax
#define XCHG_AX_TO_PTR_SI xchg word ptr [si], ax
#define XCHG_AX_TO_PTR_DI xchg word ptr [di], ax

#define XCHG_BX_TO_PTR_BX xchg word ptr [bx], bx
#define XCHG_BX_TO_PTR_BP xchg word ptr [bp], bx
#define XCHG_BX_TO_PTR_SI xchg word ptr [si], bx
#define XCHG_BX_TO_PTR_DI xchg word ptr [di], bx

#define XCHG_CX_TO_PTR_BX xchg word ptr [bx], cx
#define XCHG_CX_TO_PTR_BP xchg word ptr [bp], cx
#define XCHG_CX_TO_PTR_SI xchg word ptr [si], cx
#define XCHG_CX_TO_PTR_DI xchg word ptr [di], cx

#define XCHG_DX_TO_PTR_BX xchg word ptr [bx], dx
#define XCHG_DX_TO_PTR_BP xchg word ptr [bp], dx
#define XCHG_DX_TO_PTR_SI xchg word ptr [si], dx
#define XCHG_DX_TO_PTR_DI xchg word ptr [di], dx

#define XCHG_DI_TO_PTR_BX xchg word ptr [bx], di
#define XCHG_DI_TO_PTR_BP xchg word ptr [bp], di
#define XCHG_DI_TO_PTR_SI xchg word ptr [si], di
#define XCHG_DI_TO_PTR_DI xchg word ptr [di], di

#define XCHG_SI_TO_PTR_BX xchg word ptr [bx], si
#define XCHG_SI_TO_PTR_BP xchg word ptr [bp], si
#define XCHG_SI_TO_PTR_SI xchg word ptr [si], si
#define XCHG_SI_TO_PTR_DI xchg word ptr [di], si

#define XCHG_BP_TO_PTR_BX xchg word ptr [bx], bp
#define XCHG_BP_TO_PTR_BP xchg word ptr [bp], bp
#define XCHG_BP_TO_PTR_SI xchg word ptr [si], bp
#define XCHG_BP_TO_PTR_DI xchg word ptr [di], bp

#define XCHG_SP_TO_PTR_BX xchg word ptr [bx], sp
#define XCHG_SP_TO_PTR_BP xchg word ptr [bp], sp
#define XCHG_SP_TO_PTR_SI xchg word ptr [si], sp
#define XCHG_SP_TO_PTR_DI xchg word ptr [di], sp

#define XCHG_AX_FROM_PTR_BX_(VALUE) xchg ax, word ptr [bx + VALUE]
#define XCHG_AX_FROM_PTR_BP_(VALUE) xchg ax, word ptr [bp + VALUE]
#define XCHG_AX_FROM_PTR_SI_(VALUE) xchg ax, word ptr [si + VALUE]
#define XCHG_AX_FROM_PTR_DI_(VALUE) xchg ax, word ptr [di + VALUE]

#define XCHG_BX_FROM_PTR_BX_(VALUE) xchg bx, word ptr [bx + VALUE]
#define XCHG_BX_FROM_PTR_BP_(VALUE) xchg bx, word ptr [bp + VALUE]
#define XCHG_BX_FROM_PTR_SI_(VALUE) xchg bx, word ptr [si + VALUE]
#define XCHG_BX_FROM_PTR_DI_(VALUE) xchg bx, word ptr [di + VALUE]

#define XCHG_CX_FROM_PTR_BX_(VALUE) xchg cx, word ptr [bx + VALUE]
#define XCHG_CX_FROM_PTR_BP_(VALUE) xchg cx, word ptr [bp + VALUE]
#define XCHG_CX_FROM_PTR_SI_(VALUE) xchg cx, word ptr [si + VALUE]
#define XCHG_CX_FROM_PTR_DI_(VALUE) xchg cx, word ptr [di + VALUE]

#define XCHG_DX_FROM_PTR_BX_(VALUE) xchg dx, word ptr [bx + VALUE]
#define XCHG_DX_FROM_PTR_BP_(VALUE) xchg dx, word ptr [bp + VALUE]
#define XCHG_DX_FROM_PTR_SI_(VALUE) xchg dx, word ptr [si + VALUE]
#define XCHG_DX_FROM_PTR_DI_(VALUE) xchg dx, word ptr [di + VALUE]

#define XCHG_DI_FROM_PTR_BX_(VALUE) xchg di, word ptr [bx + VALUE]
#define XCHG_DI_FROM_PTR_BP_(VALUE) xchg di, word ptr [bp + VALUE]
#define XCHG_DI_FROM_PTR_SI_(VALUE) xchg di, word ptr [si + VALUE]
#define XCHG_DI_FROM_PTR_DI_(VALUE) xchg di, word ptr [di + VALUE]

#define XCHG_SI_FROM_PTR_BX_(VALUE) xchg si, word ptr [bx + VALUE]
#define XCHG_SI_FROM_PTR_BP_(VALUE) xchg si, word ptr [bp + VALUE]
#define XCHG_SI_FROM_PTR_SI_(VALUE) xchg si, word ptr [si + VALUE]
#define XCHG_SI_FROM_PTR_DI_(VALUE) xchg si, word ptr [di + VALUE]

#define XCHG_BP_FROM_PTR_BX_(VALUE) xchg bp, word ptr [bx + VALUE]
#define XCHG_BP_FROM_PTR_BP_(VALUE) xchg bp, word ptr [bp + VALUE]
#define XCHG_BP_FROM_PTR_SI_(VALUE) xchg bp, word ptr [si + VALUE]
#define XCHG_BP_FROM_PTR_DI_(VALUE) xchg bp, word ptr [di + VALUE]

#define XCHG_SP_FROM_PTR_BX_(VALUE) xchg sp, word ptr [bx + VALUE]
#define XCHG_SP_FROM_PTR_BP_(VALUE) xchg sp, word ptr [bp + VALUE]
#define XCHG_SP_FROM_PTR_SI_(VALUE) xchg sp, word ptr [si + VALUE]
#define XCHG_SP_FROM_PTR_DI_(VALUE) xchg sp, word ptr [di + VALUE]

#define XCHG_AX_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], ax
#define XCHG_AX_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], ax
#define XCHG_AX_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], ax
#define XCHG_AX_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], ax

#define XCHG_BX_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], bx
#define XCHG_BX_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], bx
#define XCHG_BX_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], bx
#define XCHG_BX_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], bx

#define XCHG_CX_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], cx
#define XCHG_CX_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], cx
#define XCHG_CX_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], cx
#define XCHG_CX_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], cx

#define XCHG_DX_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], dx
#define XCHG_DX_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], dx
#define XCHG_DX_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], dx
#define XCHG_DX_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], dx

#define XCHG_DI_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], di
#define XCHG_DI_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], di
#define XCHG_DI_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], di
#define XCHG_DI_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], di

#define XCHG_SI_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], si
#define XCHG_SI_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], si
#define XCHG_SI_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], si
#define XCHG_SI_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], si

#define XCHG_BP_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], bp
#define XCHG_BP_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], bp
#define XCHG_BP_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], bp
#define XCHG_BP_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], bp

#define XCHG_SP_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], sp
#define XCHG_SP_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], sp
#define XCHG_SP_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], sp
#define XCHG_SP_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XCHG_AX_FROM_PTR_(VALUE) xchg ax, word ptr [VALUE]
#define XCHG_BX_FROM_PTR_(VALUE) xchg bx, word ptr [VALUE]
#define XCHG_CX_FROM_PTR_(VALUE) xchg cx, word ptr [VALUE]
#define XCHG_DX_FROM_PTR_(VALUE) xchg dx, word ptr [VALUE]
#define XCHG_DI_FROM_PTR_(VALUE) xchg di, word ptr [VALUE]
#define XCHG_SI_FROM_PTR_(VALUE) xchg si, word ptr [VALUE]
#define XCHG_BP_FROM_PTR_(VALUE) xchg bp, word ptr [VALUE]
#define XCHG_SP_FROM_PTR_(VALUE) xchg sp, word ptr [VALUE]

#define XCHG_AX_TO_PTR_(VALUE) xchg word ptr [VALUE], ax
#define XCHG_BX_TO_PTR_(VALUE) xchg word ptr [VALUE], bx
#define XCHG_CX_TO_PTR_(VALUE) xchg word ptr [VALUE], cx
#define XCHG_DX_TO_PTR_(VALUE) xchg word ptr [VALUE], dx
#define XCHG_DI_TO_PTR_(VALUE) xchg word ptr [VALUE], di
#define XCHG_SI_TO_PTR_(VALUE) xchg word ptr [VALUE], si
#define XCHG_BP_TO_PTR_(VALUE) xchg word ptr [VALUE], bp
#define XCHG_SP_TO_PTR_(VALUE) xchg word ptr [VALUE], sp

#define XCHG_AX_FROM_PTR_EAX xchg ax, word ptr [eax]
#define XCHG_AX_FROM_PTR_EBX xchg ax, word ptr [ebx]
#define XCHG_AX_FROM_PTR_ECX xchg ax, word ptr [ecx]
#define XCHG_AX_FROM_PTR_EDX xchg ax, word ptr [edx]
#define XCHG_AX_FROM_PTR_EDI xchg ax, word ptr [edi]
#define XCHG_AX_FROM_PTR_ESI xchg ax, word ptr [esi]
#define XCHG_AX_FROM_PTR_EBP xchg ax, word ptr [ebp]
#define XCHG_AX_FROM_PTR_ESP xchg ax, word ptr [esp]
#define XCHG_AX_FROM_PTR_BX xchg ax, word ptr [bx]
#define XCHG_AX_FROM_PTR_BP xchg ax, word ptr [bp]
#define XCHG_AX_FROM_PTR_SI xchg ax, word ptr [si]
#define XCHG_AX_FROM_PTR_DI xchg ax, word ptr [di]

#define XCHG_BX_FROM_PTR_EAX xchg bx, word ptr [eax]
#define XCHG_BX_FROM_PTR_EBX xchg bx, word ptr [ebx]
#define XCHG_BX_FROM_PTR_ECX xchg bx, word ptr [ecx]
#define XCHG_BX_FROM_PTR_EDX xchg bx, word ptr [edx]
#define XCHG_BX_FROM_PTR_EDI xchg bx, word ptr [edi]
#define XCHG_BX_FROM_PTR_ESI xchg bx, word ptr [esi]
#define XCHG_BX_FROM_PTR_EBP xchg bx, word ptr [ebp]
#define XCHG_BX_FROM_PTR_ESP xchg bx, word ptr [esp]
#define XCHG_BX_FROM_PTR_BX xchg bx, word ptr [bx]
#define XCHG_BX_FROM_PTR_BP xchg bx, word ptr [bp]
#define XCHG_BX_FROM_PTR_SI xchg bx, word ptr [si]
#define XCHG_BX_FROM_PTR_DI xchg bx, word ptr [di]

#define XCHG_CX_FROM_PTR_EAX xchg cx, word ptr [eax]
#define XCHG_CX_FROM_PTR_EBX xchg cx, word ptr [ebx]
#define XCHG_CX_FROM_PTR_ECX xchg cx, word ptr [ecx]
#define XCHG_CX_FROM_PTR_EDX xchg cx, word ptr [edx]
#define XCHG_CX_FROM_PTR_EDI xchg cx, word ptr [edi]
#define XCHG_CX_FROM_PTR_ESI xchg cx, word ptr [esi]
#define XCHG_CX_FROM_PTR_EBP xchg cx, word ptr [ebp]
#define XCHG_CX_FROM_PTR_ESP xchg cx, word ptr [esp]
#define XCHG_CX_FROM_PTR_BX xchg cx, word ptr [bx]
#define XCHG_CX_FROM_PTR_BP xchg cx, word ptr [bp]
#define XCHG_CX_FROM_PTR_SI xchg cx, word ptr [si]
#define XCHG_CX_FROM_PTR_DI xchg cx, word ptr [di]

#define XCHG_DX_FROM_PTR_EAX xchg dx, word ptr [eax]
#define XCHG_DX_FROM_PTR_EBX xchg dx, word ptr [ebx]
#define XCHG_DX_FROM_PTR_ECX xchg dx, word ptr [ecx]
#define XCHG_DX_FROM_PTR_EDX xchg dx, word ptr [edx]
#define XCHG_DX_FROM_PTR_EDI xchg dx, word ptr [edi]
#define XCHG_DX_FROM_PTR_ESI xchg dx, word ptr [esi]
#define XCHG_DX_FROM_PTR_EBP xchg dx, word ptr [ebp]
#define XCHG_DX_FROM_PTR_ESP xchg dx, word ptr [esp]
#define XCHG_DX_FROM_PTR_BX xchg dx, word ptr [bx]
#define XCHG_DX_FROM_PTR_BP xchg dx, word ptr [bp]
#define XCHG_DX_FROM_PTR_SI xchg dx, word ptr [si]
#define XCHG_DX_FROM_PTR_DI xchg dx, word ptr [di]

#define XCHG_DI_FROM_PTR_EAX xchg di, word ptr [eax]
#define XCHG_DI_FROM_PTR_EBX xchg di, word ptr [ebx]
#define XCHG_DI_FROM_PTR_ECX xchg di, word ptr [ecx]
#define XCHG_DI_FROM_PTR_EDX xchg di, word ptr [edx]
#define XCHG_DI_FROM_PTR_EDI xchg di, word ptr [edi]
#define XCHG_DI_FROM_PTR_ESI xchg di, word ptr [esi]
#define XCHG_DI_FROM_PTR_EBP xchg di, word ptr [ebp]
#define XCHG_DI_FROM_PTR_ESP xchg di, word ptr [esp]
#define XCHG_DI_FROM_PTR_BX xchg di, word ptr [bx]
#define XCHG_DI_FROM_PTR_BP xchg di, word ptr [bp]
#define XCHG_DI_FROM_PTR_SI xchg di, word ptr [si]
#define XCHG_DI_FROM_PTR_DI xchg di, word ptr [di]

#define XCHG_SI_FROM_PTR_EAX xchg si, word ptr [eax]
#define XCHG_SI_FROM_PTR_EBX xchg si, word ptr [ebx]
#define XCHG_SI_FROM_PTR_ECX xchg si, word ptr [ecx]
#define XCHG_SI_FROM_PTR_EDX xchg si, word ptr [edx]
#define XCHG_SI_FROM_PTR_EDI xchg si, word ptr [edi]
#define XCHG_SI_FROM_PTR_ESI xchg si, word ptr [esi]
#define XCHG_SI_FROM_PTR_EBP xchg si, word ptr [ebp]
#define XCHG_SI_FROM_PTR_ESP xchg si, word ptr [esp]
#define XCHG_SI_FROM_PTR_BX xchg si, word ptr [bx]
#define XCHG_SI_FROM_PTR_BP xchg si, word ptr [bp]
#define XCHG_SI_FROM_PTR_SI xchg si, word ptr [si]
#define XCHG_SI_FROM_PTR_DI xchg si, word ptr [di]

#define XCHG_BP_FROM_PTR_EAX xchg bp, word ptr [eax]
#define XCHG_BP_FROM_PTR_EBX xchg bp, word ptr [ebx]
#define XCHG_BP_FROM_PTR_ECX xchg bp, word ptr [ecx]
#define XCHG_BP_FROM_PTR_EDX xchg bp, word ptr [edx]
#define XCHG_BP_FROM_PTR_EDI xchg bp, word ptr [edi]
#define XCHG_BP_FROM_PTR_ESI xchg bp, word ptr [esi]
#define XCHG_BP_FROM_PTR_EBP xchg bp, word ptr [ebp]
#define XCHG_BP_FROM_PTR_ESP xchg bp, word ptr [esp]
#define XCHG_BP_FROM_PTR_BX xchg bp, word ptr [bx]
#define XCHG_BP_FROM_PTR_BP xchg bp, word ptr [bp]
#define XCHG_BP_FROM_PTR_SI xchg bp, word ptr [si]
#define XCHG_BP_FROM_PTR_DI xchg bp, word ptr [di]

#define XCHG_SP_FROM_PTR_EAX xchg sp, word ptr [eax]
#define XCHG_SP_FROM_PTR_EBX xchg sp, word ptr [ebx]
#define XCHG_SP_FROM_PTR_ECX xchg sp, word ptr [ecx]
#define XCHG_SP_FROM_PTR_EDX xchg sp, word ptr [edx]
#define XCHG_SP_FROM_PTR_EDI xchg sp, word ptr [edi]
#define XCHG_SP_FROM_PTR_ESI xchg sp, word ptr [esi]
#define XCHG_SP_FROM_PTR_EBP xchg sp, word ptr [ebp]
#define XCHG_SP_FROM_PTR_ESP xchg sp, word ptr [esp]
#define XCHG_SP_FROM_PTR_BX xchg sp, word ptr [bx]
#define XCHG_SP_FROM_PTR_BP xchg sp, word ptr [bp]
#define XCHG_SP_FROM_PTR_SI xchg sp, word ptr [si]
#define XCHG_SP_FROM_PTR_DI xchg sp, word ptr [di]

#define XCHG_AX_TO_PTR_EAX xchg word ptr [eax], ax
#define XCHG_AX_TO_PTR_EBX xchg word ptr [ebx], ax
#define XCHG_AX_TO_PTR_ECX xchg word ptr [ecx], ax
#define XCHG_AX_TO_PTR_EDX xchg word ptr [edx], ax
#define XCHG_AX_TO_PTR_EDI xchg word ptr [edi], ax
#define XCHG_AX_TO_PTR_ESI xchg word ptr [esi], ax
#define XCHG_AX_TO_PTR_EBP xchg word ptr [ebp], ax
#define XCHG_AX_TO_PTR_ESP xchg word ptr [esp], ax
#define XCHG_AX_TO_PTR_BX xchg word ptr [bx], ax
#define XCHG_AX_TO_PTR_BP xchg word ptr [bp], ax
#define XCHG_AX_TO_PTR_SI xchg word ptr [si], ax
#define XCHG_AX_TO_PTR_DI xchg word ptr [di], ax

#define XCHG_BX_TO_PTR_EAX xchg word ptr [eax], bx
#define XCHG_BX_TO_PTR_EBX xchg word ptr [ebx], bx
#define XCHG_BX_TO_PTR_ECX xchg word ptr [ecx], bx
#define XCHG_BX_TO_PTR_EDX xchg word ptr [edx], bx
#define XCHG_BX_TO_PTR_EDI xchg word ptr [edi], bx
#define XCHG_BX_TO_PTR_ESI xchg word ptr [esi], bx
#define XCHG_BX_TO_PTR_EBP xchg word ptr [ebp], bx
#define XCHG_BX_TO_PTR_ESP xchg word ptr [esp], bx
#define XCHG_BX_TO_PTR_BX xchg word ptr [bx], bx
#define XCHG_BX_TO_PTR_BP xchg word ptr [bp], bx
#define XCHG_BX_TO_PTR_SI xchg word ptr [si], bx
#define XCHG_BX_TO_PTR_DI xchg word ptr [di], bx

#define XCHG_CX_TO_PTR_EAX xchg word ptr [eax], cx
#define XCHG_CX_TO_PTR_EBX xchg word ptr [ebx], cx
#define XCHG_CX_TO_PTR_ECX xchg word ptr [ecx], cx
#define XCHG_CX_TO_PTR_EDX xchg word ptr [edx], cx
#define XCHG_CX_TO_PTR_EDI xchg word ptr [edi], cx
#define XCHG_CX_TO_PTR_ESI xchg word ptr [esi], cx
#define XCHG_CX_TO_PTR_EBP xchg word ptr [ebp], cx
#define XCHG_CX_TO_PTR_ESP xchg word ptr [esp], cx
#define XCHG_CX_TO_PTR_BX xchg word ptr [bx], cx
#define XCHG_CX_TO_PTR_BP xchg word ptr [bp], cx
#define XCHG_CX_TO_PTR_SI xchg word ptr [si], cx
#define XCHG_CX_TO_PTR_DI xchg word ptr [di], cx

#define XCHG_DX_TO_PTR_EAX xchg word ptr [eax], dx
#define XCHG_DX_TO_PTR_EBX xchg word ptr [ebx], dx
#define XCHG_DX_TO_PTR_ECX xchg word ptr [ecx], dx
#define XCHG_DX_TO_PTR_EDX xchg word ptr [edx], dx
#define XCHG_DX_TO_PTR_EDI xchg word ptr [edi], dx
#define XCHG_DX_TO_PTR_ESI xchg word ptr [esi], dx
#define XCHG_DX_TO_PTR_EBP xchg word ptr [ebp], dx
#define XCHG_DX_TO_PTR_ESP xchg word ptr [esp], dx
#define XCHG_DX_TO_PTR_BX xchg word ptr [bx], dx
#define XCHG_DX_TO_PTR_BP xchg word ptr [bp], dx
#define XCHG_DX_TO_PTR_SI xchg word ptr [si], dx
#define XCHG_DX_TO_PTR_DI xchg word ptr [di], dx

#define XCHG_DI_TO_PTR_EAX xchg word ptr [eax], di
#define XCHG_DI_TO_PTR_EBX xchg word ptr [ebx], di
#define XCHG_DI_TO_PTR_ECX xchg word ptr [ecx], di
#define XCHG_DI_TO_PTR_EDX xchg word ptr [edx], di
#define XCHG_DI_TO_PTR_EDI xchg word ptr [edi], di
#define XCHG_DI_TO_PTR_ESI xchg word ptr [esi], di
#define XCHG_DI_TO_PTR_EBP xchg word ptr [ebp], di
#define XCHG_DI_TO_PTR_ESP xchg word ptr [esp], di
#define XCHG_DI_TO_PTR_BX xchg word ptr [bx], di
#define XCHG_DI_TO_PTR_BP xchg word ptr [bp], di
#define XCHG_DI_TO_PTR_SI xchg word ptr [si], di
#define XCHG_DI_TO_PTR_DI xchg word ptr [di], di

#define XCHG_SI_TO_PTR_EAX xchg word ptr [eax], si
#define XCHG_SI_TO_PTR_EBX xchg word ptr [ebx], si
#define XCHG_SI_TO_PTR_ECX xchg word ptr [ecx], si
#define XCHG_SI_TO_PTR_EDX xchg word ptr [edx], si
#define XCHG_SI_TO_PTR_EDI xchg word ptr [edi], si
#define XCHG_SI_TO_PTR_ESI xchg word ptr [esi], si
#define XCHG_SI_TO_PTR_EBP xchg word ptr [ebp], si
#define XCHG_SI_TO_PTR_ESP xchg word ptr [esp], si
#define XCHG_SI_TO_PTR_BX xchg word ptr [bx], si
#define XCHG_SI_TO_PTR_BP xchg word ptr [bp], si
#define XCHG_SI_TO_PTR_SI xchg word ptr [si], si
#define XCHG_SI_TO_PTR_DI xchg word ptr [di], si

#define XCHG_BP_TO_PTR_EAX xchg word ptr [eax], bp
#define XCHG_BP_TO_PTR_EBX xchg word ptr [ebx], bp
#define XCHG_BP_TO_PTR_ECX xchg word ptr [ecx], bp
#define XCHG_BP_TO_PTR_EDX xchg word ptr [edx], bp
#define XCHG_BP_TO_PTR_EDI xchg word ptr [edi], bp
#define XCHG_BP_TO_PTR_ESI xchg word ptr [esi], bp
#define XCHG_BP_TO_PTR_EBP xchg word ptr [ebp], bp
#define XCHG_BP_TO_PTR_ESP xchg word ptr [esp], bp
#define XCHG_BP_TO_PTR_BX xchg word ptr [bx], bp
#define XCHG_BP_TO_PTR_BP xchg word ptr [bp], bp
#define XCHG_BP_TO_PTR_SI xchg word ptr [si], bp
#define XCHG_BP_TO_PTR_DI xchg word ptr [di], bp

#define XCHG_SP_TO_PTR_EAX xchg word ptr [eax], sp
#define XCHG_SP_TO_PTR_EBX xchg word ptr [ebx], sp
#define XCHG_SP_TO_PTR_ECX xchg word ptr [ecx], sp
#define XCHG_SP_TO_PTR_EDX xchg word ptr [edx], sp
#define XCHG_SP_TO_PTR_EDI xchg word ptr [edi], sp
#define XCHG_SP_TO_PTR_ESI xchg word ptr [esi], sp
#define XCHG_SP_TO_PTR_EBP xchg word ptr [ebp], sp
#define XCHG_SP_TO_PTR_ESP xchg word ptr [esp], sp
#define XCHG_SP_TO_PTR_BX xchg word ptr [bx], sp
#define XCHG_SP_TO_PTR_BP xchg word ptr [bp], sp
#define XCHG_SP_TO_PTR_SI xchg word ptr [si], sp
#define XCHG_SP_TO_PTR_DI xchg word ptr [di], sp

#define XCHG_AX_FROM_PTR_EAX_(VALUE) xchg ax, word ptr [eax + VALUE]
#define XCHG_AX_FROM_PTR_EBX_(VALUE) xchg ax, word ptr [ebx + VALUE]
#define XCHG_AX_FROM_PTR_ECX_(VALUE) xchg ax, word ptr [ecx + VALUE]
#define XCHG_AX_FROM_PTR_EDX_(VALUE) xchg ax, word ptr [edx + VALUE]
#define XCHG_AX_FROM_PTR_EDI_(VALUE) xchg ax, word ptr [edi + VALUE]
#define XCHG_AX_FROM_PTR_ESI_(VALUE) xchg ax, word ptr [esi + VALUE]
#define XCHG_AX_FROM_PTR_EBP_(VALUE) xchg ax, word ptr [ebp + VALUE]
#define XCHG_AX_FROM_PTR_ESP_(VALUE) xchg ax, word ptr [esp + VALUE]
#define XCHG_AX_FROM_PTR_BX_(VALUE) xchg ax, word ptr [bx + VALUE]
#define XCHG_AX_FROM_PTR_BP_(VALUE) xchg ax, word ptr [bp + VALUE]
#define XCHG_AX_FROM_PTR_SI_(VALUE) xchg ax, word ptr [si + VALUE]
#define XCHG_AX_FROM_PTR_DI_(VALUE) xchg ax, word ptr [di + VALUE]

#define XCHG_BX_FROM_PTR_EAX_(VALUE) xchg bx, word ptr [eax + VALUE]
#define XCHG_BX_FROM_PTR_EBX_(VALUE) xchg bx, word ptr [ebx + VALUE]
#define XCHG_BX_FROM_PTR_ECX_(VALUE) xchg bx, word ptr [ecx + VALUE]
#define XCHG_BX_FROM_PTR_EDX_(VALUE) xchg bx, word ptr [edx + VALUE]
#define XCHG_BX_FROM_PTR_EDI_(VALUE) xchg bx, word ptr [edi + VALUE]
#define XCHG_BX_FROM_PTR_ESI_(VALUE) xchg bx, word ptr [esi + VALUE]
#define XCHG_BX_FROM_PTR_EBP_(VALUE) xchg bx, word ptr [ebp + VALUE]
#define XCHG_BX_FROM_PTR_ESP_(VALUE) xchg bx, word ptr [esp + VALUE]
#define XCHG_BX_FROM_PTR_BX_(VALUE) xchg bx, word ptr [bx + VALUE]
#define XCHG_BX_FROM_PTR_BP_(VALUE) xchg bx, word ptr [bp + VALUE]
#define XCHG_BX_FROM_PTR_SI_(VALUE) xchg bx, word ptr [si + VALUE]
#define XCHG_BX_FROM_PTR_DI_(VALUE) xchg bx, word ptr [di + VALUE]

#define XCHG_CX_FROM_PTR_EAX_(VALUE) xchg cx, word ptr [eax + VALUE]
#define XCHG_CX_FROM_PTR_EBX_(VALUE) xchg cx, word ptr [ebx + VALUE]
#define XCHG_CX_FROM_PTR_ECX_(VALUE) xchg cx, word ptr [ecx + VALUE]
#define XCHG_CX_FROM_PTR_EDX_(VALUE) xchg cx, word ptr [edx + VALUE]
#define XCHG_CX_FROM_PTR_EDI_(VALUE) xchg cx, word ptr [edi + VALUE]
#define XCHG_CX_FROM_PTR_ESI_(VALUE) xchg cx, word ptr [esi + VALUE]
#define XCHG_CX_FROM_PTR_EBP_(VALUE) xchg cx, word ptr [ebp + VALUE]
#define XCHG_CX_FROM_PTR_ESP_(VALUE) xchg cx, word ptr [esp + VALUE]
#define XCHG_CX_FROM_PTR_BX_(VALUE) xchg cx, word ptr [bx + VALUE]
#define XCHG_CX_FROM_PTR_BP_(VALUE) xchg cx, word ptr [bp + VALUE]
#define XCHG_CX_FROM_PTR_SI_(VALUE) xchg cx, word ptr [si + VALUE]
#define XCHG_CX_FROM_PTR_DI_(VALUE) xchg cx, word ptr [di + VALUE]

#define XCHG_DX_FROM_PTR_EAX_(VALUE) xchg dx, word ptr [eax + VALUE]
#define XCHG_DX_FROM_PTR_EBX_(VALUE) xchg dx, word ptr [ebx + VALUE]
#define XCHG_DX_FROM_PTR_ECX_(VALUE) xchg dx, word ptr [ecx + VALUE]
#define XCHG_DX_FROM_PTR_EDX_(VALUE) xchg dx, word ptr [edx + VALUE]
#define XCHG_DX_FROM_PTR_EDI_(VALUE) xchg dx, word ptr [edi + VALUE]
#define XCHG_DX_FROM_PTR_ESI_(VALUE) xchg dx, word ptr [esi + VALUE]
#define XCHG_DX_FROM_PTR_EBP_(VALUE) xchg dx, word ptr [ebp + VALUE]
#define XCHG_DX_FROM_PTR_ESP_(VALUE) xchg dx, word ptr [esp + VALUE]
#define XCHG_DX_FROM_PTR_BX_(VALUE) xchg dx, word ptr [bx + VALUE]
#define XCHG_DX_FROM_PTR_BP_(VALUE) xchg dx, word ptr [bp + VALUE]
#define XCHG_DX_FROM_PTR_SI_(VALUE) xchg dx, word ptr [si + VALUE]
#define XCHG_DX_FROM_PTR_DI_(VALUE) xchg dx, word ptr [di + VALUE]

#define XCHG_DI_FROM_PTR_EAX_(VALUE) xchg di, word ptr [eax + VALUE]
#define XCHG_DI_FROM_PTR_EBX_(VALUE) xchg di, word ptr [ebx + VALUE]
#define XCHG_DI_FROM_PTR_ECX_(VALUE) xchg di, word ptr [ecx + VALUE]
#define XCHG_DI_FROM_PTR_EDX_(VALUE) xchg di, word ptr [edx + VALUE]
#define XCHG_DI_FROM_PTR_EDI_(VALUE) xchg di, word ptr [edi + VALUE]
#define XCHG_DI_FROM_PTR_ESI_(VALUE) xchg di, word ptr [esi + VALUE]
#define XCHG_DI_FROM_PTR_EBP_(VALUE) xchg di, word ptr [ebp + VALUE]
#define XCHG_DI_FROM_PTR_ESP_(VALUE) xchg di, word ptr [esp + VALUE]
#define XCHG_DI_FROM_PTR_BX_(VALUE) xchg di, word ptr [bx + VALUE]
#define XCHG_DI_FROM_PTR_BP_(VALUE) xchg di, word ptr [bp + VALUE]
#define XCHG_DI_FROM_PTR_SI_(VALUE) xchg di, word ptr [si + VALUE]
#define XCHG_DI_FROM_PTR_DI_(VALUE) xchg di, word ptr [di + VALUE]

#define XCHG_SI_FROM_PTR_EAX_(VALUE) xchg si, word ptr [eax + VALUE]
#define XCHG_SI_FROM_PTR_EBX_(VALUE) xchg si, word ptr [ebx + VALUE]
#define XCHG_SI_FROM_PTR_ECX_(VALUE) xchg si, word ptr [ecx + VALUE]
#define XCHG_SI_FROM_PTR_EDX_(VALUE) xchg si, word ptr [edx + VALUE]
#define XCHG_SI_FROM_PTR_EDI_(VALUE) xchg si, word ptr [edi + VALUE]
#define XCHG_SI_FROM_PTR_ESI_(VALUE) xchg si, word ptr [esi + VALUE]
#define XCHG_SI_FROM_PTR_EBP_(VALUE) xchg si, word ptr [ebp + VALUE]
#define XCHG_SI_FROM_PTR_ESP_(VALUE) xchg si, word ptr [esp + VALUE]
#define XCHG_SI_FROM_PTR_BX_(VALUE) xchg si, word ptr [bx + VALUE]
#define XCHG_SI_FROM_PTR_BP_(VALUE) xchg si, word ptr [bp + VALUE]
#define XCHG_SI_FROM_PTR_SI_(VALUE) xchg si, word ptr [si + VALUE]
#define XCHG_SI_FROM_PTR_DI_(VALUE) xchg si, word ptr [di + VALUE]

#define XCHG_BP_FROM_PTR_EAX_(VALUE) xchg bp, word ptr [eax + VALUE]
#define XCHG_BP_FROM_PTR_EBX_(VALUE) xchg bp, word ptr [ebx + VALUE]
#define XCHG_BP_FROM_PTR_ECX_(VALUE) xchg bp, word ptr [ecx + VALUE]
#define XCHG_BP_FROM_PTR_EDX_(VALUE) xchg bp, word ptr [edx + VALUE]
#define XCHG_BP_FROM_PTR_EDI_(VALUE) xchg bp, word ptr [edi + VALUE]
#define XCHG_BP_FROM_PTR_ESI_(VALUE) xchg bp, word ptr [esi + VALUE]
#define XCHG_BP_FROM_PTR_EBP_(VALUE) xchg bp, word ptr [ebp + VALUE]
#define XCHG_BP_FROM_PTR_ESP_(VALUE) xchg bp, word ptr [esp + VALUE]
#define XCHG_BP_FROM_PTR_BX_(VALUE) xchg bp, word ptr [bx + VALUE]
#define XCHG_BP_FROM_PTR_BP_(VALUE) xchg bp, word ptr [bp + VALUE]
#define XCHG_BP_FROM_PTR_SI_(VALUE) xchg bp, word ptr [si + VALUE]
#define XCHG_BP_FROM_PTR_DI_(VALUE) xchg bp, word ptr [di + VALUE]

#define XCHG_SP_FROM_PTR_EAX_(VALUE) xchg sp, word ptr [eax + VALUE]
#define XCHG_SP_FROM_PTR_EBX_(VALUE) xchg sp, word ptr [ebx + VALUE]
#define XCHG_SP_FROM_PTR_ECX_(VALUE) xchg sp, word ptr [ecx + VALUE]
#define XCHG_SP_FROM_PTR_EDX_(VALUE) xchg sp, word ptr [edx + VALUE]
#define XCHG_SP_FROM_PTR_EDI_(VALUE) xchg sp, word ptr [edi + VALUE]
#define XCHG_SP_FROM_PTR_ESI_(VALUE) xchg sp, word ptr [esi + VALUE]
#define XCHG_SP_FROM_PTR_EBP_(VALUE) xchg sp, word ptr [ebp + VALUE]
#define XCHG_SP_FROM_PTR_ESP_(VALUE) xchg sp, word ptr [esp + VALUE]
#define XCHG_SP_FROM_PTR_BX_(VALUE) xchg sp, word ptr [bx + VALUE]
#define XCHG_SP_FROM_PTR_BP_(VALUE) xchg sp, word ptr [bp + VALUE]
#define XCHG_SP_FROM_PTR_SI_(VALUE) xchg sp, word ptr [si + VALUE]
#define XCHG_SP_FROM_PTR_DI_(VALUE) xchg sp, word ptr [di + VALUE]

#define XCHG_AX_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], ax
#define XCHG_AX_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], ax
#define XCHG_AX_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], ax
#define XCHG_AX_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], ax
#define XCHG_AX_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], ax
#define XCHG_AX_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], ax
#define XCHG_AX_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], ax
#define XCHG_AX_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], ax
#define XCHG_AX_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], ax
#define XCHG_AX_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], ax
#define XCHG_AX_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], ax
#define XCHG_AX_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], ax

#define XCHG_BX_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], bx
#define XCHG_BX_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], bx
#define XCHG_BX_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], bx
#define XCHG_BX_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], bx
#define XCHG_BX_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], bx
#define XCHG_BX_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], bx
#define XCHG_BX_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], bx
#define XCHG_BX_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], bx
#define XCHG_BX_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], bx
#define XCHG_BX_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], bx
#define XCHG_BX_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], bx
#define XCHG_BX_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], bx

#define XCHG_CX_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], cx
#define XCHG_CX_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], cx
#define XCHG_CX_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], cx
#define XCHG_CX_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], cx
#define XCHG_CX_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], cx
#define XCHG_CX_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], cx
#define XCHG_CX_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], cx
#define XCHG_CX_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], cx
#define XCHG_CX_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], cx
#define XCHG_CX_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], cx
#define XCHG_CX_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], cx
#define XCHG_CX_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], cx

#define XCHG_DX_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], dx
#define XCHG_DX_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], dx
#define XCHG_DX_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], dx
#define XCHG_DX_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], dx
#define XCHG_DX_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], dx
#define XCHG_DX_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], dx
#define XCHG_DX_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], dx
#define XCHG_DX_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], dx
#define XCHG_DX_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], dx
#define XCHG_DX_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], dx
#define XCHG_DX_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], dx
#define XCHG_DX_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], dx

#define XCHG_DI_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], di
#define XCHG_DI_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], di
#define XCHG_DI_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], di
#define XCHG_DI_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], di
#define XCHG_DI_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], di
#define XCHG_DI_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], di
#define XCHG_DI_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], di
#define XCHG_DI_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], di
#define XCHG_DI_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], di
#define XCHG_DI_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], di
#define XCHG_DI_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], di
#define XCHG_DI_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], di

#define XCHG_SI_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], si
#define XCHG_SI_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], si
#define XCHG_SI_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], si
#define XCHG_SI_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], si
#define XCHG_SI_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], si
#define XCHG_SI_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], si
#define XCHG_SI_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], si
#define XCHG_SI_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], si
#define XCHG_SI_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], si
#define XCHG_SI_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], si
#define XCHG_SI_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], si
#define XCHG_SI_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], si

#define XCHG_BP_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], bp
#define XCHG_BP_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], bp
#define XCHG_BP_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], bp
#define XCHG_BP_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], bp
#define XCHG_BP_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], bp
#define XCHG_BP_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], bp
#define XCHG_BP_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], bp
#define XCHG_BP_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], bp
#define XCHG_BP_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], bp
#define XCHG_BP_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], bp
#define XCHG_BP_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], bp
#define XCHG_BP_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], bp

#define XCHG_SP_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], sp
#define XCHG_SP_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], sp
#define XCHG_SP_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], sp
#define XCHG_SP_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], sp
#define XCHG_SP_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], sp
#define XCHG_SP_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], sp
#define XCHG_SP_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], sp
#define XCHG_SP_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], sp
#define XCHG_SP_TO_PTR_BX_(VALUE) xchg word ptr [bx + VALUE], sp
#define XCHG_SP_TO_PTR_BP_(VALUE) xchg word ptr [bp + VALUE], sp
#define XCHG_SP_TO_PTR_SI_(VALUE) xchg word ptr [si + VALUE], sp
#define XCHG_SP_TO_PTR_DI_(VALUE) xchg word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_AX_FROM_PTR_(VALUE) xchg ax, word ptr [VALUE]
#define XCHG_BX_FROM_PTR_(VALUE) xchg bx, word ptr [VALUE]
#define XCHG_CX_FROM_PTR_(VALUE) xchg cx, word ptr [VALUE]
#define XCHG_DX_FROM_PTR_(VALUE) xchg dx, word ptr [VALUE]
#define XCHG_DI_FROM_PTR_(VALUE) xchg di, word ptr [VALUE]
#define XCHG_SI_FROM_PTR_(VALUE) xchg si, word ptr [VALUE]
#define XCHG_BP_FROM_PTR_(VALUE) xchg bp, word ptr [VALUE]
#define XCHG_SP_FROM_PTR_(VALUE) xchg sp, word ptr [VALUE]
#define XCHG_R8W_FROM_PTR_(VALUE) xchg r8w, word ptr [VALUE]
#define XCHG_R9W_FROM_PTR_(VALUE) xchg r9w, word ptr [VALUE]
#define XCHG_R10W_FROM_PTR_(VALUE) xchg r10w, word ptr [VALUE]
#define XCHG_R11W_FROM_PTR_(VALUE) xchg r11w, word ptr [VALUE]
#define XCHG_R12W_FROM_PTR_(VALUE) xchg r12w, word ptr [VALUE]
#define XCHG_R13W_FROM_PTR_(VALUE) xchg r13w, word ptr [VALUE]
#define XCHG_R14W_FROM_PTR_(VALUE) xchg r14w, word ptr [VALUE]
#define XCHG_R15W_FROM_PTR_(VALUE) xchg r15w, word ptr [VALUE]

#define XCHG_AX_TO_PTR_(VALUE) xchg word ptr [VALUE], ax
#define XCHG_BX_TO_PTR_(VALUE) xchg word ptr [VALUE], bx
#define XCHG_CX_TO_PTR_(VALUE) xchg word ptr [VALUE], cx
#define XCHG_DX_TO_PTR_(VALUE) xchg word ptr [VALUE], dx
#define XCHG_DI_TO_PTR_(VALUE) xchg word ptr [VALUE], di
#define XCHG_SI_TO_PTR_(VALUE) xchg word ptr [VALUE], si
#define XCHG_BP_TO_PTR_(VALUE) xchg word ptr [VALUE], bp
#define XCHG_SP_TO_PTR_(VALUE) xchg word ptr [VALUE], sp
#define XCHG_R8W_TO_PTR_(VALUE) xchg word ptr [VALUE], r8w
#define XCHG_R9W_TO_PTR_(VALUE) xchg word ptr [VALUE], r9w
#define XCHG_R10W_TO_PTR_(VALUE) xchg word ptr [VALUE], r10w
#define XCHG_R11W_TO_PTR_(VALUE) xchg word ptr [VALUE], r11w
#define XCHG_R12W_TO_PTR_(VALUE) xchg word ptr [VALUE], r12w
#define XCHG_R13W_TO_PTR_(VALUE) xchg word ptr [VALUE], r13w
#define XCHG_R14W_TO_PTR_(VALUE) xchg word ptr [VALUE], r14w
#define XCHG_R15W_TO_PTR_(VALUE) xchg word ptr [VALUE], r15w

#define XCHG_AX_FROM_PTR_RAX xchg ax, word ptr [rax]
#define XCHG_AX_FROM_PTR_RBX xchg ax, word ptr [rbx]
#define XCHG_AX_FROM_PTR_RCX xchg ax, word ptr [rcx]
#define XCHG_AX_FROM_PTR_RDX xchg ax, word ptr [rdx]
#define XCHG_AX_FROM_PTR_RDI xchg ax, word ptr [rdi]
#define XCHG_AX_FROM_PTR_RSI xchg ax, word ptr [rsi]
#define XCHG_AX_FROM_PTR_RBP xchg ax, word ptr [rbp]
#define XCHG_AX_FROM_PTR_RSP xchg ax, word ptr [rsp]
#define XCHG_AX_FROM_PTR_R8 xchg ax, word ptr [r8]
#define XCHG_AX_FROM_PTR_R9 xchg ax, word ptr [r9]
#define XCHG_AX_FROM_PTR_R10 xchg ax, word ptr [r10]
#define XCHG_AX_FROM_PTR_R11 xchg ax, word ptr [r11]
#define XCHG_AX_FROM_PTR_R12 xchg ax, word ptr [r12]
#define XCHG_AX_FROM_PTR_R13 xchg ax, word ptr [r13]
#define XCHG_AX_FROM_PTR_R14 xchg ax, word ptr [r14]
#define XCHG_AX_FROM_PTR_R15 xchg ax, word ptr [r15]
#define XCHG_AX_FROM_PTR_EAX xchg ax, word ptr [eax]
#define XCHG_AX_FROM_PTR_EBX xchg ax, word ptr [ebx]
#define XCHG_AX_FROM_PTR_ECX xchg ax, word ptr [ecx]
#define XCHG_AX_FROM_PTR_EDX xchg ax, word ptr [edx]
#define XCHG_AX_FROM_PTR_EDI xchg ax, word ptr [edi]
#define XCHG_AX_FROM_PTR_ESI xchg ax, word ptr [esi]
#define XCHG_AX_FROM_PTR_EBP xchg ax, word ptr [ebp]
#define XCHG_AX_FROM_PTR_ESP xchg ax, word ptr [esp]

#define XCHG_BX_FROM_PTR_RAX xchg bx, word ptr [rax]
#define XCHG_BX_FROM_PTR_RBX xchg bx, word ptr [rbx]
#define XCHG_BX_FROM_PTR_RCX xchg bx, word ptr [rcx]
#define XCHG_BX_FROM_PTR_RDX xchg bx, word ptr [rdx]
#define XCHG_BX_FROM_PTR_RDI xchg bx, word ptr [rdi]
#define XCHG_BX_FROM_PTR_RSI xchg bx, word ptr [rsi]
#define XCHG_BX_FROM_PTR_RBP xchg bx, word ptr [rbp]
#define XCHG_BX_FROM_PTR_RSP xchg bx, word ptr [rsp]
#define XCHG_BX_FROM_PTR_R8 xchg bx, word ptr [r8]
#define XCHG_BX_FROM_PTR_R9 xchg bx, word ptr [r9]
#define XCHG_BX_FROM_PTR_R10 xchg bx, word ptr [r10]
#define XCHG_BX_FROM_PTR_R11 xchg bx, word ptr [r11]
#define XCHG_BX_FROM_PTR_R12 xchg bx, word ptr [r12]
#define XCHG_BX_FROM_PTR_R13 xchg bx, word ptr [r13]
#define XCHG_BX_FROM_PTR_R14 xchg bx, word ptr [r14]
#define XCHG_BX_FROM_PTR_R15 xchg bx, word ptr [r15]
#define XCHG_BX_FROM_PTR_EAX xchg bx, word ptr [eax]
#define XCHG_BX_FROM_PTR_EBX xchg bx, word ptr [ebx]
#define XCHG_BX_FROM_PTR_ECX xchg bx, word ptr [ecx]
#define XCHG_BX_FROM_PTR_EDX xchg bx, word ptr [edx]
#define XCHG_BX_FROM_PTR_EDI xchg bx, word ptr [edi]
#define XCHG_BX_FROM_PTR_ESI xchg bx, word ptr [esi]
#define XCHG_BX_FROM_PTR_EBP xchg bx, word ptr [ebp]
#define XCHG_BX_FROM_PTR_ESP xchg bx, word ptr [esp]

#define XCHG_CX_FROM_PTR_RAX xchg cx, word ptr [rax]
#define XCHG_CX_FROM_PTR_RBX xchg cx, word ptr [rbx]
#define XCHG_CX_FROM_PTR_RCX xchg cx, word ptr [rcx]
#define XCHG_CX_FROM_PTR_RDX xchg cx, word ptr [rdx]
#define XCHG_CX_FROM_PTR_RDI xchg cx, word ptr [rdi]
#define XCHG_CX_FROM_PTR_RSI xchg cx, word ptr [rsi]
#define XCHG_CX_FROM_PTR_RBP xchg cx, word ptr [rbp]
#define XCHG_CX_FROM_PTR_RSP xchg cx, word ptr [rsp]
#define XCHG_CX_FROM_PTR_R8 xchg cx, word ptr [r8]
#define XCHG_CX_FROM_PTR_R9 xchg cx, word ptr [r9]
#define XCHG_CX_FROM_PTR_R10 xchg cx, word ptr [r10]
#define XCHG_CX_FROM_PTR_R11 xchg cx, word ptr [r11]
#define XCHG_CX_FROM_PTR_R12 xchg cx, word ptr [r12]
#define XCHG_CX_FROM_PTR_R13 xchg cx, word ptr [r13]
#define XCHG_CX_FROM_PTR_R14 xchg cx, word ptr [r14]
#define XCHG_CX_FROM_PTR_R15 xchg cx, word ptr [r15]
#define XCHG_CX_FROM_PTR_EAX xchg cx, word ptr [eax]
#define XCHG_CX_FROM_PTR_EBX xchg cx, word ptr [ebx]
#define XCHG_CX_FROM_PTR_ECX xchg cx, word ptr [ecx]
#define XCHG_CX_FROM_PTR_EDX xchg cx, word ptr [edx]
#define XCHG_CX_FROM_PTR_EDI xchg cx, word ptr [edi]
#define XCHG_CX_FROM_PTR_ESI xchg cx, word ptr [esi]
#define XCHG_CX_FROM_PTR_EBP xchg cx, word ptr [ebp]
#define XCHG_CX_FROM_PTR_ESP xchg cx, word ptr [esp]

#define XCHG_DX_FROM_PTR_RAX xchg dx, word ptr [rax]
#define XCHG_DX_FROM_PTR_RBX xchg dx, word ptr [rbx]
#define XCHG_DX_FROM_PTR_RCX xchg dx, word ptr [rcx]
#define XCHG_DX_FROM_PTR_RDX xchg dx, word ptr [rdx]
#define XCHG_DX_FROM_PTR_RDI xchg dx, word ptr [rdi]
#define XCHG_DX_FROM_PTR_RSI xchg dx, word ptr [rsi]
#define XCHG_DX_FROM_PTR_RBP xchg dx, word ptr [rbp]
#define XCHG_DX_FROM_PTR_RSP xchg dx, word ptr [rsp]
#define XCHG_DX_FROM_PTR_R8 xchg dx, word ptr [r8]
#define XCHG_DX_FROM_PTR_R9 xchg dx, word ptr [r9]
#define XCHG_DX_FROM_PTR_R10 xchg dx, word ptr [r10]
#define XCHG_DX_FROM_PTR_R11 xchg dx, word ptr [r11]
#define XCHG_DX_FROM_PTR_R12 xchg dx, word ptr [r12]
#define XCHG_DX_FROM_PTR_R13 xchg dx, word ptr [r13]
#define XCHG_DX_FROM_PTR_R14 xchg dx, word ptr [r14]
#define XCHG_DX_FROM_PTR_R15 xchg dx, word ptr [r15]
#define XCHG_DX_FROM_PTR_EAX xchg dx, word ptr [eax]
#define XCHG_DX_FROM_PTR_EBX xchg dx, word ptr [ebx]
#define XCHG_DX_FROM_PTR_ECX xchg dx, word ptr [ecx]
#define XCHG_DX_FROM_PTR_EDX xchg dx, word ptr [edx]
#define XCHG_DX_FROM_PTR_EDI xchg dx, word ptr [edi]
#define XCHG_DX_FROM_PTR_ESI xchg dx, word ptr [esi]
#define XCHG_DX_FROM_PTR_EBP xchg dx, word ptr [ebp]
#define XCHG_DX_FROM_PTR_ESP xchg dx, word ptr [esp]

#define XCHG_DI_FROM_PTR_RAX xchg di, word ptr [rax]
#define XCHG_DI_FROM_PTR_RBX xchg di, word ptr [rbx]
#define XCHG_DI_FROM_PTR_RCX xchg di, word ptr [rcx]
#define XCHG_DI_FROM_PTR_RDX xchg di, word ptr [rdx]
#define XCHG_DI_FROM_PTR_RDI xchg di, word ptr [rdi]
#define XCHG_DI_FROM_PTR_RSI xchg di, word ptr [rsi]
#define XCHG_DI_FROM_PTR_RBP xchg di, word ptr [rbp]
#define XCHG_DI_FROM_PTR_RSP xchg di, word ptr [rsp]
#define XCHG_DI_FROM_PTR_R8 xchg di, word ptr [r8]
#define XCHG_DI_FROM_PTR_R9 xchg di, word ptr [r9]
#define XCHG_DI_FROM_PTR_R10 xchg di, word ptr [r10]
#define XCHG_DI_FROM_PTR_R11 xchg di, word ptr [r11]
#define XCHG_DI_FROM_PTR_R12 xchg di, word ptr [r12]
#define XCHG_DI_FROM_PTR_R13 xchg di, word ptr [r13]
#define XCHG_DI_FROM_PTR_R14 xchg di, word ptr [r14]
#define XCHG_DI_FROM_PTR_R15 xchg di, word ptr [r15]
#define XCHG_DI_FROM_PTR_EAX xchg di, word ptr [eax]
#define XCHG_DI_FROM_PTR_EBX xchg di, word ptr [ebx]
#define XCHG_DI_FROM_PTR_ECX xchg di, word ptr [ecx]
#define XCHG_DI_FROM_PTR_EDX xchg di, word ptr [edx]
#define XCHG_DI_FROM_PTR_EDI xchg di, word ptr [edi]
#define XCHG_DI_FROM_PTR_ESI xchg di, word ptr [esi]
#define XCHG_DI_FROM_PTR_EBP xchg di, word ptr [ebp]
#define XCHG_DI_FROM_PTR_ESP xchg di, word ptr [esp]

#define XCHG_SI_FROM_PTR_RAX xchg si, word ptr [rax]
#define XCHG_SI_FROM_PTR_RBX xchg si, word ptr [rbx]
#define XCHG_SI_FROM_PTR_RCX xchg si, word ptr [rcx]
#define XCHG_SI_FROM_PTR_RDX xchg si, word ptr [rdx]
#define XCHG_SI_FROM_PTR_RDI xchg si, word ptr [rdi]
#define XCHG_SI_FROM_PTR_RSI xchg si, word ptr [rsi]
#define XCHG_SI_FROM_PTR_RBP xchg si, word ptr [rbp]
#define XCHG_SI_FROM_PTR_RSP xchg si, word ptr [rsp]
#define XCHG_SI_FROM_PTR_R8 xchg si, word ptr [r8]
#define XCHG_SI_FROM_PTR_R9 xchg si, word ptr [r9]
#define XCHG_SI_FROM_PTR_R10 xchg si, word ptr [r10]
#define XCHG_SI_FROM_PTR_R11 xchg si, word ptr [r11]
#define XCHG_SI_FROM_PTR_R12 xchg si, word ptr [r12]
#define XCHG_SI_FROM_PTR_R13 xchg si, word ptr [r13]
#define XCHG_SI_FROM_PTR_R14 xchg si, word ptr [r14]
#define XCHG_SI_FROM_PTR_R15 xchg si, word ptr [r15]
#define XCHG_SI_FROM_PTR_EAX xchg si, word ptr [eax]
#define XCHG_SI_FROM_PTR_EBX xchg si, word ptr [ebx]
#define XCHG_SI_FROM_PTR_ECX xchg si, word ptr [ecx]
#define XCHG_SI_FROM_PTR_EDX xchg si, word ptr [edx]
#define XCHG_SI_FROM_PTR_EDI xchg si, word ptr [edi]
#define XCHG_SI_FROM_PTR_ESI xchg si, word ptr [esi]
#define XCHG_SI_FROM_PTR_EBP xchg si, word ptr [ebp]
#define XCHG_SI_FROM_PTR_ESP xchg si, word ptr [esp]

#define XCHG_BP_FROM_PTR_RAX xchg bp, word ptr [rax]
#define XCHG_BP_FROM_PTR_RBX xchg bp, word ptr [rbx]
#define XCHG_BP_FROM_PTR_RCX xchg bp, word ptr [rcx]
#define XCHG_BP_FROM_PTR_RDX xchg bp, word ptr [rdx]
#define XCHG_BP_FROM_PTR_RDI xchg bp, word ptr [rdi]
#define XCHG_BP_FROM_PTR_RSI xchg bp, word ptr [rsi]
#define XCHG_BP_FROM_PTR_RBP xchg bp, word ptr [rbp]
#define XCHG_BP_FROM_PTR_RSP xchg bp, word ptr [rsp]
#define XCHG_BP_FROM_PTR_R8 xchg bp, word ptr [r8]
#define XCHG_BP_FROM_PTR_R9 xchg bp, word ptr [r9]
#define XCHG_BP_FROM_PTR_R10 xchg bp, word ptr [r10]
#define XCHG_BP_FROM_PTR_R11 xchg bp, word ptr [r11]
#define XCHG_BP_FROM_PTR_R12 xchg bp, word ptr [r12]
#define XCHG_BP_FROM_PTR_R13 xchg bp, word ptr [r13]
#define XCHG_BP_FROM_PTR_R14 xchg bp, word ptr [r14]
#define XCHG_BP_FROM_PTR_R15 xchg bp, word ptr [r15]
#define XCHG_BP_FROM_PTR_EAX xchg bp, word ptr [eax]
#define XCHG_BP_FROM_PTR_EBX xchg bp, word ptr [ebx]
#define XCHG_BP_FROM_PTR_ECX xchg bp, word ptr [ecx]
#define XCHG_BP_FROM_PTR_EDX xchg bp, word ptr [edx]
#define XCHG_BP_FROM_PTR_EDI xchg bp, word ptr [edi]
#define XCHG_BP_FROM_PTR_ESI xchg bp, word ptr [esi]
#define XCHG_BP_FROM_PTR_EBP xchg bp, word ptr [ebp]
#define XCHG_BP_FROM_PTR_ESP xchg bp, word ptr [esp]

#define XCHG_SP_FROM_PTR_RAX xchg sp, word ptr [rax]
#define XCHG_SP_FROM_PTR_RBX xchg sp, word ptr [rbx]
#define XCHG_SP_FROM_PTR_RCX xchg sp, word ptr [rcx]
#define XCHG_SP_FROM_PTR_RDX xchg sp, word ptr [rdx]
#define XCHG_SP_FROM_PTR_RDI xchg sp, word ptr [rdi]
#define XCHG_SP_FROM_PTR_RSI xchg sp, word ptr [rsi]
#define XCHG_SP_FROM_PTR_RBP xchg sp, word ptr [rbp]
#define XCHG_SP_FROM_PTR_RSP xchg sp, word ptr [rsp]
#define XCHG_SP_FROM_PTR_R8 xchg sp, word ptr [r8]
#define XCHG_SP_FROM_PTR_R9 xchg sp, word ptr [r9]
#define XCHG_SP_FROM_PTR_R10 xchg sp, word ptr [r10]
#define XCHG_SP_FROM_PTR_R11 xchg sp, word ptr [r11]
#define XCHG_SP_FROM_PTR_R12 xchg sp, word ptr [r12]
#define XCHG_SP_FROM_PTR_R13 xchg sp, word ptr [r13]
#define XCHG_SP_FROM_PTR_R14 xchg sp, word ptr [r14]
#define XCHG_SP_FROM_PTR_R15 xchg sp, word ptr [r15]
#define XCHG_SP_FROM_PTR_EAX xchg sp, word ptr [eax]
#define XCHG_SP_FROM_PTR_EBX xchg sp, word ptr [ebx]
#define XCHG_SP_FROM_PTR_ECX xchg sp, word ptr [ecx]
#define XCHG_SP_FROM_PTR_EDX xchg sp, word ptr [edx]
#define XCHG_SP_FROM_PTR_EDI xchg sp, word ptr [edi]
#define XCHG_SP_FROM_PTR_ESI xchg sp, word ptr [esi]
#define XCHG_SP_FROM_PTR_EBP xchg sp, word ptr [ebp]
#define XCHG_SP_FROM_PTR_ESP xchg sp, word ptr [esp]

#define XCHG_R8W_FROM_PTR_RAX xchg r8w, word ptr [rax]
#define XCHG_R8W_FROM_PTR_RBX xchg r8w, word ptr [rbx]
#define XCHG_R8W_FROM_PTR_RCX xchg r8w, word ptr [rcx]
#define XCHG_R8W_FROM_PTR_RDX xchg r8w, word ptr [rdx]
#define XCHG_R8W_FROM_PTR_RDI xchg r8w, word ptr [rdi]
#define XCHG_R8W_FROM_PTR_RSI xchg r8w, word ptr [rsi]
#define XCHG_R8W_FROM_PTR_RBP xchg r8w, word ptr [rbp]
#define XCHG_R8W_FROM_PTR_RSP xchg r8w, word ptr [rsp]
#define XCHG_R8W_FROM_PTR_R8 xchg r8w, word ptr [r8]
#define XCHG_R8W_FROM_PTR_R9 xchg r8w, word ptr [r9]
#define XCHG_R8W_FROM_PTR_R10 xchg r8w, word ptr [r10]
#define XCHG_R8W_FROM_PTR_R11 xchg r8w, word ptr [r11]
#define XCHG_R8W_FROM_PTR_R12 xchg r8w, word ptr [r12]
#define XCHG_R8W_FROM_PTR_R13 xchg r8w, word ptr [r13]
#define XCHG_R8W_FROM_PTR_R14 xchg r8w, word ptr [r14]
#define XCHG_R8W_FROM_PTR_R15 xchg r8w, word ptr [r15]
#define XCHG_R8W_FROM_PTR_EAX xchg r8w, word ptr [eax]
#define XCHG_R8W_FROM_PTR_EBX xchg r8w, word ptr [ebx]
#define XCHG_R8W_FROM_PTR_ECX xchg r8w, word ptr [ecx]
#define XCHG_R8W_FROM_PTR_EDX xchg r8w, word ptr [edx]
#define XCHG_R8W_FROM_PTR_EDI xchg r8w, word ptr [edi]
#define XCHG_R8W_FROM_PTR_ESI xchg r8w, word ptr [esi]
#define XCHG_R8W_FROM_PTR_EBP xchg r8w, word ptr [ebp]
#define XCHG_R8W_FROM_PTR_ESP xchg r8w, word ptr [esp]

#define XCHG_R9W_FROM_PTR_RAX xchg r9w, word ptr [rax]
#define XCHG_R9W_FROM_PTR_RBX xchg r9w, word ptr [rbx]
#define XCHG_R9W_FROM_PTR_RCX xchg r9w, word ptr [rcx]
#define XCHG_R9W_FROM_PTR_RDX xchg r9w, word ptr [rdx]
#define XCHG_R9W_FROM_PTR_RDI xchg r9w, word ptr [rdi]
#define XCHG_R9W_FROM_PTR_RSI xchg r9w, word ptr [rsi]
#define XCHG_R9W_FROM_PTR_RBP xchg r9w, word ptr [rbp]
#define XCHG_R9W_FROM_PTR_RSP xchg r9w, word ptr [rsp]
#define XCHG_R9W_FROM_PTR_R8 xchg r9w, word ptr [r8]
#define XCHG_R9W_FROM_PTR_R9 xchg r9w, word ptr [r9]
#define XCHG_R9W_FROM_PTR_R10 xchg r9w, word ptr [r10]
#define XCHG_R9W_FROM_PTR_R11 xchg r9w, word ptr [r11]
#define XCHG_R9W_FROM_PTR_R12 xchg r9w, word ptr [r12]
#define XCHG_R9W_FROM_PTR_R13 xchg r9w, word ptr [r13]
#define XCHG_R9W_FROM_PTR_R14 xchg r9w, word ptr [r14]
#define XCHG_R9W_FROM_PTR_R15 xchg r9w, word ptr [r15]
#define XCHG_R9W_FROM_PTR_EAX xchg r9w, word ptr [eax]
#define XCHG_R9W_FROM_PTR_EBX xchg r9w, word ptr [ebx]
#define XCHG_R9W_FROM_PTR_ECX xchg r9w, word ptr [ecx]
#define XCHG_R9W_FROM_PTR_EDX xchg r9w, word ptr [edx]
#define XCHG_R9W_FROM_PTR_EDI xchg r9w, word ptr [edi]
#define XCHG_R9W_FROM_PTR_ESI xchg r9w, word ptr [esi]
#define XCHG_R9W_FROM_PTR_EBP xchg r9w, word ptr [ebp]
#define XCHG_R9W_FROM_PTR_ESP xchg r9w, word ptr [esp]

#define XCHG_R10W_FROM_PTR_RAX xchg r10w, word ptr [rax]
#define XCHG_R10W_FROM_PTR_RBX xchg r10w, word ptr [rbx]
#define XCHG_R10W_FROM_PTR_RCX xchg r10w, word ptr [rcx]
#define XCHG_R10W_FROM_PTR_RDX xchg r10w, word ptr [rdx]
#define XCHG_R10W_FROM_PTR_RDI xchg r10w, word ptr [rdi]
#define XCHG_R10W_FROM_PTR_RSI xchg r10w, word ptr [rsi]
#define XCHG_R10W_FROM_PTR_RBP xchg r10w, word ptr [rbp]
#define XCHG_R10W_FROM_PTR_RSP xchg r10w, word ptr [rsp]
#define XCHG_R10W_FROM_PTR_R8 xchg r10w, word ptr [r8]
#define XCHG_R10W_FROM_PTR_R9 xchg r10w, word ptr [r9]
#define XCHG_R10W_FROM_PTR_R10 xchg r10w, word ptr [r10]
#define XCHG_R10W_FROM_PTR_R11 xchg r10w, word ptr [r11]
#define XCHG_R10W_FROM_PTR_R12 xchg r10w, word ptr [r12]
#define XCHG_R10W_FROM_PTR_R13 xchg r10w, word ptr [r13]
#define XCHG_R10W_FROM_PTR_R14 xchg r10w, word ptr [r14]
#define XCHG_R10W_FROM_PTR_R15 xchg r10w, word ptr [r15]
#define XCHG_R10W_FROM_PTR_EAX xchg r10w, word ptr [eax]
#define XCHG_R10W_FROM_PTR_EBX xchg r10w, word ptr [ebx]
#define XCHG_R10W_FROM_PTR_ECX xchg r10w, word ptr [ecx]
#define XCHG_R10W_FROM_PTR_EDX xchg r10w, word ptr [edx]
#define XCHG_R10W_FROM_PTR_EDI xchg r10w, word ptr [edi]
#define XCHG_R10W_FROM_PTR_ESI xchg r10w, word ptr [esi]
#define XCHG_R10W_FROM_PTR_EBP xchg r10w, word ptr [ebp]
#define XCHG_R10W_FROM_PTR_ESP xchg r10w, word ptr [esp]

#define XCHG_R11W_FROM_PTR_RAX xchg r11w, word ptr [rax]
#define XCHG_R11W_FROM_PTR_RBX xchg r11w, word ptr [rbx]
#define XCHG_R11W_FROM_PTR_RCX xchg r11w, word ptr [rcx]
#define XCHG_R11W_FROM_PTR_RDX xchg r11w, word ptr [rdx]
#define XCHG_R11W_FROM_PTR_RDI xchg r11w, word ptr [rdi]
#define XCHG_R11W_FROM_PTR_RSI xchg r11w, word ptr [rsi]
#define XCHG_R11W_FROM_PTR_RBP xchg r11w, word ptr [rbp]
#define XCHG_R11W_FROM_PTR_RSP xchg r11w, word ptr [rsp]
#define XCHG_R11W_FROM_PTR_R8 xchg r11w, word ptr [r8]
#define XCHG_R11W_FROM_PTR_R9 xchg r11w, word ptr [r9]
#define XCHG_R11W_FROM_PTR_R10 xchg r11w, word ptr [r10]
#define XCHG_R11W_FROM_PTR_R11 xchg r11w, word ptr [r11]
#define XCHG_R11W_FROM_PTR_R12 xchg r11w, word ptr [r12]
#define XCHG_R11W_FROM_PTR_R13 xchg r11w, word ptr [r13]
#define XCHG_R11W_FROM_PTR_R14 xchg r11w, word ptr [r14]
#define XCHG_R11W_FROM_PTR_R15 xchg r11w, word ptr [r15]
#define XCHG_R11W_FROM_PTR_EAX xchg r11w, word ptr [eax]
#define XCHG_R11W_FROM_PTR_EBX xchg r11w, word ptr [ebx]
#define XCHG_R11W_FROM_PTR_ECX xchg r11w, word ptr [ecx]
#define XCHG_R11W_FROM_PTR_EDX xchg r11w, word ptr [edx]
#define XCHG_R11W_FROM_PTR_EDI xchg r11w, word ptr [edi]
#define XCHG_R11W_FROM_PTR_ESI xchg r11w, word ptr [esi]
#define XCHG_R11W_FROM_PTR_EBP xchg r11w, word ptr [ebp]
#define XCHG_R11W_FROM_PTR_ESP xchg r11w, word ptr [esp]

#define XCHG_R12W_FROM_PTR_RAX xchg r12w, word ptr [rax]
#define XCHG_R12W_FROM_PTR_RBX xchg r12w, word ptr [rbx]
#define XCHG_R12W_FROM_PTR_RCX xchg r12w, word ptr [rcx]
#define XCHG_R12W_FROM_PTR_RDX xchg r12w, word ptr [rdx]
#define XCHG_R12W_FROM_PTR_RDI xchg r12w, word ptr [rdi]
#define XCHG_R12W_FROM_PTR_RSI xchg r12w, word ptr [rsi]
#define XCHG_R12W_FROM_PTR_RBP xchg r12w, word ptr [rbp]
#define XCHG_R12W_FROM_PTR_RSP xchg r12w, word ptr [rsp]
#define XCHG_R12W_FROM_PTR_R8 xchg r12w, word ptr [r8]
#define XCHG_R12W_FROM_PTR_R9 xchg r12w, word ptr [r9]
#define XCHG_R12W_FROM_PTR_R10 xchg r12w, word ptr [r10]
#define XCHG_R12W_FROM_PTR_R11 xchg r12w, word ptr [r11]
#define XCHG_R12W_FROM_PTR_R12 xchg r12w, word ptr [r12]
#define XCHG_R12W_FROM_PTR_R13 xchg r12w, word ptr [r13]
#define XCHG_R12W_FROM_PTR_R14 xchg r12w, word ptr [r14]
#define XCHG_R12W_FROM_PTR_R15 xchg r12w, word ptr [r15]
#define XCHG_R12W_FROM_PTR_EAX xchg r12w, word ptr [eax]
#define XCHG_R12W_FROM_PTR_EBX xchg r12w, word ptr [ebx]
#define XCHG_R12W_FROM_PTR_ECX xchg r12w, word ptr [ecx]
#define XCHG_R12W_FROM_PTR_EDX xchg r12w, word ptr [edx]
#define XCHG_R12W_FROM_PTR_EDI xchg r12w, word ptr [edi]
#define XCHG_R12W_FROM_PTR_ESI xchg r12w, word ptr [esi]
#define XCHG_R12W_FROM_PTR_EBP xchg r12w, word ptr [ebp]
#define XCHG_R12W_FROM_PTR_ESP xchg r12w, word ptr [esp]

#define XCHG_R13W_FROM_PTR_RAX xchg r13w, word ptr [rax]
#define XCHG_R13W_FROM_PTR_RBX xchg r13w, word ptr [rbx]
#define XCHG_R13W_FROM_PTR_RCX xchg r13w, word ptr [rcx]
#define XCHG_R13W_FROM_PTR_RDX xchg r13w, word ptr [rdx]
#define XCHG_R13W_FROM_PTR_RDI xchg r13w, word ptr [rdi]
#define XCHG_R13W_FROM_PTR_RSI xchg r13w, word ptr [rsi]
#define XCHG_R13W_FROM_PTR_RBP xchg r13w, word ptr [rbp]
#define XCHG_R13W_FROM_PTR_RSP xchg r13w, word ptr [rsp]
#define XCHG_R13W_FROM_PTR_R8 xchg r13w, word ptr [r8]
#define XCHG_R13W_FROM_PTR_R9 xchg r13w, word ptr [r9]
#define XCHG_R13W_FROM_PTR_R10 xchg r13w, word ptr [r10]
#define XCHG_R13W_FROM_PTR_R11 xchg r13w, word ptr [r11]
#define XCHG_R13W_FROM_PTR_R12 xchg r13w, word ptr [r12]
#define XCHG_R13W_FROM_PTR_R13 xchg r13w, word ptr [r13]
#define XCHG_R13W_FROM_PTR_R14 xchg r13w, word ptr [r14]
#define XCHG_R13W_FROM_PTR_R15 xchg r13w, word ptr [r15]
#define XCHG_R13W_FROM_PTR_EAX xchg r13w, word ptr [eax]
#define XCHG_R13W_FROM_PTR_EBX xchg r13w, word ptr [ebx]
#define XCHG_R13W_FROM_PTR_ECX xchg r13w, word ptr [ecx]
#define XCHG_R13W_FROM_PTR_EDX xchg r13w, word ptr [edx]
#define XCHG_R13W_FROM_PTR_EDI xchg r13w, word ptr [edi]
#define XCHG_R13W_FROM_PTR_ESI xchg r13w, word ptr [esi]
#define XCHG_R13W_FROM_PTR_EBP xchg r13w, word ptr [ebp]
#define XCHG_R13W_FROM_PTR_ESP xchg r13w, word ptr [esp]

#define XCHG_R14W_FROM_PTR_RAX xchg r14w, word ptr [rax]
#define XCHG_R14W_FROM_PTR_RBX xchg r14w, word ptr [rbx]
#define XCHG_R14W_FROM_PTR_RCX xchg r14w, word ptr [rcx]
#define XCHG_R14W_FROM_PTR_RDX xchg r14w, word ptr [rdx]
#define XCHG_R14W_FROM_PTR_RDI xchg r14w, word ptr [rdi]
#define XCHG_R14W_FROM_PTR_RSI xchg r14w, word ptr [rsi]
#define XCHG_R14W_FROM_PTR_RBP xchg r14w, word ptr [rbp]
#define XCHG_R14W_FROM_PTR_RSP xchg r14w, word ptr [rsp]
#define XCHG_R14W_FROM_PTR_R8 xchg r14w, word ptr [r8]
#define XCHG_R14W_FROM_PTR_R9 xchg r14w, word ptr [r9]
#define XCHG_R14W_FROM_PTR_R10 xchg r14w, word ptr [r10]
#define XCHG_R14W_FROM_PTR_R11 xchg r14w, word ptr [r11]
#define XCHG_R14W_FROM_PTR_R12 xchg r14w, word ptr [r12]
#define XCHG_R14W_FROM_PTR_R13 xchg r14w, word ptr [r13]
#define XCHG_R14W_FROM_PTR_R14 xchg r14w, word ptr [r14]
#define XCHG_R14W_FROM_PTR_R15 xchg r14w, word ptr [r15]
#define XCHG_R14W_FROM_PTR_EAX xchg r14w, word ptr [eax]
#define XCHG_R14W_FROM_PTR_EBX xchg r14w, word ptr [ebx]
#define XCHG_R14W_FROM_PTR_ECX xchg r14w, word ptr [ecx]
#define XCHG_R14W_FROM_PTR_EDX xchg r14w, word ptr [edx]
#define XCHG_R14W_FROM_PTR_EDI xchg r14w, word ptr [edi]
#define XCHG_R14W_FROM_PTR_ESI xchg r14w, word ptr [esi]
#define XCHG_R14W_FROM_PTR_EBP xchg r14w, word ptr [ebp]
#define XCHG_R14W_FROM_PTR_ESP xchg r14w, word ptr [esp]

#define XCHG_R15W_FROM_PTR_RAX xchg r15w, word ptr [rax]
#define XCHG_R15W_FROM_PTR_RBX xchg r15w, word ptr [rbx]
#define XCHG_R15W_FROM_PTR_RCX xchg r15w, word ptr [rcx]
#define XCHG_R15W_FROM_PTR_RDX xchg r15w, word ptr [rdx]
#define XCHG_R15W_FROM_PTR_RDI xchg r15w, word ptr [rdi]
#define XCHG_R15W_FROM_PTR_RSI xchg r15w, word ptr [rsi]
#define XCHG_R15W_FROM_PTR_RBP xchg r15w, word ptr [rbp]
#define XCHG_R15W_FROM_PTR_RSP xchg r15w, word ptr [rsp]
#define XCHG_R15W_FROM_PTR_R8 xchg r15w, word ptr [r8]
#define XCHG_R15W_FROM_PTR_R9 xchg r15w, word ptr [r9]
#define XCHG_R15W_FROM_PTR_R10 xchg r15w, word ptr [r10]
#define XCHG_R15W_FROM_PTR_R11 xchg r15w, word ptr [r11]
#define XCHG_R15W_FROM_PTR_R12 xchg r15w, word ptr [r12]
#define XCHG_R15W_FROM_PTR_R13 xchg r15w, word ptr [r13]
#define XCHG_R15W_FROM_PTR_R14 xchg r15w, word ptr [r14]
#define XCHG_R15W_FROM_PTR_R15 xchg r15w, word ptr [r15]
#define XCHG_R15W_FROM_PTR_EAX xchg r15w, word ptr [eax]
#define XCHG_R15W_FROM_PTR_EBX xchg r15w, word ptr [ebx]
#define XCHG_R15W_FROM_PTR_ECX xchg r15w, word ptr [ecx]
#define XCHG_R15W_FROM_PTR_EDX xchg r15w, word ptr [edx]
#define XCHG_R15W_FROM_PTR_EDI xchg r15w, word ptr [edi]
#define XCHG_R15W_FROM_PTR_ESI xchg r15w, word ptr [esi]
#define XCHG_R15W_FROM_PTR_EBP xchg r15w, word ptr [ebp]
#define XCHG_R15W_FROM_PTR_ESP xchg r15w, word ptr [esp]

#define XCHG_AX_TO_PTR_RAX xchg word ptr [rax], ax
#define XCHG_AX_TO_PTR_RBX xchg word ptr [rbx], ax
#define XCHG_AX_TO_PTR_RCX xchg word ptr [rcx], ax
#define XCHG_AX_TO_PTR_RDX xchg word ptr [rdx], ax
#define XCHG_AX_TO_PTR_RDI xchg word ptr [rdi], ax
#define XCHG_AX_TO_PTR_RSI xchg word ptr [rsi], ax
#define XCHG_AX_TO_PTR_RBP xchg word ptr [rbp], ax
#define XCHG_AX_TO_PTR_RSP xchg word ptr [rsp], ax
#define XCHG_AX_TO_PTR_R8 xchg word ptr [r8], ax
#define XCHG_AX_TO_PTR_R9 xchg word ptr [r9], ax
#define XCHG_AX_TO_PTR_R10 xchg word ptr [r10], ax
#define XCHG_AX_TO_PTR_R11 xchg word ptr [r11], ax
#define XCHG_AX_TO_PTR_R12 xchg word ptr [r12], ax
#define XCHG_AX_TO_PTR_R13 xchg word ptr [r13], ax
#define XCHG_AX_TO_PTR_R14 xchg word ptr [r14], ax
#define XCHG_AX_TO_PTR_R15 xchg word ptr [r15], ax
#define XCHG_AX_TO_PTR_EAX xchg word ptr [eax], ax
#define XCHG_AX_TO_PTR_EBX xchg word ptr [ebx], ax
#define XCHG_AX_TO_PTR_ECX xchg word ptr [ecx], ax
#define XCHG_AX_TO_PTR_EDX xchg word ptr [edx], ax
#define XCHG_AX_TO_PTR_EDI xchg word ptr [edi], ax
#define XCHG_AX_TO_PTR_ESI xchg word ptr [esi], ax
#define XCHG_AX_TO_PTR_EBP xchg word ptr [ebp], ax
#define XCHG_AX_TO_PTR_ESP xchg word ptr [esp], ax

#define XCHG_BX_TO_PTR_RAX xchg word ptr [rax], bx
#define XCHG_BX_TO_PTR_RBX xchg word ptr [rbx], bx
#define XCHG_BX_TO_PTR_RCX xchg word ptr [rcx], bx
#define XCHG_BX_TO_PTR_RDX xchg word ptr [rdx], bx
#define XCHG_BX_TO_PTR_RDI xchg word ptr [rdi], bx
#define XCHG_BX_TO_PTR_RSI xchg word ptr [rsi], bx
#define XCHG_BX_TO_PTR_RBP xchg word ptr [rbp], bx
#define XCHG_BX_TO_PTR_RSP xchg word ptr [rsp], bx
#define XCHG_BX_TO_PTR_R8 xchg word ptr [r8], bx
#define XCHG_BX_TO_PTR_R9 xchg word ptr [r9], bx
#define XCHG_BX_TO_PTR_R10 xchg word ptr [r10], bx
#define XCHG_BX_TO_PTR_R11 xchg word ptr [r11], bx
#define XCHG_BX_TO_PTR_R12 xchg word ptr [r12], bx
#define XCHG_BX_TO_PTR_R13 xchg word ptr [r13], bx
#define XCHG_BX_TO_PTR_R14 xchg word ptr [r14], bx
#define XCHG_BX_TO_PTR_R15 xchg word ptr [r15], bx
#define XCHG_BX_TO_PTR_EAX xchg word ptr [eax], bx
#define XCHG_BX_TO_PTR_EBX xchg word ptr [ebx], bx
#define XCHG_BX_TO_PTR_ECX xchg word ptr [ecx], bx
#define XCHG_BX_TO_PTR_EDX xchg word ptr [edx], bx
#define XCHG_BX_TO_PTR_EDI xchg word ptr [edi], bx
#define XCHG_BX_TO_PTR_ESI xchg word ptr [esi], bx
#define XCHG_BX_TO_PTR_EBP xchg word ptr [ebp], bx
#define XCHG_BX_TO_PTR_ESP xchg word ptr [esp], bx

#define XCHG_CX_TO_PTR_RAX xchg word ptr [rax], cx
#define XCHG_CX_TO_PTR_RBX xchg word ptr [rbx], cx
#define XCHG_CX_TO_PTR_RCX xchg word ptr [rcx], cx
#define XCHG_CX_TO_PTR_RDX xchg word ptr [rdx], cx
#define XCHG_CX_TO_PTR_RDI xchg word ptr [rdi], cx
#define XCHG_CX_TO_PTR_RSI xchg word ptr [rsi], cx
#define XCHG_CX_TO_PTR_RBP xchg word ptr [rbp], cx
#define XCHG_CX_TO_PTR_RSP xchg word ptr [rsp], cx
#define XCHG_CX_TO_PTR_R8 xchg word ptr [r8], cx
#define XCHG_CX_TO_PTR_R9 xchg word ptr [r9], cx
#define XCHG_CX_TO_PTR_R10 xchg word ptr [r10], cx
#define XCHG_CX_TO_PTR_R11 xchg word ptr [r11], cx
#define XCHG_CX_TO_PTR_R12 xchg word ptr [r12], cx
#define XCHG_CX_TO_PTR_R13 xchg word ptr [r13], cx
#define XCHG_CX_TO_PTR_R14 xchg word ptr [r14], cx
#define XCHG_CX_TO_PTR_R15 xchg word ptr [r15], cx
#define XCHG_CX_TO_PTR_EAX xchg word ptr [eax], cx
#define XCHG_CX_TO_PTR_EBX xchg word ptr [ebx], cx
#define XCHG_CX_TO_PTR_ECX xchg word ptr [ecx], cx
#define XCHG_CX_TO_PTR_EDX xchg word ptr [edx], cx
#define XCHG_CX_TO_PTR_EDI xchg word ptr [edi], cx
#define XCHG_CX_TO_PTR_ESI xchg word ptr [esi], cx
#define XCHG_CX_TO_PTR_EBP xchg word ptr [ebp], cx
#define XCHG_CX_TO_PTR_ESP xchg word ptr [esp], cx

#define XCHG_DX_TO_PTR_RAX xchg word ptr [rax], dx
#define XCHG_DX_TO_PTR_RBX xchg word ptr [rbx], dx
#define XCHG_DX_TO_PTR_RCX xchg word ptr [rcx], dx
#define XCHG_DX_TO_PTR_RDX xchg word ptr [rdx], dx
#define XCHG_DX_TO_PTR_RDI xchg word ptr [rdi], dx
#define XCHG_DX_TO_PTR_RSI xchg word ptr [rsi], dx
#define XCHG_DX_TO_PTR_RBP xchg word ptr [rbp], dx
#define XCHG_DX_TO_PTR_RSP xchg word ptr [rsp], dx
#define XCHG_DX_TO_PTR_R8 xchg word ptr [r8], dx
#define XCHG_DX_TO_PTR_R9 xchg word ptr [r9], dx
#define XCHG_DX_TO_PTR_R10 xchg word ptr [r10], dx
#define XCHG_DX_TO_PTR_R11 xchg word ptr [r11], dx
#define XCHG_DX_TO_PTR_R12 xchg word ptr [r12], dx
#define XCHG_DX_TO_PTR_R13 xchg word ptr [r13], dx
#define XCHG_DX_TO_PTR_R14 xchg word ptr [r14], dx
#define XCHG_DX_TO_PTR_R15 xchg word ptr [r15], dx
#define XCHG_DX_TO_PTR_EAX xchg word ptr [eax], dx
#define XCHG_DX_TO_PTR_EBX xchg word ptr [ebx], dx
#define XCHG_DX_TO_PTR_ECX xchg word ptr [ecx], dx
#define XCHG_DX_TO_PTR_EDX xchg word ptr [edx], dx
#define XCHG_DX_TO_PTR_EDI xchg word ptr [edi], dx
#define XCHG_DX_TO_PTR_ESI xchg word ptr [esi], dx
#define XCHG_DX_TO_PTR_EBP xchg word ptr [ebp], dx
#define XCHG_DX_TO_PTR_ESP xchg word ptr [esp], dx

#define XCHG_DI_TO_PTR_RAX xchg word ptr [rax], di
#define XCHG_DI_TO_PTR_RBX xchg word ptr [rbx], di
#define XCHG_DI_TO_PTR_RCX xchg word ptr [rcx], di
#define XCHG_DI_TO_PTR_RDX xchg word ptr [rdx], di
#define XCHG_DI_TO_PTR_RDI xchg word ptr [rdi], di
#define XCHG_DI_TO_PTR_RSI xchg word ptr [rsi], di
#define XCHG_DI_TO_PTR_RBP xchg word ptr [rbp], di
#define XCHG_DI_TO_PTR_RSP xchg word ptr [rsp], di
#define XCHG_DI_TO_PTR_R8 xchg word ptr [r8], di
#define XCHG_DI_TO_PTR_R9 xchg word ptr [r9], di
#define XCHG_DI_TO_PTR_R10 xchg word ptr [r10], di
#define XCHG_DI_TO_PTR_R11 xchg word ptr [r11], di
#define XCHG_DI_TO_PTR_R12 xchg word ptr [r12], di
#define XCHG_DI_TO_PTR_R13 xchg word ptr [r13], di
#define XCHG_DI_TO_PTR_R14 xchg word ptr [r14], di
#define XCHG_DI_TO_PTR_R15 xchg word ptr [r15], di
#define XCHG_DI_TO_PTR_EAX xchg word ptr [eax], di
#define XCHG_DI_TO_PTR_EBX xchg word ptr [ebx], di
#define XCHG_DI_TO_PTR_ECX xchg word ptr [ecx], di
#define XCHG_DI_TO_PTR_EDX xchg word ptr [edx], di
#define XCHG_DI_TO_PTR_EDI xchg word ptr [edi], di
#define XCHG_DI_TO_PTR_ESI xchg word ptr [esi], di
#define XCHG_DI_TO_PTR_EBP xchg word ptr [ebp], di
#define XCHG_DI_TO_PTR_ESP xchg word ptr [esp], di

#define XCHG_SI_TO_PTR_RAX xchg word ptr [rax], si
#define XCHG_SI_TO_PTR_RBX xchg word ptr [rbx], si
#define XCHG_SI_TO_PTR_RCX xchg word ptr [rcx], si
#define XCHG_SI_TO_PTR_RDX xchg word ptr [rdx], si
#define XCHG_SI_TO_PTR_RDI xchg word ptr [rdi], si
#define XCHG_SI_TO_PTR_RSI xchg word ptr [rsi], si
#define XCHG_SI_TO_PTR_RBP xchg word ptr [rbp], si
#define XCHG_SI_TO_PTR_RSP xchg word ptr [rsp], si
#define XCHG_SI_TO_PTR_R8 xchg word ptr [r8], si
#define XCHG_SI_TO_PTR_R9 xchg word ptr [r9], si
#define XCHG_SI_TO_PTR_R10 xchg word ptr [r10], si
#define XCHG_SI_TO_PTR_R11 xchg word ptr [r11], si
#define XCHG_SI_TO_PTR_R12 xchg word ptr [r12], si
#define XCHG_SI_TO_PTR_R13 xchg word ptr [r13], si
#define XCHG_SI_TO_PTR_R14 xchg word ptr [r14], si
#define XCHG_SI_TO_PTR_R15 xchg word ptr [r15], si
#define XCHG_SI_TO_PTR_EAX xchg word ptr [eax], si
#define XCHG_SI_TO_PTR_EBX xchg word ptr [ebx], si
#define XCHG_SI_TO_PTR_ECX xchg word ptr [ecx], si
#define XCHG_SI_TO_PTR_EDX xchg word ptr [edx], si
#define XCHG_SI_TO_PTR_EDI xchg word ptr [edi], si
#define XCHG_SI_TO_PTR_ESI xchg word ptr [esi], si
#define XCHG_SI_TO_PTR_EBP xchg word ptr [ebp], si
#define XCHG_SI_TO_PTR_ESP xchg word ptr [esp], si

#define XCHG_BP_TO_PTR_RAX xchg word ptr [rax], bp
#define XCHG_BP_TO_PTR_RBX xchg word ptr [rbx], bp
#define XCHG_BP_TO_PTR_RCX xchg word ptr [rcx], bp
#define XCHG_BP_TO_PTR_RDX xchg word ptr [rdx], bp
#define XCHG_BP_TO_PTR_RDI xchg word ptr [rdi], bp
#define XCHG_BP_TO_PTR_RSI xchg word ptr [rsi], bp
#define XCHG_BP_TO_PTR_RBP xchg word ptr [rbp], bp
#define XCHG_BP_TO_PTR_RSP xchg word ptr [rsp], bp
#define XCHG_BP_TO_PTR_R8 xchg word ptr [r8], bp
#define XCHG_BP_TO_PTR_R9 xchg word ptr [r9], bp
#define XCHG_BP_TO_PTR_R10 xchg word ptr [r10], bp
#define XCHG_BP_TO_PTR_R11 xchg word ptr [r11], bp
#define XCHG_BP_TO_PTR_R12 xchg word ptr [r12], bp
#define XCHG_BP_TO_PTR_R13 xchg word ptr [r13], bp
#define XCHG_BP_TO_PTR_R14 xchg word ptr [r14], bp
#define XCHG_BP_TO_PTR_R15 xchg word ptr [r15], bp
#define XCHG_BP_TO_PTR_EAX xchg word ptr [eax], bp
#define XCHG_BP_TO_PTR_EBX xchg word ptr [ebx], bp
#define XCHG_BP_TO_PTR_ECX xchg word ptr [ecx], bp
#define XCHG_BP_TO_PTR_EDX xchg word ptr [edx], bp
#define XCHG_BP_TO_PTR_EDI xchg word ptr [edi], bp
#define XCHG_BP_TO_PTR_ESI xchg word ptr [esi], bp
#define XCHG_BP_TO_PTR_EBP xchg word ptr [ebp], bp
#define XCHG_BP_TO_PTR_ESP xchg word ptr [esp], bp

#define XCHG_SP_TO_PTR_RAX xchg word ptr [rax], sp
#define XCHG_SP_TO_PTR_RBX xchg word ptr [rbx], sp
#define XCHG_SP_TO_PTR_RCX xchg word ptr [rcx], sp
#define XCHG_SP_TO_PTR_RDX xchg word ptr [rdx], sp
#define XCHG_SP_TO_PTR_RDI xchg word ptr [rdi], sp
#define XCHG_SP_TO_PTR_RSI xchg word ptr [rsi], sp
#define XCHG_SP_TO_PTR_RBP xchg word ptr [rbp], sp
#define XCHG_SP_TO_PTR_RSP xchg word ptr [rsp], sp
#define XCHG_SP_TO_PTR_R8 xchg word ptr [r8], sp
#define XCHG_SP_TO_PTR_R9 xchg word ptr [r9], sp
#define XCHG_SP_TO_PTR_R10 xchg word ptr [r10], sp
#define XCHG_SP_TO_PTR_R11 xchg word ptr [r11], sp
#define XCHG_SP_TO_PTR_R12 xchg word ptr [r12], sp
#define XCHG_SP_TO_PTR_R13 xchg word ptr [r13], sp
#define XCHG_SP_TO_PTR_R14 xchg word ptr [r14], sp
#define XCHG_SP_TO_PTR_R15 xchg word ptr [r15], sp
#define XCHG_SP_TO_PTR_EAX xchg word ptr [eax], sp
#define XCHG_SP_TO_PTR_EBX xchg word ptr [ebx], sp
#define XCHG_SP_TO_PTR_ECX xchg word ptr [ecx], sp
#define XCHG_SP_TO_PTR_EDX xchg word ptr [edx], sp
#define XCHG_SP_TO_PTR_EDI xchg word ptr [edi], sp
#define XCHG_SP_TO_PTR_ESI xchg word ptr [esi], sp
#define XCHG_SP_TO_PTR_EBP xchg word ptr [ebp], sp
#define XCHG_SP_TO_PTR_ESP xchg word ptr [esp], sp

#define XCHG_R8W_TO_PTR_RAX xchg word ptr [rax], r8w
#define XCHG_R8W_TO_PTR_RBX xchg word ptr [rbx], r8w
#define XCHG_R8W_TO_PTR_RCX xchg word ptr [rcx], r8w
#define XCHG_R8W_TO_PTR_RDX xchg word ptr [rdx], r8w
#define XCHG_R8W_TO_PTR_RDI xchg word ptr [rdi], r8w
#define XCHG_R8W_TO_PTR_RSI xchg word ptr [rsi], r8w
#define XCHG_R8W_TO_PTR_RBP xchg word ptr [rbp], r8w
#define XCHG_R8W_TO_PTR_RSP xchg word ptr [rsp], r8w
#define XCHG_R8W_TO_PTR_R8 xchg word ptr [r8], r8w
#define XCHG_R8W_TO_PTR_R9 xchg word ptr [r9], r8w
#define XCHG_R8W_TO_PTR_R10 xchg word ptr [r10], r8w
#define XCHG_R8W_TO_PTR_R11 xchg word ptr [r11], r8w
#define XCHG_R8W_TO_PTR_R12 xchg word ptr [r12], r8w
#define XCHG_R8W_TO_PTR_R13 xchg word ptr [r13], r8w
#define XCHG_R8W_TO_PTR_R14 xchg word ptr [r14], r8w
#define XCHG_R8W_TO_PTR_R15 xchg word ptr [r15], r8w
#define XCHG_R8W_TO_PTR_EAX xchg word ptr [eax], r8w
#define XCHG_R8W_TO_PTR_EBX xchg word ptr [ebx], r8w
#define XCHG_R8W_TO_PTR_ECX xchg word ptr [ecx], r8w
#define XCHG_R8W_TO_PTR_EDX xchg word ptr [edx], r8w
#define XCHG_R8W_TO_PTR_EDI xchg word ptr [edi], r8w
#define XCHG_R8W_TO_PTR_ESI xchg word ptr [esi], r8w
#define XCHG_R8W_TO_PTR_EBP xchg word ptr [ebp], r8w
#define XCHG_R8W_TO_PTR_ESP xchg word ptr [esp], r8w

#define XCHG_R9W_TO_PTR_RAX xchg word ptr [rax], r9w
#define XCHG_R9W_TO_PTR_RBX xchg word ptr [rbx], r9w
#define XCHG_R9W_TO_PTR_RCX xchg word ptr [rcx], r9w
#define XCHG_R9W_TO_PTR_RDX xchg word ptr [rdx], r9w
#define XCHG_R9W_TO_PTR_RDI xchg word ptr [rdi], r9w
#define XCHG_R9W_TO_PTR_RSI xchg word ptr [rsi], r9w
#define XCHG_R9W_TO_PTR_RBP xchg word ptr [rbp], r9w
#define XCHG_R9W_TO_PTR_RSP xchg word ptr [rsp], r9w
#define XCHG_R9W_TO_PTR_R8 xchg word ptr [r8], r9w
#define XCHG_R9W_TO_PTR_R9 xchg word ptr [r9], r9w
#define XCHG_R9W_TO_PTR_R10 xchg word ptr [r10], r9w
#define XCHG_R9W_TO_PTR_R11 xchg word ptr [r11], r9w
#define XCHG_R9W_TO_PTR_R12 xchg word ptr [r12], r9w
#define XCHG_R9W_TO_PTR_R13 xchg word ptr [r13], r9w
#define XCHG_R9W_TO_PTR_R14 xchg word ptr [r14], r9w
#define XCHG_R9W_TO_PTR_R15 xchg word ptr [r15], r9w
#define XCHG_R9W_TO_PTR_EAX xchg word ptr [eax], r9w
#define XCHG_R9W_TO_PTR_EBX xchg word ptr [ebx], r9w
#define XCHG_R9W_TO_PTR_ECX xchg word ptr [ecx], r9w
#define XCHG_R9W_TO_PTR_EDX xchg word ptr [edx], r9w
#define XCHG_R9W_TO_PTR_EDI xchg word ptr [edi], r9w
#define XCHG_R9W_TO_PTR_ESI xchg word ptr [esi], r9w
#define XCHG_R9W_TO_PTR_EBP xchg word ptr [ebp], r9w
#define XCHG_R9W_TO_PTR_ESP xchg word ptr [esp], r9w

#define XCHG_R10W_TO_PTR_RAX xchg word ptr [rax], r10w
#define XCHG_R10W_TO_PTR_RBX xchg word ptr [rbx], r10w
#define XCHG_R10W_TO_PTR_RCX xchg word ptr [rcx], r10w
#define XCHG_R10W_TO_PTR_RDX xchg word ptr [rdx], r10w
#define XCHG_R10W_TO_PTR_RDI xchg word ptr [rdi], r10w
#define XCHG_R10W_TO_PTR_RSI xchg word ptr [rsi], r10w
#define XCHG_R10W_TO_PTR_RBP xchg word ptr [rbp], r10w
#define XCHG_R10W_TO_PTR_RSP xchg word ptr [rsp], r10w
#define XCHG_R10W_TO_PTR_R8 xchg word ptr [r8], r10w
#define XCHG_R10W_TO_PTR_R9 xchg word ptr [r9], r10w
#define XCHG_R10W_TO_PTR_R10 xchg word ptr [r10], r10w
#define XCHG_R10W_TO_PTR_R11 xchg word ptr [r11], r10w
#define XCHG_R10W_TO_PTR_R12 xchg word ptr [r12], r10w
#define XCHG_R10W_TO_PTR_R13 xchg word ptr [r13], r10w
#define XCHG_R10W_TO_PTR_R14 xchg word ptr [r14], r10w
#define XCHG_R10W_TO_PTR_R15 xchg word ptr [r15], r10w
#define XCHG_R10W_TO_PTR_EAX xchg word ptr [eax], r10w
#define XCHG_R10W_TO_PTR_EBX xchg word ptr [ebx], r10w
#define XCHG_R10W_TO_PTR_ECX xchg word ptr [ecx], r10w
#define XCHG_R10W_TO_PTR_EDX xchg word ptr [edx], r10w
#define XCHG_R10W_TO_PTR_EDI xchg word ptr [edi], r10w
#define XCHG_R10W_TO_PTR_ESI xchg word ptr [esi], r10w
#define XCHG_R10W_TO_PTR_EBP xchg word ptr [ebp], r10w
#define XCHG_R10W_TO_PTR_ESP xchg word ptr [esp], r10w

#define XCHG_R11W_TO_PTR_RAX xchg word ptr [rax], r11w
#define XCHG_R11W_TO_PTR_RBX xchg word ptr [rbx], r11w
#define XCHG_R11W_TO_PTR_RCX xchg word ptr [rcx], r11w
#define XCHG_R11W_TO_PTR_RDX xchg word ptr [rdx], r11w
#define XCHG_R11W_TO_PTR_RDI xchg word ptr [rdi], r11w
#define XCHG_R11W_TO_PTR_RSI xchg word ptr [rsi], r11w
#define XCHG_R11W_TO_PTR_RBP xchg word ptr [rbp], r11w
#define XCHG_R11W_TO_PTR_RSP xchg word ptr [rsp], r11w
#define XCHG_R11W_TO_PTR_R8 xchg word ptr [r8], r11w
#define XCHG_R11W_TO_PTR_R9 xchg word ptr [r9], r11w
#define XCHG_R11W_TO_PTR_R10 xchg word ptr [r10], r11w
#define XCHG_R11W_TO_PTR_R11 xchg word ptr [r11], r11w
#define XCHG_R11W_TO_PTR_R12 xchg word ptr [r12], r11w
#define XCHG_R11W_TO_PTR_R13 xchg word ptr [r13], r11w
#define XCHG_R11W_TO_PTR_R14 xchg word ptr [r14], r11w
#define XCHG_R11W_TO_PTR_R15 xchg word ptr [r15], r11w
#define XCHG_R11W_TO_PTR_EAX xchg word ptr [eax], r11w
#define XCHG_R11W_TO_PTR_EBX xchg word ptr [ebx], r11w
#define XCHG_R11W_TO_PTR_ECX xchg word ptr [ecx], r11w
#define XCHG_R11W_TO_PTR_EDX xchg word ptr [edx], r11w
#define XCHG_R11W_TO_PTR_EDI xchg word ptr [edi], r11w
#define XCHG_R11W_TO_PTR_ESI xchg word ptr [esi], r11w
#define XCHG_R11W_TO_PTR_EBP xchg word ptr [ebp], r11w
#define XCHG_R11W_TO_PTR_ESP xchg word ptr [esp], r11w

#define XCHG_R12W_TO_PTR_RAX xchg word ptr [rax], r12w
#define XCHG_R12W_TO_PTR_RBX xchg word ptr [rbx], r12w
#define XCHG_R12W_TO_PTR_RCX xchg word ptr [rcx], r12w
#define XCHG_R12W_TO_PTR_RDX xchg word ptr [rdx], r12w
#define XCHG_R12W_TO_PTR_RDI xchg word ptr [rdi], r12w
#define XCHG_R12W_TO_PTR_RSI xchg word ptr [rsi], r12w
#define XCHG_R12W_TO_PTR_RBP xchg word ptr [rbp], r12w
#define XCHG_R12W_TO_PTR_RSP xchg word ptr [rsp], r12w
#define XCHG_R12W_TO_PTR_R8 xchg word ptr [r8], r12w
#define XCHG_R12W_TO_PTR_R9 xchg word ptr [r9], r12w
#define XCHG_R12W_TO_PTR_R10 xchg word ptr [r10], r12w
#define XCHG_R12W_TO_PTR_R11 xchg word ptr [r11], r12w
#define XCHG_R12W_TO_PTR_R12 xchg word ptr [r12], r12w
#define XCHG_R12W_TO_PTR_R13 xchg word ptr [r13], r12w
#define XCHG_R12W_TO_PTR_R14 xchg word ptr [r14], r12w
#define XCHG_R12W_TO_PTR_R15 xchg word ptr [r15], r12w
#define XCHG_R12W_TO_PTR_EAX xchg word ptr [eax], r12w
#define XCHG_R12W_TO_PTR_EBX xchg word ptr [ebx], r12w
#define XCHG_R12W_TO_PTR_ECX xchg word ptr [ecx], r12w
#define XCHG_R12W_TO_PTR_EDX xchg word ptr [edx], r12w
#define XCHG_R12W_TO_PTR_EDI xchg word ptr [edi], r12w
#define XCHG_R12W_TO_PTR_ESI xchg word ptr [esi], r12w
#define XCHG_R12W_TO_PTR_EBP xchg word ptr [ebp], r12w
#define XCHG_R12W_TO_PTR_ESP xchg word ptr [esp], r12w

#define XCHG_R13W_TO_PTR_RAX xchg word ptr [rax], r13w
#define XCHG_R13W_TO_PTR_RBX xchg word ptr [rbx], r13w
#define XCHG_R13W_TO_PTR_RCX xchg word ptr [rcx], r13w
#define XCHG_R13W_TO_PTR_RDX xchg word ptr [rdx], r13w
#define XCHG_R13W_TO_PTR_RDI xchg word ptr [rdi], r13w
#define XCHG_R13W_TO_PTR_RSI xchg word ptr [rsi], r13w
#define XCHG_R13W_TO_PTR_RBP xchg word ptr [rbp], r13w
#define XCHG_R13W_TO_PTR_RSP xchg word ptr [rsp], r13w
#define XCHG_R13W_TO_PTR_R8 xchg word ptr [r8], r13w
#define XCHG_R13W_TO_PTR_R9 xchg word ptr [r9], r13w
#define XCHG_R13W_TO_PTR_R10 xchg word ptr [r10], r13w
#define XCHG_R13W_TO_PTR_R11 xchg word ptr [r11], r13w
#define XCHG_R13W_TO_PTR_R12 xchg word ptr [r12], r13w
#define XCHG_R13W_TO_PTR_R13 xchg word ptr [r13], r13w
#define XCHG_R13W_TO_PTR_R14 xchg word ptr [r14], r13w
#define XCHG_R13W_TO_PTR_R15 xchg word ptr [r15], r13w
#define XCHG_R13W_TO_PTR_EAX xchg word ptr [eax], r13w
#define XCHG_R13W_TO_PTR_EBX xchg word ptr [ebx], r13w
#define XCHG_R13W_TO_PTR_ECX xchg word ptr [ecx], r13w
#define XCHG_R13W_TO_PTR_EDX xchg word ptr [edx], r13w
#define XCHG_R13W_TO_PTR_EDI xchg word ptr [edi], r13w
#define XCHG_R13W_TO_PTR_ESI xchg word ptr [esi], r13w
#define XCHG_R13W_TO_PTR_EBP xchg word ptr [ebp], r13w
#define XCHG_R13W_TO_PTR_ESP xchg word ptr [esp], r13w

#define XCHG_R14W_TO_PTR_RAX xchg word ptr [rax], r14w
#define XCHG_R14W_TO_PTR_RBX xchg word ptr [rbx], r14w
#define XCHG_R14W_TO_PTR_RCX xchg word ptr [rcx], r14w
#define XCHG_R14W_TO_PTR_RDX xchg word ptr [rdx], r14w
#define XCHG_R14W_TO_PTR_RDI xchg word ptr [rdi], r14w
#define XCHG_R14W_TO_PTR_RSI xchg word ptr [rsi], r14w
#define XCHG_R14W_TO_PTR_RBP xchg word ptr [rbp], r14w
#define XCHG_R14W_TO_PTR_RSP xchg word ptr [rsp], r14w
#define XCHG_R14W_TO_PTR_R8 xchg word ptr [r8], r14w
#define XCHG_R14W_TO_PTR_R9 xchg word ptr [r9], r14w
#define XCHG_R14W_TO_PTR_R10 xchg word ptr [r10], r14w
#define XCHG_R14W_TO_PTR_R11 xchg word ptr [r11], r14w
#define XCHG_R14W_TO_PTR_R12 xchg word ptr [r12], r14w
#define XCHG_R14W_TO_PTR_R13 xchg word ptr [r13], r14w
#define XCHG_R14W_TO_PTR_R14 xchg word ptr [r14], r14w
#define XCHG_R14W_TO_PTR_R15 xchg word ptr [r15], r14w
#define XCHG_R14W_TO_PTR_EAX xchg word ptr [eax], r14w
#define XCHG_R14W_TO_PTR_EBX xchg word ptr [ebx], r14w
#define XCHG_R14W_TO_PTR_ECX xchg word ptr [ecx], r14w
#define XCHG_R14W_TO_PTR_EDX xchg word ptr [edx], r14w
#define XCHG_R14W_TO_PTR_EDI xchg word ptr [edi], r14w
#define XCHG_R14W_TO_PTR_ESI xchg word ptr [esi], r14w
#define XCHG_R14W_TO_PTR_EBP xchg word ptr [ebp], r14w
#define XCHG_R14W_TO_PTR_ESP xchg word ptr [esp], r14w

#define XCHG_R15W_TO_PTR_RAX xchg word ptr [rax], r15w
#define XCHG_R15W_TO_PTR_RBX xchg word ptr [rbx], r15w
#define XCHG_R15W_TO_PTR_RCX xchg word ptr [rcx], r15w
#define XCHG_R15W_TO_PTR_RDX xchg word ptr [rdx], r15w
#define XCHG_R15W_TO_PTR_RDI xchg word ptr [rdi], r15w
#define XCHG_R15W_TO_PTR_RSI xchg word ptr [rsi], r15w
#define XCHG_R15W_TO_PTR_RBP xchg word ptr [rbp], r15w
#define XCHG_R15W_TO_PTR_RSP xchg word ptr [rsp], r15w
#define XCHG_R15W_TO_PTR_R8 xchg word ptr [r8], r15w
#define XCHG_R15W_TO_PTR_R9 xchg word ptr [r9], r15w
#define XCHG_R15W_TO_PTR_R10 xchg word ptr [r10], r15w
#define XCHG_R15W_TO_PTR_R11 xchg word ptr [r11], r15w
#define XCHG_R15W_TO_PTR_R12 xchg word ptr [r12], r15w
#define XCHG_R15W_TO_PTR_R13 xchg word ptr [r13], r15w
#define XCHG_R15W_TO_PTR_R14 xchg word ptr [r14], r15w
#define XCHG_R15W_TO_PTR_R15 xchg word ptr [r15], r15w
#define XCHG_R15W_TO_PTR_EAX xchg word ptr [eax], r15w
#define XCHG_R15W_TO_PTR_EBX xchg word ptr [ebx], r15w
#define XCHG_R15W_TO_PTR_ECX xchg word ptr [ecx], r15w
#define XCHG_R15W_TO_PTR_EDX xchg word ptr [edx], r15w
#define XCHG_R15W_TO_PTR_EDI xchg word ptr [edi], r15w
#define XCHG_R15W_TO_PTR_ESI xchg word ptr [esi], r15w
#define XCHG_R15W_TO_PTR_EBP xchg word ptr [ebp], r15w
#define XCHG_R15W_TO_PTR_ESP xchg word ptr [esp], r15w

#define XCHG_AX_FROM_PTR_RAX_(VALUE) xchg ax, word ptr [rax + VALUE]
#define XCHG_AX_FROM_PTR_RBX_(VALUE) xchg ax, word ptr [rbx + VALUE]
#define XCHG_AX_FROM_PTR_RCX_(VALUE) xchg ax, word ptr [rcx + VALUE]
#define XCHG_AX_FROM_PTR_RDX_(VALUE) xchg ax, word ptr [rdx + VALUE]
#define XCHG_AX_FROM_PTR_RDI_(VALUE) xchg ax, word ptr [rdi + VALUE]
#define XCHG_AX_FROM_PTR_RSI_(VALUE) xchg ax, word ptr [rsi + VALUE]
#define XCHG_AX_FROM_PTR_RBP_(VALUE) xchg ax, word ptr [rbp + VALUE]
#define XCHG_AX_FROM_PTR_RSP_(VALUE) xchg ax, word ptr [rsp + VALUE]
#define XCHG_AX_FROM_PTR_R8_(VALUE) xchg ax, word ptr [r8 + VALUE]
#define XCHG_AX_FROM_PTR_R9_(VALUE) xchg ax, word ptr [r9 + VALUE]
#define XCHG_AX_FROM_PTR_R10_(VALUE) xchg ax, word ptr [r10 + VALUE]
#define XCHG_AX_FROM_PTR_R11_(VALUE) xchg ax, word ptr [r11 + VALUE]
#define XCHG_AX_FROM_PTR_R12_(VALUE) xchg ax, word ptr [r12 + VALUE]
#define XCHG_AX_FROM_PTR_R13_(VALUE) xchg ax, word ptr [r13 + VALUE]
#define XCHG_AX_FROM_PTR_R14_(VALUE) xchg ax, word ptr [r14 + VALUE]
#define XCHG_AX_FROM_PTR_R15_(VALUE) xchg ax, word ptr [r15 + VALUE]
#define XCHG_AX_FROM_PTR_EAX_(VALUE) xchg ax, word ptr [eax + VALUE]
#define XCHG_AX_FROM_PTR_EBX_(VALUE) xchg ax, word ptr [ebx + VALUE]
#define XCHG_AX_FROM_PTR_ECX_(VALUE) xchg ax, word ptr [ecx + VALUE]
#define XCHG_AX_FROM_PTR_EDX_(VALUE) xchg ax, word ptr [edx + VALUE]
#define XCHG_AX_FROM_PTR_EDI_(VALUE) xchg ax, word ptr [edi + VALUE]
#define XCHG_AX_FROM_PTR_ESI_(VALUE) xchg ax, word ptr [esi + VALUE]
#define XCHG_AX_FROM_PTR_EBP_(VALUE) xchg ax, word ptr [ebp + VALUE]
#define XCHG_AX_FROM_PTR_ESP_(VALUE) xchg ax, word ptr [esp + VALUE]

#define XCHG_BX_FROM_PTR_RAX_(VALUE) xchg bx, word ptr [rax + VALUE]
#define XCHG_BX_FROM_PTR_RBX_(VALUE) xchg bx, word ptr [rbx + VALUE]
#define XCHG_BX_FROM_PTR_RCX_(VALUE) xchg bx, word ptr [rcx + VALUE]
#define XCHG_BX_FROM_PTR_RDX_(VALUE) xchg bx, word ptr [rdx + VALUE]
#define XCHG_BX_FROM_PTR_RDI_(VALUE) xchg bx, word ptr [rdi + VALUE]
#define XCHG_BX_FROM_PTR_RSI_(VALUE) xchg bx, word ptr [rsi + VALUE]
#define XCHG_BX_FROM_PTR_RBP_(VALUE) xchg bx, word ptr [rbp + VALUE]
#define XCHG_BX_FROM_PTR_RSP_(VALUE) xchg bx, word ptr [rsp + VALUE]
#define XCHG_BX_FROM_PTR_R8_(VALUE) xchg bx, word ptr [r8 + VALUE]
#define XCHG_BX_FROM_PTR_R9_(VALUE) xchg bx, word ptr [r9 + VALUE]
#define XCHG_BX_FROM_PTR_R10_(VALUE) xchg bx, word ptr [r10 + VALUE]
#define XCHG_BX_FROM_PTR_R11_(VALUE) xchg bx, word ptr [r11 + VALUE]
#define XCHG_BX_FROM_PTR_R12_(VALUE) xchg bx, word ptr [r12 + VALUE]
#define XCHG_BX_FROM_PTR_R13_(VALUE) xchg bx, word ptr [r13 + VALUE]
#define XCHG_BX_FROM_PTR_R14_(VALUE) xchg bx, word ptr [r14 + VALUE]
#define XCHG_BX_FROM_PTR_R15_(VALUE) xchg bx, word ptr [r15 + VALUE]
#define XCHG_BX_FROM_PTR_EAX_(VALUE) xchg bx, word ptr [eax + VALUE]
#define XCHG_BX_FROM_PTR_EBX_(VALUE) xchg bx, word ptr [ebx + VALUE]
#define XCHG_BX_FROM_PTR_ECX_(VALUE) xchg bx, word ptr [ecx + VALUE]
#define XCHG_BX_FROM_PTR_EDX_(VALUE) xchg bx, word ptr [edx + VALUE]
#define XCHG_BX_FROM_PTR_EDI_(VALUE) xchg bx, word ptr [edi + VALUE]
#define XCHG_BX_FROM_PTR_ESI_(VALUE) xchg bx, word ptr [esi + VALUE]
#define XCHG_BX_FROM_PTR_EBP_(VALUE) xchg bx, word ptr [ebp + VALUE]
#define XCHG_BX_FROM_PTR_ESP_(VALUE) xchg bx, word ptr [esp + VALUE]

#define XCHG_CX_FROM_PTR_RAX_(VALUE) xchg cx, word ptr [rax + VALUE]
#define XCHG_CX_FROM_PTR_RBX_(VALUE) xchg cx, word ptr [rbx + VALUE]
#define XCHG_CX_FROM_PTR_RCX_(VALUE) xchg cx, word ptr [rcx + VALUE]
#define XCHG_CX_FROM_PTR_RDX_(VALUE) xchg cx, word ptr [rdx + VALUE]
#define XCHG_CX_FROM_PTR_RDI_(VALUE) xchg cx, word ptr [rdi + VALUE]
#define XCHG_CX_FROM_PTR_RSI_(VALUE) xchg cx, word ptr [rsi + VALUE]
#define XCHG_CX_FROM_PTR_RBP_(VALUE) xchg cx, word ptr [rbp + VALUE]
#define XCHG_CX_FROM_PTR_RSP_(VALUE) xchg cx, word ptr [rsp + VALUE]
#define XCHG_CX_FROM_PTR_R8_(VALUE) xchg cx, word ptr [r8 + VALUE]
#define XCHG_CX_FROM_PTR_R9_(VALUE) xchg cx, word ptr [r9 + VALUE]
#define XCHG_CX_FROM_PTR_R10_(VALUE) xchg cx, word ptr [r10 + VALUE]
#define XCHG_CX_FROM_PTR_R11_(VALUE) xchg cx, word ptr [r11 + VALUE]
#define XCHG_CX_FROM_PTR_R12_(VALUE) xchg cx, word ptr [r12 + VALUE]
#define XCHG_CX_FROM_PTR_R13_(VALUE) xchg cx, word ptr [r13 + VALUE]
#define XCHG_CX_FROM_PTR_R14_(VALUE) xchg cx, word ptr [r14 + VALUE]
#define XCHG_CX_FROM_PTR_R15_(VALUE) xchg cx, word ptr [r15 + VALUE]
#define XCHG_CX_FROM_PTR_EAX_(VALUE) xchg cx, word ptr [eax + VALUE]
#define XCHG_CX_FROM_PTR_EBX_(VALUE) xchg cx, word ptr [ebx + VALUE]
#define XCHG_CX_FROM_PTR_ECX_(VALUE) xchg cx, word ptr [ecx + VALUE]
#define XCHG_CX_FROM_PTR_EDX_(VALUE) xchg cx, word ptr [edx + VALUE]
#define XCHG_CX_FROM_PTR_EDI_(VALUE) xchg cx, word ptr [edi + VALUE]
#define XCHG_CX_FROM_PTR_ESI_(VALUE) xchg cx, word ptr [esi + VALUE]
#define XCHG_CX_FROM_PTR_EBP_(VALUE) xchg cx, word ptr [ebp + VALUE]
#define XCHG_CX_FROM_PTR_ESP_(VALUE) xchg cx, word ptr [esp + VALUE]

#define XCHG_DX_FROM_PTR_RAX_(VALUE) xchg dx, word ptr [rax + VALUE]
#define XCHG_DX_FROM_PTR_RBX_(VALUE) xchg dx, word ptr [rbx + VALUE]
#define XCHG_DX_FROM_PTR_RCX_(VALUE) xchg dx, word ptr [rcx + VALUE]
#define XCHG_DX_FROM_PTR_RDX_(VALUE) xchg dx, word ptr [rdx + VALUE]
#define XCHG_DX_FROM_PTR_RDI_(VALUE) xchg dx, word ptr [rdi + VALUE]
#define XCHG_DX_FROM_PTR_RSI_(VALUE) xchg dx, word ptr [rsi + VALUE]
#define XCHG_DX_FROM_PTR_RBP_(VALUE) xchg dx, word ptr [rbp + VALUE]
#define XCHG_DX_FROM_PTR_RSP_(VALUE) xchg dx, word ptr [rsp + VALUE]
#define XCHG_DX_FROM_PTR_R8_(VALUE) xchg dx, word ptr [r8 + VALUE]
#define XCHG_DX_FROM_PTR_R9_(VALUE) xchg dx, word ptr [r9 + VALUE]
#define XCHG_DX_FROM_PTR_R10_(VALUE) xchg dx, word ptr [r10 + VALUE]
#define XCHG_DX_FROM_PTR_R11_(VALUE) xchg dx, word ptr [r11 + VALUE]
#define XCHG_DX_FROM_PTR_R12_(VALUE) xchg dx, word ptr [r12 + VALUE]
#define XCHG_DX_FROM_PTR_R13_(VALUE) xchg dx, word ptr [r13 + VALUE]
#define XCHG_DX_FROM_PTR_R14_(VALUE) xchg dx, word ptr [r14 + VALUE]
#define XCHG_DX_FROM_PTR_R15_(VALUE) xchg dx, word ptr [r15 + VALUE]
#define XCHG_DX_FROM_PTR_EAX_(VALUE) xchg dx, word ptr [eax + VALUE]
#define XCHG_DX_FROM_PTR_EBX_(VALUE) xchg dx, word ptr [ebx + VALUE]
#define XCHG_DX_FROM_PTR_ECX_(VALUE) xchg dx, word ptr [ecx + VALUE]
#define XCHG_DX_FROM_PTR_EDX_(VALUE) xchg dx, word ptr [edx + VALUE]
#define XCHG_DX_FROM_PTR_EDI_(VALUE) xchg dx, word ptr [edi + VALUE]
#define XCHG_DX_FROM_PTR_ESI_(VALUE) xchg dx, word ptr [esi + VALUE]
#define XCHG_DX_FROM_PTR_EBP_(VALUE) xchg dx, word ptr [ebp + VALUE]
#define XCHG_DX_FROM_PTR_ESP_(VALUE) xchg dx, word ptr [esp + VALUE]

#define XCHG_DI_FROM_PTR_RAX_(VALUE) xchg di, word ptr [rax + VALUE]
#define XCHG_DI_FROM_PTR_RBX_(VALUE) xchg di, word ptr [rbx + VALUE]
#define XCHG_DI_FROM_PTR_RCX_(VALUE) xchg di, word ptr [rcx + VALUE]
#define XCHG_DI_FROM_PTR_RDX_(VALUE) xchg di, word ptr [rdx + VALUE]
#define XCHG_DI_FROM_PTR_RDI_(VALUE) xchg di, word ptr [rdi + VALUE]
#define XCHG_DI_FROM_PTR_RSI_(VALUE) xchg di, word ptr [rsi + VALUE]
#define XCHG_DI_FROM_PTR_RBP_(VALUE) xchg di, word ptr [rbp + VALUE]
#define XCHG_DI_FROM_PTR_RSP_(VALUE) xchg di, word ptr [rsp + VALUE]
#define XCHG_DI_FROM_PTR_R8_(VALUE) xchg di, word ptr [r8 + VALUE]
#define XCHG_DI_FROM_PTR_R9_(VALUE) xchg di, word ptr [r9 + VALUE]
#define XCHG_DI_FROM_PTR_R10_(VALUE) xchg di, word ptr [r10 + VALUE]
#define XCHG_DI_FROM_PTR_R11_(VALUE) xchg di, word ptr [r11 + VALUE]
#define XCHG_DI_FROM_PTR_R12_(VALUE) xchg di, word ptr [r12 + VALUE]
#define XCHG_DI_FROM_PTR_R13_(VALUE) xchg di, word ptr [r13 + VALUE]
#define XCHG_DI_FROM_PTR_R14_(VALUE) xchg di, word ptr [r14 + VALUE]
#define XCHG_DI_FROM_PTR_R15_(VALUE) xchg di, word ptr [r15 + VALUE]
#define XCHG_DI_FROM_PTR_EAX_(VALUE) xchg di, word ptr [eax + VALUE]
#define XCHG_DI_FROM_PTR_EBX_(VALUE) xchg di, word ptr [ebx + VALUE]
#define XCHG_DI_FROM_PTR_ECX_(VALUE) xchg di, word ptr [ecx + VALUE]
#define XCHG_DI_FROM_PTR_EDX_(VALUE) xchg di, word ptr [edx + VALUE]
#define XCHG_DI_FROM_PTR_EDI_(VALUE) xchg di, word ptr [edi + VALUE]
#define XCHG_DI_FROM_PTR_ESI_(VALUE) xchg di, word ptr [esi + VALUE]
#define XCHG_DI_FROM_PTR_EBP_(VALUE) xchg di, word ptr [ebp + VALUE]
#define XCHG_DI_FROM_PTR_ESP_(VALUE) xchg di, word ptr [esp + VALUE]

#define XCHG_SI_FROM_PTR_RAX_(VALUE) xchg si, word ptr [rax + VALUE]
#define XCHG_SI_FROM_PTR_RBX_(VALUE) xchg si, word ptr [rbx + VALUE]
#define XCHG_SI_FROM_PTR_RCX_(VALUE) xchg si, word ptr [rcx + VALUE]
#define XCHG_SI_FROM_PTR_RDX_(VALUE) xchg si, word ptr [rdx + VALUE]
#define XCHG_SI_FROM_PTR_RDI_(VALUE) xchg si, word ptr [rdi + VALUE]
#define XCHG_SI_FROM_PTR_RSI_(VALUE) xchg si, word ptr [rsi + VALUE]
#define XCHG_SI_FROM_PTR_RBP_(VALUE) xchg si, word ptr [rbp + VALUE]
#define XCHG_SI_FROM_PTR_RSP_(VALUE) xchg si, word ptr [rsp + VALUE]
#define XCHG_SI_FROM_PTR_R8_(VALUE) xchg si, word ptr [r8 + VALUE]
#define XCHG_SI_FROM_PTR_R9_(VALUE) xchg si, word ptr [r9 + VALUE]
#define XCHG_SI_FROM_PTR_R10_(VALUE) xchg si, word ptr [r10 + VALUE]
#define XCHG_SI_FROM_PTR_R11_(VALUE) xchg si, word ptr [r11 + VALUE]
#define XCHG_SI_FROM_PTR_R12_(VALUE) xchg si, word ptr [r12 + VALUE]
#define XCHG_SI_FROM_PTR_R13_(VALUE) xchg si, word ptr [r13 + VALUE]
#define XCHG_SI_FROM_PTR_R14_(VALUE) xchg si, word ptr [r14 + VALUE]
#define XCHG_SI_FROM_PTR_R15_(VALUE) xchg si, word ptr [r15 + VALUE]
#define XCHG_SI_FROM_PTR_EAX_(VALUE) xchg si, word ptr [eax + VALUE]
#define XCHG_SI_FROM_PTR_EBX_(VALUE) xchg si, word ptr [ebx + VALUE]
#define XCHG_SI_FROM_PTR_ECX_(VALUE) xchg si, word ptr [ecx + VALUE]
#define XCHG_SI_FROM_PTR_EDX_(VALUE) xchg si, word ptr [edx + VALUE]
#define XCHG_SI_FROM_PTR_EDI_(VALUE) xchg si, word ptr [edi + VALUE]
#define XCHG_SI_FROM_PTR_ESI_(VALUE) xchg si, word ptr [esi + VALUE]
#define XCHG_SI_FROM_PTR_EBP_(VALUE) xchg si, word ptr [ebp + VALUE]
#define XCHG_SI_FROM_PTR_ESP_(VALUE) xchg si, word ptr [esp + VALUE]

#define XCHG_BP_FROM_PTR_RAX_(VALUE) xchg bp, word ptr [rax + VALUE]
#define XCHG_BP_FROM_PTR_RBX_(VALUE) xchg bp, word ptr [rbx + VALUE]
#define XCHG_BP_FROM_PTR_RCX_(VALUE) xchg bp, word ptr [rcx + VALUE]
#define XCHG_BP_FROM_PTR_RDX_(VALUE) xchg bp, word ptr [rdx + VALUE]
#define XCHG_BP_FROM_PTR_RDI_(VALUE) xchg bp, word ptr [rdi + VALUE]
#define XCHG_BP_FROM_PTR_RSI_(VALUE) xchg bp, word ptr [rsi + VALUE]
#define XCHG_BP_FROM_PTR_RBP_(VALUE) xchg bp, word ptr [rbp + VALUE]
#define XCHG_BP_FROM_PTR_RSP_(VALUE) xchg bp, word ptr [rsp + VALUE]
#define XCHG_BP_FROM_PTR_R8_(VALUE) xchg bp, word ptr [r8 + VALUE]
#define XCHG_BP_FROM_PTR_R9_(VALUE) xchg bp, word ptr [r9 + VALUE]
#define XCHG_BP_FROM_PTR_R10_(VALUE) xchg bp, word ptr [r10 + VALUE]
#define XCHG_BP_FROM_PTR_R11_(VALUE) xchg bp, word ptr [r11 + VALUE]
#define XCHG_BP_FROM_PTR_R12_(VALUE) xchg bp, word ptr [r12 + VALUE]
#define XCHG_BP_FROM_PTR_R13_(VALUE) xchg bp, word ptr [r13 + VALUE]
#define XCHG_BP_FROM_PTR_R14_(VALUE) xchg bp, word ptr [r14 + VALUE]
#define XCHG_BP_FROM_PTR_R15_(VALUE) xchg bp, word ptr [r15 + VALUE]
#define XCHG_BP_FROM_PTR_EAX_(VALUE) xchg bp, word ptr [eax + VALUE]
#define XCHG_BP_FROM_PTR_EBX_(VALUE) xchg bp, word ptr [ebx + VALUE]
#define XCHG_BP_FROM_PTR_ECX_(VALUE) xchg bp, word ptr [ecx + VALUE]
#define XCHG_BP_FROM_PTR_EDX_(VALUE) xchg bp, word ptr [edx + VALUE]
#define XCHG_BP_FROM_PTR_EDI_(VALUE) xchg bp, word ptr [edi + VALUE]
#define XCHG_BP_FROM_PTR_ESI_(VALUE) xchg bp, word ptr [esi + VALUE]
#define XCHG_BP_FROM_PTR_EBP_(VALUE) xchg bp, word ptr [ebp + VALUE]
#define XCHG_BP_FROM_PTR_ESP_(VALUE) xchg bp, word ptr [esp + VALUE]

#define XCHG_SP_FROM_PTR_RAX_(VALUE) xchg sp, word ptr [rax + VALUE]
#define XCHG_SP_FROM_PTR_RBX_(VALUE) xchg sp, word ptr [rbx + VALUE]
#define XCHG_SP_FROM_PTR_RCX_(VALUE) xchg sp, word ptr [rcx + VALUE]
#define XCHG_SP_FROM_PTR_RDX_(VALUE) xchg sp, word ptr [rdx + VALUE]
#define XCHG_SP_FROM_PTR_RDI_(VALUE) xchg sp, word ptr [rdi + VALUE]
#define XCHG_SP_FROM_PTR_RSI_(VALUE) xchg sp, word ptr [rsi + VALUE]
#define XCHG_SP_FROM_PTR_RBP_(VALUE) xchg sp, word ptr [rbp + VALUE]
#define XCHG_SP_FROM_PTR_RSP_(VALUE) xchg sp, word ptr [rsp + VALUE]
#define XCHG_SP_FROM_PTR_R8_(VALUE) xchg sp, word ptr [r8 + VALUE]
#define XCHG_SP_FROM_PTR_R9_(VALUE) xchg sp, word ptr [r9 + VALUE]
#define XCHG_SP_FROM_PTR_R10_(VALUE) xchg sp, word ptr [r10 + VALUE]
#define XCHG_SP_FROM_PTR_R11_(VALUE) xchg sp, word ptr [r11 + VALUE]
#define XCHG_SP_FROM_PTR_R12_(VALUE) xchg sp, word ptr [r12 + VALUE]
#define XCHG_SP_FROM_PTR_R13_(VALUE) xchg sp, word ptr [r13 + VALUE]
#define XCHG_SP_FROM_PTR_R14_(VALUE) xchg sp, word ptr [r14 + VALUE]
#define XCHG_SP_FROM_PTR_R15_(VALUE) xchg sp, word ptr [r15 + VALUE]
#define XCHG_SP_FROM_PTR_EAX_(VALUE) xchg sp, word ptr [eax + VALUE]
#define XCHG_SP_FROM_PTR_EBX_(VALUE) xchg sp, word ptr [ebx + VALUE]
#define XCHG_SP_FROM_PTR_ECX_(VALUE) xchg sp, word ptr [ecx + VALUE]
#define XCHG_SP_FROM_PTR_EDX_(VALUE) xchg sp, word ptr [edx + VALUE]
#define XCHG_SP_FROM_PTR_EDI_(VALUE) xchg sp, word ptr [edi + VALUE]
#define XCHG_SP_FROM_PTR_ESI_(VALUE) xchg sp, word ptr [esi + VALUE]
#define XCHG_SP_FROM_PTR_EBP_(VALUE) xchg sp, word ptr [ebp + VALUE]
#define XCHG_SP_FROM_PTR_ESP_(VALUE) xchg sp, word ptr [esp + VALUE]

#define XCHG_R8W_FROM_PTR_RAX_(VALUE) xchg r8w, word ptr [rax + VALUE]
#define XCHG_R8W_FROM_PTR_RBX_(VALUE) xchg r8w, word ptr [rbx + VALUE]
#define XCHG_R8W_FROM_PTR_RCX_(VALUE) xchg r8w, word ptr [rcx + VALUE]
#define XCHG_R8W_FROM_PTR_RDX_(VALUE) xchg r8w, word ptr [rdx + VALUE]
#define XCHG_R8W_FROM_PTR_RDI_(VALUE) xchg r8w, word ptr [rdi + VALUE]
#define XCHG_R8W_FROM_PTR_RSI_(VALUE) xchg r8w, word ptr [rsi + VALUE]
#define XCHG_R8W_FROM_PTR_RBP_(VALUE) xchg r8w, word ptr [rbp + VALUE]
#define XCHG_R8W_FROM_PTR_RSP_(VALUE) xchg r8w, word ptr [rsp + VALUE]
#define XCHG_R8W_FROM_PTR_R8_(VALUE) xchg r8w, word ptr [r8 + VALUE]
#define XCHG_R8W_FROM_PTR_R9_(VALUE) xchg r8w, word ptr [r9 + VALUE]
#define XCHG_R8W_FROM_PTR_R10_(VALUE) xchg r8w, word ptr [r10 + VALUE]
#define XCHG_R8W_FROM_PTR_R11_(VALUE) xchg r8w, word ptr [r11 + VALUE]
#define XCHG_R8W_FROM_PTR_R12_(VALUE) xchg r8w, word ptr [r12 + VALUE]
#define XCHG_R8W_FROM_PTR_R13_(VALUE) xchg r8w, word ptr [r13 + VALUE]
#define XCHG_R8W_FROM_PTR_R14_(VALUE) xchg r8w, word ptr [r14 + VALUE]
#define XCHG_R8W_FROM_PTR_R15_(VALUE) xchg r8w, word ptr [r15 + VALUE]
#define XCHG_R8W_FROM_PTR_EAX_(VALUE) xchg r8w, word ptr [eax + VALUE]
#define XCHG_R8W_FROM_PTR_EBX_(VALUE) xchg r8w, word ptr [ebx + VALUE]
#define XCHG_R8W_FROM_PTR_ECX_(VALUE) xchg r8w, word ptr [ecx + VALUE]
#define XCHG_R8W_FROM_PTR_EDX_(VALUE) xchg r8w, word ptr [edx + VALUE]
#define XCHG_R8W_FROM_PTR_EDI_(VALUE) xchg r8w, word ptr [edi + VALUE]
#define XCHG_R8W_FROM_PTR_ESI_(VALUE) xchg r8w, word ptr [esi + VALUE]
#define XCHG_R8W_FROM_PTR_EBP_(VALUE) xchg r8w, word ptr [ebp + VALUE]
#define XCHG_R8W_FROM_PTR_ESP_(VALUE) xchg r8w, word ptr [esp + VALUE]

#define XCHG_R9W_FROM_PTR_RAX_(VALUE) xchg r9w, word ptr [rax + VALUE]
#define XCHG_R9W_FROM_PTR_RBX_(VALUE) xchg r9w, word ptr [rbx + VALUE]
#define XCHG_R9W_FROM_PTR_RCX_(VALUE) xchg r9w, word ptr [rcx + VALUE]
#define XCHG_R9W_FROM_PTR_RDX_(VALUE) xchg r9w, word ptr [rdx + VALUE]
#define XCHG_R9W_FROM_PTR_RDI_(VALUE) xchg r9w, word ptr [rdi + VALUE]
#define XCHG_R9W_FROM_PTR_RSI_(VALUE) xchg r9w, word ptr [rsi + VALUE]
#define XCHG_R9W_FROM_PTR_RBP_(VALUE) xchg r9w, word ptr [rbp + VALUE]
#define XCHG_R9W_FROM_PTR_RSP_(VALUE) xchg r9w, word ptr [rsp + VALUE]
#define XCHG_R9W_FROM_PTR_R8_(VALUE) xchg r9w, word ptr [r8 + VALUE]
#define XCHG_R9W_FROM_PTR_R9_(VALUE) xchg r9w, word ptr [r9 + VALUE]
#define XCHG_R9W_FROM_PTR_R10_(VALUE) xchg r9w, word ptr [r10 + VALUE]
#define XCHG_R9W_FROM_PTR_R11_(VALUE) xchg r9w, word ptr [r11 + VALUE]
#define XCHG_R9W_FROM_PTR_R12_(VALUE) xchg r9w, word ptr [r12 + VALUE]
#define XCHG_R9W_FROM_PTR_R13_(VALUE) xchg r9w, word ptr [r13 + VALUE]
#define XCHG_R9W_FROM_PTR_R14_(VALUE) xchg r9w, word ptr [r14 + VALUE]
#define XCHG_R9W_FROM_PTR_R15_(VALUE) xchg r9w, word ptr [r15 + VALUE]
#define XCHG_R9W_FROM_PTR_EAX_(VALUE) xchg r9w, word ptr [eax + VALUE]
#define XCHG_R9W_FROM_PTR_EBX_(VALUE) xchg r9w, word ptr [ebx + VALUE]
#define XCHG_R9W_FROM_PTR_ECX_(VALUE) xchg r9w, word ptr [ecx + VALUE]
#define XCHG_R9W_FROM_PTR_EDX_(VALUE) xchg r9w, word ptr [edx + VALUE]
#define XCHG_R9W_FROM_PTR_EDI_(VALUE) xchg r9w, word ptr [edi + VALUE]
#define XCHG_R9W_FROM_PTR_ESI_(VALUE) xchg r9w, word ptr [esi + VALUE]
#define XCHG_R9W_FROM_PTR_EBP_(VALUE) xchg r9w, word ptr [ebp + VALUE]
#define XCHG_R9W_FROM_PTR_ESP_(VALUE) xchg r9w, word ptr [esp + VALUE]

#define XCHG_R10W_FROM_PTR_RAX_(VALUE) xchg r10w, word ptr [rax + VALUE]
#define XCHG_R10W_FROM_PTR_RBX_(VALUE) xchg r10w, word ptr [rbx + VALUE]
#define XCHG_R10W_FROM_PTR_RCX_(VALUE) xchg r10w, word ptr [rcx + VALUE]
#define XCHG_R10W_FROM_PTR_RDX_(VALUE) xchg r10w, word ptr [rdx + VALUE]
#define XCHG_R10W_FROM_PTR_RDI_(VALUE) xchg r10w, word ptr [rdi + VALUE]
#define XCHG_R10W_FROM_PTR_RSI_(VALUE) xchg r10w, word ptr [rsi + VALUE]
#define XCHG_R10W_FROM_PTR_RBP_(VALUE) xchg r10w, word ptr [rbp + VALUE]
#define XCHG_R10W_FROM_PTR_RSP_(VALUE) xchg r10w, word ptr [rsp + VALUE]
#define XCHG_R10W_FROM_PTR_R8_(VALUE) xchg r10w, word ptr [r8 + VALUE]
#define XCHG_R10W_FROM_PTR_R9_(VALUE) xchg r10w, word ptr [r9 + VALUE]
#define XCHG_R10W_FROM_PTR_R10_(VALUE) xchg r10w, word ptr [r10 + VALUE]
#define XCHG_R10W_FROM_PTR_R11_(VALUE) xchg r10w, word ptr [r11 + VALUE]
#define XCHG_R10W_FROM_PTR_R12_(VALUE) xchg r10w, word ptr [r12 + VALUE]
#define XCHG_R10W_FROM_PTR_R13_(VALUE) xchg r10w, word ptr [r13 + VALUE]
#define XCHG_R10W_FROM_PTR_R14_(VALUE) xchg r10w, word ptr [r14 + VALUE]
#define XCHG_R10W_FROM_PTR_R15_(VALUE) xchg r10w, word ptr [r15 + VALUE]
#define XCHG_R10W_FROM_PTR_EAX_(VALUE) xchg r10w, word ptr [eax + VALUE]
#define XCHG_R10W_FROM_PTR_EBX_(VALUE) xchg r10w, word ptr [ebx + VALUE]
#define XCHG_R10W_FROM_PTR_ECX_(VALUE) xchg r10w, word ptr [ecx + VALUE]
#define XCHG_R10W_FROM_PTR_EDX_(VALUE) xchg r10w, word ptr [edx + VALUE]
#define XCHG_R10W_FROM_PTR_EDI_(VALUE) xchg r10w, word ptr [edi + VALUE]
#define XCHG_R10W_FROM_PTR_ESI_(VALUE) xchg r10w, word ptr [esi + VALUE]
#define XCHG_R10W_FROM_PTR_EBP_(VALUE) xchg r10w, word ptr [ebp + VALUE]
#define XCHG_R10W_FROM_PTR_ESP_(VALUE) xchg r10w, word ptr [esp + VALUE]

#define XCHG_R11W_FROM_PTR_RAX_(VALUE) xchg r11w, word ptr [rax + VALUE]
#define XCHG_R11W_FROM_PTR_RBX_(VALUE) xchg r11w, word ptr [rbx + VALUE]
#define XCHG_R11W_FROM_PTR_RCX_(VALUE) xchg r11w, word ptr [rcx + VALUE]
#define XCHG_R11W_FROM_PTR_RDX_(VALUE) xchg r11w, word ptr [rdx + VALUE]
#define XCHG_R11W_FROM_PTR_RDI_(VALUE) xchg r11w, word ptr [rdi + VALUE]
#define XCHG_R11W_FROM_PTR_RSI_(VALUE) xchg r11w, word ptr [rsi + VALUE]
#define XCHG_R11W_FROM_PTR_RBP_(VALUE) xchg r11w, word ptr [rbp + VALUE]
#define XCHG_R11W_FROM_PTR_RSP_(VALUE) xchg r11w, word ptr [rsp + VALUE]
#define XCHG_R11W_FROM_PTR_R8_(VALUE) xchg r11w, word ptr [r8 + VALUE]
#define XCHG_R11W_FROM_PTR_R9_(VALUE) xchg r11w, word ptr [r9 + VALUE]
#define XCHG_R11W_FROM_PTR_R10_(VALUE) xchg r11w, word ptr [r10 + VALUE]
#define XCHG_R11W_FROM_PTR_R11_(VALUE) xchg r11w, word ptr [r11 + VALUE]
#define XCHG_R11W_FROM_PTR_R12_(VALUE) xchg r11w, word ptr [r12 + VALUE]
#define XCHG_R11W_FROM_PTR_R13_(VALUE) xchg r11w, word ptr [r13 + VALUE]
#define XCHG_R11W_FROM_PTR_R14_(VALUE) xchg r11w, word ptr [r14 + VALUE]
#define XCHG_R11W_FROM_PTR_R15_(VALUE) xchg r11w, word ptr [r15 + VALUE]
#define XCHG_R11W_FROM_PTR_EAX_(VALUE) xchg r11w, word ptr [eax + VALUE]
#define XCHG_R11W_FROM_PTR_EBX_(VALUE) xchg r11w, word ptr [ebx + VALUE]
#define XCHG_R11W_FROM_PTR_ECX_(VALUE) xchg r11w, word ptr [ecx + VALUE]
#define XCHG_R11W_FROM_PTR_EDX_(VALUE) xchg r11w, word ptr [edx + VALUE]
#define XCHG_R11W_FROM_PTR_EDI_(VALUE) xchg r11w, word ptr [edi + VALUE]
#define XCHG_R11W_FROM_PTR_ESI_(VALUE) xchg r11w, word ptr [esi + VALUE]
#define XCHG_R11W_FROM_PTR_EBP_(VALUE) xchg r11w, word ptr [ebp + VALUE]
#define XCHG_R11W_FROM_PTR_ESP_(VALUE) xchg r11w, word ptr [esp + VALUE]

#define XCHG_R12W_FROM_PTR_RAX_(VALUE) xchg r12w, word ptr [rax + VALUE]
#define XCHG_R12W_FROM_PTR_RBX_(VALUE) xchg r12w, word ptr [rbx + VALUE]
#define XCHG_R12W_FROM_PTR_RCX_(VALUE) xchg r12w, word ptr [rcx + VALUE]
#define XCHG_R12W_FROM_PTR_RDX_(VALUE) xchg r12w, word ptr [rdx + VALUE]
#define XCHG_R12W_FROM_PTR_RDI_(VALUE) xchg r12w, word ptr [rdi + VALUE]
#define XCHG_R12W_FROM_PTR_RSI_(VALUE) xchg r12w, word ptr [rsi + VALUE]
#define XCHG_R12W_FROM_PTR_RBP_(VALUE) xchg r12w, word ptr [rbp + VALUE]
#define XCHG_R12W_FROM_PTR_RSP_(VALUE) xchg r12w, word ptr [rsp + VALUE]
#define XCHG_R12W_FROM_PTR_R8_(VALUE) xchg r12w, word ptr [r8 + VALUE]
#define XCHG_R12W_FROM_PTR_R9_(VALUE) xchg r12w, word ptr [r9 + VALUE]
#define XCHG_R12W_FROM_PTR_R10_(VALUE) xchg r12w, word ptr [r10 + VALUE]
#define XCHG_R12W_FROM_PTR_R11_(VALUE) xchg r12w, word ptr [r11 + VALUE]
#define XCHG_R12W_FROM_PTR_R12_(VALUE) xchg r12w, word ptr [r12 + VALUE]
#define XCHG_R12W_FROM_PTR_R13_(VALUE) xchg r12w, word ptr [r13 + VALUE]
#define XCHG_R12W_FROM_PTR_R14_(VALUE) xchg r12w, word ptr [r14 + VALUE]
#define XCHG_R12W_FROM_PTR_R15_(VALUE) xchg r12w, word ptr [r15 + VALUE]
#define XCHG_R12W_FROM_PTR_EAX_(VALUE) xchg r12w, word ptr [eax + VALUE]
#define XCHG_R12W_FROM_PTR_EBX_(VALUE) xchg r12w, word ptr [ebx + VALUE]
#define XCHG_R12W_FROM_PTR_ECX_(VALUE) xchg r12w, word ptr [ecx + VALUE]
#define XCHG_R12W_FROM_PTR_EDX_(VALUE) xchg r12w, word ptr [edx + VALUE]
#define XCHG_R12W_FROM_PTR_EDI_(VALUE) xchg r12w, word ptr [edi + VALUE]
#define XCHG_R12W_FROM_PTR_ESI_(VALUE) xchg r12w, word ptr [esi + VALUE]
#define XCHG_R12W_FROM_PTR_EBP_(VALUE) xchg r12w, word ptr [ebp + VALUE]
#define XCHG_R12W_FROM_PTR_ESP_(VALUE) xchg r12w, word ptr [esp + VALUE]

#define XCHG_R13W_FROM_PTR_RAX_(VALUE) xchg r13w, word ptr [rax + VALUE]
#define XCHG_R13W_FROM_PTR_RBX_(VALUE) xchg r13w, word ptr [rbx + VALUE]
#define XCHG_R13W_FROM_PTR_RCX_(VALUE) xchg r13w, word ptr [rcx + VALUE]
#define XCHG_R13W_FROM_PTR_RDX_(VALUE) xchg r13w, word ptr [rdx + VALUE]
#define XCHG_R13W_FROM_PTR_RDI_(VALUE) xchg r13w, word ptr [rdi + VALUE]
#define XCHG_R13W_FROM_PTR_RSI_(VALUE) xchg r13w, word ptr [rsi + VALUE]
#define XCHG_R13W_FROM_PTR_RBP_(VALUE) xchg r13w, word ptr [rbp + VALUE]
#define XCHG_R13W_FROM_PTR_RSP_(VALUE) xchg r13w, word ptr [rsp + VALUE]
#define XCHG_R13W_FROM_PTR_R8_(VALUE) xchg r13w, word ptr [r8 + VALUE]
#define XCHG_R13W_FROM_PTR_R9_(VALUE) xchg r13w, word ptr [r9 + VALUE]
#define XCHG_R13W_FROM_PTR_R10_(VALUE) xchg r13w, word ptr [r10 + VALUE]
#define XCHG_R13W_FROM_PTR_R11_(VALUE) xchg r13w, word ptr [r11 + VALUE]
#define XCHG_R13W_FROM_PTR_R12_(VALUE) xchg r13w, word ptr [r12 + VALUE]
#define XCHG_R13W_FROM_PTR_R13_(VALUE) xchg r13w, word ptr [r13 + VALUE]
#define XCHG_R13W_FROM_PTR_R14_(VALUE) xchg r13w, word ptr [r14 + VALUE]
#define XCHG_R13W_FROM_PTR_R15_(VALUE) xchg r13w, word ptr [r15 + VALUE]
#define XCHG_R13W_FROM_PTR_EAX_(VALUE) xchg r13w, word ptr [eax + VALUE]
#define XCHG_R13W_FROM_PTR_EBX_(VALUE) xchg r13w, word ptr [ebx + VALUE]
#define XCHG_R13W_FROM_PTR_ECX_(VALUE) xchg r13w, word ptr [ecx + VALUE]
#define XCHG_R13W_FROM_PTR_EDX_(VALUE) xchg r13w, word ptr [edx + VALUE]
#define XCHG_R13W_FROM_PTR_EDI_(VALUE) xchg r13w, word ptr [edi + VALUE]
#define XCHG_R13W_FROM_PTR_ESI_(VALUE) xchg r13w, word ptr [esi + VALUE]
#define XCHG_R13W_FROM_PTR_EBP_(VALUE) xchg r13w, word ptr [ebp + VALUE]
#define XCHG_R13W_FROM_PTR_ESP_(VALUE) xchg r13w, word ptr [esp + VALUE]

#define XCHG_R14W_FROM_PTR_RAX_(VALUE) xchg r14w, word ptr [rax + VALUE]
#define XCHG_R14W_FROM_PTR_RBX_(VALUE) xchg r14w, word ptr [rbx + VALUE]
#define XCHG_R14W_FROM_PTR_RCX_(VALUE) xchg r14w, word ptr [rcx + VALUE]
#define XCHG_R14W_FROM_PTR_RDX_(VALUE) xchg r14w, word ptr [rdx + VALUE]
#define XCHG_R14W_FROM_PTR_RDI_(VALUE) xchg r14w, word ptr [rdi + VALUE]
#define XCHG_R14W_FROM_PTR_RSI_(VALUE) xchg r14w, word ptr [rsi + VALUE]
#define XCHG_R14W_FROM_PTR_RBP_(VALUE) xchg r14w, word ptr [rbp + VALUE]
#define XCHG_R14W_FROM_PTR_RSP_(VALUE) xchg r14w, word ptr [rsp + VALUE]
#define XCHG_R14W_FROM_PTR_R8_(VALUE) xchg r14w, word ptr [r8 + VALUE]
#define XCHG_R14W_FROM_PTR_R9_(VALUE) xchg r14w, word ptr [r9 + VALUE]
#define XCHG_R14W_FROM_PTR_R10_(VALUE) xchg r14w, word ptr [r10 + VALUE]
#define XCHG_R14W_FROM_PTR_R11_(VALUE) xchg r14w, word ptr [r11 + VALUE]
#define XCHG_R14W_FROM_PTR_R12_(VALUE) xchg r14w, word ptr [r12 + VALUE]
#define XCHG_R14W_FROM_PTR_R13_(VALUE) xchg r14w, word ptr [r13 + VALUE]
#define XCHG_R14W_FROM_PTR_R14_(VALUE) xchg r14w, word ptr [r14 + VALUE]
#define XCHG_R14W_FROM_PTR_R15_(VALUE) xchg r14w, word ptr [r15 + VALUE]
#define XCHG_R14W_FROM_PTR_EAX_(VALUE) xchg r14w, word ptr [eax + VALUE]
#define XCHG_R14W_FROM_PTR_EBX_(VALUE) xchg r14w, word ptr [ebx + VALUE]
#define XCHG_R14W_FROM_PTR_ECX_(VALUE) xchg r14w, word ptr [ecx + VALUE]
#define XCHG_R14W_FROM_PTR_EDX_(VALUE) xchg r14w, word ptr [edx + VALUE]
#define XCHG_R14W_FROM_PTR_EDI_(VALUE) xchg r14w, word ptr [edi + VALUE]
#define XCHG_R14W_FROM_PTR_ESI_(VALUE) xchg r14w, word ptr [esi + VALUE]
#define XCHG_R14W_FROM_PTR_EBP_(VALUE) xchg r14w, word ptr [ebp + VALUE]
#define XCHG_R14W_FROM_PTR_ESP_(VALUE) xchg r14w, word ptr [esp + VALUE]

#define XCHG_R15W_FROM_PTR_RAX_(VALUE) xchg r15w, word ptr [rax + VALUE]
#define XCHG_R15W_FROM_PTR_RBX_(VALUE) xchg r15w, word ptr [rbx + VALUE]
#define XCHG_R15W_FROM_PTR_RCX_(VALUE) xchg r15w, word ptr [rcx + VALUE]
#define XCHG_R15W_FROM_PTR_RDX_(VALUE) xchg r15w, word ptr [rdx + VALUE]
#define XCHG_R15W_FROM_PTR_RDI_(VALUE) xchg r15w, word ptr [rdi + VALUE]
#define XCHG_R15W_FROM_PTR_RSI_(VALUE) xchg r15w, word ptr [rsi + VALUE]
#define XCHG_R15W_FROM_PTR_RBP_(VALUE) xchg r15w, word ptr [rbp + VALUE]
#define XCHG_R15W_FROM_PTR_RSP_(VALUE) xchg r15w, word ptr [rsp + VALUE]
#define XCHG_R15W_FROM_PTR_R8_(VALUE) xchg r15w, word ptr [r8 + VALUE]
#define XCHG_R15W_FROM_PTR_R9_(VALUE) xchg r15w, word ptr [r9 + VALUE]
#define XCHG_R15W_FROM_PTR_R10_(VALUE) xchg r15w, word ptr [r10 + VALUE]
#define XCHG_R15W_FROM_PTR_R11_(VALUE) xchg r15w, word ptr [r11 + VALUE]
#define XCHG_R15W_FROM_PTR_R12_(VALUE) xchg r15w, word ptr [r12 + VALUE]
#define XCHG_R15W_FROM_PTR_R13_(VALUE) xchg r15w, word ptr [r13 + VALUE]
#define XCHG_R15W_FROM_PTR_R14_(VALUE) xchg r15w, word ptr [r14 + VALUE]
#define XCHG_R15W_FROM_PTR_R15_(VALUE) xchg r15w, word ptr [r15 + VALUE]
#define XCHG_R15W_FROM_PTR_EAX_(VALUE) xchg r15w, word ptr [eax + VALUE]
#define XCHG_R15W_FROM_PTR_EBX_(VALUE) xchg r15w, word ptr [ebx + VALUE]
#define XCHG_R15W_FROM_PTR_ECX_(VALUE) xchg r15w, word ptr [ecx + VALUE]
#define XCHG_R15W_FROM_PTR_EDX_(VALUE) xchg r15w, word ptr [edx + VALUE]
#define XCHG_R15W_FROM_PTR_EDI_(VALUE) xchg r15w, word ptr [edi + VALUE]
#define XCHG_R15W_FROM_PTR_ESI_(VALUE) xchg r15w, word ptr [esi + VALUE]
#define XCHG_R15W_FROM_PTR_EBP_(VALUE) xchg r15w, word ptr [ebp + VALUE]
#define XCHG_R15W_FROM_PTR_ESP_(VALUE) xchg r15w, word ptr [esp + VALUE]

#define XCHG_AX_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], ax
#define XCHG_AX_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], ax
#define XCHG_AX_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], ax
#define XCHG_AX_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], ax
#define XCHG_AX_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], ax
#define XCHG_AX_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], ax
#define XCHG_AX_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], ax
#define XCHG_AX_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], ax
#define XCHG_AX_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], ax
#define XCHG_AX_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], ax
#define XCHG_AX_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], ax
#define XCHG_AX_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], ax
#define XCHG_AX_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], ax
#define XCHG_AX_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], ax
#define XCHG_AX_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], ax
#define XCHG_AX_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], ax
#define XCHG_AX_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], ax
#define XCHG_AX_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], ax
#define XCHG_AX_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], ax
#define XCHG_AX_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], ax
#define XCHG_AX_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], ax
#define XCHG_AX_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], ax
#define XCHG_AX_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], ax
#define XCHG_AX_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], ax

#define XCHG_BX_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], bx
#define XCHG_BX_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], bx
#define XCHG_BX_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], bx
#define XCHG_BX_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], bx
#define XCHG_BX_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], bx
#define XCHG_BX_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], bx
#define XCHG_BX_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], bx
#define XCHG_BX_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], bx
#define XCHG_BX_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], bx
#define XCHG_BX_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], bx
#define XCHG_BX_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], bx
#define XCHG_BX_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], bx
#define XCHG_BX_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], bx
#define XCHG_BX_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], bx
#define XCHG_BX_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], bx
#define XCHG_BX_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], bx
#define XCHG_BX_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], bx
#define XCHG_BX_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], bx
#define XCHG_BX_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], bx
#define XCHG_BX_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], bx
#define XCHG_BX_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], bx
#define XCHG_BX_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], bx
#define XCHG_BX_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], bx
#define XCHG_BX_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], bx

#define XCHG_CX_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], cx
#define XCHG_CX_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], cx
#define XCHG_CX_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], cx
#define XCHG_CX_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], cx
#define XCHG_CX_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], cx
#define XCHG_CX_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], cx
#define XCHG_CX_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], cx
#define XCHG_CX_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], cx
#define XCHG_CX_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], cx
#define XCHG_CX_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], cx
#define XCHG_CX_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], cx
#define XCHG_CX_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], cx
#define XCHG_CX_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], cx
#define XCHG_CX_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], cx
#define XCHG_CX_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], cx
#define XCHG_CX_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], cx
#define XCHG_CX_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], cx
#define XCHG_CX_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], cx
#define XCHG_CX_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], cx
#define XCHG_CX_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], cx
#define XCHG_CX_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], cx
#define XCHG_CX_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], cx
#define XCHG_CX_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], cx
#define XCHG_CX_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], cx

#define XCHG_DX_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], dx
#define XCHG_DX_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], dx
#define XCHG_DX_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], dx
#define XCHG_DX_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], dx
#define XCHG_DX_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], dx
#define XCHG_DX_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], dx
#define XCHG_DX_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], dx
#define XCHG_DX_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], dx
#define XCHG_DX_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], dx
#define XCHG_DX_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], dx
#define XCHG_DX_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], dx
#define XCHG_DX_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], dx
#define XCHG_DX_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], dx
#define XCHG_DX_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], dx
#define XCHG_DX_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], dx
#define XCHG_DX_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], dx
#define XCHG_DX_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], dx
#define XCHG_DX_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], dx
#define XCHG_DX_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], dx
#define XCHG_DX_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], dx
#define XCHG_DX_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], dx
#define XCHG_DX_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], dx
#define XCHG_DX_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], dx
#define XCHG_DX_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], dx

#define XCHG_DI_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], di
#define XCHG_DI_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], di
#define XCHG_DI_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], di
#define XCHG_DI_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], di
#define XCHG_DI_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], di
#define XCHG_DI_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], di
#define XCHG_DI_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], di
#define XCHG_DI_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], di
#define XCHG_DI_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], di
#define XCHG_DI_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], di
#define XCHG_DI_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], di
#define XCHG_DI_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], di
#define XCHG_DI_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], di
#define XCHG_DI_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], di
#define XCHG_DI_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], di
#define XCHG_DI_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], di
#define XCHG_DI_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], di
#define XCHG_DI_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], di
#define XCHG_DI_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], di
#define XCHG_DI_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], di
#define XCHG_DI_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], di
#define XCHG_DI_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], di
#define XCHG_DI_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], di
#define XCHG_DI_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], di

#define XCHG_SI_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], si
#define XCHG_SI_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], si
#define XCHG_SI_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], si
#define XCHG_SI_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], si
#define XCHG_SI_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], si
#define XCHG_SI_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], si
#define XCHG_SI_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], si
#define XCHG_SI_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], si
#define XCHG_SI_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], si
#define XCHG_SI_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], si
#define XCHG_SI_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], si
#define XCHG_SI_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], si
#define XCHG_SI_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], si
#define XCHG_SI_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], si
#define XCHG_SI_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], si
#define XCHG_SI_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], si
#define XCHG_SI_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], si
#define XCHG_SI_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], si
#define XCHG_SI_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], si
#define XCHG_SI_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], si
#define XCHG_SI_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], si
#define XCHG_SI_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], si
#define XCHG_SI_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], si
#define XCHG_SI_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], si

#define XCHG_BP_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], bp
#define XCHG_BP_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], bp
#define XCHG_BP_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], bp
#define XCHG_BP_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], bp
#define XCHG_BP_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], bp
#define XCHG_BP_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], bp
#define XCHG_BP_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], bp
#define XCHG_BP_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], bp
#define XCHG_BP_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], bp
#define XCHG_BP_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], bp
#define XCHG_BP_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], bp
#define XCHG_BP_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], bp
#define XCHG_BP_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], bp
#define XCHG_BP_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], bp
#define XCHG_BP_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], bp
#define XCHG_BP_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], bp
#define XCHG_BP_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], bp
#define XCHG_BP_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], bp
#define XCHG_BP_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], bp
#define XCHG_BP_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], bp
#define XCHG_BP_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], bp
#define XCHG_BP_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], bp
#define XCHG_BP_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], bp
#define XCHG_BP_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], bp

#define XCHG_SP_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], sp
#define XCHG_SP_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], sp
#define XCHG_SP_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], sp
#define XCHG_SP_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], sp
#define XCHG_SP_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], sp
#define XCHG_SP_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], sp
#define XCHG_SP_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], sp
#define XCHG_SP_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], sp
#define XCHG_SP_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], sp
#define XCHG_SP_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], sp
#define XCHG_SP_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], sp
#define XCHG_SP_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], sp
#define XCHG_SP_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], sp
#define XCHG_SP_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], sp
#define XCHG_SP_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], sp
#define XCHG_SP_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], sp
#define XCHG_SP_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], sp
#define XCHG_SP_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], sp
#define XCHG_SP_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], sp
#define XCHG_SP_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], sp
#define XCHG_SP_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], sp
#define XCHG_SP_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], sp
#define XCHG_SP_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], sp
#define XCHG_SP_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], sp

#define XCHG_R8W_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], r8w
#define XCHG_R8W_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], r8w
#define XCHG_R8W_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], r8w
#define XCHG_R8W_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], r8w
#define XCHG_R8W_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], r8w
#define XCHG_R8W_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], r8w
#define XCHG_R8W_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], r8w
#define XCHG_R8W_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], r8w
#define XCHG_R8W_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], r8w
#define XCHG_R8W_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], r8w
#define XCHG_R8W_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], r8w
#define XCHG_R8W_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], r8w
#define XCHG_R8W_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], r8w
#define XCHG_R8W_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], r8w
#define XCHG_R8W_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], r8w
#define XCHG_R8W_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], r8w
#define XCHG_R8W_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], r8w
#define XCHG_R8W_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], r8w
#define XCHG_R8W_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], r8w
#define XCHG_R8W_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], r8w
#define XCHG_R8W_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], r8w
#define XCHG_R8W_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], r8w
#define XCHG_R8W_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], r8w
#define XCHG_R8W_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], r8w

#define XCHG_R9W_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], r9w
#define XCHG_R9W_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], r9w
#define XCHG_R9W_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], r9w
#define XCHG_R9W_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], r9w
#define XCHG_R9W_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], r9w
#define XCHG_R9W_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], r9w
#define XCHG_R9W_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], r9w
#define XCHG_R9W_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], r9w
#define XCHG_R9W_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], r9w
#define XCHG_R9W_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], r9w
#define XCHG_R9W_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], r9w
#define XCHG_R9W_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], r9w
#define XCHG_R9W_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], r9w
#define XCHG_R9W_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], r9w
#define XCHG_R9W_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], r9w
#define XCHG_R9W_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], r9w
#define XCHG_R9W_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], r9w
#define XCHG_R9W_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], r9w
#define XCHG_R9W_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], r9w
#define XCHG_R9W_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], r9w
#define XCHG_R9W_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], r9w
#define XCHG_R9W_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], r9w
#define XCHG_R9W_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], r9w
#define XCHG_R9W_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], r9w

#define XCHG_R10W_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], r10w
#define XCHG_R10W_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], r10w
#define XCHG_R10W_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], r10w
#define XCHG_R10W_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], r10w
#define XCHG_R10W_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], r10w
#define XCHG_R10W_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], r10w
#define XCHG_R10W_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], r10w
#define XCHG_R10W_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], r10w
#define XCHG_R10W_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], r10w
#define XCHG_R10W_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], r10w
#define XCHG_R10W_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], r10w
#define XCHG_R10W_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], r10w
#define XCHG_R10W_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], r10w
#define XCHG_R10W_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], r10w
#define XCHG_R10W_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], r10w
#define XCHG_R10W_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], r10w
#define XCHG_R10W_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], r10w
#define XCHG_R10W_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], r10w
#define XCHG_R10W_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], r10w
#define XCHG_R10W_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], r10w
#define XCHG_R10W_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], r10w
#define XCHG_R10W_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], r10w
#define XCHG_R10W_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], r10w
#define XCHG_R10W_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], r10w

#define XCHG_R11W_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], r11w
#define XCHG_R11W_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], r11w
#define XCHG_R11W_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], r11w
#define XCHG_R11W_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], r11w
#define XCHG_R11W_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], r11w
#define XCHG_R11W_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], r11w
#define XCHG_R11W_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], r11w
#define XCHG_R11W_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], r11w
#define XCHG_R11W_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], r11w
#define XCHG_R11W_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], r11w
#define XCHG_R11W_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], r11w
#define XCHG_R11W_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], r11w
#define XCHG_R11W_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], r11w
#define XCHG_R11W_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], r11w
#define XCHG_R11W_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], r11w
#define XCHG_R11W_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], r11w
#define XCHG_R11W_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], r11w
#define XCHG_R11W_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], r11w
#define XCHG_R11W_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], r11w
#define XCHG_R11W_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], r11w
#define XCHG_R11W_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], r11w
#define XCHG_R11W_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], r11w
#define XCHG_R11W_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], r11w
#define XCHG_R11W_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], r11w

#define XCHG_R12W_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], r12w
#define XCHG_R12W_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], r12w
#define XCHG_R12W_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], r12w
#define XCHG_R12W_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], r12w
#define XCHG_R12W_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], r12w
#define XCHG_R12W_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], r12w
#define XCHG_R12W_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], r12w
#define XCHG_R12W_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], r12w
#define XCHG_R12W_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], r12w
#define XCHG_R12W_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], r12w
#define XCHG_R12W_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], r12w
#define XCHG_R12W_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], r12w
#define XCHG_R12W_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], r12w
#define XCHG_R12W_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], r12w
#define XCHG_R12W_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], r12w
#define XCHG_R12W_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], r12w
#define XCHG_R12W_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], r12w
#define XCHG_R12W_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], r12w
#define XCHG_R12W_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], r12w
#define XCHG_R12W_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], r12w
#define XCHG_R12W_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], r12w
#define XCHG_R12W_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], r12w
#define XCHG_R12W_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], r12w
#define XCHG_R12W_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], r12w

#define XCHG_R13W_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], r13w
#define XCHG_R13W_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], r13w
#define XCHG_R13W_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], r13w
#define XCHG_R13W_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], r13w
#define XCHG_R13W_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], r13w
#define XCHG_R13W_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], r13w
#define XCHG_R13W_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], r13w
#define XCHG_R13W_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], r13w
#define XCHG_R13W_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], r13w
#define XCHG_R13W_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], r13w
#define XCHG_R13W_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], r13w
#define XCHG_R13W_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], r13w
#define XCHG_R13W_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], r13w
#define XCHG_R13W_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], r13w
#define XCHG_R13W_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], r13w
#define XCHG_R13W_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], r13w
#define XCHG_R13W_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], r13w
#define XCHG_R13W_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], r13w
#define XCHG_R13W_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], r13w
#define XCHG_R13W_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], r13w
#define XCHG_R13W_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], r13w
#define XCHG_R13W_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], r13w
#define XCHG_R13W_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], r13w
#define XCHG_R13W_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], r13w

#define XCHG_R14W_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], r14w
#define XCHG_R14W_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], r14w
#define XCHG_R14W_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], r14w
#define XCHG_R14W_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], r14w
#define XCHG_R14W_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], r14w
#define XCHG_R14W_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], r14w
#define XCHG_R14W_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], r14w
#define XCHG_R14W_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], r14w
#define XCHG_R14W_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], r14w
#define XCHG_R14W_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], r14w
#define XCHG_R14W_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], r14w
#define XCHG_R14W_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], r14w
#define XCHG_R14W_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], r14w
#define XCHG_R14W_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], r14w
#define XCHG_R14W_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], r14w
#define XCHG_R14W_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], r14w
#define XCHG_R14W_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], r14w
#define XCHG_R14W_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], r14w
#define XCHG_R14W_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], r14w
#define XCHG_R14W_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], r14w
#define XCHG_R14W_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], r14w
#define XCHG_R14W_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], r14w
#define XCHG_R14W_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], r14w
#define XCHG_R14W_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], r14w

#define XCHG_R15W_TO_PTR_RAX_(VALUE) xchg word ptr [rax + VALUE], r15w
#define XCHG_R15W_TO_PTR_RBX_(VALUE) xchg word ptr [rbx + VALUE], r15w
#define XCHG_R15W_TO_PTR_RCX_(VALUE) xchg word ptr [rcx + VALUE], r15w
#define XCHG_R15W_TO_PTR_RDX_(VALUE) xchg word ptr [rdx + VALUE], r15w
#define XCHG_R15W_TO_PTR_RDI_(VALUE) xchg word ptr [rdi + VALUE], r15w
#define XCHG_R15W_TO_PTR_RSI_(VALUE) xchg word ptr [rsi + VALUE], r15w
#define XCHG_R15W_TO_PTR_RBP_(VALUE) xchg word ptr [rbp + VALUE], r15w
#define XCHG_R15W_TO_PTR_RSP_(VALUE) xchg word ptr [rsp + VALUE], r15w
#define XCHG_R15W_TO_PTR_R8_(VALUE) xchg word ptr [r8 + VALUE], r15w
#define XCHG_R15W_TO_PTR_R9_(VALUE) xchg word ptr [r9 + VALUE], r15w
#define XCHG_R15W_TO_PTR_R10_(VALUE) xchg word ptr [r10 + VALUE], r15w
#define XCHG_R15W_TO_PTR_R11_(VALUE) xchg word ptr [r11 + VALUE], r15w
#define XCHG_R15W_TO_PTR_R12_(VALUE) xchg word ptr [r12 + VALUE], r15w
#define XCHG_R15W_TO_PTR_R13_(VALUE) xchg word ptr [r13 + VALUE], r15w
#define XCHG_R15W_TO_PTR_R14_(VALUE) xchg word ptr [r14 + VALUE], r15w
#define XCHG_R15W_TO_PTR_R15_(VALUE) xchg word ptr [r15 + VALUE], r15w
#define XCHG_R15W_TO_PTR_EAX_(VALUE) xchg word ptr [eax + VALUE], r15w
#define XCHG_R15W_TO_PTR_EBX_(VALUE) xchg word ptr [ebx + VALUE], r15w
#define XCHG_R15W_TO_PTR_ECX_(VALUE) xchg word ptr [ecx + VALUE], r15w
#define XCHG_R15W_TO_PTR_EDX_(VALUE) xchg word ptr [edx + VALUE], r15w
#define XCHG_R15W_TO_PTR_EDI_(VALUE) xchg word ptr [edi + VALUE], r15w
#define XCHG_R15W_TO_PTR_ESI_(VALUE) xchg word ptr [esi + VALUE], r15w
#define XCHG_R15W_TO_PTR_EBP_(VALUE) xchg word ptr [ebp + VALUE], r15w
#define XCHG_R15W_TO_PTR_ESP_(VALUE) xchg word ptr [esp + VALUE], r15w
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
