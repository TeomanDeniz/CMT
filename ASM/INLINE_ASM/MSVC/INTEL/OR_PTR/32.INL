#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define OR_EAX_FROM_PTR_(VALUE) or eax, dword ptr [VALUE]
#define OR_EBX_FROM_PTR_(VALUE) or ebx, dword ptr [VALUE]
#define OR_ECX_FROM_PTR_(VALUE) or ecx, dword ptr [VALUE]
#define OR_EDX_FROM_PTR_(VALUE) or edx, dword ptr [VALUE]
#define OR_EDI_FROM_PTR_(VALUE) or edi, dword ptr [VALUE]
#define OR_ESI_FROM_PTR_(VALUE) or esi, dword ptr [VALUE]
#define OR_EBP_FROM_PTR_(VALUE) or ebp, dword ptr [VALUE]
#define OR_ESP_FROM_PTR_(VALUE) or esp, dword ptr [VALUE]

#define OR_EAX_TO_PTR_(VALUE) or dword ptr [VALUE], eax
#define OR_EBX_TO_PTR_(VALUE) or dword ptr [VALUE], ebx
#define OR_ECX_TO_PTR_(VALUE) or dword ptr [VALUE], ecx
#define OR_EDX_TO_PTR_(VALUE) or dword ptr [VALUE], edx
#define OR_EDI_TO_PTR_(VALUE) or dword ptr [VALUE], edi
#define OR_ESI_TO_PTR_(VALUE) or dword ptr [VALUE], esi
#define OR_EBP_TO_PTR_(VALUE) or dword ptr [VALUE], ebp
#define OR_ESP_TO_PTR_(VALUE) or dword ptr [VALUE], esp

#define OR_EAX_FROM_PTR_EAX or eax, dword ptr [eax]
#define OR_EAX_FROM_PTR_EBX or eax, dword ptr [ebx]
#define OR_EAX_FROM_PTR_ECX or eax, dword ptr [ecx]
#define OR_EAX_FROM_PTR_EDX or eax, dword ptr [edx]
#define OR_EAX_FROM_PTR_EDI or eax, dword ptr [edi]
#define OR_EAX_FROM_PTR_ESI or eax, dword ptr [esi]
#define OR_EAX_FROM_PTR_EBP or eax, dword ptr [ebp]
#define OR_EAX_FROM_PTR_ESP or eax, dword ptr [esp]
#define OR_EAX_FROM_PTR_BX or eax, dword ptr [bx]
#define OR_EAX_FROM_PTR_BP or eax, dword ptr [bp]
#define OR_EAX_FROM_PTR_SI or eax, dword ptr [si]
#define OR_EAX_FROM_PTR_DI or eax, dword ptr [di]

#define OR_EBX_FROM_PTR_EAX or ebx, dword ptr [eax]
#define OR_EBX_FROM_PTR_EBX or ebx, dword ptr [ebx]
#define OR_EBX_FROM_PTR_ECX or ebx, dword ptr [ecx]
#define OR_EBX_FROM_PTR_EDX or ebx, dword ptr [edx]
#define OR_EBX_FROM_PTR_EDI or ebx, dword ptr [edi]
#define OR_EBX_FROM_PTR_ESI or ebx, dword ptr [esi]
#define OR_EBX_FROM_PTR_EBP or ebx, dword ptr [ebp]
#define OR_EBX_FROM_PTR_ESP or ebx, dword ptr [esp]
#define OR_EBX_FROM_PTR_BX or ebx, dword ptr [bx]
#define OR_EBX_FROM_PTR_BP or ebx, dword ptr [bp]
#define OR_EBX_FROM_PTR_SI or ebx, dword ptr [si]
#define OR_EBX_FROM_PTR_DI or ebx, dword ptr [di]

#define OR_ECX_FROM_PTR_EAX or ecx, dword ptr [eax]
#define OR_ECX_FROM_PTR_EBX or ecx, dword ptr [ebx]
#define OR_ECX_FROM_PTR_ECX or ecx, dword ptr [ecx]
#define OR_ECX_FROM_PTR_EDX or ecx, dword ptr [edx]
#define OR_ECX_FROM_PTR_EDI or ecx, dword ptr [edi]
#define OR_ECX_FROM_PTR_ESI or ecx, dword ptr [esi]
#define OR_ECX_FROM_PTR_EBP or ecx, dword ptr [ebp]
#define OR_ECX_FROM_PTR_ESP or ecx, dword ptr [esp]
#define OR_ECX_FROM_PTR_BX or ecx, dword ptr [bx]
#define OR_ECX_FROM_PTR_BP or ecx, dword ptr [bp]
#define OR_ECX_FROM_PTR_SI or ecx, dword ptr [si]
#define OR_ECX_FROM_PTR_DI or ecx, dword ptr [di]

#define OR_EDX_FROM_PTR_EAX or edx, dword ptr [eax]
#define OR_EDX_FROM_PTR_EBX or edx, dword ptr [ebx]
#define OR_EDX_FROM_PTR_ECX or edx, dword ptr [ecx]
#define OR_EDX_FROM_PTR_EDX or edx, dword ptr [edx]
#define OR_EDX_FROM_PTR_EDI or edx, dword ptr [edi]
#define OR_EDX_FROM_PTR_ESI or edx, dword ptr [esi]
#define OR_EDX_FROM_PTR_EBP or edx, dword ptr [ebp]
#define OR_EDX_FROM_PTR_ESP or edx, dword ptr [esp]
#define OR_EDX_FROM_PTR_BX or edx, dword ptr [bx]
#define OR_EDX_FROM_PTR_BP or edx, dword ptr [bp]
#define OR_EDX_FROM_PTR_SI or edx, dword ptr [si]
#define OR_EDX_FROM_PTR_DI or edx, dword ptr [di]

#define OR_EDI_FROM_PTR_EAX or edi, dword ptr [eax]
#define OR_EDI_FROM_PTR_EBX or edi, dword ptr [ebx]
#define OR_EDI_FROM_PTR_ECX or edi, dword ptr [ecx]
#define OR_EDI_FROM_PTR_EDX or edi, dword ptr [edx]
#define OR_EDI_FROM_PTR_EDI or edi, dword ptr [edi]
#define OR_EDI_FROM_PTR_ESI or edi, dword ptr [esi]
#define OR_EDI_FROM_PTR_EBP or edi, dword ptr [ebp]
#define OR_EDI_FROM_PTR_ESP or edi, dword ptr [esp]
#define OR_EDI_FROM_PTR_BX or edi, dword ptr [bx]
#define OR_EDI_FROM_PTR_BP or edi, dword ptr [bp]
#define OR_EDI_FROM_PTR_SI or edi, dword ptr [si]
#define OR_EDI_FROM_PTR_DI or edi, dword ptr [di]

#define OR_ESI_FROM_PTR_EAX or esi, dword ptr [eax]
#define OR_ESI_FROM_PTR_EBX or esi, dword ptr [ebx]
#define OR_ESI_FROM_PTR_ECX or esi, dword ptr [ecx]
#define OR_ESI_FROM_PTR_EDX or esi, dword ptr [edx]
#define OR_ESI_FROM_PTR_EDI or esi, dword ptr [edi]
#define OR_ESI_FROM_PTR_ESI or esi, dword ptr [esi]
#define OR_ESI_FROM_PTR_EBP or esi, dword ptr [ebp]
#define OR_ESI_FROM_PTR_ESP or esi, dword ptr [esp]
#define OR_ESI_FROM_PTR_BX or esi, dword ptr [bx]
#define OR_ESI_FROM_PTR_BP or esi, dword ptr [bp]
#define OR_ESI_FROM_PTR_SI or esi, dword ptr [si]
#define OR_ESI_FROM_PTR_DI or esi, dword ptr [di]

#define OR_EBP_FROM_PTR_EAX or ebp, dword ptr [eax]
#define OR_EBP_FROM_PTR_EBX or ebp, dword ptr [ebx]
#define OR_EBP_FROM_PTR_ECX or ebp, dword ptr [ecx]
#define OR_EBP_FROM_PTR_EDX or ebp, dword ptr [edx]
#define OR_EBP_FROM_PTR_EDI or ebp, dword ptr [edi]
#define OR_EBP_FROM_PTR_ESI or ebp, dword ptr [esi]
#define OR_EBP_FROM_PTR_EBP or ebp, dword ptr [ebp]
#define OR_EBP_FROM_PTR_ESP or ebp, dword ptr [esp]
#define OR_EBP_FROM_PTR_BX or ebp, dword ptr [bx]
#define OR_EBP_FROM_PTR_BP or ebp, dword ptr [bp]
#define OR_EBP_FROM_PTR_SI or ebp, dword ptr [si]
#define OR_EBP_FROM_PTR_DI or ebp, dword ptr [di]

#define OR_ESP_FROM_PTR_EAX or esp, dword ptr [eax]
#define OR_ESP_FROM_PTR_EBX or esp, dword ptr [ebx]
#define OR_ESP_FROM_PTR_ECX or esp, dword ptr [ecx]
#define OR_ESP_FROM_PTR_EDX or esp, dword ptr [edx]
#define OR_ESP_FROM_PTR_EDI or esp, dword ptr [edi]
#define OR_ESP_FROM_PTR_ESI or esp, dword ptr [esi]
#define OR_ESP_FROM_PTR_EBP or esp, dword ptr [ebp]
#define OR_ESP_FROM_PTR_ESP or esp, dword ptr [esp]
#define OR_ESP_FROM_PTR_BX or esp, dword ptr [bx]
#define OR_ESP_FROM_PTR_BP or esp, dword ptr [bp]
#define OR_ESP_FROM_PTR_SI or esp, dword ptr [si]
#define OR_ESP_FROM_PTR_DI or esp, dword ptr [di]

#define OR_EAX_TO_PTR_EAX or dword ptr [eax], eax
#define OR_EAX_TO_PTR_EBX or dword ptr [ebx], eax
#define OR_EAX_TO_PTR_ECX or dword ptr [ecx], eax
#define OR_EAX_TO_PTR_EDX or dword ptr [edx], eax
#define OR_EAX_TO_PTR_EDI or dword ptr [edi], eax
#define OR_EAX_TO_PTR_ESI or dword ptr [esi], eax
#define OR_EAX_TO_PTR_EBP or dword ptr [ebp], eax
#define OR_EAX_TO_PTR_ESP or dword ptr [esp], eax
#define OR_EAX_TO_PTR_BX or dword ptr [bx], eax
#define OR_EAX_TO_PTR_BP or dword ptr [bp], eax
#define OR_EAX_TO_PTR_SI or dword ptr [si], eax
#define OR_EAX_TO_PTR_DI or dword ptr [di], eax

#define OR_EBX_TO_PTR_EAX or dword ptr [eax], ebx
#define OR_EBX_TO_PTR_EBX or dword ptr [ebx], ebx
#define OR_EBX_TO_PTR_ECX or dword ptr [ecx], ebx
#define OR_EBX_TO_PTR_EDX or dword ptr [edx], ebx
#define OR_EBX_TO_PTR_EDI or dword ptr [edi], ebx
#define OR_EBX_TO_PTR_ESI or dword ptr [esi], ebx
#define OR_EBX_TO_PTR_EBP or dword ptr [ebp], ebx
#define OR_EBX_TO_PTR_ESP or dword ptr [esp], ebx
#define OR_EBX_TO_PTR_BX or dword ptr [bx], ebx
#define OR_EBX_TO_PTR_BP or dword ptr [bp], ebx
#define OR_EBX_TO_PTR_SI or dword ptr [si], ebx
#define OR_EBX_TO_PTR_DI or dword ptr [di], ebx

#define OR_ECX_TO_PTR_EAX or dword ptr [eax], ecx
#define OR_ECX_TO_PTR_EBX or dword ptr [ebx], ecx
#define OR_ECX_TO_PTR_ECX or dword ptr [ecx], ecx
#define OR_ECX_TO_PTR_EDX or dword ptr [edx], ecx
#define OR_ECX_TO_PTR_EDI or dword ptr [edi], ecx
#define OR_ECX_TO_PTR_ESI or dword ptr [esi], ecx
#define OR_ECX_TO_PTR_EBP or dword ptr [ebp], ecx
#define OR_ECX_TO_PTR_ESP or dword ptr [esp], ecx
#define OR_ECX_TO_PTR_BX or dword ptr [bx], ecx
#define OR_ECX_TO_PTR_BP or dword ptr [bp], ecx
#define OR_ECX_TO_PTR_SI or dword ptr [si], ecx
#define OR_ECX_TO_PTR_DI or dword ptr [di], ecx

#define OR_EDX_TO_PTR_EAX or dword ptr [eax], edx
#define OR_EDX_TO_PTR_EBX or dword ptr [ebx], edx
#define OR_EDX_TO_PTR_ECX or dword ptr [ecx], edx
#define OR_EDX_TO_PTR_EDX or dword ptr [edx], edx
#define OR_EDX_TO_PTR_EDI or dword ptr [edi], edx
#define OR_EDX_TO_PTR_ESI or dword ptr [esi], edx
#define OR_EDX_TO_PTR_EBP or dword ptr [ebp], edx
#define OR_EDX_TO_PTR_ESP or dword ptr [esp], edx
#define OR_EDX_TO_PTR_BX or dword ptr [bx], edx
#define OR_EDX_TO_PTR_BP or dword ptr [bp], edx
#define OR_EDX_TO_PTR_SI or dword ptr [si], edx
#define OR_EDX_TO_PTR_DI or dword ptr [di], edx

#define OR_EDI_TO_PTR_EAX or dword ptr [eax], edi
#define OR_EDI_TO_PTR_EBX or dword ptr [ebx], edi
#define OR_EDI_TO_PTR_ECX or dword ptr [ecx], edi
#define OR_EDI_TO_PTR_EDX or dword ptr [edx], edi
#define OR_EDI_TO_PTR_EDI or dword ptr [edi], edi
#define OR_EDI_TO_PTR_ESI or dword ptr [esi], edi
#define OR_EDI_TO_PTR_EBP or dword ptr [ebp], edi
#define OR_EDI_TO_PTR_ESP or dword ptr [esp], edi
#define OR_EDI_TO_PTR_BX or dword ptr [bx], edi
#define OR_EDI_TO_PTR_BP or dword ptr [bp], edi
#define OR_EDI_TO_PTR_SI or dword ptr [si], edi
#define OR_EDI_TO_PTR_DI or dword ptr [di], edi

#define OR_ESI_TO_PTR_EAX or dword ptr [eax], esi
#define OR_ESI_TO_PTR_EBX or dword ptr [ebx], esi
#define OR_ESI_TO_PTR_ECX or dword ptr [ecx], esi
#define OR_ESI_TO_PTR_EDX or dword ptr [edx], esi
#define OR_ESI_TO_PTR_EDI or dword ptr [edi], esi
#define OR_ESI_TO_PTR_ESI or dword ptr [esi], esi
#define OR_ESI_TO_PTR_EBP or dword ptr [ebp], esi
#define OR_ESI_TO_PTR_ESP or dword ptr [esp], esi
#define OR_ESI_TO_PTR_BX or dword ptr [bx], esi
#define OR_ESI_TO_PTR_BP or dword ptr [bp], esi
#define OR_ESI_TO_PTR_SI or dword ptr [si], esi
#define OR_ESI_TO_PTR_DI or dword ptr [di], esi

#define OR_EBP_TO_PTR_EAX or dword ptr [eax], ebp
#define OR_EBP_TO_PTR_EBX or dword ptr [ebx], ebp
#define OR_EBP_TO_PTR_ECX or dword ptr [ecx], ebp
#define OR_EBP_TO_PTR_EDX or dword ptr [edx], ebp
#define OR_EBP_TO_PTR_EDI or dword ptr [edi], ebp
#define OR_EBP_TO_PTR_ESI or dword ptr [esi], ebp
#define OR_EBP_TO_PTR_EBP or dword ptr [ebp], ebp
#define OR_EBP_TO_PTR_ESP or dword ptr [esp], ebp
#define OR_EBP_TO_PTR_BX or dword ptr [bx], ebp
#define OR_EBP_TO_PTR_BP or dword ptr [bp], ebp
#define OR_EBP_TO_PTR_SI or dword ptr [si], ebp
#define OR_EBP_TO_PTR_DI or dword ptr [di], ebp

#define OR_ESP_TO_PTR_EAX or dword ptr [eax], esp
#define OR_ESP_TO_PTR_EBX or dword ptr [ebx], esp
#define OR_ESP_TO_PTR_ECX or dword ptr [ecx], esp
#define OR_ESP_TO_PTR_EDX or dword ptr [edx], esp
#define OR_ESP_TO_PTR_EDI or dword ptr [edi], esp
#define OR_ESP_TO_PTR_ESI or dword ptr [esi], esp
#define OR_ESP_TO_PTR_EBP or dword ptr [ebp], esp
#define OR_ESP_TO_PTR_ESP or dword ptr [esp], esp
#define OR_ESP_TO_PTR_BX or dword ptr [bx], esp
#define OR_ESP_TO_PTR_BP or dword ptr [bp], esp
#define OR_ESP_TO_PTR_SI or dword ptr [si], esp
#define OR_ESP_TO_PTR_DI or dword ptr [di], esp

#define OR_EAX_FROM_PTR_EAX_(VALUE) or eax, dword ptr [eax + VALUE]
#define OR_EAX_FROM_PTR_EBX_(VALUE) or eax, dword ptr [ebx + VALUE]
#define OR_EAX_FROM_PTR_ECX_(VALUE) or eax, dword ptr [ecx + VALUE]
#define OR_EAX_FROM_PTR_EDX_(VALUE) or eax, dword ptr [edx + VALUE]
#define OR_EAX_FROM_PTR_EDI_(VALUE) or eax, dword ptr [edi + VALUE]
#define OR_EAX_FROM_PTR_ESI_(VALUE) or eax, dword ptr [esi + VALUE]
#define OR_EAX_FROM_PTR_EBP_(VALUE) or eax, dword ptr [ebp + VALUE]
#define OR_EAX_FROM_PTR_ESP_(VALUE) or eax, dword ptr [esp + VALUE]
#define OR_EAX_FROM_PTR_BX_(VALUE) or eax, dword ptr [bx + VALUE]
#define OR_EAX_FROM_PTR_BP_(VALUE) or eax, dword ptr [bp + VALUE]
#define OR_EAX_FROM_PTR_SI_(VALUE) or eax, dword ptr [si + VALUE]
#define OR_EAX_FROM_PTR_DI_(VALUE) or eax, dword ptr [di + VALUE]

#define OR_EBX_FROM_PTR_EAX_(VALUE) or ebx, dword ptr [eax + VALUE]
#define OR_EBX_FROM_PTR_EBX_(VALUE) or ebx, dword ptr [ebx + VALUE]
#define OR_EBX_FROM_PTR_ECX_(VALUE) or ebx, dword ptr [ecx + VALUE]
#define OR_EBX_FROM_PTR_EDX_(VALUE) or ebx, dword ptr [edx + VALUE]
#define OR_EBX_FROM_PTR_EDI_(VALUE) or ebx, dword ptr [edi + VALUE]
#define OR_EBX_FROM_PTR_ESI_(VALUE) or ebx, dword ptr [esi + VALUE]
#define OR_EBX_FROM_PTR_EBP_(VALUE) or ebx, dword ptr [ebp + VALUE]
#define OR_EBX_FROM_PTR_ESP_(VALUE) or ebx, dword ptr [esp + VALUE]
#define OR_EBX_FROM_PTR_BX_(VALUE) or ebx, dword ptr [bx + VALUE]
#define OR_EBX_FROM_PTR_BP_(VALUE) or ebx, dword ptr [bp + VALUE]
#define OR_EBX_FROM_PTR_SI_(VALUE) or ebx, dword ptr [si + VALUE]
#define OR_EBX_FROM_PTR_DI_(VALUE) or ebx, dword ptr [di + VALUE]

#define OR_ECX_FROM_PTR_EAX_(VALUE) or ecx, dword ptr [eax + VALUE]
#define OR_ECX_FROM_PTR_EBX_(VALUE) or ecx, dword ptr [ebx + VALUE]
#define OR_ECX_FROM_PTR_ECX_(VALUE) or ecx, dword ptr [ecx + VALUE]
#define OR_ECX_FROM_PTR_EDX_(VALUE) or ecx, dword ptr [edx + VALUE]
#define OR_ECX_FROM_PTR_EDI_(VALUE) or ecx, dword ptr [edi + VALUE]
#define OR_ECX_FROM_PTR_ESI_(VALUE) or ecx, dword ptr [esi + VALUE]
#define OR_ECX_FROM_PTR_EBP_(VALUE) or ecx, dword ptr [ebp + VALUE]
#define OR_ECX_FROM_PTR_ESP_(VALUE) or ecx, dword ptr [esp + VALUE]
#define OR_ECX_FROM_PTR_BX_(VALUE) or ecx, dword ptr [bx + VALUE]
#define OR_ECX_FROM_PTR_BP_(VALUE) or ecx, dword ptr [bp + VALUE]
#define OR_ECX_FROM_PTR_SI_(VALUE) or ecx, dword ptr [si + VALUE]
#define OR_ECX_FROM_PTR_DI_(VALUE) or ecx, dword ptr [di + VALUE]

#define OR_EDX_FROM_PTR_EAX_(VALUE) or edx, dword ptr [eax + VALUE]
#define OR_EDX_FROM_PTR_EBX_(VALUE) or edx, dword ptr [ebx + VALUE]
#define OR_EDX_FROM_PTR_ECX_(VALUE) or edx, dword ptr [ecx + VALUE]
#define OR_EDX_FROM_PTR_EDX_(VALUE) or edx, dword ptr [edx + VALUE]
#define OR_EDX_FROM_PTR_EDI_(VALUE) or edx, dword ptr [edi + VALUE]
#define OR_EDX_FROM_PTR_ESI_(VALUE) or edx, dword ptr [esi + VALUE]
#define OR_EDX_FROM_PTR_EBP_(VALUE) or edx, dword ptr [ebp + VALUE]
#define OR_EDX_FROM_PTR_ESP_(VALUE) or edx, dword ptr [esp + VALUE]
#define OR_EDX_FROM_PTR_BX_(VALUE) or edx, dword ptr [bx + VALUE]
#define OR_EDX_FROM_PTR_BP_(VALUE) or edx, dword ptr [bp + VALUE]
#define OR_EDX_FROM_PTR_SI_(VALUE) or edx, dword ptr [si + VALUE]
#define OR_EDX_FROM_PTR_DI_(VALUE) or edx, dword ptr [di + VALUE]

#define OR_EDI_FROM_PTR_EAX_(VALUE) or edi, dword ptr [eax + VALUE]
#define OR_EDI_FROM_PTR_EBX_(VALUE) or edi, dword ptr [ebx + VALUE]
#define OR_EDI_FROM_PTR_ECX_(VALUE) or edi, dword ptr [ecx + VALUE]
#define OR_EDI_FROM_PTR_EDX_(VALUE) or edi, dword ptr [edx + VALUE]
#define OR_EDI_FROM_PTR_EDI_(VALUE) or edi, dword ptr [edi + VALUE]
#define OR_EDI_FROM_PTR_ESI_(VALUE) or edi, dword ptr [esi + VALUE]
#define OR_EDI_FROM_PTR_EBP_(VALUE) or edi, dword ptr [ebp + VALUE]
#define OR_EDI_FROM_PTR_ESP_(VALUE) or edi, dword ptr [esp + VALUE]
#define OR_EDI_FROM_PTR_BX_(VALUE) or edi, dword ptr [bx + VALUE]
#define OR_EDI_FROM_PTR_BP_(VALUE) or edi, dword ptr [bp + VALUE]
#define OR_EDI_FROM_PTR_SI_(VALUE) or edi, dword ptr [si + VALUE]
#define OR_EDI_FROM_PTR_DI_(VALUE) or edi, dword ptr [di + VALUE]

#define OR_ESI_FROM_PTR_EAX_(VALUE) or esi, dword ptr [eax + VALUE]
#define OR_ESI_FROM_PTR_EBX_(VALUE) or esi, dword ptr [ebx + VALUE]
#define OR_ESI_FROM_PTR_ECX_(VALUE) or esi, dword ptr [ecx + VALUE]
#define OR_ESI_FROM_PTR_EDX_(VALUE) or esi, dword ptr [edx + VALUE]
#define OR_ESI_FROM_PTR_EDI_(VALUE) or esi, dword ptr [edi + VALUE]
#define OR_ESI_FROM_PTR_ESI_(VALUE) or esi, dword ptr [esi + VALUE]
#define OR_ESI_FROM_PTR_EBP_(VALUE) or esi, dword ptr [ebp + VALUE]
#define OR_ESI_FROM_PTR_ESP_(VALUE) or esi, dword ptr [esp + VALUE]
#define OR_ESI_FROM_PTR_BX_(VALUE) or esi, dword ptr [bx + VALUE]
#define OR_ESI_FROM_PTR_BP_(VALUE) or esi, dword ptr [bp + VALUE]
#define OR_ESI_FROM_PTR_SI_(VALUE) or esi, dword ptr [si + VALUE]
#define OR_ESI_FROM_PTR_DI_(VALUE) or esi, dword ptr [di + VALUE]

#define OR_EBP_FROM_PTR_EAX_(VALUE) or ebp, dword ptr [eax + VALUE]
#define OR_EBP_FROM_PTR_EBX_(VALUE) or ebp, dword ptr [ebx + VALUE]
#define OR_EBP_FROM_PTR_ECX_(VALUE) or ebp, dword ptr [ecx + VALUE]
#define OR_EBP_FROM_PTR_EDX_(VALUE) or ebp, dword ptr [edx + VALUE]
#define OR_EBP_FROM_PTR_EDI_(VALUE) or ebp, dword ptr [edi + VALUE]
#define OR_EBP_FROM_PTR_ESI_(VALUE) or ebp, dword ptr [esi + VALUE]
#define OR_EBP_FROM_PTR_EBP_(VALUE) or ebp, dword ptr [ebp + VALUE]
#define OR_EBP_FROM_PTR_ESP_(VALUE) or ebp, dword ptr [esp + VALUE]
#define OR_EBP_FROM_PTR_BX_(VALUE) or ebp, dword ptr [bx + VALUE]
#define OR_EBP_FROM_PTR_BP_(VALUE) or ebp, dword ptr [bp + VALUE]
#define OR_EBP_FROM_PTR_SI_(VALUE) or ebp, dword ptr [si + VALUE]
#define OR_EBP_FROM_PTR_DI_(VALUE) or ebp, dword ptr [di + VALUE]

#define OR_ESP_FROM_PTR_EAX_(VALUE) or esp, dword ptr [eax + VALUE]
#define OR_ESP_FROM_PTR_EBX_(VALUE) or esp, dword ptr [ebx + VALUE]
#define OR_ESP_FROM_PTR_ECX_(VALUE) or esp, dword ptr [ecx + VALUE]
#define OR_ESP_FROM_PTR_EDX_(VALUE) or esp, dword ptr [edx + VALUE]
#define OR_ESP_FROM_PTR_EDI_(VALUE) or esp, dword ptr [edi + VALUE]
#define OR_ESP_FROM_PTR_ESI_(VALUE) or esp, dword ptr [esi + VALUE]
#define OR_ESP_FROM_PTR_EBP_(VALUE) or esp, dword ptr [ebp + VALUE]
#define OR_ESP_FROM_PTR_ESP_(VALUE) or esp, dword ptr [esp + VALUE]
#define OR_ESP_FROM_PTR_BX_(VALUE) or esp, dword ptr [bx + VALUE]
#define OR_ESP_FROM_PTR_BP_(VALUE) or esp, dword ptr [bp + VALUE]
#define OR_ESP_FROM_PTR_SI_(VALUE) or esp, dword ptr [si + VALUE]
#define OR_ESP_FROM_PTR_DI_(VALUE) or esp, dword ptr [di + VALUE]

#define OR_EAX_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], eax
#define OR_EAX_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], eax
#define OR_EAX_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], eax
#define OR_EAX_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], eax
#define OR_EAX_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], eax
#define OR_EAX_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], eax
#define OR_EAX_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], eax
#define OR_EAX_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], eax
#define OR_EAX_TO_PTR_BX_(VALUE) or dword ptr [bx + VALUE], eax
#define OR_EAX_TO_PTR_BP_(VALUE) or dword ptr [bp + VALUE], eax
#define OR_EAX_TO_PTR_SI_(VALUE) or dword ptr [si + VALUE], eax
#define OR_EAX_TO_PTR_DI_(VALUE) or dword ptr [di + VALUE], eax

#define OR_EBX_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], ebx
#define OR_EBX_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], ebx
#define OR_EBX_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], ebx
#define OR_EBX_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], ebx
#define OR_EBX_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], ebx
#define OR_EBX_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], ebx
#define OR_EBX_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], ebx
#define OR_EBX_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], ebx
#define OR_EBX_TO_PTR_BX_(VALUE) or dword ptr [bx + VALUE], ebx
#define OR_EBX_TO_PTR_BP_(VALUE) or dword ptr [bp + VALUE], ebx
#define OR_EBX_TO_PTR_SI_(VALUE) or dword ptr [si + VALUE], ebx
#define OR_EBX_TO_PTR_DI_(VALUE) or dword ptr [di + VALUE], ebx

#define OR_ECX_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], ecx
#define OR_ECX_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], ecx
#define OR_ECX_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], ecx
#define OR_ECX_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], ecx
#define OR_ECX_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], ecx
#define OR_ECX_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], ecx
#define OR_ECX_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], ecx
#define OR_ECX_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], ecx
#define OR_ECX_TO_PTR_BX_(VALUE) or dword ptr [bx + VALUE], ecx
#define OR_ECX_TO_PTR_BP_(VALUE) or dword ptr [bp + VALUE], ecx
#define OR_ECX_TO_PTR_SI_(VALUE) or dword ptr [si + VALUE], ecx
#define OR_ECX_TO_PTR_DI_(VALUE) or dword ptr [di + VALUE], ecx

#define OR_EDX_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], edx
#define OR_EDX_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], edx
#define OR_EDX_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], edx
#define OR_EDX_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], edx
#define OR_EDX_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], edx
#define OR_EDX_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], edx
#define OR_EDX_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], edx
#define OR_EDX_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], edx
#define OR_EDX_TO_PTR_BX_(VALUE) or dword ptr [bx + VALUE], edx
#define OR_EDX_TO_PTR_BP_(VALUE) or dword ptr [bp + VALUE], edx
#define OR_EDX_TO_PTR_SI_(VALUE) or dword ptr [si + VALUE], edx
#define OR_EDX_TO_PTR_DI_(VALUE) or dword ptr [di + VALUE], edx

#define OR_EDI_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], edi
#define OR_EDI_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], edi
#define OR_EDI_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], edi
#define OR_EDI_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], edi
#define OR_EDI_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], edi
#define OR_EDI_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], edi
#define OR_EDI_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], edi
#define OR_EDI_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], edi
#define OR_EDI_TO_PTR_BX_(VALUE) or dword ptr [bx + VALUE], edi
#define OR_EDI_TO_PTR_BP_(VALUE) or dword ptr [bp + VALUE], edi
#define OR_EDI_TO_PTR_SI_(VALUE) or dword ptr [si + VALUE], edi
#define OR_EDI_TO_PTR_DI_(VALUE) or dword ptr [di + VALUE], edi

#define OR_ESI_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], esi
#define OR_ESI_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], esi
#define OR_ESI_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], esi
#define OR_ESI_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], esi
#define OR_ESI_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], esi
#define OR_ESI_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], esi
#define OR_ESI_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], esi
#define OR_ESI_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], esi
#define OR_ESI_TO_PTR_BX_(VALUE) or dword ptr [bx + VALUE], esi
#define OR_ESI_TO_PTR_BP_(VALUE) or dword ptr [bp + VALUE], esi
#define OR_ESI_TO_PTR_SI_(VALUE) or dword ptr [si + VALUE], esi
#define OR_ESI_TO_PTR_DI_(VALUE) or dword ptr [di + VALUE], esi

#define OR_EBP_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], ebp
#define OR_EBP_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], ebp
#define OR_EBP_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], ebp
#define OR_EBP_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], ebp
#define OR_EBP_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], ebp
#define OR_EBP_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], ebp
#define OR_EBP_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], ebp
#define OR_EBP_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], ebp
#define OR_EBP_TO_PTR_BX_(VALUE) or dword ptr [bx + VALUE], ebp
#define OR_EBP_TO_PTR_BP_(VALUE) or dword ptr [bp + VALUE], ebp
#define OR_EBP_TO_PTR_SI_(VALUE) or dword ptr [si + VALUE], ebp
#define OR_EBP_TO_PTR_DI_(VALUE) or dword ptr [di + VALUE], ebp

#define OR_ESP_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], esp
#define OR_ESP_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], esp
#define OR_ESP_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], esp
#define OR_ESP_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], esp
#define OR_ESP_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], esp
#define OR_ESP_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], esp
#define OR_ESP_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], esp
#define OR_ESP_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], esp
#define OR_ESP_TO_PTR_BX_(VALUE) or dword ptr [bx + VALUE], esp
#define OR_ESP_TO_PTR_BP_(VALUE) or dword ptr [bp + VALUE], esp
#define OR_ESP_TO_PTR_SI_(VALUE) or dword ptr [si + VALUE], esp
#define OR_ESP_TO_PTR_DI_(VALUE) or dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_EAX_FROM_PTR_(VALUE) or eax, dword ptr [VALUE]
#define OR_EBX_FROM_PTR_(VALUE) or ebx, dword ptr [VALUE]
#define OR_ECX_FROM_PTR_(VALUE) or ecx, dword ptr [VALUE]
#define OR_EDX_FROM_PTR_(VALUE) or edx, dword ptr [VALUE]
#define OR_EDI_FROM_PTR_(VALUE) or edi, dword ptr [VALUE]
#define OR_ESI_FROM_PTR_(VALUE) or esi, dword ptr [VALUE]
#define OR_EBP_FROM_PTR_(VALUE) or ebp, dword ptr [VALUE]
#define OR_ESP_FROM_PTR_(VALUE) or esp, dword ptr [VALUE]
#define OR_R8D_FROM_PTR_(VALUE) or r8d, dword ptr [VALUE]
#define OR_R9D_FROM_PTR_(VALUE) or r9d, dword ptr [VALUE]
#define OR_R10D_FROM_PTR_(VALUE) or r10d, dword ptr [VALUE]
#define OR_R11D_FROM_PTR_(VALUE) or r11d, dword ptr [VALUE]
#define OR_R12D_FROM_PTR_(VALUE) or r12d, dword ptr [VALUE]
#define OR_R13D_FROM_PTR_(VALUE) or r13d, dword ptr [VALUE]
#define OR_R14D_FROM_PTR_(VALUE) or r14d, dword ptr [VALUE]
#define OR_R15D_FROM_PTR_(VALUE) or r15d, dword ptr [VALUE]

#define OR_EAX_TO_PTR_(VALUE) or dword ptr [VALUE], eax
#define OR_EBX_TO_PTR_(VALUE) or dword ptr [VALUE], ebx
#define OR_ECX_TO_PTR_(VALUE) or dword ptr [VALUE], ecx
#define OR_EDX_TO_PTR_(VALUE) or dword ptr [VALUE], edx
#define OR_EDI_TO_PTR_(VALUE) or dword ptr [VALUE], edi
#define OR_ESI_TO_PTR_(VALUE) or dword ptr [VALUE], esi
#define OR_EBP_TO_PTR_(VALUE) or dword ptr [VALUE], ebp
#define OR_ESP_TO_PTR_(VALUE) or dword ptr [VALUE], esp
#define OR_R8D_TO_PTR_(VALUE) or dword ptr [VALUE], r8d
#define OR_R9D_TO_PTR_(VALUE) or dword ptr [VALUE], r9d
#define OR_R10D_TO_PTR_(VALUE) or dword ptr [VALUE], r10d
#define OR_R11D_TO_PTR_(VALUE) or dword ptr [VALUE], r11d
#define OR_R12D_TO_PTR_(VALUE) or dword ptr [VALUE], r12d
#define OR_R13D_TO_PTR_(VALUE) or dword ptr [VALUE], r13d
#define OR_R14D_TO_PTR_(VALUE) or dword ptr [VALUE], r14d
#define OR_R15D_TO_PTR_(VALUE) or dword ptr [VALUE], r15d

#define OR_EAX_FROM_PTR_RAX or eax, dword ptr [rax]
#define OR_EAX_FROM_PTR_RBX or eax, dword ptr [rbx]
#define OR_EAX_FROM_PTR_RCX or eax, dword ptr [rcx]
#define OR_EAX_FROM_PTR_RDX or eax, dword ptr [rdx]
#define OR_EAX_FROM_PTR_RDI or eax, dword ptr [rdi]
#define OR_EAX_FROM_PTR_RSI or eax, dword ptr [rsi]
#define OR_EAX_FROM_PTR_RBP or eax, dword ptr [rbp]
#define OR_EAX_FROM_PTR_RSP or eax, dword ptr [rsp]
#define OR_EAX_FROM_PTR_R8 or eax, dword ptr [r8]
#define OR_EAX_FROM_PTR_R9 or eax, dword ptr [r9]
#define OR_EAX_FROM_PTR_R10 or eax, dword ptr [r10]
#define OR_EAX_FROM_PTR_R11 or eax, dword ptr [r11]
#define OR_EAX_FROM_PTR_R12 or eax, dword ptr [r12]
#define OR_EAX_FROM_PTR_R13 or eax, dword ptr [r13]
#define OR_EAX_FROM_PTR_R14 or eax, dword ptr [r14]
#define OR_EAX_FROM_PTR_R15 or eax, dword ptr [r15]
#define OR_EAX_FROM_PTR_EAX or eax, dword ptr [eax]
#define OR_EAX_FROM_PTR_EBX or eax, dword ptr [ebx]
#define OR_EAX_FROM_PTR_ECX or eax, dword ptr [ecx]
#define OR_EAX_FROM_PTR_EDX or eax, dword ptr [edx]
#define OR_EAX_FROM_PTR_EDI or eax, dword ptr [edi]
#define OR_EAX_FROM_PTR_ESI or eax, dword ptr [esi]
#define OR_EAX_FROM_PTR_EBP or eax, dword ptr [ebp]
#define OR_EAX_FROM_PTR_ESP or eax, dword ptr [esp]

#define OR_EBX_FROM_PTR_RAX or ebx, dword ptr [rax]
#define OR_EBX_FROM_PTR_RBX or ebx, dword ptr [rbx]
#define OR_EBX_FROM_PTR_RCX or ebx, dword ptr [rcx]
#define OR_EBX_FROM_PTR_RDX or ebx, dword ptr [rdx]
#define OR_EBX_FROM_PTR_RDI or ebx, dword ptr [rdi]
#define OR_EBX_FROM_PTR_RSI or ebx, dword ptr [rsi]
#define OR_EBX_FROM_PTR_RBP or ebx, dword ptr [rbp]
#define OR_EBX_FROM_PTR_RSP or ebx, dword ptr [rsp]
#define OR_EBX_FROM_PTR_R8 or ebx, dword ptr [r8]
#define OR_EBX_FROM_PTR_R9 or ebx, dword ptr [r9]
#define OR_EBX_FROM_PTR_R10 or ebx, dword ptr [r10]
#define OR_EBX_FROM_PTR_R11 or ebx, dword ptr [r11]
#define OR_EBX_FROM_PTR_R12 or ebx, dword ptr [r12]
#define OR_EBX_FROM_PTR_R13 or ebx, dword ptr [r13]
#define OR_EBX_FROM_PTR_R14 or ebx, dword ptr [r14]
#define OR_EBX_FROM_PTR_R15 or ebx, dword ptr [r15]
#define OR_EBX_FROM_PTR_EAX or ebx, dword ptr [eax]
#define OR_EBX_FROM_PTR_EBX or ebx, dword ptr [ebx]
#define OR_EBX_FROM_PTR_ECX or ebx, dword ptr [ecx]
#define OR_EBX_FROM_PTR_EDX or ebx, dword ptr [edx]
#define OR_EBX_FROM_PTR_EDI or ebx, dword ptr [edi]
#define OR_EBX_FROM_PTR_ESI or ebx, dword ptr [esi]
#define OR_EBX_FROM_PTR_EBP or ebx, dword ptr [ebp]
#define OR_EBX_FROM_PTR_ESP or ebx, dword ptr [esp]

#define OR_ECX_FROM_PTR_RAX or ecx, dword ptr [rax]
#define OR_ECX_FROM_PTR_RBX or ecx, dword ptr [rbx]
#define OR_ECX_FROM_PTR_RCX or ecx, dword ptr [rcx]
#define OR_ECX_FROM_PTR_RDX or ecx, dword ptr [rdx]
#define OR_ECX_FROM_PTR_RDI or ecx, dword ptr [rdi]
#define OR_ECX_FROM_PTR_RSI or ecx, dword ptr [rsi]
#define OR_ECX_FROM_PTR_RBP or ecx, dword ptr [rbp]
#define OR_ECX_FROM_PTR_RSP or ecx, dword ptr [rsp]
#define OR_ECX_FROM_PTR_R8 or ecx, dword ptr [r8]
#define OR_ECX_FROM_PTR_R9 or ecx, dword ptr [r9]
#define OR_ECX_FROM_PTR_R10 or ecx, dword ptr [r10]
#define OR_ECX_FROM_PTR_R11 or ecx, dword ptr [r11]
#define OR_ECX_FROM_PTR_R12 or ecx, dword ptr [r12]
#define OR_ECX_FROM_PTR_R13 or ecx, dword ptr [r13]
#define OR_ECX_FROM_PTR_R14 or ecx, dword ptr [r14]
#define OR_ECX_FROM_PTR_R15 or ecx, dword ptr [r15]
#define OR_ECX_FROM_PTR_EAX or ecx, dword ptr [eax]
#define OR_ECX_FROM_PTR_EBX or ecx, dword ptr [ebx]
#define OR_ECX_FROM_PTR_ECX or ecx, dword ptr [ecx]
#define OR_ECX_FROM_PTR_EDX or ecx, dword ptr [edx]
#define OR_ECX_FROM_PTR_EDI or ecx, dword ptr [edi]
#define OR_ECX_FROM_PTR_ESI or ecx, dword ptr [esi]
#define OR_ECX_FROM_PTR_EBP or ecx, dword ptr [ebp]
#define OR_ECX_FROM_PTR_ESP or ecx, dword ptr [esp]

#define OR_EDX_FROM_PTR_RAX or edx, dword ptr [rax]
#define OR_EDX_FROM_PTR_RBX or edx, dword ptr [rbx]
#define OR_EDX_FROM_PTR_RCX or edx, dword ptr [rcx]
#define OR_EDX_FROM_PTR_RDX or edx, dword ptr [rdx]
#define OR_EDX_FROM_PTR_RDI or edx, dword ptr [rdi]
#define OR_EDX_FROM_PTR_RSI or edx, dword ptr [rsi]
#define OR_EDX_FROM_PTR_RBP or edx, dword ptr [rbp]
#define OR_EDX_FROM_PTR_RSP or edx, dword ptr [rsp]
#define OR_EDX_FROM_PTR_R8 or edx, dword ptr [r8]
#define OR_EDX_FROM_PTR_R9 or edx, dword ptr [r9]
#define OR_EDX_FROM_PTR_R10 or edx, dword ptr [r10]
#define OR_EDX_FROM_PTR_R11 or edx, dword ptr [r11]
#define OR_EDX_FROM_PTR_R12 or edx, dword ptr [r12]
#define OR_EDX_FROM_PTR_R13 or edx, dword ptr [r13]
#define OR_EDX_FROM_PTR_R14 or edx, dword ptr [r14]
#define OR_EDX_FROM_PTR_R15 or edx, dword ptr [r15]
#define OR_EDX_FROM_PTR_EAX or edx, dword ptr [eax]
#define OR_EDX_FROM_PTR_EBX or edx, dword ptr [ebx]
#define OR_EDX_FROM_PTR_ECX or edx, dword ptr [ecx]
#define OR_EDX_FROM_PTR_EDX or edx, dword ptr [edx]
#define OR_EDX_FROM_PTR_EDI or edx, dword ptr [edi]
#define OR_EDX_FROM_PTR_ESI or edx, dword ptr [esi]
#define OR_EDX_FROM_PTR_EBP or edx, dword ptr [ebp]
#define OR_EDX_FROM_PTR_ESP or edx, dword ptr [esp]

#define OR_EDI_FROM_PTR_RAX or edi, dword ptr [rax]
#define OR_EDI_FROM_PTR_RBX or edi, dword ptr [rbx]
#define OR_EDI_FROM_PTR_RCX or edi, dword ptr [rcx]
#define OR_EDI_FROM_PTR_RDX or edi, dword ptr [rdx]
#define OR_EDI_FROM_PTR_RDI or edi, dword ptr [rdi]
#define OR_EDI_FROM_PTR_RSI or edi, dword ptr [rsi]
#define OR_EDI_FROM_PTR_RBP or edi, dword ptr [rbp]
#define OR_EDI_FROM_PTR_RSP or edi, dword ptr [rsp]
#define OR_EDI_FROM_PTR_R8 or edi, dword ptr [r8]
#define OR_EDI_FROM_PTR_R9 or edi, dword ptr [r9]
#define OR_EDI_FROM_PTR_R10 or edi, dword ptr [r10]
#define OR_EDI_FROM_PTR_R11 or edi, dword ptr [r11]
#define OR_EDI_FROM_PTR_R12 or edi, dword ptr [r12]
#define OR_EDI_FROM_PTR_R13 or edi, dword ptr [r13]
#define OR_EDI_FROM_PTR_R14 or edi, dword ptr [r14]
#define OR_EDI_FROM_PTR_R15 or edi, dword ptr [r15]
#define OR_EDI_FROM_PTR_EAX or edi, dword ptr [eax]
#define OR_EDI_FROM_PTR_EBX or edi, dword ptr [ebx]
#define OR_EDI_FROM_PTR_ECX or edi, dword ptr [ecx]
#define OR_EDI_FROM_PTR_EDX or edi, dword ptr [edx]
#define OR_EDI_FROM_PTR_EDI or edi, dword ptr [edi]
#define OR_EDI_FROM_PTR_ESI or edi, dword ptr [esi]
#define OR_EDI_FROM_PTR_EBP or edi, dword ptr [ebp]
#define OR_EDI_FROM_PTR_ESP or edi, dword ptr [esp]

#define OR_ESI_FROM_PTR_RAX or esi, dword ptr [rax]
#define OR_ESI_FROM_PTR_RBX or esi, dword ptr [rbx]
#define OR_ESI_FROM_PTR_RCX or esi, dword ptr [rcx]
#define OR_ESI_FROM_PTR_RDX or esi, dword ptr [rdx]
#define OR_ESI_FROM_PTR_RDI or esi, dword ptr [rdi]
#define OR_ESI_FROM_PTR_RSI or esi, dword ptr [rsi]
#define OR_ESI_FROM_PTR_RBP or esi, dword ptr [rbp]
#define OR_ESI_FROM_PTR_RSP or esi, dword ptr [rsp]
#define OR_ESI_FROM_PTR_R8 or esi, dword ptr [r8]
#define OR_ESI_FROM_PTR_R9 or esi, dword ptr [r9]
#define OR_ESI_FROM_PTR_R10 or esi, dword ptr [r10]
#define OR_ESI_FROM_PTR_R11 or esi, dword ptr [r11]
#define OR_ESI_FROM_PTR_R12 or esi, dword ptr [r12]
#define OR_ESI_FROM_PTR_R13 or esi, dword ptr [r13]
#define OR_ESI_FROM_PTR_R14 or esi, dword ptr [r14]
#define OR_ESI_FROM_PTR_R15 or esi, dword ptr [r15]
#define OR_ESI_FROM_PTR_EAX or esi, dword ptr [eax]
#define OR_ESI_FROM_PTR_EBX or esi, dword ptr [ebx]
#define OR_ESI_FROM_PTR_ECX or esi, dword ptr [ecx]
#define OR_ESI_FROM_PTR_EDX or esi, dword ptr [edx]
#define OR_ESI_FROM_PTR_EDI or esi, dword ptr [edi]
#define OR_ESI_FROM_PTR_ESI or esi, dword ptr [esi]
#define OR_ESI_FROM_PTR_EBP or esi, dword ptr [ebp]
#define OR_ESI_FROM_PTR_ESP or esi, dword ptr [esp]

#define OR_EBP_FROM_PTR_RAX or ebp, dword ptr [rax]
#define OR_EBP_FROM_PTR_RBX or ebp, dword ptr [rbx]
#define OR_EBP_FROM_PTR_RCX or ebp, dword ptr [rcx]
#define OR_EBP_FROM_PTR_RDX or ebp, dword ptr [rdx]
#define OR_EBP_FROM_PTR_RDI or ebp, dword ptr [rdi]
#define OR_EBP_FROM_PTR_RSI or ebp, dword ptr [rsi]
#define OR_EBP_FROM_PTR_RBP or ebp, dword ptr [rbp]
#define OR_EBP_FROM_PTR_RSP or ebp, dword ptr [rsp]
#define OR_EBP_FROM_PTR_R8 or ebp, dword ptr [r8]
#define OR_EBP_FROM_PTR_R9 or ebp, dword ptr [r9]
#define OR_EBP_FROM_PTR_R10 or ebp, dword ptr [r10]
#define OR_EBP_FROM_PTR_R11 or ebp, dword ptr [r11]
#define OR_EBP_FROM_PTR_R12 or ebp, dword ptr [r12]
#define OR_EBP_FROM_PTR_R13 or ebp, dword ptr [r13]
#define OR_EBP_FROM_PTR_R14 or ebp, dword ptr [r14]
#define OR_EBP_FROM_PTR_R15 or ebp, dword ptr [r15]
#define OR_EBP_FROM_PTR_EAX or ebp, dword ptr [eax]
#define OR_EBP_FROM_PTR_EBX or ebp, dword ptr [ebx]
#define OR_EBP_FROM_PTR_ECX or ebp, dword ptr [ecx]
#define OR_EBP_FROM_PTR_EDX or ebp, dword ptr [edx]
#define OR_EBP_FROM_PTR_EDI or ebp, dword ptr [edi]
#define OR_EBP_FROM_PTR_ESI or ebp, dword ptr [esi]
#define OR_EBP_FROM_PTR_EBP or ebp, dword ptr [ebp]
#define OR_EBP_FROM_PTR_ESP or ebp, dword ptr [esp]

#define OR_ESP_FROM_PTR_RAX or esp, dword ptr [rax]
#define OR_ESP_FROM_PTR_RBX or esp, dword ptr [rbx]
#define OR_ESP_FROM_PTR_RCX or esp, dword ptr [rcx]
#define OR_ESP_FROM_PTR_RDX or esp, dword ptr [rdx]
#define OR_ESP_FROM_PTR_RDI or esp, dword ptr [rdi]
#define OR_ESP_FROM_PTR_RSI or esp, dword ptr [rsi]
#define OR_ESP_FROM_PTR_RBP or esp, dword ptr [rbp]
#define OR_ESP_FROM_PTR_RSP or esp, dword ptr [rsp]
#define OR_ESP_FROM_PTR_R8 or esp, dword ptr [r8]
#define OR_ESP_FROM_PTR_R9 or esp, dword ptr [r9]
#define OR_ESP_FROM_PTR_R10 or esp, dword ptr [r10]
#define OR_ESP_FROM_PTR_R11 or esp, dword ptr [r11]
#define OR_ESP_FROM_PTR_R12 or esp, dword ptr [r12]
#define OR_ESP_FROM_PTR_R13 or esp, dword ptr [r13]
#define OR_ESP_FROM_PTR_R14 or esp, dword ptr [r14]
#define OR_ESP_FROM_PTR_R15 or esp, dword ptr [r15]
#define OR_ESP_FROM_PTR_EAX or esp, dword ptr [eax]
#define OR_ESP_FROM_PTR_EBX or esp, dword ptr [ebx]
#define OR_ESP_FROM_PTR_ECX or esp, dword ptr [ecx]
#define OR_ESP_FROM_PTR_EDX or esp, dword ptr [edx]
#define OR_ESP_FROM_PTR_EDI or esp, dword ptr [edi]
#define OR_ESP_FROM_PTR_ESI or esp, dword ptr [esi]
#define OR_ESP_FROM_PTR_EBP or esp, dword ptr [ebp]
#define OR_ESP_FROM_PTR_ESP or esp, dword ptr [esp]

#define OR_R8D_FROM_PTR_RAX or r8d, dword ptr [rax]
#define OR_R8D_FROM_PTR_RBX or r8d, dword ptr [rbx]
#define OR_R8D_FROM_PTR_RCX or r8d, dword ptr [rcx]
#define OR_R8D_FROM_PTR_RDX or r8d, dword ptr [rdx]
#define OR_R8D_FROM_PTR_RDI or r8d, dword ptr [rdi]
#define OR_R8D_FROM_PTR_RSI or r8d, dword ptr [rsi]
#define OR_R8D_FROM_PTR_RBP or r8d, dword ptr [rbp]
#define OR_R8D_FROM_PTR_RSP or r8d, dword ptr [rsp]
#define OR_R8D_FROM_PTR_R8 or r8d, dword ptr [r8]
#define OR_R8D_FROM_PTR_R9 or r8d, dword ptr [r9]
#define OR_R8D_FROM_PTR_R10 or r8d, dword ptr [r10]
#define OR_R8D_FROM_PTR_R11 or r8d, dword ptr [r11]
#define OR_R8D_FROM_PTR_R12 or r8d, dword ptr [r12]
#define OR_R8D_FROM_PTR_R13 or r8d, dword ptr [r13]
#define OR_R8D_FROM_PTR_R14 or r8d, dword ptr [r14]
#define OR_R8D_FROM_PTR_R15 or r8d, dword ptr [r15]
#define OR_R8D_FROM_PTR_EAX or r8d, dword ptr [eax]
#define OR_R8D_FROM_PTR_EBX or r8d, dword ptr [ebx]
#define OR_R8D_FROM_PTR_ECX or r8d, dword ptr [ecx]
#define OR_R8D_FROM_PTR_EDX or r8d, dword ptr [edx]
#define OR_R8D_FROM_PTR_EDI or r8d, dword ptr [edi]
#define OR_R8D_FROM_PTR_ESI or r8d, dword ptr [esi]
#define OR_R8D_FROM_PTR_EBP or r8d, dword ptr [ebp]
#define OR_R8D_FROM_PTR_ESP or r8d, dword ptr [esp]

#define OR_R9D_FROM_PTR_RAX or r9d, dword ptr [rax]
#define OR_R9D_FROM_PTR_RBX or r9d, dword ptr [rbx]
#define OR_R9D_FROM_PTR_RCX or r9d, dword ptr [rcx]
#define OR_R9D_FROM_PTR_RDX or r9d, dword ptr [rdx]
#define OR_R9D_FROM_PTR_RDI or r9d, dword ptr [rdi]
#define OR_R9D_FROM_PTR_RSI or r9d, dword ptr [rsi]
#define OR_R9D_FROM_PTR_RBP or r9d, dword ptr [rbp]
#define OR_R9D_FROM_PTR_RSP or r9d, dword ptr [rsp]
#define OR_R9D_FROM_PTR_R8 or r9d, dword ptr [r8]
#define OR_R9D_FROM_PTR_R9 or r9d, dword ptr [r9]
#define OR_R9D_FROM_PTR_R10 or r9d, dword ptr [r10]
#define OR_R9D_FROM_PTR_R11 or r9d, dword ptr [r11]
#define OR_R9D_FROM_PTR_R12 or r9d, dword ptr [r12]
#define OR_R9D_FROM_PTR_R13 or r9d, dword ptr [r13]
#define OR_R9D_FROM_PTR_R14 or r9d, dword ptr [r14]
#define OR_R9D_FROM_PTR_R15 or r9d, dword ptr [r15]
#define OR_R9D_FROM_PTR_EAX or r9d, dword ptr [eax]
#define OR_R9D_FROM_PTR_EBX or r9d, dword ptr [ebx]
#define OR_R9D_FROM_PTR_ECX or r9d, dword ptr [ecx]
#define OR_R9D_FROM_PTR_EDX or r9d, dword ptr [edx]
#define OR_R9D_FROM_PTR_EDI or r9d, dword ptr [edi]
#define OR_R9D_FROM_PTR_ESI or r9d, dword ptr [esi]
#define OR_R9D_FROM_PTR_EBP or r9d, dword ptr [ebp]
#define OR_R9D_FROM_PTR_ESP or r9d, dword ptr [esp]

#define OR_R10D_FROM_PTR_RAX or r10d, dword ptr [rax]
#define OR_R10D_FROM_PTR_RBX or r10d, dword ptr [rbx]
#define OR_R10D_FROM_PTR_RCX or r10d, dword ptr [rcx]
#define OR_R10D_FROM_PTR_RDX or r10d, dword ptr [rdx]
#define OR_R10D_FROM_PTR_RDI or r10d, dword ptr [rdi]
#define OR_R10D_FROM_PTR_RSI or r10d, dword ptr [rsi]
#define OR_R10D_FROM_PTR_RBP or r10d, dword ptr [rbp]
#define OR_R10D_FROM_PTR_RSP or r10d, dword ptr [rsp]
#define OR_R10D_FROM_PTR_R8 or r10d, dword ptr [r8]
#define OR_R10D_FROM_PTR_R9 or r10d, dword ptr [r9]
#define OR_R10D_FROM_PTR_R10 or r10d, dword ptr [r10]
#define OR_R10D_FROM_PTR_R11 or r10d, dword ptr [r11]
#define OR_R10D_FROM_PTR_R12 or r10d, dword ptr [r12]
#define OR_R10D_FROM_PTR_R13 or r10d, dword ptr [r13]
#define OR_R10D_FROM_PTR_R14 or r10d, dword ptr [r14]
#define OR_R10D_FROM_PTR_R15 or r10d, dword ptr [r15]
#define OR_R10D_FROM_PTR_EAX or r10d, dword ptr [eax]
#define OR_R10D_FROM_PTR_EBX or r10d, dword ptr [ebx]
#define OR_R10D_FROM_PTR_ECX or r10d, dword ptr [ecx]
#define OR_R10D_FROM_PTR_EDX or r10d, dword ptr [edx]
#define OR_R10D_FROM_PTR_EDI or r10d, dword ptr [edi]
#define OR_R10D_FROM_PTR_ESI or r10d, dword ptr [esi]
#define OR_R10D_FROM_PTR_EBP or r10d, dword ptr [ebp]
#define OR_R10D_FROM_PTR_ESP or r10d, dword ptr [esp]

#define OR_R11D_FROM_PTR_RAX or r11d, dword ptr [rax]
#define OR_R11D_FROM_PTR_RBX or r11d, dword ptr [rbx]
#define OR_R11D_FROM_PTR_RCX or r11d, dword ptr [rcx]
#define OR_R11D_FROM_PTR_RDX or r11d, dword ptr [rdx]
#define OR_R11D_FROM_PTR_RDI or r11d, dword ptr [rdi]
#define OR_R11D_FROM_PTR_RSI or r11d, dword ptr [rsi]
#define OR_R11D_FROM_PTR_RBP or r11d, dword ptr [rbp]
#define OR_R11D_FROM_PTR_RSP or r11d, dword ptr [rsp]
#define OR_R11D_FROM_PTR_R8 or r11d, dword ptr [r8]
#define OR_R11D_FROM_PTR_R9 or r11d, dword ptr [r9]
#define OR_R11D_FROM_PTR_R10 or r11d, dword ptr [r10]
#define OR_R11D_FROM_PTR_R11 or r11d, dword ptr [r11]
#define OR_R11D_FROM_PTR_R12 or r11d, dword ptr [r12]
#define OR_R11D_FROM_PTR_R13 or r11d, dword ptr [r13]
#define OR_R11D_FROM_PTR_R14 or r11d, dword ptr [r14]
#define OR_R11D_FROM_PTR_R15 or r11d, dword ptr [r15]
#define OR_R11D_FROM_PTR_EAX or r11d, dword ptr [eax]
#define OR_R11D_FROM_PTR_EBX or r11d, dword ptr [ebx]
#define OR_R11D_FROM_PTR_ECX or r11d, dword ptr [ecx]
#define OR_R11D_FROM_PTR_EDX or r11d, dword ptr [edx]
#define OR_R11D_FROM_PTR_EDI or r11d, dword ptr [edi]
#define OR_R11D_FROM_PTR_ESI or r11d, dword ptr [esi]
#define OR_R11D_FROM_PTR_EBP or r11d, dword ptr [ebp]
#define OR_R11D_FROM_PTR_ESP or r11d, dword ptr [esp]

#define OR_R12D_FROM_PTR_RAX or r12d, dword ptr [rax]
#define OR_R12D_FROM_PTR_RBX or r12d, dword ptr [rbx]
#define OR_R12D_FROM_PTR_RCX or r12d, dword ptr [rcx]
#define OR_R12D_FROM_PTR_RDX or r12d, dword ptr [rdx]
#define OR_R12D_FROM_PTR_RDI or r12d, dword ptr [rdi]
#define OR_R12D_FROM_PTR_RSI or r12d, dword ptr [rsi]
#define OR_R12D_FROM_PTR_RBP or r12d, dword ptr [rbp]
#define OR_R12D_FROM_PTR_RSP or r12d, dword ptr [rsp]
#define OR_R12D_FROM_PTR_R8 or r12d, dword ptr [r8]
#define OR_R12D_FROM_PTR_R9 or r12d, dword ptr [r9]
#define OR_R12D_FROM_PTR_R10 or r12d, dword ptr [r10]
#define OR_R12D_FROM_PTR_R11 or r12d, dword ptr [r11]
#define OR_R12D_FROM_PTR_R12 or r12d, dword ptr [r12]
#define OR_R12D_FROM_PTR_R13 or r12d, dword ptr [r13]
#define OR_R12D_FROM_PTR_R14 or r12d, dword ptr [r14]
#define OR_R12D_FROM_PTR_R15 or r12d, dword ptr [r15]
#define OR_R12D_FROM_PTR_EAX or r12d, dword ptr [eax]
#define OR_R12D_FROM_PTR_EBX or r12d, dword ptr [ebx]
#define OR_R12D_FROM_PTR_ECX or r12d, dword ptr [ecx]
#define OR_R12D_FROM_PTR_EDX or r12d, dword ptr [edx]
#define OR_R12D_FROM_PTR_EDI or r12d, dword ptr [edi]
#define OR_R12D_FROM_PTR_ESI or r12d, dword ptr [esi]
#define OR_R12D_FROM_PTR_EBP or r12d, dword ptr [ebp]
#define OR_R12D_FROM_PTR_ESP or r12d, dword ptr [esp]

#define OR_R13D_FROM_PTR_RAX or r13d, dword ptr [rax]
#define OR_R13D_FROM_PTR_RBX or r13d, dword ptr [rbx]
#define OR_R13D_FROM_PTR_RCX or r13d, dword ptr [rcx]
#define OR_R13D_FROM_PTR_RDX or r13d, dword ptr [rdx]
#define OR_R13D_FROM_PTR_RDI or r13d, dword ptr [rdi]
#define OR_R13D_FROM_PTR_RSI or r13d, dword ptr [rsi]
#define OR_R13D_FROM_PTR_RBP or r13d, dword ptr [rbp]
#define OR_R13D_FROM_PTR_RSP or r13d, dword ptr [rsp]
#define OR_R13D_FROM_PTR_R8 or r13d, dword ptr [r8]
#define OR_R13D_FROM_PTR_R9 or r13d, dword ptr [r9]
#define OR_R13D_FROM_PTR_R10 or r13d, dword ptr [r10]
#define OR_R13D_FROM_PTR_R11 or r13d, dword ptr [r11]
#define OR_R13D_FROM_PTR_R12 or r13d, dword ptr [r12]
#define OR_R13D_FROM_PTR_R13 or r13d, dword ptr [r13]
#define OR_R13D_FROM_PTR_R14 or r13d, dword ptr [r14]
#define OR_R13D_FROM_PTR_R15 or r13d, dword ptr [r15]
#define OR_R13D_FROM_PTR_EAX or r13d, dword ptr [eax]
#define OR_R13D_FROM_PTR_EBX or r13d, dword ptr [ebx]
#define OR_R13D_FROM_PTR_ECX or r13d, dword ptr [ecx]
#define OR_R13D_FROM_PTR_EDX or r13d, dword ptr [edx]
#define OR_R13D_FROM_PTR_EDI or r13d, dword ptr [edi]
#define OR_R13D_FROM_PTR_ESI or r13d, dword ptr [esi]
#define OR_R13D_FROM_PTR_EBP or r13d, dword ptr [ebp]
#define OR_R13D_FROM_PTR_ESP or r13d, dword ptr [esp]

#define OR_R14D_FROM_PTR_RAX or r14d, dword ptr [rax]
#define OR_R14D_FROM_PTR_RBX or r14d, dword ptr [rbx]
#define OR_R14D_FROM_PTR_RCX or r14d, dword ptr [rcx]
#define OR_R14D_FROM_PTR_RDX or r14d, dword ptr [rdx]
#define OR_R14D_FROM_PTR_RDI or r14d, dword ptr [rdi]
#define OR_R14D_FROM_PTR_RSI or r14d, dword ptr [rsi]
#define OR_R14D_FROM_PTR_RBP or r14d, dword ptr [rbp]
#define OR_R14D_FROM_PTR_RSP or r14d, dword ptr [rsp]
#define OR_R14D_FROM_PTR_R8 or r14d, dword ptr [r8]
#define OR_R14D_FROM_PTR_R9 or r14d, dword ptr [r9]
#define OR_R14D_FROM_PTR_R10 or r14d, dword ptr [r10]
#define OR_R14D_FROM_PTR_R11 or r14d, dword ptr [r11]
#define OR_R14D_FROM_PTR_R12 or r14d, dword ptr [r12]
#define OR_R14D_FROM_PTR_R13 or r14d, dword ptr [r13]
#define OR_R14D_FROM_PTR_R14 or r14d, dword ptr [r14]
#define OR_R14D_FROM_PTR_R15 or r14d, dword ptr [r15]
#define OR_R14D_FROM_PTR_EAX or r14d, dword ptr [eax]
#define OR_R14D_FROM_PTR_EBX or r14d, dword ptr [ebx]
#define OR_R14D_FROM_PTR_ECX or r14d, dword ptr [ecx]
#define OR_R14D_FROM_PTR_EDX or r14d, dword ptr [edx]
#define OR_R14D_FROM_PTR_EDI or r14d, dword ptr [edi]
#define OR_R14D_FROM_PTR_ESI or r14d, dword ptr [esi]
#define OR_R14D_FROM_PTR_EBP or r14d, dword ptr [ebp]
#define OR_R14D_FROM_PTR_ESP or r14d, dword ptr [esp]

#define OR_R15D_FROM_PTR_RAX or r15d, dword ptr [rax]
#define OR_R15D_FROM_PTR_RBX or r15d, dword ptr [rbx]
#define OR_R15D_FROM_PTR_RCX or r15d, dword ptr [rcx]
#define OR_R15D_FROM_PTR_RDX or r15d, dword ptr [rdx]
#define OR_R15D_FROM_PTR_RDI or r15d, dword ptr [rdi]
#define OR_R15D_FROM_PTR_RSI or r15d, dword ptr [rsi]
#define OR_R15D_FROM_PTR_RBP or r15d, dword ptr [rbp]
#define OR_R15D_FROM_PTR_RSP or r15d, dword ptr [rsp]
#define OR_R15D_FROM_PTR_R8 or r15d, dword ptr [r8]
#define OR_R15D_FROM_PTR_R9 or r15d, dword ptr [r9]
#define OR_R15D_FROM_PTR_R10 or r15d, dword ptr [r10]
#define OR_R15D_FROM_PTR_R11 or r15d, dword ptr [r11]
#define OR_R15D_FROM_PTR_R12 or r15d, dword ptr [r12]
#define OR_R15D_FROM_PTR_R13 or r15d, dword ptr [r13]
#define OR_R15D_FROM_PTR_R14 or r15d, dword ptr [r14]
#define OR_R15D_FROM_PTR_R15 or r15d, dword ptr [r15]
#define OR_R15D_FROM_PTR_EAX or r15d, dword ptr [eax]
#define OR_R15D_FROM_PTR_EBX or r15d, dword ptr [ebx]
#define OR_R15D_FROM_PTR_ECX or r15d, dword ptr [ecx]
#define OR_R15D_FROM_PTR_EDX or r15d, dword ptr [edx]
#define OR_R15D_FROM_PTR_EDI or r15d, dword ptr [edi]
#define OR_R15D_FROM_PTR_ESI or r15d, dword ptr [esi]
#define OR_R15D_FROM_PTR_EBP or r15d, dword ptr [ebp]
#define OR_R15D_FROM_PTR_ESP or r15d, dword ptr [esp]

#define OR_EAX_TO_PTR_RAX or dword ptr [rax], eax
#define OR_EAX_TO_PTR_RBX or dword ptr [rbx], eax
#define OR_EAX_TO_PTR_RCX or dword ptr [rcx], eax
#define OR_EAX_TO_PTR_RDX or dword ptr [rdx], eax
#define OR_EAX_TO_PTR_RDI or dword ptr [rdi], eax
#define OR_EAX_TO_PTR_RSI or dword ptr [rsi], eax
#define OR_EAX_TO_PTR_RBP or dword ptr [rbp], eax
#define OR_EAX_TO_PTR_RSP or dword ptr [rsp], eax
#define OR_EAX_TO_PTR_R8 or dword ptr [r8], eax
#define OR_EAX_TO_PTR_R9 or dword ptr [r9], eax
#define OR_EAX_TO_PTR_R10 or dword ptr [r10], eax
#define OR_EAX_TO_PTR_R11 or dword ptr [r11], eax
#define OR_EAX_TO_PTR_R12 or dword ptr [r12], eax
#define OR_EAX_TO_PTR_R13 or dword ptr [r13], eax
#define OR_EAX_TO_PTR_R14 or dword ptr [r14], eax
#define OR_EAX_TO_PTR_R15 or dword ptr [r15], eax
#define OR_EAX_TO_PTR_EAX or dword ptr [eax], eax
#define OR_EAX_TO_PTR_EBX or dword ptr [ebx], eax
#define OR_EAX_TO_PTR_ECX or dword ptr [ecx], eax
#define OR_EAX_TO_PTR_EDX or dword ptr [edx], eax
#define OR_EAX_TO_PTR_EDI or dword ptr [edi], eax
#define OR_EAX_TO_PTR_ESI or dword ptr [esi], eax
#define OR_EAX_TO_PTR_EBP or dword ptr [ebp], eax
#define OR_EAX_TO_PTR_ESP or dword ptr [esp], eax

#define OR_EBX_TO_PTR_RAX or dword ptr [rax], ebx
#define OR_EBX_TO_PTR_RBX or dword ptr [rbx], ebx
#define OR_EBX_TO_PTR_RCX or dword ptr [rcx], ebx
#define OR_EBX_TO_PTR_RDX or dword ptr [rdx], ebx
#define OR_EBX_TO_PTR_RDI or dword ptr [rdi], ebx
#define OR_EBX_TO_PTR_RSI or dword ptr [rsi], ebx
#define OR_EBX_TO_PTR_RBP or dword ptr [rbp], ebx
#define OR_EBX_TO_PTR_RSP or dword ptr [rsp], ebx
#define OR_EBX_TO_PTR_R8 or dword ptr [r8], ebx
#define OR_EBX_TO_PTR_R9 or dword ptr [r9], ebx
#define OR_EBX_TO_PTR_R10 or dword ptr [r10], ebx
#define OR_EBX_TO_PTR_R11 or dword ptr [r11], ebx
#define OR_EBX_TO_PTR_R12 or dword ptr [r12], ebx
#define OR_EBX_TO_PTR_R13 or dword ptr [r13], ebx
#define OR_EBX_TO_PTR_R14 or dword ptr [r14], ebx
#define OR_EBX_TO_PTR_R15 or dword ptr [r15], ebx
#define OR_EBX_TO_PTR_EAX or dword ptr [eax], ebx
#define OR_EBX_TO_PTR_EBX or dword ptr [ebx], ebx
#define OR_EBX_TO_PTR_ECX or dword ptr [ecx], ebx
#define OR_EBX_TO_PTR_EDX or dword ptr [edx], ebx
#define OR_EBX_TO_PTR_EDI or dword ptr [edi], ebx
#define OR_EBX_TO_PTR_ESI or dword ptr [esi], ebx
#define OR_EBX_TO_PTR_EBP or dword ptr [ebp], ebx
#define OR_EBX_TO_PTR_ESP or dword ptr [esp], ebx

#define OR_ECX_TO_PTR_RAX or dword ptr [rax], ecx
#define OR_ECX_TO_PTR_RBX or dword ptr [rbx], ecx
#define OR_ECX_TO_PTR_RCX or dword ptr [rcx], ecx
#define OR_ECX_TO_PTR_RDX or dword ptr [rdx], ecx
#define OR_ECX_TO_PTR_RDI or dword ptr [rdi], ecx
#define OR_ECX_TO_PTR_RSI or dword ptr [rsi], ecx
#define OR_ECX_TO_PTR_RBP or dword ptr [rbp], ecx
#define OR_ECX_TO_PTR_RSP or dword ptr [rsp], ecx
#define OR_ECX_TO_PTR_R8 or dword ptr [r8], ecx
#define OR_ECX_TO_PTR_R9 or dword ptr [r9], ecx
#define OR_ECX_TO_PTR_R10 or dword ptr [r10], ecx
#define OR_ECX_TO_PTR_R11 or dword ptr [r11], ecx
#define OR_ECX_TO_PTR_R12 or dword ptr [r12], ecx
#define OR_ECX_TO_PTR_R13 or dword ptr [r13], ecx
#define OR_ECX_TO_PTR_R14 or dword ptr [r14], ecx
#define OR_ECX_TO_PTR_R15 or dword ptr [r15], ecx
#define OR_ECX_TO_PTR_EAX or dword ptr [eax], ecx
#define OR_ECX_TO_PTR_EBX or dword ptr [ebx], ecx
#define OR_ECX_TO_PTR_ECX or dword ptr [ecx], ecx
#define OR_ECX_TO_PTR_EDX or dword ptr [edx], ecx
#define OR_ECX_TO_PTR_EDI or dword ptr [edi], ecx
#define OR_ECX_TO_PTR_ESI or dword ptr [esi], ecx
#define OR_ECX_TO_PTR_EBP or dword ptr [ebp], ecx
#define OR_ECX_TO_PTR_ESP or dword ptr [esp], ecx

#define OR_EDX_TO_PTR_RAX or dword ptr [rax], edx
#define OR_EDX_TO_PTR_RBX or dword ptr [rbx], edx
#define OR_EDX_TO_PTR_RCX or dword ptr [rcx], edx
#define OR_EDX_TO_PTR_RDX or dword ptr [rdx], edx
#define OR_EDX_TO_PTR_RDI or dword ptr [rdi], edx
#define OR_EDX_TO_PTR_RSI or dword ptr [rsi], edx
#define OR_EDX_TO_PTR_RBP or dword ptr [rbp], edx
#define OR_EDX_TO_PTR_RSP or dword ptr [rsp], edx
#define OR_EDX_TO_PTR_R8 or dword ptr [r8], edx
#define OR_EDX_TO_PTR_R9 or dword ptr [r9], edx
#define OR_EDX_TO_PTR_R10 or dword ptr [r10], edx
#define OR_EDX_TO_PTR_R11 or dword ptr [r11], edx
#define OR_EDX_TO_PTR_R12 or dword ptr [r12], edx
#define OR_EDX_TO_PTR_R13 or dword ptr [r13], edx
#define OR_EDX_TO_PTR_R14 or dword ptr [r14], edx
#define OR_EDX_TO_PTR_R15 or dword ptr [r15], edx
#define OR_EDX_TO_PTR_EAX or dword ptr [eax], edx
#define OR_EDX_TO_PTR_EBX or dword ptr [ebx], edx
#define OR_EDX_TO_PTR_ECX or dword ptr [ecx], edx
#define OR_EDX_TO_PTR_EDX or dword ptr [edx], edx
#define OR_EDX_TO_PTR_EDI or dword ptr [edi], edx
#define OR_EDX_TO_PTR_ESI or dword ptr [esi], edx
#define OR_EDX_TO_PTR_EBP or dword ptr [ebp], edx
#define OR_EDX_TO_PTR_ESP or dword ptr [esp], edx

#define OR_EDI_TO_PTR_RAX or dword ptr [rax], edi
#define OR_EDI_TO_PTR_RBX or dword ptr [rbx], edi
#define OR_EDI_TO_PTR_RCX or dword ptr [rcx], edi
#define OR_EDI_TO_PTR_RDX or dword ptr [rdx], edi
#define OR_EDI_TO_PTR_RDI or dword ptr [rdi], edi
#define OR_EDI_TO_PTR_RSI or dword ptr [rsi], edi
#define OR_EDI_TO_PTR_RBP or dword ptr [rbp], edi
#define OR_EDI_TO_PTR_RSP or dword ptr [rsp], edi
#define OR_EDI_TO_PTR_R8 or dword ptr [r8], edi
#define OR_EDI_TO_PTR_R9 or dword ptr [r9], edi
#define OR_EDI_TO_PTR_R10 or dword ptr [r10], edi
#define OR_EDI_TO_PTR_R11 or dword ptr [r11], edi
#define OR_EDI_TO_PTR_R12 or dword ptr [r12], edi
#define OR_EDI_TO_PTR_R13 or dword ptr [r13], edi
#define OR_EDI_TO_PTR_R14 or dword ptr [r14], edi
#define OR_EDI_TO_PTR_R15 or dword ptr [r15], edi
#define OR_EDI_TO_PTR_EAX or dword ptr [eax], edi
#define OR_EDI_TO_PTR_EBX or dword ptr [ebx], edi
#define OR_EDI_TO_PTR_ECX or dword ptr [ecx], edi
#define OR_EDI_TO_PTR_EDX or dword ptr [edx], edi
#define OR_EDI_TO_PTR_EDI or dword ptr [edi], edi
#define OR_EDI_TO_PTR_ESI or dword ptr [esi], edi
#define OR_EDI_TO_PTR_EBP or dword ptr [ebp], edi
#define OR_EDI_TO_PTR_ESP or dword ptr [esp], edi

#define OR_ESI_TO_PTR_RAX or dword ptr [rax], esi
#define OR_ESI_TO_PTR_RBX or dword ptr [rbx], esi
#define OR_ESI_TO_PTR_RCX or dword ptr [rcx], esi
#define OR_ESI_TO_PTR_RDX or dword ptr [rdx], esi
#define OR_ESI_TO_PTR_RDI or dword ptr [rdi], esi
#define OR_ESI_TO_PTR_RSI or dword ptr [rsi], esi
#define OR_ESI_TO_PTR_RBP or dword ptr [rbp], esi
#define OR_ESI_TO_PTR_RSP or dword ptr [rsp], esi
#define OR_ESI_TO_PTR_R8 or dword ptr [r8], esi
#define OR_ESI_TO_PTR_R9 or dword ptr [r9], esi
#define OR_ESI_TO_PTR_R10 or dword ptr [r10], esi
#define OR_ESI_TO_PTR_R11 or dword ptr [r11], esi
#define OR_ESI_TO_PTR_R12 or dword ptr [r12], esi
#define OR_ESI_TO_PTR_R13 or dword ptr [r13], esi
#define OR_ESI_TO_PTR_R14 or dword ptr [r14], esi
#define OR_ESI_TO_PTR_R15 or dword ptr [r15], esi
#define OR_ESI_TO_PTR_EAX or dword ptr [eax], esi
#define OR_ESI_TO_PTR_EBX or dword ptr [ebx], esi
#define OR_ESI_TO_PTR_ECX or dword ptr [ecx], esi
#define OR_ESI_TO_PTR_EDX or dword ptr [edx], esi
#define OR_ESI_TO_PTR_EDI or dword ptr [edi], esi
#define OR_ESI_TO_PTR_ESI or dword ptr [esi], esi
#define OR_ESI_TO_PTR_EBP or dword ptr [ebp], esi
#define OR_ESI_TO_PTR_ESP or dword ptr [esp], esi

#define OR_EBP_TO_PTR_RAX or dword ptr [rax], ebp
#define OR_EBP_TO_PTR_RBX or dword ptr [rbx], ebp
#define OR_EBP_TO_PTR_RCX or dword ptr [rcx], ebp
#define OR_EBP_TO_PTR_RDX or dword ptr [rdx], ebp
#define OR_EBP_TO_PTR_RDI or dword ptr [rdi], ebp
#define OR_EBP_TO_PTR_RSI or dword ptr [rsi], ebp
#define OR_EBP_TO_PTR_RBP or dword ptr [rbp], ebp
#define OR_EBP_TO_PTR_RSP or dword ptr [rsp], ebp
#define OR_EBP_TO_PTR_R8 or dword ptr [r8], ebp
#define OR_EBP_TO_PTR_R9 or dword ptr [r9], ebp
#define OR_EBP_TO_PTR_R10 or dword ptr [r10], ebp
#define OR_EBP_TO_PTR_R11 or dword ptr [r11], ebp
#define OR_EBP_TO_PTR_R12 or dword ptr [r12], ebp
#define OR_EBP_TO_PTR_R13 or dword ptr [r13], ebp
#define OR_EBP_TO_PTR_R14 or dword ptr [r14], ebp
#define OR_EBP_TO_PTR_R15 or dword ptr [r15], ebp
#define OR_EBP_TO_PTR_EAX or dword ptr [eax], ebp
#define OR_EBP_TO_PTR_EBX or dword ptr [ebx], ebp
#define OR_EBP_TO_PTR_ECX or dword ptr [ecx], ebp
#define OR_EBP_TO_PTR_EDX or dword ptr [edx], ebp
#define OR_EBP_TO_PTR_EDI or dword ptr [edi], ebp
#define OR_EBP_TO_PTR_ESI or dword ptr [esi], ebp
#define OR_EBP_TO_PTR_EBP or dword ptr [ebp], ebp
#define OR_EBP_TO_PTR_ESP or dword ptr [esp], ebp

#define OR_ESP_TO_PTR_RAX or dword ptr [rax], esp
#define OR_ESP_TO_PTR_RBX or dword ptr [rbx], esp
#define OR_ESP_TO_PTR_RCX or dword ptr [rcx], esp
#define OR_ESP_TO_PTR_RDX or dword ptr [rdx], esp
#define OR_ESP_TO_PTR_RDI or dword ptr [rdi], esp
#define OR_ESP_TO_PTR_RSI or dword ptr [rsi], esp
#define OR_ESP_TO_PTR_RBP or dword ptr [rbp], esp
#define OR_ESP_TO_PTR_RSP or dword ptr [rsp], esp
#define OR_ESP_TO_PTR_R8 or dword ptr [r8], esp
#define OR_ESP_TO_PTR_R9 or dword ptr [r9], esp
#define OR_ESP_TO_PTR_R10 or dword ptr [r10], esp
#define OR_ESP_TO_PTR_R11 or dword ptr [r11], esp
#define OR_ESP_TO_PTR_R12 or dword ptr [r12], esp
#define OR_ESP_TO_PTR_R13 or dword ptr [r13], esp
#define OR_ESP_TO_PTR_R14 or dword ptr [r14], esp
#define OR_ESP_TO_PTR_R15 or dword ptr [r15], esp
#define OR_ESP_TO_PTR_EAX or dword ptr [eax], esp
#define OR_ESP_TO_PTR_EBX or dword ptr [ebx], esp
#define OR_ESP_TO_PTR_ECX or dword ptr [ecx], esp
#define OR_ESP_TO_PTR_EDX or dword ptr [edx], esp
#define OR_ESP_TO_PTR_EDI or dword ptr [edi], esp
#define OR_ESP_TO_PTR_ESI or dword ptr [esi], esp
#define OR_ESP_TO_PTR_EBP or dword ptr [ebp], esp
#define OR_ESP_TO_PTR_ESP or dword ptr [esp], esp

#define OR_R8D_TO_PTR_RAX or dword ptr [rax], r8d
#define OR_R8D_TO_PTR_RBX or dword ptr [rbx], r8d
#define OR_R8D_TO_PTR_RCX or dword ptr [rcx], r8d
#define OR_R8D_TO_PTR_RDX or dword ptr [rdx], r8d
#define OR_R8D_TO_PTR_RDI or dword ptr [rdi], r8d
#define OR_R8D_TO_PTR_RSI or dword ptr [rsi], r8d
#define OR_R8D_TO_PTR_RBP or dword ptr [rbp], r8d
#define OR_R8D_TO_PTR_RSP or dword ptr [rsp], r8d
#define OR_R8D_TO_PTR_R8 or dword ptr [r8], r8d
#define OR_R8D_TO_PTR_R9 or dword ptr [r9], r8d
#define OR_R8D_TO_PTR_R10 or dword ptr [r10], r8d
#define OR_R8D_TO_PTR_R11 or dword ptr [r11], r8d
#define OR_R8D_TO_PTR_R12 or dword ptr [r12], r8d
#define OR_R8D_TO_PTR_R13 or dword ptr [r13], r8d
#define OR_R8D_TO_PTR_R14 or dword ptr [r14], r8d
#define OR_R8D_TO_PTR_R15 or dword ptr [r15], r8d
#define OR_R8D_TO_PTR_EAX or dword ptr [eax], r8d
#define OR_R8D_TO_PTR_EBX or dword ptr [ebx], r8d
#define OR_R8D_TO_PTR_ECX or dword ptr [ecx], r8d
#define OR_R8D_TO_PTR_EDX or dword ptr [edx], r8d
#define OR_R8D_TO_PTR_EDI or dword ptr [edi], r8d
#define OR_R8D_TO_PTR_ESI or dword ptr [esi], r8d
#define OR_R8D_TO_PTR_EBP or dword ptr [ebp], r8d
#define OR_R8D_TO_PTR_ESP or dword ptr [esp], r8d

#define OR_R9D_TO_PTR_RAX or dword ptr [rax], r9d
#define OR_R9D_TO_PTR_RBX or dword ptr [rbx], r9d
#define OR_R9D_TO_PTR_RCX or dword ptr [rcx], r9d
#define OR_R9D_TO_PTR_RDX or dword ptr [rdx], r9d
#define OR_R9D_TO_PTR_RDI or dword ptr [rdi], r9d
#define OR_R9D_TO_PTR_RSI or dword ptr [rsi], r9d
#define OR_R9D_TO_PTR_RBP or dword ptr [rbp], r9d
#define OR_R9D_TO_PTR_RSP or dword ptr [rsp], r9d
#define OR_R9D_TO_PTR_R8 or dword ptr [r8], r9d
#define OR_R9D_TO_PTR_R9 or dword ptr [r9], r9d
#define OR_R9D_TO_PTR_R10 or dword ptr [r10], r9d
#define OR_R9D_TO_PTR_R11 or dword ptr [r11], r9d
#define OR_R9D_TO_PTR_R12 or dword ptr [r12], r9d
#define OR_R9D_TO_PTR_R13 or dword ptr [r13], r9d
#define OR_R9D_TO_PTR_R14 or dword ptr [r14], r9d
#define OR_R9D_TO_PTR_R15 or dword ptr [r15], r9d
#define OR_R9D_TO_PTR_EAX or dword ptr [eax], r9d
#define OR_R9D_TO_PTR_EBX or dword ptr [ebx], r9d
#define OR_R9D_TO_PTR_ECX or dword ptr [ecx], r9d
#define OR_R9D_TO_PTR_EDX or dword ptr [edx], r9d
#define OR_R9D_TO_PTR_EDI or dword ptr [edi], r9d
#define OR_R9D_TO_PTR_ESI or dword ptr [esi], r9d
#define OR_R9D_TO_PTR_EBP or dword ptr [ebp], r9d
#define OR_R9D_TO_PTR_ESP or dword ptr [esp], r9d

#define OR_R10D_TO_PTR_RAX or dword ptr [rax], r10d
#define OR_R10D_TO_PTR_RBX or dword ptr [rbx], r10d
#define OR_R10D_TO_PTR_RCX or dword ptr [rcx], r10d
#define OR_R10D_TO_PTR_RDX or dword ptr [rdx], r10d
#define OR_R10D_TO_PTR_RDI or dword ptr [rdi], r10d
#define OR_R10D_TO_PTR_RSI or dword ptr [rsi], r10d
#define OR_R10D_TO_PTR_RBP or dword ptr [rbp], r10d
#define OR_R10D_TO_PTR_RSP or dword ptr [rsp], r10d
#define OR_R10D_TO_PTR_R8 or dword ptr [r8], r10d
#define OR_R10D_TO_PTR_R9 or dword ptr [r9], r10d
#define OR_R10D_TO_PTR_R10 or dword ptr [r10], r10d
#define OR_R10D_TO_PTR_R11 or dword ptr [r11], r10d
#define OR_R10D_TO_PTR_R12 or dword ptr [r12], r10d
#define OR_R10D_TO_PTR_R13 or dword ptr [r13], r10d
#define OR_R10D_TO_PTR_R14 or dword ptr [r14], r10d
#define OR_R10D_TO_PTR_R15 or dword ptr [r15], r10d
#define OR_R10D_TO_PTR_EAX or dword ptr [eax], r10d
#define OR_R10D_TO_PTR_EBX or dword ptr [ebx], r10d
#define OR_R10D_TO_PTR_ECX or dword ptr [ecx], r10d
#define OR_R10D_TO_PTR_EDX or dword ptr [edx], r10d
#define OR_R10D_TO_PTR_EDI or dword ptr [edi], r10d
#define OR_R10D_TO_PTR_ESI or dword ptr [esi], r10d
#define OR_R10D_TO_PTR_EBP or dword ptr [ebp], r10d
#define OR_R10D_TO_PTR_ESP or dword ptr [esp], r10d

#define OR_R11D_TO_PTR_RAX or dword ptr [rax], r11d
#define OR_R11D_TO_PTR_RBX or dword ptr [rbx], r11d
#define OR_R11D_TO_PTR_RCX or dword ptr [rcx], r11d
#define OR_R11D_TO_PTR_RDX or dword ptr [rdx], r11d
#define OR_R11D_TO_PTR_RDI or dword ptr [rdi], r11d
#define OR_R11D_TO_PTR_RSI or dword ptr [rsi], r11d
#define OR_R11D_TO_PTR_RBP or dword ptr [rbp], r11d
#define OR_R11D_TO_PTR_RSP or dword ptr [rsp], r11d
#define OR_R11D_TO_PTR_R8 or dword ptr [r8], r11d
#define OR_R11D_TO_PTR_R9 or dword ptr [r9], r11d
#define OR_R11D_TO_PTR_R10 or dword ptr [r10], r11d
#define OR_R11D_TO_PTR_R11 or dword ptr [r11], r11d
#define OR_R11D_TO_PTR_R12 or dword ptr [r12], r11d
#define OR_R11D_TO_PTR_R13 or dword ptr [r13], r11d
#define OR_R11D_TO_PTR_R14 or dword ptr [r14], r11d
#define OR_R11D_TO_PTR_R15 or dword ptr [r15], r11d
#define OR_R11D_TO_PTR_EAX or dword ptr [eax], r11d
#define OR_R11D_TO_PTR_EBX or dword ptr [ebx], r11d
#define OR_R11D_TO_PTR_ECX or dword ptr [ecx], r11d
#define OR_R11D_TO_PTR_EDX or dword ptr [edx], r11d
#define OR_R11D_TO_PTR_EDI or dword ptr [edi], r11d
#define OR_R11D_TO_PTR_ESI or dword ptr [esi], r11d
#define OR_R11D_TO_PTR_EBP or dword ptr [ebp], r11d
#define OR_R11D_TO_PTR_ESP or dword ptr [esp], r11d

#define OR_R12D_TO_PTR_RAX or dword ptr [rax], r12d
#define OR_R12D_TO_PTR_RBX or dword ptr [rbx], r12d
#define OR_R12D_TO_PTR_RCX or dword ptr [rcx], r12d
#define OR_R12D_TO_PTR_RDX or dword ptr [rdx], r12d
#define OR_R12D_TO_PTR_RDI or dword ptr [rdi], r12d
#define OR_R12D_TO_PTR_RSI or dword ptr [rsi], r12d
#define OR_R12D_TO_PTR_RBP or dword ptr [rbp], r12d
#define OR_R12D_TO_PTR_RSP or dword ptr [rsp], r12d
#define OR_R12D_TO_PTR_R8 or dword ptr [r8], r12d
#define OR_R12D_TO_PTR_R9 or dword ptr [r9], r12d
#define OR_R12D_TO_PTR_R10 or dword ptr [r10], r12d
#define OR_R12D_TO_PTR_R11 or dword ptr [r11], r12d
#define OR_R12D_TO_PTR_R12 or dword ptr [r12], r12d
#define OR_R12D_TO_PTR_R13 or dword ptr [r13], r12d
#define OR_R12D_TO_PTR_R14 or dword ptr [r14], r12d
#define OR_R12D_TO_PTR_R15 or dword ptr [r15], r12d
#define OR_R12D_TO_PTR_EAX or dword ptr [eax], r12d
#define OR_R12D_TO_PTR_EBX or dword ptr [ebx], r12d
#define OR_R12D_TO_PTR_ECX or dword ptr [ecx], r12d
#define OR_R12D_TO_PTR_EDX or dword ptr [edx], r12d
#define OR_R12D_TO_PTR_EDI or dword ptr [edi], r12d
#define OR_R12D_TO_PTR_ESI or dword ptr [esi], r12d
#define OR_R12D_TO_PTR_EBP or dword ptr [ebp], r12d
#define OR_R12D_TO_PTR_ESP or dword ptr [esp], r12d

#define OR_R13D_TO_PTR_RAX or dword ptr [rax], r13d
#define OR_R13D_TO_PTR_RBX or dword ptr [rbx], r13d
#define OR_R13D_TO_PTR_RCX or dword ptr [rcx], r13d
#define OR_R13D_TO_PTR_RDX or dword ptr [rdx], r13d
#define OR_R13D_TO_PTR_RDI or dword ptr [rdi], r13d
#define OR_R13D_TO_PTR_RSI or dword ptr [rsi], r13d
#define OR_R13D_TO_PTR_RBP or dword ptr [rbp], r13d
#define OR_R13D_TO_PTR_RSP or dword ptr [rsp], r13d
#define OR_R13D_TO_PTR_R8 or dword ptr [r8], r13d
#define OR_R13D_TO_PTR_R9 or dword ptr [r9], r13d
#define OR_R13D_TO_PTR_R10 or dword ptr [r10], r13d
#define OR_R13D_TO_PTR_R11 or dword ptr [r11], r13d
#define OR_R13D_TO_PTR_R12 or dword ptr [r12], r13d
#define OR_R13D_TO_PTR_R13 or dword ptr [r13], r13d
#define OR_R13D_TO_PTR_R14 or dword ptr [r14], r13d
#define OR_R13D_TO_PTR_R15 or dword ptr [r15], r13d
#define OR_R13D_TO_PTR_EAX or dword ptr [eax], r13d
#define OR_R13D_TO_PTR_EBX or dword ptr [ebx], r13d
#define OR_R13D_TO_PTR_ECX or dword ptr [ecx], r13d
#define OR_R13D_TO_PTR_EDX or dword ptr [edx], r13d
#define OR_R13D_TO_PTR_EDI or dword ptr [edi], r13d
#define OR_R13D_TO_PTR_ESI or dword ptr [esi], r13d
#define OR_R13D_TO_PTR_EBP or dword ptr [ebp], r13d
#define OR_R13D_TO_PTR_ESP or dword ptr [esp], r13d

#define OR_R14D_TO_PTR_RAX or dword ptr [rax], r14d
#define OR_R14D_TO_PTR_RBX or dword ptr [rbx], r14d
#define OR_R14D_TO_PTR_RCX or dword ptr [rcx], r14d
#define OR_R14D_TO_PTR_RDX or dword ptr [rdx], r14d
#define OR_R14D_TO_PTR_RDI or dword ptr [rdi], r14d
#define OR_R14D_TO_PTR_RSI or dword ptr [rsi], r14d
#define OR_R14D_TO_PTR_RBP or dword ptr [rbp], r14d
#define OR_R14D_TO_PTR_RSP or dword ptr [rsp], r14d
#define OR_R14D_TO_PTR_R8 or dword ptr [r8], r14d
#define OR_R14D_TO_PTR_R9 or dword ptr [r9], r14d
#define OR_R14D_TO_PTR_R10 or dword ptr [r10], r14d
#define OR_R14D_TO_PTR_R11 or dword ptr [r11], r14d
#define OR_R14D_TO_PTR_R12 or dword ptr [r12], r14d
#define OR_R14D_TO_PTR_R13 or dword ptr [r13], r14d
#define OR_R14D_TO_PTR_R14 or dword ptr [r14], r14d
#define OR_R14D_TO_PTR_R15 or dword ptr [r15], r14d
#define OR_R14D_TO_PTR_EAX or dword ptr [eax], r14d
#define OR_R14D_TO_PTR_EBX or dword ptr [ebx], r14d
#define OR_R14D_TO_PTR_ECX or dword ptr [ecx], r14d
#define OR_R14D_TO_PTR_EDX or dword ptr [edx], r14d
#define OR_R14D_TO_PTR_EDI or dword ptr [edi], r14d
#define OR_R14D_TO_PTR_ESI or dword ptr [esi], r14d
#define OR_R14D_TO_PTR_EBP or dword ptr [ebp], r14d
#define OR_R14D_TO_PTR_ESP or dword ptr [esp], r14d

#define OR_R15D_TO_PTR_RAX or dword ptr [rax], r15d
#define OR_R15D_TO_PTR_RBX or dword ptr [rbx], r15d
#define OR_R15D_TO_PTR_RCX or dword ptr [rcx], r15d
#define OR_R15D_TO_PTR_RDX or dword ptr [rdx], r15d
#define OR_R15D_TO_PTR_RDI or dword ptr [rdi], r15d
#define OR_R15D_TO_PTR_RSI or dword ptr [rsi], r15d
#define OR_R15D_TO_PTR_RBP or dword ptr [rbp], r15d
#define OR_R15D_TO_PTR_RSP or dword ptr [rsp], r15d
#define OR_R15D_TO_PTR_R8 or dword ptr [r8], r15d
#define OR_R15D_TO_PTR_R9 or dword ptr [r9], r15d
#define OR_R15D_TO_PTR_R10 or dword ptr [r10], r15d
#define OR_R15D_TO_PTR_R11 or dword ptr [r11], r15d
#define OR_R15D_TO_PTR_R12 or dword ptr [r12], r15d
#define OR_R15D_TO_PTR_R13 or dword ptr [r13], r15d
#define OR_R15D_TO_PTR_R14 or dword ptr [r14], r15d
#define OR_R15D_TO_PTR_R15 or dword ptr [r15], r15d
#define OR_R15D_TO_PTR_EAX or dword ptr [eax], r15d
#define OR_R15D_TO_PTR_EBX or dword ptr [ebx], r15d
#define OR_R15D_TO_PTR_ECX or dword ptr [ecx], r15d
#define OR_R15D_TO_PTR_EDX or dword ptr [edx], r15d
#define OR_R15D_TO_PTR_EDI or dword ptr [edi], r15d
#define OR_R15D_TO_PTR_ESI or dword ptr [esi], r15d
#define OR_R15D_TO_PTR_EBP or dword ptr [ebp], r15d
#define OR_R15D_TO_PTR_ESP or dword ptr [esp], r15d

#define OR_EAX_FROM_PTR_RAX_(VALUE) or eax, dword ptr [rax + VALUE]
#define OR_EAX_FROM_PTR_RBX_(VALUE) or eax, dword ptr [rbx + VALUE]
#define OR_EAX_FROM_PTR_RCX_(VALUE) or eax, dword ptr [rcx + VALUE]
#define OR_EAX_FROM_PTR_RDX_(VALUE) or eax, dword ptr [rdx + VALUE]
#define OR_EAX_FROM_PTR_RDI_(VALUE) or eax, dword ptr [rdi + VALUE]
#define OR_EAX_FROM_PTR_RSI_(VALUE) or eax, dword ptr [rsi + VALUE]
#define OR_EAX_FROM_PTR_RBP_(VALUE) or eax, dword ptr [rbp + VALUE]
#define OR_EAX_FROM_PTR_RSP_(VALUE) or eax, dword ptr [rsp + VALUE]
#define OR_EAX_FROM_PTR_R8_(VALUE) or eax, dword ptr [r8 + VALUE]
#define OR_EAX_FROM_PTR_R9_(VALUE) or eax, dword ptr [r9 + VALUE]
#define OR_EAX_FROM_PTR_R10_(VALUE) or eax, dword ptr [r10 + VALUE]
#define OR_EAX_FROM_PTR_R11_(VALUE) or eax, dword ptr [r11 + VALUE]
#define OR_EAX_FROM_PTR_R12_(VALUE) or eax, dword ptr [r12 + VALUE]
#define OR_EAX_FROM_PTR_R13_(VALUE) or eax, dword ptr [r13 + VALUE]
#define OR_EAX_FROM_PTR_R14_(VALUE) or eax, dword ptr [r14 + VALUE]
#define OR_EAX_FROM_PTR_R15_(VALUE) or eax, dword ptr [r15 + VALUE]
#define OR_EAX_FROM_PTR_EAX_(VALUE) or eax, dword ptr [eax + VALUE]
#define OR_EAX_FROM_PTR_EBX_(VALUE) or eax, dword ptr [ebx + VALUE]
#define OR_EAX_FROM_PTR_ECX_(VALUE) or eax, dword ptr [ecx + VALUE]
#define OR_EAX_FROM_PTR_EDX_(VALUE) or eax, dword ptr [edx + VALUE]
#define OR_EAX_FROM_PTR_EDI_(VALUE) or eax, dword ptr [edi + VALUE]
#define OR_EAX_FROM_PTR_ESI_(VALUE) or eax, dword ptr [esi + VALUE]
#define OR_EAX_FROM_PTR_EBP_(VALUE) or eax, dword ptr [ebp + VALUE]
#define OR_EAX_FROM_PTR_ESP_(VALUE) or eax, dword ptr [esp + VALUE]

#define OR_EBX_FROM_PTR_RAX_(VALUE) or ebx, dword ptr [rax + VALUE]
#define OR_EBX_FROM_PTR_RBX_(VALUE) or ebx, dword ptr [rbx + VALUE]
#define OR_EBX_FROM_PTR_RCX_(VALUE) or ebx, dword ptr [rcx + VALUE]
#define OR_EBX_FROM_PTR_RDX_(VALUE) or ebx, dword ptr [rdx + VALUE]
#define OR_EBX_FROM_PTR_RDI_(VALUE) or ebx, dword ptr [rdi + VALUE]
#define OR_EBX_FROM_PTR_RSI_(VALUE) or ebx, dword ptr [rsi + VALUE]
#define OR_EBX_FROM_PTR_RBP_(VALUE) or ebx, dword ptr [rbp + VALUE]
#define OR_EBX_FROM_PTR_RSP_(VALUE) or ebx, dword ptr [rsp + VALUE]
#define OR_EBX_FROM_PTR_R8_(VALUE) or ebx, dword ptr [r8 + VALUE]
#define OR_EBX_FROM_PTR_R9_(VALUE) or ebx, dword ptr [r9 + VALUE]
#define OR_EBX_FROM_PTR_R10_(VALUE) or ebx, dword ptr [r10 + VALUE]
#define OR_EBX_FROM_PTR_R11_(VALUE) or ebx, dword ptr [r11 + VALUE]
#define OR_EBX_FROM_PTR_R12_(VALUE) or ebx, dword ptr [r12 + VALUE]
#define OR_EBX_FROM_PTR_R13_(VALUE) or ebx, dword ptr [r13 + VALUE]
#define OR_EBX_FROM_PTR_R14_(VALUE) or ebx, dword ptr [r14 + VALUE]
#define OR_EBX_FROM_PTR_R15_(VALUE) or ebx, dword ptr [r15 + VALUE]
#define OR_EBX_FROM_PTR_EAX_(VALUE) or ebx, dword ptr [eax + VALUE]
#define OR_EBX_FROM_PTR_EBX_(VALUE) or ebx, dword ptr [ebx + VALUE]
#define OR_EBX_FROM_PTR_ECX_(VALUE) or ebx, dword ptr [ecx + VALUE]
#define OR_EBX_FROM_PTR_EDX_(VALUE) or ebx, dword ptr [edx + VALUE]
#define OR_EBX_FROM_PTR_EDI_(VALUE) or ebx, dword ptr [edi + VALUE]
#define OR_EBX_FROM_PTR_ESI_(VALUE) or ebx, dword ptr [esi + VALUE]
#define OR_EBX_FROM_PTR_EBP_(VALUE) or ebx, dword ptr [ebp + VALUE]
#define OR_EBX_FROM_PTR_ESP_(VALUE) or ebx, dword ptr [esp + VALUE]

#define OR_ECX_FROM_PTR_RAX_(VALUE) or ecx, dword ptr [rax + VALUE]
#define OR_ECX_FROM_PTR_RBX_(VALUE) or ecx, dword ptr [rbx + VALUE]
#define OR_ECX_FROM_PTR_RCX_(VALUE) or ecx, dword ptr [rcx + VALUE]
#define OR_ECX_FROM_PTR_RDX_(VALUE) or ecx, dword ptr [rdx + VALUE]
#define OR_ECX_FROM_PTR_RDI_(VALUE) or ecx, dword ptr [rdi + VALUE]
#define OR_ECX_FROM_PTR_RSI_(VALUE) or ecx, dword ptr [rsi + VALUE]
#define OR_ECX_FROM_PTR_RBP_(VALUE) or ecx, dword ptr [rbp + VALUE]
#define OR_ECX_FROM_PTR_RSP_(VALUE) or ecx, dword ptr [rsp + VALUE]
#define OR_ECX_FROM_PTR_R8_(VALUE) or ecx, dword ptr [r8 + VALUE]
#define OR_ECX_FROM_PTR_R9_(VALUE) or ecx, dword ptr [r9 + VALUE]
#define OR_ECX_FROM_PTR_R10_(VALUE) or ecx, dword ptr [r10 + VALUE]
#define OR_ECX_FROM_PTR_R11_(VALUE) or ecx, dword ptr [r11 + VALUE]
#define OR_ECX_FROM_PTR_R12_(VALUE) or ecx, dword ptr [r12 + VALUE]
#define OR_ECX_FROM_PTR_R13_(VALUE) or ecx, dword ptr [r13 + VALUE]
#define OR_ECX_FROM_PTR_R14_(VALUE) or ecx, dword ptr [r14 + VALUE]
#define OR_ECX_FROM_PTR_R15_(VALUE) or ecx, dword ptr [r15 + VALUE]
#define OR_ECX_FROM_PTR_EAX_(VALUE) or ecx, dword ptr [eax + VALUE]
#define OR_ECX_FROM_PTR_EBX_(VALUE) or ecx, dword ptr [ebx + VALUE]
#define OR_ECX_FROM_PTR_ECX_(VALUE) or ecx, dword ptr [ecx + VALUE]
#define OR_ECX_FROM_PTR_EDX_(VALUE) or ecx, dword ptr [edx + VALUE]
#define OR_ECX_FROM_PTR_EDI_(VALUE) or ecx, dword ptr [edi + VALUE]
#define OR_ECX_FROM_PTR_ESI_(VALUE) or ecx, dword ptr [esi + VALUE]
#define OR_ECX_FROM_PTR_EBP_(VALUE) or ecx, dword ptr [ebp + VALUE]
#define OR_ECX_FROM_PTR_ESP_(VALUE) or ecx, dword ptr [esp + VALUE]

#define OR_EDX_FROM_PTR_RAX_(VALUE) or edx, dword ptr [rax + VALUE]
#define OR_EDX_FROM_PTR_RBX_(VALUE) or edx, dword ptr [rbx + VALUE]
#define OR_EDX_FROM_PTR_RCX_(VALUE) or edx, dword ptr [rcx + VALUE]
#define OR_EDX_FROM_PTR_RDX_(VALUE) or edx, dword ptr [rdx + VALUE]
#define OR_EDX_FROM_PTR_RDI_(VALUE) or edx, dword ptr [rdi + VALUE]
#define OR_EDX_FROM_PTR_RSI_(VALUE) or edx, dword ptr [rsi + VALUE]
#define OR_EDX_FROM_PTR_RBP_(VALUE) or edx, dword ptr [rbp + VALUE]
#define OR_EDX_FROM_PTR_RSP_(VALUE) or edx, dword ptr [rsp + VALUE]
#define OR_EDX_FROM_PTR_R8_(VALUE) or edx, dword ptr [r8 + VALUE]
#define OR_EDX_FROM_PTR_R9_(VALUE) or edx, dword ptr [r9 + VALUE]
#define OR_EDX_FROM_PTR_R10_(VALUE) or edx, dword ptr [r10 + VALUE]
#define OR_EDX_FROM_PTR_R11_(VALUE) or edx, dword ptr [r11 + VALUE]
#define OR_EDX_FROM_PTR_R12_(VALUE) or edx, dword ptr [r12 + VALUE]
#define OR_EDX_FROM_PTR_R13_(VALUE) or edx, dword ptr [r13 + VALUE]
#define OR_EDX_FROM_PTR_R14_(VALUE) or edx, dword ptr [r14 + VALUE]
#define OR_EDX_FROM_PTR_R15_(VALUE) or edx, dword ptr [r15 + VALUE]
#define OR_EDX_FROM_PTR_EAX_(VALUE) or edx, dword ptr [eax + VALUE]
#define OR_EDX_FROM_PTR_EBX_(VALUE) or edx, dword ptr [ebx + VALUE]
#define OR_EDX_FROM_PTR_ECX_(VALUE) or edx, dword ptr [ecx + VALUE]
#define OR_EDX_FROM_PTR_EDX_(VALUE) or edx, dword ptr [edx + VALUE]
#define OR_EDX_FROM_PTR_EDI_(VALUE) or edx, dword ptr [edi + VALUE]
#define OR_EDX_FROM_PTR_ESI_(VALUE) or edx, dword ptr [esi + VALUE]
#define OR_EDX_FROM_PTR_EBP_(VALUE) or edx, dword ptr [ebp + VALUE]
#define OR_EDX_FROM_PTR_ESP_(VALUE) or edx, dword ptr [esp + VALUE]

#define OR_EDI_FROM_PTR_RAX_(VALUE) or edi, dword ptr [rax + VALUE]
#define OR_EDI_FROM_PTR_RBX_(VALUE) or edi, dword ptr [rbx + VALUE]
#define OR_EDI_FROM_PTR_RCX_(VALUE) or edi, dword ptr [rcx + VALUE]
#define OR_EDI_FROM_PTR_RDX_(VALUE) or edi, dword ptr [rdx + VALUE]
#define OR_EDI_FROM_PTR_RDI_(VALUE) or edi, dword ptr [rdi + VALUE]
#define OR_EDI_FROM_PTR_RSI_(VALUE) or edi, dword ptr [rsi + VALUE]
#define OR_EDI_FROM_PTR_RBP_(VALUE) or edi, dword ptr [rbp + VALUE]
#define OR_EDI_FROM_PTR_RSP_(VALUE) or edi, dword ptr [rsp + VALUE]
#define OR_EDI_FROM_PTR_R8_(VALUE) or edi, dword ptr [r8 + VALUE]
#define OR_EDI_FROM_PTR_R9_(VALUE) or edi, dword ptr [r9 + VALUE]
#define OR_EDI_FROM_PTR_R10_(VALUE) or edi, dword ptr [r10 + VALUE]
#define OR_EDI_FROM_PTR_R11_(VALUE) or edi, dword ptr [r11 + VALUE]
#define OR_EDI_FROM_PTR_R12_(VALUE) or edi, dword ptr [r12 + VALUE]
#define OR_EDI_FROM_PTR_R13_(VALUE) or edi, dword ptr [r13 + VALUE]
#define OR_EDI_FROM_PTR_R14_(VALUE) or edi, dword ptr [r14 + VALUE]
#define OR_EDI_FROM_PTR_R15_(VALUE) or edi, dword ptr [r15 + VALUE]
#define OR_EDI_FROM_PTR_EAX_(VALUE) or edi, dword ptr [eax + VALUE]
#define OR_EDI_FROM_PTR_EBX_(VALUE) or edi, dword ptr [ebx + VALUE]
#define OR_EDI_FROM_PTR_ECX_(VALUE) or edi, dword ptr [ecx + VALUE]
#define OR_EDI_FROM_PTR_EDX_(VALUE) or edi, dword ptr [edx + VALUE]
#define OR_EDI_FROM_PTR_EDI_(VALUE) or edi, dword ptr [edi + VALUE]
#define OR_EDI_FROM_PTR_ESI_(VALUE) or edi, dword ptr [esi + VALUE]
#define OR_EDI_FROM_PTR_EBP_(VALUE) or edi, dword ptr [ebp + VALUE]
#define OR_EDI_FROM_PTR_ESP_(VALUE) or edi, dword ptr [esp + VALUE]

#define OR_ESI_FROM_PTR_RAX_(VALUE) or esi, dword ptr [rax + VALUE]
#define OR_ESI_FROM_PTR_RBX_(VALUE) or esi, dword ptr [rbx + VALUE]
#define OR_ESI_FROM_PTR_RCX_(VALUE) or esi, dword ptr [rcx + VALUE]
#define OR_ESI_FROM_PTR_RDX_(VALUE) or esi, dword ptr [rdx + VALUE]
#define OR_ESI_FROM_PTR_RDI_(VALUE) or esi, dword ptr [rdi + VALUE]
#define OR_ESI_FROM_PTR_RSI_(VALUE) or esi, dword ptr [rsi + VALUE]
#define OR_ESI_FROM_PTR_RBP_(VALUE) or esi, dword ptr [rbp + VALUE]
#define OR_ESI_FROM_PTR_RSP_(VALUE) or esi, dword ptr [rsp + VALUE]
#define OR_ESI_FROM_PTR_R8_(VALUE) or esi, dword ptr [r8 + VALUE]
#define OR_ESI_FROM_PTR_R9_(VALUE) or esi, dword ptr [r9 + VALUE]
#define OR_ESI_FROM_PTR_R10_(VALUE) or esi, dword ptr [r10 + VALUE]
#define OR_ESI_FROM_PTR_R11_(VALUE) or esi, dword ptr [r11 + VALUE]
#define OR_ESI_FROM_PTR_R12_(VALUE) or esi, dword ptr [r12 + VALUE]
#define OR_ESI_FROM_PTR_R13_(VALUE) or esi, dword ptr [r13 + VALUE]
#define OR_ESI_FROM_PTR_R14_(VALUE) or esi, dword ptr [r14 + VALUE]
#define OR_ESI_FROM_PTR_R15_(VALUE) or esi, dword ptr [r15 + VALUE]
#define OR_ESI_FROM_PTR_EAX_(VALUE) or esi, dword ptr [eax + VALUE]
#define OR_ESI_FROM_PTR_EBX_(VALUE) or esi, dword ptr [ebx + VALUE]
#define OR_ESI_FROM_PTR_ECX_(VALUE) or esi, dword ptr [ecx + VALUE]
#define OR_ESI_FROM_PTR_EDX_(VALUE) or esi, dword ptr [edx + VALUE]
#define OR_ESI_FROM_PTR_EDI_(VALUE) or esi, dword ptr [edi + VALUE]
#define OR_ESI_FROM_PTR_ESI_(VALUE) or esi, dword ptr [esi + VALUE]
#define OR_ESI_FROM_PTR_EBP_(VALUE) or esi, dword ptr [ebp + VALUE]
#define OR_ESI_FROM_PTR_ESP_(VALUE) or esi, dword ptr [esp + VALUE]

#define OR_EBP_FROM_PTR_RAX_(VALUE) or ebp, dword ptr [rax + VALUE]
#define OR_EBP_FROM_PTR_RBX_(VALUE) or ebp, dword ptr [rbx + VALUE]
#define OR_EBP_FROM_PTR_RCX_(VALUE) or ebp, dword ptr [rcx + VALUE]
#define OR_EBP_FROM_PTR_RDX_(VALUE) or ebp, dword ptr [rdx + VALUE]
#define OR_EBP_FROM_PTR_RDI_(VALUE) or ebp, dword ptr [rdi + VALUE]
#define OR_EBP_FROM_PTR_RSI_(VALUE) or ebp, dword ptr [rsi + VALUE]
#define OR_EBP_FROM_PTR_RBP_(VALUE) or ebp, dword ptr [rbp + VALUE]
#define OR_EBP_FROM_PTR_RSP_(VALUE) or ebp, dword ptr [rsp + VALUE]
#define OR_EBP_FROM_PTR_R8_(VALUE) or ebp, dword ptr [r8 + VALUE]
#define OR_EBP_FROM_PTR_R9_(VALUE) or ebp, dword ptr [r9 + VALUE]
#define OR_EBP_FROM_PTR_R10_(VALUE) or ebp, dword ptr [r10 + VALUE]
#define OR_EBP_FROM_PTR_R11_(VALUE) or ebp, dword ptr [r11 + VALUE]
#define OR_EBP_FROM_PTR_R12_(VALUE) or ebp, dword ptr [r12 + VALUE]
#define OR_EBP_FROM_PTR_R13_(VALUE) or ebp, dword ptr [r13 + VALUE]
#define OR_EBP_FROM_PTR_R14_(VALUE) or ebp, dword ptr [r14 + VALUE]
#define OR_EBP_FROM_PTR_R15_(VALUE) or ebp, dword ptr [r15 + VALUE]
#define OR_EBP_FROM_PTR_EAX_(VALUE) or ebp, dword ptr [eax + VALUE]
#define OR_EBP_FROM_PTR_EBX_(VALUE) or ebp, dword ptr [ebx + VALUE]
#define OR_EBP_FROM_PTR_ECX_(VALUE) or ebp, dword ptr [ecx + VALUE]
#define OR_EBP_FROM_PTR_EDX_(VALUE) or ebp, dword ptr [edx + VALUE]
#define OR_EBP_FROM_PTR_EDI_(VALUE) or ebp, dword ptr [edi + VALUE]
#define OR_EBP_FROM_PTR_ESI_(VALUE) or ebp, dword ptr [esi + VALUE]
#define OR_EBP_FROM_PTR_EBP_(VALUE) or ebp, dword ptr [ebp + VALUE]
#define OR_EBP_FROM_PTR_ESP_(VALUE) or ebp, dword ptr [esp + VALUE]

#define OR_ESP_FROM_PTR_RAX_(VALUE) or esp, dword ptr [rax + VALUE]
#define OR_ESP_FROM_PTR_RBX_(VALUE) or esp, dword ptr [rbx + VALUE]
#define OR_ESP_FROM_PTR_RCX_(VALUE) or esp, dword ptr [rcx + VALUE]
#define OR_ESP_FROM_PTR_RDX_(VALUE) or esp, dword ptr [rdx + VALUE]
#define OR_ESP_FROM_PTR_RDI_(VALUE) or esp, dword ptr [rdi + VALUE]
#define OR_ESP_FROM_PTR_RSI_(VALUE) or esp, dword ptr [rsi + VALUE]
#define OR_ESP_FROM_PTR_RBP_(VALUE) or esp, dword ptr [rbp + VALUE]
#define OR_ESP_FROM_PTR_RSP_(VALUE) or esp, dword ptr [rsp + VALUE]
#define OR_ESP_FROM_PTR_R8_(VALUE) or esp, dword ptr [r8 + VALUE]
#define OR_ESP_FROM_PTR_R9_(VALUE) or esp, dword ptr [r9 + VALUE]
#define OR_ESP_FROM_PTR_R10_(VALUE) or esp, dword ptr [r10 + VALUE]
#define OR_ESP_FROM_PTR_R11_(VALUE) or esp, dword ptr [r11 + VALUE]
#define OR_ESP_FROM_PTR_R12_(VALUE) or esp, dword ptr [r12 + VALUE]
#define OR_ESP_FROM_PTR_R13_(VALUE) or esp, dword ptr [r13 + VALUE]
#define OR_ESP_FROM_PTR_R14_(VALUE) or esp, dword ptr [r14 + VALUE]
#define OR_ESP_FROM_PTR_R15_(VALUE) or esp, dword ptr [r15 + VALUE]
#define OR_ESP_FROM_PTR_EAX_(VALUE) or esp, dword ptr [eax + VALUE]
#define OR_ESP_FROM_PTR_EBX_(VALUE) or esp, dword ptr [ebx + VALUE]
#define OR_ESP_FROM_PTR_ECX_(VALUE) or esp, dword ptr [ecx + VALUE]
#define OR_ESP_FROM_PTR_EDX_(VALUE) or esp, dword ptr [edx + VALUE]
#define OR_ESP_FROM_PTR_EDI_(VALUE) or esp, dword ptr [edi + VALUE]
#define OR_ESP_FROM_PTR_ESI_(VALUE) or esp, dword ptr [esi + VALUE]
#define OR_ESP_FROM_PTR_EBP_(VALUE) or esp, dword ptr [ebp + VALUE]
#define OR_ESP_FROM_PTR_ESP_(VALUE) or esp, dword ptr [esp + VALUE]

#define OR_R8D_FROM_PTR_RAX_(VALUE) or r8d, dword ptr [rax + VALUE]
#define OR_R8D_FROM_PTR_RBX_(VALUE) or r8d, dword ptr [rbx + VALUE]
#define OR_R8D_FROM_PTR_RCX_(VALUE) or r8d, dword ptr [rcx + VALUE]
#define OR_R8D_FROM_PTR_RDX_(VALUE) or r8d, dword ptr [rdx + VALUE]
#define OR_R8D_FROM_PTR_RDI_(VALUE) or r8d, dword ptr [rdi + VALUE]
#define OR_R8D_FROM_PTR_RSI_(VALUE) or r8d, dword ptr [rsi + VALUE]
#define OR_R8D_FROM_PTR_RBP_(VALUE) or r8d, dword ptr [rbp + VALUE]
#define OR_R8D_FROM_PTR_RSP_(VALUE) or r8d, dword ptr [rsp + VALUE]
#define OR_R8D_FROM_PTR_R8_(VALUE) or r8d, dword ptr [r8 + VALUE]
#define OR_R8D_FROM_PTR_R9_(VALUE) or r8d, dword ptr [r9 + VALUE]
#define OR_R8D_FROM_PTR_R10_(VALUE) or r8d, dword ptr [r10 + VALUE]
#define OR_R8D_FROM_PTR_R11_(VALUE) or r8d, dword ptr [r11 + VALUE]
#define OR_R8D_FROM_PTR_R12_(VALUE) or r8d, dword ptr [r12 + VALUE]
#define OR_R8D_FROM_PTR_R13_(VALUE) or r8d, dword ptr [r13 + VALUE]
#define OR_R8D_FROM_PTR_R14_(VALUE) or r8d, dword ptr [r14 + VALUE]
#define OR_R8D_FROM_PTR_R15_(VALUE) or r8d, dword ptr [r15 + VALUE]
#define OR_R8D_FROM_PTR_EAX_(VALUE) or r8d, dword ptr [eax + VALUE]
#define OR_R8D_FROM_PTR_EBX_(VALUE) or r8d, dword ptr [ebx + VALUE]
#define OR_R8D_FROM_PTR_ECX_(VALUE) or r8d, dword ptr [ecx + VALUE]
#define OR_R8D_FROM_PTR_EDX_(VALUE) or r8d, dword ptr [edx + VALUE]
#define OR_R8D_FROM_PTR_EDI_(VALUE) or r8d, dword ptr [edi + VALUE]
#define OR_R8D_FROM_PTR_ESI_(VALUE) or r8d, dword ptr [esi + VALUE]
#define OR_R8D_FROM_PTR_EBP_(VALUE) or r8d, dword ptr [ebp + VALUE]
#define OR_R8D_FROM_PTR_ESP_(VALUE) or r8d, dword ptr [esp + VALUE]

#define OR_R9D_FROM_PTR_RAX_(VALUE) or r9d, dword ptr [rax + VALUE]
#define OR_R9D_FROM_PTR_RBX_(VALUE) or r9d, dword ptr [rbx + VALUE]
#define OR_R9D_FROM_PTR_RCX_(VALUE) or r9d, dword ptr [rcx + VALUE]
#define OR_R9D_FROM_PTR_RDX_(VALUE) or r9d, dword ptr [rdx + VALUE]
#define OR_R9D_FROM_PTR_RDI_(VALUE) or r9d, dword ptr [rdi + VALUE]
#define OR_R9D_FROM_PTR_RSI_(VALUE) or r9d, dword ptr [rsi + VALUE]
#define OR_R9D_FROM_PTR_RBP_(VALUE) or r9d, dword ptr [rbp + VALUE]
#define OR_R9D_FROM_PTR_RSP_(VALUE) or r9d, dword ptr [rsp + VALUE]
#define OR_R9D_FROM_PTR_R8_(VALUE) or r9d, dword ptr [r8 + VALUE]
#define OR_R9D_FROM_PTR_R9_(VALUE) or r9d, dword ptr [r9 + VALUE]
#define OR_R9D_FROM_PTR_R10_(VALUE) or r9d, dword ptr [r10 + VALUE]
#define OR_R9D_FROM_PTR_R11_(VALUE) or r9d, dword ptr [r11 + VALUE]
#define OR_R9D_FROM_PTR_R12_(VALUE) or r9d, dword ptr [r12 + VALUE]
#define OR_R9D_FROM_PTR_R13_(VALUE) or r9d, dword ptr [r13 + VALUE]
#define OR_R9D_FROM_PTR_R14_(VALUE) or r9d, dword ptr [r14 + VALUE]
#define OR_R9D_FROM_PTR_R15_(VALUE) or r9d, dword ptr [r15 + VALUE]
#define OR_R9D_FROM_PTR_EAX_(VALUE) or r9d, dword ptr [eax + VALUE]
#define OR_R9D_FROM_PTR_EBX_(VALUE) or r9d, dword ptr [ebx + VALUE]
#define OR_R9D_FROM_PTR_ECX_(VALUE) or r9d, dword ptr [ecx + VALUE]
#define OR_R9D_FROM_PTR_EDX_(VALUE) or r9d, dword ptr [edx + VALUE]
#define OR_R9D_FROM_PTR_EDI_(VALUE) or r9d, dword ptr [edi + VALUE]
#define OR_R9D_FROM_PTR_ESI_(VALUE) or r9d, dword ptr [esi + VALUE]
#define OR_R9D_FROM_PTR_EBP_(VALUE) or r9d, dword ptr [ebp + VALUE]
#define OR_R9D_FROM_PTR_ESP_(VALUE) or r9d, dword ptr [esp + VALUE]

#define OR_R10D_FROM_PTR_RAX_(VALUE) or r10d, dword ptr [rax + VALUE]
#define OR_R10D_FROM_PTR_RBX_(VALUE) or r10d, dword ptr [rbx + VALUE]
#define OR_R10D_FROM_PTR_RCX_(VALUE) or r10d, dword ptr [rcx + VALUE]
#define OR_R10D_FROM_PTR_RDX_(VALUE) or r10d, dword ptr [rdx + VALUE]
#define OR_R10D_FROM_PTR_RDI_(VALUE) or r10d, dword ptr [rdi + VALUE]
#define OR_R10D_FROM_PTR_RSI_(VALUE) or r10d, dword ptr [rsi + VALUE]
#define OR_R10D_FROM_PTR_RBP_(VALUE) or r10d, dword ptr [rbp + VALUE]
#define OR_R10D_FROM_PTR_RSP_(VALUE) or r10d, dword ptr [rsp + VALUE]
#define OR_R10D_FROM_PTR_R8_(VALUE) or r10d, dword ptr [r8 + VALUE]
#define OR_R10D_FROM_PTR_R9_(VALUE) or r10d, dword ptr [r9 + VALUE]
#define OR_R10D_FROM_PTR_R10_(VALUE) or r10d, dword ptr [r10 + VALUE]
#define OR_R10D_FROM_PTR_R11_(VALUE) or r10d, dword ptr [r11 + VALUE]
#define OR_R10D_FROM_PTR_R12_(VALUE) or r10d, dword ptr [r12 + VALUE]
#define OR_R10D_FROM_PTR_R13_(VALUE) or r10d, dword ptr [r13 + VALUE]
#define OR_R10D_FROM_PTR_R14_(VALUE) or r10d, dword ptr [r14 + VALUE]
#define OR_R10D_FROM_PTR_R15_(VALUE) or r10d, dword ptr [r15 + VALUE]
#define OR_R10D_FROM_PTR_EAX_(VALUE) or r10d, dword ptr [eax + VALUE]
#define OR_R10D_FROM_PTR_EBX_(VALUE) or r10d, dword ptr [ebx + VALUE]
#define OR_R10D_FROM_PTR_ECX_(VALUE) or r10d, dword ptr [ecx + VALUE]
#define OR_R10D_FROM_PTR_EDX_(VALUE) or r10d, dword ptr [edx + VALUE]
#define OR_R10D_FROM_PTR_EDI_(VALUE) or r10d, dword ptr [edi + VALUE]
#define OR_R10D_FROM_PTR_ESI_(VALUE) or r10d, dword ptr [esi + VALUE]
#define OR_R10D_FROM_PTR_EBP_(VALUE) or r10d, dword ptr [ebp + VALUE]
#define OR_R10D_FROM_PTR_ESP_(VALUE) or r10d, dword ptr [esp + VALUE]

#define OR_R11D_FROM_PTR_RAX_(VALUE) or r11d, dword ptr [rax + VALUE]
#define OR_R11D_FROM_PTR_RBX_(VALUE) or r11d, dword ptr [rbx + VALUE]
#define OR_R11D_FROM_PTR_RCX_(VALUE) or r11d, dword ptr [rcx + VALUE]
#define OR_R11D_FROM_PTR_RDX_(VALUE) or r11d, dword ptr [rdx + VALUE]
#define OR_R11D_FROM_PTR_RDI_(VALUE) or r11d, dword ptr [rdi + VALUE]
#define OR_R11D_FROM_PTR_RSI_(VALUE) or r11d, dword ptr [rsi + VALUE]
#define OR_R11D_FROM_PTR_RBP_(VALUE) or r11d, dword ptr [rbp + VALUE]
#define OR_R11D_FROM_PTR_RSP_(VALUE) or r11d, dword ptr [rsp + VALUE]
#define OR_R11D_FROM_PTR_R8_(VALUE) or r11d, dword ptr [r8 + VALUE]
#define OR_R11D_FROM_PTR_R9_(VALUE) or r11d, dword ptr [r9 + VALUE]
#define OR_R11D_FROM_PTR_R10_(VALUE) or r11d, dword ptr [r10 + VALUE]
#define OR_R11D_FROM_PTR_R11_(VALUE) or r11d, dword ptr [r11 + VALUE]
#define OR_R11D_FROM_PTR_R12_(VALUE) or r11d, dword ptr [r12 + VALUE]
#define OR_R11D_FROM_PTR_R13_(VALUE) or r11d, dword ptr [r13 + VALUE]
#define OR_R11D_FROM_PTR_R14_(VALUE) or r11d, dword ptr [r14 + VALUE]
#define OR_R11D_FROM_PTR_R15_(VALUE) or r11d, dword ptr [r15 + VALUE]
#define OR_R11D_FROM_PTR_EAX_(VALUE) or r11d, dword ptr [eax + VALUE]
#define OR_R11D_FROM_PTR_EBX_(VALUE) or r11d, dword ptr [ebx + VALUE]
#define OR_R11D_FROM_PTR_ECX_(VALUE) or r11d, dword ptr [ecx + VALUE]
#define OR_R11D_FROM_PTR_EDX_(VALUE) or r11d, dword ptr [edx + VALUE]
#define OR_R11D_FROM_PTR_EDI_(VALUE) or r11d, dword ptr [edi + VALUE]
#define OR_R11D_FROM_PTR_ESI_(VALUE) or r11d, dword ptr [esi + VALUE]
#define OR_R11D_FROM_PTR_EBP_(VALUE) or r11d, dword ptr [ebp + VALUE]
#define OR_R11D_FROM_PTR_ESP_(VALUE) or r11d, dword ptr [esp + VALUE]

#define OR_R12D_FROM_PTR_RAX_(VALUE) or r12d, dword ptr [rax + VALUE]
#define OR_R12D_FROM_PTR_RBX_(VALUE) or r12d, dword ptr [rbx + VALUE]
#define OR_R12D_FROM_PTR_RCX_(VALUE) or r12d, dword ptr [rcx + VALUE]
#define OR_R12D_FROM_PTR_RDX_(VALUE) or r12d, dword ptr [rdx + VALUE]
#define OR_R12D_FROM_PTR_RDI_(VALUE) or r12d, dword ptr [rdi + VALUE]
#define OR_R12D_FROM_PTR_RSI_(VALUE) or r12d, dword ptr [rsi + VALUE]
#define OR_R12D_FROM_PTR_RBP_(VALUE) or r12d, dword ptr [rbp + VALUE]
#define OR_R12D_FROM_PTR_RSP_(VALUE) or r12d, dword ptr [rsp + VALUE]
#define OR_R12D_FROM_PTR_R8_(VALUE) or r12d, dword ptr [r8 + VALUE]
#define OR_R12D_FROM_PTR_R9_(VALUE) or r12d, dword ptr [r9 + VALUE]
#define OR_R12D_FROM_PTR_R10_(VALUE) or r12d, dword ptr [r10 + VALUE]
#define OR_R12D_FROM_PTR_R11_(VALUE) or r12d, dword ptr [r11 + VALUE]
#define OR_R12D_FROM_PTR_R12_(VALUE) or r12d, dword ptr [r12 + VALUE]
#define OR_R12D_FROM_PTR_R13_(VALUE) or r12d, dword ptr [r13 + VALUE]
#define OR_R12D_FROM_PTR_R14_(VALUE) or r12d, dword ptr [r14 + VALUE]
#define OR_R12D_FROM_PTR_R15_(VALUE) or r12d, dword ptr [r15 + VALUE]
#define OR_R12D_FROM_PTR_EAX_(VALUE) or r12d, dword ptr [eax + VALUE]
#define OR_R12D_FROM_PTR_EBX_(VALUE) or r12d, dword ptr [ebx + VALUE]
#define OR_R12D_FROM_PTR_ECX_(VALUE) or r12d, dword ptr [ecx + VALUE]
#define OR_R12D_FROM_PTR_EDX_(VALUE) or r12d, dword ptr [edx + VALUE]
#define OR_R12D_FROM_PTR_EDI_(VALUE) or r12d, dword ptr [edi + VALUE]
#define OR_R12D_FROM_PTR_ESI_(VALUE) or r12d, dword ptr [esi + VALUE]
#define OR_R12D_FROM_PTR_EBP_(VALUE) or r12d, dword ptr [ebp + VALUE]
#define OR_R12D_FROM_PTR_ESP_(VALUE) or r12d, dword ptr [esp + VALUE]

#define OR_R13D_FROM_PTR_RAX_(VALUE) or r13d, dword ptr [rax + VALUE]
#define OR_R13D_FROM_PTR_RBX_(VALUE) or r13d, dword ptr [rbx + VALUE]
#define OR_R13D_FROM_PTR_RCX_(VALUE) or r13d, dword ptr [rcx + VALUE]
#define OR_R13D_FROM_PTR_RDX_(VALUE) or r13d, dword ptr [rdx + VALUE]
#define OR_R13D_FROM_PTR_RDI_(VALUE) or r13d, dword ptr [rdi + VALUE]
#define OR_R13D_FROM_PTR_RSI_(VALUE) or r13d, dword ptr [rsi + VALUE]
#define OR_R13D_FROM_PTR_RBP_(VALUE) or r13d, dword ptr [rbp + VALUE]
#define OR_R13D_FROM_PTR_RSP_(VALUE) or r13d, dword ptr [rsp + VALUE]
#define OR_R13D_FROM_PTR_R8_(VALUE) or r13d, dword ptr [r8 + VALUE]
#define OR_R13D_FROM_PTR_R9_(VALUE) or r13d, dword ptr [r9 + VALUE]
#define OR_R13D_FROM_PTR_R10_(VALUE) or r13d, dword ptr [r10 + VALUE]
#define OR_R13D_FROM_PTR_R11_(VALUE) or r13d, dword ptr [r11 + VALUE]
#define OR_R13D_FROM_PTR_R12_(VALUE) or r13d, dword ptr [r12 + VALUE]
#define OR_R13D_FROM_PTR_R13_(VALUE) or r13d, dword ptr [r13 + VALUE]
#define OR_R13D_FROM_PTR_R14_(VALUE) or r13d, dword ptr [r14 + VALUE]
#define OR_R13D_FROM_PTR_R15_(VALUE) or r13d, dword ptr [r15 + VALUE]
#define OR_R13D_FROM_PTR_EAX_(VALUE) or r13d, dword ptr [eax + VALUE]
#define OR_R13D_FROM_PTR_EBX_(VALUE) or r13d, dword ptr [ebx + VALUE]
#define OR_R13D_FROM_PTR_ECX_(VALUE) or r13d, dword ptr [ecx + VALUE]
#define OR_R13D_FROM_PTR_EDX_(VALUE) or r13d, dword ptr [edx + VALUE]
#define OR_R13D_FROM_PTR_EDI_(VALUE) or r13d, dword ptr [edi + VALUE]
#define OR_R13D_FROM_PTR_ESI_(VALUE) or r13d, dword ptr [esi + VALUE]
#define OR_R13D_FROM_PTR_EBP_(VALUE) or r13d, dword ptr [ebp + VALUE]
#define OR_R13D_FROM_PTR_ESP_(VALUE) or r13d, dword ptr [esp + VALUE]

#define OR_R14D_FROM_PTR_RAX_(VALUE) or r14d, dword ptr [rax + VALUE]
#define OR_R14D_FROM_PTR_RBX_(VALUE) or r14d, dword ptr [rbx + VALUE]
#define OR_R14D_FROM_PTR_RCX_(VALUE) or r14d, dword ptr [rcx + VALUE]
#define OR_R14D_FROM_PTR_RDX_(VALUE) or r14d, dword ptr [rdx + VALUE]
#define OR_R14D_FROM_PTR_RDI_(VALUE) or r14d, dword ptr [rdi + VALUE]
#define OR_R14D_FROM_PTR_RSI_(VALUE) or r14d, dword ptr [rsi + VALUE]
#define OR_R14D_FROM_PTR_RBP_(VALUE) or r14d, dword ptr [rbp + VALUE]
#define OR_R14D_FROM_PTR_RSP_(VALUE) or r14d, dword ptr [rsp + VALUE]
#define OR_R14D_FROM_PTR_R8_(VALUE) or r14d, dword ptr [r8 + VALUE]
#define OR_R14D_FROM_PTR_R9_(VALUE) or r14d, dword ptr [r9 + VALUE]
#define OR_R14D_FROM_PTR_R10_(VALUE) or r14d, dword ptr [r10 + VALUE]
#define OR_R14D_FROM_PTR_R11_(VALUE) or r14d, dword ptr [r11 + VALUE]
#define OR_R14D_FROM_PTR_R12_(VALUE) or r14d, dword ptr [r12 + VALUE]
#define OR_R14D_FROM_PTR_R13_(VALUE) or r14d, dword ptr [r13 + VALUE]
#define OR_R14D_FROM_PTR_R14_(VALUE) or r14d, dword ptr [r14 + VALUE]
#define OR_R14D_FROM_PTR_R15_(VALUE) or r14d, dword ptr [r15 + VALUE]
#define OR_R14D_FROM_PTR_EAX_(VALUE) or r14d, dword ptr [eax + VALUE]
#define OR_R14D_FROM_PTR_EBX_(VALUE) or r14d, dword ptr [ebx + VALUE]
#define OR_R14D_FROM_PTR_ECX_(VALUE) or r14d, dword ptr [ecx + VALUE]
#define OR_R14D_FROM_PTR_EDX_(VALUE) or r14d, dword ptr [edx + VALUE]
#define OR_R14D_FROM_PTR_EDI_(VALUE) or r14d, dword ptr [edi + VALUE]
#define OR_R14D_FROM_PTR_ESI_(VALUE) or r14d, dword ptr [esi + VALUE]
#define OR_R14D_FROM_PTR_EBP_(VALUE) or r14d, dword ptr [ebp + VALUE]
#define OR_R14D_FROM_PTR_ESP_(VALUE) or r14d, dword ptr [esp + VALUE]

#define OR_R15D_FROM_PTR_RAX_(VALUE) or r15d, dword ptr [rax + VALUE]
#define OR_R15D_FROM_PTR_RBX_(VALUE) or r15d, dword ptr [rbx + VALUE]
#define OR_R15D_FROM_PTR_RCX_(VALUE) or r15d, dword ptr [rcx + VALUE]
#define OR_R15D_FROM_PTR_RDX_(VALUE) or r15d, dword ptr [rdx + VALUE]
#define OR_R15D_FROM_PTR_RDI_(VALUE) or r15d, dword ptr [rdi + VALUE]
#define OR_R15D_FROM_PTR_RSI_(VALUE) or r15d, dword ptr [rsi + VALUE]
#define OR_R15D_FROM_PTR_RBP_(VALUE) or r15d, dword ptr [rbp + VALUE]
#define OR_R15D_FROM_PTR_RSP_(VALUE) or r15d, dword ptr [rsp + VALUE]
#define OR_R15D_FROM_PTR_R8_(VALUE) or r15d, dword ptr [r8 + VALUE]
#define OR_R15D_FROM_PTR_R9_(VALUE) or r15d, dword ptr [r9 + VALUE]
#define OR_R15D_FROM_PTR_R10_(VALUE) or r15d, dword ptr [r10 + VALUE]
#define OR_R15D_FROM_PTR_R11_(VALUE) or r15d, dword ptr [r11 + VALUE]
#define OR_R15D_FROM_PTR_R12_(VALUE) or r15d, dword ptr [r12 + VALUE]
#define OR_R15D_FROM_PTR_R13_(VALUE) or r15d, dword ptr [r13 + VALUE]
#define OR_R15D_FROM_PTR_R14_(VALUE) or r15d, dword ptr [r14 + VALUE]
#define OR_R15D_FROM_PTR_R15_(VALUE) or r15d, dword ptr [r15 + VALUE]
#define OR_R15D_FROM_PTR_EAX_(VALUE) or r15d, dword ptr [eax + VALUE]
#define OR_R15D_FROM_PTR_EBX_(VALUE) or r15d, dword ptr [ebx + VALUE]
#define OR_R15D_FROM_PTR_ECX_(VALUE) or r15d, dword ptr [ecx + VALUE]
#define OR_R15D_FROM_PTR_EDX_(VALUE) or r15d, dword ptr [edx + VALUE]
#define OR_R15D_FROM_PTR_EDI_(VALUE) or r15d, dword ptr [edi + VALUE]
#define OR_R15D_FROM_PTR_ESI_(VALUE) or r15d, dword ptr [esi + VALUE]
#define OR_R15D_FROM_PTR_EBP_(VALUE) or r15d, dword ptr [ebp + VALUE]
#define OR_R15D_FROM_PTR_ESP_(VALUE) or r15d, dword ptr [esp + VALUE]

#define OR_EAX_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], eax
#define OR_EAX_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], eax
#define OR_EAX_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], eax
#define OR_EAX_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], eax
#define OR_EAX_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], eax
#define OR_EAX_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], eax
#define OR_EAX_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], eax
#define OR_EAX_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], eax
#define OR_EAX_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], eax
#define OR_EAX_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], eax
#define OR_EAX_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], eax
#define OR_EAX_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], eax
#define OR_EAX_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], eax
#define OR_EAX_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], eax
#define OR_EAX_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], eax
#define OR_EAX_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], eax
#define OR_EAX_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], eax
#define OR_EAX_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], eax
#define OR_EAX_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], eax
#define OR_EAX_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], eax
#define OR_EAX_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], eax
#define OR_EAX_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], eax
#define OR_EAX_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], eax
#define OR_EAX_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], eax

#define OR_EBX_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], ebx
#define OR_EBX_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], ebx
#define OR_EBX_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], ebx
#define OR_EBX_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], ebx
#define OR_EBX_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], ebx
#define OR_EBX_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], ebx
#define OR_EBX_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], ebx
#define OR_EBX_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], ebx
#define OR_EBX_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], ebx
#define OR_EBX_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], ebx
#define OR_EBX_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], ebx
#define OR_EBX_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], ebx
#define OR_EBX_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], ebx
#define OR_EBX_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], ebx
#define OR_EBX_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], ebx
#define OR_EBX_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], ebx
#define OR_EBX_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], ebx
#define OR_EBX_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], ebx
#define OR_EBX_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], ebx
#define OR_EBX_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], ebx
#define OR_EBX_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], ebx
#define OR_EBX_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], ebx
#define OR_EBX_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], ebx
#define OR_EBX_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], ebx

#define OR_ECX_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], ecx
#define OR_ECX_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], ecx
#define OR_ECX_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], ecx
#define OR_ECX_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], ecx
#define OR_ECX_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], ecx
#define OR_ECX_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], ecx
#define OR_ECX_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], ecx
#define OR_ECX_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], ecx
#define OR_ECX_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], ecx
#define OR_ECX_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], ecx
#define OR_ECX_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], ecx
#define OR_ECX_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], ecx
#define OR_ECX_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], ecx
#define OR_ECX_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], ecx
#define OR_ECX_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], ecx
#define OR_ECX_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], ecx
#define OR_ECX_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], ecx
#define OR_ECX_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], ecx
#define OR_ECX_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], ecx
#define OR_ECX_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], ecx
#define OR_ECX_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], ecx
#define OR_ECX_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], ecx
#define OR_ECX_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], ecx
#define OR_ECX_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], ecx

#define OR_EDX_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], edx
#define OR_EDX_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], edx
#define OR_EDX_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], edx
#define OR_EDX_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], edx
#define OR_EDX_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], edx
#define OR_EDX_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], edx
#define OR_EDX_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], edx
#define OR_EDX_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], edx
#define OR_EDX_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], edx
#define OR_EDX_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], edx
#define OR_EDX_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], edx
#define OR_EDX_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], edx
#define OR_EDX_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], edx
#define OR_EDX_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], edx
#define OR_EDX_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], edx
#define OR_EDX_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], edx
#define OR_EDX_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], edx
#define OR_EDX_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], edx
#define OR_EDX_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], edx
#define OR_EDX_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], edx
#define OR_EDX_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], edx
#define OR_EDX_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], edx
#define OR_EDX_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], edx
#define OR_EDX_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], edx

#define OR_EDI_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], edi
#define OR_EDI_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], edi
#define OR_EDI_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], edi
#define OR_EDI_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], edi
#define OR_EDI_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], edi
#define OR_EDI_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], edi
#define OR_EDI_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], edi
#define OR_EDI_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], edi
#define OR_EDI_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], edi
#define OR_EDI_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], edi
#define OR_EDI_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], edi
#define OR_EDI_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], edi
#define OR_EDI_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], edi
#define OR_EDI_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], edi
#define OR_EDI_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], edi
#define OR_EDI_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], edi
#define OR_EDI_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], edi
#define OR_EDI_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], edi
#define OR_EDI_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], edi
#define OR_EDI_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], edi
#define OR_EDI_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], edi
#define OR_EDI_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], edi
#define OR_EDI_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], edi
#define OR_EDI_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], edi

#define OR_ESI_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], esi
#define OR_ESI_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], esi
#define OR_ESI_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], esi
#define OR_ESI_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], esi
#define OR_ESI_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], esi
#define OR_ESI_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], esi
#define OR_ESI_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], esi
#define OR_ESI_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], esi
#define OR_ESI_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], esi
#define OR_ESI_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], esi
#define OR_ESI_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], esi
#define OR_ESI_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], esi
#define OR_ESI_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], esi
#define OR_ESI_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], esi
#define OR_ESI_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], esi
#define OR_ESI_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], esi
#define OR_ESI_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], esi
#define OR_ESI_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], esi
#define OR_ESI_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], esi
#define OR_ESI_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], esi
#define OR_ESI_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], esi
#define OR_ESI_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], esi
#define OR_ESI_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], esi
#define OR_ESI_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], esi

#define OR_EBP_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], ebp
#define OR_EBP_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], ebp
#define OR_EBP_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], ebp
#define OR_EBP_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], ebp
#define OR_EBP_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], ebp
#define OR_EBP_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], ebp
#define OR_EBP_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], ebp
#define OR_EBP_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], ebp
#define OR_EBP_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], ebp
#define OR_EBP_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], ebp
#define OR_EBP_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], ebp
#define OR_EBP_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], ebp
#define OR_EBP_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], ebp
#define OR_EBP_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], ebp
#define OR_EBP_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], ebp
#define OR_EBP_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], ebp
#define OR_EBP_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], ebp
#define OR_EBP_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], ebp
#define OR_EBP_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], ebp
#define OR_EBP_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], ebp
#define OR_EBP_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], ebp
#define OR_EBP_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], ebp
#define OR_EBP_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], ebp
#define OR_EBP_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], ebp

#define OR_ESP_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], esp
#define OR_ESP_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], esp
#define OR_ESP_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], esp
#define OR_ESP_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], esp
#define OR_ESP_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], esp
#define OR_ESP_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], esp
#define OR_ESP_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], esp
#define OR_ESP_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], esp
#define OR_ESP_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], esp
#define OR_ESP_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], esp
#define OR_ESP_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], esp
#define OR_ESP_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], esp
#define OR_ESP_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], esp
#define OR_ESP_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], esp
#define OR_ESP_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], esp
#define OR_ESP_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], esp
#define OR_ESP_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], esp
#define OR_ESP_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], esp
#define OR_ESP_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], esp
#define OR_ESP_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], esp
#define OR_ESP_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], esp
#define OR_ESP_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], esp
#define OR_ESP_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], esp
#define OR_ESP_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], esp

#define OR_R8D_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], r8d
#define OR_R8D_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], r8d
#define OR_R8D_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], r8d
#define OR_R8D_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], r8d
#define OR_R8D_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], r8d
#define OR_R8D_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], r8d
#define OR_R8D_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], r8d
#define OR_R8D_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], r8d
#define OR_R8D_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], r8d
#define OR_R8D_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], r8d
#define OR_R8D_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], r8d
#define OR_R8D_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], r8d
#define OR_R8D_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], r8d
#define OR_R8D_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], r8d
#define OR_R8D_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], r8d
#define OR_R8D_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], r8d
#define OR_R8D_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], r8d
#define OR_R8D_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], r8d
#define OR_R8D_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], r8d
#define OR_R8D_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], r8d
#define OR_R8D_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], r8d
#define OR_R8D_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], r8d
#define OR_R8D_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], r8d
#define OR_R8D_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], r8d

#define OR_R9D_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], r9d
#define OR_R9D_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], r9d
#define OR_R9D_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], r9d
#define OR_R9D_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], r9d
#define OR_R9D_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], r9d
#define OR_R9D_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], r9d
#define OR_R9D_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], r9d
#define OR_R9D_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], r9d
#define OR_R9D_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], r9d
#define OR_R9D_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], r9d
#define OR_R9D_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], r9d
#define OR_R9D_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], r9d
#define OR_R9D_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], r9d
#define OR_R9D_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], r9d
#define OR_R9D_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], r9d
#define OR_R9D_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], r9d
#define OR_R9D_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], r9d
#define OR_R9D_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], r9d
#define OR_R9D_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], r9d
#define OR_R9D_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], r9d
#define OR_R9D_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], r9d
#define OR_R9D_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], r9d
#define OR_R9D_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], r9d
#define OR_R9D_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], r9d

#define OR_R10D_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], r10d
#define OR_R10D_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], r10d
#define OR_R10D_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], r10d
#define OR_R10D_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], r10d
#define OR_R10D_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], r10d
#define OR_R10D_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], r10d
#define OR_R10D_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], r10d
#define OR_R10D_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], r10d
#define OR_R10D_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], r10d
#define OR_R10D_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], r10d
#define OR_R10D_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], r10d
#define OR_R10D_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], r10d
#define OR_R10D_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], r10d
#define OR_R10D_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], r10d
#define OR_R10D_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], r10d
#define OR_R10D_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], r10d
#define OR_R10D_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], r10d
#define OR_R10D_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], r10d
#define OR_R10D_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], r10d
#define OR_R10D_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], r10d
#define OR_R10D_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], r10d
#define OR_R10D_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], r10d
#define OR_R10D_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], r10d
#define OR_R10D_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], r10d

#define OR_R11D_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], r11d
#define OR_R11D_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], r11d
#define OR_R11D_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], r11d
#define OR_R11D_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], r11d
#define OR_R11D_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], r11d
#define OR_R11D_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], r11d
#define OR_R11D_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], r11d
#define OR_R11D_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], r11d
#define OR_R11D_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], r11d
#define OR_R11D_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], r11d
#define OR_R11D_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], r11d
#define OR_R11D_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], r11d
#define OR_R11D_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], r11d
#define OR_R11D_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], r11d
#define OR_R11D_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], r11d
#define OR_R11D_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], r11d
#define OR_R11D_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], r11d
#define OR_R11D_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], r11d
#define OR_R11D_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], r11d
#define OR_R11D_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], r11d
#define OR_R11D_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], r11d
#define OR_R11D_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], r11d
#define OR_R11D_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], r11d
#define OR_R11D_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], r11d

#define OR_R12D_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], r12d
#define OR_R12D_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], r12d
#define OR_R12D_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], r12d
#define OR_R12D_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], r12d
#define OR_R12D_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], r12d
#define OR_R12D_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], r12d
#define OR_R12D_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], r12d
#define OR_R12D_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], r12d
#define OR_R12D_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], r12d
#define OR_R12D_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], r12d
#define OR_R12D_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], r12d
#define OR_R12D_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], r12d
#define OR_R12D_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], r12d
#define OR_R12D_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], r12d
#define OR_R12D_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], r12d
#define OR_R12D_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], r12d
#define OR_R12D_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], r12d
#define OR_R12D_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], r12d
#define OR_R12D_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], r12d
#define OR_R12D_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], r12d
#define OR_R12D_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], r12d
#define OR_R12D_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], r12d
#define OR_R12D_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], r12d
#define OR_R12D_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], r12d

#define OR_R13D_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], r13d
#define OR_R13D_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], r13d
#define OR_R13D_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], r13d
#define OR_R13D_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], r13d
#define OR_R13D_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], r13d
#define OR_R13D_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], r13d
#define OR_R13D_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], r13d
#define OR_R13D_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], r13d
#define OR_R13D_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], r13d
#define OR_R13D_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], r13d
#define OR_R13D_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], r13d
#define OR_R13D_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], r13d
#define OR_R13D_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], r13d
#define OR_R13D_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], r13d
#define OR_R13D_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], r13d
#define OR_R13D_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], r13d
#define OR_R13D_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], r13d
#define OR_R13D_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], r13d
#define OR_R13D_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], r13d
#define OR_R13D_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], r13d
#define OR_R13D_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], r13d
#define OR_R13D_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], r13d
#define OR_R13D_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], r13d
#define OR_R13D_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], r13d

#define OR_R14D_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], r14d
#define OR_R14D_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], r14d
#define OR_R14D_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], r14d
#define OR_R14D_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], r14d
#define OR_R14D_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], r14d
#define OR_R14D_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], r14d
#define OR_R14D_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], r14d
#define OR_R14D_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], r14d
#define OR_R14D_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], r14d
#define OR_R14D_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], r14d
#define OR_R14D_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], r14d
#define OR_R14D_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], r14d
#define OR_R14D_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], r14d
#define OR_R14D_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], r14d
#define OR_R14D_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], r14d
#define OR_R14D_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], r14d
#define OR_R14D_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], r14d
#define OR_R14D_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], r14d
#define OR_R14D_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], r14d
#define OR_R14D_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], r14d
#define OR_R14D_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], r14d
#define OR_R14D_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], r14d
#define OR_R14D_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], r14d
#define OR_R14D_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], r14d

#define OR_R15D_TO_PTR_RAX_(VALUE) or dword ptr [rax + VALUE], r15d
#define OR_R15D_TO_PTR_RBX_(VALUE) or dword ptr [rbx + VALUE], r15d
#define OR_R15D_TO_PTR_RCX_(VALUE) or dword ptr [rcx + VALUE], r15d
#define OR_R15D_TO_PTR_RDX_(VALUE) or dword ptr [rdx + VALUE], r15d
#define OR_R15D_TO_PTR_RDI_(VALUE) or dword ptr [rdi + VALUE], r15d
#define OR_R15D_TO_PTR_RSI_(VALUE) or dword ptr [rsi + VALUE], r15d
#define OR_R15D_TO_PTR_RBP_(VALUE) or dword ptr [rbp + VALUE], r15d
#define OR_R15D_TO_PTR_RSP_(VALUE) or dword ptr [rsp + VALUE], r15d
#define OR_R15D_TO_PTR_R8_(VALUE) or dword ptr [r8 + VALUE], r15d
#define OR_R15D_TO_PTR_R9_(VALUE) or dword ptr [r9 + VALUE], r15d
#define OR_R15D_TO_PTR_R10_(VALUE) or dword ptr [r10 + VALUE], r15d
#define OR_R15D_TO_PTR_R11_(VALUE) or dword ptr [r11 + VALUE], r15d
#define OR_R15D_TO_PTR_R12_(VALUE) or dword ptr [r12 + VALUE], r15d
#define OR_R15D_TO_PTR_R13_(VALUE) or dword ptr [r13 + VALUE], r15d
#define OR_R15D_TO_PTR_R14_(VALUE) or dword ptr [r14 + VALUE], r15d
#define OR_R15D_TO_PTR_R15_(VALUE) or dword ptr [r15 + VALUE], r15d
#define OR_R15D_TO_PTR_EAX_(VALUE) or dword ptr [eax + VALUE], r15d
#define OR_R15D_TO_PTR_EBX_(VALUE) or dword ptr [ebx + VALUE], r15d
#define OR_R15D_TO_PTR_ECX_(VALUE) or dword ptr [ecx + VALUE], r15d
#define OR_R15D_TO_PTR_EDX_(VALUE) or dword ptr [edx + VALUE], r15d
#define OR_R15D_TO_PTR_EDI_(VALUE) or dword ptr [edi + VALUE], r15d
#define OR_R15D_TO_PTR_ESI_(VALUE) or dword ptr [esi + VALUE], r15d
#define OR_R15D_TO_PTR_EBP_(VALUE) or dword ptr [ebp + VALUE], r15d
#define OR_R15D_TO_PTR_ESP_(VALUE) or dword ptr [esp + VALUE], r15d
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
