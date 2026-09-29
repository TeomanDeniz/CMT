#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define ADD_EAX_FROM_PTR_(VALUE) add eax, dword ptr [VALUE]
#define ADD_EBX_FROM_PTR_(VALUE) add ebx, dword ptr [VALUE]
#define ADD_ECX_FROM_PTR_(VALUE) add ecx, dword ptr [VALUE]
#define ADD_EDX_FROM_PTR_(VALUE) add edx, dword ptr [VALUE]
#define ADD_EDI_FROM_PTR_(VALUE) add edi, dword ptr [VALUE]
#define ADD_ESI_FROM_PTR_(VALUE) add esi, dword ptr [VALUE]
#define ADD_EBP_FROM_PTR_(VALUE) add ebp, dword ptr [VALUE]
#define ADD_ESP_FROM_PTR_(VALUE) add esp, dword ptr [VALUE]

#define ADD_EAX_TO_PTR_(VALUE) add dword ptr [VALUE], eax
#define ADD_EBX_TO_PTR_(VALUE) add dword ptr [VALUE], ebx
#define ADD_ECX_TO_PTR_(VALUE) add dword ptr [VALUE], ecx
#define ADD_EDX_TO_PTR_(VALUE) add dword ptr [VALUE], edx
#define ADD_EDI_TO_PTR_(VALUE) add dword ptr [VALUE], edi
#define ADD_ESI_TO_PTR_(VALUE) add dword ptr [VALUE], esi
#define ADD_EBP_TO_PTR_(VALUE) add dword ptr [VALUE], ebp
#define ADD_ESP_TO_PTR_(VALUE) add dword ptr [VALUE], esp

#define ADD_EAX_FROM_PTR_EAX add eax, dword ptr [eax]
#define ADD_EAX_FROM_PTR_EBX add eax, dword ptr [ebx]
#define ADD_EAX_FROM_PTR_ECX add eax, dword ptr [ecx]
#define ADD_EAX_FROM_PTR_EDX add eax, dword ptr [edx]
#define ADD_EAX_FROM_PTR_EDI add eax, dword ptr [edi]
#define ADD_EAX_FROM_PTR_ESI add eax, dword ptr [esi]
#define ADD_EAX_FROM_PTR_EBP add eax, dword ptr [ebp]
#define ADD_EAX_FROM_PTR_ESP add eax, dword ptr [esp]
#define ADD_EAX_FROM_PTR_BX add eax, dword ptr [bx]
#define ADD_EAX_FROM_PTR_BP add eax, dword ptr [bp]
#define ADD_EAX_FROM_PTR_SI add eax, dword ptr [si]
#define ADD_EAX_FROM_PTR_DI add eax, dword ptr [di]

#define ADD_EBX_FROM_PTR_EAX add ebx, dword ptr [eax]
#define ADD_EBX_FROM_PTR_EBX add ebx, dword ptr [ebx]
#define ADD_EBX_FROM_PTR_ECX add ebx, dword ptr [ecx]
#define ADD_EBX_FROM_PTR_EDX add ebx, dword ptr [edx]
#define ADD_EBX_FROM_PTR_EDI add ebx, dword ptr [edi]
#define ADD_EBX_FROM_PTR_ESI add ebx, dword ptr [esi]
#define ADD_EBX_FROM_PTR_EBP add ebx, dword ptr [ebp]
#define ADD_EBX_FROM_PTR_ESP add ebx, dword ptr [esp]
#define ADD_EBX_FROM_PTR_BX add ebx, dword ptr [bx]
#define ADD_EBX_FROM_PTR_BP add ebx, dword ptr [bp]
#define ADD_EBX_FROM_PTR_SI add ebx, dword ptr [si]
#define ADD_EBX_FROM_PTR_DI add ebx, dword ptr [di]

#define ADD_ECX_FROM_PTR_EAX add ecx, dword ptr [eax]
#define ADD_ECX_FROM_PTR_EBX add ecx, dword ptr [ebx]
#define ADD_ECX_FROM_PTR_ECX add ecx, dword ptr [ecx]
#define ADD_ECX_FROM_PTR_EDX add ecx, dword ptr [edx]
#define ADD_ECX_FROM_PTR_EDI add ecx, dword ptr [edi]
#define ADD_ECX_FROM_PTR_ESI add ecx, dword ptr [esi]
#define ADD_ECX_FROM_PTR_EBP add ecx, dword ptr [ebp]
#define ADD_ECX_FROM_PTR_ESP add ecx, dword ptr [esp]
#define ADD_ECX_FROM_PTR_BX add ecx, dword ptr [bx]
#define ADD_ECX_FROM_PTR_BP add ecx, dword ptr [bp]
#define ADD_ECX_FROM_PTR_SI add ecx, dword ptr [si]
#define ADD_ECX_FROM_PTR_DI add ecx, dword ptr [di]

#define ADD_EDX_FROM_PTR_EAX add edx, dword ptr [eax]
#define ADD_EDX_FROM_PTR_EBX add edx, dword ptr [ebx]
#define ADD_EDX_FROM_PTR_ECX add edx, dword ptr [ecx]
#define ADD_EDX_FROM_PTR_EDX add edx, dword ptr [edx]
#define ADD_EDX_FROM_PTR_EDI add edx, dword ptr [edi]
#define ADD_EDX_FROM_PTR_ESI add edx, dword ptr [esi]
#define ADD_EDX_FROM_PTR_EBP add edx, dword ptr [ebp]
#define ADD_EDX_FROM_PTR_ESP add edx, dword ptr [esp]
#define ADD_EDX_FROM_PTR_BX add edx, dword ptr [bx]
#define ADD_EDX_FROM_PTR_BP add edx, dword ptr [bp]
#define ADD_EDX_FROM_PTR_SI add edx, dword ptr [si]
#define ADD_EDX_FROM_PTR_DI add edx, dword ptr [di]

#define ADD_EDI_FROM_PTR_EAX add edi, dword ptr [eax]
#define ADD_EDI_FROM_PTR_EBX add edi, dword ptr [ebx]
#define ADD_EDI_FROM_PTR_ECX add edi, dword ptr [ecx]
#define ADD_EDI_FROM_PTR_EDX add edi, dword ptr [edx]
#define ADD_EDI_FROM_PTR_EDI add edi, dword ptr [edi]
#define ADD_EDI_FROM_PTR_ESI add edi, dword ptr [esi]
#define ADD_EDI_FROM_PTR_EBP add edi, dword ptr [ebp]
#define ADD_EDI_FROM_PTR_ESP add edi, dword ptr [esp]
#define ADD_EDI_FROM_PTR_BX add edi, dword ptr [bx]
#define ADD_EDI_FROM_PTR_BP add edi, dword ptr [bp]
#define ADD_EDI_FROM_PTR_SI add edi, dword ptr [si]
#define ADD_EDI_FROM_PTR_DI add edi, dword ptr [di]

#define ADD_ESI_FROM_PTR_EAX add esi, dword ptr [eax]
#define ADD_ESI_FROM_PTR_EBX add esi, dword ptr [ebx]
#define ADD_ESI_FROM_PTR_ECX add esi, dword ptr [ecx]
#define ADD_ESI_FROM_PTR_EDX add esi, dword ptr [edx]
#define ADD_ESI_FROM_PTR_EDI add esi, dword ptr [edi]
#define ADD_ESI_FROM_PTR_ESI add esi, dword ptr [esi]
#define ADD_ESI_FROM_PTR_EBP add esi, dword ptr [ebp]
#define ADD_ESI_FROM_PTR_ESP add esi, dword ptr [esp]
#define ADD_ESI_FROM_PTR_BX add esi, dword ptr [bx]
#define ADD_ESI_FROM_PTR_BP add esi, dword ptr [bp]
#define ADD_ESI_FROM_PTR_SI add esi, dword ptr [si]
#define ADD_ESI_FROM_PTR_DI add esi, dword ptr [di]

#define ADD_EBP_FROM_PTR_EAX add ebp, dword ptr [eax]
#define ADD_EBP_FROM_PTR_EBX add ebp, dword ptr [ebx]
#define ADD_EBP_FROM_PTR_ECX add ebp, dword ptr [ecx]
#define ADD_EBP_FROM_PTR_EDX add ebp, dword ptr [edx]
#define ADD_EBP_FROM_PTR_EDI add ebp, dword ptr [edi]
#define ADD_EBP_FROM_PTR_ESI add ebp, dword ptr [esi]
#define ADD_EBP_FROM_PTR_EBP add ebp, dword ptr [ebp]
#define ADD_EBP_FROM_PTR_ESP add ebp, dword ptr [esp]
#define ADD_EBP_FROM_PTR_BX add ebp, dword ptr [bx]
#define ADD_EBP_FROM_PTR_BP add ebp, dword ptr [bp]
#define ADD_EBP_FROM_PTR_SI add ebp, dword ptr [si]
#define ADD_EBP_FROM_PTR_DI add ebp, dword ptr [di]

#define ADD_ESP_FROM_PTR_EAX add esp, dword ptr [eax]
#define ADD_ESP_FROM_PTR_EBX add esp, dword ptr [ebx]
#define ADD_ESP_FROM_PTR_ECX add esp, dword ptr [ecx]
#define ADD_ESP_FROM_PTR_EDX add esp, dword ptr [edx]
#define ADD_ESP_FROM_PTR_EDI add esp, dword ptr [edi]
#define ADD_ESP_FROM_PTR_ESI add esp, dword ptr [esi]
#define ADD_ESP_FROM_PTR_EBP add esp, dword ptr [ebp]
#define ADD_ESP_FROM_PTR_ESP add esp, dword ptr [esp]
#define ADD_ESP_FROM_PTR_BX add esp, dword ptr [bx]
#define ADD_ESP_FROM_PTR_BP add esp, dword ptr [bp]
#define ADD_ESP_FROM_PTR_SI add esp, dword ptr [si]
#define ADD_ESP_FROM_PTR_DI add esp, dword ptr [di]

#define ADD_EAX_TO_PTR_EAX add dword ptr [eax], eax
#define ADD_EAX_TO_PTR_EBX add dword ptr [ebx], eax
#define ADD_EAX_TO_PTR_ECX add dword ptr [ecx], eax
#define ADD_EAX_TO_PTR_EDX add dword ptr [edx], eax
#define ADD_EAX_TO_PTR_EDI add dword ptr [edi], eax
#define ADD_EAX_TO_PTR_ESI add dword ptr [esi], eax
#define ADD_EAX_TO_PTR_EBP add dword ptr [ebp], eax
#define ADD_EAX_TO_PTR_ESP add dword ptr [esp], eax
#define ADD_EAX_TO_PTR_BX add dword ptr [bx], eax
#define ADD_EAX_TO_PTR_BP add dword ptr [bp], eax
#define ADD_EAX_TO_PTR_SI add dword ptr [si], eax
#define ADD_EAX_TO_PTR_DI add dword ptr [di], eax

#define ADD_EBX_TO_PTR_EAX add dword ptr [eax], ebx
#define ADD_EBX_TO_PTR_EBX add dword ptr [ebx], ebx
#define ADD_EBX_TO_PTR_ECX add dword ptr [ecx], ebx
#define ADD_EBX_TO_PTR_EDX add dword ptr [edx], ebx
#define ADD_EBX_TO_PTR_EDI add dword ptr [edi], ebx
#define ADD_EBX_TO_PTR_ESI add dword ptr [esi], ebx
#define ADD_EBX_TO_PTR_EBP add dword ptr [ebp], ebx
#define ADD_EBX_TO_PTR_ESP add dword ptr [esp], ebx
#define ADD_EBX_TO_PTR_BX add dword ptr [bx], ebx
#define ADD_EBX_TO_PTR_BP add dword ptr [bp], ebx
#define ADD_EBX_TO_PTR_SI add dword ptr [si], ebx
#define ADD_EBX_TO_PTR_DI add dword ptr [di], ebx

#define ADD_ECX_TO_PTR_EAX add dword ptr [eax], ecx
#define ADD_ECX_TO_PTR_EBX add dword ptr [ebx], ecx
#define ADD_ECX_TO_PTR_ECX add dword ptr [ecx], ecx
#define ADD_ECX_TO_PTR_EDX add dword ptr [edx], ecx
#define ADD_ECX_TO_PTR_EDI add dword ptr [edi], ecx
#define ADD_ECX_TO_PTR_ESI add dword ptr [esi], ecx
#define ADD_ECX_TO_PTR_EBP add dword ptr [ebp], ecx
#define ADD_ECX_TO_PTR_ESP add dword ptr [esp], ecx
#define ADD_ECX_TO_PTR_BX add dword ptr [bx], ecx
#define ADD_ECX_TO_PTR_BP add dword ptr [bp], ecx
#define ADD_ECX_TO_PTR_SI add dword ptr [si], ecx
#define ADD_ECX_TO_PTR_DI add dword ptr [di], ecx

#define ADD_EDX_TO_PTR_EAX add dword ptr [eax], edx
#define ADD_EDX_TO_PTR_EBX add dword ptr [ebx], edx
#define ADD_EDX_TO_PTR_ECX add dword ptr [ecx], edx
#define ADD_EDX_TO_PTR_EDX add dword ptr [edx], edx
#define ADD_EDX_TO_PTR_EDI add dword ptr [edi], edx
#define ADD_EDX_TO_PTR_ESI add dword ptr [esi], edx
#define ADD_EDX_TO_PTR_EBP add dword ptr [ebp], edx
#define ADD_EDX_TO_PTR_ESP add dword ptr [esp], edx
#define ADD_EDX_TO_PTR_BX add dword ptr [bx], edx
#define ADD_EDX_TO_PTR_BP add dword ptr [bp], edx
#define ADD_EDX_TO_PTR_SI add dword ptr [si], edx
#define ADD_EDX_TO_PTR_DI add dword ptr [di], edx

#define ADD_EDI_TO_PTR_EAX add dword ptr [eax], edi
#define ADD_EDI_TO_PTR_EBX add dword ptr [ebx], edi
#define ADD_EDI_TO_PTR_ECX add dword ptr [ecx], edi
#define ADD_EDI_TO_PTR_EDX add dword ptr [edx], edi
#define ADD_EDI_TO_PTR_EDI add dword ptr [edi], edi
#define ADD_EDI_TO_PTR_ESI add dword ptr [esi], edi
#define ADD_EDI_TO_PTR_EBP add dword ptr [ebp], edi
#define ADD_EDI_TO_PTR_ESP add dword ptr [esp], edi
#define ADD_EDI_TO_PTR_BX add dword ptr [bx], edi
#define ADD_EDI_TO_PTR_BP add dword ptr [bp], edi
#define ADD_EDI_TO_PTR_SI add dword ptr [si], edi
#define ADD_EDI_TO_PTR_DI add dword ptr [di], edi

#define ADD_ESI_TO_PTR_EAX add dword ptr [eax], esi
#define ADD_ESI_TO_PTR_EBX add dword ptr [ebx], esi
#define ADD_ESI_TO_PTR_ECX add dword ptr [ecx], esi
#define ADD_ESI_TO_PTR_EDX add dword ptr [edx], esi
#define ADD_ESI_TO_PTR_EDI add dword ptr [edi], esi
#define ADD_ESI_TO_PTR_ESI add dword ptr [esi], esi
#define ADD_ESI_TO_PTR_EBP add dword ptr [ebp], esi
#define ADD_ESI_TO_PTR_ESP add dword ptr [esp], esi
#define ADD_ESI_TO_PTR_BX add dword ptr [bx], esi
#define ADD_ESI_TO_PTR_BP add dword ptr [bp], esi
#define ADD_ESI_TO_PTR_SI add dword ptr [si], esi
#define ADD_ESI_TO_PTR_DI add dword ptr [di], esi

#define ADD_EBP_TO_PTR_EAX add dword ptr [eax], ebp
#define ADD_EBP_TO_PTR_EBX add dword ptr [ebx], ebp
#define ADD_EBP_TO_PTR_ECX add dword ptr [ecx], ebp
#define ADD_EBP_TO_PTR_EDX add dword ptr [edx], ebp
#define ADD_EBP_TO_PTR_EDI add dword ptr [edi], ebp
#define ADD_EBP_TO_PTR_ESI add dword ptr [esi], ebp
#define ADD_EBP_TO_PTR_EBP add dword ptr [ebp], ebp
#define ADD_EBP_TO_PTR_ESP add dword ptr [esp], ebp
#define ADD_EBP_TO_PTR_BX add dword ptr [bx], ebp
#define ADD_EBP_TO_PTR_BP add dword ptr [bp], ebp
#define ADD_EBP_TO_PTR_SI add dword ptr [si], ebp
#define ADD_EBP_TO_PTR_DI add dword ptr [di], ebp

#define ADD_ESP_TO_PTR_EAX add dword ptr [eax], esp
#define ADD_ESP_TO_PTR_EBX add dword ptr [ebx], esp
#define ADD_ESP_TO_PTR_ECX add dword ptr [ecx], esp
#define ADD_ESP_TO_PTR_EDX add dword ptr [edx], esp
#define ADD_ESP_TO_PTR_EDI add dword ptr [edi], esp
#define ADD_ESP_TO_PTR_ESI add dword ptr [esi], esp
#define ADD_ESP_TO_PTR_EBP add dword ptr [ebp], esp
#define ADD_ESP_TO_PTR_ESP add dword ptr [esp], esp
#define ADD_ESP_TO_PTR_BX add dword ptr [bx], esp
#define ADD_ESP_TO_PTR_BP add dword ptr [bp], esp
#define ADD_ESP_TO_PTR_SI add dword ptr [si], esp
#define ADD_ESP_TO_PTR_DI add dword ptr [di], esp

#define ADD_EAX_FROM_PTR_EAX_(VALUE) add eax, dword ptr [eax + VALUE]
#define ADD_EAX_FROM_PTR_EBX_(VALUE) add eax, dword ptr [ebx + VALUE]
#define ADD_EAX_FROM_PTR_ECX_(VALUE) add eax, dword ptr [ecx + VALUE]
#define ADD_EAX_FROM_PTR_EDX_(VALUE) add eax, dword ptr [edx + VALUE]
#define ADD_EAX_FROM_PTR_EDI_(VALUE) add eax, dword ptr [edi + VALUE]
#define ADD_EAX_FROM_PTR_ESI_(VALUE) add eax, dword ptr [esi + VALUE]
#define ADD_EAX_FROM_PTR_EBP_(VALUE) add eax, dword ptr [ebp + VALUE]
#define ADD_EAX_FROM_PTR_ESP_(VALUE) add eax, dword ptr [esp + VALUE]
#define ADD_EAX_FROM_PTR_BX_(VALUE) add eax, dword ptr [bx + VALUE]
#define ADD_EAX_FROM_PTR_BP_(VALUE) add eax, dword ptr [bp + VALUE]
#define ADD_EAX_FROM_PTR_SI_(VALUE) add eax, dword ptr [si + VALUE]
#define ADD_EAX_FROM_PTR_DI_(VALUE) add eax, dword ptr [di + VALUE]

#define ADD_EBX_FROM_PTR_EAX_(VALUE) add ebx, dword ptr [eax + VALUE]
#define ADD_EBX_FROM_PTR_EBX_(VALUE) add ebx, dword ptr [ebx + VALUE]
#define ADD_EBX_FROM_PTR_ECX_(VALUE) add ebx, dword ptr [ecx + VALUE]
#define ADD_EBX_FROM_PTR_EDX_(VALUE) add ebx, dword ptr [edx + VALUE]
#define ADD_EBX_FROM_PTR_EDI_(VALUE) add ebx, dword ptr [edi + VALUE]
#define ADD_EBX_FROM_PTR_ESI_(VALUE) add ebx, dword ptr [esi + VALUE]
#define ADD_EBX_FROM_PTR_EBP_(VALUE) add ebx, dword ptr [ebp + VALUE]
#define ADD_EBX_FROM_PTR_ESP_(VALUE) add ebx, dword ptr [esp + VALUE]
#define ADD_EBX_FROM_PTR_BX_(VALUE) add ebx, dword ptr [bx + VALUE]
#define ADD_EBX_FROM_PTR_BP_(VALUE) add ebx, dword ptr [bp + VALUE]
#define ADD_EBX_FROM_PTR_SI_(VALUE) add ebx, dword ptr [si + VALUE]
#define ADD_EBX_FROM_PTR_DI_(VALUE) add ebx, dword ptr [di + VALUE]

#define ADD_ECX_FROM_PTR_EAX_(VALUE) add ecx, dword ptr [eax + VALUE]
#define ADD_ECX_FROM_PTR_EBX_(VALUE) add ecx, dword ptr [ebx + VALUE]
#define ADD_ECX_FROM_PTR_ECX_(VALUE) add ecx, dword ptr [ecx + VALUE]
#define ADD_ECX_FROM_PTR_EDX_(VALUE) add ecx, dword ptr [edx + VALUE]
#define ADD_ECX_FROM_PTR_EDI_(VALUE) add ecx, dword ptr [edi + VALUE]
#define ADD_ECX_FROM_PTR_ESI_(VALUE) add ecx, dword ptr [esi + VALUE]
#define ADD_ECX_FROM_PTR_EBP_(VALUE) add ecx, dword ptr [ebp + VALUE]
#define ADD_ECX_FROM_PTR_ESP_(VALUE) add ecx, dword ptr [esp + VALUE]
#define ADD_ECX_FROM_PTR_BX_(VALUE) add ecx, dword ptr [bx + VALUE]
#define ADD_ECX_FROM_PTR_BP_(VALUE) add ecx, dword ptr [bp + VALUE]
#define ADD_ECX_FROM_PTR_SI_(VALUE) add ecx, dword ptr [si + VALUE]
#define ADD_ECX_FROM_PTR_DI_(VALUE) add ecx, dword ptr [di + VALUE]

#define ADD_EDX_FROM_PTR_EAX_(VALUE) add edx, dword ptr [eax + VALUE]
#define ADD_EDX_FROM_PTR_EBX_(VALUE) add edx, dword ptr [ebx + VALUE]
#define ADD_EDX_FROM_PTR_ECX_(VALUE) add edx, dword ptr [ecx + VALUE]
#define ADD_EDX_FROM_PTR_EDX_(VALUE) add edx, dword ptr [edx + VALUE]
#define ADD_EDX_FROM_PTR_EDI_(VALUE) add edx, dword ptr [edi + VALUE]
#define ADD_EDX_FROM_PTR_ESI_(VALUE) add edx, dword ptr [esi + VALUE]
#define ADD_EDX_FROM_PTR_EBP_(VALUE) add edx, dword ptr [ebp + VALUE]
#define ADD_EDX_FROM_PTR_ESP_(VALUE) add edx, dword ptr [esp + VALUE]
#define ADD_EDX_FROM_PTR_BX_(VALUE) add edx, dword ptr [bx + VALUE]
#define ADD_EDX_FROM_PTR_BP_(VALUE) add edx, dword ptr [bp + VALUE]
#define ADD_EDX_FROM_PTR_SI_(VALUE) add edx, dword ptr [si + VALUE]
#define ADD_EDX_FROM_PTR_DI_(VALUE) add edx, dword ptr [di + VALUE]

#define ADD_EDI_FROM_PTR_EAX_(VALUE) add edi, dword ptr [eax + VALUE]
#define ADD_EDI_FROM_PTR_EBX_(VALUE) add edi, dword ptr [ebx + VALUE]
#define ADD_EDI_FROM_PTR_ECX_(VALUE) add edi, dword ptr [ecx + VALUE]
#define ADD_EDI_FROM_PTR_EDX_(VALUE) add edi, dword ptr [edx + VALUE]
#define ADD_EDI_FROM_PTR_EDI_(VALUE) add edi, dword ptr [edi + VALUE]
#define ADD_EDI_FROM_PTR_ESI_(VALUE) add edi, dword ptr [esi + VALUE]
#define ADD_EDI_FROM_PTR_EBP_(VALUE) add edi, dword ptr [ebp + VALUE]
#define ADD_EDI_FROM_PTR_ESP_(VALUE) add edi, dword ptr [esp + VALUE]
#define ADD_EDI_FROM_PTR_BX_(VALUE) add edi, dword ptr [bx + VALUE]
#define ADD_EDI_FROM_PTR_BP_(VALUE) add edi, dword ptr [bp + VALUE]
#define ADD_EDI_FROM_PTR_SI_(VALUE) add edi, dword ptr [si + VALUE]
#define ADD_EDI_FROM_PTR_DI_(VALUE) add edi, dword ptr [di + VALUE]

#define ADD_ESI_FROM_PTR_EAX_(VALUE) add esi, dword ptr [eax + VALUE]
#define ADD_ESI_FROM_PTR_EBX_(VALUE) add esi, dword ptr [ebx + VALUE]
#define ADD_ESI_FROM_PTR_ECX_(VALUE) add esi, dword ptr [ecx + VALUE]
#define ADD_ESI_FROM_PTR_EDX_(VALUE) add esi, dword ptr [edx + VALUE]
#define ADD_ESI_FROM_PTR_EDI_(VALUE) add esi, dword ptr [edi + VALUE]
#define ADD_ESI_FROM_PTR_ESI_(VALUE) add esi, dword ptr [esi + VALUE]
#define ADD_ESI_FROM_PTR_EBP_(VALUE) add esi, dword ptr [ebp + VALUE]
#define ADD_ESI_FROM_PTR_ESP_(VALUE) add esi, dword ptr [esp + VALUE]
#define ADD_ESI_FROM_PTR_BX_(VALUE) add esi, dword ptr [bx + VALUE]
#define ADD_ESI_FROM_PTR_BP_(VALUE) add esi, dword ptr [bp + VALUE]
#define ADD_ESI_FROM_PTR_SI_(VALUE) add esi, dword ptr [si + VALUE]
#define ADD_ESI_FROM_PTR_DI_(VALUE) add esi, dword ptr [di + VALUE]

#define ADD_EBP_FROM_PTR_EAX_(VALUE) add ebp, dword ptr [eax + VALUE]
#define ADD_EBP_FROM_PTR_EBX_(VALUE) add ebp, dword ptr [ebx + VALUE]
#define ADD_EBP_FROM_PTR_ECX_(VALUE) add ebp, dword ptr [ecx + VALUE]
#define ADD_EBP_FROM_PTR_EDX_(VALUE) add ebp, dword ptr [edx + VALUE]
#define ADD_EBP_FROM_PTR_EDI_(VALUE) add ebp, dword ptr [edi + VALUE]
#define ADD_EBP_FROM_PTR_ESI_(VALUE) add ebp, dword ptr [esi + VALUE]
#define ADD_EBP_FROM_PTR_EBP_(VALUE) add ebp, dword ptr [ebp + VALUE]
#define ADD_EBP_FROM_PTR_ESP_(VALUE) add ebp, dword ptr [esp + VALUE]
#define ADD_EBP_FROM_PTR_BX_(VALUE) add ebp, dword ptr [bx + VALUE]
#define ADD_EBP_FROM_PTR_BP_(VALUE) add ebp, dword ptr [bp + VALUE]
#define ADD_EBP_FROM_PTR_SI_(VALUE) add ebp, dword ptr [si + VALUE]
#define ADD_EBP_FROM_PTR_DI_(VALUE) add ebp, dword ptr [di + VALUE]

#define ADD_ESP_FROM_PTR_EAX_(VALUE) add esp, dword ptr [eax + VALUE]
#define ADD_ESP_FROM_PTR_EBX_(VALUE) add esp, dword ptr [ebx + VALUE]
#define ADD_ESP_FROM_PTR_ECX_(VALUE) add esp, dword ptr [ecx + VALUE]
#define ADD_ESP_FROM_PTR_EDX_(VALUE) add esp, dword ptr [edx + VALUE]
#define ADD_ESP_FROM_PTR_EDI_(VALUE) add esp, dword ptr [edi + VALUE]
#define ADD_ESP_FROM_PTR_ESI_(VALUE) add esp, dword ptr [esi + VALUE]
#define ADD_ESP_FROM_PTR_EBP_(VALUE) add esp, dword ptr [ebp + VALUE]
#define ADD_ESP_FROM_PTR_ESP_(VALUE) add esp, dword ptr [esp + VALUE]
#define ADD_ESP_FROM_PTR_BX_(VALUE) add esp, dword ptr [bx + VALUE]
#define ADD_ESP_FROM_PTR_BP_(VALUE) add esp, dword ptr [bp + VALUE]
#define ADD_ESP_FROM_PTR_SI_(VALUE) add esp, dword ptr [si + VALUE]
#define ADD_ESP_FROM_PTR_DI_(VALUE) add esp, dword ptr [di + VALUE]

#define ADD_EAX_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], eax
#define ADD_EAX_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], eax
#define ADD_EAX_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], eax
#define ADD_EAX_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], eax
#define ADD_EAX_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], eax
#define ADD_EAX_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], eax
#define ADD_EAX_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], eax
#define ADD_EAX_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], eax
#define ADD_EAX_TO_PTR_BX_(VALUE) add dword ptr [bx + VALUE], eax
#define ADD_EAX_TO_PTR_BP_(VALUE) add dword ptr [bp + VALUE], eax
#define ADD_EAX_TO_PTR_SI_(VALUE) add dword ptr [si + VALUE], eax
#define ADD_EAX_TO_PTR_DI_(VALUE) add dword ptr [di + VALUE], eax

#define ADD_EBX_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], ebx
#define ADD_EBX_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], ebx
#define ADD_EBX_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], ebx
#define ADD_EBX_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], ebx
#define ADD_EBX_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], ebx
#define ADD_EBX_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], ebx
#define ADD_EBX_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], ebx
#define ADD_EBX_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], ebx
#define ADD_EBX_TO_PTR_BX_(VALUE) add dword ptr [bx + VALUE], ebx
#define ADD_EBX_TO_PTR_BP_(VALUE) add dword ptr [bp + VALUE], ebx
#define ADD_EBX_TO_PTR_SI_(VALUE) add dword ptr [si + VALUE], ebx
#define ADD_EBX_TO_PTR_DI_(VALUE) add dword ptr [di + VALUE], ebx

#define ADD_ECX_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], ecx
#define ADD_ECX_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], ecx
#define ADD_ECX_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], ecx
#define ADD_ECX_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], ecx
#define ADD_ECX_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], ecx
#define ADD_ECX_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], ecx
#define ADD_ECX_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], ecx
#define ADD_ECX_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], ecx
#define ADD_ECX_TO_PTR_BX_(VALUE) add dword ptr [bx + VALUE], ecx
#define ADD_ECX_TO_PTR_BP_(VALUE) add dword ptr [bp + VALUE], ecx
#define ADD_ECX_TO_PTR_SI_(VALUE) add dword ptr [si + VALUE], ecx
#define ADD_ECX_TO_PTR_DI_(VALUE) add dword ptr [di + VALUE], ecx

#define ADD_EDX_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], edx
#define ADD_EDX_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], edx
#define ADD_EDX_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], edx
#define ADD_EDX_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], edx
#define ADD_EDX_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], edx
#define ADD_EDX_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], edx
#define ADD_EDX_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], edx
#define ADD_EDX_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], edx
#define ADD_EDX_TO_PTR_BX_(VALUE) add dword ptr [bx + VALUE], edx
#define ADD_EDX_TO_PTR_BP_(VALUE) add dword ptr [bp + VALUE], edx
#define ADD_EDX_TO_PTR_SI_(VALUE) add dword ptr [si + VALUE], edx
#define ADD_EDX_TO_PTR_DI_(VALUE) add dword ptr [di + VALUE], edx

#define ADD_EDI_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], edi
#define ADD_EDI_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], edi
#define ADD_EDI_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], edi
#define ADD_EDI_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], edi
#define ADD_EDI_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], edi
#define ADD_EDI_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], edi
#define ADD_EDI_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], edi
#define ADD_EDI_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], edi
#define ADD_EDI_TO_PTR_BX_(VALUE) add dword ptr [bx + VALUE], edi
#define ADD_EDI_TO_PTR_BP_(VALUE) add dword ptr [bp + VALUE], edi
#define ADD_EDI_TO_PTR_SI_(VALUE) add dword ptr [si + VALUE], edi
#define ADD_EDI_TO_PTR_DI_(VALUE) add dword ptr [di + VALUE], edi

#define ADD_ESI_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], esi
#define ADD_ESI_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], esi
#define ADD_ESI_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], esi
#define ADD_ESI_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], esi
#define ADD_ESI_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], esi
#define ADD_ESI_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], esi
#define ADD_ESI_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], esi
#define ADD_ESI_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], esi
#define ADD_ESI_TO_PTR_BX_(VALUE) add dword ptr [bx + VALUE], esi
#define ADD_ESI_TO_PTR_BP_(VALUE) add dword ptr [bp + VALUE], esi
#define ADD_ESI_TO_PTR_SI_(VALUE) add dword ptr [si + VALUE], esi
#define ADD_ESI_TO_PTR_DI_(VALUE) add dword ptr [di + VALUE], esi

#define ADD_EBP_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], ebp
#define ADD_EBP_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], ebp
#define ADD_EBP_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], ebp
#define ADD_EBP_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], ebp
#define ADD_EBP_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], ebp
#define ADD_EBP_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], ebp
#define ADD_EBP_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], ebp
#define ADD_EBP_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], ebp
#define ADD_EBP_TO_PTR_BX_(VALUE) add dword ptr [bx + VALUE], ebp
#define ADD_EBP_TO_PTR_BP_(VALUE) add dword ptr [bp + VALUE], ebp
#define ADD_EBP_TO_PTR_SI_(VALUE) add dword ptr [si + VALUE], ebp
#define ADD_EBP_TO_PTR_DI_(VALUE) add dword ptr [di + VALUE], ebp

#define ADD_ESP_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], esp
#define ADD_ESP_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], esp
#define ADD_ESP_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], esp
#define ADD_ESP_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], esp
#define ADD_ESP_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], esp
#define ADD_ESP_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], esp
#define ADD_ESP_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], esp
#define ADD_ESP_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], esp
#define ADD_ESP_TO_PTR_BX_(VALUE) add dword ptr [bx + VALUE], esp
#define ADD_ESP_TO_PTR_BP_(VALUE) add dword ptr [bp + VALUE], esp
#define ADD_ESP_TO_PTR_SI_(VALUE) add dword ptr [si + VALUE], esp
#define ADD_ESP_TO_PTR_DI_(VALUE) add dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_EAX_FROM_PTR_(VALUE) add eax, dword ptr [VALUE]
#define ADD_EBX_FROM_PTR_(VALUE) add ebx, dword ptr [VALUE]
#define ADD_ECX_FROM_PTR_(VALUE) add ecx, dword ptr [VALUE]
#define ADD_EDX_FROM_PTR_(VALUE) add edx, dword ptr [VALUE]
#define ADD_EDI_FROM_PTR_(VALUE) add edi, dword ptr [VALUE]
#define ADD_ESI_FROM_PTR_(VALUE) add esi, dword ptr [VALUE]
#define ADD_EBP_FROM_PTR_(VALUE) add ebp, dword ptr [VALUE]
#define ADD_ESP_FROM_PTR_(VALUE) add esp, dword ptr [VALUE]
#define ADD_R8D_FROM_PTR_(VALUE) add r8d, dword ptr [VALUE]
#define ADD_R9D_FROM_PTR_(VALUE) add r9d, dword ptr [VALUE]
#define ADD_R10D_FROM_PTR_(VALUE) add r10d, dword ptr [VALUE]
#define ADD_R11D_FROM_PTR_(VALUE) add r11d, dword ptr [VALUE]
#define ADD_R12D_FROM_PTR_(VALUE) add r12d, dword ptr [VALUE]
#define ADD_R13D_FROM_PTR_(VALUE) add r13d, dword ptr [VALUE]
#define ADD_R14D_FROM_PTR_(VALUE) add r14d, dword ptr [VALUE]
#define ADD_R15D_FROM_PTR_(VALUE) add r15d, dword ptr [VALUE]

#define ADD_EAX_TO_PTR_(VALUE) add dword ptr [VALUE], eax
#define ADD_EBX_TO_PTR_(VALUE) add dword ptr [VALUE], ebx
#define ADD_ECX_TO_PTR_(VALUE) add dword ptr [VALUE], ecx
#define ADD_EDX_TO_PTR_(VALUE) add dword ptr [VALUE], edx
#define ADD_EDI_TO_PTR_(VALUE) add dword ptr [VALUE], edi
#define ADD_ESI_TO_PTR_(VALUE) add dword ptr [VALUE], esi
#define ADD_EBP_TO_PTR_(VALUE) add dword ptr [VALUE], ebp
#define ADD_ESP_TO_PTR_(VALUE) add dword ptr [VALUE], esp
#define ADD_R8D_TO_PTR_(VALUE) add dword ptr [VALUE], r8d
#define ADD_R9D_TO_PTR_(VALUE) add dword ptr [VALUE], r9d
#define ADD_R10D_TO_PTR_(VALUE) add dword ptr [VALUE], r10d
#define ADD_R11D_TO_PTR_(VALUE) add dword ptr [VALUE], r11d
#define ADD_R12D_TO_PTR_(VALUE) add dword ptr [VALUE], r12d
#define ADD_R13D_TO_PTR_(VALUE) add dword ptr [VALUE], r13d
#define ADD_R14D_TO_PTR_(VALUE) add dword ptr [VALUE], r14d
#define ADD_R15D_TO_PTR_(VALUE) add dword ptr [VALUE], r15d

#define ADD_EAX_FROM_PTR_RAX add eax, dword ptr [rax]
#define ADD_EAX_FROM_PTR_RBX add eax, dword ptr [rbx]
#define ADD_EAX_FROM_PTR_RCX add eax, dword ptr [rcx]
#define ADD_EAX_FROM_PTR_RDX add eax, dword ptr [rdx]
#define ADD_EAX_FROM_PTR_RDI add eax, dword ptr [rdi]
#define ADD_EAX_FROM_PTR_RSI add eax, dword ptr [rsi]
#define ADD_EAX_FROM_PTR_RBP add eax, dword ptr [rbp]
#define ADD_EAX_FROM_PTR_RSP add eax, dword ptr [rsp]
#define ADD_EAX_FROM_PTR_R8 add eax, dword ptr [r8]
#define ADD_EAX_FROM_PTR_R9 add eax, dword ptr [r9]
#define ADD_EAX_FROM_PTR_R10 add eax, dword ptr [r10]
#define ADD_EAX_FROM_PTR_R11 add eax, dword ptr [r11]
#define ADD_EAX_FROM_PTR_R12 add eax, dword ptr [r12]
#define ADD_EAX_FROM_PTR_R13 add eax, dword ptr [r13]
#define ADD_EAX_FROM_PTR_R14 add eax, dword ptr [r14]
#define ADD_EAX_FROM_PTR_R15 add eax, dword ptr [r15]
#define ADD_EAX_FROM_PTR_EAX add eax, dword ptr [eax]
#define ADD_EAX_FROM_PTR_EBX add eax, dword ptr [ebx]
#define ADD_EAX_FROM_PTR_ECX add eax, dword ptr [ecx]
#define ADD_EAX_FROM_PTR_EDX add eax, dword ptr [edx]
#define ADD_EAX_FROM_PTR_EDI add eax, dword ptr [edi]
#define ADD_EAX_FROM_PTR_ESI add eax, dword ptr [esi]
#define ADD_EAX_FROM_PTR_EBP add eax, dword ptr [ebp]
#define ADD_EAX_FROM_PTR_ESP add eax, dword ptr [esp]

#define ADD_EBX_FROM_PTR_RAX add ebx, dword ptr [rax]
#define ADD_EBX_FROM_PTR_RBX add ebx, dword ptr [rbx]
#define ADD_EBX_FROM_PTR_RCX add ebx, dword ptr [rcx]
#define ADD_EBX_FROM_PTR_RDX add ebx, dword ptr [rdx]
#define ADD_EBX_FROM_PTR_RDI add ebx, dword ptr [rdi]
#define ADD_EBX_FROM_PTR_RSI add ebx, dword ptr [rsi]
#define ADD_EBX_FROM_PTR_RBP add ebx, dword ptr [rbp]
#define ADD_EBX_FROM_PTR_RSP add ebx, dword ptr [rsp]
#define ADD_EBX_FROM_PTR_R8 add ebx, dword ptr [r8]
#define ADD_EBX_FROM_PTR_R9 add ebx, dword ptr [r9]
#define ADD_EBX_FROM_PTR_R10 add ebx, dword ptr [r10]
#define ADD_EBX_FROM_PTR_R11 add ebx, dword ptr [r11]
#define ADD_EBX_FROM_PTR_R12 add ebx, dword ptr [r12]
#define ADD_EBX_FROM_PTR_R13 add ebx, dword ptr [r13]
#define ADD_EBX_FROM_PTR_R14 add ebx, dword ptr [r14]
#define ADD_EBX_FROM_PTR_R15 add ebx, dword ptr [r15]
#define ADD_EBX_FROM_PTR_EAX add ebx, dword ptr [eax]
#define ADD_EBX_FROM_PTR_EBX add ebx, dword ptr [ebx]
#define ADD_EBX_FROM_PTR_ECX add ebx, dword ptr [ecx]
#define ADD_EBX_FROM_PTR_EDX add ebx, dword ptr [edx]
#define ADD_EBX_FROM_PTR_EDI add ebx, dword ptr [edi]
#define ADD_EBX_FROM_PTR_ESI add ebx, dword ptr [esi]
#define ADD_EBX_FROM_PTR_EBP add ebx, dword ptr [ebp]
#define ADD_EBX_FROM_PTR_ESP add ebx, dword ptr [esp]

#define ADD_ECX_FROM_PTR_RAX add ecx, dword ptr [rax]
#define ADD_ECX_FROM_PTR_RBX add ecx, dword ptr [rbx]
#define ADD_ECX_FROM_PTR_RCX add ecx, dword ptr [rcx]
#define ADD_ECX_FROM_PTR_RDX add ecx, dword ptr [rdx]
#define ADD_ECX_FROM_PTR_RDI add ecx, dword ptr [rdi]
#define ADD_ECX_FROM_PTR_RSI add ecx, dword ptr [rsi]
#define ADD_ECX_FROM_PTR_RBP add ecx, dword ptr [rbp]
#define ADD_ECX_FROM_PTR_RSP add ecx, dword ptr [rsp]
#define ADD_ECX_FROM_PTR_R8 add ecx, dword ptr [r8]
#define ADD_ECX_FROM_PTR_R9 add ecx, dword ptr [r9]
#define ADD_ECX_FROM_PTR_R10 add ecx, dword ptr [r10]
#define ADD_ECX_FROM_PTR_R11 add ecx, dword ptr [r11]
#define ADD_ECX_FROM_PTR_R12 add ecx, dword ptr [r12]
#define ADD_ECX_FROM_PTR_R13 add ecx, dword ptr [r13]
#define ADD_ECX_FROM_PTR_R14 add ecx, dword ptr [r14]
#define ADD_ECX_FROM_PTR_R15 add ecx, dword ptr [r15]
#define ADD_ECX_FROM_PTR_EAX add ecx, dword ptr [eax]
#define ADD_ECX_FROM_PTR_EBX add ecx, dword ptr [ebx]
#define ADD_ECX_FROM_PTR_ECX add ecx, dword ptr [ecx]
#define ADD_ECX_FROM_PTR_EDX add ecx, dword ptr [edx]
#define ADD_ECX_FROM_PTR_EDI add ecx, dword ptr [edi]
#define ADD_ECX_FROM_PTR_ESI add ecx, dword ptr [esi]
#define ADD_ECX_FROM_PTR_EBP add ecx, dword ptr [ebp]
#define ADD_ECX_FROM_PTR_ESP add ecx, dword ptr [esp]

#define ADD_EDX_FROM_PTR_RAX add edx, dword ptr [rax]
#define ADD_EDX_FROM_PTR_RBX add edx, dword ptr [rbx]
#define ADD_EDX_FROM_PTR_RCX add edx, dword ptr [rcx]
#define ADD_EDX_FROM_PTR_RDX add edx, dword ptr [rdx]
#define ADD_EDX_FROM_PTR_RDI add edx, dword ptr [rdi]
#define ADD_EDX_FROM_PTR_RSI add edx, dword ptr [rsi]
#define ADD_EDX_FROM_PTR_RBP add edx, dword ptr [rbp]
#define ADD_EDX_FROM_PTR_RSP add edx, dword ptr [rsp]
#define ADD_EDX_FROM_PTR_R8 add edx, dword ptr [r8]
#define ADD_EDX_FROM_PTR_R9 add edx, dword ptr [r9]
#define ADD_EDX_FROM_PTR_R10 add edx, dword ptr [r10]
#define ADD_EDX_FROM_PTR_R11 add edx, dword ptr [r11]
#define ADD_EDX_FROM_PTR_R12 add edx, dword ptr [r12]
#define ADD_EDX_FROM_PTR_R13 add edx, dword ptr [r13]
#define ADD_EDX_FROM_PTR_R14 add edx, dword ptr [r14]
#define ADD_EDX_FROM_PTR_R15 add edx, dword ptr [r15]
#define ADD_EDX_FROM_PTR_EAX add edx, dword ptr [eax]
#define ADD_EDX_FROM_PTR_EBX add edx, dword ptr [ebx]
#define ADD_EDX_FROM_PTR_ECX add edx, dword ptr [ecx]
#define ADD_EDX_FROM_PTR_EDX add edx, dword ptr [edx]
#define ADD_EDX_FROM_PTR_EDI add edx, dword ptr [edi]
#define ADD_EDX_FROM_PTR_ESI add edx, dword ptr [esi]
#define ADD_EDX_FROM_PTR_EBP add edx, dword ptr [ebp]
#define ADD_EDX_FROM_PTR_ESP add edx, dword ptr [esp]

#define ADD_EDI_FROM_PTR_RAX add edi, dword ptr [rax]
#define ADD_EDI_FROM_PTR_RBX add edi, dword ptr [rbx]
#define ADD_EDI_FROM_PTR_RCX add edi, dword ptr [rcx]
#define ADD_EDI_FROM_PTR_RDX add edi, dword ptr [rdx]
#define ADD_EDI_FROM_PTR_RDI add edi, dword ptr [rdi]
#define ADD_EDI_FROM_PTR_RSI add edi, dword ptr [rsi]
#define ADD_EDI_FROM_PTR_RBP add edi, dword ptr [rbp]
#define ADD_EDI_FROM_PTR_RSP add edi, dword ptr [rsp]
#define ADD_EDI_FROM_PTR_R8 add edi, dword ptr [r8]
#define ADD_EDI_FROM_PTR_R9 add edi, dword ptr [r9]
#define ADD_EDI_FROM_PTR_R10 add edi, dword ptr [r10]
#define ADD_EDI_FROM_PTR_R11 add edi, dword ptr [r11]
#define ADD_EDI_FROM_PTR_R12 add edi, dword ptr [r12]
#define ADD_EDI_FROM_PTR_R13 add edi, dword ptr [r13]
#define ADD_EDI_FROM_PTR_R14 add edi, dword ptr [r14]
#define ADD_EDI_FROM_PTR_R15 add edi, dword ptr [r15]
#define ADD_EDI_FROM_PTR_EAX add edi, dword ptr [eax]
#define ADD_EDI_FROM_PTR_EBX add edi, dword ptr [ebx]
#define ADD_EDI_FROM_PTR_ECX add edi, dword ptr [ecx]
#define ADD_EDI_FROM_PTR_EDX add edi, dword ptr [edx]
#define ADD_EDI_FROM_PTR_EDI add edi, dword ptr [edi]
#define ADD_EDI_FROM_PTR_ESI add edi, dword ptr [esi]
#define ADD_EDI_FROM_PTR_EBP add edi, dword ptr [ebp]
#define ADD_EDI_FROM_PTR_ESP add edi, dword ptr [esp]

#define ADD_ESI_FROM_PTR_RAX add esi, dword ptr [rax]
#define ADD_ESI_FROM_PTR_RBX add esi, dword ptr [rbx]
#define ADD_ESI_FROM_PTR_RCX add esi, dword ptr [rcx]
#define ADD_ESI_FROM_PTR_RDX add esi, dword ptr [rdx]
#define ADD_ESI_FROM_PTR_RDI add esi, dword ptr [rdi]
#define ADD_ESI_FROM_PTR_RSI add esi, dword ptr [rsi]
#define ADD_ESI_FROM_PTR_RBP add esi, dword ptr [rbp]
#define ADD_ESI_FROM_PTR_RSP add esi, dword ptr [rsp]
#define ADD_ESI_FROM_PTR_R8 add esi, dword ptr [r8]
#define ADD_ESI_FROM_PTR_R9 add esi, dword ptr [r9]
#define ADD_ESI_FROM_PTR_R10 add esi, dword ptr [r10]
#define ADD_ESI_FROM_PTR_R11 add esi, dword ptr [r11]
#define ADD_ESI_FROM_PTR_R12 add esi, dword ptr [r12]
#define ADD_ESI_FROM_PTR_R13 add esi, dword ptr [r13]
#define ADD_ESI_FROM_PTR_R14 add esi, dword ptr [r14]
#define ADD_ESI_FROM_PTR_R15 add esi, dword ptr [r15]
#define ADD_ESI_FROM_PTR_EAX add esi, dword ptr [eax]
#define ADD_ESI_FROM_PTR_EBX add esi, dword ptr [ebx]
#define ADD_ESI_FROM_PTR_ECX add esi, dword ptr [ecx]
#define ADD_ESI_FROM_PTR_EDX add esi, dword ptr [edx]
#define ADD_ESI_FROM_PTR_EDI add esi, dword ptr [edi]
#define ADD_ESI_FROM_PTR_ESI add esi, dword ptr [esi]
#define ADD_ESI_FROM_PTR_EBP add esi, dword ptr [ebp]
#define ADD_ESI_FROM_PTR_ESP add esi, dword ptr [esp]

#define ADD_EBP_FROM_PTR_RAX add ebp, dword ptr [rax]
#define ADD_EBP_FROM_PTR_RBX add ebp, dword ptr [rbx]
#define ADD_EBP_FROM_PTR_RCX add ebp, dword ptr [rcx]
#define ADD_EBP_FROM_PTR_RDX add ebp, dword ptr [rdx]
#define ADD_EBP_FROM_PTR_RDI add ebp, dword ptr [rdi]
#define ADD_EBP_FROM_PTR_RSI add ebp, dword ptr [rsi]
#define ADD_EBP_FROM_PTR_RBP add ebp, dword ptr [rbp]
#define ADD_EBP_FROM_PTR_RSP add ebp, dword ptr [rsp]
#define ADD_EBP_FROM_PTR_R8 add ebp, dword ptr [r8]
#define ADD_EBP_FROM_PTR_R9 add ebp, dword ptr [r9]
#define ADD_EBP_FROM_PTR_R10 add ebp, dword ptr [r10]
#define ADD_EBP_FROM_PTR_R11 add ebp, dword ptr [r11]
#define ADD_EBP_FROM_PTR_R12 add ebp, dword ptr [r12]
#define ADD_EBP_FROM_PTR_R13 add ebp, dword ptr [r13]
#define ADD_EBP_FROM_PTR_R14 add ebp, dword ptr [r14]
#define ADD_EBP_FROM_PTR_R15 add ebp, dword ptr [r15]
#define ADD_EBP_FROM_PTR_EAX add ebp, dword ptr [eax]
#define ADD_EBP_FROM_PTR_EBX add ebp, dword ptr [ebx]
#define ADD_EBP_FROM_PTR_ECX add ebp, dword ptr [ecx]
#define ADD_EBP_FROM_PTR_EDX add ebp, dword ptr [edx]
#define ADD_EBP_FROM_PTR_EDI add ebp, dword ptr [edi]
#define ADD_EBP_FROM_PTR_ESI add ebp, dword ptr [esi]
#define ADD_EBP_FROM_PTR_EBP add ebp, dword ptr [ebp]
#define ADD_EBP_FROM_PTR_ESP add ebp, dword ptr [esp]

#define ADD_ESP_FROM_PTR_RAX add esp, dword ptr [rax]
#define ADD_ESP_FROM_PTR_RBX add esp, dword ptr [rbx]
#define ADD_ESP_FROM_PTR_RCX add esp, dword ptr [rcx]
#define ADD_ESP_FROM_PTR_RDX add esp, dword ptr [rdx]
#define ADD_ESP_FROM_PTR_RDI add esp, dword ptr [rdi]
#define ADD_ESP_FROM_PTR_RSI add esp, dword ptr [rsi]
#define ADD_ESP_FROM_PTR_RBP add esp, dword ptr [rbp]
#define ADD_ESP_FROM_PTR_RSP add esp, dword ptr [rsp]
#define ADD_ESP_FROM_PTR_R8 add esp, dword ptr [r8]
#define ADD_ESP_FROM_PTR_R9 add esp, dword ptr [r9]
#define ADD_ESP_FROM_PTR_R10 add esp, dword ptr [r10]
#define ADD_ESP_FROM_PTR_R11 add esp, dword ptr [r11]
#define ADD_ESP_FROM_PTR_R12 add esp, dword ptr [r12]
#define ADD_ESP_FROM_PTR_R13 add esp, dword ptr [r13]
#define ADD_ESP_FROM_PTR_R14 add esp, dword ptr [r14]
#define ADD_ESP_FROM_PTR_R15 add esp, dword ptr [r15]
#define ADD_ESP_FROM_PTR_EAX add esp, dword ptr [eax]
#define ADD_ESP_FROM_PTR_EBX add esp, dword ptr [ebx]
#define ADD_ESP_FROM_PTR_ECX add esp, dword ptr [ecx]
#define ADD_ESP_FROM_PTR_EDX add esp, dword ptr [edx]
#define ADD_ESP_FROM_PTR_EDI add esp, dword ptr [edi]
#define ADD_ESP_FROM_PTR_ESI add esp, dword ptr [esi]
#define ADD_ESP_FROM_PTR_EBP add esp, dword ptr [ebp]
#define ADD_ESP_FROM_PTR_ESP add esp, dword ptr [esp]

#define ADD_R8D_FROM_PTR_RAX add r8d, dword ptr [rax]
#define ADD_R8D_FROM_PTR_RBX add r8d, dword ptr [rbx]
#define ADD_R8D_FROM_PTR_RCX add r8d, dword ptr [rcx]
#define ADD_R8D_FROM_PTR_RDX add r8d, dword ptr [rdx]
#define ADD_R8D_FROM_PTR_RDI add r8d, dword ptr [rdi]
#define ADD_R8D_FROM_PTR_RSI add r8d, dword ptr [rsi]
#define ADD_R8D_FROM_PTR_RBP add r8d, dword ptr [rbp]
#define ADD_R8D_FROM_PTR_RSP add r8d, dword ptr [rsp]
#define ADD_R8D_FROM_PTR_R8 add r8d, dword ptr [r8]
#define ADD_R8D_FROM_PTR_R9 add r8d, dword ptr [r9]
#define ADD_R8D_FROM_PTR_R10 add r8d, dword ptr [r10]
#define ADD_R8D_FROM_PTR_R11 add r8d, dword ptr [r11]
#define ADD_R8D_FROM_PTR_R12 add r8d, dword ptr [r12]
#define ADD_R8D_FROM_PTR_R13 add r8d, dword ptr [r13]
#define ADD_R8D_FROM_PTR_R14 add r8d, dword ptr [r14]
#define ADD_R8D_FROM_PTR_R15 add r8d, dword ptr [r15]
#define ADD_R8D_FROM_PTR_EAX add r8d, dword ptr [eax]
#define ADD_R8D_FROM_PTR_EBX add r8d, dword ptr [ebx]
#define ADD_R8D_FROM_PTR_ECX add r8d, dword ptr [ecx]
#define ADD_R8D_FROM_PTR_EDX add r8d, dword ptr [edx]
#define ADD_R8D_FROM_PTR_EDI add r8d, dword ptr [edi]
#define ADD_R8D_FROM_PTR_ESI add r8d, dword ptr [esi]
#define ADD_R8D_FROM_PTR_EBP add r8d, dword ptr [ebp]
#define ADD_R8D_FROM_PTR_ESP add r8d, dword ptr [esp]

#define ADD_R9D_FROM_PTR_RAX add r9d, dword ptr [rax]
#define ADD_R9D_FROM_PTR_RBX add r9d, dword ptr [rbx]
#define ADD_R9D_FROM_PTR_RCX add r9d, dword ptr [rcx]
#define ADD_R9D_FROM_PTR_RDX add r9d, dword ptr [rdx]
#define ADD_R9D_FROM_PTR_RDI add r9d, dword ptr [rdi]
#define ADD_R9D_FROM_PTR_RSI add r9d, dword ptr [rsi]
#define ADD_R9D_FROM_PTR_RBP add r9d, dword ptr [rbp]
#define ADD_R9D_FROM_PTR_RSP add r9d, dword ptr [rsp]
#define ADD_R9D_FROM_PTR_R8 add r9d, dword ptr [r8]
#define ADD_R9D_FROM_PTR_R9 add r9d, dword ptr [r9]
#define ADD_R9D_FROM_PTR_R10 add r9d, dword ptr [r10]
#define ADD_R9D_FROM_PTR_R11 add r9d, dword ptr [r11]
#define ADD_R9D_FROM_PTR_R12 add r9d, dword ptr [r12]
#define ADD_R9D_FROM_PTR_R13 add r9d, dword ptr [r13]
#define ADD_R9D_FROM_PTR_R14 add r9d, dword ptr [r14]
#define ADD_R9D_FROM_PTR_R15 add r9d, dword ptr [r15]
#define ADD_R9D_FROM_PTR_EAX add r9d, dword ptr [eax]
#define ADD_R9D_FROM_PTR_EBX add r9d, dword ptr [ebx]
#define ADD_R9D_FROM_PTR_ECX add r9d, dword ptr [ecx]
#define ADD_R9D_FROM_PTR_EDX add r9d, dword ptr [edx]
#define ADD_R9D_FROM_PTR_EDI add r9d, dword ptr [edi]
#define ADD_R9D_FROM_PTR_ESI add r9d, dword ptr [esi]
#define ADD_R9D_FROM_PTR_EBP add r9d, dword ptr [ebp]
#define ADD_R9D_FROM_PTR_ESP add r9d, dword ptr [esp]

#define ADD_R10D_FROM_PTR_RAX add r10d, dword ptr [rax]
#define ADD_R10D_FROM_PTR_RBX add r10d, dword ptr [rbx]
#define ADD_R10D_FROM_PTR_RCX add r10d, dword ptr [rcx]
#define ADD_R10D_FROM_PTR_RDX add r10d, dword ptr [rdx]
#define ADD_R10D_FROM_PTR_RDI add r10d, dword ptr [rdi]
#define ADD_R10D_FROM_PTR_RSI add r10d, dword ptr [rsi]
#define ADD_R10D_FROM_PTR_RBP add r10d, dword ptr [rbp]
#define ADD_R10D_FROM_PTR_RSP add r10d, dword ptr [rsp]
#define ADD_R10D_FROM_PTR_R8 add r10d, dword ptr [r8]
#define ADD_R10D_FROM_PTR_R9 add r10d, dword ptr [r9]
#define ADD_R10D_FROM_PTR_R10 add r10d, dword ptr [r10]
#define ADD_R10D_FROM_PTR_R11 add r10d, dword ptr [r11]
#define ADD_R10D_FROM_PTR_R12 add r10d, dword ptr [r12]
#define ADD_R10D_FROM_PTR_R13 add r10d, dword ptr [r13]
#define ADD_R10D_FROM_PTR_R14 add r10d, dword ptr [r14]
#define ADD_R10D_FROM_PTR_R15 add r10d, dword ptr [r15]
#define ADD_R10D_FROM_PTR_EAX add r10d, dword ptr [eax]
#define ADD_R10D_FROM_PTR_EBX add r10d, dword ptr [ebx]
#define ADD_R10D_FROM_PTR_ECX add r10d, dword ptr [ecx]
#define ADD_R10D_FROM_PTR_EDX add r10d, dword ptr [edx]
#define ADD_R10D_FROM_PTR_EDI add r10d, dword ptr [edi]
#define ADD_R10D_FROM_PTR_ESI add r10d, dword ptr [esi]
#define ADD_R10D_FROM_PTR_EBP add r10d, dword ptr [ebp]
#define ADD_R10D_FROM_PTR_ESP add r10d, dword ptr [esp]

#define ADD_R11D_FROM_PTR_RAX add r11d, dword ptr [rax]
#define ADD_R11D_FROM_PTR_RBX add r11d, dword ptr [rbx]
#define ADD_R11D_FROM_PTR_RCX add r11d, dword ptr [rcx]
#define ADD_R11D_FROM_PTR_RDX add r11d, dword ptr [rdx]
#define ADD_R11D_FROM_PTR_RDI add r11d, dword ptr [rdi]
#define ADD_R11D_FROM_PTR_RSI add r11d, dword ptr [rsi]
#define ADD_R11D_FROM_PTR_RBP add r11d, dword ptr [rbp]
#define ADD_R11D_FROM_PTR_RSP add r11d, dword ptr [rsp]
#define ADD_R11D_FROM_PTR_R8 add r11d, dword ptr [r8]
#define ADD_R11D_FROM_PTR_R9 add r11d, dword ptr [r9]
#define ADD_R11D_FROM_PTR_R10 add r11d, dword ptr [r10]
#define ADD_R11D_FROM_PTR_R11 add r11d, dword ptr [r11]
#define ADD_R11D_FROM_PTR_R12 add r11d, dword ptr [r12]
#define ADD_R11D_FROM_PTR_R13 add r11d, dword ptr [r13]
#define ADD_R11D_FROM_PTR_R14 add r11d, dword ptr [r14]
#define ADD_R11D_FROM_PTR_R15 add r11d, dword ptr [r15]
#define ADD_R11D_FROM_PTR_EAX add r11d, dword ptr [eax]
#define ADD_R11D_FROM_PTR_EBX add r11d, dword ptr [ebx]
#define ADD_R11D_FROM_PTR_ECX add r11d, dword ptr [ecx]
#define ADD_R11D_FROM_PTR_EDX add r11d, dword ptr [edx]
#define ADD_R11D_FROM_PTR_EDI add r11d, dword ptr [edi]
#define ADD_R11D_FROM_PTR_ESI add r11d, dword ptr [esi]
#define ADD_R11D_FROM_PTR_EBP add r11d, dword ptr [ebp]
#define ADD_R11D_FROM_PTR_ESP add r11d, dword ptr [esp]

#define ADD_R12D_FROM_PTR_RAX add r12d, dword ptr [rax]
#define ADD_R12D_FROM_PTR_RBX add r12d, dword ptr [rbx]
#define ADD_R12D_FROM_PTR_RCX add r12d, dword ptr [rcx]
#define ADD_R12D_FROM_PTR_RDX add r12d, dword ptr [rdx]
#define ADD_R12D_FROM_PTR_RDI add r12d, dword ptr [rdi]
#define ADD_R12D_FROM_PTR_RSI add r12d, dword ptr [rsi]
#define ADD_R12D_FROM_PTR_RBP add r12d, dword ptr [rbp]
#define ADD_R12D_FROM_PTR_RSP add r12d, dword ptr [rsp]
#define ADD_R12D_FROM_PTR_R8 add r12d, dword ptr [r8]
#define ADD_R12D_FROM_PTR_R9 add r12d, dword ptr [r9]
#define ADD_R12D_FROM_PTR_R10 add r12d, dword ptr [r10]
#define ADD_R12D_FROM_PTR_R11 add r12d, dword ptr [r11]
#define ADD_R12D_FROM_PTR_R12 add r12d, dword ptr [r12]
#define ADD_R12D_FROM_PTR_R13 add r12d, dword ptr [r13]
#define ADD_R12D_FROM_PTR_R14 add r12d, dword ptr [r14]
#define ADD_R12D_FROM_PTR_R15 add r12d, dword ptr [r15]
#define ADD_R12D_FROM_PTR_EAX add r12d, dword ptr [eax]
#define ADD_R12D_FROM_PTR_EBX add r12d, dword ptr [ebx]
#define ADD_R12D_FROM_PTR_ECX add r12d, dword ptr [ecx]
#define ADD_R12D_FROM_PTR_EDX add r12d, dword ptr [edx]
#define ADD_R12D_FROM_PTR_EDI add r12d, dword ptr [edi]
#define ADD_R12D_FROM_PTR_ESI add r12d, dword ptr [esi]
#define ADD_R12D_FROM_PTR_EBP add r12d, dword ptr [ebp]
#define ADD_R12D_FROM_PTR_ESP add r12d, dword ptr [esp]

#define ADD_R13D_FROM_PTR_RAX add r13d, dword ptr [rax]
#define ADD_R13D_FROM_PTR_RBX add r13d, dword ptr [rbx]
#define ADD_R13D_FROM_PTR_RCX add r13d, dword ptr [rcx]
#define ADD_R13D_FROM_PTR_RDX add r13d, dword ptr [rdx]
#define ADD_R13D_FROM_PTR_RDI add r13d, dword ptr [rdi]
#define ADD_R13D_FROM_PTR_RSI add r13d, dword ptr [rsi]
#define ADD_R13D_FROM_PTR_RBP add r13d, dword ptr [rbp]
#define ADD_R13D_FROM_PTR_RSP add r13d, dword ptr [rsp]
#define ADD_R13D_FROM_PTR_R8 add r13d, dword ptr [r8]
#define ADD_R13D_FROM_PTR_R9 add r13d, dword ptr [r9]
#define ADD_R13D_FROM_PTR_R10 add r13d, dword ptr [r10]
#define ADD_R13D_FROM_PTR_R11 add r13d, dword ptr [r11]
#define ADD_R13D_FROM_PTR_R12 add r13d, dword ptr [r12]
#define ADD_R13D_FROM_PTR_R13 add r13d, dword ptr [r13]
#define ADD_R13D_FROM_PTR_R14 add r13d, dword ptr [r14]
#define ADD_R13D_FROM_PTR_R15 add r13d, dword ptr [r15]
#define ADD_R13D_FROM_PTR_EAX add r13d, dword ptr [eax]
#define ADD_R13D_FROM_PTR_EBX add r13d, dword ptr [ebx]
#define ADD_R13D_FROM_PTR_ECX add r13d, dword ptr [ecx]
#define ADD_R13D_FROM_PTR_EDX add r13d, dword ptr [edx]
#define ADD_R13D_FROM_PTR_EDI add r13d, dword ptr [edi]
#define ADD_R13D_FROM_PTR_ESI add r13d, dword ptr [esi]
#define ADD_R13D_FROM_PTR_EBP add r13d, dword ptr [ebp]
#define ADD_R13D_FROM_PTR_ESP add r13d, dword ptr [esp]

#define ADD_R14D_FROM_PTR_RAX add r14d, dword ptr [rax]
#define ADD_R14D_FROM_PTR_RBX add r14d, dword ptr [rbx]
#define ADD_R14D_FROM_PTR_RCX add r14d, dword ptr [rcx]
#define ADD_R14D_FROM_PTR_RDX add r14d, dword ptr [rdx]
#define ADD_R14D_FROM_PTR_RDI add r14d, dword ptr [rdi]
#define ADD_R14D_FROM_PTR_RSI add r14d, dword ptr [rsi]
#define ADD_R14D_FROM_PTR_RBP add r14d, dword ptr [rbp]
#define ADD_R14D_FROM_PTR_RSP add r14d, dword ptr [rsp]
#define ADD_R14D_FROM_PTR_R8 add r14d, dword ptr [r8]
#define ADD_R14D_FROM_PTR_R9 add r14d, dword ptr [r9]
#define ADD_R14D_FROM_PTR_R10 add r14d, dword ptr [r10]
#define ADD_R14D_FROM_PTR_R11 add r14d, dword ptr [r11]
#define ADD_R14D_FROM_PTR_R12 add r14d, dword ptr [r12]
#define ADD_R14D_FROM_PTR_R13 add r14d, dword ptr [r13]
#define ADD_R14D_FROM_PTR_R14 add r14d, dword ptr [r14]
#define ADD_R14D_FROM_PTR_R15 add r14d, dword ptr [r15]
#define ADD_R14D_FROM_PTR_EAX add r14d, dword ptr [eax]
#define ADD_R14D_FROM_PTR_EBX add r14d, dword ptr [ebx]
#define ADD_R14D_FROM_PTR_ECX add r14d, dword ptr [ecx]
#define ADD_R14D_FROM_PTR_EDX add r14d, dword ptr [edx]
#define ADD_R14D_FROM_PTR_EDI add r14d, dword ptr [edi]
#define ADD_R14D_FROM_PTR_ESI add r14d, dword ptr [esi]
#define ADD_R14D_FROM_PTR_EBP add r14d, dword ptr [ebp]
#define ADD_R14D_FROM_PTR_ESP add r14d, dword ptr [esp]

#define ADD_R15D_FROM_PTR_RAX add r15d, dword ptr [rax]
#define ADD_R15D_FROM_PTR_RBX add r15d, dword ptr [rbx]
#define ADD_R15D_FROM_PTR_RCX add r15d, dword ptr [rcx]
#define ADD_R15D_FROM_PTR_RDX add r15d, dword ptr [rdx]
#define ADD_R15D_FROM_PTR_RDI add r15d, dword ptr [rdi]
#define ADD_R15D_FROM_PTR_RSI add r15d, dword ptr [rsi]
#define ADD_R15D_FROM_PTR_RBP add r15d, dword ptr [rbp]
#define ADD_R15D_FROM_PTR_RSP add r15d, dword ptr [rsp]
#define ADD_R15D_FROM_PTR_R8 add r15d, dword ptr [r8]
#define ADD_R15D_FROM_PTR_R9 add r15d, dword ptr [r9]
#define ADD_R15D_FROM_PTR_R10 add r15d, dword ptr [r10]
#define ADD_R15D_FROM_PTR_R11 add r15d, dword ptr [r11]
#define ADD_R15D_FROM_PTR_R12 add r15d, dword ptr [r12]
#define ADD_R15D_FROM_PTR_R13 add r15d, dword ptr [r13]
#define ADD_R15D_FROM_PTR_R14 add r15d, dword ptr [r14]
#define ADD_R15D_FROM_PTR_R15 add r15d, dword ptr [r15]
#define ADD_R15D_FROM_PTR_EAX add r15d, dword ptr [eax]
#define ADD_R15D_FROM_PTR_EBX add r15d, dword ptr [ebx]
#define ADD_R15D_FROM_PTR_ECX add r15d, dword ptr [ecx]
#define ADD_R15D_FROM_PTR_EDX add r15d, dword ptr [edx]
#define ADD_R15D_FROM_PTR_EDI add r15d, dword ptr [edi]
#define ADD_R15D_FROM_PTR_ESI add r15d, dword ptr [esi]
#define ADD_R15D_FROM_PTR_EBP add r15d, dword ptr [ebp]
#define ADD_R15D_FROM_PTR_ESP add r15d, dword ptr [esp]

#define ADD_EAX_TO_PTR_RAX add dword ptr [rax], eax
#define ADD_EAX_TO_PTR_RBX add dword ptr [rbx], eax
#define ADD_EAX_TO_PTR_RCX add dword ptr [rcx], eax
#define ADD_EAX_TO_PTR_RDX add dword ptr [rdx], eax
#define ADD_EAX_TO_PTR_RDI add dword ptr [rdi], eax
#define ADD_EAX_TO_PTR_RSI add dword ptr [rsi], eax
#define ADD_EAX_TO_PTR_RBP add dword ptr [rbp], eax
#define ADD_EAX_TO_PTR_RSP add dword ptr [rsp], eax
#define ADD_EAX_TO_PTR_R8 add dword ptr [r8], eax
#define ADD_EAX_TO_PTR_R9 add dword ptr [r9], eax
#define ADD_EAX_TO_PTR_R10 add dword ptr [r10], eax
#define ADD_EAX_TO_PTR_R11 add dword ptr [r11], eax
#define ADD_EAX_TO_PTR_R12 add dword ptr [r12], eax
#define ADD_EAX_TO_PTR_R13 add dword ptr [r13], eax
#define ADD_EAX_TO_PTR_R14 add dword ptr [r14], eax
#define ADD_EAX_TO_PTR_R15 add dword ptr [r15], eax
#define ADD_EAX_TO_PTR_EAX add dword ptr [eax], eax
#define ADD_EAX_TO_PTR_EBX add dword ptr [ebx], eax
#define ADD_EAX_TO_PTR_ECX add dword ptr [ecx], eax
#define ADD_EAX_TO_PTR_EDX add dword ptr [edx], eax
#define ADD_EAX_TO_PTR_EDI add dword ptr [edi], eax
#define ADD_EAX_TO_PTR_ESI add dword ptr [esi], eax
#define ADD_EAX_TO_PTR_EBP add dword ptr [ebp], eax
#define ADD_EAX_TO_PTR_ESP add dword ptr [esp], eax

#define ADD_EBX_TO_PTR_RAX add dword ptr [rax], ebx
#define ADD_EBX_TO_PTR_RBX add dword ptr [rbx], ebx
#define ADD_EBX_TO_PTR_RCX add dword ptr [rcx], ebx
#define ADD_EBX_TO_PTR_RDX add dword ptr [rdx], ebx
#define ADD_EBX_TO_PTR_RDI add dword ptr [rdi], ebx
#define ADD_EBX_TO_PTR_RSI add dword ptr [rsi], ebx
#define ADD_EBX_TO_PTR_RBP add dword ptr [rbp], ebx
#define ADD_EBX_TO_PTR_RSP add dword ptr [rsp], ebx
#define ADD_EBX_TO_PTR_R8 add dword ptr [r8], ebx
#define ADD_EBX_TO_PTR_R9 add dword ptr [r9], ebx
#define ADD_EBX_TO_PTR_R10 add dword ptr [r10], ebx
#define ADD_EBX_TO_PTR_R11 add dword ptr [r11], ebx
#define ADD_EBX_TO_PTR_R12 add dword ptr [r12], ebx
#define ADD_EBX_TO_PTR_R13 add dword ptr [r13], ebx
#define ADD_EBX_TO_PTR_R14 add dword ptr [r14], ebx
#define ADD_EBX_TO_PTR_R15 add dword ptr [r15], ebx
#define ADD_EBX_TO_PTR_EAX add dword ptr [eax], ebx
#define ADD_EBX_TO_PTR_EBX add dword ptr [ebx], ebx
#define ADD_EBX_TO_PTR_ECX add dword ptr [ecx], ebx
#define ADD_EBX_TO_PTR_EDX add dword ptr [edx], ebx
#define ADD_EBX_TO_PTR_EDI add dword ptr [edi], ebx
#define ADD_EBX_TO_PTR_ESI add dword ptr [esi], ebx
#define ADD_EBX_TO_PTR_EBP add dword ptr [ebp], ebx
#define ADD_EBX_TO_PTR_ESP add dword ptr [esp], ebx

#define ADD_ECX_TO_PTR_RAX add dword ptr [rax], ecx
#define ADD_ECX_TO_PTR_RBX add dword ptr [rbx], ecx
#define ADD_ECX_TO_PTR_RCX add dword ptr [rcx], ecx
#define ADD_ECX_TO_PTR_RDX add dword ptr [rdx], ecx
#define ADD_ECX_TO_PTR_RDI add dword ptr [rdi], ecx
#define ADD_ECX_TO_PTR_RSI add dword ptr [rsi], ecx
#define ADD_ECX_TO_PTR_RBP add dword ptr [rbp], ecx
#define ADD_ECX_TO_PTR_RSP add dword ptr [rsp], ecx
#define ADD_ECX_TO_PTR_R8 add dword ptr [r8], ecx
#define ADD_ECX_TO_PTR_R9 add dword ptr [r9], ecx
#define ADD_ECX_TO_PTR_R10 add dword ptr [r10], ecx
#define ADD_ECX_TO_PTR_R11 add dword ptr [r11], ecx
#define ADD_ECX_TO_PTR_R12 add dword ptr [r12], ecx
#define ADD_ECX_TO_PTR_R13 add dword ptr [r13], ecx
#define ADD_ECX_TO_PTR_R14 add dword ptr [r14], ecx
#define ADD_ECX_TO_PTR_R15 add dword ptr [r15], ecx
#define ADD_ECX_TO_PTR_EAX add dword ptr [eax], ecx
#define ADD_ECX_TO_PTR_EBX add dword ptr [ebx], ecx
#define ADD_ECX_TO_PTR_ECX add dword ptr [ecx], ecx
#define ADD_ECX_TO_PTR_EDX add dword ptr [edx], ecx
#define ADD_ECX_TO_PTR_EDI add dword ptr [edi], ecx
#define ADD_ECX_TO_PTR_ESI add dword ptr [esi], ecx
#define ADD_ECX_TO_PTR_EBP add dword ptr [ebp], ecx
#define ADD_ECX_TO_PTR_ESP add dword ptr [esp], ecx

#define ADD_EDX_TO_PTR_RAX add dword ptr [rax], edx
#define ADD_EDX_TO_PTR_RBX add dword ptr [rbx], edx
#define ADD_EDX_TO_PTR_RCX add dword ptr [rcx], edx
#define ADD_EDX_TO_PTR_RDX add dword ptr [rdx], edx
#define ADD_EDX_TO_PTR_RDI add dword ptr [rdi], edx
#define ADD_EDX_TO_PTR_RSI add dword ptr [rsi], edx
#define ADD_EDX_TO_PTR_RBP add dword ptr [rbp], edx
#define ADD_EDX_TO_PTR_RSP add dword ptr [rsp], edx
#define ADD_EDX_TO_PTR_R8 add dword ptr [r8], edx
#define ADD_EDX_TO_PTR_R9 add dword ptr [r9], edx
#define ADD_EDX_TO_PTR_R10 add dword ptr [r10], edx
#define ADD_EDX_TO_PTR_R11 add dword ptr [r11], edx
#define ADD_EDX_TO_PTR_R12 add dword ptr [r12], edx
#define ADD_EDX_TO_PTR_R13 add dword ptr [r13], edx
#define ADD_EDX_TO_PTR_R14 add dword ptr [r14], edx
#define ADD_EDX_TO_PTR_R15 add dword ptr [r15], edx
#define ADD_EDX_TO_PTR_EAX add dword ptr [eax], edx
#define ADD_EDX_TO_PTR_EBX add dword ptr [ebx], edx
#define ADD_EDX_TO_PTR_ECX add dword ptr [ecx], edx
#define ADD_EDX_TO_PTR_EDX add dword ptr [edx], edx
#define ADD_EDX_TO_PTR_EDI add dword ptr [edi], edx
#define ADD_EDX_TO_PTR_ESI add dword ptr [esi], edx
#define ADD_EDX_TO_PTR_EBP add dword ptr [ebp], edx
#define ADD_EDX_TO_PTR_ESP add dword ptr [esp], edx

#define ADD_EDI_TO_PTR_RAX add dword ptr [rax], edi
#define ADD_EDI_TO_PTR_RBX add dword ptr [rbx], edi
#define ADD_EDI_TO_PTR_RCX add dword ptr [rcx], edi
#define ADD_EDI_TO_PTR_RDX add dword ptr [rdx], edi
#define ADD_EDI_TO_PTR_RDI add dword ptr [rdi], edi
#define ADD_EDI_TO_PTR_RSI add dword ptr [rsi], edi
#define ADD_EDI_TO_PTR_RBP add dword ptr [rbp], edi
#define ADD_EDI_TO_PTR_RSP add dword ptr [rsp], edi
#define ADD_EDI_TO_PTR_R8 add dword ptr [r8], edi
#define ADD_EDI_TO_PTR_R9 add dword ptr [r9], edi
#define ADD_EDI_TO_PTR_R10 add dword ptr [r10], edi
#define ADD_EDI_TO_PTR_R11 add dword ptr [r11], edi
#define ADD_EDI_TO_PTR_R12 add dword ptr [r12], edi
#define ADD_EDI_TO_PTR_R13 add dword ptr [r13], edi
#define ADD_EDI_TO_PTR_R14 add dword ptr [r14], edi
#define ADD_EDI_TO_PTR_R15 add dword ptr [r15], edi
#define ADD_EDI_TO_PTR_EAX add dword ptr [eax], edi
#define ADD_EDI_TO_PTR_EBX add dword ptr [ebx], edi
#define ADD_EDI_TO_PTR_ECX add dword ptr [ecx], edi
#define ADD_EDI_TO_PTR_EDX add dword ptr [edx], edi
#define ADD_EDI_TO_PTR_EDI add dword ptr [edi], edi
#define ADD_EDI_TO_PTR_ESI add dword ptr [esi], edi
#define ADD_EDI_TO_PTR_EBP add dword ptr [ebp], edi
#define ADD_EDI_TO_PTR_ESP add dword ptr [esp], edi

#define ADD_ESI_TO_PTR_RAX add dword ptr [rax], esi
#define ADD_ESI_TO_PTR_RBX add dword ptr [rbx], esi
#define ADD_ESI_TO_PTR_RCX add dword ptr [rcx], esi
#define ADD_ESI_TO_PTR_RDX add dword ptr [rdx], esi
#define ADD_ESI_TO_PTR_RDI add dword ptr [rdi], esi
#define ADD_ESI_TO_PTR_RSI add dword ptr [rsi], esi
#define ADD_ESI_TO_PTR_RBP add dword ptr [rbp], esi
#define ADD_ESI_TO_PTR_RSP add dword ptr [rsp], esi
#define ADD_ESI_TO_PTR_R8 add dword ptr [r8], esi
#define ADD_ESI_TO_PTR_R9 add dword ptr [r9], esi
#define ADD_ESI_TO_PTR_R10 add dword ptr [r10], esi
#define ADD_ESI_TO_PTR_R11 add dword ptr [r11], esi
#define ADD_ESI_TO_PTR_R12 add dword ptr [r12], esi
#define ADD_ESI_TO_PTR_R13 add dword ptr [r13], esi
#define ADD_ESI_TO_PTR_R14 add dword ptr [r14], esi
#define ADD_ESI_TO_PTR_R15 add dword ptr [r15], esi
#define ADD_ESI_TO_PTR_EAX add dword ptr [eax], esi
#define ADD_ESI_TO_PTR_EBX add dword ptr [ebx], esi
#define ADD_ESI_TO_PTR_ECX add dword ptr [ecx], esi
#define ADD_ESI_TO_PTR_EDX add dword ptr [edx], esi
#define ADD_ESI_TO_PTR_EDI add dword ptr [edi], esi
#define ADD_ESI_TO_PTR_ESI add dword ptr [esi], esi
#define ADD_ESI_TO_PTR_EBP add dword ptr [ebp], esi
#define ADD_ESI_TO_PTR_ESP add dword ptr [esp], esi

#define ADD_EBP_TO_PTR_RAX add dword ptr [rax], ebp
#define ADD_EBP_TO_PTR_RBX add dword ptr [rbx], ebp
#define ADD_EBP_TO_PTR_RCX add dword ptr [rcx], ebp
#define ADD_EBP_TO_PTR_RDX add dword ptr [rdx], ebp
#define ADD_EBP_TO_PTR_RDI add dword ptr [rdi], ebp
#define ADD_EBP_TO_PTR_RSI add dword ptr [rsi], ebp
#define ADD_EBP_TO_PTR_RBP add dword ptr [rbp], ebp
#define ADD_EBP_TO_PTR_RSP add dword ptr [rsp], ebp
#define ADD_EBP_TO_PTR_R8 add dword ptr [r8], ebp
#define ADD_EBP_TO_PTR_R9 add dword ptr [r9], ebp
#define ADD_EBP_TO_PTR_R10 add dword ptr [r10], ebp
#define ADD_EBP_TO_PTR_R11 add dword ptr [r11], ebp
#define ADD_EBP_TO_PTR_R12 add dword ptr [r12], ebp
#define ADD_EBP_TO_PTR_R13 add dword ptr [r13], ebp
#define ADD_EBP_TO_PTR_R14 add dword ptr [r14], ebp
#define ADD_EBP_TO_PTR_R15 add dword ptr [r15], ebp
#define ADD_EBP_TO_PTR_EAX add dword ptr [eax], ebp
#define ADD_EBP_TO_PTR_EBX add dword ptr [ebx], ebp
#define ADD_EBP_TO_PTR_ECX add dword ptr [ecx], ebp
#define ADD_EBP_TO_PTR_EDX add dword ptr [edx], ebp
#define ADD_EBP_TO_PTR_EDI add dword ptr [edi], ebp
#define ADD_EBP_TO_PTR_ESI add dword ptr [esi], ebp
#define ADD_EBP_TO_PTR_EBP add dword ptr [ebp], ebp
#define ADD_EBP_TO_PTR_ESP add dword ptr [esp], ebp

#define ADD_ESP_TO_PTR_RAX add dword ptr [rax], esp
#define ADD_ESP_TO_PTR_RBX add dword ptr [rbx], esp
#define ADD_ESP_TO_PTR_RCX add dword ptr [rcx], esp
#define ADD_ESP_TO_PTR_RDX add dword ptr [rdx], esp
#define ADD_ESP_TO_PTR_RDI add dword ptr [rdi], esp
#define ADD_ESP_TO_PTR_RSI add dword ptr [rsi], esp
#define ADD_ESP_TO_PTR_RBP add dword ptr [rbp], esp
#define ADD_ESP_TO_PTR_RSP add dword ptr [rsp], esp
#define ADD_ESP_TO_PTR_R8 add dword ptr [r8], esp
#define ADD_ESP_TO_PTR_R9 add dword ptr [r9], esp
#define ADD_ESP_TO_PTR_R10 add dword ptr [r10], esp
#define ADD_ESP_TO_PTR_R11 add dword ptr [r11], esp
#define ADD_ESP_TO_PTR_R12 add dword ptr [r12], esp
#define ADD_ESP_TO_PTR_R13 add dword ptr [r13], esp
#define ADD_ESP_TO_PTR_R14 add dword ptr [r14], esp
#define ADD_ESP_TO_PTR_R15 add dword ptr [r15], esp
#define ADD_ESP_TO_PTR_EAX add dword ptr [eax], esp
#define ADD_ESP_TO_PTR_EBX add dword ptr [ebx], esp
#define ADD_ESP_TO_PTR_ECX add dword ptr [ecx], esp
#define ADD_ESP_TO_PTR_EDX add dword ptr [edx], esp
#define ADD_ESP_TO_PTR_EDI add dword ptr [edi], esp
#define ADD_ESP_TO_PTR_ESI add dword ptr [esi], esp
#define ADD_ESP_TO_PTR_EBP add dword ptr [ebp], esp
#define ADD_ESP_TO_PTR_ESP add dword ptr [esp], esp

#define ADD_R8D_TO_PTR_RAX add dword ptr [rax], r8d
#define ADD_R8D_TO_PTR_RBX add dword ptr [rbx], r8d
#define ADD_R8D_TO_PTR_RCX add dword ptr [rcx], r8d
#define ADD_R8D_TO_PTR_RDX add dword ptr [rdx], r8d
#define ADD_R8D_TO_PTR_RDI add dword ptr [rdi], r8d
#define ADD_R8D_TO_PTR_RSI add dword ptr [rsi], r8d
#define ADD_R8D_TO_PTR_RBP add dword ptr [rbp], r8d
#define ADD_R8D_TO_PTR_RSP add dword ptr [rsp], r8d
#define ADD_R8D_TO_PTR_R8 add dword ptr [r8], r8d
#define ADD_R8D_TO_PTR_R9 add dword ptr [r9], r8d
#define ADD_R8D_TO_PTR_R10 add dword ptr [r10], r8d
#define ADD_R8D_TO_PTR_R11 add dword ptr [r11], r8d
#define ADD_R8D_TO_PTR_R12 add dword ptr [r12], r8d
#define ADD_R8D_TO_PTR_R13 add dword ptr [r13], r8d
#define ADD_R8D_TO_PTR_R14 add dword ptr [r14], r8d
#define ADD_R8D_TO_PTR_R15 add dword ptr [r15], r8d
#define ADD_R8D_TO_PTR_EAX add dword ptr [eax], r8d
#define ADD_R8D_TO_PTR_EBX add dword ptr [ebx], r8d
#define ADD_R8D_TO_PTR_ECX add dword ptr [ecx], r8d
#define ADD_R8D_TO_PTR_EDX add dword ptr [edx], r8d
#define ADD_R8D_TO_PTR_EDI add dword ptr [edi], r8d
#define ADD_R8D_TO_PTR_ESI add dword ptr [esi], r8d
#define ADD_R8D_TO_PTR_EBP add dword ptr [ebp], r8d
#define ADD_R8D_TO_PTR_ESP add dword ptr [esp], r8d

#define ADD_R9D_TO_PTR_RAX add dword ptr [rax], r9d
#define ADD_R9D_TO_PTR_RBX add dword ptr [rbx], r9d
#define ADD_R9D_TO_PTR_RCX add dword ptr [rcx], r9d
#define ADD_R9D_TO_PTR_RDX add dword ptr [rdx], r9d
#define ADD_R9D_TO_PTR_RDI add dword ptr [rdi], r9d
#define ADD_R9D_TO_PTR_RSI add dword ptr [rsi], r9d
#define ADD_R9D_TO_PTR_RBP add dword ptr [rbp], r9d
#define ADD_R9D_TO_PTR_RSP add dword ptr [rsp], r9d
#define ADD_R9D_TO_PTR_R8 add dword ptr [r8], r9d
#define ADD_R9D_TO_PTR_R9 add dword ptr [r9], r9d
#define ADD_R9D_TO_PTR_R10 add dword ptr [r10], r9d
#define ADD_R9D_TO_PTR_R11 add dword ptr [r11], r9d
#define ADD_R9D_TO_PTR_R12 add dword ptr [r12], r9d
#define ADD_R9D_TO_PTR_R13 add dword ptr [r13], r9d
#define ADD_R9D_TO_PTR_R14 add dword ptr [r14], r9d
#define ADD_R9D_TO_PTR_R15 add dword ptr [r15], r9d
#define ADD_R9D_TO_PTR_EAX add dword ptr [eax], r9d
#define ADD_R9D_TO_PTR_EBX add dword ptr [ebx], r9d
#define ADD_R9D_TO_PTR_ECX add dword ptr [ecx], r9d
#define ADD_R9D_TO_PTR_EDX add dword ptr [edx], r9d
#define ADD_R9D_TO_PTR_EDI add dword ptr [edi], r9d
#define ADD_R9D_TO_PTR_ESI add dword ptr [esi], r9d
#define ADD_R9D_TO_PTR_EBP add dword ptr [ebp], r9d
#define ADD_R9D_TO_PTR_ESP add dword ptr [esp], r9d

#define ADD_R10D_TO_PTR_RAX add dword ptr [rax], r10d
#define ADD_R10D_TO_PTR_RBX add dword ptr [rbx], r10d
#define ADD_R10D_TO_PTR_RCX add dword ptr [rcx], r10d
#define ADD_R10D_TO_PTR_RDX add dword ptr [rdx], r10d
#define ADD_R10D_TO_PTR_RDI add dword ptr [rdi], r10d
#define ADD_R10D_TO_PTR_RSI add dword ptr [rsi], r10d
#define ADD_R10D_TO_PTR_RBP add dword ptr [rbp], r10d
#define ADD_R10D_TO_PTR_RSP add dword ptr [rsp], r10d
#define ADD_R10D_TO_PTR_R8 add dword ptr [r8], r10d
#define ADD_R10D_TO_PTR_R9 add dword ptr [r9], r10d
#define ADD_R10D_TO_PTR_R10 add dword ptr [r10], r10d
#define ADD_R10D_TO_PTR_R11 add dword ptr [r11], r10d
#define ADD_R10D_TO_PTR_R12 add dword ptr [r12], r10d
#define ADD_R10D_TO_PTR_R13 add dword ptr [r13], r10d
#define ADD_R10D_TO_PTR_R14 add dword ptr [r14], r10d
#define ADD_R10D_TO_PTR_R15 add dword ptr [r15], r10d
#define ADD_R10D_TO_PTR_EAX add dword ptr [eax], r10d
#define ADD_R10D_TO_PTR_EBX add dword ptr [ebx], r10d
#define ADD_R10D_TO_PTR_ECX add dword ptr [ecx], r10d
#define ADD_R10D_TO_PTR_EDX add dword ptr [edx], r10d
#define ADD_R10D_TO_PTR_EDI add dword ptr [edi], r10d
#define ADD_R10D_TO_PTR_ESI add dword ptr [esi], r10d
#define ADD_R10D_TO_PTR_EBP add dword ptr [ebp], r10d
#define ADD_R10D_TO_PTR_ESP add dword ptr [esp], r10d

#define ADD_R11D_TO_PTR_RAX add dword ptr [rax], r11d
#define ADD_R11D_TO_PTR_RBX add dword ptr [rbx], r11d
#define ADD_R11D_TO_PTR_RCX add dword ptr [rcx], r11d
#define ADD_R11D_TO_PTR_RDX add dword ptr [rdx], r11d
#define ADD_R11D_TO_PTR_RDI add dword ptr [rdi], r11d
#define ADD_R11D_TO_PTR_RSI add dword ptr [rsi], r11d
#define ADD_R11D_TO_PTR_RBP add dword ptr [rbp], r11d
#define ADD_R11D_TO_PTR_RSP add dword ptr [rsp], r11d
#define ADD_R11D_TO_PTR_R8 add dword ptr [r8], r11d
#define ADD_R11D_TO_PTR_R9 add dword ptr [r9], r11d
#define ADD_R11D_TO_PTR_R10 add dword ptr [r10], r11d
#define ADD_R11D_TO_PTR_R11 add dword ptr [r11], r11d
#define ADD_R11D_TO_PTR_R12 add dword ptr [r12], r11d
#define ADD_R11D_TO_PTR_R13 add dword ptr [r13], r11d
#define ADD_R11D_TO_PTR_R14 add dword ptr [r14], r11d
#define ADD_R11D_TO_PTR_R15 add dword ptr [r15], r11d
#define ADD_R11D_TO_PTR_EAX add dword ptr [eax], r11d
#define ADD_R11D_TO_PTR_EBX add dword ptr [ebx], r11d
#define ADD_R11D_TO_PTR_ECX add dword ptr [ecx], r11d
#define ADD_R11D_TO_PTR_EDX add dword ptr [edx], r11d
#define ADD_R11D_TO_PTR_EDI add dword ptr [edi], r11d
#define ADD_R11D_TO_PTR_ESI add dword ptr [esi], r11d
#define ADD_R11D_TO_PTR_EBP add dword ptr [ebp], r11d
#define ADD_R11D_TO_PTR_ESP add dword ptr [esp], r11d

#define ADD_R12D_TO_PTR_RAX add dword ptr [rax], r12d
#define ADD_R12D_TO_PTR_RBX add dword ptr [rbx], r12d
#define ADD_R12D_TO_PTR_RCX add dword ptr [rcx], r12d
#define ADD_R12D_TO_PTR_RDX add dword ptr [rdx], r12d
#define ADD_R12D_TO_PTR_RDI add dword ptr [rdi], r12d
#define ADD_R12D_TO_PTR_RSI add dword ptr [rsi], r12d
#define ADD_R12D_TO_PTR_RBP add dword ptr [rbp], r12d
#define ADD_R12D_TO_PTR_RSP add dword ptr [rsp], r12d
#define ADD_R12D_TO_PTR_R8 add dword ptr [r8], r12d
#define ADD_R12D_TO_PTR_R9 add dword ptr [r9], r12d
#define ADD_R12D_TO_PTR_R10 add dword ptr [r10], r12d
#define ADD_R12D_TO_PTR_R11 add dword ptr [r11], r12d
#define ADD_R12D_TO_PTR_R12 add dword ptr [r12], r12d
#define ADD_R12D_TO_PTR_R13 add dword ptr [r13], r12d
#define ADD_R12D_TO_PTR_R14 add dword ptr [r14], r12d
#define ADD_R12D_TO_PTR_R15 add dword ptr [r15], r12d
#define ADD_R12D_TO_PTR_EAX add dword ptr [eax], r12d
#define ADD_R12D_TO_PTR_EBX add dword ptr [ebx], r12d
#define ADD_R12D_TO_PTR_ECX add dword ptr [ecx], r12d
#define ADD_R12D_TO_PTR_EDX add dword ptr [edx], r12d
#define ADD_R12D_TO_PTR_EDI add dword ptr [edi], r12d
#define ADD_R12D_TO_PTR_ESI add dword ptr [esi], r12d
#define ADD_R12D_TO_PTR_EBP add dword ptr [ebp], r12d
#define ADD_R12D_TO_PTR_ESP add dword ptr [esp], r12d

#define ADD_R13D_TO_PTR_RAX add dword ptr [rax], r13d
#define ADD_R13D_TO_PTR_RBX add dword ptr [rbx], r13d
#define ADD_R13D_TO_PTR_RCX add dword ptr [rcx], r13d
#define ADD_R13D_TO_PTR_RDX add dword ptr [rdx], r13d
#define ADD_R13D_TO_PTR_RDI add dword ptr [rdi], r13d
#define ADD_R13D_TO_PTR_RSI add dword ptr [rsi], r13d
#define ADD_R13D_TO_PTR_RBP add dword ptr [rbp], r13d
#define ADD_R13D_TO_PTR_RSP add dword ptr [rsp], r13d
#define ADD_R13D_TO_PTR_R8 add dword ptr [r8], r13d
#define ADD_R13D_TO_PTR_R9 add dword ptr [r9], r13d
#define ADD_R13D_TO_PTR_R10 add dword ptr [r10], r13d
#define ADD_R13D_TO_PTR_R11 add dword ptr [r11], r13d
#define ADD_R13D_TO_PTR_R12 add dword ptr [r12], r13d
#define ADD_R13D_TO_PTR_R13 add dword ptr [r13], r13d
#define ADD_R13D_TO_PTR_R14 add dword ptr [r14], r13d
#define ADD_R13D_TO_PTR_R15 add dword ptr [r15], r13d
#define ADD_R13D_TO_PTR_EAX add dword ptr [eax], r13d
#define ADD_R13D_TO_PTR_EBX add dword ptr [ebx], r13d
#define ADD_R13D_TO_PTR_ECX add dword ptr [ecx], r13d
#define ADD_R13D_TO_PTR_EDX add dword ptr [edx], r13d
#define ADD_R13D_TO_PTR_EDI add dword ptr [edi], r13d
#define ADD_R13D_TO_PTR_ESI add dword ptr [esi], r13d
#define ADD_R13D_TO_PTR_EBP add dword ptr [ebp], r13d
#define ADD_R13D_TO_PTR_ESP add dword ptr [esp], r13d

#define ADD_R14D_TO_PTR_RAX add dword ptr [rax], r14d
#define ADD_R14D_TO_PTR_RBX add dword ptr [rbx], r14d
#define ADD_R14D_TO_PTR_RCX add dword ptr [rcx], r14d
#define ADD_R14D_TO_PTR_RDX add dword ptr [rdx], r14d
#define ADD_R14D_TO_PTR_RDI add dword ptr [rdi], r14d
#define ADD_R14D_TO_PTR_RSI add dword ptr [rsi], r14d
#define ADD_R14D_TO_PTR_RBP add dword ptr [rbp], r14d
#define ADD_R14D_TO_PTR_RSP add dword ptr [rsp], r14d
#define ADD_R14D_TO_PTR_R8 add dword ptr [r8], r14d
#define ADD_R14D_TO_PTR_R9 add dword ptr [r9], r14d
#define ADD_R14D_TO_PTR_R10 add dword ptr [r10], r14d
#define ADD_R14D_TO_PTR_R11 add dword ptr [r11], r14d
#define ADD_R14D_TO_PTR_R12 add dword ptr [r12], r14d
#define ADD_R14D_TO_PTR_R13 add dword ptr [r13], r14d
#define ADD_R14D_TO_PTR_R14 add dword ptr [r14], r14d
#define ADD_R14D_TO_PTR_R15 add dword ptr [r15], r14d
#define ADD_R14D_TO_PTR_EAX add dword ptr [eax], r14d
#define ADD_R14D_TO_PTR_EBX add dword ptr [ebx], r14d
#define ADD_R14D_TO_PTR_ECX add dword ptr [ecx], r14d
#define ADD_R14D_TO_PTR_EDX add dword ptr [edx], r14d
#define ADD_R14D_TO_PTR_EDI add dword ptr [edi], r14d
#define ADD_R14D_TO_PTR_ESI add dword ptr [esi], r14d
#define ADD_R14D_TO_PTR_EBP add dword ptr [ebp], r14d
#define ADD_R14D_TO_PTR_ESP add dword ptr [esp], r14d

#define ADD_R15D_TO_PTR_RAX add dword ptr [rax], r15d
#define ADD_R15D_TO_PTR_RBX add dword ptr [rbx], r15d
#define ADD_R15D_TO_PTR_RCX add dword ptr [rcx], r15d
#define ADD_R15D_TO_PTR_RDX add dword ptr [rdx], r15d
#define ADD_R15D_TO_PTR_RDI add dword ptr [rdi], r15d
#define ADD_R15D_TO_PTR_RSI add dword ptr [rsi], r15d
#define ADD_R15D_TO_PTR_RBP add dword ptr [rbp], r15d
#define ADD_R15D_TO_PTR_RSP add dword ptr [rsp], r15d
#define ADD_R15D_TO_PTR_R8 add dword ptr [r8], r15d
#define ADD_R15D_TO_PTR_R9 add dword ptr [r9], r15d
#define ADD_R15D_TO_PTR_R10 add dword ptr [r10], r15d
#define ADD_R15D_TO_PTR_R11 add dword ptr [r11], r15d
#define ADD_R15D_TO_PTR_R12 add dword ptr [r12], r15d
#define ADD_R15D_TO_PTR_R13 add dword ptr [r13], r15d
#define ADD_R15D_TO_PTR_R14 add dword ptr [r14], r15d
#define ADD_R15D_TO_PTR_R15 add dword ptr [r15], r15d
#define ADD_R15D_TO_PTR_EAX add dword ptr [eax], r15d
#define ADD_R15D_TO_PTR_EBX add dword ptr [ebx], r15d
#define ADD_R15D_TO_PTR_ECX add dword ptr [ecx], r15d
#define ADD_R15D_TO_PTR_EDX add dword ptr [edx], r15d
#define ADD_R15D_TO_PTR_EDI add dword ptr [edi], r15d
#define ADD_R15D_TO_PTR_ESI add dword ptr [esi], r15d
#define ADD_R15D_TO_PTR_EBP add dword ptr [ebp], r15d
#define ADD_R15D_TO_PTR_ESP add dword ptr [esp], r15d

#define ADD_EAX_FROM_PTR_RAX_(VALUE) add eax, dword ptr [rax + VALUE]
#define ADD_EAX_FROM_PTR_RBX_(VALUE) add eax, dword ptr [rbx + VALUE]
#define ADD_EAX_FROM_PTR_RCX_(VALUE) add eax, dword ptr [rcx + VALUE]
#define ADD_EAX_FROM_PTR_RDX_(VALUE) add eax, dword ptr [rdx + VALUE]
#define ADD_EAX_FROM_PTR_RDI_(VALUE) add eax, dword ptr [rdi + VALUE]
#define ADD_EAX_FROM_PTR_RSI_(VALUE) add eax, dword ptr [rsi + VALUE]
#define ADD_EAX_FROM_PTR_RBP_(VALUE) add eax, dword ptr [rbp + VALUE]
#define ADD_EAX_FROM_PTR_RSP_(VALUE) add eax, dword ptr [rsp + VALUE]
#define ADD_EAX_FROM_PTR_R8_(VALUE) add eax, dword ptr [r8 + VALUE]
#define ADD_EAX_FROM_PTR_R9_(VALUE) add eax, dword ptr [r9 + VALUE]
#define ADD_EAX_FROM_PTR_R10_(VALUE) add eax, dword ptr [r10 + VALUE]
#define ADD_EAX_FROM_PTR_R11_(VALUE) add eax, dword ptr [r11 + VALUE]
#define ADD_EAX_FROM_PTR_R12_(VALUE) add eax, dword ptr [r12 + VALUE]
#define ADD_EAX_FROM_PTR_R13_(VALUE) add eax, dword ptr [r13 + VALUE]
#define ADD_EAX_FROM_PTR_R14_(VALUE) add eax, dword ptr [r14 + VALUE]
#define ADD_EAX_FROM_PTR_R15_(VALUE) add eax, dword ptr [r15 + VALUE]
#define ADD_EAX_FROM_PTR_EAX_(VALUE) add eax, dword ptr [eax + VALUE]
#define ADD_EAX_FROM_PTR_EBX_(VALUE) add eax, dword ptr [ebx + VALUE]
#define ADD_EAX_FROM_PTR_ECX_(VALUE) add eax, dword ptr [ecx + VALUE]
#define ADD_EAX_FROM_PTR_EDX_(VALUE) add eax, dword ptr [edx + VALUE]
#define ADD_EAX_FROM_PTR_EDI_(VALUE) add eax, dword ptr [edi + VALUE]
#define ADD_EAX_FROM_PTR_ESI_(VALUE) add eax, dword ptr [esi + VALUE]
#define ADD_EAX_FROM_PTR_EBP_(VALUE) add eax, dword ptr [ebp + VALUE]
#define ADD_EAX_FROM_PTR_ESP_(VALUE) add eax, dword ptr [esp + VALUE]

#define ADD_EBX_FROM_PTR_RAX_(VALUE) add ebx, dword ptr [rax + VALUE]
#define ADD_EBX_FROM_PTR_RBX_(VALUE) add ebx, dword ptr [rbx + VALUE]
#define ADD_EBX_FROM_PTR_RCX_(VALUE) add ebx, dword ptr [rcx + VALUE]
#define ADD_EBX_FROM_PTR_RDX_(VALUE) add ebx, dword ptr [rdx + VALUE]
#define ADD_EBX_FROM_PTR_RDI_(VALUE) add ebx, dword ptr [rdi + VALUE]
#define ADD_EBX_FROM_PTR_RSI_(VALUE) add ebx, dword ptr [rsi + VALUE]
#define ADD_EBX_FROM_PTR_RBP_(VALUE) add ebx, dword ptr [rbp + VALUE]
#define ADD_EBX_FROM_PTR_RSP_(VALUE) add ebx, dword ptr [rsp + VALUE]
#define ADD_EBX_FROM_PTR_R8_(VALUE) add ebx, dword ptr [r8 + VALUE]
#define ADD_EBX_FROM_PTR_R9_(VALUE) add ebx, dword ptr [r9 + VALUE]
#define ADD_EBX_FROM_PTR_R10_(VALUE) add ebx, dword ptr [r10 + VALUE]
#define ADD_EBX_FROM_PTR_R11_(VALUE) add ebx, dword ptr [r11 + VALUE]
#define ADD_EBX_FROM_PTR_R12_(VALUE) add ebx, dword ptr [r12 + VALUE]
#define ADD_EBX_FROM_PTR_R13_(VALUE) add ebx, dword ptr [r13 + VALUE]
#define ADD_EBX_FROM_PTR_R14_(VALUE) add ebx, dword ptr [r14 + VALUE]
#define ADD_EBX_FROM_PTR_R15_(VALUE) add ebx, dword ptr [r15 + VALUE]
#define ADD_EBX_FROM_PTR_EAX_(VALUE) add ebx, dword ptr [eax + VALUE]
#define ADD_EBX_FROM_PTR_EBX_(VALUE) add ebx, dword ptr [ebx + VALUE]
#define ADD_EBX_FROM_PTR_ECX_(VALUE) add ebx, dword ptr [ecx + VALUE]
#define ADD_EBX_FROM_PTR_EDX_(VALUE) add ebx, dword ptr [edx + VALUE]
#define ADD_EBX_FROM_PTR_EDI_(VALUE) add ebx, dword ptr [edi + VALUE]
#define ADD_EBX_FROM_PTR_ESI_(VALUE) add ebx, dword ptr [esi + VALUE]
#define ADD_EBX_FROM_PTR_EBP_(VALUE) add ebx, dword ptr [ebp + VALUE]
#define ADD_EBX_FROM_PTR_ESP_(VALUE) add ebx, dword ptr [esp + VALUE]

#define ADD_ECX_FROM_PTR_RAX_(VALUE) add ecx, dword ptr [rax + VALUE]
#define ADD_ECX_FROM_PTR_RBX_(VALUE) add ecx, dword ptr [rbx + VALUE]
#define ADD_ECX_FROM_PTR_RCX_(VALUE) add ecx, dword ptr [rcx + VALUE]
#define ADD_ECX_FROM_PTR_RDX_(VALUE) add ecx, dword ptr [rdx + VALUE]
#define ADD_ECX_FROM_PTR_RDI_(VALUE) add ecx, dword ptr [rdi + VALUE]
#define ADD_ECX_FROM_PTR_RSI_(VALUE) add ecx, dword ptr [rsi + VALUE]
#define ADD_ECX_FROM_PTR_RBP_(VALUE) add ecx, dword ptr [rbp + VALUE]
#define ADD_ECX_FROM_PTR_RSP_(VALUE) add ecx, dword ptr [rsp + VALUE]
#define ADD_ECX_FROM_PTR_R8_(VALUE) add ecx, dword ptr [r8 + VALUE]
#define ADD_ECX_FROM_PTR_R9_(VALUE) add ecx, dword ptr [r9 + VALUE]
#define ADD_ECX_FROM_PTR_R10_(VALUE) add ecx, dword ptr [r10 + VALUE]
#define ADD_ECX_FROM_PTR_R11_(VALUE) add ecx, dword ptr [r11 + VALUE]
#define ADD_ECX_FROM_PTR_R12_(VALUE) add ecx, dword ptr [r12 + VALUE]
#define ADD_ECX_FROM_PTR_R13_(VALUE) add ecx, dword ptr [r13 + VALUE]
#define ADD_ECX_FROM_PTR_R14_(VALUE) add ecx, dword ptr [r14 + VALUE]
#define ADD_ECX_FROM_PTR_R15_(VALUE) add ecx, dword ptr [r15 + VALUE]
#define ADD_ECX_FROM_PTR_EAX_(VALUE) add ecx, dword ptr [eax + VALUE]
#define ADD_ECX_FROM_PTR_EBX_(VALUE) add ecx, dword ptr [ebx + VALUE]
#define ADD_ECX_FROM_PTR_ECX_(VALUE) add ecx, dword ptr [ecx + VALUE]
#define ADD_ECX_FROM_PTR_EDX_(VALUE) add ecx, dword ptr [edx + VALUE]
#define ADD_ECX_FROM_PTR_EDI_(VALUE) add ecx, dword ptr [edi + VALUE]
#define ADD_ECX_FROM_PTR_ESI_(VALUE) add ecx, dword ptr [esi + VALUE]
#define ADD_ECX_FROM_PTR_EBP_(VALUE) add ecx, dword ptr [ebp + VALUE]
#define ADD_ECX_FROM_PTR_ESP_(VALUE) add ecx, dword ptr [esp + VALUE]

#define ADD_EDX_FROM_PTR_RAX_(VALUE) add edx, dword ptr [rax + VALUE]
#define ADD_EDX_FROM_PTR_RBX_(VALUE) add edx, dword ptr [rbx + VALUE]
#define ADD_EDX_FROM_PTR_RCX_(VALUE) add edx, dword ptr [rcx + VALUE]
#define ADD_EDX_FROM_PTR_RDX_(VALUE) add edx, dword ptr [rdx + VALUE]
#define ADD_EDX_FROM_PTR_RDI_(VALUE) add edx, dword ptr [rdi + VALUE]
#define ADD_EDX_FROM_PTR_RSI_(VALUE) add edx, dword ptr [rsi + VALUE]
#define ADD_EDX_FROM_PTR_RBP_(VALUE) add edx, dword ptr [rbp + VALUE]
#define ADD_EDX_FROM_PTR_RSP_(VALUE) add edx, dword ptr [rsp + VALUE]
#define ADD_EDX_FROM_PTR_R8_(VALUE) add edx, dword ptr [r8 + VALUE]
#define ADD_EDX_FROM_PTR_R9_(VALUE) add edx, dword ptr [r9 + VALUE]
#define ADD_EDX_FROM_PTR_R10_(VALUE) add edx, dword ptr [r10 + VALUE]
#define ADD_EDX_FROM_PTR_R11_(VALUE) add edx, dword ptr [r11 + VALUE]
#define ADD_EDX_FROM_PTR_R12_(VALUE) add edx, dword ptr [r12 + VALUE]
#define ADD_EDX_FROM_PTR_R13_(VALUE) add edx, dword ptr [r13 + VALUE]
#define ADD_EDX_FROM_PTR_R14_(VALUE) add edx, dword ptr [r14 + VALUE]
#define ADD_EDX_FROM_PTR_R15_(VALUE) add edx, dword ptr [r15 + VALUE]
#define ADD_EDX_FROM_PTR_EAX_(VALUE) add edx, dword ptr [eax + VALUE]
#define ADD_EDX_FROM_PTR_EBX_(VALUE) add edx, dword ptr [ebx + VALUE]
#define ADD_EDX_FROM_PTR_ECX_(VALUE) add edx, dword ptr [ecx + VALUE]
#define ADD_EDX_FROM_PTR_EDX_(VALUE) add edx, dword ptr [edx + VALUE]
#define ADD_EDX_FROM_PTR_EDI_(VALUE) add edx, dword ptr [edi + VALUE]
#define ADD_EDX_FROM_PTR_ESI_(VALUE) add edx, dword ptr [esi + VALUE]
#define ADD_EDX_FROM_PTR_EBP_(VALUE) add edx, dword ptr [ebp + VALUE]
#define ADD_EDX_FROM_PTR_ESP_(VALUE) add edx, dword ptr [esp + VALUE]

#define ADD_EDI_FROM_PTR_RAX_(VALUE) add edi, dword ptr [rax + VALUE]
#define ADD_EDI_FROM_PTR_RBX_(VALUE) add edi, dword ptr [rbx + VALUE]
#define ADD_EDI_FROM_PTR_RCX_(VALUE) add edi, dword ptr [rcx + VALUE]
#define ADD_EDI_FROM_PTR_RDX_(VALUE) add edi, dword ptr [rdx + VALUE]
#define ADD_EDI_FROM_PTR_RDI_(VALUE) add edi, dword ptr [rdi + VALUE]
#define ADD_EDI_FROM_PTR_RSI_(VALUE) add edi, dword ptr [rsi + VALUE]
#define ADD_EDI_FROM_PTR_RBP_(VALUE) add edi, dword ptr [rbp + VALUE]
#define ADD_EDI_FROM_PTR_RSP_(VALUE) add edi, dword ptr [rsp + VALUE]
#define ADD_EDI_FROM_PTR_R8_(VALUE) add edi, dword ptr [r8 + VALUE]
#define ADD_EDI_FROM_PTR_R9_(VALUE) add edi, dword ptr [r9 + VALUE]
#define ADD_EDI_FROM_PTR_R10_(VALUE) add edi, dword ptr [r10 + VALUE]
#define ADD_EDI_FROM_PTR_R11_(VALUE) add edi, dword ptr [r11 + VALUE]
#define ADD_EDI_FROM_PTR_R12_(VALUE) add edi, dword ptr [r12 + VALUE]
#define ADD_EDI_FROM_PTR_R13_(VALUE) add edi, dword ptr [r13 + VALUE]
#define ADD_EDI_FROM_PTR_R14_(VALUE) add edi, dword ptr [r14 + VALUE]
#define ADD_EDI_FROM_PTR_R15_(VALUE) add edi, dword ptr [r15 + VALUE]
#define ADD_EDI_FROM_PTR_EAX_(VALUE) add edi, dword ptr [eax + VALUE]
#define ADD_EDI_FROM_PTR_EBX_(VALUE) add edi, dword ptr [ebx + VALUE]
#define ADD_EDI_FROM_PTR_ECX_(VALUE) add edi, dword ptr [ecx + VALUE]
#define ADD_EDI_FROM_PTR_EDX_(VALUE) add edi, dword ptr [edx + VALUE]
#define ADD_EDI_FROM_PTR_EDI_(VALUE) add edi, dword ptr [edi + VALUE]
#define ADD_EDI_FROM_PTR_ESI_(VALUE) add edi, dword ptr [esi + VALUE]
#define ADD_EDI_FROM_PTR_EBP_(VALUE) add edi, dword ptr [ebp + VALUE]
#define ADD_EDI_FROM_PTR_ESP_(VALUE) add edi, dword ptr [esp + VALUE]

#define ADD_ESI_FROM_PTR_RAX_(VALUE) add esi, dword ptr [rax + VALUE]
#define ADD_ESI_FROM_PTR_RBX_(VALUE) add esi, dword ptr [rbx + VALUE]
#define ADD_ESI_FROM_PTR_RCX_(VALUE) add esi, dword ptr [rcx + VALUE]
#define ADD_ESI_FROM_PTR_RDX_(VALUE) add esi, dword ptr [rdx + VALUE]
#define ADD_ESI_FROM_PTR_RDI_(VALUE) add esi, dword ptr [rdi + VALUE]
#define ADD_ESI_FROM_PTR_RSI_(VALUE) add esi, dword ptr [rsi + VALUE]
#define ADD_ESI_FROM_PTR_RBP_(VALUE) add esi, dword ptr [rbp + VALUE]
#define ADD_ESI_FROM_PTR_RSP_(VALUE) add esi, dword ptr [rsp + VALUE]
#define ADD_ESI_FROM_PTR_R8_(VALUE) add esi, dword ptr [r8 + VALUE]
#define ADD_ESI_FROM_PTR_R9_(VALUE) add esi, dword ptr [r9 + VALUE]
#define ADD_ESI_FROM_PTR_R10_(VALUE) add esi, dword ptr [r10 + VALUE]
#define ADD_ESI_FROM_PTR_R11_(VALUE) add esi, dword ptr [r11 + VALUE]
#define ADD_ESI_FROM_PTR_R12_(VALUE) add esi, dword ptr [r12 + VALUE]
#define ADD_ESI_FROM_PTR_R13_(VALUE) add esi, dword ptr [r13 + VALUE]
#define ADD_ESI_FROM_PTR_R14_(VALUE) add esi, dword ptr [r14 + VALUE]
#define ADD_ESI_FROM_PTR_R15_(VALUE) add esi, dword ptr [r15 + VALUE]
#define ADD_ESI_FROM_PTR_EAX_(VALUE) add esi, dword ptr [eax + VALUE]
#define ADD_ESI_FROM_PTR_EBX_(VALUE) add esi, dword ptr [ebx + VALUE]
#define ADD_ESI_FROM_PTR_ECX_(VALUE) add esi, dword ptr [ecx + VALUE]
#define ADD_ESI_FROM_PTR_EDX_(VALUE) add esi, dword ptr [edx + VALUE]
#define ADD_ESI_FROM_PTR_EDI_(VALUE) add esi, dword ptr [edi + VALUE]
#define ADD_ESI_FROM_PTR_ESI_(VALUE) add esi, dword ptr [esi + VALUE]
#define ADD_ESI_FROM_PTR_EBP_(VALUE) add esi, dword ptr [ebp + VALUE]
#define ADD_ESI_FROM_PTR_ESP_(VALUE) add esi, dword ptr [esp + VALUE]

#define ADD_EBP_FROM_PTR_RAX_(VALUE) add ebp, dword ptr [rax + VALUE]
#define ADD_EBP_FROM_PTR_RBX_(VALUE) add ebp, dword ptr [rbx + VALUE]
#define ADD_EBP_FROM_PTR_RCX_(VALUE) add ebp, dword ptr [rcx + VALUE]
#define ADD_EBP_FROM_PTR_RDX_(VALUE) add ebp, dword ptr [rdx + VALUE]
#define ADD_EBP_FROM_PTR_RDI_(VALUE) add ebp, dword ptr [rdi + VALUE]
#define ADD_EBP_FROM_PTR_RSI_(VALUE) add ebp, dword ptr [rsi + VALUE]
#define ADD_EBP_FROM_PTR_RBP_(VALUE) add ebp, dword ptr [rbp + VALUE]
#define ADD_EBP_FROM_PTR_RSP_(VALUE) add ebp, dword ptr [rsp + VALUE]
#define ADD_EBP_FROM_PTR_R8_(VALUE) add ebp, dword ptr [r8 + VALUE]
#define ADD_EBP_FROM_PTR_R9_(VALUE) add ebp, dword ptr [r9 + VALUE]
#define ADD_EBP_FROM_PTR_R10_(VALUE) add ebp, dword ptr [r10 + VALUE]
#define ADD_EBP_FROM_PTR_R11_(VALUE) add ebp, dword ptr [r11 + VALUE]
#define ADD_EBP_FROM_PTR_R12_(VALUE) add ebp, dword ptr [r12 + VALUE]
#define ADD_EBP_FROM_PTR_R13_(VALUE) add ebp, dword ptr [r13 + VALUE]
#define ADD_EBP_FROM_PTR_R14_(VALUE) add ebp, dword ptr [r14 + VALUE]
#define ADD_EBP_FROM_PTR_R15_(VALUE) add ebp, dword ptr [r15 + VALUE]
#define ADD_EBP_FROM_PTR_EAX_(VALUE) add ebp, dword ptr [eax + VALUE]
#define ADD_EBP_FROM_PTR_EBX_(VALUE) add ebp, dword ptr [ebx + VALUE]
#define ADD_EBP_FROM_PTR_ECX_(VALUE) add ebp, dword ptr [ecx + VALUE]
#define ADD_EBP_FROM_PTR_EDX_(VALUE) add ebp, dword ptr [edx + VALUE]
#define ADD_EBP_FROM_PTR_EDI_(VALUE) add ebp, dword ptr [edi + VALUE]
#define ADD_EBP_FROM_PTR_ESI_(VALUE) add ebp, dword ptr [esi + VALUE]
#define ADD_EBP_FROM_PTR_EBP_(VALUE) add ebp, dword ptr [ebp + VALUE]
#define ADD_EBP_FROM_PTR_ESP_(VALUE) add ebp, dword ptr [esp + VALUE]

#define ADD_ESP_FROM_PTR_RAX_(VALUE) add esp, dword ptr [rax + VALUE]
#define ADD_ESP_FROM_PTR_RBX_(VALUE) add esp, dword ptr [rbx + VALUE]
#define ADD_ESP_FROM_PTR_RCX_(VALUE) add esp, dword ptr [rcx + VALUE]
#define ADD_ESP_FROM_PTR_RDX_(VALUE) add esp, dword ptr [rdx + VALUE]
#define ADD_ESP_FROM_PTR_RDI_(VALUE) add esp, dword ptr [rdi + VALUE]
#define ADD_ESP_FROM_PTR_RSI_(VALUE) add esp, dword ptr [rsi + VALUE]
#define ADD_ESP_FROM_PTR_RBP_(VALUE) add esp, dword ptr [rbp + VALUE]
#define ADD_ESP_FROM_PTR_RSP_(VALUE) add esp, dword ptr [rsp + VALUE]
#define ADD_ESP_FROM_PTR_R8_(VALUE) add esp, dword ptr [r8 + VALUE]
#define ADD_ESP_FROM_PTR_R9_(VALUE) add esp, dword ptr [r9 + VALUE]
#define ADD_ESP_FROM_PTR_R10_(VALUE) add esp, dword ptr [r10 + VALUE]
#define ADD_ESP_FROM_PTR_R11_(VALUE) add esp, dword ptr [r11 + VALUE]
#define ADD_ESP_FROM_PTR_R12_(VALUE) add esp, dword ptr [r12 + VALUE]
#define ADD_ESP_FROM_PTR_R13_(VALUE) add esp, dword ptr [r13 + VALUE]
#define ADD_ESP_FROM_PTR_R14_(VALUE) add esp, dword ptr [r14 + VALUE]
#define ADD_ESP_FROM_PTR_R15_(VALUE) add esp, dword ptr [r15 + VALUE]
#define ADD_ESP_FROM_PTR_EAX_(VALUE) add esp, dword ptr [eax + VALUE]
#define ADD_ESP_FROM_PTR_EBX_(VALUE) add esp, dword ptr [ebx + VALUE]
#define ADD_ESP_FROM_PTR_ECX_(VALUE) add esp, dword ptr [ecx + VALUE]
#define ADD_ESP_FROM_PTR_EDX_(VALUE) add esp, dword ptr [edx + VALUE]
#define ADD_ESP_FROM_PTR_EDI_(VALUE) add esp, dword ptr [edi + VALUE]
#define ADD_ESP_FROM_PTR_ESI_(VALUE) add esp, dword ptr [esi + VALUE]
#define ADD_ESP_FROM_PTR_EBP_(VALUE) add esp, dword ptr [ebp + VALUE]
#define ADD_ESP_FROM_PTR_ESP_(VALUE) add esp, dword ptr [esp + VALUE]

#define ADD_R8D_FROM_PTR_RAX_(VALUE) add r8d, dword ptr [rax + VALUE]
#define ADD_R8D_FROM_PTR_RBX_(VALUE) add r8d, dword ptr [rbx + VALUE]
#define ADD_R8D_FROM_PTR_RCX_(VALUE) add r8d, dword ptr [rcx + VALUE]
#define ADD_R8D_FROM_PTR_RDX_(VALUE) add r8d, dword ptr [rdx + VALUE]
#define ADD_R8D_FROM_PTR_RDI_(VALUE) add r8d, dword ptr [rdi + VALUE]
#define ADD_R8D_FROM_PTR_RSI_(VALUE) add r8d, dword ptr [rsi + VALUE]
#define ADD_R8D_FROM_PTR_RBP_(VALUE) add r8d, dword ptr [rbp + VALUE]
#define ADD_R8D_FROM_PTR_RSP_(VALUE) add r8d, dword ptr [rsp + VALUE]
#define ADD_R8D_FROM_PTR_R8_(VALUE) add r8d, dword ptr [r8 + VALUE]
#define ADD_R8D_FROM_PTR_R9_(VALUE) add r8d, dword ptr [r9 + VALUE]
#define ADD_R8D_FROM_PTR_R10_(VALUE) add r8d, dword ptr [r10 + VALUE]
#define ADD_R8D_FROM_PTR_R11_(VALUE) add r8d, dword ptr [r11 + VALUE]
#define ADD_R8D_FROM_PTR_R12_(VALUE) add r8d, dword ptr [r12 + VALUE]
#define ADD_R8D_FROM_PTR_R13_(VALUE) add r8d, dword ptr [r13 + VALUE]
#define ADD_R8D_FROM_PTR_R14_(VALUE) add r8d, dword ptr [r14 + VALUE]
#define ADD_R8D_FROM_PTR_R15_(VALUE) add r8d, dword ptr [r15 + VALUE]
#define ADD_R8D_FROM_PTR_EAX_(VALUE) add r8d, dword ptr [eax + VALUE]
#define ADD_R8D_FROM_PTR_EBX_(VALUE) add r8d, dword ptr [ebx + VALUE]
#define ADD_R8D_FROM_PTR_ECX_(VALUE) add r8d, dword ptr [ecx + VALUE]
#define ADD_R8D_FROM_PTR_EDX_(VALUE) add r8d, dword ptr [edx + VALUE]
#define ADD_R8D_FROM_PTR_EDI_(VALUE) add r8d, dword ptr [edi + VALUE]
#define ADD_R8D_FROM_PTR_ESI_(VALUE) add r8d, dword ptr [esi + VALUE]
#define ADD_R8D_FROM_PTR_EBP_(VALUE) add r8d, dword ptr [ebp + VALUE]
#define ADD_R8D_FROM_PTR_ESP_(VALUE) add r8d, dword ptr [esp + VALUE]

#define ADD_R9D_FROM_PTR_RAX_(VALUE) add r9d, dword ptr [rax + VALUE]
#define ADD_R9D_FROM_PTR_RBX_(VALUE) add r9d, dword ptr [rbx + VALUE]
#define ADD_R9D_FROM_PTR_RCX_(VALUE) add r9d, dword ptr [rcx + VALUE]
#define ADD_R9D_FROM_PTR_RDX_(VALUE) add r9d, dword ptr [rdx + VALUE]
#define ADD_R9D_FROM_PTR_RDI_(VALUE) add r9d, dword ptr [rdi + VALUE]
#define ADD_R9D_FROM_PTR_RSI_(VALUE) add r9d, dword ptr [rsi + VALUE]
#define ADD_R9D_FROM_PTR_RBP_(VALUE) add r9d, dword ptr [rbp + VALUE]
#define ADD_R9D_FROM_PTR_RSP_(VALUE) add r9d, dword ptr [rsp + VALUE]
#define ADD_R9D_FROM_PTR_R8_(VALUE) add r9d, dword ptr [r8 + VALUE]
#define ADD_R9D_FROM_PTR_R9_(VALUE) add r9d, dword ptr [r9 + VALUE]
#define ADD_R9D_FROM_PTR_R10_(VALUE) add r9d, dword ptr [r10 + VALUE]
#define ADD_R9D_FROM_PTR_R11_(VALUE) add r9d, dword ptr [r11 + VALUE]
#define ADD_R9D_FROM_PTR_R12_(VALUE) add r9d, dword ptr [r12 + VALUE]
#define ADD_R9D_FROM_PTR_R13_(VALUE) add r9d, dword ptr [r13 + VALUE]
#define ADD_R9D_FROM_PTR_R14_(VALUE) add r9d, dword ptr [r14 + VALUE]
#define ADD_R9D_FROM_PTR_R15_(VALUE) add r9d, dword ptr [r15 + VALUE]
#define ADD_R9D_FROM_PTR_EAX_(VALUE) add r9d, dword ptr [eax + VALUE]
#define ADD_R9D_FROM_PTR_EBX_(VALUE) add r9d, dword ptr [ebx + VALUE]
#define ADD_R9D_FROM_PTR_ECX_(VALUE) add r9d, dword ptr [ecx + VALUE]
#define ADD_R9D_FROM_PTR_EDX_(VALUE) add r9d, dword ptr [edx + VALUE]
#define ADD_R9D_FROM_PTR_EDI_(VALUE) add r9d, dword ptr [edi + VALUE]
#define ADD_R9D_FROM_PTR_ESI_(VALUE) add r9d, dword ptr [esi + VALUE]
#define ADD_R9D_FROM_PTR_EBP_(VALUE) add r9d, dword ptr [ebp + VALUE]
#define ADD_R9D_FROM_PTR_ESP_(VALUE) add r9d, dword ptr [esp + VALUE]

#define ADD_R10D_FROM_PTR_RAX_(VALUE) add r10d, dword ptr [rax + VALUE]
#define ADD_R10D_FROM_PTR_RBX_(VALUE) add r10d, dword ptr [rbx + VALUE]
#define ADD_R10D_FROM_PTR_RCX_(VALUE) add r10d, dword ptr [rcx + VALUE]
#define ADD_R10D_FROM_PTR_RDX_(VALUE) add r10d, dword ptr [rdx + VALUE]
#define ADD_R10D_FROM_PTR_RDI_(VALUE) add r10d, dword ptr [rdi + VALUE]
#define ADD_R10D_FROM_PTR_RSI_(VALUE) add r10d, dword ptr [rsi + VALUE]
#define ADD_R10D_FROM_PTR_RBP_(VALUE) add r10d, dword ptr [rbp + VALUE]
#define ADD_R10D_FROM_PTR_RSP_(VALUE) add r10d, dword ptr [rsp + VALUE]
#define ADD_R10D_FROM_PTR_R8_(VALUE) add r10d, dword ptr [r8 + VALUE]
#define ADD_R10D_FROM_PTR_R9_(VALUE) add r10d, dword ptr [r9 + VALUE]
#define ADD_R10D_FROM_PTR_R10_(VALUE) add r10d, dword ptr [r10 + VALUE]
#define ADD_R10D_FROM_PTR_R11_(VALUE) add r10d, dword ptr [r11 + VALUE]
#define ADD_R10D_FROM_PTR_R12_(VALUE) add r10d, dword ptr [r12 + VALUE]
#define ADD_R10D_FROM_PTR_R13_(VALUE) add r10d, dword ptr [r13 + VALUE]
#define ADD_R10D_FROM_PTR_R14_(VALUE) add r10d, dword ptr [r14 + VALUE]
#define ADD_R10D_FROM_PTR_R15_(VALUE) add r10d, dword ptr [r15 + VALUE]
#define ADD_R10D_FROM_PTR_EAX_(VALUE) add r10d, dword ptr [eax + VALUE]
#define ADD_R10D_FROM_PTR_EBX_(VALUE) add r10d, dword ptr [ebx + VALUE]
#define ADD_R10D_FROM_PTR_ECX_(VALUE) add r10d, dword ptr [ecx + VALUE]
#define ADD_R10D_FROM_PTR_EDX_(VALUE) add r10d, dword ptr [edx + VALUE]
#define ADD_R10D_FROM_PTR_EDI_(VALUE) add r10d, dword ptr [edi + VALUE]
#define ADD_R10D_FROM_PTR_ESI_(VALUE) add r10d, dword ptr [esi + VALUE]
#define ADD_R10D_FROM_PTR_EBP_(VALUE) add r10d, dword ptr [ebp + VALUE]
#define ADD_R10D_FROM_PTR_ESP_(VALUE) add r10d, dword ptr [esp + VALUE]

#define ADD_R11D_FROM_PTR_RAX_(VALUE) add r11d, dword ptr [rax + VALUE]
#define ADD_R11D_FROM_PTR_RBX_(VALUE) add r11d, dword ptr [rbx + VALUE]
#define ADD_R11D_FROM_PTR_RCX_(VALUE) add r11d, dword ptr [rcx + VALUE]
#define ADD_R11D_FROM_PTR_RDX_(VALUE) add r11d, dword ptr [rdx + VALUE]
#define ADD_R11D_FROM_PTR_RDI_(VALUE) add r11d, dword ptr [rdi + VALUE]
#define ADD_R11D_FROM_PTR_RSI_(VALUE) add r11d, dword ptr [rsi + VALUE]
#define ADD_R11D_FROM_PTR_RBP_(VALUE) add r11d, dword ptr [rbp + VALUE]
#define ADD_R11D_FROM_PTR_RSP_(VALUE) add r11d, dword ptr [rsp + VALUE]
#define ADD_R11D_FROM_PTR_R8_(VALUE) add r11d, dword ptr [r8 + VALUE]
#define ADD_R11D_FROM_PTR_R9_(VALUE) add r11d, dword ptr [r9 + VALUE]
#define ADD_R11D_FROM_PTR_R10_(VALUE) add r11d, dword ptr [r10 + VALUE]
#define ADD_R11D_FROM_PTR_R11_(VALUE) add r11d, dword ptr [r11 + VALUE]
#define ADD_R11D_FROM_PTR_R12_(VALUE) add r11d, dword ptr [r12 + VALUE]
#define ADD_R11D_FROM_PTR_R13_(VALUE) add r11d, dword ptr [r13 + VALUE]
#define ADD_R11D_FROM_PTR_R14_(VALUE) add r11d, dword ptr [r14 + VALUE]
#define ADD_R11D_FROM_PTR_R15_(VALUE) add r11d, dword ptr [r15 + VALUE]
#define ADD_R11D_FROM_PTR_EAX_(VALUE) add r11d, dword ptr [eax + VALUE]
#define ADD_R11D_FROM_PTR_EBX_(VALUE) add r11d, dword ptr [ebx + VALUE]
#define ADD_R11D_FROM_PTR_ECX_(VALUE) add r11d, dword ptr [ecx + VALUE]
#define ADD_R11D_FROM_PTR_EDX_(VALUE) add r11d, dword ptr [edx + VALUE]
#define ADD_R11D_FROM_PTR_EDI_(VALUE) add r11d, dword ptr [edi + VALUE]
#define ADD_R11D_FROM_PTR_ESI_(VALUE) add r11d, dword ptr [esi + VALUE]
#define ADD_R11D_FROM_PTR_EBP_(VALUE) add r11d, dword ptr [ebp + VALUE]
#define ADD_R11D_FROM_PTR_ESP_(VALUE) add r11d, dword ptr [esp + VALUE]

#define ADD_R12D_FROM_PTR_RAX_(VALUE) add r12d, dword ptr [rax + VALUE]
#define ADD_R12D_FROM_PTR_RBX_(VALUE) add r12d, dword ptr [rbx + VALUE]
#define ADD_R12D_FROM_PTR_RCX_(VALUE) add r12d, dword ptr [rcx + VALUE]
#define ADD_R12D_FROM_PTR_RDX_(VALUE) add r12d, dword ptr [rdx + VALUE]
#define ADD_R12D_FROM_PTR_RDI_(VALUE) add r12d, dword ptr [rdi + VALUE]
#define ADD_R12D_FROM_PTR_RSI_(VALUE) add r12d, dword ptr [rsi + VALUE]
#define ADD_R12D_FROM_PTR_RBP_(VALUE) add r12d, dword ptr [rbp + VALUE]
#define ADD_R12D_FROM_PTR_RSP_(VALUE) add r12d, dword ptr [rsp + VALUE]
#define ADD_R12D_FROM_PTR_R8_(VALUE) add r12d, dword ptr [r8 + VALUE]
#define ADD_R12D_FROM_PTR_R9_(VALUE) add r12d, dword ptr [r9 + VALUE]
#define ADD_R12D_FROM_PTR_R10_(VALUE) add r12d, dword ptr [r10 + VALUE]
#define ADD_R12D_FROM_PTR_R11_(VALUE) add r12d, dword ptr [r11 + VALUE]
#define ADD_R12D_FROM_PTR_R12_(VALUE) add r12d, dword ptr [r12 + VALUE]
#define ADD_R12D_FROM_PTR_R13_(VALUE) add r12d, dword ptr [r13 + VALUE]
#define ADD_R12D_FROM_PTR_R14_(VALUE) add r12d, dword ptr [r14 + VALUE]
#define ADD_R12D_FROM_PTR_R15_(VALUE) add r12d, dword ptr [r15 + VALUE]
#define ADD_R12D_FROM_PTR_EAX_(VALUE) add r12d, dword ptr [eax + VALUE]
#define ADD_R12D_FROM_PTR_EBX_(VALUE) add r12d, dword ptr [ebx + VALUE]
#define ADD_R12D_FROM_PTR_ECX_(VALUE) add r12d, dword ptr [ecx + VALUE]
#define ADD_R12D_FROM_PTR_EDX_(VALUE) add r12d, dword ptr [edx + VALUE]
#define ADD_R12D_FROM_PTR_EDI_(VALUE) add r12d, dword ptr [edi + VALUE]
#define ADD_R12D_FROM_PTR_ESI_(VALUE) add r12d, dword ptr [esi + VALUE]
#define ADD_R12D_FROM_PTR_EBP_(VALUE) add r12d, dword ptr [ebp + VALUE]
#define ADD_R12D_FROM_PTR_ESP_(VALUE) add r12d, dword ptr [esp + VALUE]

#define ADD_R13D_FROM_PTR_RAX_(VALUE) add r13d, dword ptr [rax + VALUE]
#define ADD_R13D_FROM_PTR_RBX_(VALUE) add r13d, dword ptr [rbx + VALUE]
#define ADD_R13D_FROM_PTR_RCX_(VALUE) add r13d, dword ptr [rcx + VALUE]
#define ADD_R13D_FROM_PTR_RDX_(VALUE) add r13d, dword ptr [rdx + VALUE]
#define ADD_R13D_FROM_PTR_RDI_(VALUE) add r13d, dword ptr [rdi + VALUE]
#define ADD_R13D_FROM_PTR_RSI_(VALUE) add r13d, dword ptr [rsi + VALUE]
#define ADD_R13D_FROM_PTR_RBP_(VALUE) add r13d, dword ptr [rbp + VALUE]
#define ADD_R13D_FROM_PTR_RSP_(VALUE) add r13d, dword ptr [rsp + VALUE]
#define ADD_R13D_FROM_PTR_R8_(VALUE) add r13d, dword ptr [r8 + VALUE]
#define ADD_R13D_FROM_PTR_R9_(VALUE) add r13d, dword ptr [r9 + VALUE]
#define ADD_R13D_FROM_PTR_R10_(VALUE) add r13d, dword ptr [r10 + VALUE]
#define ADD_R13D_FROM_PTR_R11_(VALUE) add r13d, dword ptr [r11 + VALUE]
#define ADD_R13D_FROM_PTR_R12_(VALUE) add r13d, dword ptr [r12 + VALUE]
#define ADD_R13D_FROM_PTR_R13_(VALUE) add r13d, dword ptr [r13 + VALUE]
#define ADD_R13D_FROM_PTR_R14_(VALUE) add r13d, dword ptr [r14 + VALUE]
#define ADD_R13D_FROM_PTR_R15_(VALUE) add r13d, dword ptr [r15 + VALUE]
#define ADD_R13D_FROM_PTR_EAX_(VALUE) add r13d, dword ptr [eax + VALUE]
#define ADD_R13D_FROM_PTR_EBX_(VALUE) add r13d, dword ptr [ebx + VALUE]
#define ADD_R13D_FROM_PTR_ECX_(VALUE) add r13d, dword ptr [ecx + VALUE]
#define ADD_R13D_FROM_PTR_EDX_(VALUE) add r13d, dword ptr [edx + VALUE]
#define ADD_R13D_FROM_PTR_EDI_(VALUE) add r13d, dword ptr [edi + VALUE]
#define ADD_R13D_FROM_PTR_ESI_(VALUE) add r13d, dword ptr [esi + VALUE]
#define ADD_R13D_FROM_PTR_EBP_(VALUE) add r13d, dword ptr [ebp + VALUE]
#define ADD_R13D_FROM_PTR_ESP_(VALUE) add r13d, dword ptr [esp + VALUE]

#define ADD_R14D_FROM_PTR_RAX_(VALUE) add r14d, dword ptr [rax + VALUE]
#define ADD_R14D_FROM_PTR_RBX_(VALUE) add r14d, dword ptr [rbx + VALUE]
#define ADD_R14D_FROM_PTR_RCX_(VALUE) add r14d, dword ptr [rcx + VALUE]
#define ADD_R14D_FROM_PTR_RDX_(VALUE) add r14d, dword ptr [rdx + VALUE]
#define ADD_R14D_FROM_PTR_RDI_(VALUE) add r14d, dword ptr [rdi + VALUE]
#define ADD_R14D_FROM_PTR_RSI_(VALUE) add r14d, dword ptr [rsi + VALUE]
#define ADD_R14D_FROM_PTR_RBP_(VALUE) add r14d, dword ptr [rbp + VALUE]
#define ADD_R14D_FROM_PTR_RSP_(VALUE) add r14d, dword ptr [rsp + VALUE]
#define ADD_R14D_FROM_PTR_R8_(VALUE) add r14d, dword ptr [r8 + VALUE]
#define ADD_R14D_FROM_PTR_R9_(VALUE) add r14d, dword ptr [r9 + VALUE]
#define ADD_R14D_FROM_PTR_R10_(VALUE) add r14d, dword ptr [r10 + VALUE]
#define ADD_R14D_FROM_PTR_R11_(VALUE) add r14d, dword ptr [r11 + VALUE]
#define ADD_R14D_FROM_PTR_R12_(VALUE) add r14d, dword ptr [r12 + VALUE]
#define ADD_R14D_FROM_PTR_R13_(VALUE) add r14d, dword ptr [r13 + VALUE]
#define ADD_R14D_FROM_PTR_R14_(VALUE) add r14d, dword ptr [r14 + VALUE]
#define ADD_R14D_FROM_PTR_R15_(VALUE) add r14d, dword ptr [r15 + VALUE]
#define ADD_R14D_FROM_PTR_EAX_(VALUE) add r14d, dword ptr [eax + VALUE]
#define ADD_R14D_FROM_PTR_EBX_(VALUE) add r14d, dword ptr [ebx + VALUE]
#define ADD_R14D_FROM_PTR_ECX_(VALUE) add r14d, dword ptr [ecx + VALUE]
#define ADD_R14D_FROM_PTR_EDX_(VALUE) add r14d, dword ptr [edx + VALUE]
#define ADD_R14D_FROM_PTR_EDI_(VALUE) add r14d, dword ptr [edi + VALUE]
#define ADD_R14D_FROM_PTR_ESI_(VALUE) add r14d, dword ptr [esi + VALUE]
#define ADD_R14D_FROM_PTR_EBP_(VALUE) add r14d, dword ptr [ebp + VALUE]
#define ADD_R14D_FROM_PTR_ESP_(VALUE) add r14d, dword ptr [esp + VALUE]

#define ADD_R15D_FROM_PTR_RAX_(VALUE) add r15d, dword ptr [rax + VALUE]
#define ADD_R15D_FROM_PTR_RBX_(VALUE) add r15d, dword ptr [rbx + VALUE]
#define ADD_R15D_FROM_PTR_RCX_(VALUE) add r15d, dword ptr [rcx + VALUE]
#define ADD_R15D_FROM_PTR_RDX_(VALUE) add r15d, dword ptr [rdx + VALUE]
#define ADD_R15D_FROM_PTR_RDI_(VALUE) add r15d, dword ptr [rdi + VALUE]
#define ADD_R15D_FROM_PTR_RSI_(VALUE) add r15d, dword ptr [rsi + VALUE]
#define ADD_R15D_FROM_PTR_RBP_(VALUE) add r15d, dword ptr [rbp + VALUE]
#define ADD_R15D_FROM_PTR_RSP_(VALUE) add r15d, dword ptr [rsp + VALUE]
#define ADD_R15D_FROM_PTR_R8_(VALUE) add r15d, dword ptr [r8 + VALUE]
#define ADD_R15D_FROM_PTR_R9_(VALUE) add r15d, dword ptr [r9 + VALUE]
#define ADD_R15D_FROM_PTR_R10_(VALUE) add r15d, dword ptr [r10 + VALUE]
#define ADD_R15D_FROM_PTR_R11_(VALUE) add r15d, dword ptr [r11 + VALUE]
#define ADD_R15D_FROM_PTR_R12_(VALUE) add r15d, dword ptr [r12 + VALUE]
#define ADD_R15D_FROM_PTR_R13_(VALUE) add r15d, dword ptr [r13 + VALUE]
#define ADD_R15D_FROM_PTR_R14_(VALUE) add r15d, dword ptr [r14 + VALUE]
#define ADD_R15D_FROM_PTR_R15_(VALUE) add r15d, dword ptr [r15 + VALUE]
#define ADD_R15D_FROM_PTR_EAX_(VALUE) add r15d, dword ptr [eax + VALUE]
#define ADD_R15D_FROM_PTR_EBX_(VALUE) add r15d, dword ptr [ebx + VALUE]
#define ADD_R15D_FROM_PTR_ECX_(VALUE) add r15d, dword ptr [ecx + VALUE]
#define ADD_R15D_FROM_PTR_EDX_(VALUE) add r15d, dword ptr [edx + VALUE]
#define ADD_R15D_FROM_PTR_EDI_(VALUE) add r15d, dword ptr [edi + VALUE]
#define ADD_R15D_FROM_PTR_ESI_(VALUE) add r15d, dword ptr [esi + VALUE]
#define ADD_R15D_FROM_PTR_EBP_(VALUE) add r15d, dword ptr [ebp + VALUE]
#define ADD_R15D_FROM_PTR_ESP_(VALUE) add r15d, dword ptr [esp + VALUE]

#define ADD_EAX_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], eax
#define ADD_EAX_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], eax
#define ADD_EAX_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], eax
#define ADD_EAX_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], eax
#define ADD_EAX_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], eax
#define ADD_EAX_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], eax
#define ADD_EAX_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], eax
#define ADD_EAX_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], eax
#define ADD_EAX_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], eax
#define ADD_EAX_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], eax
#define ADD_EAX_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], eax
#define ADD_EAX_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], eax
#define ADD_EAX_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], eax
#define ADD_EAX_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], eax
#define ADD_EAX_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], eax
#define ADD_EAX_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], eax
#define ADD_EAX_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], eax
#define ADD_EAX_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], eax
#define ADD_EAX_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], eax
#define ADD_EAX_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], eax
#define ADD_EAX_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], eax
#define ADD_EAX_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], eax
#define ADD_EAX_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], eax
#define ADD_EAX_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], eax

#define ADD_EBX_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], ebx
#define ADD_EBX_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], ebx
#define ADD_EBX_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], ebx
#define ADD_EBX_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], ebx
#define ADD_EBX_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], ebx
#define ADD_EBX_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], ebx
#define ADD_EBX_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], ebx
#define ADD_EBX_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], ebx
#define ADD_EBX_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], ebx
#define ADD_EBX_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], ebx
#define ADD_EBX_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], ebx
#define ADD_EBX_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], ebx
#define ADD_EBX_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], ebx
#define ADD_EBX_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], ebx
#define ADD_EBX_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], ebx
#define ADD_EBX_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], ebx
#define ADD_EBX_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], ebx
#define ADD_EBX_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], ebx
#define ADD_EBX_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], ebx
#define ADD_EBX_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], ebx
#define ADD_EBX_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], ebx
#define ADD_EBX_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], ebx
#define ADD_EBX_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], ebx
#define ADD_EBX_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], ebx

#define ADD_ECX_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], ecx
#define ADD_ECX_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], ecx
#define ADD_ECX_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], ecx
#define ADD_ECX_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], ecx
#define ADD_ECX_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], ecx
#define ADD_ECX_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], ecx
#define ADD_ECX_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], ecx
#define ADD_ECX_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], ecx
#define ADD_ECX_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], ecx
#define ADD_ECX_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], ecx
#define ADD_ECX_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], ecx
#define ADD_ECX_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], ecx
#define ADD_ECX_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], ecx
#define ADD_ECX_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], ecx
#define ADD_ECX_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], ecx
#define ADD_ECX_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], ecx
#define ADD_ECX_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], ecx
#define ADD_ECX_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], ecx
#define ADD_ECX_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], ecx
#define ADD_ECX_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], ecx
#define ADD_ECX_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], ecx
#define ADD_ECX_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], ecx
#define ADD_ECX_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], ecx
#define ADD_ECX_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], ecx

#define ADD_EDX_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], edx
#define ADD_EDX_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], edx
#define ADD_EDX_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], edx
#define ADD_EDX_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], edx
#define ADD_EDX_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], edx
#define ADD_EDX_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], edx
#define ADD_EDX_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], edx
#define ADD_EDX_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], edx
#define ADD_EDX_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], edx
#define ADD_EDX_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], edx
#define ADD_EDX_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], edx
#define ADD_EDX_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], edx
#define ADD_EDX_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], edx
#define ADD_EDX_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], edx
#define ADD_EDX_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], edx
#define ADD_EDX_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], edx
#define ADD_EDX_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], edx
#define ADD_EDX_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], edx
#define ADD_EDX_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], edx
#define ADD_EDX_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], edx
#define ADD_EDX_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], edx
#define ADD_EDX_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], edx
#define ADD_EDX_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], edx
#define ADD_EDX_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], edx

#define ADD_EDI_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], edi
#define ADD_EDI_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], edi
#define ADD_EDI_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], edi
#define ADD_EDI_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], edi
#define ADD_EDI_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], edi
#define ADD_EDI_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], edi
#define ADD_EDI_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], edi
#define ADD_EDI_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], edi
#define ADD_EDI_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], edi
#define ADD_EDI_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], edi
#define ADD_EDI_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], edi
#define ADD_EDI_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], edi
#define ADD_EDI_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], edi
#define ADD_EDI_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], edi
#define ADD_EDI_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], edi
#define ADD_EDI_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], edi
#define ADD_EDI_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], edi
#define ADD_EDI_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], edi
#define ADD_EDI_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], edi
#define ADD_EDI_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], edi
#define ADD_EDI_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], edi
#define ADD_EDI_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], edi
#define ADD_EDI_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], edi
#define ADD_EDI_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], edi

#define ADD_ESI_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], esi
#define ADD_ESI_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], esi
#define ADD_ESI_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], esi
#define ADD_ESI_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], esi
#define ADD_ESI_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], esi
#define ADD_ESI_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], esi
#define ADD_ESI_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], esi
#define ADD_ESI_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], esi
#define ADD_ESI_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], esi
#define ADD_ESI_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], esi
#define ADD_ESI_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], esi
#define ADD_ESI_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], esi
#define ADD_ESI_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], esi
#define ADD_ESI_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], esi
#define ADD_ESI_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], esi
#define ADD_ESI_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], esi
#define ADD_ESI_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], esi
#define ADD_ESI_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], esi
#define ADD_ESI_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], esi
#define ADD_ESI_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], esi
#define ADD_ESI_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], esi
#define ADD_ESI_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], esi
#define ADD_ESI_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], esi
#define ADD_ESI_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], esi

#define ADD_EBP_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], ebp
#define ADD_EBP_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], ebp
#define ADD_EBP_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], ebp
#define ADD_EBP_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], ebp
#define ADD_EBP_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], ebp
#define ADD_EBP_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], ebp
#define ADD_EBP_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], ebp
#define ADD_EBP_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], ebp
#define ADD_EBP_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], ebp
#define ADD_EBP_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], ebp
#define ADD_EBP_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], ebp
#define ADD_EBP_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], ebp
#define ADD_EBP_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], ebp
#define ADD_EBP_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], ebp
#define ADD_EBP_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], ebp
#define ADD_EBP_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], ebp
#define ADD_EBP_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], ebp
#define ADD_EBP_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], ebp
#define ADD_EBP_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], ebp
#define ADD_EBP_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], ebp
#define ADD_EBP_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], ebp
#define ADD_EBP_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], ebp
#define ADD_EBP_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], ebp
#define ADD_EBP_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], ebp

#define ADD_ESP_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], esp
#define ADD_ESP_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], esp
#define ADD_ESP_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], esp
#define ADD_ESP_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], esp
#define ADD_ESP_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], esp
#define ADD_ESP_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], esp
#define ADD_ESP_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], esp
#define ADD_ESP_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], esp
#define ADD_ESP_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], esp
#define ADD_ESP_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], esp
#define ADD_ESP_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], esp
#define ADD_ESP_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], esp
#define ADD_ESP_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], esp
#define ADD_ESP_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], esp
#define ADD_ESP_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], esp
#define ADD_ESP_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], esp
#define ADD_ESP_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], esp
#define ADD_ESP_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], esp
#define ADD_ESP_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], esp
#define ADD_ESP_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], esp
#define ADD_ESP_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], esp
#define ADD_ESP_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], esp
#define ADD_ESP_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], esp
#define ADD_ESP_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], esp

#define ADD_R8D_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], r8d
#define ADD_R8D_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], r8d
#define ADD_R8D_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], r8d
#define ADD_R8D_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], r8d
#define ADD_R8D_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], r8d
#define ADD_R8D_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], r8d
#define ADD_R8D_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], r8d
#define ADD_R8D_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], r8d
#define ADD_R8D_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], r8d
#define ADD_R8D_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], r8d
#define ADD_R8D_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], r8d
#define ADD_R8D_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], r8d
#define ADD_R8D_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], r8d
#define ADD_R8D_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], r8d
#define ADD_R8D_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], r8d
#define ADD_R8D_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], r8d
#define ADD_R8D_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], r8d
#define ADD_R8D_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], r8d
#define ADD_R8D_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], r8d
#define ADD_R8D_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], r8d
#define ADD_R8D_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], r8d
#define ADD_R8D_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], r8d
#define ADD_R8D_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], r8d
#define ADD_R8D_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], r8d

#define ADD_R9D_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], r9d
#define ADD_R9D_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], r9d
#define ADD_R9D_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], r9d
#define ADD_R9D_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], r9d
#define ADD_R9D_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], r9d
#define ADD_R9D_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], r9d
#define ADD_R9D_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], r9d
#define ADD_R9D_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], r9d
#define ADD_R9D_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], r9d
#define ADD_R9D_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], r9d
#define ADD_R9D_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], r9d
#define ADD_R9D_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], r9d
#define ADD_R9D_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], r9d
#define ADD_R9D_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], r9d
#define ADD_R9D_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], r9d
#define ADD_R9D_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], r9d
#define ADD_R9D_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], r9d
#define ADD_R9D_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], r9d
#define ADD_R9D_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], r9d
#define ADD_R9D_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], r9d
#define ADD_R9D_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], r9d
#define ADD_R9D_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], r9d
#define ADD_R9D_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], r9d
#define ADD_R9D_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], r9d

#define ADD_R10D_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], r10d
#define ADD_R10D_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], r10d
#define ADD_R10D_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], r10d
#define ADD_R10D_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], r10d
#define ADD_R10D_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], r10d
#define ADD_R10D_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], r10d
#define ADD_R10D_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], r10d
#define ADD_R10D_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], r10d
#define ADD_R10D_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], r10d
#define ADD_R10D_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], r10d
#define ADD_R10D_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], r10d
#define ADD_R10D_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], r10d
#define ADD_R10D_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], r10d
#define ADD_R10D_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], r10d
#define ADD_R10D_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], r10d
#define ADD_R10D_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], r10d
#define ADD_R10D_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], r10d
#define ADD_R10D_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], r10d
#define ADD_R10D_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], r10d
#define ADD_R10D_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], r10d
#define ADD_R10D_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], r10d
#define ADD_R10D_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], r10d
#define ADD_R10D_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], r10d
#define ADD_R10D_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], r10d

#define ADD_R11D_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], r11d
#define ADD_R11D_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], r11d
#define ADD_R11D_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], r11d
#define ADD_R11D_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], r11d
#define ADD_R11D_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], r11d
#define ADD_R11D_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], r11d
#define ADD_R11D_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], r11d
#define ADD_R11D_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], r11d
#define ADD_R11D_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], r11d
#define ADD_R11D_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], r11d
#define ADD_R11D_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], r11d
#define ADD_R11D_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], r11d
#define ADD_R11D_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], r11d
#define ADD_R11D_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], r11d
#define ADD_R11D_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], r11d
#define ADD_R11D_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], r11d
#define ADD_R11D_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], r11d
#define ADD_R11D_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], r11d
#define ADD_R11D_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], r11d
#define ADD_R11D_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], r11d
#define ADD_R11D_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], r11d
#define ADD_R11D_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], r11d
#define ADD_R11D_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], r11d
#define ADD_R11D_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], r11d

#define ADD_R12D_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], r12d
#define ADD_R12D_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], r12d
#define ADD_R12D_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], r12d
#define ADD_R12D_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], r12d
#define ADD_R12D_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], r12d
#define ADD_R12D_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], r12d
#define ADD_R12D_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], r12d
#define ADD_R12D_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], r12d
#define ADD_R12D_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], r12d
#define ADD_R12D_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], r12d
#define ADD_R12D_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], r12d
#define ADD_R12D_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], r12d
#define ADD_R12D_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], r12d
#define ADD_R12D_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], r12d
#define ADD_R12D_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], r12d
#define ADD_R12D_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], r12d
#define ADD_R12D_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], r12d
#define ADD_R12D_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], r12d
#define ADD_R12D_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], r12d
#define ADD_R12D_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], r12d
#define ADD_R12D_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], r12d
#define ADD_R12D_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], r12d
#define ADD_R12D_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], r12d
#define ADD_R12D_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], r12d

#define ADD_R13D_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], r13d
#define ADD_R13D_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], r13d
#define ADD_R13D_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], r13d
#define ADD_R13D_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], r13d
#define ADD_R13D_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], r13d
#define ADD_R13D_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], r13d
#define ADD_R13D_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], r13d
#define ADD_R13D_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], r13d
#define ADD_R13D_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], r13d
#define ADD_R13D_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], r13d
#define ADD_R13D_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], r13d
#define ADD_R13D_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], r13d
#define ADD_R13D_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], r13d
#define ADD_R13D_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], r13d
#define ADD_R13D_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], r13d
#define ADD_R13D_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], r13d
#define ADD_R13D_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], r13d
#define ADD_R13D_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], r13d
#define ADD_R13D_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], r13d
#define ADD_R13D_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], r13d
#define ADD_R13D_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], r13d
#define ADD_R13D_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], r13d
#define ADD_R13D_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], r13d
#define ADD_R13D_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], r13d

#define ADD_R14D_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], r14d
#define ADD_R14D_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], r14d
#define ADD_R14D_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], r14d
#define ADD_R14D_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], r14d
#define ADD_R14D_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], r14d
#define ADD_R14D_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], r14d
#define ADD_R14D_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], r14d
#define ADD_R14D_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], r14d
#define ADD_R14D_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], r14d
#define ADD_R14D_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], r14d
#define ADD_R14D_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], r14d
#define ADD_R14D_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], r14d
#define ADD_R14D_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], r14d
#define ADD_R14D_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], r14d
#define ADD_R14D_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], r14d
#define ADD_R14D_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], r14d
#define ADD_R14D_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], r14d
#define ADD_R14D_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], r14d
#define ADD_R14D_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], r14d
#define ADD_R14D_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], r14d
#define ADD_R14D_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], r14d
#define ADD_R14D_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], r14d
#define ADD_R14D_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], r14d
#define ADD_R14D_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], r14d

#define ADD_R15D_TO_PTR_RAX_(VALUE) add dword ptr [rax + VALUE], r15d
#define ADD_R15D_TO_PTR_RBX_(VALUE) add dword ptr [rbx + VALUE], r15d
#define ADD_R15D_TO_PTR_RCX_(VALUE) add dword ptr [rcx + VALUE], r15d
#define ADD_R15D_TO_PTR_RDX_(VALUE) add dword ptr [rdx + VALUE], r15d
#define ADD_R15D_TO_PTR_RDI_(VALUE) add dword ptr [rdi + VALUE], r15d
#define ADD_R15D_TO_PTR_RSI_(VALUE) add dword ptr [rsi + VALUE], r15d
#define ADD_R15D_TO_PTR_RBP_(VALUE) add dword ptr [rbp + VALUE], r15d
#define ADD_R15D_TO_PTR_RSP_(VALUE) add dword ptr [rsp + VALUE], r15d
#define ADD_R15D_TO_PTR_R8_(VALUE) add dword ptr [r8 + VALUE], r15d
#define ADD_R15D_TO_PTR_R9_(VALUE) add dword ptr [r9 + VALUE], r15d
#define ADD_R15D_TO_PTR_R10_(VALUE) add dword ptr [r10 + VALUE], r15d
#define ADD_R15D_TO_PTR_R11_(VALUE) add dword ptr [r11 + VALUE], r15d
#define ADD_R15D_TO_PTR_R12_(VALUE) add dword ptr [r12 + VALUE], r15d
#define ADD_R15D_TO_PTR_R13_(VALUE) add dword ptr [r13 + VALUE], r15d
#define ADD_R15D_TO_PTR_R14_(VALUE) add dword ptr [r14 + VALUE], r15d
#define ADD_R15D_TO_PTR_R15_(VALUE) add dword ptr [r15 + VALUE], r15d
#define ADD_R15D_TO_PTR_EAX_(VALUE) add dword ptr [eax + VALUE], r15d
#define ADD_R15D_TO_PTR_EBX_(VALUE) add dword ptr [ebx + VALUE], r15d
#define ADD_R15D_TO_PTR_ECX_(VALUE) add dword ptr [ecx + VALUE], r15d
#define ADD_R15D_TO_PTR_EDX_(VALUE) add dword ptr [edx + VALUE], r15d
#define ADD_R15D_TO_PTR_EDI_(VALUE) add dword ptr [edi + VALUE], r15d
#define ADD_R15D_TO_PTR_ESI_(VALUE) add dword ptr [esi + VALUE], r15d
#define ADD_R15D_TO_PTR_EBP_(VALUE) add dword ptr [ebp + VALUE], r15d
#define ADD_R15D_TO_PTR_ESP_(VALUE) add dword ptr [esp + VALUE], r15d
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
