#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define MOV_EAX_EAX mov eax, eax
#define MOV_EAX_EBX mov eax, ebx
#define MOV_EAX_ECX mov eax, ecx
#define MOV_EAX_EDX mov eax, edx
#define MOV_EAX_EDI mov eax, edi
#define MOV_EAX_ESI mov eax, esi
#define MOV_EAX_EBP mov eax, ebp
#define MOV_EAX_ESP mov eax, esp

#define MOV_EBX_EAX mov ebx, eax
#define MOV_EBX_EBX mov ebx, ebx
#define MOV_EBX_ECX mov ebx, ecx
#define MOV_EBX_EDX mov ebx, edx
#define MOV_EBX_EDI mov ebx, edi
#define MOV_EBX_ESI mov ebx, esi
#define MOV_EBX_EBP mov ebx, ebp
#define MOV_EBX_ESP mov ebx, esp

#define MOV_ECX_EAX mov ecx, eax
#define MOV_ECX_EBX mov ecx, ebx
#define MOV_ECX_ECX mov ecx, ecx
#define MOV_ECX_EDX mov ecx, edx
#define MOV_ECX_EDI mov ecx, edi
#define MOV_ECX_ESI mov ecx, esi
#define MOV_ECX_EBP mov ecx, ebp
#define MOV_ECX_ESP mov ecx, esp

#define MOV_EDX_EAX mov edx, eax
#define MOV_EDX_EBX mov edx, ebx
#define MOV_EDX_ECX mov edx, ecx
#define MOV_EDX_EDX mov edx, edx
#define MOV_EDX_EDI mov edx, edi
#define MOV_EDX_ESI mov edx, esi
#define MOV_EDX_EBP mov edx, ebp
#define MOV_EDX_ESP mov edx, esp

#define MOV_EDI_EAX mov edi, eax
#define MOV_EDI_EBX mov edi, ebx
#define MOV_EDI_ECX mov edi, ecx
#define MOV_EDI_EDX mov edi, edx
#define MOV_EDI_EDI mov edi, edi
#define MOV_EDI_ESI mov edi, esi
#define MOV_EDI_EBP mov edi, ebp
#define MOV_EDI_ESP mov edi, esp

#define MOV_ESI_EAX mov esi, eax
#define MOV_ESI_EBX mov esi, ebx
#define MOV_ESI_ECX mov esi, ecx
#define MOV_ESI_EDX mov esi, edx
#define MOV_ESI_EDI mov esi, edi
#define MOV_ESI_ESI mov esi, esi
#define MOV_ESI_EBP mov esi, ebp
#define MOV_ESI_ESP mov esi, esp

#define MOV_EBP_EAX mov ebp, eax
#define MOV_EBP_EBX mov ebp, ebx
#define MOV_EBP_ECX mov ebp, ecx
#define MOV_EBP_EDX mov ebp, edx
#define MOV_EBP_EDI mov ebp, edi
#define MOV_EBP_ESI mov ebp, esi
#define MOV_EBP_EBP mov ebp, ebp
#define MOV_EBP_ESP mov ebp, esp

#define MOV_ESP_EAX mov esp, eax
#define MOV_ESP_EBX mov esp, ebx
#define MOV_ESP_ECX mov esp, ecx
#define MOV_ESP_EDX mov esp, edx
#define MOV_ESP_EDI mov esp, edi
#define MOV_ESP_ESI mov esp, esi
#define MOV_ESP_EBP mov esp, ebp
#define MOV_ESP_ESP mov esp, esp

#define MOV_EAX_(VALUE) mov eax, VALUE
#define MOV_EBX_(VALUE) mov ebx, VALUE
#define MOV_ECX_(VALUE) mov ecx, VALUE
#define MOV_EDX_(VALUE) mov edx, VALUE
#define MOV_EDI_(VALUE) mov edi, VALUE
#define MOV_ESI_(VALUE) mov esi, VALUE
#define MOV_EBP_(VALUE) mov ebp, VALUE
#define MOV_ESP_(VALUE) mov esp, VALUE

#ifdef __SYSTEM_64_BIT__
#define MOV_EAX_R8D mov eax, r8d
#define MOV_EAX_R9D mov eax, r9d
#define MOV_EAX_R10D mov eax, r10d
#define MOV_EAX_R11D mov eax, r11d
#define MOV_EAX_R12D mov eax, r12d
#define MOV_EAX_R13D mov eax, r13d
#define MOV_EAX_R14D mov eax, r14d
#define MOV_EAX_R15D mov eax, r15d

#define MOV_EBX_R8D mov ebx, r8d
#define MOV_EBX_R9D mov ebx, r9d
#define MOV_EBX_R10D mov ebx, r10d
#define MOV_EBX_R11D mov ebx, r11d
#define MOV_EBX_R12D mov ebx, r12d
#define MOV_EBX_R13D mov ebx, r13d
#define MOV_EBX_R14D mov ebx, r14d
#define MOV_EBX_R15D mov ebx, r15d

#define MOV_ECX_R8D mov ecx, r8d
#define MOV_ECX_R9D mov ecx, r9d
#define MOV_ECX_R10D mov ecx, r10d
#define MOV_ECX_R11D mov ecx, r11d
#define MOV_ECX_R12D mov ecx, r12d
#define MOV_ECX_R13D mov ecx, r13d
#define MOV_ECX_R14D mov ecx, r14d
#define MOV_ECX_R15D mov ecx, r15d

#define MOV_EDX_R8D mov edx, r8d
#define MOV_EDX_R9D mov edx, r9d
#define MOV_EDX_R10D mov edx, r10d
#define MOV_EDX_R11D mov edx, r11d
#define MOV_EDX_R12D mov edx, r12d
#define MOV_EDX_R13D mov edx, r13d
#define MOV_EDX_R14D mov edx, r14d
#define MOV_EDX_R15D mov edx, r15d

#define MOV_ESI_R8D mov esi, r8d
#define MOV_ESI_R9D mov esi, r9d
#define MOV_ESI_R10D mov esi, r10d
#define MOV_ESI_R11D mov esi, r11d
#define MOV_ESI_R12D mov esi, r12d
#define MOV_ESI_R13D mov esi, r13d
#define MOV_ESI_R14D mov esi, r14d
#define MOV_ESI_R15D mov esi, r15d

#define MOV_EDI_R8D mov edi, r8d
#define MOV_EDI_R9D mov edi, r9d
#define MOV_EDI_R10D mov edi, r10d
#define MOV_EDI_R11D mov edi, r11d
#define MOV_EDI_R12D mov edi, r12d
#define MOV_EDI_R13D mov edi, r13d
#define MOV_EDI_R14D mov edi, r14d
#define MOV_EDI_R15D mov edi, r15d

#define MOV_EBP_R8D mov ebp, r8d
#define MOV_EBP_R9D mov ebp, r9d
#define MOV_EBP_R10D mov ebp, r10d
#define MOV_EBP_R11D mov ebp, r11d
#define MOV_EBP_R12D mov ebp, r12d
#define MOV_EBP_R13D mov ebp, r13d
#define MOV_EBP_R14D mov ebp, r14d
#define MOV_EBP_R15D mov ebp, r15d

#define MOV_ESP_R8D mov esp, r8d
#define MOV_ESP_R9D mov esp, r9d
#define MOV_ESP_R10D mov esp, r10d
#define MOV_ESP_R11D mov esp, r11d
#define MOV_ESP_R12D mov esp, r12d
#define MOV_ESP_R13D mov esp, r13d
#define MOV_ESP_R14D mov esp, r14d
#define MOV_ESP_R15D mov esp, r15d

#define MOV_R8D_EAX mov r8d, eax
#define MOV_R8D_EBX mov r8d, ebx
#define MOV_R8D_ECX mov r8d, ecx
#define MOV_R8D_EDX mov r8d, edx
#define MOV_R8D_ESI mov r8d, esi
#define MOV_R8D_EDI mov r8d, edi
#define MOV_R8D_EBP mov r8d, ebp
#define MOV_R8D_ESP mov r8d, esp
#define MOV_R8D_R8D mov r8d, r8d
#define MOV_R8D_R9D mov r8d, r9d
#define MOV_R8D_R10D mov r8d, r10d
#define MOV_R8D_R11D mov r8d, r11d
#define MOV_R8D_R12D mov r8d, r12d
#define MOV_R8D_R13D mov r8d, r13d
#define MOV_R8D_R14D mov r8d, r14d
#define MOV_R8D_R15D mov r8d, r15d

#define MOV_R9D_EAX mov r9d, eax
#define MOV_R9D_EBX mov r9d, ebx
#define MOV_R9D_ECX mov r9d, ecx
#define MOV_R9D_EDX mov r9d, edx
#define MOV_R9D_ESI mov r9d, esi
#define MOV_R9D_EDI mov r9d, edi
#define MOV_R9D_EBP mov r9d, ebp
#define MOV_R9D_ESP mov r9d, esp
#define MOV_R9D_R8D mov r9d, r8d
#define MOV_R9D_R9D mov r9d, r9d
#define MOV_R9D_R10D mov r9d, r10d
#define MOV_R9D_R11D mov r9d, r11d
#define MOV_R9D_R12D mov r9d, r12d
#define MOV_R9D_R13D mov r9d, r13d
#define MOV_R9D_R14D mov r9d, r14d
#define MOV_R9D_R15D mov r9d, r15d

#define MOV_R10D_EAX mov r10d, eax
#define MOV_R10D_EBX mov r10d, ebx
#define MOV_R10D_ECX mov r10d, ecx
#define MOV_R10D_EDX mov r10d, edx
#define MOV_R10D_ESI mov r10d, esi
#define MOV_R10D_EDI mov r10d, edi
#define MOV_R10D_EBP mov r10d, ebp
#define MOV_R10D_ESP mov r10d, esp
#define MOV_R10D_R8D mov r10d, r8d
#define MOV_R10D_R9D mov r10d, r9d
#define MOV_R10D_R10D mov r10d, r10d
#define MOV_R10D_R11D mov r10d, r11d
#define MOV_R10D_R12D mov r10d, r12d
#define MOV_R10D_R13D mov r10d, r13d
#define MOV_R10D_R14D mov r10d, r14d
#define MOV_R10D_R15D mov r10d, r15d

#define MOV_R11D_EAX mov r11d, eax
#define MOV_R11D_EBX mov r11d, ebx
#define MOV_R11D_ECX mov r11d, ecx
#define MOV_R11D_EDX mov r11d, edx
#define MOV_R11D_ESI mov r11d, esi
#define MOV_R11D_EDI mov r11d, edi
#define MOV_R11D_EBP mov r11d, ebp
#define MOV_R11D_ESP mov r11d, esp
#define MOV_R11D_R8D mov r11d, r8d
#define MOV_R11D_R9D mov r11d, r9d
#define MOV_R11D_R10D mov r11d, r10d
#define MOV_R11D_R11D mov r11d, r11d
#define MOV_R11D_R12D mov r11d, r12d
#define MOV_R11D_R13D mov r11d, r13d
#define MOV_R11D_R14D mov r11d, r14d
#define MOV_R11D_R15D mov r11d, r15d

#define MOV_R12D_EAX mov r12d, eax
#define MOV_R12D_EBX mov r12d, ebx
#define MOV_R12D_ECX mov r12d, ecx
#define MOV_R12D_EDX mov r12d, edx
#define MOV_R12D_ESI mov r12d, esi
#define MOV_R12D_EDI mov r12d, edi
#define MOV_R12D_EBP mov r12d, ebp
#define MOV_R12D_ESP mov r12d, esp
#define MOV_R12D_R8D mov r12d, r8d
#define MOV_R12D_R9D mov r12d, r9d
#define MOV_R12D_R10D mov r12d, r10d
#define MOV_R12D_R11D mov r12d, r11d
#define MOV_R12D_R12D mov r12d, r12d
#define MOV_R12D_R13D mov r12d, r13d
#define MOV_R12D_R14D mov r12d, r14d
#define MOV_R12D_R15D mov r12d, r15d

#define MOV_R13D_EAX mov r13d, eax
#define MOV_R13D_EBX mov r13d, ebx
#define MOV_R13D_ECX mov r13d, ecx
#define MOV_R13D_EDX mov r13d, edx
#define MOV_R13D_ESI mov r13d, esi
#define MOV_R13D_EDI mov r13d, edi
#define MOV_R13D_EBP mov r13d, ebp
#define MOV_R13D_ESP mov r13d, esp
#define MOV_R13D_R8D mov r13d, r8d
#define MOV_R13D_R9D mov r13d, r9d
#define MOV_R13D_R10D mov r13d, r10d
#define MOV_R13D_R11D mov r13d, r11d
#define MOV_R13D_R12D mov r13d, r12d
#define MOV_R13D_R13D mov r13d, r13d
#define MOV_R13D_R14D mov r13d, r14d
#define MOV_R13D_R15D mov r13d, r15d

#define MOV_R14D_EAX mov r14d, eax
#define MOV_R14D_EBX mov r14d, ebx
#define MOV_R14D_ECX mov r14d, ecx
#define MOV_R14D_EDX mov r14d, edx
#define MOV_R14D_ESI mov r14d, esi
#define MOV_R14D_EDI mov r14d, edi
#define MOV_R14D_EBP mov r14d, ebp
#define MOV_R14D_ESP mov r14d, esp
#define MOV_R14D_R8D mov r14d, r8d
#define MOV_R14D_R9D mov r14d, r9d
#define MOV_R14D_R10D mov r14d, r10d
#define MOV_R14D_R11D mov r14d, r11d
#define MOV_R14D_R12D mov r14d, r12d
#define MOV_R14D_R13D mov r14d, r13d
#define MOV_R14D_R14D mov r14d, r14d
#define MOV_R14D_R15D mov r14d, r15d

#define MOV_R15D_EAX mov r15d, eax
#define MOV_R15D_EBX mov r15d, ebx
#define MOV_R15D_ECX mov r15d, ecx
#define MOV_R15D_EDX mov r15d, edx
#define MOV_R15D_ESI mov r15d, esi
#define MOV_R15D_EDI mov r15d, edi
#define MOV_R15D_EBP mov r15d, ebp
#define MOV_R15D_ESP mov r15d, esp
#define MOV_R15D_R8D mov r15d, r8d
#define MOV_R15D_R9D mov r15d, r9d
#define MOV_R15D_R10D mov r15d, r10d
#define MOV_R15D_R11D mov r15d, r11d
#define MOV_R15D_R12D mov r15d, r12d
#define MOV_R15D_R13D mov r15d, r13d
#define MOV_R15D_R14D mov r15d, r14d
#define MOV_R15D_R15D mov r15d, r15d

#define MOV_R8D_(VALUE) mov r8d, VALUE
#define MOV_R9D_(VALUE) mov r9d, VALUE
#define MOV_R10D_(VALUE) mov r10d, VALUE
#define MOV_R11D_(VALUE) mov r11d, VALUE
#define MOV_R12D_(VALUE) mov r12d, VALUE
#define MOV_R13D_(VALUE) mov r13d, VALUE
#define MOV_R14D_(VALUE) mov r14d, VALUE
#define MOV_R15D_(VALUE) mov r15d, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#define MOV_EAX_FROM_PTR_(VALUE) mov eax, dword ptr [VALUE]
#define MOV_EBX_FROM_PTR_(VALUE) mov ebx, dword ptr [VALUE]
#define MOV_ECX_FROM_PTR_(VALUE) mov ecx, dword ptr [VALUE]
#define MOV_EDX_FROM_PTR_(VALUE) mov edx, dword ptr [VALUE]
#define MOV_ESI_FROM_PTR_(VALUE) mov esi, dword ptr [VALUE]
#define MOV_EDI_FROM_PTR_(VALUE) mov edi, dword ptr [VALUE]
#define MOV_EBP_FROM_PTR_(VALUE) mov ebp, dword ptr [VALUE]
#define MOV_ESP_FROM_PTR_(VALUE) mov esp, dword ptr [VALUE]

#define MOV_EAX_TO_PTR_(VALUE) mov dword ptr [VALUE], eax
#define MOV_EBX_TO_PTR_(VALUE) mov dword ptr [VALUE], ebx
#define MOV_ECX_TO_PTR_(VALUE) mov dword ptr [VALUE], ecx
#define MOV_EDX_TO_PTR_(VALUE) mov dword ptr [VALUE], edx
#define MOV_ESI_TO_PTR_(VALUE) mov dword ptr [VALUE], esi
#define MOV_EDI_TO_PTR_(VALUE) mov dword ptr [VALUE], edi
#define MOV_EBP_TO_PTR_(VALUE) mov dword ptr [VALUE], ebp
#define MOV_ESP_TO_PTR_(VALUE) mov dword ptr [VALUE], esp

#define MOV_EAX_TO_PTR_ESI mov dword ptr [esi], eax
#define MOV_EBX_TO_PTR_ESI mov dword ptr [esi], ebx
#define MOV_ECX_TO_PTR_ESI mov dword ptr [esi], ecx
#define MOV_EDX_TO_PTR_ESI mov dword ptr [esi], edx

#define MOV_EAX_FROM_PTR_ESP_(VALUE) mov eax, dword ptr [esp + VALUE]
#define MOV_EBX_FROM_PTR_ESP_(VALUE) mov ebx, dword ptr [esp + VALUE]
#define MOV_ECX_FROM_PTR_ESP_(VALUE) mov ecx, dword ptr [esp + VALUE]
#define MOV_EDX_FROM_PTR_ESP_(VALUE) mov edx, dword ptr [esp + VALUE]
#define MOV_ESI_FROM_PTR_ESP_(VALUE) mov esi, dword ptr [esp + VALUE]
#define MOV_EDI_FROM_PTR_ESP_(VALUE) mov edi, dword ptr [esp + VALUE]
#define MOV_EBP_FROM_PTR_ESP_(VALUE) mov ebp, dword ptr [esp + VALUE]
#define MOV_ESP_FROM_PTR_ESP_(VALUE) mov esp, dword ptr [esp + VALUE]

#define MOV_AX_FROM_PTR_ESP_(VALUE) mov ax, word ptr [esp + VALUE]
#define MOV_BX_FROM_PTR_ESP_(VALUE) mov bx, word ptr [esp + VALUE]
#define MOV_CX_FROM_PTR_ESP_(VALUE) mov cx, word ptr [esp + VALUE]
#define MOV_DX_FROM_PTR_ESP_(VALUE) mov dx, word ptr [esp + VALUE]
#define MOV_SI_FROM_PTR_ESP_(VALUE) mov si, word ptr [esp + VALUE]
#define MOV_DI_FROM_PTR_ESP_(VALUE) mov di, word ptr [esp + VALUE]
#define MOV_BP_FROM_PTR_ESP_(VALUE) mov bp, word ptr [esp + VALUE]
#define MOV_SP_FROM_PTR_ESP_(VALUE) mov sp, word ptr [esp + VALUE]

#define MOV_AL_FROM_PTR_ESP_(VALUE) mov al, byte ptr [esp + VALUE]
#define MOV_BL_FROM_PTR_ESP_(VALUE) mov bl, byte ptr [esp + VALUE]
#define MOV_CL_FROM_PTR_ESP_(VALUE) mov cl, byte ptr [esp + VALUE]
#define MOV_DL_FROM_PTR_ESP_(VALUE) mov dl, byte ptr [esp + VALUE]

#define MOV_EAX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], eax
#define MOV_EBX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ebx
#define MOV_ECX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ecx
#define MOV_EDX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], edx
#define MOV_ESI_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], esi
#define MOV_EDI_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], edi
#define MOV_EBP_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ebp
#define MOV_ESP_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], esp

#define MOV_AX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], ax
#define MOV_BX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], bx
#define MOV_CX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], cx
#define MOV_DX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], dx
#define MOV_SI_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], si
#define MOV_DI_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], di
#define MOV_BP_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], bp
#define MOV_SP_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], sp

#define MOV_AL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], al
#define MOV_BL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], bl
#define MOV_CL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], cl
#define MOV_DL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], dl

#define MOV_EAX_FROM_PTR_EBP_(VALUE) mov eax, dword ptr [ebp + VALUE]
#define MOV_EBX_FROM_PTR_EBP_(VALUE) mov ebx, dword ptr [ebp + VALUE]
#define MOV_ECX_FROM_PTR_EBP_(VALUE) mov ecx, dword ptr [ebp + VALUE]
#define MOV_EDX_FROM_PTR_EBP_(VALUE) mov edx, dword ptr [ebp + VALUE]
#define MOV_ESI_FROM_PTR_EBP_(VALUE) mov esi, dword ptr [ebp + VALUE]
#define MOV_EDI_FROM_PTR_EBP_(VALUE) mov edi, dword ptr [ebp + VALUE]
#define MOV_EBP_FROM_PTR_EBP_(VALUE) mov ebp, dword ptr [ebp + VALUE]
#define MOV_ESP_FROM_PTR_EBP_(VALUE) mov esp, dword ptr [ebp + VALUE]

#define MOV_AX_FROM_PTR_EBP_(VALUE) mov ax, word ptr [ebp + VALUE]
#define MOV_BX_FROM_PTR_EBP_(VALUE) mov bx, word ptr [ebp + VALUE]
#define MOV_CX_FROM_PTR_EBP_(VALUE) mov cx, word ptr [ebp + VALUE]
#define MOV_DX_FROM_PTR_EBP_(VALUE) mov dx, word ptr [ebp + VALUE]
#define MOV_SI_FROM_PTR_EBP_(VALUE) mov si, word ptr [ebp + VALUE]
#define MOV_DI_FROM_PTR_EBP_(VALUE) mov di, word ptr [ebp + VALUE]
#define MOV_BP_FROM_PTR_EBP_(VALUE) mov bp, word ptr [ebp + VALUE]
#define MOV_SP_FROM_PTR_EBP_(VALUE) mov sp, word ptr [ebp + VALUE]

#define MOV_AL_FROM_PTR_EBP_(VALUE) mov al, byte ptr [ebp + VALUE]
#define MOV_BL_FROM_PTR_EBP_(VALUE) mov bl, byte ptr [ebp + VALUE]
#define MOV_CL_FROM_PTR_EBP_(VALUE) mov cl, byte ptr [ebp + VALUE]
#define MOV_DL_FROM_PTR_EBP_(VALUE) mov dl, byte ptr [ebp + VALUE]

#define MOV_EAX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], eax
#define MOV_EBX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ebx
#define MOV_ECX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ecx
#define MOV_EDX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], edx
#define MOV_ESI_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], esi
#define MOV_EDI_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], edi
#define MOV_EBP_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ebp
#define MOV_ESP_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], esp

#define MOV_AX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], ax
#define MOV_BX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], bx
#define MOV_CX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], cx
#define MOV_DX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], dx
#define MOV_SI_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], si
#define MOV_DI_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], di
#define MOV_BP_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], bp
#define MOV_SP_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], sp

#define MOV_AL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], al
#define MOV_BL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], bl
#define MOV_CL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], cl
#define MOV_DL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], dl

#ifndef __SYSTEM_64_BIT__
#define MOV_EAX_FROM_PTR_BP_(VALUE) mov eax, dword ptr [bp + VALUE]
#define MOV_EBX_FROM_PTR_BP_(VALUE) mov ebx, dword ptr [bp + VALUE]
#define MOV_ECX_FROM_PTR_BP_(VALUE) mov ecx, dword ptr [bp + VALUE]
#define MOV_EDX_FROM_PTR_BP_(VALUE) mov edx, dword ptr [bp + VALUE]
#define MOV_ESI_FROM_PTR_BP_(VALUE) mov esi, dword ptr [bp + VALUE]
#define MOV_EDI_FROM_PTR_BP_(VALUE) mov edi, dword ptr [bp + VALUE]
#define MOV_EBP_FROM_PTR_BP_(VALUE) mov ebp, dword ptr [bp + VALUE]
#define MOV_ESP_FROM_PTR_BP_(VALUE) mov esp, dword ptr [bp + VALUE]

#define MOV_EAX_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], eax
#define MOV_EBX_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], ebx
#define MOV_ECX_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], ecx
#define MOV_EDX_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], edx
#define MOV_ESI_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], esi
#define MOV_EDI_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], edi
#define MOV_EBP_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], ebp
#define MOV_ESP_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], esp
#else /* __SYSTEM_64_BIT__ */
#define MOV_SIL_FROM_PTR_ESP_(VALUE) mov sil, byte ptr [esp + VALUE]
#define MOV_DIL_FROM_PTR_ESP_(VALUE) mov dil, byte ptr [esp + VALUE]
#define MOV_BPL_FROM_PTR_ESP_(VALUE) mov bpl, byte ptr [esp + VALUE]
#define MOV_SPL_FROM_PTR_ESP_(VALUE) mov spl, byte ptr [esp + VALUE]

#define MOV_SIL_FROM_PTR_EBP_(VALUE) mov sil, byte ptr [ebp + VALUE]
#define MOV_DIL_FROM_PTR_EBP_(VALUE) mov dil, byte ptr [ebp + VALUE]
#define MOV_BPL_FROM_PTR_EBP_(VALUE) mov bpl, byte ptr [ebp + VALUE]
#define MOV_SPL_FROM_PTR_EBP_(VALUE) mov spl, byte ptr [ebp + VALUE]

#define MOV_SIL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], sil
#define MOV_DIL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], dil
#define MOV_BPL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], bpl
#define MOV_SPL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], spl

#define MOV_SIL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], sil
#define MOV_DIL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], dil
#define MOV_BPL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], bpl
#define MOV_SPL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], spl
#endif /* !__SYSTEM_64_BIT__ */
/* ************************* [^] 32-BIT MEMORY [^] ************************** */

/* ************************ [v] 32-BIT SEGMENTS [v] ************************* */
#define MOV_EAX_FROM_PTR_FS_(VALUE) mov eax, dword ptr fs:[VALUE]
#define MOV_EBX_FROM_PTR_FS_(VALUE) mov ebx, dword ptr fs:[VALUE]
#define MOV_ECX_FROM_PTR_FS_(VALUE) mov ecx, dword ptr fs:[VALUE]
#define MOV_EDX_FROM_PTR_FS_(VALUE) mov edx, dword ptr fs:[VALUE]
#define MOV_ESI_FROM_PTR_FS_(VALUE) mov esi, dword ptr fs:[VALUE]
#define MOV_EDI_FROM_PTR_FS_(VALUE) mov edi, dword ptr fs:[VALUE]
#define MOV_EBP_FROM_PTR_FS_(VALUE) mov ebp, dword ptr fs:[VALUE]
#define MOV_ESP_FROM_PTR_FS_(VALUE) mov esp, dword ptr fs:[VALUE]

#define MOV_EAX_FROM_PTR_FS_EAX mov eax, dword ptr fs:[eax]

#define MOV_EAX_FROM_PTR_GS_(VALUE) mov eax, dword ptr gs:[VALUE]
#define MOV_EBX_FROM_PTR_GS_(VALUE) mov ebx, dword ptr gs:[VALUE]
#define MOV_ECX_FROM_PTR_GS_(VALUE) mov ecx, dword ptr gs:[VALUE]
#define MOV_EDX_FROM_PTR_GS_(VALUE) mov edx, dword ptr gs:[VALUE]
#define MOV_ESI_FROM_PTR_GS_(VALUE) mov esi, dword ptr gs:[VALUE]
#define MOV_EDI_FROM_PTR_GS_(VALUE) mov edi, dword ptr gs:[VALUE]
#define MOV_EBP_FROM_PTR_GS_(VALUE) mov ebp, dword ptr gs:[VALUE]
#define MOV_ESP_FROM_PTR_GS_(VALUE) mov esp, dword ptr gs:[VALUE]

#define MOV_EAX_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], eax
#define MOV_EBX_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], ebx
#define MOV_ECX_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], ecx
#define MOV_EDX_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], edx
#define MOV_ESI_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], esi
#define MOV_EDI_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], edi
#define MOV_EBP_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], ebp
#define MOV_ESP_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], esp

#define MOV_EAX_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], eax
#define MOV_EBX_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], ebx
#define MOV_ECX_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], ecx
#define MOV_EDX_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], edx
#define MOV_ESI_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], esi
#define MOV_EDI_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], edi
#define MOV_EBP_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], ebp
#define MOV_ESP_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], esp

#ifdef __SYSTEM_64_BIT__
#define MOV_R8D_FROM_PTR_FS_(VALUE) mov r8d, dword ptr fs:[VALUE]
#define MOV_R9D_FROM_PTR_FS_(VALUE) mov r9d, dword ptr fs:[VALUE]
#define MOV_R10D_FROM_PTR_FS_(VALUE) mov r10d, dword ptr fs:[VALUE]
#define MOV_R11D_FROM_PTR_FS_(VALUE) mov r11d, dword ptr fs:[VALUE]
#define MOV_R12D_FROM_PTR_FS_(VALUE) mov r12d, dword ptr fs:[VALUE]
#define MOV_R13D_FROM_PTR_FS_(VALUE) mov r13d, dword ptr fs:[VALUE]
#define MOV_R14D_FROM_PTR_FS_(VALUE) mov r14d, dword ptr fs:[VALUE]
#define MOV_R15D_FROM_PTR_FS_(VALUE) mov r15d, dword ptr fs:[VALUE]

#define MOV_R8D_FROM_PTR_GS_(VALUE) mov r8d, dword ptr gs:[VALUE]
#define MOV_R9D_FROM_PTR_GS_(VALUE) mov r9d, dword ptr gs:[VALUE]
#define MOV_R10D_FROM_PTR_GS_(VALUE) mov r10d, dword ptr gs:[VALUE]
#define MOV_R11D_FROM_PTR_GS_(VALUE) mov r11d, dword ptr gs:[VALUE]
#define MOV_R12D_FROM_PTR_GS_(VALUE) mov r12d, dword ptr gs:[VALUE]
#define MOV_R13D_FROM_PTR_GS_(VALUE) mov r13d, dword ptr gs:[VALUE]
#define MOV_R14D_FROM_PTR_GS_(VALUE) mov r14d, dword ptr gs:[VALUE]
#define MOV_R15D_FROM_PTR_GS_(VALUE) mov r15d, dword ptr gs:[VALUE]

#define MOV_R8D_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], r8d
#define MOV_R9D_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], r9d
#define MOV_R10D_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], r10d
#define MOV_R11D_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], r11d
#define MOV_R12D_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], r12d
#define MOV_R13D_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], r13d
#define MOV_R14D_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], r14d
#define MOV_R15D_TO_PTR_FS_(VALUE) mov dword ptr fs:[VALUE], r15d

#define MOV_R8D_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], r8d
#define MOV_R9D_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], r9d
#define MOV_R10D_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], r10d
#define MOV_R11D_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], r11d
#define MOV_R12D_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], r12d
#define MOV_R13D_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], r13d
#define MOV_R14D_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], r14d
#define MOV_R15D_TO_PTR_GS_(VALUE) mov dword ptr gs:[VALUE], r15d
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 32-BIT SEGMENTS [^] ************************* */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
