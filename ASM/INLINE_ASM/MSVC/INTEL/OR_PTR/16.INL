#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define OR_AL_FROM_PTR_(VALUE) or al, byte ptr [VALUE]
#define OR_BL_FROM_PTR_(VALUE) or bl, byte ptr [VALUE]
#define OR_CL_FROM_PTR_(VALUE) or cl, byte ptr [VALUE]
#define OR_DL_FROM_PTR_(VALUE) or dl, byte ptr [VALUE]

#define OR_AL_TO_PTR_(VALUE) or byte ptr [VALUE], al
#define OR_BL_TO_PTR_(VALUE) or byte ptr [VALUE], bl
#define OR_CL_TO_PTR_(VALUE) or byte ptr [VALUE], cl
#define OR_DL_TO_PTR_(VALUE) or byte ptr [VALUE], dl

#define OR_AL_FROM_PTR_BX or al, byte ptr [bx]
#define OR_AL_FROM_PTR_BP or al, byte ptr [bp]
#define OR_AL_FROM_PTR_SI or al, byte ptr [si]
#define OR_AL_FROM_PTR_DI or al, byte ptr [di]

#define OR_BL_FROM_PTR_BX or bl, byte ptr [bx]
#define OR_BL_FROM_PTR_BP or bl, byte ptr [bp]
#define OR_BL_FROM_PTR_SI or bl, byte ptr [si]
#define OR_BL_FROM_PTR_DI or bl, byte ptr [di]

#define OR_CL_FROM_PTR_BX or cl, byte ptr [bx]
#define OR_CL_FROM_PTR_BP or cl, byte ptr [bp]
#define OR_CL_FROM_PTR_SI or cl, byte ptr [si]
#define OR_CL_FROM_PTR_DI or cl, byte ptr [di]

#define OR_DL_FROM_PTR_BX or dl, byte ptr [bx]
#define OR_DL_FROM_PTR_BP or dl, byte ptr [bp]
#define OR_DL_FROM_PTR_SI or dl, byte ptr [si]
#define OR_DL_FROM_PTR_DI or dl, byte ptr [di]

#define OR_AL_TO_PTR_BX or byte ptr [bx], al
#define OR_AL_TO_PTR_BP or byte ptr [bp], al
#define OR_AL_TO_PTR_SI or byte ptr [si], al
#define OR_AL_TO_PTR_DI or byte ptr [di], al

#define OR_BL_TO_PTR_BX or byte ptr [bx], bl
#define OR_BL_TO_PTR_BP or byte ptr [bp], bl
#define OR_BL_TO_PTR_SI or byte ptr [si], bl
#define OR_BL_TO_PTR_DI or byte ptr [di], bl

#define OR_CL_TO_PTR_BX or byte ptr [bx], cl
#define OR_CL_TO_PTR_BP or byte ptr [bp], cl
#define OR_CL_TO_PTR_SI or byte ptr [si], cl
#define OR_CL_TO_PTR_DI or byte ptr [di], cl

#define OR_DL_TO_PTR_BX or byte ptr [bx], dl
#define OR_DL_TO_PTR_BP or byte ptr [bp], dl
#define OR_DL_TO_PTR_SI or byte ptr [si], dl
#define OR_DL_TO_PTR_DI or byte ptr [di], dl

#define OR_AL_FROM_PTR_BX_(VALUE) or al, byte ptr [bx + VALUE]
#define OR_AL_FROM_PTR_BP_(VALUE) or al, byte ptr [bp + VALUE]
#define OR_AL_FROM_PTR_SI_(VALUE) or al, byte ptr [si + VALUE]
#define OR_AL_FROM_PTR_DI_(VALUE) or al, byte ptr [di + VALUE]

#define OR_BL_FROM_PTR_BX_(VALUE) or bl, byte ptr [bx + VALUE]
#define OR_BL_FROM_PTR_BP_(VALUE) or bl, byte ptr [bp + VALUE]
#define OR_BL_FROM_PTR_SI_(VALUE) or bl, byte ptr [si + VALUE]
#define OR_BL_FROM_PTR_DI_(VALUE) or bl, byte ptr [di + VALUE]

#define OR_CL_FROM_PTR_BX_(VALUE) or cl, byte ptr [bx + VALUE]
#define OR_CL_FROM_PTR_BP_(VALUE) or cl, byte ptr [bp + VALUE]
#define OR_CL_FROM_PTR_SI_(VALUE) or cl, byte ptr [si + VALUE]
#define OR_CL_FROM_PTR_DI_(VALUE) or cl, byte ptr [di + VALUE]

#define OR_DL_FROM_PTR_BX_(VALUE) or dl, byte ptr [bx + VALUE]
#define OR_DL_FROM_PTR_BP_(VALUE) or dl, byte ptr [bp + VALUE]
#define OR_DL_FROM_PTR_SI_(VALUE) or dl, byte ptr [si + VALUE]
#define OR_DL_FROM_PTR_DI_(VALUE) or dl, byte ptr [di + VALUE]

#define OR_AL_TO_PTR_BX_(VALUE) or byte ptr [bx + VALUE], al
#define OR_AL_TO_PTR_BP_(VALUE) or byte ptr [bp + VALUE], al
#define OR_AL_TO_PTR_SI_(VALUE) or byte ptr [si + VALUE], al
#define OR_AL_TO_PTR_DI_(VALUE) or byte ptr [di + VALUE], al

#define OR_BL_TO_PTR_BX_(VALUE) or byte ptr [bx + VALUE], bl
#define OR_BL_TO_PTR_BP_(VALUE) or byte ptr [bp + VALUE], bl
#define OR_BL_TO_PTR_SI_(VALUE) or byte ptr [si + VALUE], bl
#define OR_BL_TO_PTR_DI_(VALUE) or byte ptr [di + VALUE], bl

#define OR_CL_TO_PTR_BX_(VALUE) or byte ptr [bx + VALUE], cl
#define OR_CL_TO_PTR_BP_(VALUE) or byte ptr [bp + VALUE], cl
#define OR_CL_TO_PTR_SI_(VALUE) or byte ptr [si + VALUE], cl
#define OR_CL_TO_PTR_DI_(VALUE) or byte ptr [di + VALUE], cl

#define OR_DL_TO_PTR_BX_(VALUE) or byte ptr [bx + VALUE], dl
#define OR_DL_TO_PTR_BP_(VALUE) or byte ptr [bp + VALUE], dl
#define OR_DL_TO_PTR_SI_(VALUE) or byte ptr [si + VALUE], dl
#define OR_DL_TO_PTR_DI_(VALUE) or byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define OR_AL_FROM_PTR_(VALUE) or al, byte ptr [VALUE]
#define OR_BL_FROM_PTR_(VALUE) or bl, byte ptr [VALUE]
#define OR_CL_FROM_PTR_(VALUE) or cl, byte ptr [VALUE]
#define OR_DL_FROM_PTR_(VALUE) or dl, byte ptr [VALUE]

#define OR_AL_TO_PTR_(VALUE) or byte ptr [VALUE], al
#define OR_BL_TO_PTR_(VALUE) or byte ptr [VALUE], bl
#define OR_CL_TO_PTR_(VALUE) or byte ptr [VALUE], cl
#define OR_DL_TO_PTR_(VALUE) or byte ptr [VALUE], dl

#define OR_AL_FROM_PTR_EAX or al, byte ptr [eax]
#define OR_AL_FROM_PTR_EBX or al, byte ptr [ebx]
#define OR_AL_FROM_PTR_ECX or al, byte ptr [ecx]
#define OR_AL_FROM_PTR_EDX or al, byte ptr [edx]
#define OR_AL_FROM_PTR_EDI or al, byte ptr [edi]
#define OR_AL_FROM_PTR_ESI or al, byte ptr [esi]
#define OR_AL_FROM_PTR_EBP or al, byte ptr [ebp]
#define OR_AL_FROM_PTR_ESP or al, byte ptr [esp]
#define OR_AL_FROM_PTR_BX or al, byte ptr [bx]
#define OR_AL_FROM_PTR_BP or al, byte ptr [bp]
#define OR_AL_FROM_PTR_SI or al, byte ptr [si]
#define OR_AL_FROM_PTR_DI or al, byte ptr [di]

#define OR_BL_FROM_PTR_EAX or bl, byte ptr [eax]
#define OR_BL_FROM_PTR_EBX or bl, byte ptr [ebx]
#define OR_BL_FROM_PTR_ECX or bl, byte ptr [ecx]
#define OR_BL_FROM_PTR_EDX or bl, byte ptr [edx]
#define OR_BL_FROM_PTR_EDI or bl, byte ptr [edi]
#define OR_BL_FROM_PTR_ESI or bl, byte ptr [esi]
#define OR_BL_FROM_PTR_EBP or bl, byte ptr [ebp]
#define OR_BL_FROM_PTR_ESP or bl, byte ptr [esp]
#define OR_BL_FROM_PTR_BX or bl, byte ptr [bx]
#define OR_BL_FROM_PTR_BP or bl, byte ptr [bp]
#define OR_BL_FROM_PTR_SI or bl, byte ptr [si]
#define OR_BL_FROM_PTR_DI or bl, byte ptr [di]

#define OR_CL_FROM_PTR_EAX or cl, byte ptr [eax]
#define OR_CL_FROM_PTR_EBX or cl, byte ptr [ebx]
#define OR_CL_FROM_PTR_ECX or cl, byte ptr [ecx]
#define OR_CL_FROM_PTR_EDX or cl, byte ptr [edx]
#define OR_CL_FROM_PTR_EDI or cl, byte ptr [edi]
#define OR_CL_FROM_PTR_ESI or cl, byte ptr [esi]
#define OR_CL_FROM_PTR_EBP or cl, byte ptr [ebp]
#define OR_CL_FROM_PTR_ESP or cl, byte ptr [esp]
#define OR_CL_FROM_PTR_BX or cl, byte ptr [bx]
#define OR_CL_FROM_PTR_BP or cl, byte ptr [bp]
#define OR_CL_FROM_PTR_SI or cl, byte ptr [si]
#define OR_CL_FROM_PTR_DI or cl, byte ptr [di]

#define OR_DL_FROM_PTR_EAX or dl, byte ptr [eax]
#define OR_DL_FROM_PTR_EBX or dl, byte ptr [ebx]
#define OR_DL_FROM_PTR_ECX or dl, byte ptr [ecx]
#define OR_DL_FROM_PTR_EDX or dl, byte ptr [edx]
#define OR_DL_FROM_PTR_EDI or dl, byte ptr [edi]
#define OR_DL_FROM_PTR_ESI or dl, byte ptr [esi]
#define OR_DL_FROM_PTR_EBP or dl, byte ptr [ebp]
#define OR_DL_FROM_PTR_ESP or dl, byte ptr [esp]
#define OR_DL_FROM_PTR_BX or dl, byte ptr [bx]
#define OR_DL_FROM_PTR_BP or dl, byte ptr [bp]
#define OR_DL_FROM_PTR_SI or dl, byte ptr [si]
#define OR_DL_FROM_PTR_DI or dl, byte ptr [di]

#define OR_AL_TO_PTR_EAX or byte ptr [eax], al
#define OR_AL_TO_PTR_EBX or byte ptr [ebx], al
#define OR_AL_TO_PTR_ECX or byte ptr [ecx], al
#define OR_AL_TO_PTR_EDX or byte ptr [edx], al
#define OR_AL_TO_PTR_EDI or byte ptr [edi], al
#define OR_AL_TO_PTR_ESI or byte ptr [esi], al
#define OR_AL_TO_PTR_EBP or byte ptr [ebp], al
#define OR_AL_TO_PTR_ESP or byte ptr [esp], al
#define OR_AL_TO_PTR_BX or byte ptr [bx], al
#define OR_AL_TO_PTR_BP or byte ptr [bp], al
#define OR_AL_TO_PTR_SI or byte ptr [si], al
#define OR_AL_TO_PTR_DI or byte ptr [di], al

#define OR_BL_TO_PTR_EAX or byte ptr [eax], bl
#define OR_BL_TO_PTR_EBX or byte ptr [ebx], bl
#define OR_BL_TO_PTR_ECX or byte ptr [ecx], bl
#define OR_BL_TO_PTR_EDX or byte ptr [edx], bl
#define OR_BL_TO_PTR_EDI or byte ptr [edi], bl
#define OR_BL_TO_PTR_ESI or byte ptr [esi], bl
#define OR_BL_TO_PTR_EBP or byte ptr [ebp], bl
#define OR_BL_TO_PTR_ESP or byte ptr [esp], bl
#define OR_BL_TO_PTR_BX or byte ptr [bx], bl
#define OR_BL_TO_PTR_BP or byte ptr [bp], bl
#define OR_BL_TO_PTR_SI or byte ptr [si], bl
#define OR_BL_TO_PTR_DI or byte ptr [di], bl

#define OR_CL_TO_PTR_EAX or byte ptr [eax], cl
#define OR_CL_TO_PTR_EBX or byte ptr [ebx], cl
#define OR_CL_TO_PTR_ECX or byte ptr [ecx], cl
#define OR_CL_TO_PTR_EDX or byte ptr [edx], cl
#define OR_CL_TO_PTR_EDI or byte ptr [edi], cl
#define OR_CL_TO_PTR_ESI or byte ptr [esi], cl
#define OR_CL_TO_PTR_EBP or byte ptr [ebp], cl
#define OR_CL_TO_PTR_ESP or byte ptr [esp], cl
#define OR_CL_TO_PTR_BX or byte ptr [bx], cl
#define OR_CL_TO_PTR_BP or byte ptr [bp], cl
#define OR_CL_TO_PTR_SI or byte ptr [si], cl
#define OR_CL_TO_PTR_DI or byte ptr [di], cl

#define OR_DL_TO_PTR_EAX or byte ptr [eax], dl
#define OR_DL_TO_PTR_EBX or byte ptr [ebx], dl
#define OR_DL_TO_PTR_ECX or byte ptr [ecx], dl
#define OR_DL_TO_PTR_EDX or byte ptr [edx], dl
#define OR_DL_TO_PTR_EDI or byte ptr [edi], dl
#define OR_DL_TO_PTR_ESI or byte ptr [esi], dl
#define OR_DL_TO_PTR_EBP or byte ptr [ebp], dl
#define OR_DL_TO_PTR_ESP or byte ptr [esp], dl
#define OR_DL_TO_PTR_BX or byte ptr [bx], dl
#define OR_DL_TO_PTR_BP or byte ptr [bp], dl
#define OR_DL_TO_PTR_SI or byte ptr [si], dl
#define OR_DL_TO_PTR_DI or byte ptr [di], dl

#define OR_AL_FROM_PTR_EAX_(VALUE) or al, byte ptr [eax + VALUE]
#define OR_AL_FROM_PTR_EBX_(VALUE) or al, byte ptr [ebx + VALUE]
#define OR_AL_FROM_PTR_ECX_(VALUE) or al, byte ptr [ecx + VALUE]
#define OR_AL_FROM_PTR_EDX_(VALUE) or al, byte ptr [edx + VALUE]
#define OR_AL_FROM_PTR_EDI_(VALUE) or al, byte ptr [edi + VALUE]
#define OR_AL_FROM_PTR_ESI_(VALUE) or al, byte ptr [esi + VALUE]
#define OR_AL_FROM_PTR_EBP_(VALUE) or al, byte ptr [ebp + VALUE]
#define OR_AL_FROM_PTR_ESP_(VALUE) or al, byte ptr [esp + VALUE]
#define OR_AL_FROM_PTR_BX_(VALUE) or al, byte ptr [bx + VALUE]
#define OR_AL_FROM_PTR_BP_(VALUE) or al, byte ptr [bp + VALUE]
#define OR_AL_FROM_PTR_SI_(VALUE) or al, byte ptr [si + VALUE]
#define OR_AL_FROM_PTR_DI_(VALUE) or al, byte ptr [di + VALUE]

#define OR_BL_FROM_PTR_EAX_(VALUE) or bl, byte ptr [eax + VALUE]
#define OR_BL_FROM_PTR_EBX_(VALUE) or bl, byte ptr [ebx + VALUE]
#define OR_BL_FROM_PTR_ECX_(VALUE) or bl, byte ptr [ecx + VALUE]
#define OR_BL_FROM_PTR_EDX_(VALUE) or bl, byte ptr [edx + VALUE]
#define OR_BL_FROM_PTR_EDI_(VALUE) or bl, byte ptr [edi + VALUE]
#define OR_BL_FROM_PTR_ESI_(VALUE) or bl, byte ptr [esi + VALUE]
#define OR_BL_FROM_PTR_EBP_(VALUE) or bl, byte ptr [ebp + VALUE]
#define OR_BL_FROM_PTR_ESP_(VALUE) or bl, byte ptr [esp + VALUE]
#define OR_BL_FROM_PTR_BX_(VALUE) or bl, byte ptr [bx + VALUE]
#define OR_BL_FROM_PTR_BP_(VALUE) or bl, byte ptr [bp + VALUE]
#define OR_BL_FROM_PTR_SI_(VALUE) or bl, byte ptr [si + VALUE]
#define OR_BL_FROM_PTR_DI_(VALUE) or bl, byte ptr [di + VALUE]

#define OR_CL_FROM_PTR_EAX_(VALUE) or cl, byte ptr [eax + VALUE]
#define OR_CL_FROM_PTR_EBX_(VALUE) or cl, byte ptr [ebx + VALUE]
#define OR_CL_FROM_PTR_ECX_(VALUE) or cl, byte ptr [ecx + VALUE]
#define OR_CL_FROM_PTR_EDX_(VALUE) or cl, byte ptr [edx + VALUE]
#define OR_CL_FROM_PTR_EDI_(VALUE) or cl, byte ptr [edi + VALUE]
#define OR_CL_FROM_PTR_ESI_(VALUE) or cl, byte ptr [esi + VALUE]
#define OR_CL_FROM_PTR_EBP_(VALUE) or cl, byte ptr [ebp + VALUE]
#define OR_CL_FROM_PTR_ESP_(VALUE) or cl, byte ptr [esp + VALUE]
#define OR_CL_FROM_PTR_BX_(VALUE) or cl, byte ptr [bx + VALUE]
#define OR_CL_FROM_PTR_BP_(VALUE) or cl, byte ptr [bp + VALUE]
#define OR_CL_FROM_PTR_SI_(VALUE) or cl, byte ptr [si + VALUE]
#define OR_CL_FROM_PTR_DI_(VALUE) or cl, byte ptr [di + VALUE]

#define OR_DL_FROM_PTR_EAX_(VALUE) or dl, byte ptr [eax + VALUE]
#define OR_DL_FROM_PTR_EBX_(VALUE) or dl, byte ptr [ebx + VALUE]
#define OR_DL_FROM_PTR_ECX_(VALUE) or dl, byte ptr [ecx + VALUE]
#define OR_DL_FROM_PTR_EDX_(VALUE) or dl, byte ptr [edx + VALUE]
#define OR_DL_FROM_PTR_EDI_(VALUE) or dl, byte ptr [edi + VALUE]
#define OR_DL_FROM_PTR_ESI_(VALUE) or dl, byte ptr [esi + VALUE]
#define OR_DL_FROM_PTR_EBP_(VALUE) or dl, byte ptr [ebp + VALUE]
#define OR_DL_FROM_PTR_ESP_(VALUE) or dl, byte ptr [esp + VALUE]
#define OR_DL_FROM_PTR_BX_(VALUE) or dl, byte ptr [bx + VALUE]
#define OR_DL_FROM_PTR_BP_(VALUE) or dl, byte ptr [bp + VALUE]
#define OR_DL_FROM_PTR_SI_(VALUE) or dl, byte ptr [si + VALUE]
#define OR_DL_FROM_PTR_DI_(VALUE) or dl, byte ptr [di + VALUE]

#define OR_AL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], al
#define OR_AL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], al
#define OR_AL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], al
#define OR_AL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], al
#define OR_AL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], al
#define OR_AL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], al
#define OR_AL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], al
#define OR_AL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], al
#define OR_AL_TO_PTR_BX_(VALUE) or byte ptr [bx + VALUE], al
#define OR_AL_TO_PTR_BP_(VALUE) or byte ptr [bp + VALUE], al
#define OR_AL_TO_PTR_SI_(VALUE) or byte ptr [si + VALUE], al
#define OR_AL_TO_PTR_DI_(VALUE) or byte ptr [di + VALUE], al

#define OR_BL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], bl
#define OR_BL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], bl
#define OR_BL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], bl
#define OR_BL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], bl
#define OR_BL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], bl
#define OR_BL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], bl
#define OR_BL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], bl
#define OR_BL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], bl
#define OR_BL_TO_PTR_BX_(VALUE) or byte ptr [bx + VALUE], bl
#define OR_BL_TO_PTR_BP_(VALUE) or byte ptr [bp + VALUE], bl
#define OR_BL_TO_PTR_SI_(VALUE) or byte ptr [si + VALUE], bl
#define OR_BL_TO_PTR_DI_(VALUE) or byte ptr [di + VALUE], bl

#define OR_CL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], cl
#define OR_CL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], cl
#define OR_CL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], cl
#define OR_CL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], cl
#define OR_CL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], cl
#define OR_CL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], cl
#define OR_CL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], cl
#define OR_CL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], cl
#define OR_CL_TO_PTR_BX_(VALUE) or byte ptr [bx + VALUE], cl
#define OR_CL_TO_PTR_BP_(VALUE) or byte ptr [bp + VALUE], cl
#define OR_CL_TO_PTR_SI_(VALUE) or byte ptr [si + VALUE], cl
#define OR_CL_TO_PTR_DI_(VALUE) or byte ptr [di + VALUE], cl

#define OR_DL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], dl
#define OR_DL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], dl
#define OR_DL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], dl
#define OR_DL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], dl
#define OR_DL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], dl
#define OR_DL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], dl
#define OR_DL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], dl
#define OR_DL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], dl
#define OR_DL_TO_PTR_BX_(VALUE) or byte ptr [bx + VALUE], dl
#define OR_DL_TO_PTR_BP_(VALUE) or byte ptr [bp + VALUE], dl
#define OR_DL_TO_PTR_SI_(VALUE) or byte ptr [si + VALUE], dl
#define OR_DL_TO_PTR_DI_(VALUE) or byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_AL_FROM_PTR_(VALUE) or al, byte ptr [VALUE]
#define OR_BL_FROM_PTR_(VALUE) or bl, byte ptr [VALUE]
#define OR_CL_FROM_PTR_(VALUE) or cl, byte ptr [VALUE]
#define OR_DL_FROM_PTR_(VALUE) or dl, byte ptr [VALUE]
#define OR_DIL_FROM_PTR_(VALUE) or dil, byte ptr [VALUE]
#define OR_SIL_FROM_PTR_(VALUE) or sil, byte ptr [VALUE]
#define OR_BPL_FROM_PTR_(VALUE) or bpl, byte ptr [VALUE]
#define OR_SPL_FROM_PTR_(VALUE) or spl, byte ptr [VALUE]
#define OR_R8B_FROM_PTR_(VALUE) or r8b, byte ptr [VALUE]
#define OR_R9B_FROM_PTR_(VALUE) or r9b, byte ptr [VALUE]
#define OR_R10B_FROM_PTR_(VALUE) or r10b, byte ptr [VALUE]
#define OR_R11B_FROM_PTR_(VALUE) or r11b, byte ptr [VALUE]
#define OR_R12B_FROM_PTR_(VALUE) or r12b, byte ptr [VALUE]
#define OR_R13B_FROM_PTR_(VALUE) or r13b, byte ptr [VALUE]
#define OR_R14B_FROM_PTR_(VALUE) or r14b, byte ptr [VALUE]
#define OR_R15B_FROM_PTR_(VALUE) or r15b, byte ptr [VALUE]

#define OR_AL_TO_PTR_(VALUE) or byte ptr [VALUE], al
#define OR_BL_TO_PTR_(VALUE) or byte ptr [VALUE], bl
#define OR_CL_TO_PTR_(VALUE) or byte ptr [VALUE], cl
#define OR_DL_TO_PTR_(VALUE) or byte ptr [VALUE], dl
#define OR_DIL_TO_PTR_(VALUE) or byte ptr [VALUE], dil
#define OR_SIL_TO_PTR_(VALUE) or byte ptr [VALUE], sil
#define OR_BPL_TO_PTR_(VALUE) or byte ptr [VALUE], bpl
#define OR_SPL_TO_PTR_(VALUE) or byte ptr [VALUE], spl
#define OR_R8B_TO_PTR_(VALUE) or byte ptr [VALUE], r8b
#define OR_R9B_TO_PTR_(VALUE) or byte ptr [VALUE], r9b
#define OR_R10B_TO_PTR_(VALUE) or byte ptr [VALUE], r10b
#define OR_R11B_TO_PTR_(VALUE) or byte ptr [VALUE], r11b
#define OR_R12B_TO_PTR_(VALUE) or byte ptr [VALUE], r12b
#define OR_R13B_TO_PTR_(VALUE) or byte ptr [VALUE], r13b
#define OR_R14B_TO_PTR_(VALUE) or byte ptr [VALUE], r14b
#define OR_R15B_TO_PTR_(VALUE) or byte ptr [VALUE], r15b

#define OR_AL_FROM_PTR_RAX or al, byte ptr [rax]
#define OR_AL_FROM_PTR_RBX or al, byte ptr [rbx]
#define OR_AL_FROM_PTR_RCX or al, byte ptr [rcx]
#define OR_AL_FROM_PTR_RDX or al, byte ptr [rdx]
#define OR_AL_FROM_PTR_RDI or al, byte ptr [rdi]
#define OR_AL_FROM_PTR_RSI or al, byte ptr [rsi]
#define OR_AL_FROM_PTR_RBP or al, byte ptr [rbp]
#define OR_AL_FROM_PTR_RSP or al, byte ptr [rsp]
#define OR_AL_FROM_PTR_R8 or al, byte ptr [r8]
#define OR_AL_FROM_PTR_R9 or al, byte ptr [r9]
#define OR_AL_FROM_PTR_R10 or al, byte ptr [r10]
#define OR_AL_FROM_PTR_R11 or al, byte ptr [r11]
#define OR_AL_FROM_PTR_R12 or al, byte ptr [r12]
#define OR_AL_FROM_PTR_R13 or al, byte ptr [r13]
#define OR_AL_FROM_PTR_R14 or al, byte ptr [r14]
#define OR_AL_FROM_PTR_R15 or al, byte ptr [r15]
#define OR_AL_FROM_PTR_EAX or al, byte ptr [eax]
#define OR_AL_FROM_PTR_EBX or al, byte ptr [ebx]
#define OR_AL_FROM_PTR_ECX or al, byte ptr [ecx]
#define OR_AL_FROM_PTR_EDX or al, byte ptr [edx]
#define OR_AL_FROM_PTR_EDI or al, byte ptr [edi]
#define OR_AL_FROM_PTR_ESI or al, byte ptr [esi]
#define OR_AL_FROM_PTR_EBP or al, byte ptr [ebp]
#define OR_AL_FROM_PTR_ESP or al, byte ptr [esp]

#define OR_BL_FROM_PTR_RAX or bl, byte ptr [rax]
#define OR_BL_FROM_PTR_RBX or bl, byte ptr [rbx]
#define OR_BL_FROM_PTR_RCX or bl, byte ptr [rcx]
#define OR_BL_FROM_PTR_RDX or bl, byte ptr [rdx]
#define OR_BL_FROM_PTR_RDI or bl, byte ptr [rdi]
#define OR_BL_FROM_PTR_RSI or bl, byte ptr [rsi]
#define OR_BL_FROM_PTR_RBP or bl, byte ptr [rbp]
#define OR_BL_FROM_PTR_RSP or bl, byte ptr [rsp]
#define OR_BL_FROM_PTR_R8 or bl, byte ptr [r8]
#define OR_BL_FROM_PTR_R9 or bl, byte ptr [r9]
#define OR_BL_FROM_PTR_R10 or bl, byte ptr [r10]
#define OR_BL_FROM_PTR_R11 or bl, byte ptr [r11]
#define OR_BL_FROM_PTR_R12 or bl, byte ptr [r12]
#define OR_BL_FROM_PTR_R13 or bl, byte ptr [r13]
#define OR_BL_FROM_PTR_R14 or bl, byte ptr [r14]
#define OR_BL_FROM_PTR_R15 or bl, byte ptr [r15]
#define OR_BL_FROM_PTR_EAX or bl, byte ptr [eax]
#define OR_BL_FROM_PTR_EBX or bl, byte ptr [ebx]
#define OR_BL_FROM_PTR_ECX or bl, byte ptr [ecx]
#define OR_BL_FROM_PTR_EDX or bl, byte ptr [edx]
#define OR_BL_FROM_PTR_EDI or bl, byte ptr [edi]
#define OR_BL_FROM_PTR_ESI or bl, byte ptr [esi]
#define OR_BL_FROM_PTR_EBP or bl, byte ptr [ebp]
#define OR_BL_FROM_PTR_ESP or bl, byte ptr [esp]

#define OR_CL_FROM_PTR_RAX or cl, byte ptr [rax]
#define OR_CL_FROM_PTR_RBX or cl, byte ptr [rbx]
#define OR_CL_FROM_PTR_RCX or cl, byte ptr [rcx]
#define OR_CL_FROM_PTR_RDX or cl, byte ptr [rdx]
#define OR_CL_FROM_PTR_RDI or cl, byte ptr [rdi]
#define OR_CL_FROM_PTR_RSI or cl, byte ptr [rsi]
#define OR_CL_FROM_PTR_RBP or cl, byte ptr [rbp]
#define OR_CL_FROM_PTR_RSP or cl, byte ptr [rsp]
#define OR_CL_FROM_PTR_R8 or cl, byte ptr [r8]
#define OR_CL_FROM_PTR_R9 or cl, byte ptr [r9]
#define OR_CL_FROM_PTR_R10 or cl, byte ptr [r10]
#define OR_CL_FROM_PTR_R11 or cl, byte ptr [r11]
#define OR_CL_FROM_PTR_R12 or cl, byte ptr [r12]
#define OR_CL_FROM_PTR_R13 or cl, byte ptr [r13]
#define OR_CL_FROM_PTR_R14 or cl, byte ptr [r14]
#define OR_CL_FROM_PTR_R15 or cl, byte ptr [r15]
#define OR_CL_FROM_PTR_EAX or cl, byte ptr [eax]
#define OR_CL_FROM_PTR_EBX or cl, byte ptr [ebx]
#define OR_CL_FROM_PTR_ECX or cl, byte ptr [ecx]
#define OR_CL_FROM_PTR_EDX or cl, byte ptr [edx]
#define OR_CL_FROM_PTR_EDI or cl, byte ptr [edi]
#define OR_CL_FROM_PTR_ESI or cl, byte ptr [esi]
#define OR_CL_FROM_PTR_EBP or cl, byte ptr [ebp]
#define OR_CL_FROM_PTR_ESP or cl, byte ptr [esp]

#define OR_DL_FROM_PTR_RAX or dl, byte ptr [rax]
#define OR_DL_FROM_PTR_RBX or dl, byte ptr [rbx]
#define OR_DL_FROM_PTR_RCX or dl, byte ptr [rcx]
#define OR_DL_FROM_PTR_RDX or dl, byte ptr [rdx]
#define OR_DL_FROM_PTR_RDI or dl, byte ptr [rdi]
#define OR_DL_FROM_PTR_RSI or dl, byte ptr [rsi]
#define OR_DL_FROM_PTR_RBP or dl, byte ptr [rbp]
#define OR_DL_FROM_PTR_RSP or dl, byte ptr [rsp]
#define OR_DL_FROM_PTR_R8 or dl, byte ptr [r8]
#define OR_DL_FROM_PTR_R9 or dl, byte ptr [r9]
#define OR_DL_FROM_PTR_R10 or dl, byte ptr [r10]
#define OR_DL_FROM_PTR_R11 or dl, byte ptr [r11]
#define OR_DL_FROM_PTR_R12 or dl, byte ptr [r12]
#define OR_DL_FROM_PTR_R13 or dl, byte ptr [r13]
#define OR_DL_FROM_PTR_R14 or dl, byte ptr [r14]
#define OR_DL_FROM_PTR_R15 or dl, byte ptr [r15]
#define OR_DL_FROM_PTR_EAX or dl, byte ptr [eax]
#define OR_DL_FROM_PTR_EBX or dl, byte ptr [ebx]
#define OR_DL_FROM_PTR_ECX or dl, byte ptr [ecx]
#define OR_DL_FROM_PTR_EDX or dl, byte ptr [edx]
#define OR_DL_FROM_PTR_EDI or dl, byte ptr [edi]
#define OR_DL_FROM_PTR_ESI or dl, byte ptr [esi]
#define OR_DL_FROM_PTR_EBP or dl, byte ptr [ebp]
#define OR_DL_FROM_PTR_ESP or dl, byte ptr [esp]

#define OR_DIL_FROM_PTR_RAX or dil, byte ptr [rax]
#define OR_DIL_FROM_PTR_RBX or dil, byte ptr [rbx]
#define OR_DIL_FROM_PTR_RCX or dil, byte ptr [rcx]
#define OR_DIL_FROM_PTR_RDX or dil, byte ptr [rdx]
#define OR_DIL_FROM_PTR_RDI or dil, byte ptr [rdi]
#define OR_DIL_FROM_PTR_RSI or dil, byte ptr [rsi]
#define OR_DIL_FROM_PTR_RBP or dil, byte ptr [rbp]
#define OR_DIL_FROM_PTR_RSP or dil, byte ptr [rsp]
#define OR_DIL_FROM_PTR_R8 or dil, byte ptr [r8]
#define OR_DIL_FROM_PTR_R9 or dil, byte ptr [r9]
#define OR_DIL_FROM_PTR_R10 or dil, byte ptr [r10]
#define OR_DIL_FROM_PTR_R11 or dil, byte ptr [r11]
#define OR_DIL_FROM_PTR_R12 or dil, byte ptr [r12]
#define OR_DIL_FROM_PTR_R13 or dil, byte ptr [r13]
#define OR_DIL_FROM_PTR_R14 or dil, byte ptr [r14]
#define OR_DIL_FROM_PTR_R15 or dil, byte ptr [r15]
#define OR_DIL_FROM_PTR_EAX or dil, byte ptr [eax]
#define OR_DIL_FROM_PTR_EBX or dil, byte ptr [ebx]
#define OR_DIL_FROM_PTR_ECX or dil, byte ptr [ecx]
#define OR_DIL_FROM_PTR_EDX or dil, byte ptr [edx]
#define OR_DIL_FROM_PTR_EDI or dil, byte ptr [edi]
#define OR_DIL_FROM_PTR_ESI or dil, byte ptr [esi]
#define OR_DIL_FROM_PTR_EBP or dil, byte ptr [ebp]
#define OR_DIL_FROM_PTR_ESP or dil, byte ptr [esp]

#define OR_SIL_FROM_PTR_RAX or sil, byte ptr [rax]
#define OR_SIL_FROM_PTR_RBX or sil, byte ptr [rbx]
#define OR_SIL_FROM_PTR_RCX or sil, byte ptr [rcx]
#define OR_SIL_FROM_PTR_RDX or sil, byte ptr [rdx]
#define OR_SIL_FROM_PTR_RDI or sil, byte ptr [rdi]
#define OR_SIL_FROM_PTR_RSI or sil, byte ptr [rsi]
#define OR_SIL_FROM_PTR_RBP or sil, byte ptr [rbp]
#define OR_SIL_FROM_PTR_RSP or sil, byte ptr [rsp]
#define OR_SIL_FROM_PTR_R8 or sil, byte ptr [r8]
#define OR_SIL_FROM_PTR_R9 or sil, byte ptr [r9]
#define OR_SIL_FROM_PTR_R10 or sil, byte ptr [r10]
#define OR_SIL_FROM_PTR_R11 or sil, byte ptr [r11]
#define OR_SIL_FROM_PTR_R12 or sil, byte ptr [r12]
#define OR_SIL_FROM_PTR_R13 or sil, byte ptr [r13]
#define OR_SIL_FROM_PTR_R14 or sil, byte ptr [r14]
#define OR_SIL_FROM_PTR_R15 or sil, byte ptr [r15]
#define OR_SIL_FROM_PTR_EAX or sil, byte ptr [eax]
#define OR_SIL_FROM_PTR_EBX or sil, byte ptr [ebx]
#define OR_SIL_FROM_PTR_ECX or sil, byte ptr [ecx]
#define OR_SIL_FROM_PTR_EDX or sil, byte ptr [edx]
#define OR_SIL_FROM_PTR_EDI or sil, byte ptr [edi]
#define OR_SIL_FROM_PTR_ESI or sil, byte ptr [esi]
#define OR_SIL_FROM_PTR_EBP or sil, byte ptr [ebp]
#define OR_SIL_FROM_PTR_ESP or sil, byte ptr [esp]

#define OR_BPL_FROM_PTR_RAX or bpl, byte ptr [rax]
#define OR_BPL_FROM_PTR_RBX or bpl, byte ptr [rbx]
#define OR_BPL_FROM_PTR_RCX or bpl, byte ptr [rcx]
#define OR_BPL_FROM_PTR_RDX or bpl, byte ptr [rdx]
#define OR_BPL_FROM_PTR_RDI or bpl, byte ptr [rdi]
#define OR_BPL_FROM_PTR_RSI or bpl, byte ptr [rsi]
#define OR_BPL_FROM_PTR_RBP or bpl, byte ptr [rbp]
#define OR_BPL_FROM_PTR_RSP or bpl, byte ptr [rsp]
#define OR_BPL_FROM_PTR_R8 or bpl, byte ptr [r8]
#define OR_BPL_FROM_PTR_R9 or bpl, byte ptr [r9]
#define OR_BPL_FROM_PTR_R10 or bpl, byte ptr [r10]
#define OR_BPL_FROM_PTR_R11 or bpl, byte ptr [r11]
#define OR_BPL_FROM_PTR_R12 or bpl, byte ptr [r12]
#define OR_BPL_FROM_PTR_R13 or bpl, byte ptr [r13]
#define OR_BPL_FROM_PTR_R14 or bpl, byte ptr [r14]
#define OR_BPL_FROM_PTR_R15 or bpl, byte ptr [r15]
#define OR_BPL_FROM_PTR_EAX or bpl, byte ptr [eax]
#define OR_BPL_FROM_PTR_EBX or bpl, byte ptr [ebx]
#define OR_BPL_FROM_PTR_ECX or bpl, byte ptr [ecx]
#define OR_BPL_FROM_PTR_EDX or bpl, byte ptr [edx]
#define OR_BPL_FROM_PTR_EDI or bpl, byte ptr [edi]
#define OR_BPL_FROM_PTR_ESI or bpl, byte ptr [esi]
#define OR_BPL_FROM_PTR_EBP or bpl, byte ptr [ebp]
#define OR_BPL_FROM_PTR_ESP or bpl, byte ptr [esp]

#define OR_SPL_FROM_PTR_RAX or spl, byte ptr [rax]
#define OR_SPL_FROM_PTR_RBX or spl, byte ptr [rbx]
#define OR_SPL_FROM_PTR_RCX or spl, byte ptr [rcx]
#define OR_SPL_FROM_PTR_RDX or spl, byte ptr [rdx]
#define OR_SPL_FROM_PTR_RDI or spl, byte ptr [rdi]
#define OR_SPL_FROM_PTR_RSI or spl, byte ptr [rsi]
#define OR_SPL_FROM_PTR_RBP or spl, byte ptr [rbp]
#define OR_SPL_FROM_PTR_RSP or spl, byte ptr [rsp]
#define OR_SPL_FROM_PTR_R8 or spl, byte ptr [r8]
#define OR_SPL_FROM_PTR_R9 or spl, byte ptr [r9]
#define OR_SPL_FROM_PTR_R10 or spl, byte ptr [r10]
#define OR_SPL_FROM_PTR_R11 or spl, byte ptr [r11]
#define OR_SPL_FROM_PTR_R12 or spl, byte ptr [r12]
#define OR_SPL_FROM_PTR_R13 or spl, byte ptr [r13]
#define OR_SPL_FROM_PTR_R14 or spl, byte ptr [r14]
#define OR_SPL_FROM_PTR_R15 or spl, byte ptr [r15]
#define OR_SPL_FROM_PTR_EAX or spl, byte ptr [eax]
#define OR_SPL_FROM_PTR_EBX or spl, byte ptr [ebx]
#define OR_SPL_FROM_PTR_ECX or spl, byte ptr [ecx]
#define OR_SPL_FROM_PTR_EDX or spl, byte ptr [edx]
#define OR_SPL_FROM_PTR_EDI or spl, byte ptr [edi]
#define OR_SPL_FROM_PTR_ESI or spl, byte ptr [esi]
#define OR_SPL_FROM_PTR_EBP or spl, byte ptr [ebp]
#define OR_SPL_FROM_PTR_ESP or spl, byte ptr [esp]

#define OR_R8B_FROM_PTR_RAX or r8b, byte ptr [rax]
#define OR_R8B_FROM_PTR_RBX or r8b, byte ptr [rbx]
#define OR_R8B_FROM_PTR_RCX or r8b, byte ptr [rcx]
#define OR_R8B_FROM_PTR_RDX or r8b, byte ptr [rdx]
#define OR_R8B_FROM_PTR_RDI or r8b, byte ptr [rdi]
#define OR_R8B_FROM_PTR_RSI or r8b, byte ptr [rsi]
#define OR_R8B_FROM_PTR_RBP or r8b, byte ptr [rbp]
#define OR_R8B_FROM_PTR_RSP or r8b, byte ptr [rsp]
#define OR_R8B_FROM_PTR_R8 or r8b, byte ptr [r8]
#define OR_R8B_FROM_PTR_R9 or r8b, byte ptr [r9]
#define OR_R8B_FROM_PTR_R10 or r8b, byte ptr [r10]
#define OR_R8B_FROM_PTR_R11 or r8b, byte ptr [r11]
#define OR_R8B_FROM_PTR_R12 or r8b, byte ptr [r12]
#define OR_R8B_FROM_PTR_R13 or r8b, byte ptr [r13]
#define OR_R8B_FROM_PTR_R14 or r8b, byte ptr [r14]
#define OR_R8B_FROM_PTR_R15 or r8b, byte ptr [r15]
#define OR_R8B_FROM_PTR_EAX or r8b, byte ptr [eax]
#define OR_R8B_FROM_PTR_EBX or r8b, byte ptr [ebx]
#define OR_R8B_FROM_PTR_ECX or r8b, byte ptr [ecx]
#define OR_R8B_FROM_PTR_EDX or r8b, byte ptr [edx]
#define OR_R8B_FROM_PTR_EDI or r8b, byte ptr [edi]
#define OR_R8B_FROM_PTR_ESI or r8b, byte ptr [esi]
#define OR_R8B_FROM_PTR_EBP or r8b, byte ptr [ebp]
#define OR_R8B_FROM_PTR_ESP or r8b, byte ptr [esp]

#define OR_R9B_FROM_PTR_RAX or r9b, byte ptr [rax]
#define OR_R9B_FROM_PTR_RBX or r9b, byte ptr [rbx]
#define OR_R9B_FROM_PTR_RCX or r9b, byte ptr [rcx]
#define OR_R9B_FROM_PTR_RDX or r9b, byte ptr [rdx]
#define OR_R9B_FROM_PTR_RDI or r9b, byte ptr [rdi]
#define OR_R9B_FROM_PTR_RSI or r9b, byte ptr [rsi]
#define OR_R9B_FROM_PTR_RBP or r9b, byte ptr [rbp]
#define OR_R9B_FROM_PTR_RSP or r9b, byte ptr [rsp]
#define OR_R9B_FROM_PTR_R8 or r9b, byte ptr [r8]
#define OR_R9B_FROM_PTR_R9 or r9b, byte ptr [r9]
#define OR_R9B_FROM_PTR_R10 or r9b, byte ptr [r10]
#define OR_R9B_FROM_PTR_R11 or r9b, byte ptr [r11]
#define OR_R9B_FROM_PTR_R12 or r9b, byte ptr [r12]
#define OR_R9B_FROM_PTR_R13 or r9b, byte ptr [r13]
#define OR_R9B_FROM_PTR_R14 or r9b, byte ptr [r14]
#define OR_R9B_FROM_PTR_R15 or r9b, byte ptr [r15]
#define OR_R9B_FROM_PTR_EAX or r9b, byte ptr [eax]
#define OR_R9B_FROM_PTR_EBX or r9b, byte ptr [ebx]
#define OR_R9B_FROM_PTR_ECX or r9b, byte ptr [ecx]
#define OR_R9B_FROM_PTR_EDX or r9b, byte ptr [edx]
#define OR_R9B_FROM_PTR_EDI or r9b, byte ptr [edi]
#define OR_R9B_FROM_PTR_ESI or r9b, byte ptr [esi]
#define OR_R9B_FROM_PTR_EBP or r9b, byte ptr [ebp]
#define OR_R9B_FROM_PTR_ESP or r9b, byte ptr [esp]

#define OR_R10B_FROM_PTR_RAX or r10b, byte ptr [rax]
#define OR_R10B_FROM_PTR_RBX or r10b, byte ptr [rbx]
#define OR_R10B_FROM_PTR_RCX or r10b, byte ptr [rcx]
#define OR_R10B_FROM_PTR_RDX or r10b, byte ptr [rdx]
#define OR_R10B_FROM_PTR_RDI or r10b, byte ptr [rdi]
#define OR_R10B_FROM_PTR_RSI or r10b, byte ptr [rsi]
#define OR_R10B_FROM_PTR_RBP or r10b, byte ptr [rbp]
#define OR_R10B_FROM_PTR_RSP or r10b, byte ptr [rsp]
#define OR_R10B_FROM_PTR_R8 or r10b, byte ptr [r8]
#define OR_R10B_FROM_PTR_R9 or r10b, byte ptr [r9]
#define OR_R10B_FROM_PTR_R10 or r10b, byte ptr [r10]
#define OR_R10B_FROM_PTR_R11 or r10b, byte ptr [r11]
#define OR_R10B_FROM_PTR_R12 or r10b, byte ptr [r12]
#define OR_R10B_FROM_PTR_R13 or r10b, byte ptr [r13]
#define OR_R10B_FROM_PTR_R14 or r10b, byte ptr [r14]
#define OR_R10B_FROM_PTR_R15 or r10b, byte ptr [r15]
#define OR_R10B_FROM_PTR_EAX or r10b, byte ptr [eax]
#define OR_R10B_FROM_PTR_EBX or r10b, byte ptr [ebx]
#define OR_R10B_FROM_PTR_ECX or r10b, byte ptr [ecx]
#define OR_R10B_FROM_PTR_EDX or r10b, byte ptr [edx]
#define OR_R10B_FROM_PTR_EDI or r10b, byte ptr [edi]
#define OR_R10B_FROM_PTR_ESI or r10b, byte ptr [esi]
#define OR_R10B_FROM_PTR_EBP or r10b, byte ptr [ebp]
#define OR_R10B_FROM_PTR_ESP or r10b, byte ptr [esp]

#define OR_R11B_FROM_PTR_RAX or r11b, byte ptr [rax]
#define OR_R11B_FROM_PTR_RBX or r11b, byte ptr [rbx]
#define OR_R11B_FROM_PTR_RCX or r11b, byte ptr [rcx]
#define OR_R11B_FROM_PTR_RDX or r11b, byte ptr [rdx]
#define OR_R11B_FROM_PTR_RDI or r11b, byte ptr [rdi]
#define OR_R11B_FROM_PTR_RSI or r11b, byte ptr [rsi]
#define OR_R11B_FROM_PTR_RBP or r11b, byte ptr [rbp]
#define OR_R11B_FROM_PTR_RSP or r11b, byte ptr [rsp]
#define OR_R11B_FROM_PTR_R8 or r11b, byte ptr [r8]
#define OR_R11B_FROM_PTR_R9 or r11b, byte ptr [r9]
#define OR_R11B_FROM_PTR_R10 or r11b, byte ptr [r10]
#define OR_R11B_FROM_PTR_R11 or r11b, byte ptr [r11]
#define OR_R11B_FROM_PTR_R12 or r11b, byte ptr [r12]
#define OR_R11B_FROM_PTR_R13 or r11b, byte ptr [r13]
#define OR_R11B_FROM_PTR_R14 or r11b, byte ptr [r14]
#define OR_R11B_FROM_PTR_R15 or r11b, byte ptr [r15]
#define OR_R11B_FROM_PTR_EAX or r11b, byte ptr [eax]
#define OR_R11B_FROM_PTR_EBX or r11b, byte ptr [ebx]
#define OR_R11B_FROM_PTR_ECX or r11b, byte ptr [ecx]
#define OR_R11B_FROM_PTR_EDX or r11b, byte ptr [edx]
#define OR_R11B_FROM_PTR_EDI or r11b, byte ptr [edi]
#define OR_R11B_FROM_PTR_ESI or r11b, byte ptr [esi]
#define OR_R11B_FROM_PTR_EBP or r11b, byte ptr [ebp]
#define OR_R11B_FROM_PTR_ESP or r11b, byte ptr [esp]

#define OR_R12B_FROM_PTR_RAX or r12b, byte ptr [rax]
#define OR_R12B_FROM_PTR_RBX or r12b, byte ptr [rbx]
#define OR_R12B_FROM_PTR_RCX or r12b, byte ptr [rcx]
#define OR_R12B_FROM_PTR_RDX or r12b, byte ptr [rdx]
#define OR_R12B_FROM_PTR_RDI or r12b, byte ptr [rdi]
#define OR_R12B_FROM_PTR_RSI or r12b, byte ptr [rsi]
#define OR_R12B_FROM_PTR_RBP or r12b, byte ptr [rbp]
#define OR_R12B_FROM_PTR_RSP or r12b, byte ptr [rsp]
#define OR_R12B_FROM_PTR_R8 or r12b, byte ptr [r8]
#define OR_R12B_FROM_PTR_R9 or r12b, byte ptr [r9]
#define OR_R12B_FROM_PTR_R10 or r12b, byte ptr [r10]
#define OR_R12B_FROM_PTR_R11 or r12b, byte ptr [r11]
#define OR_R12B_FROM_PTR_R12 or r12b, byte ptr [r12]
#define OR_R12B_FROM_PTR_R13 or r12b, byte ptr [r13]
#define OR_R12B_FROM_PTR_R14 or r12b, byte ptr [r14]
#define OR_R12B_FROM_PTR_R15 or r12b, byte ptr [r15]
#define OR_R12B_FROM_PTR_EAX or r12b, byte ptr [eax]
#define OR_R12B_FROM_PTR_EBX or r12b, byte ptr [ebx]
#define OR_R12B_FROM_PTR_ECX or r12b, byte ptr [ecx]
#define OR_R12B_FROM_PTR_EDX or r12b, byte ptr [edx]
#define OR_R12B_FROM_PTR_EDI or r12b, byte ptr [edi]
#define OR_R12B_FROM_PTR_ESI or r12b, byte ptr [esi]
#define OR_R12B_FROM_PTR_EBP or r12b, byte ptr [ebp]
#define OR_R12B_FROM_PTR_ESP or r12b, byte ptr [esp]

#define OR_R13B_FROM_PTR_RAX or r13b, byte ptr [rax]
#define OR_R13B_FROM_PTR_RBX or r13b, byte ptr [rbx]
#define OR_R13B_FROM_PTR_RCX or r13b, byte ptr [rcx]
#define OR_R13B_FROM_PTR_RDX or r13b, byte ptr [rdx]
#define OR_R13B_FROM_PTR_RDI or r13b, byte ptr [rdi]
#define OR_R13B_FROM_PTR_RSI or r13b, byte ptr [rsi]
#define OR_R13B_FROM_PTR_RBP or r13b, byte ptr [rbp]
#define OR_R13B_FROM_PTR_RSP or r13b, byte ptr [rsp]
#define OR_R13B_FROM_PTR_R8 or r13b, byte ptr [r8]
#define OR_R13B_FROM_PTR_R9 or r13b, byte ptr [r9]
#define OR_R13B_FROM_PTR_R10 or r13b, byte ptr [r10]
#define OR_R13B_FROM_PTR_R11 or r13b, byte ptr [r11]
#define OR_R13B_FROM_PTR_R12 or r13b, byte ptr [r12]
#define OR_R13B_FROM_PTR_R13 or r13b, byte ptr [r13]
#define OR_R13B_FROM_PTR_R14 or r13b, byte ptr [r14]
#define OR_R13B_FROM_PTR_R15 or r13b, byte ptr [r15]
#define OR_R13B_FROM_PTR_EAX or r13b, byte ptr [eax]
#define OR_R13B_FROM_PTR_EBX or r13b, byte ptr [ebx]
#define OR_R13B_FROM_PTR_ECX or r13b, byte ptr [ecx]
#define OR_R13B_FROM_PTR_EDX or r13b, byte ptr [edx]
#define OR_R13B_FROM_PTR_EDI or r13b, byte ptr [edi]
#define OR_R13B_FROM_PTR_ESI or r13b, byte ptr [esi]
#define OR_R13B_FROM_PTR_EBP or r13b, byte ptr [ebp]
#define OR_R13B_FROM_PTR_ESP or r13b, byte ptr [esp]

#define OR_R14B_FROM_PTR_RAX or r14b, byte ptr [rax]
#define OR_R14B_FROM_PTR_RBX or r14b, byte ptr [rbx]
#define OR_R14B_FROM_PTR_RCX or r14b, byte ptr [rcx]
#define OR_R14B_FROM_PTR_RDX or r14b, byte ptr [rdx]
#define OR_R14B_FROM_PTR_RDI or r14b, byte ptr [rdi]
#define OR_R14B_FROM_PTR_RSI or r14b, byte ptr [rsi]
#define OR_R14B_FROM_PTR_RBP or r14b, byte ptr [rbp]
#define OR_R14B_FROM_PTR_RSP or r14b, byte ptr [rsp]
#define OR_R14B_FROM_PTR_R8 or r14b, byte ptr [r8]
#define OR_R14B_FROM_PTR_R9 or r14b, byte ptr [r9]
#define OR_R14B_FROM_PTR_R10 or r14b, byte ptr [r10]
#define OR_R14B_FROM_PTR_R11 or r14b, byte ptr [r11]
#define OR_R14B_FROM_PTR_R12 or r14b, byte ptr [r12]
#define OR_R14B_FROM_PTR_R13 or r14b, byte ptr [r13]
#define OR_R14B_FROM_PTR_R14 or r14b, byte ptr [r14]
#define OR_R14B_FROM_PTR_R15 or r14b, byte ptr [r15]
#define OR_R14B_FROM_PTR_EAX or r14b, byte ptr [eax]
#define OR_R14B_FROM_PTR_EBX or r14b, byte ptr [ebx]
#define OR_R14B_FROM_PTR_ECX or r14b, byte ptr [ecx]
#define OR_R14B_FROM_PTR_EDX or r14b, byte ptr [edx]
#define OR_R14B_FROM_PTR_EDI or r14b, byte ptr [edi]
#define OR_R14B_FROM_PTR_ESI or r14b, byte ptr [esi]
#define OR_R14B_FROM_PTR_EBP or r14b, byte ptr [ebp]
#define OR_R14B_FROM_PTR_ESP or r14b, byte ptr [esp]

#define OR_R15B_FROM_PTR_RAX or r15b, byte ptr [rax]
#define OR_R15B_FROM_PTR_RBX or r15b, byte ptr [rbx]
#define OR_R15B_FROM_PTR_RCX or r15b, byte ptr [rcx]
#define OR_R15B_FROM_PTR_RDX or r15b, byte ptr [rdx]
#define OR_R15B_FROM_PTR_RDI or r15b, byte ptr [rdi]
#define OR_R15B_FROM_PTR_RSI or r15b, byte ptr [rsi]
#define OR_R15B_FROM_PTR_RBP or r15b, byte ptr [rbp]
#define OR_R15B_FROM_PTR_RSP or r15b, byte ptr [rsp]
#define OR_R15B_FROM_PTR_R8 or r15b, byte ptr [r8]
#define OR_R15B_FROM_PTR_R9 or r15b, byte ptr [r9]
#define OR_R15B_FROM_PTR_R10 or r15b, byte ptr [r10]
#define OR_R15B_FROM_PTR_R11 or r15b, byte ptr [r11]
#define OR_R15B_FROM_PTR_R12 or r15b, byte ptr [r12]
#define OR_R15B_FROM_PTR_R13 or r15b, byte ptr [r13]
#define OR_R15B_FROM_PTR_R14 or r15b, byte ptr [r14]
#define OR_R15B_FROM_PTR_R15 or r15b, byte ptr [r15]
#define OR_R15B_FROM_PTR_EAX or r15b, byte ptr [eax]
#define OR_R15B_FROM_PTR_EBX or r15b, byte ptr [ebx]
#define OR_R15B_FROM_PTR_ECX or r15b, byte ptr [ecx]
#define OR_R15B_FROM_PTR_EDX or r15b, byte ptr [edx]
#define OR_R15B_FROM_PTR_EDI or r15b, byte ptr [edi]
#define OR_R15B_FROM_PTR_ESI or r15b, byte ptr [esi]
#define OR_R15B_FROM_PTR_EBP or r15b, byte ptr [ebp]
#define OR_R15B_FROM_PTR_ESP or r15b, byte ptr [esp]

#define OR_AL_TO_PTR_RAX or byte ptr [rax], al
#define OR_AL_TO_PTR_RBX or byte ptr [rbx], al
#define OR_AL_TO_PTR_RCX or byte ptr [rcx], al
#define OR_AL_TO_PTR_RDX or byte ptr [rdx], al
#define OR_AL_TO_PTR_RDI or byte ptr [rdi], al
#define OR_AL_TO_PTR_RSI or byte ptr [rsi], al
#define OR_AL_TO_PTR_RBP or byte ptr [rbp], al
#define OR_AL_TO_PTR_RSP or byte ptr [rsp], al
#define OR_AL_TO_PTR_R8 or byte ptr [r8], al
#define OR_AL_TO_PTR_R9 or byte ptr [r9], al
#define OR_AL_TO_PTR_R10 or byte ptr [r10], al
#define OR_AL_TO_PTR_R11 or byte ptr [r11], al
#define OR_AL_TO_PTR_R12 or byte ptr [r12], al
#define OR_AL_TO_PTR_R13 or byte ptr [r13], al
#define OR_AL_TO_PTR_R14 or byte ptr [r14], al
#define OR_AL_TO_PTR_R15 or byte ptr [r15], al
#define OR_AL_TO_PTR_EAX or byte ptr [eax], al
#define OR_AL_TO_PTR_EBX or byte ptr [ebx], al
#define OR_AL_TO_PTR_ECX or byte ptr [ecx], al
#define OR_AL_TO_PTR_EDX or byte ptr [edx], al
#define OR_AL_TO_PTR_EDI or byte ptr [edi], al
#define OR_AL_TO_PTR_ESI or byte ptr [esi], al
#define OR_AL_TO_PTR_EBP or byte ptr [ebp], al
#define OR_AL_TO_PTR_ESP or byte ptr [esp], al

#define OR_BL_TO_PTR_RAX or byte ptr [rax], bl
#define OR_BL_TO_PTR_RBX or byte ptr [rbx], bl
#define OR_BL_TO_PTR_RCX or byte ptr [rcx], bl
#define OR_BL_TO_PTR_RDX or byte ptr [rdx], bl
#define OR_BL_TO_PTR_RDI or byte ptr [rdi], bl
#define OR_BL_TO_PTR_RSI or byte ptr [rsi], bl
#define OR_BL_TO_PTR_RBP or byte ptr [rbp], bl
#define OR_BL_TO_PTR_RSP or byte ptr [rsp], bl
#define OR_BL_TO_PTR_R8 or byte ptr [r8], bl
#define OR_BL_TO_PTR_R9 or byte ptr [r9], bl
#define OR_BL_TO_PTR_R10 or byte ptr [r10], bl
#define OR_BL_TO_PTR_R11 or byte ptr [r11], bl
#define OR_BL_TO_PTR_R12 or byte ptr [r12], bl
#define OR_BL_TO_PTR_R13 or byte ptr [r13], bl
#define OR_BL_TO_PTR_R14 or byte ptr [r14], bl
#define OR_BL_TO_PTR_R15 or byte ptr [r15], bl
#define OR_BL_TO_PTR_EAX or byte ptr [eax], bl
#define OR_BL_TO_PTR_EBX or byte ptr [ebx], bl
#define OR_BL_TO_PTR_ECX or byte ptr [ecx], bl
#define OR_BL_TO_PTR_EDX or byte ptr [edx], bl
#define OR_BL_TO_PTR_EDI or byte ptr [edi], bl
#define OR_BL_TO_PTR_ESI or byte ptr [esi], bl
#define OR_BL_TO_PTR_EBP or byte ptr [ebp], bl
#define OR_BL_TO_PTR_ESP or byte ptr [esp], bl

#define OR_CL_TO_PTR_RAX or byte ptr [rax], cl
#define OR_CL_TO_PTR_RBX or byte ptr [rbx], cl
#define OR_CL_TO_PTR_RCX or byte ptr [rcx], cl
#define OR_CL_TO_PTR_RDX or byte ptr [rdx], cl
#define OR_CL_TO_PTR_RDI or byte ptr [rdi], cl
#define OR_CL_TO_PTR_RSI or byte ptr [rsi], cl
#define OR_CL_TO_PTR_RBP or byte ptr [rbp], cl
#define OR_CL_TO_PTR_RSP or byte ptr [rsp], cl
#define OR_CL_TO_PTR_R8 or byte ptr [r8], cl
#define OR_CL_TO_PTR_R9 or byte ptr [r9], cl
#define OR_CL_TO_PTR_R10 or byte ptr [r10], cl
#define OR_CL_TO_PTR_R11 or byte ptr [r11], cl
#define OR_CL_TO_PTR_R12 or byte ptr [r12], cl
#define OR_CL_TO_PTR_R13 or byte ptr [r13], cl
#define OR_CL_TO_PTR_R14 or byte ptr [r14], cl
#define OR_CL_TO_PTR_R15 or byte ptr [r15], cl
#define OR_CL_TO_PTR_EAX or byte ptr [eax], cl
#define OR_CL_TO_PTR_EBX or byte ptr [ebx], cl
#define OR_CL_TO_PTR_ECX or byte ptr [ecx], cl
#define OR_CL_TO_PTR_EDX or byte ptr [edx], cl
#define OR_CL_TO_PTR_EDI or byte ptr [edi], cl
#define OR_CL_TO_PTR_ESI or byte ptr [esi], cl
#define OR_CL_TO_PTR_EBP or byte ptr [ebp], cl
#define OR_CL_TO_PTR_ESP or byte ptr [esp], cl

#define OR_DL_TO_PTR_RAX or byte ptr [rax], dl
#define OR_DL_TO_PTR_RBX or byte ptr [rbx], dl
#define OR_DL_TO_PTR_RCX or byte ptr [rcx], dl
#define OR_DL_TO_PTR_RDX or byte ptr [rdx], dl
#define OR_DL_TO_PTR_RDI or byte ptr [rdi], dl
#define OR_DL_TO_PTR_RSI or byte ptr [rsi], dl
#define OR_DL_TO_PTR_RBP or byte ptr [rbp], dl
#define OR_DL_TO_PTR_RSP or byte ptr [rsp], dl
#define OR_DL_TO_PTR_R8 or byte ptr [r8], dl
#define OR_DL_TO_PTR_R9 or byte ptr [r9], dl
#define OR_DL_TO_PTR_R10 or byte ptr [r10], dl
#define OR_DL_TO_PTR_R11 or byte ptr [r11], dl
#define OR_DL_TO_PTR_R12 or byte ptr [r12], dl
#define OR_DL_TO_PTR_R13 or byte ptr [r13], dl
#define OR_DL_TO_PTR_R14 or byte ptr [r14], dl
#define OR_DL_TO_PTR_R15 or byte ptr [r15], dl
#define OR_DL_TO_PTR_EAX or byte ptr [eax], dl
#define OR_DL_TO_PTR_EBX or byte ptr [ebx], dl
#define OR_DL_TO_PTR_ECX or byte ptr [ecx], dl
#define OR_DL_TO_PTR_EDX or byte ptr [edx], dl
#define OR_DL_TO_PTR_EDI or byte ptr [edi], dl
#define OR_DL_TO_PTR_ESI or byte ptr [esi], dl
#define OR_DL_TO_PTR_EBP or byte ptr [ebp], dl
#define OR_DL_TO_PTR_ESP or byte ptr [esp], dl

#define OR_DIL_TO_PTR_RAX or byte ptr [rax], dil
#define OR_DIL_TO_PTR_RBX or byte ptr [rbx], dil
#define OR_DIL_TO_PTR_RCX or byte ptr [rcx], dil
#define OR_DIL_TO_PTR_RDX or byte ptr [rdx], dil
#define OR_DIL_TO_PTR_RDI or byte ptr [rdi], dil
#define OR_DIL_TO_PTR_RSI or byte ptr [rsi], dil
#define OR_DIL_TO_PTR_RBP or byte ptr [rbp], dil
#define OR_DIL_TO_PTR_RSP or byte ptr [rsp], dil
#define OR_DIL_TO_PTR_R8 or byte ptr [r8], dil
#define OR_DIL_TO_PTR_R9 or byte ptr [r9], dil
#define OR_DIL_TO_PTR_R10 or byte ptr [r10], dil
#define OR_DIL_TO_PTR_R11 or byte ptr [r11], dil
#define OR_DIL_TO_PTR_R12 or byte ptr [r12], dil
#define OR_DIL_TO_PTR_R13 or byte ptr [r13], dil
#define OR_DIL_TO_PTR_R14 or byte ptr [r14], dil
#define OR_DIL_TO_PTR_R15 or byte ptr [r15], dil
#define OR_DIL_TO_PTR_EAX or byte ptr [eax], dil
#define OR_DIL_TO_PTR_EBX or byte ptr [ebx], dil
#define OR_DIL_TO_PTR_ECX or byte ptr [ecx], dil
#define OR_DIL_TO_PTR_EDX or byte ptr [edx], dil
#define OR_DIL_TO_PTR_EDI or byte ptr [edi], dil
#define OR_DIL_TO_PTR_ESI or byte ptr [esi], dil
#define OR_DIL_TO_PTR_EBP or byte ptr [ebp], dil
#define OR_DIL_TO_PTR_ESP or byte ptr [esp], dil

#define OR_SIL_TO_PTR_RAX or byte ptr [rax], sil
#define OR_SIL_TO_PTR_RBX or byte ptr [rbx], sil
#define OR_SIL_TO_PTR_RCX or byte ptr [rcx], sil
#define OR_SIL_TO_PTR_RDX or byte ptr [rdx], sil
#define OR_SIL_TO_PTR_RDI or byte ptr [rdi], sil
#define OR_SIL_TO_PTR_RSI or byte ptr [rsi], sil
#define OR_SIL_TO_PTR_RBP or byte ptr [rbp], sil
#define OR_SIL_TO_PTR_RSP or byte ptr [rsp], sil
#define OR_SIL_TO_PTR_R8 or byte ptr [r8], sil
#define OR_SIL_TO_PTR_R9 or byte ptr [r9], sil
#define OR_SIL_TO_PTR_R10 or byte ptr [r10], sil
#define OR_SIL_TO_PTR_R11 or byte ptr [r11], sil
#define OR_SIL_TO_PTR_R12 or byte ptr [r12], sil
#define OR_SIL_TO_PTR_R13 or byte ptr [r13], sil
#define OR_SIL_TO_PTR_R14 or byte ptr [r14], sil
#define OR_SIL_TO_PTR_R15 or byte ptr [r15], sil
#define OR_SIL_TO_PTR_EAX or byte ptr [eax], sil
#define OR_SIL_TO_PTR_EBX or byte ptr [ebx], sil
#define OR_SIL_TO_PTR_ECX or byte ptr [ecx], sil
#define OR_SIL_TO_PTR_EDX or byte ptr [edx], sil
#define OR_SIL_TO_PTR_EDI or byte ptr [edi], sil
#define OR_SIL_TO_PTR_ESI or byte ptr [esi], sil
#define OR_SIL_TO_PTR_EBP or byte ptr [ebp], sil
#define OR_SIL_TO_PTR_ESP or byte ptr [esp], sil

#define OR_BPL_TO_PTR_RAX or byte ptr [rax], bpl
#define OR_BPL_TO_PTR_RBX or byte ptr [rbx], bpl
#define OR_BPL_TO_PTR_RCX or byte ptr [rcx], bpl
#define OR_BPL_TO_PTR_RDX or byte ptr [rdx], bpl
#define OR_BPL_TO_PTR_RDI or byte ptr [rdi], bpl
#define OR_BPL_TO_PTR_RSI or byte ptr [rsi], bpl
#define OR_BPL_TO_PTR_RBP or byte ptr [rbp], bpl
#define OR_BPL_TO_PTR_RSP or byte ptr [rsp], bpl
#define OR_BPL_TO_PTR_R8 or byte ptr [r8], bpl
#define OR_BPL_TO_PTR_R9 or byte ptr [r9], bpl
#define OR_BPL_TO_PTR_R10 or byte ptr [r10], bpl
#define OR_BPL_TO_PTR_R11 or byte ptr [r11], bpl
#define OR_BPL_TO_PTR_R12 or byte ptr [r12], bpl
#define OR_BPL_TO_PTR_R13 or byte ptr [r13], bpl
#define OR_BPL_TO_PTR_R14 or byte ptr [r14], bpl
#define OR_BPL_TO_PTR_R15 or byte ptr [r15], bpl
#define OR_BPL_TO_PTR_EAX or byte ptr [eax], bpl
#define OR_BPL_TO_PTR_EBX or byte ptr [ebx], bpl
#define OR_BPL_TO_PTR_ECX or byte ptr [ecx], bpl
#define OR_BPL_TO_PTR_EDX or byte ptr [edx], bpl
#define OR_BPL_TO_PTR_EDI or byte ptr [edi], bpl
#define OR_BPL_TO_PTR_ESI or byte ptr [esi], bpl
#define OR_BPL_TO_PTR_EBP or byte ptr [ebp], bpl
#define OR_BPL_TO_PTR_ESP or byte ptr [esp], bpl

#define OR_SPL_TO_PTR_RAX or byte ptr [rax], spl
#define OR_SPL_TO_PTR_RBX or byte ptr [rbx], spl
#define OR_SPL_TO_PTR_RCX or byte ptr [rcx], spl
#define OR_SPL_TO_PTR_RDX or byte ptr [rdx], spl
#define OR_SPL_TO_PTR_RDI or byte ptr [rdi], spl
#define OR_SPL_TO_PTR_RSI or byte ptr [rsi], spl
#define OR_SPL_TO_PTR_RBP or byte ptr [rbp], spl
#define OR_SPL_TO_PTR_RSP or byte ptr [rsp], spl
#define OR_SPL_TO_PTR_R8 or byte ptr [r8], spl
#define OR_SPL_TO_PTR_R9 or byte ptr [r9], spl
#define OR_SPL_TO_PTR_R10 or byte ptr [r10], spl
#define OR_SPL_TO_PTR_R11 or byte ptr [r11], spl
#define OR_SPL_TO_PTR_R12 or byte ptr [r12], spl
#define OR_SPL_TO_PTR_R13 or byte ptr [r13], spl
#define OR_SPL_TO_PTR_R14 or byte ptr [r14], spl
#define OR_SPL_TO_PTR_R15 or byte ptr [r15], spl
#define OR_SPL_TO_PTR_EAX or byte ptr [eax], spl
#define OR_SPL_TO_PTR_EBX or byte ptr [ebx], spl
#define OR_SPL_TO_PTR_ECX or byte ptr [ecx], spl
#define OR_SPL_TO_PTR_EDX or byte ptr [edx], spl
#define OR_SPL_TO_PTR_EDI or byte ptr [edi], spl
#define OR_SPL_TO_PTR_ESI or byte ptr [esi], spl
#define OR_SPL_TO_PTR_EBP or byte ptr [ebp], spl
#define OR_SPL_TO_PTR_ESP or byte ptr [esp], spl

#define OR_R8B_TO_PTR_RAX or byte ptr [rax], r8b
#define OR_R8B_TO_PTR_RBX or byte ptr [rbx], r8b
#define OR_R8B_TO_PTR_RCX or byte ptr [rcx], r8b
#define OR_R8B_TO_PTR_RDX or byte ptr [rdx], r8b
#define OR_R8B_TO_PTR_RDI or byte ptr [rdi], r8b
#define OR_R8B_TO_PTR_RSI or byte ptr [rsi], r8b
#define OR_R8B_TO_PTR_RBP or byte ptr [rbp], r8b
#define OR_R8B_TO_PTR_RSP or byte ptr [rsp], r8b
#define OR_R8B_TO_PTR_R8 or byte ptr [r8], r8b
#define OR_R8B_TO_PTR_R9 or byte ptr [r9], r8b
#define OR_R8B_TO_PTR_R10 or byte ptr [r10], r8b
#define OR_R8B_TO_PTR_R11 or byte ptr [r11], r8b
#define OR_R8B_TO_PTR_R12 or byte ptr [r12], r8b
#define OR_R8B_TO_PTR_R13 or byte ptr [r13], r8b
#define OR_R8B_TO_PTR_R14 or byte ptr [r14], r8b
#define OR_R8B_TO_PTR_R15 or byte ptr [r15], r8b
#define OR_R8B_TO_PTR_EAX or byte ptr [eax], r8b
#define OR_R8B_TO_PTR_EBX or byte ptr [ebx], r8b
#define OR_R8B_TO_PTR_ECX or byte ptr [ecx], r8b
#define OR_R8B_TO_PTR_EDX or byte ptr [edx], r8b
#define OR_R8B_TO_PTR_EDI or byte ptr [edi], r8b
#define OR_R8B_TO_PTR_ESI or byte ptr [esi], r8b
#define OR_R8B_TO_PTR_EBP or byte ptr [ebp], r8b
#define OR_R8B_TO_PTR_ESP or byte ptr [esp], r8b

#define OR_R9B_TO_PTR_RAX or byte ptr [rax], r9b
#define OR_R9B_TO_PTR_RBX or byte ptr [rbx], r9b
#define OR_R9B_TO_PTR_RCX or byte ptr [rcx], r9b
#define OR_R9B_TO_PTR_RDX or byte ptr [rdx], r9b
#define OR_R9B_TO_PTR_RDI or byte ptr [rdi], r9b
#define OR_R9B_TO_PTR_RSI or byte ptr [rsi], r9b
#define OR_R9B_TO_PTR_RBP or byte ptr [rbp], r9b
#define OR_R9B_TO_PTR_RSP or byte ptr [rsp], r9b
#define OR_R9B_TO_PTR_R8 or byte ptr [r8], r9b
#define OR_R9B_TO_PTR_R9 or byte ptr [r9], r9b
#define OR_R9B_TO_PTR_R10 or byte ptr [r10], r9b
#define OR_R9B_TO_PTR_R11 or byte ptr [r11], r9b
#define OR_R9B_TO_PTR_R12 or byte ptr [r12], r9b
#define OR_R9B_TO_PTR_R13 or byte ptr [r13], r9b
#define OR_R9B_TO_PTR_R14 or byte ptr [r14], r9b
#define OR_R9B_TO_PTR_R15 or byte ptr [r15], r9b
#define OR_R9B_TO_PTR_EAX or byte ptr [eax], r9b
#define OR_R9B_TO_PTR_EBX or byte ptr [ebx], r9b
#define OR_R9B_TO_PTR_ECX or byte ptr [ecx], r9b
#define OR_R9B_TO_PTR_EDX or byte ptr [edx], r9b
#define OR_R9B_TO_PTR_EDI or byte ptr [edi], r9b
#define OR_R9B_TO_PTR_ESI or byte ptr [esi], r9b
#define OR_R9B_TO_PTR_EBP or byte ptr [ebp], r9b
#define OR_R9B_TO_PTR_ESP or byte ptr [esp], r9b

#define OR_R10B_TO_PTR_RAX or byte ptr [rax], r10b
#define OR_R10B_TO_PTR_RBX or byte ptr [rbx], r10b
#define OR_R10B_TO_PTR_RCX or byte ptr [rcx], r10b
#define OR_R10B_TO_PTR_RDX or byte ptr [rdx], r10b
#define OR_R10B_TO_PTR_RDI or byte ptr [rdi], r10b
#define OR_R10B_TO_PTR_RSI or byte ptr [rsi], r10b
#define OR_R10B_TO_PTR_RBP or byte ptr [rbp], r10b
#define OR_R10B_TO_PTR_RSP or byte ptr [rsp], r10b
#define OR_R10B_TO_PTR_R8 or byte ptr [r8], r10b
#define OR_R10B_TO_PTR_R9 or byte ptr [r9], r10b
#define OR_R10B_TO_PTR_R10 or byte ptr [r10], r10b
#define OR_R10B_TO_PTR_R11 or byte ptr [r11], r10b
#define OR_R10B_TO_PTR_R12 or byte ptr [r12], r10b
#define OR_R10B_TO_PTR_R13 or byte ptr [r13], r10b
#define OR_R10B_TO_PTR_R14 or byte ptr [r14], r10b
#define OR_R10B_TO_PTR_R15 or byte ptr [r15], r10b
#define OR_R10B_TO_PTR_EAX or byte ptr [eax], r10b
#define OR_R10B_TO_PTR_EBX or byte ptr [ebx], r10b
#define OR_R10B_TO_PTR_ECX or byte ptr [ecx], r10b
#define OR_R10B_TO_PTR_EDX or byte ptr [edx], r10b
#define OR_R10B_TO_PTR_EDI or byte ptr [edi], r10b
#define OR_R10B_TO_PTR_ESI or byte ptr [esi], r10b
#define OR_R10B_TO_PTR_EBP or byte ptr [ebp], r10b
#define OR_R10B_TO_PTR_ESP or byte ptr [esp], r10b

#define OR_R11B_TO_PTR_RAX or byte ptr [rax], r11b
#define OR_R11B_TO_PTR_RBX or byte ptr [rbx], r11b
#define OR_R11B_TO_PTR_RCX or byte ptr [rcx], r11b
#define OR_R11B_TO_PTR_RDX or byte ptr [rdx], r11b
#define OR_R11B_TO_PTR_RDI or byte ptr [rdi], r11b
#define OR_R11B_TO_PTR_RSI or byte ptr [rsi], r11b
#define OR_R11B_TO_PTR_RBP or byte ptr [rbp], r11b
#define OR_R11B_TO_PTR_RSP or byte ptr [rsp], r11b
#define OR_R11B_TO_PTR_R8 or byte ptr [r8], r11b
#define OR_R11B_TO_PTR_R9 or byte ptr [r9], r11b
#define OR_R11B_TO_PTR_R10 or byte ptr [r10], r11b
#define OR_R11B_TO_PTR_R11 or byte ptr [r11], r11b
#define OR_R11B_TO_PTR_R12 or byte ptr [r12], r11b
#define OR_R11B_TO_PTR_R13 or byte ptr [r13], r11b
#define OR_R11B_TO_PTR_R14 or byte ptr [r14], r11b
#define OR_R11B_TO_PTR_R15 or byte ptr [r15], r11b
#define OR_R11B_TO_PTR_EAX or byte ptr [eax], r11b
#define OR_R11B_TO_PTR_EBX or byte ptr [ebx], r11b
#define OR_R11B_TO_PTR_ECX or byte ptr [ecx], r11b
#define OR_R11B_TO_PTR_EDX or byte ptr [edx], r11b
#define OR_R11B_TO_PTR_EDI or byte ptr [edi], r11b
#define OR_R11B_TO_PTR_ESI or byte ptr [esi], r11b
#define OR_R11B_TO_PTR_EBP or byte ptr [ebp], r11b
#define OR_R11B_TO_PTR_ESP or byte ptr [esp], r11b

#define OR_R12B_TO_PTR_RAX or byte ptr [rax], r12b
#define OR_R12B_TO_PTR_RBX or byte ptr [rbx], r12b
#define OR_R12B_TO_PTR_RCX or byte ptr [rcx], r12b
#define OR_R12B_TO_PTR_RDX or byte ptr [rdx], r12b
#define OR_R12B_TO_PTR_RDI or byte ptr [rdi], r12b
#define OR_R12B_TO_PTR_RSI or byte ptr [rsi], r12b
#define OR_R12B_TO_PTR_RBP or byte ptr [rbp], r12b
#define OR_R12B_TO_PTR_RSP or byte ptr [rsp], r12b
#define OR_R12B_TO_PTR_R8 or byte ptr [r8], r12b
#define OR_R12B_TO_PTR_R9 or byte ptr [r9], r12b
#define OR_R12B_TO_PTR_R10 or byte ptr [r10], r12b
#define OR_R12B_TO_PTR_R11 or byte ptr [r11], r12b
#define OR_R12B_TO_PTR_R12 or byte ptr [r12], r12b
#define OR_R12B_TO_PTR_R13 or byte ptr [r13], r12b
#define OR_R12B_TO_PTR_R14 or byte ptr [r14], r12b
#define OR_R12B_TO_PTR_R15 or byte ptr [r15], r12b
#define OR_R12B_TO_PTR_EAX or byte ptr [eax], r12b
#define OR_R12B_TO_PTR_EBX or byte ptr [ebx], r12b
#define OR_R12B_TO_PTR_ECX or byte ptr [ecx], r12b
#define OR_R12B_TO_PTR_EDX or byte ptr [edx], r12b
#define OR_R12B_TO_PTR_EDI or byte ptr [edi], r12b
#define OR_R12B_TO_PTR_ESI or byte ptr [esi], r12b
#define OR_R12B_TO_PTR_EBP or byte ptr [ebp], r12b
#define OR_R12B_TO_PTR_ESP or byte ptr [esp], r12b

#define OR_R13B_TO_PTR_RAX or byte ptr [rax], r13b
#define OR_R13B_TO_PTR_RBX or byte ptr [rbx], r13b
#define OR_R13B_TO_PTR_RCX or byte ptr [rcx], r13b
#define OR_R13B_TO_PTR_RDX or byte ptr [rdx], r13b
#define OR_R13B_TO_PTR_RDI or byte ptr [rdi], r13b
#define OR_R13B_TO_PTR_RSI or byte ptr [rsi], r13b
#define OR_R13B_TO_PTR_RBP or byte ptr [rbp], r13b
#define OR_R13B_TO_PTR_RSP or byte ptr [rsp], r13b
#define OR_R13B_TO_PTR_R8 or byte ptr [r8], r13b
#define OR_R13B_TO_PTR_R9 or byte ptr [r9], r13b
#define OR_R13B_TO_PTR_R10 or byte ptr [r10], r13b
#define OR_R13B_TO_PTR_R11 or byte ptr [r11], r13b
#define OR_R13B_TO_PTR_R12 or byte ptr [r12], r13b
#define OR_R13B_TO_PTR_R13 or byte ptr [r13], r13b
#define OR_R13B_TO_PTR_R14 or byte ptr [r14], r13b
#define OR_R13B_TO_PTR_R15 or byte ptr [r15], r13b
#define OR_R13B_TO_PTR_EAX or byte ptr [eax], r13b
#define OR_R13B_TO_PTR_EBX or byte ptr [ebx], r13b
#define OR_R13B_TO_PTR_ECX or byte ptr [ecx], r13b
#define OR_R13B_TO_PTR_EDX or byte ptr [edx], r13b
#define OR_R13B_TO_PTR_EDI or byte ptr [edi], r13b
#define OR_R13B_TO_PTR_ESI or byte ptr [esi], r13b
#define OR_R13B_TO_PTR_EBP or byte ptr [ebp], r13b
#define OR_R13B_TO_PTR_ESP or byte ptr [esp], r13b

#define OR_R14B_TO_PTR_RAX or byte ptr [rax], r14b
#define OR_R14B_TO_PTR_RBX or byte ptr [rbx], r14b
#define OR_R14B_TO_PTR_RCX or byte ptr [rcx], r14b
#define OR_R14B_TO_PTR_RDX or byte ptr [rdx], r14b
#define OR_R14B_TO_PTR_RDI or byte ptr [rdi], r14b
#define OR_R14B_TO_PTR_RSI or byte ptr [rsi], r14b
#define OR_R14B_TO_PTR_RBP or byte ptr [rbp], r14b
#define OR_R14B_TO_PTR_RSP or byte ptr [rsp], r14b
#define OR_R14B_TO_PTR_R8 or byte ptr [r8], r14b
#define OR_R14B_TO_PTR_R9 or byte ptr [r9], r14b
#define OR_R14B_TO_PTR_R10 or byte ptr [r10], r14b
#define OR_R14B_TO_PTR_R11 or byte ptr [r11], r14b
#define OR_R14B_TO_PTR_R12 or byte ptr [r12], r14b
#define OR_R14B_TO_PTR_R13 or byte ptr [r13], r14b
#define OR_R14B_TO_PTR_R14 or byte ptr [r14], r14b
#define OR_R14B_TO_PTR_R15 or byte ptr [r15], r14b
#define OR_R14B_TO_PTR_EAX or byte ptr [eax], r14b
#define OR_R14B_TO_PTR_EBX or byte ptr [ebx], r14b
#define OR_R14B_TO_PTR_ECX or byte ptr [ecx], r14b
#define OR_R14B_TO_PTR_EDX or byte ptr [edx], r14b
#define OR_R14B_TO_PTR_EDI or byte ptr [edi], r14b
#define OR_R14B_TO_PTR_ESI or byte ptr [esi], r14b
#define OR_R14B_TO_PTR_EBP or byte ptr [ebp], r14b
#define OR_R14B_TO_PTR_ESP or byte ptr [esp], r14b

#define OR_R15B_TO_PTR_RAX or byte ptr [rax], r15b
#define OR_R15B_TO_PTR_RBX or byte ptr [rbx], r15b
#define OR_R15B_TO_PTR_RCX or byte ptr [rcx], r15b
#define OR_R15B_TO_PTR_RDX or byte ptr [rdx], r15b
#define OR_R15B_TO_PTR_RDI or byte ptr [rdi], r15b
#define OR_R15B_TO_PTR_RSI or byte ptr [rsi], r15b
#define OR_R15B_TO_PTR_RBP or byte ptr [rbp], r15b
#define OR_R15B_TO_PTR_RSP or byte ptr [rsp], r15b
#define OR_R15B_TO_PTR_R8 or byte ptr [r8], r15b
#define OR_R15B_TO_PTR_R9 or byte ptr [r9], r15b
#define OR_R15B_TO_PTR_R10 or byte ptr [r10], r15b
#define OR_R15B_TO_PTR_R11 or byte ptr [r11], r15b
#define OR_R15B_TO_PTR_R12 or byte ptr [r12], r15b
#define OR_R15B_TO_PTR_R13 or byte ptr [r13], r15b
#define OR_R15B_TO_PTR_R14 or byte ptr [r14], r15b
#define OR_R15B_TO_PTR_R15 or byte ptr [r15], r15b
#define OR_R15B_TO_PTR_EAX or byte ptr [eax], r15b
#define OR_R15B_TO_PTR_EBX or byte ptr [ebx], r15b
#define OR_R15B_TO_PTR_ECX or byte ptr [ecx], r15b
#define OR_R15B_TO_PTR_EDX or byte ptr [edx], r15b
#define OR_R15B_TO_PTR_EDI or byte ptr [edi], r15b
#define OR_R15B_TO_PTR_ESI or byte ptr [esi], r15b
#define OR_R15B_TO_PTR_EBP or byte ptr [ebp], r15b
#define OR_R15B_TO_PTR_ESP or byte ptr [esp], r15b

#define OR_AL_FROM_PTR_RAX_(VALUE) or al, byte ptr [rax + VALUE]
#define OR_AL_FROM_PTR_RBX_(VALUE) or al, byte ptr [rbx + VALUE]
#define OR_AL_FROM_PTR_RCX_(VALUE) or al, byte ptr [rcx + VALUE]
#define OR_AL_FROM_PTR_RDX_(VALUE) or al, byte ptr [rdx + VALUE]
#define OR_AL_FROM_PTR_RDI_(VALUE) or al, byte ptr [rdi + VALUE]
#define OR_AL_FROM_PTR_RSI_(VALUE) or al, byte ptr [rsi + VALUE]
#define OR_AL_FROM_PTR_RBP_(VALUE) or al, byte ptr [rbp + VALUE]
#define OR_AL_FROM_PTR_RSP_(VALUE) or al, byte ptr [rsp + VALUE]
#define OR_AL_FROM_PTR_R8_(VALUE) or al, byte ptr [r8 + VALUE]
#define OR_AL_FROM_PTR_R9_(VALUE) or al, byte ptr [r9 + VALUE]
#define OR_AL_FROM_PTR_R10_(VALUE) or al, byte ptr [r10 + VALUE]
#define OR_AL_FROM_PTR_R11_(VALUE) or al, byte ptr [r11 + VALUE]
#define OR_AL_FROM_PTR_R12_(VALUE) or al, byte ptr [r12 + VALUE]
#define OR_AL_FROM_PTR_R13_(VALUE) or al, byte ptr [r13 + VALUE]
#define OR_AL_FROM_PTR_R14_(VALUE) or al, byte ptr [r14 + VALUE]
#define OR_AL_FROM_PTR_R15_(VALUE) or al, byte ptr [r15 + VALUE]
#define OR_AL_FROM_PTR_EAX_(VALUE) or al, byte ptr [eax + VALUE]
#define OR_AL_FROM_PTR_EBX_(VALUE) or al, byte ptr [ebx + VALUE]
#define OR_AL_FROM_PTR_ECX_(VALUE) or al, byte ptr [ecx + VALUE]
#define OR_AL_FROM_PTR_EDX_(VALUE) or al, byte ptr [edx + VALUE]
#define OR_AL_FROM_PTR_EDI_(VALUE) or al, byte ptr [edi + VALUE]
#define OR_AL_FROM_PTR_ESI_(VALUE) or al, byte ptr [esi + VALUE]
#define OR_AL_FROM_PTR_EBP_(VALUE) or al, byte ptr [ebp + VALUE]
#define OR_AL_FROM_PTR_ESP_(VALUE) or al, byte ptr [esp + VALUE]

#define OR_BL_FROM_PTR_RAX_(VALUE) or bl, byte ptr [rax + VALUE]
#define OR_BL_FROM_PTR_RBX_(VALUE) or bl, byte ptr [rbx + VALUE]
#define OR_BL_FROM_PTR_RCX_(VALUE) or bl, byte ptr [rcx + VALUE]
#define OR_BL_FROM_PTR_RDX_(VALUE) or bl, byte ptr [rdx + VALUE]
#define OR_BL_FROM_PTR_RDI_(VALUE) or bl, byte ptr [rdi + VALUE]
#define OR_BL_FROM_PTR_RSI_(VALUE) or bl, byte ptr [rsi + VALUE]
#define OR_BL_FROM_PTR_RBP_(VALUE) or bl, byte ptr [rbp + VALUE]
#define OR_BL_FROM_PTR_RSP_(VALUE) or bl, byte ptr [rsp + VALUE]
#define OR_BL_FROM_PTR_R8_(VALUE) or bl, byte ptr [r8 + VALUE]
#define OR_BL_FROM_PTR_R9_(VALUE) or bl, byte ptr [r9 + VALUE]
#define OR_BL_FROM_PTR_R10_(VALUE) or bl, byte ptr [r10 + VALUE]
#define OR_BL_FROM_PTR_R11_(VALUE) or bl, byte ptr [r11 + VALUE]
#define OR_BL_FROM_PTR_R12_(VALUE) or bl, byte ptr [r12 + VALUE]
#define OR_BL_FROM_PTR_R13_(VALUE) or bl, byte ptr [r13 + VALUE]
#define OR_BL_FROM_PTR_R14_(VALUE) or bl, byte ptr [r14 + VALUE]
#define OR_BL_FROM_PTR_R15_(VALUE) or bl, byte ptr [r15 + VALUE]
#define OR_BL_FROM_PTR_EAX_(VALUE) or bl, byte ptr [eax + VALUE]
#define OR_BL_FROM_PTR_EBX_(VALUE) or bl, byte ptr [ebx + VALUE]
#define OR_BL_FROM_PTR_ECX_(VALUE) or bl, byte ptr [ecx + VALUE]
#define OR_BL_FROM_PTR_EDX_(VALUE) or bl, byte ptr [edx + VALUE]
#define OR_BL_FROM_PTR_EDI_(VALUE) or bl, byte ptr [edi + VALUE]
#define OR_BL_FROM_PTR_ESI_(VALUE) or bl, byte ptr [esi + VALUE]
#define OR_BL_FROM_PTR_EBP_(VALUE) or bl, byte ptr [ebp + VALUE]
#define OR_BL_FROM_PTR_ESP_(VALUE) or bl, byte ptr [esp + VALUE]

#define OR_CL_FROM_PTR_RAX_(VALUE) or cl, byte ptr [rax + VALUE]
#define OR_CL_FROM_PTR_RBX_(VALUE) or cl, byte ptr [rbx + VALUE]
#define OR_CL_FROM_PTR_RCX_(VALUE) or cl, byte ptr [rcx + VALUE]
#define OR_CL_FROM_PTR_RDX_(VALUE) or cl, byte ptr [rdx + VALUE]
#define OR_CL_FROM_PTR_RDI_(VALUE) or cl, byte ptr [rdi + VALUE]
#define OR_CL_FROM_PTR_RSI_(VALUE) or cl, byte ptr [rsi + VALUE]
#define OR_CL_FROM_PTR_RBP_(VALUE) or cl, byte ptr [rbp + VALUE]
#define OR_CL_FROM_PTR_RSP_(VALUE) or cl, byte ptr [rsp + VALUE]
#define OR_CL_FROM_PTR_R8_(VALUE) or cl, byte ptr [r8 + VALUE]
#define OR_CL_FROM_PTR_R9_(VALUE) or cl, byte ptr [r9 + VALUE]
#define OR_CL_FROM_PTR_R10_(VALUE) or cl, byte ptr [r10 + VALUE]
#define OR_CL_FROM_PTR_R11_(VALUE) or cl, byte ptr [r11 + VALUE]
#define OR_CL_FROM_PTR_R12_(VALUE) or cl, byte ptr [r12 + VALUE]
#define OR_CL_FROM_PTR_R13_(VALUE) or cl, byte ptr [r13 + VALUE]
#define OR_CL_FROM_PTR_R14_(VALUE) or cl, byte ptr [r14 + VALUE]
#define OR_CL_FROM_PTR_R15_(VALUE) or cl, byte ptr [r15 + VALUE]
#define OR_CL_FROM_PTR_EAX_(VALUE) or cl, byte ptr [eax + VALUE]
#define OR_CL_FROM_PTR_EBX_(VALUE) or cl, byte ptr [ebx + VALUE]
#define OR_CL_FROM_PTR_ECX_(VALUE) or cl, byte ptr [ecx + VALUE]
#define OR_CL_FROM_PTR_EDX_(VALUE) or cl, byte ptr [edx + VALUE]
#define OR_CL_FROM_PTR_EDI_(VALUE) or cl, byte ptr [edi + VALUE]
#define OR_CL_FROM_PTR_ESI_(VALUE) or cl, byte ptr [esi + VALUE]
#define OR_CL_FROM_PTR_EBP_(VALUE) or cl, byte ptr [ebp + VALUE]
#define OR_CL_FROM_PTR_ESP_(VALUE) or cl, byte ptr [esp + VALUE]

#define OR_DL_FROM_PTR_RAX_(VALUE) or dl, byte ptr [rax + VALUE]
#define OR_DL_FROM_PTR_RBX_(VALUE) or dl, byte ptr [rbx + VALUE]
#define OR_DL_FROM_PTR_RCX_(VALUE) or dl, byte ptr [rcx + VALUE]
#define OR_DL_FROM_PTR_RDX_(VALUE) or dl, byte ptr [rdx + VALUE]
#define OR_DL_FROM_PTR_RDI_(VALUE) or dl, byte ptr [rdi + VALUE]
#define OR_DL_FROM_PTR_RSI_(VALUE) or dl, byte ptr [rsi + VALUE]
#define OR_DL_FROM_PTR_RBP_(VALUE) or dl, byte ptr [rbp + VALUE]
#define OR_DL_FROM_PTR_RSP_(VALUE) or dl, byte ptr [rsp + VALUE]
#define OR_DL_FROM_PTR_R8_(VALUE) or dl, byte ptr [r8 + VALUE]
#define OR_DL_FROM_PTR_R9_(VALUE) or dl, byte ptr [r9 + VALUE]
#define OR_DL_FROM_PTR_R10_(VALUE) or dl, byte ptr [r10 + VALUE]
#define OR_DL_FROM_PTR_R11_(VALUE) or dl, byte ptr [r11 + VALUE]
#define OR_DL_FROM_PTR_R12_(VALUE) or dl, byte ptr [r12 + VALUE]
#define OR_DL_FROM_PTR_R13_(VALUE) or dl, byte ptr [r13 + VALUE]
#define OR_DL_FROM_PTR_R14_(VALUE) or dl, byte ptr [r14 + VALUE]
#define OR_DL_FROM_PTR_R15_(VALUE) or dl, byte ptr [r15 + VALUE]
#define OR_DL_FROM_PTR_EAX_(VALUE) or dl, byte ptr [eax + VALUE]
#define OR_DL_FROM_PTR_EBX_(VALUE) or dl, byte ptr [ebx + VALUE]
#define OR_DL_FROM_PTR_ECX_(VALUE) or dl, byte ptr [ecx + VALUE]
#define OR_DL_FROM_PTR_EDX_(VALUE) or dl, byte ptr [edx + VALUE]
#define OR_DL_FROM_PTR_EDI_(VALUE) or dl, byte ptr [edi + VALUE]
#define OR_DL_FROM_PTR_ESI_(VALUE) or dl, byte ptr [esi + VALUE]
#define OR_DL_FROM_PTR_EBP_(VALUE) or dl, byte ptr [ebp + VALUE]
#define OR_DL_FROM_PTR_ESP_(VALUE) or dl, byte ptr [esp + VALUE]

#define OR_DIL_FROM_PTR_RAX_(VALUE) or dil, byte ptr [rax + VALUE]
#define OR_DIL_FROM_PTR_RBX_(VALUE) or dil, byte ptr [rbx + VALUE]
#define OR_DIL_FROM_PTR_RCX_(VALUE) or dil, byte ptr [rcx + VALUE]
#define OR_DIL_FROM_PTR_RDX_(VALUE) or dil, byte ptr [rdx + VALUE]
#define OR_DIL_FROM_PTR_RDI_(VALUE) or dil, byte ptr [rdi + VALUE]
#define OR_DIL_FROM_PTR_RSI_(VALUE) or dil, byte ptr [rsi + VALUE]
#define OR_DIL_FROM_PTR_RBP_(VALUE) or dil, byte ptr [rbp + VALUE]
#define OR_DIL_FROM_PTR_RSP_(VALUE) or dil, byte ptr [rsp + VALUE]
#define OR_DIL_FROM_PTR_R8_(VALUE) or dil, byte ptr [r8 + VALUE]
#define OR_DIL_FROM_PTR_R9_(VALUE) or dil, byte ptr [r9 + VALUE]
#define OR_DIL_FROM_PTR_R10_(VALUE) or dil, byte ptr [r10 + VALUE]
#define OR_DIL_FROM_PTR_R11_(VALUE) or dil, byte ptr [r11 + VALUE]
#define OR_DIL_FROM_PTR_R12_(VALUE) or dil, byte ptr [r12 + VALUE]
#define OR_DIL_FROM_PTR_R13_(VALUE) or dil, byte ptr [r13 + VALUE]
#define OR_DIL_FROM_PTR_R14_(VALUE) or dil, byte ptr [r14 + VALUE]
#define OR_DIL_FROM_PTR_R15_(VALUE) or dil, byte ptr [r15 + VALUE]
#define OR_DIL_FROM_PTR_EAX_(VALUE) or dil, byte ptr [eax + VALUE]
#define OR_DIL_FROM_PTR_EBX_(VALUE) or dil, byte ptr [ebx + VALUE]
#define OR_DIL_FROM_PTR_ECX_(VALUE) or dil, byte ptr [ecx + VALUE]
#define OR_DIL_FROM_PTR_EDX_(VALUE) or dil, byte ptr [edx + VALUE]
#define OR_DIL_FROM_PTR_EDI_(VALUE) or dil, byte ptr [edi + VALUE]
#define OR_DIL_FROM_PTR_ESI_(VALUE) or dil, byte ptr [esi + VALUE]
#define OR_DIL_FROM_PTR_EBP_(VALUE) or dil, byte ptr [ebp + VALUE]
#define OR_DIL_FROM_PTR_ESP_(VALUE) or dil, byte ptr [esp + VALUE]

#define OR_SIL_FROM_PTR_RAX_(VALUE) or sil, byte ptr [rax + VALUE]
#define OR_SIL_FROM_PTR_RBX_(VALUE) or sil, byte ptr [rbx + VALUE]
#define OR_SIL_FROM_PTR_RCX_(VALUE) or sil, byte ptr [rcx + VALUE]
#define OR_SIL_FROM_PTR_RDX_(VALUE) or sil, byte ptr [rdx + VALUE]
#define OR_SIL_FROM_PTR_RDI_(VALUE) or sil, byte ptr [rdi + VALUE]
#define OR_SIL_FROM_PTR_RSI_(VALUE) or sil, byte ptr [rsi + VALUE]
#define OR_SIL_FROM_PTR_RBP_(VALUE) or sil, byte ptr [rbp + VALUE]
#define OR_SIL_FROM_PTR_RSP_(VALUE) or sil, byte ptr [rsp + VALUE]
#define OR_SIL_FROM_PTR_R8_(VALUE) or sil, byte ptr [r8 + VALUE]
#define OR_SIL_FROM_PTR_R9_(VALUE) or sil, byte ptr [r9 + VALUE]
#define OR_SIL_FROM_PTR_R10_(VALUE) or sil, byte ptr [r10 + VALUE]
#define OR_SIL_FROM_PTR_R11_(VALUE) or sil, byte ptr [r11 + VALUE]
#define OR_SIL_FROM_PTR_R12_(VALUE) or sil, byte ptr [r12 + VALUE]
#define OR_SIL_FROM_PTR_R13_(VALUE) or sil, byte ptr [r13 + VALUE]
#define OR_SIL_FROM_PTR_R14_(VALUE) or sil, byte ptr [r14 + VALUE]
#define OR_SIL_FROM_PTR_R15_(VALUE) or sil, byte ptr [r15 + VALUE]
#define OR_SIL_FROM_PTR_EAX_(VALUE) or sil, byte ptr [eax + VALUE]
#define OR_SIL_FROM_PTR_EBX_(VALUE) or sil, byte ptr [ebx + VALUE]
#define OR_SIL_FROM_PTR_ECX_(VALUE) or sil, byte ptr [ecx + VALUE]
#define OR_SIL_FROM_PTR_EDX_(VALUE) or sil, byte ptr [edx + VALUE]
#define OR_SIL_FROM_PTR_EDI_(VALUE) or sil, byte ptr [edi + VALUE]
#define OR_SIL_FROM_PTR_ESI_(VALUE) or sil, byte ptr [esi + VALUE]
#define OR_SIL_FROM_PTR_EBP_(VALUE) or sil, byte ptr [ebp + VALUE]
#define OR_SIL_FROM_PTR_ESP_(VALUE) or sil, byte ptr [esp + VALUE]

#define OR_BPL_FROM_PTR_RAX_(VALUE) or bpl, byte ptr [rax + VALUE]
#define OR_BPL_FROM_PTR_RBX_(VALUE) or bpl, byte ptr [rbx + VALUE]
#define OR_BPL_FROM_PTR_RCX_(VALUE) or bpl, byte ptr [rcx + VALUE]
#define OR_BPL_FROM_PTR_RDX_(VALUE) or bpl, byte ptr [rdx + VALUE]
#define OR_BPL_FROM_PTR_RDI_(VALUE) or bpl, byte ptr [rdi + VALUE]
#define OR_BPL_FROM_PTR_RSI_(VALUE) or bpl, byte ptr [rsi + VALUE]
#define OR_BPL_FROM_PTR_RBP_(VALUE) or bpl, byte ptr [rbp + VALUE]
#define OR_BPL_FROM_PTR_RSP_(VALUE) or bpl, byte ptr [rsp + VALUE]
#define OR_BPL_FROM_PTR_R8_(VALUE) or bpl, byte ptr [r8 + VALUE]
#define OR_BPL_FROM_PTR_R9_(VALUE) or bpl, byte ptr [r9 + VALUE]
#define OR_BPL_FROM_PTR_R10_(VALUE) or bpl, byte ptr [r10 + VALUE]
#define OR_BPL_FROM_PTR_R11_(VALUE) or bpl, byte ptr [r11 + VALUE]
#define OR_BPL_FROM_PTR_R12_(VALUE) or bpl, byte ptr [r12 + VALUE]
#define OR_BPL_FROM_PTR_R13_(VALUE) or bpl, byte ptr [r13 + VALUE]
#define OR_BPL_FROM_PTR_R14_(VALUE) or bpl, byte ptr [r14 + VALUE]
#define OR_BPL_FROM_PTR_R15_(VALUE) or bpl, byte ptr [r15 + VALUE]
#define OR_BPL_FROM_PTR_EAX_(VALUE) or bpl, byte ptr [eax + VALUE]
#define OR_BPL_FROM_PTR_EBX_(VALUE) or bpl, byte ptr [ebx + VALUE]
#define OR_BPL_FROM_PTR_ECX_(VALUE) or bpl, byte ptr [ecx + VALUE]
#define OR_BPL_FROM_PTR_EDX_(VALUE) or bpl, byte ptr [edx + VALUE]
#define OR_BPL_FROM_PTR_EDI_(VALUE) or bpl, byte ptr [edi + VALUE]
#define OR_BPL_FROM_PTR_ESI_(VALUE) or bpl, byte ptr [esi + VALUE]
#define OR_BPL_FROM_PTR_EBP_(VALUE) or bpl, byte ptr [ebp + VALUE]
#define OR_BPL_FROM_PTR_ESP_(VALUE) or bpl, byte ptr [esp + VALUE]

#define OR_SPL_FROM_PTR_RAX_(VALUE) or spl, byte ptr [rax + VALUE]
#define OR_SPL_FROM_PTR_RBX_(VALUE) or spl, byte ptr [rbx + VALUE]
#define OR_SPL_FROM_PTR_RCX_(VALUE) or spl, byte ptr [rcx + VALUE]
#define OR_SPL_FROM_PTR_RDX_(VALUE) or spl, byte ptr [rdx + VALUE]
#define OR_SPL_FROM_PTR_RDI_(VALUE) or spl, byte ptr [rdi + VALUE]
#define OR_SPL_FROM_PTR_RSI_(VALUE) or spl, byte ptr [rsi + VALUE]
#define OR_SPL_FROM_PTR_RBP_(VALUE) or spl, byte ptr [rbp + VALUE]
#define OR_SPL_FROM_PTR_RSP_(VALUE) or spl, byte ptr [rsp + VALUE]
#define OR_SPL_FROM_PTR_R8_(VALUE) or spl, byte ptr [r8 + VALUE]
#define OR_SPL_FROM_PTR_R9_(VALUE) or spl, byte ptr [r9 + VALUE]
#define OR_SPL_FROM_PTR_R10_(VALUE) or spl, byte ptr [r10 + VALUE]
#define OR_SPL_FROM_PTR_R11_(VALUE) or spl, byte ptr [r11 + VALUE]
#define OR_SPL_FROM_PTR_R12_(VALUE) or spl, byte ptr [r12 + VALUE]
#define OR_SPL_FROM_PTR_R13_(VALUE) or spl, byte ptr [r13 + VALUE]
#define OR_SPL_FROM_PTR_R14_(VALUE) or spl, byte ptr [r14 + VALUE]
#define OR_SPL_FROM_PTR_R15_(VALUE) or spl, byte ptr [r15 + VALUE]
#define OR_SPL_FROM_PTR_EAX_(VALUE) or spl, byte ptr [eax + VALUE]
#define OR_SPL_FROM_PTR_EBX_(VALUE) or spl, byte ptr [ebx + VALUE]
#define OR_SPL_FROM_PTR_ECX_(VALUE) or spl, byte ptr [ecx + VALUE]
#define OR_SPL_FROM_PTR_EDX_(VALUE) or spl, byte ptr [edx + VALUE]
#define OR_SPL_FROM_PTR_EDI_(VALUE) or spl, byte ptr [edi + VALUE]
#define OR_SPL_FROM_PTR_ESI_(VALUE) or spl, byte ptr [esi + VALUE]
#define OR_SPL_FROM_PTR_EBP_(VALUE) or spl, byte ptr [ebp + VALUE]
#define OR_SPL_FROM_PTR_ESP_(VALUE) or spl, byte ptr [esp + VALUE]

#define OR_R8B_FROM_PTR_RAX_(VALUE) or r8b, byte ptr [rax + VALUE]
#define OR_R8B_FROM_PTR_RBX_(VALUE) or r8b, byte ptr [rbx + VALUE]
#define OR_R8B_FROM_PTR_RCX_(VALUE) or r8b, byte ptr [rcx + VALUE]
#define OR_R8B_FROM_PTR_RDX_(VALUE) or r8b, byte ptr [rdx + VALUE]
#define OR_R8B_FROM_PTR_RDI_(VALUE) or r8b, byte ptr [rdi + VALUE]
#define OR_R8B_FROM_PTR_RSI_(VALUE) or r8b, byte ptr [rsi + VALUE]
#define OR_R8B_FROM_PTR_RBP_(VALUE) or r8b, byte ptr [rbp + VALUE]
#define OR_R8B_FROM_PTR_RSP_(VALUE) or r8b, byte ptr [rsp + VALUE]
#define OR_R8B_FROM_PTR_R8_(VALUE) or r8b, byte ptr [r8 + VALUE]
#define OR_R8B_FROM_PTR_R9_(VALUE) or r8b, byte ptr [r9 + VALUE]
#define OR_R8B_FROM_PTR_R10_(VALUE) or r8b, byte ptr [r10 + VALUE]
#define OR_R8B_FROM_PTR_R11_(VALUE) or r8b, byte ptr [r11 + VALUE]
#define OR_R8B_FROM_PTR_R12_(VALUE) or r8b, byte ptr [r12 + VALUE]
#define OR_R8B_FROM_PTR_R13_(VALUE) or r8b, byte ptr [r13 + VALUE]
#define OR_R8B_FROM_PTR_R14_(VALUE) or r8b, byte ptr [r14 + VALUE]
#define OR_R8B_FROM_PTR_R15_(VALUE) or r8b, byte ptr [r15 + VALUE]
#define OR_R8B_FROM_PTR_EAX_(VALUE) or r8b, byte ptr [eax + VALUE]
#define OR_R8B_FROM_PTR_EBX_(VALUE) or r8b, byte ptr [ebx + VALUE]
#define OR_R8B_FROM_PTR_ECX_(VALUE) or r8b, byte ptr [ecx + VALUE]
#define OR_R8B_FROM_PTR_EDX_(VALUE) or r8b, byte ptr [edx + VALUE]
#define OR_R8B_FROM_PTR_EDI_(VALUE) or r8b, byte ptr [edi + VALUE]
#define OR_R8B_FROM_PTR_ESI_(VALUE) or r8b, byte ptr [esi + VALUE]
#define OR_R8B_FROM_PTR_EBP_(VALUE) or r8b, byte ptr [ebp + VALUE]
#define OR_R8B_FROM_PTR_ESP_(VALUE) or r8b, byte ptr [esp + VALUE]

#define OR_R9B_FROM_PTR_RAX_(VALUE) or r9b, byte ptr [rax + VALUE]
#define OR_R9B_FROM_PTR_RBX_(VALUE) or r9b, byte ptr [rbx + VALUE]
#define OR_R9B_FROM_PTR_RCX_(VALUE) or r9b, byte ptr [rcx + VALUE]
#define OR_R9B_FROM_PTR_RDX_(VALUE) or r9b, byte ptr [rdx + VALUE]
#define OR_R9B_FROM_PTR_RDI_(VALUE) or r9b, byte ptr [rdi + VALUE]
#define OR_R9B_FROM_PTR_RSI_(VALUE) or r9b, byte ptr [rsi + VALUE]
#define OR_R9B_FROM_PTR_RBP_(VALUE) or r9b, byte ptr [rbp + VALUE]
#define OR_R9B_FROM_PTR_RSP_(VALUE) or r9b, byte ptr [rsp + VALUE]
#define OR_R9B_FROM_PTR_R8_(VALUE) or r9b, byte ptr [r8 + VALUE]
#define OR_R9B_FROM_PTR_R9_(VALUE) or r9b, byte ptr [r9 + VALUE]
#define OR_R9B_FROM_PTR_R10_(VALUE) or r9b, byte ptr [r10 + VALUE]
#define OR_R9B_FROM_PTR_R11_(VALUE) or r9b, byte ptr [r11 + VALUE]
#define OR_R9B_FROM_PTR_R12_(VALUE) or r9b, byte ptr [r12 + VALUE]
#define OR_R9B_FROM_PTR_R13_(VALUE) or r9b, byte ptr [r13 + VALUE]
#define OR_R9B_FROM_PTR_R14_(VALUE) or r9b, byte ptr [r14 + VALUE]
#define OR_R9B_FROM_PTR_R15_(VALUE) or r9b, byte ptr [r15 + VALUE]
#define OR_R9B_FROM_PTR_EAX_(VALUE) or r9b, byte ptr [eax + VALUE]
#define OR_R9B_FROM_PTR_EBX_(VALUE) or r9b, byte ptr [ebx + VALUE]
#define OR_R9B_FROM_PTR_ECX_(VALUE) or r9b, byte ptr [ecx + VALUE]
#define OR_R9B_FROM_PTR_EDX_(VALUE) or r9b, byte ptr [edx + VALUE]
#define OR_R9B_FROM_PTR_EDI_(VALUE) or r9b, byte ptr [edi + VALUE]
#define OR_R9B_FROM_PTR_ESI_(VALUE) or r9b, byte ptr [esi + VALUE]
#define OR_R9B_FROM_PTR_EBP_(VALUE) or r9b, byte ptr [ebp + VALUE]
#define OR_R9B_FROM_PTR_ESP_(VALUE) or r9b, byte ptr [esp + VALUE]

#define OR_R10B_FROM_PTR_RAX_(VALUE) or r10b, byte ptr [rax + VALUE]
#define OR_R10B_FROM_PTR_RBX_(VALUE) or r10b, byte ptr [rbx + VALUE]
#define OR_R10B_FROM_PTR_RCX_(VALUE) or r10b, byte ptr [rcx + VALUE]
#define OR_R10B_FROM_PTR_RDX_(VALUE) or r10b, byte ptr [rdx + VALUE]
#define OR_R10B_FROM_PTR_RDI_(VALUE) or r10b, byte ptr [rdi + VALUE]
#define OR_R10B_FROM_PTR_RSI_(VALUE) or r10b, byte ptr [rsi + VALUE]
#define OR_R10B_FROM_PTR_RBP_(VALUE) or r10b, byte ptr [rbp + VALUE]
#define OR_R10B_FROM_PTR_RSP_(VALUE) or r10b, byte ptr [rsp + VALUE]
#define OR_R10B_FROM_PTR_R8_(VALUE) or r10b, byte ptr [r8 + VALUE]
#define OR_R10B_FROM_PTR_R9_(VALUE) or r10b, byte ptr [r9 + VALUE]
#define OR_R10B_FROM_PTR_R10_(VALUE) or r10b, byte ptr [r10 + VALUE]
#define OR_R10B_FROM_PTR_R11_(VALUE) or r10b, byte ptr [r11 + VALUE]
#define OR_R10B_FROM_PTR_R12_(VALUE) or r10b, byte ptr [r12 + VALUE]
#define OR_R10B_FROM_PTR_R13_(VALUE) or r10b, byte ptr [r13 + VALUE]
#define OR_R10B_FROM_PTR_R14_(VALUE) or r10b, byte ptr [r14 + VALUE]
#define OR_R10B_FROM_PTR_R15_(VALUE) or r10b, byte ptr [r15 + VALUE]
#define OR_R10B_FROM_PTR_EAX_(VALUE) or r10b, byte ptr [eax + VALUE]
#define OR_R10B_FROM_PTR_EBX_(VALUE) or r10b, byte ptr [ebx + VALUE]
#define OR_R10B_FROM_PTR_ECX_(VALUE) or r10b, byte ptr [ecx + VALUE]
#define OR_R10B_FROM_PTR_EDX_(VALUE) or r10b, byte ptr [edx + VALUE]
#define OR_R10B_FROM_PTR_EDI_(VALUE) or r10b, byte ptr [edi + VALUE]
#define OR_R10B_FROM_PTR_ESI_(VALUE) or r10b, byte ptr [esi + VALUE]
#define OR_R10B_FROM_PTR_EBP_(VALUE) or r10b, byte ptr [ebp + VALUE]
#define OR_R10B_FROM_PTR_ESP_(VALUE) or r10b, byte ptr [esp + VALUE]

#define OR_R11B_FROM_PTR_RAX_(VALUE) or r11b, byte ptr [rax + VALUE]
#define OR_R11B_FROM_PTR_RBX_(VALUE) or r11b, byte ptr [rbx + VALUE]
#define OR_R11B_FROM_PTR_RCX_(VALUE) or r11b, byte ptr [rcx + VALUE]
#define OR_R11B_FROM_PTR_RDX_(VALUE) or r11b, byte ptr [rdx + VALUE]
#define OR_R11B_FROM_PTR_RDI_(VALUE) or r11b, byte ptr [rdi + VALUE]
#define OR_R11B_FROM_PTR_RSI_(VALUE) or r11b, byte ptr [rsi + VALUE]
#define OR_R11B_FROM_PTR_RBP_(VALUE) or r11b, byte ptr [rbp + VALUE]
#define OR_R11B_FROM_PTR_RSP_(VALUE) or r11b, byte ptr [rsp + VALUE]
#define OR_R11B_FROM_PTR_R8_(VALUE) or r11b, byte ptr [r8 + VALUE]
#define OR_R11B_FROM_PTR_R9_(VALUE) or r11b, byte ptr [r9 + VALUE]
#define OR_R11B_FROM_PTR_R10_(VALUE) or r11b, byte ptr [r10 + VALUE]
#define OR_R11B_FROM_PTR_R11_(VALUE) or r11b, byte ptr [r11 + VALUE]
#define OR_R11B_FROM_PTR_R12_(VALUE) or r11b, byte ptr [r12 + VALUE]
#define OR_R11B_FROM_PTR_R13_(VALUE) or r11b, byte ptr [r13 + VALUE]
#define OR_R11B_FROM_PTR_R14_(VALUE) or r11b, byte ptr [r14 + VALUE]
#define OR_R11B_FROM_PTR_R15_(VALUE) or r11b, byte ptr [r15 + VALUE]
#define OR_R11B_FROM_PTR_EAX_(VALUE) or r11b, byte ptr [eax + VALUE]
#define OR_R11B_FROM_PTR_EBX_(VALUE) or r11b, byte ptr [ebx + VALUE]
#define OR_R11B_FROM_PTR_ECX_(VALUE) or r11b, byte ptr [ecx + VALUE]
#define OR_R11B_FROM_PTR_EDX_(VALUE) or r11b, byte ptr [edx + VALUE]
#define OR_R11B_FROM_PTR_EDI_(VALUE) or r11b, byte ptr [edi + VALUE]
#define OR_R11B_FROM_PTR_ESI_(VALUE) or r11b, byte ptr [esi + VALUE]
#define OR_R11B_FROM_PTR_EBP_(VALUE) or r11b, byte ptr [ebp + VALUE]
#define OR_R11B_FROM_PTR_ESP_(VALUE) or r11b, byte ptr [esp + VALUE]

#define OR_R12B_FROM_PTR_RAX_(VALUE) or r12b, byte ptr [rax + VALUE]
#define OR_R12B_FROM_PTR_RBX_(VALUE) or r12b, byte ptr [rbx + VALUE]
#define OR_R12B_FROM_PTR_RCX_(VALUE) or r12b, byte ptr [rcx + VALUE]
#define OR_R12B_FROM_PTR_RDX_(VALUE) or r12b, byte ptr [rdx + VALUE]
#define OR_R12B_FROM_PTR_RDI_(VALUE) or r12b, byte ptr [rdi + VALUE]
#define OR_R12B_FROM_PTR_RSI_(VALUE) or r12b, byte ptr [rsi + VALUE]
#define OR_R12B_FROM_PTR_RBP_(VALUE) or r12b, byte ptr [rbp + VALUE]
#define OR_R12B_FROM_PTR_RSP_(VALUE) or r12b, byte ptr [rsp + VALUE]
#define OR_R12B_FROM_PTR_R8_(VALUE) or r12b, byte ptr [r8 + VALUE]
#define OR_R12B_FROM_PTR_R9_(VALUE) or r12b, byte ptr [r9 + VALUE]
#define OR_R12B_FROM_PTR_R10_(VALUE) or r12b, byte ptr [r10 + VALUE]
#define OR_R12B_FROM_PTR_R11_(VALUE) or r12b, byte ptr [r11 + VALUE]
#define OR_R12B_FROM_PTR_R12_(VALUE) or r12b, byte ptr [r12 + VALUE]
#define OR_R12B_FROM_PTR_R13_(VALUE) or r12b, byte ptr [r13 + VALUE]
#define OR_R12B_FROM_PTR_R14_(VALUE) or r12b, byte ptr [r14 + VALUE]
#define OR_R12B_FROM_PTR_R15_(VALUE) or r12b, byte ptr [r15 + VALUE]
#define OR_R12B_FROM_PTR_EAX_(VALUE) or r12b, byte ptr [eax + VALUE]
#define OR_R12B_FROM_PTR_EBX_(VALUE) or r12b, byte ptr [ebx + VALUE]
#define OR_R12B_FROM_PTR_ECX_(VALUE) or r12b, byte ptr [ecx + VALUE]
#define OR_R12B_FROM_PTR_EDX_(VALUE) or r12b, byte ptr [edx + VALUE]
#define OR_R12B_FROM_PTR_EDI_(VALUE) or r12b, byte ptr [edi + VALUE]
#define OR_R12B_FROM_PTR_ESI_(VALUE) or r12b, byte ptr [esi + VALUE]
#define OR_R12B_FROM_PTR_EBP_(VALUE) or r12b, byte ptr [ebp + VALUE]
#define OR_R12B_FROM_PTR_ESP_(VALUE) or r12b, byte ptr [esp + VALUE]

#define OR_R13B_FROM_PTR_RAX_(VALUE) or r13b, byte ptr [rax + VALUE]
#define OR_R13B_FROM_PTR_RBX_(VALUE) or r13b, byte ptr [rbx + VALUE]
#define OR_R13B_FROM_PTR_RCX_(VALUE) or r13b, byte ptr [rcx + VALUE]
#define OR_R13B_FROM_PTR_RDX_(VALUE) or r13b, byte ptr [rdx + VALUE]
#define OR_R13B_FROM_PTR_RDI_(VALUE) or r13b, byte ptr [rdi + VALUE]
#define OR_R13B_FROM_PTR_RSI_(VALUE) or r13b, byte ptr [rsi + VALUE]
#define OR_R13B_FROM_PTR_RBP_(VALUE) or r13b, byte ptr [rbp + VALUE]
#define OR_R13B_FROM_PTR_RSP_(VALUE) or r13b, byte ptr [rsp + VALUE]
#define OR_R13B_FROM_PTR_R8_(VALUE) or r13b, byte ptr [r8 + VALUE]
#define OR_R13B_FROM_PTR_R9_(VALUE) or r13b, byte ptr [r9 + VALUE]
#define OR_R13B_FROM_PTR_R10_(VALUE) or r13b, byte ptr [r10 + VALUE]
#define OR_R13B_FROM_PTR_R11_(VALUE) or r13b, byte ptr [r11 + VALUE]
#define OR_R13B_FROM_PTR_R12_(VALUE) or r13b, byte ptr [r12 + VALUE]
#define OR_R13B_FROM_PTR_R13_(VALUE) or r13b, byte ptr [r13 + VALUE]
#define OR_R13B_FROM_PTR_R14_(VALUE) or r13b, byte ptr [r14 + VALUE]
#define OR_R13B_FROM_PTR_R15_(VALUE) or r13b, byte ptr [r15 + VALUE]
#define OR_R13B_FROM_PTR_EAX_(VALUE) or r13b, byte ptr [eax + VALUE]
#define OR_R13B_FROM_PTR_EBX_(VALUE) or r13b, byte ptr [ebx + VALUE]
#define OR_R13B_FROM_PTR_ECX_(VALUE) or r13b, byte ptr [ecx + VALUE]
#define OR_R13B_FROM_PTR_EDX_(VALUE) or r13b, byte ptr [edx + VALUE]
#define OR_R13B_FROM_PTR_EDI_(VALUE) or r13b, byte ptr [edi + VALUE]
#define OR_R13B_FROM_PTR_ESI_(VALUE) or r13b, byte ptr [esi + VALUE]
#define OR_R13B_FROM_PTR_EBP_(VALUE) or r13b, byte ptr [ebp + VALUE]
#define OR_R13B_FROM_PTR_ESP_(VALUE) or r13b, byte ptr [esp + VALUE]

#define OR_R14B_FROM_PTR_RAX_(VALUE) or r14b, byte ptr [rax + VALUE]
#define OR_R14B_FROM_PTR_RBX_(VALUE) or r14b, byte ptr [rbx + VALUE]
#define OR_R14B_FROM_PTR_RCX_(VALUE) or r14b, byte ptr [rcx + VALUE]
#define OR_R14B_FROM_PTR_RDX_(VALUE) or r14b, byte ptr [rdx + VALUE]
#define OR_R14B_FROM_PTR_RDI_(VALUE) or r14b, byte ptr [rdi + VALUE]
#define OR_R14B_FROM_PTR_RSI_(VALUE) or r14b, byte ptr [rsi + VALUE]
#define OR_R14B_FROM_PTR_RBP_(VALUE) or r14b, byte ptr [rbp + VALUE]
#define OR_R14B_FROM_PTR_RSP_(VALUE) or r14b, byte ptr [rsp + VALUE]
#define OR_R14B_FROM_PTR_R8_(VALUE) or r14b, byte ptr [r8 + VALUE]
#define OR_R14B_FROM_PTR_R9_(VALUE) or r14b, byte ptr [r9 + VALUE]
#define OR_R14B_FROM_PTR_R10_(VALUE) or r14b, byte ptr [r10 + VALUE]
#define OR_R14B_FROM_PTR_R11_(VALUE) or r14b, byte ptr [r11 + VALUE]
#define OR_R14B_FROM_PTR_R12_(VALUE) or r14b, byte ptr [r12 + VALUE]
#define OR_R14B_FROM_PTR_R13_(VALUE) or r14b, byte ptr [r13 + VALUE]
#define OR_R14B_FROM_PTR_R14_(VALUE) or r14b, byte ptr [r14 + VALUE]
#define OR_R14B_FROM_PTR_R15_(VALUE) or r14b, byte ptr [r15 + VALUE]
#define OR_R14B_FROM_PTR_EAX_(VALUE) or r14b, byte ptr [eax + VALUE]
#define OR_R14B_FROM_PTR_EBX_(VALUE) or r14b, byte ptr [ebx + VALUE]
#define OR_R14B_FROM_PTR_ECX_(VALUE) or r14b, byte ptr [ecx + VALUE]
#define OR_R14B_FROM_PTR_EDX_(VALUE) or r14b, byte ptr [edx + VALUE]
#define OR_R14B_FROM_PTR_EDI_(VALUE) or r14b, byte ptr [edi + VALUE]
#define OR_R14B_FROM_PTR_ESI_(VALUE) or r14b, byte ptr [esi + VALUE]
#define OR_R14B_FROM_PTR_EBP_(VALUE) or r14b, byte ptr [ebp + VALUE]
#define OR_R14B_FROM_PTR_ESP_(VALUE) or r14b, byte ptr [esp + VALUE]

#define OR_R15B_FROM_PTR_RAX_(VALUE) or r15b, byte ptr [rax + VALUE]
#define OR_R15B_FROM_PTR_RBX_(VALUE) or r15b, byte ptr [rbx + VALUE]
#define OR_R15B_FROM_PTR_RCX_(VALUE) or r15b, byte ptr [rcx + VALUE]
#define OR_R15B_FROM_PTR_RDX_(VALUE) or r15b, byte ptr [rdx + VALUE]
#define OR_R15B_FROM_PTR_RDI_(VALUE) or r15b, byte ptr [rdi + VALUE]
#define OR_R15B_FROM_PTR_RSI_(VALUE) or r15b, byte ptr [rsi + VALUE]
#define OR_R15B_FROM_PTR_RBP_(VALUE) or r15b, byte ptr [rbp + VALUE]
#define OR_R15B_FROM_PTR_RSP_(VALUE) or r15b, byte ptr [rsp + VALUE]
#define OR_R15B_FROM_PTR_R8_(VALUE) or r15b, byte ptr [r8 + VALUE]
#define OR_R15B_FROM_PTR_R9_(VALUE) or r15b, byte ptr [r9 + VALUE]
#define OR_R15B_FROM_PTR_R10_(VALUE) or r15b, byte ptr [r10 + VALUE]
#define OR_R15B_FROM_PTR_R11_(VALUE) or r15b, byte ptr [r11 + VALUE]
#define OR_R15B_FROM_PTR_R12_(VALUE) or r15b, byte ptr [r12 + VALUE]
#define OR_R15B_FROM_PTR_R13_(VALUE) or r15b, byte ptr [r13 + VALUE]
#define OR_R15B_FROM_PTR_R14_(VALUE) or r15b, byte ptr [r14 + VALUE]
#define OR_R15B_FROM_PTR_R15_(VALUE) or r15b, byte ptr [r15 + VALUE]
#define OR_R15B_FROM_PTR_EAX_(VALUE) or r15b, byte ptr [eax + VALUE]
#define OR_R15B_FROM_PTR_EBX_(VALUE) or r15b, byte ptr [ebx + VALUE]
#define OR_R15B_FROM_PTR_ECX_(VALUE) or r15b, byte ptr [ecx + VALUE]
#define OR_R15B_FROM_PTR_EDX_(VALUE) or r15b, byte ptr [edx + VALUE]
#define OR_R15B_FROM_PTR_EDI_(VALUE) or r15b, byte ptr [edi + VALUE]
#define OR_R15B_FROM_PTR_ESI_(VALUE) or r15b, byte ptr [esi + VALUE]
#define OR_R15B_FROM_PTR_EBP_(VALUE) or r15b, byte ptr [ebp + VALUE]
#define OR_R15B_FROM_PTR_ESP_(VALUE) or r15b, byte ptr [esp + VALUE]

#define OR_AL_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], al
#define OR_AL_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], al
#define OR_AL_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], al
#define OR_AL_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], al
#define OR_AL_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], al
#define OR_AL_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], al
#define OR_AL_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], al
#define OR_AL_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], al
#define OR_AL_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], al
#define OR_AL_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], al
#define OR_AL_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], al
#define OR_AL_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], al
#define OR_AL_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], al
#define OR_AL_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], al
#define OR_AL_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], al
#define OR_AL_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], al
#define OR_AL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], al
#define OR_AL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], al
#define OR_AL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], al
#define OR_AL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], al
#define OR_AL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], al
#define OR_AL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], al
#define OR_AL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], al
#define OR_AL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], al

#define OR_BL_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], bl
#define OR_BL_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], bl
#define OR_BL_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], bl
#define OR_BL_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], bl
#define OR_BL_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], bl
#define OR_BL_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], bl
#define OR_BL_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], bl
#define OR_BL_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], bl
#define OR_BL_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], bl
#define OR_BL_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], bl
#define OR_BL_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], bl
#define OR_BL_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], bl
#define OR_BL_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], bl
#define OR_BL_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], bl
#define OR_BL_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], bl
#define OR_BL_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], bl
#define OR_BL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], bl
#define OR_BL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], bl
#define OR_BL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], bl
#define OR_BL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], bl
#define OR_BL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], bl
#define OR_BL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], bl
#define OR_BL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], bl
#define OR_BL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], bl

#define OR_CL_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], cl
#define OR_CL_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], cl
#define OR_CL_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], cl
#define OR_CL_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], cl
#define OR_CL_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], cl
#define OR_CL_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], cl
#define OR_CL_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], cl
#define OR_CL_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], cl
#define OR_CL_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], cl
#define OR_CL_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], cl
#define OR_CL_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], cl
#define OR_CL_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], cl
#define OR_CL_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], cl
#define OR_CL_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], cl
#define OR_CL_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], cl
#define OR_CL_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], cl
#define OR_CL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], cl
#define OR_CL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], cl
#define OR_CL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], cl
#define OR_CL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], cl
#define OR_CL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], cl
#define OR_CL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], cl
#define OR_CL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], cl
#define OR_CL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], cl

#define OR_DL_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], dl
#define OR_DL_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], dl
#define OR_DL_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], dl
#define OR_DL_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], dl
#define OR_DL_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], dl
#define OR_DL_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], dl
#define OR_DL_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], dl
#define OR_DL_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], dl
#define OR_DL_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], dl
#define OR_DL_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], dl
#define OR_DL_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], dl
#define OR_DL_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], dl
#define OR_DL_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], dl
#define OR_DL_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], dl
#define OR_DL_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], dl
#define OR_DL_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], dl
#define OR_DL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], dl
#define OR_DL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], dl
#define OR_DL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], dl
#define OR_DL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], dl
#define OR_DL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], dl
#define OR_DL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], dl
#define OR_DL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], dl
#define OR_DL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], dl

#define OR_DIL_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], dil
#define OR_DIL_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], dil
#define OR_DIL_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], dil
#define OR_DIL_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], dil
#define OR_DIL_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], dil
#define OR_DIL_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], dil
#define OR_DIL_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], dil
#define OR_DIL_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], dil
#define OR_DIL_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], dil
#define OR_DIL_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], dil
#define OR_DIL_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], dil
#define OR_DIL_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], dil
#define OR_DIL_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], dil
#define OR_DIL_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], dil
#define OR_DIL_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], dil
#define OR_DIL_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], dil
#define OR_DIL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], dil
#define OR_DIL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], dil
#define OR_DIL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], dil
#define OR_DIL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], dil
#define OR_DIL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], dil
#define OR_DIL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], dil
#define OR_DIL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], dil
#define OR_DIL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], dil

#define OR_SIL_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], sil
#define OR_SIL_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], sil
#define OR_SIL_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], sil
#define OR_SIL_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], sil
#define OR_SIL_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], sil
#define OR_SIL_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], sil
#define OR_SIL_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], sil
#define OR_SIL_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], sil
#define OR_SIL_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], sil
#define OR_SIL_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], sil
#define OR_SIL_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], sil
#define OR_SIL_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], sil
#define OR_SIL_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], sil
#define OR_SIL_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], sil
#define OR_SIL_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], sil
#define OR_SIL_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], sil
#define OR_SIL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], sil
#define OR_SIL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], sil
#define OR_SIL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], sil
#define OR_SIL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], sil
#define OR_SIL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], sil
#define OR_SIL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], sil
#define OR_SIL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], sil
#define OR_SIL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], sil

#define OR_BPL_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], bpl
#define OR_BPL_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], bpl
#define OR_BPL_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], bpl
#define OR_BPL_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], bpl
#define OR_BPL_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], bpl
#define OR_BPL_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], bpl
#define OR_BPL_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], bpl
#define OR_BPL_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], bpl
#define OR_BPL_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], bpl
#define OR_BPL_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], bpl
#define OR_BPL_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], bpl
#define OR_BPL_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], bpl
#define OR_BPL_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], bpl
#define OR_BPL_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], bpl
#define OR_BPL_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], bpl
#define OR_BPL_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], bpl
#define OR_BPL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], bpl
#define OR_BPL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], bpl
#define OR_BPL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], bpl
#define OR_BPL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], bpl
#define OR_BPL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], bpl
#define OR_BPL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], bpl
#define OR_BPL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], bpl
#define OR_BPL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], bpl

#define OR_SPL_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], spl
#define OR_SPL_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], spl
#define OR_SPL_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], spl
#define OR_SPL_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], spl
#define OR_SPL_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], spl
#define OR_SPL_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], spl
#define OR_SPL_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], spl
#define OR_SPL_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], spl
#define OR_SPL_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], spl
#define OR_SPL_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], spl
#define OR_SPL_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], spl
#define OR_SPL_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], spl
#define OR_SPL_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], spl
#define OR_SPL_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], spl
#define OR_SPL_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], spl
#define OR_SPL_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], spl
#define OR_SPL_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], spl
#define OR_SPL_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], spl
#define OR_SPL_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], spl
#define OR_SPL_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], spl
#define OR_SPL_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], spl
#define OR_SPL_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], spl
#define OR_SPL_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], spl
#define OR_SPL_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], spl

#define OR_R8B_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], r8b
#define OR_R8B_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], r8b
#define OR_R8B_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], r8b
#define OR_R8B_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], r8b
#define OR_R8B_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], r8b
#define OR_R8B_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], r8b
#define OR_R8B_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], r8b
#define OR_R8B_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], r8b
#define OR_R8B_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], r8b
#define OR_R8B_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], r8b
#define OR_R8B_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], r8b
#define OR_R8B_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], r8b
#define OR_R8B_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], r8b
#define OR_R8B_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], r8b
#define OR_R8B_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], r8b
#define OR_R8B_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], r8b
#define OR_R8B_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], r8b
#define OR_R8B_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], r8b
#define OR_R8B_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], r8b
#define OR_R8B_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], r8b
#define OR_R8B_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], r8b
#define OR_R8B_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], r8b
#define OR_R8B_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], r8b
#define OR_R8B_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], r8b

#define OR_R9B_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], r9b
#define OR_R9B_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], r9b
#define OR_R9B_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], r9b
#define OR_R9B_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], r9b
#define OR_R9B_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], r9b
#define OR_R9B_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], r9b
#define OR_R9B_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], r9b
#define OR_R9B_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], r9b
#define OR_R9B_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], r9b
#define OR_R9B_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], r9b
#define OR_R9B_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], r9b
#define OR_R9B_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], r9b
#define OR_R9B_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], r9b
#define OR_R9B_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], r9b
#define OR_R9B_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], r9b
#define OR_R9B_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], r9b
#define OR_R9B_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], r9b
#define OR_R9B_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], r9b
#define OR_R9B_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], r9b
#define OR_R9B_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], r9b
#define OR_R9B_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], r9b
#define OR_R9B_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], r9b
#define OR_R9B_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], r9b
#define OR_R9B_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], r9b

#define OR_R10B_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], r10b
#define OR_R10B_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], r10b
#define OR_R10B_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], r10b
#define OR_R10B_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], r10b
#define OR_R10B_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], r10b
#define OR_R10B_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], r10b
#define OR_R10B_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], r10b
#define OR_R10B_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], r10b
#define OR_R10B_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], r10b
#define OR_R10B_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], r10b
#define OR_R10B_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], r10b
#define OR_R10B_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], r10b
#define OR_R10B_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], r10b
#define OR_R10B_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], r10b
#define OR_R10B_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], r10b
#define OR_R10B_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], r10b
#define OR_R10B_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], r10b
#define OR_R10B_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], r10b
#define OR_R10B_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], r10b
#define OR_R10B_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], r10b
#define OR_R10B_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], r10b
#define OR_R10B_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], r10b
#define OR_R10B_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], r10b
#define OR_R10B_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], r10b

#define OR_R11B_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], r11b
#define OR_R11B_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], r11b
#define OR_R11B_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], r11b
#define OR_R11B_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], r11b
#define OR_R11B_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], r11b
#define OR_R11B_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], r11b
#define OR_R11B_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], r11b
#define OR_R11B_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], r11b
#define OR_R11B_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], r11b
#define OR_R11B_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], r11b
#define OR_R11B_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], r11b
#define OR_R11B_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], r11b
#define OR_R11B_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], r11b
#define OR_R11B_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], r11b
#define OR_R11B_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], r11b
#define OR_R11B_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], r11b
#define OR_R11B_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], r11b
#define OR_R11B_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], r11b
#define OR_R11B_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], r11b
#define OR_R11B_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], r11b
#define OR_R11B_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], r11b
#define OR_R11B_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], r11b
#define OR_R11B_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], r11b
#define OR_R11B_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], r11b

#define OR_R12B_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], r12b
#define OR_R12B_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], r12b
#define OR_R12B_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], r12b
#define OR_R12B_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], r12b
#define OR_R12B_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], r12b
#define OR_R12B_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], r12b
#define OR_R12B_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], r12b
#define OR_R12B_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], r12b
#define OR_R12B_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], r12b
#define OR_R12B_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], r12b
#define OR_R12B_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], r12b
#define OR_R12B_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], r12b
#define OR_R12B_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], r12b
#define OR_R12B_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], r12b
#define OR_R12B_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], r12b
#define OR_R12B_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], r12b
#define OR_R12B_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], r12b
#define OR_R12B_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], r12b
#define OR_R12B_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], r12b
#define OR_R12B_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], r12b
#define OR_R12B_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], r12b
#define OR_R12B_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], r12b
#define OR_R12B_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], r12b
#define OR_R12B_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], r12b

#define OR_R13B_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], r13b
#define OR_R13B_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], r13b
#define OR_R13B_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], r13b
#define OR_R13B_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], r13b
#define OR_R13B_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], r13b
#define OR_R13B_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], r13b
#define OR_R13B_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], r13b
#define OR_R13B_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], r13b
#define OR_R13B_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], r13b
#define OR_R13B_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], r13b
#define OR_R13B_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], r13b
#define OR_R13B_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], r13b
#define OR_R13B_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], r13b
#define OR_R13B_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], r13b
#define OR_R13B_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], r13b
#define OR_R13B_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], r13b
#define OR_R13B_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], r13b
#define OR_R13B_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], r13b
#define OR_R13B_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], r13b
#define OR_R13B_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], r13b
#define OR_R13B_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], r13b
#define OR_R13B_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], r13b
#define OR_R13B_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], r13b
#define OR_R13B_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], r13b

#define OR_R14B_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], r14b
#define OR_R14B_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], r14b
#define OR_R14B_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], r14b
#define OR_R14B_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], r14b
#define OR_R14B_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], r14b
#define OR_R14B_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], r14b
#define OR_R14B_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], r14b
#define OR_R14B_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], r14b
#define OR_R14B_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], r14b
#define OR_R14B_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], r14b
#define OR_R14B_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], r14b
#define OR_R14B_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], r14b
#define OR_R14B_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], r14b
#define OR_R14B_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], r14b
#define OR_R14B_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], r14b
#define OR_R14B_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], r14b
#define OR_R14B_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], r14b
#define OR_R14B_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], r14b
#define OR_R14B_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], r14b
#define OR_R14B_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], r14b
#define OR_R14B_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], r14b
#define OR_R14B_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], r14b
#define OR_R14B_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], r14b
#define OR_R14B_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], r14b

#define OR_R15B_TO_PTR_RAX_(VALUE) or byte ptr [rax + VALUE], r15b
#define OR_R15B_TO_PTR_RBX_(VALUE) or byte ptr [rbx + VALUE], r15b
#define OR_R15B_TO_PTR_RCX_(VALUE) or byte ptr [rcx + VALUE], r15b
#define OR_R15B_TO_PTR_RDX_(VALUE) or byte ptr [rdx + VALUE], r15b
#define OR_R15B_TO_PTR_RDI_(VALUE) or byte ptr [rdi + VALUE], r15b
#define OR_R15B_TO_PTR_RSI_(VALUE) or byte ptr [rsi + VALUE], r15b
#define OR_R15B_TO_PTR_RBP_(VALUE) or byte ptr [rbp + VALUE], r15b
#define OR_R15B_TO_PTR_RSP_(VALUE) or byte ptr [rsp + VALUE], r15b
#define OR_R15B_TO_PTR_R8_(VALUE) or byte ptr [r8 + VALUE], r15b
#define OR_R15B_TO_PTR_R9_(VALUE) or byte ptr [r9 + VALUE], r15b
#define OR_R15B_TO_PTR_R10_(VALUE) or byte ptr [r10 + VALUE], r15b
#define OR_R15B_TO_PTR_R11_(VALUE) or byte ptr [r11 + VALUE], r15b
#define OR_R15B_TO_PTR_R12_(VALUE) or byte ptr [r12 + VALUE], r15b
#define OR_R15B_TO_PTR_R13_(VALUE) or byte ptr [r13 + VALUE], r15b
#define OR_R15B_TO_PTR_R14_(VALUE) or byte ptr [r14 + VALUE], r15b
#define OR_R15B_TO_PTR_R15_(VALUE) or byte ptr [r15 + VALUE], r15b
#define OR_R15B_TO_PTR_EAX_(VALUE) or byte ptr [eax + VALUE], r15b
#define OR_R15B_TO_PTR_EBX_(VALUE) or byte ptr [ebx + VALUE], r15b
#define OR_R15B_TO_PTR_ECX_(VALUE) or byte ptr [ecx + VALUE], r15b
#define OR_R15B_TO_PTR_EDX_(VALUE) or byte ptr [edx + VALUE], r15b
#define OR_R15B_TO_PTR_EDI_(VALUE) or byte ptr [edi + VALUE], r15b
#define OR_R15B_TO_PTR_ESI_(VALUE) or byte ptr [esi + VALUE], r15b
#define OR_R15B_TO_PTR_EBP_(VALUE) or byte ptr [ebp + VALUE], r15b
#define OR_R15B_TO_PTR_ESP_(VALUE) or byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define OR_AX_FROM_PTR_(VALUE) or ax, word ptr [VALUE]
#define OR_BX_FROM_PTR_(VALUE) or bx, word ptr [VALUE]
#define OR_CX_FROM_PTR_(VALUE) or cx, word ptr [VALUE]
#define OR_DX_FROM_PTR_(VALUE) or dx, word ptr [VALUE]
#define OR_DI_FROM_PTR_(VALUE) or di, word ptr [VALUE]
#define OR_SI_FROM_PTR_(VALUE) or si, word ptr [VALUE]
#define OR_BP_FROM_PTR_(VALUE) or bp, word ptr [VALUE]
#define OR_SP_FROM_PTR_(VALUE) or sp, word ptr [VALUE]

#define OR_AX_TO_PTR_(VALUE) or word ptr [VALUE], ax
#define OR_BX_TO_PTR_(VALUE) or word ptr [VALUE], bx
#define OR_CX_TO_PTR_(VALUE) or word ptr [VALUE], cx
#define OR_DX_TO_PTR_(VALUE) or word ptr [VALUE], dx
#define OR_DI_TO_PTR_(VALUE) or word ptr [VALUE], di
#define OR_SI_TO_PTR_(VALUE) or word ptr [VALUE], si
#define OR_BP_TO_PTR_(VALUE) or word ptr [VALUE], bp
#define OR_SP_TO_PTR_(VALUE) or word ptr [VALUE], sp

#define OR_AX_FROM_PTR_BX or ax, word ptr [bx]
#define OR_AX_FROM_PTR_BP or ax, word ptr [bp]
#define OR_AX_FROM_PTR_SI or ax, word ptr [si]
#define OR_AX_FROM_PTR_DI or ax, word ptr [di]

#define OR_BX_FROM_PTR_BX or bx, word ptr [bx]
#define OR_BX_FROM_PTR_BP or bx, word ptr [bp]
#define OR_BX_FROM_PTR_SI or bx, word ptr [si]
#define OR_BX_FROM_PTR_DI or bx, word ptr [di]

#define OR_CX_FROM_PTR_BX or cx, word ptr [bx]
#define OR_CX_FROM_PTR_BP or cx, word ptr [bp]
#define OR_CX_FROM_PTR_SI or cx, word ptr [si]
#define OR_CX_FROM_PTR_DI or cx, word ptr [di]

#define OR_DX_FROM_PTR_BX or dx, word ptr [bx]
#define OR_DX_FROM_PTR_BP or dx, word ptr [bp]
#define OR_DX_FROM_PTR_SI or dx, word ptr [si]
#define OR_DX_FROM_PTR_DI or dx, word ptr [di]

#define OR_DI_FROM_PTR_BX or di, word ptr [bx]
#define OR_DI_FROM_PTR_BP or di, word ptr [bp]
#define OR_DI_FROM_PTR_SI or di, word ptr [si]
#define OR_DI_FROM_PTR_DI or di, word ptr [di]

#define OR_SI_FROM_PTR_BX or si, word ptr [bx]
#define OR_SI_FROM_PTR_BP or si, word ptr [bp]
#define OR_SI_FROM_PTR_SI or si, word ptr [si]
#define OR_SI_FROM_PTR_DI or si, word ptr [di]

#define OR_BP_FROM_PTR_BX or bp, word ptr [bx]
#define OR_BP_FROM_PTR_BP or bp, word ptr [bp]
#define OR_BP_FROM_PTR_SI or bp, word ptr [si]
#define OR_BP_FROM_PTR_DI or bp, word ptr [di]

#define OR_SP_FROM_PTR_BX or sp, word ptr [bx]
#define OR_SP_FROM_PTR_BP or sp, word ptr [bp]
#define OR_SP_FROM_PTR_SI or sp, word ptr [si]
#define OR_SP_FROM_PTR_DI or sp, word ptr [di]

#define OR_AX_TO_PTR_BX or word ptr [bx], ax
#define OR_AX_TO_PTR_BP or word ptr [bp], ax
#define OR_AX_TO_PTR_SI or word ptr [si], ax
#define OR_AX_TO_PTR_DI or word ptr [di], ax

#define OR_BX_TO_PTR_BX or word ptr [bx], bx
#define OR_BX_TO_PTR_BP or word ptr [bp], bx
#define OR_BX_TO_PTR_SI or word ptr [si], bx
#define OR_BX_TO_PTR_DI or word ptr [di], bx

#define OR_CX_TO_PTR_BX or word ptr [bx], cx
#define OR_CX_TO_PTR_BP or word ptr [bp], cx
#define OR_CX_TO_PTR_SI or word ptr [si], cx
#define OR_CX_TO_PTR_DI or word ptr [di], cx

#define OR_DX_TO_PTR_BX or word ptr [bx], dx
#define OR_DX_TO_PTR_BP or word ptr [bp], dx
#define OR_DX_TO_PTR_SI or word ptr [si], dx
#define OR_DX_TO_PTR_DI or word ptr [di], dx

#define OR_DI_TO_PTR_BX or word ptr [bx], di
#define OR_DI_TO_PTR_BP or word ptr [bp], di
#define OR_DI_TO_PTR_SI or word ptr [si], di
#define OR_DI_TO_PTR_DI or word ptr [di], di

#define OR_SI_TO_PTR_BX or word ptr [bx], si
#define OR_SI_TO_PTR_BP or word ptr [bp], si
#define OR_SI_TO_PTR_SI or word ptr [si], si
#define OR_SI_TO_PTR_DI or word ptr [di], si

#define OR_BP_TO_PTR_BX or word ptr [bx], bp
#define OR_BP_TO_PTR_BP or word ptr [bp], bp
#define OR_BP_TO_PTR_SI or word ptr [si], bp
#define OR_BP_TO_PTR_DI or word ptr [di], bp

#define OR_SP_TO_PTR_BX or word ptr [bx], sp
#define OR_SP_TO_PTR_BP or word ptr [bp], sp
#define OR_SP_TO_PTR_SI or word ptr [si], sp
#define OR_SP_TO_PTR_DI or word ptr [di], sp

#define OR_AX_FROM_PTR_BX_(VALUE) or ax, word ptr [bx + VALUE]
#define OR_AX_FROM_PTR_BP_(VALUE) or ax, word ptr [bp + VALUE]
#define OR_AX_FROM_PTR_SI_(VALUE) or ax, word ptr [si + VALUE]
#define OR_AX_FROM_PTR_DI_(VALUE) or ax, word ptr [di + VALUE]

#define OR_BX_FROM_PTR_BX_(VALUE) or bx, word ptr [bx + VALUE]
#define OR_BX_FROM_PTR_BP_(VALUE) or bx, word ptr [bp + VALUE]
#define OR_BX_FROM_PTR_SI_(VALUE) or bx, word ptr [si + VALUE]
#define OR_BX_FROM_PTR_DI_(VALUE) or bx, word ptr [di + VALUE]

#define OR_CX_FROM_PTR_BX_(VALUE) or cx, word ptr [bx + VALUE]
#define OR_CX_FROM_PTR_BP_(VALUE) or cx, word ptr [bp + VALUE]
#define OR_CX_FROM_PTR_SI_(VALUE) or cx, word ptr [si + VALUE]
#define OR_CX_FROM_PTR_DI_(VALUE) or cx, word ptr [di + VALUE]

#define OR_DX_FROM_PTR_BX_(VALUE) or dx, word ptr [bx + VALUE]
#define OR_DX_FROM_PTR_BP_(VALUE) or dx, word ptr [bp + VALUE]
#define OR_DX_FROM_PTR_SI_(VALUE) or dx, word ptr [si + VALUE]
#define OR_DX_FROM_PTR_DI_(VALUE) or dx, word ptr [di + VALUE]

#define OR_DI_FROM_PTR_BX_(VALUE) or di, word ptr [bx + VALUE]
#define OR_DI_FROM_PTR_BP_(VALUE) or di, word ptr [bp + VALUE]
#define OR_DI_FROM_PTR_SI_(VALUE) or di, word ptr [si + VALUE]
#define OR_DI_FROM_PTR_DI_(VALUE) or di, word ptr [di + VALUE]

#define OR_SI_FROM_PTR_BX_(VALUE) or si, word ptr [bx + VALUE]
#define OR_SI_FROM_PTR_BP_(VALUE) or si, word ptr [bp + VALUE]
#define OR_SI_FROM_PTR_SI_(VALUE) or si, word ptr [si + VALUE]
#define OR_SI_FROM_PTR_DI_(VALUE) or si, word ptr [di + VALUE]

#define OR_BP_FROM_PTR_BX_(VALUE) or bp, word ptr [bx + VALUE]
#define OR_BP_FROM_PTR_BP_(VALUE) or bp, word ptr [bp + VALUE]
#define OR_BP_FROM_PTR_SI_(VALUE) or bp, word ptr [si + VALUE]
#define OR_BP_FROM_PTR_DI_(VALUE) or bp, word ptr [di + VALUE]

#define OR_SP_FROM_PTR_BX_(VALUE) or sp, word ptr [bx + VALUE]
#define OR_SP_FROM_PTR_BP_(VALUE) or sp, word ptr [bp + VALUE]
#define OR_SP_FROM_PTR_SI_(VALUE) or sp, word ptr [si + VALUE]
#define OR_SP_FROM_PTR_DI_(VALUE) or sp, word ptr [di + VALUE]

#define OR_AX_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], ax
#define OR_AX_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], ax
#define OR_AX_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], ax
#define OR_AX_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], ax

#define OR_BX_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], bx
#define OR_BX_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], bx
#define OR_BX_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], bx
#define OR_BX_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], bx

#define OR_CX_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], cx
#define OR_CX_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], cx
#define OR_CX_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], cx
#define OR_CX_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], cx

#define OR_DX_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], dx
#define OR_DX_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], dx
#define OR_DX_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], dx
#define OR_DX_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], dx

#define OR_DI_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], di
#define OR_DI_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], di
#define OR_DI_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], di
#define OR_DI_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], di

#define OR_SI_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], si
#define OR_SI_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], si
#define OR_SI_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], si
#define OR_SI_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], si

#define OR_BP_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], bp
#define OR_BP_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], bp
#define OR_BP_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], bp
#define OR_BP_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], bp

#define OR_SP_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], sp
#define OR_SP_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], sp
#define OR_SP_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], sp
#define OR_SP_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define OR_AX_FROM_PTR_(VALUE) or ax, word ptr [VALUE]
#define OR_BX_FROM_PTR_(VALUE) or bx, word ptr [VALUE]
#define OR_CX_FROM_PTR_(VALUE) or cx, word ptr [VALUE]
#define OR_DX_FROM_PTR_(VALUE) or dx, word ptr [VALUE]
#define OR_DI_FROM_PTR_(VALUE) or di, word ptr [VALUE]
#define OR_SI_FROM_PTR_(VALUE) or si, word ptr [VALUE]
#define OR_BP_FROM_PTR_(VALUE) or bp, word ptr [VALUE]
#define OR_SP_FROM_PTR_(VALUE) or sp, word ptr [VALUE]

#define OR_AX_TO_PTR_(VALUE) or word ptr [VALUE], ax
#define OR_BX_TO_PTR_(VALUE) or word ptr [VALUE], bx
#define OR_CX_TO_PTR_(VALUE) or word ptr [VALUE], cx
#define OR_DX_TO_PTR_(VALUE) or word ptr [VALUE], dx
#define OR_DI_TO_PTR_(VALUE) or word ptr [VALUE], di
#define OR_SI_TO_PTR_(VALUE) or word ptr [VALUE], si
#define OR_BP_TO_PTR_(VALUE) or word ptr [VALUE], bp
#define OR_SP_TO_PTR_(VALUE) or word ptr [VALUE], sp

#define OR_AX_FROM_PTR_EAX or ax, word ptr [eax]
#define OR_AX_FROM_PTR_EBX or ax, word ptr [ebx]
#define OR_AX_FROM_PTR_ECX or ax, word ptr [ecx]
#define OR_AX_FROM_PTR_EDX or ax, word ptr [edx]
#define OR_AX_FROM_PTR_EDI or ax, word ptr [edi]
#define OR_AX_FROM_PTR_ESI or ax, word ptr [esi]
#define OR_AX_FROM_PTR_EBP or ax, word ptr [ebp]
#define OR_AX_FROM_PTR_ESP or ax, word ptr [esp]
#define OR_AX_FROM_PTR_BX or ax, word ptr [bx]
#define OR_AX_FROM_PTR_BP or ax, word ptr [bp]
#define OR_AX_FROM_PTR_SI or ax, word ptr [si]
#define OR_AX_FROM_PTR_DI or ax, word ptr [di]

#define OR_BX_FROM_PTR_EAX or bx, word ptr [eax]
#define OR_BX_FROM_PTR_EBX or bx, word ptr [ebx]
#define OR_BX_FROM_PTR_ECX or bx, word ptr [ecx]
#define OR_BX_FROM_PTR_EDX or bx, word ptr [edx]
#define OR_BX_FROM_PTR_EDI or bx, word ptr [edi]
#define OR_BX_FROM_PTR_ESI or bx, word ptr [esi]
#define OR_BX_FROM_PTR_EBP or bx, word ptr [ebp]
#define OR_BX_FROM_PTR_ESP or bx, word ptr [esp]
#define OR_BX_FROM_PTR_BX or bx, word ptr [bx]
#define OR_BX_FROM_PTR_BP or bx, word ptr [bp]
#define OR_BX_FROM_PTR_SI or bx, word ptr [si]
#define OR_BX_FROM_PTR_DI or bx, word ptr [di]

#define OR_CX_FROM_PTR_EAX or cx, word ptr [eax]
#define OR_CX_FROM_PTR_EBX or cx, word ptr [ebx]
#define OR_CX_FROM_PTR_ECX or cx, word ptr [ecx]
#define OR_CX_FROM_PTR_EDX or cx, word ptr [edx]
#define OR_CX_FROM_PTR_EDI or cx, word ptr [edi]
#define OR_CX_FROM_PTR_ESI or cx, word ptr [esi]
#define OR_CX_FROM_PTR_EBP or cx, word ptr [ebp]
#define OR_CX_FROM_PTR_ESP or cx, word ptr [esp]
#define OR_CX_FROM_PTR_BX or cx, word ptr [bx]
#define OR_CX_FROM_PTR_BP or cx, word ptr [bp]
#define OR_CX_FROM_PTR_SI or cx, word ptr [si]
#define OR_CX_FROM_PTR_DI or cx, word ptr [di]

#define OR_DX_FROM_PTR_EAX or dx, word ptr [eax]
#define OR_DX_FROM_PTR_EBX or dx, word ptr [ebx]
#define OR_DX_FROM_PTR_ECX or dx, word ptr [ecx]
#define OR_DX_FROM_PTR_EDX or dx, word ptr [edx]
#define OR_DX_FROM_PTR_EDI or dx, word ptr [edi]
#define OR_DX_FROM_PTR_ESI or dx, word ptr [esi]
#define OR_DX_FROM_PTR_EBP or dx, word ptr [ebp]
#define OR_DX_FROM_PTR_ESP or dx, word ptr [esp]
#define OR_DX_FROM_PTR_BX or dx, word ptr [bx]
#define OR_DX_FROM_PTR_BP or dx, word ptr [bp]
#define OR_DX_FROM_PTR_SI or dx, word ptr [si]
#define OR_DX_FROM_PTR_DI or dx, word ptr [di]

#define OR_DI_FROM_PTR_EAX or di, word ptr [eax]
#define OR_DI_FROM_PTR_EBX or di, word ptr [ebx]
#define OR_DI_FROM_PTR_ECX or di, word ptr [ecx]
#define OR_DI_FROM_PTR_EDX or di, word ptr [edx]
#define OR_DI_FROM_PTR_EDI or di, word ptr [edi]
#define OR_DI_FROM_PTR_ESI or di, word ptr [esi]
#define OR_DI_FROM_PTR_EBP or di, word ptr [ebp]
#define OR_DI_FROM_PTR_ESP or di, word ptr [esp]
#define OR_DI_FROM_PTR_BX or di, word ptr [bx]
#define OR_DI_FROM_PTR_BP or di, word ptr [bp]
#define OR_DI_FROM_PTR_SI or di, word ptr [si]
#define OR_DI_FROM_PTR_DI or di, word ptr [di]

#define OR_SI_FROM_PTR_EAX or si, word ptr [eax]
#define OR_SI_FROM_PTR_EBX or si, word ptr [ebx]
#define OR_SI_FROM_PTR_ECX or si, word ptr [ecx]
#define OR_SI_FROM_PTR_EDX or si, word ptr [edx]
#define OR_SI_FROM_PTR_EDI or si, word ptr [edi]
#define OR_SI_FROM_PTR_ESI or si, word ptr [esi]
#define OR_SI_FROM_PTR_EBP or si, word ptr [ebp]
#define OR_SI_FROM_PTR_ESP or si, word ptr [esp]
#define OR_SI_FROM_PTR_BX or si, word ptr [bx]
#define OR_SI_FROM_PTR_BP or si, word ptr [bp]
#define OR_SI_FROM_PTR_SI or si, word ptr [si]
#define OR_SI_FROM_PTR_DI or si, word ptr [di]

#define OR_BP_FROM_PTR_EAX or bp, word ptr [eax]
#define OR_BP_FROM_PTR_EBX or bp, word ptr [ebx]
#define OR_BP_FROM_PTR_ECX or bp, word ptr [ecx]
#define OR_BP_FROM_PTR_EDX or bp, word ptr [edx]
#define OR_BP_FROM_PTR_EDI or bp, word ptr [edi]
#define OR_BP_FROM_PTR_ESI or bp, word ptr [esi]
#define OR_BP_FROM_PTR_EBP or bp, word ptr [ebp]
#define OR_BP_FROM_PTR_ESP or bp, word ptr [esp]
#define OR_BP_FROM_PTR_BX or bp, word ptr [bx]
#define OR_BP_FROM_PTR_BP or bp, word ptr [bp]
#define OR_BP_FROM_PTR_SI or bp, word ptr [si]
#define OR_BP_FROM_PTR_DI or bp, word ptr [di]

#define OR_SP_FROM_PTR_EAX or sp, word ptr [eax]
#define OR_SP_FROM_PTR_EBX or sp, word ptr [ebx]
#define OR_SP_FROM_PTR_ECX or sp, word ptr [ecx]
#define OR_SP_FROM_PTR_EDX or sp, word ptr [edx]
#define OR_SP_FROM_PTR_EDI or sp, word ptr [edi]
#define OR_SP_FROM_PTR_ESI or sp, word ptr [esi]
#define OR_SP_FROM_PTR_EBP or sp, word ptr [ebp]
#define OR_SP_FROM_PTR_ESP or sp, word ptr [esp]
#define OR_SP_FROM_PTR_BX or sp, word ptr [bx]
#define OR_SP_FROM_PTR_BP or sp, word ptr [bp]
#define OR_SP_FROM_PTR_SI or sp, word ptr [si]
#define OR_SP_FROM_PTR_DI or sp, word ptr [di]

#define OR_AX_TO_PTR_EAX or word ptr [eax], ax
#define OR_AX_TO_PTR_EBX or word ptr [ebx], ax
#define OR_AX_TO_PTR_ECX or word ptr [ecx], ax
#define OR_AX_TO_PTR_EDX or word ptr [edx], ax
#define OR_AX_TO_PTR_EDI or word ptr [edi], ax
#define OR_AX_TO_PTR_ESI or word ptr [esi], ax
#define OR_AX_TO_PTR_EBP or word ptr [ebp], ax
#define OR_AX_TO_PTR_ESP or word ptr [esp], ax
#define OR_AX_TO_PTR_BX or word ptr [bx], ax
#define OR_AX_TO_PTR_BP or word ptr [bp], ax
#define OR_AX_TO_PTR_SI or word ptr [si], ax
#define OR_AX_TO_PTR_DI or word ptr [di], ax

#define OR_BX_TO_PTR_EAX or word ptr [eax], bx
#define OR_BX_TO_PTR_EBX or word ptr [ebx], bx
#define OR_BX_TO_PTR_ECX or word ptr [ecx], bx
#define OR_BX_TO_PTR_EDX or word ptr [edx], bx
#define OR_BX_TO_PTR_EDI or word ptr [edi], bx
#define OR_BX_TO_PTR_ESI or word ptr [esi], bx
#define OR_BX_TO_PTR_EBP or word ptr [ebp], bx
#define OR_BX_TO_PTR_ESP or word ptr [esp], bx
#define OR_BX_TO_PTR_BX or word ptr [bx], bx
#define OR_BX_TO_PTR_BP or word ptr [bp], bx
#define OR_BX_TO_PTR_SI or word ptr [si], bx
#define OR_BX_TO_PTR_DI or word ptr [di], bx

#define OR_CX_TO_PTR_EAX or word ptr [eax], cx
#define OR_CX_TO_PTR_EBX or word ptr [ebx], cx
#define OR_CX_TO_PTR_ECX or word ptr [ecx], cx
#define OR_CX_TO_PTR_EDX or word ptr [edx], cx
#define OR_CX_TO_PTR_EDI or word ptr [edi], cx
#define OR_CX_TO_PTR_ESI or word ptr [esi], cx
#define OR_CX_TO_PTR_EBP or word ptr [ebp], cx
#define OR_CX_TO_PTR_ESP or word ptr [esp], cx
#define OR_CX_TO_PTR_BX or word ptr [bx], cx
#define OR_CX_TO_PTR_BP or word ptr [bp], cx
#define OR_CX_TO_PTR_SI or word ptr [si], cx
#define OR_CX_TO_PTR_DI or word ptr [di], cx

#define OR_DX_TO_PTR_EAX or word ptr [eax], dx
#define OR_DX_TO_PTR_EBX or word ptr [ebx], dx
#define OR_DX_TO_PTR_ECX or word ptr [ecx], dx
#define OR_DX_TO_PTR_EDX or word ptr [edx], dx
#define OR_DX_TO_PTR_EDI or word ptr [edi], dx
#define OR_DX_TO_PTR_ESI or word ptr [esi], dx
#define OR_DX_TO_PTR_EBP or word ptr [ebp], dx
#define OR_DX_TO_PTR_ESP or word ptr [esp], dx
#define OR_DX_TO_PTR_BX or word ptr [bx], dx
#define OR_DX_TO_PTR_BP or word ptr [bp], dx
#define OR_DX_TO_PTR_SI or word ptr [si], dx
#define OR_DX_TO_PTR_DI or word ptr [di], dx

#define OR_DI_TO_PTR_EAX or word ptr [eax], di
#define OR_DI_TO_PTR_EBX or word ptr [ebx], di
#define OR_DI_TO_PTR_ECX or word ptr [ecx], di
#define OR_DI_TO_PTR_EDX or word ptr [edx], di
#define OR_DI_TO_PTR_EDI or word ptr [edi], di
#define OR_DI_TO_PTR_ESI or word ptr [esi], di
#define OR_DI_TO_PTR_EBP or word ptr [ebp], di
#define OR_DI_TO_PTR_ESP or word ptr [esp], di
#define OR_DI_TO_PTR_BX or word ptr [bx], di
#define OR_DI_TO_PTR_BP or word ptr [bp], di
#define OR_DI_TO_PTR_SI or word ptr [si], di
#define OR_DI_TO_PTR_DI or word ptr [di], di

#define OR_SI_TO_PTR_EAX or word ptr [eax], si
#define OR_SI_TO_PTR_EBX or word ptr [ebx], si
#define OR_SI_TO_PTR_ECX or word ptr [ecx], si
#define OR_SI_TO_PTR_EDX or word ptr [edx], si
#define OR_SI_TO_PTR_EDI or word ptr [edi], si
#define OR_SI_TO_PTR_ESI or word ptr [esi], si
#define OR_SI_TO_PTR_EBP or word ptr [ebp], si
#define OR_SI_TO_PTR_ESP or word ptr [esp], si
#define OR_SI_TO_PTR_BX or word ptr [bx], si
#define OR_SI_TO_PTR_BP or word ptr [bp], si
#define OR_SI_TO_PTR_SI or word ptr [si], si
#define OR_SI_TO_PTR_DI or word ptr [di], si

#define OR_BP_TO_PTR_EAX or word ptr [eax], bp
#define OR_BP_TO_PTR_EBX or word ptr [ebx], bp
#define OR_BP_TO_PTR_ECX or word ptr [ecx], bp
#define OR_BP_TO_PTR_EDX or word ptr [edx], bp
#define OR_BP_TO_PTR_EDI or word ptr [edi], bp
#define OR_BP_TO_PTR_ESI or word ptr [esi], bp
#define OR_BP_TO_PTR_EBP or word ptr [ebp], bp
#define OR_BP_TO_PTR_ESP or word ptr [esp], bp
#define OR_BP_TO_PTR_BX or word ptr [bx], bp
#define OR_BP_TO_PTR_BP or word ptr [bp], bp
#define OR_BP_TO_PTR_SI or word ptr [si], bp
#define OR_BP_TO_PTR_DI or word ptr [di], bp

#define OR_SP_TO_PTR_EAX or word ptr [eax], sp
#define OR_SP_TO_PTR_EBX or word ptr [ebx], sp
#define OR_SP_TO_PTR_ECX or word ptr [ecx], sp
#define OR_SP_TO_PTR_EDX or word ptr [edx], sp
#define OR_SP_TO_PTR_EDI or word ptr [edi], sp
#define OR_SP_TO_PTR_ESI or word ptr [esi], sp
#define OR_SP_TO_PTR_EBP or word ptr [ebp], sp
#define OR_SP_TO_PTR_ESP or word ptr [esp], sp
#define OR_SP_TO_PTR_BX or word ptr [bx], sp
#define OR_SP_TO_PTR_BP or word ptr [bp], sp
#define OR_SP_TO_PTR_SI or word ptr [si], sp
#define OR_SP_TO_PTR_DI or word ptr [di], sp

#define OR_AX_FROM_PTR_EAX_(VALUE) or ax, word ptr [eax + VALUE]
#define OR_AX_FROM_PTR_EBX_(VALUE) or ax, word ptr [ebx + VALUE]
#define OR_AX_FROM_PTR_ECX_(VALUE) or ax, word ptr [ecx + VALUE]
#define OR_AX_FROM_PTR_EDX_(VALUE) or ax, word ptr [edx + VALUE]
#define OR_AX_FROM_PTR_EDI_(VALUE) or ax, word ptr [edi + VALUE]
#define OR_AX_FROM_PTR_ESI_(VALUE) or ax, word ptr [esi + VALUE]
#define OR_AX_FROM_PTR_EBP_(VALUE) or ax, word ptr [ebp + VALUE]
#define OR_AX_FROM_PTR_ESP_(VALUE) or ax, word ptr [esp + VALUE]
#define OR_AX_FROM_PTR_BX_(VALUE) or ax, word ptr [bx + VALUE]
#define OR_AX_FROM_PTR_BP_(VALUE) or ax, word ptr [bp + VALUE]
#define OR_AX_FROM_PTR_SI_(VALUE) or ax, word ptr [si + VALUE]
#define OR_AX_FROM_PTR_DI_(VALUE) or ax, word ptr [di + VALUE]

#define OR_BX_FROM_PTR_EAX_(VALUE) or bx, word ptr [eax + VALUE]
#define OR_BX_FROM_PTR_EBX_(VALUE) or bx, word ptr [ebx + VALUE]
#define OR_BX_FROM_PTR_ECX_(VALUE) or bx, word ptr [ecx + VALUE]
#define OR_BX_FROM_PTR_EDX_(VALUE) or bx, word ptr [edx + VALUE]
#define OR_BX_FROM_PTR_EDI_(VALUE) or bx, word ptr [edi + VALUE]
#define OR_BX_FROM_PTR_ESI_(VALUE) or bx, word ptr [esi + VALUE]
#define OR_BX_FROM_PTR_EBP_(VALUE) or bx, word ptr [ebp + VALUE]
#define OR_BX_FROM_PTR_ESP_(VALUE) or bx, word ptr [esp + VALUE]
#define OR_BX_FROM_PTR_BX_(VALUE) or bx, word ptr [bx + VALUE]
#define OR_BX_FROM_PTR_BP_(VALUE) or bx, word ptr [bp + VALUE]
#define OR_BX_FROM_PTR_SI_(VALUE) or bx, word ptr [si + VALUE]
#define OR_BX_FROM_PTR_DI_(VALUE) or bx, word ptr [di + VALUE]

#define OR_CX_FROM_PTR_EAX_(VALUE) or cx, word ptr [eax + VALUE]
#define OR_CX_FROM_PTR_EBX_(VALUE) or cx, word ptr [ebx + VALUE]
#define OR_CX_FROM_PTR_ECX_(VALUE) or cx, word ptr [ecx + VALUE]
#define OR_CX_FROM_PTR_EDX_(VALUE) or cx, word ptr [edx + VALUE]
#define OR_CX_FROM_PTR_EDI_(VALUE) or cx, word ptr [edi + VALUE]
#define OR_CX_FROM_PTR_ESI_(VALUE) or cx, word ptr [esi + VALUE]
#define OR_CX_FROM_PTR_EBP_(VALUE) or cx, word ptr [ebp + VALUE]
#define OR_CX_FROM_PTR_ESP_(VALUE) or cx, word ptr [esp + VALUE]
#define OR_CX_FROM_PTR_BX_(VALUE) or cx, word ptr [bx + VALUE]
#define OR_CX_FROM_PTR_BP_(VALUE) or cx, word ptr [bp + VALUE]
#define OR_CX_FROM_PTR_SI_(VALUE) or cx, word ptr [si + VALUE]
#define OR_CX_FROM_PTR_DI_(VALUE) or cx, word ptr [di + VALUE]

#define OR_DX_FROM_PTR_EAX_(VALUE) or dx, word ptr [eax + VALUE]
#define OR_DX_FROM_PTR_EBX_(VALUE) or dx, word ptr [ebx + VALUE]
#define OR_DX_FROM_PTR_ECX_(VALUE) or dx, word ptr [ecx + VALUE]
#define OR_DX_FROM_PTR_EDX_(VALUE) or dx, word ptr [edx + VALUE]
#define OR_DX_FROM_PTR_EDI_(VALUE) or dx, word ptr [edi + VALUE]
#define OR_DX_FROM_PTR_ESI_(VALUE) or dx, word ptr [esi + VALUE]
#define OR_DX_FROM_PTR_EBP_(VALUE) or dx, word ptr [ebp + VALUE]
#define OR_DX_FROM_PTR_ESP_(VALUE) or dx, word ptr [esp + VALUE]
#define OR_DX_FROM_PTR_BX_(VALUE) or dx, word ptr [bx + VALUE]
#define OR_DX_FROM_PTR_BP_(VALUE) or dx, word ptr [bp + VALUE]
#define OR_DX_FROM_PTR_SI_(VALUE) or dx, word ptr [si + VALUE]
#define OR_DX_FROM_PTR_DI_(VALUE) or dx, word ptr [di + VALUE]

#define OR_DI_FROM_PTR_EAX_(VALUE) or di, word ptr [eax + VALUE]
#define OR_DI_FROM_PTR_EBX_(VALUE) or di, word ptr [ebx + VALUE]
#define OR_DI_FROM_PTR_ECX_(VALUE) or di, word ptr [ecx + VALUE]
#define OR_DI_FROM_PTR_EDX_(VALUE) or di, word ptr [edx + VALUE]
#define OR_DI_FROM_PTR_EDI_(VALUE) or di, word ptr [edi + VALUE]
#define OR_DI_FROM_PTR_ESI_(VALUE) or di, word ptr [esi + VALUE]
#define OR_DI_FROM_PTR_EBP_(VALUE) or di, word ptr [ebp + VALUE]
#define OR_DI_FROM_PTR_ESP_(VALUE) or di, word ptr [esp + VALUE]
#define OR_DI_FROM_PTR_BX_(VALUE) or di, word ptr [bx + VALUE]
#define OR_DI_FROM_PTR_BP_(VALUE) or di, word ptr [bp + VALUE]
#define OR_DI_FROM_PTR_SI_(VALUE) or di, word ptr [si + VALUE]
#define OR_DI_FROM_PTR_DI_(VALUE) or di, word ptr [di + VALUE]

#define OR_SI_FROM_PTR_EAX_(VALUE) or si, word ptr [eax + VALUE]
#define OR_SI_FROM_PTR_EBX_(VALUE) or si, word ptr [ebx + VALUE]
#define OR_SI_FROM_PTR_ECX_(VALUE) or si, word ptr [ecx + VALUE]
#define OR_SI_FROM_PTR_EDX_(VALUE) or si, word ptr [edx + VALUE]
#define OR_SI_FROM_PTR_EDI_(VALUE) or si, word ptr [edi + VALUE]
#define OR_SI_FROM_PTR_ESI_(VALUE) or si, word ptr [esi + VALUE]
#define OR_SI_FROM_PTR_EBP_(VALUE) or si, word ptr [ebp + VALUE]
#define OR_SI_FROM_PTR_ESP_(VALUE) or si, word ptr [esp + VALUE]
#define OR_SI_FROM_PTR_BX_(VALUE) or si, word ptr [bx + VALUE]
#define OR_SI_FROM_PTR_BP_(VALUE) or si, word ptr [bp + VALUE]
#define OR_SI_FROM_PTR_SI_(VALUE) or si, word ptr [si + VALUE]
#define OR_SI_FROM_PTR_DI_(VALUE) or si, word ptr [di + VALUE]

#define OR_BP_FROM_PTR_EAX_(VALUE) or bp, word ptr [eax + VALUE]
#define OR_BP_FROM_PTR_EBX_(VALUE) or bp, word ptr [ebx + VALUE]
#define OR_BP_FROM_PTR_ECX_(VALUE) or bp, word ptr [ecx + VALUE]
#define OR_BP_FROM_PTR_EDX_(VALUE) or bp, word ptr [edx + VALUE]
#define OR_BP_FROM_PTR_EDI_(VALUE) or bp, word ptr [edi + VALUE]
#define OR_BP_FROM_PTR_ESI_(VALUE) or bp, word ptr [esi + VALUE]
#define OR_BP_FROM_PTR_EBP_(VALUE) or bp, word ptr [ebp + VALUE]
#define OR_BP_FROM_PTR_ESP_(VALUE) or bp, word ptr [esp + VALUE]
#define OR_BP_FROM_PTR_BX_(VALUE) or bp, word ptr [bx + VALUE]
#define OR_BP_FROM_PTR_BP_(VALUE) or bp, word ptr [bp + VALUE]
#define OR_BP_FROM_PTR_SI_(VALUE) or bp, word ptr [si + VALUE]
#define OR_BP_FROM_PTR_DI_(VALUE) or bp, word ptr [di + VALUE]

#define OR_SP_FROM_PTR_EAX_(VALUE) or sp, word ptr [eax + VALUE]
#define OR_SP_FROM_PTR_EBX_(VALUE) or sp, word ptr [ebx + VALUE]
#define OR_SP_FROM_PTR_ECX_(VALUE) or sp, word ptr [ecx + VALUE]
#define OR_SP_FROM_PTR_EDX_(VALUE) or sp, word ptr [edx + VALUE]
#define OR_SP_FROM_PTR_EDI_(VALUE) or sp, word ptr [edi + VALUE]
#define OR_SP_FROM_PTR_ESI_(VALUE) or sp, word ptr [esi + VALUE]
#define OR_SP_FROM_PTR_EBP_(VALUE) or sp, word ptr [ebp + VALUE]
#define OR_SP_FROM_PTR_ESP_(VALUE) or sp, word ptr [esp + VALUE]
#define OR_SP_FROM_PTR_BX_(VALUE) or sp, word ptr [bx + VALUE]
#define OR_SP_FROM_PTR_BP_(VALUE) or sp, word ptr [bp + VALUE]
#define OR_SP_FROM_PTR_SI_(VALUE) or sp, word ptr [si + VALUE]
#define OR_SP_FROM_PTR_DI_(VALUE) or sp, word ptr [di + VALUE]

#define OR_AX_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], ax
#define OR_AX_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], ax
#define OR_AX_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], ax
#define OR_AX_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], ax
#define OR_AX_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], ax
#define OR_AX_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], ax
#define OR_AX_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], ax
#define OR_AX_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], ax
#define OR_AX_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], ax
#define OR_AX_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], ax
#define OR_AX_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], ax
#define OR_AX_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], ax

#define OR_BX_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], bx
#define OR_BX_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], bx
#define OR_BX_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], bx
#define OR_BX_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], bx
#define OR_BX_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], bx
#define OR_BX_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], bx
#define OR_BX_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], bx
#define OR_BX_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], bx
#define OR_BX_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], bx
#define OR_BX_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], bx
#define OR_BX_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], bx
#define OR_BX_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], bx

#define OR_CX_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], cx
#define OR_CX_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], cx
#define OR_CX_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], cx
#define OR_CX_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], cx
#define OR_CX_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], cx
#define OR_CX_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], cx
#define OR_CX_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], cx
#define OR_CX_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], cx
#define OR_CX_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], cx
#define OR_CX_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], cx
#define OR_CX_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], cx
#define OR_CX_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], cx

#define OR_DX_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], dx
#define OR_DX_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], dx
#define OR_DX_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], dx
#define OR_DX_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], dx
#define OR_DX_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], dx
#define OR_DX_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], dx
#define OR_DX_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], dx
#define OR_DX_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], dx
#define OR_DX_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], dx
#define OR_DX_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], dx
#define OR_DX_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], dx
#define OR_DX_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], dx

#define OR_DI_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], di
#define OR_DI_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], di
#define OR_DI_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], di
#define OR_DI_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], di
#define OR_DI_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], di
#define OR_DI_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], di
#define OR_DI_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], di
#define OR_DI_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], di
#define OR_DI_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], di
#define OR_DI_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], di
#define OR_DI_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], di
#define OR_DI_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], di

#define OR_SI_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], si
#define OR_SI_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], si
#define OR_SI_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], si
#define OR_SI_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], si
#define OR_SI_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], si
#define OR_SI_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], si
#define OR_SI_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], si
#define OR_SI_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], si
#define OR_SI_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], si
#define OR_SI_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], si
#define OR_SI_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], si
#define OR_SI_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], si

#define OR_BP_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], bp
#define OR_BP_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], bp
#define OR_BP_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], bp
#define OR_BP_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], bp
#define OR_BP_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], bp
#define OR_BP_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], bp
#define OR_BP_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], bp
#define OR_BP_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], bp
#define OR_BP_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], bp
#define OR_BP_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], bp
#define OR_BP_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], bp
#define OR_BP_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], bp

#define OR_SP_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], sp
#define OR_SP_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], sp
#define OR_SP_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], sp
#define OR_SP_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], sp
#define OR_SP_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], sp
#define OR_SP_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], sp
#define OR_SP_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], sp
#define OR_SP_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], sp
#define OR_SP_TO_PTR_BX_(VALUE) or word ptr [bx + VALUE], sp
#define OR_SP_TO_PTR_BP_(VALUE) or word ptr [bp + VALUE], sp
#define OR_SP_TO_PTR_SI_(VALUE) or word ptr [si + VALUE], sp
#define OR_SP_TO_PTR_DI_(VALUE) or word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_AX_FROM_PTR_(VALUE) or ax, word ptr [VALUE]
#define OR_BX_FROM_PTR_(VALUE) or bx, word ptr [VALUE]
#define OR_CX_FROM_PTR_(VALUE) or cx, word ptr [VALUE]
#define OR_DX_FROM_PTR_(VALUE) or dx, word ptr [VALUE]
#define OR_DI_FROM_PTR_(VALUE) or di, word ptr [VALUE]
#define OR_SI_FROM_PTR_(VALUE) or si, word ptr [VALUE]
#define OR_BP_FROM_PTR_(VALUE) or bp, word ptr [VALUE]
#define OR_SP_FROM_PTR_(VALUE) or sp, word ptr [VALUE]
#define OR_R8W_FROM_PTR_(VALUE) or r8w, word ptr [VALUE]
#define OR_R9W_FROM_PTR_(VALUE) or r9w, word ptr [VALUE]
#define OR_R10W_FROM_PTR_(VALUE) or r10w, word ptr [VALUE]
#define OR_R11W_FROM_PTR_(VALUE) or r11w, word ptr [VALUE]
#define OR_R12W_FROM_PTR_(VALUE) or r12w, word ptr [VALUE]
#define OR_R13W_FROM_PTR_(VALUE) or r13w, word ptr [VALUE]
#define OR_R14W_FROM_PTR_(VALUE) or r14w, word ptr [VALUE]
#define OR_R15W_FROM_PTR_(VALUE) or r15w, word ptr [VALUE]

#define OR_AX_TO_PTR_(VALUE) or word ptr [VALUE], ax
#define OR_BX_TO_PTR_(VALUE) or word ptr [VALUE], bx
#define OR_CX_TO_PTR_(VALUE) or word ptr [VALUE], cx
#define OR_DX_TO_PTR_(VALUE) or word ptr [VALUE], dx
#define OR_DI_TO_PTR_(VALUE) or word ptr [VALUE], di
#define OR_SI_TO_PTR_(VALUE) or word ptr [VALUE], si
#define OR_BP_TO_PTR_(VALUE) or word ptr [VALUE], bp
#define OR_SP_TO_PTR_(VALUE) or word ptr [VALUE], sp
#define OR_R8W_TO_PTR_(VALUE) or word ptr [VALUE], r8w
#define OR_R9W_TO_PTR_(VALUE) or word ptr [VALUE], r9w
#define OR_R10W_TO_PTR_(VALUE) or word ptr [VALUE], r10w
#define OR_R11W_TO_PTR_(VALUE) or word ptr [VALUE], r11w
#define OR_R12W_TO_PTR_(VALUE) or word ptr [VALUE], r12w
#define OR_R13W_TO_PTR_(VALUE) or word ptr [VALUE], r13w
#define OR_R14W_TO_PTR_(VALUE) or word ptr [VALUE], r14w
#define OR_R15W_TO_PTR_(VALUE) or word ptr [VALUE], r15w

#define OR_AX_FROM_PTR_RAX or ax, word ptr [rax]
#define OR_AX_FROM_PTR_RBX or ax, word ptr [rbx]
#define OR_AX_FROM_PTR_RCX or ax, word ptr [rcx]
#define OR_AX_FROM_PTR_RDX or ax, word ptr [rdx]
#define OR_AX_FROM_PTR_RDI or ax, word ptr [rdi]
#define OR_AX_FROM_PTR_RSI or ax, word ptr [rsi]
#define OR_AX_FROM_PTR_RBP or ax, word ptr [rbp]
#define OR_AX_FROM_PTR_RSP or ax, word ptr [rsp]
#define OR_AX_FROM_PTR_R8 or ax, word ptr [r8]
#define OR_AX_FROM_PTR_R9 or ax, word ptr [r9]
#define OR_AX_FROM_PTR_R10 or ax, word ptr [r10]
#define OR_AX_FROM_PTR_R11 or ax, word ptr [r11]
#define OR_AX_FROM_PTR_R12 or ax, word ptr [r12]
#define OR_AX_FROM_PTR_R13 or ax, word ptr [r13]
#define OR_AX_FROM_PTR_R14 or ax, word ptr [r14]
#define OR_AX_FROM_PTR_R15 or ax, word ptr [r15]
#define OR_AX_FROM_PTR_EAX or ax, word ptr [eax]
#define OR_AX_FROM_PTR_EBX or ax, word ptr [ebx]
#define OR_AX_FROM_PTR_ECX or ax, word ptr [ecx]
#define OR_AX_FROM_PTR_EDX or ax, word ptr [edx]
#define OR_AX_FROM_PTR_EDI or ax, word ptr [edi]
#define OR_AX_FROM_PTR_ESI or ax, word ptr [esi]
#define OR_AX_FROM_PTR_EBP or ax, word ptr [ebp]
#define OR_AX_FROM_PTR_ESP or ax, word ptr [esp]

#define OR_BX_FROM_PTR_RAX or bx, word ptr [rax]
#define OR_BX_FROM_PTR_RBX or bx, word ptr [rbx]
#define OR_BX_FROM_PTR_RCX or bx, word ptr [rcx]
#define OR_BX_FROM_PTR_RDX or bx, word ptr [rdx]
#define OR_BX_FROM_PTR_RDI or bx, word ptr [rdi]
#define OR_BX_FROM_PTR_RSI or bx, word ptr [rsi]
#define OR_BX_FROM_PTR_RBP or bx, word ptr [rbp]
#define OR_BX_FROM_PTR_RSP or bx, word ptr [rsp]
#define OR_BX_FROM_PTR_R8 or bx, word ptr [r8]
#define OR_BX_FROM_PTR_R9 or bx, word ptr [r9]
#define OR_BX_FROM_PTR_R10 or bx, word ptr [r10]
#define OR_BX_FROM_PTR_R11 or bx, word ptr [r11]
#define OR_BX_FROM_PTR_R12 or bx, word ptr [r12]
#define OR_BX_FROM_PTR_R13 or bx, word ptr [r13]
#define OR_BX_FROM_PTR_R14 or bx, word ptr [r14]
#define OR_BX_FROM_PTR_R15 or bx, word ptr [r15]
#define OR_BX_FROM_PTR_EAX or bx, word ptr [eax]
#define OR_BX_FROM_PTR_EBX or bx, word ptr [ebx]
#define OR_BX_FROM_PTR_ECX or bx, word ptr [ecx]
#define OR_BX_FROM_PTR_EDX or bx, word ptr [edx]
#define OR_BX_FROM_PTR_EDI or bx, word ptr [edi]
#define OR_BX_FROM_PTR_ESI or bx, word ptr [esi]
#define OR_BX_FROM_PTR_EBP or bx, word ptr [ebp]
#define OR_BX_FROM_PTR_ESP or bx, word ptr [esp]

#define OR_CX_FROM_PTR_RAX or cx, word ptr [rax]
#define OR_CX_FROM_PTR_RBX or cx, word ptr [rbx]
#define OR_CX_FROM_PTR_RCX or cx, word ptr [rcx]
#define OR_CX_FROM_PTR_RDX or cx, word ptr [rdx]
#define OR_CX_FROM_PTR_RDI or cx, word ptr [rdi]
#define OR_CX_FROM_PTR_RSI or cx, word ptr [rsi]
#define OR_CX_FROM_PTR_RBP or cx, word ptr [rbp]
#define OR_CX_FROM_PTR_RSP or cx, word ptr [rsp]
#define OR_CX_FROM_PTR_R8 or cx, word ptr [r8]
#define OR_CX_FROM_PTR_R9 or cx, word ptr [r9]
#define OR_CX_FROM_PTR_R10 or cx, word ptr [r10]
#define OR_CX_FROM_PTR_R11 or cx, word ptr [r11]
#define OR_CX_FROM_PTR_R12 or cx, word ptr [r12]
#define OR_CX_FROM_PTR_R13 or cx, word ptr [r13]
#define OR_CX_FROM_PTR_R14 or cx, word ptr [r14]
#define OR_CX_FROM_PTR_R15 or cx, word ptr [r15]
#define OR_CX_FROM_PTR_EAX or cx, word ptr [eax]
#define OR_CX_FROM_PTR_EBX or cx, word ptr [ebx]
#define OR_CX_FROM_PTR_ECX or cx, word ptr [ecx]
#define OR_CX_FROM_PTR_EDX or cx, word ptr [edx]
#define OR_CX_FROM_PTR_EDI or cx, word ptr [edi]
#define OR_CX_FROM_PTR_ESI or cx, word ptr [esi]
#define OR_CX_FROM_PTR_EBP or cx, word ptr [ebp]
#define OR_CX_FROM_PTR_ESP or cx, word ptr [esp]

#define OR_DX_FROM_PTR_RAX or dx, word ptr [rax]
#define OR_DX_FROM_PTR_RBX or dx, word ptr [rbx]
#define OR_DX_FROM_PTR_RCX or dx, word ptr [rcx]
#define OR_DX_FROM_PTR_RDX or dx, word ptr [rdx]
#define OR_DX_FROM_PTR_RDI or dx, word ptr [rdi]
#define OR_DX_FROM_PTR_RSI or dx, word ptr [rsi]
#define OR_DX_FROM_PTR_RBP or dx, word ptr [rbp]
#define OR_DX_FROM_PTR_RSP or dx, word ptr [rsp]
#define OR_DX_FROM_PTR_R8 or dx, word ptr [r8]
#define OR_DX_FROM_PTR_R9 or dx, word ptr [r9]
#define OR_DX_FROM_PTR_R10 or dx, word ptr [r10]
#define OR_DX_FROM_PTR_R11 or dx, word ptr [r11]
#define OR_DX_FROM_PTR_R12 or dx, word ptr [r12]
#define OR_DX_FROM_PTR_R13 or dx, word ptr [r13]
#define OR_DX_FROM_PTR_R14 or dx, word ptr [r14]
#define OR_DX_FROM_PTR_R15 or dx, word ptr [r15]
#define OR_DX_FROM_PTR_EAX or dx, word ptr [eax]
#define OR_DX_FROM_PTR_EBX or dx, word ptr [ebx]
#define OR_DX_FROM_PTR_ECX or dx, word ptr [ecx]
#define OR_DX_FROM_PTR_EDX or dx, word ptr [edx]
#define OR_DX_FROM_PTR_EDI or dx, word ptr [edi]
#define OR_DX_FROM_PTR_ESI or dx, word ptr [esi]
#define OR_DX_FROM_PTR_EBP or dx, word ptr [ebp]
#define OR_DX_FROM_PTR_ESP or dx, word ptr [esp]

#define OR_DI_FROM_PTR_RAX or di, word ptr [rax]
#define OR_DI_FROM_PTR_RBX or di, word ptr [rbx]
#define OR_DI_FROM_PTR_RCX or di, word ptr [rcx]
#define OR_DI_FROM_PTR_RDX or di, word ptr [rdx]
#define OR_DI_FROM_PTR_RDI or di, word ptr [rdi]
#define OR_DI_FROM_PTR_RSI or di, word ptr [rsi]
#define OR_DI_FROM_PTR_RBP or di, word ptr [rbp]
#define OR_DI_FROM_PTR_RSP or di, word ptr [rsp]
#define OR_DI_FROM_PTR_R8 or di, word ptr [r8]
#define OR_DI_FROM_PTR_R9 or di, word ptr [r9]
#define OR_DI_FROM_PTR_R10 or di, word ptr [r10]
#define OR_DI_FROM_PTR_R11 or di, word ptr [r11]
#define OR_DI_FROM_PTR_R12 or di, word ptr [r12]
#define OR_DI_FROM_PTR_R13 or di, word ptr [r13]
#define OR_DI_FROM_PTR_R14 or di, word ptr [r14]
#define OR_DI_FROM_PTR_R15 or di, word ptr [r15]
#define OR_DI_FROM_PTR_EAX or di, word ptr [eax]
#define OR_DI_FROM_PTR_EBX or di, word ptr [ebx]
#define OR_DI_FROM_PTR_ECX or di, word ptr [ecx]
#define OR_DI_FROM_PTR_EDX or di, word ptr [edx]
#define OR_DI_FROM_PTR_EDI or di, word ptr [edi]
#define OR_DI_FROM_PTR_ESI or di, word ptr [esi]
#define OR_DI_FROM_PTR_EBP or di, word ptr [ebp]
#define OR_DI_FROM_PTR_ESP or di, word ptr [esp]

#define OR_SI_FROM_PTR_RAX or si, word ptr [rax]
#define OR_SI_FROM_PTR_RBX or si, word ptr [rbx]
#define OR_SI_FROM_PTR_RCX or si, word ptr [rcx]
#define OR_SI_FROM_PTR_RDX or si, word ptr [rdx]
#define OR_SI_FROM_PTR_RDI or si, word ptr [rdi]
#define OR_SI_FROM_PTR_RSI or si, word ptr [rsi]
#define OR_SI_FROM_PTR_RBP or si, word ptr [rbp]
#define OR_SI_FROM_PTR_RSP or si, word ptr [rsp]
#define OR_SI_FROM_PTR_R8 or si, word ptr [r8]
#define OR_SI_FROM_PTR_R9 or si, word ptr [r9]
#define OR_SI_FROM_PTR_R10 or si, word ptr [r10]
#define OR_SI_FROM_PTR_R11 or si, word ptr [r11]
#define OR_SI_FROM_PTR_R12 or si, word ptr [r12]
#define OR_SI_FROM_PTR_R13 or si, word ptr [r13]
#define OR_SI_FROM_PTR_R14 or si, word ptr [r14]
#define OR_SI_FROM_PTR_R15 or si, word ptr [r15]
#define OR_SI_FROM_PTR_EAX or si, word ptr [eax]
#define OR_SI_FROM_PTR_EBX or si, word ptr [ebx]
#define OR_SI_FROM_PTR_ECX or si, word ptr [ecx]
#define OR_SI_FROM_PTR_EDX or si, word ptr [edx]
#define OR_SI_FROM_PTR_EDI or si, word ptr [edi]
#define OR_SI_FROM_PTR_ESI or si, word ptr [esi]
#define OR_SI_FROM_PTR_EBP or si, word ptr [ebp]
#define OR_SI_FROM_PTR_ESP or si, word ptr [esp]

#define OR_BP_FROM_PTR_RAX or bp, word ptr [rax]
#define OR_BP_FROM_PTR_RBX or bp, word ptr [rbx]
#define OR_BP_FROM_PTR_RCX or bp, word ptr [rcx]
#define OR_BP_FROM_PTR_RDX or bp, word ptr [rdx]
#define OR_BP_FROM_PTR_RDI or bp, word ptr [rdi]
#define OR_BP_FROM_PTR_RSI or bp, word ptr [rsi]
#define OR_BP_FROM_PTR_RBP or bp, word ptr [rbp]
#define OR_BP_FROM_PTR_RSP or bp, word ptr [rsp]
#define OR_BP_FROM_PTR_R8 or bp, word ptr [r8]
#define OR_BP_FROM_PTR_R9 or bp, word ptr [r9]
#define OR_BP_FROM_PTR_R10 or bp, word ptr [r10]
#define OR_BP_FROM_PTR_R11 or bp, word ptr [r11]
#define OR_BP_FROM_PTR_R12 or bp, word ptr [r12]
#define OR_BP_FROM_PTR_R13 or bp, word ptr [r13]
#define OR_BP_FROM_PTR_R14 or bp, word ptr [r14]
#define OR_BP_FROM_PTR_R15 or bp, word ptr [r15]
#define OR_BP_FROM_PTR_EAX or bp, word ptr [eax]
#define OR_BP_FROM_PTR_EBX or bp, word ptr [ebx]
#define OR_BP_FROM_PTR_ECX or bp, word ptr [ecx]
#define OR_BP_FROM_PTR_EDX or bp, word ptr [edx]
#define OR_BP_FROM_PTR_EDI or bp, word ptr [edi]
#define OR_BP_FROM_PTR_ESI or bp, word ptr [esi]
#define OR_BP_FROM_PTR_EBP or bp, word ptr [ebp]
#define OR_BP_FROM_PTR_ESP or bp, word ptr [esp]

#define OR_SP_FROM_PTR_RAX or sp, word ptr [rax]
#define OR_SP_FROM_PTR_RBX or sp, word ptr [rbx]
#define OR_SP_FROM_PTR_RCX or sp, word ptr [rcx]
#define OR_SP_FROM_PTR_RDX or sp, word ptr [rdx]
#define OR_SP_FROM_PTR_RDI or sp, word ptr [rdi]
#define OR_SP_FROM_PTR_RSI or sp, word ptr [rsi]
#define OR_SP_FROM_PTR_RBP or sp, word ptr [rbp]
#define OR_SP_FROM_PTR_RSP or sp, word ptr [rsp]
#define OR_SP_FROM_PTR_R8 or sp, word ptr [r8]
#define OR_SP_FROM_PTR_R9 or sp, word ptr [r9]
#define OR_SP_FROM_PTR_R10 or sp, word ptr [r10]
#define OR_SP_FROM_PTR_R11 or sp, word ptr [r11]
#define OR_SP_FROM_PTR_R12 or sp, word ptr [r12]
#define OR_SP_FROM_PTR_R13 or sp, word ptr [r13]
#define OR_SP_FROM_PTR_R14 or sp, word ptr [r14]
#define OR_SP_FROM_PTR_R15 or sp, word ptr [r15]
#define OR_SP_FROM_PTR_EAX or sp, word ptr [eax]
#define OR_SP_FROM_PTR_EBX or sp, word ptr [ebx]
#define OR_SP_FROM_PTR_ECX or sp, word ptr [ecx]
#define OR_SP_FROM_PTR_EDX or sp, word ptr [edx]
#define OR_SP_FROM_PTR_EDI or sp, word ptr [edi]
#define OR_SP_FROM_PTR_ESI or sp, word ptr [esi]
#define OR_SP_FROM_PTR_EBP or sp, word ptr [ebp]
#define OR_SP_FROM_PTR_ESP or sp, word ptr [esp]

#define OR_R8W_FROM_PTR_RAX or r8w, word ptr [rax]
#define OR_R8W_FROM_PTR_RBX or r8w, word ptr [rbx]
#define OR_R8W_FROM_PTR_RCX or r8w, word ptr [rcx]
#define OR_R8W_FROM_PTR_RDX or r8w, word ptr [rdx]
#define OR_R8W_FROM_PTR_RDI or r8w, word ptr [rdi]
#define OR_R8W_FROM_PTR_RSI or r8w, word ptr [rsi]
#define OR_R8W_FROM_PTR_RBP or r8w, word ptr [rbp]
#define OR_R8W_FROM_PTR_RSP or r8w, word ptr [rsp]
#define OR_R8W_FROM_PTR_R8 or r8w, word ptr [r8]
#define OR_R8W_FROM_PTR_R9 or r8w, word ptr [r9]
#define OR_R8W_FROM_PTR_R10 or r8w, word ptr [r10]
#define OR_R8W_FROM_PTR_R11 or r8w, word ptr [r11]
#define OR_R8W_FROM_PTR_R12 or r8w, word ptr [r12]
#define OR_R8W_FROM_PTR_R13 or r8w, word ptr [r13]
#define OR_R8W_FROM_PTR_R14 or r8w, word ptr [r14]
#define OR_R8W_FROM_PTR_R15 or r8w, word ptr [r15]
#define OR_R8W_FROM_PTR_EAX or r8w, word ptr [eax]
#define OR_R8W_FROM_PTR_EBX or r8w, word ptr [ebx]
#define OR_R8W_FROM_PTR_ECX or r8w, word ptr [ecx]
#define OR_R8W_FROM_PTR_EDX or r8w, word ptr [edx]
#define OR_R8W_FROM_PTR_EDI or r8w, word ptr [edi]
#define OR_R8W_FROM_PTR_ESI or r8w, word ptr [esi]
#define OR_R8W_FROM_PTR_EBP or r8w, word ptr [ebp]
#define OR_R8W_FROM_PTR_ESP or r8w, word ptr [esp]

#define OR_R9W_FROM_PTR_RAX or r9w, word ptr [rax]
#define OR_R9W_FROM_PTR_RBX or r9w, word ptr [rbx]
#define OR_R9W_FROM_PTR_RCX or r9w, word ptr [rcx]
#define OR_R9W_FROM_PTR_RDX or r9w, word ptr [rdx]
#define OR_R9W_FROM_PTR_RDI or r9w, word ptr [rdi]
#define OR_R9W_FROM_PTR_RSI or r9w, word ptr [rsi]
#define OR_R9W_FROM_PTR_RBP or r9w, word ptr [rbp]
#define OR_R9W_FROM_PTR_RSP or r9w, word ptr [rsp]
#define OR_R9W_FROM_PTR_R8 or r9w, word ptr [r8]
#define OR_R9W_FROM_PTR_R9 or r9w, word ptr [r9]
#define OR_R9W_FROM_PTR_R10 or r9w, word ptr [r10]
#define OR_R9W_FROM_PTR_R11 or r9w, word ptr [r11]
#define OR_R9W_FROM_PTR_R12 or r9w, word ptr [r12]
#define OR_R9W_FROM_PTR_R13 or r9w, word ptr [r13]
#define OR_R9W_FROM_PTR_R14 or r9w, word ptr [r14]
#define OR_R9W_FROM_PTR_R15 or r9w, word ptr [r15]
#define OR_R9W_FROM_PTR_EAX or r9w, word ptr [eax]
#define OR_R9W_FROM_PTR_EBX or r9w, word ptr [ebx]
#define OR_R9W_FROM_PTR_ECX or r9w, word ptr [ecx]
#define OR_R9W_FROM_PTR_EDX or r9w, word ptr [edx]
#define OR_R9W_FROM_PTR_EDI or r9w, word ptr [edi]
#define OR_R9W_FROM_PTR_ESI or r9w, word ptr [esi]
#define OR_R9W_FROM_PTR_EBP or r9w, word ptr [ebp]
#define OR_R9W_FROM_PTR_ESP or r9w, word ptr [esp]

#define OR_R10W_FROM_PTR_RAX or r10w, word ptr [rax]
#define OR_R10W_FROM_PTR_RBX or r10w, word ptr [rbx]
#define OR_R10W_FROM_PTR_RCX or r10w, word ptr [rcx]
#define OR_R10W_FROM_PTR_RDX or r10w, word ptr [rdx]
#define OR_R10W_FROM_PTR_RDI or r10w, word ptr [rdi]
#define OR_R10W_FROM_PTR_RSI or r10w, word ptr [rsi]
#define OR_R10W_FROM_PTR_RBP or r10w, word ptr [rbp]
#define OR_R10W_FROM_PTR_RSP or r10w, word ptr [rsp]
#define OR_R10W_FROM_PTR_R8 or r10w, word ptr [r8]
#define OR_R10W_FROM_PTR_R9 or r10w, word ptr [r9]
#define OR_R10W_FROM_PTR_R10 or r10w, word ptr [r10]
#define OR_R10W_FROM_PTR_R11 or r10w, word ptr [r11]
#define OR_R10W_FROM_PTR_R12 or r10w, word ptr [r12]
#define OR_R10W_FROM_PTR_R13 or r10w, word ptr [r13]
#define OR_R10W_FROM_PTR_R14 or r10w, word ptr [r14]
#define OR_R10W_FROM_PTR_R15 or r10w, word ptr [r15]
#define OR_R10W_FROM_PTR_EAX or r10w, word ptr [eax]
#define OR_R10W_FROM_PTR_EBX or r10w, word ptr [ebx]
#define OR_R10W_FROM_PTR_ECX or r10w, word ptr [ecx]
#define OR_R10W_FROM_PTR_EDX or r10w, word ptr [edx]
#define OR_R10W_FROM_PTR_EDI or r10w, word ptr [edi]
#define OR_R10W_FROM_PTR_ESI or r10w, word ptr [esi]
#define OR_R10W_FROM_PTR_EBP or r10w, word ptr [ebp]
#define OR_R10W_FROM_PTR_ESP or r10w, word ptr [esp]

#define OR_R11W_FROM_PTR_RAX or r11w, word ptr [rax]
#define OR_R11W_FROM_PTR_RBX or r11w, word ptr [rbx]
#define OR_R11W_FROM_PTR_RCX or r11w, word ptr [rcx]
#define OR_R11W_FROM_PTR_RDX or r11w, word ptr [rdx]
#define OR_R11W_FROM_PTR_RDI or r11w, word ptr [rdi]
#define OR_R11W_FROM_PTR_RSI or r11w, word ptr [rsi]
#define OR_R11W_FROM_PTR_RBP or r11w, word ptr [rbp]
#define OR_R11W_FROM_PTR_RSP or r11w, word ptr [rsp]
#define OR_R11W_FROM_PTR_R8 or r11w, word ptr [r8]
#define OR_R11W_FROM_PTR_R9 or r11w, word ptr [r9]
#define OR_R11W_FROM_PTR_R10 or r11w, word ptr [r10]
#define OR_R11W_FROM_PTR_R11 or r11w, word ptr [r11]
#define OR_R11W_FROM_PTR_R12 or r11w, word ptr [r12]
#define OR_R11W_FROM_PTR_R13 or r11w, word ptr [r13]
#define OR_R11W_FROM_PTR_R14 or r11w, word ptr [r14]
#define OR_R11W_FROM_PTR_R15 or r11w, word ptr [r15]
#define OR_R11W_FROM_PTR_EAX or r11w, word ptr [eax]
#define OR_R11W_FROM_PTR_EBX or r11w, word ptr [ebx]
#define OR_R11W_FROM_PTR_ECX or r11w, word ptr [ecx]
#define OR_R11W_FROM_PTR_EDX or r11w, word ptr [edx]
#define OR_R11W_FROM_PTR_EDI or r11w, word ptr [edi]
#define OR_R11W_FROM_PTR_ESI or r11w, word ptr [esi]
#define OR_R11W_FROM_PTR_EBP or r11w, word ptr [ebp]
#define OR_R11W_FROM_PTR_ESP or r11w, word ptr [esp]

#define OR_R12W_FROM_PTR_RAX or r12w, word ptr [rax]
#define OR_R12W_FROM_PTR_RBX or r12w, word ptr [rbx]
#define OR_R12W_FROM_PTR_RCX or r12w, word ptr [rcx]
#define OR_R12W_FROM_PTR_RDX or r12w, word ptr [rdx]
#define OR_R12W_FROM_PTR_RDI or r12w, word ptr [rdi]
#define OR_R12W_FROM_PTR_RSI or r12w, word ptr [rsi]
#define OR_R12W_FROM_PTR_RBP or r12w, word ptr [rbp]
#define OR_R12W_FROM_PTR_RSP or r12w, word ptr [rsp]
#define OR_R12W_FROM_PTR_R8 or r12w, word ptr [r8]
#define OR_R12W_FROM_PTR_R9 or r12w, word ptr [r9]
#define OR_R12W_FROM_PTR_R10 or r12w, word ptr [r10]
#define OR_R12W_FROM_PTR_R11 or r12w, word ptr [r11]
#define OR_R12W_FROM_PTR_R12 or r12w, word ptr [r12]
#define OR_R12W_FROM_PTR_R13 or r12w, word ptr [r13]
#define OR_R12W_FROM_PTR_R14 or r12w, word ptr [r14]
#define OR_R12W_FROM_PTR_R15 or r12w, word ptr [r15]
#define OR_R12W_FROM_PTR_EAX or r12w, word ptr [eax]
#define OR_R12W_FROM_PTR_EBX or r12w, word ptr [ebx]
#define OR_R12W_FROM_PTR_ECX or r12w, word ptr [ecx]
#define OR_R12W_FROM_PTR_EDX or r12w, word ptr [edx]
#define OR_R12W_FROM_PTR_EDI or r12w, word ptr [edi]
#define OR_R12W_FROM_PTR_ESI or r12w, word ptr [esi]
#define OR_R12W_FROM_PTR_EBP or r12w, word ptr [ebp]
#define OR_R12W_FROM_PTR_ESP or r12w, word ptr [esp]

#define OR_R13W_FROM_PTR_RAX or r13w, word ptr [rax]
#define OR_R13W_FROM_PTR_RBX or r13w, word ptr [rbx]
#define OR_R13W_FROM_PTR_RCX or r13w, word ptr [rcx]
#define OR_R13W_FROM_PTR_RDX or r13w, word ptr [rdx]
#define OR_R13W_FROM_PTR_RDI or r13w, word ptr [rdi]
#define OR_R13W_FROM_PTR_RSI or r13w, word ptr [rsi]
#define OR_R13W_FROM_PTR_RBP or r13w, word ptr [rbp]
#define OR_R13W_FROM_PTR_RSP or r13w, word ptr [rsp]
#define OR_R13W_FROM_PTR_R8 or r13w, word ptr [r8]
#define OR_R13W_FROM_PTR_R9 or r13w, word ptr [r9]
#define OR_R13W_FROM_PTR_R10 or r13w, word ptr [r10]
#define OR_R13W_FROM_PTR_R11 or r13w, word ptr [r11]
#define OR_R13W_FROM_PTR_R12 or r13w, word ptr [r12]
#define OR_R13W_FROM_PTR_R13 or r13w, word ptr [r13]
#define OR_R13W_FROM_PTR_R14 or r13w, word ptr [r14]
#define OR_R13W_FROM_PTR_R15 or r13w, word ptr [r15]
#define OR_R13W_FROM_PTR_EAX or r13w, word ptr [eax]
#define OR_R13W_FROM_PTR_EBX or r13w, word ptr [ebx]
#define OR_R13W_FROM_PTR_ECX or r13w, word ptr [ecx]
#define OR_R13W_FROM_PTR_EDX or r13w, word ptr [edx]
#define OR_R13W_FROM_PTR_EDI or r13w, word ptr [edi]
#define OR_R13W_FROM_PTR_ESI or r13w, word ptr [esi]
#define OR_R13W_FROM_PTR_EBP or r13w, word ptr [ebp]
#define OR_R13W_FROM_PTR_ESP or r13w, word ptr [esp]

#define OR_R14W_FROM_PTR_RAX or r14w, word ptr [rax]
#define OR_R14W_FROM_PTR_RBX or r14w, word ptr [rbx]
#define OR_R14W_FROM_PTR_RCX or r14w, word ptr [rcx]
#define OR_R14W_FROM_PTR_RDX or r14w, word ptr [rdx]
#define OR_R14W_FROM_PTR_RDI or r14w, word ptr [rdi]
#define OR_R14W_FROM_PTR_RSI or r14w, word ptr [rsi]
#define OR_R14W_FROM_PTR_RBP or r14w, word ptr [rbp]
#define OR_R14W_FROM_PTR_RSP or r14w, word ptr [rsp]
#define OR_R14W_FROM_PTR_R8 or r14w, word ptr [r8]
#define OR_R14W_FROM_PTR_R9 or r14w, word ptr [r9]
#define OR_R14W_FROM_PTR_R10 or r14w, word ptr [r10]
#define OR_R14W_FROM_PTR_R11 or r14w, word ptr [r11]
#define OR_R14W_FROM_PTR_R12 or r14w, word ptr [r12]
#define OR_R14W_FROM_PTR_R13 or r14w, word ptr [r13]
#define OR_R14W_FROM_PTR_R14 or r14w, word ptr [r14]
#define OR_R14W_FROM_PTR_R15 or r14w, word ptr [r15]
#define OR_R14W_FROM_PTR_EAX or r14w, word ptr [eax]
#define OR_R14W_FROM_PTR_EBX or r14w, word ptr [ebx]
#define OR_R14W_FROM_PTR_ECX or r14w, word ptr [ecx]
#define OR_R14W_FROM_PTR_EDX or r14w, word ptr [edx]
#define OR_R14W_FROM_PTR_EDI or r14w, word ptr [edi]
#define OR_R14W_FROM_PTR_ESI or r14w, word ptr [esi]
#define OR_R14W_FROM_PTR_EBP or r14w, word ptr [ebp]
#define OR_R14W_FROM_PTR_ESP or r14w, word ptr [esp]

#define OR_R15W_FROM_PTR_RAX or r15w, word ptr [rax]
#define OR_R15W_FROM_PTR_RBX or r15w, word ptr [rbx]
#define OR_R15W_FROM_PTR_RCX or r15w, word ptr [rcx]
#define OR_R15W_FROM_PTR_RDX or r15w, word ptr [rdx]
#define OR_R15W_FROM_PTR_RDI or r15w, word ptr [rdi]
#define OR_R15W_FROM_PTR_RSI or r15w, word ptr [rsi]
#define OR_R15W_FROM_PTR_RBP or r15w, word ptr [rbp]
#define OR_R15W_FROM_PTR_RSP or r15w, word ptr [rsp]
#define OR_R15W_FROM_PTR_R8 or r15w, word ptr [r8]
#define OR_R15W_FROM_PTR_R9 or r15w, word ptr [r9]
#define OR_R15W_FROM_PTR_R10 or r15w, word ptr [r10]
#define OR_R15W_FROM_PTR_R11 or r15w, word ptr [r11]
#define OR_R15W_FROM_PTR_R12 or r15w, word ptr [r12]
#define OR_R15W_FROM_PTR_R13 or r15w, word ptr [r13]
#define OR_R15W_FROM_PTR_R14 or r15w, word ptr [r14]
#define OR_R15W_FROM_PTR_R15 or r15w, word ptr [r15]
#define OR_R15W_FROM_PTR_EAX or r15w, word ptr [eax]
#define OR_R15W_FROM_PTR_EBX or r15w, word ptr [ebx]
#define OR_R15W_FROM_PTR_ECX or r15w, word ptr [ecx]
#define OR_R15W_FROM_PTR_EDX or r15w, word ptr [edx]
#define OR_R15W_FROM_PTR_EDI or r15w, word ptr [edi]
#define OR_R15W_FROM_PTR_ESI or r15w, word ptr [esi]
#define OR_R15W_FROM_PTR_EBP or r15w, word ptr [ebp]
#define OR_R15W_FROM_PTR_ESP or r15w, word ptr [esp]

#define OR_AX_TO_PTR_RAX or word ptr [rax], ax
#define OR_AX_TO_PTR_RBX or word ptr [rbx], ax
#define OR_AX_TO_PTR_RCX or word ptr [rcx], ax
#define OR_AX_TO_PTR_RDX or word ptr [rdx], ax
#define OR_AX_TO_PTR_RDI or word ptr [rdi], ax
#define OR_AX_TO_PTR_RSI or word ptr [rsi], ax
#define OR_AX_TO_PTR_RBP or word ptr [rbp], ax
#define OR_AX_TO_PTR_RSP or word ptr [rsp], ax
#define OR_AX_TO_PTR_R8 or word ptr [r8], ax
#define OR_AX_TO_PTR_R9 or word ptr [r9], ax
#define OR_AX_TO_PTR_R10 or word ptr [r10], ax
#define OR_AX_TO_PTR_R11 or word ptr [r11], ax
#define OR_AX_TO_PTR_R12 or word ptr [r12], ax
#define OR_AX_TO_PTR_R13 or word ptr [r13], ax
#define OR_AX_TO_PTR_R14 or word ptr [r14], ax
#define OR_AX_TO_PTR_R15 or word ptr [r15], ax
#define OR_AX_TO_PTR_EAX or word ptr [eax], ax
#define OR_AX_TO_PTR_EBX or word ptr [ebx], ax
#define OR_AX_TO_PTR_ECX or word ptr [ecx], ax
#define OR_AX_TO_PTR_EDX or word ptr [edx], ax
#define OR_AX_TO_PTR_EDI or word ptr [edi], ax
#define OR_AX_TO_PTR_ESI or word ptr [esi], ax
#define OR_AX_TO_PTR_EBP or word ptr [ebp], ax
#define OR_AX_TO_PTR_ESP or word ptr [esp], ax

#define OR_BX_TO_PTR_RAX or word ptr [rax], bx
#define OR_BX_TO_PTR_RBX or word ptr [rbx], bx
#define OR_BX_TO_PTR_RCX or word ptr [rcx], bx
#define OR_BX_TO_PTR_RDX or word ptr [rdx], bx
#define OR_BX_TO_PTR_RDI or word ptr [rdi], bx
#define OR_BX_TO_PTR_RSI or word ptr [rsi], bx
#define OR_BX_TO_PTR_RBP or word ptr [rbp], bx
#define OR_BX_TO_PTR_RSP or word ptr [rsp], bx
#define OR_BX_TO_PTR_R8 or word ptr [r8], bx
#define OR_BX_TO_PTR_R9 or word ptr [r9], bx
#define OR_BX_TO_PTR_R10 or word ptr [r10], bx
#define OR_BX_TO_PTR_R11 or word ptr [r11], bx
#define OR_BX_TO_PTR_R12 or word ptr [r12], bx
#define OR_BX_TO_PTR_R13 or word ptr [r13], bx
#define OR_BX_TO_PTR_R14 or word ptr [r14], bx
#define OR_BX_TO_PTR_R15 or word ptr [r15], bx
#define OR_BX_TO_PTR_EAX or word ptr [eax], bx
#define OR_BX_TO_PTR_EBX or word ptr [ebx], bx
#define OR_BX_TO_PTR_ECX or word ptr [ecx], bx
#define OR_BX_TO_PTR_EDX or word ptr [edx], bx
#define OR_BX_TO_PTR_EDI or word ptr [edi], bx
#define OR_BX_TO_PTR_ESI or word ptr [esi], bx
#define OR_BX_TO_PTR_EBP or word ptr [ebp], bx
#define OR_BX_TO_PTR_ESP or word ptr [esp], bx

#define OR_CX_TO_PTR_RAX or word ptr [rax], cx
#define OR_CX_TO_PTR_RBX or word ptr [rbx], cx
#define OR_CX_TO_PTR_RCX or word ptr [rcx], cx
#define OR_CX_TO_PTR_RDX or word ptr [rdx], cx
#define OR_CX_TO_PTR_RDI or word ptr [rdi], cx
#define OR_CX_TO_PTR_RSI or word ptr [rsi], cx
#define OR_CX_TO_PTR_RBP or word ptr [rbp], cx
#define OR_CX_TO_PTR_RSP or word ptr [rsp], cx
#define OR_CX_TO_PTR_R8 or word ptr [r8], cx
#define OR_CX_TO_PTR_R9 or word ptr [r9], cx
#define OR_CX_TO_PTR_R10 or word ptr [r10], cx
#define OR_CX_TO_PTR_R11 or word ptr [r11], cx
#define OR_CX_TO_PTR_R12 or word ptr [r12], cx
#define OR_CX_TO_PTR_R13 or word ptr [r13], cx
#define OR_CX_TO_PTR_R14 or word ptr [r14], cx
#define OR_CX_TO_PTR_R15 or word ptr [r15], cx
#define OR_CX_TO_PTR_EAX or word ptr [eax], cx
#define OR_CX_TO_PTR_EBX or word ptr [ebx], cx
#define OR_CX_TO_PTR_ECX or word ptr [ecx], cx
#define OR_CX_TO_PTR_EDX or word ptr [edx], cx
#define OR_CX_TO_PTR_EDI or word ptr [edi], cx
#define OR_CX_TO_PTR_ESI or word ptr [esi], cx
#define OR_CX_TO_PTR_EBP or word ptr [ebp], cx
#define OR_CX_TO_PTR_ESP or word ptr [esp], cx

#define OR_DX_TO_PTR_RAX or word ptr [rax], dx
#define OR_DX_TO_PTR_RBX or word ptr [rbx], dx
#define OR_DX_TO_PTR_RCX or word ptr [rcx], dx
#define OR_DX_TO_PTR_RDX or word ptr [rdx], dx
#define OR_DX_TO_PTR_RDI or word ptr [rdi], dx
#define OR_DX_TO_PTR_RSI or word ptr [rsi], dx
#define OR_DX_TO_PTR_RBP or word ptr [rbp], dx
#define OR_DX_TO_PTR_RSP or word ptr [rsp], dx
#define OR_DX_TO_PTR_R8 or word ptr [r8], dx
#define OR_DX_TO_PTR_R9 or word ptr [r9], dx
#define OR_DX_TO_PTR_R10 or word ptr [r10], dx
#define OR_DX_TO_PTR_R11 or word ptr [r11], dx
#define OR_DX_TO_PTR_R12 or word ptr [r12], dx
#define OR_DX_TO_PTR_R13 or word ptr [r13], dx
#define OR_DX_TO_PTR_R14 or word ptr [r14], dx
#define OR_DX_TO_PTR_R15 or word ptr [r15], dx
#define OR_DX_TO_PTR_EAX or word ptr [eax], dx
#define OR_DX_TO_PTR_EBX or word ptr [ebx], dx
#define OR_DX_TO_PTR_ECX or word ptr [ecx], dx
#define OR_DX_TO_PTR_EDX or word ptr [edx], dx
#define OR_DX_TO_PTR_EDI or word ptr [edi], dx
#define OR_DX_TO_PTR_ESI or word ptr [esi], dx
#define OR_DX_TO_PTR_EBP or word ptr [ebp], dx
#define OR_DX_TO_PTR_ESP or word ptr [esp], dx

#define OR_DI_TO_PTR_RAX or word ptr [rax], di
#define OR_DI_TO_PTR_RBX or word ptr [rbx], di
#define OR_DI_TO_PTR_RCX or word ptr [rcx], di
#define OR_DI_TO_PTR_RDX or word ptr [rdx], di
#define OR_DI_TO_PTR_RDI or word ptr [rdi], di
#define OR_DI_TO_PTR_RSI or word ptr [rsi], di
#define OR_DI_TO_PTR_RBP or word ptr [rbp], di
#define OR_DI_TO_PTR_RSP or word ptr [rsp], di
#define OR_DI_TO_PTR_R8 or word ptr [r8], di
#define OR_DI_TO_PTR_R9 or word ptr [r9], di
#define OR_DI_TO_PTR_R10 or word ptr [r10], di
#define OR_DI_TO_PTR_R11 or word ptr [r11], di
#define OR_DI_TO_PTR_R12 or word ptr [r12], di
#define OR_DI_TO_PTR_R13 or word ptr [r13], di
#define OR_DI_TO_PTR_R14 or word ptr [r14], di
#define OR_DI_TO_PTR_R15 or word ptr [r15], di
#define OR_DI_TO_PTR_EAX or word ptr [eax], di
#define OR_DI_TO_PTR_EBX or word ptr [ebx], di
#define OR_DI_TO_PTR_ECX or word ptr [ecx], di
#define OR_DI_TO_PTR_EDX or word ptr [edx], di
#define OR_DI_TO_PTR_EDI or word ptr [edi], di
#define OR_DI_TO_PTR_ESI or word ptr [esi], di
#define OR_DI_TO_PTR_EBP or word ptr [ebp], di
#define OR_DI_TO_PTR_ESP or word ptr [esp], di

#define OR_SI_TO_PTR_RAX or word ptr [rax], si
#define OR_SI_TO_PTR_RBX or word ptr [rbx], si
#define OR_SI_TO_PTR_RCX or word ptr [rcx], si
#define OR_SI_TO_PTR_RDX or word ptr [rdx], si
#define OR_SI_TO_PTR_RDI or word ptr [rdi], si
#define OR_SI_TO_PTR_RSI or word ptr [rsi], si
#define OR_SI_TO_PTR_RBP or word ptr [rbp], si
#define OR_SI_TO_PTR_RSP or word ptr [rsp], si
#define OR_SI_TO_PTR_R8 or word ptr [r8], si
#define OR_SI_TO_PTR_R9 or word ptr [r9], si
#define OR_SI_TO_PTR_R10 or word ptr [r10], si
#define OR_SI_TO_PTR_R11 or word ptr [r11], si
#define OR_SI_TO_PTR_R12 or word ptr [r12], si
#define OR_SI_TO_PTR_R13 or word ptr [r13], si
#define OR_SI_TO_PTR_R14 or word ptr [r14], si
#define OR_SI_TO_PTR_R15 or word ptr [r15], si
#define OR_SI_TO_PTR_EAX or word ptr [eax], si
#define OR_SI_TO_PTR_EBX or word ptr [ebx], si
#define OR_SI_TO_PTR_ECX or word ptr [ecx], si
#define OR_SI_TO_PTR_EDX or word ptr [edx], si
#define OR_SI_TO_PTR_EDI or word ptr [edi], si
#define OR_SI_TO_PTR_ESI or word ptr [esi], si
#define OR_SI_TO_PTR_EBP or word ptr [ebp], si
#define OR_SI_TO_PTR_ESP or word ptr [esp], si

#define OR_BP_TO_PTR_RAX or word ptr [rax], bp
#define OR_BP_TO_PTR_RBX or word ptr [rbx], bp
#define OR_BP_TO_PTR_RCX or word ptr [rcx], bp
#define OR_BP_TO_PTR_RDX or word ptr [rdx], bp
#define OR_BP_TO_PTR_RDI or word ptr [rdi], bp
#define OR_BP_TO_PTR_RSI or word ptr [rsi], bp
#define OR_BP_TO_PTR_RBP or word ptr [rbp], bp
#define OR_BP_TO_PTR_RSP or word ptr [rsp], bp
#define OR_BP_TO_PTR_R8 or word ptr [r8], bp
#define OR_BP_TO_PTR_R9 or word ptr [r9], bp
#define OR_BP_TO_PTR_R10 or word ptr [r10], bp
#define OR_BP_TO_PTR_R11 or word ptr [r11], bp
#define OR_BP_TO_PTR_R12 or word ptr [r12], bp
#define OR_BP_TO_PTR_R13 or word ptr [r13], bp
#define OR_BP_TO_PTR_R14 or word ptr [r14], bp
#define OR_BP_TO_PTR_R15 or word ptr [r15], bp
#define OR_BP_TO_PTR_EAX or word ptr [eax], bp
#define OR_BP_TO_PTR_EBX or word ptr [ebx], bp
#define OR_BP_TO_PTR_ECX or word ptr [ecx], bp
#define OR_BP_TO_PTR_EDX or word ptr [edx], bp
#define OR_BP_TO_PTR_EDI or word ptr [edi], bp
#define OR_BP_TO_PTR_ESI or word ptr [esi], bp
#define OR_BP_TO_PTR_EBP or word ptr [ebp], bp
#define OR_BP_TO_PTR_ESP or word ptr [esp], bp

#define OR_SP_TO_PTR_RAX or word ptr [rax], sp
#define OR_SP_TO_PTR_RBX or word ptr [rbx], sp
#define OR_SP_TO_PTR_RCX or word ptr [rcx], sp
#define OR_SP_TO_PTR_RDX or word ptr [rdx], sp
#define OR_SP_TO_PTR_RDI or word ptr [rdi], sp
#define OR_SP_TO_PTR_RSI or word ptr [rsi], sp
#define OR_SP_TO_PTR_RBP or word ptr [rbp], sp
#define OR_SP_TO_PTR_RSP or word ptr [rsp], sp
#define OR_SP_TO_PTR_R8 or word ptr [r8], sp
#define OR_SP_TO_PTR_R9 or word ptr [r9], sp
#define OR_SP_TO_PTR_R10 or word ptr [r10], sp
#define OR_SP_TO_PTR_R11 or word ptr [r11], sp
#define OR_SP_TO_PTR_R12 or word ptr [r12], sp
#define OR_SP_TO_PTR_R13 or word ptr [r13], sp
#define OR_SP_TO_PTR_R14 or word ptr [r14], sp
#define OR_SP_TO_PTR_R15 or word ptr [r15], sp
#define OR_SP_TO_PTR_EAX or word ptr [eax], sp
#define OR_SP_TO_PTR_EBX or word ptr [ebx], sp
#define OR_SP_TO_PTR_ECX or word ptr [ecx], sp
#define OR_SP_TO_PTR_EDX or word ptr [edx], sp
#define OR_SP_TO_PTR_EDI or word ptr [edi], sp
#define OR_SP_TO_PTR_ESI or word ptr [esi], sp
#define OR_SP_TO_PTR_EBP or word ptr [ebp], sp
#define OR_SP_TO_PTR_ESP or word ptr [esp], sp

#define OR_R8W_TO_PTR_RAX or word ptr [rax], r8w
#define OR_R8W_TO_PTR_RBX or word ptr [rbx], r8w
#define OR_R8W_TO_PTR_RCX or word ptr [rcx], r8w
#define OR_R8W_TO_PTR_RDX or word ptr [rdx], r8w
#define OR_R8W_TO_PTR_RDI or word ptr [rdi], r8w
#define OR_R8W_TO_PTR_RSI or word ptr [rsi], r8w
#define OR_R8W_TO_PTR_RBP or word ptr [rbp], r8w
#define OR_R8W_TO_PTR_RSP or word ptr [rsp], r8w
#define OR_R8W_TO_PTR_R8 or word ptr [r8], r8w
#define OR_R8W_TO_PTR_R9 or word ptr [r9], r8w
#define OR_R8W_TO_PTR_R10 or word ptr [r10], r8w
#define OR_R8W_TO_PTR_R11 or word ptr [r11], r8w
#define OR_R8W_TO_PTR_R12 or word ptr [r12], r8w
#define OR_R8W_TO_PTR_R13 or word ptr [r13], r8w
#define OR_R8W_TO_PTR_R14 or word ptr [r14], r8w
#define OR_R8W_TO_PTR_R15 or word ptr [r15], r8w
#define OR_R8W_TO_PTR_EAX or word ptr [eax], r8w
#define OR_R8W_TO_PTR_EBX or word ptr [ebx], r8w
#define OR_R8W_TO_PTR_ECX or word ptr [ecx], r8w
#define OR_R8W_TO_PTR_EDX or word ptr [edx], r8w
#define OR_R8W_TO_PTR_EDI or word ptr [edi], r8w
#define OR_R8W_TO_PTR_ESI or word ptr [esi], r8w
#define OR_R8W_TO_PTR_EBP or word ptr [ebp], r8w
#define OR_R8W_TO_PTR_ESP or word ptr [esp], r8w

#define OR_R9W_TO_PTR_RAX or word ptr [rax], r9w
#define OR_R9W_TO_PTR_RBX or word ptr [rbx], r9w
#define OR_R9W_TO_PTR_RCX or word ptr [rcx], r9w
#define OR_R9W_TO_PTR_RDX or word ptr [rdx], r9w
#define OR_R9W_TO_PTR_RDI or word ptr [rdi], r9w
#define OR_R9W_TO_PTR_RSI or word ptr [rsi], r9w
#define OR_R9W_TO_PTR_RBP or word ptr [rbp], r9w
#define OR_R9W_TO_PTR_RSP or word ptr [rsp], r9w
#define OR_R9W_TO_PTR_R8 or word ptr [r8], r9w
#define OR_R9W_TO_PTR_R9 or word ptr [r9], r9w
#define OR_R9W_TO_PTR_R10 or word ptr [r10], r9w
#define OR_R9W_TO_PTR_R11 or word ptr [r11], r9w
#define OR_R9W_TO_PTR_R12 or word ptr [r12], r9w
#define OR_R9W_TO_PTR_R13 or word ptr [r13], r9w
#define OR_R9W_TO_PTR_R14 or word ptr [r14], r9w
#define OR_R9W_TO_PTR_R15 or word ptr [r15], r9w
#define OR_R9W_TO_PTR_EAX or word ptr [eax], r9w
#define OR_R9W_TO_PTR_EBX or word ptr [ebx], r9w
#define OR_R9W_TO_PTR_ECX or word ptr [ecx], r9w
#define OR_R9W_TO_PTR_EDX or word ptr [edx], r9w
#define OR_R9W_TO_PTR_EDI or word ptr [edi], r9w
#define OR_R9W_TO_PTR_ESI or word ptr [esi], r9w
#define OR_R9W_TO_PTR_EBP or word ptr [ebp], r9w
#define OR_R9W_TO_PTR_ESP or word ptr [esp], r9w

#define OR_R10W_TO_PTR_RAX or word ptr [rax], r10w
#define OR_R10W_TO_PTR_RBX or word ptr [rbx], r10w
#define OR_R10W_TO_PTR_RCX or word ptr [rcx], r10w
#define OR_R10W_TO_PTR_RDX or word ptr [rdx], r10w
#define OR_R10W_TO_PTR_RDI or word ptr [rdi], r10w
#define OR_R10W_TO_PTR_RSI or word ptr [rsi], r10w
#define OR_R10W_TO_PTR_RBP or word ptr [rbp], r10w
#define OR_R10W_TO_PTR_RSP or word ptr [rsp], r10w
#define OR_R10W_TO_PTR_R8 or word ptr [r8], r10w
#define OR_R10W_TO_PTR_R9 or word ptr [r9], r10w
#define OR_R10W_TO_PTR_R10 or word ptr [r10], r10w
#define OR_R10W_TO_PTR_R11 or word ptr [r11], r10w
#define OR_R10W_TO_PTR_R12 or word ptr [r12], r10w
#define OR_R10W_TO_PTR_R13 or word ptr [r13], r10w
#define OR_R10W_TO_PTR_R14 or word ptr [r14], r10w
#define OR_R10W_TO_PTR_R15 or word ptr [r15], r10w
#define OR_R10W_TO_PTR_EAX or word ptr [eax], r10w
#define OR_R10W_TO_PTR_EBX or word ptr [ebx], r10w
#define OR_R10W_TO_PTR_ECX or word ptr [ecx], r10w
#define OR_R10W_TO_PTR_EDX or word ptr [edx], r10w
#define OR_R10W_TO_PTR_EDI or word ptr [edi], r10w
#define OR_R10W_TO_PTR_ESI or word ptr [esi], r10w
#define OR_R10W_TO_PTR_EBP or word ptr [ebp], r10w
#define OR_R10W_TO_PTR_ESP or word ptr [esp], r10w

#define OR_R11W_TO_PTR_RAX or word ptr [rax], r11w
#define OR_R11W_TO_PTR_RBX or word ptr [rbx], r11w
#define OR_R11W_TO_PTR_RCX or word ptr [rcx], r11w
#define OR_R11W_TO_PTR_RDX or word ptr [rdx], r11w
#define OR_R11W_TO_PTR_RDI or word ptr [rdi], r11w
#define OR_R11W_TO_PTR_RSI or word ptr [rsi], r11w
#define OR_R11W_TO_PTR_RBP or word ptr [rbp], r11w
#define OR_R11W_TO_PTR_RSP or word ptr [rsp], r11w
#define OR_R11W_TO_PTR_R8 or word ptr [r8], r11w
#define OR_R11W_TO_PTR_R9 or word ptr [r9], r11w
#define OR_R11W_TO_PTR_R10 or word ptr [r10], r11w
#define OR_R11W_TO_PTR_R11 or word ptr [r11], r11w
#define OR_R11W_TO_PTR_R12 or word ptr [r12], r11w
#define OR_R11W_TO_PTR_R13 or word ptr [r13], r11w
#define OR_R11W_TO_PTR_R14 or word ptr [r14], r11w
#define OR_R11W_TO_PTR_R15 or word ptr [r15], r11w
#define OR_R11W_TO_PTR_EAX or word ptr [eax], r11w
#define OR_R11W_TO_PTR_EBX or word ptr [ebx], r11w
#define OR_R11W_TO_PTR_ECX or word ptr [ecx], r11w
#define OR_R11W_TO_PTR_EDX or word ptr [edx], r11w
#define OR_R11W_TO_PTR_EDI or word ptr [edi], r11w
#define OR_R11W_TO_PTR_ESI or word ptr [esi], r11w
#define OR_R11W_TO_PTR_EBP or word ptr [ebp], r11w
#define OR_R11W_TO_PTR_ESP or word ptr [esp], r11w

#define OR_R12W_TO_PTR_RAX or word ptr [rax], r12w
#define OR_R12W_TO_PTR_RBX or word ptr [rbx], r12w
#define OR_R12W_TO_PTR_RCX or word ptr [rcx], r12w
#define OR_R12W_TO_PTR_RDX or word ptr [rdx], r12w
#define OR_R12W_TO_PTR_RDI or word ptr [rdi], r12w
#define OR_R12W_TO_PTR_RSI or word ptr [rsi], r12w
#define OR_R12W_TO_PTR_RBP or word ptr [rbp], r12w
#define OR_R12W_TO_PTR_RSP or word ptr [rsp], r12w
#define OR_R12W_TO_PTR_R8 or word ptr [r8], r12w
#define OR_R12W_TO_PTR_R9 or word ptr [r9], r12w
#define OR_R12W_TO_PTR_R10 or word ptr [r10], r12w
#define OR_R12W_TO_PTR_R11 or word ptr [r11], r12w
#define OR_R12W_TO_PTR_R12 or word ptr [r12], r12w
#define OR_R12W_TO_PTR_R13 or word ptr [r13], r12w
#define OR_R12W_TO_PTR_R14 or word ptr [r14], r12w
#define OR_R12W_TO_PTR_R15 or word ptr [r15], r12w
#define OR_R12W_TO_PTR_EAX or word ptr [eax], r12w
#define OR_R12W_TO_PTR_EBX or word ptr [ebx], r12w
#define OR_R12W_TO_PTR_ECX or word ptr [ecx], r12w
#define OR_R12W_TO_PTR_EDX or word ptr [edx], r12w
#define OR_R12W_TO_PTR_EDI or word ptr [edi], r12w
#define OR_R12W_TO_PTR_ESI or word ptr [esi], r12w
#define OR_R12W_TO_PTR_EBP or word ptr [ebp], r12w
#define OR_R12W_TO_PTR_ESP or word ptr [esp], r12w

#define OR_R13W_TO_PTR_RAX or word ptr [rax], r13w
#define OR_R13W_TO_PTR_RBX or word ptr [rbx], r13w
#define OR_R13W_TO_PTR_RCX or word ptr [rcx], r13w
#define OR_R13W_TO_PTR_RDX or word ptr [rdx], r13w
#define OR_R13W_TO_PTR_RDI or word ptr [rdi], r13w
#define OR_R13W_TO_PTR_RSI or word ptr [rsi], r13w
#define OR_R13W_TO_PTR_RBP or word ptr [rbp], r13w
#define OR_R13W_TO_PTR_RSP or word ptr [rsp], r13w
#define OR_R13W_TO_PTR_R8 or word ptr [r8], r13w
#define OR_R13W_TO_PTR_R9 or word ptr [r9], r13w
#define OR_R13W_TO_PTR_R10 or word ptr [r10], r13w
#define OR_R13W_TO_PTR_R11 or word ptr [r11], r13w
#define OR_R13W_TO_PTR_R12 or word ptr [r12], r13w
#define OR_R13W_TO_PTR_R13 or word ptr [r13], r13w
#define OR_R13W_TO_PTR_R14 or word ptr [r14], r13w
#define OR_R13W_TO_PTR_R15 or word ptr [r15], r13w
#define OR_R13W_TO_PTR_EAX or word ptr [eax], r13w
#define OR_R13W_TO_PTR_EBX or word ptr [ebx], r13w
#define OR_R13W_TO_PTR_ECX or word ptr [ecx], r13w
#define OR_R13W_TO_PTR_EDX or word ptr [edx], r13w
#define OR_R13W_TO_PTR_EDI or word ptr [edi], r13w
#define OR_R13W_TO_PTR_ESI or word ptr [esi], r13w
#define OR_R13W_TO_PTR_EBP or word ptr [ebp], r13w
#define OR_R13W_TO_PTR_ESP or word ptr [esp], r13w

#define OR_R14W_TO_PTR_RAX or word ptr [rax], r14w
#define OR_R14W_TO_PTR_RBX or word ptr [rbx], r14w
#define OR_R14W_TO_PTR_RCX or word ptr [rcx], r14w
#define OR_R14W_TO_PTR_RDX or word ptr [rdx], r14w
#define OR_R14W_TO_PTR_RDI or word ptr [rdi], r14w
#define OR_R14W_TO_PTR_RSI or word ptr [rsi], r14w
#define OR_R14W_TO_PTR_RBP or word ptr [rbp], r14w
#define OR_R14W_TO_PTR_RSP or word ptr [rsp], r14w
#define OR_R14W_TO_PTR_R8 or word ptr [r8], r14w
#define OR_R14W_TO_PTR_R9 or word ptr [r9], r14w
#define OR_R14W_TO_PTR_R10 or word ptr [r10], r14w
#define OR_R14W_TO_PTR_R11 or word ptr [r11], r14w
#define OR_R14W_TO_PTR_R12 or word ptr [r12], r14w
#define OR_R14W_TO_PTR_R13 or word ptr [r13], r14w
#define OR_R14W_TO_PTR_R14 or word ptr [r14], r14w
#define OR_R14W_TO_PTR_R15 or word ptr [r15], r14w
#define OR_R14W_TO_PTR_EAX or word ptr [eax], r14w
#define OR_R14W_TO_PTR_EBX or word ptr [ebx], r14w
#define OR_R14W_TO_PTR_ECX or word ptr [ecx], r14w
#define OR_R14W_TO_PTR_EDX or word ptr [edx], r14w
#define OR_R14W_TO_PTR_EDI or word ptr [edi], r14w
#define OR_R14W_TO_PTR_ESI or word ptr [esi], r14w
#define OR_R14W_TO_PTR_EBP or word ptr [ebp], r14w
#define OR_R14W_TO_PTR_ESP or word ptr [esp], r14w

#define OR_R15W_TO_PTR_RAX or word ptr [rax], r15w
#define OR_R15W_TO_PTR_RBX or word ptr [rbx], r15w
#define OR_R15W_TO_PTR_RCX or word ptr [rcx], r15w
#define OR_R15W_TO_PTR_RDX or word ptr [rdx], r15w
#define OR_R15W_TO_PTR_RDI or word ptr [rdi], r15w
#define OR_R15W_TO_PTR_RSI or word ptr [rsi], r15w
#define OR_R15W_TO_PTR_RBP or word ptr [rbp], r15w
#define OR_R15W_TO_PTR_RSP or word ptr [rsp], r15w
#define OR_R15W_TO_PTR_R8 or word ptr [r8], r15w
#define OR_R15W_TO_PTR_R9 or word ptr [r9], r15w
#define OR_R15W_TO_PTR_R10 or word ptr [r10], r15w
#define OR_R15W_TO_PTR_R11 or word ptr [r11], r15w
#define OR_R15W_TO_PTR_R12 or word ptr [r12], r15w
#define OR_R15W_TO_PTR_R13 or word ptr [r13], r15w
#define OR_R15W_TO_PTR_R14 or word ptr [r14], r15w
#define OR_R15W_TO_PTR_R15 or word ptr [r15], r15w
#define OR_R15W_TO_PTR_EAX or word ptr [eax], r15w
#define OR_R15W_TO_PTR_EBX or word ptr [ebx], r15w
#define OR_R15W_TO_PTR_ECX or word ptr [ecx], r15w
#define OR_R15W_TO_PTR_EDX or word ptr [edx], r15w
#define OR_R15W_TO_PTR_EDI or word ptr [edi], r15w
#define OR_R15W_TO_PTR_ESI or word ptr [esi], r15w
#define OR_R15W_TO_PTR_EBP or word ptr [ebp], r15w
#define OR_R15W_TO_PTR_ESP or word ptr [esp], r15w

#define OR_AX_FROM_PTR_RAX_(VALUE) or ax, word ptr [rax + VALUE]
#define OR_AX_FROM_PTR_RBX_(VALUE) or ax, word ptr [rbx + VALUE]
#define OR_AX_FROM_PTR_RCX_(VALUE) or ax, word ptr [rcx + VALUE]
#define OR_AX_FROM_PTR_RDX_(VALUE) or ax, word ptr [rdx + VALUE]
#define OR_AX_FROM_PTR_RDI_(VALUE) or ax, word ptr [rdi + VALUE]
#define OR_AX_FROM_PTR_RSI_(VALUE) or ax, word ptr [rsi + VALUE]
#define OR_AX_FROM_PTR_RBP_(VALUE) or ax, word ptr [rbp + VALUE]
#define OR_AX_FROM_PTR_RSP_(VALUE) or ax, word ptr [rsp + VALUE]
#define OR_AX_FROM_PTR_R8_(VALUE) or ax, word ptr [r8 + VALUE]
#define OR_AX_FROM_PTR_R9_(VALUE) or ax, word ptr [r9 + VALUE]
#define OR_AX_FROM_PTR_R10_(VALUE) or ax, word ptr [r10 + VALUE]
#define OR_AX_FROM_PTR_R11_(VALUE) or ax, word ptr [r11 + VALUE]
#define OR_AX_FROM_PTR_R12_(VALUE) or ax, word ptr [r12 + VALUE]
#define OR_AX_FROM_PTR_R13_(VALUE) or ax, word ptr [r13 + VALUE]
#define OR_AX_FROM_PTR_R14_(VALUE) or ax, word ptr [r14 + VALUE]
#define OR_AX_FROM_PTR_R15_(VALUE) or ax, word ptr [r15 + VALUE]
#define OR_AX_FROM_PTR_EAX_(VALUE) or ax, word ptr [eax + VALUE]
#define OR_AX_FROM_PTR_EBX_(VALUE) or ax, word ptr [ebx + VALUE]
#define OR_AX_FROM_PTR_ECX_(VALUE) or ax, word ptr [ecx + VALUE]
#define OR_AX_FROM_PTR_EDX_(VALUE) or ax, word ptr [edx + VALUE]
#define OR_AX_FROM_PTR_EDI_(VALUE) or ax, word ptr [edi + VALUE]
#define OR_AX_FROM_PTR_ESI_(VALUE) or ax, word ptr [esi + VALUE]
#define OR_AX_FROM_PTR_EBP_(VALUE) or ax, word ptr [ebp + VALUE]
#define OR_AX_FROM_PTR_ESP_(VALUE) or ax, word ptr [esp + VALUE]

#define OR_BX_FROM_PTR_RAX_(VALUE) or bx, word ptr [rax + VALUE]
#define OR_BX_FROM_PTR_RBX_(VALUE) or bx, word ptr [rbx + VALUE]
#define OR_BX_FROM_PTR_RCX_(VALUE) or bx, word ptr [rcx + VALUE]
#define OR_BX_FROM_PTR_RDX_(VALUE) or bx, word ptr [rdx + VALUE]
#define OR_BX_FROM_PTR_RDI_(VALUE) or bx, word ptr [rdi + VALUE]
#define OR_BX_FROM_PTR_RSI_(VALUE) or bx, word ptr [rsi + VALUE]
#define OR_BX_FROM_PTR_RBP_(VALUE) or bx, word ptr [rbp + VALUE]
#define OR_BX_FROM_PTR_RSP_(VALUE) or bx, word ptr [rsp + VALUE]
#define OR_BX_FROM_PTR_R8_(VALUE) or bx, word ptr [r8 + VALUE]
#define OR_BX_FROM_PTR_R9_(VALUE) or bx, word ptr [r9 + VALUE]
#define OR_BX_FROM_PTR_R10_(VALUE) or bx, word ptr [r10 + VALUE]
#define OR_BX_FROM_PTR_R11_(VALUE) or bx, word ptr [r11 + VALUE]
#define OR_BX_FROM_PTR_R12_(VALUE) or bx, word ptr [r12 + VALUE]
#define OR_BX_FROM_PTR_R13_(VALUE) or bx, word ptr [r13 + VALUE]
#define OR_BX_FROM_PTR_R14_(VALUE) or bx, word ptr [r14 + VALUE]
#define OR_BX_FROM_PTR_R15_(VALUE) or bx, word ptr [r15 + VALUE]
#define OR_BX_FROM_PTR_EAX_(VALUE) or bx, word ptr [eax + VALUE]
#define OR_BX_FROM_PTR_EBX_(VALUE) or bx, word ptr [ebx + VALUE]
#define OR_BX_FROM_PTR_ECX_(VALUE) or bx, word ptr [ecx + VALUE]
#define OR_BX_FROM_PTR_EDX_(VALUE) or bx, word ptr [edx + VALUE]
#define OR_BX_FROM_PTR_EDI_(VALUE) or bx, word ptr [edi + VALUE]
#define OR_BX_FROM_PTR_ESI_(VALUE) or bx, word ptr [esi + VALUE]
#define OR_BX_FROM_PTR_EBP_(VALUE) or bx, word ptr [ebp + VALUE]
#define OR_BX_FROM_PTR_ESP_(VALUE) or bx, word ptr [esp + VALUE]

#define OR_CX_FROM_PTR_RAX_(VALUE) or cx, word ptr [rax + VALUE]
#define OR_CX_FROM_PTR_RBX_(VALUE) or cx, word ptr [rbx + VALUE]
#define OR_CX_FROM_PTR_RCX_(VALUE) or cx, word ptr [rcx + VALUE]
#define OR_CX_FROM_PTR_RDX_(VALUE) or cx, word ptr [rdx + VALUE]
#define OR_CX_FROM_PTR_RDI_(VALUE) or cx, word ptr [rdi + VALUE]
#define OR_CX_FROM_PTR_RSI_(VALUE) or cx, word ptr [rsi + VALUE]
#define OR_CX_FROM_PTR_RBP_(VALUE) or cx, word ptr [rbp + VALUE]
#define OR_CX_FROM_PTR_RSP_(VALUE) or cx, word ptr [rsp + VALUE]
#define OR_CX_FROM_PTR_R8_(VALUE) or cx, word ptr [r8 + VALUE]
#define OR_CX_FROM_PTR_R9_(VALUE) or cx, word ptr [r9 + VALUE]
#define OR_CX_FROM_PTR_R10_(VALUE) or cx, word ptr [r10 + VALUE]
#define OR_CX_FROM_PTR_R11_(VALUE) or cx, word ptr [r11 + VALUE]
#define OR_CX_FROM_PTR_R12_(VALUE) or cx, word ptr [r12 + VALUE]
#define OR_CX_FROM_PTR_R13_(VALUE) or cx, word ptr [r13 + VALUE]
#define OR_CX_FROM_PTR_R14_(VALUE) or cx, word ptr [r14 + VALUE]
#define OR_CX_FROM_PTR_R15_(VALUE) or cx, word ptr [r15 + VALUE]
#define OR_CX_FROM_PTR_EAX_(VALUE) or cx, word ptr [eax + VALUE]
#define OR_CX_FROM_PTR_EBX_(VALUE) or cx, word ptr [ebx + VALUE]
#define OR_CX_FROM_PTR_ECX_(VALUE) or cx, word ptr [ecx + VALUE]
#define OR_CX_FROM_PTR_EDX_(VALUE) or cx, word ptr [edx + VALUE]
#define OR_CX_FROM_PTR_EDI_(VALUE) or cx, word ptr [edi + VALUE]
#define OR_CX_FROM_PTR_ESI_(VALUE) or cx, word ptr [esi + VALUE]
#define OR_CX_FROM_PTR_EBP_(VALUE) or cx, word ptr [ebp + VALUE]
#define OR_CX_FROM_PTR_ESP_(VALUE) or cx, word ptr [esp + VALUE]

#define OR_DX_FROM_PTR_RAX_(VALUE) or dx, word ptr [rax + VALUE]
#define OR_DX_FROM_PTR_RBX_(VALUE) or dx, word ptr [rbx + VALUE]
#define OR_DX_FROM_PTR_RCX_(VALUE) or dx, word ptr [rcx + VALUE]
#define OR_DX_FROM_PTR_RDX_(VALUE) or dx, word ptr [rdx + VALUE]
#define OR_DX_FROM_PTR_RDI_(VALUE) or dx, word ptr [rdi + VALUE]
#define OR_DX_FROM_PTR_RSI_(VALUE) or dx, word ptr [rsi + VALUE]
#define OR_DX_FROM_PTR_RBP_(VALUE) or dx, word ptr [rbp + VALUE]
#define OR_DX_FROM_PTR_RSP_(VALUE) or dx, word ptr [rsp + VALUE]
#define OR_DX_FROM_PTR_R8_(VALUE) or dx, word ptr [r8 + VALUE]
#define OR_DX_FROM_PTR_R9_(VALUE) or dx, word ptr [r9 + VALUE]
#define OR_DX_FROM_PTR_R10_(VALUE) or dx, word ptr [r10 + VALUE]
#define OR_DX_FROM_PTR_R11_(VALUE) or dx, word ptr [r11 + VALUE]
#define OR_DX_FROM_PTR_R12_(VALUE) or dx, word ptr [r12 + VALUE]
#define OR_DX_FROM_PTR_R13_(VALUE) or dx, word ptr [r13 + VALUE]
#define OR_DX_FROM_PTR_R14_(VALUE) or dx, word ptr [r14 + VALUE]
#define OR_DX_FROM_PTR_R15_(VALUE) or dx, word ptr [r15 + VALUE]
#define OR_DX_FROM_PTR_EAX_(VALUE) or dx, word ptr [eax + VALUE]
#define OR_DX_FROM_PTR_EBX_(VALUE) or dx, word ptr [ebx + VALUE]
#define OR_DX_FROM_PTR_ECX_(VALUE) or dx, word ptr [ecx + VALUE]
#define OR_DX_FROM_PTR_EDX_(VALUE) or dx, word ptr [edx + VALUE]
#define OR_DX_FROM_PTR_EDI_(VALUE) or dx, word ptr [edi + VALUE]
#define OR_DX_FROM_PTR_ESI_(VALUE) or dx, word ptr [esi + VALUE]
#define OR_DX_FROM_PTR_EBP_(VALUE) or dx, word ptr [ebp + VALUE]
#define OR_DX_FROM_PTR_ESP_(VALUE) or dx, word ptr [esp + VALUE]

#define OR_DI_FROM_PTR_RAX_(VALUE) or di, word ptr [rax + VALUE]
#define OR_DI_FROM_PTR_RBX_(VALUE) or di, word ptr [rbx + VALUE]
#define OR_DI_FROM_PTR_RCX_(VALUE) or di, word ptr [rcx + VALUE]
#define OR_DI_FROM_PTR_RDX_(VALUE) or di, word ptr [rdx + VALUE]
#define OR_DI_FROM_PTR_RDI_(VALUE) or di, word ptr [rdi + VALUE]
#define OR_DI_FROM_PTR_RSI_(VALUE) or di, word ptr [rsi + VALUE]
#define OR_DI_FROM_PTR_RBP_(VALUE) or di, word ptr [rbp + VALUE]
#define OR_DI_FROM_PTR_RSP_(VALUE) or di, word ptr [rsp + VALUE]
#define OR_DI_FROM_PTR_R8_(VALUE) or di, word ptr [r8 + VALUE]
#define OR_DI_FROM_PTR_R9_(VALUE) or di, word ptr [r9 + VALUE]
#define OR_DI_FROM_PTR_R10_(VALUE) or di, word ptr [r10 + VALUE]
#define OR_DI_FROM_PTR_R11_(VALUE) or di, word ptr [r11 + VALUE]
#define OR_DI_FROM_PTR_R12_(VALUE) or di, word ptr [r12 + VALUE]
#define OR_DI_FROM_PTR_R13_(VALUE) or di, word ptr [r13 + VALUE]
#define OR_DI_FROM_PTR_R14_(VALUE) or di, word ptr [r14 + VALUE]
#define OR_DI_FROM_PTR_R15_(VALUE) or di, word ptr [r15 + VALUE]
#define OR_DI_FROM_PTR_EAX_(VALUE) or di, word ptr [eax + VALUE]
#define OR_DI_FROM_PTR_EBX_(VALUE) or di, word ptr [ebx + VALUE]
#define OR_DI_FROM_PTR_ECX_(VALUE) or di, word ptr [ecx + VALUE]
#define OR_DI_FROM_PTR_EDX_(VALUE) or di, word ptr [edx + VALUE]
#define OR_DI_FROM_PTR_EDI_(VALUE) or di, word ptr [edi + VALUE]
#define OR_DI_FROM_PTR_ESI_(VALUE) or di, word ptr [esi + VALUE]
#define OR_DI_FROM_PTR_EBP_(VALUE) or di, word ptr [ebp + VALUE]
#define OR_DI_FROM_PTR_ESP_(VALUE) or di, word ptr [esp + VALUE]

#define OR_SI_FROM_PTR_RAX_(VALUE) or si, word ptr [rax + VALUE]
#define OR_SI_FROM_PTR_RBX_(VALUE) or si, word ptr [rbx + VALUE]
#define OR_SI_FROM_PTR_RCX_(VALUE) or si, word ptr [rcx + VALUE]
#define OR_SI_FROM_PTR_RDX_(VALUE) or si, word ptr [rdx + VALUE]
#define OR_SI_FROM_PTR_RDI_(VALUE) or si, word ptr [rdi + VALUE]
#define OR_SI_FROM_PTR_RSI_(VALUE) or si, word ptr [rsi + VALUE]
#define OR_SI_FROM_PTR_RBP_(VALUE) or si, word ptr [rbp + VALUE]
#define OR_SI_FROM_PTR_RSP_(VALUE) or si, word ptr [rsp + VALUE]
#define OR_SI_FROM_PTR_R8_(VALUE) or si, word ptr [r8 + VALUE]
#define OR_SI_FROM_PTR_R9_(VALUE) or si, word ptr [r9 + VALUE]
#define OR_SI_FROM_PTR_R10_(VALUE) or si, word ptr [r10 + VALUE]
#define OR_SI_FROM_PTR_R11_(VALUE) or si, word ptr [r11 + VALUE]
#define OR_SI_FROM_PTR_R12_(VALUE) or si, word ptr [r12 + VALUE]
#define OR_SI_FROM_PTR_R13_(VALUE) or si, word ptr [r13 + VALUE]
#define OR_SI_FROM_PTR_R14_(VALUE) or si, word ptr [r14 + VALUE]
#define OR_SI_FROM_PTR_R15_(VALUE) or si, word ptr [r15 + VALUE]
#define OR_SI_FROM_PTR_EAX_(VALUE) or si, word ptr [eax + VALUE]
#define OR_SI_FROM_PTR_EBX_(VALUE) or si, word ptr [ebx + VALUE]
#define OR_SI_FROM_PTR_ECX_(VALUE) or si, word ptr [ecx + VALUE]
#define OR_SI_FROM_PTR_EDX_(VALUE) or si, word ptr [edx + VALUE]
#define OR_SI_FROM_PTR_EDI_(VALUE) or si, word ptr [edi + VALUE]
#define OR_SI_FROM_PTR_ESI_(VALUE) or si, word ptr [esi + VALUE]
#define OR_SI_FROM_PTR_EBP_(VALUE) or si, word ptr [ebp + VALUE]
#define OR_SI_FROM_PTR_ESP_(VALUE) or si, word ptr [esp + VALUE]

#define OR_BP_FROM_PTR_RAX_(VALUE) or bp, word ptr [rax + VALUE]
#define OR_BP_FROM_PTR_RBX_(VALUE) or bp, word ptr [rbx + VALUE]
#define OR_BP_FROM_PTR_RCX_(VALUE) or bp, word ptr [rcx + VALUE]
#define OR_BP_FROM_PTR_RDX_(VALUE) or bp, word ptr [rdx + VALUE]
#define OR_BP_FROM_PTR_RDI_(VALUE) or bp, word ptr [rdi + VALUE]
#define OR_BP_FROM_PTR_RSI_(VALUE) or bp, word ptr [rsi + VALUE]
#define OR_BP_FROM_PTR_RBP_(VALUE) or bp, word ptr [rbp + VALUE]
#define OR_BP_FROM_PTR_RSP_(VALUE) or bp, word ptr [rsp + VALUE]
#define OR_BP_FROM_PTR_R8_(VALUE) or bp, word ptr [r8 + VALUE]
#define OR_BP_FROM_PTR_R9_(VALUE) or bp, word ptr [r9 + VALUE]
#define OR_BP_FROM_PTR_R10_(VALUE) or bp, word ptr [r10 + VALUE]
#define OR_BP_FROM_PTR_R11_(VALUE) or bp, word ptr [r11 + VALUE]
#define OR_BP_FROM_PTR_R12_(VALUE) or bp, word ptr [r12 + VALUE]
#define OR_BP_FROM_PTR_R13_(VALUE) or bp, word ptr [r13 + VALUE]
#define OR_BP_FROM_PTR_R14_(VALUE) or bp, word ptr [r14 + VALUE]
#define OR_BP_FROM_PTR_R15_(VALUE) or bp, word ptr [r15 + VALUE]
#define OR_BP_FROM_PTR_EAX_(VALUE) or bp, word ptr [eax + VALUE]
#define OR_BP_FROM_PTR_EBX_(VALUE) or bp, word ptr [ebx + VALUE]
#define OR_BP_FROM_PTR_ECX_(VALUE) or bp, word ptr [ecx + VALUE]
#define OR_BP_FROM_PTR_EDX_(VALUE) or bp, word ptr [edx + VALUE]
#define OR_BP_FROM_PTR_EDI_(VALUE) or bp, word ptr [edi + VALUE]
#define OR_BP_FROM_PTR_ESI_(VALUE) or bp, word ptr [esi + VALUE]
#define OR_BP_FROM_PTR_EBP_(VALUE) or bp, word ptr [ebp + VALUE]
#define OR_BP_FROM_PTR_ESP_(VALUE) or bp, word ptr [esp + VALUE]

#define OR_SP_FROM_PTR_RAX_(VALUE) or sp, word ptr [rax + VALUE]
#define OR_SP_FROM_PTR_RBX_(VALUE) or sp, word ptr [rbx + VALUE]
#define OR_SP_FROM_PTR_RCX_(VALUE) or sp, word ptr [rcx + VALUE]
#define OR_SP_FROM_PTR_RDX_(VALUE) or sp, word ptr [rdx + VALUE]
#define OR_SP_FROM_PTR_RDI_(VALUE) or sp, word ptr [rdi + VALUE]
#define OR_SP_FROM_PTR_RSI_(VALUE) or sp, word ptr [rsi + VALUE]
#define OR_SP_FROM_PTR_RBP_(VALUE) or sp, word ptr [rbp + VALUE]
#define OR_SP_FROM_PTR_RSP_(VALUE) or sp, word ptr [rsp + VALUE]
#define OR_SP_FROM_PTR_R8_(VALUE) or sp, word ptr [r8 + VALUE]
#define OR_SP_FROM_PTR_R9_(VALUE) or sp, word ptr [r9 + VALUE]
#define OR_SP_FROM_PTR_R10_(VALUE) or sp, word ptr [r10 + VALUE]
#define OR_SP_FROM_PTR_R11_(VALUE) or sp, word ptr [r11 + VALUE]
#define OR_SP_FROM_PTR_R12_(VALUE) or sp, word ptr [r12 + VALUE]
#define OR_SP_FROM_PTR_R13_(VALUE) or sp, word ptr [r13 + VALUE]
#define OR_SP_FROM_PTR_R14_(VALUE) or sp, word ptr [r14 + VALUE]
#define OR_SP_FROM_PTR_R15_(VALUE) or sp, word ptr [r15 + VALUE]
#define OR_SP_FROM_PTR_EAX_(VALUE) or sp, word ptr [eax + VALUE]
#define OR_SP_FROM_PTR_EBX_(VALUE) or sp, word ptr [ebx + VALUE]
#define OR_SP_FROM_PTR_ECX_(VALUE) or sp, word ptr [ecx + VALUE]
#define OR_SP_FROM_PTR_EDX_(VALUE) or sp, word ptr [edx + VALUE]
#define OR_SP_FROM_PTR_EDI_(VALUE) or sp, word ptr [edi + VALUE]
#define OR_SP_FROM_PTR_ESI_(VALUE) or sp, word ptr [esi + VALUE]
#define OR_SP_FROM_PTR_EBP_(VALUE) or sp, word ptr [ebp + VALUE]
#define OR_SP_FROM_PTR_ESP_(VALUE) or sp, word ptr [esp + VALUE]

#define OR_R8W_FROM_PTR_RAX_(VALUE) or r8w, word ptr [rax + VALUE]
#define OR_R8W_FROM_PTR_RBX_(VALUE) or r8w, word ptr [rbx + VALUE]
#define OR_R8W_FROM_PTR_RCX_(VALUE) or r8w, word ptr [rcx + VALUE]
#define OR_R8W_FROM_PTR_RDX_(VALUE) or r8w, word ptr [rdx + VALUE]
#define OR_R8W_FROM_PTR_RDI_(VALUE) or r8w, word ptr [rdi + VALUE]
#define OR_R8W_FROM_PTR_RSI_(VALUE) or r8w, word ptr [rsi + VALUE]
#define OR_R8W_FROM_PTR_RBP_(VALUE) or r8w, word ptr [rbp + VALUE]
#define OR_R8W_FROM_PTR_RSP_(VALUE) or r8w, word ptr [rsp + VALUE]
#define OR_R8W_FROM_PTR_R8_(VALUE) or r8w, word ptr [r8 + VALUE]
#define OR_R8W_FROM_PTR_R9_(VALUE) or r8w, word ptr [r9 + VALUE]
#define OR_R8W_FROM_PTR_R10_(VALUE) or r8w, word ptr [r10 + VALUE]
#define OR_R8W_FROM_PTR_R11_(VALUE) or r8w, word ptr [r11 + VALUE]
#define OR_R8W_FROM_PTR_R12_(VALUE) or r8w, word ptr [r12 + VALUE]
#define OR_R8W_FROM_PTR_R13_(VALUE) or r8w, word ptr [r13 + VALUE]
#define OR_R8W_FROM_PTR_R14_(VALUE) or r8w, word ptr [r14 + VALUE]
#define OR_R8W_FROM_PTR_R15_(VALUE) or r8w, word ptr [r15 + VALUE]
#define OR_R8W_FROM_PTR_EAX_(VALUE) or r8w, word ptr [eax + VALUE]
#define OR_R8W_FROM_PTR_EBX_(VALUE) or r8w, word ptr [ebx + VALUE]
#define OR_R8W_FROM_PTR_ECX_(VALUE) or r8w, word ptr [ecx + VALUE]
#define OR_R8W_FROM_PTR_EDX_(VALUE) or r8w, word ptr [edx + VALUE]
#define OR_R8W_FROM_PTR_EDI_(VALUE) or r8w, word ptr [edi + VALUE]
#define OR_R8W_FROM_PTR_ESI_(VALUE) or r8w, word ptr [esi + VALUE]
#define OR_R8W_FROM_PTR_EBP_(VALUE) or r8w, word ptr [ebp + VALUE]
#define OR_R8W_FROM_PTR_ESP_(VALUE) or r8w, word ptr [esp + VALUE]

#define OR_R9W_FROM_PTR_RAX_(VALUE) or r9w, word ptr [rax + VALUE]
#define OR_R9W_FROM_PTR_RBX_(VALUE) or r9w, word ptr [rbx + VALUE]
#define OR_R9W_FROM_PTR_RCX_(VALUE) or r9w, word ptr [rcx + VALUE]
#define OR_R9W_FROM_PTR_RDX_(VALUE) or r9w, word ptr [rdx + VALUE]
#define OR_R9W_FROM_PTR_RDI_(VALUE) or r9w, word ptr [rdi + VALUE]
#define OR_R9W_FROM_PTR_RSI_(VALUE) or r9w, word ptr [rsi + VALUE]
#define OR_R9W_FROM_PTR_RBP_(VALUE) or r9w, word ptr [rbp + VALUE]
#define OR_R9W_FROM_PTR_RSP_(VALUE) or r9w, word ptr [rsp + VALUE]
#define OR_R9W_FROM_PTR_R8_(VALUE) or r9w, word ptr [r8 + VALUE]
#define OR_R9W_FROM_PTR_R9_(VALUE) or r9w, word ptr [r9 + VALUE]
#define OR_R9W_FROM_PTR_R10_(VALUE) or r9w, word ptr [r10 + VALUE]
#define OR_R9W_FROM_PTR_R11_(VALUE) or r9w, word ptr [r11 + VALUE]
#define OR_R9W_FROM_PTR_R12_(VALUE) or r9w, word ptr [r12 + VALUE]
#define OR_R9W_FROM_PTR_R13_(VALUE) or r9w, word ptr [r13 + VALUE]
#define OR_R9W_FROM_PTR_R14_(VALUE) or r9w, word ptr [r14 + VALUE]
#define OR_R9W_FROM_PTR_R15_(VALUE) or r9w, word ptr [r15 + VALUE]
#define OR_R9W_FROM_PTR_EAX_(VALUE) or r9w, word ptr [eax + VALUE]
#define OR_R9W_FROM_PTR_EBX_(VALUE) or r9w, word ptr [ebx + VALUE]
#define OR_R9W_FROM_PTR_ECX_(VALUE) or r9w, word ptr [ecx + VALUE]
#define OR_R9W_FROM_PTR_EDX_(VALUE) or r9w, word ptr [edx + VALUE]
#define OR_R9W_FROM_PTR_EDI_(VALUE) or r9w, word ptr [edi + VALUE]
#define OR_R9W_FROM_PTR_ESI_(VALUE) or r9w, word ptr [esi + VALUE]
#define OR_R9W_FROM_PTR_EBP_(VALUE) or r9w, word ptr [ebp + VALUE]
#define OR_R9W_FROM_PTR_ESP_(VALUE) or r9w, word ptr [esp + VALUE]

#define OR_R10W_FROM_PTR_RAX_(VALUE) or r10w, word ptr [rax + VALUE]
#define OR_R10W_FROM_PTR_RBX_(VALUE) or r10w, word ptr [rbx + VALUE]
#define OR_R10W_FROM_PTR_RCX_(VALUE) or r10w, word ptr [rcx + VALUE]
#define OR_R10W_FROM_PTR_RDX_(VALUE) or r10w, word ptr [rdx + VALUE]
#define OR_R10W_FROM_PTR_RDI_(VALUE) or r10w, word ptr [rdi + VALUE]
#define OR_R10W_FROM_PTR_RSI_(VALUE) or r10w, word ptr [rsi + VALUE]
#define OR_R10W_FROM_PTR_RBP_(VALUE) or r10w, word ptr [rbp + VALUE]
#define OR_R10W_FROM_PTR_RSP_(VALUE) or r10w, word ptr [rsp + VALUE]
#define OR_R10W_FROM_PTR_R8_(VALUE) or r10w, word ptr [r8 + VALUE]
#define OR_R10W_FROM_PTR_R9_(VALUE) or r10w, word ptr [r9 + VALUE]
#define OR_R10W_FROM_PTR_R10_(VALUE) or r10w, word ptr [r10 + VALUE]
#define OR_R10W_FROM_PTR_R11_(VALUE) or r10w, word ptr [r11 + VALUE]
#define OR_R10W_FROM_PTR_R12_(VALUE) or r10w, word ptr [r12 + VALUE]
#define OR_R10W_FROM_PTR_R13_(VALUE) or r10w, word ptr [r13 + VALUE]
#define OR_R10W_FROM_PTR_R14_(VALUE) or r10w, word ptr [r14 + VALUE]
#define OR_R10W_FROM_PTR_R15_(VALUE) or r10w, word ptr [r15 + VALUE]
#define OR_R10W_FROM_PTR_EAX_(VALUE) or r10w, word ptr [eax + VALUE]
#define OR_R10W_FROM_PTR_EBX_(VALUE) or r10w, word ptr [ebx + VALUE]
#define OR_R10W_FROM_PTR_ECX_(VALUE) or r10w, word ptr [ecx + VALUE]
#define OR_R10W_FROM_PTR_EDX_(VALUE) or r10w, word ptr [edx + VALUE]
#define OR_R10W_FROM_PTR_EDI_(VALUE) or r10w, word ptr [edi + VALUE]
#define OR_R10W_FROM_PTR_ESI_(VALUE) or r10w, word ptr [esi + VALUE]
#define OR_R10W_FROM_PTR_EBP_(VALUE) or r10w, word ptr [ebp + VALUE]
#define OR_R10W_FROM_PTR_ESP_(VALUE) or r10w, word ptr [esp + VALUE]

#define OR_R11W_FROM_PTR_RAX_(VALUE) or r11w, word ptr [rax + VALUE]
#define OR_R11W_FROM_PTR_RBX_(VALUE) or r11w, word ptr [rbx + VALUE]
#define OR_R11W_FROM_PTR_RCX_(VALUE) or r11w, word ptr [rcx + VALUE]
#define OR_R11W_FROM_PTR_RDX_(VALUE) or r11w, word ptr [rdx + VALUE]
#define OR_R11W_FROM_PTR_RDI_(VALUE) or r11w, word ptr [rdi + VALUE]
#define OR_R11W_FROM_PTR_RSI_(VALUE) or r11w, word ptr [rsi + VALUE]
#define OR_R11W_FROM_PTR_RBP_(VALUE) or r11w, word ptr [rbp + VALUE]
#define OR_R11W_FROM_PTR_RSP_(VALUE) or r11w, word ptr [rsp + VALUE]
#define OR_R11W_FROM_PTR_R8_(VALUE) or r11w, word ptr [r8 + VALUE]
#define OR_R11W_FROM_PTR_R9_(VALUE) or r11w, word ptr [r9 + VALUE]
#define OR_R11W_FROM_PTR_R10_(VALUE) or r11w, word ptr [r10 + VALUE]
#define OR_R11W_FROM_PTR_R11_(VALUE) or r11w, word ptr [r11 + VALUE]
#define OR_R11W_FROM_PTR_R12_(VALUE) or r11w, word ptr [r12 + VALUE]
#define OR_R11W_FROM_PTR_R13_(VALUE) or r11w, word ptr [r13 + VALUE]
#define OR_R11W_FROM_PTR_R14_(VALUE) or r11w, word ptr [r14 + VALUE]
#define OR_R11W_FROM_PTR_R15_(VALUE) or r11w, word ptr [r15 + VALUE]
#define OR_R11W_FROM_PTR_EAX_(VALUE) or r11w, word ptr [eax + VALUE]
#define OR_R11W_FROM_PTR_EBX_(VALUE) or r11w, word ptr [ebx + VALUE]
#define OR_R11W_FROM_PTR_ECX_(VALUE) or r11w, word ptr [ecx + VALUE]
#define OR_R11W_FROM_PTR_EDX_(VALUE) or r11w, word ptr [edx + VALUE]
#define OR_R11W_FROM_PTR_EDI_(VALUE) or r11w, word ptr [edi + VALUE]
#define OR_R11W_FROM_PTR_ESI_(VALUE) or r11w, word ptr [esi + VALUE]
#define OR_R11W_FROM_PTR_EBP_(VALUE) or r11w, word ptr [ebp + VALUE]
#define OR_R11W_FROM_PTR_ESP_(VALUE) or r11w, word ptr [esp + VALUE]

#define OR_R12W_FROM_PTR_RAX_(VALUE) or r12w, word ptr [rax + VALUE]
#define OR_R12W_FROM_PTR_RBX_(VALUE) or r12w, word ptr [rbx + VALUE]
#define OR_R12W_FROM_PTR_RCX_(VALUE) or r12w, word ptr [rcx + VALUE]
#define OR_R12W_FROM_PTR_RDX_(VALUE) or r12w, word ptr [rdx + VALUE]
#define OR_R12W_FROM_PTR_RDI_(VALUE) or r12w, word ptr [rdi + VALUE]
#define OR_R12W_FROM_PTR_RSI_(VALUE) or r12w, word ptr [rsi + VALUE]
#define OR_R12W_FROM_PTR_RBP_(VALUE) or r12w, word ptr [rbp + VALUE]
#define OR_R12W_FROM_PTR_RSP_(VALUE) or r12w, word ptr [rsp + VALUE]
#define OR_R12W_FROM_PTR_R8_(VALUE) or r12w, word ptr [r8 + VALUE]
#define OR_R12W_FROM_PTR_R9_(VALUE) or r12w, word ptr [r9 + VALUE]
#define OR_R12W_FROM_PTR_R10_(VALUE) or r12w, word ptr [r10 + VALUE]
#define OR_R12W_FROM_PTR_R11_(VALUE) or r12w, word ptr [r11 + VALUE]
#define OR_R12W_FROM_PTR_R12_(VALUE) or r12w, word ptr [r12 + VALUE]
#define OR_R12W_FROM_PTR_R13_(VALUE) or r12w, word ptr [r13 + VALUE]
#define OR_R12W_FROM_PTR_R14_(VALUE) or r12w, word ptr [r14 + VALUE]
#define OR_R12W_FROM_PTR_R15_(VALUE) or r12w, word ptr [r15 + VALUE]
#define OR_R12W_FROM_PTR_EAX_(VALUE) or r12w, word ptr [eax + VALUE]
#define OR_R12W_FROM_PTR_EBX_(VALUE) or r12w, word ptr [ebx + VALUE]
#define OR_R12W_FROM_PTR_ECX_(VALUE) or r12w, word ptr [ecx + VALUE]
#define OR_R12W_FROM_PTR_EDX_(VALUE) or r12w, word ptr [edx + VALUE]
#define OR_R12W_FROM_PTR_EDI_(VALUE) or r12w, word ptr [edi + VALUE]
#define OR_R12W_FROM_PTR_ESI_(VALUE) or r12w, word ptr [esi + VALUE]
#define OR_R12W_FROM_PTR_EBP_(VALUE) or r12w, word ptr [ebp + VALUE]
#define OR_R12W_FROM_PTR_ESP_(VALUE) or r12w, word ptr [esp + VALUE]

#define OR_R13W_FROM_PTR_RAX_(VALUE) or r13w, word ptr [rax + VALUE]
#define OR_R13W_FROM_PTR_RBX_(VALUE) or r13w, word ptr [rbx + VALUE]
#define OR_R13W_FROM_PTR_RCX_(VALUE) or r13w, word ptr [rcx + VALUE]
#define OR_R13W_FROM_PTR_RDX_(VALUE) or r13w, word ptr [rdx + VALUE]
#define OR_R13W_FROM_PTR_RDI_(VALUE) or r13w, word ptr [rdi + VALUE]
#define OR_R13W_FROM_PTR_RSI_(VALUE) or r13w, word ptr [rsi + VALUE]
#define OR_R13W_FROM_PTR_RBP_(VALUE) or r13w, word ptr [rbp + VALUE]
#define OR_R13W_FROM_PTR_RSP_(VALUE) or r13w, word ptr [rsp + VALUE]
#define OR_R13W_FROM_PTR_R8_(VALUE) or r13w, word ptr [r8 + VALUE]
#define OR_R13W_FROM_PTR_R9_(VALUE) or r13w, word ptr [r9 + VALUE]
#define OR_R13W_FROM_PTR_R10_(VALUE) or r13w, word ptr [r10 + VALUE]
#define OR_R13W_FROM_PTR_R11_(VALUE) or r13w, word ptr [r11 + VALUE]
#define OR_R13W_FROM_PTR_R12_(VALUE) or r13w, word ptr [r12 + VALUE]
#define OR_R13W_FROM_PTR_R13_(VALUE) or r13w, word ptr [r13 + VALUE]
#define OR_R13W_FROM_PTR_R14_(VALUE) or r13w, word ptr [r14 + VALUE]
#define OR_R13W_FROM_PTR_R15_(VALUE) or r13w, word ptr [r15 + VALUE]
#define OR_R13W_FROM_PTR_EAX_(VALUE) or r13w, word ptr [eax + VALUE]
#define OR_R13W_FROM_PTR_EBX_(VALUE) or r13w, word ptr [ebx + VALUE]
#define OR_R13W_FROM_PTR_ECX_(VALUE) or r13w, word ptr [ecx + VALUE]
#define OR_R13W_FROM_PTR_EDX_(VALUE) or r13w, word ptr [edx + VALUE]
#define OR_R13W_FROM_PTR_EDI_(VALUE) or r13w, word ptr [edi + VALUE]
#define OR_R13W_FROM_PTR_ESI_(VALUE) or r13w, word ptr [esi + VALUE]
#define OR_R13W_FROM_PTR_EBP_(VALUE) or r13w, word ptr [ebp + VALUE]
#define OR_R13W_FROM_PTR_ESP_(VALUE) or r13w, word ptr [esp + VALUE]

#define OR_R14W_FROM_PTR_RAX_(VALUE) or r14w, word ptr [rax + VALUE]
#define OR_R14W_FROM_PTR_RBX_(VALUE) or r14w, word ptr [rbx + VALUE]
#define OR_R14W_FROM_PTR_RCX_(VALUE) or r14w, word ptr [rcx + VALUE]
#define OR_R14W_FROM_PTR_RDX_(VALUE) or r14w, word ptr [rdx + VALUE]
#define OR_R14W_FROM_PTR_RDI_(VALUE) or r14w, word ptr [rdi + VALUE]
#define OR_R14W_FROM_PTR_RSI_(VALUE) or r14w, word ptr [rsi + VALUE]
#define OR_R14W_FROM_PTR_RBP_(VALUE) or r14w, word ptr [rbp + VALUE]
#define OR_R14W_FROM_PTR_RSP_(VALUE) or r14w, word ptr [rsp + VALUE]
#define OR_R14W_FROM_PTR_R8_(VALUE) or r14w, word ptr [r8 + VALUE]
#define OR_R14W_FROM_PTR_R9_(VALUE) or r14w, word ptr [r9 + VALUE]
#define OR_R14W_FROM_PTR_R10_(VALUE) or r14w, word ptr [r10 + VALUE]
#define OR_R14W_FROM_PTR_R11_(VALUE) or r14w, word ptr [r11 + VALUE]
#define OR_R14W_FROM_PTR_R12_(VALUE) or r14w, word ptr [r12 + VALUE]
#define OR_R14W_FROM_PTR_R13_(VALUE) or r14w, word ptr [r13 + VALUE]
#define OR_R14W_FROM_PTR_R14_(VALUE) or r14w, word ptr [r14 + VALUE]
#define OR_R14W_FROM_PTR_R15_(VALUE) or r14w, word ptr [r15 + VALUE]
#define OR_R14W_FROM_PTR_EAX_(VALUE) or r14w, word ptr [eax + VALUE]
#define OR_R14W_FROM_PTR_EBX_(VALUE) or r14w, word ptr [ebx + VALUE]
#define OR_R14W_FROM_PTR_ECX_(VALUE) or r14w, word ptr [ecx + VALUE]
#define OR_R14W_FROM_PTR_EDX_(VALUE) or r14w, word ptr [edx + VALUE]
#define OR_R14W_FROM_PTR_EDI_(VALUE) or r14w, word ptr [edi + VALUE]
#define OR_R14W_FROM_PTR_ESI_(VALUE) or r14w, word ptr [esi + VALUE]
#define OR_R14W_FROM_PTR_EBP_(VALUE) or r14w, word ptr [ebp + VALUE]
#define OR_R14W_FROM_PTR_ESP_(VALUE) or r14w, word ptr [esp + VALUE]

#define OR_R15W_FROM_PTR_RAX_(VALUE) or r15w, word ptr [rax + VALUE]
#define OR_R15W_FROM_PTR_RBX_(VALUE) or r15w, word ptr [rbx + VALUE]
#define OR_R15W_FROM_PTR_RCX_(VALUE) or r15w, word ptr [rcx + VALUE]
#define OR_R15W_FROM_PTR_RDX_(VALUE) or r15w, word ptr [rdx + VALUE]
#define OR_R15W_FROM_PTR_RDI_(VALUE) or r15w, word ptr [rdi + VALUE]
#define OR_R15W_FROM_PTR_RSI_(VALUE) or r15w, word ptr [rsi + VALUE]
#define OR_R15W_FROM_PTR_RBP_(VALUE) or r15w, word ptr [rbp + VALUE]
#define OR_R15W_FROM_PTR_RSP_(VALUE) or r15w, word ptr [rsp + VALUE]
#define OR_R15W_FROM_PTR_R8_(VALUE) or r15w, word ptr [r8 + VALUE]
#define OR_R15W_FROM_PTR_R9_(VALUE) or r15w, word ptr [r9 + VALUE]
#define OR_R15W_FROM_PTR_R10_(VALUE) or r15w, word ptr [r10 + VALUE]
#define OR_R15W_FROM_PTR_R11_(VALUE) or r15w, word ptr [r11 + VALUE]
#define OR_R15W_FROM_PTR_R12_(VALUE) or r15w, word ptr [r12 + VALUE]
#define OR_R15W_FROM_PTR_R13_(VALUE) or r15w, word ptr [r13 + VALUE]
#define OR_R15W_FROM_PTR_R14_(VALUE) or r15w, word ptr [r14 + VALUE]
#define OR_R15W_FROM_PTR_R15_(VALUE) or r15w, word ptr [r15 + VALUE]
#define OR_R15W_FROM_PTR_EAX_(VALUE) or r15w, word ptr [eax + VALUE]
#define OR_R15W_FROM_PTR_EBX_(VALUE) or r15w, word ptr [ebx + VALUE]
#define OR_R15W_FROM_PTR_ECX_(VALUE) or r15w, word ptr [ecx + VALUE]
#define OR_R15W_FROM_PTR_EDX_(VALUE) or r15w, word ptr [edx + VALUE]
#define OR_R15W_FROM_PTR_EDI_(VALUE) or r15w, word ptr [edi + VALUE]
#define OR_R15W_FROM_PTR_ESI_(VALUE) or r15w, word ptr [esi + VALUE]
#define OR_R15W_FROM_PTR_EBP_(VALUE) or r15w, word ptr [ebp + VALUE]
#define OR_R15W_FROM_PTR_ESP_(VALUE) or r15w, word ptr [esp + VALUE]

#define OR_AX_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], ax
#define OR_AX_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], ax
#define OR_AX_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], ax
#define OR_AX_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], ax
#define OR_AX_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], ax
#define OR_AX_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], ax
#define OR_AX_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], ax
#define OR_AX_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], ax
#define OR_AX_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], ax
#define OR_AX_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], ax
#define OR_AX_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], ax
#define OR_AX_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], ax
#define OR_AX_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], ax
#define OR_AX_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], ax
#define OR_AX_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], ax
#define OR_AX_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], ax
#define OR_AX_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], ax
#define OR_AX_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], ax
#define OR_AX_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], ax
#define OR_AX_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], ax
#define OR_AX_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], ax
#define OR_AX_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], ax
#define OR_AX_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], ax
#define OR_AX_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], ax

#define OR_BX_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], bx
#define OR_BX_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], bx
#define OR_BX_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], bx
#define OR_BX_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], bx
#define OR_BX_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], bx
#define OR_BX_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], bx
#define OR_BX_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], bx
#define OR_BX_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], bx
#define OR_BX_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], bx
#define OR_BX_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], bx
#define OR_BX_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], bx
#define OR_BX_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], bx
#define OR_BX_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], bx
#define OR_BX_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], bx
#define OR_BX_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], bx
#define OR_BX_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], bx
#define OR_BX_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], bx
#define OR_BX_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], bx
#define OR_BX_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], bx
#define OR_BX_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], bx
#define OR_BX_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], bx
#define OR_BX_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], bx
#define OR_BX_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], bx
#define OR_BX_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], bx

#define OR_CX_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], cx
#define OR_CX_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], cx
#define OR_CX_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], cx
#define OR_CX_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], cx
#define OR_CX_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], cx
#define OR_CX_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], cx
#define OR_CX_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], cx
#define OR_CX_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], cx
#define OR_CX_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], cx
#define OR_CX_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], cx
#define OR_CX_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], cx
#define OR_CX_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], cx
#define OR_CX_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], cx
#define OR_CX_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], cx
#define OR_CX_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], cx
#define OR_CX_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], cx
#define OR_CX_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], cx
#define OR_CX_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], cx
#define OR_CX_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], cx
#define OR_CX_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], cx
#define OR_CX_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], cx
#define OR_CX_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], cx
#define OR_CX_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], cx
#define OR_CX_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], cx

#define OR_DX_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], dx
#define OR_DX_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], dx
#define OR_DX_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], dx
#define OR_DX_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], dx
#define OR_DX_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], dx
#define OR_DX_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], dx
#define OR_DX_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], dx
#define OR_DX_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], dx
#define OR_DX_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], dx
#define OR_DX_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], dx
#define OR_DX_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], dx
#define OR_DX_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], dx
#define OR_DX_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], dx
#define OR_DX_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], dx
#define OR_DX_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], dx
#define OR_DX_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], dx
#define OR_DX_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], dx
#define OR_DX_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], dx
#define OR_DX_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], dx
#define OR_DX_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], dx
#define OR_DX_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], dx
#define OR_DX_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], dx
#define OR_DX_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], dx
#define OR_DX_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], dx

#define OR_DI_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], di
#define OR_DI_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], di
#define OR_DI_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], di
#define OR_DI_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], di
#define OR_DI_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], di
#define OR_DI_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], di
#define OR_DI_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], di
#define OR_DI_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], di
#define OR_DI_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], di
#define OR_DI_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], di
#define OR_DI_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], di
#define OR_DI_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], di
#define OR_DI_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], di
#define OR_DI_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], di
#define OR_DI_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], di
#define OR_DI_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], di
#define OR_DI_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], di
#define OR_DI_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], di
#define OR_DI_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], di
#define OR_DI_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], di
#define OR_DI_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], di
#define OR_DI_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], di
#define OR_DI_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], di
#define OR_DI_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], di

#define OR_SI_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], si
#define OR_SI_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], si
#define OR_SI_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], si
#define OR_SI_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], si
#define OR_SI_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], si
#define OR_SI_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], si
#define OR_SI_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], si
#define OR_SI_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], si
#define OR_SI_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], si
#define OR_SI_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], si
#define OR_SI_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], si
#define OR_SI_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], si
#define OR_SI_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], si
#define OR_SI_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], si
#define OR_SI_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], si
#define OR_SI_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], si
#define OR_SI_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], si
#define OR_SI_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], si
#define OR_SI_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], si
#define OR_SI_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], si
#define OR_SI_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], si
#define OR_SI_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], si
#define OR_SI_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], si
#define OR_SI_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], si

#define OR_BP_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], bp
#define OR_BP_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], bp
#define OR_BP_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], bp
#define OR_BP_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], bp
#define OR_BP_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], bp
#define OR_BP_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], bp
#define OR_BP_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], bp
#define OR_BP_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], bp
#define OR_BP_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], bp
#define OR_BP_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], bp
#define OR_BP_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], bp
#define OR_BP_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], bp
#define OR_BP_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], bp
#define OR_BP_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], bp
#define OR_BP_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], bp
#define OR_BP_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], bp
#define OR_BP_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], bp
#define OR_BP_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], bp
#define OR_BP_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], bp
#define OR_BP_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], bp
#define OR_BP_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], bp
#define OR_BP_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], bp
#define OR_BP_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], bp
#define OR_BP_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], bp

#define OR_SP_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], sp
#define OR_SP_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], sp
#define OR_SP_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], sp
#define OR_SP_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], sp
#define OR_SP_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], sp
#define OR_SP_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], sp
#define OR_SP_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], sp
#define OR_SP_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], sp
#define OR_SP_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], sp
#define OR_SP_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], sp
#define OR_SP_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], sp
#define OR_SP_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], sp
#define OR_SP_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], sp
#define OR_SP_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], sp
#define OR_SP_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], sp
#define OR_SP_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], sp
#define OR_SP_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], sp
#define OR_SP_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], sp
#define OR_SP_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], sp
#define OR_SP_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], sp
#define OR_SP_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], sp
#define OR_SP_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], sp
#define OR_SP_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], sp
#define OR_SP_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], sp

#define OR_R8W_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], r8w
#define OR_R8W_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], r8w
#define OR_R8W_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], r8w
#define OR_R8W_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], r8w
#define OR_R8W_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], r8w
#define OR_R8W_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], r8w
#define OR_R8W_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], r8w
#define OR_R8W_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], r8w
#define OR_R8W_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], r8w
#define OR_R8W_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], r8w
#define OR_R8W_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], r8w
#define OR_R8W_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], r8w
#define OR_R8W_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], r8w
#define OR_R8W_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], r8w
#define OR_R8W_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], r8w
#define OR_R8W_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], r8w
#define OR_R8W_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], r8w
#define OR_R8W_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], r8w
#define OR_R8W_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], r8w
#define OR_R8W_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], r8w
#define OR_R8W_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], r8w
#define OR_R8W_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], r8w
#define OR_R8W_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], r8w
#define OR_R8W_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], r8w

#define OR_R9W_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], r9w
#define OR_R9W_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], r9w
#define OR_R9W_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], r9w
#define OR_R9W_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], r9w
#define OR_R9W_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], r9w
#define OR_R9W_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], r9w
#define OR_R9W_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], r9w
#define OR_R9W_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], r9w
#define OR_R9W_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], r9w
#define OR_R9W_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], r9w
#define OR_R9W_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], r9w
#define OR_R9W_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], r9w
#define OR_R9W_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], r9w
#define OR_R9W_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], r9w
#define OR_R9W_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], r9w
#define OR_R9W_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], r9w
#define OR_R9W_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], r9w
#define OR_R9W_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], r9w
#define OR_R9W_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], r9w
#define OR_R9W_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], r9w
#define OR_R9W_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], r9w
#define OR_R9W_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], r9w
#define OR_R9W_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], r9w
#define OR_R9W_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], r9w

#define OR_R10W_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], r10w
#define OR_R10W_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], r10w
#define OR_R10W_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], r10w
#define OR_R10W_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], r10w
#define OR_R10W_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], r10w
#define OR_R10W_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], r10w
#define OR_R10W_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], r10w
#define OR_R10W_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], r10w
#define OR_R10W_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], r10w
#define OR_R10W_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], r10w
#define OR_R10W_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], r10w
#define OR_R10W_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], r10w
#define OR_R10W_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], r10w
#define OR_R10W_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], r10w
#define OR_R10W_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], r10w
#define OR_R10W_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], r10w
#define OR_R10W_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], r10w
#define OR_R10W_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], r10w
#define OR_R10W_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], r10w
#define OR_R10W_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], r10w
#define OR_R10W_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], r10w
#define OR_R10W_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], r10w
#define OR_R10W_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], r10w
#define OR_R10W_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], r10w

#define OR_R11W_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], r11w
#define OR_R11W_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], r11w
#define OR_R11W_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], r11w
#define OR_R11W_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], r11w
#define OR_R11W_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], r11w
#define OR_R11W_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], r11w
#define OR_R11W_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], r11w
#define OR_R11W_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], r11w
#define OR_R11W_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], r11w
#define OR_R11W_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], r11w
#define OR_R11W_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], r11w
#define OR_R11W_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], r11w
#define OR_R11W_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], r11w
#define OR_R11W_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], r11w
#define OR_R11W_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], r11w
#define OR_R11W_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], r11w
#define OR_R11W_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], r11w
#define OR_R11W_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], r11w
#define OR_R11W_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], r11w
#define OR_R11W_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], r11w
#define OR_R11W_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], r11w
#define OR_R11W_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], r11w
#define OR_R11W_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], r11w
#define OR_R11W_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], r11w

#define OR_R12W_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], r12w
#define OR_R12W_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], r12w
#define OR_R12W_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], r12w
#define OR_R12W_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], r12w
#define OR_R12W_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], r12w
#define OR_R12W_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], r12w
#define OR_R12W_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], r12w
#define OR_R12W_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], r12w
#define OR_R12W_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], r12w
#define OR_R12W_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], r12w
#define OR_R12W_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], r12w
#define OR_R12W_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], r12w
#define OR_R12W_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], r12w
#define OR_R12W_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], r12w
#define OR_R12W_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], r12w
#define OR_R12W_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], r12w
#define OR_R12W_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], r12w
#define OR_R12W_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], r12w
#define OR_R12W_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], r12w
#define OR_R12W_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], r12w
#define OR_R12W_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], r12w
#define OR_R12W_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], r12w
#define OR_R12W_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], r12w
#define OR_R12W_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], r12w

#define OR_R13W_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], r13w
#define OR_R13W_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], r13w
#define OR_R13W_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], r13w
#define OR_R13W_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], r13w
#define OR_R13W_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], r13w
#define OR_R13W_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], r13w
#define OR_R13W_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], r13w
#define OR_R13W_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], r13w
#define OR_R13W_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], r13w
#define OR_R13W_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], r13w
#define OR_R13W_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], r13w
#define OR_R13W_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], r13w
#define OR_R13W_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], r13w
#define OR_R13W_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], r13w
#define OR_R13W_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], r13w
#define OR_R13W_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], r13w
#define OR_R13W_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], r13w
#define OR_R13W_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], r13w
#define OR_R13W_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], r13w
#define OR_R13W_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], r13w
#define OR_R13W_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], r13w
#define OR_R13W_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], r13w
#define OR_R13W_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], r13w
#define OR_R13W_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], r13w

#define OR_R14W_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], r14w
#define OR_R14W_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], r14w
#define OR_R14W_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], r14w
#define OR_R14W_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], r14w
#define OR_R14W_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], r14w
#define OR_R14W_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], r14w
#define OR_R14W_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], r14w
#define OR_R14W_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], r14w
#define OR_R14W_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], r14w
#define OR_R14W_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], r14w
#define OR_R14W_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], r14w
#define OR_R14W_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], r14w
#define OR_R14W_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], r14w
#define OR_R14W_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], r14w
#define OR_R14W_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], r14w
#define OR_R14W_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], r14w
#define OR_R14W_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], r14w
#define OR_R14W_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], r14w
#define OR_R14W_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], r14w
#define OR_R14W_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], r14w
#define OR_R14W_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], r14w
#define OR_R14W_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], r14w
#define OR_R14W_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], r14w
#define OR_R14W_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], r14w

#define OR_R15W_TO_PTR_RAX_(VALUE) or word ptr [rax + VALUE], r15w
#define OR_R15W_TO_PTR_RBX_(VALUE) or word ptr [rbx + VALUE], r15w
#define OR_R15W_TO_PTR_RCX_(VALUE) or word ptr [rcx + VALUE], r15w
#define OR_R15W_TO_PTR_RDX_(VALUE) or word ptr [rdx + VALUE], r15w
#define OR_R15W_TO_PTR_RDI_(VALUE) or word ptr [rdi + VALUE], r15w
#define OR_R15W_TO_PTR_RSI_(VALUE) or word ptr [rsi + VALUE], r15w
#define OR_R15W_TO_PTR_RBP_(VALUE) or word ptr [rbp + VALUE], r15w
#define OR_R15W_TO_PTR_RSP_(VALUE) or word ptr [rsp + VALUE], r15w
#define OR_R15W_TO_PTR_R8_(VALUE) or word ptr [r8 + VALUE], r15w
#define OR_R15W_TO_PTR_R9_(VALUE) or word ptr [r9 + VALUE], r15w
#define OR_R15W_TO_PTR_R10_(VALUE) or word ptr [r10 + VALUE], r15w
#define OR_R15W_TO_PTR_R11_(VALUE) or word ptr [r11 + VALUE], r15w
#define OR_R15W_TO_PTR_R12_(VALUE) or word ptr [r12 + VALUE], r15w
#define OR_R15W_TO_PTR_R13_(VALUE) or word ptr [r13 + VALUE], r15w
#define OR_R15W_TO_PTR_R14_(VALUE) or word ptr [r14 + VALUE], r15w
#define OR_R15W_TO_PTR_R15_(VALUE) or word ptr [r15 + VALUE], r15w
#define OR_R15W_TO_PTR_EAX_(VALUE) or word ptr [eax + VALUE], r15w
#define OR_R15W_TO_PTR_EBX_(VALUE) or word ptr [ebx + VALUE], r15w
#define OR_R15W_TO_PTR_ECX_(VALUE) or word ptr [ecx + VALUE], r15w
#define OR_R15W_TO_PTR_EDX_(VALUE) or word ptr [edx + VALUE], r15w
#define OR_R15W_TO_PTR_EDI_(VALUE) or word ptr [edi + VALUE], r15w
#define OR_R15W_TO_PTR_ESI_(VALUE) or word ptr [esi + VALUE], r15w
#define OR_R15W_TO_PTR_EBP_(VALUE) or word ptr [ebp + VALUE], r15w
#define OR_R15W_TO_PTR_ESP_(VALUE) or word ptr [esp + VALUE], r15w
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
