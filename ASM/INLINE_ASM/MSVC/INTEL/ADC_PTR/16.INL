#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define ADC_AL_FROM_PTR_(VALUE) adc al, byte ptr [VALUE]
#define ADC_BL_FROM_PTR_(VALUE) adc bl, byte ptr [VALUE]
#define ADC_CL_FROM_PTR_(VALUE) adc cl, byte ptr [VALUE]
#define ADC_DL_FROM_PTR_(VALUE) adc dl, byte ptr [VALUE]

#define ADC_AL_TO_PTR_(VALUE) adc byte ptr [VALUE], al
#define ADC_BL_TO_PTR_(VALUE) adc byte ptr [VALUE], bl
#define ADC_CL_TO_PTR_(VALUE) adc byte ptr [VALUE], cl
#define ADC_DL_TO_PTR_(VALUE) adc byte ptr [VALUE], dl

#define ADC_AL_FROM_PTR_BX adc al, byte ptr [bx]
#define ADC_AL_FROM_PTR_BP adc al, byte ptr [bp]
#define ADC_AL_FROM_PTR_SI adc al, byte ptr [si]
#define ADC_AL_FROM_PTR_DI adc al, byte ptr [di]

#define ADC_BL_FROM_PTR_BX adc bl, byte ptr [bx]
#define ADC_BL_FROM_PTR_BP adc bl, byte ptr [bp]
#define ADC_BL_FROM_PTR_SI adc bl, byte ptr [si]
#define ADC_BL_FROM_PTR_DI adc bl, byte ptr [di]

#define ADC_CL_FROM_PTR_BX adc cl, byte ptr [bx]
#define ADC_CL_FROM_PTR_BP adc cl, byte ptr [bp]
#define ADC_CL_FROM_PTR_SI adc cl, byte ptr [si]
#define ADC_CL_FROM_PTR_DI adc cl, byte ptr [di]

#define ADC_DL_FROM_PTR_BX adc dl, byte ptr [bx]
#define ADC_DL_FROM_PTR_BP adc dl, byte ptr [bp]
#define ADC_DL_FROM_PTR_SI adc dl, byte ptr [si]
#define ADC_DL_FROM_PTR_DI adc dl, byte ptr [di]

#define ADC_AL_TO_PTR_BX adc byte ptr [bx], al
#define ADC_AL_TO_PTR_BP adc byte ptr [bp], al
#define ADC_AL_TO_PTR_SI adc byte ptr [si], al
#define ADC_AL_TO_PTR_DI adc byte ptr [di], al

#define ADC_BL_TO_PTR_BX adc byte ptr [bx], bl
#define ADC_BL_TO_PTR_BP adc byte ptr [bp], bl
#define ADC_BL_TO_PTR_SI adc byte ptr [si], bl
#define ADC_BL_TO_PTR_DI adc byte ptr [di], bl

#define ADC_CL_TO_PTR_BX adc byte ptr [bx], cl
#define ADC_CL_TO_PTR_BP adc byte ptr [bp], cl
#define ADC_CL_TO_PTR_SI adc byte ptr [si], cl
#define ADC_CL_TO_PTR_DI adc byte ptr [di], cl

#define ADC_DL_TO_PTR_BX adc byte ptr [bx], dl
#define ADC_DL_TO_PTR_BP adc byte ptr [bp], dl
#define ADC_DL_TO_PTR_SI adc byte ptr [si], dl
#define ADC_DL_TO_PTR_DI adc byte ptr [di], dl

#define ADC_AL_FROM_PTR_BX_(VALUE) adc al, byte ptr [bx + VALUE]
#define ADC_AL_FROM_PTR_BP_(VALUE) adc al, byte ptr [bp + VALUE]
#define ADC_AL_FROM_PTR_SI_(VALUE) adc al, byte ptr [si + VALUE]
#define ADC_AL_FROM_PTR_DI_(VALUE) adc al, byte ptr [di + VALUE]

#define ADC_BL_FROM_PTR_BX_(VALUE) adc bl, byte ptr [bx + VALUE]
#define ADC_BL_FROM_PTR_BP_(VALUE) adc bl, byte ptr [bp + VALUE]
#define ADC_BL_FROM_PTR_SI_(VALUE) adc bl, byte ptr [si + VALUE]
#define ADC_BL_FROM_PTR_DI_(VALUE) adc bl, byte ptr [di + VALUE]

#define ADC_CL_FROM_PTR_BX_(VALUE) adc cl, byte ptr [bx + VALUE]
#define ADC_CL_FROM_PTR_BP_(VALUE) adc cl, byte ptr [bp + VALUE]
#define ADC_CL_FROM_PTR_SI_(VALUE) adc cl, byte ptr [si + VALUE]
#define ADC_CL_FROM_PTR_DI_(VALUE) adc cl, byte ptr [di + VALUE]

#define ADC_DL_FROM_PTR_BX_(VALUE) adc dl, byte ptr [bx + VALUE]
#define ADC_DL_FROM_PTR_BP_(VALUE) adc dl, byte ptr [bp + VALUE]
#define ADC_DL_FROM_PTR_SI_(VALUE) adc dl, byte ptr [si + VALUE]
#define ADC_DL_FROM_PTR_DI_(VALUE) adc dl, byte ptr [di + VALUE]

#define ADC_AL_TO_PTR_BX_(VALUE) adc byte ptr [bx + VALUE], al
#define ADC_AL_TO_PTR_BP_(VALUE) adc byte ptr [bp + VALUE], al
#define ADC_AL_TO_PTR_SI_(VALUE) adc byte ptr [si + VALUE], al
#define ADC_AL_TO_PTR_DI_(VALUE) adc byte ptr [di + VALUE], al

#define ADC_BL_TO_PTR_BX_(VALUE) adc byte ptr [bx + VALUE], bl
#define ADC_BL_TO_PTR_BP_(VALUE) adc byte ptr [bp + VALUE], bl
#define ADC_BL_TO_PTR_SI_(VALUE) adc byte ptr [si + VALUE], bl
#define ADC_BL_TO_PTR_DI_(VALUE) adc byte ptr [di + VALUE], bl

#define ADC_CL_TO_PTR_BX_(VALUE) adc byte ptr [bx + VALUE], cl
#define ADC_CL_TO_PTR_BP_(VALUE) adc byte ptr [bp + VALUE], cl
#define ADC_CL_TO_PTR_SI_(VALUE) adc byte ptr [si + VALUE], cl
#define ADC_CL_TO_PTR_DI_(VALUE) adc byte ptr [di + VALUE], cl

#define ADC_DL_TO_PTR_BX_(VALUE) adc byte ptr [bx + VALUE], dl
#define ADC_DL_TO_PTR_BP_(VALUE) adc byte ptr [bp + VALUE], dl
#define ADC_DL_TO_PTR_SI_(VALUE) adc byte ptr [si + VALUE], dl
#define ADC_DL_TO_PTR_DI_(VALUE) adc byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADC_AL_FROM_PTR_(VALUE) adc al, byte ptr [VALUE]
#define ADC_BL_FROM_PTR_(VALUE) adc bl, byte ptr [VALUE]
#define ADC_CL_FROM_PTR_(VALUE) adc cl, byte ptr [VALUE]
#define ADC_DL_FROM_PTR_(VALUE) adc dl, byte ptr [VALUE]

#define ADC_AL_TO_PTR_(VALUE) adc byte ptr [VALUE], al
#define ADC_BL_TO_PTR_(VALUE) adc byte ptr [VALUE], bl
#define ADC_CL_TO_PTR_(VALUE) adc byte ptr [VALUE], cl
#define ADC_DL_TO_PTR_(VALUE) adc byte ptr [VALUE], dl

#define ADC_AL_FROM_PTR_EAX adc al, byte ptr [eax]
#define ADC_AL_FROM_PTR_EBX adc al, byte ptr [ebx]
#define ADC_AL_FROM_PTR_ECX adc al, byte ptr [ecx]
#define ADC_AL_FROM_PTR_EDX adc al, byte ptr [edx]
#define ADC_AL_FROM_PTR_EDI adc al, byte ptr [edi]
#define ADC_AL_FROM_PTR_ESI adc al, byte ptr [esi]
#define ADC_AL_FROM_PTR_EBP adc al, byte ptr [ebp]
#define ADC_AL_FROM_PTR_ESP adc al, byte ptr [esp]
#define ADC_AL_FROM_PTR_BX adc al, byte ptr [bx]
#define ADC_AL_FROM_PTR_BP adc al, byte ptr [bp]
#define ADC_AL_FROM_PTR_SI adc al, byte ptr [si]
#define ADC_AL_FROM_PTR_DI adc al, byte ptr [di]

#define ADC_BL_FROM_PTR_EAX adc bl, byte ptr [eax]
#define ADC_BL_FROM_PTR_EBX adc bl, byte ptr [ebx]
#define ADC_BL_FROM_PTR_ECX adc bl, byte ptr [ecx]
#define ADC_BL_FROM_PTR_EDX adc bl, byte ptr [edx]
#define ADC_BL_FROM_PTR_EDI adc bl, byte ptr [edi]
#define ADC_BL_FROM_PTR_ESI adc bl, byte ptr [esi]
#define ADC_BL_FROM_PTR_EBP adc bl, byte ptr [ebp]
#define ADC_BL_FROM_PTR_ESP adc bl, byte ptr [esp]
#define ADC_BL_FROM_PTR_BX adc bl, byte ptr [bx]
#define ADC_BL_FROM_PTR_BP adc bl, byte ptr [bp]
#define ADC_BL_FROM_PTR_SI adc bl, byte ptr [si]
#define ADC_BL_FROM_PTR_DI adc bl, byte ptr [di]

#define ADC_CL_FROM_PTR_EAX adc cl, byte ptr [eax]
#define ADC_CL_FROM_PTR_EBX adc cl, byte ptr [ebx]
#define ADC_CL_FROM_PTR_ECX adc cl, byte ptr [ecx]
#define ADC_CL_FROM_PTR_EDX adc cl, byte ptr [edx]
#define ADC_CL_FROM_PTR_EDI adc cl, byte ptr [edi]
#define ADC_CL_FROM_PTR_ESI adc cl, byte ptr [esi]
#define ADC_CL_FROM_PTR_EBP adc cl, byte ptr [ebp]
#define ADC_CL_FROM_PTR_ESP adc cl, byte ptr [esp]
#define ADC_CL_FROM_PTR_BX adc cl, byte ptr [bx]
#define ADC_CL_FROM_PTR_BP adc cl, byte ptr [bp]
#define ADC_CL_FROM_PTR_SI adc cl, byte ptr [si]
#define ADC_CL_FROM_PTR_DI adc cl, byte ptr [di]

#define ADC_DL_FROM_PTR_EAX adc dl, byte ptr [eax]
#define ADC_DL_FROM_PTR_EBX adc dl, byte ptr [ebx]
#define ADC_DL_FROM_PTR_ECX adc dl, byte ptr [ecx]
#define ADC_DL_FROM_PTR_EDX adc dl, byte ptr [edx]
#define ADC_DL_FROM_PTR_EDI adc dl, byte ptr [edi]
#define ADC_DL_FROM_PTR_ESI adc dl, byte ptr [esi]
#define ADC_DL_FROM_PTR_EBP adc dl, byte ptr [ebp]
#define ADC_DL_FROM_PTR_ESP adc dl, byte ptr [esp]
#define ADC_DL_FROM_PTR_BX adc dl, byte ptr [bx]
#define ADC_DL_FROM_PTR_BP adc dl, byte ptr [bp]
#define ADC_DL_FROM_PTR_SI adc dl, byte ptr [si]
#define ADC_DL_FROM_PTR_DI adc dl, byte ptr [di]

#define ADC_AL_TO_PTR_EAX adc byte ptr [eax], al
#define ADC_AL_TO_PTR_EBX adc byte ptr [ebx], al
#define ADC_AL_TO_PTR_ECX adc byte ptr [ecx], al
#define ADC_AL_TO_PTR_EDX adc byte ptr [edx], al
#define ADC_AL_TO_PTR_EDI adc byte ptr [edi], al
#define ADC_AL_TO_PTR_ESI adc byte ptr [esi], al
#define ADC_AL_TO_PTR_EBP adc byte ptr [ebp], al
#define ADC_AL_TO_PTR_ESP adc byte ptr [esp], al
#define ADC_AL_TO_PTR_BX adc byte ptr [bx], al
#define ADC_AL_TO_PTR_BP adc byte ptr [bp], al
#define ADC_AL_TO_PTR_SI adc byte ptr [si], al
#define ADC_AL_TO_PTR_DI adc byte ptr [di], al

#define ADC_BL_TO_PTR_EAX adc byte ptr [eax], bl
#define ADC_BL_TO_PTR_EBX adc byte ptr [ebx], bl
#define ADC_BL_TO_PTR_ECX adc byte ptr [ecx], bl
#define ADC_BL_TO_PTR_EDX adc byte ptr [edx], bl
#define ADC_BL_TO_PTR_EDI adc byte ptr [edi], bl
#define ADC_BL_TO_PTR_ESI adc byte ptr [esi], bl
#define ADC_BL_TO_PTR_EBP adc byte ptr [ebp], bl
#define ADC_BL_TO_PTR_ESP adc byte ptr [esp], bl
#define ADC_BL_TO_PTR_BX adc byte ptr [bx], bl
#define ADC_BL_TO_PTR_BP adc byte ptr [bp], bl
#define ADC_BL_TO_PTR_SI adc byte ptr [si], bl
#define ADC_BL_TO_PTR_DI adc byte ptr [di], bl

#define ADC_CL_TO_PTR_EAX adc byte ptr [eax], cl
#define ADC_CL_TO_PTR_EBX adc byte ptr [ebx], cl
#define ADC_CL_TO_PTR_ECX adc byte ptr [ecx], cl
#define ADC_CL_TO_PTR_EDX adc byte ptr [edx], cl
#define ADC_CL_TO_PTR_EDI adc byte ptr [edi], cl
#define ADC_CL_TO_PTR_ESI adc byte ptr [esi], cl
#define ADC_CL_TO_PTR_EBP adc byte ptr [ebp], cl
#define ADC_CL_TO_PTR_ESP adc byte ptr [esp], cl
#define ADC_CL_TO_PTR_BX adc byte ptr [bx], cl
#define ADC_CL_TO_PTR_BP adc byte ptr [bp], cl
#define ADC_CL_TO_PTR_SI adc byte ptr [si], cl
#define ADC_CL_TO_PTR_DI adc byte ptr [di], cl

#define ADC_DL_TO_PTR_EAX adc byte ptr [eax], dl
#define ADC_DL_TO_PTR_EBX adc byte ptr [ebx], dl
#define ADC_DL_TO_PTR_ECX adc byte ptr [ecx], dl
#define ADC_DL_TO_PTR_EDX adc byte ptr [edx], dl
#define ADC_DL_TO_PTR_EDI adc byte ptr [edi], dl
#define ADC_DL_TO_PTR_ESI adc byte ptr [esi], dl
#define ADC_DL_TO_PTR_EBP adc byte ptr [ebp], dl
#define ADC_DL_TO_PTR_ESP adc byte ptr [esp], dl
#define ADC_DL_TO_PTR_BX adc byte ptr [bx], dl
#define ADC_DL_TO_PTR_BP adc byte ptr [bp], dl
#define ADC_DL_TO_PTR_SI adc byte ptr [si], dl
#define ADC_DL_TO_PTR_DI adc byte ptr [di], dl

#define ADC_AL_FROM_PTR_EAX_(VALUE) adc al, byte ptr [eax + VALUE]
#define ADC_AL_FROM_PTR_EBX_(VALUE) adc al, byte ptr [ebx + VALUE]
#define ADC_AL_FROM_PTR_ECX_(VALUE) adc al, byte ptr [ecx + VALUE]
#define ADC_AL_FROM_PTR_EDX_(VALUE) adc al, byte ptr [edx + VALUE]
#define ADC_AL_FROM_PTR_EDI_(VALUE) adc al, byte ptr [edi + VALUE]
#define ADC_AL_FROM_PTR_ESI_(VALUE) adc al, byte ptr [esi + VALUE]
#define ADC_AL_FROM_PTR_EBP_(VALUE) adc al, byte ptr [ebp + VALUE]
#define ADC_AL_FROM_PTR_ESP_(VALUE) adc al, byte ptr [esp + VALUE]
#define ADC_AL_FROM_PTR_BX_(VALUE) adc al, byte ptr [bx + VALUE]
#define ADC_AL_FROM_PTR_BP_(VALUE) adc al, byte ptr [bp + VALUE]
#define ADC_AL_FROM_PTR_SI_(VALUE) adc al, byte ptr [si + VALUE]
#define ADC_AL_FROM_PTR_DI_(VALUE) adc al, byte ptr [di + VALUE]

#define ADC_BL_FROM_PTR_EAX_(VALUE) adc bl, byte ptr [eax + VALUE]
#define ADC_BL_FROM_PTR_EBX_(VALUE) adc bl, byte ptr [ebx + VALUE]
#define ADC_BL_FROM_PTR_ECX_(VALUE) adc bl, byte ptr [ecx + VALUE]
#define ADC_BL_FROM_PTR_EDX_(VALUE) adc bl, byte ptr [edx + VALUE]
#define ADC_BL_FROM_PTR_EDI_(VALUE) adc bl, byte ptr [edi + VALUE]
#define ADC_BL_FROM_PTR_ESI_(VALUE) adc bl, byte ptr [esi + VALUE]
#define ADC_BL_FROM_PTR_EBP_(VALUE) adc bl, byte ptr [ebp + VALUE]
#define ADC_BL_FROM_PTR_ESP_(VALUE) adc bl, byte ptr [esp + VALUE]
#define ADC_BL_FROM_PTR_BX_(VALUE) adc bl, byte ptr [bx + VALUE]
#define ADC_BL_FROM_PTR_BP_(VALUE) adc bl, byte ptr [bp + VALUE]
#define ADC_BL_FROM_PTR_SI_(VALUE) adc bl, byte ptr [si + VALUE]
#define ADC_BL_FROM_PTR_DI_(VALUE) adc bl, byte ptr [di + VALUE]

#define ADC_CL_FROM_PTR_EAX_(VALUE) adc cl, byte ptr [eax + VALUE]
#define ADC_CL_FROM_PTR_EBX_(VALUE) adc cl, byte ptr [ebx + VALUE]
#define ADC_CL_FROM_PTR_ECX_(VALUE) adc cl, byte ptr [ecx + VALUE]
#define ADC_CL_FROM_PTR_EDX_(VALUE) adc cl, byte ptr [edx + VALUE]
#define ADC_CL_FROM_PTR_EDI_(VALUE) adc cl, byte ptr [edi + VALUE]
#define ADC_CL_FROM_PTR_ESI_(VALUE) adc cl, byte ptr [esi + VALUE]
#define ADC_CL_FROM_PTR_EBP_(VALUE) adc cl, byte ptr [ebp + VALUE]
#define ADC_CL_FROM_PTR_ESP_(VALUE) adc cl, byte ptr [esp + VALUE]
#define ADC_CL_FROM_PTR_BX_(VALUE) adc cl, byte ptr [bx + VALUE]
#define ADC_CL_FROM_PTR_BP_(VALUE) adc cl, byte ptr [bp + VALUE]
#define ADC_CL_FROM_PTR_SI_(VALUE) adc cl, byte ptr [si + VALUE]
#define ADC_CL_FROM_PTR_DI_(VALUE) adc cl, byte ptr [di + VALUE]

#define ADC_DL_FROM_PTR_EAX_(VALUE) adc dl, byte ptr [eax + VALUE]
#define ADC_DL_FROM_PTR_EBX_(VALUE) adc dl, byte ptr [ebx + VALUE]
#define ADC_DL_FROM_PTR_ECX_(VALUE) adc dl, byte ptr [ecx + VALUE]
#define ADC_DL_FROM_PTR_EDX_(VALUE) adc dl, byte ptr [edx + VALUE]
#define ADC_DL_FROM_PTR_EDI_(VALUE) adc dl, byte ptr [edi + VALUE]
#define ADC_DL_FROM_PTR_ESI_(VALUE) adc dl, byte ptr [esi + VALUE]
#define ADC_DL_FROM_PTR_EBP_(VALUE) adc dl, byte ptr [ebp + VALUE]
#define ADC_DL_FROM_PTR_ESP_(VALUE) adc dl, byte ptr [esp + VALUE]
#define ADC_DL_FROM_PTR_BX_(VALUE) adc dl, byte ptr [bx + VALUE]
#define ADC_DL_FROM_PTR_BP_(VALUE) adc dl, byte ptr [bp + VALUE]
#define ADC_DL_FROM_PTR_SI_(VALUE) adc dl, byte ptr [si + VALUE]
#define ADC_DL_FROM_PTR_DI_(VALUE) adc dl, byte ptr [di + VALUE]

#define ADC_AL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], al
#define ADC_AL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], al
#define ADC_AL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], al
#define ADC_AL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], al
#define ADC_AL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], al
#define ADC_AL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], al
#define ADC_AL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], al
#define ADC_AL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], al
#define ADC_AL_TO_PTR_BX_(VALUE) adc byte ptr [bx + VALUE], al
#define ADC_AL_TO_PTR_BP_(VALUE) adc byte ptr [bp + VALUE], al
#define ADC_AL_TO_PTR_SI_(VALUE) adc byte ptr [si + VALUE], al
#define ADC_AL_TO_PTR_DI_(VALUE) adc byte ptr [di + VALUE], al

#define ADC_BL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], bl
#define ADC_BL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], bl
#define ADC_BL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], bl
#define ADC_BL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], bl
#define ADC_BL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], bl
#define ADC_BL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], bl
#define ADC_BL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], bl
#define ADC_BL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], bl
#define ADC_BL_TO_PTR_BX_(VALUE) adc byte ptr [bx + VALUE], bl
#define ADC_BL_TO_PTR_BP_(VALUE) adc byte ptr [bp + VALUE], bl
#define ADC_BL_TO_PTR_SI_(VALUE) adc byte ptr [si + VALUE], bl
#define ADC_BL_TO_PTR_DI_(VALUE) adc byte ptr [di + VALUE], bl

#define ADC_CL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], cl
#define ADC_CL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], cl
#define ADC_CL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], cl
#define ADC_CL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], cl
#define ADC_CL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], cl
#define ADC_CL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], cl
#define ADC_CL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], cl
#define ADC_CL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], cl
#define ADC_CL_TO_PTR_BX_(VALUE) adc byte ptr [bx + VALUE], cl
#define ADC_CL_TO_PTR_BP_(VALUE) adc byte ptr [bp + VALUE], cl
#define ADC_CL_TO_PTR_SI_(VALUE) adc byte ptr [si + VALUE], cl
#define ADC_CL_TO_PTR_DI_(VALUE) adc byte ptr [di + VALUE], cl

#define ADC_DL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], dl
#define ADC_DL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], dl
#define ADC_DL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], dl
#define ADC_DL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], dl
#define ADC_DL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], dl
#define ADC_DL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], dl
#define ADC_DL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], dl
#define ADC_DL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], dl
#define ADC_DL_TO_PTR_BX_(VALUE) adc byte ptr [bx + VALUE], dl
#define ADC_DL_TO_PTR_BP_(VALUE) adc byte ptr [bp + VALUE], dl
#define ADC_DL_TO_PTR_SI_(VALUE) adc byte ptr [si + VALUE], dl
#define ADC_DL_TO_PTR_DI_(VALUE) adc byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_AL_FROM_PTR_(VALUE) adc al, byte ptr [VALUE]
#define ADC_BL_FROM_PTR_(VALUE) adc bl, byte ptr [VALUE]
#define ADC_CL_FROM_PTR_(VALUE) adc cl, byte ptr [VALUE]
#define ADC_DL_FROM_PTR_(VALUE) adc dl, byte ptr [VALUE]
#define ADC_DIL_FROM_PTR_(VALUE) adc dil, byte ptr [VALUE]
#define ADC_SIL_FROM_PTR_(VALUE) adc sil, byte ptr [VALUE]
#define ADC_BPL_FROM_PTR_(VALUE) adc bpl, byte ptr [VALUE]
#define ADC_SPL_FROM_PTR_(VALUE) adc spl, byte ptr [VALUE]
#define ADC_R8B_FROM_PTR_(VALUE) adc r8b, byte ptr [VALUE]
#define ADC_R9B_FROM_PTR_(VALUE) adc r9b, byte ptr [VALUE]
#define ADC_R10B_FROM_PTR_(VALUE) adc r10b, byte ptr [VALUE]
#define ADC_R11B_FROM_PTR_(VALUE) adc r11b, byte ptr [VALUE]
#define ADC_R12B_FROM_PTR_(VALUE) adc r12b, byte ptr [VALUE]
#define ADC_R13B_FROM_PTR_(VALUE) adc r13b, byte ptr [VALUE]
#define ADC_R14B_FROM_PTR_(VALUE) adc r14b, byte ptr [VALUE]
#define ADC_R15B_FROM_PTR_(VALUE) adc r15b, byte ptr [VALUE]

#define ADC_AL_TO_PTR_(VALUE) adc byte ptr [VALUE], al
#define ADC_BL_TO_PTR_(VALUE) adc byte ptr [VALUE], bl
#define ADC_CL_TO_PTR_(VALUE) adc byte ptr [VALUE], cl
#define ADC_DL_TO_PTR_(VALUE) adc byte ptr [VALUE], dl
#define ADC_DIL_TO_PTR_(VALUE) adc byte ptr [VALUE], dil
#define ADC_SIL_TO_PTR_(VALUE) adc byte ptr [VALUE], sil
#define ADC_BPL_TO_PTR_(VALUE) adc byte ptr [VALUE], bpl
#define ADC_SPL_TO_PTR_(VALUE) adc byte ptr [VALUE], spl
#define ADC_R8B_TO_PTR_(VALUE) adc byte ptr [VALUE], r8b
#define ADC_R9B_TO_PTR_(VALUE) adc byte ptr [VALUE], r9b
#define ADC_R10B_TO_PTR_(VALUE) adc byte ptr [VALUE], r10b
#define ADC_R11B_TO_PTR_(VALUE) adc byte ptr [VALUE], r11b
#define ADC_R12B_TO_PTR_(VALUE) adc byte ptr [VALUE], r12b
#define ADC_R13B_TO_PTR_(VALUE) adc byte ptr [VALUE], r13b
#define ADC_R14B_TO_PTR_(VALUE) adc byte ptr [VALUE], r14b
#define ADC_R15B_TO_PTR_(VALUE) adc byte ptr [VALUE], r15b

#define ADC_AL_FROM_PTR_RAX adc al, byte ptr [rax]
#define ADC_AL_FROM_PTR_RBX adc al, byte ptr [rbx]
#define ADC_AL_FROM_PTR_RCX adc al, byte ptr [rcx]
#define ADC_AL_FROM_PTR_RDX adc al, byte ptr [rdx]
#define ADC_AL_FROM_PTR_RDI adc al, byte ptr [rdi]
#define ADC_AL_FROM_PTR_RSI adc al, byte ptr [rsi]
#define ADC_AL_FROM_PTR_RBP adc al, byte ptr [rbp]
#define ADC_AL_FROM_PTR_RSP adc al, byte ptr [rsp]
#define ADC_AL_FROM_PTR_R8 adc al, byte ptr [r8]
#define ADC_AL_FROM_PTR_R9 adc al, byte ptr [r9]
#define ADC_AL_FROM_PTR_R10 adc al, byte ptr [r10]
#define ADC_AL_FROM_PTR_R11 adc al, byte ptr [r11]
#define ADC_AL_FROM_PTR_R12 adc al, byte ptr [r12]
#define ADC_AL_FROM_PTR_R13 adc al, byte ptr [r13]
#define ADC_AL_FROM_PTR_R14 adc al, byte ptr [r14]
#define ADC_AL_FROM_PTR_R15 adc al, byte ptr [r15]
#define ADC_AL_FROM_PTR_EAX adc al, byte ptr [eax]
#define ADC_AL_FROM_PTR_EBX adc al, byte ptr [ebx]
#define ADC_AL_FROM_PTR_ECX adc al, byte ptr [ecx]
#define ADC_AL_FROM_PTR_EDX adc al, byte ptr [edx]
#define ADC_AL_FROM_PTR_EDI adc al, byte ptr [edi]
#define ADC_AL_FROM_PTR_ESI adc al, byte ptr [esi]
#define ADC_AL_FROM_PTR_EBP adc al, byte ptr [ebp]
#define ADC_AL_FROM_PTR_ESP adc al, byte ptr [esp]

#define ADC_BL_FROM_PTR_RAX adc bl, byte ptr [rax]
#define ADC_BL_FROM_PTR_RBX adc bl, byte ptr [rbx]
#define ADC_BL_FROM_PTR_RCX adc bl, byte ptr [rcx]
#define ADC_BL_FROM_PTR_RDX adc bl, byte ptr [rdx]
#define ADC_BL_FROM_PTR_RDI adc bl, byte ptr [rdi]
#define ADC_BL_FROM_PTR_RSI adc bl, byte ptr [rsi]
#define ADC_BL_FROM_PTR_RBP adc bl, byte ptr [rbp]
#define ADC_BL_FROM_PTR_RSP adc bl, byte ptr [rsp]
#define ADC_BL_FROM_PTR_R8 adc bl, byte ptr [r8]
#define ADC_BL_FROM_PTR_R9 adc bl, byte ptr [r9]
#define ADC_BL_FROM_PTR_R10 adc bl, byte ptr [r10]
#define ADC_BL_FROM_PTR_R11 adc bl, byte ptr [r11]
#define ADC_BL_FROM_PTR_R12 adc bl, byte ptr [r12]
#define ADC_BL_FROM_PTR_R13 adc bl, byte ptr [r13]
#define ADC_BL_FROM_PTR_R14 adc bl, byte ptr [r14]
#define ADC_BL_FROM_PTR_R15 adc bl, byte ptr [r15]
#define ADC_BL_FROM_PTR_EAX adc bl, byte ptr [eax]
#define ADC_BL_FROM_PTR_EBX adc bl, byte ptr [ebx]
#define ADC_BL_FROM_PTR_ECX adc bl, byte ptr [ecx]
#define ADC_BL_FROM_PTR_EDX adc bl, byte ptr [edx]
#define ADC_BL_FROM_PTR_EDI adc bl, byte ptr [edi]
#define ADC_BL_FROM_PTR_ESI adc bl, byte ptr [esi]
#define ADC_BL_FROM_PTR_EBP adc bl, byte ptr [ebp]
#define ADC_BL_FROM_PTR_ESP adc bl, byte ptr [esp]

#define ADC_CL_FROM_PTR_RAX adc cl, byte ptr [rax]
#define ADC_CL_FROM_PTR_RBX adc cl, byte ptr [rbx]
#define ADC_CL_FROM_PTR_RCX adc cl, byte ptr [rcx]
#define ADC_CL_FROM_PTR_RDX adc cl, byte ptr [rdx]
#define ADC_CL_FROM_PTR_RDI adc cl, byte ptr [rdi]
#define ADC_CL_FROM_PTR_RSI adc cl, byte ptr [rsi]
#define ADC_CL_FROM_PTR_RBP adc cl, byte ptr [rbp]
#define ADC_CL_FROM_PTR_RSP adc cl, byte ptr [rsp]
#define ADC_CL_FROM_PTR_R8 adc cl, byte ptr [r8]
#define ADC_CL_FROM_PTR_R9 adc cl, byte ptr [r9]
#define ADC_CL_FROM_PTR_R10 adc cl, byte ptr [r10]
#define ADC_CL_FROM_PTR_R11 adc cl, byte ptr [r11]
#define ADC_CL_FROM_PTR_R12 adc cl, byte ptr [r12]
#define ADC_CL_FROM_PTR_R13 adc cl, byte ptr [r13]
#define ADC_CL_FROM_PTR_R14 adc cl, byte ptr [r14]
#define ADC_CL_FROM_PTR_R15 adc cl, byte ptr [r15]
#define ADC_CL_FROM_PTR_EAX adc cl, byte ptr [eax]
#define ADC_CL_FROM_PTR_EBX adc cl, byte ptr [ebx]
#define ADC_CL_FROM_PTR_ECX adc cl, byte ptr [ecx]
#define ADC_CL_FROM_PTR_EDX adc cl, byte ptr [edx]
#define ADC_CL_FROM_PTR_EDI adc cl, byte ptr [edi]
#define ADC_CL_FROM_PTR_ESI adc cl, byte ptr [esi]
#define ADC_CL_FROM_PTR_EBP adc cl, byte ptr [ebp]
#define ADC_CL_FROM_PTR_ESP adc cl, byte ptr [esp]

#define ADC_DL_FROM_PTR_RAX adc dl, byte ptr [rax]
#define ADC_DL_FROM_PTR_RBX adc dl, byte ptr [rbx]
#define ADC_DL_FROM_PTR_RCX adc dl, byte ptr [rcx]
#define ADC_DL_FROM_PTR_RDX adc dl, byte ptr [rdx]
#define ADC_DL_FROM_PTR_RDI adc dl, byte ptr [rdi]
#define ADC_DL_FROM_PTR_RSI adc dl, byte ptr [rsi]
#define ADC_DL_FROM_PTR_RBP adc dl, byte ptr [rbp]
#define ADC_DL_FROM_PTR_RSP adc dl, byte ptr [rsp]
#define ADC_DL_FROM_PTR_R8 adc dl, byte ptr [r8]
#define ADC_DL_FROM_PTR_R9 adc dl, byte ptr [r9]
#define ADC_DL_FROM_PTR_R10 adc dl, byte ptr [r10]
#define ADC_DL_FROM_PTR_R11 adc dl, byte ptr [r11]
#define ADC_DL_FROM_PTR_R12 adc dl, byte ptr [r12]
#define ADC_DL_FROM_PTR_R13 adc dl, byte ptr [r13]
#define ADC_DL_FROM_PTR_R14 adc dl, byte ptr [r14]
#define ADC_DL_FROM_PTR_R15 adc dl, byte ptr [r15]
#define ADC_DL_FROM_PTR_EAX adc dl, byte ptr [eax]
#define ADC_DL_FROM_PTR_EBX adc dl, byte ptr [ebx]
#define ADC_DL_FROM_PTR_ECX adc dl, byte ptr [ecx]
#define ADC_DL_FROM_PTR_EDX adc dl, byte ptr [edx]
#define ADC_DL_FROM_PTR_EDI adc dl, byte ptr [edi]
#define ADC_DL_FROM_PTR_ESI adc dl, byte ptr [esi]
#define ADC_DL_FROM_PTR_EBP adc dl, byte ptr [ebp]
#define ADC_DL_FROM_PTR_ESP adc dl, byte ptr [esp]

#define ADC_DIL_FROM_PTR_RAX adc dil, byte ptr [rax]
#define ADC_DIL_FROM_PTR_RBX adc dil, byte ptr [rbx]
#define ADC_DIL_FROM_PTR_RCX adc dil, byte ptr [rcx]
#define ADC_DIL_FROM_PTR_RDX adc dil, byte ptr [rdx]
#define ADC_DIL_FROM_PTR_RDI adc dil, byte ptr [rdi]
#define ADC_DIL_FROM_PTR_RSI adc dil, byte ptr [rsi]
#define ADC_DIL_FROM_PTR_RBP adc dil, byte ptr [rbp]
#define ADC_DIL_FROM_PTR_RSP adc dil, byte ptr [rsp]
#define ADC_DIL_FROM_PTR_R8 adc dil, byte ptr [r8]
#define ADC_DIL_FROM_PTR_R9 adc dil, byte ptr [r9]
#define ADC_DIL_FROM_PTR_R10 adc dil, byte ptr [r10]
#define ADC_DIL_FROM_PTR_R11 adc dil, byte ptr [r11]
#define ADC_DIL_FROM_PTR_R12 adc dil, byte ptr [r12]
#define ADC_DIL_FROM_PTR_R13 adc dil, byte ptr [r13]
#define ADC_DIL_FROM_PTR_R14 adc dil, byte ptr [r14]
#define ADC_DIL_FROM_PTR_R15 adc dil, byte ptr [r15]
#define ADC_DIL_FROM_PTR_EAX adc dil, byte ptr [eax]
#define ADC_DIL_FROM_PTR_EBX adc dil, byte ptr [ebx]
#define ADC_DIL_FROM_PTR_ECX adc dil, byte ptr [ecx]
#define ADC_DIL_FROM_PTR_EDX adc dil, byte ptr [edx]
#define ADC_DIL_FROM_PTR_EDI adc dil, byte ptr [edi]
#define ADC_DIL_FROM_PTR_ESI adc dil, byte ptr [esi]
#define ADC_DIL_FROM_PTR_EBP adc dil, byte ptr [ebp]
#define ADC_DIL_FROM_PTR_ESP adc dil, byte ptr [esp]

#define ADC_SIL_FROM_PTR_RAX adc sil, byte ptr [rax]
#define ADC_SIL_FROM_PTR_RBX adc sil, byte ptr [rbx]
#define ADC_SIL_FROM_PTR_RCX adc sil, byte ptr [rcx]
#define ADC_SIL_FROM_PTR_RDX adc sil, byte ptr [rdx]
#define ADC_SIL_FROM_PTR_RDI adc sil, byte ptr [rdi]
#define ADC_SIL_FROM_PTR_RSI adc sil, byte ptr [rsi]
#define ADC_SIL_FROM_PTR_RBP adc sil, byte ptr [rbp]
#define ADC_SIL_FROM_PTR_RSP adc sil, byte ptr [rsp]
#define ADC_SIL_FROM_PTR_R8 adc sil, byte ptr [r8]
#define ADC_SIL_FROM_PTR_R9 adc sil, byte ptr [r9]
#define ADC_SIL_FROM_PTR_R10 adc sil, byte ptr [r10]
#define ADC_SIL_FROM_PTR_R11 adc sil, byte ptr [r11]
#define ADC_SIL_FROM_PTR_R12 adc sil, byte ptr [r12]
#define ADC_SIL_FROM_PTR_R13 adc sil, byte ptr [r13]
#define ADC_SIL_FROM_PTR_R14 adc sil, byte ptr [r14]
#define ADC_SIL_FROM_PTR_R15 adc sil, byte ptr [r15]
#define ADC_SIL_FROM_PTR_EAX adc sil, byte ptr [eax]
#define ADC_SIL_FROM_PTR_EBX adc sil, byte ptr [ebx]
#define ADC_SIL_FROM_PTR_ECX adc sil, byte ptr [ecx]
#define ADC_SIL_FROM_PTR_EDX adc sil, byte ptr [edx]
#define ADC_SIL_FROM_PTR_EDI adc sil, byte ptr [edi]
#define ADC_SIL_FROM_PTR_ESI adc sil, byte ptr [esi]
#define ADC_SIL_FROM_PTR_EBP adc sil, byte ptr [ebp]
#define ADC_SIL_FROM_PTR_ESP adc sil, byte ptr [esp]

#define ADC_BPL_FROM_PTR_RAX adc bpl, byte ptr [rax]
#define ADC_BPL_FROM_PTR_RBX adc bpl, byte ptr [rbx]
#define ADC_BPL_FROM_PTR_RCX adc bpl, byte ptr [rcx]
#define ADC_BPL_FROM_PTR_RDX adc bpl, byte ptr [rdx]
#define ADC_BPL_FROM_PTR_RDI adc bpl, byte ptr [rdi]
#define ADC_BPL_FROM_PTR_RSI adc bpl, byte ptr [rsi]
#define ADC_BPL_FROM_PTR_RBP adc bpl, byte ptr [rbp]
#define ADC_BPL_FROM_PTR_RSP adc bpl, byte ptr [rsp]
#define ADC_BPL_FROM_PTR_R8 adc bpl, byte ptr [r8]
#define ADC_BPL_FROM_PTR_R9 adc bpl, byte ptr [r9]
#define ADC_BPL_FROM_PTR_R10 adc bpl, byte ptr [r10]
#define ADC_BPL_FROM_PTR_R11 adc bpl, byte ptr [r11]
#define ADC_BPL_FROM_PTR_R12 adc bpl, byte ptr [r12]
#define ADC_BPL_FROM_PTR_R13 adc bpl, byte ptr [r13]
#define ADC_BPL_FROM_PTR_R14 adc bpl, byte ptr [r14]
#define ADC_BPL_FROM_PTR_R15 adc bpl, byte ptr [r15]
#define ADC_BPL_FROM_PTR_EAX adc bpl, byte ptr [eax]
#define ADC_BPL_FROM_PTR_EBX adc bpl, byte ptr [ebx]
#define ADC_BPL_FROM_PTR_ECX adc bpl, byte ptr [ecx]
#define ADC_BPL_FROM_PTR_EDX adc bpl, byte ptr [edx]
#define ADC_BPL_FROM_PTR_EDI adc bpl, byte ptr [edi]
#define ADC_BPL_FROM_PTR_ESI adc bpl, byte ptr [esi]
#define ADC_BPL_FROM_PTR_EBP adc bpl, byte ptr [ebp]
#define ADC_BPL_FROM_PTR_ESP adc bpl, byte ptr [esp]

#define ADC_SPL_FROM_PTR_RAX adc spl, byte ptr [rax]
#define ADC_SPL_FROM_PTR_RBX adc spl, byte ptr [rbx]
#define ADC_SPL_FROM_PTR_RCX adc spl, byte ptr [rcx]
#define ADC_SPL_FROM_PTR_RDX adc spl, byte ptr [rdx]
#define ADC_SPL_FROM_PTR_RDI adc spl, byte ptr [rdi]
#define ADC_SPL_FROM_PTR_RSI adc spl, byte ptr [rsi]
#define ADC_SPL_FROM_PTR_RBP adc spl, byte ptr [rbp]
#define ADC_SPL_FROM_PTR_RSP adc spl, byte ptr [rsp]
#define ADC_SPL_FROM_PTR_R8 adc spl, byte ptr [r8]
#define ADC_SPL_FROM_PTR_R9 adc spl, byte ptr [r9]
#define ADC_SPL_FROM_PTR_R10 adc spl, byte ptr [r10]
#define ADC_SPL_FROM_PTR_R11 adc spl, byte ptr [r11]
#define ADC_SPL_FROM_PTR_R12 adc spl, byte ptr [r12]
#define ADC_SPL_FROM_PTR_R13 adc spl, byte ptr [r13]
#define ADC_SPL_FROM_PTR_R14 adc spl, byte ptr [r14]
#define ADC_SPL_FROM_PTR_R15 adc spl, byte ptr [r15]
#define ADC_SPL_FROM_PTR_EAX adc spl, byte ptr [eax]
#define ADC_SPL_FROM_PTR_EBX adc spl, byte ptr [ebx]
#define ADC_SPL_FROM_PTR_ECX adc spl, byte ptr [ecx]
#define ADC_SPL_FROM_PTR_EDX adc spl, byte ptr [edx]
#define ADC_SPL_FROM_PTR_EDI adc spl, byte ptr [edi]
#define ADC_SPL_FROM_PTR_ESI adc spl, byte ptr [esi]
#define ADC_SPL_FROM_PTR_EBP adc spl, byte ptr [ebp]
#define ADC_SPL_FROM_PTR_ESP adc spl, byte ptr [esp]

#define ADC_R8B_FROM_PTR_RAX adc r8b, byte ptr [rax]
#define ADC_R8B_FROM_PTR_RBX adc r8b, byte ptr [rbx]
#define ADC_R8B_FROM_PTR_RCX adc r8b, byte ptr [rcx]
#define ADC_R8B_FROM_PTR_RDX adc r8b, byte ptr [rdx]
#define ADC_R8B_FROM_PTR_RDI adc r8b, byte ptr [rdi]
#define ADC_R8B_FROM_PTR_RSI adc r8b, byte ptr [rsi]
#define ADC_R8B_FROM_PTR_RBP adc r8b, byte ptr [rbp]
#define ADC_R8B_FROM_PTR_RSP adc r8b, byte ptr [rsp]
#define ADC_R8B_FROM_PTR_R8 adc r8b, byte ptr [r8]
#define ADC_R8B_FROM_PTR_R9 adc r8b, byte ptr [r9]
#define ADC_R8B_FROM_PTR_R10 adc r8b, byte ptr [r10]
#define ADC_R8B_FROM_PTR_R11 adc r8b, byte ptr [r11]
#define ADC_R8B_FROM_PTR_R12 adc r8b, byte ptr [r12]
#define ADC_R8B_FROM_PTR_R13 adc r8b, byte ptr [r13]
#define ADC_R8B_FROM_PTR_R14 adc r8b, byte ptr [r14]
#define ADC_R8B_FROM_PTR_R15 adc r8b, byte ptr [r15]
#define ADC_R8B_FROM_PTR_EAX adc r8b, byte ptr [eax]
#define ADC_R8B_FROM_PTR_EBX adc r8b, byte ptr [ebx]
#define ADC_R8B_FROM_PTR_ECX adc r8b, byte ptr [ecx]
#define ADC_R8B_FROM_PTR_EDX adc r8b, byte ptr [edx]
#define ADC_R8B_FROM_PTR_EDI adc r8b, byte ptr [edi]
#define ADC_R8B_FROM_PTR_ESI adc r8b, byte ptr [esi]
#define ADC_R8B_FROM_PTR_EBP adc r8b, byte ptr [ebp]
#define ADC_R8B_FROM_PTR_ESP adc r8b, byte ptr [esp]

#define ADC_R9B_FROM_PTR_RAX adc r9b, byte ptr [rax]
#define ADC_R9B_FROM_PTR_RBX adc r9b, byte ptr [rbx]
#define ADC_R9B_FROM_PTR_RCX adc r9b, byte ptr [rcx]
#define ADC_R9B_FROM_PTR_RDX adc r9b, byte ptr [rdx]
#define ADC_R9B_FROM_PTR_RDI adc r9b, byte ptr [rdi]
#define ADC_R9B_FROM_PTR_RSI adc r9b, byte ptr [rsi]
#define ADC_R9B_FROM_PTR_RBP adc r9b, byte ptr [rbp]
#define ADC_R9B_FROM_PTR_RSP adc r9b, byte ptr [rsp]
#define ADC_R9B_FROM_PTR_R8 adc r9b, byte ptr [r8]
#define ADC_R9B_FROM_PTR_R9 adc r9b, byte ptr [r9]
#define ADC_R9B_FROM_PTR_R10 adc r9b, byte ptr [r10]
#define ADC_R9B_FROM_PTR_R11 adc r9b, byte ptr [r11]
#define ADC_R9B_FROM_PTR_R12 adc r9b, byte ptr [r12]
#define ADC_R9B_FROM_PTR_R13 adc r9b, byte ptr [r13]
#define ADC_R9B_FROM_PTR_R14 adc r9b, byte ptr [r14]
#define ADC_R9B_FROM_PTR_R15 adc r9b, byte ptr [r15]
#define ADC_R9B_FROM_PTR_EAX adc r9b, byte ptr [eax]
#define ADC_R9B_FROM_PTR_EBX adc r9b, byte ptr [ebx]
#define ADC_R9B_FROM_PTR_ECX adc r9b, byte ptr [ecx]
#define ADC_R9B_FROM_PTR_EDX adc r9b, byte ptr [edx]
#define ADC_R9B_FROM_PTR_EDI adc r9b, byte ptr [edi]
#define ADC_R9B_FROM_PTR_ESI adc r9b, byte ptr [esi]
#define ADC_R9B_FROM_PTR_EBP adc r9b, byte ptr [ebp]
#define ADC_R9B_FROM_PTR_ESP adc r9b, byte ptr [esp]

#define ADC_R10B_FROM_PTR_RAX adc r10b, byte ptr [rax]
#define ADC_R10B_FROM_PTR_RBX adc r10b, byte ptr [rbx]
#define ADC_R10B_FROM_PTR_RCX adc r10b, byte ptr [rcx]
#define ADC_R10B_FROM_PTR_RDX adc r10b, byte ptr [rdx]
#define ADC_R10B_FROM_PTR_RDI adc r10b, byte ptr [rdi]
#define ADC_R10B_FROM_PTR_RSI adc r10b, byte ptr [rsi]
#define ADC_R10B_FROM_PTR_RBP adc r10b, byte ptr [rbp]
#define ADC_R10B_FROM_PTR_RSP adc r10b, byte ptr [rsp]
#define ADC_R10B_FROM_PTR_R8 adc r10b, byte ptr [r8]
#define ADC_R10B_FROM_PTR_R9 adc r10b, byte ptr [r9]
#define ADC_R10B_FROM_PTR_R10 adc r10b, byte ptr [r10]
#define ADC_R10B_FROM_PTR_R11 adc r10b, byte ptr [r11]
#define ADC_R10B_FROM_PTR_R12 adc r10b, byte ptr [r12]
#define ADC_R10B_FROM_PTR_R13 adc r10b, byte ptr [r13]
#define ADC_R10B_FROM_PTR_R14 adc r10b, byte ptr [r14]
#define ADC_R10B_FROM_PTR_R15 adc r10b, byte ptr [r15]
#define ADC_R10B_FROM_PTR_EAX adc r10b, byte ptr [eax]
#define ADC_R10B_FROM_PTR_EBX adc r10b, byte ptr [ebx]
#define ADC_R10B_FROM_PTR_ECX adc r10b, byte ptr [ecx]
#define ADC_R10B_FROM_PTR_EDX adc r10b, byte ptr [edx]
#define ADC_R10B_FROM_PTR_EDI adc r10b, byte ptr [edi]
#define ADC_R10B_FROM_PTR_ESI adc r10b, byte ptr [esi]
#define ADC_R10B_FROM_PTR_EBP adc r10b, byte ptr [ebp]
#define ADC_R10B_FROM_PTR_ESP adc r10b, byte ptr [esp]

#define ADC_R11B_FROM_PTR_RAX adc r11b, byte ptr [rax]
#define ADC_R11B_FROM_PTR_RBX adc r11b, byte ptr [rbx]
#define ADC_R11B_FROM_PTR_RCX adc r11b, byte ptr [rcx]
#define ADC_R11B_FROM_PTR_RDX adc r11b, byte ptr [rdx]
#define ADC_R11B_FROM_PTR_RDI adc r11b, byte ptr [rdi]
#define ADC_R11B_FROM_PTR_RSI adc r11b, byte ptr [rsi]
#define ADC_R11B_FROM_PTR_RBP adc r11b, byte ptr [rbp]
#define ADC_R11B_FROM_PTR_RSP adc r11b, byte ptr [rsp]
#define ADC_R11B_FROM_PTR_R8 adc r11b, byte ptr [r8]
#define ADC_R11B_FROM_PTR_R9 adc r11b, byte ptr [r9]
#define ADC_R11B_FROM_PTR_R10 adc r11b, byte ptr [r10]
#define ADC_R11B_FROM_PTR_R11 adc r11b, byte ptr [r11]
#define ADC_R11B_FROM_PTR_R12 adc r11b, byte ptr [r12]
#define ADC_R11B_FROM_PTR_R13 adc r11b, byte ptr [r13]
#define ADC_R11B_FROM_PTR_R14 adc r11b, byte ptr [r14]
#define ADC_R11B_FROM_PTR_R15 adc r11b, byte ptr [r15]
#define ADC_R11B_FROM_PTR_EAX adc r11b, byte ptr [eax]
#define ADC_R11B_FROM_PTR_EBX adc r11b, byte ptr [ebx]
#define ADC_R11B_FROM_PTR_ECX adc r11b, byte ptr [ecx]
#define ADC_R11B_FROM_PTR_EDX adc r11b, byte ptr [edx]
#define ADC_R11B_FROM_PTR_EDI adc r11b, byte ptr [edi]
#define ADC_R11B_FROM_PTR_ESI adc r11b, byte ptr [esi]
#define ADC_R11B_FROM_PTR_EBP adc r11b, byte ptr [ebp]
#define ADC_R11B_FROM_PTR_ESP adc r11b, byte ptr [esp]

#define ADC_R12B_FROM_PTR_RAX adc r12b, byte ptr [rax]
#define ADC_R12B_FROM_PTR_RBX adc r12b, byte ptr [rbx]
#define ADC_R12B_FROM_PTR_RCX adc r12b, byte ptr [rcx]
#define ADC_R12B_FROM_PTR_RDX adc r12b, byte ptr [rdx]
#define ADC_R12B_FROM_PTR_RDI adc r12b, byte ptr [rdi]
#define ADC_R12B_FROM_PTR_RSI adc r12b, byte ptr [rsi]
#define ADC_R12B_FROM_PTR_RBP adc r12b, byte ptr [rbp]
#define ADC_R12B_FROM_PTR_RSP adc r12b, byte ptr [rsp]
#define ADC_R12B_FROM_PTR_R8 adc r12b, byte ptr [r8]
#define ADC_R12B_FROM_PTR_R9 adc r12b, byte ptr [r9]
#define ADC_R12B_FROM_PTR_R10 adc r12b, byte ptr [r10]
#define ADC_R12B_FROM_PTR_R11 adc r12b, byte ptr [r11]
#define ADC_R12B_FROM_PTR_R12 adc r12b, byte ptr [r12]
#define ADC_R12B_FROM_PTR_R13 adc r12b, byte ptr [r13]
#define ADC_R12B_FROM_PTR_R14 adc r12b, byte ptr [r14]
#define ADC_R12B_FROM_PTR_R15 adc r12b, byte ptr [r15]
#define ADC_R12B_FROM_PTR_EAX adc r12b, byte ptr [eax]
#define ADC_R12B_FROM_PTR_EBX adc r12b, byte ptr [ebx]
#define ADC_R12B_FROM_PTR_ECX adc r12b, byte ptr [ecx]
#define ADC_R12B_FROM_PTR_EDX adc r12b, byte ptr [edx]
#define ADC_R12B_FROM_PTR_EDI adc r12b, byte ptr [edi]
#define ADC_R12B_FROM_PTR_ESI adc r12b, byte ptr [esi]
#define ADC_R12B_FROM_PTR_EBP adc r12b, byte ptr [ebp]
#define ADC_R12B_FROM_PTR_ESP adc r12b, byte ptr [esp]

#define ADC_R13B_FROM_PTR_RAX adc r13b, byte ptr [rax]
#define ADC_R13B_FROM_PTR_RBX adc r13b, byte ptr [rbx]
#define ADC_R13B_FROM_PTR_RCX adc r13b, byte ptr [rcx]
#define ADC_R13B_FROM_PTR_RDX adc r13b, byte ptr [rdx]
#define ADC_R13B_FROM_PTR_RDI adc r13b, byte ptr [rdi]
#define ADC_R13B_FROM_PTR_RSI adc r13b, byte ptr [rsi]
#define ADC_R13B_FROM_PTR_RBP adc r13b, byte ptr [rbp]
#define ADC_R13B_FROM_PTR_RSP adc r13b, byte ptr [rsp]
#define ADC_R13B_FROM_PTR_R8 adc r13b, byte ptr [r8]
#define ADC_R13B_FROM_PTR_R9 adc r13b, byte ptr [r9]
#define ADC_R13B_FROM_PTR_R10 adc r13b, byte ptr [r10]
#define ADC_R13B_FROM_PTR_R11 adc r13b, byte ptr [r11]
#define ADC_R13B_FROM_PTR_R12 adc r13b, byte ptr [r12]
#define ADC_R13B_FROM_PTR_R13 adc r13b, byte ptr [r13]
#define ADC_R13B_FROM_PTR_R14 adc r13b, byte ptr [r14]
#define ADC_R13B_FROM_PTR_R15 adc r13b, byte ptr [r15]
#define ADC_R13B_FROM_PTR_EAX adc r13b, byte ptr [eax]
#define ADC_R13B_FROM_PTR_EBX adc r13b, byte ptr [ebx]
#define ADC_R13B_FROM_PTR_ECX adc r13b, byte ptr [ecx]
#define ADC_R13B_FROM_PTR_EDX adc r13b, byte ptr [edx]
#define ADC_R13B_FROM_PTR_EDI adc r13b, byte ptr [edi]
#define ADC_R13B_FROM_PTR_ESI adc r13b, byte ptr [esi]
#define ADC_R13B_FROM_PTR_EBP adc r13b, byte ptr [ebp]
#define ADC_R13B_FROM_PTR_ESP adc r13b, byte ptr [esp]

#define ADC_R14B_FROM_PTR_RAX adc r14b, byte ptr [rax]
#define ADC_R14B_FROM_PTR_RBX adc r14b, byte ptr [rbx]
#define ADC_R14B_FROM_PTR_RCX adc r14b, byte ptr [rcx]
#define ADC_R14B_FROM_PTR_RDX adc r14b, byte ptr [rdx]
#define ADC_R14B_FROM_PTR_RDI adc r14b, byte ptr [rdi]
#define ADC_R14B_FROM_PTR_RSI adc r14b, byte ptr [rsi]
#define ADC_R14B_FROM_PTR_RBP adc r14b, byte ptr [rbp]
#define ADC_R14B_FROM_PTR_RSP adc r14b, byte ptr [rsp]
#define ADC_R14B_FROM_PTR_R8 adc r14b, byte ptr [r8]
#define ADC_R14B_FROM_PTR_R9 adc r14b, byte ptr [r9]
#define ADC_R14B_FROM_PTR_R10 adc r14b, byte ptr [r10]
#define ADC_R14B_FROM_PTR_R11 adc r14b, byte ptr [r11]
#define ADC_R14B_FROM_PTR_R12 adc r14b, byte ptr [r12]
#define ADC_R14B_FROM_PTR_R13 adc r14b, byte ptr [r13]
#define ADC_R14B_FROM_PTR_R14 adc r14b, byte ptr [r14]
#define ADC_R14B_FROM_PTR_R15 adc r14b, byte ptr [r15]
#define ADC_R14B_FROM_PTR_EAX adc r14b, byte ptr [eax]
#define ADC_R14B_FROM_PTR_EBX adc r14b, byte ptr [ebx]
#define ADC_R14B_FROM_PTR_ECX adc r14b, byte ptr [ecx]
#define ADC_R14B_FROM_PTR_EDX adc r14b, byte ptr [edx]
#define ADC_R14B_FROM_PTR_EDI adc r14b, byte ptr [edi]
#define ADC_R14B_FROM_PTR_ESI adc r14b, byte ptr [esi]
#define ADC_R14B_FROM_PTR_EBP adc r14b, byte ptr [ebp]
#define ADC_R14B_FROM_PTR_ESP adc r14b, byte ptr [esp]

#define ADC_R15B_FROM_PTR_RAX adc r15b, byte ptr [rax]
#define ADC_R15B_FROM_PTR_RBX adc r15b, byte ptr [rbx]
#define ADC_R15B_FROM_PTR_RCX adc r15b, byte ptr [rcx]
#define ADC_R15B_FROM_PTR_RDX adc r15b, byte ptr [rdx]
#define ADC_R15B_FROM_PTR_RDI adc r15b, byte ptr [rdi]
#define ADC_R15B_FROM_PTR_RSI adc r15b, byte ptr [rsi]
#define ADC_R15B_FROM_PTR_RBP adc r15b, byte ptr [rbp]
#define ADC_R15B_FROM_PTR_RSP adc r15b, byte ptr [rsp]
#define ADC_R15B_FROM_PTR_R8 adc r15b, byte ptr [r8]
#define ADC_R15B_FROM_PTR_R9 adc r15b, byte ptr [r9]
#define ADC_R15B_FROM_PTR_R10 adc r15b, byte ptr [r10]
#define ADC_R15B_FROM_PTR_R11 adc r15b, byte ptr [r11]
#define ADC_R15B_FROM_PTR_R12 adc r15b, byte ptr [r12]
#define ADC_R15B_FROM_PTR_R13 adc r15b, byte ptr [r13]
#define ADC_R15B_FROM_PTR_R14 adc r15b, byte ptr [r14]
#define ADC_R15B_FROM_PTR_R15 adc r15b, byte ptr [r15]
#define ADC_R15B_FROM_PTR_EAX adc r15b, byte ptr [eax]
#define ADC_R15B_FROM_PTR_EBX adc r15b, byte ptr [ebx]
#define ADC_R15B_FROM_PTR_ECX adc r15b, byte ptr [ecx]
#define ADC_R15B_FROM_PTR_EDX adc r15b, byte ptr [edx]
#define ADC_R15B_FROM_PTR_EDI adc r15b, byte ptr [edi]
#define ADC_R15B_FROM_PTR_ESI adc r15b, byte ptr [esi]
#define ADC_R15B_FROM_PTR_EBP adc r15b, byte ptr [ebp]
#define ADC_R15B_FROM_PTR_ESP adc r15b, byte ptr [esp]

#define ADC_AL_TO_PTR_RAX adc byte ptr [rax], al
#define ADC_AL_TO_PTR_RBX adc byte ptr [rbx], al
#define ADC_AL_TO_PTR_RCX adc byte ptr [rcx], al
#define ADC_AL_TO_PTR_RDX adc byte ptr [rdx], al
#define ADC_AL_TO_PTR_RDI adc byte ptr [rdi], al
#define ADC_AL_TO_PTR_RSI adc byte ptr [rsi], al
#define ADC_AL_TO_PTR_RBP adc byte ptr [rbp], al
#define ADC_AL_TO_PTR_RSP adc byte ptr [rsp], al
#define ADC_AL_TO_PTR_R8 adc byte ptr [r8], al
#define ADC_AL_TO_PTR_R9 adc byte ptr [r9], al
#define ADC_AL_TO_PTR_R10 adc byte ptr [r10], al
#define ADC_AL_TO_PTR_R11 adc byte ptr [r11], al
#define ADC_AL_TO_PTR_R12 adc byte ptr [r12], al
#define ADC_AL_TO_PTR_R13 adc byte ptr [r13], al
#define ADC_AL_TO_PTR_R14 adc byte ptr [r14], al
#define ADC_AL_TO_PTR_R15 adc byte ptr [r15], al
#define ADC_AL_TO_PTR_EAX adc byte ptr [eax], al
#define ADC_AL_TO_PTR_EBX adc byte ptr [ebx], al
#define ADC_AL_TO_PTR_ECX adc byte ptr [ecx], al
#define ADC_AL_TO_PTR_EDX adc byte ptr [edx], al
#define ADC_AL_TO_PTR_EDI adc byte ptr [edi], al
#define ADC_AL_TO_PTR_ESI adc byte ptr [esi], al
#define ADC_AL_TO_PTR_EBP adc byte ptr [ebp], al
#define ADC_AL_TO_PTR_ESP adc byte ptr [esp], al

#define ADC_BL_TO_PTR_RAX adc byte ptr [rax], bl
#define ADC_BL_TO_PTR_RBX adc byte ptr [rbx], bl
#define ADC_BL_TO_PTR_RCX adc byte ptr [rcx], bl
#define ADC_BL_TO_PTR_RDX adc byte ptr [rdx], bl
#define ADC_BL_TO_PTR_RDI adc byte ptr [rdi], bl
#define ADC_BL_TO_PTR_RSI adc byte ptr [rsi], bl
#define ADC_BL_TO_PTR_RBP adc byte ptr [rbp], bl
#define ADC_BL_TO_PTR_RSP adc byte ptr [rsp], bl
#define ADC_BL_TO_PTR_R8 adc byte ptr [r8], bl
#define ADC_BL_TO_PTR_R9 adc byte ptr [r9], bl
#define ADC_BL_TO_PTR_R10 adc byte ptr [r10], bl
#define ADC_BL_TO_PTR_R11 adc byte ptr [r11], bl
#define ADC_BL_TO_PTR_R12 adc byte ptr [r12], bl
#define ADC_BL_TO_PTR_R13 adc byte ptr [r13], bl
#define ADC_BL_TO_PTR_R14 adc byte ptr [r14], bl
#define ADC_BL_TO_PTR_R15 adc byte ptr [r15], bl
#define ADC_BL_TO_PTR_EAX adc byte ptr [eax], bl
#define ADC_BL_TO_PTR_EBX adc byte ptr [ebx], bl
#define ADC_BL_TO_PTR_ECX adc byte ptr [ecx], bl
#define ADC_BL_TO_PTR_EDX adc byte ptr [edx], bl
#define ADC_BL_TO_PTR_EDI adc byte ptr [edi], bl
#define ADC_BL_TO_PTR_ESI adc byte ptr [esi], bl
#define ADC_BL_TO_PTR_EBP adc byte ptr [ebp], bl
#define ADC_BL_TO_PTR_ESP adc byte ptr [esp], bl

#define ADC_CL_TO_PTR_RAX adc byte ptr [rax], cl
#define ADC_CL_TO_PTR_RBX adc byte ptr [rbx], cl
#define ADC_CL_TO_PTR_RCX adc byte ptr [rcx], cl
#define ADC_CL_TO_PTR_RDX adc byte ptr [rdx], cl
#define ADC_CL_TO_PTR_RDI adc byte ptr [rdi], cl
#define ADC_CL_TO_PTR_RSI adc byte ptr [rsi], cl
#define ADC_CL_TO_PTR_RBP adc byte ptr [rbp], cl
#define ADC_CL_TO_PTR_RSP adc byte ptr [rsp], cl
#define ADC_CL_TO_PTR_R8 adc byte ptr [r8], cl
#define ADC_CL_TO_PTR_R9 adc byte ptr [r9], cl
#define ADC_CL_TO_PTR_R10 adc byte ptr [r10], cl
#define ADC_CL_TO_PTR_R11 adc byte ptr [r11], cl
#define ADC_CL_TO_PTR_R12 adc byte ptr [r12], cl
#define ADC_CL_TO_PTR_R13 adc byte ptr [r13], cl
#define ADC_CL_TO_PTR_R14 adc byte ptr [r14], cl
#define ADC_CL_TO_PTR_R15 adc byte ptr [r15], cl
#define ADC_CL_TO_PTR_EAX adc byte ptr [eax], cl
#define ADC_CL_TO_PTR_EBX adc byte ptr [ebx], cl
#define ADC_CL_TO_PTR_ECX adc byte ptr [ecx], cl
#define ADC_CL_TO_PTR_EDX adc byte ptr [edx], cl
#define ADC_CL_TO_PTR_EDI adc byte ptr [edi], cl
#define ADC_CL_TO_PTR_ESI adc byte ptr [esi], cl
#define ADC_CL_TO_PTR_EBP adc byte ptr [ebp], cl
#define ADC_CL_TO_PTR_ESP adc byte ptr [esp], cl

#define ADC_DL_TO_PTR_RAX adc byte ptr [rax], dl
#define ADC_DL_TO_PTR_RBX adc byte ptr [rbx], dl
#define ADC_DL_TO_PTR_RCX adc byte ptr [rcx], dl
#define ADC_DL_TO_PTR_RDX adc byte ptr [rdx], dl
#define ADC_DL_TO_PTR_RDI adc byte ptr [rdi], dl
#define ADC_DL_TO_PTR_RSI adc byte ptr [rsi], dl
#define ADC_DL_TO_PTR_RBP adc byte ptr [rbp], dl
#define ADC_DL_TO_PTR_RSP adc byte ptr [rsp], dl
#define ADC_DL_TO_PTR_R8 adc byte ptr [r8], dl
#define ADC_DL_TO_PTR_R9 adc byte ptr [r9], dl
#define ADC_DL_TO_PTR_R10 adc byte ptr [r10], dl
#define ADC_DL_TO_PTR_R11 adc byte ptr [r11], dl
#define ADC_DL_TO_PTR_R12 adc byte ptr [r12], dl
#define ADC_DL_TO_PTR_R13 adc byte ptr [r13], dl
#define ADC_DL_TO_PTR_R14 adc byte ptr [r14], dl
#define ADC_DL_TO_PTR_R15 adc byte ptr [r15], dl
#define ADC_DL_TO_PTR_EAX adc byte ptr [eax], dl
#define ADC_DL_TO_PTR_EBX adc byte ptr [ebx], dl
#define ADC_DL_TO_PTR_ECX adc byte ptr [ecx], dl
#define ADC_DL_TO_PTR_EDX adc byte ptr [edx], dl
#define ADC_DL_TO_PTR_EDI adc byte ptr [edi], dl
#define ADC_DL_TO_PTR_ESI adc byte ptr [esi], dl
#define ADC_DL_TO_PTR_EBP adc byte ptr [ebp], dl
#define ADC_DL_TO_PTR_ESP adc byte ptr [esp], dl

#define ADC_DIL_TO_PTR_RAX adc byte ptr [rax], dil
#define ADC_DIL_TO_PTR_RBX adc byte ptr [rbx], dil
#define ADC_DIL_TO_PTR_RCX adc byte ptr [rcx], dil
#define ADC_DIL_TO_PTR_RDX adc byte ptr [rdx], dil
#define ADC_DIL_TO_PTR_RDI adc byte ptr [rdi], dil
#define ADC_DIL_TO_PTR_RSI adc byte ptr [rsi], dil
#define ADC_DIL_TO_PTR_RBP adc byte ptr [rbp], dil
#define ADC_DIL_TO_PTR_RSP adc byte ptr [rsp], dil
#define ADC_DIL_TO_PTR_R8 adc byte ptr [r8], dil
#define ADC_DIL_TO_PTR_R9 adc byte ptr [r9], dil
#define ADC_DIL_TO_PTR_R10 adc byte ptr [r10], dil
#define ADC_DIL_TO_PTR_R11 adc byte ptr [r11], dil
#define ADC_DIL_TO_PTR_R12 adc byte ptr [r12], dil
#define ADC_DIL_TO_PTR_R13 adc byte ptr [r13], dil
#define ADC_DIL_TO_PTR_R14 adc byte ptr [r14], dil
#define ADC_DIL_TO_PTR_R15 adc byte ptr [r15], dil
#define ADC_DIL_TO_PTR_EAX adc byte ptr [eax], dil
#define ADC_DIL_TO_PTR_EBX adc byte ptr [ebx], dil
#define ADC_DIL_TO_PTR_ECX adc byte ptr [ecx], dil
#define ADC_DIL_TO_PTR_EDX adc byte ptr [edx], dil
#define ADC_DIL_TO_PTR_EDI adc byte ptr [edi], dil
#define ADC_DIL_TO_PTR_ESI adc byte ptr [esi], dil
#define ADC_DIL_TO_PTR_EBP adc byte ptr [ebp], dil
#define ADC_DIL_TO_PTR_ESP adc byte ptr [esp], dil

#define ADC_SIL_TO_PTR_RAX adc byte ptr [rax], sil
#define ADC_SIL_TO_PTR_RBX adc byte ptr [rbx], sil
#define ADC_SIL_TO_PTR_RCX adc byte ptr [rcx], sil
#define ADC_SIL_TO_PTR_RDX adc byte ptr [rdx], sil
#define ADC_SIL_TO_PTR_RDI adc byte ptr [rdi], sil
#define ADC_SIL_TO_PTR_RSI adc byte ptr [rsi], sil
#define ADC_SIL_TO_PTR_RBP adc byte ptr [rbp], sil
#define ADC_SIL_TO_PTR_RSP adc byte ptr [rsp], sil
#define ADC_SIL_TO_PTR_R8 adc byte ptr [r8], sil
#define ADC_SIL_TO_PTR_R9 adc byte ptr [r9], sil
#define ADC_SIL_TO_PTR_R10 adc byte ptr [r10], sil
#define ADC_SIL_TO_PTR_R11 adc byte ptr [r11], sil
#define ADC_SIL_TO_PTR_R12 adc byte ptr [r12], sil
#define ADC_SIL_TO_PTR_R13 adc byte ptr [r13], sil
#define ADC_SIL_TO_PTR_R14 adc byte ptr [r14], sil
#define ADC_SIL_TO_PTR_R15 adc byte ptr [r15], sil
#define ADC_SIL_TO_PTR_EAX adc byte ptr [eax], sil
#define ADC_SIL_TO_PTR_EBX adc byte ptr [ebx], sil
#define ADC_SIL_TO_PTR_ECX adc byte ptr [ecx], sil
#define ADC_SIL_TO_PTR_EDX adc byte ptr [edx], sil
#define ADC_SIL_TO_PTR_EDI adc byte ptr [edi], sil
#define ADC_SIL_TO_PTR_ESI adc byte ptr [esi], sil
#define ADC_SIL_TO_PTR_EBP adc byte ptr [ebp], sil
#define ADC_SIL_TO_PTR_ESP adc byte ptr [esp], sil

#define ADC_BPL_TO_PTR_RAX adc byte ptr [rax], bpl
#define ADC_BPL_TO_PTR_RBX adc byte ptr [rbx], bpl
#define ADC_BPL_TO_PTR_RCX adc byte ptr [rcx], bpl
#define ADC_BPL_TO_PTR_RDX adc byte ptr [rdx], bpl
#define ADC_BPL_TO_PTR_RDI adc byte ptr [rdi], bpl
#define ADC_BPL_TO_PTR_RSI adc byte ptr [rsi], bpl
#define ADC_BPL_TO_PTR_RBP adc byte ptr [rbp], bpl
#define ADC_BPL_TO_PTR_RSP adc byte ptr [rsp], bpl
#define ADC_BPL_TO_PTR_R8 adc byte ptr [r8], bpl
#define ADC_BPL_TO_PTR_R9 adc byte ptr [r9], bpl
#define ADC_BPL_TO_PTR_R10 adc byte ptr [r10], bpl
#define ADC_BPL_TO_PTR_R11 adc byte ptr [r11], bpl
#define ADC_BPL_TO_PTR_R12 adc byte ptr [r12], bpl
#define ADC_BPL_TO_PTR_R13 adc byte ptr [r13], bpl
#define ADC_BPL_TO_PTR_R14 adc byte ptr [r14], bpl
#define ADC_BPL_TO_PTR_R15 adc byte ptr [r15], bpl
#define ADC_BPL_TO_PTR_EAX adc byte ptr [eax], bpl
#define ADC_BPL_TO_PTR_EBX adc byte ptr [ebx], bpl
#define ADC_BPL_TO_PTR_ECX adc byte ptr [ecx], bpl
#define ADC_BPL_TO_PTR_EDX adc byte ptr [edx], bpl
#define ADC_BPL_TO_PTR_EDI adc byte ptr [edi], bpl
#define ADC_BPL_TO_PTR_ESI adc byte ptr [esi], bpl
#define ADC_BPL_TO_PTR_EBP adc byte ptr [ebp], bpl
#define ADC_BPL_TO_PTR_ESP adc byte ptr [esp], bpl

#define ADC_SPL_TO_PTR_RAX adc byte ptr [rax], spl
#define ADC_SPL_TO_PTR_RBX adc byte ptr [rbx], spl
#define ADC_SPL_TO_PTR_RCX adc byte ptr [rcx], spl
#define ADC_SPL_TO_PTR_RDX adc byte ptr [rdx], spl
#define ADC_SPL_TO_PTR_RDI adc byte ptr [rdi], spl
#define ADC_SPL_TO_PTR_RSI adc byte ptr [rsi], spl
#define ADC_SPL_TO_PTR_RBP adc byte ptr [rbp], spl
#define ADC_SPL_TO_PTR_RSP adc byte ptr [rsp], spl
#define ADC_SPL_TO_PTR_R8 adc byte ptr [r8], spl
#define ADC_SPL_TO_PTR_R9 adc byte ptr [r9], spl
#define ADC_SPL_TO_PTR_R10 adc byte ptr [r10], spl
#define ADC_SPL_TO_PTR_R11 adc byte ptr [r11], spl
#define ADC_SPL_TO_PTR_R12 adc byte ptr [r12], spl
#define ADC_SPL_TO_PTR_R13 adc byte ptr [r13], spl
#define ADC_SPL_TO_PTR_R14 adc byte ptr [r14], spl
#define ADC_SPL_TO_PTR_R15 adc byte ptr [r15], spl
#define ADC_SPL_TO_PTR_EAX adc byte ptr [eax], spl
#define ADC_SPL_TO_PTR_EBX adc byte ptr [ebx], spl
#define ADC_SPL_TO_PTR_ECX adc byte ptr [ecx], spl
#define ADC_SPL_TO_PTR_EDX adc byte ptr [edx], spl
#define ADC_SPL_TO_PTR_EDI adc byte ptr [edi], spl
#define ADC_SPL_TO_PTR_ESI adc byte ptr [esi], spl
#define ADC_SPL_TO_PTR_EBP adc byte ptr [ebp], spl
#define ADC_SPL_TO_PTR_ESP adc byte ptr [esp], spl

#define ADC_R8B_TO_PTR_RAX adc byte ptr [rax], r8b
#define ADC_R8B_TO_PTR_RBX adc byte ptr [rbx], r8b
#define ADC_R8B_TO_PTR_RCX adc byte ptr [rcx], r8b
#define ADC_R8B_TO_PTR_RDX adc byte ptr [rdx], r8b
#define ADC_R8B_TO_PTR_RDI adc byte ptr [rdi], r8b
#define ADC_R8B_TO_PTR_RSI adc byte ptr [rsi], r8b
#define ADC_R8B_TO_PTR_RBP adc byte ptr [rbp], r8b
#define ADC_R8B_TO_PTR_RSP adc byte ptr [rsp], r8b
#define ADC_R8B_TO_PTR_R8 adc byte ptr [r8], r8b
#define ADC_R8B_TO_PTR_R9 adc byte ptr [r9], r8b
#define ADC_R8B_TO_PTR_R10 adc byte ptr [r10], r8b
#define ADC_R8B_TO_PTR_R11 adc byte ptr [r11], r8b
#define ADC_R8B_TO_PTR_R12 adc byte ptr [r12], r8b
#define ADC_R8B_TO_PTR_R13 adc byte ptr [r13], r8b
#define ADC_R8B_TO_PTR_R14 adc byte ptr [r14], r8b
#define ADC_R8B_TO_PTR_R15 adc byte ptr [r15], r8b
#define ADC_R8B_TO_PTR_EAX adc byte ptr [eax], r8b
#define ADC_R8B_TO_PTR_EBX adc byte ptr [ebx], r8b
#define ADC_R8B_TO_PTR_ECX adc byte ptr [ecx], r8b
#define ADC_R8B_TO_PTR_EDX adc byte ptr [edx], r8b
#define ADC_R8B_TO_PTR_EDI adc byte ptr [edi], r8b
#define ADC_R8B_TO_PTR_ESI adc byte ptr [esi], r8b
#define ADC_R8B_TO_PTR_EBP adc byte ptr [ebp], r8b
#define ADC_R8B_TO_PTR_ESP adc byte ptr [esp], r8b

#define ADC_R9B_TO_PTR_RAX adc byte ptr [rax], r9b
#define ADC_R9B_TO_PTR_RBX adc byte ptr [rbx], r9b
#define ADC_R9B_TO_PTR_RCX adc byte ptr [rcx], r9b
#define ADC_R9B_TO_PTR_RDX adc byte ptr [rdx], r9b
#define ADC_R9B_TO_PTR_RDI adc byte ptr [rdi], r9b
#define ADC_R9B_TO_PTR_RSI adc byte ptr [rsi], r9b
#define ADC_R9B_TO_PTR_RBP adc byte ptr [rbp], r9b
#define ADC_R9B_TO_PTR_RSP adc byte ptr [rsp], r9b
#define ADC_R9B_TO_PTR_R8 adc byte ptr [r8], r9b
#define ADC_R9B_TO_PTR_R9 adc byte ptr [r9], r9b
#define ADC_R9B_TO_PTR_R10 adc byte ptr [r10], r9b
#define ADC_R9B_TO_PTR_R11 adc byte ptr [r11], r9b
#define ADC_R9B_TO_PTR_R12 adc byte ptr [r12], r9b
#define ADC_R9B_TO_PTR_R13 adc byte ptr [r13], r9b
#define ADC_R9B_TO_PTR_R14 adc byte ptr [r14], r9b
#define ADC_R9B_TO_PTR_R15 adc byte ptr [r15], r9b
#define ADC_R9B_TO_PTR_EAX adc byte ptr [eax], r9b
#define ADC_R9B_TO_PTR_EBX adc byte ptr [ebx], r9b
#define ADC_R9B_TO_PTR_ECX adc byte ptr [ecx], r9b
#define ADC_R9B_TO_PTR_EDX adc byte ptr [edx], r9b
#define ADC_R9B_TO_PTR_EDI adc byte ptr [edi], r9b
#define ADC_R9B_TO_PTR_ESI adc byte ptr [esi], r9b
#define ADC_R9B_TO_PTR_EBP adc byte ptr [ebp], r9b
#define ADC_R9B_TO_PTR_ESP adc byte ptr [esp], r9b

#define ADC_R10B_TO_PTR_RAX adc byte ptr [rax], r10b
#define ADC_R10B_TO_PTR_RBX adc byte ptr [rbx], r10b
#define ADC_R10B_TO_PTR_RCX adc byte ptr [rcx], r10b
#define ADC_R10B_TO_PTR_RDX adc byte ptr [rdx], r10b
#define ADC_R10B_TO_PTR_RDI adc byte ptr [rdi], r10b
#define ADC_R10B_TO_PTR_RSI adc byte ptr [rsi], r10b
#define ADC_R10B_TO_PTR_RBP adc byte ptr [rbp], r10b
#define ADC_R10B_TO_PTR_RSP adc byte ptr [rsp], r10b
#define ADC_R10B_TO_PTR_R8 adc byte ptr [r8], r10b
#define ADC_R10B_TO_PTR_R9 adc byte ptr [r9], r10b
#define ADC_R10B_TO_PTR_R10 adc byte ptr [r10], r10b
#define ADC_R10B_TO_PTR_R11 adc byte ptr [r11], r10b
#define ADC_R10B_TO_PTR_R12 adc byte ptr [r12], r10b
#define ADC_R10B_TO_PTR_R13 adc byte ptr [r13], r10b
#define ADC_R10B_TO_PTR_R14 adc byte ptr [r14], r10b
#define ADC_R10B_TO_PTR_R15 adc byte ptr [r15], r10b
#define ADC_R10B_TO_PTR_EAX adc byte ptr [eax], r10b
#define ADC_R10B_TO_PTR_EBX adc byte ptr [ebx], r10b
#define ADC_R10B_TO_PTR_ECX adc byte ptr [ecx], r10b
#define ADC_R10B_TO_PTR_EDX adc byte ptr [edx], r10b
#define ADC_R10B_TO_PTR_EDI adc byte ptr [edi], r10b
#define ADC_R10B_TO_PTR_ESI adc byte ptr [esi], r10b
#define ADC_R10B_TO_PTR_EBP adc byte ptr [ebp], r10b
#define ADC_R10B_TO_PTR_ESP adc byte ptr [esp], r10b

#define ADC_R11B_TO_PTR_RAX adc byte ptr [rax], r11b
#define ADC_R11B_TO_PTR_RBX adc byte ptr [rbx], r11b
#define ADC_R11B_TO_PTR_RCX adc byte ptr [rcx], r11b
#define ADC_R11B_TO_PTR_RDX adc byte ptr [rdx], r11b
#define ADC_R11B_TO_PTR_RDI adc byte ptr [rdi], r11b
#define ADC_R11B_TO_PTR_RSI adc byte ptr [rsi], r11b
#define ADC_R11B_TO_PTR_RBP adc byte ptr [rbp], r11b
#define ADC_R11B_TO_PTR_RSP adc byte ptr [rsp], r11b
#define ADC_R11B_TO_PTR_R8 adc byte ptr [r8], r11b
#define ADC_R11B_TO_PTR_R9 adc byte ptr [r9], r11b
#define ADC_R11B_TO_PTR_R10 adc byte ptr [r10], r11b
#define ADC_R11B_TO_PTR_R11 adc byte ptr [r11], r11b
#define ADC_R11B_TO_PTR_R12 adc byte ptr [r12], r11b
#define ADC_R11B_TO_PTR_R13 adc byte ptr [r13], r11b
#define ADC_R11B_TO_PTR_R14 adc byte ptr [r14], r11b
#define ADC_R11B_TO_PTR_R15 adc byte ptr [r15], r11b
#define ADC_R11B_TO_PTR_EAX adc byte ptr [eax], r11b
#define ADC_R11B_TO_PTR_EBX adc byte ptr [ebx], r11b
#define ADC_R11B_TO_PTR_ECX adc byte ptr [ecx], r11b
#define ADC_R11B_TO_PTR_EDX adc byte ptr [edx], r11b
#define ADC_R11B_TO_PTR_EDI adc byte ptr [edi], r11b
#define ADC_R11B_TO_PTR_ESI adc byte ptr [esi], r11b
#define ADC_R11B_TO_PTR_EBP adc byte ptr [ebp], r11b
#define ADC_R11B_TO_PTR_ESP adc byte ptr [esp], r11b

#define ADC_R12B_TO_PTR_RAX adc byte ptr [rax], r12b
#define ADC_R12B_TO_PTR_RBX adc byte ptr [rbx], r12b
#define ADC_R12B_TO_PTR_RCX adc byte ptr [rcx], r12b
#define ADC_R12B_TO_PTR_RDX adc byte ptr [rdx], r12b
#define ADC_R12B_TO_PTR_RDI adc byte ptr [rdi], r12b
#define ADC_R12B_TO_PTR_RSI adc byte ptr [rsi], r12b
#define ADC_R12B_TO_PTR_RBP adc byte ptr [rbp], r12b
#define ADC_R12B_TO_PTR_RSP adc byte ptr [rsp], r12b
#define ADC_R12B_TO_PTR_R8 adc byte ptr [r8], r12b
#define ADC_R12B_TO_PTR_R9 adc byte ptr [r9], r12b
#define ADC_R12B_TO_PTR_R10 adc byte ptr [r10], r12b
#define ADC_R12B_TO_PTR_R11 adc byte ptr [r11], r12b
#define ADC_R12B_TO_PTR_R12 adc byte ptr [r12], r12b
#define ADC_R12B_TO_PTR_R13 adc byte ptr [r13], r12b
#define ADC_R12B_TO_PTR_R14 adc byte ptr [r14], r12b
#define ADC_R12B_TO_PTR_R15 adc byte ptr [r15], r12b
#define ADC_R12B_TO_PTR_EAX adc byte ptr [eax], r12b
#define ADC_R12B_TO_PTR_EBX adc byte ptr [ebx], r12b
#define ADC_R12B_TO_PTR_ECX adc byte ptr [ecx], r12b
#define ADC_R12B_TO_PTR_EDX adc byte ptr [edx], r12b
#define ADC_R12B_TO_PTR_EDI adc byte ptr [edi], r12b
#define ADC_R12B_TO_PTR_ESI adc byte ptr [esi], r12b
#define ADC_R12B_TO_PTR_EBP adc byte ptr [ebp], r12b
#define ADC_R12B_TO_PTR_ESP adc byte ptr [esp], r12b

#define ADC_R13B_TO_PTR_RAX adc byte ptr [rax], r13b
#define ADC_R13B_TO_PTR_RBX adc byte ptr [rbx], r13b
#define ADC_R13B_TO_PTR_RCX adc byte ptr [rcx], r13b
#define ADC_R13B_TO_PTR_RDX adc byte ptr [rdx], r13b
#define ADC_R13B_TO_PTR_RDI adc byte ptr [rdi], r13b
#define ADC_R13B_TO_PTR_RSI adc byte ptr [rsi], r13b
#define ADC_R13B_TO_PTR_RBP adc byte ptr [rbp], r13b
#define ADC_R13B_TO_PTR_RSP adc byte ptr [rsp], r13b
#define ADC_R13B_TO_PTR_R8 adc byte ptr [r8], r13b
#define ADC_R13B_TO_PTR_R9 adc byte ptr [r9], r13b
#define ADC_R13B_TO_PTR_R10 adc byte ptr [r10], r13b
#define ADC_R13B_TO_PTR_R11 adc byte ptr [r11], r13b
#define ADC_R13B_TO_PTR_R12 adc byte ptr [r12], r13b
#define ADC_R13B_TO_PTR_R13 adc byte ptr [r13], r13b
#define ADC_R13B_TO_PTR_R14 adc byte ptr [r14], r13b
#define ADC_R13B_TO_PTR_R15 adc byte ptr [r15], r13b
#define ADC_R13B_TO_PTR_EAX adc byte ptr [eax], r13b
#define ADC_R13B_TO_PTR_EBX adc byte ptr [ebx], r13b
#define ADC_R13B_TO_PTR_ECX adc byte ptr [ecx], r13b
#define ADC_R13B_TO_PTR_EDX adc byte ptr [edx], r13b
#define ADC_R13B_TO_PTR_EDI adc byte ptr [edi], r13b
#define ADC_R13B_TO_PTR_ESI adc byte ptr [esi], r13b
#define ADC_R13B_TO_PTR_EBP adc byte ptr [ebp], r13b
#define ADC_R13B_TO_PTR_ESP adc byte ptr [esp], r13b

#define ADC_R14B_TO_PTR_RAX adc byte ptr [rax], r14b
#define ADC_R14B_TO_PTR_RBX adc byte ptr [rbx], r14b
#define ADC_R14B_TO_PTR_RCX adc byte ptr [rcx], r14b
#define ADC_R14B_TO_PTR_RDX adc byte ptr [rdx], r14b
#define ADC_R14B_TO_PTR_RDI adc byte ptr [rdi], r14b
#define ADC_R14B_TO_PTR_RSI adc byte ptr [rsi], r14b
#define ADC_R14B_TO_PTR_RBP adc byte ptr [rbp], r14b
#define ADC_R14B_TO_PTR_RSP adc byte ptr [rsp], r14b
#define ADC_R14B_TO_PTR_R8 adc byte ptr [r8], r14b
#define ADC_R14B_TO_PTR_R9 adc byte ptr [r9], r14b
#define ADC_R14B_TO_PTR_R10 adc byte ptr [r10], r14b
#define ADC_R14B_TO_PTR_R11 adc byte ptr [r11], r14b
#define ADC_R14B_TO_PTR_R12 adc byte ptr [r12], r14b
#define ADC_R14B_TO_PTR_R13 adc byte ptr [r13], r14b
#define ADC_R14B_TO_PTR_R14 adc byte ptr [r14], r14b
#define ADC_R14B_TO_PTR_R15 adc byte ptr [r15], r14b
#define ADC_R14B_TO_PTR_EAX adc byte ptr [eax], r14b
#define ADC_R14B_TO_PTR_EBX adc byte ptr [ebx], r14b
#define ADC_R14B_TO_PTR_ECX adc byte ptr [ecx], r14b
#define ADC_R14B_TO_PTR_EDX adc byte ptr [edx], r14b
#define ADC_R14B_TO_PTR_EDI adc byte ptr [edi], r14b
#define ADC_R14B_TO_PTR_ESI adc byte ptr [esi], r14b
#define ADC_R14B_TO_PTR_EBP adc byte ptr [ebp], r14b
#define ADC_R14B_TO_PTR_ESP adc byte ptr [esp], r14b

#define ADC_R15B_TO_PTR_RAX adc byte ptr [rax], r15b
#define ADC_R15B_TO_PTR_RBX adc byte ptr [rbx], r15b
#define ADC_R15B_TO_PTR_RCX adc byte ptr [rcx], r15b
#define ADC_R15B_TO_PTR_RDX adc byte ptr [rdx], r15b
#define ADC_R15B_TO_PTR_RDI adc byte ptr [rdi], r15b
#define ADC_R15B_TO_PTR_RSI adc byte ptr [rsi], r15b
#define ADC_R15B_TO_PTR_RBP adc byte ptr [rbp], r15b
#define ADC_R15B_TO_PTR_RSP adc byte ptr [rsp], r15b
#define ADC_R15B_TO_PTR_R8 adc byte ptr [r8], r15b
#define ADC_R15B_TO_PTR_R9 adc byte ptr [r9], r15b
#define ADC_R15B_TO_PTR_R10 adc byte ptr [r10], r15b
#define ADC_R15B_TO_PTR_R11 adc byte ptr [r11], r15b
#define ADC_R15B_TO_PTR_R12 adc byte ptr [r12], r15b
#define ADC_R15B_TO_PTR_R13 adc byte ptr [r13], r15b
#define ADC_R15B_TO_PTR_R14 adc byte ptr [r14], r15b
#define ADC_R15B_TO_PTR_R15 adc byte ptr [r15], r15b
#define ADC_R15B_TO_PTR_EAX adc byte ptr [eax], r15b
#define ADC_R15B_TO_PTR_EBX adc byte ptr [ebx], r15b
#define ADC_R15B_TO_PTR_ECX adc byte ptr [ecx], r15b
#define ADC_R15B_TO_PTR_EDX adc byte ptr [edx], r15b
#define ADC_R15B_TO_PTR_EDI adc byte ptr [edi], r15b
#define ADC_R15B_TO_PTR_ESI adc byte ptr [esi], r15b
#define ADC_R15B_TO_PTR_EBP adc byte ptr [ebp], r15b
#define ADC_R15B_TO_PTR_ESP adc byte ptr [esp], r15b

#define ADC_AL_FROM_PTR_RAX_(VALUE) adc al, byte ptr [rax + VALUE]
#define ADC_AL_FROM_PTR_RBX_(VALUE) adc al, byte ptr [rbx + VALUE]
#define ADC_AL_FROM_PTR_RCX_(VALUE) adc al, byte ptr [rcx + VALUE]
#define ADC_AL_FROM_PTR_RDX_(VALUE) adc al, byte ptr [rdx + VALUE]
#define ADC_AL_FROM_PTR_RDI_(VALUE) adc al, byte ptr [rdi + VALUE]
#define ADC_AL_FROM_PTR_RSI_(VALUE) adc al, byte ptr [rsi + VALUE]
#define ADC_AL_FROM_PTR_RBP_(VALUE) adc al, byte ptr [rbp + VALUE]
#define ADC_AL_FROM_PTR_RSP_(VALUE) adc al, byte ptr [rsp + VALUE]
#define ADC_AL_FROM_PTR_R8_(VALUE) adc al, byte ptr [r8 + VALUE]
#define ADC_AL_FROM_PTR_R9_(VALUE) adc al, byte ptr [r9 + VALUE]
#define ADC_AL_FROM_PTR_R10_(VALUE) adc al, byte ptr [r10 + VALUE]
#define ADC_AL_FROM_PTR_R11_(VALUE) adc al, byte ptr [r11 + VALUE]
#define ADC_AL_FROM_PTR_R12_(VALUE) adc al, byte ptr [r12 + VALUE]
#define ADC_AL_FROM_PTR_R13_(VALUE) adc al, byte ptr [r13 + VALUE]
#define ADC_AL_FROM_PTR_R14_(VALUE) adc al, byte ptr [r14 + VALUE]
#define ADC_AL_FROM_PTR_R15_(VALUE) adc al, byte ptr [r15 + VALUE]
#define ADC_AL_FROM_PTR_EAX_(VALUE) adc al, byte ptr [eax + VALUE]
#define ADC_AL_FROM_PTR_EBX_(VALUE) adc al, byte ptr [ebx + VALUE]
#define ADC_AL_FROM_PTR_ECX_(VALUE) adc al, byte ptr [ecx + VALUE]
#define ADC_AL_FROM_PTR_EDX_(VALUE) adc al, byte ptr [edx + VALUE]
#define ADC_AL_FROM_PTR_EDI_(VALUE) adc al, byte ptr [edi + VALUE]
#define ADC_AL_FROM_PTR_ESI_(VALUE) adc al, byte ptr [esi + VALUE]
#define ADC_AL_FROM_PTR_EBP_(VALUE) adc al, byte ptr [ebp + VALUE]
#define ADC_AL_FROM_PTR_ESP_(VALUE) adc al, byte ptr [esp + VALUE]

#define ADC_BL_FROM_PTR_RAX_(VALUE) adc bl, byte ptr [rax + VALUE]
#define ADC_BL_FROM_PTR_RBX_(VALUE) adc bl, byte ptr [rbx + VALUE]
#define ADC_BL_FROM_PTR_RCX_(VALUE) adc bl, byte ptr [rcx + VALUE]
#define ADC_BL_FROM_PTR_RDX_(VALUE) adc bl, byte ptr [rdx + VALUE]
#define ADC_BL_FROM_PTR_RDI_(VALUE) adc bl, byte ptr [rdi + VALUE]
#define ADC_BL_FROM_PTR_RSI_(VALUE) adc bl, byte ptr [rsi + VALUE]
#define ADC_BL_FROM_PTR_RBP_(VALUE) adc bl, byte ptr [rbp + VALUE]
#define ADC_BL_FROM_PTR_RSP_(VALUE) adc bl, byte ptr [rsp + VALUE]
#define ADC_BL_FROM_PTR_R8_(VALUE) adc bl, byte ptr [r8 + VALUE]
#define ADC_BL_FROM_PTR_R9_(VALUE) adc bl, byte ptr [r9 + VALUE]
#define ADC_BL_FROM_PTR_R10_(VALUE) adc bl, byte ptr [r10 + VALUE]
#define ADC_BL_FROM_PTR_R11_(VALUE) adc bl, byte ptr [r11 + VALUE]
#define ADC_BL_FROM_PTR_R12_(VALUE) adc bl, byte ptr [r12 + VALUE]
#define ADC_BL_FROM_PTR_R13_(VALUE) adc bl, byte ptr [r13 + VALUE]
#define ADC_BL_FROM_PTR_R14_(VALUE) adc bl, byte ptr [r14 + VALUE]
#define ADC_BL_FROM_PTR_R15_(VALUE) adc bl, byte ptr [r15 + VALUE]
#define ADC_BL_FROM_PTR_EAX_(VALUE) adc bl, byte ptr [eax + VALUE]
#define ADC_BL_FROM_PTR_EBX_(VALUE) adc bl, byte ptr [ebx + VALUE]
#define ADC_BL_FROM_PTR_ECX_(VALUE) adc bl, byte ptr [ecx + VALUE]
#define ADC_BL_FROM_PTR_EDX_(VALUE) adc bl, byte ptr [edx + VALUE]
#define ADC_BL_FROM_PTR_EDI_(VALUE) adc bl, byte ptr [edi + VALUE]
#define ADC_BL_FROM_PTR_ESI_(VALUE) adc bl, byte ptr [esi + VALUE]
#define ADC_BL_FROM_PTR_EBP_(VALUE) adc bl, byte ptr [ebp + VALUE]
#define ADC_BL_FROM_PTR_ESP_(VALUE) adc bl, byte ptr [esp + VALUE]

#define ADC_CL_FROM_PTR_RAX_(VALUE) adc cl, byte ptr [rax + VALUE]
#define ADC_CL_FROM_PTR_RBX_(VALUE) adc cl, byte ptr [rbx + VALUE]
#define ADC_CL_FROM_PTR_RCX_(VALUE) adc cl, byte ptr [rcx + VALUE]
#define ADC_CL_FROM_PTR_RDX_(VALUE) adc cl, byte ptr [rdx + VALUE]
#define ADC_CL_FROM_PTR_RDI_(VALUE) adc cl, byte ptr [rdi + VALUE]
#define ADC_CL_FROM_PTR_RSI_(VALUE) adc cl, byte ptr [rsi + VALUE]
#define ADC_CL_FROM_PTR_RBP_(VALUE) adc cl, byte ptr [rbp + VALUE]
#define ADC_CL_FROM_PTR_RSP_(VALUE) adc cl, byte ptr [rsp + VALUE]
#define ADC_CL_FROM_PTR_R8_(VALUE) adc cl, byte ptr [r8 + VALUE]
#define ADC_CL_FROM_PTR_R9_(VALUE) adc cl, byte ptr [r9 + VALUE]
#define ADC_CL_FROM_PTR_R10_(VALUE) adc cl, byte ptr [r10 + VALUE]
#define ADC_CL_FROM_PTR_R11_(VALUE) adc cl, byte ptr [r11 + VALUE]
#define ADC_CL_FROM_PTR_R12_(VALUE) adc cl, byte ptr [r12 + VALUE]
#define ADC_CL_FROM_PTR_R13_(VALUE) adc cl, byte ptr [r13 + VALUE]
#define ADC_CL_FROM_PTR_R14_(VALUE) adc cl, byte ptr [r14 + VALUE]
#define ADC_CL_FROM_PTR_R15_(VALUE) adc cl, byte ptr [r15 + VALUE]
#define ADC_CL_FROM_PTR_EAX_(VALUE) adc cl, byte ptr [eax + VALUE]
#define ADC_CL_FROM_PTR_EBX_(VALUE) adc cl, byte ptr [ebx + VALUE]
#define ADC_CL_FROM_PTR_ECX_(VALUE) adc cl, byte ptr [ecx + VALUE]
#define ADC_CL_FROM_PTR_EDX_(VALUE) adc cl, byte ptr [edx + VALUE]
#define ADC_CL_FROM_PTR_EDI_(VALUE) adc cl, byte ptr [edi + VALUE]
#define ADC_CL_FROM_PTR_ESI_(VALUE) adc cl, byte ptr [esi + VALUE]
#define ADC_CL_FROM_PTR_EBP_(VALUE) adc cl, byte ptr [ebp + VALUE]
#define ADC_CL_FROM_PTR_ESP_(VALUE) adc cl, byte ptr [esp + VALUE]

#define ADC_DL_FROM_PTR_RAX_(VALUE) adc dl, byte ptr [rax + VALUE]
#define ADC_DL_FROM_PTR_RBX_(VALUE) adc dl, byte ptr [rbx + VALUE]
#define ADC_DL_FROM_PTR_RCX_(VALUE) adc dl, byte ptr [rcx + VALUE]
#define ADC_DL_FROM_PTR_RDX_(VALUE) adc dl, byte ptr [rdx + VALUE]
#define ADC_DL_FROM_PTR_RDI_(VALUE) adc dl, byte ptr [rdi + VALUE]
#define ADC_DL_FROM_PTR_RSI_(VALUE) adc dl, byte ptr [rsi + VALUE]
#define ADC_DL_FROM_PTR_RBP_(VALUE) adc dl, byte ptr [rbp + VALUE]
#define ADC_DL_FROM_PTR_RSP_(VALUE) adc dl, byte ptr [rsp + VALUE]
#define ADC_DL_FROM_PTR_R8_(VALUE) adc dl, byte ptr [r8 + VALUE]
#define ADC_DL_FROM_PTR_R9_(VALUE) adc dl, byte ptr [r9 + VALUE]
#define ADC_DL_FROM_PTR_R10_(VALUE) adc dl, byte ptr [r10 + VALUE]
#define ADC_DL_FROM_PTR_R11_(VALUE) adc dl, byte ptr [r11 + VALUE]
#define ADC_DL_FROM_PTR_R12_(VALUE) adc dl, byte ptr [r12 + VALUE]
#define ADC_DL_FROM_PTR_R13_(VALUE) adc dl, byte ptr [r13 + VALUE]
#define ADC_DL_FROM_PTR_R14_(VALUE) adc dl, byte ptr [r14 + VALUE]
#define ADC_DL_FROM_PTR_R15_(VALUE) adc dl, byte ptr [r15 + VALUE]
#define ADC_DL_FROM_PTR_EAX_(VALUE) adc dl, byte ptr [eax + VALUE]
#define ADC_DL_FROM_PTR_EBX_(VALUE) adc dl, byte ptr [ebx + VALUE]
#define ADC_DL_FROM_PTR_ECX_(VALUE) adc dl, byte ptr [ecx + VALUE]
#define ADC_DL_FROM_PTR_EDX_(VALUE) adc dl, byte ptr [edx + VALUE]
#define ADC_DL_FROM_PTR_EDI_(VALUE) adc dl, byte ptr [edi + VALUE]
#define ADC_DL_FROM_PTR_ESI_(VALUE) adc dl, byte ptr [esi + VALUE]
#define ADC_DL_FROM_PTR_EBP_(VALUE) adc dl, byte ptr [ebp + VALUE]
#define ADC_DL_FROM_PTR_ESP_(VALUE) adc dl, byte ptr [esp + VALUE]

#define ADC_DIL_FROM_PTR_RAX_(VALUE) adc dil, byte ptr [rax + VALUE]
#define ADC_DIL_FROM_PTR_RBX_(VALUE) adc dil, byte ptr [rbx + VALUE]
#define ADC_DIL_FROM_PTR_RCX_(VALUE) adc dil, byte ptr [rcx + VALUE]
#define ADC_DIL_FROM_PTR_RDX_(VALUE) adc dil, byte ptr [rdx + VALUE]
#define ADC_DIL_FROM_PTR_RDI_(VALUE) adc dil, byte ptr [rdi + VALUE]
#define ADC_DIL_FROM_PTR_RSI_(VALUE) adc dil, byte ptr [rsi + VALUE]
#define ADC_DIL_FROM_PTR_RBP_(VALUE) adc dil, byte ptr [rbp + VALUE]
#define ADC_DIL_FROM_PTR_RSP_(VALUE) adc dil, byte ptr [rsp + VALUE]
#define ADC_DIL_FROM_PTR_R8_(VALUE) adc dil, byte ptr [r8 + VALUE]
#define ADC_DIL_FROM_PTR_R9_(VALUE) adc dil, byte ptr [r9 + VALUE]
#define ADC_DIL_FROM_PTR_R10_(VALUE) adc dil, byte ptr [r10 + VALUE]
#define ADC_DIL_FROM_PTR_R11_(VALUE) adc dil, byte ptr [r11 + VALUE]
#define ADC_DIL_FROM_PTR_R12_(VALUE) adc dil, byte ptr [r12 + VALUE]
#define ADC_DIL_FROM_PTR_R13_(VALUE) adc dil, byte ptr [r13 + VALUE]
#define ADC_DIL_FROM_PTR_R14_(VALUE) adc dil, byte ptr [r14 + VALUE]
#define ADC_DIL_FROM_PTR_R15_(VALUE) adc dil, byte ptr [r15 + VALUE]
#define ADC_DIL_FROM_PTR_EAX_(VALUE) adc dil, byte ptr [eax + VALUE]
#define ADC_DIL_FROM_PTR_EBX_(VALUE) adc dil, byte ptr [ebx + VALUE]
#define ADC_DIL_FROM_PTR_ECX_(VALUE) adc dil, byte ptr [ecx + VALUE]
#define ADC_DIL_FROM_PTR_EDX_(VALUE) adc dil, byte ptr [edx + VALUE]
#define ADC_DIL_FROM_PTR_EDI_(VALUE) adc dil, byte ptr [edi + VALUE]
#define ADC_DIL_FROM_PTR_ESI_(VALUE) adc dil, byte ptr [esi + VALUE]
#define ADC_DIL_FROM_PTR_EBP_(VALUE) adc dil, byte ptr [ebp + VALUE]
#define ADC_DIL_FROM_PTR_ESP_(VALUE) adc dil, byte ptr [esp + VALUE]

#define ADC_SIL_FROM_PTR_RAX_(VALUE) adc sil, byte ptr [rax + VALUE]
#define ADC_SIL_FROM_PTR_RBX_(VALUE) adc sil, byte ptr [rbx + VALUE]
#define ADC_SIL_FROM_PTR_RCX_(VALUE) adc sil, byte ptr [rcx + VALUE]
#define ADC_SIL_FROM_PTR_RDX_(VALUE) adc sil, byte ptr [rdx + VALUE]
#define ADC_SIL_FROM_PTR_RDI_(VALUE) adc sil, byte ptr [rdi + VALUE]
#define ADC_SIL_FROM_PTR_RSI_(VALUE) adc sil, byte ptr [rsi + VALUE]
#define ADC_SIL_FROM_PTR_RBP_(VALUE) adc sil, byte ptr [rbp + VALUE]
#define ADC_SIL_FROM_PTR_RSP_(VALUE) adc sil, byte ptr [rsp + VALUE]
#define ADC_SIL_FROM_PTR_R8_(VALUE) adc sil, byte ptr [r8 + VALUE]
#define ADC_SIL_FROM_PTR_R9_(VALUE) adc sil, byte ptr [r9 + VALUE]
#define ADC_SIL_FROM_PTR_R10_(VALUE) adc sil, byte ptr [r10 + VALUE]
#define ADC_SIL_FROM_PTR_R11_(VALUE) adc sil, byte ptr [r11 + VALUE]
#define ADC_SIL_FROM_PTR_R12_(VALUE) adc sil, byte ptr [r12 + VALUE]
#define ADC_SIL_FROM_PTR_R13_(VALUE) adc sil, byte ptr [r13 + VALUE]
#define ADC_SIL_FROM_PTR_R14_(VALUE) adc sil, byte ptr [r14 + VALUE]
#define ADC_SIL_FROM_PTR_R15_(VALUE) adc sil, byte ptr [r15 + VALUE]
#define ADC_SIL_FROM_PTR_EAX_(VALUE) adc sil, byte ptr [eax + VALUE]
#define ADC_SIL_FROM_PTR_EBX_(VALUE) adc sil, byte ptr [ebx + VALUE]
#define ADC_SIL_FROM_PTR_ECX_(VALUE) adc sil, byte ptr [ecx + VALUE]
#define ADC_SIL_FROM_PTR_EDX_(VALUE) adc sil, byte ptr [edx + VALUE]
#define ADC_SIL_FROM_PTR_EDI_(VALUE) adc sil, byte ptr [edi + VALUE]
#define ADC_SIL_FROM_PTR_ESI_(VALUE) adc sil, byte ptr [esi + VALUE]
#define ADC_SIL_FROM_PTR_EBP_(VALUE) adc sil, byte ptr [ebp + VALUE]
#define ADC_SIL_FROM_PTR_ESP_(VALUE) adc sil, byte ptr [esp + VALUE]

#define ADC_BPL_FROM_PTR_RAX_(VALUE) adc bpl, byte ptr [rax + VALUE]
#define ADC_BPL_FROM_PTR_RBX_(VALUE) adc bpl, byte ptr [rbx + VALUE]
#define ADC_BPL_FROM_PTR_RCX_(VALUE) adc bpl, byte ptr [rcx + VALUE]
#define ADC_BPL_FROM_PTR_RDX_(VALUE) adc bpl, byte ptr [rdx + VALUE]
#define ADC_BPL_FROM_PTR_RDI_(VALUE) adc bpl, byte ptr [rdi + VALUE]
#define ADC_BPL_FROM_PTR_RSI_(VALUE) adc bpl, byte ptr [rsi + VALUE]
#define ADC_BPL_FROM_PTR_RBP_(VALUE) adc bpl, byte ptr [rbp + VALUE]
#define ADC_BPL_FROM_PTR_RSP_(VALUE) adc bpl, byte ptr [rsp + VALUE]
#define ADC_BPL_FROM_PTR_R8_(VALUE) adc bpl, byte ptr [r8 + VALUE]
#define ADC_BPL_FROM_PTR_R9_(VALUE) adc bpl, byte ptr [r9 + VALUE]
#define ADC_BPL_FROM_PTR_R10_(VALUE) adc bpl, byte ptr [r10 + VALUE]
#define ADC_BPL_FROM_PTR_R11_(VALUE) adc bpl, byte ptr [r11 + VALUE]
#define ADC_BPL_FROM_PTR_R12_(VALUE) adc bpl, byte ptr [r12 + VALUE]
#define ADC_BPL_FROM_PTR_R13_(VALUE) adc bpl, byte ptr [r13 + VALUE]
#define ADC_BPL_FROM_PTR_R14_(VALUE) adc bpl, byte ptr [r14 + VALUE]
#define ADC_BPL_FROM_PTR_R15_(VALUE) adc bpl, byte ptr [r15 + VALUE]
#define ADC_BPL_FROM_PTR_EAX_(VALUE) adc bpl, byte ptr [eax + VALUE]
#define ADC_BPL_FROM_PTR_EBX_(VALUE) adc bpl, byte ptr [ebx + VALUE]
#define ADC_BPL_FROM_PTR_ECX_(VALUE) adc bpl, byte ptr [ecx + VALUE]
#define ADC_BPL_FROM_PTR_EDX_(VALUE) adc bpl, byte ptr [edx + VALUE]
#define ADC_BPL_FROM_PTR_EDI_(VALUE) adc bpl, byte ptr [edi + VALUE]
#define ADC_BPL_FROM_PTR_ESI_(VALUE) adc bpl, byte ptr [esi + VALUE]
#define ADC_BPL_FROM_PTR_EBP_(VALUE) adc bpl, byte ptr [ebp + VALUE]
#define ADC_BPL_FROM_PTR_ESP_(VALUE) adc bpl, byte ptr [esp + VALUE]

#define ADC_SPL_FROM_PTR_RAX_(VALUE) adc spl, byte ptr [rax + VALUE]
#define ADC_SPL_FROM_PTR_RBX_(VALUE) adc spl, byte ptr [rbx + VALUE]
#define ADC_SPL_FROM_PTR_RCX_(VALUE) adc spl, byte ptr [rcx + VALUE]
#define ADC_SPL_FROM_PTR_RDX_(VALUE) adc spl, byte ptr [rdx + VALUE]
#define ADC_SPL_FROM_PTR_RDI_(VALUE) adc spl, byte ptr [rdi + VALUE]
#define ADC_SPL_FROM_PTR_RSI_(VALUE) adc spl, byte ptr [rsi + VALUE]
#define ADC_SPL_FROM_PTR_RBP_(VALUE) adc spl, byte ptr [rbp + VALUE]
#define ADC_SPL_FROM_PTR_RSP_(VALUE) adc spl, byte ptr [rsp + VALUE]
#define ADC_SPL_FROM_PTR_R8_(VALUE) adc spl, byte ptr [r8 + VALUE]
#define ADC_SPL_FROM_PTR_R9_(VALUE) adc spl, byte ptr [r9 + VALUE]
#define ADC_SPL_FROM_PTR_R10_(VALUE) adc spl, byte ptr [r10 + VALUE]
#define ADC_SPL_FROM_PTR_R11_(VALUE) adc spl, byte ptr [r11 + VALUE]
#define ADC_SPL_FROM_PTR_R12_(VALUE) adc spl, byte ptr [r12 + VALUE]
#define ADC_SPL_FROM_PTR_R13_(VALUE) adc spl, byte ptr [r13 + VALUE]
#define ADC_SPL_FROM_PTR_R14_(VALUE) adc spl, byte ptr [r14 + VALUE]
#define ADC_SPL_FROM_PTR_R15_(VALUE) adc spl, byte ptr [r15 + VALUE]
#define ADC_SPL_FROM_PTR_EAX_(VALUE) adc spl, byte ptr [eax + VALUE]
#define ADC_SPL_FROM_PTR_EBX_(VALUE) adc spl, byte ptr [ebx + VALUE]
#define ADC_SPL_FROM_PTR_ECX_(VALUE) adc spl, byte ptr [ecx + VALUE]
#define ADC_SPL_FROM_PTR_EDX_(VALUE) adc spl, byte ptr [edx + VALUE]
#define ADC_SPL_FROM_PTR_EDI_(VALUE) adc spl, byte ptr [edi + VALUE]
#define ADC_SPL_FROM_PTR_ESI_(VALUE) adc spl, byte ptr [esi + VALUE]
#define ADC_SPL_FROM_PTR_EBP_(VALUE) adc spl, byte ptr [ebp + VALUE]
#define ADC_SPL_FROM_PTR_ESP_(VALUE) adc spl, byte ptr [esp + VALUE]

#define ADC_R8B_FROM_PTR_RAX_(VALUE) adc r8b, byte ptr [rax + VALUE]
#define ADC_R8B_FROM_PTR_RBX_(VALUE) adc r8b, byte ptr [rbx + VALUE]
#define ADC_R8B_FROM_PTR_RCX_(VALUE) adc r8b, byte ptr [rcx + VALUE]
#define ADC_R8B_FROM_PTR_RDX_(VALUE) adc r8b, byte ptr [rdx + VALUE]
#define ADC_R8B_FROM_PTR_RDI_(VALUE) adc r8b, byte ptr [rdi + VALUE]
#define ADC_R8B_FROM_PTR_RSI_(VALUE) adc r8b, byte ptr [rsi + VALUE]
#define ADC_R8B_FROM_PTR_RBP_(VALUE) adc r8b, byte ptr [rbp + VALUE]
#define ADC_R8B_FROM_PTR_RSP_(VALUE) adc r8b, byte ptr [rsp + VALUE]
#define ADC_R8B_FROM_PTR_R8_(VALUE) adc r8b, byte ptr [r8 + VALUE]
#define ADC_R8B_FROM_PTR_R9_(VALUE) adc r8b, byte ptr [r9 + VALUE]
#define ADC_R8B_FROM_PTR_R10_(VALUE) adc r8b, byte ptr [r10 + VALUE]
#define ADC_R8B_FROM_PTR_R11_(VALUE) adc r8b, byte ptr [r11 + VALUE]
#define ADC_R8B_FROM_PTR_R12_(VALUE) adc r8b, byte ptr [r12 + VALUE]
#define ADC_R8B_FROM_PTR_R13_(VALUE) adc r8b, byte ptr [r13 + VALUE]
#define ADC_R8B_FROM_PTR_R14_(VALUE) adc r8b, byte ptr [r14 + VALUE]
#define ADC_R8B_FROM_PTR_R15_(VALUE) adc r8b, byte ptr [r15 + VALUE]
#define ADC_R8B_FROM_PTR_EAX_(VALUE) adc r8b, byte ptr [eax + VALUE]
#define ADC_R8B_FROM_PTR_EBX_(VALUE) adc r8b, byte ptr [ebx + VALUE]
#define ADC_R8B_FROM_PTR_ECX_(VALUE) adc r8b, byte ptr [ecx + VALUE]
#define ADC_R8B_FROM_PTR_EDX_(VALUE) adc r8b, byte ptr [edx + VALUE]
#define ADC_R8B_FROM_PTR_EDI_(VALUE) adc r8b, byte ptr [edi + VALUE]
#define ADC_R8B_FROM_PTR_ESI_(VALUE) adc r8b, byte ptr [esi + VALUE]
#define ADC_R8B_FROM_PTR_EBP_(VALUE) adc r8b, byte ptr [ebp + VALUE]
#define ADC_R8B_FROM_PTR_ESP_(VALUE) adc r8b, byte ptr [esp + VALUE]

#define ADC_R9B_FROM_PTR_RAX_(VALUE) adc r9b, byte ptr [rax + VALUE]
#define ADC_R9B_FROM_PTR_RBX_(VALUE) adc r9b, byte ptr [rbx + VALUE]
#define ADC_R9B_FROM_PTR_RCX_(VALUE) adc r9b, byte ptr [rcx + VALUE]
#define ADC_R9B_FROM_PTR_RDX_(VALUE) adc r9b, byte ptr [rdx + VALUE]
#define ADC_R9B_FROM_PTR_RDI_(VALUE) adc r9b, byte ptr [rdi + VALUE]
#define ADC_R9B_FROM_PTR_RSI_(VALUE) adc r9b, byte ptr [rsi + VALUE]
#define ADC_R9B_FROM_PTR_RBP_(VALUE) adc r9b, byte ptr [rbp + VALUE]
#define ADC_R9B_FROM_PTR_RSP_(VALUE) adc r9b, byte ptr [rsp + VALUE]
#define ADC_R9B_FROM_PTR_R8_(VALUE) adc r9b, byte ptr [r8 + VALUE]
#define ADC_R9B_FROM_PTR_R9_(VALUE) adc r9b, byte ptr [r9 + VALUE]
#define ADC_R9B_FROM_PTR_R10_(VALUE) adc r9b, byte ptr [r10 + VALUE]
#define ADC_R9B_FROM_PTR_R11_(VALUE) adc r9b, byte ptr [r11 + VALUE]
#define ADC_R9B_FROM_PTR_R12_(VALUE) adc r9b, byte ptr [r12 + VALUE]
#define ADC_R9B_FROM_PTR_R13_(VALUE) adc r9b, byte ptr [r13 + VALUE]
#define ADC_R9B_FROM_PTR_R14_(VALUE) adc r9b, byte ptr [r14 + VALUE]
#define ADC_R9B_FROM_PTR_R15_(VALUE) adc r9b, byte ptr [r15 + VALUE]
#define ADC_R9B_FROM_PTR_EAX_(VALUE) adc r9b, byte ptr [eax + VALUE]
#define ADC_R9B_FROM_PTR_EBX_(VALUE) adc r9b, byte ptr [ebx + VALUE]
#define ADC_R9B_FROM_PTR_ECX_(VALUE) adc r9b, byte ptr [ecx + VALUE]
#define ADC_R9B_FROM_PTR_EDX_(VALUE) adc r9b, byte ptr [edx + VALUE]
#define ADC_R9B_FROM_PTR_EDI_(VALUE) adc r9b, byte ptr [edi + VALUE]
#define ADC_R9B_FROM_PTR_ESI_(VALUE) adc r9b, byte ptr [esi + VALUE]
#define ADC_R9B_FROM_PTR_EBP_(VALUE) adc r9b, byte ptr [ebp + VALUE]
#define ADC_R9B_FROM_PTR_ESP_(VALUE) adc r9b, byte ptr [esp + VALUE]

#define ADC_R10B_FROM_PTR_RAX_(VALUE) adc r10b, byte ptr [rax + VALUE]
#define ADC_R10B_FROM_PTR_RBX_(VALUE) adc r10b, byte ptr [rbx + VALUE]
#define ADC_R10B_FROM_PTR_RCX_(VALUE) adc r10b, byte ptr [rcx + VALUE]
#define ADC_R10B_FROM_PTR_RDX_(VALUE) adc r10b, byte ptr [rdx + VALUE]
#define ADC_R10B_FROM_PTR_RDI_(VALUE) adc r10b, byte ptr [rdi + VALUE]
#define ADC_R10B_FROM_PTR_RSI_(VALUE) adc r10b, byte ptr [rsi + VALUE]
#define ADC_R10B_FROM_PTR_RBP_(VALUE) adc r10b, byte ptr [rbp + VALUE]
#define ADC_R10B_FROM_PTR_RSP_(VALUE) adc r10b, byte ptr [rsp + VALUE]
#define ADC_R10B_FROM_PTR_R8_(VALUE) adc r10b, byte ptr [r8 + VALUE]
#define ADC_R10B_FROM_PTR_R9_(VALUE) adc r10b, byte ptr [r9 + VALUE]
#define ADC_R10B_FROM_PTR_R10_(VALUE) adc r10b, byte ptr [r10 + VALUE]
#define ADC_R10B_FROM_PTR_R11_(VALUE) adc r10b, byte ptr [r11 + VALUE]
#define ADC_R10B_FROM_PTR_R12_(VALUE) adc r10b, byte ptr [r12 + VALUE]
#define ADC_R10B_FROM_PTR_R13_(VALUE) adc r10b, byte ptr [r13 + VALUE]
#define ADC_R10B_FROM_PTR_R14_(VALUE) adc r10b, byte ptr [r14 + VALUE]
#define ADC_R10B_FROM_PTR_R15_(VALUE) adc r10b, byte ptr [r15 + VALUE]
#define ADC_R10B_FROM_PTR_EAX_(VALUE) adc r10b, byte ptr [eax + VALUE]
#define ADC_R10B_FROM_PTR_EBX_(VALUE) adc r10b, byte ptr [ebx + VALUE]
#define ADC_R10B_FROM_PTR_ECX_(VALUE) adc r10b, byte ptr [ecx + VALUE]
#define ADC_R10B_FROM_PTR_EDX_(VALUE) adc r10b, byte ptr [edx + VALUE]
#define ADC_R10B_FROM_PTR_EDI_(VALUE) adc r10b, byte ptr [edi + VALUE]
#define ADC_R10B_FROM_PTR_ESI_(VALUE) adc r10b, byte ptr [esi + VALUE]
#define ADC_R10B_FROM_PTR_EBP_(VALUE) adc r10b, byte ptr [ebp + VALUE]
#define ADC_R10B_FROM_PTR_ESP_(VALUE) adc r10b, byte ptr [esp + VALUE]

#define ADC_R11B_FROM_PTR_RAX_(VALUE) adc r11b, byte ptr [rax + VALUE]
#define ADC_R11B_FROM_PTR_RBX_(VALUE) adc r11b, byte ptr [rbx + VALUE]
#define ADC_R11B_FROM_PTR_RCX_(VALUE) adc r11b, byte ptr [rcx + VALUE]
#define ADC_R11B_FROM_PTR_RDX_(VALUE) adc r11b, byte ptr [rdx + VALUE]
#define ADC_R11B_FROM_PTR_RDI_(VALUE) adc r11b, byte ptr [rdi + VALUE]
#define ADC_R11B_FROM_PTR_RSI_(VALUE) adc r11b, byte ptr [rsi + VALUE]
#define ADC_R11B_FROM_PTR_RBP_(VALUE) adc r11b, byte ptr [rbp + VALUE]
#define ADC_R11B_FROM_PTR_RSP_(VALUE) adc r11b, byte ptr [rsp + VALUE]
#define ADC_R11B_FROM_PTR_R8_(VALUE) adc r11b, byte ptr [r8 + VALUE]
#define ADC_R11B_FROM_PTR_R9_(VALUE) adc r11b, byte ptr [r9 + VALUE]
#define ADC_R11B_FROM_PTR_R10_(VALUE) adc r11b, byte ptr [r10 + VALUE]
#define ADC_R11B_FROM_PTR_R11_(VALUE) adc r11b, byte ptr [r11 + VALUE]
#define ADC_R11B_FROM_PTR_R12_(VALUE) adc r11b, byte ptr [r12 + VALUE]
#define ADC_R11B_FROM_PTR_R13_(VALUE) adc r11b, byte ptr [r13 + VALUE]
#define ADC_R11B_FROM_PTR_R14_(VALUE) adc r11b, byte ptr [r14 + VALUE]
#define ADC_R11B_FROM_PTR_R15_(VALUE) adc r11b, byte ptr [r15 + VALUE]
#define ADC_R11B_FROM_PTR_EAX_(VALUE) adc r11b, byte ptr [eax + VALUE]
#define ADC_R11B_FROM_PTR_EBX_(VALUE) adc r11b, byte ptr [ebx + VALUE]
#define ADC_R11B_FROM_PTR_ECX_(VALUE) adc r11b, byte ptr [ecx + VALUE]
#define ADC_R11B_FROM_PTR_EDX_(VALUE) adc r11b, byte ptr [edx + VALUE]
#define ADC_R11B_FROM_PTR_EDI_(VALUE) adc r11b, byte ptr [edi + VALUE]
#define ADC_R11B_FROM_PTR_ESI_(VALUE) adc r11b, byte ptr [esi + VALUE]
#define ADC_R11B_FROM_PTR_EBP_(VALUE) adc r11b, byte ptr [ebp + VALUE]
#define ADC_R11B_FROM_PTR_ESP_(VALUE) adc r11b, byte ptr [esp + VALUE]

#define ADC_R12B_FROM_PTR_RAX_(VALUE) adc r12b, byte ptr [rax + VALUE]
#define ADC_R12B_FROM_PTR_RBX_(VALUE) adc r12b, byte ptr [rbx + VALUE]
#define ADC_R12B_FROM_PTR_RCX_(VALUE) adc r12b, byte ptr [rcx + VALUE]
#define ADC_R12B_FROM_PTR_RDX_(VALUE) adc r12b, byte ptr [rdx + VALUE]
#define ADC_R12B_FROM_PTR_RDI_(VALUE) adc r12b, byte ptr [rdi + VALUE]
#define ADC_R12B_FROM_PTR_RSI_(VALUE) adc r12b, byte ptr [rsi + VALUE]
#define ADC_R12B_FROM_PTR_RBP_(VALUE) adc r12b, byte ptr [rbp + VALUE]
#define ADC_R12B_FROM_PTR_RSP_(VALUE) adc r12b, byte ptr [rsp + VALUE]
#define ADC_R12B_FROM_PTR_R8_(VALUE) adc r12b, byte ptr [r8 + VALUE]
#define ADC_R12B_FROM_PTR_R9_(VALUE) adc r12b, byte ptr [r9 + VALUE]
#define ADC_R12B_FROM_PTR_R10_(VALUE) adc r12b, byte ptr [r10 + VALUE]
#define ADC_R12B_FROM_PTR_R11_(VALUE) adc r12b, byte ptr [r11 + VALUE]
#define ADC_R12B_FROM_PTR_R12_(VALUE) adc r12b, byte ptr [r12 + VALUE]
#define ADC_R12B_FROM_PTR_R13_(VALUE) adc r12b, byte ptr [r13 + VALUE]
#define ADC_R12B_FROM_PTR_R14_(VALUE) adc r12b, byte ptr [r14 + VALUE]
#define ADC_R12B_FROM_PTR_R15_(VALUE) adc r12b, byte ptr [r15 + VALUE]
#define ADC_R12B_FROM_PTR_EAX_(VALUE) adc r12b, byte ptr [eax + VALUE]
#define ADC_R12B_FROM_PTR_EBX_(VALUE) adc r12b, byte ptr [ebx + VALUE]
#define ADC_R12B_FROM_PTR_ECX_(VALUE) adc r12b, byte ptr [ecx + VALUE]
#define ADC_R12B_FROM_PTR_EDX_(VALUE) adc r12b, byte ptr [edx + VALUE]
#define ADC_R12B_FROM_PTR_EDI_(VALUE) adc r12b, byte ptr [edi + VALUE]
#define ADC_R12B_FROM_PTR_ESI_(VALUE) adc r12b, byte ptr [esi + VALUE]
#define ADC_R12B_FROM_PTR_EBP_(VALUE) adc r12b, byte ptr [ebp + VALUE]
#define ADC_R12B_FROM_PTR_ESP_(VALUE) adc r12b, byte ptr [esp + VALUE]

#define ADC_R13B_FROM_PTR_RAX_(VALUE) adc r13b, byte ptr [rax + VALUE]
#define ADC_R13B_FROM_PTR_RBX_(VALUE) adc r13b, byte ptr [rbx + VALUE]
#define ADC_R13B_FROM_PTR_RCX_(VALUE) adc r13b, byte ptr [rcx + VALUE]
#define ADC_R13B_FROM_PTR_RDX_(VALUE) adc r13b, byte ptr [rdx + VALUE]
#define ADC_R13B_FROM_PTR_RDI_(VALUE) adc r13b, byte ptr [rdi + VALUE]
#define ADC_R13B_FROM_PTR_RSI_(VALUE) adc r13b, byte ptr [rsi + VALUE]
#define ADC_R13B_FROM_PTR_RBP_(VALUE) adc r13b, byte ptr [rbp + VALUE]
#define ADC_R13B_FROM_PTR_RSP_(VALUE) adc r13b, byte ptr [rsp + VALUE]
#define ADC_R13B_FROM_PTR_R8_(VALUE) adc r13b, byte ptr [r8 + VALUE]
#define ADC_R13B_FROM_PTR_R9_(VALUE) adc r13b, byte ptr [r9 + VALUE]
#define ADC_R13B_FROM_PTR_R10_(VALUE) adc r13b, byte ptr [r10 + VALUE]
#define ADC_R13B_FROM_PTR_R11_(VALUE) adc r13b, byte ptr [r11 + VALUE]
#define ADC_R13B_FROM_PTR_R12_(VALUE) adc r13b, byte ptr [r12 + VALUE]
#define ADC_R13B_FROM_PTR_R13_(VALUE) adc r13b, byte ptr [r13 + VALUE]
#define ADC_R13B_FROM_PTR_R14_(VALUE) adc r13b, byte ptr [r14 + VALUE]
#define ADC_R13B_FROM_PTR_R15_(VALUE) adc r13b, byte ptr [r15 + VALUE]
#define ADC_R13B_FROM_PTR_EAX_(VALUE) adc r13b, byte ptr [eax + VALUE]
#define ADC_R13B_FROM_PTR_EBX_(VALUE) adc r13b, byte ptr [ebx + VALUE]
#define ADC_R13B_FROM_PTR_ECX_(VALUE) adc r13b, byte ptr [ecx + VALUE]
#define ADC_R13B_FROM_PTR_EDX_(VALUE) adc r13b, byte ptr [edx + VALUE]
#define ADC_R13B_FROM_PTR_EDI_(VALUE) adc r13b, byte ptr [edi + VALUE]
#define ADC_R13B_FROM_PTR_ESI_(VALUE) adc r13b, byte ptr [esi + VALUE]
#define ADC_R13B_FROM_PTR_EBP_(VALUE) adc r13b, byte ptr [ebp + VALUE]
#define ADC_R13B_FROM_PTR_ESP_(VALUE) adc r13b, byte ptr [esp + VALUE]

#define ADC_R14B_FROM_PTR_RAX_(VALUE) adc r14b, byte ptr [rax + VALUE]
#define ADC_R14B_FROM_PTR_RBX_(VALUE) adc r14b, byte ptr [rbx + VALUE]
#define ADC_R14B_FROM_PTR_RCX_(VALUE) adc r14b, byte ptr [rcx + VALUE]
#define ADC_R14B_FROM_PTR_RDX_(VALUE) adc r14b, byte ptr [rdx + VALUE]
#define ADC_R14B_FROM_PTR_RDI_(VALUE) adc r14b, byte ptr [rdi + VALUE]
#define ADC_R14B_FROM_PTR_RSI_(VALUE) adc r14b, byte ptr [rsi + VALUE]
#define ADC_R14B_FROM_PTR_RBP_(VALUE) adc r14b, byte ptr [rbp + VALUE]
#define ADC_R14B_FROM_PTR_RSP_(VALUE) adc r14b, byte ptr [rsp + VALUE]
#define ADC_R14B_FROM_PTR_R8_(VALUE) adc r14b, byte ptr [r8 + VALUE]
#define ADC_R14B_FROM_PTR_R9_(VALUE) adc r14b, byte ptr [r9 + VALUE]
#define ADC_R14B_FROM_PTR_R10_(VALUE) adc r14b, byte ptr [r10 + VALUE]
#define ADC_R14B_FROM_PTR_R11_(VALUE) adc r14b, byte ptr [r11 + VALUE]
#define ADC_R14B_FROM_PTR_R12_(VALUE) adc r14b, byte ptr [r12 + VALUE]
#define ADC_R14B_FROM_PTR_R13_(VALUE) adc r14b, byte ptr [r13 + VALUE]
#define ADC_R14B_FROM_PTR_R14_(VALUE) adc r14b, byte ptr [r14 + VALUE]
#define ADC_R14B_FROM_PTR_R15_(VALUE) adc r14b, byte ptr [r15 + VALUE]
#define ADC_R14B_FROM_PTR_EAX_(VALUE) adc r14b, byte ptr [eax + VALUE]
#define ADC_R14B_FROM_PTR_EBX_(VALUE) adc r14b, byte ptr [ebx + VALUE]
#define ADC_R14B_FROM_PTR_ECX_(VALUE) adc r14b, byte ptr [ecx + VALUE]
#define ADC_R14B_FROM_PTR_EDX_(VALUE) adc r14b, byte ptr [edx + VALUE]
#define ADC_R14B_FROM_PTR_EDI_(VALUE) adc r14b, byte ptr [edi + VALUE]
#define ADC_R14B_FROM_PTR_ESI_(VALUE) adc r14b, byte ptr [esi + VALUE]
#define ADC_R14B_FROM_PTR_EBP_(VALUE) adc r14b, byte ptr [ebp + VALUE]
#define ADC_R14B_FROM_PTR_ESP_(VALUE) adc r14b, byte ptr [esp + VALUE]

#define ADC_R15B_FROM_PTR_RAX_(VALUE) adc r15b, byte ptr [rax + VALUE]
#define ADC_R15B_FROM_PTR_RBX_(VALUE) adc r15b, byte ptr [rbx + VALUE]
#define ADC_R15B_FROM_PTR_RCX_(VALUE) adc r15b, byte ptr [rcx + VALUE]
#define ADC_R15B_FROM_PTR_RDX_(VALUE) adc r15b, byte ptr [rdx + VALUE]
#define ADC_R15B_FROM_PTR_RDI_(VALUE) adc r15b, byte ptr [rdi + VALUE]
#define ADC_R15B_FROM_PTR_RSI_(VALUE) adc r15b, byte ptr [rsi + VALUE]
#define ADC_R15B_FROM_PTR_RBP_(VALUE) adc r15b, byte ptr [rbp + VALUE]
#define ADC_R15B_FROM_PTR_RSP_(VALUE) adc r15b, byte ptr [rsp + VALUE]
#define ADC_R15B_FROM_PTR_R8_(VALUE) adc r15b, byte ptr [r8 + VALUE]
#define ADC_R15B_FROM_PTR_R9_(VALUE) adc r15b, byte ptr [r9 + VALUE]
#define ADC_R15B_FROM_PTR_R10_(VALUE) adc r15b, byte ptr [r10 + VALUE]
#define ADC_R15B_FROM_PTR_R11_(VALUE) adc r15b, byte ptr [r11 + VALUE]
#define ADC_R15B_FROM_PTR_R12_(VALUE) adc r15b, byte ptr [r12 + VALUE]
#define ADC_R15B_FROM_PTR_R13_(VALUE) adc r15b, byte ptr [r13 + VALUE]
#define ADC_R15B_FROM_PTR_R14_(VALUE) adc r15b, byte ptr [r14 + VALUE]
#define ADC_R15B_FROM_PTR_R15_(VALUE) adc r15b, byte ptr [r15 + VALUE]
#define ADC_R15B_FROM_PTR_EAX_(VALUE) adc r15b, byte ptr [eax + VALUE]
#define ADC_R15B_FROM_PTR_EBX_(VALUE) adc r15b, byte ptr [ebx + VALUE]
#define ADC_R15B_FROM_PTR_ECX_(VALUE) adc r15b, byte ptr [ecx + VALUE]
#define ADC_R15B_FROM_PTR_EDX_(VALUE) adc r15b, byte ptr [edx + VALUE]
#define ADC_R15B_FROM_PTR_EDI_(VALUE) adc r15b, byte ptr [edi + VALUE]
#define ADC_R15B_FROM_PTR_ESI_(VALUE) adc r15b, byte ptr [esi + VALUE]
#define ADC_R15B_FROM_PTR_EBP_(VALUE) adc r15b, byte ptr [ebp + VALUE]
#define ADC_R15B_FROM_PTR_ESP_(VALUE) adc r15b, byte ptr [esp + VALUE]

#define ADC_AL_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], al
#define ADC_AL_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], al
#define ADC_AL_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], al
#define ADC_AL_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], al
#define ADC_AL_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], al
#define ADC_AL_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], al
#define ADC_AL_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], al
#define ADC_AL_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], al
#define ADC_AL_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], al
#define ADC_AL_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], al
#define ADC_AL_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], al
#define ADC_AL_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], al
#define ADC_AL_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], al
#define ADC_AL_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], al
#define ADC_AL_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], al
#define ADC_AL_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], al
#define ADC_AL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], al
#define ADC_AL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], al
#define ADC_AL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], al
#define ADC_AL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], al
#define ADC_AL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], al
#define ADC_AL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], al
#define ADC_AL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], al
#define ADC_AL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], al

#define ADC_BL_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], bl
#define ADC_BL_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], bl
#define ADC_BL_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], bl
#define ADC_BL_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], bl
#define ADC_BL_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], bl
#define ADC_BL_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], bl
#define ADC_BL_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], bl
#define ADC_BL_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], bl
#define ADC_BL_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], bl
#define ADC_BL_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], bl
#define ADC_BL_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], bl
#define ADC_BL_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], bl
#define ADC_BL_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], bl
#define ADC_BL_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], bl
#define ADC_BL_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], bl
#define ADC_BL_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], bl
#define ADC_BL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], bl
#define ADC_BL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], bl
#define ADC_BL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], bl
#define ADC_BL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], bl
#define ADC_BL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], bl
#define ADC_BL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], bl
#define ADC_BL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], bl
#define ADC_BL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], bl

#define ADC_CL_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], cl
#define ADC_CL_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], cl
#define ADC_CL_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], cl
#define ADC_CL_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], cl
#define ADC_CL_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], cl
#define ADC_CL_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], cl
#define ADC_CL_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], cl
#define ADC_CL_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], cl
#define ADC_CL_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], cl
#define ADC_CL_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], cl
#define ADC_CL_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], cl
#define ADC_CL_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], cl
#define ADC_CL_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], cl
#define ADC_CL_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], cl
#define ADC_CL_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], cl
#define ADC_CL_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], cl
#define ADC_CL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], cl
#define ADC_CL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], cl
#define ADC_CL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], cl
#define ADC_CL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], cl
#define ADC_CL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], cl
#define ADC_CL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], cl
#define ADC_CL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], cl
#define ADC_CL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], cl

#define ADC_DL_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], dl
#define ADC_DL_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], dl
#define ADC_DL_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], dl
#define ADC_DL_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], dl
#define ADC_DL_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], dl
#define ADC_DL_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], dl
#define ADC_DL_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], dl
#define ADC_DL_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], dl
#define ADC_DL_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], dl
#define ADC_DL_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], dl
#define ADC_DL_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], dl
#define ADC_DL_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], dl
#define ADC_DL_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], dl
#define ADC_DL_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], dl
#define ADC_DL_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], dl
#define ADC_DL_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], dl
#define ADC_DL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], dl
#define ADC_DL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], dl
#define ADC_DL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], dl
#define ADC_DL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], dl
#define ADC_DL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], dl
#define ADC_DL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], dl
#define ADC_DL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], dl
#define ADC_DL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], dl

#define ADC_DIL_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], dil
#define ADC_DIL_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], dil
#define ADC_DIL_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], dil
#define ADC_DIL_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], dil
#define ADC_DIL_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], dil
#define ADC_DIL_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], dil
#define ADC_DIL_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], dil
#define ADC_DIL_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], dil
#define ADC_DIL_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], dil
#define ADC_DIL_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], dil
#define ADC_DIL_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], dil
#define ADC_DIL_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], dil
#define ADC_DIL_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], dil
#define ADC_DIL_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], dil
#define ADC_DIL_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], dil
#define ADC_DIL_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], dil
#define ADC_DIL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], dil
#define ADC_DIL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], dil
#define ADC_DIL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], dil
#define ADC_DIL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], dil
#define ADC_DIL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], dil
#define ADC_DIL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], dil
#define ADC_DIL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], dil
#define ADC_DIL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], dil

#define ADC_SIL_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], sil
#define ADC_SIL_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], sil
#define ADC_SIL_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], sil
#define ADC_SIL_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], sil
#define ADC_SIL_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], sil
#define ADC_SIL_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], sil
#define ADC_SIL_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], sil
#define ADC_SIL_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], sil
#define ADC_SIL_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], sil
#define ADC_SIL_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], sil
#define ADC_SIL_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], sil
#define ADC_SIL_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], sil
#define ADC_SIL_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], sil
#define ADC_SIL_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], sil
#define ADC_SIL_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], sil
#define ADC_SIL_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], sil
#define ADC_SIL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], sil
#define ADC_SIL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], sil
#define ADC_SIL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], sil
#define ADC_SIL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], sil
#define ADC_SIL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], sil
#define ADC_SIL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], sil
#define ADC_SIL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], sil
#define ADC_SIL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], sil

#define ADC_BPL_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], bpl
#define ADC_BPL_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], bpl
#define ADC_BPL_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], bpl
#define ADC_BPL_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], bpl
#define ADC_BPL_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], bpl
#define ADC_BPL_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], bpl
#define ADC_BPL_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], bpl
#define ADC_BPL_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], bpl
#define ADC_BPL_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], bpl
#define ADC_BPL_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], bpl
#define ADC_BPL_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], bpl
#define ADC_BPL_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], bpl
#define ADC_BPL_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], bpl
#define ADC_BPL_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], bpl
#define ADC_BPL_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], bpl
#define ADC_BPL_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], bpl
#define ADC_BPL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], bpl
#define ADC_BPL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], bpl
#define ADC_BPL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], bpl
#define ADC_BPL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], bpl
#define ADC_BPL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], bpl
#define ADC_BPL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], bpl
#define ADC_BPL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], bpl
#define ADC_BPL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], bpl

#define ADC_SPL_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], spl
#define ADC_SPL_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], spl
#define ADC_SPL_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], spl
#define ADC_SPL_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], spl
#define ADC_SPL_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], spl
#define ADC_SPL_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], spl
#define ADC_SPL_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], spl
#define ADC_SPL_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], spl
#define ADC_SPL_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], spl
#define ADC_SPL_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], spl
#define ADC_SPL_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], spl
#define ADC_SPL_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], spl
#define ADC_SPL_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], spl
#define ADC_SPL_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], spl
#define ADC_SPL_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], spl
#define ADC_SPL_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], spl
#define ADC_SPL_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], spl
#define ADC_SPL_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], spl
#define ADC_SPL_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], spl
#define ADC_SPL_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], spl
#define ADC_SPL_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], spl
#define ADC_SPL_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], spl
#define ADC_SPL_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], spl
#define ADC_SPL_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], spl

#define ADC_R8B_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], r8b
#define ADC_R8B_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], r8b
#define ADC_R8B_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], r8b
#define ADC_R8B_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], r8b
#define ADC_R8B_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], r8b
#define ADC_R8B_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], r8b
#define ADC_R8B_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], r8b
#define ADC_R8B_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], r8b
#define ADC_R8B_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], r8b
#define ADC_R8B_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], r8b
#define ADC_R8B_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], r8b
#define ADC_R8B_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], r8b
#define ADC_R8B_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], r8b
#define ADC_R8B_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], r8b
#define ADC_R8B_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], r8b
#define ADC_R8B_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], r8b
#define ADC_R8B_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], r8b
#define ADC_R8B_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], r8b
#define ADC_R8B_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], r8b
#define ADC_R8B_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], r8b
#define ADC_R8B_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], r8b
#define ADC_R8B_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], r8b
#define ADC_R8B_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], r8b
#define ADC_R8B_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], r8b

#define ADC_R9B_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], r9b
#define ADC_R9B_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], r9b
#define ADC_R9B_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], r9b
#define ADC_R9B_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], r9b
#define ADC_R9B_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], r9b
#define ADC_R9B_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], r9b
#define ADC_R9B_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], r9b
#define ADC_R9B_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], r9b
#define ADC_R9B_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], r9b
#define ADC_R9B_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], r9b
#define ADC_R9B_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], r9b
#define ADC_R9B_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], r9b
#define ADC_R9B_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], r9b
#define ADC_R9B_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], r9b
#define ADC_R9B_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], r9b
#define ADC_R9B_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], r9b
#define ADC_R9B_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], r9b
#define ADC_R9B_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], r9b
#define ADC_R9B_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], r9b
#define ADC_R9B_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], r9b
#define ADC_R9B_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], r9b
#define ADC_R9B_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], r9b
#define ADC_R9B_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], r9b
#define ADC_R9B_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], r9b

#define ADC_R10B_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], r10b
#define ADC_R10B_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], r10b
#define ADC_R10B_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], r10b
#define ADC_R10B_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], r10b
#define ADC_R10B_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], r10b
#define ADC_R10B_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], r10b
#define ADC_R10B_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], r10b
#define ADC_R10B_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], r10b
#define ADC_R10B_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], r10b
#define ADC_R10B_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], r10b
#define ADC_R10B_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], r10b
#define ADC_R10B_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], r10b
#define ADC_R10B_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], r10b
#define ADC_R10B_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], r10b
#define ADC_R10B_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], r10b
#define ADC_R10B_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], r10b
#define ADC_R10B_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], r10b
#define ADC_R10B_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], r10b
#define ADC_R10B_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], r10b
#define ADC_R10B_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], r10b
#define ADC_R10B_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], r10b
#define ADC_R10B_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], r10b
#define ADC_R10B_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], r10b
#define ADC_R10B_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], r10b

#define ADC_R11B_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], r11b
#define ADC_R11B_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], r11b
#define ADC_R11B_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], r11b
#define ADC_R11B_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], r11b
#define ADC_R11B_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], r11b
#define ADC_R11B_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], r11b
#define ADC_R11B_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], r11b
#define ADC_R11B_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], r11b
#define ADC_R11B_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], r11b
#define ADC_R11B_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], r11b
#define ADC_R11B_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], r11b
#define ADC_R11B_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], r11b
#define ADC_R11B_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], r11b
#define ADC_R11B_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], r11b
#define ADC_R11B_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], r11b
#define ADC_R11B_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], r11b
#define ADC_R11B_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], r11b
#define ADC_R11B_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], r11b
#define ADC_R11B_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], r11b
#define ADC_R11B_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], r11b
#define ADC_R11B_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], r11b
#define ADC_R11B_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], r11b
#define ADC_R11B_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], r11b
#define ADC_R11B_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], r11b

#define ADC_R12B_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], r12b
#define ADC_R12B_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], r12b
#define ADC_R12B_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], r12b
#define ADC_R12B_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], r12b
#define ADC_R12B_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], r12b
#define ADC_R12B_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], r12b
#define ADC_R12B_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], r12b
#define ADC_R12B_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], r12b
#define ADC_R12B_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], r12b
#define ADC_R12B_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], r12b
#define ADC_R12B_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], r12b
#define ADC_R12B_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], r12b
#define ADC_R12B_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], r12b
#define ADC_R12B_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], r12b
#define ADC_R12B_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], r12b
#define ADC_R12B_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], r12b
#define ADC_R12B_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], r12b
#define ADC_R12B_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], r12b
#define ADC_R12B_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], r12b
#define ADC_R12B_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], r12b
#define ADC_R12B_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], r12b
#define ADC_R12B_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], r12b
#define ADC_R12B_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], r12b
#define ADC_R12B_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], r12b

#define ADC_R13B_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], r13b
#define ADC_R13B_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], r13b
#define ADC_R13B_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], r13b
#define ADC_R13B_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], r13b
#define ADC_R13B_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], r13b
#define ADC_R13B_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], r13b
#define ADC_R13B_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], r13b
#define ADC_R13B_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], r13b
#define ADC_R13B_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], r13b
#define ADC_R13B_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], r13b
#define ADC_R13B_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], r13b
#define ADC_R13B_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], r13b
#define ADC_R13B_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], r13b
#define ADC_R13B_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], r13b
#define ADC_R13B_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], r13b
#define ADC_R13B_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], r13b
#define ADC_R13B_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], r13b
#define ADC_R13B_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], r13b
#define ADC_R13B_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], r13b
#define ADC_R13B_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], r13b
#define ADC_R13B_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], r13b
#define ADC_R13B_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], r13b
#define ADC_R13B_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], r13b
#define ADC_R13B_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], r13b

#define ADC_R14B_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], r14b
#define ADC_R14B_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], r14b
#define ADC_R14B_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], r14b
#define ADC_R14B_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], r14b
#define ADC_R14B_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], r14b
#define ADC_R14B_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], r14b
#define ADC_R14B_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], r14b
#define ADC_R14B_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], r14b
#define ADC_R14B_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], r14b
#define ADC_R14B_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], r14b
#define ADC_R14B_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], r14b
#define ADC_R14B_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], r14b
#define ADC_R14B_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], r14b
#define ADC_R14B_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], r14b
#define ADC_R14B_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], r14b
#define ADC_R14B_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], r14b
#define ADC_R14B_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], r14b
#define ADC_R14B_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], r14b
#define ADC_R14B_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], r14b
#define ADC_R14B_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], r14b
#define ADC_R14B_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], r14b
#define ADC_R14B_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], r14b
#define ADC_R14B_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], r14b
#define ADC_R14B_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], r14b

#define ADC_R15B_TO_PTR_RAX_(VALUE) adc byte ptr [rax + VALUE], r15b
#define ADC_R15B_TO_PTR_RBX_(VALUE) adc byte ptr [rbx + VALUE], r15b
#define ADC_R15B_TO_PTR_RCX_(VALUE) adc byte ptr [rcx + VALUE], r15b
#define ADC_R15B_TO_PTR_RDX_(VALUE) adc byte ptr [rdx + VALUE], r15b
#define ADC_R15B_TO_PTR_RDI_(VALUE) adc byte ptr [rdi + VALUE], r15b
#define ADC_R15B_TO_PTR_RSI_(VALUE) adc byte ptr [rsi + VALUE], r15b
#define ADC_R15B_TO_PTR_RBP_(VALUE) adc byte ptr [rbp + VALUE], r15b
#define ADC_R15B_TO_PTR_RSP_(VALUE) adc byte ptr [rsp + VALUE], r15b
#define ADC_R15B_TO_PTR_R8_(VALUE) adc byte ptr [r8 + VALUE], r15b
#define ADC_R15B_TO_PTR_R9_(VALUE) adc byte ptr [r9 + VALUE], r15b
#define ADC_R15B_TO_PTR_R10_(VALUE) adc byte ptr [r10 + VALUE], r15b
#define ADC_R15B_TO_PTR_R11_(VALUE) adc byte ptr [r11 + VALUE], r15b
#define ADC_R15B_TO_PTR_R12_(VALUE) adc byte ptr [r12 + VALUE], r15b
#define ADC_R15B_TO_PTR_R13_(VALUE) adc byte ptr [r13 + VALUE], r15b
#define ADC_R15B_TO_PTR_R14_(VALUE) adc byte ptr [r14 + VALUE], r15b
#define ADC_R15B_TO_PTR_R15_(VALUE) adc byte ptr [r15 + VALUE], r15b
#define ADC_R15B_TO_PTR_EAX_(VALUE) adc byte ptr [eax + VALUE], r15b
#define ADC_R15B_TO_PTR_EBX_(VALUE) adc byte ptr [ebx + VALUE], r15b
#define ADC_R15B_TO_PTR_ECX_(VALUE) adc byte ptr [ecx + VALUE], r15b
#define ADC_R15B_TO_PTR_EDX_(VALUE) adc byte ptr [edx + VALUE], r15b
#define ADC_R15B_TO_PTR_EDI_(VALUE) adc byte ptr [edi + VALUE], r15b
#define ADC_R15B_TO_PTR_ESI_(VALUE) adc byte ptr [esi + VALUE], r15b
#define ADC_R15B_TO_PTR_EBP_(VALUE) adc byte ptr [ebp + VALUE], r15b
#define ADC_R15B_TO_PTR_ESP_(VALUE) adc byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define ADC_AX_FROM_PTR_(VALUE) adc ax, word ptr [VALUE]
#define ADC_BX_FROM_PTR_(VALUE) adc bx, word ptr [VALUE]
#define ADC_CX_FROM_PTR_(VALUE) adc cx, word ptr [VALUE]
#define ADC_DX_FROM_PTR_(VALUE) adc dx, word ptr [VALUE]
#define ADC_DI_FROM_PTR_(VALUE) adc di, word ptr [VALUE]
#define ADC_SI_FROM_PTR_(VALUE) adc si, word ptr [VALUE]
#define ADC_BP_FROM_PTR_(VALUE) adc bp, word ptr [VALUE]
#define ADC_SP_FROM_PTR_(VALUE) adc sp, word ptr [VALUE]

#define ADC_AX_TO_PTR_(VALUE) adc word ptr [VALUE], ax
#define ADC_BX_TO_PTR_(VALUE) adc word ptr [VALUE], bx
#define ADC_CX_TO_PTR_(VALUE) adc word ptr [VALUE], cx
#define ADC_DX_TO_PTR_(VALUE) adc word ptr [VALUE], dx
#define ADC_DI_TO_PTR_(VALUE) adc word ptr [VALUE], di
#define ADC_SI_TO_PTR_(VALUE) adc word ptr [VALUE], si
#define ADC_BP_TO_PTR_(VALUE) adc word ptr [VALUE], bp
#define ADC_SP_TO_PTR_(VALUE) adc word ptr [VALUE], sp

#define ADC_AX_FROM_PTR_BX adc ax, word ptr [bx]
#define ADC_AX_FROM_PTR_BP adc ax, word ptr [bp]
#define ADC_AX_FROM_PTR_SI adc ax, word ptr [si]
#define ADC_AX_FROM_PTR_DI adc ax, word ptr [di]

#define ADC_BX_FROM_PTR_BX adc bx, word ptr [bx]
#define ADC_BX_FROM_PTR_BP adc bx, word ptr [bp]
#define ADC_BX_FROM_PTR_SI adc bx, word ptr [si]
#define ADC_BX_FROM_PTR_DI adc bx, word ptr [di]

#define ADC_CX_FROM_PTR_BX adc cx, word ptr [bx]
#define ADC_CX_FROM_PTR_BP adc cx, word ptr [bp]
#define ADC_CX_FROM_PTR_SI adc cx, word ptr [si]
#define ADC_CX_FROM_PTR_DI adc cx, word ptr [di]

#define ADC_DX_FROM_PTR_BX adc dx, word ptr [bx]
#define ADC_DX_FROM_PTR_BP adc dx, word ptr [bp]
#define ADC_DX_FROM_PTR_SI adc dx, word ptr [si]
#define ADC_DX_FROM_PTR_DI adc dx, word ptr [di]

#define ADC_DI_FROM_PTR_BX adc di, word ptr [bx]
#define ADC_DI_FROM_PTR_BP adc di, word ptr [bp]
#define ADC_DI_FROM_PTR_SI adc di, word ptr [si]
#define ADC_DI_FROM_PTR_DI adc di, word ptr [di]

#define ADC_SI_FROM_PTR_BX adc si, word ptr [bx]
#define ADC_SI_FROM_PTR_BP adc si, word ptr [bp]
#define ADC_SI_FROM_PTR_SI adc si, word ptr [si]
#define ADC_SI_FROM_PTR_DI adc si, word ptr [di]

#define ADC_BP_FROM_PTR_BX adc bp, word ptr [bx]
#define ADC_BP_FROM_PTR_BP adc bp, word ptr [bp]
#define ADC_BP_FROM_PTR_SI adc bp, word ptr [si]
#define ADC_BP_FROM_PTR_DI adc bp, word ptr [di]

#define ADC_SP_FROM_PTR_BX adc sp, word ptr [bx]
#define ADC_SP_FROM_PTR_BP adc sp, word ptr [bp]
#define ADC_SP_FROM_PTR_SI adc sp, word ptr [si]
#define ADC_SP_FROM_PTR_DI adc sp, word ptr [di]

#define ADC_AX_TO_PTR_BX adc word ptr [bx], ax
#define ADC_AX_TO_PTR_BP adc word ptr [bp], ax
#define ADC_AX_TO_PTR_SI adc word ptr [si], ax
#define ADC_AX_TO_PTR_DI adc word ptr [di], ax

#define ADC_BX_TO_PTR_BX adc word ptr [bx], bx
#define ADC_BX_TO_PTR_BP adc word ptr [bp], bx
#define ADC_BX_TO_PTR_SI adc word ptr [si], bx
#define ADC_BX_TO_PTR_DI adc word ptr [di], bx

#define ADC_CX_TO_PTR_BX adc word ptr [bx], cx
#define ADC_CX_TO_PTR_BP adc word ptr [bp], cx
#define ADC_CX_TO_PTR_SI adc word ptr [si], cx
#define ADC_CX_TO_PTR_DI adc word ptr [di], cx

#define ADC_DX_TO_PTR_BX adc word ptr [bx], dx
#define ADC_DX_TO_PTR_BP adc word ptr [bp], dx
#define ADC_DX_TO_PTR_SI adc word ptr [si], dx
#define ADC_DX_TO_PTR_DI adc word ptr [di], dx

#define ADC_DI_TO_PTR_BX adc word ptr [bx], di
#define ADC_DI_TO_PTR_BP adc word ptr [bp], di
#define ADC_DI_TO_PTR_SI adc word ptr [si], di
#define ADC_DI_TO_PTR_DI adc word ptr [di], di

#define ADC_SI_TO_PTR_BX adc word ptr [bx], si
#define ADC_SI_TO_PTR_BP adc word ptr [bp], si
#define ADC_SI_TO_PTR_SI adc word ptr [si], si
#define ADC_SI_TO_PTR_DI adc word ptr [di], si

#define ADC_BP_TO_PTR_BX adc word ptr [bx], bp
#define ADC_BP_TO_PTR_BP adc word ptr [bp], bp
#define ADC_BP_TO_PTR_SI adc word ptr [si], bp
#define ADC_BP_TO_PTR_DI adc word ptr [di], bp

#define ADC_SP_TO_PTR_BX adc word ptr [bx], sp
#define ADC_SP_TO_PTR_BP adc word ptr [bp], sp
#define ADC_SP_TO_PTR_SI adc word ptr [si], sp
#define ADC_SP_TO_PTR_DI adc word ptr [di], sp

#define ADC_AX_FROM_PTR_BX_(VALUE) adc ax, word ptr [bx + VALUE]
#define ADC_AX_FROM_PTR_BP_(VALUE) adc ax, word ptr [bp + VALUE]
#define ADC_AX_FROM_PTR_SI_(VALUE) adc ax, word ptr [si + VALUE]
#define ADC_AX_FROM_PTR_DI_(VALUE) adc ax, word ptr [di + VALUE]

#define ADC_BX_FROM_PTR_BX_(VALUE) adc bx, word ptr [bx + VALUE]
#define ADC_BX_FROM_PTR_BP_(VALUE) adc bx, word ptr [bp + VALUE]
#define ADC_BX_FROM_PTR_SI_(VALUE) adc bx, word ptr [si + VALUE]
#define ADC_BX_FROM_PTR_DI_(VALUE) adc bx, word ptr [di + VALUE]

#define ADC_CX_FROM_PTR_BX_(VALUE) adc cx, word ptr [bx + VALUE]
#define ADC_CX_FROM_PTR_BP_(VALUE) adc cx, word ptr [bp + VALUE]
#define ADC_CX_FROM_PTR_SI_(VALUE) adc cx, word ptr [si + VALUE]
#define ADC_CX_FROM_PTR_DI_(VALUE) adc cx, word ptr [di + VALUE]

#define ADC_DX_FROM_PTR_BX_(VALUE) adc dx, word ptr [bx + VALUE]
#define ADC_DX_FROM_PTR_BP_(VALUE) adc dx, word ptr [bp + VALUE]
#define ADC_DX_FROM_PTR_SI_(VALUE) adc dx, word ptr [si + VALUE]
#define ADC_DX_FROM_PTR_DI_(VALUE) adc dx, word ptr [di + VALUE]

#define ADC_DI_FROM_PTR_BX_(VALUE) adc di, word ptr [bx + VALUE]
#define ADC_DI_FROM_PTR_BP_(VALUE) adc di, word ptr [bp + VALUE]
#define ADC_DI_FROM_PTR_SI_(VALUE) adc di, word ptr [si + VALUE]
#define ADC_DI_FROM_PTR_DI_(VALUE) adc di, word ptr [di + VALUE]

#define ADC_SI_FROM_PTR_BX_(VALUE) adc si, word ptr [bx + VALUE]
#define ADC_SI_FROM_PTR_BP_(VALUE) adc si, word ptr [bp + VALUE]
#define ADC_SI_FROM_PTR_SI_(VALUE) adc si, word ptr [si + VALUE]
#define ADC_SI_FROM_PTR_DI_(VALUE) adc si, word ptr [di + VALUE]

#define ADC_BP_FROM_PTR_BX_(VALUE) adc bp, word ptr [bx + VALUE]
#define ADC_BP_FROM_PTR_BP_(VALUE) adc bp, word ptr [bp + VALUE]
#define ADC_BP_FROM_PTR_SI_(VALUE) adc bp, word ptr [si + VALUE]
#define ADC_BP_FROM_PTR_DI_(VALUE) adc bp, word ptr [di + VALUE]

#define ADC_SP_FROM_PTR_BX_(VALUE) adc sp, word ptr [bx + VALUE]
#define ADC_SP_FROM_PTR_BP_(VALUE) adc sp, word ptr [bp + VALUE]
#define ADC_SP_FROM_PTR_SI_(VALUE) adc sp, word ptr [si + VALUE]
#define ADC_SP_FROM_PTR_DI_(VALUE) adc sp, word ptr [di + VALUE]

#define ADC_AX_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], ax
#define ADC_AX_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], ax
#define ADC_AX_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], ax
#define ADC_AX_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], ax

#define ADC_BX_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], bx
#define ADC_BX_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], bx
#define ADC_BX_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], bx
#define ADC_BX_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], bx

#define ADC_CX_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], cx
#define ADC_CX_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], cx
#define ADC_CX_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], cx
#define ADC_CX_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], cx

#define ADC_DX_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], dx
#define ADC_DX_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], dx
#define ADC_DX_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], dx
#define ADC_DX_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], dx

#define ADC_DI_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], di
#define ADC_DI_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], di
#define ADC_DI_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], di
#define ADC_DI_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], di

#define ADC_SI_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], si
#define ADC_SI_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], si
#define ADC_SI_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], si
#define ADC_SI_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], si

#define ADC_BP_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], bp
#define ADC_BP_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], bp
#define ADC_BP_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], bp
#define ADC_BP_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], bp

#define ADC_SP_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], sp
#define ADC_SP_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], sp
#define ADC_SP_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], sp
#define ADC_SP_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADC_AX_FROM_PTR_(VALUE) adc ax, word ptr [VALUE]
#define ADC_BX_FROM_PTR_(VALUE) adc bx, word ptr [VALUE]
#define ADC_CX_FROM_PTR_(VALUE) adc cx, word ptr [VALUE]
#define ADC_DX_FROM_PTR_(VALUE) adc dx, word ptr [VALUE]
#define ADC_DI_FROM_PTR_(VALUE) adc di, word ptr [VALUE]
#define ADC_SI_FROM_PTR_(VALUE) adc si, word ptr [VALUE]
#define ADC_BP_FROM_PTR_(VALUE) adc bp, word ptr [VALUE]
#define ADC_SP_FROM_PTR_(VALUE) adc sp, word ptr [VALUE]

#define ADC_AX_TO_PTR_(VALUE) adc word ptr [VALUE], ax
#define ADC_BX_TO_PTR_(VALUE) adc word ptr [VALUE], bx
#define ADC_CX_TO_PTR_(VALUE) adc word ptr [VALUE], cx
#define ADC_DX_TO_PTR_(VALUE) adc word ptr [VALUE], dx
#define ADC_DI_TO_PTR_(VALUE) adc word ptr [VALUE], di
#define ADC_SI_TO_PTR_(VALUE) adc word ptr [VALUE], si
#define ADC_BP_TO_PTR_(VALUE) adc word ptr [VALUE], bp
#define ADC_SP_TO_PTR_(VALUE) adc word ptr [VALUE], sp

#define ADC_AX_FROM_PTR_EAX adc ax, word ptr [eax]
#define ADC_AX_FROM_PTR_EBX adc ax, word ptr [ebx]
#define ADC_AX_FROM_PTR_ECX adc ax, word ptr [ecx]
#define ADC_AX_FROM_PTR_EDX adc ax, word ptr [edx]
#define ADC_AX_FROM_PTR_EDI adc ax, word ptr [edi]
#define ADC_AX_FROM_PTR_ESI adc ax, word ptr [esi]
#define ADC_AX_FROM_PTR_EBP adc ax, word ptr [ebp]
#define ADC_AX_FROM_PTR_ESP adc ax, word ptr [esp]
#define ADC_AX_FROM_PTR_BX adc ax, word ptr [bx]
#define ADC_AX_FROM_PTR_BP adc ax, word ptr [bp]
#define ADC_AX_FROM_PTR_SI adc ax, word ptr [si]
#define ADC_AX_FROM_PTR_DI adc ax, word ptr [di]

#define ADC_BX_FROM_PTR_EAX adc bx, word ptr [eax]
#define ADC_BX_FROM_PTR_EBX adc bx, word ptr [ebx]
#define ADC_BX_FROM_PTR_ECX adc bx, word ptr [ecx]
#define ADC_BX_FROM_PTR_EDX adc bx, word ptr [edx]
#define ADC_BX_FROM_PTR_EDI adc bx, word ptr [edi]
#define ADC_BX_FROM_PTR_ESI adc bx, word ptr [esi]
#define ADC_BX_FROM_PTR_EBP adc bx, word ptr [ebp]
#define ADC_BX_FROM_PTR_ESP adc bx, word ptr [esp]
#define ADC_BX_FROM_PTR_BX adc bx, word ptr [bx]
#define ADC_BX_FROM_PTR_BP adc bx, word ptr [bp]
#define ADC_BX_FROM_PTR_SI adc bx, word ptr [si]
#define ADC_BX_FROM_PTR_DI adc bx, word ptr [di]

#define ADC_CX_FROM_PTR_EAX adc cx, word ptr [eax]
#define ADC_CX_FROM_PTR_EBX adc cx, word ptr [ebx]
#define ADC_CX_FROM_PTR_ECX adc cx, word ptr [ecx]
#define ADC_CX_FROM_PTR_EDX adc cx, word ptr [edx]
#define ADC_CX_FROM_PTR_EDI adc cx, word ptr [edi]
#define ADC_CX_FROM_PTR_ESI adc cx, word ptr [esi]
#define ADC_CX_FROM_PTR_EBP adc cx, word ptr [ebp]
#define ADC_CX_FROM_PTR_ESP adc cx, word ptr [esp]
#define ADC_CX_FROM_PTR_BX adc cx, word ptr [bx]
#define ADC_CX_FROM_PTR_BP adc cx, word ptr [bp]
#define ADC_CX_FROM_PTR_SI adc cx, word ptr [si]
#define ADC_CX_FROM_PTR_DI adc cx, word ptr [di]

#define ADC_DX_FROM_PTR_EAX adc dx, word ptr [eax]
#define ADC_DX_FROM_PTR_EBX adc dx, word ptr [ebx]
#define ADC_DX_FROM_PTR_ECX adc dx, word ptr [ecx]
#define ADC_DX_FROM_PTR_EDX adc dx, word ptr [edx]
#define ADC_DX_FROM_PTR_EDI adc dx, word ptr [edi]
#define ADC_DX_FROM_PTR_ESI adc dx, word ptr [esi]
#define ADC_DX_FROM_PTR_EBP adc dx, word ptr [ebp]
#define ADC_DX_FROM_PTR_ESP adc dx, word ptr [esp]
#define ADC_DX_FROM_PTR_BX adc dx, word ptr [bx]
#define ADC_DX_FROM_PTR_BP adc dx, word ptr [bp]
#define ADC_DX_FROM_PTR_SI adc dx, word ptr [si]
#define ADC_DX_FROM_PTR_DI adc dx, word ptr [di]

#define ADC_DI_FROM_PTR_EAX adc di, word ptr [eax]
#define ADC_DI_FROM_PTR_EBX adc di, word ptr [ebx]
#define ADC_DI_FROM_PTR_ECX adc di, word ptr [ecx]
#define ADC_DI_FROM_PTR_EDX adc di, word ptr [edx]
#define ADC_DI_FROM_PTR_EDI adc di, word ptr [edi]
#define ADC_DI_FROM_PTR_ESI adc di, word ptr [esi]
#define ADC_DI_FROM_PTR_EBP adc di, word ptr [ebp]
#define ADC_DI_FROM_PTR_ESP adc di, word ptr [esp]
#define ADC_DI_FROM_PTR_BX adc di, word ptr [bx]
#define ADC_DI_FROM_PTR_BP adc di, word ptr [bp]
#define ADC_DI_FROM_PTR_SI adc di, word ptr [si]
#define ADC_DI_FROM_PTR_DI adc di, word ptr [di]

#define ADC_SI_FROM_PTR_EAX adc si, word ptr [eax]
#define ADC_SI_FROM_PTR_EBX adc si, word ptr [ebx]
#define ADC_SI_FROM_PTR_ECX adc si, word ptr [ecx]
#define ADC_SI_FROM_PTR_EDX adc si, word ptr [edx]
#define ADC_SI_FROM_PTR_EDI adc si, word ptr [edi]
#define ADC_SI_FROM_PTR_ESI adc si, word ptr [esi]
#define ADC_SI_FROM_PTR_EBP adc si, word ptr [ebp]
#define ADC_SI_FROM_PTR_ESP adc si, word ptr [esp]
#define ADC_SI_FROM_PTR_BX adc si, word ptr [bx]
#define ADC_SI_FROM_PTR_BP adc si, word ptr [bp]
#define ADC_SI_FROM_PTR_SI adc si, word ptr [si]
#define ADC_SI_FROM_PTR_DI adc si, word ptr [di]

#define ADC_BP_FROM_PTR_EAX adc bp, word ptr [eax]
#define ADC_BP_FROM_PTR_EBX adc bp, word ptr [ebx]
#define ADC_BP_FROM_PTR_ECX adc bp, word ptr [ecx]
#define ADC_BP_FROM_PTR_EDX adc bp, word ptr [edx]
#define ADC_BP_FROM_PTR_EDI adc bp, word ptr [edi]
#define ADC_BP_FROM_PTR_ESI adc bp, word ptr [esi]
#define ADC_BP_FROM_PTR_EBP adc bp, word ptr [ebp]
#define ADC_BP_FROM_PTR_ESP adc bp, word ptr [esp]
#define ADC_BP_FROM_PTR_BX adc bp, word ptr [bx]
#define ADC_BP_FROM_PTR_BP adc bp, word ptr [bp]
#define ADC_BP_FROM_PTR_SI adc bp, word ptr [si]
#define ADC_BP_FROM_PTR_DI adc bp, word ptr [di]

#define ADC_SP_FROM_PTR_EAX adc sp, word ptr [eax]
#define ADC_SP_FROM_PTR_EBX adc sp, word ptr [ebx]
#define ADC_SP_FROM_PTR_ECX adc sp, word ptr [ecx]
#define ADC_SP_FROM_PTR_EDX adc sp, word ptr [edx]
#define ADC_SP_FROM_PTR_EDI adc sp, word ptr [edi]
#define ADC_SP_FROM_PTR_ESI adc sp, word ptr [esi]
#define ADC_SP_FROM_PTR_EBP adc sp, word ptr [ebp]
#define ADC_SP_FROM_PTR_ESP adc sp, word ptr [esp]
#define ADC_SP_FROM_PTR_BX adc sp, word ptr [bx]
#define ADC_SP_FROM_PTR_BP adc sp, word ptr [bp]
#define ADC_SP_FROM_PTR_SI adc sp, word ptr [si]
#define ADC_SP_FROM_PTR_DI adc sp, word ptr [di]

#define ADC_AX_TO_PTR_EAX adc word ptr [eax], ax
#define ADC_AX_TO_PTR_EBX adc word ptr [ebx], ax
#define ADC_AX_TO_PTR_ECX adc word ptr [ecx], ax
#define ADC_AX_TO_PTR_EDX adc word ptr [edx], ax
#define ADC_AX_TO_PTR_EDI adc word ptr [edi], ax
#define ADC_AX_TO_PTR_ESI adc word ptr [esi], ax
#define ADC_AX_TO_PTR_EBP adc word ptr [ebp], ax
#define ADC_AX_TO_PTR_ESP adc word ptr [esp], ax
#define ADC_AX_TO_PTR_BX adc word ptr [bx], ax
#define ADC_AX_TO_PTR_BP adc word ptr [bp], ax
#define ADC_AX_TO_PTR_SI adc word ptr [si], ax
#define ADC_AX_TO_PTR_DI adc word ptr [di], ax

#define ADC_BX_TO_PTR_EAX adc word ptr [eax], bx
#define ADC_BX_TO_PTR_EBX adc word ptr [ebx], bx
#define ADC_BX_TO_PTR_ECX adc word ptr [ecx], bx
#define ADC_BX_TO_PTR_EDX adc word ptr [edx], bx
#define ADC_BX_TO_PTR_EDI adc word ptr [edi], bx
#define ADC_BX_TO_PTR_ESI adc word ptr [esi], bx
#define ADC_BX_TO_PTR_EBP adc word ptr [ebp], bx
#define ADC_BX_TO_PTR_ESP adc word ptr [esp], bx
#define ADC_BX_TO_PTR_BX adc word ptr [bx], bx
#define ADC_BX_TO_PTR_BP adc word ptr [bp], bx
#define ADC_BX_TO_PTR_SI adc word ptr [si], bx
#define ADC_BX_TO_PTR_DI adc word ptr [di], bx

#define ADC_CX_TO_PTR_EAX adc word ptr [eax], cx
#define ADC_CX_TO_PTR_EBX adc word ptr [ebx], cx
#define ADC_CX_TO_PTR_ECX adc word ptr [ecx], cx
#define ADC_CX_TO_PTR_EDX adc word ptr [edx], cx
#define ADC_CX_TO_PTR_EDI adc word ptr [edi], cx
#define ADC_CX_TO_PTR_ESI adc word ptr [esi], cx
#define ADC_CX_TO_PTR_EBP adc word ptr [ebp], cx
#define ADC_CX_TO_PTR_ESP adc word ptr [esp], cx
#define ADC_CX_TO_PTR_BX adc word ptr [bx], cx
#define ADC_CX_TO_PTR_BP adc word ptr [bp], cx
#define ADC_CX_TO_PTR_SI adc word ptr [si], cx
#define ADC_CX_TO_PTR_DI adc word ptr [di], cx

#define ADC_DX_TO_PTR_EAX adc word ptr [eax], dx
#define ADC_DX_TO_PTR_EBX adc word ptr [ebx], dx
#define ADC_DX_TO_PTR_ECX adc word ptr [ecx], dx
#define ADC_DX_TO_PTR_EDX adc word ptr [edx], dx
#define ADC_DX_TO_PTR_EDI adc word ptr [edi], dx
#define ADC_DX_TO_PTR_ESI adc word ptr [esi], dx
#define ADC_DX_TO_PTR_EBP adc word ptr [ebp], dx
#define ADC_DX_TO_PTR_ESP adc word ptr [esp], dx
#define ADC_DX_TO_PTR_BX adc word ptr [bx], dx
#define ADC_DX_TO_PTR_BP adc word ptr [bp], dx
#define ADC_DX_TO_PTR_SI adc word ptr [si], dx
#define ADC_DX_TO_PTR_DI adc word ptr [di], dx

#define ADC_DI_TO_PTR_EAX adc word ptr [eax], di
#define ADC_DI_TO_PTR_EBX adc word ptr [ebx], di
#define ADC_DI_TO_PTR_ECX adc word ptr [ecx], di
#define ADC_DI_TO_PTR_EDX adc word ptr [edx], di
#define ADC_DI_TO_PTR_EDI adc word ptr [edi], di
#define ADC_DI_TO_PTR_ESI adc word ptr [esi], di
#define ADC_DI_TO_PTR_EBP adc word ptr [ebp], di
#define ADC_DI_TO_PTR_ESP adc word ptr [esp], di
#define ADC_DI_TO_PTR_BX adc word ptr [bx], di
#define ADC_DI_TO_PTR_BP adc word ptr [bp], di
#define ADC_DI_TO_PTR_SI adc word ptr [si], di
#define ADC_DI_TO_PTR_DI adc word ptr [di], di

#define ADC_SI_TO_PTR_EAX adc word ptr [eax], si
#define ADC_SI_TO_PTR_EBX adc word ptr [ebx], si
#define ADC_SI_TO_PTR_ECX adc word ptr [ecx], si
#define ADC_SI_TO_PTR_EDX adc word ptr [edx], si
#define ADC_SI_TO_PTR_EDI adc word ptr [edi], si
#define ADC_SI_TO_PTR_ESI adc word ptr [esi], si
#define ADC_SI_TO_PTR_EBP adc word ptr [ebp], si
#define ADC_SI_TO_PTR_ESP adc word ptr [esp], si
#define ADC_SI_TO_PTR_BX adc word ptr [bx], si
#define ADC_SI_TO_PTR_BP adc word ptr [bp], si
#define ADC_SI_TO_PTR_SI adc word ptr [si], si
#define ADC_SI_TO_PTR_DI adc word ptr [di], si

#define ADC_BP_TO_PTR_EAX adc word ptr [eax], bp
#define ADC_BP_TO_PTR_EBX adc word ptr [ebx], bp
#define ADC_BP_TO_PTR_ECX adc word ptr [ecx], bp
#define ADC_BP_TO_PTR_EDX adc word ptr [edx], bp
#define ADC_BP_TO_PTR_EDI adc word ptr [edi], bp
#define ADC_BP_TO_PTR_ESI adc word ptr [esi], bp
#define ADC_BP_TO_PTR_EBP adc word ptr [ebp], bp
#define ADC_BP_TO_PTR_ESP adc word ptr [esp], bp
#define ADC_BP_TO_PTR_BX adc word ptr [bx], bp
#define ADC_BP_TO_PTR_BP adc word ptr [bp], bp
#define ADC_BP_TO_PTR_SI adc word ptr [si], bp
#define ADC_BP_TO_PTR_DI adc word ptr [di], bp

#define ADC_SP_TO_PTR_EAX adc word ptr [eax], sp
#define ADC_SP_TO_PTR_EBX adc word ptr [ebx], sp
#define ADC_SP_TO_PTR_ECX adc word ptr [ecx], sp
#define ADC_SP_TO_PTR_EDX adc word ptr [edx], sp
#define ADC_SP_TO_PTR_EDI adc word ptr [edi], sp
#define ADC_SP_TO_PTR_ESI adc word ptr [esi], sp
#define ADC_SP_TO_PTR_EBP adc word ptr [ebp], sp
#define ADC_SP_TO_PTR_ESP adc word ptr [esp], sp
#define ADC_SP_TO_PTR_BX adc word ptr [bx], sp
#define ADC_SP_TO_PTR_BP adc word ptr [bp], sp
#define ADC_SP_TO_PTR_SI adc word ptr [si], sp
#define ADC_SP_TO_PTR_DI adc word ptr [di], sp

#define ADC_AX_FROM_PTR_EAX_(VALUE) adc ax, word ptr [eax + VALUE]
#define ADC_AX_FROM_PTR_EBX_(VALUE) adc ax, word ptr [ebx + VALUE]
#define ADC_AX_FROM_PTR_ECX_(VALUE) adc ax, word ptr [ecx + VALUE]
#define ADC_AX_FROM_PTR_EDX_(VALUE) adc ax, word ptr [edx + VALUE]
#define ADC_AX_FROM_PTR_EDI_(VALUE) adc ax, word ptr [edi + VALUE]
#define ADC_AX_FROM_PTR_ESI_(VALUE) adc ax, word ptr [esi + VALUE]
#define ADC_AX_FROM_PTR_EBP_(VALUE) adc ax, word ptr [ebp + VALUE]
#define ADC_AX_FROM_PTR_ESP_(VALUE) adc ax, word ptr [esp + VALUE]
#define ADC_AX_FROM_PTR_BX_(VALUE) adc ax, word ptr [bx + VALUE]
#define ADC_AX_FROM_PTR_BP_(VALUE) adc ax, word ptr [bp + VALUE]
#define ADC_AX_FROM_PTR_SI_(VALUE) adc ax, word ptr [si + VALUE]
#define ADC_AX_FROM_PTR_DI_(VALUE) adc ax, word ptr [di + VALUE]

#define ADC_BX_FROM_PTR_EAX_(VALUE) adc bx, word ptr [eax + VALUE]
#define ADC_BX_FROM_PTR_EBX_(VALUE) adc bx, word ptr [ebx + VALUE]
#define ADC_BX_FROM_PTR_ECX_(VALUE) adc bx, word ptr [ecx + VALUE]
#define ADC_BX_FROM_PTR_EDX_(VALUE) adc bx, word ptr [edx + VALUE]
#define ADC_BX_FROM_PTR_EDI_(VALUE) adc bx, word ptr [edi + VALUE]
#define ADC_BX_FROM_PTR_ESI_(VALUE) adc bx, word ptr [esi + VALUE]
#define ADC_BX_FROM_PTR_EBP_(VALUE) adc bx, word ptr [ebp + VALUE]
#define ADC_BX_FROM_PTR_ESP_(VALUE) adc bx, word ptr [esp + VALUE]
#define ADC_BX_FROM_PTR_BX_(VALUE) adc bx, word ptr [bx + VALUE]
#define ADC_BX_FROM_PTR_BP_(VALUE) adc bx, word ptr [bp + VALUE]
#define ADC_BX_FROM_PTR_SI_(VALUE) adc bx, word ptr [si + VALUE]
#define ADC_BX_FROM_PTR_DI_(VALUE) adc bx, word ptr [di + VALUE]

#define ADC_CX_FROM_PTR_EAX_(VALUE) adc cx, word ptr [eax + VALUE]
#define ADC_CX_FROM_PTR_EBX_(VALUE) adc cx, word ptr [ebx + VALUE]
#define ADC_CX_FROM_PTR_ECX_(VALUE) adc cx, word ptr [ecx + VALUE]
#define ADC_CX_FROM_PTR_EDX_(VALUE) adc cx, word ptr [edx + VALUE]
#define ADC_CX_FROM_PTR_EDI_(VALUE) adc cx, word ptr [edi + VALUE]
#define ADC_CX_FROM_PTR_ESI_(VALUE) adc cx, word ptr [esi + VALUE]
#define ADC_CX_FROM_PTR_EBP_(VALUE) adc cx, word ptr [ebp + VALUE]
#define ADC_CX_FROM_PTR_ESP_(VALUE) adc cx, word ptr [esp + VALUE]
#define ADC_CX_FROM_PTR_BX_(VALUE) adc cx, word ptr [bx + VALUE]
#define ADC_CX_FROM_PTR_BP_(VALUE) adc cx, word ptr [bp + VALUE]
#define ADC_CX_FROM_PTR_SI_(VALUE) adc cx, word ptr [si + VALUE]
#define ADC_CX_FROM_PTR_DI_(VALUE) adc cx, word ptr [di + VALUE]

#define ADC_DX_FROM_PTR_EAX_(VALUE) adc dx, word ptr [eax + VALUE]
#define ADC_DX_FROM_PTR_EBX_(VALUE) adc dx, word ptr [ebx + VALUE]
#define ADC_DX_FROM_PTR_ECX_(VALUE) adc dx, word ptr [ecx + VALUE]
#define ADC_DX_FROM_PTR_EDX_(VALUE) adc dx, word ptr [edx + VALUE]
#define ADC_DX_FROM_PTR_EDI_(VALUE) adc dx, word ptr [edi + VALUE]
#define ADC_DX_FROM_PTR_ESI_(VALUE) adc dx, word ptr [esi + VALUE]
#define ADC_DX_FROM_PTR_EBP_(VALUE) adc dx, word ptr [ebp + VALUE]
#define ADC_DX_FROM_PTR_ESP_(VALUE) adc dx, word ptr [esp + VALUE]
#define ADC_DX_FROM_PTR_BX_(VALUE) adc dx, word ptr [bx + VALUE]
#define ADC_DX_FROM_PTR_BP_(VALUE) adc dx, word ptr [bp + VALUE]
#define ADC_DX_FROM_PTR_SI_(VALUE) adc dx, word ptr [si + VALUE]
#define ADC_DX_FROM_PTR_DI_(VALUE) adc dx, word ptr [di + VALUE]

#define ADC_DI_FROM_PTR_EAX_(VALUE) adc di, word ptr [eax + VALUE]
#define ADC_DI_FROM_PTR_EBX_(VALUE) adc di, word ptr [ebx + VALUE]
#define ADC_DI_FROM_PTR_ECX_(VALUE) adc di, word ptr [ecx + VALUE]
#define ADC_DI_FROM_PTR_EDX_(VALUE) adc di, word ptr [edx + VALUE]
#define ADC_DI_FROM_PTR_EDI_(VALUE) adc di, word ptr [edi + VALUE]
#define ADC_DI_FROM_PTR_ESI_(VALUE) adc di, word ptr [esi + VALUE]
#define ADC_DI_FROM_PTR_EBP_(VALUE) adc di, word ptr [ebp + VALUE]
#define ADC_DI_FROM_PTR_ESP_(VALUE) adc di, word ptr [esp + VALUE]
#define ADC_DI_FROM_PTR_BX_(VALUE) adc di, word ptr [bx + VALUE]
#define ADC_DI_FROM_PTR_BP_(VALUE) adc di, word ptr [bp + VALUE]
#define ADC_DI_FROM_PTR_SI_(VALUE) adc di, word ptr [si + VALUE]
#define ADC_DI_FROM_PTR_DI_(VALUE) adc di, word ptr [di + VALUE]

#define ADC_SI_FROM_PTR_EAX_(VALUE) adc si, word ptr [eax + VALUE]
#define ADC_SI_FROM_PTR_EBX_(VALUE) adc si, word ptr [ebx + VALUE]
#define ADC_SI_FROM_PTR_ECX_(VALUE) adc si, word ptr [ecx + VALUE]
#define ADC_SI_FROM_PTR_EDX_(VALUE) adc si, word ptr [edx + VALUE]
#define ADC_SI_FROM_PTR_EDI_(VALUE) adc si, word ptr [edi + VALUE]
#define ADC_SI_FROM_PTR_ESI_(VALUE) adc si, word ptr [esi + VALUE]
#define ADC_SI_FROM_PTR_EBP_(VALUE) adc si, word ptr [ebp + VALUE]
#define ADC_SI_FROM_PTR_ESP_(VALUE) adc si, word ptr [esp + VALUE]
#define ADC_SI_FROM_PTR_BX_(VALUE) adc si, word ptr [bx + VALUE]
#define ADC_SI_FROM_PTR_BP_(VALUE) adc si, word ptr [bp + VALUE]
#define ADC_SI_FROM_PTR_SI_(VALUE) adc si, word ptr [si + VALUE]
#define ADC_SI_FROM_PTR_DI_(VALUE) adc si, word ptr [di + VALUE]

#define ADC_BP_FROM_PTR_EAX_(VALUE) adc bp, word ptr [eax + VALUE]
#define ADC_BP_FROM_PTR_EBX_(VALUE) adc bp, word ptr [ebx + VALUE]
#define ADC_BP_FROM_PTR_ECX_(VALUE) adc bp, word ptr [ecx + VALUE]
#define ADC_BP_FROM_PTR_EDX_(VALUE) adc bp, word ptr [edx + VALUE]
#define ADC_BP_FROM_PTR_EDI_(VALUE) adc bp, word ptr [edi + VALUE]
#define ADC_BP_FROM_PTR_ESI_(VALUE) adc bp, word ptr [esi + VALUE]
#define ADC_BP_FROM_PTR_EBP_(VALUE) adc bp, word ptr [ebp + VALUE]
#define ADC_BP_FROM_PTR_ESP_(VALUE) adc bp, word ptr [esp + VALUE]
#define ADC_BP_FROM_PTR_BX_(VALUE) adc bp, word ptr [bx + VALUE]
#define ADC_BP_FROM_PTR_BP_(VALUE) adc bp, word ptr [bp + VALUE]
#define ADC_BP_FROM_PTR_SI_(VALUE) adc bp, word ptr [si + VALUE]
#define ADC_BP_FROM_PTR_DI_(VALUE) adc bp, word ptr [di + VALUE]

#define ADC_SP_FROM_PTR_EAX_(VALUE) adc sp, word ptr [eax + VALUE]
#define ADC_SP_FROM_PTR_EBX_(VALUE) adc sp, word ptr [ebx + VALUE]
#define ADC_SP_FROM_PTR_ECX_(VALUE) adc sp, word ptr [ecx + VALUE]
#define ADC_SP_FROM_PTR_EDX_(VALUE) adc sp, word ptr [edx + VALUE]
#define ADC_SP_FROM_PTR_EDI_(VALUE) adc sp, word ptr [edi + VALUE]
#define ADC_SP_FROM_PTR_ESI_(VALUE) adc sp, word ptr [esi + VALUE]
#define ADC_SP_FROM_PTR_EBP_(VALUE) adc sp, word ptr [ebp + VALUE]
#define ADC_SP_FROM_PTR_ESP_(VALUE) adc sp, word ptr [esp + VALUE]
#define ADC_SP_FROM_PTR_BX_(VALUE) adc sp, word ptr [bx + VALUE]
#define ADC_SP_FROM_PTR_BP_(VALUE) adc sp, word ptr [bp + VALUE]
#define ADC_SP_FROM_PTR_SI_(VALUE) adc sp, word ptr [si + VALUE]
#define ADC_SP_FROM_PTR_DI_(VALUE) adc sp, word ptr [di + VALUE]

#define ADC_AX_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], ax
#define ADC_AX_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], ax
#define ADC_AX_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], ax
#define ADC_AX_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], ax
#define ADC_AX_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], ax
#define ADC_AX_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], ax
#define ADC_AX_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], ax
#define ADC_AX_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], ax
#define ADC_AX_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], ax
#define ADC_AX_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], ax
#define ADC_AX_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], ax
#define ADC_AX_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], ax

#define ADC_BX_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], bx
#define ADC_BX_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], bx
#define ADC_BX_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], bx
#define ADC_BX_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], bx
#define ADC_BX_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], bx
#define ADC_BX_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], bx
#define ADC_BX_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], bx
#define ADC_BX_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], bx
#define ADC_BX_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], bx
#define ADC_BX_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], bx
#define ADC_BX_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], bx
#define ADC_BX_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], bx

#define ADC_CX_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], cx
#define ADC_CX_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], cx
#define ADC_CX_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], cx
#define ADC_CX_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], cx
#define ADC_CX_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], cx
#define ADC_CX_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], cx
#define ADC_CX_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], cx
#define ADC_CX_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], cx
#define ADC_CX_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], cx
#define ADC_CX_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], cx
#define ADC_CX_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], cx
#define ADC_CX_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], cx

#define ADC_DX_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], dx
#define ADC_DX_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], dx
#define ADC_DX_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], dx
#define ADC_DX_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], dx
#define ADC_DX_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], dx
#define ADC_DX_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], dx
#define ADC_DX_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], dx
#define ADC_DX_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], dx
#define ADC_DX_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], dx
#define ADC_DX_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], dx
#define ADC_DX_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], dx
#define ADC_DX_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], dx

#define ADC_DI_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], di
#define ADC_DI_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], di
#define ADC_DI_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], di
#define ADC_DI_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], di
#define ADC_DI_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], di
#define ADC_DI_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], di
#define ADC_DI_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], di
#define ADC_DI_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], di
#define ADC_DI_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], di
#define ADC_DI_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], di
#define ADC_DI_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], di
#define ADC_DI_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], di

#define ADC_SI_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], si
#define ADC_SI_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], si
#define ADC_SI_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], si
#define ADC_SI_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], si
#define ADC_SI_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], si
#define ADC_SI_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], si
#define ADC_SI_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], si
#define ADC_SI_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], si
#define ADC_SI_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], si
#define ADC_SI_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], si
#define ADC_SI_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], si
#define ADC_SI_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], si

#define ADC_BP_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], bp
#define ADC_BP_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], bp
#define ADC_BP_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], bp
#define ADC_BP_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], bp
#define ADC_BP_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], bp
#define ADC_BP_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], bp
#define ADC_BP_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], bp
#define ADC_BP_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], bp
#define ADC_BP_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], bp
#define ADC_BP_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], bp
#define ADC_BP_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], bp
#define ADC_BP_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], bp

#define ADC_SP_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], sp
#define ADC_SP_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], sp
#define ADC_SP_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], sp
#define ADC_SP_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], sp
#define ADC_SP_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], sp
#define ADC_SP_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], sp
#define ADC_SP_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], sp
#define ADC_SP_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], sp
#define ADC_SP_TO_PTR_BX_(VALUE) adc word ptr [bx + VALUE], sp
#define ADC_SP_TO_PTR_BP_(VALUE) adc word ptr [bp + VALUE], sp
#define ADC_SP_TO_PTR_SI_(VALUE) adc word ptr [si + VALUE], sp
#define ADC_SP_TO_PTR_DI_(VALUE) adc word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_AX_FROM_PTR_(VALUE) adc ax, word ptr [VALUE]
#define ADC_BX_FROM_PTR_(VALUE) adc bx, word ptr [VALUE]
#define ADC_CX_FROM_PTR_(VALUE) adc cx, word ptr [VALUE]
#define ADC_DX_FROM_PTR_(VALUE) adc dx, word ptr [VALUE]
#define ADC_DI_FROM_PTR_(VALUE) adc di, word ptr [VALUE]
#define ADC_SI_FROM_PTR_(VALUE) adc si, word ptr [VALUE]
#define ADC_BP_FROM_PTR_(VALUE) adc bp, word ptr [VALUE]
#define ADC_SP_FROM_PTR_(VALUE) adc sp, word ptr [VALUE]
#define ADC_R8W_FROM_PTR_(VALUE) adc r8w, word ptr [VALUE]
#define ADC_R9W_FROM_PTR_(VALUE) adc r9w, word ptr [VALUE]
#define ADC_R10W_FROM_PTR_(VALUE) adc r10w, word ptr [VALUE]
#define ADC_R11W_FROM_PTR_(VALUE) adc r11w, word ptr [VALUE]
#define ADC_R12W_FROM_PTR_(VALUE) adc r12w, word ptr [VALUE]
#define ADC_R13W_FROM_PTR_(VALUE) adc r13w, word ptr [VALUE]
#define ADC_R14W_FROM_PTR_(VALUE) adc r14w, word ptr [VALUE]
#define ADC_R15W_FROM_PTR_(VALUE) adc r15w, word ptr [VALUE]

#define ADC_AX_TO_PTR_(VALUE) adc word ptr [VALUE], ax
#define ADC_BX_TO_PTR_(VALUE) adc word ptr [VALUE], bx
#define ADC_CX_TO_PTR_(VALUE) adc word ptr [VALUE], cx
#define ADC_DX_TO_PTR_(VALUE) adc word ptr [VALUE], dx
#define ADC_DI_TO_PTR_(VALUE) adc word ptr [VALUE], di
#define ADC_SI_TO_PTR_(VALUE) adc word ptr [VALUE], si
#define ADC_BP_TO_PTR_(VALUE) adc word ptr [VALUE], bp
#define ADC_SP_TO_PTR_(VALUE) adc word ptr [VALUE], sp
#define ADC_R8W_TO_PTR_(VALUE) adc word ptr [VALUE], r8w
#define ADC_R9W_TO_PTR_(VALUE) adc word ptr [VALUE], r9w
#define ADC_R10W_TO_PTR_(VALUE) adc word ptr [VALUE], r10w
#define ADC_R11W_TO_PTR_(VALUE) adc word ptr [VALUE], r11w
#define ADC_R12W_TO_PTR_(VALUE) adc word ptr [VALUE], r12w
#define ADC_R13W_TO_PTR_(VALUE) adc word ptr [VALUE], r13w
#define ADC_R14W_TO_PTR_(VALUE) adc word ptr [VALUE], r14w
#define ADC_R15W_TO_PTR_(VALUE) adc word ptr [VALUE], r15w

#define ADC_AX_FROM_PTR_RAX adc ax, word ptr [rax]
#define ADC_AX_FROM_PTR_RBX adc ax, word ptr [rbx]
#define ADC_AX_FROM_PTR_RCX adc ax, word ptr [rcx]
#define ADC_AX_FROM_PTR_RDX adc ax, word ptr [rdx]
#define ADC_AX_FROM_PTR_RDI adc ax, word ptr [rdi]
#define ADC_AX_FROM_PTR_RSI adc ax, word ptr [rsi]
#define ADC_AX_FROM_PTR_RBP adc ax, word ptr [rbp]
#define ADC_AX_FROM_PTR_RSP adc ax, word ptr [rsp]
#define ADC_AX_FROM_PTR_R8 adc ax, word ptr [r8]
#define ADC_AX_FROM_PTR_R9 adc ax, word ptr [r9]
#define ADC_AX_FROM_PTR_R10 adc ax, word ptr [r10]
#define ADC_AX_FROM_PTR_R11 adc ax, word ptr [r11]
#define ADC_AX_FROM_PTR_R12 adc ax, word ptr [r12]
#define ADC_AX_FROM_PTR_R13 adc ax, word ptr [r13]
#define ADC_AX_FROM_PTR_R14 adc ax, word ptr [r14]
#define ADC_AX_FROM_PTR_R15 adc ax, word ptr [r15]
#define ADC_AX_FROM_PTR_EAX adc ax, word ptr [eax]
#define ADC_AX_FROM_PTR_EBX adc ax, word ptr [ebx]
#define ADC_AX_FROM_PTR_ECX adc ax, word ptr [ecx]
#define ADC_AX_FROM_PTR_EDX adc ax, word ptr [edx]
#define ADC_AX_FROM_PTR_EDI adc ax, word ptr [edi]
#define ADC_AX_FROM_PTR_ESI adc ax, word ptr [esi]
#define ADC_AX_FROM_PTR_EBP adc ax, word ptr [ebp]
#define ADC_AX_FROM_PTR_ESP adc ax, word ptr [esp]

#define ADC_BX_FROM_PTR_RAX adc bx, word ptr [rax]
#define ADC_BX_FROM_PTR_RBX adc bx, word ptr [rbx]
#define ADC_BX_FROM_PTR_RCX adc bx, word ptr [rcx]
#define ADC_BX_FROM_PTR_RDX adc bx, word ptr [rdx]
#define ADC_BX_FROM_PTR_RDI adc bx, word ptr [rdi]
#define ADC_BX_FROM_PTR_RSI adc bx, word ptr [rsi]
#define ADC_BX_FROM_PTR_RBP adc bx, word ptr [rbp]
#define ADC_BX_FROM_PTR_RSP adc bx, word ptr [rsp]
#define ADC_BX_FROM_PTR_R8 adc bx, word ptr [r8]
#define ADC_BX_FROM_PTR_R9 adc bx, word ptr [r9]
#define ADC_BX_FROM_PTR_R10 adc bx, word ptr [r10]
#define ADC_BX_FROM_PTR_R11 adc bx, word ptr [r11]
#define ADC_BX_FROM_PTR_R12 adc bx, word ptr [r12]
#define ADC_BX_FROM_PTR_R13 adc bx, word ptr [r13]
#define ADC_BX_FROM_PTR_R14 adc bx, word ptr [r14]
#define ADC_BX_FROM_PTR_R15 adc bx, word ptr [r15]
#define ADC_BX_FROM_PTR_EAX adc bx, word ptr [eax]
#define ADC_BX_FROM_PTR_EBX adc bx, word ptr [ebx]
#define ADC_BX_FROM_PTR_ECX adc bx, word ptr [ecx]
#define ADC_BX_FROM_PTR_EDX adc bx, word ptr [edx]
#define ADC_BX_FROM_PTR_EDI adc bx, word ptr [edi]
#define ADC_BX_FROM_PTR_ESI adc bx, word ptr [esi]
#define ADC_BX_FROM_PTR_EBP adc bx, word ptr [ebp]
#define ADC_BX_FROM_PTR_ESP adc bx, word ptr [esp]

#define ADC_CX_FROM_PTR_RAX adc cx, word ptr [rax]
#define ADC_CX_FROM_PTR_RBX adc cx, word ptr [rbx]
#define ADC_CX_FROM_PTR_RCX adc cx, word ptr [rcx]
#define ADC_CX_FROM_PTR_RDX adc cx, word ptr [rdx]
#define ADC_CX_FROM_PTR_RDI adc cx, word ptr [rdi]
#define ADC_CX_FROM_PTR_RSI adc cx, word ptr [rsi]
#define ADC_CX_FROM_PTR_RBP adc cx, word ptr [rbp]
#define ADC_CX_FROM_PTR_RSP adc cx, word ptr [rsp]
#define ADC_CX_FROM_PTR_R8 adc cx, word ptr [r8]
#define ADC_CX_FROM_PTR_R9 adc cx, word ptr [r9]
#define ADC_CX_FROM_PTR_R10 adc cx, word ptr [r10]
#define ADC_CX_FROM_PTR_R11 adc cx, word ptr [r11]
#define ADC_CX_FROM_PTR_R12 adc cx, word ptr [r12]
#define ADC_CX_FROM_PTR_R13 adc cx, word ptr [r13]
#define ADC_CX_FROM_PTR_R14 adc cx, word ptr [r14]
#define ADC_CX_FROM_PTR_R15 adc cx, word ptr [r15]
#define ADC_CX_FROM_PTR_EAX adc cx, word ptr [eax]
#define ADC_CX_FROM_PTR_EBX adc cx, word ptr [ebx]
#define ADC_CX_FROM_PTR_ECX adc cx, word ptr [ecx]
#define ADC_CX_FROM_PTR_EDX adc cx, word ptr [edx]
#define ADC_CX_FROM_PTR_EDI adc cx, word ptr [edi]
#define ADC_CX_FROM_PTR_ESI adc cx, word ptr [esi]
#define ADC_CX_FROM_PTR_EBP adc cx, word ptr [ebp]
#define ADC_CX_FROM_PTR_ESP adc cx, word ptr [esp]

#define ADC_DX_FROM_PTR_RAX adc dx, word ptr [rax]
#define ADC_DX_FROM_PTR_RBX adc dx, word ptr [rbx]
#define ADC_DX_FROM_PTR_RCX adc dx, word ptr [rcx]
#define ADC_DX_FROM_PTR_RDX adc dx, word ptr [rdx]
#define ADC_DX_FROM_PTR_RDI adc dx, word ptr [rdi]
#define ADC_DX_FROM_PTR_RSI adc dx, word ptr [rsi]
#define ADC_DX_FROM_PTR_RBP adc dx, word ptr [rbp]
#define ADC_DX_FROM_PTR_RSP adc dx, word ptr [rsp]
#define ADC_DX_FROM_PTR_R8 adc dx, word ptr [r8]
#define ADC_DX_FROM_PTR_R9 adc dx, word ptr [r9]
#define ADC_DX_FROM_PTR_R10 adc dx, word ptr [r10]
#define ADC_DX_FROM_PTR_R11 adc dx, word ptr [r11]
#define ADC_DX_FROM_PTR_R12 adc dx, word ptr [r12]
#define ADC_DX_FROM_PTR_R13 adc dx, word ptr [r13]
#define ADC_DX_FROM_PTR_R14 adc dx, word ptr [r14]
#define ADC_DX_FROM_PTR_R15 adc dx, word ptr [r15]
#define ADC_DX_FROM_PTR_EAX adc dx, word ptr [eax]
#define ADC_DX_FROM_PTR_EBX adc dx, word ptr [ebx]
#define ADC_DX_FROM_PTR_ECX adc dx, word ptr [ecx]
#define ADC_DX_FROM_PTR_EDX adc dx, word ptr [edx]
#define ADC_DX_FROM_PTR_EDI adc dx, word ptr [edi]
#define ADC_DX_FROM_PTR_ESI adc dx, word ptr [esi]
#define ADC_DX_FROM_PTR_EBP adc dx, word ptr [ebp]
#define ADC_DX_FROM_PTR_ESP adc dx, word ptr [esp]

#define ADC_DI_FROM_PTR_RAX adc di, word ptr [rax]
#define ADC_DI_FROM_PTR_RBX adc di, word ptr [rbx]
#define ADC_DI_FROM_PTR_RCX adc di, word ptr [rcx]
#define ADC_DI_FROM_PTR_RDX adc di, word ptr [rdx]
#define ADC_DI_FROM_PTR_RDI adc di, word ptr [rdi]
#define ADC_DI_FROM_PTR_RSI adc di, word ptr [rsi]
#define ADC_DI_FROM_PTR_RBP adc di, word ptr [rbp]
#define ADC_DI_FROM_PTR_RSP adc di, word ptr [rsp]
#define ADC_DI_FROM_PTR_R8 adc di, word ptr [r8]
#define ADC_DI_FROM_PTR_R9 adc di, word ptr [r9]
#define ADC_DI_FROM_PTR_R10 adc di, word ptr [r10]
#define ADC_DI_FROM_PTR_R11 adc di, word ptr [r11]
#define ADC_DI_FROM_PTR_R12 adc di, word ptr [r12]
#define ADC_DI_FROM_PTR_R13 adc di, word ptr [r13]
#define ADC_DI_FROM_PTR_R14 adc di, word ptr [r14]
#define ADC_DI_FROM_PTR_R15 adc di, word ptr [r15]
#define ADC_DI_FROM_PTR_EAX adc di, word ptr [eax]
#define ADC_DI_FROM_PTR_EBX adc di, word ptr [ebx]
#define ADC_DI_FROM_PTR_ECX adc di, word ptr [ecx]
#define ADC_DI_FROM_PTR_EDX adc di, word ptr [edx]
#define ADC_DI_FROM_PTR_EDI adc di, word ptr [edi]
#define ADC_DI_FROM_PTR_ESI adc di, word ptr [esi]
#define ADC_DI_FROM_PTR_EBP adc di, word ptr [ebp]
#define ADC_DI_FROM_PTR_ESP adc di, word ptr [esp]

#define ADC_SI_FROM_PTR_RAX adc si, word ptr [rax]
#define ADC_SI_FROM_PTR_RBX adc si, word ptr [rbx]
#define ADC_SI_FROM_PTR_RCX adc si, word ptr [rcx]
#define ADC_SI_FROM_PTR_RDX adc si, word ptr [rdx]
#define ADC_SI_FROM_PTR_RDI adc si, word ptr [rdi]
#define ADC_SI_FROM_PTR_RSI adc si, word ptr [rsi]
#define ADC_SI_FROM_PTR_RBP adc si, word ptr [rbp]
#define ADC_SI_FROM_PTR_RSP adc si, word ptr [rsp]
#define ADC_SI_FROM_PTR_R8 adc si, word ptr [r8]
#define ADC_SI_FROM_PTR_R9 adc si, word ptr [r9]
#define ADC_SI_FROM_PTR_R10 adc si, word ptr [r10]
#define ADC_SI_FROM_PTR_R11 adc si, word ptr [r11]
#define ADC_SI_FROM_PTR_R12 adc si, word ptr [r12]
#define ADC_SI_FROM_PTR_R13 adc si, word ptr [r13]
#define ADC_SI_FROM_PTR_R14 adc si, word ptr [r14]
#define ADC_SI_FROM_PTR_R15 adc si, word ptr [r15]
#define ADC_SI_FROM_PTR_EAX adc si, word ptr [eax]
#define ADC_SI_FROM_PTR_EBX adc si, word ptr [ebx]
#define ADC_SI_FROM_PTR_ECX adc si, word ptr [ecx]
#define ADC_SI_FROM_PTR_EDX adc si, word ptr [edx]
#define ADC_SI_FROM_PTR_EDI adc si, word ptr [edi]
#define ADC_SI_FROM_PTR_ESI adc si, word ptr [esi]
#define ADC_SI_FROM_PTR_EBP adc si, word ptr [ebp]
#define ADC_SI_FROM_PTR_ESP adc si, word ptr [esp]

#define ADC_BP_FROM_PTR_RAX adc bp, word ptr [rax]
#define ADC_BP_FROM_PTR_RBX adc bp, word ptr [rbx]
#define ADC_BP_FROM_PTR_RCX adc bp, word ptr [rcx]
#define ADC_BP_FROM_PTR_RDX adc bp, word ptr [rdx]
#define ADC_BP_FROM_PTR_RDI adc bp, word ptr [rdi]
#define ADC_BP_FROM_PTR_RSI adc bp, word ptr [rsi]
#define ADC_BP_FROM_PTR_RBP adc bp, word ptr [rbp]
#define ADC_BP_FROM_PTR_RSP adc bp, word ptr [rsp]
#define ADC_BP_FROM_PTR_R8 adc bp, word ptr [r8]
#define ADC_BP_FROM_PTR_R9 adc bp, word ptr [r9]
#define ADC_BP_FROM_PTR_R10 adc bp, word ptr [r10]
#define ADC_BP_FROM_PTR_R11 adc bp, word ptr [r11]
#define ADC_BP_FROM_PTR_R12 adc bp, word ptr [r12]
#define ADC_BP_FROM_PTR_R13 adc bp, word ptr [r13]
#define ADC_BP_FROM_PTR_R14 adc bp, word ptr [r14]
#define ADC_BP_FROM_PTR_R15 adc bp, word ptr [r15]
#define ADC_BP_FROM_PTR_EAX adc bp, word ptr [eax]
#define ADC_BP_FROM_PTR_EBX adc bp, word ptr [ebx]
#define ADC_BP_FROM_PTR_ECX adc bp, word ptr [ecx]
#define ADC_BP_FROM_PTR_EDX adc bp, word ptr [edx]
#define ADC_BP_FROM_PTR_EDI adc bp, word ptr [edi]
#define ADC_BP_FROM_PTR_ESI adc bp, word ptr [esi]
#define ADC_BP_FROM_PTR_EBP adc bp, word ptr [ebp]
#define ADC_BP_FROM_PTR_ESP adc bp, word ptr [esp]

#define ADC_SP_FROM_PTR_RAX adc sp, word ptr [rax]
#define ADC_SP_FROM_PTR_RBX adc sp, word ptr [rbx]
#define ADC_SP_FROM_PTR_RCX adc sp, word ptr [rcx]
#define ADC_SP_FROM_PTR_RDX adc sp, word ptr [rdx]
#define ADC_SP_FROM_PTR_RDI adc sp, word ptr [rdi]
#define ADC_SP_FROM_PTR_RSI adc sp, word ptr [rsi]
#define ADC_SP_FROM_PTR_RBP adc sp, word ptr [rbp]
#define ADC_SP_FROM_PTR_RSP adc sp, word ptr [rsp]
#define ADC_SP_FROM_PTR_R8 adc sp, word ptr [r8]
#define ADC_SP_FROM_PTR_R9 adc sp, word ptr [r9]
#define ADC_SP_FROM_PTR_R10 adc sp, word ptr [r10]
#define ADC_SP_FROM_PTR_R11 adc sp, word ptr [r11]
#define ADC_SP_FROM_PTR_R12 adc sp, word ptr [r12]
#define ADC_SP_FROM_PTR_R13 adc sp, word ptr [r13]
#define ADC_SP_FROM_PTR_R14 adc sp, word ptr [r14]
#define ADC_SP_FROM_PTR_R15 adc sp, word ptr [r15]
#define ADC_SP_FROM_PTR_EAX adc sp, word ptr [eax]
#define ADC_SP_FROM_PTR_EBX adc sp, word ptr [ebx]
#define ADC_SP_FROM_PTR_ECX adc sp, word ptr [ecx]
#define ADC_SP_FROM_PTR_EDX adc sp, word ptr [edx]
#define ADC_SP_FROM_PTR_EDI adc sp, word ptr [edi]
#define ADC_SP_FROM_PTR_ESI adc sp, word ptr [esi]
#define ADC_SP_FROM_PTR_EBP adc sp, word ptr [ebp]
#define ADC_SP_FROM_PTR_ESP adc sp, word ptr [esp]

#define ADC_R8W_FROM_PTR_RAX adc r8w, word ptr [rax]
#define ADC_R8W_FROM_PTR_RBX adc r8w, word ptr [rbx]
#define ADC_R8W_FROM_PTR_RCX adc r8w, word ptr [rcx]
#define ADC_R8W_FROM_PTR_RDX adc r8w, word ptr [rdx]
#define ADC_R8W_FROM_PTR_RDI adc r8w, word ptr [rdi]
#define ADC_R8W_FROM_PTR_RSI adc r8w, word ptr [rsi]
#define ADC_R8W_FROM_PTR_RBP adc r8w, word ptr [rbp]
#define ADC_R8W_FROM_PTR_RSP adc r8w, word ptr [rsp]
#define ADC_R8W_FROM_PTR_R8 adc r8w, word ptr [r8]
#define ADC_R8W_FROM_PTR_R9 adc r8w, word ptr [r9]
#define ADC_R8W_FROM_PTR_R10 adc r8w, word ptr [r10]
#define ADC_R8W_FROM_PTR_R11 adc r8w, word ptr [r11]
#define ADC_R8W_FROM_PTR_R12 adc r8w, word ptr [r12]
#define ADC_R8W_FROM_PTR_R13 adc r8w, word ptr [r13]
#define ADC_R8W_FROM_PTR_R14 adc r8w, word ptr [r14]
#define ADC_R8W_FROM_PTR_R15 adc r8w, word ptr [r15]
#define ADC_R8W_FROM_PTR_EAX adc r8w, word ptr [eax]
#define ADC_R8W_FROM_PTR_EBX adc r8w, word ptr [ebx]
#define ADC_R8W_FROM_PTR_ECX adc r8w, word ptr [ecx]
#define ADC_R8W_FROM_PTR_EDX adc r8w, word ptr [edx]
#define ADC_R8W_FROM_PTR_EDI adc r8w, word ptr [edi]
#define ADC_R8W_FROM_PTR_ESI adc r8w, word ptr [esi]
#define ADC_R8W_FROM_PTR_EBP adc r8w, word ptr [ebp]
#define ADC_R8W_FROM_PTR_ESP adc r8w, word ptr [esp]

#define ADC_R9W_FROM_PTR_RAX adc r9w, word ptr [rax]
#define ADC_R9W_FROM_PTR_RBX adc r9w, word ptr [rbx]
#define ADC_R9W_FROM_PTR_RCX adc r9w, word ptr [rcx]
#define ADC_R9W_FROM_PTR_RDX adc r9w, word ptr [rdx]
#define ADC_R9W_FROM_PTR_RDI adc r9w, word ptr [rdi]
#define ADC_R9W_FROM_PTR_RSI adc r9w, word ptr [rsi]
#define ADC_R9W_FROM_PTR_RBP adc r9w, word ptr [rbp]
#define ADC_R9W_FROM_PTR_RSP adc r9w, word ptr [rsp]
#define ADC_R9W_FROM_PTR_R8 adc r9w, word ptr [r8]
#define ADC_R9W_FROM_PTR_R9 adc r9w, word ptr [r9]
#define ADC_R9W_FROM_PTR_R10 adc r9w, word ptr [r10]
#define ADC_R9W_FROM_PTR_R11 adc r9w, word ptr [r11]
#define ADC_R9W_FROM_PTR_R12 adc r9w, word ptr [r12]
#define ADC_R9W_FROM_PTR_R13 adc r9w, word ptr [r13]
#define ADC_R9W_FROM_PTR_R14 adc r9w, word ptr [r14]
#define ADC_R9W_FROM_PTR_R15 adc r9w, word ptr [r15]
#define ADC_R9W_FROM_PTR_EAX adc r9w, word ptr [eax]
#define ADC_R9W_FROM_PTR_EBX adc r9w, word ptr [ebx]
#define ADC_R9W_FROM_PTR_ECX adc r9w, word ptr [ecx]
#define ADC_R9W_FROM_PTR_EDX adc r9w, word ptr [edx]
#define ADC_R9W_FROM_PTR_EDI adc r9w, word ptr [edi]
#define ADC_R9W_FROM_PTR_ESI adc r9w, word ptr [esi]
#define ADC_R9W_FROM_PTR_EBP adc r9w, word ptr [ebp]
#define ADC_R9W_FROM_PTR_ESP adc r9w, word ptr [esp]

#define ADC_R10W_FROM_PTR_RAX adc r10w, word ptr [rax]
#define ADC_R10W_FROM_PTR_RBX adc r10w, word ptr [rbx]
#define ADC_R10W_FROM_PTR_RCX adc r10w, word ptr [rcx]
#define ADC_R10W_FROM_PTR_RDX adc r10w, word ptr [rdx]
#define ADC_R10W_FROM_PTR_RDI adc r10w, word ptr [rdi]
#define ADC_R10W_FROM_PTR_RSI adc r10w, word ptr [rsi]
#define ADC_R10W_FROM_PTR_RBP adc r10w, word ptr [rbp]
#define ADC_R10W_FROM_PTR_RSP adc r10w, word ptr [rsp]
#define ADC_R10W_FROM_PTR_R8 adc r10w, word ptr [r8]
#define ADC_R10W_FROM_PTR_R9 adc r10w, word ptr [r9]
#define ADC_R10W_FROM_PTR_R10 adc r10w, word ptr [r10]
#define ADC_R10W_FROM_PTR_R11 adc r10w, word ptr [r11]
#define ADC_R10W_FROM_PTR_R12 adc r10w, word ptr [r12]
#define ADC_R10W_FROM_PTR_R13 adc r10w, word ptr [r13]
#define ADC_R10W_FROM_PTR_R14 adc r10w, word ptr [r14]
#define ADC_R10W_FROM_PTR_R15 adc r10w, word ptr [r15]
#define ADC_R10W_FROM_PTR_EAX adc r10w, word ptr [eax]
#define ADC_R10W_FROM_PTR_EBX adc r10w, word ptr [ebx]
#define ADC_R10W_FROM_PTR_ECX adc r10w, word ptr [ecx]
#define ADC_R10W_FROM_PTR_EDX adc r10w, word ptr [edx]
#define ADC_R10W_FROM_PTR_EDI adc r10w, word ptr [edi]
#define ADC_R10W_FROM_PTR_ESI adc r10w, word ptr [esi]
#define ADC_R10W_FROM_PTR_EBP adc r10w, word ptr [ebp]
#define ADC_R10W_FROM_PTR_ESP adc r10w, word ptr [esp]

#define ADC_R11W_FROM_PTR_RAX adc r11w, word ptr [rax]
#define ADC_R11W_FROM_PTR_RBX adc r11w, word ptr [rbx]
#define ADC_R11W_FROM_PTR_RCX adc r11w, word ptr [rcx]
#define ADC_R11W_FROM_PTR_RDX adc r11w, word ptr [rdx]
#define ADC_R11W_FROM_PTR_RDI adc r11w, word ptr [rdi]
#define ADC_R11W_FROM_PTR_RSI adc r11w, word ptr [rsi]
#define ADC_R11W_FROM_PTR_RBP adc r11w, word ptr [rbp]
#define ADC_R11W_FROM_PTR_RSP adc r11w, word ptr [rsp]
#define ADC_R11W_FROM_PTR_R8 adc r11w, word ptr [r8]
#define ADC_R11W_FROM_PTR_R9 adc r11w, word ptr [r9]
#define ADC_R11W_FROM_PTR_R10 adc r11w, word ptr [r10]
#define ADC_R11W_FROM_PTR_R11 adc r11w, word ptr [r11]
#define ADC_R11W_FROM_PTR_R12 adc r11w, word ptr [r12]
#define ADC_R11W_FROM_PTR_R13 adc r11w, word ptr [r13]
#define ADC_R11W_FROM_PTR_R14 adc r11w, word ptr [r14]
#define ADC_R11W_FROM_PTR_R15 adc r11w, word ptr [r15]
#define ADC_R11W_FROM_PTR_EAX adc r11w, word ptr [eax]
#define ADC_R11W_FROM_PTR_EBX adc r11w, word ptr [ebx]
#define ADC_R11W_FROM_PTR_ECX adc r11w, word ptr [ecx]
#define ADC_R11W_FROM_PTR_EDX adc r11w, word ptr [edx]
#define ADC_R11W_FROM_PTR_EDI adc r11w, word ptr [edi]
#define ADC_R11W_FROM_PTR_ESI adc r11w, word ptr [esi]
#define ADC_R11W_FROM_PTR_EBP adc r11w, word ptr [ebp]
#define ADC_R11W_FROM_PTR_ESP adc r11w, word ptr [esp]

#define ADC_R12W_FROM_PTR_RAX adc r12w, word ptr [rax]
#define ADC_R12W_FROM_PTR_RBX adc r12w, word ptr [rbx]
#define ADC_R12W_FROM_PTR_RCX adc r12w, word ptr [rcx]
#define ADC_R12W_FROM_PTR_RDX adc r12w, word ptr [rdx]
#define ADC_R12W_FROM_PTR_RDI adc r12w, word ptr [rdi]
#define ADC_R12W_FROM_PTR_RSI adc r12w, word ptr [rsi]
#define ADC_R12W_FROM_PTR_RBP adc r12w, word ptr [rbp]
#define ADC_R12W_FROM_PTR_RSP adc r12w, word ptr [rsp]
#define ADC_R12W_FROM_PTR_R8 adc r12w, word ptr [r8]
#define ADC_R12W_FROM_PTR_R9 adc r12w, word ptr [r9]
#define ADC_R12W_FROM_PTR_R10 adc r12w, word ptr [r10]
#define ADC_R12W_FROM_PTR_R11 adc r12w, word ptr [r11]
#define ADC_R12W_FROM_PTR_R12 adc r12w, word ptr [r12]
#define ADC_R12W_FROM_PTR_R13 adc r12w, word ptr [r13]
#define ADC_R12W_FROM_PTR_R14 adc r12w, word ptr [r14]
#define ADC_R12W_FROM_PTR_R15 adc r12w, word ptr [r15]
#define ADC_R12W_FROM_PTR_EAX adc r12w, word ptr [eax]
#define ADC_R12W_FROM_PTR_EBX adc r12w, word ptr [ebx]
#define ADC_R12W_FROM_PTR_ECX adc r12w, word ptr [ecx]
#define ADC_R12W_FROM_PTR_EDX adc r12w, word ptr [edx]
#define ADC_R12W_FROM_PTR_EDI adc r12w, word ptr [edi]
#define ADC_R12W_FROM_PTR_ESI adc r12w, word ptr [esi]
#define ADC_R12W_FROM_PTR_EBP adc r12w, word ptr [ebp]
#define ADC_R12W_FROM_PTR_ESP adc r12w, word ptr [esp]

#define ADC_R13W_FROM_PTR_RAX adc r13w, word ptr [rax]
#define ADC_R13W_FROM_PTR_RBX adc r13w, word ptr [rbx]
#define ADC_R13W_FROM_PTR_RCX adc r13w, word ptr [rcx]
#define ADC_R13W_FROM_PTR_RDX adc r13w, word ptr [rdx]
#define ADC_R13W_FROM_PTR_RDI adc r13w, word ptr [rdi]
#define ADC_R13W_FROM_PTR_RSI adc r13w, word ptr [rsi]
#define ADC_R13W_FROM_PTR_RBP adc r13w, word ptr [rbp]
#define ADC_R13W_FROM_PTR_RSP adc r13w, word ptr [rsp]
#define ADC_R13W_FROM_PTR_R8 adc r13w, word ptr [r8]
#define ADC_R13W_FROM_PTR_R9 adc r13w, word ptr [r9]
#define ADC_R13W_FROM_PTR_R10 adc r13w, word ptr [r10]
#define ADC_R13W_FROM_PTR_R11 adc r13w, word ptr [r11]
#define ADC_R13W_FROM_PTR_R12 adc r13w, word ptr [r12]
#define ADC_R13W_FROM_PTR_R13 adc r13w, word ptr [r13]
#define ADC_R13W_FROM_PTR_R14 adc r13w, word ptr [r14]
#define ADC_R13W_FROM_PTR_R15 adc r13w, word ptr [r15]
#define ADC_R13W_FROM_PTR_EAX adc r13w, word ptr [eax]
#define ADC_R13W_FROM_PTR_EBX adc r13w, word ptr [ebx]
#define ADC_R13W_FROM_PTR_ECX adc r13w, word ptr [ecx]
#define ADC_R13W_FROM_PTR_EDX adc r13w, word ptr [edx]
#define ADC_R13W_FROM_PTR_EDI adc r13w, word ptr [edi]
#define ADC_R13W_FROM_PTR_ESI adc r13w, word ptr [esi]
#define ADC_R13W_FROM_PTR_EBP adc r13w, word ptr [ebp]
#define ADC_R13W_FROM_PTR_ESP adc r13w, word ptr [esp]

#define ADC_R14W_FROM_PTR_RAX adc r14w, word ptr [rax]
#define ADC_R14W_FROM_PTR_RBX adc r14w, word ptr [rbx]
#define ADC_R14W_FROM_PTR_RCX adc r14w, word ptr [rcx]
#define ADC_R14W_FROM_PTR_RDX adc r14w, word ptr [rdx]
#define ADC_R14W_FROM_PTR_RDI adc r14w, word ptr [rdi]
#define ADC_R14W_FROM_PTR_RSI adc r14w, word ptr [rsi]
#define ADC_R14W_FROM_PTR_RBP adc r14w, word ptr [rbp]
#define ADC_R14W_FROM_PTR_RSP adc r14w, word ptr [rsp]
#define ADC_R14W_FROM_PTR_R8 adc r14w, word ptr [r8]
#define ADC_R14W_FROM_PTR_R9 adc r14w, word ptr [r9]
#define ADC_R14W_FROM_PTR_R10 adc r14w, word ptr [r10]
#define ADC_R14W_FROM_PTR_R11 adc r14w, word ptr [r11]
#define ADC_R14W_FROM_PTR_R12 adc r14w, word ptr [r12]
#define ADC_R14W_FROM_PTR_R13 adc r14w, word ptr [r13]
#define ADC_R14W_FROM_PTR_R14 adc r14w, word ptr [r14]
#define ADC_R14W_FROM_PTR_R15 adc r14w, word ptr [r15]
#define ADC_R14W_FROM_PTR_EAX adc r14w, word ptr [eax]
#define ADC_R14W_FROM_PTR_EBX adc r14w, word ptr [ebx]
#define ADC_R14W_FROM_PTR_ECX adc r14w, word ptr [ecx]
#define ADC_R14W_FROM_PTR_EDX adc r14w, word ptr [edx]
#define ADC_R14W_FROM_PTR_EDI adc r14w, word ptr [edi]
#define ADC_R14W_FROM_PTR_ESI adc r14w, word ptr [esi]
#define ADC_R14W_FROM_PTR_EBP adc r14w, word ptr [ebp]
#define ADC_R14W_FROM_PTR_ESP adc r14w, word ptr [esp]

#define ADC_R15W_FROM_PTR_RAX adc r15w, word ptr [rax]
#define ADC_R15W_FROM_PTR_RBX adc r15w, word ptr [rbx]
#define ADC_R15W_FROM_PTR_RCX adc r15w, word ptr [rcx]
#define ADC_R15W_FROM_PTR_RDX adc r15w, word ptr [rdx]
#define ADC_R15W_FROM_PTR_RDI adc r15w, word ptr [rdi]
#define ADC_R15W_FROM_PTR_RSI adc r15w, word ptr [rsi]
#define ADC_R15W_FROM_PTR_RBP adc r15w, word ptr [rbp]
#define ADC_R15W_FROM_PTR_RSP adc r15w, word ptr [rsp]
#define ADC_R15W_FROM_PTR_R8 adc r15w, word ptr [r8]
#define ADC_R15W_FROM_PTR_R9 adc r15w, word ptr [r9]
#define ADC_R15W_FROM_PTR_R10 adc r15w, word ptr [r10]
#define ADC_R15W_FROM_PTR_R11 adc r15w, word ptr [r11]
#define ADC_R15W_FROM_PTR_R12 adc r15w, word ptr [r12]
#define ADC_R15W_FROM_PTR_R13 adc r15w, word ptr [r13]
#define ADC_R15W_FROM_PTR_R14 adc r15w, word ptr [r14]
#define ADC_R15W_FROM_PTR_R15 adc r15w, word ptr [r15]
#define ADC_R15W_FROM_PTR_EAX adc r15w, word ptr [eax]
#define ADC_R15W_FROM_PTR_EBX adc r15w, word ptr [ebx]
#define ADC_R15W_FROM_PTR_ECX adc r15w, word ptr [ecx]
#define ADC_R15W_FROM_PTR_EDX adc r15w, word ptr [edx]
#define ADC_R15W_FROM_PTR_EDI adc r15w, word ptr [edi]
#define ADC_R15W_FROM_PTR_ESI adc r15w, word ptr [esi]
#define ADC_R15W_FROM_PTR_EBP adc r15w, word ptr [ebp]
#define ADC_R15W_FROM_PTR_ESP adc r15w, word ptr [esp]

#define ADC_AX_TO_PTR_RAX adc word ptr [rax], ax
#define ADC_AX_TO_PTR_RBX adc word ptr [rbx], ax
#define ADC_AX_TO_PTR_RCX adc word ptr [rcx], ax
#define ADC_AX_TO_PTR_RDX adc word ptr [rdx], ax
#define ADC_AX_TO_PTR_RDI adc word ptr [rdi], ax
#define ADC_AX_TO_PTR_RSI adc word ptr [rsi], ax
#define ADC_AX_TO_PTR_RBP adc word ptr [rbp], ax
#define ADC_AX_TO_PTR_RSP adc word ptr [rsp], ax
#define ADC_AX_TO_PTR_R8 adc word ptr [r8], ax
#define ADC_AX_TO_PTR_R9 adc word ptr [r9], ax
#define ADC_AX_TO_PTR_R10 adc word ptr [r10], ax
#define ADC_AX_TO_PTR_R11 adc word ptr [r11], ax
#define ADC_AX_TO_PTR_R12 adc word ptr [r12], ax
#define ADC_AX_TO_PTR_R13 adc word ptr [r13], ax
#define ADC_AX_TO_PTR_R14 adc word ptr [r14], ax
#define ADC_AX_TO_PTR_R15 adc word ptr [r15], ax
#define ADC_AX_TO_PTR_EAX adc word ptr [eax], ax
#define ADC_AX_TO_PTR_EBX adc word ptr [ebx], ax
#define ADC_AX_TO_PTR_ECX adc word ptr [ecx], ax
#define ADC_AX_TO_PTR_EDX adc word ptr [edx], ax
#define ADC_AX_TO_PTR_EDI adc word ptr [edi], ax
#define ADC_AX_TO_PTR_ESI adc word ptr [esi], ax
#define ADC_AX_TO_PTR_EBP adc word ptr [ebp], ax
#define ADC_AX_TO_PTR_ESP adc word ptr [esp], ax

#define ADC_BX_TO_PTR_RAX adc word ptr [rax], bx
#define ADC_BX_TO_PTR_RBX adc word ptr [rbx], bx
#define ADC_BX_TO_PTR_RCX adc word ptr [rcx], bx
#define ADC_BX_TO_PTR_RDX adc word ptr [rdx], bx
#define ADC_BX_TO_PTR_RDI adc word ptr [rdi], bx
#define ADC_BX_TO_PTR_RSI adc word ptr [rsi], bx
#define ADC_BX_TO_PTR_RBP adc word ptr [rbp], bx
#define ADC_BX_TO_PTR_RSP adc word ptr [rsp], bx
#define ADC_BX_TO_PTR_R8 adc word ptr [r8], bx
#define ADC_BX_TO_PTR_R9 adc word ptr [r9], bx
#define ADC_BX_TO_PTR_R10 adc word ptr [r10], bx
#define ADC_BX_TO_PTR_R11 adc word ptr [r11], bx
#define ADC_BX_TO_PTR_R12 adc word ptr [r12], bx
#define ADC_BX_TO_PTR_R13 adc word ptr [r13], bx
#define ADC_BX_TO_PTR_R14 adc word ptr [r14], bx
#define ADC_BX_TO_PTR_R15 adc word ptr [r15], bx
#define ADC_BX_TO_PTR_EAX adc word ptr [eax], bx
#define ADC_BX_TO_PTR_EBX adc word ptr [ebx], bx
#define ADC_BX_TO_PTR_ECX adc word ptr [ecx], bx
#define ADC_BX_TO_PTR_EDX adc word ptr [edx], bx
#define ADC_BX_TO_PTR_EDI adc word ptr [edi], bx
#define ADC_BX_TO_PTR_ESI adc word ptr [esi], bx
#define ADC_BX_TO_PTR_EBP adc word ptr [ebp], bx
#define ADC_BX_TO_PTR_ESP adc word ptr [esp], bx

#define ADC_CX_TO_PTR_RAX adc word ptr [rax], cx
#define ADC_CX_TO_PTR_RBX adc word ptr [rbx], cx
#define ADC_CX_TO_PTR_RCX adc word ptr [rcx], cx
#define ADC_CX_TO_PTR_RDX adc word ptr [rdx], cx
#define ADC_CX_TO_PTR_RDI adc word ptr [rdi], cx
#define ADC_CX_TO_PTR_RSI adc word ptr [rsi], cx
#define ADC_CX_TO_PTR_RBP adc word ptr [rbp], cx
#define ADC_CX_TO_PTR_RSP adc word ptr [rsp], cx
#define ADC_CX_TO_PTR_R8 adc word ptr [r8], cx
#define ADC_CX_TO_PTR_R9 adc word ptr [r9], cx
#define ADC_CX_TO_PTR_R10 adc word ptr [r10], cx
#define ADC_CX_TO_PTR_R11 adc word ptr [r11], cx
#define ADC_CX_TO_PTR_R12 adc word ptr [r12], cx
#define ADC_CX_TO_PTR_R13 adc word ptr [r13], cx
#define ADC_CX_TO_PTR_R14 adc word ptr [r14], cx
#define ADC_CX_TO_PTR_R15 adc word ptr [r15], cx
#define ADC_CX_TO_PTR_EAX adc word ptr [eax], cx
#define ADC_CX_TO_PTR_EBX adc word ptr [ebx], cx
#define ADC_CX_TO_PTR_ECX adc word ptr [ecx], cx
#define ADC_CX_TO_PTR_EDX adc word ptr [edx], cx
#define ADC_CX_TO_PTR_EDI adc word ptr [edi], cx
#define ADC_CX_TO_PTR_ESI adc word ptr [esi], cx
#define ADC_CX_TO_PTR_EBP adc word ptr [ebp], cx
#define ADC_CX_TO_PTR_ESP adc word ptr [esp], cx

#define ADC_DX_TO_PTR_RAX adc word ptr [rax], dx
#define ADC_DX_TO_PTR_RBX adc word ptr [rbx], dx
#define ADC_DX_TO_PTR_RCX adc word ptr [rcx], dx
#define ADC_DX_TO_PTR_RDX adc word ptr [rdx], dx
#define ADC_DX_TO_PTR_RDI adc word ptr [rdi], dx
#define ADC_DX_TO_PTR_RSI adc word ptr [rsi], dx
#define ADC_DX_TO_PTR_RBP adc word ptr [rbp], dx
#define ADC_DX_TO_PTR_RSP adc word ptr [rsp], dx
#define ADC_DX_TO_PTR_R8 adc word ptr [r8], dx
#define ADC_DX_TO_PTR_R9 adc word ptr [r9], dx
#define ADC_DX_TO_PTR_R10 adc word ptr [r10], dx
#define ADC_DX_TO_PTR_R11 adc word ptr [r11], dx
#define ADC_DX_TO_PTR_R12 adc word ptr [r12], dx
#define ADC_DX_TO_PTR_R13 adc word ptr [r13], dx
#define ADC_DX_TO_PTR_R14 adc word ptr [r14], dx
#define ADC_DX_TO_PTR_R15 adc word ptr [r15], dx
#define ADC_DX_TO_PTR_EAX adc word ptr [eax], dx
#define ADC_DX_TO_PTR_EBX adc word ptr [ebx], dx
#define ADC_DX_TO_PTR_ECX adc word ptr [ecx], dx
#define ADC_DX_TO_PTR_EDX adc word ptr [edx], dx
#define ADC_DX_TO_PTR_EDI adc word ptr [edi], dx
#define ADC_DX_TO_PTR_ESI adc word ptr [esi], dx
#define ADC_DX_TO_PTR_EBP adc word ptr [ebp], dx
#define ADC_DX_TO_PTR_ESP adc word ptr [esp], dx

#define ADC_DI_TO_PTR_RAX adc word ptr [rax], di
#define ADC_DI_TO_PTR_RBX adc word ptr [rbx], di
#define ADC_DI_TO_PTR_RCX adc word ptr [rcx], di
#define ADC_DI_TO_PTR_RDX adc word ptr [rdx], di
#define ADC_DI_TO_PTR_RDI adc word ptr [rdi], di
#define ADC_DI_TO_PTR_RSI adc word ptr [rsi], di
#define ADC_DI_TO_PTR_RBP adc word ptr [rbp], di
#define ADC_DI_TO_PTR_RSP adc word ptr [rsp], di
#define ADC_DI_TO_PTR_R8 adc word ptr [r8], di
#define ADC_DI_TO_PTR_R9 adc word ptr [r9], di
#define ADC_DI_TO_PTR_R10 adc word ptr [r10], di
#define ADC_DI_TO_PTR_R11 adc word ptr [r11], di
#define ADC_DI_TO_PTR_R12 adc word ptr [r12], di
#define ADC_DI_TO_PTR_R13 adc word ptr [r13], di
#define ADC_DI_TO_PTR_R14 adc word ptr [r14], di
#define ADC_DI_TO_PTR_R15 adc word ptr [r15], di
#define ADC_DI_TO_PTR_EAX adc word ptr [eax], di
#define ADC_DI_TO_PTR_EBX adc word ptr [ebx], di
#define ADC_DI_TO_PTR_ECX adc word ptr [ecx], di
#define ADC_DI_TO_PTR_EDX adc word ptr [edx], di
#define ADC_DI_TO_PTR_EDI adc word ptr [edi], di
#define ADC_DI_TO_PTR_ESI adc word ptr [esi], di
#define ADC_DI_TO_PTR_EBP adc word ptr [ebp], di
#define ADC_DI_TO_PTR_ESP adc word ptr [esp], di

#define ADC_SI_TO_PTR_RAX adc word ptr [rax], si
#define ADC_SI_TO_PTR_RBX adc word ptr [rbx], si
#define ADC_SI_TO_PTR_RCX adc word ptr [rcx], si
#define ADC_SI_TO_PTR_RDX adc word ptr [rdx], si
#define ADC_SI_TO_PTR_RDI adc word ptr [rdi], si
#define ADC_SI_TO_PTR_RSI adc word ptr [rsi], si
#define ADC_SI_TO_PTR_RBP adc word ptr [rbp], si
#define ADC_SI_TO_PTR_RSP adc word ptr [rsp], si
#define ADC_SI_TO_PTR_R8 adc word ptr [r8], si
#define ADC_SI_TO_PTR_R9 adc word ptr [r9], si
#define ADC_SI_TO_PTR_R10 adc word ptr [r10], si
#define ADC_SI_TO_PTR_R11 adc word ptr [r11], si
#define ADC_SI_TO_PTR_R12 adc word ptr [r12], si
#define ADC_SI_TO_PTR_R13 adc word ptr [r13], si
#define ADC_SI_TO_PTR_R14 adc word ptr [r14], si
#define ADC_SI_TO_PTR_R15 adc word ptr [r15], si
#define ADC_SI_TO_PTR_EAX adc word ptr [eax], si
#define ADC_SI_TO_PTR_EBX adc word ptr [ebx], si
#define ADC_SI_TO_PTR_ECX adc word ptr [ecx], si
#define ADC_SI_TO_PTR_EDX adc word ptr [edx], si
#define ADC_SI_TO_PTR_EDI adc word ptr [edi], si
#define ADC_SI_TO_PTR_ESI adc word ptr [esi], si
#define ADC_SI_TO_PTR_EBP adc word ptr [ebp], si
#define ADC_SI_TO_PTR_ESP adc word ptr [esp], si

#define ADC_BP_TO_PTR_RAX adc word ptr [rax], bp
#define ADC_BP_TO_PTR_RBX adc word ptr [rbx], bp
#define ADC_BP_TO_PTR_RCX adc word ptr [rcx], bp
#define ADC_BP_TO_PTR_RDX adc word ptr [rdx], bp
#define ADC_BP_TO_PTR_RDI adc word ptr [rdi], bp
#define ADC_BP_TO_PTR_RSI adc word ptr [rsi], bp
#define ADC_BP_TO_PTR_RBP adc word ptr [rbp], bp
#define ADC_BP_TO_PTR_RSP adc word ptr [rsp], bp
#define ADC_BP_TO_PTR_R8 adc word ptr [r8], bp
#define ADC_BP_TO_PTR_R9 adc word ptr [r9], bp
#define ADC_BP_TO_PTR_R10 adc word ptr [r10], bp
#define ADC_BP_TO_PTR_R11 adc word ptr [r11], bp
#define ADC_BP_TO_PTR_R12 adc word ptr [r12], bp
#define ADC_BP_TO_PTR_R13 adc word ptr [r13], bp
#define ADC_BP_TO_PTR_R14 adc word ptr [r14], bp
#define ADC_BP_TO_PTR_R15 adc word ptr [r15], bp
#define ADC_BP_TO_PTR_EAX adc word ptr [eax], bp
#define ADC_BP_TO_PTR_EBX adc word ptr [ebx], bp
#define ADC_BP_TO_PTR_ECX adc word ptr [ecx], bp
#define ADC_BP_TO_PTR_EDX adc word ptr [edx], bp
#define ADC_BP_TO_PTR_EDI adc word ptr [edi], bp
#define ADC_BP_TO_PTR_ESI adc word ptr [esi], bp
#define ADC_BP_TO_PTR_EBP adc word ptr [ebp], bp
#define ADC_BP_TO_PTR_ESP adc word ptr [esp], bp

#define ADC_SP_TO_PTR_RAX adc word ptr [rax], sp
#define ADC_SP_TO_PTR_RBX adc word ptr [rbx], sp
#define ADC_SP_TO_PTR_RCX adc word ptr [rcx], sp
#define ADC_SP_TO_PTR_RDX adc word ptr [rdx], sp
#define ADC_SP_TO_PTR_RDI adc word ptr [rdi], sp
#define ADC_SP_TO_PTR_RSI adc word ptr [rsi], sp
#define ADC_SP_TO_PTR_RBP adc word ptr [rbp], sp
#define ADC_SP_TO_PTR_RSP adc word ptr [rsp], sp
#define ADC_SP_TO_PTR_R8 adc word ptr [r8], sp
#define ADC_SP_TO_PTR_R9 adc word ptr [r9], sp
#define ADC_SP_TO_PTR_R10 adc word ptr [r10], sp
#define ADC_SP_TO_PTR_R11 adc word ptr [r11], sp
#define ADC_SP_TO_PTR_R12 adc word ptr [r12], sp
#define ADC_SP_TO_PTR_R13 adc word ptr [r13], sp
#define ADC_SP_TO_PTR_R14 adc word ptr [r14], sp
#define ADC_SP_TO_PTR_R15 adc word ptr [r15], sp
#define ADC_SP_TO_PTR_EAX adc word ptr [eax], sp
#define ADC_SP_TO_PTR_EBX adc word ptr [ebx], sp
#define ADC_SP_TO_PTR_ECX adc word ptr [ecx], sp
#define ADC_SP_TO_PTR_EDX adc word ptr [edx], sp
#define ADC_SP_TO_PTR_EDI adc word ptr [edi], sp
#define ADC_SP_TO_PTR_ESI adc word ptr [esi], sp
#define ADC_SP_TO_PTR_EBP adc word ptr [ebp], sp
#define ADC_SP_TO_PTR_ESP adc word ptr [esp], sp

#define ADC_R8W_TO_PTR_RAX adc word ptr [rax], r8w
#define ADC_R8W_TO_PTR_RBX adc word ptr [rbx], r8w
#define ADC_R8W_TO_PTR_RCX adc word ptr [rcx], r8w
#define ADC_R8W_TO_PTR_RDX adc word ptr [rdx], r8w
#define ADC_R8W_TO_PTR_RDI adc word ptr [rdi], r8w
#define ADC_R8W_TO_PTR_RSI adc word ptr [rsi], r8w
#define ADC_R8W_TO_PTR_RBP adc word ptr [rbp], r8w
#define ADC_R8W_TO_PTR_RSP adc word ptr [rsp], r8w
#define ADC_R8W_TO_PTR_R8 adc word ptr [r8], r8w
#define ADC_R8W_TO_PTR_R9 adc word ptr [r9], r8w
#define ADC_R8W_TO_PTR_R10 adc word ptr [r10], r8w
#define ADC_R8W_TO_PTR_R11 adc word ptr [r11], r8w
#define ADC_R8W_TO_PTR_R12 adc word ptr [r12], r8w
#define ADC_R8W_TO_PTR_R13 adc word ptr [r13], r8w
#define ADC_R8W_TO_PTR_R14 adc word ptr [r14], r8w
#define ADC_R8W_TO_PTR_R15 adc word ptr [r15], r8w
#define ADC_R8W_TO_PTR_EAX adc word ptr [eax], r8w
#define ADC_R8W_TO_PTR_EBX adc word ptr [ebx], r8w
#define ADC_R8W_TO_PTR_ECX adc word ptr [ecx], r8w
#define ADC_R8W_TO_PTR_EDX adc word ptr [edx], r8w
#define ADC_R8W_TO_PTR_EDI adc word ptr [edi], r8w
#define ADC_R8W_TO_PTR_ESI adc word ptr [esi], r8w
#define ADC_R8W_TO_PTR_EBP adc word ptr [ebp], r8w
#define ADC_R8W_TO_PTR_ESP adc word ptr [esp], r8w

#define ADC_R9W_TO_PTR_RAX adc word ptr [rax], r9w
#define ADC_R9W_TO_PTR_RBX adc word ptr [rbx], r9w
#define ADC_R9W_TO_PTR_RCX adc word ptr [rcx], r9w
#define ADC_R9W_TO_PTR_RDX adc word ptr [rdx], r9w
#define ADC_R9W_TO_PTR_RDI adc word ptr [rdi], r9w
#define ADC_R9W_TO_PTR_RSI adc word ptr [rsi], r9w
#define ADC_R9W_TO_PTR_RBP adc word ptr [rbp], r9w
#define ADC_R9W_TO_PTR_RSP adc word ptr [rsp], r9w
#define ADC_R9W_TO_PTR_R8 adc word ptr [r8], r9w
#define ADC_R9W_TO_PTR_R9 adc word ptr [r9], r9w
#define ADC_R9W_TO_PTR_R10 adc word ptr [r10], r9w
#define ADC_R9W_TO_PTR_R11 adc word ptr [r11], r9w
#define ADC_R9W_TO_PTR_R12 adc word ptr [r12], r9w
#define ADC_R9W_TO_PTR_R13 adc word ptr [r13], r9w
#define ADC_R9W_TO_PTR_R14 adc word ptr [r14], r9w
#define ADC_R9W_TO_PTR_R15 adc word ptr [r15], r9w
#define ADC_R9W_TO_PTR_EAX adc word ptr [eax], r9w
#define ADC_R9W_TO_PTR_EBX adc word ptr [ebx], r9w
#define ADC_R9W_TO_PTR_ECX adc word ptr [ecx], r9w
#define ADC_R9W_TO_PTR_EDX adc word ptr [edx], r9w
#define ADC_R9W_TO_PTR_EDI adc word ptr [edi], r9w
#define ADC_R9W_TO_PTR_ESI adc word ptr [esi], r9w
#define ADC_R9W_TO_PTR_EBP adc word ptr [ebp], r9w
#define ADC_R9W_TO_PTR_ESP adc word ptr [esp], r9w

#define ADC_R10W_TO_PTR_RAX adc word ptr [rax], r10w
#define ADC_R10W_TO_PTR_RBX adc word ptr [rbx], r10w
#define ADC_R10W_TO_PTR_RCX adc word ptr [rcx], r10w
#define ADC_R10W_TO_PTR_RDX adc word ptr [rdx], r10w
#define ADC_R10W_TO_PTR_RDI adc word ptr [rdi], r10w
#define ADC_R10W_TO_PTR_RSI adc word ptr [rsi], r10w
#define ADC_R10W_TO_PTR_RBP adc word ptr [rbp], r10w
#define ADC_R10W_TO_PTR_RSP adc word ptr [rsp], r10w
#define ADC_R10W_TO_PTR_R8 adc word ptr [r8], r10w
#define ADC_R10W_TO_PTR_R9 adc word ptr [r9], r10w
#define ADC_R10W_TO_PTR_R10 adc word ptr [r10], r10w
#define ADC_R10W_TO_PTR_R11 adc word ptr [r11], r10w
#define ADC_R10W_TO_PTR_R12 adc word ptr [r12], r10w
#define ADC_R10W_TO_PTR_R13 adc word ptr [r13], r10w
#define ADC_R10W_TO_PTR_R14 adc word ptr [r14], r10w
#define ADC_R10W_TO_PTR_R15 adc word ptr [r15], r10w
#define ADC_R10W_TO_PTR_EAX adc word ptr [eax], r10w
#define ADC_R10W_TO_PTR_EBX adc word ptr [ebx], r10w
#define ADC_R10W_TO_PTR_ECX adc word ptr [ecx], r10w
#define ADC_R10W_TO_PTR_EDX adc word ptr [edx], r10w
#define ADC_R10W_TO_PTR_EDI adc word ptr [edi], r10w
#define ADC_R10W_TO_PTR_ESI adc word ptr [esi], r10w
#define ADC_R10W_TO_PTR_EBP adc word ptr [ebp], r10w
#define ADC_R10W_TO_PTR_ESP adc word ptr [esp], r10w

#define ADC_R11W_TO_PTR_RAX adc word ptr [rax], r11w
#define ADC_R11W_TO_PTR_RBX adc word ptr [rbx], r11w
#define ADC_R11W_TO_PTR_RCX adc word ptr [rcx], r11w
#define ADC_R11W_TO_PTR_RDX adc word ptr [rdx], r11w
#define ADC_R11W_TO_PTR_RDI adc word ptr [rdi], r11w
#define ADC_R11W_TO_PTR_RSI adc word ptr [rsi], r11w
#define ADC_R11W_TO_PTR_RBP adc word ptr [rbp], r11w
#define ADC_R11W_TO_PTR_RSP adc word ptr [rsp], r11w
#define ADC_R11W_TO_PTR_R8 adc word ptr [r8], r11w
#define ADC_R11W_TO_PTR_R9 adc word ptr [r9], r11w
#define ADC_R11W_TO_PTR_R10 adc word ptr [r10], r11w
#define ADC_R11W_TO_PTR_R11 adc word ptr [r11], r11w
#define ADC_R11W_TO_PTR_R12 adc word ptr [r12], r11w
#define ADC_R11W_TO_PTR_R13 adc word ptr [r13], r11w
#define ADC_R11W_TO_PTR_R14 adc word ptr [r14], r11w
#define ADC_R11W_TO_PTR_R15 adc word ptr [r15], r11w
#define ADC_R11W_TO_PTR_EAX adc word ptr [eax], r11w
#define ADC_R11W_TO_PTR_EBX adc word ptr [ebx], r11w
#define ADC_R11W_TO_PTR_ECX adc word ptr [ecx], r11w
#define ADC_R11W_TO_PTR_EDX adc word ptr [edx], r11w
#define ADC_R11W_TO_PTR_EDI adc word ptr [edi], r11w
#define ADC_R11W_TO_PTR_ESI adc word ptr [esi], r11w
#define ADC_R11W_TO_PTR_EBP adc word ptr [ebp], r11w
#define ADC_R11W_TO_PTR_ESP adc word ptr [esp], r11w

#define ADC_R12W_TO_PTR_RAX adc word ptr [rax], r12w
#define ADC_R12W_TO_PTR_RBX adc word ptr [rbx], r12w
#define ADC_R12W_TO_PTR_RCX adc word ptr [rcx], r12w
#define ADC_R12W_TO_PTR_RDX adc word ptr [rdx], r12w
#define ADC_R12W_TO_PTR_RDI adc word ptr [rdi], r12w
#define ADC_R12W_TO_PTR_RSI adc word ptr [rsi], r12w
#define ADC_R12W_TO_PTR_RBP adc word ptr [rbp], r12w
#define ADC_R12W_TO_PTR_RSP adc word ptr [rsp], r12w
#define ADC_R12W_TO_PTR_R8 adc word ptr [r8], r12w
#define ADC_R12W_TO_PTR_R9 adc word ptr [r9], r12w
#define ADC_R12W_TO_PTR_R10 adc word ptr [r10], r12w
#define ADC_R12W_TO_PTR_R11 adc word ptr [r11], r12w
#define ADC_R12W_TO_PTR_R12 adc word ptr [r12], r12w
#define ADC_R12W_TO_PTR_R13 adc word ptr [r13], r12w
#define ADC_R12W_TO_PTR_R14 adc word ptr [r14], r12w
#define ADC_R12W_TO_PTR_R15 adc word ptr [r15], r12w
#define ADC_R12W_TO_PTR_EAX adc word ptr [eax], r12w
#define ADC_R12W_TO_PTR_EBX adc word ptr [ebx], r12w
#define ADC_R12W_TO_PTR_ECX adc word ptr [ecx], r12w
#define ADC_R12W_TO_PTR_EDX adc word ptr [edx], r12w
#define ADC_R12W_TO_PTR_EDI adc word ptr [edi], r12w
#define ADC_R12W_TO_PTR_ESI adc word ptr [esi], r12w
#define ADC_R12W_TO_PTR_EBP adc word ptr [ebp], r12w
#define ADC_R12W_TO_PTR_ESP adc word ptr [esp], r12w

#define ADC_R13W_TO_PTR_RAX adc word ptr [rax], r13w
#define ADC_R13W_TO_PTR_RBX adc word ptr [rbx], r13w
#define ADC_R13W_TO_PTR_RCX adc word ptr [rcx], r13w
#define ADC_R13W_TO_PTR_RDX adc word ptr [rdx], r13w
#define ADC_R13W_TO_PTR_RDI adc word ptr [rdi], r13w
#define ADC_R13W_TO_PTR_RSI adc word ptr [rsi], r13w
#define ADC_R13W_TO_PTR_RBP adc word ptr [rbp], r13w
#define ADC_R13W_TO_PTR_RSP adc word ptr [rsp], r13w
#define ADC_R13W_TO_PTR_R8 adc word ptr [r8], r13w
#define ADC_R13W_TO_PTR_R9 adc word ptr [r9], r13w
#define ADC_R13W_TO_PTR_R10 adc word ptr [r10], r13w
#define ADC_R13W_TO_PTR_R11 adc word ptr [r11], r13w
#define ADC_R13W_TO_PTR_R12 adc word ptr [r12], r13w
#define ADC_R13W_TO_PTR_R13 adc word ptr [r13], r13w
#define ADC_R13W_TO_PTR_R14 adc word ptr [r14], r13w
#define ADC_R13W_TO_PTR_R15 adc word ptr [r15], r13w
#define ADC_R13W_TO_PTR_EAX adc word ptr [eax], r13w
#define ADC_R13W_TO_PTR_EBX adc word ptr [ebx], r13w
#define ADC_R13W_TO_PTR_ECX adc word ptr [ecx], r13w
#define ADC_R13W_TO_PTR_EDX adc word ptr [edx], r13w
#define ADC_R13W_TO_PTR_EDI adc word ptr [edi], r13w
#define ADC_R13W_TO_PTR_ESI adc word ptr [esi], r13w
#define ADC_R13W_TO_PTR_EBP adc word ptr [ebp], r13w
#define ADC_R13W_TO_PTR_ESP adc word ptr [esp], r13w

#define ADC_R14W_TO_PTR_RAX adc word ptr [rax], r14w
#define ADC_R14W_TO_PTR_RBX adc word ptr [rbx], r14w
#define ADC_R14W_TO_PTR_RCX adc word ptr [rcx], r14w
#define ADC_R14W_TO_PTR_RDX adc word ptr [rdx], r14w
#define ADC_R14W_TO_PTR_RDI adc word ptr [rdi], r14w
#define ADC_R14W_TO_PTR_RSI adc word ptr [rsi], r14w
#define ADC_R14W_TO_PTR_RBP adc word ptr [rbp], r14w
#define ADC_R14W_TO_PTR_RSP adc word ptr [rsp], r14w
#define ADC_R14W_TO_PTR_R8 adc word ptr [r8], r14w
#define ADC_R14W_TO_PTR_R9 adc word ptr [r9], r14w
#define ADC_R14W_TO_PTR_R10 adc word ptr [r10], r14w
#define ADC_R14W_TO_PTR_R11 adc word ptr [r11], r14w
#define ADC_R14W_TO_PTR_R12 adc word ptr [r12], r14w
#define ADC_R14W_TO_PTR_R13 adc word ptr [r13], r14w
#define ADC_R14W_TO_PTR_R14 adc word ptr [r14], r14w
#define ADC_R14W_TO_PTR_R15 adc word ptr [r15], r14w
#define ADC_R14W_TO_PTR_EAX adc word ptr [eax], r14w
#define ADC_R14W_TO_PTR_EBX adc word ptr [ebx], r14w
#define ADC_R14W_TO_PTR_ECX adc word ptr [ecx], r14w
#define ADC_R14W_TO_PTR_EDX adc word ptr [edx], r14w
#define ADC_R14W_TO_PTR_EDI adc word ptr [edi], r14w
#define ADC_R14W_TO_PTR_ESI adc word ptr [esi], r14w
#define ADC_R14W_TO_PTR_EBP adc word ptr [ebp], r14w
#define ADC_R14W_TO_PTR_ESP adc word ptr [esp], r14w

#define ADC_R15W_TO_PTR_RAX adc word ptr [rax], r15w
#define ADC_R15W_TO_PTR_RBX adc word ptr [rbx], r15w
#define ADC_R15W_TO_PTR_RCX adc word ptr [rcx], r15w
#define ADC_R15W_TO_PTR_RDX adc word ptr [rdx], r15w
#define ADC_R15W_TO_PTR_RDI adc word ptr [rdi], r15w
#define ADC_R15W_TO_PTR_RSI adc word ptr [rsi], r15w
#define ADC_R15W_TO_PTR_RBP adc word ptr [rbp], r15w
#define ADC_R15W_TO_PTR_RSP adc word ptr [rsp], r15w
#define ADC_R15W_TO_PTR_R8 adc word ptr [r8], r15w
#define ADC_R15W_TO_PTR_R9 adc word ptr [r9], r15w
#define ADC_R15W_TO_PTR_R10 adc word ptr [r10], r15w
#define ADC_R15W_TO_PTR_R11 adc word ptr [r11], r15w
#define ADC_R15W_TO_PTR_R12 adc word ptr [r12], r15w
#define ADC_R15W_TO_PTR_R13 adc word ptr [r13], r15w
#define ADC_R15W_TO_PTR_R14 adc word ptr [r14], r15w
#define ADC_R15W_TO_PTR_R15 adc word ptr [r15], r15w
#define ADC_R15W_TO_PTR_EAX adc word ptr [eax], r15w
#define ADC_R15W_TO_PTR_EBX adc word ptr [ebx], r15w
#define ADC_R15W_TO_PTR_ECX adc word ptr [ecx], r15w
#define ADC_R15W_TO_PTR_EDX adc word ptr [edx], r15w
#define ADC_R15W_TO_PTR_EDI adc word ptr [edi], r15w
#define ADC_R15W_TO_PTR_ESI adc word ptr [esi], r15w
#define ADC_R15W_TO_PTR_EBP adc word ptr [ebp], r15w
#define ADC_R15W_TO_PTR_ESP adc word ptr [esp], r15w

#define ADC_AX_FROM_PTR_RAX_(VALUE) adc ax, word ptr [rax + VALUE]
#define ADC_AX_FROM_PTR_RBX_(VALUE) adc ax, word ptr [rbx + VALUE]
#define ADC_AX_FROM_PTR_RCX_(VALUE) adc ax, word ptr [rcx + VALUE]
#define ADC_AX_FROM_PTR_RDX_(VALUE) adc ax, word ptr [rdx + VALUE]
#define ADC_AX_FROM_PTR_RDI_(VALUE) adc ax, word ptr [rdi + VALUE]
#define ADC_AX_FROM_PTR_RSI_(VALUE) adc ax, word ptr [rsi + VALUE]
#define ADC_AX_FROM_PTR_RBP_(VALUE) adc ax, word ptr [rbp + VALUE]
#define ADC_AX_FROM_PTR_RSP_(VALUE) adc ax, word ptr [rsp + VALUE]
#define ADC_AX_FROM_PTR_R8_(VALUE) adc ax, word ptr [r8 + VALUE]
#define ADC_AX_FROM_PTR_R9_(VALUE) adc ax, word ptr [r9 + VALUE]
#define ADC_AX_FROM_PTR_R10_(VALUE) adc ax, word ptr [r10 + VALUE]
#define ADC_AX_FROM_PTR_R11_(VALUE) adc ax, word ptr [r11 + VALUE]
#define ADC_AX_FROM_PTR_R12_(VALUE) adc ax, word ptr [r12 + VALUE]
#define ADC_AX_FROM_PTR_R13_(VALUE) adc ax, word ptr [r13 + VALUE]
#define ADC_AX_FROM_PTR_R14_(VALUE) adc ax, word ptr [r14 + VALUE]
#define ADC_AX_FROM_PTR_R15_(VALUE) adc ax, word ptr [r15 + VALUE]
#define ADC_AX_FROM_PTR_EAX_(VALUE) adc ax, word ptr [eax + VALUE]
#define ADC_AX_FROM_PTR_EBX_(VALUE) adc ax, word ptr [ebx + VALUE]
#define ADC_AX_FROM_PTR_ECX_(VALUE) adc ax, word ptr [ecx + VALUE]
#define ADC_AX_FROM_PTR_EDX_(VALUE) adc ax, word ptr [edx + VALUE]
#define ADC_AX_FROM_PTR_EDI_(VALUE) adc ax, word ptr [edi + VALUE]
#define ADC_AX_FROM_PTR_ESI_(VALUE) adc ax, word ptr [esi + VALUE]
#define ADC_AX_FROM_PTR_EBP_(VALUE) adc ax, word ptr [ebp + VALUE]
#define ADC_AX_FROM_PTR_ESP_(VALUE) adc ax, word ptr [esp + VALUE]

#define ADC_BX_FROM_PTR_RAX_(VALUE) adc bx, word ptr [rax + VALUE]
#define ADC_BX_FROM_PTR_RBX_(VALUE) adc bx, word ptr [rbx + VALUE]
#define ADC_BX_FROM_PTR_RCX_(VALUE) adc bx, word ptr [rcx + VALUE]
#define ADC_BX_FROM_PTR_RDX_(VALUE) adc bx, word ptr [rdx + VALUE]
#define ADC_BX_FROM_PTR_RDI_(VALUE) adc bx, word ptr [rdi + VALUE]
#define ADC_BX_FROM_PTR_RSI_(VALUE) adc bx, word ptr [rsi + VALUE]
#define ADC_BX_FROM_PTR_RBP_(VALUE) adc bx, word ptr [rbp + VALUE]
#define ADC_BX_FROM_PTR_RSP_(VALUE) adc bx, word ptr [rsp + VALUE]
#define ADC_BX_FROM_PTR_R8_(VALUE) adc bx, word ptr [r8 + VALUE]
#define ADC_BX_FROM_PTR_R9_(VALUE) adc bx, word ptr [r9 + VALUE]
#define ADC_BX_FROM_PTR_R10_(VALUE) adc bx, word ptr [r10 + VALUE]
#define ADC_BX_FROM_PTR_R11_(VALUE) adc bx, word ptr [r11 + VALUE]
#define ADC_BX_FROM_PTR_R12_(VALUE) adc bx, word ptr [r12 + VALUE]
#define ADC_BX_FROM_PTR_R13_(VALUE) adc bx, word ptr [r13 + VALUE]
#define ADC_BX_FROM_PTR_R14_(VALUE) adc bx, word ptr [r14 + VALUE]
#define ADC_BX_FROM_PTR_R15_(VALUE) adc bx, word ptr [r15 + VALUE]
#define ADC_BX_FROM_PTR_EAX_(VALUE) adc bx, word ptr [eax + VALUE]
#define ADC_BX_FROM_PTR_EBX_(VALUE) adc bx, word ptr [ebx + VALUE]
#define ADC_BX_FROM_PTR_ECX_(VALUE) adc bx, word ptr [ecx + VALUE]
#define ADC_BX_FROM_PTR_EDX_(VALUE) adc bx, word ptr [edx + VALUE]
#define ADC_BX_FROM_PTR_EDI_(VALUE) adc bx, word ptr [edi + VALUE]
#define ADC_BX_FROM_PTR_ESI_(VALUE) adc bx, word ptr [esi + VALUE]
#define ADC_BX_FROM_PTR_EBP_(VALUE) adc bx, word ptr [ebp + VALUE]
#define ADC_BX_FROM_PTR_ESP_(VALUE) adc bx, word ptr [esp + VALUE]

#define ADC_CX_FROM_PTR_RAX_(VALUE) adc cx, word ptr [rax + VALUE]
#define ADC_CX_FROM_PTR_RBX_(VALUE) adc cx, word ptr [rbx + VALUE]
#define ADC_CX_FROM_PTR_RCX_(VALUE) adc cx, word ptr [rcx + VALUE]
#define ADC_CX_FROM_PTR_RDX_(VALUE) adc cx, word ptr [rdx + VALUE]
#define ADC_CX_FROM_PTR_RDI_(VALUE) adc cx, word ptr [rdi + VALUE]
#define ADC_CX_FROM_PTR_RSI_(VALUE) adc cx, word ptr [rsi + VALUE]
#define ADC_CX_FROM_PTR_RBP_(VALUE) adc cx, word ptr [rbp + VALUE]
#define ADC_CX_FROM_PTR_RSP_(VALUE) adc cx, word ptr [rsp + VALUE]
#define ADC_CX_FROM_PTR_R8_(VALUE) adc cx, word ptr [r8 + VALUE]
#define ADC_CX_FROM_PTR_R9_(VALUE) adc cx, word ptr [r9 + VALUE]
#define ADC_CX_FROM_PTR_R10_(VALUE) adc cx, word ptr [r10 + VALUE]
#define ADC_CX_FROM_PTR_R11_(VALUE) adc cx, word ptr [r11 + VALUE]
#define ADC_CX_FROM_PTR_R12_(VALUE) adc cx, word ptr [r12 + VALUE]
#define ADC_CX_FROM_PTR_R13_(VALUE) adc cx, word ptr [r13 + VALUE]
#define ADC_CX_FROM_PTR_R14_(VALUE) adc cx, word ptr [r14 + VALUE]
#define ADC_CX_FROM_PTR_R15_(VALUE) adc cx, word ptr [r15 + VALUE]
#define ADC_CX_FROM_PTR_EAX_(VALUE) adc cx, word ptr [eax + VALUE]
#define ADC_CX_FROM_PTR_EBX_(VALUE) adc cx, word ptr [ebx + VALUE]
#define ADC_CX_FROM_PTR_ECX_(VALUE) adc cx, word ptr [ecx + VALUE]
#define ADC_CX_FROM_PTR_EDX_(VALUE) adc cx, word ptr [edx + VALUE]
#define ADC_CX_FROM_PTR_EDI_(VALUE) adc cx, word ptr [edi + VALUE]
#define ADC_CX_FROM_PTR_ESI_(VALUE) adc cx, word ptr [esi + VALUE]
#define ADC_CX_FROM_PTR_EBP_(VALUE) adc cx, word ptr [ebp + VALUE]
#define ADC_CX_FROM_PTR_ESP_(VALUE) adc cx, word ptr [esp + VALUE]

#define ADC_DX_FROM_PTR_RAX_(VALUE) adc dx, word ptr [rax + VALUE]
#define ADC_DX_FROM_PTR_RBX_(VALUE) adc dx, word ptr [rbx + VALUE]
#define ADC_DX_FROM_PTR_RCX_(VALUE) adc dx, word ptr [rcx + VALUE]
#define ADC_DX_FROM_PTR_RDX_(VALUE) adc dx, word ptr [rdx + VALUE]
#define ADC_DX_FROM_PTR_RDI_(VALUE) adc dx, word ptr [rdi + VALUE]
#define ADC_DX_FROM_PTR_RSI_(VALUE) adc dx, word ptr [rsi + VALUE]
#define ADC_DX_FROM_PTR_RBP_(VALUE) adc dx, word ptr [rbp + VALUE]
#define ADC_DX_FROM_PTR_RSP_(VALUE) adc dx, word ptr [rsp + VALUE]
#define ADC_DX_FROM_PTR_R8_(VALUE) adc dx, word ptr [r8 + VALUE]
#define ADC_DX_FROM_PTR_R9_(VALUE) adc dx, word ptr [r9 + VALUE]
#define ADC_DX_FROM_PTR_R10_(VALUE) adc dx, word ptr [r10 + VALUE]
#define ADC_DX_FROM_PTR_R11_(VALUE) adc dx, word ptr [r11 + VALUE]
#define ADC_DX_FROM_PTR_R12_(VALUE) adc dx, word ptr [r12 + VALUE]
#define ADC_DX_FROM_PTR_R13_(VALUE) adc dx, word ptr [r13 + VALUE]
#define ADC_DX_FROM_PTR_R14_(VALUE) adc dx, word ptr [r14 + VALUE]
#define ADC_DX_FROM_PTR_R15_(VALUE) adc dx, word ptr [r15 + VALUE]
#define ADC_DX_FROM_PTR_EAX_(VALUE) adc dx, word ptr [eax + VALUE]
#define ADC_DX_FROM_PTR_EBX_(VALUE) adc dx, word ptr [ebx + VALUE]
#define ADC_DX_FROM_PTR_ECX_(VALUE) adc dx, word ptr [ecx + VALUE]
#define ADC_DX_FROM_PTR_EDX_(VALUE) adc dx, word ptr [edx + VALUE]
#define ADC_DX_FROM_PTR_EDI_(VALUE) adc dx, word ptr [edi + VALUE]
#define ADC_DX_FROM_PTR_ESI_(VALUE) adc dx, word ptr [esi + VALUE]
#define ADC_DX_FROM_PTR_EBP_(VALUE) adc dx, word ptr [ebp + VALUE]
#define ADC_DX_FROM_PTR_ESP_(VALUE) adc dx, word ptr [esp + VALUE]

#define ADC_DI_FROM_PTR_RAX_(VALUE) adc di, word ptr [rax + VALUE]
#define ADC_DI_FROM_PTR_RBX_(VALUE) adc di, word ptr [rbx + VALUE]
#define ADC_DI_FROM_PTR_RCX_(VALUE) adc di, word ptr [rcx + VALUE]
#define ADC_DI_FROM_PTR_RDX_(VALUE) adc di, word ptr [rdx + VALUE]
#define ADC_DI_FROM_PTR_RDI_(VALUE) adc di, word ptr [rdi + VALUE]
#define ADC_DI_FROM_PTR_RSI_(VALUE) adc di, word ptr [rsi + VALUE]
#define ADC_DI_FROM_PTR_RBP_(VALUE) adc di, word ptr [rbp + VALUE]
#define ADC_DI_FROM_PTR_RSP_(VALUE) adc di, word ptr [rsp + VALUE]
#define ADC_DI_FROM_PTR_R8_(VALUE) adc di, word ptr [r8 + VALUE]
#define ADC_DI_FROM_PTR_R9_(VALUE) adc di, word ptr [r9 + VALUE]
#define ADC_DI_FROM_PTR_R10_(VALUE) adc di, word ptr [r10 + VALUE]
#define ADC_DI_FROM_PTR_R11_(VALUE) adc di, word ptr [r11 + VALUE]
#define ADC_DI_FROM_PTR_R12_(VALUE) adc di, word ptr [r12 + VALUE]
#define ADC_DI_FROM_PTR_R13_(VALUE) adc di, word ptr [r13 + VALUE]
#define ADC_DI_FROM_PTR_R14_(VALUE) adc di, word ptr [r14 + VALUE]
#define ADC_DI_FROM_PTR_R15_(VALUE) adc di, word ptr [r15 + VALUE]
#define ADC_DI_FROM_PTR_EAX_(VALUE) adc di, word ptr [eax + VALUE]
#define ADC_DI_FROM_PTR_EBX_(VALUE) adc di, word ptr [ebx + VALUE]
#define ADC_DI_FROM_PTR_ECX_(VALUE) adc di, word ptr [ecx + VALUE]
#define ADC_DI_FROM_PTR_EDX_(VALUE) adc di, word ptr [edx + VALUE]
#define ADC_DI_FROM_PTR_EDI_(VALUE) adc di, word ptr [edi + VALUE]
#define ADC_DI_FROM_PTR_ESI_(VALUE) adc di, word ptr [esi + VALUE]
#define ADC_DI_FROM_PTR_EBP_(VALUE) adc di, word ptr [ebp + VALUE]
#define ADC_DI_FROM_PTR_ESP_(VALUE) adc di, word ptr [esp + VALUE]

#define ADC_SI_FROM_PTR_RAX_(VALUE) adc si, word ptr [rax + VALUE]
#define ADC_SI_FROM_PTR_RBX_(VALUE) adc si, word ptr [rbx + VALUE]
#define ADC_SI_FROM_PTR_RCX_(VALUE) adc si, word ptr [rcx + VALUE]
#define ADC_SI_FROM_PTR_RDX_(VALUE) adc si, word ptr [rdx + VALUE]
#define ADC_SI_FROM_PTR_RDI_(VALUE) adc si, word ptr [rdi + VALUE]
#define ADC_SI_FROM_PTR_RSI_(VALUE) adc si, word ptr [rsi + VALUE]
#define ADC_SI_FROM_PTR_RBP_(VALUE) adc si, word ptr [rbp + VALUE]
#define ADC_SI_FROM_PTR_RSP_(VALUE) adc si, word ptr [rsp + VALUE]
#define ADC_SI_FROM_PTR_R8_(VALUE) adc si, word ptr [r8 + VALUE]
#define ADC_SI_FROM_PTR_R9_(VALUE) adc si, word ptr [r9 + VALUE]
#define ADC_SI_FROM_PTR_R10_(VALUE) adc si, word ptr [r10 + VALUE]
#define ADC_SI_FROM_PTR_R11_(VALUE) adc si, word ptr [r11 + VALUE]
#define ADC_SI_FROM_PTR_R12_(VALUE) adc si, word ptr [r12 + VALUE]
#define ADC_SI_FROM_PTR_R13_(VALUE) adc si, word ptr [r13 + VALUE]
#define ADC_SI_FROM_PTR_R14_(VALUE) adc si, word ptr [r14 + VALUE]
#define ADC_SI_FROM_PTR_R15_(VALUE) adc si, word ptr [r15 + VALUE]
#define ADC_SI_FROM_PTR_EAX_(VALUE) adc si, word ptr [eax + VALUE]
#define ADC_SI_FROM_PTR_EBX_(VALUE) adc si, word ptr [ebx + VALUE]
#define ADC_SI_FROM_PTR_ECX_(VALUE) adc si, word ptr [ecx + VALUE]
#define ADC_SI_FROM_PTR_EDX_(VALUE) adc si, word ptr [edx + VALUE]
#define ADC_SI_FROM_PTR_EDI_(VALUE) adc si, word ptr [edi + VALUE]
#define ADC_SI_FROM_PTR_ESI_(VALUE) adc si, word ptr [esi + VALUE]
#define ADC_SI_FROM_PTR_EBP_(VALUE) adc si, word ptr [ebp + VALUE]
#define ADC_SI_FROM_PTR_ESP_(VALUE) adc si, word ptr [esp + VALUE]

#define ADC_BP_FROM_PTR_RAX_(VALUE) adc bp, word ptr [rax + VALUE]
#define ADC_BP_FROM_PTR_RBX_(VALUE) adc bp, word ptr [rbx + VALUE]
#define ADC_BP_FROM_PTR_RCX_(VALUE) adc bp, word ptr [rcx + VALUE]
#define ADC_BP_FROM_PTR_RDX_(VALUE) adc bp, word ptr [rdx + VALUE]
#define ADC_BP_FROM_PTR_RDI_(VALUE) adc bp, word ptr [rdi + VALUE]
#define ADC_BP_FROM_PTR_RSI_(VALUE) adc bp, word ptr [rsi + VALUE]
#define ADC_BP_FROM_PTR_RBP_(VALUE) adc bp, word ptr [rbp + VALUE]
#define ADC_BP_FROM_PTR_RSP_(VALUE) adc bp, word ptr [rsp + VALUE]
#define ADC_BP_FROM_PTR_R8_(VALUE) adc bp, word ptr [r8 + VALUE]
#define ADC_BP_FROM_PTR_R9_(VALUE) adc bp, word ptr [r9 + VALUE]
#define ADC_BP_FROM_PTR_R10_(VALUE) adc bp, word ptr [r10 + VALUE]
#define ADC_BP_FROM_PTR_R11_(VALUE) adc bp, word ptr [r11 + VALUE]
#define ADC_BP_FROM_PTR_R12_(VALUE) adc bp, word ptr [r12 + VALUE]
#define ADC_BP_FROM_PTR_R13_(VALUE) adc bp, word ptr [r13 + VALUE]
#define ADC_BP_FROM_PTR_R14_(VALUE) adc bp, word ptr [r14 + VALUE]
#define ADC_BP_FROM_PTR_R15_(VALUE) adc bp, word ptr [r15 + VALUE]
#define ADC_BP_FROM_PTR_EAX_(VALUE) adc bp, word ptr [eax + VALUE]
#define ADC_BP_FROM_PTR_EBX_(VALUE) adc bp, word ptr [ebx + VALUE]
#define ADC_BP_FROM_PTR_ECX_(VALUE) adc bp, word ptr [ecx + VALUE]
#define ADC_BP_FROM_PTR_EDX_(VALUE) adc bp, word ptr [edx + VALUE]
#define ADC_BP_FROM_PTR_EDI_(VALUE) adc bp, word ptr [edi + VALUE]
#define ADC_BP_FROM_PTR_ESI_(VALUE) adc bp, word ptr [esi + VALUE]
#define ADC_BP_FROM_PTR_EBP_(VALUE) adc bp, word ptr [ebp + VALUE]
#define ADC_BP_FROM_PTR_ESP_(VALUE) adc bp, word ptr [esp + VALUE]

#define ADC_SP_FROM_PTR_RAX_(VALUE) adc sp, word ptr [rax + VALUE]
#define ADC_SP_FROM_PTR_RBX_(VALUE) adc sp, word ptr [rbx + VALUE]
#define ADC_SP_FROM_PTR_RCX_(VALUE) adc sp, word ptr [rcx + VALUE]
#define ADC_SP_FROM_PTR_RDX_(VALUE) adc sp, word ptr [rdx + VALUE]
#define ADC_SP_FROM_PTR_RDI_(VALUE) adc sp, word ptr [rdi + VALUE]
#define ADC_SP_FROM_PTR_RSI_(VALUE) adc sp, word ptr [rsi + VALUE]
#define ADC_SP_FROM_PTR_RBP_(VALUE) adc sp, word ptr [rbp + VALUE]
#define ADC_SP_FROM_PTR_RSP_(VALUE) adc sp, word ptr [rsp + VALUE]
#define ADC_SP_FROM_PTR_R8_(VALUE) adc sp, word ptr [r8 + VALUE]
#define ADC_SP_FROM_PTR_R9_(VALUE) adc sp, word ptr [r9 + VALUE]
#define ADC_SP_FROM_PTR_R10_(VALUE) adc sp, word ptr [r10 + VALUE]
#define ADC_SP_FROM_PTR_R11_(VALUE) adc sp, word ptr [r11 + VALUE]
#define ADC_SP_FROM_PTR_R12_(VALUE) adc sp, word ptr [r12 + VALUE]
#define ADC_SP_FROM_PTR_R13_(VALUE) adc sp, word ptr [r13 + VALUE]
#define ADC_SP_FROM_PTR_R14_(VALUE) adc sp, word ptr [r14 + VALUE]
#define ADC_SP_FROM_PTR_R15_(VALUE) adc sp, word ptr [r15 + VALUE]
#define ADC_SP_FROM_PTR_EAX_(VALUE) adc sp, word ptr [eax + VALUE]
#define ADC_SP_FROM_PTR_EBX_(VALUE) adc sp, word ptr [ebx + VALUE]
#define ADC_SP_FROM_PTR_ECX_(VALUE) adc sp, word ptr [ecx + VALUE]
#define ADC_SP_FROM_PTR_EDX_(VALUE) adc sp, word ptr [edx + VALUE]
#define ADC_SP_FROM_PTR_EDI_(VALUE) adc sp, word ptr [edi + VALUE]
#define ADC_SP_FROM_PTR_ESI_(VALUE) adc sp, word ptr [esi + VALUE]
#define ADC_SP_FROM_PTR_EBP_(VALUE) adc sp, word ptr [ebp + VALUE]
#define ADC_SP_FROM_PTR_ESP_(VALUE) adc sp, word ptr [esp + VALUE]

#define ADC_R8W_FROM_PTR_RAX_(VALUE) adc r8w, word ptr [rax + VALUE]
#define ADC_R8W_FROM_PTR_RBX_(VALUE) adc r8w, word ptr [rbx + VALUE]
#define ADC_R8W_FROM_PTR_RCX_(VALUE) adc r8w, word ptr [rcx + VALUE]
#define ADC_R8W_FROM_PTR_RDX_(VALUE) adc r8w, word ptr [rdx + VALUE]
#define ADC_R8W_FROM_PTR_RDI_(VALUE) adc r8w, word ptr [rdi + VALUE]
#define ADC_R8W_FROM_PTR_RSI_(VALUE) adc r8w, word ptr [rsi + VALUE]
#define ADC_R8W_FROM_PTR_RBP_(VALUE) adc r8w, word ptr [rbp + VALUE]
#define ADC_R8W_FROM_PTR_RSP_(VALUE) adc r8w, word ptr [rsp + VALUE]
#define ADC_R8W_FROM_PTR_R8_(VALUE) adc r8w, word ptr [r8 + VALUE]
#define ADC_R8W_FROM_PTR_R9_(VALUE) adc r8w, word ptr [r9 + VALUE]
#define ADC_R8W_FROM_PTR_R10_(VALUE) adc r8w, word ptr [r10 + VALUE]
#define ADC_R8W_FROM_PTR_R11_(VALUE) adc r8w, word ptr [r11 + VALUE]
#define ADC_R8W_FROM_PTR_R12_(VALUE) adc r8w, word ptr [r12 + VALUE]
#define ADC_R8W_FROM_PTR_R13_(VALUE) adc r8w, word ptr [r13 + VALUE]
#define ADC_R8W_FROM_PTR_R14_(VALUE) adc r8w, word ptr [r14 + VALUE]
#define ADC_R8W_FROM_PTR_R15_(VALUE) adc r8w, word ptr [r15 + VALUE]
#define ADC_R8W_FROM_PTR_EAX_(VALUE) adc r8w, word ptr [eax + VALUE]
#define ADC_R8W_FROM_PTR_EBX_(VALUE) adc r8w, word ptr [ebx + VALUE]
#define ADC_R8W_FROM_PTR_ECX_(VALUE) adc r8w, word ptr [ecx + VALUE]
#define ADC_R8W_FROM_PTR_EDX_(VALUE) adc r8w, word ptr [edx + VALUE]
#define ADC_R8W_FROM_PTR_EDI_(VALUE) adc r8w, word ptr [edi + VALUE]
#define ADC_R8W_FROM_PTR_ESI_(VALUE) adc r8w, word ptr [esi + VALUE]
#define ADC_R8W_FROM_PTR_EBP_(VALUE) adc r8w, word ptr [ebp + VALUE]
#define ADC_R8W_FROM_PTR_ESP_(VALUE) adc r8w, word ptr [esp + VALUE]

#define ADC_R9W_FROM_PTR_RAX_(VALUE) adc r9w, word ptr [rax + VALUE]
#define ADC_R9W_FROM_PTR_RBX_(VALUE) adc r9w, word ptr [rbx + VALUE]
#define ADC_R9W_FROM_PTR_RCX_(VALUE) adc r9w, word ptr [rcx + VALUE]
#define ADC_R9W_FROM_PTR_RDX_(VALUE) adc r9w, word ptr [rdx + VALUE]
#define ADC_R9W_FROM_PTR_RDI_(VALUE) adc r9w, word ptr [rdi + VALUE]
#define ADC_R9W_FROM_PTR_RSI_(VALUE) adc r9w, word ptr [rsi + VALUE]
#define ADC_R9W_FROM_PTR_RBP_(VALUE) adc r9w, word ptr [rbp + VALUE]
#define ADC_R9W_FROM_PTR_RSP_(VALUE) adc r9w, word ptr [rsp + VALUE]
#define ADC_R9W_FROM_PTR_R8_(VALUE) adc r9w, word ptr [r8 + VALUE]
#define ADC_R9W_FROM_PTR_R9_(VALUE) adc r9w, word ptr [r9 + VALUE]
#define ADC_R9W_FROM_PTR_R10_(VALUE) adc r9w, word ptr [r10 + VALUE]
#define ADC_R9W_FROM_PTR_R11_(VALUE) adc r9w, word ptr [r11 + VALUE]
#define ADC_R9W_FROM_PTR_R12_(VALUE) adc r9w, word ptr [r12 + VALUE]
#define ADC_R9W_FROM_PTR_R13_(VALUE) adc r9w, word ptr [r13 + VALUE]
#define ADC_R9W_FROM_PTR_R14_(VALUE) adc r9w, word ptr [r14 + VALUE]
#define ADC_R9W_FROM_PTR_R15_(VALUE) adc r9w, word ptr [r15 + VALUE]
#define ADC_R9W_FROM_PTR_EAX_(VALUE) adc r9w, word ptr [eax + VALUE]
#define ADC_R9W_FROM_PTR_EBX_(VALUE) adc r9w, word ptr [ebx + VALUE]
#define ADC_R9W_FROM_PTR_ECX_(VALUE) adc r9w, word ptr [ecx + VALUE]
#define ADC_R9W_FROM_PTR_EDX_(VALUE) adc r9w, word ptr [edx + VALUE]
#define ADC_R9W_FROM_PTR_EDI_(VALUE) adc r9w, word ptr [edi + VALUE]
#define ADC_R9W_FROM_PTR_ESI_(VALUE) adc r9w, word ptr [esi + VALUE]
#define ADC_R9W_FROM_PTR_EBP_(VALUE) adc r9w, word ptr [ebp + VALUE]
#define ADC_R9W_FROM_PTR_ESP_(VALUE) adc r9w, word ptr [esp + VALUE]

#define ADC_R10W_FROM_PTR_RAX_(VALUE) adc r10w, word ptr [rax + VALUE]
#define ADC_R10W_FROM_PTR_RBX_(VALUE) adc r10w, word ptr [rbx + VALUE]
#define ADC_R10W_FROM_PTR_RCX_(VALUE) adc r10w, word ptr [rcx + VALUE]
#define ADC_R10W_FROM_PTR_RDX_(VALUE) adc r10w, word ptr [rdx + VALUE]
#define ADC_R10W_FROM_PTR_RDI_(VALUE) adc r10w, word ptr [rdi + VALUE]
#define ADC_R10W_FROM_PTR_RSI_(VALUE) adc r10w, word ptr [rsi + VALUE]
#define ADC_R10W_FROM_PTR_RBP_(VALUE) adc r10w, word ptr [rbp + VALUE]
#define ADC_R10W_FROM_PTR_RSP_(VALUE) adc r10w, word ptr [rsp + VALUE]
#define ADC_R10W_FROM_PTR_R8_(VALUE) adc r10w, word ptr [r8 + VALUE]
#define ADC_R10W_FROM_PTR_R9_(VALUE) adc r10w, word ptr [r9 + VALUE]
#define ADC_R10W_FROM_PTR_R10_(VALUE) adc r10w, word ptr [r10 + VALUE]
#define ADC_R10W_FROM_PTR_R11_(VALUE) adc r10w, word ptr [r11 + VALUE]
#define ADC_R10W_FROM_PTR_R12_(VALUE) adc r10w, word ptr [r12 + VALUE]
#define ADC_R10W_FROM_PTR_R13_(VALUE) adc r10w, word ptr [r13 + VALUE]
#define ADC_R10W_FROM_PTR_R14_(VALUE) adc r10w, word ptr [r14 + VALUE]
#define ADC_R10W_FROM_PTR_R15_(VALUE) adc r10w, word ptr [r15 + VALUE]
#define ADC_R10W_FROM_PTR_EAX_(VALUE) adc r10w, word ptr [eax + VALUE]
#define ADC_R10W_FROM_PTR_EBX_(VALUE) adc r10w, word ptr [ebx + VALUE]
#define ADC_R10W_FROM_PTR_ECX_(VALUE) adc r10w, word ptr [ecx + VALUE]
#define ADC_R10W_FROM_PTR_EDX_(VALUE) adc r10w, word ptr [edx + VALUE]
#define ADC_R10W_FROM_PTR_EDI_(VALUE) adc r10w, word ptr [edi + VALUE]
#define ADC_R10W_FROM_PTR_ESI_(VALUE) adc r10w, word ptr [esi + VALUE]
#define ADC_R10W_FROM_PTR_EBP_(VALUE) adc r10w, word ptr [ebp + VALUE]
#define ADC_R10W_FROM_PTR_ESP_(VALUE) adc r10w, word ptr [esp + VALUE]

#define ADC_R11W_FROM_PTR_RAX_(VALUE) adc r11w, word ptr [rax + VALUE]
#define ADC_R11W_FROM_PTR_RBX_(VALUE) adc r11w, word ptr [rbx + VALUE]
#define ADC_R11W_FROM_PTR_RCX_(VALUE) adc r11w, word ptr [rcx + VALUE]
#define ADC_R11W_FROM_PTR_RDX_(VALUE) adc r11w, word ptr [rdx + VALUE]
#define ADC_R11W_FROM_PTR_RDI_(VALUE) adc r11w, word ptr [rdi + VALUE]
#define ADC_R11W_FROM_PTR_RSI_(VALUE) adc r11w, word ptr [rsi + VALUE]
#define ADC_R11W_FROM_PTR_RBP_(VALUE) adc r11w, word ptr [rbp + VALUE]
#define ADC_R11W_FROM_PTR_RSP_(VALUE) adc r11w, word ptr [rsp + VALUE]
#define ADC_R11W_FROM_PTR_R8_(VALUE) adc r11w, word ptr [r8 + VALUE]
#define ADC_R11W_FROM_PTR_R9_(VALUE) adc r11w, word ptr [r9 + VALUE]
#define ADC_R11W_FROM_PTR_R10_(VALUE) adc r11w, word ptr [r10 + VALUE]
#define ADC_R11W_FROM_PTR_R11_(VALUE) adc r11w, word ptr [r11 + VALUE]
#define ADC_R11W_FROM_PTR_R12_(VALUE) adc r11w, word ptr [r12 + VALUE]
#define ADC_R11W_FROM_PTR_R13_(VALUE) adc r11w, word ptr [r13 + VALUE]
#define ADC_R11W_FROM_PTR_R14_(VALUE) adc r11w, word ptr [r14 + VALUE]
#define ADC_R11W_FROM_PTR_R15_(VALUE) adc r11w, word ptr [r15 + VALUE]
#define ADC_R11W_FROM_PTR_EAX_(VALUE) adc r11w, word ptr [eax + VALUE]
#define ADC_R11W_FROM_PTR_EBX_(VALUE) adc r11w, word ptr [ebx + VALUE]
#define ADC_R11W_FROM_PTR_ECX_(VALUE) adc r11w, word ptr [ecx + VALUE]
#define ADC_R11W_FROM_PTR_EDX_(VALUE) adc r11w, word ptr [edx + VALUE]
#define ADC_R11W_FROM_PTR_EDI_(VALUE) adc r11w, word ptr [edi + VALUE]
#define ADC_R11W_FROM_PTR_ESI_(VALUE) adc r11w, word ptr [esi + VALUE]
#define ADC_R11W_FROM_PTR_EBP_(VALUE) adc r11w, word ptr [ebp + VALUE]
#define ADC_R11W_FROM_PTR_ESP_(VALUE) adc r11w, word ptr [esp + VALUE]

#define ADC_R12W_FROM_PTR_RAX_(VALUE) adc r12w, word ptr [rax + VALUE]
#define ADC_R12W_FROM_PTR_RBX_(VALUE) adc r12w, word ptr [rbx + VALUE]
#define ADC_R12W_FROM_PTR_RCX_(VALUE) adc r12w, word ptr [rcx + VALUE]
#define ADC_R12W_FROM_PTR_RDX_(VALUE) adc r12w, word ptr [rdx + VALUE]
#define ADC_R12W_FROM_PTR_RDI_(VALUE) adc r12w, word ptr [rdi + VALUE]
#define ADC_R12W_FROM_PTR_RSI_(VALUE) adc r12w, word ptr [rsi + VALUE]
#define ADC_R12W_FROM_PTR_RBP_(VALUE) adc r12w, word ptr [rbp + VALUE]
#define ADC_R12W_FROM_PTR_RSP_(VALUE) adc r12w, word ptr [rsp + VALUE]
#define ADC_R12W_FROM_PTR_R8_(VALUE) adc r12w, word ptr [r8 + VALUE]
#define ADC_R12W_FROM_PTR_R9_(VALUE) adc r12w, word ptr [r9 + VALUE]
#define ADC_R12W_FROM_PTR_R10_(VALUE) adc r12w, word ptr [r10 + VALUE]
#define ADC_R12W_FROM_PTR_R11_(VALUE) adc r12w, word ptr [r11 + VALUE]
#define ADC_R12W_FROM_PTR_R12_(VALUE) adc r12w, word ptr [r12 + VALUE]
#define ADC_R12W_FROM_PTR_R13_(VALUE) adc r12w, word ptr [r13 + VALUE]
#define ADC_R12W_FROM_PTR_R14_(VALUE) adc r12w, word ptr [r14 + VALUE]
#define ADC_R12W_FROM_PTR_R15_(VALUE) adc r12w, word ptr [r15 + VALUE]
#define ADC_R12W_FROM_PTR_EAX_(VALUE) adc r12w, word ptr [eax + VALUE]
#define ADC_R12W_FROM_PTR_EBX_(VALUE) adc r12w, word ptr [ebx + VALUE]
#define ADC_R12W_FROM_PTR_ECX_(VALUE) adc r12w, word ptr [ecx + VALUE]
#define ADC_R12W_FROM_PTR_EDX_(VALUE) adc r12w, word ptr [edx + VALUE]
#define ADC_R12W_FROM_PTR_EDI_(VALUE) adc r12w, word ptr [edi + VALUE]
#define ADC_R12W_FROM_PTR_ESI_(VALUE) adc r12w, word ptr [esi + VALUE]
#define ADC_R12W_FROM_PTR_EBP_(VALUE) adc r12w, word ptr [ebp + VALUE]
#define ADC_R12W_FROM_PTR_ESP_(VALUE) adc r12w, word ptr [esp + VALUE]

#define ADC_R13W_FROM_PTR_RAX_(VALUE) adc r13w, word ptr [rax + VALUE]
#define ADC_R13W_FROM_PTR_RBX_(VALUE) adc r13w, word ptr [rbx + VALUE]
#define ADC_R13W_FROM_PTR_RCX_(VALUE) adc r13w, word ptr [rcx + VALUE]
#define ADC_R13W_FROM_PTR_RDX_(VALUE) adc r13w, word ptr [rdx + VALUE]
#define ADC_R13W_FROM_PTR_RDI_(VALUE) adc r13w, word ptr [rdi + VALUE]
#define ADC_R13W_FROM_PTR_RSI_(VALUE) adc r13w, word ptr [rsi + VALUE]
#define ADC_R13W_FROM_PTR_RBP_(VALUE) adc r13w, word ptr [rbp + VALUE]
#define ADC_R13W_FROM_PTR_RSP_(VALUE) adc r13w, word ptr [rsp + VALUE]
#define ADC_R13W_FROM_PTR_R8_(VALUE) adc r13w, word ptr [r8 + VALUE]
#define ADC_R13W_FROM_PTR_R9_(VALUE) adc r13w, word ptr [r9 + VALUE]
#define ADC_R13W_FROM_PTR_R10_(VALUE) adc r13w, word ptr [r10 + VALUE]
#define ADC_R13W_FROM_PTR_R11_(VALUE) adc r13w, word ptr [r11 + VALUE]
#define ADC_R13W_FROM_PTR_R12_(VALUE) adc r13w, word ptr [r12 + VALUE]
#define ADC_R13W_FROM_PTR_R13_(VALUE) adc r13w, word ptr [r13 + VALUE]
#define ADC_R13W_FROM_PTR_R14_(VALUE) adc r13w, word ptr [r14 + VALUE]
#define ADC_R13W_FROM_PTR_R15_(VALUE) adc r13w, word ptr [r15 + VALUE]
#define ADC_R13W_FROM_PTR_EAX_(VALUE) adc r13w, word ptr [eax + VALUE]
#define ADC_R13W_FROM_PTR_EBX_(VALUE) adc r13w, word ptr [ebx + VALUE]
#define ADC_R13W_FROM_PTR_ECX_(VALUE) adc r13w, word ptr [ecx + VALUE]
#define ADC_R13W_FROM_PTR_EDX_(VALUE) adc r13w, word ptr [edx + VALUE]
#define ADC_R13W_FROM_PTR_EDI_(VALUE) adc r13w, word ptr [edi + VALUE]
#define ADC_R13W_FROM_PTR_ESI_(VALUE) adc r13w, word ptr [esi + VALUE]
#define ADC_R13W_FROM_PTR_EBP_(VALUE) adc r13w, word ptr [ebp + VALUE]
#define ADC_R13W_FROM_PTR_ESP_(VALUE) adc r13w, word ptr [esp + VALUE]

#define ADC_R14W_FROM_PTR_RAX_(VALUE) adc r14w, word ptr [rax + VALUE]
#define ADC_R14W_FROM_PTR_RBX_(VALUE) adc r14w, word ptr [rbx + VALUE]
#define ADC_R14W_FROM_PTR_RCX_(VALUE) adc r14w, word ptr [rcx + VALUE]
#define ADC_R14W_FROM_PTR_RDX_(VALUE) adc r14w, word ptr [rdx + VALUE]
#define ADC_R14W_FROM_PTR_RDI_(VALUE) adc r14w, word ptr [rdi + VALUE]
#define ADC_R14W_FROM_PTR_RSI_(VALUE) adc r14w, word ptr [rsi + VALUE]
#define ADC_R14W_FROM_PTR_RBP_(VALUE) adc r14w, word ptr [rbp + VALUE]
#define ADC_R14W_FROM_PTR_RSP_(VALUE) adc r14w, word ptr [rsp + VALUE]
#define ADC_R14W_FROM_PTR_R8_(VALUE) adc r14w, word ptr [r8 + VALUE]
#define ADC_R14W_FROM_PTR_R9_(VALUE) adc r14w, word ptr [r9 + VALUE]
#define ADC_R14W_FROM_PTR_R10_(VALUE) adc r14w, word ptr [r10 + VALUE]
#define ADC_R14W_FROM_PTR_R11_(VALUE) adc r14w, word ptr [r11 + VALUE]
#define ADC_R14W_FROM_PTR_R12_(VALUE) adc r14w, word ptr [r12 + VALUE]
#define ADC_R14W_FROM_PTR_R13_(VALUE) adc r14w, word ptr [r13 + VALUE]
#define ADC_R14W_FROM_PTR_R14_(VALUE) adc r14w, word ptr [r14 + VALUE]
#define ADC_R14W_FROM_PTR_R15_(VALUE) adc r14w, word ptr [r15 + VALUE]
#define ADC_R14W_FROM_PTR_EAX_(VALUE) adc r14w, word ptr [eax + VALUE]
#define ADC_R14W_FROM_PTR_EBX_(VALUE) adc r14w, word ptr [ebx + VALUE]
#define ADC_R14W_FROM_PTR_ECX_(VALUE) adc r14w, word ptr [ecx + VALUE]
#define ADC_R14W_FROM_PTR_EDX_(VALUE) adc r14w, word ptr [edx + VALUE]
#define ADC_R14W_FROM_PTR_EDI_(VALUE) adc r14w, word ptr [edi + VALUE]
#define ADC_R14W_FROM_PTR_ESI_(VALUE) adc r14w, word ptr [esi + VALUE]
#define ADC_R14W_FROM_PTR_EBP_(VALUE) adc r14w, word ptr [ebp + VALUE]
#define ADC_R14W_FROM_PTR_ESP_(VALUE) adc r14w, word ptr [esp + VALUE]

#define ADC_R15W_FROM_PTR_RAX_(VALUE) adc r15w, word ptr [rax + VALUE]
#define ADC_R15W_FROM_PTR_RBX_(VALUE) adc r15w, word ptr [rbx + VALUE]
#define ADC_R15W_FROM_PTR_RCX_(VALUE) adc r15w, word ptr [rcx + VALUE]
#define ADC_R15W_FROM_PTR_RDX_(VALUE) adc r15w, word ptr [rdx + VALUE]
#define ADC_R15W_FROM_PTR_RDI_(VALUE) adc r15w, word ptr [rdi + VALUE]
#define ADC_R15W_FROM_PTR_RSI_(VALUE) adc r15w, word ptr [rsi + VALUE]
#define ADC_R15W_FROM_PTR_RBP_(VALUE) adc r15w, word ptr [rbp + VALUE]
#define ADC_R15W_FROM_PTR_RSP_(VALUE) adc r15w, word ptr [rsp + VALUE]
#define ADC_R15W_FROM_PTR_R8_(VALUE) adc r15w, word ptr [r8 + VALUE]
#define ADC_R15W_FROM_PTR_R9_(VALUE) adc r15w, word ptr [r9 + VALUE]
#define ADC_R15W_FROM_PTR_R10_(VALUE) adc r15w, word ptr [r10 + VALUE]
#define ADC_R15W_FROM_PTR_R11_(VALUE) adc r15w, word ptr [r11 + VALUE]
#define ADC_R15W_FROM_PTR_R12_(VALUE) adc r15w, word ptr [r12 + VALUE]
#define ADC_R15W_FROM_PTR_R13_(VALUE) adc r15w, word ptr [r13 + VALUE]
#define ADC_R15W_FROM_PTR_R14_(VALUE) adc r15w, word ptr [r14 + VALUE]
#define ADC_R15W_FROM_PTR_R15_(VALUE) adc r15w, word ptr [r15 + VALUE]
#define ADC_R15W_FROM_PTR_EAX_(VALUE) adc r15w, word ptr [eax + VALUE]
#define ADC_R15W_FROM_PTR_EBX_(VALUE) adc r15w, word ptr [ebx + VALUE]
#define ADC_R15W_FROM_PTR_ECX_(VALUE) adc r15w, word ptr [ecx + VALUE]
#define ADC_R15W_FROM_PTR_EDX_(VALUE) adc r15w, word ptr [edx + VALUE]
#define ADC_R15W_FROM_PTR_EDI_(VALUE) adc r15w, word ptr [edi + VALUE]
#define ADC_R15W_FROM_PTR_ESI_(VALUE) adc r15w, word ptr [esi + VALUE]
#define ADC_R15W_FROM_PTR_EBP_(VALUE) adc r15w, word ptr [ebp + VALUE]
#define ADC_R15W_FROM_PTR_ESP_(VALUE) adc r15w, word ptr [esp + VALUE]

#define ADC_AX_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], ax
#define ADC_AX_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], ax
#define ADC_AX_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], ax
#define ADC_AX_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], ax
#define ADC_AX_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], ax
#define ADC_AX_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], ax
#define ADC_AX_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], ax
#define ADC_AX_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], ax
#define ADC_AX_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], ax
#define ADC_AX_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], ax
#define ADC_AX_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], ax
#define ADC_AX_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], ax
#define ADC_AX_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], ax
#define ADC_AX_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], ax
#define ADC_AX_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], ax
#define ADC_AX_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], ax
#define ADC_AX_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], ax
#define ADC_AX_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], ax
#define ADC_AX_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], ax
#define ADC_AX_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], ax
#define ADC_AX_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], ax
#define ADC_AX_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], ax
#define ADC_AX_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], ax
#define ADC_AX_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], ax

#define ADC_BX_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], bx
#define ADC_BX_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], bx
#define ADC_BX_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], bx
#define ADC_BX_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], bx
#define ADC_BX_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], bx
#define ADC_BX_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], bx
#define ADC_BX_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], bx
#define ADC_BX_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], bx
#define ADC_BX_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], bx
#define ADC_BX_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], bx
#define ADC_BX_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], bx
#define ADC_BX_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], bx
#define ADC_BX_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], bx
#define ADC_BX_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], bx
#define ADC_BX_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], bx
#define ADC_BX_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], bx
#define ADC_BX_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], bx
#define ADC_BX_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], bx
#define ADC_BX_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], bx
#define ADC_BX_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], bx
#define ADC_BX_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], bx
#define ADC_BX_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], bx
#define ADC_BX_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], bx
#define ADC_BX_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], bx

#define ADC_CX_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], cx
#define ADC_CX_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], cx
#define ADC_CX_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], cx
#define ADC_CX_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], cx
#define ADC_CX_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], cx
#define ADC_CX_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], cx
#define ADC_CX_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], cx
#define ADC_CX_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], cx
#define ADC_CX_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], cx
#define ADC_CX_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], cx
#define ADC_CX_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], cx
#define ADC_CX_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], cx
#define ADC_CX_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], cx
#define ADC_CX_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], cx
#define ADC_CX_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], cx
#define ADC_CX_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], cx
#define ADC_CX_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], cx
#define ADC_CX_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], cx
#define ADC_CX_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], cx
#define ADC_CX_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], cx
#define ADC_CX_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], cx
#define ADC_CX_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], cx
#define ADC_CX_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], cx
#define ADC_CX_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], cx

#define ADC_DX_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], dx
#define ADC_DX_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], dx
#define ADC_DX_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], dx
#define ADC_DX_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], dx
#define ADC_DX_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], dx
#define ADC_DX_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], dx
#define ADC_DX_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], dx
#define ADC_DX_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], dx
#define ADC_DX_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], dx
#define ADC_DX_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], dx
#define ADC_DX_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], dx
#define ADC_DX_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], dx
#define ADC_DX_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], dx
#define ADC_DX_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], dx
#define ADC_DX_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], dx
#define ADC_DX_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], dx
#define ADC_DX_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], dx
#define ADC_DX_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], dx
#define ADC_DX_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], dx
#define ADC_DX_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], dx
#define ADC_DX_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], dx
#define ADC_DX_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], dx
#define ADC_DX_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], dx
#define ADC_DX_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], dx

#define ADC_DI_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], di
#define ADC_DI_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], di
#define ADC_DI_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], di
#define ADC_DI_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], di
#define ADC_DI_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], di
#define ADC_DI_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], di
#define ADC_DI_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], di
#define ADC_DI_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], di
#define ADC_DI_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], di
#define ADC_DI_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], di
#define ADC_DI_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], di
#define ADC_DI_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], di
#define ADC_DI_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], di
#define ADC_DI_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], di
#define ADC_DI_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], di
#define ADC_DI_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], di
#define ADC_DI_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], di
#define ADC_DI_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], di
#define ADC_DI_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], di
#define ADC_DI_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], di
#define ADC_DI_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], di
#define ADC_DI_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], di
#define ADC_DI_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], di
#define ADC_DI_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], di

#define ADC_SI_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], si
#define ADC_SI_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], si
#define ADC_SI_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], si
#define ADC_SI_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], si
#define ADC_SI_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], si
#define ADC_SI_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], si
#define ADC_SI_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], si
#define ADC_SI_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], si
#define ADC_SI_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], si
#define ADC_SI_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], si
#define ADC_SI_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], si
#define ADC_SI_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], si
#define ADC_SI_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], si
#define ADC_SI_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], si
#define ADC_SI_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], si
#define ADC_SI_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], si
#define ADC_SI_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], si
#define ADC_SI_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], si
#define ADC_SI_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], si
#define ADC_SI_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], si
#define ADC_SI_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], si
#define ADC_SI_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], si
#define ADC_SI_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], si
#define ADC_SI_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], si

#define ADC_BP_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], bp
#define ADC_BP_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], bp
#define ADC_BP_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], bp
#define ADC_BP_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], bp
#define ADC_BP_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], bp
#define ADC_BP_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], bp
#define ADC_BP_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], bp
#define ADC_BP_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], bp
#define ADC_BP_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], bp
#define ADC_BP_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], bp
#define ADC_BP_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], bp
#define ADC_BP_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], bp
#define ADC_BP_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], bp
#define ADC_BP_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], bp
#define ADC_BP_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], bp
#define ADC_BP_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], bp
#define ADC_BP_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], bp
#define ADC_BP_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], bp
#define ADC_BP_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], bp
#define ADC_BP_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], bp
#define ADC_BP_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], bp
#define ADC_BP_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], bp
#define ADC_BP_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], bp
#define ADC_BP_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], bp

#define ADC_SP_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], sp
#define ADC_SP_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], sp
#define ADC_SP_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], sp
#define ADC_SP_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], sp
#define ADC_SP_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], sp
#define ADC_SP_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], sp
#define ADC_SP_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], sp
#define ADC_SP_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], sp
#define ADC_SP_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], sp
#define ADC_SP_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], sp
#define ADC_SP_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], sp
#define ADC_SP_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], sp
#define ADC_SP_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], sp
#define ADC_SP_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], sp
#define ADC_SP_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], sp
#define ADC_SP_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], sp
#define ADC_SP_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], sp
#define ADC_SP_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], sp
#define ADC_SP_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], sp
#define ADC_SP_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], sp
#define ADC_SP_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], sp
#define ADC_SP_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], sp
#define ADC_SP_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], sp
#define ADC_SP_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], sp

#define ADC_R8W_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], r8w
#define ADC_R8W_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], r8w
#define ADC_R8W_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], r8w
#define ADC_R8W_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], r8w
#define ADC_R8W_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], r8w
#define ADC_R8W_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], r8w
#define ADC_R8W_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], r8w
#define ADC_R8W_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], r8w
#define ADC_R8W_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], r8w
#define ADC_R8W_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], r8w
#define ADC_R8W_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], r8w
#define ADC_R8W_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], r8w
#define ADC_R8W_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], r8w
#define ADC_R8W_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], r8w
#define ADC_R8W_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], r8w
#define ADC_R8W_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], r8w
#define ADC_R8W_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], r8w
#define ADC_R8W_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], r8w
#define ADC_R8W_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], r8w
#define ADC_R8W_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], r8w
#define ADC_R8W_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], r8w
#define ADC_R8W_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], r8w
#define ADC_R8W_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], r8w
#define ADC_R8W_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], r8w

#define ADC_R9W_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], r9w
#define ADC_R9W_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], r9w
#define ADC_R9W_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], r9w
#define ADC_R9W_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], r9w
#define ADC_R9W_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], r9w
#define ADC_R9W_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], r9w
#define ADC_R9W_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], r9w
#define ADC_R9W_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], r9w
#define ADC_R9W_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], r9w
#define ADC_R9W_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], r9w
#define ADC_R9W_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], r9w
#define ADC_R9W_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], r9w
#define ADC_R9W_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], r9w
#define ADC_R9W_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], r9w
#define ADC_R9W_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], r9w
#define ADC_R9W_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], r9w
#define ADC_R9W_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], r9w
#define ADC_R9W_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], r9w
#define ADC_R9W_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], r9w
#define ADC_R9W_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], r9w
#define ADC_R9W_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], r9w
#define ADC_R9W_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], r9w
#define ADC_R9W_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], r9w
#define ADC_R9W_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], r9w

#define ADC_R10W_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], r10w
#define ADC_R10W_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], r10w
#define ADC_R10W_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], r10w
#define ADC_R10W_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], r10w
#define ADC_R10W_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], r10w
#define ADC_R10W_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], r10w
#define ADC_R10W_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], r10w
#define ADC_R10W_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], r10w
#define ADC_R10W_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], r10w
#define ADC_R10W_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], r10w
#define ADC_R10W_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], r10w
#define ADC_R10W_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], r10w
#define ADC_R10W_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], r10w
#define ADC_R10W_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], r10w
#define ADC_R10W_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], r10w
#define ADC_R10W_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], r10w
#define ADC_R10W_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], r10w
#define ADC_R10W_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], r10w
#define ADC_R10W_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], r10w
#define ADC_R10W_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], r10w
#define ADC_R10W_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], r10w
#define ADC_R10W_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], r10w
#define ADC_R10W_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], r10w
#define ADC_R10W_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], r10w

#define ADC_R11W_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], r11w
#define ADC_R11W_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], r11w
#define ADC_R11W_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], r11w
#define ADC_R11W_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], r11w
#define ADC_R11W_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], r11w
#define ADC_R11W_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], r11w
#define ADC_R11W_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], r11w
#define ADC_R11W_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], r11w
#define ADC_R11W_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], r11w
#define ADC_R11W_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], r11w
#define ADC_R11W_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], r11w
#define ADC_R11W_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], r11w
#define ADC_R11W_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], r11w
#define ADC_R11W_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], r11w
#define ADC_R11W_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], r11w
#define ADC_R11W_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], r11w
#define ADC_R11W_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], r11w
#define ADC_R11W_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], r11w
#define ADC_R11W_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], r11w
#define ADC_R11W_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], r11w
#define ADC_R11W_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], r11w
#define ADC_R11W_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], r11w
#define ADC_R11W_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], r11w
#define ADC_R11W_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], r11w

#define ADC_R12W_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], r12w
#define ADC_R12W_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], r12w
#define ADC_R12W_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], r12w
#define ADC_R12W_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], r12w
#define ADC_R12W_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], r12w
#define ADC_R12W_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], r12w
#define ADC_R12W_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], r12w
#define ADC_R12W_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], r12w
#define ADC_R12W_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], r12w
#define ADC_R12W_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], r12w
#define ADC_R12W_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], r12w
#define ADC_R12W_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], r12w
#define ADC_R12W_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], r12w
#define ADC_R12W_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], r12w
#define ADC_R12W_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], r12w
#define ADC_R12W_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], r12w
#define ADC_R12W_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], r12w
#define ADC_R12W_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], r12w
#define ADC_R12W_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], r12w
#define ADC_R12W_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], r12w
#define ADC_R12W_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], r12w
#define ADC_R12W_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], r12w
#define ADC_R12W_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], r12w
#define ADC_R12W_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], r12w

#define ADC_R13W_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], r13w
#define ADC_R13W_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], r13w
#define ADC_R13W_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], r13w
#define ADC_R13W_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], r13w
#define ADC_R13W_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], r13w
#define ADC_R13W_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], r13w
#define ADC_R13W_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], r13w
#define ADC_R13W_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], r13w
#define ADC_R13W_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], r13w
#define ADC_R13W_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], r13w
#define ADC_R13W_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], r13w
#define ADC_R13W_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], r13w
#define ADC_R13W_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], r13w
#define ADC_R13W_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], r13w
#define ADC_R13W_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], r13w
#define ADC_R13W_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], r13w
#define ADC_R13W_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], r13w
#define ADC_R13W_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], r13w
#define ADC_R13W_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], r13w
#define ADC_R13W_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], r13w
#define ADC_R13W_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], r13w
#define ADC_R13W_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], r13w
#define ADC_R13W_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], r13w
#define ADC_R13W_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], r13w

#define ADC_R14W_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], r14w
#define ADC_R14W_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], r14w
#define ADC_R14W_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], r14w
#define ADC_R14W_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], r14w
#define ADC_R14W_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], r14w
#define ADC_R14W_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], r14w
#define ADC_R14W_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], r14w
#define ADC_R14W_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], r14w
#define ADC_R14W_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], r14w
#define ADC_R14W_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], r14w
#define ADC_R14W_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], r14w
#define ADC_R14W_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], r14w
#define ADC_R14W_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], r14w
#define ADC_R14W_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], r14w
#define ADC_R14W_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], r14w
#define ADC_R14W_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], r14w
#define ADC_R14W_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], r14w
#define ADC_R14W_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], r14w
#define ADC_R14W_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], r14w
#define ADC_R14W_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], r14w
#define ADC_R14W_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], r14w
#define ADC_R14W_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], r14w
#define ADC_R14W_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], r14w
#define ADC_R14W_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], r14w

#define ADC_R15W_TO_PTR_RAX_(VALUE) adc word ptr [rax + VALUE], r15w
#define ADC_R15W_TO_PTR_RBX_(VALUE) adc word ptr [rbx + VALUE], r15w
#define ADC_R15W_TO_PTR_RCX_(VALUE) adc word ptr [rcx + VALUE], r15w
#define ADC_R15W_TO_PTR_RDX_(VALUE) adc word ptr [rdx + VALUE], r15w
#define ADC_R15W_TO_PTR_RDI_(VALUE) adc word ptr [rdi + VALUE], r15w
#define ADC_R15W_TO_PTR_RSI_(VALUE) adc word ptr [rsi + VALUE], r15w
#define ADC_R15W_TO_PTR_RBP_(VALUE) adc word ptr [rbp + VALUE], r15w
#define ADC_R15W_TO_PTR_RSP_(VALUE) adc word ptr [rsp + VALUE], r15w
#define ADC_R15W_TO_PTR_R8_(VALUE) adc word ptr [r8 + VALUE], r15w
#define ADC_R15W_TO_PTR_R9_(VALUE) adc word ptr [r9 + VALUE], r15w
#define ADC_R15W_TO_PTR_R10_(VALUE) adc word ptr [r10 + VALUE], r15w
#define ADC_R15W_TO_PTR_R11_(VALUE) adc word ptr [r11 + VALUE], r15w
#define ADC_R15W_TO_PTR_R12_(VALUE) adc word ptr [r12 + VALUE], r15w
#define ADC_R15W_TO_PTR_R13_(VALUE) adc word ptr [r13 + VALUE], r15w
#define ADC_R15W_TO_PTR_R14_(VALUE) adc word ptr [r14 + VALUE], r15w
#define ADC_R15W_TO_PTR_R15_(VALUE) adc word ptr [r15 + VALUE], r15w
#define ADC_R15W_TO_PTR_EAX_(VALUE) adc word ptr [eax + VALUE], r15w
#define ADC_R15W_TO_PTR_EBX_(VALUE) adc word ptr [ebx + VALUE], r15w
#define ADC_R15W_TO_PTR_ECX_(VALUE) adc word ptr [ecx + VALUE], r15w
#define ADC_R15W_TO_PTR_EDX_(VALUE) adc word ptr [edx + VALUE], r15w
#define ADC_R15W_TO_PTR_EDI_(VALUE) adc word ptr [edi + VALUE], r15w
#define ADC_R15W_TO_PTR_ESI_(VALUE) adc word ptr [esi + VALUE], r15w
#define ADC_R15W_TO_PTR_EBP_(VALUE) adc word ptr [ebp + VALUE], r15w
#define ADC_R15W_TO_PTR_ESP_(VALUE) adc word ptr [esp + VALUE], r15w
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
