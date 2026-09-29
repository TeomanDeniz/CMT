#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define CMP_EAX_FROM_PTR_(VALUE) cmp eax, dword ptr [VALUE]
#define CMP_EBX_FROM_PTR_(VALUE) cmp ebx, dword ptr [VALUE]
#define CMP_ECX_FROM_PTR_(VALUE) cmp ecx, dword ptr [VALUE]
#define CMP_EDX_FROM_PTR_(VALUE) cmp edx, dword ptr [VALUE]
#define CMP_EDI_FROM_PTR_(VALUE) cmp edi, dword ptr [VALUE]
#define CMP_ESI_FROM_PTR_(VALUE) cmp esi, dword ptr [VALUE]
#define CMP_EBP_FROM_PTR_(VALUE) cmp ebp, dword ptr [VALUE]
#define CMP_ESP_FROM_PTR_(VALUE) cmp esp, dword ptr [VALUE]

#define CMP_EAX_TO_PTR_(VALUE) cmp dword ptr [VALUE], eax
#define CMP_EBX_TO_PTR_(VALUE) cmp dword ptr [VALUE], ebx
#define CMP_ECX_TO_PTR_(VALUE) cmp dword ptr [VALUE], ecx
#define CMP_EDX_TO_PTR_(VALUE) cmp dword ptr [VALUE], edx
#define CMP_EDI_TO_PTR_(VALUE) cmp dword ptr [VALUE], edi
#define CMP_ESI_TO_PTR_(VALUE) cmp dword ptr [VALUE], esi
#define CMP_EBP_TO_PTR_(VALUE) cmp dword ptr [VALUE], ebp
#define CMP_ESP_TO_PTR_(VALUE) cmp dword ptr [VALUE], esp

#define CMP_EAX_FROM_PTR_EAX cmp eax, dword ptr [eax]
#define CMP_EAX_FROM_PTR_EBX cmp eax, dword ptr [ebx]
#define CMP_EAX_FROM_PTR_ECX cmp eax, dword ptr [ecx]
#define CMP_EAX_FROM_PTR_EDX cmp eax, dword ptr [edx]
#define CMP_EAX_FROM_PTR_EDI cmp eax, dword ptr [edi]
#define CMP_EAX_FROM_PTR_ESI cmp eax, dword ptr [esi]
#define CMP_EAX_FROM_PTR_EBP cmp eax, dword ptr [ebp]
#define CMP_EAX_FROM_PTR_ESP cmp eax, dword ptr [esp]
#define CMP_EAX_FROM_PTR_BX cmp eax, dword ptr [bx]
#define CMP_EAX_FROM_PTR_BP cmp eax, dword ptr [bp]
#define CMP_EAX_FROM_PTR_SI cmp eax, dword ptr [si]
#define CMP_EAX_FROM_PTR_DI cmp eax, dword ptr [di]

#define CMP_EBX_FROM_PTR_EAX cmp ebx, dword ptr [eax]
#define CMP_EBX_FROM_PTR_EBX cmp ebx, dword ptr [ebx]
#define CMP_EBX_FROM_PTR_ECX cmp ebx, dword ptr [ecx]
#define CMP_EBX_FROM_PTR_EDX cmp ebx, dword ptr [edx]
#define CMP_EBX_FROM_PTR_EDI cmp ebx, dword ptr [edi]
#define CMP_EBX_FROM_PTR_ESI cmp ebx, dword ptr [esi]
#define CMP_EBX_FROM_PTR_EBP cmp ebx, dword ptr [ebp]
#define CMP_EBX_FROM_PTR_ESP cmp ebx, dword ptr [esp]
#define CMP_EBX_FROM_PTR_BX cmp ebx, dword ptr [bx]
#define CMP_EBX_FROM_PTR_BP cmp ebx, dword ptr [bp]
#define CMP_EBX_FROM_PTR_SI cmp ebx, dword ptr [si]
#define CMP_EBX_FROM_PTR_DI cmp ebx, dword ptr [di]

#define CMP_ECX_FROM_PTR_EAX cmp ecx, dword ptr [eax]
#define CMP_ECX_FROM_PTR_EBX cmp ecx, dword ptr [ebx]
#define CMP_ECX_FROM_PTR_ECX cmp ecx, dword ptr [ecx]
#define CMP_ECX_FROM_PTR_EDX cmp ecx, dword ptr [edx]
#define CMP_ECX_FROM_PTR_EDI cmp ecx, dword ptr [edi]
#define CMP_ECX_FROM_PTR_ESI cmp ecx, dword ptr [esi]
#define CMP_ECX_FROM_PTR_EBP cmp ecx, dword ptr [ebp]
#define CMP_ECX_FROM_PTR_ESP cmp ecx, dword ptr [esp]
#define CMP_ECX_FROM_PTR_BX cmp ecx, dword ptr [bx]
#define CMP_ECX_FROM_PTR_BP cmp ecx, dword ptr [bp]
#define CMP_ECX_FROM_PTR_SI cmp ecx, dword ptr [si]
#define CMP_ECX_FROM_PTR_DI cmp ecx, dword ptr [di]

#define CMP_EDX_FROM_PTR_EAX cmp edx, dword ptr [eax]
#define CMP_EDX_FROM_PTR_EBX cmp edx, dword ptr [ebx]
#define CMP_EDX_FROM_PTR_ECX cmp edx, dword ptr [ecx]
#define CMP_EDX_FROM_PTR_EDX cmp edx, dword ptr [edx]
#define CMP_EDX_FROM_PTR_EDI cmp edx, dword ptr [edi]
#define CMP_EDX_FROM_PTR_ESI cmp edx, dword ptr [esi]
#define CMP_EDX_FROM_PTR_EBP cmp edx, dword ptr [ebp]
#define CMP_EDX_FROM_PTR_ESP cmp edx, dword ptr [esp]
#define CMP_EDX_FROM_PTR_BX cmp edx, dword ptr [bx]
#define CMP_EDX_FROM_PTR_BP cmp edx, dword ptr [bp]
#define CMP_EDX_FROM_PTR_SI cmp edx, dword ptr [si]
#define CMP_EDX_FROM_PTR_DI cmp edx, dword ptr [di]

#define CMP_EDI_FROM_PTR_EAX cmp edi, dword ptr [eax]
#define CMP_EDI_FROM_PTR_EBX cmp edi, dword ptr [ebx]
#define CMP_EDI_FROM_PTR_ECX cmp edi, dword ptr [ecx]
#define CMP_EDI_FROM_PTR_EDX cmp edi, dword ptr [edx]
#define CMP_EDI_FROM_PTR_EDI cmp edi, dword ptr [edi]
#define CMP_EDI_FROM_PTR_ESI cmp edi, dword ptr [esi]
#define CMP_EDI_FROM_PTR_EBP cmp edi, dword ptr [ebp]
#define CMP_EDI_FROM_PTR_ESP cmp edi, dword ptr [esp]
#define CMP_EDI_FROM_PTR_BX cmp edi, dword ptr [bx]
#define CMP_EDI_FROM_PTR_BP cmp edi, dword ptr [bp]
#define CMP_EDI_FROM_PTR_SI cmp edi, dword ptr [si]
#define CMP_EDI_FROM_PTR_DI cmp edi, dword ptr [di]

#define CMP_ESI_FROM_PTR_EAX cmp esi, dword ptr [eax]
#define CMP_ESI_FROM_PTR_EBX cmp esi, dword ptr [ebx]
#define CMP_ESI_FROM_PTR_ECX cmp esi, dword ptr [ecx]
#define CMP_ESI_FROM_PTR_EDX cmp esi, dword ptr [edx]
#define CMP_ESI_FROM_PTR_EDI cmp esi, dword ptr [edi]
#define CMP_ESI_FROM_PTR_ESI cmp esi, dword ptr [esi]
#define CMP_ESI_FROM_PTR_EBP cmp esi, dword ptr [ebp]
#define CMP_ESI_FROM_PTR_ESP cmp esi, dword ptr [esp]
#define CMP_ESI_FROM_PTR_BX cmp esi, dword ptr [bx]
#define CMP_ESI_FROM_PTR_BP cmp esi, dword ptr [bp]
#define CMP_ESI_FROM_PTR_SI cmp esi, dword ptr [si]
#define CMP_ESI_FROM_PTR_DI cmp esi, dword ptr [di]

#define CMP_EBP_FROM_PTR_EAX cmp ebp, dword ptr [eax]
#define CMP_EBP_FROM_PTR_EBX cmp ebp, dword ptr [ebx]
#define CMP_EBP_FROM_PTR_ECX cmp ebp, dword ptr [ecx]
#define CMP_EBP_FROM_PTR_EDX cmp ebp, dword ptr [edx]
#define CMP_EBP_FROM_PTR_EDI cmp ebp, dword ptr [edi]
#define CMP_EBP_FROM_PTR_ESI cmp ebp, dword ptr [esi]
#define CMP_EBP_FROM_PTR_EBP cmp ebp, dword ptr [ebp]
#define CMP_EBP_FROM_PTR_ESP cmp ebp, dword ptr [esp]
#define CMP_EBP_FROM_PTR_BX cmp ebp, dword ptr [bx]
#define CMP_EBP_FROM_PTR_BP cmp ebp, dword ptr [bp]
#define CMP_EBP_FROM_PTR_SI cmp ebp, dword ptr [si]
#define CMP_EBP_FROM_PTR_DI cmp ebp, dword ptr [di]

#define CMP_ESP_FROM_PTR_EAX cmp esp, dword ptr [eax]
#define CMP_ESP_FROM_PTR_EBX cmp esp, dword ptr [ebx]
#define CMP_ESP_FROM_PTR_ECX cmp esp, dword ptr [ecx]
#define CMP_ESP_FROM_PTR_EDX cmp esp, dword ptr [edx]
#define CMP_ESP_FROM_PTR_EDI cmp esp, dword ptr [edi]
#define CMP_ESP_FROM_PTR_ESI cmp esp, dword ptr [esi]
#define CMP_ESP_FROM_PTR_EBP cmp esp, dword ptr [ebp]
#define CMP_ESP_FROM_PTR_ESP cmp esp, dword ptr [esp]
#define CMP_ESP_FROM_PTR_BX cmp esp, dword ptr [bx]
#define CMP_ESP_FROM_PTR_BP cmp esp, dword ptr [bp]
#define CMP_ESP_FROM_PTR_SI cmp esp, dword ptr [si]
#define CMP_ESP_FROM_PTR_DI cmp esp, dword ptr [di]

#define CMP_EAX_TO_PTR_EAX cmp dword ptr [eax], eax
#define CMP_EAX_TO_PTR_EBX cmp dword ptr [ebx], eax
#define CMP_EAX_TO_PTR_ECX cmp dword ptr [ecx], eax
#define CMP_EAX_TO_PTR_EDX cmp dword ptr [edx], eax
#define CMP_EAX_TO_PTR_EDI cmp dword ptr [edi], eax
#define CMP_EAX_TO_PTR_ESI cmp dword ptr [esi], eax
#define CMP_EAX_TO_PTR_EBP cmp dword ptr [ebp], eax
#define CMP_EAX_TO_PTR_ESP cmp dword ptr [esp], eax
#define CMP_EAX_TO_PTR_BX cmp dword ptr [bx], eax
#define CMP_EAX_TO_PTR_BP cmp dword ptr [bp], eax
#define CMP_EAX_TO_PTR_SI cmp dword ptr [si], eax
#define CMP_EAX_TO_PTR_DI cmp dword ptr [di], eax

#define CMP_EBX_TO_PTR_EAX cmp dword ptr [eax], ebx
#define CMP_EBX_TO_PTR_EBX cmp dword ptr [ebx], ebx
#define CMP_EBX_TO_PTR_ECX cmp dword ptr [ecx], ebx
#define CMP_EBX_TO_PTR_EDX cmp dword ptr [edx], ebx
#define CMP_EBX_TO_PTR_EDI cmp dword ptr [edi], ebx
#define CMP_EBX_TO_PTR_ESI cmp dword ptr [esi], ebx
#define CMP_EBX_TO_PTR_EBP cmp dword ptr [ebp], ebx
#define CMP_EBX_TO_PTR_ESP cmp dword ptr [esp], ebx
#define CMP_EBX_TO_PTR_BX cmp dword ptr [bx], ebx
#define CMP_EBX_TO_PTR_BP cmp dword ptr [bp], ebx
#define CMP_EBX_TO_PTR_SI cmp dword ptr [si], ebx
#define CMP_EBX_TO_PTR_DI cmp dword ptr [di], ebx

#define CMP_ECX_TO_PTR_EAX cmp dword ptr [eax], ecx
#define CMP_ECX_TO_PTR_EBX cmp dword ptr [ebx], ecx
#define CMP_ECX_TO_PTR_ECX cmp dword ptr [ecx], ecx
#define CMP_ECX_TO_PTR_EDX cmp dword ptr [edx], ecx
#define CMP_ECX_TO_PTR_EDI cmp dword ptr [edi], ecx
#define CMP_ECX_TO_PTR_ESI cmp dword ptr [esi], ecx
#define CMP_ECX_TO_PTR_EBP cmp dword ptr [ebp], ecx
#define CMP_ECX_TO_PTR_ESP cmp dword ptr [esp], ecx
#define CMP_ECX_TO_PTR_BX cmp dword ptr [bx], ecx
#define CMP_ECX_TO_PTR_BP cmp dword ptr [bp], ecx
#define CMP_ECX_TO_PTR_SI cmp dword ptr [si], ecx
#define CMP_ECX_TO_PTR_DI cmp dword ptr [di], ecx

#define CMP_EDX_TO_PTR_EAX cmp dword ptr [eax], edx
#define CMP_EDX_TO_PTR_EBX cmp dword ptr [ebx], edx
#define CMP_EDX_TO_PTR_ECX cmp dword ptr [ecx], edx
#define CMP_EDX_TO_PTR_EDX cmp dword ptr [edx], edx
#define CMP_EDX_TO_PTR_EDI cmp dword ptr [edi], edx
#define CMP_EDX_TO_PTR_ESI cmp dword ptr [esi], edx
#define CMP_EDX_TO_PTR_EBP cmp dword ptr [ebp], edx
#define CMP_EDX_TO_PTR_ESP cmp dword ptr [esp], edx
#define CMP_EDX_TO_PTR_BX cmp dword ptr [bx], edx
#define CMP_EDX_TO_PTR_BP cmp dword ptr [bp], edx
#define CMP_EDX_TO_PTR_SI cmp dword ptr [si], edx
#define CMP_EDX_TO_PTR_DI cmp dword ptr [di], edx

#define CMP_EDI_TO_PTR_EAX cmp dword ptr [eax], edi
#define CMP_EDI_TO_PTR_EBX cmp dword ptr [ebx], edi
#define CMP_EDI_TO_PTR_ECX cmp dword ptr [ecx], edi
#define CMP_EDI_TO_PTR_EDX cmp dword ptr [edx], edi
#define CMP_EDI_TO_PTR_EDI cmp dword ptr [edi], edi
#define CMP_EDI_TO_PTR_ESI cmp dword ptr [esi], edi
#define CMP_EDI_TO_PTR_EBP cmp dword ptr [ebp], edi
#define CMP_EDI_TO_PTR_ESP cmp dword ptr [esp], edi
#define CMP_EDI_TO_PTR_BX cmp dword ptr [bx], edi
#define CMP_EDI_TO_PTR_BP cmp dword ptr [bp], edi
#define CMP_EDI_TO_PTR_SI cmp dword ptr [si], edi
#define CMP_EDI_TO_PTR_DI cmp dword ptr [di], edi

#define CMP_ESI_TO_PTR_EAX cmp dword ptr [eax], esi
#define CMP_ESI_TO_PTR_EBX cmp dword ptr [ebx], esi
#define CMP_ESI_TO_PTR_ECX cmp dword ptr [ecx], esi
#define CMP_ESI_TO_PTR_EDX cmp dword ptr [edx], esi
#define CMP_ESI_TO_PTR_EDI cmp dword ptr [edi], esi
#define CMP_ESI_TO_PTR_ESI cmp dword ptr [esi], esi
#define CMP_ESI_TO_PTR_EBP cmp dword ptr [ebp], esi
#define CMP_ESI_TO_PTR_ESP cmp dword ptr [esp], esi
#define CMP_ESI_TO_PTR_BX cmp dword ptr [bx], esi
#define CMP_ESI_TO_PTR_BP cmp dword ptr [bp], esi
#define CMP_ESI_TO_PTR_SI cmp dword ptr [si], esi
#define CMP_ESI_TO_PTR_DI cmp dword ptr [di], esi

#define CMP_EBP_TO_PTR_EAX cmp dword ptr [eax], ebp
#define CMP_EBP_TO_PTR_EBX cmp dword ptr [ebx], ebp
#define CMP_EBP_TO_PTR_ECX cmp dword ptr [ecx], ebp
#define CMP_EBP_TO_PTR_EDX cmp dword ptr [edx], ebp
#define CMP_EBP_TO_PTR_EDI cmp dword ptr [edi], ebp
#define CMP_EBP_TO_PTR_ESI cmp dword ptr [esi], ebp
#define CMP_EBP_TO_PTR_EBP cmp dword ptr [ebp], ebp
#define CMP_EBP_TO_PTR_ESP cmp dword ptr [esp], ebp
#define CMP_EBP_TO_PTR_BX cmp dword ptr [bx], ebp
#define CMP_EBP_TO_PTR_BP cmp dword ptr [bp], ebp
#define CMP_EBP_TO_PTR_SI cmp dword ptr [si], ebp
#define CMP_EBP_TO_PTR_DI cmp dword ptr [di], ebp

#define CMP_ESP_TO_PTR_EAX cmp dword ptr [eax], esp
#define CMP_ESP_TO_PTR_EBX cmp dword ptr [ebx], esp
#define CMP_ESP_TO_PTR_ECX cmp dword ptr [ecx], esp
#define CMP_ESP_TO_PTR_EDX cmp dword ptr [edx], esp
#define CMP_ESP_TO_PTR_EDI cmp dword ptr [edi], esp
#define CMP_ESP_TO_PTR_ESI cmp dword ptr [esi], esp
#define CMP_ESP_TO_PTR_EBP cmp dword ptr [ebp], esp
#define CMP_ESP_TO_PTR_ESP cmp dword ptr [esp], esp
#define CMP_ESP_TO_PTR_BX cmp dword ptr [bx], esp
#define CMP_ESP_TO_PTR_BP cmp dword ptr [bp], esp
#define CMP_ESP_TO_PTR_SI cmp dword ptr [si], esp
#define CMP_ESP_TO_PTR_DI cmp dword ptr [di], esp

#define CMP_EAX_FROM_PTR_EAX_(VALUE) cmp eax, dword ptr [eax + VALUE]
#define CMP_EAX_FROM_PTR_EBX_(VALUE) cmp eax, dword ptr [ebx + VALUE]
#define CMP_EAX_FROM_PTR_ECX_(VALUE) cmp eax, dword ptr [ecx + VALUE]
#define CMP_EAX_FROM_PTR_EDX_(VALUE) cmp eax, dword ptr [edx + VALUE]
#define CMP_EAX_FROM_PTR_EDI_(VALUE) cmp eax, dword ptr [edi + VALUE]
#define CMP_EAX_FROM_PTR_ESI_(VALUE) cmp eax, dword ptr [esi + VALUE]
#define CMP_EAX_FROM_PTR_EBP_(VALUE) cmp eax, dword ptr [ebp + VALUE]
#define CMP_EAX_FROM_PTR_ESP_(VALUE) cmp eax, dword ptr [esp + VALUE]
#define CMP_EAX_FROM_PTR_BX_(VALUE) cmp eax, dword ptr [bx + VALUE]
#define CMP_EAX_FROM_PTR_BP_(VALUE) cmp eax, dword ptr [bp + VALUE]
#define CMP_EAX_FROM_PTR_SI_(VALUE) cmp eax, dword ptr [si + VALUE]
#define CMP_EAX_FROM_PTR_DI_(VALUE) cmp eax, dword ptr [di + VALUE]

#define CMP_EBX_FROM_PTR_EAX_(VALUE) cmp ebx, dword ptr [eax + VALUE]
#define CMP_EBX_FROM_PTR_EBX_(VALUE) cmp ebx, dword ptr [ebx + VALUE]
#define CMP_EBX_FROM_PTR_ECX_(VALUE) cmp ebx, dword ptr [ecx + VALUE]
#define CMP_EBX_FROM_PTR_EDX_(VALUE) cmp ebx, dword ptr [edx + VALUE]
#define CMP_EBX_FROM_PTR_EDI_(VALUE) cmp ebx, dword ptr [edi + VALUE]
#define CMP_EBX_FROM_PTR_ESI_(VALUE) cmp ebx, dword ptr [esi + VALUE]
#define CMP_EBX_FROM_PTR_EBP_(VALUE) cmp ebx, dword ptr [ebp + VALUE]
#define CMP_EBX_FROM_PTR_ESP_(VALUE) cmp ebx, dword ptr [esp + VALUE]
#define CMP_EBX_FROM_PTR_BX_(VALUE) cmp ebx, dword ptr [bx + VALUE]
#define CMP_EBX_FROM_PTR_BP_(VALUE) cmp ebx, dword ptr [bp + VALUE]
#define CMP_EBX_FROM_PTR_SI_(VALUE) cmp ebx, dword ptr [si + VALUE]
#define CMP_EBX_FROM_PTR_DI_(VALUE) cmp ebx, dword ptr [di + VALUE]

#define CMP_ECX_FROM_PTR_EAX_(VALUE) cmp ecx, dword ptr [eax + VALUE]
#define CMP_ECX_FROM_PTR_EBX_(VALUE) cmp ecx, dword ptr [ebx + VALUE]
#define CMP_ECX_FROM_PTR_ECX_(VALUE) cmp ecx, dword ptr [ecx + VALUE]
#define CMP_ECX_FROM_PTR_EDX_(VALUE) cmp ecx, dword ptr [edx + VALUE]
#define CMP_ECX_FROM_PTR_EDI_(VALUE) cmp ecx, dword ptr [edi + VALUE]
#define CMP_ECX_FROM_PTR_ESI_(VALUE) cmp ecx, dword ptr [esi + VALUE]
#define CMP_ECX_FROM_PTR_EBP_(VALUE) cmp ecx, dword ptr [ebp + VALUE]
#define CMP_ECX_FROM_PTR_ESP_(VALUE) cmp ecx, dword ptr [esp + VALUE]
#define CMP_ECX_FROM_PTR_BX_(VALUE) cmp ecx, dword ptr [bx + VALUE]
#define CMP_ECX_FROM_PTR_BP_(VALUE) cmp ecx, dword ptr [bp + VALUE]
#define CMP_ECX_FROM_PTR_SI_(VALUE) cmp ecx, dword ptr [si + VALUE]
#define CMP_ECX_FROM_PTR_DI_(VALUE) cmp ecx, dword ptr [di + VALUE]

#define CMP_EDX_FROM_PTR_EAX_(VALUE) cmp edx, dword ptr [eax + VALUE]
#define CMP_EDX_FROM_PTR_EBX_(VALUE) cmp edx, dword ptr [ebx + VALUE]
#define CMP_EDX_FROM_PTR_ECX_(VALUE) cmp edx, dword ptr [ecx + VALUE]
#define CMP_EDX_FROM_PTR_EDX_(VALUE) cmp edx, dword ptr [edx + VALUE]
#define CMP_EDX_FROM_PTR_EDI_(VALUE) cmp edx, dword ptr [edi + VALUE]
#define CMP_EDX_FROM_PTR_ESI_(VALUE) cmp edx, dword ptr [esi + VALUE]
#define CMP_EDX_FROM_PTR_EBP_(VALUE) cmp edx, dword ptr [ebp + VALUE]
#define CMP_EDX_FROM_PTR_ESP_(VALUE) cmp edx, dword ptr [esp + VALUE]
#define CMP_EDX_FROM_PTR_BX_(VALUE) cmp edx, dword ptr [bx + VALUE]
#define CMP_EDX_FROM_PTR_BP_(VALUE) cmp edx, dword ptr [bp + VALUE]
#define CMP_EDX_FROM_PTR_SI_(VALUE) cmp edx, dword ptr [si + VALUE]
#define CMP_EDX_FROM_PTR_DI_(VALUE) cmp edx, dword ptr [di + VALUE]

#define CMP_EDI_FROM_PTR_EAX_(VALUE) cmp edi, dword ptr [eax + VALUE]
#define CMP_EDI_FROM_PTR_EBX_(VALUE) cmp edi, dword ptr [ebx + VALUE]
#define CMP_EDI_FROM_PTR_ECX_(VALUE) cmp edi, dword ptr [ecx + VALUE]
#define CMP_EDI_FROM_PTR_EDX_(VALUE) cmp edi, dword ptr [edx + VALUE]
#define CMP_EDI_FROM_PTR_EDI_(VALUE) cmp edi, dword ptr [edi + VALUE]
#define CMP_EDI_FROM_PTR_ESI_(VALUE) cmp edi, dword ptr [esi + VALUE]
#define CMP_EDI_FROM_PTR_EBP_(VALUE) cmp edi, dword ptr [ebp + VALUE]
#define CMP_EDI_FROM_PTR_ESP_(VALUE) cmp edi, dword ptr [esp + VALUE]
#define CMP_EDI_FROM_PTR_BX_(VALUE) cmp edi, dword ptr [bx + VALUE]
#define CMP_EDI_FROM_PTR_BP_(VALUE) cmp edi, dword ptr [bp + VALUE]
#define CMP_EDI_FROM_PTR_SI_(VALUE) cmp edi, dword ptr [si + VALUE]
#define CMP_EDI_FROM_PTR_DI_(VALUE) cmp edi, dword ptr [di + VALUE]

#define CMP_ESI_FROM_PTR_EAX_(VALUE) cmp esi, dword ptr [eax + VALUE]
#define CMP_ESI_FROM_PTR_EBX_(VALUE) cmp esi, dword ptr [ebx + VALUE]
#define CMP_ESI_FROM_PTR_ECX_(VALUE) cmp esi, dword ptr [ecx + VALUE]
#define CMP_ESI_FROM_PTR_EDX_(VALUE) cmp esi, dword ptr [edx + VALUE]
#define CMP_ESI_FROM_PTR_EDI_(VALUE) cmp esi, dword ptr [edi + VALUE]
#define CMP_ESI_FROM_PTR_ESI_(VALUE) cmp esi, dword ptr [esi + VALUE]
#define CMP_ESI_FROM_PTR_EBP_(VALUE) cmp esi, dword ptr [ebp + VALUE]
#define CMP_ESI_FROM_PTR_ESP_(VALUE) cmp esi, dword ptr [esp + VALUE]
#define CMP_ESI_FROM_PTR_BX_(VALUE) cmp esi, dword ptr [bx + VALUE]
#define CMP_ESI_FROM_PTR_BP_(VALUE) cmp esi, dword ptr [bp + VALUE]
#define CMP_ESI_FROM_PTR_SI_(VALUE) cmp esi, dword ptr [si + VALUE]
#define CMP_ESI_FROM_PTR_DI_(VALUE) cmp esi, dword ptr [di + VALUE]

#define CMP_EBP_FROM_PTR_EAX_(VALUE) cmp ebp, dword ptr [eax + VALUE]
#define CMP_EBP_FROM_PTR_EBX_(VALUE) cmp ebp, dword ptr [ebx + VALUE]
#define CMP_EBP_FROM_PTR_ECX_(VALUE) cmp ebp, dword ptr [ecx + VALUE]
#define CMP_EBP_FROM_PTR_EDX_(VALUE) cmp ebp, dword ptr [edx + VALUE]
#define CMP_EBP_FROM_PTR_EDI_(VALUE) cmp ebp, dword ptr [edi + VALUE]
#define CMP_EBP_FROM_PTR_ESI_(VALUE) cmp ebp, dword ptr [esi + VALUE]
#define CMP_EBP_FROM_PTR_EBP_(VALUE) cmp ebp, dword ptr [ebp + VALUE]
#define CMP_EBP_FROM_PTR_ESP_(VALUE) cmp ebp, dword ptr [esp + VALUE]
#define CMP_EBP_FROM_PTR_BX_(VALUE) cmp ebp, dword ptr [bx + VALUE]
#define CMP_EBP_FROM_PTR_BP_(VALUE) cmp ebp, dword ptr [bp + VALUE]
#define CMP_EBP_FROM_PTR_SI_(VALUE) cmp ebp, dword ptr [si + VALUE]
#define CMP_EBP_FROM_PTR_DI_(VALUE) cmp ebp, dword ptr [di + VALUE]

#define CMP_ESP_FROM_PTR_EAX_(VALUE) cmp esp, dword ptr [eax + VALUE]
#define CMP_ESP_FROM_PTR_EBX_(VALUE) cmp esp, dword ptr [ebx + VALUE]
#define CMP_ESP_FROM_PTR_ECX_(VALUE) cmp esp, dword ptr [ecx + VALUE]
#define CMP_ESP_FROM_PTR_EDX_(VALUE) cmp esp, dword ptr [edx + VALUE]
#define CMP_ESP_FROM_PTR_EDI_(VALUE) cmp esp, dword ptr [edi + VALUE]
#define CMP_ESP_FROM_PTR_ESI_(VALUE) cmp esp, dword ptr [esi + VALUE]
#define CMP_ESP_FROM_PTR_EBP_(VALUE) cmp esp, dword ptr [ebp + VALUE]
#define CMP_ESP_FROM_PTR_ESP_(VALUE) cmp esp, dword ptr [esp + VALUE]
#define CMP_ESP_FROM_PTR_BX_(VALUE) cmp esp, dword ptr [bx + VALUE]
#define CMP_ESP_FROM_PTR_BP_(VALUE) cmp esp, dword ptr [bp + VALUE]
#define CMP_ESP_FROM_PTR_SI_(VALUE) cmp esp, dword ptr [si + VALUE]
#define CMP_ESP_FROM_PTR_DI_(VALUE) cmp esp, dword ptr [di + VALUE]

#define CMP_EAX_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], eax
#define CMP_EAX_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], eax
#define CMP_EAX_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], eax
#define CMP_EAX_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], eax
#define CMP_EAX_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], eax
#define CMP_EAX_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], eax
#define CMP_EAX_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], eax
#define CMP_EAX_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], eax
#define CMP_EAX_TO_PTR_BX_(VALUE) cmp dword ptr [bx + VALUE], eax
#define CMP_EAX_TO_PTR_BP_(VALUE) cmp dword ptr [bp + VALUE], eax
#define CMP_EAX_TO_PTR_SI_(VALUE) cmp dword ptr [si + VALUE], eax
#define CMP_EAX_TO_PTR_DI_(VALUE) cmp dword ptr [di + VALUE], eax

#define CMP_EBX_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], ebx
#define CMP_EBX_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], ebx
#define CMP_EBX_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], ebx
#define CMP_EBX_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], ebx
#define CMP_EBX_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], ebx
#define CMP_EBX_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], ebx
#define CMP_EBX_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], ebx
#define CMP_EBX_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], ebx
#define CMP_EBX_TO_PTR_BX_(VALUE) cmp dword ptr [bx + VALUE], ebx
#define CMP_EBX_TO_PTR_BP_(VALUE) cmp dword ptr [bp + VALUE], ebx
#define CMP_EBX_TO_PTR_SI_(VALUE) cmp dword ptr [si + VALUE], ebx
#define CMP_EBX_TO_PTR_DI_(VALUE) cmp dword ptr [di + VALUE], ebx

#define CMP_ECX_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], ecx
#define CMP_ECX_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], ecx
#define CMP_ECX_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], ecx
#define CMP_ECX_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], ecx
#define CMP_ECX_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], ecx
#define CMP_ECX_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], ecx
#define CMP_ECX_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], ecx
#define CMP_ECX_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], ecx
#define CMP_ECX_TO_PTR_BX_(VALUE) cmp dword ptr [bx + VALUE], ecx
#define CMP_ECX_TO_PTR_BP_(VALUE) cmp dword ptr [bp + VALUE], ecx
#define CMP_ECX_TO_PTR_SI_(VALUE) cmp dword ptr [si + VALUE], ecx
#define CMP_ECX_TO_PTR_DI_(VALUE) cmp dword ptr [di + VALUE], ecx

#define CMP_EDX_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], edx
#define CMP_EDX_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], edx
#define CMP_EDX_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], edx
#define CMP_EDX_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], edx
#define CMP_EDX_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], edx
#define CMP_EDX_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], edx
#define CMP_EDX_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], edx
#define CMP_EDX_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], edx
#define CMP_EDX_TO_PTR_BX_(VALUE) cmp dword ptr [bx + VALUE], edx
#define CMP_EDX_TO_PTR_BP_(VALUE) cmp dword ptr [bp + VALUE], edx
#define CMP_EDX_TO_PTR_SI_(VALUE) cmp dword ptr [si + VALUE], edx
#define CMP_EDX_TO_PTR_DI_(VALUE) cmp dword ptr [di + VALUE], edx

#define CMP_EDI_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], edi
#define CMP_EDI_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], edi
#define CMP_EDI_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], edi
#define CMP_EDI_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], edi
#define CMP_EDI_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], edi
#define CMP_EDI_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], edi
#define CMP_EDI_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], edi
#define CMP_EDI_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], edi
#define CMP_EDI_TO_PTR_BX_(VALUE) cmp dword ptr [bx + VALUE], edi
#define CMP_EDI_TO_PTR_BP_(VALUE) cmp dword ptr [bp + VALUE], edi
#define CMP_EDI_TO_PTR_SI_(VALUE) cmp dword ptr [si + VALUE], edi
#define CMP_EDI_TO_PTR_DI_(VALUE) cmp dword ptr [di + VALUE], edi

#define CMP_ESI_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], esi
#define CMP_ESI_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], esi
#define CMP_ESI_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], esi
#define CMP_ESI_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], esi
#define CMP_ESI_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], esi
#define CMP_ESI_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], esi
#define CMP_ESI_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], esi
#define CMP_ESI_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], esi
#define CMP_ESI_TO_PTR_BX_(VALUE) cmp dword ptr [bx + VALUE], esi
#define CMP_ESI_TO_PTR_BP_(VALUE) cmp dword ptr [bp + VALUE], esi
#define CMP_ESI_TO_PTR_SI_(VALUE) cmp dword ptr [si + VALUE], esi
#define CMP_ESI_TO_PTR_DI_(VALUE) cmp dword ptr [di + VALUE], esi

#define CMP_EBP_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], ebp
#define CMP_EBP_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], ebp
#define CMP_EBP_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], ebp
#define CMP_EBP_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], ebp
#define CMP_EBP_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], ebp
#define CMP_EBP_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], ebp
#define CMP_EBP_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], ebp
#define CMP_EBP_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], ebp
#define CMP_EBP_TO_PTR_BX_(VALUE) cmp dword ptr [bx + VALUE], ebp
#define CMP_EBP_TO_PTR_BP_(VALUE) cmp dword ptr [bp + VALUE], ebp
#define CMP_EBP_TO_PTR_SI_(VALUE) cmp dword ptr [si + VALUE], ebp
#define CMP_EBP_TO_PTR_DI_(VALUE) cmp dword ptr [di + VALUE], ebp

#define CMP_ESP_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], esp
#define CMP_ESP_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], esp
#define CMP_ESP_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], esp
#define CMP_ESP_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], esp
#define CMP_ESP_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], esp
#define CMP_ESP_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], esp
#define CMP_ESP_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], esp
#define CMP_ESP_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], esp
#define CMP_ESP_TO_PTR_BX_(VALUE) cmp dword ptr [bx + VALUE], esp
#define CMP_ESP_TO_PTR_BP_(VALUE) cmp dword ptr [bp + VALUE], esp
#define CMP_ESP_TO_PTR_SI_(VALUE) cmp dword ptr [si + VALUE], esp
#define CMP_ESP_TO_PTR_DI_(VALUE) cmp dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_EAX_FROM_PTR_(VALUE) cmp eax, dword ptr [VALUE]
#define CMP_EBX_FROM_PTR_(VALUE) cmp ebx, dword ptr [VALUE]
#define CMP_ECX_FROM_PTR_(VALUE) cmp ecx, dword ptr [VALUE]
#define CMP_EDX_FROM_PTR_(VALUE) cmp edx, dword ptr [VALUE]
#define CMP_EDI_FROM_PTR_(VALUE) cmp edi, dword ptr [VALUE]
#define CMP_ESI_FROM_PTR_(VALUE) cmp esi, dword ptr [VALUE]
#define CMP_EBP_FROM_PTR_(VALUE) cmp ebp, dword ptr [VALUE]
#define CMP_ESP_FROM_PTR_(VALUE) cmp esp, dword ptr [VALUE]
#define CMP_R8D_FROM_PTR_(VALUE) cmp r8d, dword ptr [VALUE]
#define CMP_R9D_FROM_PTR_(VALUE) cmp r9d, dword ptr [VALUE]
#define CMP_R10D_FROM_PTR_(VALUE) cmp r10d, dword ptr [VALUE]
#define CMP_R11D_FROM_PTR_(VALUE) cmp r11d, dword ptr [VALUE]
#define CMP_R12D_FROM_PTR_(VALUE) cmp r12d, dword ptr [VALUE]
#define CMP_R13D_FROM_PTR_(VALUE) cmp r13d, dword ptr [VALUE]
#define CMP_R14D_FROM_PTR_(VALUE) cmp r14d, dword ptr [VALUE]
#define CMP_R15D_FROM_PTR_(VALUE) cmp r15d, dword ptr [VALUE]

#define CMP_EAX_TO_PTR_(VALUE) cmp dword ptr [VALUE], eax
#define CMP_EBX_TO_PTR_(VALUE) cmp dword ptr [VALUE], ebx
#define CMP_ECX_TO_PTR_(VALUE) cmp dword ptr [VALUE], ecx
#define CMP_EDX_TO_PTR_(VALUE) cmp dword ptr [VALUE], edx
#define CMP_EDI_TO_PTR_(VALUE) cmp dword ptr [VALUE], edi
#define CMP_ESI_TO_PTR_(VALUE) cmp dword ptr [VALUE], esi
#define CMP_EBP_TO_PTR_(VALUE) cmp dword ptr [VALUE], ebp
#define CMP_ESP_TO_PTR_(VALUE) cmp dword ptr [VALUE], esp
#define CMP_R8D_TO_PTR_(VALUE) cmp dword ptr [VALUE], r8d
#define CMP_R9D_TO_PTR_(VALUE) cmp dword ptr [VALUE], r9d
#define CMP_R10D_TO_PTR_(VALUE) cmp dword ptr [VALUE], r10d
#define CMP_R11D_TO_PTR_(VALUE) cmp dword ptr [VALUE], r11d
#define CMP_R12D_TO_PTR_(VALUE) cmp dword ptr [VALUE], r12d
#define CMP_R13D_TO_PTR_(VALUE) cmp dword ptr [VALUE], r13d
#define CMP_R14D_TO_PTR_(VALUE) cmp dword ptr [VALUE], r14d
#define CMP_R15D_TO_PTR_(VALUE) cmp dword ptr [VALUE], r15d

#define CMP_EAX_FROM_PTR_RAX cmp eax, dword ptr [rax]
#define CMP_EAX_FROM_PTR_RBX cmp eax, dword ptr [rbx]
#define CMP_EAX_FROM_PTR_RCX cmp eax, dword ptr [rcx]
#define CMP_EAX_FROM_PTR_RDX cmp eax, dword ptr [rdx]
#define CMP_EAX_FROM_PTR_RDI cmp eax, dword ptr [rdi]
#define CMP_EAX_FROM_PTR_RSI cmp eax, dword ptr [rsi]
#define CMP_EAX_FROM_PTR_RBP cmp eax, dword ptr [rbp]
#define CMP_EAX_FROM_PTR_RSP cmp eax, dword ptr [rsp]
#define CMP_EAX_FROM_PTR_R8 cmp eax, dword ptr [r8]
#define CMP_EAX_FROM_PTR_R9 cmp eax, dword ptr [r9]
#define CMP_EAX_FROM_PTR_R10 cmp eax, dword ptr [r10]
#define CMP_EAX_FROM_PTR_R11 cmp eax, dword ptr [r11]
#define CMP_EAX_FROM_PTR_R12 cmp eax, dword ptr [r12]
#define CMP_EAX_FROM_PTR_R13 cmp eax, dword ptr [r13]
#define CMP_EAX_FROM_PTR_R14 cmp eax, dword ptr [r14]
#define CMP_EAX_FROM_PTR_R15 cmp eax, dword ptr [r15]
#define CMP_EAX_FROM_PTR_EAX cmp eax, dword ptr [eax]
#define CMP_EAX_FROM_PTR_EBX cmp eax, dword ptr [ebx]
#define CMP_EAX_FROM_PTR_ECX cmp eax, dword ptr [ecx]
#define CMP_EAX_FROM_PTR_EDX cmp eax, dword ptr [edx]
#define CMP_EAX_FROM_PTR_EDI cmp eax, dword ptr [edi]
#define CMP_EAX_FROM_PTR_ESI cmp eax, dword ptr [esi]
#define CMP_EAX_FROM_PTR_EBP cmp eax, dword ptr [ebp]
#define CMP_EAX_FROM_PTR_ESP cmp eax, dword ptr [esp]

#define CMP_EBX_FROM_PTR_RAX cmp ebx, dword ptr [rax]
#define CMP_EBX_FROM_PTR_RBX cmp ebx, dword ptr [rbx]
#define CMP_EBX_FROM_PTR_RCX cmp ebx, dword ptr [rcx]
#define CMP_EBX_FROM_PTR_RDX cmp ebx, dword ptr [rdx]
#define CMP_EBX_FROM_PTR_RDI cmp ebx, dword ptr [rdi]
#define CMP_EBX_FROM_PTR_RSI cmp ebx, dword ptr [rsi]
#define CMP_EBX_FROM_PTR_RBP cmp ebx, dword ptr [rbp]
#define CMP_EBX_FROM_PTR_RSP cmp ebx, dword ptr [rsp]
#define CMP_EBX_FROM_PTR_R8 cmp ebx, dword ptr [r8]
#define CMP_EBX_FROM_PTR_R9 cmp ebx, dword ptr [r9]
#define CMP_EBX_FROM_PTR_R10 cmp ebx, dword ptr [r10]
#define CMP_EBX_FROM_PTR_R11 cmp ebx, dword ptr [r11]
#define CMP_EBX_FROM_PTR_R12 cmp ebx, dword ptr [r12]
#define CMP_EBX_FROM_PTR_R13 cmp ebx, dword ptr [r13]
#define CMP_EBX_FROM_PTR_R14 cmp ebx, dword ptr [r14]
#define CMP_EBX_FROM_PTR_R15 cmp ebx, dword ptr [r15]
#define CMP_EBX_FROM_PTR_EAX cmp ebx, dword ptr [eax]
#define CMP_EBX_FROM_PTR_EBX cmp ebx, dword ptr [ebx]
#define CMP_EBX_FROM_PTR_ECX cmp ebx, dword ptr [ecx]
#define CMP_EBX_FROM_PTR_EDX cmp ebx, dword ptr [edx]
#define CMP_EBX_FROM_PTR_EDI cmp ebx, dword ptr [edi]
#define CMP_EBX_FROM_PTR_ESI cmp ebx, dword ptr [esi]
#define CMP_EBX_FROM_PTR_EBP cmp ebx, dword ptr [ebp]
#define CMP_EBX_FROM_PTR_ESP cmp ebx, dword ptr [esp]

#define CMP_ECX_FROM_PTR_RAX cmp ecx, dword ptr [rax]
#define CMP_ECX_FROM_PTR_RBX cmp ecx, dword ptr [rbx]
#define CMP_ECX_FROM_PTR_RCX cmp ecx, dword ptr [rcx]
#define CMP_ECX_FROM_PTR_RDX cmp ecx, dword ptr [rdx]
#define CMP_ECX_FROM_PTR_RDI cmp ecx, dword ptr [rdi]
#define CMP_ECX_FROM_PTR_RSI cmp ecx, dword ptr [rsi]
#define CMP_ECX_FROM_PTR_RBP cmp ecx, dword ptr [rbp]
#define CMP_ECX_FROM_PTR_RSP cmp ecx, dword ptr [rsp]
#define CMP_ECX_FROM_PTR_R8 cmp ecx, dword ptr [r8]
#define CMP_ECX_FROM_PTR_R9 cmp ecx, dword ptr [r9]
#define CMP_ECX_FROM_PTR_R10 cmp ecx, dword ptr [r10]
#define CMP_ECX_FROM_PTR_R11 cmp ecx, dword ptr [r11]
#define CMP_ECX_FROM_PTR_R12 cmp ecx, dword ptr [r12]
#define CMP_ECX_FROM_PTR_R13 cmp ecx, dword ptr [r13]
#define CMP_ECX_FROM_PTR_R14 cmp ecx, dword ptr [r14]
#define CMP_ECX_FROM_PTR_R15 cmp ecx, dword ptr [r15]
#define CMP_ECX_FROM_PTR_EAX cmp ecx, dword ptr [eax]
#define CMP_ECX_FROM_PTR_EBX cmp ecx, dword ptr [ebx]
#define CMP_ECX_FROM_PTR_ECX cmp ecx, dword ptr [ecx]
#define CMP_ECX_FROM_PTR_EDX cmp ecx, dword ptr [edx]
#define CMP_ECX_FROM_PTR_EDI cmp ecx, dword ptr [edi]
#define CMP_ECX_FROM_PTR_ESI cmp ecx, dword ptr [esi]
#define CMP_ECX_FROM_PTR_EBP cmp ecx, dword ptr [ebp]
#define CMP_ECX_FROM_PTR_ESP cmp ecx, dword ptr [esp]

#define CMP_EDX_FROM_PTR_RAX cmp edx, dword ptr [rax]
#define CMP_EDX_FROM_PTR_RBX cmp edx, dword ptr [rbx]
#define CMP_EDX_FROM_PTR_RCX cmp edx, dword ptr [rcx]
#define CMP_EDX_FROM_PTR_RDX cmp edx, dword ptr [rdx]
#define CMP_EDX_FROM_PTR_RDI cmp edx, dword ptr [rdi]
#define CMP_EDX_FROM_PTR_RSI cmp edx, dword ptr [rsi]
#define CMP_EDX_FROM_PTR_RBP cmp edx, dword ptr [rbp]
#define CMP_EDX_FROM_PTR_RSP cmp edx, dword ptr [rsp]
#define CMP_EDX_FROM_PTR_R8 cmp edx, dword ptr [r8]
#define CMP_EDX_FROM_PTR_R9 cmp edx, dword ptr [r9]
#define CMP_EDX_FROM_PTR_R10 cmp edx, dword ptr [r10]
#define CMP_EDX_FROM_PTR_R11 cmp edx, dword ptr [r11]
#define CMP_EDX_FROM_PTR_R12 cmp edx, dword ptr [r12]
#define CMP_EDX_FROM_PTR_R13 cmp edx, dword ptr [r13]
#define CMP_EDX_FROM_PTR_R14 cmp edx, dword ptr [r14]
#define CMP_EDX_FROM_PTR_R15 cmp edx, dword ptr [r15]
#define CMP_EDX_FROM_PTR_EAX cmp edx, dword ptr [eax]
#define CMP_EDX_FROM_PTR_EBX cmp edx, dword ptr [ebx]
#define CMP_EDX_FROM_PTR_ECX cmp edx, dword ptr [ecx]
#define CMP_EDX_FROM_PTR_EDX cmp edx, dword ptr [edx]
#define CMP_EDX_FROM_PTR_EDI cmp edx, dword ptr [edi]
#define CMP_EDX_FROM_PTR_ESI cmp edx, dword ptr [esi]
#define CMP_EDX_FROM_PTR_EBP cmp edx, dword ptr [ebp]
#define CMP_EDX_FROM_PTR_ESP cmp edx, dword ptr [esp]

#define CMP_EDI_FROM_PTR_RAX cmp edi, dword ptr [rax]
#define CMP_EDI_FROM_PTR_RBX cmp edi, dword ptr [rbx]
#define CMP_EDI_FROM_PTR_RCX cmp edi, dword ptr [rcx]
#define CMP_EDI_FROM_PTR_RDX cmp edi, dword ptr [rdx]
#define CMP_EDI_FROM_PTR_RDI cmp edi, dword ptr [rdi]
#define CMP_EDI_FROM_PTR_RSI cmp edi, dword ptr [rsi]
#define CMP_EDI_FROM_PTR_RBP cmp edi, dword ptr [rbp]
#define CMP_EDI_FROM_PTR_RSP cmp edi, dword ptr [rsp]
#define CMP_EDI_FROM_PTR_R8 cmp edi, dword ptr [r8]
#define CMP_EDI_FROM_PTR_R9 cmp edi, dword ptr [r9]
#define CMP_EDI_FROM_PTR_R10 cmp edi, dword ptr [r10]
#define CMP_EDI_FROM_PTR_R11 cmp edi, dword ptr [r11]
#define CMP_EDI_FROM_PTR_R12 cmp edi, dword ptr [r12]
#define CMP_EDI_FROM_PTR_R13 cmp edi, dword ptr [r13]
#define CMP_EDI_FROM_PTR_R14 cmp edi, dword ptr [r14]
#define CMP_EDI_FROM_PTR_R15 cmp edi, dword ptr [r15]
#define CMP_EDI_FROM_PTR_EAX cmp edi, dword ptr [eax]
#define CMP_EDI_FROM_PTR_EBX cmp edi, dword ptr [ebx]
#define CMP_EDI_FROM_PTR_ECX cmp edi, dword ptr [ecx]
#define CMP_EDI_FROM_PTR_EDX cmp edi, dword ptr [edx]
#define CMP_EDI_FROM_PTR_EDI cmp edi, dword ptr [edi]
#define CMP_EDI_FROM_PTR_ESI cmp edi, dword ptr [esi]
#define CMP_EDI_FROM_PTR_EBP cmp edi, dword ptr [ebp]
#define CMP_EDI_FROM_PTR_ESP cmp edi, dword ptr [esp]

#define CMP_ESI_FROM_PTR_RAX cmp esi, dword ptr [rax]
#define CMP_ESI_FROM_PTR_RBX cmp esi, dword ptr [rbx]
#define CMP_ESI_FROM_PTR_RCX cmp esi, dword ptr [rcx]
#define CMP_ESI_FROM_PTR_RDX cmp esi, dword ptr [rdx]
#define CMP_ESI_FROM_PTR_RDI cmp esi, dword ptr [rdi]
#define CMP_ESI_FROM_PTR_RSI cmp esi, dword ptr [rsi]
#define CMP_ESI_FROM_PTR_RBP cmp esi, dword ptr [rbp]
#define CMP_ESI_FROM_PTR_RSP cmp esi, dword ptr [rsp]
#define CMP_ESI_FROM_PTR_R8 cmp esi, dword ptr [r8]
#define CMP_ESI_FROM_PTR_R9 cmp esi, dword ptr [r9]
#define CMP_ESI_FROM_PTR_R10 cmp esi, dword ptr [r10]
#define CMP_ESI_FROM_PTR_R11 cmp esi, dword ptr [r11]
#define CMP_ESI_FROM_PTR_R12 cmp esi, dword ptr [r12]
#define CMP_ESI_FROM_PTR_R13 cmp esi, dword ptr [r13]
#define CMP_ESI_FROM_PTR_R14 cmp esi, dword ptr [r14]
#define CMP_ESI_FROM_PTR_R15 cmp esi, dword ptr [r15]
#define CMP_ESI_FROM_PTR_EAX cmp esi, dword ptr [eax]
#define CMP_ESI_FROM_PTR_EBX cmp esi, dword ptr [ebx]
#define CMP_ESI_FROM_PTR_ECX cmp esi, dword ptr [ecx]
#define CMP_ESI_FROM_PTR_EDX cmp esi, dword ptr [edx]
#define CMP_ESI_FROM_PTR_EDI cmp esi, dword ptr [edi]
#define CMP_ESI_FROM_PTR_ESI cmp esi, dword ptr [esi]
#define CMP_ESI_FROM_PTR_EBP cmp esi, dword ptr [ebp]
#define CMP_ESI_FROM_PTR_ESP cmp esi, dword ptr [esp]

#define CMP_EBP_FROM_PTR_RAX cmp ebp, dword ptr [rax]
#define CMP_EBP_FROM_PTR_RBX cmp ebp, dword ptr [rbx]
#define CMP_EBP_FROM_PTR_RCX cmp ebp, dword ptr [rcx]
#define CMP_EBP_FROM_PTR_RDX cmp ebp, dword ptr [rdx]
#define CMP_EBP_FROM_PTR_RDI cmp ebp, dword ptr [rdi]
#define CMP_EBP_FROM_PTR_RSI cmp ebp, dword ptr [rsi]
#define CMP_EBP_FROM_PTR_RBP cmp ebp, dword ptr [rbp]
#define CMP_EBP_FROM_PTR_RSP cmp ebp, dword ptr [rsp]
#define CMP_EBP_FROM_PTR_R8 cmp ebp, dword ptr [r8]
#define CMP_EBP_FROM_PTR_R9 cmp ebp, dword ptr [r9]
#define CMP_EBP_FROM_PTR_R10 cmp ebp, dword ptr [r10]
#define CMP_EBP_FROM_PTR_R11 cmp ebp, dword ptr [r11]
#define CMP_EBP_FROM_PTR_R12 cmp ebp, dword ptr [r12]
#define CMP_EBP_FROM_PTR_R13 cmp ebp, dword ptr [r13]
#define CMP_EBP_FROM_PTR_R14 cmp ebp, dword ptr [r14]
#define CMP_EBP_FROM_PTR_R15 cmp ebp, dword ptr [r15]
#define CMP_EBP_FROM_PTR_EAX cmp ebp, dword ptr [eax]
#define CMP_EBP_FROM_PTR_EBX cmp ebp, dword ptr [ebx]
#define CMP_EBP_FROM_PTR_ECX cmp ebp, dword ptr [ecx]
#define CMP_EBP_FROM_PTR_EDX cmp ebp, dword ptr [edx]
#define CMP_EBP_FROM_PTR_EDI cmp ebp, dword ptr [edi]
#define CMP_EBP_FROM_PTR_ESI cmp ebp, dword ptr [esi]
#define CMP_EBP_FROM_PTR_EBP cmp ebp, dword ptr [ebp]
#define CMP_EBP_FROM_PTR_ESP cmp ebp, dword ptr [esp]

#define CMP_ESP_FROM_PTR_RAX cmp esp, dword ptr [rax]
#define CMP_ESP_FROM_PTR_RBX cmp esp, dword ptr [rbx]
#define CMP_ESP_FROM_PTR_RCX cmp esp, dword ptr [rcx]
#define CMP_ESP_FROM_PTR_RDX cmp esp, dword ptr [rdx]
#define CMP_ESP_FROM_PTR_RDI cmp esp, dword ptr [rdi]
#define CMP_ESP_FROM_PTR_RSI cmp esp, dword ptr [rsi]
#define CMP_ESP_FROM_PTR_RBP cmp esp, dword ptr [rbp]
#define CMP_ESP_FROM_PTR_RSP cmp esp, dword ptr [rsp]
#define CMP_ESP_FROM_PTR_R8 cmp esp, dword ptr [r8]
#define CMP_ESP_FROM_PTR_R9 cmp esp, dword ptr [r9]
#define CMP_ESP_FROM_PTR_R10 cmp esp, dword ptr [r10]
#define CMP_ESP_FROM_PTR_R11 cmp esp, dword ptr [r11]
#define CMP_ESP_FROM_PTR_R12 cmp esp, dword ptr [r12]
#define CMP_ESP_FROM_PTR_R13 cmp esp, dword ptr [r13]
#define CMP_ESP_FROM_PTR_R14 cmp esp, dword ptr [r14]
#define CMP_ESP_FROM_PTR_R15 cmp esp, dword ptr [r15]
#define CMP_ESP_FROM_PTR_EAX cmp esp, dword ptr [eax]
#define CMP_ESP_FROM_PTR_EBX cmp esp, dword ptr [ebx]
#define CMP_ESP_FROM_PTR_ECX cmp esp, dword ptr [ecx]
#define CMP_ESP_FROM_PTR_EDX cmp esp, dword ptr [edx]
#define CMP_ESP_FROM_PTR_EDI cmp esp, dword ptr [edi]
#define CMP_ESP_FROM_PTR_ESI cmp esp, dword ptr [esi]
#define CMP_ESP_FROM_PTR_EBP cmp esp, dword ptr [ebp]
#define CMP_ESP_FROM_PTR_ESP cmp esp, dword ptr [esp]

#define CMP_R8D_FROM_PTR_RAX cmp r8d, dword ptr [rax]
#define CMP_R8D_FROM_PTR_RBX cmp r8d, dword ptr [rbx]
#define CMP_R8D_FROM_PTR_RCX cmp r8d, dword ptr [rcx]
#define CMP_R8D_FROM_PTR_RDX cmp r8d, dword ptr [rdx]
#define CMP_R8D_FROM_PTR_RDI cmp r8d, dword ptr [rdi]
#define CMP_R8D_FROM_PTR_RSI cmp r8d, dword ptr [rsi]
#define CMP_R8D_FROM_PTR_RBP cmp r8d, dword ptr [rbp]
#define CMP_R8D_FROM_PTR_RSP cmp r8d, dword ptr [rsp]
#define CMP_R8D_FROM_PTR_R8 cmp r8d, dword ptr [r8]
#define CMP_R8D_FROM_PTR_R9 cmp r8d, dword ptr [r9]
#define CMP_R8D_FROM_PTR_R10 cmp r8d, dword ptr [r10]
#define CMP_R8D_FROM_PTR_R11 cmp r8d, dword ptr [r11]
#define CMP_R8D_FROM_PTR_R12 cmp r8d, dword ptr [r12]
#define CMP_R8D_FROM_PTR_R13 cmp r8d, dword ptr [r13]
#define CMP_R8D_FROM_PTR_R14 cmp r8d, dword ptr [r14]
#define CMP_R8D_FROM_PTR_R15 cmp r8d, dword ptr [r15]
#define CMP_R8D_FROM_PTR_EAX cmp r8d, dword ptr [eax]
#define CMP_R8D_FROM_PTR_EBX cmp r8d, dword ptr [ebx]
#define CMP_R8D_FROM_PTR_ECX cmp r8d, dword ptr [ecx]
#define CMP_R8D_FROM_PTR_EDX cmp r8d, dword ptr [edx]
#define CMP_R8D_FROM_PTR_EDI cmp r8d, dword ptr [edi]
#define CMP_R8D_FROM_PTR_ESI cmp r8d, dword ptr [esi]
#define CMP_R8D_FROM_PTR_EBP cmp r8d, dword ptr [ebp]
#define CMP_R8D_FROM_PTR_ESP cmp r8d, dword ptr [esp]

#define CMP_R9D_FROM_PTR_RAX cmp r9d, dword ptr [rax]
#define CMP_R9D_FROM_PTR_RBX cmp r9d, dword ptr [rbx]
#define CMP_R9D_FROM_PTR_RCX cmp r9d, dword ptr [rcx]
#define CMP_R9D_FROM_PTR_RDX cmp r9d, dword ptr [rdx]
#define CMP_R9D_FROM_PTR_RDI cmp r9d, dword ptr [rdi]
#define CMP_R9D_FROM_PTR_RSI cmp r9d, dword ptr [rsi]
#define CMP_R9D_FROM_PTR_RBP cmp r9d, dword ptr [rbp]
#define CMP_R9D_FROM_PTR_RSP cmp r9d, dword ptr [rsp]
#define CMP_R9D_FROM_PTR_R8 cmp r9d, dword ptr [r8]
#define CMP_R9D_FROM_PTR_R9 cmp r9d, dword ptr [r9]
#define CMP_R9D_FROM_PTR_R10 cmp r9d, dword ptr [r10]
#define CMP_R9D_FROM_PTR_R11 cmp r9d, dword ptr [r11]
#define CMP_R9D_FROM_PTR_R12 cmp r9d, dword ptr [r12]
#define CMP_R9D_FROM_PTR_R13 cmp r9d, dword ptr [r13]
#define CMP_R9D_FROM_PTR_R14 cmp r9d, dword ptr [r14]
#define CMP_R9D_FROM_PTR_R15 cmp r9d, dword ptr [r15]
#define CMP_R9D_FROM_PTR_EAX cmp r9d, dword ptr [eax]
#define CMP_R9D_FROM_PTR_EBX cmp r9d, dword ptr [ebx]
#define CMP_R9D_FROM_PTR_ECX cmp r9d, dword ptr [ecx]
#define CMP_R9D_FROM_PTR_EDX cmp r9d, dword ptr [edx]
#define CMP_R9D_FROM_PTR_EDI cmp r9d, dword ptr [edi]
#define CMP_R9D_FROM_PTR_ESI cmp r9d, dword ptr [esi]
#define CMP_R9D_FROM_PTR_EBP cmp r9d, dword ptr [ebp]
#define CMP_R9D_FROM_PTR_ESP cmp r9d, dword ptr [esp]

#define CMP_R10D_FROM_PTR_RAX cmp r10d, dword ptr [rax]
#define CMP_R10D_FROM_PTR_RBX cmp r10d, dword ptr [rbx]
#define CMP_R10D_FROM_PTR_RCX cmp r10d, dword ptr [rcx]
#define CMP_R10D_FROM_PTR_RDX cmp r10d, dword ptr [rdx]
#define CMP_R10D_FROM_PTR_RDI cmp r10d, dword ptr [rdi]
#define CMP_R10D_FROM_PTR_RSI cmp r10d, dword ptr [rsi]
#define CMP_R10D_FROM_PTR_RBP cmp r10d, dword ptr [rbp]
#define CMP_R10D_FROM_PTR_RSP cmp r10d, dword ptr [rsp]
#define CMP_R10D_FROM_PTR_R8 cmp r10d, dword ptr [r8]
#define CMP_R10D_FROM_PTR_R9 cmp r10d, dword ptr [r9]
#define CMP_R10D_FROM_PTR_R10 cmp r10d, dword ptr [r10]
#define CMP_R10D_FROM_PTR_R11 cmp r10d, dword ptr [r11]
#define CMP_R10D_FROM_PTR_R12 cmp r10d, dword ptr [r12]
#define CMP_R10D_FROM_PTR_R13 cmp r10d, dword ptr [r13]
#define CMP_R10D_FROM_PTR_R14 cmp r10d, dword ptr [r14]
#define CMP_R10D_FROM_PTR_R15 cmp r10d, dword ptr [r15]
#define CMP_R10D_FROM_PTR_EAX cmp r10d, dword ptr [eax]
#define CMP_R10D_FROM_PTR_EBX cmp r10d, dword ptr [ebx]
#define CMP_R10D_FROM_PTR_ECX cmp r10d, dword ptr [ecx]
#define CMP_R10D_FROM_PTR_EDX cmp r10d, dword ptr [edx]
#define CMP_R10D_FROM_PTR_EDI cmp r10d, dword ptr [edi]
#define CMP_R10D_FROM_PTR_ESI cmp r10d, dword ptr [esi]
#define CMP_R10D_FROM_PTR_EBP cmp r10d, dword ptr [ebp]
#define CMP_R10D_FROM_PTR_ESP cmp r10d, dword ptr [esp]

#define CMP_R11D_FROM_PTR_RAX cmp r11d, dword ptr [rax]
#define CMP_R11D_FROM_PTR_RBX cmp r11d, dword ptr [rbx]
#define CMP_R11D_FROM_PTR_RCX cmp r11d, dword ptr [rcx]
#define CMP_R11D_FROM_PTR_RDX cmp r11d, dword ptr [rdx]
#define CMP_R11D_FROM_PTR_RDI cmp r11d, dword ptr [rdi]
#define CMP_R11D_FROM_PTR_RSI cmp r11d, dword ptr [rsi]
#define CMP_R11D_FROM_PTR_RBP cmp r11d, dword ptr [rbp]
#define CMP_R11D_FROM_PTR_RSP cmp r11d, dword ptr [rsp]
#define CMP_R11D_FROM_PTR_R8 cmp r11d, dword ptr [r8]
#define CMP_R11D_FROM_PTR_R9 cmp r11d, dword ptr [r9]
#define CMP_R11D_FROM_PTR_R10 cmp r11d, dword ptr [r10]
#define CMP_R11D_FROM_PTR_R11 cmp r11d, dword ptr [r11]
#define CMP_R11D_FROM_PTR_R12 cmp r11d, dword ptr [r12]
#define CMP_R11D_FROM_PTR_R13 cmp r11d, dword ptr [r13]
#define CMP_R11D_FROM_PTR_R14 cmp r11d, dword ptr [r14]
#define CMP_R11D_FROM_PTR_R15 cmp r11d, dword ptr [r15]
#define CMP_R11D_FROM_PTR_EAX cmp r11d, dword ptr [eax]
#define CMP_R11D_FROM_PTR_EBX cmp r11d, dword ptr [ebx]
#define CMP_R11D_FROM_PTR_ECX cmp r11d, dword ptr [ecx]
#define CMP_R11D_FROM_PTR_EDX cmp r11d, dword ptr [edx]
#define CMP_R11D_FROM_PTR_EDI cmp r11d, dword ptr [edi]
#define CMP_R11D_FROM_PTR_ESI cmp r11d, dword ptr [esi]
#define CMP_R11D_FROM_PTR_EBP cmp r11d, dword ptr [ebp]
#define CMP_R11D_FROM_PTR_ESP cmp r11d, dword ptr [esp]

#define CMP_R12D_FROM_PTR_RAX cmp r12d, dword ptr [rax]
#define CMP_R12D_FROM_PTR_RBX cmp r12d, dword ptr [rbx]
#define CMP_R12D_FROM_PTR_RCX cmp r12d, dword ptr [rcx]
#define CMP_R12D_FROM_PTR_RDX cmp r12d, dword ptr [rdx]
#define CMP_R12D_FROM_PTR_RDI cmp r12d, dword ptr [rdi]
#define CMP_R12D_FROM_PTR_RSI cmp r12d, dword ptr [rsi]
#define CMP_R12D_FROM_PTR_RBP cmp r12d, dword ptr [rbp]
#define CMP_R12D_FROM_PTR_RSP cmp r12d, dword ptr [rsp]
#define CMP_R12D_FROM_PTR_R8 cmp r12d, dword ptr [r8]
#define CMP_R12D_FROM_PTR_R9 cmp r12d, dword ptr [r9]
#define CMP_R12D_FROM_PTR_R10 cmp r12d, dword ptr [r10]
#define CMP_R12D_FROM_PTR_R11 cmp r12d, dword ptr [r11]
#define CMP_R12D_FROM_PTR_R12 cmp r12d, dword ptr [r12]
#define CMP_R12D_FROM_PTR_R13 cmp r12d, dword ptr [r13]
#define CMP_R12D_FROM_PTR_R14 cmp r12d, dword ptr [r14]
#define CMP_R12D_FROM_PTR_R15 cmp r12d, dword ptr [r15]
#define CMP_R12D_FROM_PTR_EAX cmp r12d, dword ptr [eax]
#define CMP_R12D_FROM_PTR_EBX cmp r12d, dword ptr [ebx]
#define CMP_R12D_FROM_PTR_ECX cmp r12d, dword ptr [ecx]
#define CMP_R12D_FROM_PTR_EDX cmp r12d, dword ptr [edx]
#define CMP_R12D_FROM_PTR_EDI cmp r12d, dword ptr [edi]
#define CMP_R12D_FROM_PTR_ESI cmp r12d, dword ptr [esi]
#define CMP_R12D_FROM_PTR_EBP cmp r12d, dword ptr [ebp]
#define CMP_R12D_FROM_PTR_ESP cmp r12d, dword ptr [esp]

#define CMP_R13D_FROM_PTR_RAX cmp r13d, dword ptr [rax]
#define CMP_R13D_FROM_PTR_RBX cmp r13d, dword ptr [rbx]
#define CMP_R13D_FROM_PTR_RCX cmp r13d, dword ptr [rcx]
#define CMP_R13D_FROM_PTR_RDX cmp r13d, dword ptr [rdx]
#define CMP_R13D_FROM_PTR_RDI cmp r13d, dword ptr [rdi]
#define CMP_R13D_FROM_PTR_RSI cmp r13d, dword ptr [rsi]
#define CMP_R13D_FROM_PTR_RBP cmp r13d, dword ptr [rbp]
#define CMP_R13D_FROM_PTR_RSP cmp r13d, dword ptr [rsp]
#define CMP_R13D_FROM_PTR_R8 cmp r13d, dword ptr [r8]
#define CMP_R13D_FROM_PTR_R9 cmp r13d, dword ptr [r9]
#define CMP_R13D_FROM_PTR_R10 cmp r13d, dword ptr [r10]
#define CMP_R13D_FROM_PTR_R11 cmp r13d, dword ptr [r11]
#define CMP_R13D_FROM_PTR_R12 cmp r13d, dword ptr [r12]
#define CMP_R13D_FROM_PTR_R13 cmp r13d, dword ptr [r13]
#define CMP_R13D_FROM_PTR_R14 cmp r13d, dword ptr [r14]
#define CMP_R13D_FROM_PTR_R15 cmp r13d, dword ptr [r15]
#define CMP_R13D_FROM_PTR_EAX cmp r13d, dword ptr [eax]
#define CMP_R13D_FROM_PTR_EBX cmp r13d, dword ptr [ebx]
#define CMP_R13D_FROM_PTR_ECX cmp r13d, dword ptr [ecx]
#define CMP_R13D_FROM_PTR_EDX cmp r13d, dword ptr [edx]
#define CMP_R13D_FROM_PTR_EDI cmp r13d, dword ptr [edi]
#define CMP_R13D_FROM_PTR_ESI cmp r13d, dword ptr [esi]
#define CMP_R13D_FROM_PTR_EBP cmp r13d, dword ptr [ebp]
#define CMP_R13D_FROM_PTR_ESP cmp r13d, dword ptr [esp]

#define CMP_R14D_FROM_PTR_RAX cmp r14d, dword ptr [rax]
#define CMP_R14D_FROM_PTR_RBX cmp r14d, dword ptr [rbx]
#define CMP_R14D_FROM_PTR_RCX cmp r14d, dword ptr [rcx]
#define CMP_R14D_FROM_PTR_RDX cmp r14d, dword ptr [rdx]
#define CMP_R14D_FROM_PTR_RDI cmp r14d, dword ptr [rdi]
#define CMP_R14D_FROM_PTR_RSI cmp r14d, dword ptr [rsi]
#define CMP_R14D_FROM_PTR_RBP cmp r14d, dword ptr [rbp]
#define CMP_R14D_FROM_PTR_RSP cmp r14d, dword ptr [rsp]
#define CMP_R14D_FROM_PTR_R8 cmp r14d, dword ptr [r8]
#define CMP_R14D_FROM_PTR_R9 cmp r14d, dword ptr [r9]
#define CMP_R14D_FROM_PTR_R10 cmp r14d, dword ptr [r10]
#define CMP_R14D_FROM_PTR_R11 cmp r14d, dword ptr [r11]
#define CMP_R14D_FROM_PTR_R12 cmp r14d, dword ptr [r12]
#define CMP_R14D_FROM_PTR_R13 cmp r14d, dword ptr [r13]
#define CMP_R14D_FROM_PTR_R14 cmp r14d, dword ptr [r14]
#define CMP_R14D_FROM_PTR_R15 cmp r14d, dword ptr [r15]
#define CMP_R14D_FROM_PTR_EAX cmp r14d, dword ptr [eax]
#define CMP_R14D_FROM_PTR_EBX cmp r14d, dword ptr [ebx]
#define CMP_R14D_FROM_PTR_ECX cmp r14d, dword ptr [ecx]
#define CMP_R14D_FROM_PTR_EDX cmp r14d, dword ptr [edx]
#define CMP_R14D_FROM_PTR_EDI cmp r14d, dword ptr [edi]
#define CMP_R14D_FROM_PTR_ESI cmp r14d, dword ptr [esi]
#define CMP_R14D_FROM_PTR_EBP cmp r14d, dword ptr [ebp]
#define CMP_R14D_FROM_PTR_ESP cmp r14d, dword ptr [esp]

#define CMP_R15D_FROM_PTR_RAX cmp r15d, dword ptr [rax]
#define CMP_R15D_FROM_PTR_RBX cmp r15d, dword ptr [rbx]
#define CMP_R15D_FROM_PTR_RCX cmp r15d, dword ptr [rcx]
#define CMP_R15D_FROM_PTR_RDX cmp r15d, dword ptr [rdx]
#define CMP_R15D_FROM_PTR_RDI cmp r15d, dword ptr [rdi]
#define CMP_R15D_FROM_PTR_RSI cmp r15d, dword ptr [rsi]
#define CMP_R15D_FROM_PTR_RBP cmp r15d, dword ptr [rbp]
#define CMP_R15D_FROM_PTR_RSP cmp r15d, dword ptr [rsp]
#define CMP_R15D_FROM_PTR_R8 cmp r15d, dword ptr [r8]
#define CMP_R15D_FROM_PTR_R9 cmp r15d, dword ptr [r9]
#define CMP_R15D_FROM_PTR_R10 cmp r15d, dword ptr [r10]
#define CMP_R15D_FROM_PTR_R11 cmp r15d, dword ptr [r11]
#define CMP_R15D_FROM_PTR_R12 cmp r15d, dword ptr [r12]
#define CMP_R15D_FROM_PTR_R13 cmp r15d, dword ptr [r13]
#define CMP_R15D_FROM_PTR_R14 cmp r15d, dword ptr [r14]
#define CMP_R15D_FROM_PTR_R15 cmp r15d, dword ptr [r15]
#define CMP_R15D_FROM_PTR_EAX cmp r15d, dword ptr [eax]
#define CMP_R15D_FROM_PTR_EBX cmp r15d, dword ptr [ebx]
#define CMP_R15D_FROM_PTR_ECX cmp r15d, dword ptr [ecx]
#define CMP_R15D_FROM_PTR_EDX cmp r15d, dword ptr [edx]
#define CMP_R15D_FROM_PTR_EDI cmp r15d, dword ptr [edi]
#define CMP_R15D_FROM_PTR_ESI cmp r15d, dword ptr [esi]
#define CMP_R15D_FROM_PTR_EBP cmp r15d, dword ptr [ebp]
#define CMP_R15D_FROM_PTR_ESP cmp r15d, dword ptr [esp]

#define CMP_EAX_TO_PTR_RAX cmp dword ptr [rax], eax
#define CMP_EAX_TO_PTR_RBX cmp dword ptr [rbx], eax
#define CMP_EAX_TO_PTR_RCX cmp dword ptr [rcx], eax
#define CMP_EAX_TO_PTR_RDX cmp dword ptr [rdx], eax
#define CMP_EAX_TO_PTR_RDI cmp dword ptr [rdi], eax
#define CMP_EAX_TO_PTR_RSI cmp dword ptr [rsi], eax
#define CMP_EAX_TO_PTR_RBP cmp dword ptr [rbp], eax
#define CMP_EAX_TO_PTR_RSP cmp dword ptr [rsp], eax
#define CMP_EAX_TO_PTR_R8 cmp dword ptr [r8], eax
#define CMP_EAX_TO_PTR_R9 cmp dword ptr [r9], eax
#define CMP_EAX_TO_PTR_R10 cmp dword ptr [r10], eax
#define CMP_EAX_TO_PTR_R11 cmp dword ptr [r11], eax
#define CMP_EAX_TO_PTR_R12 cmp dword ptr [r12], eax
#define CMP_EAX_TO_PTR_R13 cmp dword ptr [r13], eax
#define CMP_EAX_TO_PTR_R14 cmp dword ptr [r14], eax
#define CMP_EAX_TO_PTR_R15 cmp dword ptr [r15], eax
#define CMP_EAX_TO_PTR_EAX cmp dword ptr [eax], eax
#define CMP_EAX_TO_PTR_EBX cmp dword ptr [ebx], eax
#define CMP_EAX_TO_PTR_ECX cmp dword ptr [ecx], eax
#define CMP_EAX_TO_PTR_EDX cmp dword ptr [edx], eax
#define CMP_EAX_TO_PTR_EDI cmp dword ptr [edi], eax
#define CMP_EAX_TO_PTR_ESI cmp dword ptr [esi], eax
#define CMP_EAX_TO_PTR_EBP cmp dword ptr [ebp], eax
#define CMP_EAX_TO_PTR_ESP cmp dword ptr [esp], eax

#define CMP_EBX_TO_PTR_RAX cmp dword ptr [rax], ebx
#define CMP_EBX_TO_PTR_RBX cmp dword ptr [rbx], ebx
#define CMP_EBX_TO_PTR_RCX cmp dword ptr [rcx], ebx
#define CMP_EBX_TO_PTR_RDX cmp dword ptr [rdx], ebx
#define CMP_EBX_TO_PTR_RDI cmp dword ptr [rdi], ebx
#define CMP_EBX_TO_PTR_RSI cmp dword ptr [rsi], ebx
#define CMP_EBX_TO_PTR_RBP cmp dword ptr [rbp], ebx
#define CMP_EBX_TO_PTR_RSP cmp dword ptr [rsp], ebx
#define CMP_EBX_TO_PTR_R8 cmp dword ptr [r8], ebx
#define CMP_EBX_TO_PTR_R9 cmp dword ptr [r9], ebx
#define CMP_EBX_TO_PTR_R10 cmp dword ptr [r10], ebx
#define CMP_EBX_TO_PTR_R11 cmp dword ptr [r11], ebx
#define CMP_EBX_TO_PTR_R12 cmp dword ptr [r12], ebx
#define CMP_EBX_TO_PTR_R13 cmp dword ptr [r13], ebx
#define CMP_EBX_TO_PTR_R14 cmp dword ptr [r14], ebx
#define CMP_EBX_TO_PTR_R15 cmp dword ptr [r15], ebx
#define CMP_EBX_TO_PTR_EAX cmp dword ptr [eax], ebx
#define CMP_EBX_TO_PTR_EBX cmp dword ptr [ebx], ebx
#define CMP_EBX_TO_PTR_ECX cmp dword ptr [ecx], ebx
#define CMP_EBX_TO_PTR_EDX cmp dword ptr [edx], ebx
#define CMP_EBX_TO_PTR_EDI cmp dword ptr [edi], ebx
#define CMP_EBX_TO_PTR_ESI cmp dword ptr [esi], ebx
#define CMP_EBX_TO_PTR_EBP cmp dword ptr [ebp], ebx
#define CMP_EBX_TO_PTR_ESP cmp dword ptr [esp], ebx

#define CMP_ECX_TO_PTR_RAX cmp dword ptr [rax], ecx
#define CMP_ECX_TO_PTR_RBX cmp dword ptr [rbx], ecx
#define CMP_ECX_TO_PTR_RCX cmp dword ptr [rcx], ecx
#define CMP_ECX_TO_PTR_RDX cmp dword ptr [rdx], ecx
#define CMP_ECX_TO_PTR_RDI cmp dword ptr [rdi], ecx
#define CMP_ECX_TO_PTR_RSI cmp dword ptr [rsi], ecx
#define CMP_ECX_TO_PTR_RBP cmp dword ptr [rbp], ecx
#define CMP_ECX_TO_PTR_RSP cmp dword ptr [rsp], ecx
#define CMP_ECX_TO_PTR_R8 cmp dword ptr [r8], ecx
#define CMP_ECX_TO_PTR_R9 cmp dword ptr [r9], ecx
#define CMP_ECX_TO_PTR_R10 cmp dword ptr [r10], ecx
#define CMP_ECX_TO_PTR_R11 cmp dword ptr [r11], ecx
#define CMP_ECX_TO_PTR_R12 cmp dword ptr [r12], ecx
#define CMP_ECX_TO_PTR_R13 cmp dword ptr [r13], ecx
#define CMP_ECX_TO_PTR_R14 cmp dword ptr [r14], ecx
#define CMP_ECX_TO_PTR_R15 cmp dword ptr [r15], ecx
#define CMP_ECX_TO_PTR_EAX cmp dword ptr [eax], ecx
#define CMP_ECX_TO_PTR_EBX cmp dword ptr [ebx], ecx
#define CMP_ECX_TO_PTR_ECX cmp dword ptr [ecx], ecx
#define CMP_ECX_TO_PTR_EDX cmp dword ptr [edx], ecx
#define CMP_ECX_TO_PTR_EDI cmp dword ptr [edi], ecx
#define CMP_ECX_TO_PTR_ESI cmp dword ptr [esi], ecx
#define CMP_ECX_TO_PTR_EBP cmp dword ptr [ebp], ecx
#define CMP_ECX_TO_PTR_ESP cmp dword ptr [esp], ecx

#define CMP_EDX_TO_PTR_RAX cmp dword ptr [rax], edx
#define CMP_EDX_TO_PTR_RBX cmp dword ptr [rbx], edx
#define CMP_EDX_TO_PTR_RCX cmp dword ptr [rcx], edx
#define CMP_EDX_TO_PTR_RDX cmp dword ptr [rdx], edx
#define CMP_EDX_TO_PTR_RDI cmp dword ptr [rdi], edx
#define CMP_EDX_TO_PTR_RSI cmp dword ptr [rsi], edx
#define CMP_EDX_TO_PTR_RBP cmp dword ptr [rbp], edx
#define CMP_EDX_TO_PTR_RSP cmp dword ptr [rsp], edx
#define CMP_EDX_TO_PTR_R8 cmp dword ptr [r8], edx
#define CMP_EDX_TO_PTR_R9 cmp dword ptr [r9], edx
#define CMP_EDX_TO_PTR_R10 cmp dword ptr [r10], edx
#define CMP_EDX_TO_PTR_R11 cmp dword ptr [r11], edx
#define CMP_EDX_TO_PTR_R12 cmp dword ptr [r12], edx
#define CMP_EDX_TO_PTR_R13 cmp dword ptr [r13], edx
#define CMP_EDX_TO_PTR_R14 cmp dword ptr [r14], edx
#define CMP_EDX_TO_PTR_R15 cmp dword ptr [r15], edx
#define CMP_EDX_TO_PTR_EAX cmp dword ptr [eax], edx
#define CMP_EDX_TO_PTR_EBX cmp dword ptr [ebx], edx
#define CMP_EDX_TO_PTR_ECX cmp dword ptr [ecx], edx
#define CMP_EDX_TO_PTR_EDX cmp dword ptr [edx], edx
#define CMP_EDX_TO_PTR_EDI cmp dword ptr [edi], edx
#define CMP_EDX_TO_PTR_ESI cmp dword ptr [esi], edx
#define CMP_EDX_TO_PTR_EBP cmp dword ptr [ebp], edx
#define CMP_EDX_TO_PTR_ESP cmp dword ptr [esp], edx

#define CMP_EDI_TO_PTR_RAX cmp dword ptr [rax], edi
#define CMP_EDI_TO_PTR_RBX cmp dword ptr [rbx], edi
#define CMP_EDI_TO_PTR_RCX cmp dword ptr [rcx], edi
#define CMP_EDI_TO_PTR_RDX cmp dword ptr [rdx], edi
#define CMP_EDI_TO_PTR_RDI cmp dword ptr [rdi], edi
#define CMP_EDI_TO_PTR_RSI cmp dword ptr [rsi], edi
#define CMP_EDI_TO_PTR_RBP cmp dword ptr [rbp], edi
#define CMP_EDI_TO_PTR_RSP cmp dword ptr [rsp], edi
#define CMP_EDI_TO_PTR_R8 cmp dword ptr [r8], edi
#define CMP_EDI_TO_PTR_R9 cmp dword ptr [r9], edi
#define CMP_EDI_TO_PTR_R10 cmp dword ptr [r10], edi
#define CMP_EDI_TO_PTR_R11 cmp dword ptr [r11], edi
#define CMP_EDI_TO_PTR_R12 cmp dword ptr [r12], edi
#define CMP_EDI_TO_PTR_R13 cmp dword ptr [r13], edi
#define CMP_EDI_TO_PTR_R14 cmp dword ptr [r14], edi
#define CMP_EDI_TO_PTR_R15 cmp dword ptr [r15], edi
#define CMP_EDI_TO_PTR_EAX cmp dword ptr [eax], edi
#define CMP_EDI_TO_PTR_EBX cmp dword ptr [ebx], edi
#define CMP_EDI_TO_PTR_ECX cmp dword ptr [ecx], edi
#define CMP_EDI_TO_PTR_EDX cmp dword ptr [edx], edi
#define CMP_EDI_TO_PTR_EDI cmp dword ptr [edi], edi
#define CMP_EDI_TO_PTR_ESI cmp dword ptr [esi], edi
#define CMP_EDI_TO_PTR_EBP cmp dword ptr [ebp], edi
#define CMP_EDI_TO_PTR_ESP cmp dword ptr [esp], edi

#define CMP_ESI_TO_PTR_RAX cmp dword ptr [rax], esi
#define CMP_ESI_TO_PTR_RBX cmp dword ptr [rbx], esi
#define CMP_ESI_TO_PTR_RCX cmp dword ptr [rcx], esi
#define CMP_ESI_TO_PTR_RDX cmp dword ptr [rdx], esi
#define CMP_ESI_TO_PTR_RDI cmp dword ptr [rdi], esi
#define CMP_ESI_TO_PTR_RSI cmp dword ptr [rsi], esi
#define CMP_ESI_TO_PTR_RBP cmp dword ptr [rbp], esi
#define CMP_ESI_TO_PTR_RSP cmp dword ptr [rsp], esi
#define CMP_ESI_TO_PTR_R8 cmp dword ptr [r8], esi
#define CMP_ESI_TO_PTR_R9 cmp dword ptr [r9], esi
#define CMP_ESI_TO_PTR_R10 cmp dword ptr [r10], esi
#define CMP_ESI_TO_PTR_R11 cmp dword ptr [r11], esi
#define CMP_ESI_TO_PTR_R12 cmp dword ptr [r12], esi
#define CMP_ESI_TO_PTR_R13 cmp dword ptr [r13], esi
#define CMP_ESI_TO_PTR_R14 cmp dword ptr [r14], esi
#define CMP_ESI_TO_PTR_R15 cmp dword ptr [r15], esi
#define CMP_ESI_TO_PTR_EAX cmp dword ptr [eax], esi
#define CMP_ESI_TO_PTR_EBX cmp dword ptr [ebx], esi
#define CMP_ESI_TO_PTR_ECX cmp dword ptr [ecx], esi
#define CMP_ESI_TO_PTR_EDX cmp dword ptr [edx], esi
#define CMP_ESI_TO_PTR_EDI cmp dword ptr [edi], esi
#define CMP_ESI_TO_PTR_ESI cmp dword ptr [esi], esi
#define CMP_ESI_TO_PTR_EBP cmp dword ptr [ebp], esi
#define CMP_ESI_TO_PTR_ESP cmp dword ptr [esp], esi

#define CMP_EBP_TO_PTR_RAX cmp dword ptr [rax], ebp
#define CMP_EBP_TO_PTR_RBX cmp dword ptr [rbx], ebp
#define CMP_EBP_TO_PTR_RCX cmp dword ptr [rcx], ebp
#define CMP_EBP_TO_PTR_RDX cmp dword ptr [rdx], ebp
#define CMP_EBP_TO_PTR_RDI cmp dword ptr [rdi], ebp
#define CMP_EBP_TO_PTR_RSI cmp dword ptr [rsi], ebp
#define CMP_EBP_TO_PTR_RBP cmp dword ptr [rbp], ebp
#define CMP_EBP_TO_PTR_RSP cmp dword ptr [rsp], ebp
#define CMP_EBP_TO_PTR_R8 cmp dword ptr [r8], ebp
#define CMP_EBP_TO_PTR_R9 cmp dword ptr [r9], ebp
#define CMP_EBP_TO_PTR_R10 cmp dword ptr [r10], ebp
#define CMP_EBP_TO_PTR_R11 cmp dword ptr [r11], ebp
#define CMP_EBP_TO_PTR_R12 cmp dword ptr [r12], ebp
#define CMP_EBP_TO_PTR_R13 cmp dword ptr [r13], ebp
#define CMP_EBP_TO_PTR_R14 cmp dword ptr [r14], ebp
#define CMP_EBP_TO_PTR_R15 cmp dword ptr [r15], ebp
#define CMP_EBP_TO_PTR_EAX cmp dword ptr [eax], ebp
#define CMP_EBP_TO_PTR_EBX cmp dword ptr [ebx], ebp
#define CMP_EBP_TO_PTR_ECX cmp dword ptr [ecx], ebp
#define CMP_EBP_TO_PTR_EDX cmp dword ptr [edx], ebp
#define CMP_EBP_TO_PTR_EDI cmp dword ptr [edi], ebp
#define CMP_EBP_TO_PTR_ESI cmp dword ptr [esi], ebp
#define CMP_EBP_TO_PTR_EBP cmp dword ptr [ebp], ebp
#define CMP_EBP_TO_PTR_ESP cmp dword ptr [esp], ebp

#define CMP_ESP_TO_PTR_RAX cmp dword ptr [rax], esp
#define CMP_ESP_TO_PTR_RBX cmp dword ptr [rbx], esp
#define CMP_ESP_TO_PTR_RCX cmp dword ptr [rcx], esp
#define CMP_ESP_TO_PTR_RDX cmp dword ptr [rdx], esp
#define CMP_ESP_TO_PTR_RDI cmp dword ptr [rdi], esp
#define CMP_ESP_TO_PTR_RSI cmp dword ptr [rsi], esp
#define CMP_ESP_TO_PTR_RBP cmp dword ptr [rbp], esp
#define CMP_ESP_TO_PTR_RSP cmp dword ptr [rsp], esp
#define CMP_ESP_TO_PTR_R8 cmp dword ptr [r8], esp
#define CMP_ESP_TO_PTR_R9 cmp dword ptr [r9], esp
#define CMP_ESP_TO_PTR_R10 cmp dword ptr [r10], esp
#define CMP_ESP_TO_PTR_R11 cmp dword ptr [r11], esp
#define CMP_ESP_TO_PTR_R12 cmp dword ptr [r12], esp
#define CMP_ESP_TO_PTR_R13 cmp dword ptr [r13], esp
#define CMP_ESP_TO_PTR_R14 cmp dword ptr [r14], esp
#define CMP_ESP_TO_PTR_R15 cmp dword ptr [r15], esp
#define CMP_ESP_TO_PTR_EAX cmp dword ptr [eax], esp
#define CMP_ESP_TO_PTR_EBX cmp dword ptr [ebx], esp
#define CMP_ESP_TO_PTR_ECX cmp dword ptr [ecx], esp
#define CMP_ESP_TO_PTR_EDX cmp dword ptr [edx], esp
#define CMP_ESP_TO_PTR_EDI cmp dword ptr [edi], esp
#define CMP_ESP_TO_PTR_ESI cmp dword ptr [esi], esp
#define CMP_ESP_TO_PTR_EBP cmp dword ptr [ebp], esp
#define CMP_ESP_TO_PTR_ESP cmp dword ptr [esp], esp

#define CMP_R8D_TO_PTR_RAX cmp dword ptr [rax], r8d
#define CMP_R8D_TO_PTR_RBX cmp dword ptr [rbx], r8d
#define CMP_R8D_TO_PTR_RCX cmp dword ptr [rcx], r8d
#define CMP_R8D_TO_PTR_RDX cmp dword ptr [rdx], r8d
#define CMP_R8D_TO_PTR_RDI cmp dword ptr [rdi], r8d
#define CMP_R8D_TO_PTR_RSI cmp dword ptr [rsi], r8d
#define CMP_R8D_TO_PTR_RBP cmp dword ptr [rbp], r8d
#define CMP_R8D_TO_PTR_RSP cmp dword ptr [rsp], r8d
#define CMP_R8D_TO_PTR_R8 cmp dword ptr [r8], r8d
#define CMP_R8D_TO_PTR_R9 cmp dword ptr [r9], r8d
#define CMP_R8D_TO_PTR_R10 cmp dword ptr [r10], r8d
#define CMP_R8D_TO_PTR_R11 cmp dword ptr [r11], r8d
#define CMP_R8D_TO_PTR_R12 cmp dword ptr [r12], r8d
#define CMP_R8D_TO_PTR_R13 cmp dword ptr [r13], r8d
#define CMP_R8D_TO_PTR_R14 cmp dword ptr [r14], r8d
#define CMP_R8D_TO_PTR_R15 cmp dword ptr [r15], r8d
#define CMP_R8D_TO_PTR_EAX cmp dword ptr [eax], r8d
#define CMP_R8D_TO_PTR_EBX cmp dword ptr [ebx], r8d
#define CMP_R8D_TO_PTR_ECX cmp dword ptr [ecx], r8d
#define CMP_R8D_TO_PTR_EDX cmp dword ptr [edx], r8d
#define CMP_R8D_TO_PTR_EDI cmp dword ptr [edi], r8d
#define CMP_R8D_TO_PTR_ESI cmp dword ptr [esi], r8d
#define CMP_R8D_TO_PTR_EBP cmp dword ptr [ebp], r8d
#define CMP_R8D_TO_PTR_ESP cmp dword ptr [esp], r8d

#define CMP_R9D_TO_PTR_RAX cmp dword ptr [rax], r9d
#define CMP_R9D_TO_PTR_RBX cmp dword ptr [rbx], r9d
#define CMP_R9D_TO_PTR_RCX cmp dword ptr [rcx], r9d
#define CMP_R9D_TO_PTR_RDX cmp dword ptr [rdx], r9d
#define CMP_R9D_TO_PTR_RDI cmp dword ptr [rdi], r9d
#define CMP_R9D_TO_PTR_RSI cmp dword ptr [rsi], r9d
#define CMP_R9D_TO_PTR_RBP cmp dword ptr [rbp], r9d
#define CMP_R9D_TO_PTR_RSP cmp dword ptr [rsp], r9d
#define CMP_R9D_TO_PTR_R8 cmp dword ptr [r8], r9d
#define CMP_R9D_TO_PTR_R9 cmp dword ptr [r9], r9d
#define CMP_R9D_TO_PTR_R10 cmp dword ptr [r10], r9d
#define CMP_R9D_TO_PTR_R11 cmp dword ptr [r11], r9d
#define CMP_R9D_TO_PTR_R12 cmp dword ptr [r12], r9d
#define CMP_R9D_TO_PTR_R13 cmp dword ptr [r13], r9d
#define CMP_R9D_TO_PTR_R14 cmp dword ptr [r14], r9d
#define CMP_R9D_TO_PTR_R15 cmp dword ptr [r15], r9d
#define CMP_R9D_TO_PTR_EAX cmp dword ptr [eax], r9d
#define CMP_R9D_TO_PTR_EBX cmp dword ptr [ebx], r9d
#define CMP_R9D_TO_PTR_ECX cmp dword ptr [ecx], r9d
#define CMP_R9D_TO_PTR_EDX cmp dword ptr [edx], r9d
#define CMP_R9D_TO_PTR_EDI cmp dword ptr [edi], r9d
#define CMP_R9D_TO_PTR_ESI cmp dword ptr [esi], r9d
#define CMP_R9D_TO_PTR_EBP cmp dword ptr [ebp], r9d
#define CMP_R9D_TO_PTR_ESP cmp dword ptr [esp], r9d

#define CMP_R10D_TO_PTR_RAX cmp dword ptr [rax], r10d
#define CMP_R10D_TO_PTR_RBX cmp dword ptr [rbx], r10d
#define CMP_R10D_TO_PTR_RCX cmp dword ptr [rcx], r10d
#define CMP_R10D_TO_PTR_RDX cmp dword ptr [rdx], r10d
#define CMP_R10D_TO_PTR_RDI cmp dword ptr [rdi], r10d
#define CMP_R10D_TO_PTR_RSI cmp dword ptr [rsi], r10d
#define CMP_R10D_TO_PTR_RBP cmp dword ptr [rbp], r10d
#define CMP_R10D_TO_PTR_RSP cmp dword ptr [rsp], r10d
#define CMP_R10D_TO_PTR_R8 cmp dword ptr [r8], r10d
#define CMP_R10D_TO_PTR_R9 cmp dword ptr [r9], r10d
#define CMP_R10D_TO_PTR_R10 cmp dword ptr [r10], r10d
#define CMP_R10D_TO_PTR_R11 cmp dword ptr [r11], r10d
#define CMP_R10D_TO_PTR_R12 cmp dword ptr [r12], r10d
#define CMP_R10D_TO_PTR_R13 cmp dword ptr [r13], r10d
#define CMP_R10D_TO_PTR_R14 cmp dword ptr [r14], r10d
#define CMP_R10D_TO_PTR_R15 cmp dword ptr [r15], r10d
#define CMP_R10D_TO_PTR_EAX cmp dword ptr [eax], r10d
#define CMP_R10D_TO_PTR_EBX cmp dword ptr [ebx], r10d
#define CMP_R10D_TO_PTR_ECX cmp dword ptr [ecx], r10d
#define CMP_R10D_TO_PTR_EDX cmp dword ptr [edx], r10d
#define CMP_R10D_TO_PTR_EDI cmp dword ptr [edi], r10d
#define CMP_R10D_TO_PTR_ESI cmp dword ptr [esi], r10d
#define CMP_R10D_TO_PTR_EBP cmp dword ptr [ebp], r10d
#define CMP_R10D_TO_PTR_ESP cmp dword ptr [esp], r10d

#define CMP_R11D_TO_PTR_RAX cmp dword ptr [rax], r11d
#define CMP_R11D_TO_PTR_RBX cmp dword ptr [rbx], r11d
#define CMP_R11D_TO_PTR_RCX cmp dword ptr [rcx], r11d
#define CMP_R11D_TO_PTR_RDX cmp dword ptr [rdx], r11d
#define CMP_R11D_TO_PTR_RDI cmp dword ptr [rdi], r11d
#define CMP_R11D_TO_PTR_RSI cmp dword ptr [rsi], r11d
#define CMP_R11D_TO_PTR_RBP cmp dword ptr [rbp], r11d
#define CMP_R11D_TO_PTR_RSP cmp dword ptr [rsp], r11d
#define CMP_R11D_TO_PTR_R8 cmp dword ptr [r8], r11d
#define CMP_R11D_TO_PTR_R9 cmp dword ptr [r9], r11d
#define CMP_R11D_TO_PTR_R10 cmp dword ptr [r10], r11d
#define CMP_R11D_TO_PTR_R11 cmp dword ptr [r11], r11d
#define CMP_R11D_TO_PTR_R12 cmp dword ptr [r12], r11d
#define CMP_R11D_TO_PTR_R13 cmp dword ptr [r13], r11d
#define CMP_R11D_TO_PTR_R14 cmp dword ptr [r14], r11d
#define CMP_R11D_TO_PTR_R15 cmp dword ptr [r15], r11d
#define CMP_R11D_TO_PTR_EAX cmp dword ptr [eax], r11d
#define CMP_R11D_TO_PTR_EBX cmp dword ptr [ebx], r11d
#define CMP_R11D_TO_PTR_ECX cmp dword ptr [ecx], r11d
#define CMP_R11D_TO_PTR_EDX cmp dword ptr [edx], r11d
#define CMP_R11D_TO_PTR_EDI cmp dword ptr [edi], r11d
#define CMP_R11D_TO_PTR_ESI cmp dword ptr [esi], r11d
#define CMP_R11D_TO_PTR_EBP cmp dword ptr [ebp], r11d
#define CMP_R11D_TO_PTR_ESP cmp dword ptr [esp], r11d

#define CMP_R12D_TO_PTR_RAX cmp dword ptr [rax], r12d
#define CMP_R12D_TO_PTR_RBX cmp dword ptr [rbx], r12d
#define CMP_R12D_TO_PTR_RCX cmp dword ptr [rcx], r12d
#define CMP_R12D_TO_PTR_RDX cmp dword ptr [rdx], r12d
#define CMP_R12D_TO_PTR_RDI cmp dword ptr [rdi], r12d
#define CMP_R12D_TO_PTR_RSI cmp dword ptr [rsi], r12d
#define CMP_R12D_TO_PTR_RBP cmp dword ptr [rbp], r12d
#define CMP_R12D_TO_PTR_RSP cmp dword ptr [rsp], r12d
#define CMP_R12D_TO_PTR_R8 cmp dword ptr [r8], r12d
#define CMP_R12D_TO_PTR_R9 cmp dword ptr [r9], r12d
#define CMP_R12D_TO_PTR_R10 cmp dword ptr [r10], r12d
#define CMP_R12D_TO_PTR_R11 cmp dword ptr [r11], r12d
#define CMP_R12D_TO_PTR_R12 cmp dword ptr [r12], r12d
#define CMP_R12D_TO_PTR_R13 cmp dword ptr [r13], r12d
#define CMP_R12D_TO_PTR_R14 cmp dword ptr [r14], r12d
#define CMP_R12D_TO_PTR_R15 cmp dword ptr [r15], r12d
#define CMP_R12D_TO_PTR_EAX cmp dword ptr [eax], r12d
#define CMP_R12D_TO_PTR_EBX cmp dword ptr [ebx], r12d
#define CMP_R12D_TO_PTR_ECX cmp dword ptr [ecx], r12d
#define CMP_R12D_TO_PTR_EDX cmp dword ptr [edx], r12d
#define CMP_R12D_TO_PTR_EDI cmp dword ptr [edi], r12d
#define CMP_R12D_TO_PTR_ESI cmp dword ptr [esi], r12d
#define CMP_R12D_TO_PTR_EBP cmp dword ptr [ebp], r12d
#define CMP_R12D_TO_PTR_ESP cmp dword ptr [esp], r12d

#define CMP_R13D_TO_PTR_RAX cmp dword ptr [rax], r13d
#define CMP_R13D_TO_PTR_RBX cmp dword ptr [rbx], r13d
#define CMP_R13D_TO_PTR_RCX cmp dword ptr [rcx], r13d
#define CMP_R13D_TO_PTR_RDX cmp dword ptr [rdx], r13d
#define CMP_R13D_TO_PTR_RDI cmp dword ptr [rdi], r13d
#define CMP_R13D_TO_PTR_RSI cmp dword ptr [rsi], r13d
#define CMP_R13D_TO_PTR_RBP cmp dword ptr [rbp], r13d
#define CMP_R13D_TO_PTR_RSP cmp dword ptr [rsp], r13d
#define CMP_R13D_TO_PTR_R8 cmp dword ptr [r8], r13d
#define CMP_R13D_TO_PTR_R9 cmp dword ptr [r9], r13d
#define CMP_R13D_TO_PTR_R10 cmp dword ptr [r10], r13d
#define CMP_R13D_TO_PTR_R11 cmp dword ptr [r11], r13d
#define CMP_R13D_TO_PTR_R12 cmp dword ptr [r12], r13d
#define CMP_R13D_TO_PTR_R13 cmp dword ptr [r13], r13d
#define CMP_R13D_TO_PTR_R14 cmp dword ptr [r14], r13d
#define CMP_R13D_TO_PTR_R15 cmp dword ptr [r15], r13d
#define CMP_R13D_TO_PTR_EAX cmp dword ptr [eax], r13d
#define CMP_R13D_TO_PTR_EBX cmp dword ptr [ebx], r13d
#define CMP_R13D_TO_PTR_ECX cmp dword ptr [ecx], r13d
#define CMP_R13D_TO_PTR_EDX cmp dword ptr [edx], r13d
#define CMP_R13D_TO_PTR_EDI cmp dword ptr [edi], r13d
#define CMP_R13D_TO_PTR_ESI cmp dword ptr [esi], r13d
#define CMP_R13D_TO_PTR_EBP cmp dword ptr [ebp], r13d
#define CMP_R13D_TO_PTR_ESP cmp dword ptr [esp], r13d

#define CMP_R14D_TO_PTR_RAX cmp dword ptr [rax], r14d
#define CMP_R14D_TO_PTR_RBX cmp dword ptr [rbx], r14d
#define CMP_R14D_TO_PTR_RCX cmp dword ptr [rcx], r14d
#define CMP_R14D_TO_PTR_RDX cmp dword ptr [rdx], r14d
#define CMP_R14D_TO_PTR_RDI cmp dword ptr [rdi], r14d
#define CMP_R14D_TO_PTR_RSI cmp dword ptr [rsi], r14d
#define CMP_R14D_TO_PTR_RBP cmp dword ptr [rbp], r14d
#define CMP_R14D_TO_PTR_RSP cmp dword ptr [rsp], r14d
#define CMP_R14D_TO_PTR_R8 cmp dword ptr [r8], r14d
#define CMP_R14D_TO_PTR_R9 cmp dword ptr [r9], r14d
#define CMP_R14D_TO_PTR_R10 cmp dword ptr [r10], r14d
#define CMP_R14D_TO_PTR_R11 cmp dword ptr [r11], r14d
#define CMP_R14D_TO_PTR_R12 cmp dword ptr [r12], r14d
#define CMP_R14D_TO_PTR_R13 cmp dword ptr [r13], r14d
#define CMP_R14D_TO_PTR_R14 cmp dword ptr [r14], r14d
#define CMP_R14D_TO_PTR_R15 cmp dword ptr [r15], r14d
#define CMP_R14D_TO_PTR_EAX cmp dword ptr [eax], r14d
#define CMP_R14D_TO_PTR_EBX cmp dword ptr [ebx], r14d
#define CMP_R14D_TO_PTR_ECX cmp dword ptr [ecx], r14d
#define CMP_R14D_TO_PTR_EDX cmp dword ptr [edx], r14d
#define CMP_R14D_TO_PTR_EDI cmp dword ptr [edi], r14d
#define CMP_R14D_TO_PTR_ESI cmp dword ptr [esi], r14d
#define CMP_R14D_TO_PTR_EBP cmp dword ptr [ebp], r14d
#define CMP_R14D_TO_PTR_ESP cmp dword ptr [esp], r14d

#define CMP_R15D_TO_PTR_RAX cmp dword ptr [rax], r15d
#define CMP_R15D_TO_PTR_RBX cmp dword ptr [rbx], r15d
#define CMP_R15D_TO_PTR_RCX cmp dword ptr [rcx], r15d
#define CMP_R15D_TO_PTR_RDX cmp dword ptr [rdx], r15d
#define CMP_R15D_TO_PTR_RDI cmp dword ptr [rdi], r15d
#define CMP_R15D_TO_PTR_RSI cmp dword ptr [rsi], r15d
#define CMP_R15D_TO_PTR_RBP cmp dword ptr [rbp], r15d
#define CMP_R15D_TO_PTR_RSP cmp dword ptr [rsp], r15d
#define CMP_R15D_TO_PTR_R8 cmp dword ptr [r8], r15d
#define CMP_R15D_TO_PTR_R9 cmp dword ptr [r9], r15d
#define CMP_R15D_TO_PTR_R10 cmp dword ptr [r10], r15d
#define CMP_R15D_TO_PTR_R11 cmp dword ptr [r11], r15d
#define CMP_R15D_TO_PTR_R12 cmp dword ptr [r12], r15d
#define CMP_R15D_TO_PTR_R13 cmp dword ptr [r13], r15d
#define CMP_R15D_TO_PTR_R14 cmp dword ptr [r14], r15d
#define CMP_R15D_TO_PTR_R15 cmp dword ptr [r15], r15d
#define CMP_R15D_TO_PTR_EAX cmp dword ptr [eax], r15d
#define CMP_R15D_TO_PTR_EBX cmp dword ptr [ebx], r15d
#define CMP_R15D_TO_PTR_ECX cmp dword ptr [ecx], r15d
#define CMP_R15D_TO_PTR_EDX cmp dword ptr [edx], r15d
#define CMP_R15D_TO_PTR_EDI cmp dword ptr [edi], r15d
#define CMP_R15D_TO_PTR_ESI cmp dword ptr [esi], r15d
#define CMP_R15D_TO_PTR_EBP cmp dword ptr [ebp], r15d
#define CMP_R15D_TO_PTR_ESP cmp dword ptr [esp], r15d

#define CMP_EAX_FROM_PTR_RAX_(VALUE) cmp eax, dword ptr [rax + VALUE]
#define CMP_EAX_FROM_PTR_RBX_(VALUE) cmp eax, dword ptr [rbx + VALUE]
#define CMP_EAX_FROM_PTR_RCX_(VALUE) cmp eax, dword ptr [rcx + VALUE]
#define CMP_EAX_FROM_PTR_RDX_(VALUE) cmp eax, dword ptr [rdx + VALUE]
#define CMP_EAX_FROM_PTR_RDI_(VALUE) cmp eax, dword ptr [rdi + VALUE]
#define CMP_EAX_FROM_PTR_RSI_(VALUE) cmp eax, dword ptr [rsi + VALUE]
#define CMP_EAX_FROM_PTR_RBP_(VALUE) cmp eax, dword ptr [rbp + VALUE]
#define CMP_EAX_FROM_PTR_RSP_(VALUE) cmp eax, dword ptr [rsp + VALUE]
#define CMP_EAX_FROM_PTR_R8_(VALUE) cmp eax, dword ptr [r8 + VALUE]
#define CMP_EAX_FROM_PTR_R9_(VALUE) cmp eax, dword ptr [r9 + VALUE]
#define CMP_EAX_FROM_PTR_R10_(VALUE) cmp eax, dword ptr [r10 + VALUE]
#define CMP_EAX_FROM_PTR_R11_(VALUE) cmp eax, dword ptr [r11 + VALUE]
#define CMP_EAX_FROM_PTR_R12_(VALUE) cmp eax, dword ptr [r12 + VALUE]
#define CMP_EAX_FROM_PTR_R13_(VALUE) cmp eax, dword ptr [r13 + VALUE]
#define CMP_EAX_FROM_PTR_R14_(VALUE) cmp eax, dword ptr [r14 + VALUE]
#define CMP_EAX_FROM_PTR_R15_(VALUE) cmp eax, dword ptr [r15 + VALUE]
#define CMP_EAX_FROM_PTR_EAX_(VALUE) cmp eax, dword ptr [eax + VALUE]
#define CMP_EAX_FROM_PTR_EBX_(VALUE) cmp eax, dword ptr [ebx + VALUE]
#define CMP_EAX_FROM_PTR_ECX_(VALUE) cmp eax, dword ptr [ecx + VALUE]
#define CMP_EAX_FROM_PTR_EDX_(VALUE) cmp eax, dword ptr [edx + VALUE]
#define CMP_EAX_FROM_PTR_EDI_(VALUE) cmp eax, dword ptr [edi + VALUE]
#define CMP_EAX_FROM_PTR_ESI_(VALUE) cmp eax, dword ptr [esi + VALUE]
#define CMP_EAX_FROM_PTR_EBP_(VALUE) cmp eax, dword ptr [ebp + VALUE]
#define CMP_EAX_FROM_PTR_ESP_(VALUE) cmp eax, dword ptr [esp + VALUE]

#define CMP_EBX_FROM_PTR_RAX_(VALUE) cmp ebx, dword ptr [rax + VALUE]
#define CMP_EBX_FROM_PTR_RBX_(VALUE) cmp ebx, dword ptr [rbx + VALUE]
#define CMP_EBX_FROM_PTR_RCX_(VALUE) cmp ebx, dword ptr [rcx + VALUE]
#define CMP_EBX_FROM_PTR_RDX_(VALUE) cmp ebx, dword ptr [rdx + VALUE]
#define CMP_EBX_FROM_PTR_RDI_(VALUE) cmp ebx, dword ptr [rdi + VALUE]
#define CMP_EBX_FROM_PTR_RSI_(VALUE) cmp ebx, dword ptr [rsi + VALUE]
#define CMP_EBX_FROM_PTR_RBP_(VALUE) cmp ebx, dword ptr [rbp + VALUE]
#define CMP_EBX_FROM_PTR_RSP_(VALUE) cmp ebx, dword ptr [rsp + VALUE]
#define CMP_EBX_FROM_PTR_R8_(VALUE) cmp ebx, dword ptr [r8 + VALUE]
#define CMP_EBX_FROM_PTR_R9_(VALUE) cmp ebx, dword ptr [r9 + VALUE]
#define CMP_EBX_FROM_PTR_R10_(VALUE) cmp ebx, dword ptr [r10 + VALUE]
#define CMP_EBX_FROM_PTR_R11_(VALUE) cmp ebx, dword ptr [r11 + VALUE]
#define CMP_EBX_FROM_PTR_R12_(VALUE) cmp ebx, dword ptr [r12 + VALUE]
#define CMP_EBX_FROM_PTR_R13_(VALUE) cmp ebx, dword ptr [r13 + VALUE]
#define CMP_EBX_FROM_PTR_R14_(VALUE) cmp ebx, dword ptr [r14 + VALUE]
#define CMP_EBX_FROM_PTR_R15_(VALUE) cmp ebx, dword ptr [r15 + VALUE]
#define CMP_EBX_FROM_PTR_EAX_(VALUE) cmp ebx, dword ptr [eax + VALUE]
#define CMP_EBX_FROM_PTR_EBX_(VALUE) cmp ebx, dword ptr [ebx + VALUE]
#define CMP_EBX_FROM_PTR_ECX_(VALUE) cmp ebx, dword ptr [ecx + VALUE]
#define CMP_EBX_FROM_PTR_EDX_(VALUE) cmp ebx, dword ptr [edx + VALUE]
#define CMP_EBX_FROM_PTR_EDI_(VALUE) cmp ebx, dword ptr [edi + VALUE]
#define CMP_EBX_FROM_PTR_ESI_(VALUE) cmp ebx, dword ptr [esi + VALUE]
#define CMP_EBX_FROM_PTR_EBP_(VALUE) cmp ebx, dword ptr [ebp + VALUE]
#define CMP_EBX_FROM_PTR_ESP_(VALUE) cmp ebx, dword ptr [esp + VALUE]

#define CMP_ECX_FROM_PTR_RAX_(VALUE) cmp ecx, dword ptr [rax + VALUE]
#define CMP_ECX_FROM_PTR_RBX_(VALUE) cmp ecx, dword ptr [rbx + VALUE]
#define CMP_ECX_FROM_PTR_RCX_(VALUE) cmp ecx, dword ptr [rcx + VALUE]
#define CMP_ECX_FROM_PTR_RDX_(VALUE) cmp ecx, dword ptr [rdx + VALUE]
#define CMP_ECX_FROM_PTR_RDI_(VALUE) cmp ecx, dword ptr [rdi + VALUE]
#define CMP_ECX_FROM_PTR_RSI_(VALUE) cmp ecx, dword ptr [rsi + VALUE]
#define CMP_ECX_FROM_PTR_RBP_(VALUE) cmp ecx, dword ptr [rbp + VALUE]
#define CMP_ECX_FROM_PTR_RSP_(VALUE) cmp ecx, dword ptr [rsp + VALUE]
#define CMP_ECX_FROM_PTR_R8_(VALUE) cmp ecx, dword ptr [r8 + VALUE]
#define CMP_ECX_FROM_PTR_R9_(VALUE) cmp ecx, dword ptr [r9 + VALUE]
#define CMP_ECX_FROM_PTR_R10_(VALUE) cmp ecx, dword ptr [r10 + VALUE]
#define CMP_ECX_FROM_PTR_R11_(VALUE) cmp ecx, dword ptr [r11 + VALUE]
#define CMP_ECX_FROM_PTR_R12_(VALUE) cmp ecx, dword ptr [r12 + VALUE]
#define CMP_ECX_FROM_PTR_R13_(VALUE) cmp ecx, dword ptr [r13 + VALUE]
#define CMP_ECX_FROM_PTR_R14_(VALUE) cmp ecx, dword ptr [r14 + VALUE]
#define CMP_ECX_FROM_PTR_R15_(VALUE) cmp ecx, dword ptr [r15 + VALUE]
#define CMP_ECX_FROM_PTR_EAX_(VALUE) cmp ecx, dword ptr [eax + VALUE]
#define CMP_ECX_FROM_PTR_EBX_(VALUE) cmp ecx, dword ptr [ebx + VALUE]
#define CMP_ECX_FROM_PTR_ECX_(VALUE) cmp ecx, dword ptr [ecx + VALUE]
#define CMP_ECX_FROM_PTR_EDX_(VALUE) cmp ecx, dword ptr [edx + VALUE]
#define CMP_ECX_FROM_PTR_EDI_(VALUE) cmp ecx, dword ptr [edi + VALUE]
#define CMP_ECX_FROM_PTR_ESI_(VALUE) cmp ecx, dword ptr [esi + VALUE]
#define CMP_ECX_FROM_PTR_EBP_(VALUE) cmp ecx, dword ptr [ebp + VALUE]
#define CMP_ECX_FROM_PTR_ESP_(VALUE) cmp ecx, dword ptr [esp + VALUE]

#define CMP_EDX_FROM_PTR_RAX_(VALUE) cmp edx, dword ptr [rax + VALUE]
#define CMP_EDX_FROM_PTR_RBX_(VALUE) cmp edx, dword ptr [rbx + VALUE]
#define CMP_EDX_FROM_PTR_RCX_(VALUE) cmp edx, dword ptr [rcx + VALUE]
#define CMP_EDX_FROM_PTR_RDX_(VALUE) cmp edx, dword ptr [rdx + VALUE]
#define CMP_EDX_FROM_PTR_RDI_(VALUE) cmp edx, dword ptr [rdi + VALUE]
#define CMP_EDX_FROM_PTR_RSI_(VALUE) cmp edx, dword ptr [rsi + VALUE]
#define CMP_EDX_FROM_PTR_RBP_(VALUE) cmp edx, dword ptr [rbp + VALUE]
#define CMP_EDX_FROM_PTR_RSP_(VALUE) cmp edx, dword ptr [rsp + VALUE]
#define CMP_EDX_FROM_PTR_R8_(VALUE) cmp edx, dword ptr [r8 + VALUE]
#define CMP_EDX_FROM_PTR_R9_(VALUE) cmp edx, dword ptr [r9 + VALUE]
#define CMP_EDX_FROM_PTR_R10_(VALUE) cmp edx, dword ptr [r10 + VALUE]
#define CMP_EDX_FROM_PTR_R11_(VALUE) cmp edx, dword ptr [r11 + VALUE]
#define CMP_EDX_FROM_PTR_R12_(VALUE) cmp edx, dword ptr [r12 + VALUE]
#define CMP_EDX_FROM_PTR_R13_(VALUE) cmp edx, dword ptr [r13 + VALUE]
#define CMP_EDX_FROM_PTR_R14_(VALUE) cmp edx, dword ptr [r14 + VALUE]
#define CMP_EDX_FROM_PTR_R15_(VALUE) cmp edx, dword ptr [r15 + VALUE]
#define CMP_EDX_FROM_PTR_EAX_(VALUE) cmp edx, dword ptr [eax + VALUE]
#define CMP_EDX_FROM_PTR_EBX_(VALUE) cmp edx, dword ptr [ebx + VALUE]
#define CMP_EDX_FROM_PTR_ECX_(VALUE) cmp edx, dword ptr [ecx + VALUE]
#define CMP_EDX_FROM_PTR_EDX_(VALUE) cmp edx, dword ptr [edx + VALUE]
#define CMP_EDX_FROM_PTR_EDI_(VALUE) cmp edx, dword ptr [edi + VALUE]
#define CMP_EDX_FROM_PTR_ESI_(VALUE) cmp edx, dword ptr [esi + VALUE]
#define CMP_EDX_FROM_PTR_EBP_(VALUE) cmp edx, dword ptr [ebp + VALUE]
#define CMP_EDX_FROM_PTR_ESP_(VALUE) cmp edx, dword ptr [esp + VALUE]

#define CMP_EDI_FROM_PTR_RAX_(VALUE) cmp edi, dword ptr [rax + VALUE]
#define CMP_EDI_FROM_PTR_RBX_(VALUE) cmp edi, dword ptr [rbx + VALUE]
#define CMP_EDI_FROM_PTR_RCX_(VALUE) cmp edi, dword ptr [rcx + VALUE]
#define CMP_EDI_FROM_PTR_RDX_(VALUE) cmp edi, dword ptr [rdx + VALUE]
#define CMP_EDI_FROM_PTR_RDI_(VALUE) cmp edi, dword ptr [rdi + VALUE]
#define CMP_EDI_FROM_PTR_RSI_(VALUE) cmp edi, dword ptr [rsi + VALUE]
#define CMP_EDI_FROM_PTR_RBP_(VALUE) cmp edi, dword ptr [rbp + VALUE]
#define CMP_EDI_FROM_PTR_RSP_(VALUE) cmp edi, dword ptr [rsp + VALUE]
#define CMP_EDI_FROM_PTR_R8_(VALUE) cmp edi, dword ptr [r8 + VALUE]
#define CMP_EDI_FROM_PTR_R9_(VALUE) cmp edi, dword ptr [r9 + VALUE]
#define CMP_EDI_FROM_PTR_R10_(VALUE) cmp edi, dword ptr [r10 + VALUE]
#define CMP_EDI_FROM_PTR_R11_(VALUE) cmp edi, dword ptr [r11 + VALUE]
#define CMP_EDI_FROM_PTR_R12_(VALUE) cmp edi, dword ptr [r12 + VALUE]
#define CMP_EDI_FROM_PTR_R13_(VALUE) cmp edi, dword ptr [r13 + VALUE]
#define CMP_EDI_FROM_PTR_R14_(VALUE) cmp edi, dword ptr [r14 + VALUE]
#define CMP_EDI_FROM_PTR_R15_(VALUE) cmp edi, dword ptr [r15 + VALUE]
#define CMP_EDI_FROM_PTR_EAX_(VALUE) cmp edi, dword ptr [eax + VALUE]
#define CMP_EDI_FROM_PTR_EBX_(VALUE) cmp edi, dword ptr [ebx + VALUE]
#define CMP_EDI_FROM_PTR_ECX_(VALUE) cmp edi, dword ptr [ecx + VALUE]
#define CMP_EDI_FROM_PTR_EDX_(VALUE) cmp edi, dword ptr [edx + VALUE]
#define CMP_EDI_FROM_PTR_EDI_(VALUE) cmp edi, dword ptr [edi + VALUE]
#define CMP_EDI_FROM_PTR_ESI_(VALUE) cmp edi, dword ptr [esi + VALUE]
#define CMP_EDI_FROM_PTR_EBP_(VALUE) cmp edi, dword ptr [ebp + VALUE]
#define CMP_EDI_FROM_PTR_ESP_(VALUE) cmp edi, dword ptr [esp + VALUE]

#define CMP_ESI_FROM_PTR_RAX_(VALUE) cmp esi, dword ptr [rax + VALUE]
#define CMP_ESI_FROM_PTR_RBX_(VALUE) cmp esi, dword ptr [rbx + VALUE]
#define CMP_ESI_FROM_PTR_RCX_(VALUE) cmp esi, dword ptr [rcx + VALUE]
#define CMP_ESI_FROM_PTR_RDX_(VALUE) cmp esi, dword ptr [rdx + VALUE]
#define CMP_ESI_FROM_PTR_RDI_(VALUE) cmp esi, dword ptr [rdi + VALUE]
#define CMP_ESI_FROM_PTR_RSI_(VALUE) cmp esi, dword ptr [rsi + VALUE]
#define CMP_ESI_FROM_PTR_RBP_(VALUE) cmp esi, dword ptr [rbp + VALUE]
#define CMP_ESI_FROM_PTR_RSP_(VALUE) cmp esi, dword ptr [rsp + VALUE]
#define CMP_ESI_FROM_PTR_R8_(VALUE) cmp esi, dword ptr [r8 + VALUE]
#define CMP_ESI_FROM_PTR_R9_(VALUE) cmp esi, dword ptr [r9 + VALUE]
#define CMP_ESI_FROM_PTR_R10_(VALUE) cmp esi, dword ptr [r10 + VALUE]
#define CMP_ESI_FROM_PTR_R11_(VALUE) cmp esi, dword ptr [r11 + VALUE]
#define CMP_ESI_FROM_PTR_R12_(VALUE) cmp esi, dword ptr [r12 + VALUE]
#define CMP_ESI_FROM_PTR_R13_(VALUE) cmp esi, dword ptr [r13 + VALUE]
#define CMP_ESI_FROM_PTR_R14_(VALUE) cmp esi, dword ptr [r14 + VALUE]
#define CMP_ESI_FROM_PTR_R15_(VALUE) cmp esi, dword ptr [r15 + VALUE]
#define CMP_ESI_FROM_PTR_EAX_(VALUE) cmp esi, dword ptr [eax + VALUE]
#define CMP_ESI_FROM_PTR_EBX_(VALUE) cmp esi, dword ptr [ebx + VALUE]
#define CMP_ESI_FROM_PTR_ECX_(VALUE) cmp esi, dword ptr [ecx + VALUE]
#define CMP_ESI_FROM_PTR_EDX_(VALUE) cmp esi, dword ptr [edx + VALUE]
#define CMP_ESI_FROM_PTR_EDI_(VALUE) cmp esi, dword ptr [edi + VALUE]
#define CMP_ESI_FROM_PTR_ESI_(VALUE) cmp esi, dword ptr [esi + VALUE]
#define CMP_ESI_FROM_PTR_EBP_(VALUE) cmp esi, dword ptr [ebp + VALUE]
#define CMP_ESI_FROM_PTR_ESP_(VALUE) cmp esi, dword ptr [esp + VALUE]

#define CMP_EBP_FROM_PTR_RAX_(VALUE) cmp ebp, dword ptr [rax + VALUE]
#define CMP_EBP_FROM_PTR_RBX_(VALUE) cmp ebp, dword ptr [rbx + VALUE]
#define CMP_EBP_FROM_PTR_RCX_(VALUE) cmp ebp, dword ptr [rcx + VALUE]
#define CMP_EBP_FROM_PTR_RDX_(VALUE) cmp ebp, dword ptr [rdx + VALUE]
#define CMP_EBP_FROM_PTR_RDI_(VALUE) cmp ebp, dword ptr [rdi + VALUE]
#define CMP_EBP_FROM_PTR_RSI_(VALUE) cmp ebp, dword ptr [rsi + VALUE]
#define CMP_EBP_FROM_PTR_RBP_(VALUE) cmp ebp, dword ptr [rbp + VALUE]
#define CMP_EBP_FROM_PTR_RSP_(VALUE) cmp ebp, dword ptr [rsp + VALUE]
#define CMP_EBP_FROM_PTR_R8_(VALUE) cmp ebp, dword ptr [r8 + VALUE]
#define CMP_EBP_FROM_PTR_R9_(VALUE) cmp ebp, dword ptr [r9 + VALUE]
#define CMP_EBP_FROM_PTR_R10_(VALUE) cmp ebp, dword ptr [r10 + VALUE]
#define CMP_EBP_FROM_PTR_R11_(VALUE) cmp ebp, dword ptr [r11 + VALUE]
#define CMP_EBP_FROM_PTR_R12_(VALUE) cmp ebp, dword ptr [r12 + VALUE]
#define CMP_EBP_FROM_PTR_R13_(VALUE) cmp ebp, dword ptr [r13 + VALUE]
#define CMP_EBP_FROM_PTR_R14_(VALUE) cmp ebp, dword ptr [r14 + VALUE]
#define CMP_EBP_FROM_PTR_R15_(VALUE) cmp ebp, dword ptr [r15 + VALUE]
#define CMP_EBP_FROM_PTR_EAX_(VALUE) cmp ebp, dword ptr [eax + VALUE]
#define CMP_EBP_FROM_PTR_EBX_(VALUE) cmp ebp, dword ptr [ebx + VALUE]
#define CMP_EBP_FROM_PTR_ECX_(VALUE) cmp ebp, dword ptr [ecx + VALUE]
#define CMP_EBP_FROM_PTR_EDX_(VALUE) cmp ebp, dword ptr [edx + VALUE]
#define CMP_EBP_FROM_PTR_EDI_(VALUE) cmp ebp, dword ptr [edi + VALUE]
#define CMP_EBP_FROM_PTR_ESI_(VALUE) cmp ebp, dword ptr [esi + VALUE]
#define CMP_EBP_FROM_PTR_EBP_(VALUE) cmp ebp, dword ptr [ebp + VALUE]
#define CMP_EBP_FROM_PTR_ESP_(VALUE) cmp ebp, dword ptr [esp + VALUE]

#define CMP_ESP_FROM_PTR_RAX_(VALUE) cmp esp, dword ptr [rax + VALUE]
#define CMP_ESP_FROM_PTR_RBX_(VALUE) cmp esp, dword ptr [rbx + VALUE]
#define CMP_ESP_FROM_PTR_RCX_(VALUE) cmp esp, dword ptr [rcx + VALUE]
#define CMP_ESP_FROM_PTR_RDX_(VALUE) cmp esp, dword ptr [rdx + VALUE]
#define CMP_ESP_FROM_PTR_RDI_(VALUE) cmp esp, dword ptr [rdi + VALUE]
#define CMP_ESP_FROM_PTR_RSI_(VALUE) cmp esp, dword ptr [rsi + VALUE]
#define CMP_ESP_FROM_PTR_RBP_(VALUE) cmp esp, dword ptr [rbp + VALUE]
#define CMP_ESP_FROM_PTR_RSP_(VALUE) cmp esp, dword ptr [rsp + VALUE]
#define CMP_ESP_FROM_PTR_R8_(VALUE) cmp esp, dword ptr [r8 + VALUE]
#define CMP_ESP_FROM_PTR_R9_(VALUE) cmp esp, dword ptr [r9 + VALUE]
#define CMP_ESP_FROM_PTR_R10_(VALUE) cmp esp, dword ptr [r10 + VALUE]
#define CMP_ESP_FROM_PTR_R11_(VALUE) cmp esp, dword ptr [r11 + VALUE]
#define CMP_ESP_FROM_PTR_R12_(VALUE) cmp esp, dword ptr [r12 + VALUE]
#define CMP_ESP_FROM_PTR_R13_(VALUE) cmp esp, dword ptr [r13 + VALUE]
#define CMP_ESP_FROM_PTR_R14_(VALUE) cmp esp, dword ptr [r14 + VALUE]
#define CMP_ESP_FROM_PTR_R15_(VALUE) cmp esp, dword ptr [r15 + VALUE]
#define CMP_ESP_FROM_PTR_EAX_(VALUE) cmp esp, dword ptr [eax + VALUE]
#define CMP_ESP_FROM_PTR_EBX_(VALUE) cmp esp, dword ptr [ebx + VALUE]
#define CMP_ESP_FROM_PTR_ECX_(VALUE) cmp esp, dword ptr [ecx + VALUE]
#define CMP_ESP_FROM_PTR_EDX_(VALUE) cmp esp, dword ptr [edx + VALUE]
#define CMP_ESP_FROM_PTR_EDI_(VALUE) cmp esp, dword ptr [edi + VALUE]
#define CMP_ESP_FROM_PTR_ESI_(VALUE) cmp esp, dword ptr [esi + VALUE]
#define CMP_ESP_FROM_PTR_EBP_(VALUE) cmp esp, dword ptr [ebp + VALUE]
#define CMP_ESP_FROM_PTR_ESP_(VALUE) cmp esp, dword ptr [esp + VALUE]

#define CMP_R8D_FROM_PTR_RAX_(VALUE) cmp r8d, dword ptr [rax + VALUE]
#define CMP_R8D_FROM_PTR_RBX_(VALUE) cmp r8d, dword ptr [rbx + VALUE]
#define CMP_R8D_FROM_PTR_RCX_(VALUE) cmp r8d, dword ptr [rcx + VALUE]
#define CMP_R8D_FROM_PTR_RDX_(VALUE) cmp r8d, dword ptr [rdx + VALUE]
#define CMP_R8D_FROM_PTR_RDI_(VALUE) cmp r8d, dword ptr [rdi + VALUE]
#define CMP_R8D_FROM_PTR_RSI_(VALUE) cmp r8d, dword ptr [rsi + VALUE]
#define CMP_R8D_FROM_PTR_RBP_(VALUE) cmp r8d, dword ptr [rbp + VALUE]
#define CMP_R8D_FROM_PTR_RSP_(VALUE) cmp r8d, dword ptr [rsp + VALUE]
#define CMP_R8D_FROM_PTR_R8_(VALUE) cmp r8d, dword ptr [r8 + VALUE]
#define CMP_R8D_FROM_PTR_R9_(VALUE) cmp r8d, dword ptr [r9 + VALUE]
#define CMP_R8D_FROM_PTR_R10_(VALUE) cmp r8d, dword ptr [r10 + VALUE]
#define CMP_R8D_FROM_PTR_R11_(VALUE) cmp r8d, dword ptr [r11 + VALUE]
#define CMP_R8D_FROM_PTR_R12_(VALUE) cmp r8d, dword ptr [r12 + VALUE]
#define CMP_R8D_FROM_PTR_R13_(VALUE) cmp r8d, dword ptr [r13 + VALUE]
#define CMP_R8D_FROM_PTR_R14_(VALUE) cmp r8d, dword ptr [r14 + VALUE]
#define CMP_R8D_FROM_PTR_R15_(VALUE) cmp r8d, dword ptr [r15 + VALUE]
#define CMP_R8D_FROM_PTR_EAX_(VALUE) cmp r8d, dword ptr [eax + VALUE]
#define CMP_R8D_FROM_PTR_EBX_(VALUE) cmp r8d, dword ptr [ebx + VALUE]
#define CMP_R8D_FROM_PTR_ECX_(VALUE) cmp r8d, dword ptr [ecx + VALUE]
#define CMP_R8D_FROM_PTR_EDX_(VALUE) cmp r8d, dword ptr [edx + VALUE]
#define CMP_R8D_FROM_PTR_EDI_(VALUE) cmp r8d, dword ptr [edi + VALUE]
#define CMP_R8D_FROM_PTR_ESI_(VALUE) cmp r8d, dword ptr [esi + VALUE]
#define CMP_R8D_FROM_PTR_EBP_(VALUE) cmp r8d, dword ptr [ebp + VALUE]
#define CMP_R8D_FROM_PTR_ESP_(VALUE) cmp r8d, dword ptr [esp + VALUE]

#define CMP_R9D_FROM_PTR_RAX_(VALUE) cmp r9d, dword ptr [rax + VALUE]
#define CMP_R9D_FROM_PTR_RBX_(VALUE) cmp r9d, dword ptr [rbx + VALUE]
#define CMP_R9D_FROM_PTR_RCX_(VALUE) cmp r9d, dword ptr [rcx + VALUE]
#define CMP_R9D_FROM_PTR_RDX_(VALUE) cmp r9d, dword ptr [rdx + VALUE]
#define CMP_R9D_FROM_PTR_RDI_(VALUE) cmp r9d, dword ptr [rdi + VALUE]
#define CMP_R9D_FROM_PTR_RSI_(VALUE) cmp r9d, dword ptr [rsi + VALUE]
#define CMP_R9D_FROM_PTR_RBP_(VALUE) cmp r9d, dword ptr [rbp + VALUE]
#define CMP_R9D_FROM_PTR_RSP_(VALUE) cmp r9d, dword ptr [rsp + VALUE]
#define CMP_R9D_FROM_PTR_R8_(VALUE) cmp r9d, dword ptr [r8 + VALUE]
#define CMP_R9D_FROM_PTR_R9_(VALUE) cmp r9d, dword ptr [r9 + VALUE]
#define CMP_R9D_FROM_PTR_R10_(VALUE) cmp r9d, dword ptr [r10 + VALUE]
#define CMP_R9D_FROM_PTR_R11_(VALUE) cmp r9d, dword ptr [r11 + VALUE]
#define CMP_R9D_FROM_PTR_R12_(VALUE) cmp r9d, dword ptr [r12 + VALUE]
#define CMP_R9D_FROM_PTR_R13_(VALUE) cmp r9d, dword ptr [r13 + VALUE]
#define CMP_R9D_FROM_PTR_R14_(VALUE) cmp r9d, dword ptr [r14 + VALUE]
#define CMP_R9D_FROM_PTR_R15_(VALUE) cmp r9d, dword ptr [r15 + VALUE]
#define CMP_R9D_FROM_PTR_EAX_(VALUE) cmp r9d, dword ptr [eax + VALUE]
#define CMP_R9D_FROM_PTR_EBX_(VALUE) cmp r9d, dword ptr [ebx + VALUE]
#define CMP_R9D_FROM_PTR_ECX_(VALUE) cmp r9d, dword ptr [ecx + VALUE]
#define CMP_R9D_FROM_PTR_EDX_(VALUE) cmp r9d, dword ptr [edx + VALUE]
#define CMP_R9D_FROM_PTR_EDI_(VALUE) cmp r9d, dword ptr [edi + VALUE]
#define CMP_R9D_FROM_PTR_ESI_(VALUE) cmp r9d, dword ptr [esi + VALUE]
#define CMP_R9D_FROM_PTR_EBP_(VALUE) cmp r9d, dword ptr [ebp + VALUE]
#define CMP_R9D_FROM_PTR_ESP_(VALUE) cmp r9d, dword ptr [esp + VALUE]

#define CMP_R10D_FROM_PTR_RAX_(VALUE) cmp r10d, dword ptr [rax + VALUE]
#define CMP_R10D_FROM_PTR_RBX_(VALUE) cmp r10d, dword ptr [rbx + VALUE]
#define CMP_R10D_FROM_PTR_RCX_(VALUE) cmp r10d, dword ptr [rcx + VALUE]
#define CMP_R10D_FROM_PTR_RDX_(VALUE) cmp r10d, dword ptr [rdx + VALUE]
#define CMP_R10D_FROM_PTR_RDI_(VALUE) cmp r10d, dword ptr [rdi + VALUE]
#define CMP_R10D_FROM_PTR_RSI_(VALUE) cmp r10d, dword ptr [rsi + VALUE]
#define CMP_R10D_FROM_PTR_RBP_(VALUE) cmp r10d, dword ptr [rbp + VALUE]
#define CMP_R10D_FROM_PTR_RSP_(VALUE) cmp r10d, dword ptr [rsp + VALUE]
#define CMP_R10D_FROM_PTR_R8_(VALUE) cmp r10d, dword ptr [r8 + VALUE]
#define CMP_R10D_FROM_PTR_R9_(VALUE) cmp r10d, dword ptr [r9 + VALUE]
#define CMP_R10D_FROM_PTR_R10_(VALUE) cmp r10d, dword ptr [r10 + VALUE]
#define CMP_R10D_FROM_PTR_R11_(VALUE) cmp r10d, dword ptr [r11 + VALUE]
#define CMP_R10D_FROM_PTR_R12_(VALUE) cmp r10d, dword ptr [r12 + VALUE]
#define CMP_R10D_FROM_PTR_R13_(VALUE) cmp r10d, dword ptr [r13 + VALUE]
#define CMP_R10D_FROM_PTR_R14_(VALUE) cmp r10d, dword ptr [r14 + VALUE]
#define CMP_R10D_FROM_PTR_R15_(VALUE) cmp r10d, dword ptr [r15 + VALUE]
#define CMP_R10D_FROM_PTR_EAX_(VALUE) cmp r10d, dword ptr [eax + VALUE]
#define CMP_R10D_FROM_PTR_EBX_(VALUE) cmp r10d, dword ptr [ebx + VALUE]
#define CMP_R10D_FROM_PTR_ECX_(VALUE) cmp r10d, dword ptr [ecx + VALUE]
#define CMP_R10D_FROM_PTR_EDX_(VALUE) cmp r10d, dword ptr [edx + VALUE]
#define CMP_R10D_FROM_PTR_EDI_(VALUE) cmp r10d, dword ptr [edi + VALUE]
#define CMP_R10D_FROM_PTR_ESI_(VALUE) cmp r10d, dword ptr [esi + VALUE]
#define CMP_R10D_FROM_PTR_EBP_(VALUE) cmp r10d, dword ptr [ebp + VALUE]
#define CMP_R10D_FROM_PTR_ESP_(VALUE) cmp r10d, dword ptr [esp + VALUE]

#define CMP_R11D_FROM_PTR_RAX_(VALUE) cmp r11d, dword ptr [rax + VALUE]
#define CMP_R11D_FROM_PTR_RBX_(VALUE) cmp r11d, dword ptr [rbx + VALUE]
#define CMP_R11D_FROM_PTR_RCX_(VALUE) cmp r11d, dword ptr [rcx + VALUE]
#define CMP_R11D_FROM_PTR_RDX_(VALUE) cmp r11d, dword ptr [rdx + VALUE]
#define CMP_R11D_FROM_PTR_RDI_(VALUE) cmp r11d, dword ptr [rdi + VALUE]
#define CMP_R11D_FROM_PTR_RSI_(VALUE) cmp r11d, dword ptr [rsi + VALUE]
#define CMP_R11D_FROM_PTR_RBP_(VALUE) cmp r11d, dword ptr [rbp + VALUE]
#define CMP_R11D_FROM_PTR_RSP_(VALUE) cmp r11d, dword ptr [rsp + VALUE]
#define CMP_R11D_FROM_PTR_R8_(VALUE) cmp r11d, dword ptr [r8 + VALUE]
#define CMP_R11D_FROM_PTR_R9_(VALUE) cmp r11d, dword ptr [r9 + VALUE]
#define CMP_R11D_FROM_PTR_R10_(VALUE) cmp r11d, dword ptr [r10 + VALUE]
#define CMP_R11D_FROM_PTR_R11_(VALUE) cmp r11d, dword ptr [r11 + VALUE]
#define CMP_R11D_FROM_PTR_R12_(VALUE) cmp r11d, dword ptr [r12 + VALUE]
#define CMP_R11D_FROM_PTR_R13_(VALUE) cmp r11d, dword ptr [r13 + VALUE]
#define CMP_R11D_FROM_PTR_R14_(VALUE) cmp r11d, dword ptr [r14 + VALUE]
#define CMP_R11D_FROM_PTR_R15_(VALUE) cmp r11d, dword ptr [r15 + VALUE]
#define CMP_R11D_FROM_PTR_EAX_(VALUE) cmp r11d, dword ptr [eax + VALUE]
#define CMP_R11D_FROM_PTR_EBX_(VALUE) cmp r11d, dword ptr [ebx + VALUE]
#define CMP_R11D_FROM_PTR_ECX_(VALUE) cmp r11d, dword ptr [ecx + VALUE]
#define CMP_R11D_FROM_PTR_EDX_(VALUE) cmp r11d, dword ptr [edx + VALUE]
#define CMP_R11D_FROM_PTR_EDI_(VALUE) cmp r11d, dword ptr [edi + VALUE]
#define CMP_R11D_FROM_PTR_ESI_(VALUE) cmp r11d, dword ptr [esi + VALUE]
#define CMP_R11D_FROM_PTR_EBP_(VALUE) cmp r11d, dword ptr [ebp + VALUE]
#define CMP_R11D_FROM_PTR_ESP_(VALUE) cmp r11d, dword ptr [esp + VALUE]

#define CMP_R12D_FROM_PTR_RAX_(VALUE) cmp r12d, dword ptr [rax + VALUE]
#define CMP_R12D_FROM_PTR_RBX_(VALUE) cmp r12d, dword ptr [rbx + VALUE]
#define CMP_R12D_FROM_PTR_RCX_(VALUE) cmp r12d, dword ptr [rcx + VALUE]
#define CMP_R12D_FROM_PTR_RDX_(VALUE) cmp r12d, dword ptr [rdx + VALUE]
#define CMP_R12D_FROM_PTR_RDI_(VALUE) cmp r12d, dword ptr [rdi + VALUE]
#define CMP_R12D_FROM_PTR_RSI_(VALUE) cmp r12d, dword ptr [rsi + VALUE]
#define CMP_R12D_FROM_PTR_RBP_(VALUE) cmp r12d, dword ptr [rbp + VALUE]
#define CMP_R12D_FROM_PTR_RSP_(VALUE) cmp r12d, dword ptr [rsp + VALUE]
#define CMP_R12D_FROM_PTR_R8_(VALUE) cmp r12d, dword ptr [r8 + VALUE]
#define CMP_R12D_FROM_PTR_R9_(VALUE) cmp r12d, dword ptr [r9 + VALUE]
#define CMP_R12D_FROM_PTR_R10_(VALUE) cmp r12d, dword ptr [r10 + VALUE]
#define CMP_R12D_FROM_PTR_R11_(VALUE) cmp r12d, dword ptr [r11 + VALUE]
#define CMP_R12D_FROM_PTR_R12_(VALUE) cmp r12d, dword ptr [r12 + VALUE]
#define CMP_R12D_FROM_PTR_R13_(VALUE) cmp r12d, dword ptr [r13 + VALUE]
#define CMP_R12D_FROM_PTR_R14_(VALUE) cmp r12d, dword ptr [r14 + VALUE]
#define CMP_R12D_FROM_PTR_R15_(VALUE) cmp r12d, dword ptr [r15 + VALUE]
#define CMP_R12D_FROM_PTR_EAX_(VALUE) cmp r12d, dword ptr [eax + VALUE]
#define CMP_R12D_FROM_PTR_EBX_(VALUE) cmp r12d, dword ptr [ebx + VALUE]
#define CMP_R12D_FROM_PTR_ECX_(VALUE) cmp r12d, dword ptr [ecx + VALUE]
#define CMP_R12D_FROM_PTR_EDX_(VALUE) cmp r12d, dword ptr [edx + VALUE]
#define CMP_R12D_FROM_PTR_EDI_(VALUE) cmp r12d, dword ptr [edi + VALUE]
#define CMP_R12D_FROM_PTR_ESI_(VALUE) cmp r12d, dword ptr [esi + VALUE]
#define CMP_R12D_FROM_PTR_EBP_(VALUE) cmp r12d, dword ptr [ebp + VALUE]
#define CMP_R12D_FROM_PTR_ESP_(VALUE) cmp r12d, dword ptr [esp + VALUE]

#define CMP_R13D_FROM_PTR_RAX_(VALUE) cmp r13d, dword ptr [rax + VALUE]
#define CMP_R13D_FROM_PTR_RBX_(VALUE) cmp r13d, dword ptr [rbx + VALUE]
#define CMP_R13D_FROM_PTR_RCX_(VALUE) cmp r13d, dword ptr [rcx + VALUE]
#define CMP_R13D_FROM_PTR_RDX_(VALUE) cmp r13d, dword ptr [rdx + VALUE]
#define CMP_R13D_FROM_PTR_RDI_(VALUE) cmp r13d, dword ptr [rdi + VALUE]
#define CMP_R13D_FROM_PTR_RSI_(VALUE) cmp r13d, dword ptr [rsi + VALUE]
#define CMP_R13D_FROM_PTR_RBP_(VALUE) cmp r13d, dword ptr [rbp + VALUE]
#define CMP_R13D_FROM_PTR_RSP_(VALUE) cmp r13d, dword ptr [rsp + VALUE]
#define CMP_R13D_FROM_PTR_R8_(VALUE) cmp r13d, dword ptr [r8 + VALUE]
#define CMP_R13D_FROM_PTR_R9_(VALUE) cmp r13d, dword ptr [r9 + VALUE]
#define CMP_R13D_FROM_PTR_R10_(VALUE) cmp r13d, dword ptr [r10 + VALUE]
#define CMP_R13D_FROM_PTR_R11_(VALUE) cmp r13d, dword ptr [r11 + VALUE]
#define CMP_R13D_FROM_PTR_R12_(VALUE) cmp r13d, dword ptr [r12 + VALUE]
#define CMP_R13D_FROM_PTR_R13_(VALUE) cmp r13d, dword ptr [r13 + VALUE]
#define CMP_R13D_FROM_PTR_R14_(VALUE) cmp r13d, dword ptr [r14 + VALUE]
#define CMP_R13D_FROM_PTR_R15_(VALUE) cmp r13d, dword ptr [r15 + VALUE]
#define CMP_R13D_FROM_PTR_EAX_(VALUE) cmp r13d, dword ptr [eax + VALUE]
#define CMP_R13D_FROM_PTR_EBX_(VALUE) cmp r13d, dword ptr [ebx + VALUE]
#define CMP_R13D_FROM_PTR_ECX_(VALUE) cmp r13d, dword ptr [ecx + VALUE]
#define CMP_R13D_FROM_PTR_EDX_(VALUE) cmp r13d, dword ptr [edx + VALUE]
#define CMP_R13D_FROM_PTR_EDI_(VALUE) cmp r13d, dword ptr [edi + VALUE]
#define CMP_R13D_FROM_PTR_ESI_(VALUE) cmp r13d, dword ptr [esi + VALUE]
#define CMP_R13D_FROM_PTR_EBP_(VALUE) cmp r13d, dword ptr [ebp + VALUE]
#define CMP_R13D_FROM_PTR_ESP_(VALUE) cmp r13d, dword ptr [esp + VALUE]

#define CMP_R14D_FROM_PTR_RAX_(VALUE) cmp r14d, dword ptr [rax + VALUE]
#define CMP_R14D_FROM_PTR_RBX_(VALUE) cmp r14d, dword ptr [rbx + VALUE]
#define CMP_R14D_FROM_PTR_RCX_(VALUE) cmp r14d, dword ptr [rcx + VALUE]
#define CMP_R14D_FROM_PTR_RDX_(VALUE) cmp r14d, dword ptr [rdx + VALUE]
#define CMP_R14D_FROM_PTR_RDI_(VALUE) cmp r14d, dword ptr [rdi + VALUE]
#define CMP_R14D_FROM_PTR_RSI_(VALUE) cmp r14d, dword ptr [rsi + VALUE]
#define CMP_R14D_FROM_PTR_RBP_(VALUE) cmp r14d, dword ptr [rbp + VALUE]
#define CMP_R14D_FROM_PTR_RSP_(VALUE) cmp r14d, dword ptr [rsp + VALUE]
#define CMP_R14D_FROM_PTR_R8_(VALUE) cmp r14d, dword ptr [r8 + VALUE]
#define CMP_R14D_FROM_PTR_R9_(VALUE) cmp r14d, dword ptr [r9 + VALUE]
#define CMP_R14D_FROM_PTR_R10_(VALUE) cmp r14d, dword ptr [r10 + VALUE]
#define CMP_R14D_FROM_PTR_R11_(VALUE) cmp r14d, dword ptr [r11 + VALUE]
#define CMP_R14D_FROM_PTR_R12_(VALUE) cmp r14d, dword ptr [r12 + VALUE]
#define CMP_R14D_FROM_PTR_R13_(VALUE) cmp r14d, dword ptr [r13 + VALUE]
#define CMP_R14D_FROM_PTR_R14_(VALUE) cmp r14d, dword ptr [r14 + VALUE]
#define CMP_R14D_FROM_PTR_R15_(VALUE) cmp r14d, dword ptr [r15 + VALUE]
#define CMP_R14D_FROM_PTR_EAX_(VALUE) cmp r14d, dword ptr [eax + VALUE]
#define CMP_R14D_FROM_PTR_EBX_(VALUE) cmp r14d, dword ptr [ebx + VALUE]
#define CMP_R14D_FROM_PTR_ECX_(VALUE) cmp r14d, dword ptr [ecx + VALUE]
#define CMP_R14D_FROM_PTR_EDX_(VALUE) cmp r14d, dword ptr [edx + VALUE]
#define CMP_R14D_FROM_PTR_EDI_(VALUE) cmp r14d, dword ptr [edi + VALUE]
#define CMP_R14D_FROM_PTR_ESI_(VALUE) cmp r14d, dword ptr [esi + VALUE]
#define CMP_R14D_FROM_PTR_EBP_(VALUE) cmp r14d, dword ptr [ebp + VALUE]
#define CMP_R14D_FROM_PTR_ESP_(VALUE) cmp r14d, dword ptr [esp + VALUE]

#define CMP_R15D_FROM_PTR_RAX_(VALUE) cmp r15d, dword ptr [rax + VALUE]
#define CMP_R15D_FROM_PTR_RBX_(VALUE) cmp r15d, dword ptr [rbx + VALUE]
#define CMP_R15D_FROM_PTR_RCX_(VALUE) cmp r15d, dword ptr [rcx + VALUE]
#define CMP_R15D_FROM_PTR_RDX_(VALUE) cmp r15d, dword ptr [rdx + VALUE]
#define CMP_R15D_FROM_PTR_RDI_(VALUE) cmp r15d, dword ptr [rdi + VALUE]
#define CMP_R15D_FROM_PTR_RSI_(VALUE) cmp r15d, dword ptr [rsi + VALUE]
#define CMP_R15D_FROM_PTR_RBP_(VALUE) cmp r15d, dword ptr [rbp + VALUE]
#define CMP_R15D_FROM_PTR_RSP_(VALUE) cmp r15d, dword ptr [rsp + VALUE]
#define CMP_R15D_FROM_PTR_R8_(VALUE) cmp r15d, dword ptr [r8 + VALUE]
#define CMP_R15D_FROM_PTR_R9_(VALUE) cmp r15d, dword ptr [r9 + VALUE]
#define CMP_R15D_FROM_PTR_R10_(VALUE) cmp r15d, dword ptr [r10 + VALUE]
#define CMP_R15D_FROM_PTR_R11_(VALUE) cmp r15d, dword ptr [r11 + VALUE]
#define CMP_R15D_FROM_PTR_R12_(VALUE) cmp r15d, dword ptr [r12 + VALUE]
#define CMP_R15D_FROM_PTR_R13_(VALUE) cmp r15d, dword ptr [r13 + VALUE]
#define CMP_R15D_FROM_PTR_R14_(VALUE) cmp r15d, dword ptr [r14 + VALUE]
#define CMP_R15D_FROM_PTR_R15_(VALUE) cmp r15d, dword ptr [r15 + VALUE]
#define CMP_R15D_FROM_PTR_EAX_(VALUE) cmp r15d, dword ptr [eax + VALUE]
#define CMP_R15D_FROM_PTR_EBX_(VALUE) cmp r15d, dword ptr [ebx + VALUE]
#define CMP_R15D_FROM_PTR_ECX_(VALUE) cmp r15d, dword ptr [ecx + VALUE]
#define CMP_R15D_FROM_PTR_EDX_(VALUE) cmp r15d, dword ptr [edx + VALUE]
#define CMP_R15D_FROM_PTR_EDI_(VALUE) cmp r15d, dword ptr [edi + VALUE]
#define CMP_R15D_FROM_PTR_ESI_(VALUE) cmp r15d, dword ptr [esi + VALUE]
#define CMP_R15D_FROM_PTR_EBP_(VALUE) cmp r15d, dword ptr [ebp + VALUE]
#define CMP_R15D_FROM_PTR_ESP_(VALUE) cmp r15d, dword ptr [esp + VALUE]

#define CMP_EAX_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], eax
#define CMP_EAX_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], eax
#define CMP_EAX_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], eax
#define CMP_EAX_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], eax
#define CMP_EAX_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], eax
#define CMP_EAX_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], eax
#define CMP_EAX_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], eax
#define CMP_EAX_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], eax
#define CMP_EAX_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], eax
#define CMP_EAX_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], eax
#define CMP_EAX_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], eax
#define CMP_EAX_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], eax
#define CMP_EAX_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], eax
#define CMP_EAX_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], eax
#define CMP_EAX_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], eax
#define CMP_EAX_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], eax
#define CMP_EAX_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], eax
#define CMP_EAX_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], eax
#define CMP_EAX_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], eax
#define CMP_EAX_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], eax
#define CMP_EAX_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], eax
#define CMP_EAX_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], eax
#define CMP_EAX_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], eax
#define CMP_EAX_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], eax

#define CMP_EBX_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], ebx
#define CMP_EBX_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], ebx
#define CMP_EBX_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], ebx
#define CMP_EBX_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], ebx
#define CMP_EBX_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], ebx
#define CMP_EBX_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], ebx
#define CMP_EBX_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], ebx
#define CMP_EBX_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], ebx
#define CMP_EBX_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], ebx
#define CMP_EBX_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], ebx
#define CMP_EBX_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], ebx
#define CMP_EBX_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], ebx
#define CMP_EBX_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], ebx
#define CMP_EBX_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], ebx
#define CMP_EBX_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], ebx
#define CMP_EBX_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], ebx
#define CMP_EBX_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], ebx
#define CMP_EBX_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], ebx
#define CMP_EBX_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], ebx
#define CMP_EBX_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], ebx
#define CMP_EBX_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], ebx
#define CMP_EBX_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], ebx
#define CMP_EBX_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], ebx
#define CMP_EBX_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], ebx

#define CMP_ECX_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], ecx
#define CMP_ECX_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], ecx
#define CMP_ECX_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], ecx
#define CMP_ECX_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], ecx
#define CMP_ECX_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], ecx
#define CMP_ECX_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], ecx
#define CMP_ECX_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], ecx
#define CMP_ECX_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], ecx
#define CMP_ECX_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], ecx
#define CMP_ECX_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], ecx
#define CMP_ECX_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], ecx
#define CMP_ECX_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], ecx
#define CMP_ECX_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], ecx
#define CMP_ECX_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], ecx
#define CMP_ECX_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], ecx
#define CMP_ECX_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], ecx
#define CMP_ECX_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], ecx
#define CMP_ECX_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], ecx
#define CMP_ECX_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], ecx
#define CMP_ECX_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], ecx
#define CMP_ECX_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], ecx
#define CMP_ECX_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], ecx
#define CMP_ECX_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], ecx
#define CMP_ECX_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], ecx

#define CMP_EDX_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], edx
#define CMP_EDX_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], edx
#define CMP_EDX_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], edx
#define CMP_EDX_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], edx
#define CMP_EDX_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], edx
#define CMP_EDX_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], edx
#define CMP_EDX_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], edx
#define CMP_EDX_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], edx
#define CMP_EDX_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], edx
#define CMP_EDX_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], edx
#define CMP_EDX_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], edx
#define CMP_EDX_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], edx
#define CMP_EDX_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], edx
#define CMP_EDX_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], edx
#define CMP_EDX_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], edx
#define CMP_EDX_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], edx
#define CMP_EDX_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], edx
#define CMP_EDX_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], edx
#define CMP_EDX_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], edx
#define CMP_EDX_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], edx
#define CMP_EDX_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], edx
#define CMP_EDX_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], edx
#define CMP_EDX_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], edx
#define CMP_EDX_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], edx

#define CMP_EDI_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], edi
#define CMP_EDI_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], edi
#define CMP_EDI_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], edi
#define CMP_EDI_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], edi
#define CMP_EDI_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], edi
#define CMP_EDI_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], edi
#define CMP_EDI_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], edi
#define CMP_EDI_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], edi
#define CMP_EDI_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], edi
#define CMP_EDI_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], edi
#define CMP_EDI_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], edi
#define CMP_EDI_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], edi
#define CMP_EDI_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], edi
#define CMP_EDI_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], edi
#define CMP_EDI_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], edi
#define CMP_EDI_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], edi
#define CMP_EDI_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], edi
#define CMP_EDI_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], edi
#define CMP_EDI_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], edi
#define CMP_EDI_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], edi
#define CMP_EDI_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], edi
#define CMP_EDI_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], edi
#define CMP_EDI_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], edi
#define CMP_EDI_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], edi

#define CMP_ESI_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], esi
#define CMP_ESI_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], esi
#define CMP_ESI_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], esi
#define CMP_ESI_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], esi
#define CMP_ESI_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], esi
#define CMP_ESI_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], esi
#define CMP_ESI_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], esi
#define CMP_ESI_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], esi
#define CMP_ESI_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], esi
#define CMP_ESI_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], esi
#define CMP_ESI_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], esi
#define CMP_ESI_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], esi
#define CMP_ESI_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], esi
#define CMP_ESI_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], esi
#define CMP_ESI_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], esi
#define CMP_ESI_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], esi
#define CMP_ESI_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], esi
#define CMP_ESI_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], esi
#define CMP_ESI_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], esi
#define CMP_ESI_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], esi
#define CMP_ESI_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], esi
#define CMP_ESI_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], esi
#define CMP_ESI_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], esi
#define CMP_ESI_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], esi

#define CMP_EBP_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], ebp
#define CMP_EBP_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], ebp
#define CMP_EBP_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], ebp
#define CMP_EBP_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], ebp
#define CMP_EBP_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], ebp
#define CMP_EBP_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], ebp
#define CMP_EBP_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], ebp
#define CMP_EBP_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], ebp
#define CMP_EBP_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], ebp
#define CMP_EBP_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], ebp
#define CMP_EBP_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], ebp
#define CMP_EBP_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], ebp
#define CMP_EBP_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], ebp
#define CMP_EBP_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], ebp
#define CMP_EBP_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], ebp
#define CMP_EBP_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], ebp
#define CMP_EBP_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], ebp
#define CMP_EBP_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], ebp
#define CMP_EBP_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], ebp
#define CMP_EBP_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], ebp
#define CMP_EBP_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], ebp
#define CMP_EBP_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], ebp
#define CMP_EBP_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], ebp
#define CMP_EBP_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], ebp

#define CMP_ESP_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], esp
#define CMP_ESP_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], esp
#define CMP_ESP_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], esp
#define CMP_ESP_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], esp
#define CMP_ESP_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], esp
#define CMP_ESP_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], esp
#define CMP_ESP_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], esp
#define CMP_ESP_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], esp
#define CMP_ESP_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], esp
#define CMP_ESP_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], esp
#define CMP_ESP_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], esp
#define CMP_ESP_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], esp
#define CMP_ESP_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], esp
#define CMP_ESP_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], esp
#define CMP_ESP_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], esp
#define CMP_ESP_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], esp
#define CMP_ESP_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], esp
#define CMP_ESP_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], esp
#define CMP_ESP_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], esp
#define CMP_ESP_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], esp
#define CMP_ESP_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], esp
#define CMP_ESP_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], esp
#define CMP_ESP_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], esp
#define CMP_ESP_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], esp

#define CMP_R8D_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], r8d
#define CMP_R8D_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], r8d
#define CMP_R8D_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], r8d
#define CMP_R8D_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], r8d
#define CMP_R8D_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], r8d
#define CMP_R8D_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], r8d
#define CMP_R8D_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], r8d
#define CMP_R8D_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], r8d
#define CMP_R8D_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], r8d
#define CMP_R8D_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], r8d
#define CMP_R8D_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], r8d
#define CMP_R8D_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], r8d
#define CMP_R8D_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], r8d
#define CMP_R8D_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], r8d
#define CMP_R8D_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], r8d
#define CMP_R8D_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], r8d
#define CMP_R8D_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], r8d
#define CMP_R8D_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], r8d
#define CMP_R8D_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], r8d
#define CMP_R8D_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], r8d
#define CMP_R8D_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], r8d
#define CMP_R8D_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], r8d
#define CMP_R8D_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], r8d
#define CMP_R8D_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], r8d

#define CMP_R9D_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], r9d
#define CMP_R9D_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], r9d
#define CMP_R9D_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], r9d
#define CMP_R9D_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], r9d
#define CMP_R9D_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], r9d
#define CMP_R9D_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], r9d
#define CMP_R9D_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], r9d
#define CMP_R9D_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], r9d
#define CMP_R9D_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], r9d
#define CMP_R9D_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], r9d
#define CMP_R9D_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], r9d
#define CMP_R9D_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], r9d
#define CMP_R9D_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], r9d
#define CMP_R9D_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], r9d
#define CMP_R9D_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], r9d
#define CMP_R9D_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], r9d
#define CMP_R9D_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], r9d
#define CMP_R9D_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], r9d
#define CMP_R9D_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], r9d
#define CMP_R9D_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], r9d
#define CMP_R9D_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], r9d
#define CMP_R9D_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], r9d
#define CMP_R9D_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], r9d
#define CMP_R9D_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], r9d

#define CMP_R10D_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], r10d
#define CMP_R10D_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], r10d
#define CMP_R10D_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], r10d
#define CMP_R10D_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], r10d
#define CMP_R10D_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], r10d
#define CMP_R10D_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], r10d
#define CMP_R10D_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], r10d
#define CMP_R10D_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], r10d
#define CMP_R10D_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], r10d
#define CMP_R10D_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], r10d
#define CMP_R10D_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], r10d
#define CMP_R10D_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], r10d
#define CMP_R10D_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], r10d
#define CMP_R10D_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], r10d
#define CMP_R10D_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], r10d
#define CMP_R10D_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], r10d
#define CMP_R10D_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], r10d
#define CMP_R10D_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], r10d
#define CMP_R10D_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], r10d
#define CMP_R10D_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], r10d
#define CMP_R10D_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], r10d
#define CMP_R10D_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], r10d
#define CMP_R10D_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], r10d
#define CMP_R10D_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], r10d

#define CMP_R11D_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], r11d
#define CMP_R11D_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], r11d
#define CMP_R11D_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], r11d
#define CMP_R11D_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], r11d
#define CMP_R11D_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], r11d
#define CMP_R11D_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], r11d
#define CMP_R11D_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], r11d
#define CMP_R11D_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], r11d
#define CMP_R11D_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], r11d
#define CMP_R11D_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], r11d
#define CMP_R11D_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], r11d
#define CMP_R11D_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], r11d
#define CMP_R11D_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], r11d
#define CMP_R11D_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], r11d
#define CMP_R11D_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], r11d
#define CMP_R11D_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], r11d
#define CMP_R11D_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], r11d
#define CMP_R11D_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], r11d
#define CMP_R11D_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], r11d
#define CMP_R11D_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], r11d
#define CMP_R11D_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], r11d
#define CMP_R11D_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], r11d
#define CMP_R11D_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], r11d
#define CMP_R11D_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], r11d

#define CMP_R12D_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], r12d
#define CMP_R12D_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], r12d
#define CMP_R12D_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], r12d
#define CMP_R12D_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], r12d
#define CMP_R12D_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], r12d
#define CMP_R12D_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], r12d
#define CMP_R12D_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], r12d
#define CMP_R12D_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], r12d
#define CMP_R12D_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], r12d
#define CMP_R12D_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], r12d
#define CMP_R12D_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], r12d
#define CMP_R12D_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], r12d
#define CMP_R12D_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], r12d
#define CMP_R12D_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], r12d
#define CMP_R12D_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], r12d
#define CMP_R12D_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], r12d
#define CMP_R12D_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], r12d
#define CMP_R12D_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], r12d
#define CMP_R12D_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], r12d
#define CMP_R12D_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], r12d
#define CMP_R12D_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], r12d
#define CMP_R12D_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], r12d
#define CMP_R12D_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], r12d
#define CMP_R12D_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], r12d

#define CMP_R13D_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], r13d
#define CMP_R13D_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], r13d
#define CMP_R13D_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], r13d
#define CMP_R13D_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], r13d
#define CMP_R13D_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], r13d
#define CMP_R13D_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], r13d
#define CMP_R13D_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], r13d
#define CMP_R13D_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], r13d
#define CMP_R13D_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], r13d
#define CMP_R13D_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], r13d
#define CMP_R13D_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], r13d
#define CMP_R13D_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], r13d
#define CMP_R13D_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], r13d
#define CMP_R13D_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], r13d
#define CMP_R13D_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], r13d
#define CMP_R13D_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], r13d
#define CMP_R13D_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], r13d
#define CMP_R13D_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], r13d
#define CMP_R13D_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], r13d
#define CMP_R13D_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], r13d
#define CMP_R13D_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], r13d
#define CMP_R13D_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], r13d
#define CMP_R13D_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], r13d
#define CMP_R13D_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], r13d

#define CMP_R14D_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], r14d
#define CMP_R14D_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], r14d
#define CMP_R14D_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], r14d
#define CMP_R14D_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], r14d
#define CMP_R14D_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], r14d
#define CMP_R14D_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], r14d
#define CMP_R14D_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], r14d
#define CMP_R14D_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], r14d
#define CMP_R14D_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], r14d
#define CMP_R14D_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], r14d
#define CMP_R14D_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], r14d
#define CMP_R14D_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], r14d
#define CMP_R14D_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], r14d
#define CMP_R14D_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], r14d
#define CMP_R14D_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], r14d
#define CMP_R14D_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], r14d
#define CMP_R14D_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], r14d
#define CMP_R14D_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], r14d
#define CMP_R14D_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], r14d
#define CMP_R14D_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], r14d
#define CMP_R14D_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], r14d
#define CMP_R14D_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], r14d
#define CMP_R14D_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], r14d
#define CMP_R14D_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], r14d

#define CMP_R15D_TO_PTR_RAX_(VALUE) cmp dword ptr [rax + VALUE], r15d
#define CMP_R15D_TO_PTR_RBX_(VALUE) cmp dword ptr [rbx + VALUE], r15d
#define CMP_R15D_TO_PTR_RCX_(VALUE) cmp dword ptr [rcx + VALUE], r15d
#define CMP_R15D_TO_PTR_RDX_(VALUE) cmp dword ptr [rdx + VALUE], r15d
#define CMP_R15D_TO_PTR_RDI_(VALUE) cmp dword ptr [rdi + VALUE], r15d
#define CMP_R15D_TO_PTR_RSI_(VALUE) cmp dword ptr [rsi + VALUE], r15d
#define CMP_R15D_TO_PTR_RBP_(VALUE) cmp dword ptr [rbp + VALUE], r15d
#define CMP_R15D_TO_PTR_RSP_(VALUE) cmp dword ptr [rsp + VALUE], r15d
#define CMP_R15D_TO_PTR_R8_(VALUE) cmp dword ptr [r8 + VALUE], r15d
#define CMP_R15D_TO_PTR_R9_(VALUE) cmp dword ptr [r9 + VALUE], r15d
#define CMP_R15D_TO_PTR_R10_(VALUE) cmp dword ptr [r10 + VALUE], r15d
#define CMP_R15D_TO_PTR_R11_(VALUE) cmp dword ptr [r11 + VALUE], r15d
#define CMP_R15D_TO_PTR_R12_(VALUE) cmp dword ptr [r12 + VALUE], r15d
#define CMP_R15D_TO_PTR_R13_(VALUE) cmp dword ptr [r13 + VALUE], r15d
#define CMP_R15D_TO_PTR_R14_(VALUE) cmp dword ptr [r14 + VALUE], r15d
#define CMP_R15D_TO_PTR_R15_(VALUE) cmp dword ptr [r15 + VALUE], r15d
#define CMP_R15D_TO_PTR_EAX_(VALUE) cmp dword ptr [eax + VALUE], r15d
#define CMP_R15D_TO_PTR_EBX_(VALUE) cmp dword ptr [ebx + VALUE], r15d
#define CMP_R15D_TO_PTR_ECX_(VALUE) cmp dword ptr [ecx + VALUE], r15d
#define CMP_R15D_TO_PTR_EDX_(VALUE) cmp dword ptr [edx + VALUE], r15d
#define CMP_R15D_TO_PTR_EDI_(VALUE) cmp dword ptr [edi + VALUE], r15d
#define CMP_R15D_TO_PTR_ESI_(VALUE) cmp dword ptr [esi + VALUE], r15d
#define CMP_R15D_TO_PTR_EBP_(VALUE) cmp dword ptr [ebp + VALUE], r15d
#define CMP_R15D_TO_PTR_ESP_(VALUE) cmp dword ptr [esp + VALUE], r15d
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
