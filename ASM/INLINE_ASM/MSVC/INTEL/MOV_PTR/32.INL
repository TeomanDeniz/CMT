#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define MOV_EAX_FROM_PTR_(VALUE) mov eax, dword ptr [VALUE]
#define MOV_EBX_FROM_PTR_(VALUE) mov ebx, dword ptr [VALUE]
#define MOV_ECX_FROM_PTR_(VALUE) mov ecx, dword ptr [VALUE]
#define MOV_EDX_FROM_PTR_(VALUE) mov edx, dword ptr [VALUE]
#define MOV_EDI_FROM_PTR_(VALUE) mov edi, dword ptr [VALUE]
#define MOV_ESI_FROM_PTR_(VALUE) mov esi, dword ptr [VALUE]
#define MOV_EBP_FROM_PTR_(VALUE) mov ebp, dword ptr [VALUE]
#define MOV_ESP_FROM_PTR_(VALUE) mov esp, dword ptr [VALUE]

#define MOV_EAX_TO_PTR_(VALUE) mov dword ptr [VALUE], eax
#define MOV_EBX_TO_PTR_(VALUE) mov dword ptr [VALUE], ebx
#define MOV_ECX_TO_PTR_(VALUE) mov dword ptr [VALUE], ecx
#define MOV_EDX_TO_PTR_(VALUE) mov dword ptr [VALUE], edx
#define MOV_EDI_TO_PTR_(VALUE) mov dword ptr [VALUE], edi
#define MOV_ESI_TO_PTR_(VALUE) mov dword ptr [VALUE], esi
#define MOV_EBP_TO_PTR_(VALUE) mov dword ptr [VALUE], ebp
#define MOV_ESP_TO_PTR_(VALUE) mov dword ptr [VALUE], esp

#define MOV_EAX_FROM_PTR_EAX mov eax, dword ptr [eax]
#define MOV_EAX_FROM_PTR_EBX mov eax, dword ptr [ebx]
#define MOV_EAX_FROM_PTR_ECX mov eax, dword ptr [ecx]
#define MOV_EAX_FROM_PTR_EDX mov eax, dword ptr [edx]
#define MOV_EAX_FROM_PTR_EDI mov eax, dword ptr [edi]
#define MOV_EAX_FROM_PTR_ESI mov eax, dword ptr [esi]
#define MOV_EAX_FROM_PTR_EBP mov eax, dword ptr [ebp]
#define MOV_EAX_FROM_PTR_ESP mov eax, dword ptr [esp]
#define MOV_EAX_FROM_PTR_BX mov eax, dword ptr [bx]
#define MOV_EAX_FROM_PTR_BP mov eax, dword ptr [bp]
#define MOV_EAX_FROM_PTR_SI mov eax, dword ptr [si]
#define MOV_EAX_FROM_PTR_DI mov eax, dword ptr [di]

#define MOV_EBX_FROM_PTR_EAX mov ebx, dword ptr [eax]
#define MOV_EBX_FROM_PTR_EBX mov ebx, dword ptr [ebx]
#define MOV_EBX_FROM_PTR_ECX mov ebx, dword ptr [ecx]
#define MOV_EBX_FROM_PTR_EDX mov ebx, dword ptr [edx]
#define MOV_EBX_FROM_PTR_EDI mov ebx, dword ptr [edi]
#define MOV_EBX_FROM_PTR_ESI mov ebx, dword ptr [esi]
#define MOV_EBX_FROM_PTR_EBP mov ebx, dword ptr [ebp]
#define MOV_EBX_FROM_PTR_ESP mov ebx, dword ptr [esp]
#define MOV_EBX_FROM_PTR_BX mov ebx, dword ptr [bx]
#define MOV_EBX_FROM_PTR_BP mov ebx, dword ptr [bp]
#define MOV_EBX_FROM_PTR_SI mov ebx, dword ptr [si]
#define MOV_EBX_FROM_PTR_DI mov ebx, dword ptr [di]

#define MOV_ECX_FROM_PTR_EAX mov ecx, dword ptr [eax]
#define MOV_ECX_FROM_PTR_EBX mov ecx, dword ptr [ebx]
#define MOV_ECX_FROM_PTR_ECX mov ecx, dword ptr [ecx]
#define MOV_ECX_FROM_PTR_EDX mov ecx, dword ptr [edx]
#define MOV_ECX_FROM_PTR_EDI mov ecx, dword ptr [edi]
#define MOV_ECX_FROM_PTR_ESI mov ecx, dword ptr [esi]
#define MOV_ECX_FROM_PTR_EBP mov ecx, dword ptr [ebp]
#define MOV_ECX_FROM_PTR_ESP mov ecx, dword ptr [esp]
#define MOV_ECX_FROM_PTR_BX mov ecx, dword ptr [bx]
#define MOV_ECX_FROM_PTR_BP mov ecx, dword ptr [bp]
#define MOV_ECX_FROM_PTR_SI mov ecx, dword ptr [si]
#define MOV_ECX_FROM_PTR_DI mov ecx, dword ptr [di]

#define MOV_EDX_FROM_PTR_EAX mov edx, dword ptr [eax]
#define MOV_EDX_FROM_PTR_EBX mov edx, dword ptr [ebx]
#define MOV_EDX_FROM_PTR_ECX mov edx, dword ptr [ecx]
#define MOV_EDX_FROM_PTR_EDX mov edx, dword ptr [edx]
#define MOV_EDX_FROM_PTR_EDI mov edx, dword ptr [edi]
#define MOV_EDX_FROM_PTR_ESI mov edx, dword ptr [esi]
#define MOV_EDX_FROM_PTR_EBP mov edx, dword ptr [ebp]
#define MOV_EDX_FROM_PTR_ESP mov edx, dword ptr [esp]
#define MOV_EDX_FROM_PTR_BX mov edx, dword ptr [bx]
#define MOV_EDX_FROM_PTR_BP mov edx, dword ptr [bp]
#define MOV_EDX_FROM_PTR_SI mov edx, dword ptr [si]
#define MOV_EDX_FROM_PTR_DI mov edx, dword ptr [di]

#define MOV_EDI_FROM_PTR_EAX mov edi, dword ptr [eax]
#define MOV_EDI_FROM_PTR_EBX mov edi, dword ptr [ebx]
#define MOV_EDI_FROM_PTR_ECX mov edi, dword ptr [ecx]
#define MOV_EDI_FROM_PTR_EDX mov edi, dword ptr [edx]
#define MOV_EDI_FROM_PTR_EDI mov edi, dword ptr [edi]
#define MOV_EDI_FROM_PTR_ESI mov edi, dword ptr [esi]
#define MOV_EDI_FROM_PTR_EBP mov edi, dword ptr [ebp]
#define MOV_EDI_FROM_PTR_ESP mov edi, dword ptr [esp]
#define MOV_EDI_FROM_PTR_BX mov edi, dword ptr [bx]
#define MOV_EDI_FROM_PTR_BP mov edi, dword ptr [bp]
#define MOV_EDI_FROM_PTR_SI mov edi, dword ptr [si]
#define MOV_EDI_FROM_PTR_DI mov edi, dword ptr [di]

#define MOV_ESI_FROM_PTR_EAX mov esi, dword ptr [eax]
#define MOV_ESI_FROM_PTR_EBX mov esi, dword ptr [ebx]
#define MOV_ESI_FROM_PTR_ECX mov esi, dword ptr [ecx]
#define MOV_ESI_FROM_PTR_EDX mov esi, dword ptr [edx]
#define MOV_ESI_FROM_PTR_EDI mov esi, dword ptr [edi]
#define MOV_ESI_FROM_PTR_ESI mov esi, dword ptr [esi]
#define MOV_ESI_FROM_PTR_EBP mov esi, dword ptr [ebp]
#define MOV_ESI_FROM_PTR_ESP mov esi, dword ptr [esp]
#define MOV_ESI_FROM_PTR_BX mov esi, dword ptr [bx]
#define MOV_ESI_FROM_PTR_BP mov esi, dword ptr [bp]
#define MOV_ESI_FROM_PTR_SI mov esi, dword ptr [si]
#define MOV_ESI_FROM_PTR_DI mov esi, dword ptr [di]

#define MOV_EBP_FROM_PTR_EAX mov ebp, dword ptr [eax]
#define MOV_EBP_FROM_PTR_EBX mov ebp, dword ptr [ebx]
#define MOV_EBP_FROM_PTR_ECX mov ebp, dword ptr [ecx]
#define MOV_EBP_FROM_PTR_EDX mov ebp, dword ptr [edx]
#define MOV_EBP_FROM_PTR_EDI mov ebp, dword ptr [edi]
#define MOV_EBP_FROM_PTR_ESI mov ebp, dword ptr [esi]
#define MOV_EBP_FROM_PTR_EBP mov ebp, dword ptr [ebp]
#define MOV_EBP_FROM_PTR_ESP mov ebp, dword ptr [esp]
#define MOV_EBP_FROM_PTR_BX mov ebp, dword ptr [bx]
#define MOV_EBP_FROM_PTR_BP mov ebp, dword ptr [bp]
#define MOV_EBP_FROM_PTR_SI mov ebp, dword ptr [si]
#define MOV_EBP_FROM_PTR_DI mov ebp, dword ptr [di]

#define MOV_ESP_FROM_PTR_EAX mov esp, dword ptr [eax]
#define MOV_ESP_FROM_PTR_EBX mov esp, dword ptr [ebx]
#define MOV_ESP_FROM_PTR_ECX mov esp, dword ptr [ecx]
#define MOV_ESP_FROM_PTR_EDX mov esp, dword ptr [edx]
#define MOV_ESP_FROM_PTR_EDI mov esp, dword ptr [edi]
#define MOV_ESP_FROM_PTR_ESI mov esp, dword ptr [esi]
#define MOV_ESP_FROM_PTR_EBP mov esp, dword ptr [ebp]
#define MOV_ESP_FROM_PTR_ESP mov esp, dword ptr [esp]
#define MOV_ESP_FROM_PTR_BX mov esp, dword ptr [bx]
#define MOV_ESP_FROM_PTR_BP mov esp, dword ptr [bp]
#define MOV_ESP_FROM_PTR_SI mov esp, dword ptr [si]
#define MOV_ESP_FROM_PTR_DI mov esp, dword ptr [di]

#define MOV_EAX_TO_PTR_EAX mov dword ptr [eax], eax
#define MOV_EAX_TO_PTR_EBX mov dword ptr [ebx], eax
#define MOV_EAX_TO_PTR_ECX mov dword ptr [ecx], eax
#define MOV_EAX_TO_PTR_EDX mov dword ptr [edx], eax
#define MOV_EAX_TO_PTR_EDI mov dword ptr [edi], eax
#define MOV_EAX_TO_PTR_ESI mov dword ptr [esi], eax
#define MOV_EAX_TO_PTR_EBP mov dword ptr [ebp], eax
#define MOV_EAX_TO_PTR_ESP mov dword ptr [esp], eax
#define MOV_EAX_TO_PTR_BX mov dword ptr [bx], eax
#define MOV_EAX_TO_PTR_BP mov dword ptr [bp], eax
#define MOV_EAX_TO_PTR_SI mov dword ptr [si], eax
#define MOV_EAX_TO_PTR_DI mov dword ptr [di], eax

#define MOV_EBX_TO_PTR_EAX mov dword ptr [eax], ebx
#define MOV_EBX_TO_PTR_EBX mov dword ptr [ebx], ebx
#define MOV_EBX_TO_PTR_ECX mov dword ptr [ecx], ebx
#define MOV_EBX_TO_PTR_EDX mov dword ptr [edx], ebx
#define MOV_EBX_TO_PTR_EDI mov dword ptr [edi], ebx
#define MOV_EBX_TO_PTR_ESI mov dword ptr [esi], ebx
#define MOV_EBX_TO_PTR_EBP mov dword ptr [ebp], ebx
#define MOV_EBX_TO_PTR_ESP mov dword ptr [esp], ebx
#define MOV_EBX_TO_PTR_BX mov dword ptr [bx], ebx
#define MOV_EBX_TO_PTR_BP mov dword ptr [bp], ebx
#define MOV_EBX_TO_PTR_SI mov dword ptr [si], ebx
#define MOV_EBX_TO_PTR_DI mov dword ptr [di], ebx

#define MOV_ECX_TO_PTR_EAX mov dword ptr [eax], ecx
#define MOV_ECX_TO_PTR_EBX mov dword ptr [ebx], ecx
#define MOV_ECX_TO_PTR_ECX mov dword ptr [ecx], ecx
#define MOV_ECX_TO_PTR_EDX mov dword ptr [edx], ecx
#define MOV_ECX_TO_PTR_EDI mov dword ptr [edi], ecx
#define MOV_ECX_TO_PTR_ESI mov dword ptr [esi], ecx
#define MOV_ECX_TO_PTR_EBP mov dword ptr [ebp], ecx
#define MOV_ECX_TO_PTR_ESP mov dword ptr [esp], ecx
#define MOV_ECX_TO_PTR_BX mov dword ptr [bx], ecx
#define MOV_ECX_TO_PTR_BP mov dword ptr [bp], ecx
#define MOV_ECX_TO_PTR_SI mov dword ptr [si], ecx
#define MOV_ECX_TO_PTR_DI mov dword ptr [di], ecx

#define MOV_EDX_TO_PTR_EAX mov dword ptr [eax], edx
#define MOV_EDX_TO_PTR_EBX mov dword ptr [ebx], edx
#define MOV_EDX_TO_PTR_ECX mov dword ptr [ecx], edx
#define MOV_EDX_TO_PTR_EDX mov dword ptr [edx], edx
#define MOV_EDX_TO_PTR_EDI mov dword ptr [edi], edx
#define MOV_EDX_TO_PTR_ESI mov dword ptr [esi], edx
#define MOV_EDX_TO_PTR_EBP mov dword ptr [ebp], edx
#define MOV_EDX_TO_PTR_ESP mov dword ptr [esp], edx
#define MOV_EDX_TO_PTR_BX mov dword ptr [bx], edx
#define MOV_EDX_TO_PTR_BP mov dword ptr [bp], edx
#define MOV_EDX_TO_PTR_SI mov dword ptr [si], edx
#define MOV_EDX_TO_PTR_DI mov dword ptr [di], edx

#define MOV_EDI_TO_PTR_EAX mov dword ptr [eax], edi
#define MOV_EDI_TO_PTR_EBX mov dword ptr [ebx], edi
#define MOV_EDI_TO_PTR_ECX mov dword ptr [ecx], edi
#define MOV_EDI_TO_PTR_EDX mov dword ptr [edx], edi
#define MOV_EDI_TO_PTR_EDI mov dword ptr [edi], edi
#define MOV_EDI_TO_PTR_ESI mov dword ptr [esi], edi
#define MOV_EDI_TO_PTR_EBP mov dword ptr [ebp], edi
#define MOV_EDI_TO_PTR_ESP mov dword ptr [esp], edi
#define MOV_EDI_TO_PTR_BX mov dword ptr [bx], edi
#define MOV_EDI_TO_PTR_BP mov dword ptr [bp], edi
#define MOV_EDI_TO_PTR_SI mov dword ptr [si], edi
#define MOV_EDI_TO_PTR_DI mov dword ptr [di], edi

#define MOV_ESI_TO_PTR_EAX mov dword ptr [eax], esi
#define MOV_ESI_TO_PTR_EBX mov dword ptr [ebx], esi
#define MOV_ESI_TO_PTR_ECX mov dword ptr [ecx], esi
#define MOV_ESI_TO_PTR_EDX mov dword ptr [edx], esi
#define MOV_ESI_TO_PTR_EDI mov dword ptr [edi], esi
#define MOV_ESI_TO_PTR_ESI mov dword ptr [esi], esi
#define MOV_ESI_TO_PTR_EBP mov dword ptr [ebp], esi
#define MOV_ESI_TO_PTR_ESP mov dword ptr [esp], esi
#define MOV_ESI_TO_PTR_BX mov dword ptr [bx], esi
#define MOV_ESI_TO_PTR_BP mov dword ptr [bp], esi
#define MOV_ESI_TO_PTR_SI mov dword ptr [si], esi
#define MOV_ESI_TO_PTR_DI mov dword ptr [di], esi

#define MOV_EBP_TO_PTR_EAX mov dword ptr [eax], ebp
#define MOV_EBP_TO_PTR_EBX mov dword ptr [ebx], ebp
#define MOV_EBP_TO_PTR_ECX mov dword ptr [ecx], ebp
#define MOV_EBP_TO_PTR_EDX mov dword ptr [edx], ebp
#define MOV_EBP_TO_PTR_EDI mov dword ptr [edi], ebp
#define MOV_EBP_TO_PTR_ESI mov dword ptr [esi], ebp
#define MOV_EBP_TO_PTR_EBP mov dword ptr [ebp], ebp
#define MOV_EBP_TO_PTR_ESP mov dword ptr [esp], ebp
#define MOV_EBP_TO_PTR_BX mov dword ptr [bx], ebp
#define MOV_EBP_TO_PTR_BP mov dword ptr [bp], ebp
#define MOV_EBP_TO_PTR_SI mov dword ptr [si], ebp
#define MOV_EBP_TO_PTR_DI mov dword ptr [di], ebp

#define MOV_ESP_TO_PTR_EAX mov dword ptr [eax], esp
#define MOV_ESP_TO_PTR_EBX mov dword ptr [ebx], esp
#define MOV_ESP_TO_PTR_ECX mov dword ptr [ecx], esp
#define MOV_ESP_TO_PTR_EDX mov dword ptr [edx], esp
#define MOV_ESP_TO_PTR_EDI mov dword ptr [edi], esp
#define MOV_ESP_TO_PTR_ESI mov dword ptr [esi], esp
#define MOV_ESP_TO_PTR_EBP mov dword ptr [ebp], esp
#define MOV_ESP_TO_PTR_ESP mov dword ptr [esp], esp
#define MOV_ESP_TO_PTR_BX mov dword ptr [bx], esp
#define MOV_ESP_TO_PTR_BP mov dword ptr [bp], esp
#define MOV_ESP_TO_PTR_SI mov dword ptr [si], esp
#define MOV_ESP_TO_PTR_DI mov dword ptr [di], esp

#define MOV_EAX_FROM_PTR_EAX_(VALUE) mov eax, dword ptr [eax + VALUE]
#define MOV_EAX_FROM_PTR_EBX_(VALUE) mov eax, dword ptr [ebx + VALUE]
#define MOV_EAX_FROM_PTR_ECX_(VALUE) mov eax, dword ptr [ecx + VALUE]
#define MOV_EAX_FROM_PTR_EDX_(VALUE) mov eax, dword ptr [edx + VALUE]
#define MOV_EAX_FROM_PTR_EDI_(VALUE) mov eax, dword ptr [edi + VALUE]
#define MOV_EAX_FROM_PTR_ESI_(VALUE) mov eax, dword ptr [esi + VALUE]
#define MOV_EAX_FROM_PTR_EBP_(VALUE) mov eax, dword ptr [ebp + VALUE]
#define MOV_EAX_FROM_PTR_ESP_(VALUE) mov eax, dword ptr [esp + VALUE]
#define MOV_EAX_FROM_PTR_BX_(VALUE) mov eax, dword ptr [bx + VALUE]
#define MOV_EAX_FROM_PTR_BP_(VALUE) mov eax, dword ptr [bp + VALUE]
#define MOV_EAX_FROM_PTR_SI_(VALUE) mov eax, dword ptr [si + VALUE]
#define MOV_EAX_FROM_PTR_DI_(VALUE) mov eax, dword ptr [di + VALUE]

#define MOV_EBX_FROM_PTR_EAX_(VALUE) mov ebx, dword ptr [eax + VALUE]
#define MOV_EBX_FROM_PTR_EBX_(VALUE) mov ebx, dword ptr [ebx + VALUE]
#define MOV_EBX_FROM_PTR_ECX_(VALUE) mov ebx, dword ptr [ecx + VALUE]
#define MOV_EBX_FROM_PTR_EDX_(VALUE) mov ebx, dword ptr [edx + VALUE]
#define MOV_EBX_FROM_PTR_EDI_(VALUE) mov ebx, dword ptr [edi + VALUE]
#define MOV_EBX_FROM_PTR_ESI_(VALUE) mov ebx, dword ptr [esi + VALUE]
#define MOV_EBX_FROM_PTR_EBP_(VALUE) mov ebx, dword ptr [ebp + VALUE]
#define MOV_EBX_FROM_PTR_ESP_(VALUE) mov ebx, dword ptr [esp + VALUE]
#define MOV_EBX_FROM_PTR_BX_(VALUE) mov ebx, dword ptr [bx + VALUE]
#define MOV_EBX_FROM_PTR_BP_(VALUE) mov ebx, dword ptr [bp + VALUE]
#define MOV_EBX_FROM_PTR_SI_(VALUE) mov ebx, dword ptr [si + VALUE]
#define MOV_EBX_FROM_PTR_DI_(VALUE) mov ebx, dword ptr [di + VALUE]

#define MOV_ECX_FROM_PTR_EAX_(VALUE) mov ecx, dword ptr [eax + VALUE]
#define MOV_ECX_FROM_PTR_EBX_(VALUE) mov ecx, dword ptr [ebx + VALUE]
#define MOV_ECX_FROM_PTR_ECX_(VALUE) mov ecx, dword ptr [ecx + VALUE]
#define MOV_ECX_FROM_PTR_EDX_(VALUE) mov ecx, dword ptr [edx + VALUE]
#define MOV_ECX_FROM_PTR_EDI_(VALUE) mov ecx, dword ptr [edi + VALUE]
#define MOV_ECX_FROM_PTR_ESI_(VALUE) mov ecx, dword ptr [esi + VALUE]
#define MOV_ECX_FROM_PTR_EBP_(VALUE) mov ecx, dword ptr [ebp + VALUE]
#define MOV_ECX_FROM_PTR_ESP_(VALUE) mov ecx, dword ptr [esp + VALUE]
#define MOV_ECX_FROM_PTR_BX_(VALUE) mov ecx, dword ptr [bx + VALUE]
#define MOV_ECX_FROM_PTR_BP_(VALUE) mov ecx, dword ptr [bp + VALUE]
#define MOV_ECX_FROM_PTR_SI_(VALUE) mov ecx, dword ptr [si + VALUE]
#define MOV_ECX_FROM_PTR_DI_(VALUE) mov ecx, dword ptr [di + VALUE]

#define MOV_EDX_FROM_PTR_EAX_(VALUE) mov edx, dword ptr [eax + VALUE]
#define MOV_EDX_FROM_PTR_EBX_(VALUE) mov edx, dword ptr [ebx + VALUE]
#define MOV_EDX_FROM_PTR_ECX_(VALUE) mov edx, dword ptr [ecx + VALUE]
#define MOV_EDX_FROM_PTR_EDX_(VALUE) mov edx, dword ptr [edx + VALUE]
#define MOV_EDX_FROM_PTR_EDI_(VALUE) mov edx, dword ptr [edi + VALUE]
#define MOV_EDX_FROM_PTR_ESI_(VALUE) mov edx, dword ptr [esi + VALUE]
#define MOV_EDX_FROM_PTR_EBP_(VALUE) mov edx, dword ptr [ebp + VALUE]
#define MOV_EDX_FROM_PTR_ESP_(VALUE) mov edx, dword ptr [esp + VALUE]
#define MOV_EDX_FROM_PTR_BX_(VALUE) mov edx, dword ptr [bx + VALUE]
#define MOV_EDX_FROM_PTR_BP_(VALUE) mov edx, dword ptr [bp + VALUE]
#define MOV_EDX_FROM_PTR_SI_(VALUE) mov edx, dword ptr [si + VALUE]
#define MOV_EDX_FROM_PTR_DI_(VALUE) mov edx, dword ptr [di + VALUE]

#define MOV_EDI_FROM_PTR_EAX_(VALUE) mov edi, dword ptr [eax + VALUE]
#define MOV_EDI_FROM_PTR_EBX_(VALUE) mov edi, dword ptr [ebx + VALUE]
#define MOV_EDI_FROM_PTR_ECX_(VALUE) mov edi, dword ptr [ecx + VALUE]
#define MOV_EDI_FROM_PTR_EDX_(VALUE) mov edi, dword ptr [edx + VALUE]
#define MOV_EDI_FROM_PTR_EDI_(VALUE) mov edi, dword ptr [edi + VALUE]
#define MOV_EDI_FROM_PTR_ESI_(VALUE) mov edi, dword ptr [esi + VALUE]
#define MOV_EDI_FROM_PTR_EBP_(VALUE) mov edi, dword ptr [ebp + VALUE]
#define MOV_EDI_FROM_PTR_ESP_(VALUE) mov edi, dword ptr [esp + VALUE]
#define MOV_EDI_FROM_PTR_BX_(VALUE) mov edi, dword ptr [bx + VALUE]
#define MOV_EDI_FROM_PTR_BP_(VALUE) mov edi, dword ptr [bp + VALUE]
#define MOV_EDI_FROM_PTR_SI_(VALUE) mov edi, dword ptr [si + VALUE]
#define MOV_EDI_FROM_PTR_DI_(VALUE) mov edi, dword ptr [di + VALUE]

#define MOV_ESI_FROM_PTR_EAX_(VALUE) mov esi, dword ptr [eax + VALUE]
#define MOV_ESI_FROM_PTR_EBX_(VALUE) mov esi, dword ptr [ebx + VALUE]
#define MOV_ESI_FROM_PTR_ECX_(VALUE) mov esi, dword ptr [ecx + VALUE]
#define MOV_ESI_FROM_PTR_EDX_(VALUE) mov esi, dword ptr [edx + VALUE]
#define MOV_ESI_FROM_PTR_EDI_(VALUE) mov esi, dword ptr [edi + VALUE]
#define MOV_ESI_FROM_PTR_ESI_(VALUE) mov esi, dword ptr [esi + VALUE]
#define MOV_ESI_FROM_PTR_EBP_(VALUE) mov esi, dword ptr [ebp + VALUE]
#define MOV_ESI_FROM_PTR_ESP_(VALUE) mov esi, dword ptr [esp + VALUE]
#define MOV_ESI_FROM_PTR_BX_(VALUE) mov esi, dword ptr [bx + VALUE]
#define MOV_ESI_FROM_PTR_BP_(VALUE) mov esi, dword ptr [bp + VALUE]
#define MOV_ESI_FROM_PTR_SI_(VALUE) mov esi, dword ptr [si + VALUE]
#define MOV_ESI_FROM_PTR_DI_(VALUE) mov esi, dword ptr [di + VALUE]

#define MOV_EBP_FROM_PTR_EAX_(VALUE) mov ebp, dword ptr [eax + VALUE]
#define MOV_EBP_FROM_PTR_EBX_(VALUE) mov ebp, dword ptr [ebx + VALUE]
#define MOV_EBP_FROM_PTR_ECX_(VALUE) mov ebp, dword ptr [ecx + VALUE]
#define MOV_EBP_FROM_PTR_EDX_(VALUE) mov ebp, dword ptr [edx + VALUE]
#define MOV_EBP_FROM_PTR_EDI_(VALUE) mov ebp, dword ptr [edi + VALUE]
#define MOV_EBP_FROM_PTR_ESI_(VALUE) mov ebp, dword ptr [esi + VALUE]
#define MOV_EBP_FROM_PTR_EBP_(VALUE) mov ebp, dword ptr [ebp + VALUE]
#define MOV_EBP_FROM_PTR_ESP_(VALUE) mov ebp, dword ptr [esp + VALUE]
#define MOV_EBP_FROM_PTR_BX_(VALUE) mov ebp, dword ptr [bx + VALUE]
#define MOV_EBP_FROM_PTR_BP_(VALUE) mov ebp, dword ptr [bp + VALUE]
#define MOV_EBP_FROM_PTR_SI_(VALUE) mov ebp, dword ptr [si + VALUE]
#define MOV_EBP_FROM_PTR_DI_(VALUE) mov ebp, dword ptr [di + VALUE]

#define MOV_ESP_FROM_PTR_EAX_(VALUE) mov esp, dword ptr [eax + VALUE]
#define MOV_ESP_FROM_PTR_EBX_(VALUE) mov esp, dword ptr [ebx + VALUE]
#define MOV_ESP_FROM_PTR_ECX_(VALUE) mov esp, dword ptr [ecx + VALUE]
#define MOV_ESP_FROM_PTR_EDX_(VALUE) mov esp, dword ptr [edx + VALUE]
#define MOV_ESP_FROM_PTR_EDI_(VALUE) mov esp, dword ptr [edi + VALUE]
#define MOV_ESP_FROM_PTR_ESI_(VALUE) mov esp, dword ptr [esi + VALUE]
#define MOV_ESP_FROM_PTR_EBP_(VALUE) mov esp, dword ptr [ebp + VALUE]
#define MOV_ESP_FROM_PTR_ESP_(VALUE) mov esp, dword ptr [esp + VALUE]
#define MOV_ESP_FROM_PTR_BX_(VALUE) mov esp, dword ptr [bx + VALUE]
#define MOV_ESP_FROM_PTR_BP_(VALUE) mov esp, dword ptr [bp + VALUE]
#define MOV_ESP_FROM_PTR_SI_(VALUE) mov esp, dword ptr [si + VALUE]
#define MOV_ESP_FROM_PTR_DI_(VALUE) mov esp, dword ptr [di + VALUE]

#define MOV_EAX_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], eax
#define MOV_EAX_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], eax
#define MOV_EAX_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], eax
#define MOV_EAX_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], eax
#define MOV_EAX_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], eax
#define MOV_EAX_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], eax
#define MOV_EAX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], eax
#define MOV_EAX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], eax
#define MOV_EAX_TO_PTR_BX_(VALUE) mov dword ptr [bx + VALUE], eax
#define MOV_EAX_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], eax
#define MOV_EAX_TO_PTR_SI_(VALUE) mov dword ptr [si + VALUE], eax
#define MOV_EAX_TO_PTR_DI_(VALUE) mov dword ptr [di + VALUE], eax

#define MOV_EBX_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], ebx
#define MOV_EBX_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], ebx
#define MOV_EBX_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], ebx
#define MOV_EBX_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], ebx
#define MOV_EBX_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], ebx
#define MOV_EBX_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], ebx
#define MOV_EBX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ebx
#define MOV_EBX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ebx
#define MOV_EBX_TO_PTR_BX_(VALUE) mov dword ptr [bx + VALUE], ebx
#define MOV_EBX_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], ebx
#define MOV_EBX_TO_PTR_SI_(VALUE) mov dword ptr [si + VALUE], ebx
#define MOV_EBX_TO_PTR_DI_(VALUE) mov dword ptr [di + VALUE], ebx

#define MOV_ECX_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], ecx
#define MOV_ECX_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], ecx
#define MOV_ECX_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], ecx
#define MOV_ECX_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], ecx
#define MOV_ECX_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], ecx
#define MOV_ECX_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], ecx
#define MOV_ECX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ecx
#define MOV_ECX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ecx
#define MOV_ECX_TO_PTR_BX_(VALUE) mov dword ptr [bx + VALUE], ecx
#define MOV_ECX_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], ecx
#define MOV_ECX_TO_PTR_SI_(VALUE) mov dword ptr [si + VALUE], ecx
#define MOV_ECX_TO_PTR_DI_(VALUE) mov dword ptr [di + VALUE], ecx

#define MOV_EDX_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], edx
#define MOV_EDX_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], edx
#define MOV_EDX_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], edx
#define MOV_EDX_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], edx
#define MOV_EDX_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], edx
#define MOV_EDX_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], edx
#define MOV_EDX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], edx
#define MOV_EDX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], edx
#define MOV_EDX_TO_PTR_BX_(VALUE) mov dword ptr [bx + VALUE], edx
#define MOV_EDX_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], edx
#define MOV_EDX_TO_PTR_SI_(VALUE) mov dword ptr [si + VALUE], edx
#define MOV_EDX_TO_PTR_DI_(VALUE) mov dword ptr [di + VALUE], edx

#define MOV_EDI_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], edi
#define MOV_EDI_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], edi
#define MOV_EDI_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], edi
#define MOV_EDI_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], edi
#define MOV_EDI_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], edi
#define MOV_EDI_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], edi
#define MOV_EDI_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], edi
#define MOV_EDI_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], edi
#define MOV_EDI_TO_PTR_BX_(VALUE) mov dword ptr [bx + VALUE], edi
#define MOV_EDI_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], edi
#define MOV_EDI_TO_PTR_SI_(VALUE) mov dword ptr [si + VALUE], edi
#define MOV_EDI_TO_PTR_DI_(VALUE) mov dword ptr [di + VALUE], edi

#define MOV_ESI_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], esi
#define MOV_ESI_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], esi
#define MOV_ESI_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], esi
#define MOV_ESI_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], esi
#define MOV_ESI_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], esi
#define MOV_ESI_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], esi
#define MOV_ESI_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], esi
#define MOV_ESI_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], esi
#define MOV_ESI_TO_PTR_BX_(VALUE) mov dword ptr [bx + VALUE], esi
#define MOV_ESI_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], esi
#define MOV_ESI_TO_PTR_SI_(VALUE) mov dword ptr [si + VALUE], esi
#define MOV_ESI_TO_PTR_DI_(VALUE) mov dword ptr [di + VALUE], esi

#define MOV_EBP_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], ebp
#define MOV_EBP_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], ebp
#define MOV_EBP_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], ebp
#define MOV_EBP_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], ebp
#define MOV_EBP_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], ebp
#define MOV_EBP_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], ebp
#define MOV_EBP_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ebp
#define MOV_EBP_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ebp
#define MOV_EBP_TO_PTR_BX_(VALUE) mov dword ptr [bx + VALUE], ebp
#define MOV_EBP_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], ebp
#define MOV_EBP_TO_PTR_SI_(VALUE) mov dword ptr [si + VALUE], ebp
#define MOV_EBP_TO_PTR_DI_(VALUE) mov dword ptr [di + VALUE], ebp

#define MOV_ESP_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], esp
#define MOV_ESP_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], esp
#define MOV_ESP_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], esp
#define MOV_ESP_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], esp
#define MOV_ESP_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], esp
#define MOV_ESP_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], esp
#define MOV_ESP_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], esp
#define MOV_ESP_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], esp
#define MOV_ESP_TO_PTR_BX_(VALUE) mov dword ptr [bx + VALUE], esp
#define MOV_ESP_TO_PTR_BP_(VALUE) mov dword ptr [bp + VALUE], esp
#define MOV_ESP_TO_PTR_SI_(VALUE) mov dword ptr [si + VALUE], esp
#define MOV_ESP_TO_PTR_DI_(VALUE) mov dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define MOV_EAX_FROM_PTR_(VALUE) mov eax, dword ptr [VALUE]
#define MOV_EBX_FROM_PTR_(VALUE) mov ebx, dword ptr [VALUE]
#define MOV_ECX_FROM_PTR_(VALUE) mov ecx, dword ptr [VALUE]
#define MOV_EDX_FROM_PTR_(VALUE) mov edx, dword ptr [VALUE]
#define MOV_EDI_FROM_PTR_(VALUE) mov edi, dword ptr [VALUE]
#define MOV_ESI_FROM_PTR_(VALUE) mov esi, dword ptr [VALUE]
#define MOV_EBP_FROM_PTR_(VALUE) mov ebp, dword ptr [VALUE]
#define MOV_ESP_FROM_PTR_(VALUE) mov esp, dword ptr [VALUE]
#define MOV_R8D_FROM_PTR_(VALUE) mov r8d, dword ptr [VALUE]
#define MOV_R9D_FROM_PTR_(VALUE) mov r9d, dword ptr [VALUE]
#define MOV_R10D_FROM_PTR_(VALUE) mov r10d, dword ptr [VALUE]
#define MOV_R11D_FROM_PTR_(VALUE) mov r11d, dword ptr [VALUE]
#define MOV_R12D_FROM_PTR_(VALUE) mov r12d, dword ptr [VALUE]
#define MOV_R13D_FROM_PTR_(VALUE) mov r13d, dword ptr [VALUE]
#define MOV_R14D_FROM_PTR_(VALUE) mov r14d, dword ptr [VALUE]
#define MOV_R15D_FROM_PTR_(VALUE) mov r15d, dword ptr [VALUE]

#define MOV_EAX_TO_PTR_(VALUE) mov dword ptr [VALUE], eax
#define MOV_EBX_TO_PTR_(VALUE) mov dword ptr [VALUE], ebx
#define MOV_ECX_TO_PTR_(VALUE) mov dword ptr [VALUE], ecx
#define MOV_EDX_TO_PTR_(VALUE) mov dword ptr [VALUE], edx
#define MOV_EDI_TO_PTR_(VALUE) mov dword ptr [VALUE], edi
#define MOV_ESI_TO_PTR_(VALUE) mov dword ptr [VALUE], esi
#define MOV_EBP_TO_PTR_(VALUE) mov dword ptr [VALUE], ebp
#define MOV_ESP_TO_PTR_(VALUE) mov dword ptr [VALUE], esp
#define MOV_R8D_TO_PTR_(VALUE) mov dword ptr [VALUE], r8d
#define MOV_R9D_TO_PTR_(VALUE) mov dword ptr [VALUE], r9d
#define MOV_R10D_TO_PTR_(VALUE) mov dword ptr [VALUE], r10d
#define MOV_R11D_TO_PTR_(VALUE) mov dword ptr [VALUE], r11d
#define MOV_R12D_TO_PTR_(VALUE) mov dword ptr [VALUE], r12d
#define MOV_R13D_TO_PTR_(VALUE) mov dword ptr [VALUE], r13d
#define MOV_R14D_TO_PTR_(VALUE) mov dword ptr [VALUE], r14d
#define MOV_R15D_TO_PTR_(VALUE) mov dword ptr [VALUE], r15d

#define MOV_EAX_FROM_PTR_RAX mov eax, dword ptr [rax]
#define MOV_EAX_FROM_PTR_RBX mov eax, dword ptr [rbx]
#define MOV_EAX_FROM_PTR_RCX mov eax, dword ptr [rcx]
#define MOV_EAX_FROM_PTR_RDX mov eax, dword ptr [rdx]
#define MOV_EAX_FROM_PTR_RDI mov eax, dword ptr [rdi]
#define MOV_EAX_FROM_PTR_RSI mov eax, dword ptr [rsi]
#define MOV_EAX_FROM_PTR_RBP mov eax, dword ptr [rbp]
#define MOV_EAX_FROM_PTR_RSP mov eax, dword ptr [rsp]
#define MOV_EAX_FROM_PTR_R8 mov eax, dword ptr [r8]
#define MOV_EAX_FROM_PTR_R9 mov eax, dword ptr [r9]
#define MOV_EAX_FROM_PTR_R10 mov eax, dword ptr [r10]
#define MOV_EAX_FROM_PTR_R11 mov eax, dword ptr [r11]
#define MOV_EAX_FROM_PTR_R12 mov eax, dword ptr [r12]
#define MOV_EAX_FROM_PTR_R13 mov eax, dword ptr [r13]
#define MOV_EAX_FROM_PTR_R14 mov eax, dword ptr [r14]
#define MOV_EAX_FROM_PTR_R15 mov eax, dword ptr [r15]
#define MOV_EAX_FROM_PTR_EAX mov eax, dword ptr [eax]
#define MOV_EAX_FROM_PTR_EBX mov eax, dword ptr [ebx]
#define MOV_EAX_FROM_PTR_ECX mov eax, dword ptr [ecx]
#define MOV_EAX_FROM_PTR_EDX mov eax, dword ptr [edx]
#define MOV_EAX_FROM_PTR_EDI mov eax, dword ptr [edi]
#define MOV_EAX_FROM_PTR_ESI mov eax, dword ptr [esi]
#define MOV_EAX_FROM_PTR_EBP mov eax, dword ptr [ebp]
#define MOV_EAX_FROM_PTR_ESP mov eax, dword ptr [esp]

#define MOV_EBX_FROM_PTR_RAX mov ebx, dword ptr [rax]
#define MOV_EBX_FROM_PTR_RBX mov ebx, dword ptr [rbx]
#define MOV_EBX_FROM_PTR_RCX mov ebx, dword ptr [rcx]
#define MOV_EBX_FROM_PTR_RDX mov ebx, dword ptr [rdx]
#define MOV_EBX_FROM_PTR_RDI mov ebx, dword ptr [rdi]
#define MOV_EBX_FROM_PTR_RSI mov ebx, dword ptr [rsi]
#define MOV_EBX_FROM_PTR_RBP mov ebx, dword ptr [rbp]
#define MOV_EBX_FROM_PTR_RSP mov ebx, dword ptr [rsp]
#define MOV_EBX_FROM_PTR_R8 mov ebx, dword ptr [r8]
#define MOV_EBX_FROM_PTR_R9 mov ebx, dword ptr [r9]
#define MOV_EBX_FROM_PTR_R10 mov ebx, dword ptr [r10]
#define MOV_EBX_FROM_PTR_R11 mov ebx, dword ptr [r11]
#define MOV_EBX_FROM_PTR_R12 mov ebx, dword ptr [r12]
#define MOV_EBX_FROM_PTR_R13 mov ebx, dword ptr [r13]
#define MOV_EBX_FROM_PTR_R14 mov ebx, dword ptr [r14]
#define MOV_EBX_FROM_PTR_R15 mov ebx, dword ptr [r15]
#define MOV_EBX_FROM_PTR_EAX mov ebx, dword ptr [eax]
#define MOV_EBX_FROM_PTR_EBX mov ebx, dword ptr [ebx]
#define MOV_EBX_FROM_PTR_ECX mov ebx, dword ptr [ecx]
#define MOV_EBX_FROM_PTR_EDX mov ebx, dword ptr [edx]
#define MOV_EBX_FROM_PTR_EDI mov ebx, dword ptr [edi]
#define MOV_EBX_FROM_PTR_ESI mov ebx, dword ptr [esi]
#define MOV_EBX_FROM_PTR_EBP mov ebx, dword ptr [ebp]
#define MOV_EBX_FROM_PTR_ESP mov ebx, dword ptr [esp]

#define MOV_ECX_FROM_PTR_RAX mov ecx, dword ptr [rax]
#define MOV_ECX_FROM_PTR_RBX mov ecx, dword ptr [rbx]
#define MOV_ECX_FROM_PTR_RCX mov ecx, dword ptr [rcx]
#define MOV_ECX_FROM_PTR_RDX mov ecx, dword ptr [rdx]
#define MOV_ECX_FROM_PTR_RDI mov ecx, dword ptr [rdi]
#define MOV_ECX_FROM_PTR_RSI mov ecx, dword ptr [rsi]
#define MOV_ECX_FROM_PTR_RBP mov ecx, dword ptr [rbp]
#define MOV_ECX_FROM_PTR_RSP mov ecx, dword ptr [rsp]
#define MOV_ECX_FROM_PTR_R8 mov ecx, dword ptr [r8]
#define MOV_ECX_FROM_PTR_R9 mov ecx, dword ptr [r9]
#define MOV_ECX_FROM_PTR_R10 mov ecx, dword ptr [r10]
#define MOV_ECX_FROM_PTR_R11 mov ecx, dword ptr [r11]
#define MOV_ECX_FROM_PTR_R12 mov ecx, dword ptr [r12]
#define MOV_ECX_FROM_PTR_R13 mov ecx, dword ptr [r13]
#define MOV_ECX_FROM_PTR_R14 mov ecx, dword ptr [r14]
#define MOV_ECX_FROM_PTR_R15 mov ecx, dword ptr [r15]
#define MOV_ECX_FROM_PTR_EAX mov ecx, dword ptr [eax]
#define MOV_ECX_FROM_PTR_EBX mov ecx, dword ptr [ebx]
#define MOV_ECX_FROM_PTR_ECX mov ecx, dword ptr [ecx]
#define MOV_ECX_FROM_PTR_EDX mov ecx, dword ptr [edx]
#define MOV_ECX_FROM_PTR_EDI mov ecx, dword ptr [edi]
#define MOV_ECX_FROM_PTR_ESI mov ecx, dword ptr [esi]
#define MOV_ECX_FROM_PTR_EBP mov ecx, dword ptr [ebp]
#define MOV_ECX_FROM_PTR_ESP mov ecx, dword ptr [esp]

#define MOV_EDX_FROM_PTR_RAX mov edx, dword ptr [rax]
#define MOV_EDX_FROM_PTR_RBX mov edx, dword ptr [rbx]
#define MOV_EDX_FROM_PTR_RCX mov edx, dword ptr [rcx]
#define MOV_EDX_FROM_PTR_RDX mov edx, dword ptr [rdx]
#define MOV_EDX_FROM_PTR_RDI mov edx, dword ptr [rdi]
#define MOV_EDX_FROM_PTR_RSI mov edx, dword ptr [rsi]
#define MOV_EDX_FROM_PTR_RBP mov edx, dword ptr [rbp]
#define MOV_EDX_FROM_PTR_RSP mov edx, dword ptr [rsp]
#define MOV_EDX_FROM_PTR_R8 mov edx, dword ptr [r8]
#define MOV_EDX_FROM_PTR_R9 mov edx, dword ptr [r9]
#define MOV_EDX_FROM_PTR_R10 mov edx, dword ptr [r10]
#define MOV_EDX_FROM_PTR_R11 mov edx, dword ptr [r11]
#define MOV_EDX_FROM_PTR_R12 mov edx, dword ptr [r12]
#define MOV_EDX_FROM_PTR_R13 mov edx, dword ptr [r13]
#define MOV_EDX_FROM_PTR_R14 mov edx, dword ptr [r14]
#define MOV_EDX_FROM_PTR_R15 mov edx, dword ptr [r15]
#define MOV_EDX_FROM_PTR_EAX mov edx, dword ptr [eax]
#define MOV_EDX_FROM_PTR_EBX mov edx, dword ptr [ebx]
#define MOV_EDX_FROM_PTR_ECX mov edx, dword ptr [ecx]
#define MOV_EDX_FROM_PTR_EDX mov edx, dword ptr [edx]
#define MOV_EDX_FROM_PTR_EDI mov edx, dword ptr [edi]
#define MOV_EDX_FROM_PTR_ESI mov edx, dword ptr [esi]
#define MOV_EDX_FROM_PTR_EBP mov edx, dword ptr [ebp]
#define MOV_EDX_FROM_PTR_ESP mov edx, dword ptr [esp]

#define MOV_EDI_FROM_PTR_RAX mov edi, dword ptr [rax]
#define MOV_EDI_FROM_PTR_RBX mov edi, dword ptr [rbx]
#define MOV_EDI_FROM_PTR_RCX mov edi, dword ptr [rcx]
#define MOV_EDI_FROM_PTR_RDX mov edi, dword ptr [rdx]
#define MOV_EDI_FROM_PTR_RDI mov edi, dword ptr [rdi]
#define MOV_EDI_FROM_PTR_RSI mov edi, dword ptr [rsi]
#define MOV_EDI_FROM_PTR_RBP mov edi, dword ptr [rbp]
#define MOV_EDI_FROM_PTR_RSP mov edi, dword ptr [rsp]
#define MOV_EDI_FROM_PTR_R8 mov edi, dword ptr [r8]
#define MOV_EDI_FROM_PTR_R9 mov edi, dword ptr [r9]
#define MOV_EDI_FROM_PTR_R10 mov edi, dword ptr [r10]
#define MOV_EDI_FROM_PTR_R11 mov edi, dword ptr [r11]
#define MOV_EDI_FROM_PTR_R12 mov edi, dword ptr [r12]
#define MOV_EDI_FROM_PTR_R13 mov edi, dword ptr [r13]
#define MOV_EDI_FROM_PTR_R14 mov edi, dword ptr [r14]
#define MOV_EDI_FROM_PTR_R15 mov edi, dword ptr [r15]
#define MOV_EDI_FROM_PTR_EAX mov edi, dword ptr [eax]
#define MOV_EDI_FROM_PTR_EBX mov edi, dword ptr [ebx]
#define MOV_EDI_FROM_PTR_ECX mov edi, dword ptr [ecx]
#define MOV_EDI_FROM_PTR_EDX mov edi, dword ptr [edx]
#define MOV_EDI_FROM_PTR_EDI mov edi, dword ptr [edi]
#define MOV_EDI_FROM_PTR_ESI mov edi, dword ptr [esi]
#define MOV_EDI_FROM_PTR_EBP mov edi, dword ptr [ebp]
#define MOV_EDI_FROM_PTR_ESP mov edi, dword ptr [esp]

#define MOV_ESI_FROM_PTR_RAX mov esi, dword ptr [rax]
#define MOV_ESI_FROM_PTR_RBX mov esi, dword ptr [rbx]
#define MOV_ESI_FROM_PTR_RCX mov esi, dword ptr [rcx]
#define MOV_ESI_FROM_PTR_RDX mov esi, dword ptr [rdx]
#define MOV_ESI_FROM_PTR_RDI mov esi, dword ptr [rdi]
#define MOV_ESI_FROM_PTR_RSI mov esi, dword ptr [rsi]
#define MOV_ESI_FROM_PTR_RBP mov esi, dword ptr [rbp]
#define MOV_ESI_FROM_PTR_RSP mov esi, dword ptr [rsp]
#define MOV_ESI_FROM_PTR_R8 mov esi, dword ptr [r8]
#define MOV_ESI_FROM_PTR_R9 mov esi, dword ptr [r9]
#define MOV_ESI_FROM_PTR_R10 mov esi, dword ptr [r10]
#define MOV_ESI_FROM_PTR_R11 mov esi, dword ptr [r11]
#define MOV_ESI_FROM_PTR_R12 mov esi, dword ptr [r12]
#define MOV_ESI_FROM_PTR_R13 mov esi, dword ptr [r13]
#define MOV_ESI_FROM_PTR_R14 mov esi, dword ptr [r14]
#define MOV_ESI_FROM_PTR_R15 mov esi, dword ptr [r15]
#define MOV_ESI_FROM_PTR_EAX mov esi, dword ptr [eax]
#define MOV_ESI_FROM_PTR_EBX mov esi, dword ptr [ebx]
#define MOV_ESI_FROM_PTR_ECX mov esi, dword ptr [ecx]
#define MOV_ESI_FROM_PTR_EDX mov esi, dword ptr [edx]
#define MOV_ESI_FROM_PTR_EDI mov esi, dword ptr [edi]
#define MOV_ESI_FROM_PTR_ESI mov esi, dword ptr [esi]
#define MOV_ESI_FROM_PTR_EBP mov esi, dword ptr [ebp]
#define MOV_ESI_FROM_PTR_ESP mov esi, dword ptr [esp]

#define MOV_EBP_FROM_PTR_RAX mov ebp, dword ptr [rax]
#define MOV_EBP_FROM_PTR_RBX mov ebp, dword ptr [rbx]
#define MOV_EBP_FROM_PTR_RCX mov ebp, dword ptr [rcx]
#define MOV_EBP_FROM_PTR_RDX mov ebp, dword ptr [rdx]
#define MOV_EBP_FROM_PTR_RDI mov ebp, dword ptr [rdi]
#define MOV_EBP_FROM_PTR_RSI mov ebp, dword ptr [rsi]
#define MOV_EBP_FROM_PTR_RBP mov ebp, dword ptr [rbp]
#define MOV_EBP_FROM_PTR_RSP mov ebp, dword ptr [rsp]
#define MOV_EBP_FROM_PTR_R8 mov ebp, dword ptr [r8]
#define MOV_EBP_FROM_PTR_R9 mov ebp, dword ptr [r9]
#define MOV_EBP_FROM_PTR_R10 mov ebp, dword ptr [r10]
#define MOV_EBP_FROM_PTR_R11 mov ebp, dword ptr [r11]
#define MOV_EBP_FROM_PTR_R12 mov ebp, dword ptr [r12]
#define MOV_EBP_FROM_PTR_R13 mov ebp, dword ptr [r13]
#define MOV_EBP_FROM_PTR_R14 mov ebp, dword ptr [r14]
#define MOV_EBP_FROM_PTR_R15 mov ebp, dword ptr [r15]
#define MOV_EBP_FROM_PTR_EAX mov ebp, dword ptr [eax]
#define MOV_EBP_FROM_PTR_EBX mov ebp, dword ptr [ebx]
#define MOV_EBP_FROM_PTR_ECX mov ebp, dword ptr [ecx]
#define MOV_EBP_FROM_PTR_EDX mov ebp, dword ptr [edx]
#define MOV_EBP_FROM_PTR_EDI mov ebp, dword ptr [edi]
#define MOV_EBP_FROM_PTR_ESI mov ebp, dword ptr [esi]
#define MOV_EBP_FROM_PTR_EBP mov ebp, dword ptr [ebp]
#define MOV_EBP_FROM_PTR_ESP mov ebp, dword ptr [esp]

#define MOV_ESP_FROM_PTR_RAX mov esp, dword ptr [rax]
#define MOV_ESP_FROM_PTR_RBX mov esp, dword ptr [rbx]
#define MOV_ESP_FROM_PTR_RCX mov esp, dword ptr [rcx]
#define MOV_ESP_FROM_PTR_RDX mov esp, dword ptr [rdx]
#define MOV_ESP_FROM_PTR_RDI mov esp, dword ptr [rdi]
#define MOV_ESP_FROM_PTR_RSI mov esp, dword ptr [rsi]
#define MOV_ESP_FROM_PTR_RBP mov esp, dword ptr [rbp]
#define MOV_ESP_FROM_PTR_RSP mov esp, dword ptr [rsp]
#define MOV_ESP_FROM_PTR_R8 mov esp, dword ptr [r8]
#define MOV_ESP_FROM_PTR_R9 mov esp, dword ptr [r9]
#define MOV_ESP_FROM_PTR_R10 mov esp, dword ptr [r10]
#define MOV_ESP_FROM_PTR_R11 mov esp, dword ptr [r11]
#define MOV_ESP_FROM_PTR_R12 mov esp, dword ptr [r12]
#define MOV_ESP_FROM_PTR_R13 mov esp, dword ptr [r13]
#define MOV_ESP_FROM_PTR_R14 mov esp, dword ptr [r14]
#define MOV_ESP_FROM_PTR_R15 mov esp, dword ptr [r15]
#define MOV_ESP_FROM_PTR_EAX mov esp, dword ptr [eax]
#define MOV_ESP_FROM_PTR_EBX mov esp, dword ptr [ebx]
#define MOV_ESP_FROM_PTR_ECX mov esp, dword ptr [ecx]
#define MOV_ESP_FROM_PTR_EDX mov esp, dword ptr [edx]
#define MOV_ESP_FROM_PTR_EDI mov esp, dword ptr [edi]
#define MOV_ESP_FROM_PTR_ESI mov esp, dword ptr [esi]
#define MOV_ESP_FROM_PTR_EBP mov esp, dword ptr [ebp]
#define MOV_ESP_FROM_PTR_ESP mov esp, dword ptr [esp]

#define MOV_R8D_FROM_PTR_RAX mov r8d, dword ptr [rax]
#define MOV_R8D_FROM_PTR_RBX mov r8d, dword ptr [rbx]
#define MOV_R8D_FROM_PTR_RCX mov r8d, dword ptr [rcx]
#define MOV_R8D_FROM_PTR_RDX mov r8d, dword ptr [rdx]
#define MOV_R8D_FROM_PTR_RDI mov r8d, dword ptr [rdi]
#define MOV_R8D_FROM_PTR_RSI mov r8d, dword ptr [rsi]
#define MOV_R8D_FROM_PTR_RBP mov r8d, dword ptr [rbp]
#define MOV_R8D_FROM_PTR_RSP mov r8d, dword ptr [rsp]
#define MOV_R8D_FROM_PTR_R8 mov r8d, dword ptr [r8]
#define MOV_R8D_FROM_PTR_R9 mov r8d, dword ptr [r9]
#define MOV_R8D_FROM_PTR_R10 mov r8d, dword ptr [r10]
#define MOV_R8D_FROM_PTR_R11 mov r8d, dword ptr [r11]
#define MOV_R8D_FROM_PTR_R12 mov r8d, dword ptr [r12]
#define MOV_R8D_FROM_PTR_R13 mov r8d, dword ptr [r13]
#define MOV_R8D_FROM_PTR_R14 mov r8d, dword ptr [r14]
#define MOV_R8D_FROM_PTR_R15 mov r8d, dword ptr [r15]
#define MOV_R8D_FROM_PTR_EAX mov r8d, dword ptr [eax]
#define MOV_R8D_FROM_PTR_EBX mov r8d, dword ptr [ebx]
#define MOV_R8D_FROM_PTR_ECX mov r8d, dword ptr [ecx]
#define MOV_R8D_FROM_PTR_EDX mov r8d, dword ptr [edx]
#define MOV_R8D_FROM_PTR_EDI mov r8d, dword ptr [edi]
#define MOV_R8D_FROM_PTR_ESI mov r8d, dword ptr [esi]
#define MOV_R8D_FROM_PTR_EBP mov r8d, dword ptr [ebp]
#define MOV_R8D_FROM_PTR_ESP mov r8d, dword ptr [esp]

#define MOV_R9D_FROM_PTR_RAX mov r9d, dword ptr [rax]
#define MOV_R9D_FROM_PTR_RBX mov r9d, dword ptr [rbx]
#define MOV_R9D_FROM_PTR_RCX mov r9d, dword ptr [rcx]
#define MOV_R9D_FROM_PTR_RDX mov r9d, dword ptr [rdx]
#define MOV_R9D_FROM_PTR_RDI mov r9d, dword ptr [rdi]
#define MOV_R9D_FROM_PTR_RSI mov r9d, dword ptr [rsi]
#define MOV_R9D_FROM_PTR_RBP mov r9d, dword ptr [rbp]
#define MOV_R9D_FROM_PTR_RSP mov r9d, dword ptr [rsp]
#define MOV_R9D_FROM_PTR_R8 mov r9d, dword ptr [r8]
#define MOV_R9D_FROM_PTR_R9 mov r9d, dword ptr [r9]
#define MOV_R9D_FROM_PTR_R10 mov r9d, dword ptr [r10]
#define MOV_R9D_FROM_PTR_R11 mov r9d, dword ptr [r11]
#define MOV_R9D_FROM_PTR_R12 mov r9d, dword ptr [r12]
#define MOV_R9D_FROM_PTR_R13 mov r9d, dword ptr [r13]
#define MOV_R9D_FROM_PTR_R14 mov r9d, dword ptr [r14]
#define MOV_R9D_FROM_PTR_R15 mov r9d, dword ptr [r15]
#define MOV_R9D_FROM_PTR_EAX mov r9d, dword ptr [eax]
#define MOV_R9D_FROM_PTR_EBX mov r9d, dword ptr [ebx]
#define MOV_R9D_FROM_PTR_ECX mov r9d, dword ptr [ecx]
#define MOV_R9D_FROM_PTR_EDX mov r9d, dword ptr [edx]
#define MOV_R9D_FROM_PTR_EDI mov r9d, dword ptr [edi]
#define MOV_R9D_FROM_PTR_ESI mov r9d, dword ptr [esi]
#define MOV_R9D_FROM_PTR_EBP mov r9d, dword ptr [ebp]
#define MOV_R9D_FROM_PTR_ESP mov r9d, dword ptr [esp]

#define MOV_R10D_FROM_PTR_RAX mov r10d, dword ptr [rax]
#define MOV_R10D_FROM_PTR_RBX mov r10d, dword ptr [rbx]
#define MOV_R10D_FROM_PTR_RCX mov r10d, dword ptr [rcx]
#define MOV_R10D_FROM_PTR_RDX mov r10d, dword ptr [rdx]
#define MOV_R10D_FROM_PTR_RDI mov r10d, dword ptr [rdi]
#define MOV_R10D_FROM_PTR_RSI mov r10d, dword ptr [rsi]
#define MOV_R10D_FROM_PTR_RBP mov r10d, dword ptr [rbp]
#define MOV_R10D_FROM_PTR_RSP mov r10d, dword ptr [rsp]
#define MOV_R10D_FROM_PTR_R8 mov r10d, dword ptr [r8]
#define MOV_R10D_FROM_PTR_R9 mov r10d, dword ptr [r9]
#define MOV_R10D_FROM_PTR_R10 mov r10d, dword ptr [r10]
#define MOV_R10D_FROM_PTR_R11 mov r10d, dword ptr [r11]
#define MOV_R10D_FROM_PTR_R12 mov r10d, dword ptr [r12]
#define MOV_R10D_FROM_PTR_R13 mov r10d, dword ptr [r13]
#define MOV_R10D_FROM_PTR_R14 mov r10d, dword ptr [r14]
#define MOV_R10D_FROM_PTR_R15 mov r10d, dword ptr [r15]
#define MOV_R10D_FROM_PTR_EAX mov r10d, dword ptr [eax]
#define MOV_R10D_FROM_PTR_EBX mov r10d, dword ptr [ebx]
#define MOV_R10D_FROM_PTR_ECX mov r10d, dword ptr [ecx]
#define MOV_R10D_FROM_PTR_EDX mov r10d, dword ptr [edx]
#define MOV_R10D_FROM_PTR_EDI mov r10d, dword ptr [edi]
#define MOV_R10D_FROM_PTR_ESI mov r10d, dword ptr [esi]
#define MOV_R10D_FROM_PTR_EBP mov r10d, dword ptr [ebp]
#define MOV_R10D_FROM_PTR_ESP mov r10d, dword ptr [esp]

#define MOV_R11D_FROM_PTR_RAX mov r11d, dword ptr [rax]
#define MOV_R11D_FROM_PTR_RBX mov r11d, dword ptr [rbx]
#define MOV_R11D_FROM_PTR_RCX mov r11d, dword ptr [rcx]
#define MOV_R11D_FROM_PTR_RDX mov r11d, dword ptr [rdx]
#define MOV_R11D_FROM_PTR_RDI mov r11d, dword ptr [rdi]
#define MOV_R11D_FROM_PTR_RSI mov r11d, dword ptr [rsi]
#define MOV_R11D_FROM_PTR_RBP mov r11d, dword ptr [rbp]
#define MOV_R11D_FROM_PTR_RSP mov r11d, dword ptr [rsp]
#define MOV_R11D_FROM_PTR_R8 mov r11d, dword ptr [r8]
#define MOV_R11D_FROM_PTR_R9 mov r11d, dword ptr [r9]
#define MOV_R11D_FROM_PTR_R10 mov r11d, dword ptr [r10]
#define MOV_R11D_FROM_PTR_R11 mov r11d, dword ptr [r11]
#define MOV_R11D_FROM_PTR_R12 mov r11d, dword ptr [r12]
#define MOV_R11D_FROM_PTR_R13 mov r11d, dword ptr [r13]
#define MOV_R11D_FROM_PTR_R14 mov r11d, dword ptr [r14]
#define MOV_R11D_FROM_PTR_R15 mov r11d, dword ptr [r15]
#define MOV_R11D_FROM_PTR_EAX mov r11d, dword ptr [eax]
#define MOV_R11D_FROM_PTR_EBX mov r11d, dword ptr [ebx]
#define MOV_R11D_FROM_PTR_ECX mov r11d, dword ptr [ecx]
#define MOV_R11D_FROM_PTR_EDX mov r11d, dword ptr [edx]
#define MOV_R11D_FROM_PTR_EDI mov r11d, dword ptr [edi]
#define MOV_R11D_FROM_PTR_ESI mov r11d, dword ptr [esi]
#define MOV_R11D_FROM_PTR_EBP mov r11d, dword ptr [ebp]
#define MOV_R11D_FROM_PTR_ESP mov r11d, dword ptr [esp]

#define MOV_R12D_FROM_PTR_RAX mov r12d, dword ptr [rax]
#define MOV_R12D_FROM_PTR_RBX mov r12d, dword ptr [rbx]
#define MOV_R12D_FROM_PTR_RCX mov r12d, dword ptr [rcx]
#define MOV_R12D_FROM_PTR_RDX mov r12d, dword ptr [rdx]
#define MOV_R12D_FROM_PTR_RDI mov r12d, dword ptr [rdi]
#define MOV_R12D_FROM_PTR_RSI mov r12d, dword ptr [rsi]
#define MOV_R12D_FROM_PTR_RBP mov r12d, dword ptr [rbp]
#define MOV_R12D_FROM_PTR_RSP mov r12d, dword ptr [rsp]
#define MOV_R12D_FROM_PTR_R8 mov r12d, dword ptr [r8]
#define MOV_R12D_FROM_PTR_R9 mov r12d, dword ptr [r9]
#define MOV_R12D_FROM_PTR_R10 mov r12d, dword ptr [r10]
#define MOV_R12D_FROM_PTR_R11 mov r12d, dword ptr [r11]
#define MOV_R12D_FROM_PTR_R12 mov r12d, dword ptr [r12]
#define MOV_R12D_FROM_PTR_R13 mov r12d, dword ptr [r13]
#define MOV_R12D_FROM_PTR_R14 mov r12d, dword ptr [r14]
#define MOV_R12D_FROM_PTR_R15 mov r12d, dword ptr [r15]
#define MOV_R12D_FROM_PTR_EAX mov r12d, dword ptr [eax]
#define MOV_R12D_FROM_PTR_EBX mov r12d, dword ptr [ebx]
#define MOV_R12D_FROM_PTR_ECX mov r12d, dword ptr [ecx]
#define MOV_R12D_FROM_PTR_EDX mov r12d, dword ptr [edx]
#define MOV_R12D_FROM_PTR_EDI mov r12d, dword ptr [edi]
#define MOV_R12D_FROM_PTR_ESI mov r12d, dword ptr [esi]
#define MOV_R12D_FROM_PTR_EBP mov r12d, dword ptr [ebp]
#define MOV_R12D_FROM_PTR_ESP mov r12d, dword ptr [esp]

#define MOV_R13D_FROM_PTR_RAX mov r13d, dword ptr [rax]
#define MOV_R13D_FROM_PTR_RBX mov r13d, dword ptr [rbx]
#define MOV_R13D_FROM_PTR_RCX mov r13d, dword ptr [rcx]
#define MOV_R13D_FROM_PTR_RDX mov r13d, dword ptr [rdx]
#define MOV_R13D_FROM_PTR_RDI mov r13d, dword ptr [rdi]
#define MOV_R13D_FROM_PTR_RSI mov r13d, dword ptr [rsi]
#define MOV_R13D_FROM_PTR_RBP mov r13d, dword ptr [rbp]
#define MOV_R13D_FROM_PTR_RSP mov r13d, dword ptr [rsp]
#define MOV_R13D_FROM_PTR_R8 mov r13d, dword ptr [r8]
#define MOV_R13D_FROM_PTR_R9 mov r13d, dword ptr [r9]
#define MOV_R13D_FROM_PTR_R10 mov r13d, dword ptr [r10]
#define MOV_R13D_FROM_PTR_R11 mov r13d, dword ptr [r11]
#define MOV_R13D_FROM_PTR_R12 mov r13d, dword ptr [r12]
#define MOV_R13D_FROM_PTR_R13 mov r13d, dword ptr [r13]
#define MOV_R13D_FROM_PTR_R14 mov r13d, dword ptr [r14]
#define MOV_R13D_FROM_PTR_R15 mov r13d, dword ptr [r15]
#define MOV_R13D_FROM_PTR_EAX mov r13d, dword ptr [eax]
#define MOV_R13D_FROM_PTR_EBX mov r13d, dword ptr [ebx]
#define MOV_R13D_FROM_PTR_ECX mov r13d, dword ptr [ecx]
#define MOV_R13D_FROM_PTR_EDX mov r13d, dword ptr [edx]
#define MOV_R13D_FROM_PTR_EDI mov r13d, dword ptr [edi]
#define MOV_R13D_FROM_PTR_ESI mov r13d, dword ptr [esi]
#define MOV_R13D_FROM_PTR_EBP mov r13d, dword ptr [ebp]
#define MOV_R13D_FROM_PTR_ESP mov r13d, dword ptr [esp]

#define MOV_R14D_FROM_PTR_RAX mov r14d, dword ptr [rax]
#define MOV_R14D_FROM_PTR_RBX mov r14d, dword ptr [rbx]
#define MOV_R14D_FROM_PTR_RCX mov r14d, dword ptr [rcx]
#define MOV_R14D_FROM_PTR_RDX mov r14d, dword ptr [rdx]
#define MOV_R14D_FROM_PTR_RDI mov r14d, dword ptr [rdi]
#define MOV_R14D_FROM_PTR_RSI mov r14d, dword ptr [rsi]
#define MOV_R14D_FROM_PTR_RBP mov r14d, dword ptr [rbp]
#define MOV_R14D_FROM_PTR_RSP mov r14d, dword ptr [rsp]
#define MOV_R14D_FROM_PTR_R8 mov r14d, dword ptr [r8]
#define MOV_R14D_FROM_PTR_R9 mov r14d, dword ptr [r9]
#define MOV_R14D_FROM_PTR_R10 mov r14d, dword ptr [r10]
#define MOV_R14D_FROM_PTR_R11 mov r14d, dword ptr [r11]
#define MOV_R14D_FROM_PTR_R12 mov r14d, dword ptr [r12]
#define MOV_R14D_FROM_PTR_R13 mov r14d, dword ptr [r13]
#define MOV_R14D_FROM_PTR_R14 mov r14d, dword ptr [r14]
#define MOV_R14D_FROM_PTR_R15 mov r14d, dword ptr [r15]
#define MOV_R14D_FROM_PTR_EAX mov r14d, dword ptr [eax]
#define MOV_R14D_FROM_PTR_EBX mov r14d, dword ptr [ebx]
#define MOV_R14D_FROM_PTR_ECX mov r14d, dword ptr [ecx]
#define MOV_R14D_FROM_PTR_EDX mov r14d, dword ptr [edx]
#define MOV_R14D_FROM_PTR_EDI mov r14d, dword ptr [edi]
#define MOV_R14D_FROM_PTR_ESI mov r14d, dword ptr [esi]
#define MOV_R14D_FROM_PTR_EBP mov r14d, dword ptr [ebp]
#define MOV_R14D_FROM_PTR_ESP mov r14d, dword ptr [esp]

#define MOV_R15D_FROM_PTR_RAX mov r15d, dword ptr [rax]
#define MOV_R15D_FROM_PTR_RBX mov r15d, dword ptr [rbx]
#define MOV_R15D_FROM_PTR_RCX mov r15d, dword ptr [rcx]
#define MOV_R15D_FROM_PTR_RDX mov r15d, dword ptr [rdx]
#define MOV_R15D_FROM_PTR_RDI mov r15d, dword ptr [rdi]
#define MOV_R15D_FROM_PTR_RSI mov r15d, dword ptr [rsi]
#define MOV_R15D_FROM_PTR_RBP mov r15d, dword ptr [rbp]
#define MOV_R15D_FROM_PTR_RSP mov r15d, dword ptr [rsp]
#define MOV_R15D_FROM_PTR_R8 mov r15d, dword ptr [r8]
#define MOV_R15D_FROM_PTR_R9 mov r15d, dword ptr [r9]
#define MOV_R15D_FROM_PTR_R10 mov r15d, dword ptr [r10]
#define MOV_R15D_FROM_PTR_R11 mov r15d, dword ptr [r11]
#define MOV_R15D_FROM_PTR_R12 mov r15d, dword ptr [r12]
#define MOV_R15D_FROM_PTR_R13 mov r15d, dword ptr [r13]
#define MOV_R15D_FROM_PTR_R14 mov r15d, dword ptr [r14]
#define MOV_R15D_FROM_PTR_R15 mov r15d, dword ptr [r15]
#define MOV_R15D_FROM_PTR_EAX mov r15d, dword ptr [eax]
#define MOV_R15D_FROM_PTR_EBX mov r15d, dword ptr [ebx]
#define MOV_R15D_FROM_PTR_ECX mov r15d, dword ptr [ecx]
#define MOV_R15D_FROM_PTR_EDX mov r15d, dword ptr [edx]
#define MOV_R15D_FROM_PTR_EDI mov r15d, dword ptr [edi]
#define MOV_R15D_FROM_PTR_ESI mov r15d, dword ptr [esi]
#define MOV_R15D_FROM_PTR_EBP mov r15d, dword ptr [ebp]
#define MOV_R15D_FROM_PTR_ESP mov r15d, dword ptr [esp]

#define MOV_EAX_TO_PTR_RAX mov dword ptr [rax], eax
#define MOV_EAX_TO_PTR_RBX mov dword ptr [rbx], eax
#define MOV_EAX_TO_PTR_RCX mov dword ptr [rcx], eax
#define MOV_EAX_TO_PTR_RDX mov dword ptr [rdx], eax
#define MOV_EAX_TO_PTR_RDI mov dword ptr [rdi], eax
#define MOV_EAX_TO_PTR_RSI mov dword ptr [rsi], eax
#define MOV_EAX_TO_PTR_RBP mov dword ptr [rbp], eax
#define MOV_EAX_TO_PTR_RSP mov dword ptr [rsp], eax
#define MOV_EAX_TO_PTR_R8 mov dword ptr [r8], eax
#define MOV_EAX_TO_PTR_R9 mov dword ptr [r9], eax
#define MOV_EAX_TO_PTR_R10 mov dword ptr [r10], eax
#define MOV_EAX_TO_PTR_R11 mov dword ptr [r11], eax
#define MOV_EAX_TO_PTR_R12 mov dword ptr [r12], eax
#define MOV_EAX_TO_PTR_R13 mov dword ptr [r13], eax
#define MOV_EAX_TO_PTR_R14 mov dword ptr [r14], eax
#define MOV_EAX_TO_PTR_R15 mov dword ptr [r15], eax
#define MOV_EAX_TO_PTR_EAX mov dword ptr [eax], eax
#define MOV_EAX_TO_PTR_EBX mov dword ptr [ebx], eax
#define MOV_EAX_TO_PTR_ECX mov dword ptr [ecx], eax
#define MOV_EAX_TO_PTR_EDX mov dword ptr [edx], eax
#define MOV_EAX_TO_PTR_EDI mov dword ptr [edi], eax
#define MOV_EAX_TO_PTR_ESI mov dword ptr [esi], eax
#define MOV_EAX_TO_PTR_EBP mov dword ptr [ebp], eax
#define MOV_EAX_TO_PTR_ESP mov dword ptr [esp], eax

#define MOV_EBX_TO_PTR_RAX mov dword ptr [rax], ebx
#define MOV_EBX_TO_PTR_RBX mov dword ptr [rbx], ebx
#define MOV_EBX_TO_PTR_RCX mov dword ptr [rcx], ebx
#define MOV_EBX_TO_PTR_RDX mov dword ptr [rdx], ebx
#define MOV_EBX_TO_PTR_RDI mov dword ptr [rdi], ebx
#define MOV_EBX_TO_PTR_RSI mov dword ptr [rsi], ebx
#define MOV_EBX_TO_PTR_RBP mov dword ptr [rbp], ebx
#define MOV_EBX_TO_PTR_RSP mov dword ptr [rsp], ebx
#define MOV_EBX_TO_PTR_R8 mov dword ptr [r8], ebx
#define MOV_EBX_TO_PTR_R9 mov dword ptr [r9], ebx
#define MOV_EBX_TO_PTR_R10 mov dword ptr [r10], ebx
#define MOV_EBX_TO_PTR_R11 mov dword ptr [r11], ebx
#define MOV_EBX_TO_PTR_R12 mov dword ptr [r12], ebx
#define MOV_EBX_TO_PTR_R13 mov dword ptr [r13], ebx
#define MOV_EBX_TO_PTR_R14 mov dword ptr [r14], ebx
#define MOV_EBX_TO_PTR_R15 mov dword ptr [r15], ebx
#define MOV_EBX_TO_PTR_EAX mov dword ptr [eax], ebx
#define MOV_EBX_TO_PTR_EBX mov dword ptr [ebx], ebx
#define MOV_EBX_TO_PTR_ECX mov dword ptr [ecx], ebx
#define MOV_EBX_TO_PTR_EDX mov dword ptr [edx], ebx
#define MOV_EBX_TO_PTR_EDI mov dword ptr [edi], ebx
#define MOV_EBX_TO_PTR_ESI mov dword ptr [esi], ebx
#define MOV_EBX_TO_PTR_EBP mov dword ptr [ebp], ebx
#define MOV_EBX_TO_PTR_ESP mov dword ptr [esp], ebx

#define MOV_ECX_TO_PTR_RAX mov dword ptr [rax], ecx
#define MOV_ECX_TO_PTR_RBX mov dword ptr [rbx], ecx
#define MOV_ECX_TO_PTR_RCX mov dword ptr [rcx], ecx
#define MOV_ECX_TO_PTR_RDX mov dword ptr [rdx], ecx
#define MOV_ECX_TO_PTR_RDI mov dword ptr [rdi], ecx
#define MOV_ECX_TO_PTR_RSI mov dword ptr [rsi], ecx
#define MOV_ECX_TO_PTR_RBP mov dword ptr [rbp], ecx
#define MOV_ECX_TO_PTR_RSP mov dword ptr [rsp], ecx
#define MOV_ECX_TO_PTR_R8 mov dword ptr [r8], ecx
#define MOV_ECX_TO_PTR_R9 mov dword ptr [r9], ecx
#define MOV_ECX_TO_PTR_R10 mov dword ptr [r10], ecx
#define MOV_ECX_TO_PTR_R11 mov dword ptr [r11], ecx
#define MOV_ECX_TO_PTR_R12 mov dword ptr [r12], ecx
#define MOV_ECX_TO_PTR_R13 mov dword ptr [r13], ecx
#define MOV_ECX_TO_PTR_R14 mov dword ptr [r14], ecx
#define MOV_ECX_TO_PTR_R15 mov dword ptr [r15], ecx
#define MOV_ECX_TO_PTR_EAX mov dword ptr [eax], ecx
#define MOV_ECX_TO_PTR_EBX mov dword ptr [ebx], ecx
#define MOV_ECX_TO_PTR_ECX mov dword ptr [ecx], ecx
#define MOV_ECX_TO_PTR_EDX mov dword ptr [edx], ecx
#define MOV_ECX_TO_PTR_EDI mov dword ptr [edi], ecx
#define MOV_ECX_TO_PTR_ESI mov dword ptr [esi], ecx
#define MOV_ECX_TO_PTR_EBP mov dword ptr [ebp], ecx
#define MOV_ECX_TO_PTR_ESP mov dword ptr [esp], ecx

#define MOV_EDX_TO_PTR_RAX mov dword ptr [rax], edx
#define MOV_EDX_TO_PTR_RBX mov dword ptr [rbx], edx
#define MOV_EDX_TO_PTR_RCX mov dword ptr [rcx], edx
#define MOV_EDX_TO_PTR_RDX mov dword ptr [rdx], edx
#define MOV_EDX_TO_PTR_RDI mov dword ptr [rdi], edx
#define MOV_EDX_TO_PTR_RSI mov dword ptr [rsi], edx
#define MOV_EDX_TO_PTR_RBP mov dword ptr [rbp], edx
#define MOV_EDX_TO_PTR_RSP mov dword ptr [rsp], edx
#define MOV_EDX_TO_PTR_R8 mov dword ptr [r8], edx
#define MOV_EDX_TO_PTR_R9 mov dword ptr [r9], edx
#define MOV_EDX_TO_PTR_R10 mov dword ptr [r10], edx
#define MOV_EDX_TO_PTR_R11 mov dword ptr [r11], edx
#define MOV_EDX_TO_PTR_R12 mov dword ptr [r12], edx
#define MOV_EDX_TO_PTR_R13 mov dword ptr [r13], edx
#define MOV_EDX_TO_PTR_R14 mov dword ptr [r14], edx
#define MOV_EDX_TO_PTR_R15 mov dword ptr [r15], edx
#define MOV_EDX_TO_PTR_EAX mov dword ptr [eax], edx
#define MOV_EDX_TO_PTR_EBX mov dword ptr [ebx], edx
#define MOV_EDX_TO_PTR_ECX mov dword ptr [ecx], edx
#define MOV_EDX_TO_PTR_EDX mov dword ptr [edx], edx
#define MOV_EDX_TO_PTR_EDI mov dword ptr [edi], edx
#define MOV_EDX_TO_PTR_ESI mov dword ptr [esi], edx
#define MOV_EDX_TO_PTR_EBP mov dword ptr [ebp], edx
#define MOV_EDX_TO_PTR_ESP mov dword ptr [esp], edx

#define MOV_EDI_TO_PTR_RAX mov dword ptr [rax], edi
#define MOV_EDI_TO_PTR_RBX mov dword ptr [rbx], edi
#define MOV_EDI_TO_PTR_RCX mov dword ptr [rcx], edi
#define MOV_EDI_TO_PTR_RDX mov dword ptr [rdx], edi
#define MOV_EDI_TO_PTR_RDI mov dword ptr [rdi], edi
#define MOV_EDI_TO_PTR_RSI mov dword ptr [rsi], edi
#define MOV_EDI_TO_PTR_RBP mov dword ptr [rbp], edi
#define MOV_EDI_TO_PTR_RSP mov dword ptr [rsp], edi
#define MOV_EDI_TO_PTR_R8 mov dword ptr [r8], edi
#define MOV_EDI_TO_PTR_R9 mov dword ptr [r9], edi
#define MOV_EDI_TO_PTR_R10 mov dword ptr [r10], edi
#define MOV_EDI_TO_PTR_R11 mov dword ptr [r11], edi
#define MOV_EDI_TO_PTR_R12 mov dword ptr [r12], edi
#define MOV_EDI_TO_PTR_R13 mov dword ptr [r13], edi
#define MOV_EDI_TO_PTR_R14 mov dword ptr [r14], edi
#define MOV_EDI_TO_PTR_R15 mov dword ptr [r15], edi
#define MOV_EDI_TO_PTR_EAX mov dword ptr [eax], edi
#define MOV_EDI_TO_PTR_EBX mov dword ptr [ebx], edi
#define MOV_EDI_TO_PTR_ECX mov dword ptr [ecx], edi
#define MOV_EDI_TO_PTR_EDX mov dword ptr [edx], edi
#define MOV_EDI_TO_PTR_EDI mov dword ptr [edi], edi
#define MOV_EDI_TO_PTR_ESI mov dword ptr [esi], edi
#define MOV_EDI_TO_PTR_EBP mov dword ptr [ebp], edi
#define MOV_EDI_TO_PTR_ESP mov dword ptr [esp], edi

#define MOV_ESI_TO_PTR_RAX mov dword ptr [rax], esi
#define MOV_ESI_TO_PTR_RBX mov dword ptr [rbx], esi
#define MOV_ESI_TO_PTR_RCX mov dword ptr [rcx], esi
#define MOV_ESI_TO_PTR_RDX mov dword ptr [rdx], esi
#define MOV_ESI_TO_PTR_RDI mov dword ptr [rdi], esi
#define MOV_ESI_TO_PTR_RSI mov dword ptr [rsi], esi
#define MOV_ESI_TO_PTR_RBP mov dword ptr [rbp], esi
#define MOV_ESI_TO_PTR_RSP mov dword ptr [rsp], esi
#define MOV_ESI_TO_PTR_R8 mov dword ptr [r8], esi
#define MOV_ESI_TO_PTR_R9 mov dword ptr [r9], esi
#define MOV_ESI_TO_PTR_R10 mov dword ptr [r10], esi
#define MOV_ESI_TO_PTR_R11 mov dword ptr [r11], esi
#define MOV_ESI_TO_PTR_R12 mov dword ptr [r12], esi
#define MOV_ESI_TO_PTR_R13 mov dword ptr [r13], esi
#define MOV_ESI_TO_PTR_R14 mov dword ptr [r14], esi
#define MOV_ESI_TO_PTR_R15 mov dword ptr [r15], esi
#define MOV_ESI_TO_PTR_EAX mov dword ptr [eax], esi
#define MOV_ESI_TO_PTR_EBX mov dword ptr [ebx], esi
#define MOV_ESI_TO_PTR_ECX mov dword ptr [ecx], esi
#define MOV_ESI_TO_PTR_EDX mov dword ptr [edx], esi
#define MOV_ESI_TO_PTR_EDI mov dword ptr [edi], esi
#define MOV_ESI_TO_PTR_ESI mov dword ptr [esi], esi
#define MOV_ESI_TO_PTR_EBP mov dword ptr [ebp], esi
#define MOV_ESI_TO_PTR_ESP mov dword ptr [esp], esi

#define MOV_EBP_TO_PTR_RAX mov dword ptr [rax], ebp
#define MOV_EBP_TO_PTR_RBX mov dword ptr [rbx], ebp
#define MOV_EBP_TO_PTR_RCX mov dword ptr [rcx], ebp
#define MOV_EBP_TO_PTR_RDX mov dword ptr [rdx], ebp
#define MOV_EBP_TO_PTR_RDI mov dword ptr [rdi], ebp
#define MOV_EBP_TO_PTR_RSI mov dword ptr [rsi], ebp
#define MOV_EBP_TO_PTR_RBP mov dword ptr [rbp], ebp
#define MOV_EBP_TO_PTR_RSP mov dword ptr [rsp], ebp
#define MOV_EBP_TO_PTR_R8 mov dword ptr [r8], ebp
#define MOV_EBP_TO_PTR_R9 mov dword ptr [r9], ebp
#define MOV_EBP_TO_PTR_R10 mov dword ptr [r10], ebp
#define MOV_EBP_TO_PTR_R11 mov dword ptr [r11], ebp
#define MOV_EBP_TO_PTR_R12 mov dword ptr [r12], ebp
#define MOV_EBP_TO_PTR_R13 mov dword ptr [r13], ebp
#define MOV_EBP_TO_PTR_R14 mov dword ptr [r14], ebp
#define MOV_EBP_TO_PTR_R15 mov dword ptr [r15], ebp
#define MOV_EBP_TO_PTR_EAX mov dword ptr [eax], ebp
#define MOV_EBP_TO_PTR_EBX mov dword ptr [ebx], ebp
#define MOV_EBP_TO_PTR_ECX mov dword ptr [ecx], ebp
#define MOV_EBP_TO_PTR_EDX mov dword ptr [edx], ebp
#define MOV_EBP_TO_PTR_EDI mov dword ptr [edi], ebp
#define MOV_EBP_TO_PTR_ESI mov dword ptr [esi], ebp
#define MOV_EBP_TO_PTR_EBP mov dword ptr [ebp], ebp
#define MOV_EBP_TO_PTR_ESP mov dword ptr [esp], ebp

#define MOV_ESP_TO_PTR_RAX mov dword ptr [rax], esp
#define MOV_ESP_TO_PTR_RBX mov dword ptr [rbx], esp
#define MOV_ESP_TO_PTR_RCX mov dword ptr [rcx], esp
#define MOV_ESP_TO_PTR_RDX mov dword ptr [rdx], esp
#define MOV_ESP_TO_PTR_RDI mov dword ptr [rdi], esp
#define MOV_ESP_TO_PTR_RSI mov dword ptr [rsi], esp
#define MOV_ESP_TO_PTR_RBP mov dword ptr [rbp], esp
#define MOV_ESP_TO_PTR_RSP mov dword ptr [rsp], esp
#define MOV_ESP_TO_PTR_R8 mov dword ptr [r8], esp
#define MOV_ESP_TO_PTR_R9 mov dword ptr [r9], esp
#define MOV_ESP_TO_PTR_R10 mov dword ptr [r10], esp
#define MOV_ESP_TO_PTR_R11 mov dword ptr [r11], esp
#define MOV_ESP_TO_PTR_R12 mov dword ptr [r12], esp
#define MOV_ESP_TO_PTR_R13 mov dword ptr [r13], esp
#define MOV_ESP_TO_PTR_R14 mov dword ptr [r14], esp
#define MOV_ESP_TO_PTR_R15 mov dword ptr [r15], esp
#define MOV_ESP_TO_PTR_EAX mov dword ptr [eax], esp
#define MOV_ESP_TO_PTR_EBX mov dword ptr [ebx], esp
#define MOV_ESP_TO_PTR_ECX mov dword ptr [ecx], esp
#define MOV_ESP_TO_PTR_EDX mov dword ptr [edx], esp
#define MOV_ESP_TO_PTR_EDI mov dword ptr [edi], esp
#define MOV_ESP_TO_PTR_ESI mov dword ptr [esi], esp
#define MOV_ESP_TO_PTR_EBP mov dword ptr [ebp], esp
#define MOV_ESP_TO_PTR_ESP mov dword ptr [esp], esp

#define MOV_R8D_TO_PTR_RAX mov dword ptr [rax], r8d
#define MOV_R8D_TO_PTR_RBX mov dword ptr [rbx], r8d
#define MOV_R8D_TO_PTR_RCX mov dword ptr [rcx], r8d
#define MOV_R8D_TO_PTR_RDX mov dword ptr [rdx], r8d
#define MOV_R8D_TO_PTR_RDI mov dword ptr [rdi], r8d
#define MOV_R8D_TO_PTR_RSI mov dword ptr [rsi], r8d
#define MOV_R8D_TO_PTR_RBP mov dword ptr [rbp], r8d
#define MOV_R8D_TO_PTR_RSP mov dword ptr [rsp], r8d
#define MOV_R8D_TO_PTR_R8 mov dword ptr [r8], r8d
#define MOV_R8D_TO_PTR_R9 mov dword ptr [r9], r8d
#define MOV_R8D_TO_PTR_R10 mov dword ptr [r10], r8d
#define MOV_R8D_TO_PTR_R11 mov dword ptr [r11], r8d
#define MOV_R8D_TO_PTR_R12 mov dword ptr [r12], r8d
#define MOV_R8D_TO_PTR_R13 mov dword ptr [r13], r8d
#define MOV_R8D_TO_PTR_R14 mov dword ptr [r14], r8d
#define MOV_R8D_TO_PTR_R15 mov dword ptr [r15], r8d
#define MOV_R8D_TO_PTR_EAX mov dword ptr [eax], r8d
#define MOV_R8D_TO_PTR_EBX mov dword ptr [ebx], r8d
#define MOV_R8D_TO_PTR_ECX mov dword ptr [ecx], r8d
#define MOV_R8D_TO_PTR_EDX mov dword ptr [edx], r8d
#define MOV_R8D_TO_PTR_EDI mov dword ptr [edi], r8d
#define MOV_R8D_TO_PTR_ESI mov dword ptr [esi], r8d
#define MOV_R8D_TO_PTR_EBP mov dword ptr [ebp], r8d
#define MOV_R8D_TO_PTR_ESP mov dword ptr [esp], r8d

#define MOV_R9D_TO_PTR_RAX mov dword ptr [rax], r9d
#define MOV_R9D_TO_PTR_RBX mov dword ptr [rbx], r9d
#define MOV_R9D_TO_PTR_RCX mov dword ptr [rcx], r9d
#define MOV_R9D_TO_PTR_RDX mov dword ptr [rdx], r9d
#define MOV_R9D_TO_PTR_RDI mov dword ptr [rdi], r9d
#define MOV_R9D_TO_PTR_RSI mov dword ptr [rsi], r9d
#define MOV_R9D_TO_PTR_RBP mov dword ptr [rbp], r9d
#define MOV_R9D_TO_PTR_RSP mov dword ptr [rsp], r9d
#define MOV_R9D_TO_PTR_R8 mov dword ptr [r8], r9d
#define MOV_R9D_TO_PTR_R9 mov dword ptr [r9], r9d
#define MOV_R9D_TO_PTR_R10 mov dword ptr [r10], r9d
#define MOV_R9D_TO_PTR_R11 mov dword ptr [r11], r9d
#define MOV_R9D_TO_PTR_R12 mov dword ptr [r12], r9d
#define MOV_R9D_TO_PTR_R13 mov dword ptr [r13], r9d
#define MOV_R9D_TO_PTR_R14 mov dword ptr [r14], r9d
#define MOV_R9D_TO_PTR_R15 mov dword ptr [r15], r9d
#define MOV_R9D_TO_PTR_EAX mov dword ptr [eax], r9d
#define MOV_R9D_TO_PTR_EBX mov dword ptr [ebx], r9d
#define MOV_R9D_TO_PTR_ECX mov dword ptr [ecx], r9d
#define MOV_R9D_TO_PTR_EDX mov dword ptr [edx], r9d
#define MOV_R9D_TO_PTR_EDI mov dword ptr [edi], r9d
#define MOV_R9D_TO_PTR_ESI mov dword ptr [esi], r9d
#define MOV_R9D_TO_PTR_EBP mov dword ptr [ebp], r9d
#define MOV_R9D_TO_PTR_ESP mov dword ptr [esp], r9d

#define MOV_R10D_TO_PTR_RAX mov dword ptr [rax], r10d
#define MOV_R10D_TO_PTR_RBX mov dword ptr [rbx], r10d
#define MOV_R10D_TO_PTR_RCX mov dword ptr [rcx], r10d
#define MOV_R10D_TO_PTR_RDX mov dword ptr [rdx], r10d
#define MOV_R10D_TO_PTR_RDI mov dword ptr [rdi], r10d
#define MOV_R10D_TO_PTR_RSI mov dword ptr [rsi], r10d
#define MOV_R10D_TO_PTR_RBP mov dword ptr [rbp], r10d
#define MOV_R10D_TO_PTR_RSP mov dword ptr [rsp], r10d
#define MOV_R10D_TO_PTR_R8 mov dword ptr [r8], r10d
#define MOV_R10D_TO_PTR_R9 mov dword ptr [r9], r10d
#define MOV_R10D_TO_PTR_R10 mov dword ptr [r10], r10d
#define MOV_R10D_TO_PTR_R11 mov dword ptr [r11], r10d
#define MOV_R10D_TO_PTR_R12 mov dword ptr [r12], r10d
#define MOV_R10D_TO_PTR_R13 mov dword ptr [r13], r10d
#define MOV_R10D_TO_PTR_R14 mov dword ptr [r14], r10d
#define MOV_R10D_TO_PTR_R15 mov dword ptr [r15], r10d
#define MOV_R10D_TO_PTR_EAX mov dword ptr [eax], r10d
#define MOV_R10D_TO_PTR_EBX mov dword ptr [ebx], r10d
#define MOV_R10D_TO_PTR_ECX mov dword ptr [ecx], r10d
#define MOV_R10D_TO_PTR_EDX mov dword ptr [edx], r10d
#define MOV_R10D_TO_PTR_EDI mov dword ptr [edi], r10d
#define MOV_R10D_TO_PTR_ESI mov dword ptr [esi], r10d
#define MOV_R10D_TO_PTR_EBP mov dword ptr [ebp], r10d
#define MOV_R10D_TO_PTR_ESP mov dword ptr [esp], r10d

#define MOV_R11D_TO_PTR_RAX mov dword ptr [rax], r11d
#define MOV_R11D_TO_PTR_RBX mov dword ptr [rbx], r11d
#define MOV_R11D_TO_PTR_RCX mov dword ptr [rcx], r11d
#define MOV_R11D_TO_PTR_RDX mov dword ptr [rdx], r11d
#define MOV_R11D_TO_PTR_RDI mov dword ptr [rdi], r11d
#define MOV_R11D_TO_PTR_RSI mov dword ptr [rsi], r11d
#define MOV_R11D_TO_PTR_RBP mov dword ptr [rbp], r11d
#define MOV_R11D_TO_PTR_RSP mov dword ptr [rsp], r11d
#define MOV_R11D_TO_PTR_R8 mov dword ptr [r8], r11d
#define MOV_R11D_TO_PTR_R9 mov dword ptr [r9], r11d
#define MOV_R11D_TO_PTR_R10 mov dword ptr [r10], r11d
#define MOV_R11D_TO_PTR_R11 mov dword ptr [r11], r11d
#define MOV_R11D_TO_PTR_R12 mov dword ptr [r12], r11d
#define MOV_R11D_TO_PTR_R13 mov dword ptr [r13], r11d
#define MOV_R11D_TO_PTR_R14 mov dword ptr [r14], r11d
#define MOV_R11D_TO_PTR_R15 mov dword ptr [r15], r11d
#define MOV_R11D_TO_PTR_EAX mov dword ptr [eax], r11d
#define MOV_R11D_TO_PTR_EBX mov dword ptr [ebx], r11d
#define MOV_R11D_TO_PTR_ECX mov dword ptr [ecx], r11d
#define MOV_R11D_TO_PTR_EDX mov dword ptr [edx], r11d
#define MOV_R11D_TO_PTR_EDI mov dword ptr [edi], r11d
#define MOV_R11D_TO_PTR_ESI mov dword ptr [esi], r11d
#define MOV_R11D_TO_PTR_EBP mov dword ptr [ebp], r11d
#define MOV_R11D_TO_PTR_ESP mov dword ptr [esp], r11d

#define MOV_R12D_TO_PTR_RAX mov dword ptr [rax], r12d
#define MOV_R12D_TO_PTR_RBX mov dword ptr [rbx], r12d
#define MOV_R12D_TO_PTR_RCX mov dword ptr [rcx], r12d
#define MOV_R12D_TO_PTR_RDX mov dword ptr [rdx], r12d
#define MOV_R12D_TO_PTR_RDI mov dword ptr [rdi], r12d
#define MOV_R12D_TO_PTR_RSI mov dword ptr [rsi], r12d
#define MOV_R12D_TO_PTR_RBP mov dword ptr [rbp], r12d
#define MOV_R12D_TO_PTR_RSP mov dword ptr [rsp], r12d
#define MOV_R12D_TO_PTR_R8 mov dword ptr [r8], r12d
#define MOV_R12D_TO_PTR_R9 mov dword ptr [r9], r12d
#define MOV_R12D_TO_PTR_R10 mov dword ptr [r10], r12d
#define MOV_R12D_TO_PTR_R11 mov dword ptr [r11], r12d
#define MOV_R12D_TO_PTR_R12 mov dword ptr [r12], r12d
#define MOV_R12D_TO_PTR_R13 mov dword ptr [r13], r12d
#define MOV_R12D_TO_PTR_R14 mov dword ptr [r14], r12d
#define MOV_R12D_TO_PTR_R15 mov dword ptr [r15], r12d
#define MOV_R12D_TO_PTR_EAX mov dword ptr [eax], r12d
#define MOV_R12D_TO_PTR_EBX mov dword ptr [ebx], r12d
#define MOV_R12D_TO_PTR_ECX mov dword ptr [ecx], r12d
#define MOV_R12D_TO_PTR_EDX mov dword ptr [edx], r12d
#define MOV_R12D_TO_PTR_EDI mov dword ptr [edi], r12d
#define MOV_R12D_TO_PTR_ESI mov dword ptr [esi], r12d
#define MOV_R12D_TO_PTR_EBP mov dword ptr [ebp], r12d
#define MOV_R12D_TO_PTR_ESP mov dword ptr [esp], r12d

#define MOV_R13D_TO_PTR_RAX mov dword ptr [rax], r13d
#define MOV_R13D_TO_PTR_RBX mov dword ptr [rbx], r13d
#define MOV_R13D_TO_PTR_RCX mov dword ptr [rcx], r13d
#define MOV_R13D_TO_PTR_RDX mov dword ptr [rdx], r13d
#define MOV_R13D_TO_PTR_RDI mov dword ptr [rdi], r13d
#define MOV_R13D_TO_PTR_RSI mov dword ptr [rsi], r13d
#define MOV_R13D_TO_PTR_RBP mov dword ptr [rbp], r13d
#define MOV_R13D_TO_PTR_RSP mov dword ptr [rsp], r13d
#define MOV_R13D_TO_PTR_R8 mov dword ptr [r8], r13d
#define MOV_R13D_TO_PTR_R9 mov dword ptr [r9], r13d
#define MOV_R13D_TO_PTR_R10 mov dword ptr [r10], r13d
#define MOV_R13D_TO_PTR_R11 mov dword ptr [r11], r13d
#define MOV_R13D_TO_PTR_R12 mov dword ptr [r12], r13d
#define MOV_R13D_TO_PTR_R13 mov dword ptr [r13], r13d
#define MOV_R13D_TO_PTR_R14 mov dword ptr [r14], r13d
#define MOV_R13D_TO_PTR_R15 mov dword ptr [r15], r13d
#define MOV_R13D_TO_PTR_EAX mov dword ptr [eax], r13d
#define MOV_R13D_TO_PTR_EBX mov dword ptr [ebx], r13d
#define MOV_R13D_TO_PTR_ECX mov dword ptr [ecx], r13d
#define MOV_R13D_TO_PTR_EDX mov dword ptr [edx], r13d
#define MOV_R13D_TO_PTR_EDI mov dword ptr [edi], r13d
#define MOV_R13D_TO_PTR_ESI mov dword ptr [esi], r13d
#define MOV_R13D_TO_PTR_EBP mov dword ptr [ebp], r13d
#define MOV_R13D_TO_PTR_ESP mov dword ptr [esp], r13d

#define MOV_R14D_TO_PTR_RAX mov dword ptr [rax], r14d
#define MOV_R14D_TO_PTR_RBX mov dword ptr [rbx], r14d
#define MOV_R14D_TO_PTR_RCX mov dword ptr [rcx], r14d
#define MOV_R14D_TO_PTR_RDX mov dword ptr [rdx], r14d
#define MOV_R14D_TO_PTR_RDI mov dword ptr [rdi], r14d
#define MOV_R14D_TO_PTR_RSI mov dword ptr [rsi], r14d
#define MOV_R14D_TO_PTR_RBP mov dword ptr [rbp], r14d
#define MOV_R14D_TO_PTR_RSP mov dword ptr [rsp], r14d
#define MOV_R14D_TO_PTR_R8 mov dword ptr [r8], r14d
#define MOV_R14D_TO_PTR_R9 mov dword ptr [r9], r14d
#define MOV_R14D_TO_PTR_R10 mov dword ptr [r10], r14d
#define MOV_R14D_TO_PTR_R11 mov dword ptr [r11], r14d
#define MOV_R14D_TO_PTR_R12 mov dword ptr [r12], r14d
#define MOV_R14D_TO_PTR_R13 mov dword ptr [r13], r14d
#define MOV_R14D_TO_PTR_R14 mov dword ptr [r14], r14d
#define MOV_R14D_TO_PTR_R15 mov dword ptr [r15], r14d
#define MOV_R14D_TO_PTR_EAX mov dword ptr [eax], r14d
#define MOV_R14D_TO_PTR_EBX mov dword ptr [ebx], r14d
#define MOV_R14D_TO_PTR_ECX mov dword ptr [ecx], r14d
#define MOV_R14D_TO_PTR_EDX mov dword ptr [edx], r14d
#define MOV_R14D_TO_PTR_EDI mov dword ptr [edi], r14d
#define MOV_R14D_TO_PTR_ESI mov dword ptr [esi], r14d
#define MOV_R14D_TO_PTR_EBP mov dword ptr [ebp], r14d
#define MOV_R14D_TO_PTR_ESP mov dword ptr [esp], r14d

#define MOV_R15D_TO_PTR_RAX mov dword ptr [rax], r15d
#define MOV_R15D_TO_PTR_RBX mov dword ptr [rbx], r15d
#define MOV_R15D_TO_PTR_RCX mov dword ptr [rcx], r15d
#define MOV_R15D_TO_PTR_RDX mov dword ptr [rdx], r15d
#define MOV_R15D_TO_PTR_RDI mov dword ptr [rdi], r15d
#define MOV_R15D_TO_PTR_RSI mov dword ptr [rsi], r15d
#define MOV_R15D_TO_PTR_RBP mov dword ptr [rbp], r15d
#define MOV_R15D_TO_PTR_RSP mov dword ptr [rsp], r15d
#define MOV_R15D_TO_PTR_R8 mov dword ptr [r8], r15d
#define MOV_R15D_TO_PTR_R9 mov dword ptr [r9], r15d
#define MOV_R15D_TO_PTR_R10 mov dword ptr [r10], r15d
#define MOV_R15D_TO_PTR_R11 mov dword ptr [r11], r15d
#define MOV_R15D_TO_PTR_R12 mov dword ptr [r12], r15d
#define MOV_R15D_TO_PTR_R13 mov dword ptr [r13], r15d
#define MOV_R15D_TO_PTR_R14 mov dword ptr [r14], r15d
#define MOV_R15D_TO_PTR_R15 mov dword ptr [r15], r15d
#define MOV_R15D_TO_PTR_EAX mov dword ptr [eax], r15d
#define MOV_R15D_TO_PTR_EBX mov dword ptr [ebx], r15d
#define MOV_R15D_TO_PTR_ECX mov dword ptr [ecx], r15d
#define MOV_R15D_TO_PTR_EDX mov dword ptr [edx], r15d
#define MOV_R15D_TO_PTR_EDI mov dword ptr [edi], r15d
#define MOV_R15D_TO_PTR_ESI mov dword ptr [esi], r15d
#define MOV_R15D_TO_PTR_EBP mov dword ptr [ebp], r15d
#define MOV_R15D_TO_PTR_ESP mov dword ptr [esp], r15d

#define MOV_EAX_FROM_PTR_RAX_(VALUE) mov eax, dword ptr [rax + VALUE]
#define MOV_EAX_FROM_PTR_RBX_(VALUE) mov eax, dword ptr [rbx + VALUE]
#define MOV_EAX_FROM_PTR_RCX_(VALUE) mov eax, dword ptr [rcx + VALUE]
#define MOV_EAX_FROM_PTR_RDX_(VALUE) mov eax, dword ptr [rdx + VALUE]
#define MOV_EAX_FROM_PTR_RDI_(VALUE) mov eax, dword ptr [rdi + VALUE]
#define MOV_EAX_FROM_PTR_RSI_(VALUE) mov eax, dword ptr [rsi + VALUE]
#define MOV_EAX_FROM_PTR_RBP_(VALUE) mov eax, dword ptr [rbp + VALUE]
#define MOV_EAX_FROM_PTR_RSP_(VALUE) mov eax, dword ptr [rsp + VALUE]
#define MOV_EAX_FROM_PTR_R8_(VALUE) mov eax, dword ptr [r8 + VALUE]
#define MOV_EAX_FROM_PTR_R9_(VALUE) mov eax, dword ptr [r9 + VALUE]
#define MOV_EAX_FROM_PTR_R10_(VALUE) mov eax, dword ptr [r10 + VALUE]
#define MOV_EAX_FROM_PTR_R11_(VALUE) mov eax, dword ptr [r11 + VALUE]
#define MOV_EAX_FROM_PTR_R12_(VALUE) mov eax, dword ptr [r12 + VALUE]
#define MOV_EAX_FROM_PTR_R13_(VALUE) mov eax, dword ptr [r13 + VALUE]
#define MOV_EAX_FROM_PTR_R14_(VALUE) mov eax, dword ptr [r14 + VALUE]
#define MOV_EAX_FROM_PTR_R15_(VALUE) mov eax, dword ptr [r15 + VALUE]
#define MOV_EAX_FROM_PTR_EAX_(VALUE) mov eax, dword ptr [eax + VALUE]
#define MOV_EAX_FROM_PTR_EBX_(VALUE) mov eax, dword ptr [ebx + VALUE]
#define MOV_EAX_FROM_PTR_ECX_(VALUE) mov eax, dword ptr [ecx + VALUE]
#define MOV_EAX_FROM_PTR_EDX_(VALUE) mov eax, dword ptr [edx + VALUE]
#define MOV_EAX_FROM_PTR_EDI_(VALUE) mov eax, dword ptr [edi + VALUE]
#define MOV_EAX_FROM_PTR_ESI_(VALUE) mov eax, dword ptr [esi + VALUE]
#define MOV_EAX_FROM_PTR_EBP_(VALUE) mov eax, dword ptr [ebp + VALUE]
#define MOV_EAX_FROM_PTR_ESP_(VALUE) mov eax, dword ptr [esp + VALUE]

#define MOV_EBX_FROM_PTR_RAX_(VALUE) mov ebx, dword ptr [rax + VALUE]
#define MOV_EBX_FROM_PTR_RBX_(VALUE) mov ebx, dword ptr [rbx + VALUE]
#define MOV_EBX_FROM_PTR_RCX_(VALUE) mov ebx, dword ptr [rcx + VALUE]
#define MOV_EBX_FROM_PTR_RDX_(VALUE) mov ebx, dword ptr [rdx + VALUE]
#define MOV_EBX_FROM_PTR_RDI_(VALUE) mov ebx, dword ptr [rdi + VALUE]
#define MOV_EBX_FROM_PTR_RSI_(VALUE) mov ebx, dword ptr [rsi + VALUE]
#define MOV_EBX_FROM_PTR_RBP_(VALUE) mov ebx, dword ptr [rbp + VALUE]
#define MOV_EBX_FROM_PTR_RSP_(VALUE) mov ebx, dword ptr [rsp + VALUE]
#define MOV_EBX_FROM_PTR_R8_(VALUE) mov ebx, dword ptr [r8 + VALUE]
#define MOV_EBX_FROM_PTR_R9_(VALUE) mov ebx, dword ptr [r9 + VALUE]
#define MOV_EBX_FROM_PTR_R10_(VALUE) mov ebx, dword ptr [r10 + VALUE]
#define MOV_EBX_FROM_PTR_R11_(VALUE) mov ebx, dword ptr [r11 + VALUE]
#define MOV_EBX_FROM_PTR_R12_(VALUE) mov ebx, dword ptr [r12 + VALUE]
#define MOV_EBX_FROM_PTR_R13_(VALUE) mov ebx, dword ptr [r13 + VALUE]
#define MOV_EBX_FROM_PTR_R14_(VALUE) mov ebx, dword ptr [r14 + VALUE]
#define MOV_EBX_FROM_PTR_R15_(VALUE) mov ebx, dword ptr [r15 + VALUE]
#define MOV_EBX_FROM_PTR_EAX_(VALUE) mov ebx, dword ptr [eax + VALUE]
#define MOV_EBX_FROM_PTR_EBX_(VALUE) mov ebx, dword ptr [ebx + VALUE]
#define MOV_EBX_FROM_PTR_ECX_(VALUE) mov ebx, dword ptr [ecx + VALUE]
#define MOV_EBX_FROM_PTR_EDX_(VALUE) mov ebx, dword ptr [edx + VALUE]
#define MOV_EBX_FROM_PTR_EDI_(VALUE) mov ebx, dword ptr [edi + VALUE]
#define MOV_EBX_FROM_PTR_ESI_(VALUE) mov ebx, dword ptr [esi + VALUE]
#define MOV_EBX_FROM_PTR_EBP_(VALUE) mov ebx, dword ptr [ebp + VALUE]
#define MOV_EBX_FROM_PTR_ESP_(VALUE) mov ebx, dword ptr [esp + VALUE]

#define MOV_ECX_FROM_PTR_RAX_(VALUE) mov ecx, dword ptr [rax + VALUE]
#define MOV_ECX_FROM_PTR_RBX_(VALUE) mov ecx, dword ptr [rbx + VALUE]
#define MOV_ECX_FROM_PTR_RCX_(VALUE) mov ecx, dword ptr [rcx + VALUE]
#define MOV_ECX_FROM_PTR_RDX_(VALUE) mov ecx, dword ptr [rdx + VALUE]
#define MOV_ECX_FROM_PTR_RDI_(VALUE) mov ecx, dword ptr [rdi + VALUE]
#define MOV_ECX_FROM_PTR_RSI_(VALUE) mov ecx, dword ptr [rsi + VALUE]
#define MOV_ECX_FROM_PTR_RBP_(VALUE) mov ecx, dword ptr [rbp + VALUE]
#define MOV_ECX_FROM_PTR_RSP_(VALUE) mov ecx, dword ptr [rsp + VALUE]
#define MOV_ECX_FROM_PTR_R8_(VALUE) mov ecx, dword ptr [r8 + VALUE]
#define MOV_ECX_FROM_PTR_R9_(VALUE) mov ecx, dword ptr [r9 + VALUE]
#define MOV_ECX_FROM_PTR_R10_(VALUE) mov ecx, dword ptr [r10 + VALUE]
#define MOV_ECX_FROM_PTR_R11_(VALUE) mov ecx, dword ptr [r11 + VALUE]
#define MOV_ECX_FROM_PTR_R12_(VALUE) mov ecx, dword ptr [r12 + VALUE]
#define MOV_ECX_FROM_PTR_R13_(VALUE) mov ecx, dword ptr [r13 + VALUE]
#define MOV_ECX_FROM_PTR_R14_(VALUE) mov ecx, dword ptr [r14 + VALUE]
#define MOV_ECX_FROM_PTR_R15_(VALUE) mov ecx, dword ptr [r15 + VALUE]
#define MOV_ECX_FROM_PTR_EAX_(VALUE) mov ecx, dword ptr [eax + VALUE]
#define MOV_ECX_FROM_PTR_EBX_(VALUE) mov ecx, dword ptr [ebx + VALUE]
#define MOV_ECX_FROM_PTR_ECX_(VALUE) mov ecx, dword ptr [ecx + VALUE]
#define MOV_ECX_FROM_PTR_EDX_(VALUE) mov ecx, dword ptr [edx + VALUE]
#define MOV_ECX_FROM_PTR_EDI_(VALUE) mov ecx, dword ptr [edi + VALUE]
#define MOV_ECX_FROM_PTR_ESI_(VALUE) mov ecx, dword ptr [esi + VALUE]
#define MOV_ECX_FROM_PTR_EBP_(VALUE) mov ecx, dword ptr [ebp + VALUE]
#define MOV_ECX_FROM_PTR_ESP_(VALUE) mov ecx, dword ptr [esp + VALUE]

#define MOV_EDX_FROM_PTR_RAX_(VALUE) mov edx, dword ptr [rax + VALUE]
#define MOV_EDX_FROM_PTR_RBX_(VALUE) mov edx, dword ptr [rbx + VALUE]
#define MOV_EDX_FROM_PTR_RCX_(VALUE) mov edx, dword ptr [rcx + VALUE]
#define MOV_EDX_FROM_PTR_RDX_(VALUE) mov edx, dword ptr [rdx + VALUE]
#define MOV_EDX_FROM_PTR_RDI_(VALUE) mov edx, dword ptr [rdi + VALUE]
#define MOV_EDX_FROM_PTR_RSI_(VALUE) mov edx, dword ptr [rsi + VALUE]
#define MOV_EDX_FROM_PTR_RBP_(VALUE) mov edx, dword ptr [rbp + VALUE]
#define MOV_EDX_FROM_PTR_RSP_(VALUE) mov edx, dword ptr [rsp + VALUE]
#define MOV_EDX_FROM_PTR_R8_(VALUE) mov edx, dword ptr [r8 + VALUE]
#define MOV_EDX_FROM_PTR_R9_(VALUE) mov edx, dword ptr [r9 + VALUE]
#define MOV_EDX_FROM_PTR_R10_(VALUE) mov edx, dword ptr [r10 + VALUE]
#define MOV_EDX_FROM_PTR_R11_(VALUE) mov edx, dword ptr [r11 + VALUE]
#define MOV_EDX_FROM_PTR_R12_(VALUE) mov edx, dword ptr [r12 + VALUE]
#define MOV_EDX_FROM_PTR_R13_(VALUE) mov edx, dword ptr [r13 + VALUE]
#define MOV_EDX_FROM_PTR_R14_(VALUE) mov edx, dword ptr [r14 + VALUE]
#define MOV_EDX_FROM_PTR_R15_(VALUE) mov edx, dword ptr [r15 + VALUE]
#define MOV_EDX_FROM_PTR_EAX_(VALUE) mov edx, dword ptr [eax + VALUE]
#define MOV_EDX_FROM_PTR_EBX_(VALUE) mov edx, dword ptr [ebx + VALUE]
#define MOV_EDX_FROM_PTR_ECX_(VALUE) mov edx, dword ptr [ecx + VALUE]
#define MOV_EDX_FROM_PTR_EDX_(VALUE) mov edx, dword ptr [edx + VALUE]
#define MOV_EDX_FROM_PTR_EDI_(VALUE) mov edx, dword ptr [edi + VALUE]
#define MOV_EDX_FROM_PTR_ESI_(VALUE) mov edx, dword ptr [esi + VALUE]
#define MOV_EDX_FROM_PTR_EBP_(VALUE) mov edx, dword ptr [ebp + VALUE]
#define MOV_EDX_FROM_PTR_ESP_(VALUE) mov edx, dword ptr [esp + VALUE]

#define MOV_EDI_FROM_PTR_RAX_(VALUE) mov edi, dword ptr [rax + VALUE]
#define MOV_EDI_FROM_PTR_RBX_(VALUE) mov edi, dword ptr [rbx + VALUE]
#define MOV_EDI_FROM_PTR_RCX_(VALUE) mov edi, dword ptr [rcx + VALUE]
#define MOV_EDI_FROM_PTR_RDX_(VALUE) mov edi, dword ptr [rdx + VALUE]
#define MOV_EDI_FROM_PTR_RDI_(VALUE) mov edi, dword ptr [rdi + VALUE]
#define MOV_EDI_FROM_PTR_RSI_(VALUE) mov edi, dword ptr [rsi + VALUE]
#define MOV_EDI_FROM_PTR_RBP_(VALUE) mov edi, dword ptr [rbp + VALUE]
#define MOV_EDI_FROM_PTR_RSP_(VALUE) mov edi, dword ptr [rsp + VALUE]
#define MOV_EDI_FROM_PTR_R8_(VALUE) mov edi, dword ptr [r8 + VALUE]
#define MOV_EDI_FROM_PTR_R9_(VALUE) mov edi, dword ptr [r9 + VALUE]
#define MOV_EDI_FROM_PTR_R10_(VALUE) mov edi, dword ptr [r10 + VALUE]
#define MOV_EDI_FROM_PTR_R11_(VALUE) mov edi, dword ptr [r11 + VALUE]
#define MOV_EDI_FROM_PTR_R12_(VALUE) mov edi, dword ptr [r12 + VALUE]
#define MOV_EDI_FROM_PTR_R13_(VALUE) mov edi, dword ptr [r13 + VALUE]
#define MOV_EDI_FROM_PTR_R14_(VALUE) mov edi, dword ptr [r14 + VALUE]
#define MOV_EDI_FROM_PTR_R15_(VALUE) mov edi, dword ptr [r15 + VALUE]
#define MOV_EDI_FROM_PTR_EAX_(VALUE) mov edi, dword ptr [eax + VALUE]
#define MOV_EDI_FROM_PTR_EBX_(VALUE) mov edi, dword ptr [ebx + VALUE]
#define MOV_EDI_FROM_PTR_ECX_(VALUE) mov edi, dword ptr [ecx + VALUE]
#define MOV_EDI_FROM_PTR_EDX_(VALUE) mov edi, dword ptr [edx + VALUE]
#define MOV_EDI_FROM_PTR_EDI_(VALUE) mov edi, dword ptr [edi + VALUE]
#define MOV_EDI_FROM_PTR_ESI_(VALUE) mov edi, dword ptr [esi + VALUE]
#define MOV_EDI_FROM_PTR_EBP_(VALUE) mov edi, dword ptr [ebp + VALUE]
#define MOV_EDI_FROM_PTR_ESP_(VALUE) mov edi, dword ptr [esp + VALUE]

#define MOV_ESI_FROM_PTR_RAX_(VALUE) mov esi, dword ptr [rax + VALUE]
#define MOV_ESI_FROM_PTR_RBX_(VALUE) mov esi, dword ptr [rbx + VALUE]
#define MOV_ESI_FROM_PTR_RCX_(VALUE) mov esi, dword ptr [rcx + VALUE]
#define MOV_ESI_FROM_PTR_RDX_(VALUE) mov esi, dword ptr [rdx + VALUE]
#define MOV_ESI_FROM_PTR_RDI_(VALUE) mov esi, dword ptr [rdi + VALUE]
#define MOV_ESI_FROM_PTR_RSI_(VALUE) mov esi, dword ptr [rsi + VALUE]
#define MOV_ESI_FROM_PTR_RBP_(VALUE) mov esi, dword ptr [rbp + VALUE]
#define MOV_ESI_FROM_PTR_RSP_(VALUE) mov esi, dword ptr [rsp + VALUE]
#define MOV_ESI_FROM_PTR_R8_(VALUE) mov esi, dword ptr [r8 + VALUE]
#define MOV_ESI_FROM_PTR_R9_(VALUE) mov esi, dword ptr [r9 + VALUE]
#define MOV_ESI_FROM_PTR_R10_(VALUE) mov esi, dword ptr [r10 + VALUE]
#define MOV_ESI_FROM_PTR_R11_(VALUE) mov esi, dword ptr [r11 + VALUE]
#define MOV_ESI_FROM_PTR_R12_(VALUE) mov esi, dword ptr [r12 + VALUE]
#define MOV_ESI_FROM_PTR_R13_(VALUE) mov esi, dword ptr [r13 + VALUE]
#define MOV_ESI_FROM_PTR_R14_(VALUE) mov esi, dword ptr [r14 + VALUE]
#define MOV_ESI_FROM_PTR_R15_(VALUE) mov esi, dword ptr [r15 + VALUE]
#define MOV_ESI_FROM_PTR_EAX_(VALUE) mov esi, dword ptr [eax + VALUE]
#define MOV_ESI_FROM_PTR_EBX_(VALUE) mov esi, dword ptr [ebx + VALUE]
#define MOV_ESI_FROM_PTR_ECX_(VALUE) mov esi, dword ptr [ecx + VALUE]
#define MOV_ESI_FROM_PTR_EDX_(VALUE) mov esi, dword ptr [edx + VALUE]
#define MOV_ESI_FROM_PTR_EDI_(VALUE) mov esi, dword ptr [edi + VALUE]
#define MOV_ESI_FROM_PTR_ESI_(VALUE) mov esi, dword ptr [esi + VALUE]
#define MOV_ESI_FROM_PTR_EBP_(VALUE) mov esi, dword ptr [ebp + VALUE]
#define MOV_ESI_FROM_PTR_ESP_(VALUE) mov esi, dword ptr [esp + VALUE]

#define MOV_EBP_FROM_PTR_RAX_(VALUE) mov ebp, dword ptr [rax + VALUE]
#define MOV_EBP_FROM_PTR_RBX_(VALUE) mov ebp, dword ptr [rbx + VALUE]
#define MOV_EBP_FROM_PTR_RCX_(VALUE) mov ebp, dword ptr [rcx + VALUE]
#define MOV_EBP_FROM_PTR_RDX_(VALUE) mov ebp, dword ptr [rdx + VALUE]
#define MOV_EBP_FROM_PTR_RDI_(VALUE) mov ebp, dword ptr [rdi + VALUE]
#define MOV_EBP_FROM_PTR_RSI_(VALUE) mov ebp, dword ptr [rsi + VALUE]
#define MOV_EBP_FROM_PTR_RBP_(VALUE) mov ebp, dword ptr [rbp + VALUE]
#define MOV_EBP_FROM_PTR_RSP_(VALUE) mov ebp, dword ptr [rsp + VALUE]
#define MOV_EBP_FROM_PTR_R8_(VALUE) mov ebp, dword ptr [r8 + VALUE]
#define MOV_EBP_FROM_PTR_R9_(VALUE) mov ebp, dword ptr [r9 + VALUE]
#define MOV_EBP_FROM_PTR_R10_(VALUE) mov ebp, dword ptr [r10 + VALUE]
#define MOV_EBP_FROM_PTR_R11_(VALUE) mov ebp, dword ptr [r11 + VALUE]
#define MOV_EBP_FROM_PTR_R12_(VALUE) mov ebp, dword ptr [r12 + VALUE]
#define MOV_EBP_FROM_PTR_R13_(VALUE) mov ebp, dword ptr [r13 + VALUE]
#define MOV_EBP_FROM_PTR_R14_(VALUE) mov ebp, dword ptr [r14 + VALUE]
#define MOV_EBP_FROM_PTR_R15_(VALUE) mov ebp, dword ptr [r15 + VALUE]
#define MOV_EBP_FROM_PTR_EAX_(VALUE) mov ebp, dword ptr [eax + VALUE]
#define MOV_EBP_FROM_PTR_EBX_(VALUE) mov ebp, dword ptr [ebx + VALUE]
#define MOV_EBP_FROM_PTR_ECX_(VALUE) mov ebp, dword ptr [ecx + VALUE]
#define MOV_EBP_FROM_PTR_EDX_(VALUE) mov ebp, dword ptr [edx + VALUE]
#define MOV_EBP_FROM_PTR_EDI_(VALUE) mov ebp, dword ptr [edi + VALUE]
#define MOV_EBP_FROM_PTR_ESI_(VALUE) mov ebp, dword ptr [esi + VALUE]
#define MOV_EBP_FROM_PTR_EBP_(VALUE) mov ebp, dword ptr [ebp + VALUE]
#define MOV_EBP_FROM_PTR_ESP_(VALUE) mov ebp, dword ptr [esp + VALUE]

#define MOV_ESP_FROM_PTR_RAX_(VALUE) mov esp, dword ptr [rax + VALUE]
#define MOV_ESP_FROM_PTR_RBX_(VALUE) mov esp, dword ptr [rbx + VALUE]
#define MOV_ESP_FROM_PTR_RCX_(VALUE) mov esp, dword ptr [rcx + VALUE]
#define MOV_ESP_FROM_PTR_RDX_(VALUE) mov esp, dword ptr [rdx + VALUE]
#define MOV_ESP_FROM_PTR_RDI_(VALUE) mov esp, dword ptr [rdi + VALUE]
#define MOV_ESP_FROM_PTR_RSI_(VALUE) mov esp, dword ptr [rsi + VALUE]
#define MOV_ESP_FROM_PTR_RBP_(VALUE) mov esp, dword ptr [rbp + VALUE]
#define MOV_ESP_FROM_PTR_RSP_(VALUE) mov esp, dword ptr [rsp + VALUE]
#define MOV_ESP_FROM_PTR_R8_(VALUE) mov esp, dword ptr [r8 + VALUE]
#define MOV_ESP_FROM_PTR_R9_(VALUE) mov esp, dword ptr [r9 + VALUE]
#define MOV_ESP_FROM_PTR_R10_(VALUE) mov esp, dword ptr [r10 + VALUE]
#define MOV_ESP_FROM_PTR_R11_(VALUE) mov esp, dword ptr [r11 + VALUE]
#define MOV_ESP_FROM_PTR_R12_(VALUE) mov esp, dword ptr [r12 + VALUE]
#define MOV_ESP_FROM_PTR_R13_(VALUE) mov esp, dword ptr [r13 + VALUE]
#define MOV_ESP_FROM_PTR_R14_(VALUE) mov esp, dword ptr [r14 + VALUE]
#define MOV_ESP_FROM_PTR_R15_(VALUE) mov esp, dword ptr [r15 + VALUE]
#define MOV_ESP_FROM_PTR_EAX_(VALUE) mov esp, dword ptr [eax + VALUE]
#define MOV_ESP_FROM_PTR_EBX_(VALUE) mov esp, dword ptr [ebx + VALUE]
#define MOV_ESP_FROM_PTR_ECX_(VALUE) mov esp, dword ptr [ecx + VALUE]
#define MOV_ESP_FROM_PTR_EDX_(VALUE) mov esp, dword ptr [edx + VALUE]
#define MOV_ESP_FROM_PTR_EDI_(VALUE) mov esp, dword ptr [edi + VALUE]
#define MOV_ESP_FROM_PTR_ESI_(VALUE) mov esp, dword ptr [esi + VALUE]
#define MOV_ESP_FROM_PTR_EBP_(VALUE) mov esp, dword ptr [ebp + VALUE]
#define MOV_ESP_FROM_PTR_ESP_(VALUE) mov esp, dword ptr [esp + VALUE]

#define MOV_R8D_FROM_PTR_RAX_(VALUE) mov r8d, dword ptr [rax + VALUE]
#define MOV_R8D_FROM_PTR_RBX_(VALUE) mov r8d, dword ptr [rbx + VALUE]
#define MOV_R8D_FROM_PTR_RCX_(VALUE) mov r8d, dword ptr [rcx + VALUE]
#define MOV_R8D_FROM_PTR_RDX_(VALUE) mov r8d, dword ptr [rdx + VALUE]
#define MOV_R8D_FROM_PTR_RDI_(VALUE) mov r8d, dword ptr [rdi + VALUE]
#define MOV_R8D_FROM_PTR_RSI_(VALUE) mov r8d, dword ptr [rsi + VALUE]
#define MOV_R8D_FROM_PTR_RBP_(VALUE) mov r8d, dword ptr [rbp + VALUE]
#define MOV_R8D_FROM_PTR_RSP_(VALUE) mov r8d, dword ptr [rsp + VALUE]
#define MOV_R8D_FROM_PTR_R8_(VALUE) mov r8d, dword ptr [r8 + VALUE]
#define MOV_R8D_FROM_PTR_R9_(VALUE) mov r8d, dword ptr [r9 + VALUE]
#define MOV_R8D_FROM_PTR_R10_(VALUE) mov r8d, dword ptr [r10 + VALUE]
#define MOV_R8D_FROM_PTR_R11_(VALUE) mov r8d, dword ptr [r11 + VALUE]
#define MOV_R8D_FROM_PTR_R12_(VALUE) mov r8d, dword ptr [r12 + VALUE]
#define MOV_R8D_FROM_PTR_R13_(VALUE) mov r8d, dword ptr [r13 + VALUE]
#define MOV_R8D_FROM_PTR_R14_(VALUE) mov r8d, dword ptr [r14 + VALUE]
#define MOV_R8D_FROM_PTR_R15_(VALUE) mov r8d, dword ptr [r15 + VALUE]
#define MOV_R8D_FROM_PTR_EAX_(VALUE) mov r8d, dword ptr [eax + VALUE]
#define MOV_R8D_FROM_PTR_EBX_(VALUE) mov r8d, dword ptr [ebx + VALUE]
#define MOV_R8D_FROM_PTR_ECX_(VALUE) mov r8d, dword ptr [ecx + VALUE]
#define MOV_R8D_FROM_PTR_EDX_(VALUE) mov r8d, dword ptr [edx + VALUE]
#define MOV_R8D_FROM_PTR_EDI_(VALUE) mov r8d, dword ptr [edi + VALUE]
#define MOV_R8D_FROM_PTR_ESI_(VALUE) mov r8d, dword ptr [esi + VALUE]
#define MOV_R8D_FROM_PTR_EBP_(VALUE) mov r8d, dword ptr [ebp + VALUE]
#define MOV_R8D_FROM_PTR_ESP_(VALUE) mov r8d, dword ptr [esp + VALUE]

#define MOV_R9D_FROM_PTR_RAX_(VALUE) mov r9d, dword ptr [rax + VALUE]
#define MOV_R9D_FROM_PTR_RBX_(VALUE) mov r9d, dword ptr [rbx + VALUE]
#define MOV_R9D_FROM_PTR_RCX_(VALUE) mov r9d, dword ptr [rcx + VALUE]
#define MOV_R9D_FROM_PTR_RDX_(VALUE) mov r9d, dword ptr [rdx + VALUE]
#define MOV_R9D_FROM_PTR_RDI_(VALUE) mov r9d, dword ptr [rdi + VALUE]
#define MOV_R9D_FROM_PTR_RSI_(VALUE) mov r9d, dword ptr [rsi + VALUE]
#define MOV_R9D_FROM_PTR_RBP_(VALUE) mov r9d, dword ptr [rbp + VALUE]
#define MOV_R9D_FROM_PTR_RSP_(VALUE) mov r9d, dword ptr [rsp + VALUE]
#define MOV_R9D_FROM_PTR_R8_(VALUE) mov r9d, dword ptr [r8 + VALUE]
#define MOV_R9D_FROM_PTR_R9_(VALUE) mov r9d, dword ptr [r9 + VALUE]
#define MOV_R9D_FROM_PTR_R10_(VALUE) mov r9d, dword ptr [r10 + VALUE]
#define MOV_R9D_FROM_PTR_R11_(VALUE) mov r9d, dword ptr [r11 + VALUE]
#define MOV_R9D_FROM_PTR_R12_(VALUE) mov r9d, dword ptr [r12 + VALUE]
#define MOV_R9D_FROM_PTR_R13_(VALUE) mov r9d, dword ptr [r13 + VALUE]
#define MOV_R9D_FROM_PTR_R14_(VALUE) mov r9d, dword ptr [r14 + VALUE]
#define MOV_R9D_FROM_PTR_R15_(VALUE) mov r9d, dword ptr [r15 + VALUE]
#define MOV_R9D_FROM_PTR_EAX_(VALUE) mov r9d, dword ptr [eax + VALUE]
#define MOV_R9D_FROM_PTR_EBX_(VALUE) mov r9d, dword ptr [ebx + VALUE]
#define MOV_R9D_FROM_PTR_ECX_(VALUE) mov r9d, dword ptr [ecx + VALUE]
#define MOV_R9D_FROM_PTR_EDX_(VALUE) mov r9d, dword ptr [edx + VALUE]
#define MOV_R9D_FROM_PTR_EDI_(VALUE) mov r9d, dword ptr [edi + VALUE]
#define MOV_R9D_FROM_PTR_ESI_(VALUE) mov r9d, dword ptr [esi + VALUE]
#define MOV_R9D_FROM_PTR_EBP_(VALUE) mov r9d, dword ptr [ebp + VALUE]
#define MOV_R9D_FROM_PTR_ESP_(VALUE) mov r9d, dword ptr [esp + VALUE]

#define MOV_R10D_FROM_PTR_RAX_(VALUE) mov r10d, dword ptr [rax + VALUE]
#define MOV_R10D_FROM_PTR_RBX_(VALUE) mov r10d, dword ptr [rbx + VALUE]
#define MOV_R10D_FROM_PTR_RCX_(VALUE) mov r10d, dword ptr [rcx + VALUE]
#define MOV_R10D_FROM_PTR_RDX_(VALUE) mov r10d, dword ptr [rdx + VALUE]
#define MOV_R10D_FROM_PTR_RDI_(VALUE) mov r10d, dword ptr [rdi + VALUE]
#define MOV_R10D_FROM_PTR_RSI_(VALUE) mov r10d, dword ptr [rsi + VALUE]
#define MOV_R10D_FROM_PTR_RBP_(VALUE) mov r10d, dword ptr [rbp + VALUE]
#define MOV_R10D_FROM_PTR_RSP_(VALUE) mov r10d, dword ptr [rsp + VALUE]
#define MOV_R10D_FROM_PTR_R8_(VALUE) mov r10d, dword ptr [r8 + VALUE]
#define MOV_R10D_FROM_PTR_R9_(VALUE) mov r10d, dword ptr [r9 + VALUE]
#define MOV_R10D_FROM_PTR_R10_(VALUE) mov r10d, dword ptr [r10 + VALUE]
#define MOV_R10D_FROM_PTR_R11_(VALUE) mov r10d, dword ptr [r11 + VALUE]
#define MOV_R10D_FROM_PTR_R12_(VALUE) mov r10d, dword ptr [r12 + VALUE]
#define MOV_R10D_FROM_PTR_R13_(VALUE) mov r10d, dword ptr [r13 + VALUE]
#define MOV_R10D_FROM_PTR_R14_(VALUE) mov r10d, dword ptr [r14 + VALUE]
#define MOV_R10D_FROM_PTR_R15_(VALUE) mov r10d, dword ptr [r15 + VALUE]
#define MOV_R10D_FROM_PTR_EAX_(VALUE) mov r10d, dword ptr [eax + VALUE]
#define MOV_R10D_FROM_PTR_EBX_(VALUE) mov r10d, dword ptr [ebx + VALUE]
#define MOV_R10D_FROM_PTR_ECX_(VALUE) mov r10d, dword ptr [ecx + VALUE]
#define MOV_R10D_FROM_PTR_EDX_(VALUE) mov r10d, dword ptr [edx + VALUE]
#define MOV_R10D_FROM_PTR_EDI_(VALUE) mov r10d, dword ptr [edi + VALUE]
#define MOV_R10D_FROM_PTR_ESI_(VALUE) mov r10d, dword ptr [esi + VALUE]
#define MOV_R10D_FROM_PTR_EBP_(VALUE) mov r10d, dword ptr [ebp + VALUE]
#define MOV_R10D_FROM_PTR_ESP_(VALUE) mov r10d, dword ptr [esp + VALUE]

#define MOV_R11D_FROM_PTR_RAX_(VALUE) mov r11d, dword ptr [rax + VALUE]
#define MOV_R11D_FROM_PTR_RBX_(VALUE) mov r11d, dword ptr [rbx + VALUE]
#define MOV_R11D_FROM_PTR_RCX_(VALUE) mov r11d, dword ptr [rcx + VALUE]
#define MOV_R11D_FROM_PTR_RDX_(VALUE) mov r11d, dword ptr [rdx + VALUE]
#define MOV_R11D_FROM_PTR_RDI_(VALUE) mov r11d, dword ptr [rdi + VALUE]
#define MOV_R11D_FROM_PTR_RSI_(VALUE) mov r11d, dword ptr [rsi + VALUE]
#define MOV_R11D_FROM_PTR_RBP_(VALUE) mov r11d, dword ptr [rbp + VALUE]
#define MOV_R11D_FROM_PTR_RSP_(VALUE) mov r11d, dword ptr [rsp + VALUE]
#define MOV_R11D_FROM_PTR_R8_(VALUE) mov r11d, dword ptr [r8 + VALUE]
#define MOV_R11D_FROM_PTR_R9_(VALUE) mov r11d, dword ptr [r9 + VALUE]
#define MOV_R11D_FROM_PTR_R10_(VALUE) mov r11d, dword ptr [r10 + VALUE]
#define MOV_R11D_FROM_PTR_R11_(VALUE) mov r11d, dword ptr [r11 + VALUE]
#define MOV_R11D_FROM_PTR_R12_(VALUE) mov r11d, dword ptr [r12 + VALUE]
#define MOV_R11D_FROM_PTR_R13_(VALUE) mov r11d, dword ptr [r13 + VALUE]
#define MOV_R11D_FROM_PTR_R14_(VALUE) mov r11d, dword ptr [r14 + VALUE]
#define MOV_R11D_FROM_PTR_R15_(VALUE) mov r11d, dword ptr [r15 + VALUE]
#define MOV_R11D_FROM_PTR_EAX_(VALUE) mov r11d, dword ptr [eax + VALUE]
#define MOV_R11D_FROM_PTR_EBX_(VALUE) mov r11d, dword ptr [ebx + VALUE]
#define MOV_R11D_FROM_PTR_ECX_(VALUE) mov r11d, dword ptr [ecx + VALUE]
#define MOV_R11D_FROM_PTR_EDX_(VALUE) mov r11d, dword ptr [edx + VALUE]
#define MOV_R11D_FROM_PTR_EDI_(VALUE) mov r11d, dword ptr [edi + VALUE]
#define MOV_R11D_FROM_PTR_ESI_(VALUE) mov r11d, dword ptr [esi + VALUE]
#define MOV_R11D_FROM_PTR_EBP_(VALUE) mov r11d, dword ptr [ebp + VALUE]
#define MOV_R11D_FROM_PTR_ESP_(VALUE) mov r11d, dword ptr [esp + VALUE]

#define MOV_R12D_FROM_PTR_RAX_(VALUE) mov r12d, dword ptr [rax + VALUE]
#define MOV_R12D_FROM_PTR_RBX_(VALUE) mov r12d, dword ptr [rbx + VALUE]
#define MOV_R12D_FROM_PTR_RCX_(VALUE) mov r12d, dword ptr [rcx + VALUE]
#define MOV_R12D_FROM_PTR_RDX_(VALUE) mov r12d, dword ptr [rdx + VALUE]
#define MOV_R12D_FROM_PTR_RDI_(VALUE) mov r12d, dword ptr [rdi + VALUE]
#define MOV_R12D_FROM_PTR_RSI_(VALUE) mov r12d, dword ptr [rsi + VALUE]
#define MOV_R12D_FROM_PTR_RBP_(VALUE) mov r12d, dword ptr [rbp + VALUE]
#define MOV_R12D_FROM_PTR_RSP_(VALUE) mov r12d, dword ptr [rsp + VALUE]
#define MOV_R12D_FROM_PTR_R8_(VALUE) mov r12d, dword ptr [r8 + VALUE]
#define MOV_R12D_FROM_PTR_R9_(VALUE) mov r12d, dword ptr [r9 + VALUE]
#define MOV_R12D_FROM_PTR_R10_(VALUE) mov r12d, dword ptr [r10 + VALUE]
#define MOV_R12D_FROM_PTR_R11_(VALUE) mov r12d, dword ptr [r11 + VALUE]
#define MOV_R12D_FROM_PTR_R12_(VALUE) mov r12d, dword ptr [r12 + VALUE]
#define MOV_R12D_FROM_PTR_R13_(VALUE) mov r12d, dword ptr [r13 + VALUE]
#define MOV_R12D_FROM_PTR_R14_(VALUE) mov r12d, dword ptr [r14 + VALUE]
#define MOV_R12D_FROM_PTR_R15_(VALUE) mov r12d, dword ptr [r15 + VALUE]
#define MOV_R12D_FROM_PTR_EAX_(VALUE) mov r12d, dword ptr [eax + VALUE]
#define MOV_R12D_FROM_PTR_EBX_(VALUE) mov r12d, dword ptr [ebx + VALUE]
#define MOV_R12D_FROM_PTR_ECX_(VALUE) mov r12d, dword ptr [ecx + VALUE]
#define MOV_R12D_FROM_PTR_EDX_(VALUE) mov r12d, dword ptr [edx + VALUE]
#define MOV_R12D_FROM_PTR_EDI_(VALUE) mov r12d, dword ptr [edi + VALUE]
#define MOV_R12D_FROM_PTR_ESI_(VALUE) mov r12d, dword ptr [esi + VALUE]
#define MOV_R12D_FROM_PTR_EBP_(VALUE) mov r12d, dword ptr [ebp + VALUE]
#define MOV_R12D_FROM_PTR_ESP_(VALUE) mov r12d, dword ptr [esp + VALUE]

#define MOV_R13D_FROM_PTR_RAX_(VALUE) mov r13d, dword ptr [rax + VALUE]
#define MOV_R13D_FROM_PTR_RBX_(VALUE) mov r13d, dword ptr [rbx + VALUE]
#define MOV_R13D_FROM_PTR_RCX_(VALUE) mov r13d, dword ptr [rcx + VALUE]
#define MOV_R13D_FROM_PTR_RDX_(VALUE) mov r13d, dword ptr [rdx + VALUE]
#define MOV_R13D_FROM_PTR_RDI_(VALUE) mov r13d, dword ptr [rdi + VALUE]
#define MOV_R13D_FROM_PTR_RSI_(VALUE) mov r13d, dword ptr [rsi + VALUE]
#define MOV_R13D_FROM_PTR_RBP_(VALUE) mov r13d, dword ptr [rbp + VALUE]
#define MOV_R13D_FROM_PTR_RSP_(VALUE) mov r13d, dword ptr [rsp + VALUE]
#define MOV_R13D_FROM_PTR_R8_(VALUE) mov r13d, dword ptr [r8 + VALUE]
#define MOV_R13D_FROM_PTR_R9_(VALUE) mov r13d, dword ptr [r9 + VALUE]
#define MOV_R13D_FROM_PTR_R10_(VALUE) mov r13d, dword ptr [r10 + VALUE]
#define MOV_R13D_FROM_PTR_R11_(VALUE) mov r13d, dword ptr [r11 + VALUE]
#define MOV_R13D_FROM_PTR_R12_(VALUE) mov r13d, dword ptr [r12 + VALUE]
#define MOV_R13D_FROM_PTR_R13_(VALUE) mov r13d, dword ptr [r13 + VALUE]
#define MOV_R13D_FROM_PTR_R14_(VALUE) mov r13d, dword ptr [r14 + VALUE]
#define MOV_R13D_FROM_PTR_R15_(VALUE) mov r13d, dword ptr [r15 + VALUE]
#define MOV_R13D_FROM_PTR_EAX_(VALUE) mov r13d, dword ptr [eax + VALUE]
#define MOV_R13D_FROM_PTR_EBX_(VALUE) mov r13d, dword ptr [ebx + VALUE]
#define MOV_R13D_FROM_PTR_ECX_(VALUE) mov r13d, dword ptr [ecx + VALUE]
#define MOV_R13D_FROM_PTR_EDX_(VALUE) mov r13d, dword ptr [edx + VALUE]
#define MOV_R13D_FROM_PTR_EDI_(VALUE) mov r13d, dword ptr [edi + VALUE]
#define MOV_R13D_FROM_PTR_ESI_(VALUE) mov r13d, dword ptr [esi + VALUE]
#define MOV_R13D_FROM_PTR_EBP_(VALUE) mov r13d, dword ptr [ebp + VALUE]
#define MOV_R13D_FROM_PTR_ESP_(VALUE) mov r13d, dword ptr [esp + VALUE]

#define MOV_R14D_FROM_PTR_RAX_(VALUE) mov r14d, dword ptr [rax + VALUE]
#define MOV_R14D_FROM_PTR_RBX_(VALUE) mov r14d, dword ptr [rbx + VALUE]
#define MOV_R14D_FROM_PTR_RCX_(VALUE) mov r14d, dword ptr [rcx + VALUE]
#define MOV_R14D_FROM_PTR_RDX_(VALUE) mov r14d, dword ptr [rdx + VALUE]
#define MOV_R14D_FROM_PTR_RDI_(VALUE) mov r14d, dword ptr [rdi + VALUE]
#define MOV_R14D_FROM_PTR_RSI_(VALUE) mov r14d, dword ptr [rsi + VALUE]
#define MOV_R14D_FROM_PTR_RBP_(VALUE) mov r14d, dword ptr [rbp + VALUE]
#define MOV_R14D_FROM_PTR_RSP_(VALUE) mov r14d, dword ptr [rsp + VALUE]
#define MOV_R14D_FROM_PTR_R8_(VALUE) mov r14d, dword ptr [r8 + VALUE]
#define MOV_R14D_FROM_PTR_R9_(VALUE) mov r14d, dword ptr [r9 + VALUE]
#define MOV_R14D_FROM_PTR_R10_(VALUE) mov r14d, dword ptr [r10 + VALUE]
#define MOV_R14D_FROM_PTR_R11_(VALUE) mov r14d, dword ptr [r11 + VALUE]
#define MOV_R14D_FROM_PTR_R12_(VALUE) mov r14d, dword ptr [r12 + VALUE]
#define MOV_R14D_FROM_PTR_R13_(VALUE) mov r14d, dword ptr [r13 + VALUE]
#define MOV_R14D_FROM_PTR_R14_(VALUE) mov r14d, dword ptr [r14 + VALUE]
#define MOV_R14D_FROM_PTR_R15_(VALUE) mov r14d, dword ptr [r15 + VALUE]
#define MOV_R14D_FROM_PTR_EAX_(VALUE) mov r14d, dword ptr [eax + VALUE]
#define MOV_R14D_FROM_PTR_EBX_(VALUE) mov r14d, dword ptr [ebx + VALUE]
#define MOV_R14D_FROM_PTR_ECX_(VALUE) mov r14d, dword ptr [ecx + VALUE]
#define MOV_R14D_FROM_PTR_EDX_(VALUE) mov r14d, dword ptr [edx + VALUE]
#define MOV_R14D_FROM_PTR_EDI_(VALUE) mov r14d, dword ptr [edi + VALUE]
#define MOV_R14D_FROM_PTR_ESI_(VALUE) mov r14d, dword ptr [esi + VALUE]
#define MOV_R14D_FROM_PTR_EBP_(VALUE) mov r14d, dword ptr [ebp + VALUE]
#define MOV_R14D_FROM_PTR_ESP_(VALUE) mov r14d, dword ptr [esp + VALUE]

#define MOV_R15D_FROM_PTR_RAX_(VALUE) mov r15d, dword ptr [rax + VALUE]
#define MOV_R15D_FROM_PTR_RBX_(VALUE) mov r15d, dword ptr [rbx + VALUE]
#define MOV_R15D_FROM_PTR_RCX_(VALUE) mov r15d, dword ptr [rcx + VALUE]
#define MOV_R15D_FROM_PTR_RDX_(VALUE) mov r15d, dword ptr [rdx + VALUE]
#define MOV_R15D_FROM_PTR_RDI_(VALUE) mov r15d, dword ptr [rdi + VALUE]
#define MOV_R15D_FROM_PTR_RSI_(VALUE) mov r15d, dword ptr [rsi + VALUE]
#define MOV_R15D_FROM_PTR_RBP_(VALUE) mov r15d, dword ptr [rbp + VALUE]
#define MOV_R15D_FROM_PTR_RSP_(VALUE) mov r15d, dword ptr [rsp + VALUE]
#define MOV_R15D_FROM_PTR_R8_(VALUE) mov r15d, dword ptr [r8 + VALUE]
#define MOV_R15D_FROM_PTR_R9_(VALUE) mov r15d, dword ptr [r9 + VALUE]
#define MOV_R15D_FROM_PTR_R10_(VALUE) mov r15d, dword ptr [r10 + VALUE]
#define MOV_R15D_FROM_PTR_R11_(VALUE) mov r15d, dword ptr [r11 + VALUE]
#define MOV_R15D_FROM_PTR_R12_(VALUE) mov r15d, dword ptr [r12 + VALUE]
#define MOV_R15D_FROM_PTR_R13_(VALUE) mov r15d, dword ptr [r13 + VALUE]
#define MOV_R15D_FROM_PTR_R14_(VALUE) mov r15d, dword ptr [r14 + VALUE]
#define MOV_R15D_FROM_PTR_R15_(VALUE) mov r15d, dword ptr [r15 + VALUE]
#define MOV_R15D_FROM_PTR_EAX_(VALUE) mov r15d, dword ptr [eax + VALUE]
#define MOV_R15D_FROM_PTR_EBX_(VALUE) mov r15d, dword ptr [ebx + VALUE]
#define MOV_R15D_FROM_PTR_ECX_(VALUE) mov r15d, dword ptr [ecx + VALUE]
#define MOV_R15D_FROM_PTR_EDX_(VALUE) mov r15d, dword ptr [edx + VALUE]
#define MOV_R15D_FROM_PTR_EDI_(VALUE) mov r15d, dword ptr [edi + VALUE]
#define MOV_R15D_FROM_PTR_ESI_(VALUE) mov r15d, dword ptr [esi + VALUE]
#define MOV_R15D_FROM_PTR_EBP_(VALUE) mov r15d, dword ptr [ebp + VALUE]
#define MOV_R15D_FROM_PTR_ESP_(VALUE) mov r15d, dword ptr [esp + VALUE]

#define MOV_EAX_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], eax
#define MOV_EAX_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], eax
#define MOV_EAX_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], eax
#define MOV_EAX_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], eax
#define MOV_EAX_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], eax
#define MOV_EAX_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], eax
#define MOV_EAX_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], eax
#define MOV_EAX_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], eax
#define MOV_EAX_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], eax
#define MOV_EAX_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], eax
#define MOV_EAX_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], eax
#define MOV_EAX_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], eax
#define MOV_EAX_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], eax
#define MOV_EAX_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], eax
#define MOV_EAX_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], eax
#define MOV_EAX_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], eax
#define MOV_EAX_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], eax
#define MOV_EAX_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], eax
#define MOV_EAX_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], eax
#define MOV_EAX_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], eax
#define MOV_EAX_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], eax
#define MOV_EAX_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], eax
#define MOV_EAX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], eax
#define MOV_EAX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], eax

#define MOV_EBX_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], ebx
#define MOV_EBX_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], ebx
#define MOV_EBX_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], ebx
#define MOV_EBX_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], ebx
#define MOV_EBX_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], ebx
#define MOV_EBX_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], ebx
#define MOV_EBX_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], ebx
#define MOV_EBX_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], ebx
#define MOV_EBX_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], ebx
#define MOV_EBX_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], ebx
#define MOV_EBX_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], ebx
#define MOV_EBX_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], ebx
#define MOV_EBX_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], ebx
#define MOV_EBX_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], ebx
#define MOV_EBX_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], ebx
#define MOV_EBX_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], ebx
#define MOV_EBX_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], ebx
#define MOV_EBX_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], ebx
#define MOV_EBX_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], ebx
#define MOV_EBX_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], ebx
#define MOV_EBX_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], ebx
#define MOV_EBX_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], ebx
#define MOV_EBX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ebx
#define MOV_EBX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ebx

#define MOV_ECX_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], ecx
#define MOV_ECX_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], ecx
#define MOV_ECX_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], ecx
#define MOV_ECX_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], ecx
#define MOV_ECX_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], ecx
#define MOV_ECX_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], ecx
#define MOV_ECX_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], ecx
#define MOV_ECX_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], ecx
#define MOV_ECX_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], ecx
#define MOV_ECX_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], ecx
#define MOV_ECX_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], ecx
#define MOV_ECX_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], ecx
#define MOV_ECX_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], ecx
#define MOV_ECX_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], ecx
#define MOV_ECX_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], ecx
#define MOV_ECX_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], ecx
#define MOV_ECX_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], ecx
#define MOV_ECX_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], ecx
#define MOV_ECX_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], ecx
#define MOV_ECX_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], ecx
#define MOV_ECX_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], ecx
#define MOV_ECX_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], ecx
#define MOV_ECX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ecx
#define MOV_ECX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ecx

#define MOV_EDX_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], edx
#define MOV_EDX_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], edx
#define MOV_EDX_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], edx
#define MOV_EDX_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], edx
#define MOV_EDX_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], edx
#define MOV_EDX_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], edx
#define MOV_EDX_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], edx
#define MOV_EDX_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], edx
#define MOV_EDX_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], edx
#define MOV_EDX_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], edx
#define MOV_EDX_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], edx
#define MOV_EDX_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], edx
#define MOV_EDX_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], edx
#define MOV_EDX_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], edx
#define MOV_EDX_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], edx
#define MOV_EDX_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], edx
#define MOV_EDX_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], edx
#define MOV_EDX_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], edx
#define MOV_EDX_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], edx
#define MOV_EDX_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], edx
#define MOV_EDX_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], edx
#define MOV_EDX_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], edx
#define MOV_EDX_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], edx
#define MOV_EDX_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], edx

#define MOV_EDI_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], edi
#define MOV_EDI_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], edi
#define MOV_EDI_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], edi
#define MOV_EDI_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], edi
#define MOV_EDI_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], edi
#define MOV_EDI_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], edi
#define MOV_EDI_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], edi
#define MOV_EDI_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], edi
#define MOV_EDI_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], edi
#define MOV_EDI_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], edi
#define MOV_EDI_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], edi
#define MOV_EDI_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], edi
#define MOV_EDI_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], edi
#define MOV_EDI_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], edi
#define MOV_EDI_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], edi
#define MOV_EDI_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], edi
#define MOV_EDI_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], edi
#define MOV_EDI_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], edi
#define MOV_EDI_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], edi
#define MOV_EDI_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], edi
#define MOV_EDI_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], edi
#define MOV_EDI_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], edi
#define MOV_EDI_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], edi
#define MOV_EDI_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], edi

#define MOV_ESI_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], esi
#define MOV_ESI_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], esi
#define MOV_ESI_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], esi
#define MOV_ESI_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], esi
#define MOV_ESI_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], esi
#define MOV_ESI_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], esi
#define MOV_ESI_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], esi
#define MOV_ESI_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], esi
#define MOV_ESI_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], esi
#define MOV_ESI_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], esi
#define MOV_ESI_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], esi
#define MOV_ESI_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], esi
#define MOV_ESI_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], esi
#define MOV_ESI_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], esi
#define MOV_ESI_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], esi
#define MOV_ESI_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], esi
#define MOV_ESI_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], esi
#define MOV_ESI_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], esi
#define MOV_ESI_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], esi
#define MOV_ESI_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], esi
#define MOV_ESI_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], esi
#define MOV_ESI_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], esi
#define MOV_ESI_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], esi
#define MOV_ESI_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], esi

#define MOV_EBP_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], ebp
#define MOV_EBP_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], ebp
#define MOV_EBP_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], ebp
#define MOV_EBP_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], ebp
#define MOV_EBP_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], ebp
#define MOV_EBP_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], ebp
#define MOV_EBP_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], ebp
#define MOV_EBP_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], ebp
#define MOV_EBP_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], ebp
#define MOV_EBP_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], ebp
#define MOV_EBP_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], ebp
#define MOV_EBP_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], ebp
#define MOV_EBP_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], ebp
#define MOV_EBP_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], ebp
#define MOV_EBP_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], ebp
#define MOV_EBP_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], ebp
#define MOV_EBP_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], ebp
#define MOV_EBP_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], ebp
#define MOV_EBP_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], ebp
#define MOV_EBP_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], ebp
#define MOV_EBP_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], ebp
#define MOV_EBP_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], ebp
#define MOV_EBP_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], ebp
#define MOV_EBP_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], ebp

#define MOV_ESP_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], esp
#define MOV_ESP_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], esp
#define MOV_ESP_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], esp
#define MOV_ESP_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], esp
#define MOV_ESP_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], esp
#define MOV_ESP_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], esp
#define MOV_ESP_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], esp
#define MOV_ESP_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], esp
#define MOV_ESP_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], esp
#define MOV_ESP_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], esp
#define MOV_ESP_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], esp
#define MOV_ESP_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], esp
#define MOV_ESP_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], esp
#define MOV_ESP_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], esp
#define MOV_ESP_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], esp
#define MOV_ESP_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], esp
#define MOV_ESP_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], esp
#define MOV_ESP_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], esp
#define MOV_ESP_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], esp
#define MOV_ESP_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], esp
#define MOV_ESP_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], esp
#define MOV_ESP_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], esp
#define MOV_ESP_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], esp
#define MOV_ESP_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], esp

#define MOV_R8D_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], r8d
#define MOV_R8D_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], r8d
#define MOV_R8D_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], r8d
#define MOV_R8D_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], r8d
#define MOV_R8D_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], r8d
#define MOV_R8D_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], r8d
#define MOV_R8D_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], r8d
#define MOV_R8D_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], r8d
#define MOV_R8D_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], r8d
#define MOV_R8D_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], r8d
#define MOV_R8D_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], r8d
#define MOV_R8D_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], r8d
#define MOV_R8D_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], r8d
#define MOV_R8D_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], r8d
#define MOV_R8D_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], r8d
#define MOV_R8D_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], r8d
#define MOV_R8D_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], r8d
#define MOV_R8D_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], r8d
#define MOV_R8D_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], r8d
#define MOV_R8D_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], r8d
#define MOV_R8D_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], r8d
#define MOV_R8D_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], r8d
#define MOV_R8D_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], r8d
#define MOV_R8D_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], r8d

#define MOV_R9D_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], r9d
#define MOV_R9D_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], r9d
#define MOV_R9D_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], r9d
#define MOV_R9D_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], r9d
#define MOV_R9D_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], r9d
#define MOV_R9D_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], r9d
#define MOV_R9D_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], r9d
#define MOV_R9D_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], r9d
#define MOV_R9D_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], r9d
#define MOV_R9D_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], r9d
#define MOV_R9D_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], r9d
#define MOV_R9D_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], r9d
#define MOV_R9D_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], r9d
#define MOV_R9D_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], r9d
#define MOV_R9D_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], r9d
#define MOV_R9D_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], r9d
#define MOV_R9D_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], r9d
#define MOV_R9D_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], r9d
#define MOV_R9D_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], r9d
#define MOV_R9D_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], r9d
#define MOV_R9D_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], r9d
#define MOV_R9D_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], r9d
#define MOV_R9D_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], r9d
#define MOV_R9D_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], r9d

#define MOV_R10D_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], r10d
#define MOV_R10D_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], r10d
#define MOV_R10D_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], r10d
#define MOV_R10D_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], r10d
#define MOV_R10D_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], r10d
#define MOV_R10D_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], r10d
#define MOV_R10D_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], r10d
#define MOV_R10D_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], r10d
#define MOV_R10D_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], r10d
#define MOV_R10D_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], r10d
#define MOV_R10D_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], r10d
#define MOV_R10D_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], r10d
#define MOV_R10D_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], r10d
#define MOV_R10D_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], r10d
#define MOV_R10D_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], r10d
#define MOV_R10D_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], r10d
#define MOV_R10D_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], r10d
#define MOV_R10D_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], r10d
#define MOV_R10D_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], r10d
#define MOV_R10D_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], r10d
#define MOV_R10D_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], r10d
#define MOV_R10D_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], r10d
#define MOV_R10D_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], r10d
#define MOV_R10D_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], r10d

#define MOV_R11D_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], r11d
#define MOV_R11D_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], r11d
#define MOV_R11D_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], r11d
#define MOV_R11D_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], r11d
#define MOV_R11D_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], r11d
#define MOV_R11D_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], r11d
#define MOV_R11D_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], r11d
#define MOV_R11D_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], r11d
#define MOV_R11D_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], r11d
#define MOV_R11D_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], r11d
#define MOV_R11D_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], r11d
#define MOV_R11D_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], r11d
#define MOV_R11D_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], r11d
#define MOV_R11D_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], r11d
#define MOV_R11D_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], r11d
#define MOV_R11D_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], r11d
#define MOV_R11D_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], r11d
#define MOV_R11D_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], r11d
#define MOV_R11D_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], r11d
#define MOV_R11D_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], r11d
#define MOV_R11D_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], r11d
#define MOV_R11D_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], r11d
#define MOV_R11D_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], r11d
#define MOV_R11D_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], r11d

#define MOV_R12D_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], r12d
#define MOV_R12D_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], r12d
#define MOV_R12D_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], r12d
#define MOV_R12D_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], r12d
#define MOV_R12D_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], r12d
#define MOV_R12D_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], r12d
#define MOV_R12D_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], r12d
#define MOV_R12D_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], r12d
#define MOV_R12D_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], r12d
#define MOV_R12D_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], r12d
#define MOV_R12D_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], r12d
#define MOV_R12D_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], r12d
#define MOV_R12D_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], r12d
#define MOV_R12D_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], r12d
#define MOV_R12D_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], r12d
#define MOV_R12D_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], r12d
#define MOV_R12D_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], r12d
#define MOV_R12D_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], r12d
#define MOV_R12D_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], r12d
#define MOV_R12D_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], r12d
#define MOV_R12D_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], r12d
#define MOV_R12D_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], r12d
#define MOV_R12D_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], r12d
#define MOV_R12D_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], r12d

#define MOV_R13D_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], r13d
#define MOV_R13D_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], r13d
#define MOV_R13D_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], r13d
#define MOV_R13D_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], r13d
#define MOV_R13D_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], r13d
#define MOV_R13D_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], r13d
#define MOV_R13D_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], r13d
#define MOV_R13D_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], r13d
#define MOV_R13D_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], r13d
#define MOV_R13D_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], r13d
#define MOV_R13D_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], r13d
#define MOV_R13D_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], r13d
#define MOV_R13D_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], r13d
#define MOV_R13D_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], r13d
#define MOV_R13D_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], r13d
#define MOV_R13D_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], r13d
#define MOV_R13D_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], r13d
#define MOV_R13D_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], r13d
#define MOV_R13D_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], r13d
#define MOV_R13D_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], r13d
#define MOV_R13D_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], r13d
#define MOV_R13D_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], r13d
#define MOV_R13D_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], r13d
#define MOV_R13D_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], r13d

#define MOV_R14D_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], r14d
#define MOV_R14D_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], r14d
#define MOV_R14D_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], r14d
#define MOV_R14D_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], r14d
#define MOV_R14D_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], r14d
#define MOV_R14D_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], r14d
#define MOV_R14D_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], r14d
#define MOV_R14D_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], r14d
#define MOV_R14D_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], r14d
#define MOV_R14D_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], r14d
#define MOV_R14D_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], r14d
#define MOV_R14D_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], r14d
#define MOV_R14D_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], r14d
#define MOV_R14D_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], r14d
#define MOV_R14D_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], r14d
#define MOV_R14D_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], r14d
#define MOV_R14D_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], r14d
#define MOV_R14D_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], r14d
#define MOV_R14D_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], r14d
#define MOV_R14D_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], r14d
#define MOV_R14D_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], r14d
#define MOV_R14D_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], r14d
#define MOV_R14D_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], r14d
#define MOV_R14D_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], r14d

#define MOV_R15D_TO_PTR_RAX_(VALUE) mov dword ptr [rax + VALUE], r15d
#define MOV_R15D_TO_PTR_RBX_(VALUE) mov dword ptr [rbx + VALUE], r15d
#define MOV_R15D_TO_PTR_RCX_(VALUE) mov dword ptr [rcx + VALUE], r15d
#define MOV_R15D_TO_PTR_RDX_(VALUE) mov dword ptr [rdx + VALUE], r15d
#define MOV_R15D_TO_PTR_RDI_(VALUE) mov dword ptr [rdi + VALUE], r15d
#define MOV_R15D_TO_PTR_RSI_(VALUE) mov dword ptr [rsi + VALUE], r15d
#define MOV_R15D_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], r15d
#define MOV_R15D_TO_PTR_RSP_(VALUE) mov dword ptr [rsp + VALUE], r15d
#define MOV_R15D_TO_PTR_R8_(VALUE) mov dword ptr [r8 + VALUE], r15d
#define MOV_R15D_TO_PTR_R9_(VALUE) mov dword ptr [r9 + VALUE], r15d
#define MOV_R15D_TO_PTR_R10_(VALUE) mov dword ptr [r10 + VALUE], r15d
#define MOV_R15D_TO_PTR_R11_(VALUE) mov dword ptr [r11 + VALUE], r15d
#define MOV_R15D_TO_PTR_R12_(VALUE) mov dword ptr [r12 + VALUE], r15d
#define MOV_R15D_TO_PTR_R13_(VALUE) mov dword ptr [r13 + VALUE], r15d
#define MOV_R15D_TO_PTR_R14_(VALUE) mov dword ptr [r14 + VALUE], r15d
#define MOV_R15D_TO_PTR_R15_(VALUE) mov dword ptr [r15 + VALUE], r15d
#define MOV_R15D_TO_PTR_EAX_(VALUE) mov dword ptr [eax + VALUE], r15d
#define MOV_R15D_TO_PTR_EBX_(VALUE) mov dword ptr [ebx + VALUE], r15d
#define MOV_R15D_TO_PTR_ECX_(VALUE) mov dword ptr [ecx + VALUE], r15d
#define MOV_R15D_TO_PTR_EDX_(VALUE) mov dword ptr [edx + VALUE], r15d
#define MOV_R15D_TO_PTR_EDI_(VALUE) mov dword ptr [edi + VALUE], r15d
#define MOV_R15D_TO_PTR_ESI_(VALUE) mov dword ptr [esi + VALUE], r15d
#define MOV_R15D_TO_PTR_EBP_(VALUE) mov dword ptr [ebp + VALUE], r15d
#define MOV_R15D_TO_PTR_ESP_(VALUE) mov dword ptr [esp + VALUE], r15d
#endif /* __SYSTEM_64_BIT__ */
/* ************************* [^] 32-BIT MEMORY [^] ************************** */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
