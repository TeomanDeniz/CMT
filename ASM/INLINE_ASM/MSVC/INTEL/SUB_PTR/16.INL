#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define SUB_AL_FROM_PTR_(VALUE) sub al, byte ptr [VALUE]
#define SUB_BL_FROM_PTR_(VALUE) sub bl, byte ptr [VALUE]
#define SUB_CL_FROM_PTR_(VALUE) sub cl, byte ptr [VALUE]
#define SUB_DL_FROM_PTR_(VALUE) sub dl, byte ptr [VALUE]

#define SUB_AL_TO_PTR_(VALUE) sub byte ptr [VALUE], al
#define SUB_BL_TO_PTR_(VALUE) sub byte ptr [VALUE], bl
#define SUB_CL_TO_PTR_(VALUE) sub byte ptr [VALUE], cl
#define SUB_DL_TO_PTR_(VALUE) sub byte ptr [VALUE], dl

#define SUB_AL_FROM_PTR_BX sub al, byte ptr [bx]
#define SUB_AL_FROM_PTR_BP sub al, byte ptr [bp]
#define SUB_AL_FROM_PTR_SI sub al, byte ptr [si]
#define SUB_AL_FROM_PTR_DI sub al, byte ptr [di]

#define SUB_BL_FROM_PTR_BX sub bl, byte ptr [bx]
#define SUB_BL_FROM_PTR_BP sub bl, byte ptr [bp]
#define SUB_BL_FROM_PTR_SI sub bl, byte ptr [si]
#define SUB_BL_FROM_PTR_DI sub bl, byte ptr [di]

#define SUB_CL_FROM_PTR_BX sub cl, byte ptr [bx]
#define SUB_CL_FROM_PTR_BP sub cl, byte ptr [bp]
#define SUB_CL_FROM_PTR_SI sub cl, byte ptr [si]
#define SUB_CL_FROM_PTR_DI sub cl, byte ptr [di]

#define SUB_DL_FROM_PTR_BX sub dl, byte ptr [bx]
#define SUB_DL_FROM_PTR_BP sub dl, byte ptr [bp]
#define SUB_DL_FROM_PTR_SI sub dl, byte ptr [si]
#define SUB_DL_FROM_PTR_DI sub dl, byte ptr [di]

#define SUB_AL_TO_PTR_BX sub byte ptr [bx], al
#define SUB_AL_TO_PTR_BP sub byte ptr [bp], al
#define SUB_AL_TO_PTR_SI sub byte ptr [si], al
#define SUB_AL_TO_PTR_DI sub byte ptr [di], al

#define SUB_BL_TO_PTR_BX sub byte ptr [bx], bl
#define SUB_BL_TO_PTR_BP sub byte ptr [bp], bl
#define SUB_BL_TO_PTR_SI sub byte ptr [si], bl
#define SUB_BL_TO_PTR_DI sub byte ptr [di], bl

#define SUB_CL_TO_PTR_BX sub byte ptr [bx], cl
#define SUB_CL_TO_PTR_BP sub byte ptr [bp], cl
#define SUB_CL_TO_PTR_SI sub byte ptr [si], cl
#define SUB_CL_TO_PTR_DI sub byte ptr [di], cl

#define SUB_DL_TO_PTR_BX sub byte ptr [bx], dl
#define SUB_DL_TO_PTR_BP sub byte ptr [bp], dl
#define SUB_DL_TO_PTR_SI sub byte ptr [si], dl
#define SUB_DL_TO_PTR_DI sub byte ptr [di], dl

#define SUB_AL_FROM_PTR_BX_(VALUE) sub al, byte ptr [bx + VALUE]
#define SUB_AL_FROM_PTR_BP_(VALUE) sub al, byte ptr [bp + VALUE]
#define SUB_AL_FROM_PTR_SI_(VALUE) sub al, byte ptr [si + VALUE]
#define SUB_AL_FROM_PTR_DI_(VALUE) sub al, byte ptr [di + VALUE]

#define SUB_BL_FROM_PTR_BX_(VALUE) sub bl, byte ptr [bx + VALUE]
#define SUB_BL_FROM_PTR_BP_(VALUE) sub bl, byte ptr [bp + VALUE]
#define SUB_BL_FROM_PTR_SI_(VALUE) sub bl, byte ptr [si + VALUE]
#define SUB_BL_FROM_PTR_DI_(VALUE) sub bl, byte ptr [di + VALUE]

#define SUB_CL_FROM_PTR_BX_(VALUE) sub cl, byte ptr [bx + VALUE]
#define SUB_CL_FROM_PTR_BP_(VALUE) sub cl, byte ptr [bp + VALUE]
#define SUB_CL_FROM_PTR_SI_(VALUE) sub cl, byte ptr [si + VALUE]
#define SUB_CL_FROM_PTR_DI_(VALUE) sub cl, byte ptr [di + VALUE]

#define SUB_DL_FROM_PTR_BX_(VALUE) sub dl, byte ptr [bx + VALUE]
#define SUB_DL_FROM_PTR_BP_(VALUE) sub dl, byte ptr [bp + VALUE]
#define SUB_DL_FROM_PTR_SI_(VALUE) sub dl, byte ptr [si + VALUE]
#define SUB_DL_FROM_PTR_DI_(VALUE) sub dl, byte ptr [di + VALUE]

#define SUB_AL_TO_PTR_BX_(VALUE) sub byte ptr [bx + VALUE], al
#define SUB_AL_TO_PTR_BP_(VALUE) sub byte ptr [bp + VALUE], al
#define SUB_AL_TO_PTR_SI_(VALUE) sub byte ptr [si + VALUE], al
#define SUB_AL_TO_PTR_DI_(VALUE) sub byte ptr [di + VALUE], al

#define SUB_BL_TO_PTR_BX_(VALUE) sub byte ptr [bx + VALUE], bl
#define SUB_BL_TO_PTR_BP_(VALUE) sub byte ptr [bp + VALUE], bl
#define SUB_BL_TO_PTR_SI_(VALUE) sub byte ptr [si + VALUE], bl
#define SUB_BL_TO_PTR_DI_(VALUE) sub byte ptr [di + VALUE], bl

#define SUB_CL_TO_PTR_BX_(VALUE) sub byte ptr [bx + VALUE], cl
#define SUB_CL_TO_PTR_BP_(VALUE) sub byte ptr [bp + VALUE], cl
#define SUB_CL_TO_PTR_SI_(VALUE) sub byte ptr [si + VALUE], cl
#define SUB_CL_TO_PTR_DI_(VALUE) sub byte ptr [di + VALUE], cl

#define SUB_DL_TO_PTR_BX_(VALUE) sub byte ptr [bx + VALUE], dl
#define SUB_DL_TO_PTR_BP_(VALUE) sub byte ptr [bp + VALUE], dl
#define SUB_DL_TO_PTR_SI_(VALUE) sub byte ptr [si + VALUE], dl
#define SUB_DL_TO_PTR_DI_(VALUE) sub byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SUB_AL_FROM_PTR_(VALUE) sub al, byte ptr [VALUE]
#define SUB_BL_FROM_PTR_(VALUE) sub bl, byte ptr [VALUE]
#define SUB_CL_FROM_PTR_(VALUE) sub cl, byte ptr [VALUE]
#define SUB_DL_FROM_PTR_(VALUE) sub dl, byte ptr [VALUE]

#define SUB_AL_TO_PTR_(VALUE) sub byte ptr [VALUE], al
#define SUB_BL_TO_PTR_(VALUE) sub byte ptr [VALUE], bl
#define SUB_CL_TO_PTR_(VALUE) sub byte ptr [VALUE], cl
#define SUB_DL_TO_PTR_(VALUE) sub byte ptr [VALUE], dl

#define SUB_AL_FROM_PTR_EAX sub al, byte ptr [eax]
#define SUB_AL_FROM_PTR_EBX sub al, byte ptr [ebx]
#define SUB_AL_FROM_PTR_ECX sub al, byte ptr [ecx]
#define SUB_AL_FROM_PTR_EDX sub al, byte ptr [edx]
#define SUB_AL_FROM_PTR_EDI sub al, byte ptr [edi]
#define SUB_AL_FROM_PTR_ESI sub al, byte ptr [esi]
#define SUB_AL_FROM_PTR_EBP sub al, byte ptr [ebp]
#define SUB_AL_FROM_PTR_ESP sub al, byte ptr [esp]
#define SUB_AL_FROM_PTR_BX sub al, byte ptr [bx]
#define SUB_AL_FROM_PTR_BP sub al, byte ptr [bp]
#define SUB_AL_FROM_PTR_SI sub al, byte ptr [si]
#define SUB_AL_FROM_PTR_DI sub al, byte ptr [di]

#define SUB_BL_FROM_PTR_EAX sub bl, byte ptr [eax]
#define SUB_BL_FROM_PTR_EBX sub bl, byte ptr [ebx]
#define SUB_BL_FROM_PTR_ECX sub bl, byte ptr [ecx]
#define SUB_BL_FROM_PTR_EDX sub bl, byte ptr [edx]
#define SUB_BL_FROM_PTR_EDI sub bl, byte ptr [edi]
#define SUB_BL_FROM_PTR_ESI sub bl, byte ptr [esi]
#define SUB_BL_FROM_PTR_EBP sub bl, byte ptr [ebp]
#define SUB_BL_FROM_PTR_ESP sub bl, byte ptr [esp]
#define SUB_BL_FROM_PTR_BX sub bl, byte ptr [bx]
#define SUB_BL_FROM_PTR_BP sub bl, byte ptr [bp]
#define SUB_BL_FROM_PTR_SI sub bl, byte ptr [si]
#define SUB_BL_FROM_PTR_DI sub bl, byte ptr [di]

#define SUB_CL_FROM_PTR_EAX sub cl, byte ptr [eax]
#define SUB_CL_FROM_PTR_EBX sub cl, byte ptr [ebx]
#define SUB_CL_FROM_PTR_ECX sub cl, byte ptr [ecx]
#define SUB_CL_FROM_PTR_EDX sub cl, byte ptr [edx]
#define SUB_CL_FROM_PTR_EDI sub cl, byte ptr [edi]
#define SUB_CL_FROM_PTR_ESI sub cl, byte ptr [esi]
#define SUB_CL_FROM_PTR_EBP sub cl, byte ptr [ebp]
#define SUB_CL_FROM_PTR_ESP sub cl, byte ptr [esp]
#define SUB_CL_FROM_PTR_BX sub cl, byte ptr [bx]
#define SUB_CL_FROM_PTR_BP sub cl, byte ptr [bp]
#define SUB_CL_FROM_PTR_SI sub cl, byte ptr [si]
#define SUB_CL_FROM_PTR_DI sub cl, byte ptr [di]

#define SUB_DL_FROM_PTR_EAX sub dl, byte ptr [eax]
#define SUB_DL_FROM_PTR_EBX sub dl, byte ptr [ebx]
#define SUB_DL_FROM_PTR_ECX sub dl, byte ptr [ecx]
#define SUB_DL_FROM_PTR_EDX sub dl, byte ptr [edx]
#define SUB_DL_FROM_PTR_EDI sub dl, byte ptr [edi]
#define SUB_DL_FROM_PTR_ESI sub dl, byte ptr [esi]
#define SUB_DL_FROM_PTR_EBP sub dl, byte ptr [ebp]
#define SUB_DL_FROM_PTR_ESP sub dl, byte ptr [esp]
#define SUB_DL_FROM_PTR_BX sub dl, byte ptr [bx]
#define SUB_DL_FROM_PTR_BP sub dl, byte ptr [bp]
#define SUB_DL_FROM_PTR_SI sub dl, byte ptr [si]
#define SUB_DL_FROM_PTR_DI sub dl, byte ptr [di]

#define SUB_AL_TO_PTR_EAX sub byte ptr [eax], al
#define SUB_AL_TO_PTR_EBX sub byte ptr [ebx], al
#define SUB_AL_TO_PTR_ECX sub byte ptr [ecx], al
#define SUB_AL_TO_PTR_EDX sub byte ptr [edx], al
#define SUB_AL_TO_PTR_EDI sub byte ptr [edi], al
#define SUB_AL_TO_PTR_ESI sub byte ptr [esi], al
#define SUB_AL_TO_PTR_EBP sub byte ptr [ebp], al
#define SUB_AL_TO_PTR_ESP sub byte ptr [esp], al
#define SUB_AL_TO_PTR_BX sub byte ptr [bx], al
#define SUB_AL_TO_PTR_BP sub byte ptr [bp], al
#define SUB_AL_TO_PTR_SI sub byte ptr [si], al
#define SUB_AL_TO_PTR_DI sub byte ptr [di], al

#define SUB_BL_TO_PTR_EAX sub byte ptr [eax], bl
#define SUB_BL_TO_PTR_EBX sub byte ptr [ebx], bl
#define SUB_BL_TO_PTR_ECX sub byte ptr [ecx], bl
#define SUB_BL_TO_PTR_EDX sub byte ptr [edx], bl
#define SUB_BL_TO_PTR_EDI sub byte ptr [edi], bl
#define SUB_BL_TO_PTR_ESI sub byte ptr [esi], bl
#define SUB_BL_TO_PTR_EBP sub byte ptr [ebp], bl
#define SUB_BL_TO_PTR_ESP sub byte ptr [esp], bl
#define SUB_BL_TO_PTR_BX sub byte ptr [bx], bl
#define SUB_BL_TO_PTR_BP sub byte ptr [bp], bl
#define SUB_BL_TO_PTR_SI sub byte ptr [si], bl
#define SUB_BL_TO_PTR_DI sub byte ptr [di], bl

#define SUB_CL_TO_PTR_EAX sub byte ptr [eax], cl
#define SUB_CL_TO_PTR_EBX sub byte ptr [ebx], cl
#define SUB_CL_TO_PTR_ECX sub byte ptr [ecx], cl
#define SUB_CL_TO_PTR_EDX sub byte ptr [edx], cl
#define SUB_CL_TO_PTR_EDI sub byte ptr [edi], cl
#define SUB_CL_TO_PTR_ESI sub byte ptr [esi], cl
#define SUB_CL_TO_PTR_EBP sub byte ptr [ebp], cl
#define SUB_CL_TO_PTR_ESP sub byte ptr [esp], cl
#define SUB_CL_TO_PTR_BX sub byte ptr [bx], cl
#define SUB_CL_TO_PTR_BP sub byte ptr [bp], cl
#define SUB_CL_TO_PTR_SI sub byte ptr [si], cl
#define SUB_CL_TO_PTR_DI sub byte ptr [di], cl

#define SUB_DL_TO_PTR_EAX sub byte ptr [eax], dl
#define SUB_DL_TO_PTR_EBX sub byte ptr [ebx], dl
#define SUB_DL_TO_PTR_ECX sub byte ptr [ecx], dl
#define SUB_DL_TO_PTR_EDX sub byte ptr [edx], dl
#define SUB_DL_TO_PTR_EDI sub byte ptr [edi], dl
#define SUB_DL_TO_PTR_ESI sub byte ptr [esi], dl
#define SUB_DL_TO_PTR_EBP sub byte ptr [ebp], dl
#define SUB_DL_TO_PTR_ESP sub byte ptr [esp], dl
#define SUB_DL_TO_PTR_BX sub byte ptr [bx], dl
#define SUB_DL_TO_PTR_BP sub byte ptr [bp], dl
#define SUB_DL_TO_PTR_SI sub byte ptr [si], dl
#define SUB_DL_TO_PTR_DI sub byte ptr [di], dl

#define SUB_AL_FROM_PTR_EAX_(VALUE) sub al, byte ptr [eax + VALUE]
#define SUB_AL_FROM_PTR_EBX_(VALUE) sub al, byte ptr [ebx + VALUE]
#define SUB_AL_FROM_PTR_ECX_(VALUE) sub al, byte ptr [ecx + VALUE]
#define SUB_AL_FROM_PTR_EDX_(VALUE) sub al, byte ptr [edx + VALUE]
#define SUB_AL_FROM_PTR_EDI_(VALUE) sub al, byte ptr [edi + VALUE]
#define SUB_AL_FROM_PTR_ESI_(VALUE) sub al, byte ptr [esi + VALUE]
#define SUB_AL_FROM_PTR_EBP_(VALUE) sub al, byte ptr [ebp + VALUE]
#define SUB_AL_FROM_PTR_ESP_(VALUE) sub al, byte ptr [esp + VALUE]
#define SUB_AL_FROM_PTR_BX_(VALUE) sub al, byte ptr [bx + VALUE]
#define SUB_AL_FROM_PTR_BP_(VALUE) sub al, byte ptr [bp + VALUE]
#define SUB_AL_FROM_PTR_SI_(VALUE) sub al, byte ptr [si + VALUE]
#define SUB_AL_FROM_PTR_DI_(VALUE) sub al, byte ptr [di + VALUE]

#define SUB_BL_FROM_PTR_EAX_(VALUE) sub bl, byte ptr [eax + VALUE]
#define SUB_BL_FROM_PTR_EBX_(VALUE) sub bl, byte ptr [ebx + VALUE]
#define SUB_BL_FROM_PTR_ECX_(VALUE) sub bl, byte ptr [ecx + VALUE]
#define SUB_BL_FROM_PTR_EDX_(VALUE) sub bl, byte ptr [edx + VALUE]
#define SUB_BL_FROM_PTR_EDI_(VALUE) sub bl, byte ptr [edi + VALUE]
#define SUB_BL_FROM_PTR_ESI_(VALUE) sub bl, byte ptr [esi + VALUE]
#define SUB_BL_FROM_PTR_EBP_(VALUE) sub bl, byte ptr [ebp + VALUE]
#define SUB_BL_FROM_PTR_ESP_(VALUE) sub bl, byte ptr [esp + VALUE]
#define SUB_BL_FROM_PTR_BX_(VALUE) sub bl, byte ptr [bx + VALUE]
#define SUB_BL_FROM_PTR_BP_(VALUE) sub bl, byte ptr [bp + VALUE]
#define SUB_BL_FROM_PTR_SI_(VALUE) sub bl, byte ptr [si + VALUE]
#define SUB_BL_FROM_PTR_DI_(VALUE) sub bl, byte ptr [di + VALUE]

#define SUB_CL_FROM_PTR_EAX_(VALUE) sub cl, byte ptr [eax + VALUE]
#define SUB_CL_FROM_PTR_EBX_(VALUE) sub cl, byte ptr [ebx + VALUE]
#define SUB_CL_FROM_PTR_ECX_(VALUE) sub cl, byte ptr [ecx + VALUE]
#define SUB_CL_FROM_PTR_EDX_(VALUE) sub cl, byte ptr [edx + VALUE]
#define SUB_CL_FROM_PTR_EDI_(VALUE) sub cl, byte ptr [edi + VALUE]
#define SUB_CL_FROM_PTR_ESI_(VALUE) sub cl, byte ptr [esi + VALUE]
#define SUB_CL_FROM_PTR_EBP_(VALUE) sub cl, byte ptr [ebp + VALUE]
#define SUB_CL_FROM_PTR_ESP_(VALUE) sub cl, byte ptr [esp + VALUE]
#define SUB_CL_FROM_PTR_BX_(VALUE) sub cl, byte ptr [bx + VALUE]
#define SUB_CL_FROM_PTR_BP_(VALUE) sub cl, byte ptr [bp + VALUE]
#define SUB_CL_FROM_PTR_SI_(VALUE) sub cl, byte ptr [si + VALUE]
#define SUB_CL_FROM_PTR_DI_(VALUE) sub cl, byte ptr [di + VALUE]

#define SUB_DL_FROM_PTR_EAX_(VALUE) sub dl, byte ptr [eax + VALUE]
#define SUB_DL_FROM_PTR_EBX_(VALUE) sub dl, byte ptr [ebx + VALUE]
#define SUB_DL_FROM_PTR_ECX_(VALUE) sub dl, byte ptr [ecx + VALUE]
#define SUB_DL_FROM_PTR_EDX_(VALUE) sub dl, byte ptr [edx + VALUE]
#define SUB_DL_FROM_PTR_EDI_(VALUE) sub dl, byte ptr [edi + VALUE]
#define SUB_DL_FROM_PTR_ESI_(VALUE) sub dl, byte ptr [esi + VALUE]
#define SUB_DL_FROM_PTR_EBP_(VALUE) sub dl, byte ptr [ebp + VALUE]
#define SUB_DL_FROM_PTR_ESP_(VALUE) sub dl, byte ptr [esp + VALUE]
#define SUB_DL_FROM_PTR_BX_(VALUE) sub dl, byte ptr [bx + VALUE]
#define SUB_DL_FROM_PTR_BP_(VALUE) sub dl, byte ptr [bp + VALUE]
#define SUB_DL_FROM_PTR_SI_(VALUE) sub dl, byte ptr [si + VALUE]
#define SUB_DL_FROM_PTR_DI_(VALUE) sub dl, byte ptr [di + VALUE]

#define SUB_AL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], al
#define SUB_AL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], al
#define SUB_AL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], al
#define SUB_AL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], al
#define SUB_AL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], al
#define SUB_AL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], al
#define SUB_AL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], al
#define SUB_AL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], al
#define SUB_AL_TO_PTR_BX_(VALUE) sub byte ptr [bx + VALUE], al
#define SUB_AL_TO_PTR_BP_(VALUE) sub byte ptr [bp + VALUE], al
#define SUB_AL_TO_PTR_SI_(VALUE) sub byte ptr [si + VALUE], al
#define SUB_AL_TO_PTR_DI_(VALUE) sub byte ptr [di + VALUE], al

#define SUB_BL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], bl
#define SUB_BL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], bl
#define SUB_BL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], bl
#define SUB_BL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], bl
#define SUB_BL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], bl
#define SUB_BL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], bl
#define SUB_BL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], bl
#define SUB_BL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], bl
#define SUB_BL_TO_PTR_BX_(VALUE) sub byte ptr [bx + VALUE], bl
#define SUB_BL_TO_PTR_BP_(VALUE) sub byte ptr [bp + VALUE], bl
#define SUB_BL_TO_PTR_SI_(VALUE) sub byte ptr [si + VALUE], bl
#define SUB_BL_TO_PTR_DI_(VALUE) sub byte ptr [di + VALUE], bl

#define SUB_CL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], cl
#define SUB_CL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], cl
#define SUB_CL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], cl
#define SUB_CL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], cl
#define SUB_CL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], cl
#define SUB_CL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], cl
#define SUB_CL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], cl
#define SUB_CL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], cl
#define SUB_CL_TO_PTR_BX_(VALUE) sub byte ptr [bx + VALUE], cl
#define SUB_CL_TO_PTR_BP_(VALUE) sub byte ptr [bp + VALUE], cl
#define SUB_CL_TO_PTR_SI_(VALUE) sub byte ptr [si + VALUE], cl
#define SUB_CL_TO_PTR_DI_(VALUE) sub byte ptr [di + VALUE], cl

#define SUB_DL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], dl
#define SUB_DL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], dl
#define SUB_DL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], dl
#define SUB_DL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], dl
#define SUB_DL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], dl
#define SUB_DL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], dl
#define SUB_DL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], dl
#define SUB_DL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], dl
#define SUB_DL_TO_PTR_BX_(VALUE) sub byte ptr [bx + VALUE], dl
#define SUB_DL_TO_PTR_BP_(VALUE) sub byte ptr [bp + VALUE], dl
#define SUB_DL_TO_PTR_SI_(VALUE) sub byte ptr [si + VALUE], dl
#define SUB_DL_TO_PTR_DI_(VALUE) sub byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_AL_FROM_PTR_(VALUE) sub al, byte ptr [VALUE]
#define SUB_BL_FROM_PTR_(VALUE) sub bl, byte ptr [VALUE]
#define SUB_CL_FROM_PTR_(VALUE) sub cl, byte ptr [VALUE]
#define SUB_DL_FROM_PTR_(VALUE) sub dl, byte ptr [VALUE]
#define SUB_DIL_FROM_PTR_(VALUE) sub dil, byte ptr [VALUE]
#define SUB_SIL_FROM_PTR_(VALUE) sub sil, byte ptr [VALUE]
#define SUB_BPL_FROM_PTR_(VALUE) sub bpl, byte ptr [VALUE]
#define SUB_SPL_FROM_PTR_(VALUE) sub spl, byte ptr [VALUE]
#define SUB_R8B_FROM_PTR_(VALUE) sub r8b, byte ptr [VALUE]
#define SUB_R9B_FROM_PTR_(VALUE) sub r9b, byte ptr [VALUE]
#define SUB_R10B_FROM_PTR_(VALUE) sub r10b, byte ptr [VALUE]
#define SUB_R11B_FROM_PTR_(VALUE) sub r11b, byte ptr [VALUE]
#define SUB_R12B_FROM_PTR_(VALUE) sub r12b, byte ptr [VALUE]
#define SUB_R13B_FROM_PTR_(VALUE) sub r13b, byte ptr [VALUE]
#define SUB_R14B_FROM_PTR_(VALUE) sub r14b, byte ptr [VALUE]
#define SUB_R15B_FROM_PTR_(VALUE) sub r15b, byte ptr [VALUE]

#define SUB_AL_TO_PTR_(VALUE) sub byte ptr [VALUE], al
#define SUB_BL_TO_PTR_(VALUE) sub byte ptr [VALUE], bl
#define SUB_CL_TO_PTR_(VALUE) sub byte ptr [VALUE], cl
#define SUB_DL_TO_PTR_(VALUE) sub byte ptr [VALUE], dl
#define SUB_DIL_TO_PTR_(VALUE) sub byte ptr [VALUE], dil
#define SUB_SIL_TO_PTR_(VALUE) sub byte ptr [VALUE], sil
#define SUB_BPL_TO_PTR_(VALUE) sub byte ptr [VALUE], bpl
#define SUB_SPL_TO_PTR_(VALUE) sub byte ptr [VALUE], spl
#define SUB_R8B_TO_PTR_(VALUE) sub byte ptr [VALUE], r8b
#define SUB_R9B_TO_PTR_(VALUE) sub byte ptr [VALUE], r9b
#define SUB_R10B_TO_PTR_(VALUE) sub byte ptr [VALUE], r10b
#define SUB_R11B_TO_PTR_(VALUE) sub byte ptr [VALUE], r11b
#define SUB_R12B_TO_PTR_(VALUE) sub byte ptr [VALUE], r12b
#define SUB_R13B_TO_PTR_(VALUE) sub byte ptr [VALUE], r13b
#define SUB_R14B_TO_PTR_(VALUE) sub byte ptr [VALUE], r14b
#define SUB_R15B_TO_PTR_(VALUE) sub byte ptr [VALUE], r15b

#define SUB_AL_FROM_PTR_RAX sub al, byte ptr [rax]
#define SUB_AL_FROM_PTR_RBX sub al, byte ptr [rbx]
#define SUB_AL_FROM_PTR_RCX sub al, byte ptr [rcx]
#define SUB_AL_FROM_PTR_RDX sub al, byte ptr [rdx]
#define SUB_AL_FROM_PTR_RDI sub al, byte ptr [rdi]
#define SUB_AL_FROM_PTR_RSI sub al, byte ptr [rsi]
#define SUB_AL_FROM_PTR_RBP sub al, byte ptr [rbp]
#define SUB_AL_FROM_PTR_RSP sub al, byte ptr [rsp]
#define SUB_AL_FROM_PTR_R8 sub al, byte ptr [r8]
#define SUB_AL_FROM_PTR_R9 sub al, byte ptr [r9]
#define SUB_AL_FROM_PTR_R10 sub al, byte ptr [r10]
#define SUB_AL_FROM_PTR_R11 sub al, byte ptr [r11]
#define SUB_AL_FROM_PTR_R12 sub al, byte ptr [r12]
#define SUB_AL_FROM_PTR_R13 sub al, byte ptr [r13]
#define SUB_AL_FROM_PTR_R14 sub al, byte ptr [r14]
#define SUB_AL_FROM_PTR_R15 sub al, byte ptr [r15]
#define SUB_AL_FROM_PTR_EAX sub al, byte ptr [eax]
#define SUB_AL_FROM_PTR_EBX sub al, byte ptr [ebx]
#define SUB_AL_FROM_PTR_ECX sub al, byte ptr [ecx]
#define SUB_AL_FROM_PTR_EDX sub al, byte ptr [edx]
#define SUB_AL_FROM_PTR_EDI sub al, byte ptr [edi]
#define SUB_AL_FROM_PTR_ESI sub al, byte ptr [esi]
#define SUB_AL_FROM_PTR_EBP sub al, byte ptr [ebp]
#define SUB_AL_FROM_PTR_ESP sub al, byte ptr [esp]

#define SUB_BL_FROM_PTR_RAX sub bl, byte ptr [rax]
#define SUB_BL_FROM_PTR_RBX sub bl, byte ptr [rbx]
#define SUB_BL_FROM_PTR_RCX sub bl, byte ptr [rcx]
#define SUB_BL_FROM_PTR_RDX sub bl, byte ptr [rdx]
#define SUB_BL_FROM_PTR_RDI sub bl, byte ptr [rdi]
#define SUB_BL_FROM_PTR_RSI sub bl, byte ptr [rsi]
#define SUB_BL_FROM_PTR_RBP sub bl, byte ptr [rbp]
#define SUB_BL_FROM_PTR_RSP sub bl, byte ptr [rsp]
#define SUB_BL_FROM_PTR_R8 sub bl, byte ptr [r8]
#define SUB_BL_FROM_PTR_R9 sub bl, byte ptr [r9]
#define SUB_BL_FROM_PTR_R10 sub bl, byte ptr [r10]
#define SUB_BL_FROM_PTR_R11 sub bl, byte ptr [r11]
#define SUB_BL_FROM_PTR_R12 sub bl, byte ptr [r12]
#define SUB_BL_FROM_PTR_R13 sub bl, byte ptr [r13]
#define SUB_BL_FROM_PTR_R14 sub bl, byte ptr [r14]
#define SUB_BL_FROM_PTR_R15 sub bl, byte ptr [r15]
#define SUB_BL_FROM_PTR_EAX sub bl, byte ptr [eax]
#define SUB_BL_FROM_PTR_EBX sub bl, byte ptr [ebx]
#define SUB_BL_FROM_PTR_ECX sub bl, byte ptr [ecx]
#define SUB_BL_FROM_PTR_EDX sub bl, byte ptr [edx]
#define SUB_BL_FROM_PTR_EDI sub bl, byte ptr [edi]
#define SUB_BL_FROM_PTR_ESI sub bl, byte ptr [esi]
#define SUB_BL_FROM_PTR_EBP sub bl, byte ptr [ebp]
#define SUB_BL_FROM_PTR_ESP sub bl, byte ptr [esp]

#define SUB_CL_FROM_PTR_RAX sub cl, byte ptr [rax]
#define SUB_CL_FROM_PTR_RBX sub cl, byte ptr [rbx]
#define SUB_CL_FROM_PTR_RCX sub cl, byte ptr [rcx]
#define SUB_CL_FROM_PTR_RDX sub cl, byte ptr [rdx]
#define SUB_CL_FROM_PTR_RDI sub cl, byte ptr [rdi]
#define SUB_CL_FROM_PTR_RSI sub cl, byte ptr [rsi]
#define SUB_CL_FROM_PTR_RBP sub cl, byte ptr [rbp]
#define SUB_CL_FROM_PTR_RSP sub cl, byte ptr [rsp]
#define SUB_CL_FROM_PTR_R8 sub cl, byte ptr [r8]
#define SUB_CL_FROM_PTR_R9 sub cl, byte ptr [r9]
#define SUB_CL_FROM_PTR_R10 sub cl, byte ptr [r10]
#define SUB_CL_FROM_PTR_R11 sub cl, byte ptr [r11]
#define SUB_CL_FROM_PTR_R12 sub cl, byte ptr [r12]
#define SUB_CL_FROM_PTR_R13 sub cl, byte ptr [r13]
#define SUB_CL_FROM_PTR_R14 sub cl, byte ptr [r14]
#define SUB_CL_FROM_PTR_R15 sub cl, byte ptr [r15]
#define SUB_CL_FROM_PTR_EAX sub cl, byte ptr [eax]
#define SUB_CL_FROM_PTR_EBX sub cl, byte ptr [ebx]
#define SUB_CL_FROM_PTR_ECX sub cl, byte ptr [ecx]
#define SUB_CL_FROM_PTR_EDX sub cl, byte ptr [edx]
#define SUB_CL_FROM_PTR_EDI sub cl, byte ptr [edi]
#define SUB_CL_FROM_PTR_ESI sub cl, byte ptr [esi]
#define SUB_CL_FROM_PTR_EBP sub cl, byte ptr [ebp]
#define SUB_CL_FROM_PTR_ESP sub cl, byte ptr [esp]

#define SUB_DL_FROM_PTR_RAX sub dl, byte ptr [rax]
#define SUB_DL_FROM_PTR_RBX sub dl, byte ptr [rbx]
#define SUB_DL_FROM_PTR_RCX sub dl, byte ptr [rcx]
#define SUB_DL_FROM_PTR_RDX sub dl, byte ptr [rdx]
#define SUB_DL_FROM_PTR_RDI sub dl, byte ptr [rdi]
#define SUB_DL_FROM_PTR_RSI sub dl, byte ptr [rsi]
#define SUB_DL_FROM_PTR_RBP sub dl, byte ptr [rbp]
#define SUB_DL_FROM_PTR_RSP sub dl, byte ptr [rsp]
#define SUB_DL_FROM_PTR_R8 sub dl, byte ptr [r8]
#define SUB_DL_FROM_PTR_R9 sub dl, byte ptr [r9]
#define SUB_DL_FROM_PTR_R10 sub dl, byte ptr [r10]
#define SUB_DL_FROM_PTR_R11 sub dl, byte ptr [r11]
#define SUB_DL_FROM_PTR_R12 sub dl, byte ptr [r12]
#define SUB_DL_FROM_PTR_R13 sub dl, byte ptr [r13]
#define SUB_DL_FROM_PTR_R14 sub dl, byte ptr [r14]
#define SUB_DL_FROM_PTR_R15 sub dl, byte ptr [r15]
#define SUB_DL_FROM_PTR_EAX sub dl, byte ptr [eax]
#define SUB_DL_FROM_PTR_EBX sub dl, byte ptr [ebx]
#define SUB_DL_FROM_PTR_ECX sub dl, byte ptr [ecx]
#define SUB_DL_FROM_PTR_EDX sub dl, byte ptr [edx]
#define SUB_DL_FROM_PTR_EDI sub dl, byte ptr [edi]
#define SUB_DL_FROM_PTR_ESI sub dl, byte ptr [esi]
#define SUB_DL_FROM_PTR_EBP sub dl, byte ptr [ebp]
#define SUB_DL_FROM_PTR_ESP sub dl, byte ptr [esp]

#define SUB_DIL_FROM_PTR_RAX sub dil, byte ptr [rax]
#define SUB_DIL_FROM_PTR_RBX sub dil, byte ptr [rbx]
#define SUB_DIL_FROM_PTR_RCX sub dil, byte ptr [rcx]
#define SUB_DIL_FROM_PTR_RDX sub dil, byte ptr [rdx]
#define SUB_DIL_FROM_PTR_RDI sub dil, byte ptr [rdi]
#define SUB_DIL_FROM_PTR_RSI sub dil, byte ptr [rsi]
#define SUB_DIL_FROM_PTR_RBP sub dil, byte ptr [rbp]
#define SUB_DIL_FROM_PTR_RSP sub dil, byte ptr [rsp]
#define SUB_DIL_FROM_PTR_R8 sub dil, byte ptr [r8]
#define SUB_DIL_FROM_PTR_R9 sub dil, byte ptr [r9]
#define SUB_DIL_FROM_PTR_R10 sub dil, byte ptr [r10]
#define SUB_DIL_FROM_PTR_R11 sub dil, byte ptr [r11]
#define SUB_DIL_FROM_PTR_R12 sub dil, byte ptr [r12]
#define SUB_DIL_FROM_PTR_R13 sub dil, byte ptr [r13]
#define SUB_DIL_FROM_PTR_R14 sub dil, byte ptr [r14]
#define SUB_DIL_FROM_PTR_R15 sub dil, byte ptr [r15]
#define SUB_DIL_FROM_PTR_EAX sub dil, byte ptr [eax]
#define SUB_DIL_FROM_PTR_EBX sub dil, byte ptr [ebx]
#define SUB_DIL_FROM_PTR_ECX sub dil, byte ptr [ecx]
#define SUB_DIL_FROM_PTR_EDX sub dil, byte ptr [edx]
#define SUB_DIL_FROM_PTR_EDI sub dil, byte ptr [edi]
#define SUB_DIL_FROM_PTR_ESI sub dil, byte ptr [esi]
#define SUB_DIL_FROM_PTR_EBP sub dil, byte ptr [ebp]
#define SUB_DIL_FROM_PTR_ESP sub dil, byte ptr [esp]

#define SUB_SIL_FROM_PTR_RAX sub sil, byte ptr [rax]
#define SUB_SIL_FROM_PTR_RBX sub sil, byte ptr [rbx]
#define SUB_SIL_FROM_PTR_RCX sub sil, byte ptr [rcx]
#define SUB_SIL_FROM_PTR_RDX sub sil, byte ptr [rdx]
#define SUB_SIL_FROM_PTR_RDI sub sil, byte ptr [rdi]
#define SUB_SIL_FROM_PTR_RSI sub sil, byte ptr [rsi]
#define SUB_SIL_FROM_PTR_RBP sub sil, byte ptr [rbp]
#define SUB_SIL_FROM_PTR_RSP sub sil, byte ptr [rsp]
#define SUB_SIL_FROM_PTR_R8 sub sil, byte ptr [r8]
#define SUB_SIL_FROM_PTR_R9 sub sil, byte ptr [r9]
#define SUB_SIL_FROM_PTR_R10 sub sil, byte ptr [r10]
#define SUB_SIL_FROM_PTR_R11 sub sil, byte ptr [r11]
#define SUB_SIL_FROM_PTR_R12 sub sil, byte ptr [r12]
#define SUB_SIL_FROM_PTR_R13 sub sil, byte ptr [r13]
#define SUB_SIL_FROM_PTR_R14 sub sil, byte ptr [r14]
#define SUB_SIL_FROM_PTR_R15 sub sil, byte ptr [r15]
#define SUB_SIL_FROM_PTR_EAX sub sil, byte ptr [eax]
#define SUB_SIL_FROM_PTR_EBX sub sil, byte ptr [ebx]
#define SUB_SIL_FROM_PTR_ECX sub sil, byte ptr [ecx]
#define SUB_SIL_FROM_PTR_EDX sub sil, byte ptr [edx]
#define SUB_SIL_FROM_PTR_EDI sub sil, byte ptr [edi]
#define SUB_SIL_FROM_PTR_ESI sub sil, byte ptr [esi]
#define SUB_SIL_FROM_PTR_EBP sub sil, byte ptr [ebp]
#define SUB_SIL_FROM_PTR_ESP sub sil, byte ptr [esp]

#define SUB_BPL_FROM_PTR_RAX sub bpl, byte ptr [rax]
#define SUB_BPL_FROM_PTR_RBX sub bpl, byte ptr [rbx]
#define SUB_BPL_FROM_PTR_RCX sub bpl, byte ptr [rcx]
#define SUB_BPL_FROM_PTR_RDX sub bpl, byte ptr [rdx]
#define SUB_BPL_FROM_PTR_RDI sub bpl, byte ptr [rdi]
#define SUB_BPL_FROM_PTR_RSI sub bpl, byte ptr [rsi]
#define SUB_BPL_FROM_PTR_RBP sub bpl, byte ptr [rbp]
#define SUB_BPL_FROM_PTR_RSP sub bpl, byte ptr [rsp]
#define SUB_BPL_FROM_PTR_R8 sub bpl, byte ptr [r8]
#define SUB_BPL_FROM_PTR_R9 sub bpl, byte ptr [r9]
#define SUB_BPL_FROM_PTR_R10 sub bpl, byte ptr [r10]
#define SUB_BPL_FROM_PTR_R11 sub bpl, byte ptr [r11]
#define SUB_BPL_FROM_PTR_R12 sub bpl, byte ptr [r12]
#define SUB_BPL_FROM_PTR_R13 sub bpl, byte ptr [r13]
#define SUB_BPL_FROM_PTR_R14 sub bpl, byte ptr [r14]
#define SUB_BPL_FROM_PTR_R15 sub bpl, byte ptr [r15]
#define SUB_BPL_FROM_PTR_EAX sub bpl, byte ptr [eax]
#define SUB_BPL_FROM_PTR_EBX sub bpl, byte ptr [ebx]
#define SUB_BPL_FROM_PTR_ECX sub bpl, byte ptr [ecx]
#define SUB_BPL_FROM_PTR_EDX sub bpl, byte ptr [edx]
#define SUB_BPL_FROM_PTR_EDI sub bpl, byte ptr [edi]
#define SUB_BPL_FROM_PTR_ESI sub bpl, byte ptr [esi]
#define SUB_BPL_FROM_PTR_EBP sub bpl, byte ptr [ebp]
#define SUB_BPL_FROM_PTR_ESP sub bpl, byte ptr [esp]

#define SUB_SPL_FROM_PTR_RAX sub spl, byte ptr [rax]
#define SUB_SPL_FROM_PTR_RBX sub spl, byte ptr [rbx]
#define SUB_SPL_FROM_PTR_RCX sub spl, byte ptr [rcx]
#define SUB_SPL_FROM_PTR_RDX sub spl, byte ptr [rdx]
#define SUB_SPL_FROM_PTR_RDI sub spl, byte ptr [rdi]
#define SUB_SPL_FROM_PTR_RSI sub spl, byte ptr [rsi]
#define SUB_SPL_FROM_PTR_RBP sub spl, byte ptr [rbp]
#define SUB_SPL_FROM_PTR_RSP sub spl, byte ptr [rsp]
#define SUB_SPL_FROM_PTR_R8 sub spl, byte ptr [r8]
#define SUB_SPL_FROM_PTR_R9 sub spl, byte ptr [r9]
#define SUB_SPL_FROM_PTR_R10 sub spl, byte ptr [r10]
#define SUB_SPL_FROM_PTR_R11 sub spl, byte ptr [r11]
#define SUB_SPL_FROM_PTR_R12 sub spl, byte ptr [r12]
#define SUB_SPL_FROM_PTR_R13 sub spl, byte ptr [r13]
#define SUB_SPL_FROM_PTR_R14 sub spl, byte ptr [r14]
#define SUB_SPL_FROM_PTR_R15 sub spl, byte ptr [r15]
#define SUB_SPL_FROM_PTR_EAX sub spl, byte ptr [eax]
#define SUB_SPL_FROM_PTR_EBX sub spl, byte ptr [ebx]
#define SUB_SPL_FROM_PTR_ECX sub spl, byte ptr [ecx]
#define SUB_SPL_FROM_PTR_EDX sub spl, byte ptr [edx]
#define SUB_SPL_FROM_PTR_EDI sub spl, byte ptr [edi]
#define SUB_SPL_FROM_PTR_ESI sub spl, byte ptr [esi]
#define SUB_SPL_FROM_PTR_EBP sub spl, byte ptr [ebp]
#define SUB_SPL_FROM_PTR_ESP sub spl, byte ptr [esp]

#define SUB_R8B_FROM_PTR_RAX sub r8b, byte ptr [rax]
#define SUB_R8B_FROM_PTR_RBX sub r8b, byte ptr [rbx]
#define SUB_R8B_FROM_PTR_RCX sub r8b, byte ptr [rcx]
#define SUB_R8B_FROM_PTR_RDX sub r8b, byte ptr [rdx]
#define SUB_R8B_FROM_PTR_RDI sub r8b, byte ptr [rdi]
#define SUB_R8B_FROM_PTR_RSI sub r8b, byte ptr [rsi]
#define SUB_R8B_FROM_PTR_RBP sub r8b, byte ptr [rbp]
#define SUB_R8B_FROM_PTR_RSP sub r8b, byte ptr [rsp]
#define SUB_R8B_FROM_PTR_R8 sub r8b, byte ptr [r8]
#define SUB_R8B_FROM_PTR_R9 sub r8b, byte ptr [r9]
#define SUB_R8B_FROM_PTR_R10 sub r8b, byte ptr [r10]
#define SUB_R8B_FROM_PTR_R11 sub r8b, byte ptr [r11]
#define SUB_R8B_FROM_PTR_R12 sub r8b, byte ptr [r12]
#define SUB_R8B_FROM_PTR_R13 sub r8b, byte ptr [r13]
#define SUB_R8B_FROM_PTR_R14 sub r8b, byte ptr [r14]
#define SUB_R8B_FROM_PTR_R15 sub r8b, byte ptr [r15]
#define SUB_R8B_FROM_PTR_EAX sub r8b, byte ptr [eax]
#define SUB_R8B_FROM_PTR_EBX sub r8b, byte ptr [ebx]
#define SUB_R8B_FROM_PTR_ECX sub r8b, byte ptr [ecx]
#define SUB_R8B_FROM_PTR_EDX sub r8b, byte ptr [edx]
#define SUB_R8B_FROM_PTR_EDI sub r8b, byte ptr [edi]
#define SUB_R8B_FROM_PTR_ESI sub r8b, byte ptr [esi]
#define SUB_R8B_FROM_PTR_EBP sub r8b, byte ptr [ebp]
#define SUB_R8B_FROM_PTR_ESP sub r8b, byte ptr [esp]

#define SUB_R9B_FROM_PTR_RAX sub r9b, byte ptr [rax]
#define SUB_R9B_FROM_PTR_RBX sub r9b, byte ptr [rbx]
#define SUB_R9B_FROM_PTR_RCX sub r9b, byte ptr [rcx]
#define SUB_R9B_FROM_PTR_RDX sub r9b, byte ptr [rdx]
#define SUB_R9B_FROM_PTR_RDI sub r9b, byte ptr [rdi]
#define SUB_R9B_FROM_PTR_RSI sub r9b, byte ptr [rsi]
#define SUB_R9B_FROM_PTR_RBP sub r9b, byte ptr [rbp]
#define SUB_R9B_FROM_PTR_RSP sub r9b, byte ptr [rsp]
#define SUB_R9B_FROM_PTR_R8 sub r9b, byte ptr [r8]
#define SUB_R9B_FROM_PTR_R9 sub r9b, byte ptr [r9]
#define SUB_R9B_FROM_PTR_R10 sub r9b, byte ptr [r10]
#define SUB_R9B_FROM_PTR_R11 sub r9b, byte ptr [r11]
#define SUB_R9B_FROM_PTR_R12 sub r9b, byte ptr [r12]
#define SUB_R9B_FROM_PTR_R13 sub r9b, byte ptr [r13]
#define SUB_R9B_FROM_PTR_R14 sub r9b, byte ptr [r14]
#define SUB_R9B_FROM_PTR_R15 sub r9b, byte ptr [r15]
#define SUB_R9B_FROM_PTR_EAX sub r9b, byte ptr [eax]
#define SUB_R9B_FROM_PTR_EBX sub r9b, byte ptr [ebx]
#define SUB_R9B_FROM_PTR_ECX sub r9b, byte ptr [ecx]
#define SUB_R9B_FROM_PTR_EDX sub r9b, byte ptr [edx]
#define SUB_R9B_FROM_PTR_EDI sub r9b, byte ptr [edi]
#define SUB_R9B_FROM_PTR_ESI sub r9b, byte ptr [esi]
#define SUB_R9B_FROM_PTR_EBP sub r9b, byte ptr [ebp]
#define SUB_R9B_FROM_PTR_ESP sub r9b, byte ptr [esp]

#define SUB_R10B_FROM_PTR_RAX sub r10b, byte ptr [rax]
#define SUB_R10B_FROM_PTR_RBX sub r10b, byte ptr [rbx]
#define SUB_R10B_FROM_PTR_RCX sub r10b, byte ptr [rcx]
#define SUB_R10B_FROM_PTR_RDX sub r10b, byte ptr [rdx]
#define SUB_R10B_FROM_PTR_RDI sub r10b, byte ptr [rdi]
#define SUB_R10B_FROM_PTR_RSI sub r10b, byte ptr [rsi]
#define SUB_R10B_FROM_PTR_RBP sub r10b, byte ptr [rbp]
#define SUB_R10B_FROM_PTR_RSP sub r10b, byte ptr [rsp]
#define SUB_R10B_FROM_PTR_R8 sub r10b, byte ptr [r8]
#define SUB_R10B_FROM_PTR_R9 sub r10b, byte ptr [r9]
#define SUB_R10B_FROM_PTR_R10 sub r10b, byte ptr [r10]
#define SUB_R10B_FROM_PTR_R11 sub r10b, byte ptr [r11]
#define SUB_R10B_FROM_PTR_R12 sub r10b, byte ptr [r12]
#define SUB_R10B_FROM_PTR_R13 sub r10b, byte ptr [r13]
#define SUB_R10B_FROM_PTR_R14 sub r10b, byte ptr [r14]
#define SUB_R10B_FROM_PTR_R15 sub r10b, byte ptr [r15]
#define SUB_R10B_FROM_PTR_EAX sub r10b, byte ptr [eax]
#define SUB_R10B_FROM_PTR_EBX sub r10b, byte ptr [ebx]
#define SUB_R10B_FROM_PTR_ECX sub r10b, byte ptr [ecx]
#define SUB_R10B_FROM_PTR_EDX sub r10b, byte ptr [edx]
#define SUB_R10B_FROM_PTR_EDI sub r10b, byte ptr [edi]
#define SUB_R10B_FROM_PTR_ESI sub r10b, byte ptr [esi]
#define SUB_R10B_FROM_PTR_EBP sub r10b, byte ptr [ebp]
#define SUB_R10B_FROM_PTR_ESP sub r10b, byte ptr [esp]

#define SUB_R11B_FROM_PTR_RAX sub r11b, byte ptr [rax]
#define SUB_R11B_FROM_PTR_RBX sub r11b, byte ptr [rbx]
#define SUB_R11B_FROM_PTR_RCX sub r11b, byte ptr [rcx]
#define SUB_R11B_FROM_PTR_RDX sub r11b, byte ptr [rdx]
#define SUB_R11B_FROM_PTR_RDI sub r11b, byte ptr [rdi]
#define SUB_R11B_FROM_PTR_RSI sub r11b, byte ptr [rsi]
#define SUB_R11B_FROM_PTR_RBP sub r11b, byte ptr [rbp]
#define SUB_R11B_FROM_PTR_RSP sub r11b, byte ptr [rsp]
#define SUB_R11B_FROM_PTR_R8 sub r11b, byte ptr [r8]
#define SUB_R11B_FROM_PTR_R9 sub r11b, byte ptr [r9]
#define SUB_R11B_FROM_PTR_R10 sub r11b, byte ptr [r10]
#define SUB_R11B_FROM_PTR_R11 sub r11b, byte ptr [r11]
#define SUB_R11B_FROM_PTR_R12 sub r11b, byte ptr [r12]
#define SUB_R11B_FROM_PTR_R13 sub r11b, byte ptr [r13]
#define SUB_R11B_FROM_PTR_R14 sub r11b, byte ptr [r14]
#define SUB_R11B_FROM_PTR_R15 sub r11b, byte ptr [r15]
#define SUB_R11B_FROM_PTR_EAX sub r11b, byte ptr [eax]
#define SUB_R11B_FROM_PTR_EBX sub r11b, byte ptr [ebx]
#define SUB_R11B_FROM_PTR_ECX sub r11b, byte ptr [ecx]
#define SUB_R11B_FROM_PTR_EDX sub r11b, byte ptr [edx]
#define SUB_R11B_FROM_PTR_EDI sub r11b, byte ptr [edi]
#define SUB_R11B_FROM_PTR_ESI sub r11b, byte ptr [esi]
#define SUB_R11B_FROM_PTR_EBP sub r11b, byte ptr [ebp]
#define SUB_R11B_FROM_PTR_ESP sub r11b, byte ptr [esp]

#define SUB_R12B_FROM_PTR_RAX sub r12b, byte ptr [rax]
#define SUB_R12B_FROM_PTR_RBX sub r12b, byte ptr [rbx]
#define SUB_R12B_FROM_PTR_RCX sub r12b, byte ptr [rcx]
#define SUB_R12B_FROM_PTR_RDX sub r12b, byte ptr [rdx]
#define SUB_R12B_FROM_PTR_RDI sub r12b, byte ptr [rdi]
#define SUB_R12B_FROM_PTR_RSI sub r12b, byte ptr [rsi]
#define SUB_R12B_FROM_PTR_RBP sub r12b, byte ptr [rbp]
#define SUB_R12B_FROM_PTR_RSP sub r12b, byte ptr [rsp]
#define SUB_R12B_FROM_PTR_R8 sub r12b, byte ptr [r8]
#define SUB_R12B_FROM_PTR_R9 sub r12b, byte ptr [r9]
#define SUB_R12B_FROM_PTR_R10 sub r12b, byte ptr [r10]
#define SUB_R12B_FROM_PTR_R11 sub r12b, byte ptr [r11]
#define SUB_R12B_FROM_PTR_R12 sub r12b, byte ptr [r12]
#define SUB_R12B_FROM_PTR_R13 sub r12b, byte ptr [r13]
#define SUB_R12B_FROM_PTR_R14 sub r12b, byte ptr [r14]
#define SUB_R12B_FROM_PTR_R15 sub r12b, byte ptr [r15]
#define SUB_R12B_FROM_PTR_EAX sub r12b, byte ptr [eax]
#define SUB_R12B_FROM_PTR_EBX sub r12b, byte ptr [ebx]
#define SUB_R12B_FROM_PTR_ECX sub r12b, byte ptr [ecx]
#define SUB_R12B_FROM_PTR_EDX sub r12b, byte ptr [edx]
#define SUB_R12B_FROM_PTR_EDI sub r12b, byte ptr [edi]
#define SUB_R12B_FROM_PTR_ESI sub r12b, byte ptr [esi]
#define SUB_R12B_FROM_PTR_EBP sub r12b, byte ptr [ebp]
#define SUB_R12B_FROM_PTR_ESP sub r12b, byte ptr [esp]

#define SUB_R13B_FROM_PTR_RAX sub r13b, byte ptr [rax]
#define SUB_R13B_FROM_PTR_RBX sub r13b, byte ptr [rbx]
#define SUB_R13B_FROM_PTR_RCX sub r13b, byte ptr [rcx]
#define SUB_R13B_FROM_PTR_RDX sub r13b, byte ptr [rdx]
#define SUB_R13B_FROM_PTR_RDI sub r13b, byte ptr [rdi]
#define SUB_R13B_FROM_PTR_RSI sub r13b, byte ptr [rsi]
#define SUB_R13B_FROM_PTR_RBP sub r13b, byte ptr [rbp]
#define SUB_R13B_FROM_PTR_RSP sub r13b, byte ptr [rsp]
#define SUB_R13B_FROM_PTR_R8 sub r13b, byte ptr [r8]
#define SUB_R13B_FROM_PTR_R9 sub r13b, byte ptr [r9]
#define SUB_R13B_FROM_PTR_R10 sub r13b, byte ptr [r10]
#define SUB_R13B_FROM_PTR_R11 sub r13b, byte ptr [r11]
#define SUB_R13B_FROM_PTR_R12 sub r13b, byte ptr [r12]
#define SUB_R13B_FROM_PTR_R13 sub r13b, byte ptr [r13]
#define SUB_R13B_FROM_PTR_R14 sub r13b, byte ptr [r14]
#define SUB_R13B_FROM_PTR_R15 sub r13b, byte ptr [r15]
#define SUB_R13B_FROM_PTR_EAX sub r13b, byte ptr [eax]
#define SUB_R13B_FROM_PTR_EBX sub r13b, byte ptr [ebx]
#define SUB_R13B_FROM_PTR_ECX sub r13b, byte ptr [ecx]
#define SUB_R13B_FROM_PTR_EDX sub r13b, byte ptr [edx]
#define SUB_R13B_FROM_PTR_EDI sub r13b, byte ptr [edi]
#define SUB_R13B_FROM_PTR_ESI sub r13b, byte ptr [esi]
#define SUB_R13B_FROM_PTR_EBP sub r13b, byte ptr [ebp]
#define SUB_R13B_FROM_PTR_ESP sub r13b, byte ptr [esp]

#define SUB_R14B_FROM_PTR_RAX sub r14b, byte ptr [rax]
#define SUB_R14B_FROM_PTR_RBX sub r14b, byte ptr [rbx]
#define SUB_R14B_FROM_PTR_RCX sub r14b, byte ptr [rcx]
#define SUB_R14B_FROM_PTR_RDX sub r14b, byte ptr [rdx]
#define SUB_R14B_FROM_PTR_RDI sub r14b, byte ptr [rdi]
#define SUB_R14B_FROM_PTR_RSI sub r14b, byte ptr [rsi]
#define SUB_R14B_FROM_PTR_RBP sub r14b, byte ptr [rbp]
#define SUB_R14B_FROM_PTR_RSP sub r14b, byte ptr [rsp]
#define SUB_R14B_FROM_PTR_R8 sub r14b, byte ptr [r8]
#define SUB_R14B_FROM_PTR_R9 sub r14b, byte ptr [r9]
#define SUB_R14B_FROM_PTR_R10 sub r14b, byte ptr [r10]
#define SUB_R14B_FROM_PTR_R11 sub r14b, byte ptr [r11]
#define SUB_R14B_FROM_PTR_R12 sub r14b, byte ptr [r12]
#define SUB_R14B_FROM_PTR_R13 sub r14b, byte ptr [r13]
#define SUB_R14B_FROM_PTR_R14 sub r14b, byte ptr [r14]
#define SUB_R14B_FROM_PTR_R15 sub r14b, byte ptr [r15]
#define SUB_R14B_FROM_PTR_EAX sub r14b, byte ptr [eax]
#define SUB_R14B_FROM_PTR_EBX sub r14b, byte ptr [ebx]
#define SUB_R14B_FROM_PTR_ECX sub r14b, byte ptr [ecx]
#define SUB_R14B_FROM_PTR_EDX sub r14b, byte ptr [edx]
#define SUB_R14B_FROM_PTR_EDI sub r14b, byte ptr [edi]
#define SUB_R14B_FROM_PTR_ESI sub r14b, byte ptr [esi]
#define SUB_R14B_FROM_PTR_EBP sub r14b, byte ptr [ebp]
#define SUB_R14B_FROM_PTR_ESP sub r14b, byte ptr [esp]

#define SUB_R15B_FROM_PTR_RAX sub r15b, byte ptr [rax]
#define SUB_R15B_FROM_PTR_RBX sub r15b, byte ptr [rbx]
#define SUB_R15B_FROM_PTR_RCX sub r15b, byte ptr [rcx]
#define SUB_R15B_FROM_PTR_RDX sub r15b, byte ptr [rdx]
#define SUB_R15B_FROM_PTR_RDI sub r15b, byte ptr [rdi]
#define SUB_R15B_FROM_PTR_RSI sub r15b, byte ptr [rsi]
#define SUB_R15B_FROM_PTR_RBP sub r15b, byte ptr [rbp]
#define SUB_R15B_FROM_PTR_RSP sub r15b, byte ptr [rsp]
#define SUB_R15B_FROM_PTR_R8 sub r15b, byte ptr [r8]
#define SUB_R15B_FROM_PTR_R9 sub r15b, byte ptr [r9]
#define SUB_R15B_FROM_PTR_R10 sub r15b, byte ptr [r10]
#define SUB_R15B_FROM_PTR_R11 sub r15b, byte ptr [r11]
#define SUB_R15B_FROM_PTR_R12 sub r15b, byte ptr [r12]
#define SUB_R15B_FROM_PTR_R13 sub r15b, byte ptr [r13]
#define SUB_R15B_FROM_PTR_R14 sub r15b, byte ptr [r14]
#define SUB_R15B_FROM_PTR_R15 sub r15b, byte ptr [r15]
#define SUB_R15B_FROM_PTR_EAX sub r15b, byte ptr [eax]
#define SUB_R15B_FROM_PTR_EBX sub r15b, byte ptr [ebx]
#define SUB_R15B_FROM_PTR_ECX sub r15b, byte ptr [ecx]
#define SUB_R15B_FROM_PTR_EDX sub r15b, byte ptr [edx]
#define SUB_R15B_FROM_PTR_EDI sub r15b, byte ptr [edi]
#define SUB_R15B_FROM_PTR_ESI sub r15b, byte ptr [esi]
#define SUB_R15B_FROM_PTR_EBP sub r15b, byte ptr [ebp]
#define SUB_R15B_FROM_PTR_ESP sub r15b, byte ptr [esp]

#define SUB_AL_TO_PTR_RAX sub byte ptr [rax], al
#define SUB_AL_TO_PTR_RBX sub byte ptr [rbx], al
#define SUB_AL_TO_PTR_RCX sub byte ptr [rcx], al
#define SUB_AL_TO_PTR_RDX sub byte ptr [rdx], al
#define SUB_AL_TO_PTR_RDI sub byte ptr [rdi], al
#define SUB_AL_TO_PTR_RSI sub byte ptr [rsi], al
#define SUB_AL_TO_PTR_RBP sub byte ptr [rbp], al
#define SUB_AL_TO_PTR_RSP sub byte ptr [rsp], al
#define SUB_AL_TO_PTR_R8 sub byte ptr [r8], al
#define SUB_AL_TO_PTR_R9 sub byte ptr [r9], al
#define SUB_AL_TO_PTR_R10 sub byte ptr [r10], al
#define SUB_AL_TO_PTR_R11 sub byte ptr [r11], al
#define SUB_AL_TO_PTR_R12 sub byte ptr [r12], al
#define SUB_AL_TO_PTR_R13 sub byte ptr [r13], al
#define SUB_AL_TO_PTR_R14 sub byte ptr [r14], al
#define SUB_AL_TO_PTR_R15 sub byte ptr [r15], al
#define SUB_AL_TO_PTR_EAX sub byte ptr [eax], al
#define SUB_AL_TO_PTR_EBX sub byte ptr [ebx], al
#define SUB_AL_TO_PTR_ECX sub byte ptr [ecx], al
#define SUB_AL_TO_PTR_EDX sub byte ptr [edx], al
#define SUB_AL_TO_PTR_EDI sub byte ptr [edi], al
#define SUB_AL_TO_PTR_ESI sub byte ptr [esi], al
#define SUB_AL_TO_PTR_EBP sub byte ptr [ebp], al
#define SUB_AL_TO_PTR_ESP sub byte ptr [esp], al

#define SUB_BL_TO_PTR_RAX sub byte ptr [rax], bl
#define SUB_BL_TO_PTR_RBX sub byte ptr [rbx], bl
#define SUB_BL_TO_PTR_RCX sub byte ptr [rcx], bl
#define SUB_BL_TO_PTR_RDX sub byte ptr [rdx], bl
#define SUB_BL_TO_PTR_RDI sub byte ptr [rdi], bl
#define SUB_BL_TO_PTR_RSI sub byte ptr [rsi], bl
#define SUB_BL_TO_PTR_RBP sub byte ptr [rbp], bl
#define SUB_BL_TO_PTR_RSP sub byte ptr [rsp], bl
#define SUB_BL_TO_PTR_R8 sub byte ptr [r8], bl
#define SUB_BL_TO_PTR_R9 sub byte ptr [r9], bl
#define SUB_BL_TO_PTR_R10 sub byte ptr [r10], bl
#define SUB_BL_TO_PTR_R11 sub byte ptr [r11], bl
#define SUB_BL_TO_PTR_R12 sub byte ptr [r12], bl
#define SUB_BL_TO_PTR_R13 sub byte ptr [r13], bl
#define SUB_BL_TO_PTR_R14 sub byte ptr [r14], bl
#define SUB_BL_TO_PTR_R15 sub byte ptr [r15], bl
#define SUB_BL_TO_PTR_EAX sub byte ptr [eax], bl
#define SUB_BL_TO_PTR_EBX sub byte ptr [ebx], bl
#define SUB_BL_TO_PTR_ECX sub byte ptr [ecx], bl
#define SUB_BL_TO_PTR_EDX sub byte ptr [edx], bl
#define SUB_BL_TO_PTR_EDI sub byte ptr [edi], bl
#define SUB_BL_TO_PTR_ESI sub byte ptr [esi], bl
#define SUB_BL_TO_PTR_EBP sub byte ptr [ebp], bl
#define SUB_BL_TO_PTR_ESP sub byte ptr [esp], bl

#define SUB_CL_TO_PTR_RAX sub byte ptr [rax], cl
#define SUB_CL_TO_PTR_RBX sub byte ptr [rbx], cl
#define SUB_CL_TO_PTR_RCX sub byte ptr [rcx], cl
#define SUB_CL_TO_PTR_RDX sub byte ptr [rdx], cl
#define SUB_CL_TO_PTR_RDI sub byte ptr [rdi], cl
#define SUB_CL_TO_PTR_RSI sub byte ptr [rsi], cl
#define SUB_CL_TO_PTR_RBP sub byte ptr [rbp], cl
#define SUB_CL_TO_PTR_RSP sub byte ptr [rsp], cl
#define SUB_CL_TO_PTR_R8 sub byte ptr [r8], cl
#define SUB_CL_TO_PTR_R9 sub byte ptr [r9], cl
#define SUB_CL_TO_PTR_R10 sub byte ptr [r10], cl
#define SUB_CL_TO_PTR_R11 sub byte ptr [r11], cl
#define SUB_CL_TO_PTR_R12 sub byte ptr [r12], cl
#define SUB_CL_TO_PTR_R13 sub byte ptr [r13], cl
#define SUB_CL_TO_PTR_R14 sub byte ptr [r14], cl
#define SUB_CL_TO_PTR_R15 sub byte ptr [r15], cl
#define SUB_CL_TO_PTR_EAX sub byte ptr [eax], cl
#define SUB_CL_TO_PTR_EBX sub byte ptr [ebx], cl
#define SUB_CL_TO_PTR_ECX sub byte ptr [ecx], cl
#define SUB_CL_TO_PTR_EDX sub byte ptr [edx], cl
#define SUB_CL_TO_PTR_EDI sub byte ptr [edi], cl
#define SUB_CL_TO_PTR_ESI sub byte ptr [esi], cl
#define SUB_CL_TO_PTR_EBP sub byte ptr [ebp], cl
#define SUB_CL_TO_PTR_ESP sub byte ptr [esp], cl

#define SUB_DL_TO_PTR_RAX sub byte ptr [rax], dl
#define SUB_DL_TO_PTR_RBX sub byte ptr [rbx], dl
#define SUB_DL_TO_PTR_RCX sub byte ptr [rcx], dl
#define SUB_DL_TO_PTR_RDX sub byte ptr [rdx], dl
#define SUB_DL_TO_PTR_RDI sub byte ptr [rdi], dl
#define SUB_DL_TO_PTR_RSI sub byte ptr [rsi], dl
#define SUB_DL_TO_PTR_RBP sub byte ptr [rbp], dl
#define SUB_DL_TO_PTR_RSP sub byte ptr [rsp], dl
#define SUB_DL_TO_PTR_R8 sub byte ptr [r8], dl
#define SUB_DL_TO_PTR_R9 sub byte ptr [r9], dl
#define SUB_DL_TO_PTR_R10 sub byte ptr [r10], dl
#define SUB_DL_TO_PTR_R11 sub byte ptr [r11], dl
#define SUB_DL_TO_PTR_R12 sub byte ptr [r12], dl
#define SUB_DL_TO_PTR_R13 sub byte ptr [r13], dl
#define SUB_DL_TO_PTR_R14 sub byte ptr [r14], dl
#define SUB_DL_TO_PTR_R15 sub byte ptr [r15], dl
#define SUB_DL_TO_PTR_EAX sub byte ptr [eax], dl
#define SUB_DL_TO_PTR_EBX sub byte ptr [ebx], dl
#define SUB_DL_TO_PTR_ECX sub byte ptr [ecx], dl
#define SUB_DL_TO_PTR_EDX sub byte ptr [edx], dl
#define SUB_DL_TO_PTR_EDI sub byte ptr [edi], dl
#define SUB_DL_TO_PTR_ESI sub byte ptr [esi], dl
#define SUB_DL_TO_PTR_EBP sub byte ptr [ebp], dl
#define SUB_DL_TO_PTR_ESP sub byte ptr [esp], dl

#define SUB_DIL_TO_PTR_RAX sub byte ptr [rax], dil
#define SUB_DIL_TO_PTR_RBX sub byte ptr [rbx], dil
#define SUB_DIL_TO_PTR_RCX sub byte ptr [rcx], dil
#define SUB_DIL_TO_PTR_RDX sub byte ptr [rdx], dil
#define SUB_DIL_TO_PTR_RDI sub byte ptr [rdi], dil
#define SUB_DIL_TO_PTR_RSI sub byte ptr [rsi], dil
#define SUB_DIL_TO_PTR_RBP sub byte ptr [rbp], dil
#define SUB_DIL_TO_PTR_RSP sub byte ptr [rsp], dil
#define SUB_DIL_TO_PTR_R8 sub byte ptr [r8], dil
#define SUB_DIL_TO_PTR_R9 sub byte ptr [r9], dil
#define SUB_DIL_TO_PTR_R10 sub byte ptr [r10], dil
#define SUB_DIL_TO_PTR_R11 sub byte ptr [r11], dil
#define SUB_DIL_TO_PTR_R12 sub byte ptr [r12], dil
#define SUB_DIL_TO_PTR_R13 sub byte ptr [r13], dil
#define SUB_DIL_TO_PTR_R14 sub byte ptr [r14], dil
#define SUB_DIL_TO_PTR_R15 sub byte ptr [r15], dil
#define SUB_DIL_TO_PTR_EAX sub byte ptr [eax], dil
#define SUB_DIL_TO_PTR_EBX sub byte ptr [ebx], dil
#define SUB_DIL_TO_PTR_ECX sub byte ptr [ecx], dil
#define SUB_DIL_TO_PTR_EDX sub byte ptr [edx], dil
#define SUB_DIL_TO_PTR_EDI sub byte ptr [edi], dil
#define SUB_DIL_TO_PTR_ESI sub byte ptr [esi], dil
#define SUB_DIL_TO_PTR_EBP sub byte ptr [ebp], dil
#define SUB_DIL_TO_PTR_ESP sub byte ptr [esp], dil

#define SUB_SIL_TO_PTR_RAX sub byte ptr [rax], sil
#define SUB_SIL_TO_PTR_RBX sub byte ptr [rbx], sil
#define SUB_SIL_TO_PTR_RCX sub byte ptr [rcx], sil
#define SUB_SIL_TO_PTR_RDX sub byte ptr [rdx], sil
#define SUB_SIL_TO_PTR_RDI sub byte ptr [rdi], sil
#define SUB_SIL_TO_PTR_RSI sub byte ptr [rsi], sil
#define SUB_SIL_TO_PTR_RBP sub byte ptr [rbp], sil
#define SUB_SIL_TO_PTR_RSP sub byte ptr [rsp], sil
#define SUB_SIL_TO_PTR_R8 sub byte ptr [r8], sil
#define SUB_SIL_TO_PTR_R9 sub byte ptr [r9], sil
#define SUB_SIL_TO_PTR_R10 sub byte ptr [r10], sil
#define SUB_SIL_TO_PTR_R11 sub byte ptr [r11], sil
#define SUB_SIL_TO_PTR_R12 sub byte ptr [r12], sil
#define SUB_SIL_TO_PTR_R13 sub byte ptr [r13], sil
#define SUB_SIL_TO_PTR_R14 sub byte ptr [r14], sil
#define SUB_SIL_TO_PTR_R15 sub byte ptr [r15], sil
#define SUB_SIL_TO_PTR_EAX sub byte ptr [eax], sil
#define SUB_SIL_TO_PTR_EBX sub byte ptr [ebx], sil
#define SUB_SIL_TO_PTR_ECX sub byte ptr [ecx], sil
#define SUB_SIL_TO_PTR_EDX sub byte ptr [edx], sil
#define SUB_SIL_TO_PTR_EDI sub byte ptr [edi], sil
#define SUB_SIL_TO_PTR_ESI sub byte ptr [esi], sil
#define SUB_SIL_TO_PTR_EBP sub byte ptr [ebp], sil
#define SUB_SIL_TO_PTR_ESP sub byte ptr [esp], sil

#define SUB_BPL_TO_PTR_RAX sub byte ptr [rax], bpl
#define SUB_BPL_TO_PTR_RBX sub byte ptr [rbx], bpl
#define SUB_BPL_TO_PTR_RCX sub byte ptr [rcx], bpl
#define SUB_BPL_TO_PTR_RDX sub byte ptr [rdx], bpl
#define SUB_BPL_TO_PTR_RDI sub byte ptr [rdi], bpl
#define SUB_BPL_TO_PTR_RSI sub byte ptr [rsi], bpl
#define SUB_BPL_TO_PTR_RBP sub byte ptr [rbp], bpl
#define SUB_BPL_TO_PTR_RSP sub byte ptr [rsp], bpl
#define SUB_BPL_TO_PTR_R8 sub byte ptr [r8], bpl
#define SUB_BPL_TO_PTR_R9 sub byte ptr [r9], bpl
#define SUB_BPL_TO_PTR_R10 sub byte ptr [r10], bpl
#define SUB_BPL_TO_PTR_R11 sub byte ptr [r11], bpl
#define SUB_BPL_TO_PTR_R12 sub byte ptr [r12], bpl
#define SUB_BPL_TO_PTR_R13 sub byte ptr [r13], bpl
#define SUB_BPL_TO_PTR_R14 sub byte ptr [r14], bpl
#define SUB_BPL_TO_PTR_R15 sub byte ptr [r15], bpl
#define SUB_BPL_TO_PTR_EAX sub byte ptr [eax], bpl
#define SUB_BPL_TO_PTR_EBX sub byte ptr [ebx], bpl
#define SUB_BPL_TO_PTR_ECX sub byte ptr [ecx], bpl
#define SUB_BPL_TO_PTR_EDX sub byte ptr [edx], bpl
#define SUB_BPL_TO_PTR_EDI sub byte ptr [edi], bpl
#define SUB_BPL_TO_PTR_ESI sub byte ptr [esi], bpl
#define SUB_BPL_TO_PTR_EBP sub byte ptr [ebp], bpl
#define SUB_BPL_TO_PTR_ESP sub byte ptr [esp], bpl

#define SUB_SPL_TO_PTR_RAX sub byte ptr [rax], spl
#define SUB_SPL_TO_PTR_RBX sub byte ptr [rbx], spl
#define SUB_SPL_TO_PTR_RCX sub byte ptr [rcx], spl
#define SUB_SPL_TO_PTR_RDX sub byte ptr [rdx], spl
#define SUB_SPL_TO_PTR_RDI sub byte ptr [rdi], spl
#define SUB_SPL_TO_PTR_RSI sub byte ptr [rsi], spl
#define SUB_SPL_TO_PTR_RBP sub byte ptr [rbp], spl
#define SUB_SPL_TO_PTR_RSP sub byte ptr [rsp], spl
#define SUB_SPL_TO_PTR_R8 sub byte ptr [r8], spl
#define SUB_SPL_TO_PTR_R9 sub byte ptr [r9], spl
#define SUB_SPL_TO_PTR_R10 sub byte ptr [r10], spl
#define SUB_SPL_TO_PTR_R11 sub byte ptr [r11], spl
#define SUB_SPL_TO_PTR_R12 sub byte ptr [r12], spl
#define SUB_SPL_TO_PTR_R13 sub byte ptr [r13], spl
#define SUB_SPL_TO_PTR_R14 sub byte ptr [r14], spl
#define SUB_SPL_TO_PTR_R15 sub byte ptr [r15], spl
#define SUB_SPL_TO_PTR_EAX sub byte ptr [eax], spl
#define SUB_SPL_TO_PTR_EBX sub byte ptr [ebx], spl
#define SUB_SPL_TO_PTR_ECX sub byte ptr [ecx], spl
#define SUB_SPL_TO_PTR_EDX sub byte ptr [edx], spl
#define SUB_SPL_TO_PTR_EDI sub byte ptr [edi], spl
#define SUB_SPL_TO_PTR_ESI sub byte ptr [esi], spl
#define SUB_SPL_TO_PTR_EBP sub byte ptr [ebp], spl
#define SUB_SPL_TO_PTR_ESP sub byte ptr [esp], spl

#define SUB_R8B_TO_PTR_RAX sub byte ptr [rax], r8b
#define SUB_R8B_TO_PTR_RBX sub byte ptr [rbx], r8b
#define SUB_R8B_TO_PTR_RCX sub byte ptr [rcx], r8b
#define SUB_R8B_TO_PTR_RDX sub byte ptr [rdx], r8b
#define SUB_R8B_TO_PTR_RDI sub byte ptr [rdi], r8b
#define SUB_R8B_TO_PTR_RSI sub byte ptr [rsi], r8b
#define SUB_R8B_TO_PTR_RBP sub byte ptr [rbp], r8b
#define SUB_R8B_TO_PTR_RSP sub byte ptr [rsp], r8b
#define SUB_R8B_TO_PTR_R8 sub byte ptr [r8], r8b
#define SUB_R8B_TO_PTR_R9 sub byte ptr [r9], r8b
#define SUB_R8B_TO_PTR_R10 sub byte ptr [r10], r8b
#define SUB_R8B_TO_PTR_R11 sub byte ptr [r11], r8b
#define SUB_R8B_TO_PTR_R12 sub byte ptr [r12], r8b
#define SUB_R8B_TO_PTR_R13 sub byte ptr [r13], r8b
#define SUB_R8B_TO_PTR_R14 sub byte ptr [r14], r8b
#define SUB_R8B_TO_PTR_R15 sub byte ptr [r15], r8b
#define SUB_R8B_TO_PTR_EAX sub byte ptr [eax], r8b
#define SUB_R8B_TO_PTR_EBX sub byte ptr [ebx], r8b
#define SUB_R8B_TO_PTR_ECX sub byte ptr [ecx], r8b
#define SUB_R8B_TO_PTR_EDX sub byte ptr [edx], r8b
#define SUB_R8B_TO_PTR_EDI sub byte ptr [edi], r8b
#define SUB_R8B_TO_PTR_ESI sub byte ptr [esi], r8b
#define SUB_R8B_TO_PTR_EBP sub byte ptr [ebp], r8b
#define SUB_R8B_TO_PTR_ESP sub byte ptr [esp], r8b

#define SUB_R9B_TO_PTR_RAX sub byte ptr [rax], r9b
#define SUB_R9B_TO_PTR_RBX sub byte ptr [rbx], r9b
#define SUB_R9B_TO_PTR_RCX sub byte ptr [rcx], r9b
#define SUB_R9B_TO_PTR_RDX sub byte ptr [rdx], r9b
#define SUB_R9B_TO_PTR_RDI sub byte ptr [rdi], r9b
#define SUB_R9B_TO_PTR_RSI sub byte ptr [rsi], r9b
#define SUB_R9B_TO_PTR_RBP sub byte ptr [rbp], r9b
#define SUB_R9B_TO_PTR_RSP sub byte ptr [rsp], r9b
#define SUB_R9B_TO_PTR_R8 sub byte ptr [r8], r9b
#define SUB_R9B_TO_PTR_R9 sub byte ptr [r9], r9b
#define SUB_R9B_TO_PTR_R10 sub byte ptr [r10], r9b
#define SUB_R9B_TO_PTR_R11 sub byte ptr [r11], r9b
#define SUB_R9B_TO_PTR_R12 sub byte ptr [r12], r9b
#define SUB_R9B_TO_PTR_R13 sub byte ptr [r13], r9b
#define SUB_R9B_TO_PTR_R14 sub byte ptr [r14], r9b
#define SUB_R9B_TO_PTR_R15 sub byte ptr [r15], r9b
#define SUB_R9B_TO_PTR_EAX sub byte ptr [eax], r9b
#define SUB_R9B_TO_PTR_EBX sub byte ptr [ebx], r9b
#define SUB_R9B_TO_PTR_ECX sub byte ptr [ecx], r9b
#define SUB_R9B_TO_PTR_EDX sub byte ptr [edx], r9b
#define SUB_R9B_TO_PTR_EDI sub byte ptr [edi], r9b
#define SUB_R9B_TO_PTR_ESI sub byte ptr [esi], r9b
#define SUB_R9B_TO_PTR_EBP sub byte ptr [ebp], r9b
#define SUB_R9B_TO_PTR_ESP sub byte ptr [esp], r9b

#define SUB_R10B_TO_PTR_RAX sub byte ptr [rax], r10b
#define SUB_R10B_TO_PTR_RBX sub byte ptr [rbx], r10b
#define SUB_R10B_TO_PTR_RCX sub byte ptr [rcx], r10b
#define SUB_R10B_TO_PTR_RDX sub byte ptr [rdx], r10b
#define SUB_R10B_TO_PTR_RDI sub byte ptr [rdi], r10b
#define SUB_R10B_TO_PTR_RSI sub byte ptr [rsi], r10b
#define SUB_R10B_TO_PTR_RBP sub byte ptr [rbp], r10b
#define SUB_R10B_TO_PTR_RSP sub byte ptr [rsp], r10b
#define SUB_R10B_TO_PTR_R8 sub byte ptr [r8], r10b
#define SUB_R10B_TO_PTR_R9 sub byte ptr [r9], r10b
#define SUB_R10B_TO_PTR_R10 sub byte ptr [r10], r10b
#define SUB_R10B_TO_PTR_R11 sub byte ptr [r11], r10b
#define SUB_R10B_TO_PTR_R12 sub byte ptr [r12], r10b
#define SUB_R10B_TO_PTR_R13 sub byte ptr [r13], r10b
#define SUB_R10B_TO_PTR_R14 sub byte ptr [r14], r10b
#define SUB_R10B_TO_PTR_R15 sub byte ptr [r15], r10b
#define SUB_R10B_TO_PTR_EAX sub byte ptr [eax], r10b
#define SUB_R10B_TO_PTR_EBX sub byte ptr [ebx], r10b
#define SUB_R10B_TO_PTR_ECX sub byte ptr [ecx], r10b
#define SUB_R10B_TO_PTR_EDX sub byte ptr [edx], r10b
#define SUB_R10B_TO_PTR_EDI sub byte ptr [edi], r10b
#define SUB_R10B_TO_PTR_ESI sub byte ptr [esi], r10b
#define SUB_R10B_TO_PTR_EBP sub byte ptr [ebp], r10b
#define SUB_R10B_TO_PTR_ESP sub byte ptr [esp], r10b

#define SUB_R11B_TO_PTR_RAX sub byte ptr [rax], r11b
#define SUB_R11B_TO_PTR_RBX sub byte ptr [rbx], r11b
#define SUB_R11B_TO_PTR_RCX sub byte ptr [rcx], r11b
#define SUB_R11B_TO_PTR_RDX sub byte ptr [rdx], r11b
#define SUB_R11B_TO_PTR_RDI sub byte ptr [rdi], r11b
#define SUB_R11B_TO_PTR_RSI sub byte ptr [rsi], r11b
#define SUB_R11B_TO_PTR_RBP sub byte ptr [rbp], r11b
#define SUB_R11B_TO_PTR_RSP sub byte ptr [rsp], r11b
#define SUB_R11B_TO_PTR_R8 sub byte ptr [r8], r11b
#define SUB_R11B_TO_PTR_R9 sub byte ptr [r9], r11b
#define SUB_R11B_TO_PTR_R10 sub byte ptr [r10], r11b
#define SUB_R11B_TO_PTR_R11 sub byte ptr [r11], r11b
#define SUB_R11B_TO_PTR_R12 sub byte ptr [r12], r11b
#define SUB_R11B_TO_PTR_R13 sub byte ptr [r13], r11b
#define SUB_R11B_TO_PTR_R14 sub byte ptr [r14], r11b
#define SUB_R11B_TO_PTR_R15 sub byte ptr [r15], r11b
#define SUB_R11B_TO_PTR_EAX sub byte ptr [eax], r11b
#define SUB_R11B_TO_PTR_EBX sub byte ptr [ebx], r11b
#define SUB_R11B_TO_PTR_ECX sub byte ptr [ecx], r11b
#define SUB_R11B_TO_PTR_EDX sub byte ptr [edx], r11b
#define SUB_R11B_TO_PTR_EDI sub byte ptr [edi], r11b
#define SUB_R11B_TO_PTR_ESI sub byte ptr [esi], r11b
#define SUB_R11B_TO_PTR_EBP sub byte ptr [ebp], r11b
#define SUB_R11B_TO_PTR_ESP sub byte ptr [esp], r11b

#define SUB_R12B_TO_PTR_RAX sub byte ptr [rax], r12b
#define SUB_R12B_TO_PTR_RBX sub byte ptr [rbx], r12b
#define SUB_R12B_TO_PTR_RCX sub byte ptr [rcx], r12b
#define SUB_R12B_TO_PTR_RDX sub byte ptr [rdx], r12b
#define SUB_R12B_TO_PTR_RDI sub byte ptr [rdi], r12b
#define SUB_R12B_TO_PTR_RSI sub byte ptr [rsi], r12b
#define SUB_R12B_TO_PTR_RBP sub byte ptr [rbp], r12b
#define SUB_R12B_TO_PTR_RSP sub byte ptr [rsp], r12b
#define SUB_R12B_TO_PTR_R8 sub byte ptr [r8], r12b
#define SUB_R12B_TO_PTR_R9 sub byte ptr [r9], r12b
#define SUB_R12B_TO_PTR_R10 sub byte ptr [r10], r12b
#define SUB_R12B_TO_PTR_R11 sub byte ptr [r11], r12b
#define SUB_R12B_TO_PTR_R12 sub byte ptr [r12], r12b
#define SUB_R12B_TO_PTR_R13 sub byte ptr [r13], r12b
#define SUB_R12B_TO_PTR_R14 sub byte ptr [r14], r12b
#define SUB_R12B_TO_PTR_R15 sub byte ptr [r15], r12b
#define SUB_R12B_TO_PTR_EAX sub byte ptr [eax], r12b
#define SUB_R12B_TO_PTR_EBX sub byte ptr [ebx], r12b
#define SUB_R12B_TO_PTR_ECX sub byte ptr [ecx], r12b
#define SUB_R12B_TO_PTR_EDX sub byte ptr [edx], r12b
#define SUB_R12B_TO_PTR_EDI sub byte ptr [edi], r12b
#define SUB_R12B_TO_PTR_ESI sub byte ptr [esi], r12b
#define SUB_R12B_TO_PTR_EBP sub byte ptr [ebp], r12b
#define SUB_R12B_TO_PTR_ESP sub byte ptr [esp], r12b

#define SUB_R13B_TO_PTR_RAX sub byte ptr [rax], r13b
#define SUB_R13B_TO_PTR_RBX sub byte ptr [rbx], r13b
#define SUB_R13B_TO_PTR_RCX sub byte ptr [rcx], r13b
#define SUB_R13B_TO_PTR_RDX sub byte ptr [rdx], r13b
#define SUB_R13B_TO_PTR_RDI sub byte ptr [rdi], r13b
#define SUB_R13B_TO_PTR_RSI sub byte ptr [rsi], r13b
#define SUB_R13B_TO_PTR_RBP sub byte ptr [rbp], r13b
#define SUB_R13B_TO_PTR_RSP sub byte ptr [rsp], r13b
#define SUB_R13B_TO_PTR_R8 sub byte ptr [r8], r13b
#define SUB_R13B_TO_PTR_R9 sub byte ptr [r9], r13b
#define SUB_R13B_TO_PTR_R10 sub byte ptr [r10], r13b
#define SUB_R13B_TO_PTR_R11 sub byte ptr [r11], r13b
#define SUB_R13B_TO_PTR_R12 sub byte ptr [r12], r13b
#define SUB_R13B_TO_PTR_R13 sub byte ptr [r13], r13b
#define SUB_R13B_TO_PTR_R14 sub byte ptr [r14], r13b
#define SUB_R13B_TO_PTR_R15 sub byte ptr [r15], r13b
#define SUB_R13B_TO_PTR_EAX sub byte ptr [eax], r13b
#define SUB_R13B_TO_PTR_EBX sub byte ptr [ebx], r13b
#define SUB_R13B_TO_PTR_ECX sub byte ptr [ecx], r13b
#define SUB_R13B_TO_PTR_EDX sub byte ptr [edx], r13b
#define SUB_R13B_TO_PTR_EDI sub byte ptr [edi], r13b
#define SUB_R13B_TO_PTR_ESI sub byte ptr [esi], r13b
#define SUB_R13B_TO_PTR_EBP sub byte ptr [ebp], r13b
#define SUB_R13B_TO_PTR_ESP sub byte ptr [esp], r13b

#define SUB_R14B_TO_PTR_RAX sub byte ptr [rax], r14b
#define SUB_R14B_TO_PTR_RBX sub byte ptr [rbx], r14b
#define SUB_R14B_TO_PTR_RCX sub byte ptr [rcx], r14b
#define SUB_R14B_TO_PTR_RDX sub byte ptr [rdx], r14b
#define SUB_R14B_TO_PTR_RDI sub byte ptr [rdi], r14b
#define SUB_R14B_TO_PTR_RSI sub byte ptr [rsi], r14b
#define SUB_R14B_TO_PTR_RBP sub byte ptr [rbp], r14b
#define SUB_R14B_TO_PTR_RSP sub byte ptr [rsp], r14b
#define SUB_R14B_TO_PTR_R8 sub byte ptr [r8], r14b
#define SUB_R14B_TO_PTR_R9 sub byte ptr [r9], r14b
#define SUB_R14B_TO_PTR_R10 sub byte ptr [r10], r14b
#define SUB_R14B_TO_PTR_R11 sub byte ptr [r11], r14b
#define SUB_R14B_TO_PTR_R12 sub byte ptr [r12], r14b
#define SUB_R14B_TO_PTR_R13 sub byte ptr [r13], r14b
#define SUB_R14B_TO_PTR_R14 sub byte ptr [r14], r14b
#define SUB_R14B_TO_PTR_R15 sub byte ptr [r15], r14b
#define SUB_R14B_TO_PTR_EAX sub byte ptr [eax], r14b
#define SUB_R14B_TO_PTR_EBX sub byte ptr [ebx], r14b
#define SUB_R14B_TO_PTR_ECX sub byte ptr [ecx], r14b
#define SUB_R14B_TO_PTR_EDX sub byte ptr [edx], r14b
#define SUB_R14B_TO_PTR_EDI sub byte ptr [edi], r14b
#define SUB_R14B_TO_PTR_ESI sub byte ptr [esi], r14b
#define SUB_R14B_TO_PTR_EBP sub byte ptr [ebp], r14b
#define SUB_R14B_TO_PTR_ESP sub byte ptr [esp], r14b

#define SUB_R15B_TO_PTR_RAX sub byte ptr [rax], r15b
#define SUB_R15B_TO_PTR_RBX sub byte ptr [rbx], r15b
#define SUB_R15B_TO_PTR_RCX sub byte ptr [rcx], r15b
#define SUB_R15B_TO_PTR_RDX sub byte ptr [rdx], r15b
#define SUB_R15B_TO_PTR_RDI sub byte ptr [rdi], r15b
#define SUB_R15B_TO_PTR_RSI sub byte ptr [rsi], r15b
#define SUB_R15B_TO_PTR_RBP sub byte ptr [rbp], r15b
#define SUB_R15B_TO_PTR_RSP sub byte ptr [rsp], r15b
#define SUB_R15B_TO_PTR_R8 sub byte ptr [r8], r15b
#define SUB_R15B_TO_PTR_R9 sub byte ptr [r9], r15b
#define SUB_R15B_TO_PTR_R10 sub byte ptr [r10], r15b
#define SUB_R15B_TO_PTR_R11 sub byte ptr [r11], r15b
#define SUB_R15B_TO_PTR_R12 sub byte ptr [r12], r15b
#define SUB_R15B_TO_PTR_R13 sub byte ptr [r13], r15b
#define SUB_R15B_TO_PTR_R14 sub byte ptr [r14], r15b
#define SUB_R15B_TO_PTR_R15 sub byte ptr [r15], r15b
#define SUB_R15B_TO_PTR_EAX sub byte ptr [eax], r15b
#define SUB_R15B_TO_PTR_EBX sub byte ptr [ebx], r15b
#define SUB_R15B_TO_PTR_ECX sub byte ptr [ecx], r15b
#define SUB_R15B_TO_PTR_EDX sub byte ptr [edx], r15b
#define SUB_R15B_TO_PTR_EDI sub byte ptr [edi], r15b
#define SUB_R15B_TO_PTR_ESI sub byte ptr [esi], r15b
#define SUB_R15B_TO_PTR_EBP sub byte ptr [ebp], r15b
#define SUB_R15B_TO_PTR_ESP sub byte ptr [esp], r15b

#define SUB_AL_FROM_PTR_RAX_(VALUE) sub al, byte ptr [rax + VALUE]
#define SUB_AL_FROM_PTR_RBX_(VALUE) sub al, byte ptr [rbx + VALUE]
#define SUB_AL_FROM_PTR_RCX_(VALUE) sub al, byte ptr [rcx + VALUE]
#define SUB_AL_FROM_PTR_RDX_(VALUE) sub al, byte ptr [rdx + VALUE]
#define SUB_AL_FROM_PTR_RDI_(VALUE) sub al, byte ptr [rdi + VALUE]
#define SUB_AL_FROM_PTR_RSI_(VALUE) sub al, byte ptr [rsi + VALUE]
#define SUB_AL_FROM_PTR_RBP_(VALUE) sub al, byte ptr [rbp + VALUE]
#define SUB_AL_FROM_PTR_RSP_(VALUE) sub al, byte ptr [rsp + VALUE]
#define SUB_AL_FROM_PTR_R8_(VALUE) sub al, byte ptr [r8 + VALUE]
#define SUB_AL_FROM_PTR_R9_(VALUE) sub al, byte ptr [r9 + VALUE]
#define SUB_AL_FROM_PTR_R10_(VALUE) sub al, byte ptr [r10 + VALUE]
#define SUB_AL_FROM_PTR_R11_(VALUE) sub al, byte ptr [r11 + VALUE]
#define SUB_AL_FROM_PTR_R12_(VALUE) sub al, byte ptr [r12 + VALUE]
#define SUB_AL_FROM_PTR_R13_(VALUE) sub al, byte ptr [r13 + VALUE]
#define SUB_AL_FROM_PTR_R14_(VALUE) sub al, byte ptr [r14 + VALUE]
#define SUB_AL_FROM_PTR_R15_(VALUE) sub al, byte ptr [r15 + VALUE]
#define SUB_AL_FROM_PTR_EAX_(VALUE) sub al, byte ptr [eax + VALUE]
#define SUB_AL_FROM_PTR_EBX_(VALUE) sub al, byte ptr [ebx + VALUE]
#define SUB_AL_FROM_PTR_ECX_(VALUE) sub al, byte ptr [ecx + VALUE]
#define SUB_AL_FROM_PTR_EDX_(VALUE) sub al, byte ptr [edx + VALUE]
#define SUB_AL_FROM_PTR_EDI_(VALUE) sub al, byte ptr [edi + VALUE]
#define SUB_AL_FROM_PTR_ESI_(VALUE) sub al, byte ptr [esi + VALUE]
#define SUB_AL_FROM_PTR_EBP_(VALUE) sub al, byte ptr [ebp + VALUE]
#define SUB_AL_FROM_PTR_ESP_(VALUE) sub al, byte ptr [esp + VALUE]

#define SUB_BL_FROM_PTR_RAX_(VALUE) sub bl, byte ptr [rax + VALUE]
#define SUB_BL_FROM_PTR_RBX_(VALUE) sub bl, byte ptr [rbx + VALUE]
#define SUB_BL_FROM_PTR_RCX_(VALUE) sub bl, byte ptr [rcx + VALUE]
#define SUB_BL_FROM_PTR_RDX_(VALUE) sub bl, byte ptr [rdx + VALUE]
#define SUB_BL_FROM_PTR_RDI_(VALUE) sub bl, byte ptr [rdi + VALUE]
#define SUB_BL_FROM_PTR_RSI_(VALUE) sub bl, byte ptr [rsi + VALUE]
#define SUB_BL_FROM_PTR_RBP_(VALUE) sub bl, byte ptr [rbp + VALUE]
#define SUB_BL_FROM_PTR_RSP_(VALUE) sub bl, byte ptr [rsp + VALUE]
#define SUB_BL_FROM_PTR_R8_(VALUE) sub bl, byte ptr [r8 + VALUE]
#define SUB_BL_FROM_PTR_R9_(VALUE) sub bl, byte ptr [r9 + VALUE]
#define SUB_BL_FROM_PTR_R10_(VALUE) sub bl, byte ptr [r10 + VALUE]
#define SUB_BL_FROM_PTR_R11_(VALUE) sub bl, byte ptr [r11 + VALUE]
#define SUB_BL_FROM_PTR_R12_(VALUE) sub bl, byte ptr [r12 + VALUE]
#define SUB_BL_FROM_PTR_R13_(VALUE) sub bl, byte ptr [r13 + VALUE]
#define SUB_BL_FROM_PTR_R14_(VALUE) sub bl, byte ptr [r14 + VALUE]
#define SUB_BL_FROM_PTR_R15_(VALUE) sub bl, byte ptr [r15 + VALUE]
#define SUB_BL_FROM_PTR_EAX_(VALUE) sub bl, byte ptr [eax + VALUE]
#define SUB_BL_FROM_PTR_EBX_(VALUE) sub bl, byte ptr [ebx + VALUE]
#define SUB_BL_FROM_PTR_ECX_(VALUE) sub bl, byte ptr [ecx + VALUE]
#define SUB_BL_FROM_PTR_EDX_(VALUE) sub bl, byte ptr [edx + VALUE]
#define SUB_BL_FROM_PTR_EDI_(VALUE) sub bl, byte ptr [edi + VALUE]
#define SUB_BL_FROM_PTR_ESI_(VALUE) sub bl, byte ptr [esi + VALUE]
#define SUB_BL_FROM_PTR_EBP_(VALUE) sub bl, byte ptr [ebp + VALUE]
#define SUB_BL_FROM_PTR_ESP_(VALUE) sub bl, byte ptr [esp + VALUE]

#define SUB_CL_FROM_PTR_RAX_(VALUE) sub cl, byte ptr [rax + VALUE]
#define SUB_CL_FROM_PTR_RBX_(VALUE) sub cl, byte ptr [rbx + VALUE]
#define SUB_CL_FROM_PTR_RCX_(VALUE) sub cl, byte ptr [rcx + VALUE]
#define SUB_CL_FROM_PTR_RDX_(VALUE) sub cl, byte ptr [rdx + VALUE]
#define SUB_CL_FROM_PTR_RDI_(VALUE) sub cl, byte ptr [rdi + VALUE]
#define SUB_CL_FROM_PTR_RSI_(VALUE) sub cl, byte ptr [rsi + VALUE]
#define SUB_CL_FROM_PTR_RBP_(VALUE) sub cl, byte ptr [rbp + VALUE]
#define SUB_CL_FROM_PTR_RSP_(VALUE) sub cl, byte ptr [rsp + VALUE]
#define SUB_CL_FROM_PTR_R8_(VALUE) sub cl, byte ptr [r8 + VALUE]
#define SUB_CL_FROM_PTR_R9_(VALUE) sub cl, byte ptr [r9 + VALUE]
#define SUB_CL_FROM_PTR_R10_(VALUE) sub cl, byte ptr [r10 + VALUE]
#define SUB_CL_FROM_PTR_R11_(VALUE) sub cl, byte ptr [r11 + VALUE]
#define SUB_CL_FROM_PTR_R12_(VALUE) sub cl, byte ptr [r12 + VALUE]
#define SUB_CL_FROM_PTR_R13_(VALUE) sub cl, byte ptr [r13 + VALUE]
#define SUB_CL_FROM_PTR_R14_(VALUE) sub cl, byte ptr [r14 + VALUE]
#define SUB_CL_FROM_PTR_R15_(VALUE) sub cl, byte ptr [r15 + VALUE]
#define SUB_CL_FROM_PTR_EAX_(VALUE) sub cl, byte ptr [eax + VALUE]
#define SUB_CL_FROM_PTR_EBX_(VALUE) sub cl, byte ptr [ebx + VALUE]
#define SUB_CL_FROM_PTR_ECX_(VALUE) sub cl, byte ptr [ecx + VALUE]
#define SUB_CL_FROM_PTR_EDX_(VALUE) sub cl, byte ptr [edx + VALUE]
#define SUB_CL_FROM_PTR_EDI_(VALUE) sub cl, byte ptr [edi + VALUE]
#define SUB_CL_FROM_PTR_ESI_(VALUE) sub cl, byte ptr [esi + VALUE]
#define SUB_CL_FROM_PTR_EBP_(VALUE) sub cl, byte ptr [ebp + VALUE]
#define SUB_CL_FROM_PTR_ESP_(VALUE) sub cl, byte ptr [esp + VALUE]

#define SUB_DL_FROM_PTR_RAX_(VALUE) sub dl, byte ptr [rax + VALUE]
#define SUB_DL_FROM_PTR_RBX_(VALUE) sub dl, byte ptr [rbx + VALUE]
#define SUB_DL_FROM_PTR_RCX_(VALUE) sub dl, byte ptr [rcx + VALUE]
#define SUB_DL_FROM_PTR_RDX_(VALUE) sub dl, byte ptr [rdx + VALUE]
#define SUB_DL_FROM_PTR_RDI_(VALUE) sub dl, byte ptr [rdi + VALUE]
#define SUB_DL_FROM_PTR_RSI_(VALUE) sub dl, byte ptr [rsi + VALUE]
#define SUB_DL_FROM_PTR_RBP_(VALUE) sub dl, byte ptr [rbp + VALUE]
#define SUB_DL_FROM_PTR_RSP_(VALUE) sub dl, byte ptr [rsp + VALUE]
#define SUB_DL_FROM_PTR_R8_(VALUE) sub dl, byte ptr [r8 + VALUE]
#define SUB_DL_FROM_PTR_R9_(VALUE) sub dl, byte ptr [r9 + VALUE]
#define SUB_DL_FROM_PTR_R10_(VALUE) sub dl, byte ptr [r10 + VALUE]
#define SUB_DL_FROM_PTR_R11_(VALUE) sub dl, byte ptr [r11 + VALUE]
#define SUB_DL_FROM_PTR_R12_(VALUE) sub dl, byte ptr [r12 + VALUE]
#define SUB_DL_FROM_PTR_R13_(VALUE) sub dl, byte ptr [r13 + VALUE]
#define SUB_DL_FROM_PTR_R14_(VALUE) sub dl, byte ptr [r14 + VALUE]
#define SUB_DL_FROM_PTR_R15_(VALUE) sub dl, byte ptr [r15 + VALUE]
#define SUB_DL_FROM_PTR_EAX_(VALUE) sub dl, byte ptr [eax + VALUE]
#define SUB_DL_FROM_PTR_EBX_(VALUE) sub dl, byte ptr [ebx + VALUE]
#define SUB_DL_FROM_PTR_ECX_(VALUE) sub dl, byte ptr [ecx + VALUE]
#define SUB_DL_FROM_PTR_EDX_(VALUE) sub dl, byte ptr [edx + VALUE]
#define SUB_DL_FROM_PTR_EDI_(VALUE) sub dl, byte ptr [edi + VALUE]
#define SUB_DL_FROM_PTR_ESI_(VALUE) sub dl, byte ptr [esi + VALUE]
#define SUB_DL_FROM_PTR_EBP_(VALUE) sub dl, byte ptr [ebp + VALUE]
#define SUB_DL_FROM_PTR_ESP_(VALUE) sub dl, byte ptr [esp + VALUE]

#define SUB_DIL_FROM_PTR_RAX_(VALUE) sub dil, byte ptr [rax + VALUE]
#define SUB_DIL_FROM_PTR_RBX_(VALUE) sub dil, byte ptr [rbx + VALUE]
#define SUB_DIL_FROM_PTR_RCX_(VALUE) sub dil, byte ptr [rcx + VALUE]
#define SUB_DIL_FROM_PTR_RDX_(VALUE) sub dil, byte ptr [rdx + VALUE]
#define SUB_DIL_FROM_PTR_RDI_(VALUE) sub dil, byte ptr [rdi + VALUE]
#define SUB_DIL_FROM_PTR_RSI_(VALUE) sub dil, byte ptr [rsi + VALUE]
#define SUB_DIL_FROM_PTR_RBP_(VALUE) sub dil, byte ptr [rbp + VALUE]
#define SUB_DIL_FROM_PTR_RSP_(VALUE) sub dil, byte ptr [rsp + VALUE]
#define SUB_DIL_FROM_PTR_R8_(VALUE) sub dil, byte ptr [r8 + VALUE]
#define SUB_DIL_FROM_PTR_R9_(VALUE) sub dil, byte ptr [r9 + VALUE]
#define SUB_DIL_FROM_PTR_R10_(VALUE) sub dil, byte ptr [r10 + VALUE]
#define SUB_DIL_FROM_PTR_R11_(VALUE) sub dil, byte ptr [r11 + VALUE]
#define SUB_DIL_FROM_PTR_R12_(VALUE) sub dil, byte ptr [r12 + VALUE]
#define SUB_DIL_FROM_PTR_R13_(VALUE) sub dil, byte ptr [r13 + VALUE]
#define SUB_DIL_FROM_PTR_R14_(VALUE) sub dil, byte ptr [r14 + VALUE]
#define SUB_DIL_FROM_PTR_R15_(VALUE) sub dil, byte ptr [r15 + VALUE]
#define SUB_DIL_FROM_PTR_EAX_(VALUE) sub dil, byte ptr [eax + VALUE]
#define SUB_DIL_FROM_PTR_EBX_(VALUE) sub dil, byte ptr [ebx + VALUE]
#define SUB_DIL_FROM_PTR_ECX_(VALUE) sub dil, byte ptr [ecx + VALUE]
#define SUB_DIL_FROM_PTR_EDX_(VALUE) sub dil, byte ptr [edx + VALUE]
#define SUB_DIL_FROM_PTR_EDI_(VALUE) sub dil, byte ptr [edi + VALUE]
#define SUB_DIL_FROM_PTR_ESI_(VALUE) sub dil, byte ptr [esi + VALUE]
#define SUB_DIL_FROM_PTR_EBP_(VALUE) sub dil, byte ptr [ebp + VALUE]
#define SUB_DIL_FROM_PTR_ESP_(VALUE) sub dil, byte ptr [esp + VALUE]

#define SUB_SIL_FROM_PTR_RAX_(VALUE) sub sil, byte ptr [rax + VALUE]
#define SUB_SIL_FROM_PTR_RBX_(VALUE) sub sil, byte ptr [rbx + VALUE]
#define SUB_SIL_FROM_PTR_RCX_(VALUE) sub sil, byte ptr [rcx + VALUE]
#define SUB_SIL_FROM_PTR_RDX_(VALUE) sub sil, byte ptr [rdx + VALUE]
#define SUB_SIL_FROM_PTR_RDI_(VALUE) sub sil, byte ptr [rdi + VALUE]
#define SUB_SIL_FROM_PTR_RSI_(VALUE) sub sil, byte ptr [rsi + VALUE]
#define SUB_SIL_FROM_PTR_RBP_(VALUE) sub sil, byte ptr [rbp + VALUE]
#define SUB_SIL_FROM_PTR_RSP_(VALUE) sub sil, byte ptr [rsp + VALUE]
#define SUB_SIL_FROM_PTR_R8_(VALUE) sub sil, byte ptr [r8 + VALUE]
#define SUB_SIL_FROM_PTR_R9_(VALUE) sub sil, byte ptr [r9 + VALUE]
#define SUB_SIL_FROM_PTR_R10_(VALUE) sub sil, byte ptr [r10 + VALUE]
#define SUB_SIL_FROM_PTR_R11_(VALUE) sub sil, byte ptr [r11 + VALUE]
#define SUB_SIL_FROM_PTR_R12_(VALUE) sub sil, byte ptr [r12 + VALUE]
#define SUB_SIL_FROM_PTR_R13_(VALUE) sub sil, byte ptr [r13 + VALUE]
#define SUB_SIL_FROM_PTR_R14_(VALUE) sub sil, byte ptr [r14 + VALUE]
#define SUB_SIL_FROM_PTR_R15_(VALUE) sub sil, byte ptr [r15 + VALUE]
#define SUB_SIL_FROM_PTR_EAX_(VALUE) sub sil, byte ptr [eax + VALUE]
#define SUB_SIL_FROM_PTR_EBX_(VALUE) sub sil, byte ptr [ebx + VALUE]
#define SUB_SIL_FROM_PTR_ECX_(VALUE) sub sil, byte ptr [ecx + VALUE]
#define SUB_SIL_FROM_PTR_EDX_(VALUE) sub sil, byte ptr [edx + VALUE]
#define SUB_SIL_FROM_PTR_EDI_(VALUE) sub sil, byte ptr [edi + VALUE]
#define SUB_SIL_FROM_PTR_ESI_(VALUE) sub sil, byte ptr [esi + VALUE]
#define SUB_SIL_FROM_PTR_EBP_(VALUE) sub sil, byte ptr [ebp + VALUE]
#define SUB_SIL_FROM_PTR_ESP_(VALUE) sub sil, byte ptr [esp + VALUE]

#define SUB_BPL_FROM_PTR_RAX_(VALUE) sub bpl, byte ptr [rax + VALUE]
#define SUB_BPL_FROM_PTR_RBX_(VALUE) sub bpl, byte ptr [rbx + VALUE]
#define SUB_BPL_FROM_PTR_RCX_(VALUE) sub bpl, byte ptr [rcx + VALUE]
#define SUB_BPL_FROM_PTR_RDX_(VALUE) sub bpl, byte ptr [rdx + VALUE]
#define SUB_BPL_FROM_PTR_RDI_(VALUE) sub bpl, byte ptr [rdi + VALUE]
#define SUB_BPL_FROM_PTR_RSI_(VALUE) sub bpl, byte ptr [rsi + VALUE]
#define SUB_BPL_FROM_PTR_RBP_(VALUE) sub bpl, byte ptr [rbp + VALUE]
#define SUB_BPL_FROM_PTR_RSP_(VALUE) sub bpl, byte ptr [rsp + VALUE]
#define SUB_BPL_FROM_PTR_R8_(VALUE) sub bpl, byte ptr [r8 + VALUE]
#define SUB_BPL_FROM_PTR_R9_(VALUE) sub bpl, byte ptr [r9 + VALUE]
#define SUB_BPL_FROM_PTR_R10_(VALUE) sub bpl, byte ptr [r10 + VALUE]
#define SUB_BPL_FROM_PTR_R11_(VALUE) sub bpl, byte ptr [r11 + VALUE]
#define SUB_BPL_FROM_PTR_R12_(VALUE) sub bpl, byte ptr [r12 + VALUE]
#define SUB_BPL_FROM_PTR_R13_(VALUE) sub bpl, byte ptr [r13 + VALUE]
#define SUB_BPL_FROM_PTR_R14_(VALUE) sub bpl, byte ptr [r14 + VALUE]
#define SUB_BPL_FROM_PTR_R15_(VALUE) sub bpl, byte ptr [r15 + VALUE]
#define SUB_BPL_FROM_PTR_EAX_(VALUE) sub bpl, byte ptr [eax + VALUE]
#define SUB_BPL_FROM_PTR_EBX_(VALUE) sub bpl, byte ptr [ebx + VALUE]
#define SUB_BPL_FROM_PTR_ECX_(VALUE) sub bpl, byte ptr [ecx + VALUE]
#define SUB_BPL_FROM_PTR_EDX_(VALUE) sub bpl, byte ptr [edx + VALUE]
#define SUB_BPL_FROM_PTR_EDI_(VALUE) sub bpl, byte ptr [edi + VALUE]
#define SUB_BPL_FROM_PTR_ESI_(VALUE) sub bpl, byte ptr [esi + VALUE]
#define SUB_BPL_FROM_PTR_EBP_(VALUE) sub bpl, byte ptr [ebp + VALUE]
#define SUB_BPL_FROM_PTR_ESP_(VALUE) sub bpl, byte ptr [esp + VALUE]

#define SUB_SPL_FROM_PTR_RAX_(VALUE) sub spl, byte ptr [rax + VALUE]
#define SUB_SPL_FROM_PTR_RBX_(VALUE) sub spl, byte ptr [rbx + VALUE]
#define SUB_SPL_FROM_PTR_RCX_(VALUE) sub spl, byte ptr [rcx + VALUE]
#define SUB_SPL_FROM_PTR_RDX_(VALUE) sub spl, byte ptr [rdx + VALUE]
#define SUB_SPL_FROM_PTR_RDI_(VALUE) sub spl, byte ptr [rdi + VALUE]
#define SUB_SPL_FROM_PTR_RSI_(VALUE) sub spl, byte ptr [rsi + VALUE]
#define SUB_SPL_FROM_PTR_RBP_(VALUE) sub spl, byte ptr [rbp + VALUE]
#define SUB_SPL_FROM_PTR_RSP_(VALUE) sub spl, byte ptr [rsp + VALUE]
#define SUB_SPL_FROM_PTR_R8_(VALUE) sub spl, byte ptr [r8 + VALUE]
#define SUB_SPL_FROM_PTR_R9_(VALUE) sub spl, byte ptr [r9 + VALUE]
#define SUB_SPL_FROM_PTR_R10_(VALUE) sub spl, byte ptr [r10 + VALUE]
#define SUB_SPL_FROM_PTR_R11_(VALUE) sub spl, byte ptr [r11 + VALUE]
#define SUB_SPL_FROM_PTR_R12_(VALUE) sub spl, byte ptr [r12 + VALUE]
#define SUB_SPL_FROM_PTR_R13_(VALUE) sub spl, byte ptr [r13 + VALUE]
#define SUB_SPL_FROM_PTR_R14_(VALUE) sub spl, byte ptr [r14 + VALUE]
#define SUB_SPL_FROM_PTR_R15_(VALUE) sub spl, byte ptr [r15 + VALUE]
#define SUB_SPL_FROM_PTR_EAX_(VALUE) sub spl, byte ptr [eax + VALUE]
#define SUB_SPL_FROM_PTR_EBX_(VALUE) sub spl, byte ptr [ebx + VALUE]
#define SUB_SPL_FROM_PTR_ECX_(VALUE) sub spl, byte ptr [ecx + VALUE]
#define SUB_SPL_FROM_PTR_EDX_(VALUE) sub spl, byte ptr [edx + VALUE]
#define SUB_SPL_FROM_PTR_EDI_(VALUE) sub spl, byte ptr [edi + VALUE]
#define SUB_SPL_FROM_PTR_ESI_(VALUE) sub spl, byte ptr [esi + VALUE]
#define SUB_SPL_FROM_PTR_EBP_(VALUE) sub spl, byte ptr [ebp + VALUE]
#define SUB_SPL_FROM_PTR_ESP_(VALUE) sub spl, byte ptr [esp + VALUE]

#define SUB_R8B_FROM_PTR_RAX_(VALUE) sub r8b, byte ptr [rax + VALUE]
#define SUB_R8B_FROM_PTR_RBX_(VALUE) sub r8b, byte ptr [rbx + VALUE]
#define SUB_R8B_FROM_PTR_RCX_(VALUE) sub r8b, byte ptr [rcx + VALUE]
#define SUB_R8B_FROM_PTR_RDX_(VALUE) sub r8b, byte ptr [rdx + VALUE]
#define SUB_R8B_FROM_PTR_RDI_(VALUE) sub r8b, byte ptr [rdi + VALUE]
#define SUB_R8B_FROM_PTR_RSI_(VALUE) sub r8b, byte ptr [rsi + VALUE]
#define SUB_R8B_FROM_PTR_RBP_(VALUE) sub r8b, byte ptr [rbp + VALUE]
#define SUB_R8B_FROM_PTR_RSP_(VALUE) sub r8b, byte ptr [rsp + VALUE]
#define SUB_R8B_FROM_PTR_R8_(VALUE) sub r8b, byte ptr [r8 + VALUE]
#define SUB_R8B_FROM_PTR_R9_(VALUE) sub r8b, byte ptr [r9 + VALUE]
#define SUB_R8B_FROM_PTR_R10_(VALUE) sub r8b, byte ptr [r10 + VALUE]
#define SUB_R8B_FROM_PTR_R11_(VALUE) sub r8b, byte ptr [r11 + VALUE]
#define SUB_R8B_FROM_PTR_R12_(VALUE) sub r8b, byte ptr [r12 + VALUE]
#define SUB_R8B_FROM_PTR_R13_(VALUE) sub r8b, byte ptr [r13 + VALUE]
#define SUB_R8B_FROM_PTR_R14_(VALUE) sub r8b, byte ptr [r14 + VALUE]
#define SUB_R8B_FROM_PTR_R15_(VALUE) sub r8b, byte ptr [r15 + VALUE]
#define SUB_R8B_FROM_PTR_EAX_(VALUE) sub r8b, byte ptr [eax + VALUE]
#define SUB_R8B_FROM_PTR_EBX_(VALUE) sub r8b, byte ptr [ebx + VALUE]
#define SUB_R8B_FROM_PTR_ECX_(VALUE) sub r8b, byte ptr [ecx + VALUE]
#define SUB_R8B_FROM_PTR_EDX_(VALUE) sub r8b, byte ptr [edx + VALUE]
#define SUB_R8B_FROM_PTR_EDI_(VALUE) sub r8b, byte ptr [edi + VALUE]
#define SUB_R8B_FROM_PTR_ESI_(VALUE) sub r8b, byte ptr [esi + VALUE]
#define SUB_R8B_FROM_PTR_EBP_(VALUE) sub r8b, byte ptr [ebp + VALUE]
#define SUB_R8B_FROM_PTR_ESP_(VALUE) sub r8b, byte ptr [esp + VALUE]

#define SUB_R9B_FROM_PTR_RAX_(VALUE) sub r9b, byte ptr [rax + VALUE]
#define SUB_R9B_FROM_PTR_RBX_(VALUE) sub r9b, byte ptr [rbx + VALUE]
#define SUB_R9B_FROM_PTR_RCX_(VALUE) sub r9b, byte ptr [rcx + VALUE]
#define SUB_R9B_FROM_PTR_RDX_(VALUE) sub r9b, byte ptr [rdx + VALUE]
#define SUB_R9B_FROM_PTR_RDI_(VALUE) sub r9b, byte ptr [rdi + VALUE]
#define SUB_R9B_FROM_PTR_RSI_(VALUE) sub r9b, byte ptr [rsi + VALUE]
#define SUB_R9B_FROM_PTR_RBP_(VALUE) sub r9b, byte ptr [rbp + VALUE]
#define SUB_R9B_FROM_PTR_RSP_(VALUE) sub r9b, byte ptr [rsp + VALUE]
#define SUB_R9B_FROM_PTR_R8_(VALUE) sub r9b, byte ptr [r8 + VALUE]
#define SUB_R9B_FROM_PTR_R9_(VALUE) sub r9b, byte ptr [r9 + VALUE]
#define SUB_R9B_FROM_PTR_R10_(VALUE) sub r9b, byte ptr [r10 + VALUE]
#define SUB_R9B_FROM_PTR_R11_(VALUE) sub r9b, byte ptr [r11 + VALUE]
#define SUB_R9B_FROM_PTR_R12_(VALUE) sub r9b, byte ptr [r12 + VALUE]
#define SUB_R9B_FROM_PTR_R13_(VALUE) sub r9b, byte ptr [r13 + VALUE]
#define SUB_R9B_FROM_PTR_R14_(VALUE) sub r9b, byte ptr [r14 + VALUE]
#define SUB_R9B_FROM_PTR_R15_(VALUE) sub r9b, byte ptr [r15 + VALUE]
#define SUB_R9B_FROM_PTR_EAX_(VALUE) sub r9b, byte ptr [eax + VALUE]
#define SUB_R9B_FROM_PTR_EBX_(VALUE) sub r9b, byte ptr [ebx + VALUE]
#define SUB_R9B_FROM_PTR_ECX_(VALUE) sub r9b, byte ptr [ecx + VALUE]
#define SUB_R9B_FROM_PTR_EDX_(VALUE) sub r9b, byte ptr [edx + VALUE]
#define SUB_R9B_FROM_PTR_EDI_(VALUE) sub r9b, byte ptr [edi + VALUE]
#define SUB_R9B_FROM_PTR_ESI_(VALUE) sub r9b, byte ptr [esi + VALUE]
#define SUB_R9B_FROM_PTR_EBP_(VALUE) sub r9b, byte ptr [ebp + VALUE]
#define SUB_R9B_FROM_PTR_ESP_(VALUE) sub r9b, byte ptr [esp + VALUE]

#define SUB_R10B_FROM_PTR_RAX_(VALUE) sub r10b, byte ptr [rax + VALUE]
#define SUB_R10B_FROM_PTR_RBX_(VALUE) sub r10b, byte ptr [rbx + VALUE]
#define SUB_R10B_FROM_PTR_RCX_(VALUE) sub r10b, byte ptr [rcx + VALUE]
#define SUB_R10B_FROM_PTR_RDX_(VALUE) sub r10b, byte ptr [rdx + VALUE]
#define SUB_R10B_FROM_PTR_RDI_(VALUE) sub r10b, byte ptr [rdi + VALUE]
#define SUB_R10B_FROM_PTR_RSI_(VALUE) sub r10b, byte ptr [rsi + VALUE]
#define SUB_R10B_FROM_PTR_RBP_(VALUE) sub r10b, byte ptr [rbp + VALUE]
#define SUB_R10B_FROM_PTR_RSP_(VALUE) sub r10b, byte ptr [rsp + VALUE]
#define SUB_R10B_FROM_PTR_R8_(VALUE) sub r10b, byte ptr [r8 + VALUE]
#define SUB_R10B_FROM_PTR_R9_(VALUE) sub r10b, byte ptr [r9 + VALUE]
#define SUB_R10B_FROM_PTR_R10_(VALUE) sub r10b, byte ptr [r10 + VALUE]
#define SUB_R10B_FROM_PTR_R11_(VALUE) sub r10b, byte ptr [r11 + VALUE]
#define SUB_R10B_FROM_PTR_R12_(VALUE) sub r10b, byte ptr [r12 + VALUE]
#define SUB_R10B_FROM_PTR_R13_(VALUE) sub r10b, byte ptr [r13 + VALUE]
#define SUB_R10B_FROM_PTR_R14_(VALUE) sub r10b, byte ptr [r14 + VALUE]
#define SUB_R10B_FROM_PTR_R15_(VALUE) sub r10b, byte ptr [r15 + VALUE]
#define SUB_R10B_FROM_PTR_EAX_(VALUE) sub r10b, byte ptr [eax + VALUE]
#define SUB_R10B_FROM_PTR_EBX_(VALUE) sub r10b, byte ptr [ebx + VALUE]
#define SUB_R10B_FROM_PTR_ECX_(VALUE) sub r10b, byte ptr [ecx + VALUE]
#define SUB_R10B_FROM_PTR_EDX_(VALUE) sub r10b, byte ptr [edx + VALUE]
#define SUB_R10B_FROM_PTR_EDI_(VALUE) sub r10b, byte ptr [edi + VALUE]
#define SUB_R10B_FROM_PTR_ESI_(VALUE) sub r10b, byte ptr [esi + VALUE]
#define SUB_R10B_FROM_PTR_EBP_(VALUE) sub r10b, byte ptr [ebp + VALUE]
#define SUB_R10B_FROM_PTR_ESP_(VALUE) sub r10b, byte ptr [esp + VALUE]

#define SUB_R11B_FROM_PTR_RAX_(VALUE) sub r11b, byte ptr [rax + VALUE]
#define SUB_R11B_FROM_PTR_RBX_(VALUE) sub r11b, byte ptr [rbx + VALUE]
#define SUB_R11B_FROM_PTR_RCX_(VALUE) sub r11b, byte ptr [rcx + VALUE]
#define SUB_R11B_FROM_PTR_RDX_(VALUE) sub r11b, byte ptr [rdx + VALUE]
#define SUB_R11B_FROM_PTR_RDI_(VALUE) sub r11b, byte ptr [rdi + VALUE]
#define SUB_R11B_FROM_PTR_RSI_(VALUE) sub r11b, byte ptr [rsi + VALUE]
#define SUB_R11B_FROM_PTR_RBP_(VALUE) sub r11b, byte ptr [rbp + VALUE]
#define SUB_R11B_FROM_PTR_RSP_(VALUE) sub r11b, byte ptr [rsp + VALUE]
#define SUB_R11B_FROM_PTR_R8_(VALUE) sub r11b, byte ptr [r8 + VALUE]
#define SUB_R11B_FROM_PTR_R9_(VALUE) sub r11b, byte ptr [r9 + VALUE]
#define SUB_R11B_FROM_PTR_R10_(VALUE) sub r11b, byte ptr [r10 + VALUE]
#define SUB_R11B_FROM_PTR_R11_(VALUE) sub r11b, byte ptr [r11 + VALUE]
#define SUB_R11B_FROM_PTR_R12_(VALUE) sub r11b, byte ptr [r12 + VALUE]
#define SUB_R11B_FROM_PTR_R13_(VALUE) sub r11b, byte ptr [r13 + VALUE]
#define SUB_R11B_FROM_PTR_R14_(VALUE) sub r11b, byte ptr [r14 + VALUE]
#define SUB_R11B_FROM_PTR_R15_(VALUE) sub r11b, byte ptr [r15 + VALUE]
#define SUB_R11B_FROM_PTR_EAX_(VALUE) sub r11b, byte ptr [eax + VALUE]
#define SUB_R11B_FROM_PTR_EBX_(VALUE) sub r11b, byte ptr [ebx + VALUE]
#define SUB_R11B_FROM_PTR_ECX_(VALUE) sub r11b, byte ptr [ecx + VALUE]
#define SUB_R11B_FROM_PTR_EDX_(VALUE) sub r11b, byte ptr [edx + VALUE]
#define SUB_R11B_FROM_PTR_EDI_(VALUE) sub r11b, byte ptr [edi + VALUE]
#define SUB_R11B_FROM_PTR_ESI_(VALUE) sub r11b, byte ptr [esi + VALUE]
#define SUB_R11B_FROM_PTR_EBP_(VALUE) sub r11b, byte ptr [ebp + VALUE]
#define SUB_R11B_FROM_PTR_ESP_(VALUE) sub r11b, byte ptr [esp + VALUE]

#define SUB_R12B_FROM_PTR_RAX_(VALUE) sub r12b, byte ptr [rax + VALUE]
#define SUB_R12B_FROM_PTR_RBX_(VALUE) sub r12b, byte ptr [rbx + VALUE]
#define SUB_R12B_FROM_PTR_RCX_(VALUE) sub r12b, byte ptr [rcx + VALUE]
#define SUB_R12B_FROM_PTR_RDX_(VALUE) sub r12b, byte ptr [rdx + VALUE]
#define SUB_R12B_FROM_PTR_RDI_(VALUE) sub r12b, byte ptr [rdi + VALUE]
#define SUB_R12B_FROM_PTR_RSI_(VALUE) sub r12b, byte ptr [rsi + VALUE]
#define SUB_R12B_FROM_PTR_RBP_(VALUE) sub r12b, byte ptr [rbp + VALUE]
#define SUB_R12B_FROM_PTR_RSP_(VALUE) sub r12b, byte ptr [rsp + VALUE]
#define SUB_R12B_FROM_PTR_R8_(VALUE) sub r12b, byte ptr [r8 + VALUE]
#define SUB_R12B_FROM_PTR_R9_(VALUE) sub r12b, byte ptr [r9 + VALUE]
#define SUB_R12B_FROM_PTR_R10_(VALUE) sub r12b, byte ptr [r10 + VALUE]
#define SUB_R12B_FROM_PTR_R11_(VALUE) sub r12b, byte ptr [r11 + VALUE]
#define SUB_R12B_FROM_PTR_R12_(VALUE) sub r12b, byte ptr [r12 + VALUE]
#define SUB_R12B_FROM_PTR_R13_(VALUE) sub r12b, byte ptr [r13 + VALUE]
#define SUB_R12B_FROM_PTR_R14_(VALUE) sub r12b, byte ptr [r14 + VALUE]
#define SUB_R12B_FROM_PTR_R15_(VALUE) sub r12b, byte ptr [r15 + VALUE]
#define SUB_R12B_FROM_PTR_EAX_(VALUE) sub r12b, byte ptr [eax + VALUE]
#define SUB_R12B_FROM_PTR_EBX_(VALUE) sub r12b, byte ptr [ebx + VALUE]
#define SUB_R12B_FROM_PTR_ECX_(VALUE) sub r12b, byte ptr [ecx + VALUE]
#define SUB_R12B_FROM_PTR_EDX_(VALUE) sub r12b, byte ptr [edx + VALUE]
#define SUB_R12B_FROM_PTR_EDI_(VALUE) sub r12b, byte ptr [edi + VALUE]
#define SUB_R12B_FROM_PTR_ESI_(VALUE) sub r12b, byte ptr [esi + VALUE]
#define SUB_R12B_FROM_PTR_EBP_(VALUE) sub r12b, byte ptr [ebp + VALUE]
#define SUB_R12B_FROM_PTR_ESP_(VALUE) sub r12b, byte ptr [esp + VALUE]

#define SUB_R13B_FROM_PTR_RAX_(VALUE) sub r13b, byte ptr [rax + VALUE]
#define SUB_R13B_FROM_PTR_RBX_(VALUE) sub r13b, byte ptr [rbx + VALUE]
#define SUB_R13B_FROM_PTR_RCX_(VALUE) sub r13b, byte ptr [rcx + VALUE]
#define SUB_R13B_FROM_PTR_RDX_(VALUE) sub r13b, byte ptr [rdx + VALUE]
#define SUB_R13B_FROM_PTR_RDI_(VALUE) sub r13b, byte ptr [rdi + VALUE]
#define SUB_R13B_FROM_PTR_RSI_(VALUE) sub r13b, byte ptr [rsi + VALUE]
#define SUB_R13B_FROM_PTR_RBP_(VALUE) sub r13b, byte ptr [rbp + VALUE]
#define SUB_R13B_FROM_PTR_RSP_(VALUE) sub r13b, byte ptr [rsp + VALUE]
#define SUB_R13B_FROM_PTR_R8_(VALUE) sub r13b, byte ptr [r8 + VALUE]
#define SUB_R13B_FROM_PTR_R9_(VALUE) sub r13b, byte ptr [r9 + VALUE]
#define SUB_R13B_FROM_PTR_R10_(VALUE) sub r13b, byte ptr [r10 + VALUE]
#define SUB_R13B_FROM_PTR_R11_(VALUE) sub r13b, byte ptr [r11 + VALUE]
#define SUB_R13B_FROM_PTR_R12_(VALUE) sub r13b, byte ptr [r12 + VALUE]
#define SUB_R13B_FROM_PTR_R13_(VALUE) sub r13b, byte ptr [r13 + VALUE]
#define SUB_R13B_FROM_PTR_R14_(VALUE) sub r13b, byte ptr [r14 + VALUE]
#define SUB_R13B_FROM_PTR_R15_(VALUE) sub r13b, byte ptr [r15 + VALUE]
#define SUB_R13B_FROM_PTR_EAX_(VALUE) sub r13b, byte ptr [eax + VALUE]
#define SUB_R13B_FROM_PTR_EBX_(VALUE) sub r13b, byte ptr [ebx + VALUE]
#define SUB_R13B_FROM_PTR_ECX_(VALUE) sub r13b, byte ptr [ecx + VALUE]
#define SUB_R13B_FROM_PTR_EDX_(VALUE) sub r13b, byte ptr [edx + VALUE]
#define SUB_R13B_FROM_PTR_EDI_(VALUE) sub r13b, byte ptr [edi + VALUE]
#define SUB_R13B_FROM_PTR_ESI_(VALUE) sub r13b, byte ptr [esi + VALUE]
#define SUB_R13B_FROM_PTR_EBP_(VALUE) sub r13b, byte ptr [ebp + VALUE]
#define SUB_R13B_FROM_PTR_ESP_(VALUE) sub r13b, byte ptr [esp + VALUE]

#define SUB_R14B_FROM_PTR_RAX_(VALUE) sub r14b, byte ptr [rax + VALUE]
#define SUB_R14B_FROM_PTR_RBX_(VALUE) sub r14b, byte ptr [rbx + VALUE]
#define SUB_R14B_FROM_PTR_RCX_(VALUE) sub r14b, byte ptr [rcx + VALUE]
#define SUB_R14B_FROM_PTR_RDX_(VALUE) sub r14b, byte ptr [rdx + VALUE]
#define SUB_R14B_FROM_PTR_RDI_(VALUE) sub r14b, byte ptr [rdi + VALUE]
#define SUB_R14B_FROM_PTR_RSI_(VALUE) sub r14b, byte ptr [rsi + VALUE]
#define SUB_R14B_FROM_PTR_RBP_(VALUE) sub r14b, byte ptr [rbp + VALUE]
#define SUB_R14B_FROM_PTR_RSP_(VALUE) sub r14b, byte ptr [rsp + VALUE]
#define SUB_R14B_FROM_PTR_R8_(VALUE) sub r14b, byte ptr [r8 + VALUE]
#define SUB_R14B_FROM_PTR_R9_(VALUE) sub r14b, byte ptr [r9 + VALUE]
#define SUB_R14B_FROM_PTR_R10_(VALUE) sub r14b, byte ptr [r10 + VALUE]
#define SUB_R14B_FROM_PTR_R11_(VALUE) sub r14b, byte ptr [r11 + VALUE]
#define SUB_R14B_FROM_PTR_R12_(VALUE) sub r14b, byte ptr [r12 + VALUE]
#define SUB_R14B_FROM_PTR_R13_(VALUE) sub r14b, byte ptr [r13 + VALUE]
#define SUB_R14B_FROM_PTR_R14_(VALUE) sub r14b, byte ptr [r14 + VALUE]
#define SUB_R14B_FROM_PTR_R15_(VALUE) sub r14b, byte ptr [r15 + VALUE]
#define SUB_R14B_FROM_PTR_EAX_(VALUE) sub r14b, byte ptr [eax + VALUE]
#define SUB_R14B_FROM_PTR_EBX_(VALUE) sub r14b, byte ptr [ebx + VALUE]
#define SUB_R14B_FROM_PTR_ECX_(VALUE) sub r14b, byte ptr [ecx + VALUE]
#define SUB_R14B_FROM_PTR_EDX_(VALUE) sub r14b, byte ptr [edx + VALUE]
#define SUB_R14B_FROM_PTR_EDI_(VALUE) sub r14b, byte ptr [edi + VALUE]
#define SUB_R14B_FROM_PTR_ESI_(VALUE) sub r14b, byte ptr [esi + VALUE]
#define SUB_R14B_FROM_PTR_EBP_(VALUE) sub r14b, byte ptr [ebp + VALUE]
#define SUB_R14B_FROM_PTR_ESP_(VALUE) sub r14b, byte ptr [esp + VALUE]

#define SUB_R15B_FROM_PTR_RAX_(VALUE) sub r15b, byte ptr [rax + VALUE]
#define SUB_R15B_FROM_PTR_RBX_(VALUE) sub r15b, byte ptr [rbx + VALUE]
#define SUB_R15B_FROM_PTR_RCX_(VALUE) sub r15b, byte ptr [rcx + VALUE]
#define SUB_R15B_FROM_PTR_RDX_(VALUE) sub r15b, byte ptr [rdx + VALUE]
#define SUB_R15B_FROM_PTR_RDI_(VALUE) sub r15b, byte ptr [rdi + VALUE]
#define SUB_R15B_FROM_PTR_RSI_(VALUE) sub r15b, byte ptr [rsi + VALUE]
#define SUB_R15B_FROM_PTR_RBP_(VALUE) sub r15b, byte ptr [rbp + VALUE]
#define SUB_R15B_FROM_PTR_RSP_(VALUE) sub r15b, byte ptr [rsp + VALUE]
#define SUB_R15B_FROM_PTR_R8_(VALUE) sub r15b, byte ptr [r8 + VALUE]
#define SUB_R15B_FROM_PTR_R9_(VALUE) sub r15b, byte ptr [r9 + VALUE]
#define SUB_R15B_FROM_PTR_R10_(VALUE) sub r15b, byte ptr [r10 + VALUE]
#define SUB_R15B_FROM_PTR_R11_(VALUE) sub r15b, byte ptr [r11 + VALUE]
#define SUB_R15B_FROM_PTR_R12_(VALUE) sub r15b, byte ptr [r12 + VALUE]
#define SUB_R15B_FROM_PTR_R13_(VALUE) sub r15b, byte ptr [r13 + VALUE]
#define SUB_R15B_FROM_PTR_R14_(VALUE) sub r15b, byte ptr [r14 + VALUE]
#define SUB_R15B_FROM_PTR_R15_(VALUE) sub r15b, byte ptr [r15 + VALUE]
#define SUB_R15B_FROM_PTR_EAX_(VALUE) sub r15b, byte ptr [eax + VALUE]
#define SUB_R15B_FROM_PTR_EBX_(VALUE) sub r15b, byte ptr [ebx + VALUE]
#define SUB_R15B_FROM_PTR_ECX_(VALUE) sub r15b, byte ptr [ecx + VALUE]
#define SUB_R15B_FROM_PTR_EDX_(VALUE) sub r15b, byte ptr [edx + VALUE]
#define SUB_R15B_FROM_PTR_EDI_(VALUE) sub r15b, byte ptr [edi + VALUE]
#define SUB_R15B_FROM_PTR_ESI_(VALUE) sub r15b, byte ptr [esi + VALUE]
#define SUB_R15B_FROM_PTR_EBP_(VALUE) sub r15b, byte ptr [ebp + VALUE]
#define SUB_R15B_FROM_PTR_ESP_(VALUE) sub r15b, byte ptr [esp + VALUE]

#define SUB_AL_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], al
#define SUB_AL_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], al
#define SUB_AL_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], al
#define SUB_AL_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], al
#define SUB_AL_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], al
#define SUB_AL_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], al
#define SUB_AL_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], al
#define SUB_AL_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], al
#define SUB_AL_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], al
#define SUB_AL_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], al
#define SUB_AL_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], al
#define SUB_AL_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], al
#define SUB_AL_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], al
#define SUB_AL_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], al
#define SUB_AL_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], al
#define SUB_AL_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], al
#define SUB_AL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], al
#define SUB_AL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], al
#define SUB_AL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], al
#define SUB_AL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], al
#define SUB_AL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], al
#define SUB_AL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], al
#define SUB_AL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], al
#define SUB_AL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], al

#define SUB_BL_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], bl
#define SUB_BL_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], bl
#define SUB_BL_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], bl
#define SUB_BL_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], bl
#define SUB_BL_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], bl
#define SUB_BL_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], bl
#define SUB_BL_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], bl
#define SUB_BL_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], bl
#define SUB_BL_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], bl
#define SUB_BL_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], bl
#define SUB_BL_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], bl
#define SUB_BL_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], bl
#define SUB_BL_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], bl
#define SUB_BL_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], bl
#define SUB_BL_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], bl
#define SUB_BL_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], bl
#define SUB_BL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], bl
#define SUB_BL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], bl
#define SUB_BL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], bl
#define SUB_BL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], bl
#define SUB_BL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], bl
#define SUB_BL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], bl
#define SUB_BL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], bl
#define SUB_BL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], bl

#define SUB_CL_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], cl
#define SUB_CL_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], cl
#define SUB_CL_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], cl
#define SUB_CL_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], cl
#define SUB_CL_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], cl
#define SUB_CL_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], cl
#define SUB_CL_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], cl
#define SUB_CL_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], cl
#define SUB_CL_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], cl
#define SUB_CL_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], cl
#define SUB_CL_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], cl
#define SUB_CL_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], cl
#define SUB_CL_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], cl
#define SUB_CL_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], cl
#define SUB_CL_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], cl
#define SUB_CL_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], cl
#define SUB_CL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], cl
#define SUB_CL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], cl
#define SUB_CL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], cl
#define SUB_CL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], cl
#define SUB_CL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], cl
#define SUB_CL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], cl
#define SUB_CL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], cl
#define SUB_CL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], cl

#define SUB_DL_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], dl
#define SUB_DL_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], dl
#define SUB_DL_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], dl
#define SUB_DL_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], dl
#define SUB_DL_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], dl
#define SUB_DL_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], dl
#define SUB_DL_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], dl
#define SUB_DL_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], dl
#define SUB_DL_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], dl
#define SUB_DL_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], dl
#define SUB_DL_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], dl
#define SUB_DL_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], dl
#define SUB_DL_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], dl
#define SUB_DL_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], dl
#define SUB_DL_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], dl
#define SUB_DL_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], dl
#define SUB_DL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], dl
#define SUB_DL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], dl
#define SUB_DL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], dl
#define SUB_DL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], dl
#define SUB_DL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], dl
#define SUB_DL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], dl
#define SUB_DL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], dl
#define SUB_DL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], dl

#define SUB_DIL_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], dil
#define SUB_DIL_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], dil
#define SUB_DIL_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], dil
#define SUB_DIL_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], dil
#define SUB_DIL_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], dil
#define SUB_DIL_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], dil
#define SUB_DIL_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], dil
#define SUB_DIL_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], dil
#define SUB_DIL_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], dil
#define SUB_DIL_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], dil
#define SUB_DIL_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], dil
#define SUB_DIL_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], dil
#define SUB_DIL_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], dil
#define SUB_DIL_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], dil
#define SUB_DIL_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], dil
#define SUB_DIL_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], dil
#define SUB_DIL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], dil
#define SUB_DIL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], dil
#define SUB_DIL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], dil
#define SUB_DIL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], dil
#define SUB_DIL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], dil
#define SUB_DIL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], dil
#define SUB_DIL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], dil
#define SUB_DIL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], dil

#define SUB_SIL_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], sil
#define SUB_SIL_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], sil
#define SUB_SIL_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], sil
#define SUB_SIL_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], sil
#define SUB_SIL_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], sil
#define SUB_SIL_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], sil
#define SUB_SIL_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], sil
#define SUB_SIL_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], sil
#define SUB_SIL_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], sil
#define SUB_SIL_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], sil
#define SUB_SIL_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], sil
#define SUB_SIL_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], sil
#define SUB_SIL_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], sil
#define SUB_SIL_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], sil
#define SUB_SIL_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], sil
#define SUB_SIL_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], sil
#define SUB_SIL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], sil
#define SUB_SIL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], sil
#define SUB_SIL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], sil
#define SUB_SIL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], sil
#define SUB_SIL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], sil
#define SUB_SIL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], sil
#define SUB_SIL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], sil
#define SUB_SIL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], sil

#define SUB_BPL_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], bpl
#define SUB_BPL_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], bpl
#define SUB_BPL_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], bpl
#define SUB_BPL_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], bpl
#define SUB_BPL_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], bpl
#define SUB_BPL_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], bpl
#define SUB_BPL_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], bpl
#define SUB_BPL_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], bpl
#define SUB_BPL_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], bpl
#define SUB_BPL_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], bpl
#define SUB_BPL_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], bpl
#define SUB_BPL_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], bpl
#define SUB_BPL_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], bpl
#define SUB_BPL_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], bpl
#define SUB_BPL_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], bpl
#define SUB_BPL_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], bpl
#define SUB_BPL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], bpl
#define SUB_BPL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], bpl
#define SUB_BPL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], bpl
#define SUB_BPL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], bpl
#define SUB_BPL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], bpl
#define SUB_BPL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], bpl
#define SUB_BPL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], bpl
#define SUB_BPL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], bpl

#define SUB_SPL_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], spl
#define SUB_SPL_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], spl
#define SUB_SPL_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], spl
#define SUB_SPL_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], spl
#define SUB_SPL_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], spl
#define SUB_SPL_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], spl
#define SUB_SPL_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], spl
#define SUB_SPL_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], spl
#define SUB_SPL_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], spl
#define SUB_SPL_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], spl
#define SUB_SPL_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], spl
#define SUB_SPL_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], spl
#define SUB_SPL_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], spl
#define SUB_SPL_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], spl
#define SUB_SPL_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], spl
#define SUB_SPL_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], spl
#define SUB_SPL_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], spl
#define SUB_SPL_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], spl
#define SUB_SPL_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], spl
#define SUB_SPL_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], spl
#define SUB_SPL_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], spl
#define SUB_SPL_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], spl
#define SUB_SPL_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], spl
#define SUB_SPL_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], spl

#define SUB_R8B_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], r8b
#define SUB_R8B_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], r8b
#define SUB_R8B_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], r8b
#define SUB_R8B_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], r8b
#define SUB_R8B_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], r8b
#define SUB_R8B_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], r8b
#define SUB_R8B_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], r8b
#define SUB_R8B_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], r8b
#define SUB_R8B_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], r8b
#define SUB_R8B_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], r8b
#define SUB_R8B_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], r8b
#define SUB_R8B_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], r8b
#define SUB_R8B_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], r8b
#define SUB_R8B_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], r8b
#define SUB_R8B_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], r8b
#define SUB_R8B_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], r8b
#define SUB_R8B_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], r8b
#define SUB_R8B_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], r8b
#define SUB_R8B_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], r8b
#define SUB_R8B_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], r8b
#define SUB_R8B_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], r8b
#define SUB_R8B_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], r8b
#define SUB_R8B_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], r8b
#define SUB_R8B_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], r8b

#define SUB_R9B_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], r9b
#define SUB_R9B_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], r9b
#define SUB_R9B_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], r9b
#define SUB_R9B_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], r9b
#define SUB_R9B_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], r9b
#define SUB_R9B_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], r9b
#define SUB_R9B_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], r9b
#define SUB_R9B_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], r9b
#define SUB_R9B_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], r9b
#define SUB_R9B_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], r9b
#define SUB_R9B_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], r9b
#define SUB_R9B_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], r9b
#define SUB_R9B_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], r9b
#define SUB_R9B_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], r9b
#define SUB_R9B_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], r9b
#define SUB_R9B_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], r9b
#define SUB_R9B_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], r9b
#define SUB_R9B_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], r9b
#define SUB_R9B_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], r9b
#define SUB_R9B_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], r9b
#define SUB_R9B_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], r9b
#define SUB_R9B_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], r9b
#define SUB_R9B_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], r9b
#define SUB_R9B_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], r9b

#define SUB_R10B_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], r10b
#define SUB_R10B_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], r10b
#define SUB_R10B_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], r10b
#define SUB_R10B_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], r10b
#define SUB_R10B_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], r10b
#define SUB_R10B_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], r10b
#define SUB_R10B_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], r10b
#define SUB_R10B_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], r10b
#define SUB_R10B_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], r10b
#define SUB_R10B_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], r10b
#define SUB_R10B_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], r10b
#define SUB_R10B_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], r10b
#define SUB_R10B_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], r10b
#define SUB_R10B_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], r10b
#define SUB_R10B_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], r10b
#define SUB_R10B_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], r10b
#define SUB_R10B_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], r10b
#define SUB_R10B_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], r10b
#define SUB_R10B_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], r10b
#define SUB_R10B_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], r10b
#define SUB_R10B_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], r10b
#define SUB_R10B_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], r10b
#define SUB_R10B_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], r10b
#define SUB_R10B_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], r10b

#define SUB_R11B_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], r11b
#define SUB_R11B_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], r11b
#define SUB_R11B_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], r11b
#define SUB_R11B_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], r11b
#define SUB_R11B_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], r11b
#define SUB_R11B_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], r11b
#define SUB_R11B_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], r11b
#define SUB_R11B_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], r11b
#define SUB_R11B_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], r11b
#define SUB_R11B_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], r11b
#define SUB_R11B_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], r11b
#define SUB_R11B_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], r11b
#define SUB_R11B_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], r11b
#define SUB_R11B_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], r11b
#define SUB_R11B_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], r11b
#define SUB_R11B_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], r11b
#define SUB_R11B_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], r11b
#define SUB_R11B_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], r11b
#define SUB_R11B_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], r11b
#define SUB_R11B_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], r11b
#define SUB_R11B_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], r11b
#define SUB_R11B_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], r11b
#define SUB_R11B_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], r11b
#define SUB_R11B_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], r11b

#define SUB_R12B_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], r12b
#define SUB_R12B_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], r12b
#define SUB_R12B_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], r12b
#define SUB_R12B_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], r12b
#define SUB_R12B_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], r12b
#define SUB_R12B_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], r12b
#define SUB_R12B_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], r12b
#define SUB_R12B_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], r12b
#define SUB_R12B_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], r12b
#define SUB_R12B_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], r12b
#define SUB_R12B_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], r12b
#define SUB_R12B_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], r12b
#define SUB_R12B_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], r12b
#define SUB_R12B_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], r12b
#define SUB_R12B_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], r12b
#define SUB_R12B_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], r12b
#define SUB_R12B_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], r12b
#define SUB_R12B_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], r12b
#define SUB_R12B_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], r12b
#define SUB_R12B_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], r12b
#define SUB_R12B_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], r12b
#define SUB_R12B_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], r12b
#define SUB_R12B_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], r12b
#define SUB_R12B_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], r12b

#define SUB_R13B_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], r13b
#define SUB_R13B_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], r13b
#define SUB_R13B_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], r13b
#define SUB_R13B_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], r13b
#define SUB_R13B_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], r13b
#define SUB_R13B_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], r13b
#define SUB_R13B_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], r13b
#define SUB_R13B_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], r13b
#define SUB_R13B_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], r13b
#define SUB_R13B_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], r13b
#define SUB_R13B_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], r13b
#define SUB_R13B_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], r13b
#define SUB_R13B_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], r13b
#define SUB_R13B_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], r13b
#define SUB_R13B_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], r13b
#define SUB_R13B_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], r13b
#define SUB_R13B_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], r13b
#define SUB_R13B_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], r13b
#define SUB_R13B_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], r13b
#define SUB_R13B_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], r13b
#define SUB_R13B_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], r13b
#define SUB_R13B_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], r13b
#define SUB_R13B_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], r13b
#define SUB_R13B_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], r13b

#define SUB_R14B_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], r14b
#define SUB_R14B_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], r14b
#define SUB_R14B_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], r14b
#define SUB_R14B_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], r14b
#define SUB_R14B_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], r14b
#define SUB_R14B_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], r14b
#define SUB_R14B_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], r14b
#define SUB_R14B_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], r14b
#define SUB_R14B_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], r14b
#define SUB_R14B_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], r14b
#define SUB_R14B_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], r14b
#define SUB_R14B_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], r14b
#define SUB_R14B_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], r14b
#define SUB_R14B_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], r14b
#define SUB_R14B_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], r14b
#define SUB_R14B_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], r14b
#define SUB_R14B_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], r14b
#define SUB_R14B_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], r14b
#define SUB_R14B_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], r14b
#define SUB_R14B_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], r14b
#define SUB_R14B_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], r14b
#define SUB_R14B_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], r14b
#define SUB_R14B_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], r14b
#define SUB_R14B_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], r14b

#define SUB_R15B_TO_PTR_RAX_(VALUE) sub byte ptr [rax + VALUE], r15b
#define SUB_R15B_TO_PTR_RBX_(VALUE) sub byte ptr [rbx + VALUE], r15b
#define SUB_R15B_TO_PTR_RCX_(VALUE) sub byte ptr [rcx + VALUE], r15b
#define SUB_R15B_TO_PTR_RDX_(VALUE) sub byte ptr [rdx + VALUE], r15b
#define SUB_R15B_TO_PTR_RDI_(VALUE) sub byte ptr [rdi + VALUE], r15b
#define SUB_R15B_TO_PTR_RSI_(VALUE) sub byte ptr [rsi + VALUE], r15b
#define SUB_R15B_TO_PTR_RBP_(VALUE) sub byte ptr [rbp + VALUE], r15b
#define SUB_R15B_TO_PTR_RSP_(VALUE) sub byte ptr [rsp + VALUE], r15b
#define SUB_R15B_TO_PTR_R8_(VALUE) sub byte ptr [r8 + VALUE], r15b
#define SUB_R15B_TO_PTR_R9_(VALUE) sub byte ptr [r9 + VALUE], r15b
#define SUB_R15B_TO_PTR_R10_(VALUE) sub byte ptr [r10 + VALUE], r15b
#define SUB_R15B_TO_PTR_R11_(VALUE) sub byte ptr [r11 + VALUE], r15b
#define SUB_R15B_TO_PTR_R12_(VALUE) sub byte ptr [r12 + VALUE], r15b
#define SUB_R15B_TO_PTR_R13_(VALUE) sub byte ptr [r13 + VALUE], r15b
#define SUB_R15B_TO_PTR_R14_(VALUE) sub byte ptr [r14 + VALUE], r15b
#define SUB_R15B_TO_PTR_R15_(VALUE) sub byte ptr [r15 + VALUE], r15b
#define SUB_R15B_TO_PTR_EAX_(VALUE) sub byte ptr [eax + VALUE], r15b
#define SUB_R15B_TO_PTR_EBX_(VALUE) sub byte ptr [ebx + VALUE], r15b
#define SUB_R15B_TO_PTR_ECX_(VALUE) sub byte ptr [ecx + VALUE], r15b
#define SUB_R15B_TO_PTR_EDX_(VALUE) sub byte ptr [edx + VALUE], r15b
#define SUB_R15B_TO_PTR_EDI_(VALUE) sub byte ptr [edi + VALUE], r15b
#define SUB_R15B_TO_PTR_ESI_(VALUE) sub byte ptr [esi + VALUE], r15b
#define SUB_R15B_TO_PTR_EBP_(VALUE) sub byte ptr [ebp + VALUE], r15b
#define SUB_R15B_TO_PTR_ESP_(VALUE) sub byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define SUB_AX_FROM_PTR_(VALUE) sub ax, word ptr [VALUE]
#define SUB_BX_FROM_PTR_(VALUE) sub bx, word ptr [VALUE]
#define SUB_CX_FROM_PTR_(VALUE) sub cx, word ptr [VALUE]
#define SUB_DX_FROM_PTR_(VALUE) sub dx, word ptr [VALUE]
#define SUB_DI_FROM_PTR_(VALUE) sub di, word ptr [VALUE]
#define SUB_SI_FROM_PTR_(VALUE) sub si, word ptr [VALUE]
#define SUB_BP_FROM_PTR_(VALUE) sub bp, word ptr [VALUE]
#define SUB_SP_FROM_PTR_(VALUE) sub sp, word ptr [VALUE]

#define SUB_AX_TO_PTR_(VALUE) sub word ptr [VALUE], ax
#define SUB_BX_TO_PTR_(VALUE) sub word ptr [VALUE], bx
#define SUB_CX_TO_PTR_(VALUE) sub word ptr [VALUE], cx
#define SUB_DX_TO_PTR_(VALUE) sub word ptr [VALUE], dx
#define SUB_DI_TO_PTR_(VALUE) sub word ptr [VALUE], di
#define SUB_SI_TO_PTR_(VALUE) sub word ptr [VALUE], si
#define SUB_BP_TO_PTR_(VALUE) sub word ptr [VALUE], bp
#define SUB_SP_TO_PTR_(VALUE) sub word ptr [VALUE], sp

#define SUB_AX_FROM_PTR_BX sub ax, word ptr [bx]
#define SUB_AX_FROM_PTR_BP sub ax, word ptr [bp]
#define SUB_AX_FROM_PTR_SI sub ax, word ptr [si]
#define SUB_AX_FROM_PTR_DI sub ax, word ptr [di]

#define SUB_BX_FROM_PTR_BX sub bx, word ptr [bx]
#define SUB_BX_FROM_PTR_BP sub bx, word ptr [bp]
#define SUB_BX_FROM_PTR_SI sub bx, word ptr [si]
#define SUB_BX_FROM_PTR_DI sub bx, word ptr [di]

#define SUB_CX_FROM_PTR_BX sub cx, word ptr [bx]
#define SUB_CX_FROM_PTR_BP sub cx, word ptr [bp]
#define SUB_CX_FROM_PTR_SI sub cx, word ptr [si]
#define SUB_CX_FROM_PTR_DI sub cx, word ptr [di]

#define SUB_DX_FROM_PTR_BX sub dx, word ptr [bx]
#define SUB_DX_FROM_PTR_BP sub dx, word ptr [bp]
#define SUB_DX_FROM_PTR_SI sub dx, word ptr [si]
#define SUB_DX_FROM_PTR_DI sub dx, word ptr [di]

#define SUB_DI_FROM_PTR_BX sub di, word ptr [bx]
#define SUB_DI_FROM_PTR_BP sub di, word ptr [bp]
#define SUB_DI_FROM_PTR_SI sub di, word ptr [si]
#define SUB_DI_FROM_PTR_DI sub di, word ptr [di]

#define SUB_SI_FROM_PTR_BX sub si, word ptr [bx]
#define SUB_SI_FROM_PTR_BP sub si, word ptr [bp]
#define SUB_SI_FROM_PTR_SI sub si, word ptr [si]
#define SUB_SI_FROM_PTR_DI sub si, word ptr [di]

#define SUB_BP_FROM_PTR_BX sub bp, word ptr [bx]
#define SUB_BP_FROM_PTR_BP sub bp, word ptr [bp]
#define SUB_BP_FROM_PTR_SI sub bp, word ptr [si]
#define SUB_BP_FROM_PTR_DI sub bp, word ptr [di]

#define SUB_SP_FROM_PTR_BX sub sp, word ptr [bx]
#define SUB_SP_FROM_PTR_BP sub sp, word ptr [bp]
#define SUB_SP_FROM_PTR_SI sub sp, word ptr [si]
#define SUB_SP_FROM_PTR_DI sub sp, word ptr [di]

#define SUB_AX_TO_PTR_BX sub word ptr [bx], ax
#define SUB_AX_TO_PTR_BP sub word ptr [bp], ax
#define SUB_AX_TO_PTR_SI sub word ptr [si], ax
#define SUB_AX_TO_PTR_DI sub word ptr [di], ax

#define SUB_BX_TO_PTR_BX sub word ptr [bx], bx
#define SUB_BX_TO_PTR_BP sub word ptr [bp], bx
#define SUB_BX_TO_PTR_SI sub word ptr [si], bx
#define SUB_BX_TO_PTR_DI sub word ptr [di], bx

#define SUB_CX_TO_PTR_BX sub word ptr [bx], cx
#define SUB_CX_TO_PTR_BP sub word ptr [bp], cx
#define SUB_CX_TO_PTR_SI sub word ptr [si], cx
#define SUB_CX_TO_PTR_DI sub word ptr [di], cx

#define SUB_DX_TO_PTR_BX sub word ptr [bx], dx
#define SUB_DX_TO_PTR_BP sub word ptr [bp], dx
#define SUB_DX_TO_PTR_SI sub word ptr [si], dx
#define SUB_DX_TO_PTR_DI sub word ptr [di], dx

#define SUB_DI_TO_PTR_BX sub word ptr [bx], di
#define SUB_DI_TO_PTR_BP sub word ptr [bp], di
#define SUB_DI_TO_PTR_SI sub word ptr [si], di
#define SUB_DI_TO_PTR_DI sub word ptr [di], di

#define SUB_SI_TO_PTR_BX sub word ptr [bx], si
#define SUB_SI_TO_PTR_BP sub word ptr [bp], si
#define SUB_SI_TO_PTR_SI sub word ptr [si], si
#define SUB_SI_TO_PTR_DI sub word ptr [di], si

#define SUB_BP_TO_PTR_BX sub word ptr [bx], bp
#define SUB_BP_TO_PTR_BP sub word ptr [bp], bp
#define SUB_BP_TO_PTR_SI sub word ptr [si], bp
#define SUB_BP_TO_PTR_DI sub word ptr [di], bp

#define SUB_SP_TO_PTR_BX sub word ptr [bx], sp
#define SUB_SP_TO_PTR_BP sub word ptr [bp], sp
#define SUB_SP_TO_PTR_SI sub word ptr [si], sp
#define SUB_SP_TO_PTR_DI sub word ptr [di], sp

#define SUB_AX_FROM_PTR_BX_(VALUE) sub ax, word ptr [bx + VALUE]
#define SUB_AX_FROM_PTR_BP_(VALUE) sub ax, word ptr [bp + VALUE]
#define SUB_AX_FROM_PTR_SI_(VALUE) sub ax, word ptr [si + VALUE]
#define SUB_AX_FROM_PTR_DI_(VALUE) sub ax, word ptr [di + VALUE]

#define SUB_BX_FROM_PTR_BX_(VALUE) sub bx, word ptr [bx + VALUE]
#define SUB_BX_FROM_PTR_BP_(VALUE) sub bx, word ptr [bp + VALUE]
#define SUB_BX_FROM_PTR_SI_(VALUE) sub bx, word ptr [si + VALUE]
#define SUB_BX_FROM_PTR_DI_(VALUE) sub bx, word ptr [di + VALUE]

#define SUB_CX_FROM_PTR_BX_(VALUE) sub cx, word ptr [bx + VALUE]
#define SUB_CX_FROM_PTR_BP_(VALUE) sub cx, word ptr [bp + VALUE]
#define SUB_CX_FROM_PTR_SI_(VALUE) sub cx, word ptr [si + VALUE]
#define SUB_CX_FROM_PTR_DI_(VALUE) sub cx, word ptr [di + VALUE]

#define SUB_DX_FROM_PTR_BX_(VALUE) sub dx, word ptr [bx + VALUE]
#define SUB_DX_FROM_PTR_BP_(VALUE) sub dx, word ptr [bp + VALUE]
#define SUB_DX_FROM_PTR_SI_(VALUE) sub dx, word ptr [si + VALUE]
#define SUB_DX_FROM_PTR_DI_(VALUE) sub dx, word ptr [di + VALUE]

#define SUB_DI_FROM_PTR_BX_(VALUE) sub di, word ptr [bx + VALUE]
#define SUB_DI_FROM_PTR_BP_(VALUE) sub di, word ptr [bp + VALUE]
#define SUB_DI_FROM_PTR_SI_(VALUE) sub di, word ptr [si + VALUE]
#define SUB_DI_FROM_PTR_DI_(VALUE) sub di, word ptr [di + VALUE]

#define SUB_SI_FROM_PTR_BX_(VALUE) sub si, word ptr [bx + VALUE]
#define SUB_SI_FROM_PTR_BP_(VALUE) sub si, word ptr [bp + VALUE]
#define SUB_SI_FROM_PTR_SI_(VALUE) sub si, word ptr [si + VALUE]
#define SUB_SI_FROM_PTR_DI_(VALUE) sub si, word ptr [di + VALUE]

#define SUB_BP_FROM_PTR_BX_(VALUE) sub bp, word ptr [bx + VALUE]
#define SUB_BP_FROM_PTR_BP_(VALUE) sub bp, word ptr [bp + VALUE]
#define SUB_BP_FROM_PTR_SI_(VALUE) sub bp, word ptr [si + VALUE]
#define SUB_BP_FROM_PTR_DI_(VALUE) sub bp, word ptr [di + VALUE]

#define SUB_SP_FROM_PTR_BX_(VALUE) sub sp, word ptr [bx + VALUE]
#define SUB_SP_FROM_PTR_BP_(VALUE) sub sp, word ptr [bp + VALUE]
#define SUB_SP_FROM_PTR_SI_(VALUE) sub sp, word ptr [si + VALUE]
#define SUB_SP_FROM_PTR_DI_(VALUE) sub sp, word ptr [di + VALUE]

#define SUB_AX_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], ax
#define SUB_AX_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], ax
#define SUB_AX_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], ax
#define SUB_AX_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], ax

#define SUB_BX_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], bx
#define SUB_BX_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], bx
#define SUB_BX_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], bx
#define SUB_BX_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], bx

#define SUB_CX_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], cx
#define SUB_CX_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], cx
#define SUB_CX_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], cx
#define SUB_CX_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], cx

#define SUB_DX_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], dx
#define SUB_DX_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], dx
#define SUB_DX_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], dx
#define SUB_DX_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], dx

#define SUB_DI_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], di
#define SUB_DI_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], di
#define SUB_DI_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], di
#define SUB_DI_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], di

#define SUB_SI_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], si
#define SUB_SI_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], si
#define SUB_SI_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], si
#define SUB_SI_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], si

#define SUB_BP_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], bp
#define SUB_BP_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], bp
#define SUB_BP_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], bp
#define SUB_BP_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], bp

#define SUB_SP_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], sp
#define SUB_SP_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], sp
#define SUB_SP_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], sp
#define SUB_SP_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SUB_AX_FROM_PTR_(VALUE) sub ax, word ptr [VALUE]
#define SUB_BX_FROM_PTR_(VALUE) sub bx, word ptr [VALUE]
#define SUB_CX_FROM_PTR_(VALUE) sub cx, word ptr [VALUE]
#define SUB_DX_FROM_PTR_(VALUE) sub dx, word ptr [VALUE]
#define SUB_DI_FROM_PTR_(VALUE) sub di, word ptr [VALUE]
#define SUB_SI_FROM_PTR_(VALUE) sub si, word ptr [VALUE]
#define SUB_BP_FROM_PTR_(VALUE) sub bp, word ptr [VALUE]
#define SUB_SP_FROM_PTR_(VALUE) sub sp, word ptr [VALUE]

#define SUB_AX_TO_PTR_(VALUE) sub word ptr [VALUE], ax
#define SUB_BX_TO_PTR_(VALUE) sub word ptr [VALUE], bx
#define SUB_CX_TO_PTR_(VALUE) sub word ptr [VALUE], cx
#define SUB_DX_TO_PTR_(VALUE) sub word ptr [VALUE], dx
#define SUB_DI_TO_PTR_(VALUE) sub word ptr [VALUE], di
#define SUB_SI_TO_PTR_(VALUE) sub word ptr [VALUE], si
#define SUB_BP_TO_PTR_(VALUE) sub word ptr [VALUE], bp
#define SUB_SP_TO_PTR_(VALUE) sub word ptr [VALUE], sp

#define SUB_AX_FROM_PTR_EAX sub ax, word ptr [eax]
#define SUB_AX_FROM_PTR_EBX sub ax, word ptr [ebx]
#define SUB_AX_FROM_PTR_ECX sub ax, word ptr [ecx]
#define SUB_AX_FROM_PTR_EDX sub ax, word ptr [edx]
#define SUB_AX_FROM_PTR_EDI sub ax, word ptr [edi]
#define SUB_AX_FROM_PTR_ESI sub ax, word ptr [esi]
#define SUB_AX_FROM_PTR_EBP sub ax, word ptr [ebp]
#define SUB_AX_FROM_PTR_ESP sub ax, word ptr [esp]
#define SUB_AX_FROM_PTR_BX sub ax, word ptr [bx]
#define SUB_AX_FROM_PTR_BP sub ax, word ptr [bp]
#define SUB_AX_FROM_PTR_SI sub ax, word ptr [si]
#define SUB_AX_FROM_PTR_DI sub ax, word ptr [di]

#define SUB_BX_FROM_PTR_EAX sub bx, word ptr [eax]
#define SUB_BX_FROM_PTR_EBX sub bx, word ptr [ebx]
#define SUB_BX_FROM_PTR_ECX sub bx, word ptr [ecx]
#define SUB_BX_FROM_PTR_EDX sub bx, word ptr [edx]
#define SUB_BX_FROM_PTR_EDI sub bx, word ptr [edi]
#define SUB_BX_FROM_PTR_ESI sub bx, word ptr [esi]
#define SUB_BX_FROM_PTR_EBP sub bx, word ptr [ebp]
#define SUB_BX_FROM_PTR_ESP sub bx, word ptr [esp]
#define SUB_BX_FROM_PTR_BX sub bx, word ptr [bx]
#define SUB_BX_FROM_PTR_BP sub bx, word ptr [bp]
#define SUB_BX_FROM_PTR_SI sub bx, word ptr [si]
#define SUB_BX_FROM_PTR_DI sub bx, word ptr [di]

#define SUB_CX_FROM_PTR_EAX sub cx, word ptr [eax]
#define SUB_CX_FROM_PTR_EBX sub cx, word ptr [ebx]
#define SUB_CX_FROM_PTR_ECX sub cx, word ptr [ecx]
#define SUB_CX_FROM_PTR_EDX sub cx, word ptr [edx]
#define SUB_CX_FROM_PTR_EDI sub cx, word ptr [edi]
#define SUB_CX_FROM_PTR_ESI sub cx, word ptr [esi]
#define SUB_CX_FROM_PTR_EBP sub cx, word ptr [ebp]
#define SUB_CX_FROM_PTR_ESP sub cx, word ptr [esp]
#define SUB_CX_FROM_PTR_BX sub cx, word ptr [bx]
#define SUB_CX_FROM_PTR_BP sub cx, word ptr [bp]
#define SUB_CX_FROM_PTR_SI sub cx, word ptr [si]
#define SUB_CX_FROM_PTR_DI sub cx, word ptr [di]

#define SUB_DX_FROM_PTR_EAX sub dx, word ptr [eax]
#define SUB_DX_FROM_PTR_EBX sub dx, word ptr [ebx]
#define SUB_DX_FROM_PTR_ECX sub dx, word ptr [ecx]
#define SUB_DX_FROM_PTR_EDX sub dx, word ptr [edx]
#define SUB_DX_FROM_PTR_EDI sub dx, word ptr [edi]
#define SUB_DX_FROM_PTR_ESI sub dx, word ptr [esi]
#define SUB_DX_FROM_PTR_EBP sub dx, word ptr [ebp]
#define SUB_DX_FROM_PTR_ESP sub dx, word ptr [esp]
#define SUB_DX_FROM_PTR_BX sub dx, word ptr [bx]
#define SUB_DX_FROM_PTR_BP sub dx, word ptr [bp]
#define SUB_DX_FROM_PTR_SI sub dx, word ptr [si]
#define SUB_DX_FROM_PTR_DI sub dx, word ptr [di]

#define SUB_DI_FROM_PTR_EAX sub di, word ptr [eax]
#define SUB_DI_FROM_PTR_EBX sub di, word ptr [ebx]
#define SUB_DI_FROM_PTR_ECX sub di, word ptr [ecx]
#define SUB_DI_FROM_PTR_EDX sub di, word ptr [edx]
#define SUB_DI_FROM_PTR_EDI sub di, word ptr [edi]
#define SUB_DI_FROM_PTR_ESI sub di, word ptr [esi]
#define SUB_DI_FROM_PTR_EBP sub di, word ptr [ebp]
#define SUB_DI_FROM_PTR_ESP sub di, word ptr [esp]
#define SUB_DI_FROM_PTR_BX sub di, word ptr [bx]
#define SUB_DI_FROM_PTR_BP sub di, word ptr [bp]
#define SUB_DI_FROM_PTR_SI sub di, word ptr [si]
#define SUB_DI_FROM_PTR_DI sub di, word ptr [di]

#define SUB_SI_FROM_PTR_EAX sub si, word ptr [eax]
#define SUB_SI_FROM_PTR_EBX sub si, word ptr [ebx]
#define SUB_SI_FROM_PTR_ECX sub si, word ptr [ecx]
#define SUB_SI_FROM_PTR_EDX sub si, word ptr [edx]
#define SUB_SI_FROM_PTR_EDI sub si, word ptr [edi]
#define SUB_SI_FROM_PTR_ESI sub si, word ptr [esi]
#define SUB_SI_FROM_PTR_EBP sub si, word ptr [ebp]
#define SUB_SI_FROM_PTR_ESP sub si, word ptr [esp]
#define SUB_SI_FROM_PTR_BX sub si, word ptr [bx]
#define SUB_SI_FROM_PTR_BP sub si, word ptr [bp]
#define SUB_SI_FROM_PTR_SI sub si, word ptr [si]
#define SUB_SI_FROM_PTR_DI sub si, word ptr [di]

#define SUB_BP_FROM_PTR_EAX sub bp, word ptr [eax]
#define SUB_BP_FROM_PTR_EBX sub bp, word ptr [ebx]
#define SUB_BP_FROM_PTR_ECX sub bp, word ptr [ecx]
#define SUB_BP_FROM_PTR_EDX sub bp, word ptr [edx]
#define SUB_BP_FROM_PTR_EDI sub bp, word ptr [edi]
#define SUB_BP_FROM_PTR_ESI sub bp, word ptr [esi]
#define SUB_BP_FROM_PTR_EBP sub bp, word ptr [ebp]
#define SUB_BP_FROM_PTR_ESP sub bp, word ptr [esp]
#define SUB_BP_FROM_PTR_BX sub bp, word ptr [bx]
#define SUB_BP_FROM_PTR_BP sub bp, word ptr [bp]
#define SUB_BP_FROM_PTR_SI sub bp, word ptr [si]
#define SUB_BP_FROM_PTR_DI sub bp, word ptr [di]

#define SUB_SP_FROM_PTR_EAX sub sp, word ptr [eax]
#define SUB_SP_FROM_PTR_EBX sub sp, word ptr [ebx]
#define SUB_SP_FROM_PTR_ECX sub sp, word ptr [ecx]
#define SUB_SP_FROM_PTR_EDX sub sp, word ptr [edx]
#define SUB_SP_FROM_PTR_EDI sub sp, word ptr [edi]
#define SUB_SP_FROM_PTR_ESI sub sp, word ptr [esi]
#define SUB_SP_FROM_PTR_EBP sub sp, word ptr [ebp]
#define SUB_SP_FROM_PTR_ESP sub sp, word ptr [esp]
#define SUB_SP_FROM_PTR_BX sub sp, word ptr [bx]
#define SUB_SP_FROM_PTR_BP sub sp, word ptr [bp]
#define SUB_SP_FROM_PTR_SI sub sp, word ptr [si]
#define SUB_SP_FROM_PTR_DI sub sp, word ptr [di]

#define SUB_AX_TO_PTR_EAX sub word ptr [eax], ax
#define SUB_AX_TO_PTR_EBX sub word ptr [ebx], ax
#define SUB_AX_TO_PTR_ECX sub word ptr [ecx], ax
#define SUB_AX_TO_PTR_EDX sub word ptr [edx], ax
#define SUB_AX_TO_PTR_EDI sub word ptr [edi], ax
#define SUB_AX_TO_PTR_ESI sub word ptr [esi], ax
#define SUB_AX_TO_PTR_EBP sub word ptr [ebp], ax
#define SUB_AX_TO_PTR_ESP sub word ptr [esp], ax
#define SUB_AX_TO_PTR_BX sub word ptr [bx], ax
#define SUB_AX_TO_PTR_BP sub word ptr [bp], ax
#define SUB_AX_TO_PTR_SI sub word ptr [si], ax
#define SUB_AX_TO_PTR_DI sub word ptr [di], ax

#define SUB_BX_TO_PTR_EAX sub word ptr [eax], bx
#define SUB_BX_TO_PTR_EBX sub word ptr [ebx], bx
#define SUB_BX_TO_PTR_ECX sub word ptr [ecx], bx
#define SUB_BX_TO_PTR_EDX sub word ptr [edx], bx
#define SUB_BX_TO_PTR_EDI sub word ptr [edi], bx
#define SUB_BX_TO_PTR_ESI sub word ptr [esi], bx
#define SUB_BX_TO_PTR_EBP sub word ptr [ebp], bx
#define SUB_BX_TO_PTR_ESP sub word ptr [esp], bx
#define SUB_BX_TO_PTR_BX sub word ptr [bx], bx
#define SUB_BX_TO_PTR_BP sub word ptr [bp], bx
#define SUB_BX_TO_PTR_SI sub word ptr [si], bx
#define SUB_BX_TO_PTR_DI sub word ptr [di], bx

#define SUB_CX_TO_PTR_EAX sub word ptr [eax], cx
#define SUB_CX_TO_PTR_EBX sub word ptr [ebx], cx
#define SUB_CX_TO_PTR_ECX sub word ptr [ecx], cx
#define SUB_CX_TO_PTR_EDX sub word ptr [edx], cx
#define SUB_CX_TO_PTR_EDI sub word ptr [edi], cx
#define SUB_CX_TO_PTR_ESI sub word ptr [esi], cx
#define SUB_CX_TO_PTR_EBP sub word ptr [ebp], cx
#define SUB_CX_TO_PTR_ESP sub word ptr [esp], cx
#define SUB_CX_TO_PTR_BX sub word ptr [bx], cx
#define SUB_CX_TO_PTR_BP sub word ptr [bp], cx
#define SUB_CX_TO_PTR_SI sub word ptr [si], cx
#define SUB_CX_TO_PTR_DI sub word ptr [di], cx

#define SUB_DX_TO_PTR_EAX sub word ptr [eax], dx
#define SUB_DX_TO_PTR_EBX sub word ptr [ebx], dx
#define SUB_DX_TO_PTR_ECX sub word ptr [ecx], dx
#define SUB_DX_TO_PTR_EDX sub word ptr [edx], dx
#define SUB_DX_TO_PTR_EDI sub word ptr [edi], dx
#define SUB_DX_TO_PTR_ESI sub word ptr [esi], dx
#define SUB_DX_TO_PTR_EBP sub word ptr [ebp], dx
#define SUB_DX_TO_PTR_ESP sub word ptr [esp], dx
#define SUB_DX_TO_PTR_BX sub word ptr [bx], dx
#define SUB_DX_TO_PTR_BP sub word ptr [bp], dx
#define SUB_DX_TO_PTR_SI sub word ptr [si], dx
#define SUB_DX_TO_PTR_DI sub word ptr [di], dx

#define SUB_DI_TO_PTR_EAX sub word ptr [eax], di
#define SUB_DI_TO_PTR_EBX sub word ptr [ebx], di
#define SUB_DI_TO_PTR_ECX sub word ptr [ecx], di
#define SUB_DI_TO_PTR_EDX sub word ptr [edx], di
#define SUB_DI_TO_PTR_EDI sub word ptr [edi], di
#define SUB_DI_TO_PTR_ESI sub word ptr [esi], di
#define SUB_DI_TO_PTR_EBP sub word ptr [ebp], di
#define SUB_DI_TO_PTR_ESP sub word ptr [esp], di
#define SUB_DI_TO_PTR_BX sub word ptr [bx], di
#define SUB_DI_TO_PTR_BP sub word ptr [bp], di
#define SUB_DI_TO_PTR_SI sub word ptr [si], di
#define SUB_DI_TO_PTR_DI sub word ptr [di], di

#define SUB_SI_TO_PTR_EAX sub word ptr [eax], si
#define SUB_SI_TO_PTR_EBX sub word ptr [ebx], si
#define SUB_SI_TO_PTR_ECX sub word ptr [ecx], si
#define SUB_SI_TO_PTR_EDX sub word ptr [edx], si
#define SUB_SI_TO_PTR_EDI sub word ptr [edi], si
#define SUB_SI_TO_PTR_ESI sub word ptr [esi], si
#define SUB_SI_TO_PTR_EBP sub word ptr [ebp], si
#define SUB_SI_TO_PTR_ESP sub word ptr [esp], si
#define SUB_SI_TO_PTR_BX sub word ptr [bx], si
#define SUB_SI_TO_PTR_BP sub word ptr [bp], si
#define SUB_SI_TO_PTR_SI sub word ptr [si], si
#define SUB_SI_TO_PTR_DI sub word ptr [di], si

#define SUB_BP_TO_PTR_EAX sub word ptr [eax], bp
#define SUB_BP_TO_PTR_EBX sub word ptr [ebx], bp
#define SUB_BP_TO_PTR_ECX sub word ptr [ecx], bp
#define SUB_BP_TO_PTR_EDX sub word ptr [edx], bp
#define SUB_BP_TO_PTR_EDI sub word ptr [edi], bp
#define SUB_BP_TO_PTR_ESI sub word ptr [esi], bp
#define SUB_BP_TO_PTR_EBP sub word ptr [ebp], bp
#define SUB_BP_TO_PTR_ESP sub word ptr [esp], bp
#define SUB_BP_TO_PTR_BX sub word ptr [bx], bp
#define SUB_BP_TO_PTR_BP sub word ptr [bp], bp
#define SUB_BP_TO_PTR_SI sub word ptr [si], bp
#define SUB_BP_TO_PTR_DI sub word ptr [di], bp

#define SUB_SP_TO_PTR_EAX sub word ptr [eax], sp
#define SUB_SP_TO_PTR_EBX sub word ptr [ebx], sp
#define SUB_SP_TO_PTR_ECX sub word ptr [ecx], sp
#define SUB_SP_TO_PTR_EDX sub word ptr [edx], sp
#define SUB_SP_TO_PTR_EDI sub word ptr [edi], sp
#define SUB_SP_TO_PTR_ESI sub word ptr [esi], sp
#define SUB_SP_TO_PTR_EBP sub word ptr [ebp], sp
#define SUB_SP_TO_PTR_ESP sub word ptr [esp], sp
#define SUB_SP_TO_PTR_BX sub word ptr [bx], sp
#define SUB_SP_TO_PTR_BP sub word ptr [bp], sp
#define SUB_SP_TO_PTR_SI sub word ptr [si], sp
#define SUB_SP_TO_PTR_DI sub word ptr [di], sp

#define SUB_AX_FROM_PTR_EAX_(VALUE) sub ax, word ptr [eax + VALUE]
#define SUB_AX_FROM_PTR_EBX_(VALUE) sub ax, word ptr [ebx + VALUE]
#define SUB_AX_FROM_PTR_ECX_(VALUE) sub ax, word ptr [ecx + VALUE]
#define SUB_AX_FROM_PTR_EDX_(VALUE) sub ax, word ptr [edx + VALUE]
#define SUB_AX_FROM_PTR_EDI_(VALUE) sub ax, word ptr [edi + VALUE]
#define SUB_AX_FROM_PTR_ESI_(VALUE) sub ax, word ptr [esi + VALUE]
#define SUB_AX_FROM_PTR_EBP_(VALUE) sub ax, word ptr [ebp + VALUE]
#define SUB_AX_FROM_PTR_ESP_(VALUE) sub ax, word ptr [esp + VALUE]
#define SUB_AX_FROM_PTR_BX_(VALUE) sub ax, word ptr [bx + VALUE]
#define SUB_AX_FROM_PTR_BP_(VALUE) sub ax, word ptr [bp + VALUE]
#define SUB_AX_FROM_PTR_SI_(VALUE) sub ax, word ptr [si + VALUE]
#define SUB_AX_FROM_PTR_DI_(VALUE) sub ax, word ptr [di + VALUE]

#define SUB_BX_FROM_PTR_EAX_(VALUE) sub bx, word ptr [eax + VALUE]
#define SUB_BX_FROM_PTR_EBX_(VALUE) sub bx, word ptr [ebx + VALUE]
#define SUB_BX_FROM_PTR_ECX_(VALUE) sub bx, word ptr [ecx + VALUE]
#define SUB_BX_FROM_PTR_EDX_(VALUE) sub bx, word ptr [edx + VALUE]
#define SUB_BX_FROM_PTR_EDI_(VALUE) sub bx, word ptr [edi + VALUE]
#define SUB_BX_FROM_PTR_ESI_(VALUE) sub bx, word ptr [esi + VALUE]
#define SUB_BX_FROM_PTR_EBP_(VALUE) sub bx, word ptr [ebp + VALUE]
#define SUB_BX_FROM_PTR_ESP_(VALUE) sub bx, word ptr [esp + VALUE]
#define SUB_BX_FROM_PTR_BX_(VALUE) sub bx, word ptr [bx + VALUE]
#define SUB_BX_FROM_PTR_BP_(VALUE) sub bx, word ptr [bp + VALUE]
#define SUB_BX_FROM_PTR_SI_(VALUE) sub bx, word ptr [si + VALUE]
#define SUB_BX_FROM_PTR_DI_(VALUE) sub bx, word ptr [di + VALUE]

#define SUB_CX_FROM_PTR_EAX_(VALUE) sub cx, word ptr [eax + VALUE]
#define SUB_CX_FROM_PTR_EBX_(VALUE) sub cx, word ptr [ebx + VALUE]
#define SUB_CX_FROM_PTR_ECX_(VALUE) sub cx, word ptr [ecx + VALUE]
#define SUB_CX_FROM_PTR_EDX_(VALUE) sub cx, word ptr [edx + VALUE]
#define SUB_CX_FROM_PTR_EDI_(VALUE) sub cx, word ptr [edi + VALUE]
#define SUB_CX_FROM_PTR_ESI_(VALUE) sub cx, word ptr [esi + VALUE]
#define SUB_CX_FROM_PTR_EBP_(VALUE) sub cx, word ptr [ebp + VALUE]
#define SUB_CX_FROM_PTR_ESP_(VALUE) sub cx, word ptr [esp + VALUE]
#define SUB_CX_FROM_PTR_BX_(VALUE) sub cx, word ptr [bx + VALUE]
#define SUB_CX_FROM_PTR_BP_(VALUE) sub cx, word ptr [bp + VALUE]
#define SUB_CX_FROM_PTR_SI_(VALUE) sub cx, word ptr [si + VALUE]
#define SUB_CX_FROM_PTR_DI_(VALUE) sub cx, word ptr [di + VALUE]

#define SUB_DX_FROM_PTR_EAX_(VALUE) sub dx, word ptr [eax + VALUE]
#define SUB_DX_FROM_PTR_EBX_(VALUE) sub dx, word ptr [ebx + VALUE]
#define SUB_DX_FROM_PTR_ECX_(VALUE) sub dx, word ptr [ecx + VALUE]
#define SUB_DX_FROM_PTR_EDX_(VALUE) sub dx, word ptr [edx + VALUE]
#define SUB_DX_FROM_PTR_EDI_(VALUE) sub dx, word ptr [edi + VALUE]
#define SUB_DX_FROM_PTR_ESI_(VALUE) sub dx, word ptr [esi + VALUE]
#define SUB_DX_FROM_PTR_EBP_(VALUE) sub dx, word ptr [ebp + VALUE]
#define SUB_DX_FROM_PTR_ESP_(VALUE) sub dx, word ptr [esp + VALUE]
#define SUB_DX_FROM_PTR_BX_(VALUE) sub dx, word ptr [bx + VALUE]
#define SUB_DX_FROM_PTR_BP_(VALUE) sub dx, word ptr [bp + VALUE]
#define SUB_DX_FROM_PTR_SI_(VALUE) sub dx, word ptr [si + VALUE]
#define SUB_DX_FROM_PTR_DI_(VALUE) sub dx, word ptr [di + VALUE]

#define SUB_DI_FROM_PTR_EAX_(VALUE) sub di, word ptr [eax + VALUE]
#define SUB_DI_FROM_PTR_EBX_(VALUE) sub di, word ptr [ebx + VALUE]
#define SUB_DI_FROM_PTR_ECX_(VALUE) sub di, word ptr [ecx + VALUE]
#define SUB_DI_FROM_PTR_EDX_(VALUE) sub di, word ptr [edx + VALUE]
#define SUB_DI_FROM_PTR_EDI_(VALUE) sub di, word ptr [edi + VALUE]
#define SUB_DI_FROM_PTR_ESI_(VALUE) sub di, word ptr [esi + VALUE]
#define SUB_DI_FROM_PTR_EBP_(VALUE) sub di, word ptr [ebp + VALUE]
#define SUB_DI_FROM_PTR_ESP_(VALUE) sub di, word ptr [esp + VALUE]
#define SUB_DI_FROM_PTR_BX_(VALUE) sub di, word ptr [bx + VALUE]
#define SUB_DI_FROM_PTR_BP_(VALUE) sub di, word ptr [bp + VALUE]
#define SUB_DI_FROM_PTR_SI_(VALUE) sub di, word ptr [si + VALUE]
#define SUB_DI_FROM_PTR_DI_(VALUE) sub di, word ptr [di + VALUE]

#define SUB_SI_FROM_PTR_EAX_(VALUE) sub si, word ptr [eax + VALUE]
#define SUB_SI_FROM_PTR_EBX_(VALUE) sub si, word ptr [ebx + VALUE]
#define SUB_SI_FROM_PTR_ECX_(VALUE) sub si, word ptr [ecx + VALUE]
#define SUB_SI_FROM_PTR_EDX_(VALUE) sub si, word ptr [edx + VALUE]
#define SUB_SI_FROM_PTR_EDI_(VALUE) sub si, word ptr [edi + VALUE]
#define SUB_SI_FROM_PTR_ESI_(VALUE) sub si, word ptr [esi + VALUE]
#define SUB_SI_FROM_PTR_EBP_(VALUE) sub si, word ptr [ebp + VALUE]
#define SUB_SI_FROM_PTR_ESP_(VALUE) sub si, word ptr [esp + VALUE]
#define SUB_SI_FROM_PTR_BX_(VALUE) sub si, word ptr [bx + VALUE]
#define SUB_SI_FROM_PTR_BP_(VALUE) sub si, word ptr [bp + VALUE]
#define SUB_SI_FROM_PTR_SI_(VALUE) sub si, word ptr [si + VALUE]
#define SUB_SI_FROM_PTR_DI_(VALUE) sub si, word ptr [di + VALUE]

#define SUB_BP_FROM_PTR_EAX_(VALUE) sub bp, word ptr [eax + VALUE]
#define SUB_BP_FROM_PTR_EBX_(VALUE) sub bp, word ptr [ebx + VALUE]
#define SUB_BP_FROM_PTR_ECX_(VALUE) sub bp, word ptr [ecx + VALUE]
#define SUB_BP_FROM_PTR_EDX_(VALUE) sub bp, word ptr [edx + VALUE]
#define SUB_BP_FROM_PTR_EDI_(VALUE) sub bp, word ptr [edi + VALUE]
#define SUB_BP_FROM_PTR_ESI_(VALUE) sub bp, word ptr [esi + VALUE]
#define SUB_BP_FROM_PTR_EBP_(VALUE) sub bp, word ptr [ebp + VALUE]
#define SUB_BP_FROM_PTR_ESP_(VALUE) sub bp, word ptr [esp + VALUE]
#define SUB_BP_FROM_PTR_BX_(VALUE) sub bp, word ptr [bx + VALUE]
#define SUB_BP_FROM_PTR_BP_(VALUE) sub bp, word ptr [bp + VALUE]
#define SUB_BP_FROM_PTR_SI_(VALUE) sub bp, word ptr [si + VALUE]
#define SUB_BP_FROM_PTR_DI_(VALUE) sub bp, word ptr [di + VALUE]

#define SUB_SP_FROM_PTR_EAX_(VALUE) sub sp, word ptr [eax + VALUE]
#define SUB_SP_FROM_PTR_EBX_(VALUE) sub sp, word ptr [ebx + VALUE]
#define SUB_SP_FROM_PTR_ECX_(VALUE) sub sp, word ptr [ecx + VALUE]
#define SUB_SP_FROM_PTR_EDX_(VALUE) sub sp, word ptr [edx + VALUE]
#define SUB_SP_FROM_PTR_EDI_(VALUE) sub sp, word ptr [edi + VALUE]
#define SUB_SP_FROM_PTR_ESI_(VALUE) sub sp, word ptr [esi + VALUE]
#define SUB_SP_FROM_PTR_EBP_(VALUE) sub sp, word ptr [ebp + VALUE]
#define SUB_SP_FROM_PTR_ESP_(VALUE) sub sp, word ptr [esp + VALUE]
#define SUB_SP_FROM_PTR_BX_(VALUE) sub sp, word ptr [bx + VALUE]
#define SUB_SP_FROM_PTR_BP_(VALUE) sub sp, word ptr [bp + VALUE]
#define SUB_SP_FROM_PTR_SI_(VALUE) sub sp, word ptr [si + VALUE]
#define SUB_SP_FROM_PTR_DI_(VALUE) sub sp, word ptr [di + VALUE]

#define SUB_AX_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], ax
#define SUB_AX_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], ax
#define SUB_AX_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], ax
#define SUB_AX_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], ax
#define SUB_AX_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], ax
#define SUB_AX_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], ax
#define SUB_AX_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], ax
#define SUB_AX_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], ax
#define SUB_AX_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], ax
#define SUB_AX_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], ax
#define SUB_AX_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], ax
#define SUB_AX_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], ax

#define SUB_BX_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], bx
#define SUB_BX_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], bx
#define SUB_BX_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], bx
#define SUB_BX_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], bx
#define SUB_BX_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], bx
#define SUB_BX_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], bx
#define SUB_BX_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], bx
#define SUB_BX_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], bx
#define SUB_BX_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], bx
#define SUB_BX_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], bx
#define SUB_BX_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], bx
#define SUB_BX_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], bx

#define SUB_CX_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], cx
#define SUB_CX_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], cx
#define SUB_CX_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], cx
#define SUB_CX_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], cx
#define SUB_CX_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], cx
#define SUB_CX_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], cx
#define SUB_CX_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], cx
#define SUB_CX_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], cx
#define SUB_CX_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], cx
#define SUB_CX_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], cx
#define SUB_CX_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], cx
#define SUB_CX_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], cx

#define SUB_DX_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], dx
#define SUB_DX_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], dx
#define SUB_DX_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], dx
#define SUB_DX_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], dx
#define SUB_DX_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], dx
#define SUB_DX_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], dx
#define SUB_DX_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], dx
#define SUB_DX_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], dx
#define SUB_DX_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], dx
#define SUB_DX_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], dx
#define SUB_DX_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], dx
#define SUB_DX_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], dx

#define SUB_DI_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], di
#define SUB_DI_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], di
#define SUB_DI_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], di
#define SUB_DI_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], di
#define SUB_DI_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], di
#define SUB_DI_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], di
#define SUB_DI_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], di
#define SUB_DI_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], di
#define SUB_DI_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], di
#define SUB_DI_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], di
#define SUB_DI_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], di
#define SUB_DI_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], di

#define SUB_SI_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], si
#define SUB_SI_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], si
#define SUB_SI_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], si
#define SUB_SI_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], si
#define SUB_SI_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], si
#define SUB_SI_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], si
#define SUB_SI_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], si
#define SUB_SI_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], si
#define SUB_SI_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], si
#define SUB_SI_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], si
#define SUB_SI_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], si
#define SUB_SI_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], si

#define SUB_BP_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], bp
#define SUB_BP_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], bp
#define SUB_BP_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], bp
#define SUB_BP_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], bp
#define SUB_BP_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], bp
#define SUB_BP_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], bp
#define SUB_BP_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], bp
#define SUB_BP_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], bp
#define SUB_BP_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], bp
#define SUB_BP_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], bp
#define SUB_BP_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], bp
#define SUB_BP_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], bp

#define SUB_SP_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], sp
#define SUB_SP_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], sp
#define SUB_SP_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], sp
#define SUB_SP_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], sp
#define SUB_SP_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], sp
#define SUB_SP_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], sp
#define SUB_SP_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], sp
#define SUB_SP_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], sp
#define SUB_SP_TO_PTR_BX_(VALUE) sub word ptr [bx + VALUE], sp
#define SUB_SP_TO_PTR_BP_(VALUE) sub word ptr [bp + VALUE], sp
#define SUB_SP_TO_PTR_SI_(VALUE) sub word ptr [si + VALUE], sp
#define SUB_SP_TO_PTR_DI_(VALUE) sub word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_AX_FROM_PTR_(VALUE) sub ax, word ptr [VALUE]
#define SUB_BX_FROM_PTR_(VALUE) sub bx, word ptr [VALUE]
#define SUB_CX_FROM_PTR_(VALUE) sub cx, word ptr [VALUE]
#define SUB_DX_FROM_PTR_(VALUE) sub dx, word ptr [VALUE]
#define SUB_DI_FROM_PTR_(VALUE) sub di, word ptr [VALUE]
#define SUB_SI_FROM_PTR_(VALUE) sub si, word ptr [VALUE]
#define SUB_BP_FROM_PTR_(VALUE) sub bp, word ptr [VALUE]
#define SUB_SP_FROM_PTR_(VALUE) sub sp, word ptr [VALUE]
#define SUB_R8W_FROM_PTR_(VALUE) sub r8w, word ptr [VALUE]
#define SUB_R9W_FROM_PTR_(VALUE) sub r9w, word ptr [VALUE]
#define SUB_R10W_FROM_PTR_(VALUE) sub r10w, word ptr [VALUE]
#define SUB_R11W_FROM_PTR_(VALUE) sub r11w, word ptr [VALUE]
#define SUB_R12W_FROM_PTR_(VALUE) sub r12w, word ptr [VALUE]
#define SUB_R13W_FROM_PTR_(VALUE) sub r13w, word ptr [VALUE]
#define SUB_R14W_FROM_PTR_(VALUE) sub r14w, word ptr [VALUE]
#define SUB_R15W_FROM_PTR_(VALUE) sub r15w, word ptr [VALUE]

#define SUB_AX_TO_PTR_(VALUE) sub word ptr [VALUE], ax
#define SUB_BX_TO_PTR_(VALUE) sub word ptr [VALUE], bx
#define SUB_CX_TO_PTR_(VALUE) sub word ptr [VALUE], cx
#define SUB_DX_TO_PTR_(VALUE) sub word ptr [VALUE], dx
#define SUB_DI_TO_PTR_(VALUE) sub word ptr [VALUE], di
#define SUB_SI_TO_PTR_(VALUE) sub word ptr [VALUE], si
#define SUB_BP_TO_PTR_(VALUE) sub word ptr [VALUE], bp
#define SUB_SP_TO_PTR_(VALUE) sub word ptr [VALUE], sp
#define SUB_R8W_TO_PTR_(VALUE) sub word ptr [VALUE], r8w
#define SUB_R9W_TO_PTR_(VALUE) sub word ptr [VALUE], r9w
#define SUB_R10W_TO_PTR_(VALUE) sub word ptr [VALUE], r10w
#define SUB_R11W_TO_PTR_(VALUE) sub word ptr [VALUE], r11w
#define SUB_R12W_TO_PTR_(VALUE) sub word ptr [VALUE], r12w
#define SUB_R13W_TO_PTR_(VALUE) sub word ptr [VALUE], r13w
#define SUB_R14W_TO_PTR_(VALUE) sub word ptr [VALUE], r14w
#define SUB_R15W_TO_PTR_(VALUE) sub word ptr [VALUE], r15w

#define SUB_AX_FROM_PTR_RAX sub ax, word ptr [rax]
#define SUB_AX_FROM_PTR_RBX sub ax, word ptr [rbx]
#define SUB_AX_FROM_PTR_RCX sub ax, word ptr [rcx]
#define SUB_AX_FROM_PTR_RDX sub ax, word ptr [rdx]
#define SUB_AX_FROM_PTR_RDI sub ax, word ptr [rdi]
#define SUB_AX_FROM_PTR_RSI sub ax, word ptr [rsi]
#define SUB_AX_FROM_PTR_RBP sub ax, word ptr [rbp]
#define SUB_AX_FROM_PTR_RSP sub ax, word ptr [rsp]
#define SUB_AX_FROM_PTR_R8 sub ax, word ptr [r8]
#define SUB_AX_FROM_PTR_R9 sub ax, word ptr [r9]
#define SUB_AX_FROM_PTR_R10 sub ax, word ptr [r10]
#define SUB_AX_FROM_PTR_R11 sub ax, word ptr [r11]
#define SUB_AX_FROM_PTR_R12 sub ax, word ptr [r12]
#define SUB_AX_FROM_PTR_R13 sub ax, word ptr [r13]
#define SUB_AX_FROM_PTR_R14 sub ax, word ptr [r14]
#define SUB_AX_FROM_PTR_R15 sub ax, word ptr [r15]
#define SUB_AX_FROM_PTR_EAX sub ax, word ptr [eax]
#define SUB_AX_FROM_PTR_EBX sub ax, word ptr [ebx]
#define SUB_AX_FROM_PTR_ECX sub ax, word ptr [ecx]
#define SUB_AX_FROM_PTR_EDX sub ax, word ptr [edx]
#define SUB_AX_FROM_PTR_EDI sub ax, word ptr [edi]
#define SUB_AX_FROM_PTR_ESI sub ax, word ptr [esi]
#define SUB_AX_FROM_PTR_EBP sub ax, word ptr [ebp]
#define SUB_AX_FROM_PTR_ESP sub ax, word ptr [esp]

#define SUB_BX_FROM_PTR_RAX sub bx, word ptr [rax]
#define SUB_BX_FROM_PTR_RBX sub bx, word ptr [rbx]
#define SUB_BX_FROM_PTR_RCX sub bx, word ptr [rcx]
#define SUB_BX_FROM_PTR_RDX sub bx, word ptr [rdx]
#define SUB_BX_FROM_PTR_RDI sub bx, word ptr [rdi]
#define SUB_BX_FROM_PTR_RSI sub bx, word ptr [rsi]
#define SUB_BX_FROM_PTR_RBP sub bx, word ptr [rbp]
#define SUB_BX_FROM_PTR_RSP sub bx, word ptr [rsp]
#define SUB_BX_FROM_PTR_R8 sub bx, word ptr [r8]
#define SUB_BX_FROM_PTR_R9 sub bx, word ptr [r9]
#define SUB_BX_FROM_PTR_R10 sub bx, word ptr [r10]
#define SUB_BX_FROM_PTR_R11 sub bx, word ptr [r11]
#define SUB_BX_FROM_PTR_R12 sub bx, word ptr [r12]
#define SUB_BX_FROM_PTR_R13 sub bx, word ptr [r13]
#define SUB_BX_FROM_PTR_R14 sub bx, word ptr [r14]
#define SUB_BX_FROM_PTR_R15 sub bx, word ptr [r15]
#define SUB_BX_FROM_PTR_EAX sub bx, word ptr [eax]
#define SUB_BX_FROM_PTR_EBX sub bx, word ptr [ebx]
#define SUB_BX_FROM_PTR_ECX sub bx, word ptr [ecx]
#define SUB_BX_FROM_PTR_EDX sub bx, word ptr [edx]
#define SUB_BX_FROM_PTR_EDI sub bx, word ptr [edi]
#define SUB_BX_FROM_PTR_ESI sub bx, word ptr [esi]
#define SUB_BX_FROM_PTR_EBP sub bx, word ptr [ebp]
#define SUB_BX_FROM_PTR_ESP sub bx, word ptr [esp]

#define SUB_CX_FROM_PTR_RAX sub cx, word ptr [rax]
#define SUB_CX_FROM_PTR_RBX sub cx, word ptr [rbx]
#define SUB_CX_FROM_PTR_RCX sub cx, word ptr [rcx]
#define SUB_CX_FROM_PTR_RDX sub cx, word ptr [rdx]
#define SUB_CX_FROM_PTR_RDI sub cx, word ptr [rdi]
#define SUB_CX_FROM_PTR_RSI sub cx, word ptr [rsi]
#define SUB_CX_FROM_PTR_RBP sub cx, word ptr [rbp]
#define SUB_CX_FROM_PTR_RSP sub cx, word ptr [rsp]
#define SUB_CX_FROM_PTR_R8 sub cx, word ptr [r8]
#define SUB_CX_FROM_PTR_R9 sub cx, word ptr [r9]
#define SUB_CX_FROM_PTR_R10 sub cx, word ptr [r10]
#define SUB_CX_FROM_PTR_R11 sub cx, word ptr [r11]
#define SUB_CX_FROM_PTR_R12 sub cx, word ptr [r12]
#define SUB_CX_FROM_PTR_R13 sub cx, word ptr [r13]
#define SUB_CX_FROM_PTR_R14 sub cx, word ptr [r14]
#define SUB_CX_FROM_PTR_R15 sub cx, word ptr [r15]
#define SUB_CX_FROM_PTR_EAX sub cx, word ptr [eax]
#define SUB_CX_FROM_PTR_EBX sub cx, word ptr [ebx]
#define SUB_CX_FROM_PTR_ECX sub cx, word ptr [ecx]
#define SUB_CX_FROM_PTR_EDX sub cx, word ptr [edx]
#define SUB_CX_FROM_PTR_EDI sub cx, word ptr [edi]
#define SUB_CX_FROM_PTR_ESI sub cx, word ptr [esi]
#define SUB_CX_FROM_PTR_EBP sub cx, word ptr [ebp]
#define SUB_CX_FROM_PTR_ESP sub cx, word ptr [esp]

#define SUB_DX_FROM_PTR_RAX sub dx, word ptr [rax]
#define SUB_DX_FROM_PTR_RBX sub dx, word ptr [rbx]
#define SUB_DX_FROM_PTR_RCX sub dx, word ptr [rcx]
#define SUB_DX_FROM_PTR_RDX sub dx, word ptr [rdx]
#define SUB_DX_FROM_PTR_RDI sub dx, word ptr [rdi]
#define SUB_DX_FROM_PTR_RSI sub dx, word ptr [rsi]
#define SUB_DX_FROM_PTR_RBP sub dx, word ptr [rbp]
#define SUB_DX_FROM_PTR_RSP sub dx, word ptr [rsp]
#define SUB_DX_FROM_PTR_R8 sub dx, word ptr [r8]
#define SUB_DX_FROM_PTR_R9 sub dx, word ptr [r9]
#define SUB_DX_FROM_PTR_R10 sub dx, word ptr [r10]
#define SUB_DX_FROM_PTR_R11 sub dx, word ptr [r11]
#define SUB_DX_FROM_PTR_R12 sub dx, word ptr [r12]
#define SUB_DX_FROM_PTR_R13 sub dx, word ptr [r13]
#define SUB_DX_FROM_PTR_R14 sub dx, word ptr [r14]
#define SUB_DX_FROM_PTR_R15 sub dx, word ptr [r15]
#define SUB_DX_FROM_PTR_EAX sub dx, word ptr [eax]
#define SUB_DX_FROM_PTR_EBX sub dx, word ptr [ebx]
#define SUB_DX_FROM_PTR_ECX sub dx, word ptr [ecx]
#define SUB_DX_FROM_PTR_EDX sub dx, word ptr [edx]
#define SUB_DX_FROM_PTR_EDI sub dx, word ptr [edi]
#define SUB_DX_FROM_PTR_ESI sub dx, word ptr [esi]
#define SUB_DX_FROM_PTR_EBP sub dx, word ptr [ebp]
#define SUB_DX_FROM_PTR_ESP sub dx, word ptr [esp]

#define SUB_DI_FROM_PTR_RAX sub di, word ptr [rax]
#define SUB_DI_FROM_PTR_RBX sub di, word ptr [rbx]
#define SUB_DI_FROM_PTR_RCX sub di, word ptr [rcx]
#define SUB_DI_FROM_PTR_RDX sub di, word ptr [rdx]
#define SUB_DI_FROM_PTR_RDI sub di, word ptr [rdi]
#define SUB_DI_FROM_PTR_RSI sub di, word ptr [rsi]
#define SUB_DI_FROM_PTR_RBP sub di, word ptr [rbp]
#define SUB_DI_FROM_PTR_RSP sub di, word ptr [rsp]
#define SUB_DI_FROM_PTR_R8 sub di, word ptr [r8]
#define SUB_DI_FROM_PTR_R9 sub di, word ptr [r9]
#define SUB_DI_FROM_PTR_R10 sub di, word ptr [r10]
#define SUB_DI_FROM_PTR_R11 sub di, word ptr [r11]
#define SUB_DI_FROM_PTR_R12 sub di, word ptr [r12]
#define SUB_DI_FROM_PTR_R13 sub di, word ptr [r13]
#define SUB_DI_FROM_PTR_R14 sub di, word ptr [r14]
#define SUB_DI_FROM_PTR_R15 sub di, word ptr [r15]
#define SUB_DI_FROM_PTR_EAX sub di, word ptr [eax]
#define SUB_DI_FROM_PTR_EBX sub di, word ptr [ebx]
#define SUB_DI_FROM_PTR_ECX sub di, word ptr [ecx]
#define SUB_DI_FROM_PTR_EDX sub di, word ptr [edx]
#define SUB_DI_FROM_PTR_EDI sub di, word ptr [edi]
#define SUB_DI_FROM_PTR_ESI sub di, word ptr [esi]
#define SUB_DI_FROM_PTR_EBP sub di, word ptr [ebp]
#define SUB_DI_FROM_PTR_ESP sub di, word ptr [esp]

#define SUB_SI_FROM_PTR_RAX sub si, word ptr [rax]
#define SUB_SI_FROM_PTR_RBX sub si, word ptr [rbx]
#define SUB_SI_FROM_PTR_RCX sub si, word ptr [rcx]
#define SUB_SI_FROM_PTR_RDX sub si, word ptr [rdx]
#define SUB_SI_FROM_PTR_RDI sub si, word ptr [rdi]
#define SUB_SI_FROM_PTR_RSI sub si, word ptr [rsi]
#define SUB_SI_FROM_PTR_RBP sub si, word ptr [rbp]
#define SUB_SI_FROM_PTR_RSP sub si, word ptr [rsp]
#define SUB_SI_FROM_PTR_R8 sub si, word ptr [r8]
#define SUB_SI_FROM_PTR_R9 sub si, word ptr [r9]
#define SUB_SI_FROM_PTR_R10 sub si, word ptr [r10]
#define SUB_SI_FROM_PTR_R11 sub si, word ptr [r11]
#define SUB_SI_FROM_PTR_R12 sub si, word ptr [r12]
#define SUB_SI_FROM_PTR_R13 sub si, word ptr [r13]
#define SUB_SI_FROM_PTR_R14 sub si, word ptr [r14]
#define SUB_SI_FROM_PTR_R15 sub si, word ptr [r15]
#define SUB_SI_FROM_PTR_EAX sub si, word ptr [eax]
#define SUB_SI_FROM_PTR_EBX sub si, word ptr [ebx]
#define SUB_SI_FROM_PTR_ECX sub si, word ptr [ecx]
#define SUB_SI_FROM_PTR_EDX sub si, word ptr [edx]
#define SUB_SI_FROM_PTR_EDI sub si, word ptr [edi]
#define SUB_SI_FROM_PTR_ESI sub si, word ptr [esi]
#define SUB_SI_FROM_PTR_EBP sub si, word ptr [ebp]
#define SUB_SI_FROM_PTR_ESP sub si, word ptr [esp]

#define SUB_BP_FROM_PTR_RAX sub bp, word ptr [rax]
#define SUB_BP_FROM_PTR_RBX sub bp, word ptr [rbx]
#define SUB_BP_FROM_PTR_RCX sub bp, word ptr [rcx]
#define SUB_BP_FROM_PTR_RDX sub bp, word ptr [rdx]
#define SUB_BP_FROM_PTR_RDI sub bp, word ptr [rdi]
#define SUB_BP_FROM_PTR_RSI sub bp, word ptr [rsi]
#define SUB_BP_FROM_PTR_RBP sub bp, word ptr [rbp]
#define SUB_BP_FROM_PTR_RSP sub bp, word ptr [rsp]
#define SUB_BP_FROM_PTR_R8 sub bp, word ptr [r8]
#define SUB_BP_FROM_PTR_R9 sub bp, word ptr [r9]
#define SUB_BP_FROM_PTR_R10 sub bp, word ptr [r10]
#define SUB_BP_FROM_PTR_R11 sub bp, word ptr [r11]
#define SUB_BP_FROM_PTR_R12 sub bp, word ptr [r12]
#define SUB_BP_FROM_PTR_R13 sub bp, word ptr [r13]
#define SUB_BP_FROM_PTR_R14 sub bp, word ptr [r14]
#define SUB_BP_FROM_PTR_R15 sub bp, word ptr [r15]
#define SUB_BP_FROM_PTR_EAX sub bp, word ptr [eax]
#define SUB_BP_FROM_PTR_EBX sub bp, word ptr [ebx]
#define SUB_BP_FROM_PTR_ECX sub bp, word ptr [ecx]
#define SUB_BP_FROM_PTR_EDX sub bp, word ptr [edx]
#define SUB_BP_FROM_PTR_EDI sub bp, word ptr [edi]
#define SUB_BP_FROM_PTR_ESI sub bp, word ptr [esi]
#define SUB_BP_FROM_PTR_EBP sub bp, word ptr [ebp]
#define SUB_BP_FROM_PTR_ESP sub bp, word ptr [esp]

#define SUB_SP_FROM_PTR_RAX sub sp, word ptr [rax]
#define SUB_SP_FROM_PTR_RBX sub sp, word ptr [rbx]
#define SUB_SP_FROM_PTR_RCX sub sp, word ptr [rcx]
#define SUB_SP_FROM_PTR_RDX sub sp, word ptr [rdx]
#define SUB_SP_FROM_PTR_RDI sub sp, word ptr [rdi]
#define SUB_SP_FROM_PTR_RSI sub sp, word ptr [rsi]
#define SUB_SP_FROM_PTR_RBP sub sp, word ptr [rbp]
#define SUB_SP_FROM_PTR_RSP sub sp, word ptr [rsp]
#define SUB_SP_FROM_PTR_R8 sub sp, word ptr [r8]
#define SUB_SP_FROM_PTR_R9 sub sp, word ptr [r9]
#define SUB_SP_FROM_PTR_R10 sub sp, word ptr [r10]
#define SUB_SP_FROM_PTR_R11 sub sp, word ptr [r11]
#define SUB_SP_FROM_PTR_R12 sub sp, word ptr [r12]
#define SUB_SP_FROM_PTR_R13 sub sp, word ptr [r13]
#define SUB_SP_FROM_PTR_R14 sub sp, word ptr [r14]
#define SUB_SP_FROM_PTR_R15 sub sp, word ptr [r15]
#define SUB_SP_FROM_PTR_EAX sub sp, word ptr [eax]
#define SUB_SP_FROM_PTR_EBX sub sp, word ptr [ebx]
#define SUB_SP_FROM_PTR_ECX sub sp, word ptr [ecx]
#define SUB_SP_FROM_PTR_EDX sub sp, word ptr [edx]
#define SUB_SP_FROM_PTR_EDI sub sp, word ptr [edi]
#define SUB_SP_FROM_PTR_ESI sub sp, word ptr [esi]
#define SUB_SP_FROM_PTR_EBP sub sp, word ptr [ebp]
#define SUB_SP_FROM_PTR_ESP sub sp, word ptr [esp]

#define SUB_R8W_FROM_PTR_RAX sub r8w, word ptr [rax]
#define SUB_R8W_FROM_PTR_RBX sub r8w, word ptr [rbx]
#define SUB_R8W_FROM_PTR_RCX sub r8w, word ptr [rcx]
#define SUB_R8W_FROM_PTR_RDX sub r8w, word ptr [rdx]
#define SUB_R8W_FROM_PTR_RDI sub r8w, word ptr [rdi]
#define SUB_R8W_FROM_PTR_RSI sub r8w, word ptr [rsi]
#define SUB_R8W_FROM_PTR_RBP sub r8w, word ptr [rbp]
#define SUB_R8W_FROM_PTR_RSP sub r8w, word ptr [rsp]
#define SUB_R8W_FROM_PTR_R8 sub r8w, word ptr [r8]
#define SUB_R8W_FROM_PTR_R9 sub r8w, word ptr [r9]
#define SUB_R8W_FROM_PTR_R10 sub r8w, word ptr [r10]
#define SUB_R8W_FROM_PTR_R11 sub r8w, word ptr [r11]
#define SUB_R8W_FROM_PTR_R12 sub r8w, word ptr [r12]
#define SUB_R8W_FROM_PTR_R13 sub r8w, word ptr [r13]
#define SUB_R8W_FROM_PTR_R14 sub r8w, word ptr [r14]
#define SUB_R8W_FROM_PTR_R15 sub r8w, word ptr [r15]
#define SUB_R8W_FROM_PTR_EAX sub r8w, word ptr [eax]
#define SUB_R8W_FROM_PTR_EBX sub r8w, word ptr [ebx]
#define SUB_R8W_FROM_PTR_ECX sub r8w, word ptr [ecx]
#define SUB_R8W_FROM_PTR_EDX sub r8w, word ptr [edx]
#define SUB_R8W_FROM_PTR_EDI sub r8w, word ptr [edi]
#define SUB_R8W_FROM_PTR_ESI sub r8w, word ptr [esi]
#define SUB_R8W_FROM_PTR_EBP sub r8w, word ptr [ebp]
#define SUB_R8W_FROM_PTR_ESP sub r8w, word ptr [esp]

#define SUB_R9W_FROM_PTR_RAX sub r9w, word ptr [rax]
#define SUB_R9W_FROM_PTR_RBX sub r9w, word ptr [rbx]
#define SUB_R9W_FROM_PTR_RCX sub r9w, word ptr [rcx]
#define SUB_R9W_FROM_PTR_RDX sub r9w, word ptr [rdx]
#define SUB_R9W_FROM_PTR_RDI sub r9w, word ptr [rdi]
#define SUB_R9W_FROM_PTR_RSI sub r9w, word ptr [rsi]
#define SUB_R9W_FROM_PTR_RBP sub r9w, word ptr [rbp]
#define SUB_R9W_FROM_PTR_RSP sub r9w, word ptr [rsp]
#define SUB_R9W_FROM_PTR_R8 sub r9w, word ptr [r8]
#define SUB_R9W_FROM_PTR_R9 sub r9w, word ptr [r9]
#define SUB_R9W_FROM_PTR_R10 sub r9w, word ptr [r10]
#define SUB_R9W_FROM_PTR_R11 sub r9w, word ptr [r11]
#define SUB_R9W_FROM_PTR_R12 sub r9w, word ptr [r12]
#define SUB_R9W_FROM_PTR_R13 sub r9w, word ptr [r13]
#define SUB_R9W_FROM_PTR_R14 sub r9w, word ptr [r14]
#define SUB_R9W_FROM_PTR_R15 sub r9w, word ptr [r15]
#define SUB_R9W_FROM_PTR_EAX sub r9w, word ptr [eax]
#define SUB_R9W_FROM_PTR_EBX sub r9w, word ptr [ebx]
#define SUB_R9W_FROM_PTR_ECX sub r9w, word ptr [ecx]
#define SUB_R9W_FROM_PTR_EDX sub r9w, word ptr [edx]
#define SUB_R9W_FROM_PTR_EDI sub r9w, word ptr [edi]
#define SUB_R9W_FROM_PTR_ESI sub r9w, word ptr [esi]
#define SUB_R9W_FROM_PTR_EBP sub r9w, word ptr [ebp]
#define SUB_R9W_FROM_PTR_ESP sub r9w, word ptr [esp]

#define SUB_R10W_FROM_PTR_RAX sub r10w, word ptr [rax]
#define SUB_R10W_FROM_PTR_RBX sub r10w, word ptr [rbx]
#define SUB_R10W_FROM_PTR_RCX sub r10w, word ptr [rcx]
#define SUB_R10W_FROM_PTR_RDX sub r10w, word ptr [rdx]
#define SUB_R10W_FROM_PTR_RDI sub r10w, word ptr [rdi]
#define SUB_R10W_FROM_PTR_RSI sub r10w, word ptr [rsi]
#define SUB_R10W_FROM_PTR_RBP sub r10w, word ptr [rbp]
#define SUB_R10W_FROM_PTR_RSP sub r10w, word ptr [rsp]
#define SUB_R10W_FROM_PTR_R8 sub r10w, word ptr [r8]
#define SUB_R10W_FROM_PTR_R9 sub r10w, word ptr [r9]
#define SUB_R10W_FROM_PTR_R10 sub r10w, word ptr [r10]
#define SUB_R10W_FROM_PTR_R11 sub r10w, word ptr [r11]
#define SUB_R10W_FROM_PTR_R12 sub r10w, word ptr [r12]
#define SUB_R10W_FROM_PTR_R13 sub r10w, word ptr [r13]
#define SUB_R10W_FROM_PTR_R14 sub r10w, word ptr [r14]
#define SUB_R10W_FROM_PTR_R15 sub r10w, word ptr [r15]
#define SUB_R10W_FROM_PTR_EAX sub r10w, word ptr [eax]
#define SUB_R10W_FROM_PTR_EBX sub r10w, word ptr [ebx]
#define SUB_R10W_FROM_PTR_ECX sub r10w, word ptr [ecx]
#define SUB_R10W_FROM_PTR_EDX sub r10w, word ptr [edx]
#define SUB_R10W_FROM_PTR_EDI sub r10w, word ptr [edi]
#define SUB_R10W_FROM_PTR_ESI sub r10w, word ptr [esi]
#define SUB_R10W_FROM_PTR_EBP sub r10w, word ptr [ebp]
#define SUB_R10W_FROM_PTR_ESP sub r10w, word ptr [esp]

#define SUB_R11W_FROM_PTR_RAX sub r11w, word ptr [rax]
#define SUB_R11W_FROM_PTR_RBX sub r11w, word ptr [rbx]
#define SUB_R11W_FROM_PTR_RCX sub r11w, word ptr [rcx]
#define SUB_R11W_FROM_PTR_RDX sub r11w, word ptr [rdx]
#define SUB_R11W_FROM_PTR_RDI sub r11w, word ptr [rdi]
#define SUB_R11W_FROM_PTR_RSI sub r11w, word ptr [rsi]
#define SUB_R11W_FROM_PTR_RBP sub r11w, word ptr [rbp]
#define SUB_R11W_FROM_PTR_RSP sub r11w, word ptr [rsp]
#define SUB_R11W_FROM_PTR_R8 sub r11w, word ptr [r8]
#define SUB_R11W_FROM_PTR_R9 sub r11w, word ptr [r9]
#define SUB_R11W_FROM_PTR_R10 sub r11w, word ptr [r10]
#define SUB_R11W_FROM_PTR_R11 sub r11w, word ptr [r11]
#define SUB_R11W_FROM_PTR_R12 sub r11w, word ptr [r12]
#define SUB_R11W_FROM_PTR_R13 sub r11w, word ptr [r13]
#define SUB_R11W_FROM_PTR_R14 sub r11w, word ptr [r14]
#define SUB_R11W_FROM_PTR_R15 sub r11w, word ptr [r15]
#define SUB_R11W_FROM_PTR_EAX sub r11w, word ptr [eax]
#define SUB_R11W_FROM_PTR_EBX sub r11w, word ptr [ebx]
#define SUB_R11W_FROM_PTR_ECX sub r11w, word ptr [ecx]
#define SUB_R11W_FROM_PTR_EDX sub r11w, word ptr [edx]
#define SUB_R11W_FROM_PTR_EDI sub r11w, word ptr [edi]
#define SUB_R11W_FROM_PTR_ESI sub r11w, word ptr [esi]
#define SUB_R11W_FROM_PTR_EBP sub r11w, word ptr [ebp]
#define SUB_R11W_FROM_PTR_ESP sub r11w, word ptr [esp]

#define SUB_R12W_FROM_PTR_RAX sub r12w, word ptr [rax]
#define SUB_R12W_FROM_PTR_RBX sub r12w, word ptr [rbx]
#define SUB_R12W_FROM_PTR_RCX sub r12w, word ptr [rcx]
#define SUB_R12W_FROM_PTR_RDX sub r12w, word ptr [rdx]
#define SUB_R12W_FROM_PTR_RDI sub r12w, word ptr [rdi]
#define SUB_R12W_FROM_PTR_RSI sub r12w, word ptr [rsi]
#define SUB_R12W_FROM_PTR_RBP sub r12w, word ptr [rbp]
#define SUB_R12W_FROM_PTR_RSP sub r12w, word ptr [rsp]
#define SUB_R12W_FROM_PTR_R8 sub r12w, word ptr [r8]
#define SUB_R12W_FROM_PTR_R9 sub r12w, word ptr [r9]
#define SUB_R12W_FROM_PTR_R10 sub r12w, word ptr [r10]
#define SUB_R12W_FROM_PTR_R11 sub r12w, word ptr [r11]
#define SUB_R12W_FROM_PTR_R12 sub r12w, word ptr [r12]
#define SUB_R12W_FROM_PTR_R13 sub r12w, word ptr [r13]
#define SUB_R12W_FROM_PTR_R14 sub r12w, word ptr [r14]
#define SUB_R12W_FROM_PTR_R15 sub r12w, word ptr [r15]
#define SUB_R12W_FROM_PTR_EAX sub r12w, word ptr [eax]
#define SUB_R12W_FROM_PTR_EBX sub r12w, word ptr [ebx]
#define SUB_R12W_FROM_PTR_ECX sub r12w, word ptr [ecx]
#define SUB_R12W_FROM_PTR_EDX sub r12w, word ptr [edx]
#define SUB_R12W_FROM_PTR_EDI sub r12w, word ptr [edi]
#define SUB_R12W_FROM_PTR_ESI sub r12w, word ptr [esi]
#define SUB_R12W_FROM_PTR_EBP sub r12w, word ptr [ebp]
#define SUB_R12W_FROM_PTR_ESP sub r12w, word ptr [esp]

#define SUB_R13W_FROM_PTR_RAX sub r13w, word ptr [rax]
#define SUB_R13W_FROM_PTR_RBX sub r13w, word ptr [rbx]
#define SUB_R13W_FROM_PTR_RCX sub r13w, word ptr [rcx]
#define SUB_R13W_FROM_PTR_RDX sub r13w, word ptr [rdx]
#define SUB_R13W_FROM_PTR_RDI sub r13w, word ptr [rdi]
#define SUB_R13W_FROM_PTR_RSI sub r13w, word ptr [rsi]
#define SUB_R13W_FROM_PTR_RBP sub r13w, word ptr [rbp]
#define SUB_R13W_FROM_PTR_RSP sub r13w, word ptr [rsp]
#define SUB_R13W_FROM_PTR_R8 sub r13w, word ptr [r8]
#define SUB_R13W_FROM_PTR_R9 sub r13w, word ptr [r9]
#define SUB_R13W_FROM_PTR_R10 sub r13w, word ptr [r10]
#define SUB_R13W_FROM_PTR_R11 sub r13w, word ptr [r11]
#define SUB_R13W_FROM_PTR_R12 sub r13w, word ptr [r12]
#define SUB_R13W_FROM_PTR_R13 sub r13w, word ptr [r13]
#define SUB_R13W_FROM_PTR_R14 sub r13w, word ptr [r14]
#define SUB_R13W_FROM_PTR_R15 sub r13w, word ptr [r15]
#define SUB_R13W_FROM_PTR_EAX sub r13w, word ptr [eax]
#define SUB_R13W_FROM_PTR_EBX sub r13w, word ptr [ebx]
#define SUB_R13W_FROM_PTR_ECX sub r13w, word ptr [ecx]
#define SUB_R13W_FROM_PTR_EDX sub r13w, word ptr [edx]
#define SUB_R13W_FROM_PTR_EDI sub r13w, word ptr [edi]
#define SUB_R13W_FROM_PTR_ESI sub r13w, word ptr [esi]
#define SUB_R13W_FROM_PTR_EBP sub r13w, word ptr [ebp]
#define SUB_R13W_FROM_PTR_ESP sub r13w, word ptr [esp]

#define SUB_R14W_FROM_PTR_RAX sub r14w, word ptr [rax]
#define SUB_R14W_FROM_PTR_RBX sub r14w, word ptr [rbx]
#define SUB_R14W_FROM_PTR_RCX sub r14w, word ptr [rcx]
#define SUB_R14W_FROM_PTR_RDX sub r14w, word ptr [rdx]
#define SUB_R14W_FROM_PTR_RDI sub r14w, word ptr [rdi]
#define SUB_R14W_FROM_PTR_RSI sub r14w, word ptr [rsi]
#define SUB_R14W_FROM_PTR_RBP sub r14w, word ptr [rbp]
#define SUB_R14W_FROM_PTR_RSP sub r14w, word ptr [rsp]
#define SUB_R14W_FROM_PTR_R8 sub r14w, word ptr [r8]
#define SUB_R14W_FROM_PTR_R9 sub r14w, word ptr [r9]
#define SUB_R14W_FROM_PTR_R10 sub r14w, word ptr [r10]
#define SUB_R14W_FROM_PTR_R11 sub r14w, word ptr [r11]
#define SUB_R14W_FROM_PTR_R12 sub r14w, word ptr [r12]
#define SUB_R14W_FROM_PTR_R13 sub r14w, word ptr [r13]
#define SUB_R14W_FROM_PTR_R14 sub r14w, word ptr [r14]
#define SUB_R14W_FROM_PTR_R15 sub r14w, word ptr [r15]
#define SUB_R14W_FROM_PTR_EAX sub r14w, word ptr [eax]
#define SUB_R14W_FROM_PTR_EBX sub r14w, word ptr [ebx]
#define SUB_R14W_FROM_PTR_ECX sub r14w, word ptr [ecx]
#define SUB_R14W_FROM_PTR_EDX sub r14w, word ptr [edx]
#define SUB_R14W_FROM_PTR_EDI sub r14w, word ptr [edi]
#define SUB_R14W_FROM_PTR_ESI sub r14w, word ptr [esi]
#define SUB_R14W_FROM_PTR_EBP sub r14w, word ptr [ebp]
#define SUB_R14W_FROM_PTR_ESP sub r14w, word ptr [esp]

#define SUB_R15W_FROM_PTR_RAX sub r15w, word ptr [rax]
#define SUB_R15W_FROM_PTR_RBX sub r15w, word ptr [rbx]
#define SUB_R15W_FROM_PTR_RCX sub r15w, word ptr [rcx]
#define SUB_R15W_FROM_PTR_RDX sub r15w, word ptr [rdx]
#define SUB_R15W_FROM_PTR_RDI sub r15w, word ptr [rdi]
#define SUB_R15W_FROM_PTR_RSI sub r15w, word ptr [rsi]
#define SUB_R15W_FROM_PTR_RBP sub r15w, word ptr [rbp]
#define SUB_R15W_FROM_PTR_RSP sub r15w, word ptr [rsp]
#define SUB_R15W_FROM_PTR_R8 sub r15w, word ptr [r8]
#define SUB_R15W_FROM_PTR_R9 sub r15w, word ptr [r9]
#define SUB_R15W_FROM_PTR_R10 sub r15w, word ptr [r10]
#define SUB_R15W_FROM_PTR_R11 sub r15w, word ptr [r11]
#define SUB_R15W_FROM_PTR_R12 sub r15w, word ptr [r12]
#define SUB_R15W_FROM_PTR_R13 sub r15w, word ptr [r13]
#define SUB_R15W_FROM_PTR_R14 sub r15w, word ptr [r14]
#define SUB_R15W_FROM_PTR_R15 sub r15w, word ptr [r15]
#define SUB_R15W_FROM_PTR_EAX sub r15w, word ptr [eax]
#define SUB_R15W_FROM_PTR_EBX sub r15w, word ptr [ebx]
#define SUB_R15W_FROM_PTR_ECX sub r15w, word ptr [ecx]
#define SUB_R15W_FROM_PTR_EDX sub r15w, word ptr [edx]
#define SUB_R15W_FROM_PTR_EDI sub r15w, word ptr [edi]
#define SUB_R15W_FROM_PTR_ESI sub r15w, word ptr [esi]
#define SUB_R15W_FROM_PTR_EBP sub r15w, word ptr [ebp]
#define SUB_R15W_FROM_PTR_ESP sub r15w, word ptr [esp]

#define SUB_AX_TO_PTR_RAX sub word ptr [rax], ax
#define SUB_AX_TO_PTR_RBX sub word ptr [rbx], ax
#define SUB_AX_TO_PTR_RCX sub word ptr [rcx], ax
#define SUB_AX_TO_PTR_RDX sub word ptr [rdx], ax
#define SUB_AX_TO_PTR_RDI sub word ptr [rdi], ax
#define SUB_AX_TO_PTR_RSI sub word ptr [rsi], ax
#define SUB_AX_TO_PTR_RBP sub word ptr [rbp], ax
#define SUB_AX_TO_PTR_RSP sub word ptr [rsp], ax
#define SUB_AX_TO_PTR_R8 sub word ptr [r8], ax
#define SUB_AX_TO_PTR_R9 sub word ptr [r9], ax
#define SUB_AX_TO_PTR_R10 sub word ptr [r10], ax
#define SUB_AX_TO_PTR_R11 sub word ptr [r11], ax
#define SUB_AX_TO_PTR_R12 sub word ptr [r12], ax
#define SUB_AX_TO_PTR_R13 sub word ptr [r13], ax
#define SUB_AX_TO_PTR_R14 sub word ptr [r14], ax
#define SUB_AX_TO_PTR_R15 sub word ptr [r15], ax
#define SUB_AX_TO_PTR_EAX sub word ptr [eax], ax
#define SUB_AX_TO_PTR_EBX sub word ptr [ebx], ax
#define SUB_AX_TO_PTR_ECX sub word ptr [ecx], ax
#define SUB_AX_TO_PTR_EDX sub word ptr [edx], ax
#define SUB_AX_TO_PTR_EDI sub word ptr [edi], ax
#define SUB_AX_TO_PTR_ESI sub word ptr [esi], ax
#define SUB_AX_TO_PTR_EBP sub word ptr [ebp], ax
#define SUB_AX_TO_PTR_ESP sub word ptr [esp], ax

#define SUB_BX_TO_PTR_RAX sub word ptr [rax], bx
#define SUB_BX_TO_PTR_RBX sub word ptr [rbx], bx
#define SUB_BX_TO_PTR_RCX sub word ptr [rcx], bx
#define SUB_BX_TO_PTR_RDX sub word ptr [rdx], bx
#define SUB_BX_TO_PTR_RDI sub word ptr [rdi], bx
#define SUB_BX_TO_PTR_RSI sub word ptr [rsi], bx
#define SUB_BX_TO_PTR_RBP sub word ptr [rbp], bx
#define SUB_BX_TO_PTR_RSP sub word ptr [rsp], bx
#define SUB_BX_TO_PTR_R8 sub word ptr [r8], bx
#define SUB_BX_TO_PTR_R9 sub word ptr [r9], bx
#define SUB_BX_TO_PTR_R10 sub word ptr [r10], bx
#define SUB_BX_TO_PTR_R11 sub word ptr [r11], bx
#define SUB_BX_TO_PTR_R12 sub word ptr [r12], bx
#define SUB_BX_TO_PTR_R13 sub word ptr [r13], bx
#define SUB_BX_TO_PTR_R14 sub word ptr [r14], bx
#define SUB_BX_TO_PTR_R15 sub word ptr [r15], bx
#define SUB_BX_TO_PTR_EAX sub word ptr [eax], bx
#define SUB_BX_TO_PTR_EBX sub word ptr [ebx], bx
#define SUB_BX_TO_PTR_ECX sub word ptr [ecx], bx
#define SUB_BX_TO_PTR_EDX sub word ptr [edx], bx
#define SUB_BX_TO_PTR_EDI sub word ptr [edi], bx
#define SUB_BX_TO_PTR_ESI sub word ptr [esi], bx
#define SUB_BX_TO_PTR_EBP sub word ptr [ebp], bx
#define SUB_BX_TO_PTR_ESP sub word ptr [esp], bx

#define SUB_CX_TO_PTR_RAX sub word ptr [rax], cx
#define SUB_CX_TO_PTR_RBX sub word ptr [rbx], cx
#define SUB_CX_TO_PTR_RCX sub word ptr [rcx], cx
#define SUB_CX_TO_PTR_RDX sub word ptr [rdx], cx
#define SUB_CX_TO_PTR_RDI sub word ptr [rdi], cx
#define SUB_CX_TO_PTR_RSI sub word ptr [rsi], cx
#define SUB_CX_TO_PTR_RBP sub word ptr [rbp], cx
#define SUB_CX_TO_PTR_RSP sub word ptr [rsp], cx
#define SUB_CX_TO_PTR_R8 sub word ptr [r8], cx
#define SUB_CX_TO_PTR_R9 sub word ptr [r9], cx
#define SUB_CX_TO_PTR_R10 sub word ptr [r10], cx
#define SUB_CX_TO_PTR_R11 sub word ptr [r11], cx
#define SUB_CX_TO_PTR_R12 sub word ptr [r12], cx
#define SUB_CX_TO_PTR_R13 sub word ptr [r13], cx
#define SUB_CX_TO_PTR_R14 sub word ptr [r14], cx
#define SUB_CX_TO_PTR_R15 sub word ptr [r15], cx
#define SUB_CX_TO_PTR_EAX sub word ptr [eax], cx
#define SUB_CX_TO_PTR_EBX sub word ptr [ebx], cx
#define SUB_CX_TO_PTR_ECX sub word ptr [ecx], cx
#define SUB_CX_TO_PTR_EDX sub word ptr [edx], cx
#define SUB_CX_TO_PTR_EDI sub word ptr [edi], cx
#define SUB_CX_TO_PTR_ESI sub word ptr [esi], cx
#define SUB_CX_TO_PTR_EBP sub word ptr [ebp], cx
#define SUB_CX_TO_PTR_ESP sub word ptr [esp], cx

#define SUB_DX_TO_PTR_RAX sub word ptr [rax], dx
#define SUB_DX_TO_PTR_RBX sub word ptr [rbx], dx
#define SUB_DX_TO_PTR_RCX sub word ptr [rcx], dx
#define SUB_DX_TO_PTR_RDX sub word ptr [rdx], dx
#define SUB_DX_TO_PTR_RDI sub word ptr [rdi], dx
#define SUB_DX_TO_PTR_RSI sub word ptr [rsi], dx
#define SUB_DX_TO_PTR_RBP sub word ptr [rbp], dx
#define SUB_DX_TO_PTR_RSP sub word ptr [rsp], dx
#define SUB_DX_TO_PTR_R8 sub word ptr [r8], dx
#define SUB_DX_TO_PTR_R9 sub word ptr [r9], dx
#define SUB_DX_TO_PTR_R10 sub word ptr [r10], dx
#define SUB_DX_TO_PTR_R11 sub word ptr [r11], dx
#define SUB_DX_TO_PTR_R12 sub word ptr [r12], dx
#define SUB_DX_TO_PTR_R13 sub word ptr [r13], dx
#define SUB_DX_TO_PTR_R14 sub word ptr [r14], dx
#define SUB_DX_TO_PTR_R15 sub word ptr [r15], dx
#define SUB_DX_TO_PTR_EAX sub word ptr [eax], dx
#define SUB_DX_TO_PTR_EBX sub word ptr [ebx], dx
#define SUB_DX_TO_PTR_ECX sub word ptr [ecx], dx
#define SUB_DX_TO_PTR_EDX sub word ptr [edx], dx
#define SUB_DX_TO_PTR_EDI sub word ptr [edi], dx
#define SUB_DX_TO_PTR_ESI sub word ptr [esi], dx
#define SUB_DX_TO_PTR_EBP sub word ptr [ebp], dx
#define SUB_DX_TO_PTR_ESP sub word ptr [esp], dx

#define SUB_DI_TO_PTR_RAX sub word ptr [rax], di
#define SUB_DI_TO_PTR_RBX sub word ptr [rbx], di
#define SUB_DI_TO_PTR_RCX sub word ptr [rcx], di
#define SUB_DI_TO_PTR_RDX sub word ptr [rdx], di
#define SUB_DI_TO_PTR_RDI sub word ptr [rdi], di
#define SUB_DI_TO_PTR_RSI sub word ptr [rsi], di
#define SUB_DI_TO_PTR_RBP sub word ptr [rbp], di
#define SUB_DI_TO_PTR_RSP sub word ptr [rsp], di
#define SUB_DI_TO_PTR_R8 sub word ptr [r8], di
#define SUB_DI_TO_PTR_R9 sub word ptr [r9], di
#define SUB_DI_TO_PTR_R10 sub word ptr [r10], di
#define SUB_DI_TO_PTR_R11 sub word ptr [r11], di
#define SUB_DI_TO_PTR_R12 sub word ptr [r12], di
#define SUB_DI_TO_PTR_R13 sub word ptr [r13], di
#define SUB_DI_TO_PTR_R14 sub word ptr [r14], di
#define SUB_DI_TO_PTR_R15 sub word ptr [r15], di
#define SUB_DI_TO_PTR_EAX sub word ptr [eax], di
#define SUB_DI_TO_PTR_EBX sub word ptr [ebx], di
#define SUB_DI_TO_PTR_ECX sub word ptr [ecx], di
#define SUB_DI_TO_PTR_EDX sub word ptr [edx], di
#define SUB_DI_TO_PTR_EDI sub word ptr [edi], di
#define SUB_DI_TO_PTR_ESI sub word ptr [esi], di
#define SUB_DI_TO_PTR_EBP sub word ptr [ebp], di
#define SUB_DI_TO_PTR_ESP sub word ptr [esp], di

#define SUB_SI_TO_PTR_RAX sub word ptr [rax], si
#define SUB_SI_TO_PTR_RBX sub word ptr [rbx], si
#define SUB_SI_TO_PTR_RCX sub word ptr [rcx], si
#define SUB_SI_TO_PTR_RDX sub word ptr [rdx], si
#define SUB_SI_TO_PTR_RDI sub word ptr [rdi], si
#define SUB_SI_TO_PTR_RSI sub word ptr [rsi], si
#define SUB_SI_TO_PTR_RBP sub word ptr [rbp], si
#define SUB_SI_TO_PTR_RSP sub word ptr [rsp], si
#define SUB_SI_TO_PTR_R8 sub word ptr [r8], si
#define SUB_SI_TO_PTR_R9 sub word ptr [r9], si
#define SUB_SI_TO_PTR_R10 sub word ptr [r10], si
#define SUB_SI_TO_PTR_R11 sub word ptr [r11], si
#define SUB_SI_TO_PTR_R12 sub word ptr [r12], si
#define SUB_SI_TO_PTR_R13 sub word ptr [r13], si
#define SUB_SI_TO_PTR_R14 sub word ptr [r14], si
#define SUB_SI_TO_PTR_R15 sub word ptr [r15], si
#define SUB_SI_TO_PTR_EAX sub word ptr [eax], si
#define SUB_SI_TO_PTR_EBX sub word ptr [ebx], si
#define SUB_SI_TO_PTR_ECX sub word ptr [ecx], si
#define SUB_SI_TO_PTR_EDX sub word ptr [edx], si
#define SUB_SI_TO_PTR_EDI sub word ptr [edi], si
#define SUB_SI_TO_PTR_ESI sub word ptr [esi], si
#define SUB_SI_TO_PTR_EBP sub word ptr [ebp], si
#define SUB_SI_TO_PTR_ESP sub word ptr [esp], si

#define SUB_BP_TO_PTR_RAX sub word ptr [rax], bp
#define SUB_BP_TO_PTR_RBX sub word ptr [rbx], bp
#define SUB_BP_TO_PTR_RCX sub word ptr [rcx], bp
#define SUB_BP_TO_PTR_RDX sub word ptr [rdx], bp
#define SUB_BP_TO_PTR_RDI sub word ptr [rdi], bp
#define SUB_BP_TO_PTR_RSI sub word ptr [rsi], bp
#define SUB_BP_TO_PTR_RBP sub word ptr [rbp], bp
#define SUB_BP_TO_PTR_RSP sub word ptr [rsp], bp
#define SUB_BP_TO_PTR_R8 sub word ptr [r8], bp
#define SUB_BP_TO_PTR_R9 sub word ptr [r9], bp
#define SUB_BP_TO_PTR_R10 sub word ptr [r10], bp
#define SUB_BP_TO_PTR_R11 sub word ptr [r11], bp
#define SUB_BP_TO_PTR_R12 sub word ptr [r12], bp
#define SUB_BP_TO_PTR_R13 sub word ptr [r13], bp
#define SUB_BP_TO_PTR_R14 sub word ptr [r14], bp
#define SUB_BP_TO_PTR_R15 sub word ptr [r15], bp
#define SUB_BP_TO_PTR_EAX sub word ptr [eax], bp
#define SUB_BP_TO_PTR_EBX sub word ptr [ebx], bp
#define SUB_BP_TO_PTR_ECX sub word ptr [ecx], bp
#define SUB_BP_TO_PTR_EDX sub word ptr [edx], bp
#define SUB_BP_TO_PTR_EDI sub word ptr [edi], bp
#define SUB_BP_TO_PTR_ESI sub word ptr [esi], bp
#define SUB_BP_TO_PTR_EBP sub word ptr [ebp], bp
#define SUB_BP_TO_PTR_ESP sub word ptr [esp], bp

#define SUB_SP_TO_PTR_RAX sub word ptr [rax], sp
#define SUB_SP_TO_PTR_RBX sub word ptr [rbx], sp
#define SUB_SP_TO_PTR_RCX sub word ptr [rcx], sp
#define SUB_SP_TO_PTR_RDX sub word ptr [rdx], sp
#define SUB_SP_TO_PTR_RDI sub word ptr [rdi], sp
#define SUB_SP_TO_PTR_RSI sub word ptr [rsi], sp
#define SUB_SP_TO_PTR_RBP sub word ptr [rbp], sp
#define SUB_SP_TO_PTR_RSP sub word ptr [rsp], sp
#define SUB_SP_TO_PTR_R8 sub word ptr [r8], sp
#define SUB_SP_TO_PTR_R9 sub word ptr [r9], sp
#define SUB_SP_TO_PTR_R10 sub word ptr [r10], sp
#define SUB_SP_TO_PTR_R11 sub word ptr [r11], sp
#define SUB_SP_TO_PTR_R12 sub word ptr [r12], sp
#define SUB_SP_TO_PTR_R13 sub word ptr [r13], sp
#define SUB_SP_TO_PTR_R14 sub word ptr [r14], sp
#define SUB_SP_TO_PTR_R15 sub word ptr [r15], sp
#define SUB_SP_TO_PTR_EAX sub word ptr [eax], sp
#define SUB_SP_TO_PTR_EBX sub word ptr [ebx], sp
#define SUB_SP_TO_PTR_ECX sub word ptr [ecx], sp
#define SUB_SP_TO_PTR_EDX sub word ptr [edx], sp
#define SUB_SP_TO_PTR_EDI sub word ptr [edi], sp
#define SUB_SP_TO_PTR_ESI sub word ptr [esi], sp
#define SUB_SP_TO_PTR_EBP sub word ptr [ebp], sp
#define SUB_SP_TO_PTR_ESP sub word ptr [esp], sp

#define SUB_R8W_TO_PTR_RAX sub word ptr [rax], r8w
#define SUB_R8W_TO_PTR_RBX sub word ptr [rbx], r8w
#define SUB_R8W_TO_PTR_RCX sub word ptr [rcx], r8w
#define SUB_R8W_TO_PTR_RDX sub word ptr [rdx], r8w
#define SUB_R8W_TO_PTR_RDI sub word ptr [rdi], r8w
#define SUB_R8W_TO_PTR_RSI sub word ptr [rsi], r8w
#define SUB_R8W_TO_PTR_RBP sub word ptr [rbp], r8w
#define SUB_R8W_TO_PTR_RSP sub word ptr [rsp], r8w
#define SUB_R8W_TO_PTR_R8 sub word ptr [r8], r8w
#define SUB_R8W_TO_PTR_R9 sub word ptr [r9], r8w
#define SUB_R8W_TO_PTR_R10 sub word ptr [r10], r8w
#define SUB_R8W_TO_PTR_R11 sub word ptr [r11], r8w
#define SUB_R8W_TO_PTR_R12 sub word ptr [r12], r8w
#define SUB_R8W_TO_PTR_R13 sub word ptr [r13], r8w
#define SUB_R8W_TO_PTR_R14 sub word ptr [r14], r8w
#define SUB_R8W_TO_PTR_R15 sub word ptr [r15], r8w
#define SUB_R8W_TO_PTR_EAX sub word ptr [eax], r8w
#define SUB_R8W_TO_PTR_EBX sub word ptr [ebx], r8w
#define SUB_R8W_TO_PTR_ECX sub word ptr [ecx], r8w
#define SUB_R8W_TO_PTR_EDX sub word ptr [edx], r8w
#define SUB_R8W_TO_PTR_EDI sub word ptr [edi], r8w
#define SUB_R8W_TO_PTR_ESI sub word ptr [esi], r8w
#define SUB_R8W_TO_PTR_EBP sub word ptr [ebp], r8w
#define SUB_R8W_TO_PTR_ESP sub word ptr [esp], r8w

#define SUB_R9W_TO_PTR_RAX sub word ptr [rax], r9w
#define SUB_R9W_TO_PTR_RBX sub word ptr [rbx], r9w
#define SUB_R9W_TO_PTR_RCX sub word ptr [rcx], r9w
#define SUB_R9W_TO_PTR_RDX sub word ptr [rdx], r9w
#define SUB_R9W_TO_PTR_RDI sub word ptr [rdi], r9w
#define SUB_R9W_TO_PTR_RSI sub word ptr [rsi], r9w
#define SUB_R9W_TO_PTR_RBP sub word ptr [rbp], r9w
#define SUB_R9W_TO_PTR_RSP sub word ptr [rsp], r9w
#define SUB_R9W_TO_PTR_R8 sub word ptr [r8], r9w
#define SUB_R9W_TO_PTR_R9 sub word ptr [r9], r9w
#define SUB_R9W_TO_PTR_R10 sub word ptr [r10], r9w
#define SUB_R9W_TO_PTR_R11 sub word ptr [r11], r9w
#define SUB_R9W_TO_PTR_R12 sub word ptr [r12], r9w
#define SUB_R9W_TO_PTR_R13 sub word ptr [r13], r9w
#define SUB_R9W_TO_PTR_R14 sub word ptr [r14], r9w
#define SUB_R9W_TO_PTR_R15 sub word ptr [r15], r9w
#define SUB_R9W_TO_PTR_EAX sub word ptr [eax], r9w
#define SUB_R9W_TO_PTR_EBX sub word ptr [ebx], r9w
#define SUB_R9W_TO_PTR_ECX sub word ptr [ecx], r9w
#define SUB_R9W_TO_PTR_EDX sub word ptr [edx], r9w
#define SUB_R9W_TO_PTR_EDI sub word ptr [edi], r9w
#define SUB_R9W_TO_PTR_ESI sub word ptr [esi], r9w
#define SUB_R9W_TO_PTR_EBP sub word ptr [ebp], r9w
#define SUB_R9W_TO_PTR_ESP sub word ptr [esp], r9w

#define SUB_R10W_TO_PTR_RAX sub word ptr [rax], r10w
#define SUB_R10W_TO_PTR_RBX sub word ptr [rbx], r10w
#define SUB_R10W_TO_PTR_RCX sub word ptr [rcx], r10w
#define SUB_R10W_TO_PTR_RDX sub word ptr [rdx], r10w
#define SUB_R10W_TO_PTR_RDI sub word ptr [rdi], r10w
#define SUB_R10W_TO_PTR_RSI sub word ptr [rsi], r10w
#define SUB_R10W_TO_PTR_RBP sub word ptr [rbp], r10w
#define SUB_R10W_TO_PTR_RSP sub word ptr [rsp], r10w
#define SUB_R10W_TO_PTR_R8 sub word ptr [r8], r10w
#define SUB_R10W_TO_PTR_R9 sub word ptr [r9], r10w
#define SUB_R10W_TO_PTR_R10 sub word ptr [r10], r10w
#define SUB_R10W_TO_PTR_R11 sub word ptr [r11], r10w
#define SUB_R10W_TO_PTR_R12 sub word ptr [r12], r10w
#define SUB_R10W_TO_PTR_R13 sub word ptr [r13], r10w
#define SUB_R10W_TO_PTR_R14 sub word ptr [r14], r10w
#define SUB_R10W_TO_PTR_R15 sub word ptr [r15], r10w
#define SUB_R10W_TO_PTR_EAX sub word ptr [eax], r10w
#define SUB_R10W_TO_PTR_EBX sub word ptr [ebx], r10w
#define SUB_R10W_TO_PTR_ECX sub word ptr [ecx], r10w
#define SUB_R10W_TO_PTR_EDX sub word ptr [edx], r10w
#define SUB_R10W_TO_PTR_EDI sub word ptr [edi], r10w
#define SUB_R10W_TO_PTR_ESI sub word ptr [esi], r10w
#define SUB_R10W_TO_PTR_EBP sub word ptr [ebp], r10w
#define SUB_R10W_TO_PTR_ESP sub word ptr [esp], r10w

#define SUB_R11W_TO_PTR_RAX sub word ptr [rax], r11w
#define SUB_R11W_TO_PTR_RBX sub word ptr [rbx], r11w
#define SUB_R11W_TO_PTR_RCX sub word ptr [rcx], r11w
#define SUB_R11W_TO_PTR_RDX sub word ptr [rdx], r11w
#define SUB_R11W_TO_PTR_RDI sub word ptr [rdi], r11w
#define SUB_R11W_TO_PTR_RSI sub word ptr [rsi], r11w
#define SUB_R11W_TO_PTR_RBP sub word ptr [rbp], r11w
#define SUB_R11W_TO_PTR_RSP sub word ptr [rsp], r11w
#define SUB_R11W_TO_PTR_R8 sub word ptr [r8], r11w
#define SUB_R11W_TO_PTR_R9 sub word ptr [r9], r11w
#define SUB_R11W_TO_PTR_R10 sub word ptr [r10], r11w
#define SUB_R11W_TO_PTR_R11 sub word ptr [r11], r11w
#define SUB_R11W_TO_PTR_R12 sub word ptr [r12], r11w
#define SUB_R11W_TO_PTR_R13 sub word ptr [r13], r11w
#define SUB_R11W_TO_PTR_R14 sub word ptr [r14], r11w
#define SUB_R11W_TO_PTR_R15 sub word ptr [r15], r11w
#define SUB_R11W_TO_PTR_EAX sub word ptr [eax], r11w
#define SUB_R11W_TO_PTR_EBX sub word ptr [ebx], r11w
#define SUB_R11W_TO_PTR_ECX sub word ptr [ecx], r11w
#define SUB_R11W_TO_PTR_EDX sub word ptr [edx], r11w
#define SUB_R11W_TO_PTR_EDI sub word ptr [edi], r11w
#define SUB_R11W_TO_PTR_ESI sub word ptr [esi], r11w
#define SUB_R11W_TO_PTR_EBP sub word ptr [ebp], r11w
#define SUB_R11W_TO_PTR_ESP sub word ptr [esp], r11w

#define SUB_R12W_TO_PTR_RAX sub word ptr [rax], r12w
#define SUB_R12W_TO_PTR_RBX sub word ptr [rbx], r12w
#define SUB_R12W_TO_PTR_RCX sub word ptr [rcx], r12w
#define SUB_R12W_TO_PTR_RDX sub word ptr [rdx], r12w
#define SUB_R12W_TO_PTR_RDI sub word ptr [rdi], r12w
#define SUB_R12W_TO_PTR_RSI sub word ptr [rsi], r12w
#define SUB_R12W_TO_PTR_RBP sub word ptr [rbp], r12w
#define SUB_R12W_TO_PTR_RSP sub word ptr [rsp], r12w
#define SUB_R12W_TO_PTR_R8 sub word ptr [r8], r12w
#define SUB_R12W_TO_PTR_R9 sub word ptr [r9], r12w
#define SUB_R12W_TO_PTR_R10 sub word ptr [r10], r12w
#define SUB_R12W_TO_PTR_R11 sub word ptr [r11], r12w
#define SUB_R12W_TO_PTR_R12 sub word ptr [r12], r12w
#define SUB_R12W_TO_PTR_R13 sub word ptr [r13], r12w
#define SUB_R12W_TO_PTR_R14 sub word ptr [r14], r12w
#define SUB_R12W_TO_PTR_R15 sub word ptr [r15], r12w
#define SUB_R12W_TO_PTR_EAX sub word ptr [eax], r12w
#define SUB_R12W_TO_PTR_EBX sub word ptr [ebx], r12w
#define SUB_R12W_TO_PTR_ECX sub word ptr [ecx], r12w
#define SUB_R12W_TO_PTR_EDX sub word ptr [edx], r12w
#define SUB_R12W_TO_PTR_EDI sub word ptr [edi], r12w
#define SUB_R12W_TO_PTR_ESI sub word ptr [esi], r12w
#define SUB_R12W_TO_PTR_EBP sub word ptr [ebp], r12w
#define SUB_R12W_TO_PTR_ESP sub word ptr [esp], r12w

#define SUB_R13W_TO_PTR_RAX sub word ptr [rax], r13w
#define SUB_R13W_TO_PTR_RBX sub word ptr [rbx], r13w
#define SUB_R13W_TO_PTR_RCX sub word ptr [rcx], r13w
#define SUB_R13W_TO_PTR_RDX sub word ptr [rdx], r13w
#define SUB_R13W_TO_PTR_RDI sub word ptr [rdi], r13w
#define SUB_R13W_TO_PTR_RSI sub word ptr [rsi], r13w
#define SUB_R13W_TO_PTR_RBP sub word ptr [rbp], r13w
#define SUB_R13W_TO_PTR_RSP sub word ptr [rsp], r13w
#define SUB_R13W_TO_PTR_R8 sub word ptr [r8], r13w
#define SUB_R13W_TO_PTR_R9 sub word ptr [r9], r13w
#define SUB_R13W_TO_PTR_R10 sub word ptr [r10], r13w
#define SUB_R13W_TO_PTR_R11 sub word ptr [r11], r13w
#define SUB_R13W_TO_PTR_R12 sub word ptr [r12], r13w
#define SUB_R13W_TO_PTR_R13 sub word ptr [r13], r13w
#define SUB_R13W_TO_PTR_R14 sub word ptr [r14], r13w
#define SUB_R13W_TO_PTR_R15 sub word ptr [r15], r13w
#define SUB_R13W_TO_PTR_EAX sub word ptr [eax], r13w
#define SUB_R13W_TO_PTR_EBX sub word ptr [ebx], r13w
#define SUB_R13W_TO_PTR_ECX sub word ptr [ecx], r13w
#define SUB_R13W_TO_PTR_EDX sub word ptr [edx], r13w
#define SUB_R13W_TO_PTR_EDI sub word ptr [edi], r13w
#define SUB_R13W_TO_PTR_ESI sub word ptr [esi], r13w
#define SUB_R13W_TO_PTR_EBP sub word ptr [ebp], r13w
#define SUB_R13W_TO_PTR_ESP sub word ptr [esp], r13w

#define SUB_R14W_TO_PTR_RAX sub word ptr [rax], r14w
#define SUB_R14W_TO_PTR_RBX sub word ptr [rbx], r14w
#define SUB_R14W_TO_PTR_RCX sub word ptr [rcx], r14w
#define SUB_R14W_TO_PTR_RDX sub word ptr [rdx], r14w
#define SUB_R14W_TO_PTR_RDI sub word ptr [rdi], r14w
#define SUB_R14W_TO_PTR_RSI sub word ptr [rsi], r14w
#define SUB_R14W_TO_PTR_RBP sub word ptr [rbp], r14w
#define SUB_R14W_TO_PTR_RSP sub word ptr [rsp], r14w
#define SUB_R14W_TO_PTR_R8 sub word ptr [r8], r14w
#define SUB_R14W_TO_PTR_R9 sub word ptr [r9], r14w
#define SUB_R14W_TO_PTR_R10 sub word ptr [r10], r14w
#define SUB_R14W_TO_PTR_R11 sub word ptr [r11], r14w
#define SUB_R14W_TO_PTR_R12 sub word ptr [r12], r14w
#define SUB_R14W_TO_PTR_R13 sub word ptr [r13], r14w
#define SUB_R14W_TO_PTR_R14 sub word ptr [r14], r14w
#define SUB_R14W_TO_PTR_R15 sub word ptr [r15], r14w
#define SUB_R14W_TO_PTR_EAX sub word ptr [eax], r14w
#define SUB_R14W_TO_PTR_EBX sub word ptr [ebx], r14w
#define SUB_R14W_TO_PTR_ECX sub word ptr [ecx], r14w
#define SUB_R14W_TO_PTR_EDX sub word ptr [edx], r14w
#define SUB_R14W_TO_PTR_EDI sub word ptr [edi], r14w
#define SUB_R14W_TO_PTR_ESI sub word ptr [esi], r14w
#define SUB_R14W_TO_PTR_EBP sub word ptr [ebp], r14w
#define SUB_R14W_TO_PTR_ESP sub word ptr [esp], r14w

#define SUB_R15W_TO_PTR_RAX sub word ptr [rax], r15w
#define SUB_R15W_TO_PTR_RBX sub word ptr [rbx], r15w
#define SUB_R15W_TO_PTR_RCX sub word ptr [rcx], r15w
#define SUB_R15W_TO_PTR_RDX sub word ptr [rdx], r15w
#define SUB_R15W_TO_PTR_RDI sub word ptr [rdi], r15w
#define SUB_R15W_TO_PTR_RSI sub word ptr [rsi], r15w
#define SUB_R15W_TO_PTR_RBP sub word ptr [rbp], r15w
#define SUB_R15W_TO_PTR_RSP sub word ptr [rsp], r15w
#define SUB_R15W_TO_PTR_R8 sub word ptr [r8], r15w
#define SUB_R15W_TO_PTR_R9 sub word ptr [r9], r15w
#define SUB_R15W_TO_PTR_R10 sub word ptr [r10], r15w
#define SUB_R15W_TO_PTR_R11 sub word ptr [r11], r15w
#define SUB_R15W_TO_PTR_R12 sub word ptr [r12], r15w
#define SUB_R15W_TO_PTR_R13 sub word ptr [r13], r15w
#define SUB_R15W_TO_PTR_R14 sub word ptr [r14], r15w
#define SUB_R15W_TO_PTR_R15 sub word ptr [r15], r15w
#define SUB_R15W_TO_PTR_EAX sub word ptr [eax], r15w
#define SUB_R15W_TO_PTR_EBX sub word ptr [ebx], r15w
#define SUB_R15W_TO_PTR_ECX sub word ptr [ecx], r15w
#define SUB_R15W_TO_PTR_EDX sub word ptr [edx], r15w
#define SUB_R15W_TO_PTR_EDI sub word ptr [edi], r15w
#define SUB_R15W_TO_PTR_ESI sub word ptr [esi], r15w
#define SUB_R15W_TO_PTR_EBP sub word ptr [ebp], r15w
#define SUB_R15W_TO_PTR_ESP sub word ptr [esp], r15w

#define SUB_AX_FROM_PTR_RAX_(VALUE) sub ax, word ptr [rax + VALUE]
#define SUB_AX_FROM_PTR_RBX_(VALUE) sub ax, word ptr [rbx + VALUE]
#define SUB_AX_FROM_PTR_RCX_(VALUE) sub ax, word ptr [rcx + VALUE]
#define SUB_AX_FROM_PTR_RDX_(VALUE) sub ax, word ptr [rdx + VALUE]
#define SUB_AX_FROM_PTR_RDI_(VALUE) sub ax, word ptr [rdi + VALUE]
#define SUB_AX_FROM_PTR_RSI_(VALUE) sub ax, word ptr [rsi + VALUE]
#define SUB_AX_FROM_PTR_RBP_(VALUE) sub ax, word ptr [rbp + VALUE]
#define SUB_AX_FROM_PTR_RSP_(VALUE) sub ax, word ptr [rsp + VALUE]
#define SUB_AX_FROM_PTR_R8_(VALUE) sub ax, word ptr [r8 + VALUE]
#define SUB_AX_FROM_PTR_R9_(VALUE) sub ax, word ptr [r9 + VALUE]
#define SUB_AX_FROM_PTR_R10_(VALUE) sub ax, word ptr [r10 + VALUE]
#define SUB_AX_FROM_PTR_R11_(VALUE) sub ax, word ptr [r11 + VALUE]
#define SUB_AX_FROM_PTR_R12_(VALUE) sub ax, word ptr [r12 + VALUE]
#define SUB_AX_FROM_PTR_R13_(VALUE) sub ax, word ptr [r13 + VALUE]
#define SUB_AX_FROM_PTR_R14_(VALUE) sub ax, word ptr [r14 + VALUE]
#define SUB_AX_FROM_PTR_R15_(VALUE) sub ax, word ptr [r15 + VALUE]
#define SUB_AX_FROM_PTR_EAX_(VALUE) sub ax, word ptr [eax + VALUE]
#define SUB_AX_FROM_PTR_EBX_(VALUE) sub ax, word ptr [ebx + VALUE]
#define SUB_AX_FROM_PTR_ECX_(VALUE) sub ax, word ptr [ecx + VALUE]
#define SUB_AX_FROM_PTR_EDX_(VALUE) sub ax, word ptr [edx + VALUE]
#define SUB_AX_FROM_PTR_EDI_(VALUE) sub ax, word ptr [edi + VALUE]
#define SUB_AX_FROM_PTR_ESI_(VALUE) sub ax, word ptr [esi + VALUE]
#define SUB_AX_FROM_PTR_EBP_(VALUE) sub ax, word ptr [ebp + VALUE]
#define SUB_AX_FROM_PTR_ESP_(VALUE) sub ax, word ptr [esp + VALUE]

#define SUB_BX_FROM_PTR_RAX_(VALUE) sub bx, word ptr [rax + VALUE]
#define SUB_BX_FROM_PTR_RBX_(VALUE) sub bx, word ptr [rbx + VALUE]
#define SUB_BX_FROM_PTR_RCX_(VALUE) sub bx, word ptr [rcx + VALUE]
#define SUB_BX_FROM_PTR_RDX_(VALUE) sub bx, word ptr [rdx + VALUE]
#define SUB_BX_FROM_PTR_RDI_(VALUE) sub bx, word ptr [rdi + VALUE]
#define SUB_BX_FROM_PTR_RSI_(VALUE) sub bx, word ptr [rsi + VALUE]
#define SUB_BX_FROM_PTR_RBP_(VALUE) sub bx, word ptr [rbp + VALUE]
#define SUB_BX_FROM_PTR_RSP_(VALUE) sub bx, word ptr [rsp + VALUE]
#define SUB_BX_FROM_PTR_R8_(VALUE) sub bx, word ptr [r8 + VALUE]
#define SUB_BX_FROM_PTR_R9_(VALUE) sub bx, word ptr [r9 + VALUE]
#define SUB_BX_FROM_PTR_R10_(VALUE) sub bx, word ptr [r10 + VALUE]
#define SUB_BX_FROM_PTR_R11_(VALUE) sub bx, word ptr [r11 + VALUE]
#define SUB_BX_FROM_PTR_R12_(VALUE) sub bx, word ptr [r12 + VALUE]
#define SUB_BX_FROM_PTR_R13_(VALUE) sub bx, word ptr [r13 + VALUE]
#define SUB_BX_FROM_PTR_R14_(VALUE) sub bx, word ptr [r14 + VALUE]
#define SUB_BX_FROM_PTR_R15_(VALUE) sub bx, word ptr [r15 + VALUE]
#define SUB_BX_FROM_PTR_EAX_(VALUE) sub bx, word ptr [eax + VALUE]
#define SUB_BX_FROM_PTR_EBX_(VALUE) sub bx, word ptr [ebx + VALUE]
#define SUB_BX_FROM_PTR_ECX_(VALUE) sub bx, word ptr [ecx + VALUE]
#define SUB_BX_FROM_PTR_EDX_(VALUE) sub bx, word ptr [edx + VALUE]
#define SUB_BX_FROM_PTR_EDI_(VALUE) sub bx, word ptr [edi + VALUE]
#define SUB_BX_FROM_PTR_ESI_(VALUE) sub bx, word ptr [esi + VALUE]
#define SUB_BX_FROM_PTR_EBP_(VALUE) sub bx, word ptr [ebp + VALUE]
#define SUB_BX_FROM_PTR_ESP_(VALUE) sub bx, word ptr [esp + VALUE]

#define SUB_CX_FROM_PTR_RAX_(VALUE) sub cx, word ptr [rax + VALUE]
#define SUB_CX_FROM_PTR_RBX_(VALUE) sub cx, word ptr [rbx + VALUE]
#define SUB_CX_FROM_PTR_RCX_(VALUE) sub cx, word ptr [rcx + VALUE]
#define SUB_CX_FROM_PTR_RDX_(VALUE) sub cx, word ptr [rdx + VALUE]
#define SUB_CX_FROM_PTR_RDI_(VALUE) sub cx, word ptr [rdi + VALUE]
#define SUB_CX_FROM_PTR_RSI_(VALUE) sub cx, word ptr [rsi + VALUE]
#define SUB_CX_FROM_PTR_RBP_(VALUE) sub cx, word ptr [rbp + VALUE]
#define SUB_CX_FROM_PTR_RSP_(VALUE) sub cx, word ptr [rsp + VALUE]
#define SUB_CX_FROM_PTR_R8_(VALUE) sub cx, word ptr [r8 + VALUE]
#define SUB_CX_FROM_PTR_R9_(VALUE) sub cx, word ptr [r9 + VALUE]
#define SUB_CX_FROM_PTR_R10_(VALUE) sub cx, word ptr [r10 + VALUE]
#define SUB_CX_FROM_PTR_R11_(VALUE) sub cx, word ptr [r11 + VALUE]
#define SUB_CX_FROM_PTR_R12_(VALUE) sub cx, word ptr [r12 + VALUE]
#define SUB_CX_FROM_PTR_R13_(VALUE) sub cx, word ptr [r13 + VALUE]
#define SUB_CX_FROM_PTR_R14_(VALUE) sub cx, word ptr [r14 + VALUE]
#define SUB_CX_FROM_PTR_R15_(VALUE) sub cx, word ptr [r15 + VALUE]
#define SUB_CX_FROM_PTR_EAX_(VALUE) sub cx, word ptr [eax + VALUE]
#define SUB_CX_FROM_PTR_EBX_(VALUE) sub cx, word ptr [ebx + VALUE]
#define SUB_CX_FROM_PTR_ECX_(VALUE) sub cx, word ptr [ecx + VALUE]
#define SUB_CX_FROM_PTR_EDX_(VALUE) sub cx, word ptr [edx + VALUE]
#define SUB_CX_FROM_PTR_EDI_(VALUE) sub cx, word ptr [edi + VALUE]
#define SUB_CX_FROM_PTR_ESI_(VALUE) sub cx, word ptr [esi + VALUE]
#define SUB_CX_FROM_PTR_EBP_(VALUE) sub cx, word ptr [ebp + VALUE]
#define SUB_CX_FROM_PTR_ESP_(VALUE) sub cx, word ptr [esp + VALUE]

#define SUB_DX_FROM_PTR_RAX_(VALUE) sub dx, word ptr [rax + VALUE]
#define SUB_DX_FROM_PTR_RBX_(VALUE) sub dx, word ptr [rbx + VALUE]
#define SUB_DX_FROM_PTR_RCX_(VALUE) sub dx, word ptr [rcx + VALUE]
#define SUB_DX_FROM_PTR_RDX_(VALUE) sub dx, word ptr [rdx + VALUE]
#define SUB_DX_FROM_PTR_RDI_(VALUE) sub dx, word ptr [rdi + VALUE]
#define SUB_DX_FROM_PTR_RSI_(VALUE) sub dx, word ptr [rsi + VALUE]
#define SUB_DX_FROM_PTR_RBP_(VALUE) sub dx, word ptr [rbp + VALUE]
#define SUB_DX_FROM_PTR_RSP_(VALUE) sub dx, word ptr [rsp + VALUE]
#define SUB_DX_FROM_PTR_R8_(VALUE) sub dx, word ptr [r8 + VALUE]
#define SUB_DX_FROM_PTR_R9_(VALUE) sub dx, word ptr [r9 + VALUE]
#define SUB_DX_FROM_PTR_R10_(VALUE) sub dx, word ptr [r10 + VALUE]
#define SUB_DX_FROM_PTR_R11_(VALUE) sub dx, word ptr [r11 + VALUE]
#define SUB_DX_FROM_PTR_R12_(VALUE) sub dx, word ptr [r12 + VALUE]
#define SUB_DX_FROM_PTR_R13_(VALUE) sub dx, word ptr [r13 + VALUE]
#define SUB_DX_FROM_PTR_R14_(VALUE) sub dx, word ptr [r14 + VALUE]
#define SUB_DX_FROM_PTR_R15_(VALUE) sub dx, word ptr [r15 + VALUE]
#define SUB_DX_FROM_PTR_EAX_(VALUE) sub dx, word ptr [eax + VALUE]
#define SUB_DX_FROM_PTR_EBX_(VALUE) sub dx, word ptr [ebx + VALUE]
#define SUB_DX_FROM_PTR_ECX_(VALUE) sub dx, word ptr [ecx + VALUE]
#define SUB_DX_FROM_PTR_EDX_(VALUE) sub dx, word ptr [edx + VALUE]
#define SUB_DX_FROM_PTR_EDI_(VALUE) sub dx, word ptr [edi + VALUE]
#define SUB_DX_FROM_PTR_ESI_(VALUE) sub dx, word ptr [esi + VALUE]
#define SUB_DX_FROM_PTR_EBP_(VALUE) sub dx, word ptr [ebp + VALUE]
#define SUB_DX_FROM_PTR_ESP_(VALUE) sub dx, word ptr [esp + VALUE]

#define SUB_DI_FROM_PTR_RAX_(VALUE) sub di, word ptr [rax + VALUE]
#define SUB_DI_FROM_PTR_RBX_(VALUE) sub di, word ptr [rbx + VALUE]
#define SUB_DI_FROM_PTR_RCX_(VALUE) sub di, word ptr [rcx + VALUE]
#define SUB_DI_FROM_PTR_RDX_(VALUE) sub di, word ptr [rdx + VALUE]
#define SUB_DI_FROM_PTR_RDI_(VALUE) sub di, word ptr [rdi + VALUE]
#define SUB_DI_FROM_PTR_RSI_(VALUE) sub di, word ptr [rsi + VALUE]
#define SUB_DI_FROM_PTR_RBP_(VALUE) sub di, word ptr [rbp + VALUE]
#define SUB_DI_FROM_PTR_RSP_(VALUE) sub di, word ptr [rsp + VALUE]
#define SUB_DI_FROM_PTR_R8_(VALUE) sub di, word ptr [r8 + VALUE]
#define SUB_DI_FROM_PTR_R9_(VALUE) sub di, word ptr [r9 + VALUE]
#define SUB_DI_FROM_PTR_R10_(VALUE) sub di, word ptr [r10 + VALUE]
#define SUB_DI_FROM_PTR_R11_(VALUE) sub di, word ptr [r11 + VALUE]
#define SUB_DI_FROM_PTR_R12_(VALUE) sub di, word ptr [r12 + VALUE]
#define SUB_DI_FROM_PTR_R13_(VALUE) sub di, word ptr [r13 + VALUE]
#define SUB_DI_FROM_PTR_R14_(VALUE) sub di, word ptr [r14 + VALUE]
#define SUB_DI_FROM_PTR_R15_(VALUE) sub di, word ptr [r15 + VALUE]
#define SUB_DI_FROM_PTR_EAX_(VALUE) sub di, word ptr [eax + VALUE]
#define SUB_DI_FROM_PTR_EBX_(VALUE) sub di, word ptr [ebx + VALUE]
#define SUB_DI_FROM_PTR_ECX_(VALUE) sub di, word ptr [ecx + VALUE]
#define SUB_DI_FROM_PTR_EDX_(VALUE) sub di, word ptr [edx + VALUE]
#define SUB_DI_FROM_PTR_EDI_(VALUE) sub di, word ptr [edi + VALUE]
#define SUB_DI_FROM_PTR_ESI_(VALUE) sub di, word ptr [esi + VALUE]
#define SUB_DI_FROM_PTR_EBP_(VALUE) sub di, word ptr [ebp + VALUE]
#define SUB_DI_FROM_PTR_ESP_(VALUE) sub di, word ptr [esp + VALUE]

#define SUB_SI_FROM_PTR_RAX_(VALUE) sub si, word ptr [rax + VALUE]
#define SUB_SI_FROM_PTR_RBX_(VALUE) sub si, word ptr [rbx + VALUE]
#define SUB_SI_FROM_PTR_RCX_(VALUE) sub si, word ptr [rcx + VALUE]
#define SUB_SI_FROM_PTR_RDX_(VALUE) sub si, word ptr [rdx + VALUE]
#define SUB_SI_FROM_PTR_RDI_(VALUE) sub si, word ptr [rdi + VALUE]
#define SUB_SI_FROM_PTR_RSI_(VALUE) sub si, word ptr [rsi + VALUE]
#define SUB_SI_FROM_PTR_RBP_(VALUE) sub si, word ptr [rbp + VALUE]
#define SUB_SI_FROM_PTR_RSP_(VALUE) sub si, word ptr [rsp + VALUE]
#define SUB_SI_FROM_PTR_R8_(VALUE) sub si, word ptr [r8 + VALUE]
#define SUB_SI_FROM_PTR_R9_(VALUE) sub si, word ptr [r9 + VALUE]
#define SUB_SI_FROM_PTR_R10_(VALUE) sub si, word ptr [r10 + VALUE]
#define SUB_SI_FROM_PTR_R11_(VALUE) sub si, word ptr [r11 + VALUE]
#define SUB_SI_FROM_PTR_R12_(VALUE) sub si, word ptr [r12 + VALUE]
#define SUB_SI_FROM_PTR_R13_(VALUE) sub si, word ptr [r13 + VALUE]
#define SUB_SI_FROM_PTR_R14_(VALUE) sub si, word ptr [r14 + VALUE]
#define SUB_SI_FROM_PTR_R15_(VALUE) sub si, word ptr [r15 + VALUE]
#define SUB_SI_FROM_PTR_EAX_(VALUE) sub si, word ptr [eax + VALUE]
#define SUB_SI_FROM_PTR_EBX_(VALUE) sub si, word ptr [ebx + VALUE]
#define SUB_SI_FROM_PTR_ECX_(VALUE) sub si, word ptr [ecx + VALUE]
#define SUB_SI_FROM_PTR_EDX_(VALUE) sub si, word ptr [edx + VALUE]
#define SUB_SI_FROM_PTR_EDI_(VALUE) sub si, word ptr [edi + VALUE]
#define SUB_SI_FROM_PTR_ESI_(VALUE) sub si, word ptr [esi + VALUE]
#define SUB_SI_FROM_PTR_EBP_(VALUE) sub si, word ptr [ebp + VALUE]
#define SUB_SI_FROM_PTR_ESP_(VALUE) sub si, word ptr [esp + VALUE]

#define SUB_BP_FROM_PTR_RAX_(VALUE) sub bp, word ptr [rax + VALUE]
#define SUB_BP_FROM_PTR_RBX_(VALUE) sub bp, word ptr [rbx + VALUE]
#define SUB_BP_FROM_PTR_RCX_(VALUE) sub bp, word ptr [rcx + VALUE]
#define SUB_BP_FROM_PTR_RDX_(VALUE) sub bp, word ptr [rdx + VALUE]
#define SUB_BP_FROM_PTR_RDI_(VALUE) sub bp, word ptr [rdi + VALUE]
#define SUB_BP_FROM_PTR_RSI_(VALUE) sub bp, word ptr [rsi + VALUE]
#define SUB_BP_FROM_PTR_RBP_(VALUE) sub bp, word ptr [rbp + VALUE]
#define SUB_BP_FROM_PTR_RSP_(VALUE) sub bp, word ptr [rsp + VALUE]
#define SUB_BP_FROM_PTR_R8_(VALUE) sub bp, word ptr [r8 + VALUE]
#define SUB_BP_FROM_PTR_R9_(VALUE) sub bp, word ptr [r9 + VALUE]
#define SUB_BP_FROM_PTR_R10_(VALUE) sub bp, word ptr [r10 + VALUE]
#define SUB_BP_FROM_PTR_R11_(VALUE) sub bp, word ptr [r11 + VALUE]
#define SUB_BP_FROM_PTR_R12_(VALUE) sub bp, word ptr [r12 + VALUE]
#define SUB_BP_FROM_PTR_R13_(VALUE) sub bp, word ptr [r13 + VALUE]
#define SUB_BP_FROM_PTR_R14_(VALUE) sub bp, word ptr [r14 + VALUE]
#define SUB_BP_FROM_PTR_R15_(VALUE) sub bp, word ptr [r15 + VALUE]
#define SUB_BP_FROM_PTR_EAX_(VALUE) sub bp, word ptr [eax + VALUE]
#define SUB_BP_FROM_PTR_EBX_(VALUE) sub bp, word ptr [ebx + VALUE]
#define SUB_BP_FROM_PTR_ECX_(VALUE) sub bp, word ptr [ecx + VALUE]
#define SUB_BP_FROM_PTR_EDX_(VALUE) sub bp, word ptr [edx + VALUE]
#define SUB_BP_FROM_PTR_EDI_(VALUE) sub bp, word ptr [edi + VALUE]
#define SUB_BP_FROM_PTR_ESI_(VALUE) sub bp, word ptr [esi + VALUE]
#define SUB_BP_FROM_PTR_EBP_(VALUE) sub bp, word ptr [ebp + VALUE]
#define SUB_BP_FROM_PTR_ESP_(VALUE) sub bp, word ptr [esp + VALUE]

#define SUB_SP_FROM_PTR_RAX_(VALUE) sub sp, word ptr [rax + VALUE]
#define SUB_SP_FROM_PTR_RBX_(VALUE) sub sp, word ptr [rbx + VALUE]
#define SUB_SP_FROM_PTR_RCX_(VALUE) sub sp, word ptr [rcx + VALUE]
#define SUB_SP_FROM_PTR_RDX_(VALUE) sub sp, word ptr [rdx + VALUE]
#define SUB_SP_FROM_PTR_RDI_(VALUE) sub sp, word ptr [rdi + VALUE]
#define SUB_SP_FROM_PTR_RSI_(VALUE) sub sp, word ptr [rsi + VALUE]
#define SUB_SP_FROM_PTR_RBP_(VALUE) sub sp, word ptr [rbp + VALUE]
#define SUB_SP_FROM_PTR_RSP_(VALUE) sub sp, word ptr [rsp + VALUE]
#define SUB_SP_FROM_PTR_R8_(VALUE) sub sp, word ptr [r8 + VALUE]
#define SUB_SP_FROM_PTR_R9_(VALUE) sub sp, word ptr [r9 + VALUE]
#define SUB_SP_FROM_PTR_R10_(VALUE) sub sp, word ptr [r10 + VALUE]
#define SUB_SP_FROM_PTR_R11_(VALUE) sub sp, word ptr [r11 + VALUE]
#define SUB_SP_FROM_PTR_R12_(VALUE) sub sp, word ptr [r12 + VALUE]
#define SUB_SP_FROM_PTR_R13_(VALUE) sub sp, word ptr [r13 + VALUE]
#define SUB_SP_FROM_PTR_R14_(VALUE) sub sp, word ptr [r14 + VALUE]
#define SUB_SP_FROM_PTR_R15_(VALUE) sub sp, word ptr [r15 + VALUE]
#define SUB_SP_FROM_PTR_EAX_(VALUE) sub sp, word ptr [eax + VALUE]
#define SUB_SP_FROM_PTR_EBX_(VALUE) sub sp, word ptr [ebx + VALUE]
#define SUB_SP_FROM_PTR_ECX_(VALUE) sub sp, word ptr [ecx + VALUE]
#define SUB_SP_FROM_PTR_EDX_(VALUE) sub sp, word ptr [edx + VALUE]
#define SUB_SP_FROM_PTR_EDI_(VALUE) sub sp, word ptr [edi + VALUE]
#define SUB_SP_FROM_PTR_ESI_(VALUE) sub sp, word ptr [esi + VALUE]
#define SUB_SP_FROM_PTR_EBP_(VALUE) sub sp, word ptr [ebp + VALUE]
#define SUB_SP_FROM_PTR_ESP_(VALUE) sub sp, word ptr [esp + VALUE]

#define SUB_R8W_FROM_PTR_RAX_(VALUE) sub r8w, word ptr [rax + VALUE]
#define SUB_R8W_FROM_PTR_RBX_(VALUE) sub r8w, word ptr [rbx + VALUE]
#define SUB_R8W_FROM_PTR_RCX_(VALUE) sub r8w, word ptr [rcx + VALUE]
#define SUB_R8W_FROM_PTR_RDX_(VALUE) sub r8w, word ptr [rdx + VALUE]
#define SUB_R8W_FROM_PTR_RDI_(VALUE) sub r8w, word ptr [rdi + VALUE]
#define SUB_R8W_FROM_PTR_RSI_(VALUE) sub r8w, word ptr [rsi + VALUE]
#define SUB_R8W_FROM_PTR_RBP_(VALUE) sub r8w, word ptr [rbp + VALUE]
#define SUB_R8W_FROM_PTR_RSP_(VALUE) sub r8w, word ptr [rsp + VALUE]
#define SUB_R8W_FROM_PTR_R8_(VALUE) sub r8w, word ptr [r8 + VALUE]
#define SUB_R8W_FROM_PTR_R9_(VALUE) sub r8w, word ptr [r9 + VALUE]
#define SUB_R8W_FROM_PTR_R10_(VALUE) sub r8w, word ptr [r10 + VALUE]
#define SUB_R8W_FROM_PTR_R11_(VALUE) sub r8w, word ptr [r11 + VALUE]
#define SUB_R8W_FROM_PTR_R12_(VALUE) sub r8w, word ptr [r12 + VALUE]
#define SUB_R8W_FROM_PTR_R13_(VALUE) sub r8w, word ptr [r13 + VALUE]
#define SUB_R8W_FROM_PTR_R14_(VALUE) sub r8w, word ptr [r14 + VALUE]
#define SUB_R8W_FROM_PTR_R15_(VALUE) sub r8w, word ptr [r15 + VALUE]
#define SUB_R8W_FROM_PTR_EAX_(VALUE) sub r8w, word ptr [eax + VALUE]
#define SUB_R8W_FROM_PTR_EBX_(VALUE) sub r8w, word ptr [ebx + VALUE]
#define SUB_R8W_FROM_PTR_ECX_(VALUE) sub r8w, word ptr [ecx + VALUE]
#define SUB_R8W_FROM_PTR_EDX_(VALUE) sub r8w, word ptr [edx + VALUE]
#define SUB_R8W_FROM_PTR_EDI_(VALUE) sub r8w, word ptr [edi + VALUE]
#define SUB_R8W_FROM_PTR_ESI_(VALUE) sub r8w, word ptr [esi + VALUE]
#define SUB_R8W_FROM_PTR_EBP_(VALUE) sub r8w, word ptr [ebp + VALUE]
#define SUB_R8W_FROM_PTR_ESP_(VALUE) sub r8w, word ptr [esp + VALUE]

#define SUB_R9W_FROM_PTR_RAX_(VALUE) sub r9w, word ptr [rax + VALUE]
#define SUB_R9W_FROM_PTR_RBX_(VALUE) sub r9w, word ptr [rbx + VALUE]
#define SUB_R9W_FROM_PTR_RCX_(VALUE) sub r9w, word ptr [rcx + VALUE]
#define SUB_R9W_FROM_PTR_RDX_(VALUE) sub r9w, word ptr [rdx + VALUE]
#define SUB_R9W_FROM_PTR_RDI_(VALUE) sub r9w, word ptr [rdi + VALUE]
#define SUB_R9W_FROM_PTR_RSI_(VALUE) sub r9w, word ptr [rsi + VALUE]
#define SUB_R9W_FROM_PTR_RBP_(VALUE) sub r9w, word ptr [rbp + VALUE]
#define SUB_R9W_FROM_PTR_RSP_(VALUE) sub r9w, word ptr [rsp + VALUE]
#define SUB_R9W_FROM_PTR_R8_(VALUE) sub r9w, word ptr [r8 + VALUE]
#define SUB_R9W_FROM_PTR_R9_(VALUE) sub r9w, word ptr [r9 + VALUE]
#define SUB_R9W_FROM_PTR_R10_(VALUE) sub r9w, word ptr [r10 + VALUE]
#define SUB_R9W_FROM_PTR_R11_(VALUE) sub r9w, word ptr [r11 + VALUE]
#define SUB_R9W_FROM_PTR_R12_(VALUE) sub r9w, word ptr [r12 + VALUE]
#define SUB_R9W_FROM_PTR_R13_(VALUE) sub r9w, word ptr [r13 + VALUE]
#define SUB_R9W_FROM_PTR_R14_(VALUE) sub r9w, word ptr [r14 + VALUE]
#define SUB_R9W_FROM_PTR_R15_(VALUE) sub r9w, word ptr [r15 + VALUE]
#define SUB_R9W_FROM_PTR_EAX_(VALUE) sub r9w, word ptr [eax + VALUE]
#define SUB_R9W_FROM_PTR_EBX_(VALUE) sub r9w, word ptr [ebx + VALUE]
#define SUB_R9W_FROM_PTR_ECX_(VALUE) sub r9w, word ptr [ecx + VALUE]
#define SUB_R9W_FROM_PTR_EDX_(VALUE) sub r9w, word ptr [edx + VALUE]
#define SUB_R9W_FROM_PTR_EDI_(VALUE) sub r9w, word ptr [edi + VALUE]
#define SUB_R9W_FROM_PTR_ESI_(VALUE) sub r9w, word ptr [esi + VALUE]
#define SUB_R9W_FROM_PTR_EBP_(VALUE) sub r9w, word ptr [ebp + VALUE]
#define SUB_R9W_FROM_PTR_ESP_(VALUE) sub r9w, word ptr [esp + VALUE]

#define SUB_R10W_FROM_PTR_RAX_(VALUE) sub r10w, word ptr [rax + VALUE]
#define SUB_R10W_FROM_PTR_RBX_(VALUE) sub r10w, word ptr [rbx + VALUE]
#define SUB_R10W_FROM_PTR_RCX_(VALUE) sub r10w, word ptr [rcx + VALUE]
#define SUB_R10W_FROM_PTR_RDX_(VALUE) sub r10w, word ptr [rdx + VALUE]
#define SUB_R10W_FROM_PTR_RDI_(VALUE) sub r10w, word ptr [rdi + VALUE]
#define SUB_R10W_FROM_PTR_RSI_(VALUE) sub r10w, word ptr [rsi + VALUE]
#define SUB_R10W_FROM_PTR_RBP_(VALUE) sub r10w, word ptr [rbp + VALUE]
#define SUB_R10W_FROM_PTR_RSP_(VALUE) sub r10w, word ptr [rsp + VALUE]
#define SUB_R10W_FROM_PTR_R8_(VALUE) sub r10w, word ptr [r8 + VALUE]
#define SUB_R10W_FROM_PTR_R9_(VALUE) sub r10w, word ptr [r9 + VALUE]
#define SUB_R10W_FROM_PTR_R10_(VALUE) sub r10w, word ptr [r10 + VALUE]
#define SUB_R10W_FROM_PTR_R11_(VALUE) sub r10w, word ptr [r11 + VALUE]
#define SUB_R10W_FROM_PTR_R12_(VALUE) sub r10w, word ptr [r12 + VALUE]
#define SUB_R10W_FROM_PTR_R13_(VALUE) sub r10w, word ptr [r13 + VALUE]
#define SUB_R10W_FROM_PTR_R14_(VALUE) sub r10w, word ptr [r14 + VALUE]
#define SUB_R10W_FROM_PTR_R15_(VALUE) sub r10w, word ptr [r15 + VALUE]
#define SUB_R10W_FROM_PTR_EAX_(VALUE) sub r10w, word ptr [eax + VALUE]
#define SUB_R10W_FROM_PTR_EBX_(VALUE) sub r10w, word ptr [ebx + VALUE]
#define SUB_R10W_FROM_PTR_ECX_(VALUE) sub r10w, word ptr [ecx + VALUE]
#define SUB_R10W_FROM_PTR_EDX_(VALUE) sub r10w, word ptr [edx + VALUE]
#define SUB_R10W_FROM_PTR_EDI_(VALUE) sub r10w, word ptr [edi + VALUE]
#define SUB_R10W_FROM_PTR_ESI_(VALUE) sub r10w, word ptr [esi + VALUE]
#define SUB_R10W_FROM_PTR_EBP_(VALUE) sub r10w, word ptr [ebp + VALUE]
#define SUB_R10W_FROM_PTR_ESP_(VALUE) sub r10w, word ptr [esp + VALUE]

#define SUB_R11W_FROM_PTR_RAX_(VALUE) sub r11w, word ptr [rax + VALUE]
#define SUB_R11W_FROM_PTR_RBX_(VALUE) sub r11w, word ptr [rbx + VALUE]
#define SUB_R11W_FROM_PTR_RCX_(VALUE) sub r11w, word ptr [rcx + VALUE]
#define SUB_R11W_FROM_PTR_RDX_(VALUE) sub r11w, word ptr [rdx + VALUE]
#define SUB_R11W_FROM_PTR_RDI_(VALUE) sub r11w, word ptr [rdi + VALUE]
#define SUB_R11W_FROM_PTR_RSI_(VALUE) sub r11w, word ptr [rsi + VALUE]
#define SUB_R11W_FROM_PTR_RBP_(VALUE) sub r11w, word ptr [rbp + VALUE]
#define SUB_R11W_FROM_PTR_RSP_(VALUE) sub r11w, word ptr [rsp + VALUE]
#define SUB_R11W_FROM_PTR_R8_(VALUE) sub r11w, word ptr [r8 + VALUE]
#define SUB_R11W_FROM_PTR_R9_(VALUE) sub r11w, word ptr [r9 + VALUE]
#define SUB_R11W_FROM_PTR_R10_(VALUE) sub r11w, word ptr [r10 + VALUE]
#define SUB_R11W_FROM_PTR_R11_(VALUE) sub r11w, word ptr [r11 + VALUE]
#define SUB_R11W_FROM_PTR_R12_(VALUE) sub r11w, word ptr [r12 + VALUE]
#define SUB_R11W_FROM_PTR_R13_(VALUE) sub r11w, word ptr [r13 + VALUE]
#define SUB_R11W_FROM_PTR_R14_(VALUE) sub r11w, word ptr [r14 + VALUE]
#define SUB_R11W_FROM_PTR_R15_(VALUE) sub r11w, word ptr [r15 + VALUE]
#define SUB_R11W_FROM_PTR_EAX_(VALUE) sub r11w, word ptr [eax + VALUE]
#define SUB_R11W_FROM_PTR_EBX_(VALUE) sub r11w, word ptr [ebx + VALUE]
#define SUB_R11W_FROM_PTR_ECX_(VALUE) sub r11w, word ptr [ecx + VALUE]
#define SUB_R11W_FROM_PTR_EDX_(VALUE) sub r11w, word ptr [edx + VALUE]
#define SUB_R11W_FROM_PTR_EDI_(VALUE) sub r11w, word ptr [edi + VALUE]
#define SUB_R11W_FROM_PTR_ESI_(VALUE) sub r11w, word ptr [esi + VALUE]
#define SUB_R11W_FROM_PTR_EBP_(VALUE) sub r11w, word ptr [ebp + VALUE]
#define SUB_R11W_FROM_PTR_ESP_(VALUE) sub r11w, word ptr [esp + VALUE]

#define SUB_R12W_FROM_PTR_RAX_(VALUE) sub r12w, word ptr [rax + VALUE]
#define SUB_R12W_FROM_PTR_RBX_(VALUE) sub r12w, word ptr [rbx + VALUE]
#define SUB_R12W_FROM_PTR_RCX_(VALUE) sub r12w, word ptr [rcx + VALUE]
#define SUB_R12W_FROM_PTR_RDX_(VALUE) sub r12w, word ptr [rdx + VALUE]
#define SUB_R12W_FROM_PTR_RDI_(VALUE) sub r12w, word ptr [rdi + VALUE]
#define SUB_R12W_FROM_PTR_RSI_(VALUE) sub r12w, word ptr [rsi + VALUE]
#define SUB_R12W_FROM_PTR_RBP_(VALUE) sub r12w, word ptr [rbp + VALUE]
#define SUB_R12W_FROM_PTR_RSP_(VALUE) sub r12w, word ptr [rsp + VALUE]
#define SUB_R12W_FROM_PTR_R8_(VALUE) sub r12w, word ptr [r8 + VALUE]
#define SUB_R12W_FROM_PTR_R9_(VALUE) sub r12w, word ptr [r9 + VALUE]
#define SUB_R12W_FROM_PTR_R10_(VALUE) sub r12w, word ptr [r10 + VALUE]
#define SUB_R12W_FROM_PTR_R11_(VALUE) sub r12w, word ptr [r11 + VALUE]
#define SUB_R12W_FROM_PTR_R12_(VALUE) sub r12w, word ptr [r12 + VALUE]
#define SUB_R12W_FROM_PTR_R13_(VALUE) sub r12w, word ptr [r13 + VALUE]
#define SUB_R12W_FROM_PTR_R14_(VALUE) sub r12w, word ptr [r14 + VALUE]
#define SUB_R12W_FROM_PTR_R15_(VALUE) sub r12w, word ptr [r15 + VALUE]
#define SUB_R12W_FROM_PTR_EAX_(VALUE) sub r12w, word ptr [eax + VALUE]
#define SUB_R12W_FROM_PTR_EBX_(VALUE) sub r12w, word ptr [ebx + VALUE]
#define SUB_R12W_FROM_PTR_ECX_(VALUE) sub r12w, word ptr [ecx + VALUE]
#define SUB_R12W_FROM_PTR_EDX_(VALUE) sub r12w, word ptr [edx + VALUE]
#define SUB_R12W_FROM_PTR_EDI_(VALUE) sub r12w, word ptr [edi + VALUE]
#define SUB_R12W_FROM_PTR_ESI_(VALUE) sub r12w, word ptr [esi + VALUE]
#define SUB_R12W_FROM_PTR_EBP_(VALUE) sub r12w, word ptr [ebp + VALUE]
#define SUB_R12W_FROM_PTR_ESP_(VALUE) sub r12w, word ptr [esp + VALUE]

#define SUB_R13W_FROM_PTR_RAX_(VALUE) sub r13w, word ptr [rax + VALUE]
#define SUB_R13W_FROM_PTR_RBX_(VALUE) sub r13w, word ptr [rbx + VALUE]
#define SUB_R13W_FROM_PTR_RCX_(VALUE) sub r13w, word ptr [rcx + VALUE]
#define SUB_R13W_FROM_PTR_RDX_(VALUE) sub r13w, word ptr [rdx + VALUE]
#define SUB_R13W_FROM_PTR_RDI_(VALUE) sub r13w, word ptr [rdi + VALUE]
#define SUB_R13W_FROM_PTR_RSI_(VALUE) sub r13w, word ptr [rsi + VALUE]
#define SUB_R13W_FROM_PTR_RBP_(VALUE) sub r13w, word ptr [rbp + VALUE]
#define SUB_R13W_FROM_PTR_RSP_(VALUE) sub r13w, word ptr [rsp + VALUE]
#define SUB_R13W_FROM_PTR_R8_(VALUE) sub r13w, word ptr [r8 + VALUE]
#define SUB_R13W_FROM_PTR_R9_(VALUE) sub r13w, word ptr [r9 + VALUE]
#define SUB_R13W_FROM_PTR_R10_(VALUE) sub r13w, word ptr [r10 + VALUE]
#define SUB_R13W_FROM_PTR_R11_(VALUE) sub r13w, word ptr [r11 + VALUE]
#define SUB_R13W_FROM_PTR_R12_(VALUE) sub r13w, word ptr [r12 + VALUE]
#define SUB_R13W_FROM_PTR_R13_(VALUE) sub r13w, word ptr [r13 + VALUE]
#define SUB_R13W_FROM_PTR_R14_(VALUE) sub r13w, word ptr [r14 + VALUE]
#define SUB_R13W_FROM_PTR_R15_(VALUE) sub r13w, word ptr [r15 + VALUE]
#define SUB_R13W_FROM_PTR_EAX_(VALUE) sub r13w, word ptr [eax + VALUE]
#define SUB_R13W_FROM_PTR_EBX_(VALUE) sub r13w, word ptr [ebx + VALUE]
#define SUB_R13W_FROM_PTR_ECX_(VALUE) sub r13w, word ptr [ecx + VALUE]
#define SUB_R13W_FROM_PTR_EDX_(VALUE) sub r13w, word ptr [edx + VALUE]
#define SUB_R13W_FROM_PTR_EDI_(VALUE) sub r13w, word ptr [edi + VALUE]
#define SUB_R13W_FROM_PTR_ESI_(VALUE) sub r13w, word ptr [esi + VALUE]
#define SUB_R13W_FROM_PTR_EBP_(VALUE) sub r13w, word ptr [ebp + VALUE]
#define SUB_R13W_FROM_PTR_ESP_(VALUE) sub r13w, word ptr [esp + VALUE]

#define SUB_R14W_FROM_PTR_RAX_(VALUE) sub r14w, word ptr [rax + VALUE]
#define SUB_R14W_FROM_PTR_RBX_(VALUE) sub r14w, word ptr [rbx + VALUE]
#define SUB_R14W_FROM_PTR_RCX_(VALUE) sub r14w, word ptr [rcx + VALUE]
#define SUB_R14W_FROM_PTR_RDX_(VALUE) sub r14w, word ptr [rdx + VALUE]
#define SUB_R14W_FROM_PTR_RDI_(VALUE) sub r14w, word ptr [rdi + VALUE]
#define SUB_R14W_FROM_PTR_RSI_(VALUE) sub r14w, word ptr [rsi + VALUE]
#define SUB_R14W_FROM_PTR_RBP_(VALUE) sub r14w, word ptr [rbp + VALUE]
#define SUB_R14W_FROM_PTR_RSP_(VALUE) sub r14w, word ptr [rsp + VALUE]
#define SUB_R14W_FROM_PTR_R8_(VALUE) sub r14w, word ptr [r8 + VALUE]
#define SUB_R14W_FROM_PTR_R9_(VALUE) sub r14w, word ptr [r9 + VALUE]
#define SUB_R14W_FROM_PTR_R10_(VALUE) sub r14w, word ptr [r10 + VALUE]
#define SUB_R14W_FROM_PTR_R11_(VALUE) sub r14w, word ptr [r11 + VALUE]
#define SUB_R14W_FROM_PTR_R12_(VALUE) sub r14w, word ptr [r12 + VALUE]
#define SUB_R14W_FROM_PTR_R13_(VALUE) sub r14w, word ptr [r13 + VALUE]
#define SUB_R14W_FROM_PTR_R14_(VALUE) sub r14w, word ptr [r14 + VALUE]
#define SUB_R14W_FROM_PTR_R15_(VALUE) sub r14w, word ptr [r15 + VALUE]
#define SUB_R14W_FROM_PTR_EAX_(VALUE) sub r14w, word ptr [eax + VALUE]
#define SUB_R14W_FROM_PTR_EBX_(VALUE) sub r14w, word ptr [ebx + VALUE]
#define SUB_R14W_FROM_PTR_ECX_(VALUE) sub r14w, word ptr [ecx + VALUE]
#define SUB_R14W_FROM_PTR_EDX_(VALUE) sub r14w, word ptr [edx + VALUE]
#define SUB_R14W_FROM_PTR_EDI_(VALUE) sub r14w, word ptr [edi + VALUE]
#define SUB_R14W_FROM_PTR_ESI_(VALUE) sub r14w, word ptr [esi + VALUE]
#define SUB_R14W_FROM_PTR_EBP_(VALUE) sub r14w, word ptr [ebp + VALUE]
#define SUB_R14W_FROM_PTR_ESP_(VALUE) sub r14w, word ptr [esp + VALUE]

#define SUB_R15W_FROM_PTR_RAX_(VALUE) sub r15w, word ptr [rax + VALUE]
#define SUB_R15W_FROM_PTR_RBX_(VALUE) sub r15w, word ptr [rbx + VALUE]
#define SUB_R15W_FROM_PTR_RCX_(VALUE) sub r15w, word ptr [rcx + VALUE]
#define SUB_R15W_FROM_PTR_RDX_(VALUE) sub r15w, word ptr [rdx + VALUE]
#define SUB_R15W_FROM_PTR_RDI_(VALUE) sub r15w, word ptr [rdi + VALUE]
#define SUB_R15W_FROM_PTR_RSI_(VALUE) sub r15w, word ptr [rsi + VALUE]
#define SUB_R15W_FROM_PTR_RBP_(VALUE) sub r15w, word ptr [rbp + VALUE]
#define SUB_R15W_FROM_PTR_RSP_(VALUE) sub r15w, word ptr [rsp + VALUE]
#define SUB_R15W_FROM_PTR_R8_(VALUE) sub r15w, word ptr [r8 + VALUE]
#define SUB_R15W_FROM_PTR_R9_(VALUE) sub r15w, word ptr [r9 + VALUE]
#define SUB_R15W_FROM_PTR_R10_(VALUE) sub r15w, word ptr [r10 + VALUE]
#define SUB_R15W_FROM_PTR_R11_(VALUE) sub r15w, word ptr [r11 + VALUE]
#define SUB_R15W_FROM_PTR_R12_(VALUE) sub r15w, word ptr [r12 + VALUE]
#define SUB_R15W_FROM_PTR_R13_(VALUE) sub r15w, word ptr [r13 + VALUE]
#define SUB_R15W_FROM_PTR_R14_(VALUE) sub r15w, word ptr [r14 + VALUE]
#define SUB_R15W_FROM_PTR_R15_(VALUE) sub r15w, word ptr [r15 + VALUE]
#define SUB_R15W_FROM_PTR_EAX_(VALUE) sub r15w, word ptr [eax + VALUE]
#define SUB_R15W_FROM_PTR_EBX_(VALUE) sub r15w, word ptr [ebx + VALUE]
#define SUB_R15W_FROM_PTR_ECX_(VALUE) sub r15w, word ptr [ecx + VALUE]
#define SUB_R15W_FROM_PTR_EDX_(VALUE) sub r15w, word ptr [edx + VALUE]
#define SUB_R15W_FROM_PTR_EDI_(VALUE) sub r15w, word ptr [edi + VALUE]
#define SUB_R15W_FROM_PTR_ESI_(VALUE) sub r15w, word ptr [esi + VALUE]
#define SUB_R15W_FROM_PTR_EBP_(VALUE) sub r15w, word ptr [ebp + VALUE]
#define SUB_R15W_FROM_PTR_ESP_(VALUE) sub r15w, word ptr [esp + VALUE]

#define SUB_AX_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], ax
#define SUB_AX_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], ax
#define SUB_AX_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], ax
#define SUB_AX_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], ax
#define SUB_AX_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], ax
#define SUB_AX_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], ax
#define SUB_AX_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], ax
#define SUB_AX_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], ax
#define SUB_AX_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], ax
#define SUB_AX_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], ax
#define SUB_AX_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], ax
#define SUB_AX_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], ax
#define SUB_AX_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], ax
#define SUB_AX_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], ax
#define SUB_AX_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], ax
#define SUB_AX_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], ax
#define SUB_AX_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], ax
#define SUB_AX_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], ax
#define SUB_AX_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], ax
#define SUB_AX_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], ax
#define SUB_AX_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], ax
#define SUB_AX_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], ax
#define SUB_AX_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], ax
#define SUB_AX_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], ax

#define SUB_BX_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], bx
#define SUB_BX_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], bx
#define SUB_BX_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], bx
#define SUB_BX_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], bx
#define SUB_BX_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], bx
#define SUB_BX_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], bx
#define SUB_BX_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], bx
#define SUB_BX_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], bx
#define SUB_BX_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], bx
#define SUB_BX_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], bx
#define SUB_BX_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], bx
#define SUB_BX_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], bx
#define SUB_BX_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], bx
#define SUB_BX_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], bx
#define SUB_BX_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], bx
#define SUB_BX_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], bx
#define SUB_BX_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], bx
#define SUB_BX_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], bx
#define SUB_BX_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], bx
#define SUB_BX_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], bx
#define SUB_BX_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], bx
#define SUB_BX_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], bx
#define SUB_BX_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], bx
#define SUB_BX_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], bx

#define SUB_CX_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], cx
#define SUB_CX_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], cx
#define SUB_CX_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], cx
#define SUB_CX_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], cx
#define SUB_CX_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], cx
#define SUB_CX_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], cx
#define SUB_CX_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], cx
#define SUB_CX_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], cx
#define SUB_CX_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], cx
#define SUB_CX_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], cx
#define SUB_CX_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], cx
#define SUB_CX_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], cx
#define SUB_CX_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], cx
#define SUB_CX_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], cx
#define SUB_CX_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], cx
#define SUB_CX_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], cx
#define SUB_CX_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], cx
#define SUB_CX_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], cx
#define SUB_CX_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], cx
#define SUB_CX_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], cx
#define SUB_CX_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], cx
#define SUB_CX_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], cx
#define SUB_CX_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], cx
#define SUB_CX_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], cx

#define SUB_DX_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], dx
#define SUB_DX_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], dx
#define SUB_DX_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], dx
#define SUB_DX_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], dx
#define SUB_DX_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], dx
#define SUB_DX_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], dx
#define SUB_DX_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], dx
#define SUB_DX_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], dx
#define SUB_DX_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], dx
#define SUB_DX_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], dx
#define SUB_DX_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], dx
#define SUB_DX_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], dx
#define SUB_DX_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], dx
#define SUB_DX_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], dx
#define SUB_DX_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], dx
#define SUB_DX_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], dx
#define SUB_DX_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], dx
#define SUB_DX_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], dx
#define SUB_DX_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], dx
#define SUB_DX_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], dx
#define SUB_DX_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], dx
#define SUB_DX_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], dx
#define SUB_DX_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], dx
#define SUB_DX_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], dx

#define SUB_DI_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], di
#define SUB_DI_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], di
#define SUB_DI_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], di
#define SUB_DI_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], di
#define SUB_DI_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], di
#define SUB_DI_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], di
#define SUB_DI_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], di
#define SUB_DI_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], di
#define SUB_DI_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], di
#define SUB_DI_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], di
#define SUB_DI_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], di
#define SUB_DI_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], di
#define SUB_DI_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], di
#define SUB_DI_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], di
#define SUB_DI_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], di
#define SUB_DI_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], di
#define SUB_DI_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], di
#define SUB_DI_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], di
#define SUB_DI_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], di
#define SUB_DI_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], di
#define SUB_DI_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], di
#define SUB_DI_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], di
#define SUB_DI_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], di
#define SUB_DI_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], di

#define SUB_SI_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], si
#define SUB_SI_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], si
#define SUB_SI_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], si
#define SUB_SI_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], si
#define SUB_SI_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], si
#define SUB_SI_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], si
#define SUB_SI_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], si
#define SUB_SI_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], si
#define SUB_SI_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], si
#define SUB_SI_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], si
#define SUB_SI_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], si
#define SUB_SI_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], si
#define SUB_SI_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], si
#define SUB_SI_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], si
#define SUB_SI_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], si
#define SUB_SI_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], si
#define SUB_SI_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], si
#define SUB_SI_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], si
#define SUB_SI_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], si
#define SUB_SI_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], si
#define SUB_SI_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], si
#define SUB_SI_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], si
#define SUB_SI_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], si
#define SUB_SI_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], si

#define SUB_BP_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], bp
#define SUB_BP_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], bp
#define SUB_BP_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], bp
#define SUB_BP_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], bp
#define SUB_BP_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], bp
#define SUB_BP_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], bp
#define SUB_BP_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], bp
#define SUB_BP_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], bp
#define SUB_BP_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], bp
#define SUB_BP_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], bp
#define SUB_BP_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], bp
#define SUB_BP_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], bp
#define SUB_BP_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], bp
#define SUB_BP_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], bp
#define SUB_BP_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], bp
#define SUB_BP_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], bp
#define SUB_BP_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], bp
#define SUB_BP_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], bp
#define SUB_BP_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], bp
#define SUB_BP_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], bp
#define SUB_BP_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], bp
#define SUB_BP_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], bp
#define SUB_BP_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], bp
#define SUB_BP_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], bp

#define SUB_SP_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], sp
#define SUB_SP_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], sp
#define SUB_SP_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], sp
#define SUB_SP_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], sp
#define SUB_SP_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], sp
#define SUB_SP_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], sp
#define SUB_SP_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], sp
#define SUB_SP_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], sp
#define SUB_SP_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], sp
#define SUB_SP_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], sp
#define SUB_SP_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], sp
#define SUB_SP_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], sp
#define SUB_SP_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], sp
#define SUB_SP_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], sp
#define SUB_SP_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], sp
#define SUB_SP_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], sp
#define SUB_SP_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], sp
#define SUB_SP_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], sp
#define SUB_SP_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], sp
#define SUB_SP_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], sp
#define SUB_SP_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], sp
#define SUB_SP_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], sp
#define SUB_SP_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], sp
#define SUB_SP_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], sp

#define SUB_R8W_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], r8w
#define SUB_R8W_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], r8w
#define SUB_R8W_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], r8w
#define SUB_R8W_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], r8w
#define SUB_R8W_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], r8w
#define SUB_R8W_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], r8w
#define SUB_R8W_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], r8w
#define SUB_R8W_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], r8w
#define SUB_R8W_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], r8w
#define SUB_R8W_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], r8w
#define SUB_R8W_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], r8w
#define SUB_R8W_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], r8w
#define SUB_R8W_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], r8w
#define SUB_R8W_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], r8w
#define SUB_R8W_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], r8w
#define SUB_R8W_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], r8w
#define SUB_R8W_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], r8w
#define SUB_R8W_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], r8w
#define SUB_R8W_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], r8w
#define SUB_R8W_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], r8w
#define SUB_R8W_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], r8w
#define SUB_R8W_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], r8w
#define SUB_R8W_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], r8w
#define SUB_R8W_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], r8w

#define SUB_R9W_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], r9w
#define SUB_R9W_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], r9w
#define SUB_R9W_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], r9w
#define SUB_R9W_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], r9w
#define SUB_R9W_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], r9w
#define SUB_R9W_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], r9w
#define SUB_R9W_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], r9w
#define SUB_R9W_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], r9w
#define SUB_R9W_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], r9w
#define SUB_R9W_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], r9w
#define SUB_R9W_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], r9w
#define SUB_R9W_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], r9w
#define SUB_R9W_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], r9w
#define SUB_R9W_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], r9w
#define SUB_R9W_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], r9w
#define SUB_R9W_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], r9w
#define SUB_R9W_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], r9w
#define SUB_R9W_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], r9w
#define SUB_R9W_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], r9w
#define SUB_R9W_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], r9w
#define SUB_R9W_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], r9w
#define SUB_R9W_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], r9w
#define SUB_R9W_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], r9w
#define SUB_R9W_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], r9w

#define SUB_R10W_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], r10w
#define SUB_R10W_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], r10w
#define SUB_R10W_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], r10w
#define SUB_R10W_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], r10w
#define SUB_R10W_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], r10w
#define SUB_R10W_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], r10w
#define SUB_R10W_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], r10w
#define SUB_R10W_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], r10w
#define SUB_R10W_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], r10w
#define SUB_R10W_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], r10w
#define SUB_R10W_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], r10w
#define SUB_R10W_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], r10w
#define SUB_R10W_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], r10w
#define SUB_R10W_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], r10w
#define SUB_R10W_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], r10w
#define SUB_R10W_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], r10w
#define SUB_R10W_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], r10w
#define SUB_R10W_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], r10w
#define SUB_R10W_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], r10w
#define SUB_R10W_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], r10w
#define SUB_R10W_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], r10w
#define SUB_R10W_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], r10w
#define SUB_R10W_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], r10w
#define SUB_R10W_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], r10w

#define SUB_R11W_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], r11w
#define SUB_R11W_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], r11w
#define SUB_R11W_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], r11w
#define SUB_R11W_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], r11w
#define SUB_R11W_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], r11w
#define SUB_R11W_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], r11w
#define SUB_R11W_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], r11w
#define SUB_R11W_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], r11w
#define SUB_R11W_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], r11w
#define SUB_R11W_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], r11w
#define SUB_R11W_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], r11w
#define SUB_R11W_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], r11w
#define SUB_R11W_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], r11w
#define SUB_R11W_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], r11w
#define SUB_R11W_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], r11w
#define SUB_R11W_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], r11w
#define SUB_R11W_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], r11w
#define SUB_R11W_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], r11w
#define SUB_R11W_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], r11w
#define SUB_R11W_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], r11w
#define SUB_R11W_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], r11w
#define SUB_R11W_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], r11w
#define SUB_R11W_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], r11w
#define SUB_R11W_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], r11w

#define SUB_R12W_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], r12w
#define SUB_R12W_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], r12w
#define SUB_R12W_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], r12w
#define SUB_R12W_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], r12w
#define SUB_R12W_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], r12w
#define SUB_R12W_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], r12w
#define SUB_R12W_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], r12w
#define SUB_R12W_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], r12w
#define SUB_R12W_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], r12w
#define SUB_R12W_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], r12w
#define SUB_R12W_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], r12w
#define SUB_R12W_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], r12w
#define SUB_R12W_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], r12w
#define SUB_R12W_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], r12w
#define SUB_R12W_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], r12w
#define SUB_R12W_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], r12w
#define SUB_R12W_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], r12w
#define SUB_R12W_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], r12w
#define SUB_R12W_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], r12w
#define SUB_R12W_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], r12w
#define SUB_R12W_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], r12w
#define SUB_R12W_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], r12w
#define SUB_R12W_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], r12w
#define SUB_R12W_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], r12w

#define SUB_R13W_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], r13w
#define SUB_R13W_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], r13w
#define SUB_R13W_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], r13w
#define SUB_R13W_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], r13w
#define SUB_R13W_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], r13w
#define SUB_R13W_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], r13w
#define SUB_R13W_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], r13w
#define SUB_R13W_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], r13w
#define SUB_R13W_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], r13w
#define SUB_R13W_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], r13w
#define SUB_R13W_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], r13w
#define SUB_R13W_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], r13w
#define SUB_R13W_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], r13w
#define SUB_R13W_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], r13w
#define SUB_R13W_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], r13w
#define SUB_R13W_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], r13w
#define SUB_R13W_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], r13w
#define SUB_R13W_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], r13w
#define SUB_R13W_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], r13w
#define SUB_R13W_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], r13w
#define SUB_R13W_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], r13w
#define SUB_R13W_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], r13w
#define SUB_R13W_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], r13w
#define SUB_R13W_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], r13w

#define SUB_R14W_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], r14w
#define SUB_R14W_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], r14w
#define SUB_R14W_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], r14w
#define SUB_R14W_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], r14w
#define SUB_R14W_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], r14w
#define SUB_R14W_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], r14w
#define SUB_R14W_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], r14w
#define SUB_R14W_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], r14w
#define SUB_R14W_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], r14w
#define SUB_R14W_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], r14w
#define SUB_R14W_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], r14w
#define SUB_R14W_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], r14w
#define SUB_R14W_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], r14w
#define SUB_R14W_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], r14w
#define SUB_R14W_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], r14w
#define SUB_R14W_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], r14w
#define SUB_R14W_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], r14w
#define SUB_R14W_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], r14w
#define SUB_R14W_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], r14w
#define SUB_R14W_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], r14w
#define SUB_R14W_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], r14w
#define SUB_R14W_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], r14w
#define SUB_R14W_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], r14w
#define SUB_R14W_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], r14w

#define SUB_R15W_TO_PTR_RAX_(VALUE) sub word ptr [rax + VALUE], r15w
#define SUB_R15W_TO_PTR_RBX_(VALUE) sub word ptr [rbx + VALUE], r15w
#define SUB_R15W_TO_PTR_RCX_(VALUE) sub word ptr [rcx + VALUE], r15w
#define SUB_R15W_TO_PTR_RDX_(VALUE) sub word ptr [rdx + VALUE], r15w
#define SUB_R15W_TO_PTR_RDI_(VALUE) sub word ptr [rdi + VALUE], r15w
#define SUB_R15W_TO_PTR_RSI_(VALUE) sub word ptr [rsi + VALUE], r15w
#define SUB_R15W_TO_PTR_RBP_(VALUE) sub word ptr [rbp + VALUE], r15w
#define SUB_R15W_TO_PTR_RSP_(VALUE) sub word ptr [rsp + VALUE], r15w
#define SUB_R15W_TO_PTR_R8_(VALUE) sub word ptr [r8 + VALUE], r15w
#define SUB_R15W_TO_PTR_R9_(VALUE) sub word ptr [r9 + VALUE], r15w
#define SUB_R15W_TO_PTR_R10_(VALUE) sub word ptr [r10 + VALUE], r15w
#define SUB_R15W_TO_PTR_R11_(VALUE) sub word ptr [r11 + VALUE], r15w
#define SUB_R15W_TO_PTR_R12_(VALUE) sub word ptr [r12 + VALUE], r15w
#define SUB_R15W_TO_PTR_R13_(VALUE) sub word ptr [r13 + VALUE], r15w
#define SUB_R15W_TO_PTR_R14_(VALUE) sub word ptr [r14 + VALUE], r15w
#define SUB_R15W_TO_PTR_R15_(VALUE) sub word ptr [r15 + VALUE], r15w
#define SUB_R15W_TO_PTR_EAX_(VALUE) sub word ptr [eax + VALUE], r15w
#define SUB_R15W_TO_PTR_EBX_(VALUE) sub word ptr [ebx + VALUE], r15w
#define SUB_R15W_TO_PTR_ECX_(VALUE) sub word ptr [ecx + VALUE], r15w
#define SUB_R15W_TO_PTR_EDX_(VALUE) sub word ptr [edx + VALUE], r15w
#define SUB_R15W_TO_PTR_EDI_(VALUE) sub word ptr [edi + VALUE], r15w
#define SUB_R15W_TO_PTR_ESI_(VALUE) sub word ptr [esi + VALUE], r15w
#define SUB_R15W_TO_PTR_EBP_(VALUE) sub word ptr [ebp + VALUE], r15w
#define SUB_R15W_TO_PTR_ESP_(VALUE) sub word ptr [esp + VALUE], r15w
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
