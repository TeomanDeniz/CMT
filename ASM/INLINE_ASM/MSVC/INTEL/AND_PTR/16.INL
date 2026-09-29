#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define AND_AL_FROM_PTR_(VALUE) and al, byte ptr [VALUE]
#define AND_BL_FROM_PTR_(VALUE) and bl, byte ptr [VALUE]
#define AND_CL_FROM_PTR_(VALUE) and cl, byte ptr [VALUE]
#define AND_DL_FROM_PTR_(VALUE) and dl, byte ptr [VALUE]

#define AND_AL_TO_PTR_(VALUE) and byte ptr [VALUE], al
#define AND_BL_TO_PTR_(VALUE) and byte ptr [VALUE], bl
#define AND_CL_TO_PTR_(VALUE) and byte ptr [VALUE], cl
#define AND_DL_TO_PTR_(VALUE) and byte ptr [VALUE], dl

#define AND_AL_FROM_PTR_BX and al, byte ptr [bx]
#define AND_AL_FROM_PTR_BP and al, byte ptr [bp]
#define AND_AL_FROM_PTR_SI and al, byte ptr [si]
#define AND_AL_FROM_PTR_DI and al, byte ptr [di]

#define AND_BL_FROM_PTR_BX and bl, byte ptr [bx]
#define AND_BL_FROM_PTR_BP and bl, byte ptr [bp]
#define AND_BL_FROM_PTR_SI and bl, byte ptr [si]
#define AND_BL_FROM_PTR_DI and bl, byte ptr [di]

#define AND_CL_FROM_PTR_BX and cl, byte ptr [bx]
#define AND_CL_FROM_PTR_BP and cl, byte ptr [bp]
#define AND_CL_FROM_PTR_SI and cl, byte ptr [si]
#define AND_CL_FROM_PTR_DI and cl, byte ptr [di]

#define AND_DL_FROM_PTR_BX and dl, byte ptr [bx]
#define AND_DL_FROM_PTR_BP and dl, byte ptr [bp]
#define AND_DL_FROM_PTR_SI and dl, byte ptr [si]
#define AND_DL_FROM_PTR_DI and dl, byte ptr [di]

#define AND_AL_TO_PTR_BX and byte ptr [bx], al
#define AND_AL_TO_PTR_BP and byte ptr [bp], al
#define AND_AL_TO_PTR_SI and byte ptr [si], al
#define AND_AL_TO_PTR_DI and byte ptr [di], al

#define AND_BL_TO_PTR_BX and byte ptr [bx], bl
#define AND_BL_TO_PTR_BP and byte ptr [bp], bl
#define AND_BL_TO_PTR_SI and byte ptr [si], bl
#define AND_BL_TO_PTR_DI and byte ptr [di], bl

#define AND_CL_TO_PTR_BX and byte ptr [bx], cl
#define AND_CL_TO_PTR_BP and byte ptr [bp], cl
#define AND_CL_TO_PTR_SI and byte ptr [si], cl
#define AND_CL_TO_PTR_DI and byte ptr [di], cl

#define AND_DL_TO_PTR_BX and byte ptr [bx], dl
#define AND_DL_TO_PTR_BP and byte ptr [bp], dl
#define AND_DL_TO_PTR_SI and byte ptr [si], dl
#define AND_DL_TO_PTR_DI and byte ptr [di], dl

#define AND_AL_FROM_PTR_BX_(VALUE) and al, byte ptr [bx + VALUE]
#define AND_AL_FROM_PTR_BP_(VALUE) and al, byte ptr [bp + VALUE]
#define AND_AL_FROM_PTR_SI_(VALUE) and al, byte ptr [si + VALUE]
#define AND_AL_FROM_PTR_DI_(VALUE) and al, byte ptr [di + VALUE]

#define AND_BL_FROM_PTR_BX_(VALUE) and bl, byte ptr [bx + VALUE]
#define AND_BL_FROM_PTR_BP_(VALUE) and bl, byte ptr [bp + VALUE]
#define AND_BL_FROM_PTR_SI_(VALUE) and bl, byte ptr [si + VALUE]
#define AND_BL_FROM_PTR_DI_(VALUE) and bl, byte ptr [di + VALUE]

#define AND_CL_FROM_PTR_BX_(VALUE) and cl, byte ptr [bx + VALUE]
#define AND_CL_FROM_PTR_BP_(VALUE) and cl, byte ptr [bp + VALUE]
#define AND_CL_FROM_PTR_SI_(VALUE) and cl, byte ptr [si + VALUE]
#define AND_CL_FROM_PTR_DI_(VALUE) and cl, byte ptr [di + VALUE]

#define AND_DL_FROM_PTR_BX_(VALUE) and dl, byte ptr [bx + VALUE]
#define AND_DL_FROM_PTR_BP_(VALUE) and dl, byte ptr [bp + VALUE]
#define AND_DL_FROM_PTR_SI_(VALUE) and dl, byte ptr [si + VALUE]
#define AND_DL_FROM_PTR_DI_(VALUE) and dl, byte ptr [di + VALUE]

#define AND_AL_TO_PTR_BX_(VALUE) and byte ptr [bx + VALUE], al
#define AND_AL_TO_PTR_BP_(VALUE) and byte ptr [bp + VALUE], al
#define AND_AL_TO_PTR_SI_(VALUE) and byte ptr [si + VALUE], al
#define AND_AL_TO_PTR_DI_(VALUE) and byte ptr [di + VALUE], al

#define AND_BL_TO_PTR_BX_(VALUE) and byte ptr [bx + VALUE], bl
#define AND_BL_TO_PTR_BP_(VALUE) and byte ptr [bp + VALUE], bl
#define AND_BL_TO_PTR_SI_(VALUE) and byte ptr [si + VALUE], bl
#define AND_BL_TO_PTR_DI_(VALUE) and byte ptr [di + VALUE], bl

#define AND_CL_TO_PTR_BX_(VALUE) and byte ptr [bx + VALUE], cl
#define AND_CL_TO_PTR_BP_(VALUE) and byte ptr [bp + VALUE], cl
#define AND_CL_TO_PTR_SI_(VALUE) and byte ptr [si + VALUE], cl
#define AND_CL_TO_PTR_DI_(VALUE) and byte ptr [di + VALUE], cl

#define AND_DL_TO_PTR_BX_(VALUE) and byte ptr [bx + VALUE], dl
#define AND_DL_TO_PTR_BP_(VALUE) and byte ptr [bp + VALUE], dl
#define AND_DL_TO_PTR_SI_(VALUE) and byte ptr [si + VALUE], dl
#define AND_DL_TO_PTR_DI_(VALUE) and byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define AND_AL_FROM_PTR_(VALUE) and al, byte ptr [VALUE]
#define AND_BL_FROM_PTR_(VALUE) and bl, byte ptr [VALUE]
#define AND_CL_FROM_PTR_(VALUE) and cl, byte ptr [VALUE]
#define AND_DL_FROM_PTR_(VALUE) and dl, byte ptr [VALUE]

#define AND_AL_TO_PTR_(VALUE) and byte ptr [VALUE], al
#define AND_BL_TO_PTR_(VALUE) and byte ptr [VALUE], bl
#define AND_CL_TO_PTR_(VALUE) and byte ptr [VALUE], cl
#define AND_DL_TO_PTR_(VALUE) and byte ptr [VALUE], dl

#define AND_AL_FROM_PTR_EAX and al, byte ptr [eax]
#define AND_AL_FROM_PTR_EBX and al, byte ptr [ebx]
#define AND_AL_FROM_PTR_ECX and al, byte ptr [ecx]
#define AND_AL_FROM_PTR_EDX and al, byte ptr [edx]
#define AND_AL_FROM_PTR_EDI and al, byte ptr [edi]
#define AND_AL_FROM_PTR_ESI and al, byte ptr [esi]
#define AND_AL_FROM_PTR_EBP and al, byte ptr [ebp]
#define AND_AL_FROM_PTR_ESP and al, byte ptr [esp]
#define AND_AL_FROM_PTR_BX and al, byte ptr [bx]
#define AND_AL_FROM_PTR_BP and al, byte ptr [bp]
#define AND_AL_FROM_PTR_SI and al, byte ptr [si]
#define AND_AL_FROM_PTR_DI and al, byte ptr [di]

#define AND_BL_FROM_PTR_EAX and bl, byte ptr [eax]
#define AND_BL_FROM_PTR_EBX and bl, byte ptr [ebx]
#define AND_BL_FROM_PTR_ECX and bl, byte ptr [ecx]
#define AND_BL_FROM_PTR_EDX and bl, byte ptr [edx]
#define AND_BL_FROM_PTR_EDI and bl, byte ptr [edi]
#define AND_BL_FROM_PTR_ESI and bl, byte ptr [esi]
#define AND_BL_FROM_PTR_EBP and bl, byte ptr [ebp]
#define AND_BL_FROM_PTR_ESP and bl, byte ptr [esp]
#define AND_BL_FROM_PTR_BX and bl, byte ptr [bx]
#define AND_BL_FROM_PTR_BP and bl, byte ptr [bp]
#define AND_BL_FROM_PTR_SI and bl, byte ptr [si]
#define AND_BL_FROM_PTR_DI and bl, byte ptr [di]

#define AND_CL_FROM_PTR_EAX and cl, byte ptr [eax]
#define AND_CL_FROM_PTR_EBX and cl, byte ptr [ebx]
#define AND_CL_FROM_PTR_ECX and cl, byte ptr [ecx]
#define AND_CL_FROM_PTR_EDX and cl, byte ptr [edx]
#define AND_CL_FROM_PTR_EDI and cl, byte ptr [edi]
#define AND_CL_FROM_PTR_ESI and cl, byte ptr [esi]
#define AND_CL_FROM_PTR_EBP and cl, byte ptr [ebp]
#define AND_CL_FROM_PTR_ESP and cl, byte ptr [esp]
#define AND_CL_FROM_PTR_BX and cl, byte ptr [bx]
#define AND_CL_FROM_PTR_BP and cl, byte ptr [bp]
#define AND_CL_FROM_PTR_SI and cl, byte ptr [si]
#define AND_CL_FROM_PTR_DI and cl, byte ptr [di]

#define AND_DL_FROM_PTR_EAX and dl, byte ptr [eax]
#define AND_DL_FROM_PTR_EBX and dl, byte ptr [ebx]
#define AND_DL_FROM_PTR_ECX and dl, byte ptr [ecx]
#define AND_DL_FROM_PTR_EDX and dl, byte ptr [edx]
#define AND_DL_FROM_PTR_EDI and dl, byte ptr [edi]
#define AND_DL_FROM_PTR_ESI and dl, byte ptr [esi]
#define AND_DL_FROM_PTR_EBP and dl, byte ptr [ebp]
#define AND_DL_FROM_PTR_ESP and dl, byte ptr [esp]
#define AND_DL_FROM_PTR_BX and dl, byte ptr [bx]
#define AND_DL_FROM_PTR_BP and dl, byte ptr [bp]
#define AND_DL_FROM_PTR_SI and dl, byte ptr [si]
#define AND_DL_FROM_PTR_DI and dl, byte ptr [di]

#define AND_AL_TO_PTR_EAX and byte ptr [eax], al
#define AND_AL_TO_PTR_EBX and byte ptr [ebx], al
#define AND_AL_TO_PTR_ECX and byte ptr [ecx], al
#define AND_AL_TO_PTR_EDX and byte ptr [edx], al
#define AND_AL_TO_PTR_EDI and byte ptr [edi], al
#define AND_AL_TO_PTR_ESI and byte ptr [esi], al
#define AND_AL_TO_PTR_EBP and byte ptr [ebp], al
#define AND_AL_TO_PTR_ESP and byte ptr [esp], al
#define AND_AL_TO_PTR_BX and byte ptr [bx], al
#define AND_AL_TO_PTR_BP and byte ptr [bp], al
#define AND_AL_TO_PTR_SI and byte ptr [si], al
#define AND_AL_TO_PTR_DI and byte ptr [di], al

#define AND_BL_TO_PTR_EAX and byte ptr [eax], bl
#define AND_BL_TO_PTR_EBX and byte ptr [ebx], bl
#define AND_BL_TO_PTR_ECX and byte ptr [ecx], bl
#define AND_BL_TO_PTR_EDX and byte ptr [edx], bl
#define AND_BL_TO_PTR_EDI and byte ptr [edi], bl
#define AND_BL_TO_PTR_ESI and byte ptr [esi], bl
#define AND_BL_TO_PTR_EBP and byte ptr [ebp], bl
#define AND_BL_TO_PTR_ESP and byte ptr [esp], bl
#define AND_BL_TO_PTR_BX and byte ptr [bx], bl
#define AND_BL_TO_PTR_BP and byte ptr [bp], bl
#define AND_BL_TO_PTR_SI and byte ptr [si], bl
#define AND_BL_TO_PTR_DI and byte ptr [di], bl

#define AND_CL_TO_PTR_EAX and byte ptr [eax], cl
#define AND_CL_TO_PTR_EBX and byte ptr [ebx], cl
#define AND_CL_TO_PTR_ECX and byte ptr [ecx], cl
#define AND_CL_TO_PTR_EDX and byte ptr [edx], cl
#define AND_CL_TO_PTR_EDI and byte ptr [edi], cl
#define AND_CL_TO_PTR_ESI and byte ptr [esi], cl
#define AND_CL_TO_PTR_EBP and byte ptr [ebp], cl
#define AND_CL_TO_PTR_ESP and byte ptr [esp], cl
#define AND_CL_TO_PTR_BX and byte ptr [bx], cl
#define AND_CL_TO_PTR_BP and byte ptr [bp], cl
#define AND_CL_TO_PTR_SI and byte ptr [si], cl
#define AND_CL_TO_PTR_DI and byte ptr [di], cl

#define AND_DL_TO_PTR_EAX and byte ptr [eax], dl
#define AND_DL_TO_PTR_EBX and byte ptr [ebx], dl
#define AND_DL_TO_PTR_ECX and byte ptr [ecx], dl
#define AND_DL_TO_PTR_EDX and byte ptr [edx], dl
#define AND_DL_TO_PTR_EDI and byte ptr [edi], dl
#define AND_DL_TO_PTR_ESI and byte ptr [esi], dl
#define AND_DL_TO_PTR_EBP and byte ptr [ebp], dl
#define AND_DL_TO_PTR_ESP and byte ptr [esp], dl
#define AND_DL_TO_PTR_BX and byte ptr [bx], dl
#define AND_DL_TO_PTR_BP and byte ptr [bp], dl
#define AND_DL_TO_PTR_SI and byte ptr [si], dl
#define AND_DL_TO_PTR_DI and byte ptr [di], dl

#define AND_AL_FROM_PTR_EAX_(VALUE) and al, byte ptr [eax + VALUE]
#define AND_AL_FROM_PTR_EBX_(VALUE) and al, byte ptr [ebx + VALUE]
#define AND_AL_FROM_PTR_ECX_(VALUE) and al, byte ptr [ecx + VALUE]
#define AND_AL_FROM_PTR_EDX_(VALUE) and al, byte ptr [edx + VALUE]
#define AND_AL_FROM_PTR_EDI_(VALUE) and al, byte ptr [edi + VALUE]
#define AND_AL_FROM_PTR_ESI_(VALUE) and al, byte ptr [esi + VALUE]
#define AND_AL_FROM_PTR_EBP_(VALUE) and al, byte ptr [ebp + VALUE]
#define AND_AL_FROM_PTR_ESP_(VALUE) and al, byte ptr [esp + VALUE]
#define AND_AL_FROM_PTR_BX_(VALUE) and al, byte ptr [bx + VALUE]
#define AND_AL_FROM_PTR_BP_(VALUE) and al, byte ptr [bp + VALUE]
#define AND_AL_FROM_PTR_SI_(VALUE) and al, byte ptr [si + VALUE]
#define AND_AL_FROM_PTR_DI_(VALUE) and al, byte ptr [di + VALUE]

#define AND_BL_FROM_PTR_EAX_(VALUE) and bl, byte ptr [eax + VALUE]
#define AND_BL_FROM_PTR_EBX_(VALUE) and bl, byte ptr [ebx + VALUE]
#define AND_BL_FROM_PTR_ECX_(VALUE) and bl, byte ptr [ecx + VALUE]
#define AND_BL_FROM_PTR_EDX_(VALUE) and bl, byte ptr [edx + VALUE]
#define AND_BL_FROM_PTR_EDI_(VALUE) and bl, byte ptr [edi + VALUE]
#define AND_BL_FROM_PTR_ESI_(VALUE) and bl, byte ptr [esi + VALUE]
#define AND_BL_FROM_PTR_EBP_(VALUE) and bl, byte ptr [ebp + VALUE]
#define AND_BL_FROM_PTR_ESP_(VALUE) and bl, byte ptr [esp + VALUE]
#define AND_BL_FROM_PTR_BX_(VALUE) and bl, byte ptr [bx + VALUE]
#define AND_BL_FROM_PTR_BP_(VALUE) and bl, byte ptr [bp + VALUE]
#define AND_BL_FROM_PTR_SI_(VALUE) and bl, byte ptr [si + VALUE]
#define AND_BL_FROM_PTR_DI_(VALUE) and bl, byte ptr [di + VALUE]

#define AND_CL_FROM_PTR_EAX_(VALUE) and cl, byte ptr [eax + VALUE]
#define AND_CL_FROM_PTR_EBX_(VALUE) and cl, byte ptr [ebx + VALUE]
#define AND_CL_FROM_PTR_ECX_(VALUE) and cl, byte ptr [ecx + VALUE]
#define AND_CL_FROM_PTR_EDX_(VALUE) and cl, byte ptr [edx + VALUE]
#define AND_CL_FROM_PTR_EDI_(VALUE) and cl, byte ptr [edi + VALUE]
#define AND_CL_FROM_PTR_ESI_(VALUE) and cl, byte ptr [esi + VALUE]
#define AND_CL_FROM_PTR_EBP_(VALUE) and cl, byte ptr [ebp + VALUE]
#define AND_CL_FROM_PTR_ESP_(VALUE) and cl, byte ptr [esp + VALUE]
#define AND_CL_FROM_PTR_BX_(VALUE) and cl, byte ptr [bx + VALUE]
#define AND_CL_FROM_PTR_BP_(VALUE) and cl, byte ptr [bp + VALUE]
#define AND_CL_FROM_PTR_SI_(VALUE) and cl, byte ptr [si + VALUE]
#define AND_CL_FROM_PTR_DI_(VALUE) and cl, byte ptr [di + VALUE]

#define AND_DL_FROM_PTR_EAX_(VALUE) and dl, byte ptr [eax + VALUE]
#define AND_DL_FROM_PTR_EBX_(VALUE) and dl, byte ptr [ebx + VALUE]
#define AND_DL_FROM_PTR_ECX_(VALUE) and dl, byte ptr [ecx + VALUE]
#define AND_DL_FROM_PTR_EDX_(VALUE) and dl, byte ptr [edx + VALUE]
#define AND_DL_FROM_PTR_EDI_(VALUE) and dl, byte ptr [edi + VALUE]
#define AND_DL_FROM_PTR_ESI_(VALUE) and dl, byte ptr [esi + VALUE]
#define AND_DL_FROM_PTR_EBP_(VALUE) and dl, byte ptr [ebp + VALUE]
#define AND_DL_FROM_PTR_ESP_(VALUE) and dl, byte ptr [esp + VALUE]
#define AND_DL_FROM_PTR_BX_(VALUE) and dl, byte ptr [bx + VALUE]
#define AND_DL_FROM_PTR_BP_(VALUE) and dl, byte ptr [bp + VALUE]
#define AND_DL_FROM_PTR_SI_(VALUE) and dl, byte ptr [si + VALUE]
#define AND_DL_FROM_PTR_DI_(VALUE) and dl, byte ptr [di + VALUE]

#define AND_AL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], al
#define AND_AL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], al
#define AND_AL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], al
#define AND_AL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], al
#define AND_AL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], al
#define AND_AL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], al
#define AND_AL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], al
#define AND_AL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], al
#define AND_AL_TO_PTR_BX_(VALUE) and byte ptr [bx + VALUE], al
#define AND_AL_TO_PTR_BP_(VALUE) and byte ptr [bp + VALUE], al
#define AND_AL_TO_PTR_SI_(VALUE) and byte ptr [si + VALUE], al
#define AND_AL_TO_PTR_DI_(VALUE) and byte ptr [di + VALUE], al

#define AND_BL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], bl
#define AND_BL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], bl
#define AND_BL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], bl
#define AND_BL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], bl
#define AND_BL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], bl
#define AND_BL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], bl
#define AND_BL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], bl
#define AND_BL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], bl
#define AND_BL_TO_PTR_BX_(VALUE) and byte ptr [bx + VALUE], bl
#define AND_BL_TO_PTR_BP_(VALUE) and byte ptr [bp + VALUE], bl
#define AND_BL_TO_PTR_SI_(VALUE) and byte ptr [si + VALUE], bl
#define AND_BL_TO_PTR_DI_(VALUE) and byte ptr [di + VALUE], bl

#define AND_CL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], cl
#define AND_CL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], cl
#define AND_CL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], cl
#define AND_CL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], cl
#define AND_CL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], cl
#define AND_CL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], cl
#define AND_CL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], cl
#define AND_CL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], cl
#define AND_CL_TO_PTR_BX_(VALUE) and byte ptr [bx + VALUE], cl
#define AND_CL_TO_PTR_BP_(VALUE) and byte ptr [bp + VALUE], cl
#define AND_CL_TO_PTR_SI_(VALUE) and byte ptr [si + VALUE], cl
#define AND_CL_TO_PTR_DI_(VALUE) and byte ptr [di + VALUE], cl

#define AND_DL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], dl
#define AND_DL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], dl
#define AND_DL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], dl
#define AND_DL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], dl
#define AND_DL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], dl
#define AND_DL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], dl
#define AND_DL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], dl
#define AND_DL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], dl
#define AND_DL_TO_PTR_BX_(VALUE) and byte ptr [bx + VALUE], dl
#define AND_DL_TO_PTR_BP_(VALUE) and byte ptr [bp + VALUE], dl
#define AND_DL_TO_PTR_SI_(VALUE) and byte ptr [si + VALUE], dl
#define AND_DL_TO_PTR_DI_(VALUE) and byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_AL_FROM_PTR_(VALUE) and al, byte ptr [VALUE]
#define AND_BL_FROM_PTR_(VALUE) and bl, byte ptr [VALUE]
#define AND_CL_FROM_PTR_(VALUE) and cl, byte ptr [VALUE]
#define AND_DL_FROM_PTR_(VALUE) and dl, byte ptr [VALUE]
#define AND_DIL_FROM_PTR_(VALUE) and dil, byte ptr [VALUE]
#define AND_SIL_FROM_PTR_(VALUE) and sil, byte ptr [VALUE]
#define AND_BPL_FROM_PTR_(VALUE) and bpl, byte ptr [VALUE]
#define AND_SPL_FROM_PTR_(VALUE) and spl, byte ptr [VALUE]
#define AND_R8B_FROM_PTR_(VALUE) and r8b, byte ptr [VALUE]
#define AND_R9B_FROM_PTR_(VALUE) and r9b, byte ptr [VALUE]
#define AND_R10B_FROM_PTR_(VALUE) and r10b, byte ptr [VALUE]
#define AND_R11B_FROM_PTR_(VALUE) and r11b, byte ptr [VALUE]
#define AND_R12B_FROM_PTR_(VALUE) and r12b, byte ptr [VALUE]
#define AND_R13B_FROM_PTR_(VALUE) and r13b, byte ptr [VALUE]
#define AND_R14B_FROM_PTR_(VALUE) and r14b, byte ptr [VALUE]
#define AND_R15B_FROM_PTR_(VALUE) and r15b, byte ptr [VALUE]

#define AND_AL_TO_PTR_(VALUE) and byte ptr [VALUE], al
#define AND_BL_TO_PTR_(VALUE) and byte ptr [VALUE], bl
#define AND_CL_TO_PTR_(VALUE) and byte ptr [VALUE], cl
#define AND_DL_TO_PTR_(VALUE) and byte ptr [VALUE], dl
#define AND_DIL_TO_PTR_(VALUE) and byte ptr [VALUE], dil
#define AND_SIL_TO_PTR_(VALUE) and byte ptr [VALUE], sil
#define AND_BPL_TO_PTR_(VALUE) and byte ptr [VALUE], bpl
#define AND_SPL_TO_PTR_(VALUE) and byte ptr [VALUE], spl
#define AND_R8B_TO_PTR_(VALUE) and byte ptr [VALUE], r8b
#define AND_R9B_TO_PTR_(VALUE) and byte ptr [VALUE], r9b
#define AND_R10B_TO_PTR_(VALUE) and byte ptr [VALUE], r10b
#define AND_R11B_TO_PTR_(VALUE) and byte ptr [VALUE], r11b
#define AND_R12B_TO_PTR_(VALUE) and byte ptr [VALUE], r12b
#define AND_R13B_TO_PTR_(VALUE) and byte ptr [VALUE], r13b
#define AND_R14B_TO_PTR_(VALUE) and byte ptr [VALUE], r14b
#define AND_R15B_TO_PTR_(VALUE) and byte ptr [VALUE], r15b

#define AND_AL_FROM_PTR_RAX and al, byte ptr [rax]
#define AND_AL_FROM_PTR_RBX and al, byte ptr [rbx]
#define AND_AL_FROM_PTR_RCX and al, byte ptr [rcx]
#define AND_AL_FROM_PTR_RDX and al, byte ptr [rdx]
#define AND_AL_FROM_PTR_RDI and al, byte ptr [rdi]
#define AND_AL_FROM_PTR_RSI and al, byte ptr [rsi]
#define AND_AL_FROM_PTR_RBP and al, byte ptr [rbp]
#define AND_AL_FROM_PTR_RSP and al, byte ptr [rsp]
#define AND_AL_FROM_PTR_R8 and al, byte ptr [r8]
#define AND_AL_FROM_PTR_R9 and al, byte ptr [r9]
#define AND_AL_FROM_PTR_R10 and al, byte ptr [r10]
#define AND_AL_FROM_PTR_R11 and al, byte ptr [r11]
#define AND_AL_FROM_PTR_R12 and al, byte ptr [r12]
#define AND_AL_FROM_PTR_R13 and al, byte ptr [r13]
#define AND_AL_FROM_PTR_R14 and al, byte ptr [r14]
#define AND_AL_FROM_PTR_R15 and al, byte ptr [r15]
#define AND_AL_FROM_PTR_EAX and al, byte ptr [eax]
#define AND_AL_FROM_PTR_EBX and al, byte ptr [ebx]
#define AND_AL_FROM_PTR_ECX and al, byte ptr [ecx]
#define AND_AL_FROM_PTR_EDX and al, byte ptr [edx]
#define AND_AL_FROM_PTR_EDI and al, byte ptr [edi]
#define AND_AL_FROM_PTR_ESI and al, byte ptr [esi]
#define AND_AL_FROM_PTR_EBP and al, byte ptr [ebp]
#define AND_AL_FROM_PTR_ESP and al, byte ptr [esp]

#define AND_BL_FROM_PTR_RAX and bl, byte ptr [rax]
#define AND_BL_FROM_PTR_RBX and bl, byte ptr [rbx]
#define AND_BL_FROM_PTR_RCX and bl, byte ptr [rcx]
#define AND_BL_FROM_PTR_RDX and bl, byte ptr [rdx]
#define AND_BL_FROM_PTR_RDI and bl, byte ptr [rdi]
#define AND_BL_FROM_PTR_RSI and bl, byte ptr [rsi]
#define AND_BL_FROM_PTR_RBP and bl, byte ptr [rbp]
#define AND_BL_FROM_PTR_RSP and bl, byte ptr [rsp]
#define AND_BL_FROM_PTR_R8 and bl, byte ptr [r8]
#define AND_BL_FROM_PTR_R9 and bl, byte ptr [r9]
#define AND_BL_FROM_PTR_R10 and bl, byte ptr [r10]
#define AND_BL_FROM_PTR_R11 and bl, byte ptr [r11]
#define AND_BL_FROM_PTR_R12 and bl, byte ptr [r12]
#define AND_BL_FROM_PTR_R13 and bl, byte ptr [r13]
#define AND_BL_FROM_PTR_R14 and bl, byte ptr [r14]
#define AND_BL_FROM_PTR_R15 and bl, byte ptr [r15]
#define AND_BL_FROM_PTR_EAX and bl, byte ptr [eax]
#define AND_BL_FROM_PTR_EBX and bl, byte ptr [ebx]
#define AND_BL_FROM_PTR_ECX and bl, byte ptr [ecx]
#define AND_BL_FROM_PTR_EDX and bl, byte ptr [edx]
#define AND_BL_FROM_PTR_EDI and bl, byte ptr [edi]
#define AND_BL_FROM_PTR_ESI and bl, byte ptr [esi]
#define AND_BL_FROM_PTR_EBP and bl, byte ptr [ebp]
#define AND_BL_FROM_PTR_ESP and bl, byte ptr [esp]

#define AND_CL_FROM_PTR_RAX and cl, byte ptr [rax]
#define AND_CL_FROM_PTR_RBX and cl, byte ptr [rbx]
#define AND_CL_FROM_PTR_RCX and cl, byte ptr [rcx]
#define AND_CL_FROM_PTR_RDX and cl, byte ptr [rdx]
#define AND_CL_FROM_PTR_RDI and cl, byte ptr [rdi]
#define AND_CL_FROM_PTR_RSI and cl, byte ptr [rsi]
#define AND_CL_FROM_PTR_RBP and cl, byte ptr [rbp]
#define AND_CL_FROM_PTR_RSP and cl, byte ptr [rsp]
#define AND_CL_FROM_PTR_R8 and cl, byte ptr [r8]
#define AND_CL_FROM_PTR_R9 and cl, byte ptr [r9]
#define AND_CL_FROM_PTR_R10 and cl, byte ptr [r10]
#define AND_CL_FROM_PTR_R11 and cl, byte ptr [r11]
#define AND_CL_FROM_PTR_R12 and cl, byte ptr [r12]
#define AND_CL_FROM_PTR_R13 and cl, byte ptr [r13]
#define AND_CL_FROM_PTR_R14 and cl, byte ptr [r14]
#define AND_CL_FROM_PTR_R15 and cl, byte ptr [r15]
#define AND_CL_FROM_PTR_EAX and cl, byte ptr [eax]
#define AND_CL_FROM_PTR_EBX and cl, byte ptr [ebx]
#define AND_CL_FROM_PTR_ECX and cl, byte ptr [ecx]
#define AND_CL_FROM_PTR_EDX and cl, byte ptr [edx]
#define AND_CL_FROM_PTR_EDI and cl, byte ptr [edi]
#define AND_CL_FROM_PTR_ESI and cl, byte ptr [esi]
#define AND_CL_FROM_PTR_EBP and cl, byte ptr [ebp]
#define AND_CL_FROM_PTR_ESP and cl, byte ptr [esp]

#define AND_DL_FROM_PTR_RAX and dl, byte ptr [rax]
#define AND_DL_FROM_PTR_RBX and dl, byte ptr [rbx]
#define AND_DL_FROM_PTR_RCX and dl, byte ptr [rcx]
#define AND_DL_FROM_PTR_RDX and dl, byte ptr [rdx]
#define AND_DL_FROM_PTR_RDI and dl, byte ptr [rdi]
#define AND_DL_FROM_PTR_RSI and dl, byte ptr [rsi]
#define AND_DL_FROM_PTR_RBP and dl, byte ptr [rbp]
#define AND_DL_FROM_PTR_RSP and dl, byte ptr [rsp]
#define AND_DL_FROM_PTR_R8 and dl, byte ptr [r8]
#define AND_DL_FROM_PTR_R9 and dl, byte ptr [r9]
#define AND_DL_FROM_PTR_R10 and dl, byte ptr [r10]
#define AND_DL_FROM_PTR_R11 and dl, byte ptr [r11]
#define AND_DL_FROM_PTR_R12 and dl, byte ptr [r12]
#define AND_DL_FROM_PTR_R13 and dl, byte ptr [r13]
#define AND_DL_FROM_PTR_R14 and dl, byte ptr [r14]
#define AND_DL_FROM_PTR_R15 and dl, byte ptr [r15]
#define AND_DL_FROM_PTR_EAX and dl, byte ptr [eax]
#define AND_DL_FROM_PTR_EBX and dl, byte ptr [ebx]
#define AND_DL_FROM_PTR_ECX and dl, byte ptr [ecx]
#define AND_DL_FROM_PTR_EDX and dl, byte ptr [edx]
#define AND_DL_FROM_PTR_EDI and dl, byte ptr [edi]
#define AND_DL_FROM_PTR_ESI and dl, byte ptr [esi]
#define AND_DL_FROM_PTR_EBP and dl, byte ptr [ebp]
#define AND_DL_FROM_PTR_ESP and dl, byte ptr [esp]

#define AND_DIL_FROM_PTR_RAX and dil, byte ptr [rax]
#define AND_DIL_FROM_PTR_RBX and dil, byte ptr [rbx]
#define AND_DIL_FROM_PTR_RCX and dil, byte ptr [rcx]
#define AND_DIL_FROM_PTR_RDX and dil, byte ptr [rdx]
#define AND_DIL_FROM_PTR_RDI and dil, byte ptr [rdi]
#define AND_DIL_FROM_PTR_RSI and dil, byte ptr [rsi]
#define AND_DIL_FROM_PTR_RBP and dil, byte ptr [rbp]
#define AND_DIL_FROM_PTR_RSP and dil, byte ptr [rsp]
#define AND_DIL_FROM_PTR_R8 and dil, byte ptr [r8]
#define AND_DIL_FROM_PTR_R9 and dil, byte ptr [r9]
#define AND_DIL_FROM_PTR_R10 and dil, byte ptr [r10]
#define AND_DIL_FROM_PTR_R11 and dil, byte ptr [r11]
#define AND_DIL_FROM_PTR_R12 and dil, byte ptr [r12]
#define AND_DIL_FROM_PTR_R13 and dil, byte ptr [r13]
#define AND_DIL_FROM_PTR_R14 and dil, byte ptr [r14]
#define AND_DIL_FROM_PTR_R15 and dil, byte ptr [r15]
#define AND_DIL_FROM_PTR_EAX and dil, byte ptr [eax]
#define AND_DIL_FROM_PTR_EBX and dil, byte ptr [ebx]
#define AND_DIL_FROM_PTR_ECX and dil, byte ptr [ecx]
#define AND_DIL_FROM_PTR_EDX and dil, byte ptr [edx]
#define AND_DIL_FROM_PTR_EDI and dil, byte ptr [edi]
#define AND_DIL_FROM_PTR_ESI and dil, byte ptr [esi]
#define AND_DIL_FROM_PTR_EBP and dil, byte ptr [ebp]
#define AND_DIL_FROM_PTR_ESP and dil, byte ptr [esp]

#define AND_SIL_FROM_PTR_RAX and sil, byte ptr [rax]
#define AND_SIL_FROM_PTR_RBX and sil, byte ptr [rbx]
#define AND_SIL_FROM_PTR_RCX and sil, byte ptr [rcx]
#define AND_SIL_FROM_PTR_RDX and sil, byte ptr [rdx]
#define AND_SIL_FROM_PTR_RDI and sil, byte ptr [rdi]
#define AND_SIL_FROM_PTR_RSI and sil, byte ptr [rsi]
#define AND_SIL_FROM_PTR_RBP and sil, byte ptr [rbp]
#define AND_SIL_FROM_PTR_RSP and sil, byte ptr [rsp]
#define AND_SIL_FROM_PTR_R8 and sil, byte ptr [r8]
#define AND_SIL_FROM_PTR_R9 and sil, byte ptr [r9]
#define AND_SIL_FROM_PTR_R10 and sil, byte ptr [r10]
#define AND_SIL_FROM_PTR_R11 and sil, byte ptr [r11]
#define AND_SIL_FROM_PTR_R12 and sil, byte ptr [r12]
#define AND_SIL_FROM_PTR_R13 and sil, byte ptr [r13]
#define AND_SIL_FROM_PTR_R14 and sil, byte ptr [r14]
#define AND_SIL_FROM_PTR_R15 and sil, byte ptr [r15]
#define AND_SIL_FROM_PTR_EAX and sil, byte ptr [eax]
#define AND_SIL_FROM_PTR_EBX and sil, byte ptr [ebx]
#define AND_SIL_FROM_PTR_ECX and sil, byte ptr [ecx]
#define AND_SIL_FROM_PTR_EDX and sil, byte ptr [edx]
#define AND_SIL_FROM_PTR_EDI and sil, byte ptr [edi]
#define AND_SIL_FROM_PTR_ESI and sil, byte ptr [esi]
#define AND_SIL_FROM_PTR_EBP and sil, byte ptr [ebp]
#define AND_SIL_FROM_PTR_ESP and sil, byte ptr [esp]

#define AND_BPL_FROM_PTR_RAX and bpl, byte ptr [rax]
#define AND_BPL_FROM_PTR_RBX and bpl, byte ptr [rbx]
#define AND_BPL_FROM_PTR_RCX and bpl, byte ptr [rcx]
#define AND_BPL_FROM_PTR_RDX and bpl, byte ptr [rdx]
#define AND_BPL_FROM_PTR_RDI and bpl, byte ptr [rdi]
#define AND_BPL_FROM_PTR_RSI and bpl, byte ptr [rsi]
#define AND_BPL_FROM_PTR_RBP and bpl, byte ptr [rbp]
#define AND_BPL_FROM_PTR_RSP and bpl, byte ptr [rsp]
#define AND_BPL_FROM_PTR_R8 and bpl, byte ptr [r8]
#define AND_BPL_FROM_PTR_R9 and bpl, byte ptr [r9]
#define AND_BPL_FROM_PTR_R10 and bpl, byte ptr [r10]
#define AND_BPL_FROM_PTR_R11 and bpl, byte ptr [r11]
#define AND_BPL_FROM_PTR_R12 and bpl, byte ptr [r12]
#define AND_BPL_FROM_PTR_R13 and bpl, byte ptr [r13]
#define AND_BPL_FROM_PTR_R14 and bpl, byte ptr [r14]
#define AND_BPL_FROM_PTR_R15 and bpl, byte ptr [r15]
#define AND_BPL_FROM_PTR_EAX and bpl, byte ptr [eax]
#define AND_BPL_FROM_PTR_EBX and bpl, byte ptr [ebx]
#define AND_BPL_FROM_PTR_ECX and bpl, byte ptr [ecx]
#define AND_BPL_FROM_PTR_EDX and bpl, byte ptr [edx]
#define AND_BPL_FROM_PTR_EDI and bpl, byte ptr [edi]
#define AND_BPL_FROM_PTR_ESI and bpl, byte ptr [esi]
#define AND_BPL_FROM_PTR_EBP and bpl, byte ptr [ebp]
#define AND_BPL_FROM_PTR_ESP and bpl, byte ptr [esp]

#define AND_SPL_FROM_PTR_RAX and spl, byte ptr [rax]
#define AND_SPL_FROM_PTR_RBX and spl, byte ptr [rbx]
#define AND_SPL_FROM_PTR_RCX and spl, byte ptr [rcx]
#define AND_SPL_FROM_PTR_RDX and spl, byte ptr [rdx]
#define AND_SPL_FROM_PTR_RDI and spl, byte ptr [rdi]
#define AND_SPL_FROM_PTR_RSI and spl, byte ptr [rsi]
#define AND_SPL_FROM_PTR_RBP and spl, byte ptr [rbp]
#define AND_SPL_FROM_PTR_RSP and spl, byte ptr [rsp]
#define AND_SPL_FROM_PTR_R8 and spl, byte ptr [r8]
#define AND_SPL_FROM_PTR_R9 and spl, byte ptr [r9]
#define AND_SPL_FROM_PTR_R10 and spl, byte ptr [r10]
#define AND_SPL_FROM_PTR_R11 and spl, byte ptr [r11]
#define AND_SPL_FROM_PTR_R12 and spl, byte ptr [r12]
#define AND_SPL_FROM_PTR_R13 and spl, byte ptr [r13]
#define AND_SPL_FROM_PTR_R14 and spl, byte ptr [r14]
#define AND_SPL_FROM_PTR_R15 and spl, byte ptr [r15]
#define AND_SPL_FROM_PTR_EAX and spl, byte ptr [eax]
#define AND_SPL_FROM_PTR_EBX and spl, byte ptr [ebx]
#define AND_SPL_FROM_PTR_ECX and spl, byte ptr [ecx]
#define AND_SPL_FROM_PTR_EDX and spl, byte ptr [edx]
#define AND_SPL_FROM_PTR_EDI and spl, byte ptr [edi]
#define AND_SPL_FROM_PTR_ESI and spl, byte ptr [esi]
#define AND_SPL_FROM_PTR_EBP and spl, byte ptr [ebp]
#define AND_SPL_FROM_PTR_ESP and spl, byte ptr [esp]

#define AND_R8B_FROM_PTR_RAX and r8b, byte ptr [rax]
#define AND_R8B_FROM_PTR_RBX and r8b, byte ptr [rbx]
#define AND_R8B_FROM_PTR_RCX and r8b, byte ptr [rcx]
#define AND_R8B_FROM_PTR_RDX and r8b, byte ptr [rdx]
#define AND_R8B_FROM_PTR_RDI and r8b, byte ptr [rdi]
#define AND_R8B_FROM_PTR_RSI and r8b, byte ptr [rsi]
#define AND_R8B_FROM_PTR_RBP and r8b, byte ptr [rbp]
#define AND_R8B_FROM_PTR_RSP and r8b, byte ptr [rsp]
#define AND_R8B_FROM_PTR_R8 and r8b, byte ptr [r8]
#define AND_R8B_FROM_PTR_R9 and r8b, byte ptr [r9]
#define AND_R8B_FROM_PTR_R10 and r8b, byte ptr [r10]
#define AND_R8B_FROM_PTR_R11 and r8b, byte ptr [r11]
#define AND_R8B_FROM_PTR_R12 and r8b, byte ptr [r12]
#define AND_R8B_FROM_PTR_R13 and r8b, byte ptr [r13]
#define AND_R8B_FROM_PTR_R14 and r8b, byte ptr [r14]
#define AND_R8B_FROM_PTR_R15 and r8b, byte ptr [r15]
#define AND_R8B_FROM_PTR_EAX and r8b, byte ptr [eax]
#define AND_R8B_FROM_PTR_EBX and r8b, byte ptr [ebx]
#define AND_R8B_FROM_PTR_ECX and r8b, byte ptr [ecx]
#define AND_R8B_FROM_PTR_EDX and r8b, byte ptr [edx]
#define AND_R8B_FROM_PTR_EDI and r8b, byte ptr [edi]
#define AND_R8B_FROM_PTR_ESI and r8b, byte ptr [esi]
#define AND_R8B_FROM_PTR_EBP and r8b, byte ptr [ebp]
#define AND_R8B_FROM_PTR_ESP and r8b, byte ptr [esp]

#define AND_R9B_FROM_PTR_RAX and r9b, byte ptr [rax]
#define AND_R9B_FROM_PTR_RBX and r9b, byte ptr [rbx]
#define AND_R9B_FROM_PTR_RCX and r9b, byte ptr [rcx]
#define AND_R9B_FROM_PTR_RDX and r9b, byte ptr [rdx]
#define AND_R9B_FROM_PTR_RDI and r9b, byte ptr [rdi]
#define AND_R9B_FROM_PTR_RSI and r9b, byte ptr [rsi]
#define AND_R9B_FROM_PTR_RBP and r9b, byte ptr [rbp]
#define AND_R9B_FROM_PTR_RSP and r9b, byte ptr [rsp]
#define AND_R9B_FROM_PTR_R8 and r9b, byte ptr [r8]
#define AND_R9B_FROM_PTR_R9 and r9b, byte ptr [r9]
#define AND_R9B_FROM_PTR_R10 and r9b, byte ptr [r10]
#define AND_R9B_FROM_PTR_R11 and r9b, byte ptr [r11]
#define AND_R9B_FROM_PTR_R12 and r9b, byte ptr [r12]
#define AND_R9B_FROM_PTR_R13 and r9b, byte ptr [r13]
#define AND_R9B_FROM_PTR_R14 and r9b, byte ptr [r14]
#define AND_R9B_FROM_PTR_R15 and r9b, byte ptr [r15]
#define AND_R9B_FROM_PTR_EAX and r9b, byte ptr [eax]
#define AND_R9B_FROM_PTR_EBX and r9b, byte ptr [ebx]
#define AND_R9B_FROM_PTR_ECX and r9b, byte ptr [ecx]
#define AND_R9B_FROM_PTR_EDX and r9b, byte ptr [edx]
#define AND_R9B_FROM_PTR_EDI and r9b, byte ptr [edi]
#define AND_R9B_FROM_PTR_ESI and r9b, byte ptr [esi]
#define AND_R9B_FROM_PTR_EBP and r9b, byte ptr [ebp]
#define AND_R9B_FROM_PTR_ESP and r9b, byte ptr [esp]

#define AND_R10B_FROM_PTR_RAX and r10b, byte ptr [rax]
#define AND_R10B_FROM_PTR_RBX and r10b, byte ptr [rbx]
#define AND_R10B_FROM_PTR_RCX and r10b, byte ptr [rcx]
#define AND_R10B_FROM_PTR_RDX and r10b, byte ptr [rdx]
#define AND_R10B_FROM_PTR_RDI and r10b, byte ptr [rdi]
#define AND_R10B_FROM_PTR_RSI and r10b, byte ptr [rsi]
#define AND_R10B_FROM_PTR_RBP and r10b, byte ptr [rbp]
#define AND_R10B_FROM_PTR_RSP and r10b, byte ptr [rsp]
#define AND_R10B_FROM_PTR_R8 and r10b, byte ptr [r8]
#define AND_R10B_FROM_PTR_R9 and r10b, byte ptr [r9]
#define AND_R10B_FROM_PTR_R10 and r10b, byte ptr [r10]
#define AND_R10B_FROM_PTR_R11 and r10b, byte ptr [r11]
#define AND_R10B_FROM_PTR_R12 and r10b, byte ptr [r12]
#define AND_R10B_FROM_PTR_R13 and r10b, byte ptr [r13]
#define AND_R10B_FROM_PTR_R14 and r10b, byte ptr [r14]
#define AND_R10B_FROM_PTR_R15 and r10b, byte ptr [r15]
#define AND_R10B_FROM_PTR_EAX and r10b, byte ptr [eax]
#define AND_R10B_FROM_PTR_EBX and r10b, byte ptr [ebx]
#define AND_R10B_FROM_PTR_ECX and r10b, byte ptr [ecx]
#define AND_R10B_FROM_PTR_EDX and r10b, byte ptr [edx]
#define AND_R10B_FROM_PTR_EDI and r10b, byte ptr [edi]
#define AND_R10B_FROM_PTR_ESI and r10b, byte ptr [esi]
#define AND_R10B_FROM_PTR_EBP and r10b, byte ptr [ebp]
#define AND_R10B_FROM_PTR_ESP and r10b, byte ptr [esp]

#define AND_R11B_FROM_PTR_RAX and r11b, byte ptr [rax]
#define AND_R11B_FROM_PTR_RBX and r11b, byte ptr [rbx]
#define AND_R11B_FROM_PTR_RCX and r11b, byte ptr [rcx]
#define AND_R11B_FROM_PTR_RDX and r11b, byte ptr [rdx]
#define AND_R11B_FROM_PTR_RDI and r11b, byte ptr [rdi]
#define AND_R11B_FROM_PTR_RSI and r11b, byte ptr [rsi]
#define AND_R11B_FROM_PTR_RBP and r11b, byte ptr [rbp]
#define AND_R11B_FROM_PTR_RSP and r11b, byte ptr [rsp]
#define AND_R11B_FROM_PTR_R8 and r11b, byte ptr [r8]
#define AND_R11B_FROM_PTR_R9 and r11b, byte ptr [r9]
#define AND_R11B_FROM_PTR_R10 and r11b, byte ptr [r10]
#define AND_R11B_FROM_PTR_R11 and r11b, byte ptr [r11]
#define AND_R11B_FROM_PTR_R12 and r11b, byte ptr [r12]
#define AND_R11B_FROM_PTR_R13 and r11b, byte ptr [r13]
#define AND_R11B_FROM_PTR_R14 and r11b, byte ptr [r14]
#define AND_R11B_FROM_PTR_R15 and r11b, byte ptr [r15]
#define AND_R11B_FROM_PTR_EAX and r11b, byte ptr [eax]
#define AND_R11B_FROM_PTR_EBX and r11b, byte ptr [ebx]
#define AND_R11B_FROM_PTR_ECX and r11b, byte ptr [ecx]
#define AND_R11B_FROM_PTR_EDX and r11b, byte ptr [edx]
#define AND_R11B_FROM_PTR_EDI and r11b, byte ptr [edi]
#define AND_R11B_FROM_PTR_ESI and r11b, byte ptr [esi]
#define AND_R11B_FROM_PTR_EBP and r11b, byte ptr [ebp]
#define AND_R11B_FROM_PTR_ESP and r11b, byte ptr [esp]

#define AND_R12B_FROM_PTR_RAX and r12b, byte ptr [rax]
#define AND_R12B_FROM_PTR_RBX and r12b, byte ptr [rbx]
#define AND_R12B_FROM_PTR_RCX and r12b, byte ptr [rcx]
#define AND_R12B_FROM_PTR_RDX and r12b, byte ptr [rdx]
#define AND_R12B_FROM_PTR_RDI and r12b, byte ptr [rdi]
#define AND_R12B_FROM_PTR_RSI and r12b, byte ptr [rsi]
#define AND_R12B_FROM_PTR_RBP and r12b, byte ptr [rbp]
#define AND_R12B_FROM_PTR_RSP and r12b, byte ptr [rsp]
#define AND_R12B_FROM_PTR_R8 and r12b, byte ptr [r8]
#define AND_R12B_FROM_PTR_R9 and r12b, byte ptr [r9]
#define AND_R12B_FROM_PTR_R10 and r12b, byte ptr [r10]
#define AND_R12B_FROM_PTR_R11 and r12b, byte ptr [r11]
#define AND_R12B_FROM_PTR_R12 and r12b, byte ptr [r12]
#define AND_R12B_FROM_PTR_R13 and r12b, byte ptr [r13]
#define AND_R12B_FROM_PTR_R14 and r12b, byte ptr [r14]
#define AND_R12B_FROM_PTR_R15 and r12b, byte ptr [r15]
#define AND_R12B_FROM_PTR_EAX and r12b, byte ptr [eax]
#define AND_R12B_FROM_PTR_EBX and r12b, byte ptr [ebx]
#define AND_R12B_FROM_PTR_ECX and r12b, byte ptr [ecx]
#define AND_R12B_FROM_PTR_EDX and r12b, byte ptr [edx]
#define AND_R12B_FROM_PTR_EDI and r12b, byte ptr [edi]
#define AND_R12B_FROM_PTR_ESI and r12b, byte ptr [esi]
#define AND_R12B_FROM_PTR_EBP and r12b, byte ptr [ebp]
#define AND_R12B_FROM_PTR_ESP and r12b, byte ptr [esp]

#define AND_R13B_FROM_PTR_RAX and r13b, byte ptr [rax]
#define AND_R13B_FROM_PTR_RBX and r13b, byte ptr [rbx]
#define AND_R13B_FROM_PTR_RCX and r13b, byte ptr [rcx]
#define AND_R13B_FROM_PTR_RDX and r13b, byte ptr [rdx]
#define AND_R13B_FROM_PTR_RDI and r13b, byte ptr [rdi]
#define AND_R13B_FROM_PTR_RSI and r13b, byte ptr [rsi]
#define AND_R13B_FROM_PTR_RBP and r13b, byte ptr [rbp]
#define AND_R13B_FROM_PTR_RSP and r13b, byte ptr [rsp]
#define AND_R13B_FROM_PTR_R8 and r13b, byte ptr [r8]
#define AND_R13B_FROM_PTR_R9 and r13b, byte ptr [r9]
#define AND_R13B_FROM_PTR_R10 and r13b, byte ptr [r10]
#define AND_R13B_FROM_PTR_R11 and r13b, byte ptr [r11]
#define AND_R13B_FROM_PTR_R12 and r13b, byte ptr [r12]
#define AND_R13B_FROM_PTR_R13 and r13b, byte ptr [r13]
#define AND_R13B_FROM_PTR_R14 and r13b, byte ptr [r14]
#define AND_R13B_FROM_PTR_R15 and r13b, byte ptr [r15]
#define AND_R13B_FROM_PTR_EAX and r13b, byte ptr [eax]
#define AND_R13B_FROM_PTR_EBX and r13b, byte ptr [ebx]
#define AND_R13B_FROM_PTR_ECX and r13b, byte ptr [ecx]
#define AND_R13B_FROM_PTR_EDX and r13b, byte ptr [edx]
#define AND_R13B_FROM_PTR_EDI and r13b, byte ptr [edi]
#define AND_R13B_FROM_PTR_ESI and r13b, byte ptr [esi]
#define AND_R13B_FROM_PTR_EBP and r13b, byte ptr [ebp]
#define AND_R13B_FROM_PTR_ESP and r13b, byte ptr [esp]

#define AND_R14B_FROM_PTR_RAX and r14b, byte ptr [rax]
#define AND_R14B_FROM_PTR_RBX and r14b, byte ptr [rbx]
#define AND_R14B_FROM_PTR_RCX and r14b, byte ptr [rcx]
#define AND_R14B_FROM_PTR_RDX and r14b, byte ptr [rdx]
#define AND_R14B_FROM_PTR_RDI and r14b, byte ptr [rdi]
#define AND_R14B_FROM_PTR_RSI and r14b, byte ptr [rsi]
#define AND_R14B_FROM_PTR_RBP and r14b, byte ptr [rbp]
#define AND_R14B_FROM_PTR_RSP and r14b, byte ptr [rsp]
#define AND_R14B_FROM_PTR_R8 and r14b, byte ptr [r8]
#define AND_R14B_FROM_PTR_R9 and r14b, byte ptr [r9]
#define AND_R14B_FROM_PTR_R10 and r14b, byte ptr [r10]
#define AND_R14B_FROM_PTR_R11 and r14b, byte ptr [r11]
#define AND_R14B_FROM_PTR_R12 and r14b, byte ptr [r12]
#define AND_R14B_FROM_PTR_R13 and r14b, byte ptr [r13]
#define AND_R14B_FROM_PTR_R14 and r14b, byte ptr [r14]
#define AND_R14B_FROM_PTR_R15 and r14b, byte ptr [r15]
#define AND_R14B_FROM_PTR_EAX and r14b, byte ptr [eax]
#define AND_R14B_FROM_PTR_EBX and r14b, byte ptr [ebx]
#define AND_R14B_FROM_PTR_ECX and r14b, byte ptr [ecx]
#define AND_R14B_FROM_PTR_EDX and r14b, byte ptr [edx]
#define AND_R14B_FROM_PTR_EDI and r14b, byte ptr [edi]
#define AND_R14B_FROM_PTR_ESI and r14b, byte ptr [esi]
#define AND_R14B_FROM_PTR_EBP and r14b, byte ptr [ebp]
#define AND_R14B_FROM_PTR_ESP and r14b, byte ptr [esp]

#define AND_R15B_FROM_PTR_RAX and r15b, byte ptr [rax]
#define AND_R15B_FROM_PTR_RBX and r15b, byte ptr [rbx]
#define AND_R15B_FROM_PTR_RCX and r15b, byte ptr [rcx]
#define AND_R15B_FROM_PTR_RDX and r15b, byte ptr [rdx]
#define AND_R15B_FROM_PTR_RDI and r15b, byte ptr [rdi]
#define AND_R15B_FROM_PTR_RSI and r15b, byte ptr [rsi]
#define AND_R15B_FROM_PTR_RBP and r15b, byte ptr [rbp]
#define AND_R15B_FROM_PTR_RSP and r15b, byte ptr [rsp]
#define AND_R15B_FROM_PTR_R8 and r15b, byte ptr [r8]
#define AND_R15B_FROM_PTR_R9 and r15b, byte ptr [r9]
#define AND_R15B_FROM_PTR_R10 and r15b, byte ptr [r10]
#define AND_R15B_FROM_PTR_R11 and r15b, byte ptr [r11]
#define AND_R15B_FROM_PTR_R12 and r15b, byte ptr [r12]
#define AND_R15B_FROM_PTR_R13 and r15b, byte ptr [r13]
#define AND_R15B_FROM_PTR_R14 and r15b, byte ptr [r14]
#define AND_R15B_FROM_PTR_R15 and r15b, byte ptr [r15]
#define AND_R15B_FROM_PTR_EAX and r15b, byte ptr [eax]
#define AND_R15B_FROM_PTR_EBX and r15b, byte ptr [ebx]
#define AND_R15B_FROM_PTR_ECX and r15b, byte ptr [ecx]
#define AND_R15B_FROM_PTR_EDX and r15b, byte ptr [edx]
#define AND_R15B_FROM_PTR_EDI and r15b, byte ptr [edi]
#define AND_R15B_FROM_PTR_ESI and r15b, byte ptr [esi]
#define AND_R15B_FROM_PTR_EBP and r15b, byte ptr [ebp]
#define AND_R15B_FROM_PTR_ESP and r15b, byte ptr [esp]

#define AND_AL_TO_PTR_RAX and byte ptr [rax], al
#define AND_AL_TO_PTR_RBX and byte ptr [rbx], al
#define AND_AL_TO_PTR_RCX and byte ptr [rcx], al
#define AND_AL_TO_PTR_RDX and byte ptr [rdx], al
#define AND_AL_TO_PTR_RDI and byte ptr [rdi], al
#define AND_AL_TO_PTR_RSI and byte ptr [rsi], al
#define AND_AL_TO_PTR_RBP and byte ptr [rbp], al
#define AND_AL_TO_PTR_RSP and byte ptr [rsp], al
#define AND_AL_TO_PTR_R8 and byte ptr [r8], al
#define AND_AL_TO_PTR_R9 and byte ptr [r9], al
#define AND_AL_TO_PTR_R10 and byte ptr [r10], al
#define AND_AL_TO_PTR_R11 and byte ptr [r11], al
#define AND_AL_TO_PTR_R12 and byte ptr [r12], al
#define AND_AL_TO_PTR_R13 and byte ptr [r13], al
#define AND_AL_TO_PTR_R14 and byte ptr [r14], al
#define AND_AL_TO_PTR_R15 and byte ptr [r15], al
#define AND_AL_TO_PTR_EAX and byte ptr [eax], al
#define AND_AL_TO_PTR_EBX and byte ptr [ebx], al
#define AND_AL_TO_PTR_ECX and byte ptr [ecx], al
#define AND_AL_TO_PTR_EDX and byte ptr [edx], al
#define AND_AL_TO_PTR_EDI and byte ptr [edi], al
#define AND_AL_TO_PTR_ESI and byte ptr [esi], al
#define AND_AL_TO_PTR_EBP and byte ptr [ebp], al
#define AND_AL_TO_PTR_ESP and byte ptr [esp], al

#define AND_BL_TO_PTR_RAX and byte ptr [rax], bl
#define AND_BL_TO_PTR_RBX and byte ptr [rbx], bl
#define AND_BL_TO_PTR_RCX and byte ptr [rcx], bl
#define AND_BL_TO_PTR_RDX and byte ptr [rdx], bl
#define AND_BL_TO_PTR_RDI and byte ptr [rdi], bl
#define AND_BL_TO_PTR_RSI and byte ptr [rsi], bl
#define AND_BL_TO_PTR_RBP and byte ptr [rbp], bl
#define AND_BL_TO_PTR_RSP and byte ptr [rsp], bl
#define AND_BL_TO_PTR_R8 and byte ptr [r8], bl
#define AND_BL_TO_PTR_R9 and byte ptr [r9], bl
#define AND_BL_TO_PTR_R10 and byte ptr [r10], bl
#define AND_BL_TO_PTR_R11 and byte ptr [r11], bl
#define AND_BL_TO_PTR_R12 and byte ptr [r12], bl
#define AND_BL_TO_PTR_R13 and byte ptr [r13], bl
#define AND_BL_TO_PTR_R14 and byte ptr [r14], bl
#define AND_BL_TO_PTR_R15 and byte ptr [r15], bl
#define AND_BL_TO_PTR_EAX and byte ptr [eax], bl
#define AND_BL_TO_PTR_EBX and byte ptr [ebx], bl
#define AND_BL_TO_PTR_ECX and byte ptr [ecx], bl
#define AND_BL_TO_PTR_EDX and byte ptr [edx], bl
#define AND_BL_TO_PTR_EDI and byte ptr [edi], bl
#define AND_BL_TO_PTR_ESI and byte ptr [esi], bl
#define AND_BL_TO_PTR_EBP and byte ptr [ebp], bl
#define AND_BL_TO_PTR_ESP and byte ptr [esp], bl

#define AND_CL_TO_PTR_RAX and byte ptr [rax], cl
#define AND_CL_TO_PTR_RBX and byte ptr [rbx], cl
#define AND_CL_TO_PTR_RCX and byte ptr [rcx], cl
#define AND_CL_TO_PTR_RDX and byte ptr [rdx], cl
#define AND_CL_TO_PTR_RDI and byte ptr [rdi], cl
#define AND_CL_TO_PTR_RSI and byte ptr [rsi], cl
#define AND_CL_TO_PTR_RBP and byte ptr [rbp], cl
#define AND_CL_TO_PTR_RSP and byte ptr [rsp], cl
#define AND_CL_TO_PTR_R8 and byte ptr [r8], cl
#define AND_CL_TO_PTR_R9 and byte ptr [r9], cl
#define AND_CL_TO_PTR_R10 and byte ptr [r10], cl
#define AND_CL_TO_PTR_R11 and byte ptr [r11], cl
#define AND_CL_TO_PTR_R12 and byte ptr [r12], cl
#define AND_CL_TO_PTR_R13 and byte ptr [r13], cl
#define AND_CL_TO_PTR_R14 and byte ptr [r14], cl
#define AND_CL_TO_PTR_R15 and byte ptr [r15], cl
#define AND_CL_TO_PTR_EAX and byte ptr [eax], cl
#define AND_CL_TO_PTR_EBX and byte ptr [ebx], cl
#define AND_CL_TO_PTR_ECX and byte ptr [ecx], cl
#define AND_CL_TO_PTR_EDX and byte ptr [edx], cl
#define AND_CL_TO_PTR_EDI and byte ptr [edi], cl
#define AND_CL_TO_PTR_ESI and byte ptr [esi], cl
#define AND_CL_TO_PTR_EBP and byte ptr [ebp], cl
#define AND_CL_TO_PTR_ESP and byte ptr [esp], cl

#define AND_DL_TO_PTR_RAX and byte ptr [rax], dl
#define AND_DL_TO_PTR_RBX and byte ptr [rbx], dl
#define AND_DL_TO_PTR_RCX and byte ptr [rcx], dl
#define AND_DL_TO_PTR_RDX and byte ptr [rdx], dl
#define AND_DL_TO_PTR_RDI and byte ptr [rdi], dl
#define AND_DL_TO_PTR_RSI and byte ptr [rsi], dl
#define AND_DL_TO_PTR_RBP and byte ptr [rbp], dl
#define AND_DL_TO_PTR_RSP and byte ptr [rsp], dl
#define AND_DL_TO_PTR_R8 and byte ptr [r8], dl
#define AND_DL_TO_PTR_R9 and byte ptr [r9], dl
#define AND_DL_TO_PTR_R10 and byte ptr [r10], dl
#define AND_DL_TO_PTR_R11 and byte ptr [r11], dl
#define AND_DL_TO_PTR_R12 and byte ptr [r12], dl
#define AND_DL_TO_PTR_R13 and byte ptr [r13], dl
#define AND_DL_TO_PTR_R14 and byte ptr [r14], dl
#define AND_DL_TO_PTR_R15 and byte ptr [r15], dl
#define AND_DL_TO_PTR_EAX and byte ptr [eax], dl
#define AND_DL_TO_PTR_EBX and byte ptr [ebx], dl
#define AND_DL_TO_PTR_ECX and byte ptr [ecx], dl
#define AND_DL_TO_PTR_EDX and byte ptr [edx], dl
#define AND_DL_TO_PTR_EDI and byte ptr [edi], dl
#define AND_DL_TO_PTR_ESI and byte ptr [esi], dl
#define AND_DL_TO_PTR_EBP and byte ptr [ebp], dl
#define AND_DL_TO_PTR_ESP and byte ptr [esp], dl

#define AND_DIL_TO_PTR_RAX and byte ptr [rax], dil
#define AND_DIL_TO_PTR_RBX and byte ptr [rbx], dil
#define AND_DIL_TO_PTR_RCX and byte ptr [rcx], dil
#define AND_DIL_TO_PTR_RDX and byte ptr [rdx], dil
#define AND_DIL_TO_PTR_RDI and byte ptr [rdi], dil
#define AND_DIL_TO_PTR_RSI and byte ptr [rsi], dil
#define AND_DIL_TO_PTR_RBP and byte ptr [rbp], dil
#define AND_DIL_TO_PTR_RSP and byte ptr [rsp], dil
#define AND_DIL_TO_PTR_R8 and byte ptr [r8], dil
#define AND_DIL_TO_PTR_R9 and byte ptr [r9], dil
#define AND_DIL_TO_PTR_R10 and byte ptr [r10], dil
#define AND_DIL_TO_PTR_R11 and byte ptr [r11], dil
#define AND_DIL_TO_PTR_R12 and byte ptr [r12], dil
#define AND_DIL_TO_PTR_R13 and byte ptr [r13], dil
#define AND_DIL_TO_PTR_R14 and byte ptr [r14], dil
#define AND_DIL_TO_PTR_R15 and byte ptr [r15], dil
#define AND_DIL_TO_PTR_EAX and byte ptr [eax], dil
#define AND_DIL_TO_PTR_EBX and byte ptr [ebx], dil
#define AND_DIL_TO_PTR_ECX and byte ptr [ecx], dil
#define AND_DIL_TO_PTR_EDX and byte ptr [edx], dil
#define AND_DIL_TO_PTR_EDI and byte ptr [edi], dil
#define AND_DIL_TO_PTR_ESI and byte ptr [esi], dil
#define AND_DIL_TO_PTR_EBP and byte ptr [ebp], dil
#define AND_DIL_TO_PTR_ESP and byte ptr [esp], dil

#define AND_SIL_TO_PTR_RAX and byte ptr [rax], sil
#define AND_SIL_TO_PTR_RBX and byte ptr [rbx], sil
#define AND_SIL_TO_PTR_RCX and byte ptr [rcx], sil
#define AND_SIL_TO_PTR_RDX and byte ptr [rdx], sil
#define AND_SIL_TO_PTR_RDI and byte ptr [rdi], sil
#define AND_SIL_TO_PTR_RSI and byte ptr [rsi], sil
#define AND_SIL_TO_PTR_RBP and byte ptr [rbp], sil
#define AND_SIL_TO_PTR_RSP and byte ptr [rsp], sil
#define AND_SIL_TO_PTR_R8 and byte ptr [r8], sil
#define AND_SIL_TO_PTR_R9 and byte ptr [r9], sil
#define AND_SIL_TO_PTR_R10 and byte ptr [r10], sil
#define AND_SIL_TO_PTR_R11 and byte ptr [r11], sil
#define AND_SIL_TO_PTR_R12 and byte ptr [r12], sil
#define AND_SIL_TO_PTR_R13 and byte ptr [r13], sil
#define AND_SIL_TO_PTR_R14 and byte ptr [r14], sil
#define AND_SIL_TO_PTR_R15 and byte ptr [r15], sil
#define AND_SIL_TO_PTR_EAX and byte ptr [eax], sil
#define AND_SIL_TO_PTR_EBX and byte ptr [ebx], sil
#define AND_SIL_TO_PTR_ECX and byte ptr [ecx], sil
#define AND_SIL_TO_PTR_EDX and byte ptr [edx], sil
#define AND_SIL_TO_PTR_EDI and byte ptr [edi], sil
#define AND_SIL_TO_PTR_ESI and byte ptr [esi], sil
#define AND_SIL_TO_PTR_EBP and byte ptr [ebp], sil
#define AND_SIL_TO_PTR_ESP and byte ptr [esp], sil

#define AND_BPL_TO_PTR_RAX and byte ptr [rax], bpl
#define AND_BPL_TO_PTR_RBX and byte ptr [rbx], bpl
#define AND_BPL_TO_PTR_RCX and byte ptr [rcx], bpl
#define AND_BPL_TO_PTR_RDX and byte ptr [rdx], bpl
#define AND_BPL_TO_PTR_RDI and byte ptr [rdi], bpl
#define AND_BPL_TO_PTR_RSI and byte ptr [rsi], bpl
#define AND_BPL_TO_PTR_RBP and byte ptr [rbp], bpl
#define AND_BPL_TO_PTR_RSP and byte ptr [rsp], bpl
#define AND_BPL_TO_PTR_R8 and byte ptr [r8], bpl
#define AND_BPL_TO_PTR_R9 and byte ptr [r9], bpl
#define AND_BPL_TO_PTR_R10 and byte ptr [r10], bpl
#define AND_BPL_TO_PTR_R11 and byte ptr [r11], bpl
#define AND_BPL_TO_PTR_R12 and byte ptr [r12], bpl
#define AND_BPL_TO_PTR_R13 and byte ptr [r13], bpl
#define AND_BPL_TO_PTR_R14 and byte ptr [r14], bpl
#define AND_BPL_TO_PTR_R15 and byte ptr [r15], bpl
#define AND_BPL_TO_PTR_EAX and byte ptr [eax], bpl
#define AND_BPL_TO_PTR_EBX and byte ptr [ebx], bpl
#define AND_BPL_TO_PTR_ECX and byte ptr [ecx], bpl
#define AND_BPL_TO_PTR_EDX and byte ptr [edx], bpl
#define AND_BPL_TO_PTR_EDI and byte ptr [edi], bpl
#define AND_BPL_TO_PTR_ESI and byte ptr [esi], bpl
#define AND_BPL_TO_PTR_EBP and byte ptr [ebp], bpl
#define AND_BPL_TO_PTR_ESP and byte ptr [esp], bpl

#define AND_SPL_TO_PTR_RAX and byte ptr [rax], spl
#define AND_SPL_TO_PTR_RBX and byte ptr [rbx], spl
#define AND_SPL_TO_PTR_RCX and byte ptr [rcx], spl
#define AND_SPL_TO_PTR_RDX and byte ptr [rdx], spl
#define AND_SPL_TO_PTR_RDI and byte ptr [rdi], spl
#define AND_SPL_TO_PTR_RSI and byte ptr [rsi], spl
#define AND_SPL_TO_PTR_RBP and byte ptr [rbp], spl
#define AND_SPL_TO_PTR_RSP and byte ptr [rsp], spl
#define AND_SPL_TO_PTR_R8 and byte ptr [r8], spl
#define AND_SPL_TO_PTR_R9 and byte ptr [r9], spl
#define AND_SPL_TO_PTR_R10 and byte ptr [r10], spl
#define AND_SPL_TO_PTR_R11 and byte ptr [r11], spl
#define AND_SPL_TO_PTR_R12 and byte ptr [r12], spl
#define AND_SPL_TO_PTR_R13 and byte ptr [r13], spl
#define AND_SPL_TO_PTR_R14 and byte ptr [r14], spl
#define AND_SPL_TO_PTR_R15 and byte ptr [r15], spl
#define AND_SPL_TO_PTR_EAX and byte ptr [eax], spl
#define AND_SPL_TO_PTR_EBX and byte ptr [ebx], spl
#define AND_SPL_TO_PTR_ECX and byte ptr [ecx], spl
#define AND_SPL_TO_PTR_EDX and byte ptr [edx], spl
#define AND_SPL_TO_PTR_EDI and byte ptr [edi], spl
#define AND_SPL_TO_PTR_ESI and byte ptr [esi], spl
#define AND_SPL_TO_PTR_EBP and byte ptr [ebp], spl
#define AND_SPL_TO_PTR_ESP and byte ptr [esp], spl

#define AND_R8B_TO_PTR_RAX and byte ptr [rax], r8b
#define AND_R8B_TO_PTR_RBX and byte ptr [rbx], r8b
#define AND_R8B_TO_PTR_RCX and byte ptr [rcx], r8b
#define AND_R8B_TO_PTR_RDX and byte ptr [rdx], r8b
#define AND_R8B_TO_PTR_RDI and byte ptr [rdi], r8b
#define AND_R8B_TO_PTR_RSI and byte ptr [rsi], r8b
#define AND_R8B_TO_PTR_RBP and byte ptr [rbp], r8b
#define AND_R8B_TO_PTR_RSP and byte ptr [rsp], r8b
#define AND_R8B_TO_PTR_R8 and byte ptr [r8], r8b
#define AND_R8B_TO_PTR_R9 and byte ptr [r9], r8b
#define AND_R8B_TO_PTR_R10 and byte ptr [r10], r8b
#define AND_R8B_TO_PTR_R11 and byte ptr [r11], r8b
#define AND_R8B_TO_PTR_R12 and byte ptr [r12], r8b
#define AND_R8B_TO_PTR_R13 and byte ptr [r13], r8b
#define AND_R8B_TO_PTR_R14 and byte ptr [r14], r8b
#define AND_R8B_TO_PTR_R15 and byte ptr [r15], r8b
#define AND_R8B_TO_PTR_EAX and byte ptr [eax], r8b
#define AND_R8B_TO_PTR_EBX and byte ptr [ebx], r8b
#define AND_R8B_TO_PTR_ECX and byte ptr [ecx], r8b
#define AND_R8B_TO_PTR_EDX and byte ptr [edx], r8b
#define AND_R8B_TO_PTR_EDI and byte ptr [edi], r8b
#define AND_R8B_TO_PTR_ESI and byte ptr [esi], r8b
#define AND_R8B_TO_PTR_EBP and byte ptr [ebp], r8b
#define AND_R8B_TO_PTR_ESP and byte ptr [esp], r8b

#define AND_R9B_TO_PTR_RAX and byte ptr [rax], r9b
#define AND_R9B_TO_PTR_RBX and byte ptr [rbx], r9b
#define AND_R9B_TO_PTR_RCX and byte ptr [rcx], r9b
#define AND_R9B_TO_PTR_RDX and byte ptr [rdx], r9b
#define AND_R9B_TO_PTR_RDI and byte ptr [rdi], r9b
#define AND_R9B_TO_PTR_RSI and byte ptr [rsi], r9b
#define AND_R9B_TO_PTR_RBP and byte ptr [rbp], r9b
#define AND_R9B_TO_PTR_RSP and byte ptr [rsp], r9b
#define AND_R9B_TO_PTR_R8 and byte ptr [r8], r9b
#define AND_R9B_TO_PTR_R9 and byte ptr [r9], r9b
#define AND_R9B_TO_PTR_R10 and byte ptr [r10], r9b
#define AND_R9B_TO_PTR_R11 and byte ptr [r11], r9b
#define AND_R9B_TO_PTR_R12 and byte ptr [r12], r9b
#define AND_R9B_TO_PTR_R13 and byte ptr [r13], r9b
#define AND_R9B_TO_PTR_R14 and byte ptr [r14], r9b
#define AND_R9B_TO_PTR_R15 and byte ptr [r15], r9b
#define AND_R9B_TO_PTR_EAX and byte ptr [eax], r9b
#define AND_R9B_TO_PTR_EBX and byte ptr [ebx], r9b
#define AND_R9B_TO_PTR_ECX and byte ptr [ecx], r9b
#define AND_R9B_TO_PTR_EDX and byte ptr [edx], r9b
#define AND_R9B_TO_PTR_EDI and byte ptr [edi], r9b
#define AND_R9B_TO_PTR_ESI and byte ptr [esi], r9b
#define AND_R9B_TO_PTR_EBP and byte ptr [ebp], r9b
#define AND_R9B_TO_PTR_ESP and byte ptr [esp], r9b

#define AND_R10B_TO_PTR_RAX and byte ptr [rax], r10b
#define AND_R10B_TO_PTR_RBX and byte ptr [rbx], r10b
#define AND_R10B_TO_PTR_RCX and byte ptr [rcx], r10b
#define AND_R10B_TO_PTR_RDX and byte ptr [rdx], r10b
#define AND_R10B_TO_PTR_RDI and byte ptr [rdi], r10b
#define AND_R10B_TO_PTR_RSI and byte ptr [rsi], r10b
#define AND_R10B_TO_PTR_RBP and byte ptr [rbp], r10b
#define AND_R10B_TO_PTR_RSP and byte ptr [rsp], r10b
#define AND_R10B_TO_PTR_R8 and byte ptr [r8], r10b
#define AND_R10B_TO_PTR_R9 and byte ptr [r9], r10b
#define AND_R10B_TO_PTR_R10 and byte ptr [r10], r10b
#define AND_R10B_TO_PTR_R11 and byte ptr [r11], r10b
#define AND_R10B_TO_PTR_R12 and byte ptr [r12], r10b
#define AND_R10B_TO_PTR_R13 and byte ptr [r13], r10b
#define AND_R10B_TO_PTR_R14 and byte ptr [r14], r10b
#define AND_R10B_TO_PTR_R15 and byte ptr [r15], r10b
#define AND_R10B_TO_PTR_EAX and byte ptr [eax], r10b
#define AND_R10B_TO_PTR_EBX and byte ptr [ebx], r10b
#define AND_R10B_TO_PTR_ECX and byte ptr [ecx], r10b
#define AND_R10B_TO_PTR_EDX and byte ptr [edx], r10b
#define AND_R10B_TO_PTR_EDI and byte ptr [edi], r10b
#define AND_R10B_TO_PTR_ESI and byte ptr [esi], r10b
#define AND_R10B_TO_PTR_EBP and byte ptr [ebp], r10b
#define AND_R10B_TO_PTR_ESP and byte ptr [esp], r10b

#define AND_R11B_TO_PTR_RAX and byte ptr [rax], r11b
#define AND_R11B_TO_PTR_RBX and byte ptr [rbx], r11b
#define AND_R11B_TO_PTR_RCX and byte ptr [rcx], r11b
#define AND_R11B_TO_PTR_RDX and byte ptr [rdx], r11b
#define AND_R11B_TO_PTR_RDI and byte ptr [rdi], r11b
#define AND_R11B_TO_PTR_RSI and byte ptr [rsi], r11b
#define AND_R11B_TO_PTR_RBP and byte ptr [rbp], r11b
#define AND_R11B_TO_PTR_RSP and byte ptr [rsp], r11b
#define AND_R11B_TO_PTR_R8 and byte ptr [r8], r11b
#define AND_R11B_TO_PTR_R9 and byte ptr [r9], r11b
#define AND_R11B_TO_PTR_R10 and byte ptr [r10], r11b
#define AND_R11B_TO_PTR_R11 and byte ptr [r11], r11b
#define AND_R11B_TO_PTR_R12 and byte ptr [r12], r11b
#define AND_R11B_TO_PTR_R13 and byte ptr [r13], r11b
#define AND_R11B_TO_PTR_R14 and byte ptr [r14], r11b
#define AND_R11B_TO_PTR_R15 and byte ptr [r15], r11b
#define AND_R11B_TO_PTR_EAX and byte ptr [eax], r11b
#define AND_R11B_TO_PTR_EBX and byte ptr [ebx], r11b
#define AND_R11B_TO_PTR_ECX and byte ptr [ecx], r11b
#define AND_R11B_TO_PTR_EDX and byte ptr [edx], r11b
#define AND_R11B_TO_PTR_EDI and byte ptr [edi], r11b
#define AND_R11B_TO_PTR_ESI and byte ptr [esi], r11b
#define AND_R11B_TO_PTR_EBP and byte ptr [ebp], r11b
#define AND_R11B_TO_PTR_ESP and byte ptr [esp], r11b

#define AND_R12B_TO_PTR_RAX and byte ptr [rax], r12b
#define AND_R12B_TO_PTR_RBX and byte ptr [rbx], r12b
#define AND_R12B_TO_PTR_RCX and byte ptr [rcx], r12b
#define AND_R12B_TO_PTR_RDX and byte ptr [rdx], r12b
#define AND_R12B_TO_PTR_RDI and byte ptr [rdi], r12b
#define AND_R12B_TO_PTR_RSI and byte ptr [rsi], r12b
#define AND_R12B_TO_PTR_RBP and byte ptr [rbp], r12b
#define AND_R12B_TO_PTR_RSP and byte ptr [rsp], r12b
#define AND_R12B_TO_PTR_R8 and byte ptr [r8], r12b
#define AND_R12B_TO_PTR_R9 and byte ptr [r9], r12b
#define AND_R12B_TO_PTR_R10 and byte ptr [r10], r12b
#define AND_R12B_TO_PTR_R11 and byte ptr [r11], r12b
#define AND_R12B_TO_PTR_R12 and byte ptr [r12], r12b
#define AND_R12B_TO_PTR_R13 and byte ptr [r13], r12b
#define AND_R12B_TO_PTR_R14 and byte ptr [r14], r12b
#define AND_R12B_TO_PTR_R15 and byte ptr [r15], r12b
#define AND_R12B_TO_PTR_EAX and byte ptr [eax], r12b
#define AND_R12B_TO_PTR_EBX and byte ptr [ebx], r12b
#define AND_R12B_TO_PTR_ECX and byte ptr [ecx], r12b
#define AND_R12B_TO_PTR_EDX and byte ptr [edx], r12b
#define AND_R12B_TO_PTR_EDI and byte ptr [edi], r12b
#define AND_R12B_TO_PTR_ESI and byte ptr [esi], r12b
#define AND_R12B_TO_PTR_EBP and byte ptr [ebp], r12b
#define AND_R12B_TO_PTR_ESP and byte ptr [esp], r12b

#define AND_R13B_TO_PTR_RAX and byte ptr [rax], r13b
#define AND_R13B_TO_PTR_RBX and byte ptr [rbx], r13b
#define AND_R13B_TO_PTR_RCX and byte ptr [rcx], r13b
#define AND_R13B_TO_PTR_RDX and byte ptr [rdx], r13b
#define AND_R13B_TO_PTR_RDI and byte ptr [rdi], r13b
#define AND_R13B_TO_PTR_RSI and byte ptr [rsi], r13b
#define AND_R13B_TO_PTR_RBP and byte ptr [rbp], r13b
#define AND_R13B_TO_PTR_RSP and byte ptr [rsp], r13b
#define AND_R13B_TO_PTR_R8 and byte ptr [r8], r13b
#define AND_R13B_TO_PTR_R9 and byte ptr [r9], r13b
#define AND_R13B_TO_PTR_R10 and byte ptr [r10], r13b
#define AND_R13B_TO_PTR_R11 and byte ptr [r11], r13b
#define AND_R13B_TO_PTR_R12 and byte ptr [r12], r13b
#define AND_R13B_TO_PTR_R13 and byte ptr [r13], r13b
#define AND_R13B_TO_PTR_R14 and byte ptr [r14], r13b
#define AND_R13B_TO_PTR_R15 and byte ptr [r15], r13b
#define AND_R13B_TO_PTR_EAX and byte ptr [eax], r13b
#define AND_R13B_TO_PTR_EBX and byte ptr [ebx], r13b
#define AND_R13B_TO_PTR_ECX and byte ptr [ecx], r13b
#define AND_R13B_TO_PTR_EDX and byte ptr [edx], r13b
#define AND_R13B_TO_PTR_EDI and byte ptr [edi], r13b
#define AND_R13B_TO_PTR_ESI and byte ptr [esi], r13b
#define AND_R13B_TO_PTR_EBP and byte ptr [ebp], r13b
#define AND_R13B_TO_PTR_ESP and byte ptr [esp], r13b

#define AND_R14B_TO_PTR_RAX and byte ptr [rax], r14b
#define AND_R14B_TO_PTR_RBX and byte ptr [rbx], r14b
#define AND_R14B_TO_PTR_RCX and byte ptr [rcx], r14b
#define AND_R14B_TO_PTR_RDX and byte ptr [rdx], r14b
#define AND_R14B_TO_PTR_RDI and byte ptr [rdi], r14b
#define AND_R14B_TO_PTR_RSI and byte ptr [rsi], r14b
#define AND_R14B_TO_PTR_RBP and byte ptr [rbp], r14b
#define AND_R14B_TO_PTR_RSP and byte ptr [rsp], r14b
#define AND_R14B_TO_PTR_R8 and byte ptr [r8], r14b
#define AND_R14B_TO_PTR_R9 and byte ptr [r9], r14b
#define AND_R14B_TO_PTR_R10 and byte ptr [r10], r14b
#define AND_R14B_TO_PTR_R11 and byte ptr [r11], r14b
#define AND_R14B_TO_PTR_R12 and byte ptr [r12], r14b
#define AND_R14B_TO_PTR_R13 and byte ptr [r13], r14b
#define AND_R14B_TO_PTR_R14 and byte ptr [r14], r14b
#define AND_R14B_TO_PTR_R15 and byte ptr [r15], r14b
#define AND_R14B_TO_PTR_EAX and byte ptr [eax], r14b
#define AND_R14B_TO_PTR_EBX and byte ptr [ebx], r14b
#define AND_R14B_TO_PTR_ECX and byte ptr [ecx], r14b
#define AND_R14B_TO_PTR_EDX and byte ptr [edx], r14b
#define AND_R14B_TO_PTR_EDI and byte ptr [edi], r14b
#define AND_R14B_TO_PTR_ESI and byte ptr [esi], r14b
#define AND_R14B_TO_PTR_EBP and byte ptr [ebp], r14b
#define AND_R14B_TO_PTR_ESP and byte ptr [esp], r14b

#define AND_R15B_TO_PTR_RAX and byte ptr [rax], r15b
#define AND_R15B_TO_PTR_RBX and byte ptr [rbx], r15b
#define AND_R15B_TO_PTR_RCX and byte ptr [rcx], r15b
#define AND_R15B_TO_PTR_RDX and byte ptr [rdx], r15b
#define AND_R15B_TO_PTR_RDI and byte ptr [rdi], r15b
#define AND_R15B_TO_PTR_RSI and byte ptr [rsi], r15b
#define AND_R15B_TO_PTR_RBP and byte ptr [rbp], r15b
#define AND_R15B_TO_PTR_RSP and byte ptr [rsp], r15b
#define AND_R15B_TO_PTR_R8 and byte ptr [r8], r15b
#define AND_R15B_TO_PTR_R9 and byte ptr [r9], r15b
#define AND_R15B_TO_PTR_R10 and byte ptr [r10], r15b
#define AND_R15B_TO_PTR_R11 and byte ptr [r11], r15b
#define AND_R15B_TO_PTR_R12 and byte ptr [r12], r15b
#define AND_R15B_TO_PTR_R13 and byte ptr [r13], r15b
#define AND_R15B_TO_PTR_R14 and byte ptr [r14], r15b
#define AND_R15B_TO_PTR_R15 and byte ptr [r15], r15b
#define AND_R15B_TO_PTR_EAX and byte ptr [eax], r15b
#define AND_R15B_TO_PTR_EBX and byte ptr [ebx], r15b
#define AND_R15B_TO_PTR_ECX and byte ptr [ecx], r15b
#define AND_R15B_TO_PTR_EDX and byte ptr [edx], r15b
#define AND_R15B_TO_PTR_EDI and byte ptr [edi], r15b
#define AND_R15B_TO_PTR_ESI and byte ptr [esi], r15b
#define AND_R15B_TO_PTR_EBP and byte ptr [ebp], r15b
#define AND_R15B_TO_PTR_ESP and byte ptr [esp], r15b

#define AND_AL_FROM_PTR_RAX_(VALUE) and al, byte ptr [rax + VALUE]
#define AND_AL_FROM_PTR_RBX_(VALUE) and al, byte ptr [rbx + VALUE]
#define AND_AL_FROM_PTR_RCX_(VALUE) and al, byte ptr [rcx + VALUE]
#define AND_AL_FROM_PTR_RDX_(VALUE) and al, byte ptr [rdx + VALUE]
#define AND_AL_FROM_PTR_RDI_(VALUE) and al, byte ptr [rdi + VALUE]
#define AND_AL_FROM_PTR_RSI_(VALUE) and al, byte ptr [rsi + VALUE]
#define AND_AL_FROM_PTR_RBP_(VALUE) and al, byte ptr [rbp + VALUE]
#define AND_AL_FROM_PTR_RSP_(VALUE) and al, byte ptr [rsp + VALUE]
#define AND_AL_FROM_PTR_R8_(VALUE) and al, byte ptr [r8 + VALUE]
#define AND_AL_FROM_PTR_R9_(VALUE) and al, byte ptr [r9 + VALUE]
#define AND_AL_FROM_PTR_R10_(VALUE) and al, byte ptr [r10 + VALUE]
#define AND_AL_FROM_PTR_R11_(VALUE) and al, byte ptr [r11 + VALUE]
#define AND_AL_FROM_PTR_R12_(VALUE) and al, byte ptr [r12 + VALUE]
#define AND_AL_FROM_PTR_R13_(VALUE) and al, byte ptr [r13 + VALUE]
#define AND_AL_FROM_PTR_R14_(VALUE) and al, byte ptr [r14 + VALUE]
#define AND_AL_FROM_PTR_R15_(VALUE) and al, byte ptr [r15 + VALUE]
#define AND_AL_FROM_PTR_EAX_(VALUE) and al, byte ptr [eax + VALUE]
#define AND_AL_FROM_PTR_EBX_(VALUE) and al, byte ptr [ebx + VALUE]
#define AND_AL_FROM_PTR_ECX_(VALUE) and al, byte ptr [ecx + VALUE]
#define AND_AL_FROM_PTR_EDX_(VALUE) and al, byte ptr [edx + VALUE]
#define AND_AL_FROM_PTR_EDI_(VALUE) and al, byte ptr [edi + VALUE]
#define AND_AL_FROM_PTR_ESI_(VALUE) and al, byte ptr [esi + VALUE]
#define AND_AL_FROM_PTR_EBP_(VALUE) and al, byte ptr [ebp + VALUE]
#define AND_AL_FROM_PTR_ESP_(VALUE) and al, byte ptr [esp + VALUE]

#define AND_BL_FROM_PTR_RAX_(VALUE) and bl, byte ptr [rax + VALUE]
#define AND_BL_FROM_PTR_RBX_(VALUE) and bl, byte ptr [rbx + VALUE]
#define AND_BL_FROM_PTR_RCX_(VALUE) and bl, byte ptr [rcx + VALUE]
#define AND_BL_FROM_PTR_RDX_(VALUE) and bl, byte ptr [rdx + VALUE]
#define AND_BL_FROM_PTR_RDI_(VALUE) and bl, byte ptr [rdi + VALUE]
#define AND_BL_FROM_PTR_RSI_(VALUE) and bl, byte ptr [rsi + VALUE]
#define AND_BL_FROM_PTR_RBP_(VALUE) and bl, byte ptr [rbp + VALUE]
#define AND_BL_FROM_PTR_RSP_(VALUE) and bl, byte ptr [rsp + VALUE]
#define AND_BL_FROM_PTR_R8_(VALUE) and bl, byte ptr [r8 + VALUE]
#define AND_BL_FROM_PTR_R9_(VALUE) and bl, byte ptr [r9 + VALUE]
#define AND_BL_FROM_PTR_R10_(VALUE) and bl, byte ptr [r10 + VALUE]
#define AND_BL_FROM_PTR_R11_(VALUE) and bl, byte ptr [r11 + VALUE]
#define AND_BL_FROM_PTR_R12_(VALUE) and bl, byte ptr [r12 + VALUE]
#define AND_BL_FROM_PTR_R13_(VALUE) and bl, byte ptr [r13 + VALUE]
#define AND_BL_FROM_PTR_R14_(VALUE) and bl, byte ptr [r14 + VALUE]
#define AND_BL_FROM_PTR_R15_(VALUE) and bl, byte ptr [r15 + VALUE]
#define AND_BL_FROM_PTR_EAX_(VALUE) and bl, byte ptr [eax + VALUE]
#define AND_BL_FROM_PTR_EBX_(VALUE) and bl, byte ptr [ebx + VALUE]
#define AND_BL_FROM_PTR_ECX_(VALUE) and bl, byte ptr [ecx + VALUE]
#define AND_BL_FROM_PTR_EDX_(VALUE) and bl, byte ptr [edx + VALUE]
#define AND_BL_FROM_PTR_EDI_(VALUE) and bl, byte ptr [edi + VALUE]
#define AND_BL_FROM_PTR_ESI_(VALUE) and bl, byte ptr [esi + VALUE]
#define AND_BL_FROM_PTR_EBP_(VALUE) and bl, byte ptr [ebp + VALUE]
#define AND_BL_FROM_PTR_ESP_(VALUE) and bl, byte ptr [esp + VALUE]

#define AND_CL_FROM_PTR_RAX_(VALUE) and cl, byte ptr [rax + VALUE]
#define AND_CL_FROM_PTR_RBX_(VALUE) and cl, byte ptr [rbx + VALUE]
#define AND_CL_FROM_PTR_RCX_(VALUE) and cl, byte ptr [rcx + VALUE]
#define AND_CL_FROM_PTR_RDX_(VALUE) and cl, byte ptr [rdx + VALUE]
#define AND_CL_FROM_PTR_RDI_(VALUE) and cl, byte ptr [rdi + VALUE]
#define AND_CL_FROM_PTR_RSI_(VALUE) and cl, byte ptr [rsi + VALUE]
#define AND_CL_FROM_PTR_RBP_(VALUE) and cl, byte ptr [rbp + VALUE]
#define AND_CL_FROM_PTR_RSP_(VALUE) and cl, byte ptr [rsp + VALUE]
#define AND_CL_FROM_PTR_R8_(VALUE) and cl, byte ptr [r8 + VALUE]
#define AND_CL_FROM_PTR_R9_(VALUE) and cl, byte ptr [r9 + VALUE]
#define AND_CL_FROM_PTR_R10_(VALUE) and cl, byte ptr [r10 + VALUE]
#define AND_CL_FROM_PTR_R11_(VALUE) and cl, byte ptr [r11 + VALUE]
#define AND_CL_FROM_PTR_R12_(VALUE) and cl, byte ptr [r12 + VALUE]
#define AND_CL_FROM_PTR_R13_(VALUE) and cl, byte ptr [r13 + VALUE]
#define AND_CL_FROM_PTR_R14_(VALUE) and cl, byte ptr [r14 + VALUE]
#define AND_CL_FROM_PTR_R15_(VALUE) and cl, byte ptr [r15 + VALUE]
#define AND_CL_FROM_PTR_EAX_(VALUE) and cl, byte ptr [eax + VALUE]
#define AND_CL_FROM_PTR_EBX_(VALUE) and cl, byte ptr [ebx + VALUE]
#define AND_CL_FROM_PTR_ECX_(VALUE) and cl, byte ptr [ecx + VALUE]
#define AND_CL_FROM_PTR_EDX_(VALUE) and cl, byte ptr [edx + VALUE]
#define AND_CL_FROM_PTR_EDI_(VALUE) and cl, byte ptr [edi + VALUE]
#define AND_CL_FROM_PTR_ESI_(VALUE) and cl, byte ptr [esi + VALUE]
#define AND_CL_FROM_PTR_EBP_(VALUE) and cl, byte ptr [ebp + VALUE]
#define AND_CL_FROM_PTR_ESP_(VALUE) and cl, byte ptr [esp + VALUE]

#define AND_DL_FROM_PTR_RAX_(VALUE) and dl, byte ptr [rax + VALUE]
#define AND_DL_FROM_PTR_RBX_(VALUE) and dl, byte ptr [rbx + VALUE]
#define AND_DL_FROM_PTR_RCX_(VALUE) and dl, byte ptr [rcx + VALUE]
#define AND_DL_FROM_PTR_RDX_(VALUE) and dl, byte ptr [rdx + VALUE]
#define AND_DL_FROM_PTR_RDI_(VALUE) and dl, byte ptr [rdi + VALUE]
#define AND_DL_FROM_PTR_RSI_(VALUE) and dl, byte ptr [rsi + VALUE]
#define AND_DL_FROM_PTR_RBP_(VALUE) and dl, byte ptr [rbp + VALUE]
#define AND_DL_FROM_PTR_RSP_(VALUE) and dl, byte ptr [rsp + VALUE]
#define AND_DL_FROM_PTR_R8_(VALUE) and dl, byte ptr [r8 + VALUE]
#define AND_DL_FROM_PTR_R9_(VALUE) and dl, byte ptr [r9 + VALUE]
#define AND_DL_FROM_PTR_R10_(VALUE) and dl, byte ptr [r10 + VALUE]
#define AND_DL_FROM_PTR_R11_(VALUE) and dl, byte ptr [r11 + VALUE]
#define AND_DL_FROM_PTR_R12_(VALUE) and dl, byte ptr [r12 + VALUE]
#define AND_DL_FROM_PTR_R13_(VALUE) and dl, byte ptr [r13 + VALUE]
#define AND_DL_FROM_PTR_R14_(VALUE) and dl, byte ptr [r14 + VALUE]
#define AND_DL_FROM_PTR_R15_(VALUE) and dl, byte ptr [r15 + VALUE]
#define AND_DL_FROM_PTR_EAX_(VALUE) and dl, byte ptr [eax + VALUE]
#define AND_DL_FROM_PTR_EBX_(VALUE) and dl, byte ptr [ebx + VALUE]
#define AND_DL_FROM_PTR_ECX_(VALUE) and dl, byte ptr [ecx + VALUE]
#define AND_DL_FROM_PTR_EDX_(VALUE) and dl, byte ptr [edx + VALUE]
#define AND_DL_FROM_PTR_EDI_(VALUE) and dl, byte ptr [edi + VALUE]
#define AND_DL_FROM_PTR_ESI_(VALUE) and dl, byte ptr [esi + VALUE]
#define AND_DL_FROM_PTR_EBP_(VALUE) and dl, byte ptr [ebp + VALUE]
#define AND_DL_FROM_PTR_ESP_(VALUE) and dl, byte ptr [esp + VALUE]

#define AND_DIL_FROM_PTR_RAX_(VALUE) and dil, byte ptr [rax + VALUE]
#define AND_DIL_FROM_PTR_RBX_(VALUE) and dil, byte ptr [rbx + VALUE]
#define AND_DIL_FROM_PTR_RCX_(VALUE) and dil, byte ptr [rcx + VALUE]
#define AND_DIL_FROM_PTR_RDX_(VALUE) and dil, byte ptr [rdx + VALUE]
#define AND_DIL_FROM_PTR_RDI_(VALUE) and dil, byte ptr [rdi + VALUE]
#define AND_DIL_FROM_PTR_RSI_(VALUE) and dil, byte ptr [rsi + VALUE]
#define AND_DIL_FROM_PTR_RBP_(VALUE) and dil, byte ptr [rbp + VALUE]
#define AND_DIL_FROM_PTR_RSP_(VALUE) and dil, byte ptr [rsp + VALUE]
#define AND_DIL_FROM_PTR_R8_(VALUE) and dil, byte ptr [r8 + VALUE]
#define AND_DIL_FROM_PTR_R9_(VALUE) and dil, byte ptr [r9 + VALUE]
#define AND_DIL_FROM_PTR_R10_(VALUE) and dil, byte ptr [r10 + VALUE]
#define AND_DIL_FROM_PTR_R11_(VALUE) and dil, byte ptr [r11 + VALUE]
#define AND_DIL_FROM_PTR_R12_(VALUE) and dil, byte ptr [r12 + VALUE]
#define AND_DIL_FROM_PTR_R13_(VALUE) and dil, byte ptr [r13 + VALUE]
#define AND_DIL_FROM_PTR_R14_(VALUE) and dil, byte ptr [r14 + VALUE]
#define AND_DIL_FROM_PTR_R15_(VALUE) and dil, byte ptr [r15 + VALUE]
#define AND_DIL_FROM_PTR_EAX_(VALUE) and dil, byte ptr [eax + VALUE]
#define AND_DIL_FROM_PTR_EBX_(VALUE) and dil, byte ptr [ebx + VALUE]
#define AND_DIL_FROM_PTR_ECX_(VALUE) and dil, byte ptr [ecx + VALUE]
#define AND_DIL_FROM_PTR_EDX_(VALUE) and dil, byte ptr [edx + VALUE]
#define AND_DIL_FROM_PTR_EDI_(VALUE) and dil, byte ptr [edi + VALUE]
#define AND_DIL_FROM_PTR_ESI_(VALUE) and dil, byte ptr [esi + VALUE]
#define AND_DIL_FROM_PTR_EBP_(VALUE) and dil, byte ptr [ebp + VALUE]
#define AND_DIL_FROM_PTR_ESP_(VALUE) and dil, byte ptr [esp + VALUE]

#define AND_SIL_FROM_PTR_RAX_(VALUE) and sil, byte ptr [rax + VALUE]
#define AND_SIL_FROM_PTR_RBX_(VALUE) and sil, byte ptr [rbx + VALUE]
#define AND_SIL_FROM_PTR_RCX_(VALUE) and sil, byte ptr [rcx + VALUE]
#define AND_SIL_FROM_PTR_RDX_(VALUE) and sil, byte ptr [rdx + VALUE]
#define AND_SIL_FROM_PTR_RDI_(VALUE) and sil, byte ptr [rdi + VALUE]
#define AND_SIL_FROM_PTR_RSI_(VALUE) and sil, byte ptr [rsi + VALUE]
#define AND_SIL_FROM_PTR_RBP_(VALUE) and sil, byte ptr [rbp + VALUE]
#define AND_SIL_FROM_PTR_RSP_(VALUE) and sil, byte ptr [rsp + VALUE]
#define AND_SIL_FROM_PTR_R8_(VALUE) and sil, byte ptr [r8 + VALUE]
#define AND_SIL_FROM_PTR_R9_(VALUE) and sil, byte ptr [r9 + VALUE]
#define AND_SIL_FROM_PTR_R10_(VALUE) and sil, byte ptr [r10 + VALUE]
#define AND_SIL_FROM_PTR_R11_(VALUE) and sil, byte ptr [r11 + VALUE]
#define AND_SIL_FROM_PTR_R12_(VALUE) and sil, byte ptr [r12 + VALUE]
#define AND_SIL_FROM_PTR_R13_(VALUE) and sil, byte ptr [r13 + VALUE]
#define AND_SIL_FROM_PTR_R14_(VALUE) and sil, byte ptr [r14 + VALUE]
#define AND_SIL_FROM_PTR_R15_(VALUE) and sil, byte ptr [r15 + VALUE]
#define AND_SIL_FROM_PTR_EAX_(VALUE) and sil, byte ptr [eax + VALUE]
#define AND_SIL_FROM_PTR_EBX_(VALUE) and sil, byte ptr [ebx + VALUE]
#define AND_SIL_FROM_PTR_ECX_(VALUE) and sil, byte ptr [ecx + VALUE]
#define AND_SIL_FROM_PTR_EDX_(VALUE) and sil, byte ptr [edx + VALUE]
#define AND_SIL_FROM_PTR_EDI_(VALUE) and sil, byte ptr [edi + VALUE]
#define AND_SIL_FROM_PTR_ESI_(VALUE) and sil, byte ptr [esi + VALUE]
#define AND_SIL_FROM_PTR_EBP_(VALUE) and sil, byte ptr [ebp + VALUE]
#define AND_SIL_FROM_PTR_ESP_(VALUE) and sil, byte ptr [esp + VALUE]

#define AND_BPL_FROM_PTR_RAX_(VALUE) and bpl, byte ptr [rax + VALUE]
#define AND_BPL_FROM_PTR_RBX_(VALUE) and bpl, byte ptr [rbx + VALUE]
#define AND_BPL_FROM_PTR_RCX_(VALUE) and bpl, byte ptr [rcx + VALUE]
#define AND_BPL_FROM_PTR_RDX_(VALUE) and bpl, byte ptr [rdx + VALUE]
#define AND_BPL_FROM_PTR_RDI_(VALUE) and bpl, byte ptr [rdi + VALUE]
#define AND_BPL_FROM_PTR_RSI_(VALUE) and bpl, byte ptr [rsi + VALUE]
#define AND_BPL_FROM_PTR_RBP_(VALUE) and bpl, byte ptr [rbp + VALUE]
#define AND_BPL_FROM_PTR_RSP_(VALUE) and bpl, byte ptr [rsp + VALUE]
#define AND_BPL_FROM_PTR_R8_(VALUE) and bpl, byte ptr [r8 + VALUE]
#define AND_BPL_FROM_PTR_R9_(VALUE) and bpl, byte ptr [r9 + VALUE]
#define AND_BPL_FROM_PTR_R10_(VALUE) and bpl, byte ptr [r10 + VALUE]
#define AND_BPL_FROM_PTR_R11_(VALUE) and bpl, byte ptr [r11 + VALUE]
#define AND_BPL_FROM_PTR_R12_(VALUE) and bpl, byte ptr [r12 + VALUE]
#define AND_BPL_FROM_PTR_R13_(VALUE) and bpl, byte ptr [r13 + VALUE]
#define AND_BPL_FROM_PTR_R14_(VALUE) and bpl, byte ptr [r14 + VALUE]
#define AND_BPL_FROM_PTR_R15_(VALUE) and bpl, byte ptr [r15 + VALUE]
#define AND_BPL_FROM_PTR_EAX_(VALUE) and bpl, byte ptr [eax + VALUE]
#define AND_BPL_FROM_PTR_EBX_(VALUE) and bpl, byte ptr [ebx + VALUE]
#define AND_BPL_FROM_PTR_ECX_(VALUE) and bpl, byte ptr [ecx + VALUE]
#define AND_BPL_FROM_PTR_EDX_(VALUE) and bpl, byte ptr [edx + VALUE]
#define AND_BPL_FROM_PTR_EDI_(VALUE) and bpl, byte ptr [edi + VALUE]
#define AND_BPL_FROM_PTR_ESI_(VALUE) and bpl, byte ptr [esi + VALUE]
#define AND_BPL_FROM_PTR_EBP_(VALUE) and bpl, byte ptr [ebp + VALUE]
#define AND_BPL_FROM_PTR_ESP_(VALUE) and bpl, byte ptr [esp + VALUE]

#define AND_SPL_FROM_PTR_RAX_(VALUE) and spl, byte ptr [rax + VALUE]
#define AND_SPL_FROM_PTR_RBX_(VALUE) and spl, byte ptr [rbx + VALUE]
#define AND_SPL_FROM_PTR_RCX_(VALUE) and spl, byte ptr [rcx + VALUE]
#define AND_SPL_FROM_PTR_RDX_(VALUE) and spl, byte ptr [rdx + VALUE]
#define AND_SPL_FROM_PTR_RDI_(VALUE) and spl, byte ptr [rdi + VALUE]
#define AND_SPL_FROM_PTR_RSI_(VALUE) and spl, byte ptr [rsi + VALUE]
#define AND_SPL_FROM_PTR_RBP_(VALUE) and spl, byte ptr [rbp + VALUE]
#define AND_SPL_FROM_PTR_RSP_(VALUE) and spl, byte ptr [rsp + VALUE]
#define AND_SPL_FROM_PTR_R8_(VALUE) and spl, byte ptr [r8 + VALUE]
#define AND_SPL_FROM_PTR_R9_(VALUE) and spl, byte ptr [r9 + VALUE]
#define AND_SPL_FROM_PTR_R10_(VALUE) and spl, byte ptr [r10 + VALUE]
#define AND_SPL_FROM_PTR_R11_(VALUE) and spl, byte ptr [r11 + VALUE]
#define AND_SPL_FROM_PTR_R12_(VALUE) and spl, byte ptr [r12 + VALUE]
#define AND_SPL_FROM_PTR_R13_(VALUE) and spl, byte ptr [r13 + VALUE]
#define AND_SPL_FROM_PTR_R14_(VALUE) and spl, byte ptr [r14 + VALUE]
#define AND_SPL_FROM_PTR_R15_(VALUE) and spl, byte ptr [r15 + VALUE]
#define AND_SPL_FROM_PTR_EAX_(VALUE) and spl, byte ptr [eax + VALUE]
#define AND_SPL_FROM_PTR_EBX_(VALUE) and spl, byte ptr [ebx + VALUE]
#define AND_SPL_FROM_PTR_ECX_(VALUE) and spl, byte ptr [ecx + VALUE]
#define AND_SPL_FROM_PTR_EDX_(VALUE) and spl, byte ptr [edx + VALUE]
#define AND_SPL_FROM_PTR_EDI_(VALUE) and spl, byte ptr [edi + VALUE]
#define AND_SPL_FROM_PTR_ESI_(VALUE) and spl, byte ptr [esi + VALUE]
#define AND_SPL_FROM_PTR_EBP_(VALUE) and spl, byte ptr [ebp + VALUE]
#define AND_SPL_FROM_PTR_ESP_(VALUE) and spl, byte ptr [esp + VALUE]

#define AND_R8B_FROM_PTR_RAX_(VALUE) and r8b, byte ptr [rax + VALUE]
#define AND_R8B_FROM_PTR_RBX_(VALUE) and r8b, byte ptr [rbx + VALUE]
#define AND_R8B_FROM_PTR_RCX_(VALUE) and r8b, byte ptr [rcx + VALUE]
#define AND_R8B_FROM_PTR_RDX_(VALUE) and r8b, byte ptr [rdx + VALUE]
#define AND_R8B_FROM_PTR_RDI_(VALUE) and r8b, byte ptr [rdi + VALUE]
#define AND_R8B_FROM_PTR_RSI_(VALUE) and r8b, byte ptr [rsi + VALUE]
#define AND_R8B_FROM_PTR_RBP_(VALUE) and r8b, byte ptr [rbp + VALUE]
#define AND_R8B_FROM_PTR_RSP_(VALUE) and r8b, byte ptr [rsp + VALUE]
#define AND_R8B_FROM_PTR_R8_(VALUE) and r8b, byte ptr [r8 + VALUE]
#define AND_R8B_FROM_PTR_R9_(VALUE) and r8b, byte ptr [r9 + VALUE]
#define AND_R8B_FROM_PTR_R10_(VALUE) and r8b, byte ptr [r10 + VALUE]
#define AND_R8B_FROM_PTR_R11_(VALUE) and r8b, byte ptr [r11 + VALUE]
#define AND_R8B_FROM_PTR_R12_(VALUE) and r8b, byte ptr [r12 + VALUE]
#define AND_R8B_FROM_PTR_R13_(VALUE) and r8b, byte ptr [r13 + VALUE]
#define AND_R8B_FROM_PTR_R14_(VALUE) and r8b, byte ptr [r14 + VALUE]
#define AND_R8B_FROM_PTR_R15_(VALUE) and r8b, byte ptr [r15 + VALUE]
#define AND_R8B_FROM_PTR_EAX_(VALUE) and r8b, byte ptr [eax + VALUE]
#define AND_R8B_FROM_PTR_EBX_(VALUE) and r8b, byte ptr [ebx + VALUE]
#define AND_R8B_FROM_PTR_ECX_(VALUE) and r8b, byte ptr [ecx + VALUE]
#define AND_R8B_FROM_PTR_EDX_(VALUE) and r8b, byte ptr [edx + VALUE]
#define AND_R8B_FROM_PTR_EDI_(VALUE) and r8b, byte ptr [edi + VALUE]
#define AND_R8B_FROM_PTR_ESI_(VALUE) and r8b, byte ptr [esi + VALUE]
#define AND_R8B_FROM_PTR_EBP_(VALUE) and r8b, byte ptr [ebp + VALUE]
#define AND_R8B_FROM_PTR_ESP_(VALUE) and r8b, byte ptr [esp + VALUE]

#define AND_R9B_FROM_PTR_RAX_(VALUE) and r9b, byte ptr [rax + VALUE]
#define AND_R9B_FROM_PTR_RBX_(VALUE) and r9b, byte ptr [rbx + VALUE]
#define AND_R9B_FROM_PTR_RCX_(VALUE) and r9b, byte ptr [rcx + VALUE]
#define AND_R9B_FROM_PTR_RDX_(VALUE) and r9b, byte ptr [rdx + VALUE]
#define AND_R9B_FROM_PTR_RDI_(VALUE) and r9b, byte ptr [rdi + VALUE]
#define AND_R9B_FROM_PTR_RSI_(VALUE) and r9b, byte ptr [rsi + VALUE]
#define AND_R9B_FROM_PTR_RBP_(VALUE) and r9b, byte ptr [rbp + VALUE]
#define AND_R9B_FROM_PTR_RSP_(VALUE) and r9b, byte ptr [rsp + VALUE]
#define AND_R9B_FROM_PTR_R8_(VALUE) and r9b, byte ptr [r8 + VALUE]
#define AND_R9B_FROM_PTR_R9_(VALUE) and r9b, byte ptr [r9 + VALUE]
#define AND_R9B_FROM_PTR_R10_(VALUE) and r9b, byte ptr [r10 + VALUE]
#define AND_R9B_FROM_PTR_R11_(VALUE) and r9b, byte ptr [r11 + VALUE]
#define AND_R9B_FROM_PTR_R12_(VALUE) and r9b, byte ptr [r12 + VALUE]
#define AND_R9B_FROM_PTR_R13_(VALUE) and r9b, byte ptr [r13 + VALUE]
#define AND_R9B_FROM_PTR_R14_(VALUE) and r9b, byte ptr [r14 + VALUE]
#define AND_R9B_FROM_PTR_R15_(VALUE) and r9b, byte ptr [r15 + VALUE]
#define AND_R9B_FROM_PTR_EAX_(VALUE) and r9b, byte ptr [eax + VALUE]
#define AND_R9B_FROM_PTR_EBX_(VALUE) and r9b, byte ptr [ebx + VALUE]
#define AND_R9B_FROM_PTR_ECX_(VALUE) and r9b, byte ptr [ecx + VALUE]
#define AND_R9B_FROM_PTR_EDX_(VALUE) and r9b, byte ptr [edx + VALUE]
#define AND_R9B_FROM_PTR_EDI_(VALUE) and r9b, byte ptr [edi + VALUE]
#define AND_R9B_FROM_PTR_ESI_(VALUE) and r9b, byte ptr [esi + VALUE]
#define AND_R9B_FROM_PTR_EBP_(VALUE) and r9b, byte ptr [ebp + VALUE]
#define AND_R9B_FROM_PTR_ESP_(VALUE) and r9b, byte ptr [esp + VALUE]

#define AND_R10B_FROM_PTR_RAX_(VALUE) and r10b, byte ptr [rax + VALUE]
#define AND_R10B_FROM_PTR_RBX_(VALUE) and r10b, byte ptr [rbx + VALUE]
#define AND_R10B_FROM_PTR_RCX_(VALUE) and r10b, byte ptr [rcx + VALUE]
#define AND_R10B_FROM_PTR_RDX_(VALUE) and r10b, byte ptr [rdx + VALUE]
#define AND_R10B_FROM_PTR_RDI_(VALUE) and r10b, byte ptr [rdi + VALUE]
#define AND_R10B_FROM_PTR_RSI_(VALUE) and r10b, byte ptr [rsi + VALUE]
#define AND_R10B_FROM_PTR_RBP_(VALUE) and r10b, byte ptr [rbp + VALUE]
#define AND_R10B_FROM_PTR_RSP_(VALUE) and r10b, byte ptr [rsp + VALUE]
#define AND_R10B_FROM_PTR_R8_(VALUE) and r10b, byte ptr [r8 + VALUE]
#define AND_R10B_FROM_PTR_R9_(VALUE) and r10b, byte ptr [r9 + VALUE]
#define AND_R10B_FROM_PTR_R10_(VALUE) and r10b, byte ptr [r10 + VALUE]
#define AND_R10B_FROM_PTR_R11_(VALUE) and r10b, byte ptr [r11 + VALUE]
#define AND_R10B_FROM_PTR_R12_(VALUE) and r10b, byte ptr [r12 + VALUE]
#define AND_R10B_FROM_PTR_R13_(VALUE) and r10b, byte ptr [r13 + VALUE]
#define AND_R10B_FROM_PTR_R14_(VALUE) and r10b, byte ptr [r14 + VALUE]
#define AND_R10B_FROM_PTR_R15_(VALUE) and r10b, byte ptr [r15 + VALUE]
#define AND_R10B_FROM_PTR_EAX_(VALUE) and r10b, byte ptr [eax + VALUE]
#define AND_R10B_FROM_PTR_EBX_(VALUE) and r10b, byte ptr [ebx + VALUE]
#define AND_R10B_FROM_PTR_ECX_(VALUE) and r10b, byte ptr [ecx + VALUE]
#define AND_R10B_FROM_PTR_EDX_(VALUE) and r10b, byte ptr [edx + VALUE]
#define AND_R10B_FROM_PTR_EDI_(VALUE) and r10b, byte ptr [edi + VALUE]
#define AND_R10B_FROM_PTR_ESI_(VALUE) and r10b, byte ptr [esi + VALUE]
#define AND_R10B_FROM_PTR_EBP_(VALUE) and r10b, byte ptr [ebp + VALUE]
#define AND_R10B_FROM_PTR_ESP_(VALUE) and r10b, byte ptr [esp + VALUE]

#define AND_R11B_FROM_PTR_RAX_(VALUE) and r11b, byte ptr [rax + VALUE]
#define AND_R11B_FROM_PTR_RBX_(VALUE) and r11b, byte ptr [rbx + VALUE]
#define AND_R11B_FROM_PTR_RCX_(VALUE) and r11b, byte ptr [rcx + VALUE]
#define AND_R11B_FROM_PTR_RDX_(VALUE) and r11b, byte ptr [rdx + VALUE]
#define AND_R11B_FROM_PTR_RDI_(VALUE) and r11b, byte ptr [rdi + VALUE]
#define AND_R11B_FROM_PTR_RSI_(VALUE) and r11b, byte ptr [rsi + VALUE]
#define AND_R11B_FROM_PTR_RBP_(VALUE) and r11b, byte ptr [rbp + VALUE]
#define AND_R11B_FROM_PTR_RSP_(VALUE) and r11b, byte ptr [rsp + VALUE]
#define AND_R11B_FROM_PTR_R8_(VALUE) and r11b, byte ptr [r8 + VALUE]
#define AND_R11B_FROM_PTR_R9_(VALUE) and r11b, byte ptr [r9 + VALUE]
#define AND_R11B_FROM_PTR_R10_(VALUE) and r11b, byte ptr [r10 + VALUE]
#define AND_R11B_FROM_PTR_R11_(VALUE) and r11b, byte ptr [r11 + VALUE]
#define AND_R11B_FROM_PTR_R12_(VALUE) and r11b, byte ptr [r12 + VALUE]
#define AND_R11B_FROM_PTR_R13_(VALUE) and r11b, byte ptr [r13 + VALUE]
#define AND_R11B_FROM_PTR_R14_(VALUE) and r11b, byte ptr [r14 + VALUE]
#define AND_R11B_FROM_PTR_R15_(VALUE) and r11b, byte ptr [r15 + VALUE]
#define AND_R11B_FROM_PTR_EAX_(VALUE) and r11b, byte ptr [eax + VALUE]
#define AND_R11B_FROM_PTR_EBX_(VALUE) and r11b, byte ptr [ebx + VALUE]
#define AND_R11B_FROM_PTR_ECX_(VALUE) and r11b, byte ptr [ecx + VALUE]
#define AND_R11B_FROM_PTR_EDX_(VALUE) and r11b, byte ptr [edx + VALUE]
#define AND_R11B_FROM_PTR_EDI_(VALUE) and r11b, byte ptr [edi + VALUE]
#define AND_R11B_FROM_PTR_ESI_(VALUE) and r11b, byte ptr [esi + VALUE]
#define AND_R11B_FROM_PTR_EBP_(VALUE) and r11b, byte ptr [ebp + VALUE]
#define AND_R11B_FROM_PTR_ESP_(VALUE) and r11b, byte ptr [esp + VALUE]

#define AND_R12B_FROM_PTR_RAX_(VALUE) and r12b, byte ptr [rax + VALUE]
#define AND_R12B_FROM_PTR_RBX_(VALUE) and r12b, byte ptr [rbx + VALUE]
#define AND_R12B_FROM_PTR_RCX_(VALUE) and r12b, byte ptr [rcx + VALUE]
#define AND_R12B_FROM_PTR_RDX_(VALUE) and r12b, byte ptr [rdx + VALUE]
#define AND_R12B_FROM_PTR_RDI_(VALUE) and r12b, byte ptr [rdi + VALUE]
#define AND_R12B_FROM_PTR_RSI_(VALUE) and r12b, byte ptr [rsi + VALUE]
#define AND_R12B_FROM_PTR_RBP_(VALUE) and r12b, byte ptr [rbp + VALUE]
#define AND_R12B_FROM_PTR_RSP_(VALUE) and r12b, byte ptr [rsp + VALUE]
#define AND_R12B_FROM_PTR_R8_(VALUE) and r12b, byte ptr [r8 + VALUE]
#define AND_R12B_FROM_PTR_R9_(VALUE) and r12b, byte ptr [r9 + VALUE]
#define AND_R12B_FROM_PTR_R10_(VALUE) and r12b, byte ptr [r10 + VALUE]
#define AND_R12B_FROM_PTR_R11_(VALUE) and r12b, byte ptr [r11 + VALUE]
#define AND_R12B_FROM_PTR_R12_(VALUE) and r12b, byte ptr [r12 + VALUE]
#define AND_R12B_FROM_PTR_R13_(VALUE) and r12b, byte ptr [r13 + VALUE]
#define AND_R12B_FROM_PTR_R14_(VALUE) and r12b, byte ptr [r14 + VALUE]
#define AND_R12B_FROM_PTR_R15_(VALUE) and r12b, byte ptr [r15 + VALUE]
#define AND_R12B_FROM_PTR_EAX_(VALUE) and r12b, byte ptr [eax + VALUE]
#define AND_R12B_FROM_PTR_EBX_(VALUE) and r12b, byte ptr [ebx + VALUE]
#define AND_R12B_FROM_PTR_ECX_(VALUE) and r12b, byte ptr [ecx + VALUE]
#define AND_R12B_FROM_PTR_EDX_(VALUE) and r12b, byte ptr [edx + VALUE]
#define AND_R12B_FROM_PTR_EDI_(VALUE) and r12b, byte ptr [edi + VALUE]
#define AND_R12B_FROM_PTR_ESI_(VALUE) and r12b, byte ptr [esi + VALUE]
#define AND_R12B_FROM_PTR_EBP_(VALUE) and r12b, byte ptr [ebp + VALUE]
#define AND_R12B_FROM_PTR_ESP_(VALUE) and r12b, byte ptr [esp + VALUE]

#define AND_R13B_FROM_PTR_RAX_(VALUE) and r13b, byte ptr [rax + VALUE]
#define AND_R13B_FROM_PTR_RBX_(VALUE) and r13b, byte ptr [rbx + VALUE]
#define AND_R13B_FROM_PTR_RCX_(VALUE) and r13b, byte ptr [rcx + VALUE]
#define AND_R13B_FROM_PTR_RDX_(VALUE) and r13b, byte ptr [rdx + VALUE]
#define AND_R13B_FROM_PTR_RDI_(VALUE) and r13b, byte ptr [rdi + VALUE]
#define AND_R13B_FROM_PTR_RSI_(VALUE) and r13b, byte ptr [rsi + VALUE]
#define AND_R13B_FROM_PTR_RBP_(VALUE) and r13b, byte ptr [rbp + VALUE]
#define AND_R13B_FROM_PTR_RSP_(VALUE) and r13b, byte ptr [rsp + VALUE]
#define AND_R13B_FROM_PTR_R8_(VALUE) and r13b, byte ptr [r8 + VALUE]
#define AND_R13B_FROM_PTR_R9_(VALUE) and r13b, byte ptr [r9 + VALUE]
#define AND_R13B_FROM_PTR_R10_(VALUE) and r13b, byte ptr [r10 + VALUE]
#define AND_R13B_FROM_PTR_R11_(VALUE) and r13b, byte ptr [r11 + VALUE]
#define AND_R13B_FROM_PTR_R12_(VALUE) and r13b, byte ptr [r12 + VALUE]
#define AND_R13B_FROM_PTR_R13_(VALUE) and r13b, byte ptr [r13 + VALUE]
#define AND_R13B_FROM_PTR_R14_(VALUE) and r13b, byte ptr [r14 + VALUE]
#define AND_R13B_FROM_PTR_R15_(VALUE) and r13b, byte ptr [r15 + VALUE]
#define AND_R13B_FROM_PTR_EAX_(VALUE) and r13b, byte ptr [eax + VALUE]
#define AND_R13B_FROM_PTR_EBX_(VALUE) and r13b, byte ptr [ebx + VALUE]
#define AND_R13B_FROM_PTR_ECX_(VALUE) and r13b, byte ptr [ecx + VALUE]
#define AND_R13B_FROM_PTR_EDX_(VALUE) and r13b, byte ptr [edx + VALUE]
#define AND_R13B_FROM_PTR_EDI_(VALUE) and r13b, byte ptr [edi + VALUE]
#define AND_R13B_FROM_PTR_ESI_(VALUE) and r13b, byte ptr [esi + VALUE]
#define AND_R13B_FROM_PTR_EBP_(VALUE) and r13b, byte ptr [ebp + VALUE]
#define AND_R13B_FROM_PTR_ESP_(VALUE) and r13b, byte ptr [esp + VALUE]

#define AND_R14B_FROM_PTR_RAX_(VALUE) and r14b, byte ptr [rax + VALUE]
#define AND_R14B_FROM_PTR_RBX_(VALUE) and r14b, byte ptr [rbx + VALUE]
#define AND_R14B_FROM_PTR_RCX_(VALUE) and r14b, byte ptr [rcx + VALUE]
#define AND_R14B_FROM_PTR_RDX_(VALUE) and r14b, byte ptr [rdx + VALUE]
#define AND_R14B_FROM_PTR_RDI_(VALUE) and r14b, byte ptr [rdi + VALUE]
#define AND_R14B_FROM_PTR_RSI_(VALUE) and r14b, byte ptr [rsi + VALUE]
#define AND_R14B_FROM_PTR_RBP_(VALUE) and r14b, byte ptr [rbp + VALUE]
#define AND_R14B_FROM_PTR_RSP_(VALUE) and r14b, byte ptr [rsp + VALUE]
#define AND_R14B_FROM_PTR_R8_(VALUE) and r14b, byte ptr [r8 + VALUE]
#define AND_R14B_FROM_PTR_R9_(VALUE) and r14b, byte ptr [r9 + VALUE]
#define AND_R14B_FROM_PTR_R10_(VALUE) and r14b, byte ptr [r10 + VALUE]
#define AND_R14B_FROM_PTR_R11_(VALUE) and r14b, byte ptr [r11 + VALUE]
#define AND_R14B_FROM_PTR_R12_(VALUE) and r14b, byte ptr [r12 + VALUE]
#define AND_R14B_FROM_PTR_R13_(VALUE) and r14b, byte ptr [r13 + VALUE]
#define AND_R14B_FROM_PTR_R14_(VALUE) and r14b, byte ptr [r14 + VALUE]
#define AND_R14B_FROM_PTR_R15_(VALUE) and r14b, byte ptr [r15 + VALUE]
#define AND_R14B_FROM_PTR_EAX_(VALUE) and r14b, byte ptr [eax + VALUE]
#define AND_R14B_FROM_PTR_EBX_(VALUE) and r14b, byte ptr [ebx + VALUE]
#define AND_R14B_FROM_PTR_ECX_(VALUE) and r14b, byte ptr [ecx + VALUE]
#define AND_R14B_FROM_PTR_EDX_(VALUE) and r14b, byte ptr [edx + VALUE]
#define AND_R14B_FROM_PTR_EDI_(VALUE) and r14b, byte ptr [edi + VALUE]
#define AND_R14B_FROM_PTR_ESI_(VALUE) and r14b, byte ptr [esi + VALUE]
#define AND_R14B_FROM_PTR_EBP_(VALUE) and r14b, byte ptr [ebp + VALUE]
#define AND_R14B_FROM_PTR_ESP_(VALUE) and r14b, byte ptr [esp + VALUE]

#define AND_R15B_FROM_PTR_RAX_(VALUE) and r15b, byte ptr [rax + VALUE]
#define AND_R15B_FROM_PTR_RBX_(VALUE) and r15b, byte ptr [rbx + VALUE]
#define AND_R15B_FROM_PTR_RCX_(VALUE) and r15b, byte ptr [rcx + VALUE]
#define AND_R15B_FROM_PTR_RDX_(VALUE) and r15b, byte ptr [rdx + VALUE]
#define AND_R15B_FROM_PTR_RDI_(VALUE) and r15b, byte ptr [rdi + VALUE]
#define AND_R15B_FROM_PTR_RSI_(VALUE) and r15b, byte ptr [rsi + VALUE]
#define AND_R15B_FROM_PTR_RBP_(VALUE) and r15b, byte ptr [rbp + VALUE]
#define AND_R15B_FROM_PTR_RSP_(VALUE) and r15b, byte ptr [rsp + VALUE]
#define AND_R15B_FROM_PTR_R8_(VALUE) and r15b, byte ptr [r8 + VALUE]
#define AND_R15B_FROM_PTR_R9_(VALUE) and r15b, byte ptr [r9 + VALUE]
#define AND_R15B_FROM_PTR_R10_(VALUE) and r15b, byte ptr [r10 + VALUE]
#define AND_R15B_FROM_PTR_R11_(VALUE) and r15b, byte ptr [r11 + VALUE]
#define AND_R15B_FROM_PTR_R12_(VALUE) and r15b, byte ptr [r12 + VALUE]
#define AND_R15B_FROM_PTR_R13_(VALUE) and r15b, byte ptr [r13 + VALUE]
#define AND_R15B_FROM_PTR_R14_(VALUE) and r15b, byte ptr [r14 + VALUE]
#define AND_R15B_FROM_PTR_R15_(VALUE) and r15b, byte ptr [r15 + VALUE]
#define AND_R15B_FROM_PTR_EAX_(VALUE) and r15b, byte ptr [eax + VALUE]
#define AND_R15B_FROM_PTR_EBX_(VALUE) and r15b, byte ptr [ebx + VALUE]
#define AND_R15B_FROM_PTR_ECX_(VALUE) and r15b, byte ptr [ecx + VALUE]
#define AND_R15B_FROM_PTR_EDX_(VALUE) and r15b, byte ptr [edx + VALUE]
#define AND_R15B_FROM_PTR_EDI_(VALUE) and r15b, byte ptr [edi + VALUE]
#define AND_R15B_FROM_PTR_ESI_(VALUE) and r15b, byte ptr [esi + VALUE]
#define AND_R15B_FROM_PTR_EBP_(VALUE) and r15b, byte ptr [ebp + VALUE]
#define AND_R15B_FROM_PTR_ESP_(VALUE) and r15b, byte ptr [esp + VALUE]

#define AND_AL_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], al
#define AND_AL_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], al
#define AND_AL_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], al
#define AND_AL_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], al
#define AND_AL_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], al
#define AND_AL_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], al
#define AND_AL_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], al
#define AND_AL_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], al
#define AND_AL_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], al
#define AND_AL_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], al
#define AND_AL_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], al
#define AND_AL_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], al
#define AND_AL_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], al
#define AND_AL_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], al
#define AND_AL_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], al
#define AND_AL_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], al
#define AND_AL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], al
#define AND_AL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], al
#define AND_AL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], al
#define AND_AL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], al
#define AND_AL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], al
#define AND_AL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], al
#define AND_AL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], al
#define AND_AL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], al

#define AND_BL_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], bl
#define AND_BL_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], bl
#define AND_BL_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], bl
#define AND_BL_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], bl
#define AND_BL_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], bl
#define AND_BL_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], bl
#define AND_BL_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], bl
#define AND_BL_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], bl
#define AND_BL_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], bl
#define AND_BL_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], bl
#define AND_BL_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], bl
#define AND_BL_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], bl
#define AND_BL_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], bl
#define AND_BL_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], bl
#define AND_BL_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], bl
#define AND_BL_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], bl
#define AND_BL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], bl
#define AND_BL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], bl
#define AND_BL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], bl
#define AND_BL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], bl
#define AND_BL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], bl
#define AND_BL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], bl
#define AND_BL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], bl
#define AND_BL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], bl

#define AND_CL_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], cl
#define AND_CL_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], cl
#define AND_CL_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], cl
#define AND_CL_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], cl
#define AND_CL_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], cl
#define AND_CL_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], cl
#define AND_CL_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], cl
#define AND_CL_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], cl
#define AND_CL_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], cl
#define AND_CL_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], cl
#define AND_CL_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], cl
#define AND_CL_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], cl
#define AND_CL_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], cl
#define AND_CL_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], cl
#define AND_CL_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], cl
#define AND_CL_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], cl
#define AND_CL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], cl
#define AND_CL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], cl
#define AND_CL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], cl
#define AND_CL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], cl
#define AND_CL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], cl
#define AND_CL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], cl
#define AND_CL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], cl
#define AND_CL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], cl

#define AND_DL_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], dl
#define AND_DL_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], dl
#define AND_DL_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], dl
#define AND_DL_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], dl
#define AND_DL_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], dl
#define AND_DL_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], dl
#define AND_DL_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], dl
#define AND_DL_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], dl
#define AND_DL_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], dl
#define AND_DL_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], dl
#define AND_DL_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], dl
#define AND_DL_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], dl
#define AND_DL_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], dl
#define AND_DL_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], dl
#define AND_DL_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], dl
#define AND_DL_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], dl
#define AND_DL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], dl
#define AND_DL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], dl
#define AND_DL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], dl
#define AND_DL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], dl
#define AND_DL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], dl
#define AND_DL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], dl
#define AND_DL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], dl
#define AND_DL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], dl

#define AND_DIL_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], dil
#define AND_DIL_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], dil
#define AND_DIL_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], dil
#define AND_DIL_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], dil
#define AND_DIL_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], dil
#define AND_DIL_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], dil
#define AND_DIL_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], dil
#define AND_DIL_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], dil
#define AND_DIL_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], dil
#define AND_DIL_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], dil
#define AND_DIL_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], dil
#define AND_DIL_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], dil
#define AND_DIL_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], dil
#define AND_DIL_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], dil
#define AND_DIL_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], dil
#define AND_DIL_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], dil
#define AND_DIL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], dil
#define AND_DIL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], dil
#define AND_DIL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], dil
#define AND_DIL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], dil
#define AND_DIL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], dil
#define AND_DIL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], dil
#define AND_DIL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], dil
#define AND_DIL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], dil

#define AND_SIL_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], sil
#define AND_SIL_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], sil
#define AND_SIL_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], sil
#define AND_SIL_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], sil
#define AND_SIL_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], sil
#define AND_SIL_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], sil
#define AND_SIL_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], sil
#define AND_SIL_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], sil
#define AND_SIL_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], sil
#define AND_SIL_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], sil
#define AND_SIL_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], sil
#define AND_SIL_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], sil
#define AND_SIL_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], sil
#define AND_SIL_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], sil
#define AND_SIL_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], sil
#define AND_SIL_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], sil
#define AND_SIL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], sil
#define AND_SIL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], sil
#define AND_SIL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], sil
#define AND_SIL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], sil
#define AND_SIL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], sil
#define AND_SIL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], sil
#define AND_SIL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], sil
#define AND_SIL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], sil

#define AND_BPL_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], bpl
#define AND_BPL_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], bpl
#define AND_BPL_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], bpl
#define AND_BPL_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], bpl
#define AND_BPL_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], bpl
#define AND_BPL_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], bpl
#define AND_BPL_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], bpl
#define AND_BPL_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], bpl
#define AND_BPL_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], bpl
#define AND_BPL_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], bpl
#define AND_BPL_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], bpl
#define AND_BPL_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], bpl
#define AND_BPL_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], bpl
#define AND_BPL_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], bpl
#define AND_BPL_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], bpl
#define AND_BPL_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], bpl
#define AND_BPL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], bpl
#define AND_BPL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], bpl
#define AND_BPL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], bpl
#define AND_BPL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], bpl
#define AND_BPL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], bpl
#define AND_BPL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], bpl
#define AND_BPL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], bpl
#define AND_BPL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], bpl

#define AND_SPL_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], spl
#define AND_SPL_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], spl
#define AND_SPL_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], spl
#define AND_SPL_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], spl
#define AND_SPL_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], spl
#define AND_SPL_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], spl
#define AND_SPL_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], spl
#define AND_SPL_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], spl
#define AND_SPL_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], spl
#define AND_SPL_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], spl
#define AND_SPL_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], spl
#define AND_SPL_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], spl
#define AND_SPL_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], spl
#define AND_SPL_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], spl
#define AND_SPL_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], spl
#define AND_SPL_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], spl
#define AND_SPL_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], spl
#define AND_SPL_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], spl
#define AND_SPL_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], spl
#define AND_SPL_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], spl
#define AND_SPL_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], spl
#define AND_SPL_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], spl
#define AND_SPL_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], spl
#define AND_SPL_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], spl

#define AND_R8B_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], r8b
#define AND_R8B_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], r8b
#define AND_R8B_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], r8b
#define AND_R8B_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], r8b
#define AND_R8B_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], r8b
#define AND_R8B_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], r8b
#define AND_R8B_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], r8b
#define AND_R8B_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], r8b
#define AND_R8B_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], r8b
#define AND_R8B_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], r8b
#define AND_R8B_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], r8b
#define AND_R8B_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], r8b
#define AND_R8B_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], r8b
#define AND_R8B_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], r8b
#define AND_R8B_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], r8b
#define AND_R8B_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], r8b
#define AND_R8B_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], r8b
#define AND_R8B_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], r8b
#define AND_R8B_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], r8b
#define AND_R8B_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], r8b
#define AND_R8B_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], r8b
#define AND_R8B_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], r8b
#define AND_R8B_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], r8b
#define AND_R8B_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], r8b

#define AND_R9B_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], r9b
#define AND_R9B_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], r9b
#define AND_R9B_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], r9b
#define AND_R9B_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], r9b
#define AND_R9B_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], r9b
#define AND_R9B_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], r9b
#define AND_R9B_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], r9b
#define AND_R9B_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], r9b
#define AND_R9B_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], r9b
#define AND_R9B_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], r9b
#define AND_R9B_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], r9b
#define AND_R9B_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], r9b
#define AND_R9B_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], r9b
#define AND_R9B_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], r9b
#define AND_R9B_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], r9b
#define AND_R9B_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], r9b
#define AND_R9B_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], r9b
#define AND_R9B_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], r9b
#define AND_R9B_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], r9b
#define AND_R9B_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], r9b
#define AND_R9B_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], r9b
#define AND_R9B_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], r9b
#define AND_R9B_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], r9b
#define AND_R9B_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], r9b

#define AND_R10B_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], r10b
#define AND_R10B_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], r10b
#define AND_R10B_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], r10b
#define AND_R10B_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], r10b
#define AND_R10B_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], r10b
#define AND_R10B_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], r10b
#define AND_R10B_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], r10b
#define AND_R10B_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], r10b
#define AND_R10B_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], r10b
#define AND_R10B_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], r10b
#define AND_R10B_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], r10b
#define AND_R10B_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], r10b
#define AND_R10B_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], r10b
#define AND_R10B_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], r10b
#define AND_R10B_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], r10b
#define AND_R10B_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], r10b
#define AND_R10B_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], r10b
#define AND_R10B_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], r10b
#define AND_R10B_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], r10b
#define AND_R10B_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], r10b
#define AND_R10B_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], r10b
#define AND_R10B_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], r10b
#define AND_R10B_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], r10b
#define AND_R10B_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], r10b

#define AND_R11B_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], r11b
#define AND_R11B_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], r11b
#define AND_R11B_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], r11b
#define AND_R11B_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], r11b
#define AND_R11B_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], r11b
#define AND_R11B_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], r11b
#define AND_R11B_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], r11b
#define AND_R11B_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], r11b
#define AND_R11B_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], r11b
#define AND_R11B_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], r11b
#define AND_R11B_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], r11b
#define AND_R11B_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], r11b
#define AND_R11B_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], r11b
#define AND_R11B_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], r11b
#define AND_R11B_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], r11b
#define AND_R11B_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], r11b
#define AND_R11B_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], r11b
#define AND_R11B_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], r11b
#define AND_R11B_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], r11b
#define AND_R11B_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], r11b
#define AND_R11B_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], r11b
#define AND_R11B_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], r11b
#define AND_R11B_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], r11b
#define AND_R11B_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], r11b

#define AND_R12B_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], r12b
#define AND_R12B_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], r12b
#define AND_R12B_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], r12b
#define AND_R12B_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], r12b
#define AND_R12B_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], r12b
#define AND_R12B_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], r12b
#define AND_R12B_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], r12b
#define AND_R12B_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], r12b
#define AND_R12B_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], r12b
#define AND_R12B_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], r12b
#define AND_R12B_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], r12b
#define AND_R12B_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], r12b
#define AND_R12B_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], r12b
#define AND_R12B_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], r12b
#define AND_R12B_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], r12b
#define AND_R12B_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], r12b
#define AND_R12B_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], r12b
#define AND_R12B_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], r12b
#define AND_R12B_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], r12b
#define AND_R12B_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], r12b
#define AND_R12B_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], r12b
#define AND_R12B_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], r12b
#define AND_R12B_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], r12b
#define AND_R12B_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], r12b

#define AND_R13B_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], r13b
#define AND_R13B_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], r13b
#define AND_R13B_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], r13b
#define AND_R13B_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], r13b
#define AND_R13B_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], r13b
#define AND_R13B_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], r13b
#define AND_R13B_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], r13b
#define AND_R13B_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], r13b
#define AND_R13B_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], r13b
#define AND_R13B_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], r13b
#define AND_R13B_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], r13b
#define AND_R13B_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], r13b
#define AND_R13B_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], r13b
#define AND_R13B_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], r13b
#define AND_R13B_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], r13b
#define AND_R13B_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], r13b
#define AND_R13B_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], r13b
#define AND_R13B_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], r13b
#define AND_R13B_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], r13b
#define AND_R13B_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], r13b
#define AND_R13B_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], r13b
#define AND_R13B_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], r13b
#define AND_R13B_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], r13b
#define AND_R13B_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], r13b

#define AND_R14B_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], r14b
#define AND_R14B_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], r14b
#define AND_R14B_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], r14b
#define AND_R14B_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], r14b
#define AND_R14B_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], r14b
#define AND_R14B_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], r14b
#define AND_R14B_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], r14b
#define AND_R14B_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], r14b
#define AND_R14B_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], r14b
#define AND_R14B_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], r14b
#define AND_R14B_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], r14b
#define AND_R14B_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], r14b
#define AND_R14B_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], r14b
#define AND_R14B_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], r14b
#define AND_R14B_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], r14b
#define AND_R14B_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], r14b
#define AND_R14B_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], r14b
#define AND_R14B_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], r14b
#define AND_R14B_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], r14b
#define AND_R14B_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], r14b
#define AND_R14B_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], r14b
#define AND_R14B_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], r14b
#define AND_R14B_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], r14b
#define AND_R14B_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], r14b

#define AND_R15B_TO_PTR_RAX_(VALUE) and byte ptr [rax + VALUE], r15b
#define AND_R15B_TO_PTR_RBX_(VALUE) and byte ptr [rbx + VALUE], r15b
#define AND_R15B_TO_PTR_RCX_(VALUE) and byte ptr [rcx + VALUE], r15b
#define AND_R15B_TO_PTR_RDX_(VALUE) and byte ptr [rdx + VALUE], r15b
#define AND_R15B_TO_PTR_RDI_(VALUE) and byte ptr [rdi + VALUE], r15b
#define AND_R15B_TO_PTR_RSI_(VALUE) and byte ptr [rsi + VALUE], r15b
#define AND_R15B_TO_PTR_RBP_(VALUE) and byte ptr [rbp + VALUE], r15b
#define AND_R15B_TO_PTR_RSP_(VALUE) and byte ptr [rsp + VALUE], r15b
#define AND_R15B_TO_PTR_R8_(VALUE) and byte ptr [r8 + VALUE], r15b
#define AND_R15B_TO_PTR_R9_(VALUE) and byte ptr [r9 + VALUE], r15b
#define AND_R15B_TO_PTR_R10_(VALUE) and byte ptr [r10 + VALUE], r15b
#define AND_R15B_TO_PTR_R11_(VALUE) and byte ptr [r11 + VALUE], r15b
#define AND_R15B_TO_PTR_R12_(VALUE) and byte ptr [r12 + VALUE], r15b
#define AND_R15B_TO_PTR_R13_(VALUE) and byte ptr [r13 + VALUE], r15b
#define AND_R15B_TO_PTR_R14_(VALUE) and byte ptr [r14 + VALUE], r15b
#define AND_R15B_TO_PTR_R15_(VALUE) and byte ptr [r15 + VALUE], r15b
#define AND_R15B_TO_PTR_EAX_(VALUE) and byte ptr [eax + VALUE], r15b
#define AND_R15B_TO_PTR_EBX_(VALUE) and byte ptr [ebx + VALUE], r15b
#define AND_R15B_TO_PTR_ECX_(VALUE) and byte ptr [ecx + VALUE], r15b
#define AND_R15B_TO_PTR_EDX_(VALUE) and byte ptr [edx + VALUE], r15b
#define AND_R15B_TO_PTR_EDI_(VALUE) and byte ptr [edi + VALUE], r15b
#define AND_R15B_TO_PTR_ESI_(VALUE) and byte ptr [esi + VALUE], r15b
#define AND_R15B_TO_PTR_EBP_(VALUE) and byte ptr [ebp + VALUE], r15b
#define AND_R15B_TO_PTR_ESP_(VALUE) and byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define AND_AX_FROM_PTR_(VALUE) and ax, word ptr [VALUE]
#define AND_BX_FROM_PTR_(VALUE) and bx, word ptr [VALUE]
#define AND_CX_FROM_PTR_(VALUE) and cx, word ptr [VALUE]
#define AND_DX_FROM_PTR_(VALUE) and dx, word ptr [VALUE]
#define AND_DI_FROM_PTR_(VALUE) and di, word ptr [VALUE]
#define AND_SI_FROM_PTR_(VALUE) and si, word ptr [VALUE]
#define AND_BP_FROM_PTR_(VALUE) and bp, word ptr [VALUE]
#define AND_SP_FROM_PTR_(VALUE) and sp, word ptr [VALUE]

#define AND_AX_TO_PTR_(VALUE) and word ptr [VALUE], ax
#define AND_BX_TO_PTR_(VALUE) and word ptr [VALUE], bx
#define AND_CX_TO_PTR_(VALUE) and word ptr [VALUE], cx
#define AND_DX_TO_PTR_(VALUE) and word ptr [VALUE], dx
#define AND_DI_TO_PTR_(VALUE) and word ptr [VALUE], di
#define AND_SI_TO_PTR_(VALUE) and word ptr [VALUE], si
#define AND_BP_TO_PTR_(VALUE) and word ptr [VALUE], bp
#define AND_SP_TO_PTR_(VALUE) and word ptr [VALUE], sp

#define AND_AX_FROM_PTR_BX and ax, word ptr [bx]
#define AND_AX_FROM_PTR_BP and ax, word ptr [bp]
#define AND_AX_FROM_PTR_SI and ax, word ptr [si]
#define AND_AX_FROM_PTR_DI and ax, word ptr [di]

#define AND_BX_FROM_PTR_BX and bx, word ptr [bx]
#define AND_BX_FROM_PTR_BP and bx, word ptr [bp]
#define AND_BX_FROM_PTR_SI and bx, word ptr [si]
#define AND_BX_FROM_PTR_DI and bx, word ptr [di]

#define AND_CX_FROM_PTR_BX and cx, word ptr [bx]
#define AND_CX_FROM_PTR_BP and cx, word ptr [bp]
#define AND_CX_FROM_PTR_SI and cx, word ptr [si]
#define AND_CX_FROM_PTR_DI and cx, word ptr [di]

#define AND_DX_FROM_PTR_BX and dx, word ptr [bx]
#define AND_DX_FROM_PTR_BP and dx, word ptr [bp]
#define AND_DX_FROM_PTR_SI and dx, word ptr [si]
#define AND_DX_FROM_PTR_DI and dx, word ptr [di]

#define AND_DI_FROM_PTR_BX and di, word ptr [bx]
#define AND_DI_FROM_PTR_BP and di, word ptr [bp]
#define AND_DI_FROM_PTR_SI and di, word ptr [si]
#define AND_DI_FROM_PTR_DI and di, word ptr [di]

#define AND_SI_FROM_PTR_BX and si, word ptr [bx]
#define AND_SI_FROM_PTR_BP and si, word ptr [bp]
#define AND_SI_FROM_PTR_SI and si, word ptr [si]
#define AND_SI_FROM_PTR_DI and si, word ptr [di]

#define AND_BP_FROM_PTR_BX and bp, word ptr [bx]
#define AND_BP_FROM_PTR_BP and bp, word ptr [bp]
#define AND_BP_FROM_PTR_SI and bp, word ptr [si]
#define AND_BP_FROM_PTR_DI and bp, word ptr [di]

#define AND_SP_FROM_PTR_BX and sp, word ptr [bx]
#define AND_SP_FROM_PTR_BP and sp, word ptr [bp]
#define AND_SP_FROM_PTR_SI and sp, word ptr [si]
#define AND_SP_FROM_PTR_DI and sp, word ptr [di]

#define AND_AX_TO_PTR_BX and word ptr [bx], ax
#define AND_AX_TO_PTR_BP and word ptr [bp], ax
#define AND_AX_TO_PTR_SI and word ptr [si], ax
#define AND_AX_TO_PTR_DI and word ptr [di], ax

#define AND_BX_TO_PTR_BX and word ptr [bx], bx
#define AND_BX_TO_PTR_BP and word ptr [bp], bx
#define AND_BX_TO_PTR_SI and word ptr [si], bx
#define AND_BX_TO_PTR_DI and word ptr [di], bx

#define AND_CX_TO_PTR_BX and word ptr [bx], cx
#define AND_CX_TO_PTR_BP and word ptr [bp], cx
#define AND_CX_TO_PTR_SI and word ptr [si], cx
#define AND_CX_TO_PTR_DI and word ptr [di], cx

#define AND_DX_TO_PTR_BX and word ptr [bx], dx
#define AND_DX_TO_PTR_BP and word ptr [bp], dx
#define AND_DX_TO_PTR_SI and word ptr [si], dx
#define AND_DX_TO_PTR_DI and word ptr [di], dx

#define AND_DI_TO_PTR_BX and word ptr [bx], di
#define AND_DI_TO_PTR_BP and word ptr [bp], di
#define AND_DI_TO_PTR_SI and word ptr [si], di
#define AND_DI_TO_PTR_DI and word ptr [di], di

#define AND_SI_TO_PTR_BX and word ptr [bx], si
#define AND_SI_TO_PTR_BP and word ptr [bp], si
#define AND_SI_TO_PTR_SI and word ptr [si], si
#define AND_SI_TO_PTR_DI and word ptr [di], si

#define AND_BP_TO_PTR_BX and word ptr [bx], bp
#define AND_BP_TO_PTR_BP and word ptr [bp], bp
#define AND_BP_TO_PTR_SI and word ptr [si], bp
#define AND_BP_TO_PTR_DI and word ptr [di], bp

#define AND_SP_TO_PTR_BX and word ptr [bx], sp
#define AND_SP_TO_PTR_BP and word ptr [bp], sp
#define AND_SP_TO_PTR_SI and word ptr [si], sp
#define AND_SP_TO_PTR_DI and word ptr [di], sp

#define AND_AX_FROM_PTR_BX_(VALUE) and ax, word ptr [bx + VALUE]
#define AND_AX_FROM_PTR_BP_(VALUE) and ax, word ptr [bp + VALUE]
#define AND_AX_FROM_PTR_SI_(VALUE) and ax, word ptr [si + VALUE]
#define AND_AX_FROM_PTR_DI_(VALUE) and ax, word ptr [di + VALUE]

#define AND_BX_FROM_PTR_BX_(VALUE) and bx, word ptr [bx + VALUE]
#define AND_BX_FROM_PTR_BP_(VALUE) and bx, word ptr [bp + VALUE]
#define AND_BX_FROM_PTR_SI_(VALUE) and bx, word ptr [si + VALUE]
#define AND_BX_FROM_PTR_DI_(VALUE) and bx, word ptr [di + VALUE]

#define AND_CX_FROM_PTR_BX_(VALUE) and cx, word ptr [bx + VALUE]
#define AND_CX_FROM_PTR_BP_(VALUE) and cx, word ptr [bp + VALUE]
#define AND_CX_FROM_PTR_SI_(VALUE) and cx, word ptr [si + VALUE]
#define AND_CX_FROM_PTR_DI_(VALUE) and cx, word ptr [di + VALUE]

#define AND_DX_FROM_PTR_BX_(VALUE) and dx, word ptr [bx + VALUE]
#define AND_DX_FROM_PTR_BP_(VALUE) and dx, word ptr [bp + VALUE]
#define AND_DX_FROM_PTR_SI_(VALUE) and dx, word ptr [si + VALUE]
#define AND_DX_FROM_PTR_DI_(VALUE) and dx, word ptr [di + VALUE]

#define AND_DI_FROM_PTR_BX_(VALUE) and di, word ptr [bx + VALUE]
#define AND_DI_FROM_PTR_BP_(VALUE) and di, word ptr [bp + VALUE]
#define AND_DI_FROM_PTR_SI_(VALUE) and di, word ptr [si + VALUE]
#define AND_DI_FROM_PTR_DI_(VALUE) and di, word ptr [di + VALUE]

#define AND_SI_FROM_PTR_BX_(VALUE) and si, word ptr [bx + VALUE]
#define AND_SI_FROM_PTR_BP_(VALUE) and si, word ptr [bp + VALUE]
#define AND_SI_FROM_PTR_SI_(VALUE) and si, word ptr [si + VALUE]
#define AND_SI_FROM_PTR_DI_(VALUE) and si, word ptr [di + VALUE]

#define AND_BP_FROM_PTR_BX_(VALUE) and bp, word ptr [bx + VALUE]
#define AND_BP_FROM_PTR_BP_(VALUE) and bp, word ptr [bp + VALUE]
#define AND_BP_FROM_PTR_SI_(VALUE) and bp, word ptr [si + VALUE]
#define AND_BP_FROM_PTR_DI_(VALUE) and bp, word ptr [di + VALUE]

#define AND_SP_FROM_PTR_BX_(VALUE) and sp, word ptr [bx + VALUE]
#define AND_SP_FROM_PTR_BP_(VALUE) and sp, word ptr [bp + VALUE]
#define AND_SP_FROM_PTR_SI_(VALUE) and sp, word ptr [si + VALUE]
#define AND_SP_FROM_PTR_DI_(VALUE) and sp, word ptr [di + VALUE]

#define AND_AX_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], ax
#define AND_AX_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], ax
#define AND_AX_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], ax
#define AND_AX_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], ax

#define AND_BX_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], bx
#define AND_BX_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], bx
#define AND_BX_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], bx
#define AND_BX_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], bx

#define AND_CX_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], cx
#define AND_CX_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], cx
#define AND_CX_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], cx
#define AND_CX_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], cx

#define AND_DX_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], dx
#define AND_DX_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], dx
#define AND_DX_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], dx
#define AND_DX_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], dx

#define AND_DI_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], di
#define AND_DI_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], di
#define AND_DI_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], di
#define AND_DI_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], di

#define AND_SI_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], si
#define AND_SI_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], si
#define AND_SI_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], si
#define AND_SI_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], si

#define AND_BP_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], bp
#define AND_BP_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], bp
#define AND_BP_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], bp
#define AND_BP_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], bp

#define AND_SP_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], sp
#define AND_SP_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], sp
#define AND_SP_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], sp
#define AND_SP_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define AND_AX_FROM_PTR_(VALUE) and ax, word ptr [VALUE]
#define AND_BX_FROM_PTR_(VALUE) and bx, word ptr [VALUE]
#define AND_CX_FROM_PTR_(VALUE) and cx, word ptr [VALUE]
#define AND_DX_FROM_PTR_(VALUE) and dx, word ptr [VALUE]
#define AND_DI_FROM_PTR_(VALUE) and di, word ptr [VALUE]
#define AND_SI_FROM_PTR_(VALUE) and si, word ptr [VALUE]
#define AND_BP_FROM_PTR_(VALUE) and bp, word ptr [VALUE]
#define AND_SP_FROM_PTR_(VALUE) and sp, word ptr [VALUE]

#define AND_AX_TO_PTR_(VALUE) and word ptr [VALUE], ax
#define AND_BX_TO_PTR_(VALUE) and word ptr [VALUE], bx
#define AND_CX_TO_PTR_(VALUE) and word ptr [VALUE], cx
#define AND_DX_TO_PTR_(VALUE) and word ptr [VALUE], dx
#define AND_DI_TO_PTR_(VALUE) and word ptr [VALUE], di
#define AND_SI_TO_PTR_(VALUE) and word ptr [VALUE], si
#define AND_BP_TO_PTR_(VALUE) and word ptr [VALUE], bp
#define AND_SP_TO_PTR_(VALUE) and word ptr [VALUE], sp

#define AND_AX_FROM_PTR_EAX and ax, word ptr [eax]
#define AND_AX_FROM_PTR_EBX and ax, word ptr [ebx]
#define AND_AX_FROM_PTR_ECX and ax, word ptr [ecx]
#define AND_AX_FROM_PTR_EDX and ax, word ptr [edx]
#define AND_AX_FROM_PTR_EDI and ax, word ptr [edi]
#define AND_AX_FROM_PTR_ESI and ax, word ptr [esi]
#define AND_AX_FROM_PTR_EBP and ax, word ptr [ebp]
#define AND_AX_FROM_PTR_ESP and ax, word ptr [esp]
#define AND_AX_FROM_PTR_BX and ax, word ptr [bx]
#define AND_AX_FROM_PTR_BP and ax, word ptr [bp]
#define AND_AX_FROM_PTR_SI and ax, word ptr [si]
#define AND_AX_FROM_PTR_DI and ax, word ptr [di]

#define AND_BX_FROM_PTR_EAX and bx, word ptr [eax]
#define AND_BX_FROM_PTR_EBX and bx, word ptr [ebx]
#define AND_BX_FROM_PTR_ECX and bx, word ptr [ecx]
#define AND_BX_FROM_PTR_EDX and bx, word ptr [edx]
#define AND_BX_FROM_PTR_EDI and bx, word ptr [edi]
#define AND_BX_FROM_PTR_ESI and bx, word ptr [esi]
#define AND_BX_FROM_PTR_EBP and bx, word ptr [ebp]
#define AND_BX_FROM_PTR_ESP and bx, word ptr [esp]
#define AND_BX_FROM_PTR_BX and bx, word ptr [bx]
#define AND_BX_FROM_PTR_BP and bx, word ptr [bp]
#define AND_BX_FROM_PTR_SI and bx, word ptr [si]
#define AND_BX_FROM_PTR_DI and bx, word ptr [di]

#define AND_CX_FROM_PTR_EAX and cx, word ptr [eax]
#define AND_CX_FROM_PTR_EBX and cx, word ptr [ebx]
#define AND_CX_FROM_PTR_ECX and cx, word ptr [ecx]
#define AND_CX_FROM_PTR_EDX and cx, word ptr [edx]
#define AND_CX_FROM_PTR_EDI and cx, word ptr [edi]
#define AND_CX_FROM_PTR_ESI and cx, word ptr [esi]
#define AND_CX_FROM_PTR_EBP and cx, word ptr [ebp]
#define AND_CX_FROM_PTR_ESP and cx, word ptr [esp]
#define AND_CX_FROM_PTR_BX and cx, word ptr [bx]
#define AND_CX_FROM_PTR_BP and cx, word ptr [bp]
#define AND_CX_FROM_PTR_SI and cx, word ptr [si]
#define AND_CX_FROM_PTR_DI and cx, word ptr [di]

#define AND_DX_FROM_PTR_EAX and dx, word ptr [eax]
#define AND_DX_FROM_PTR_EBX and dx, word ptr [ebx]
#define AND_DX_FROM_PTR_ECX and dx, word ptr [ecx]
#define AND_DX_FROM_PTR_EDX and dx, word ptr [edx]
#define AND_DX_FROM_PTR_EDI and dx, word ptr [edi]
#define AND_DX_FROM_PTR_ESI and dx, word ptr [esi]
#define AND_DX_FROM_PTR_EBP and dx, word ptr [ebp]
#define AND_DX_FROM_PTR_ESP and dx, word ptr [esp]
#define AND_DX_FROM_PTR_BX and dx, word ptr [bx]
#define AND_DX_FROM_PTR_BP and dx, word ptr [bp]
#define AND_DX_FROM_PTR_SI and dx, word ptr [si]
#define AND_DX_FROM_PTR_DI and dx, word ptr [di]

#define AND_DI_FROM_PTR_EAX and di, word ptr [eax]
#define AND_DI_FROM_PTR_EBX and di, word ptr [ebx]
#define AND_DI_FROM_PTR_ECX and di, word ptr [ecx]
#define AND_DI_FROM_PTR_EDX and di, word ptr [edx]
#define AND_DI_FROM_PTR_EDI and di, word ptr [edi]
#define AND_DI_FROM_PTR_ESI and di, word ptr [esi]
#define AND_DI_FROM_PTR_EBP and di, word ptr [ebp]
#define AND_DI_FROM_PTR_ESP and di, word ptr [esp]
#define AND_DI_FROM_PTR_BX and di, word ptr [bx]
#define AND_DI_FROM_PTR_BP and di, word ptr [bp]
#define AND_DI_FROM_PTR_SI and di, word ptr [si]
#define AND_DI_FROM_PTR_DI and di, word ptr [di]

#define AND_SI_FROM_PTR_EAX and si, word ptr [eax]
#define AND_SI_FROM_PTR_EBX and si, word ptr [ebx]
#define AND_SI_FROM_PTR_ECX and si, word ptr [ecx]
#define AND_SI_FROM_PTR_EDX and si, word ptr [edx]
#define AND_SI_FROM_PTR_EDI and si, word ptr [edi]
#define AND_SI_FROM_PTR_ESI and si, word ptr [esi]
#define AND_SI_FROM_PTR_EBP and si, word ptr [ebp]
#define AND_SI_FROM_PTR_ESP and si, word ptr [esp]
#define AND_SI_FROM_PTR_BX and si, word ptr [bx]
#define AND_SI_FROM_PTR_BP and si, word ptr [bp]
#define AND_SI_FROM_PTR_SI and si, word ptr [si]
#define AND_SI_FROM_PTR_DI and si, word ptr [di]

#define AND_BP_FROM_PTR_EAX and bp, word ptr [eax]
#define AND_BP_FROM_PTR_EBX and bp, word ptr [ebx]
#define AND_BP_FROM_PTR_ECX and bp, word ptr [ecx]
#define AND_BP_FROM_PTR_EDX and bp, word ptr [edx]
#define AND_BP_FROM_PTR_EDI and bp, word ptr [edi]
#define AND_BP_FROM_PTR_ESI and bp, word ptr [esi]
#define AND_BP_FROM_PTR_EBP and bp, word ptr [ebp]
#define AND_BP_FROM_PTR_ESP and bp, word ptr [esp]
#define AND_BP_FROM_PTR_BX and bp, word ptr [bx]
#define AND_BP_FROM_PTR_BP and bp, word ptr [bp]
#define AND_BP_FROM_PTR_SI and bp, word ptr [si]
#define AND_BP_FROM_PTR_DI and bp, word ptr [di]

#define AND_SP_FROM_PTR_EAX and sp, word ptr [eax]
#define AND_SP_FROM_PTR_EBX and sp, word ptr [ebx]
#define AND_SP_FROM_PTR_ECX and sp, word ptr [ecx]
#define AND_SP_FROM_PTR_EDX and sp, word ptr [edx]
#define AND_SP_FROM_PTR_EDI and sp, word ptr [edi]
#define AND_SP_FROM_PTR_ESI and sp, word ptr [esi]
#define AND_SP_FROM_PTR_EBP and sp, word ptr [ebp]
#define AND_SP_FROM_PTR_ESP and sp, word ptr [esp]
#define AND_SP_FROM_PTR_BX and sp, word ptr [bx]
#define AND_SP_FROM_PTR_BP and sp, word ptr [bp]
#define AND_SP_FROM_PTR_SI and sp, word ptr [si]
#define AND_SP_FROM_PTR_DI and sp, word ptr [di]

#define AND_AX_TO_PTR_EAX and word ptr [eax], ax
#define AND_AX_TO_PTR_EBX and word ptr [ebx], ax
#define AND_AX_TO_PTR_ECX and word ptr [ecx], ax
#define AND_AX_TO_PTR_EDX and word ptr [edx], ax
#define AND_AX_TO_PTR_EDI and word ptr [edi], ax
#define AND_AX_TO_PTR_ESI and word ptr [esi], ax
#define AND_AX_TO_PTR_EBP and word ptr [ebp], ax
#define AND_AX_TO_PTR_ESP and word ptr [esp], ax
#define AND_AX_TO_PTR_BX and word ptr [bx], ax
#define AND_AX_TO_PTR_BP and word ptr [bp], ax
#define AND_AX_TO_PTR_SI and word ptr [si], ax
#define AND_AX_TO_PTR_DI and word ptr [di], ax

#define AND_BX_TO_PTR_EAX and word ptr [eax], bx
#define AND_BX_TO_PTR_EBX and word ptr [ebx], bx
#define AND_BX_TO_PTR_ECX and word ptr [ecx], bx
#define AND_BX_TO_PTR_EDX and word ptr [edx], bx
#define AND_BX_TO_PTR_EDI and word ptr [edi], bx
#define AND_BX_TO_PTR_ESI and word ptr [esi], bx
#define AND_BX_TO_PTR_EBP and word ptr [ebp], bx
#define AND_BX_TO_PTR_ESP and word ptr [esp], bx
#define AND_BX_TO_PTR_BX and word ptr [bx], bx
#define AND_BX_TO_PTR_BP and word ptr [bp], bx
#define AND_BX_TO_PTR_SI and word ptr [si], bx
#define AND_BX_TO_PTR_DI and word ptr [di], bx

#define AND_CX_TO_PTR_EAX and word ptr [eax], cx
#define AND_CX_TO_PTR_EBX and word ptr [ebx], cx
#define AND_CX_TO_PTR_ECX and word ptr [ecx], cx
#define AND_CX_TO_PTR_EDX and word ptr [edx], cx
#define AND_CX_TO_PTR_EDI and word ptr [edi], cx
#define AND_CX_TO_PTR_ESI and word ptr [esi], cx
#define AND_CX_TO_PTR_EBP and word ptr [ebp], cx
#define AND_CX_TO_PTR_ESP and word ptr [esp], cx
#define AND_CX_TO_PTR_BX and word ptr [bx], cx
#define AND_CX_TO_PTR_BP and word ptr [bp], cx
#define AND_CX_TO_PTR_SI and word ptr [si], cx
#define AND_CX_TO_PTR_DI and word ptr [di], cx

#define AND_DX_TO_PTR_EAX and word ptr [eax], dx
#define AND_DX_TO_PTR_EBX and word ptr [ebx], dx
#define AND_DX_TO_PTR_ECX and word ptr [ecx], dx
#define AND_DX_TO_PTR_EDX and word ptr [edx], dx
#define AND_DX_TO_PTR_EDI and word ptr [edi], dx
#define AND_DX_TO_PTR_ESI and word ptr [esi], dx
#define AND_DX_TO_PTR_EBP and word ptr [ebp], dx
#define AND_DX_TO_PTR_ESP and word ptr [esp], dx
#define AND_DX_TO_PTR_BX and word ptr [bx], dx
#define AND_DX_TO_PTR_BP and word ptr [bp], dx
#define AND_DX_TO_PTR_SI and word ptr [si], dx
#define AND_DX_TO_PTR_DI and word ptr [di], dx

#define AND_DI_TO_PTR_EAX and word ptr [eax], di
#define AND_DI_TO_PTR_EBX and word ptr [ebx], di
#define AND_DI_TO_PTR_ECX and word ptr [ecx], di
#define AND_DI_TO_PTR_EDX and word ptr [edx], di
#define AND_DI_TO_PTR_EDI and word ptr [edi], di
#define AND_DI_TO_PTR_ESI and word ptr [esi], di
#define AND_DI_TO_PTR_EBP and word ptr [ebp], di
#define AND_DI_TO_PTR_ESP and word ptr [esp], di
#define AND_DI_TO_PTR_BX and word ptr [bx], di
#define AND_DI_TO_PTR_BP and word ptr [bp], di
#define AND_DI_TO_PTR_SI and word ptr [si], di
#define AND_DI_TO_PTR_DI and word ptr [di], di

#define AND_SI_TO_PTR_EAX and word ptr [eax], si
#define AND_SI_TO_PTR_EBX and word ptr [ebx], si
#define AND_SI_TO_PTR_ECX and word ptr [ecx], si
#define AND_SI_TO_PTR_EDX and word ptr [edx], si
#define AND_SI_TO_PTR_EDI and word ptr [edi], si
#define AND_SI_TO_PTR_ESI and word ptr [esi], si
#define AND_SI_TO_PTR_EBP and word ptr [ebp], si
#define AND_SI_TO_PTR_ESP and word ptr [esp], si
#define AND_SI_TO_PTR_BX and word ptr [bx], si
#define AND_SI_TO_PTR_BP and word ptr [bp], si
#define AND_SI_TO_PTR_SI and word ptr [si], si
#define AND_SI_TO_PTR_DI and word ptr [di], si

#define AND_BP_TO_PTR_EAX and word ptr [eax], bp
#define AND_BP_TO_PTR_EBX and word ptr [ebx], bp
#define AND_BP_TO_PTR_ECX and word ptr [ecx], bp
#define AND_BP_TO_PTR_EDX and word ptr [edx], bp
#define AND_BP_TO_PTR_EDI and word ptr [edi], bp
#define AND_BP_TO_PTR_ESI and word ptr [esi], bp
#define AND_BP_TO_PTR_EBP and word ptr [ebp], bp
#define AND_BP_TO_PTR_ESP and word ptr [esp], bp
#define AND_BP_TO_PTR_BX and word ptr [bx], bp
#define AND_BP_TO_PTR_BP and word ptr [bp], bp
#define AND_BP_TO_PTR_SI and word ptr [si], bp
#define AND_BP_TO_PTR_DI and word ptr [di], bp

#define AND_SP_TO_PTR_EAX and word ptr [eax], sp
#define AND_SP_TO_PTR_EBX and word ptr [ebx], sp
#define AND_SP_TO_PTR_ECX and word ptr [ecx], sp
#define AND_SP_TO_PTR_EDX and word ptr [edx], sp
#define AND_SP_TO_PTR_EDI and word ptr [edi], sp
#define AND_SP_TO_PTR_ESI and word ptr [esi], sp
#define AND_SP_TO_PTR_EBP and word ptr [ebp], sp
#define AND_SP_TO_PTR_ESP and word ptr [esp], sp
#define AND_SP_TO_PTR_BX and word ptr [bx], sp
#define AND_SP_TO_PTR_BP and word ptr [bp], sp
#define AND_SP_TO_PTR_SI and word ptr [si], sp
#define AND_SP_TO_PTR_DI and word ptr [di], sp

#define AND_AX_FROM_PTR_EAX_(VALUE) and ax, word ptr [eax + VALUE]
#define AND_AX_FROM_PTR_EBX_(VALUE) and ax, word ptr [ebx + VALUE]
#define AND_AX_FROM_PTR_ECX_(VALUE) and ax, word ptr [ecx + VALUE]
#define AND_AX_FROM_PTR_EDX_(VALUE) and ax, word ptr [edx + VALUE]
#define AND_AX_FROM_PTR_EDI_(VALUE) and ax, word ptr [edi + VALUE]
#define AND_AX_FROM_PTR_ESI_(VALUE) and ax, word ptr [esi + VALUE]
#define AND_AX_FROM_PTR_EBP_(VALUE) and ax, word ptr [ebp + VALUE]
#define AND_AX_FROM_PTR_ESP_(VALUE) and ax, word ptr [esp + VALUE]
#define AND_AX_FROM_PTR_BX_(VALUE) and ax, word ptr [bx + VALUE]
#define AND_AX_FROM_PTR_BP_(VALUE) and ax, word ptr [bp + VALUE]
#define AND_AX_FROM_PTR_SI_(VALUE) and ax, word ptr [si + VALUE]
#define AND_AX_FROM_PTR_DI_(VALUE) and ax, word ptr [di + VALUE]

#define AND_BX_FROM_PTR_EAX_(VALUE) and bx, word ptr [eax + VALUE]
#define AND_BX_FROM_PTR_EBX_(VALUE) and bx, word ptr [ebx + VALUE]
#define AND_BX_FROM_PTR_ECX_(VALUE) and bx, word ptr [ecx + VALUE]
#define AND_BX_FROM_PTR_EDX_(VALUE) and bx, word ptr [edx + VALUE]
#define AND_BX_FROM_PTR_EDI_(VALUE) and bx, word ptr [edi + VALUE]
#define AND_BX_FROM_PTR_ESI_(VALUE) and bx, word ptr [esi + VALUE]
#define AND_BX_FROM_PTR_EBP_(VALUE) and bx, word ptr [ebp + VALUE]
#define AND_BX_FROM_PTR_ESP_(VALUE) and bx, word ptr [esp + VALUE]
#define AND_BX_FROM_PTR_BX_(VALUE) and bx, word ptr [bx + VALUE]
#define AND_BX_FROM_PTR_BP_(VALUE) and bx, word ptr [bp + VALUE]
#define AND_BX_FROM_PTR_SI_(VALUE) and bx, word ptr [si + VALUE]
#define AND_BX_FROM_PTR_DI_(VALUE) and bx, word ptr [di + VALUE]

#define AND_CX_FROM_PTR_EAX_(VALUE) and cx, word ptr [eax + VALUE]
#define AND_CX_FROM_PTR_EBX_(VALUE) and cx, word ptr [ebx + VALUE]
#define AND_CX_FROM_PTR_ECX_(VALUE) and cx, word ptr [ecx + VALUE]
#define AND_CX_FROM_PTR_EDX_(VALUE) and cx, word ptr [edx + VALUE]
#define AND_CX_FROM_PTR_EDI_(VALUE) and cx, word ptr [edi + VALUE]
#define AND_CX_FROM_PTR_ESI_(VALUE) and cx, word ptr [esi + VALUE]
#define AND_CX_FROM_PTR_EBP_(VALUE) and cx, word ptr [ebp + VALUE]
#define AND_CX_FROM_PTR_ESP_(VALUE) and cx, word ptr [esp + VALUE]
#define AND_CX_FROM_PTR_BX_(VALUE) and cx, word ptr [bx + VALUE]
#define AND_CX_FROM_PTR_BP_(VALUE) and cx, word ptr [bp + VALUE]
#define AND_CX_FROM_PTR_SI_(VALUE) and cx, word ptr [si + VALUE]
#define AND_CX_FROM_PTR_DI_(VALUE) and cx, word ptr [di + VALUE]

#define AND_DX_FROM_PTR_EAX_(VALUE) and dx, word ptr [eax + VALUE]
#define AND_DX_FROM_PTR_EBX_(VALUE) and dx, word ptr [ebx + VALUE]
#define AND_DX_FROM_PTR_ECX_(VALUE) and dx, word ptr [ecx + VALUE]
#define AND_DX_FROM_PTR_EDX_(VALUE) and dx, word ptr [edx + VALUE]
#define AND_DX_FROM_PTR_EDI_(VALUE) and dx, word ptr [edi + VALUE]
#define AND_DX_FROM_PTR_ESI_(VALUE) and dx, word ptr [esi + VALUE]
#define AND_DX_FROM_PTR_EBP_(VALUE) and dx, word ptr [ebp + VALUE]
#define AND_DX_FROM_PTR_ESP_(VALUE) and dx, word ptr [esp + VALUE]
#define AND_DX_FROM_PTR_BX_(VALUE) and dx, word ptr [bx + VALUE]
#define AND_DX_FROM_PTR_BP_(VALUE) and dx, word ptr [bp + VALUE]
#define AND_DX_FROM_PTR_SI_(VALUE) and dx, word ptr [si + VALUE]
#define AND_DX_FROM_PTR_DI_(VALUE) and dx, word ptr [di + VALUE]

#define AND_DI_FROM_PTR_EAX_(VALUE) and di, word ptr [eax + VALUE]
#define AND_DI_FROM_PTR_EBX_(VALUE) and di, word ptr [ebx + VALUE]
#define AND_DI_FROM_PTR_ECX_(VALUE) and di, word ptr [ecx + VALUE]
#define AND_DI_FROM_PTR_EDX_(VALUE) and di, word ptr [edx + VALUE]
#define AND_DI_FROM_PTR_EDI_(VALUE) and di, word ptr [edi + VALUE]
#define AND_DI_FROM_PTR_ESI_(VALUE) and di, word ptr [esi + VALUE]
#define AND_DI_FROM_PTR_EBP_(VALUE) and di, word ptr [ebp + VALUE]
#define AND_DI_FROM_PTR_ESP_(VALUE) and di, word ptr [esp + VALUE]
#define AND_DI_FROM_PTR_BX_(VALUE) and di, word ptr [bx + VALUE]
#define AND_DI_FROM_PTR_BP_(VALUE) and di, word ptr [bp + VALUE]
#define AND_DI_FROM_PTR_SI_(VALUE) and di, word ptr [si + VALUE]
#define AND_DI_FROM_PTR_DI_(VALUE) and di, word ptr [di + VALUE]

#define AND_SI_FROM_PTR_EAX_(VALUE) and si, word ptr [eax + VALUE]
#define AND_SI_FROM_PTR_EBX_(VALUE) and si, word ptr [ebx + VALUE]
#define AND_SI_FROM_PTR_ECX_(VALUE) and si, word ptr [ecx + VALUE]
#define AND_SI_FROM_PTR_EDX_(VALUE) and si, word ptr [edx + VALUE]
#define AND_SI_FROM_PTR_EDI_(VALUE) and si, word ptr [edi + VALUE]
#define AND_SI_FROM_PTR_ESI_(VALUE) and si, word ptr [esi + VALUE]
#define AND_SI_FROM_PTR_EBP_(VALUE) and si, word ptr [ebp + VALUE]
#define AND_SI_FROM_PTR_ESP_(VALUE) and si, word ptr [esp + VALUE]
#define AND_SI_FROM_PTR_BX_(VALUE) and si, word ptr [bx + VALUE]
#define AND_SI_FROM_PTR_BP_(VALUE) and si, word ptr [bp + VALUE]
#define AND_SI_FROM_PTR_SI_(VALUE) and si, word ptr [si + VALUE]
#define AND_SI_FROM_PTR_DI_(VALUE) and si, word ptr [di + VALUE]

#define AND_BP_FROM_PTR_EAX_(VALUE) and bp, word ptr [eax + VALUE]
#define AND_BP_FROM_PTR_EBX_(VALUE) and bp, word ptr [ebx + VALUE]
#define AND_BP_FROM_PTR_ECX_(VALUE) and bp, word ptr [ecx + VALUE]
#define AND_BP_FROM_PTR_EDX_(VALUE) and bp, word ptr [edx + VALUE]
#define AND_BP_FROM_PTR_EDI_(VALUE) and bp, word ptr [edi + VALUE]
#define AND_BP_FROM_PTR_ESI_(VALUE) and bp, word ptr [esi + VALUE]
#define AND_BP_FROM_PTR_EBP_(VALUE) and bp, word ptr [ebp + VALUE]
#define AND_BP_FROM_PTR_ESP_(VALUE) and bp, word ptr [esp + VALUE]
#define AND_BP_FROM_PTR_BX_(VALUE) and bp, word ptr [bx + VALUE]
#define AND_BP_FROM_PTR_BP_(VALUE) and bp, word ptr [bp + VALUE]
#define AND_BP_FROM_PTR_SI_(VALUE) and bp, word ptr [si + VALUE]
#define AND_BP_FROM_PTR_DI_(VALUE) and bp, word ptr [di + VALUE]

#define AND_SP_FROM_PTR_EAX_(VALUE) and sp, word ptr [eax + VALUE]
#define AND_SP_FROM_PTR_EBX_(VALUE) and sp, word ptr [ebx + VALUE]
#define AND_SP_FROM_PTR_ECX_(VALUE) and sp, word ptr [ecx + VALUE]
#define AND_SP_FROM_PTR_EDX_(VALUE) and sp, word ptr [edx + VALUE]
#define AND_SP_FROM_PTR_EDI_(VALUE) and sp, word ptr [edi + VALUE]
#define AND_SP_FROM_PTR_ESI_(VALUE) and sp, word ptr [esi + VALUE]
#define AND_SP_FROM_PTR_EBP_(VALUE) and sp, word ptr [ebp + VALUE]
#define AND_SP_FROM_PTR_ESP_(VALUE) and sp, word ptr [esp + VALUE]
#define AND_SP_FROM_PTR_BX_(VALUE) and sp, word ptr [bx + VALUE]
#define AND_SP_FROM_PTR_BP_(VALUE) and sp, word ptr [bp + VALUE]
#define AND_SP_FROM_PTR_SI_(VALUE) and sp, word ptr [si + VALUE]
#define AND_SP_FROM_PTR_DI_(VALUE) and sp, word ptr [di + VALUE]

#define AND_AX_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], ax
#define AND_AX_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], ax
#define AND_AX_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], ax
#define AND_AX_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], ax
#define AND_AX_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], ax
#define AND_AX_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], ax
#define AND_AX_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], ax
#define AND_AX_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], ax
#define AND_AX_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], ax
#define AND_AX_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], ax
#define AND_AX_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], ax
#define AND_AX_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], ax

#define AND_BX_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], bx
#define AND_BX_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], bx
#define AND_BX_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], bx
#define AND_BX_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], bx
#define AND_BX_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], bx
#define AND_BX_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], bx
#define AND_BX_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], bx
#define AND_BX_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], bx
#define AND_BX_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], bx
#define AND_BX_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], bx
#define AND_BX_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], bx
#define AND_BX_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], bx

#define AND_CX_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], cx
#define AND_CX_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], cx
#define AND_CX_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], cx
#define AND_CX_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], cx
#define AND_CX_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], cx
#define AND_CX_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], cx
#define AND_CX_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], cx
#define AND_CX_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], cx
#define AND_CX_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], cx
#define AND_CX_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], cx
#define AND_CX_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], cx
#define AND_CX_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], cx

#define AND_DX_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], dx
#define AND_DX_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], dx
#define AND_DX_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], dx
#define AND_DX_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], dx
#define AND_DX_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], dx
#define AND_DX_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], dx
#define AND_DX_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], dx
#define AND_DX_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], dx
#define AND_DX_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], dx
#define AND_DX_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], dx
#define AND_DX_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], dx
#define AND_DX_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], dx

#define AND_DI_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], di
#define AND_DI_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], di
#define AND_DI_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], di
#define AND_DI_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], di
#define AND_DI_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], di
#define AND_DI_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], di
#define AND_DI_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], di
#define AND_DI_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], di
#define AND_DI_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], di
#define AND_DI_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], di
#define AND_DI_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], di
#define AND_DI_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], di

#define AND_SI_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], si
#define AND_SI_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], si
#define AND_SI_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], si
#define AND_SI_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], si
#define AND_SI_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], si
#define AND_SI_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], si
#define AND_SI_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], si
#define AND_SI_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], si
#define AND_SI_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], si
#define AND_SI_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], si
#define AND_SI_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], si
#define AND_SI_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], si

#define AND_BP_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], bp
#define AND_BP_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], bp
#define AND_BP_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], bp
#define AND_BP_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], bp
#define AND_BP_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], bp
#define AND_BP_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], bp
#define AND_BP_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], bp
#define AND_BP_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], bp
#define AND_BP_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], bp
#define AND_BP_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], bp
#define AND_BP_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], bp
#define AND_BP_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], bp

#define AND_SP_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], sp
#define AND_SP_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], sp
#define AND_SP_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], sp
#define AND_SP_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], sp
#define AND_SP_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], sp
#define AND_SP_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], sp
#define AND_SP_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], sp
#define AND_SP_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], sp
#define AND_SP_TO_PTR_BX_(VALUE) and word ptr [bx + VALUE], sp
#define AND_SP_TO_PTR_BP_(VALUE) and word ptr [bp + VALUE], sp
#define AND_SP_TO_PTR_SI_(VALUE) and word ptr [si + VALUE], sp
#define AND_SP_TO_PTR_DI_(VALUE) and word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_AX_FROM_PTR_(VALUE) and ax, word ptr [VALUE]
#define AND_BX_FROM_PTR_(VALUE) and bx, word ptr [VALUE]
#define AND_CX_FROM_PTR_(VALUE) and cx, word ptr [VALUE]
#define AND_DX_FROM_PTR_(VALUE) and dx, word ptr [VALUE]
#define AND_DI_FROM_PTR_(VALUE) and di, word ptr [VALUE]
#define AND_SI_FROM_PTR_(VALUE) and si, word ptr [VALUE]
#define AND_BP_FROM_PTR_(VALUE) and bp, word ptr [VALUE]
#define AND_SP_FROM_PTR_(VALUE) and sp, word ptr [VALUE]
#define AND_R8W_FROM_PTR_(VALUE) and r8w, word ptr [VALUE]
#define AND_R9W_FROM_PTR_(VALUE) and r9w, word ptr [VALUE]
#define AND_R10W_FROM_PTR_(VALUE) and r10w, word ptr [VALUE]
#define AND_R11W_FROM_PTR_(VALUE) and r11w, word ptr [VALUE]
#define AND_R12W_FROM_PTR_(VALUE) and r12w, word ptr [VALUE]
#define AND_R13W_FROM_PTR_(VALUE) and r13w, word ptr [VALUE]
#define AND_R14W_FROM_PTR_(VALUE) and r14w, word ptr [VALUE]
#define AND_R15W_FROM_PTR_(VALUE) and r15w, word ptr [VALUE]

#define AND_AX_TO_PTR_(VALUE) and word ptr [VALUE], ax
#define AND_BX_TO_PTR_(VALUE) and word ptr [VALUE], bx
#define AND_CX_TO_PTR_(VALUE) and word ptr [VALUE], cx
#define AND_DX_TO_PTR_(VALUE) and word ptr [VALUE], dx
#define AND_DI_TO_PTR_(VALUE) and word ptr [VALUE], di
#define AND_SI_TO_PTR_(VALUE) and word ptr [VALUE], si
#define AND_BP_TO_PTR_(VALUE) and word ptr [VALUE], bp
#define AND_SP_TO_PTR_(VALUE) and word ptr [VALUE], sp
#define AND_R8W_TO_PTR_(VALUE) and word ptr [VALUE], r8w
#define AND_R9W_TO_PTR_(VALUE) and word ptr [VALUE], r9w
#define AND_R10W_TO_PTR_(VALUE) and word ptr [VALUE], r10w
#define AND_R11W_TO_PTR_(VALUE) and word ptr [VALUE], r11w
#define AND_R12W_TO_PTR_(VALUE) and word ptr [VALUE], r12w
#define AND_R13W_TO_PTR_(VALUE) and word ptr [VALUE], r13w
#define AND_R14W_TO_PTR_(VALUE) and word ptr [VALUE], r14w
#define AND_R15W_TO_PTR_(VALUE) and word ptr [VALUE], r15w

#define AND_AX_FROM_PTR_RAX and ax, word ptr [rax]
#define AND_AX_FROM_PTR_RBX and ax, word ptr [rbx]
#define AND_AX_FROM_PTR_RCX and ax, word ptr [rcx]
#define AND_AX_FROM_PTR_RDX and ax, word ptr [rdx]
#define AND_AX_FROM_PTR_RDI and ax, word ptr [rdi]
#define AND_AX_FROM_PTR_RSI and ax, word ptr [rsi]
#define AND_AX_FROM_PTR_RBP and ax, word ptr [rbp]
#define AND_AX_FROM_PTR_RSP and ax, word ptr [rsp]
#define AND_AX_FROM_PTR_R8 and ax, word ptr [r8]
#define AND_AX_FROM_PTR_R9 and ax, word ptr [r9]
#define AND_AX_FROM_PTR_R10 and ax, word ptr [r10]
#define AND_AX_FROM_PTR_R11 and ax, word ptr [r11]
#define AND_AX_FROM_PTR_R12 and ax, word ptr [r12]
#define AND_AX_FROM_PTR_R13 and ax, word ptr [r13]
#define AND_AX_FROM_PTR_R14 and ax, word ptr [r14]
#define AND_AX_FROM_PTR_R15 and ax, word ptr [r15]
#define AND_AX_FROM_PTR_EAX and ax, word ptr [eax]
#define AND_AX_FROM_PTR_EBX and ax, word ptr [ebx]
#define AND_AX_FROM_PTR_ECX and ax, word ptr [ecx]
#define AND_AX_FROM_PTR_EDX and ax, word ptr [edx]
#define AND_AX_FROM_PTR_EDI and ax, word ptr [edi]
#define AND_AX_FROM_PTR_ESI and ax, word ptr [esi]
#define AND_AX_FROM_PTR_EBP and ax, word ptr [ebp]
#define AND_AX_FROM_PTR_ESP and ax, word ptr [esp]

#define AND_BX_FROM_PTR_RAX and bx, word ptr [rax]
#define AND_BX_FROM_PTR_RBX and bx, word ptr [rbx]
#define AND_BX_FROM_PTR_RCX and bx, word ptr [rcx]
#define AND_BX_FROM_PTR_RDX and bx, word ptr [rdx]
#define AND_BX_FROM_PTR_RDI and bx, word ptr [rdi]
#define AND_BX_FROM_PTR_RSI and bx, word ptr [rsi]
#define AND_BX_FROM_PTR_RBP and bx, word ptr [rbp]
#define AND_BX_FROM_PTR_RSP and bx, word ptr [rsp]
#define AND_BX_FROM_PTR_R8 and bx, word ptr [r8]
#define AND_BX_FROM_PTR_R9 and bx, word ptr [r9]
#define AND_BX_FROM_PTR_R10 and bx, word ptr [r10]
#define AND_BX_FROM_PTR_R11 and bx, word ptr [r11]
#define AND_BX_FROM_PTR_R12 and bx, word ptr [r12]
#define AND_BX_FROM_PTR_R13 and bx, word ptr [r13]
#define AND_BX_FROM_PTR_R14 and bx, word ptr [r14]
#define AND_BX_FROM_PTR_R15 and bx, word ptr [r15]
#define AND_BX_FROM_PTR_EAX and bx, word ptr [eax]
#define AND_BX_FROM_PTR_EBX and bx, word ptr [ebx]
#define AND_BX_FROM_PTR_ECX and bx, word ptr [ecx]
#define AND_BX_FROM_PTR_EDX and bx, word ptr [edx]
#define AND_BX_FROM_PTR_EDI and bx, word ptr [edi]
#define AND_BX_FROM_PTR_ESI and bx, word ptr [esi]
#define AND_BX_FROM_PTR_EBP and bx, word ptr [ebp]
#define AND_BX_FROM_PTR_ESP and bx, word ptr [esp]

#define AND_CX_FROM_PTR_RAX and cx, word ptr [rax]
#define AND_CX_FROM_PTR_RBX and cx, word ptr [rbx]
#define AND_CX_FROM_PTR_RCX and cx, word ptr [rcx]
#define AND_CX_FROM_PTR_RDX and cx, word ptr [rdx]
#define AND_CX_FROM_PTR_RDI and cx, word ptr [rdi]
#define AND_CX_FROM_PTR_RSI and cx, word ptr [rsi]
#define AND_CX_FROM_PTR_RBP and cx, word ptr [rbp]
#define AND_CX_FROM_PTR_RSP and cx, word ptr [rsp]
#define AND_CX_FROM_PTR_R8 and cx, word ptr [r8]
#define AND_CX_FROM_PTR_R9 and cx, word ptr [r9]
#define AND_CX_FROM_PTR_R10 and cx, word ptr [r10]
#define AND_CX_FROM_PTR_R11 and cx, word ptr [r11]
#define AND_CX_FROM_PTR_R12 and cx, word ptr [r12]
#define AND_CX_FROM_PTR_R13 and cx, word ptr [r13]
#define AND_CX_FROM_PTR_R14 and cx, word ptr [r14]
#define AND_CX_FROM_PTR_R15 and cx, word ptr [r15]
#define AND_CX_FROM_PTR_EAX and cx, word ptr [eax]
#define AND_CX_FROM_PTR_EBX and cx, word ptr [ebx]
#define AND_CX_FROM_PTR_ECX and cx, word ptr [ecx]
#define AND_CX_FROM_PTR_EDX and cx, word ptr [edx]
#define AND_CX_FROM_PTR_EDI and cx, word ptr [edi]
#define AND_CX_FROM_PTR_ESI and cx, word ptr [esi]
#define AND_CX_FROM_PTR_EBP and cx, word ptr [ebp]
#define AND_CX_FROM_PTR_ESP and cx, word ptr [esp]

#define AND_DX_FROM_PTR_RAX and dx, word ptr [rax]
#define AND_DX_FROM_PTR_RBX and dx, word ptr [rbx]
#define AND_DX_FROM_PTR_RCX and dx, word ptr [rcx]
#define AND_DX_FROM_PTR_RDX and dx, word ptr [rdx]
#define AND_DX_FROM_PTR_RDI and dx, word ptr [rdi]
#define AND_DX_FROM_PTR_RSI and dx, word ptr [rsi]
#define AND_DX_FROM_PTR_RBP and dx, word ptr [rbp]
#define AND_DX_FROM_PTR_RSP and dx, word ptr [rsp]
#define AND_DX_FROM_PTR_R8 and dx, word ptr [r8]
#define AND_DX_FROM_PTR_R9 and dx, word ptr [r9]
#define AND_DX_FROM_PTR_R10 and dx, word ptr [r10]
#define AND_DX_FROM_PTR_R11 and dx, word ptr [r11]
#define AND_DX_FROM_PTR_R12 and dx, word ptr [r12]
#define AND_DX_FROM_PTR_R13 and dx, word ptr [r13]
#define AND_DX_FROM_PTR_R14 and dx, word ptr [r14]
#define AND_DX_FROM_PTR_R15 and dx, word ptr [r15]
#define AND_DX_FROM_PTR_EAX and dx, word ptr [eax]
#define AND_DX_FROM_PTR_EBX and dx, word ptr [ebx]
#define AND_DX_FROM_PTR_ECX and dx, word ptr [ecx]
#define AND_DX_FROM_PTR_EDX and dx, word ptr [edx]
#define AND_DX_FROM_PTR_EDI and dx, word ptr [edi]
#define AND_DX_FROM_PTR_ESI and dx, word ptr [esi]
#define AND_DX_FROM_PTR_EBP and dx, word ptr [ebp]
#define AND_DX_FROM_PTR_ESP and dx, word ptr [esp]

#define AND_DI_FROM_PTR_RAX and di, word ptr [rax]
#define AND_DI_FROM_PTR_RBX and di, word ptr [rbx]
#define AND_DI_FROM_PTR_RCX and di, word ptr [rcx]
#define AND_DI_FROM_PTR_RDX and di, word ptr [rdx]
#define AND_DI_FROM_PTR_RDI and di, word ptr [rdi]
#define AND_DI_FROM_PTR_RSI and di, word ptr [rsi]
#define AND_DI_FROM_PTR_RBP and di, word ptr [rbp]
#define AND_DI_FROM_PTR_RSP and di, word ptr [rsp]
#define AND_DI_FROM_PTR_R8 and di, word ptr [r8]
#define AND_DI_FROM_PTR_R9 and di, word ptr [r9]
#define AND_DI_FROM_PTR_R10 and di, word ptr [r10]
#define AND_DI_FROM_PTR_R11 and di, word ptr [r11]
#define AND_DI_FROM_PTR_R12 and di, word ptr [r12]
#define AND_DI_FROM_PTR_R13 and di, word ptr [r13]
#define AND_DI_FROM_PTR_R14 and di, word ptr [r14]
#define AND_DI_FROM_PTR_R15 and di, word ptr [r15]
#define AND_DI_FROM_PTR_EAX and di, word ptr [eax]
#define AND_DI_FROM_PTR_EBX and di, word ptr [ebx]
#define AND_DI_FROM_PTR_ECX and di, word ptr [ecx]
#define AND_DI_FROM_PTR_EDX and di, word ptr [edx]
#define AND_DI_FROM_PTR_EDI and di, word ptr [edi]
#define AND_DI_FROM_PTR_ESI and di, word ptr [esi]
#define AND_DI_FROM_PTR_EBP and di, word ptr [ebp]
#define AND_DI_FROM_PTR_ESP and di, word ptr [esp]

#define AND_SI_FROM_PTR_RAX and si, word ptr [rax]
#define AND_SI_FROM_PTR_RBX and si, word ptr [rbx]
#define AND_SI_FROM_PTR_RCX and si, word ptr [rcx]
#define AND_SI_FROM_PTR_RDX and si, word ptr [rdx]
#define AND_SI_FROM_PTR_RDI and si, word ptr [rdi]
#define AND_SI_FROM_PTR_RSI and si, word ptr [rsi]
#define AND_SI_FROM_PTR_RBP and si, word ptr [rbp]
#define AND_SI_FROM_PTR_RSP and si, word ptr [rsp]
#define AND_SI_FROM_PTR_R8 and si, word ptr [r8]
#define AND_SI_FROM_PTR_R9 and si, word ptr [r9]
#define AND_SI_FROM_PTR_R10 and si, word ptr [r10]
#define AND_SI_FROM_PTR_R11 and si, word ptr [r11]
#define AND_SI_FROM_PTR_R12 and si, word ptr [r12]
#define AND_SI_FROM_PTR_R13 and si, word ptr [r13]
#define AND_SI_FROM_PTR_R14 and si, word ptr [r14]
#define AND_SI_FROM_PTR_R15 and si, word ptr [r15]
#define AND_SI_FROM_PTR_EAX and si, word ptr [eax]
#define AND_SI_FROM_PTR_EBX and si, word ptr [ebx]
#define AND_SI_FROM_PTR_ECX and si, word ptr [ecx]
#define AND_SI_FROM_PTR_EDX and si, word ptr [edx]
#define AND_SI_FROM_PTR_EDI and si, word ptr [edi]
#define AND_SI_FROM_PTR_ESI and si, word ptr [esi]
#define AND_SI_FROM_PTR_EBP and si, word ptr [ebp]
#define AND_SI_FROM_PTR_ESP and si, word ptr [esp]

#define AND_BP_FROM_PTR_RAX and bp, word ptr [rax]
#define AND_BP_FROM_PTR_RBX and bp, word ptr [rbx]
#define AND_BP_FROM_PTR_RCX and bp, word ptr [rcx]
#define AND_BP_FROM_PTR_RDX and bp, word ptr [rdx]
#define AND_BP_FROM_PTR_RDI and bp, word ptr [rdi]
#define AND_BP_FROM_PTR_RSI and bp, word ptr [rsi]
#define AND_BP_FROM_PTR_RBP and bp, word ptr [rbp]
#define AND_BP_FROM_PTR_RSP and bp, word ptr [rsp]
#define AND_BP_FROM_PTR_R8 and bp, word ptr [r8]
#define AND_BP_FROM_PTR_R9 and bp, word ptr [r9]
#define AND_BP_FROM_PTR_R10 and bp, word ptr [r10]
#define AND_BP_FROM_PTR_R11 and bp, word ptr [r11]
#define AND_BP_FROM_PTR_R12 and bp, word ptr [r12]
#define AND_BP_FROM_PTR_R13 and bp, word ptr [r13]
#define AND_BP_FROM_PTR_R14 and bp, word ptr [r14]
#define AND_BP_FROM_PTR_R15 and bp, word ptr [r15]
#define AND_BP_FROM_PTR_EAX and bp, word ptr [eax]
#define AND_BP_FROM_PTR_EBX and bp, word ptr [ebx]
#define AND_BP_FROM_PTR_ECX and bp, word ptr [ecx]
#define AND_BP_FROM_PTR_EDX and bp, word ptr [edx]
#define AND_BP_FROM_PTR_EDI and bp, word ptr [edi]
#define AND_BP_FROM_PTR_ESI and bp, word ptr [esi]
#define AND_BP_FROM_PTR_EBP and bp, word ptr [ebp]
#define AND_BP_FROM_PTR_ESP and bp, word ptr [esp]

#define AND_SP_FROM_PTR_RAX and sp, word ptr [rax]
#define AND_SP_FROM_PTR_RBX and sp, word ptr [rbx]
#define AND_SP_FROM_PTR_RCX and sp, word ptr [rcx]
#define AND_SP_FROM_PTR_RDX and sp, word ptr [rdx]
#define AND_SP_FROM_PTR_RDI and sp, word ptr [rdi]
#define AND_SP_FROM_PTR_RSI and sp, word ptr [rsi]
#define AND_SP_FROM_PTR_RBP and sp, word ptr [rbp]
#define AND_SP_FROM_PTR_RSP and sp, word ptr [rsp]
#define AND_SP_FROM_PTR_R8 and sp, word ptr [r8]
#define AND_SP_FROM_PTR_R9 and sp, word ptr [r9]
#define AND_SP_FROM_PTR_R10 and sp, word ptr [r10]
#define AND_SP_FROM_PTR_R11 and sp, word ptr [r11]
#define AND_SP_FROM_PTR_R12 and sp, word ptr [r12]
#define AND_SP_FROM_PTR_R13 and sp, word ptr [r13]
#define AND_SP_FROM_PTR_R14 and sp, word ptr [r14]
#define AND_SP_FROM_PTR_R15 and sp, word ptr [r15]
#define AND_SP_FROM_PTR_EAX and sp, word ptr [eax]
#define AND_SP_FROM_PTR_EBX and sp, word ptr [ebx]
#define AND_SP_FROM_PTR_ECX and sp, word ptr [ecx]
#define AND_SP_FROM_PTR_EDX and sp, word ptr [edx]
#define AND_SP_FROM_PTR_EDI and sp, word ptr [edi]
#define AND_SP_FROM_PTR_ESI and sp, word ptr [esi]
#define AND_SP_FROM_PTR_EBP and sp, word ptr [ebp]
#define AND_SP_FROM_PTR_ESP and sp, word ptr [esp]

#define AND_R8W_FROM_PTR_RAX and r8w, word ptr [rax]
#define AND_R8W_FROM_PTR_RBX and r8w, word ptr [rbx]
#define AND_R8W_FROM_PTR_RCX and r8w, word ptr [rcx]
#define AND_R8W_FROM_PTR_RDX and r8w, word ptr [rdx]
#define AND_R8W_FROM_PTR_RDI and r8w, word ptr [rdi]
#define AND_R8W_FROM_PTR_RSI and r8w, word ptr [rsi]
#define AND_R8W_FROM_PTR_RBP and r8w, word ptr [rbp]
#define AND_R8W_FROM_PTR_RSP and r8w, word ptr [rsp]
#define AND_R8W_FROM_PTR_R8 and r8w, word ptr [r8]
#define AND_R8W_FROM_PTR_R9 and r8w, word ptr [r9]
#define AND_R8W_FROM_PTR_R10 and r8w, word ptr [r10]
#define AND_R8W_FROM_PTR_R11 and r8w, word ptr [r11]
#define AND_R8W_FROM_PTR_R12 and r8w, word ptr [r12]
#define AND_R8W_FROM_PTR_R13 and r8w, word ptr [r13]
#define AND_R8W_FROM_PTR_R14 and r8w, word ptr [r14]
#define AND_R8W_FROM_PTR_R15 and r8w, word ptr [r15]
#define AND_R8W_FROM_PTR_EAX and r8w, word ptr [eax]
#define AND_R8W_FROM_PTR_EBX and r8w, word ptr [ebx]
#define AND_R8W_FROM_PTR_ECX and r8w, word ptr [ecx]
#define AND_R8W_FROM_PTR_EDX and r8w, word ptr [edx]
#define AND_R8W_FROM_PTR_EDI and r8w, word ptr [edi]
#define AND_R8W_FROM_PTR_ESI and r8w, word ptr [esi]
#define AND_R8W_FROM_PTR_EBP and r8w, word ptr [ebp]
#define AND_R8W_FROM_PTR_ESP and r8w, word ptr [esp]

#define AND_R9W_FROM_PTR_RAX and r9w, word ptr [rax]
#define AND_R9W_FROM_PTR_RBX and r9w, word ptr [rbx]
#define AND_R9W_FROM_PTR_RCX and r9w, word ptr [rcx]
#define AND_R9W_FROM_PTR_RDX and r9w, word ptr [rdx]
#define AND_R9W_FROM_PTR_RDI and r9w, word ptr [rdi]
#define AND_R9W_FROM_PTR_RSI and r9w, word ptr [rsi]
#define AND_R9W_FROM_PTR_RBP and r9w, word ptr [rbp]
#define AND_R9W_FROM_PTR_RSP and r9w, word ptr [rsp]
#define AND_R9W_FROM_PTR_R8 and r9w, word ptr [r8]
#define AND_R9W_FROM_PTR_R9 and r9w, word ptr [r9]
#define AND_R9W_FROM_PTR_R10 and r9w, word ptr [r10]
#define AND_R9W_FROM_PTR_R11 and r9w, word ptr [r11]
#define AND_R9W_FROM_PTR_R12 and r9w, word ptr [r12]
#define AND_R9W_FROM_PTR_R13 and r9w, word ptr [r13]
#define AND_R9W_FROM_PTR_R14 and r9w, word ptr [r14]
#define AND_R9W_FROM_PTR_R15 and r9w, word ptr [r15]
#define AND_R9W_FROM_PTR_EAX and r9w, word ptr [eax]
#define AND_R9W_FROM_PTR_EBX and r9w, word ptr [ebx]
#define AND_R9W_FROM_PTR_ECX and r9w, word ptr [ecx]
#define AND_R9W_FROM_PTR_EDX and r9w, word ptr [edx]
#define AND_R9W_FROM_PTR_EDI and r9w, word ptr [edi]
#define AND_R9W_FROM_PTR_ESI and r9w, word ptr [esi]
#define AND_R9W_FROM_PTR_EBP and r9w, word ptr [ebp]
#define AND_R9W_FROM_PTR_ESP and r9w, word ptr [esp]

#define AND_R10W_FROM_PTR_RAX and r10w, word ptr [rax]
#define AND_R10W_FROM_PTR_RBX and r10w, word ptr [rbx]
#define AND_R10W_FROM_PTR_RCX and r10w, word ptr [rcx]
#define AND_R10W_FROM_PTR_RDX and r10w, word ptr [rdx]
#define AND_R10W_FROM_PTR_RDI and r10w, word ptr [rdi]
#define AND_R10W_FROM_PTR_RSI and r10w, word ptr [rsi]
#define AND_R10W_FROM_PTR_RBP and r10w, word ptr [rbp]
#define AND_R10W_FROM_PTR_RSP and r10w, word ptr [rsp]
#define AND_R10W_FROM_PTR_R8 and r10w, word ptr [r8]
#define AND_R10W_FROM_PTR_R9 and r10w, word ptr [r9]
#define AND_R10W_FROM_PTR_R10 and r10w, word ptr [r10]
#define AND_R10W_FROM_PTR_R11 and r10w, word ptr [r11]
#define AND_R10W_FROM_PTR_R12 and r10w, word ptr [r12]
#define AND_R10W_FROM_PTR_R13 and r10w, word ptr [r13]
#define AND_R10W_FROM_PTR_R14 and r10w, word ptr [r14]
#define AND_R10W_FROM_PTR_R15 and r10w, word ptr [r15]
#define AND_R10W_FROM_PTR_EAX and r10w, word ptr [eax]
#define AND_R10W_FROM_PTR_EBX and r10w, word ptr [ebx]
#define AND_R10W_FROM_PTR_ECX and r10w, word ptr [ecx]
#define AND_R10W_FROM_PTR_EDX and r10w, word ptr [edx]
#define AND_R10W_FROM_PTR_EDI and r10w, word ptr [edi]
#define AND_R10W_FROM_PTR_ESI and r10w, word ptr [esi]
#define AND_R10W_FROM_PTR_EBP and r10w, word ptr [ebp]
#define AND_R10W_FROM_PTR_ESP and r10w, word ptr [esp]

#define AND_R11W_FROM_PTR_RAX and r11w, word ptr [rax]
#define AND_R11W_FROM_PTR_RBX and r11w, word ptr [rbx]
#define AND_R11W_FROM_PTR_RCX and r11w, word ptr [rcx]
#define AND_R11W_FROM_PTR_RDX and r11w, word ptr [rdx]
#define AND_R11W_FROM_PTR_RDI and r11w, word ptr [rdi]
#define AND_R11W_FROM_PTR_RSI and r11w, word ptr [rsi]
#define AND_R11W_FROM_PTR_RBP and r11w, word ptr [rbp]
#define AND_R11W_FROM_PTR_RSP and r11w, word ptr [rsp]
#define AND_R11W_FROM_PTR_R8 and r11w, word ptr [r8]
#define AND_R11W_FROM_PTR_R9 and r11w, word ptr [r9]
#define AND_R11W_FROM_PTR_R10 and r11w, word ptr [r10]
#define AND_R11W_FROM_PTR_R11 and r11w, word ptr [r11]
#define AND_R11W_FROM_PTR_R12 and r11w, word ptr [r12]
#define AND_R11W_FROM_PTR_R13 and r11w, word ptr [r13]
#define AND_R11W_FROM_PTR_R14 and r11w, word ptr [r14]
#define AND_R11W_FROM_PTR_R15 and r11w, word ptr [r15]
#define AND_R11W_FROM_PTR_EAX and r11w, word ptr [eax]
#define AND_R11W_FROM_PTR_EBX and r11w, word ptr [ebx]
#define AND_R11W_FROM_PTR_ECX and r11w, word ptr [ecx]
#define AND_R11W_FROM_PTR_EDX and r11w, word ptr [edx]
#define AND_R11W_FROM_PTR_EDI and r11w, word ptr [edi]
#define AND_R11W_FROM_PTR_ESI and r11w, word ptr [esi]
#define AND_R11W_FROM_PTR_EBP and r11w, word ptr [ebp]
#define AND_R11W_FROM_PTR_ESP and r11w, word ptr [esp]

#define AND_R12W_FROM_PTR_RAX and r12w, word ptr [rax]
#define AND_R12W_FROM_PTR_RBX and r12w, word ptr [rbx]
#define AND_R12W_FROM_PTR_RCX and r12w, word ptr [rcx]
#define AND_R12W_FROM_PTR_RDX and r12w, word ptr [rdx]
#define AND_R12W_FROM_PTR_RDI and r12w, word ptr [rdi]
#define AND_R12W_FROM_PTR_RSI and r12w, word ptr [rsi]
#define AND_R12W_FROM_PTR_RBP and r12w, word ptr [rbp]
#define AND_R12W_FROM_PTR_RSP and r12w, word ptr [rsp]
#define AND_R12W_FROM_PTR_R8 and r12w, word ptr [r8]
#define AND_R12W_FROM_PTR_R9 and r12w, word ptr [r9]
#define AND_R12W_FROM_PTR_R10 and r12w, word ptr [r10]
#define AND_R12W_FROM_PTR_R11 and r12w, word ptr [r11]
#define AND_R12W_FROM_PTR_R12 and r12w, word ptr [r12]
#define AND_R12W_FROM_PTR_R13 and r12w, word ptr [r13]
#define AND_R12W_FROM_PTR_R14 and r12w, word ptr [r14]
#define AND_R12W_FROM_PTR_R15 and r12w, word ptr [r15]
#define AND_R12W_FROM_PTR_EAX and r12w, word ptr [eax]
#define AND_R12W_FROM_PTR_EBX and r12w, word ptr [ebx]
#define AND_R12W_FROM_PTR_ECX and r12w, word ptr [ecx]
#define AND_R12W_FROM_PTR_EDX and r12w, word ptr [edx]
#define AND_R12W_FROM_PTR_EDI and r12w, word ptr [edi]
#define AND_R12W_FROM_PTR_ESI and r12w, word ptr [esi]
#define AND_R12W_FROM_PTR_EBP and r12w, word ptr [ebp]
#define AND_R12W_FROM_PTR_ESP and r12w, word ptr [esp]

#define AND_R13W_FROM_PTR_RAX and r13w, word ptr [rax]
#define AND_R13W_FROM_PTR_RBX and r13w, word ptr [rbx]
#define AND_R13W_FROM_PTR_RCX and r13w, word ptr [rcx]
#define AND_R13W_FROM_PTR_RDX and r13w, word ptr [rdx]
#define AND_R13W_FROM_PTR_RDI and r13w, word ptr [rdi]
#define AND_R13W_FROM_PTR_RSI and r13w, word ptr [rsi]
#define AND_R13W_FROM_PTR_RBP and r13w, word ptr [rbp]
#define AND_R13W_FROM_PTR_RSP and r13w, word ptr [rsp]
#define AND_R13W_FROM_PTR_R8 and r13w, word ptr [r8]
#define AND_R13W_FROM_PTR_R9 and r13w, word ptr [r9]
#define AND_R13W_FROM_PTR_R10 and r13w, word ptr [r10]
#define AND_R13W_FROM_PTR_R11 and r13w, word ptr [r11]
#define AND_R13W_FROM_PTR_R12 and r13w, word ptr [r12]
#define AND_R13W_FROM_PTR_R13 and r13w, word ptr [r13]
#define AND_R13W_FROM_PTR_R14 and r13w, word ptr [r14]
#define AND_R13W_FROM_PTR_R15 and r13w, word ptr [r15]
#define AND_R13W_FROM_PTR_EAX and r13w, word ptr [eax]
#define AND_R13W_FROM_PTR_EBX and r13w, word ptr [ebx]
#define AND_R13W_FROM_PTR_ECX and r13w, word ptr [ecx]
#define AND_R13W_FROM_PTR_EDX and r13w, word ptr [edx]
#define AND_R13W_FROM_PTR_EDI and r13w, word ptr [edi]
#define AND_R13W_FROM_PTR_ESI and r13w, word ptr [esi]
#define AND_R13W_FROM_PTR_EBP and r13w, word ptr [ebp]
#define AND_R13W_FROM_PTR_ESP and r13w, word ptr [esp]

#define AND_R14W_FROM_PTR_RAX and r14w, word ptr [rax]
#define AND_R14W_FROM_PTR_RBX and r14w, word ptr [rbx]
#define AND_R14W_FROM_PTR_RCX and r14w, word ptr [rcx]
#define AND_R14W_FROM_PTR_RDX and r14w, word ptr [rdx]
#define AND_R14W_FROM_PTR_RDI and r14w, word ptr [rdi]
#define AND_R14W_FROM_PTR_RSI and r14w, word ptr [rsi]
#define AND_R14W_FROM_PTR_RBP and r14w, word ptr [rbp]
#define AND_R14W_FROM_PTR_RSP and r14w, word ptr [rsp]
#define AND_R14W_FROM_PTR_R8 and r14w, word ptr [r8]
#define AND_R14W_FROM_PTR_R9 and r14w, word ptr [r9]
#define AND_R14W_FROM_PTR_R10 and r14w, word ptr [r10]
#define AND_R14W_FROM_PTR_R11 and r14w, word ptr [r11]
#define AND_R14W_FROM_PTR_R12 and r14w, word ptr [r12]
#define AND_R14W_FROM_PTR_R13 and r14w, word ptr [r13]
#define AND_R14W_FROM_PTR_R14 and r14w, word ptr [r14]
#define AND_R14W_FROM_PTR_R15 and r14w, word ptr [r15]
#define AND_R14W_FROM_PTR_EAX and r14w, word ptr [eax]
#define AND_R14W_FROM_PTR_EBX and r14w, word ptr [ebx]
#define AND_R14W_FROM_PTR_ECX and r14w, word ptr [ecx]
#define AND_R14W_FROM_PTR_EDX and r14w, word ptr [edx]
#define AND_R14W_FROM_PTR_EDI and r14w, word ptr [edi]
#define AND_R14W_FROM_PTR_ESI and r14w, word ptr [esi]
#define AND_R14W_FROM_PTR_EBP and r14w, word ptr [ebp]
#define AND_R14W_FROM_PTR_ESP and r14w, word ptr [esp]

#define AND_R15W_FROM_PTR_RAX and r15w, word ptr [rax]
#define AND_R15W_FROM_PTR_RBX and r15w, word ptr [rbx]
#define AND_R15W_FROM_PTR_RCX and r15w, word ptr [rcx]
#define AND_R15W_FROM_PTR_RDX and r15w, word ptr [rdx]
#define AND_R15W_FROM_PTR_RDI and r15w, word ptr [rdi]
#define AND_R15W_FROM_PTR_RSI and r15w, word ptr [rsi]
#define AND_R15W_FROM_PTR_RBP and r15w, word ptr [rbp]
#define AND_R15W_FROM_PTR_RSP and r15w, word ptr [rsp]
#define AND_R15W_FROM_PTR_R8 and r15w, word ptr [r8]
#define AND_R15W_FROM_PTR_R9 and r15w, word ptr [r9]
#define AND_R15W_FROM_PTR_R10 and r15w, word ptr [r10]
#define AND_R15W_FROM_PTR_R11 and r15w, word ptr [r11]
#define AND_R15W_FROM_PTR_R12 and r15w, word ptr [r12]
#define AND_R15W_FROM_PTR_R13 and r15w, word ptr [r13]
#define AND_R15W_FROM_PTR_R14 and r15w, word ptr [r14]
#define AND_R15W_FROM_PTR_R15 and r15w, word ptr [r15]
#define AND_R15W_FROM_PTR_EAX and r15w, word ptr [eax]
#define AND_R15W_FROM_PTR_EBX and r15w, word ptr [ebx]
#define AND_R15W_FROM_PTR_ECX and r15w, word ptr [ecx]
#define AND_R15W_FROM_PTR_EDX and r15w, word ptr [edx]
#define AND_R15W_FROM_PTR_EDI and r15w, word ptr [edi]
#define AND_R15W_FROM_PTR_ESI and r15w, word ptr [esi]
#define AND_R15W_FROM_PTR_EBP and r15w, word ptr [ebp]
#define AND_R15W_FROM_PTR_ESP and r15w, word ptr [esp]

#define AND_AX_TO_PTR_RAX and word ptr [rax], ax
#define AND_AX_TO_PTR_RBX and word ptr [rbx], ax
#define AND_AX_TO_PTR_RCX and word ptr [rcx], ax
#define AND_AX_TO_PTR_RDX and word ptr [rdx], ax
#define AND_AX_TO_PTR_RDI and word ptr [rdi], ax
#define AND_AX_TO_PTR_RSI and word ptr [rsi], ax
#define AND_AX_TO_PTR_RBP and word ptr [rbp], ax
#define AND_AX_TO_PTR_RSP and word ptr [rsp], ax
#define AND_AX_TO_PTR_R8 and word ptr [r8], ax
#define AND_AX_TO_PTR_R9 and word ptr [r9], ax
#define AND_AX_TO_PTR_R10 and word ptr [r10], ax
#define AND_AX_TO_PTR_R11 and word ptr [r11], ax
#define AND_AX_TO_PTR_R12 and word ptr [r12], ax
#define AND_AX_TO_PTR_R13 and word ptr [r13], ax
#define AND_AX_TO_PTR_R14 and word ptr [r14], ax
#define AND_AX_TO_PTR_R15 and word ptr [r15], ax
#define AND_AX_TO_PTR_EAX and word ptr [eax], ax
#define AND_AX_TO_PTR_EBX and word ptr [ebx], ax
#define AND_AX_TO_PTR_ECX and word ptr [ecx], ax
#define AND_AX_TO_PTR_EDX and word ptr [edx], ax
#define AND_AX_TO_PTR_EDI and word ptr [edi], ax
#define AND_AX_TO_PTR_ESI and word ptr [esi], ax
#define AND_AX_TO_PTR_EBP and word ptr [ebp], ax
#define AND_AX_TO_PTR_ESP and word ptr [esp], ax

#define AND_BX_TO_PTR_RAX and word ptr [rax], bx
#define AND_BX_TO_PTR_RBX and word ptr [rbx], bx
#define AND_BX_TO_PTR_RCX and word ptr [rcx], bx
#define AND_BX_TO_PTR_RDX and word ptr [rdx], bx
#define AND_BX_TO_PTR_RDI and word ptr [rdi], bx
#define AND_BX_TO_PTR_RSI and word ptr [rsi], bx
#define AND_BX_TO_PTR_RBP and word ptr [rbp], bx
#define AND_BX_TO_PTR_RSP and word ptr [rsp], bx
#define AND_BX_TO_PTR_R8 and word ptr [r8], bx
#define AND_BX_TO_PTR_R9 and word ptr [r9], bx
#define AND_BX_TO_PTR_R10 and word ptr [r10], bx
#define AND_BX_TO_PTR_R11 and word ptr [r11], bx
#define AND_BX_TO_PTR_R12 and word ptr [r12], bx
#define AND_BX_TO_PTR_R13 and word ptr [r13], bx
#define AND_BX_TO_PTR_R14 and word ptr [r14], bx
#define AND_BX_TO_PTR_R15 and word ptr [r15], bx
#define AND_BX_TO_PTR_EAX and word ptr [eax], bx
#define AND_BX_TO_PTR_EBX and word ptr [ebx], bx
#define AND_BX_TO_PTR_ECX and word ptr [ecx], bx
#define AND_BX_TO_PTR_EDX and word ptr [edx], bx
#define AND_BX_TO_PTR_EDI and word ptr [edi], bx
#define AND_BX_TO_PTR_ESI and word ptr [esi], bx
#define AND_BX_TO_PTR_EBP and word ptr [ebp], bx
#define AND_BX_TO_PTR_ESP and word ptr [esp], bx

#define AND_CX_TO_PTR_RAX and word ptr [rax], cx
#define AND_CX_TO_PTR_RBX and word ptr [rbx], cx
#define AND_CX_TO_PTR_RCX and word ptr [rcx], cx
#define AND_CX_TO_PTR_RDX and word ptr [rdx], cx
#define AND_CX_TO_PTR_RDI and word ptr [rdi], cx
#define AND_CX_TO_PTR_RSI and word ptr [rsi], cx
#define AND_CX_TO_PTR_RBP and word ptr [rbp], cx
#define AND_CX_TO_PTR_RSP and word ptr [rsp], cx
#define AND_CX_TO_PTR_R8 and word ptr [r8], cx
#define AND_CX_TO_PTR_R9 and word ptr [r9], cx
#define AND_CX_TO_PTR_R10 and word ptr [r10], cx
#define AND_CX_TO_PTR_R11 and word ptr [r11], cx
#define AND_CX_TO_PTR_R12 and word ptr [r12], cx
#define AND_CX_TO_PTR_R13 and word ptr [r13], cx
#define AND_CX_TO_PTR_R14 and word ptr [r14], cx
#define AND_CX_TO_PTR_R15 and word ptr [r15], cx
#define AND_CX_TO_PTR_EAX and word ptr [eax], cx
#define AND_CX_TO_PTR_EBX and word ptr [ebx], cx
#define AND_CX_TO_PTR_ECX and word ptr [ecx], cx
#define AND_CX_TO_PTR_EDX and word ptr [edx], cx
#define AND_CX_TO_PTR_EDI and word ptr [edi], cx
#define AND_CX_TO_PTR_ESI and word ptr [esi], cx
#define AND_CX_TO_PTR_EBP and word ptr [ebp], cx
#define AND_CX_TO_PTR_ESP and word ptr [esp], cx

#define AND_DX_TO_PTR_RAX and word ptr [rax], dx
#define AND_DX_TO_PTR_RBX and word ptr [rbx], dx
#define AND_DX_TO_PTR_RCX and word ptr [rcx], dx
#define AND_DX_TO_PTR_RDX and word ptr [rdx], dx
#define AND_DX_TO_PTR_RDI and word ptr [rdi], dx
#define AND_DX_TO_PTR_RSI and word ptr [rsi], dx
#define AND_DX_TO_PTR_RBP and word ptr [rbp], dx
#define AND_DX_TO_PTR_RSP and word ptr [rsp], dx
#define AND_DX_TO_PTR_R8 and word ptr [r8], dx
#define AND_DX_TO_PTR_R9 and word ptr [r9], dx
#define AND_DX_TO_PTR_R10 and word ptr [r10], dx
#define AND_DX_TO_PTR_R11 and word ptr [r11], dx
#define AND_DX_TO_PTR_R12 and word ptr [r12], dx
#define AND_DX_TO_PTR_R13 and word ptr [r13], dx
#define AND_DX_TO_PTR_R14 and word ptr [r14], dx
#define AND_DX_TO_PTR_R15 and word ptr [r15], dx
#define AND_DX_TO_PTR_EAX and word ptr [eax], dx
#define AND_DX_TO_PTR_EBX and word ptr [ebx], dx
#define AND_DX_TO_PTR_ECX and word ptr [ecx], dx
#define AND_DX_TO_PTR_EDX and word ptr [edx], dx
#define AND_DX_TO_PTR_EDI and word ptr [edi], dx
#define AND_DX_TO_PTR_ESI and word ptr [esi], dx
#define AND_DX_TO_PTR_EBP and word ptr [ebp], dx
#define AND_DX_TO_PTR_ESP and word ptr [esp], dx

#define AND_DI_TO_PTR_RAX and word ptr [rax], di
#define AND_DI_TO_PTR_RBX and word ptr [rbx], di
#define AND_DI_TO_PTR_RCX and word ptr [rcx], di
#define AND_DI_TO_PTR_RDX and word ptr [rdx], di
#define AND_DI_TO_PTR_RDI and word ptr [rdi], di
#define AND_DI_TO_PTR_RSI and word ptr [rsi], di
#define AND_DI_TO_PTR_RBP and word ptr [rbp], di
#define AND_DI_TO_PTR_RSP and word ptr [rsp], di
#define AND_DI_TO_PTR_R8 and word ptr [r8], di
#define AND_DI_TO_PTR_R9 and word ptr [r9], di
#define AND_DI_TO_PTR_R10 and word ptr [r10], di
#define AND_DI_TO_PTR_R11 and word ptr [r11], di
#define AND_DI_TO_PTR_R12 and word ptr [r12], di
#define AND_DI_TO_PTR_R13 and word ptr [r13], di
#define AND_DI_TO_PTR_R14 and word ptr [r14], di
#define AND_DI_TO_PTR_R15 and word ptr [r15], di
#define AND_DI_TO_PTR_EAX and word ptr [eax], di
#define AND_DI_TO_PTR_EBX and word ptr [ebx], di
#define AND_DI_TO_PTR_ECX and word ptr [ecx], di
#define AND_DI_TO_PTR_EDX and word ptr [edx], di
#define AND_DI_TO_PTR_EDI and word ptr [edi], di
#define AND_DI_TO_PTR_ESI and word ptr [esi], di
#define AND_DI_TO_PTR_EBP and word ptr [ebp], di
#define AND_DI_TO_PTR_ESP and word ptr [esp], di

#define AND_SI_TO_PTR_RAX and word ptr [rax], si
#define AND_SI_TO_PTR_RBX and word ptr [rbx], si
#define AND_SI_TO_PTR_RCX and word ptr [rcx], si
#define AND_SI_TO_PTR_RDX and word ptr [rdx], si
#define AND_SI_TO_PTR_RDI and word ptr [rdi], si
#define AND_SI_TO_PTR_RSI and word ptr [rsi], si
#define AND_SI_TO_PTR_RBP and word ptr [rbp], si
#define AND_SI_TO_PTR_RSP and word ptr [rsp], si
#define AND_SI_TO_PTR_R8 and word ptr [r8], si
#define AND_SI_TO_PTR_R9 and word ptr [r9], si
#define AND_SI_TO_PTR_R10 and word ptr [r10], si
#define AND_SI_TO_PTR_R11 and word ptr [r11], si
#define AND_SI_TO_PTR_R12 and word ptr [r12], si
#define AND_SI_TO_PTR_R13 and word ptr [r13], si
#define AND_SI_TO_PTR_R14 and word ptr [r14], si
#define AND_SI_TO_PTR_R15 and word ptr [r15], si
#define AND_SI_TO_PTR_EAX and word ptr [eax], si
#define AND_SI_TO_PTR_EBX and word ptr [ebx], si
#define AND_SI_TO_PTR_ECX and word ptr [ecx], si
#define AND_SI_TO_PTR_EDX and word ptr [edx], si
#define AND_SI_TO_PTR_EDI and word ptr [edi], si
#define AND_SI_TO_PTR_ESI and word ptr [esi], si
#define AND_SI_TO_PTR_EBP and word ptr [ebp], si
#define AND_SI_TO_PTR_ESP and word ptr [esp], si

#define AND_BP_TO_PTR_RAX and word ptr [rax], bp
#define AND_BP_TO_PTR_RBX and word ptr [rbx], bp
#define AND_BP_TO_PTR_RCX and word ptr [rcx], bp
#define AND_BP_TO_PTR_RDX and word ptr [rdx], bp
#define AND_BP_TO_PTR_RDI and word ptr [rdi], bp
#define AND_BP_TO_PTR_RSI and word ptr [rsi], bp
#define AND_BP_TO_PTR_RBP and word ptr [rbp], bp
#define AND_BP_TO_PTR_RSP and word ptr [rsp], bp
#define AND_BP_TO_PTR_R8 and word ptr [r8], bp
#define AND_BP_TO_PTR_R9 and word ptr [r9], bp
#define AND_BP_TO_PTR_R10 and word ptr [r10], bp
#define AND_BP_TO_PTR_R11 and word ptr [r11], bp
#define AND_BP_TO_PTR_R12 and word ptr [r12], bp
#define AND_BP_TO_PTR_R13 and word ptr [r13], bp
#define AND_BP_TO_PTR_R14 and word ptr [r14], bp
#define AND_BP_TO_PTR_R15 and word ptr [r15], bp
#define AND_BP_TO_PTR_EAX and word ptr [eax], bp
#define AND_BP_TO_PTR_EBX and word ptr [ebx], bp
#define AND_BP_TO_PTR_ECX and word ptr [ecx], bp
#define AND_BP_TO_PTR_EDX and word ptr [edx], bp
#define AND_BP_TO_PTR_EDI and word ptr [edi], bp
#define AND_BP_TO_PTR_ESI and word ptr [esi], bp
#define AND_BP_TO_PTR_EBP and word ptr [ebp], bp
#define AND_BP_TO_PTR_ESP and word ptr [esp], bp

#define AND_SP_TO_PTR_RAX and word ptr [rax], sp
#define AND_SP_TO_PTR_RBX and word ptr [rbx], sp
#define AND_SP_TO_PTR_RCX and word ptr [rcx], sp
#define AND_SP_TO_PTR_RDX and word ptr [rdx], sp
#define AND_SP_TO_PTR_RDI and word ptr [rdi], sp
#define AND_SP_TO_PTR_RSI and word ptr [rsi], sp
#define AND_SP_TO_PTR_RBP and word ptr [rbp], sp
#define AND_SP_TO_PTR_RSP and word ptr [rsp], sp
#define AND_SP_TO_PTR_R8 and word ptr [r8], sp
#define AND_SP_TO_PTR_R9 and word ptr [r9], sp
#define AND_SP_TO_PTR_R10 and word ptr [r10], sp
#define AND_SP_TO_PTR_R11 and word ptr [r11], sp
#define AND_SP_TO_PTR_R12 and word ptr [r12], sp
#define AND_SP_TO_PTR_R13 and word ptr [r13], sp
#define AND_SP_TO_PTR_R14 and word ptr [r14], sp
#define AND_SP_TO_PTR_R15 and word ptr [r15], sp
#define AND_SP_TO_PTR_EAX and word ptr [eax], sp
#define AND_SP_TO_PTR_EBX and word ptr [ebx], sp
#define AND_SP_TO_PTR_ECX and word ptr [ecx], sp
#define AND_SP_TO_PTR_EDX and word ptr [edx], sp
#define AND_SP_TO_PTR_EDI and word ptr [edi], sp
#define AND_SP_TO_PTR_ESI and word ptr [esi], sp
#define AND_SP_TO_PTR_EBP and word ptr [ebp], sp
#define AND_SP_TO_PTR_ESP and word ptr [esp], sp

#define AND_R8W_TO_PTR_RAX and word ptr [rax], r8w
#define AND_R8W_TO_PTR_RBX and word ptr [rbx], r8w
#define AND_R8W_TO_PTR_RCX and word ptr [rcx], r8w
#define AND_R8W_TO_PTR_RDX and word ptr [rdx], r8w
#define AND_R8W_TO_PTR_RDI and word ptr [rdi], r8w
#define AND_R8W_TO_PTR_RSI and word ptr [rsi], r8w
#define AND_R8W_TO_PTR_RBP and word ptr [rbp], r8w
#define AND_R8W_TO_PTR_RSP and word ptr [rsp], r8w
#define AND_R8W_TO_PTR_R8 and word ptr [r8], r8w
#define AND_R8W_TO_PTR_R9 and word ptr [r9], r8w
#define AND_R8W_TO_PTR_R10 and word ptr [r10], r8w
#define AND_R8W_TO_PTR_R11 and word ptr [r11], r8w
#define AND_R8W_TO_PTR_R12 and word ptr [r12], r8w
#define AND_R8W_TO_PTR_R13 and word ptr [r13], r8w
#define AND_R8W_TO_PTR_R14 and word ptr [r14], r8w
#define AND_R8W_TO_PTR_R15 and word ptr [r15], r8w
#define AND_R8W_TO_PTR_EAX and word ptr [eax], r8w
#define AND_R8W_TO_PTR_EBX and word ptr [ebx], r8w
#define AND_R8W_TO_PTR_ECX and word ptr [ecx], r8w
#define AND_R8W_TO_PTR_EDX and word ptr [edx], r8w
#define AND_R8W_TO_PTR_EDI and word ptr [edi], r8w
#define AND_R8W_TO_PTR_ESI and word ptr [esi], r8w
#define AND_R8W_TO_PTR_EBP and word ptr [ebp], r8w
#define AND_R8W_TO_PTR_ESP and word ptr [esp], r8w

#define AND_R9W_TO_PTR_RAX and word ptr [rax], r9w
#define AND_R9W_TO_PTR_RBX and word ptr [rbx], r9w
#define AND_R9W_TO_PTR_RCX and word ptr [rcx], r9w
#define AND_R9W_TO_PTR_RDX and word ptr [rdx], r9w
#define AND_R9W_TO_PTR_RDI and word ptr [rdi], r9w
#define AND_R9W_TO_PTR_RSI and word ptr [rsi], r9w
#define AND_R9W_TO_PTR_RBP and word ptr [rbp], r9w
#define AND_R9W_TO_PTR_RSP and word ptr [rsp], r9w
#define AND_R9W_TO_PTR_R8 and word ptr [r8], r9w
#define AND_R9W_TO_PTR_R9 and word ptr [r9], r9w
#define AND_R9W_TO_PTR_R10 and word ptr [r10], r9w
#define AND_R9W_TO_PTR_R11 and word ptr [r11], r9w
#define AND_R9W_TO_PTR_R12 and word ptr [r12], r9w
#define AND_R9W_TO_PTR_R13 and word ptr [r13], r9w
#define AND_R9W_TO_PTR_R14 and word ptr [r14], r9w
#define AND_R9W_TO_PTR_R15 and word ptr [r15], r9w
#define AND_R9W_TO_PTR_EAX and word ptr [eax], r9w
#define AND_R9W_TO_PTR_EBX and word ptr [ebx], r9w
#define AND_R9W_TO_PTR_ECX and word ptr [ecx], r9w
#define AND_R9W_TO_PTR_EDX and word ptr [edx], r9w
#define AND_R9W_TO_PTR_EDI and word ptr [edi], r9w
#define AND_R9W_TO_PTR_ESI and word ptr [esi], r9w
#define AND_R9W_TO_PTR_EBP and word ptr [ebp], r9w
#define AND_R9W_TO_PTR_ESP and word ptr [esp], r9w

#define AND_R10W_TO_PTR_RAX and word ptr [rax], r10w
#define AND_R10W_TO_PTR_RBX and word ptr [rbx], r10w
#define AND_R10W_TO_PTR_RCX and word ptr [rcx], r10w
#define AND_R10W_TO_PTR_RDX and word ptr [rdx], r10w
#define AND_R10W_TO_PTR_RDI and word ptr [rdi], r10w
#define AND_R10W_TO_PTR_RSI and word ptr [rsi], r10w
#define AND_R10W_TO_PTR_RBP and word ptr [rbp], r10w
#define AND_R10W_TO_PTR_RSP and word ptr [rsp], r10w
#define AND_R10W_TO_PTR_R8 and word ptr [r8], r10w
#define AND_R10W_TO_PTR_R9 and word ptr [r9], r10w
#define AND_R10W_TO_PTR_R10 and word ptr [r10], r10w
#define AND_R10W_TO_PTR_R11 and word ptr [r11], r10w
#define AND_R10W_TO_PTR_R12 and word ptr [r12], r10w
#define AND_R10W_TO_PTR_R13 and word ptr [r13], r10w
#define AND_R10W_TO_PTR_R14 and word ptr [r14], r10w
#define AND_R10W_TO_PTR_R15 and word ptr [r15], r10w
#define AND_R10W_TO_PTR_EAX and word ptr [eax], r10w
#define AND_R10W_TO_PTR_EBX and word ptr [ebx], r10w
#define AND_R10W_TO_PTR_ECX and word ptr [ecx], r10w
#define AND_R10W_TO_PTR_EDX and word ptr [edx], r10w
#define AND_R10W_TO_PTR_EDI and word ptr [edi], r10w
#define AND_R10W_TO_PTR_ESI and word ptr [esi], r10w
#define AND_R10W_TO_PTR_EBP and word ptr [ebp], r10w
#define AND_R10W_TO_PTR_ESP and word ptr [esp], r10w

#define AND_R11W_TO_PTR_RAX and word ptr [rax], r11w
#define AND_R11W_TO_PTR_RBX and word ptr [rbx], r11w
#define AND_R11W_TO_PTR_RCX and word ptr [rcx], r11w
#define AND_R11W_TO_PTR_RDX and word ptr [rdx], r11w
#define AND_R11W_TO_PTR_RDI and word ptr [rdi], r11w
#define AND_R11W_TO_PTR_RSI and word ptr [rsi], r11w
#define AND_R11W_TO_PTR_RBP and word ptr [rbp], r11w
#define AND_R11W_TO_PTR_RSP and word ptr [rsp], r11w
#define AND_R11W_TO_PTR_R8 and word ptr [r8], r11w
#define AND_R11W_TO_PTR_R9 and word ptr [r9], r11w
#define AND_R11W_TO_PTR_R10 and word ptr [r10], r11w
#define AND_R11W_TO_PTR_R11 and word ptr [r11], r11w
#define AND_R11W_TO_PTR_R12 and word ptr [r12], r11w
#define AND_R11W_TO_PTR_R13 and word ptr [r13], r11w
#define AND_R11W_TO_PTR_R14 and word ptr [r14], r11w
#define AND_R11W_TO_PTR_R15 and word ptr [r15], r11w
#define AND_R11W_TO_PTR_EAX and word ptr [eax], r11w
#define AND_R11W_TO_PTR_EBX and word ptr [ebx], r11w
#define AND_R11W_TO_PTR_ECX and word ptr [ecx], r11w
#define AND_R11W_TO_PTR_EDX and word ptr [edx], r11w
#define AND_R11W_TO_PTR_EDI and word ptr [edi], r11w
#define AND_R11W_TO_PTR_ESI and word ptr [esi], r11w
#define AND_R11W_TO_PTR_EBP and word ptr [ebp], r11w
#define AND_R11W_TO_PTR_ESP and word ptr [esp], r11w

#define AND_R12W_TO_PTR_RAX and word ptr [rax], r12w
#define AND_R12W_TO_PTR_RBX and word ptr [rbx], r12w
#define AND_R12W_TO_PTR_RCX and word ptr [rcx], r12w
#define AND_R12W_TO_PTR_RDX and word ptr [rdx], r12w
#define AND_R12W_TO_PTR_RDI and word ptr [rdi], r12w
#define AND_R12W_TO_PTR_RSI and word ptr [rsi], r12w
#define AND_R12W_TO_PTR_RBP and word ptr [rbp], r12w
#define AND_R12W_TO_PTR_RSP and word ptr [rsp], r12w
#define AND_R12W_TO_PTR_R8 and word ptr [r8], r12w
#define AND_R12W_TO_PTR_R9 and word ptr [r9], r12w
#define AND_R12W_TO_PTR_R10 and word ptr [r10], r12w
#define AND_R12W_TO_PTR_R11 and word ptr [r11], r12w
#define AND_R12W_TO_PTR_R12 and word ptr [r12], r12w
#define AND_R12W_TO_PTR_R13 and word ptr [r13], r12w
#define AND_R12W_TO_PTR_R14 and word ptr [r14], r12w
#define AND_R12W_TO_PTR_R15 and word ptr [r15], r12w
#define AND_R12W_TO_PTR_EAX and word ptr [eax], r12w
#define AND_R12W_TO_PTR_EBX and word ptr [ebx], r12w
#define AND_R12W_TO_PTR_ECX and word ptr [ecx], r12w
#define AND_R12W_TO_PTR_EDX and word ptr [edx], r12w
#define AND_R12W_TO_PTR_EDI and word ptr [edi], r12w
#define AND_R12W_TO_PTR_ESI and word ptr [esi], r12w
#define AND_R12W_TO_PTR_EBP and word ptr [ebp], r12w
#define AND_R12W_TO_PTR_ESP and word ptr [esp], r12w

#define AND_R13W_TO_PTR_RAX and word ptr [rax], r13w
#define AND_R13W_TO_PTR_RBX and word ptr [rbx], r13w
#define AND_R13W_TO_PTR_RCX and word ptr [rcx], r13w
#define AND_R13W_TO_PTR_RDX and word ptr [rdx], r13w
#define AND_R13W_TO_PTR_RDI and word ptr [rdi], r13w
#define AND_R13W_TO_PTR_RSI and word ptr [rsi], r13w
#define AND_R13W_TO_PTR_RBP and word ptr [rbp], r13w
#define AND_R13W_TO_PTR_RSP and word ptr [rsp], r13w
#define AND_R13W_TO_PTR_R8 and word ptr [r8], r13w
#define AND_R13W_TO_PTR_R9 and word ptr [r9], r13w
#define AND_R13W_TO_PTR_R10 and word ptr [r10], r13w
#define AND_R13W_TO_PTR_R11 and word ptr [r11], r13w
#define AND_R13W_TO_PTR_R12 and word ptr [r12], r13w
#define AND_R13W_TO_PTR_R13 and word ptr [r13], r13w
#define AND_R13W_TO_PTR_R14 and word ptr [r14], r13w
#define AND_R13W_TO_PTR_R15 and word ptr [r15], r13w
#define AND_R13W_TO_PTR_EAX and word ptr [eax], r13w
#define AND_R13W_TO_PTR_EBX and word ptr [ebx], r13w
#define AND_R13W_TO_PTR_ECX and word ptr [ecx], r13w
#define AND_R13W_TO_PTR_EDX and word ptr [edx], r13w
#define AND_R13W_TO_PTR_EDI and word ptr [edi], r13w
#define AND_R13W_TO_PTR_ESI and word ptr [esi], r13w
#define AND_R13W_TO_PTR_EBP and word ptr [ebp], r13w
#define AND_R13W_TO_PTR_ESP and word ptr [esp], r13w

#define AND_R14W_TO_PTR_RAX and word ptr [rax], r14w
#define AND_R14W_TO_PTR_RBX and word ptr [rbx], r14w
#define AND_R14W_TO_PTR_RCX and word ptr [rcx], r14w
#define AND_R14W_TO_PTR_RDX and word ptr [rdx], r14w
#define AND_R14W_TO_PTR_RDI and word ptr [rdi], r14w
#define AND_R14W_TO_PTR_RSI and word ptr [rsi], r14w
#define AND_R14W_TO_PTR_RBP and word ptr [rbp], r14w
#define AND_R14W_TO_PTR_RSP and word ptr [rsp], r14w
#define AND_R14W_TO_PTR_R8 and word ptr [r8], r14w
#define AND_R14W_TO_PTR_R9 and word ptr [r9], r14w
#define AND_R14W_TO_PTR_R10 and word ptr [r10], r14w
#define AND_R14W_TO_PTR_R11 and word ptr [r11], r14w
#define AND_R14W_TO_PTR_R12 and word ptr [r12], r14w
#define AND_R14W_TO_PTR_R13 and word ptr [r13], r14w
#define AND_R14W_TO_PTR_R14 and word ptr [r14], r14w
#define AND_R14W_TO_PTR_R15 and word ptr [r15], r14w
#define AND_R14W_TO_PTR_EAX and word ptr [eax], r14w
#define AND_R14W_TO_PTR_EBX and word ptr [ebx], r14w
#define AND_R14W_TO_PTR_ECX and word ptr [ecx], r14w
#define AND_R14W_TO_PTR_EDX and word ptr [edx], r14w
#define AND_R14W_TO_PTR_EDI and word ptr [edi], r14w
#define AND_R14W_TO_PTR_ESI and word ptr [esi], r14w
#define AND_R14W_TO_PTR_EBP and word ptr [ebp], r14w
#define AND_R14W_TO_PTR_ESP and word ptr [esp], r14w

#define AND_R15W_TO_PTR_RAX and word ptr [rax], r15w
#define AND_R15W_TO_PTR_RBX and word ptr [rbx], r15w
#define AND_R15W_TO_PTR_RCX and word ptr [rcx], r15w
#define AND_R15W_TO_PTR_RDX and word ptr [rdx], r15w
#define AND_R15W_TO_PTR_RDI and word ptr [rdi], r15w
#define AND_R15W_TO_PTR_RSI and word ptr [rsi], r15w
#define AND_R15W_TO_PTR_RBP and word ptr [rbp], r15w
#define AND_R15W_TO_PTR_RSP and word ptr [rsp], r15w
#define AND_R15W_TO_PTR_R8 and word ptr [r8], r15w
#define AND_R15W_TO_PTR_R9 and word ptr [r9], r15w
#define AND_R15W_TO_PTR_R10 and word ptr [r10], r15w
#define AND_R15W_TO_PTR_R11 and word ptr [r11], r15w
#define AND_R15W_TO_PTR_R12 and word ptr [r12], r15w
#define AND_R15W_TO_PTR_R13 and word ptr [r13], r15w
#define AND_R15W_TO_PTR_R14 and word ptr [r14], r15w
#define AND_R15W_TO_PTR_R15 and word ptr [r15], r15w
#define AND_R15W_TO_PTR_EAX and word ptr [eax], r15w
#define AND_R15W_TO_PTR_EBX and word ptr [ebx], r15w
#define AND_R15W_TO_PTR_ECX and word ptr [ecx], r15w
#define AND_R15W_TO_PTR_EDX and word ptr [edx], r15w
#define AND_R15W_TO_PTR_EDI and word ptr [edi], r15w
#define AND_R15W_TO_PTR_ESI and word ptr [esi], r15w
#define AND_R15W_TO_PTR_EBP and word ptr [ebp], r15w
#define AND_R15W_TO_PTR_ESP and word ptr [esp], r15w

#define AND_AX_FROM_PTR_RAX_(VALUE) and ax, word ptr [rax + VALUE]
#define AND_AX_FROM_PTR_RBX_(VALUE) and ax, word ptr [rbx + VALUE]
#define AND_AX_FROM_PTR_RCX_(VALUE) and ax, word ptr [rcx + VALUE]
#define AND_AX_FROM_PTR_RDX_(VALUE) and ax, word ptr [rdx + VALUE]
#define AND_AX_FROM_PTR_RDI_(VALUE) and ax, word ptr [rdi + VALUE]
#define AND_AX_FROM_PTR_RSI_(VALUE) and ax, word ptr [rsi + VALUE]
#define AND_AX_FROM_PTR_RBP_(VALUE) and ax, word ptr [rbp + VALUE]
#define AND_AX_FROM_PTR_RSP_(VALUE) and ax, word ptr [rsp + VALUE]
#define AND_AX_FROM_PTR_R8_(VALUE) and ax, word ptr [r8 + VALUE]
#define AND_AX_FROM_PTR_R9_(VALUE) and ax, word ptr [r9 + VALUE]
#define AND_AX_FROM_PTR_R10_(VALUE) and ax, word ptr [r10 + VALUE]
#define AND_AX_FROM_PTR_R11_(VALUE) and ax, word ptr [r11 + VALUE]
#define AND_AX_FROM_PTR_R12_(VALUE) and ax, word ptr [r12 + VALUE]
#define AND_AX_FROM_PTR_R13_(VALUE) and ax, word ptr [r13 + VALUE]
#define AND_AX_FROM_PTR_R14_(VALUE) and ax, word ptr [r14 + VALUE]
#define AND_AX_FROM_PTR_R15_(VALUE) and ax, word ptr [r15 + VALUE]
#define AND_AX_FROM_PTR_EAX_(VALUE) and ax, word ptr [eax + VALUE]
#define AND_AX_FROM_PTR_EBX_(VALUE) and ax, word ptr [ebx + VALUE]
#define AND_AX_FROM_PTR_ECX_(VALUE) and ax, word ptr [ecx + VALUE]
#define AND_AX_FROM_PTR_EDX_(VALUE) and ax, word ptr [edx + VALUE]
#define AND_AX_FROM_PTR_EDI_(VALUE) and ax, word ptr [edi + VALUE]
#define AND_AX_FROM_PTR_ESI_(VALUE) and ax, word ptr [esi + VALUE]
#define AND_AX_FROM_PTR_EBP_(VALUE) and ax, word ptr [ebp + VALUE]
#define AND_AX_FROM_PTR_ESP_(VALUE) and ax, word ptr [esp + VALUE]

#define AND_BX_FROM_PTR_RAX_(VALUE) and bx, word ptr [rax + VALUE]
#define AND_BX_FROM_PTR_RBX_(VALUE) and bx, word ptr [rbx + VALUE]
#define AND_BX_FROM_PTR_RCX_(VALUE) and bx, word ptr [rcx + VALUE]
#define AND_BX_FROM_PTR_RDX_(VALUE) and bx, word ptr [rdx + VALUE]
#define AND_BX_FROM_PTR_RDI_(VALUE) and bx, word ptr [rdi + VALUE]
#define AND_BX_FROM_PTR_RSI_(VALUE) and bx, word ptr [rsi + VALUE]
#define AND_BX_FROM_PTR_RBP_(VALUE) and bx, word ptr [rbp + VALUE]
#define AND_BX_FROM_PTR_RSP_(VALUE) and bx, word ptr [rsp + VALUE]
#define AND_BX_FROM_PTR_R8_(VALUE) and bx, word ptr [r8 + VALUE]
#define AND_BX_FROM_PTR_R9_(VALUE) and bx, word ptr [r9 + VALUE]
#define AND_BX_FROM_PTR_R10_(VALUE) and bx, word ptr [r10 + VALUE]
#define AND_BX_FROM_PTR_R11_(VALUE) and bx, word ptr [r11 + VALUE]
#define AND_BX_FROM_PTR_R12_(VALUE) and bx, word ptr [r12 + VALUE]
#define AND_BX_FROM_PTR_R13_(VALUE) and bx, word ptr [r13 + VALUE]
#define AND_BX_FROM_PTR_R14_(VALUE) and bx, word ptr [r14 + VALUE]
#define AND_BX_FROM_PTR_R15_(VALUE) and bx, word ptr [r15 + VALUE]
#define AND_BX_FROM_PTR_EAX_(VALUE) and bx, word ptr [eax + VALUE]
#define AND_BX_FROM_PTR_EBX_(VALUE) and bx, word ptr [ebx + VALUE]
#define AND_BX_FROM_PTR_ECX_(VALUE) and bx, word ptr [ecx + VALUE]
#define AND_BX_FROM_PTR_EDX_(VALUE) and bx, word ptr [edx + VALUE]
#define AND_BX_FROM_PTR_EDI_(VALUE) and bx, word ptr [edi + VALUE]
#define AND_BX_FROM_PTR_ESI_(VALUE) and bx, word ptr [esi + VALUE]
#define AND_BX_FROM_PTR_EBP_(VALUE) and bx, word ptr [ebp + VALUE]
#define AND_BX_FROM_PTR_ESP_(VALUE) and bx, word ptr [esp + VALUE]

#define AND_CX_FROM_PTR_RAX_(VALUE) and cx, word ptr [rax + VALUE]
#define AND_CX_FROM_PTR_RBX_(VALUE) and cx, word ptr [rbx + VALUE]
#define AND_CX_FROM_PTR_RCX_(VALUE) and cx, word ptr [rcx + VALUE]
#define AND_CX_FROM_PTR_RDX_(VALUE) and cx, word ptr [rdx + VALUE]
#define AND_CX_FROM_PTR_RDI_(VALUE) and cx, word ptr [rdi + VALUE]
#define AND_CX_FROM_PTR_RSI_(VALUE) and cx, word ptr [rsi + VALUE]
#define AND_CX_FROM_PTR_RBP_(VALUE) and cx, word ptr [rbp + VALUE]
#define AND_CX_FROM_PTR_RSP_(VALUE) and cx, word ptr [rsp + VALUE]
#define AND_CX_FROM_PTR_R8_(VALUE) and cx, word ptr [r8 + VALUE]
#define AND_CX_FROM_PTR_R9_(VALUE) and cx, word ptr [r9 + VALUE]
#define AND_CX_FROM_PTR_R10_(VALUE) and cx, word ptr [r10 + VALUE]
#define AND_CX_FROM_PTR_R11_(VALUE) and cx, word ptr [r11 + VALUE]
#define AND_CX_FROM_PTR_R12_(VALUE) and cx, word ptr [r12 + VALUE]
#define AND_CX_FROM_PTR_R13_(VALUE) and cx, word ptr [r13 + VALUE]
#define AND_CX_FROM_PTR_R14_(VALUE) and cx, word ptr [r14 + VALUE]
#define AND_CX_FROM_PTR_R15_(VALUE) and cx, word ptr [r15 + VALUE]
#define AND_CX_FROM_PTR_EAX_(VALUE) and cx, word ptr [eax + VALUE]
#define AND_CX_FROM_PTR_EBX_(VALUE) and cx, word ptr [ebx + VALUE]
#define AND_CX_FROM_PTR_ECX_(VALUE) and cx, word ptr [ecx + VALUE]
#define AND_CX_FROM_PTR_EDX_(VALUE) and cx, word ptr [edx + VALUE]
#define AND_CX_FROM_PTR_EDI_(VALUE) and cx, word ptr [edi + VALUE]
#define AND_CX_FROM_PTR_ESI_(VALUE) and cx, word ptr [esi + VALUE]
#define AND_CX_FROM_PTR_EBP_(VALUE) and cx, word ptr [ebp + VALUE]
#define AND_CX_FROM_PTR_ESP_(VALUE) and cx, word ptr [esp + VALUE]

#define AND_DX_FROM_PTR_RAX_(VALUE) and dx, word ptr [rax + VALUE]
#define AND_DX_FROM_PTR_RBX_(VALUE) and dx, word ptr [rbx + VALUE]
#define AND_DX_FROM_PTR_RCX_(VALUE) and dx, word ptr [rcx + VALUE]
#define AND_DX_FROM_PTR_RDX_(VALUE) and dx, word ptr [rdx + VALUE]
#define AND_DX_FROM_PTR_RDI_(VALUE) and dx, word ptr [rdi + VALUE]
#define AND_DX_FROM_PTR_RSI_(VALUE) and dx, word ptr [rsi + VALUE]
#define AND_DX_FROM_PTR_RBP_(VALUE) and dx, word ptr [rbp + VALUE]
#define AND_DX_FROM_PTR_RSP_(VALUE) and dx, word ptr [rsp + VALUE]
#define AND_DX_FROM_PTR_R8_(VALUE) and dx, word ptr [r8 + VALUE]
#define AND_DX_FROM_PTR_R9_(VALUE) and dx, word ptr [r9 + VALUE]
#define AND_DX_FROM_PTR_R10_(VALUE) and dx, word ptr [r10 + VALUE]
#define AND_DX_FROM_PTR_R11_(VALUE) and dx, word ptr [r11 + VALUE]
#define AND_DX_FROM_PTR_R12_(VALUE) and dx, word ptr [r12 + VALUE]
#define AND_DX_FROM_PTR_R13_(VALUE) and dx, word ptr [r13 + VALUE]
#define AND_DX_FROM_PTR_R14_(VALUE) and dx, word ptr [r14 + VALUE]
#define AND_DX_FROM_PTR_R15_(VALUE) and dx, word ptr [r15 + VALUE]
#define AND_DX_FROM_PTR_EAX_(VALUE) and dx, word ptr [eax + VALUE]
#define AND_DX_FROM_PTR_EBX_(VALUE) and dx, word ptr [ebx + VALUE]
#define AND_DX_FROM_PTR_ECX_(VALUE) and dx, word ptr [ecx + VALUE]
#define AND_DX_FROM_PTR_EDX_(VALUE) and dx, word ptr [edx + VALUE]
#define AND_DX_FROM_PTR_EDI_(VALUE) and dx, word ptr [edi + VALUE]
#define AND_DX_FROM_PTR_ESI_(VALUE) and dx, word ptr [esi + VALUE]
#define AND_DX_FROM_PTR_EBP_(VALUE) and dx, word ptr [ebp + VALUE]
#define AND_DX_FROM_PTR_ESP_(VALUE) and dx, word ptr [esp + VALUE]

#define AND_DI_FROM_PTR_RAX_(VALUE) and di, word ptr [rax + VALUE]
#define AND_DI_FROM_PTR_RBX_(VALUE) and di, word ptr [rbx + VALUE]
#define AND_DI_FROM_PTR_RCX_(VALUE) and di, word ptr [rcx + VALUE]
#define AND_DI_FROM_PTR_RDX_(VALUE) and di, word ptr [rdx + VALUE]
#define AND_DI_FROM_PTR_RDI_(VALUE) and di, word ptr [rdi + VALUE]
#define AND_DI_FROM_PTR_RSI_(VALUE) and di, word ptr [rsi + VALUE]
#define AND_DI_FROM_PTR_RBP_(VALUE) and di, word ptr [rbp + VALUE]
#define AND_DI_FROM_PTR_RSP_(VALUE) and di, word ptr [rsp + VALUE]
#define AND_DI_FROM_PTR_R8_(VALUE) and di, word ptr [r8 + VALUE]
#define AND_DI_FROM_PTR_R9_(VALUE) and di, word ptr [r9 + VALUE]
#define AND_DI_FROM_PTR_R10_(VALUE) and di, word ptr [r10 + VALUE]
#define AND_DI_FROM_PTR_R11_(VALUE) and di, word ptr [r11 + VALUE]
#define AND_DI_FROM_PTR_R12_(VALUE) and di, word ptr [r12 + VALUE]
#define AND_DI_FROM_PTR_R13_(VALUE) and di, word ptr [r13 + VALUE]
#define AND_DI_FROM_PTR_R14_(VALUE) and di, word ptr [r14 + VALUE]
#define AND_DI_FROM_PTR_R15_(VALUE) and di, word ptr [r15 + VALUE]
#define AND_DI_FROM_PTR_EAX_(VALUE) and di, word ptr [eax + VALUE]
#define AND_DI_FROM_PTR_EBX_(VALUE) and di, word ptr [ebx + VALUE]
#define AND_DI_FROM_PTR_ECX_(VALUE) and di, word ptr [ecx + VALUE]
#define AND_DI_FROM_PTR_EDX_(VALUE) and di, word ptr [edx + VALUE]
#define AND_DI_FROM_PTR_EDI_(VALUE) and di, word ptr [edi + VALUE]
#define AND_DI_FROM_PTR_ESI_(VALUE) and di, word ptr [esi + VALUE]
#define AND_DI_FROM_PTR_EBP_(VALUE) and di, word ptr [ebp + VALUE]
#define AND_DI_FROM_PTR_ESP_(VALUE) and di, word ptr [esp + VALUE]

#define AND_SI_FROM_PTR_RAX_(VALUE) and si, word ptr [rax + VALUE]
#define AND_SI_FROM_PTR_RBX_(VALUE) and si, word ptr [rbx + VALUE]
#define AND_SI_FROM_PTR_RCX_(VALUE) and si, word ptr [rcx + VALUE]
#define AND_SI_FROM_PTR_RDX_(VALUE) and si, word ptr [rdx + VALUE]
#define AND_SI_FROM_PTR_RDI_(VALUE) and si, word ptr [rdi + VALUE]
#define AND_SI_FROM_PTR_RSI_(VALUE) and si, word ptr [rsi + VALUE]
#define AND_SI_FROM_PTR_RBP_(VALUE) and si, word ptr [rbp + VALUE]
#define AND_SI_FROM_PTR_RSP_(VALUE) and si, word ptr [rsp + VALUE]
#define AND_SI_FROM_PTR_R8_(VALUE) and si, word ptr [r8 + VALUE]
#define AND_SI_FROM_PTR_R9_(VALUE) and si, word ptr [r9 + VALUE]
#define AND_SI_FROM_PTR_R10_(VALUE) and si, word ptr [r10 + VALUE]
#define AND_SI_FROM_PTR_R11_(VALUE) and si, word ptr [r11 + VALUE]
#define AND_SI_FROM_PTR_R12_(VALUE) and si, word ptr [r12 + VALUE]
#define AND_SI_FROM_PTR_R13_(VALUE) and si, word ptr [r13 + VALUE]
#define AND_SI_FROM_PTR_R14_(VALUE) and si, word ptr [r14 + VALUE]
#define AND_SI_FROM_PTR_R15_(VALUE) and si, word ptr [r15 + VALUE]
#define AND_SI_FROM_PTR_EAX_(VALUE) and si, word ptr [eax + VALUE]
#define AND_SI_FROM_PTR_EBX_(VALUE) and si, word ptr [ebx + VALUE]
#define AND_SI_FROM_PTR_ECX_(VALUE) and si, word ptr [ecx + VALUE]
#define AND_SI_FROM_PTR_EDX_(VALUE) and si, word ptr [edx + VALUE]
#define AND_SI_FROM_PTR_EDI_(VALUE) and si, word ptr [edi + VALUE]
#define AND_SI_FROM_PTR_ESI_(VALUE) and si, word ptr [esi + VALUE]
#define AND_SI_FROM_PTR_EBP_(VALUE) and si, word ptr [ebp + VALUE]
#define AND_SI_FROM_PTR_ESP_(VALUE) and si, word ptr [esp + VALUE]

#define AND_BP_FROM_PTR_RAX_(VALUE) and bp, word ptr [rax + VALUE]
#define AND_BP_FROM_PTR_RBX_(VALUE) and bp, word ptr [rbx + VALUE]
#define AND_BP_FROM_PTR_RCX_(VALUE) and bp, word ptr [rcx + VALUE]
#define AND_BP_FROM_PTR_RDX_(VALUE) and bp, word ptr [rdx + VALUE]
#define AND_BP_FROM_PTR_RDI_(VALUE) and bp, word ptr [rdi + VALUE]
#define AND_BP_FROM_PTR_RSI_(VALUE) and bp, word ptr [rsi + VALUE]
#define AND_BP_FROM_PTR_RBP_(VALUE) and bp, word ptr [rbp + VALUE]
#define AND_BP_FROM_PTR_RSP_(VALUE) and bp, word ptr [rsp + VALUE]
#define AND_BP_FROM_PTR_R8_(VALUE) and bp, word ptr [r8 + VALUE]
#define AND_BP_FROM_PTR_R9_(VALUE) and bp, word ptr [r9 + VALUE]
#define AND_BP_FROM_PTR_R10_(VALUE) and bp, word ptr [r10 + VALUE]
#define AND_BP_FROM_PTR_R11_(VALUE) and bp, word ptr [r11 + VALUE]
#define AND_BP_FROM_PTR_R12_(VALUE) and bp, word ptr [r12 + VALUE]
#define AND_BP_FROM_PTR_R13_(VALUE) and bp, word ptr [r13 + VALUE]
#define AND_BP_FROM_PTR_R14_(VALUE) and bp, word ptr [r14 + VALUE]
#define AND_BP_FROM_PTR_R15_(VALUE) and bp, word ptr [r15 + VALUE]
#define AND_BP_FROM_PTR_EAX_(VALUE) and bp, word ptr [eax + VALUE]
#define AND_BP_FROM_PTR_EBX_(VALUE) and bp, word ptr [ebx + VALUE]
#define AND_BP_FROM_PTR_ECX_(VALUE) and bp, word ptr [ecx + VALUE]
#define AND_BP_FROM_PTR_EDX_(VALUE) and bp, word ptr [edx + VALUE]
#define AND_BP_FROM_PTR_EDI_(VALUE) and bp, word ptr [edi + VALUE]
#define AND_BP_FROM_PTR_ESI_(VALUE) and bp, word ptr [esi + VALUE]
#define AND_BP_FROM_PTR_EBP_(VALUE) and bp, word ptr [ebp + VALUE]
#define AND_BP_FROM_PTR_ESP_(VALUE) and bp, word ptr [esp + VALUE]

#define AND_SP_FROM_PTR_RAX_(VALUE) and sp, word ptr [rax + VALUE]
#define AND_SP_FROM_PTR_RBX_(VALUE) and sp, word ptr [rbx + VALUE]
#define AND_SP_FROM_PTR_RCX_(VALUE) and sp, word ptr [rcx + VALUE]
#define AND_SP_FROM_PTR_RDX_(VALUE) and sp, word ptr [rdx + VALUE]
#define AND_SP_FROM_PTR_RDI_(VALUE) and sp, word ptr [rdi + VALUE]
#define AND_SP_FROM_PTR_RSI_(VALUE) and sp, word ptr [rsi + VALUE]
#define AND_SP_FROM_PTR_RBP_(VALUE) and sp, word ptr [rbp + VALUE]
#define AND_SP_FROM_PTR_RSP_(VALUE) and sp, word ptr [rsp + VALUE]
#define AND_SP_FROM_PTR_R8_(VALUE) and sp, word ptr [r8 + VALUE]
#define AND_SP_FROM_PTR_R9_(VALUE) and sp, word ptr [r9 + VALUE]
#define AND_SP_FROM_PTR_R10_(VALUE) and sp, word ptr [r10 + VALUE]
#define AND_SP_FROM_PTR_R11_(VALUE) and sp, word ptr [r11 + VALUE]
#define AND_SP_FROM_PTR_R12_(VALUE) and sp, word ptr [r12 + VALUE]
#define AND_SP_FROM_PTR_R13_(VALUE) and sp, word ptr [r13 + VALUE]
#define AND_SP_FROM_PTR_R14_(VALUE) and sp, word ptr [r14 + VALUE]
#define AND_SP_FROM_PTR_R15_(VALUE) and sp, word ptr [r15 + VALUE]
#define AND_SP_FROM_PTR_EAX_(VALUE) and sp, word ptr [eax + VALUE]
#define AND_SP_FROM_PTR_EBX_(VALUE) and sp, word ptr [ebx + VALUE]
#define AND_SP_FROM_PTR_ECX_(VALUE) and sp, word ptr [ecx + VALUE]
#define AND_SP_FROM_PTR_EDX_(VALUE) and sp, word ptr [edx + VALUE]
#define AND_SP_FROM_PTR_EDI_(VALUE) and sp, word ptr [edi + VALUE]
#define AND_SP_FROM_PTR_ESI_(VALUE) and sp, word ptr [esi + VALUE]
#define AND_SP_FROM_PTR_EBP_(VALUE) and sp, word ptr [ebp + VALUE]
#define AND_SP_FROM_PTR_ESP_(VALUE) and sp, word ptr [esp + VALUE]

#define AND_R8W_FROM_PTR_RAX_(VALUE) and r8w, word ptr [rax + VALUE]
#define AND_R8W_FROM_PTR_RBX_(VALUE) and r8w, word ptr [rbx + VALUE]
#define AND_R8W_FROM_PTR_RCX_(VALUE) and r8w, word ptr [rcx + VALUE]
#define AND_R8W_FROM_PTR_RDX_(VALUE) and r8w, word ptr [rdx + VALUE]
#define AND_R8W_FROM_PTR_RDI_(VALUE) and r8w, word ptr [rdi + VALUE]
#define AND_R8W_FROM_PTR_RSI_(VALUE) and r8w, word ptr [rsi + VALUE]
#define AND_R8W_FROM_PTR_RBP_(VALUE) and r8w, word ptr [rbp + VALUE]
#define AND_R8W_FROM_PTR_RSP_(VALUE) and r8w, word ptr [rsp + VALUE]
#define AND_R8W_FROM_PTR_R8_(VALUE) and r8w, word ptr [r8 + VALUE]
#define AND_R8W_FROM_PTR_R9_(VALUE) and r8w, word ptr [r9 + VALUE]
#define AND_R8W_FROM_PTR_R10_(VALUE) and r8w, word ptr [r10 + VALUE]
#define AND_R8W_FROM_PTR_R11_(VALUE) and r8w, word ptr [r11 + VALUE]
#define AND_R8W_FROM_PTR_R12_(VALUE) and r8w, word ptr [r12 + VALUE]
#define AND_R8W_FROM_PTR_R13_(VALUE) and r8w, word ptr [r13 + VALUE]
#define AND_R8W_FROM_PTR_R14_(VALUE) and r8w, word ptr [r14 + VALUE]
#define AND_R8W_FROM_PTR_R15_(VALUE) and r8w, word ptr [r15 + VALUE]
#define AND_R8W_FROM_PTR_EAX_(VALUE) and r8w, word ptr [eax + VALUE]
#define AND_R8W_FROM_PTR_EBX_(VALUE) and r8w, word ptr [ebx + VALUE]
#define AND_R8W_FROM_PTR_ECX_(VALUE) and r8w, word ptr [ecx + VALUE]
#define AND_R8W_FROM_PTR_EDX_(VALUE) and r8w, word ptr [edx + VALUE]
#define AND_R8W_FROM_PTR_EDI_(VALUE) and r8w, word ptr [edi + VALUE]
#define AND_R8W_FROM_PTR_ESI_(VALUE) and r8w, word ptr [esi + VALUE]
#define AND_R8W_FROM_PTR_EBP_(VALUE) and r8w, word ptr [ebp + VALUE]
#define AND_R8W_FROM_PTR_ESP_(VALUE) and r8w, word ptr [esp + VALUE]

#define AND_R9W_FROM_PTR_RAX_(VALUE) and r9w, word ptr [rax + VALUE]
#define AND_R9W_FROM_PTR_RBX_(VALUE) and r9w, word ptr [rbx + VALUE]
#define AND_R9W_FROM_PTR_RCX_(VALUE) and r9w, word ptr [rcx + VALUE]
#define AND_R9W_FROM_PTR_RDX_(VALUE) and r9w, word ptr [rdx + VALUE]
#define AND_R9W_FROM_PTR_RDI_(VALUE) and r9w, word ptr [rdi + VALUE]
#define AND_R9W_FROM_PTR_RSI_(VALUE) and r9w, word ptr [rsi + VALUE]
#define AND_R9W_FROM_PTR_RBP_(VALUE) and r9w, word ptr [rbp + VALUE]
#define AND_R9W_FROM_PTR_RSP_(VALUE) and r9w, word ptr [rsp + VALUE]
#define AND_R9W_FROM_PTR_R8_(VALUE) and r9w, word ptr [r8 + VALUE]
#define AND_R9W_FROM_PTR_R9_(VALUE) and r9w, word ptr [r9 + VALUE]
#define AND_R9W_FROM_PTR_R10_(VALUE) and r9w, word ptr [r10 + VALUE]
#define AND_R9W_FROM_PTR_R11_(VALUE) and r9w, word ptr [r11 + VALUE]
#define AND_R9W_FROM_PTR_R12_(VALUE) and r9w, word ptr [r12 + VALUE]
#define AND_R9W_FROM_PTR_R13_(VALUE) and r9w, word ptr [r13 + VALUE]
#define AND_R9W_FROM_PTR_R14_(VALUE) and r9w, word ptr [r14 + VALUE]
#define AND_R9W_FROM_PTR_R15_(VALUE) and r9w, word ptr [r15 + VALUE]
#define AND_R9W_FROM_PTR_EAX_(VALUE) and r9w, word ptr [eax + VALUE]
#define AND_R9W_FROM_PTR_EBX_(VALUE) and r9w, word ptr [ebx + VALUE]
#define AND_R9W_FROM_PTR_ECX_(VALUE) and r9w, word ptr [ecx + VALUE]
#define AND_R9W_FROM_PTR_EDX_(VALUE) and r9w, word ptr [edx + VALUE]
#define AND_R9W_FROM_PTR_EDI_(VALUE) and r9w, word ptr [edi + VALUE]
#define AND_R9W_FROM_PTR_ESI_(VALUE) and r9w, word ptr [esi + VALUE]
#define AND_R9W_FROM_PTR_EBP_(VALUE) and r9w, word ptr [ebp + VALUE]
#define AND_R9W_FROM_PTR_ESP_(VALUE) and r9w, word ptr [esp + VALUE]

#define AND_R10W_FROM_PTR_RAX_(VALUE) and r10w, word ptr [rax + VALUE]
#define AND_R10W_FROM_PTR_RBX_(VALUE) and r10w, word ptr [rbx + VALUE]
#define AND_R10W_FROM_PTR_RCX_(VALUE) and r10w, word ptr [rcx + VALUE]
#define AND_R10W_FROM_PTR_RDX_(VALUE) and r10w, word ptr [rdx + VALUE]
#define AND_R10W_FROM_PTR_RDI_(VALUE) and r10w, word ptr [rdi + VALUE]
#define AND_R10W_FROM_PTR_RSI_(VALUE) and r10w, word ptr [rsi + VALUE]
#define AND_R10W_FROM_PTR_RBP_(VALUE) and r10w, word ptr [rbp + VALUE]
#define AND_R10W_FROM_PTR_RSP_(VALUE) and r10w, word ptr [rsp + VALUE]
#define AND_R10W_FROM_PTR_R8_(VALUE) and r10w, word ptr [r8 + VALUE]
#define AND_R10W_FROM_PTR_R9_(VALUE) and r10w, word ptr [r9 + VALUE]
#define AND_R10W_FROM_PTR_R10_(VALUE) and r10w, word ptr [r10 + VALUE]
#define AND_R10W_FROM_PTR_R11_(VALUE) and r10w, word ptr [r11 + VALUE]
#define AND_R10W_FROM_PTR_R12_(VALUE) and r10w, word ptr [r12 + VALUE]
#define AND_R10W_FROM_PTR_R13_(VALUE) and r10w, word ptr [r13 + VALUE]
#define AND_R10W_FROM_PTR_R14_(VALUE) and r10w, word ptr [r14 + VALUE]
#define AND_R10W_FROM_PTR_R15_(VALUE) and r10w, word ptr [r15 + VALUE]
#define AND_R10W_FROM_PTR_EAX_(VALUE) and r10w, word ptr [eax + VALUE]
#define AND_R10W_FROM_PTR_EBX_(VALUE) and r10w, word ptr [ebx + VALUE]
#define AND_R10W_FROM_PTR_ECX_(VALUE) and r10w, word ptr [ecx + VALUE]
#define AND_R10W_FROM_PTR_EDX_(VALUE) and r10w, word ptr [edx + VALUE]
#define AND_R10W_FROM_PTR_EDI_(VALUE) and r10w, word ptr [edi + VALUE]
#define AND_R10W_FROM_PTR_ESI_(VALUE) and r10w, word ptr [esi + VALUE]
#define AND_R10W_FROM_PTR_EBP_(VALUE) and r10w, word ptr [ebp + VALUE]
#define AND_R10W_FROM_PTR_ESP_(VALUE) and r10w, word ptr [esp + VALUE]

#define AND_R11W_FROM_PTR_RAX_(VALUE) and r11w, word ptr [rax + VALUE]
#define AND_R11W_FROM_PTR_RBX_(VALUE) and r11w, word ptr [rbx + VALUE]
#define AND_R11W_FROM_PTR_RCX_(VALUE) and r11w, word ptr [rcx + VALUE]
#define AND_R11W_FROM_PTR_RDX_(VALUE) and r11w, word ptr [rdx + VALUE]
#define AND_R11W_FROM_PTR_RDI_(VALUE) and r11w, word ptr [rdi + VALUE]
#define AND_R11W_FROM_PTR_RSI_(VALUE) and r11w, word ptr [rsi + VALUE]
#define AND_R11W_FROM_PTR_RBP_(VALUE) and r11w, word ptr [rbp + VALUE]
#define AND_R11W_FROM_PTR_RSP_(VALUE) and r11w, word ptr [rsp + VALUE]
#define AND_R11W_FROM_PTR_R8_(VALUE) and r11w, word ptr [r8 + VALUE]
#define AND_R11W_FROM_PTR_R9_(VALUE) and r11w, word ptr [r9 + VALUE]
#define AND_R11W_FROM_PTR_R10_(VALUE) and r11w, word ptr [r10 + VALUE]
#define AND_R11W_FROM_PTR_R11_(VALUE) and r11w, word ptr [r11 + VALUE]
#define AND_R11W_FROM_PTR_R12_(VALUE) and r11w, word ptr [r12 + VALUE]
#define AND_R11W_FROM_PTR_R13_(VALUE) and r11w, word ptr [r13 + VALUE]
#define AND_R11W_FROM_PTR_R14_(VALUE) and r11w, word ptr [r14 + VALUE]
#define AND_R11W_FROM_PTR_R15_(VALUE) and r11w, word ptr [r15 + VALUE]
#define AND_R11W_FROM_PTR_EAX_(VALUE) and r11w, word ptr [eax + VALUE]
#define AND_R11W_FROM_PTR_EBX_(VALUE) and r11w, word ptr [ebx + VALUE]
#define AND_R11W_FROM_PTR_ECX_(VALUE) and r11w, word ptr [ecx + VALUE]
#define AND_R11W_FROM_PTR_EDX_(VALUE) and r11w, word ptr [edx + VALUE]
#define AND_R11W_FROM_PTR_EDI_(VALUE) and r11w, word ptr [edi + VALUE]
#define AND_R11W_FROM_PTR_ESI_(VALUE) and r11w, word ptr [esi + VALUE]
#define AND_R11W_FROM_PTR_EBP_(VALUE) and r11w, word ptr [ebp + VALUE]
#define AND_R11W_FROM_PTR_ESP_(VALUE) and r11w, word ptr [esp + VALUE]

#define AND_R12W_FROM_PTR_RAX_(VALUE) and r12w, word ptr [rax + VALUE]
#define AND_R12W_FROM_PTR_RBX_(VALUE) and r12w, word ptr [rbx + VALUE]
#define AND_R12W_FROM_PTR_RCX_(VALUE) and r12w, word ptr [rcx + VALUE]
#define AND_R12W_FROM_PTR_RDX_(VALUE) and r12w, word ptr [rdx + VALUE]
#define AND_R12W_FROM_PTR_RDI_(VALUE) and r12w, word ptr [rdi + VALUE]
#define AND_R12W_FROM_PTR_RSI_(VALUE) and r12w, word ptr [rsi + VALUE]
#define AND_R12W_FROM_PTR_RBP_(VALUE) and r12w, word ptr [rbp + VALUE]
#define AND_R12W_FROM_PTR_RSP_(VALUE) and r12w, word ptr [rsp + VALUE]
#define AND_R12W_FROM_PTR_R8_(VALUE) and r12w, word ptr [r8 + VALUE]
#define AND_R12W_FROM_PTR_R9_(VALUE) and r12w, word ptr [r9 + VALUE]
#define AND_R12W_FROM_PTR_R10_(VALUE) and r12w, word ptr [r10 + VALUE]
#define AND_R12W_FROM_PTR_R11_(VALUE) and r12w, word ptr [r11 + VALUE]
#define AND_R12W_FROM_PTR_R12_(VALUE) and r12w, word ptr [r12 + VALUE]
#define AND_R12W_FROM_PTR_R13_(VALUE) and r12w, word ptr [r13 + VALUE]
#define AND_R12W_FROM_PTR_R14_(VALUE) and r12w, word ptr [r14 + VALUE]
#define AND_R12W_FROM_PTR_R15_(VALUE) and r12w, word ptr [r15 + VALUE]
#define AND_R12W_FROM_PTR_EAX_(VALUE) and r12w, word ptr [eax + VALUE]
#define AND_R12W_FROM_PTR_EBX_(VALUE) and r12w, word ptr [ebx + VALUE]
#define AND_R12W_FROM_PTR_ECX_(VALUE) and r12w, word ptr [ecx + VALUE]
#define AND_R12W_FROM_PTR_EDX_(VALUE) and r12w, word ptr [edx + VALUE]
#define AND_R12W_FROM_PTR_EDI_(VALUE) and r12w, word ptr [edi + VALUE]
#define AND_R12W_FROM_PTR_ESI_(VALUE) and r12w, word ptr [esi + VALUE]
#define AND_R12W_FROM_PTR_EBP_(VALUE) and r12w, word ptr [ebp + VALUE]
#define AND_R12W_FROM_PTR_ESP_(VALUE) and r12w, word ptr [esp + VALUE]

#define AND_R13W_FROM_PTR_RAX_(VALUE) and r13w, word ptr [rax + VALUE]
#define AND_R13W_FROM_PTR_RBX_(VALUE) and r13w, word ptr [rbx + VALUE]
#define AND_R13W_FROM_PTR_RCX_(VALUE) and r13w, word ptr [rcx + VALUE]
#define AND_R13W_FROM_PTR_RDX_(VALUE) and r13w, word ptr [rdx + VALUE]
#define AND_R13W_FROM_PTR_RDI_(VALUE) and r13w, word ptr [rdi + VALUE]
#define AND_R13W_FROM_PTR_RSI_(VALUE) and r13w, word ptr [rsi + VALUE]
#define AND_R13W_FROM_PTR_RBP_(VALUE) and r13w, word ptr [rbp + VALUE]
#define AND_R13W_FROM_PTR_RSP_(VALUE) and r13w, word ptr [rsp + VALUE]
#define AND_R13W_FROM_PTR_R8_(VALUE) and r13w, word ptr [r8 + VALUE]
#define AND_R13W_FROM_PTR_R9_(VALUE) and r13w, word ptr [r9 + VALUE]
#define AND_R13W_FROM_PTR_R10_(VALUE) and r13w, word ptr [r10 + VALUE]
#define AND_R13W_FROM_PTR_R11_(VALUE) and r13w, word ptr [r11 + VALUE]
#define AND_R13W_FROM_PTR_R12_(VALUE) and r13w, word ptr [r12 + VALUE]
#define AND_R13W_FROM_PTR_R13_(VALUE) and r13w, word ptr [r13 + VALUE]
#define AND_R13W_FROM_PTR_R14_(VALUE) and r13w, word ptr [r14 + VALUE]
#define AND_R13W_FROM_PTR_R15_(VALUE) and r13w, word ptr [r15 + VALUE]
#define AND_R13W_FROM_PTR_EAX_(VALUE) and r13w, word ptr [eax + VALUE]
#define AND_R13W_FROM_PTR_EBX_(VALUE) and r13w, word ptr [ebx + VALUE]
#define AND_R13W_FROM_PTR_ECX_(VALUE) and r13w, word ptr [ecx + VALUE]
#define AND_R13W_FROM_PTR_EDX_(VALUE) and r13w, word ptr [edx + VALUE]
#define AND_R13W_FROM_PTR_EDI_(VALUE) and r13w, word ptr [edi + VALUE]
#define AND_R13W_FROM_PTR_ESI_(VALUE) and r13w, word ptr [esi + VALUE]
#define AND_R13W_FROM_PTR_EBP_(VALUE) and r13w, word ptr [ebp + VALUE]
#define AND_R13W_FROM_PTR_ESP_(VALUE) and r13w, word ptr [esp + VALUE]

#define AND_R14W_FROM_PTR_RAX_(VALUE) and r14w, word ptr [rax + VALUE]
#define AND_R14W_FROM_PTR_RBX_(VALUE) and r14w, word ptr [rbx + VALUE]
#define AND_R14W_FROM_PTR_RCX_(VALUE) and r14w, word ptr [rcx + VALUE]
#define AND_R14W_FROM_PTR_RDX_(VALUE) and r14w, word ptr [rdx + VALUE]
#define AND_R14W_FROM_PTR_RDI_(VALUE) and r14w, word ptr [rdi + VALUE]
#define AND_R14W_FROM_PTR_RSI_(VALUE) and r14w, word ptr [rsi + VALUE]
#define AND_R14W_FROM_PTR_RBP_(VALUE) and r14w, word ptr [rbp + VALUE]
#define AND_R14W_FROM_PTR_RSP_(VALUE) and r14w, word ptr [rsp + VALUE]
#define AND_R14W_FROM_PTR_R8_(VALUE) and r14w, word ptr [r8 + VALUE]
#define AND_R14W_FROM_PTR_R9_(VALUE) and r14w, word ptr [r9 + VALUE]
#define AND_R14W_FROM_PTR_R10_(VALUE) and r14w, word ptr [r10 + VALUE]
#define AND_R14W_FROM_PTR_R11_(VALUE) and r14w, word ptr [r11 + VALUE]
#define AND_R14W_FROM_PTR_R12_(VALUE) and r14w, word ptr [r12 + VALUE]
#define AND_R14W_FROM_PTR_R13_(VALUE) and r14w, word ptr [r13 + VALUE]
#define AND_R14W_FROM_PTR_R14_(VALUE) and r14w, word ptr [r14 + VALUE]
#define AND_R14W_FROM_PTR_R15_(VALUE) and r14w, word ptr [r15 + VALUE]
#define AND_R14W_FROM_PTR_EAX_(VALUE) and r14w, word ptr [eax + VALUE]
#define AND_R14W_FROM_PTR_EBX_(VALUE) and r14w, word ptr [ebx + VALUE]
#define AND_R14W_FROM_PTR_ECX_(VALUE) and r14w, word ptr [ecx + VALUE]
#define AND_R14W_FROM_PTR_EDX_(VALUE) and r14w, word ptr [edx + VALUE]
#define AND_R14W_FROM_PTR_EDI_(VALUE) and r14w, word ptr [edi + VALUE]
#define AND_R14W_FROM_PTR_ESI_(VALUE) and r14w, word ptr [esi + VALUE]
#define AND_R14W_FROM_PTR_EBP_(VALUE) and r14w, word ptr [ebp + VALUE]
#define AND_R14W_FROM_PTR_ESP_(VALUE) and r14w, word ptr [esp + VALUE]

#define AND_R15W_FROM_PTR_RAX_(VALUE) and r15w, word ptr [rax + VALUE]
#define AND_R15W_FROM_PTR_RBX_(VALUE) and r15w, word ptr [rbx + VALUE]
#define AND_R15W_FROM_PTR_RCX_(VALUE) and r15w, word ptr [rcx + VALUE]
#define AND_R15W_FROM_PTR_RDX_(VALUE) and r15w, word ptr [rdx + VALUE]
#define AND_R15W_FROM_PTR_RDI_(VALUE) and r15w, word ptr [rdi + VALUE]
#define AND_R15W_FROM_PTR_RSI_(VALUE) and r15w, word ptr [rsi + VALUE]
#define AND_R15W_FROM_PTR_RBP_(VALUE) and r15w, word ptr [rbp + VALUE]
#define AND_R15W_FROM_PTR_RSP_(VALUE) and r15w, word ptr [rsp + VALUE]
#define AND_R15W_FROM_PTR_R8_(VALUE) and r15w, word ptr [r8 + VALUE]
#define AND_R15W_FROM_PTR_R9_(VALUE) and r15w, word ptr [r9 + VALUE]
#define AND_R15W_FROM_PTR_R10_(VALUE) and r15w, word ptr [r10 + VALUE]
#define AND_R15W_FROM_PTR_R11_(VALUE) and r15w, word ptr [r11 + VALUE]
#define AND_R15W_FROM_PTR_R12_(VALUE) and r15w, word ptr [r12 + VALUE]
#define AND_R15W_FROM_PTR_R13_(VALUE) and r15w, word ptr [r13 + VALUE]
#define AND_R15W_FROM_PTR_R14_(VALUE) and r15w, word ptr [r14 + VALUE]
#define AND_R15W_FROM_PTR_R15_(VALUE) and r15w, word ptr [r15 + VALUE]
#define AND_R15W_FROM_PTR_EAX_(VALUE) and r15w, word ptr [eax + VALUE]
#define AND_R15W_FROM_PTR_EBX_(VALUE) and r15w, word ptr [ebx + VALUE]
#define AND_R15W_FROM_PTR_ECX_(VALUE) and r15w, word ptr [ecx + VALUE]
#define AND_R15W_FROM_PTR_EDX_(VALUE) and r15w, word ptr [edx + VALUE]
#define AND_R15W_FROM_PTR_EDI_(VALUE) and r15w, word ptr [edi + VALUE]
#define AND_R15W_FROM_PTR_ESI_(VALUE) and r15w, word ptr [esi + VALUE]
#define AND_R15W_FROM_PTR_EBP_(VALUE) and r15w, word ptr [ebp + VALUE]
#define AND_R15W_FROM_PTR_ESP_(VALUE) and r15w, word ptr [esp + VALUE]

#define AND_AX_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], ax
#define AND_AX_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], ax
#define AND_AX_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], ax
#define AND_AX_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], ax
#define AND_AX_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], ax
#define AND_AX_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], ax
#define AND_AX_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], ax
#define AND_AX_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], ax
#define AND_AX_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], ax
#define AND_AX_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], ax
#define AND_AX_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], ax
#define AND_AX_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], ax
#define AND_AX_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], ax
#define AND_AX_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], ax
#define AND_AX_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], ax
#define AND_AX_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], ax
#define AND_AX_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], ax
#define AND_AX_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], ax
#define AND_AX_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], ax
#define AND_AX_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], ax
#define AND_AX_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], ax
#define AND_AX_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], ax
#define AND_AX_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], ax
#define AND_AX_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], ax

#define AND_BX_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], bx
#define AND_BX_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], bx
#define AND_BX_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], bx
#define AND_BX_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], bx
#define AND_BX_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], bx
#define AND_BX_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], bx
#define AND_BX_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], bx
#define AND_BX_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], bx
#define AND_BX_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], bx
#define AND_BX_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], bx
#define AND_BX_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], bx
#define AND_BX_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], bx
#define AND_BX_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], bx
#define AND_BX_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], bx
#define AND_BX_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], bx
#define AND_BX_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], bx
#define AND_BX_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], bx
#define AND_BX_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], bx
#define AND_BX_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], bx
#define AND_BX_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], bx
#define AND_BX_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], bx
#define AND_BX_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], bx
#define AND_BX_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], bx
#define AND_BX_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], bx

#define AND_CX_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], cx
#define AND_CX_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], cx
#define AND_CX_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], cx
#define AND_CX_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], cx
#define AND_CX_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], cx
#define AND_CX_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], cx
#define AND_CX_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], cx
#define AND_CX_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], cx
#define AND_CX_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], cx
#define AND_CX_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], cx
#define AND_CX_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], cx
#define AND_CX_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], cx
#define AND_CX_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], cx
#define AND_CX_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], cx
#define AND_CX_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], cx
#define AND_CX_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], cx
#define AND_CX_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], cx
#define AND_CX_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], cx
#define AND_CX_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], cx
#define AND_CX_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], cx
#define AND_CX_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], cx
#define AND_CX_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], cx
#define AND_CX_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], cx
#define AND_CX_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], cx

#define AND_DX_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], dx
#define AND_DX_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], dx
#define AND_DX_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], dx
#define AND_DX_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], dx
#define AND_DX_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], dx
#define AND_DX_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], dx
#define AND_DX_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], dx
#define AND_DX_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], dx
#define AND_DX_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], dx
#define AND_DX_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], dx
#define AND_DX_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], dx
#define AND_DX_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], dx
#define AND_DX_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], dx
#define AND_DX_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], dx
#define AND_DX_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], dx
#define AND_DX_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], dx
#define AND_DX_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], dx
#define AND_DX_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], dx
#define AND_DX_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], dx
#define AND_DX_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], dx
#define AND_DX_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], dx
#define AND_DX_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], dx
#define AND_DX_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], dx
#define AND_DX_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], dx

#define AND_DI_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], di
#define AND_DI_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], di
#define AND_DI_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], di
#define AND_DI_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], di
#define AND_DI_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], di
#define AND_DI_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], di
#define AND_DI_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], di
#define AND_DI_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], di
#define AND_DI_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], di
#define AND_DI_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], di
#define AND_DI_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], di
#define AND_DI_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], di
#define AND_DI_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], di
#define AND_DI_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], di
#define AND_DI_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], di
#define AND_DI_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], di
#define AND_DI_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], di
#define AND_DI_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], di
#define AND_DI_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], di
#define AND_DI_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], di
#define AND_DI_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], di
#define AND_DI_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], di
#define AND_DI_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], di
#define AND_DI_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], di

#define AND_SI_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], si
#define AND_SI_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], si
#define AND_SI_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], si
#define AND_SI_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], si
#define AND_SI_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], si
#define AND_SI_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], si
#define AND_SI_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], si
#define AND_SI_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], si
#define AND_SI_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], si
#define AND_SI_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], si
#define AND_SI_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], si
#define AND_SI_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], si
#define AND_SI_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], si
#define AND_SI_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], si
#define AND_SI_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], si
#define AND_SI_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], si
#define AND_SI_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], si
#define AND_SI_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], si
#define AND_SI_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], si
#define AND_SI_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], si
#define AND_SI_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], si
#define AND_SI_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], si
#define AND_SI_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], si
#define AND_SI_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], si

#define AND_BP_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], bp
#define AND_BP_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], bp
#define AND_BP_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], bp
#define AND_BP_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], bp
#define AND_BP_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], bp
#define AND_BP_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], bp
#define AND_BP_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], bp
#define AND_BP_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], bp
#define AND_BP_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], bp
#define AND_BP_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], bp
#define AND_BP_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], bp
#define AND_BP_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], bp
#define AND_BP_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], bp
#define AND_BP_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], bp
#define AND_BP_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], bp
#define AND_BP_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], bp
#define AND_BP_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], bp
#define AND_BP_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], bp
#define AND_BP_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], bp
#define AND_BP_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], bp
#define AND_BP_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], bp
#define AND_BP_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], bp
#define AND_BP_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], bp
#define AND_BP_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], bp

#define AND_SP_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], sp
#define AND_SP_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], sp
#define AND_SP_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], sp
#define AND_SP_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], sp
#define AND_SP_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], sp
#define AND_SP_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], sp
#define AND_SP_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], sp
#define AND_SP_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], sp
#define AND_SP_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], sp
#define AND_SP_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], sp
#define AND_SP_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], sp
#define AND_SP_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], sp
#define AND_SP_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], sp
#define AND_SP_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], sp
#define AND_SP_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], sp
#define AND_SP_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], sp
#define AND_SP_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], sp
#define AND_SP_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], sp
#define AND_SP_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], sp
#define AND_SP_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], sp
#define AND_SP_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], sp
#define AND_SP_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], sp
#define AND_SP_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], sp
#define AND_SP_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], sp

#define AND_R8W_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], r8w
#define AND_R8W_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], r8w
#define AND_R8W_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], r8w
#define AND_R8W_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], r8w
#define AND_R8W_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], r8w
#define AND_R8W_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], r8w
#define AND_R8W_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], r8w
#define AND_R8W_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], r8w
#define AND_R8W_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], r8w
#define AND_R8W_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], r8w
#define AND_R8W_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], r8w
#define AND_R8W_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], r8w
#define AND_R8W_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], r8w
#define AND_R8W_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], r8w
#define AND_R8W_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], r8w
#define AND_R8W_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], r8w
#define AND_R8W_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], r8w
#define AND_R8W_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], r8w
#define AND_R8W_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], r8w
#define AND_R8W_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], r8w
#define AND_R8W_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], r8w
#define AND_R8W_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], r8w
#define AND_R8W_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], r8w
#define AND_R8W_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], r8w

#define AND_R9W_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], r9w
#define AND_R9W_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], r9w
#define AND_R9W_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], r9w
#define AND_R9W_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], r9w
#define AND_R9W_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], r9w
#define AND_R9W_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], r9w
#define AND_R9W_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], r9w
#define AND_R9W_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], r9w
#define AND_R9W_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], r9w
#define AND_R9W_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], r9w
#define AND_R9W_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], r9w
#define AND_R9W_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], r9w
#define AND_R9W_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], r9w
#define AND_R9W_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], r9w
#define AND_R9W_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], r9w
#define AND_R9W_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], r9w
#define AND_R9W_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], r9w
#define AND_R9W_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], r9w
#define AND_R9W_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], r9w
#define AND_R9W_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], r9w
#define AND_R9W_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], r9w
#define AND_R9W_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], r9w
#define AND_R9W_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], r9w
#define AND_R9W_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], r9w

#define AND_R10W_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], r10w
#define AND_R10W_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], r10w
#define AND_R10W_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], r10w
#define AND_R10W_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], r10w
#define AND_R10W_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], r10w
#define AND_R10W_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], r10w
#define AND_R10W_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], r10w
#define AND_R10W_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], r10w
#define AND_R10W_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], r10w
#define AND_R10W_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], r10w
#define AND_R10W_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], r10w
#define AND_R10W_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], r10w
#define AND_R10W_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], r10w
#define AND_R10W_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], r10w
#define AND_R10W_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], r10w
#define AND_R10W_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], r10w
#define AND_R10W_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], r10w
#define AND_R10W_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], r10w
#define AND_R10W_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], r10w
#define AND_R10W_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], r10w
#define AND_R10W_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], r10w
#define AND_R10W_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], r10w
#define AND_R10W_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], r10w
#define AND_R10W_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], r10w

#define AND_R11W_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], r11w
#define AND_R11W_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], r11w
#define AND_R11W_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], r11w
#define AND_R11W_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], r11w
#define AND_R11W_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], r11w
#define AND_R11W_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], r11w
#define AND_R11W_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], r11w
#define AND_R11W_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], r11w
#define AND_R11W_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], r11w
#define AND_R11W_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], r11w
#define AND_R11W_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], r11w
#define AND_R11W_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], r11w
#define AND_R11W_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], r11w
#define AND_R11W_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], r11w
#define AND_R11W_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], r11w
#define AND_R11W_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], r11w
#define AND_R11W_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], r11w
#define AND_R11W_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], r11w
#define AND_R11W_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], r11w
#define AND_R11W_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], r11w
#define AND_R11W_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], r11w
#define AND_R11W_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], r11w
#define AND_R11W_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], r11w
#define AND_R11W_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], r11w

#define AND_R12W_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], r12w
#define AND_R12W_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], r12w
#define AND_R12W_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], r12w
#define AND_R12W_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], r12w
#define AND_R12W_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], r12w
#define AND_R12W_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], r12w
#define AND_R12W_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], r12w
#define AND_R12W_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], r12w
#define AND_R12W_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], r12w
#define AND_R12W_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], r12w
#define AND_R12W_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], r12w
#define AND_R12W_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], r12w
#define AND_R12W_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], r12w
#define AND_R12W_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], r12w
#define AND_R12W_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], r12w
#define AND_R12W_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], r12w
#define AND_R12W_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], r12w
#define AND_R12W_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], r12w
#define AND_R12W_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], r12w
#define AND_R12W_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], r12w
#define AND_R12W_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], r12w
#define AND_R12W_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], r12w
#define AND_R12W_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], r12w
#define AND_R12W_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], r12w

#define AND_R13W_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], r13w
#define AND_R13W_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], r13w
#define AND_R13W_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], r13w
#define AND_R13W_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], r13w
#define AND_R13W_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], r13w
#define AND_R13W_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], r13w
#define AND_R13W_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], r13w
#define AND_R13W_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], r13w
#define AND_R13W_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], r13w
#define AND_R13W_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], r13w
#define AND_R13W_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], r13w
#define AND_R13W_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], r13w
#define AND_R13W_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], r13w
#define AND_R13W_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], r13w
#define AND_R13W_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], r13w
#define AND_R13W_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], r13w
#define AND_R13W_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], r13w
#define AND_R13W_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], r13w
#define AND_R13W_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], r13w
#define AND_R13W_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], r13w
#define AND_R13W_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], r13w
#define AND_R13W_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], r13w
#define AND_R13W_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], r13w
#define AND_R13W_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], r13w

#define AND_R14W_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], r14w
#define AND_R14W_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], r14w
#define AND_R14W_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], r14w
#define AND_R14W_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], r14w
#define AND_R14W_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], r14w
#define AND_R14W_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], r14w
#define AND_R14W_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], r14w
#define AND_R14W_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], r14w
#define AND_R14W_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], r14w
#define AND_R14W_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], r14w
#define AND_R14W_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], r14w
#define AND_R14W_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], r14w
#define AND_R14W_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], r14w
#define AND_R14W_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], r14w
#define AND_R14W_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], r14w
#define AND_R14W_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], r14w
#define AND_R14W_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], r14w
#define AND_R14W_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], r14w
#define AND_R14W_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], r14w
#define AND_R14W_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], r14w
#define AND_R14W_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], r14w
#define AND_R14W_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], r14w
#define AND_R14W_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], r14w
#define AND_R14W_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], r14w

#define AND_R15W_TO_PTR_RAX_(VALUE) and word ptr [rax + VALUE], r15w
#define AND_R15W_TO_PTR_RBX_(VALUE) and word ptr [rbx + VALUE], r15w
#define AND_R15W_TO_PTR_RCX_(VALUE) and word ptr [rcx + VALUE], r15w
#define AND_R15W_TO_PTR_RDX_(VALUE) and word ptr [rdx + VALUE], r15w
#define AND_R15W_TO_PTR_RDI_(VALUE) and word ptr [rdi + VALUE], r15w
#define AND_R15W_TO_PTR_RSI_(VALUE) and word ptr [rsi + VALUE], r15w
#define AND_R15W_TO_PTR_RBP_(VALUE) and word ptr [rbp + VALUE], r15w
#define AND_R15W_TO_PTR_RSP_(VALUE) and word ptr [rsp + VALUE], r15w
#define AND_R15W_TO_PTR_R8_(VALUE) and word ptr [r8 + VALUE], r15w
#define AND_R15W_TO_PTR_R9_(VALUE) and word ptr [r9 + VALUE], r15w
#define AND_R15W_TO_PTR_R10_(VALUE) and word ptr [r10 + VALUE], r15w
#define AND_R15W_TO_PTR_R11_(VALUE) and word ptr [r11 + VALUE], r15w
#define AND_R15W_TO_PTR_R12_(VALUE) and word ptr [r12 + VALUE], r15w
#define AND_R15W_TO_PTR_R13_(VALUE) and word ptr [r13 + VALUE], r15w
#define AND_R15W_TO_PTR_R14_(VALUE) and word ptr [r14 + VALUE], r15w
#define AND_R15W_TO_PTR_R15_(VALUE) and word ptr [r15 + VALUE], r15w
#define AND_R15W_TO_PTR_EAX_(VALUE) and word ptr [eax + VALUE], r15w
#define AND_R15W_TO_PTR_EBX_(VALUE) and word ptr [ebx + VALUE], r15w
#define AND_R15W_TO_PTR_ECX_(VALUE) and word ptr [ecx + VALUE], r15w
#define AND_R15W_TO_PTR_EDX_(VALUE) and word ptr [edx + VALUE], r15w
#define AND_R15W_TO_PTR_EDI_(VALUE) and word ptr [edi + VALUE], r15w
#define AND_R15W_TO_PTR_ESI_(VALUE) and word ptr [esi + VALUE], r15w
#define AND_R15W_TO_PTR_EBP_(VALUE) and word ptr [ebp + VALUE], r15w
#define AND_R15W_TO_PTR_ESP_(VALUE) and word ptr [esp + VALUE], r15w
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
