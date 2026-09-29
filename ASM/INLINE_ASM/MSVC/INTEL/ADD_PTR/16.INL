#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define ADD_AL_FROM_PTR_(VALUE) add al, byte ptr [VALUE]
#define ADD_BL_FROM_PTR_(VALUE) add bl, byte ptr [VALUE]
#define ADD_CL_FROM_PTR_(VALUE) add cl, byte ptr [VALUE]
#define ADD_DL_FROM_PTR_(VALUE) add dl, byte ptr [VALUE]

#define ADD_AL_TO_PTR_(VALUE) add byte ptr [VALUE], al
#define ADD_BL_TO_PTR_(VALUE) add byte ptr [VALUE], bl
#define ADD_CL_TO_PTR_(VALUE) add byte ptr [VALUE], cl
#define ADD_DL_TO_PTR_(VALUE) add byte ptr [VALUE], dl

#define ADD_AL_FROM_PTR_BX add al, byte ptr [bx]
#define ADD_AL_FROM_PTR_BP add al, byte ptr [bp]
#define ADD_AL_FROM_PTR_SI add al, byte ptr [si]
#define ADD_AL_FROM_PTR_DI add al, byte ptr [di]

#define ADD_BL_FROM_PTR_BX add bl, byte ptr [bx]
#define ADD_BL_FROM_PTR_BP add bl, byte ptr [bp]
#define ADD_BL_FROM_PTR_SI add bl, byte ptr [si]
#define ADD_BL_FROM_PTR_DI add bl, byte ptr [di]

#define ADD_CL_FROM_PTR_BX add cl, byte ptr [bx]
#define ADD_CL_FROM_PTR_BP add cl, byte ptr [bp]
#define ADD_CL_FROM_PTR_SI add cl, byte ptr [si]
#define ADD_CL_FROM_PTR_DI add cl, byte ptr [di]

#define ADD_DL_FROM_PTR_BX add dl, byte ptr [bx]
#define ADD_DL_FROM_PTR_BP add dl, byte ptr [bp]
#define ADD_DL_FROM_PTR_SI add dl, byte ptr [si]
#define ADD_DL_FROM_PTR_DI add dl, byte ptr [di]

#define ADD_AL_TO_PTR_BX add byte ptr [bx], al
#define ADD_AL_TO_PTR_BP add byte ptr [bp], al
#define ADD_AL_TO_PTR_SI add byte ptr [si], al
#define ADD_AL_TO_PTR_DI add byte ptr [di], al

#define ADD_BL_TO_PTR_BX add byte ptr [bx], bl
#define ADD_BL_TO_PTR_BP add byte ptr [bp], bl
#define ADD_BL_TO_PTR_SI add byte ptr [si], bl
#define ADD_BL_TO_PTR_DI add byte ptr [di], bl

#define ADD_CL_TO_PTR_BX add byte ptr [bx], cl
#define ADD_CL_TO_PTR_BP add byte ptr [bp], cl
#define ADD_CL_TO_PTR_SI add byte ptr [si], cl
#define ADD_CL_TO_PTR_DI add byte ptr [di], cl

#define ADD_DL_TO_PTR_BX add byte ptr [bx], dl
#define ADD_DL_TO_PTR_BP add byte ptr [bp], dl
#define ADD_DL_TO_PTR_SI add byte ptr [si], dl
#define ADD_DL_TO_PTR_DI add byte ptr [di], dl

#define ADD_AL_FROM_PTR_BX_(VALUE) add al, byte ptr [bx + VALUE]
#define ADD_AL_FROM_PTR_BP_(VALUE) add al, byte ptr [bp + VALUE]
#define ADD_AL_FROM_PTR_SI_(VALUE) add al, byte ptr [si + VALUE]
#define ADD_AL_FROM_PTR_DI_(VALUE) add al, byte ptr [di + VALUE]

#define ADD_BL_FROM_PTR_BX_(VALUE) add bl, byte ptr [bx + VALUE]
#define ADD_BL_FROM_PTR_BP_(VALUE) add bl, byte ptr [bp + VALUE]
#define ADD_BL_FROM_PTR_SI_(VALUE) add bl, byte ptr [si + VALUE]
#define ADD_BL_FROM_PTR_DI_(VALUE) add bl, byte ptr [di + VALUE]

#define ADD_CL_FROM_PTR_BX_(VALUE) add cl, byte ptr [bx + VALUE]
#define ADD_CL_FROM_PTR_BP_(VALUE) add cl, byte ptr [bp + VALUE]
#define ADD_CL_FROM_PTR_SI_(VALUE) add cl, byte ptr [si + VALUE]
#define ADD_CL_FROM_PTR_DI_(VALUE) add cl, byte ptr [di + VALUE]

#define ADD_DL_FROM_PTR_BX_(VALUE) add dl, byte ptr [bx + VALUE]
#define ADD_DL_FROM_PTR_BP_(VALUE) add dl, byte ptr [bp + VALUE]
#define ADD_DL_FROM_PTR_SI_(VALUE) add dl, byte ptr [si + VALUE]
#define ADD_DL_FROM_PTR_DI_(VALUE) add dl, byte ptr [di + VALUE]

#define ADD_AL_TO_PTR_BX_(VALUE) add byte ptr [bx + VALUE], al
#define ADD_AL_TO_PTR_BP_(VALUE) add byte ptr [bp + VALUE], al
#define ADD_AL_TO_PTR_SI_(VALUE) add byte ptr [si + VALUE], al
#define ADD_AL_TO_PTR_DI_(VALUE) add byte ptr [di + VALUE], al

#define ADD_BL_TO_PTR_BX_(VALUE) add byte ptr [bx + VALUE], bl
#define ADD_BL_TO_PTR_BP_(VALUE) add byte ptr [bp + VALUE], bl
#define ADD_BL_TO_PTR_SI_(VALUE) add byte ptr [si + VALUE], bl
#define ADD_BL_TO_PTR_DI_(VALUE) add byte ptr [di + VALUE], bl

#define ADD_CL_TO_PTR_BX_(VALUE) add byte ptr [bx + VALUE], cl
#define ADD_CL_TO_PTR_BP_(VALUE) add byte ptr [bp + VALUE], cl
#define ADD_CL_TO_PTR_SI_(VALUE) add byte ptr [si + VALUE], cl
#define ADD_CL_TO_PTR_DI_(VALUE) add byte ptr [di + VALUE], cl

#define ADD_DL_TO_PTR_BX_(VALUE) add byte ptr [bx + VALUE], dl
#define ADD_DL_TO_PTR_BP_(VALUE) add byte ptr [bp + VALUE], dl
#define ADD_DL_TO_PTR_SI_(VALUE) add byte ptr [si + VALUE], dl
#define ADD_DL_TO_PTR_DI_(VALUE) add byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADD_AL_FROM_PTR_(VALUE) add al, byte ptr [VALUE]
#define ADD_BL_FROM_PTR_(VALUE) add bl, byte ptr [VALUE]
#define ADD_CL_FROM_PTR_(VALUE) add cl, byte ptr [VALUE]
#define ADD_DL_FROM_PTR_(VALUE) add dl, byte ptr [VALUE]

#define ADD_AL_TO_PTR_(VALUE) add byte ptr [VALUE], al
#define ADD_BL_TO_PTR_(VALUE) add byte ptr [VALUE], bl
#define ADD_CL_TO_PTR_(VALUE) add byte ptr [VALUE], cl
#define ADD_DL_TO_PTR_(VALUE) add byte ptr [VALUE], dl

#define ADD_AL_FROM_PTR_EAX add al, byte ptr [eax]
#define ADD_AL_FROM_PTR_EBX add al, byte ptr [ebx]
#define ADD_AL_FROM_PTR_ECX add al, byte ptr [ecx]
#define ADD_AL_FROM_PTR_EDX add al, byte ptr [edx]
#define ADD_AL_FROM_PTR_EDI add al, byte ptr [edi]
#define ADD_AL_FROM_PTR_ESI add al, byte ptr [esi]
#define ADD_AL_FROM_PTR_EBP add al, byte ptr [ebp]
#define ADD_AL_FROM_PTR_ESP add al, byte ptr [esp]
#define ADD_AL_FROM_PTR_BX add al, byte ptr [bx]
#define ADD_AL_FROM_PTR_BP add al, byte ptr [bp]
#define ADD_AL_FROM_PTR_SI add al, byte ptr [si]
#define ADD_AL_FROM_PTR_DI add al, byte ptr [di]

#define ADD_BL_FROM_PTR_EAX add bl, byte ptr [eax]
#define ADD_BL_FROM_PTR_EBX add bl, byte ptr [ebx]
#define ADD_BL_FROM_PTR_ECX add bl, byte ptr [ecx]
#define ADD_BL_FROM_PTR_EDX add bl, byte ptr [edx]
#define ADD_BL_FROM_PTR_EDI add bl, byte ptr [edi]
#define ADD_BL_FROM_PTR_ESI add bl, byte ptr [esi]
#define ADD_BL_FROM_PTR_EBP add bl, byte ptr [ebp]
#define ADD_BL_FROM_PTR_ESP add bl, byte ptr [esp]
#define ADD_BL_FROM_PTR_BX add bl, byte ptr [bx]
#define ADD_BL_FROM_PTR_BP add bl, byte ptr [bp]
#define ADD_BL_FROM_PTR_SI add bl, byte ptr [si]
#define ADD_BL_FROM_PTR_DI add bl, byte ptr [di]

#define ADD_CL_FROM_PTR_EAX add cl, byte ptr [eax]
#define ADD_CL_FROM_PTR_EBX add cl, byte ptr [ebx]
#define ADD_CL_FROM_PTR_ECX add cl, byte ptr [ecx]
#define ADD_CL_FROM_PTR_EDX add cl, byte ptr [edx]
#define ADD_CL_FROM_PTR_EDI add cl, byte ptr [edi]
#define ADD_CL_FROM_PTR_ESI add cl, byte ptr [esi]
#define ADD_CL_FROM_PTR_EBP add cl, byte ptr [ebp]
#define ADD_CL_FROM_PTR_ESP add cl, byte ptr [esp]
#define ADD_CL_FROM_PTR_BX add cl, byte ptr [bx]
#define ADD_CL_FROM_PTR_BP add cl, byte ptr [bp]
#define ADD_CL_FROM_PTR_SI add cl, byte ptr [si]
#define ADD_CL_FROM_PTR_DI add cl, byte ptr [di]

#define ADD_DL_FROM_PTR_EAX add dl, byte ptr [eax]
#define ADD_DL_FROM_PTR_EBX add dl, byte ptr [ebx]
#define ADD_DL_FROM_PTR_ECX add dl, byte ptr [ecx]
#define ADD_DL_FROM_PTR_EDX add dl, byte ptr [edx]
#define ADD_DL_FROM_PTR_EDI add dl, byte ptr [edi]
#define ADD_DL_FROM_PTR_ESI add dl, byte ptr [esi]
#define ADD_DL_FROM_PTR_EBP add dl, byte ptr [ebp]
#define ADD_DL_FROM_PTR_ESP add dl, byte ptr [esp]
#define ADD_DL_FROM_PTR_BX add dl, byte ptr [bx]
#define ADD_DL_FROM_PTR_BP add dl, byte ptr [bp]
#define ADD_DL_FROM_PTR_SI add dl, byte ptr [si]
#define ADD_DL_FROM_PTR_DI add dl, byte ptr [di]

#define ADD_AL_TO_PTR_EAX add byte ptr [eax], al
#define ADD_AL_TO_PTR_EBX add byte ptr [ebx], al
#define ADD_AL_TO_PTR_ECX add byte ptr [ecx], al
#define ADD_AL_TO_PTR_EDX add byte ptr [edx], al
#define ADD_AL_TO_PTR_EDI add byte ptr [edi], al
#define ADD_AL_TO_PTR_ESI add byte ptr [esi], al
#define ADD_AL_TO_PTR_EBP add byte ptr [ebp], al
#define ADD_AL_TO_PTR_ESP add byte ptr [esp], al
#define ADD_AL_TO_PTR_BX add byte ptr [bx], al
#define ADD_AL_TO_PTR_BP add byte ptr [bp], al
#define ADD_AL_TO_PTR_SI add byte ptr [si], al
#define ADD_AL_TO_PTR_DI add byte ptr [di], al

#define ADD_BL_TO_PTR_EAX add byte ptr [eax], bl
#define ADD_BL_TO_PTR_EBX add byte ptr [ebx], bl
#define ADD_BL_TO_PTR_ECX add byte ptr [ecx], bl
#define ADD_BL_TO_PTR_EDX add byte ptr [edx], bl
#define ADD_BL_TO_PTR_EDI add byte ptr [edi], bl
#define ADD_BL_TO_PTR_ESI add byte ptr [esi], bl
#define ADD_BL_TO_PTR_EBP add byte ptr [ebp], bl
#define ADD_BL_TO_PTR_ESP add byte ptr [esp], bl
#define ADD_BL_TO_PTR_BX add byte ptr [bx], bl
#define ADD_BL_TO_PTR_BP add byte ptr [bp], bl
#define ADD_BL_TO_PTR_SI add byte ptr [si], bl
#define ADD_BL_TO_PTR_DI add byte ptr [di], bl

#define ADD_CL_TO_PTR_EAX add byte ptr [eax], cl
#define ADD_CL_TO_PTR_EBX add byte ptr [ebx], cl
#define ADD_CL_TO_PTR_ECX add byte ptr [ecx], cl
#define ADD_CL_TO_PTR_EDX add byte ptr [edx], cl
#define ADD_CL_TO_PTR_EDI add byte ptr [edi], cl
#define ADD_CL_TO_PTR_ESI add byte ptr [esi], cl
#define ADD_CL_TO_PTR_EBP add byte ptr [ebp], cl
#define ADD_CL_TO_PTR_ESP add byte ptr [esp], cl
#define ADD_CL_TO_PTR_BX add byte ptr [bx], cl
#define ADD_CL_TO_PTR_BP add byte ptr [bp], cl
#define ADD_CL_TO_PTR_SI add byte ptr [si], cl
#define ADD_CL_TO_PTR_DI add byte ptr [di], cl

#define ADD_DL_TO_PTR_EAX add byte ptr [eax], dl
#define ADD_DL_TO_PTR_EBX add byte ptr [ebx], dl
#define ADD_DL_TO_PTR_ECX add byte ptr [ecx], dl
#define ADD_DL_TO_PTR_EDX add byte ptr [edx], dl
#define ADD_DL_TO_PTR_EDI add byte ptr [edi], dl
#define ADD_DL_TO_PTR_ESI add byte ptr [esi], dl
#define ADD_DL_TO_PTR_EBP add byte ptr [ebp], dl
#define ADD_DL_TO_PTR_ESP add byte ptr [esp], dl
#define ADD_DL_TO_PTR_BX add byte ptr [bx], dl
#define ADD_DL_TO_PTR_BP add byte ptr [bp], dl
#define ADD_DL_TO_PTR_SI add byte ptr [si], dl
#define ADD_DL_TO_PTR_DI add byte ptr [di], dl

#define ADD_AL_FROM_PTR_EAX_(VALUE) add al, byte ptr [eax + VALUE]
#define ADD_AL_FROM_PTR_EBX_(VALUE) add al, byte ptr [ebx + VALUE]
#define ADD_AL_FROM_PTR_ECX_(VALUE) add al, byte ptr [ecx + VALUE]
#define ADD_AL_FROM_PTR_EDX_(VALUE) add al, byte ptr [edx + VALUE]
#define ADD_AL_FROM_PTR_EDI_(VALUE) add al, byte ptr [edi + VALUE]
#define ADD_AL_FROM_PTR_ESI_(VALUE) add al, byte ptr [esi + VALUE]
#define ADD_AL_FROM_PTR_EBP_(VALUE) add al, byte ptr [ebp + VALUE]
#define ADD_AL_FROM_PTR_ESP_(VALUE) add al, byte ptr [esp + VALUE]
#define ADD_AL_FROM_PTR_BX_(VALUE) add al, byte ptr [bx + VALUE]
#define ADD_AL_FROM_PTR_BP_(VALUE) add al, byte ptr [bp + VALUE]
#define ADD_AL_FROM_PTR_SI_(VALUE) add al, byte ptr [si + VALUE]
#define ADD_AL_FROM_PTR_DI_(VALUE) add al, byte ptr [di + VALUE]

#define ADD_BL_FROM_PTR_EAX_(VALUE) add bl, byte ptr [eax + VALUE]
#define ADD_BL_FROM_PTR_EBX_(VALUE) add bl, byte ptr [ebx + VALUE]
#define ADD_BL_FROM_PTR_ECX_(VALUE) add bl, byte ptr [ecx + VALUE]
#define ADD_BL_FROM_PTR_EDX_(VALUE) add bl, byte ptr [edx + VALUE]
#define ADD_BL_FROM_PTR_EDI_(VALUE) add bl, byte ptr [edi + VALUE]
#define ADD_BL_FROM_PTR_ESI_(VALUE) add bl, byte ptr [esi + VALUE]
#define ADD_BL_FROM_PTR_EBP_(VALUE) add bl, byte ptr [ebp + VALUE]
#define ADD_BL_FROM_PTR_ESP_(VALUE) add bl, byte ptr [esp + VALUE]
#define ADD_BL_FROM_PTR_BX_(VALUE) add bl, byte ptr [bx + VALUE]
#define ADD_BL_FROM_PTR_BP_(VALUE) add bl, byte ptr [bp + VALUE]
#define ADD_BL_FROM_PTR_SI_(VALUE) add bl, byte ptr [si + VALUE]
#define ADD_BL_FROM_PTR_DI_(VALUE) add bl, byte ptr [di + VALUE]

#define ADD_CL_FROM_PTR_EAX_(VALUE) add cl, byte ptr [eax + VALUE]
#define ADD_CL_FROM_PTR_EBX_(VALUE) add cl, byte ptr [ebx + VALUE]
#define ADD_CL_FROM_PTR_ECX_(VALUE) add cl, byte ptr [ecx + VALUE]
#define ADD_CL_FROM_PTR_EDX_(VALUE) add cl, byte ptr [edx + VALUE]
#define ADD_CL_FROM_PTR_EDI_(VALUE) add cl, byte ptr [edi + VALUE]
#define ADD_CL_FROM_PTR_ESI_(VALUE) add cl, byte ptr [esi + VALUE]
#define ADD_CL_FROM_PTR_EBP_(VALUE) add cl, byte ptr [ebp + VALUE]
#define ADD_CL_FROM_PTR_ESP_(VALUE) add cl, byte ptr [esp + VALUE]
#define ADD_CL_FROM_PTR_BX_(VALUE) add cl, byte ptr [bx + VALUE]
#define ADD_CL_FROM_PTR_BP_(VALUE) add cl, byte ptr [bp + VALUE]
#define ADD_CL_FROM_PTR_SI_(VALUE) add cl, byte ptr [si + VALUE]
#define ADD_CL_FROM_PTR_DI_(VALUE) add cl, byte ptr [di + VALUE]

#define ADD_DL_FROM_PTR_EAX_(VALUE) add dl, byte ptr [eax + VALUE]
#define ADD_DL_FROM_PTR_EBX_(VALUE) add dl, byte ptr [ebx + VALUE]
#define ADD_DL_FROM_PTR_ECX_(VALUE) add dl, byte ptr [ecx + VALUE]
#define ADD_DL_FROM_PTR_EDX_(VALUE) add dl, byte ptr [edx + VALUE]
#define ADD_DL_FROM_PTR_EDI_(VALUE) add dl, byte ptr [edi + VALUE]
#define ADD_DL_FROM_PTR_ESI_(VALUE) add dl, byte ptr [esi + VALUE]
#define ADD_DL_FROM_PTR_EBP_(VALUE) add dl, byte ptr [ebp + VALUE]
#define ADD_DL_FROM_PTR_ESP_(VALUE) add dl, byte ptr [esp + VALUE]
#define ADD_DL_FROM_PTR_BX_(VALUE) add dl, byte ptr [bx + VALUE]
#define ADD_DL_FROM_PTR_BP_(VALUE) add dl, byte ptr [bp + VALUE]
#define ADD_DL_FROM_PTR_SI_(VALUE) add dl, byte ptr [si + VALUE]
#define ADD_DL_FROM_PTR_DI_(VALUE) add dl, byte ptr [di + VALUE]

#define ADD_AL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], al
#define ADD_AL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], al
#define ADD_AL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], al
#define ADD_AL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], al
#define ADD_AL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], al
#define ADD_AL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], al
#define ADD_AL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], al
#define ADD_AL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], al
#define ADD_AL_TO_PTR_BX_(VALUE) add byte ptr [bx + VALUE], al
#define ADD_AL_TO_PTR_BP_(VALUE) add byte ptr [bp + VALUE], al
#define ADD_AL_TO_PTR_SI_(VALUE) add byte ptr [si + VALUE], al
#define ADD_AL_TO_PTR_DI_(VALUE) add byte ptr [di + VALUE], al

#define ADD_BL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], bl
#define ADD_BL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], bl
#define ADD_BL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], bl
#define ADD_BL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], bl
#define ADD_BL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], bl
#define ADD_BL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], bl
#define ADD_BL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], bl
#define ADD_BL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], bl
#define ADD_BL_TO_PTR_BX_(VALUE) add byte ptr [bx + VALUE], bl
#define ADD_BL_TO_PTR_BP_(VALUE) add byte ptr [bp + VALUE], bl
#define ADD_BL_TO_PTR_SI_(VALUE) add byte ptr [si + VALUE], bl
#define ADD_BL_TO_PTR_DI_(VALUE) add byte ptr [di + VALUE], bl

#define ADD_CL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], cl
#define ADD_CL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], cl
#define ADD_CL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], cl
#define ADD_CL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], cl
#define ADD_CL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], cl
#define ADD_CL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], cl
#define ADD_CL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], cl
#define ADD_CL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], cl
#define ADD_CL_TO_PTR_BX_(VALUE) add byte ptr [bx + VALUE], cl
#define ADD_CL_TO_PTR_BP_(VALUE) add byte ptr [bp + VALUE], cl
#define ADD_CL_TO_PTR_SI_(VALUE) add byte ptr [si + VALUE], cl
#define ADD_CL_TO_PTR_DI_(VALUE) add byte ptr [di + VALUE], cl

#define ADD_DL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], dl
#define ADD_DL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], dl
#define ADD_DL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], dl
#define ADD_DL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], dl
#define ADD_DL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], dl
#define ADD_DL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], dl
#define ADD_DL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], dl
#define ADD_DL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], dl
#define ADD_DL_TO_PTR_BX_(VALUE) add byte ptr [bx + VALUE], dl
#define ADD_DL_TO_PTR_BP_(VALUE) add byte ptr [bp + VALUE], dl
#define ADD_DL_TO_PTR_SI_(VALUE) add byte ptr [si + VALUE], dl
#define ADD_DL_TO_PTR_DI_(VALUE) add byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_AL_FROM_PTR_(VALUE) add al, byte ptr [VALUE]
#define ADD_BL_FROM_PTR_(VALUE) add bl, byte ptr [VALUE]
#define ADD_CL_FROM_PTR_(VALUE) add cl, byte ptr [VALUE]
#define ADD_DL_FROM_PTR_(VALUE) add dl, byte ptr [VALUE]
#define ADD_DIL_FROM_PTR_(VALUE) add dil, byte ptr [VALUE]
#define ADD_SIL_FROM_PTR_(VALUE) add sil, byte ptr [VALUE]
#define ADD_BPL_FROM_PTR_(VALUE) add bpl, byte ptr [VALUE]
#define ADD_SPL_FROM_PTR_(VALUE) add spl, byte ptr [VALUE]
#define ADD_R8B_FROM_PTR_(VALUE) add r8b, byte ptr [VALUE]
#define ADD_R9B_FROM_PTR_(VALUE) add r9b, byte ptr [VALUE]
#define ADD_R10B_FROM_PTR_(VALUE) add r10b, byte ptr [VALUE]
#define ADD_R11B_FROM_PTR_(VALUE) add r11b, byte ptr [VALUE]
#define ADD_R12B_FROM_PTR_(VALUE) add r12b, byte ptr [VALUE]
#define ADD_R13B_FROM_PTR_(VALUE) add r13b, byte ptr [VALUE]
#define ADD_R14B_FROM_PTR_(VALUE) add r14b, byte ptr [VALUE]
#define ADD_R15B_FROM_PTR_(VALUE) add r15b, byte ptr [VALUE]

#define ADD_AL_TO_PTR_(VALUE) add byte ptr [VALUE], al
#define ADD_BL_TO_PTR_(VALUE) add byte ptr [VALUE], bl
#define ADD_CL_TO_PTR_(VALUE) add byte ptr [VALUE], cl
#define ADD_DL_TO_PTR_(VALUE) add byte ptr [VALUE], dl
#define ADD_DIL_TO_PTR_(VALUE) add byte ptr [VALUE], dil
#define ADD_SIL_TO_PTR_(VALUE) add byte ptr [VALUE], sil
#define ADD_BPL_TO_PTR_(VALUE) add byte ptr [VALUE], bpl
#define ADD_SPL_TO_PTR_(VALUE) add byte ptr [VALUE], spl
#define ADD_R8B_TO_PTR_(VALUE) add byte ptr [VALUE], r8b
#define ADD_R9B_TO_PTR_(VALUE) add byte ptr [VALUE], r9b
#define ADD_R10B_TO_PTR_(VALUE) add byte ptr [VALUE], r10b
#define ADD_R11B_TO_PTR_(VALUE) add byte ptr [VALUE], r11b
#define ADD_R12B_TO_PTR_(VALUE) add byte ptr [VALUE], r12b
#define ADD_R13B_TO_PTR_(VALUE) add byte ptr [VALUE], r13b
#define ADD_R14B_TO_PTR_(VALUE) add byte ptr [VALUE], r14b
#define ADD_R15B_TO_PTR_(VALUE) add byte ptr [VALUE], r15b

#define ADD_AL_FROM_PTR_RAX add al, byte ptr [rax]
#define ADD_AL_FROM_PTR_RBX add al, byte ptr [rbx]
#define ADD_AL_FROM_PTR_RCX add al, byte ptr [rcx]
#define ADD_AL_FROM_PTR_RDX add al, byte ptr [rdx]
#define ADD_AL_FROM_PTR_RDI add al, byte ptr [rdi]
#define ADD_AL_FROM_PTR_RSI add al, byte ptr [rsi]
#define ADD_AL_FROM_PTR_RBP add al, byte ptr [rbp]
#define ADD_AL_FROM_PTR_RSP add al, byte ptr [rsp]
#define ADD_AL_FROM_PTR_R8 add al, byte ptr [r8]
#define ADD_AL_FROM_PTR_R9 add al, byte ptr [r9]
#define ADD_AL_FROM_PTR_R10 add al, byte ptr [r10]
#define ADD_AL_FROM_PTR_R11 add al, byte ptr [r11]
#define ADD_AL_FROM_PTR_R12 add al, byte ptr [r12]
#define ADD_AL_FROM_PTR_R13 add al, byte ptr [r13]
#define ADD_AL_FROM_PTR_R14 add al, byte ptr [r14]
#define ADD_AL_FROM_PTR_R15 add al, byte ptr [r15]
#define ADD_AL_FROM_PTR_EAX add al, byte ptr [eax]
#define ADD_AL_FROM_PTR_EBX add al, byte ptr [ebx]
#define ADD_AL_FROM_PTR_ECX add al, byte ptr [ecx]
#define ADD_AL_FROM_PTR_EDX add al, byte ptr [edx]
#define ADD_AL_FROM_PTR_EDI add al, byte ptr [edi]
#define ADD_AL_FROM_PTR_ESI add al, byte ptr [esi]
#define ADD_AL_FROM_PTR_EBP add al, byte ptr [ebp]
#define ADD_AL_FROM_PTR_ESP add al, byte ptr [esp]

#define ADD_BL_FROM_PTR_RAX add bl, byte ptr [rax]
#define ADD_BL_FROM_PTR_RBX add bl, byte ptr [rbx]
#define ADD_BL_FROM_PTR_RCX add bl, byte ptr [rcx]
#define ADD_BL_FROM_PTR_RDX add bl, byte ptr [rdx]
#define ADD_BL_FROM_PTR_RDI add bl, byte ptr [rdi]
#define ADD_BL_FROM_PTR_RSI add bl, byte ptr [rsi]
#define ADD_BL_FROM_PTR_RBP add bl, byte ptr [rbp]
#define ADD_BL_FROM_PTR_RSP add bl, byte ptr [rsp]
#define ADD_BL_FROM_PTR_R8 add bl, byte ptr [r8]
#define ADD_BL_FROM_PTR_R9 add bl, byte ptr [r9]
#define ADD_BL_FROM_PTR_R10 add bl, byte ptr [r10]
#define ADD_BL_FROM_PTR_R11 add bl, byte ptr [r11]
#define ADD_BL_FROM_PTR_R12 add bl, byte ptr [r12]
#define ADD_BL_FROM_PTR_R13 add bl, byte ptr [r13]
#define ADD_BL_FROM_PTR_R14 add bl, byte ptr [r14]
#define ADD_BL_FROM_PTR_R15 add bl, byte ptr [r15]
#define ADD_BL_FROM_PTR_EAX add bl, byte ptr [eax]
#define ADD_BL_FROM_PTR_EBX add bl, byte ptr [ebx]
#define ADD_BL_FROM_PTR_ECX add bl, byte ptr [ecx]
#define ADD_BL_FROM_PTR_EDX add bl, byte ptr [edx]
#define ADD_BL_FROM_PTR_EDI add bl, byte ptr [edi]
#define ADD_BL_FROM_PTR_ESI add bl, byte ptr [esi]
#define ADD_BL_FROM_PTR_EBP add bl, byte ptr [ebp]
#define ADD_BL_FROM_PTR_ESP add bl, byte ptr [esp]

#define ADD_CL_FROM_PTR_RAX add cl, byte ptr [rax]
#define ADD_CL_FROM_PTR_RBX add cl, byte ptr [rbx]
#define ADD_CL_FROM_PTR_RCX add cl, byte ptr [rcx]
#define ADD_CL_FROM_PTR_RDX add cl, byte ptr [rdx]
#define ADD_CL_FROM_PTR_RDI add cl, byte ptr [rdi]
#define ADD_CL_FROM_PTR_RSI add cl, byte ptr [rsi]
#define ADD_CL_FROM_PTR_RBP add cl, byte ptr [rbp]
#define ADD_CL_FROM_PTR_RSP add cl, byte ptr [rsp]
#define ADD_CL_FROM_PTR_R8 add cl, byte ptr [r8]
#define ADD_CL_FROM_PTR_R9 add cl, byte ptr [r9]
#define ADD_CL_FROM_PTR_R10 add cl, byte ptr [r10]
#define ADD_CL_FROM_PTR_R11 add cl, byte ptr [r11]
#define ADD_CL_FROM_PTR_R12 add cl, byte ptr [r12]
#define ADD_CL_FROM_PTR_R13 add cl, byte ptr [r13]
#define ADD_CL_FROM_PTR_R14 add cl, byte ptr [r14]
#define ADD_CL_FROM_PTR_R15 add cl, byte ptr [r15]
#define ADD_CL_FROM_PTR_EAX add cl, byte ptr [eax]
#define ADD_CL_FROM_PTR_EBX add cl, byte ptr [ebx]
#define ADD_CL_FROM_PTR_ECX add cl, byte ptr [ecx]
#define ADD_CL_FROM_PTR_EDX add cl, byte ptr [edx]
#define ADD_CL_FROM_PTR_EDI add cl, byte ptr [edi]
#define ADD_CL_FROM_PTR_ESI add cl, byte ptr [esi]
#define ADD_CL_FROM_PTR_EBP add cl, byte ptr [ebp]
#define ADD_CL_FROM_PTR_ESP add cl, byte ptr [esp]

#define ADD_DL_FROM_PTR_RAX add dl, byte ptr [rax]
#define ADD_DL_FROM_PTR_RBX add dl, byte ptr [rbx]
#define ADD_DL_FROM_PTR_RCX add dl, byte ptr [rcx]
#define ADD_DL_FROM_PTR_RDX add dl, byte ptr [rdx]
#define ADD_DL_FROM_PTR_RDI add dl, byte ptr [rdi]
#define ADD_DL_FROM_PTR_RSI add dl, byte ptr [rsi]
#define ADD_DL_FROM_PTR_RBP add dl, byte ptr [rbp]
#define ADD_DL_FROM_PTR_RSP add dl, byte ptr [rsp]
#define ADD_DL_FROM_PTR_R8 add dl, byte ptr [r8]
#define ADD_DL_FROM_PTR_R9 add dl, byte ptr [r9]
#define ADD_DL_FROM_PTR_R10 add dl, byte ptr [r10]
#define ADD_DL_FROM_PTR_R11 add dl, byte ptr [r11]
#define ADD_DL_FROM_PTR_R12 add dl, byte ptr [r12]
#define ADD_DL_FROM_PTR_R13 add dl, byte ptr [r13]
#define ADD_DL_FROM_PTR_R14 add dl, byte ptr [r14]
#define ADD_DL_FROM_PTR_R15 add dl, byte ptr [r15]
#define ADD_DL_FROM_PTR_EAX add dl, byte ptr [eax]
#define ADD_DL_FROM_PTR_EBX add dl, byte ptr [ebx]
#define ADD_DL_FROM_PTR_ECX add dl, byte ptr [ecx]
#define ADD_DL_FROM_PTR_EDX add dl, byte ptr [edx]
#define ADD_DL_FROM_PTR_EDI add dl, byte ptr [edi]
#define ADD_DL_FROM_PTR_ESI add dl, byte ptr [esi]
#define ADD_DL_FROM_PTR_EBP add dl, byte ptr [ebp]
#define ADD_DL_FROM_PTR_ESP add dl, byte ptr [esp]

#define ADD_DIL_FROM_PTR_RAX add dil, byte ptr [rax]
#define ADD_DIL_FROM_PTR_RBX add dil, byte ptr [rbx]
#define ADD_DIL_FROM_PTR_RCX add dil, byte ptr [rcx]
#define ADD_DIL_FROM_PTR_RDX add dil, byte ptr [rdx]
#define ADD_DIL_FROM_PTR_RDI add dil, byte ptr [rdi]
#define ADD_DIL_FROM_PTR_RSI add dil, byte ptr [rsi]
#define ADD_DIL_FROM_PTR_RBP add dil, byte ptr [rbp]
#define ADD_DIL_FROM_PTR_RSP add dil, byte ptr [rsp]
#define ADD_DIL_FROM_PTR_R8 add dil, byte ptr [r8]
#define ADD_DIL_FROM_PTR_R9 add dil, byte ptr [r9]
#define ADD_DIL_FROM_PTR_R10 add dil, byte ptr [r10]
#define ADD_DIL_FROM_PTR_R11 add dil, byte ptr [r11]
#define ADD_DIL_FROM_PTR_R12 add dil, byte ptr [r12]
#define ADD_DIL_FROM_PTR_R13 add dil, byte ptr [r13]
#define ADD_DIL_FROM_PTR_R14 add dil, byte ptr [r14]
#define ADD_DIL_FROM_PTR_R15 add dil, byte ptr [r15]
#define ADD_DIL_FROM_PTR_EAX add dil, byte ptr [eax]
#define ADD_DIL_FROM_PTR_EBX add dil, byte ptr [ebx]
#define ADD_DIL_FROM_PTR_ECX add dil, byte ptr [ecx]
#define ADD_DIL_FROM_PTR_EDX add dil, byte ptr [edx]
#define ADD_DIL_FROM_PTR_EDI add dil, byte ptr [edi]
#define ADD_DIL_FROM_PTR_ESI add dil, byte ptr [esi]
#define ADD_DIL_FROM_PTR_EBP add dil, byte ptr [ebp]
#define ADD_DIL_FROM_PTR_ESP add dil, byte ptr [esp]

#define ADD_SIL_FROM_PTR_RAX add sil, byte ptr [rax]
#define ADD_SIL_FROM_PTR_RBX add sil, byte ptr [rbx]
#define ADD_SIL_FROM_PTR_RCX add sil, byte ptr [rcx]
#define ADD_SIL_FROM_PTR_RDX add sil, byte ptr [rdx]
#define ADD_SIL_FROM_PTR_RDI add sil, byte ptr [rdi]
#define ADD_SIL_FROM_PTR_RSI add sil, byte ptr [rsi]
#define ADD_SIL_FROM_PTR_RBP add sil, byte ptr [rbp]
#define ADD_SIL_FROM_PTR_RSP add sil, byte ptr [rsp]
#define ADD_SIL_FROM_PTR_R8 add sil, byte ptr [r8]
#define ADD_SIL_FROM_PTR_R9 add sil, byte ptr [r9]
#define ADD_SIL_FROM_PTR_R10 add sil, byte ptr [r10]
#define ADD_SIL_FROM_PTR_R11 add sil, byte ptr [r11]
#define ADD_SIL_FROM_PTR_R12 add sil, byte ptr [r12]
#define ADD_SIL_FROM_PTR_R13 add sil, byte ptr [r13]
#define ADD_SIL_FROM_PTR_R14 add sil, byte ptr [r14]
#define ADD_SIL_FROM_PTR_R15 add sil, byte ptr [r15]
#define ADD_SIL_FROM_PTR_EAX add sil, byte ptr [eax]
#define ADD_SIL_FROM_PTR_EBX add sil, byte ptr [ebx]
#define ADD_SIL_FROM_PTR_ECX add sil, byte ptr [ecx]
#define ADD_SIL_FROM_PTR_EDX add sil, byte ptr [edx]
#define ADD_SIL_FROM_PTR_EDI add sil, byte ptr [edi]
#define ADD_SIL_FROM_PTR_ESI add sil, byte ptr [esi]
#define ADD_SIL_FROM_PTR_EBP add sil, byte ptr [ebp]
#define ADD_SIL_FROM_PTR_ESP add sil, byte ptr [esp]

#define ADD_BPL_FROM_PTR_RAX add bpl, byte ptr [rax]
#define ADD_BPL_FROM_PTR_RBX add bpl, byte ptr [rbx]
#define ADD_BPL_FROM_PTR_RCX add bpl, byte ptr [rcx]
#define ADD_BPL_FROM_PTR_RDX add bpl, byte ptr [rdx]
#define ADD_BPL_FROM_PTR_RDI add bpl, byte ptr [rdi]
#define ADD_BPL_FROM_PTR_RSI add bpl, byte ptr [rsi]
#define ADD_BPL_FROM_PTR_RBP add bpl, byte ptr [rbp]
#define ADD_BPL_FROM_PTR_RSP add bpl, byte ptr [rsp]
#define ADD_BPL_FROM_PTR_R8 add bpl, byte ptr [r8]
#define ADD_BPL_FROM_PTR_R9 add bpl, byte ptr [r9]
#define ADD_BPL_FROM_PTR_R10 add bpl, byte ptr [r10]
#define ADD_BPL_FROM_PTR_R11 add bpl, byte ptr [r11]
#define ADD_BPL_FROM_PTR_R12 add bpl, byte ptr [r12]
#define ADD_BPL_FROM_PTR_R13 add bpl, byte ptr [r13]
#define ADD_BPL_FROM_PTR_R14 add bpl, byte ptr [r14]
#define ADD_BPL_FROM_PTR_R15 add bpl, byte ptr [r15]
#define ADD_BPL_FROM_PTR_EAX add bpl, byte ptr [eax]
#define ADD_BPL_FROM_PTR_EBX add bpl, byte ptr [ebx]
#define ADD_BPL_FROM_PTR_ECX add bpl, byte ptr [ecx]
#define ADD_BPL_FROM_PTR_EDX add bpl, byte ptr [edx]
#define ADD_BPL_FROM_PTR_EDI add bpl, byte ptr [edi]
#define ADD_BPL_FROM_PTR_ESI add bpl, byte ptr [esi]
#define ADD_BPL_FROM_PTR_EBP add bpl, byte ptr [ebp]
#define ADD_BPL_FROM_PTR_ESP add bpl, byte ptr [esp]

#define ADD_SPL_FROM_PTR_RAX add spl, byte ptr [rax]
#define ADD_SPL_FROM_PTR_RBX add spl, byte ptr [rbx]
#define ADD_SPL_FROM_PTR_RCX add spl, byte ptr [rcx]
#define ADD_SPL_FROM_PTR_RDX add spl, byte ptr [rdx]
#define ADD_SPL_FROM_PTR_RDI add spl, byte ptr [rdi]
#define ADD_SPL_FROM_PTR_RSI add spl, byte ptr [rsi]
#define ADD_SPL_FROM_PTR_RBP add spl, byte ptr [rbp]
#define ADD_SPL_FROM_PTR_RSP add spl, byte ptr [rsp]
#define ADD_SPL_FROM_PTR_R8 add spl, byte ptr [r8]
#define ADD_SPL_FROM_PTR_R9 add spl, byte ptr [r9]
#define ADD_SPL_FROM_PTR_R10 add spl, byte ptr [r10]
#define ADD_SPL_FROM_PTR_R11 add spl, byte ptr [r11]
#define ADD_SPL_FROM_PTR_R12 add spl, byte ptr [r12]
#define ADD_SPL_FROM_PTR_R13 add spl, byte ptr [r13]
#define ADD_SPL_FROM_PTR_R14 add spl, byte ptr [r14]
#define ADD_SPL_FROM_PTR_R15 add spl, byte ptr [r15]
#define ADD_SPL_FROM_PTR_EAX add spl, byte ptr [eax]
#define ADD_SPL_FROM_PTR_EBX add spl, byte ptr [ebx]
#define ADD_SPL_FROM_PTR_ECX add spl, byte ptr [ecx]
#define ADD_SPL_FROM_PTR_EDX add spl, byte ptr [edx]
#define ADD_SPL_FROM_PTR_EDI add spl, byte ptr [edi]
#define ADD_SPL_FROM_PTR_ESI add spl, byte ptr [esi]
#define ADD_SPL_FROM_PTR_EBP add spl, byte ptr [ebp]
#define ADD_SPL_FROM_PTR_ESP add spl, byte ptr [esp]

#define ADD_R8B_FROM_PTR_RAX add r8b, byte ptr [rax]
#define ADD_R8B_FROM_PTR_RBX add r8b, byte ptr [rbx]
#define ADD_R8B_FROM_PTR_RCX add r8b, byte ptr [rcx]
#define ADD_R8B_FROM_PTR_RDX add r8b, byte ptr [rdx]
#define ADD_R8B_FROM_PTR_RDI add r8b, byte ptr [rdi]
#define ADD_R8B_FROM_PTR_RSI add r8b, byte ptr [rsi]
#define ADD_R8B_FROM_PTR_RBP add r8b, byte ptr [rbp]
#define ADD_R8B_FROM_PTR_RSP add r8b, byte ptr [rsp]
#define ADD_R8B_FROM_PTR_R8 add r8b, byte ptr [r8]
#define ADD_R8B_FROM_PTR_R9 add r8b, byte ptr [r9]
#define ADD_R8B_FROM_PTR_R10 add r8b, byte ptr [r10]
#define ADD_R8B_FROM_PTR_R11 add r8b, byte ptr [r11]
#define ADD_R8B_FROM_PTR_R12 add r8b, byte ptr [r12]
#define ADD_R8B_FROM_PTR_R13 add r8b, byte ptr [r13]
#define ADD_R8B_FROM_PTR_R14 add r8b, byte ptr [r14]
#define ADD_R8B_FROM_PTR_R15 add r8b, byte ptr [r15]
#define ADD_R8B_FROM_PTR_EAX add r8b, byte ptr [eax]
#define ADD_R8B_FROM_PTR_EBX add r8b, byte ptr [ebx]
#define ADD_R8B_FROM_PTR_ECX add r8b, byte ptr [ecx]
#define ADD_R8B_FROM_PTR_EDX add r8b, byte ptr [edx]
#define ADD_R8B_FROM_PTR_EDI add r8b, byte ptr [edi]
#define ADD_R8B_FROM_PTR_ESI add r8b, byte ptr [esi]
#define ADD_R8B_FROM_PTR_EBP add r8b, byte ptr [ebp]
#define ADD_R8B_FROM_PTR_ESP add r8b, byte ptr [esp]

#define ADD_R9B_FROM_PTR_RAX add r9b, byte ptr [rax]
#define ADD_R9B_FROM_PTR_RBX add r9b, byte ptr [rbx]
#define ADD_R9B_FROM_PTR_RCX add r9b, byte ptr [rcx]
#define ADD_R9B_FROM_PTR_RDX add r9b, byte ptr [rdx]
#define ADD_R9B_FROM_PTR_RDI add r9b, byte ptr [rdi]
#define ADD_R9B_FROM_PTR_RSI add r9b, byte ptr [rsi]
#define ADD_R9B_FROM_PTR_RBP add r9b, byte ptr [rbp]
#define ADD_R9B_FROM_PTR_RSP add r9b, byte ptr [rsp]
#define ADD_R9B_FROM_PTR_R8 add r9b, byte ptr [r8]
#define ADD_R9B_FROM_PTR_R9 add r9b, byte ptr [r9]
#define ADD_R9B_FROM_PTR_R10 add r9b, byte ptr [r10]
#define ADD_R9B_FROM_PTR_R11 add r9b, byte ptr [r11]
#define ADD_R9B_FROM_PTR_R12 add r9b, byte ptr [r12]
#define ADD_R9B_FROM_PTR_R13 add r9b, byte ptr [r13]
#define ADD_R9B_FROM_PTR_R14 add r9b, byte ptr [r14]
#define ADD_R9B_FROM_PTR_R15 add r9b, byte ptr [r15]
#define ADD_R9B_FROM_PTR_EAX add r9b, byte ptr [eax]
#define ADD_R9B_FROM_PTR_EBX add r9b, byte ptr [ebx]
#define ADD_R9B_FROM_PTR_ECX add r9b, byte ptr [ecx]
#define ADD_R9B_FROM_PTR_EDX add r9b, byte ptr [edx]
#define ADD_R9B_FROM_PTR_EDI add r9b, byte ptr [edi]
#define ADD_R9B_FROM_PTR_ESI add r9b, byte ptr [esi]
#define ADD_R9B_FROM_PTR_EBP add r9b, byte ptr [ebp]
#define ADD_R9B_FROM_PTR_ESP add r9b, byte ptr [esp]

#define ADD_R10B_FROM_PTR_RAX add r10b, byte ptr [rax]
#define ADD_R10B_FROM_PTR_RBX add r10b, byte ptr [rbx]
#define ADD_R10B_FROM_PTR_RCX add r10b, byte ptr [rcx]
#define ADD_R10B_FROM_PTR_RDX add r10b, byte ptr [rdx]
#define ADD_R10B_FROM_PTR_RDI add r10b, byte ptr [rdi]
#define ADD_R10B_FROM_PTR_RSI add r10b, byte ptr [rsi]
#define ADD_R10B_FROM_PTR_RBP add r10b, byte ptr [rbp]
#define ADD_R10B_FROM_PTR_RSP add r10b, byte ptr [rsp]
#define ADD_R10B_FROM_PTR_R8 add r10b, byte ptr [r8]
#define ADD_R10B_FROM_PTR_R9 add r10b, byte ptr [r9]
#define ADD_R10B_FROM_PTR_R10 add r10b, byte ptr [r10]
#define ADD_R10B_FROM_PTR_R11 add r10b, byte ptr [r11]
#define ADD_R10B_FROM_PTR_R12 add r10b, byte ptr [r12]
#define ADD_R10B_FROM_PTR_R13 add r10b, byte ptr [r13]
#define ADD_R10B_FROM_PTR_R14 add r10b, byte ptr [r14]
#define ADD_R10B_FROM_PTR_R15 add r10b, byte ptr [r15]
#define ADD_R10B_FROM_PTR_EAX add r10b, byte ptr [eax]
#define ADD_R10B_FROM_PTR_EBX add r10b, byte ptr [ebx]
#define ADD_R10B_FROM_PTR_ECX add r10b, byte ptr [ecx]
#define ADD_R10B_FROM_PTR_EDX add r10b, byte ptr [edx]
#define ADD_R10B_FROM_PTR_EDI add r10b, byte ptr [edi]
#define ADD_R10B_FROM_PTR_ESI add r10b, byte ptr [esi]
#define ADD_R10B_FROM_PTR_EBP add r10b, byte ptr [ebp]
#define ADD_R10B_FROM_PTR_ESP add r10b, byte ptr [esp]

#define ADD_R11B_FROM_PTR_RAX add r11b, byte ptr [rax]
#define ADD_R11B_FROM_PTR_RBX add r11b, byte ptr [rbx]
#define ADD_R11B_FROM_PTR_RCX add r11b, byte ptr [rcx]
#define ADD_R11B_FROM_PTR_RDX add r11b, byte ptr [rdx]
#define ADD_R11B_FROM_PTR_RDI add r11b, byte ptr [rdi]
#define ADD_R11B_FROM_PTR_RSI add r11b, byte ptr [rsi]
#define ADD_R11B_FROM_PTR_RBP add r11b, byte ptr [rbp]
#define ADD_R11B_FROM_PTR_RSP add r11b, byte ptr [rsp]
#define ADD_R11B_FROM_PTR_R8 add r11b, byte ptr [r8]
#define ADD_R11B_FROM_PTR_R9 add r11b, byte ptr [r9]
#define ADD_R11B_FROM_PTR_R10 add r11b, byte ptr [r10]
#define ADD_R11B_FROM_PTR_R11 add r11b, byte ptr [r11]
#define ADD_R11B_FROM_PTR_R12 add r11b, byte ptr [r12]
#define ADD_R11B_FROM_PTR_R13 add r11b, byte ptr [r13]
#define ADD_R11B_FROM_PTR_R14 add r11b, byte ptr [r14]
#define ADD_R11B_FROM_PTR_R15 add r11b, byte ptr [r15]
#define ADD_R11B_FROM_PTR_EAX add r11b, byte ptr [eax]
#define ADD_R11B_FROM_PTR_EBX add r11b, byte ptr [ebx]
#define ADD_R11B_FROM_PTR_ECX add r11b, byte ptr [ecx]
#define ADD_R11B_FROM_PTR_EDX add r11b, byte ptr [edx]
#define ADD_R11B_FROM_PTR_EDI add r11b, byte ptr [edi]
#define ADD_R11B_FROM_PTR_ESI add r11b, byte ptr [esi]
#define ADD_R11B_FROM_PTR_EBP add r11b, byte ptr [ebp]
#define ADD_R11B_FROM_PTR_ESP add r11b, byte ptr [esp]

#define ADD_R12B_FROM_PTR_RAX add r12b, byte ptr [rax]
#define ADD_R12B_FROM_PTR_RBX add r12b, byte ptr [rbx]
#define ADD_R12B_FROM_PTR_RCX add r12b, byte ptr [rcx]
#define ADD_R12B_FROM_PTR_RDX add r12b, byte ptr [rdx]
#define ADD_R12B_FROM_PTR_RDI add r12b, byte ptr [rdi]
#define ADD_R12B_FROM_PTR_RSI add r12b, byte ptr [rsi]
#define ADD_R12B_FROM_PTR_RBP add r12b, byte ptr [rbp]
#define ADD_R12B_FROM_PTR_RSP add r12b, byte ptr [rsp]
#define ADD_R12B_FROM_PTR_R8 add r12b, byte ptr [r8]
#define ADD_R12B_FROM_PTR_R9 add r12b, byte ptr [r9]
#define ADD_R12B_FROM_PTR_R10 add r12b, byte ptr [r10]
#define ADD_R12B_FROM_PTR_R11 add r12b, byte ptr [r11]
#define ADD_R12B_FROM_PTR_R12 add r12b, byte ptr [r12]
#define ADD_R12B_FROM_PTR_R13 add r12b, byte ptr [r13]
#define ADD_R12B_FROM_PTR_R14 add r12b, byte ptr [r14]
#define ADD_R12B_FROM_PTR_R15 add r12b, byte ptr [r15]
#define ADD_R12B_FROM_PTR_EAX add r12b, byte ptr [eax]
#define ADD_R12B_FROM_PTR_EBX add r12b, byte ptr [ebx]
#define ADD_R12B_FROM_PTR_ECX add r12b, byte ptr [ecx]
#define ADD_R12B_FROM_PTR_EDX add r12b, byte ptr [edx]
#define ADD_R12B_FROM_PTR_EDI add r12b, byte ptr [edi]
#define ADD_R12B_FROM_PTR_ESI add r12b, byte ptr [esi]
#define ADD_R12B_FROM_PTR_EBP add r12b, byte ptr [ebp]
#define ADD_R12B_FROM_PTR_ESP add r12b, byte ptr [esp]

#define ADD_R13B_FROM_PTR_RAX add r13b, byte ptr [rax]
#define ADD_R13B_FROM_PTR_RBX add r13b, byte ptr [rbx]
#define ADD_R13B_FROM_PTR_RCX add r13b, byte ptr [rcx]
#define ADD_R13B_FROM_PTR_RDX add r13b, byte ptr [rdx]
#define ADD_R13B_FROM_PTR_RDI add r13b, byte ptr [rdi]
#define ADD_R13B_FROM_PTR_RSI add r13b, byte ptr [rsi]
#define ADD_R13B_FROM_PTR_RBP add r13b, byte ptr [rbp]
#define ADD_R13B_FROM_PTR_RSP add r13b, byte ptr [rsp]
#define ADD_R13B_FROM_PTR_R8 add r13b, byte ptr [r8]
#define ADD_R13B_FROM_PTR_R9 add r13b, byte ptr [r9]
#define ADD_R13B_FROM_PTR_R10 add r13b, byte ptr [r10]
#define ADD_R13B_FROM_PTR_R11 add r13b, byte ptr [r11]
#define ADD_R13B_FROM_PTR_R12 add r13b, byte ptr [r12]
#define ADD_R13B_FROM_PTR_R13 add r13b, byte ptr [r13]
#define ADD_R13B_FROM_PTR_R14 add r13b, byte ptr [r14]
#define ADD_R13B_FROM_PTR_R15 add r13b, byte ptr [r15]
#define ADD_R13B_FROM_PTR_EAX add r13b, byte ptr [eax]
#define ADD_R13B_FROM_PTR_EBX add r13b, byte ptr [ebx]
#define ADD_R13B_FROM_PTR_ECX add r13b, byte ptr [ecx]
#define ADD_R13B_FROM_PTR_EDX add r13b, byte ptr [edx]
#define ADD_R13B_FROM_PTR_EDI add r13b, byte ptr [edi]
#define ADD_R13B_FROM_PTR_ESI add r13b, byte ptr [esi]
#define ADD_R13B_FROM_PTR_EBP add r13b, byte ptr [ebp]
#define ADD_R13B_FROM_PTR_ESP add r13b, byte ptr [esp]

#define ADD_R14B_FROM_PTR_RAX add r14b, byte ptr [rax]
#define ADD_R14B_FROM_PTR_RBX add r14b, byte ptr [rbx]
#define ADD_R14B_FROM_PTR_RCX add r14b, byte ptr [rcx]
#define ADD_R14B_FROM_PTR_RDX add r14b, byte ptr [rdx]
#define ADD_R14B_FROM_PTR_RDI add r14b, byte ptr [rdi]
#define ADD_R14B_FROM_PTR_RSI add r14b, byte ptr [rsi]
#define ADD_R14B_FROM_PTR_RBP add r14b, byte ptr [rbp]
#define ADD_R14B_FROM_PTR_RSP add r14b, byte ptr [rsp]
#define ADD_R14B_FROM_PTR_R8 add r14b, byte ptr [r8]
#define ADD_R14B_FROM_PTR_R9 add r14b, byte ptr [r9]
#define ADD_R14B_FROM_PTR_R10 add r14b, byte ptr [r10]
#define ADD_R14B_FROM_PTR_R11 add r14b, byte ptr [r11]
#define ADD_R14B_FROM_PTR_R12 add r14b, byte ptr [r12]
#define ADD_R14B_FROM_PTR_R13 add r14b, byte ptr [r13]
#define ADD_R14B_FROM_PTR_R14 add r14b, byte ptr [r14]
#define ADD_R14B_FROM_PTR_R15 add r14b, byte ptr [r15]
#define ADD_R14B_FROM_PTR_EAX add r14b, byte ptr [eax]
#define ADD_R14B_FROM_PTR_EBX add r14b, byte ptr [ebx]
#define ADD_R14B_FROM_PTR_ECX add r14b, byte ptr [ecx]
#define ADD_R14B_FROM_PTR_EDX add r14b, byte ptr [edx]
#define ADD_R14B_FROM_PTR_EDI add r14b, byte ptr [edi]
#define ADD_R14B_FROM_PTR_ESI add r14b, byte ptr [esi]
#define ADD_R14B_FROM_PTR_EBP add r14b, byte ptr [ebp]
#define ADD_R14B_FROM_PTR_ESP add r14b, byte ptr [esp]

#define ADD_R15B_FROM_PTR_RAX add r15b, byte ptr [rax]
#define ADD_R15B_FROM_PTR_RBX add r15b, byte ptr [rbx]
#define ADD_R15B_FROM_PTR_RCX add r15b, byte ptr [rcx]
#define ADD_R15B_FROM_PTR_RDX add r15b, byte ptr [rdx]
#define ADD_R15B_FROM_PTR_RDI add r15b, byte ptr [rdi]
#define ADD_R15B_FROM_PTR_RSI add r15b, byte ptr [rsi]
#define ADD_R15B_FROM_PTR_RBP add r15b, byte ptr [rbp]
#define ADD_R15B_FROM_PTR_RSP add r15b, byte ptr [rsp]
#define ADD_R15B_FROM_PTR_R8 add r15b, byte ptr [r8]
#define ADD_R15B_FROM_PTR_R9 add r15b, byte ptr [r9]
#define ADD_R15B_FROM_PTR_R10 add r15b, byte ptr [r10]
#define ADD_R15B_FROM_PTR_R11 add r15b, byte ptr [r11]
#define ADD_R15B_FROM_PTR_R12 add r15b, byte ptr [r12]
#define ADD_R15B_FROM_PTR_R13 add r15b, byte ptr [r13]
#define ADD_R15B_FROM_PTR_R14 add r15b, byte ptr [r14]
#define ADD_R15B_FROM_PTR_R15 add r15b, byte ptr [r15]
#define ADD_R15B_FROM_PTR_EAX add r15b, byte ptr [eax]
#define ADD_R15B_FROM_PTR_EBX add r15b, byte ptr [ebx]
#define ADD_R15B_FROM_PTR_ECX add r15b, byte ptr [ecx]
#define ADD_R15B_FROM_PTR_EDX add r15b, byte ptr [edx]
#define ADD_R15B_FROM_PTR_EDI add r15b, byte ptr [edi]
#define ADD_R15B_FROM_PTR_ESI add r15b, byte ptr [esi]
#define ADD_R15B_FROM_PTR_EBP add r15b, byte ptr [ebp]
#define ADD_R15B_FROM_PTR_ESP add r15b, byte ptr [esp]

#define ADD_AL_TO_PTR_RAX add byte ptr [rax], al
#define ADD_AL_TO_PTR_RBX add byte ptr [rbx], al
#define ADD_AL_TO_PTR_RCX add byte ptr [rcx], al
#define ADD_AL_TO_PTR_RDX add byte ptr [rdx], al
#define ADD_AL_TO_PTR_RDI add byte ptr [rdi], al
#define ADD_AL_TO_PTR_RSI add byte ptr [rsi], al
#define ADD_AL_TO_PTR_RBP add byte ptr [rbp], al
#define ADD_AL_TO_PTR_RSP add byte ptr [rsp], al
#define ADD_AL_TO_PTR_R8 add byte ptr [r8], al
#define ADD_AL_TO_PTR_R9 add byte ptr [r9], al
#define ADD_AL_TO_PTR_R10 add byte ptr [r10], al
#define ADD_AL_TO_PTR_R11 add byte ptr [r11], al
#define ADD_AL_TO_PTR_R12 add byte ptr [r12], al
#define ADD_AL_TO_PTR_R13 add byte ptr [r13], al
#define ADD_AL_TO_PTR_R14 add byte ptr [r14], al
#define ADD_AL_TO_PTR_R15 add byte ptr [r15], al
#define ADD_AL_TO_PTR_EAX add byte ptr [eax], al
#define ADD_AL_TO_PTR_EBX add byte ptr [ebx], al
#define ADD_AL_TO_PTR_ECX add byte ptr [ecx], al
#define ADD_AL_TO_PTR_EDX add byte ptr [edx], al
#define ADD_AL_TO_PTR_EDI add byte ptr [edi], al
#define ADD_AL_TO_PTR_ESI add byte ptr [esi], al
#define ADD_AL_TO_PTR_EBP add byte ptr [ebp], al
#define ADD_AL_TO_PTR_ESP add byte ptr [esp], al

#define ADD_BL_TO_PTR_RAX add byte ptr [rax], bl
#define ADD_BL_TO_PTR_RBX add byte ptr [rbx], bl
#define ADD_BL_TO_PTR_RCX add byte ptr [rcx], bl
#define ADD_BL_TO_PTR_RDX add byte ptr [rdx], bl
#define ADD_BL_TO_PTR_RDI add byte ptr [rdi], bl
#define ADD_BL_TO_PTR_RSI add byte ptr [rsi], bl
#define ADD_BL_TO_PTR_RBP add byte ptr [rbp], bl
#define ADD_BL_TO_PTR_RSP add byte ptr [rsp], bl
#define ADD_BL_TO_PTR_R8 add byte ptr [r8], bl
#define ADD_BL_TO_PTR_R9 add byte ptr [r9], bl
#define ADD_BL_TO_PTR_R10 add byte ptr [r10], bl
#define ADD_BL_TO_PTR_R11 add byte ptr [r11], bl
#define ADD_BL_TO_PTR_R12 add byte ptr [r12], bl
#define ADD_BL_TO_PTR_R13 add byte ptr [r13], bl
#define ADD_BL_TO_PTR_R14 add byte ptr [r14], bl
#define ADD_BL_TO_PTR_R15 add byte ptr [r15], bl
#define ADD_BL_TO_PTR_EAX add byte ptr [eax], bl
#define ADD_BL_TO_PTR_EBX add byte ptr [ebx], bl
#define ADD_BL_TO_PTR_ECX add byte ptr [ecx], bl
#define ADD_BL_TO_PTR_EDX add byte ptr [edx], bl
#define ADD_BL_TO_PTR_EDI add byte ptr [edi], bl
#define ADD_BL_TO_PTR_ESI add byte ptr [esi], bl
#define ADD_BL_TO_PTR_EBP add byte ptr [ebp], bl
#define ADD_BL_TO_PTR_ESP add byte ptr [esp], bl

#define ADD_CL_TO_PTR_RAX add byte ptr [rax], cl
#define ADD_CL_TO_PTR_RBX add byte ptr [rbx], cl
#define ADD_CL_TO_PTR_RCX add byte ptr [rcx], cl
#define ADD_CL_TO_PTR_RDX add byte ptr [rdx], cl
#define ADD_CL_TO_PTR_RDI add byte ptr [rdi], cl
#define ADD_CL_TO_PTR_RSI add byte ptr [rsi], cl
#define ADD_CL_TO_PTR_RBP add byte ptr [rbp], cl
#define ADD_CL_TO_PTR_RSP add byte ptr [rsp], cl
#define ADD_CL_TO_PTR_R8 add byte ptr [r8], cl
#define ADD_CL_TO_PTR_R9 add byte ptr [r9], cl
#define ADD_CL_TO_PTR_R10 add byte ptr [r10], cl
#define ADD_CL_TO_PTR_R11 add byte ptr [r11], cl
#define ADD_CL_TO_PTR_R12 add byte ptr [r12], cl
#define ADD_CL_TO_PTR_R13 add byte ptr [r13], cl
#define ADD_CL_TO_PTR_R14 add byte ptr [r14], cl
#define ADD_CL_TO_PTR_R15 add byte ptr [r15], cl
#define ADD_CL_TO_PTR_EAX add byte ptr [eax], cl
#define ADD_CL_TO_PTR_EBX add byte ptr [ebx], cl
#define ADD_CL_TO_PTR_ECX add byte ptr [ecx], cl
#define ADD_CL_TO_PTR_EDX add byte ptr [edx], cl
#define ADD_CL_TO_PTR_EDI add byte ptr [edi], cl
#define ADD_CL_TO_PTR_ESI add byte ptr [esi], cl
#define ADD_CL_TO_PTR_EBP add byte ptr [ebp], cl
#define ADD_CL_TO_PTR_ESP add byte ptr [esp], cl

#define ADD_DL_TO_PTR_RAX add byte ptr [rax], dl
#define ADD_DL_TO_PTR_RBX add byte ptr [rbx], dl
#define ADD_DL_TO_PTR_RCX add byte ptr [rcx], dl
#define ADD_DL_TO_PTR_RDX add byte ptr [rdx], dl
#define ADD_DL_TO_PTR_RDI add byte ptr [rdi], dl
#define ADD_DL_TO_PTR_RSI add byte ptr [rsi], dl
#define ADD_DL_TO_PTR_RBP add byte ptr [rbp], dl
#define ADD_DL_TO_PTR_RSP add byte ptr [rsp], dl
#define ADD_DL_TO_PTR_R8 add byte ptr [r8], dl
#define ADD_DL_TO_PTR_R9 add byte ptr [r9], dl
#define ADD_DL_TO_PTR_R10 add byte ptr [r10], dl
#define ADD_DL_TO_PTR_R11 add byte ptr [r11], dl
#define ADD_DL_TO_PTR_R12 add byte ptr [r12], dl
#define ADD_DL_TO_PTR_R13 add byte ptr [r13], dl
#define ADD_DL_TO_PTR_R14 add byte ptr [r14], dl
#define ADD_DL_TO_PTR_R15 add byte ptr [r15], dl
#define ADD_DL_TO_PTR_EAX add byte ptr [eax], dl
#define ADD_DL_TO_PTR_EBX add byte ptr [ebx], dl
#define ADD_DL_TO_PTR_ECX add byte ptr [ecx], dl
#define ADD_DL_TO_PTR_EDX add byte ptr [edx], dl
#define ADD_DL_TO_PTR_EDI add byte ptr [edi], dl
#define ADD_DL_TO_PTR_ESI add byte ptr [esi], dl
#define ADD_DL_TO_PTR_EBP add byte ptr [ebp], dl
#define ADD_DL_TO_PTR_ESP add byte ptr [esp], dl

#define ADD_DIL_TO_PTR_RAX add byte ptr [rax], dil
#define ADD_DIL_TO_PTR_RBX add byte ptr [rbx], dil
#define ADD_DIL_TO_PTR_RCX add byte ptr [rcx], dil
#define ADD_DIL_TO_PTR_RDX add byte ptr [rdx], dil
#define ADD_DIL_TO_PTR_RDI add byte ptr [rdi], dil
#define ADD_DIL_TO_PTR_RSI add byte ptr [rsi], dil
#define ADD_DIL_TO_PTR_RBP add byte ptr [rbp], dil
#define ADD_DIL_TO_PTR_RSP add byte ptr [rsp], dil
#define ADD_DIL_TO_PTR_R8 add byte ptr [r8], dil
#define ADD_DIL_TO_PTR_R9 add byte ptr [r9], dil
#define ADD_DIL_TO_PTR_R10 add byte ptr [r10], dil
#define ADD_DIL_TO_PTR_R11 add byte ptr [r11], dil
#define ADD_DIL_TO_PTR_R12 add byte ptr [r12], dil
#define ADD_DIL_TO_PTR_R13 add byte ptr [r13], dil
#define ADD_DIL_TO_PTR_R14 add byte ptr [r14], dil
#define ADD_DIL_TO_PTR_R15 add byte ptr [r15], dil
#define ADD_DIL_TO_PTR_EAX add byte ptr [eax], dil
#define ADD_DIL_TO_PTR_EBX add byte ptr [ebx], dil
#define ADD_DIL_TO_PTR_ECX add byte ptr [ecx], dil
#define ADD_DIL_TO_PTR_EDX add byte ptr [edx], dil
#define ADD_DIL_TO_PTR_EDI add byte ptr [edi], dil
#define ADD_DIL_TO_PTR_ESI add byte ptr [esi], dil
#define ADD_DIL_TO_PTR_EBP add byte ptr [ebp], dil
#define ADD_DIL_TO_PTR_ESP add byte ptr [esp], dil

#define ADD_SIL_TO_PTR_RAX add byte ptr [rax], sil
#define ADD_SIL_TO_PTR_RBX add byte ptr [rbx], sil
#define ADD_SIL_TO_PTR_RCX add byte ptr [rcx], sil
#define ADD_SIL_TO_PTR_RDX add byte ptr [rdx], sil
#define ADD_SIL_TO_PTR_RDI add byte ptr [rdi], sil
#define ADD_SIL_TO_PTR_RSI add byte ptr [rsi], sil
#define ADD_SIL_TO_PTR_RBP add byte ptr [rbp], sil
#define ADD_SIL_TO_PTR_RSP add byte ptr [rsp], sil
#define ADD_SIL_TO_PTR_R8 add byte ptr [r8], sil
#define ADD_SIL_TO_PTR_R9 add byte ptr [r9], sil
#define ADD_SIL_TO_PTR_R10 add byte ptr [r10], sil
#define ADD_SIL_TO_PTR_R11 add byte ptr [r11], sil
#define ADD_SIL_TO_PTR_R12 add byte ptr [r12], sil
#define ADD_SIL_TO_PTR_R13 add byte ptr [r13], sil
#define ADD_SIL_TO_PTR_R14 add byte ptr [r14], sil
#define ADD_SIL_TO_PTR_R15 add byte ptr [r15], sil
#define ADD_SIL_TO_PTR_EAX add byte ptr [eax], sil
#define ADD_SIL_TO_PTR_EBX add byte ptr [ebx], sil
#define ADD_SIL_TO_PTR_ECX add byte ptr [ecx], sil
#define ADD_SIL_TO_PTR_EDX add byte ptr [edx], sil
#define ADD_SIL_TO_PTR_EDI add byte ptr [edi], sil
#define ADD_SIL_TO_PTR_ESI add byte ptr [esi], sil
#define ADD_SIL_TO_PTR_EBP add byte ptr [ebp], sil
#define ADD_SIL_TO_PTR_ESP add byte ptr [esp], sil

#define ADD_BPL_TO_PTR_RAX add byte ptr [rax], bpl
#define ADD_BPL_TO_PTR_RBX add byte ptr [rbx], bpl
#define ADD_BPL_TO_PTR_RCX add byte ptr [rcx], bpl
#define ADD_BPL_TO_PTR_RDX add byte ptr [rdx], bpl
#define ADD_BPL_TO_PTR_RDI add byte ptr [rdi], bpl
#define ADD_BPL_TO_PTR_RSI add byte ptr [rsi], bpl
#define ADD_BPL_TO_PTR_RBP add byte ptr [rbp], bpl
#define ADD_BPL_TO_PTR_RSP add byte ptr [rsp], bpl
#define ADD_BPL_TO_PTR_R8 add byte ptr [r8], bpl
#define ADD_BPL_TO_PTR_R9 add byte ptr [r9], bpl
#define ADD_BPL_TO_PTR_R10 add byte ptr [r10], bpl
#define ADD_BPL_TO_PTR_R11 add byte ptr [r11], bpl
#define ADD_BPL_TO_PTR_R12 add byte ptr [r12], bpl
#define ADD_BPL_TO_PTR_R13 add byte ptr [r13], bpl
#define ADD_BPL_TO_PTR_R14 add byte ptr [r14], bpl
#define ADD_BPL_TO_PTR_R15 add byte ptr [r15], bpl
#define ADD_BPL_TO_PTR_EAX add byte ptr [eax], bpl
#define ADD_BPL_TO_PTR_EBX add byte ptr [ebx], bpl
#define ADD_BPL_TO_PTR_ECX add byte ptr [ecx], bpl
#define ADD_BPL_TO_PTR_EDX add byte ptr [edx], bpl
#define ADD_BPL_TO_PTR_EDI add byte ptr [edi], bpl
#define ADD_BPL_TO_PTR_ESI add byte ptr [esi], bpl
#define ADD_BPL_TO_PTR_EBP add byte ptr [ebp], bpl
#define ADD_BPL_TO_PTR_ESP add byte ptr [esp], bpl

#define ADD_SPL_TO_PTR_RAX add byte ptr [rax], spl
#define ADD_SPL_TO_PTR_RBX add byte ptr [rbx], spl
#define ADD_SPL_TO_PTR_RCX add byte ptr [rcx], spl
#define ADD_SPL_TO_PTR_RDX add byte ptr [rdx], spl
#define ADD_SPL_TO_PTR_RDI add byte ptr [rdi], spl
#define ADD_SPL_TO_PTR_RSI add byte ptr [rsi], spl
#define ADD_SPL_TO_PTR_RBP add byte ptr [rbp], spl
#define ADD_SPL_TO_PTR_RSP add byte ptr [rsp], spl
#define ADD_SPL_TO_PTR_R8 add byte ptr [r8], spl
#define ADD_SPL_TO_PTR_R9 add byte ptr [r9], spl
#define ADD_SPL_TO_PTR_R10 add byte ptr [r10], spl
#define ADD_SPL_TO_PTR_R11 add byte ptr [r11], spl
#define ADD_SPL_TO_PTR_R12 add byte ptr [r12], spl
#define ADD_SPL_TO_PTR_R13 add byte ptr [r13], spl
#define ADD_SPL_TO_PTR_R14 add byte ptr [r14], spl
#define ADD_SPL_TO_PTR_R15 add byte ptr [r15], spl
#define ADD_SPL_TO_PTR_EAX add byte ptr [eax], spl
#define ADD_SPL_TO_PTR_EBX add byte ptr [ebx], spl
#define ADD_SPL_TO_PTR_ECX add byte ptr [ecx], spl
#define ADD_SPL_TO_PTR_EDX add byte ptr [edx], spl
#define ADD_SPL_TO_PTR_EDI add byte ptr [edi], spl
#define ADD_SPL_TO_PTR_ESI add byte ptr [esi], spl
#define ADD_SPL_TO_PTR_EBP add byte ptr [ebp], spl
#define ADD_SPL_TO_PTR_ESP add byte ptr [esp], spl

#define ADD_R8B_TO_PTR_RAX add byte ptr [rax], r8b
#define ADD_R8B_TO_PTR_RBX add byte ptr [rbx], r8b
#define ADD_R8B_TO_PTR_RCX add byte ptr [rcx], r8b
#define ADD_R8B_TO_PTR_RDX add byte ptr [rdx], r8b
#define ADD_R8B_TO_PTR_RDI add byte ptr [rdi], r8b
#define ADD_R8B_TO_PTR_RSI add byte ptr [rsi], r8b
#define ADD_R8B_TO_PTR_RBP add byte ptr [rbp], r8b
#define ADD_R8B_TO_PTR_RSP add byte ptr [rsp], r8b
#define ADD_R8B_TO_PTR_R8 add byte ptr [r8], r8b
#define ADD_R8B_TO_PTR_R9 add byte ptr [r9], r8b
#define ADD_R8B_TO_PTR_R10 add byte ptr [r10], r8b
#define ADD_R8B_TO_PTR_R11 add byte ptr [r11], r8b
#define ADD_R8B_TO_PTR_R12 add byte ptr [r12], r8b
#define ADD_R8B_TO_PTR_R13 add byte ptr [r13], r8b
#define ADD_R8B_TO_PTR_R14 add byte ptr [r14], r8b
#define ADD_R8B_TO_PTR_R15 add byte ptr [r15], r8b
#define ADD_R8B_TO_PTR_EAX add byte ptr [eax], r8b
#define ADD_R8B_TO_PTR_EBX add byte ptr [ebx], r8b
#define ADD_R8B_TO_PTR_ECX add byte ptr [ecx], r8b
#define ADD_R8B_TO_PTR_EDX add byte ptr [edx], r8b
#define ADD_R8B_TO_PTR_EDI add byte ptr [edi], r8b
#define ADD_R8B_TO_PTR_ESI add byte ptr [esi], r8b
#define ADD_R8B_TO_PTR_EBP add byte ptr [ebp], r8b
#define ADD_R8B_TO_PTR_ESP add byte ptr [esp], r8b

#define ADD_R9B_TO_PTR_RAX add byte ptr [rax], r9b
#define ADD_R9B_TO_PTR_RBX add byte ptr [rbx], r9b
#define ADD_R9B_TO_PTR_RCX add byte ptr [rcx], r9b
#define ADD_R9B_TO_PTR_RDX add byte ptr [rdx], r9b
#define ADD_R9B_TO_PTR_RDI add byte ptr [rdi], r9b
#define ADD_R9B_TO_PTR_RSI add byte ptr [rsi], r9b
#define ADD_R9B_TO_PTR_RBP add byte ptr [rbp], r9b
#define ADD_R9B_TO_PTR_RSP add byte ptr [rsp], r9b
#define ADD_R9B_TO_PTR_R8 add byte ptr [r8], r9b
#define ADD_R9B_TO_PTR_R9 add byte ptr [r9], r9b
#define ADD_R9B_TO_PTR_R10 add byte ptr [r10], r9b
#define ADD_R9B_TO_PTR_R11 add byte ptr [r11], r9b
#define ADD_R9B_TO_PTR_R12 add byte ptr [r12], r9b
#define ADD_R9B_TO_PTR_R13 add byte ptr [r13], r9b
#define ADD_R9B_TO_PTR_R14 add byte ptr [r14], r9b
#define ADD_R9B_TO_PTR_R15 add byte ptr [r15], r9b
#define ADD_R9B_TO_PTR_EAX add byte ptr [eax], r9b
#define ADD_R9B_TO_PTR_EBX add byte ptr [ebx], r9b
#define ADD_R9B_TO_PTR_ECX add byte ptr [ecx], r9b
#define ADD_R9B_TO_PTR_EDX add byte ptr [edx], r9b
#define ADD_R9B_TO_PTR_EDI add byte ptr [edi], r9b
#define ADD_R9B_TO_PTR_ESI add byte ptr [esi], r9b
#define ADD_R9B_TO_PTR_EBP add byte ptr [ebp], r9b
#define ADD_R9B_TO_PTR_ESP add byte ptr [esp], r9b

#define ADD_R10B_TO_PTR_RAX add byte ptr [rax], r10b
#define ADD_R10B_TO_PTR_RBX add byte ptr [rbx], r10b
#define ADD_R10B_TO_PTR_RCX add byte ptr [rcx], r10b
#define ADD_R10B_TO_PTR_RDX add byte ptr [rdx], r10b
#define ADD_R10B_TO_PTR_RDI add byte ptr [rdi], r10b
#define ADD_R10B_TO_PTR_RSI add byte ptr [rsi], r10b
#define ADD_R10B_TO_PTR_RBP add byte ptr [rbp], r10b
#define ADD_R10B_TO_PTR_RSP add byte ptr [rsp], r10b
#define ADD_R10B_TO_PTR_R8 add byte ptr [r8], r10b
#define ADD_R10B_TO_PTR_R9 add byte ptr [r9], r10b
#define ADD_R10B_TO_PTR_R10 add byte ptr [r10], r10b
#define ADD_R10B_TO_PTR_R11 add byte ptr [r11], r10b
#define ADD_R10B_TO_PTR_R12 add byte ptr [r12], r10b
#define ADD_R10B_TO_PTR_R13 add byte ptr [r13], r10b
#define ADD_R10B_TO_PTR_R14 add byte ptr [r14], r10b
#define ADD_R10B_TO_PTR_R15 add byte ptr [r15], r10b
#define ADD_R10B_TO_PTR_EAX add byte ptr [eax], r10b
#define ADD_R10B_TO_PTR_EBX add byte ptr [ebx], r10b
#define ADD_R10B_TO_PTR_ECX add byte ptr [ecx], r10b
#define ADD_R10B_TO_PTR_EDX add byte ptr [edx], r10b
#define ADD_R10B_TO_PTR_EDI add byte ptr [edi], r10b
#define ADD_R10B_TO_PTR_ESI add byte ptr [esi], r10b
#define ADD_R10B_TO_PTR_EBP add byte ptr [ebp], r10b
#define ADD_R10B_TO_PTR_ESP add byte ptr [esp], r10b

#define ADD_R11B_TO_PTR_RAX add byte ptr [rax], r11b
#define ADD_R11B_TO_PTR_RBX add byte ptr [rbx], r11b
#define ADD_R11B_TO_PTR_RCX add byte ptr [rcx], r11b
#define ADD_R11B_TO_PTR_RDX add byte ptr [rdx], r11b
#define ADD_R11B_TO_PTR_RDI add byte ptr [rdi], r11b
#define ADD_R11B_TO_PTR_RSI add byte ptr [rsi], r11b
#define ADD_R11B_TO_PTR_RBP add byte ptr [rbp], r11b
#define ADD_R11B_TO_PTR_RSP add byte ptr [rsp], r11b
#define ADD_R11B_TO_PTR_R8 add byte ptr [r8], r11b
#define ADD_R11B_TO_PTR_R9 add byte ptr [r9], r11b
#define ADD_R11B_TO_PTR_R10 add byte ptr [r10], r11b
#define ADD_R11B_TO_PTR_R11 add byte ptr [r11], r11b
#define ADD_R11B_TO_PTR_R12 add byte ptr [r12], r11b
#define ADD_R11B_TO_PTR_R13 add byte ptr [r13], r11b
#define ADD_R11B_TO_PTR_R14 add byte ptr [r14], r11b
#define ADD_R11B_TO_PTR_R15 add byte ptr [r15], r11b
#define ADD_R11B_TO_PTR_EAX add byte ptr [eax], r11b
#define ADD_R11B_TO_PTR_EBX add byte ptr [ebx], r11b
#define ADD_R11B_TO_PTR_ECX add byte ptr [ecx], r11b
#define ADD_R11B_TO_PTR_EDX add byte ptr [edx], r11b
#define ADD_R11B_TO_PTR_EDI add byte ptr [edi], r11b
#define ADD_R11B_TO_PTR_ESI add byte ptr [esi], r11b
#define ADD_R11B_TO_PTR_EBP add byte ptr [ebp], r11b
#define ADD_R11B_TO_PTR_ESP add byte ptr [esp], r11b

#define ADD_R12B_TO_PTR_RAX add byte ptr [rax], r12b
#define ADD_R12B_TO_PTR_RBX add byte ptr [rbx], r12b
#define ADD_R12B_TO_PTR_RCX add byte ptr [rcx], r12b
#define ADD_R12B_TO_PTR_RDX add byte ptr [rdx], r12b
#define ADD_R12B_TO_PTR_RDI add byte ptr [rdi], r12b
#define ADD_R12B_TO_PTR_RSI add byte ptr [rsi], r12b
#define ADD_R12B_TO_PTR_RBP add byte ptr [rbp], r12b
#define ADD_R12B_TO_PTR_RSP add byte ptr [rsp], r12b
#define ADD_R12B_TO_PTR_R8 add byte ptr [r8], r12b
#define ADD_R12B_TO_PTR_R9 add byte ptr [r9], r12b
#define ADD_R12B_TO_PTR_R10 add byte ptr [r10], r12b
#define ADD_R12B_TO_PTR_R11 add byte ptr [r11], r12b
#define ADD_R12B_TO_PTR_R12 add byte ptr [r12], r12b
#define ADD_R12B_TO_PTR_R13 add byte ptr [r13], r12b
#define ADD_R12B_TO_PTR_R14 add byte ptr [r14], r12b
#define ADD_R12B_TO_PTR_R15 add byte ptr [r15], r12b
#define ADD_R12B_TO_PTR_EAX add byte ptr [eax], r12b
#define ADD_R12B_TO_PTR_EBX add byte ptr [ebx], r12b
#define ADD_R12B_TO_PTR_ECX add byte ptr [ecx], r12b
#define ADD_R12B_TO_PTR_EDX add byte ptr [edx], r12b
#define ADD_R12B_TO_PTR_EDI add byte ptr [edi], r12b
#define ADD_R12B_TO_PTR_ESI add byte ptr [esi], r12b
#define ADD_R12B_TO_PTR_EBP add byte ptr [ebp], r12b
#define ADD_R12B_TO_PTR_ESP add byte ptr [esp], r12b

#define ADD_R13B_TO_PTR_RAX add byte ptr [rax], r13b
#define ADD_R13B_TO_PTR_RBX add byte ptr [rbx], r13b
#define ADD_R13B_TO_PTR_RCX add byte ptr [rcx], r13b
#define ADD_R13B_TO_PTR_RDX add byte ptr [rdx], r13b
#define ADD_R13B_TO_PTR_RDI add byte ptr [rdi], r13b
#define ADD_R13B_TO_PTR_RSI add byte ptr [rsi], r13b
#define ADD_R13B_TO_PTR_RBP add byte ptr [rbp], r13b
#define ADD_R13B_TO_PTR_RSP add byte ptr [rsp], r13b
#define ADD_R13B_TO_PTR_R8 add byte ptr [r8], r13b
#define ADD_R13B_TO_PTR_R9 add byte ptr [r9], r13b
#define ADD_R13B_TO_PTR_R10 add byte ptr [r10], r13b
#define ADD_R13B_TO_PTR_R11 add byte ptr [r11], r13b
#define ADD_R13B_TO_PTR_R12 add byte ptr [r12], r13b
#define ADD_R13B_TO_PTR_R13 add byte ptr [r13], r13b
#define ADD_R13B_TO_PTR_R14 add byte ptr [r14], r13b
#define ADD_R13B_TO_PTR_R15 add byte ptr [r15], r13b
#define ADD_R13B_TO_PTR_EAX add byte ptr [eax], r13b
#define ADD_R13B_TO_PTR_EBX add byte ptr [ebx], r13b
#define ADD_R13B_TO_PTR_ECX add byte ptr [ecx], r13b
#define ADD_R13B_TO_PTR_EDX add byte ptr [edx], r13b
#define ADD_R13B_TO_PTR_EDI add byte ptr [edi], r13b
#define ADD_R13B_TO_PTR_ESI add byte ptr [esi], r13b
#define ADD_R13B_TO_PTR_EBP add byte ptr [ebp], r13b
#define ADD_R13B_TO_PTR_ESP add byte ptr [esp], r13b

#define ADD_R14B_TO_PTR_RAX add byte ptr [rax], r14b
#define ADD_R14B_TO_PTR_RBX add byte ptr [rbx], r14b
#define ADD_R14B_TO_PTR_RCX add byte ptr [rcx], r14b
#define ADD_R14B_TO_PTR_RDX add byte ptr [rdx], r14b
#define ADD_R14B_TO_PTR_RDI add byte ptr [rdi], r14b
#define ADD_R14B_TO_PTR_RSI add byte ptr [rsi], r14b
#define ADD_R14B_TO_PTR_RBP add byte ptr [rbp], r14b
#define ADD_R14B_TO_PTR_RSP add byte ptr [rsp], r14b
#define ADD_R14B_TO_PTR_R8 add byte ptr [r8], r14b
#define ADD_R14B_TO_PTR_R9 add byte ptr [r9], r14b
#define ADD_R14B_TO_PTR_R10 add byte ptr [r10], r14b
#define ADD_R14B_TO_PTR_R11 add byte ptr [r11], r14b
#define ADD_R14B_TO_PTR_R12 add byte ptr [r12], r14b
#define ADD_R14B_TO_PTR_R13 add byte ptr [r13], r14b
#define ADD_R14B_TO_PTR_R14 add byte ptr [r14], r14b
#define ADD_R14B_TO_PTR_R15 add byte ptr [r15], r14b
#define ADD_R14B_TO_PTR_EAX add byte ptr [eax], r14b
#define ADD_R14B_TO_PTR_EBX add byte ptr [ebx], r14b
#define ADD_R14B_TO_PTR_ECX add byte ptr [ecx], r14b
#define ADD_R14B_TO_PTR_EDX add byte ptr [edx], r14b
#define ADD_R14B_TO_PTR_EDI add byte ptr [edi], r14b
#define ADD_R14B_TO_PTR_ESI add byte ptr [esi], r14b
#define ADD_R14B_TO_PTR_EBP add byte ptr [ebp], r14b
#define ADD_R14B_TO_PTR_ESP add byte ptr [esp], r14b

#define ADD_R15B_TO_PTR_RAX add byte ptr [rax], r15b
#define ADD_R15B_TO_PTR_RBX add byte ptr [rbx], r15b
#define ADD_R15B_TO_PTR_RCX add byte ptr [rcx], r15b
#define ADD_R15B_TO_PTR_RDX add byte ptr [rdx], r15b
#define ADD_R15B_TO_PTR_RDI add byte ptr [rdi], r15b
#define ADD_R15B_TO_PTR_RSI add byte ptr [rsi], r15b
#define ADD_R15B_TO_PTR_RBP add byte ptr [rbp], r15b
#define ADD_R15B_TO_PTR_RSP add byte ptr [rsp], r15b
#define ADD_R15B_TO_PTR_R8 add byte ptr [r8], r15b
#define ADD_R15B_TO_PTR_R9 add byte ptr [r9], r15b
#define ADD_R15B_TO_PTR_R10 add byte ptr [r10], r15b
#define ADD_R15B_TO_PTR_R11 add byte ptr [r11], r15b
#define ADD_R15B_TO_PTR_R12 add byte ptr [r12], r15b
#define ADD_R15B_TO_PTR_R13 add byte ptr [r13], r15b
#define ADD_R15B_TO_PTR_R14 add byte ptr [r14], r15b
#define ADD_R15B_TO_PTR_R15 add byte ptr [r15], r15b
#define ADD_R15B_TO_PTR_EAX add byte ptr [eax], r15b
#define ADD_R15B_TO_PTR_EBX add byte ptr [ebx], r15b
#define ADD_R15B_TO_PTR_ECX add byte ptr [ecx], r15b
#define ADD_R15B_TO_PTR_EDX add byte ptr [edx], r15b
#define ADD_R15B_TO_PTR_EDI add byte ptr [edi], r15b
#define ADD_R15B_TO_PTR_ESI add byte ptr [esi], r15b
#define ADD_R15B_TO_PTR_EBP add byte ptr [ebp], r15b
#define ADD_R15B_TO_PTR_ESP add byte ptr [esp], r15b

#define ADD_AL_FROM_PTR_RAX_(VALUE) add al, byte ptr [rax + VALUE]
#define ADD_AL_FROM_PTR_RBX_(VALUE) add al, byte ptr [rbx + VALUE]
#define ADD_AL_FROM_PTR_RCX_(VALUE) add al, byte ptr [rcx + VALUE]
#define ADD_AL_FROM_PTR_RDX_(VALUE) add al, byte ptr [rdx + VALUE]
#define ADD_AL_FROM_PTR_RDI_(VALUE) add al, byte ptr [rdi + VALUE]
#define ADD_AL_FROM_PTR_RSI_(VALUE) add al, byte ptr [rsi + VALUE]
#define ADD_AL_FROM_PTR_RBP_(VALUE) add al, byte ptr [rbp + VALUE]
#define ADD_AL_FROM_PTR_RSP_(VALUE) add al, byte ptr [rsp + VALUE]
#define ADD_AL_FROM_PTR_R8_(VALUE) add al, byte ptr [r8 + VALUE]
#define ADD_AL_FROM_PTR_R9_(VALUE) add al, byte ptr [r9 + VALUE]
#define ADD_AL_FROM_PTR_R10_(VALUE) add al, byte ptr [r10 + VALUE]
#define ADD_AL_FROM_PTR_R11_(VALUE) add al, byte ptr [r11 + VALUE]
#define ADD_AL_FROM_PTR_R12_(VALUE) add al, byte ptr [r12 + VALUE]
#define ADD_AL_FROM_PTR_R13_(VALUE) add al, byte ptr [r13 + VALUE]
#define ADD_AL_FROM_PTR_R14_(VALUE) add al, byte ptr [r14 + VALUE]
#define ADD_AL_FROM_PTR_R15_(VALUE) add al, byte ptr [r15 + VALUE]
#define ADD_AL_FROM_PTR_EAX_(VALUE) add al, byte ptr [eax + VALUE]
#define ADD_AL_FROM_PTR_EBX_(VALUE) add al, byte ptr [ebx + VALUE]
#define ADD_AL_FROM_PTR_ECX_(VALUE) add al, byte ptr [ecx + VALUE]
#define ADD_AL_FROM_PTR_EDX_(VALUE) add al, byte ptr [edx + VALUE]
#define ADD_AL_FROM_PTR_EDI_(VALUE) add al, byte ptr [edi + VALUE]
#define ADD_AL_FROM_PTR_ESI_(VALUE) add al, byte ptr [esi + VALUE]
#define ADD_AL_FROM_PTR_EBP_(VALUE) add al, byte ptr [ebp + VALUE]
#define ADD_AL_FROM_PTR_ESP_(VALUE) add al, byte ptr [esp + VALUE]

#define ADD_BL_FROM_PTR_RAX_(VALUE) add bl, byte ptr [rax + VALUE]
#define ADD_BL_FROM_PTR_RBX_(VALUE) add bl, byte ptr [rbx + VALUE]
#define ADD_BL_FROM_PTR_RCX_(VALUE) add bl, byte ptr [rcx + VALUE]
#define ADD_BL_FROM_PTR_RDX_(VALUE) add bl, byte ptr [rdx + VALUE]
#define ADD_BL_FROM_PTR_RDI_(VALUE) add bl, byte ptr [rdi + VALUE]
#define ADD_BL_FROM_PTR_RSI_(VALUE) add bl, byte ptr [rsi + VALUE]
#define ADD_BL_FROM_PTR_RBP_(VALUE) add bl, byte ptr [rbp + VALUE]
#define ADD_BL_FROM_PTR_RSP_(VALUE) add bl, byte ptr [rsp + VALUE]
#define ADD_BL_FROM_PTR_R8_(VALUE) add bl, byte ptr [r8 + VALUE]
#define ADD_BL_FROM_PTR_R9_(VALUE) add bl, byte ptr [r9 + VALUE]
#define ADD_BL_FROM_PTR_R10_(VALUE) add bl, byte ptr [r10 + VALUE]
#define ADD_BL_FROM_PTR_R11_(VALUE) add bl, byte ptr [r11 + VALUE]
#define ADD_BL_FROM_PTR_R12_(VALUE) add bl, byte ptr [r12 + VALUE]
#define ADD_BL_FROM_PTR_R13_(VALUE) add bl, byte ptr [r13 + VALUE]
#define ADD_BL_FROM_PTR_R14_(VALUE) add bl, byte ptr [r14 + VALUE]
#define ADD_BL_FROM_PTR_R15_(VALUE) add bl, byte ptr [r15 + VALUE]
#define ADD_BL_FROM_PTR_EAX_(VALUE) add bl, byte ptr [eax + VALUE]
#define ADD_BL_FROM_PTR_EBX_(VALUE) add bl, byte ptr [ebx + VALUE]
#define ADD_BL_FROM_PTR_ECX_(VALUE) add bl, byte ptr [ecx + VALUE]
#define ADD_BL_FROM_PTR_EDX_(VALUE) add bl, byte ptr [edx + VALUE]
#define ADD_BL_FROM_PTR_EDI_(VALUE) add bl, byte ptr [edi + VALUE]
#define ADD_BL_FROM_PTR_ESI_(VALUE) add bl, byte ptr [esi + VALUE]
#define ADD_BL_FROM_PTR_EBP_(VALUE) add bl, byte ptr [ebp + VALUE]
#define ADD_BL_FROM_PTR_ESP_(VALUE) add bl, byte ptr [esp + VALUE]

#define ADD_CL_FROM_PTR_RAX_(VALUE) add cl, byte ptr [rax + VALUE]
#define ADD_CL_FROM_PTR_RBX_(VALUE) add cl, byte ptr [rbx + VALUE]
#define ADD_CL_FROM_PTR_RCX_(VALUE) add cl, byte ptr [rcx + VALUE]
#define ADD_CL_FROM_PTR_RDX_(VALUE) add cl, byte ptr [rdx + VALUE]
#define ADD_CL_FROM_PTR_RDI_(VALUE) add cl, byte ptr [rdi + VALUE]
#define ADD_CL_FROM_PTR_RSI_(VALUE) add cl, byte ptr [rsi + VALUE]
#define ADD_CL_FROM_PTR_RBP_(VALUE) add cl, byte ptr [rbp + VALUE]
#define ADD_CL_FROM_PTR_RSP_(VALUE) add cl, byte ptr [rsp + VALUE]
#define ADD_CL_FROM_PTR_R8_(VALUE) add cl, byte ptr [r8 + VALUE]
#define ADD_CL_FROM_PTR_R9_(VALUE) add cl, byte ptr [r9 + VALUE]
#define ADD_CL_FROM_PTR_R10_(VALUE) add cl, byte ptr [r10 + VALUE]
#define ADD_CL_FROM_PTR_R11_(VALUE) add cl, byte ptr [r11 + VALUE]
#define ADD_CL_FROM_PTR_R12_(VALUE) add cl, byte ptr [r12 + VALUE]
#define ADD_CL_FROM_PTR_R13_(VALUE) add cl, byte ptr [r13 + VALUE]
#define ADD_CL_FROM_PTR_R14_(VALUE) add cl, byte ptr [r14 + VALUE]
#define ADD_CL_FROM_PTR_R15_(VALUE) add cl, byte ptr [r15 + VALUE]
#define ADD_CL_FROM_PTR_EAX_(VALUE) add cl, byte ptr [eax + VALUE]
#define ADD_CL_FROM_PTR_EBX_(VALUE) add cl, byte ptr [ebx + VALUE]
#define ADD_CL_FROM_PTR_ECX_(VALUE) add cl, byte ptr [ecx + VALUE]
#define ADD_CL_FROM_PTR_EDX_(VALUE) add cl, byte ptr [edx + VALUE]
#define ADD_CL_FROM_PTR_EDI_(VALUE) add cl, byte ptr [edi + VALUE]
#define ADD_CL_FROM_PTR_ESI_(VALUE) add cl, byte ptr [esi + VALUE]
#define ADD_CL_FROM_PTR_EBP_(VALUE) add cl, byte ptr [ebp + VALUE]
#define ADD_CL_FROM_PTR_ESP_(VALUE) add cl, byte ptr [esp + VALUE]

#define ADD_DL_FROM_PTR_RAX_(VALUE) add dl, byte ptr [rax + VALUE]
#define ADD_DL_FROM_PTR_RBX_(VALUE) add dl, byte ptr [rbx + VALUE]
#define ADD_DL_FROM_PTR_RCX_(VALUE) add dl, byte ptr [rcx + VALUE]
#define ADD_DL_FROM_PTR_RDX_(VALUE) add dl, byte ptr [rdx + VALUE]
#define ADD_DL_FROM_PTR_RDI_(VALUE) add dl, byte ptr [rdi + VALUE]
#define ADD_DL_FROM_PTR_RSI_(VALUE) add dl, byte ptr [rsi + VALUE]
#define ADD_DL_FROM_PTR_RBP_(VALUE) add dl, byte ptr [rbp + VALUE]
#define ADD_DL_FROM_PTR_RSP_(VALUE) add dl, byte ptr [rsp + VALUE]
#define ADD_DL_FROM_PTR_R8_(VALUE) add dl, byte ptr [r8 + VALUE]
#define ADD_DL_FROM_PTR_R9_(VALUE) add dl, byte ptr [r9 + VALUE]
#define ADD_DL_FROM_PTR_R10_(VALUE) add dl, byte ptr [r10 + VALUE]
#define ADD_DL_FROM_PTR_R11_(VALUE) add dl, byte ptr [r11 + VALUE]
#define ADD_DL_FROM_PTR_R12_(VALUE) add dl, byte ptr [r12 + VALUE]
#define ADD_DL_FROM_PTR_R13_(VALUE) add dl, byte ptr [r13 + VALUE]
#define ADD_DL_FROM_PTR_R14_(VALUE) add dl, byte ptr [r14 + VALUE]
#define ADD_DL_FROM_PTR_R15_(VALUE) add dl, byte ptr [r15 + VALUE]
#define ADD_DL_FROM_PTR_EAX_(VALUE) add dl, byte ptr [eax + VALUE]
#define ADD_DL_FROM_PTR_EBX_(VALUE) add dl, byte ptr [ebx + VALUE]
#define ADD_DL_FROM_PTR_ECX_(VALUE) add dl, byte ptr [ecx + VALUE]
#define ADD_DL_FROM_PTR_EDX_(VALUE) add dl, byte ptr [edx + VALUE]
#define ADD_DL_FROM_PTR_EDI_(VALUE) add dl, byte ptr [edi + VALUE]
#define ADD_DL_FROM_PTR_ESI_(VALUE) add dl, byte ptr [esi + VALUE]
#define ADD_DL_FROM_PTR_EBP_(VALUE) add dl, byte ptr [ebp + VALUE]
#define ADD_DL_FROM_PTR_ESP_(VALUE) add dl, byte ptr [esp + VALUE]

#define ADD_DIL_FROM_PTR_RAX_(VALUE) add dil, byte ptr [rax + VALUE]
#define ADD_DIL_FROM_PTR_RBX_(VALUE) add dil, byte ptr [rbx + VALUE]
#define ADD_DIL_FROM_PTR_RCX_(VALUE) add dil, byte ptr [rcx + VALUE]
#define ADD_DIL_FROM_PTR_RDX_(VALUE) add dil, byte ptr [rdx + VALUE]
#define ADD_DIL_FROM_PTR_RDI_(VALUE) add dil, byte ptr [rdi + VALUE]
#define ADD_DIL_FROM_PTR_RSI_(VALUE) add dil, byte ptr [rsi + VALUE]
#define ADD_DIL_FROM_PTR_RBP_(VALUE) add dil, byte ptr [rbp + VALUE]
#define ADD_DIL_FROM_PTR_RSP_(VALUE) add dil, byte ptr [rsp + VALUE]
#define ADD_DIL_FROM_PTR_R8_(VALUE) add dil, byte ptr [r8 + VALUE]
#define ADD_DIL_FROM_PTR_R9_(VALUE) add dil, byte ptr [r9 + VALUE]
#define ADD_DIL_FROM_PTR_R10_(VALUE) add dil, byte ptr [r10 + VALUE]
#define ADD_DIL_FROM_PTR_R11_(VALUE) add dil, byte ptr [r11 + VALUE]
#define ADD_DIL_FROM_PTR_R12_(VALUE) add dil, byte ptr [r12 + VALUE]
#define ADD_DIL_FROM_PTR_R13_(VALUE) add dil, byte ptr [r13 + VALUE]
#define ADD_DIL_FROM_PTR_R14_(VALUE) add dil, byte ptr [r14 + VALUE]
#define ADD_DIL_FROM_PTR_R15_(VALUE) add dil, byte ptr [r15 + VALUE]
#define ADD_DIL_FROM_PTR_EAX_(VALUE) add dil, byte ptr [eax + VALUE]
#define ADD_DIL_FROM_PTR_EBX_(VALUE) add dil, byte ptr [ebx + VALUE]
#define ADD_DIL_FROM_PTR_ECX_(VALUE) add dil, byte ptr [ecx + VALUE]
#define ADD_DIL_FROM_PTR_EDX_(VALUE) add dil, byte ptr [edx + VALUE]
#define ADD_DIL_FROM_PTR_EDI_(VALUE) add dil, byte ptr [edi + VALUE]
#define ADD_DIL_FROM_PTR_ESI_(VALUE) add dil, byte ptr [esi + VALUE]
#define ADD_DIL_FROM_PTR_EBP_(VALUE) add dil, byte ptr [ebp + VALUE]
#define ADD_DIL_FROM_PTR_ESP_(VALUE) add dil, byte ptr [esp + VALUE]

#define ADD_SIL_FROM_PTR_RAX_(VALUE) add sil, byte ptr [rax + VALUE]
#define ADD_SIL_FROM_PTR_RBX_(VALUE) add sil, byte ptr [rbx + VALUE]
#define ADD_SIL_FROM_PTR_RCX_(VALUE) add sil, byte ptr [rcx + VALUE]
#define ADD_SIL_FROM_PTR_RDX_(VALUE) add sil, byte ptr [rdx + VALUE]
#define ADD_SIL_FROM_PTR_RDI_(VALUE) add sil, byte ptr [rdi + VALUE]
#define ADD_SIL_FROM_PTR_RSI_(VALUE) add sil, byte ptr [rsi + VALUE]
#define ADD_SIL_FROM_PTR_RBP_(VALUE) add sil, byte ptr [rbp + VALUE]
#define ADD_SIL_FROM_PTR_RSP_(VALUE) add sil, byte ptr [rsp + VALUE]
#define ADD_SIL_FROM_PTR_R8_(VALUE) add sil, byte ptr [r8 + VALUE]
#define ADD_SIL_FROM_PTR_R9_(VALUE) add sil, byte ptr [r9 + VALUE]
#define ADD_SIL_FROM_PTR_R10_(VALUE) add sil, byte ptr [r10 + VALUE]
#define ADD_SIL_FROM_PTR_R11_(VALUE) add sil, byte ptr [r11 + VALUE]
#define ADD_SIL_FROM_PTR_R12_(VALUE) add sil, byte ptr [r12 + VALUE]
#define ADD_SIL_FROM_PTR_R13_(VALUE) add sil, byte ptr [r13 + VALUE]
#define ADD_SIL_FROM_PTR_R14_(VALUE) add sil, byte ptr [r14 + VALUE]
#define ADD_SIL_FROM_PTR_R15_(VALUE) add sil, byte ptr [r15 + VALUE]
#define ADD_SIL_FROM_PTR_EAX_(VALUE) add sil, byte ptr [eax + VALUE]
#define ADD_SIL_FROM_PTR_EBX_(VALUE) add sil, byte ptr [ebx + VALUE]
#define ADD_SIL_FROM_PTR_ECX_(VALUE) add sil, byte ptr [ecx + VALUE]
#define ADD_SIL_FROM_PTR_EDX_(VALUE) add sil, byte ptr [edx + VALUE]
#define ADD_SIL_FROM_PTR_EDI_(VALUE) add sil, byte ptr [edi + VALUE]
#define ADD_SIL_FROM_PTR_ESI_(VALUE) add sil, byte ptr [esi + VALUE]
#define ADD_SIL_FROM_PTR_EBP_(VALUE) add sil, byte ptr [ebp + VALUE]
#define ADD_SIL_FROM_PTR_ESP_(VALUE) add sil, byte ptr [esp + VALUE]

#define ADD_BPL_FROM_PTR_RAX_(VALUE) add bpl, byte ptr [rax + VALUE]
#define ADD_BPL_FROM_PTR_RBX_(VALUE) add bpl, byte ptr [rbx + VALUE]
#define ADD_BPL_FROM_PTR_RCX_(VALUE) add bpl, byte ptr [rcx + VALUE]
#define ADD_BPL_FROM_PTR_RDX_(VALUE) add bpl, byte ptr [rdx + VALUE]
#define ADD_BPL_FROM_PTR_RDI_(VALUE) add bpl, byte ptr [rdi + VALUE]
#define ADD_BPL_FROM_PTR_RSI_(VALUE) add bpl, byte ptr [rsi + VALUE]
#define ADD_BPL_FROM_PTR_RBP_(VALUE) add bpl, byte ptr [rbp + VALUE]
#define ADD_BPL_FROM_PTR_RSP_(VALUE) add bpl, byte ptr [rsp + VALUE]
#define ADD_BPL_FROM_PTR_R8_(VALUE) add bpl, byte ptr [r8 + VALUE]
#define ADD_BPL_FROM_PTR_R9_(VALUE) add bpl, byte ptr [r9 + VALUE]
#define ADD_BPL_FROM_PTR_R10_(VALUE) add bpl, byte ptr [r10 + VALUE]
#define ADD_BPL_FROM_PTR_R11_(VALUE) add bpl, byte ptr [r11 + VALUE]
#define ADD_BPL_FROM_PTR_R12_(VALUE) add bpl, byte ptr [r12 + VALUE]
#define ADD_BPL_FROM_PTR_R13_(VALUE) add bpl, byte ptr [r13 + VALUE]
#define ADD_BPL_FROM_PTR_R14_(VALUE) add bpl, byte ptr [r14 + VALUE]
#define ADD_BPL_FROM_PTR_R15_(VALUE) add bpl, byte ptr [r15 + VALUE]
#define ADD_BPL_FROM_PTR_EAX_(VALUE) add bpl, byte ptr [eax + VALUE]
#define ADD_BPL_FROM_PTR_EBX_(VALUE) add bpl, byte ptr [ebx + VALUE]
#define ADD_BPL_FROM_PTR_ECX_(VALUE) add bpl, byte ptr [ecx + VALUE]
#define ADD_BPL_FROM_PTR_EDX_(VALUE) add bpl, byte ptr [edx + VALUE]
#define ADD_BPL_FROM_PTR_EDI_(VALUE) add bpl, byte ptr [edi + VALUE]
#define ADD_BPL_FROM_PTR_ESI_(VALUE) add bpl, byte ptr [esi + VALUE]
#define ADD_BPL_FROM_PTR_EBP_(VALUE) add bpl, byte ptr [ebp + VALUE]
#define ADD_BPL_FROM_PTR_ESP_(VALUE) add bpl, byte ptr [esp + VALUE]

#define ADD_SPL_FROM_PTR_RAX_(VALUE) add spl, byte ptr [rax + VALUE]
#define ADD_SPL_FROM_PTR_RBX_(VALUE) add spl, byte ptr [rbx + VALUE]
#define ADD_SPL_FROM_PTR_RCX_(VALUE) add spl, byte ptr [rcx + VALUE]
#define ADD_SPL_FROM_PTR_RDX_(VALUE) add spl, byte ptr [rdx + VALUE]
#define ADD_SPL_FROM_PTR_RDI_(VALUE) add spl, byte ptr [rdi + VALUE]
#define ADD_SPL_FROM_PTR_RSI_(VALUE) add spl, byte ptr [rsi + VALUE]
#define ADD_SPL_FROM_PTR_RBP_(VALUE) add spl, byte ptr [rbp + VALUE]
#define ADD_SPL_FROM_PTR_RSP_(VALUE) add spl, byte ptr [rsp + VALUE]
#define ADD_SPL_FROM_PTR_R8_(VALUE) add spl, byte ptr [r8 + VALUE]
#define ADD_SPL_FROM_PTR_R9_(VALUE) add spl, byte ptr [r9 + VALUE]
#define ADD_SPL_FROM_PTR_R10_(VALUE) add spl, byte ptr [r10 + VALUE]
#define ADD_SPL_FROM_PTR_R11_(VALUE) add spl, byte ptr [r11 + VALUE]
#define ADD_SPL_FROM_PTR_R12_(VALUE) add spl, byte ptr [r12 + VALUE]
#define ADD_SPL_FROM_PTR_R13_(VALUE) add spl, byte ptr [r13 + VALUE]
#define ADD_SPL_FROM_PTR_R14_(VALUE) add spl, byte ptr [r14 + VALUE]
#define ADD_SPL_FROM_PTR_R15_(VALUE) add spl, byte ptr [r15 + VALUE]
#define ADD_SPL_FROM_PTR_EAX_(VALUE) add spl, byte ptr [eax + VALUE]
#define ADD_SPL_FROM_PTR_EBX_(VALUE) add spl, byte ptr [ebx + VALUE]
#define ADD_SPL_FROM_PTR_ECX_(VALUE) add spl, byte ptr [ecx + VALUE]
#define ADD_SPL_FROM_PTR_EDX_(VALUE) add spl, byte ptr [edx + VALUE]
#define ADD_SPL_FROM_PTR_EDI_(VALUE) add spl, byte ptr [edi + VALUE]
#define ADD_SPL_FROM_PTR_ESI_(VALUE) add spl, byte ptr [esi + VALUE]
#define ADD_SPL_FROM_PTR_EBP_(VALUE) add spl, byte ptr [ebp + VALUE]
#define ADD_SPL_FROM_PTR_ESP_(VALUE) add spl, byte ptr [esp + VALUE]

#define ADD_R8B_FROM_PTR_RAX_(VALUE) add r8b, byte ptr [rax + VALUE]
#define ADD_R8B_FROM_PTR_RBX_(VALUE) add r8b, byte ptr [rbx + VALUE]
#define ADD_R8B_FROM_PTR_RCX_(VALUE) add r8b, byte ptr [rcx + VALUE]
#define ADD_R8B_FROM_PTR_RDX_(VALUE) add r8b, byte ptr [rdx + VALUE]
#define ADD_R8B_FROM_PTR_RDI_(VALUE) add r8b, byte ptr [rdi + VALUE]
#define ADD_R8B_FROM_PTR_RSI_(VALUE) add r8b, byte ptr [rsi + VALUE]
#define ADD_R8B_FROM_PTR_RBP_(VALUE) add r8b, byte ptr [rbp + VALUE]
#define ADD_R8B_FROM_PTR_RSP_(VALUE) add r8b, byte ptr [rsp + VALUE]
#define ADD_R8B_FROM_PTR_R8_(VALUE) add r8b, byte ptr [r8 + VALUE]
#define ADD_R8B_FROM_PTR_R9_(VALUE) add r8b, byte ptr [r9 + VALUE]
#define ADD_R8B_FROM_PTR_R10_(VALUE) add r8b, byte ptr [r10 + VALUE]
#define ADD_R8B_FROM_PTR_R11_(VALUE) add r8b, byte ptr [r11 + VALUE]
#define ADD_R8B_FROM_PTR_R12_(VALUE) add r8b, byte ptr [r12 + VALUE]
#define ADD_R8B_FROM_PTR_R13_(VALUE) add r8b, byte ptr [r13 + VALUE]
#define ADD_R8B_FROM_PTR_R14_(VALUE) add r8b, byte ptr [r14 + VALUE]
#define ADD_R8B_FROM_PTR_R15_(VALUE) add r8b, byte ptr [r15 + VALUE]
#define ADD_R8B_FROM_PTR_EAX_(VALUE) add r8b, byte ptr [eax + VALUE]
#define ADD_R8B_FROM_PTR_EBX_(VALUE) add r8b, byte ptr [ebx + VALUE]
#define ADD_R8B_FROM_PTR_ECX_(VALUE) add r8b, byte ptr [ecx + VALUE]
#define ADD_R8B_FROM_PTR_EDX_(VALUE) add r8b, byte ptr [edx + VALUE]
#define ADD_R8B_FROM_PTR_EDI_(VALUE) add r8b, byte ptr [edi + VALUE]
#define ADD_R8B_FROM_PTR_ESI_(VALUE) add r8b, byte ptr [esi + VALUE]
#define ADD_R8B_FROM_PTR_EBP_(VALUE) add r8b, byte ptr [ebp + VALUE]
#define ADD_R8B_FROM_PTR_ESP_(VALUE) add r8b, byte ptr [esp + VALUE]

#define ADD_R9B_FROM_PTR_RAX_(VALUE) add r9b, byte ptr [rax + VALUE]
#define ADD_R9B_FROM_PTR_RBX_(VALUE) add r9b, byte ptr [rbx + VALUE]
#define ADD_R9B_FROM_PTR_RCX_(VALUE) add r9b, byte ptr [rcx + VALUE]
#define ADD_R9B_FROM_PTR_RDX_(VALUE) add r9b, byte ptr [rdx + VALUE]
#define ADD_R9B_FROM_PTR_RDI_(VALUE) add r9b, byte ptr [rdi + VALUE]
#define ADD_R9B_FROM_PTR_RSI_(VALUE) add r9b, byte ptr [rsi + VALUE]
#define ADD_R9B_FROM_PTR_RBP_(VALUE) add r9b, byte ptr [rbp + VALUE]
#define ADD_R9B_FROM_PTR_RSP_(VALUE) add r9b, byte ptr [rsp + VALUE]
#define ADD_R9B_FROM_PTR_R8_(VALUE) add r9b, byte ptr [r8 + VALUE]
#define ADD_R9B_FROM_PTR_R9_(VALUE) add r9b, byte ptr [r9 + VALUE]
#define ADD_R9B_FROM_PTR_R10_(VALUE) add r9b, byte ptr [r10 + VALUE]
#define ADD_R9B_FROM_PTR_R11_(VALUE) add r9b, byte ptr [r11 + VALUE]
#define ADD_R9B_FROM_PTR_R12_(VALUE) add r9b, byte ptr [r12 + VALUE]
#define ADD_R9B_FROM_PTR_R13_(VALUE) add r9b, byte ptr [r13 + VALUE]
#define ADD_R9B_FROM_PTR_R14_(VALUE) add r9b, byte ptr [r14 + VALUE]
#define ADD_R9B_FROM_PTR_R15_(VALUE) add r9b, byte ptr [r15 + VALUE]
#define ADD_R9B_FROM_PTR_EAX_(VALUE) add r9b, byte ptr [eax + VALUE]
#define ADD_R9B_FROM_PTR_EBX_(VALUE) add r9b, byte ptr [ebx + VALUE]
#define ADD_R9B_FROM_PTR_ECX_(VALUE) add r9b, byte ptr [ecx + VALUE]
#define ADD_R9B_FROM_PTR_EDX_(VALUE) add r9b, byte ptr [edx + VALUE]
#define ADD_R9B_FROM_PTR_EDI_(VALUE) add r9b, byte ptr [edi + VALUE]
#define ADD_R9B_FROM_PTR_ESI_(VALUE) add r9b, byte ptr [esi + VALUE]
#define ADD_R9B_FROM_PTR_EBP_(VALUE) add r9b, byte ptr [ebp + VALUE]
#define ADD_R9B_FROM_PTR_ESP_(VALUE) add r9b, byte ptr [esp + VALUE]

#define ADD_R10B_FROM_PTR_RAX_(VALUE) add r10b, byte ptr [rax + VALUE]
#define ADD_R10B_FROM_PTR_RBX_(VALUE) add r10b, byte ptr [rbx + VALUE]
#define ADD_R10B_FROM_PTR_RCX_(VALUE) add r10b, byte ptr [rcx + VALUE]
#define ADD_R10B_FROM_PTR_RDX_(VALUE) add r10b, byte ptr [rdx + VALUE]
#define ADD_R10B_FROM_PTR_RDI_(VALUE) add r10b, byte ptr [rdi + VALUE]
#define ADD_R10B_FROM_PTR_RSI_(VALUE) add r10b, byte ptr [rsi + VALUE]
#define ADD_R10B_FROM_PTR_RBP_(VALUE) add r10b, byte ptr [rbp + VALUE]
#define ADD_R10B_FROM_PTR_RSP_(VALUE) add r10b, byte ptr [rsp + VALUE]
#define ADD_R10B_FROM_PTR_R8_(VALUE) add r10b, byte ptr [r8 + VALUE]
#define ADD_R10B_FROM_PTR_R9_(VALUE) add r10b, byte ptr [r9 + VALUE]
#define ADD_R10B_FROM_PTR_R10_(VALUE) add r10b, byte ptr [r10 + VALUE]
#define ADD_R10B_FROM_PTR_R11_(VALUE) add r10b, byte ptr [r11 + VALUE]
#define ADD_R10B_FROM_PTR_R12_(VALUE) add r10b, byte ptr [r12 + VALUE]
#define ADD_R10B_FROM_PTR_R13_(VALUE) add r10b, byte ptr [r13 + VALUE]
#define ADD_R10B_FROM_PTR_R14_(VALUE) add r10b, byte ptr [r14 + VALUE]
#define ADD_R10B_FROM_PTR_R15_(VALUE) add r10b, byte ptr [r15 + VALUE]
#define ADD_R10B_FROM_PTR_EAX_(VALUE) add r10b, byte ptr [eax + VALUE]
#define ADD_R10B_FROM_PTR_EBX_(VALUE) add r10b, byte ptr [ebx + VALUE]
#define ADD_R10B_FROM_PTR_ECX_(VALUE) add r10b, byte ptr [ecx + VALUE]
#define ADD_R10B_FROM_PTR_EDX_(VALUE) add r10b, byte ptr [edx + VALUE]
#define ADD_R10B_FROM_PTR_EDI_(VALUE) add r10b, byte ptr [edi + VALUE]
#define ADD_R10B_FROM_PTR_ESI_(VALUE) add r10b, byte ptr [esi + VALUE]
#define ADD_R10B_FROM_PTR_EBP_(VALUE) add r10b, byte ptr [ebp + VALUE]
#define ADD_R10B_FROM_PTR_ESP_(VALUE) add r10b, byte ptr [esp + VALUE]

#define ADD_R11B_FROM_PTR_RAX_(VALUE) add r11b, byte ptr [rax + VALUE]
#define ADD_R11B_FROM_PTR_RBX_(VALUE) add r11b, byte ptr [rbx + VALUE]
#define ADD_R11B_FROM_PTR_RCX_(VALUE) add r11b, byte ptr [rcx + VALUE]
#define ADD_R11B_FROM_PTR_RDX_(VALUE) add r11b, byte ptr [rdx + VALUE]
#define ADD_R11B_FROM_PTR_RDI_(VALUE) add r11b, byte ptr [rdi + VALUE]
#define ADD_R11B_FROM_PTR_RSI_(VALUE) add r11b, byte ptr [rsi + VALUE]
#define ADD_R11B_FROM_PTR_RBP_(VALUE) add r11b, byte ptr [rbp + VALUE]
#define ADD_R11B_FROM_PTR_RSP_(VALUE) add r11b, byte ptr [rsp + VALUE]
#define ADD_R11B_FROM_PTR_R8_(VALUE) add r11b, byte ptr [r8 + VALUE]
#define ADD_R11B_FROM_PTR_R9_(VALUE) add r11b, byte ptr [r9 + VALUE]
#define ADD_R11B_FROM_PTR_R10_(VALUE) add r11b, byte ptr [r10 + VALUE]
#define ADD_R11B_FROM_PTR_R11_(VALUE) add r11b, byte ptr [r11 + VALUE]
#define ADD_R11B_FROM_PTR_R12_(VALUE) add r11b, byte ptr [r12 + VALUE]
#define ADD_R11B_FROM_PTR_R13_(VALUE) add r11b, byte ptr [r13 + VALUE]
#define ADD_R11B_FROM_PTR_R14_(VALUE) add r11b, byte ptr [r14 + VALUE]
#define ADD_R11B_FROM_PTR_R15_(VALUE) add r11b, byte ptr [r15 + VALUE]
#define ADD_R11B_FROM_PTR_EAX_(VALUE) add r11b, byte ptr [eax + VALUE]
#define ADD_R11B_FROM_PTR_EBX_(VALUE) add r11b, byte ptr [ebx + VALUE]
#define ADD_R11B_FROM_PTR_ECX_(VALUE) add r11b, byte ptr [ecx + VALUE]
#define ADD_R11B_FROM_PTR_EDX_(VALUE) add r11b, byte ptr [edx + VALUE]
#define ADD_R11B_FROM_PTR_EDI_(VALUE) add r11b, byte ptr [edi + VALUE]
#define ADD_R11B_FROM_PTR_ESI_(VALUE) add r11b, byte ptr [esi + VALUE]
#define ADD_R11B_FROM_PTR_EBP_(VALUE) add r11b, byte ptr [ebp + VALUE]
#define ADD_R11B_FROM_PTR_ESP_(VALUE) add r11b, byte ptr [esp + VALUE]

#define ADD_R12B_FROM_PTR_RAX_(VALUE) add r12b, byte ptr [rax + VALUE]
#define ADD_R12B_FROM_PTR_RBX_(VALUE) add r12b, byte ptr [rbx + VALUE]
#define ADD_R12B_FROM_PTR_RCX_(VALUE) add r12b, byte ptr [rcx + VALUE]
#define ADD_R12B_FROM_PTR_RDX_(VALUE) add r12b, byte ptr [rdx + VALUE]
#define ADD_R12B_FROM_PTR_RDI_(VALUE) add r12b, byte ptr [rdi + VALUE]
#define ADD_R12B_FROM_PTR_RSI_(VALUE) add r12b, byte ptr [rsi + VALUE]
#define ADD_R12B_FROM_PTR_RBP_(VALUE) add r12b, byte ptr [rbp + VALUE]
#define ADD_R12B_FROM_PTR_RSP_(VALUE) add r12b, byte ptr [rsp + VALUE]
#define ADD_R12B_FROM_PTR_R8_(VALUE) add r12b, byte ptr [r8 + VALUE]
#define ADD_R12B_FROM_PTR_R9_(VALUE) add r12b, byte ptr [r9 + VALUE]
#define ADD_R12B_FROM_PTR_R10_(VALUE) add r12b, byte ptr [r10 + VALUE]
#define ADD_R12B_FROM_PTR_R11_(VALUE) add r12b, byte ptr [r11 + VALUE]
#define ADD_R12B_FROM_PTR_R12_(VALUE) add r12b, byte ptr [r12 + VALUE]
#define ADD_R12B_FROM_PTR_R13_(VALUE) add r12b, byte ptr [r13 + VALUE]
#define ADD_R12B_FROM_PTR_R14_(VALUE) add r12b, byte ptr [r14 + VALUE]
#define ADD_R12B_FROM_PTR_R15_(VALUE) add r12b, byte ptr [r15 + VALUE]
#define ADD_R12B_FROM_PTR_EAX_(VALUE) add r12b, byte ptr [eax + VALUE]
#define ADD_R12B_FROM_PTR_EBX_(VALUE) add r12b, byte ptr [ebx + VALUE]
#define ADD_R12B_FROM_PTR_ECX_(VALUE) add r12b, byte ptr [ecx + VALUE]
#define ADD_R12B_FROM_PTR_EDX_(VALUE) add r12b, byte ptr [edx + VALUE]
#define ADD_R12B_FROM_PTR_EDI_(VALUE) add r12b, byte ptr [edi + VALUE]
#define ADD_R12B_FROM_PTR_ESI_(VALUE) add r12b, byte ptr [esi + VALUE]
#define ADD_R12B_FROM_PTR_EBP_(VALUE) add r12b, byte ptr [ebp + VALUE]
#define ADD_R12B_FROM_PTR_ESP_(VALUE) add r12b, byte ptr [esp + VALUE]

#define ADD_R13B_FROM_PTR_RAX_(VALUE) add r13b, byte ptr [rax + VALUE]
#define ADD_R13B_FROM_PTR_RBX_(VALUE) add r13b, byte ptr [rbx + VALUE]
#define ADD_R13B_FROM_PTR_RCX_(VALUE) add r13b, byte ptr [rcx + VALUE]
#define ADD_R13B_FROM_PTR_RDX_(VALUE) add r13b, byte ptr [rdx + VALUE]
#define ADD_R13B_FROM_PTR_RDI_(VALUE) add r13b, byte ptr [rdi + VALUE]
#define ADD_R13B_FROM_PTR_RSI_(VALUE) add r13b, byte ptr [rsi + VALUE]
#define ADD_R13B_FROM_PTR_RBP_(VALUE) add r13b, byte ptr [rbp + VALUE]
#define ADD_R13B_FROM_PTR_RSP_(VALUE) add r13b, byte ptr [rsp + VALUE]
#define ADD_R13B_FROM_PTR_R8_(VALUE) add r13b, byte ptr [r8 + VALUE]
#define ADD_R13B_FROM_PTR_R9_(VALUE) add r13b, byte ptr [r9 + VALUE]
#define ADD_R13B_FROM_PTR_R10_(VALUE) add r13b, byte ptr [r10 + VALUE]
#define ADD_R13B_FROM_PTR_R11_(VALUE) add r13b, byte ptr [r11 + VALUE]
#define ADD_R13B_FROM_PTR_R12_(VALUE) add r13b, byte ptr [r12 + VALUE]
#define ADD_R13B_FROM_PTR_R13_(VALUE) add r13b, byte ptr [r13 + VALUE]
#define ADD_R13B_FROM_PTR_R14_(VALUE) add r13b, byte ptr [r14 + VALUE]
#define ADD_R13B_FROM_PTR_R15_(VALUE) add r13b, byte ptr [r15 + VALUE]
#define ADD_R13B_FROM_PTR_EAX_(VALUE) add r13b, byte ptr [eax + VALUE]
#define ADD_R13B_FROM_PTR_EBX_(VALUE) add r13b, byte ptr [ebx + VALUE]
#define ADD_R13B_FROM_PTR_ECX_(VALUE) add r13b, byte ptr [ecx + VALUE]
#define ADD_R13B_FROM_PTR_EDX_(VALUE) add r13b, byte ptr [edx + VALUE]
#define ADD_R13B_FROM_PTR_EDI_(VALUE) add r13b, byte ptr [edi + VALUE]
#define ADD_R13B_FROM_PTR_ESI_(VALUE) add r13b, byte ptr [esi + VALUE]
#define ADD_R13B_FROM_PTR_EBP_(VALUE) add r13b, byte ptr [ebp + VALUE]
#define ADD_R13B_FROM_PTR_ESP_(VALUE) add r13b, byte ptr [esp + VALUE]

#define ADD_R14B_FROM_PTR_RAX_(VALUE) add r14b, byte ptr [rax + VALUE]
#define ADD_R14B_FROM_PTR_RBX_(VALUE) add r14b, byte ptr [rbx + VALUE]
#define ADD_R14B_FROM_PTR_RCX_(VALUE) add r14b, byte ptr [rcx + VALUE]
#define ADD_R14B_FROM_PTR_RDX_(VALUE) add r14b, byte ptr [rdx + VALUE]
#define ADD_R14B_FROM_PTR_RDI_(VALUE) add r14b, byte ptr [rdi + VALUE]
#define ADD_R14B_FROM_PTR_RSI_(VALUE) add r14b, byte ptr [rsi + VALUE]
#define ADD_R14B_FROM_PTR_RBP_(VALUE) add r14b, byte ptr [rbp + VALUE]
#define ADD_R14B_FROM_PTR_RSP_(VALUE) add r14b, byte ptr [rsp + VALUE]
#define ADD_R14B_FROM_PTR_R8_(VALUE) add r14b, byte ptr [r8 + VALUE]
#define ADD_R14B_FROM_PTR_R9_(VALUE) add r14b, byte ptr [r9 + VALUE]
#define ADD_R14B_FROM_PTR_R10_(VALUE) add r14b, byte ptr [r10 + VALUE]
#define ADD_R14B_FROM_PTR_R11_(VALUE) add r14b, byte ptr [r11 + VALUE]
#define ADD_R14B_FROM_PTR_R12_(VALUE) add r14b, byte ptr [r12 + VALUE]
#define ADD_R14B_FROM_PTR_R13_(VALUE) add r14b, byte ptr [r13 + VALUE]
#define ADD_R14B_FROM_PTR_R14_(VALUE) add r14b, byte ptr [r14 + VALUE]
#define ADD_R14B_FROM_PTR_R15_(VALUE) add r14b, byte ptr [r15 + VALUE]
#define ADD_R14B_FROM_PTR_EAX_(VALUE) add r14b, byte ptr [eax + VALUE]
#define ADD_R14B_FROM_PTR_EBX_(VALUE) add r14b, byte ptr [ebx + VALUE]
#define ADD_R14B_FROM_PTR_ECX_(VALUE) add r14b, byte ptr [ecx + VALUE]
#define ADD_R14B_FROM_PTR_EDX_(VALUE) add r14b, byte ptr [edx + VALUE]
#define ADD_R14B_FROM_PTR_EDI_(VALUE) add r14b, byte ptr [edi + VALUE]
#define ADD_R14B_FROM_PTR_ESI_(VALUE) add r14b, byte ptr [esi + VALUE]
#define ADD_R14B_FROM_PTR_EBP_(VALUE) add r14b, byte ptr [ebp + VALUE]
#define ADD_R14B_FROM_PTR_ESP_(VALUE) add r14b, byte ptr [esp + VALUE]

#define ADD_R15B_FROM_PTR_RAX_(VALUE) add r15b, byte ptr [rax + VALUE]
#define ADD_R15B_FROM_PTR_RBX_(VALUE) add r15b, byte ptr [rbx + VALUE]
#define ADD_R15B_FROM_PTR_RCX_(VALUE) add r15b, byte ptr [rcx + VALUE]
#define ADD_R15B_FROM_PTR_RDX_(VALUE) add r15b, byte ptr [rdx + VALUE]
#define ADD_R15B_FROM_PTR_RDI_(VALUE) add r15b, byte ptr [rdi + VALUE]
#define ADD_R15B_FROM_PTR_RSI_(VALUE) add r15b, byte ptr [rsi + VALUE]
#define ADD_R15B_FROM_PTR_RBP_(VALUE) add r15b, byte ptr [rbp + VALUE]
#define ADD_R15B_FROM_PTR_RSP_(VALUE) add r15b, byte ptr [rsp + VALUE]
#define ADD_R15B_FROM_PTR_R8_(VALUE) add r15b, byte ptr [r8 + VALUE]
#define ADD_R15B_FROM_PTR_R9_(VALUE) add r15b, byte ptr [r9 + VALUE]
#define ADD_R15B_FROM_PTR_R10_(VALUE) add r15b, byte ptr [r10 + VALUE]
#define ADD_R15B_FROM_PTR_R11_(VALUE) add r15b, byte ptr [r11 + VALUE]
#define ADD_R15B_FROM_PTR_R12_(VALUE) add r15b, byte ptr [r12 + VALUE]
#define ADD_R15B_FROM_PTR_R13_(VALUE) add r15b, byte ptr [r13 + VALUE]
#define ADD_R15B_FROM_PTR_R14_(VALUE) add r15b, byte ptr [r14 + VALUE]
#define ADD_R15B_FROM_PTR_R15_(VALUE) add r15b, byte ptr [r15 + VALUE]
#define ADD_R15B_FROM_PTR_EAX_(VALUE) add r15b, byte ptr [eax + VALUE]
#define ADD_R15B_FROM_PTR_EBX_(VALUE) add r15b, byte ptr [ebx + VALUE]
#define ADD_R15B_FROM_PTR_ECX_(VALUE) add r15b, byte ptr [ecx + VALUE]
#define ADD_R15B_FROM_PTR_EDX_(VALUE) add r15b, byte ptr [edx + VALUE]
#define ADD_R15B_FROM_PTR_EDI_(VALUE) add r15b, byte ptr [edi + VALUE]
#define ADD_R15B_FROM_PTR_ESI_(VALUE) add r15b, byte ptr [esi + VALUE]
#define ADD_R15B_FROM_PTR_EBP_(VALUE) add r15b, byte ptr [ebp + VALUE]
#define ADD_R15B_FROM_PTR_ESP_(VALUE) add r15b, byte ptr [esp + VALUE]

#define ADD_AL_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], al
#define ADD_AL_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], al
#define ADD_AL_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], al
#define ADD_AL_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], al
#define ADD_AL_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], al
#define ADD_AL_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], al
#define ADD_AL_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], al
#define ADD_AL_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], al
#define ADD_AL_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], al
#define ADD_AL_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], al
#define ADD_AL_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], al
#define ADD_AL_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], al
#define ADD_AL_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], al
#define ADD_AL_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], al
#define ADD_AL_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], al
#define ADD_AL_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], al
#define ADD_AL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], al
#define ADD_AL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], al
#define ADD_AL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], al
#define ADD_AL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], al
#define ADD_AL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], al
#define ADD_AL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], al
#define ADD_AL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], al
#define ADD_AL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], al

#define ADD_BL_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], bl
#define ADD_BL_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], bl
#define ADD_BL_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], bl
#define ADD_BL_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], bl
#define ADD_BL_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], bl
#define ADD_BL_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], bl
#define ADD_BL_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], bl
#define ADD_BL_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], bl
#define ADD_BL_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], bl
#define ADD_BL_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], bl
#define ADD_BL_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], bl
#define ADD_BL_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], bl
#define ADD_BL_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], bl
#define ADD_BL_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], bl
#define ADD_BL_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], bl
#define ADD_BL_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], bl
#define ADD_BL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], bl
#define ADD_BL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], bl
#define ADD_BL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], bl
#define ADD_BL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], bl
#define ADD_BL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], bl
#define ADD_BL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], bl
#define ADD_BL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], bl
#define ADD_BL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], bl

#define ADD_CL_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], cl
#define ADD_CL_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], cl
#define ADD_CL_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], cl
#define ADD_CL_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], cl
#define ADD_CL_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], cl
#define ADD_CL_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], cl
#define ADD_CL_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], cl
#define ADD_CL_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], cl
#define ADD_CL_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], cl
#define ADD_CL_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], cl
#define ADD_CL_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], cl
#define ADD_CL_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], cl
#define ADD_CL_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], cl
#define ADD_CL_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], cl
#define ADD_CL_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], cl
#define ADD_CL_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], cl
#define ADD_CL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], cl
#define ADD_CL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], cl
#define ADD_CL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], cl
#define ADD_CL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], cl
#define ADD_CL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], cl
#define ADD_CL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], cl
#define ADD_CL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], cl
#define ADD_CL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], cl

#define ADD_DL_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], dl
#define ADD_DL_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], dl
#define ADD_DL_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], dl
#define ADD_DL_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], dl
#define ADD_DL_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], dl
#define ADD_DL_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], dl
#define ADD_DL_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], dl
#define ADD_DL_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], dl
#define ADD_DL_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], dl
#define ADD_DL_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], dl
#define ADD_DL_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], dl
#define ADD_DL_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], dl
#define ADD_DL_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], dl
#define ADD_DL_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], dl
#define ADD_DL_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], dl
#define ADD_DL_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], dl
#define ADD_DL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], dl
#define ADD_DL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], dl
#define ADD_DL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], dl
#define ADD_DL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], dl
#define ADD_DL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], dl
#define ADD_DL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], dl
#define ADD_DL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], dl
#define ADD_DL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], dl

#define ADD_DIL_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], dil
#define ADD_DIL_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], dil
#define ADD_DIL_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], dil
#define ADD_DIL_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], dil
#define ADD_DIL_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], dil
#define ADD_DIL_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], dil
#define ADD_DIL_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], dil
#define ADD_DIL_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], dil
#define ADD_DIL_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], dil
#define ADD_DIL_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], dil
#define ADD_DIL_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], dil
#define ADD_DIL_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], dil
#define ADD_DIL_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], dil
#define ADD_DIL_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], dil
#define ADD_DIL_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], dil
#define ADD_DIL_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], dil
#define ADD_DIL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], dil
#define ADD_DIL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], dil
#define ADD_DIL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], dil
#define ADD_DIL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], dil
#define ADD_DIL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], dil
#define ADD_DIL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], dil
#define ADD_DIL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], dil
#define ADD_DIL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], dil

#define ADD_SIL_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], sil
#define ADD_SIL_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], sil
#define ADD_SIL_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], sil
#define ADD_SIL_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], sil
#define ADD_SIL_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], sil
#define ADD_SIL_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], sil
#define ADD_SIL_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], sil
#define ADD_SIL_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], sil
#define ADD_SIL_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], sil
#define ADD_SIL_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], sil
#define ADD_SIL_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], sil
#define ADD_SIL_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], sil
#define ADD_SIL_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], sil
#define ADD_SIL_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], sil
#define ADD_SIL_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], sil
#define ADD_SIL_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], sil
#define ADD_SIL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], sil
#define ADD_SIL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], sil
#define ADD_SIL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], sil
#define ADD_SIL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], sil
#define ADD_SIL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], sil
#define ADD_SIL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], sil
#define ADD_SIL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], sil
#define ADD_SIL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], sil

#define ADD_BPL_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], bpl
#define ADD_BPL_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], bpl
#define ADD_BPL_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], bpl
#define ADD_BPL_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], bpl
#define ADD_BPL_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], bpl
#define ADD_BPL_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], bpl
#define ADD_BPL_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], bpl
#define ADD_BPL_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], bpl
#define ADD_BPL_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], bpl
#define ADD_BPL_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], bpl
#define ADD_BPL_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], bpl
#define ADD_BPL_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], bpl
#define ADD_BPL_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], bpl
#define ADD_BPL_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], bpl
#define ADD_BPL_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], bpl
#define ADD_BPL_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], bpl
#define ADD_BPL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], bpl
#define ADD_BPL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], bpl
#define ADD_BPL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], bpl
#define ADD_BPL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], bpl
#define ADD_BPL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], bpl
#define ADD_BPL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], bpl
#define ADD_BPL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], bpl
#define ADD_BPL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], bpl

#define ADD_SPL_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], spl
#define ADD_SPL_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], spl
#define ADD_SPL_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], spl
#define ADD_SPL_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], spl
#define ADD_SPL_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], spl
#define ADD_SPL_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], spl
#define ADD_SPL_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], spl
#define ADD_SPL_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], spl
#define ADD_SPL_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], spl
#define ADD_SPL_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], spl
#define ADD_SPL_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], spl
#define ADD_SPL_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], spl
#define ADD_SPL_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], spl
#define ADD_SPL_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], spl
#define ADD_SPL_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], spl
#define ADD_SPL_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], spl
#define ADD_SPL_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], spl
#define ADD_SPL_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], spl
#define ADD_SPL_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], spl
#define ADD_SPL_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], spl
#define ADD_SPL_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], spl
#define ADD_SPL_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], spl
#define ADD_SPL_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], spl
#define ADD_SPL_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], spl

#define ADD_R8B_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], r8b
#define ADD_R8B_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], r8b
#define ADD_R8B_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], r8b
#define ADD_R8B_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], r8b
#define ADD_R8B_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], r8b
#define ADD_R8B_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], r8b
#define ADD_R8B_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], r8b
#define ADD_R8B_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], r8b
#define ADD_R8B_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], r8b
#define ADD_R8B_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], r8b
#define ADD_R8B_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], r8b
#define ADD_R8B_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], r8b
#define ADD_R8B_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], r8b
#define ADD_R8B_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], r8b
#define ADD_R8B_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], r8b
#define ADD_R8B_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], r8b
#define ADD_R8B_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], r8b
#define ADD_R8B_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], r8b
#define ADD_R8B_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], r8b
#define ADD_R8B_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], r8b
#define ADD_R8B_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], r8b
#define ADD_R8B_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], r8b
#define ADD_R8B_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], r8b
#define ADD_R8B_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], r8b

#define ADD_R9B_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], r9b
#define ADD_R9B_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], r9b
#define ADD_R9B_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], r9b
#define ADD_R9B_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], r9b
#define ADD_R9B_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], r9b
#define ADD_R9B_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], r9b
#define ADD_R9B_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], r9b
#define ADD_R9B_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], r9b
#define ADD_R9B_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], r9b
#define ADD_R9B_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], r9b
#define ADD_R9B_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], r9b
#define ADD_R9B_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], r9b
#define ADD_R9B_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], r9b
#define ADD_R9B_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], r9b
#define ADD_R9B_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], r9b
#define ADD_R9B_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], r9b
#define ADD_R9B_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], r9b
#define ADD_R9B_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], r9b
#define ADD_R9B_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], r9b
#define ADD_R9B_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], r9b
#define ADD_R9B_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], r9b
#define ADD_R9B_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], r9b
#define ADD_R9B_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], r9b
#define ADD_R9B_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], r9b

#define ADD_R10B_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], r10b
#define ADD_R10B_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], r10b
#define ADD_R10B_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], r10b
#define ADD_R10B_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], r10b
#define ADD_R10B_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], r10b
#define ADD_R10B_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], r10b
#define ADD_R10B_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], r10b
#define ADD_R10B_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], r10b
#define ADD_R10B_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], r10b
#define ADD_R10B_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], r10b
#define ADD_R10B_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], r10b
#define ADD_R10B_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], r10b
#define ADD_R10B_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], r10b
#define ADD_R10B_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], r10b
#define ADD_R10B_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], r10b
#define ADD_R10B_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], r10b
#define ADD_R10B_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], r10b
#define ADD_R10B_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], r10b
#define ADD_R10B_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], r10b
#define ADD_R10B_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], r10b
#define ADD_R10B_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], r10b
#define ADD_R10B_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], r10b
#define ADD_R10B_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], r10b
#define ADD_R10B_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], r10b

#define ADD_R11B_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], r11b
#define ADD_R11B_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], r11b
#define ADD_R11B_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], r11b
#define ADD_R11B_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], r11b
#define ADD_R11B_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], r11b
#define ADD_R11B_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], r11b
#define ADD_R11B_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], r11b
#define ADD_R11B_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], r11b
#define ADD_R11B_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], r11b
#define ADD_R11B_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], r11b
#define ADD_R11B_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], r11b
#define ADD_R11B_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], r11b
#define ADD_R11B_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], r11b
#define ADD_R11B_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], r11b
#define ADD_R11B_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], r11b
#define ADD_R11B_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], r11b
#define ADD_R11B_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], r11b
#define ADD_R11B_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], r11b
#define ADD_R11B_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], r11b
#define ADD_R11B_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], r11b
#define ADD_R11B_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], r11b
#define ADD_R11B_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], r11b
#define ADD_R11B_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], r11b
#define ADD_R11B_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], r11b

#define ADD_R12B_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], r12b
#define ADD_R12B_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], r12b
#define ADD_R12B_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], r12b
#define ADD_R12B_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], r12b
#define ADD_R12B_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], r12b
#define ADD_R12B_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], r12b
#define ADD_R12B_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], r12b
#define ADD_R12B_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], r12b
#define ADD_R12B_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], r12b
#define ADD_R12B_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], r12b
#define ADD_R12B_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], r12b
#define ADD_R12B_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], r12b
#define ADD_R12B_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], r12b
#define ADD_R12B_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], r12b
#define ADD_R12B_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], r12b
#define ADD_R12B_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], r12b
#define ADD_R12B_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], r12b
#define ADD_R12B_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], r12b
#define ADD_R12B_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], r12b
#define ADD_R12B_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], r12b
#define ADD_R12B_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], r12b
#define ADD_R12B_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], r12b
#define ADD_R12B_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], r12b
#define ADD_R12B_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], r12b

#define ADD_R13B_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], r13b
#define ADD_R13B_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], r13b
#define ADD_R13B_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], r13b
#define ADD_R13B_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], r13b
#define ADD_R13B_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], r13b
#define ADD_R13B_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], r13b
#define ADD_R13B_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], r13b
#define ADD_R13B_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], r13b
#define ADD_R13B_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], r13b
#define ADD_R13B_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], r13b
#define ADD_R13B_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], r13b
#define ADD_R13B_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], r13b
#define ADD_R13B_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], r13b
#define ADD_R13B_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], r13b
#define ADD_R13B_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], r13b
#define ADD_R13B_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], r13b
#define ADD_R13B_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], r13b
#define ADD_R13B_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], r13b
#define ADD_R13B_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], r13b
#define ADD_R13B_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], r13b
#define ADD_R13B_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], r13b
#define ADD_R13B_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], r13b
#define ADD_R13B_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], r13b
#define ADD_R13B_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], r13b

#define ADD_R14B_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], r14b
#define ADD_R14B_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], r14b
#define ADD_R14B_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], r14b
#define ADD_R14B_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], r14b
#define ADD_R14B_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], r14b
#define ADD_R14B_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], r14b
#define ADD_R14B_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], r14b
#define ADD_R14B_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], r14b
#define ADD_R14B_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], r14b
#define ADD_R14B_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], r14b
#define ADD_R14B_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], r14b
#define ADD_R14B_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], r14b
#define ADD_R14B_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], r14b
#define ADD_R14B_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], r14b
#define ADD_R14B_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], r14b
#define ADD_R14B_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], r14b
#define ADD_R14B_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], r14b
#define ADD_R14B_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], r14b
#define ADD_R14B_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], r14b
#define ADD_R14B_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], r14b
#define ADD_R14B_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], r14b
#define ADD_R14B_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], r14b
#define ADD_R14B_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], r14b
#define ADD_R14B_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], r14b

#define ADD_R15B_TO_PTR_RAX_(VALUE) add byte ptr [rax + VALUE], r15b
#define ADD_R15B_TO_PTR_RBX_(VALUE) add byte ptr [rbx + VALUE], r15b
#define ADD_R15B_TO_PTR_RCX_(VALUE) add byte ptr [rcx + VALUE], r15b
#define ADD_R15B_TO_PTR_RDX_(VALUE) add byte ptr [rdx + VALUE], r15b
#define ADD_R15B_TO_PTR_RDI_(VALUE) add byte ptr [rdi + VALUE], r15b
#define ADD_R15B_TO_PTR_RSI_(VALUE) add byte ptr [rsi + VALUE], r15b
#define ADD_R15B_TO_PTR_RBP_(VALUE) add byte ptr [rbp + VALUE], r15b
#define ADD_R15B_TO_PTR_RSP_(VALUE) add byte ptr [rsp + VALUE], r15b
#define ADD_R15B_TO_PTR_R8_(VALUE) add byte ptr [r8 + VALUE], r15b
#define ADD_R15B_TO_PTR_R9_(VALUE) add byte ptr [r9 + VALUE], r15b
#define ADD_R15B_TO_PTR_R10_(VALUE) add byte ptr [r10 + VALUE], r15b
#define ADD_R15B_TO_PTR_R11_(VALUE) add byte ptr [r11 + VALUE], r15b
#define ADD_R15B_TO_PTR_R12_(VALUE) add byte ptr [r12 + VALUE], r15b
#define ADD_R15B_TO_PTR_R13_(VALUE) add byte ptr [r13 + VALUE], r15b
#define ADD_R15B_TO_PTR_R14_(VALUE) add byte ptr [r14 + VALUE], r15b
#define ADD_R15B_TO_PTR_R15_(VALUE) add byte ptr [r15 + VALUE], r15b
#define ADD_R15B_TO_PTR_EAX_(VALUE) add byte ptr [eax + VALUE], r15b
#define ADD_R15B_TO_PTR_EBX_(VALUE) add byte ptr [ebx + VALUE], r15b
#define ADD_R15B_TO_PTR_ECX_(VALUE) add byte ptr [ecx + VALUE], r15b
#define ADD_R15B_TO_PTR_EDX_(VALUE) add byte ptr [edx + VALUE], r15b
#define ADD_R15B_TO_PTR_EDI_(VALUE) add byte ptr [edi + VALUE], r15b
#define ADD_R15B_TO_PTR_ESI_(VALUE) add byte ptr [esi + VALUE], r15b
#define ADD_R15B_TO_PTR_EBP_(VALUE) add byte ptr [ebp + VALUE], r15b
#define ADD_R15B_TO_PTR_ESP_(VALUE) add byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define ADD_AX_FROM_PTR_(VALUE) add ax, word ptr [VALUE]
#define ADD_BX_FROM_PTR_(VALUE) add bx, word ptr [VALUE]
#define ADD_CX_FROM_PTR_(VALUE) add cx, word ptr [VALUE]
#define ADD_DX_FROM_PTR_(VALUE) add dx, word ptr [VALUE]
#define ADD_DI_FROM_PTR_(VALUE) add di, word ptr [VALUE]
#define ADD_SI_FROM_PTR_(VALUE) add si, word ptr [VALUE]
#define ADD_BP_FROM_PTR_(VALUE) add bp, word ptr [VALUE]
#define ADD_SP_FROM_PTR_(VALUE) add sp, word ptr [VALUE]

#define ADD_AX_TO_PTR_(VALUE) add word ptr [VALUE], ax
#define ADD_BX_TO_PTR_(VALUE) add word ptr [VALUE], bx
#define ADD_CX_TO_PTR_(VALUE) add word ptr [VALUE], cx
#define ADD_DX_TO_PTR_(VALUE) add word ptr [VALUE], dx
#define ADD_DI_TO_PTR_(VALUE) add word ptr [VALUE], di
#define ADD_SI_TO_PTR_(VALUE) add word ptr [VALUE], si
#define ADD_BP_TO_PTR_(VALUE) add word ptr [VALUE], bp
#define ADD_SP_TO_PTR_(VALUE) add word ptr [VALUE], sp

#define ADD_AX_FROM_PTR_BX add ax, word ptr [bx]
#define ADD_AX_FROM_PTR_BP add ax, word ptr [bp]
#define ADD_AX_FROM_PTR_SI add ax, word ptr [si]
#define ADD_AX_FROM_PTR_DI add ax, word ptr [di]

#define ADD_BX_FROM_PTR_BX add bx, word ptr [bx]
#define ADD_BX_FROM_PTR_BP add bx, word ptr [bp]
#define ADD_BX_FROM_PTR_SI add bx, word ptr [si]
#define ADD_BX_FROM_PTR_DI add bx, word ptr [di]

#define ADD_CX_FROM_PTR_BX add cx, word ptr [bx]
#define ADD_CX_FROM_PTR_BP add cx, word ptr [bp]
#define ADD_CX_FROM_PTR_SI add cx, word ptr [si]
#define ADD_CX_FROM_PTR_DI add cx, word ptr [di]

#define ADD_DX_FROM_PTR_BX add dx, word ptr [bx]
#define ADD_DX_FROM_PTR_BP add dx, word ptr [bp]
#define ADD_DX_FROM_PTR_SI add dx, word ptr [si]
#define ADD_DX_FROM_PTR_DI add dx, word ptr [di]

#define ADD_DI_FROM_PTR_BX add di, word ptr [bx]
#define ADD_DI_FROM_PTR_BP add di, word ptr [bp]
#define ADD_DI_FROM_PTR_SI add di, word ptr [si]
#define ADD_DI_FROM_PTR_DI add di, word ptr [di]

#define ADD_SI_FROM_PTR_BX add si, word ptr [bx]
#define ADD_SI_FROM_PTR_BP add si, word ptr [bp]
#define ADD_SI_FROM_PTR_SI add si, word ptr [si]
#define ADD_SI_FROM_PTR_DI add si, word ptr [di]

#define ADD_BP_FROM_PTR_BX add bp, word ptr [bx]
#define ADD_BP_FROM_PTR_BP add bp, word ptr [bp]
#define ADD_BP_FROM_PTR_SI add bp, word ptr [si]
#define ADD_BP_FROM_PTR_DI add bp, word ptr [di]

#define ADD_SP_FROM_PTR_BX add sp, word ptr [bx]
#define ADD_SP_FROM_PTR_BP add sp, word ptr [bp]
#define ADD_SP_FROM_PTR_SI add sp, word ptr [si]
#define ADD_SP_FROM_PTR_DI add sp, word ptr [di]

#define ADD_AX_TO_PTR_BX add word ptr [bx], ax
#define ADD_AX_TO_PTR_BP add word ptr [bp], ax
#define ADD_AX_TO_PTR_SI add word ptr [si], ax
#define ADD_AX_TO_PTR_DI add word ptr [di], ax

#define ADD_BX_TO_PTR_BX add word ptr [bx], bx
#define ADD_BX_TO_PTR_BP add word ptr [bp], bx
#define ADD_BX_TO_PTR_SI add word ptr [si], bx
#define ADD_BX_TO_PTR_DI add word ptr [di], bx

#define ADD_CX_TO_PTR_BX add word ptr [bx], cx
#define ADD_CX_TO_PTR_BP add word ptr [bp], cx
#define ADD_CX_TO_PTR_SI add word ptr [si], cx
#define ADD_CX_TO_PTR_DI add word ptr [di], cx

#define ADD_DX_TO_PTR_BX add word ptr [bx], dx
#define ADD_DX_TO_PTR_BP add word ptr [bp], dx
#define ADD_DX_TO_PTR_SI add word ptr [si], dx
#define ADD_DX_TO_PTR_DI add word ptr [di], dx

#define ADD_DI_TO_PTR_BX add word ptr [bx], di
#define ADD_DI_TO_PTR_BP add word ptr [bp], di
#define ADD_DI_TO_PTR_SI add word ptr [si], di
#define ADD_DI_TO_PTR_DI add word ptr [di], di

#define ADD_SI_TO_PTR_BX add word ptr [bx], si
#define ADD_SI_TO_PTR_BP add word ptr [bp], si
#define ADD_SI_TO_PTR_SI add word ptr [si], si
#define ADD_SI_TO_PTR_DI add word ptr [di], si

#define ADD_BP_TO_PTR_BX add word ptr [bx], bp
#define ADD_BP_TO_PTR_BP add word ptr [bp], bp
#define ADD_BP_TO_PTR_SI add word ptr [si], bp
#define ADD_BP_TO_PTR_DI add word ptr [di], bp

#define ADD_SP_TO_PTR_BX add word ptr [bx], sp
#define ADD_SP_TO_PTR_BP add word ptr [bp], sp
#define ADD_SP_TO_PTR_SI add word ptr [si], sp
#define ADD_SP_TO_PTR_DI add word ptr [di], sp

#define ADD_AX_FROM_PTR_BX_(VALUE) add ax, word ptr [bx + VALUE]
#define ADD_AX_FROM_PTR_BP_(VALUE) add ax, word ptr [bp + VALUE]
#define ADD_AX_FROM_PTR_SI_(VALUE) add ax, word ptr [si + VALUE]
#define ADD_AX_FROM_PTR_DI_(VALUE) add ax, word ptr [di + VALUE]

#define ADD_BX_FROM_PTR_BX_(VALUE) add bx, word ptr [bx + VALUE]
#define ADD_BX_FROM_PTR_BP_(VALUE) add bx, word ptr [bp + VALUE]
#define ADD_BX_FROM_PTR_SI_(VALUE) add bx, word ptr [si + VALUE]
#define ADD_BX_FROM_PTR_DI_(VALUE) add bx, word ptr [di + VALUE]

#define ADD_CX_FROM_PTR_BX_(VALUE) add cx, word ptr [bx + VALUE]
#define ADD_CX_FROM_PTR_BP_(VALUE) add cx, word ptr [bp + VALUE]
#define ADD_CX_FROM_PTR_SI_(VALUE) add cx, word ptr [si + VALUE]
#define ADD_CX_FROM_PTR_DI_(VALUE) add cx, word ptr [di + VALUE]

#define ADD_DX_FROM_PTR_BX_(VALUE) add dx, word ptr [bx + VALUE]
#define ADD_DX_FROM_PTR_BP_(VALUE) add dx, word ptr [bp + VALUE]
#define ADD_DX_FROM_PTR_SI_(VALUE) add dx, word ptr [si + VALUE]
#define ADD_DX_FROM_PTR_DI_(VALUE) add dx, word ptr [di + VALUE]

#define ADD_DI_FROM_PTR_BX_(VALUE) add di, word ptr [bx + VALUE]
#define ADD_DI_FROM_PTR_BP_(VALUE) add di, word ptr [bp + VALUE]
#define ADD_DI_FROM_PTR_SI_(VALUE) add di, word ptr [si + VALUE]
#define ADD_DI_FROM_PTR_DI_(VALUE) add di, word ptr [di + VALUE]

#define ADD_SI_FROM_PTR_BX_(VALUE) add si, word ptr [bx + VALUE]
#define ADD_SI_FROM_PTR_BP_(VALUE) add si, word ptr [bp + VALUE]
#define ADD_SI_FROM_PTR_SI_(VALUE) add si, word ptr [si + VALUE]
#define ADD_SI_FROM_PTR_DI_(VALUE) add si, word ptr [di + VALUE]

#define ADD_BP_FROM_PTR_BX_(VALUE) add bp, word ptr [bx + VALUE]
#define ADD_BP_FROM_PTR_BP_(VALUE) add bp, word ptr [bp + VALUE]
#define ADD_BP_FROM_PTR_SI_(VALUE) add bp, word ptr [si + VALUE]
#define ADD_BP_FROM_PTR_DI_(VALUE) add bp, word ptr [di + VALUE]

#define ADD_SP_FROM_PTR_BX_(VALUE) add sp, word ptr [bx + VALUE]
#define ADD_SP_FROM_PTR_BP_(VALUE) add sp, word ptr [bp + VALUE]
#define ADD_SP_FROM_PTR_SI_(VALUE) add sp, word ptr [si + VALUE]
#define ADD_SP_FROM_PTR_DI_(VALUE) add sp, word ptr [di + VALUE]

#define ADD_AX_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], ax
#define ADD_AX_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], ax
#define ADD_AX_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], ax
#define ADD_AX_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], ax

#define ADD_BX_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], bx
#define ADD_BX_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], bx
#define ADD_BX_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], bx
#define ADD_BX_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], bx

#define ADD_CX_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], cx
#define ADD_CX_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], cx
#define ADD_CX_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], cx
#define ADD_CX_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], cx

#define ADD_DX_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], dx
#define ADD_DX_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], dx
#define ADD_DX_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], dx
#define ADD_DX_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], dx

#define ADD_DI_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], di
#define ADD_DI_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], di
#define ADD_DI_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], di
#define ADD_DI_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], di

#define ADD_SI_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], si
#define ADD_SI_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], si
#define ADD_SI_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], si
#define ADD_SI_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], si

#define ADD_BP_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], bp
#define ADD_BP_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], bp
#define ADD_BP_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], bp
#define ADD_BP_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], bp

#define ADD_SP_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], sp
#define ADD_SP_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], sp
#define ADD_SP_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], sp
#define ADD_SP_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADD_AX_FROM_PTR_(VALUE) add ax, word ptr [VALUE]
#define ADD_BX_FROM_PTR_(VALUE) add bx, word ptr [VALUE]
#define ADD_CX_FROM_PTR_(VALUE) add cx, word ptr [VALUE]
#define ADD_DX_FROM_PTR_(VALUE) add dx, word ptr [VALUE]
#define ADD_DI_FROM_PTR_(VALUE) add di, word ptr [VALUE]
#define ADD_SI_FROM_PTR_(VALUE) add si, word ptr [VALUE]
#define ADD_BP_FROM_PTR_(VALUE) add bp, word ptr [VALUE]
#define ADD_SP_FROM_PTR_(VALUE) add sp, word ptr [VALUE]

#define ADD_AX_TO_PTR_(VALUE) add word ptr [VALUE], ax
#define ADD_BX_TO_PTR_(VALUE) add word ptr [VALUE], bx
#define ADD_CX_TO_PTR_(VALUE) add word ptr [VALUE], cx
#define ADD_DX_TO_PTR_(VALUE) add word ptr [VALUE], dx
#define ADD_DI_TO_PTR_(VALUE) add word ptr [VALUE], di
#define ADD_SI_TO_PTR_(VALUE) add word ptr [VALUE], si
#define ADD_BP_TO_PTR_(VALUE) add word ptr [VALUE], bp
#define ADD_SP_TO_PTR_(VALUE) add word ptr [VALUE], sp

#define ADD_AX_FROM_PTR_EAX add ax, word ptr [eax]
#define ADD_AX_FROM_PTR_EBX add ax, word ptr [ebx]
#define ADD_AX_FROM_PTR_ECX add ax, word ptr [ecx]
#define ADD_AX_FROM_PTR_EDX add ax, word ptr [edx]
#define ADD_AX_FROM_PTR_EDI add ax, word ptr [edi]
#define ADD_AX_FROM_PTR_ESI add ax, word ptr [esi]
#define ADD_AX_FROM_PTR_EBP add ax, word ptr [ebp]
#define ADD_AX_FROM_PTR_ESP add ax, word ptr [esp]
#define ADD_AX_FROM_PTR_BX add ax, word ptr [bx]
#define ADD_AX_FROM_PTR_BP add ax, word ptr [bp]
#define ADD_AX_FROM_PTR_SI add ax, word ptr [si]
#define ADD_AX_FROM_PTR_DI add ax, word ptr [di]

#define ADD_BX_FROM_PTR_EAX add bx, word ptr [eax]
#define ADD_BX_FROM_PTR_EBX add bx, word ptr [ebx]
#define ADD_BX_FROM_PTR_ECX add bx, word ptr [ecx]
#define ADD_BX_FROM_PTR_EDX add bx, word ptr [edx]
#define ADD_BX_FROM_PTR_EDI add bx, word ptr [edi]
#define ADD_BX_FROM_PTR_ESI add bx, word ptr [esi]
#define ADD_BX_FROM_PTR_EBP add bx, word ptr [ebp]
#define ADD_BX_FROM_PTR_ESP add bx, word ptr [esp]
#define ADD_BX_FROM_PTR_BX add bx, word ptr [bx]
#define ADD_BX_FROM_PTR_BP add bx, word ptr [bp]
#define ADD_BX_FROM_PTR_SI add bx, word ptr [si]
#define ADD_BX_FROM_PTR_DI add bx, word ptr [di]

#define ADD_CX_FROM_PTR_EAX add cx, word ptr [eax]
#define ADD_CX_FROM_PTR_EBX add cx, word ptr [ebx]
#define ADD_CX_FROM_PTR_ECX add cx, word ptr [ecx]
#define ADD_CX_FROM_PTR_EDX add cx, word ptr [edx]
#define ADD_CX_FROM_PTR_EDI add cx, word ptr [edi]
#define ADD_CX_FROM_PTR_ESI add cx, word ptr [esi]
#define ADD_CX_FROM_PTR_EBP add cx, word ptr [ebp]
#define ADD_CX_FROM_PTR_ESP add cx, word ptr [esp]
#define ADD_CX_FROM_PTR_BX add cx, word ptr [bx]
#define ADD_CX_FROM_PTR_BP add cx, word ptr [bp]
#define ADD_CX_FROM_PTR_SI add cx, word ptr [si]
#define ADD_CX_FROM_PTR_DI add cx, word ptr [di]

#define ADD_DX_FROM_PTR_EAX add dx, word ptr [eax]
#define ADD_DX_FROM_PTR_EBX add dx, word ptr [ebx]
#define ADD_DX_FROM_PTR_ECX add dx, word ptr [ecx]
#define ADD_DX_FROM_PTR_EDX add dx, word ptr [edx]
#define ADD_DX_FROM_PTR_EDI add dx, word ptr [edi]
#define ADD_DX_FROM_PTR_ESI add dx, word ptr [esi]
#define ADD_DX_FROM_PTR_EBP add dx, word ptr [ebp]
#define ADD_DX_FROM_PTR_ESP add dx, word ptr [esp]
#define ADD_DX_FROM_PTR_BX add dx, word ptr [bx]
#define ADD_DX_FROM_PTR_BP add dx, word ptr [bp]
#define ADD_DX_FROM_PTR_SI add dx, word ptr [si]
#define ADD_DX_FROM_PTR_DI add dx, word ptr [di]

#define ADD_DI_FROM_PTR_EAX add di, word ptr [eax]
#define ADD_DI_FROM_PTR_EBX add di, word ptr [ebx]
#define ADD_DI_FROM_PTR_ECX add di, word ptr [ecx]
#define ADD_DI_FROM_PTR_EDX add di, word ptr [edx]
#define ADD_DI_FROM_PTR_EDI add di, word ptr [edi]
#define ADD_DI_FROM_PTR_ESI add di, word ptr [esi]
#define ADD_DI_FROM_PTR_EBP add di, word ptr [ebp]
#define ADD_DI_FROM_PTR_ESP add di, word ptr [esp]
#define ADD_DI_FROM_PTR_BX add di, word ptr [bx]
#define ADD_DI_FROM_PTR_BP add di, word ptr [bp]
#define ADD_DI_FROM_PTR_SI add di, word ptr [si]
#define ADD_DI_FROM_PTR_DI add di, word ptr [di]

#define ADD_SI_FROM_PTR_EAX add si, word ptr [eax]
#define ADD_SI_FROM_PTR_EBX add si, word ptr [ebx]
#define ADD_SI_FROM_PTR_ECX add si, word ptr [ecx]
#define ADD_SI_FROM_PTR_EDX add si, word ptr [edx]
#define ADD_SI_FROM_PTR_EDI add si, word ptr [edi]
#define ADD_SI_FROM_PTR_ESI add si, word ptr [esi]
#define ADD_SI_FROM_PTR_EBP add si, word ptr [ebp]
#define ADD_SI_FROM_PTR_ESP add si, word ptr [esp]
#define ADD_SI_FROM_PTR_BX add si, word ptr [bx]
#define ADD_SI_FROM_PTR_BP add si, word ptr [bp]
#define ADD_SI_FROM_PTR_SI add si, word ptr [si]
#define ADD_SI_FROM_PTR_DI add si, word ptr [di]

#define ADD_BP_FROM_PTR_EAX add bp, word ptr [eax]
#define ADD_BP_FROM_PTR_EBX add bp, word ptr [ebx]
#define ADD_BP_FROM_PTR_ECX add bp, word ptr [ecx]
#define ADD_BP_FROM_PTR_EDX add bp, word ptr [edx]
#define ADD_BP_FROM_PTR_EDI add bp, word ptr [edi]
#define ADD_BP_FROM_PTR_ESI add bp, word ptr [esi]
#define ADD_BP_FROM_PTR_EBP add bp, word ptr [ebp]
#define ADD_BP_FROM_PTR_ESP add bp, word ptr [esp]
#define ADD_BP_FROM_PTR_BX add bp, word ptr [bx]
#define ADD_BP_FROM_PTR_BP add bp, word ptr [bp]
#define ADD_BP_FROM_PTR_SI add bp, word ptr [si]
#define ADD_BP_FROM_PTR_DI add bp, word ptr [di]

#define ADD_SP_FROM_PTR_EAX add sp, word ptr [eax]
#define ADD_SP_FROM_PTR_EBX add sp, word ptr [ebx]
#define ADD_SP_FROM_PTR_ECX add sp, word ptr [ecx]
#define ADD_SP_FROM_PTR_EDX add sp, word ptr [edx]
#define ADD_SP_FROM_PTR_EDI add sp, word ptr [edi]
#define ADD_SP_FROM_PTR_ESI add sp, word ptr [esi]
#define ADD_SP_FROM_PTR_EBP add sp, word ptr [ebp]
#define ADD_SP_FROM_PTR_ESP add sp, word ptr [esp]
#define ADD_SP_FROM_PTR_BX add sp, word ptr [bx]
#define ADD_SP_FROM_PTR_BP add sp, word ptr [bp]
#define ADD_SP_FROM_PTR_SI add sp, word ptr [si]
#define ADD_SP_FROM_PTR_DI add sp, word ptr [di]

#define ADD_AX_TO_PTR_EAX add word ptr [eax], ax
#define ADD_AX_TO_PTR_EBX add word ptr [ebx], ax
#define ADD_AX_TO_PTR_ECX add word ptr [ecx], ax
#define ADD_AX_TO_PTR_EDX add word ptr [edx], ax
#define ADD_AX_TO_PTR_EDI add word ptr [edi], ax
#define ADD_AX_TO_PTR_ESI add word ptr [esi], ax
#define ADD_AX_TO_PTR_EBP add word ptr [ebp], ax
#define ADD_AX_TO_PTR_ESP add word ptr [esp], ax
#define ADD_AX_TO_PTR_BX add word ptr [bx], ax
#define ADD_AX_TO_PTR_BP add word ptr [bp], ax
#define ADD_AX_TO_PTR_SI add word ptr [si], ax
#define ADD_AX_TO_PTR_DI add word ptr [di], ax

#define ADD_BX_TO_PTR_EAX add word ptr [eax], bx
#define ADD_BX_TO_PTR_EBX add word ptr [ebx], bx
#define ADD_BX_TO_PTR_ECX add word ptr [ecx], bx
#define ADD_BX_TO_PTR_EDX add word ptr [edx], bx
#define ADD_BX_TO_PTR_EDI add word ptr [edi], bx
#define ADD_BX_TO_PTR_ESI add word ptr [esi], bx
#define ADD_BX_TO_PTR_EBP add word ptr [ebp], bx
#define ADD_BX_TO_PTR_ESP add word ptr [esp], bx
#define ADD_BX_TO_PTR_BX add word ptr [bx], bx
#define ADD_BX_TO_PTR_BP add word ptr [bp], bx
#define ADD_BX_TO_PTR_SI add word ptr [si], bx
#define ADD_BX_TO_PTR_DI add word ptr [di], bx

#define ADD_CX_TO_PTR_EAX add word ptr [eax], cx
#define ADD_CX_TO_PTR_EBX add word ptr [ebx], cx
#define ADD_CX_TO_PTR_ECX add word ptr [ecx], cx
#define ADD_CX_TO_PTR_EDX add word ptr [edx], cx
#define ADD_CX_TO_PTR_EDI add word ptr [edi], cx
#define ADD_CX_TO_PTR_ESI add word ptr [esi], cx
#define ADD_CX_TO_PTR_EBP add word ptr [ebp], cx
#define ADD_CX_TO_PTR_ESP add word ptr [esp], cx
#define ADD_CX_TO_PTR_BX add word ptr [bx], cx
#define ADD_CX_TO_PTR_BP add word ptr [bp], cx
#define ADD_CX_TO_PTR_SI add word ptr [si], cx
#define ADD_CX_TO_PTR_DI add word ptr [di], cx

#define ADD_DX_TO_PTR_EAX add word ptr [eax], dx
#define ADD_DX_TO_PTR_EBX add word ptr [ebx], dx
#define ADD_DX_TO_PTR_ECX add word ptr [ecx], dx
#define ADD_DX_TO_PTR_EDX add word ptr [edx], dx
#define ADD_DX_TO_PTR_EDI add word ptr [edi], dx
#define ADD_DX_TO_PTR_ESI add word ptr [esi], dx
#define ADD_DX_TO_PTR_EBP add word ptr [ebp], dx
#define ADD_DX_TO_PTR_ESP add word ptr [esp], dx
#define ADD_DX_TO_PTR_BX add word ptr [bx], dx
#define ADD_DX_TO_PTR_BP add word ptr [bp], dx
#define ADD_DX_TO_PTR_SI add word ptr [si], dx
#define ADD_DX_TO_PTR_DI add word ptr [di], dx

#define ADD_DI_TO_PTR_EAX add word ptr [eax], di
#define ADD_DI_TO_PTR_EBX add word ptr [ebx], di
#define ADD_DI_TO_PTR_ECX add word ptr [ecx], di
#define ADD_DI_TO_PTR_EDX add word ptr [edx], di
#define ADD_DI_TO_PTR_EDI add word ptr [edi], di
#define ADD_DI_TO_PTR_ESI add word ptr [esi], di
#define ADD_DI_TO_PTR_EBP add word ptr [ebp], di
#define ADD_DI_TO_PTR_ESP add word ptr [esp], di
#define ADD_DI_TO_PTR_BX add word ptr [bx], di
#define ADD_DI_TO_PTR_BP add word ptr [bp], di
#define ADD_DI_TO_PTR_SI add word ptr [si], di
#define ADD_DI_TO_PTR_DI add word ptr [di], di

#define ADD_SI_TO_PTR_EAX add word ptr [eax], si
#define ADD_SI_TO_PTR_EBX add word ptr [ebx], si
#define ADD_SI_TO_PTR_ECX add word ptr [ecx], si
#define ADD_SI_TO_PTR_EDX add word ptr [edx], si
#define ADD_SI_TO_PTR_EDI add word ptr [edi], si
#define ADD_SI_TO_PTR_ESI add word ptr [esi], si
#define ADD_SI_TO_PTR_EBP add word ptr [ebp], si
#define ADD_SI_TO_PTR_ESP add word ptr [esp], si
#define ADD_SI_TO_PTR_BX add word ptr [bx], si
#define ADD_SI_TO_PTR_BP add word ptr [bp], si
#define ADD_SI_TO_PTR_SI add word ptr [si], si
#define ADD_SI_TO_PTR_DI add word ptr [di], si

#define ADD_BP_TO_PTR_EAX add word ptr [eax], bp
#define ADD_BP_TO_PTR_EBX add word ptr [ebx], bp
#define ADD_BP_TO_PTR_ECX add word ptr [ecx], bp
#define ADD_BP_TO_PTR_EDX add word ptr [edx], bp
#define ADD_BP_TO_PTR_EDI add word ptr [edi], bp
#define ADD_BP_TO_PTR_ESI add word ptr [esi], bp
#define ADD_BP_TO_PTR_EBP add word ptr [ebp], bp
#define ADD_BP_TO_PTR_ESP add word ptr [esp], bp
#define ADD_BP_TO_PTR_BX add word ptr [bx], bp
#define ADD_BP_TO_PTR_BP add word ptr [bp], bp
#define ADD_BP_TO_PTR_SI add word ptr [si], bp
#define ADD_BP_TO_PTR_DI add word ptr [di], bp

#define ADD_SP_TO_PTR_EAX add word ptr [eax], sp
#define ADD_SP_TO_PTR_EBX add word ptr [ebx], sp
#define ADD_SP_TO_PTR_ECX add word ptr [ecx], sp
#define ADD_SP_TO_PTR_EDX add word ptr [edx], sp
#define ADD_SP_TO_PTR_EDI add word ptr [edi], sp
#define ADD_SP_TO_PTR_ESI add word ptr [esi], sp
#define ADD_SP_TO_PTR_EBP add word ptr [ebp], sp
#define ADD_SP_TO_PTR_ESP add word ptr [esp], sp
#define ADD_SP_TO_PTR_BX add word ptr [bx], sp
#define ADD_SP_TO_PTR_BP add word ptr [bp], sp
#define ADD_SP_TO_PTR_SI add word ptr [si], sp
#define ADD_SP_TO_PTR_DI add word ptr [di], sp

#define ADD_AX_FROM_PTR_EAX_(VALUE) add ax, word ptr [eax + VALUE]
#define ADD_AX_FROM_PTR_EBX_(VALUE) add ax, word ptr [ebx + VALUE]
#define ADD_AX_FROM_PTR_ECX_(VALUE) add ax, word ptr [ecx + VALUE]
#define ADD_AX_FROM_PTR_EDX_(VALUE) add ax, word ptr [edx + VALUE]
#define ADD_AX_FROM_PTR_EDI_(VALUE) add ax, word ptr [edi + VALUE]
#define ADD_AX_FROM_PTR_ESI_(VALUE) add ax, word ptr [esi + VALUE]
#define ADD_AX_FROM_PTR_EBP_(VALUE) add ax, word ptr [ebp + VALUE]
#define ADD_AX_FROM_PTR_ESP_(VALUE) add ax, word ptr [esp + VALUE]
#define ADD_AX_FROM_PTR_BX_(VALUE) add ax, word ptr [bx + VALUE]
#define ADD_AX_FROM_PTR_BP_(VALUE) add ax, word ptr [bp + VALUE]
#define ADD_AX_FROM_PTR_SI_(VALUE) add ax, word ptr [si + VALUE]
#define ADD_AX_FROM_PTR_DI_(VALUE) add ax, word ptr [di + VALUE]

#define ADD_BX_FROM_PTR_EAX_(VALUE) add bx, word ptr [eax + VALUE]
#define ADD_BX_FROM_PTR_EBX_(VALUE) add bx, word ptr [ebx + VALUE]
#define ADD_BX_FROM_PTR_ECX_(VALUE) add bx, word ptr [ecx + VALUE]
#define ADD_BX_FROM_PTR_EDX_(VALUE) add bx, word ptr [edx + VALUE]
#define ADD_BX_FROM_PTR_EDI_(VALUE) add bx, word ptr [edi + VALUE]
#define ADD_BX_FROM_PTR_ESI_(VALUE) add bx, word ptr [esi + VALUE]
#define ADD_BX_FROM_PTR_EBP_(VALUE) add bx, word ptr [ebp + VALUE]
#define ADD_BX_FROM_PTR_ESP_(VALUE) add bx, word ptr [esp + VALUE]
#define ADD_BX_FROM_PTR_BX_(VALUE) add bx, word ptr [bx + VALUE]
#define ADD_BX_FROM_PTR_BP_(VALUE) add bx, word ptr [bp + VALUE]
#define ADD_BX_FROM_PTR_SI_(VALUE) add bx, word ptr [si + VALUE]
#define ADD_BX_FROM_PTR_DI_(VALUE) add bx, word ptr [di + VALUE]

#define ADD_CX_FROM_PTR_EAX_(VALUE) add cx, word ptr [eax + VALUE]
#define ADD_CX_FROM_PTR_EBX_(VALUE) add cx, word ptr [ebx + VALUE]
#define ADD_CX_FROM_PTR_ECX_(VALUE) add cx, word ptr [ecx + VALUE]
#define ADD_CX_FROM_PTR_EDX_(VALUE) add cx, word ptr [edx + VALUE]
#define ADD_CX_FROM_PTR_EDI_(VALUE) add cx, word ptr [edi + VALUE]
#define ADD_CX_FROM_PTR_ESI_(VALUE) add cx, word ptr [esi + VALUE]
#define ADD_CX_FROM_PTR_EBP_(VALUE) add cx, word ptr [ebp + VALUE]
#define ADD_CX_FROM_PTR_ESP_(VALUE) add cx, word ptr [esp + VALUE]
#define ADD_CX_FROM_PTR_BX_(VALUE) add cx, word ptr [bx + VALUE]
#define ADD_CX_FROM_PTR_BP_(VALUE) add cx, word ptr [bp + VALUE]
#define ADD_CX_FROM_PTR_SI_(VALUE) add cx, word ptr [si + VALUE]
#define ADD_CX_FROM_PTR_DI_(VALUE) add cx, word ptr [di + VALUE]

#define ADD_DX_FROM_PTR_EAX_(VALUE) add dx, word ptr [eax + VALUE]
#define ADD_DX_FROM_PTR_EBX_(VALUE) add dx, word ptr [ebx + VALUE]
#define ADD_DX_FROM_PTR_ECX_(VALUE) add dx, word ptr [ecx + VALUE]
#define ADD_DX_FROM_PTR_EDX_(VALUE) add dx, word ptr [edx + VALUE]
#define ADD_DX_FROM_PTR_EDI_(VALUE) add dx, word ptr [edi + VALUE]
#define ADD_DX_FROM_PTR_ESI_(VALUE) add dx, word ptr [esi + VALUE]
#define ADD_DX_FROM_PTR_EBP_(VALUE) add dx, word ptr [ebp + VALUE]
#define ADD_DX_FROM_PTR_ESP_(VALUE) add dx, word ptr [esp + VALUE]
#define ADD_DX_FROM_PTR_BX_(VALUE) add dx, word ptr [bx + VALUE]
#define ADD_DX_FROM_PTR_BP_(VALUE) add dx, word ptr [bp + VALUE]
#define ADD_DX_FROM_PTR_SI_(VALUE) add dx, word ptr [si + VALUE]
#define ADD_DX_FROM_PTR_DI_(VALUE) add dx, word ptr [di + VALUE]

#define ADD_DI_FROM_PTR_EAX_(VALUE) add di, word ptr [eax + VALUE]
#define ADD_DI_FROM_PTR_EBX_(VALUE) add di, word ptr [ebx + VALUE]
#define ADD_DI_FROM_PTR_ECX_(VALUE) add di, word ptr [ecx + VALUE]
#define ADD_DI_FROM_PTR_EDX_(VALUE) add di, word ptr [edx + VALUE]
#define ADD_DI_FROM_PTR_EDI_(VALUE) add di, word ptr [edi + VALUE]
#define ADD_DI_FROM_PTR_ESI_(VALUE) add di, word ptr [esi + VALUE]
#define ADD_DI_FROM_PTR_EBP_(VALUE) add di, word ptr [ebp + VALUE]
#define ADD_DI_FROM_PTR_ESP_(VALUE) add di, word ptr [esp + VALUE]
#define ADD_DI_FROM_PTR_BX_(VALUE) add di, word ptr [bx + VALUE]
#define ADD_DI_FROM_PTR_BP_(VALUE) add di, word ptr [bp + VALUE]
#define ADD_DI_FROM_PTR_SI_(VALUE) add di, word ptr [si + VALUE]
#define ADD_DI_FROM_PTR_DI_(VALUE) add di, word ptr [di + VALUE]

#define ADD_SI_FROM_PTR_EAX_(VALUE) add si, word ptr [eax + VALUE]
#define ADD_SI_FROM_PTR_EBX_(VALUE) add si, word ptr [ebx + VALUE]
#define ADD_SI_FROM_PTR_ECX_(VALUE) add si, word ptr [ecx + VALUE]
#define ADD_SI_FROM_PTR_EDX_(VALUE) add si, word ptr [edx + VALUE]
#define ADD_SI_FROM_PTR_EDI_(VALUE) add si, word ptr [edi + VALUE]
#define ADD_SI_FROM_PTR_ESI_(VALUE) add si, word ptr [esi + VALUE]
#define ADD_SI_FROM_PTR_EBP_(VALUE) add si, word ptr [ebp + VALUE]
#define ADD_SI_FROM_PTR_ESP_(VALUE) add si, word ptr [esp + VALUE]
#define ADD_SI_FROM_PTR_BX_(VALUE) add si, word ptr [bx + VALUE]
#define ADD_SI_FROM_PTR_BP_(VALUE) add si, word ptr [bp + VALUE]
#define ADD_SI_FROM_PTR_SI_(VALUE) add si, word ptr [si + VALUE]
#define ADD_SI_FROM_PTR_DI_(VALUE) add si, word ptr [di + VALUE]

#define ADD_BP_FROM_PTR_EAX_(VALUE) add bp, word ptr [eax + VALUE]
#define ADD_BP_FROM_PTR_EBX_(VALUE) add bp, word ptr [ebx + VALUE]
#define ADD_BP_FROM_PTR_ECX_(VALUE) add bp, word ptr [ecx + VALUE]
#define ADD_BP_FROM_PTR_EDX_(VALUE) add bp, word ptr [edx + VALUE]
#define ADD_BP_FROM_PTR_EDI_(VALUE) add bp, word ptr [edi + VALUE]
#define ADD_BP_FROM_PTR_ESI_(VALUE) add bp, word ptr [esi + VALUE]
#define ADD_BP_FROM_PTR_EBP_(VALUE) add bp, word ptr [ebp + VALUE]
#define ADD_BP_FROM_PTR_ESP_(VALUE) add bp, word ptr [esp + VALUE]
#define ADD_BP_FROM_PTR_BX_(VALUE) add bp, word ptr [bx + VALUE]
#define ADD_BP_FROM_PTR_BP_(VALUE) add bp, word ptr [bp + VALUE]
#define ADD_BP_FROM_PTR_SI_(VALUE) add bp, word ptr [si + VALUE]
#define ADD_BP_FROM_PTR_DI_(VALUE) add bp, word ptr [di + VALUE]

#define ADD_SP_FROM_PTR_EAX_(VALUE) add sp, word ptr [eax + VALUE]
#define ADD_SP_FROM_PTR_EBX_(VALUE) add sp, word ptr [ebx + VALUE]
#define ADD_SP_FROM_PTR_ECX_(VALUE) add sp, word ptr [ecx + VALUE]
#define ADD_SP_FROM_PTR_EDX_(VALUE) add sp, word ptr [edx + VALUE]
#define ADD_SP_FROM_PTR_EDI_(VALUE) add sp, word ptr [edi + VALUE]
#define ADD_SP_FROM_PTR_ESI_(VALUE) add sp, word ptr [esi + VALUE]
#define ADD_SP_FROM_PTR_EBP_(VALUE) add sp, word ptr [ebp + VALUE]
#define ADD_SP_FROM_PTR_ESP_(VALUE) add sp, word ptr [esp + VALUE]
#define ADD_SP_FROM_PTR_BX_(VALUE) add sp, word ptr [bx + VALUE]
#define ADD_SP_FROM_PTR_BP_(VALUE) add sp, word ptr [bp + VALUE]
#define ADD_SP_FROM_PTR_SI_(VALUE) add sp, word ptr [si + VALUE]
#define ADD_SP_FROM_PTR_DI_(VALUE) add sp, word ptr [di + VALUE]

#define ADD_AX_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], ax
#define ADD_AX_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], ax
#define ADD_AX_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], ax
#define ADD_AX_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], ax
#define ADD_AX_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], ax
#define ADD_AX_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], ax
#define ADD_AX_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], ax
#define ADD_AX_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], ax
#define ADD_AX_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], ax
#define ADD_AX_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], ax
#define ADD_AX_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], ax
#define ADD_AX_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], ax

#define ADD_BX_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], bx
#define ADD_BX_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], bx
#define ADD_BX_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], bx
#define ADD_BX_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], bx
#define ADD_BX_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], bx
#define ADD_BX_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], bx
#define ADD_BX_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], bx
#define ADD_BX_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], bx
#define ADD_BX_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], bx
#define ADD_BX_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], bx
#define ADD_BX_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], bx
#define ADD_BX_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], bx

#define ADD_CX_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], cx
#define ADD_CX_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], cx
#define ADD_CX_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], cx
#define ADD_CX_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], cx
#define ADD_CX_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], cx
#define ADD_CX_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], cx
#define ADD_CX_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], cx
#define ADD_CX_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], cx
#define ADD_CX_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], cx
#define ADD_CX_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], cx
#define ADD_CX_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], cx
#define ADD_CX_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], cx

#define ADD_DX_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], dx
#define ADD_DX_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], dx
#define ADD_DX_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], dx
#define ADD_DX_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], dx
#define ADD_DX_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], dx
#define ADD_DX_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], dx
#define ADD_DX_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], dx
#define ADD_DX_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], dx
#define ADD_DX_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], dx
#define ADD_DX_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], dx
#define ADD_DX_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], dx
#define ADD_DX_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], dx

#define ADD_DI_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], di
#define ADD_DI_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], di
#define ADD_DI_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], di
#define ADD_DI_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], di
#define ADD_DI_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], di
#define ADD_DI_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], di
#define ADD_DI_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], di
#define ADD_DI_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], di
#define ADD_DI_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], di
#define ADD_DI_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], di
#define ADD_DI_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], di
#define ADD_DI_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], di

#define ADD_SI_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], si
#define ADD_SI_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], si
#define ADD_SI_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], si
#define ADD_SI_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], si
#define ADD_SI_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], si
#define ADD_SI_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], si
#define ADD_SI_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], si
#define ADD_SI_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], si
#define ADD_SI_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], si
#define ADD_SI_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], si
#define ADD_SI_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], si
#define ADD_SI_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], si

#define ADD_BP_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], bp
#define ADD_BP_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], bp
#define ADD_BP_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], bp
#define ADD_BP_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], bp
#define ADD_BP_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], bp
#define ADD_BP_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], bp
#define ADD_BP_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], bp
#define ADD_BP_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], bp
#define ADD_BP_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], bp
#define ADD_BP_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], bp
#define ADD_BP_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], bp
#define ADD_BP_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], bp

#define ADD_SP_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], sp
#define ADD_SP_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], sp
#define ADD_SP_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], sp
#define ADD_SP_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], sp
#define ADD_SP_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], sp
#define ADD_SP_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], sp
#define ADD_SP_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], sp
#define ADD_SP_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], sp
#define ADD_SP_TO_PTR_BX_(VALUE) add word ptr [bx + VALUE], sp
#define ADD_SP_TO_PTR_BP_(VALUE) add word ptr [bp + VALUE], sp
#define ADD_SP_TO_PTR_SI_(VALUE) add word ptr [si + VALUE], sp
#define ADD_SP_TO_PTR_DI_(VALUE) add word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_AX_FROM_PTR_(VALUE) add ax, word ptr [VALUE]
#define ADD_BX_FROM_PTR_(VALUE) add bx, word ptr [VALUE]
#define ADD_CX_FROM_PTR_(VALUE) add cx, word ptr [VALUE]
#define ADD_DX_FROM_PTR_(VALUE) add dx, word ptr [VALUE]
#define ADD_DI_FROM_PTR_(VALUE) add di, word ptr [VALUE]
#define ADD_SI_FROM_PTR_(VALUE) add si, word ptr [VALUE]
#define ADD_BP_FROM_PTR_(VALUE) add bp, word ptr [VALUE]
#define ADD_SP_FROM_PTR_(VALUE) add sp, word ptr [VALUE]
#define ADD_R8W_FROM_PTR_(VALUE) add r8w, word ptr [VALUE]
#define ADD_R9W_FROM_PTR_(VALUE) add r9w, word ptr [VALUE]
#define ADD_R10W_FROM_PTR_(VALUE) add r10w, word ptr [VALUE]
#define ADD_R11W_FROM_PTR_(VALUE) add r11w, word ptr [VALUE]
#define ADD_R12W_FROM_PTR_(VALUE) add r12w, word ptr [VALUE]
#define ADD_R13W_FROM_PTR_(VALUE) add r13w, word ptr [VALUE]
#define ADD_R14W_FROM_PTR_(VALUE) add r14w, word ptr [VALUE]
#define ADD_R15W_FROM_PTR_(VALUE) add r15w, word ptr [VALUE]

#define ADD_AX_TO_PTR_(VALUE) add word ptr [VALUE], ax
#define ADD_BX_TO_PTR_(VALUE) add word ptr [VALUE], bx
#define ADD_CX_TO_PTR_(VALUE) add word ptr [VALUE], cx
#define ADD_DX_TO_PTR_(VALUE) add word ptr [VALUE], dx
#define ADD_DI_TO_PTR_(VALUE) add word ptr [VALUE], di
#define ADD_SI_TO_PTR_(VALUE) add word ptr [VALUE], si
#define ADD_BP_TO_PTR_(VALUE) add word ptr [VALUE], bp
#define ADD_SP_TO_PTR_(VALUE) add word ptr [VALUE], sp
#define ADD_R8W_TO_PTR_(VALUE) add word ptr [VALUE], r8w
#define ADD_R9W_TO_PTR_(VALUE) add word ptr [VALUE], r9w
#define ADD_R10W_TO_PTR_(VALUE) add word ptr [VALUE], r10w
#define ADD_R11W_TO_PTR_(VALUE) add word ptr [VALUE], r11w
#define ADD_R12W_TO_PTR_(VALUE) add word ptr [VALUE], r12w
#define ADD_R13W_TO_PTR_(VALUE) add word ptr [VALUE], r13w
#define ADD_R14W_TO_PTR_(VALUE) add word ptr [VALUE], r14w
#define ADD_R15W_TO_PTR_(VALUE) add word ptr [VALUE], r15w

#define ADD_AX_FROM_PTR_RAX add ax, word ptr [rax]
#define ADD_AX_FROM_PTR_RBX add ax, word ptr [rbx]
#define ADD_AX_FROM_PTR_RCX add ax, word ptr [rcx]
#define ADD_AX_FROM_PTR_RDX add ax, word ptr [rdx]
#define ADD_AX_FROM_PTR_RDI add ax, word ptr [rdi]
#define ADD_AX_FROM_PTR_RSI add ax, word ptr [rsi]
#define ADD_AX_FROM_PTR_RBP add ax, word ptr [rbp]
#define ADD_AX_FROM_PTR_RSP add ax, word ptr [rsp]
#define ADD_AX_FROM_PTR_R8 add ax, word ptr [r8]
#define ADD_AX_FROM_PTR_R9 add ax, word ptr [r9]
#define ADD_AX_FROM_PTR_R10 add ax, word ptr [r10]
#define ADD_AX_FROM_PTR_R11 add ax, word ptr [r11]
#define ADD_AX_FROM_PTR_R12 add ax, word ptr [r12]
#define ADD_AX_FROM_PTR_R13 add ax, word ptr [r13]
#define ADD_AX_FROM_PTR_R14 add ax, word ptr [r14]
#define ADD_AX_FROM_PTR_R15 add ax, word ptr [r15]
#define ADD_AX_FROM_PTR_EAX add ax, word ptr [eax]
#define ADD_AX_FROM_PTR_EBX add ax, word ptr [ebx]
#define ADD_AX_FROM_PTR_ECX add ax, word ptr [ecx]
#define ADD_AX_FROM_PTR_EDX add ax, word ptr [edx]
#define ADD_AX_FROM_PTR_EDI add ax, word ptr [edi]
#define ADD_AX_FROM_PTR_ESI add ax, word ptr [esi]
#define ADD_AX_FROM_PTR_EBP add ax, word ptr [ebp]
#define ADD_AX_FROM_PTR_ESP add ax, word ptr [esp]

#define ADD_BX_FROM_PTR_RAX add bx, word ptr [rax]
#define ADD_BX_FROM_PTR_RBX add bx, word ptr [rbx]
#define ADD_BX_FROM_PTR_RCX add bx, word ptr [rcx]
#define ADD_BX_FROM_PTR_RDX add bx, word ptr [rdx]
#define ADD_BX_FROM_PTR_RDI add bx, word ptr [rdi]
#define ADD_BX_FROM_PTR_RSI add bx, word ptr [rsi]
#define ADD_BX_FROM_PTR_RBP add bx, word ptr [rbp]
#define ADD_BX_FROM_PTR_RSP add bx, word ptr [rsp]
#define ADD_BX_FROM_PTR_R8 add bx, word ptr [r8]
#define ADD_BX_FROM_PTR_R9 add bx, word ptr [r9]
#define ADD_BX_FROM_PTR_R10 add bx, word ptr [r10]
#define ADD_BX_FROM_PTR_R11 add bx, word ptr [r11]
#define ADD_BX_FROM_PTR_R12 add bx, word ptr [r12]
#define ADD_BX_FROM_PTR_R13 add bx, word ptr [r13]
#define ADD_BX_FROM_PTR_R14 add bx, word ptr [r14]
#define ADD_BX_FROM_PTR_R15 add bx, word ptr [r15]
#define ADD_BX_FROM_PTR_EAX add bx, word ptr [eax]
#define ADD_BX_FROM_PTR_EBX add bx, word ptr [ebx]
#define ADD_BX_FROM_PTR_ECX add bx, word ptr [ecx]
#define ADD_BX_FROM_PTR_EDX add bx, word ptr [edx]
#define ADD_BX_FROM_PTR_EDI add bx, word ptr [edi]
#define ADD_BX_FROM_PTR_ESI add bx, word ptr [esi]
#define ADD_BX_FROM_PTR_EBP add bx, word ptr [ebp]
#define ADD_BX_FROM_PTR_ESP add bx, word ptr [esp]

#define ADD_CX_FROM_PTR_RAX add cx, word ptr [rax]
#define ADD_CX_FROM_PTR_RBX add cx, word ptr [rbx]
#define ADD_CX_FROM_PTR_RCX add cx, word ptr [rcx]
#define ADD_CX_FROM_PTR_RDX add cx, word ptr [rdx]
#define ADD_CX_FROM_PTR_RDI add cx, word ptr [rdi]
#define ADD_CX_FROM_PTR_RSI add cx, word ptr [rsi]
#define ADD_CX_FROM_PTR_RBP add cx, word ptr [rbp]
#define ADD_CX_FROM_PTR_RSP add cx, word ptr [rsp]
#define ADD_CX_FROM_PTR_R8 add cx, word ptr [r8]
#define ADD_CX_FROM_PTR_R9 add cx, word ptr [r9]
#define ADD_CX_FROM_PTR_R10 add cx, word ptr [r10]
#define ADD_CX_FROM_PTR_R11 add cx, word ptr [r11]
#define ADD_CX_FROM_PTR_R12 add cx, word ptr [r12]
#define ADD_CX_FROM_PTR_R13 add cx, word ptr [r13]
#define ADD_CX_FROM_PTR_R14 add cx, word ptr [r14]
#define ADD_CX_FROM_PTR_R15 add cx, word ptr [r15]
#define ADD_CX_FROM_PTR_EAX add cx, word ptr [eax]
#define ADD_CX_FROM_PTR_EBX add cx, word ptr [ebx]
#define ADD_CX_FROM_PTR_ECX add cx, word ptr [ecx]
#define ADD_CX_FROM_PTR_EDX add cx, word ptr [edx]
#define ADD_CX_FROM_PTR_EDI add cx, word ptr [edi]
#define ADD_CX_FROM_PTR_ESI add cx, word ptr [esi]
#define ADD_CX_FROM_PTR_EBP add cx, word ptr [ebp]
#define ADD_CX_FROM_PTR_ESP add cx, word ptr [esp]

#define ADD_DX_FROM_PTR_RAX add dx, word ptr [rax]
#define ADD_DX_FROM_PTR_RBX add dx, word ptr [rbx]
#define ADD_DX_FROM_PTR_RCX add dx, word ptr [rcx]
#define ADD_DX_FROM_PTR_RDX add dx, word ptr [rdx]
#define ADD_DX_FROM_PTR_RDI add dx, word ptr [rdi]
#define ADD_DX_FROM_PTR_RSI add dx, word ptr [rsi]
#define ADD_DX_FROM_PTR_RBP add dx, word ptr [rbp]
#define ADD_DX_FROM_PTR_RSP add dx, word ptr [rsp]
#define ADD_DX_FROM_PTR_R8 add dx, word ptr [r8]
#define ADD_DX_FROM_PTR_R9 add dx, word ptr [r9]
#define ADD_DX_FROM_PTR_R10 add dx, word ptr [r10]
#define ADD_DX_FROM_PTR_R11 add dx, word ptr [r11]
#define ADD_DX_FROM_PTR_R12 add dx, word ptr [r12]
#define ADD_DX_FROM_PTR_R13 add dx, word ptr [r13]
#define ADD_DX_FROM_PTR_R14 add dx, word ptr [r14]
#define ADD_DX_FROM_PTR_R15 add dx, word ptr [r15]
#define ADD_DX_FROM_PTR_EAX add dx, word ptr [eax]
#define ADD_DX_FROM_PTR_EBX add dx, word ptr [ebx]
#define ADD_DX_FROM_PTR_ECX add dx, word ptr [ecx]
#define ADD_DX_FROM_PTR_EDX add dx, word ptr [edx]
#define ADD_DX_FROM_PTR_EDI add dx, word ptr [edi]
#define ADD_DX_FROM_PTR_ESI add dx, word ptr [esi]
#define ADD_DX_FROM_PTR_EBP add dx, word ptr [ebp]
#define ADD_DX_FROM_PTR_ESP add dx, word ptr [esp]

#define ADD_DI_FROM_PTR_RAX add di, word ptr [rax]
#define ADD_DI_FROM_PTR_RBX add di, word ptr [rbx]
#define ADD_DI_FROM_PTR_RCX add di, word ptr [rcx]
#define ADD_DI_FROM_PTR_RDX add di, word ptr [rdx]
#define ADD_DI_FROM_PTR_RDI add di, word ptr [rdi]
#define ADD_DI_FROM_PTR_RSI add di, word ptr [rsi]
#define ADD_DI_FROM_PTR_RBP add di, word ptr [rbp]
#define ADD_DI_FROM_PTR_RSP add di, word ptr [rsp]
#define ADD_DI_FROM_PTR_R8 add di, word ptr [r8]
#define ADD_DI_FROM_PTR_R9 add di, word ptr [r9]
#define ADD_DI_FROM_PTR_R10 add di, word ptr [r10]
#define ADD_DI_FROM_PTR_R11 add di, word ptr [r11]
#define ADD_DI_FROM_PTR_R12 add di, word ptr [r12]
#define ADD_DI_FROM_PTR_R13 add di, word ptr [r13]
#define ADD_DI_FROM_PTR_R14 add di, word ptr [r14]
#define ADD_DI_FROM_PTR_R15 add di, word ptr [r15]
#define ADD_DI_FROM_PTR_EAX add di, word ptr [eax]
#define ADD_DI_FROM_PTR_EBX add di, word ptr [ebx]
#define ADD_DI_FROM_PTR_ECX add di, word ptr [ecx]
#define ADD_DI_FROM_PTR_EDX add di, word ptr [edx]
#define ADD_DI_FROM_PTR_EDI add di, word ptr [edi]
#define ADD_DI_FROM_PTR_ESI add di, word ptr [esi]
#define ADD_DI_FROM_PTR_EBP add di, word ptr [ebp]
#define ADD_DI_FROM_PTR_ESP add di, word ptr [esp]

#define ADD_SI_FROM_PTR_RAX add si, word ptr [rax]
#define ADD_SI_FROM_PTR_RBX add si, word ptr [rbx]
#define ADD_SI_FROM_PTR_RCX add si, word ptr [rcx]
#define ADD_SI_FROM_PTR_RDX add si, word ptr [rdx]
#define ADD_SI_FROM_PTR_RDI add si, word ptr [rdi]
#define ADD_SI_FROM_PTR_RSI add si, word ptr [rsi]
#define ADD_SI_FROM_PTR_RBP add si, word ptr [rbp]
#define ADD_SI_FROM_PTR_RSP add si, word ptr [rsp]
#define ADD_SI_FROM_PTR_R8 add si, word ptr [r8]
#define ADD_SI_FROM_PTR_R9 add si, word ptr [r9]
#define ADD_SI_FROM_PTR_R10 add si, word ptr [r10]
#define ADD_SI_FROM_PTR_R11 add si, word ptr [r11]
#define ADD_SI_FROM_PTR_R12 add si, word ptr [r12]
#define ADD_SI_FROM_PTR_R13 add si, word ptr [r13]
#define ADD_SI_FROM_PTR_R14 add si, word ptr [r14]
#define ADD_SI_FROM_PTR_R15 add si, word ptr [r15]
#define ADD_SI_FROM_PTR_EAX add si, word ptr [eax]
#define ADD_SI_FROM_PTR_EBX add si, word ptr [ebx]
#define ADD_SI_FROM_PTR_ECX add si, word ptr [ecx]
#define ADD_SI_FROM_PTR_EDX add si, word ptr [edx]
#define ADD_SI_FROM_PTR_EDI add si, word ptr [edi]
#define ADD_SI_FROM_PTR_ESI add si, word ptr [esi]
#define ADD_SI_FROM_PTR_EBP add si, word ptr [ebp]
#define ADD_SI_FROM_PTR_ESP add si, word ptr [esp]

#define ADD_BP_FROM_PTR_RAX add bp, word ptr [rax]
#define ADD_BP_FROM_PTR_RBX add bp, word ptr [rbx]
#define ADD_BP_FROM_PTR_RCX add bp, word ptr [rcx]
#define ADD_BP_FROM_PTR_RDX add bp, word ptr [rdx]
#define ADD_BP_FROM_PTR_RDI add bp, word ptr [rdi]
#define ADD_BP_FROM_PTR_RSI add bp, word ptr [rsi]
#define ADD_BP_FROM_PTR_RBP add bp, word ptr [rbp]
#define ADD_BP_FROM_PTR_RSP add bp, word ptr [rsp]
#define ADD_BP_FROM_PTR_R8 add bp, word ptr [r8]
#define ADD_BP_FROM_PTR_R9 add bp, word ptr [r9]
#define ADD_BP_FROM_PTR_R10 add bp, word ptr [r10]
#define ADD_BP_FROM_PTR_R11 add bp, word ptr [r11]
#define ADD_BP_FROM_PTR_R12 add bp, word ptr [r12]
#define ADD_BP_FROM_PTR_R13 add bp, word ptr [r13]
#define ADD_BP_FROM_PTR_R14 add bp, word ptr [r14]
#define ADD_BP_FROM_PTR_R15 add bp, word ptr [r15]
#define ADD_BP_FROM_PTR_EAX add bp, word ptr [eax]
#define ADD_BP_FROM_PTR_EBX add bp, word ptr [ebx]
#define ADD_BP_FROM_PTR_ECX add bp, word ptr [ecx]
#define ADD_BP_FROM_PTR_EDX add bp, word ptr [edx]
#define ADD_BP_FROM_PTR_EDI add bp, word ptr [edi]
#define ADD_BP_FROM_PTR_ESI add bp, word ptr [esi]
#define ADD_BP_FROM_PTR_EBP add bp, word ptr [ebp]
#define ADD_BP_FROM_PTR_ESP add bp, word ptr [esp]

#define ADD_SP_FROM_PTR_RAX add sp, word ptr [rax]
#define ADD_SP_FROM_PTR_RBX add sp, word ptr [rbx]
#define ADD_SP_FROM_PTR_RCX add sp, word ptr [rcx]
#define ADD_SP_FROM_PTR_RDX add sp, word ptr [rdx]
#define ADD_SP_FROM_PTR_RDI add sp, word ptr [rdi]
#define ADD_SP_FROM_PTR_RSI add sp, word ptr [rsi]
#define ADD_SP_FROM_PTR_RBP add sp, word ptr [rbp]
#define ADD_SP_FROM_PTR_RSP add sp, word ptr [rsp]
#define ADD_SP_FROM_PTR_R8 add sp, word ptr [r8]
#define ADD_SP_FROM_PTR_R9 add sp, word ptr [r9]
#define ADD_SP_FROM_PTR_R10 add sp, word ptr [r10]
#define ADD_SP_FROM_PTR_R11 add sp, word ptr [r11]
#define ADD_SP_FROM_PTR_R12 add sp, word ptr [r12]
#define ADD_SP_FROM_PTR_R13 add sp, word ptr [r13]
#define ADD_SP_FROM_PTR_R14 add sp, word ptr [r14]
#define ADD_SP_FROM_PTR_R15 add sp, word ptr [r15]
#define ADD_SP_FROM_PTR_EAX add sp, word ptr [eax]
#define ADD_SP_FROM_PTR_EBX add sp, word ptr [ebx]
#define ADD_SP_FROM_PTR_ECX add sp, word ptr [ecx]
#define ADD_SP_FROM_PTR_EDX add sp, word ptr [edx]
#define ADD_SP_FROM_PTR_EDI add sp, word ptr [edi]
#define ADD_SP_FROM_PTR_ESI add sp, word ptr [esi]
#define ADD_SP_FROM_PTR_EBP add sp, word ptr [ebp]
#define ADD_SP_FROM_PTR_ESP add sp, word ptr [esp]

#define ADD_R8W_FROM_PTR_RAX add r8w, word ptr [rax]
#define ADD_R8W_FROM_PTR_RBX add r8w, word ptr [rbx]
#define ADD_R8W_FROM_PTR_RCX add r8w, word ptr [rcx]
#define ADD_R8W_FROM_PTR_RDX add r8w, word ptr [rdx]
#define ADD_R8W_FROM_PTR_RDI add r8w, word ptr [rdi]
#define ADD_R8W_FROM_PTR_RSI add r8w, word ptr [rsi]
#define ADD_R8W_FROM_PTR_RBP add r8w, word ptr [rbp]
#define ADD_R8W_FROM_PTR_RSP add r8w, word ptr [rsp]
#define ADD_R8W_FROM_PTR_R8 add r8w, word ptr [r8]
#define ADD_R8W_FROM_PTR_R9 add r8w, word ptr [r9]
#define ADD_R8W_FROM_PTR_R10 add r8w, word ptr [r10]
#define ADD_R8W_FROM_PTR_R11 add r8w, word ptr [r11]
#define ADD_R8W_FROM_PTR_R12 add r8w, word ptr [r12]
#define ADD_R8W_FROM_PTR_R13 add r8w, word ptr [r13]
#define ADD_R8W_FROM_PTR_R14 add r8w, word ptr [r14]
#define ADD_R8W_FROM_PTR_R15 add r8w, word ptr [r15]
#define ADD_R8W_FROM_PTR_EAX add r8w, word ptr [eax]
#define ADD_R8W_FROM_PTR_EBX add r8w, word ptr [ebx]
#define ADD_R8W_FROM_PTR_ECX add r8w, word ptr [ecx]
#define ADD_R8W_FROM_PTR_EDX add r8w, word ptr [edx]
#define ADD_R8W_FROM_PTR_EDI add r8w, word ptr [edi]
#define ADD_R8W_FROM_PTR_ESI add r8w, word ptr [esi]
#define ADD_R8W_FROM_PTR_EBP add r8w, word ptr [ebp]
#define ADD_R8W_FROM_PTR_ESP add r8w, word ptr [esp]

#define ADD_R9W_FROM_PTR_RAX add r9w, word ptr [rax]
#define ADD_R9W_FROM_PTR_RBX add r9w, word ptr [rbx]
#define ADD_R9W_FROM_PTR_RCX add r9w, word ptr [rcx]
#define ADD_R9W_FROM_PTR_RDX add r9w, word ptr [rdx]
#define ADD_R9W_FROM_PTR_RDI add r9w, word ptr [rdi]
#define ADD_R9W_FROM_PTR_RSI add r9w, word ptr [rsi]
#define ADD_R9W_FROM_PTR_RBP add r9w, word ptr [rbp]
#define ADD_R9W_FROM_PTR_RSP add r9w, word ptr [rsp]
#define ADD_R9W_FROM_PTR_R8 add r9w, word ptr [r8]
#define ADD_R9W_FROM_PTR_R9 add r9w, word ptr [r9]
#define ADD_R9W_FROM_PTR_R10 add r9w, word ptr [r10]
#define ADD_R9W_FROM_PTR_R11 add r9w, word ptr [r11]
#define ADD_R9W_FROM_PTR_R12 add r9w, word ptr [r12]
#define ADD_R9W_FROM_PTR_R13 add r9w, word ptr [r13]
#define ADD_R9W_FROM_PTR_R14 add r9w, word ptr [r14]
#define ADD_R9W_FROM_PTR_R15 add r9w, word ptr [r15]
#define ADD_R9W_FROM_PTR_EAX add r9w, word ptr [eax]
#define ADD_R9W_FROM_PTR_EBX add r9w, word ptr [ebx]
#define ADD_R9W_FROM_PTR_ECX add r9w, word ptr [ecx]
#define ADD_R9W_FROM_PTR_EDX add r9w, word ptr [edx]
#define ADD_R9W_FROM_PTR_EDI add r9w, word ptr [edi]
#define ADD_R9W_FROM_PTR_ESI add r9w, word ptr [esi]
#define ADD_R9W_FROM_PTR_EBP add r9w, word ptr [ebp]
#define ADD_R9W_FROM_PTR_ESP add r9w, word ptr [esp]

#define ADD_R10W_FROM_PTR_RAX add r10w, word ptr [rax]
#define ADD_R10W_FROM_PTR_RBX add r10w, word ptr [rbx]
#define ADD_R10W_FROM_PTR_RCX add r10w, word ptr [rcx]
#define ADD_R10W_FROM_PTR_RDX add r10w, word ptr [rdx]
#define ADD_R10W_FROM_PTR_RDI add r10w, word ptr [rdi]
#define ADD_R10W_FROM_PTR_RSI add r10w, word ptr [rsi]
#define ADD_R10W_FROM_PTR_RBP add r10w, word ptr [rbp]
#define ADD_R10W_FROM_PTR_RSP add r10w, word ptr [rsp]
#define ADD_R10W_FROM_PTR_R8 add r10w, word ptr [r8]
#define ADD_R10W_FROM_PTR_R9 add r10w, word ptr [r9]
#define ADD_R10W_FROM_PTR_R10 add r10w, word ptr [r10]
#define ADD_R10W_FROM_PTR_R11 add r10w, word ptr [r11]
#define ADD_R10W_FROM_PTR_R12 add r10w, word ptr [r12]
#define ADD_R10W_FROM_PTR_R13 add r10w, word ptr [r13]
#define ADD_R10W_FROM_PTR_R14 add r10w, word ptr [r14]
#define ADD_R10W_FROM_PTR_R15 add r10w, word ptr [r15]
#define ADD_R10W_FROM_PTR_EAX add r10w, word ptr [eax]
#define ADD_R10W_FROM_PTR_EBX add r10w, word ptr [ebx]
#define ADD_R10W_FROM_PTR_ECX add r10w, word ptr [ecx]
#define ADD_R10W_FROM_PTR_EDX add r10w, word ptr [edx]
#define ADD_R10W_FROM_PTR_EDI add r10w, word ptr [edi]
#define ADD_R10W_FROM_PTR_ESI add r10w, word ptr [esi]
#define ADD_R10W_FROM_PTR_EBP add r10w, word ptr [ebp]
#define ADD_R10W_FROM_PTR_ESP add r10w, word ptr [esp]

#define ADD_R11W_FROM_PTR_RAX add r11w, word ptr [rax]
#define ADD_R11W_FROM_PTR_RBX add r11w, word ptr [rbx]
#define ADD_R11W_FROM_PTR_RCX add r11w, word ptr [rcx]
#define ADD_R11W_FROM_PTR_RDX add r11w, word ptr [rdx]
#define ADD_R11W_FROM_PTR_RDI add r11w, word ptr [rdi]
#define ADD_R11W_FROM_PTR_RSI add r11w, word ptr [rsi]
#define ADD_R11W_FROM_PTR_RBP add r11w, word ptr [rbp]
#define ADD_R11W_FROM_PTR_RSP add r11w, word ptr [rsp]
#define ADD_R11W_FROM_PTR_R8 add r11w, word ptr [r8]
#define ADD_R11W_FROM_PTR_R9 add r11w, word ptr [r9]
#define ADD_R11W_FROM_PTR_R10 add r11w, word ptr [r10]
#define ADD_R11W_FROM_PTR_R11 add r11w, word ptr [r11]
#define ADD_R11W_FROM_PTR_R12 add r11w, word ptr [r12]
#define ADD_R11W_FROM_PTR_R13 add r11w, word ptr [r13]
#define ADD_R11W_FROM_PTR_R14 add r11w, word ptr [r14]
#define ADD_R11W_FROM_PTR_R15 add r11w, word ptr [r15]
#define ADD_R11W_FROM_PTR_EAX add r11w, word ptr [eax]
#define ADD_R11W_FROM_PTR_EBX add r11w, word ptr [ebx]
#define ADD_R11W_FROM_PTR_ECX add r11w, word ptr [ecx]
#define ADD_R11W_FROM_PTR_EDX add r11w, word ptr [edx]
#define ADD_R11W_FROM_PTR_EDI add r11w, word ptr [edi]
#define ADD_R11W_FROM_PTR_ESI add r11w, word ptr [esi]
#define ADD_R11W_FROM_PTR_EBP add r11w, word ptr [ebp]
#define ADD_R11W_FROM_PTR_ESP add r11w, word ptr [esp]

#define ADD_R12W_FROM_PTR_RAX add r12w, word ptr [rax]
#define ADD_R12W_FROM_PTR_RBX add r12w, word ptr [rbx]
#define ADD_R12W_FROM_PTR_RCX add r12w, word ptr [rcx]
#define ADD_R12W_FROM_PTR_RDX add r12w, word ptr [rdx]
#define ADD_R12W_FROM_PTR_RDI add r12w, word ptr [rdi]
#define ADD_R12W_FROM_PTR_RSI add r12w, word ptr [rsi]
#define ADD_R12W_FROM_PTR_RBP add r12w, word ptr [rbp]
#define ADD_R12W_FROM_PTR_RSP add r12w, word ptr [rsp]
#define ADD_R12W_FROM_PTR_R8 add r12w, word ptr [r8]
#define ADD_R12W_FROM_PTR_R9 add r12w, word ptr [r9]
#define ADD_R12W_FROM_PTR_R10 add r12w, word ptr [r10]
#define ADD_R12W_FROM_PTR_R11 add r12w, word ptr [r11]
#define ADD_R12W_FROM_PTR_R12 add r12w, word ptr [r12]
#define ADD_R12W_FROM_PTR_R13 add r12w, word ptr [r13]
#define ADD_R12W_FROM_PTR_R14 add r12w, word ptr [r14]
#define ADD_R12W_FROM_PTR_R15 add r12w, word ptr [r15]
#define ADD_R12W_FROM_PTR_EAX add r12w, word ptr [eax]
#define ADD_R12W_FROM_PTR_EBX add r12w, word ptr [ebx]
#define ADD_R12W_FROM_PTR_ECX add r12w, word ptr [ecx]
#define ADD_R12W_FROM_PTR_EDX add r12w, word ptr [edx]
#define ADD_R12W_FROM_PTR_EDI add r12w, word ptr [edi]
#define ADD_R12W_FROM_PTR_ESI add r12w, word ptr [esi]
#define ADD_R12W_FROM_PTR_EBP add r12w, word ptr [ebp]
#define ADD_R12W_FROM_PTR_ESP add r12w, word ptr [esp]

#define ADD_R13W_FROM_PTR_RAX add r13w, word ptr [rax]
#define ADD_R13W_FROM_PTR_RBX add r13w, word ptr [rbx]
#define ADD_R13W_FROM_PTR_RCX add r13w, word ptr [rcx]
#define ADD_R13W_FROM_PTR_RDX add r13w, word ptr [rdx]
#define ADD_R13W_FROM_PTR_RDI add r13w, word ptr [rdi]
#define ADD_R13W_FROM_PTR_RSI add r13w, word ptr [rsi]
#define ADD_R13W_FROM_PTR_RBP add r13w, word ptr [rbp]
#define ADD_R13W_FROM_PTR_RSP add r13w, word ptr [rsp]
#define ADD_R13W_FROM_PTR_R8 add r13w, word ptr [r8]
#define ADD_R13W_FROM_PTR_R9 add r13w, word ptr [r9]
#define ADD_R13W_FROM_PTR_R10 add r13w, word ptr [r10]
#define ADD_R13W_FROM_PTR_R11 add r13w, word ptr [r11]
#define ADD_R13W_FROM_PTR_R12 add r13w, word ptr [r12]
#define ADD_R13W_FROM_PTR_R13 add r13w, word ptr [r13]
#define ADD_R13W_FROM_PTR_R14 add r13w, word ptr [r14]
#define ADD_R13W_FROM_PTR_R15 add r13w, word ptr [r15]
#define ADD_R13W_FROM_PTR_EAX add r13w, word ptr [eax]
#define ADD_R13W_FROM_PTR_EBX add r13w, word ptr [ebx]
#define ADD_R13W_FROM_PTR_ECX add r13w, word ptr [ecx]
#define ADD_R13W_FROM_PTR_EDX add r13w, word ptr [edx]
#define ADD_R13W_FROM_PTR_EDI add r13w, word ptr [edi]
#define ADD_R13W_FROM_PTR_ESI add r13w, word ptr [esi]
#define ADD_R13W_FROM_PTR_EBP add r13w, word ptr [ebp]
#define ADD_R13W_FROM_PTR_ESP add r13w, word ptr [esp]

#define ADD_R14W_FROM_PTR_RAX add r14w, word ptr [rax]
#define ADD_R14W_FROM_PTR_RBX add r14w, word ptr [rbx]
#define ADD_R14W_FROM_PTR_RCX add r14w, word ptr [rcx]
#define ADD_R14W_FROM_PTR_RDX add r14w, word ptr [rdx]
#define ADD_R14W_FROM_PTR_RDI add r14w, word ptr [rdi]
#define ADD_R14W_FROM_PTR_RSI add r14w, word ptr [rsi]
#define ADD_R14W_FROM_PTR_RBP add r14w, word ptr [rbp]
#define ADD_R14W_FROM_PTR_RSP add r14w, word ptr [rsp]
#define ADD_R14W_FROM_PTR_R8 add r14w, word ptr [r8]
#define ADD_R14W_FROM_PTR_R9 add r14w, word ptr [r9]
#define ADD_R14W_FROM_PTR_R10 add r14w, word ptr [r10]
#define ADD_R14W_FROM_PTR_R11 add r14w, word ptr [r11]
#define ADD_R14W_FROM_PTR_R12 add r14w, word ptr [r12]
#define ADD_R14W_FROM_PTR_R13 add r14w, word ptr [r13]
#define ADD_R14W_FROM_PTR_R14 add r14w, word ptr [r14]
#define ADD_R14W_FROM_PTR_R15 add r14w, word ptr [r15]
#define ADD_R14W_FROM_PTR_EAX add r14w, word ptr [eax]
#define ADD_R14W_FROM_PTR_EBX add r14w, word ptr [ebx]
#define ADD_R14W_FROM_PTR_ECX add r14w, word ptr [ecx]
#define ADD_R14W_FROM_PTR_EDX add r14w, word ptr [edx]
#define ADD_R14W_FROM_PTR_EDI add r14w, word ptr [edi]
#define ADD_R14W_FROM_PTR_ESI add r14w, word ptr [esi]
#define ADD_R14W_FROM_PTR_EBP add r14w, word ptr [ebp]
#define ADD_R14W_FROM_PTR_ESP add r14w, word ptr [esp]

#define ADD_R15W_FROM_PTR_RAX add r15w, word ptr [rax]
#define ADD_R15W_FROM_PTR_RBX add r15w, word ptr [rbx]
#define ADD_R15W_FROM_PTR_RCX add r15w, word ptr [rcx]
#define ADD_R15W_FROM_PTR_RDX add r15w, word ptr [rdx]
#define ADD_R15W_FROM_PTR_RDI add r15w, word ptr [rdi]
#define ADD_R15W_FROM_PTR_RSI add r15w, word ptr [rsi]
#define ADD_R15W_FROM_PTR_RBP add r15w, word ptr [rbp]
#define ADD_R15W_FROM_PTR_RSP add r15w, word ptr [rsp]
#define ADD_R15W_FROM_PTR_R8 add r15w, word ptr [r8]
#define ADD_R15W_FROM_PTR_R9 add r15w, word ptr [r9]
#define ADD_R15W_FROM_PTR_R10 add r15w, word ptr [r10]
#define ADD_R15W_FROM_PTR_R11 add r15w, word ptr [r11]
#define ADD_R15W_FROM_PTR_R12 add r15w, word ptr [r12]
#define ADD_R15W_FROM_PTR_R13 add r15w, word ptr [r13]
#define ADD_R15W_FROM_PTR_R14 add r15w, word ptr [r14]
#define ADD_R15W_FROM_PTR_R15 add r15w, word ptr [r15]
#define ADD_R15W_FROM_PTR_EAX add r15w, word ptr [eax]
#define ADD_R15W_FROM_PTR_EBX add r15w, word ptr [ebx]
#define ADD_R15W_FROM_PTR_ECX add r15w, word ptr [ecx]
#define ADD_R15W_FROM_PTR_EDX add r15w, word ptr [edx]
#define ADD_R15W_FROM_PTR_EDI add r15w, word ptr [edi]
#define ADD_R15W_FROM_PTR_ESI add r15w, word ptr [esi]
#define ADD_R15W_FROM_PTR_EBP add r15w, word ptr [ebp]
#define ADD_R15W_FROM_PTR_ESP add r15w, word ptr [esp]

#define ADD_AX_TO_PTR_RAX add word ptr [rax], ax
#define ADD_AX_TO_PTR_RBX add word ptr [rbx], ax
#define ADD_AX_TO_PTR_RCX add word ptr [rcx], ax
#define ADD_AX_TO_PTR_RDX add word ptr [rdx], ax
#define ADD_AX_TO_PTR_RDI add word ptr [rdi], ax
#define ADD_AX_TO_PTR_RSI add word ptr [rsi], ax
#define ADD_AX_TO_PTR_RBP add word ptr [rbp], ax
#define ADD_AX_TO_PTR_RSP add word ptr [rsp], ax
#define ADD_AX_TO_PTR_R8 add word ptr [r8], ax
#define ADD_AX_TO_PTR_R9 add word ptr [r9], ax
#define ADD_AX_TO_PTR_R10 add word ptr [r10], ax
#define ADD_AX_TO_PTR_R11 add word ptr [r11], ax
#define ADD_AX_TO_PTR_R12 add word ptr [r12], ax
#define ADD_AX_TO_PTR_R13 add word ptr [r13], ax
#define ADD_AX_TO_PTR_R14 add word ptr [r14], ax
#define ADD_AX_TO_PTR_R15 add word ptr [r15], ax
#define ADD_AX_TO_PTR_EAX add word ptr [eax], ax
#define ADD_AX_TO_PTR_EBX add word ptr [ebx], ax
#define ADD_AX_TO_PTR_ECX add word ptr [ecx], ax
#define ADD_AX_TO_PTR_EDX add word ptr [edx], ax
#define ADD_AX_TO_PTR_EDI add word ptr [edi], ax
#define ADD_AX_TO_PTR_ESI add word ptr [esi], ax
#define ADD_AX_TO_PTR_EBP add word ptr [ebp], ax
#define ADD_AX_TO_PTR_ESP add word ptr [esp], ax

#define ADD_BX_TO_PTR_RAX add word ptr [rax], bx
#define ADD_BX_TO_PTR_RBX add word ptr [rbx], bx
#define ADD_BX_TO_PTR_RCX add word ptr [rcx], bx
#define ADD_BX_TO_PTR_RDX add word ptr [rdx], bx
#define ADD_BX_TO_PTR_RDI add word ptr [rdi], bx
#define ADD_BX_TO_PTR_RSI add word ptr [rsi], bx
#define ADD_BX_TO_PTR_RBP add word ptr [rbp], bx
#define ADD_BX_TO_PTR_RSP add word ptr [rsp], bx
#define ADD_BX_TO_PTR_R8 add word ptr [r8], bx
#define ADD_BX_TO_PTR_R9 add word ptr [r9], bx
#define ADD_BX_TO_PTR_R10 add word ptr [r10], bx
#define ADD_BX_TO_PTR_R11 add word ptr [r11], bx
#define ADD_BX_TO_PTR_R12 add word ptr [r12], bx
#define ADD_BX_TO_PTR_R13 add word ptr [r13], bx
#define ADD_BX_TO_PTR_R14 add word ptr [r14], bx
#define ADD_BX_TO_PTR_R15 add word ptr [r15], bx
#define ADD_BX_TO_PTR_EAX add word ptr [eax], bx
#define ADD_BX_TO_PTR_EBX add word ptr [ebx], bx
#define ADD_BX_TO_PTR_ECX add word ptr [ecx], bx
#define ADD_BX_TO_PTR_EDX add word ptr [edx], bx
#define ADD_BX_TO_PTR_EDI add word ptr [edi], bx
#define ADD_BX_TO_PTR_ESI add word ptr [esi], bx
#define ADD_BX_TO_PTR_EBP add word ptr [ebp], bx
#define ADD_BX_TO_PTR_ESP add word ptr [esp], bx

#define ADD_CX_TO_PTR_RAX add word ptr [rax], cx
#define ADD_CX_TO_PTR_RBX add word ptr [rbx], cx
#define ADD_CX_TO_PTR_RCX add word ptr [rcx], cx
#define ADD_CX_TO_PTR_RDX add word ptr [rdx], cx
#define ADD_CX_TO_PTR_RDI add word ptr [rdi], cx
#define ADD_CX_TO_PTR_RSI add word ptr [rsi], cx
#define ADD_CX_TO_PTR_RBP add word ptr [rbp], cx
#define ADD_CX_TO_PTR_RSP add word ptr [rsp], cx
#define ADD_CX_TO_PTR_R8 add word ptr [r8], cx
#define ADD_CX_TO_PTR_R9 add word ptr [r9], cx
#define ADD_CX_TO_PTR_R10 add word ptr [r10], cx
#define ADD_CX_TO_PTR_R11 add word ptr [r11], cx
#define ADD_CX_TO_PTR_R12 add word ptr [r12], cx
#define ADD_CX_TO_PTR_R13 add word ptr [r13], cx
#define ADD_CX_TO_PTR_R14 add word ptr [r14], cx
#define ADD_CX_TO_PTR_R15 add word ptr [r15], cx
#define ADD_CX_TO_PTR_EAX add word ptr [eax], cx
#define ADD_CX_TO_PTR_EBX add word ptr [ebx], cx
#define ADD_CX_TO_PTR_ECX add word ptr [ecx], cx
#define ADD_CX_TO_PTR_EDX add word ptr [edx], cx
#define ADD_CX_TO_PTR_EDI add word ptr [edi], cx
#define ADD_CX_TO_PTR_ESI add word ptr [esi], cx
#define ADD_CX_TO_PTR_EBP add word ptr [ebp], cx
#define ADD_CX_TO_PTR_ESP add word ptr [esp], cx

#define ADD_DX_TO_PTR_RAX add word ptr [rax], dx
#define ADD_DX_TO_PTR_RBX add word ptr [rbx], dx
#define ADD_DX_TO_PTR_RCX add word ptr [rcx], dx
#define ADD_DX_TO_PTR_RDX add word ptr [rdx], dx
#define ADD_DX_TO_PTR_RDI add word ptr [rdi], dx
#define ADD_DX_TO_PTR_RSI add word ptr [rsi], dx
#define ADD_DX_TO_PTR_RBP add word ptr [rbp], dx
#define ADD_DX_TO_PTR_RSP add word ptr [rsp], dx
#define ADD_DX_TO_PTR_R8 add word ptr [r8], dx
#define ADD_DX_TO_PTR_R9 add word ptr [r9], dx
#define ADD_DX_TO_PTR_R10 add word ptr [r10], dx
#define ADD_DX_TO_PTR_R11 add word ptr [r11], dx
#define ADD_DX_TO_PTR_R12 add word ptr [r12], dx
#define ADD_DX_TO_PTR_R13 add word ptr [r13], dx
#define ADD_DX_TO_PTR_R14 add word ptr [r14], dx
#define ADD_DX_TO_PTR_R15 add word ptr [r15], dx
#define ADD_DX_TO_PTR_EAX add word ptr [eax], dx
#define ADD_DX_TO_PTR_EBX add word ptr [ebx], dx
#define ADD_DX_TO_PTR_ECX add word ptr [ecx], dx
#define ADD_DX_TO_PTR_EDX add word ptr [edx], dx
#define ADD_DX_TO_PTR_EDI add word ptr [edi], dx
#define ADD_DX_TO_PTR_ESI add word ptr [esi], dx
#define ADD_DX_TO_PTR_EBP add word ptr [ebp], dx
#define ADD_DX_TO_PTR_ESP add word ptr [esp], dx

#define ADD_DI_TO_PTR_RAX add word ptr [rax], di
#define ADD_DI_TO_PTR_RBX add word ptr [rbx], di
#define ADD_DI_TO_PTR_RCX add word ptr [rcx], di
#define ADD_DI_TO_PTR_RDX add word ptr [rdx], di
#define ADD_DI_TO_PTR_RDI add word ptr [rdi], di
#define ADD_DI_TO_PTR_RSI add word ptr [rsi], di
#define ADD_DI_TO_PTR_RBP add word ptr [rbp], di
#define ADD_DI_TO_PTR_RSP add word ptr [rsp], di
#define ADD_DI_TO_PTR_R8 add word ptr [r8], di
#define ADD_DI_TO_PTR_R9 add word ptr [r9], di
#define ADD_DI_TO_PTR_R10 add word ptr [r10], di
#define ADD_DI_TO_PTR_R11 add word ptr [r11], di
#define ADD_DI_TO_PTR_R12 add word ptr [r12], di
#define ADD_DI_TO_PTR_R13 add word ptr [r13], di
#define ADD_DI_TO_PTR_R14 add word ptr [r14], di
#define ADD_DI_TO_PTR_R15 add word ptr [r15], di
#define ADD_DI_TO_PTR_EAX add word ptr [eax], di
#define ADD_DI_TO_PTR_EBX add word ptr [ebx], di
#define ADD_DI_TO_PTR_ECX add word ptr [ecx], di
#define ADD_DI_TO_PTR_EDX add word ptr [edx], di
#define ADD_DI_TO_PTR_EDI add word ptr [edi], di
#define ADD_DI_TO_PTR_ESI add word ptr [esi], di
#define ADD_DI_TO_PTR_EBP add word ptr [ebp], di
#define ADD_DI_TO_PTR_ESP add word ptr [esp], di

#define ADD_SI_TO_PTR_RAX add word ptr [rax], si
#define ADD_SI_TO_PTR_RBX add word ptr [rbx], si
#define ADD_SI_TO_PTR_RCX add word ptr [rcx], si
#define ADD_SI_TO_PTR_RDX add word ptr [rdx], si
#define ADD_SI_TO_PTR_RDI add word ptr [rdi], si
#define ADD_SI_TO_PTR_RSI add word ptr [rsi], si
#define ADD_SI_TO_PTR_RBP add word ptr [rbp], si
#define ADD_SI_TO_PTR_RSP add word ptr [rsp], si
#define ADD_SI_TO_PTR_R8 add word ptr [r8], si
#define ADD_SI_TO_PTR_R9 add word ptr [r9], si
#define ADD_SI_TO_PTR_R10 add word ptr [r10], si
#define ADD_SI_TO_PTR_R11 add word ptr [r11], si
#define ADD_SI_TO_PTR_R12 add word ptr [r12], si
#define ADD_SI_TO_PTR_R13 add word ptr [r13], si
#define ADD_SI_TO_PTR_R14 add word ptr [r14], si
#define ADD_SI_TO_PTR_R15 add word ptr [r15], si
#define ADD_SI_TO_PTR_EAX add word ptr [eax], si
#define ADD_SI_TO_PTR_EBX add word ptr [ebx], si
#define ADD_SI_TO_PTR_ECX add word ptr [ecx], si
#define ADD_SI_TO_PTR_EDX add word ptr [edx], si
#define ADD_SI_TO_PTR_EDI add word ptr [edi], si
#define ADD_SI_TO_PTR_ESI add word ptr [esi], si
#define ADD_SI_TO_PTR_EBP add word ptr [ebp], si
#define ADD_SI_TO_PTR_ESP add word ptr [esp], si

#define ADD_BP_TO_PTR_RAX add word ptr [rax], bp
#define ADD_BP_TO_PTR_RBX add word ptr [rbx], bp
#define ADD_BP_TO_PTR_RCX add word ptr [rcx], bp
#define ADD_BP_TO_PTR_RDX add word ptr [rdx], bp
#define ADD_BP_TO_PTR_RDI add word ptr [rdi], bp
#define ADD_BP_TO_PTR_RSI add word ptr [rsi], bp
#define ADD_BP_TO_PTR_RBP add word ptr [rbp], bp
#define ADD_BP_TO_PTR_RSP add word ptr [rsp], bp
#define ADD_BP_TO_PTR_R8 add word ptr [r8], bp
#define ADD_BP_TO_PTR_R9 add word ptr [r9], bp
#define ADD_BP_TO_PTR_R10 add word ptr [r10], bp
#define ADD_BP_TO_PTR_R11 add word ptr [r11], bp
#define ADD_BP_TO_PTR_R12 add word ptr [r12], bp
#define ADD_BP_TO_PTR_R13 add word ptr [r13], bp
#define ADD_BP_TO_PTR_R14 add word ptr [r14], bp
#define ADD_BP_TO_PTR_R15 add word ptr [r15], bp
#define ADD_BP_TO_PTR_EAX add word ptr [eax], bp
#define ADD_BP_TO_PTR_EBX add word ptr [ebx], bp
#define ADD_BP_TO_PTR_ECX add word ptr [ecx], bp
#define ADD_BP_TO_PTR_EDX add word ptr [edx], bp
#define ADD_BP_TO_PTR_EDI add word ptr [edi], bp
#define ADD_BP_TO_PTR_ESI add word ptr [esi], bp
#define ADD_BP_TO_PTR_EBP add word ptr [ebp], bp
#define ADD_BP_TO_PTR_ESP add word ptr [esp], bp

#define ADD_SP_TO_PTR_RAX add word ptr [rax], sp
#define ADD_SP_TO_PTR_RBX add word ptr [rbx], sp
#define ADD_SP_TO_PTR_RCX add word ptr [rcx], sp
#define ADD_SP_TO_PTR_RDX add word ptr [rdx], sp
#define ADD_SP_TO_PTR_RDI add word ptr [rdi], sp
#define ADD_SP_TO_PTR_RSI add word ptr [rsi], sp
#define ADD_SP_TO_PTR_RBP add word ptr [rbp], sp
#define ADD_SP_TO_PTR_RSP add word ptr [rsp], sp
#define ADD_SP_TO_PTR_R8 add word ptr [r8], sp
#define ADD_SP_TO_PTR_R9 add word ptr [r9], sp
#define ADD_SP_TO_PTR_R10 add word ptr [r10], sp
#define ADD_SP_TO_PTR_R11 add word ptr [r11], sp
#define ADD_SP_TO_PTR_R12 add word ptr [r12], sp
#define ADD_SP_TO_PTR_R13 add word ptr [r13], sp
#define ADD_SP_TO_PTR_R14 add word ptr [r14], sp
#define ADD_SP_TO_PTR_R15 add word ptr [r15], sp
#define ADD_SP_TO_PTR_EAX add word ptr [eax], sp
#define ADD_SP_TO_PTR_EBX add word ptr [ebx], sp
#define ADD_SP_TO_PTR_ECX add word ptr [ecx], sp
#define ADD_SP_TO_PTR_EDX add word ptr [edx], sp
#define ADD_SP_TO_PTR_EDI add word ptr [edi], sp
#define ADD_SP_TO_PTR_ESI add word ptr [esi], sp
#define ADD_SP_TO_PTR_EBP add word ptr [ebp], sp
#define ADD_SP_TO_PTR_ESP add word ptr [esp], sp

#define ADD_R8W_TO_PTR_RAX add word ptr [rax], r8w
#define ADD_R8W_TO_PTR_RBX add word ptr [rbx], r8w
#define ADD_R8W_TO_PTR_RCX add word ptr [rcx], r8w
#define ADD_R8W_TO_PTR_RDX add word ptr [rdx], r8w
#define ADD_R8W_TO_PTR_RDI add word ptr [rdi], r8w
#define ADD_R8W_TO_PTR_RSI add word ptr [rsi], r8w
#define ADD_R8W_TO_PTR_RBP add word ptr [rbp], r8w
#define ADD_R8W_TO_PTR_RSP add word ptr [rsp], r8w
#define ADD_R8W_TO_PTR_R8 add word ptr [r8], r8w
#define ADD_R8W_TO_PTR_R9 add word ptr [r9], r8w
#define ADD_R8W_TO_PTR_R10 add word ptr [r10], r8w
#define ADD_R8W_TO_PTR_R11 add word ptr [r11], r8w
#define ADD_R8W_TO_PTR_R12 add word ptr [r12], r8w
#define ADD_R8W_TO_PTR_R13 add word ptr [r13], r8w
#define ADD_R8W_TO_PTR_R14 add word ptr [r14], r8w
#define ADD_R8W_TO_PTR_R15 add word ptr [r15], r8w
#define ADD_R8W_TO_PTR_EAX add word ptr [eax], r8w
#define ADD_R8W_TO_PTR_EBX add word ptr [ebx], r8w
#define ADD_R8W_TO_PTR_ECX add word ptr [ecx], r8w
#define ADD_R8W_TO_PTR_EDX add word ptr [edx], r8w
#define ADD_R8W_TO_PTR_EDI add word ptr [edi], r8w
#define ADD_R8W_TO_PTR_ESI add word ptr [esi], r8w
#define ADD_R8W_TO_PTR_EBP add word ptr [ebp], r8w
#define ADD_R8W_TO_PTR_ESP add word ptr [esp], r8w

#define ADD_R9W_TO_PTR_RAX add word ptr [rax], r9w
#define ADD_R9W_TO_PTR_RBX add word ptr [rbx], r9w
#define ADD_R9W_TO_PTR_RCX add word ptr [rcx], r9w
#define ADD_R9W_TO_PTR_RDX add word ptr [rdx], r9w
#define ADD_R9W_TO_PTR_RDI add word ptr [rdi], r9w
#define ADD_R9W_TO_PTR_RSI add word ptr [rsi], r9w
#define ADD_R9W_TO_PTR_RBP add word ptr [rbp], r9w
#define ADD_R9W_TO_PTR_RSP add word ptr [rsp], r9w
#define ADD_R9W_TO_PTR_R8 add word ptr [r8], r9w
#define ADD_R9W_TO_PTR_R9 add word ptr [r9], r9w
#define ADD_R9W_TO_PTR_R10 add word ptr [r10], r9w
#define ADD_R9W_TO_PTR_R11 add word ptr [r11], r9w
#define ADD_R9W_TO_PTR_R12 add word ptr [r12], r9w
#define ADD_R9W_TO_PTR_R13 add word ptr [r13], r9w
#define ADD_R9W_TO_PTR_R14 add word ptr [r14], r9w
#define ADD_R9W_TO_PTR_R15 add word ptr [r15], r9w
#define ADD_R9W_TO_PTR_EAX add word ptr [eax], r9w
#define ADD_R9W_TO_PTR_EBX add word ptr [ebx], r9w
#define ADD_R9W_TO_PTR_ECX add word ptr [ecx], r9w
#define ADD_R9W_TO_PTR_EDX add word ptr [edx], r9w
#define ADD_R9W_TO_PTR_EDI add word ptr [edi], r9w
#define ADD_R9W_TO_PTR_ESI add word ptr [esi], r9w
#define ADD_R9W_TO_PTR_EBP add word ptr [ebp], r9w
#define ADD_R9W_TO_PTR_ESP add word ptr [esp], r9w

#define ADD_R10W_TO_PTR_RAX add word ptr [rax], r10w
#define ADD_R10W_TO_PTR_RBX add word ptr [rbx], r10w
#define ADD_R10W_TO_PTR_RCX add word ptr [rcx], r10w
#define ADD_R10W_TO_PTR_RDX add word ptr [rdx], r10w
#define ADD_R10W_TO_PTR_RDI add word ptr [rdi], r10w
#define ADD_R10W_TO_PTR_RSI add word ptr [rsi], r10w
#define ADD_R10W_TO_PTR_RBP add word ptr [rbp], r10w
#define ADD_R10W_TO_PTR_RSP add word ptr [rsp], r10w
#define ADD_R10W_TO_PTR_R8 add word ptr [r8], r10w
#define ADD_R10W_TO_PTR_R9 add word ptr [r9], r10w
#define ADD_R10W_TO_PTR_R10 add word ptr [r10], r10w
#define ADD_R10W_TO_PTR_R11 add word ptr [r11], r10w
#define ADD_R10W_TO_PTR_R12 add word ptr [r12], r10w
#define ADD_R10W_TO_PTR_R13 add word ptr [r13], r10w
#define ADD_R10W_TO_PTR_R14 add word ptr [r14], r10w
#define ADD_R10W_TO_PTR_R15 add word ptr [r15], r10w
#define ADD_R10W_TO_PTR_EAX add word ptr [eax], r10w
#define ADD_R10W_TO_PTR_EBX add word ptr [ebx], r10w
#define ADD_R10W_TO_PTR_ECX add word ptr [ecx], r10w
#define ADD_R10W_TO_PTR_EDX add word ptr [edx], r10w
#define ADD_R10W_TO_PTR_EDI add word ptr [edi], r10w
#define ADD_R10W_TO_PTR_ESI add word ptr [esi], r10w
#define ADD_R10W_TO_PTR_EBP add word ptr [ebp], r10w
#define ADD_R10W_TO_PTR_ESP add word ptr [esp], r10w

#define ADD_R11W_TO_PTR_RAX add word ptr [rax], r11w
#define ADD_R11W_TO_PTR_RBX add word ptr [rbx], r11w
#define ADD_R11W_TO_PTR_RCX add word ptr [rcx], r11w
#define ADD_R11W_TO_PTR_RDX add word ptr [rdx], r11w
#define ADD_R11W_TO_PTR_RDI add word ptr [rdi], r11w
#define ADD_R11W_TO_PTR_RSI add word ptr [rsi], r11w
#define ADD_R11W_TO_PTR_RBP add word ptr [rbp], r11w
#define ADD_R11W_TO_PTR_RSP add word ptr [rsp], r11w
#define ADD_R11W_TO_PTR_R8 add word ptr [r8], r11w
#define ADD_R11W_TO_PTR_R9 add word ptr [r9], r11w
#define ADD_R11W_TO_PTR_R10 add word ptr [r10], r11w
#define ADD_R11W_TO_PTR_R11 add word ptr [r11], r11w
#define ADD_R11W_TO_PTR_R12 add word ptr [r12], r11w
#define ADD_R11W_TO_PTR_R13 add word ptr [r13], r11w
#define ADD_R11W_TO_PTR_R14 add word ptr [r14], r11w
#define ADD_R11W_TO_PTR_R15 add word ptr [r15], r11w
#define ADD_R11W_TO_PTR_EAX add word ptr [eax], r11w
#define ADD_R11W_TO_PTR_EBX add word ptr [ebx], r11w
#define ADD_R11W_TO_PTR_ECX add word ptr [ecx], r11w
#define ADD_R11W_TO_PTR_EDX add word ptr [edx], r11w
#define ADD_R11W_TO_PTR_EDI add word ptr [edi], r11w
#define ADD_R11W_TO_PTR_ESI add word ptr [esi], r11w
#define ADD_R11W_TO_PTR_EBP add word ptr [ebp], r11w
#define ADD_R11W_TO_PTR_ESP add word ptr [esp], r11w

#define ADD_R12W_TO_PTR_RAX add word ptr [rax], r12w
#define ADD_R12W_TO_PTR_RBX add word ptr [rbx], r12w
#define ADD_R12W_TO_PTR_RCX add word ptr [rcx], r12w
#define ADD_R12W_TO_PTR_RDX add word ptr [rdx], r12w
#define ADD_R12W_TO_PTR_RDI add word ptr [rdi], r12w
#define ADD_R12W_TO_PTR_RSI add word ptr [rsi], r12w
#define ADD_R12W_TO_PTR_RBP add word ptr [rbp], r12w
#define ADD_R12W_TO_PTR_RSP add word ptr [rsp], r12w
#define ADD_R12W_TO_PTR_R8 add word ptr [r8], r12w
#define ADD_R12W_TO_PTR_R9 add word ptr [r9], r12w
#define ADD_R12W_TO_PTR_R10 add word ptr [r10], r12w
#define ADD_R12W_TO_PTR_R11 add word ptr [r11], r12w
#define ADD_R12W_TO_PTR_R12 add word ptr [r12], r12w
#define ADD_R12W_TO_PTR_R13 add word ptr [r13], r12w
#define ADD_R12W_TO_PTR_R14 add word ptr [r14], r12w
#define ADD_R12W_TO_PTR_R15 add word ptr [r15], r12w
#define ADD_R12W_TO_PTR_EAX add word ptr [eax], r12w
#define ADD_R12W_TO_PTR_EBX add word ptr [ebx], r12w
#define ADD_R12W_TO_PTR_ECX add word ptr [ecx], r12w
#define ADD_R12W_TO_PTR_EDX add word ptr [edx], r12w
#define ADD_R12W_TO_PTR_EDI add word ptr [edi], r12w
#define ADD_R12W_TO_PTR_ESI add word ptr [esi], r12w
#define ADD_R12W_TO_PTR_EBP add word ptr [ebp], r12w
#define ADD_R12W_TO_PTR_ESP add word ptr [esp], r12w

#define ADD_R13W_TO_PTR_RAX add word ptr [rax], r13w
#define ADD_R13W_TO_PTR_RBX add word ptr [rbx], r13w
#define ADD_R13W_TO_PTR_RCX add word ptr [rcx], r13w
#define ADD_R13W_TO_PTR_RDX add word ptr [rdx], r13w
#define ADD_R13W_TO_PTR_RDI add word ptr [rdi], r13w
#define ADD_R13W_TO_PTR_RSI add word ptr [rsi], r13w
#define ADD_R13W_TO_PTR_RBP add word ptr [rbp], r13w
#define ADD_R13W_TO_PTR_RSP add word ptr [rsp], r13w
#define ADD_R13W_TO_PTR_R8 add word ptr [r8], r13w
#define ADD_R13W_TO_PTR_R9 add word ptr [r9], r13w
#define ADD_R13W_TO_PTR_R10 add word ptr [r10], r13w
#define ADD_R13W_TO_PTR_R11 add word ptr [r11], r13w
#define ADD_R13W_TO_PTR_R12 add word ptr [r12], r13w
#define ADD_R13W_TO_PTR_R13 add word ptr [r13], r13w
#define ADD_R13W_TO_PTR_R14 add word ptr [r14], r13w
#define ADD_R13W_TO_PTR_R15 add word ptr [r15], r13w
#define ADD_R13W_TO_PTR_EAX add word ptr [eax], r13w
#define ADD_R13W_TO_PTR_EBX add word ptr [ebx], r13w
#define ADD_R13W_TO_PTR_ECX add word ptr [ecx], r13w
#define ADD_R13W_TO_PTR_EDX add word ptr [edx], r13w
#define ADD_R13W_TO_PTR_EDI add word ptr [edi], r13w
#define ADD_R13W_TO_PTR_ESI add word ptr [esi], r13w
#define ADD_R13W_TO_PTR_EBP add word ptr [ebp], r13w
#define ADD_R13W_TO_PTR_ESP add word ptr [esp], r13w

#define ADD_R14W_TO_PTR_RAX add word ptr [rax], r14w
#define ADD_R14W_TO_PTR_RBX add word ptr [rbx], r14w
#define ADD_R14W_TO_PTR_RCX add word ptr [rcx], r14w
#define ADD_R14W_TO_PTR_RDX add word ptr [rdx], r14w
#define ADD_R14W_TO_PTR_RDI add word ptr [rdi], r14w
#define ADD_R14W_TO_PTR_RSI add word ptr [rsi], r14w
#define ADD_R14W_TO_PTR_RBP add word ptr [rbp], r14w
#define ADD_R14W_TO_PTR_RSP add word ptr [rsp], r14w
#define ADD_R14W_TO_PTR_R8 add word ptr [r8], r14w
#define ADD_R14W_TO_PTR_R9 add word ptr [r9], r14w
#define ADD_R14W_TO_PTR_R10 add word ptr [r10], r14w
#define ADD_R14W_TO_PTR_R11 add word ptr [r11], r14w
#define ADD_R14W_TO_PTR_R12 add word ptr [r12], r14w
#define ADD_R14W_TO_PTR_R13 add word ptr [r13], r14w
#define ADD_R14W_TO_PTR_R14 add word ptr [r14], r14w
#define ADD_R14W_TO_PTR_R15 add word ptr [r15], r14w
#define ADD_R14W_TO_PTR_EAX add word ptr [eax], r14w
#define ADD_R14W_TO_PTR_EBX add word ptr [ebx], r14w
#define ADD_R14W_TO_PTR_ECX add word ptr [ecx], r14w
#define ADD_R14W_TO_PTR_EDX add word ptr [edx], r14w
#define ADD_R14W_TO_PTR_EDI add word ptr [edi], r14w
#define ADD_R14W_TO_PTR_ESI add word ptr [esi], r14w
#define ADD_R14W_TO_PTR_EBP add word ptr [ebp], r14w
#define ADD_R14W_TO_PTR_ESP add word ptr [esp], r14w

#define ADD_R15W_TO_PTR_RAX add word ptr [rax], r15w
#define ADD_R15W_TO_PTR_RBX add word ptr [rbx], r15w
#define ADD_R15W_TO_PTR_RCX add word ptr [rcx], r15w
#define ADD_R15W_TO_PTR_RDX add word ptr [rdx], r15w
#define ADD_R15W_TO_PTR_RDI add word ptr [rdi], r15w
#define ADD_R15W_TO_PTR_RSI add word ptr [rsi], r15w
#define ADD_R15W_TO_PTR_RBP add word ptr [rbp], r15w
#define ADD_R15W_TO_PTR_RSP add word ptr [rsp], r15w
#define ADD_R15W_TO_PTR_R8 add word ptr [r8], r15w
#define ADD_R15W_TO_PTR_R9 add word ptr [r9], r15w
#define ADD_R15W_TO_PTR_R10 add word ptr [r10], r15w
#define ADD_R15W_TO_PTR_R11 add word ptr [r11], r15w
#define ADD_R15W_TO_PTR_R12 add word ptr [r12], r15w
#define ADD_R15W_TO_PTR_R13 add word ptr [r13], r15w
#define ADD_R15W_TO_PTR_R14 add word ptr [r14], r15w
#define ADD_R15W_TO_PTR_R15 add word ptr [r15], r15w
#define ADD_R15W_TO_PTR_EAX add word ptr [eax], r15w
#define ADD_R15W_TO_PTR_EBX add word ptr [ebx], r15w
#define ADD_R15W_TO_PTR_ECX add word ptr [ecx], r15w
#define ADD_R15W_TO_PTR_EDX add word ptr [edx], r15w
#define ADD_R15W_TO_PTR_EDI add word ptr [edi], r15w
#define ADD_R15W_TO_PTR_ESI add word ptr [esi], r15w
#define ADD_R15W_TO_PTR_EBP add word ptr [ebp], r15w
#define ADD_R15W_TO_PTR_ESP add word ptr [esp], r15w

#define ADD_AX_FROM_PTR_RAX_(VALUE) add ax, word ptr [rax + VALUE]
#define ADD_AX_FROM_PTR_RBX_(VALUE) add ax, word ptr [rbx + VALUE]
#define ADD_AX_FROM_PTR_RCX_(VALUE) add ax, word ptr [rcx + VALUE]
#define ADD_AX_FROM_PTR_RDX_(VALUE) add ax, word ptr [rdx + VALUE]
#define ADD_AX_FROM_PTR_RDI_(VALUE) add ax, word ptr [rdi + VALUE]
#define ADD_AX_FROM_PTR_RSI_(VALUE) add ax, word ptr [rsi + VALUE]
#define ADD_AX_FROM_PTR_RBP_(VALUE) add ax, word ptr [rbp + VALUE]
#define ADD_AX_FROM_PTR_RSP_(VALUE) add ax, word ptr [rsp + VALUE]
#define ADD_AX_FROM_PTR_R8_(VALUE) add ax, word ptr [r8 + VALUE]
#define ADD_AX_FROM_PTR_R9_(VALUE) add ax, word ptr [r9 + VALUE]
#define ADD_AX_FROM_PTR_R10_(VALUE) add ax, word ptr [r10 + VALUE]
#define ADD_AX_FROM_PTR_R11_(VALUE) add ax, word ptr [r11 + VALUE]
#define ADD_AX_FROM_PTR_R12_(VALUE) add ax, word ptr [r12 + VALUE]
#define ADD_AX_FROM_PTR_R13_(VALUE) add ax, word ptr [r13 + VALUE]
#define ADD_AX_FROM_PTR_R14_(VALUE) add ax, word ptr [r14 + VALUE]
#define ADD_AX_FROM_PTR_R15_(VALUE) add ax, word ptr [r15 + VALUE]
#define ADD_AX_FROM_PTR_EAX_(VALUE) add ax, word ptr [eax + VALUE]
#define ADD_AX_FROM_PTR_EBX_(VALUE) add ax, word ptr [ebx + VALUE]
#define ADD_AX_FROM_PTR_ECX_(VALUE) add ax, word ptr [ecx + VALUE]
#define ADD_AX_FROM_PTR_EDX_(VALUE) add ax, word ptr [edx + VALUE]
#define ADD_AX_FROM_PTR_EDI_(VALUE) add ax, word ptr [edi + VALUE]
#define ADD_AX_FROM_PTR_ESI_(VALUE) add ax, word ptr [esi + VALUE]
#define ADD_AX_FROM_PTR_EBP_(VALUE) add ax, word ptr [ebp + VALUE]
#define ADD_AX_FROM_PTR_ESP_(VALUE) add ax, word ptr [esp + VALUE]

#define ADD_BX_FROM_PTR_RAX_(VALUE) add bx, word ptr [rax + VALUE]
#define ADD_BX_FROM_PTR_RBX_(VALUE) add bx, word ptr [rbx + VALUE]
#define ADD_BX_FROM_PTR_RCX_(VALUE) add bx, word ptr [rcx + VALUE]
#define ADD_BX_FROM_PTR_RDX_(VALUE) add bx, word ptr [rdx + VALUE]
#define ADD_BX_FROM_PTR_RDI_(VALUE) add bx, word ptr [rdi + VALUE]
#define ADD_BX_FROM_PTR_RSI_(VALUE) add bx, word ptr [rsi + VALUE]
#define ADD_BX_FROM_PTR_RBP_(VALUE) add bx, word ptr [rbp + VALUE]
#define ADD_BX_FROM_PTR_RSP_(VALUE) add bx, word ptr [rsp + VALUE]
#define ADD_BX_FROM_PTR_R8_(VALUE) add bx, word ptr [r8 + VALUE]
#define ADD_BX_FROM_PTR_R9_(VALUE) add bx, word ptr [r9 + VALUE]
#define ADD_BX_FROM_PTR_R10_(VALUE) add bx, word ptr [r10 + VALUE]
#define ADD_BX_FROM_PTR_R11_(VALUE) add bx, word ptr [r11 + VALUE]
#define ADD_BX_FROM_PTR_R12_(VALUE) add bx, word ptr [r12 + VALUE]
#define ADD_BX_FROM_PTR_R13_(VALUE) add bx, word ptr [r13 + VALUE]
#define ADD_BX_FROM_PTR_R14_(VALUE) add bx, word ptr [r14 + VALUE]
#define ADD_BX_FROM_PTR_R15_(VALUE) add bx, word ptr [r15 + VALUE]
#define ADD_BX_FROM_PTR_EAX_(VALUE) add bx, word ptr [eax + VALUE]
#define ADD_BX_FROM_PTR_EBX_(VALUE) add bx, word ptr [ebx + VALUE]
#define ADD_BX_FROM_PTR_ECX_(VALUE) add bx, word ptr [ecx + VALUE]
#define ADD_BX_FROM_PTR_EDX_(VALUE) add bx, word ptr [edx + VALUE]
#define ADD_BX_FROM_PTR_EDI_(VALUE) add bx, word ptr [edi + VALUE]
#define ADD_BX_FROM_PTR_ESI_(VALUE) add bx, word ptr [esi + VALUE]
#define ADD_BX_FROM_PTR_EBP_(VALUE) add bx, word ptr [ebp + VALUE]
#define ADD_BX_FROM_PTR_ESP_(VALUE) add bx, word ptr [esp + VALUE]

#define ADD_CX_FROM_PTR_RAX_(VALUE) add cx, word ptr [rax + VALUE]
#define ADD_CX_FROM_PTR_RBX_(VALUE) add cx, word ptr [rbx + VALUE]
#define ADD_CX_FROM_PTR_RCX_(VALUE) add cx, word ptr [rcx + VALUE]
#define ADD_CX_FROM_PTR_RDX_(VALUE) add cx, word ptr [rdx + VALUE]
#define ADD_CX_FROM_PTR_RDI_(VALUE) add cx, word ptr [rdi + VALUE]
#define ADD_CX_FROM_PTR_RSI_(VALUE) add cx, word ptr [rsi + VALUE]
#define ADD_CX_FROM_PTR_RBP_(VALUE) add cx, word ptr [rbp + VALUE]
#define ADD_CX_FROM_PTR_RSP_(VALUE) add cx, word ptr [rsp + VALUE]
#define ADD_CX_FROM_PTR_R8_(VALUE) add cx, word ptr [r8 + VALUE]
#define ADD_CX_FROM_PTR_R9_(VALUE) add cx, word ptr [r9 + VALUE]
#define ADD_CX_FROM_PTR_R10_(VALUE) add cx, word ptr [r10 + VALUE]
#define ADD_CX_FROM_PTR_R11_(VALUE) add cx, word ptr [r11 + VALUE]
#define ADD_CX_FROM_PTR_R12_(VALUE) add cx, word ptr [r12 + VALUE]
#define ADD_CX_FROM_PTR_R13_(VALUE) add cx, word ptr [r13 + VALUE]
#define ADD_CX_FROM_PTR_R14_(VALUE) add cx, word ptr [r14 + VALUE]
#define ADD_CX_FROM_PTR_R15_(VALUE) add cx, word ptr [r15 + VALUE]
#define ADD_CX_FROM_PTR_EAX_(VALUE) add cx, word ptr [eax + VALUE]
#define ADD_CX_FROM_PTR_EBX_(VALUE) add cx, word ptr [ebx + VALUE]
#define ADD_CX_FROM_PTR_ECX_(VALUE) add cx, word ptr [ecx + VALUE]
#define ADD_CX_FROM_PTR_EDX_(VALUE) add cx, word ptr [edx + VALUE]
#define ADD_CX_FROM_PTR_EDI_(VALUE) add cx, word ptr [edi + VALUE]
#define ADD_CX_FROM_PTR_ESI_(VALUE) add cx, word ptr [esi + VALUE]
#define ADD_CX_FROM_PTR_EBP_(VALUE) add cx, word ptr [ebp + VALUE]
#define ADD_CX_FROM_PTR_ESP_(VALUE) add cx, word ptr [esp + VALUE]

#define ADD_DX_FROM_PTR_RAX_(VALUE) add dx, word ptr [rax + VALUE]
#define ADD_DX_FROM_PTR_RBX_(VALUE) add dx, word ptr [rbx + VALUE]
#define ADD_DX_FROM_PTR_RCX_(VALUE) add dx, word ptr [rcx + VALUE]
#define ADD_DX_FROM_PTR_RDX_(VALUE) add dx, word ptr [rdx + VALUE]
#define ADD_DX_FROM_PTR_RDI_(VALUE) add dx, word ptr [rdi + VALUE]
#define ADD_DX_FROM_PTR_RSI_(VALUE) add dx, word ptr [rsi + VALUE]
#define ADD_DX_FROM_PTR_RBP_(VALUE) add dx, word ptr [rbp + VALUE]
#define ADD_DX_FROM_PTR_RSP_(VALUE) add dx, word ptr [rsp + VALUE]
#define ADD_DX_FROM_PTR_R8_(VALUE) add dx, word ptr [r8 + VALUE]
#define ADD_DX_FROM_PTR_R9_(VALUE) add dx, word ptr [r9 + VALUE]
#define ADD_DX_FROM_PTR_R10_(VALUE) add dx, word ptr [r10 + VALUE]
#define ADD_DX_FROM_PTR_R11_(VALUE) add dx, word ptr [r11 + VALUE]
#define ADD_DX_FROM_PTR_R12_(VALUE) add dx, word ptr [r12 + VALUE]
#define ADD_DX_FROM_PTR_R13_(VALUE) add dx, word ptr [r13 + VALUE]
#define ADD_DX_FROM_PTR_R14_(VALUE) add dx, word ptr [r14 + VALUE]
#define ADD_DX_FROM_PTR_R15_(VALUE) add dx, word ptr [r15 + VALUE]
#define ADD_DX_FROM_PTR_EAX_(VALUE) add dx, word ptr [eax + VALUE]
#define ADD_DX_FROM_PTR_EBX_(VALUE) add dx, word ptr [ebx + VALUE]
#define ADD_DX_FROM_PTR_ECX_(VALUE) add dx, word ptr [ecx + VALUE]
#define ADD_DX_FROM_PTR_EDX_(VALUE) add dx, word ptr [edx + VALUE]
#define ADD_DX_FROM_PTR_EDI_(VALUE) add dx, word ptr [edi + VALUE]
#define ADD_DX_FROM_PTR_ESI_(VALUE) add dx, word ptr [esi + VALUE]
#define ADD_DX_FROM_PTR_EBP_(VALUE) add dx, word ptr [ebp + VALUE]
#define ADD_DX_FROM_PTR_ESP_(VALUE) add dx, word ptr [esp + VALUE]

#define ADD_DI_FROM_PTR_RAX_(VALUE) add di, word ptr [rax + VALUE]
#define ADD_DI_FROM_PTR_RBX_(VALUE) add di, word ptr [rbx + VALUE]
#define ADD_DI_FROM_PTR_RCX_(VALUE) add di, word ptr [rcx + VALUE]
#define ADD_DI_FROM_PTR_RDX_(VALUE) add di, word ptr [rdx + VALUE]
#define ADD_DI_FROM_PTR_RDI_(VALUE) add di, word ptr [rdi + VALUE]
#define ADD_DI_FROM_PTR_RSI_(VALUE) add di, word ptr [rsi + VALUE]
#define ADD_DI_FROM_PTR_RBP_(VALUE) add di, word ptr [rbp + VALUE]
#define ADD_DI_FROM_PTR_RSP_(VALUE) add di, word ptr [rsp + VALUE]
#define ADD_DI_FROM_PTR_R8_(VALUE) add di, word ptr [r8 + VALUE]
#define ADD_DI_FROM_PTR_R9_(VALUE) add di, word ptr [r9 + VALUE]
#define ADD_DI_FROM_PTR_R10_(VALUE) add di, word ptr [r10 + VALUE]
#define ADD_DI_FROM_PTR_R11_(VALUE) add di, word ptr [r11 + VALUE]
#define ADD_DI_FROM_PTR_R12_(VALUE) add di, word ptr [r12 + VALUE]
#define ADD_DI_FROM_PTR_R13_(VALUE) add di, word ptr [r13 + VALUE]
#define ADD_DI_FROM_PTR_R14_(VALUE) add di, word ptr [r14 + VALUE]
#define ADD_DI_FROM_PTR_R15_(VALUE) add di, word ptr [r15 + VALUE]
#define ADD_DI_FROM_PTR_EAX_(VALUE) add di, word ptr [eax + VALUE]
#define ADD_DI_FROM_PTR_EBX_(VALUE) add di, word ptr [ebx + VALUE]
#define ADD_DI_FROM_PTR_ECX_(VALUE) add di, word ptr [ecx + VALUE]
#define ADD_DI_FROM_PTR_EDX_(VALUE) add di, word ptr [edx + VALUE]
#define ADD_DI_FROM_PTR_EDI_(VALUE) add di, word ptr [edi + VALUE]
#define ADD_DI_FROM_PTR_ESI_(VALUE) add di, word ptr [esi + VALUE]
#define ADD_DI_FROM_PTR_EBP_(VALUE) add di, word ptr [ebp + VALUE]
#define ADD_DI_FROM_PTR_ESP_(VALUE) add di, word ptr [esp + VALUE]

#define ADD_SI_FROM_PTR_RAX_(VALUE) add si, word ptr [rax + VALUE]
#define ADD_SI_FROM_PTR_RBX_(VALUE) add si, word ptr [rbx + VALUE]
#define ADD_SI_FROM_PTR_RCX_(VALUE) add si, word ptr [rcx + VALUE]
#define ADD_SI_FROM_PTR_RDX_(VALUE) add si, word ptr [rdx + VALUE]
#define ADD_SI_FROM_PTR_RDI_(VALUE) add si, word ptr [rdi + VALUE]
#define ADD_SI_FROM_PTR_RSI_(VALUE) add si, word ptr [rsi + VALUE]
#define ADD_SI_FROM_PTR_RBP_(VALUE) add si, word ptr [rbp + VALUE]
#define ADD_SI_FROM_PTR_RSP_(VALUE) add si, word ptr [rsp + VALUE]
#define ADD_SI_FROM_PTR_R8_(VALUE) add si, word ptr [r8 + VALUE]
#define ADD_SI_FROM_PTR_R9_(VALUE) add si, word ptr [r9 + VALUE]
#define ADD_SI_FROM_PTR_R10_(VALUE) add si, word ptr [r10 + VALUE]
#define ADD_SI_FROM_PTR_R11_(VALUE) add si, word ptr [r11 + VALUE]
#define ADD_SI_FROM_PTR_R12_(VALUE) add si, word ptr [r12 + VALUE]
#define ADD_SI_FROM_PTR_R13_(VALUE) add si, word ptr [r13 + VALUE]
#define ADD_SI_FROM_PTR_R14_(VALUE) add si, word ptr [r14 + VALUE]
#define ADD_SI_FROM_PTR_R15_(VALUE) add si, word ptr [r15 + VALUE]
#define ADD_SI_FROM_PTR_EAX_(VALUE) add si, word ptr [eax + VALUE]
#define ADD_SI_FROM_PTR_EBX_(VALUE) add si, word ptr [ebx + VALUE]
#define ADD_SI_FROM_PTR_ECX_(VALUE) add si, word ptr [ecx + VALUE]
#define ADD_SI_FROM_PTR_EDX_(VALUE) add si, word ptr [edx + VALUE]
#define ADD_SI_FROM_PTR_EDI_(VALUE) add si, word ptr [edi + VALUE]
#define ADD_SI_FROM_PTR_ESI_(VALUE) add si, word ptr [esi + VALUE]
#define ADD_SI_FROM_PTR_EBP_(VALUE) add si, word ptr [ebp + VALUE]
#define ADD_SI_FROM_PTR_ESP_(VALUE) add si, word ptr [esp + VALUE]

#define ADD_BP_FROM_PTR_RAX_(VALUE) add bp, word ptr [rax + VALUE]
#define ADD_BP_FROM_PTR_RBX_(VALUE) add bp, word ptr [rbx + VALUE]
#define ADD_BP_FROM_PTR_RCX_(VALUE) add bp, word ptr [rcx + VALUE]
#define ADD_BP_FROM_PTR_RDX_(VALUE) add bp, word ptr [rdx + VALUE]
#define ADD_BP_FROM_PTR_RDI_(VALUE) add bp, word ptr [rdi + VALUE]
#define ADD_BP_FROM_PTR_RSI_(VALUE) add bp, word ptr [rsi + VALUE]
#define ADD_BP_FROM_PTR_RBP_(VALUE) add bp, word ptr [rbp + VALUE]
#define ADD_BP_FROM_PTR_RSP_(VALUE) add bp, word ptr [rsp + VALUE]
#define ADD_BP_FROM_PTR_R8_(VALUE) add bp, word ptr [r8 + VALUE]
#define ADD_BP_FROM_PTR_R9_(VALUE) add bp, word ptr [r9 + VALUE]
#define ADD_BP_FROM_PTR_R10_(VALUE) add bp, word ptr [r10 + VALUE]
#define ADD_BP_FROM_PTR_R11_(VALUE) add bp, word ptr [r11 + VALUE]
#define ADD_BP_FROM_PTR_R12_(VALUE) add bp, word ptr [r12 + VALUE]
#define ADD_BP_FROM_PTR_R13_(VALUE) add bp, word ptr [r13 + VALUE]
#define ADD_BP_FROM_PTR_R14_(VALUE) add bp, word ptr [r14 + VALUE]
#define ADD_BP_FROM_PTR_R15_(VALUE) add bp, word ptr [r15 + VALUE]
#define ADD_BP_FROM_PTR_EAX_(VALUE) add bp, word ptr [eax + VALUE]
#define ADD_BP_FROM_PTR_EBX_(VALUE) add bp, word ptr [ebx + VALUE]
#define ADD_BP_FROM_PTR_ECX_(VALUE) add bp, word ptr [ecx + VALUE]
#define ADD_BP_FROM_PTR_EDX_(VALUE) add bp, word ptr [edx + VALUE]
#define ADD_BP_FROM_PTR_EDI_(VALUE) add bp, word ptr [edi + VALUE]
#define ADD_BP_FROM_PTR_ESI_(VALUE) add bp, word ptr [esi + VALUE]
#define ADD_BP_FROM_PTR_EBP_(VALUE) add bp, word ptr [ebp + VALUE]
#define ADD_BP_FROM_PTR_ESP_(VALUE) add bp, word ptr [esp + VALUE]

#define ADD_SP_FROM_PTR_RAX_(VALUE) add sp, word ptr [rax + VALUE]
#define ADD_SP_FROM_PTR_RBX_(VALUE) add sp, word ptr [rbx + VALUE]
#define ADD_SP_FROM_PTR_RCX_(VALUE) add sp, word ptr [rcx + VALUE]
#define ADD_SP_FROM_PTR_RDX_(VALUE) add sp, word ptr [rdx + VALUE]
#define ADD_SP_FROM_PTR_RDI_(VALUE) add sp, word ptr [rdi + VALUE]
#define ADD_SP_FROM_PTR_RSI_(VALUE) add sp, word ptr [rsi + VALUE]
#define ADD_SP_FROM_PTR_RBP_(VALUE) add sp, word ptr [rbp + VALUE]
#define ADD_SP_FROM_PTR_RSP_(VALUE) add sp, word ptr [rsp + VALUE]
#define ADD_SP_FROM_PTR_R8_(VALUE) add sp, word ptr [r8 + VALUE]
#define ADD_SP_FROM_PTR_R9_(VALUE) add sp, word ptr [r9 + VALUE]
#define ADD_SP_FROM_PTR_R10_(VALUE) add sp, word ptr [r10 + VALUE]
#define ADD_SP_FROM_PTR_R11_(VALUE) add sp, word ptr [r11 + VALUE]
#define ADD_SP_FROM_PTR_R12_(VALUE) add sp, word ptr [r12 + VALUE]
#define ADD_SP_FROM_PTR_R13_(VALUE) add sp, word ptr [r13 + VALUE]
#define ADD_SP_FROM_PTR_R14_(VALUE) add sp, word ptr [r14 + VALUE]
#define ADD_SP_FROM_PTR_R15_(VALUE) add sp, word ptr [r15 + VALUE]
#define ADD_SP_FROM_PTR_EAX_(VALUE) add sp, word ptr [eax + VALUE]
#define ADD_SP_FROM_PTR_EBX_(VALUE) add sp, word ptr [ebx + VALUE]
#define ADD_SP_FROM_PTR_ECX_(VALUE) add sp, word ptr [ecx + VALUE]
#define ADD_SP_FROM_PTR_EDX_(VALUE) add sp, word ptr [edx + VALUE]
#define ADD_SP_FROM_PTR_EDI_(VALUE) add sp, word ptr [edi + VALUE]
#define ADD_SP_FROM_PTR_ESI_(VALUE) add sp, word ptr [esi + VALUE]
#define ADD_SP_FROM_PTR_EBP_(VALUE) add sp, word ptr [ebp + VALUE]
#define ADD_SP_FROM_PTR_ESP_(VALUE) add sp, word ptr [esp + VALUE]

#define ADD_R8W_FROM_PTR_RAX_(VALUE) add r8w, word ptr [rax + VALUE]
#define ADD_R8W_FROM_PTR_RBX_(VALUE) add r8w, word ptr [rbx + VALUE]
#define ADD_R8W_FROM_PTR_RCX_(VALUE) add r8w, word ptr [rcx + VALUE]
#define ADD_R8W_FROM_PTR_RDX_(VALUE) add r8w, word ptr [rdx + VALUE]
#define ADD_R8W_FROM_PTR_RDI_(VALUE) add r8w, word ptr [rdi + VALUE]
#define ADD_R8W_FROM_PTR_RSI_(VALUE) add r8w, word ptr [rsi + VALUE]
#define ADD_R8W_FROM_PTR_RBP_(VALUE) add r8w, word ptr [rbp + VALUE]
#define ADD_R8W_FROM_PTR_RSP_(VALUE) add r8w, word ptr [rsp + VALUE]
#define ADD_R8W_FROM_PTR_R8_(VALUE) add r8w, word ptr [r8 + VALUE]
#define ADD_R8W_FROM_PTR_R9_(VALUE) add r8w, word ptr [r9 + VALUE]
#define ADD_R8W_FROM_PTR_R10_(VALUE) add r8w, word ptr [r10 + VALUE]
#define ADD_R8W_FROM_PTR_R11_(VALUE) add r8w, word ptr [r11 + VALUE]
#define ADD_R8W_FROM_PTR_R12_(VALUE) add r8w, word ptr [r12 + VALUE]
#define ADD_R8W_FROM_PTR_R13_(VALUE) add r8w, word ptr [r13 + VALUE]
#define ADD_R8W_FROM_PTR_R14_(VALUE) add r8w, word ptr [r14 + VALUE]
#define ADD_R8W_FROM_PTR_R15_(VALUE) add r8w, word ptr [r15 + VALUE]
#define ADD_R8W_FROM_PTR_EAX_(VALUE) add r8w, word ptr [eax + VALUE]
#define ADD_R8W_FROM_PTR_EBX_(VALUE) add r8w, word ptr [ebx + VALUE]
#define ADD_R8W_FROM_PTR_ECX_(VALUE) add r8w, word ptr [ecx + VALUE]
#define ADD_R8W_FROM_PTR_EDX_(VALUE) add r8w, word ptr [edx + VALUE]
#define ADD_R8W_FROM_PTR_EDI_(VALUE) add r8w, word ptr [edi + VALUE]
#define ADD_R8W_FROM_PTR_ESI_(VALUE) add r8w, word ptr [esi + VALUE]
#define ADD_R8W_FROM_PTR_EBP_(VALUE) add r8w, word ptr [ebp + VALUE]
#define ADD_R8W_FROM_PTR_ESP_(VALUE) add r8w, word ptr [esp + VALUE]

#define ADD_R9W_FROM_PTR_RAX_(VALUE) add r9w, word ptr [rax + VALUE]
#define ADD_R9W_FROM_PTR_RBX_(VALUE) add r9w, word ptr [rbx + VALUE]
#define ADD_R9W_FROM_PTR_RCX_(VALUE) add r9w, word ptr [rcx + VALUE]
#define ADD_R9W_FROM_PTR_RDX_(VALUE) add r9w, word ptr [rdx + VALUE]
#define ADD_R9W_FROM_PTR_RDI_(VALUE) add r9w, word ptr [rdi + VALUE]
#define ADD_R9W_FROM_PTR_RSI_(VALUE) add r9w, word ptr [rsi + VALUE]
#define ADD_R9W_FROM_PTR_RBP_(VALUE) add r9w, word ptr [rbp + VALUE]
#define ADD_R9W_FROM_PTR_RSP_(VALUE) add r9w, word ptr [rsp + VALUE]
#define ADD_R9W_FROM_PTR_R8_(VALUE) add r9w, word ptr [r8 + VALUE]
#define ADD_R9W_FROM_PTR_R9_(VALUE) add r9w, word ptr [r9 + VALUE]
#define ADD_R9W_FROM_PTR_R10_(VALUE) add r9w, word ptr [r10 + VALUE]
#define ADD_R9W_FROM_PTR_R11_(VALUE) add r9w, word ptr [r11 + VALUE]
#define ADD_R9W_FROM_PTR_R12_(VALUE) add r9w, word ptr [r12 + VALUE]
#define ADD_R9W_FROM_PTR_R13_(VALUE) add r9w, word ptr [r13 + VALUE]
#define ADD_R9W_FROM_PTR_R14_(VALUE) add r9w, word ptr [r14 + VALUE]
#define ADD_R9W_FROM_PTR_R15_(VALUE) add r9w, word ptr [r15 + VALUE]
#define ADD_R9W_FROM_PTR_EAX_(VALUE) add r9w, word ptr [eax + VALUE]
#define ADD_R9W_FROM_PTR_EBX_(VALUE) add r9w, word ptr [ebx + VALUE]
#define ADD_R9W_FROM_PTR_ECX_(VALUE) add r9w, word ptr [ecx + VALUE]
#define ADD_R9W_FROM_PTR_EDX_(VALUE) add r9w, word ptr [edx + VALUE]
#define ADD_R9W_FROM_PTR_EDI_(VALUE) add r9w, word ptr [edi + VALUE]
#define ADD_R9W_FROM_PTR_ESI_(VALUE) add r9w, word ptr [esi + VALUE]
#define ADD_R9W_FROM_PTR_EBP_(VALUE) add r9w, word ptr [ebp + VALUE]
#define ADD_R9W_FROM_PTR_ESP_(VALUE) add r9w, word ptr [esp + VALUE]

#define ADD_R10W_FROM_PTR_RAX_(VALUE) add r10w, word ptr [rax + VALUE]
#define ADD_R10W_FROM_PTR_RBX_(VALUE) add r10w, word ptr [rbx + VALUE]
#define ADD_R10W_FROM_PTR_RCX_(VALUE) add r10w, word ptr [rcx + VALUE]
#define ADD_R10W_FROM_PTR_RDX_(VALUE) add r10w, word ptr [rdx + VALUE]
#define ADD_R10W_FROM_PTR_RDI_(VALUE) add r10w, word ptr [rdi + VALUE]
#define ADD_R10W_FROM_PTR_RSI_(VALUE) add r10w, word ptr [rsi + VALUE]
#define ADD_R10W_FROM_PTR_RBP_(VALUE) add r10w, word ptr [rbp + VALUE]
#define ADD_R10W_FROM_PTR_RSP_(VALUE) add r10w, word ptr [rsp + VALUE]
#define ADD_R10W_FROM_PTR_R8_(VALUE) add r10w, word ptr [r8 + VALUE]
#define ADD_R10W_FROM_PTR_R9_(VALUE) add r10w, word ptr [r9 + VALUE]
#define ADD_R10W_FROM_PTR_R10_(VALUE) add r10w, word ptr [r10 + VALUE]
#define ADD_R10W_FROM_PTR_R11_(VALUE) add r10w, word ptr [r11 + VALUE]
#define ADD_R10W_FROM_PTR_R12_(VALUE) add r10w, word ptr [r12 + VALUE]
#define ADD_R10W_FROM_PTR_R13_(VALUE) add r10w, word ptr [r13 + VALUE]
#define ADD_R10W_FROM_PTR_R14_(VALUE) add r10w, word ptr [r14 + VALUE]
#define ADD_R10W_FROM_PTR_R15_(VALUE) add r10w, word ptr [r15 + VALUE]
#define ADD_R10W_FROM_PTR_EAX_(VALUE) add r10w, word ptr [eax + VALUE]
#define ADD_R10W_FROM_PTR_EBX_(VALUE) add r10w, word ptr [ebx + VALUE]
#define ADD_R10W_FROM_PTR_ECX_(VALUE) add r10w, word ptr [ecx + VALUE]
#define ADD_R10W_FROM_PTR_EDX_(VALUE) add r10w, word ptr [edx + VALUE]
#define ADD_R10W_FROM_PTR_EDI_(VALUE) add r10w, word ptr [edi + VALUE]
#define ADD_R10W_FROM_PTR_ESI_(VALUE) add r10w, word ptr [esi + VALUE]
#define ADD_R10W_FROM_PTR_EBP_(VALUE) add r10w, word ptr [ebp + VALUE]
#define ADD_R10W_FROM_PTR_ESP_(VALUE) add r10w, word ptr [esp + VALUE]

#define ADD_R11W_FROM_PTR_RAX_(VALUE) add r11w, word ptr [rax + VALUE]
#define ADD_R11W_FROM_PTR_RBX_(VALUE) add r11w, word ptr [rbx + VALUE]
#define ADD_R11W_FROM_PTR_RCX_(VALUE) add r11w, word ptr [rcx + VALUE]
#define ADD_R11W_FROM_PTR_RDX_(VALUE) add r11w, word ptr [rdx + VALUE]
#define ADD_R11W_FROM_PTR_RDI_(VALUE) add r11w, word ptr [rdi + VALUE]
#define ADD_R11W_FROM_PTR_RSI_(VALUE) add r11w, word ptr [rsi + VALUE]
#define ADD_R11W_FROM_PTR_RBP_(VALUE) add r11w, word ptr [rbp + VALUE]
#define ADD_R11W_FROM_PTR_RSP_(VALUE) add r11w, word ptr [rsp + VALUE]
#define ADD_R11W_FROM_PTR_R8_(VALUE) add r11w, word ptr [r8 + VALUE]
#define ADD_R11W_FROM_PTR_R9_(VALUE) add r11w, word ptr [r9 + VALUE]
#define ADD_R11W_FROM_PTR_R10_(VALUE) add r11w, word ptr [r10 + VALUE]
#define ADD_R11W_FROM_PTR_R11_(VALUE) add r11w, word ptr [r11 + VALUE]
#define ADD_R11W_FROM_PTR_R12_(VALUE) add r11w, word ptr [r12 + VALUE]
#define ADD_R11W_FROM_PTR_R13_(VALUE) add r11w, word ptr [r13 + VALUE]
#define ADD_R11W_FROM_PTR_R14_(VALUE) add r11w, word ptr [r14 + VALUE]
#define ADD_R11W_FROM_PTR_R15_(VALUE) add r11w, word ptr [r15 + VALUE]
#define ADD_R11W_FROM_PTR_EAX_(VALUE) add r11w, word ptr [eax + VALUE]
#define ADD_R11W_FROM_PTR_EBX_(VALUE) add r11w, word ptr [ebx + VALUE]
#define ADD_R11W_FROM_PTR_ECX_(VALUE) add r11w, word ptr [ecx + VALUE]
#define ADD_R11W_FROM_PTR_EDX_(VALUE) add r11w, word ptr [edx + VALUE]
#define ADD_R11W_FROM_PTR_EDI_(VALUE) add r11w, word ptr [edi + VALUE]
#define ADD_R11W_FROM_PTR_ESI_(VALUE) add r11w, word ptr [esi + VALUE]
#define ADD_R11W_FROM_PTR_EBP_(VALUE) add r11w, word ptr [ebp + VALUE]
#define ADD_R11W_FROM_PTR_ESP_(VALUE) add r11w, word ptr [esp + VALUE]

#define ADD_R12W_FROM_PTR_RAX_(VALUE) add r12w, word ptr [rax + VALUE]
#define ADD_R12W_FROM_PTR_RBX_(VALUE) add r12w, word ptr [rbx + VALUE]
#define ADD_R12W_FROM_PTR_RCX_(VALUE) add r12w, word ptr [rcx + VALUE]
#define ADD_R12W_FROM_PTR_RDX_(VALUE) add r12w, word ptr [rdx + VALUE]
#define ADD_R12W_FROM_PTR_RDI_(VALUE) add r12w, word ptr [rdi + VALUE]
#define ADD_R12W_FROM_PTR_RSI_(VALUE) add r12w, word ptr [rsi + VALUE]
#define ADD_R12W_FROM_PTR_RBP_(VALUE) add r12w, word ptr [rbp + VALUE]
#define ADD_R12W_FROM_PTR_RSP_(VALUE) add r12w, word ptr [rsp + VALUE]
#define ADD_R12W_FROM_PTR_R8_(VALUE) add r12w, word ptr [r8 + VALUE]
#define ADD_R12W_FROM_PTR_R9_(VALUE) add r12w, word ptr [r9 + VALUE]
#define ADD_R12W_FROM_PTR_R10_(VALUE) add r12w, word ptr [r10 + VALUE]
#define ADD_R12W_FROM_PTR_R11_(VALUE) add r12w, word ptr [r11 + VALUE]
#define ADD_R12W_FROM_PTR_R12_(VALUE) add r12w, word ptr [r12 + VALUE]
#define ADD_R12W_FROM_PTR_R13_(VALUE) add r12w, word ptr [r13 + VALUE]
#define ADD_R12W_FROM_PTR_R14_(VALUE) add r12w, word ptr [r14 + VALUE]
#define ADD_R12W_FROM_PTR_R15_(VALUE) add r12w, word ptr [r15 + VALUE]
#define ADD_R12W_FROM_PTR_EAX_(VALUE) add r12w, word ptr [eax + VALUE]
#define ADD_R12W_FROM_PTR_EBX_(VALUE) add r12w, word ptr [ebx + VALUE]
#define ADD_R12W_FROM_PTR_ECX_(VALUE) add r12w, word ptr [ecx + VALUE]
#define ADD_R12W_FROM_PTR_EDX_(VALUE) add r12w, word ptr [edx + VALUE]
#define ADD_R12W_FROM_PTR_EDI_(VALUE) add r12w, word ptr [edi + VALUE]
#define ADD_R12W_FROM_PTR_ESI_(VALUE) add r12w, word ptr [esi + VALUE]
#define ADD_R12W_FROM_PTR_EBP_(VALUE) add r12w, word ptr [ebp + VALUE]
#define ADD_R12W_FROM_PTR_ESP_(VALUE) add r12w, word ptr [esp + VALUE]

#define ADD_R13W_FROM_PTR_RAX_(VALUE) add r13w, word ptr [rax + VALUE]
#define ADD_R13W_FROM_PTR_RBX_(VALUE) add r13w, word ptr [rbx + VALUE]
#define ADD_R13W_FROM_PTR_RCX_(VALUE) add r13w, word ptr [rcx + VALUE]
#define ADD_R13W_FROM_PTR_RDX_(VALUE) add r13w, word ptr [rdx + VALUE]
#define ADD_R13W_FROM_PTR_RDI_(VALUE) add r13w, word ptr [rdi + VALUE]
#define ADD_R13W_FROM_PTR_RSI_(VALUE) add r13w, word ptr [rsi + VALUE]
#define ADD_R13W_FROM_PTR_RBP_(VALUE) add r13w, word ptr [rbp + VALUE]
#define ADD_R13W_FROM_PTR_RSP_(VALUE) add r13w, word ptr [rsp + VALUE]
#define ADD_R13W_FROM_PTR_R8_(VALUE) add r13w, word ptr [r8 + VALUE]
#define ADD_R13W_FROM_PTR_R9_(VALUE) add r13w, word ptr [r9 + VALUE]
#define ADD_R13W_FROM_PTR_R10_(VALUE) add r13w, word ptr [r10 + VALUE]
#define ADD_R13W_FROM_PTR_R11_(VALUE) add r13w, word ptr [r11 + VALUE]
#define ADD_R13W_FROM_PTR_R12_(VALUE) add r13w, word ptr [r12 + VALUE]
#define ADD_R13W_FROM_PTR_R13_(VALUE) add r13w, word ptr [r13 + VALUE]
#define ADD_R13W_FROM_PTR_R14_(VALUE) add r13w, word ptr [r14 + VALUE]
#define ADD_R13W_FROM_PTR_R15_(VALUE) add r13w, word ptr [r15 + VALUE]
#define ADD_R13W_FROM_PTR_EAX_(VALUE) add r13w, word ptr [eax + VALUE]
#define ADD_R13W_FROM_PTR_EBX_(VALUE) add r13w, word ptr [ebx + VALUE]
#define ADD_R13W_FROM_PTR_ECX_(VALUE) add r13w, word ptr [ecx + VALUE]
#define ADD_R13W_FROM_PTR_EDX_(VALUE) add r13w, word ptr [edx + VALUE]
#define ADD_R13W_FROM_PTR_EDI_(VALUE) add r13w, word ptr [edi + VALUE]
#define ADD_R13W_FROM_PTR_ESI_(VALUE) add r13w, word ptr [esi + VALUE]
#define ADD_R13W_FROM_PTR_EBP_(VALUE) add r13w, word ptr [ebp + VALUE]
#define ADD_R13W_FROM_PTR_ESP_(VALUE) add r13w, word ptr [esp + VALUE]

#define ADD_R14W_FROM_PTR_RAX_(VALUE) add r14w, word ptr [rax + VALUE]
#define ADD_R14W_FROM_PTR_RBX_(VALUE) add r14w, word ptr [rbx + VALUE]
#define ADD_R14W_FROM_PTR_RCX_(VALUE) add r14w, word ptr [rcx + VALUE]
#define ADD_R14W_FROM_PTR_RDX_(VALUE) add r14w, word ptr [rdx + VALUE]
#define ADD_R14W_FROM_PTR_RDI_(VALUE) add r14w, word ptr [rdi + VALUE]
#define ADD_R14W_FROM_PTR_RSI_(VALUE) add r14w, word ptr [rsi + VALUE]
#define ADD_R14W_FROM_PTR_RBP_(VALUE) add r14w, word ptr [rbp + VALUE]
#define ADD_R14W_FROM_PTR_RSP_(VALUE) add r14w, word ptr [rsp + VALUE]
#define ADD_R14W_FROM_PTR_R8_(VALUE) add r14w, word ptr [r8 + VALUE]
#define ADD_R14W_FROM_PTR_R9_(VALUE) add r14w, word ptr [r9 + VALUE]
#define ADD_R14W_FROM_PTR_R10_(VALUE) add r14w, word ptr [r10 + VALUE]
#define ADD_R14W_FROM_PTR_R11_(VALUE) add r14w, word ptr [r11 + VALUE]
#define ADD_R14W_FROM_PTR_R12_(VALUE) add r14w, word ptr [r12 + VALUE]
#define ADD_R14W_FROM_PTR_R13_(VALUE) add r14w, word ptr [r13 + VALUE]
#define ADD_R14W_FROM_PTR_R14_(VALUE) add r14w, word ptr [r14 + VALUE]
#define ADD_R14W_FROM_PTR_R15_(VALUE) add r14w, word ptr [r15 + VALUE]
#define ADD_R14W_FROM_PTR_EAX_(VALUE) add r14w, word ptr [eax + VALUE]
#define ADD_R14W_FROM_PTR_EBX_(VALUE) add r14w, word ptr [ebx + VALUE]
#define ADD_R14W_FROM_PTR_ECX_(VALUE) add r14w, word ptr [ecx + VALUE]
#define ADD_R14W_FROM_PTR_EDX_(VALUE) add r14w, word ptr [edx + VALUE]
#define ADD_R14W_FROM_PTR_EDI_(VALUE) add r14w, word ptr [edi + VALUE]
#define ADD_R14W_FROM_PTR_ESI_(VALUE) add r14w, word ptr [esi + VALUE]
#define ADD_R14W_FROM_PTR_EBP_(VALUE) add r14w, word ptr [ebp + VALUE]
#define ADD_R14W_FROM_PTR_ESP_(VALUE) add r14w, word ptr [esp + VALUE]

#define ADD_R15W_FROM_PTR_RAX_(VALUE) add r15w, word ptr [rax + VALUE]
#define ADD_R15W_FROM_PTR_RBX_(VALUE) add r15w, word ptr [rbx + VALUE]
#define ADD_R15W_FROM_PTR_RCX_(VALUE) add r15w, word ptr [rcx + VALUE]
#define ADD_R15W_FROM_PTR_RDX_(VALUE) add r15w, word ptr [rdx + VALUE]
#define ADD_R15W_FROM_PTR_RDI_(VALUE) add r15w, word ptr [rdi + VALUE]
#define ADD_R15W_FROM_PTR_RSI_(VALUE) add r15w, word ptr [rsi + VALUE]
#define ADD_R15W_FROM_PTR_RBP_(VALUE) add r15w, word ptr [rbp + VALUE]
#define ADD_R15W_FROM_PTR_RSP_(VALUE) add r15w, word ptr [rsp + VALUE]
#define ADD_R15W_FROM_PTR_R8_(VALUE) add r15w, word ptr [r8 + VALUE]
#define ADD_R15W_FROM_PTR_R9_(VALUE) add r15w, word ptr [r9 + VALUE]
#define ADD_R15W_FROM_PTR_R10_(VALUE) add r15w, word ptr [r10 + VALUE]
#define ADD_R15W_FROM_PTR_R11_(VALUE) add r15w, word ptr [r11 + VALUE]
#define ADD_R15W_FROM_PTR_R12_(VALUE) add r15w, word ptr [r12 + VALUE]
#define ADD_R15W_FROM_PTR_R13_(VALUE) add r15w, word ptr [r13 + VALUE]
#define ADD_R15W_FROM_PTR_R14_(VALUE) add r15w, word ptr [r14 + VALUE]
#define ADD_R15W_FROM_PTR_R15_(VALUE) add r15w, word ptr [r15 + VALUE]
#define ADD_R15W_FROM_PTR_EAX_(VALUE) add r15w, word ptr [eax + VALUE]
#define ADD_R15W_FROM_PTR_EBX_(VALUE) add r15w, word ptr [ebx + VALUE]
#define ADD_R15W_FROM_PTR_ECX_(VALUE) add r15w, word ptr [ecx + VALUE]
#define ADD_R15W_FROM_PTR_EDX_(VALUE) add r15w, word ptr [edx + VALUE]
#define ADD_R15W_FROM_PTR_EDI_(VALUE) add r15w, word ptr [edi + VALUE]
#define ADD_R15W_FROM_PTR_ESI_(VALUE) add r15w, word ptr [esi + VALUE]
#define ADD_R15W_FROM_PTR_EBP_(VALUE) add r15w, word ptr [ebp + VALUE]
#define ADD_R15W_FROM_PTR_ESP_(VALUE) add r15w, word ptr [esp + VALUE]

#define ADD_AX_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], ax
#define ADD_AX_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], ax
#define ADD_AX_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], ax
#define ADD_AX_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], ax
#define ADD_AX_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], ax
#define ADD_AX_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], ax
#define ADD_AX_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], ax
#define ADD_AX_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], ax
#define ADD_AX_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], ax
#define ADD_AX_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], ax
#define ADD_AX_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], ax
#define ADD_AX_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], ax
#define ADD_AX_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], ax
#define ADD_AX_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], ax
#define ADD_AX_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], ax
#define ADD_AX_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], ax
#define ADD_AX_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], ax
#define ADD_AX_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], ax
#define ADD_AX_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], ax
#define ADD_AX_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], ax
#define ADD_AX_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], ax
#define ADD_AX_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], ax
#define ADD_AX_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], ax
#define ADD_AX_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], ax

#define ADD_BX_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], bx
#define ADD_BX_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], bx
#define ADD_BX_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], bx
#define ADD_BX_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], bx
#define ADD_BX_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], bx
#define ADD_BX_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], bx
#define ADD_BX_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], bx
#define ADD_BX_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], bx
#define ADD_BX_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], bx
#define ADD_BX_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], bx
#define ADD_BX_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], bx
#define ADD_BX_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], bx
#define ADD_BX_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], bx
#define ADD_BX_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], bx
#define ADD_BX_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], bx
#define ADD_BX_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], bx
#define ADD_BX_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], bx
#define ADD_BX_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], bx
#define ADD_BX_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], bx
#define ADD_BX_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], bx
#define ADD_BX_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], bx
#define ADD_BX_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], bx
#define ADD_BX_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], bx
#define ADD_BX_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], bx

#define ADD_CX_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], cx
#define ADD_CX_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], cx
#define ADD_CX_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], cx
#define ADD_CX_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], cx
#define ADD_CX_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], cx
#define ADD_CX_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], cx
#define ADD_CX_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], cx
#define ADD_CX_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], cx
#define ADD_CX_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], cx
#define ADD_CX_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], cx
#define ADD_CX_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], cx
#define ADD_CX_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], cx
#define ADD_CX_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], cx
#define ADD_CX_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], cx
#define ADD_CX_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], cx
#define ADD_CX_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], cx
#define ADD_CX_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], cx
#define ADD_CX_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], cx
#define ADD_CX_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], cx
#define ADD_CX_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], cx
#define ADD_CX_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], cx
#define ADD_CX_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], cx
#define ADD_CX_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], cx
#define ADD_CX_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], cx

#define ADD_DX_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], dx
#define ADD_DX_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], dx
#define ADD_DX_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], dx
#define ADD_DX_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], dx
#define ADD_DX_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], dx
#define ADD_DX_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], dx
#define ADD_DX_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], dx
#define ADD_DX_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], dx
#define ADD_DX_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], dx
#define ADD_DX_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], dx
#define ADD_DX_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], dx
#define ADD_DX_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], dx
#define ADD_DX_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], dx
#define ADD_DX_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], dx
#define ADD_DX_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], dx
#define ADD_DX_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], dx
#define ADD_DX_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], dx
#define ADD_DX_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], dx
#define ADD_DX_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], dx
#define ADD_DX_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], dx
#define ADD_DX_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], dx
#define ADD_DX_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], dx
#define ADD_DX_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], dx
#define ADD_DX_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], dx

#define ADD_DI_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], di
#define ADD_DI_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], di
#define ADD_DI_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], di
#define ADD_DI_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], di
#define ADD_DI_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], di
#define ADD_DI_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], di
#define ADD_DI_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], di
#define ADD_DI_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], di
#define ADD_DI_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], di
#define ADD_DI_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], di
#define ADD_DI_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], di
#define ADD_DI_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], di
#define ADD_DI_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], di
#define ADD_DI_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], di
#define ADD_DI_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], di
#define ADD_DI_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], di
#define ADD_DI_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], di
#define ADD_DI_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], di
#define ADD_DI_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], di
#define ADD_DI_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], di
#define ADD_DI_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], di
#define ADD_DI_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], di
#define ADD_DI_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], di
#define ADD_DI_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], di

#define ADD_SI_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], si
#define ADD_SI_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], si
#define ADD_SI_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], si
#define ADD_SI_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], si
#define ADD_SI_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], si
#define ADD_SI_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], si
#define ADD_SI_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], si
#define ADD_SI_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], si
#define ADD_SI_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], si
#define ADD_SI_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], si
#define ADD_SI_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], si
#define ADD_SI_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], si
#define ADD_SI_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], si
#define ADD_SI_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], si
#define ADD_SI_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], si
#define ADD_SI_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], si
#define ADD_SI_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], si
#define ADD_SI_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], si
#define ADD_SI_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], si
#define ADD_SI_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], si
#define ADD_SI_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], si
#define ADD_SI_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], si
#define ADD_SI_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], si
#define ADD_SI_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], si

#define ADD_BP_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], bp
#define ADD_BP_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], bp
#define ADD_BP_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], bp
#define ADD_BP_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], bp
#define ADD_BP_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], bp
#define ADD_BP_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], bp
#define ADD_BP_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], bp
#define ADD_BP_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], bp
#define ADD_BP_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], bp
#define ADD_BP_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], bp
#define ADD_BP_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], bp
#define ADD_BP_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], bp
#define ADD_BP_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], bp
#define ADD_BP_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], bp
#define ADD_BP_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], bp
#define ADD_BP_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], bp
#define ADD_BP_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], bp
#define ADD_BP_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], bp
#define ADD_BP_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], bp
#define ADD_BP_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], bp
#define ADD_BP_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], bp
#define ADD_BP_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], bp
#define ADD_BP_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], bp
#define ADD_BP_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], bp

#define ADD_SP_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], sp
#define ADD_SP_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], sp
#define ADD_SP_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], sp
#define ADD_SP_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], sp
#define ADD_SP_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], sp
#define ADD_SP_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], sp
#define ADD_SP_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], sp
#define ADD_SP_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], sp
#define ADD_SP_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], sp
#define ADD_SP_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], sp
#define ADD_SP_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], sp
#define ADD_SP_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], sp
#define ADD_SP_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], sp
#define ADD_SP_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], sp
#define ADD_SP_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], sp
#define ADD_SP_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], sp
#define ADD_SP_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], sp
#define ADD_SP_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], sp
#define ADD_SP_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], sp
#define ADD_SP_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], sp
#define ADD_SP_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], sp
#define ADD_SP_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], sp
#define ADD_SP_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], sp
#define ADD_SP_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], sp

#define ADD_R8W_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], r8w
#define ADD_R8W_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], r8w
#define ADD_R8W_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], r8w
#define ADD_R8W_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], r8w
#define ADD_R8W_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], r8w
#define ADD_R8W_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], r8w
#define ADD_R8W_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], r8w
#define ADD_R8W_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], r8w
#define ADD_R8W_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], r8w
#define ADD_R8W_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], r8w
#define ADD_R8W_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], r8w
#define ADD_R8W_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], r8w
#define ADD_R8W_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], r8w
#define ADD_R8W_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], r8w
#define ADD_R8W_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], r8w
#define ADD_R8W_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], r8w
#define ADD_R8W_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], r8w
#define ADD_R8W_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], r8w
#define ADD_R8W_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], r8w
#define ADD_R8W_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], r8w
#define ADD_R8W_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], r8w
#define ADD_R8W_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], r8w
#define ADD_R8W_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], r8w
#define ADD_R8W_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], r8w

#define ADD_R9W_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], r9w
#define ADD_R9W_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], r9w
#define ADD_R9W_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], r9w
#define ADD_R9W_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], r9w
#define ADD_R9W_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], r9w
#define ADD_R9W_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], r9w
#define ADD_R9W_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], r9w
#define ADD_R9W_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], r9w
#define ADD_R9W_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], r9w
#define ADD_R9W_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], r9w
#define ADD_R9W_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], r9w
#define ADD_R9W_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], r9w
#define ADD_R9W_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], r9w
#define ADD_R9W_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], r9w
#define ADD_R9W_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], r9w
#define ADD_R9W_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], r9w
#define ADD_R9W_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], r9w
#define ADD_R9W_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], r9w
#define ADD_R9W_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], r9w
#define ADD_R9W_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], r9w
#define ADD_R9W_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], r9w
#define ADD_R9W_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], r9w
#define ADD_R9W_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], r9w
#define ADD_R9W_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], r9w

#define ADD_R10W_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], r10w
#define ADD_R10W_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], r10w
#define ADD_R10W_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], r10w
#define ADD_R10W_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], r10w
#define ADD_R10W_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], r10w
#define ADD_R10W_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], r10w
#define ADD_R10W_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], r10w
#define ADD_R10W_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], r10w
#define ADD_R10W_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], r10w
#define ADD_R10W_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], r10w
#define ADD_R10W_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], r10w
#define ADD_R10W_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], r10w
#define ADD_R10W_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], r10w
#define ADD_R10W_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], r10w
#define ADD_R10W_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], r10w
#define ADD_R10W_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], r10w
#define ADD_R10W_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], r10w
#define ADD_R10W_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], r10w
#define ADD_R10W_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], r10w
#define ADD_R10W_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], r10w
#define ADD_R10W_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], r10w
#define ADD_R10W_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], r10w
#define ADD_R10W_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], r10w
#define ADD_R10W_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], r10w

#define ADD_R11W_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], r11w
#define ADD_R11W_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], r11w
#define ADD_R11W_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], r11w
#define ADD_R11W_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], r11w
#define ADD_R11W_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], r11w
#define ADD_R11W_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], r11w
#define ADD_R11W_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], r11w
#define ADD_R11W_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], r11w
#define ADD_R11W_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], r11w
#define ADD_R11W_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], r11w
#define ADD_R11W_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], r11w
#define ADD_R11W_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], r11w
#define ADD_R11W_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], r11w
#define ADD_R11W_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], r11w
#define ADD_R11W_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], r11w
#define ADD_R11W_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], r11w
#define ADD_R11W_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], r11w
#define ADD_R11W_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], r11w
#define ADD_R11W_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], r11w
#define ADD_R11W_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], r11w
#define ADD_R11W_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], r11w
#define ADD_R11W_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], r11w
#define ADD_R11W_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], r11w
#define ADD_R11W_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], r11w

#define ADD_R12W_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], r12w
#define ADD_R12W_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], r12w
#define ADD_R12W_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], r12w
#define ADD_R12W_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], r12w
#define ADD_R12W_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], r12w
#define ADD_R12W_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], r12w
#define ADD_R12W_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], r12w
#define ADD_R12W_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], r12w
#define ADD_R12W_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], r12w
#define ADD_R12W_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], r12w
#define ADD_R12W_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], r12w
#define ADD_R12W_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], r12w
#define ADD_R12W_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], r12w
#define ADD_R12W_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], r12w
#define ADD_R12W_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], r12w
#define ADD_R12W_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], r12w
#define ADD_R12W_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], r12w
#define ADD_R12W_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], r12w
#define ADD_R12W_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], r12w
#define ADD_R12W_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], r12w
#define ADD_R12W_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], r12w
#define ADD_R12W_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], r12w
#define ADD_R12W_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], r12w
#define ADD_R12W_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], r12w

#define ADD_R13W_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], r13w
#define ADD_R13W_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], r13w
#define ADD_R13W_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], r13w
#define ADD_R13W_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], r13w
#define ADD_R13W_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], r13w
#define ADD_R13W_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], r13w
#define ADD_R13W_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], r13w
#define ADD_R13W_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], r13w
#define ADD_R13W_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], r13w
#define ADD_R13W_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], r13w
#define ADD_R13W_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], r13w
#define ADD_R13W_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], r13w
#define ADD_R13W_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], r13w
#define ADD_R13W_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], r13w
#define ADD_R13W_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], r13w
#define ADD_R13W_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], r13w
#define ADD_R13W_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], r13w
#define ADD_R13W_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], r13w
#define ADD_R13W_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], r13w
#define ADD_R13W_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], r13w
#define ADD_R13W_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], r13w
#define ADD_R13W_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], r13w
#define ADD_R13W_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], r13w
#define ADD_R13W_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], r13w

#define ADD_R14W_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], r14w
#define ADD_R14W_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], r14w
#define ADD_R14W_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], r14w
#define ADD_R14W_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], r14w
#define ADD_R14W_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], r14w
#define ADD_R14W_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], r14w
#define ADD_R14W_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], r14w
#define ADD_R14W_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], r14w
#define ADD_R14W_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], r14w
#define ADD_R14W_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], r14w
#define ADD_R14W_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], r14w
#define ADD_R14W_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], r14w
#define ADD_R14W_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], r14w
#define ADD_R14W_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], r14w
#define ADD_R14W_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], r14w
#define ADD_R14W_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], r14w
#define ADD_R14W_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], r14w
#define ADD_R14W_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], r14w
#define ADD_R14W_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], r14w
#define ADD_R14W_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], r14w
#define ADD_R14W_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], r14w
#define ADD_R14W_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], r14w
#define ADD_R14W_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], r14w
#define ADD_R14W_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], r14w

#define ADD_R15W_TO_PTR_RAX_(VALUE) add word ptr [rax + VALUE], r15w
#define ADD_R15W_TO_PTR_RBX_(VALUE) add word ptr [rbx + VALUE], r15w
#define ADD_R15W_TO_PTR_RCX_(VALUE) add word ptr [rcx + VALUE], r15w
#define ADD_R15W_TO_PTR_RDX_(VALUE) add word ptr [rdx + VALUE], r15w
#define ADD_R15W_TO_PTR_RDI_(VALUE) add word ptr [rdi + VALUE], r15w
#define ADD_R15W_TO_PTR_RSI_(VALUE) add word ptr [rsi + VALUE], r15w
#define ADD_R15W_TO_PTR_RBP_(VALUE) add word ptr [rbp + VALUE], r15w
#define ADD_R15W_TO_PTR_RSP_(VALUE) add word ptr [rsp + VALUE], r15w
#define ADD_R15W_TO_PTR_R8_(VALUE) add word ptr [r8 + VALUE], r15w
#define ADD_R15W_TO_PTR_R9_(VALUE) add word ptr [r9 + VALUE], r15w
#define ADD_R15W_TO_PTR_R10_(VALUE) add word ptr [r10 + VALUE], r15w
#define ADD_R15W_TO_PTR_R11_(VALUE) add word ptr [r11 + VALUE], r15w
#define ADD_R15W_TO_PTR_R12_(VALUE) add word ptr [r12 + VALUE], r15w
#define ADD_R15W_TO_PTR_R13_(VALUE) add word ptr [r13 + VALUE], r15w
#define ADD_R15W_TO_PTR_R14_(VALUE) add word ptr [r14 + VALUE], r15w
#define ADD_R15W_TO_PTR_R15_(VALUE) add word ptr [r15 + VALUE], r15w
#define ADD_R15W_TO_PTR_EAX_(VALUE) add word ptr [eax + VALUE], r15w
#define ADD_R15W_TO_PTR_EBX_(VALUE) add word ptr [ebx + VALUE], r15w
#define ADD_R15W_TO_PTR_ECX_(VALUE) add word ptr [ecx + VALUE], r15w
#define ADD_R15W_TO_PTR_EDX_(VALUE) add word ptr [edx + VALUE], r15w
#define ADD_R15W_TO_PTR_EDI_(VALUE) add word ptr [edi + VALUE], r15w
#define ADD_R15W_TO_PTR_ESI_(VALUE) add word ptr [esi + VALUE], r15w
#define ADD_R15W_TO_PTR_EBP_(VALUE) add word ptr [ebp + VALUE], r15w
#define ADD_R15W_TO_PTR_ESP_(VALUE) add word ptr [esp + VALUE], r15w
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
