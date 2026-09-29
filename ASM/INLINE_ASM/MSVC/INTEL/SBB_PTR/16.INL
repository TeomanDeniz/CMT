#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define SBB_AL_FROM_PTR_(VALUE) sbb al, byte ptr [VALUE]
#define SBB_BL_FROM_PTR_(VALUE) sbb bl, byte ptr [VALUE]
#define SBB_CL_FROM_PTR_(VALUE) sbb cl, byte ptr [VALUE]
#define SBB_DL_FROM_PTR_(VALUE) sbb dl, byte ptr [VALUE]

#define SBB_AL_TO_PTR_(VALUE) sbb byte ptr [VALUE], al
#define SBB_BL_TO_PTR_(VALUE) sbb byte ptr [VALUE], bl
#define SBB_CL_TO_PTR_(VALUE) sbb byte ptr [VALUE], cl
#define SBB_DL_TO_PTR_(VALUE) sbb byte ptr [VALUE], dl

#define SBB_AL_FROM_PTR_BX sbb al, byte ptr [bx]
#define SBB_AL_FROM_PTR_BP sbb al, byte ptr [bp]
#define SBB_AL_FROM_PTR_SI sbb al, byte ptr [si]
#define SBB_AL_FROM_PTR_DI sbb al, byte ptr [di]

#define SBB_BL_FROM_PTR_BX sbb bl, byte ptr [bx]
#define SBB_BL_FROM_PTR_BP sbb bl, byte ptr [bp]
#define SBB_BL_FROM_PTR_SI sbb bl, byte ptr [si]
#define SBB_BL_FROM_PTR_DI sbb bl, byte ptr [di]

#define SBB_CL_FROM_PTR_BX sbb cl, byte ptr [bx]
#define SBB_CL_FROM_PTR_BP sbb cl, byte ptr [bp]
#define SBB_CL_FROM_PTR_SI sbb cl, byte ptr [si]
#define SBB_CL_FROM_PTR_DI sbb cl, byte ptr [di]

#define SBB_DL_FROM_PTR_BX sbb dl, byte ptr [bx]
#define SBB_DL_FROM_PTR_BP sbb dl, byte ptr [bp]
#define SBB_DL_FROM_PTR_SI sbb dl, byte ptr [si]
#define SBB_DL_FROM_PTR_DI sbb dl, byte ptr [di]

#define SBB_AL_TO_PTR_BX sbb byte ptr [bx], al
#define SBB_AL_TO_PTR_BP sbb byte ptr [bp], al
#define SBB_AL_TO_PTR_SI sbb byte ptr [si], al
#define SBB_AL_TO_PTR_DI sbb byte ptr [di], al

#define SBB_BL_TO_PTR_BX sbb byte ptr [bx], bl
#define SBB_BL_TO_PTR_BP sbb byte ptr [bp], bl
#define SBB_BL_TO_PTR_SI sbb byte ptr [si], bl
#define SBB_BL_TO_PTR_DI sbb byte ptr [di], bl

#define SBB_CL_TO_PTR_BX sbb byte ptr [bx], cl
#define SBB_CL_TO_PTR_BP sbb byte ptr [bp], cl
#define SBB_CL_TO_PTR_SI sbb byte ptr [si], cl
#define SBB_CL_TO_PTR_DI sbb byte ptr [di], cl

#define SBB_DL_TO_PTR_BX sbb byte ptr [bx], dl
#define SBB_DL_TO_PTR_BP sbb byte ptr [bp], dl
#define SBB_DL_TO_PTR_SI sbb byte ptr [si], dl
#define SBB_DL_TO_PTR_DI sbb byte ptr [di], dl

#define SBB_AL_FROM_PTR_BX_(VALUE) sbb al, byte ptr [bx + VALUE]
#define SBB_AL_FROM_PTR_BP_(VALUE) sbb al, byte ptr [bp + VALUE]
#define SBB_AL_FROM_PTR_SI_(VALUE) sbb al, byte ptr [si + VALUE]
#define SBB_AL_FROM_PTR_DI_(VALUE) sbb al, byte ptr [di + VALUE]

#define SBB_BL_FROM_PTR_BX_(VALUE) sbb bl, byte ptr [bx + VALUE]
#define SBB_BL_FROM_PTR_BP_(VALUE) sbb bl, byte ptr [bp + VALUE]
#define SBB_BL_FROM_PTR_SI_(VALUE) sbb bl, byte ptr [si + VALUE]
#define SBB_BL_FROM_PTR_DI_(VALUE) sbb bl, byte ptr [di + VALUE]

#define SBB_CL_FROM_PTR_BX_(VALUE) sbb cl, byte ptr [bx + VALUE]
#define SBB_CL_FROM_PTR_BP_(VALUE) sbb cl, byte ptr [bp + VALUE]
#define SBB_CL_FROM_PTR_SI_(VALUE) sbb cl, byte ptr [si + VALUE]
#define SBB_CL_FROM_PTR_DI_(VALUE) sbb cl, byte ptr [di + VALUE]

#define SBB_DL_FROM_PTR_BX_(VALUE) sbb dl, byte ptr [bx + VALUE]
#define SBB_DL_FROM_PTR_BP_(VALUE) sbb dl, byte ptr [bp + VALUE]
#define SBB_DL_FROM_PTR_SI_(VALUE) sbb dl, byte ptr [si + VALUE]
#define SBB_DL_FROM_PTR_DI_(VALUE) sbb dl, byte ptr [di + VALUE]

#define SBB_AL_TO_PTR_BX_(VALUE) sbb byte ptr [bx + VALUE], al
#define SBB_AL_TO_PTR_BP_(VALUE) sbb byte ptr [bp + VALUE], al
#define SBB_AL_TO_PTR_SI_(VALUE) sbb byte ptr [si + VALUE], al
#define SBB_AL_TO_PTR_DI_(VALUE) sbb byte ptr [di + VALUE], al

#define SBB_BL_TO_PTR_BX_(VALUE) sbb byte ptr [bx + VALUE], bl
#define SBB_BL_TO_PTR_BP_(VALUE) sbb byte ptr [bp + VALUE], bl
#define SBB_BL_TO_PTR_SI_(VALUE) sbb byte ptr [si + VALUE], bl
#define SBB_BL_TO_PTR_DI_(VALUE) sbb byte ptr [di + VALUE], bl

#define SBB_CL_TO_PTR_BX_(VALUE) sbb byte ptr [bx + VALUE], cl
#define SBB_CL_TO_PTR_BP_(VALUE) sbb byte ptr [bp + VALUE], cl
#define SBB_CL_TO_PTR_SI_(VALUE) sbb byte ptr [si + VALUE], cl
#define SBB_CL_TO_PTR_DI_(VALUE) sbb byte ptr [di + VALUE], cl

#define SBB_DL_TO_PTR_BX_(VALUE) sbb byte ptr [bx + VALUE], dl
#define SBB_DL_TO_PTR_BP_(VALUE) sbb byte ptr [bp + VALUE], dl
#define SBB_DL_TO_PTR_SI_(VALUE) sbb byte ptr [si + VALUE], dl
#define SBB_DL_TO_PTR_DI_(VALUE) sbb byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SBB_AL_FROM_PTR_(VALUE) sbb al, byte ptr [VALUE]
#define SBB_BL_FROM_PTR_(VALUE) sbb bl, byte ptr [VALUE]
#define SBB_CL_FROM_PTR_(VALUE) sbb cl, byte ptr [VALUE]
#define SBB_DL_FROM_PTR_(VALUE) sbb dl, byte ptr [VALUE]

#define SBB_AL_TO_PTR_(VALUE) sbb byte ptr [VALUE], al
#define SBB_BL_TO_PTR_(VALUE) sbb byte ptr [VALUE], bl
#define SBB_CL_TO_PTR_(VALUE) sbb byte ptr [VALUE], cl
#define SBB_DL_TO_PTR_(VALUE) sbb byte ptr [VALUE], dl

#define SBB_AL_FROM_PTR_EAX sbb al, byte ptr [eax]
#define SBB_AL_FROM_PTR_EBX sbb al, byte ptr [ebx]
#define SBB_AL_FROM_PTR_ECX sbb al, byte ptr [ecx]
#define SBB_AL_FROM_PTR_EDX sbb al, byte ptr [edx]
#define SBB_AL_FROM_PTR_EDI sbb al, byte ptr [edi]
#define SBB_AL_FROM_PTR_ESI sbb al, byte ptr [esi]
#define SBB_AL_FROM_PTR_EBP sbb al, byte ptr [ebp]
#define SBB_AL_FROM_PTR_ESP sbb al, byte ptr [esp]
#define SBB_AL_FROM_PTR_BX sbb al, byte ptr [bx]
#define SBB_AL_FROM_PTR_BP sbb al, byte ptr [bp]
#define SBB_AL_FROM_PTR_SI sbb al, byte ptr [si]
#define SBB_AL_FROM_PTR_DI sbb al, byte ptr [di]

#define SBB_BL_FROM_PTR_EAX sbb bl, byte ptr [eax]
#define SBB_BL_FROM_PTR_EBX sbb bl, byte ptr [ebx]
#define SBB_BL_FROM_PTR_ECX sbb bl, byte ptr [ecx]
#define SBB_BL_FROM_PTR_EDX sbb bl, byte ptr [edx]
#define SBB_BL_FROM_PTR_EDI sbb bl, byte ptr [edi]
#define SBB_BL_FROM_PTR_ESI sbb bl, byte ptr [esi]
#define SBB_BL_FROM_PTR_EBP sbb bl, byte ptr [ebp]
#define SBB_BL_FROM_PTR_ESP sbb bl, byte ptr [esp]
#define SBB_BL_FROM_PTR_BX sbb bl, byte ptr [bx]
#define SBB_BL_FROM_PTR_BP sbb bl, byte ptr [bp]
#define SBB_BL_FROM_PTR_SI sbb bl, byte ptr [si]
#define SBB_BL_FROM_PTR_DI sbb bl, byte ptr [di]

#define SBB_CL_FROM_PTR_EAX sbb cl, byte ptr [eax]
#define SBB_CL_FROM_PTR_EBX sbb cl, byte ptr [ebx]
#define SBB_CL_FROM_PTR_ECX sbb cl, byte ptr [ecx]
#define SBB_CL_FROM_PTR_EDX sbb cl, byte ptr [edx]
#define SBB_CL_FROM_PTR_EDI sbb cl, byte ptr [edi]
#define SBB_CL_FROM_PTR_ESI sbb cl, byte ptr [esi]
#define SBB_CL_FROM_PTR_EBP sbb cl, byte ptr [ebp]
#define SBB_CL_FROM_PTR_ESP sbb cl, byte ptr [esp]
#define SBB_CL_FROM_PTR_BX sbb cl, byte ptr [bx]
#define SBB_CL_FROM_PTR_BP sbb cl, byte ptr [bp]
#define SBB_CL_FROM_PTR_SI sbb cl, byte ptr [si]
#define SBB_CL_FROM_PTR_DI sbb cl, byte ptr [di]

#define SBB_DL_FROM_PTR_EAX sbb dl, byte ptr [eax]
#define SBB_DL_FROM_PTR_EBX sbb dl, byte ptr [ebx]
#define SBB_DL_FROM_PTR_ECX sbb dl, byte ptr [ecx]
#define SBB_DL_FROM_PTR_EDX sbb dl, byte ptr [edx]
#define SBB_DL_FROM_PTR_EDI sbb dl, byte ptr [edi]
#define SBB_DL_FROM_PTR_ESI sbb dl, byte ptr [esi]
#define SBB_DL_FROM_PTR_EBP sbb dl, byte ptr [ebp]
#define SBB_DL_FROM_PTR_ESP sbb dl, byte ptr [esp]
#define SBB_DL_FROM_PTR_BX sbb dl, byte ptr [bx]
#define SBB_DL_FROM_PTR_BP sbb dl, byte ptr [bp]
#define SBB_DL_FROM_PTR_SI sbb dl, byte ptr [si]
#define SBB_DL_FROM_PTR_DI sbb dl, byte ptr [di]

#define SBB_AL_TO_PTR_EAX sbb byte ptr [eax], al
#define SBB_AL_TO_PTR_EBX sbb byte ptr [ebx], al
#define SBB_AL_TO_PTR_ECX sbb byte ptr [ecx], al
#define SBB_AL_TO_PTR_EDX sbb byte ptr [edx], al
#define SBB_AL_TO_PTR_EDI sbb byte ptr [edi], al
#define SBB_AL_TO_PTR_ESI sbb byte ptr [esi], al
#define SBB_AL_TO_PTR_EBP sbb byte ptr [ebp], al
#define SBB_AL_TO_PTR_ESP sbb byte ptr [esp], al
#define SBB_AL_TO_PTR_BX sbb byte ptr [bx], al
#define SBB_AL_TO_PTR_BP sbb byte ptr [bp], al
#define SBB_AL_TO_PTR_SI sbb byte ptr [si], al
#define SBB_AL_TO_PTR_DI sbb byte ptr [di], al

#define SBB_BL_TO_PTR_EAX sbb byte ptr [eax], bl
#define SBB_BL_TO_PTR_EBX sbb byte ptr [ebx], bl
#define SBB_BL_TO_PTR_ECX sbb byte ptr [ecx], bl
#define SBB_BL_TO_PTR_EDX sbb byte ptr [edx], bl
#define SBB_BL_TO_PTR_EDI sbb byte ptr [edi], bl
#define SBB_BL_TO_PTR_ESI sbb byte ptr [esi], bl
#define SBB_BL_TO_PTR_EBP sbb byte ptr [ebp], bl
#define SBB_BL_TO_PTR_ESP sbb byte ptr [esp], bl
#define SBB_BL_TO_PTR_BX sbb byte ptr [bx], bl
#define SBB_BL_TO_PTR_BP sbb byte ptr [bp], bl
#define SBB_BL_TO_PTR_SI sbb byte ptr [si], bl
#define SBB_BL_TO_PTR_DI sbb byte ptr [di], bl

#define SBB_CL_TO_PTR_EAX sbb byte ptr [eax], cl
#define SBB_CL_TO_PTR_EBX sbb byte ptr [ebx], cl
#define SBB_CL_TO_PTR_ECX sbb byte ptr [ecx], cl
#define SBB_CL_TO_PTR_EDX sbb byte ptr [edx], cl
#define SBB_CL_TO_PTR_EDI sbb byte ptr [edi], cl
#define SBB_CL_TO_PTR_ESI sbb byte ptr [esi], cl
#define SBB_CL_TO_PTR_EBP sbb byte ptr [ebp], cl
#define SBB_CL_TO_PTR_ESP sbb byte ptr [esp], cl
#define SBB_CL_TO_PTR_BX sbb byte ptr [bx], cl
#define SBB_CL_TO_PTR_BP sbb byte ptr [bp], cl
#define SBB_CL_TO_PTR_SI sbb byte ptr [si], cl
#define SBB_CL_TO_PTR_DI sbb byte ptr [di], cl

#define SBB_DL_TO_PTR_EAX sbb byte ptr [eax], dl
#define SBB_DL_TO_PTR_EBX sbb byte ptr [ebx], dl
#define SBB_DL_TO_PTR_ECX sbb byte ptr [ecx], dl
#define SBB_DL_TO_PTR_EDX sbb byte ptr [edx], dl
#define SBB_DL_TO_PTR_EDI sbb byte ptr [edi], dl
#define SBB_DL_TO_PTR_ESI sbb byte ptr [esi], dl
#define SBB_DL_TO_PTR_EBP sbb byte ptr [ebp], dl
#define SBB_DL_TO_PTR_ESP sbb byte ptr [esp], dl
#define SBB_DL_TO_PTR_BX sbb byte ptr [bx], dl
#define SBB_DL_TO_PTR_BP sbb byte ptr [bp], dl
#define SBB_DL_TO_PTR_SI sbb byte ptr [si], dl
#define SBB_DL_TO_PTR_DI sbb byte ptr [di], dl

#define SBB_AL_FROM_PTR_EAX_(VALUE) sbb al, byte ptr [eax + VALUE]
#define SBB_AL_FROM_PTR_EBX_(VALUE) sbb al, byte ptr [ebx + VALUE]
#define SBB_AL_FROM_PTR_ECX_(VALUE) sbb al, byte ptr [ecx + VALUE]
#define SBB_AL_FROM_PTR_EDX_(VALUE) sbb al, byte ptr [edx + VALUE]
#define SBB_AL_FROM_PTR_EDI_(VALUE) sbb al, byte ptr [edi + VALUE]
#define SBB_AL_FROM_PTR_ESI_(VALUE) sbb al, byte ptr [esi + VALUE]
#define SBB_AL_FROM_PTR_EBP_(VALUE) sbb al, byte ptr [ebp + VALUE]
#define SBB_AL_FROM_PTR_ESP_(VALUE) sbb al, byte ptr [esp + VALUE]
#define SBB_AL_FROM_PTR_BX_(VALUE) sbb al, byte ptr [bx + VALUE]
#define SBB_AL_FROM_PTR_BP_(VALUE) sbb al, byte ptr [bp + VALUE]
#define SBB_AL_FROM_PTR_SI_(VALUE) sbb al, byte ptr [si + VALUE]
#define SBB_AL_FROM_PTR_DI_(VALUE) sbb al, byte ptr [di + VALUE]

#define SBB_BL_FROM_PTR_EAX_(VALUE) sbb bl, byte ptr [eax + VALUE]
#define SBB_BL_FROM_PTR_EBX_(VALUE) sbb bl, byte ptr [ebx + VALUE]
#define SBB_BL_FROM_PTR_ECX_(VALUE) sbb bl, byte ptr [ecx + VALUE]
#define SBB_BL_FROM_PTR_EDX_(VALUE) sbb bl, byte ptr [edx + VALUE]
#define SBB_BL_FROM_PTR_EDI_(VALUE) sbb bl, byte ptr [edi + VALUE]
#define SBB_BL_FROM_PTR_ESI_(VALUE) sbb bl, byte ptr [esi + VALUE]
#define SBB_BL_FROM_PTR_EBP_(VALUE) sbb bl, byte ptr [ebp + VALUE]
#define SBB_BL_FROM_PTR_ESP_(VALUE) sbb bl, byte ptr [esp + VALUE]
#define SBB_BL_FROM_PTR_BX_(VALUE) sbb bl, byte ptr [bx + VALUE]
#define SBB_BL_FROM_PTR_BP_(VALUE) sbb bl, byte ptr [bp + VALUE]
#define SBB_BL_FROM_PTR_SI_(VALUE) sbb bl, byte ptr [si + VALUE]
#define SBB_BL_FROM_PTR_DI_(VALUE) sbb bl, byte ptr [di + VALUE]

#define SBB_CL_FROM_PTR_EAX_(VALUE) sbb cl, byte ptr [eax + VALUE]
#define SBB_CL_FROM_PTR_EBX_(VALUE) sbb cl, byte ptr [ebx + VALUE]
#define SBB_CL_FROM_PTR_ECX_(VALUE) sbb cl, byte ptr [ecx + VALUE]
#define SBB_CL_FROM_PTR_EDX_(VALUE) sbb cl, byte ptr [edx + VALUE]
#define SBB_CL_FROM_PTR_EDI_(VALUE) sbb cl, byte ptr [edi + VALUE]
#define SBB_CL_FROM_PTR_ESI_(VALUE) sbb cl, byte ptr [esi + VALUE]
#define SBB_CL_FROM_PTR_EBP_(VALUE) sbb cl, byte ptr [ebp + VALUE]
#define SBB_CL_FROM_PTR_ESP_(VALUE) sbb cl, byte ptr [esp + VALUE]
#define SBB_CL_FROM_PTR_BX_(VALUE) sbb cl, byte ptr [bx + VALUE]
#define SBB_CL_FROM_PTR_BP_(VALUE) sbb cl, byte ptr [bp + VALUE]
#define SBB_CL_FROM_PTR_SI_(VALUE) sbb cl, byte ptr [si + VALUE]
#define SBB_CL_FROM_PTR_DI_(VALUE) sbb cl, byte ptr [di + VALUE]

#define SBB_DL_FROM_PTR_EAX_(VALUE) sbb dl, byte ptr [eax + VALUE]
#define SBB_DL_FROM_PTR_EBX_(VALUE) sbb dl, byte ptr [ebx + VALUE]
#define SBB_DL_FROM_PTR_ECX_(VALUE) sbb dl, byte ptr [ecx + VALUE]
#define SBB_DL_FROM_PTR_EDX_(VALUE) sbb dl, byte ptr [edx + VALUE]
#define SBB_DL_FROM_PTR_EDI_(VALUE) sbb dl, byte ptr [edi + VALUE]
#define SBB_DL_FROM_PTR_ESI_(VALUE) sbb dl, byte ptr [esi + VALUE]
#define SBB_DL_FROM_PTR_EBP_(VALUE) sbb dl, byte ptr [ebp + VALUE]
#define SBB_DL_FROM_PTR_ESP_(VALUE) sbb dl, byte ptr [esp + VALUE]
#define SBB_DL_FROM_PTR_BX_(VALUE) sbb dl, byte ptr [bx + VALUE]
#define SBB_DL_FROM_PTR_BP_(VALUE) sbb dl, byte ptr [bp + VALUE]
#define SBB_DL_FROM_PTR_SI_(VALUE) sbb dl, byte ptr [si + VALUE]
#define SBB_DL_FROM_PTR_DI_(VALUE) sbb dl, byte ptr [di + VALUE]

#define SBB_AL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], al
#define SBB_AL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], al
#define SBB_AL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], al
#define SBB_AL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], al
#define SBB_AL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], al
#define SBB_AL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], al
#define SBB_AL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], al
#define SBB_AL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], al
#define SBB_AL_TO_PTR_BX_(VALUE) sbb byte ptr [bx + VALUE], al
#define SBB_AL_TO_PTR_BP_(VALUE) sbb byte ptr [bp + VALUE], al
#define SBB_AL_TO_PTR_SI_(VALUE) sbb byte ptr [si + VALUE], al
#define SBB_AL_TO_PTR_DI_(VALUE) sbb byte ptr [di + VALUE], al

#define SBB_BL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], bl
#define SBB_BL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], bl
#define SBB_BL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], bl
#define SBB_BL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], bl
#define SBB_BL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], bl
#define SBB_BL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], bl
#define SBB_BL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], bl
#define SBB_BL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], bl
#define SBB_BL_TO_PTR_BX_(VALUE) sbb byte ptr [bx + VALUE], bl
#define SBB_BL_TO_PTR_BP_(VALUE) sbb byte ptr [bp + VALUE], bl
#define SBB_BL_TO_PTR_SI_(VALUE) sbb byte ptr [si + VALUE], bl
#define SBB_BL_TO_PTR_DI_(VALUE) sbb byte ptr [di + VALUE], bl

#define SBB_CL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], cl
#define SBB_CL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], cl
#define SBB_CL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], cl
#define SBB_CL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], cl
#define SBB_CL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], cl
#define SBB_CL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], cl
#define SBB_CL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], cl
#define SBB_CL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], cl
#define SBB_CL_TO_PTR_BX_(VALUE) sbb byte ptr [bx + VALUE], cl
#define SBB_CL_TO_PTR_BP_(VALUE) sbb byte ptr [bp + VALUE], cl
#define SBB_CL_TO_PTR_SI_(VALUE) sbb byte ptr [si + VALUE], cl
#define SBB_CL_TO_PTR_DI_(VALUE) sbb byte ptr [di + VALUE], cl

#define SBB_DL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], dl
#define SBB_DL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], dl
#define SBB_DL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], dl
#define SBB_DL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], dl
#define SBB_DL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], dl
#define SBB_DL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], dl
#define SBB_DL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], dl
#define SBB_DL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], dl
#define SBB_DL_TO_PTR_BX_(VALUE) sbb byte ptr [bx + VALUE], dl
#define SBB_DL_TO_PTR_BP_(VALUE) sbb byte ptr [bp + VALUE], dl
#define SBB_DL_TO_PTR_SI_(VALUE) sbb byte ptr [si + VALUE], dl
#define SBB_DL_TO_PTR_DI_(VALUE) sbb byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_AL_FROM_PTR_(VALUE) sbb al, byte ptr [VALUE]
#define SBB_BL_FROM_PTR_(VALUE) sbb bl, byte ptr [VALUE]
#define SBB_CL_FROM_PTR_(VALUE) sbb cl, byte ptr [VALUE]
#define SBB_DL_FROM_PTR_(VALUE) sbb dl, byte ptr [VALUE]
#define SBB_DIL_FROM_PTR_(VALUE) sbb dil, byte ptr [VALUE]
#define SBB_SIL_FROM_PTR_(VALUE) sbb sil, byte ptr [VALUE]
#define SBB_BPL_FROM_PTR_(VALUE) sbb bpl, byte ptr [VALUE]
#define SBB_SPL_FROM_PTR_(VALUE) sbb spl, byte ptr [VALUE]
#define SBB_R8B_FROM_PTR_(VALUE) sbb r8b, byte ptr [VALUE]
#define SBB_R9B_FROM_PTR_(VALUE) sbb r9b, byte ptr [VALUE]
#define SBB_R10B_FROM_PTR_(VALUE) sbb r10b, byte ptr [VALUE]
#define SBB_R11B_FROM_PTR_(VALUE) sbb r11b, byte ptr [VALUE]
#define SBB_R12B_FROM_PTR_(VALUE) sbb r12b, byte ptr [VALUE]
#define SBB_R13B_FROM_PTR_(VALUE) sbb r13b, byte ptr [VALUE]
#define SBB_R14B_FROM_PTR_(VALUE) sbb r14b, byte ptr [VALUE]
#define SBB_R15B_FROM_PTR_(VALUE) sbb r15b, byte ptr [VALUE]

#define SBB_AL_TO_PTR_(VALUE) sbb byte ptr [VALUE], al
#define SBB_BL_TO_PTR_(VALUE) sbb byte ptr [VALUE], bl
#define SBB_CL_TO_PTR_(VALUE) sbb byte ptr [VALUE], cl
#define SBB_DL_TO_PTR_(VALUE) sbb byte ptr [VALUE], dl
#define SBB_DIL_TO_PTR_(VALUE) sbb byte ptr [VALUE], dil
#define SBB_SIL_TO_PTR_(VALUE) sbb byte ptr [VALUE], sil
#define SBB_BPL_TO_PTR_(VALUE) sbb byte ptr [VALUE], bpl
#define SBB_SPL_TO_PTR_(VALUE) sbb byte ptr [VALUE], spl
#define SBB_R8B_TO_PTR_(VALUE) sbb byte ptr [VALUE], r8b
#define SBB_R9B_TO_PTR_(VALUE) sbb byte ptr [VALUE], r9b
#define SBB_R10B_TO_PTR_(VALUE) sbb byte ptr [VALUE], r10b
#define SBB_R11B_TO_PTR_(VALUE) sbb byte ptr [VALUE], r11b
#define SBB_R12B_TO_PTR_(VALUE) sbb byte ptr [VALUE], r12b
#define SBB_R13B_TO_PTR_(VALUE) sbb byte ptr [VALUE], r13b
#define SBB_R14B_TO_PTR_(VALUE) sbb byte ptr [VALUE], r14b
#define SBB_R15B_TO_PTR_(VALUE) sbb byte ptr [VALUE], r15b

#define SBB_AL_FROM_PTR_RAX sbb al, byte ptr [rax]
#define SBB_AL_FROM_PTR_RBX sbb al, byte ptr [rbx]
#define SBB_AL_FROM_PTR_RCX sbb al, byte ptr [rcx]
#define SBB_AL_FROM_PTR_RDX sbb al, byte ptr [rdx]
#define SBB_AL_FROM_PTR_RDI sbb al, byte ptr [rdi]
#define SBB_AL_FROM_PTR_RSI sbb al, byte ptr [rsi]
#define SBB_AL_FROM_PTR_RBP sbb al, byte ptr [rbp]
#define SBB_AL_FROM_PTR_RSP sbb al, byte ptr [rsp]
#define SBB_AL_FROM_PTR_R8 sbb al, byte ptr [r8]
#define SBB_AL_FROM_PTR_R9 sbb al, byte ptr [r9]
#define SBB_AL_FROM_PTR_R10 sbb al, byte ptr [r10]
#define SBB_AL_FROM_PTR_R11 sbb al, byte ptr [r11]
#define SBB_AL_FROM_PTR_R12 sbb al, byte ptr [r12]
#define SBB_AL_FROM_PTR_R13 sbb al, byte ptr [r13]
#define SBB_AL_FROM_PTR_R14 sbb al, byte ptr [r14]
#define SBB_AL_FROM_PTR_R15 sbb al, byte ptr [r15]
#define SBB_AL_FROM_PTR_EAX sbb al, byte ptr [eax]
#define SBB_AL_FROM_PTR_EBX sbb al, byte ptr [ebx]
#define SBB_AL_FROM_PTR_ECX sbb al, byte ptr [ecx]
#define SBB_AL_FROM_PTR_EDX sbb al, byte ptr [edx]
#define SBB_AL_FROM_PTR_EDI sbb al, byte ptr [edi]
#define SBB_AL_FROM_PTR_ESI sbb al, byte ptr [esi]
#define SBB_AL_FROM_PTR_EBP sbb al, byte ptr [ebp]
#define SBB_AL_FROM_PTR_ESP sbb al, byte ptr [esp]

#define SBB_BL_FROM_PTR_RAX sbb bl, byte ptr [rax]
#define SBB_BL_FROM_PTR_RBX sbb bl, byte ptr [rbx]
#define SBB_BL_FROM_PTR_RCX sbb bl, byte ptr [rcx]
#define SBB_BL_FROM_PTR_RDX sbb bl, byte ptr [rdx]
#define SBB_BL_FROM_PTR_RDI sbb bl, byte ptr [rdi]
#define SBB_BL_FROM_PTR_RSI sbb bl, byte ptr [rsi]
#define SBB_BL_FROM_PTR_RBP sbb bl, byte ptr [rbp]
#define SBB_BL_FROM_PTR_RSP sbb bl, byte ptr [rsp]
#define SBB_BL_FROM_PTR_R8 sbb bl, byte ptr [r8]
#define SBB_BL_FROM_PTR_R9 sbb bl, byte ptr [r9]
#define SBB_BL_FROM_PTR_R10 sbb bl, byte ptr [r10]
#define SBB_BL_FROM_PTR_R11 sbb bl, byte ptr [r11]
#define SBB_BL_FROM_PTR_R12 sbb bl, byte ptr [r12]
#define SBB_BL_FROM_PTR_R13 sbb bl, byte ptr [r13]
#define SBB_BL_FROM_PTR_R14 sbb bl, byte ptr [r14]
#define SBB_BL_FROM_PTR_R15 sbb bl, byte ptr [r15]
#define SBB_BL_FROM_PTR_EAX sbb bl, byte ptr [eax]
#define SBB_BL_FROM_PTR_EBX sbb bl, byte ptr [ebx]
#define SBB_BL_FROM_PTR_ECX sbb bl, byte ptr [ecx]
#define SBB_BL_FROM_PTR_EDX sbb bl, byte ptr [edx]
#define SBB_BL_FROM_PTR_EDI sbb bl, byte ptr [edi]
#define SBB_BL_FROM_PTR_ESI sbb bl, byte ptr [esi]
#define SBB_BL_FROM_PTR_EBP sbb bl, byte ptr [ebp]
#define SBB_BL_FROM_PTR_ESP sbb bl, byte ptr [esp]

#define SBB_CL_FROM_PTR_RAX sbb cl, byte ptr [rax]
#define SBB_CL_FROM_PTR_RBX sbb cl, byte ptr [rbx]
#define SBB_CL_FROM_PTR_RCX sbb cl, byte ptr [rcx]
#define SBB_CL_FROM_PTR_RDX sbb cl, byte ptr [rdx]
#define SBB_CL_FROM_PTR_RDI sbb cl, byte ptr [rdi]
#define SBB_CL_FROM_PTR_RSI sbb cl, byte ptr [rsi]
#define SBB_CL_FROM_PTR_RBP sbb cl, byte ptr [rbp]
#define SBB_CL_FROM_PTR_RSP sbb cl, byte ptr [rsp]
#define SBB_CL_FROM_PTR_R8 sbb cl, byte ptr [r8]
#define SBB_CL_FROM_PTR_R9 sbb cl, byte ptr [r9]
#define SBB_CL_FROM_PTR_R10 sbb cl, byte ptr [r10]
#define SBB_CL_FROM_PTR_R11 sbb cl, byte ptr [r11]
#define SBB_CL_FROM_PTR_R12 sbb cl, byte ptr [r12]
#define SBB_CL_FROM_PTR_R13 sbb cl, byte ptr [r13]
#define SBB_CL_FROM_PTR_R14 sbb cl, byte ptr [r14]
#define SBB_CL_FROM_PTR_R15 sbb cl, byte ptr [r15]
#define SBB_CL_FROM_PTR_EAX sbb cl, byte ptr [eax]
#define SBB_CL_FROM_PTR_EBX sbb cl, byte ptr [ebx]
#define SBB_CL_FROM_PTR_ECX sbb cl, byte ptr [ecx]
#define SBB_CL_FROM_PTR_EDX sbb cl, byte ptr [edx]
#define SBB_CL_FROM_PTR_EDI sbb cl, byte ptr [edi]
#define SBB_CL_FROM_PTR_ESI sbb cl, byte ptr [esi]
#define SBB_CL_FROM_PTR_EBP sbb cl, byte ptr [ebp]
#define SBB_CL_FROM_PTR_ESP sbb cl, byte ptr [esp]

#define SBB_DL_FROM_PTR_RAX sbb dl, byte ptr [rax]
#define SBB_DL_FROM_PTR_RBX sbb dl, byte ptr [rbx]
#define SBB_DL_FROM_PTR_RCX sbb dl, byte ptr [rcx]
#define SBB_DL_FROM_PTR_RDX sbb dl, byte ptr [rdx]
#define SBB_DL_FROM_PTR_RDI sbb dl, byte ptr [rdi]
#define SBB_DL_FROM_PTR_RSI sbb dl, byte ptr [rsi]
#define SBB_DL_FROM_PTR_RBP sbb dl, byte ptr [rbp]
#define SBB_DL_FROM_PTR_RSP sbb dl, byte ptr [rsp]
#define SBB_DL_FROM_PTR_R8 sbb dl, byte ptr [r8]
#define SBB_DL_FROM_PTR_R9 sbb dl, byte ptr [r9]
#define SBB_DL_FROM_PTR_R10 sbb dl, byte ptr [r10]
#define SBB_DL_FROM_PTR_R11 sbb dl, byte ptr [r11]
#define SBB_DL_FROM_PTR_R12 sbb dl, byte ptr [r12]
#define SBB_DL_FROM_PTR_R13 sbb dl, byte ptr [r13]
#define SBB_DL_FROM_PTR_R14 sbb dl, byte ptr [r14]
#define SBB_DL_FROM_PTR_R15 sbb dl, byte ptr [r15]
#define SBB_DL_FROM_PTR_EAX sbb dl, byte ptr [eax]
#define SBB_DL_FROM_PTR_EBX sbb dl, byte ptr [ebx]
#define SBB_DL_FROM_PTR_ECX sbb dl, byte ptr [ecx]
#define SBB_DL_FROM_PTR_EDX sbb dl, byte ptr [edx]
#define SBB_DL_FROM_PTR_EDI sbb dl, byte ptr [edi]
#define SBB_DL_FROM_PTR_ESI sbb dl, byte ptr [esi]
#define SBB_DL_FROM_PTR_EBP sbb dl, byte ptr [ebp]
#define SBB_DL_FROM_PTR_ESP sbb dl, byte ptr [esp]

#define SBB_DIL_FROM_PTR_RAX sbb dil, byte ptr [rax]
#define SBB_DIL_FROM_PTR_RBX sbb dil, byte ptr [rbx]
#define SBB_DIL_FROM_PTR_RCX sbb dil, byte ptr [rcx]
#define SBB_DIL_FROM_PTR_RDX sbb dil, byte ptr [rdx]
#define SBB_DIL_FROM_PTR_RDI sbb dil, byte ptr [rdi]
#define SBB_DIL_FROM_PTR_RSI sbb dil, byte ptr [rsi]
#define SBB_DIL_FROM_PTR_RBP sbb dil, byte ptr [rbp]
#define SBB_DIL_FROM_PTR_RSP sbb dil, byte ptr [rsp]
#define SBB_DIL_FROM_PTR_R8 sbb dil, byte ptr [r8]
#define SBB_DIL_FROM_PTR_R9 sbb dil, byte ptr [r9]
#define SBB_DIL_FROM_PTR_R10 sbb dil, byte ptr [r10]
#define SBB_DIL_FROM_PTR_R11 sbb dil, byte ptr [r11]
#define SBB_DIL_FROM_PTR_R12 sbb dil, byte ptr [r12]
#define SBB_DIL_FROM_PTR_R13 sbb dil, byte ptr [r13]
#define SBB_DIL_FROM_PTR_R14 sbb dil, byte ptr [r14]
#define SBB_DIL_FROM_PTR_R15 sbb dil, byte ptr [r15]
#define SBB_DIL_FROM_PTR_EAX sbb dil, byte ptr [eax]
#define SBB_DIL_FROM_PTR_EBX sbb dil, byte ptr [ebx]
#define SBB_DIL_FROM_PTR_ECX sbb dil, byte ptr [ecx]
#define SBB_DIL_FROM_PTR_EDX sbb dil, byte ptr [edx]
#define SBB_DIL_FROM_PTR_EDI sbb dil, byte ptr [edi]
#define SBB_DIL_FROM_PTR_ESI sbb dil, byte ptr [esi]
#define SBB_DIL_FROM_PTR_EBP sbb dil, byte ptr [ebp]
#define SBB_DIL_FROM_PTR_ESP sbb dil, byte ptr [esp]

#define SBB_SIL_FROM_PTR_RAX sbb sil, byte ptr [rax]
#define SBB_SIL_FROM_PTR_RBX sbb sil, byte ptr [rbx]
#define SBB_SIL_FROM_PTR_RCX sbb sil, byte ptr [rcx]
#define SBB_SIL_FROM_PTR_RDX sbb sil, byte ptr [rdx]
#define SBB_SIL_FROM_PTR_RDI sbb sil, byte ptr [rdi]
#define SBB_SIL_FROM_PTR_RSI sbb sil, byte ptr [rsi]
#define SBB_SIL_FROM_PTR_RBP sbb sil, byte ptr [rbp]
#define SBB_SIL_FROM_PTR_RSP sbb sil, byte ptr [rsp]
#define SBB_SIL_FROM_PTR_R8 sbb sil, byte ptr [r8]
#define SBB_SIL_FROM_PTR_R9 sbb sil, byte ptr [r9]
#define SBB_SIL_FROM_PTR_R10 sbb sil, byte ptr [r10]
#define SBB_SIL_FROM_PTR_R11 sbb sil, byte ptr [r11]
#define SBB_SIL_FROM_PTR_R12 sbb sil, byte ptr [r12]
#define SBB_SIL_FROM_PTR_R13 sbb sil, byte ptr [r13]
#define SBB_SIL_FROM_PTR_R14 sbb sil, byte ptr [r14]
#define SBB_SIL_FROM_PTR_R15 sbb sil, byte ptr [r15]
#define SBB_SIL_FROM_PTR_EAX sbb sil, byte ptr [eax]
#define SBB_SIL_FROM_PTR_EBX sbb sil, byte ptr [ebx]
#define SBB_SIL_FROM_PTR_ECX sbb sil, byte ptr [ecx]
#define SBB_SIL_FROM_PTR_EDX sbb sil, byte ptr [edx]
#define SBB_SIL_FROM_PTR_EDI sbb sil, byte ptr [edi]
#define SBB_SIL_FROM_PTR_ESI sbb sil, byte ptr [esi]
#define SBB_SIL_FROM_PTR_EBP sbb sil, byte ptr [ebp]
#define SBB_SIL_FROM_PTR_ESP sbb sil, byte ptr [esp]

#define SBB_BPL_FROM_PTR_RAX sbb bpl, byte ptr [rax]
#define SBB_BPL_FROM_PTR_RBX sbb bpl, byte ptr [rbx]
#define SBB_BPL_FROM_PTR_RCX sbb bpl, byte ptr [rcx]
#define SBB_BPL_FROM_PTR_RDX sbb bpl, byte ptr [rdx]
#define SBB_BPL_FROM_PTR_RDI sbb bpl, byte ptr [rdi]
#define SBB_BPL_FROM_PTR_RSI sbb bpl, byte ptr [rsi]
#define SBB_BPL_FROM_PTR_RBP sbb bpl, byte ptr [rbp]
#define SBB_BPL_FROM_PTR_RSP sbb bpl, byte ptr [rsp]
#define SBB_BPL_FROM_PTR_R8 sbb bpl, byte ptr [r8]
#define SBB_BPL_FROM_PTR_R9 sbb bpl, byte ptr [r9]
#define SBB_BPL_FROM_PTR_R10 sbb bpl, byte ptr [r10]
#define SBB_BPL_FROM_PTR_R11 sbb bpl, byte ptr [r11]
#define SBB_BPL_FROM_PTR_R12 sbb bpl, byte ptr [r12]
#define SBB_BPL_FROM_PTR_R13 sbb bpl, byte ptr [r13]
#define SBB_BPL_FROM_PTR_R14 sbb bpl, byte ptr [r14]
#define SBB_BPL_FROM_PTR_R15 sbb bpl, byte ptr [r15]
#define SBB_BPL_FROM_PTR_EAX sbb bpl, byte ptr [eax]
#define SBB_BPL_FROM_PTR_EBX sbb bpl, byte ptr [ebx]
#define SBB_BPL_FROM_PTR_ECX sbb bpl, byte ptr [ecx]
#define SBB_BPL_FROM_PTR_EDX sbb bpl, byte ptr [edx]
#define SBB_BPL_FROM_PTR_EDI sbb bpl, byte ptr [edi]
#define SBB_BPL_FROM_PTR_ESI sbb bpl, byte ptr [esi]
#define SBB_BPL_FROM_PTR_EBP sbb bpl, byte ptr [ebp]
#define SBB_BPL_FROM_PTR_ESP sbb bpl, byte ptr [esp]

#define SBB_SPL_FROM_PTR_RAX sbb spl, byte ptr [rax]
#define SBB_SPL_FROM_PTR_RBX sbb spl, byte ptr [rbx]
#define SBB_SPL_FROM_PTR_RCX sbb spl, byte ptr [rcx]
#define SBB_SPL_FROM_PTR_RDX sbb spl, byte ptr [rdx]
#define SBB_SPL_FROM_PTR_RDI sbb spl, byte ptr [rdi]
#define SBB_SPL_FROM_PTR_RSI sbb spl, byte ptr [rsi]
#define SBB_SPL_FROM_PTR_RBP sbb spl, byte ptr [rbp]
#define SBB_SPL_FROM_PTR_RSP sbb spl, byte ptr [rsp]
#define SBB_SPL_FROM_PTR_R8 sbb spl, byte ptr [r8]
#define SBB_SPL_FROM_PTR_R9 sbb spl, byte ptr [r9]
#define SBB_SPL_FROM_PTR_R10 sbb spl, byte ptr [r10]
#define SBB_SPL_FROM_PTR_R11 sbb spl, byte ptr [r11]
#define SBB_SPL_FROM_PTR_R12 sbb spl, byte ptr [r12]
#define SBB_SPL_FROM_PTR_R13 sbb spl, byte ptr [r13]
#define SBB_SPL_FROM_PTR_R14 sbb spl, byte ptr [r14]
#define SBB_SPL_FROM_PTR_R15 sbb spl, byte ptr [r15]
#define SBB_SPL_FROM_PTR_EAX sbb spl, byte ptr [eax]
#define SBB_SPL_FROM_PTR_EBX sbb spl, byte ptr [ebx]
#define SBB_SPL_FROM_PTR_ECX sbb spl, byte ptr [ecx]
#define SBB_SPL_FROM_PTR_EDX sbb spl, byte ptr [edx]
#define SBB_SPL_FROM_PTR_EDI sbb spl, byte ptr [edi]
#define SBB_SPL_FROM_PTR_ESI sbb spl, byte ptr [esi]
#define SBB_SPL_FROM_PTR_EBP sbb spl, byte ptr [ebp]
#define SBB_SPL_FROM_PTR_ESP sbb spl, byte ptr [esp]

#define SBB_R8B_FROM_PTR_RAX sbb r8b, byte ptr [rax]
#define SBB_R8B_FROM_PTR_RBX sbb r8b, byte ptr [rbx]
#define SBB_R8B_FROM_PTR_RCX sbb r8b, byte ptr [rcx]
#define SBB_R8B_FROM_PTR_RDX sbb r8b, byte ptr [rdx]
#define SBB_R8B_FROM_PTR_RDI sbb r8b, byte ptr [rdi]
#define SBB_R8B_FROM_PTR_RSI sbb r8b, byte ptr [rsi]
#define SBB_R8B_FROM_PTR_RBP sbb r8b, byte ptr [rbp]
#define SBB_R8B_FROM_PTR_RSP sbb r8b, byte ptr [rsp]
#define SBB_R8B_FROM_PTR_R8 sbb r8b, byte ptr [r8]
#define SBB_R8B_FROM_PTR_R9 sbb r8b, byte ptr [r9]
#define SBB_R8B_FROM_PTR_R10 sbb r8b, byte ptr [r10]
#define SBB_R8B_FROM_PTR_R11 sbb r8b, byte ptr [r11]
#define SBB_R8B_FROM_PTR_R12 sbb r8b, byte ptr [r12]
#define SBB_R8B_FROM_PTR_R13 sbb r8b, byte ptr [r13]
#define SBB_R8B_FROM_PTR_R14 sbb r8b, byte ptr [r14]
#define SBB_R8B_FROM_PTR_R15 sbb r8b, byte ptr [r15]
#define SBB_R8B_FROM_PTR_EAX sbb r8b, byte ptr [eax]
#define SBB_R8B_FROM_PTR_EBX sbb r8b, byte ptr [ebx]
#define SBB_R8B_FROM_PTR_ECX sbb r8b, byte ptr [ecx]
#define SBB_R8B_FROM_PTR_EDX sbb r8b, byte ptr [edx]
#define SBB_R8B_FROM_PTR_EDI sbb r8b, byte ptr [edi]
#define SBB_R8B_FROM_PTR_ESI sbb r8b, byte ptr [esi]
#define SBB_R8B_FROM_PTR_EBP sbb r8b, byte ptr [ebp]
#define SBB_R8B_FROM_PTR_ESP sbb r8b, byte ptr [esp]

#define SBB_R9B_FROM_PTR_RAX sbb r9b, byte ptr [rax]
#define SBB_R9B_FROM_PTR_RBX sbb r9b, byte ptr [rbx]
#define SBB_R9B_FROM_PTR_RCX sbb r9b, byte ptr [rcx]
#define SBB_R9B_FROM_PTR_RDX sbb r9b, byte ptr [rdx]
#define SBB_R9B_FROM_PTR_RDI sbb r9b, byte ptr [rdi]
#define SBB_R9B_FROM_PTR_RSI sbb r9b, byte ptr [rsi]
#define SBB_R9B_FROM_PTR_RBP sbb r9b, byte ptr [rbp]
#define SBB_R9B_FROM_PTR_RSP sbb r9b, byte ptr [rsp]
#define SBB_R9B_FROM_PTR_R8 sbb r9b, byte ptr [r8]
#define SBB_R9B_FROM_PTR_R9 sbb r9b, byte ptr [r9]
#define SBB_R9B_FROM_PTR_R10 sbb r9b, byte ptr [r10]
#define SBB_R9B_FROM_PTR_R11 sbb r9b, byte ptr [r11]
#define SBB_R9B_FROM_PTR_R12 sbb r9b, byte ptr [r12]
#define SBB_R9B_FROM_PTR_R13 sbb r9b, byte ptr [r13]
#define SBB_R9B_FROM_PTR_R14 sbb r9b, byte ptr [r14]
#define SBB_R9B_FROM_PTR_R15 sbb r9b, byte ptr [r15]
#define SBB_R9B_FROM_PTR_EAX sbb r9b, byte ptr [eax]
#define SBB_R9B_FROM_PTR_EBX sbb r9b, byte ptr [ebx]
#define SBB_R9B_FROM_PTR_ECX sbb r9b, byte ptr [ecx]
#define SBB_R9B_FROM_PTR_EDX sbb r9b, byte ptr [edx]
#define SBB_R9B_FROM_PTR_EDI sbb r9b, byte ptr [edi]
#define SBB_R9B_FROM_PTR_ESI sbb r9b, byte ptr [esi]
#define SBB_R9B_FROM_PTR_EBP sbb r9b, byte ptr [ebp]
#define SBB_R9B_FROM_PTR_ESP sbb r9b, byte ptr [esp]

#define SBB_R10B_FROM_PTR_RAX sbb r10b, byte ptr [rax]
#define SBB_R10B_FROM_PTR_RBX sbb r10b, byte ptr [rbx]
#define SBB_R10B_FROM_PTR_RCX sbb r10b, byte ptr [rcx]
#define SBB_R10B_FROM_PTR_RDX sbb r10b, byte ptr [rdx]
#define SBB_R10B_FROM_PTR_RDI sbb r10b, byte ptr [rdi]
#define SBB_R10B_FROM_PTR_RSI sbb r10b, byte ptr [rsi]
#define SBB_R10B_FROM_PTR_RBP sbb r10b, byte ptr [rbp]
#define SBB_R10B_FROM_PTR_RSP sbb r10b, byte ptr [rsp]
#define SBB_R10B_FROM_PTR_R8 sbb r10b, byte ptr [r8]
#define SBB_R10B_FROM_PTR_R9 sbb r10b, byte ptr [r9]
#define SBB_R10B_FROM_PTR_R10 sbb r10b, byte ptr [r10]
#define SBB_R10B_FROM_PTR_R11 sbb r10b, byte ptr [r11]
#define SBB_R10B_FROM_PTR_R12 sbb r10b, byte ptr [r12]
#define SBB_R10B_FROM_PTR_R13 sbb r10b, byte ptr [r13]
#define SBB_R10B_FROM_PTR_R14 sbb r10b, byte ptr [r14]
#define SBB_R10B_FROM_PTR_R15 sbb r10b, byte ptr [r15]
#define SBB_R10B_FROM_PTR_EAX sbb r10b, byte ptr [eax]
#define SBB_R10B_FROM_PTR_EBX sbb r10b, byte ptr [ebx]
#define SBB_R10B_FROM_PTR_ECX sbb r10b, byte ptr [ecx]
#define SBB_R10B_FROM_PTR_EDX sbb r10b, byte ptr [edx]
#define SBB_R10B_FROM_PTR_EDI sbb r10b, byte ptr [edi]
#define SBB_R10B_FROM_PTR_ESI sbb r10b, byte ptr [esi]
#define SBB_R10B_FROM_PTR_EBP sbb r10b, byte ptr [ebp]
#define SBB_R10B_FROM_PTR_ESP sbb r10b, byte ptr [esp]

#define SBB_R11B_FROM_PTR_RAX sbb r11b, byte ptr [rax]
#define SBB_R11B_FROM_PTR_RBX sbb r11b, byte ptr [rbx]
#define SBB_R11B_FROM_PTR_RCX sbb r11b, byte ptr [rcx]
#define SBB_R11B_FROM_PTR_RDX sbb r11b, byte ptr [rdx]
#define SBB_R11B_FROM_PTR_RDI sbb r11b, byte ptr [rdi]
#define SBB_R11B_FROM_PTR_RSI sbb r11b, byte ptr [rsi]
#define SBB_R11B_FROM_PTR_RBP sbb r11b, byte ptr [rbp]
#define SBB_R11B_FROM_PTR_RSP sbb r11b, byte ptr [rsp]
#define SBB_R11B_FROM_PTR_R8 sbb r11b, byte ptr [r8]
#define SBB_R11B_FROM_PTR_R9 sbb r11b, byte ptr [r9]
#define SBB_R11B_FROM_PTR_R10 sbb r11b, byte ptr [r10]
#define SBB_R11B_FROM_PTR_R11 sbb r11b, byte ptr [r11]
#define SBB_R11B_FROM_PTR_R12 sbb r11b, byte ptr [r12]
#define SBB_R11B_FROM_PTR_R13 sbb r11b, byte ptr [r13]
#define SBB_R11B_FROM_PTR_R14 sbb r11b, byte ptr [r14]
#define SBB_R11B_FROM_PTR_R15 sbb r11b, byte ptr [r15]
#define SBB_R11B_FROM_PTR_EAX sbb r11b, byte ptr [eax]
#define SBB_R11B_FROM_PTR_EBX sbb r11b, byte ptr [ebx]
#define SBB_R11B_FROM_PTR_ECX sbb r11b, byte ptr [ecx]
#define SBB_R11B_FROM_PTR_EDX sbb r11b, byte ptr [edx]
#define SBB_R11B_FROM_PTR_EDI sbb r11b, byte ptr [edi]
#define SBB_R11B_FROM_PTR_ESI sbb r11b, byte ptr [esi]
#define SBB_R11B_FROM_PTR_EBP sbb r11b, byte ptr [ebp]
#define SBB_R11B_FROM_PTR_ESP sbb r11b, byte ptr [esp]

#define SBB_R12B_FROM_PTR_RAX sbb r12b, byte ptr [rax]
#define SBB_R12B_FROM_PTR_RBX sbb r12b, byte ptr [rbx]
#define SBB_R12B_FROM_PTR_RCX sbb r12b, byte ptr [rcx]
#define SBB_R12B_FROM_PTR_RDX sbb r12b, byte ptr [rdx]
#define SBB_R12B_FROM_PTR_RDI sbb r12b, byte ptr [rdi]
#define SBB_R12B_FROM_PTR_RSI sbb r12b, byte ptr [rsi]
#define SBB_R12B_FROM_PTR_RBP sbb r12b, byte ptr [rbp]
#define SBB_R12B_FROM_PTR_RSP sbb r12b, byte ptr [rsp]
#define SBB_R12B_FROM_PTR_R8 sbb r12b, byte ptr [r8]
#define SBB_R12B_FROM_PTR_R9 sbb r12b, byte ptr [r9]
#define SBB_R12B_FROM_PTR_R10 sbb r12b, byte ptr [r10]
#define SBB_R12B_FROM_PTR_R11 sbb r12b, byte ptr [r11]
#define SBB_R12B_FROM_PTR_R12 sbb r12b, byte ptr [r12]
#define SBB_R12B_FROM_PTR_R13 sbb r12b, byte ptr [r13]
#define SBB_R12B_FROM_PTR_R14 sbb r12b, byte ptr [r14]
#define SBB_R12B_FROM_PTR_R15 sbb r12b, byte ptr [r15]
#define SBB_R12B_FROM_PTR_EAX sbb r12b, byte ptr [eax]
#define SBB_R12B_FROM_PTR_EBX sbb r12b, byte ptr [ebx]
#define SBB_R12B_FROM_PTR_ECX sbb r12b, byte ptr [ecx]
#define SBB_R12B_FROM_PTR_EDX sbb r12b, byte ptr [edx]
#define SBB_R12B_FROM_PTR_EDI sbb r12b, byte ptr [edi]
#define SBB_R12B_FROM_PTR_ESI sbb r12b, byte ptr [esi]
#define SBB_R12B_FROM_PTR_EBP sbb r12b, byte ptr [ebp]
#define SBB_R12B_FROM_PTR_ESP sbb r12b, byte ptr [esp]

#define SBB_R13B_FROM_PTR_RAX sbb r13b, byte ptr [rax]
#define SBB_R13B_FROM_PTR_RBX sbb r13b, byte ptr [rbx]
#define SBB_R13B_FROM_PTR_RCX sbb r13b, byte ptr [rcx]
#define SBB_R13B_FROM_PTR_RDX sbb r13b, byte ptr [rdx]
#define SBB_R13B_FROM_PTR_RDI sbb r13b, byte ptr [rdi]
#define SBB_R13B_FROM_PTR_RSI sbb r13b, byte ptr [rsi]
#define SBB_R13B_FROM_PTR_RBP sbb r13b, byte ptr [rbp]
#define SBB_R13B_FROM_PTR_RSP sbb r13b, byte ptr [rsp]
#define SBB_R13B_FROM_PTR_R8 sbb r13b, byte ptr [r8]
#define SBB_R13B_FROM_PTR_R9 sbb r13b, byte ptr [r9]
#define SBB_R13B_FROM_PTR_R10 sbb r13b, byte ptr [r10]
#define SBB_R13B_FROM_PTR_R11 sbb r13b, byte ptr [r11]
#define SBB_R13B_FROM_PTR_R12 sbb r13b, byte ptr [r12]
#define SBB_R13B_FROM_PTR_R13 sbb r13b, byte ptr [r13]
#define SBB_R13B_FROM_PTR_R14 sbb r13b, byte ptr [r14]
#define SBB_R13B_FROM_PTR_R15 sbb r13b, byte ptr [r15]
#define SBB_R13B_FROM_PTR_EAX sbb r13b, byte ptr [eax]
#define SBB_R13B_FROM_PTR_EBX sbb r13b, byte ptr [ebx]
#define SBB_R13B_FROM_PTR_ECX sbb r13b, byte ptr [ecx]
#define SBB_R13B_FROM_PTR_EDX sbb r13b, byte ptr [edx]
#define SBB_R13B_FROM_PTR_EDI sbb r13b, byte ptr [edi]
#define SBB_R13B_FROM_PTR_ESI sbb r13b, byte ptr [esi]
#define SBB_R13B_FROM_PTR_EBP sbb r13b, byte ptr [ebp]
#define SBB_R13B_FROM_PTR_ESP sbb r13b, byte ptr [esp]

#define SBB_R14B_FROM_PTR_RAX sbb r14b, byte ptr [rax]
#define SBB_R14B_FROM_PTR_RBX sbb r14b, byte ptr [rbx]
#define SBB_R14B_FROM_PTR_RCX sbb r14b, byte ptr [rcx]
#define SBB_R14B_FROM_PTR_RDX sbb r14b, byte ptr [rdx]
#define SBB_R14B_FROM_PTR_RDI sbb r14b, byte ptr [rdi]
#define SBB_R14B_FROM_PTR_RSI sbb r14b, byte ptr [rsi]
#define SBB_R14B_FROM_PTR_RBP sbb r14b, byte ptr [rbp]
#define SBB_R14B_FROM_PTR_RSP sbb r14b, byte ptr [rsp]
#define SBB_R14B_FROM_PTR_R8 sbb r14b, byte ptr [r8]
#define SBB_R14B_FROM_PTR_R9 sbb r14b, byte ptr [r9]
#define SBB_R14B_FROM_PTR_R10 sbb r14b, byte ptr [r10]
#define SBB_R14B_FROM_PTR_R11 sbb r14b, byte ptr [r11]
#define SBB_R14B_FROM_PTR_R12 sbb r14b, byte ptr [r12]
#define SBB_R14B_FROM_PTR_R13 sbb r14b, byte ptr [r13]
#define SBB_R14B_FROM_PTR_R14 sbb r14b, byte ptr [r14]
#define SBB_R14B_FROM_PTR_R15 sbb r14b, byte ptr [r15]
#define SBB_R14B_FROM_PTR_EAX sbb r14b, byte ptr [eax]
#define SBB_R14B_FROM_PTR_EBX sbb r14b, byte ptr [ebx]
#define SBB_R14B_FROM_PTR_ECX sbb r14b, byte ptr [ecx]
#define SBB_R14B_FROM_PTR_EDX sbb r14b, byte ptr [edx]
#define SBB_R14B_FROM_PTR_EDI sbb r14b, byte ptr [edi]
#define SBB_R14B_FROM_PTR_ESI sbb r14b, byte ptr [esi]
#define SBB_R14B_FROM_PTR_EBP sbb r14b, byte ptr [ebp]
#define SBB_R14B_FROM_PTR_ESP sbb r14b, byte ptr [esp]

#define SBB_R15B_FROM_PTR_RAX sbb r15b, byte ptr [rax]
#define SBB_R15B_FROM_PTR_RBX sbb r15b, byte ptr [rbx]
#define SBB_R15B_FROM_PTR_RCX sbb r15b, byte ptr [rcx]
#define SBB_R15B_FROM_PTR_RDX sbb r15b, byte ptr [rdx]
#define SBB_R15B_FROM_PTR_RDI sbb r15b, byte ptr [rdi]
#define SBB_R15B_FROM_PTR_RSI sbb r15b, byte ptr [rsi]
#define SBB_R15B_FROM_PTR_RBP sbb r15b, byte ptr [rbp]
#define SBB_R15B_FROM_PTR_RSP sbb r15b, byte ptr [rsp]
#define SBB_R15B_FROM_PTR_R8 sbb r15b, byte ptr [r8]
#define SBB_R15B_FROM_PTR_R9 sbb r15b, byte ptr [r9]
#define SBB_R15B_FROM_PTR_R10 sbb r15b, byte ptr [r10]
#define SBB_R15B_FROM_PTR_R11 sbb r15b, byte ptr [r11]
#define SBB_R15B_FROM_PTR_R12 sbb r15b, byte ptr [r12]
#define SBB_R15B_FROM_PTR_R13 sbb r15b, byte ptr [r13]
#define SBB_R15B_FROM_PTR_R14 sbb r15b, byte ptr [r14]
#define SBB_R15B_FROM_PTR_R15 sbb r15b, byte ptr [r15]
#define SBB_R15B_FROM_PTR_EAX sbb r15b, byte ptr [eax]
#define SBB_R15B_FROM_PTR_EBX sbb r15b, byte ptr [ebx]
#define SBB_R15B_FROM_PTR_ECX sbb r15b, byte ptr [ecx]
#define SBB_R15B_FROM_PTR_EDX sbb r15b, byte ptr [edx]
#define SBB_R15B_FROM_PTR_EDI sbb r15b, byte ptr [edi]
#define SBB_R15B_FROM_PTR_ESI sbb r15b, byte ptr [esi]
#define SBB_R15B_FROM_PTR_EBP sbb r15b, byte ptr [ebp]
#define SBB_R15B_FROM_PTR_ESP sbb r15b, byte ptr [esp]

#define SBB_AL_TO_PTR_RAX sbb byte ptr [rax], al
#define SBB_AL_TO_PTR_RBX sbb byte ptr [rbx], al
#define SBB_AL_TO_PTR_RCX sbb byte ptr [rcx], al
#define SBB_AL_TO_PTR_RDX sbb byte ptr [rdx], al
#define SBB_AL_TO_PTR_RDI sbb byte ptr [rdi], al
#define SBB_AL_TO_PTR_RSI sbb byte ptr [rsi], al
#define SBB_AL_TO_PTR_RBP sbb byte ptr [rbp], al
#define SBB_AL_TO_PTR_RSP sbb byte ptr [rsp], al
#define SBB_AL_TO_PTR_R8 sbb byte ptr [r8], al
#define SBB_AL_TO_PTR_R9 sbb byte ptr [r9], al
#define SBB_AL_TO_PTR_R10 sbb byte ptr [r10], al
#define SBB_AL_TO_PTR_R11 sbb byte ptr [r11], al
#define SBB_AL_TO_PTR_R12 sbb byte ptr [r12], al
#define SBB_AL_TO_PTR_R13 sbb byte ptr [r13], al
#define SBB_AL_TO_PTR_R14 sbb byte ptr [r14], al
#define SBB_AL_TO_PTR_R15 sbb byte ptr [r15], al
#define SBB_AL_TO_PTR_EAX sbb byte ptr [eax], al
#define SBB_AL_TO_PTR_EBX sbb byte ptr [ebx], al
#define SBB_AL_TO_PTR_ECX sbb byte ptr [ecx], al
#define SBB_AL_TO_PTR_EDX sbb byte ptr [edx], al
#define SBB_AL_TO_PTR_EDI sbb byte ptr [edi], al
#define SBB_AL_TO_PTR_ESI sbb byte ptr [esi], al
#define SBB_AL_TO_PTR_EBP sbb byte ptr [ebp], al
#define SBB_AL_TO_PTR_ESP sbb byte ptr [esp], al

#define SBB_BL_TO_PTR_RAX sbb byte ptr [rax], bl
#define SBB_BL_TO_PTR_RBX sbb byte ptr [rbx], bl
#define SBB_BL_TO_PTR_RCX sbb byte ptr [rcx], bl
#define SBB_BL_TO_PTR_RDX sbb byte ptr [rdx], bl
#define SBB_BL_TO_PTR_RDI sbb byte ptr [rdi], bl
#define SBB_BL_TO_PTR_RSI sbb byte ptr [rsi], bl
#define SBB_BL_TO_PTR_RBP sbb byte ptr [rbp], bl
#define SBB_BL_TO_PTR_RSP sbb byte ptr [rsp], bl
#define SBB_BL_TO_PTR_R8 sbb byte ptr [r8], bl
#define SBB_BL_TO_PTR_R9 sbb byte ptr [r9], bl
#define SBB_BL_TO_PTR_R10 sbb byte ptr [r10], bl
#define SBB_BL_TO_PTR_R11 sbb byte ptr [r11], bl
#define SBB_BL_TO_PTR_R12 sbb byte ptr [r12], bl
#define SBB_BL_TO_PTR_R13 sbb byte ptr [r13], bl
#define SBB_BL_TO_PTR_R14 sbb byte ptr [r14], bl
#define SBB_BL_TO_PTR_R15 sbb byte ptr [r15], bl
#define SBB_BL_TO_PTR_EAX sbb byte ptr [eax], bl
#define SBB_BL_TO_PTR_EBX sbb byte ptr [ebx], bl
#define SBB_BL_TO_PTR_ECX sbb byte ptr [ecx], bl
#define SBB_BL_TO_PTR_EDX sbb byte ptr [edx], bl
#define SBB_BL_TO_PTR_EDI sbb byte ptr [edi], bl
#define SBB_BL_TO_PTR_ESI sbb byte ptr [esi], bl
#define SBB_BL_TO_PTR_EBP sbb byte ptr [ebp], bl
#define SBB_BL_TO_PTR_ESP sbb byte ptr [esp], bl

#define SBB_CL_TO_PTR_RAX sbb byte ptr [rax], cl
#define SBB_CL_TO_PTR_RBX sbb byte ptr [rbx], cl
#define SBB_CL_TO_PTR_RCX sbb byte ptr [rcx], cl
#define SBB_CL_TO_PTR_RDX sbb byte ptr [rdx], cl
#define SBB_CL_TO_PTR_RDI sbb byte ptr [rdi], cl
#define SBB_CL_TO_PTR_RSI sbb byte ptr [rsi], cl
#define SBB_CL_TO_PTR_RBP sbb byte ptr [rbp], cl
#define SBB_CL_TO_PTR_RSP sbb byte ptr [rsp], cl
#define SBB_CL_TO_PTR_R8 sbb byte ptr [r8], cl
#define SBB_CL_TO_PTR_R9 sbb byte ptr [r9], cl
#define SBB_CL_TO_PTR_R10 sbb byte ptr [r10], cl
#define SBB_CL_TO_PTR_R11 sbb byte ptr [r11], cl
#define SBB_CL_TO_PTR_R12 sbb byte ptr [r12], cl
#define SBB_CL_TO_PTR_R13 sbb byte ptr [r13], cl
#define SBB_CL_TO_PTR_R14 sbb byte ptr [r14], cl
#define SBB_CL_TO_PTR_R15 sbb byte ptr [r15], cl
#define SBB_CL_TO_PTR_EAX sbb byte ptr [eax], cl
#define SBB_CL_TO_PTR_EBX sbb byte ptr [ebx], cl
#define SBB_CL_TO_PTR_ECX sbb byte ptr [ecx], cl
#define SBB_CL_TO_PTR_EDX sbb byte ptr [edx], cl
#define SBB_CL_TO_PTR_EDI sbb byte ptr [edi], cl
#define SBB_CL_TO_PTR_ESI sbb byte ptr [esi], cl
#define SBB_CL_TO_PTR_EBP sbb byte ptr [ebp], cl
#define SBB_CL_TO_PTR_ESP sbb byte ptr [esp], cl

#define SBB_DL_TO_PTR_RAX sbb byte ptr [rax], dl
#define SBB_DL_TO_PTR_RBX sbb byte ptr [rbx], dl
#define SBB_DL_TO_PTR_RCX sbb byte ptr [rcx], dl
#define SBB_DL_TO_PTR_RDX sbb byte ptr [rdx], dl
#define SBB_DL_TO_PTR_RDI sbb byte ptr [rdi], dl
#define SBB_DL_TO_PTR_RSI sbb byte ptr [rsi], dl
#define SBB_DL_TO_PTR_RBP sbb byte ptr [rbp], dl
#define SBB_DL_TO_PTR_RSP sbb byte ptr [rsp], dl
#define SBB_DL_TO_PTR_R8 sbb byte ptr [r8], dl
#define SBB_DL_TO_PTR_R9 sbb byte ptr [r9], dl
#define SBB_DL_TO_PTR_R10 sbb byte ptr [r10], dl
#define SBB_DL_TO_PTR_R11 sbb byte ptr [r11], dl
#define SBB_DL_TO_PTR_R12 sbb byte ptr [r12], dl
#define SBB_DL_TO_PTR_R13 sbb byte ptr [r13], dl
#define SBB_DL_TO_PTR_R14 sbb byte ptr [r14], dl
#define SBB_DL_TO_PTR_R15 sbb byte ptr [r15], dl
#define SBB_DL_TO_PTR_EAX sbb byte ptr [eax], dl
#define SBB_DL_TO_PTR_EBX sbb byte ptr [ebx], dl
#define SBB_DL_TO_PTR_ECX sbb byte ptr [ecx], dl
#define SBB_DL_TO_PTR_EDX sbb byte ptr [edx], dl
#define SBB_DL_TO_PTR_EDI sbb byte ptr [edi], dl
#define SBB_DL_TO_PTR_ESI sbb byte ptr [esi], dl
#define SBB_DL_TO_PTR_EBP sbb byte ptr [ebp], dl
#define SBB_DL_TO_PTR_ESP sbb byte ptr [esp], dl

#define SBB_DIL_TO_PTR_RAX sbb byte ptr [rax], dil
#define SBB_DIL_TO_PTR_RBX sbb byte ptr [rbx], dil
#define SBB_DIL_TO_PTR_RCX sbb byte ptr [rcx], dil
#define SBB_DIL_TO_PTR_RDX sbb byte ptr [rdx], dil
#define SBB_DIL_TO_PTR_RDI sbb byte ptr [rdi], dil
#define SBB_DIL_TO_PTR_RSI sbb byte ptr [rsi], dil
#define SBB_DIL_TO_PTR_RBP sbb byte ptr [rbp], dil
#define SBB_DIL_TO_PTR_RSP sbb byte ptr [rsp], dil
#define SBB_DIL_TO_PTR_R8 sbb byte ptr [r8], dil
#define SBB_DIL_TO_PTR_R9 sbb byte ptr [r9], dil
#define SBB_DIL_TO_PTR_R10 sbb byte ptr [r10], dil
#define SBB_DIL_TO_PTR_R11 sbb byte ptr [r11], dil
#define SBB_DIL_TO_PTR_R12 sbb byte ptr [r12], dil
#define SBB_DIL_TO_PTR_R13 sbb byte ptr [r13], dil
#define SBB_DIL_TO_PTR_R14 sbb byte ptr [r14], dil
#define SBB_DIL_TO_PTR_R15 sbb byte ptr [r15], dil
#define SBB_DIL_TO_PTR_EAX sbb byte ptr [eax], dil
#define SBB_DIL_TO_PTR_EBX sbb byte ptr [ebx], dil
#define SBB_DIL_TO_PTR_ECX sbb byte ptr [ecx], dil
#define SBB_DIL_TO_PTR_EDX sbb byte ptr [edx], dil
#define SBB_DIL_TO_PTR_EDI sbb byte ptr [edi], dil
#define SBB_DIL_TO_PTR_ESI sbb byte ptr [esi], dil
#define SBB_DIL_TO_PTR_EBP sbb byte ptr [ebp], dil
#define SBB_DIL_TO_PTR_ESP sbb byte ptr [esp], dil

#define SBB_SIL_TO_PTR_RAX sbb byte ptr [rax], sil
#define SBB_SIL_TO_PTR_RBX sbb byte ptr [rbx], sil
#define SBB_SIL_TO_PTR_RCX sbb byte ptr [rcx], sil
#define SBB_SIL_TO_PTR_RDX sbb byte ptr [rdx], sil
#define SBB_SIL_TO_PTR_RDI sbb byte ptr [rdi], sil
#define SBB_SIL_TO_PTR_RSI sbb byte ptr [rsi], sil
#define SBB_SIL_TO_PTR_RBP sbb byte ptr [rbp], sil
#define SBB_SIL_TO_PTR_RSP sbb byte ptr [rsp], sil
#define SBB_SIL_TO_PTR_R8 sbb byte ptr [r8], sil
#define SBB_SIL_TO_PTR_R9 sbb byte ptr [r9], sil
#define SBB_SIL_TO_PTR_R10 sbb byte ptr [r10], sil
#define SBB_SIL_TO_PTR_R11 sbb byte ptr [r11], sil
#define SBB_SIL_TO_PTR_R12 sbb byte ptr [r12], sil
#define SBB_SIL_TO_PTR_R13 sbb byte ptr [r13], sil
#define SBB_SIL_TO_PTR_R14 sbb byte ptr [r14], sil
#define SBB_SIL_TO_PTR_R15 sbb byte ptr [r15], sil
#define SBB_SIL_TO_PTR_EAX sbb byte ptr [eax], sil
#define SBB_SIL_TO_PTR_EBX sbb byte ptr [ebx], sil
#define SBB_SIL_TO_PTR_ECX sbb byte ptr [ecx], sil
#define SBB_SIL_TO_PTR_EDX sbb byte ptr [edx], sil
#define SBB_SIL_TO_PTR_EDI sbb byte ptr [edi], sil
#define SBB_SIL_TO_PTR_ESI sbb byte ptr [esi], sil
#define SBB_SIL_TO_PTR_EBP sbb byte ptr [ebp], sil
#define SBB_SIL_TO_PTR_ESP sbb byte ptr [esp], sil

#define SBB_BPL_TO_PTR_RAX sbb byte ptr [rax], bpl
#define SBB_BPL_TO_PTR_RBX sbb byte ptr [rbx], bpl
#define SBB_BPL_TO_PTR_RCX sbb byte ptr [rcx], bpl
#define SBB_BPL_TO_PTR_RDX sbb byte ptr [rdx], bpl
#define SBB_BPL_TO_PTR_RDI sbb byte ptr [rdi], bpl
#define SBB_BPL_TO_PTR_RSI sbb byte ptr [rsi], bpl
#define SBB_BPL_TO_PTR_RBP sbb byte ptr [rbp], bpl
#define SBB_BPL_TO_PTR_RSP sbb byte ptr [rsp], bpl
#define SBB_BPL_TO_PTR_R8 sbb byte ptr [r8], bpl
#define SBB_BPL_TO_PTR_R9 sbb byte ptr [r9], bpl
#define SBB_BPL_TO_PTR_R10 sbb byte ptr [r10], bpl
#define SBB_BPL_TO_PTR_R11 sbb byte ptr [r11], bpl
#define SBB_BPL_TO_PTR_R12 sbb byte ptr [r12], bpl
#define SBB_BPL_TO_PTR_R13 sbb byte ptr [r13], bpl
#define SBB_BPL_TO_PTR_R14 sbb byte ptr [r14], bpl
#define SBB_BPL_TO_PTR_R15 sbb byte ptr [r15], bpl
#define SBB_BPL_TO_PTR_EAX sbb byte ptr [eax], bpl
#define SBB_BPL_TO_PTR_EBX sbb byte ptr [ebx], bpl
#define SBB_BPL_TO_PTR_ECX sbb byte ptr [ecx], bpl
#define SBB_BPL_TO_PTR_EDX sbb byte ptr [edx], bpl
#define SBB_BPL_TO_PTR_EDI sbb byte ptr [edi], bpl
#define SBB_BPL_TO_PTR_ESI sbb byte ptr [esi], bpl
#define SBB_BPL_TO_PTR_EBP sbb byte ptr [ebp], bpl
#define SBB_BPL_TO_PTR_ESP sbb byte ptr [esp], bpl

#define SBB_SPL_TO_PTR_RAX sbb byte ptr [rax], spl
#define SBB_SPL_TO_PTR_RBX sbb byte ptr [rbx], spl
#define SBB_SPL_TO_PTR_RCX sbb byte ptr [rcx], spl
#define SBB_SPL_TO_PTR_RDX sbb byte ptr [rdx], spl
#define SBB_SPL_TO_PTR_RDI sbb byte ptr [rdi], spl
#define SBB_SPL_TO_PTR_RSI sbb byte ptr [rsi], spl
#define SBB_SPL_TO_PTR_RBP sbb byte ptr [rbp], spl
#define SBB_SPL_TO_PTR_RSP sbb byte ptr [rsp], spl
#define SBB_SPL_TO_PTR_R8 sbb byte ptr [r8], spl
#define SBB_SPL_TO_PTR_R9 sbb byte ptr [r9], spl
#define SBB_SPL_TO_PTR_R10 sbb byte ptr [r10], spl
#define SBB_SPL_TO_PTR_R11 sbb byte ptr [r11], spl
#define SBB_SPL_TO_PTR_R12 sbb byte ptr [r12], spl
#define SBB_SPL_TO_PTR_R13 sbb byte ptr [r13], spl
#define SBB_SPL_TO_PTR_R14 sbb byte ptr [r14], spl
#define SBB_SPL_TO_PTR_R15 sbb byte ptr [r15], spl
#define SBB_SPL_TO_PTR_EAX sbb byte ptr [eax], spl
#define SBB_SPL_TO_PTR_EBX sbb byte ptr [ebx], spl
#define SBB_SPL_TO_PTR_ECX sbb byte ptr [ecx], spl
#define SBB_SPL_TO_PTR_EDX sbb byte ptr [edx], spl
#define SBB_SPL_TO_PTR_EDI sbb byte ptr [edi], spl
#define SBB_SPL_TO_PTR_ESI sbb byte ptr [esi], spl
#define SBB_SPL_TO_PTR_EBP sbb byte ptr [ebp], spl
#define SBB_SPL_TO_PTR_ESP sbb byte ptr [esp], spl

#define SBB_R8B_TO_PTR_RAX sbb byte ptr [rax], r8b
#define SBB_R8B_TO_PTR_RBX sbb byte ptr [rbx], r8b
#define SBB_R8B_TO_PTR_RCX sbb byte ptr [rcx], r8b
#define SBB_R8B_TO_PTR_RDX sbb byte ptr [rdx], r8b
#define SBB_R8B_TO_PTR_RDI sbb byte ptr [rdi], r8b
#define SBB_R8B_TO_PTR_RSI sbb byte ptr [rsi], r8b
#define SBB_R8B_TO_PTR_RBP sbb byte ptr [rbp], r8b
#define SBB_R8B_TO_PTR_RSP sbb byte ptr [rsp], r8b
#define SBB_R8B_TO_PTR_R8 sbb byte ptr [r8], r8b
#define SBB_R8B_TO_PTR_R9 sbb byte ptr [r9], r8b
#define SBB_R8B_TO_PTR_R10 sbb byte ptr [r10], r8b
#define SBB_R8B_TO_PTR_R11 sbb byte ptr [r11], r8b
#define SBB_R8B_TO_PTR_R12 sbb byte ptr [r12], r8b
#define SBB_R8B_TO_PTR_R13 sbb byte ptr [r13], r8b
#define SBB_R8B_TO_PTR_R14 sbb byte ptr [r14], r8b
#define SBB_R8B_TO_PTR_R15 sbb byte ptr [r15], r8b
#define SBB_R8B_TO_PTR_EAX sbb byte ptr [eax], r8b
#define SBB_R8B_TO_PTR_EBX sbb byte ptr [ebx], r8b
#define SBB_R8B_TO_PTR_ECX sbb byte ptr [ecx], r8b
#define SBB_R8B_TO_PTR_EDX sbb byte ptr [edx], r8b
#define SBB_R8B_TO_PTR_EDI sbb byte ptr [edi], r8b
#define SBB_R8B_TO_PTR_ESI sbb byte ptr [esi], r8b
#define SBB_R8B_TO_PTR_EBP sbb byte ptr [ebp], r8b
#define SBB_R8B_TO_PTR_ESP sbb byte ptr [esp], r8b

#define SBB_R9B_TO_PTR_RAX sbb byte ptr [rax], r9b
#define SBB_R9B_TO_PTR_RBX sbb byte ptr [rbx], r9b
#define SBB_R9B_TO_PTR_RCX sbb byte ptr [rcx], r9b
#define SBB_R9B_TO_PTR_RDX sbb byte ptr [rdx], r9b
#define SBB_R9B_TO_PTR_RDI sbb byte ptr [rdi], r9b
#define SBB_R9B_TO_PTR_RSI sbb byte ptr [rsi], r9b
#define SBB_R9B_TO_PTR_RBP sbb byte ptr [rbp], r9b
#define SBB_R9B_TO_PTR_RSP sbb byte ptr [rsp], r9b
#define SBB_R9B_TO_PTR_R8 sbb byte ptr [r8], r9b
#define SBB_R9B_TO_PTR_R9 sbb byte ptr [r9], r9b
#define SBB_R9B_TO_PTR_R10 sbb byte ptr [r10], r9b
#define SBB_R9B_TO_PTR_R11 sbb byte ptr [r11], r9b
#define SBB_R9B_TO_PTR_R12 sbb byte ptr [r12], r9b
#define SBB_R9B_TO_PTR_R13 sbb byte ptr [r13], r9b
#define SBB_R9B_TO_PTR_R14 sbb byte ptr [r14], r9b
#define SBB_R9B_TO_PTR_R15 sbb byte ptr [r15], r9b
#define SBB_R9B_TO_PTR_EAX sbb byte ptr [eax], r9b
#define SBB_R9B_TO_PTR_EBX sbb byte ptr [ebx], r9b
#define SBB_R9B_TO_PTR_ECX sbb byte ptr [ecx], r9b
#define SBB_R9B_TO_PTR_EDX sbb byte ptr [edx], r9b
#define SBB_R9B_TO_PTR_EDI sbb byte ptr [edi], r9b
#define SBB_R9B_TO_PTR_ESI sbb byte ptr [esi], r9b
#define SBB_R9B_TO_PTR_EBP sbb byte ptr [ebp], r9b
#define SBB_R9B_TO_PTR_ESP sbb byte ptr [esp], r9b

#define SBB_R10B_TO_PTR_RAX sbb byte ptr [rax], r10b
#define SBB_R10B_TO_PTR_RBX sbb byte ptr [rbx], r10b
#define SBB_R10B_TO_PTR_RCX sbb byte ptr [rcx], r10b
#define SBB_R10B_TO_PTR_RDX sbb byte ptr [rdx], r10b
#define SBB_R10B_TO_PTR_RDI sbb byte ptr [rdi], r10b
#define SBB_R10B_TO_PTR_RSI sbb byte ptr [rsi], r10b
#define SBB_R10B_TO_PTR_RBP sbb byte ptr [rbp], r10b
#define SBB_R10B_TO_PTR_RSP sbb byte ptr [rsp], r10b
#define SBB_R10B_TO_PTR_R8 sbb byte ptr [r8], r10b
#define SBB_R10B_TO_PTR_R9 sbb byte ptr [r9], r10b
#define SBB_R10B_TO_PTR_R10 sbb byte ptr [r10], r10b
#define SBB_R10B_TO_PTR_R11 sbb byte ptr [r11], r10b
#define SBB_R10B_TO_PTR_R12 sbb byte ptr [r12], r10b
#define SBB_R10B_TO_PTR_R13 sbb byte ptr [r13], r10b
#define SBB_R10B_TO_PTR_R14 sbb byte ptr [r14], r10b
#define SBB_R10B_TO_PTR_R15 sbb byte ptr [r15], r10b
#define SBB_R10B_TO_PTR_EAX sbb byte ptr [eax], r10b
#define SBB_R10B_TO_PTR_EBX sbb byte ptr [ebx], r10b
#define SBB_R10B_TO_PTR_ECX sbb byte ptr [ecx], r10b
#define SBB_R10B_TO_PTR_EDX sbb byte ptr [edx], r10b
#define SBB_R10B_TO_PTR_EDI sbb byte ptr [edi], r10b
#define SBB_R10B_TO_PTR_ESI sbb byte ptr [esi], r10b
#define SBB_R10B_TO_PTR_EBP sbb byte ptr [ebp], r10b
#define SBB_R10B_TO_PTR_ESP sbb byte ptr [esp], r10b

#define SBB_R11B_TO_PTR_RAX sbb byte ptr [rax], r11b
#define SBB_R11B_TO_PTR_RBX sbb byte ptr [rbx], r11b
#define SBB_R11B_TO_PTR_RCX sbb byte ptr [rcx], r11b
#define SBB_R11B_TO_PTR_RDX sbb byte ptr [rdx], r11b
#define SBB_R11B_TO_PTR_RDI sbb byte ptr [rdi], r11b
#define SBB_R11B_TO_PTR_RSI sbb byte ptr [rsi], r11b
#define SBB_R11B_TO_PTR_RBP sbb byte ptr [rbp], r11b
#define SBB_R11B_TO_PTR_RSP sbb byte ptr [rsp], r11b
#define SBB_R11B_TO_PTR_R8 sbb byte ptr [r8], r11b
#define SBB_R11B_TO_PTR_R9 sbb byte ptr [r9], r11b
#define SBB_R11B_TO_PTR_R10 sbb byte ptr [r10], r11b
#define SBB_R11B_TO_PTR_R11 sbb byte ptr [r11], r11b
#define SBB_R11B_TO_PTR_R12 sbb byte ptr [r12], r11b
#define SBB_R11B_TO_PTR_R13 sbb byte ptr [r13], r11b
#define SBB_R11B_TO_PTR_R14 sbb byte ptr [r14], r11b
#define SBB_R11B_TO_PTR_R15 sbb byte ptr [r15], r11b
#define SBB_R11B_TO_PTR_EAX sbb byte ptr [eax], r11b
#define SBB_R11B_TO_PTR_EBX sbb byte ptr [ebx], r11b
#define SBB_R11B_TO_PTR_ECX sbb byte ptr [ecx], r11b
#define SBB_R11B_TO_PTR_EDX sbb byte ptr [edx], r11b
#define SBB_R11B_TO_PTR_EDI sbb byte ptr [edi], r11b
#define SBB_R11B_TO_PTR_ESI sbb byte ptr [esi], r11b
#define SBB_R11B_TO_PTR_EBP sbb byte ptr [ebp], r11b
#define SBB_R11B_TO_PTR_ESP sbb byte ptr [esp], r11b

#define SBB_R12B_TO_PTR_RAX sbb byte ptr [rax], r12b
#define SBB_R12B_TO_PTR_RBX sbb byte ptr [rbx], r12b
#define SBB_R12B_TO_PTR_RCX sbb byte ptr [rcx], r12b
#define SBB_R12B_TO_PTR_RDX sbb byte ptr [rdx], r12b
#define SBB_R12B_TO_PTR_RDI sbb byte ptr [rdi], r12b
#define SBB_R12B_TO_PTR_RSI sbb byte ptr [rsi], r12b
#define SBB_R12B_TO_PTR_RBP sbb byte ptr [rbp], r12b
#define SBB_R12B_TO_PTR_RSP sbb byte ptr [rsp], r12b
#define SBB_R12B_TO_PTR_R8 sbb byte ptr [r8], r12b
#define SBB_R12B_TO_PTR_R9 sbb byte ptr [r9], r12b
#define SBB_R12B_TO_PTR_R10 sbb byte ptr [r10], r12b
#define SBB_R12B_TO_PTR_R11 sbb byte ptr [r11], r12b
#define SBB_R12B_TO_PTR_R12 sbb byte ptr [r12], r12b
#define SBB_R12B_TO_PTR_R13 sbb byte ptr [r13], r12b
#define SBB_R12B_TO_PTR_R14 sbb byte ptr [r14], r12b
#define SBB_R12B_TO_PTR_R15 sbb byte ptr [r15], r12b
#define SBB_R12B_TO_PTR_EAX sbb byte ptr [eax], r12b
#define SBB_R12B_TO_PTR_EBX sbb byte ptr [ebx], r12b
#define SBB_R12B_TO_PTR_ECX sbb byte ptr [ecx], r12b
#define SBB_R12B_TO_PTR_EDX sbb byte ptr [edx], r12b
#define SBB_R12B_TO_PTR_EDI sbb byte ptr [edi], r12b
#define SBB_R12B_TO_PTR_ESI sbb byte ptr [esi], r12b
#define SBB_R12B_TO_PTR_EBP sbb byte ptr [ebp], r12b
#define SBB_R12B_TO_PTR_ESP sbb byte ptr [esp], r12b

#define SBB_R13B_TO_PTR_RAX sbb byte ptr [rax], r13b
#define SBB_R13B_TO_PTR_RBX sbb byte ptr [rbx], r13b
#define SBB_R13B_TO_PTR_RCX sbb byte ptr [rcx], r13b
#define SBB_R13B_TO_PTR_RDX sbb byte ptr [rdx], r13b
#define SBB_R13B_TO_PTR_RDI sbb byte ptr [rdi], r13b
#define SBB_R13B_TO_PTR_RSI sbb byte ptr [rsi], r13b
#define SBB_R13B_TO_PTR_RBP sbb byte ptr [rbp], r13b
#define SBB_R13B_TO_PTR_RSP sbb byte ptr [rsp], r13b
#define SBB_R13B_TO_PTR_R8 sbb byte ptr [r8], r13b
#define SBB_R13B_TO_PTR_R9 sbb byte ptr [r9], r13b
#define SBB_R13B_TO_PTR_R10 sbb byte ptr [r10], r13b
#define SBB_R13B_TO_PTR_R11 sbb byte ptr [r11], r13b
#define SBB_R13B_TO_PTR_R12 sbb byte ptr [r12], r13b
#define SBB_R13B_TO_PTR_R13 sbb byte ptr [r13], r13b
#define SBB_R13B_TO_PTR_R14 sbb byte ptr [r14], r13b
#define SBB_R13B_TO_PTR_R15 sbb byte ptr [r15], r13b
#define SBB_R13B_TO_PTR_EAX sbb byte ptr [eax], r13b
#define SBB_R13B_TO_PTR_EBX sbb byte ptr [ebx], r13b
#define SBB_R13B_TO_PTR_ECX sbb byte ptr [ecx], r13b
#define SBB_R13B_TO_PTR_EDX sbb byte ptr [edx], r13b
#define SBB_R13B_TO_PTR_EDI sbb byte ptr [edi], r13b
#define SBB_R13B_TO_PTR_ESI sbb byte ptr [esi], r13b
#define SBB_R13B_TO_PTR_EBP sbb byte ptr [ebp], r13b
#define SBB_R13B_TO_PTR_ESP sbb byte ptr [esp], r13b

#define SBB_R14B_TO_PTR_RAX sbb byte ptr [rax], r14b
#define SBB_R14B_TO_PTR_RBX sbb byte ptr [rbx], r14b
#define SBB_R14B_TO_PTR_RCX sbb byte ptr [rcx], r14b
#define SBB_R14B_TO_PTR_RDX sbb byte ptr [rdx], r14b
#define SBB_R14B_TO_PTR_RDI sbb byte ptr [rdi], r14b
#define SBB_R14B_TO_PTR_RSI sbb byte ptr [rsi], r14b
#define SBB_R14B_TO_PTR_RBP sbb byte ptr [rbp], r14b
#define SBB_R14B_TO_PTR_RSP sbb byte ptr [rsp], r14b
#define SBB_R14B_TO_PTR_R8 sbb byte ptr [r8], r14b
#define SBB_R14B_TO_PTR_R9 sbb byte ptr [r9], r14b
#define SBB_R14B_TO_PTR_R10 sbb byte ptr [r10], r14b
#define SBB_R14B_TO_PTR_R11 sbb byte ptr [r11], r14b
#define SBB_R14B_TO_PTR_R12 sbb byte ptr [r12], r14b
#define SBB_R14B_TO_PTR_R13 sbb byte ptr [r13], r14b
#define SBB_R14B_TO_PTR_R14 sbb byte ptr [r14], r14b
#define SBB_R14B_TO_PTR_R15 sbb byte ptr [r15], r14b
#define SBB_R14B_TO_PTR_EAX sbb byte ptr [eax], r14b
#define SBB_R14B_TO_PTR_EBX sbb byte ptr [ebx], r14b
#define SBB_R14B_TO_PTR_ECX sbb byte ptr [ecx], r14b
#define SBB_R14B_TO_PTR_EDX sbb byte ptr [edx], r14b
#define SBB_R14B_TO_PTR_EDI sbb byte ptr [edi], r14b
#define SBB_R14B_TO_PTR_ESI sbb byte ptr [esi], r14b
#define SBB_R14B_TO_PTR_EBP sbb byte ptr [ebp], r14b
#define SBB_R14B_TO_PTR_ESP sbb byte ptr [esp], r14b

#define SBB_R15B_TO_PTR_RAX sbb byte ptr [rax], r15b
#define SBB_R15B_TO_PTR_RBX sbb byte ptr [rbx], r15b
#define SBB_R15B_TO_PTR_RCX sbb byte ptr [rcx], r15b
#define SBB_R15B_TO_PTR_RDX sbb byte ptr [rdx], r15b
#define SBB_R15B_TO_PTR_RDI sbb byte ptr [rdi], r15b
#define SBB_R15B_TO_PTR_RSI sbb byte ptr [rsi], r15b
#define SBB_R15B_TO_PTR_RBP sbb byte ptr [rbp], r15b
#define SBB_R15B_TO_PTR_RSP sbb byte ptr [rsp], r15b
#define SBB_R15B_TO_PTR_R8 sbb byte ptr [r8], r15b
#define SBB_R15B_TO_PTR_R9 sbb byte ptr [r9], r15b
#define SBB_R15B_TO_PTR_R10 sbb byte ptr [r10], r15b
#define SBB_R15B_TO_PTR_R11 sbb byte ptr [r11], r15b
#define SBB_R15B_TO_PTR_R12 sbb byte ptr [r12], r15b
#define SBB_R15B_TO_PTR_R13 sbb byte ptr [r13], r15b
#define SBB_R15B_TO_PTR_R14 sbb byte ptr [r14], r15b
#define SBB_R15B_TO_PTR_R15 sbb byte ptr [r15], r15b
#define SBB_R15B_TO_PTR_EAX sbb byte ptr [eax], r15b
#define SBB_R15B_TO_PTR_EBX sbb byte ptr [ebx], r15b
#define SBB_R15B_TO_PTR_ECX sbb byte ptr [ecx], r15b
#define SBB_R15B_TO_PTR_EDX sbb byte ptr [edx], r15b
#define SBB_R15B_TO_PTR_EDI sbb byte ptr [edi], r15b
#define SBB_R15B_TO_PTR_ESI sbb byte ptr [esi], r15b
#define SBB_R15B_TO_PTR_EBP sbb byte ptr [ebp], r15b
#define SBB_R15B_TO_PTR_ESP sbb byte ptr [esp], r15b

#define SBB_AL_FROM_PTR_RAX_(VALUE) sbb al, byte ptr [rax + VALUE]
#define SBB_AL_FROM_PTR_RBX_(VALUE) sbb al, byte ptr [rbx + VALUE]
#define SBB_AL_FROM_PTR_RCX_(VALUE) sbb al, byte ptr [rcx + VALUE]
#define SBB_AL_FROM_PTR_RDX_(VALUE) sbb al, byte ptr [rdx + VALUE]
#define SBB_AL_FROM_PTR_RDI_(VALUE) sbb al, byte ptr [rdi + VALUE]
#define SBB_AL_FROM_PTR_RSI_(VALUE) sbb al, byte ptr [rsi + VALUE]
#define SBB_AL_FROM_PTR_RBP_(VALUE) sbb al, byte ptr [rbp + VALUE]
#define SBB_AL_FROM_PTR_RSP_(VALUE) sbb al, byte ptr [rsp + VALUE]
#define SBB_AL_FROM_PTR_R8_(VALUE) sbb al, byte ptr [r8 + VALUE]
#define SBB_AL_FROM_PTR_R9_(VALUE) sbb al, byte ptr [r9 + VALUE]
#define SBB_AL_FROM_PTR_R10_(VALUE) sbb al, byte ptr [r10 + VALUE]
#define SBB_AL_FROM_PTR_R11_(VALUE) sbb al, byte ptr [r11 + VALUE]
#define SBB_AL_FROM_PTR_R12_(VALUE) sbb al, byte ptr [r12 + VALUE]
#define SBB_AL_FROM_PTR_R13_(VALUE) sbb al, byte ptr [r13 + VALUE]
#define SBB_AL_FROM_PTR_R14_(VALUE) sbb al, byte ptr [r14 + VALUE]
#define SBB_AL_FROM_PTR_R15_(VALUE) sbb al, byte ptr [r15 + VALUE]
#define SBB_AL_FROM_PTR_EAX_(VALUE) sbb al, byte ptr [eax + VALUE]
#define SBB_AL_FROM_PTR_EBX_(VALUE) sbb al, byte ptr [ebx + VALUE]
#define SBB_AL_FROM_PTR_ECX_(VALUE) sbb al, byte ptr [ecx + VALUE]
#define SBB_AL_FROM_PTR_EDX_(VALUE) sbb al, byte ptr [edx + VALUE]
#define SBB_AL_FROM_PTR_EDI_(VALUE) sbb al, byte ptr [edi + VALUE]
#define SBB_AL_FROM_PTR_ESI_(VALUE) sbb al, byte ptr [esi + VALUE]
#define SBB_AL_FROM_PTR_EBP_(VALUE) sbb al, byte ptr [ebp + VALUE]
#define SBB_AL_FROM_PTR_ESP_(VALUE) sbb al, byte ptr [esp + VALUE]

#define SBB_BL_FROM_PTR_RAX_(VALUE) sbb bl, byte ptr [rax + VALUE]
#define SBB_BL_FROM_PTR_RBX_(VALUE) sbb bl, byte ptr [rbx + VALUE]
#define SBB_BL_FROM_PTR_RCX_(VALUE) sbb bl, byte ptr [rcx + VALUE]
#define SBB_BL_FROM_PTR_RDX_(VALUE) sbb bl, byte ptr [rdx + VALUE]
#define SBB_BL_FROM_PTR_RDI_(VALUE) sbb bl, byte ptr [rdi + VALUE]
#define SBB_BL_FROM_PTR_RSI_(VALUE) sbb bl, byte ptr [rsi + VALUE]
#define SBB_BL_FROM_PTR_RBP_(VALUE) sbb bl, byte ptr [rbp + VALUE]
#define SBB_BL_FROM_PTR_RSP_(VALUE) sbb bl, byte ptr [rsp + VALUE]
#define SBB_BL_FROM_PTR_R8_(VALUE) sbb bl, byte ptr [r8 + VALUE]
#define SBB_BL_FROM_PTR_R9_(VALUE) sbb bl, byte ptr [r9 + VALUE]
#define SBB_BL_FROM_PTR_R10_(VALUE) sbb bl, byte ptr [r10 + VALUE]
#define SBB_BL_FROM_PTR_R11_(VALUE) sbb bl, byte ptr [r11 + VALUE]
#define SBB_BL_FROM_PTR_R12_(VALUE) sbb bl, byte ptr [r12 + VALUE]
#define SBB_BL_FROM_PTR_R13_(VALUE) sbb bl, byte ptr [r13 + VALUE]
#define SBB_BL_FROM_PTR_R14_(VALUE) sbb bl, byte ptr [r14 + VALUE]
#define SBB_BL_FROM_PTR_R15_(VALUE) sbb bl, byte ptr [r15 + VALUE]
#define SBB_BL_FROM_PTR_EAX_(VALUE) sbb bl, byte ptr [eax + VALUE]
#define SBB_BL_FROM_PTR_EBX_(VALUE) sbb bl, byte ptr [ebx + VALUE]
#define SBB_BL_FROM_PTR_ECX_(VALUE) sbb bl, byte ptr [ecx + VALUE]
#define SBB_BL_FROM_PTR_EDX_(VALUE) sbb bl, byte ptr [edx + VALUE]
#define SBB_BL_FROM_PTR_EDI_(VALUE) sbb bl, byte ptr [edi + VALUE]
#define SBB_BL_FROM_PTR_ESI_(VALUE) sbb bl, byte ptr [esi + VALUE]
#define SBB_BL_FROM_PTR_EBP_(VALUE) sbb bl, byte ptr [ebp + VALUE]
#define SBB_BL_FROM_PTR_ESP_(VALUE) sbb bl, byte ptr [esp + VALUE]

#define SBB_CL_FROM_PTR_RAX_(VALUE) sbb cl, byte ptr [rax + VALUE]
#define SBB_CL_FROM_PTR_RBX_(VALUE) sbb cl, byte ptr [rbx + VALUE]
#define SBB_CL_FROM_PTR_RCX_(VALUE) sbb cl, byte ptr [rcx + VALUE]
#define SBB_CL_FROM_PTR_RDX_(VALUE) sbb cl, byte ptr [rdx + VALUE]
#define SBB_CL_FROM_PTR_RDI_(VALUE) sbb cl, byte ptr [rdi + VALUE]
#define SBB_CL_FROM_PTR_RSI_(VALUE) sbb cl, byte ptr [rsi + VALUE]
#define SBB_CL_FROM_PTR_RBP_(VALUE) sbb cl, byte ptr [rbp + VALUE]
#define SBB_CL_FROM_PTR_RSP_(VALUE) sbb cl, byte ptr [rsp + VALUE]
#define SBB_CL_FROM_PTR_R8_(VALUE) sbb cl, byte ptr [r8 + VALUE]
#define SBB_CL_FROM_PTR_R9_(VALUE) sbb cl, byte ptr [r9 + VALUE]
#define SBB_CL_FROM_PTR_R10_(VALUE) sbb cl, byte ptr [r10 + VALUE]
#define SBB_CL_FROM_PTR_R11_(VALUE) sbb cl, byte ptr [r11 + VALUE]
#define SBB_CL_FROM_PTR_R12_(VALUE) sbb cl, byte ptr [r12 + VALUE]
#define SBB_CL_FROM_PTR_R13_(VALUE) sbb cl, byte ptr [r13 + VALUE]
#define SBB_CL_FROM_PTR_R14_(VALUE) sbb cl, byte ptr [r14 + VALUE]
#define SBB_CL_FROM_PTR_R15_(VALUE) sbb cl, byte ptr [r15 + VALUE]
#define SBB_CL_FROM_PTR_EAX_(VALUE) sbb cl, byte ptr [eax + VALUE]
#define SBB_CL_FROM_PTR_EBX_(VALUE) sbb cl, byte ptr [ebx + VALUE]
#define SBB_CL_FROM_PTR_ECX_(VALUE) sbb cl, byte ptr [ecx + VALUE]
#define SBB_CL_FROM_PTR_EDX_(VALUE) sbb cl, byte ptr [edx + VALUE]
#define SBB_CL_FROM_PTR_EDI_(VALUE) sbb cl, byte ptr [edi + VALUE]
#define SBB_CL_FROM_PTR_ESI_(VALUE) sbb cl, byte ptr [esi + VALUE]
#define SBB_CL_FROM_PTR_EBP_(VALUE) sbb cl, byte ptr [ebp + VALUE]
#define SBB_CL_FROM_PTR_ESP_(VALUE) sbb cl, byte ptr [esp + VALUE]

#define SBB_DL_FROM_PTR_RAX_(VALUE) sbb dl, byte ptr [rax + VALUE]
#define SBB_DL_FROM_PTR_RBX_(VALUE) sbb dl, byte ptr [rbx + VALUE]
#define SBB_DL_FROM_PTR_RCX_(VALUE) sbb dl, byte ptr [rcx + VALUE]
#define SBB_DL_FROM_PTR_RDX_(VALUE) sbb dl, byte ptr [rdx + VALUE]
#define SBB_DL_FROM_PTR_RDI_(VALUE) sbb dl, byte ptr [rdi + VALUE]
#define SBB_DL_FROM_PTR_RSI_(VALUE) sbb dl, byte ptr [rsi + VALUE]
#define SBB_DL_FROM_PTR_RBP_(VALUE) sbb dl, byte ptr [rbp + VALUE]
#define SBB_DL_FROM_PTR_RSP_(VALUE) sbb dl, byte ptr [rsp + VALUE]
#define SBB_DL_FROM_PTR_R8_(VALUE) sbb dl, byte ptr [r8 + VALUE]
#define SBB_DL_FROM_PTR_R9_(VALUE) sbb dl, byte ptr [r9 + VALUE]
#define SBB_DL_FROM_PTR_R10_(VALUE) sbb dl, byte ptr [r10 + VALUE]
#define SBB_DL_FROM_PTR_R11_(VALUE) sbb dl, byte ptr [r11 + VALUE]
#define SBB_DL_FROM_PTR_R12_(VALUE) sbb dl, byte ptr [r12 + VALUE]
#define SBB_DL_FROM_PTR_R13_(VALUE) sbb dl, byte ptr [r13 + VALUE]
#define SBB_DL_FROM_PTR_R14_(VALUE) sbb dl, byte ptr [r14 + VALUE]
#define SBB_DL_FROM_PTR_R15_(VALUE) sbb dl, byte ptr [r15 + VALUE]
#define SBB_DL_FROM_PTR_EAX_(VALUE) sbb dl, byte ptr [eax + VALUE]
#define SBB_DL_FROM_PTR_EBX_(VALUE) sbb dl, byte ptr [ebx + VALUE]
#define SBB_DL_FROM_PTR_ECX_(VALUE) sbb dl, byte ptr [ecx + VALUE]
#define SBB_DL_FROM_PTR_EDX_(VALUE) sbb dl, byte ptr [edx + VALUE]
#define SBB_DL_FROM_PTR_EDI_(VALUE) sbb dl, byte ptr [edi + VALUE]
#define SBB_DL_FROM_PTR_ESI_(VALUE) sbb dl, byte ptr [esi + VALUE]
#define SBB_DL_FROM_PTR_EBP_(VALUE) sbb dl, byte ptr [ebp + VALUE]
#define SBB_DL_FROM_PTR_ESP_(VALUE) sbb dl, byte ptr [esp + VALUE]

#define SBB_DIL_FROM_PTR_RAX_(VALUE) sbb dil, byte ptr [rax + VALUE]
#define SBB_DIL_FROM_PTR_RBX_(VALUE) sbb dil, byte ptr [rbx + VALUE]
#define SBB_DIL_FROM_PTR_RCX_(VALUE) sbb dil, byte ptr [rcx + VALUE]
#define SBB_DIL_FROM_PTR_RDX_(VALUE) sbb dil, byte ptr [rdx + VALUE]
#define SBB_DIL_FROM_PTR_RDI_(VALUE) sbb dil, byte ptr [rdi + VALUE]
#define SBB_DIL_FROM_PTR_RSI_(VALUE) sbb dil, byte ptr [rsi + VALUE]
#define SBB_DIL_FROM_PTR_RBP_(VALUE) sbb dil, byte ptr [rbp + VALUE]
#define SBB_DIL_FROM_PTR_RSP_(VALUE) sbb dil, byte ptr [rsp + VALUE]
#define SBB_DIL_FROM_PTR_R8_(VALUE) sbb dil, byte ptr [r8 + VALUE]
#define SBB_DIL_FROM_PTR_R9_(VALUE) sbb dil, byte ptr [r9 + VALUE]
#define SBB_DIL_FROM_PTR_R10_(VALUE) sbb dil, byte ptr [r10 + VALUE]
#define SBB_DIL_FROM_PTR_R11_(VALUE) sbb dil, byte ptr [r11 + VALUE]
#define SBB_DIL_FROM_PTR_R12_(VALUE) sbb dil, byte ptr [r12 + VALUE]
#define SBB_DIL_FROM_PTR_R13_(VALUE) sbb dil, byte ptr [r13 + VALUE]
#define SBB_DIL_FROM_PTR_R14_(VALUE) sbb dil, byte ptr [r14 + VALUE]
#define SBB_DIL_FROM_PTR_R15_(VALUE) sbb dil, byte ptr [r15 + VALUE]
#define SBB_DIL_FROM_PTR_EAX_(VALUE) sbb dil, byte ptr [eax + VALUE]
#define SBB_DIL_FROM_PTR_EBX_(VALUE) sbb dil, byte ptr [ebx + VALUE]
#define SBB_DIL_FROM_PTR_ECX_(VALUE) sbb dil, byte ptr [ecx + VALUE]
#define SBB_DIL_FROM_PTR_EDX_(VALUE) sbb dil, byte ptr [edx + VALUE]
#define SBB_DIL_FROM_PTR_EDI_(VALUE) sbb dil, byte ptr [edi + VALUE]
#define SBB_DIL_FROM_PTR_ESI_(VALUE) sbb dil, byte ptr [esi + VALUE]
#define SBB_DIL_FROM_PTR_EBP_(VALUE) sbb dil, byte ptr [ebp + VALUE]
#define SBB_DIL_FROM_PTR_ESP_(VALUE) sbb dil, byte ptr [esp + VALUE]

#define SBB_SIL_FROM_PTR_RAX_(VALUE) sbb sil, byte ptr [rax + VALUE]
#define SBB_SIL_FROM_PTR_RBX_(VALUE) sbb sil, byte ptr [rbx + VALUE]
#define SBB_SIL_FROM_PTR_RCX_(VALUE) sbb sil, byte ptr [rcx + VALUE]
#define SBB_SIL_FROM_PTR_RDX_(VALUE) sbb sil, byte ptr [rdx + VALUE]
#define SBB_SIL_FROM_PTR_RDI_(VALUE) sbb sil, byte ptr [rdi + VALUE]
#define SBB_SIL_FROM_PTR_RSI_(VALUE) sbb sil, byte ptr [rsi + VALUE]
#define SBB_SIL_FROM_PTR_RBP_(VALUE) sbb sil, byte ptr [rbp + VALUE]
#define SBB_SIL_FROM_PTR_RSP_(VALUE) sbb sil, byte ptr [rsp + VALUE]
#define SBB_SIL_FROM_PTR_R8_(VALUE) sbb sil, byte ptr [r8 + VALUE]
#define SBB_SIL_FROM_PTR_R9_(VALUE) sbb sil, byte ptr [r9 + VALUE]
#define SBB_SIL_FROM_PTR_R10_(VALUE) sbb sil, byte ptr [r10 + VALUE]
#define SBB_SIL_FROM_PTR_R11_(VALUE) sbb sil, byte ptr [r11 + VALUE]
#define SBB_SIL_FROM_PTR_R12_(VALUE) sbb sil, byte ptr [r12 + VALUE]
#define SBB_SIL_FROM_PTR_R13_(VALUE) sbb sil, byte ptr [r13 + VALUE]
#define SBB_SIL_FROM_PTR_R14_(VALUE) sbb sil, byte ptr [r14 + VALUE]
#define SBB_SIL_FROM_PTR_R15_(VALUE) sbb sil, byte ptr [r15 + VALUE]
#define SBB_SIL_FROM_PTR_EAX_(VALUE) sbb sil, byte ptr [eax + VALUE]
#define SBB_SIL_FROM_PTR_EBX_(VALUE) sbb sil, byte ptr [ebx + VALUE]
#define SBB_SIL_FROM_PTR_ECX_(VALUE) sbb sil, byte ptr [ecx + VALUE]
#define SBB_SIL_FROM_PTR_EDX_(VALUE) sbb sil, byte ptr [edx + VALUE]
#define SBB_SIL_FROM_PTR_EDI_(VALUE) sbb sil, byte ptr [edi + VALUE]
#define SBB_SIL_FROM_PTR_ESI_(VALUE) sbb sil, byte ptr [esi + VALUE]
#define SBB_SIL_FROM_PTR_EBP_(VALUE) sbb sil, byte ptr [ebp + VALUE]
#define SBB_SIL_FROM_PTR_ESP_(VALUE) sbb sil, byte ptr [esp + VALUE]

#define SBB_BPL_FROM_PTR_RAX_(VALUE) sbb bpl, byte ptr [rax + VALUE]
#define SBB_BPL_FROM_PTR_RBX_(VALUE) sbb bpl, byte ptr [rbx + VALUE]
#define SBB_BPL_FROM_PTR_RCX_(VALUE) sbb bpl, byte ptr [rcx + VALUE]
#define SBB_BPL_FROM_PTR_RDX_(VALUE) sbb bpl, byte ptr [rdx + VALUE]
#define SBB_BPL_FROM_PTR_RDI_(VALUE) sbb bpl, byte ptr [rdi + VALUE]
#define SBB_BPL_FROM_PTR_RSI_(VALUE) sbb bpl, byte ptr [rsi + VALUE]
#define SBB_BPL_FROM_PTR_RBP_(VALUE) sbb bpl, byte ptr [rbp + VALUE]
#define SBB_BPL_FROM_PTR_RSP_(VALUE) sbb bpl, byte ptr [rsp + VALUE]
#define SBB_BPL_FROM_PTR_R8_(VALUE) sbb bpl, byte ptr [r8 + VALUE]
#define SBB_BPL_FROM_PTR_R9_(VALUE) sbb bpl, byte ptr [r9 + VALUE]
#define SBB_BPL_FROM_PTR_R10_(VALUE) sbb bpl, byte ptr [r10 + VALUE]
#define SBB_BPL_FROM_PTR_R11_(VALUE) sbb bpl, byte ptr [r11 + VALUE]
#define SBB_BPL_FROM_PTR_R12_(VALUE) sbb bpl, byte ptr [r12 + VALUE]
#define SBB_BPL_FROM_PTR_R13_(VALUE) sbb bpl, byte ptr [r13 + VALUE]
#define SBB_BPL_FROM_PTR_R14_(VALUE) sbb bpl, byte ptr [r14 + VALUE]
#define SBB_BPL_FROM_PTR_R15_(VALUE) sbb bpl, byte ptr [r15 + VALUE]
#define SBB_BPL_FROM_PTR_EAX_(VALUE) sbb bpl, byte ptr [eax + VALUE]
#define SBB_BPL_FROM_PTR_EBX_(VALUE) sbb bpl, byte ptr [ebx + VALUE]
#define SBB_BPL_FROM_PTR_ECX_(VALUE) sbb bpl, byte ptr [ecx + VALUE]
#define SBB_BPL_FROM_PTR_EDX_(VALUE) sbb bpl, byte ptr [edx + VALUE]
#define SBB_BPL_FROM_PTR_EDI_(VALUE) sbb bpl, byte ptr [edi + VALUE]
#define SBB_BPL_FROM_PTR_ESI_(VALUE) sbb bpl, byte ptr [esi + VALUE]
#define SBB_BPL_FROM_PTR_EBP_(VALUE) sbb bpl, byte ptr [ebp + VALUE]
#define SBB_BPL_FROM_PTR_ESP_(VALUE) sbb bpl, byte ptr [esp + VALUE]

#define SBB_SPL_FROM_PTR_RAX_(VALUE) sbb spl, byte ptr [rax + VALUE]
#define SBB_SPL_FROM_PTR_RBX_(VALUE) sbb spl, byte ptr [rbx + VALUE]
#define SBB_SPL_FROM_PTR_RCX_(VALUE) sbb spl, byte ptr [rcx + VALUE]
#define SBB_SPL_FROM_PTR_RDX_(VALUE) sbb spl, byte ptr [rdx + VALUE]
#define SBB_SPL_FROM_PTR_RDI_(VALUE) sbb spl, byte ptr [rdi + VALUE]
#define SBB_SPL_FROM_PTR_RSI_(VALUE) sbb spl, byte ptr [rsi + VALUE]
#define SBB_SPL_FROM_PTR_RBP_(VALUE) sbb spl, byte ptr [rbp + VALUE]
#define SBB_SPL_FROM_PTR_RSP_(VALUE) sbb spl, byte ptr [rsp + VALUE]
#define SBB_SPL_FROM_PTR_R8_(VALUE) sbb spl, byte ptr [r8 + VALUE]
#define SBB_SPL_FROM_PTR_R9_(VALUE) sbb spl, byte ptr [r9 + VALUE]
#define SBB_SPL_FROM_PTR_R10_(VALUE) sbb spl, byte ptr [r10 + VALUE]
#define SBB_SPL_FROM_PTR_R11_(VALUE) sbb spl, byte ptr [r11 + VALUE]
#define SBB_SPL_FROM_PTR_R12_(VALUE) sbb spl, byte ptr [r12 + VALUE]
#define SBB_SPL_FROM_PTR_R13_(VALUE) sbb spl, byte ptr [r13 + VALUE]
#define SBB_SPL_FROM_PTR_R14_(VALUE) sbb spl, byte ptr [r14 + VALUE]
#define SBB_SPL_FROM_PTR_R15_(VALUE) sbb spl, byte ptr [r15 + VALUE]
#define SBB_SPL_FROM_PTR_EAX_(VALUE) sbb spl, byte ptr [eax + VALUE]
#define SBB_SPL_FROM_PTR_EBX_(VALUE) sbb spl, byte ptr [ebx + VALUE]
#define SBB_SPL_FROM_PTR_ECX_(VALUE) sbb spl, byte ptr [ecx + VALUE]
#define SBB_SPL_FROM_PTR_EDX_(VALUE) sbb spl, byte ptr [edx + VALUE]
#define SBB_SPL_FROM_PTR_EDI_(VALUE) sbb spl, byte ptr [edi + VALUE]
#define SBB_SPL_FROM_PTR_ESI_(VALUE) sbb spl, byte ptr [esi + VALUE]
#define SBB_SPL_FROM_PTR_EBP_(VALUE) sbb spl, byte ptr [ebp + VALUE]
#define SBB_SPL_FROM_PTR_ESP_(VALUE) sbb spl, byte ptr [esp + VALUE]

#define SBB_R8B_FROM_PTR_RAX_(VALUE) sbb r8b, byte ptr [rax + VALUE]
#define SBB_R8B_FROM_PTR_RBX_(VALUE) sbb r8b, byte ptr [rbx + VALUE]
#define SBB_R8B_FROM_PTR_RCX_(VALUE) sbb r8b, byte ptr [rcx + VALUE]
#define SBB_R8B_FROM_PTR_RDX_(VALUE) sbb r8b, byte ptr [rdx + VALUE]
#define SBB_R8B_FROM_PTR_RDI_(VALUE) sbb r8b, byte ptr [rdi + VALUE]
#define SBB_R8B_FROM_PTR_RSI_(VALUE) sbb r8b, byte ptr [rsi + VALUE]
#define SBB_R8B_FROM_PTR_RBP_(VALUE) sbb r8b, byte ptr [rbp + VALUE]
#define SBB_R8B_FROM_PTR_RSP_(VALUE) sbb r8b, byte ptr [rsp + VALUE]
#define SBB_R8B_FROM_PTR_R8_(VALUE) sbb r8b, byte ptr [r8 + VALUE]
#define SBB_R8B_FROM_PTR_R9_(VALUE) sbb r8b, byte ptr [r9 + VALUE]
#define SBB_R8B_FROM_PTR_R10_(VALUE) sbb r8b, byte ptr [r10 + VALUE]
#define SBB_R8B_FROM_PTR_R11_(VALUE) sbb r8b, byte ptr [r11 + VALUE]
#define SBB_R8B_FROM_PTR_R12_(VALUE) sbb r8b, byte ptr [r12 + VALUE]
#define SBB_R8B_FROM_PTR_R13_(VALUE) sbb r8b, byte ptr [r13 + VALUE]
#define SBB_R8B_FROM_PTR_R14_(VALUE) sbb r8b, byte ptr [r14 + VALUE]
#define SBB_R8B_FROM_PTR_R15_(VALUE) sbb r8b, byte ptr [r15 + VALUE]
#define SBB_R8B_FROM_PTR_EAX_(VALUE) sbb r8b, byte ptr [eax + VALUE]
#define SBB_R8B_FROM_PTR_EBX_(VALUE) sbb r8b, byte ptr [ebx + VALUE]
#define SBB_R8B_FROM_PTR_ECX_(VALUE) sbb r8b, byte ptr [ecx + VALUE]
#define SBB_R8B_FROM_PTR_EDX_(VALUE) sbb r8b, byte ptr [edx + VALUE]
#define SBB_R8B_FROM_PTR_EDI_(VALUE) sbb r8b, byte ptr [edi + VALUE]
#define SBB_R8B_FROM_PTR_ESI_(VALUE) sbb r8b, byte ptr [esi + VALUE]
#define SBB_R8B_FROM_PTR_EBP_(VALUE) sbb r8b, byte ptr [ebp + VALUE]
#define SBB_R8B_FROM_PTR_ESP_(VALUE) sbb r8b, byte ptr [esp + VALUE]

#define SBB_R9B_FROM_PTR_RAX_(VALUE) sbb r9b, byte ptr [rax + VALUE]
#define SBB_R9B_FROM_PTR_RBX_(VALUE) sbb r9b, byte ptr [rbx + VALUE]
#define SBB_R9B_FROM_PTR_RCX_(VALUE) sbb r9b, byte ptr [rcx + VALUE]
#define SBB_R9B_FROM_PTR_RDX_(VALUE) sbb r9b, byte ptr [rdx + VALUE]
#define SBB_R9B_FROM_PTR_RDI_(VALUE) sbb r9b, byte ptr [rdi + VALUE]
#define SBB_R9B_FROM_PTR_RSI_(VALUE) sbb r9b, byte ptr [rsi + VALUE]
#define SBB_R9B_FROM_PTR_RBP_(VALUE) sbb r9b, byte ptr [rbp + VALUE]
#define SBB_R9B_FROM_PTR_RSP_(VALUE) sbb r9b, byte ptr [rsp + VALUE]
#define SBB_R9B_FROM_PTR_R8_(VALUE) sbb r9b, byte ptr [r8 + VALUE]
#define SBB_R9B_FROM_PTR_R9_(VALUE) sbb r9b, byte ptr [r9 + VALUE]
#define SBB_R9B_FROM_PTR_R10_(VALUE) sbb r9b, byte ptr [r10 + VALUE]
#define SBB_R9B_FROM_PTR_R11_(VALUE) sbb r9b, byte ptr [r11 + VALUE]
#define SBB_R9B_FROM_PTR_R12_(VALUE) sbb r9b, byte ptr [r12 + VALUE]
#define SBB_R9B_FROM_PTR_R13_(VALUE) sbb r9b, byte ptr [r13 + VALUE]
#define SBB_R9B_FROM_PTR_R14_(VALUE) sbb r9b, byte ptr [r14 + VALUE]
#define SBB_R9B_FROM_PTR_R15_(VALUE) sbb r9b, byte ptr [r15 + VALUE]
#define SBB_R9B_FROM_PTR_EAX_(VALUE) sbb r9b, byte ptr [eax + VALUE]
#define SBB_R9B_FROM_PTR_EBX_(VALUE) sbb r9b, byte ptr [ebx + VALUE]
#define SBB_R9B_FROM_PTR_ECX_(VALUE) sbb r9b, byte ptr [ecx + VALUE]
#define SBB_R9B_FROM_PTR_EDX_(VALUE) sbb r9b, byte ptr [edx + VALUE]
#define SBB_R9B_FROM_PTR_EDI_(VALUE) sbb r9b, byte ptr [edi + VALUE]
#define SBB_R9B_FROM_PTR_ESI_(VALUE) sbb r9b, byte ptr [esi + VALUE]
#define SBB_R9B_FROM_PTR_EBP_(VALUE) sbb r9b, byte ptr [ebp + VALUE]
#define SBB_R9B_FROM_PTR_ESP_(VALUE) sbb r9b, byte ptr [esp + VALUE]

#define SBB_R10B_FROM_PTR_RAX_(VALUE) sbb r10b, byte ptr [rax + VALUE]
#define SBB_R10B_FROM_PTR_RBX_(VALUE) sbb r10b, byte ptr [rbx + VALUE]
#define SBB_R10B_FROM_PTR_RCX_(VALUE) sbb r10b, byte ptr [rcx + VALUE]
#define SBB_R10B_FROM_PTR_RDX_(VALUE) sbb r10b, byte ptr [rdx + VALUE]
#define SBB_R10B_FROM_PTR_RDI_(VALUE) sbb r10b, byte ptr [rdi + VALUE]
#define SBB_R10B_FROM_PTR_RSI_(VALUE) sbb r10b, byte ptr [rsi + VALUE]
#define SBB_R10B_FROM_PTR_RBP_(VALUE) sbb r10b, byte ptr [rbp + VALUE]
#define SBB_R10B_FROM_PTR_RSP_(VALUE) sbb r10b, byte ptr [rsp + VALUE]
#define SBB_R10B_FROM_PTR_R8_(VALUE) sbb r10b, byte ptr [r8 + VALUE]
#define SBB_R10B_FROM_PTR_R9_(VALUE) sbb r10b, byte ptr [r9 + VALUE]
#define SBB_R10B_FROM_PTR_R10_(VALUE) sbb r10b, byte ptr [r10 + VALUE]
#define SBB_R10B_FROM_PTR_R11_(VALUE) sbb r10b, byte ptr [r11 + VALUE]
#define SBB_R10B_FROM_PTR_R12_(VALUE) sbb r10b, byte ptr [r12 + VALUE]
#define SBB_R10B_FROM_PTR_R13_(VALUE) sbb r10b, byte ptr [r13 + VALUE]
#define SBB_R10B_FROM_PTR_R14_(VALUE) sbb r10b, byte ptr [r14 + VALUE]
#define SBB_R10B_FROM_PTR_R15_(VALUE) sbb r10b, byte ptr [r15 + VALUE]
#define SBB_R10B_FROM_PTR_EAX_(VALUE) sbb r10b, byte ptr [eax + VALUE]
#define SBB_R10B_FROM_PTR_EBX_(VALUE) sbb r10b, byte ptr [ebx + VALUE]
#define SBB_R10B_FROM_PTR_ECX_(VALUE) sbb r10b, byte ptr [ecx + VALUE]
#define SBB_R10B_FROM_PTR_EDX_(VALUE) sbb r10b, byte ptr [edx + VALUE]
#define SBB_R10B_FROM_PTR_EDI_(VALUE) sbb r10b, byte ptr [edi + VALUE]
#define SBB_R10B_FROM_PTR_ESI_(VALUE) sbb r10b, byte ptr [esi + VALUE]
#define SBB_R10B_FROM_PTR_EBP_(VALUE) sbb r10b, byte ptr [ebp + VALUE]
#define SBB_R10B_FROM_PTR_ESP_(VALUE) sbb r10b, byte ptr [esp + VALUE]

#define SBB_R11B_FROM_PTR_RAX_(VALUE) sbb r11b, byte ptr [rax + VALUE]
#define SBB_R11B_FROM_PTR_RBX_(VALUE) sbb r11b, byte ptr [rbx + VALUE]
#define SBB_R11B_FROM_PTR_RCX_(VALUE) sbb r11b, byte ptr [rcx + VALUE]
#define SBB_R11B_FROM_PTR_RDX_(VALUE) sbb r11b, byte ptr [rdx + VALUE]
#define SBB_R11B_FROM_PTR_RDI_(VALUE) sbb r11b, byte ptr [rdi + VALUE]
#define SBB_R11B_FROM_PTR_RSI_(VALUE) sbb r11b, byte ptr [rsi + VALUE]
#define SBB_R11B_FROM_PTR_RBP_(VALUE) sbb r11b, byte ptr [rbp + VALUE]
#define SBB_R11B_FROM_PTR_RSP_(VALUE) sbb r11b, byte ptr [rsp + VALUE]
#define SBB_R11B_FROM_PTR_R8_(VALUE) sbb r11b, byte ptr [r8 + VALUE]
#define SBB_R11B_FROM_PTR_R9_(VALUE) sbb r11b, byte ptr [r9 + VALUE]
#define SBB_R11B_FROM_PTR_R10_(VALUE) sbb r11b, byte ptr [r10 + VALUE]
#define SBB_R11B_FROM_PTR_R11_(VALUE) sbb r11b, byte ptr [r11 + VALUE]
#define SBB_R11B_FROM_PTR_R12_(VALUE) sbb r11b, byte ptr [r12 + VALUE]
#define SBB_R11B_FROM_PTR_R13_(VALUE) sbb r11b, byte ptr [r13 + VALUE]
#define SBB_R11B_FROM_PTR_R14_(VALUE) sbb r11b, byte ptr [r14 + VALUE]
#define SBB_R11B_FROM_PTR_R15_(VALUE) sbb r11b, byte ptr [r15 + VALUE]
#define SBB_R11B_FROM_PTR_EAX_(VALUE) sbb r11b, byte ptr [eax + VALUE]
#define SBB_R11B_FROM_PTR_EBX_(VALUE) sbb r11b, byte ptr [ebx + VALUE]
#define SBB_R11B_FROM_PTR_ECX_(VALUE) sbb r11b, byte ptr [ecx + VALUE]
#define SBB_R11B_FROM_PTR_EDX_(VALUE) sbb r11b, byte ptr [edx + VALUE]
#define SBB_R11B_FROM_PTR_EDI_(VALUE) sbb r11b, byte ptr [edi + VALUE]
#define SBB_R11B_FROM_PTR_ESI_(VALUE) sbb r11b, byte ptr [esi + VALUE]
#define SBB_R11B_FROM_PTR_EBP_(VALUE) sbb r11b, byte ptr [ebp + VALUE]
#define SBB_R11B_FROM_PTR_ESP_(VALUE) sbb r11b, byte ptr [esp + VALUE]

#define SBB_R12B_FROM_PTR_RAX_(VALUE) sbb r12b, byte ptr [rax + VALUE]
#define SBB_R12B_FROM_PTR_RBX_(VALUE) sbb r12b, byte ptr [rbx + VALUE]
#define SBB_R12B_FROM_PTR_RCX_(VALUE) sbb r12b, byte ptr [rcx + VALUE]
#define SBB_R12B_FROM_PTR_RDX_(VALUE) sbb r12b, byte ptr [rdx + VALUE]
#define SBB_R12B_FROM_PTR_RDI_(VALUE) sbb r12b, byte ptr [rdi + VALUE]
#define SBB_R12B_FROM_PTR_RSI_(VALUE) sbb r12b, byte ptr [rsi + VALUE]
#define SBB_R12B_FROM_PTR_RBP_(VALUE) sbb r12b, byte ptr [rbp + VALUE]
#define SBB_R12B_FROM_PTR_RSP_(VALUE) sbb r12b, byte ptr [rsp + VALUE]
#define SBB_R12B_FROM_PTR_R8_(VALUE) sbb r12b, byte ptr [r8 + VALUE]
#define SBB_R12B_FROM_PTR_R9_(VALUE) sbb r12b, byte ptr [r9 + VALUE]
#define SBB_R12B_FROM_PTR_R10_(VALUE) sbb r12b, byte ptr [r10 + VALUE]
#define SBB_R12B_FROM_PTR_R11_(VALUE) sbb r12b, byte ptr [r11 + VALUE]
#define SBB_R12B_FROM_PTR_R12_(VALUE) sbb r12b, byte ptr [r12 + VALUE]
#define SBB_R12B_FROM_PTR_R13_(VALUE) sbb r12b, byte ptr [r13 + VALUE]
#define SBB_R12B_FROM_PTR_R14_(VALUE) sbb r12b, byte ptr [r14 + VALUE]
#define SBB_R12B_FROM_PTR_R15_(VALUE) sbb r12b, byte ptr [r15 + VALUE]
#define SBB_R12B_FROM_PTR_EAX_(VALUE) sbb r12b, byte ptr [eax + VALUE]
#define SBB_R12B_FROM_PTR_EBX_(VALUE) sbb r12b, byte ptr [ebx + VALUE]
#define SBB_R12B_FROM_PTR_ECX_(VALUE) sbb r12b, byte ptr [ecx + VALUE]
#define SBB_R12B_FROM_PTR_EDX_(VALUE) sbb r12b, byte ptr [edx + VALUE]
#define SBB_R12B_FROM_PTR_EDI_(VALUE) sbb r12b, byte ptr [edi + VALUE]
#define SBB_R12B_FROM_PTR_ESI_(VALUE) sbb r12b, byte ptr [esi + VALUE]
#define SBB_R12B_FROM_PTR_EBP_(VALUE) sbb r12b, byte ptr [ebp + VALUE]
#define SBB_R12B_FROM_PTR_ESP_(VALUE) sbb r12b, byte ptr [esp + VALUE]

#define SBB_R13B_FROM_PTR_RAX_(VALUE) sbb r13b, byte ptr [rax + VALUE]
#define SBB_R13B_FROM_PTR_RBX_(VALUE) sbb r13b, byte ptr [rbx + VALUE]
#define SBB_R13B_FROM_PTR_RCX_(VALUE) sbb r13b, byte ptr [rcx + VALUE]
#define SBB_R13B_FROM_PTR_RDX_(VALUE) sbb r13b, byte ptr [rdx + VALUE]
#define SBB_R13B_FROM_PTR_RDI_(VALUE) sbb r13b, byte ptr [rdi + VALUE]
#define SBB_R13B_FROM_PTR_RSI_(VALUE) sbb r13b, byte ptr [rsi + VALUE]
#define SBB_R13B_FROM_PTR_RBP_(VALUE) sbb r13b, byte ptr [rbp + VALUE]
#define SBB_R13B_FROM_PTR_RSP_(VALUE) sbb r13b, byte ptr [rsp + VALUE]
#define SBB_R13B_FROM_PTR_R8_(VALUE) sbb r13b, byte ptr [r8 + VALUE]
#define SBB_R13B_FROM_PTR_R9_(VALUE) sbb r13b, byte ptr [r9 + VALUE]
#define SBB_R13B_FROM_PTR_R10_(VALUE) sbb r13b, byte ptr [r10 + VALUE]
#define SBB_R13B_FROM_PTR_R11_(VALUE) sbb r13b, byte ptr [r11 + VALUE]
#define SBB_R13B_FROM_PTR_R12_(VALUE) sbb r13b, byte ptr [r12 + VALUE]
#define SBB_R13B_FROM_PTR_R13_(VALUE) sbb r13b, byte ptr [r13 + VALUE]
#define SBB_R13B_FROM_PTR_R14_(VALUE) sbb r13b, byte ptr [r14 + VALUE]
#define SBB_R13B_FROM_PTR_R15_(VALUE) sbb r13b, byte ptr [r15 + VALUE]
#define SBB_R13B_FROM_PTR_EAX_(VALUE) sbb r13b, byte ptr [eax + VALUE]
#define SBB_R13B_FROM_PTR_EBX_(VALUE) sbb r13b, byte ptr [ebx + VALUE]
#define SBB_R13B_FROM_PTR_ECX_(VALUE) sbb r13b, byte ptr [ecx + VALUE]
#define SBB_R13B_FROM_PTR_EDX_(VALUE) sbb r13b, byte ptr [edx + VALUE]
#define SBB_R13B_FROM_PTR_EDI_(VALUE) sbb r13b, byte ptr [edi + VALUE]
#define SBB_R13B_FROM_PTR_ESI_(VALUE) sbb r13b, byte ptr [esi + VALUE]
#define SBB_R13B_FROM_PTR_EBP_(VALUE) sbb r13b, byte ptr [ebp + VALUE]
#define SBB_R13B_FROM_PTR_ESP_(VALUE) sbb r13b, byte ptr [esp + VALUE]

#define SBB_R14B_FROM_PTR_RAX_(VALUE) sbb r14b, byte ptr [rax + VALUE]
#define SBB_R14B_FROM_PTR_RBX_(VALUE) sbb r14b, byte ptr [rbx + VALUE]
#define SBB_R14B_FROM_PTR_RCX_(VALUE) sbb r14b, byte ptr [rcx + VALUE]
#define SBB_R14B_FROM_PTR_RDX_(VALUE) sbb r14b, byte ptr [rdx + VALUE]
#define SBB_R14B_FROM_PTR_RDI_(VALUE) sbb r14b, byte ptr [rdi + VALUE]
#define SBB_R14B_FROM_PTR_RSI_(VALUE) sbb r14b, byte ptr [rsi + VALUE]
#define SBB_R14B_FROM_PTR_RBP_(VALUE) sbb r14b, byte ptr [rbp + VALUE]
#define SBB_R14B_FROM_PTR_RSP_(VALUE) sbb r14b, byte ptr [rsp + VALUE]
#define SBB_R14B_FROM_PTR_R8_(VALUE) sbb r14b, byte ptr [r8 + VALUE]
#define SBB_R14B_FROM_PTR_R9_(VALUE) sbb r14b, byte ptr [r9 + VALUE]
#define SBB_R14B_FROM_PTR_R10_(VALUE) sbb r14b, byte ptr [r10 + VALUE]
#define SBB_R14B_FROM_PTR_R11_(VALUE) sbb r14b, byte ptr [r11 + VALUE]
#define SBB_R14B_FROM_PTR_R12_(VALUE) sbb r14b, byte ptr [r12 + VALUE]
#define SBB_R14B_FROM_PTR_R13_(VALUE) sbb r14b, byte ptr [r13 + VALUE]
#define SBB_R14B_FROM_PTR_R14_(VALUE) sbb r14b, byte ptr [r14 + VALUE]
#define SBB_R14B_FROM_PTR_R15_(VALUE) sbb r14b, byte ptr [r15 + VALUE]
#define SBB_R14B_FROM_PTR_EAX_(VALUE) sbb r14b, byte ptr [eax + VALUE]
#define SBB_R14B_FROM_PTR_EBX_(VALUE) sbb r14b, byte ptr [ebx + VALUE]
#define SBB_R14B_FROM_PTR_ECX_(VALUE) sbb r14b, byte ptr [ecx + VALUE]
#define SBB_R14B_FROM_PTR_EDX_(VALUE) sbb r14b, byte ptr [edx + VALUE]
#define SBB_R14B_FROM_PTR_EDI_(VALUE) sbb r14b, byte ptr [edi + VALUE]
#define SBB_R14B_FROM_PTR_ESI_(VALUE) sbb r14b, byte ptr [esi + VALUE]
#define SBB_R14B_FROM_PTR_EBP_(VALUE) sbb r14b, byte ptr [ebp + VALUE]
#define SBB_R14B_FROM_PTR_ESP_(VALUE) sbb r14b, byte ptr [esp + VALUE]

#define SBB_R15B_FROM_PTR_RAX_(VALUE) sbb r15b, byte ptr [rax + VALUE]
#define SBB_R15B_FROM_PTR_RBX_(VALUE) sbb r15b, byte ptr [rbx + VALUE]
#define SBB_R15B_FROM_PTR_RCX_(VALUE) sbb r15b, byte ptr [rcx + VALUE]
#define SBB_R15B_FROM_PTR_RDX_(VALUE) sbb r15b, byte ptr [rdx + VALUE]
#define SBB_R15B_FROM_PTR_RDI_(VALUE) sbb r15b, byte ptr [rdi + VALUE]
#define SBB_R15B_FROM_PTR_RSI_(VALUE) sbb r15b, byte ptr [rsi + VALUE]
#define SBB_R15B_FROM_PTR_RBP_(VALUE) sbb r15b, byte ptr [rbp + VALUE]
#define SBB_R15B_FROM_PTR_RSP_(VALUE) sbb r15b, byte ptr [rsp + VALUE]
#define SBB_R15B_FROM_PTR_R8_(VALUE) sbb r15b, byte ptr [r8 + VALUE]
#define SBB_R15B_FROM_PTR_R9_(VALUE) sbb r15b, byte ptr [r9 + VALUE]
#define SBB_R15B_FROM_PTR_R10_(VALUE) sbb r15b, byte ptr [r10 + VALUE]
#define SBB_R15B_FROM_PTR_R11_(VALUE) sbb r15b, byte ptr [r11 + VALUE]
#define SBB_R15B_FROM_PTR_R12_(VALUE) sbb r15b, byte ptr [r12 + VALUE]
#define SBB_R15B_FROM_PTR_R13_(VALUE) sbb r15b, byte ptr [r13 + VALUE]
#define SBB_R15B_FROM_PTR_R14_(VALUE) sbb r15b, byte ptr [r14 + VALUE]
#define SBB_R15B_FROM_PTR_R15_(VALUE) sbb r15b, byte ptr [r15 + VALUE]
#define SBB_R15B_FROM_PTR_EAX_(VALUE) sbb r15b, byte ptr [eax + VALUE]
#define SBB_R15B_FROM_PTR_EBX_(VALUE) sbb r15b, byte ptr [ebx + VALUE]
#define SBB_R15B_FROM_PTR_ECX_(VALUE) sbb r15b, byte ptr [ecx + VALUE]
#define SBB_R15B_FROM_PTR_EDX_(VALUE) sbb r15b, byte ptr [edx + VALUE]
#define SBB_R15B_FROM_PTR_EDI_(VALUE) sbb r15b, byte ptr [edi + VALUE]
#define SBB_R15B_FROM_PTR_ESI_(VALUE) sbb r15b, byte ptr [esi + VALUE]
#define SBB_R15B_FROM_PTR_EBP_(VALUE) sbb r15b, byte ptr [ebp + VALUE]
#define SBB_R15B_FROM_PTR_ESP_(VALUE) sbb r15b, byte ptr [esp + VALUE]

#define SBB_AL_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], al
#define SBB_AL_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], al
#define SBB_AL_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], al
#define SBB_AL_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], al
#define SBB_AL_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], al
#define SBB_AL_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], al
#define SBB_AL_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], al
#define SBB_AL_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], al
#define SBB_AL_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], al
#define SBB_AL_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], al
#define SBB_AL_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], al
#define SBB_AL_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], al
#define SBB_AL_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], al
#define SBB_AL_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], al
#define SBB_AL_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], al
#define SBB_AL_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], al
#define SBB_AL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], al
#define SBB_AL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], al
#define SBB_AL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], al
#define SBB_AL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], al
#define SBB_AL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], al
#define SBB_AL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], al
#define SBB_AL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], al
#define SBB_AL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], al

#define SBB_BL_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], bl
#define SBB_BL_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], bl
#define SBB_BL_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], bl
#define SBB_BL_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], bl
#define SBB_BL_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], bl
#define SBB_BL_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], bl
#define SBB_BL_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], bl
#define SBB_BL_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], bl
#define SBB_BL_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], bl
#define SBB_BL_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], bl
#define SBB_BL_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], bl
#define SBB_BL_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], bl
#define SBB_BL_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], bl
#define SBB_BL_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], bl
#define SBB_BL_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], bl
#define SBB_BL_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], bl
#define SBB_BL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], bl
#define SBB_BL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], bl
#define SBB_BL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], bl
#define SBB_BL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], bl
#define SBB_BL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], bl
#define SBB_BL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], bl
#define SBB_BL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], bl
#define SBB_BL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], bl

#define SBB_CL_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], cl
#define SBB_CL_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], cl
#define SBB_CL_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], cl
#define SBB_CL_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], cl
#define SBB_CL_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], cl
#define SBB_CL_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], cl
#define SBB_CL_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], cl
#define SBB_CL_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], cl
#define SBB_CL_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], cl
#define SBB_CL_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], cl
#define SBB_CL_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], cl
#define SBB_CL_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], cl
#define SBB_CL_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], cl
#define SBB_CL_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], cl
#define SBB_CL_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], cl
#define SBB_CL_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], cl
#define SBB_CL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], cl
#define SBB_CL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], cl
#define SBB_CL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], cl
#define SBB_CL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], cl
#define SBB_CL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], cl
#define SBB_CL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], cl
#define SBB_CL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], cl
#define SBB_CL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], cl

#define SBB_DL_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], dl
#define SBB_DL_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], dl
#define SBB_DL_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], dl
#define SBB_DL_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], dl
#define SBB_DL_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], dl
#define SBB_DL_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], dl
#define SBB_DL_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], dl
#define SBB_DL_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], dl
#define SBB_DL_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], dl
#define SBB_DL_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], dl
#define SBB_DL_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], dl
#define SBB_DL_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], dl
#define SBB_DL_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], dl
#define SBB_DL_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], dl
#define SBB_DL_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], dl
#define SBB_DL_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], dl
#define SBB_DL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], dl
#define SBB_DL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], dl
#define SBB_DL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], dl
#define SBB_DL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], dl
#define SBB_DL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], dl
#define SBB_DL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], dl
#define SBB_DL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], dl
#define SBB_DL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], dl

#define SBB_DIL_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], dil
#define SBB_DIL_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], dil
#define SBB_DIL_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], dil
#define SBB_DIL_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], dil
#define SBB_DIL_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], dil
#define SBB_DIL_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], dil
#define SBB_DIL_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], dil
#define SBB_DIL_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], dil
#define SBB_DIL_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], dil
#define SBB_DIL_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], dil
#define SBB_DIL_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], dil
#define SBB_DIL_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], dil
#define SBB_DIL_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], dil
#define SBB_DIL_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], dil
#define SBB_DIL_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], dil
#define SBB_DIL_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], dil
#define SBB_DIL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], dil
#define SBB_DIL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], dil
#define SBB_DIL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], dil
#define SBB_DIL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], dil
#define SBB_DIL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], dil
#define SBB_DIL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], dil
#define SBB_DIL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], dil
#define SBB_DIL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], dil

#define SBB_SIL_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], sil
#define SBB_SIL_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], sil
#define SBB_SIL_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], sil
#define SBB_SIL_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], sil
#define SBB_SIL_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], sil
#define SBB_SIL_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], sil
#define SBB_SIL_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], sil
#define SBB_SIL_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], sil
#define SBB_SIL_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], sil
#define SBB_SIL_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], sil
#define SBB_SIL_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], sil
#define SBB_SIL_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], sil
#define SBB_SIL_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], sil
#define SBB_SIL_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], sil
#define SBB_SIL_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], sil
#define SBB_SIL_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], sil
#define SBB_SIL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], sil
#define SBB_SIL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], sil
#define SBB_SIL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], sil
#define SBB_SIL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], sil
#define SBB_SIL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], sil
#define SBB_SIL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], sil
#define SBB_SIL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], sil
#define SBB_SIL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], sil

#define SBB_BPL_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], bpl
#define SBB_BPL_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], bpl
#define SBB_BPL_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], bpl
#define SBB_BPL_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], bpl
#define SBB_BPL_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], bpl
#define SBB_BPL_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], bpl
#define SBB_BPL_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], bpl
#define SBB_BPL_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], bpl
#define SBB_BPL_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], bpl
#define SBB_BPL_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], bpl
#define SBB_BPL_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], bpl
#define SBB_BPL_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], bpl
#define SBB_BPL_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], bpl
#define SBB_BPL_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], bpl
#define SBB_BPL_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], bpl
#define SBB_BPL_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], bpl
#define SBB_BPL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], bpl
#define SBB_BPL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], bpl
#define SBB_BPL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], bpl
#define SBB_BPL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], bpl
#define SBB_BPL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], bpl
#define SBB_BPL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], bpl
#define SBB_BPL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], bpl
#define SBB_BPL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], bpl

#define SBB_SPL_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], spl
#define SBB_SPL_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], spl
#define SBB_SPL_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], spl
#define SBB_SPL_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], spl
#define SBB_SPL_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], spl
#define SBB_SPL_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], spl
#define SBB_SPL_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], spl
#define SBB_SPL_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], spl
#define SBB_SPL_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], spl
#define SBB_SPL_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], spl
#define SBB_SPL_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], spl
#define SBB_SPL_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], spl
#define SBB_SPL_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], spl
#define SBB_SPL_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], spl
#define SBB_SPL_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], spl
#define SBB_SPL_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], spl
#define SBB_SPL_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], spl
#define SBB_SPL_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], spl
#define SBB_SPL_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], spl
#define SBB_SPL_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], spl
#define SBB_SPL_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], spl
#define SBB_SPL_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], spl
#define SBB_SPL_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], spl
#define SBB_SPL_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], spl

#define SBB_R8B_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], r8b
#define SBB_R8B_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], r8b
#define SBB_R8B_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], r8b
#define SBB_R8B_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], r8b
#define SBB_R8B_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], r8b
#define SBB_R8B_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], r8b
#define SBB_R8B_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], r8b
#define SBB_R8B_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], r8b
#define SBB_R8B_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], r8b
#define SBB_R8B_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], r8b
#define SBB_R8B_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], r8b
#define SBB_R8B_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], r8b
#define SBB_R8B_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], r8b
#define SBB_R8B_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], r8b
#define SBB_R8B_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], r8b
#define SBB_R8B_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], r8b
#define SBB_R8B_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], r8b
#define SBB_R8B_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], r8b
#define SBB_R8B_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], r8b
#define SBB_R8B_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], r8b
#define SBB_R8B_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], r8b
#define SBB_R8B_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], r8b
#define SBB_R8B_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], r8b
#define SBB_R8B_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], r8b

#define SBB_R9B_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], r9b
#define SBB_R9B_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], r9b
#define SBB_R9B_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], r9b
#define SBB_R9B_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], r9b
#define SBB_R9B_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], r9b
#define SBB_R9B_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], r9b
#define SBB_R9B_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], r9b
#define SBB_R9B_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], r9b
#define SBB_R9B_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], r9b
#define SBB_R9B_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], r9b
#define SBB_R9B_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], r9b
#define SBB_R9B_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], r9b
#define SBB_R9B_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], r9b
#define SBB_R9B_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], r9b
#define SBB_R9B_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], r9b
#define SBB_R9B_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], r9b
#define SBB_R9B_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], r9b
#define SBB_R9B_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], r9b
#define SBB_R9B_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], r9b
#define SBB_R9B_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], r9b
#define SBB_R9B_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], r9b
#define SBB_R9B_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], r9b
#define SBB_R9B_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], r9b
#define SBB_R9B_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], r9b

#define SBB_R10B_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], r10b
#define SBB_R10B_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], r10b
#define SBB_R10B_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], r10b
#define SBB_R10B_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], r10b
#define SBB_R10B_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], r10b
#define SBB_R10B_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], r10b
#define SBB_R10B_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], r10b
#define SBB_R10B_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], r10b
#define SBB_R10B_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], r10b
#define SBB_R10B_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], r10b
#define SBB_R10B_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], r10b
#define SBB_R10B_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], r10b
#define SBB_R10B_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], r10b
#define SBB_R10B_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], r10b
#define SBB_R10B_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], r10b
#define SBB_R10B_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], r10b
#define SBB_R10B_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], r10b
#define SBB_R10B_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], r10b
#define SBB_R10B_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], r10b
#define SBB_R10B_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], r10b
#define SBB_R10B_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], r10b
#define SBB_R10B_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], r10b
#define SBB_R10B_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], r10b
#define SBB_R10B_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], r10b

#define SBB_R11B_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], r11b
#define SBB_R11B_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], r11b
#define SBB_R11B_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], r11b
#define SBB_R11B_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], r11b
#define SBB_R11B_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], r11b
#define SBB_R11B_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], r11b
#define SBB_R11B_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], r11b
#define SBB_R11B_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], r11b
#define SBB_R11B_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], r11b
#define SBB_R11B_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], r11b
#define SBB_R11B_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], r11b
#define SBB_R11B_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], r11b
#define SBB_R11B_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], r11b
#define SBB_R11B_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], r11b
#define SBB_R11B_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], r11b
#define SBB_R11B_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], r11b
#define SBB_R11B_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], r11b
#define SBB_R11B_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], r11b
#define SBB_R11B_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], r11b
#define SBB_R11B_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], r11b
#define SBB_R11B_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], r11b
#define SBB_R11B_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], r11b
#define SBB_R11B_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], r11b
#define SBB_R11B_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], r11b

#define SBB_R12B_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], r12b
#define SBB_R12B_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], r12b
#define SBB_R12B_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], r12b
#define SBB_R12B_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], r12b
#define SBB_R12B_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], r12b
#define SBB_R12B_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], r12b
#define SBB_R12B_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], r12b
#define SBB_R12B_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], r12b
#define SBB_R12B_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], r12b
#define SBB_R12B_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], r12b
#define SBB_R12B_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], r12b
#define SBB_R12B_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], r12b
#define SBB_R12B_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], r12b
#define SBB_R12B_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], r12b
#define SBB_R12B_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], r12b
#define SBB_R12B_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], r12b
#define SBB_R12B_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], r12b
#define SBB_R12B_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], r12b
#define SBB_R12B_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], r12b
#define SBB_R12B_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], r12b
#define SBB_R12B_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], r12b
#define SBB_R12B_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], r12b
#define SBB_R12B_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], r12b
#define SBB_R12B_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], r12b

#define SBB_R13B_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], r13b
#define SBB_R13B_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], r13b
#define SBB_R13B_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], r13b
#define SBB_R13B_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], r13b
#define SBB_R13B_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], r13b
#define SBB_R13B_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], r13b
#define SBB_R13B_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], r13b
#define SBB_R13B_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], r13b
#define SBB_R13B_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], r13b
#define SBB_R13B_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], r13b
#define SBB_R13B_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], r13b
#define SBB_R13B_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], r13b
#define SBB_R13B_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], r13b
#define SBB_R13B_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], r13b
#define SBB_R13B_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], r13b
#define SBB_R13B_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], r13b
#define SBB_R13B_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], r13b
#define SBB_R13B_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], r13b
#define SBB_R13B_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], r13b
#define SBB_R13B_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], r13b
#define SBB_R13B_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], r13b
#define SBB_R13B_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], r13b
#define SBB_R13B_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], r13b
#define SBB_R13B_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], r13b

#define SBB_R14B_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], r14b
#define SBB_R14B_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], r14b
#define SBB_R14B_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], r14b
#define SBB_R14B_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], r14b
#define SBB_R14B_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], r14b
#define SBB_R14B_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], r14b
#define SBB_R14B_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], r14b
#define SBB_R14B_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], r14b
#define SBB_R14B_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], r14b
#define SBB_R14B_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], r14b
#define SBB_R14B_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], r14b
#define SBB_R14B_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], r14b
#define SBB_R14B_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], r14b
#define SBB_R14B_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], r14b
#define SBB_R14B_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], r14b
#define SBB_R14B_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], r14b
#define SBB_R14B_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], r14b
#define SBB_R14B_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], r14b
#define SBB_R14B_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], r14b
#define SBB_R14B_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], r14b
#define SBB_R14B_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], r14b
#define SBB_R14B_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], r14b
#define SBB_R14B_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], r14b
#define SBB_R14B_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], r14b

#define SBB_R15B_TO_PTR_RAX_(VALUE) sbb byte ptr [rax + VALUE], r15b
#define SBB_R15B_TO_PTR_RBX_(VALUE) sbb byte ptr [rbx + VALUE], r15b
#define SBB_R15B_TO_PTR_RCX_(VALUE) sbb byte ptr [rcx + VALUE], r15b
#define SBB_R15B_TO_PTR_RDX_(VALUE) sbb byte ptr [rdx + VALUE], r15b
#define SBB_R15B_TO_PTR_RDI_(VALUE) sbb byte ptr [rdi + VALUE], r15b
#define SBB_R15B_TO_PTR_RSI_(VALUE) sbb byte ptr [rsi + VALUE], r15b
#define SBB_R15B_TO_PTR_RBP_(VALUE) sbb byte ptr [rbp + VALUE], r15b
#define SBB_R15B_TO_PTR_RSP_(VALUE) sbb byte ptr [rsp + VALUE], r15b
#define SBB_R15B_TO_PTR_R8_(VALUE) sbb byte ptr [r8 + VALUE], r15b
#define SBB_R15B_TO_PTR_R9_(VALUE) sbb byte ptr [r9 + VALUE], r15b
#define SBB_R15B_TO_PTR_R10_(VALUE) sbb byte ptr [r10 + VALUE], r15b
#define SBB_R15B_TO_PTR_R11_(VALUE) sbb byte ptr [r11 + VALUE], r15b
#define SBB_R15B_TO_PTR_R12_(VALUE) sbb byte ptr [r12 + VALUE], r15b
#define SBB_R15B_TO_PTR_R13_(VALUE) sbb byte ptr [r13 + VALUE], r15b
#define SBB_R15B_TO_PTR_R14_(VALUE) sbb byte ptr [r14 + VALUE], r15b
#define SBB_R15B_TO_PTR_R15_(VALUE) sbb byte ptr [r15 + VALUE], r15b
#define SBB_R15B_TO_PTR_EAX_(VALUE) sbb byte ptr [eax + VALUE], r15b
#define SBB_R15B_TO_PTR_EBX_(VALUE) sbb byte ptr [ebx + VALUE], r15b
#define SBB_R15B_TO_PTR_ECX_(VALUE) sbb byte ptr [ecx + VALUE], r15b
#define SBB_R15B_TO_PTR_EDX_(VALUE) sbb byte ptr [edx + VALUE], r15b
#define SBB_R15B_TO_PTR_EDI_(VALUE) sbb byte ptr [edi + VALUE], r15b
#define SBB_R15B_TO_PTR_ESI_(VALUE) sbb byte ptr [esi + VALUE], r15b
#define SBB_R15B_TO_PTR_EBP_(VALUE) sbb byte ptr [ebp + VALUE], r15b
#define SBB_R15B_TO_PTR_ESP_(VALUE) sbb byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define SBB_AX_FROM_PTR_(VALUE) sbb ax, word ptr [VALUE]
#define SBB_BX_FROM_PTR_(VALUE) sbb bx, word ptr [VALUE]
#define SBB_CX_FROM_PTR_(VALUE) sbb cx, word ptr [VALUE]
#define SBB_DX_FROM_PTR_(VALUE) sbb dx, word ptr [VALUE]
#define SBB_DI_FROM_PTR_(VALUE) sbb di, word ptr [VALUE]
#define SBB_SI_FROM_PTR_(VALUE) sbb si, word ptr [VALUE]
#define SBB_BP_FROM_PTR_(VALUE) sbb bp, word ptr [VALUE]
#define SBB_SP_FROM_PTR_(VALUE) sbb sp, word ptr [VALUE]

#define SBB_AX_TO_PTR_(VALUE) sbb word ptr [VALUE], ax
#define SBB_BX_TO_PTR_(VALUE) sbb word ptr [VALUE], bx
#define SBB_CX_TO_PTR_(VALUE) sbb word ptr [VALUE], cx
#define SBB_DX_TO_PTR_(VALUE) sbb word ptr [VALUE], dx
#define SBB_DI_TO_PTR_(VALUE) sbb word ptr [VALUE], di
#define SBB_SI_TO_PTR_(VALUE) sbb word ptr [VALUE], si
#define SBB_BP_TO_PTR_(VALUE) sbb word ptr [VALUE], bp
#define SBB_SP_TO_PTR_(VALUE) sbb word ptr [VALUE], sp

#define SBB_AX_FROM_PTR_BX sbb ax, word ptr [bx]
#define SBB_AX_FROM_PTR_BP sbb ax, word ptr [bp]
#define SBB_AX_FROM_PTR_SI sbb ax, word ptr [si]
#define SBB_AX_FROM_PTR_DI sbb ax, word ptr [di]

#define SBB_BX_FROM_PTR_BX sbb bx, word ptr [bx]
#define SBB_BX_FROM_PTR_BP sbb bx, word ptr [bp]
#define SBB_BX_FROM_PTR_SI sbb bx, word ptr [si]
#define SBB_BX_FROM_PTR_DI sbb bx, word ptr [di]

#define SBB_CX_FROM_PTR_BX sbb cx, word ptr [bx]
#define SBB_CX_FROM_PTR_BP sbb cx, word ptr [bp]
#define SBB_CX_FROM_PTR_SI sbb cx, word ptr [si]
#define SBB_CX_FROM_PTR_DI sbb cx, word ptr [di]

#define SBB_DX_FROM_PTR_BX sbb dx, word ptr [bx]
#define SBB_DX_FROM_PTR_BP sbb dx, word ptr [bp]
#define SBB_DX_FROM_PTR_SI sbb dx, word ptr [si]
#define SBB_DX_FROM_PTR_DI sbb dx, word ptr [di]

#define SBB_DI_FROM_PTR_BX sbb di, word ptr [bx]
#define SBB_DI_FROM_PTR_BP sbb di, word ptr [bp]
#define SBB_DI_FROM_PTR_SI sbb di, word ptr [si]
#define SBB_DI_FROM_PTR_DI sbb di, word ptr [di]

#define SBB_SI_FROM_PTR_BX sbb si, word ptr [bx]
#define SBB_SI_FROM_PTR_BP sbb si, word ptr [bp]
#define SBB_SI_FROM_PTR_SI sbb si, word ptr [si]
#define SBB_SI_FROM_PTR_DI sbb si, word ptr [di]

#define SBB_BP_FROM_PTR_BX sbb bp, word ptr [bx]
#define SBB_BP_FROM_PTR_BP sbb bp, word ptr [bp]
#define SBB_BP_FROM_PTR_SI sbb bp, word ptr [si]
#define SBB_BP_FROM_PTR_DI sbb bp, word ptr [di]

#define SBB_SP_FROM_PTR_BX sbb sp, word ptr [bx]
#define SBB_SP_FROM_PTR_BP sbb sp, word ptr [bp]
#define SBB_SP_FROM_PTR_SI sbb sp, word ptr [si]
#define SBB_SP_FROM_PTR_DI sbb sp, word ptr [di]

#define SBB_AX_TO_PTR_BX sbb word ptr [bx], ax
#define SBB_AX_TO_PTR_BP sbb word ptr [bp], ax
#define SBB_AX_TO_PTR_SI sbb word ptr [si], ax
#define SBB_AX_TO_PTR_DI sbb word ptr [di], ax

#define SBB_BX_TO_PTR_BX sbb word ptr [bx], bx
#define SBB_BX_TO_PTR_BP sbb word ptr [bp], bx
#define SBB_BX_TO_PTR_SI sbb word ptr [si], bx
#define SBB_BX_TO_PTR_DI sbb word ptr [di], bx

#define SBB_CX_TO_PTR_BX sbb word ptr [bx], cx
#define SBB_CX_TO_PTR_BP sbb word ptr [bp], cx
#define SBB_CX_TO_PTR_SI sbb word ptr [si], cx
#define SBB_CX_TO_PTR_DI sbb word ptr [di], cx

#define SBB_DX_TO_PTR_BX sbb word ptr [bx], dx
#define SBB_DX_TO_PTR_BP sbb word ptr [bp], dx
#define SBB_DX_TO_PTR_SI sbb word ptr [si], dx
#define SBB_DX_TO_PTR_DI sbb word ptr [di], dx

#define SBB_DI_TO_PTR_BX sbb word ptr [bx], di
#define SBB_DI_TO_PTR_BP sbb word ptr [bp], di
#define SBB_DI_TO_PTR_SI sbb word ptr [si], di
#define SBB_DI_TO_PTR_DI sbb word ptr [di], di

#define SBB_SI_TO_PTR_BX sbb word ptr [bx], si
#define SBB_SI_TO_PTR_BP sbb word ptr [bp], si
#define SBB_SI_TO_PTR_SI sbb word ptr [si], si
#define SBB_SI_TO_PTR_DI sbb word ptr [di], si

#define SBB_BP_TO_PTR_BX sbb word ptr [bx], bp
#define SBB_BP_TO_PTR_BP sbb word ptr [bp], bp
#define SBB_BP_TO_PTR_SI sbb word ptr [si], bp
#define SBB_BP_TO_PTR_DI sbb word ptr [di], bp

#define SBB_SP_TO_PTR_BX sbb word ptr [bx], sp
#define SBB_SP_TO_PTR_BP sbb word ptr [bp], sp
#define SBB_SP_TO_PTR_SI sbb word ptr [si], sp
#define SBB_SP_TO_PTR_DI sbb word ptr [di], sp

#define SBB_AX_FROM_PTR_BX_(VALUE) sbb ax, word ptr [bx + VALUE]
#define SBB_AX_FROM_PTR_BP_(VALUE) sbb ax, word ptr [bp + VALUE]
#define SBB_AX_FROM_PTR_SI_(VALUE) sbb ax, word ptr [si + VALUE]
#define SBB_AX_FROM_PTR_DI_(VALUE) sbb ax, word ptr [di + VALUE]

#define SBB_BX_FROM_PTR_BX_(VALUE) sbb bx, word ptr [bx + VALUE]
#define SBB_BX_FROM_PTR_BP_(VALUE) sbb bx, word ptr [bp + VALUE]
#define SBB_BX_FROM_PTR_SI_(VALUE) sbb bx, word ptr [si + VALUE]
#define SBB_BX_FROM_PTR_DI_(VALUE) sbb bx, word ptr [di + VALUE]

#define SBB_CX_FROM_PTR_BX_(VALUE) sbb cx, word ptr [bx + VALUE]
#define SBB_CX_FROM_PTR_BP_(VALUE) sbb cx, word ptr [bp + VALUE]
#define SBB_CX_FROM_PTR_SI_(VALUE) sbb cx, word ptr [si + VALUE]
#define SBB_CX_FROM_PTR_DI_(VALUE) sbb cx, word ptr [di + VALUE]

#define SBB_DX_FROM_PTR_BX_(VALUE) sbb dx, word ptr [bx + VALUE]
#define SBB_DX_FROM_PTR_BP_(VALUE) sbb dx, word ptr [bp + VALUE]
#define SBB_DX_FROM_PTR_SI_(VALUE) sbb dx, word ptr [si + VALUE]
#define SBB_DX_FROM_PTR_DI_(VALUE) sbb dx, word ptr [di + VALUE]

#define SBB_DI_FROM_PTR_BX_(VALUE) sbb di, word ptr [bx + VALUE]
#define SBB_DI_FROM_PTR_BP_(VALUE) sbb di, word ptr [bp + VALUE]
#define SBB_DI_FROM_PTR_SI_(VALUE) sbb di, word ptr [si + VALUE]
#define SBB_DI_FROM_PTR_DI_(VALUE) sbb di, word ptr [di + VALUE]

#define SBB_SI_FROM_PTR_BX_(VALUE) sbb si, word ptr [bx + VALUE]
#define SBB_SI_FROM_PTR_BP_(VALUE) sbb si, word ptr [bp + VALUE]
#define SBB_SI_FROM_PTR_SI_(VALUE) sbb si, word ptr [si + VALUE]
#define SBB_SI_FROM_PTR_DI_(VALUE) sbb si, word ptr [di + VALUE]

#define SBB_BP_FROM_PTR_BX_(VALUE) sbb bp, word ptr [bx + VALUE]
#define SBB_BP_FROM_PTR_BP_(VALUE) sbb bp, word ptr [bp + VALUE]
#define SBB_BP_FROM_PTR_SI_(VALUE) sbb bp, word ptr [si + VALUE]
#define SBB_BP_FROM_PTR_DI_(VALUE) sbb bp, word ptr [di + VALUE]

#define SBB_SP_FROM_PTR_BX_(VALUE) sbb sp, word ptr [bx + VALUE]
#define SBB_SP_FROM_PTR_BP_(VALUE) sbb sp, word ptr [bp + VALUE]
#define SBB_SP_FROM_PTR_SI_(VALUE) sbb sp, word ptr [si + VALUE]
#define SBB_SP_FROM_PTR_DI_(VALUE) sbb sp, word ptr [di + VALUE]

#define SBB_AX_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], ax
#define SBB_AX_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], ax
#define SBB_AX_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], ax
#define SBB_AX_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], ax

#define SBB_BX_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], bx
#define SBB_BX_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], bx
#define SBB_BX_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], bx
#define SBB_BX_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], bx

#define SBB_CX_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], cx
#define SBB_CX_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], cx
#define SBB_CX_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], cx
#define SBB_CX_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], cx

#define SBB_DX_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], dx
#define SBB_DX_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], dx
#define SBB_DX_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], dx
#define SBB_DX_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], dx

#define SBB_DI_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], di
#define SBB_DI_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], di
#define SBB_DI_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], di
#define SBB_DI_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], di

#define SBB_SI_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], si
#define SBB_SI_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], si
#define SBB_SI_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], si
#define SBB_SI_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], si

#define SBB_BP_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], bp
#define SBB_BP_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], bp
#define SBB_BP_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], bp
#define SBB_BP_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], bp

#define SBB_SP_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], sp
#define SBB_SP_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], sp
#define SBB_SP_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], sp
#define SBB_SP_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SBB_AX_FROM_PTR_(VALUE) sbb ax, word ptr [VALUE]
#define SBB_BX_FROM_PTR_(VALUE) sbb bx, word ptr [VALUE]
#define SBB_CX_FROM_PTR_(VALUE) sbb cx, word ptr [VALUE]
#define SBB_DX_FROM_PTR_(VALUE) sbb dx, word ptr [VALUE]
#define SBB_DI_FROM_PTR_(VALUE) sbb di, word ptr [VALUE]
#define SBB_SI_FROM_PTR_(VALUE) sbb si, word ptr [VALUE]
#define SBB_BP_FROM_PTR_(VALUE) sbb bp, word ptr [VALUE]
#define SBB_SP_FROM_PTR_(VALUE) sbb sp, word ptr [VALUE]

#define SBB_AX_TO_PTR_(VALUE) sbb word ptr [VALUE], ax
#define SBB_BX_TO_PTR_(VALUE) sbb word ptr [VALUE], bx
#define SBB_CX_TO_PTR_(VALUE) sbb word ptr [VALUE], cx
#define SBB_DX_TO_PTR_(VALUE) sbb word ptr [VALUE], dx
#define SBB_DI_TO_PTR_(VALUE) sbb word ptr [VALUE], di
#define SBB_SI_TO_PTR_(VALUE) sbb word ptr [VALUE], si
#define SBB_BP_TO_PTR_(VALUE) sbb word ptr [VALUE], bp
#define SBB_SP_TO_PTR_(VALUE) sbb word ptr [VALUE], sp

#define SBB_AX_FROM_PTR_EAX sbb ax, word ptr [eax]
#define SBB_AX_FROM_PTR_EBX sbb ax, word ptr [ebx]
#define SBB_AX_FROM_PTR_ECX sbb ax, word ptr [ecx]
#define SBB_AX_FROM_PTR_EDX sbb ax, word ptr [edx]
#define SBB_AX_FROM_PTR_EDI sbb ax, word ptr [edi]
#define SBB_AX_FROM_PTR_ESI sbb ax, word ptr [esi]
#define SBB_AX_FROM_PTR_EBP sbb ax, word ptr [ebp]
#define SBB_AX_FROM_PTR_ESP sbb ax, word ptr [esp]
#define SBB_AX_FROM_PTR_BX sbb ax, word ptr [bx]
#define SBB_AX_FROM_PTR_BP sbb ax, word ptr [bp]
#define SBB_AX_FROM_PTR_SI sbb ax, word ptr [si]
#define SBB_AX_FROM_PTR_DI sbb ax, word ptr [di]

#define SBB_BX_FROM_PTR_EAX sbb bx, word ptr [eax]
#define SBB_BX_FROM_PTR_EBX sbb bx, word ptr [ebx]
#define SBB_BX_FROM_PTR_ECX sbb bx, word ptr [ecx]
#define SBB_BX_FROM_PTR_EDX sbb bx, word ptr [edx]
#define SBB_BX_FROM_PTR_EDI sbb bx, word ptr [edi]
#define SBB_BX_FROM_PTR_ESI sbb bx, word ptr [esi]
#define SBB_BX_FROM_PTR_EBP sbb bx, word ptr [ebp]
#define SBB_BX_FROM_PTR_ESP sbb bx, word ptr [esp]
#define SBB_BX_FROM_PTR_BX sbb bx, word ptr [bx]
#define SBB_BX_FROM_PTR_BP sbb bx, word ptr [bp]
#define SBB_BX_FROM_PTR_SI sbb bx, word ptr [si]
#define SBB_BX_FROM_PTR_DI sbb bx, word ptr [di]

#define SBB_CX_FROM_PTR_EAX sbb cx, word ptr [eax]
#define SBB_CX_FROM_PTR_EBX sbb cx, word ptr [ebx]
#define SBB_CX_FROM_PTR_ECX sbb cx, word ptr [ecx]
#define SBB_CX_FROM_PTR_EDX sbb cx, word ptr [edx]
#define SBB_CX_FROM_PTR_EDI sbb cx, word ptr [edi]
#define SBB_CX_FROM_PTR_ESI sbb cx, word ptr [esi]
#define SBB_CX_FROM_PTR_EBP sbb cx, word ptr [ebp]
#define SBB_CX_FROM_PTR_ESP sbb cx, word ptr [esp]
#define SBB_CX_FROM_PTR_BX sbb cx, word ptr [bx]
#define SBB_CX_FROM_PTR_BP sbb cx, word ptr [bp]
#define SBB_CX_FROM_PTR_SI sbb cx, word ptr [si]
#define SBB_CX_FROM_PTR_DI sbb cx, word ptr [di]

#define SBB_DX_FROM_PTR_EAX sbb dx, word ptr [eax]
#define SBB_DX_FROM_PTR_EBX sbb dx, word ptr [ebx]
#define SBB_DX_FROM_PTR_ECX sbb dx, word ptr [ecx]
#define SBB_DX_FROM_PTR_EDX sbb dx, word ptr [edx]
#define SBB_DX_FROM_PTR_EDI sbb dx, word ptr [edi]
#define SBB_DX_FROM_PTR_ESI sbb dx, word ptr [esi]
#define SBB_DX_FROM_PTR_EBP sbb dx, word ptr [ebp]
#define SBB_DX_FROM_PTR_ESP sbb dx, word ptr [esp]
#define SBB_DX_FROM_PTR_BX sbb dx, word ptr [bx]
#define SBB_DX_FROM_PTR_BP sbb dx, word ptr [bp]
#define SBB_DX_FROM_PTR_SI sbb dx, word ptr [si]
#define SBB_DX_FROM_PTR_DI sbb dx, word ptr [di]

#define SBB_DI_FROM_PTR_EAX sbb di, word ptr [eax]
#define SBB_DI_FROM_PTR_EBX sbb di, word ptr [ebx]
#define SBB_DI_FROM_PTR_ECX sbb di, word ptr [ecx]
#define SBB_DI_FROM_PTR_EDX sbb di, word ptr [edx]
#define SBB_DI_FROM_PTR_EDI sbb di, word ptr [edi]
#define SBB_DI_FROM_PTR_ESI sbb di, word ptr [esi]
#define SBB_DI_FROM_PTR_EBP sbb di, word ptr [ebp]
#define SBB_DI_FROM_PTR_ESP sbb di, word ptr [esp]
#define SBB_DI_FROM_PTR_BX sbb di, word ptr [bx]
#define SBB_DI_FROM_PTR_BP sbb di, word ptr [bp]
#define SBB_DI_FROM_PTR_SI sbb di, word ptr [si]
#define SBB_DI_FROM_PTR_DI sbb di, word ptr [di]

#define SBB_SI_FROM_PTR_EAX sbb si, word ptr [eax]
#define SBB_SI_FROM_PTR_EBX sbb si, word ptr [ebx]
#define SBB_SI_FROM_PTR_ECX sbb si, word ptr [ecx]
#define SBB_SI_FROM_PTR_EDX sbb si, word ptr [edx]
#define SBB_SI_FROM_PTR_EDI sbb si, word ptr [edi]
#define SBB_SI_FROM_PTR_ESI sbb si, word ptr [esi]
#define SBB_SI_FROM_PTR_EBP sbb si, word ptr [ebp]
#define SBB_SI_FROM_PTR_ESP sbb si, word ptr [esp]
#define SBB_SI_FROM_PTR_BX sbb si, word ptr [bx]
#define SBB_SI_FROM_PTR_BP sbb si, word ptr [bp]
#define SBB_SI_FROM_PTR_SI sbb si, word ptr [si]
#define SBB_SI_FROM_PTR_DI sbb si, word ptr [di]

#define SBB_BP_FROM_PTR_EAX sbb bp, word ptr [eax]
#define SBB_BP_FROM_PTR_EBX sbb bp, word ptr [ebx]
#define SBB_BP_FROM_PTR_ECX sbb bp, word ptr [ecx]
#define SBB_BP_FROM_PTR_EDX sbb bp, word ptr [edx]
#define SBB_BP_FROM_PTR_EDI sbb bp, word ptr [edi]
#define SBB_BP_FROM_PTR_ESI sbb bp, word ptr [esi]
#define SBB_BP_FROM_PTR_EBP sbb bp, word ptr [ebp]
#define SBB_BP_FROM_PTR_ESP sbb bp, word ptr [esp]
#define SBB_BP_FROM_PTR_BX sbb bp, word ptr [bx]
#define SBB_BP_FROM_PTR_BP sbb bp, word ptr [bp]
#define SBB_BP_FROM_PTR_SI sbb bp, word ptr [si]
#define SBB_BP_FROM_PTR_DI sbb bp, word ptr [di]

#define SBB_SP_FROM_PTR_EAX sbb sp, word ptr [eax]
#define SBB_SP_FROM_PTR_EBX sbb sp, word ptr [ebx]
#define SBB_SP_FROM_PTR_ECX sbb sp, word ptr [ecx]
#define SBB_SP_FROM_PTR_EDX sbb sp, word ptr [edx]
#define SBB_SP_FROM_PTR_EDI sbb sp, word ptr [edi]
#define SBB_SP_FROM_PTR_ESI sbb sp, word ptr [esi]
#define SBB_SP_FROM_PTR_EBP sbb sp, word ptr [ebp]
#define SBB_SP_FROM_PTR_ESP sbb sp, word ptr [esp]
#define SBB_SP_FROM_PTR_BX sbb sp, word ptr [bx]
#define SBB_SP_FROM_PTR_BP sbb sp, word ptr [bp]
#define SBB_SP_FROM_PTR_SI sbb sp, word ptr [si]
#define SBB_SP_FROM_PTR_DI sbb sp, word ptr [di]

#define SBB_AX_TO_PTR_EAX sbb word ptr [eax], ax
#define SBB_AX_TO_PTR_EBX sbb word ptr [ebx], ax
#define SBB_AX_TO_PTR_ECX sbb word ptr [ecx], ax
#define SBB_AX_TO_PTR_EDX sbb word ptr [edx], ax
#define SBB_AX_TO_PTR_EDI sbb word ptr [edi], ax
#define SBB_AX_TO_PTR_ESI sbb word ptr [esi], ax
#define SBB_AX_TO_PTR_EBP sbb word ptr [ebp], ax
#define SBB_AX_TO_PTR_ESP sbb word ptr [esp], ax
#define SBB_AX_TO_PTR_BX sbb word ptr [bx], ax
#define SBB_AX_TO_PTR_BP sbb word ptr [bp], ax
#define SBB_AX_TO_PTR_SI sbb word ptr [si], ax
#define SBB_AX_TO_PTR_DI sbb word ptr [di], ax

#define SBB_BX_TO_PTR_EAX sbb word ptr [eax], bx
#define SBB_BX_TO_PTR_EBX sbb word ptr [ebx], bx
#define SBB_BX_TO_PTR_ECX sbb word ptr [ecx], bx
#define SBB_BX_TO_PTR_EDX sbb word ptr [edx], bx
#define SBB_BX_TO_PTR_EDI sbb word ptr [edi], bx
#define SBB_BX_TO_PTR_ESI sbb word ptr [esi], bx
#define SBB_BX_TO_PTR_EBP sbb word ptr [ebp], bx
#define SBB_BX_TO_PTR_ESP sbb word ptr [esp], bx
#define SBB_BX_TO_PTR_BX sbb word ptr [bx], bx
#define SBB_BX_TO_PTR_BP sbb word ptr [bp], bx
#define SBB_BX_TO_PTR_SI sbb word ptr [si], bx
#define SBB_BX_TO_PTR_DI sbb word ptr [di], bx

#define SBB_CX_TO_PTR_EAX sbb word ptr [eax], cx
#define SBB_CX_TO_PTR_EBX sbb word ptr [ebx], cx
#define SBB_CX_TO_PTR_ECX sbb word ptr [ecx], cx
#define SBB_CX_TO_PTR_EDX sbb word ptr [edx], cx
#define SBB_CX_TO_PTR_EDI sbb word ptr [edi], cx
#define SBB_CX_TO_PTR_ESI sbb word ptr [esi], cx
#define SBB_CX_TO_PTR_EBP sbb word ptr [ebp], cx
#define SBB_CX_TO_PTR_ESP sbb word ptr [esp], cx
#define SBB_CX_TO_PTR_BX sbb word ptr [bx], cx
#define SBB_CX_TO_PTR_BP sbb word ptr [bp], cx
#define SBB_CX_TO_PTR_SI sbb word ptr [si], cx
#define SBB_CX_TO_PTR_DI sbb word ptr [di], cx

#define SBB_DX_TO_PTR_EAX sbb word ptr [eax], dx
#define SBB_DX_TO_PTR_EBX sbb word ptr [ebx], dx
#define SBB_DX_TO_PTR_ECX sbb word ptr [ecx], dx
#define SBB_DX_TO_PTR_EDX sbb word ptr [edx], dx
#define SBB_DX_TO_PTR_EDI sbb word ptr [edi], dx
#define SBB_DX_TO_PTR_ESI sbb word ptr [esi], dx
#define SBB_DX_TO_PTR_EBP sbb word ptr [ebp], dx
#define SBB_DX_TO_PTR_ESP sbb word ptr [esp], dx
#define SBB_DX_TO_PTR_BX sbb word ptr [bx], dx
#define SBB_DX_TO_PTR_BP sbb word ptr [bp], dx
#define SBB_DX_TO_PTR_SI sbb word ptr [si], dx
#define SBB_DX_TO_PTR_DI sbb word ptr [di], dx

#define SBB_DI_TO_PTR_EAX sbb word ptr [eax], di
#define SBB_DI_TO_PTR_EBX sbb word ptr [ebx], di
#define SBB_DI_TO_PTR_ECX sbb word ptr [ecx], di
#define SBB_DI_TO_PTR_EDX sbb word ptr [edx], di
#define SBB_DI_TO_PTR_EDI sbb word ptr [edi], di
#define SBB_DI_TO_PTR_ESI sbb word ptr [esi], di
#define SBB_DI_TO_PTR_EBP sbb word ptr [ebp], di
#define SBB_DI_TO_PTR_ESP sbb word ptr [esp], di
#define SBB_DI_TO_PTR_BX sbb word ptr [bx], di
#define SBB_DI_TO_PTR_BP sbb word ptr [bp], di
#define SBB_DI_TO_PTR_SI sbb word ptr [si], di
#define SBB_DI_TO_PTR_DI sbb word ptr [di], di

#define SBB_SI_TO_PTR_EAX sbb word ptr [eax], si
#define SBB_SI_TO_PTR_EBX sbb word ptr [ebx], si
#define SBB_SI_TO_PTR_ECX sbb word ptr [ecx], si
#define SBB_SI_TO_PTR_EDX sbb word ptr [edx], si
#define SBB_SI_TO_PTR_EDI sbb word ptr [edi], si
#define SBB_SI_TO_PTR_ESI sbb word ptr [esi], si
#define SBB_SI_TO_PTR_EBP sbb word ptr [ebp], si
#define SBB_SI_TO_PTR_ESP sbb word ptr [esp], si
#define SBB_SI_TO_PTR_BX sbb word ptr [bx], si
#define SBB_SI_TO_PTR_BP sbb word ptr [bp], si
#define SBB_SI_TO_PTR_SI sbb word ptr [si], si
#define SBB_SI_TO_PTR_DI sbb word ptr [di], si

#define SBB_BP_TO_PTR_EAX sbb word ptr [eax], bp
#define SBB_BP_TO_PTR_EBX sbb word ptr [ebx], bp
#define SBB_BP_TO_PTR_ECX sbb word ptr [ecx], bp
#define SBB_BP_TO_PTR_EDX sbb word ptr [edx], bp
#define SBB_BP_TO_PTR_EDI sbb word ptr [edi], bp
#define SBB_BP_TO_PTR_ESI sbb word ptr [esi], bp
#define SBB_BP_TO_PTR_EBP sbb word ptr [ebp], bp
#define SBB_BP_TO_PTR_ESP sbb word ptr [esp], bp
#define SBB_BP_TO_PTR_BX sbb word ptr [bx], bp
#define SBB_BP_TO_PTR_BP sbb word ptr [bp], bp
#define SBB_BP_TO_PTR_SI sbb word ptr [si], bp
#define SBB_BP_TO_PTR_DI sbb word ptr [di], bp

#define SBB_SP_TO_PTR_EAX sbb word ptr [eax], sp
#define SBB_SP_TO_PTR_EBX sbb word ptr [ebx], sp
#define SBB_SP_TO_PTR_ECX sbb word ptr [ecx], sp
#define SBB_SP_TO_PTR_EDX sbb word ptr [edx], sp
#define SBB_SP_TO_PTR_EDI sbb word ptr [edi], sp
#define SBB_SP_TO_PTR_ESI sbb word ptr [esi], sp
#define SBB_SP_TO_PTR_EBP sbb word ptr [ebp], sp
#define SBB_SP_TO_PTR_ESP sbb word ptr [esp], sp
#define SBB_SP_TO_PTR_BX sbb word ptr [bx], sp
#define SBB_SP_TO_PTR_BP sbb word ptr [bp], sp
#define SBB_SP_TO_PTR_SI sbb word ptr [si], sp
#define SBB_SP_TO_PTR_DI sbb word ptr [di], sp

#define SBB_AX_FROM_PTR_EAX_(VALUE) sbb ax, word ptr [eax + VALUE]
#define SBB_AX_FROM_PTR_EBX_(VALUE) sbb ax, word ptr [ebx + VALUE]
#define SBB_AX_FROM_PTR_ECX_(VALUE) sbb ax, word ptr [ecx + VALUE]
#define SBB_AX_FROM_PTR_EDX_(VALUE) sbb ax, word ptr [edx + VALUE]
#define SBB_AX_FROM_PTR_EDI_(VALUE) sbb ax, word ptr [edi + VALUE]
#define SBB_AX_FROM_PTR_ESI_(VALUE) sbb ax, word ptr [esi + VALUE]
#define SBB_AX_FROM_PTR_EBP_(VALUE) sbb ax, word ptr [ebp + VALUE]
#define SBB_AX_FROM_PTR_ESP_(VALUE) sbb ax, word ptr [esp + VALUE]
#define SBB_AX_FROM_PTR_BX_(VALUE) sbb ax, word ptr [bx + VALUE]
#define SBB_AX_FROM_PTR_BP_(VALUE) sbb ax, word ptr [bp + VALUE]
#define SBB_AX_FROM_PTR_SI_(VALUE) sbb ax, word ptr [si + VALUE]
#define SBB_AX_FROM_PTR_DI_(VALUE) sbb ax, word ptr [di + VALUE]

#define SBB_BX_FROM_PTR_EAX_(VALUE) sbb bx, word ptr [eax + VALUE]
#define SBB_BX_FROM_PTR_EBX_(VALUE) sbb bx, word ptr [ebx + VALUE]
#define SBB_BX_FROM_PTR_ECX_(VALUE) sbb bx, word ptr [ecx + VALUE]
#define SBB_BX_FROM_PTR_EDX_(VALUE) sbb bx, word ptr [edx + VALUE]
#define SBB_BX_FROM_PTR_EDI_(VALUE) sbb bx, word ptr [edi + VALUE]
#define SBB_BX_FROM_PTR_ESI_(VALUE) sbb bx, word ptr [esi + VALUE]
#define SBB_BX_FROM_PTR_EBP_(VALUE) sbb bx, word ptr [ebp + VALUE]
#define SBB_BX_FROM_PTR_ESP_(VALUE) sbb bx, word ptr [esp + VALUE]
#define SBB_BX_FROM_PTR_BX_(VALUE) sbb bx, word ptr [bx + VALUE]
#define SBB_BX_FROM_PTR_BP_(VALUE) sbb bx, word ptr [bp + VALUE]
#define SBB_BX_FROM_PTR_SI_(VALUE) sbb bx, word ptr [si + VALUE]
#define SBB_BX_FROM_PTR_DI_(VALUE) sbb bx, word ptr [di + VALUE]

#define SBB_CX_FROM_PTR_EAX_(VALUE) sbb cx, word ptr [eax + VALUE]
#define SBB_CX_FROM_PTR_EBX_(VALUE) sbb cx, word ptr [ebx + VALUE]
#define SBB_CX_FROM_PTR_ECX_(VALUE) sbb cx, word ptr [ecx + VALUE]
#define SBB_CX_FROM_PTR_EDX_(VALUE) sbb cx, word ptr [edx + VALUE]
#define SBB_CX_FROM_PTR_EDI_(VALUE) sbb cx, word ptr [edi + VALUE]
#define SBB_CX_FROM_PTR_ESI_(VALUE) sbb cx, word ptr [esi + VALUE]
#define SBB_CX_FROM_PTR_EBP_(VALUE) sbb cx, word ptr [ebp + VALUE]
#define SBB_CX_FROM_PTR_ESP_(VALUE) sbb cx, word ptr [esp + VALUE]
#define SBB_CX_FROM_PTR_BX_(VALUE) sbb cx, word ptr [bx + VALUE]
#define SBB_CX_FROM_PTR_BP_(VALUE) sbb cx, word ptr [bp + VALUE]
#define SBB_CX_FROM_PTR_SI_(VALUE) sbb cx, word ptr [si + VALUE]
#define SBB_CX_FROM_PTR_DI_(VALUE) sbb cx, word ptr [di + VALUE]

#define SBB_DX_FROM_PTR_EAX_(VALUE) sbb dx, word ptr [eax + VALUE]
#define SBB_DX_FROM_PTR_EBX_(VALUE) sbb dx, word ptr [ebx + VALUE]
#define SBB_DX_FROM_PTR_ECX_(VALUE) sbb dx, word ptr [ecx + VALUE]
#define SBB_DX_FROM_PTR_EDX_(VALUE) sbb dx, word ptr [edx + VALUE]
#define SBB_DX_FROM_PTR_EDI_(VALUE) sbb dx, word ptr [edi + VALUE]
#define SBB_DX_FROM_PTR_ESI_(VALUE) sbb dx, word ptr [esi + VALUE]
#define SBB_DX_FROM_PTR_EBP_(VALUE) sbb dx, word ptr [ebp + VALUE]
#define SBB_DX_FROM_PTR_ESP_(VALUE) sbb dx, word ptr [esp + VALUE]
#define SBB_DX_FROM_PTR_BX_(VALUE) sbb dx, word ptr [bx + VALUE]
#define SBB_DX_FROM_PTR_BP_(VALUE) sbb dx, word ptr [bp + VALUE]
#define SBB_DX_FROM_PTR_SI_(VALUE) sbb dx, word ptr [si + VALUE]
#define SBB_DX_FROM_PTR_DI_(VALUE) sbb dx, word ptr [di + VALUE]

#define SBB_DI_FROM_PTR_EAX_(VALUE) sbb di, word ptr [eax + VALUE]
#define SBB_DI_FROM_PTR_EBX_(VALUE) sbb di, word ptr [ebx + VALUE]
#define SBB_DI_FROM_PTR_ECX_(VALUE) sbb di, word ptr [ecx + VALUE]
#define SBB_DI_FROM_PTR_EDX_(VALUE) sbb di, word ptr [edx + VALUE]
#define SBB_DI_FROM_PTR_EDI_(VALUE) sbb di, word ptr [edi + VALUE]
#define SBB_DI_FROM_PTR_ESI_(VALUE) sbb di, word ptr [esi + VALUE]
#define SBB_DI_FROM_PTR_EBP_(VALUE) sbb di, word ptr [ebp + VALUE]
#define SBB_DI_FROM_PTR_ESP_(VALUE) sbb di, word ptr [esp + VALUE]
#define SBB_DI_FROM_PTR_BX_(VALUE) sbb di, word ptr [bx + VALUE]
#define SBB_DI_FROM_PTR_BP_(VALUE) sbb di, word ptr [bp + VALUE]
#define SBB_DI_FROM_PTR_SI_(VALUE) sbb di, word ptr [si + VALUE]
#define SBB_DI_FROM_PTR_DI_(VALUE) sbb di, word ptr [di + VALUE]

#define SBB_SI_FROM_PTR_EAX_(VALUE) sbb si, word ptr [eax + VALUE]
#define SBB_SI_FROM_PTR_EBX_(VALUE) sbb si, word ptr [ebx + VALUE]
#define SBB_SI_FROM_PTR_ECX_(VALUE) sbb si, word ptr [ecx + VALUE]
#define SBB_SI_FROM_PTR_EDX_(VALUE) sbb si, word ptr [edx + VALUE]
#define SBB_SI_FROM_PTR_EDI_(VALUE) sbb si, word ptr [edi + VALUE]
#define SBB_SI_FROM_PTR_ESI_(VALUE) sbb si, word ptr [esi + VALUE]
#define SBB_SI_FROM_PTR_EBP_(VALUE) sbb si, word ptr [ebp + VALUE]
#define SBB_SI_FROM_PTR_ESP_(VALUE) sbb si, word ptr [esp + VALUE]
#define SBB_SI_FROM_PTR_BX_(VALUE) sbb si, word ptr [bx + VALUE]
#define SBB_SI_FROM_PTR_BP_(VALUE) sbb si, word ptr [bp + VALUE]
#define SBB_SI_FROM_PTR_SI_(VALUE) sbb si, word ptr [si + VALUE]
#define SBB_SI_FROM_PTR_DI_(VALUE) sbb si, word ptr [di + VALUE]

#define SBB_BP_FROM_PTR_EAX_(VALUE) sbb bp, word ptr [eax + VALUE]
#define SBB_BP_FROM_PTR_EBX_(VALUE) sbb bp, word ptr [ebx + VALUE]
#define SBB_BP_FROM_PTR_ECX_(VALUE) sbb bp, word ptr [ecx + VALUE]
#define SBB_BP_FROM_PTR_EDX_(VALUE) sbb bp, word ptr [edx + VALUE]
#define SBB_BP_FROM_PTR_EDI_(VALUE) sbb bp, word ptr [edi + VALUE]
#define SBB_BP_FROM_PTR_ESI_(VALUE) sbb bp, word ptr [esi + VALUE]
#define SBB_BP_FROM_PTR_EBP_(VALUE) sbb bp, word ptr [ebp + VALUE]
#define SBB_BP_FROM_PTR_ESP_(VALUE) sbb bp, word ptr [esp + VALUE]
#define SBB_BP_FROM_PTR_BX_(VALUE) sbb bp, word ptr [bx + VALUE]
#define SBB_BP_FROM_PTR_BP_(VALUE) sbb bp, word ptr [bp + VALUE]
#define SBB_BP_FROM_PTR_SI_(VALUE) sbb bp, word ptr [si + VALUE]
#define SBB_BP_FROM_PTR_DI_(VALUE) sbb bp, word ptr [di + VALUE]

#define SBB_SP_FROM_PTR_EAX_(VALUE) sbb sp, word ptr [eax + VALUE]
#define SBB_SP_FROM_PTR_EBX_(VALUE) sbb sp, word ptr [ebx + VALUE]
#define SBB_SP_FROM_PTR_ECX_(VALUE) sbb sp, word ptr [ecx + VALUE]
#define SBB_SP_FROM_PTR_EDX_(VALUE) sbb sp, word ptr [edx + VALUE]
#define SBB_SP_FROM_PTR_EDI_(VALUE) sbb sp, word ptr [edi + VALUE]
#define SBB_SP_FROM_PTR_ESI_(VALUE) sbb sp, word ptr [esi + VALUE]
#define SBB_SP_FROM_PTR_EBP_(VALUE) sbb sp, word ptr [ebp + VALUE]
#define SBB_SP_FROM_PTR_ESP_(VALUE) sbb sp, word ptr [esp + VALUE]
#define SBB_SP_FROM_PTR_BX_(VALUE) sbb sp, word ptr [bx + VALUE]
#define SBB_SP_FROM_PTR_BP_(VALUE) sbb sp, word ptr [bp + VALUE]
#define SBB_SP_FROM_PTR_SI_(VALUE) sbb sp, word ptr [si + VALUE]
#define SBB_SP_FROM_PTR_DI_(VALUE) sbb sp, word ptr [di + VALUE]

#define SBB_AX_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], ax
#define SBB_AX_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], ax
#define SBB_AX_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], ax
#define SBB_AX_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], ax
#define SBB_AX_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], ax
#define SBB_AX_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], ax
#define SBB_AX_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], ax
#define SBB_AX_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], ax
#define SBB_AX_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], ax
#define SBB_AX_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], ax
#define SBB_AX_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], ax
#define SBB_AX_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], ax

#define SBB_BX_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], bx
#define SBB_BX_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], bx
#define SBB_BX_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], bx
#define SBB_BX_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], bx
#define SBB_BX_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], bx
#define SBB_BX_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], bx
#define SBB_BX_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], bx
#define SBB_BX_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], bx
#define SBB_BX_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], bx
#define SBB_BX_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], bx
#define SBB_BX_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], bx
#define SBB_BX_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], bx

#define SBB_CX_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], cx
#define SBB_CX_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], cx
#define SBB_CX_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], cx
#define SBB_CX_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], cx
#define SBB_CX_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], cx
#define SBB_CX_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], cx
#define SBB_CX_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], cx
#define SBB_CX_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], cx
#define SBB_CX_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], cx
#define SBB_CX_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], cx
#define SBB_CX_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], cx
#define SBB_CX_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], cx

#define SBB_DX_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], dx
#define SBB_DX_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], dx
#define SBB_DX_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], dx
#define SBB_DX_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], dx
#define SBB_DX_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], dx
#define SBB_DX_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], dx
#define SBB_DX_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], dx
#define SBB_DX_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], dx
#define SBB_DX_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], dx
#define SBB_DX_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], dx
#define SBB_DX_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], dx
#define SBB_DX_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], dx

#define SBB_DI_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], di
#define SBB_DI_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], di
#define SBB_DI_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], di
#define SBB_DI_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], di
#define SBB_DI_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], di
#define SBB_DI_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], di
#define SBB_DI_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], di
#define SBB_DI_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], di
#define SBB_DI_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], di
#define SBB_DI_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], di
#define SBB_DI_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], di
#define SBB_DI_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], di

#define SBB_SI_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], si
#define SBB_SI_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], si
#define SBB_SI_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], si
#define SBB_SI_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], si
#define SBB_SI_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], si
#define SBB_SI_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], si
#define SBB_SI_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], si
#define SBB_SI_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], si
#define SBB_SI_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], si
#define SBB_SI_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], si
#define SBB_SI_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], si
#define SBB_SI_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], si

#define SBB_BP_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], bp
#define SBB_BP_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], bp
#define SBB_BP_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], bp
#define SBB_BP_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], bp
#define SBB_BP_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], bp
#define SBB_BP_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], bp
#define SBB_BP_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], bp
#define SBB_BP_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], bp
#define SBB_BP_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], bp
#define SBB_BP_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], bp
#define SBB_BP_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], bp
#define SBB_BP_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], bp

#define SBB_SP_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], sp
#define SBB_SP_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], sp
#define SBB_SP_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], sp
#define SBB_SP_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], sp
#define SBB_SP_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], sp
#define SBB_SP_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], sp
#define SBB_SP_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], sp
#define SBB_SP_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], sp
#define SBB_SP_TO_PTR_BX_(VALUE) sbb word ptr [bx + VALUE], sp
#define SBB_SP_TO_PTR_BP_(VALUE) sbb word ptr [bp + VALUE], sp
#define SBB_SP_TO_PTR_SI_(VALUE) sbb word ptr [si + VALUE], sp
#define SBB_SP_TO_PTR_DI_(VALUE) sbb word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_AX_FROM_PTR_(VALUE) sbb ax, word ptr [VALUE]
#define SBB_BX_FROM_PTR_(VALUE) sbb bx, word ptr [VALUE]
#define SBB_CX_FROM_PTR_(VALUE) sbb cx, word ptr [VALUE]
#define SBB_DX_FROM_PTR_(VALUE) sbb dx, word ptr [VALUE]
#define SBB_DI_FROM_PTR_(VALUE) sbb di, word ptr [VALUE]
#define SBB_SI_FROM_PTR_(VALUE) sbb si, word ptr [VALUE]
#define SBB_BP_FROM_PTR_(VALUE) sbb bp, word ptr [VALUE]
#define SBB_SP_FROM_PTR_(VALUE) sbb sp, word ptr [VALUE]
#define SBB_R8W_FROM_PTR_(VALUE) sbb r8w, word ptr [VALUE]
#define SBB_R9W_FROM_PTR_(VALUE) sbb r9w, word ptr [VALUE]
#define SBB_R10W_FROM_PTR_(VALUE) sbb r10w, word ptr [VALUE]
#define SBB_R11W_FROM_PTR_(VALUE) sbb r11w, word ptr [VALUE]
#define SBB_R12W_FROM_PTR_(VALUE) sbb r12w, word ptr [VALUE]
#define SBB_R13W_FROM_PTR_(VALUE) sbb r13w, word ptr [VALUE]
#define SBB_R14W_FROM_PTR_(VALUE) sbb r14w, word ptr [VALUE]
#define SBB_R15W_FROM_PTR_(VALUE) sbb r15w, word ptr [VALUE]

#define SBB_AX_TO_PTR_(VALUE) sbb word ptr [VALUE], ax
#define SBB_BX_TO_PTR_(VALUE) sbb word ptr [VALUE], bx
#define SBB_CX_TO_PTR_(VALUE) sbb word ptr [VALUE], cx
#define SBB_DX_TO_PTR_(VALUE) sbb word ptr [VALUE], dx
#define SBB_DI_TO_PTR_(VALUE) sbb word ptr [VALUE], di
#define SBB_SI_TO_PTR_(VALUE) sbb word ptr [VALUE], si
#define SBB_BP_TO_PTR_(VALUE) sbb word ptr [VALUE], bp
#define SBB_SP_TO_PTR_(VALUE) sbb word ptr [VALUE], sp
#define SBB_R8W_TO_PTR_(VALUE) sbb word ptr [VALUE], r8w
#define SBB_R9W_TO_PTR_(VALUE) sbb word ptr [VALUE], r9w
#define SBB_R10W_TO_PTR_(VALUE) sbb word ptr [VALUE], r10w
#define SBB_R11W_TO_PTR_(VALUE) sbb word ptr [VALUE], r11w
#define SBB_R12W_TO_PTR_(VALUE) sbb word ptr [VALUE], r12w
#define SBB_R13W_TO_PTR_(VALUE) sbb word ptr [VALUE], r13w
#define SBB_R14W_TO_PTR_(VALUE) sbb word ptr [VALUE], r14w
#define SBB_R15W_TO_PTR_(VALUE) sbb word ptr [VALUE], r15w

#define SBB_AX_FROM_PTR_RAX sbb ax, word ptr [rax]
#define SBB_AX_FROM_PTR_RBX sbb ax, word ptr [rbx]
#define SBB_AX_FROM_PTR_RCX sbb ax, word ptr [rcx]
#define SBB_AX_FROM_PTR_RDX sbb ax, word ptr [rdx]
#define SBB_AX_FROM_PTR_RDI sbb ax, word ptr [rdi]
#define SBB_AX_FROM_PTR_RSI sbb ax, word ptr [rsi]
#define SBB_AX_FROM_PTR_RBP sbb ax, word ptr [rbp]
#define SBB_AX_FROM_PTR_RSP sbb ax, word ptr [rsp]
#define SBB_AX_FROM_PTR_R8 sbb ax, word ptr [r8]
#define SBB_AX_FROM_PTR_R9 sbb ax, word ptr [r9]
#define SBB_AX_FROM_PTR_R10 sbb ax, word ptr [r10]
#define SBB_AX_FROM_PTR_R11 sbb ax, word ptr [r11]
#define SBB_AX_FROM_PTR_R12 sbb ax, word ptr [r12]
#define SBB_AX_FROM_PTR_R13 sbb ax, word ptr [r13]
#define SBB_AX_FROM_PTR_R14 sbb ax, word ptr [r14]
#define SBB_AX_FROM_PTR_R15 sbb ax, word ptr [r15]
#define SBB_AX_FROM_PTR_EAX sbb ax, word ptr [eax]
#define SBB_AX_FROM_PTR_EBX sbb ax, word ptr [ebx]
#define SBB_AX_FROM_PTR_ECX sbb ax, word ptr [ecx]
#define SBB_AX_FROM_PTR_EDX sbb ax, word ptr [edx]
#define SBB_AX_FROM_PTR_EDI sbb ax, word ptr [edi]
#define SBB_AX_FROM_PTR_ESI sbb ax, word ptr [esi]
#define SBB_AX_FROM_PTR_EBP sbb ax, word ptr [ebp]
#define SBB_AX_FROM_PTR_ESP sbb ax, word ptr [esp]

#define SBB_BX_FROM_PTR_RAX sbb bx, word ptr [rax]
#define SBB_BX_FROM_PTR_RBX sbb bx, word ptr [rbx]
#define SBB_BX_FROM_PTR_RCX sbb bx, word ptr [rcx]
#define SBB_BX_FROM_PTR_RDX sbb bx, word ptr [rdx]
#define SBB_BX_FROM_PTR_RDI sbb bx, word ptr [rdi]
#define SBB_BX_FROM_PTR_RSI sbb bx, word ptr [rsi]
#define SBB_BX_FROM_PTR_RBP sbb bx, word ptr [rbp]
#define SBB_BX_FROM_PTR_RSP sbb bx, word ptr [rsp]
#define SBB_BX_FROM_PTR_R8 sbb bx, word ptr [r8]
#define SBB_BX_FROM_PTR_R9 sbb bx, word ptr [r9]
#define SBB_BX_FROM_PTR_R10 sbb bx, word ptr [r10]
#define SBB_BX_FROM_PTR_R11 sbb bx, word ptr [r11]
#define SBB_BX_FROM_PTR_R12 sbb bx, word ptr [r12]
#define SBB_BX_FROM_PTR_R13 sbb bx, word ptr [r13]
#define SBB_BX_FROM_PTR_R14 sbb bx, word ptr [r14]
#define SBB_BX_FROM_PTR_R15 sbb bx, word ptr [r15]
#define SBB_BX_FROM_PTR_EAX sbb bx, word ptr [eax]
#define SBB_BX_FROM_PTR_EBX sbb bx, word ptr [ebx]
#define SBB_BX_FROM_PTR_ECX sbb bx, word ptr [ecx]
#define SBB_BX_FROM_PTR_EDX sbb bx, word ptr [edx]
#define SBB_BX_FROM_PTR_EDI sbb bx, word ptr [edi]
#define SBB_BX_FROM_PTR_ESI sbb bx, word ptr [esi]
#define SBB_BX_FROM_PTR_EBP sbb bx, word ptr [ebp]
#define SBB_BX_FROM_PTR_ESP sbb bx, word ptr [esp]

#define SBB_CX_FROM_PTR_RAX sbb cx, word ptr [rax]
#define SBB_CX_FROM_PTR_RBX sbb cx, word ptr [rbx]
#define SBB_CX_FROM_PTR_RCX sbb cx, word ptr [rcx]
#define SBB_CX_FROM_PTR_RDX sbb cx, word ptr [rdx]
#define SBB_CX_FROM_PTR_RDI sbb cx, word ptr [rdi]
#define SBB_CX_FROM_PTR_RSI sbb cx, word ptr [rsi]
#define SBB_CX_FROM_PTR_RBP sbb cx, word ptr [rbp]
#define SBB_CX_FROM_PTR_RSP sbb cx, word ptr [rsp]
#define SBB_CX_FROM_PTR_R8 sbb cx, word ptr [r8]
#define SBB_CX_FROM_PTR_R9 sbb cx, word ptr [r9]
#define SBB_CX_FROM_PTR_R10 sbb cx, word ptr [r10]
#define SBB_CX_FROM_PTR_R11 sbb cx, word ptr [r11]
#define SBB_CX_FROM_PTR_R12 sbb cx, word ptr [r12]
#define SBB_CX_FROM_PTR_R13 sbb cx, word ptr [r13]
#define SBB_CX_FROM_PTR_R14 sbb cx, word ptr [r14]
#define SBB_CX_FROM_PTR_R15 sbb cx, word ptr [r15]
#define SBB_CX_FROM_PTR_EAX sbb cx, word ptr [eax]
#define SBB_CX_FROM_PTR_EBX sbb cx, word ptr [ebx]
#define SBB_CX_FROM_PTR_ECX sbb cx, word ptr [ecx]
#define SBB_CX_FROM_PTR_EDX sbb cx, word ptr [edx]
#define SBB_CX_FROM_PTR_EDI sbb cx, word ptr [edi]
#define SBB_CX_FROM_PTR_ESI sbb cx, word ptr [esi]
#define SBB_CX_FROM_PTR_EBP sbb cx, word ptr [ebp]
#define SBB_CX_FROM_PTR_ESP sbb cx, word ptr [esp]

#define SBB_DX_FROM_PTR_RAX sbb dx, word ptr [rax]
#define SBB_DX_FROM_PTR_RBX sbb dx, word ptr [rbx]
#define SBB_DX_FROM_PTR_RCX sbb dx, word ptr [rcx]
#define SBB_DX_FROM_PTR_RDX sbb dx, word ptr [rdx]
#define SBB_DX_FROM_PTR_RDI sbb dx, word ptr [rdi]
#define SBB_DX_FROM_PTR_RSI sbb dx, word ptr [rsi]
#define SBB_DX_FROM_PTR_RBP sbb dx, word ptr [rbp]
#define SBB_DX_FROM_PTR_RSP sbb dx, word ptr [rsp]
#define SBB_DX_FROM_PTR_R8 sbb dx, word ptr [r8]
#define SBB_DX_FROM_PTR_R9 sbb dx, word ptr [r9]
#define SBB_DX_FROM_PTR_R10 sbb dx, word ptr [r10]
#define SBB_DX_FROM_PTR_R11 sbb dx, word ptr [r11]
#define SBB_DX_FROM_PTR_R12 sbb dx, word ptr [r12]
#define SBB_DX_FROM_PTR_R13 sbb dx, word ptr [r13]
#define SBB_DX_FROM_PTR_R14 sbb dx, word ptr [r14]
#define SBB_DX_FROM_PTR_R15 sbb dx, word ptr [r15]
#define SBB_DX_FROM_PTR_EAX sbb dx, word ptr [eax]
#define SBB_DX_FROM_PTR_EBX sbb dx, word ptr [ebx]
#define SBB_DX_FROM_PTR_ECX sbb dx, word ptr [ecx]
#define SBB_DX_FROM_PTR_EDX sbb dx, word ptr [edx]
#define SBB_DX_FROM_PTR_EDI sbb dx, word ptr [edi]
#define SBB_DX_FROM_PTR_ESI sbb dx, word ptr [esi]
#define SBB_DX_FROM_PTR_EBP sbb dx, word ptr [ebp]
#define SBB_DX_FROM_PTR_ESP sbb dx, word ptr [esp]

#define SBB_DI_FROM_PTR_RAX sbb di, word ptr [rax]
#define SBB_DI_FROM_PTR_RBX sbb di, word ptr [rbx]
#define SBB_DI_FROM_PTR_RCX sbb di, word ptr [rcx]
#define SBB_DI_FROM_PTR_RDX sbb di, word ptr [rdx]
#define SBB_DI_FROM_PTR_RDI sbb di, word ptr [rdi]
#define SBB_DI_FROM_PTR_RSI sbb di, word ptr [rsi]
#define SBB_DI_FROM_PTR_RBP sbb di, word ptr [rbp]
#define SBB_DI_FROM_PTR_RSP sbb di, word ptr [rsp]
#define SBB_DI_FROM_PTR_R8 sbb di, word ptr [r8]
#define SBB_DI_FROM_PTR_R9 sbb di, word ptr [r9]
#define SBB_DI_FROM_PTR_R10 sbb di, word ptr [r10]
#define SBB_DI_FROM_PTR_R11 sbb di, word ptr [r11]
#define SBB_DI_FROM_PTR_R12 sbb di, word ptr [r12]
#define SBB_DI_FROM_PTR_R13 sbb di, word ptr [r13]
#define SBB_DI_FROM_PTR_R14 sbb di, word ptr [r14]
#define SBB_DI_FROM_PTR_R15 sbb di, word ptr [r15]
#define SBB_DI_FROM_PTR_EAX sbb di, word ptr [eax]
#define SBB_DI_FROM_PTR_EBX sbb di, word ptr [ebx]
#define SBB_DI_FROM_PTR_ECX sbb di, word ptr [ecx]
#define SBB_DI_FROM_PTR_EDX sbb di, word ptr [edx]
#define SBB_DI_FROM_PTR_EDI sbb di, word ptr [edi]
#define SBB_DI_FROM_PTR_ESI sbb di, word ptr [esi]
#define SBB_DI_FROM_PTR_EBP sbb di, word ptr [ebp]
#define SBB_DI_FROM_PTR_ESP sbb di, word ptr [esp]

#define SBB_SI_FROM_PTR_RAX sbb si, word ptr [rax]
#define SBB_SI_FROM_PTR_RBX sbb si, word ptr [rbx]
#define SBB_SI_FROM_PTR_RCX sbb si, word ptr [rcx]
#define SBB_SI_FROM_PTR_RDX sbb si, word ptr [rdx]
#define SBB_SI_FROM_PTR_RDI sbb si, word ptr [rdi]
#define SBB_SI_FROM_PTR_RSI sbb si, word ptr [rsi]
#define SBB_SI_FROM_PTR_RBP sbb si, word ptr [rbp]
#define SBB_SI_FROM_PTR_RSP sbb si, word ptr [rsp]
#define SBB_SI_FROM_PTR_R8 sbb si, word ptr [r8]
#define SBB_SI_FROM_PTR_R9 sbb si, word ptr [r9]
#define SBB_SI_FROM_PTR_R10 sbb si, word ptr [r10]
#define SBB_SI_FROM_PTR_R11 sbb si, word ptr [r11]
#define SBB_SI_FROM_PTR_R12 sbb si, word ptr [r12]
#define SBB_SI_FROM_PTR_R13 sbb si, word ptr [r13]
#define SBB_SI_FROM_PTR_R14 sbb si, word ptr [r14]
#define SBB_SI_FROM_PTR_R15 sbb si, word ptr [r15]
#define SBB_SI_FROM_PTR_EAX sbb si, word ptr [eax]
#define SBB_SI_FROM_PTR_EBX sbb si, word ptr [ebx]
#define SBB_SI_FROM_PTR_ECX sbb si, word ptr [ecx]
#define SBB_SI_FROM_PTR_EDX sbb si, word ptr [edx]
#define SBB_SI_FROM_PTR_EDI sbb si, word ptr [edi]
#define SBB_SI_FROM_PTR_ESI sbb si, word ptr [esi]
#define SBB_SI_FROM_PTR_EBP sbb si, word ptr [ebp]
#define SBB_SI_FROM_PTR_ESP sbb si, word ptr [esp]

#define SBB_BP_FROM_PTR_RAX sbb bp, word ptr [rax]
#define SBB_BP_FROM_PTR_RBX sbb bp, word ptr [rbx]
#define SBB_BP_FROM_PTR_RCX sbb bp, word ptr [rcx]
#define SBB_BP_FROM_PTR_RDX sbb bp, word ptr [rdx]
#define SBB_BP_FROM_PTR_RDI sbb bp, word ptr [rdi]
#define SBB_BP_FROM_PTR_RSI sbb bp, word ptr [rsi]
#define SBB_BP_FROM_PTR_RBP sbb bp, word ptr [rbp]
#define SBB_BP_FROM_PTR_RSP sbb bp, word ptr [rsp]
#define SBB_BP_FROM_PTR_R8 sbb bp, word ptr [r8]
#define SBB_BP_FROM_PTR_R9 sbb bp, word ptr [r9]
#define SBB_BP_FROM_PTR_R10 sbb bp, word ptr [r10]
#define SBB_BP_FROM_PTR_R11 sbb bp, word ptr [r11]
#define SBB_BP_FROM_PTR_R12 sbb bp, word ptr [r12]
#define SBB_BP_FROM_PTR_R13 sbb bp, word ptr [r13]
#define SBB_BP_FROM_PTR_R14 sbb bp, word ptr [r14]
#define SBB_BP_FROM_PTR_R15 sbb bp, word ptr [r15]
#define SBB_BP_FROM_PTR_EAX sbb bp, word ptr [eax]
#define SBB_BP_FROM_PTR_EBX sbb bp, word ptr [ebx]
#define SBB_BP_FROM_PTR_ECX sbb bp, word ptr [ecx]
#define SBB_BP_FROM_PTR_EDX sbb bp, word ptr [edx]
#define SBB_BP_FROM_PTR_EDI sbb bp, word ptr [edi]
#define SBB_BP_FROM_PTR_ESI sbb bp, word ptr [esi]
#define SBB_BP_FROM_PTR_EBP sbb bp, word ptr [ebp]
#define SBB_BP_FROM_PTR_ESP sbb bp, word ptr [esp]

#define SBB_SP_FROM_PTR_RAX sbb sp, word ptr [rax]
#define SBB_SP_FROM_PTR_RBX sbb sp, word ptr [rbx]
#define SBB_SP_FROM_PTR_RCX sbb sp, word ptr [rcx]
#define SBB_SP_FROM_PTR_RDX sbb sp, word ptr [rdx]
#define SBB_SP_FROM_PTR_RDI sbb sp, word ptr [rdi]
#define SBB_SP_FROM_PTR_RSI sbb sp, word ptr [rsi]
#define SBB_SP_FROM_PTR_RBP sbb sp, word ptr [rbp]
#define SBB_SP_FROM_PTR_RSP sbb sp, word ptr [rsp]
#define SBB_SP_FROM_PTR_R8 sbb sp, word ptr [r8]
#define SBB_SP_FROM_PTR_R9 sbb sp, word ptr [r9]
#define SBB_SP_FROM_PTR_R10 sbb sp, word ptr [r10]
#define SBB_SP_FROM_PTR_R11 sbb sp, word ptr [r11]
#define SBB_SP_FROM_PTR_R12 sbb sp, word ptr [r12]
#define SBB_SP_FROM_PTR_R13 sbb sp, word ptr [r13]
#define SBB_SP_FROM_PTR_R14 sbb sp, word ptr [r14]
#define SBB_SP_FROM_PTR_R15 sbb sp, word ptr [r15]
#define SBB_SP_FROM_PTR_EAX sbb sp, word ptr [eax]
#define SBB_SP_FROM_PTR_EBX sbb sp, word ptr [ebx]
#define SBB_SP_FROM_PTR_ECX sbb sp, word ptr [ecx]
#define SBB_SP_FROM_PTR_EDX sbb sp, word ptr [edx]
#define SBB_SP_FROM_PTR_EDI sbb sp, word ptr [edi]
#define SBB_SP_FROM_PTR_ESI sbb sp, word ptr [esi]
#define SBB_SP_FROM_PTR_EBP sbb sp, word ptr [ebp]
#define SBB_SP_FROM_PTR_ESP sbb sp, word ptr [esp]

#define SBB_R8W_FROM_PTR_RAX sbb r8w, word ptr [rax]
#define SBB_R8W_FROM_PTR_RBX sbb r8w, word ptr [rbx]
#define SBB_R8W_FROM_PTR_RCX sbb r8w, word ptr [rcx]
#define SBB_R8W_FROM_PTR_RDX sbb r8w, word ptr [rdx]
#define SBB_R8W_FROM_PTR_RDI sbb r8w, word ptr [rdi]
#define SBB_R8W_FROM_PTR_RSI sbb r8w, word ptr [rsi]
#define SBB_R8W_FROM_PTR_RBP sbb r8w, word ptr [rbp]
#define SBB_R8W_FROM_PTR_RSP sbb r8w, word ptr [rsp]
#define SBB_R8W_FROM_PTR_R8 sbb r8w, word ptr [r8]
#define SBB_R8W_FROM_PTR_R9 sbb r8w, word ptr [r9]
#define SBB_R8W_FROM_PTR_R10 sbb r8w, word ptr [r10]
#define SBB_R8W_FROM_PTR_R11 sbb r8w, word ptr [r11]
#define SBB_R8W_FROM_PTR_R12 sbb r8w, word ptr [r12]
#define SBB_R8W_FROM_PTR_R13 sbb r8w, word ptr [r13]
#define SBB_R8W_FROM_PTR_R14 sbb r8w, word ptr [r14]
#define SBB_R8W_FROM_PTR_R15 sbb r8w, word ptr [r15]
#define SBB_R8W_FROM_PTR_EAX sbb r8w, word ptr [eax]
#define SBB_R8W_FROM_PTR_EBX sbb r8w, word ptr [ebx]
#define SBB_R8W_FROM_PTR_ECX sbb r8w, word ptr [ecx]
#define SBB_R8W_FROM_PTR_EDX sbb r8w, word ptr [edx]
#define SBB_R8W_FROM_PTR_EDI sbb r8w, word ptr [edi]
#define SBB_R8W_FROM_PTR_ESI sbb r8w, word ptr [esi]
#define SBB_R8W_FROM_PTR_EBP sbb r8w, word ptr [ebp]
#define SBB_R8W_FROM_PTR_ESP sbb r8w, word ptr [esp]

#define SBB_R9W_FROM_PTR_RAX sbb r9w, word ptr [rax]
#define SBB_R9W_FROM_PTR_RBX sbb r9w, word ptr [rbx]
#define SBB_R9W_FROM_PTR_RCX sbb r9w, word ptr [rcx]
#define SBB_R9W_FROM_PTR_RDX sbb r9w, word ptr [rdx]
#define SBB_R9W_FROM_PTR_RDI sbb r9w, word ptr [rdi]
#define SBB_R9W_FROM_PTR_RSI sbb r9w, word ptr [rsi]
#define SBB_R9W_FROM_PTR_RBP sbb r9w, word ptr [rbp]
#define SBB_R9W_FROM_PTR_RSP sbb r9w, word ptr [rsp]
#define SBB_R9W_FROM_PTR_R8 sbb r9w, word ptr [r8]
#define SBB_R9W_FROM_PTR_R9 sbb r9w, word ptr [r9]
#define SBB_R9W_FROM_PTR_R10 sbb r9w, word ptr [r10]
#define SBB_R9W_FROM_PTR_R11 sbb r9w, word ptr [r11]
#define SBB_R9W_FROM_PTR_R12 sbb r9w, word ptr [r12]
#define SBB_R9W_FROM_PTR_R13 sbb r9w, word ptr [r13]
#define SBB_R9W_FROM_PTR_R14 sbb r9w, word ptr [r14]
#define SBB_R9W_FROM_PTR_R15 sbb r9w, word ptr [r15]
#define SBB_R9W_FROM_PTR_EAX sbb r9w, word ptr [eax]
#define SBB_R9W_FROM_PTR_EBX sbb r9w, word ptr [ebx]
#define SBB_R9W_FROM_PTR_ECX sbb r9w, word ptr [ecx]
#define SBB_R9W_FROM_PTR_EDX sbb r9w, word ptr [edx]
#define SBB_R9W_FROM_PTR_EDI sbb r9w, word ptr [edi]
#define SBB_R9W_FROM_PTR_ESI sbb r9w, word ptr [esi]
#define SBB_R9W_FROM_PTR_EBP sbb r9w, word ptr [ebp]
#define SBB_R9W_FROM_PTR_ESP sbb r9w, word ptr [esp]

#define SBB_R10W_FROM_PTR_RAX sbb r10w, word ptr [rax]
#define SBB_R10W_FROM_PTR_RBX sbb r10w, word ptr [rbx]
#define SBB_R10W_FROM_PTR_RCX sbb r10w, word ptr [rcx]
#define SBB_R10W_FROM_PTR_RDX sbb r10w, word ptr [rdx]
#define SBB_R10W_FROM_PTR_RDI sbb r10w, word ptr [rdi]
#define SBB_R10W_FROM_PTR_RSI sbb r10w, word ptr [rsi]
#define SBB_R10W_FROM_PTR_RBP sbb r10w, word ptr [rbp]
#define SBB_R10W_FROM_PTR_RSP sbb r10w, word ptr [rsp]
#define SBB_R10W_FROM_PTR_R8 sbb r10w, word ptr [r8]
#define SBB_R10W_FROM_PTR_R9 sbb r10w, word ptr [r9]
#define SBB_R10W_FROM_PTR_R10 sbb r10w, word ptr [r10]
#define SBB_R10W_FROM_PTR_R11 sbb r10w, word ptr [r11]
#define SBB_R10W_FROM_PTR_R12 sbb r10w, word ptr [r12]
#define SBB_R10W_FROM_PTR_R13 sbb r10w, word ptr [r13]
#define SBB_R10W_FROM_PTR_R14 sbb r10w, word ptr [r14]
#define SBB_R10W_FROM_PTR_R15 sbb r10w, word ptr [r15]
#define SBB_R10W_FROM_PTR_EAX sbb r10w, word ptr [eax]
#define SBB_R10W_FROM_PTR_EBX sbb r10w, word ptr [ebx]
#define SBB_R10W_FROM_PTR_ECX sbb r10w, word ptr [ecx]
#define SBB_R10W_FROM_PTR_EDX sbb r10w, word ptr [edx]
#define SBB_R10W_FROM_PTR_EDI sbb r10w, word ptr [edi]
#define SBB_R10W_FROM_PTR_ESI sbb r10w, word ptr [esi]
#define SBB_R10W_FROM_PTR_EBP sbb r10w, word ptr [ebp]
#define SBB_R10W_FROM_PTR_ESP sbb r10w, word ptr [esp]

#define SBB_R11W_FROM_PTR_RAX sbb r11w, word ptr [rax]
#define SBB_R11W_FROM_PTR_RBX sbb r11w, word ptr [rbx]
#define SBB_R11W_FROM_PTR_RCX sbb r11w, word ptr [rcx]
#define SBB_R11W_FROM_PTR_RDX sbb r11w, word ptr [rdx]
#define SBB_R11W_FROM_PTR_RDI sbb r11w, word ptr [rdi]
#define SBB_R11W_FROM_PTR_RSI sbb r11w, word ptr [rsi]
#define SBB_R11W_FROM_PTR_RBP sbb r11w, word ptr [rbp]
#define SBB_R11W_FROM_PTR_RSP sbb r11w, word ptr [rsp]
#define SBB_R11W_FROM_PTR_R8 sbb r11w, word ptr [r8]
#define SBB_R11W_FROM_PTR_R9 sbb r11w, word ptr [r9]
#define SBB_R11W_FROM_PTR_R10 sbb r11w, word ptr [r10]
#define SBB_R11W_FROM_PTR_R11 sbb r11w, word ptr [r11]
#define SBB_R11W_FROM_PTR_R12 sbb r11w, word ptr [r12]
#define SBB_R11W_FROM_PTR_R13 sbb r11w, word ptr [r13]
#define SBB_R11W_FROM_PTR_R14 sbb r11w, word ptr [r14]
#define SBB_R11W_FROM_PTR_R15 sbb r11w, word ptr [r15]
#define SBB_R11W_FROM_PTR_EAX sbb r11w, word ptr [eax]
#define SBB_R11W_FROM_PTR_EBX sbb r11w, word ptr [ebx]
#define SBB_R11W_FROM_PTR_ECX sbb r11w, word ptr [ecx]
#define SBB_R11W_FROM_PTR_EDX sbb r11w, word ptr [edx]
#define SBB_R11W_FROM_PTR_EDI sbb r11w, word ptr [edi]
#define SBB_R11W_FROM_PTR_ESI sbb r11w, word ptr [esi]
#define SBB_R11W_FROM_PTR_EBP sbb r11w, word ptr [ebp]
#define SBB_R11W_FROM_PTR_ESP sbb r11w, word ptr [esp]

#define SBB_R12W_FROM_PTR_RAX sbb r12w, word ptr [rax]
#define SBB_R12W_FROM_PTR_RBX sbb r12w, word ptr [rbx]
#define SBB_R12W_FROM_PTR_RCX sbb r12w, word ptr [rcx]
#define SBB_R12W_FROM_PTR_RDX sbb r12w, word ptr [rdx]
#define SBB_R12W_FROM_PTR_RDI sbb r12w, word ptr [rdi]
#define SBB_R12W_FROM_PTR_RSI sbb r12w, word ptr [rsi]
#define SBB_R12W_FROM_PTR_RBP sbb r12w, word ptr [rbp]
#define SBB_R12W_FROM_PTR_RSP sbb r12w, word ptr [rsp]
#define SBB_R12W_FROM_PTR_R8 sbb r12w, word ptr [r8]
#define SBB_R12W_FROM_PTR_R9 sbb r12w, word ptr [r9]
#define SBB_R12W_FROM_PTR_R10 sbb r12w, word ptr [r10]
#define SBB_R12W_FROM_PTR_R11 sbb r12w, word ptr [r11]
#define SBB_R12W_FROM_PTR_R12 sbb r12w, word ptr [r12]
#define SBB_R12W_FROM_PTR_R13 sbb r12w, word ptr [r13]
#define SBB_R12W_FROM_PTR_R14 sbb r12w, word ptr [r14]
#define SBB_R12W_FROM_PTR_R15 sbb r12w, word ptr [r15]
#define SBB_R12W_FROM_PTR_EAX sbb r12w, word ptr [eax]
#define SBB_R12W_FROM_PTR_EBX sbb r12w, word ptr [ebx]
#define SBB_R12W_FROM_PTR_ECX sbb r12w, word ptr [ecx]
#define SBB_R12W_FROM_PTR_EDX sbb r12w, word ptr [edx]
#define SBB_R12W_FROM_PTR_EDI sbb r12w, word ptr [edi]
#define SBB_R12W_FROM_PTR_ESI sbb r12w, word ptr [esi]
#define SBB_R12W_FROM_PTR_EBP sbb r12w, word ptr [ebp]
#define SBB_R12W_FROM_PTR_ESP sbb r12w, word ptr [esp]

#define SBB_R13W_FROM_PTR_RAX sbb r13w, word ptr [rax]
#define SBB_R13W_FROM_PTR_RBX sbb r13w, word ptr [rbx]
#define SBB_R13W_FROM_PTR_RCX sbb r13w, word ptr [rcx]
#define SBB_R13W_FROM_PTR_RDX sbb r13w, word ptr [rdx]
#define SBB_R13W_FROM_PTR_RDI sbb r13w, word ptr [rdi]
#define SBB_R13W_FROM_PTR_RSI sbb r13w, word ptr [rsi]
#define SBB_R13W_FROM_PTR_RBP sbb r13w, word ptr [rbp]
#define SBB_R13W_FROM_PTR_RSP sbb r13w, word ptr [rsp]
#define SBB_R13W_FROM_PTR_R8 sbb r13w, word ptr [r8]
#define SBB_R13W_FROM_PTR_R9 sbb r13w, word ptr [r9]
#define SBB_R13W_FROM_PTR_R10 sbb r13w, word ptr [r10]
#define SBB_R13W_FROM_PTR_R11 sbb r13w, word ptr [r11]
#define SBB_R13W_FROM_PTR_R12 sbb r13w, word ptr [r12]
#define SBB_R13W_FROM_PTR_R13 sbb r13w, word ptr [r13]
#define SBB_R13W_FROM_PTR_R14 sbb r13w, word ptr [r14]
#define SBB_R13W_FROM_PTR_R15 sbb r13w, word ptr [r15]
#define SBB_R13W_FROM_PTR_EAX sbb r13w, word ptr [eax]
#define SBB_R13W_FROM_PTR_EBX sbb r13w, word ptr [ebx]
#define SBB_R13W_FROM_PTR_ECX sbb r13w, word ptr [ecx]
#define SBB_R13W_FROM_PTR_EDX sbb r13w, word ptr [edx]
#define SBB_R13W_FROM_PTR_EDI sbb r13w, word ptr [edi]
#define SBB_R13W_FROM_PTR_ESI sbb r13w, word ptr [esi]
#define SBB_R13W_FROM_PTR_EBP sbb r13w, word ptr [ebp]
#define SBB_R13W_FROM_PTR_ESP sbb r13w, word ptr [esp]

#define SBB_R14W_FROM_PTR_RAX sbb r14w, word ptr [rax]
#define SBB_R14W_FROM_PTR_RBX sbb r14w, word ptr [rbx]
#define SBB_R14W_FROM_PTR_RCX sbb r14w, word ptr [rcx]
#define SBB_R14W_FROM_PTR_RDX sbb r14w, word ptr [rdx]
#define SBB_R14W_FROM_PTR_RDI sbb r14w, word ptr [rdi]
#define SBB_R14W_FROM_PTR_RSI sbb r14w, word ptr [rsi]
#define SBB_R14W_FROM_PTR_RBP sbb r14w, word ptr [rbp]
#define SBB_R14W_FROM_PTR_RSP sbb r14w, word ptr [rsp]
#define SBB_R14W_FROM_PTR_R8 sbb r14w, word ptr [r8]
#define SBB_R14W_FROM_PTR_R9 sbb r14w, word ptr [r9]
#define SBB_R14W_FROM_PTR_R10 sbb r14w, word ptr [r10]
#define SBB_R14W_FROM_PTR_R11 sbb r14w, word ptr [r11]
#define SBB_R14W_FROM_PTR_R12 sbb r14w, word ptr [r12]
#define SBB_R14W_FROM_PTR_R13 sbb r14w, word ptr [r13]
#define SBB_R14W_FROM_PTR_R14 sbb r14w, word ptr [r14]
#define SBB_R14W_FROM_PTR_R15 sbb r14w, word ptr [r15]
#define SBB_R14W_FROM_PTR_EAX sbb r14w, word ptr [eax]
#define SBB_R14W_FROM_PTR_EBX sbb r14w, word ptr [ebx]
#define SBB_R14W_FROM_PTR_ECX sbb r14w, word ptr [ecx]
#define SBB_R14W_FROM_PTR_EDX sbb r14w, word ptr [edx]
#define SBB_R14W_FROM_PTR_EDI sbb r14w, word ptr [edi]
#define SBB_R14W_FROM_PTR_ESI sbb r14w, word ptr [esi]
#define SBB_R14W_FROM_PTR_EBP sbb r14w, word ptr [ebp]
#define SBB_R14W_FROM_PTR_ESP sbb r14w, word ptr [esp]

#define SBB_R15W_FROM_PTR_RAX sbb r15w, word ptr [rax]
#define SBB_R15W_FROM_PTR_RBX sbb r15w, word ptr [rbx]
#define SBB_R15W_FROM_PTR_RCX sbb r15w, word ptr [rcx]
#define SBB_R15W_FROM_PTR_RDX sbb r15w, word ptr [rdx]
#define SBB_R15W_FROM_PTR_RDI sbb r15w, word ptr [rdi]
#define SBB_R15W_FROM_PTR_RSI sbb r15w, word ptr [rsi]
#define SBB_R15W_FROM_PTR_RBP sbb r15w, word ptr [rbp]
#define SBB_R15W_FROM_PTR_RSP sbb r15w, word ptr [rsp]
#define SBB_R15W_FROM_PTR_R8 sbb r15w, word ptr [r8]
#define SBB_R15W_FROM_PTR_R9 sbb r15w, word ptr [r9]
#define SBB_R15W_FROM_PTR_R10 sbb r15w, word ptr [r10]
#define SBB_R15W_FROM_PTR_R11 sbb r15w, word ptr [r11]
#define SBB_R15W_FROM_PTR_R12 sbb r15w, word ptr [r12]
#define SBB_R15W_FROM_PTR_R13 sbb r15w, word ptr [r13]
#define SBB_R15W_FROM_PTR_R14 sbb r15w, word ptr [r14]
#define SBB_R15W_FROM_PTR_R15 sbb r15w, word ptr [r15]
#define SBB_R15W_FROM_PTR_EAX sbb r15w, word ptr [eax]
#define SBB_R15W_FROM_PTR_EBX sbb r15w, word ptr [ebx]
#define SBB_R15W_FROM_PTR_ECX sbb r15w, word ptr [ecx]
#define SBB_R15W_FROM_PTR_EDX sbb r15w, word ptr [edx]
#define SBB_R15W_FROM_PTR_EDI sbb r15w, word ptr [edi]
#define SBB_R15W_FROM_PTR_ESI sbb r15w, word ptr [esi]
#define SBB_R15W_FROM_PTR_EBP sbb r15w, word ptr [ebp]
#define SBB_R15W_FROM_PTR_ESP sbb r15w, word ptr [esp]

#define SBB_AX_TO_PTR_RAX sbb word ptr [rax], ax
#define SBB_AX_TO_PTR_RBX sbb word ptr [rbx], ax
#define SBB_AX_TO_PTR_RCX sbb word ptr [rcx], ax
#define SBB_AX_TO_PTR_RDX sbb word ptr [rdx], ax
#define SBB_AX_TO_PTR_RDI sbb word ptr [rdi], ax
#define SBB_AX_TO_PTR_RSI sbb word ptr [rsi], ax
#define SBB_AX_TO_PTR_RBP sbb word ptr [rbp], ax
#define SBB_AX_TO_PTR_RSP sbb word ptr [rsp], ax
#define SBB_AX_TO_PTR_R8 sbb word ptr [r8], ax
#define SBB_AX_TO_PTR_R9 sbb word ptr [r9], ax
#define SBB_AX_TO_PTR_R10 sbb word ptr [r10], ax
#define SBB_AX_TO_PTR_R11 sbb word ptr [r11], ax
#define SBB_AX_TO_PTR_R12 sbb word ptr [r12], ax
#define SBB_AX_TO_PTR_R13 sbb word ptr [r13], ax
#define SBB_AX_TO_PTR_R14 sbb word ptr [r14], ax
#define SBB_AX_TO_PTR_R15 sbb word ptr [r15], ax
#define SBB_AX_TO_PTR_EAX sbb word ptr [eax], ax
#define SBB_AX_TO_PTR_EBX sbb word ptr [ebx], ax
#define SBB_AX_TO_PTR_ECX sbb word ptr [ecx], ax
#define SBB_AX_TO_PTR_EDX sbb word ptr [edx], ax
#define SBB_AX_TO_PTR_EDI sbb word ptr [edi], ax
#define SBB_AX_TO_PTR_ESI sbb word ptr [esi], ax
#define SBB_AX_TO_PTR_EBP sbb word ptr [ebp], ax
#define SBB_AX_TO_PTR_ESP sbb word ptr [esp], ax

#define SBB_BX_TO_PTR_RAX sbb word ptr [rax], bx
#define SBB_BX_TO_PTR_RBX sbb word ptr [rbx], bx
#define SBB_BX_TO_PTR_RCX sbb word ptr [rcx], bx
#define SBB_BX_TO_PTR_RDX sbb word ptr [rdx], bx
#define SBB_BX_TO_PTR_RDI sbb word ptr [rdi], bx
#define SBB_BX_TO_PTR_RSI sbb word ptr [rsi], bx
#define SBB_BX_TO_PTR_RBP sbb word ptr [rbp], bx
#define SBB_BX_TO_PTR_RSP sbb word ptr [rsp], bx
#define SBB_BX_TO_PTR_R8 sbb word ptr [r8], bx
#define SBB_BX_TO_PTR_R9 sbb word ptr [r9], bx
#define SBB_BX_TO_PTR_R10 sbb word ptr [r10], bx
#define SBB_BX_TO_PTR_R11 sbb word ptr [r11], bx
#define SBB_BX_TO_PTR_R12 sbb word ptr [r12], bx
#define SBB_BX_TO_PTR_R13 sbb word ptr [r13], bx
#define SBB_BX_TO_PTR_R14 sbb word ptr [r14], bx
#define SBB_BX_TO_PTR_R15 sbb word ptr [r15], bx
#define SBB_BX_TO_PTR_EAX sbb word ptr [eax], bx
#define SBB_BX_TO_PTR_EBX sbb word ptr [ebx], bx
#define SBB_BX_TO_PTR_ECX sbb word ptr [ecx], bx
#define SBB_BX_TO_PTR_EDX sbb word ptr [edx], bx
#define SBB_BX_TO_PTR_EDI sbb word ptr [edi], bx
#define SBB_BX_TO_PTR_ESI sbb word ptr [esi], bx
#define SBB_BX_TO_PTR_EBP sbb word ptr [ebp], bx
#define SBB_BX_TO_PTR_ESP sbb word ptr [esp], bx

#define SBB_CX_TO_PTR_RAX sbb word ptr [rax], cx
#define SBB_CX_TO_PTR_RBX sbb word ptr [rbx], cx
#define SBB_CX_TO_PTR_RCX sbb word ptr [rcx], cx
#define SBB_CX_TO_PTR_RDX sbb word ptr [rdx], cx
#define SBB_CX_TO_PTR_RDI sbb word ptr [rdi], cx
#define SBB_CX_TO_PTR_RSI sbb word ptr [rsi], cx
#define SBB_CX_TO_PTR_RBP sbb word ptr [rbp], cx
#define SBB_CX_TO_PTR_RSP sbb word ptr [rsp], cx
#define SBB_CX_TO_PTR_R8 sbb word ptr [r8], cx
#define SBB_CX_TO_PTR_R9 sbb word ptr [r9], cx
#define SBB_CX_TO_PTR_R10 sbb word ptr [r10], cx
#define SBB_CX_TO_PTR_R11 sbb word ptr [r11], cx
#define SBB_CX_TO_PTR_R12 sbb word ptr [r12], cx
#define SBB_CX_TO_PTR_R13 sbb word ptr [r13], cx
#define SBB_CX_TO_PTR_R14 sbb word ptr [r14], cx
#define SBB_CX_TO_PTR_R15 sbb word ptr [r15], cx
#define SBB_CX_TO_PTR_EAX sbb word ptr [eax], cx
#define SBB_CX_TO_PTR_EBX sbb word ptr [ebx], cx
#define SBB_CX_TO_PTR_ECX sbb word ptr [ecx], cx
#define SBB_CX_TO_PTR_EDX sbb word ptr [edx], cx
#define SBB_CX_TO_PTR_EDI sbb word ptr [edi], cx
#define SBB_CX_TO_PTR_ESI sbb word ptr [esi], cx
#define SBB_CX_TO_PTR_EBP sbb word ptr [ebp], cx
#define SBB_CX_TO_PTR_ESP sbb word ptr [esp], cx

#define SBB_DX_TO_PTR_RAX sbb word ptr [rax], dx
#define SBB_DX_TO_PTR_RBX sbb word ptr [rbx], dx
#define SBB_DX_TO_PTR_RCX sbb word ptr [rcx], dx
#define SBB_DX_TO_PTR_RDX sbb word ptr [rdx], dx
#define SBB_DX_TO_PTR_RDI sbb word ptr [rdi], dx
#define SBB_DX_TO_PTR_RSI sbb word ptr [rsi], dx
#define SBB_DX_TO_PTR_RBP sbb word ptr [rbp], dx
#define SBB_DX_TO_PTR_RSP sbb word ptr [rsp], dx
#define SBB_DX_TO_PTR_R8 sbb word ptr [r8], dx
#define SBB_DX_TO_PTR_R9 sbb word ptr [r9], dx
#define SBB_DX_TO_PTR_R10 sbb word ptr [r10], dx
#define SBB_DX_TO_PTR_R11 sbb word ptr [r11], dx
#define SBB_DX_TO_PTR_R12 sbb word ptr [r12], dx
#define SBB_DX_TO_PTR_R13 sbb word ptr [r13], dx
#define SBB_DX_TO_PTR_R14 sbb word ptr [r14], dx
#define SBB_DX_TO_PTR_R15 sbb word ptr [r15], dx
#define SBB_DX_TO_PTR_EAX sbb word ptr [eax], dx
#define SBB_DX_TO_PTR_EBX sbb word ptr [ebx], dx
#define SBB_DX_TO_PTR_ECX sbb word ptr [ecx], dx
#define SBB_DX_TO_PTR_EDX sbb word ptr [edx], dx
#define SBB_DX_TO_PTR_EDI sbb word ptr [edi], dx
#define SBB_DX_TO_PTR_ESI sbb word ptr [esi], dx
#define SBB_DX_TO_PTR_EBP sbb word ptr [ebp], dx
#define SBB_DX_TO_PTR_ESP sbb word ptr [esp], dx

#define SBB_DI_TO_PTR_RAX sbb word ptr [rax], di
#define SBB_DI_TO_PTR_RBX sbb word ptr [rbx], di
#define SBB_DI_TO_PTR_RCX sbb word ptr [rcx], di
#define SBB_DI_TO_PTR_RDX sbb word ptr [rdx], di
#define SBB_DI_TO_PTR_RDI sbb word ptr [rdi], di
#define SBB_DI_TO_PTR_RSI sbb word ptr [rsi], di
#define SBB_DI_TO_PTR_RBP sbb word ptr [rbp], di
#define SBB_DI_TO_PTR_RSP sbb word ptr [rsp], di
#define SBB_DI_TO_PTR_R8 sbb word ptr [r8], di
#define SBB_DI_TO_PTR_R9 sbb word ptr [r9], di
#define SBB_DI_TO_PTR_R10 sbb word ptr [r10], di
#define SBB_DI_TO_PTR_R11 sbb word ptr [r11], di
#define SBB_DI_TO_PTR_R12 sbb word ptr [r12], di
#define SBB_DI_TO_PTR_R13 sbb word ptr [r13], di
#define SBB_DI_TO_PTR_R14 sbb word ptr [r14], di
#define SBB_DI_TO_PTR_R15 sbb word ptr [r15], di
#define SBB_DI_TO_PTR_EAX sbb word ptr [eax], di
#define SBB_DI_TO_PTR_EBX sbb word ptr [ebx], di
#define SBB_DI_TO_PTR_ECX sbb word ptr [ecx], di
#define SBB_DI_TO_PTR_EDX sbb word ptr [edx], di
#define SBB_DI_TO_PTR_EDI sbb word ptr [edi], di
#define SBB_DI_TO_PTR_ESI sbb word ptr [esi], di
#define SBB_DI_TO_PTR_EBP sbb word ptr [ebp], di
#define SBB_DI_TO_PTR_ESP sbb word ptr [esp], di

#define SBB_SI_TO_PTR_RAX sbb word ptr [rax], si
#define SBB_SI_TO_PTR_RBX sbb word ptr [rbx], si
#define SBB_SI_TO_PTR_RCX sbb word ptr [rcx], si
#define SBB_SI_TO_PTR_RDX sbb word ptr [rdx], si
#define SBB_SI_TO_PTR_RDI sbb word ptr [rdi], si
#define SBB_SI_TO_PTR_RSI sbb word ptr [rsi], si
#define SBB_SI_TO_PTR_RBP sbb word ptr [rbp], si
#define SBB_SI_TO_PTR_RSP sbb word ptr [rsp], si
#define SBB_SI_TO_PTR_R8 sbb word ptr [r8], si
#define SBB_SI_TO_PTR_R9 sbb word ptr [r9], si
#define SBB_SI_TO_PTR_R10 sbb word ptr [r10], si
#define SBB_SI_TO_PTR_R11 sbb word ptr [r11], si
#define SBB_SI_TO_PTR_R12 sbb word ptr [r12], si
#define SBB_SI_TO_PTR_R13 sbb word ptr [r13], si
#define SBB_SI_TO_PTR_R14 sbb word ptr [r14], si
#define SBB_SI_TO_PTR_R15 sbb word ptr [r15], si
#define SBB_SI_TO_PTR_EAX sbb word ptr [eax], si
#define SBB_SI_TO_PTR_EBX sbb word ptr [ebx], si
#define SBB_SI_TO_PTR_ECX sbb word ptr [ecx], si
#define SBB_SI_TO_PTR_EDX sbb word ptr [edx], si
#define SBB_SI_TO_PTR_EDI sbb word ptr [edi], si
#define SBB_SI_TO_PTR_ESI sbb word ptr [esi], si
#define SBB_SI_TO_PTR_EBP sbb word ptr [ebp], si
#define SBB_SI_TO_PTR_ESP sbb word ptr [esp], si

#define SBB_BP_TO_PTR_RAX sbb word ptr [rax], bp
#define SBB_BP_TO_PTR_RBX sbb word ptr [rbx], bp
#define SBB_BP_TO_PTR_RCX sbb word ptr [rcx], bp
#define SBB_BP_TO_PTR_RDX sbb word ptr [rdx], bp
#define SBB_BP_TO_PTR_RDI sbb word ptr [rdi], bp
#define SBB_BP_TO_PTR_RSI sbb word ptr [rsi], bp
#define SBB_BP_TO_PTR_RBP sbb word ptr [rbp], bp
#define SBB_BP_TO_PTR_RSP sbb word ptr [rsp], bp
#define SBB_BP_TO_PTR_R8 sbb word ptr [r8], bp
#define SBB_BP_TO_PTR_R9 sbb word ptr [r9], bp
#define SBB_BP_TO_PTR_R10 sbb word ptr [r10], bp
#define SBB_BP_TO_PTR_R11 sbb word ptr [r11], bp
#define SBB_BP_TO_PTR_R12 sbb word ptr [r12], bp
#define SBB_BP_TO_PTR_R13 sbb word ptr [r13], bp
#define SBB_BP_TO_PTR_R14 sbb word ptr [r14], bp
#define SBB_BP_TO_PTR_R15 sbb word ptr [r15], bp
#define SBB_BP_TO_PTR_EAX sbb word ptr [eax], bp
#define SBB_BP_TO_PTR_EBX sbb word ptr [ebx], bp
#define SBB_BP_TO_PTR_ECX sbb word ptr [ecx], bp
#define SBB_BP_TO_PTR_EDX sbb word ptr [edx], bp
#define SBB_BP_TO_PTR_EDI sbb word ptr [edi], bp
#define SBB_BP_TO_PTR_ESI sbb word ptr [esi], bp
#define SBB_BP_TO_PTR_EBP sbb word ptr [ebp], bp
#define SBB_BP_TO_PTR_ESP sbb word ptr [esp], bp

#define SBB_SP_TO_PTR_RAX sbb word ptr [rax], sp
#define SBB_SP_TO_PTR_RBX sbb word ptr [rbx], sp
#define SBB_SP_TO_PTR_RCX sbb word ptr [rcx], sp
#define SBB_SP_TO_PTR_RDX sbb word ptr [rdx], sp
#define SBB_SP_TO_PTR_RDI sbb word ptr [rdi], sp
#define SBB_SP_TO_PTR_RSI sbb word ptr [rsi], sp
#define SBB_SP_TO_PTR_RBP sbb word ptr [rbp], sp
#define SBB_SP_TO_PTR_RSP sbb word ptr [rsp], sp
#define SBB_SP_TO_PTR_R8 sbb word ptr [r8], sp
#define SBB_SP_TO_PTR_R9 sbb word ptr [r9], sp
#define SBB_SP_TO_PTR_R10 sbb word ptr [r10], sp
#define SBB_SP_TO_PTR_R11 sbb word ptr [r11], sp
#define SBB_SP_TO_PTR_R12 sbb word ptr [r12], sp
#define SBB_SP_TO_PTR_R13 sbb word ptr [r13], sp
#define SBB_SP_TO_PTR_R14 sbb word ptr [r14], sp
#define SBB_SP_TO_PTR_R15 sbb word ptr [r15], sp
#define SBB_SP_TO_PTR_EAX sbb word ptr [eax], sp
#define SBB_SP_TO_PTR_EBX sbb word ptr [ebx], sp
#define SBB_SP_TO_PTR_ECX sbb word ptr [ecx], sp
#define SBB_SP_TO_PTR_EDX sbb word ptr [edx], sp
#define SBB_SP_TO_PTR_EDI sbb word ptr [edi], sp
#define SBB_SP_TO_PTR_ESI sbb word ptr [esi], sp
#define SBB_SP_TO_PTR_EBP sbb word ptr [ebp], sp
#define SBB_SP_TO_PTR_ESP sbb word ptr [esp], sp

#define SBB_R8W_TO_PTR_RAX sbb word ptr [rax], r8w
#define SBB_R8W_TO_PTR_RBX sbb word ptr [rbx], r8w
#define SBB_R8W_TO_PTR_RCX sbb word ptr [rcx], r8w
#define SBB_R8W_TO_PTR_RDX sbb word ptr [rdx], r8w
#define SBB_R8W_TO_PTR_RDI sbb word ptr [rdi], r8w
#define SBB_R8W_TO_PTR_RSI sbb word ptr [rsi], r8w
#define SBB_R8W_TO_PTR_RBP sbb word ptr [rbp], r8w
#define SBB_R8W_TO_PTR_RSP sbb word ptr [rsp], r8w
#define SBB_R8W_TO_PTR_R8 sbb word ptr [r8], r8w
#define SBB_R8W_TO_PTR_R9 sbb word ptr [r9], r8w
#define SBB_R8W_TO_PTR_R10 sbb word ptr [r10], r8w
#define SBB_R8W_TO_PTR_R11 sbb word ptr [r11], r8w
#define SBB_R8W_TO_PTR_R12 sbb word ptr [r12], r8w
#define SBB_R8W_TO_PTR_R13 sbb word ptr [r13], r8w
#define SBB_R8W_TO_PTR_R14 sbb word ptr [r14], r8w
#define SBB_R8W_TO_PTR_R15 sbb word ptr [r15], r8w
#define SBB_R8W_TO_PTR_EAX sbb word ptr [eax], r8w
#define SBB_R8W_TO_PTR_EBX sbb word ptr [ebx], r8w
#define SBB_R8W_TO_PTR_ECX sbb word ptr [ecx], r8w
#define SBB_R8W_TO_PTR_EDX sbb word ptr [edx], r8w
#define SBB_R8W_TO_PTR_EDI sbb word ptr [edi], r8w
#define SBB_R8W_TO_PTR_ESI sbb word ptr [esi], r8w
#define SBB_R8W_TO_PTR_EBP sbb word ptr [ebp], r8w
#define SBB_R8W_TO_PTR_ESP sbb word ptr [esp], r8w

#define SBB_R9W_TO_PTR_RAX sbb word ptr [rax], r9w
#define SBB_R9W_TO_PTR_RBX sbb word ptr [rbx], r9w
#define SBB_R9W_TO_PTR_RCX sbb word ptr [rcx], r9w
#define SBB_R9W_TO_PTR_RDX sbb word ptr [rdx], r9w
#define SBB_R9W_TO_PTR_RDI sbb word ptr [rdi], r9w
#define SBB_R9W_TO_PTR_RSI sbb word ptr [rsi], r9w
#define SBB_R9W_TO_PTR_RBP sbb word ptr [rbp], r9w
#define SBB_R9W_TO_PTR_RSP sbb word ptr [rsp], r9w
#define SBB_R9W_TO_PTR_R8 sbb word ptr [r8], r9w
#define SBB_R9W_TO_PTR_R9 sbb word ptr [r9], r9w
#define SBB_R9W_TO_PTR_R10 sbb word ptr [r10], r9w
#define SBB_R9W_TO_PTR_R11 sbb word ptr [r11], r9w
#define SBB_R9W_TO_PTR_R12 sbb word ptr [r12], r9w
#define SBB_R9W_TO_PTR_R13 sbb word ptr [r13], r9w
#define SBB_R9W_TO_PTR_R14 sbb word ptr [r14], r9w
#define SBB_R9W_TO_PTR_R15 sbb word ptr [r15], r9w
#define SBB_R9W_TO_PTR_EAX sbb word ptr [eax], r9w
#define SBB_R9W_TO_PTR_EBX sbb word ptr [ebx], r9w
#define SBB_R9W_TO_PTR_ECX sbb word ptr [ecx], r9w
#define SBB_R9W_TO_PTR_EDX sbb word ptr [edx], r9w
#define SBB_R9W_TO_PTR_EDI sbb word ptr [edi], r9w
#define SBB_R9W_TO_PTR_ESI sbb word ptr [esi], r9w
#define SBB_R9W_TO_PTR_EBP sbb word ptr [ebp], r9w
#define SBB_R9W_TO_PTR_ESP sbb word ptr [esp], r9w

#define SBB_R10W_TO_PTR_RAX sbb word ptr [rax], r10w
#define SBB_R10W_TO_PTR_RBX sbb word ptr [rbx], r10w
#define SBB_R10W_TO_PTR_RCX sbb word ptr [rcx], r10w
#define SBB_R10W_TO_PTR_RDX sbb word ptr [rdx], r10w
#define SBB_R10W_TO_PTR_RDI sbb word ptr [rdi], r10w
#define SBB_R10W_TO_PTR_RSI sbb word ptr [rsi], r10w
#define SBB_R10W_TO_PTR_RBP sbb word ptr [rbp], r10w
#define SBB_R10W_TO_PTR_RSP sbb word ptr [rsp], r10w
#define SBB_R10W_TO_PTR_R8 sbb word ptr [r8], r10w
#define SBB_R10W_TO_PTR_R9 sbb word ptr [r9], r10w
#define SBB_R10W_TO_PTR_R10 sbb word ptr [r10], r10w
#define SBB_R10W_TO_PTR_R11 sbb word ptr [r11], r10w
#define SBB_R10W_TO_PTR_R12 sbb word ptr [r12], r10w
#define SBB_R10W_TO_PTR_R13 sbb word ptr [r13], r10w
#define SBB_R10W_TO_PTR_R14 sbb word ptr [r14], r10w
#define SBB_R10W_TO_PTR_R15 sbb word ptr [r15], r10w
#define SBB_R10W_TO_PTR_EAX sbb word ptr [eax], r10w
#define SBB_R10W_TO_PTR_EBX sbb word ptr [ebx], r10w
#define SBB_R10W_TO_PTR_ECX sbb word ptr [ecx], r10w
#define SBB_R10W_TO_PTR_EDX sbb word ptr [edx], r10w
#define SBB_R10W_TO_PTR_EDI sbb word ptr [edi], r10w
#define SBB_R10W_TO_PTR_ESI sbb word ptr [esi], r10w
#define SBB_R10W_TO_PTR_EBP sbb word ptr [ebp], r10w
#define SBB_R10W_TO_PTR_ESP sbb word ptr [esp], r10w

#define SBB_R11W_TO_PTR_RAX sbb word ptr [rax], r11w
#define SBB_R11W_TO_PTR_RBX sbb word ptr [rbx], r11w
#define SBB_R11W_TO_PTR_RCX sbb word ptr [rcx], r11w
#define SBB_R11W_TO_PTR_RDX sbb word ptr [rdx], r11w
#define SBB_R11W_TO_PTR_RDI sbb word ptr [rdi], r11w
#define SBB_R11W_TO_PTR_RSI sbb word ptr [rsi], r11w
#define SBB_R11W_TO_PTR_RBP sbb word ptr [rbp], r11w
#define SBB_R11W_TO_PTR_RSP sbb word ptr [rsp], r11w
#define SBB_R11W_TO_PTR_R8 sbb word ptr [r8], r11w
#define SBB_R11W_TO_PTR_R9 sbb word ptr [r9], r11w
#define SBB_R11W_TO_PTR_R10 sbb word ptr [r10], r11w
#define SBB_R11W_TO_PTR_R11 sbb word ptr [r11], r11w
#define SBB_R11W_TO_PTR_R12 sbb word ptr [r12], r11w
#define SBB_R11W_TO_PTR_R13 sbb word ptr [r13], r11w
#define SBB_R11W_TO_PTR_R14 sbb word ptr [r14], r11w
#define SBB_R11W_TO_PTR_R15 sbb word ptr [r15], r11w
#define SBB_R11W_TO_PTR_EAX sbb word ptr [eax], r11w
#define SBB_R11W_TO_PTR_EBX sbb word ptr [ebx], r11w
#define SBB_R11W_TO_PTR_ECX sbb word ptr [ecx], r11w
#define SBB_R11W_TO_PTR_EDX sbb word ptr [edx], r11w
#define SBB_R11W_TO_PTR_EDI sbb word ptr [edi], r11w
#define SBB_R11W_TO_PTR_ESI sbb word ptr [esi], r11w
#define SBB_R11W_TO_PTR_EBP sbb word ptr [ebp], r11w
#define SBB_R11W_TO_PTR_ESP sbb word ptr [esp], r11w

#define SBB_R12W_TO_PTR_RAX sbb word ptr [rax], r12w
#define SBB_R12W_TO_PTR_RBX sbb word ptr [rbx], r12w
#define SBB_R12W_TO_PTR_RCX sbb word ptr [rcx], r12w
#define SBB_R12W_TO_PTR_RDX sbb word ptr [rdx], r12w
#define SBB_R12W_TO_PTR_RDI sbb word ptr [rdi], r12w
#define SBB_R12W_TO_PTR_RSI sbb word ptr [rsi], r12w
#define SBB_R12W_TO_PTR_RBP sbb word ptr [rbp], r12w
#define SBB_R12W_TO_PTR_RSP sbb word ptr [rsp], r12w
#define SBB_R12W_TO_PTR_R8 sbb word ptr [r8], r12w
#define SBB_R12W_TO_PTR_R9 sbb word ptr [r9], r12w
#define SBB_R12W_TO_PTR_R10 sbb word ptr [r10], r12w
#define SBB_R12W_TO_PTR_R11 sbb word ptr [r11], r12w
#define SBB_R12W_TO_PTR_R12 sbb word ptr [r12], r12w
#define SBB_R12W_TO_PTR_R13 sbb word ptr [r13], r12w
#define SBB_R12W_TO_PTR_R14 sbb word ptr [r14], r12w
#define SBB_R12W_TO_PTR_R15 sbb word ptr [r15], r12w
#define SBB_R12W_TO_PTR_EAX sbb word ptr [eax], r12w
#define SBB_R12W_TO_PTR_EBX sbb word ptr [ebx], r12w
#define SBB_R12W_TO_PTR_ECX sbb word ptr [ecx], r12w
#define SBB_R12W_TO_PTR_EDX sbb word ptr [edx], r12w
#define SBB_R12W_TO_PTR_EDI sbb word ptr [edi], r12w
#define SBB_R12W_TO_PTR_ESI sbb word ptr [esi], r12w
#define SBB_R12W_TO_PTR_EBP sbb word ptr [ebp], r12w
#define SBB_R12W_TO_PTR_ESP sbb word ptr [esp], r12w

#define SBB_R13W_TO_PTR_RAX sbb word ptr [rax], r13w
#define SBB_R13W_TO_PTR_RBX sbb word ptr [rbx], r13w
#define SBB_R13W_TO_PTR_RCX sbb word ptr [rcx], r13w
#define SBB_R13W_TO_PTR_RDX sbb word ptr [rdx], r13w
#define SBB_R13W_TO_PTR_RDI sbb word ptr [rdi], r13w
#define SBB_R13W_TO_PTR_RSI sbb word ptr [rsi], r13w
#define SBB_R13W_TO_PTR_RBP sbb word ptr [rbp], r13w
#define SBB_R13W_TO_PTR_RSP sbb word ptr [rsp], r13w
#define SBB_R13W_TO_PTR_R8 sbb word ptr [r8], r13w
#define SBB_R13W_TO_PTR_R9 sbb word ptr [r9], r13w
#define SBB_R13W_TO_PTR_R10 sbb word ptr [r10], r13w
#define SBB_R13W_TO_PTR_R11 sbb word ptr [r11], r13w
#define SBB_R13W_TO_PTR_R12 sbb word ptr [r12], r13w
#define SBB_R13W_TO_PTR_R13 sbb word ptr [r13], r13w
#define SBB_R13W_TO_PTR_R14 sbb word ptr [r14], r13w
#define SBB_R13W_TO_PTR_R15 sbb word ptr [r15], r13w
#define SBB_R13W_TO_PTR_EAX sbb word ptr [eax], r13w
#define SBB_R13W_TO_PTR_EBX sbb word ptr [ebx], r13w
#define SBB_R13W_TO_PTR_ECX sbb word ptr [ecx], r13w
#define SBB_R13W_TO_PTR_EDX sbb word ptr [edx], r13w
#define SBB_R13W_TO_PTR_EDI sbb word ptr [edi], r13w
#define SBB_R13W_TO_PTR_ESI sbb word ptr [esi], r13w
#define SBB_R13W_TO_PTR_EBP sbb word ptr [ebp], r13w
#define SBB_R13W_TO_PTR_ESP sbb word ptr [esp], r13w

#define SBB_R14W_TO_PTR_RAX sbb word ptr [rax], r14w
#define SBB_R14W_TO_PTR_RBX sbb word ptr [rbx], r14w
#define SBB_R14W_TO_PTR_RCX sbb word ptr [rcx], r14w
#define SBB_R14W_TO_PTR_RDX sbb word ptr [rdx], r14w
#define SBB_R14W_TO_PTR_RDI sbb word ptr [rdi], r14w
#define SBB_R14W_TO_PTR_RSI sbb word ptr [rsi], r14w
#define SBB_R14W_TO_PTR_RBP sbb word ptr [rbp], r14w
#define SBB_R14W_TO_PTR_RSP sbb word ptr [rsp], r14w
#define SBB_R14W_TO_PTR_R8 sbb word ptr [r8], r14w
#define SBB_R14W_TO_PTR_R9 sbb word ptr [r9], r14w
#define SBB_R14W_TO_PTR_R10 sbb word ptr [r10], r14w
#define SBB_R14W_TO_PTR_R11 sbb word ptr [r11], r14w
#define SBB_R14W_TO_PTR_R12 sbb word ptr [r12], r14w
#define SBB_R14W_TO_PTR_R13 sbb word ptr [r13], r14w
#define SBB_R14W_TO_PTR_R14 sbb word ptr [r14], r14w
#define SBB_R14W_TO_PTR_R15 sbb word ptr [r15], r14w
#define SBB_R14W_TO_PTR_EAX sbb word ptr [eax], r14w
#define SBB_R14W_TO_PTR_EBX sbb word ptr [ebx], r14w
#define SBB_R14W_TO_PTR_ECX sbb word ptr [ecx], r14w
#define SBB_R14W_TO_PTR_EDX sbb word ptr [edx], r14w
#define SBB_R14W_TO_PTR_EDI sbb word ptr [edi], r14w
#define SBB_R14W_TO_PTR_ESI sbb word ptr [esi], r14w
#define SBB_R14W_TO_PTR_EBP sbb word ptr [ebp], r14w
#define SBB_R14W_TO_PTR_ESP sbb word ptr [esp], r14w

#define SBB_R15W_TO_PTR_RAX sbb word ptr [rax], r15w
#define SBB_R15W_TO_PTR_RBX sbb word ptr [rbx], r15w
#define SBB_R15W_TO_PTR_RCX sbb word ptr [rcx], r15w
#define SBB_R15W_TO_PTR_RDX sbb word ptr [rdx], r15w
#define SBB_R15W_TO_PTR_RDI sbb word ptr [rdi], r15w
#define SBB_R15W_TO_PTR_RSI sbb word ptr [rsi], r15w
#define SBB_R15W_TO_PTR_RBP sbb word ptr [rbp], r15w
#define SBB_R15W_TO_PTR_RSP sbb word ptr [rsp], r15w
#define SBB_R15W_TO_PTR_R8 sbb word ptr [r8], r15w
#define SBB_R15W_TO_PTR_R9 sbb word ptr [r9], r15w
#define SBB_R15W_TO_PTR_R10 sbb word ptr [r10], r15w
#define SBB_R15W_TO_PTR_R11 sbb word ptr [r11], r15w
#define SBB_R15W_TO_PTR_R12 sbb word ptr [r12], r15w
#define SBB_R15W_TO_PTR_R13 sbb word ptr [r13], r15w
#define SBB_R15W_TO_PTR_R14 sbb word ptr [r14], r15w
#define SBB_R15W_TO_PTR_R15 sbb word ptr [r15], r15w
#define SBB_R15W_TO_PTR_EAX sbb word ptr [eax], r15w
#define SBB_R15W_TO_PTR_EBX sbb word ptr [ebx], r15w
#define SBB_R15W_TO_PTR_ECX sbb word ptr [ecx], r15w
#define SBB_R15W_TO_PTR_EDX sbb word ptr [edx], r15w
#define SBB_R15W_TO_PTR_EDI sbb word ptr [edi], r15w
#define SBB_R15W_TO_PTR_ESI sbb word ptr [esi], r15w
#define SBB_R15W_TO_PTR_EBP sbb word ptr [ebp], r15w
#define SBB_R15W_TO_PTR_ESP sbb word ptr [esp], r15w

#define SBB_AX_FROM_PTR_RAX_(VALUE) sbb ax, word ptr [rax + VALUE]
#define SBB_AX_FROM_PTR_RBX_(VALUE) sbb ax, word ptr [rbx + VALUE]
#define SBB_AX_FROM_PTR_RCX_(VALUE) sbb ax, word ptr [rcx + VALUE]
#define SBB_AX_FROM_PTR_RDX_(VALUE) sbb ax, word ptr [rdx + VALUE]
#define SBB_AX_FROM_PTR_RDI_(VALUE) sbb ax, word ptr [rdi + VALUE]
#define SBB_AX_FROM_PTR_RSI_(VALUE) sbb ax, word ptr [rsi + VALUE]
#define SBB_AX_FROM_PTR_RBP_(VALUE) sbb ax, word ptr [rbp + VALUE]
#define SBB_AX_FROM_PTR_RSP_(VALUE) sbb ax, word ptr [rsp + VALUE]
#define SBB_AX_FROM_PTR_R8_(VALUE) sbb ax, word ptr [r8 + VALUE]
#define SBB_AX_FROM_PTR_R9_(VALUE) sbb ax, word ptr [r9 + VALUE]
#define SBB_AX_FROM_PTR_R10_(VALUE) sbb ax, word ptr [r10 + VALUE]
#define SBB_AX_FROM_PTR_R11_(VALUE) sbb ax, word ptr [r11 + VALUE]
#define SBB_AX_FROM_PTR_R12_(VALUE) sbb ax, word ptr [r12 + VALUE]
#define SBB_AX_FROM_PTR_R13_(VALUE) sbb ax, word ptr [r13 + VALUE]
#define SBB_AX_FROM_PTR_R14_(VALUE) sbb ax, word ptr [r14 + VALUE]
#define SBB_AX_FROM_PTR_R15_(VALUE) sbb ax, word ptr [r15 + VALUE]
#define SBB_AX_FROM_PTR_EAX_(VALUE) sbb ax, word ptr [eax + VALUE]
#define SBB_AX_FROM_PTR_EBX_(VALUE) sbb ax, word ptr [ebx + VALUE]
#define SBB_AX_FROM_PTR_ECX_(VALUE) sbb ax, word ptr [ecx + VALUE]
#define SBB_AX_FROM_PTR_EDX_(VALUE) sbb ax, word ptr [edx + VALUE]
#define SBB_AX_FROM_PTR_EDI_(VALUE) sbb ax, word ptr [edi + VALUE]
#define SBB_AX_FROM_PTR_ESI_(VALUE) sbb ax, word ptr [esi + VALUE]
#define SBB_AX_FROM_PTR_EBP_(VALUE) sbb ax, word ptr [ebp + VALUE]
#define SBB_AX_FROM_PTR_ESP_(VALUE) sbb ax, word ptr [esp + VALUE]

#define SBB_BX_FROM_PTR_RAX_(VALUE) sbb bx, word ptr [rax + VALUE]
#define SBB_BX_FROM_PTR_RBX_(VALUE) sbb bx, word ptr [rbx + VALUE]
#define SBB_BX_FROM_PTR_RCX_(VALUE) sbb bx, word ptr [rcx + VALUE]
#define SBB_BX_FROM_PTR_RDX_(VALUE) sbb bx, word ptr [rdx + VALUE]
#define SBB_BX_FROM_PTR_RDI_(VALUE) sbb bx, word ptr [rdi + VALUE]
#define SBB_BX_FROM_PTR_RSI_(VALUE) sbb bx, word ptr [rsi + VALUE]
#define SBB_BX_FROM_PTR_RBP_(VALUE) sbb bx, word ptr [rbp + VALUE]
#define SBB_BX_FROM_PTR_RSP_(VALUE) sbb bx, word ptr [rsp + VALUE]
#define SBB_BX_FROM_PTR_R8_(VALUE) sbb bx, word ptr [r8 + VALUE]
#define SBB_BX_FROM_PTR_R9_(VALUE) sbb bx, word ptr [r9 + VALUE]
#define SBB_BX_FROM_PTR_R10_(VALUE) sbb bx, word ptr [r10 + VALUE]
#define SBB_BX_FROM_PTR_R11_(VALUE) sbb bx, word ptr [r11 + VALUE]
#define SBB_BX_FROM_PTR_R12_(VALUE) sbb bx, word ptr [r12 + VALUE]
#define SBB_BX_FROM_PTR_R13_(VALUE) sbb bx, word ptr [r13 + VALUE]
#define SBB_BX_FROM_PTR_R14_(VALUE) sbb bx, word ptr [r14 + VALUE]
#define SBB_BX_FROM_PTR_R15_(VALUE) sbb bx, word ptr [r15 + VALUE]
#define SBB_BX_FROM_PTR_EAX_(VALUE) sbb bx, word ptr [eax + VALUE]
#define SBB_BX_FROM_PTR_EBX_(VALUE) sbb bx, word ptr [ebx + VALUE]
#define SBB_BX_FROM_PTR_ECX_(VALUE) sbb bx, word ptr [ecx + VALUE]
#define SBB_BX_FROM_PTR_EDX_(VALUE) sbb bx, word ptr [edx + VALUE]
#define SBB_BX_FROM_PTR_EDI_(VALUE) sbb bx, word ptr [edi + VALUE]
#define SBB_BX_FROM_PTR_ESI_(VALUE) sbb bx, word ptr [esi + VALUE]
#define SBB_BX_FROM_PTR_EBP_(VALUE) sbb bx, word ptr [ebp + VALUE]
#define SBB_BX_FROM_PTR_ESP_(VALUE) sbb bx, word ptr [esp + VALUE]

#define SBB_CX_FROM_PTR_RAX_(VALUE) sbb cx, word ptr [rax + VALUE]
#define SBB_CX_FROM_PTR_RBX_(VALUE) sbb cx, word ptr [rbx + VALUE]
#define SBB_CX_FROM_PTR_RCX_(VALUE) sbb cx, word ptr [rcx + VALUE]
#define SBB_CX_FROM_PTR_RDX_(VALUE) sbb cx, word ptr [rdx + VALUE]
#define SBB_CX_FROM_PTR_RDI_(VALUE) sbb cx, word ptr [rdi + VALUE]
#define SBB_CX_FROM_PTR_RSI_(VALUE) sbb cx, word ptr [rsi + VALUE]
#define SBB_CX_FROM_PTR_RBP_(VALUE) sbb cx, word ptr [rbp + VALUE]
#define SBB_CX_FROM_PTR_RSP_(VALUE) sbb cx, word ptr [rsp + VALUE]
#define SBB_CX_FROM_PTR_R8_(VALUE) sbb cx, word ptr [r8 + VALUE]
#define SBB_CX_FROM_PTR_R9_(VALUE) sbb cx, word ptr [r9 + VALUE]
#define SBB_CX_FROM_PTR_R10_(VALUE) sbb cx, word ptr [r10 + VALUE]
#define SBB_CX_FROM_PTR_R11_(VALUE) sbb cx, word ptr [r11 + VALUE]
#define SBB_CX_FROM_PTR_R12_(VALUE) sbb cx, word ptr [r12 + VALUE]
#define SBB_CX_FROM_PTR_R13_(VALUE) sbb cx, word ptr [r13 + VALUE]
#define SBB_CX_FROM_PTR_R14_(VALUE) sbb cx, word ptr [r14 + VALUE]
#define SBB_CX_FROM_PTR_R15_(VALUE) sbb cx, word ptr [r15 + VALUE]
#define SBB_CX_FROM_PTR_EAX_(VALUE) sbb cx, word ptr [eax + VALUE]
#define SBB_CX_FROM_PTR_EBX_(VALUE) sbb cx, word ptr [ebx + VALUE]
#define SBB_CX_FROM_PTR_ECX_(VALUE) sbb cx, word ptr [ecx + VALUE]
#define SBB_CX_FROM_PTR_EDX_(VALUE) sbb cx, word ptr [edx + VALUE]
#define SBB_CX_FROM_PTR_EDI_(VALUE) sbb cx, word ptr [edi + VALUE]
#define SBB_CX_FROM_PTR_ESI_(VALUE) sbb cx, word ptr [esi + VALUE]
#define SBB_CX_FROM_PTR_EBP_(VALUE) sbb cx, word ptr [ebp + VALUE]
#define SBB_CX_FROM_PTR_ESP_(VALUE) sbb cx, word ptr [esp + VALUE]

#define SBB_DX_FROM_PTR_RAX_(VALUE) sbb dx, word ptr [rax + VALUE]
#define SBB_DX_FROM_PTR_RBX_(VALUE) sbb dx, word ptr [rbx + VALUE]
#define SBB_DX_FROM_PTR_RCX_(VALUE) sbb dx, word ptr [rcx + VALUE]
#define SBB_DX_FROM_PTR_RDX_(VALUE) sbb dx, word ptr [rdx + VALUE]
#define SBB_DX_FROM_PTR_RDI_(VALUE) sbb dx, word ptr [rdi + VALUE]
#define SBB_DX_FROM_PTR_RSI_(VALUE) sbb dx, word ptr [rsi + VALUE]
#define SBB_DX_FROM_PTR_RBP_(VALUE) sbb dx, word ptr [rbp + VALUE]
#define SBB_DX_FROM_PTR_RSP_(VALUE) sbb dx, word ptr [rsp + VALUE]
#define SBB_DX_FROM_PTR_R8_(VALUE) sbb dx, word ptr [r8 + VALUE]
#define SBB_DX_FROM_PTR_R9_(VALUE) sbb dx, word ptr [r9 + VALUE]
#define SBB_DX_FROM_PTR_R10_(VALUE) sbb dx, word ptr [r10 + VALUE]
#define SBB_DX_FROM_PTR_R11_(VALUE) sbb dx, word ptr [r11 + VALUE]
#define SBB_DX_FROM_PTR_R12_(VALUE) sbb dx, word ptr [r12 + VALUE]
#define SBB_DX_FROM_PTR_R13_(VALUE) sbb dx, word ptr [r13 + VALUE]
#define SBB_DX_FROM_PTR_R14_(VALUE) sbb dx, word ptr [r14 + VALUE]
#define SBB_DX_FROM_PTR_R15_(VALUE) sbb dx, word ptr [r15 + VALUE]
#define SBB_DX_FROM_PTR_EAX_(VALUE) sbb dx, word ptr [eax + VALUE]
#define SBB_DX_FROM_PTR_EBX_(VALUE) sbb dx, word ptr [ebx + VALUE]
#define SBB_DX_FROM_PTR_ECX_(VALUE) sbb dx, word ptr [ecx + VALUE]
#define SBB_DX_FROM_PTR_EDX_(VALUE) sbb dx, word ptr [edx + VALUE]
#define SBB_DX_FROM_PTR_EDI_(VALUE) sbb dx, word ptr [edi + VALUE]
#define SBB_DX_FROM_PTR_ESI_(VALUE) sbb dx, word ptr [esi + VALUE]
#define SBB_DX_FROM_PTR_EBP_(VALUE) sbb dx, word ptr [ebp + VALUE]
#define SBB_DX_FROM_PTR_ESP_(VALUE) sbb dx, word ptr [esp + VALUE]

#define SBB_DI_FROM_PTR_RAX_(VALUE) sbb di, word ptr [rax + VALUE]
#define SBB_DI_FROM_PTR_RBX_(VALUE) sbb di, word ptr [rbx + VALUE]
#define SBB_DI_FROM_PTR_RCX_(VALUE) sbb di, word ptr [rcx + VALUE]
#define SBB_DI_FROM_PTR_RDX_(VALUE) sbb di, word ptr [rdx + VALUE]
#define SBB_DI_FROM_PTR_RDI_(VALUE) sbb di, word ptr [rdi + VALUE]
#define SBB_DI_FROM_PTR_RSI_(VALUE) sbb di, word ptr [rsi + VALUE]
#define SBB_DI_FROM_PTR_RBP_(VALUE) sbb di, word ptr [rbp + VALUE]
#define SBB_DI_FROM_PTR_RSP_(VALUE) sbb di, word ptr [rsp + VALUE]
#define SBB_DI_FROM_PTR_R8_(VALUE) sbb di, word ptr [r8 + VALUE]
#define SBB_DI_FROM_PTR_R9_(VALUE) sbb di, word ptr [r9 + VALUE]
#define SBB_DI_FROM_PTR_R10_(VALUE) sbb di, word ptr [r10 + VALUE]
#define SBB_DI_FROM_PTR_R11_(VALUE) sbb di, word ptr [r11 + VALUE]
#define SBB_DI_FROM_PTR_R12_(VALUE) sbb di, word ptr [r12 + VALUE]
#define SBB_DI_FROM_PTR_R13_(VALUE) sbb di, word ptr [r13 + VALUE]
#define SBB_DI_FROM_PTR_R14_(VALUE) sbb di, word ptr [r14 + VALUE]
#define SBB_DI_FROM_PTR_R15_(VALUE) sbb di, word ptr [r15 + VALUE]
#define SBB_DI_FROM_PTR_EAX_(VALUE) sbb di, word ptr [eax + VALUE]
#define SBB_DI_FROM_PTR_EBX_(VALUE) sbb di, word ptr [ebx + VALUE]
#define SBB_DI_FROM_PTR_ECX_(VALUE) sbb di, word ptr [ecx + VALUE]
#define SBB_DI_FROM_PTR_EDX_(VALUE) sbb di, word ptr [edx + VALUE]
#define SBB_DI_FROM_PTR_EDI_(VALUE) sbb di, word ptr [edi + VALUE]
#define SBB_DI_FROM_PTR_ESI_(VALUE) sbb di, word ptr [esi + VALUE]
#define SBB_DI_FROM_PTR_EBP_(VALUE) sbb di, word ptr [ebp + VALUE]
#define SBB_DI_FROM_PTR_ESP_(VALUE) sbb di, word ptr [esp + VALUE]

#define SBB_SI_FROM_PTR_RAX_(VALUE) sbb si, word ptr [rax + VALUE]
#define SBB_SI_FROM_PTR_RBX_(VALUE) sbb si, word ptr [rbx + VALUE]
#define SBB_SI_FROM_PTR_RCX_(VALUE) sbb si, word ptr [rcx + VALUE]
#define SBB_SI_FROM_PTR_RDX_(VALUE) sbb si, word ptr [rdx + VALUE]
#define SBB_SI_FROM_PTR_RDI_(VALUE) sbb si, word ptr [rdi + VALUE]
#define SBB_SI_FROM_PTR_RSI_(VALUE) sbb si, word ptr [rsi + VALUE]
#define SBB_SI_FROM_PTR_RBP_(VALUE) sbb si, word ptr [rbp + VALUE]
#define SBB_SI_FROM_PTR_RSP_(VALUE) sbb si, word ptr [rsp + VALUE]
#define SBB_SI_FROM_PTR_R8_(VALUE) sbb si, word ptr [r8 + VALUE]
#define SBB_SI_FROM_PTR_R9_(VALUE) sbb si, word ptr [r9 + VALUE]
#define SBB_SI_FROM_PTR_R10_(VALUE) sbb si, word ptr [r10 + VALUE]
#define SBB_SI_FROM_PTR_R11_(VALUE) sbb si, word ptr [r11 + VALUE]
#define SBB_SI_FROM_PTR_R12_(VALUE) sbb si, word ptr [r12 + VALUE]
#define SBB_SI_FROM_PTR_R13_(VALUE) sbb si, word ptr [r13 + VALUE]
#define SBB_SI_FROM_PTR_R14_(VALUE) sbb si, word ptr [r14 + VALUE]
#define SBB_SI_FROM_PTR_R15_(VALUE) sbb si, word ptr [r15 + VALUE]
#define SBB_SI_FROM_PTR_EAX_(VALUE) sbb si, word ptr [eax + VALUE]
#define SBB_SI_FROM_PTR_EBX_(VALUE) sbb si, word ptr [ebx + VALUE]
#define SBB_SI_FROM_PTR_ECX_(VALUE) sbb si, word ptr [ecx + VALUE]
#define SBB_SI_FROM_PTR_EDX_(VALUE) sbb si, word ptr [edx + VALUE]
#define SBB_SI_FROM_PTR_EDI_(VALUE) sbb si, word ptr [edi + VALUE]
#define SBB_SI_FROM_PTR_ESI_(VALUE) sbb si, word ptr [esi + VALUE]
#define SBB_SI_FROM_PTR_EBP_(VALUE) sbb si, word ptr [ebp + VALUE]
#define SBB_SI_FROM_PTR_ESP_(VALUE) sbb si, word ptr [esp + VALUE]

#define SBB_BP_FROM_PTR_RAX_(VALUE) sbb bp, word ptr [rax + VALUE]
#define SBB_BP_FROM_PTR_RBX_(VALUE) sbb bp, word ptr [rbx + VALUE]
#define SBB_BP_FROM_PTR_RCX_(VALUE) sbb bp, word ptr [rcx + VALUE]
#define SBB_BP_FROM_PTR_RDX_(VALUE) sbb bp, word ptr [rdx + VALUE]
#define SBB_BP_FROM_PTR_RDI_(VALUE) sbb bp, word ptr [rdi + VALUE]
#define SBB_BP_FROM_PTR_RSI_(VALUE) sbb bp, word ptr [rsi + VALUE]
#define SBB_BP_FROM_PTR_RBP_(VALUE) sbb bp, word ptr [rbp + VALUE]
#define SBB_BP_FROM_PTR_RSP_(VALUE) sbb bp, word ptr [rsp + VALUE]
#define SBB_BP_FROM_PTR_R8_(VALUE) sbb bp, word ptr [r8 + VALUE]
#define SBB_BP_FROM_PTR_R9_(VALUE) sbb bp, word ptr [r9 + VALUE]
#define SBB_BP_FROM_PTR_R10_(VALUE) sbb bp, word ptr [r10 + VALUE]
#define SBB_BP_FROM_PTR_R11_(VALUE) sbb bp, word ptr [r11 + VALUE]
#define SBB_BP_FROM_PTR_R12_(VALUE) sbb bp, word ptr [r12 + VALUE]
#define SBB_BP_FROM_PTR_R13_(VALUE) sbb bp, word ptr [r13 + VALUE]
#define SBB_BP_FROM_PTR_R14_(VALUE) sbb bp, word ptr [r14 + VALUE]
#define SBB_BP_FROM_PTR_R15_(VALUE) sbb bp, word ptr [r15 + VALUE]
#define SBB_BP_FROM_PTR_EAX_(VALUE) sbb bp, word ptr [eax + VALUE]
#define SBB_BP_FROM_PTR_EBX_(VALUE) sbb bp, word ptr [ebx + VALUE]
#define SBB_BP_FROM_PTR_ECX_(VALUE) sbb bp, word ptr [ecx + VALUE]
#define SBB_BP_FROM_PTR_EDX_(VALUE) sbb bp, word ptr [edx + VALUE]
#define SBB_BP_FROM_PTR_EDI_(VALUE) sbb bp, word ptr [edi + VALUE]
#define SBB_BP_FROM_PTR_ESI_(VALUE) sbb bp, word ptr [esi + VALUE]
#define SBB_BP_FROM_PTR_EBP_(VALUE) sbb bp, word ptr [ebp + VALUE]
#define SBB_BP_FROM_PTR_ESP_(VALUE) sbb bp, word ptr [esp + VALUE]

#define SBB_SP_FROM_PTR_RAX_(VALUE) sbb sp, word ptr [rax + VALUE]
#define SBB_SP_FROM_PTR_RBX_(VALUE) sbb sp, word ptr [rbx + VALUE]
#define SBB_SP_FROM_PTR_RCX_(VALUE) sbb sp, word ptr [rcx + VALUE]
#define SBB_SP_FROM_PTR_RDX_(VALUE) sbb sp, word ptr [rdx + VALUE]
#define SBB_SP_FROM_PTR_RDI_(VALUE) sbb sp, word ptr [rdi + VALUE]
#define SBB_SP_FROM_PTR_RSI_(VALUE) sbb sp, word ptr [rsi + VALUE]
#define SBB_SP_FROM_PTR_RBP_(VALUE) sbb sp, word ptr [rbp + VALUE]
#define SBB_SP_FROM_PTR_RSP_(VALUE) sbb sp, word ptr [rsp + VALUE]
#define SBB_SP_FROM_PTR_R8_(VALUE) sbb sp, word ptr [r8 + VALUE]
#define SBB_SP_FROM_PTR_R9_(VALUE) sbb sp, word ptr [r9 + VALUE]
#define SBB_SP_FROM_PTR_R10_(VALUE) sbb sp, word ptr [r10 + VALUE]
#define SBB_SP_FROM_PTR_R11_(VALUE) sbb sp, word ptr [r11 + VALUE]
#define SBB_SP_FROM_PTR_R12_(VALUE) sbb sp, word ptr [r12 + VALUE]
#define SBB_SP_FROM_PTR_R13_(VALUE) sbb sp, word ptr [r13 + VALUE]
#define SBB_SP_FROM_PTR_R14_(VALUE) sbb sp, word ptr [r14 + VALUE]
#define SBB_SP_FROM_PTR_R15_(VALUE) sbb sp, word ptr [r15 + VALUE]
#define SBB_SP_FROM_PTR_EAX_(VALUE) sbb sp, word ptr [eax + VALUE]
#define SBB_SP_FROM_PTR_EBX_(VALUE) sbb sp, word ptr [ebx + VALUE]
#define SBB_SP_FROM_PTR_ECX_(VALUE) sbb sp, word ptr [ecx + VALUE]
#define SBB_SP_FROM_PTR_EDX_(VALUE) sbb sp, word ptr [edx + VALUE]
#define SBB_SP_FROM_PTR_EDI_(VALUE) sbb sp, word ptr [edi + VALUE]
#define SBB_SP_FROM_PTR_ESI_(VALUE) sbb sp, word ptr [esi + VALUE]
#define SBB_SP_FROM_PTR_EBP_(VALUE) sbb sp, word ptr [ebp + VALUE]
#define SBB_SP_FROM_PTR_ESP_(VALUE) sbb sp, word ptr [esp + VALUE]

#define SBB_R8W_FROM_PTR_RAX_(VALUE) sbb r8w, word ptr [rax + VALUE]
#define SBB_R8W_FROM_PTR_RBX_(VALUE) sbb r8w, word ptr [rbx + VALUE]
#define SBB_R8W_FROM_PTR_RCX_(VALUE) sbb r8w, word ptr [rcx + VALUE]
#define SBB_R8W_FROM_PTR_RDX_(VALUE) sbb r8w, word ptr [rdx + VALUE]
#define SBB_R8W_FROM_PTR_RDI_(VALUE) sbb r8w, word ptr [rdi + VALUE]
#define SBB_R8W_FROM_PTR_RSI_(VALUE) sbb r8w, word ptr [rsi + VALUE]
#define SBB_R8W_FROM_PTR_RBP_(VALUE) sbb r8w, word ptr [rbp + VALUE]
#define SBB_R8W_FROM_PTR_RSP_(VALUE) sbb r8w, word ptr [rsp + VALUE]
#define SBB_R8W_FROM_PTR_R8_(VALUE) sbb r8w, word ptr [r8 + VALUE]
#define SBB_R8W_FROM_PTR_R9_(VALUE) sbb r8w, word ptr [r9 + VALUE]
#define SBB_R8W_FROM_PTR_R10_(VALUE) sbb r8w, word ptr [r10 + VALUE]
#define SBB_R8W_FROM_PTR_R11_(VALUE) sbb r8w, word ptr [r11 + VALUE]
#define SBB_R8W_FROM_PTR_R12_(VALUE) sbb r8w, word ptr [r12 + VALUE]
#define SBB_R8W_FROM_PTR_R13_(VALUE) sbb r8w, word ptr [r13 + VALUE]
#define SBB_R8W_FROM_PTR_R14_(VALUE) sbb r8w, word ptr [r14 + VALUE]
#define SBB_R8W_FROM_PTR_R15_(VALUE) sbb r8w, word ptr [r15 + VALUE]
#define SBB_R8W_FROM_PTR_EAX_(VALUE) sbb r8w, word ptr [eax + VALUE]
#define SBB_R8W_FROM_PTR_EBX_(VALUE) sbb r8w, word ptr [ebx + VALUE]
#define SBB_R8W_FROM_PTR_ECX_(VALUE) sbb r8w, word ptr [ecx + VALUE]
#define SBB_R8W_FROM_PTR_EDX_(VALUE) sbb r8w, word ptr [edx + VALUE]
#define SBB_R8W_FROM_PTR_EDI_(VALUE) sbb r8w, word ptr [edi + VALUE]
#define SBB_R8W_FROM_PTR_ESI_(VALUE) sbb r8w, word ptr [esi + VALUE]
#define SBB_R8W_FROM_PTR_EBP_(VALUE) sbb r8w, word ptr [ebp + VALUE]
#define SBB_R8W_FROM_PTR_ESP_(VALUE) sbb r8w, word ptr [esp + VALUE]

#define SBB_R9W_FROM_PTR_RAX_(VALUE) sbb r9w, word ptr [rax + VALUE]
#define SBB_R9W_FROM_PTR_RBX_(VALUE) sbb r9w, word ptr [rbx + VALUE]
#define SBB_R9W_FROM_PTR_RCX_(VALUE) sbb r9w, word ptr [rcx + VALUE]
#define SBB_R9W_FROM_PTR_RDX_(VALUE) sbb r9w, word ptr [rdx + VALUE]
#define SBB_R9W_FROM_PTR_RDI_(VALUE) sbb r9w, word ptr [rdi + VALUE]
#define SBB_R9W_FROM_PTR_RSI_(VALUE) sbb r9w, word ptr [rsi + VALUE]
#define SBB_R9W_FROM_PTR_RBP_(VALUE) sbb r9w, word ptr [rbp + VALUE]
#define SBB_R9W_FROM_PTR_RSP_(VALUE) sbb r9w, word ptr [rsp + VALUE]
#define SBB_R9W_FROM_PTR_R8_(VALUE) sbb r9w, word ptr [r8 + VALUE]
#define SBB_R9W_FROM_PTR_R9_(VALUE) sbb r9w, word ptr [r9 + VALUE]
#define SBB_R9W_FROM_PTR_R10_(VALUE) sbb r9w, word ptr [r10 + VALUE]
#define SBB_R9W_FROM_PTR_R11_(VALUE) sbb r9w, word ptr [r11 + VALUE]
#define SBB_R9W_FROM_PTR_R12_(VALUE) sbb r9w, word ptr [r12 + VALUE]
#define SBB_R9W_FROM_PTR_R13_(VALUE) sbb r9w, word ptr [r13 + VALUE]
#define SBB_R9W_FROM_PTR_R14_(VALUE) sbb r9w, word ptr [r14 + VALUE]
#define SBB_R9W_FROM_PTR_R15_(VALUE) sbb r9w, word ptr [r15 + VALUE]
#define SBB_R9W_FROM_PTR_EAX_(VALUE) sbb r9w, word ptr [eax + VALUE]
#define SBB_R9W_FROM_PTR_EBX_(VALUE) sbb r9w, word ptr [ebx + VALUE]
#define SBB_R9W_FROM_PTR_ECX_(VALUE) sbb r9w, word ptr [ecx + VALUE]
#define SBB_R9W_FROM_PTR_EDX_(VALUE) sbb r9w, word ptr [edx + VALUE]
#define SBB_R9W_FROM_PTR_EDI_(VALUE) sbb r9w, word ptr [edi + VALUE]
#define SBB_R9W_FROM_PTR_ESI_(VALUE) sbb r9w, word ptr [esi + VALUE]
#define SBB_R9W_FROM_PTR_EBP_(VALUE) sbb r9w, word ptr [ebp + VALUE]
#define SBB_R9W_FROM_PTR_ESP_(VALUE) sbb r9w, word ptr [esp + VALUE]

#define SBB_R10W_FROM_PTR_RAX_(VALUE) sbb r10w, word ptr [rax + VALUE]
#define SBB_R10W_FROM_PTR_RBX_(VALUE) sbb r10w, word ptr [rbx + VALUE]
#define SBB_R10W_FROM_PTR_RCX_(VALUE) sbb r10w, word ptr [rcx + VALUE]
#define SBB_R10W_FROM_PTR_RDX_(VALUE) sbb r10w, word ptr [rdx + VALUE]
#define SBB_R10W_FROM_PTR_RDI_(VALUE) sbb r10w, word ptr [rdi + VALUE]
#define SBB_R10W_FROM_PTR_RSI_(VALUE) sbb r10w, word ptr [rsi + VALUE]
#define SBB_R10W_FROM_PTR_RBP_(VALUE) sbb r10w, word ptr [rbp + VALUE]
#define SBB_R10W_FROM_PTR_RSP_(VALUE) sbb r10w, word ptr [rsp + VALUE]
#define SBB_R10W_FROM_PTR_R8_(VALUE) sbb r10w, word ptr [r8 + VALUE]
#define SBB_R10W_FROM_PTR_R9_(VALUE) sbb r10w, word ptr [r9 + VALUE]
#define SBB_R10W_FROM_PTR_R10_(VALUE) sbb r10w, word ptr [r10 + VALUE]
#define SBB_R10W_FROM_PTR_R11_(VALUE) sbb r10w, word ptr [r11 + VALUE]
#define SBB_R10W_FROM_PTR_R12_(VALUE) sbb r10w, word ptr [r12 + VALUE]
#define SBB_R10W_FROM_PTR_R13_(VALUE) sbb r10w, word ptr [r13 + VALUE]
#define SBB_R10W_FROM_PTR_R14_(VALUE) sbb r10w, word ptr [r14 + VALUE]
#define SBB_R10W_FROM_PTR_R15_(VALUE) sbb r10w, word ptr [r15 + VALUE]
#define SBB_R10W_FROM_PTR_EAX_(VALUE) sbb r10w, word ptr [eax + VALUE]
#define SBB_R10W_FROM_PTR_EBX_(VALUE) sbb r10w, word ptr [ebx + VALUE]
#define SBB_R10W_FROM_PTR_ECX_(VALUE) sbb r10w, word ptr [ecx + VALUE]
#define SBB_R10W_FROM_PTR_EDX_(VALUE) sbb r10w, word ptr [edx + VALUE]
#define SBB_R10W_FROM_PTR_EDI_(VALUE) sbb r10w, word ptr [edi + VALUE]
#define SBB_R10W_FROM_PTR_ESI_(VALUE) sbb r10w, word ptr [esi + VALUE]
#define SBB_R10W_FROM_PTR_EBP_(VALUE) sbb r10w, word ptr [ebp + VALUE]
#define SBB_R10W_FROM_PTR_ESP_(VALUE) sbb r10w, word ptr [esp + VALUE]

#define SBB_R11W_FROM_PTR_RAX_(VALUE) sbb r11w, word ptr [rax + VALUE]
#define SBB_R11W_FROM_PTR_RBX_(VALUE) sbb r11w, word ptr [rbx + VALUE]
#define SBB_R11W_FROM_PTR_RCX_(VALUE) sbb r11w, word ptr [rcx + VALUE]
#define SBB_R11W_FROM_PTR_RDX_(VALUE) sbb r11w, word ptr [rdx + VALUE]
#define SBB_R11W_FROM_PTR_RDI_(VALUE) sbb r11w, word ptr [rdi + VALUE]
#define SBB_R11W_FROM_PTR_RSI_(VALUE) sbb r11w, word ptr [rsi + VALUE]
#define SBB_R11W_FROM_PTR_RBP_(VALUE) sbb r11w, word ptr [rbp + VALUE]
#define SBB_R11W_FROM_PTR_RSP_(VALUE) sbb r11w, word ptr [rsp + VALUE]
#define SBB_R11W_FROM_PTR_R8_(VALUE) sbb r11w, word ptr [r8 + VALUE]
#define SBB_R11W_FROM_PTR_R9_(VALUE) sbb r11w, word ptr [r9 + VALUE]
#define SBB_R11W_FROM_PTR_R10_(VALUE) sbb r11w, word ptr [r10 + VALUE]
#define SBB_R11W_FROM_PTR_R11_(VALUE) sbb r11w, word ptr [r11 + VALUE]
#define SBB_R11W_FROM_PTR_R12_(VALUE) sbb r11w, word ptr [r12 + VALUE]
#define SBB_R11W_FROM_PTR_R13_(VALUE) sbb r11w, word ptr [r13 + VALUE]
#define SBB_R11W_FROM_PTR_R14_(VALUE) sbb r11w, word ptr [r14 + VALUE]
#define SBB_R11W_FROM_PTR_R15_(VALUE) sbb r11w, word ptr [r15 + VALUE]
#define SBB_R11W_FROM_PTR_EAX_(VALUE) sbb r11w, word ptr [eax + VALUE]
#define SBB_R11W_FROM_PTR_EBX_(VALUE) sbb r11w, word ptr [ebx + VALUE]
#define SBB_R11W_FROM_PTR_ECX_(VALUE) sbb r11w, word ptr [ecx + VALUE]
#define SBB_R11W_FROM_PTR_EDX_(VALUE) sbb r11w, word ptr [edx + VALUE]
#define SBB_R11W_FROM_PTR_EDI_(VALUE) sbb r11w, word ptr [edi + VALUE]
#define SBB_R11W_FROM_PTR_ESI_(VALUE) sbb r11w, word ptr [esi + VALUE]
#define SBB_R11W_FROM_PTR_EBP_(VALUE) sbb r11w, word ptr [ebp + VALUE]
#define SBB_R11W_FROM_PTR_ESP_(VALUE) sbb r11w, word ptr [esp + VALUE]

#define SBB_R12W_FROM_PTR_RAX_(VALUE) sbb r12w, word ptr [rax + VALUE]
#define SBB_R12W_FROM_PTR_RBX_(VALUE) sbb r12w, word ptr [rbx + VALUE]
#define SBB_R12W_FROM_PTR_RCX_(VALUE) sbb r12w, word ptr [rcx + VALUE]
#define SBB_R12W_FROM_PTR_RDX_(VALUE) sbb r12w, word ptr [rdx + VALUE]
#define SBB_R12W_FROM_PTR_RDI_(VALUE) sbb r12w, word ptr [rdi + VALUE]
#define SBB_R12W_FROM_PTR_RSI_(VALUE) sbb r12w, word ptr [rsi + VALUE]
#define SBB_R12W_FROM_PTR_RBP_(VALUE) sbb r12w, word ptr [rbp + VALUE]
#define SBB_R12W_FROM_PTR_RSP_(VALUE) sbb r12w, word ptr [rsp + VALUE]
#define SBB_R12W_FROM_PTR_R8_(VALUE) sbb r12w, word ptr [r8 + VALUE]
#define SBB_R12W_FROM_PTR_R9_(VALUE) sbb r12w, word ptr [r9 + VALUE]
#define SBB_R12W_FROM_PTR_R10_(VALUE) sbb r12w, word ptr [r10 + VALUE]
#define SBB_R12W_FROM_PTR_R11_(VALUE) sbb r12w, word ptr [r11 + VALUE]
#define SBB_R12W_FROM_PTR_R12_(VALUE) sbb r12w, word ptr [r12 + VALUE]
#define SBB_R12W_FROM_PTR_R13_(VALUE) sbb r12w, word ptr [r13 + VALUE]
#define SBB_R12W_FROM_PTR_R14_(VALUE) sbb r12w, word ptr [r14 + VALUE]
#define SBB_R12W_FROM_PTR_R15_(VALUE) sbb r12w, word ptr [r15 + VALUE]
#define SBB_R12W_FROM_PTR_EAX_(VALUE) sbb r12w, word ptr [eax + VALUE]
#define SBB_R12W_FROM_PTR_EBX_(VALUE) sbb r12w, word ptr [ebx + VALUE]
#define SBB_R12W_FROM_PTR_ECX_(VALUE) sbb r12w, word ptr [ecx + VALUE]
#define SBB_R12W_FROM_PTR_EDX_(VALUE) sbb r12w, word ptr [edx + VALUE]
#define SBB_R12W_FROM_PTR_EDI_(VALUE) sbb r12w, word ptr [edi + VALUE]
#define SBB_R12W_FROM_PTR_ESI_(VALUE) sbb r12w, word ptr [esi + VALUE]
#define SBB_R12W_FROM_PTR_EBP_(VALUE) sbb r12w, word ptr [ebp + VALUE]
#define SBB_R12W_FROM_PTR_ESP_(VALUE) sbb r12w, word ptr [esp + VALUE]

#define SBB_R13W_FROM_PTR_RAX_(VALUE) sbb r13w, word ptr [rax + VALUE]
#define SBB_R13W_FROM_PTR_RBX_(VALUE) sbb r13w, word ptr [rbx + VALUE]
#define SBB_R13W_FROM_PTR_RCX_(VALUE) sbb r13w, word ptr [rcx + VALUE]
#define SBB_R13W_FROM_PTR_RDX_(VALUE) sbb r13w, word ptr [rdx + VALUE]
#define SBB_R13W_FROM_PTR_RDI_(VALUE) sbb r13w, word ptr [rdi + VALUE]
#define SBB_R13W_FROM_PTR_RSI_(VALUE) sbb r13w, word ptr [rsi + VALUE]
#define SBB_R13W_FROM_PTR_RBP_(VALUE) sbb r13w, word ptr [rbp + VALUE]
#define SBB_R13W_FROM_PTR_RSP_(VALUE) sbb r13w, word ptr [rsp + VALUE]
#define SBB_R13W_FROM_PTR_R8_(VALUE) sbb r13w, word ptr [r8 + VALUE]
#define SBB_R13W_FROM_PTR_R9_(VALUE) sbb r13w, word ptr [r9 + VALUE]
#define SBB_R13W_FROM_PTR_R10_(VALUE) sbb r13w, word ptr [r10 + VALUE]
#define SBB_R13W_FROM_PTR_R11_(VALUE) sbb r13w, word ptr [r11 + VALUE]
#define SBB_R13W_FROM_PTR_R12_(VALUE) sbb r13w, word ptr [r12 + VALUE]
#define SBB_R13W_FROM_PTR_R13_(VALUE) sbb r13w, word ptr [r13 + VALUE]
#define SBB_R13W_FROM_PTR_R14_(VALUE) sbb r13w, word ptr [r14 + VALUE]
#define SBB_R13W_FROM_PTR_R15_(VALUE) sbb r13w, word ptr [r15 + VALUE]
#define SBB_R13W_FROM_PTR_EAX_(VALUE) sbb r13w, word ptr [eax + VALUE]
#define SBB_R13W_FROM_PTR_EBX_(VALUE) sbb r13w, word ptr [ebx + VALUE]
#define SBB_R13W_FROM_PTR_ECX_(VALUE) sbb r13w, word ptr [ecx + VALUE]
#define SBB_R13W_FROM_PTR_EDX_(VALUE) sbb r13w, word ptr [edx + VALUE]
#define SBB_R13W_FROM_PTR_EDI_(VALUE) sbb r13w, word ptr [edi + VALUE]
#define SBB_R13W_FROM_PTR_ESI_(VALUE) sbb r13w, word ptr [esi + VALUE]
#define SBB_R13W_FROM_PTR_EBP_(VALUE) sbb r13w, word ptr [ebp + VALUE]
#define SBB_R13W_FROM_PTR_ESP_(VALUE) sbb r13w, word ptr [esp + VALUE]

#define SBB_R14W_FROM_PTR_RAX_(VALUE) sbb r14w, word ptr [rax + VALUE]
#define SBB_R14W_FROM_PTR_RBX_(VALUE) sbb r14w, word ptr [rbx + VALUE]
#define SBB_R14W_FROM_PTR_RCX_(VALUE) sbb r14w, word ptr [rcx + VALUE]
#define SBB_R14W_FROM_PTR_RDX_(VALUE) sbb r14w, word ptr [rdx + VALUE]
#define SBB_R14W_FROM_PTR_RDI_(VALUE) sbb r14w, word ptr [rdi + VALUE]
#define SBB_R14W_FROM_PTR_RSI_(VALUE) sbb r14w, word ptr [rsi + VALUE]
#define SBB_R14W_FROM_PTR_RBP_(VALUE) sbb r14w, word ptr [rbp + VALUE]
#define SBB_R14W_FROM_PTR_RSP_(VALUE) sbb r14w, word ptr [rsp + VALUE]
#define SBB_R14W_FROM_PTR_R8_(VALUE) sbb r14w, word ptr [r8 + VALUE]
#define SBB_R14W_FROM_PTR_R9_(VALUE) sbb r14w, word ptr [r9 + VALUE]
#define SBB_R14W_FROM_PTR_R10_(VALUE) sbb r14w, word ptr [r10 + VALUE]
#define SBB_R14W_FROM_PTR_R11_(VALUE) sbb r14w, word ptr [r11 + VALUE]
#define SBB_R14W_FROM_PTR_R12_(VALUE) sbb r14w, word ptr [r12 + VALUE]
#define SBB_R14W_FROM_PTR_R13_(VALUE) sbb r14w, word ptr [r13 + VALUE]
#define SBB_R14W_FROM_PTR_R14_(VALUE) sbb r14w, word ptr [r14 + VALUE]
#define SBB_R14W_FROM_PTR_R15_(VALUE) sbb r14w, word ptr [r15 + VALUE]
#define SBB_R14W_FROM_PTR_EAX_(VALUE) sbb r14w, word ptr [eax + VALUE]
#define SBB_R14W_FROM_PTR_EBX_(VALUE) sbb r14w, word ptr [ebx + VALUE]
#define SBB_R14W_FROM_PTR_ECX_(VALUE) sbb r14w, word ptr [ecx + VALUE]
#define SBB_R14W_FROM_PTR_EDX_(VALUE) sbb r14w, word ptr [edx + VALUE]
#define SBB_R14W_FROM_PTR_EDI_(VALUE) sbb r14w, word ptr [edi + VALUE]
#define SBB_R14W_FROM_PTR_ESI_(VALUE) sbb r14w, word ptr [esi + VALUE]
#define SBB_R14W_FROM_PTR_EBP_(VALUE) sbb r14w, word ptr [ebp + VALUE]
#define SBB_R14W_FROM_PTR_ESP_(VALUE) sbb r14w, word ptr [esp + VALUE]

#define SBB_R15W_FROM_PTR_RAX_(VALUE) sbb r15w, word ptr [rax + VALUE]
#define SBB_R15W_FROM_PTR_RBX_(VALUE) sbb r15w, word ptr [rbx + VALUE]
#define SBB_R15W_FROM_PTR_RCX_(VALUE) sbb r15w, word ptr [rcx + VALUE]
#define SBB_R15W_FROM_PTR_RDX_(VALUE) sbb r15w, word ptr [rdx + VALUE]
#define SBB_R15W_FROM_PTR_RDI_(VALUE) sbb r15w, word ptr [rdi + VALUE]
#define SBB_R15W_FROM_PTR_RSI_(VALUE) sbb r15w, word ptr [rsi + VALUE]
#define SBB_R15W_FROM_PTR_RBP_(VALUE) sbb r15w, word ptr [rbp + VALUE]
#define SBB_R15W_FROM_PTR_RSP_(VALUE) sbb r15w, word ptr [rsp + VALUE]
#define SBB_R15W_FROM_PTR_R8_(VALUE) sbb r15w, word ptr [r8 + VALUE]
#define SBB_R15W_FROM_PTR_R9_(VALUE) sbb r15w, word ptr [r9 + VALUE]
#define SBB_R15W_FROM_PTR_R10_(VALUE) sbb r15w, word ptr [r10 + VALUE]
#define SBB_R15W_FROM_PTR_R11_(VALUE) sbb r15w, word ptr [r11 + VALUE]
#define SBB_R15W_FROM_PTR_R12_(VALUE) sbb r15w, word ptr [r12 + VALUE]
#define SBB_R15W_FROM_PTR_R13_(VALUE) sbb r15w, word ptr [r13 + VALUE]
#define SBB_R15W_FROM_PTR_R14_(VALUE) sbb r15w, word ptr [r14 + VALUE]
#define SBB_R15W_FROM_PTR_R15_(VALUE) sbb r15w, word ptr [r15 + VALUE]
#define SBB_R15W_FROM_PTR_EAX_(VALUE) sbb r15w, word ptr [eax + VALUE]
#define SBB_R15W_FROM_PTR_EBX_(VALUE) sbb r15w, word ptr [ebx + VALUE]
#define SBB_R15W_FROM_PTR_ECX_(VALUE) sbb r15w, word ptr [ecx + VALUE]
#define SBB_R15W_FROM_PTR_EDX_(VALUE) sbb r15w, word ptr [edx + VALUE]
#define SBB_R15W_FROM_PTR_EDI_(VALUE) sbb r15w, word ptr [edi + VALUE]
#define SBB_R15W_FROM_PTR_ESI_(VALUE) sbb r15w, word ptr [esi + VALUE]
#define SBB_R15W_FROM_PTR_EBP_(VALUE) sbb r15w, word ptr [ebp + VALUE]
#define SBB_R15W_FROM_PTR_ESP_(VALUE) sbb r15w, word ptr [esp + VALUE]

#define SBB_AX_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], ax
#define SBB_AX_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], ax
#define SBB_AX_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], ax
#define SBB_AX_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], ax
#define SBB_AX_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], ax
#define SBB_AX_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], ax
#define SBB_AX_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], ax
#define SBB_AX_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], ax
#define SBB_AX_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], ax
#define SBB_AX_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], ax
#define SBB_AX_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], ax
#define SBB_AX_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], ax
#define SBB_AX_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], ax
#define SBB_AX_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], ax
#define SBB_AX_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], ax
#define SBB_AX_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], ax
#define SBB_AX_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], ax
#define SBB_AX_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], ax
#define SBB_AX_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], ax
#define SBB_AX_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], ax
#define SBB_AX_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], ax
#define SBB_AX_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], ax
#define SBB_AX_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], ax
#define SBB_AX_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], ax

#define SBB_BX_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], bx
#define SBB_BX_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], bx
#define SBB_BX_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], bx
#define SBB_BX_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], bx
#define SBB_BX_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], bx
#define SBB_BX_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], bx
#define SBB_BX_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], bx
#define SBB_BX_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], bx
#define SBB_BX_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], bx
#define SBB_BX_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], bx
#define SBB_BX_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], bx
#define SBB_BX_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], bx
#define SBB_BX_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], bx
#define SBB_BX_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], bx
#define SBB_BX_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], bx
#define SBB_BX_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], bx
#define SBB_BX_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], bx
#define SBB_BX_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], bx
#define SBB_BX_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], bx
#define SBB_BX_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], bx
#define SBB_BX_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], bx
#define SBB_BX_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], bx
#define SBB_BX_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], bx
#define SBB_BX_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], bx

#define SBB_CX_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], cx
#define SBB_CX_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], cx
#define SBB_CX_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], cx
#define SBB_CX_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], cx
#define SBB_CX_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], cx
#define SBB_CX_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], cx
#define SBB_CX_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], cx
#define SBB_CX_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], cx
#define SBB_CX_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], cx
#define SBB_CX_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], cx
#define SBB_CX_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], cx
#define SBB_CX_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], cx
#define SBB_CX_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], cx
#define SBB_CX_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], cx
#define SBB_CX_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], cx
#define SBB_CX_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], cx
#define SBB_CX_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], cx
#define SBB_CX_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], cx
#define SBB_CX_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], cx
#define SBB_CX_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], cx
#define SBB_CX_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], cx
#define SBB_CX_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], cx
#define SBB_CX_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], cx
#define SBB_CX_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], cx

#define SBB_DX_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], dx
#define SBB_DX_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], dx
#define SBB_DX_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], dx
#define SBB_DX_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], dx
#define SBB_DX_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], dx
#define SBB_DX_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], dx
#define SBB_DX_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], dx
#define SBB_DX_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], dx
#define SBB_DX_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], dx
#define SBB_DX_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], dx
#define SBB_DX_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], dx
#define SBB_DX_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], dx
#define SBB_DX_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], dx
#define SBB_DX_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], dx
#define SBB_DX_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], dx
#define SBB_DX_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], dx
#define SBB_DX_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], dx
#define SBB_DX_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], dx
#define SBB_DX_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], dx
#define SBB_DX_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], dx
#define SBB_DX_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], dx
#define SBB_DX_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], dx
#define SBB_DX_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], dx
#define SBB_DX_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], dx

#define SBB_DI_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], di
#define SBB_DI_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], di
#define SBB_DI_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], di
#define SBB_DI_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], di
#define SBB_DI_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], di
#define SBB_DI_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], di
#define SBB_DI_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], di
#define SBB_DI_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], di
#define SBB_DI_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], di
#define SBB_DI_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], di
#define SBB_DI_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], di
#define SBB_DI_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], di
#define SBB_DI_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], di
#define SBB_DI_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], di
#define SBB_DI_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], di
#define SBB_DI_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], di
#define SBB_DI_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], di
#define SBB_DI_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], di
#define SBB_DI_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], di
#define SBB_DI_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], di
#define SBB_DI_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], di
#define SBB_DI_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], di
#define SBB_DI_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], di
#define SBB_DI_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], di

#define SBB_SI_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], si
#define SBB_SI_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], si
#define SBB_SI_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], si
#define SBB_SI_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], si
#define SBB_SI_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], si
#define SBB_SI_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], si
#define SBB_SI_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], si
#define SBB_SI_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], si
#define SBB_SI_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], si
#define SBB_SI_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], si
#define SBB_SI_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], si
#define SBB_SI_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], si
#define SBB_SI_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], si
#define SBB_SI_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], si
#define SBB_SI_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], si
#define SBB_SI_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], si
#define SBB_SI_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], si
#define SBB_SI_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], si
#define SBB_SI_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], si
#define SBB_SI_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], si
#define SBB_SI_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], si
#define SBB_SI_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], si
#define SBB_SI_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], si
#define SBB_SI_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], si

#define SBB_BP_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], bp
#define SBB_BP_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], bp
#define SBB_BP_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], bp
#define SBB_BP_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], bp
#define SBB_BP_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], bp
#define SBB_BP_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], bp
#define SBB_BP_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], bp
#define SBB_BP_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], bp
#define SBB_BP_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], bp
#define SBB_BP_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], bp
#define SBB_BP_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], bp
#define SBB_BP_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], bp
#define SBB_BP_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], bp
#define SBB_BP_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], bp
#define SBB_BP_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], bp
#define SBB_BP_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], bp
#define SBB_BP_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], bp
#define SBB_BP_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], bp
#define SBB_BP_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], bp
#define SBB_BP_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], bp
#define SBB_BP_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], bp
#define SBB_BP_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], bp
#define SBB_BP_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], bp
#define SBB_BP_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], bp

#define SBB_SP_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], sp
#define SBB_SP_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], sp
#define SBB_SP_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], sp
#define SBB_SP_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], sp
#define SBB_SP_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], sp
#define SBB_SP_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], sp
#define SBB_SP_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], sp
#define SBB_SP_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], sp
#define SBB_SP_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], sp
#define SBB_SP_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], sp
#define SBB_SP_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], sp
#define SBB_SP_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], sp
#define SBB_SP_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], sp
#define SBB_SP_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], sp
#define SBB_SP_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], sp
#define SBB_SP_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], sp
#define SBB_SP_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], sp
#define SBB_SP_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], sp
#define SBB_SP_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], sp
#define SBB_SP_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], sp
#define SBB_SP_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], sp
#define SBB_SP_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], sp
#define SBB_SP_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], sp
#define SBB_SP_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], sp

#define SBB_R8W_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], r8w
#define SBB_R8W_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], r8w
#define SBB_R8W_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], r8w
#define SBB_R8W_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], r8w
#define SBB_R8W_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], r8w
#define SBB_R8W_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], r8w
#define SBB_R8W_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], r8w
#define SBB_R8W_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], r8w
#define SBB_R8W_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], r8w
#define SBB_R8W_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], r8w
#define SBB_R8W_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], r8w
#define SBB_R8W_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], r8w
#define SBB_R8W_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], r8w
#define SBB_R8W_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], r8w
#define SBB_R8W_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], r8w
#define SBB_R8W_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], r8w
#define SBB_R8W_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], r8w
#define SBB_R8W_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], r8w
#define SBB_R8W_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], r8w
#define SBB_R8W_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], r8w
#define SBB_R8W_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], r8w
#define SBB_R8W_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], r8w
#define SBB_R8W_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], r8w
#define SBB_R8W_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], r8w

#define SBB_R9W_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], r9w
#define SBB_R9W_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], r9w
#define SBB_R9W_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], r9w
#define SBB_R9W_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], r9w
#define SBB_R9W_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], r9w
#define SBB_R9W_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], r9w
#define SBB_R9W_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], r9w
#define SBB_R9W_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], r9w
#define SBB_R9W_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], r9w
#define SBB_R9W_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], r9w
#define SBB_R9W_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], r9w
#define SBB_R9W_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], r9w
#define SBB_R9W_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], r9w
#define SBB_R9W_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], r9w
#define SBB_R9W_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], r9w
#define SBB_R9W_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], r9w
#define SBB_R9W_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], r9w
#define SBB_R9W_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], r9w
#define SBB_R9W_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], r9w
#define SBB_R9W_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], r9w
#define SBB_R9W_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], r9w
#define SBB_R9W_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], r9w
#define SBB_R9W_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], r9w
#define SBB_R9W_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], r9w

#define SBB_R10W_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], r10w
#define SBB_R10W_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], r10w
#define SBB_R10W_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], r10w
#define SBB_R10W_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], r10w
#define SBB_R10W_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], r10w
#define SBB_R10W_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], r10w
#define SBB_R10W_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], r10w
#define SBB_R10W_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], r10w
#define SBB_R10W_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], r10w
#define SBB_R10W_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], r10w
#define SBB_R10W_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], r10w
#define SBB_R10W_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], r10w
#define SBB_R10W_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], r10w
#define SBB_R10W_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], r10w
#define SBB_R10W_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], r10w
#define SBB_R10W_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], r10w
#define SBB_R10W_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], r10w
#define SBB_R10W_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], r10w
#define SBB_R10W_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], r10w
#define SBB_R10W_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], r10w
#define SBB_R10W_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], r10w
#define SBB_R10W_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], r10w
#define SBB_R10W_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], r10w
#define SBB_R10W_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], r10w

#define SBB_R11W_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], r11w
#define SBB_R11W_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], r11w
#define SBB_R11W_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], r11w
#define SBB_R11W_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], r11w
#define SBB_R11W_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], r11w
#define SBB_R11W_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], r11w
#define SBB_R11W_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], r11w
#define SBB_R11W_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], r11w
#define SBB_R11W_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], r11w
#define SBB_R11W_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], r11w
#define SBB_R11W_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], r11w
#define SBB_R11W_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], r11w
#define SBB_R11W_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], r11w
#define SBB_R11W_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], r11w
#define SBB_R11W_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], r11w
#define SBB_R11W_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], r11w
#define SBB_R11W_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], r11w
#define SBB_R11W_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], r11w
#define SBB_R11W_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], r11w
#define SBB_R11W_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], r11w
#define SBB_R11W_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], r11w
#define SBB_R11W_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], r11w
#define SBB_R11W_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], r11w
#define SBB_R11W_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], r11w

#define SBB_R12W_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], r12w
#define SBB_R12W_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], r12w
#define SBB_R12W_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], r12w
#define SBB_R12W_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], r12w
#define SBB_R12W_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], r12w
#define SBB_R12W_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], r12w
#define SBB_R12W_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], r12w
#define SBB_R12W_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], r12w
#define SBB_R12W_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], r12w
#define SBB_R12W_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], r12w
#define SBB_R12W_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], r12w
#define SBB_R12W_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], r12w
#define SBB_R12W_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], r12w
#define SBB_R12W_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], r12w
#define SBB_R12W_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], r12w
#define SBB_R12W_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], r12w
#define SBB_R12W_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], r12w
#define SBB_R12W_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], r12w
#define SBB_R12W_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], r12w
#define SBB_R12W_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], r12w
#define SBB_R12W_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], r12w
#define SBB_R12W_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], r12w
#define SBB_R12W_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], r12w
#define SBB_R12W_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], r12w

#define SBB_R13W_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], r13w
#define SBB_R13W_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], r13w
#define SBB_R13W_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], r13w
#define SBB_R13W_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], r13w
#define SBB_R13W_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], r13w
#define SBB_R13W_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], r13w
#define SBB_R13W_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], r13w
#define SBB_R13W_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], r13w
#define SBB_R13W_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], r13w
#define SBB_R13W_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], r13w
#define SBB_R13W_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], r13w
#define SBB_R13W_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], r13w
#define SBB_R13W_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], r13w
#define SBB_R13W_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], r13w
#define SBB_R13W_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], r13w
#define SBB_R13W_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], r13w
#define SBB_R13W_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], r13w
#define SBB_R13W_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], r13w
#define SBB_R13W_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], r13w
#define SBB_R13W_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], r13w
#define SBB_R13W_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], r13w
#define SBB_R13W_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], r13w
#define SBB_R13W_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], r13w
#define SBB_R13W_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], r13w

#define SBB_R14W_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], r14w
#define SBB_R14W_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], r14w
#define SBB_R14W_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], r14w
#define SBB_R14W_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], r14w
#define SBB_R14W_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], r14w
#define SBB_R14W_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], r14w
#define SBB_R14W_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], r14w
#define SBB_R14W_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], r14w
#define SBB_R14W_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], r14w
#define SBB_R14W_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], r14w
#define SBB_R14W_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], r14w
#define SBB_R14W_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], r14w
#define SBB_R14W_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], r14w
#define SBB_R14W_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], r14w
#define SBB_R14W_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], r14w
#define SBB_R14W_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], r14w
#define SBB_R14W_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], r14w
#define SBB_R14W_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], r14w
#define SBB_R14W_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], r14w
#define SBB_R14W_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], r14w
#define SBB_R14W_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], r14w
#define SBB_R14W_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], r14w
#define SBB_R14W_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], r14w
#define SBB_R14W_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], r14w

#define SBB_R15W_TO_PTR_RAX_(VALUE) sbb word ptr [rax + VALUE], r15w
#define SBB_R15W_TO_PTR_RBX_(VALUE) sbb word ptr [rbx + VALUE], r15w
#define SBB_R15W_TO_PTR_RCX_(VALUE) sbb word ptr [rcx + VALUE], r15w
#define SBB_R15W_TO_PTR_RDX_(VALUE) sbb word ptr [rdx + VALUE], r15w
#define SBB_R15W_TO_PTR_RDI_(VALUE) sbb word ptr [rdi + VALUE], r15w
#define SBB_R15W_TO_PTR_RSI_(VALUE) sbb word ptr [rsi + VALUE], r15w
#define SBB_R15W_TO_PTR_RBP_(VALUE) sbb word ptr [rbp + VALUE], r15w
#define SBB_R15W_TO_PTR_RSP_(VALUE) sbb word ptr [rsp + VALUE], r15w
#define SBB_R15W_TO_PTR_R8_(VALUE) sbb word ptr [r8 + VALUE], r15w
#define SBB_R15W_TO_PTR_R9_(VALUE) sbb word ptr [r9 + VALUE], r15w
#define SBB_R15W_TO_PTR_R10_(VALUE) sbb word ptr [r10 + VALUE], r15w
#define SBB_R15W_TO_PTR_R11_(VALUE) sbb word ptr [r11 + VALUE], r15w
#define SBB_R15W_TO_PTR_R12_(VALUE) sbb word ptr [r12 + VALUE], r15w
#define SBB_R15W_TO_PTR_R13_(VALUE) sbb word ptr [r13 + VALUE], r15w
#define SBB_R15W_TO_PTR_R14_(VALUE) sbb word ptr [r14 + VALUE], r15w
#define SBB_R15W_TO_PTR_R15_(VALUE) sbb word ptr [r15 + VALUE], r15w
#define SBB_R15W_TO_PTR_EAX_(VALUE) sbb word ptr [eax + VALUE], r15w
#define SBB_R15W_TO_PTR_EBX_(VALUE) sbb word ptr [ebx + VALUE], r15w
#define SBB_R15W_TO_PTR_ECX_(VALUE) sbb word ptr [ecx + VALUE], r15w
#define SBB_R15W_TO_PTR_EDX_(VALUE) sbb word ptr [edx + VALUE], r15w
#define SBB_R15W_TO_PTR_EDI_(VALUE) sbb word ptr [edi + VALUE], r15w
#define SBB_R15W_TO_PTR_ESI_(VALUE) sbb word ptr [esi + VALUE], r15w
#define SBB_R15W_TO_PTR_EBP_(VALUE) sbb word ptr [ebp + VALUE], r15w
#define SBB_R15W_TO_PTR_ESP_(VALUE) sbb word ptr [esp + VALUE], r15w
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
