#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define TEST_AL_FROM_PTR_(VALUE) test al, byte ptr [VALUE]
#define TEST_BL_FROM_PTR_(VALUE) test bl, byte ptr [VALUE]
#define TEST_CL_FROM_PTR_(VALUE) test cl, byte ptr [VALUE]
#define TEST_DL_FROM_PTR_(VALUE) test dl, byte ptr [VALUE]

#define TEST_AL_TO_PTR_(VALUE) test byte ptr [VALUE], al
#define TEST_BL_TO_PTR_(VALUE) test byte ptr [VALUE], bl
#define TEST_CL_TO_PTR_(VALUE) test byte ptr [VALUE], cl
#define TEST_DL_TO_PTR_(VALUE) test byte ptr [VALUE], dl

#define TEST_AL_FROM_PTR_BX test al, byte ptr [bx]
#define TEST_AL_FROM_PTR_BP test al, byte ptr [bp]
#define TEST_AL_FROM_PTR_SI test al, byte ptr [si]
#define TEST_AL_FROM_PTR_DI test al, byte ptr [di]

#define TEST_BL_FROM_PTR_BX test bl, byte ptr [bx]
#define TEST_BL_FROM_PTR_BP test bl, byte ptr [bp]
#define TEST_BL_FROM_PTR_SI test bl, byte ptr [si]
#define TEST_BL_FROM_PTR_DI test bl, byte ptr [di]

#define TEST_CL_FROM_PTR_BX test cl, byte ptr [bx]
#define TEST_CL_FROM_PTR_BP test cl, byte ptr [bp]
#define TEST_CL_FROM_PTR_SI test cl, byte ptr [si]
#define TEST_CL_FROM_PTR_DI test cl, byte ptr [di]

#define TEST_DL_FROM_PTR_BX test dl, byte ptr [bx]
#define TEST_DL_FROM_PTR_BP test dl, byte ptr [bp]
#define TEST_DL_FROM_PTR_SI test dl, byte ptr [si]
#define TEST_DL_FROM_PTR_DI test dl, byte ptr [di]

#define TEST_AL_TO_PTR_BX test byte ptr [bx], al
#define TEST_AL_TO_PTR_BP test byte ptr [bp], al
#define TEST_AL_TO_PTR_SI test byte ptr [si], al
#define TEST_AL_TO_PTR_DI test byte ptr [di], al

#define TEST_BL_TO_PTR_BX test byte ptr [bx], bl
#define TEST_BL_TO_PTR_BP test byte ptr [bp], bl
#define TEST_BL_TO_PTR_SI test byte ptr [si], bl
#define TEST_BL_TO_PTR_DI test byte ptr [di], bl

#define TEST_CL_TO_PTR_BX test byte ptr [bx], cl
#define TEST_CL_TO_PTR_BP test byte ptr [bp], cl
#define TEST_CL_TO_PTR_SI test byte ptr [si], cl
#define TEST_CL_TO_PTR_DI test byte ptr [di], cl

#define TEST_DL_TO_PTR_BX test byte ptr [bx], dl
#define TEST_DL_TO_PTR_BP test byte ptr [bp], dl
#define TEST_DL_TO_PTR_SI test byte ptr [si], dl
#define TEST_DL_TO_PTR_DI test byte ptr [di], dl

#define TEST_AL_FROM_PTR_BX_(VALUE) test al, byte ptr [bx + VALUE]
#define TEST_AL_FROM_PTR_BP_(VALUE) test al, byte ptr [bp + VALUE]
#define TEST_AL_FROM_PTR_SI_(VALUE) test al, byte ptr [si + VALUE]
#define TEST_AL_FROM_PTR_DI_(VALUE) test al, byte ptr [di + VALUE]

#define TEST_BL_FROM_PTR_BX_(VALUE) test bl, byte ptr [bx + VALUE]
#define TEST_BL_FROM_PTR_BP_(VALUE) test bl, byte ptr [bp + VALUE]
#define TEST_BL_FROM_PTR_SI_(VALUE) test bl, byte ptr [si + VALUE]
#define TEST_BL_FROM_PTR_DI_(VALUE) test bl, byte ptr [di + VALUE]

#define TEST_CL_FROM_PTR_BX_(VALUE) test cl, byte ptr [bx + VALUE]
#define TEST_CL_FROM_PTR_BP_(VALUE) test cl, byte ptr [bp + VALUE]
#define TEST_CL_FROM_PTR_SI_(VALUE) test cl, byte ptr [si + VALUE]
#define TEST_CL_FROM_PTR_DI_(VALUE) test cl, byte ptr [di + VALUE]

#define TEST_DL_FROM_PTR_BX_(VALUE) test dl, byte ptr [bx + VALUE]
#define TEST_DL_FROM_PTR_BP_(VALUE) test dl, byte ptr [bp + VALUE]
#define TEST_DL_FROM_PTR_SI_(VALUE) test dl, byte ptr [si + VALUE]
#define TEST_DL_FROM_PTR_DI_(VALUE) test dl, byte ptr [di + VALUE]

#define TEST_AL_TO_PTR_BX_(VALUE) test byte ptr [bx + VALUE], al
#define TEST_AL_TO_PTR_BP_(VALUE) test byte ptr [bp + VALUE], al
#define TEST_AL_TO_PTR_SI_(VALUE) test byte ptr [si + VALUE], al
#define TEST_AL_TO_PTR_DI_(VALUE) test byte ptr [di + VALUE], al

#define TEST_BL_TO_PTR_BX_(VALUE) test byte ptr [bx + VALUE], bl
#define TEST_BL_TO_PTR_BP_(VALUE) test byte ptr [bp + VALUE], bl
#define TEST_BL_TO_PTR_SI_(VALUE) test byte ptr [si + VALUE], bl
#define TEST_BL_TO_PTR_DI_(VALUE) test byte ptr [di + VALUE], bl

#define TEST_CL_TO_PTR_BX_(VALUE) test byte ptr [bx + VALUE], cl
#define TEST_CL_TO_PTR_BP_(VALUE) test byte ptr [bp + VALUE], cl
#define TEST_CL_TO_PTR_SI_(VALUE) test byte ptr [si + VALUE], cl
#define TEST_CL_TO_PTR_DI_(VALUE) test byte ptr [di + VALUE], cl

#define TEST_DL_TO_PTR_BX_(VALUE) test byte ptr [bx + VALUE], dl
#define TEST_DL_TO_PTR_BP_(VALUE) test byte ptr [bp + VALUE], dl
#define TEST_DL_TO_PTR_SI_(VALUE) test byte ptr [si + VALUE], dl
#define TEST_DL_TO_PTR_DI_(VALUE) test byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define TEST_AL_FROM_PTR_(VALUE) test al, byte ptr [VALUE]
#define TEST_BL_FROM_PTR_(VALUE) test bl, byte ptr [VALUE]
#define TEST_CL_FROM_PTR_(VALUE) test cl, byte ptr [VALUE]
#define TEST_DL_FROM_PTR_(VALUE) test dl, byte ptr [VALUE]

#define TEST_AL_TO_PTR_(VALUE) test byte ptr [VALUE], al
#define TEST_BL_TO_PTR_(VALUE) test byte ptr [VALUE], bl
#define TEST_CL_TO_PTR_(VALUE) test byte ptr [VALUE], cl
#define TEST_DL_TO_PTR_(VALUE) test byte ptr [VALUE], dl

#define TEST_AL_FROM_PTR_EAX test al, byte ptr [eax]
#define TEST_AL_FROM_PTR_EBX test al, byte ptr [ebx]
#define TEST_AL_FROM_PTR_ECX test al, byte ptr [ecx]
#define TEST_AL_FROM_PTR_EDX test al, byte ptr [edx]
#define TEST_AL_FROM_PTR_EDI test al, byte ptr [edi]
#define TEST_AL_FROM_PTR_ESI test al, byte ptr [esi]
#define TEST_AL_FROM_PTR_EBP test al, byte ptr [ebp]
#define TEST_AL_FROM_PTR_ESP test al, byte ptr [esp]
#define TEST_AL_FROM_PTR_BX test al, byte ptr [bx]
#define TEST_AL_FROM_PTR_BP test al, byte ptr [bp]
#define TEST_AL_FROM_PTR_SI test al, byte ptr [si]
#define TEST_AL_FROM_PTR_DI test al, byte ptr [di]

#define TEST_BL_FROM_PTR_EAX test bl, byte ptr [eax]
#define TEST_BL_FROM_PTR_EBX test bl, byte ptr [ebx]
#define TEST_BL_FROM_PTR_ECX test bl, byte ptr [ecx]
#define TEST_BL_FROM_PTR_EDX test bl, byte ptr [edx]
#define TEST_BL_FROM_PTR_EDI test bl, byte ptr [edi]
#define TEST_BL_FROM_PTR_ESI test bl, byte ptr [esi]
#define TEST_BL_FROM_PTR_EBP test bl, byte ptr [ebp]
#define TEST_BL_FROM_PTR_ESP test bl, byte ptr [esp]
#define TEST_BL_FROM_PTR_BX test bl, byte ptr [bx]
#define TEST_BL_FROM_PTR_BP test bl, byte ptr [bp]
#define TEST_BL_FROM_PTR_SI test bl, byte ptr [si]
#define TEST_BL_FROM_PTR_DI test bl, byte ptr [di]

#define TEST_CL_FROM_PTR_EAX test cl, byte ptr [eax]
#define TEST_CL_FROM_PTR_EBX test cl, byte ptr [ebx]
#define TEST_CL_FROM_PTR_ECX test cl, byte ptr [ecx]
#define TEST_CL_FROM_PTR_EDX test cl, byte ptr [edx]
#define TEST_CL_FROM_PTR_EDI test cl, byte ptr [edi]
#define TEST_CL_FROM_PTR_ESI test cl, byte ptr [esi]
#define TEST_CL_FROM_PTR_EBP test cl, byte ptr [ebp]
#define TEST_CL_FROM_PTR_ESP test cl, byte ptr [esp]
#define TEST_CL_FROM_PTR_BX test cl, byte ptr [bx]
#define TEST_CL_FROM_PTR_BP test cl, byte ptr [bp]
#define TEST_CL_FROM_PTR_SI test cl, byte ptr [si]
#define TEST_CL_FROM_PTR_DI test cl, byte ptr [di]

#define TEST_DL_FROM_PTR_EAX test dl, byte ptr [eax]
#define TEST_DL_FROM_PTR_EBX test dl, byte ptr [ebx]
#define TEST_DL_FROM_PTR_ECX test dl, byte ptr [ecx]
#define TEST_DL_FROM_PTR_EDX test dl, byte ptr [edx]
#define TEST_DL_FROM_PTR_EDI test dl, byte ptr [edi]
#define TEST_DL_FROM_PTR_ESI test dl, byte ptr [esi]
#define TEST_DL_FROM_PTR_EBP test dl, byte ptr [ebp]
#define TEST_DL_FROM_PTR_ESP test dl, byte ptr [esp]
#define TEST_DL_FROM_PTR_BX test dl, byte ptr [bx]
#define TEST_DL_FROM_PTR_BP test dl, byte ptr [bp]
#define TEST_DL_FROM_PTR_SI test dl, byte ptr [si]
#define TEST_DL_FROM_PTR_DI test dl, byte ptr [di]

#define TEST_AL_TO_PTR_EAX test byte ptr [eax], al
#define TEST_AL_TO_PTR_EBX test byte ptr [ebx], al
#define TEST_AL_TO_PTR_ECX test byte ptr [ecx], al
#define TEST_AL_TO_PTR_EDX test byte ptr [edx], al
#define TEST_AL_TO_PTR_EDI test byte ptr [edi], al
#define TEST_AL_TO_PTR_ESI test byte ptr [esi], al
#define TEST_AL_TO_PTR_EBP test byte ptr [ebp], al
#define TEST_AL_TO_PTR_ESP test byte ptr [esp], al
#define TEST_AL_TO_PTR_BX test byte ptr [bx], al
#define TEST_AL_TO_PTR_BP test byte ptr [bp], al
#define TEST_AL_TO_PTR_SI test byte ptr [si], al
#define TEST_AL_TO_PTR_DI test byte ptr [di], al

#define TEST_BL_TO_PTR_EAX test byte ptr [eax], bl
#define TEST_BL_TO_PTR_EBX test byte ptr [ebx], bl
#define TEST_BL_TO_PTR_ECX test byte ptr [ecx], bl
#define TEST_BL_TO_PTR_EDX test byte ptr [edx], bl
#define TEST_BL_TO_PTR_EDI test byte ptr [edi], bl
#define TEST_BL_TO_PTR_ESI test byte ptr [esi], bl
#define TEST_BL_TO_PTR_EBP test byte ptr [ebp], bl
#define TEST_BL_TO_PTR_ESP test byte ptr [esp], bl
#define TEST_BL_TO_PTR_BX test byte ptr [bx], bl
#define TEST_BL_TO_PTR_BP test byte ptr [bp], bl
#define TEST_BL_TO_PTR_SI test byte ptr [si], bl
#define TEST_BL_TO_PTR_DI test byte ptr [di], bl

#define TEST_CL_TO_PTR_EAX test byte ptr [eax], cl
#define TEST_CL_TO_PTR_EBX test byte ptr [ebx], cl
#define TEST_CL_TO_PTR_ECX test byte ptr [ecx], cl
#define TEST_CL_TO_PTR_EDX test byte ptr [edx], cl
#define TEST_CL_TO_PTR_EDI test byte ptr [edi], cl
#define TEST_CL_TO_PTR_ESI test byte ptr [esi], cl
#define TEST_CL_TO_PTR_EBP test byte ptr [ebp], cl
#define TEST_CL_TO_PTR_ESP test byte ptr [esp], cl
#define TEST_CL_TO_PTR_BX test byte ptr [bx], cl
#define TEST_CL_TO_PTR_BP test byte ptr [bp], cl
#define TEST_CL_TO_PTR_SI test byte ptr [si], cl
#define TEST_CL_TO_PTR_DI test byte ptr [di], cl

#define TEST_DL_TO_PTR_EAX test byte ptr [eax], dl
#define TEST_DL_TO_PTR_EBX test byte ptr [ebx], dl
#define TEST_DL_TO_PTR_ECX test byte ptr [ecx], dl
#define TEST_DL_TO_PTR_EDX test byte ptr [edx], dl
#define TEST_DL_TO_PTR_EDI test byte ptr [edi], dl
#define TEST_DL_TO_PTR_ESI test byte ptr [esi], dl
#define TEST_DL_TO_PTR_EBP test byte ptr [ebp], dl
#define TEST_DL_TO_PTR_ESP test byte ptr [esp], dl
#define TEST_DL_TO_PTR_BX test byte ptr [bx], dl
#define TEST_DL_TO_PTR_BP test byte ptr [bp], dl
#define TEST_DL_TO_PTR_SI test byte ptr [si], dl
#define TEST_DL_TO_PTR_DI test byte ptr [di], dl

#define TEST_AL_FROM_PTR_EAX_(VALUE) test al, byte ptr [eax + VALUE]
#define TEST_AL_FROM_PTR_EBX_(VALUE) test al, byte ptr [ebx + VALUE]
#define TEST_AL_FROM_PTR_ECX_(VALUE) test al, byte ptr [ecx + VALUE]
#define TEST_AL_FROM_PTR_EDX_(VALUE) test al, byte ptr [edx + VALUE]
#define TEST_AL_FROM_PTR_EDI_(VALUE) test al, byte ptr [edi + VALUE]
#define TEST_AL_FROM_PTR_ESI_(VALUE) test al, byte ptr [esi + VALUE]
#define TEST_AL_FROM_PTR_EBP_(VALUE) test al, byte ptr [ebp + VALUE]
#define TEST_AL_FROM_PTR_ESP_(VALUE) test al, byte ptr [esp + VALUE]
#define TEST_AL_FROM_PTR_BX_(VALUE) test al, byte ptr [bx + VALUE]
#define TEST_AL_FROM_PTR_BP_(VALUE) test al, byte ptr [bp + VALUE]
#define TEST_AL_FROM_PTR_SI_(VALUE) test al, byte ptr [si + VALUE]
#define TEST_AL_FROM_PTR_DI_(VALUE) test al, byte ptr [di + VALUE]

#define TEST_BL_FROM_PTR_EAX_(VALUE) test bl, byte ptr [eax + VALUE]
#define TEST_BL_FROM_PTR_EBX_(VALUE) test bl, byte ptr [ebx + VALUE]
#define TEST_BL_FROM_PTR_ECX_(VALUE) test bl, byte ptr [ecx + VALUE]
#define TEST_BL_FROM_PTR_EDX_(VALUE) test bl, byte ptr [edx + VALUE]
#define TEST_BL_FROM_PTR_EDI_(VALUE) test bl, byte ptr [edi + VALUE]
#define TEST_BL_FROM_PTR_ESI_(VALUE) test bl, byte ptr [esi + VALUE]
#define TEST_BL_FROM_PTR_EBP_(VALUE) test bl, byte ptr [ebp + VALUE]
#define TEST_BL_FROM_PTR_ESP_(VALUE) test bl, byte ptr [esp + VALUE]
#define TEST_BL_FROM_PTR_BX_(VALUE) test bl, byte ptr [bx + VALUE]
#define TEST_BL_FROM_PTR_BP_(VALUE) test bl, byte ptr [bp + VALUE]
#define TEST_BL_FROM_PTR_SI_(VALUE) test bl, byte ptr [si + VALUE]
#define TEST_BL_FROM_PTR_DI_(VALUE) test bl, byte ptr [di + VALUE]

#define TEST_CL_FROM_PTR_EAX_(VALUE) test cl, byte ptr [eax + VALUE]
#define TEST_CL_FROM_PTR_EBX_(VALUE) test cl, byte ptr [ebx + VALUE]
#define TEST_CL_FROM_PTR_ECX_(VALUE) test cl, byte ptr [ecx + VALUE]
#define TEST_CL_FROM_PTR_EDX_(VALUE) test cl, byte ptr [edx + VALUE]
#define TEST_CL_FROM_PTR_EDI_(VALUE) test cl, byte ptr [edi + VALUE]
#define TEST_CL_FROM_PTR_ESI_(VALUE) test cl, byte ptr [esi + VALUE]
#define TEST_CL_FROM_PTR_EBP_(VALUE) test cl, byte ptr [ebp + VALUE]
#define TEST_CL_FROM_PTR_ESP_(VALUE) test cl, byte ptr [esp + VALUE]
#define TEST_CL_FROM_PTR_BX_(VALUE) test cl, byte ptr [bx + VALUE]
#define TEST_CL_FROM_PTR_BP_(VALUE) test cl, byte ptr [bp + VALUE]
#define TEST_CL_FROM_PTR_SI_(VALUE) test cl, byte ptr [si + VALUE]
#define TEST_CL_FROM_PTR_DI_(VALUE) test cl, byte ptr [di + VALUE]

#define TEST_DL_FROM_PTR_EAX_(VALUE) test dl, byte ptr [eax + VALUE]
#define TEST_DL_FROM_PTR_EBX_(VALUE) test dl, byte ptr [ebx + VALUE]
#define TEST_DL_FROM_PTR_ECX_(VALUE) test dl, byte ptr [ecx + VALUE]
#define TEST_DL_FROM_PTR_EDX_(VALUE) test dl, byte ptr [edx + VALUE]
#define TEST_DL_FROM_PTR_EDI_(VALUE) test dl, byte ptr [edi + VALUE]
#define TEST_DL_FROM_PTR_ESI_(VALUE) test dl, byte ptr [esi + VALUE]
#define TEST_DL_FROM_PTR_EBP_(VALUE) test dl, byte ptr [ebp + VALUE]
#define TEST_DL_FROM_PTR_ESP_(VALUE) test dl, byte ptr [esp + VALUE]
#define TEST_DL_FROM_PTR_BX_(VALUE) test dl, byte ptr [bx + VALUE]
#define TEST_DL_FROM_PTR_BP_(VALUE) test dl, byte ptr [bp + VALUE]
#define TEST_DL_FROM_PTR_SI_(VALUE) test dl, byte ptr [si + VALUE]
#define TEST_DL_FROM_PTR_DI_(VALUE) test dl, byte ptr [di + VALUE]

#define TEST_AL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], al
#define TEST_AL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], al
#define TEST_AL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], al
#define TEST_AL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], al
#define TEST_AL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], al
#define TEST_AL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], al
#define TEST_AL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], al
#define TEST_AL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], al
#define TEST_AL_TO_PTR_BX_(VALUE) test byte ptr [bx + VALUE], al
#define TEST_AL_TO_PTR_BP_(VALUE) test byte ptr [bp + VALUE], al
#define TEST_AL_TO_PTR_SI_(VALUE) test byte ptr [si + VALUE], al
#define TEST_AL_TO_PTR_DI_(VALUE) test byte ptr [di + VALUE], al

#define TEST_BL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], bl
#define TEST_BL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], bl
#define TEST_BL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], bl
#define TEST_BL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], bl
#define TEST_BL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], bl
#define TEST_BL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], bl
#define TEST_BL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], bl
#define TEST_BL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], bl
#define TEST_BL_TO_PTR_BX_(VALUE) test byte ptr [bx + VALUE], bl
#define TEST_BL_TO_PTR_BP_(VALUE) test byte ptr [bp + VALUE], bl
#define TEST_BL_TO_PTR_SI_(VALUE) test byte ptr [si + VALUE], bl
#define TEST_BL_TO_PTR_DI_(VALUE) test byte ptr [di + VALUE], bl

#define TEST_CL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], cl
#define TEST_CL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], cl
#define TEST_CL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], cl
#define TEST_CL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], cl
#define TEST_CL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], cl
#define TEST_CL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], cl
#define TEST_CL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], cl
#define TEST_CL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], cl
#define TEST_CL_TO_PTR_BX_(VALUE) test byte ptr [bx + VALUE], cl
#define TEST_CL_TO_PTR_BP_(VALUE) test byte ptr [bp + VALUE], cl
#define TEST_CL_TO_PTR_SI_(VALUE) test byte ptr [si + VALUE], cl
#define TEST_CL_TO_PTR_DI_(VALUE) test byte ptr [di + VALUE], cl

#define TEST_DL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], dl
#define TEST_DL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], dl
#define TEST_DL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], dl
#define TEST_DL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], dl
#define TEST_DL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], dl
#define TEST_DL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], dl
#define TEST_DL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], dl
#define TEST_DL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], dl
#define TEST_DL_TO_PTR_BX_(VALUE) test byte ptr [bx + VALUE], dl
#define TEST_DL_TO_PTR_BP_(VALUE) test byte ptr [bp + VALUE], dl
#define TEST_DL_TO_PTR_SI_(VALUE) test byte ptr [si + VALUE], dl
#define TEST_DL_TO_PTR_DI_(VALUE) test byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_AL_FROM_PTR_(VALUE) test al, byte ptr [VALUE]
#define TEST_BL_FROM_PTR_(VALUE) test bl, byte ptr [VALUE]
#define TEST_CL_FROM_PTR_(VALUE) test cl, byte ptr [VALUE]
#define TEST_DL_FROM_PTR_(VALUE) test dl, byte ptr [VALUE]
#define TEST_DIL_FROM_PTR_(VALUE) test dil, byte ptr [VALUE]
#define TEST_SIL_FROM_PTR_(VALUE) test sil, byte ptr [VALUE]
#define TEST_BPL_FROM_PTR_(VALUE) test bpl, byte ptr [VALUE]
#define TEST_SPL_FROM_PTR_(VALUE) test spl, byte ptr [VALUE]
#define TEST_R8B_FROM_PTR_(VALUE) test r8b, byte ptr [VALUE]
#define TEST_R9B_FROM_PTR_(VALUE) test r9b, byte ptr [VALUE]
#define TEST_R10B_FROM_PTR_(VALUE) test r10b, byte ptr [VALUE]
#define TEST_R11B_FROM_PTR_(VALUE) test r11b, byte ptr [VALUE]
#define TEST_R12B_FROM_PTR_(VALUE) test r12b, byte ptr [VALUE]
#define TEST_R13B_FROM_PTR_(VALUE) test r13b, byte ptr [VALUE]
#define TEST_R14B_FROM_PTR_(VALUE) test r14b, byte ptr [VALUE]
#define TEST_R15B_FROM_PTR_(VALUE) test r15b, byte ptr [VALUE]

#define TEST_AL_TO_PTR_(VALUE) test byte ptr [VALUE], al
#define TEST_BL_TO_PTR_(VALUE) test byte ptr [VALUE], bl
#define TEST_CL_TO_PTR_(VALUE) test byte ptr [VALUE], cl
#define TEST_DL_TO_PTR_(VALUE) test byte ptr [VALUE], dl
#define TEST_DIL_TO_PTR_(VALUE) test byte ptr [VALUE], dil
#define TEST_SIL_TO_PTR_(VALUE) test byte ptr [VALUE], sil
#define TEST_BPL_TO_PTR_(VALUE) test byte ptr [VALUE], bpl
#define TEST_SPL_TO_PTR_(VALUE) test byte ptr [VALUE], spl
#define TEST_R8B_TO_PTR_(VALUE) test byte ptr [VALUE], r8b
#define TEST_R9B_TO_PTR_(VALUE) test byte ptr [VALUE], r9b
#define TEST_R10B_TO_PTR_(VALUE) test byte ptr [VALUE], r10b
#define TEST_R11B_TO_PTR_(VALUE) test byte ptr [VALUE], r11b
#define TEST_R12B_TO_PTR_(VALUE) test byte ptr [VALUE], r12b
#define TEST_R13B_TO_PTR_(VALUE) test byte ptr [VALUE], r13b
#define TEST_R14B_TO_PTR_(VALUE) test byte ptr [VALUE], r14b
#define TEST_R15B_TO_PTR_(VALUE) test byte ptr [VALUE], r15b

#define TEST_AL_FROM_PTR_RAX test al, byte ptr [rax]
#define TEST_AL_FROM_PTR_RBX test al, byte ptr [rbx]
#define TEST_AL_FROM_PTR_RCX test al, byte ptr [rcx]
#define TEST_AL_FROM_PTR_RDX test al, byte ptr [rdx]
#define TEST_AL_FROM_PTR_RDI test al, byte ptr [rdi]
#define TEST_AL_FROM_PTR_RSI test al, byte ptr [rsi]
#define TEST_AL_FROM_PTR_RBP test al, byte ptr [rbp]
#define TEST_AL_FROM_PTR_RSP test al, byte ptr [rsp]
#define TEST_AL_FROM_PTR_R8 test al, byte ptr [r8]
#define TEST_AL_FROM_PTR_R9 test al, byte ptr [r9]
#define TEST_AL_FROM_PTR_R10 test al, byte ptr [r10]
#define TEST_AL_FROM_PTR_R11 test al, byte ptr [r11]
#define TEST_AL_FROM_PTR_R12 test al, byte ptr [r12]
#define TEST_AL_FROM_PTR_R13 test al, byte ptr [r13]
#define TEST_AL_FROM_PTR_R14 test al, byte ptr [r14]
#define TEST_AL_FROM_PTR_R15 test al, byte ptr [r15]
#define TEST_AL_FROM_PTR_EAX test al, byte ptr [eax]
#define TEST_AL_FROM_PTR_EBX test al, byte ptr [ebx]
#define TEST_AL_FROM_PTR_ECX test al, byte ptr [ecx]
#define TEST_AL_FROM_PTR_EDX test al, byte ptr [edx]
#define TEST_AL_FROM_PTR_EDI test al, byte ptr [edi]
#define TEST_AL_FROM_PTR_ESI test al, byte ptr [esi]
#define TEST_AL_FROM_PTR_EBP test al, byte ptr [ebp]
#define TEST_AL_FROM_PTR_ESP test al, byte ptr [esp]

#define TEST_BL_FROM_PTR_RAX test bl, byte ptr [rax]
#define TEST_BL_FROM_PTR_RBX test bl, byte ptr [rbx]
#define TEST_BL_FROM_PTR_RCX test bl, byte ptr [rcx]
#define TEST_BL_FROM_PTR_RDX test bl, byte ptr [rdx]
#define TEST_BL_FROM_PTR_RDI test bl, byte ptr [rdi]
#define TEST_BL_FROM_PTR_RSI test bl, byte ptr [rsi]
#define TEST_BL_FROM_PTR_RBP test bl, byte ptr [rbp]
#define TEST_BL_FROM_PTR_RSP test bl, byte ptr [rsp]
#define TEST_BL_FROM_PTR_R8 test bl, byte ptr [r8]
#define TEST_BL_FROM_PTR_R9 test bl, byte ptr [r9]
#define TEST_BL_FROM_PTR_R10 test bl, byte ptr [r10]
#define TEST_BL_FROM_PTR_R11 test bl, byte ptr [r11]
#define TEST_BL_FROM_PTR_R12 test bl, byte ptr [r12]
#define TEST_BL_FROM_PTR_R13 test bl, byte ptr [r13]
#define TEST_BL_FROM_PTR_R14 test bl, byte ptr [r14]
#define TEST_BL_FROM_PTR_R15 test bl, byte ptr [r15]
#define TEST_BL_FROM_PTR_EAX test bl, byte ptr [eax]
#define TEST_BL_FROM_PTR_EBX test bl, byte ptr [ebx]
#define TEST_BL_FROM_PTR_ECX test bl, byte ptr [ecx]
#define TEST_BL_FROM_PTR_EDX test bl, byte ptr [edx]
#define TEST_BL_FROM_PTR_EDI test bl, byte ptr [edi]
#define TEST_BL_FROM_PTR_ESI test bl, byte ptr [esi]
#define TEST_BL_FROM_PTR_EBP test bl, byte ptr [ebp]
#define TEST_BL_FROM_PTR_ESP test bl, byte ptr [esp]

#define TEST_CL_FROM_PTR_RAX test cl, byte ptr [rax]
#define TEST_CL_FROM_PTR_RBX test cl, byte ptr [rbx]
#define TEST_CL_FROM_PTR_RCX test cl, byte ptr [rcx]
#define TEST_CL_FROM_PTR_RDX test cl, byte ptr [rdx]
#define TEST_CL_FROM_PTR_RDI test cl, byte ptr [rdi]
#define TEST_CL_FROM_PTR_RSI test cl, byte ptr [rsi]
#define TEST_CL_FROM_PTR_RBP test cl, byte ptr [rbp]
#define TEST_CL_FROM_PTR_RSP test cl, byte ptr [rsp]
#define TEST_CL_FROM_PTR_R8 test cl, byte ptr [r8]
#define TEST_CL_FROM_PTR_R9 test cl, byte ptr [r9]
#define TEST_CL_FROM_PTR_R10 test cl, byte ptr [r10]
#define TEST_CL_FROM_PTR_R11 test cl, byte ptr [r11]
#define TEST_CL_FROM_PTR_R12 test cl, byte ptr [r12]
#define TEST_CL_FROM_PTR_R13 test cl, byte ptr [r13]
#define TEST_CL_FROM_PTR_R14 test cl, byte ptr [r14]
#define TEST_CL_FROM_PTR_R15 test cl, byte ptr [r15]
#define TEST_CL_FROM_PTR_EAX test cl, byte ptr [eax]
#define TEST_CL_FROM_PTR_EBX test cl, byte ptr [ebx]
#define TEST_CL_FROM_PTR_ECX test cl, byte ptr [ecx]
#define TEST_CL_FROM_PTR_EDX test cl, byte ptr [edx]
#define TEST_CL_FROM_PTR_EDI test cl, byte ptr [edi]
#define TEST_CL_FROM_PTR_ESI test cl, byte ptr [esi]
#define TEST_CL_FROM_PTR_EBP test cl, byte ptr [ebp]
#define TEST_CL_FROM_PTR_ESP test cl, byte ptr [esp]

#define TEST_DL_FROM_PTR_RAX test dl, byte ptr [rax]
#define TEST_DL_FROM_PTR_RBX test dl, byte ptr [rbx]
#define TEST_DL_FROM_PTR_RCX test dl, byte ptr [rcx]
#define TEST_DL_FROM_PTR_RDX test dl, byte ptr [rdx]
#define TEST_DL_FROM_PTR_RDI test dl, byte ptr [rdi]
#define TEST_DL_FROM_PTR_RSI test dl, byte ptr [rsi]
#define TEST_DL_FROM_PTR_RBP test dl, byte ptr [rbp]
#define TEST_DL_FROM_PTR_RSP test dl, byte ptr [rsp]
#define TEST_DL_FROM_PTR_R8 test dl, byte ptr [r8]
#define TEST_DL_FROM_PTR_R9 test dl, byte ptr [r9]
#define TEST_DL_FROM_PTR_R10 test dl, byte ptr [r10]
#define TEST_DL_FROM_PTR_R11 test dl, byte ptr [r11]
#define TEST_DL_FROM_PTR_R12 test dl, byte ptr [r12]
#define TEST_DL_FROM_PTR_R13 test dl, byte ptr [r13]
#define TEST_DL_FROM_PTR_R14 test dl, byte ptr [r14]
#define TEST_DL_FROM_PTR_R15 test dl, byte ptr [r15]
#define TEST_DL_FROM_PTR_EAX test dl, byte ptr [eax]
#define TEST_DL_FROM_PTR_EBX test dl, byte ptr [ebx]
#define TEST_DL_FROM_PTR_ECX test dl, byte ptr [ecx]
#define TEST_DL_FROM_PTR_EDX test dl, byte ptr [edx]
#define TEST_DL_FROM_PTR_EDI test dl, byte ptr [edi]
#define TEST_DL_FROM_PTR_ESI test dl, byte ptr [esi]
#define TEST_DL_FROM_PTR_EBP test dl, byte ptr [ebp]
#define TEST_DL_FROM_PTR_ESP test dl, byte ptr [esp]

#define TEST_DIL_FROM_PTR_RAX test dil, byte ptr [rax]
#define TEST_DIL_FROM_PTR_RBX test dil, byte ptr [rbx]
#define TEST_DIL_FROM_PTR_RCX test dil, byte ptr [rcx]
#define TEST_DIL_FROM_PTR_RDX test dil, byte ptr [rdx]
#define TEST_DIL_FROM_PTR_RDI test dil, byte ptr [rdi]
#define TEST_DIL_FROM_PTR_RSI test dil, byte ptr [rsi]
#define TEST_DIL_FROM_PTR_RBP test dil, byte ptr [rbp]
#define TEST_DIL_FROM_PTR_RSP test dil, byte ptr [rsp]
#define TEST_DIL_FROM_PTR_R8 test dil, byte ptr [r8]
#define TEST_DIL_FROM_PTR_R9 test dil, byte ptr [r9]
#define TEST_DIL_FROM_PTR_R10 test dil, byte ptr [r10]
#define TEST_DIL_FROM_PTR_R11 test dil, byte ptr [r11]
#define TEST_DIL_FROM_PTR_R12 test dil, byte ptr [r12]
#define TEST_DIL_FROM_PTR_R13 test dil, byte ptr [r13]
#define TEST_DIL_FROM_PTR_R14 test dil, byte ptr [r14]
#define TEST_DIL_FROM_PTR_R15 test dil, byte ptr [r15]
#define TEST_DIL_FROM_PTR_EAX test dil, byte ptr [eax]
#define TEST_DIL_FROM_PTR_EBX test dil, byte ptr [ebx]
#define TEST_DIL_FROM_PTR_ECX test dil, byte ptr [ecx]
#define TEST_DIL_FROM_PTR_EDX test dil, byte ptr [edx]
#define TEST_DIL_FROM_PTR_EDI test dil, byte ptr [edi]
#define TEST_DIL_FROM_PTR_ESI test dil, byte ptr [esi]
#define TEST_DIL_FROM_PTR_EBP test dil, byte ptr [ebp]
#define TEST_DIL_FROM_PTR_ESP test dil, byte ptr [esp]

#define TEST_SIL_FROM_PTR_RAX test sil, byte ptr [rax]
#define TEST_SIL_FROM_PTR_RBX test sil, byte ptr [rbx]
#define TEST_SIL_FROM_PTR_RCX test sil, byte ptr [rcx]
#define TEST_SIL_FROM_PTR_RDX test sil, byte ptr [rdx]
#define TEST_SIL_FROM_PTR_RDI test sil, byte ptr [rdi]
#define TEST_SIL_FROM_PTR_RSI test sil, byte ptr [rsi]
#define TEST_SIL_FROM_PTR_RBP test sil, byte ptr [rbp]
#define TEST_SIL_FROM_PTR_RSP test sil, byte ptr [rsp]
#define TEST_SIL_FROM_PTR_R8 test sil, byte ptr [r8]
#define TEST_SIL_FROM_PTR_R9 test sil, byte ptr [r9]
#define TEST_SIL_FROM_PTR_R10 test sil, byte ptr [r10]
#define TEST_SIL_FROM_PTR_R11 test sil, byte ptr [r11]
#define TEST_SIL_FROM_PTR_R12 test sil, byte ptr [r12]
#define TEST_SIL_FROM_PTR_R13 test sil, byte ptr [r13]
#define TEST_SIL_FROM_PTR_R14 test sil, byte ptr [r14]
#define TEST_SIL_FROM_PTR_R15 test sil, byte ptr [r15]
#define TEST_SIL_FROM_PTR_EAX test sil, byte ptr [eax]
#define TEST_SIL_FROM_PTR_EBX test sil, byte ptr [ebx]
#define TEST_SIL_FROM_PTR_ECX test sil, byte ptr [ecx]
#define TEST_SIL_FROM_PTR_EDX test sil, byte ptr [edx]
#define TEST_SIL_FROM_PTR_EDI test sil, byte ptr [edi]
#define TEST_SIL_FROM_PTR_ESI test sil, byte ptr [esi]
#define TEST_SIL_FROM_PTR_EBP test sil, byte ptr [ebp]
#define TEST_SIL_FROM_PTR_ESP test sil, byte ptr [esp]

#define TEST_BPL_FROM_PTR_RAX test bpl, byte ptr [rax]
#define TEST_BPL_FROM_PTR_RBX test bpl, byte ptr [rbx]
#define TEST_BPL_FROM_PTR_RCX test bpl, byte ptr [rcx]
#define TEST_BPL_FROM_PTR_RDX test bpl, byte ptr [rdx]
#define TEST_BPL_FROM_PTR_RDI test bpl, byte ptr [rdi]
#define TEST_BPL_FROM_PTR_RSI test bpl, byte ptr [rsi]
#define TEST_BPL_FROM_PTR_RBP test bpl, byte ptr [rbp]
#define TEST_BPL_FROM_PTR_RSP test bpl, byte ptr [rsp]
#define TEST_BPL_FROM_PTR_R8 test bpl, byte ptr [r8]
#define TEST_BPL_FROM_PTR_R9 test bpl, byte ptr [r9]
#define TEST_BPL_FROM_PTR_R10 test bpl, byte ptr [r10]
#define TEST_BPL_FROM_PTR_R11 test bpl, byte ptr [r11]
#define TEST_BPL_FROM_PTR_R12 test bpl, byte ptr [r12]
#define TEST_BPL_FROM_PTR_R13 test bpl, byte ptr [r13]
#define TEST_BPL_FROM_PTR_R14 test bpl, byte ptr [r14]
#define TEST_BPL_FROM_PTR_R15 test bpl, byte ptr [r15]
#define TEST_BPL_FROM_PTR_EAX test bpl, byte ptr [eax]
#define TEST_BPL_FROM_PTR_EBX test bpl, byte ptr [ebx]
#define TEST_BPL_FROM_PTR_ECX test bpl, byte ptr [ecx]
#define TEST_BPL_FROM_PTR_EDX test bpl, byte ptr [edx]
#define TEST_BPL_FROM_PTR_EDI test bpl, byte ptr [edi]
#define TEST_BPL_FROM_PTR_ESI test bpl, byte ptr [esi]
#define TEST_BPL_FROM_PTR_EBP test bpl, byte ptr [ebp]
#define TEST_BPL_FROM_PTR_ESP test bpl, byte ptr [esp]

#define TEST_SPL_FROM_PTR_RAX test spl, byte ptr [rax]
#define TEST_SPL_FROM_PTR_RBX test spl, byte ptr [rbx]
#define TEST_SPL_FROM_PTR_RCX test spl, byte ptr [rcx]
#define TEST_SPL_FROM_PTR_RDX test spl, byte ptr [rdx]
#define TEST_SPL_FROM_PTR_RDI test spl, byte ptr [rdi]
#define TEST_SPL_FROM_PTR_RSI test spl, byte ptr [rsi]
#define TEST_SPL_FROM_PTR_RBP test spl, byte ptr [rbp]
#define TEST_SPL_FROM_PTR_RSP test spl, byte ptr [rsp]
#define TEST_SPL_FROM_PTR_R8 test spl, byte ptr [r8]
#define TEST_SPL_FROM_PTR_R9 test spl, byte ptr [r9]
#define TEST_SPL_FROM_PTR_R10 test spl, byte ptr [r10]
#define TEST_SPL_FROM_PTR_R11 test spl, byte ptr [r11]
#define TEST_SPL_FROM_PTR_R12 test spl, byte ptr [r12]
#define TEST_SPL_FROM_PTR_R13 test spl, byte ptr [r13]
#define TEST_SPL_FROM_PTR_R14 test spl, byte ptr [r14]
#define TEST_SPL_FROM_PTR_R15 test spl, byte ptr [r15]
#define TEST_SPL_FROM_PTR_EAX test spl, byte ptr [eax]
#define TEST_SPL_FROM_PTR_EBX test spl, byte ptr [ebx]
#define TEST_SPL_FROM_PTR_ECX test spl, byte ptr [ecx]
#define TEST_SPL_FROM_PTR_EDX test spl, byte ptr [edx]
#define TEST_SPL_FROM_PTR_EDI test spl, byte ptr [edi]
#define TEST_SPL_FROM_PTR_ESI test spl, byte ptr [esi]
#define TEST_SPL_FROM_PTR_EBP test spl, byte ptr [ebp]
#define TEST_SPL_FROM_PTR_ESP test spl, byte ptr [esp]

#define TEST_R8B_FROM_PTR_RAX test r8b, byte ptr [rax]
#define TEST_R8B_FROM_PTR_RBX test r8b, byte ptr [rbx]
#define TEST_R8B_FROM_PTR_RCX test r8b, byte ptr [rcx]
#define TEST_R8B_FROM_PTR_RDX test r8b, byte ptr [rdx]
#define TEST_R8B_FROM_PTR_RDI test r8b, byte ptr [rdi]
#define TEST_R8B_FROM_PTR_RSI test r8b, byte ptr [rsi]
#define TEST_R8B_FROM_PTR_RBP test r8b, byte ptr [rbp]
#define TEST_R8B_FROM_PTR_RSP test r8b, byte ptr [rsp]
#define TEST_R8B_FROM_PTR_R8 test r8b, byte ptr [r8]
#define TEST_R8B_FROM_PTR_R9 test r8b, byte ptr [r9]
#define TEST_R8B_FROM_PTR_R10 test r8b, byte ptr [r10]
#define TEST_R8B_FROM_PTR_R11 test r8b, byte ptr [r11]
#define TEST_R8B_FROM_PTR_R12 test r8b, byte ptr [r12]
#define TEST_R8B_FROM_PTR_R13 test r8b, byte ptr [r13]
#define TEST_R8B_FROM_PTR_R14 test r8b, byte ptr [r14]
#define TEST_R8B_FROM_PTR_R15 test r8b, byte ptr [r15]
#define TEST_R8B_FROM_PTR_EAX test r8b, byte ptr [eax]
#define TEST_R8B_FROM_PTR_EBX test r8b, byte ptr [ebx]
#define TEST_R8B_FROM_PTR_ECX test r8b, byte ptr [ecx]
#define TEST_R8B_FROM_PTR_EDX test r8b, byte ptr [edx]
#define TEST_R8B_FROM_PTR_EDI test r8b, byte ptr [edi]
#define TEST_R8B_FROM_PTR_ESI test r8b, byte ptr [esi]
#define TEST_R8B_FROM_PTR_EBP test r8b, byte ptr [ebp]
#define TEST_R8B_FROM_PTR_ESP test r8b, byte ptr [esp]

#define TEST_R9B_FROM_PTR_RAX test r9b, byte ptr [rax]
#define TEST_R9B_FROM_PTR_RBX test r9b, byte ptr [rbx]
#define TEST_R9B_FROM_PTR_RCX test r9b, byte ptr [rcx]
#define TEST_R9B_FROM_PTR_RDX test r9b, byte ptr [rdx]
#define TEST_R9B_FROM_PTR_RDI test r9b, byte ptr [rdi]
#define TEST_R9B_FROM_PTR_RSI test r9b, byte ptr [rsi]
#define TEST_R9B_FROM_PTR_RBP test r9b, byte ptr [rbp]
#define TEST_R9B_FROM_PTR_RSP test r9b, byte ptr [rsp]
#define TEST_R9B_FROM_PTR_R8 test r9b, byte ptr [r8]
#define TEST_R9B_FROM_PTR_R9 test r9b, byte ptr [r9]
#define TEST_R9B_FROM_PTR_R10 test r9b, byte ptr [r10]
#define TEST_R9B_FROM_PTR_R11 test r9b, byte ptr [r11]
#define TEST_R9B_FROM_PTR_R12 test r9b, byte ptr [r12]
#define TEST_R9B_FROM_PTR_R13 test r9b, byte ptr [r13]
#define TEST_R9B_FROM_PTR_R14 test r9b, byte ptr [r14]
#define TEST_R9B_FROM_PTR_R15 test r9b, byte ptr [r15]
#define TEST_R9B_FROM_PTR_EAX test r9b, byte ptr [eax]
#define TEST_R9B_FROM_PTR_EBX test r9b, byte ptr [ebx]
#define TEST_R9B_FROM_PTR_ECX test r9b, byte ptr [ecx]
#define TEST_R9B_FROM_PTR_EDX test r9b, byte ptr [edx]
#define TEST_R9B_FROM_PTR_EDI test r9b, byte ptr [edi]
#define TEST_R9B_FROM_PTR_ESI test r9b, byte ptr [esi]
#define TEST_R9B_FROM_PTR_EBP test r9b, byte ptr [ebp]
#define TEST_R9B_FROM_PTR_ESP test r9b, byte ptr [esp]

#define TEST_R10B_FROM_PTR_RAX test r10b, byte ptr [rax]
#define TEST_R10B_FROM_PTR_RBX test r10b, byte ptr [rbx]
#define TEST_R10B_FROM_PTR_RCX test r10b, byte ptr [rcx]
#define TEST_R10B_FROM_PTR_RDX test r10b, byte ptr [rdx]
#define TEST_R10B_FROM_PTR_RDI test r10b, byte ptr [rdi]
#define TEST_R10B_FROM_PTR_RSI test r10b, byte ptr [rsi]
#define TEST_R10B_FROM_PTR_RBP test r10b, byte ptr [rbp]
#define TEST_R10B_FROM_PTR_RSP test r10b, byte ptr [rsp]
#define TEST_R10B_FROM_PTR_R8 test r10b, byte ptr [r8]
#define TEST_R10B_FROM_PTR_R9 test r10b, byte ptr [r9]
#define TEST_R10B_FROM_PTR_R10 test r10b, byte ptr [r10]
#define TEST_R10B_FROM_PTR_R11 test r10b, byte ptr [r11]
#define TEST_R10B_FROM_PTR_R12 test r10b, byte ptr [r12]
#define TEST_R10B_FROM_PTR_R13 test r10b, byte ptr [r13]
#define TEST_R10B_FROM_PTR_R14 test r10b, byte ptr [r14]
#define TEST_R10B_FROM_PTR_R15 test r10b, byte ptr [r15]
#define TEST_R10B_FROM_PTR_EAX test r10b, byte ptr [eax]
#define TEST_R10B_FROM_PTR_EBX test r10b, byte ptr [ebx]
#define TEST_R10B_FROM_PTR_ECX test r10b, byte ptr [ecx]
#define TEST_R10B_FROM_PTR_EDX test r10b, byte ptr [edx]
#define TEST_R10B_FROM_PTR_EDI test r10b, byte ptr [edi]
#define TEST_R10B_FROM_PTR_ESI test r10b, byte ptr [esi]
#define TEST_R10B_FROM_PTR_EBP test r10b, byte ptr [ebp]
#define TEST_R10B_FROM_PTR_ESP test r10b, byte ptr [esp]

#define TEST_R11B_FROM_PTR_RAX test r11b, byte ptr [rax]
#define TEST_R11B_FROM_PTR_RBX test r11b, byte ptr [rbx]
#define TEST_R11B_FROM_PTR_RCX test r11b, byte ptr [rcx]
#define TEST_R11B_FROM_PTR_RDX test r11b, byte ptr [rdx]
#define TEST_R11B_FROM_PTR_RDI test r11b, byte ptr [rdi]
#define TEST_R11B_FROM_PTR_RSI test r11b, byte ptr [rsi]
#define TEST_R11B_FROM_PTR_RBP test r11b, byte ptr [rbp]
#define TEST_R11B_FROM_PTR_RSP test r11b, byte ptr [rsp]
#define TEST_R11B_FROM_PTR_R8 test r11b, byte ptr [r8]
#define TEST_R11B_FROM_PTR_R9 test r11b, byte ptr [r9]
#define TEST_R11B_FROM_PTR_R10 test r11b, byte ptr [r10]
#define TEST_R11B_FROM_PTR_R11 test r11b, byte ptr [r11]
#define TEST_R11B_FROM_PTR_R12 test r11b, byte ptr [r12]
#define TEST_R11B_FROM_PTR_R13 test r11b, byte ptr [r13]
#define TEST_R11B_FROM_PTR_R14 test r11b, byte ptr [r14]
#define TEST_R11B_FROM_PTR_R15 test r11b, byte ptr [r15]
#define TEST_R11B_FROM_PTR_EAX test r11b, byte ptr [eax]
#define TEST_R11B_FROM_PTR_EBX test r11b, byte ptr [ebx]
#define TEST_R11B_FROM_PTR_ECX test r11b, byte ptr [ecx]
#define TEST_R11B_FROM_PTR_EDX test r11b, byte ptr [edx]
#define TEST_R11B_FROM_PTR_EDI test r11b, byte ptr [edi]
#define TEST_R11B_FROM_PTR_ESI test r11b, byte ptr [esi]
#define TEST_R11B_FROM_PTR_EBP test r11b, byte ptr [ebp]
#define TEST_R11B_FROM_PTR_ESP test r11b, byte ptr [esp]

#define TEST_R12B_FROM_PTR_RAX test r12b, byte ptr [rax]
#define TEST_R12B_FROM_PTR_RBX test r12b, byte ptr [rbx]
#define TEST_R12B_FROM_PTR_RCX test r12b, byte ptr [rcx]
#define TEST_R12B_FROM_PTR_RDX test r12b, byte ptr [rdx]
#define TEST_R12B_FROM_PTR_RDI test r12b, byte ptr [rdi]
#define TEST_R12B_FROM_PTR_RSI test r12b, byte ptr [rsi]
#define TEST_R12B_FROM_PTR_RBP test r12b, byte ptr [rbp]
#define TEST_R12B_FROM_PTR_RSP test r12b, byte ptr [rsp]
#define TEST_R12B_FROM_PTR_R8 test r12b, byte ptr [r8]
#define TEST_R12B_FROM_PTR_R9 test r12b, byte ptr [r9]
#define TEST_R12B_FROM_PTR_R10 test r12b, byte ptr [r10]
#define TEST_R12B_FROM_PTR_R11 test r12b, byte ptr [r11]
#define TEST_R12B_FROM_PTR_R12 test r12b, byte ptr [r12]
#define TEST_R12B_FROM_PTR_R13 test r12b, byte ptr [r13]
#define TEST_R12B_FROM_PTR_R14 test r12b, byte ptr [r14]
#define TEST_R12B_FROM_PTR_R15 test r12b, byte ptr [r15]
#define TEST_R12B_FROM_PTR_EAX test r12b, byte ptr [eax]
#define TEST_R12B_FROM_PTR_EBX test r12b, byte ptr [ebx]
#define TEST_R12B_FROM_PTR_ECX test r12b, byte ptr [ecx]
#define TEST_R12B_FROM_PTR_EDX test r12b, byte ptr [edx]
#define TEST_R12B_FROM_PTR_EDI test r12b, byte ptr [edi]
#define TEST_R12B_FROM_PTR_ESI test r12b, byte ptr [esi]
#define TEST_R12B_FROM_PTR_EBP test r12b, byte ptr [ebp]
#define TEST_R12B_FROM_PTR_ESP test r12b, byte ptr [esp]

#define TEST_R13B_FROM_PTR_RAX test r13b, byte ptr [rax]
#define TEST_R13B_FROM_PTR_RBX test r13b, byte ptr [rbx]
#define TEST_R13B_FROM_PTR_RCX test r13b, byte ptr [rcx]
#define TEST_R13B_FROM_PTR_RDX test r13b, byte ptr [rdx]
#define TEST_R13B_FROM_PTR_RDI test r13b, byte ptr [rdi]
#define TEST_R13B_FROM_PTR_RSI test r13b, byte ptr [rsi]
#define TEST_R13B_FROM_PTR_RBP test r13b, byte ptr [rbp]
#define TEST_R13B_FROM_PTR_RSP test r13b, byte ptr [rsp]
#define TEST_R13B_FROM_PTR_R8 test r13b, byte ptr [r8]
#define TEST_R13B_FROM_PTR_R9 test r13b, byte ptr [r9]
#define TEST_R13B_FROM_PTR_R10 test r13b, byte ptr [r10]
#define TEST_R13B_FROM_PTR_R11 test r13b, byte ptr [r11]
#define TEST_R13B_FROM_PTR_R12 test r13b, byte ptr [r12]
#define TEST_R13B_FROM_PTR_R13 test r13b, byte ptr [r13]
#define TEST_R13B_FROM_PTR_R14 test r13b, byte ptr [r14]
#define TEST_R13B_FROM_PTR_R15 test r13b, byte ptr [r15]
#define TEST_R13B_FROM_PTR_EAX test r13b, byte ptr [eax]
#define TEST_R13B_FROM_PTR_EBX test r13b, byte ptr [ebx]
#define TEST_R13B_FROM_PTR_ECX test r13b, byte ptr [ecx]
#define TEST_R13B_FROM_PTR_EDX test r13b, byte ptr [edx]
#define TEST_R13B_FROM_PTR_EDI test r13b, byte ptr [edi]
#define TEST_R13B_FROM_PTR_ESI test r13b, byte ptr [esi]
#define TEST_R13B_FROM_PTR_EBP test r13b, byte ptr [ebp]
#define TEST_R13B_FROM_PTR_ESP test r13b, byte ptr [esp]

#define TEST_R14B_FROM_PTR_RAX test r14b, byte ptr [rax]
#define TEST_R14B_FROM_PTR_RBX test r14b, byte ptr [rbx]
#define TEST_R14B_FROM_PTR_RCX test r14b, byte ptr [rcx]
#define TEST_R14B_FROM_PTR_RDX test r14b, byte ptr [rdx]
#define TEST_R14B_FROM_PTR_RDI test r14b, byte ptr [rdi]
#define TEST_R14B_FROM_PTR_RSI test r14b, byte ptr [rsi]
#define TEST_R14B_FROM_PTR_RBP test r14b, byte ptr [rbp]
#define TEST_R14B_FROM_PTR_RSP test r14b, byte ptr [rsp]
#define TEST_R14B_FROM_PTR_R8 test r14b, byte ptr [r8]
#define TEST_R14B_FROM_PTR_R9 test r14b, byte ptr [r9]
#define TEST_R14B_FROM_PTR_R10 test r14b, byte ptr [r10]
#define TEST_R14B_FROM_PTR_R11 test r14b, byte ptr [r11]
#define TEST_R14B_FROM_PTR_R12 test r14b, byte ptr [r12]
#define TEST_R14B_FROM_PTR_R13 test r14b, byte ptr [r13]
#define TEST_R14B_FROM_PTR_R14 test r14b, byte ptr [r14]
#define TEST_R14B_FROM_PTR_R15 test r14b, byte ptr [r15]
#define TEST_R14B_FROM_PTR_EAX test r14b, byte ptr [eax]
#define TEST_R14B_FROM_PTR_EBX test r14b, byte ptr [ebx]
#define TEST_R14B_FROM_PTR_ECX test r14b, byte ptr [ecx]
#define TEST_R14B_FROM_PTR_EDX test r14b, byte ptr [edx]
#define TEST_R14B_FROM_PTR_EDI test r14b, byte ptr [edi]
#define TEST_R14B_FROM_PTR_ESI test r14b, byte ptr [esi]
#define TEST_R14B_FROM_PTR_EBP test r14b, byte ptr [ebp]
#define TEST_R14B_FROM_PTR_ESP test r14b, byte ptr [esp]

#define TEST_R15B_FROM_PTR_RAX test r15b, byte ptr [rax]
#define TEST_R15B_FROM_PTR_RBX test r15b, byte ptr [rbx]
#define TEST_R15B_FROM_PTR_RCX test r15b, byte ptr [rcx]
#define TEST_R15B_FROM_PTR_RDX test r15b, byte ptr [rdx]
#define TEST_R15B_FROM_PTR_RDI test r15b, byte ptr [rdi]
#define TEST_R15B_FROM_PTR_RSI test r15b, byte ptr [rsi]
#define TEST_R15B_FROM_PTR_RBP test r15b, byte ptr [rbp]
#define TEST_R15B_FROM_PTR_RSP test r15b, byte ptr [rsp]
#define TEST_R15B_FROM_PTR_R8 test r15b, byte ptr [r8]
#define TEST_R15B_FROM_PTR_R9 test r15b, byte ptr [r9]
#define TEST_R15B_FROM_PTR_R10 test r15b, byte ptr [r10]
#define TEST_R15B_FROM_PTR_R11 test r15b, byte ptr [r11]
#define TEST_R15B_FROM_PTR_R12 test r15b, byte ptr [r12]
#define TEST_R15B_FROM_PTR_R13 test r15b, byte ptr [r13]
#define TEST_R15B_FROM_PTR_R14 test r15b, byte ptr [r14]
#define TEST_R15B_FROM_PTR_R15 test r15b, byte ptr [r15]
#define TEST_R15B_FROM_PTR_EAX test r15b, byte ptr [eax]
#define TEST_R15B_FROM_PTR_EBX test r15b, byte ptr [ebx]
#define TEST_R15B_FROM_PTR_ECX test r15b, byte ptr [ecx]
#define TEST_R15B_FROM_PTR_EDX test r15b, byte ptr [edx]
#define TEST_R15B_FROM_PTR_EDI test r15b, byte ptr [edi]
#define TEST_R15B_FROM_PTR_ESI test r15b, byte ptr [esi]
#define TEST_R15B_FROM_PTR_EBP test r15b, byte ptr [ebp]
#define TEST_R15B_FROM_PTR_ESP test r15b, byte ptr [esp]

#define TEST_AL_TO_PTR_RAX test byte ptr [rax], al
#define TEST_AL_TO_PTR_RBX test byte ptr [rbx], al
#define TEST_AL_TO_PTR_RCX test byte ptr [rcx], al
#define TEST_AL_TO_PTR_RDX test byte ptr [rdx], al
#define TEST_AL_TO_PTR_RDI test byte ptr [rdi], al
#define TEST_AL_TO_PTR_RSI test byte ptr [rsi], al
#define TEST_AL_TO_PTR_RBP test byte ptr [rbp], al
#define TEST_AL_TO_PTR_RSP test byte ptr [rsp], al
#define TEST_AL_TO_PTR_R8 test byte ptr [r8], al
#define TEST_AL_TO_PTR_R9 test byte ptr [r9], al
#define TEST_AL_TO_PTR_R10 test byte ptr [r10], al
#define TEST_AL_TO_PTR_R11 test byte ptr [r11], al
#define TEST_AL_TO_PTR_R12 test byte ptr [r12], al
#define TEST_AL_TO_PTR_R13 test byte ptr [r13], al
#define TEST_AL_TO_PTR_R14 test byte ptr [r14], al
#define TEST_AL_TO_PTR_R15 test byte ptr [r15], al
#define TEST_AL_TO_PTR_EAX test byte ptr [eax], al
#define TEST_AL_TO_PTR_EBX test byte ptr [ebx], al
#define TEST_AL_TO_PTR_ECX test byte ptr [ecx], al
#define TEST_AL_TO_PTR_EDX test byte ptr [edx], al
#define TEST_AL_TO_PTR_EDI test byte ptr [edi], al
#define TEST_AL_TO_PTR_ESI test byte ptr [esi], al
#define TEST_AL_TO_PTR_EBP test byte ptr [ebp], al
#define TEST_AL_TO_PTR_ESP test byte ptr [esp], al

#define TEST_BL_TO_PTR_RAX test byte ptr [rax], bl
#define TEST_BL_TO_PTR_RBX test byte ptr [rbx], bl
#define TEST_BL_TO_PTR_RCX test byte ptr [rcx], bl
#define TEST_BL_TO_PTR_RDX test byte ptr [rdx], bl
#define TEST_BL_TO_PTR_RDI test byte ptr [rdi], bl
#define TEST_BL_TO_PTR_RSI test byte ptr [rsi], bl
#define TEST_BL_TO_PTR_RBP test byte ptr [rbp], bl
#define TEST_BL_TO_PTR_RSP test byte ptr [rsp], bl
#define TEST_BL_TO_PTR_R8 test byte ptr [r8], bl
#define TEST_BL_TO_PTR_R9 test byte ptr [r9], bl
#define TEST_BL_TO_PTR_R10 test byte ptr [r10], bl
#define TEST_BL_TO_PTR_R11 test byte ptr [r11], bl
#define TEST_BL_TO_PTR_R12 test byte ptr [r12], bl
#define TEST_BL_TO_PTR_R13 test byte ptr [r13], bl
#define TEST_BL_TO_PTR_R14 test byte ptr [r14], bl
#define TEST_BL_TO_PTR_R15 test byte ptr [r15], bl
#define TEST_BL_TO_PTR_EAX test byte ptr [eax], bl
#define TEST_BL_TO_PTR_EBX test byte ptr [ebx], bl
#define TEST_BL_TO_PTR_ECX test byte ptr [ecx], bl
#define TEST_BL_TO_PTR_EDX test byte ptr [edx], bl
#define TEST_BL_TO_PTR_EDI test byte ptr [edi], bl
#define TEST_BL_TO_PTR_ESI test byte ptr [esi], bl
#define TEST_BL_TO_PTR_EBP test byte ptr [ebp], bl
#define TEST_BL_TO_PTR_ESP test byte ptr [esp], bl

#define TEST_CL_TO_PTR_RAX test byte ptr [rax], cl
#define TEST_CL_TO_PTR_RBX test byte ptr [rbx], cl
#define TEST_CL_TO_PTR_RCX test byte ptr [rcx], cl
#define TEST_CL_TO_PTR_RDX test byte ptr [rdx], cl
#define TEST_CL_TO_PTR_RDI test byte ptr [rdi], cl
#define TEST_CL_TO_PTR_RSI test byte ptr [rsi], cl
#define TEST_CL_TO_PTR_RBP test byte ptr [rbp], cl
#define TEST_CL_TO_PTR_RSP test byte ptr [rsp], cl
#define TEST_CL_TO_PTR_R8 test byte ptr [r8], cl
#define TEST_CL_TO_PTR_R9 test byte ptr [r9], cl
#define TEST_CL_TO_PTR_R10 test byte ptr [r10], cl
#define TEST_CL_TO_PTR_R11 test byte ptr [r11], cl
#define TEST_CL_TO_PTR_R12 test byte ptr [r12], cl
#define TEST_CL_TO_PTR_R13 test byte ptr [r13], cl
#define TEST_CL_TO_PTR_R14 test byte ptr [r14], cl
#define TEST_CL_TO_PTR_R15 test byte ptr [r15], cl
#define TEST_CL_TO_PTR_EAX test byte ptr [eax], cl
#define TEST_CL_TO_PTR_EBX test byte ptr [ebx], cl
#define TEST_CL_TO_PTR_ECX test byte ptr [ecx], cl
#define TEST_CL_TO_PTR_EDX test byte ptr [edx], cl
#define TEST_CL_TO_PTR_EDI test byte ptr [edi], cl
#define TEST_CL_TO_PTR_ESI test byte ptr [esi], cl
#define TEST_CL_TO_PTR_EBP test byte ptr [ebp], cl
#define TEST_CL_TO_PTR_ESP test byte ptr [esp], cl

#define TEST_DL_TO_PTR_RAX test byte ptr [rax], dl
#define TEST_DL_TO_PTR_RBX test byte ptr [rbx], dl
#define TEST_DL_TO_PTR_RCX test byte ptr [rcx], dl
#define TEST_DL_TO_PTR_RDX test byte ptr [rdx], dl
#define TEST_DL_TO_PTR_RDI test byte ptr [rdi], dl
#define TEST_DL_TO_PTR_RSI test byte ptr [rsi], dl
#define TEST_DL_TO_PTR_RBP test byte ptr [rbp], dl
#define TEST_DL_TO_PTR_RSP test byte ptr [rsp], dl
#define TEST_DL_TO_PTR_R8 test byte ptr [r8], dl
#define TEST_DL_TO_PTR_R9 test byte ptr [r9], dl
#define TEST_DL_TO_PTR_R10 test byte ptr [r10], dl
#define TEST_DL_TO_PTR_R11 test byte ptr [r11], dl
#define TEST_DL_TO_PTR_R12 test byte ptr [r12], dl
#define TEST_DL_TO_PTR_R13 test byte ptr [r13], dl
#define TEST_DL_TO_PTR_R14 test byte ptr [r14], dl
#define TEST_DL_TO_PTR_R15 test byte ptr [r15], dl
#define TEST_DL_TO_PTR_EAX test byte ptr [eax], dl
#define TEST_DL_TO_PTR_EBX test byte ptr [ebx], dl
#define TEST_DL_TO_PTR_ECX test byte ptr [ecx], dl
#define TEST_DL_TO_PTR_EDX test byte ptr [edx], dl
#define TEST_DL_TO_PTR_EDI test byte ptr [edi], dl
#define TEST_DL_TO_PTR_ESI test byte ptr [esi], dl
#define TEST_DL_TO_PTR_EBP test byte ptr [ebp], dl
#define TEST_DL_TO_PTR_ESP test byte ptr [esp], dl

#define TEST_DIL_TO_PTR_RAX test byte ptr [rax], dil
#define TEST_DIL_TO_PTR_RBX test byte ptr [rbx], dil
#define TEST_DIL_TO_PTR_RCX test byte ptr [rcx], dil
#define TEST_DIL_TO_PTR_RDX test byte ptr [rdx], dil
#define TEST_DIL_TO_PTR_RDI test byte ptr [rdi], dil
#define TEST_DIL_TO_PTR_RSI test byte ptr [rsi], dil
#define TEST_DIL_TO_PTR_RBP test byte ptr [rbp], dil
#define TEST_DIL_TO_PTR_RSP test byte ptr [rsp], dil
#define TEST_DIL_TO_PTR_R8 test byte ptr [r8], dil
#define TEST_DIL_TO_PTR_R9 test byte ptr [r9], dil
#define TEST_DIL_TO_PTR_R10 test byte ptr [r10], dil
#define TEST_DIL_TO_PTR_R11 test byte ptr [r11], dil
#define TEST_DIL_TO_PTR_R12 test byte ptr [r12], dil
#define TEST_DIL_TO_PTR_R13 test byte ptr [r13], dil
#define TEST_DIL_TO_PTR_R14 test byte ptr [r14], dil
#define TEST_DIL_TO_PTR_R15 test byte ptr [r15], dil
#define TEST_DIL_TO_PTR_EAX test byte ptr [eax], dil
#define TEST_DIL_TO_PTR_EBX test byte ptr [ebx], dil
#define TEST_DIL_TO_PTR_ECX test byte ptr [ecx], dil
#define TEST_DIL_TO_PTR_EDX test byte ptr [edx], dil
#define TEST_DIL_TO_PTR_EDI test byte ptr [edi], dil
#define TEST_DIL_TO_PTR_ESI test byte ptr [esi], dil
#define TEST_DIL_TO_PTR_EBP test byte ptr [ebp], dil
#define TEST_DIL_TO_PTR_ESP test byte ptr [esp], dil

#define TEST_SIL_TO_PTR_RAX test byte ptr [rax], sil
#define TEST_SIL_TO_PTR_RBX test byte ptr [rbx], sil
#define TEST_SIL_TO_PTR_RCX test byte ptr [rcx], sil
#define TEST_SIL_TO_PTR_RDX test byte ptr [rdx], sil
#define TEST_SIL_TO_PTR_RDI test byte ptr [rdi], sil
#define TEST_SIL_TO_PTR_RSI test byte ptr [rsi], sil
#define TEST_SIL_TO_PTR_RBP test byte ptr [rbp], sil
#define TEST_SIL_TO_PTR_RSP test byte ptr [rsp], sil
#define TEST_SIL_TO_PTR_R8 test byte ptr [r8], sil
#define TEST_SIL_TO_PTR_R9 test byte ptr [r9], sil
#define TEST_SIL_TO_PTR_R10 test byte ptr [r10], sil
#define TEST_SIL_TO_PTR_R11 test byte ptr [r11], sil
#define TEST_SIL_TO_PTR_R12 test byte ptr [r12], sil
#define TEST_SIL_TO_PTR_R13 test byte ptr [r13], sil
#define TEST_SIL_TO_PTR_R14 test byte ptr [r14], sil
#define TEST_SIL_TO_PTR_R15 test byte ptr [r15], sil
#define TEST_SIL_TO_PTR_EAX test byte ptr [eax], sil
#define TEST_SIL_TO_PTR_EBX test byte ptr [ebx], sil
#define TEST_SIL_TO_PTR_ECX test byte ptr [ecx], sil
#define TEST_SIL_TO_PTR_EDX test byte ptr [edx], sil
#define TEST_SIL_TO_PTR_EDI test byte ptr [edi], sil
#define TEST_SIL_TO_PTR_ESI test byte ptr [esi], sil
#define TEST_SIL_TO_PTR_EBP test byte ptr [ebp], sil
#define TEST_SIL_TO_PTR_ESP test byte ptr [esp], sil

#define TEST_BPL_TO_PTR_RAX test byte ptr [rax], bpl
#define TEST_BPL_TO_PTR_RBX test byte ptr [rbx], bpl
#define TEST_BPL_TO_PTR_RCX test byte ptr [rcx], bpl
#define TEST_BPL_TO_PTR_RDX test byte ptr [rdx], bpl
#define TEST_BPL_TO_PTR_RDI test byte ptr [rdi], bpl
#define TEST_BPL_TO_PTR_RSI test byte ptr [rsi], bpl
#define TEST_BPL_TO_PTR_RBP test byte ptr [rbp], bpl
#define TEST_BPL_TO_PTR_RSP test byte ptr [rsp], bpl
#define TEST_BPL_TO_PTR_R8 test byte ptr [r8], bpl
#define TEST_BPL_TO_PTR_R9 test byte ptr [r9], bpl
#define TEST_BPL_TO_PTR_R10 test byte ptr [r10], bpl
#define TEST_BPL_TO_PTR_R11 test byte ptr [r11], bpl
#define TEST_BPL_TO_PTR_R12 test byte ptr [r12], bpl
#define TEST_BPL_TO_PTR_R13 test byte ptr [r13], bpl
#define TEST_BPL_TO_PTR_R14 test byte ptr [r14], bpl
#define TEST_BPL_TO_PTR_R15 test byte ptr [r15], bpl
#define TEST_BPL_TO_PTR_EAX test byte ptr [eax], bpl
#define TEST_BPL_TO_PTR_EBX test byte ptr [ebx], bpl
#define TEST_BPL_TO_PTR_ECX test byte ptr [ecx], bpl
#define TEST_BPL_TO_PTR_EDX test byte ptr [edx], bpl
#define TEST_BPL_TO_PTR_EDI test byte ptr [edi], bpl
#define TEST_BPL_TO_PTR_ESI test byte ptr [esi], bpl
#define TEST_BPL_TO_PTR_EBP test byte ptr [ebp], bpl
#define TEST_BPL_TO_PTR_ESP test byte ptr [esp], bpl

#define TEST_SPL_TO_PTR_RAX test byte ptr [rax], spl
#define TEST_SPL_TO_PTR_RBX test byte ptr [rbx], spl
#define TEST_SPL_TO_PTR_RCX test byte ptr [rcx], spl
#define TEST_SPL_TO_PTR_RDX test byte ptr [rdx], spl
#define TEST_SPL_TO_PTR_RDI test byte ptr [rdi], spl
#define TEST_SPL_TO_PTR_RSI test byte ptr [rsi], spl
#define TEST_SPL_TO_PTR_RBP test byte ptr [rbp], spl
#define TEST_SPL_TO_PTR_RSP test byte ptr [rsp], spl
#define TEST_SPL_TO_PTR_R8 test byte ptr [r8], spl
#define TEST_SPL_TO_PTR_R9 test byte ptr [r9], spl
#define TEST_SPL_TO_PTR_R10 test byte ptr [r10], spl
#define TEST_SPL_TO_PTR_R11 test byte ptr [r11], spl
#define TEST_SPL_TO_PTR_R12 test byte ptr [r12], spl
#define TEST_SPL_TO_PTR_R13 test byte ptr [r13], spl
#define TEST_SPL_TO_PTR_R14 test byte ptr [r14], spl
#define TEST_SPL_TO_PTR_R15 test byte ptr [r15], spl
#define TEST_SPL_TO_PTR_EAX test byte ptr [eax], spl
#define TEST_SPL_TO_PTR_EBX test byte ptr [ebx], spl
#define TEST_SPL_TO_PTR_ECX test byte ptr [ecx], spl
#define TEST_SPL_TO_PTR_EDX test byte ptr [edx], spl
#define TEST_SPL_TO_PTR_EDI test byte ptr [edi], spl
#define TEST_SPL_TO_PTR_ESI test byte ptr [esi], spl
#define TEST_SPL_TO_PTR_EBP test byte ptr [ebp], spl
#define TEST_SPL_TO_PTR_ESP test byte ptr [esp], spl

#define TEST_R8B_TO_PTR_RAX test byte ptr [rax], r8b
#define TEST_R8B_TO_PTR_RBX test byte ptr [rbx], r8b
#define TEST_R8B_TO_PTR_RCX test byte ptr [rcx], r8b
#define TEST_R8B_TO_PTR_RDX test byte ptr [rdx], r8b
#define TEST_R8B_TO_PTR_RDI test byte ptr [rdi], r8b
#define TEST_R8B_TO_PTR_RSI test byte ptr [rsi], r8b
#define TEST_R8B_TO_PTR_RBP test byte ptr [rbp], r8b
#define TEST_R8B_TO_PTR_RSP test byte ptr [rsp], r8b
#define TEST_R8B_TO_PTR_R8 test byte ptr [r8], r8b
#define TEST_R8B_TO_PTR_R9 test byte ptr [r9], r8b
#define TEST_R8B_TO_PTR_R10 test byte ptr [r10], r8b
#define TEST_R8B_TO_PTR_R11 test byte ptr [r11], r8b
#define TEST_R8B_TO_PTR_R12 test byte ptr [r12], r8b
#define TEST_R8B_TO_PTR_R13 test byte ptr [r13], r8b
#define TEST_R8B_TO_PTR_R14 test byte ptr [r14], r8b
#define TEST_R8B_TO_PTR_R15 test byte ptr [r15], r8b
#define TEST_R8B_TO_PTR_EAX test byte ptr [eax], r8b
#define TEST_R8B_TO_PTR_EBX test byte ptr [ebx], r8b
#define TEST_R8B_TO_PTR_ECX test byte ptr [ecx], r8b
#define TEST_R8B_TO_PTR_EDX test byte ptr [edx], r8b
#define TEST_R8B_TO_PTR_EDI test byte ptr [edi], r8b
#define TEST_R8B_TO_PTR_ESI test byte ptr [esi], r8b
#define TEST_R8B_TO_PTR_EBP test byte ptr [ebp], r8b
#define TEST_R8B_TO_PTR_ESP test byte ptr [esp], r8b

#define TEST_R9B_TO_PTR_RAX test byte ptr [rax], r9b
#define TEST_R9B_TO_PTR_RBX test byte ptr [rbx], r9b
#define TEST_R9B_TO_PTR_RCX test byte ptr [rcx], r9b
#define TEST_R9B_TO_PTR_RDX test byte ptr [rdx], r9b
#define TEST_R9B_TO_PTR_RDI test byte ptr [rdi], r9b
#define TEST_R9B_TO_PTR_RSI test byte ptr [rsi], r9b
#define TEST_R9B_TO_PTR_RBP test byte ptr [rbp], r9b
#define TEST_R9B_TO_PTR_RSP test byte ptr [rsp], r9b
#define TEST_R9B_TO_PTR_R8 test byte ptr [r8], r9b
#define TEST_R9B_TO_PTR_R9 test byte ptr [r9], r9b
#define TEST_R9B_TO_PTR_R10 test byte ptr [r10], r9b
#define TEST_R9B_TO_PTR_R11 test byte ptr [r11], r9b
#define TEST_R9B_TO_PTR_R12 test byte ptr [r12], r9b
#define TEST_R9B_TO_PTR_R13 test byte ptr [r13], r9b
#define TEST_R9B_TO_PTR_R14 test byte ptr [r14], r9b
#define TEST_R9B_TO_PTR_R15 test byte ptr [r15], r9b
#define TEST_R9B_TO_PTR_EAX test byte ptr [eax], r9b
#define TEST_R9B_TO_PTR_EBX test byte ptr [ebx], r9b
#define TEST_R9B_TO_PTR_ECX test byte ptr [ecx], r9b
#define TEST_R9B_TO_PTR_EDX test byte ptr [edx], r9b
#define TEST_R9B_TO_PTR_EDI test byte ptr [edi], r9b
#define TEST_R9B_TO_PTR_ESI test byte ptr [esi], r9b
#define TEST_R9B_TO_PTR_EBP test byte ptr [ebp], r9b
#define TEST_R9B_TO_PTR_ESP test byte ptr [esp], r9b

#define TEST_R10B_TO_PTR_RAX test byte ptr [rax], r10b
#define TEST_R10B_TO_PTR_RBX test byte ptr [rbx], r10b
#define TEST_R10B_TO_PTR_RCX test byte ptr [rcx], r10b
#define TEST_R10B_TO_PTR_RDX test byte ptr [rdx], r10b
#define TEST_R10B_TO_PTR_RDI test byte ptr [rdi], r10b
#define TEST_R10B_TO_PTR_RSI test byte ptr [rsi], r10b
#define TEST_R10B_TO_PTR_RBP test byte ptr [rbp], r10b
#define TEST_R10B_TO_PTR_RSP test byte ptr [rsp], r10b
#define TEST_R10B_TO_PTR_R8 test byte ptr [r8], r10b
#define TEST_R10B_TO_PTR_R9 test byte ptr [r9], r10b
#define TEST_R10B_TO_PTR_R10 test byte ptr [r10], r10b
#define TEST_R10B_TO_PTR_R11 test byte ptr [r11], r10b
#define TEST_R10B_TO_PTR_R12 test byte ptr [r12], r10b
#define TEST_R10B_TO_PTR_R13 test byte ptr [r13], r10b
#define TEST_R10B_TO_PTR_R14 test byte ptr [r14], r10b
#define TEST_R10B_TO_PTR_R15 test byte ptr [r15], r10b
#define TEST_R10B_TO_PTR_EAX test byte ptr [eax], r10b
#define TEST_R10B_TO_PTR_EBX test byte ptr [ebx], r10b
#define TEST_R10B_TO_PTR_ECX test byte ptr [ecx], r10b
#define TEST_R10B_TO_PTR_EDX test byte ptr [edx], r10b
#define TEST_R10B_TO_PTR_EDI test byte ptr [edi], r10b
#define TEST_R10B_TO_PTR_ESI test byte ptr [esi], r10b
#define TEST_R10B_TO_PTR_EBP test byte ptr [ebp], r10b
#define TEST_R10B_TO_PTR_ESP test byte ptr [esp], r10b

#define TEST_R11B_TO_PTR_RAX test byte ptr [rax], r11b
#define TEST_R11B_TO_PTR_RBX test byte ptr [rbx], r11b
#define TEST_R11B_TO_PTR_RCX test byte ptr [rcx], r11b
#define TEST_R11B_TO_PTR_RDX test byte ptr [rdx], r11b
#define TEST_R11B_TO_PTR_RDI test byte ptr [rdi], r11b
#define TEST_R11B_TO_PTR_RSI test byte ptr [rsi], r11b
#define TEST_R11B_TO_PTR_RBP test byte ptr [rbp], r11b
#define TEST_R11B_TO_PTR_RSP test byte ptr [rsp], r11b
#define TEST_R11B_TO_PTR_R8 test byte ptr [r8], r11b
#define TEST_R11B_TO_PTR_R9 test byte ptr [r9], r11b
#define TEST_R11B_TO_PTR_R10 test byte ptr [r10], r11b
#define TEST_R11B_TO_PTR_R11 test byte ptr [r11], r11b
#define TEST_R11B_TO_PTR_R12 test byte ptr [r12], r11b
#define TEST_R11B_TO_PTR_R13 test byte ptr [r13], r11b
#define TEST_R11B_TO_PTR_R14 test byte ptr [r14], r11b
#define TEST_R11B_TO_PTR_R15 test byte ptr [r15], r11b
#define TEST_R11B_TO_PTR_EAX test byte ptr [eax], r11b
#define TEST_R11B_TO_PTR_EBX test byte ptr [ebx], r11b
#define TEST_R11B_TO_PTR_ECX test byte ptr [ecx], r11b
#define TEST_R11B_TO_PTR_EDX test byte ptr [edx], r11b
#define TEST_R11B_TO_PTR_EDI test byte ptr [edi], r11b
#define TEST_R11B_TO_PTR_ESI test byte ptr [esi], r11b
#define TEST_R11B_TO_PTR_EBP test byte ptr [ebp], r11b
#define TEST_R11B_TO_PTR_ESP test byte ptr [esp], r11b

#define TEST_R12B_TO_PTR_RAX test byte ptr [rax], r12b
#define TEST_R12B_TO_PTR_RBX test byte ptr [rbx], r12b
#define TEST_R12B_TO_PTR_RCX test byte ptr [rcx], r12b
#define TEST_R12B_TO_PTR_RDX test byte ptr [rdx], r12b
#define TEST_R12B_TO_PTR_RDI test byte ptr [rdi], r12b
#define TEST_R12B_TO_PTR_RSI test byte ptr [rsi], r12b
#define TEST_R12B_TO_PTR_RBP test byte ptr [rbp], r12b
#define TEST_R12B_TO_PTR_RSP test byte ptr [rsp], r12b
#define TEST_R12B_TO_PTR_R8 test byte ptr [r8], r12b
#define TEST_R12B_TO_PTR_R9 test byte ptr [r9], r12b
#define TEST_R12B_TO_PTR_R10 test byte ptr [r10], r12b
#define TEST_R12B_TO_PTR_R11 test byte ptr [r11], r12b
#define TEST_R12B_TO_PTR_R12 test byte ptr [r12], r12b
#define TEST_R12B_TO_PTR_R13 test byte ptr [r13], r12b
#define TEST_R12B_TO_PTR_R14 test byte ptr [r14], r12b
#define TEST_R12B_TO_PTR_R15 test byte ptr [r15], r12b
#define TEST_R12B_TO_PTR_EAX test byte ptr [eax], r12b
#define TEST_R12B_TO_PTR_EBX test byte ptr [ebx], r12b
#define TEST_R12B_TO_PTR_ECX test byte ptr [ecx], r12b
#define TEST_R12B_TO_PTR_EDX test byte ptr [edx], r12b
#define TEST_R12B_TO_PTR_EDI test byte ptr [edi], r12b
#define TEST_R12B_TO_PTR_ESI test byte ptr [esi], r12b
#define TEST_R12B_TO_PTR_EBP test byte ptr [ebp], r12b
#define TEST_R12B_TO_PTR_ESP test byte ptr [esp], r12b

#define TEST_R13B_TO_PTR_RAX test byte ptr [rax], r13b
#define TEST_R13B_TO_PTR_RBX test byte ptr [rbx], r13b
#define TEST_R13B_TO_PTR_RCX test byte ptr [rcx], r13b
#define TEST_R13B_TO_PTR_RDX test byte ptr [rdx], r13b
#define TEST_R13B_TO_PTR_RDI test byte ptr [rdi], r13b
#define TEST_R13B_TO_PTR_RSI test byte ptr [rsi], r13b
#define TEST_R13B_TO_PTR_RBP test byte ptr [rbp], r13b
#define TEST_R13B_TO_PTR_RSP test byte ptr [rsp], r13b
#define TEST_R13B_TO_PTR_R8 test byte ptr [r8], r13b
#define TEST_R13B_TO_PTR_R9 test byte ptr [r9], r13b
#define TEST_R13B_TO_PTR_R10 test byte ptr [r10], r13b
#define TEST_R13B_TO_PTR_R11 test byte ptr [r11], r13b
#define TEST_R13B_TO_PTR_R12 test byte ptr [r12], r13b
#define TEST_R13B_TO_PTR_R13 test byte ptr [r13], r13b
#define TEST_R13B_TO_PTR_R14 test byte ptr [r14], r13b
#define TEST_R13B_TO_PTR_R15 test byte ptr [r15], r13b
#define TEST_R13B_TO_PTR_EAX test byte ptr [eax], r13b
#define TEST_R13B_TO_PTR_EBX test byte ptr [ebx], r13b
#define TEST_R13B_TO_PTR_ECX test byte ptr [ecx], r13b
#define TEST_R13B_TO_PTR_EDX test byte ptr [edx], r13b
#define TEST_R13B_TO_PTR_EDI test byte ptr [edi], r13b
#define TEST_R13B_TO_PTR_ESI test byte ptr [esi], r13b
#define TEST_R13B_TO_PTR_EBP test byte ptr [ebp], r13b
#define TEST_R13B_TO_PTR_ESP test byte ptr [esp], r13b

#define TEST_R14B_TO_PTR_RAX test byte ptr [rax], r14b
#define TEST_R14B_TO_PTR_RBX test byte ptr [rbx], r14b
#define TEST_R14B_TO_PTR_RCX test byte ptr [rcx], r14b
#define TEST_R14B_TO_PTR_RDX test byte ptr [rdx], r14b
#define TEST_R14B_TO_PTR_RDI test byte ptr [rdi], r14b
#define TEST_R14B_TO_PTR_RSI test byte ptr [rsi], r14b
#define TEST_R14B_TO_PTR_RBP test byte ptr [rbp], r14b
#define TEST_R14B_TO_PTR_RSP test byte ptr [rsp], r14b
#define TEST_R14B_TO_PTR_R8 test byte ptr [r8], r14b
#define TEST_R14B_TO_PTR_R9 test byte ptr [r9], r14b
#define TEST_R14B_TO_PTR_R10 test byte ptr [r10], r14b
#define TEST_R14B_TO_PTR_R11 test byte ptr [r11], r14b
#define TEST_R14B_TO_PTR_R12 test byte ptr [r12], r14b
#define TEST_R14B_TO_PTR_R13 test byte ptr [r13], r14b
#define TEST_R14B_TO_PTR_R14 test byte ptr [r14], r14b
#define TEST_R14B_TO_PTR_R15 test byte ptr [r15], r14b
#define TEST_R14B_TO_PTR_EAX test byte ptr [eax], r14b
#define TEST_R14B_TO_PTR_EBX test byte ptr [ebx], r14b
#define TEST_R14B_TO_PTR_ECX test byte ptr [ecx], r14b
#define TEST_R14B_TO_PTR_EDX test byte ptr [edx], r14b
#define TEST_R14B_TO_PTR_EDI test byte ptr [edi], r14b
#define TEST_R14B_TO_PTR_ESI test byte ptr [esi], r14b
#define TEST_R14B_TO_PTR_EBP test byte ptr [ebp], r14b
#define TEST_R14B_TO_PTR_ESP test byte ptr [esp], r14b

#define TEST_R15B_TO_PTR_RAX test byte ptr [rax], r15b
#define TEST_R15B_TO_PTR_RBX test byte ptr [rbx], r15b
#define TEST_R15B_TO_PTR_RCX test byte ptr [rcx], r15b
#define TEST_R15B_TO_PTR_RDX test byte ptr [rdx], r15b
#define TEST_R15B_TO_PTR_RDI test byte ptr [rdi], r15b
#define TEST_R15B_TO_PTR_RSI test byte ptr [rsi], r15b
#define TEST_R15B_TO_PTR_RBP test byte ptr [rbp], r15b
#define TEST_R15B_TO_PTR_RSP test byte ptr [rsp], r15b
#define TEST_R15B_TO_PTR_R8 test byte ptr [r8], r15b
#define TEST_R15B_TO_PTR_R9 test byte ptr [r9], r15b
#define TEST_R15B_TO_PTR_R10 test byte ptr [r10], r15b
#define TEST_R15B_TO_PTR_R11 test byte ptr [r11], r15b
#define TEST_R15B_TO_PTR_R12 test byte ptr [r12], r15b
#define TEST_R15B_TO_PTR_R13 test byte ptr [r13], r15b
#define TEST_R15B_TO_PTR_R14 test byte ptr [r14], r15b
#define TEST_R15B_TO_PTR_R15 test byte ptr [r15], r15b
#define TEST_R15B_TO_PTR_EAX test byte ptr [eax], r15b
#define TEST_R15B_TO_PTR_EBX test byte ptr [ebx], r15b
#define TEST_R15B_TO_PTR_ECX test byte ptr [ecx], r15b
#define TEST_R15B_TO_PTR_EDX test byte ptr [edx], r15b
#define TEST_R15B_TO_PTR_EDI test byte ptr [edi], r15b
#define TEST_R15B_TO_PTR_ESI test byte ptr [esi], r15b
#define TEST_R15B_TO_PTR_EBP test byte ptr [ebp], r15b
#define TEST_R15B_TO_PTR_ESP test byte ptr [esp], r15b

#define TEST_AL_FROM_PTR_RAX_(VALUE) test al, byte ptr [rax + VALUE]
#define TEST_AL_FROM_PTR_RBX_(VALUE) test al, byte ptr [rbx + VALUE]
#define TEST_AL_FROM_PTR_RCX_(VALUE) test al, byte ptr [rcx + VALUE]
#define TEST_AL_FROM_PTR_RDX_(VALUE) test al, byte ptr [rdx + VALUE]
#define TEST_AL_FROM_PTR_RDI_(VALUE) test al, byte ptr [rdi + VALUE]
#define TEST_AL_FROM_PTR_RSI_(VALUE) test al, byte ptr [rsi + VALUE]
#define TEST_AL_FROM_PTR_RBP_(VALUE) test al, byte ptr [rbp + VALUE]
#define TEST_AL_FROM_PTR_RSP_(VALUE) test al, byte ptr [rsp + VALUE]
#define TEST_AL_FROM_PTR_R8_(VALUE) test al, byte ptr [r8 + VALUE]
#define TEST_AL_FROM_PTR_R9_(VALUE) test al, byte ptr [r9 + VALUE]
#define TEST_AL_FROM_PTR_R10_(VALUE) test al, byte ptr [r10 + VALUE]
#define TEST_AL_FROM_PTR_R11_(VALUE) test al, byte ptr [r11 + VALUE]
#define TEST_AL_FROM_PTR_R12_(VALUE) test al, byte ptr [r12 + VALUE]
#define TEST_AL_FROM_PTR_R13_(VALUE) test al, byte ptr [r13 + VALUE]
#define TEST_AL_FROM_PTR_R14_(VALUE) test al, byte ptr [r14 + VALUE]
#define TEST_AL_FROM_PTR_R15_(VALUE) test al, byte ptr [r15 + VALUE]
#define TEST_AL_FROM_PTR_EAX_(VALUE) test al, byte ptr [eax + VALUE]
#define TEST_AL_FROM_PTR_EBX_(VALUE) test al, byte ptr [ebx + VALUE]
#define TEST_AL_FROM_PTR_ECX_(VALUE) test al, byte ptr [ecx + VALUE]
#define TEST_AL_FROM_PTR_EDX_(VALUE) test al, byte ptr [edx + VALUE]
#define TEST_AL_FROM_PTR_EDI_(VALUE) test al, byte ptr [edi + VALUE]
#define TEST_AL_FROM_PTR_ESI_(VALUE) test al, byte ptr [esi + VALUE]
#define TEST_AL_FROM_PTR_EBP_(VALUE) test al, byte ptr [ebp + VALUE]
#define TEST_AL_FROM_PTR_ESP_(VALUE) test al, byte ptr [esp + VALUE]

#define TEST_BL_FROM_PTR_RAX_(VALUE) test bl, byte ptr [rax + VALUE]
#define TEST_BL_FROM_PTR_RBX_(VALUE) test bl, byte ptr [rbx + VALUE]
#define TEST_BL_FROM_PTR_RCX_(VALUE) test bl, byte ptr [rcx + VALUE]
#define TEST_BL_FROM_PTR_RDX_(VALUE) test bl, byte ptr [rdx + VALUE]
#define TEST_BL_FROM_PTR_RDI_(VALUE) test bl, byte ptr [rdi + VALUE]
#define TEST_BL_FROM_PTR_RSI_(VALUE) test bl, byte ptr [rsi + VALUE]
#define TEST_BL_FROM_PTR_RBP_(VALUE) test bl, byte ptr [rbp + VALUE]
#define TEST_BL_FROM_PTR_RSP_(VALUE) test bl, byte ptr [rsp + VALUE]
#define TEST_BL_FROM_PTR_R8_(VALUE) test bl, byte ptr [r8 + VALUE]
#define TEST_BL_FROM_PTR_R9_(VALUE) test bl, byte ptr [r9 + VALUE]
#define TEST_BL_FROM_PTR_R10_(VALUE) test bl, byte ptr [r10 + VALUE]
#define TEST_BL_FROM_PTR_R11_(VALUE) test bl, byte ptr [r11 + VALUE]
#define TEST_BL_FROM_PTR_R12_(VALUE) test bl, byte ptr [r12 + VALUE]
#define TEST_BL_FROM_PTR_R13_(VALUE) test bl, byte ptr [r13 + VALUE]
#define TEST_BL_FROM_PTR_R14_(VALUE) test bl, byte ptr [r14 + VALUE]
#define TEST_BL_FROM_PTR_R15_(VALUE) test bl, byte ptr [r15 + VALUE]
#define TEST_BL_FROM_PTR_EAX_(VALUE) test bl, byte ptr [eax + VALUE]
#define TEST_BL_FROM_PTR_EBX_(VALUE) test bl, byte ptr [ebx + VALUE]
#define TEST_BL_FROM_PTR_ECX_(VALUE) test bl, byte ptr [ecx + VALUE]
#define TEST_BL_FROM_PTR_EDX_(VALUE) test bl, byte ptr [edx + VALUE]
#define TEST_BL_FROM_PTR_EDI_(VALUE) test bl, byte ptr [edi + VALUE]
#define TEST_BL_FROM_PTR_ESI_(VALUE) test bl, byte ptr [esi + VALUE]
#define TEST_BL_FROM_PTR_EBP_(VALUE) test bl, byte ptr [ebp + VALUE]
#define TEST_BL_FROM_PTR_ESP_(VALUE) test bl, byte ptr [esp + VALUE]

#define TEST_CL_FROM_PTR_RAX_(VALUE) test cl, byte ptr [rax + VALUE]
#define TEST_CL_FROM_PTR_RBX_(VALUE) test cl, byte ptr [rbx + VALUE]
#define TEST_CL_FROM_PTR_RCX_(VALUE) test cl, byte ptr [rcx + VALUE]
#define TEST_CL_FROM_PTR_RDX_(VALUE) test cl, byte ptr [rdx + VALUE]
#define TEST_CL_FROM_PTR_RDI_(VALUE) test cl, byte ptr [rdi + VALUE]
#define TEST_CL_FROM_PTR_RSI_(VALUE) test cl, byte ptr [rsi + VALUE]
#define TEST_CL_FROM_PTR_RBP_(VALUE) test cl, byte ptr [rbp + VALUE]
#define TEST_CL_FROM_PTR_RSP_(VALUE) test cl, byte ptr [rsp + VALUE]
#define TEST_CL_FROM_PTR_R8_(VALUE) test cl, byte ptr [r8 + VALUE]
#define TEST_CL_FROM_PTR_R9_(VALUE) test cl, byte ptr [r9 + VALUE]
#define TEST_CL_FROM_PTR_R10_(VALUE) test cl, byte ptr [r10 + VALUE]
#define TEST_CL_FROM_PTR_R11_(VALUE) test cl, byte ptr [r11 + VALUE]
#define TEST_CL_FROM_PTR_R12_(VALUE) test cl, byte ptr [r12 + VALUE]
#define TEST_CL_FROM_PTR_R13_(VALUE) test cl, byte ptr [r13 + VALUE]
#define TEST_CL_FROM_PTR_R14_(VALUE) test cl, byte ptr [r14 + VALUE]
#define TEST_CL_FROM_PTR_R15_(VALUE) test cl, byte ptr [r15 + VALUE]
#define TEST_CL_FROM_PTR_EAX_(VALUE) test cl, byte ptr [eax + VALUE]
#define TEST_CL_FROM_PTR_EBX_(VALUE) test cl, byte ptr [ebx + VALUE]
#define TEST_CL_FROM_PTR_ECX_(VALUE) test cl, byte ptr [ecx + VALUE]
#define TEST_CL_FROM_PTR_EDX_(VALUE) test cl, byte ptr [edx + VALUE]
#define TEST_CL_FROM_PTR_EDI_(VALUE) test cl, byte ptr [edi + VALUE]
#define TEST_CL_FROM_PTR_ESI_(VALUE) test cl, byte ptr [esi + VALUE]
#define TEST_CL_FROM_PTR_EBP_(VALUE) test cl, byte ptr [ebp + VALUE]
#define TEST_CL_FROM_PTR_ESP_(VALUE) test cl, byte ptr [esp + VALUE]

#define TEST_DL_FROM_PTR_RAX_(VALUE) test dl, byte ptr [rax + VALUE]
#define TEST_DL_FROM_PTR_RBX_(VALUE) test dl, byte ptr [rbx + VALUE]
#define TEST_DL_FROM_PTR_RCX_(VALUE) test dl, byte ptr [rcx + VALUE]
#define TEST_DL_FROM_PTR_RDX_(VALUE) test dl, byte ptr [rdx + VALUE]
#define TEST_DL_FROM_PTR_RDI_(VALUE) test dl, byte ptr [rdi + VALUE]
#define TEST_DL_FROM_PTR_RSI_(VALUE) test dl, byte ptr [rsi + VALUE]
#define TEST_DL_FROM_PTR_RBP_(VALUE) test dl, byte ptr [rbp + VALUE]
#define TEST_DL_FROM_PTR_RSP_(VALUE) test dl, byte ptr [rsp + VALUE]
#define TEST_DL_FROM_PTR_R8_(VALUE) test dl, byte ptr [r8 + VALUE]
#define TEST_DL_FROM_PTR_R9_(VALUE) test dl, byte ptr [r9 + VALUE]
#define TEST_DL_FROM_PTR_R10_(VALUE) test dl, byte ptr [r10 + VALUE]
#define TEST_DL_FROM_PTR_R11_(VALUE) test dl, byte ptr [r11 + VALUE]
#define TEST_DL_FROM_PTR_R12_(VALUE) test dl, byte ptr [r12 + VALUE]
#define TEST_DL_FROM_PTR_R13_(VALUE) test dl, byte ptr [r13 + VALUE]
#define TEST_DL_FROM_PTR_R14_(VALUE) test dl, byte ptr [r14 + VALUE]
#define TEST_DL_FROM_PTR_R15_(VALUE) test dl, byte ptr [r15 + VALUE]
#define TEST_DL_FROM_PTR_EAX_(VALUE) test dl, byte ptr [eax + VALUE]
#define TEST_DL_FROM_PTR_EBX_(VALUE) test dl, byte ptr [ebx + VALUE]
#define TEST_DL_FROM_PTR_ECX_(VALUE) test dl, byte ptr [ecx + VALUE]
#define TEST_DL_FROM_PTR_EDX_(VALUE) test dl, byte ptr [edx + VALUE]
#define TEST_DL_FROM_PTR_EDI_(VALUE) test dl, byte ptr [edi + VALUE]
#define TEST_DL_FROM_PTR_ESI_(VALUE) test dl, byte ptr [esi + VALUE]
#define TEST_DL_FROM_PTR_EBP_(VALUE) test dl, byte ptr [ebp + VALUE]
#define TEST_DL_FROM_PTR_ESP_(VALUE) test dl, byte ptr [esp + VALUE]

#define TEST_DIL_FROM_PTR_RAX_(VALUE) test dil, byte ptr [rax + VALUE]
#define TEST_DIL_FROM_PTR_RBX_(VALUE) test dil, byte ptr [rbx + VALUE]
#define TEST_DIL_FROM_PTR_RCX_(VALUE) test dil, byte ptr [rcx + VALUE]
#define TEST_DIL_FROM_PTR_RDX_(VALUE) test dil, byte ptr [rdx + VALUE]
#define TEST_DIL_FROM_PTR_RDI_(VALUE) test dil, byte ptr [rdi + VALUE]
#define TEST_DIL_FROM_PTR_RSI_(VALUE) test dil, byte ptr [rsi + VALUE]
#define TEST_DIL_FROM_PTR_RBP_(VALUE) test dil, byte ptr [rbp + VALUE]
#define TEST_DIL_FROM_PTR_RSP_(VALUE) test dil, byte ptr [rsp + VALUE]
#define TEST_DIL_FROM_PTR_R8_(VALUE) test dil, byte ptr [r8 + VALUE]
#define TEST_DIL_FROM_PTR_R9_(VALUE) test dil, byte ptr [r9 + VALUE]
#define TEST_DIL_FROM_PTR_R10_(VALUE) test dil, byte ptr [r10 + VALUE]
#define TEST_DIL_FROM_PTR_R11_(VALUE) test dil, byte ptr [r11 + VALUE]
#define TEST_DIL_FROM_PTR_R12_(VALUE) test dil, byte ptr [r12 + VALUE]
#define TEST_DIL_FROM_PTR_R13_(VALUE) test dil, byte ptr [r13 + VALUE]
#define TEST_DIL_FROM_PTR_R14_(VALUE) test dil, byte ptr [r14 + VALUE]
#define TEST_DIL_FROM_PTR_R15_(VALUE) test dil, byte ptr [r15 + VALUE]
#define TEST_DIL_FROM_PTR_EAX_(VALUE) test dil, byte ptr [eax + VALUE]
#define TEST_DIL_FROM_PTR_EBX_(VALUE) test dil, byte ptr [ebx + VALUE]
#define TEST_DIL_FROM_PTR_ECX_(VALUE) test dil, byte ptr [ecx + VALUE]
#define TEST_DIL_FROM_PTR_EDX_(VALUE) test dil, byte ptr [edx + VALUE]
#define TEST_DIL_FROM_PTR_EDI_(VALUE) test dil, byte ptr [edi + VALUE]
#define TEST_DIL_FROM_PTR_ESI_(VALUE) test dil, byte ptr [esi + VALUE]
#define TEST_DIL_FROM_PTR_EBP_(VALUE) test dil, byte ptr [ebp + VALUE]
#define TEST_DIL_FROM_PTR_ESP_(VALUE) test dil, byte ptr [esp + VALUE]

#define TEST_SIL_FROM_PTR_RAX_(VALUE) test sil, byte ptr [rax + VALUE]
#define TEST_SIL_FROM_PTR_RBX_(VALUE) test sil, byte ptr [rbx + VALUE]
#define TEST_SIL_FROM_PTR_RCX_(VALUE) test sil, byte ptr [rcx + VALUE]
#define TEST_SIL_FROM_PTR_RDX_(VALUE) test sil, byte ptr [rdx + VALUE]
#define TEST_SIL_FROM_PTR_RDI_(VALUE) test sil, byte ptr [rdi + VALUE]
#define TEST_SIL_FROM_PTR_RSI_(VALUE) test sil, byte ptr [rsi + VALUE]
#define TEST_SIL_FROM_PTR_RBP_(VALUE) test sil, byte ptr [rbp + VALUE]
#define TEST_SIL_FROM_PTR_RSP_(VALUE) test sil, byte ptr [rsp + VALUE]
#define TEST_SIL_FROM_PTR_R8_(VALUE) test sil, byte ptr [r8 + VALUE]
#define TEST_SIL_FROM_PTR_R9_(VALUE) test sil, byte ptr [r9 + VALUE]
#define TEST_SIL_FROM_PTR_R10_(VALUE) test sil, byte ptr [r10 + VALUE]
#define TEST_SIL_FROM_PTR_R11_(VALUE) test sil, byte ptr [r11 + VALUE]
#define TEST_SIL_FROM_PTR_R12_(VALUE) test sil, byte ptr [r12 + VALUE]
#define TEST_SIL_FROM_PTR_R13_(VALUE) test sil, byte ptr [r13 + VALUE]
#define TEST_SIL_FROM_PTR_R14_(VALUE) test sil, byte ptr [r14 + VALUE]
#define TEST_SIL_FROM_PTR_R15_(VALUE) test sil, byte ptr [r15 + VALUE]
#define TEST_SIL_FROM_PTR_EAX_(VALUE) test sil, byte ptr [eax + VALUE]
#define TEST_SIL_FROM_PTR_EBX_(VALUE) test sil, byte ptr [ebx + VALUE]
#define TEST_SIL_FROM_PTR_ECX_(VALUE) test sil, byte ptr [ecx + VALUE]
#define TEST_SIL_FROM_PTR_EDX_(VALUE) test sil, byte ptr [edx + VALUE]
#define TEST_SIL_FROM_PTR_EDI_(VALUE) test sil, byte ptr [edi + VALUE]
#define TEST_SIL_FROM_PTR_ESI_(VALUE) test sil, byte ptr [esi + VALUE]
#define TEST_SIL_FROM_PTR_EBP_(VALUE) test sil, byte ptr [ebp + VALUE]
#define TEST_SIL_FROM_PTR_ESP_(VALUE) test sil, byte ptr [esp + VALUE]

#define TEST_BPL_FROM_PTR_RAX_(VALUE) test bpl, byte ptr [rax + VALUE]
#define TEST_BPL_FROM_PTR_RBX_(VALUE) test bpl, byte ptr [rbx + VALUE]
#define TEST_BPL_FROM_PTR_RCX_(VALUE) test bpl, byte ptr [rcx + VALUE]
#define TEST_BPL_FROM_PTR_RDX_(VALUE) test bpl, byte ptr [rdx + VALUE]
#define TEST_BPL_FROM_PTR_RDI_(VALUE) test bpl, byte ptr [rdi + VALUE]
#define TEST_BPL_FROM_PTR_RSI_(VALUE) test bpl, byte ptr [rsi + VALUE]
#define TEST_BPL_FROM_PTR_RBP_(VALUE) test bpl, byte ptr [rbp + VALUE]
#define TEST_BPL_FROM_PTR_RSP_(VALUE) test bpl, byte ptr [rsp + VALUE]
#define TEST_BPL_FROM_PTR_R8_(VALUE) test bpl, byte ptr [r8 + VALUE]
#define TEST_BPL_FROM_PTR_R9_(VALUE) test bpl, byte ptr [r9 + VALUE]
#define TEST_BPL_FROM_PTR_R10_(VALUE) test bpl, byte ptr [r10 + VALUE]
#define TEST_BPL_FROM_PTR_R11_(VALUE) test bpl, byte ptr [r11 + VALUE]
#define TEST_BPL_FROM_PTR_R12_(VALUE) test bpl, byte ptr [r12 + VALUE]
#define TEST_BPL_FROM_PTR_R13_(VALUE) test bpl, byte ptr [r13 + VALUE]
#define TEST_BPL_FROM_PTR_R14_(VALUE) test bpl, byte ptr [r14 + VALUE]
#define TEST_BPL_FROM_PTR_R15_(VALUE) test bpl, byte ptr [r15 + VALUE]
#define TEST_BPL_FROM_PTR_EAX_(VALUE) test bpl, byte ptr [eax + VALUE]
#define TEST_BPL_FROM_PTR_EBX_(VALUE) test bpl, byte ptr [ebx + VALUE]
#define TEST_BPL_FROM_PTR_ECX_(VALUE) test bpl, byte ptr [ecx + VALUE]
#define TEST_BPL_FROM_PTR_EDX_(VALUE) test bpl, byte ptr [edx + VALUE]
#define TEST_BPL_FROM_PTR_EDI_(VALUE) test bpl, byte ptr [edi + VALUE]
#define TEST_BPL_FROM_PTR_ESI_(VALUE) test bpl, byte ptr [esi + VALUE]
#define TEST_BPL_FROM_PTR_EBP_(VALUE) test bpl, byte ptr [ebp + VALUE]
#define TEST_BPL_FROM_PTR_ESP_(VALUE) test bpl, byte ptr [esp + VALUE]

#define TEST_SPL_FROM_PTR_RAX_(VALUE) test spl, byte ptr [rax + VALUE]
#define TEST_SPL_FROM_PTR_RBX_(VALUE) test spl, byte ptr [rbx + VALUE]
#define TEST_SPL_FROM_PTR_RCX_(VALUE) test spl, byte ptr [rcx + VALUE]
#define TEST_SPL_FROM_PTR_RDX_(VALUE) test spl, byte ptr [rdx + VALUE]
#define TEST_SPL_FROM_PTR_RDI_(VALUE) test spl, byte ptr [rdi + VALUE]
#define TEST_SPL_FROM_PTR_RSI_(VALUE) test spl, byte ptr [rsi + VALUE]
#define TEST_SPL_FROM_PTR_RBP_(VALUE) test spl, byte ptr [rbp + VALUE]
#define TEST_SPL_FROM_PTR_RSP_(VALUE) test spl, byte ptr [rsp + VALUE]
#define TEST_SPL_FROM_PTR_R8_(VALUE) test spl, byte ptr [r8 + VALUE]
#define TEST_SPL_FROM_PTR_R9_(VALUE) test spl, byte ptr [r9 + VALUE]
#define TEST_SPL_FROM_PTR_R10_(VALUE) test spl, byte ptr [r10 + VALUE]
#define TEST_SPL_FROM_PTR_R11_(VALUE) test spl, byte ptr [r11 + VALUE]
#define TEST_SPL_FROM_PTR_R12_(VALUE) test spl, byte ptr [r12 + VALUE]
#define TEST_SPL_FROM_PTR_R13_(VALUE) test spl, byte ptr [r13 + VALUE]
#define TEST_SPL_FROM_PTR_R14_(VALUE) test spl, byte ptr [r14 + VALUE]
#define TEST_SPL_FROM_PTR_R15_(VALUE) test spl, byte ptr [r15 + VALUE]
#define TEST_SPL_FROM_PTR_EAX_(VALUE) test spl, byte ptr [eax + VALUE]
#define TEST_SPL_FROM_PTR_EBX_(VALUE) test spl, byte ptr [ebx + VALUE]
#define TEST_SPL_FROM_PTR_ECX_(VALUE) test spl, byte ptr [ecx + VALUE]
#define TEST_SPL_FROM_PTR_EDX_(VALUE) test spl, byte ptr [edx + VALUE]
#define TEST_SPL_FROM_PTR_EDI_(VALUE) test spl, byte ptr [edi + VALUE]
#define TEST_SPL_FROM_PTR_ESI_(VALUE) test spl, byte ptr [esi + VALUE]
#define TEST_SPL_FROM_PTR_EBP_(VALUE) test spl, byte ptr [ebp + VALUE]
#define TEST_SPL_FROM_PTR_ESP_(VALUE) test spl, byte ptr [esp + VALUE]

#define TEST_R8B_FROM_PTR_RAX_(VALUE) test r8b, byte ptr [rax + VALUE]
#define TEST_R8B_FROM_PTR_RBX_(VALUE) test r8b, byte ptr [rbx + VALUE]
#define TEST_R8B_FROM_PTR_RCX_(VALUE) test r8b, byte ptr [rcx + VALUE]
#define TEST_R8B_FROM_PTR_RDX_(VALUE) test r8b, byte ptr [rdx + VALUE]
#define TEST_R8B_FROM_PTR_RDI_(VALUE) test r8b, byte ptr [rdi + VALUE]
#define TEST_R8B_FROM_PTR_RSI_(VALUE) test r8b, byte ptr [rsi + VALUE]
#define TEST_R8B_FROM_PTR_RBP_(VALUE) test r8b, byte ptr [rbp + VALUE]
#define TEST_R8B_FROM_PTR_RSP_(VALUE) test r8b, byte ptr [rsp + VALUE]
#define TEST_R8B_FROM_PTR_R8_(VALUE) test r8b, byte ptr [r8 + VALUE]
#define TEST_R8B_FROM_PTR_R9_(VALUE) test r8b, byte ptr [r9 + VALUE]
#define TEST_R8B_FROM_PTR_R10_(VALUE) test r8b, byte ptr [r10 + VALUE]
#define TEST_R8B_FROM_PTR_R11_(VALUE) test r8b, byte ptr [r11 + VALUE]
#define TEST_R8B_FROM_PTR_R12_(VALUE) test r8b, byte ptr [r12 + VALUE]
#define TEST_R8B_FROM_PTR_R13_(VALUE) test r8b, byte ptr [r13 + VALUE]
#define TEST_R8B_FROM_PTR_R14_(VALUE) test r8b, byte ptr [r14 + VALUE]
#define TEST_R8B_FROM_PTR_R15_(VALUE) test r8b, byte ptr [r15 + VALUE]
#define TEST_R8B_FROM_PTR_EAX_(VALUE) test r8b, byte ptr [eax + VALUE]
#define TEST_R8B_FROM_PTR_EBX_(VALUE) test r8b, byte ptr [ebx + VALUE]
#define TEST_R8B_FROM_PTR_ECX_(VALUE) test r8b, byte ptr [ecx + VALUE]
#define TEST_R8B_FROM_PTR_EDX_(VALUE) test r8b, byte ptr [edx + VALUE]
#define TEST_R8B_FROM_PTR_EDI_(VALUE) test r8b, byte ptr [edi + VALUE]
#define TEST_R8B_FROM_PTR_ESI_(VALUE) test r8b, byte ptr [esi + VALUE]
#define TEST_R8B_FROM_PTR_EBP_(VALUE) test r8b, byte ptr [ebp + VALUE]
#define TEST_R8B_FROM_PTR_ESP_(VALUE) test r8b, byte ptr [esp + VALUE]

#define TEST_R9B_FROM_PTR_RAX_(VALUE) test r9b, byte ptr [rax + VALUE]
#define TEST_R9B_FROM_PTR_RBX_(VALUE) test r9b, byte ptr [rbx + VALUE]
#define TEST_R9B_FROM_PTR_RCX_(VALUE) test r9b, byte ptr [rcx + VALUE]
#define TEST_R9B_FROM_PTR_RDX_(VALUE) test r9b, byte ptr [rdx + VALUE]
#define TEST_R9B_FROM_PTR_RDI_(VALUE) test r9b, byte ptr [rdi + VALUE]
#define TEST_R9B_FROM_PTR_RSI_(VALUE) test r9b, byte ptr [rsi + VALUE]
#define TEST_R9B_FROM_PTR_RBP_(VALUE) test r9b, byte ptr [rbp + VALUE]
#define TEST_R9B_FROM_PTR_RSP_(VALUE) test r9b, byte ptr [rsp + VALUE]
#define TEST_R9B_FROM_PTR_R8_(VALUE) test r9b, byte ptr [r8 + VALUE]
#define TEST_R9B_FROM_PTR_R9_(VALUE) test r9b, byte ptr [r9 + VALUE]
#define TEST_R9B_FROM_PTR_R10_(VALUE) test r9b, byte ptr [r10 + VALUE]
#define TEST_R9B_FROM_PTR_R11_(VALUE) test r9b, byte ptr [r11 + VALUE]
#define TEST_R9B_FROM_PTR_R12_(VALUE) test r9b, byte ptr [r12 + VALUE]
#define TEST_R9B_FROM_PTR_R13_(VALUE) test r9b, byte ptr [r13 + VALUE]
#define TEST_R9B_FROM_PTR_R14_(VALUE) test r9b, byte ptr [r14 + VALUE]
#define TEST_R9B_FROM_PTR_R15_(VALUE) test r9b, byte ptr [r15 + VALUE]
#define TEST_R9B_FROM_PTR_EAX_(VALUE) test r9b, byte ptr [eax + VALUE]
#define TEST_R9B_FROM_PTR_EBX_(VALUE) test r9b, byte ptr [ebx + VALUE]
#define TEST_R9B_FROM_PTR_ECX_(VALUE) test r9b, byte ptr [ecx + VALUE]
#define TEST_R9B_FROM_PTR_EDX_(VALUE) test r9b, byte ptr [edx + VALUE]
#define TEST_R9B_FROM_PTR_EDI_(VALUE) test r9b, byte ptr [edi + VALUE]
#define TEST_R9B_FROM_PTR_ESI_(VALUE) test r9b, byte ptr [esi + VALUE]
#define TEST_R9B_FROM_PTR_EBP_(VALUE) test r9b, byte ptr [ebp + VALUE]
#define TEST_R9B_FROM_PTR_ESP_(VALUE) test r9b, byte ptr [esp + VALUE]

#define TEST_R10B_FROM_PTR_RAX_(VALUE) test r10b, byte ptr [rax + VALUE]
#define TEST_R10B_FROM_PTR_RBX_(VALUE) test r10b, byte ptr [rbx + VALUE]
#define TEST_R10B_FROM_PTR_RCX_(VALUE) test r10b, byte ptr [rcx + VALUE]
#define TEST_R10B_FROM_PTR_RDX_(VALUE) test r10b, byte ptr [rdx + VALUE]
#define TEST_R10B_FROM_PTR_RDI_(VALUE) test r10b, byte ptr [rdi + VALUE]
#define TEST_R10B_FROM_PTR_RSI_(VALUE) test r10b, byte ptr [rsi + VALUE]
#define TEST_R10B_FROM_PTR_RBP_(VALUE) test r10b, byte ptr [rbp + VALUE]
#define TEST_R10B_FROM_PTR_RSP_(VALUE) test r10b, byte ptr [rsp + VALUE]
#define TEST_R10B_FROM_PTR_R8_(VALUE) test r10b, byte ptr [r8 + VALUE]
#define TEST_R10B_FROM_PTR_R9_(VALUE) test r10b, byte ptr [r9 + VALUE]
#define TEST_R10B_FROM_PTR_R10_(VALUE) test r10b, byte ptr [r10 + VALUE]
#define TEST_R10B_FROM_PTR_R11_(VALUE) test r10b, byte ptr [r11 + VALUE]
#define TEST_R10B_FROM_PTR_R12_(VALUE) test r10b, byte ptr [r12 + VALUE]
#define TEST_R10B_FROM_PTR_R13_(VALUE) test r10b, byte ptr [r13 + VALUE]
#define TEST_R10B_FROM_PTR_R14_(VALUE) test r10b, byte ptr [r14 + VALUE]
#define TEST_R10B_FROM_PTR_R15_(VALUE) test r10b, byte ptr [r15 + VALUE]
#define TEST_R10B_FROM_PTR_EAX_(VALUE) test r10b, byte ptr [eax + VALUE]
#define TEST_R10B_FROM_PTR_EBX_(VALUE) test r10b, byte ptr [ebx + VALUE]
#define TEST_R10B_FROM_PTR_ECX_(VALUE) test r10b, byte ptr [ecx + VALUE]
#define TEST_R10B_FROM_PTR_EDX_(VALUE) test r10b, byte ptr [edx + VALUE]
#define TEST_R10B_FROM_PTR_EDI_(VALUE) test r10b, byte ptr [edi + VALUE]
#define TEST_R10B_FROM_PTR_ESI_(VALUE) test r10b, byte ptr [esi + VALUE]
#define TEST_R10B_FROM_PTR_EBP_(VALUE) test r10b, byte ptr [ebp + VALUE]
#define TEST_R10B_FROM_PTR_ESP_(VALUE) test r10b, byte ptr [esp + VALUE]

#define TEST_R11B_FROM_PTR_RAX_(VALUE) test r11b, byte ptr [rax + VALUE]
#define TEST_R11B_FROM_PTR_RBX_(VALUE) test r11b, byte ptr [rbx + VALUE]
#define TEST_R11B_FROM_PTR_RCX_(VALUE) test r11b, byte ptr [rcx + VALUE]
#define TEST_R11B_FROM_PTR_RDX_(VALUE) test r11b, byte ptr [rdx + VALUE]
#define TEST_R11B_FROM_PTR_RDI_(VALUE) test r11b, byte ptr [rdi + VALUE]
#define TEST_R11B_FROM_PTR_RSI_(VALUE) test r11b, byte ptr [rsi + VALUE]
#define TEST_R11B_FROM_PTR_RBP_(VALUE) test r11b, byte ptr [rbp + VALUE]
#define TEST_R11B_FROM_PTR_RSP_(VALUE) test r11b, byte ptr [rsp + VALUE]
#define TEST_R11B_FROM_PTR_R8_(VALUE) test r11b, byte ptr [r8 + VALUE]
#define TEST_R11B_FROM_PTR_R9_(VALUE) test r11b, byte ptr [r9 + VALUE]
#define TEST_R11B_FROM_PTR_R10_(VALUE) test r11b, byte ptr [r10 + VALUE]
#define TEST_R11B_FROM_PTR_R11_(VALUE) test r11b, byte ptr [r11 + VALUE]
#define TEST_R11B_FROM_PTR_R12_(VALUE) test r11b, byte ptr [r12 + VALUE]
#define TEST_R11B_FROM_PTR_R13_(VALUE) test r11b, byte ptr [r13 + VALUE]
#define TEST_R11B_FROM_PTR_R14_(VALUE) test r11b, byte ptr [r14 + VALUE]
#define TEST_R11B_FROM_PTR_R15_(VALUE) test r11b, byte ptr [r15 + VALUE]
#define TEST_R11B_FROM_PTR_EAX_(VALUE) test r11b, byte ptr [eax + VALUE]
#define TEST_R11B_FROM_PTR_EBX_(VALUE) test r11b, byte ptr [ebx + VALUE]
#define TEST_R11B_FROM_PTR_ECX_(VALUE) test r11b, byte ptr [ecx + VALUE]
#define TEST_R11B_FROM_PTR_EDX_(VALUE) test r11b, byte ptr [edx + VALUE]
#define TEST_R11B_FROM_PTR_EDI_(VALUE) test r11b, byte ptr [edi + VALUE]
#define TEST_R11B_FROM_PTR_ESI_(VALUE) test r11b, byte ptr [esi + VALUE]
#define TEST_R11B_FROM_PTR_EBP_(VALUE) test r11b, byte ptr [ebp + VALUE]
#define TEST_R11B_FROM_PTR_ESP_(VALUE) test r11b, byte ptr [esp + VALUE]

#define TEST_R12B_FROM_PTR_RAX_(VALUE) test r12b, byte ptr [rax + VALUE]
#define TEST_R12B_FROM_PTR_RBX_(VALUE) test r12b, byte ptr [rbx + VALUE]
#define TEST_R12B_FROM_PTR_RCX_(VALUE) test r12b, byte ptr [rcx + VALUE]
#define TEST_R12B_FROM_PTR_RDX_(VALUE) test r12b, byte ptr [rdx + VALUE]
#define TEST_R12B_FROM_PTR_RDI_(VALUE) test r12b, byte ptr [rdi + VALUE]
#define TEST_R12B_FROM_PTR_RSI_(VALUE) test r12b, byte ptr [rsi + VALUE]
#define TEST_R12B_FROM_PTR_RBP_(VALUE) test r12b, byte ptr [rbp + VALUE]
#define TEST_R12B_FROM_PTR_RSP_(VALUE) test r12b, byte ptr [rsp + VALUE]
#define TEST_R12B_FROM_PTR_R8_(VALUE) test r12b, byte ptr [r8 + VALUE]
#define TEST_R12B_FROM_PTR_R9_(VALUE) test r12b, byte ptr [r9 + VALUE]
#define TEST_R12B_FROM_PTR_R10_(VALUE) test r12b, byte ptr [r10 + VALUE]
#define TEST_R12B_FROM_PTR_R11_(VALUE) test r12b, byte ptr [r11 + VALUE]
#define TEST_R12B_FROM_PTR_R12_(VALUE) test r12b, byte ptr [r12 + VALUE]
#define TEST_R12B_FROM_PTR_R13_(VALUE) test r12b, byte ptr [r13 + VALUE]
#define TEST_R12B_FROM_PTR_R14_(VALUE) test r12b, byte ptr [r14 + VALUE]
#define TEST_R12B_FROM_PTR_R15_(VALUE) test r12b, byte ptr [r15 + VALUE]
#define TEST_R12B_FROM_PTR_EAX_(VALUE) test r12b, byte ptr [eax + VALUE]
#define TEST_R12B_FROM_PTR_EBX_(VALUE) test r12b, byte ptr [ebx + VALUE]
#define TEST_R12B_FROM_PTR_ECX_(VALUE) test r12b, byte ptr [ecx + VALUE]
#define TEST_R12B_FROM_PTR_EDX_(VALUE) test r12b, byte ptr [edx + VALUE]
#define TEST_R12B_FROM_PTR_EDI_(VALUE) test r12b, byte ptr [edi + VALUE]
#define TEST_R12B_FROM_PTR_ESI_(VALUE) test r12b, byte ptr [esi + VALUE]
#define TEST_R12B_FROM_PTR_EBP_(VALUE) test r12b, byte ptr [ebp + VALUE]
#define TEST_R12B_FROM_PTR_ESP_(VALUE) test r12b, byte ptr [esp + VALUE]

#define TEST_R13B_FROM_PTR_RAX_(VALUE) test r13b, byte ptr [rax + VALUE]
#define TEST_R13B_FROM_PTR_RBX_(VALUE) test r13b, byte ptr [rbx + VALUE]
#define TEST_R13B_FROM_PTR_RCX_(VALUE) test r13b, byte ptr [rcx + VALUE]
#define TEST_R13B_FROM_PTR_RDX_(VALUE) test r13b, byte ptr [rdx + VALUE]
#define TEST_R13B_FROM_PTR_RDI_(VALUE) test r13b, byte ptr [rdi + VALUE]
#define TEST_R13B_FROM_PTR_RSI_(VALUE) test r13b, byte ptr [rsi + VALUE]
#define TEST_R13B_FROM_PTR_RBP_(VALUE) test r13b, byte ptr [rbp + VALUE]
#define TEST_R13B_FROM_PTR_RSP_(VALUE) test r13b, byte ptr [rsp + VALUE]
#define TEST_R13B_FROM_PTR_R8_(VALUE) test r13b, byte ptr [r8 + VALUE]
#define TEST_R13B_FROM_PTR_R9_(VALUE) test r13b, byte ptr [r9 + VALUE]
#define TEST_R13B_FROM_PTR_R10_(VALUE) test r13b, byte ptr [r10 + VALUE]
#define TEST_R13B_FROM_PTR_R11_(VALUE) test r13b, byte ptr [r11 + VALUE]
#define TEST_R13B_FROM_PTR_R12_(VALUE) test r13b, byte ptr [r12 + VALUE]
#define TEST_R13B_FROM_PTR_R13_(VALUE) test r13b, byte ptr [r13 + VALUE]
#define TEST_R13B_FROM_PTR_R14_(VALUE) test r13b, byte ptr [r14 + VALUE]
#define TEST_R13B_FROM_PTR_R15_(VALUE) test r13b, byte ptr [r15 + VALUE]
#define TEST_R13B_FROM_PTR_EAX_(VALUE) test r13b, byte ptr [eax + VALUE]
#define TEST_R13B_FROM_PTR_EBX_(VALUE) test r13b, byte ptr [ebx + VALUE]
#define TEST_R13B_FROM_PTR_ECX_(VALUE) test r13b, byte ptr [ecx + VALUE]
#define TEST_R13B_FROM_PTR_EDX_(VALUE) test r13b, byte ptr [edx + VALUE]
#define TEST_R13B_FROM_PTR_EDI_(VALUE) test r13b, byte ptr [edi + VALUE]
#define TEST_R13B_FROM_PTR_ESI_(VALUE) test r13b, byte ptr [esi + VALUE]
#define TEST_R13B_FROM_PTR_EBP_(VALUE) test r13b, byte ptr [ebp + VALUE]
#define TEST_R13B_FROM_PTR_ESP_(VALUE) test r13b, byte ptr [esp + VALUE]

#define TEST_R14B_FROM_PTR_RAX_(VALUE) test r14b, byte ptr [rax + VALUE]
#define TEST_R14B_FROM_PTR_RBX_(VALUE) test r14b, byte ptr [rbx + VALUE]
#define TEST_R14B_FROM_PTR_RCX_(VALUE) test r14b, byte ptr [rcx + VALUE]
#define TEST_R14B_FROM_PTR_RDX_(VALUE) test r14b, byte ptr [rdx + VALUE]
#define TEST_R14B_FROM_PTR_RDI_(VALUE) test r14b, byte ptr [rdi + VALUE]
#define TEST_R14B_FROM_PTR_RSI_(VALUE) test r14b, byte ptr [rsi + VALUE]
#define TEST_R14B_FROM_PTR_RBP_(VALUE) test r14b, byte ptr [rbp + VALUE]
#define TEST_R14B_FROM_PTR_RSP_(VALUE) test r14b, byte ptr [rsp + VALUE]
#define TEST_R14B_FROM_PTR_R8_(VALUE) test r14b, byte ptr [r8 + VALUE]
#define TEST_R14B_FROM_PTR_R9_(VALUE) test r14b, byte ptr [r9 + VALUE]
#define TEST_R14B_FROM_PTR_R10_(VALUE) test r14b, byte ptr [r10 + VALUE]
#define TEST_R14B_FROM_PTR_R11_(VALUE) test r14b, byte ptr [r11 + VALUE]
#define TEST_R14B_FROM_PTR_R12_(VALUE) test r14b, byte ptr [r12 + VALUE]
#define TEST_R14B_FROM_PTR_R13_(VALUE) test r14b, byte ptr [r13 + VALUE]
#define TEST_R14B_FROM_PTR_R14_(VALUE) test r14b, byte ptr [r14 + VALUE]
#define TEST_R14B_FROM_PTR_R15_(VALUE) test r14b, byte ptr [r15 + VALUE]
#define TEST_R14B_FROM_PTR_EAX_(VALUE) test r14b, byte ptr [eax + VALUE]
#define TEST_R14B_FROM_PTR_EBX_(VALUE) test r14b, byte ptr [ebx + VALUE]
#define TEST_R14B_FROM_PTR_ECX_(VALUE) test r14b, byte ptr [ecx + VALUE]
#define TEST_R14B_FROM_PTR_EDX_(VALUE) test r14b, byte ptr [edx + VALUE]
#define TEST_R14B_FROM_PTR_EDI_(VALUE) test r14b, byte ptr [edi + VALUE]
#define TEST_R14B_FROM_PTR_ESI_(VALUE) test r14b, byte ptr [esi + VALUE]
#define TEST_R14B_FROM_PTR_EBP_(VALUE) test r14b, byte ptr [ebp + VALUE]
#define TEST_R14B_FROM_PTR_ESP_(VALUE) test r14b, byte ptr [esp + VALUE]

#define TEST_R15B_FROM_PTR_RAX_(VALUE) test r15b, byte ptr [rax + VALUE]
#define TEST_R15B_FROM_PTR_RBX_(VALUE) test r15b, byte ptr [rbx + VALUE]
#define TEST_R15B_FROM_PTR_RCX_(VALUE) test r15b, byte ptr [rcx + VALUE]
#define TEST_R15B_FROM_PTR_RDX_(VALUE) test r15b, byte ptr [rdx + VALUE]
#define TEST_R15B_FROM_PTR_RDI_(VALUE) test r15b, byte ptr [rdi + VALUE]
#define TEST_R15B_FROM_PTR_RSI_(VALUE) test r15b, byte ptr [rsi + VALUE]
#define TEST_R15B_FROM_PTR_RBP_(VALUE) test r15b, byte ptr [rbp + VALUE]
#define TEST_R15B_FROM_PTR_RSP_(VALUE) test r15b, byte ptr [rsp + VALUE]
#define TEST_R15B_FROM_PTR_R8_(VALUE) test r15b, byte ptr [r8 + VALUE]
#define TEST_R15B_FROM_PTR_R9_(VALUE) test r15b, byte ptr [r9 + VALUE]
#define TEST_R15B_FROM_PTR_R10_(VALUE) test r15b, byte ptr [r10 + VALUE]
#define TEST_R15B_FROM_PTR_R11_(VALUE) test r15b, byte ptr [r11 + VALUE]
#define TEST_R15B_FROM_PTR_R12_(VALUE) test r15b, byte ptr [r12 + VALUE]
#define TEST_R15B_FROM_PTR_R13_(VALUE) test r15b, byte ptr [r13 + VALUE]
#define TEST_R15B_FROM_PTR_R14_(VALUE) test r15b, byte ptr [r14 + VALUE]
#define TEST_R15B_FROM_PTR_R15_(VALUE) test r15b, byte ptr [r15 + VALUE]
#define TEST_R15B_FROM_PTR_EAX_(VALUE) test r15b, byte ptr [eax + VALUE]
#define TEST_R15B_FROM_PTR_EBX_(VALUE) test r15b, byte ptr [ebx + VALUE]
#define TEST_R15B_FROM_PTR_ECX_(VALUE) test r15b, byte ptr [ecx + VALUE]
#define TEST_R15B_FROM_PTR_EDX_(VALUE) test r15b, byte ptr [edx + VALUE]
#define TEST_R15B_FROM_PTR_EDI_(VALUE) test r15b, byte ptr [edi + VALUE]
#define TEST_R15B_FROM_PTR_ESI_(VALUE) test r15b, byte ptr [esi + VALUE]
#define TEST_R15B_FROM_PTR_EBP_(VALUE) test r15b, byte ptr [ebp + VALUE]
#define TEST_R15B_FROM_PTR_ESP_(VALUE) test r15b, byte ptr [esp + VALUE]

#define TEST_AL_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], al
#define TEST_AL_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], al
#define TEST_AL_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], al
#define TEST_AL_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], al
#define TEST_AL_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], al
#define TEST_AL_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], al
#define TEST_AL_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], al
#define TEST_AL_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], al
#define TEST_AL_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], al
#define TEST_AL_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], al
#define TEST_AL_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], al
#define TEST_AL_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], al
#define TEST_AL_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], al
#define TEST_AL_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], al
#define TEST_AL_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], al
#define TEST_AL_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], al
#define TEST_AL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], al
#define TEST_AL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], al
#define TEST_AL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], al
#define TEST_AL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], al
#define TEST_AL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], al
#define TEST_AL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], al
#define TEST_AL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], al
#define TEST_AL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], al

#define TEST_BL_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], bl
#define TEST_BL_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], bl
#define TEST_BL_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], bl
#define TEST_BL_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], bl
#define TEST_BL_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], bl
#define TEST_BL_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], bl
#define TEST_BL_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], bl
#define TEST_BL_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], bl
#define TEST_BL_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], bl
#define TEST_BL_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], bl
#define TEST_BL_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], bl
#define TEST_BL_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], bl
#define TEST_BL_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], bl
#define TEST_BL_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], bl
#define TEST_BL_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], bl
#define TEST_BL_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], bl
#define TEST_BL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], bl
#define TEST_BL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], bl
#define TEST_BL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], bl
#define TEST_BL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], bl
#define TEST_BL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], bl
#define TEST_BL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], bl
#define TEST_BL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], bl
#define TEST_BL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], bl

#define TEST_CL_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], cl
#define TEST_CL_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], cl
#define TEST_CL_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], cl
#define TEST_CL_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], cl
#define TEST_CL_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], cl
#define TEST_CL_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], cl
#define TEST_CL_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], cl
#define TEST_CL_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], cl
#define TEST_CL_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], cl
#define TEST_CL_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], cl
#define TEST_CL_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], cl
#define TEST_CL_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], cl
#define TEST_CL_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], cl
#define TEST_CL_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], cl
#define TEST_CL_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], cl
#define TEST_CL_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], cl
#define TEST_CL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], cl
#define TEST_CL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], cl
#define TEST_CL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], cl
#define TEST_CL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], cl
#define TEST_CL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], cl
#define TEST_CL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], cl
#define TEST_CL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], cl
#define TEST_CL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], cl

#define TEST_DL_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], dl
#define TEST_DL_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], dl
#define TEST_DL_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], dl
#define TEST_DL_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], dl
#define TEST_DL_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], dl
#define TEST_DL_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], dl
#define TEST_DL_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], dl
#define TEST_DL_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], dl
#define TEST_DL_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], dl
#define TEST_DL_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], dl
#define TEST_DL_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], dl
#define TEST_DL_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], dl
#define TEST_DL_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], dl
#define TEST_DL_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], dl
#define TEST_DL_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], dl
#define TEST_DL_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], dl
#define TEST_DL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], dl
#define TEST_DL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], dl
#define TEST_DL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], dl
#define TEST_DL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], dl
#define TEST_DL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], dl
#define TEST_DL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], dl
#define TEST_DL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], dl
#define TEST_DL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], dl

#define TEST_DIL_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], dil
#define TEST_DIL_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], dil
#define TEST_DIL_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], dil
#define TEST_DIL_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], dil
#define TEST_DIL_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], dil
#define TEST_DIL_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], dil
#define TEST_DIL_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], dil
#define TEST_DIL_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], dil
#define TEST_DIL_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], dil
#define TEST_DIL_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], dil
#define TEST_DIL_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], dil
#define TEST_DIL_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], dil
#define TEST_DIL_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], dil
#define TEST_DIL_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], dil
#define TEST_DIL_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], dil
#define TEST_DIL_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], dil
#define TEST_DIL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], dil
#define TEST_DIL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], dil
#define TEST_DIL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], dil
#define TEST_DIL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], dil
#define TEST_DIL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], dil
#define TEST_DIL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], dil
#define TEST_DIL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], dil
#define TEST_DIL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], dil

#define TEST_SIL_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], sil
#define TEST_SIL_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], sil
#define TEST_SIL_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], sil
#define TEST_SIL_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], sil
#define TEST_SIL_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], sil
#define TEST_SIL_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], sil
#define TEST_SIL_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], sil
#define TEST_SIL_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], sil
#define TEST_SIL_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], sil
#define TEST_SIL_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], sil
#define TEST_SIL_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], sil
#define TEST_SIL_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], sil
#define TEST_SIL_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], sil
#define TEST_SIL_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], sil
#define TEST_SIL_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], sil
#define TEST_SIL_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], sil
#define TEST_SIL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], sil
#define TEST_SIL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], sil
#define TEST_SIL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], sil
#define TEST_SIL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], sil
#define TEST_SIL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], sil
#define TEST_SIL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], sil
#define TEST_SIL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], sil
#define TEST_SIL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], sil

#define TEST_BPL_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], bpl
#define TEST_BPL_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], bpl
#define TEST_BPL_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], bpl
#define TEST_BPL_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], bpl
#define TEST_BPL_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], bpl
#define TEST_BPL_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], bpl
#define TEST_BPL_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], bpl
#define TEST_BPL_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], bpl
#define TEST_BPL_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], bpl
#define TEST_BPL_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], bpl
#define TEST_BPL_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], bpl
#define TEST_BPL_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], bpl
#define TEST_BPL_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], bpl
#define TEST_BPL_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], bpl
#define TEST_BPL_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], bpl
#define TEST_BPL_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], bpl
#define TEST_BPL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], bpl
#define TEST_BPL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], bpl
#define TEST_BPL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], bpl
#define TEST_BPL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], bpl
#define TEST_BPL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], bpl
#define TEST_BPL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], bpl
#define TEST_BPL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], bpl
#define TEST_BPL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], bpl

#define TEST_SPL_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], spl
#define TEST_SPL_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], spl
#define TEST_SPL_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], spl
#define TEST_SPL_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], spl
#define TEST_SPL_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], spl
#define TEST_SPL_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], spl
#define TEST_SPL_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], spl
#define TEST_SPL_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], spl
#define TEST_SPL_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], spl
#define TEST_SPL_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], spl
#define TEST_SPL_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], spl
#define TEST_SPL_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], spl
#define TEST_SPL_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], spl
#define TEST_SPL_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], spl
#define TEST_SPL_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], spl
#define TEST_SPL_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], spl
#define TEST_SPL_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], spl
#define TEST_SPL_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], spl
#define TEST_SPL_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], spl
#define TEST_SPL_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], spl
#define TEST_SPL_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], spl
#define TEST_SPL_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], spl
#define TEST_SPL_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], spl
#define TEST_SPL_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], spl

#define TEST_R8B_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], r8b
#define TEST_R8B_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], r8b
#define TEST_R8B_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], r8b
#define TEST_R8B_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], r8b
#define TEST_R8B_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], r8b
#define TEST_R8B_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], r8b
#define TEST_R8B_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], r8b
#define TEST_R8B_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], r8b
#define TEST_R8B_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], r8b
#define TEST_R8B_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], r8b
#define TEST_R8B_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], r8b
#define TEST_R8B_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], r8b
#define TEST_R8B_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], r8b
#define TEST_R8B_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], r8b
#define TEST_R8B_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], r8b
#define TEST_R8B_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], r8b
#define TEST_R8B_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], r8b
#define TEST_R8B_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], r8b
#define TEST_R8B_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], r8b
#define TEST_R8B_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], r8b
#define TEST_R8B_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], r8b
#define TEST_R8B_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], r8b
#define TEST_R8B_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], r8b
#define TEST_R8B_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], r8b

#define TEST_R9B_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], r9b
#define TEST_R9B_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], r9b
#define TEST_R9B_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], r9b
#define TEST_R9B_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], r9b
#define TEST_R9B_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], r9b
#define TEST_R9B_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], r9b
#define TEST_R9B_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], r9b
#define TEST_R9B_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], r9b
#define TEST_R9B_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], r9b
#define TEST_R9B_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], r9b
#define TEST_R9B_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], r9b
#define TEST_R9B_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], r9b
#define TEST_R9B_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], r9b
#define TEST_R9B_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], r9b
#define TEST_R9B_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], r9b
#define TEST_R9B_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], r9b
#define TEST_R9B_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], r9b
#define TEST_R9B_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], r9b
#define TEST_R9B_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], r9b
#define TEST_R9B_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], r9b
#define TEST_R9B_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], r9b
#define TEST_R9B_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], r9b
#define TEST_R9B_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], r9b
#define TEST_R9B_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], r9b

#define TEST_R10B_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], r10b
#define TEST_R10B_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], r10b
#define TEST_R10B_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], r10b
#define TEST_R10B_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], r10b
#define TEST_R10B_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], r10b
#define TEST_R10B_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], r10b
#define TEST_R10B_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], r10b
#define TEST_R10B_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], r10b
#define TEST_R10B_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], r10b
#define TEST_R10B_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], r10b
#define TEST_R10B_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], r10b
#define TEST_R10B_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], r10b
#define TEST_R10B_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], r10b
#define TEST_R10B_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], r10b
#define TEST_R10B_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], r10b
#define TEST_R10B_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], r10b
#define TEST_R10B_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], r10b
#define TEST_R10B_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], r10b
#define TEST_R10B_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], r10b
#define TEST_R10B_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], r10b
#define TEST_R10B_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], r10b
#define TEST_R10B_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], r10b
#define TEST_R10B_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], r10b
#define TEST_R10B_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], r10b

#define TEST_R11B_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], r11b
#define TEST_R11B_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], r11b
#define TEST_R11B_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], r11b
#define TEST_R11B_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], r11b
#define TEST_R11B_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], r11b
#define TEST_R11B_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], r11b
#define TEST_R11B_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], r11b
#define TEST_R11B_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], r11b
#define TEST_R11B_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], r11b
#define TEST_R11B_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], r11b
#define TEST_R11B_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], r11b
#define TEST_R11B_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], r11b
#define TEST_R11B_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], r11b
#define TEST_R11B_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], r11b
#define TEST_R11B_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], r11b
#define TEST_R11B_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], r11b
#define TEST_R11B_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], r11b
#define TEST_R11B_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], r11b
#define TEST_R11B_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], r11b
#define TEST_R11B_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], r11b
#define TEST_R11B_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], r11b
#define TEST_R11B_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], r11b
#define TEST_R11B_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], r11b
#define TEST_R11B_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], r11b

#define TEST_R12B_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], r12b
#define TEST_R12B_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], r12b
#define TEST_R12B_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], r12b
#define TEST_R12B_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], r12b
#define TEST_R12B_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], r12b
#define TEST_R12B_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], r12b
#define TEST_R12B_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], r12b
#define TEST_R12B_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], r12b
#define TEST_R12B_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], r12b
#define TEST_R12B_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], r12b
#define TEST_R12B_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], r12b
#define TEST_R12B_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], r12b
#define TEST_R12B_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], r12b
#define TEST_R12B_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], r12b
#define TEST_R12B_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], r12b
#define TEST_R12B_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], r12b
#define TEST_R12B_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], r12b
#define TEST_R12B_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], r12b
#define TEST_R12B_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], r12b
#define TEST_R12B_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], r12b
#define TEST_R12B_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], r12b
#define TEST_R12B_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], r12b
#define TEST_R12B_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], r12b
#define TEST_R12B_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], r12b

#define TEST_R13B_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], r13b
#define TEST_R13B_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], r13b
#define TEST_R13B_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], r13b
#define TEST_R13B_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], r13b
#define TEST_R13B_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], r13b
#define TEST_R13B_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], r13b
#define TEST_R13B_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], r13b
#define TEST_R13B_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], r13b
#define TEST_R13B_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], r13b
#define TEST_R13B_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], r13b
#define TEST_R13B_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], r13b
#define TEST_R13B_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], r13b
#define TEST_R13B_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], r13b
#define TEST_R13B_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], r13b
#define TEST_R13B_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], r13b
#define TEST_R13B_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], r13b
#define TEST_R13B_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], r13b
#define TEST_R13B_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], r13b
#define TEST_R13B_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], r13b
#define TEST_R13B_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], r13b
#define TEST_R13B_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], r13b
#define TEST_R13B_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], r13b
#define TEST_R13B_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], r13b
#define TEST_R13B_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], r13b

#define TEST_R14B_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], r14b
#define TEST_R14B_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], r14b
#define TEST_R14B_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], r14b
#define TEST_R14B_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], r14b
#define TEST_R14B_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], r14b
#define TEST_R14B_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], r14b
#define TEST_R14B_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], r14b
#define TEST_R14B_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], r14b
#define TEST_R14B_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], r14b
#define TEST_R14B_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], r14b
#define TEST_R14B_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], r14b
#define TEST_R14B_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], r14b
#define TEST_R14B_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], r14b
#define TEST_R14B_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], r14b
#define TEST_R14B_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], r14b
#define TEST_R14B_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], r14b
#define TEST_R14B_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], r14b
#define TEST_R14B_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], r14b
#define TEST_R14B_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], r14b
#define TEST_R14B_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], r14b
#define TEST_R14B_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], r14b
#define TEST_R14B_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], r14b
#define TEST_R14B_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], r14b
#define TEST_R14B_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], r14b

#define TEST_R15B_TO_PTR_RAX_(VALUE) test byte ptr [rax + VALUE], r15b
#define TEST_R15B_TO_PTR_RBX_(VALUE) test byte ptr [rbx + VALUE], r15b
#define TEST_R15B_TO_PTR_RCX_(VALUE) test byte ptr [rcx + VALUE], r15b
#define TEST_R15B_TO_PTR_RDX_(VALUE) test byte ptr [rdx + VALUE], r15b
#define TEST_R15B_TO_PTR_RDI_(VALUE) test byte ptr [rdi + VALUE], r15b
#define TEST_R15B_TO_PTR_RSI_(VALUE) test byte ptr [rsi + VALUE], r15b
#define TEST_R15B_TO_PTR_RBP_(VALUE) test byte ptr [rbp + VALUE], r15b
#define TEST_R15B_TO_PTR_RSP_(VALUE) test byte ptr [rsp + VALUE], r15b
#define TEST_R15B_TO_PTR_R8_(VALUE) test byte ptr [r8 + VALUE], r15b
#define TEST_R15B_TO_PTR_R9_(VALUE) test byte ptr [r9 + VALUE], r15b
#define TEST_R15B_TO_PTR_R10_(VALUE) test byte ptr [r10 + VALUE], r15b
#define TEST_R15B_TO_PTR_R11_(VALUE) test byte ptr [r11 + VALUE], r15b
#define TEST_R15B_TO_PTR_R12_(VALUE) test byte ptr [r12 + VALUE], r15b
#define TEST_R15B_TO_PTR_R13_(VALUE) test byte ptr [r13 + VALUE], r15b
#define TEST_R15B_TO_PTR_R14_(VALUE) test byte ptr [r14 + VALUE], r15b
#define TEST_R15B_TO_PTR_R15_(VALUE) test byte ptr [r15 + VALUE], r15b
#define TEST_R15B_TO_PTR_EAX_(VALUE) test byte ptr [eax + VALUE], r15b
#define TEST_R15B_TO_PTR_EBX_(VALUE) test byte ptr [ebx + VALUE], r15b
#define TEST_R15B_TO_PTR_ECX_(VALUE) test byte ptr [ecx + VALUE], r15b
#define TEST_R15B_TO_PTR_EDX_(VALUE) test byte ptr [edx + VALUE], r15b
#define TEST_R15B_TO_PTR_EDI_(VALUE) test byte ptr [edi + VALUE], r15b
#define TEST_R15B_TO_PTR_ESI_(VALUE) test byte ptr [esi + VALUE], r15b
#define TEST_R15B_TO_PTR_EBP_(VALUE) test byte ptr [ebp + VALUE], r15b
#define TEST_R15B_TO_PTR_ESP_(VALUE) test byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define TEST_AX_FROM_PTR_(VALUE) test ax, word ptr [VALUE]
#define TEST_BX_FROM_PTR_(VALUE) test bx, word ptr [VALUE]
#define TEST_CX_FROM_PTR_(VALUE) test cx, word ptr [VALUE]
#define TEST_DX_FROM_PTR_(VALUE) test dx, word ptr [VALUE]
#define TEST_DI_FROM_PTR_(VALUE) test di, word ptr [VALUE]
#define TEST_SI_FROM_PTR_(VALUE) test si, word ptr [VALUE]
#define TEST_BP_FROM_PTR_(VALUE) test bp, word ptr [VALUE]
#define TEST_SP_FROM_PTR_(VALUE) test sp, word ptr [VALUE]

#define TEST_AX_TO_PTR_(VALUE) test word ptr [VALUE], ax
#define TEST_BX_TO_PTR_(VALUE) test word ptr [VALUE], bx
#define TEST_CX_TO_PTR_(VALUE) test word ptr [VALUE], cx
#define TEST_DX_TO_PTR_(VALUE) test word ptr [VALUE], dx
#define TEST_DI_TO_PTR_(VALUE) test word ptr [VALUE], di
#define TEST_SI_TO_PTR_(VALUE) test word ptr [VALUE], si
#define TEST_BP_TO_PTR_(VALUE) test word ptr [VALUE], bp
#define TEST_SP_TO_PTR_(VALUE) test word ptr [VALUE], sp

#define TEST_AX_FROM_PTR_BX test ax, word ptr [bx]
#define TEST_AX_FROM_PTR_BP test ax, word ptr [bp]
#define TEST_AX_FROM_PTR_SI test ax, word ptr [si]
#define TEST_AX_FROM_PTR_DI test ax, word ptr [di]

#define TEST_BX_FROM_PTR_BX test bx, word ptr [bx]
#define TEST_BX_FROM_PTR_BP test bx, word ptr [bp]
#define TEST_BX_FROM_PTR_SI test bx, word ptr [si]
#define TEST_BX_FROM_PTR_DI test bx, word ptr [di]

#define TEST_CX_FROM_PTR_BX test cx, word ptr [bx]
#define TEST_CX_FROM_PTR_BP test cx, word ptr [bp]
#define TEST_CX_FROM_PTR_SI test cx, word ptr [si]
#define TEST_CX_FROM_PTR_DI test cx, word ptr [di]

#define TEST_DX_FROM_PTR_BX test dx, word ptr [bx]
#define TEST_DX_FROM_PTR_BP test dx, word ptr [bp]
#define TEST_DX_FROM_PTR_SI test dx, word ptr [si]
#define TEST_DX_FROM_PTR_DI test dx, word ptr [di]

#define TEST_DI_FROM_PTR_BX test di, word ptr [bx]
#define TEST_DI_FROM_PTR_BP test di, word ptr [bp]
#define TEST_DI_FROM_PTR_SI test di, word ptr [si]
#define TEST_DI_FROM_PTR_DI test di, word ptr [di]

#define TEST_SI_FROM_PTR_BX test si, word ptr [bx]
#define TEST_SI_FROM_PTR_BP test si, word ptr [bp]
#define TEST_SI_FROM_PTR_SI test si, word ptr [si]
#define TEST_SI_FROM_PTR_DI test si, word ptr [di]

#define TEST_BP_FROM_PTR_BX test bp, word ptr [bx]
#define TEST_BP_FROM_PTR_BP test bp, word ptr [bp]
#define TEST_BP_FROM_PTR_SI test bp, word ptr [si]
#define TEST_BP_FROM_PTR_DI test bp, word ptr [di]

#define TEST_SP_FROM_PTR_BX test sp, word ptr [bx]
#define TEST_SP_FROM_PTR_BP test sp, word ptr [bp]
#define TEST_SP_FROM_PTR_SI test sp, word ptr [si]
#define TEST_SP_FROM_PTR_DI test sp, word ptr [di]

#define TEST_AX_TO_PTR_BX test word ptr [bx], ax
#define TEST_AX_TO_PTR_BP test word ptr [bp], ax
#define TEST_AX_TO_PTR_SI test word ptr [si], ax
#define TEST_AX_TO_PTR_DI test word ptr [di], ax

#define TEST_BX_TO_PTR_BX test word ptr [bx], bx
#define TEST_BX_TO_PTR_BP test word ptr [bp], bx
#define TEST_BX_TO_PTR_SI test word ptr [si], bx
#define TEST_BX_TO_PTR_DI test word ptr [di], bx

#define TEST_CX_TO_PTR_BX test word ptr [bx], cx
#define TEST_CX_TO_PTR_BP test word ptr [bp], cx
#define TEST_CX_TO_PTR_SI test word ptr [si], cx
#define TEST_CX_TO_PTR_DI test word ptr [di], cx

#define TEST_DX_TO_PTR_BX test word ptr [bx], dx
#define TEST_DX_TO_PTR_BP test word ptr [bp], dx
#define TEST_DX_TO_PTR_SI test word ptr [si], dx
#define TEST_DX_TO_PTR_DI test word ptr [di], dx

#define TEST_DI_TO_PTR_BX test word ptr [bx], di
#define TEST_DI_TO_PTR_BP test word ptr [bp], di
#define TEST_DI_TO_PTR_SI test word ptr [si], di
#define TEST_DI_TO_PTR_DI test word ptr [di], di

#define TEST_SI_TO_PTR_BX test word ptr [bx], si
#define TEST_SI_TO_PTR_BP test word ptr [bp], si
#define TEST_SI_TO_PTR_SI test word ptr [si], si
#define TEST_SI_TO_PTR_DI test word ptr [di], si

#define TEST_BP_TO_PTR_BX test word ptr [bx], bp
#define TEST_BP_TO_PTR_BP test word ptr [bp], bp
#define TEST_BP_TO_PTR_SI test word ptr [si], bp
#define TEST_BP_TO_PTR_DI test word ptr [di], bp

#define TEST_SP_TO_PTR_BX test word ptr [bx], sp
#define TEST_SP_TO_PTR_BP test word ptr [bp], sp
#define TEST_SP_TO_PTR_SI test word ptr [si], sp
#define TEST_SP_TO_PTR_DI test word ptr [di], sp

#define TEST_AX_FROM_PTR_BX_(VALUE) test ax, word ptr [bx + VALUE]
#define TEST_AX_FROM_PTR_BP_(VALUE) test ax, word ptr [bp + VALUE]
#define TEST_AX_FROM_PTR_SI_(VALUE) test ax, word ptr [si + VALUE]
#define TEST_AX_FROM_PTR_DI_(VALUE) test ax, word ptr [di + VALUE]

#define TEST_BX_FROM_PTR_BX_(VALUE) test bx, word ptr [bx + VALUE]
#define TEST_BX_FROM_PTR_BP_(VALUE) test bx, word ptr [bp + VALUE]
#define TEST_BX_FROM_PTR_SI_(VALUE) test bx, word ptr [si + VALUE]
#define TEST_BX_FROM_PTR_DI_(VALUE) test bx, word ptr [di + VALUE]

#define TEST_CX_FROM_PTR_BX_(VALUE) test cx, word ptr [bx + VALUE]
#define TEST_CX_FROM_PTR_BP_(VALUE) test cx, word ptr [bp + VALUE]
#define TEST_CX_FROM_PTR_SI_(VALUE) test cx, word ptr [si + VALUE]
#define TEST_CX_FROM_PTR_DI_(VALUE) test cx, word ptr [di + VALUE]

#define TEST_DX_FROM_PTR_BX_(VALUE) test dx, word ptr [bx + VALUE]
#define TEST_DX_FROM_PTR_BP_(VALUE) test dx, word ptr [bp + VALUE]
#define TEST_DX_FROM_PTR_SI_(VALUE) test dx, word ptr [si + VALUE]
#define TEST_DX_FROM_PTR_DI_(VALUE) test dx, word ptr [di + VALUE]

#define TEST_DI_FROM_PTR_BX_(VALUE) test di, word ptr [bx + VALUE]
#define TEST_DI_FROM_PTR_BP_(VALUE) test di, word ptr [bp + VALUE]
#define TEST_DI_FROM_PTR_SI_(VALUE) test di, word ptr [si + VALUE]
#define TEST_DI_FROM_PTR_DI_(VALUE) test di, word ptr [di + VALUE]

#define TEST_SI_FROM_PTR_BX_(VALUE) test si, word ptr [bx + VALUE]
#define TEST_SI_FROM_PTR_BP_(VALUE) test si, word ptr [bp + VALUE]
#define TEST_SI_FROM_PTR_SI_(VALUE) test si, word ptr [si + VALUE]
#define TEST_SI_FROM_PTR_DI_(VALUE) test si, word ptr [di + VALUE]

#define TEST_BP_FROM_PTR_BX_(VALUE) test bp, word ptr [bx + VALUE]
#define TEST_BP_FROM_PTR_BP_(VALUE) test bp, word ptr [bp + VALUE]
#define TEST_BP_FROM_PTR_SI_(VALUE) test bp, word ptr [si + VALUE]
#define TEST_BP_FROM_PTR_DI_(VALUE) test bp, word ptr [di + VALUE]

#define TEST_SP_FROM_PTR_BX_(VALUE) test sp, word ptr [bx + VALUE]
#define TEST_SP_FROM_PTR_BP_(VALUE) test sp, word ptr [bp + VALUE]
#define TEST_SP_FROM_PTR_SI_(VALUE) test sp, word ptr [si + VALUE]
#define TEST_SP_FROM_PTR_DI_(VALUE) test sp, word ptr [di + VALUE]

#define TEST_AX_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], ax
#define TEST_AX_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], ax
#define TEST_AX_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], ax
#define TEST_AX_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], ax

#define TEST_BX_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], bx
#define TEST_BX_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], bx
#define TEST_BX_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], bx
#define TEST_BX_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], bx

#define TEST_CX_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], cx
#define TEST_CX_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], cx
#define TEST_CX_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], cx
#define TEST_CX_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], cx

#define TEST_DX_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], dx
#define TEST_DX_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], dx
#define TEST_DX_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], dx
#define TEST_DX_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], dx

#define TEST_DI_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], di
#define TEST_DI_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], di
#define TEST_DI_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], di
#define TEST_DI_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], di

#define TEST_SI_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], si
#define TEST_SI_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], si
#define TEST_SI_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], si
#define TEST_SI_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], si

#define TEST_BP_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], bp
#define TEST_BP_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], bp
#define TEST_BP_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], bp
#define TEST_BP_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], bp

#define TEST_SP_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], sp
#define TEST_SP_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], sp
#define TEST_SP_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], sp
#define TEST_SP_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define TEST_AX_FROM_PTR_(VALUE) test ax, word ptr [VALUE]
#define TEST_BX_FROM_PTR_(VALUE) test bx, word ptr [VALUE]
#define TEST_CX_FROM_PTR_(VALUE) test cx, word ptr [VALUE]
#define TEST_DX_FROM_PTR_(VALUE) test dx, word ptr [VALUE]
#define TEST_DI_FROM_PTR_(VALUE) test di, word ptr [VALUE]
#define TEST_SI_FROM_PTR_(VALUE) test si, word ptr [VALUE]
#define TEST_BP_FROM_PTR_(VALUE) test bp, word ptr [VALUE]
#define TEST_SP_FROM_PTR_(VALUE) test sp, word ptr [VALUE]

#define TEST_AX_TO_PTR_(VALUE) test word ptr [VALUE], ax
#define TEST_BX_TO_PTR_(VALUE) test word ptr [VALUE], bx
#define TEST_CX_TO_PTR_(VALUE) test word ptr [VALUE], cx
#define TEST_DX_TO_PTR_(VALUE) test word ptr [VALUE], dx
#define TEST_DI_TO_PTR_(VALUE) test word ptr [VALUE], di
#define TEST_SI_TO_PTR_(VALUE) test word ptr [VALUE], si
#define TEST_BP_TO_PTR_(VALUE) test word ptr [VALUE], bp
#define TEST_SP_TO_PTR_(VALUE) test word ptr [VALUE], sp

#define TEST_AX_FROM_PTR_EAX test ax, word ptr [eax]
#define TEST_AX_FROM_PTR_EBX test ax, word ptr [ebx]
#define TEST_AX_FROM_PTR_ECX test ax, word ptr [ecx]
#define TEST_AX_FROM_PTR_EDX test ax, word ptr [edx]
#define TEST_AX_FROM_PTR_EDI test ax, word ptr [edi]
#define TEST_AX_FROM_PTR_ESI test ax, word ptr [esi]
#define TEST_AX_FROM_PTR_EBP test ax, word ptr [ebp]
#define TEST_AX_FROM_PTR_ESP test ax, word ptr [esp]
#define TEST_AX_FROM_PTR_BX test ax, word ptr [bx]
#define TEST_AX_FROM_PTR_BP test ax, word ptr [bp]
#define TEST_AX_FROM_PTR_SI test ax, word ptr [si]
#define TEST_AX_FROM_PTR_DI test ax, word ptr [di]

#define TEST_BX_FROM_PTR_EAX test bx, word ptr [eax]
#define TEST_BX_FROM_PTR_EBX test bx, word ptr [ebx]
#define TEST_BX_FROM_PTR_ECX test bx, word ptr [ecx]
#define TEST_BX_FROM_PTR_EDX test bx, word ptr [edx]
#define TEST_BX_FROM_PTR_EDI test bx, word ptr [edi]
#define TEST_BX_FROM_PTR_ESI test bx, word ptr [esi]
#define TEST_BX_FROM_PTR_EBP test bx, word ptr [ebp]
#define TEST_BX_FROM_PTR_ESP test bx, word ptr [esp]
#define TEST_BX_FROM_PTR_BX test bx, word ptr [bx]
#define TEST_BX_FROM_PTR_BP test bx, word ptr [bp]
#define TEST_BX_FROM_PTR_SI test bx, word ptr [si]
#define TEST_BX_FROM_PTR_DI test bx, word ptr [di]

#define TEST_CX_FROM_PTR_EAX test cx, word ptr [eax]
#define TEST_CX_FROM_PTR_EBX test cx, word ptr [ebx]
#define TEST_CX_FROM_PTR_ECX test cx, word ptr [ecx]
#define TEST_CX_FROM_PTR_EDX test cx, word ptr [edx]
#define TEST_CX_FROM_PTR_EDI test cx, word ptr [edi]
#define TEST_CX_FROM_PTR_ESI test cx, word ptr [esi]
#define TEST_CX_FROM_PTR_EBP test cx, word ptr [ebp]
#define TEST_CX_FROM_PTR_ESP test cx, word ptr [esp]
#define TEST_CX_FROM_PTR_BX test cx, word ptr [bx]
#define TEST_CX_FROM_PTR_BP test cx, word ptr [bp]
#define TEST_CX_FROM_PTR_SI test cx, word ptr [si]
#define TEST_CX_FROM_PTR_DI test cx, word ptr [di]

#define TEST_DX_FROM_PTR_EAX test dx, word ptr [eax]
#define TEST_DX_FROM_PTR_EBX test dx, word ptr [ebx]
#define TEST_DX_FROM_PTR_ECX test dx, word ptr [ecx]
#define TEST_DX_FROM_PTR_EDX test dx, word ptr [edx]
#define TEST_DX_FROM_PTR_EDI test dx, word ptr [edi]
#define TEST_DX_FROM_PTR_ESI test dx, word ptr [esi]
#define TEST_DX_FROM_PTR_EBP test dx, word ptr [ebp]
#define TEST_DX_FROM_PTR_ESP test dx, word ptr [esp]
#define TEST_DX_FROM_PTR_BX test dx, word ptr [bx]
#define TEST_DX_FROM_PTR_BP test dx, word ptr [bp]
#define TEST_DX_FROM_PTR_SI test dx, word ptr [si]
#define TEST_DX_FROM_PTR_DI test dx, word ptr [di]

#define TEST_DI_FROM_PTR_EAX test di, word ptr [eax]
#define TEST_DI_FROM_PTR_EBX test di, word ptr [ebx]
#define TEST_DI_FROM_PTR_ECX test di, word ptr [ecx]
#define TEST_DI_FROM_PTR_EDX test di, word ptr [edx]
#define TEST_DI_FROM_PTR_EDI test di, word ptr [edi]
#define TEST_DI_FROM_PTR_ESI test di, word ptr [esi]
#define TEST_DI_FROM_PTR_EBP test di, word ptr [ebp]
#define TEST_DI_FROM_PTR_ESP test di, word ptr [esp]
#define TEST_DI_FROM_PTR_BX test di, word ptr [bx]
#define TEST_DI_FROM_PTR_BP test di, word ptr [bp]
#define TEST_DI_FROM_PTR_SI test di, word ptr [si]
#define TEST_DI_FROM_PTR_DI test di, word ptr [di]

#define TEST_SI_FROM_PTR_EAX test si, word ptr [eax]
#define TEST_SI_FROM_PTR_EBX test si, word ptr [ebx]
#define TEST_SI_FROM_PTR_ECX test si, word ptr [ecx]
#define TEST_SI_FROM_PTR_EDX test si, word ptr [edx]
#define TEST_SI_FROM_PTR_EDI test si, word ptr [edi]
#define TEST_SI_FROM_PTR_ESI test si, word ptr [esi]
#define TEST_SI_FROM_PTR_EBP test si, word ptr [ebp]
#define TEST_SI_FROM_PTR_ESP test si, word ptr [esp]
#define TEST_SI_FROM_PTR_BX test si, word ptr [bx]
#define TEST_SI_FROM_PTR_BP test si, word ptr [bp]
#define TEST_SI_FROM_PTR_SI test si, word ptr [si]
#define TEST_SI_FROM_PTR_DI test si, word ptr [di]

#define TEST_BP_FROM_PTR_EAX test bp, word ptr [eax]
#define TEST_BP_FROM_PTR_EBX test bp, word ptr [ebx]
#define TEST_BP_FROM_PTR_ECX test bp, word ptr [ecx]
#define TEST_BP_FROM_PTR_EDX test bp, word ptr [edx]
#define TEST_BP_FROM_PTR_EDI test bp, word ptr [edi]
#define TEST_BP_FROM_PTR_ESI test bp, word ptr [esi]
#define TEST_BP_FROM_PTR_EBP test bp, word ptr [ebp]
#define TEST_BP_FROM_PTR_ESP test bp, word ptr [esp]
#define TEST_BP_FROM_PTR_BX test bp, word ptr [bx]
#define TEST_BP_FROM_PTR_BP test bp, word ptr [bp]
#define TEST_BP_FROM_PTR_SI test bp, word ptr [si]
#define TEST_BP_FROM_PTR_DI test bp, word ptr [di]

#define TEST_SP_FROM_PTR_EAX test sp, word ptr [eax]
#define TEST_SP_FROM_PTR_EBX test sp, word ptr [ebx]
#define TEST_SP_FROM_PTR_ECX test sp, word ptr [ecx]
#define TEST_SP_FROM_PTR_EDX test sp, word ptr [edx]
#define TEST_SP_FROM_PTR_EDI test sp, word ptr [edi]
#define TEST_SP_FROM_PTR_ESI test sp, word ptr [esi]
#define TEST_SP_FROM_PTR_EBP test sp, word ptr [ebp]
#define TEST_SP_FROM_PTR_ESP test sp, word ptr [esp]
#define TEST_SP_FROM_PTR_BX test sp, word ptr [bx]
#define TEST_SP_FROM_PTR_BP test sp, word ptr [bp]
#define TEST_SP_FROM_PTR_SI test sp, word ptr [si]
#define TEST_SP_FROM_PTR_DI test sp, word ptr [di]

#define TEST_AX_TO_PTR_EAX test word ptr [eax], ax
#define TEST_AX_TO_PTR_EBX test word ptr [ebx], ax
#define TEST_AX_TO_PTR_ECX test word ptr [ecx], ax
#define TEST_AX_TO_PTR_EDX test word ptr [edx], ax
#define TEST_AX_TO_PTR_EDI test word ptr [edi], ax
#define TEST_AX_TO_PTR_ESI test word ptr [esi], ax
#define TEST_AX_TO_PTR_EBP test word ptr [ebp], ax
#define TEST_AX_TO_PTR_ESP test word ptr [esp], ax
#define TEST_AX_TO_PTR_BX test word ptr [bx], ax
#define TEST_AX_TO_PTR_BP test word ptr [bp], ax
#define TEST_AX_TO_PTR_SI test word ptr [si], ax
#define TEST_AX_TO_PTR_DI test word ptr [di], ax

#define TEST_BX_TO_PTR_EAX test word ptr [eax], bx
#define TEST_BX_TO_PTR_EBX test word ptr [ebx], bx
#define TEST_BX_TO_PTR_ECX test word ptr [ecx], bx
#define TEST_BX_TO_PTR_EDX test word ptr [edx], bx
#define TEST_BX_TO_PTR_EDI test word ptr [edi], bx
#define TEST_BX_TO_PTR_ESI test word ptr [esi], bx
#define TEST_BX_TO_PTR_EBP test word ptr [ebp], bx
#define TEST_BX_TO_PTR_ESP test word ptr [esp], bx
#define TEST_BX_TO_PTR_BX test word ptr [bx], bx
#define TEST_BX_TO_PTR_BP test word ptr [bp], bx
#define TEST_BX_TO_PTR_SI test word ptr [si], bx
#define TEST_BX_TO_PTR_DI test word ptr [di], bx

#define TEST_CX_TO_PTR_EAX test word ptr [eax], cx
#define TEST_CX_TO_PTR_EBX test word ptr [ebx], cx
#define TEST_CX_TO_PTR_ECX test word ptr [ecx], cx
#define TEST_CX_TO_PTR_EDX test word ptr [edx], cx
#define TEST_CX_TO_PTR_EDI test word ptr [edi], cx
#define TEST_CX_TO_PTR_ESI test word ptr [esi], cx
#define TEST_CX_TO_PTR_EBP test word ptr [ebp], cx
#define TEST_CX_TO_PTR_ESP test word ptr [esp], cx
#define TEST_CX_TO_PTR_BX test word ptr [bx], cx
#define TEST_CX_TO_PTR_BP test word ptr [bp], cx
#define TEST_CX_TO_PTR_SI test word ptr [si], cx
#define TEST_CX_TO_PTR_DI test word ptr [di], cx

#define TEST_DX_TO_PTR_EAX test word ptr [eax], dx
#define TEST_DX_TO_PTR_EBX test word ptr [ebx], dx
#define TEST_DX_TO_PTR_ECX test word ptr [ecx], dx
#define TEST_DX_TO_PTR_EDX test word ptr [edx], dx
#define TEST_DX_TO_PTR_EDI test word ptr [edi], dx
#define TEST_DX_TO_PTR_ESI test word ptr [esi], dx
#define TEST_DX_TO_PTR_EBP test word ptr [ebp], dx
#define TEST_DX_TO_PTR_ESP test word ptr [esp], dx
#define TEST_DX_TO_PTR_BX test word ptr [bx], dx
#define TEST_DX_TO_PTR_BP test word ptr [bp], dx
#define TEST_DX_TO_PTR_SI test word ptr [si], dx
#define TEST_DX_TO_PTR_DI test word ptr [di], dx

#define TEST_DI_TO_PTR_EAX test word ptr [eax], di
#define TEST_DI_TO_PTR_EBX test word ptr [ebx], di
#define TEST_DI_TO_PTR_ECX test word ptr [ecx], di
#define TEST_DI_TO_PTR_EDX test word ptr [edx], di
#define TEST_DI_TO_PTR_EDI test word ptr [edi], di
#define TEST_DI_TO_PTR_ESI test word ptr [esi], di
#define TEST_DI_TO_PTR_EBP test word ptr [ebp], di
#define TEST_DI_TO_PTR_ESP test word ptr [esp], di
#define TEST_DI_TO_PTR_BX test word ptr [bx], di
#define TEST_DI_TO_PTR_BP test word ptr [bp], di
#define TEST_DI_TO_PTR_SI test word ptr [si], di
#define TEST_DI_TO_PTR_DI test word ptr [di], di

#define TEST_SI_TO_PTR_EAX test word ptr [eax], si
#define TEST_SI_TO_PTR_EBX test word ptr [ebx], si
#define TEST_SI_TO_PTR_ECX test word ptr [ecx], si
#define TEST_SI_TO_PTR_EDX test word ptr [edx], si
#define TEST_SI_TO_PTR_EDI test word ptr [edi], si
#define TEST_SI_TO_PTR_ESI test word ptr [esi], si
#define TEST_SI_TO_PTR_EBP test word ptr [ebp], si
#define TEST_SI_TO_PTR_ESP test word ptr [esp], si
#define TEST_SI_TO_PTR_BX test word ptr [bx], si
#define TEST_SI_TO_PTR_BP test word ptr [bp], si
#define TEST_SI_TO_PTR_SI test word ptr [si], si
#define TEST_SI_TO_PTR_DI test word ptr [di], si

#define TEST_BP_TO_PTR_EAX test word ptr [eax], bp
#define TEST_BP_TO_PTR_EBX test word ptr [ebx], bp
#define TEST_BP_TO_PTR_ECX test word ptr [ecx], bp
#define TEST_BP_TO_PTR_EDX test word ptr [edx], bp
#define TEST_BP_TO_PTR_EDI test word ptr [edi], bp
#define TEST_BP_TO_PTR_ESI test word ptr [esi], bp
#define TEST_BP_TO_PTR_EBP test word ptr [ebp], bp
#define TEST_BP_TO_PTR_ESP test word ptr [esp], bp
#define TEST_BP_TO_PTR_BX test word ptr [bx], bp
#define TEST_BP_TO_PTR_BP test word ptr [bp], bp
#define TEST_BP_TO_PTR_SI test word ptr [si], bp
#define TEST_BP_TO_PTR_DI test word ptr [di], bp

#define TEST_SP_TO_PTR_EAX test word ptr [eax], sp
#define TEST_SP_TO_PTR_EBX test word ptr [ebx], sp
#define TEST_SP_TO_PTR_ECX test word ptr [ecx], sp
#define TEST_SP_TO_PTR_EDX test word ptr [edx], sp
#define TEST_SP_TO_PTR_EDI test word ptr [edi], sp
#define TEST_SP_TO_PTR_ESI test word ptr [esi], sp
#define TEST_SP_TO_PTR_EBP test word ptr [ebp], sp
#define TEST_SP_TO_PTR_ESP test word ptr [esp], sp
#define TEST_SP_TO_PTR_BX test word ptr [bx], sp
#define TEST_SP_TO_PTR_BP test word ptr [bp], sp
#define TEST_SP_TO_PTR_SI test word ptr [si], sp
#define TEST_SP_TO_PTR_DI test word ptr [di], sp

#define TEST_AX_FROM_PTR_EAX_(VALUE) test ax, word ptr [eax + VALUE]
#define TEST_AX_FROM_PTR_EBX_(VALUE) test ax, word ptr [ebx + VALUE]
#define TEST_AX_FROM_PTR_ECX_(VALUE) test ax, word ptr [ecx + VALUE]
#define TEST_AX_FROM_PTR_EDX_(VALUE) test ax, word ptr [edx + VALUE]
#define TEST_AX_FROM_PTR_EDI_(VALUE) test ax, word ptr [edi + VALUE]
#define TEST_AX_FROM_PTR_ESI_(VALUE) test ax, word ptr [esi + VALUE]
#define TEST_AX_FROM_PTR_EBP_(VALUE) test ax, word ptr [ebp + VALUE]
#define TEST_AX_FROM_PTR_ESP_(VALUE) test ax, word ptr [esp + VALUE]
#define TEST_AX_FROM_PTR_BX_(VALUE) test ax, word ptr [bx + VALUE]
#define TEST_AX_FROM_PTR_BP_(VALUE) test ax, word ptr [bp + VALUE]
#define TEST_AX_FROM_PTR_SI_(VALUE) test ax, word ptr [si + VALUE]
#define TEST_AX_FROM_PTR_DI_(VALUE) test ax, word ptr [di + VALUE]

#define TEST_BX_FROM_PTR_EAX_(VALUE) test bx, word ptr [eax + VALUE]
#define TEST_BX_FROM_PTR_EBX_(VALUE) test bx, word ptr [ebx + VALUE]
#define TEST_BX_FROM_PTR_ECX_(VALUE) test bx, word ptr [ecx + VALUE]
#define TEST_BX_FROM_PTR_EDX_(VALUE) test bx, word ptr [edx + VALUE]
#define TEST_BX_FROM_PTR_EDI_(VALUE) test bx, word ptr [edi + VALUE]
#define TEST_BX_FROM_PTR_ESI_(VALUE) test bx, word ptr [esi + VALUE]
#define TEST_BX_FROM_PTR_EBP_(VALUE) test bx, word ptr [ebp + VALUE]
#define TEST_BX_FROM_PTR_ESP_(VALUE) test bx, word ptr [esp + VALUE]
#define TEST_BX_FROM_PTR_BX_(VALUE) test bx, word ptr [bx + VALUE]
#define TEST_BX_FROM_PTR_BP_(VALUE) test bx, word ptr [bp + VALUE]
#define TEST_BX_FROM_PTR_SI_(VALUE) test bx, word ptr [si + VALUE]
#define TEST_BX_FROM_PTR_DI_(VALUE) test bx, word ptr [di + VALUE]

#define TEST_CX_FROM_PTR_EAX_(VALUE) test cx, word ptr [eax + VALUE]
#define TEST_CX_FROM_PTR_EBX_(VALUE) test cx, word ptr [ebx + VALUE]
#define TEST_CX_FROM_PTR_ECX_(VALUE) test cx, word ptr [ecx + VALUE]
#define TEST_CX_FROM_PTR_EDX_(VALUE) test cx, word ptr [edx + VALUE]
#define TEST_CX_FROM_PTR_EDI_(VALUE) test cx, word ptr [edi + VALUE]
#define TEST_CX_FROM_PTR_ESI_(VALUE) test cx, word ptr [esi + VALUE]
#define TEST_CX_FROM_PTR_EBP_(VALUE) test cx, word ptr [ebp + VALUE]
#define TEST_CX_FROM_PTR_ESP_(VALUE) test cx, word ptr [esp + VALUE]
#define TEST_CX_FROM_PTR_BX_(VALUE) test cx, word ptr [bx + VALUE]
#define TEST_CX_FROM_PTR_BP_(VALUE) test cx, word ptr [bp + VALUE]
#define TEST_CX_FROM_PTR_SI_(VALUE) test cx, word ptr [si + VALUE]
#define TEST_CX_FROM_PTR_DI_(VALUE) test cx, word ptr [di + VALUE]

#define TEST_DX_FROM_PTR_EAX_(VALUE) test dx, word ptr [eax + VALUE]
#define TEST_DX_FROM_PTR_EBX_(VALUE) test dx, word ptr [ebx + VALUE]
#define TEST_DX_FROM_PTR_ECX_(VALUE) test dx, word ptr [ecx + VALUE]
#define TEST_DX_FROM_PTR_EDX_(VALUE) test dx, word ptr [edx + VALUE]
#define TEST_DX_FROM_PTR_EDI_(VALUE) test dx, word ptr [edi + VALUE]
#define TEST_DX_FROM_PTR_ESI_(VALUE) test dx, word ptr [esi + VALUE]
#define TEST_DX_FROM_PTR_EBP_(VALUE) test dx, word ptr [ebp + VALUE]
#define TEST_DX_FROM_PTR_ESP_(VALUE) test dx, word ptr [esp + VALUE]
#define TEST_DX_FROM_PTR_BX_(VALUE) test dx, word ptr [bx + VALUE]
#define TEST_DX_FROM_PTR_BP_(VALUE) test dx, word ptr [bp + VALUE]
#define TEST_DX_FROM_PTR_SI_(VALUE) test dx, word ptr [si + VALUE]
#define TEST_DX_FROM_PTR_DI_(VALUE) test dx, word ptr [di + VALUE]

#define TEST_DI_FROM_PTR_EAX_(VALUE) test di, word ptr [eax + VALUE]
#define TEST_DI_FROM_PTR_EBX_(VALUE) test di, word ptr [ebx + VALUE]
#define TEST_DI_FROM_PTR_ECX_(VALUE) test di, word ptr [ecx + VALUE]
#define TEST_DI_FROM_PTR_EDX_(VALUE) test di, word ptr [edx + VALUE]
#define TEST_DI_FROM_PTR_EDI_(VALUE) test di, word ptr [edi + VALUE]
#define TEST_DI_FROM_PTR_ESI_(VALUE) test di, word ptr [esi + VALUE]
#define TEST_DI_FROM_PTR_EBP_(VALUE) test di, word ptr [ebp + VALUE]
#define TEST_DI_FROM_PTR_ESP_(VALUE) test di, word ptr [esp + VALUE]
#define TEST_DI_FROM_PTR_BX_(VALUE) test di, word ptr [bx + VALUE]
#define TEST_DI_FROM_PTR_BP_(VALUE) test di, word ptr [bp + VALUE]
#define TEST_DI_FROM_PTR_SI_(VALUE) test di, word ptr [si + VALUE]
#define TEST_DI_FROM_PTR_DI_(VALUE) test di, word ptr [di + VALUE]

#define TEST_SI_FROM_PTR_EAX_(VALUE) test si, word ptr [eax + VALUE]
#define TEST_SI_FROM_PTR_EBX_(VALUE) test si, word ptr [ebx + VALUE]
#define TEST_SI_FROM_PTR_ECX_(VALUE) test si, word ptr [ecx + VALUE]
#define TEST_SI_FROM_PTR_EDX_(VALUE) test si, word ptr [edx + VALUE]
#define TEST_SI_FROM_PTR_EDI_(VALUE) test si, word ptr [edi + VALUE]
#define TEST_SI_FROM_PTR_ESI_(VALUE) test si, word ptr [esi + VALUE]
#define TEST_SI_FROM_PTR_EBP_(VALUE) test si, word ptr [ebp + VALUE]
#define TEST_SI_FROM_PTR_ESP_(VALUE) test si, word ptr [esp + VALUE]
#define TEST_SI_FROM_PTR_BX_(VALUE) test si, word ptr [bx + VALUE]
#define TEST_SI_FROM_PTR_BP_(VALUE) test si, word ptr [bp + VALUE]
#define TEST_SI_FROM_PTR_SI_(VALUE) test si, word ptr [si + VALUE]
#define TEST_SI_FROM_PTR_DI_(VALUE) test si, word ptr [di + VALUE]

#define TEST_BP_FROM_PTR_EAX_(VALUE) test bp, word ptr [eax + VALUE]
#define TEST_BP_FROM_PTR_EBX_(VALUE) test bp, word ptr [ebx + VALUE]
#define TEST_BP_FROM_PTR_ECX_(VALUE) test bp, word ptr [ecx + VALUE]
#define TEST_BP_FROM_PTR_EDX_(VALUE) test bp, word ptr [edx + VALUE]
#define TEST_BP_FROM_PTR_EDI_(VALUE) test bp, word ptr [edi + VALUE]
#define TEST_BP_FROM_PTR_ESI_(VALUE) test bp, word ptr [esi + VALUE]
#define TEST_BP_FROM_PTR_EBP_(VALUE) test bp, word ptr [ebp + VALUE]
#define TEST_BP_FROM_PTR_ESP_(VALUE) test bp, word ptr [esp + VALUE]
#define TEST_BP_FROM_PTR_BX_(VALUE) test bp, word ptr [bx + VALUE]
#define TEST_BP_FROM_PTR_BP_(VALUE) test bp, word ptr [bp + VALUE]
#define TEST_BP_FROM_PTR_SI_(VALUE) test bp, word ptr [si + VALUE]
#define TEST_BP_FROM_PTR_DI_(VALUE) test bp, word ptr [di + VALUE]

#define TEST_SP_FROM_PTR_EAX_(VALUE) test sp, word ptr [eax + VALUE]
#define TEST_SP_FROM_PTR_EBX_(VALUE) test sp, word ptr [ebx + VALUE]
#define TEST_SP_FROM_PTR_ECX_(VALUE) test sp, word ptr [ecx + VALUE]
#define TEST_SP_FROM_PTR_EDX_(VALUE) test sp, word ptr [edx + VALUE]
#define TEST_SP_FROM_PTR_EDI_(VALUE) test sp, word ptr [edi + VALUE]
#define TEST_SP_FROM_PTR_ESI_(VALUE) test sp, word ptr [esi + VALUE]
#define TEST_SP_FROM_PTR_EBP_(VALUE) test sp, word ptr [ebp + VALUE]
#define TEST_SP_FROM_PTR_ESP_(VALUE) test sp, word ptr [esp + VALUE]
#define TEST_SP_FROM_PTR_BX_(VALUE) test sp, word ptr [bx + VALUE]
#define TEST_SP_FROM_PTR_BP_(VALUE) test sp, word ptr [bp + VALUE]
#define TEST_SP_FROM_PTR_SI_(VALUE) test sp, word ptr [si + VALUE]
#define TEST_SP_FROM_PTR_DI_(VALUE) test sp, word ptr [di + VALUE]

#define TEST_AX_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], ax
#define TEST_AX_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], ax
#define TEST_AX_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], ax
#define TEST_AX_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], ax
#define TEST_AX_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], ax
#define TEST_AX_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], ax
#define TEST_AX_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], ax
#define TEST_AX_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], ax
#define TEST_AX_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], ax
#define TEST_AX_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], ax
#define TEST_AX_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], ax
#define TEST_AX_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], ax

#define TEST_BX_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], bx
#define TEST_BX_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], bx
#define TEST_BX_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], bx
#define TEST_BX_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], bx
#define TEST_BX_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], bx
#define TEST_BX_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], bx
#define TEST_BX_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], bx
#define TEST_BX_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], bx
#define TEST_BX_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], bx
#define TEST_BX_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], bx
#define TEST_BX_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], bx
#define TEST_BX_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], bx

#define TEST_CX_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], cx
#define TEST_CX_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], cx
#define TEST_CX_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], cx
#define TEST_CX_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], cx
#define TEST_CX_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], cx
#define TEST_CX_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], cx
#define TEST_CX_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], cx
#define TEST_CX_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], cx
#define TEST_CX_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], cx
#define TEST_CX_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], cx
#define TEST_CX_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], cx
#define TEST_CX_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], cx

#define TEST_DX_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], dx
#define TEST_DX_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], dx
#define TEST_DX_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], dx
#define TEST_DX_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], dx
#define TEST_DX_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], dx
#define TEST_DX_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], dx
#define TEST_DX_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], dx
#define TEST_DX_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], dx
#define TEST_DX_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], dx
#define TEST_DX_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], dx
#define TEST_DX_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], dx
#define TEST_DX_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], dx

#define TEST_DI_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], di
#define TEST_DI_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], di
#define TEST_DI_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], di
#define TEST_DI_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], di
#define TEST_DI_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], di
#define TEST_DI_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], di
#define TEST_DI_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], di
#define TEST_DI_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], di
#define TEST_DI_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], di
#define TEST_DI_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], di
#define TEST_DI_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], di
#define TEST_DI_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], di

#define TEST_SI_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], si
#define TEST_SI_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], si
#define TEST_SI_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], si
#define TEST_SI_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], si
#define TEST_SI_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], si
#define TEST_SI_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], si
#define TEST_SI_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], si
#define TEST_SI_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], si
#define TEST_SI_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], si
#define TEST_SI_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], si
#define TEST_SI_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], si
#define TEST_SI_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], si

#define TEST_BP_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], bp
#define TEST_BP_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], bp
#define TEST_BP_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], bp
#define TEST_BP_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], bp
#define TEST_BP_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], bp
#define TEST_BP_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], bp
#define TEST_BP_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], bp
#define TEST_BP_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], bp
#define TEST_BP_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], bp
#define TEST_BP_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], bp
#define TEST_BP_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], bp
#define TEST_BP_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], bp

#define TEST_SP_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], sp
#define TEST_SP_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], sp
#define TEST_SP_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], sp
#define TEST_SP_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], sp
#define TEST_SP_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], sp
#define TEST_SP_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], sp
#define TEST_SP_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], sp
#define TEST_SP_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], sp
#define TEST_SP_TO_PTR_BX_(VALUE) test word ptr [bx + VALUE], sp
#define TEST_SP_TO_PTR_BP_(VALUE) test word ptr [bp + VALUE], sp
#define TEST_SP_TO_PTR_SI_(VALUE) test word ptr [si + VALUE], sp
#define TEST_SP_TO_PTR_DI_(VALUE) test word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_AX_FROM_PTR_(VALUE) test ax, word ptr [VALUE]
#define TEST_BX_FROM_PTR_(VALUE) test bx, word ptr [VALUE]
#define TEST_CX_FROM_PTR_(VALUE) test cx, word ptr [VALUE]
#define TEST_DX_FROM_PTR_(VALUE) test dx, word ptr [VALUE]
#define TEST_DI_FROM_PTR_(VALUE) test di, word ptr [VALUE]
#define TEST_SI_FROM_PTR_(VALUE) test si, word ptr [VALUE]
#define TEST_BP_FROM_PTR_(VALUE) test bp, word ptr [VALUE]
#define TEST_SP_FROM_PTR_(VALUE) test sp, word ptr [VALUE]
#define TEST_R8W_FROM_PTR_(VALUE) test r8w, word ptr [VALUE]
#define TEST_R9W_FROM_PTR_(VALUE) test r9w, word ptr [VALUE]
#define TEST_R10W_FROM_PTR_(VALUE) test r10w, word ptr [VALUE]
#define TEST_R11W_FROM_PTR_(VALUE) test r11w, word ptr [VALUE]
#define TEST_R12W_FROM_PTR_(VALUE) test r12w, word ptr [VALUE]
#define TEST_R13W_FROM_PTR_(VALUE) test r13w, word ptr [VALUE]
#define TEST_R14W_FROM_PTR_(VALUE) test r14w, word ptr [VALUE]
#define TEST_R15W_FROM_PTR_(VALUE) test r15w, word ptr [VALUE]

#define TEST_AX_TO_PTR_(VALUE) test word ptr [VALUE], ax
#define TEST_BX_TO_PTR_(VALUE) test word ptr [VALUE], bx
#define TEST_CX_TO_PTR_(VALUE) test word ptr [VALUE], cx
#define TEST_DX_TO_PTR_(VALUE) test word ptr [VALUE], dx
#define TEST_DI_TO_PTR_(VALUE) test word ptr [VALUE], di
#define TEST_SI_TO_PTR_(VALUE) test word ptr [VALUE], si
#define TEST_BP_TO_PTR_(VALUE) test word ptr [VALUE], bp
#define TEST_SP_TO_PTR_(VALUE) test word ptr [VALUE], sp
#define TEST_R8W_TO_PTR_(VALUE) test word ptr [VALUE], r8w
#define TEST_R9W_TO_PTR_(VALUE) test word ptr [VALUE], r9w
#define TEST_R10W_TO_PTR_(VALUE) test word ptr [VALUE], r10w
#define TEST_R11W_TO_PTR_(VALUE) test word ptr [VALUE], r11w
#define TEST_R12W_TO_PTR_(VALUE) test word ptr [VALUE], r12w
#define TEST_R13W_TO_PTR_(VALUE) test word ptr [VALUE], r13w
#define TEST_R14W_TO_PTR_(VALUE) test word ptr [VALUE], r14w
#define TEST_R15W_TO_PTR_(VALUE) test word ptr [VALUE], r15w

#define TEST_AX_FROM_PTR_RAX test ax, word ptr [rax]
#define TEST_AX_FROM_PTR_RBX test ax, word ptr [rbx]
#define TEST_AX_FROM_PTR_RCX test ax, word ptr [rcx]
#define TEST_AX_FROM_PTR_RDX test ax, word ptr [rdx]
#define TEST_AX_FROM_PTR_RDI test ax, word ptr [rdi]
#define TEST_AX_FROM_PTR_RSI test ax, word ptr [rsi]
#define TEST_AX_FROM_PTR_RBP test ax, word ptr [rbp]
#define TEST_AX_FROM_PTR_RSP test ax, word ptr [rsp]
#define TEST_AX_FROM_PTR_R8 test ax, word ptr [r8]
#define TEST_AX_FROM_PTR_R9 test ax, word ptr [r9]
#define TEST_AX_FROM_PTR_R10 test ax, word ptr [r10]
#define TEST_AX_FROM_PTR_R11 test ax, word ptr [r11]
#define TEST_AX_FROM_PTR_R12 test ax, word ptr [r12]
#define TEST_AX_FROM_PTR_R13 test ax, word ptr [r13]
#define TEST_AX_FROM_PTR_R14 test ax, word ptr [r14]
#define TEST_AX_FROM_PTR_R15 test ax, word ptr [r15]
#define TEST_AX_FROM_PTR_EAX test ax, word ptr [eax]
#define TEST_AX_FROM_PTR_EBX test ax, word ptr [ebx]
#define TEST_AX_FROM_PTR_ECX test ax, word ptr [ecx]
#define TEST_AX_FROM_PTR_EDX test ax, word ptr [edx]
#define TEST_AX_FROM_PTR_EDI test ax, word ptr [edi]
#define TEST_AX_FROM_PTR_ESI test ax, word ptr [esi]
#define TEST_AX_FROM_PTR_EBP test ax, word ptr [ebp]
#define TEST_AX_FROM_PTR_ESP test ax, word ptr [esp]

#define TEST_BX_FROM_PTR_RAX test bx, word ptr [rax]
#define TEST_BX_FROM_PTR_RBX test bx, word ptr [rbx]
#define TEST_BX_FROM_PTR_RCX test bx, word ptr [rcx]
#define TEST_BX_FROM_PTR_RDX test bx, word ptr [rdx]
#define TEST_BX_FROM_PTR_RDI test bx, word ptr [rdi]
#define TEST_BX_FROM_PTR_RSI test bx, word ptr [rsi]
#define TEST_BX_FROM_PTR_RBP test bx, word ptr [rbp]
#define TEST_BX_FROM_PTR_RSP test bx, word ptr [rsp]
#define TEST_BX_FROM_PTR_R8 test bx, word ptr [r8]
#define TEST_BX_FROM_PTR_R9 test bx, word ptr [r9]
#define TEST_BX_FROM_PTR_R10 test bx, word ptr [r10]
#define TEST_BX_FROM_PTR_R11 test bx, word ptr [r11]
#define TEST_BX_FROM_PTR_R12 test bx, word ptr [r12]
#define TEST_BX_FROM_PTR_R13 test bx, word ptr [r13]
#define TEST_BX_FROM_PTR_R14 test bx, word ptr [r14]
#define TEST_BX_FROM_PTR_R15 test bx, word ptr [r15]
#define TEST_BX_FROM_PTR_EAX test bx, word ptr [eax]
#define TEST_BX_FROM_PTR_EBX test bx, word ptr [ebx]
#define TEST_BX_FROM_PTR_ECX test bx, word ptr [ecx]
#define TEST_BX_FROM_PTR_EDX test bx, word ptr [edx]
#define TEST_BX_FROM_PTR_EDI test bx, word ptr [edi]
#define TEST_BX_FROM_PTR_ESI test bx, word ptr [esi]
#define TEST_BX_FROM_PTR_EBP test bx, word ptr [ebp]
#define TEST_BX_FROM_PTR_ESP test bx, word ptr [esp]

#define TEST_CX_FROM_PTR_RAX test cx, word ptr [rax]
#define TEST_CX_FROM_PTR_RBX test cx, word ptr [rbx]
#define TEST_CX_FROM_PTR_RCX test cx, word ptr [rcx]
#define TEST_CX_FROM_PTR_RDX test cx, word ptr [rdx]
#define TEST_CX_FROM_PTR_RDI test cx, word ptr [rdi]
#define TEST_CX_FROM_PTR_RSI test cx, word ptr [rsi]
#define TEST_CX_FROM_PTR_RBP test cx, word ptr [rbp]
#define TEST_CX_FROM_PTR_RSP test cx, word ptr [rsp]
#define TEST_CX_FROM_PTR_R8 test cx, word ptr [r8]
#define TEST_CX_FROM_PTR_R9 test cx, word ptr [r9]
#define TEST_CX_FROM_PTR_R10 test cx, word ptr [r10]
#define TEST_CX_FROM_PTR_R11 test cx, word ptr [r11]
#define TEST_CX_FROM_PTR_R12 test cx, word ptr [r12]
#define TEST_CX_FROM_PTR_R13 test cx, word ptr [r13]
#define TEST_CX_FROM_PTR_R14 test cx, word ptr [r14]
#define TEST_CX_FROM_PTR_R15 test cx, word ptr [r15]
#define TEST_CX_FROM_PTR_EAX test cx, word ptr [eax]
#define TEST_CX_FROM_PTR_EBX test cx, word ptr [ebx]
#define TEST_CX_FROM_PTR_ECX test cx, word ptr [ecx]
#define TEST_CX_FROM_PTR_EDX test cx, word ptr [edx]
#define TEST_CX_FROM_PTR_EDI test cx, word ptr [edi]
#define TEST_CX_FROM_PTR_ESI test cx, word ptr [esi]
#define TEST_CX_FROM_PTR_EBP test cx, word ptr [ebp]
#define TEST_CX_FROM_PTR_ESP test cx, word ptr [esp]

#define TEST_DX_FROM_PTR_RAX test dx, word ptr [rax]
#define TEST_DX_FROM_PTR_RBX test dx, word ptr [rbx]
#define TEST_DX_FROM_PTR_RCX test dx, word ptr [rcx]
#define TEST_DX_FROM_PTR_RDX test dx, word ptr [rdx]
#define TEST_DX_FROM_PTR_RDI test dx, word ptr [rdi]
#define TEST_DX_FROM_PTR_RSI test dx, word ptr [rsi]
#define TEST_DX_FROM_PTR_RBP test dx, word ptr [rbp]
#define TEST_DX_FROM_PTR_RSP test dx, word ptr [rsp]
#define TEST_DX_FROM_PTR_R8 test dx, word ptr [r8]
#define TEST_DX_FROM_PTR_R9 test dx, word ptr [r9]
#define TEST_DX_FROM_PTR_R10 test dx, word ptr [r10]
#define TEST_DX_FROM_PTR_R11 test dx, word ptr [r11]
#define TEST_DX_FROM_PTR_R12 test dx, word ptr [r12]
#define TEST_DX_FROM_PTR_R13 test dx, word ptr [r13]
#define TEST_DX_FROM_PTR_R14 test dx, word ptr [r14]
#define TEST_DX_FROM_PTR_R15 test dx, word ptr [r15]
#define TEST_DX_FROM_PTR_EAX test dx, word ptr [eax]
#define TEST_DX_FROM_PTR_EBX test dx, word ptr [ebx]
#define TEST_DX_FROM_PTR_ECX test dx, word ptr [ecx]
#define TEST_DX_FROM_PTR_EDX test dx, word ptr [edx]
#define TEST_DX_FROM_PTR_EDI test dx, word ptr [edi]
#define TEST_DX_FROM_PTR_ESI test dx, word ptr [esi]
#define TEST_DX_FROM_PTR_EBP test dx, word ptr [ebp]
#define TEST_DX_FROM_PTR_ESP test dx, word ptr [esp]

#define TEST_DI_FROM_PTR_RAX test di, word ptr [rax]
#define TEST_DI_FROM_PTR_RBX test di, word ptr [rbx]
#define TEST_DI_FROM_PTR_RCX test di, word ptr [rcx]
#define TEST_DI_FROM_PTR_RDX test di, word ptr [rdx]
#define TEST_DI_FROM_PTR_RDI test di, word ptr [rdi]
#define TEST_DI_FROM_PTR_RSI test di, word ptr [rsi]
#define TEST_DI_FROM_PTR_RBP test di, word ptr [rbp]
#define TEST_DI_FROM_PTR_RSP test di, word ptr [rsp]
#define TEST_DI_FROM_PTR_R8 test di, word ptr [r8]
#define TEST_DI_FROM_PTR_R9 test di, word ptr [r9]
#define TEST_DI_FROM_PTR_R10 test di, word ptr [r10]
#define TEST_DI_FROM_PTR_R11 test di, word ptr [r11]
#define TEST_DI_FROM_PTR_R12 test di, word ptr [r12]
#define TEST_DI_FROM_PTR_R13 test di, word ptr [r13]
#define TEST_DI_FROM_PTR_R14 test di, word ptr [r14]
#define TEST_DI_FROM_PTR_R15 test di, word ptr [r15]
#define TEST_DI_FROM_PTR_EAX test di, word ptr [eax]
#define TEST_DI_FROM_PTR_EBX test di, word ptr [ebx]
#define TEST_DI_FROM_PTR_ECX test di, word ptr [ecx]
#define TEST_DI_FROM_PTR_EDX test di, word ptr [edx]
#define TEST_DI_FROM_PTR_EDI test di, word ptr [edi]
#define TEST_DI_FROM_PTR_ESI test di, word ptr [esi]
#define TEST_DI_FROM_PTR_EBP test di, word ptr [ebp]
#define TEST_DI_FROM_PTR_ESP test di, word ptr [esp]

#define TEST_SI_FROM_PTR_RAX test si, word ptr [rax]
#define TEST_SI_FROM_PTR_RBX test si, word ptr [rbx]
#define TEST_SI_FROM_PTR_RCX test si, word ptr [rcx]
#define TEST_SI_FROM_PTR_RDX test si, word ptr [rdx]
#define TEST_SI_FROM_PTR_RDI test si, word ptr [rdi]
#define TEST_SI_FROM_PTR_RSI test si, word ptr [rsi]
#define TEST_SI_FROM_PTR_RBP test si, word ptr [rbp]
#define TEST_SI_FROM_PTR_RSP test si, word ptr [rsp]
#define TEST_SI_FROM_PTR_R8 test si, word ptr [r8]
#define TEST_SI_FROM_PTR_R9 test si, word ptr [r9]
#define TEST_SI_FROM_PTR_R10 test si, word ptr [r10]
#define TEST_SI_FROM_PTR_R11 test si, word ptr [r11]
#define TEST_SI_FROM_PTR_R12 test si, word ptr [r12]
#define TEST_SI_FROM_PTR_R13 test si, word ptr [r13]
#define TEST_SI_FROM_PTR_R14 test si, word ptr [r14]
#define TEST_SI_FROM_PTR_R15 test si, word ptr [r15]
#define TEST_SI_FROM_PTR_EAX test si, word ptr [eax]
#define TEST_SI_FROM_PTR_EBX test si, word ptr [ebx]
#define TEST_SI_FROM_PTR_ECX test si, word ptr [ecx]
#define TEST_SI_FROM_PTR_EDX test si, word ptr [edx]
#define TEST_SI_FROM_PTR_EDI test si, word ptr [edi]
#define TEST_SI_FROM_PTR_ESI test si, word ptr [esi]
#define TEST_SI_FROM_PTR_EBP test si, word ptr [ebp]
#define TEST_SI_FROM_PTR_ESP test si, word ptr [esp]

#define TEST_BP_FROM_PTR_RAX test bp, word ptr [rax]
#define TEST_BP_FROM_PTR_RBX test bp, word ptr [rbx]
#define TEST_BP_FROM_PTR_RCX test bp, word ptr [rcx]
#define TEST_BP_FROM_PTR_RDX test bp, word ptr [rdx]
#define TEST_BP_FROM_PTR_RDI test bp, word ptr [rdi]
#define TEST_BP_FROM_PTR_RSI test bp, word ptr [rsi]
#define TEST_BP_FROM_PTR_RBP test bp, word ptr [rbp]
#define TEST_BP_FROM_PTR_RSP test bp, word ptr [rsp]
#define TEST_BP_FROM_PTR_R8 test bp, word ptr [r8]
#define TEST_BP_FROM_PTR_R9 test bp, word ptr [r9]
#define TEST_BP_FROM_PTR_R10 test bp, word ptr [r10]
#define TEST_BP_FROM_PTR_R11 test bp, word ptr [r11]
#define TEST_BP_FROM_PTR_R12 test bp, word ptr [r12]
#define TEST_BP_FROM_PTR_R13 test bp, word ptr [r13]
#define TEST_BP_FROM_PTR_R14 test bp, word ptr [r14]
#define TEST_BP_FROM_PTR_R15 test bp, word ptr [r15]
#define TEST_BP_FROM_PTR_EAX test bp, word ptr [eax]
#define TEST_BP_FROM_PTR_EBX test bp, word ptr [ebx]
#define TEST_BP_FROM_PTR_ECX test bp, word ptr [ecx]
#define TEST_BP_FROM_PTR_EDX test bp, word ptr [edx]
#define TEST_BP_FROM_PTR_EDI test bp, word ptr [edi]
#define TEST_BP_FROM_PTR_ESI test bp, word ptr [esi]
#define TEST_BP_FROM_PTR_EBP test bp, word ptr [ebp]
#define TEST_BP_FROM_PTR_ESP test bp, word ptr [esp]

#define TEST_SP_FROM_PTR_RAX test sp, word ptr [rax]
#define TEST_SP_FROM_PTR_RBX test sp, word ptr [rbx]
#define TEST_SP_FROM_PTR_RCX test sp, word ptr [rcx]
#define TEST_SP_FROM_PTR_RDX test sp, word ptr [rdx]
#define TEST_SP_FROM_PTR_RDI test sp, word ptr [rdi]
#define TEST_SP_FROM_PTR_RSI test sp, word ptr [rsi]
#define TEST_SP_FROM_PTR_RBP test sp, word ptr [rbp]
#define TEST_SP_FROM_PTR_RSP test sp, word ptr [rsp]
#define TEST_SP_FROM_PTR_R8 test sp, word ptr [r8]
#define TEST_SP_FROM_PTR_R9 test sp, word ptr [r9]
#define TEST_SP_FROM_PTR_R10 test sp, word ptr [r10]
#define TEST_SP_FROM_PTR_R11 test sp, word ptr [r11]
#define TEST_SP_FROM_PTR_R12 test sp, word ptr [r12]
#define TEST_SP_FROM_PTR_R13 test sp, word ptr [r13]
#define TEST_SP_FROM_PTR_R14 test sp, word ptr [r14]
#define TEST_SP_FROM_PTR_R15 test sp, word ptr [r15]
#define TEST_SP_FROM_PTR_EAX test sp, word ptr [eax]
#define TEST_SP_FROM_PTR_EBX test sp, word ptr [ebx]
#define TEST_SP_FROM_PTR_ECX test sp, word ptr [ecx]
#define TEST_SP_FROM_PTR_EDX test sp, word ptr [edx]
#define TEST_SP_FROM_PTR_EDI test sp, word ptr [edi]
#define TEST_SP_FROM_PTR_ESI test sp, word ptr [esi]
#define TEST_SP_FROM_PTR_EBP test sp, word ptr [ebp]
#define TEST_SP_FROM_PTR_ESP test sp, word ptr [esp]

#define TEST_R8W_FROM_PTR_RAX test r8w, word ptr [rax]
#define TEST_R8W_FROM_PTR_RBX test r8w, word ptr [rbx]
#define TEST_R8W_FROM_PTR_RCX test r8w, word ptr [rcx]
#define TEST_R8W_FROM_PTR_RDX test r8w, word ptr [rdx]
#define TEST_R8W_FROM_PTR_RDI test r8w, word ptr [rdi]
#define TEST_R8W_FROM_PTR_RSI test r8w, word ptr [rsi]
#define TEST_R8W_FROM_PTR_RBP test r8w, word ptr [rbp]
#define TEST_R8W_FROM_PTR_RSP test r8w, word ptr [rsp]
#define TEST_R8W_FROM_PTR_R8 test r8w, word ptr [r8]
#define TEST_R8W_FROM_PTR_R9 test r8w, word ptr [r9]
#define TEST_R8W_FROM_PTR_R10 test r8w, word ptr [r10]
#define TEST_R8W_FROM_PTR_R11 test r8w, word ptr [r11]
#define TEST_R8W_FROM_PTR_R12 test r8w, word ptr [r12]
#define TEST_R8W_FROM_PTR_R13 test r8w, word ptr [r13]
#define TEST_R8W_FROM_PTR_R14 test r8w, word ptr [r14]
#define TEST_R8W_FROM_PTR_R15 test r8w, word ptr [r15]
#define TEST_R8W_FROM_PTR_EAX test r8w, word ptr [eax]
#define TEST_R8W_FROM_PTR_EBX test r8w, word ptr [ebx]
#define TEST_R8W_FROM_PTR_ECX test r8w, word ptr [ecx]
#define TEST_R8W_FROM_PTR_EDX test r8w, word ptr [edx]
#define TEST_R8W_FROM_PTR_EDI test r8w, word ptr [edi]
#define TEST_R8W_FROM_PTR_ESI test r8w, word ptr [esi]
#define TEST_R8W_FROM_PTR_EBP test r8w, word ptr [ebp]
#define TEST_R8W_FROM_PTR_ESP test r8w, word ptr [esp]

#define TEST_R9W_FROM_PTR_RAX test r9w, word ptr [rax]
#define TEST_R9W_FROM_PTR_RBX test r9w, word ptr [rbx]
#define TEST_R9W_FROM_PTR_RCX test r9w, word ptr [rcx]
#define TEST_R9W_FROM_PTR_RDX test r9w, word ptr [rdx]
#define TEST_R9W_FROM_PTR_RDI test r9w, word ptr [rdi]
#define TEST_R9W_FROM_PTR_RSI test r9w, word ptr [rsi]
#define TEST_R9W_FROM_PTR_RBP test r9w, word ptr [rbp]
#define TEST_R9W_FROM_PTR_RSP test r9w, word ptr [rsp]
#define TEST_R9W_FROM_PTR_R8 test r9w, word ptr [r8]
#define TEST_R9W_FROM_PTR_R9 test r9w, word ptr [r9]
#define TEST_R9W_FROM_PTR_R10 test r9w, word ptr [r10]
#define TEST_R9W_FROM_PTR_R11 test r9w, word ptr [r11]
#define TEST_R9W_FROM_PTR_R12 test r9w, word ptr [r12]
#define TEST_R9W_FROM_PTR_R13 test r9w, word ptr [r13]
#define TEST_R9W_FROM_PTR_R14 test r9w, word ptr [r14]
#define TEST_R9W_FROM_PTR_R15 test r9w, word ptr [r15]
#define TEST_R9W_FROM_PTR_EAX test r9w, word ptr [eax]
#define TEST_R9W_FROM_PTR_EBX test r9w, word ptr [ebx]
#define TEST_R9W_FROM_PTR_ECX test r9w, word ptr [ecx]
#define TEST_R9W_FROM_PTR_EDX test r9w, word ptr [edx]
#define TEST_R9W_FROM_PTR_EDI test r9w, word ptr [edi]
#define TEST_R9W_FROM_PTR_ESI test r9w, word ptr [esi]
#define TEST_R9W_FROM_PTR_EBP test r9w, word ptr [ebp]
#define TEST_R9W_FROM_PTR_ESP test r9w, word ptr [esp]

#define TEST_R10W_FROM_PTR_RAX test r10w, word ptr [rax]
#define TEST_R10W_FROM_PTR_RBX test r10w, word ptr [rbx]
#define TEST_R10W_FROM_PTR_RCX test r10w, word ptr [rcx]
#define TEST_R10W_FROM_PTR_RDX test r10w, word ptr [rdx]
#define TEST_R10W_FROM_PTR_RDI test r10w, word ptr [rdi]
#define TEST_R10W_FROM_PTR_RSI test r10w, word ptr [rsi]
#define TEST_R10W_FROM_PTR_RBP test r10w, word ptr [rbp]
#define TEST_R10W_FROM_PTR_RSP test r10w, word ptr [rsp]
#define TEST_R10W_FROM_PTR_R8 test r10w, word ptr [r8]
#define TEST_R10W_FROM_PTR_R9 test r10w, word ptr [r9]
#define TEST_R10W_FROM_PTR_R10 test r10w, word ptr [r10]
#define TEST_R10W_FROM_PTR_R11 test r10w, word ptr [r11]
#define TEST_R10W_FROM_PTR_R12 test r10w, word ptr [r12]
#define TEST_R10W_FROM_PTR_R13 test r10w, word ptr [r13]
#define TEST_R10W_FROM_PTR_R14 test r10w, word ptr [r14]
#define TEST_R10W_FROM_PTR_R15 test r10w, word ptr [r15]
#define TEST_R10W_FROM_PTR_EAX test r10w, word ptr [eax]
#define TEST_R10W_FROM_PTR_EBX test r10w, word ptr [ebx]
#define TEST_R10W_FROM_PTR_ECX test r10w, word ptr [ecx]
#define TEST_R10W_FROM_PTR_EDX test r10w, word ptr [edx]
#define TEST_R10W_FROM_PTR_EDI test r10w, word ptr [edi]
#define TEST_R10W_FROM_PTR_ESI test r10w, word ptr [esi]
#define TEST_R10W_FROM_PTR_EBP test r10w, word ptr [ebp]
#define TEST_R10W_FROM_PTR_ESP test r10w, word ptr [esp]

#define TEST_R11W_FROM_PTR_RAX test r11w, word ptr [rax]
#define TEST_R11W_FROM_PTR_RBX test r11w, word ptr [rbx]
#define TEST_R11W_FROM_PTR_RCX test r11w, word ptr [rcx]
#define TEST_R11W_FROM_PTR_RDX test r11w, word ptr [rdx]
#define TEST_R11W_FROM_PTR_RDI test r11w, word ptr [rdi]
#define TEST_R11W_FROM_PTR_RSI test r11w, word ptr [rsi]
#define TEST_R11W_FROM_PTR_RBP test r11w, word ptr [rbp]
#define TEST_R11W_FROM_PTR_RSP test r11w, word ptr [rsp]
#define TEST_R11W_FROM_PTR_R8 test r11w, word ptr [r8]
#define TEST_R11W_FROM_PTR_R9 test r11w, word ptr [r9]
#define TEST_R11W_FROM_PTR_R10 test r11w, word ptr [r10]
#define TEST_R11W_FROM_PTR_R11 test r11w, word ptr [r11]
#define TEST_R11W_FROM_PTR_R12 test r11w, word ptr [r12]
#define TEST_R11W_FROM_PTR_R13 test r11w, word ptr [r13]
#define TEST_R11W_FROM_PTR_R14 test r11w, word ptr [r14]
#define TEST_R11W_FROM_PTR_R15 test r11w, word ptr [r15]
#define TEST_R11W_FROM_PTR_EAX test r11w, word ptr [eax]
#define TEST_R11W_FROM_PTR_EBX test r11w, word ptr [ebx]
#define TEST_R11W_FROM_PTR_ECX test r11w, word ptr [ecx]
#define TEST_R11W_FROM_PTR_EDX test r11w, word ptr [edx]
#define TEST_R11W_FROM_PTR_EDI test r11w, word ptr [edi]
#define TEST_R11W_FROM_PTR_ESI test r11w, word ptr [esi]
#define TEST_R11W_FROM_PTR_EBP test r11w, word ptr [ebp]
#define TEST_R11W_FROM_PTR_ESP test r11w, word ptr [esp]

#define TEST_R12W_FROM_PTR_RAX test r12w, word ptr [rax]
#define TEST_R12W_FROM_PTR_RBX test r12w, word ptr [rbx]
#define TEST_R12W_FROM_PTR_RCX test r12w, word ptr [rcx]
#define TEST_R12W_FROM_PTR_RDX test r12w, word ptr [rdx]
#define TEST_R12W_FROM_PTR_RDI test r12w, word ptr [rdi]
#define TEST_R12W_FROM_PTR_RSI test r12w, word ptr [rsi]
#define TEST_R12W_FROM_PTR_RBP test r12w, word ptr [rbp]
#define TEST_R12W_FROM_PTR_RSP test r12w, word ptr [rsp]
#define TEST_R12W_FROM_PTR_R8 test r12w, word ptr [r8]
#define TEST_R12W_FROM_PTR_R9 test r12w, word ptr [r9]
#define TEST_R12W_FROM_PTR_R10 test r12w, word ptr [r10]
#define TEST_R12W_FROM_PTR_R11 test r12w, word ptr [r11]
#define TEST_R12W_FROM_PTR_R12 test r12w, word ptr [r12]
#define TEST_R12W_FROM_PTR_R13 test r12w, word ptr [r13]
#define TEST_R12W_FROM_PTR_R14 test r12w, word ptr [r14]
#define TEST_R12W_FROM_PTR_R15 test r12w, word ptr [r15]
#define TEST_R12W_FROM_PTR_EAX test r12w, word ptr [eax]
#define TEST_R12W_FROM_PTR_EBX test r12w, word ptr [ebx]
#define TEST_R12W_FROM_PTR_ECX test r12w, word ptr [ecx]
#define TEST_R12W_FROM_PTR_EDX test r12w, word ptr [edx]
#define TEST_R12W_FROM_PTR_EDI test r12w, word ptr [edi]
#define TEST_R12W_FROM_PTR_ESI test r12w, word ptr [esi]
#define TEST_R12W_FROM_PTR_EBP test r12w, word ptr [ebp]
#define TEST_R12W_FROM_PTR_ESP test r12w, word ptr [esp]

#define TEST_R13W_FROM_PTR_RAX test r13w, word ptr [rax]
#define TEST_R13W_FROM_PTR_RBX test r13w, word ptr [rbx]
#define TEST_R13W_FROM_PTR_RCX test r13w, word ptr [rcx]
#define TEST_R13W_FROM_PTR_RDX test r13w, word ptr [rdx]
#define TEST_R13W_FROM_PTR_RDI test r13w, word ptr [rdi]
#define TEST_R13W_FROM_PTR_RSI test r13w, word ptr [rsi]
#define TEST_R13W_FROM_PTR_RBP test r13w, word ptr [rbp]
#define TEST_R13W_FROM_PTR_RSP test r13w, word ptr [rsp]
#define TEST_R13W_FROM_PTR_R8 test r13w, word ptr [r8]
#define TEST_R13W_FROM_PTR_R9 test r13w, word ptr [r9]
#define TEST_R13W_FROM_PTR_R10 test r13w, word ptr [r10]
#define TEST_R13W_FROM_PTR_R11 test r13w, word ptr [r11]
#define TEST_R13W_FROM_PTR_R12 test r13w, word ptr [r12]
#define TEST_R13W_FROM_PTR_R13 test r13w, word ptr [r13]
#define TEST_R13W_FROM_PTR_R14 test r13w, word ptr [r14]
#define TEST_R13W_FROM_PTR_R15 test r13w, word ptr [r15]
#define TEST_R13W_FROM_PTR_EAX test r13w, word ptr [eax]
#define TEST_R13W_FROM_PTR_EBX test r13w, word ptr [ebx]
#define TEST_R13W_FROM_PTR_ECX test r13w, word ptr [ecx]
#define TEST_R13W_FROM_PTR_EDX test r13w, word ptr [edx]
#define TEST_R13W_FROM_PTR_EDI test r13w, word ptr [edi]
#define TEST_R13W_FROM_PTR_ESI test r13w, word ptr [esi]
#define TEST_R13W_FROM_PTR_EBP test r13w, word ptr [ebp]
#define TEST_R13W_FROM_PTR_ESP test r13w, word ptr [esp]

#define TEST_R14W_FROM_PTR_RAX test r14w, word ptr [rax]
#define TEST_R14W_FROM_PTR_RBX test r14w, word ptr [rbx]
#define TEST_R14W_FROM_PTR_RCX test r14w, word ptr [rcx]
#define TEST_R14W_FROM_PTR_RDX test r14w, word ptr [rdx]
#define TEST_R14W_FROM_PTR_RDI test r14w, word ptr [rdi]
#define TEST_R14W_FROM_PTR_RSI test r14w, word ptr [rsi]
#define TEST_R14W_FROM_PTR_RBP test r14w, word ptr [rbp]
#define TEST_R14W_FROM_PTR_RSP test r14w, word ptr [rsp]
#define TEST_R14W_FROM_PTR_R8 test r14w, word ptr [r8]
#define TEST_R14W_FROM_PTR_R9 test r14w, word ptr [r9]
#define TEST_R14W_FROM_PTR_R10 test r14w, word ptr [r10]
#define TEST_R14W_FROM_PTR_R11 test r14w, word ptr [r11]
#define TEST_R14W_FROM_PTR_R12 test r14w, word ptr [r12]
#define TEST_R14W_FROM_PTR_R13 test r14w, word ptr [r13]
#define TEST_R14W_FROM_PTR_R14 test r14w, word ptr [r14]
#define TEST_R14W_FROM_PTR_R15 test r14w, word ptr [r15]
#define TEST_R14W_FROM_PTR_EAX test r14w, word ptr [eax]
#define TEST_R14W_FROM_PTR_EBX test r14w, word ptr [ebx]
#define TEST_R14W_FROM_PTR_ECX test r14w, word ptr [ecx]
#define TEST_R14W_FROM_PTR_EDX test r14w, word ptr [edx]
#define TEST_R14W_FROM_PTR_EDI test r14w, word ptr [edi]
#define TEST_R14W_FROM_PTR_ESI test r14w, word ptr [esi]
#define TEST_R14W_FROM_PTR_EBP test r14w, word ptr [ebp]
#define TEST_R14W_FROM_PTR_ESP test r14w, word ptr [esp]

#define TEST_R15W_FROM_PTR_RAX test r15w, word ptr [rax]
#define TEST_R15W_FROM_PTR_RBX test r15w, word ptr [rbx]
#define TEST_R15W_FROM_PTR_RCX test r15w, word ptr [rcx]
#define TEST_R15W_FROM_PTR_RDX test r15w, word ptr [rdx]
#define TEST_R15W_FROM_PTR_RDI test r15w, word ptr [rdi]
#define TEST_R15W_FROM_PTR_RSI test r15w, word ptr [rsi]
#define TEST_R15W_FROM_PTR_RBP test r15w, word ptr [rbp]
#define TEST_R15W_FROM_PTR_RSP test r15w, word ptr [rsp]
#define TEST_R15W_FROM_PTR_R8 test r15w, word ptr [r8]
#define TEST_R15W_FROM_PTR_R9 test r15w, word ptr [r9]
#define TEST_R15W_FROM_PTR_R10 test r15w, word ptr [r10]
#define TEST_R15W_FROM_PTR_R11 test r15w, word ptr [r11]
#define TEST_R15W_FROM_PTR_R12 test r15w, word ptr [r12]
#define TEST_R15W_FROM_PTR_R13 test r15w, word ptr [r13]
#define TEST_R15W_FROM_PTR_R14 test r15w, word ptr [r14]
#define TEST_R15W_FROM_PTR_R15 test r15w, word ptr [r15]
#define TEST_R15W_FROM_PTR_EAX test r15w, word ptr [eax]
#define TEST_R15W_FROM_PTR_EBX test r15w, word ptr [ebx]
#define TEST_R15W_FROM_PTR_ECX test r15w, word ptr [ecx]
#define TEST_R15W_FROM_PTR_EDX test r15w, word ptr [edx]
#define TEST_R15W_FROM_PTR_EDI test r15w, word ptr [edi]
#define TEST_R15W_FROM_PTR_ESI test r15w, word ptr [esi]
#define TEST_R15W_FROM_PTR_EBP test r15w, word ptr [ebp]
#define TEST_R15W_FROM_PTR_ESP test r15w, word ptr [esp]

#define TEST_AX_TO_PTR_RAX test word ptr [rax], ax
#define TEST_AX_TO_PTR_RBX test word ptr [rbx], ax
#define TEST_AX_TO_PTR_RCX test word ptr [rcx], ax
#define TEST_AX_TO_PTR_RDX test word ptr [rdx], ax
#define TEST_AX_TO_PTR_RDI test word ptr [rdi], ax
#define TEST_AX_TO_PTR_RSI test word ptr [rsi], ax
#define TEST_AX_TO_PTR_RBP test word ptr [rbp], ax
#define TEST_AX_TO_PTR_RSP test word ptr [rsp], ax
#define TEST_AX_TO_PTR_R8 test word ptr [r8], ax
#define TEST_AX_TO_PTR_R9 test word ptr [r9], ax
#define TEST_AX_TO_PTR_R10 test word ptr [r10], ax
#define TEST_AX_TO_PTR_R11 test word ptr [r11], ax
#define TEST_AX_TO_PTR_R12 test word ptr [r12], ax
#define TEST_AX_TO_PTR_R13 test word ptr [r13], ax
#define TEST_AX_TO_PTR_R14 test word ptr [r14], ax
#define TEST_AX_TO_PTR_R15 test word ptr [r15], ax
#define TEST_AX_TO_PTR_EAX test word ptr [eax], ax
#define TEST_AX_TO_PTR_EBX test word ptr [ebx], ax
#define TEST_AX_TO_PTR_ECX test word ptr [ecx], ax
#define TEST_AX_TO_PTR_EDX test word ptr [edx], ax
#define TEST_AX_TO_PTR_EDI test word ptr [edi], ax
#define TEST_AX_TO_PTR_ESI test word ptr [esi], ax
#define TEST_AX_TO_PTR_EBP test word ptr [ebp], ax
#define TEST_AX_TO_PTR_ESP test word ptr [esp], ax

#define TEST_BX_TO_PTR_RAX test word ptr [rax], bx
#define TEST_BX_TO_PTR_RBX test word ptr [rbx], bx
#define TEST_BX_TO_PTR_RCX test word ptr [rcx], bx
#define TEST_BX_TO_PTR_RDX test word ptr [rdx], bx
#define TEST_BX_TO_PTR_RDI test word ptr [rdi], bx
#define TEST_BX_TO_PTR_RSI test word ptr [rsi], bx
#define TEST_BX_TO_PTR_RBP test word ptr [rbp], bx
#define TEST_BX_TO_PTR_RSP test word ptr [rsp], bx
#define TEST_BX_TO_PTR_R8 test word ptr [r8], bx
#define TEST_BX_TO_PTR_R9 test word ptr [r9], bx
#define TEST_BX_TO_PTR_R10 test word ptr [r10], bx
#define TEST_BX_TO_PTR_R11 test word ptr [r11], bx
#define TEST_BX_TO_PTR_R12 test word ptr [r12], bx
#define TEST_BX_TO_PTR_R13 test word ptr [r13], bx
#define TEST_BX_TO_PTR_R14 test word ptr [r14], bx
#define TEST_BX_TO_PTR_R15 test word ptr [r15], bx
#define TEST_BX_TO_PTR_EAX test word ptr [eax], bx
#define TEST_BX_TO_PTR_EBX test word ptr [ebx], bx
#define TEST_BX_TO_PTR_ECX test word ptr [ecx], bx
#define TEST_BX_TO_PTR_EDX test word ptr [edx], bx
#define TEST_BX_TO_PTR_EDI test word ptr [edi], bx
#define TEST_BX_TO_PTR_ESI test word ptr [esi], bx
#define TEST_BX_TO_PTR_EBP test word ptr [ebp], bx
#define TEST_BX_TO_PTR_ESP test word ptr [esp], bx

#define TEST_CX_TO_PTR_RAX test word ptr [rax], cx
#define TEST_CX_TO_PTR_RBX test word ptr [rbx], cx
#define TEST_CX_TO_PTR_RCX test word ptr [rcx], cx
#define TEST_CX_TO_PTR_RDX test word ptr [rdx], cx
#define TEST_CX_TO_PTR_RDI test word ptr [rdi], cx
#define TEST_CX_TO_PTR_RSI test word ptr [rsi], cx
#define TEST_CX_TO_PTR_RBP test word ptr [rbp], cx
#define TEST_CX_TO_PTR_RSP test word ptr [rsp], cx
#define TEST_CX_TO_PTR_R8 test word ptr [r8], cx
#define TEST_CX_TO_PTR_R9 test word ptr [r9], cx
#define TEST_CX_TO_PTR_R10 test word ptr [r10], cx
#define TEST_CX_TO_PTR_R11 test word ptr [r11], cx
#define TEST_CX_TO_PTR_R12 test word ptr [r12], cx
#define TEST_CX_TO_PTR_R13 test word ptr [r13], cx
#define TEST_CX_TO_PTR_R14 test word ptr [r14], cx
#define TEST_CX_TO_PTR_R15 test word ptr [r15], cx
#define TEST_CX_TO_PTR_EAX test word ptr [eax], cx
#define TEST_CX_TO_PTR_EBX test word ptr [ebx], cx
#define TEST_CX_TO_PTR_ECX test word ptr [ecx], cx
#define TEST_CX_TO_PTR_EDX test word ptr [edx], cx
#define TEST_CX_TO_PTR_EDI test word ptr [edi], cx
#define TEST_CX_TO_PTR_ESI test word ptr [esi], cx
#define TEST_CX_TO_PTR_EBP test word ptr [ebp], cx
#define TEST_CX_TO_PTR_ESP test word ptr [esp], cx

#define TEST_DX_TO_PTR_RAX test word ptr [rax], dx
#define TEST_DX_TO_PTR_RBX test word ptr [rbx], dx
#define TEST_DX_TO_PTR_RCX test word ptr [rcx], dx
#define TEST_DX_TO_PTR_RDX test word ptr [rdx], dx
#define TEST_DX_TO_PTR_RDI test word ptr [rdi], dx
#define TEST_DX_TO_PTR_RSI test word ptr [rsi], dx
#define TEST_DX_TO_PTR_RBP test word ptr [rbp], dx
#define TEST_DX_TO_PTR_RSP test word ptr [rsp], dx
#define TEST_DX_TO_PTR_R8 test word ptr [r8], dx
#define TEST_DX_TO_PTR_R9 test word ptr [r9], dx
#define TEST_DX_TO_PTR_R10 test word ptr [r10], dx
#define TEST_DX_TO_PTR_R11 test word ptr [r11], dx
#define TEST_DX_TO_PTR_R12 test word ptr [r12], dx
#define TEST_DX_TO_PTR_R13 test word ptr [r13], dx
#define TEST_DX_TO_PTR_R14 test word ptr [r14], dx
#define TEST_DX_TO_PTR_R15 test word ptr [r15], dx
#define TEST_DX_TO_PTR_EAX test word ptr [eax], dx
#define TEST_DX_TO_PTR_EBX test word ptr [ebx], dx
#define TEST_DX_TO_PTR_ECX test word ptr [ecx], dx
#define TEST_DX_TO_PTR_EDX test word ptr [edx], dx
#define TEST_DX_TO_PTR_EDI test word ptr [edi], dx
#define TEST_DX_TO_PTR_ESI test word ptr [esi], dx
#define TEST_DX_TO_PTR_EBP test word ptr [ebp], dx
#define TEST_DX_TO_PTR_ESP test word ptr [esp], dx

#define TEST_DI_TO_PTR_RAX test word ptr [rax], di
#define TEST_DI_TO_PTR_RBX test word ptr [rbx], di
#define TEST_DI_TO_PTR_RCX test word ptr [rcx], di
#define TEST_DI_TO_PTR_RDX test word ptr [rdx], di
#define TEST_DI_TO_PTR_RDI test word ptr [rdi], di
#define TEST_DI_TO_PTR_RSI test word ptr [rsi], di
#define TEST_DI_TO_PTR_RBP test word ptr [rbp], di
#define TEST_DI_TO_PTR_RSP test word ptr [rsp], di
#define TEST_DI_TO_PTR_R8 test word ptr [r8], di
#define TEST_DI_TO_PTR_R9 test word ptr [r9], di
#define TEST_DI_TO_PTR_R10 test word ptr [r10], di
#define TEST_DI_TO_PTR_R11 test word ptr [r11], di
#define TEST_DI_TO_PTR_R12 test word ptr [r12], di
#define TEST_DI_TO_PTR_R13 test word ptr [r13], di
#define TEST_DI_TO_PTR_R14 test word ptr [r14], di
#define TEST_DI_TO_PTR_R15 test word ptr [r15], di
#define TEST_DI_TO_PTR_EAX test word ptr [eax], di
#define TEST_DI_TO_PTR_EBX test word ptr [ebx], di
#define TEST_DI_TO_PTR_ECX test word ptr [ecx], di
#define TEST_DI_TO_PTR_EDX test word ptr [edx], di
#define TEST_DI_TO_PTR_EDI test word ptr [edi], di
#define TEST_DI_TO_PTR_ESI test word ptr [esi], di
#define TEST_DI_TO_PTR_EBP test word ptr [ebp], di
#define TEST_DI_TO_PTR_ESP test word ptr [esp], di

#define TEST_SI_TO_PTR_RAX test word ptr [rax], si
#define TEST_SI_TO_PTR_RBX test word ptr [rbx], si
#define TEST_SI_TO_PTR_RCX test word ptr [rcx], si
#define TEST_SI_TO_PTR_RDX test word ptr [rdx], si
#define TEST_SI_TO_PTR_RDI test word ptr [rdi], si
#define TEST_SI_TO_PTR_RSI test word ptr [rsi], si
#define TEST_SI_TO_PTR_RBP test word ptr [rbp], si
#define TEST_SI_TO_PTR_RSP test word ptr [rsp], si
#define TEST_SI_TO_PTR_R8 test word ptr [r8], si
#define TEST_SI_TO_PTR_R9 test word ptr [r9], si
#define TEST_SI_TO_PTR_R10 test word ptr [r10], si
#define TEST_SI_TO_PTR_R11 test word ptr [r11], si
#define TEST_SI_TO_PTR_R12 test word ptr [r12], si
#define TEST_SI_TO_PTR_R13 test word ptr [r13], si
#define TEST_SI_TO_PTR_R14 test word ptr [r14], si
#define TEST_SI_TO_PTR_R15 test word ptr [r15], si
#define TEST_SI_TO_PTR_EAX test word ptr [eax], si
#define TEST_SI_TO_PTR_EBX test word ptr [ebx], si
#define TEST_SI_TO_PTR_ECX test word ptr [ecx], si
#define TEST_SI_TO_PTR_EDX test word ptr [edx], si
#define TEST_SI_TO_PTR_EDI test word ptr [edi], si
#define TEST_SI_TO_PTR_ESI test word ptr [esi], si
#define TEST_SI_TO_PTR_EBP test word ptr [ebp], si
#define TEST_SI_TO_PTR_ESP test word ptr [esp], si

#define TEST_BP_TO_PTR_RAX test word ptr [rax], bp
#define TEST_BP_TO_PTR_RBX test word ptr [rbx], bp
#define TEST_BP_TO_PTR_RCX test word ptr [rcx], bp
#define TEST_BP_TO_PTR_RDX test word ptr [rdx], bp
#define TEST_BP_TO_PTR_RDI test word ptr [rdi], bp
#define TEST_BP_TO_PTR_RSI test word ptr [rsi], bp
#define TEST_BP_TO_PTR_RBP test word ptr [rbp], bp
#define TEST_BP_TO_PTR_RSP test word ptr [rsp], bp
#define TEST_BP_TO_PTR_R8 test word ptr [r8], bp
#define TEST_BP_TO_PTR_R9 test word ptr [r9], bp
#define TEST_BP_TO_PTR_R10 test word ptr [r10], bp
#define TEST_BP_TO_PTR_R11 test word ptr [r11], bp
#define TEST_BP_TO_PTR_R12 test word ptr [r12], bp
#define TEST_BP_TO_PTR_R13 test word ptr [r13], bp
#define TEST_BP_TO_PTR_R14 test word ptr [r14], bp
#define TEST_BP_TO_PTR_R15 test word ptr [r15], bp
#define TEST_BP_TO_PTR_EAX test word ptr [eax], bp
#define TEST_BP_TO_PTR_EBX test word ptr [ebx], bp
#define TEST_BP_TO_PTR_ECX test word ptr [ecx], bp
#define TEST_BP_TO_PTR_EDX test word ptr [edx], bp
#define TEST_BP_TO_PTR_EDI test word ptr [edi], bp
#define TEST_BP_TO_PTR_ESI test word ptr [esi], bp
#define TEST_BP_TO_PTR_EBP test word ptr [ebp], bp
#define TEST_BP_TO_PTR_ESP test word ptr [esp], bp

#define TEST_SP_TO_PTR_RAX test word ptr [rax], sp
#define TEST_SP_TO_PTR_RBX test word ptr [rbx], sp
#define TEST_SP_TO_PTR_RCX test word ptr [rcx], sp
#define TEST_SP_TO_PTR_RDX test word ptr [rdx], sp
#define TEST_SP_TO_PTR_RDI test word ptr [rdi], sp
#define TEST_SP_TO_PTR_RSI test word ptr [rsi], sp
#define TEST_SP_TO_PTR_RBP test word ptr [rbp], sp
#define TEST_SP_TO_PTR_RSP test word ptr [rsp], sp
#define TEST_SP_TO_PTR_R8 test word ptr [r8], sp
#define TEST_SP_TO_PTR_R9 test word ptr [r9], sp
#define TEST_SP_TO_PTR_R10 test word ptr [r10], sp
#define TEST_SP_TO_PTR_R11 test word ptr [r11], sp
#define TEST_SP_TO_PTR_R12 test word ptr [r12], sp
#define TEST_SP_TO_PTR_R13 test word ptr [r13], sp
#define TEST_SP_TO_PTR_R14 test word ptr [r14], sp
#define TEST_SP_TO_PTR_R15 test word ptr [r15], sp
#define TEST_SP_TO_PTR_EAX test word ptr [eax], sp
#define TEST_SP_TO_PTR_EBX test word ptr [ebx], sp
#define TEST_SP_TO_PTR_ECX test word ptr [ecx], sp
#define TEST_SP_TO_PTR_EDX test word ptr [edx], sp
#define TEST_SP_TO_PTR_EDI test word ptr [edi], sp
#define TEST_SP_TO_PTR_ESI test word ptr [esi], sp
#define TEST_SP_TO_PTR_EBP test word ptr [ebp], sp
#define TEST_SP_TO_PTR_ESP test word ptr [esp], sp

#define TEST_R8W_TO_PTR_RAX test word ptr [rax], r8w
#define TEST_R8W_TO_PTR_RBX test word ptr [rbx], r8w
#define TEST_R8W_TO_PTR_RCX test word ptr [rcx], r8w
#define TEST_R8W_TO_PTR_RDX test word ptr [rdx], r8w
#define TEST_R8W_TO_PTR_RDI test word ptr [rdi], r8w
#define TEST_R8W_TO_PTR_RSI test word ptr [rsi], r8w
#define TEST_R8W_TO_PTR_RBP test word ptr [rbp], r8w
#define TEST_R8W_TO_PTR_RSP test word ptr [rsp], r8w
#define TEST_R8W_TO_PTR_R8 test word ptr [r8], r8w
#define TEST_R8W_TO_PTR_R9 test word ptr [r9], r8w
#define TEST_R8W_TO_PTR_R10 test word ptr [r10], r8w
#define TEST_R8W_TO_PTR_R11 test word ptr [r11], r8w
#define TEST_R8W_TO_PTR_R12 test word ptr [r12], r8w
#define TEST_R8W_TO_PTR_R13 test word ptr [r13], r8w
#define TEST_R8W_TO_PTR_R14 test word ptr [r14], r8w
#define TEST_R8W_TO_PTR_R15 test word ptr [r15], r8w
#define TEST_R8W_TO_PTR_EAX test word ptr [eax], r8w
#define TEST_R8W_TO_PTR_EBX test word ptr [ebx], r8w
#define TEST_R8W_TO_PTR_ECX test word ptr [ecx], r8w
#define TEST_R8W_TO_PTR_EDX test word ptr [edx], r8w
#define TEST_R8W_TO_PTR_EDI test word ptr [edi], r8w
#define TEST_R8W_TO_PTR_ESI test word ptr [esi], r8w
#define TEST_R8W_TO_PTR_EBP test word ptr [ebp], r8w
#define TEST_R8W_TO_PTR_ESP test word ptr [esp], r8w

#define TEST_R9W_TO_PTR_RAX test word ptr [rax], r9w
#define TEST_R9W_TO_PTR_RBX test word ptr [rbx], r9w
#define TEST_R9W_TO_PTR_RCX test word ptr [rcx], r9w
#define TEST_R9W_TO_PTR_RDX test word ptr [rdx], r9w
#define TEST_R9W_TO_PTR_RDI test word ptr [rdi], r9w
#define TEST_R9W_TO_PTR_RSI test word ptr [rsi], r9w
#define TEST_R9W_TO_PTR_RBP test word ptr [rbp], r9w
#define TEST_R9W_TO_PTR_RSP test word ptr [rsp], r9w
#define TEST_R9W_TO_PTR_R8 test word ptr [r8], r9w
#define TEST_R9W_TO_PTR_R9 test word ptr [r9], r9w
#define TEST_R9W_TO_PTR_R10 test word ptr [r10], r9w
#define TEST_R9W_TO_PTR_R11 test word ptr [r11], r9w
#define TEST_R9W_TO_PTR_R12 test word ptr [r12], r9w
#define TEST_R9W_TO_PTR_R13 test word ptr [r13], r9w
#define TEST_R9W_TO_PTR_R14 test word ptr [r14], r9w
#define TEST_R9W_TO_PTR_R15 test word ptr [r15], r9w
#define TEST_R9W_TO_PTR_EAX test word ptr [eax], r9w
#define TEST_R9W_TO_PTR_EBX test word ptr [ebx], r9w
#define TEST_R9W_TO_PTR_ECX test word ptr [ecx], r9w
#define TEST_R9W_TO_PTR_EDX test word ptr [edx], r9w
#define TEST_R9W_TO_PTR_EDI test word ptr [edi], r9w
#define TEST_R9W_TO_PTR_ESI test word ptr [esi], r9w
#define TEST_R9W_TO_PTR_EBP test word ptr [ebp], r9w
#define TEST_R9W_TO_PTR_ESP test word ptr [esp], r9w

#define TEST_R10W_TO_PTR_RAX test word ptr [rax], r10w
#define TEST_R10W_TO_PTR_RBX test word ptr [rbx], r10w
#define TEST_R10W_TO_PTR_RCX test word ptr [rcx], r10w
#define TEST_R10W_TO_PTR_RDX test word ptr [rdx], r10w
#define TEST_R10W_TO_PTR_RDI test word ptr [rdi], r10w
#define TEST_R10W_TO_PTR_RSI test word ptr [rsi], r10w
#define TEST_R10W_TO_PTR_RBP test word ptr [rbp], r10w
#define TEST_R10W_TO_PTR_RSP test word ptr [rsp], r10w
#define TEST_R10W_TO_PTR_R8 test word ptr [r8], r10w
#define TEST_R10W_TO_PTR_R9 test word ptr [r9], r10w
#define TEST_R10W_TO_PTR_R10 test word ptr [r10], r10w
#define TEST_R10W_TO_PTR_R11 test word ptr [r11], r10w
#define TEST_R10W_TO_PTR_R12 test word ptr [r12], r10w
#define TEST_R10W_TO_PTR_R13 test word ptr [r13], r10w
#define TEST_R10W_TO_PTR_R14 test word ptr [r14], r10w
#define TEST_R10W_TO_PTR_R15 test word ptr [r15], r10w
#define TEST_R10W_TO_PTR_EAX test word ptr [eax], r10w
#define TEST_R10W_TO_PTR_EBX test word ptr [ebx], r10w
#define TEST_R10W_TO_PTR_ECX test word ptr [ecx], r10w
#define TEST_R10W_TO_PTR_EDX test word ptr [edx], r10w
#define TEST_R10W_TO_PTR_EDI test word ptr [edi], r10w
#define TEST_R10W_TO_PTR_ESI test word ptr [esi], r10w
#define TEST_R10W_TO_PTR_EBP test word ptr [ebp], r10w
#define TEST_R10W_TO_PTR_ESP test word ptr [esp], r10w

#define TEST_R11W_TO_PTR_RAX test word ptr [rax], r11w
#define TEST_R11W_TO_PTR_RBX test word ptr [rbx], r11w
#define TEST_R11W_TO_PTR_RCX test word ptr [rcx], r11w
#define TEST_R11W_TO_PTR_RDX test word ptr [rdx], r11w
#define TEST_R11W_TO_PTR_RDI test word ptr [rdi], r11w
#define TEST_R11W_TO_PTR_RSI test word ptr [rsi], r11w
#define TEST_R11W_TO_PTR_RBP test word ptr [rbp], r11w
#define TEST_R11W_TO_PTR_RSP test word ptr [rsp], r11w
#define TEST_R11W_TO_PTR_R8 test word ptr [r8], r11w
#define TEST_R11W_TO_PTR_R9 test word ptr [r9], r11w
#define TEST_R11W_TO_PTR_R10 test word ptr [r10], r11w
#define TEST_R11W_TO_PTR_R11 test word ptr [r11], r11w
#define TEST_R11W_TO_PTR_R12 test word ptr [r12], r11w
#define TEST_R11W_TO_PTR_R13 test word ptr [r13], r11w
#define TEST_R11W_TO_PTR_R14 test word ptr [r14], r11w
#define TEST_R11W_TO_PTR_R15 test word ptr [r15], r11w
#define TEST_R11W_TO_PTR_EAX test word ptr [eax], r11w
#define TEST_R11W_TO_PTR_EBX test word ptr [ebx], r11w
#define TEST_R11W_TO_PTR_ECX test word ptr [ecx], r11w
#define TEST_R11W_TO_PTR_EDX test word ptr [edx], r11w
#define TEST_R11W_TO_PTR_EDI test word ptr [edi], r11w
#define TEST_R11W_TO_PTR_ESI test word ptr [esi], r11w
#define TEST_R11W_TO_PTR_EBP test word ptr [ebp], r11w
#define TEST_R11W_TO_PTR_ESP test word ptr [esp], r11w

#define TEST_R12W_TO_PTR_RAX test word ptr [rax], r12w
#define TEST_R12W_TO_PTR_RBX test word ptr [rbx], r12w
#define TEST_R12W_TO_PTR_RCX test word ptr [rcx], r12w
#define TEST_R12W_TO_PTR_RDX test word ptr [rdx], r12w
#define TEST_R12W_TO_PTR_RDI test word ptr [rdi], r12w
#define TEST_R12W_TO_PTR_RSI test word ptr [rsi], r12w
#define TEST_R12W_TO_PTR_RBP test word ptr [rbp], r12w
#define TEST_R12W_TO_PTR_RSP test word ptr [rsp], r12w
#define TEST_R12W_TO_PTR_R8 test word ptr [r8], r12w
#define TEST_R12W_TO_PTR_R9 test word ptr [r9], r12w
#define TEST_R12W_TO_PTR_R10 test word ptr [r10], r12w
#define TEST_R12W_TO_PTR_R11 test word ptr [r11], r12w
#define TEST_R12W_TO_PTR_R12 test word ptr [r12], r12w
#define TEST_R12W_TO_PTR_R13 test word ptr [r13], r12w
#define TEST_R12W_TO_PTR_R14 test word ptr [r14], r12w
#define TEST_R12W_TO_PTR_R15 test word ptr [r15], r12w
#define TEST_R12W_TO_PTR_EAX test word ptr [eax], r12w
#define TEST_R12W_TO_PTR_EBX test word ptr [ebx], r12w
#define TEST_R12W_TO_PTR_ECX test word ptr [ecx], r12w
#define TEST_R12W_TO_PTR_EDX test word ptr [edx], r12w
#define TEST_R12W_TO_PTR_EDI test word ptr [edi], r12w
#define TEST_R12W_TO_PTR_ESI test word ptr [esi], r12w
#define TEST_R12W_TO_PTR_EBP test word ptr [ebp], r12w
#define TEST_R12W_TO_PTR_ESP test word ptr [esp], r12w

#define TEST_R13W_TO_PTR_RAX test word ptr [rax], r13w
#define TEST_R13W_TO_PTR_RBX test word ptr [rbx], r13w
#define TEST_R13W_TO_PTR_RCX test word ptr [rcx], r13w
#define TEST_R13W_TO_PTR_RDX test word ptr [rdx], r13w
#define TEST_R13W_TO_PTR_RDI test word ptr [rdi], r13w
#define TEST_R13W_TO_PTR_RSI test word ptr [rsi], r13w
#define TEST_R13W_TO_PTR_RBP test word ptr [rbp], r13w
#define TEST_R13W_TO_PTR_RSP test word ptr [rsp], r13w
#define TEST_R13W_TO_PTR_R8 test word ptr [r8], r13w
#define TEST_R13W_TO_PTR_R9 test word ptr [r9], r13w
#define TEST_R13W_TO_PTR_R10 test word ptr [r10], r13w
#define TEST_R13W_TO_PTR_R11 test word ptr [r11], r13w
#define TEST_R13W_TO_PTR_R12 test word ptr [r12], r13w
#define TEST_R13W_TO_PTR_R13 test word ptr [r13], r13w
#define TEST_R13W_TO_PTR_R14 test word ptr [r14], r13w
#define TEST_R13W_TO_PTR_R15 test word ptr [r15], r13w
#define TEST_R13W_TO_PTR_EAX test word ptr [eax], r13w
#define TEST_R13W_TO_PTR_EBX test word ptr [ebx], r13w
#define TEST_R13W_TO_PTR_ECX test word ptr [ecx], r13w
#define TEST_R13W_TO_PTR_EDX test word ptr [edx], r13w
#define TEST_R13W_TO_PTR_EDI test word ptr [edi], r13w
#define TEST_R13W_TO_PTR_ESI test word ptr [esi], r13w
#define TEST_R13W_TO_PTR_EBP test word ptr [ebp], r13w
#define TEST_R13W_TO_PTR_ESP test word ptr [esp], r13w

#define TEST_R14W_TO_PTR_RAX test word ptr [rax], r14w
#define TEST_R14W_TO_PTR_RBX test word ptr [rbx], r14w
#define TEST_R14W_TO_PTR_RCX test word ptr [rcx], r14w
#define TEST_R14W_TO_PTR_RDX test word ptr [rdx], r14w
#define TEST_R14W_TO_PTR_RDI test word ptr [rdi], r14w
#define TEST_R14W_TO_PTR_RSI test word ptr [rsi], r14w
#define TEST_R14W_TO_PTR_RBP test word ptr [rbp], r14w
#define TEST_R14W_TO_PTR_RSP test word ptr [rsp], r14w
#define TEST_R14W_TO_PTR_R8 test word ptr [r8], r14w
#define TEST_R14W_TO_PTR_R9 test word ptr [r9], r14w
#define TEST_R14W_TO_PTR_R10 test word ptr [r10], r14w
#define TEST_R14W_TO_PTR_R11 test word ptr [r11], r14w
#define TEST_R14W_TO_PTR_R12 test word ptr [r12], r14w
#define TEST_R14W_TO_PTR_R13 test word ptr [r13], r14w
#define TEST_R14W_TO_PTR_R14 test word ptr [r14], r14w
#define TEST_R14W_TO_PTR_R15 test word ptr [r15], r14w
#define TEST_R14W_TO_PTR_EAX test word ptr [eax], r14w
#define TEST_R14W_TO_PTR_EBX test word ptr [ebx], r14w
#define TEST_R14W_TO_PTR_ECX test word ptr [ecx], r14w
#define TEST_R14W_TO_PTR_EDX test word ptr [edx], r14w
#define TEST_R14W_TO_PTR_EDI test word ptr [edi], r14w
#define TEST_R14W_TO_PTR_ESI test word ptr [esi], r14w
#define TEST_R14W_TO_PTR_EBP test word ptr [ebp], r14w
#define TEST_R14W_TO_PTR_ESP test word ptr [esp], r14w

#define TEST_R15W_TO_PTR_RAX test word ptr [rax], r15w
#define TEST_R15W_TO_PTR_RBX test word ptr [rbx], r15w
#define TEST_R15W_TO_PTR_RCX test word ptr [rcx], r15w
#define TEST_R15W_TO_PTR_RDX test word ptr [rdx], r15w
#define TEST_R15W_TO_PTR_RDI test word ptr [rdi], r15w
#define TEST_R15W_TO_PTR_RSI test word ptr [rsi], r15w
#define TEST_R15W_TO_PTR_RBP test word ptr [rbp], r15w
#define TEST_R15W_TO_PTR_RSP test word ptr [rsp], r15w
#define TEST_R15W_TO_PTR_R8 test word ptr [r8], r15w
#define TEST_R15W_TO_PTR_R9 test word ptr [r9], r15w
#define TEST_R15W_TO_PTR_R10 test word ptr [r10], r15w
#define TEST_R15W_TO_PTR_R11 test word ptr [r11], r15w
#define TEST_R15W_TO_PTR_R12 test word ptr [r12], r15w
#define TEST_R15W_TO_PTR_R13 test word ptr [r13], r15w
#define TEST_R15W_TO_PTR_R14 test word ptr [r14], r15w
#define TEST_R15W_TO_PTR_R15 test word ptr [r15], r15w
#define TEST_R15W_TO_PTR_EAX test word ptr [eax], r15w
#define TEST_R15W_TO_PTR_EBX test word ptr [ebx], r15w
#define TEST_R15W_TO_PTR_ECX test word ptr [ecx], r15w
#define TEST_R15W_TO_PTR_EDX test word ptr [edx], r15w
#define TEST_R15W_TO_PTR_EDI test word ptr [edi], r15w
#define TEST_R15W_TO_PTR_ESI test word ptr [esi], r15w
#define TEST_R15W_TO_PTR_EBP test word ptr [ebp], r15w
#define TEST_R15W_TO_PTR_ESP test word ptr [esp], r15w

#define TEST_AX_FROM_PTR_RAX_(VALUE) test ax, word ptr [rax + VALUE]
#define TEST_AX_FROM_PTR_RBX_(VALUE) test ax, word ptr [rbx + VALUE]
#define TEST_AX_FROM_PTR_RCX_(VALUE) test ax, word ptr [rcx + VALUE]
#define TEST_AX_FROM_PTR_RDX_(VALUE) test ax, word ptr [rdx + VALUE]
#define TEST_AX_FROM_PTR_RDI_(VALUE) test ax, word ptr [rdi + VALUE]
#define TEST_AX_FROM_PTR_RSI_(VALUE) test ax, word ptr [rsi + VALUE]
#define TEST_AX_FROM_PTR_RBP_(VALUE) test ax, word ptr [rbp + VALUE]
#define TEST_AX_FROM_PTR_RSP_(VALUE) test ax, word ptr [rsp + VALUE]
#define TEST_AX_FROM_PTR_R8_(VALUE) test ax, word ptr [r8 + VALUE]
#define TEST_AX_FROM_PTR_R9_(VALUE) test ax, word ptr [r9 + VALUE]
#define TEST_AX_FROM_PTR_R10_(VALUE) test ax, word ptr [r10 + VALUE]
#define TEST_AX_FROM_PTR_R11_(VALUE) test ax, word ptr [r11 + VALUE]
#define TEST_AX_FROM_PTR_R12_(VALUE) test ax, word ptr [r12 + VALUE]
#define TEST_AX_FROM_PTR_R13_(VALUE) test ax, word ptr [r13 + VALUE]
#define TEST_AX_FROM_PTR_R14_(VALUE) test ax, word ptr [r14 + VALUE]
#define TEST_AX_FROM_PTR_R15_(VALUE) test ax, word ptr [r15 + VALUE]
#define TEST_AX_FROM_PTR_EAX_(VALUE) test ax, word ptr [eax + VALUE]
#define TEST_AX_FROM_PTR_EBX_(VALUE) test ax, word ptr [ebx + VALUE]
#define TEST_AX_FROM_PTR_ECX_(VALUE) test ax, word ptr [ecx + VALUE]
#define TEST_AX_FROM_PTR_EDX_(VALUE) test ax, word ptr [edx + VALUE]
#define TEST_AX_FROM_PTR_EDI_(VALUE) test ax, word ptr [edi + VALUE]
#define TEST_AX_FROM_PTR_ESI_(VALUE) test ax, word ptr [esi + VALUE]
#define TEST_AX_FROM_PTR_EBP_(VALUE) test ax, word ptr [ebp + VALUE]
#define TEST_AX_FROM_PTR_ESP_(VALUE) test ax, word ptr [esp + VALUE]

#define TEST_BX_FROM_PTR_RAX_(VALUE) test bx, word ptr [rax + VALUE]
#define TEST_BX_FROM_PTR_RBX_(VALUE) test bx, word ptr [rbx + VALUE]
#define TEST_BX_FROM_PTR_RCX_(VALUE) test bx, word ptr [rcx + VALUE]
#define TEST_BX_FROM_PTR_RDX_(VALUE) test bx, word ptr [rdx + VALUE]
#define TEST_BX_FROM_PTR_RDI_(VALUE) test bx, word ptr [rdi + VALUE]
#define TEST_BX_FROM_PTR_RSI_(VALUE) test bx, word ptr [rsi + VALUE]
#define TEST_BX_FROM_PTR_RBP_(VALUE) test bx, word ptr [rbp + VALUE]
#define TEST_BX_FROM_PTR_RSP_(VALUE) test bx, word ptr [rsp + VALUE]
#define TEST_BX_FROM_PTR_R8_(VALUE) test bx, word ptr [r8 + VALUE]
#define TEST_BX_FROM_PTR_R9_(VALUE) test bx, word ptr [r9 + VALUE]
#define TEST_BX_FROM_PTR_R10_(VALUE) test bx, word ptr [r10 + VALUE]
#define TEST_BX_FROM_PTR_R11_(VALUE) test bx, word ptr [r11 + VALUE]
#define TEST_BX_FROM_PTR_R12_(VALUE) test bx, word ptr [r12 + VALUE]
#define TEST_BX_FROM_PTR_R13_(VALUE) test bx, word ptr [r13 + VALUE]
#define TEST_BX_FROM_PTR_R14_(VALUE) test bx, word ptr [r14 + VALUE]
#define TEST_BX_FROM_PTR_R15_(VALUE) test bx, word ptr [r15 + VALUE]
#define TEST_BX_FROM_PTR_EAX_(VALUE) test bx, word ptr [eax + VALUE]
#define TEST_BX_FROM_PTR_EBX_(VALUE) test bx, word ptr [ebx + VALUE]
#define TEST_BX_FROM_PTR_ECX_(VALUE) test bx, word ptr [ecx + VALUE]
#define TEST_BX_FROM_PTR_EDX_(VALUE) test bx, word ptr [edx + VALUE]
#define TEST_BX_FROM_PTR_EDI_(VALUE) test bx, word ptr [edi + VALUE]
#define TEST_BX_FROM_PTR_ESI_(VALUE) test bx, word ptr [esi + VALUE]
#define TEST_BX_FROM_PTR_EBP_(VALUE) test bx, word ptr [ebp + VALUE]
#define TEST_BX_FROM_PTR_ESP_(VALUE) test bx, word ptr [esp + VALUE]

#define TEST_CX_FROM_PTR_RAX_(VALUE) test cx, word ptr [rax + VALUE]
#define TEST_CX_FROM_PTR_RBX_(VALUE) test cx, word ptr [rbx + VALUE]
#define TEST_CX_FROM_PTR_RCX_(VALUE) test cx, word ptr [rcx + VALUE]
#define TEST_CX_FROM_PTR_RDX_(VALUE) test cx, word ptr [rdx + VALUE]
#define TEST_CX_FROM_PTR_RDI_(VALUE) test cx, word ptr [rdi + VALUE]
#define TEST_CX_FROM_PTR_RSI_(VALUE) test cx, word ptr [rsi + VALUE]
#define TEST_CX_FROM_PTR_RBP_(VALUE) test cx, word ptr [rbp + VALUE]
#define TEST_CX_FROM_PTR_RSP_(VALUE) test cx, word ptr [rsp + VALUE]
#define TEST_CX_FROM_PTR_R8_(VALUE) test cx, word ptr [r8 + VALUE]
#define TEST_CX_FROM_PTR_R9_(VALUE) test cx, word ptr [r9 + VALUE]
#define TEST_CX_FROM_PTR_R10_(VALUE) test cx, word ptr [r10 + VALUE]
#define TEST_CX_FROM_PTR_R11_(VALUE) test cx, word ptr [r11 + VALUE]
#define TEST_CX_FROM_PTR_R12_(VALUE) test cx, word ptr [r12 + VALUE]
#define TEST_CX_FROM_PTR_R13_(VALUE) test cx, word ptr [r13 + VALUE]
#define TEST_CX_FROM_PTR_R14_(VALUE) test cx, word ptr [r14 + VALUE]
#define TEST_CX_FROM_PTR_R15_(VALUE) test cx, word ptr [r15 + VALUE]
#define TEST_CX_FROM_PTR_EAX_(VALUE) test cx, word ptr [eax + VALUE]
#define TEST_CX_FROM_PTR_EBX_(VALUE) test cx, word ptr [ebx + VALUE]
#define TEST_CX_FROM_PTR_ECX_(VALUE) test cx, word ptr [ecx + VALUE]
#define TEST_CX_FROM_PTR_EDX_(VALUE) test cx, word ptr [edx + VALUE]
#define TEST_CX_FROM_PTR_EDI_(VALUE) test cx, word ptr [edi + VALUE]
#define TEST_CX_FROM_PTR_ESI_(VALUE) test cx, word ptr [esi + VALUE]
#define TEST_CX_FROM_PTR_EBP_(VALUE) test cx, word ptr [ebp + VALUE]
#define TEST_CX_FROM_PTR_ESP_(VALUE) test cx, word ptr [esp + VALUE]

#define TEST_DX_FROM_PTR_RAX_(VALUE) test dx, word ptr [rax + VALUE]
#define TEST_DX_FROM_PTR_RBX_(VALUE) test dx, word ptr [rbx + VALUE]
#define TEST_DX_FROM_PTR_RCX_(VALUE) test dx, word ptr [rcx + VALUE]
#define TEST_DX_FROM_PTR_RDX_(VALUE) test dx, word ptr [rdx + VALUE]
#define TEST_DX_FROM_PTR_RDI_(VALUE) test dx, word ptr [rdi + VALUE]
#define TEST_DX_FROM_PTR_RSI_(VALUE) test dx, word ptr [rsi + VALUE]
#define TEST_DX_FROM_PTR_RBP_(VALUE) test dx, word ptr [rbp + VALUE]
#define TEST_DX_FROM_PTR_RSP_(VALUE) test dx, word ptr [rsp + VALUE]
#define TEST_DX_FROM_PTR_R8_(VALUE) test dx, word ptr [r8 + VALUE]
#define TEST_DX_FROM_PTR_R9_(VALUE) test dx, word ptr [r9 + VALUE]
#define TEST_DX_FROM_PTR_R10_(VALUE) test dx, word ptr [r10 + VALUE]
#define TEST_DX_FROM_PTR_R11_(VALUE) test dx, word ptr [r11 + VALUE]
#define TEST_DX_FROM_PTR_R12_(VALUE) test dx, word ptr [r12 + VALUE]
#define TEST_DX_FROM_PTR_R13_(VALUE) test dx, word ptr [r13 + VALUE]
#define TEST_DX_FROM_PTR_R14_(VALUE) test dx, word ptr [r14 + VALUE]
#define TEST_DX_FROM_PTR_R15_(VALUE) test dx, word ptr [r15 + VALUE]
#define TEST_DX_FROM_PTR_EAX_(VALUE) test dx, word ptr [eax + VALUE]
#define TEST_DX_FROM_PTR_EBX_(VALUE) test dx, word ptr [ebx + VALUE]
#define TEST_DX_FROM_PTR_ECX_(VALUE) test dx, word ptr [ecx + VALUE]
#define TEST_DX_FROM_PTR_EDX_(VALUE) test dx, word ptr [edx + VALUE]
#define TEST_DX_FROM_PTR_EDI_(VALUE) test dx, word ptr [edi + VALUE]
#define TEST_DX_FROM_PTR_ESI_(VALUE) test dx, word ptr [esi + VALUE]
#define TEST_DX_FROM_PTR_EBP_(VALUE) test dx, word ptr [ebp + VALUE]
#define TEST_DX_FROM_PTR_ESP_(VALUE) test dx, word ptr [esp + VALUE]

#define TEST_DI_FROM_PTR_RAX_(VALUE) test di, word ptr [rax + VALUE]
#define TEST_DI_FROM_PTR_RBX_(VALUE) test di, word ptr [rbx + VALUE]
#define TEST_DI_FROM_PTR_RCX_(VALUE) test di, word ptr [rcx + VALUE]
#define TEST_DI_FROM_PTR_RDX_(VALUE) test di, word ptr [rdx + VALUE]
#define TEST_DI_FROM_PTR_RDI_(VALUE) test di, word ptr [rdi + VALUE]
#define TEST_DI_FROM_PTR_RSI_(VALUE) test di, word ptr [rsi + VALUE]
#define TEST_DI_FROM_PTR_RBP_(VALUE) test di, word ptr [rbp + VALUE]
#define TEST_DI_FROM_PTR_RSP_(VALUE) test di, word ptr [rsp + VALUE]
#define TEST_DI_FROM_PTR_R8_(VALUE) test di, word ptr [r8 + VALUE]
#define TEST_DI_FROM_PTR_R9_(VALUE) test di, word ptr [r9 + VALUE]
#define TEST_DI_FROM_PTR_R10_(VALUE) test di, word ptr [r10 + VALUE]
#define TEST_DI_FROM_PTR_R11_(VALUE) test di, word ptr [r11 + VALUE]
#define TEST_DI_FROM_PTR_R12_(VALUE) test di, word ptr [r12 + VALUE]
#define TEST_DI_FROM_PTR_R13_(VALUE) test di, word ptr [r13 + VALUE]
#define TEST_DI_FROM_PTR_R14_(VALUE) test di, word ptr [r14 + VALUE]
#define TEST_DI_FROM_PTR_R15_(VALUE) test di, word ptr [r15 + VALUE]
#define TEST_DI_FROM_PTR_EAX_(VALUE) test di, word ptr [eax + VALUE]
#define TEST_DI_FROM_PTR_EBX_(VALUE) test di, word ptr [ebx + VALUE]
#define TEST_DI_FROM_PTR_ECX_(VALUE) test di, word ptr [ecx + VALUE]
#define TEST_DI_FROM_PTR_EDX_(VALUE) test di, word ptr [edx + VALUE]
#define TEST_DI_FROM_PTR_EDI_(VALUE) test di, word ptr [edi + VALUE]
#define TEST_DI_FROM_PTR_ESI_(VALUE) test di, word ptr [esi + VALUE]
#define TEST_DI_FROM_PTR_EBP_(VALUE) test di, word ptr [ebp + VALUE]
#define TEST_DI_FROM_PTR_ESP_(VALUE) test di, word ptr [esp + VALUE]

#define TEST_SI_FROM_PTR_RAX_(VALUE) test si, word ptr [rax + VALUE]
#define TEST_SI_FROM_PTR_RBX_(VALUE) test si, word ptr [rbx + VALUE]
#define TEST_SI_FROM_PTR_RCX_(VALUE) test si, word ptr [rcx + VALUE]
#define TEST_SI_FROM_PTR_RDX_(VALUE) test si, word ptr [rdx + VALUE]
#define TEST_SI_FROM_PTR_RDI_(VALUE) test si, word ptr [rdi + VALUE]
#define TEST_SI_FROM_PTR_RSI_(VALUE) test si, word ptr [rsi + VALUE]
#define TEST_SI_FROM_PTR_RBP_(VALUE) test si, word ptr [rbp + VALUE]
#define TEST_SI_FROM_PTR_RSP_(VALUE) test si, word ptr [rsp + VALUE]
#define TEST_SI_FROM_PTR_R8_(VALUE) test si, word ptr [r8 + VALUE]
#define TEST_SI_FROM_PTR_R9_(VALUE) test si, word ptr [r9 + VALUE]
#define TEST_SI_FROM_PTR_R10_(VALUE) test si, word ptr [r10 + VALUE]
#define TEST_SI_FROM_PTR_R11_(VALUE) test si, word ptr [r11 + VALUE]
#define TEST_SI_FROM_PTR_R12_(VALUE) test si, word ptr [r12 + VALUE]
#define TEST_SI_FROM_PTR_R13_(VALUE) test si, word ptr [r13 + VALUE]
#define TEST_SI_FROM_PTR_R14_(VALUE) test si, word ptr [r14 + VALUE]
#define TEST_SI_FROM_PTR_R15_(VALUE) test si, word ptr [r15 + VALUE]
#define TEST_SI_FROM_PTR_EAX_(VALUE) test si, word ptr [eax + VALUE]
#define TEST_SI_FROM_PTR_EBX_(VALUE) test si, word ptr [ebx + VALUE]
#define TEST_SI_FROM_PTR_ECX_(VALUE) test si, word ptr [ecx + VALUE]
#define TEST_SI_FROM_PTR_EDX_(VALUE) test si, word ptr [edx + VALUE]
#define TEST_SI_FROM_PTR_EDI_(VALUE) test si, word ptr [edi + VALUE]
#define TEST_SI_FROM_PTR_ESI_(VALUE) test si, word ptr [esi + VALUE]
#define TEST_SI_FROM_PTR_EBP_(VALUE) test si, word ptr [ebp + VALUE]
#define TEST_SI_FROM_PTR_ESP_(VALUE) test si, word ptr [esp + VALUE]

#define TEST_BP_FROM_PTR_RAX_(VALUE) test bp, word ptr [rax + VALUE]
#define TEST_BP_FROM_PTR_RBX_(VALUE) test bp, word ptr [rbx + VALUE]
#define TEST_BP_FROM_PTR_RCX_(VALUE) test bp, word ptr [rcx + VALUE]
#define TEST_BP_FROM_PTR_RDX_(VALUE) test bp, word ptr [rdx + VALUE]
#define TEST_BP_FROM_PTR_RDI_(VALUE) test bp, word ptr [rdi + VALUE]
#define TEST_BP_FROM_PTR_RSI_(VALUE) test bp, word ptr [rsi + VALUE]
#define TEST_BP_FROM_PTR_RBP_(VALUE) test bp, word ptr [rbp + VALUE]
#define TEST_BP_FROM_PTR_RSP_(VALUE) test bp, word ptr [rsp + VALUE]
#define TEST_BP_FROM_PTR_R8_(VALUE) test bp, word ptr [r8 + VALUE]
#define TEST_BP_FROM_PTR_R9_(VALUE) test bp, word ptr [r9 + VALUE]
#define TEST_BP_FROM_PTR_R10_(VALUE) test bp, word ptr [r10 + VALUE]
#define TEST_BP_FROM_PTR_R11_(VALUE) test bp, word ptr [r11 + VALUE]
#define TEST_BP_FROM_PTR_R12_(VALUE) test bp, word ptr [r12 + VALUE]
#define TEST_BP_FROM_PTR_R13_(VALUE) test bp, word ptr [r13 + VALUE]
#define TEST_BP_FROM_PTR_R14_(VALUE) test bp, word ptr [r14 + VALUE]
#define TEST_BP_FROM_PTR_R15_(VALUE) test bp, word ptr [r15 + VALUE]
#define TEST_BP_FROM_PTR_EAX_(VALUE) test bp, word ptr [eax + VALUE]
#define TEST_BP_FROM_PTR_EBX_(VALUE) test bp, word ptr [ebx + VALUE]
#define TEST_BP_FROM_PTR_ECX_(VALUE) test bp, word ptr [ecx + VALUE]
#define TEST_BP_FROM_PTR_EDX_(VALUE) test bp, word ptr [edx + VALUE]
#define TEST_BP_FROM_PTR_EDI_(VALUE) test bp, word ptr [edi + VALUE]
#define TEST_BP_FROM_PTR_ESI_(VALUE) test bp, word ptr [esi + VALUE]
#define TEST_BP_FROM_PTR_EBP_(VALUE) test bp, word ptr [ebp + VALUE]
#define TEST_BP_FROM_PTR_ESP_(VALUE) test bp, word ptr [esp + VALUE]

#define TEST_SP_FROM_PTR_RAX_(VALUE) test sp, word ptr [rax + VALUE]
#define TEST_SP_FROM_PTR_RBX_(VALUE) test sp, word ptr [rbx + VALUE]
#define TEST_SP_FROM_PTR_RCX_(VALUE) test sp, word ptr [rcx + VALUE]
#define TEST_SP_FROM_PTR_RDX_(VALUE) test sp, word ptr [rdx + VALUE]
#define TEST_SP_FROM_PTR_RDI_(VALUE) test sp, word ptr [rdi + VALUE]
#define TEST_SP_FROM_PTR_RSI_(VALUE) test sp, word ptr [rsi + VALUE]
#define TEST_SP_FROM_PTR_RBP_(VALUE) test sp, word ptr [rbp + VALUE]
#define TEST_SP_FROM_PTR_RSP_(VALUE) test sp, word ptr [rsp + VALUE]
#define TEST_SP_FROM_PTR_R8_(VALUE) test sp, word ptr [r8 + VALUE]
#define TEST_SP_FROM_PTR_R9_(VALUE) test sp, word ptr [r9 + VALUE]
#define TEST_SP_FROM_PTR_R10_(VALUE) test sp, word ptr [r10 + VALUE]
#define TEST_SP_FROM_PTR_R11_(VALUE) test sp, word ptr [r11 + VALUE]
#define TEST_SP_FROM_PTR_R12_(VALUE) test sp, word ptr [r12 + VALUE]
#define TEST_SP_FROM_PTR_R13_(VALUE) test sp, word ptr [r13 + VALUE]
#define TEST_SP_FROM_PTR_R14_(VALUE) test sp, word ptr [r14 + VALUE]
#define TEST_SP_FROM_PTR_R15_(VALUE) test sp, word ptr [r15 + VALUE]
#define TEST_SP_FROM_PTR_EAX_(VALUE) test sp, word ptr [eax + VALUE]
#define TEST_SP_FROM_PTR_EBX_(VALUE) test sp, word ptr [ebx + VALUE]
#define TEST_SP_FROM_PTR_ECX_(VALUE) test sp, word ptr [ecx + VALUE]
#define TEST_SP_FROM_PTR_EDX_(VALUE) test sp, word ptr [edx + VALUE]
#define TEST_SP_FROM_PTR_EDI_(VALUE) test sp, word ptr [edi + VALUE]
#define TEST_SP_FROM_PTR_ESI_(VALUE) test sp, word ptr [esi + VALUE]
#define TEST_SP_FROM_PTR_EBP_(VALUE) test sp, word ptr [ebp + VALUE]
#define TEST_SP_FROM_PTR_ESP_(VALUE) test sp, word ptr [esp + VALUE]

#define TEST_R8W_FROM_PTR_RAX_(VALUE) test r8w, word ptr [rax + VALUE]
#define TEST_R8W_FROM_PTR_RBX_(VALUE) test r8w, word ptr [rbx + VALUE]
#define TEST_R8W_FROM_PTR_RCX_(VALUE) test r8w, word ptr [rcx + VALUE]
#define TEST_R8W_FROM_PTR_RDX_(VALUE) test r8w, word ptr [rdx + VALUE]
#define TEST_R8W_FROM_PTR_RDI_(VALUE) test r8w, word ptr [rdi + VALUE]
#define TEST_R8W_FROM_PTR_RSI_(VALUE) test r8w, word ptr [rsi + VALUE]
#define TEST_R8W_FROM_PTR_RBP_(VALUE) test r8w, word ptr [rbp + VALUE]
#define TEST_R8W_FROM_PTR_RSP_(VALUE) test r8w, word ptr [rsp + VALUE]
#define TEST_R8W_FROM_PTR_R8_(VALUE) test r8w, word ptr [r8 + VALUE]
#define TEST_R8W_FROM_PTR_R9_(VALUE) test r8w, word ptr [r9 + VALUE]
#define TEST_R8W_FROM_PTR_R10_(VALUE) test r8w, word ptr [r10 + VALUE]
#define TEST_R8W_FROM_PTR_R11_(VALUE) test r8w, word ptr [r11 + VALUE]
#define TEST_R8W_FROM_PTR_R12_(VALUE) test r8w, word ptr [r12 + VALUE]
#define TEST_R8W_FROM_PTR_R13_(VALUE) test r8w, word ptr [r13 + VALUE]
#define TEST_R8W_FROM_PTR_R14_(VALUE) test r8w, word ptr [r14 + VALUE]
#define TEST_R8W_FROM_PTR_R15_(VALUE) test r8w, word ptr [r15 + VALUE]
#define TEST_R8W_FROM_PTR_EAX_(VALUE) test r8w, word ptr [eax + VALUE]
#define TEST_R8W_FROM_PTR_EBX_(VALUE) test r8w, word ptr [ebx + VALUE]
#define TEST_R8W_FROM_PTR_ECX_(VALUE) test r8w, word ptr [ecx + VALUE]
#define TEST_R8W_FROM_PTR_EDX_(VALUE) test r8w, word ptr [edx + VALUE]
#define TEST_R8W_FROM_PTR_EDI_(VALUE) test r8w, word ptr [edi + VALUE]
#define TEST_R8W_FROM_PTR_ESI_(VALUE) test r8w, word ptr [esi + VALUE]
#define TEST_R8W_FROM_PTR_EBP_(VALUE) test r8w, word ptr [ebp + VALUE]
#define TEST_R8W_FROM_PTR_ESP_(VALUE) test r8w, word ptr [esp + VALUE]

#define TEST_R9W_FROM_PTR_RAX_(VALUE) test r9w, word ptr [rax + VALUE]
#define TEST_R9W_FROM_PTR_RBX_(VALUE) test r9w, word ptr [rbx + VALUE]
#define TEST_R9W_FROM_PTR_RCX_(VALUE) test r9w, word ptr [rcx + VALUE]
#define TEST_R9W_FROM_PTR_RDX_(VALUE) test r9w, word ptr [rdx + VALUE]
#define TEST_R9W_FROM_PTR_RDI_(VALUE) test r9w, word ptr [rdi + VALUE]
#define TEST_R9W_FROM_PTR_RSI_(VALUE) test r9w, word ptr [rsi + VALUE]
#define TEST_R9W_FROM_PTR_RBP_(VALUE) test r9w, word ptr [rbp + VALUE]
#define TEST_R9W_FROM_PTR_RSP_(VALUE) test r9w, word ptr [rsp + VALUE]
#define TEST_R9W_FROM_PTR_R8_(VALUE) test r9w, word ptr [r8 + VALUE]
#define TEST_R9W_FROM_PTR_R9_(VALUE) test r9w, word ptr [r9 + VALUE]
#define TEST_R9W_FROM_PTR_R10_(VALUE) test r9w, word ptr [r10 + VALUE]
#define TEST_R9W_FROM_PTR_R11_(VALUE) test r9w, word ptr [r11 + VALUE]
#define TEST_R9W_FROM_PTR_R12_(VALUE) test r9w, word ptr [r12 + VALUE]
#define TEST_R9W_FROM_PTR_R13_(VALUE) test r9w, word ptr [r13 + VALUE]
#define TEST_R9W_FROM_PTR_R14_(VALUE) test r9w, word ptr [r14 + VALUE]
#define TEST_R9W_FROM_PTR_R15_(VALUE) test r9w, word ptr [r15 + VALUE]
#define TEST_R9W_FROM_PTR_EAX_(VALUE) test r9w, word ptr [eax + VALUE]
#define TEST_R9W_FROM_PTR_EBX_(VALUE) test r9w, word ptr [ebx + VALUE]
#define TEST_R9W_FROM_PTR_ECX_(VALUE) test r9w, word ptr [ecx + VALUE]
#define TEST_R9W_FROM_PTR_EDX_(VALUE) test r9w, word ptr [edx + VALUE]
#define TEST_R9W_FROM_PTR_EDI_(VALUE) test r9w, word ptr [edi + VALUE]
#define TEST_R9W_FROM_PTR_ESI_(VALUE) test r9w, word ptr [esi + VALUE]
#define TEST_R9W_FROM_PTR_EBP_(VALUE) test r9w, word ptr [ebp + VALUE]
#define TEST_R9W_FROM_PTR_ESP_(VALUE) test r9w, word ptr [esp + VALUE]

#define TEST_R10W_FROM_PTR_RAX_(VALUE) test r10w, word ptr [rax + VALUE]
#define TEST_R10W_FROM_PTR_RBX_(VALUE) test r10w, word ptr [rbx + VALUE]
#define TEST_R10W_FROM_PTR_RCX_(VALUE) test r10w, word ptr [rcx + VALUE]
#define TEST_R10W_FROM_PTR_RDX_(VALUE) test r10w, word ptr [rdx + VALUE]
#define TEST_R10W_FROM_PTR_RDI_(VALUE) test r10w, word ptr [rdi + VALUE]
#define TEST_R10W_FROM_PTR_RSI_(VALUE) test r10w, word ptr [rsi + VALUE]
#define TEST_R10W_FROM_PTR_RBP_(VALUE) test r10w, word ptr [rbp + VALUE]
#define TEST_R10W_FROM_PTR_RSP_(VALUE) test r10w, word ptr [rsp + VALUE]
#define TEST_R10W_FROM_PTR_R8_(VALUE) test r10w, word ptr [r8 + VALUE]
#define TEST_R10W_FROM_PTR_R9_(VALUE) test r10w, word ptr [r9 + VALUE]
#define TEST_R10W_FROM_PTR_R10_(VALUE) test r10w, word ptr [r10 + VALUE]
#define TEST_R10W_FROM_PTR_R11_(VALUE) test r10w, word ptr [r11 + VALUE]
#define TEST_R10W_FROM_PTR_R12_(VALUE) test r10w, word ptr [r12 + VALUE]
#define TEST_R10W_FROM_PTR_R13_(VALUE) test r10w, word ptr [r13 + VALUE]
#define TEST_R10W_FROM_PTR_R14_(VALUE) test r10w, word ptr [r14 + VALUE]
#define TEST_R10W_FROM_PTR_R15_(VALUE) test r10w, word ptr [r15 + VALUE]
#define TEST_R10W_FROM_PTR_EAX_(VALUE) test r10w, word ptr [eax + VALUE]
#define TEST_R10W_FROM_PTR_EBX_(VALUE) test r10w, word ptr [ebx + VALUE]
#define TEST_R10W_FROM_PTR_ECX_(VALUE) test r10w, word ptr [ecx + VALUE]
#define TEST_R10W_FROM_PTR_EDX_(VALUE) test r10w, word ptr [edx + VALUE]
#define TEST_R10W_FROM_PTR_EDI_(VALUE) test r10w, word ptr [edi + VALUE]
#define TEST_R10W_FROM_PTR_ESI_(VALUE) test r10w, word ptr [esi + VALUE]
#define TEST_R10W_FROM_PTR_EBP_(VALUE) test r10w, word ptr [ebp + VALUE]
#define TEST_R10W_FROM_PTR_ESP_(VALUE) test r10w, word ptr [esp + VALUE]

#define TEST_R11W_FROM_PTR_RAX_(VALUE) test r11w, word ptr [rax + VALUE]
#define TEST_R11W_FROM_PTR_RBX_(VALUE) test r11w, word ptr [rbx + VALUE]
#define TEST_R11W_FROM_PTR_RCX_(VALUE) test r11w, word ptr [rcx + VALUE]
#define TEST_R11W_FROM_PTR_RDX_(VALUE) test r11w, word ptr [rdx + VALUE]
#define TEST_R11W_FROM_PTR_RDI_(VALUE) test r11w, word ptr [rdi + VALUE]
#define TEST_R11W_FROM_PTR_RSI_(VALUE) test r11w, word ptr [rsi + VALUE]
#define TEST_R11W_FROM_PTR_RBP_(VALUE) test r11w, word ptr [rbp + VALUE]
#define TEST_R11W_FROM_PTR_RSP_(VALUE) test r11w, word ptr [rsp + VALUE]
#define TEST_R11W_FROM_PTR_R8_(VALUE) test r11w, word ptr [r8 + VALUE]
#define TEST_R11W_FROM_PTR_R9_(VALUE) test r11w, word ptr [r9 + VALUE]
#define TEST_R11W_FROM_PTR_R10_(VALUE) test r11w, word ptr [r10 + VALUE]
#define TEST_R11W_FROM_PTR_R11_(VALUE) test r11w, word ptr [r11 + VALUE]
#define TEST_R11W_FROM_PTR_R12_(VALUE) test r11w, word ptr [r12 + VALUE]
#define TEST_R11W_FROM_PTR_R13_(VALUE) test r11w, word ptr [r13 + VALUE]
#define TEST_R11W_FROM_PTR_R14_(VALUE) test r11w, word ptr [r14 + VALUE]
#define TEST_R11W_FROM_PTR_R15_(VALUE) test r11w, word ptr [r15 + VALUE]
#define TEST_R11W_FROM_PTR_EAX_(VALUE) test r11w, word ptr [eax + VALUE]
#define TEST_R11W_FROM_PTR_EBX_(VALUE) test r11w, word ptr [ebx + VALUE]
#define TEST_R11W_FROM_PTR_ECX_(VALUE) test r11w, word ptr [ecx + VALUE]
#define TEST_R11W_FROM_PTR_EDX_(VALUE) test r11w, word ptr [edx + VALUE]
#define TEST_R11W_FROM_PTR_EDI_(VALUE) test r11w, word ptr [edi + VALUE]
#define TEST_R11W_FROM_PTR_ESI_(VALUE) test r11w, word ptr [esi + VALUE]
#define TEST_R11W_FROM_PTR_EBP_(VALUE) test r11w, word ptr [ebp + VALUE]
#define TEST_R11W_FROM_PTR_ESP_(VALUE) test r11w, word ptr [esp + VALUE]

#define TEST_R12W_FROM_PTR_RAX_(VALUE) test r12w, word ptr [rax + VALUE]
#define TEST_R12W_FROM_PTR_RBX_(VALUE) test r12w, word ptr [rbx + VALUE]
#define TEST_R12W_FROM_PTR_RCX_(VALUE) test r12w, word ptr [rcx + VALUE]
#define TEST_R12W_FROM_PTR_RDX_(VALUE) test r12w, word ptr [rdx + VALUE]
#define TEST_R12W_FROM_PTR_RDI_(VALUE) test r12w, word ptr [rdi + VALUE]
#define TEST_R12W_FROM_PTR_RSI_(VALUE) test r12w, word ptr [rsi + VALUE]
#define TEST_R12W_FROM_PTR_RBP_(VALUE) test r12w, word ptr [rbp + VALUE]
#define TEST_R12W_FROM_PTR_RSP_(VALUE) test r12w, word ptr [rsp + VALUE]
#define TEST_R12W_FROM_PTR_R8_(VALUE) test r12w, word ptr [r8 + VALUE]
#define TEST_R12W_FROM_PTR_R9_(VALUE) test r12w, word ptr [r9 + VALUE]
#define TEST_R12W_FROM_PTR_R10_(VALUE) test r12w, word ptr [r10 + VALUE]
#define TEST_R12W_FROM_PTR_R11_(VALUE) test r12w, word ptr [r11 + VALUE]
#define TEST_R12W_FROM_PTR_R12_(VALUE) test r12w, word ptr [r12 + VALUE]
#define TEST_R12W_FROM_PTR_R13_(VALUE) test r12w, word ptr [r13 + VALUE]
#define TEST_R12W_FROM_PTR_R14_(VALUE) test r12w, word ptr [r14 + VALUE]
#define TEST_R12W_FROM_PTR_R15_(VALUE) test r12w, word ptr [r15 + VALUE]
#define TEST_R12W_FROM_PTR_EAX_(VALUE) test r12w, word ptr [eax + VALUE]
#define TEST_R12W_FROM_PTR_EBX_(VALUE) test r12w, word ptr [ebx + VALUE]
#define TEST_R12W_FROM_PTR_ECX_(VALUE) test r12w, word ptr [ecx + VALUE]
#define TEST_R12W_FROM_PTR_EDX_(VALUE) test r12w, word ptr [edx + VALUE]
#define TEST_R12W_FROM_PTR_EDI_(VALUE) test r12w, word ptr [edi + VALUE]
#define TEST_R12W_FROM_PTR_ESI_(VALUE) test r12w, word ptr [esi + VALUE]
#define TEST_R12W_FROM_PTR_EBP_(VALUE) test r12w, word ptr [ebp + VALUE]
#define TEST_R12W_FROM_PTR_ESP_(VALUE) test r12w, word ptr [esp + VALUE]

#define TEST_R13W_FROM_PTR_RAX_(VALUE) test r13w, word ptr [rax + VALUE]
#define TEST_R13W_FROM_PTR_RBX_(VALUE) test r13w, word ptr [rbx + VALUE]
#define TEST_R13W_FROM_PTR_RCX_(VALUE) test r13w, word ptr [rcx + VALUE]
#define TEST_R13W_FROM_PTR_RDX_(VALUE) test r13w, word ptr [rdx + VALUE]
#define TEST_R13W_FROM_PTR_RDI_(VALUE) test r13w, word ptr [rdi + VALUE]
#define TEST_R13W_FROM_PTR_RSI_(VALUE) test r13w, word ptr [rsi + VALUE]
#define TEST_R13W_FROM_PTR_RBP_(VALUE) test r13w, word ptr [rbp + VALUE]
#define TEST_R13W_FROM_PTR_RSP_(VALUE) test r13w, word ptr [rsp + VALUE]
#define TEST_R13W_FROM_PTR_R8_(VALUE) test r13w, word ptr [r8 + VALUE]
#define TEST_R13W_FROM_PTR_R9_(VALUE) test r13w, word ptr [r9 + VALUE]
#define TEST_R13W_FROM_PTR_R10_(VALUE) test r13w, word ptr [r10 + VALUE]
#define TEST_R13W_FROM_PTR_R11_(VALUE) test r13w, word ptr [r11 + VALUE]
#define TEST_R13W_FROM_PTR_R12_(VALUE) test r13w, word ptr [r12 + VALUE]
#define TEST_R13W_FROM_PTR_R13_(VALUE) test r13w, word ptr [r13 + VALUE]
#define TEST_R13W_FROM_PTR_R14_(VALUE) test r13w, word ptr [r14 + VALUE]
#define TEST_R13W_FROM_PTR_R15_(VALUE) test r13w, word ptr [r15 + VALUE]
#define TEST_R13W_FROM_PTR_EAX_(VALUE) test r13w, word ptr [eax + VALUE]
#define TEST_R13W_FROM_PTR_EBX_(VALUE) test r13w, word ptr [ebx + VALUE]
#define TEST_R13W_FROM_PTR_ECX_(VALUE) test r13w, word ptr [ecx + VALUE]
#define TEST_R13W_FROM_PTR_EDX_(VALUE) test r13w, word ptr [edx + VALUE]
#define TEST_R13W_FROM_PTR_EDI_(VALUE) test r13w, word ptr [edi + VALUE]
#define TEST_R13W_FROM_PTR_ESI_(VALUE) test r13w, word ptr [esi + VALUE]
#define TEST_R13W_FROM_PTR_EBP_(VALUE) test r13w, word ptr [ebp + VALUE]
#define TEST_R13W_FROM_PTR_ESP_(VALUE) test r13w, word ptr [esp + VALUE]

#define TEST_R14W_FROM_PTR_RAX_(VALUE) test r14w, word ptr [rax + VALUE]
#define TEST_R14W_FROM_PTR_RBX_(VALUE) test r14w, word ptr [rbx + VALUE]
#define TEST_R14W_FROM_PTR_RCX_(VALUE) test r14w, word ptr [rcx + VALUE]
#define TEST_R14W_FROM_PTR_RDX_(VALUE) test r14w, word ptr [rdx + VALUE]
#define TEST_R14W_FROM_PTR_RDI_(VALUE) test r14w, word ptr [rdi + VALUE]
#define TEST_R14W_FROM_PTR_RSI_(VALUE) test r14w, word ptr [rsi + VALUE]
#define TEST_R14W_FROM_PTR_RBP_(VALUE) test r14w, word ptr [rbp + VALUE]
#define TEST_R14W_FROM_PTR_RSP_(VALUE) test r14w, word ptr [rsp + VALUE]
#define TEST_R14W_FROM_PTR_R8_(VALUE) test r14w, word ptr [r8 + VALUE]
#define TEST_R14W_FROM_PTR_R9_(VALUE) test r14w, word ptr [r9 + VALUE]
#define TEST_R14W_FROM_PTR_R10_(VALUE) test r14w, word ptr [r10 + VALUE]
#define TEST_R14W_FROM_PTR_R11_(VALUE) test r14w, word ptr [r11 + VALUE]
#define TEST_R14W_FROM_PTR_R12_(VALUE) test r14w, word ptr [r12 + VALUE]
#define TEST_R14W_FROM_PTR_R13_(VALUE) test r14w, word ptr [r13 + VALUE]
#define TEST_R14W_FROM_PTR_R14_(VALUE) test r14w, word ptr [r14 + VALUE]
#define TEST_R14W_FROM_PTR_R15_(VALUE) test r14w, word ptr [r15 + VALUE]
#define TEST_R14W_FROM_PTR_EAX_(VALUE) test r14w, word ptr [eax + VALUE]
#define TEST_R14W_FROM_PTR_EBX_(VALUE) test r14w, word ptr [ebx + VALUE]
#define TEST_R14W_FROM_PTR_ECX_(VALUE) test r14w, word ptr [ecx + VALUE]
#define TEST_R14W_FROM_PTR_EDX_(VALUE) test r14w, word ptr [edx + VALUE]
#define TEST_R14W_FROM_PTR_EDI_(VALUE) test r14w, word ptr [edi + VALUE]
#define TEST_R14W_FROM_PTR_ESI_(VALUE) test r14w, word ptr [esi + VALUE]
#define TEST_R14W_FROM_PTR_EBP_(VALUE) test r14w, word ptr [ebp + VALUE]
#define TEST_R14W_FROM_PTR_ESP_(VALUE) test r14w, word ptr [esp + VALUE]

#define TEST_R15W_FROM_PTR_RAX_(VALUE) test r15w, word ptr [rax + VALUE]
#define TEST_R15W_FROM_PTR_RBX_(VALUE) test r15w, word ptr [rbx + VALUE]
#define TEST_R15W_FROM_PTR_RCX_(VALUE) test r15w, word ptr [rcx + VALUE]
#define TEST_R15W_FROM_PTR_RDX_(VALUE) test r15w, word ptr [rdx + VALUE]
#define TEST_R15W_FROM_PTR_RDI_(VALUE) test r15w, word ptr [rdi + VALUE]
#define TEST_R15W_FROM_PTR_RSI_(VALUE) test r15w, word ptr [rsi + VALUE]
#define TEST_R15W_FROM_PTR_RBP_(VALUE) test r15w, word ptr [rbp + VALUE]
#define TEST_R15W_FROM_PTR_RSP_(VALUE) test r15w, word ptr [rsp + VALUE]
#define TEST_R15W_FROM_PTR_R8_(VALUE) test r15w, word ptr [r8 + VALUE]
#define TEST_R15W_FROM_PTR_R9_(VALUE) test r15w, word ptr [r9 + VALUE]
#define TEST_R15W_FROM_PTR_R10_(VALUE) test r15w, word ptr [r10 + VALUE]
#define TEST_R15W_FROM_PTR_R11_(VALUE) test r15w, word ptr [r11 + VALUE]
#define TEST_R15W_FROM_PTR_R12_(VALUE) test r15w, word ptr [r12 + VALUE]
#define TEST_R15W_FROM_PTR_R13_(VALUE) test r15w, word ptr [r13 + VALUE]
#define TEST_R15W_FROM_PTR_R14_(VALUE) test r15w, word ptr [r14 + VALUE]
#define TEST_R15W_FROM_PTR_R15_(VALUE) test r15w, word ptr [r15 + VALUE]
#define TEST_R15W_FROM_PTR_EAX_(VALUE) test r15w, word ptr [eax + VALUE]
#define TEST_R15W_FROM_PTR_EBX_(VALUE) test r15w, word ptr [ebx + VALUE]
#define TEST_R15W_FROM_PTR_ECX_(VALUE) test r15w, word ptr [ecx + VALUE]
#define TEST_R15W_FROM_PTR_EDX_(VALUE) test r15w, word ptr [edx + VALUE]
#define TEST_R15W_FROM_PTR_EDI_(VALUE) test r15w, word ptr [edi + VALUE]
#define TEST_R15W_FROM_PTR_ESI_(VALUE) test r15w, word ptr [esi + VALUE]
#define TEST_R15W_FROM_PTR_EBP_(VALUE) test r15w, word ptr [ebp + VALUE]
#define TEST_R15W_FROM_PTR_ESP_(VALUE) test r15w, word ptr [esp + VALUE]

#define TEST_AX_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], ax
#define TEST_AX_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], ax
#define TEST_AX_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], ax
#define TEST_AX_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], ax
#define TEST_AX_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], ax
#define TEST_AX_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], ax
#define TEST_AX_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], ax
#define TEST_AX_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], ax
#define TEST_AX_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], ax
#define TEST_AX_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], ax
#define TEST_AX_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], ax
#define TEST_AX_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], ax
#define TEST_AX_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], ax
#define TEST_AX_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], ax
#define TEST_AX_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], ax
#define TEST_AX_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], ax
#define TEST_AX_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], ax
#define TEST_AX_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], ax
#define TEST_AX_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], ax
#define TEST_AX_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], ax
#define TEST_AX_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], ax
#define TEST_AX_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], ax
#define TEST_AX_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], ax
#define TEST_AX_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], ax

#define TEST_BX_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], bx
#define TEST_BX_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], bx
#define TEST_BX_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], bx
#define TEST_BX_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], bx
#define TEST_BX_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], bx
#define TEST_BX_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], bx
#define TEST_BX_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], bx
#define TEST_BX_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], bx
#define TEST_BX_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], bx
#define TEST_BX_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], bx
#define TEST_BX_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], bx
#define TEST_BX_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], bx
#define TEST_BX_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], bx
#define TEST_BX_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], bx
#define TEST_BX_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], bx
#define TEST_BX_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], bx
#define TEST_BX_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], bx
#define TEST_BX_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], bx
#define TEST_BX_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], bx
#define TEST_BX_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], bx
#define TEST_BX_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], bx
#define TEST_BX_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], bx
#define TEST_BX_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], bx
#define TEST_BX_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], bx

#define TEST_CX_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], cx
#define TEST_CX_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], cx
#define TEST_CX_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], cx
#define TEST_CX_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], cx
#define TEST_CX_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], cx
#define TEST_CX_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], cx
#define TEST_CX_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], cx
#define TEST_CX_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], cx
#define TEST_CX_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], cx
#define TEST_CX_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], cx
#define TEST_CX_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], cx
#define TEST_CX_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], cx
#define TEST_CX_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], cx
#define TEST_CX_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], cx
#define TEST_CX_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], cx
#define TEST_CX_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], cx
#define TEST_CX_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], cx
#define TEST_CX_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], cx
#define TEST_CX_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], cx
#define TEST_CX_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], cx
#define TEST_CX_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], cx
#define TEST_CX_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], cx
#define TEST_CX_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], cx
#define TEST_CX_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], cx

#define TEST_DX_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], dx
#define TEST_DX_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], dx
#define TEST_DX_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], dx
#define TEST_DX_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], dx
#define TEST_DX_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], dx
#define TEST_DX_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], dx
#define TEST_DX_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], dx
#define TEST_DX_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], dx
#define TEST_DX_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], dx
#define TEST_DX_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], dx
#define TEST_DX_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], dx
#define TEST_DX_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], dx
#define TEST_DX_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], dx
#define TEST_DX_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], dx
#define TEST_DX_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], dx
#define TEST_DX_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], dx
#define TEST_DX_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], dx
#define TEST_DX_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], dx
#define TEST_DX_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], dx
#define TEST_DX_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], dx
#define TEST_DX_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], dx
#define TEST_DX_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], dx
#define TEST_DX_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], dx
#define TEST_DX_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], dx

#define TEST_DI_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], di
#define TEST_DI_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], di
#define TEST_DI_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], di
#define TEST_DI_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], di
#define TEST_DI_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], di
#define TEST_DI_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], di
#define TEST_DI_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], di
#define TEST_DI_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], di
#define TEST_DI_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], di
#define TEST_DI_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], di
#define TEST_DI_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], di
#define TEST_DI_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], di
#define TEST_DI_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], di
#define TEST_DI_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], di
#define TEST_DI_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], di
#define TEST_DI_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], di
#define TEST_DI_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], di
#define TEST_DI_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], di
#define TEST_DI_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], di
#define TEST_DI_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], di
#define TEST_DI_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], di
#define TEST_DI_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], di
#define TEST_DI_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], di
#define TEST_DI_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], di

#define TEST_SI_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], si
#define TEST_SI_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], si
#define TEST_SI_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], si
#define TEST_SI_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], si
#define TEST_SI_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], si
#define TEST_SI_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], si
#define TEST_SI_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], si
#define TEST_SI_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], si
#define TEST_SI_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], si
#define TEST_SI_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], si
#define TEST_SI_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], si
#define TEST_SI_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], si
#define TEST_SI_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], si
#define TEST_SI_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], si
#define TEST_SI_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], si
#define TEST_SI_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], si
#define TEST_SI_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], si
#define TEST_SI_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], si
#define TEST_SI_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], si
#define TEST_SI_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], si
#define TEST_SI_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], si
#define TEST_SI_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], si
#define TEST_SI_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], si
#define TEST_SI_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], si

#define TEST_BP_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], bp
#define TEST_BP_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], bp
#define TEST_BP_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], bp
#define TEST_BP_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], bp
#define TEST_BP_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], bp
#define TEST_BP_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], bp
#define TEST_BP_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], bp
#define TEST_BP_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], bp
#define TEST_BP_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], bp
#define TEST_BP_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], bp
#define TEST_BP_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], bp
#define TEST_BP_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], bp
#define TEST_BP_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], bp
#define TEST_BP_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], bp
#define TEST_BP_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], bp
#define TEST_BP_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], bp
#define TEST_BP_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], bp
#define TEST_BP_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], bp
#define TEST_BP_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], bp
#define TEST_BP_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], bp
#define TEST_BP_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], bp
#define TEST_BP_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], bp
#define TEST_BP_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], bp
#define TEST_BP_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], bp

#define TEST_SP_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], sp
#define TEST_SP_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], sp
#define TEST_SP_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], sp
#define TEST_SP_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], sp
#define TEST_SP_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], sp
#define TEST_SP_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], sp
#define TEST_SP_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], sp
#define TEST_SP_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], sp
#define TEST_SP_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], sp
#define TEST_SP_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], sp
#define TEST_SP_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], sp
#define TEST_SP_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], sp
#define TEST_SP_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], sp
#define TEST_SP_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], sp
#define TEST_SP_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], sp
#define TEST_SP_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], sp
#define TEST_SP_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], sp
#define TEST_SP_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], sp
#define TEST_SP_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], sp
#define TEST_SP_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], sp
#define TEST_SP_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], sp
#define TEST_SP_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], sp
#define TEST_SP_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], sp
#define TEST_SP_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], sp

#define TEST_R8W_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], r8w
#define TEST_R8W_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], r8w
#define TEST_R8W_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], r8w
#define TEST_R8W_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], r8w
#define TEST_R8W_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], r8w
#define TEST_R8W_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], r8w
#define TEST_R8W_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], r8w
#define TEST_R8W_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], r8w
#define TEST_R8W_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], r8w
#define TEST_R8W_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], r8w
#define TEST_R8W_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], r8w
#define TEST_R8W_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], r8w
#define TEST_R8W_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], r8w
#define TEST_R8W_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], r8w
#define TEST_R8W_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], r8w
#define TEST_R8W_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], r8w
#define TEST_R8W_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], r8w
#define TEST_R8W_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], r8w
#define TEST_R8W_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], r8w
#define TEST_R8W_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], r8w
#define TEST_R8W_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], r8w
#define TEST_R8W_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], r8w
#define TEST_R8W_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], r8w
#define TEST_R8W_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], r8w

#define TEST_R9W_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], r9w
#define TEST_R9W_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], r9w
#define TEST_R9W_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], r9w
#define TEST_R9W_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], r9w
#define TEST_R9W_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], r9w
#define TEST_R9W_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], r9w
#define TEST_R9W_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], r9w
#define TEST_R9W_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], r9w
#define TEST_R9W_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], r9w
#define TEST_R9W_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], r9w
#define TEST_R9W_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], r9w
#define TEST_R9W_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], r9w
#define TEST_R9W_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], r9w
#define TEST_R9W_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], r9w
#define TEST_R9W_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], r9w
#define TEST_R9W_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], r9w
#define TEST_R9W_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], r9w
#define TEST_R9W_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], r9w
#define TEST_R9W_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], r9w
#define TEST_R9W_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], r9w
#define TEST_R9W_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], r9w
#define TEST_R9W_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], r9w
#define TEST_R9W_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], r9w
#define TEST_R9W_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], r9w

#define TEST_R10W_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], r10w
#define TEST_R10W_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], r10w
#define TEST_R10W_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], r10w
#define TEST_R10W_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], r10w
#define TEST_R10W_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], r10w
#define TEST_R10W_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], r10w
#define TEST_R10W_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], r10w
#define TEST_R10W_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], r10w
#define TEST_R10W_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], r10w
#define TEST_R10W_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], r10w
#define TEST_R10W_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], r10w
#define TEST_R10W_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], r10w
#define TEST_R10W_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], r10w
#define TEST_R10W_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], r10w
#define TEST_R10W_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], r10w
#define TEST_R10W_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], r10w
#define TEST_R10W_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], r10w
#define TEST_R10W_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], r10w
#define TEST_R10W_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], r10w
#define TEST_R10W_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], r10w
#define TEST_R10W_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], r10w
#define TEST_R10W_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], r10w
#define TEST_R10W_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], r10w
#define TEST_R10W_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], r10w

#define TEST_R11W_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], r11w
#define TEST_R11W_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], r11w
#define TEST_R11W_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], r11w
#define TEST_R11W_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], r11w
#define TEST_R11W_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], r11w
#define TEST_R11W_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], r11w
#define TEST_R11W_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], r11w
#define TEST_R11W_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], r11w
#define TEST_R11W_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], r11w
#define TEST_R11W_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], r11w
#define TEST_R11W_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], r11w
#define TEST_R11W_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], r11w
#define TEST_R11W_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], r11w
#define TEST_R11W_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], r11w
#define TEST_R11W_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], r11w
#define TEST_R11W_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], r11w
#define TEST_R11W_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], r11w
#define TEST_R11W_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], r11w
#define TEST_R11W_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], r11w
#define TEST_R11W_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], r11w
#define TEST_R11W_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], r11w
#define TEST_R11W_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], r11w
#define TEST_R11W_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], r11w
#define TEST_R11W_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], r11w

#define TEST_R12W_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], r12w
#define TEST_R12W_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], r12w
#define TEST_R12W_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], r12w
#define TEST_R12W_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], r12w
#define TEST_R12W_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], r12w
#define TEST_R12W_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], r12w
#define TEST_R12W_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], r12w
#define TEST_R12W_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], r12w
#define TEST_R12W_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], r12w
#define TEST_R12W_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], r12w
#define TEST_R12W_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], r12w
#define TEST_R12W_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], r12w
#define TEST_R12W_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], r12w
#define TEST_R12W_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], r12w
#define TEST_R12W_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], r12w
#define TEST_R12W_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], r12w
#define TEST_R12W_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], r12w
#define TEST_R12W_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], r12w
#define TEST_R12W_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], r12w
#define TEST_R12W_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], r12w
#define TEST_R12W_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], r12w
#define TEST_R12W_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], r12w
#define TEST_R12W_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], r12w
#define TEST_R12W_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], r12w

#define TEST_R13W_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], r13w
#define TEST_R13W_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], r13w
#define TEST_R13W_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], r13w
#define TEST_R13W_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], r13w
#define TEST_R13W_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], r13w
#define TEST_R13W_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], r13w
#define TEST_R13W_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], r13w
#define TEST_R13W_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], r13w
#define TEST_R13W_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], r13w
#define TEST_R13W_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], r13w
#define TEST_R13W_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], r13w
#define TEST_R13W_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], r13w
#define TEST_R13W_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], r13w
#define TEST_R13W_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], r13w
#define TEST_R13W_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], r13w
#define TEST_R13W_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], r13w
#define TEST_R13W_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], r13w
#define TEST_R13W_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], r13w
#define TEST_R13W_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], r13w
#define TEST_R13W_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], r13w
#define TEST_R13W_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], r13w
#define TEST_R13W_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], r13w
#define TEST_R13W_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], r13w
#define TEST_R13W_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], r13w

#define TEST_R14W_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], r14w
#define TEST_R14W_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], r14w
#define TEST_R14W_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], r14w
#define TEST_R14W_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], r14w
#define TEST_R14W_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], r14w
#define TEST_R14W_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], r14w
#define TEST_R14W_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], r14w
#define TEST_R14W_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], r14w
#define TEST_R14W_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], r14w
#define TEST_R14W_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], r14w
#define TEST_R14W_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], r14w
#define TEST_R14W_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], r14w
#define TEST_R14W_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], r14w
#define TEST_R14W_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], r14w
#define TEST_R14W_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], r14w
#define TEST_R14W_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], r14w
#define TEST_R14W_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], r14w
#define TEST_R14W_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], r14w
#define TEST_R14W_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], r14w
#define TEST_R14W_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], r14w
#define TEST_R14W_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], r14w
#define TEST_R14W_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], r14w
#define TEST_R14W_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], r14w
#define TEST_R14W_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], r14w

#define TEST_R15W_TO_PTR_RAX_(VALUE) test word ptr [rax + VALUE], r15w
#define TEST_R15W_TO_PTR_RBX_(VALUE) test word ptr [rbx + VALUE], r15w
#define TEST_R15W_TO_PTR_RCX_(VALUE) test word ptr [rcx + VALUE], r15w
#define TEST_R15W_TO_PTR_RDX_(VALUE) test word ptr [rdx + VALUE], r15w
#define TEST_R15W_TO_PTR_RDI_(VALUE) test word ptr [rdi + VALUE], r15w
#define TEST_R15W_TO_PTR_RSI_(VALUE) test word ptr [rsi + VALUE], r15w
#define TEST_R15W_TO_PTR_RBP_(VALUE) test word ptr [rbp + VALUE], r15w
#define TEST_R15W_TO_PTR_RSP_(VALUE) test word ptr [rsp + VALUE], r15w
#define TEST_R15W_TO_PTR_R8_(VALUE) test word ptr [r8 + VALUE], r15w
#define TEST_R15W_TO_PTR_R9_(VALUE) test word ptr [r9 + VALUE], r15w
#define TEST_R15W_TO_PTR_R10_(VALUE) test word ptr [r10 + VALUE], r15w
#define TEST_R15W_TO_PTR_R11_(VALUE) test word ptr [r11 + VALUE], r15w
#define TEST_R15W_TO_PTR_R12_(VALUE) test word ptr [r12 + VALUE], r15w
#define TEST_R15W_TO_PTR_R13_(VALUE) test word ptr [r13 + VALUE], r15w
#define TEST_R15W_TO_PTR_R14_(VALUE) test word ptr [r14 + VALUE], r15w
#define TEST_R15W_TO_PTR_R15_(VALUE) test word ptr [r15 + VALUE], r15w
#define TEST_R15W_TO_PTR_EAX_(VALUE) test word ptr [eax + VALUE], r15w
#define TEST_R15W_TO_PTR_EBX_(VALUE) test word ptr [ebx + VALUE], r15w
#define TEST_R15W_TO_PTR_ECX_(VALUE) test word ptr [ecx + VALUE], r15w
#define TEST_R15W_TO_PTR_EDX_(VALUE) test word ptr [edx + VALUE], r15w
#define TEST_R15W_TO_PTR_EDI_(VALUE) test word ptr [edi + VALUE], r15w
#define TEST_R15W_TO_PTR_ESI_(VALUE) test word ptr [esi + VALUE], r15w
#define TEST_R15W_TO_PTR_EBP_(VALUE) test word ptr [ebp + VALUE], r15w
#define TEST_R15W_TO_PTR_ESP_(VALUE) test word ptr [esp + VALUE], r15w
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
