#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define AND_EAX_FROM_PTR_(VALUE) and eax, dword ptr [VALUE]
#define AND_EBX_FROM_PTR_(VALUE) and ebx, dword ptr [VALUE]
#define AND_ECX_FROM_PTR_(VALUE) and ecx, dword ptr [VALUE]
#define AND_EDX_FROM_PTR_(VALUE) and edx, dword ptr [VALUE]
#define AND_EDI_FROM_PTR_(VALUE) and edi, dword ptr [VALUE]
#define AND_ESI_FROM_PTR_(VALUE) and esi, dword ptr [VALUE]
#define AND_EBP_FROM_PTR_(VALUE) and ebp, dword ptr [VALUE]
#define AND_ESP_FROM_PTR_(VALUE) and esp, dword ptr [VALUE]

#define AND_EAX_TO_PTR_(VALUE) and dword ptr [VALUE], eax
#define AND_EBX_TO_PTR_(VALUE) and dword ptr [VALUE], ebx
#define AND_ECX_TO_PTR_(VALUE) and dword ptr [VALUE], ecx
#define AND_EDX_TO_PTR_(VALUE) and dword ptr [VALUE], edx
#define AND_EDI_TO_PTR_(VALUE) and dword ptr [VALUE], edi
#define AND_ESI_TO_PTR_(VALUE) and dword ptr [VALUE], esi
#define AND_EBP_TO_PTR_(VALUE) and dword ptr [VALUE], ebp
#define AND_ESP_TO_PTR_(VALUE) and dword ptr [VALUE], esp

#define AND_EAX_FROM_PTR_EAX and eax, dword ptr [eax]
#define AND_EAX_FROM_PTR_EBX and eax, dword ptr [ebx]
#define AND_EAX_FROM_PTR_ECX and eax, dword ptr [ecx]
#define AND_EAX_FROM_PTR_EDX and eax, dword ptr [edx]
#define AND_EAX_FROM_PTR_EDI and eax, dword ptr [edi]
#define AND_EAX_FROM_PTR_ESI and eax, dword ptr [esi]
#define AND_EAX_FROM_PTR_EBP and eax, dword ptr [ebp]
#define AND_EAX_FROM_PTR_ESP and eax, dword ptr [esp]
#define AND_EAX_FROM_PTR_BX and eax, dword ptr [bx]
#define AND_EAX_FROM_PTR_BP and eax, dword ptr [bp]
#define AND_EAX_FROM_PTR_SI and eax, dword ptr [si]
#define AND_EAX_FROM_PTR_DI and eax, dword ptr [di]

#define AND_EBX_FROM_PTR_EAX and ebx, dword ptr [eax]
#define AND_EBX_FROM_PTR_EBX and ebx, dword ptr [ebx]
#define AND_EBX_FROM_PTR_ECX and ebx, dword ptr [ecx]
#define AND_EBX_FROM_PTR_EDX and ebx, dword ptr [edx]
#define AND_EBX_FROM_PTR_EDI and ebx, dword ptr [edi]
#define AND_EBX_FROM_PTR_ESI and ebx, dword ptr [esi]
#define AND_EBX_FROM_PTR_EBP and ebx, dword ptr [ebp]
#define AND_EBX_FROM_PTR_ESP and ebx, dword ptr [esp]
#define AND_EBX_FROM_PTR_BX and ebx, dword ptr [bx]
#define AND_EBX_FROM_PTR_BP and ebx, dword ptr [bp]
#define AND_EBX_FROM_PTR_SI and ebx, dword ptr [si]
#define AND_EBX_FROM_PTR_DI and ebx, dword ptr [di]

#define AND_ECX_FROM_PTR_EAX and ecx, dword ptr [eax]
#define AND_ECX_FROM_PTR_EBX and ecx, dword ptr [ebx]
#define AND_ECX_FROM_PTR_ECX and ecx, dword ptr [ecx]
#define AND_ECX_FROM_PTR_EDX and ecx, dword ptr [edx]
#define AND_ECX_FROM_PTR_EDI and ecx, dword ptr [edi]
#define AND_ECX_FROM_PTR_ESI and ecx, dword ptr [esi]
#define AND_ECX_FROM_PTR_EBP and ecx, dword ptr [ebp]
#define AND_ECX_FROM_PTR_ESP and ecx, dword ptr [esp]
#define AND_ECX_FROM_PTR_BX and ecx, dword ptr [bx]
#define AND_ECX_FROM_PTR_BP and ecx, dword ptr [bp]
#define AND_ECX_FROM_PTR_SI and ecx, dword ptr [si]
#define AND_ECX_FROM_PTR_DI and ecx, dword ptr [di]

#define AND_EDX_FROM_PTR_EAX and edx, dword ptr [eax]
#define AND_EDX_FROM_PTR_EBX and edx, dword ptr [ebx]
#define AND_EDX_FROM_PTR_ECX and edx, dword ptr [ecx]
#define AND_EDX_FROM_PTR_EDX and edx, dword ptr [edx]
#define AND_EDX_FROM_PTR_EDI and edx, dword ptr [edi]
#define AND_EDX_FROM_PTR_ESI and edx, dword ptr [esi]
#define AND_EDX_FROM_PTR_EBP and edx, dword ptr [ebp]
#define AND_EDX_FROM_PTR_ESP and edx, dword ptr [esp]
#define AND_EDX_FROM_PTR_BX and edx, dword ptr [bx]
#define AND_EDX_FROM_PTR_BP and edx, dword ptr [bp]
#define AND_EDX_FROM_PTR_SI and edx, dword ptr [si]
#define AND_EDX_FROM_PTR_DI and edx, dword ptr [di]

#define AND_EDI_FROM_PTR_EAX and edi, dword ptr [eax]
#define AND_EDI_FROM_PTR_EBX and edi, dword ptr [ebx]
#define AND_EDI_FROM_PTR_ECX and edi, dword ptr [ecx]
#define AND_EDI_FROM_PTR_EDX and edi, dword ptr [edx]
#define AND_EDI_FROM_PTR_EDI and edi, dword ptr [edi]
#define AND_EDI_FROM_PTR_ESI and edi, dword ptr [esi]
#define AND_EDI_FROM_PTR_EBP and edi, dword ptr [ebp]
#define AND_EDI_FROM_PTR_ESP and edi, dword ptr [esp]
#define AND_EDI_FROM_PTR_BX and edi, dword ptr [bx]
#define AND_EDI_FROM_PTR_BP and edi, dword ptr [bp]
#define AND_EDI_FROM_PTR_SI and edi, dword ptr [si]
#define AND_EDI_FROM_PTR_DI and edi, dword ptr [di]

#define AND_ESI_FROM_PTR_EAX and esi, dword ptr [eax]
#define AND_ESI_FROM_PTR_EBX and esi, dword ptr [ebx]
#define AND_ESI_FROM_PTR_ECX and esi, dword ptr [ecx]
#define AND_ESI_FROM_PTR_EDX and esi, dword ptr [edx]
#define AND_ESI_FROM_PTR_EDI and esi, dword ptr [edi]
#define AND_ESI_FROM_PTR_ESI and esi, dword ptr [esi]
#define AND_ESI_FROM_PTR_EBP and esi, dword ptr [ebp]
#define AND_ESI_FROM_PTR_ESP and esi, dword ptr [esp]
#define AND_ESI_FROM_PTR_BX and esi, dword ptr [bx]
#define AND_ESI_FROM_PTR_BP and esi, dword ptr [bp]
#define AND_ESI_FROM_PTR_SI and esi, dword ptr [si]
#define AND_ESI_FROM_PTR_DI and esi, dword ptr [di]

#define AND_EBP_FROM_PTR_EAX and ebp, dword ptr [eax]
#define AND_EBP_FROM_PTR_EBX and ebp, dword ptr [ebx]
#define AND_EBP_FROM_PTR_ECX and ebp, dword ptr [ecx]
#define AND_EBP_FROM_PTR_EDX and ebp, dword ptr [edx]
#define AND_EBP_FROM_PTR_EDI and ebp, dword ptr [edi]
#define AND_EBP_FROM_PTR_ESI and ebp, dword ptr [esi]
#define AND_EBP_FROM_PTR_EBP and ebp, dword ptr [ebp]
#define AND_EBP_FROM_PTR_ESP and ebp, dword ptr [esp]
#define AND_EBP_FROM_PTR_BX and ebp, dword ptr [bx]
#define AND_EBP_FROM_PTR_BP and ebp, dword ptr [bp]
#define AND_EBP_FROM_PTR_SI and ebp, dword ptr [si]
#define AND_EBP_FROM_PTR_DI and ebp, dword ptr [di]

#define AND_ESP_FROM_PTR_EAX and esp, dword ptr [eax]
#define AND_ESP_FROM_PTR_EBX and esp, dword ptr [ebx]
#define AND_ESP_FROM_PTR_ECX and esp, dword ptr [ecx]
#define AND_ESP_FROM_PTR_EDX and esp, dword ptr [edx]
#define AND_ESP_FROM_PTR_EDI and esp, dword ptr [edi]
#define AND_ESP_FROM_PTR_ESI and esp, dword ptr [esi]
#define AND_ESP_FROM_PTR_EBP and esp, dword ptr [ebp]
#define AND_ESP_FROM_PTR_ESP and esp, dword ptr [esp]
#define AND_ESP_FROM_PTR_BX and esp, dword ptr [bx]
#define AND_ESP_FROM_PTR_BP and esp, dword ptr [bp]
#define AND_ESP_FROM_PTR_SI and esp, dword ptr [si]
#define AND_ESP_FROM_PTR_DI and esp, dword ptr [di]

#define AND_EAX_TO_PTR_EAX and dword ptr [eax], eax
#define AND_EAX_TO_PTR_EBX and dword ptr [ebx], eax
#define AND_EAX_TO_PTR_ECX and dword ptr [ecx], eax
#define AND_EAX_TO_PTR_EDX and dword ptr [edx], eax
#define AND_EAX_TO_PTR_EDI and dword ptr [edi], eax
#define AND_EAX_TO_PTR_ESI and dword ptr [esi], eax
#define AND_EAX_TO_PTR_EBP and dword ptr [ebp], eax
#define AND_EAX_TO_PTR_ESP and dword ptr [esp], eax
#define AND_EAX_TO_PTR_BX and dword ptr [bx], eax
#define AND_EAX_TO_PTR_BP and dword ptr [bp], eax
#define AND_EAX_TO_PTR_SI and dword ptr [si], eax
#define AND_EAX_TO_PTR_DI and dword ptr [di], eax

#define AND_EBX_TO_PTR_EAX and dword ptr [eax], ebx
#define AND_EBX_TO_PTR_EBX and dword ptr [ebx], ebx
#define AND_EBX_TO_PTR_ECX and dword ptr [ecx], ebx
#define AND_EBX_TO_PTR_EDX and dword ptr [edx], ebx
#define AND_EBX_TO_PTR_EDI and dword ptr [edi], ebx
#define AND_EBX_TO_PTR_ESI and dword ptr [esi], ebx
#define AND_EBX_TO_PTR_EBP and dword ptr [ebp], ebx
#define AND_EBX_TO_PTR_ESP and dword ptr [esp], ebx
#define AND_EBX_TO_PTR_BX and dword ptr [bx], ebx
#define AND_EBX_TO_PTR_BP and dword ptr [bp], ebx
#define AND_EBX_TO_PTR_SI and dword ptr [si], ebx
#define AND_EBX_TO_PTR_DI and dword ptr [di], ebx

#define AND_ECX_TO_PTR_EAX and dword ptr [eax], ecx
#define AND_ECX_TO_PTR_EBX and dword ptr [ebx], ecx
#define AND_ECX_TO_PTR_ECX and dword ptr [ecx], ecx
#define AND_ECX_TO_PTR_EDX and dword ptr [edx], ecx
#define AND_ECX_TO_PTR_EDI and dword ptr [edi], ecx
#define AND_ECX_TO_PTR_ESI and dword ptr [esi], ecx
#define AND_ECX_TO_PTR_EBP and dword ptr [ebp], ecx
#define AND_ECX_TO_PTR_ESP and dword ptr [esp], ecx
#define AND_ECX_TO_PTR_BX and dword ptr [bx], ecx
#define AND_ECX_TO_PTR_BP and dword ptr [bp], ecx
#define AND_ECX_TO_PTR_SI and dword ptr [si], ecx
#define AND_ECX_TO_PTR_DI and dword ptr [di], ecx

#define AND_EDX_TO_PTR_EAX and dword ptr [eax], edx
#define AND_EDX_TO_PTR_EBX and dword ptr [ebx], edx
#define AND_EDX_TO_PTR_ECX and dword ptr [ecx], edx
#define AND_EDX_TO_PTR_EDX and dword ptr [edx], edx
#define AND_EDX_TO_PTR_EDI and dword ptr [edi], edx
#define AND_EDX_TO_PTR_ESI and dword ptr [esi], edx
#define AND_EDX_TO_PTR_EBP and dword ptr [ebp], edx
#define AND_EDX_TO_PTR_ESP and dword ptr [esp], edx
#define AND_EDX_TO_PTR_BX and dword ptr [bx], edx
#define AND_EDX_TO_PTR_BP and dword ptr [bp], edx
#define AND_EDX_TO_PTR_SI and dword ptr [si], edx
#define AND_EDX_TO_PTR_DI and dword ptr [di], edx

#define AND_EDI_TO_PTR_EAX and dword ptr [eax], edi
#define AND_EDI_TO_PTR_EBX and dword ptr [ebx], edi
#define AND_EDI_TO_PTR_ECX and dword ptr [ecx], edi
#define AND_EDI_TO_PTR_EDX and dword ptr [edx], edi
#define AND_EDI_TO_PTR_EDI and dword ptr [edi], edi
#define AND_EDI_TO_PTR_ESI and dword ptr [esi], edi
#define AND_EDI_TO_PTR_EBP and dword ptr [ebp], edi
#define AND_EDI_TO_PTR_ESP and dword ptr [esp], edi
#define AND_EDI_TO_PTR_BX and dword ptr [bx], edi
#define AND_EDI_TO_PTR_BP and dword ptr [bp], edi
#define AND_EDI_TO_PTR_SI and dword ptr [si], edi
#define AND_EDI_TO_PTR_DI and dword ptr [di], edi

#define AND_ESI_TO_PTR_EAX and dword ptr [eax], esi
#define AND_ESI_TO_PTR_EBX and dword ptr [ebx], esi
#define AND_ESI_TO_PTR_ECX and dword ptr [ecx], esi
#define AND_ESI_TO_PTR_EDX and dword ptr [edx], esi
#define AND_ESI_TO_PTR_EDI and dword ptr [edi], esi
#define AND_ESI_TO_PTR_ESI and dword ptr [esi], esi
#define AND_ESI_TO_PTR_EBP and dword ptr [ebp], esi
#define AND_ESI_TO_PTR_ESP and dword ptr [esp], esi
#define AND_ESI_TO_PTR_BX and dword ptr [bx], esi
#define AND_ESI_TO_PTR_BP and dword ptr [bp], esi
#define AND_ESI_TO_PTR_SI and dword ptr [si], esi
#define AND_ESI_TO_PTR_DI and dword ptr [di], esi

#define AND_EBP_TO_PTR_EAX and dword ptr [eax], ebp
#define AND_EBP_TO_PTR_EBX and dword ptr [ebx], ebp
#define AND_EBP_TO_PTR_ECX and dword ptr [ecx], ebp
#define AND_EBP_TO_PTR_EDX and dword ptr [edx], ebp
#define AND_EBP_TO_PTR_EDI and dword ptr [edi], ebp
#define AND_EBP_TO_PTR_ESI and dword ptr [esi], ebp
#define AND_EBP_TO_PTR_EBP and dword ptr [ebp], ebp
#define AND_EBP_TO_PTR_ESP and dword ptr [esp], ebp
#define AND_EBP_TO_PTR_BX and dword ptr [bx], ebp
#define AND_EBP_TO_PTR_BP and dword ptr [bp], ebp
#define AND_EBP_TO_PTR_SI and dword ptr [si], ebp
#define AND_EBP_TO_PTR_DI and dword ptr [di], ebp

#define AND_ESP_TO_PTR_EAX and dword ptr [eax], esp
#define AND_ESP_TO_PTR_EBX and dword ptr [ebx], esp
#define AND_ESP_TO_PTR_ECX and dword ptr [ecx], esp
#define AND_ESP_TO_PTR_EDX and dword ptr [edx], esp
#define AND_ESP_TO_PTR_EDI and dword ptr [edi], esp
#define AND_ESP_TO_PTR_ESI and dword ptr [esi], esp
#define AND_ESP_TO_PTR_EBP and dword ptr [ebp], esp
#define AND_ESP_TO_PTR_ESP and dword ptr [esp], esp
#define AND_ESP_TO_PTR_BX and dword ptr [bx], esp
#define AND_ESP_TO_PTR_BP and dword ptr [bp], esp
#define AND_ESP_TO_PTR_SI and dword ptr [si], esp
#define AND_ESP_TO_PTR_DI and dword ptr [di], esp

#define AND_EAX_FROM_PTR_EAX_(VALUE) and eax, dword ptr [eax + VALUE]
#define AND_EAX_FROM_PTR_EBX_(VALUE) and eax, dword ptr [ebx + VALUE]
#define AND_EAX_FROM_PTR_ECX_(VALUE) and eax, dword ptr [ecx + VALUE]
#define AND_EAX_FROM_PTR_EDX_(VALUE) and eax, dword ptr [edx + VALUE]
#define AND_EAX_FROM_PTR_EDI_(VALUE) and eax, dword ptr [edi + VALUE]
#define AND_EAX_FROM_PTR_ESI_(VALUE) and eax, dword ptr [esi + VALUE]
#define AND_EAX_FROM_PTR_EBP_(VALUE) and eax, dword ptr [ebp + VALUE]
#define AND_EAX_FROM_PTR_ESP_(VALUE) and eax, dword ptr [esp + VALUE]
#define AND_EAX_FROM_PTR_BX_(VALUE) and eax, dword ptr [bx + VALUE]
#define AND_EAX_FROM_PTR_BP_(VALUE) and eax, dword ptr [bp + VALUE]
#define AND_EAX_FROM_PTR_SI_(VALUE) and eax, dword ptr [si + VALUE]
#define AND_EAX_FROM_PTR_DI_(VALUE) and eax, dword ptr [di + VALUE]

#define AND_EBX_FROM_PTR_EAX_(VALUE) and ebx, dword ptr [eax + VALUE]
#define AND_EBX_FROM_PTR_EBX_(VALUE) and ebx, dword ptr [ebx + VALUE]
#define AND_EBX_FROM_PTR_ECX_(VALUE) and ebx, dword ptr [ecx + VALUE]
#define AND_EBX_FROM_PTR_EDX_(VALUE) and ebx, dword ptr [edx + VALUE]
#define AND_EBX_FROM_PTR_EDI_(VALUE) and ebx, dword ptr [edi + VALUE]
#define AND_EBX_FROM_PTR_ESI_(VALUE) and ebx, dword ptr [esi + VALUE]
#define AND_EBX_FROM_PTR_EBP_(VALUE) and ebx, dword ptr [ebp + VALUE]
#define AND_EBX_FROM_PTR_ESP_(VALUE) and ebx, dword ptr [esp + VALUE]
#define AND_EBX_FROM_PTR_BX_(VALUE) and ebx, dword ptr [bx + VALUE]
#define AND_EBX_FROM_PTR_BP_(VALUE) and ebx, dword ptr [bp + VALUE]
#define AND_EBX_FROM_PTR_SI_(VALUE) and ebx, dword ptr [si + VALUE]
#define AND_EBX_FROM_PTR_DI_(VALUE) and ebx, dword ptr [di + VALUE]

#define AND_ECX_FROM_PTR_EAX_(VALUE) and ecx, dword ptr [eax + VALUE]
#define AND_ECX_FROM_PTR_EBX_(VALUE) and ecx, dword ptr [ebx + VALUE]
#define AND_ECX_FROM_PTR_ECX_(VALUE) and ecx, dword ptr [ecx + VALUE]
#define AND_ECX_FROM_PTR_EDX_(VALUE) and ecx, dword ptr [edx + VALUE]
#define AND_ECX_FROM_PTR_EDI_(VALUE) and ecx, dword ptr [edi + VALUE]
#define AND_ECX_FROM_PTR_ESI_(VALUE) and ecx, dword ptr [esi + VALUE]
#define AND_ECX_FROM_PTR_EBP_(VALUE) and ecx, dword ptr [ebp + VALUE]
#define AND_ECX_FROM_PTR_ESP_(VALUE) and ecx, dword ptr [esp + VALUE]
#define AND_ECX_FROM_PTR_BX_(VALUE) and ecx, dword ptr [bx + VALUE]
#define AND_ECX_FROM_PTR_BP_(VALUE) and ecx, dword ptr [bp + VALUE]
#define AND_ECX_FROM_PTR_SI_(VALUE) and ecx, dword ptr [si + VALUE]
#define AND_ECX_FROM_PTR_DI_(VALUE) and ecx, dword ptr [di + VALUE]

#define AND_EDX_FROM_PTR_EAX_(VALUE) and edx, dword ptr [eax + VALUE]
#define AND_EDX_FROM_PTR_EBX_(VALUE) and edx, dword ptr [ebx + VALUE]
#define AND_EDX_FROM_PTR_ECX_(VALUE) and edx, dword ptr [ecx + VALUE]
#define AND_EDX_FROM_PTR_EDX_(VALUE) and edx, dword ptr [edx + VALUE]
#define AND_EDX_FROM_PTR_EDI_(VALUE) and edx, dword ptr [edi + VALUE]
#define AND_EDX_FROM_PTR_ESI_(VALUE) and edx, dword ptr [esi + VALUE]
#define AND_EDX_FROM_PTR_EBP_(VALUE) and edx, dword ptr [ebp + VALUE]
#define AND_EDX_FROM_PTR_ESP_(VALUE) and edx, dword ptr [esp + VALUE]
#define AND_EDX_FROM_PTR_BX_(VALUE) and edx, dword ptr [bx + VALUE]
#define AND_EDX_FROM_PTR_BP_(VALUE) and edx, dword ptr [bp + VALUE]
#define AND_EDX_FROM_PTR_SI_(VALUE) and edx, dword ptr [si + VALUE]
#define AND_EDX_FROM_PTR_DI_(VALUE) and edx, dword ptr [di + VALUE]

#define AND_EDI_FROM_PTR_EAX_(VALUE) and edi, dword ptr [eax + VALUE]
#define AND_EDI_FROM_PTR_EBX_(VALUE) and edi, dword ptr [ebx + VALUE]
#define AND_EDI_FROM_PTR_ECX_(VALUE) and edi, dword ptr [ecx + VALUE]
#define AND_EDI_FROM_PTR_EDX_(VALUE) and edi, dword ptr [edx + VALUE]
#define AND_EDI_FROM_PTR_EDI_(VALUE) and edi, dword ptr [edi + VALUE]
#define AND_EDI_FROM_PTR_ESI_(VALUE) and edi, dword ptr [esi + VALUE]
#define AND_EDI_FROM_PTR_EBP_(VALUE) and edi, dword ptr [ebp + VALUE]
#define AND_EDI_FROM_PTR_ESP_(VALUE) and edi, dword ptr [esp + VALUE]
#define AND_EDI_FROM_PTR_BX_(VALUE) and edi, dword ptr [bx + VALUE]
#define AND_EDI_FROM_PTR_BP_(VALUE) and edi, dword ptr [bp + VALUE]
#define AND_EDI_FROM_PTR_SI_(VALUE) and edi, dword ptr [si + VALUE]
#define AND_EDI_FROM_PTR_DI_(VALUE) and edi, dword ptr [di + VALUE]

#define AND_ESI_FROM_PTR_EAX_(VALUE) and esi, dword ptr [eax + VALUE]
#define AND_ESI_FROM_PTR_EBX_(VALUE) and esi, dword ptr [ebx + VALUE]
#define AND_ESI_FROM_PTR_ECX_(VALUE) and esi, dword ptr [ecx + VALUE]
#define AND_ESI_FROM_PTR_EDX_(VALUE) and esi, dword ptr [edx + VALUE]
#define AND_ESI_FROM_PTR_EDI_(VALUE) and esi, dword ptr [edi + VALUE]
#define AND_ESI_FROM_PTR_ESI_(VALUE) and esi, dword ptr [esi + VALUE]
#define AND_ESI_FROM_PTR_EBP_(VALUE) and esi, dword ptr [ebp + VALUE]
#define AND_ESI_FROM_PTR_ESP_(VALUE) and esi, dword ptr [esp + VALUE]
#define AND_ESI_FROM_PTR_BX_(VALUE) and esi, dword ptr [bx + VALUE]
#define AND_ESI_FROM_PTR_BP_(VALUE) and esi, dword ptr [bp + VALUE]
#define AND_ESI_FROM_PTR_SI_(VALUE) and esi, dword ptr [si + VALUE]
#define AND_ESI_FROM_PTR_DI_(VALUE) and esi, dword ptr [di + VALUE]

#define AND_EBP_FROM_PTR_EAX_(VALUE) and ebp, dword ptr [eax + VALUE]
#define AND_EBP_FROM_PTR_EBX_(VALUE) and ebp, dword ptr [ebx + VALUE]
#define AND_EBP_FROM_PTR_ECX_(VALUE) and ebp, dword ptr [ecx + VALUE]
#define AND_EBP_FROM_PTR_EDX_(VALUE) and ebp, dword ptr [edx + VALUE]
#define AND_EBP_FROM_PTR_EDI_(VALUE) and ebp, dword ptr [edi + VALUE]
#define AND_EBP_FROM_PTR_ESI_(VALUE) and ebp, dword ptr [esi + VALUE]
#define AND_EBP_FROM_PTR_EBP_(VALUE) and ebp, dword ptr [ebp + VALUE]
#define AND_EBP_FROM_PTR_ESP_(VALUE) and ebp, dword ptr [esp + VALUE]
#define AND_EBP_FROM_PTR_BX_(VALUE) and ebp, dword ptr [bx + VALUE]
#define AND_EBP_FROM_PTR_BP_(VALUE) and ebp, dword ptr [bp + VALUE]
#define AND_EBP_FROM_PTR_SI_(VALUE) and ebp, dword ptr [si + VALUE]
#define AND_EBP_FROM_PTR_DI_(VALUE) and ebp, dword ptr [di + VALUE]

#define AND_ESP_FROM_PTR_EAX_(VALUE) and esp, dword ptr [eax + VALUE]
#define AND_ESP_FROM_PTR_EBX_(VALUE) and esp, dword ptr [ebx + VALUE]
#define AND_ESP_FROM_PTR_ECX_(VALUE) and esp, dword ptr [ecx + VALUE]
#define AND_ESP_FROM_PTR_EDX_(VALUE) and esp, dword ptr [edx + VALUE]
#define AND_ESP_FROM_PTR_EDI_(VALUE) and esp, dword ptr [edi + VALUE]
#define AND_ESP_FROM_PTR_ESI_(VALUE) and esp, dword ptr [esi + VALUE]
#define AND_ESP_FROM_PTR_EBP_(VALUE) and esp, dword ptr [ebp + VALUE]
#define AND_ESP_FROM_PTR_ESP_(VALUE) and esp, dword ptr [esp + VALUE]
#define AND_ESP_FROM_PTR_BX_(VALUE) and esp, dword ptr [bx + VALUE]
#define AND_ESP_FROM_PTR_BP_(VALUE) and esp, dword ptr [bp + VALUE]
#define AND_ESP_FROM_PTR_SI_(VALUE) and esp, dword ptr [si + VALUE]
#define AND_ESP_FROM_PTR_DI_(VALUE) and esp, dword ptr [di + VALUE]

#define AND_EAX_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], eax
#define AND_EAX_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], eax
#define AND_EAX_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], eax
#define AND_EAX_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], eax
#define AND_EAX_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], eax
#define AND_EAX_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], eax
#define AND_EAX_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], eax
#define AND_EAX_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], eax
#define AND_EAX_TO_PTR_BX_(VALUE) and dword ptr [bx + VALUE], eax
#define AND_EAX_TO_PTR_BP_(VALUE) and dword ptr [bp + VALUE], eax
#define AND_EAX_TO_PTR_SI_(VALUE) and dword ptr [si + VALUE], eax
#define AND_EAX_TO_PTR_DI_(VALUE) and dword ptr [di + VALUE], eax

#define AND_EBX_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], ebx
#define AND_EBX_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], ebx
#define AND_EBX_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], ebx
#define AND_EBX_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], ebx
#define AND_EBX_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], ebx
#define AND_EBX_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], ebx
#define AND_EBX_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], ebx
#define AND_EBX_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], ebx
#define AND_EBX_TO_PTR_BX_(VALUE) and dword ptr [bx + VALUE], ebx
#define AND_EBX_TO_PTR_BP_(VALUE) and dword ptr [bp + VALUE], ebx
#define AND_EBX_TO_PTR_SI_(VALUE) and dword ptr [si + VALUE], ebx
#define AND_EBX_TO_PTR_DI_(VALUE) and dword ptr [di + VALUE], ebx

#define AND_ECX_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], ecx
#define AND_ECX_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], ecx
#define AND_ECX_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], ecx
#define AND_ECX_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], ecx
#define AND_ECX_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], ecx
#define AND_ECX_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], ecx
#define AND_ECX_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], ecx
#define AND_ECX_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], ecx
#define AND_ECX_TO_PTR_BX_(VALUE) and dword ptr [bx + VALUE], ecx
#define AND_ECX_TO_PTR_BP_(VALUE) and dword ptr [bp + VALUE], ecx
#define AND_ECX_TO_PTR_SI_(VALUE) and dword ptr [si + VALUE], ecx
#define AND_ECX_TO_PTR_DI_(VALUE) and dword ptr [di + VALUE], ecx

#define AND_EDX_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], edx
#define AND_EDX_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], edx
#define AND_EDX_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], edx
#define AND_EDX_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], edx
#define AND_EDX_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], edx
#define AND_EDX_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], edx
#define AND_EDX_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], edx
#define AND_EDX_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], edx
#define AND_EDX_TO_PTR_BX_(VALUE) and dword ptr [bx + VALUE], edx
#define AND_EDX_TO_PTR_BP_(VALUE) and dword ptr [bp + VALUE], edx
#define AND_EDX_TO_PTR_SI_(VALUE) and dword ptr [si + VALUE], edx
#define AND_EDX_TO_PTR_DI_(VALUE) and dword ptr [di + VALUE], edx

#define AND_EDI_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], edi
#define AND_EDI_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], edi
#define AND_EDI_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], edi
#define AND_EDI_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], edi
#define AND_EDI_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], edi
#define AND_EDI_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], edi
#define AND_EDI_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], edi
#define AND_EDI_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], edi
#define AND_EDI_TO_PTR_BX_(VALUE) and dword ptr [bx + VALUE], edi
#define AND_EDI_TO_PTR_BP_(VALUE) and dword ptr [bp + VALUE], edi
#define AND_EDI_TO_PTR_SI_(VALUE) and dword ptr [si + VALUE], edi
#define AND_EDI_TO_PTR_DI_(VALUE) and dword ptr [di + VALUE], edi

#define AND_ESI_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], esi
#define AND_ESI_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], esi
#define AND_ESI_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], esi
#define AND_ESI_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], esi
#define AND_ESI_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], esi
#define AND_ESI_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], esi
#define AND_ESI_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], esi
#define AND_ESI_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], esi
#define AND_ESI_TO_PTR_BX_(VALUE) and dword ptr [bx + VALUE], esi
#define AND_ESI_TO_PTR_BP_(VALUE) and dword ptr [bp + VALUE], esi
#define AND_ESI_TO_PTR_SI_(VALUE) and dword ptr [si + VALUE], esi
#define AND_ESI_TO_PTR_DI_(VALUE) and dword ptr [di + VALUE], esi

#define AND_EBP_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], ebp
#define AND_EBP_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], ebp
#define AND_EBP_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], ebp
#define AND_EBP_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], ebp
#define AND_EBP_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], ebp
#define AND_EBP_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], ebp
#define AND_EBP_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], ebp
#define AND_EBP_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], ebp
#define AND_EBP_TO_PTR_BX_(VALUE) and dword ptr [bx + VALUE], ebp
#define AND_EBP_TO_PTR_BP_(VALUE) and dword ptr [bp + VALUE], ebp
#define AND_EBP_TO_PTR_SI_(VALUE) and dword ptr [si + VALUE], ebp
#define AND_EBP_TO_PTR_DI_(VALUE) and dword ptr [di + VALUE], ebp

#define AND_ESP_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], esp
#define AND_ESP_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], esp
#define AND_ESP_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], esp
#define AND_ESP_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], esp
#define AND_ESP_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], esp
#define AND_ESP_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], esp
#define AND_ESP_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], esp
#define AND_ESP_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], esp
#define AND_ESP_TO_PTR_BX_(VALUE) and dword ptr [bx + VALUE], esp
#define AND_ESP_TO_PTR_BP_(VALUE) and dword ptr [bp + VALUE], esp
#define AND_ESP_TO_PTR_SI_(VALUE) and dword ptr [si + VALUE], esp
#define AND_ESP_TO_PTR_DI_(VALUE) and dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_EAX_FROM_PTR_(VALUE) and eax, dword ptr [VALUE]
#define AND_EBX_FROM_PTR_(VALUE) and ebx, dword ptr [VALUE]
#define AND_ECX_FROM_PTR_(VALUE) and ecx, dword ptr [VALUE]
#define AND_EDX_FROM_PTR_(VALUE) and edx, dword ptr [VALUE]
#define AND_EDI_FROM_PTR_(VALUE) and edi, dword ptr [VALUE]
#define AND_ESI_FROM_PTR_(VALUE) and esi, dword ptr [VALUE]
#define AND_EBP_FROM_PTR_(VALUE) and ebp, dword ptr [VALUE]
#define AND_ESP_FROM_PTR_(VALUE) and esp, dword ptr [VALUE]
#define AND_R8D_FROM_PTR_(VALUE) and r8d, dword ptr [VALUE]
#define AND_R9D_FROM_PTR_(VALUE) and r9d, dword ptr [VALUE]
#define AND_R10D_FROM_PTR_(VALUE) and r10d, dword ptr [VALUE]
#define AND_R11D_FROM_PTR_(VALUE) and r11d, dword ptr [VALUE]
#define AND_R12D_FROM_PTR_(VALUE) and r12d, dword ptr [VALUE]
#define AND_R13D_FROM_PTR_(VALUE) and r13d, dword ptr [VALUE]
#define AND_R14D_FROM_PTR_(VALUE) and r14d, dword ptr [VALUE]
#define AND_R15D_FROM_PTR_(VALUE) and r15d, dword ptr [VALUE]

#define AND_EAX_TO_PTR_(VALUE) and dword ptr [VALUE], eax
#define AND_EBX_TO_PTR_(VALUE) and dword ptr [VALUE], ebx
#define AND_ECX_TO_PTR_(VALUE) and dword ptr [VALUE], ecx
#define AND_EDX_TO_PTR_(VALUE) and dword ptr [VALUE], edx
#define AND_EDI_TO_PTR_(VALUE) and dword ptr [VALUE], edi
#define AND_ESI_TO_PTR_(VALUE) and dword ptr [VALUE], esi
#define AND_EBP_TO_PTR_(VALUE) and dword ptr [VALUE], ebp
#define AND_ESP_TO_PTR_(VALUE) and dword ptr [VALUE], esp
#define AND_R8D_TO_PTR_(VALUE) and dword ptr [VALUE], r8d
#define AND_R9D_TO_PTR_(VALUE) and dword ptr [VALUE], r9d
#define AND_R10D_TO_PTR_(VALUE) and dword ptr [VALUE], r10d
#define AND_R11D_TO_PTR_(VALUE) and dword ptr [VALUE], r11d
#define AND_R12D_TO_PTR_(VALUE) and dword ptr [VALUE], r12d
#define AND_R13D_TO_PTR_(VALUE) and dword ptr [VALUE], r13d
#define AND_R14D_TO_PTR_(VALUE) and dword ptr [VALUE], r14d
#define AND_R15D_TO_PTR_(VALUE) and dword ptr [VALUE], r15d

#define AND_EAX_FROM_PTR_RAX and eax, dword ptr [rax]
#define AND_EAX_FROM_PTR_RBX and eax, dword ptr [rbx]
#define AND_EAX_FROM_PTR_RCX and eax, dword ptr [rcx]
#define AND_EAX_FROM_PTR_RDX and eax, dword ptr [rdx]
#define AND_EAX_FROM_PTR_RDI and eax, dword ptr [rdi]
#define AND_EAX_FROM_PTR_RSI and eax, dword ptr [rsi]
#define AND_EAX_FROM_PTR_RBP and eax, dword ptr [rbp]
#define AND_EAX_FROM_PTR_RSP and eax, dword ptr [rsp]
#define AND_EAX_FROM_PTR_R8 and eax, dword ptr [r8]
#define AND_EAX_FROM_PTR_R9 and eax, dword ptr [r9]
#define AND_EAX_FROM_PTR_R10 and eax, dword ptr [r10]
#define AND_EAX_FROM_PTR_R11 and eax, dword ptr [r11]
#define AND_EAX_FROM_PTR_R12 and eax, dword ptr [r12]
#define AND_EAX_FROM_PTR_R13 and eax, dword ptr [r13]
#define AND_EAX_FROM_PTR_R14 and eax, dword ptr [r14]
#define AND_EAX_FROM_PTR_R15 and eax, dword ptr [r15]
#define AND_EAX_FROM_PTR_EAX and eax, dword ptr [eax]
#define AND_EAX_FROM_PTR_EBX and eax, dword ptr [ebx]
#define AND_EAX_FROM_PTR_ECX and eax, dword ptr [ecx]
#define AND_EAX_FROM_PTR_EDX and eax, dword ptr [edx]
#define AND_EAX_FROM_PTR_EDI and eax, dword ptr [edi]
#define AND_EAX_FROM_PTR_ESI and eax, dword ptr [esi]
#define AND_EAX_FROM_PTR_EBP and eax, dword ptr [ebp]
#define AND_EAX_FROM_PTR_ESP and eax, dword ptr [esp]

#define AND_EBX_FROM_PTR_RAX and ebx, dword ptr [rax]
#define AND_EBX_FROM_PTR_RBX and ebx, dword ptr [rbx]
#define AND_EBX_FROM_PTR_RCX and ebx, dword ptr [rcx]
#define AND_EBX_FROM_PTR_RDX and ebx, dword ptr [rdx]
#define AND_EBX_FROM_PTR_RDI and ebx, dword ptr [rdi]
#define AND_EBX_FROM_PTR_RSI and ebx, dword ptr [rsi]
#define AND_EBX_FROM_PTR_RBP and ebx, dword ptr [rbp]
#define AND_EBX_FROM_PTR_RSP and ebx, dword ptr [rsp]
#define AND_EBX_FROM_PTR_R8 and ebx, dword ptr [r8]
#define AND_EBX_FROM_PTR_R9 and ebx, dword ptr [r9]
#define AND_EBX_FROM_PTR_R10 and ebx, dword ptr [r10]
#define AND_EBX_FROM_PTR_R11 and ebx, dword ptr [r11]
#define AND_EBX_FROM_PTR_R12 and ebx, dword ptr [r12]
#define AND_EBX_FROM_PTR_R13 and ebx, dword ptr [r13]
#define AND_EBX_FROM_PTR_R14 and ebx, dword ptr [r14]
#define AND_EBX_FROM_PTR_R15 and ebx, dword ptr [r15]
#define AND_EBX_FROM_PTR_EAX and ebx, dword ptr [eax]
#define AND_EBX_FROM_PTR_EBX and ebx, dword ptr [ebx]
#define AND_EBX_FROM_PTR_ECX and ebx, dword ptr [ecx]
#define AND_EBX_FROM_PTR_EDX and ebx, dword ptr [edx]
#define AND_EBX_FROM_PTR_EDI and ebx, dword ptr [edi]
#define AND_EBX_FROM_PTR_ESI and ebx, dword ptr [esi]
#define AND_EBX_FROM_PTR_EBP and ebx, dword ptr [ebp]
#define AND_EBX_FROM_PTR_ESP and ebx, dword ptr [esp]

#define AND_ECX_FROM_PTR_RAX and ecx, dword ptr [rax]
#define AND_ECX_FROM_PTR_RBX and ecx, dword ptr [rbx]
#define AND_ECX_FROM_PTR_RCX and ecx, dword ptr [rcx]
#define AND_ECX_FROM_PTR_RDX and ecx, dword ptr [rdx]
#define AND_ECX_FROM_PTR_RDI and ecx, dword ptr [rdi]
#define AND_ECX_FROM_PTR_RSI and ecx, dword ptr [rsi]
#define AND_ECX_FROM_PTR_RBP and ecx, dword ptr [rbp]
#define AND_ECX_FROM_PTR_RSP and ecx, dword ptr [rsp]
#define AND_ECX_FROM_PTR_R8 and ecx, dword ptr [r8]
#define AND_ECX_FROM_PTR_R9 and ecx, dword ptr [r9]
#define AND_ECX_FROM_PTR_R10 and ecx, dword ptr [r10]
#define AND_ECX_FROM_PTR_R11 and ecx, dword ptr [r11]
#define AND_ECX_FROM_PTR_R12 and ecx, dword ptr [r12]
#define AND_ECX_FROM_PTR_R13 and ecx, dword ptr [r13]
#define AND_ECX_FROM_PTR_R14 and ecx, dword ptr [r14]
#define AND_ECX_FROM_PTR_R15 and ecx, dword ptr [r15]
#define AND_ECX_FROM_PTR_EAX and ecx, dword ptr [eax]
#define AND_ECX_FROM_PTR_EBX and ecx, dword ptr [ebx]
#define AND_ECX_FROM_PTR_ECX and ecx, dword ptr [ecx]
#define AND_ECX_FROM_PTR_EDX and ecx, dword ptr [edx]
#define AND_ECX_FROM_PTR_EDI and ecx, dword ptr [edi]
#define AND_ECX_FROM_PTR_ESI and ecx, dword ptr [esi]
#define AND_ECX_FROM_PTR_EBP and ecx, dword ptr [ebp]
#define AND_ECX_FROM_PTR_ESP and ecx, dword ptr [esp]

#define AND_EDX_FROM_PTR_RAX and edx, dword ptr [rax]
#define AND_EDX_FROM_PTR_RBX and edx, dword ptr [rbx]
#define AND_EDX_FROM_PTR_RCX and edx, dword ptr [rcx]
#define AND_EDX_FROM_PTR_RDX and edx, dword ptr [rdx]
#define AND_EDX_FROM_PTR_RDI and edx, dword ptr [rdi]
#define AND_EDX_FROM_PTR_RSI and edx, dword ptr [rsi]
#define AND_EDX_FROM_PTR_RBP and edx, dword ptr [rbp]
#define AND_EDX_FROM_PTR_RSP and edx, dword ptr [rsp]
#define AND_EDX_FROM_PTR_R8 and edx, dword ptr [r8]
#define AND_EDX_FROM_PTR_R9 and edx, dword ptr [r9]
#define AND_EDX_FROM_PTR_R10 and edx, dword ptr [r10]
#define AND_EDX_FROM_PTR_R11 and edx, dword ptr [r11]
#define AND_EDX_FROM_PTR_R12 and edx, dword ptr [r12]
#define AND_EDX_FROM_PTR_R13 and edx, dword ptr [r13]
#define AND_EDX_FROM_PTR_R14 and edx, dword ptr [r14]
#define AND_EDX_FROM_PTR_R15 and edx, dword ptr [r15]
#define AND_EDX_FROM_PTR_EAX and edx, dword ptr [eax]
#define AND_EDX_FROM_PTR_EBX and edx, dword ptr [ebx]
#define AND_EDX_FROM_PTR_ECX and edx, dword ptr [ecx]
#define AND_EDX_FROM_PTR_EDX and edx, dword ptr [edx]
#define AND_EDX_FROM_PTR_EDI and edx, dword ptr [edi]
#define AND_EDX_FROM_PTR_ESI and edx, dword ptr [esi]
#define AND_EDX_FROM_PTR_EBP and edx, dword ptr [ebp]
#define AND_EDX_FROM_PTR_ESP and edx, dword ptr [esp]

#define AND_EDI_FROM_PTR_RAX and edi, dword ptr [rax]
#define AND_EDI_FROM_PTR_RBX and edi, dword ptr [rbx]
#define AND_EDI_FROM_PTR_RCX and edi, dword ptr [rcx]
#define AND_EDI_FROM_PTR_RDX and edi, dword ptr [rdx]
#define AND_EDI_FROM_PTR_RDI and edi, dword ptr [rdi]
#define AND_EDI_FROM_PTR_RSI and edi, dword ptr [rsi]
#define AND_EDI_FROM_PTR_RBP and edi, dword ptr [rbp]
#define AND_EDI_FROM_PTR_RSP and edi, dword ptr [rsp]
#define AND_EDI_FROM_PTR_R8 and edi, dword ptr [r8]
#define AND_EDI_FROM_PTR_R9 and edi, dword ptr [r9]
#define AND_EDI_FROM_PTR_R10 and edi, dword ptr [r10]
#define AND_EDI_FROM_PTR_R11 and edi, dword ptr [r11]
#define AND_EDI_FROM_PTR_R12 and edi, dword ptr [r12]
#define AND_EDI_FROM_PTR_R13 and edi, dword ptr [r13]
#define AND_EDI_FROM_PTR_R14 and edi, dword ptr [r14]
#define AND_EDI_FROM_PTR_R15 and edi, dword ptr [r15]
#define AND_EDI_FROM_PTR_EAX and edi, dword ptr [eax]
#define AND_EDI_FROM_PTR_EBX and edi, dword ptr [ebx]
#define AND_EDI_FROM_PTR_ECX and edi, dword ptr [ecx]
#define AND_EDI_FROM_PTR_EDX and edi, dword ptr [edx]
#define AND_EDI_FROM_PTR_EDI and edi, dword ptr [edi]
#define AND_EDI_FROM_PTR_ESI and edi, dword ptr [esi]
#define AND_EDI_FROM_PTR_EBP and edi, dword ptr [ebp]
#define AND_EDI_FROM_PTR_ESP and edi, dword ptr [esp]

#define AND_ESI_FROM_PTR_RAX and esi, dword ptr [rax]
#define AND_ESI_FROM_PTR_RBX and esi, dword ptr [rbx]
#define AND_ESI_FROM_PTR_RCX and esi, dword ptr [rcx]
#define AND_ESI_FROM_PTR_RDX and esi, dword ptr [rdx]
#define AND_ESI_FROM_PTR_RDI and esi, dword ptr [rdi]
#define AND_ESI_FROM_PTR_RSI and esi, dword ptr [rsi]
#define AND_ESI_FROM_PTR_RBP and esi, dword ptr [rbp]
#define AND_ESI_FROM_PTR_RSP and esi, dword ptr [rsp]
#define AND_ESI_FROM_PTR_R8 and esi, dword ptr [r8]
#define AND_ESI_FROM_PTR_R9 and esi, dword ptr [r9]
#define AND_ESI_FROM_PTR_R10 and esi, dword ptr [r10]
#define AND_ESI_FROM_PTR_R11 and esi, dword ptr [r11]
#define AND_ESI_FROM_PTR_R12 and esi, dword ptr [r12]
#define AND_ESI_FROM_PTR_R13 and esi, dword ptr [r13]
#define AND_ESI_FROM_PTR_R14 and esi, dword ptr [r14]
#define AND_ESI_FROM_PTR_R15 and esi, dword ptr [r15]
#define AND_ESI_FROM_PTR_EAX and esi, dword ptr [eax]
#define AND_ESI_FROM_PTR_EBX and esi, dword ptr [ebx]
#define AND_ESI_FROM_PTR_ECX and esi, dword ptr [ecx]
#define AND_ESI_FROM_PTR_EDX and esi, dword ptr [edx]
#define AND_ESI_FROM_PTR_EDI and esi, dword ptr [edi]
#define AND_ESI_FROM_PTR_ESI and esi, dword ptr [esi]
#define AND_ESI_FROM_PTR_EBP and esi, dword ptr [ebp]
#define AND_ESI_FROM_PTR_ESP and esi, dword ptr [esp]

#define AND_EBP_FROM_PTR_RAX and ebp, dword ptr [rax]
#define AND_EBP_FROM_PTR_RBX and ebp, dword ptr [rbx]
#define AND_EBP_FROM_PTR_RCX and ebp, dword ptr [rcx]
#define AND_EBP_FROM_PTR_RDX and ebp, dword ptr [rdx]
#define AND_EBP_FROM_PTR_RDI and ebp, dword ptr [rdi]
#define AND_EBP_FROM_PTR_RSI and ebp, dword ptr [rsi]
#define AND_EBP_FROM_PTR_RBP and ebp, dword ptr [rbp]
#define AND_EBP_FROM_PTR_RSP and ebp, dword ptr [rsp]
#define AND_EBP_FROM_PTR_R8 and ebp, dword ptr [r8]
#define AND_EBP_FROM_PTR_R9 and ebp, dword ptr [r9]
#define AND_EBP_FROM_PTR_R10 and ebp, dword ptr [r10]
#define AND_EBP_FROM_PTR_R11 and ebp, dword ptr [r11]
#define AND_EBP_FROM_PTR_R12 and ebp, dword ptr [r12]
#define AND_EBP_FROM_PTR_R13 and ebp, dword ptr [r13]
#define AND_EBP_FROM_PTR_R14 and ebp, dword ptr [r14]
#define AND_EBP_FROM_PTR_R15 and ebp, dword ptr [r15]
#define AND_EBP_FROM_PTR_EAX and ebp, dword ptr [eax]
#define AND_EBP_FROM_PTR_EBX and ebp, dword ptr [ebx]
#define AND_EBP_FROM_PTR_ECX and ebp, dword ptr [ecx]
#define AND_EBP_FROM_PTR_EDX and ebp, dword ptr [edx]
#define AND_EBP_FROM_PTR_EDI and ebp, dword ptr [edi]
#define AND_EBP_FROM_PTR_ESI and ebp, dword ptr [esi]
#define AND_EBP_FROM_PTR_EBP and ebp, dword ptr [ebp]
#define AND_EBP_FROM_PTR_ESP and ebp, dword ptr [esp]

#define AND_ESP_FROM_PTR_RAX and esp, dword ptr [rax]
#define AND_ESP_FROM_PTR_RBX and esp, dword ptr [rbx]
#define AND_ESP_FROM_PTR_RCX and esp, dword ptr [rcx]
#define AND_ESP_FROM_PTR_RDX and esp, dword ptr [rdx]
#define AND_ESP_FROM_PTR_RDI and esp, dword ptr [rdi]
#define AND_ESP_FROM_PTR_RSI and esp, dword ptr [rsi]
#define AND_ESP_FROM_PTR_RBP and esp, dword ptr [rbp]
#define AND_ESP_FROM_PTR_RSP and esp, dword ptr [rsp]
#define AND_ESP_FROM_PTR_R8 and esp, dword ptr [r8]
#define AND_ESP_FROM_PTR_R9 and esp, dword ptr [r9]
#define AND_ESP_FROM_PTR_R10 and esp, dword ptr [r10]
#define AND_ESP_FROM_PTR_R11 and esp, dword ptr [r11]
#define AND_ESP_FROM_PTR_R12 and esp, dword ptr [r12]
#define AND_ESP_FROM_PTR_R13 and esp, dword ptr [r13]
#define AND_ESP_FROM_PTR_R14 and esp, dword ptr [r14]
#define AND_ESP_FROM_PTR_R15 and esp, dword ptr [r15]
#define AND_ESP_FROM_PTR_EAX and esp, dword ptr [eax]
#define AND_ESP_FROM_PTR_EBX and esp, dword ptr [ebx]
#define AND_ESP_FROM_PTR_ECX and esp, dword ptr [ecx]
#define AND_ESP_FROM_PTR_EDX and esp, dword ptr [edx]
#define AND_ESP_FROM_PTR_EDI and esp, dword ptr [edi]
#define AND_ESP_FROM_PTR_ESI and esp, dword ptr [esi]
#define AND_ESP_FROM_PTR_EBP and esp, dword ptr [ebp]
#define AND_ESP_FROM_PTR_ESP and esp, dword ptr [esp]

#define AND_R8D_FROM_PTR_RAX and r8d, dword ptr [rax]
#define AND_R8D_FROM_PTR_RBX and r8d, dword ptr [rbx]
#define AND_R8D_FROM_PTR_RCX and r8d, dword ptr [rcx]
#define AND_R8D_FROM_PTR_RDX and r8d, dword ptr [rdx]
#define AND_R8D_FROM_PTR_RDI and r8d, dword ptr [rdi]
#define AND_R8D_FROM_PTR_RSI and r8d, dword ptr [rsi]
#define AND_R8D_FROM_PTR_RBP and r8d, dword ptr [rbp]
#define AND_R8D_FROM_PTR_RSP and r8d, dword ptr [rsp]
#define AND_R8D_FROM_PTR_R8 and r8d, dword ptr [r8]
#define AND_R8D_FROM_PTR_R9 and r8d, dword ptr [r9]
#define AND_R8D_FROM_PTR_R10 and r8d, dword ptr [r10]
#define AND_R8D_FROM_PTR_R11 and r8d, dword ptr [r11]
#define AND_R8D_FROM_PTR_R12 and r8d, dword ptr [r12]
#define AND_R8D_FROM_PTR_R13 and r8d, dword ptr [r13]
#define AND_R8D_FROM_PTR_R14 and r8d, dword ptr [r14]
#define AND_R8D_FROM_PTR_R15 and r8d, dword ptr [r15]
#define AND_R8D_FROM_PTR_EAX and r8d, dword ptr [eax]
#define AND_R8D_FROM_PTR_EBX and r8d, dword ptr [ebx]
#define AND_R8D_FROM_PTR_ECX and r8d, dword ptr [ecx]
#define AND_R8D_FROM_PTR_EDX and r8d, dword ptr [edx]
#define AND_R8D_FROM_PTR_EDI and r8d, dword ptr [edi]
#define AND_R8D_FROM_PTR_ESI and r8d, dword ptr [esi]
#define AND_R8D_FROM_PTR_EBP and r8d, dword ptr [ebp]
#define AND_R8D_FROM_PTR_ESP and r8d, dword ptr [esp]

#define AND_R9D_FROM_PTR_RAX and r9d, dword ptr [rax]
#define AND_R9D_FROM_PTR_RBX and r9d, dword ptr [rbx]
#define AND_R9D_FROM_PTR_RCX and r9d, dword ptr [rcx]
#define AND_R9D_FROM_PTR_RDX and r9d, dword ptr [rdx]
#define AND_R9D_FROM_PTR_RDI and r9d, dword ptr [rdi]
#define AND_R9D_FROM_PTR_RSI and r9d, dword ptr [rsi]
#define AND_R9D_FROM_PTR_RBP and r9d, dword ptr [rbp]
#define AND_R9D_FROM_PTR_RSP and r9d, dword ptr [rsp]
#define AND_R9D_FROM_PTR_R8 and r9d, dword ptr [r8]
#define AND_R9D_FROM_PTR_R9 and r9d, dword ptr [r9]
#define AND_R9D_FROM_PTR_R10 and r9d, dword ptr [r10]
#define AND_R9D_FROM_PTR_R11 and r9d, dword ptr [r11]
#define AND_R9D_FROM_PTR_R12 and r9d, dword ptr [r12]
#define AND_R9D_FROM_PTR_R13 and r9d, dword ptr [r13]
#define AND_R9D_FROM_PTR_R14 and r9d, dword ptr [r14]
#define AND_R9D_FROM_PTR_R15 and r9d, dword ptr [r15]
#define AND_R9D_FROM_PTR_EAX and r9d, dword ptr [eax]
#define AND_R9D_FROM_PTR_EBX and r9d, dword ptr [ebx]
#define AND_R9D_FROM_PTR_ECX and r9d, dword ptr [ecx]
#define AND_R9D_FROM_PTR_EDX and r9d, dword ptr [edx]
#define AND_R9D_FROM_PTR_EDI and r9d, dword ptr [edi]
#define AND_R9D_FROM_PTR_ESI and r9d, dword ptr [esi]
#define AND_R9D_FROM_PTR_EBP and r9d, dword ptr [ebp]
#define AND_R9D_FROM_PTR_ESP and r9d, dword ptr [esp]

#define AND_R10D_FROM_PTR_RAX and r10d, dword ptr [rax]
#define AND_R10D_FROM_PTR_RBX and r10d, dword ptr [rbx]
#define AND_R10D_FROM_PTR_RCX and r10d, dword ptr [rcx]
#define AND_R10D_FROM_PTR_RDX and r10d, dword ptr [rdx]
#define AND_R10D_FROM_PTR_RDI and r10d, dword ptr [rdi]
#define AND_R10D_FROM_PTR_RSI and r10d, dword ptr [rsi]
#define AND_R10D_FROM_PTR_RBP and r10d, dword ptr [rbp]
#define AND_R10D_FROM_PTR_RSP and r10d, dword ptr [rsp]
#define AND_R10D_FROM_PTR_R8 and r10d, dword ptr [r8]
#define AND_R10D_FROM_PTR_R9 and r10d, dword ptr [r9]
#define AND_R10D_FROM_PTR_R10 and r10d, dword ptr [r10]
#define AND_R10D_FROM_PTR_R11 and r10d, dword ptr [r11]
#define AND_R10D_FROM_PTR_R12 and r10d, dword ptr [r12]
#define AND_R10D_FROM_PTR_R13 and r10d, dword ptr [r13]
#define AND_R10D_FROM_PTR_R14 and r10d, dword ptr [r14]
#define AND_R10D_FROM_PTR_R15 and r10d, dword ptr [r15]
#define AND_R10D_FROM_PTR_EAX and r10d, dword ptr [eax]
#define AND_R10D_FROM_PTR_EBX and r10d, dword ptr [ebx]
#define AND_R10D_FROM_PTR_ECX and r10d, dword ptr [ecx]
#define AND_R10D_FROM_PTR_EDX and r10d, dword ptr [edx]
#define AND_R10D_FROM_PTR_EDI and r10d, dword ptr [edi]
#define AND_R10D_FROM_PTR_ESI and r10d, dword ptr [esi]
#define AND_R10D_FROM_PTR_EBP and r10d, dword ptr [ebp]
#define AND_R10D_FROM_PTR_ESP and r10d, dword ptr [esp]

#define AND_R11D_FROM_PTR_RAX and r11d, dword ptr [rax]
#define AND_R11D_FROM_PTR_RBX and r11d, dword ptr [rbx]
#define AND_R11D_FROM_PTR_RCX and r11d, dword ptr [rcx]
#define AND_R11D_FROM_PTR_RDX and r11d, dword ptr [rdx]
#define AND_R11D_FROM_PTR_RDI and r11d, dword ptr [rdi]
#define AND_R11D_FROM_PTR_RSI and r11d, dword ptr [rsi]
#define AND_R11D_FROM_PTR_RBP and r11d, dword ptr [rbp]
#define AND_R11D_FROM_PTR_RSP and r11d, dword ptr [rsp]
#define AND_R11D_FROM_PTR_R8 and r11d, dword ptr [r8]
#define AND_R11D_FROM_PTR_R9 and r11d, dword ptr [r9]
#define AND_R11D_FROM_PTR_R10 and r11d, dword ptr [r10]
#define AND_R11D_FROM_PTR_R11 and r11d, dword ptr [r11]
#define AND_R11D_FROM_PTR_R12 and r11d, dword ptr [r12]
#define AND_R11D_FROM_PTR_R13 and r11d, dword ptr [r13]
#define AND_R11D_FROM_PTR_R14 and r11d, dword ptr [r14]
#define AND_R11D_FROM_PTR_R15 and r11d, dword ptr [r15]
#define AND_R11D_FROM_PTR_EAX and r11d, dword ptr [eax]
#define AND_R11D_FROM_PTR_EBX and r11d, dword ptr [ebx]
#define AND_R11D_FROM_PTR_ECX and r11d, dword ptr [ecx]
#define AND_R11D_FROM_PTR_EDX and r11d, dword ptr [edx]
#define AND_R11D_FROM_PTR_EDI and r11d, dword ptr [edi]
#define AND_R11D_FROM_PTR_ESI and r11d, dword ptr [esi]
#define AND_R11D_FROM_PTR_EBP and r11d, dword ptr [ebp]
#define AND_R11D_FROM_PTR_ESP and r11d, dword ptr [esp]

#define AND_R12D_FROM_PTR_RAX and r12d, dword ptr [rax]
#define AND_R12D_FROM_PTR_RBX and r12d, dword ptr [rbx]
#define AND_R12D_FROM_PTR_RCX and r12d, dword ptr [rcx]
#define AND_R12D_FROM_PTR_RDX and r12d, dword ptr [rdx]
#define AND_R12D_FROM_PTR_RDI and r12d, dword ptr [rdi]
#define AND_R12D_FROM_PTR_RSI and r12d, dword ptr [rsi]
#define AND_R12D_FROM_PTR_RBP and r12d, dword ptr [rbp]
#define AND_R12D_FROM_PTR_RSP and r12d, dword ptr [rsp]
#define AND_R12D_FROM_PTR_R8 and r12d, dword ptr [r8]
#define AND_R12D_FROM_PTR_R9 and r12d, dword ptr [r9]
#define AND_R12D_FROM_PTR_R10 and r12d, dword ptr [r10]
#define AND_R12D_FROM_PTR_R11 and r12d, dword ptr [r11]
#define AND_R12D_FROM_PTR_R12 and r12d, dword ptr [r12]
#define AND_R12D_FROM_PTR_R13 and r12d, dword ptr [r13]
#define AND_R12D_FROM_PTR_R14 and r12d, dword ptr [r14]
#define AND_R12D_FROM_PTR_R15 and r12d, dword ptr [r15]
#define AND_R12D_FROM_PTR_EAX and r12d, dword ptr [eax]
#define AND_R12D_FROM_PTR_EBX and r12d, dword ptr [ebx]
#define AND_R12D_FROM_PTR_ECX and r12d, dword ptr [ecx]
#define AND_R12D_FROM_PTR_EDX and r12d, dword ptr [edx]
#define AND_R12D_FROM_PTR_EDI and r12d, dword ptr [edi]
#define AND_R12D_FROM_PTR_ESI and r12d, dword ptr [esi]
#define AND_R12D_FROM_PTR_EBP and r12d, dword ptr [ebp]
#define AND_R12D_FROM_PTR_ESP and r12d, dword ptr [esp]

#define AND_R13D_FROM_PTR_RAX and r13d, dword ptr [rax]
#define AND_R13D_FROM_PTR_RBX and r13d, dword ptr [rbx]
#define AND_R13D_FROM_PTR_RCX and r13d, dword ptr [rcx]
#define AND_R13D_FROM_PTR_RDX and r13d, dword ptr [rdx]
#define AND_R13D_FROM_PTR_RDI and r13d, dword ptr [rdi]
#define AND_R13D_FROM_PTR_RSI and r13d, dword ptr [rsi]
#define AND_R13D_FROM_PTR_RBP and r13d, dword ptr [rbp]
#define AND_R13D_FROM_PTR_RSP and r13d, dword ptr [rsp]
#define AND_R13D_FROM_PTR_R8 and r13d, dword ptr [r8]
#define AND_R13D_FROM_PTR_R9 and r13d, dword ptr [r9]
#define AND_R13D_FROM_PTR_R10 and r13d, dword ptr [r10]
#define AND_R13D_FROM_PTR_R11 and r13d, dword ptr [r11]
#define AND_R13D_FROM_PTR_R12 and r13d, dword ptr [r12]
#define AND_R13D_FROM_PTR_R13 and r13d, dword ptr [r13]
#define AND_R13D_FROM_PTR_R14 and r13d, dword ptr [r14]
#define AND_R13D_FROM_PTR_R15 and r13d, dword ptr [r15]
#define AND_R13D_FROM_PTR_EAX and r13d, dword ptr [eax]
#define AND_R13D_FROM_PTR_EBX and r13d, dword ptr [ebx]
#define AND_R13D_FROM_PTR_ECX and r13d, dword ptr [ecx]
#define AND_R13D_FROM_PTR_EDX and r13d, dword ptr [edx]
#define AND_R13D_FROM_PTR_EDI and r13d, dword ptr [edi]
#define AND_R13D_FROM_PTR_ESI and r13d, dword ptr [esi]
#define AND_R13D_FROM_PTR_EBP and r13d, dword ptr [ebp]
#define AND_R13D_FROM_PTR_ESP and r13d, dword ptr [esp]

#define AND_R14D_FROM_PTR_RAX and r14d, dword ptr [rax]
#define AND_R14D_FROM_PTR_RBX and r14d, dword ptr [rbx]
#define AND_R14D_FROM_PTR_RCX and r14d, dword ptr [rcx]
#define AND_R14D_FROM_PTR_RDX and r14d, dword ptr [rdx]
#define AND_R14D_FROM_PTR_RDI and r14d, dword ptr [rdi]
#define AND_R14D_FROM_PTR_RSI and r14d, dword ptr [rsi]
#define AND_R14D_FROM_PTR_RBP and r14d, dword ptr [rbp]
#define AND_R14D_FROM_PTR_RSP and r14d, dword ptr [rsp]
#define AND_R14D_FROM_PTR_R8 and r14d, dword ptr [r8]
#define AND_R14D_FROM_PTR_R9 and r14d, dword ptr [r9]
#define AND_R14D_FROM_PTR_R10 and r14d, dword ptr [r10]
#define AND_R14D_FROM_PTR_R11 and r14d, dword ptr [r11]
#define AND_R14D_FROM_PTR_R12 and r14d, dword ptr [r12]
#define AND_R14D_FROM_PTR_R13 and r14d, dword ptr [r13]
#define AND_R14D_FROM_PTR_R14 and r14d, dword ptr [r14]
#define AND_R14D_FROM_PTR_R15 and r14d, dword ptr [r15]
#define AND_R14D_FROM_PTR_EAX and r14d, dword ptr [eax]
#define AND_R14D_FROM_PTR_EBX and r14d, dword ptr [ebx]
#define AND_R14D_FROM_PTR_ECX and r14d, dword ptr [ecx]
#define AND_R14D_FROM_PTR_EDX and r14d, dword ptr [edx]
#define AND_R14D_FROM_PTR_EDI and r14d, dword ptr [edi]
#define AND_R14D_FROM_PTR_ESI and r14d, dword ptr [esi]
#define AND_R14D_FROM_PTR_EBP and r14d, dword ptr [ebp]
#define AND_R14D_FROM_PTR_ESP and r14d, dword ptr [esp]

#define AND_R15D_FROM_PTR_RAX and r15d, dword ptr [rax]
#define AND_R15D_FROM_PTR_RBX and r15d, dword ptr [rbx]
#define AND_R15D_FROM_PTR_RCX and r15d, dword ptr [rcx]
#define AND_R15D_FROM_PTR_RDX and r15d, dword ptr [rdx]
#define AND_R15D_FROM_PTR_RDI and r15d, dword ptr [rdi]
#define AND_R15D_FROM_PTR_RSI and r15d, dword ptr [rsi]
#define AND_R15D_FROM_PTR_RBP and r15d, dword ptr [rbp]
#define AND_R15D_FROM_PTR_RSP and r15d, dword ptr [rsp]
#define AND_R15D_FROM_PTR_R8 and r15d, dword ptr [r8]
#define AND_R15D_FROM_PTR_R9 and r15d, dword ptr [r9]
#define AND_R15D_FROM_PTR_R10 and r15d, dword ptr [r10]
#define AND_R15D_FROM_PTR_R11 and r15d, dword ptr [r11]
#define AND_R15D_FROM_PTR_R12 and r15d, dword ptr [r12]
#define AND_R15D_FROM_PTR_R13 and r15d, dword ptr [r13]
#define AND_R15D_FROM_PTR_R14 and r15d, dword ptr [r14]
#define AND_R15D_FROM_PTR_R15 and r15d, dword ptr [r15]
#define AND_R15D_FROM_PTR_EAX and r15d, dword ptr [eax]
#define AND_R15D_FROM_PTR_EBX and r15d, dword ptr [ebx]
#define AND_R15D_FROM_PTR_ECX and r15d, dword ptr [ecx]
#define AND_R15D_FROM_PTR_EDX and r15d, dword ptr [edx]
#define AND_R15D_FROM_PTR_EDI and r15d, dword ptr [edi]
#define AND_R15D_FROM_PTR_ESI and r15d, dword ptr [esi]
#define AND_R15D_FROM_PTR_EBP and r15d, dword ptr [ebp]
#define AND_R15D_FROM_PTR_ESP and r15d, dword ptr [esp]

#define AND_EAX_TO_PTR_RAX and dword ptr [rax], eax
#define AND_EAX_TO_PTR_RBX and dword ptr [rbx], eax
#define AND_EAX_TO_PTR_RCX and dword ptr [rcx], eax
#define AND_EAX_TO_PTR_RDX and dword ptr [rdx], eax
#define AND_EAX_TO_PTR_RDI and dword ptr [rdi], eax
#define AND_EAX_TO_PTR_RSI and dword ptr [rsi], eax
#define AND_EAX_TO_PTR_RBP and dword ptr [rbp], eax
#define AND_EAX_TO_PTR_RSP and dword ptr [rsp], eax
#define AND_EAX_TO_PTR_R8 and dword ptr [r8], eax
#define AND_EAX_TO_PTR_R9 and dword ptr [r9], eax
#define AND_EAX_TO_PTR_R10 and dword ptr [r10], eax
#define AND_EAX_TO_PTR_R11 and dword ptr [r11], eax
#define AND_EAX_TO_PTR_R12 and dword ptr [r12], eax
#define AND_EAX_TO_PTR_R13 and dword ptr [r13], eax
#define AND_EAX_TO_PTR_R14 and dword ptr [r14], eax
#define AND_EAX_TO_PTR_R15 and dword ptr [r15], eax
#define AND_EAX_TO_PTR_EAX and dword ptr [eax], eax
#define AND_EAX_TO_PTR_EBX and dword ptr [ebx], eax
#define AND_EAX_TO_PTR_ECX and dword ptr [ecx], eax
#define AND_EAX_TO_PTR_EDX and dword ptr [edx], eax
#define AND_EAX_TO_PTR_EDI and dword ptr [edi], eax
#define AND_EAX_TO_PTR_ESI and dword ptr [esi], eax
#define AND_EAX_TO_PTR_EBP and dword ptr [ebp], eax
#define AND_EAX_TO_PTR_ESP and dword ptr [esp], eax

#define AND_EBX_TO_PTR_RAX and dword ptr [rax], ebx
#define AND_EBX_TO_PTR_RBX and dword ptr [rbx], ebx
#define AND_EBX_TO_PTR_RCX and dword ptr [rcx], ebx
#define AND_EBX_TO_PTR_RDX and dword ptr [rdx], ebx
#define AND_EBX_TO_PTR_RDI and dword ptr [rdi], ebx
#define AND_EBX_TO_PTR_RSI and dword ptr [rsi], ebx
#define AND_EBX_TO_PTR_RBP and dword ptr [rbp], ebx
#define AND_EBX_TO_PTR_RSP and dword ptr [rsp], ebx
#define AND_EBX_TO_PTR_R8 and dword ptr [r8], ebx
#define AND_EBX_TO_PTR_R9 and dword ptr [r9], ebx
#define AND_EBX_TO_PTR_R10 and dword ptr [r10], ebx
#define AND_EBX_TO_PTR_R11 and dword ptr [r11], ebx
#define AND_EBX_TO_PTR_R12 and dword ptr [r12], ebx
#define AND_EBX_TO_PTR_R13 and dword ptr [r13], ebx
#define AND_EBX_TO_PTR_R14 and dword ptr [r14], ebx
#define AND_EBX_TO_PTR_R15 and dword ptr [r15], ebx
#define AND_EBX_TO_PTR_EAX and dword ptr [eax], ebx
#define AND_EBX_TO_PTR_EBX and dword ptr [ebx], ebx
#define AND_EBX_TO_PTR_ECX and dword ptr [ecx], ebx
#define AND_EBX_TO_PTR_EDX and dword ptr [edx], ebx
#define AND_EBX_TO_PTR_EDI and dword ptr [edi], ebx
#define AND_EBX_TO_PTR_ESI and dword ptr [esi], ebx
#define AND_EBX_TO_PTR_EBP and dword ptr [ebp], ebx
#define AND_EBX_TO_PTR_ESP and dword ptr [esp], ebx

#define AND_ECX_TO_PTR_RAX and dword ptr [rax], ecx
#define AND_ECX_TO_PTR_RBX and dword ptr [rbx], ecx
#define AND_ECX_TO_PTR_RCX and dword ptr [rcx], ecx
#define AND_ECX_TO_PTR_RDX and dword ptr [rdx], ecx
#define AND_ECX_TO_PTR_RDI and dword ptr [rdi], ecx
#define AND_ECX_TO_PTR_RSI and dword ptr [rsi], ecx
#define AND_ECX_TO_PTR_RBP and dword ptr [rbp], ecx
#define AND_ECX_TO_PTR_RSP and dword ptr [rsp], ecx
#define AND_ECX_TO_PTR_R8 and dword ptr [r8], ecx
#define AND_ECX_TO_PTR_R9 and dword ptr [r9], ecx
#define AND_ECX_TO_PTR_R10 and dword ptr [r10], ecx
#define AND_ECX_TO_PTR_R11 and dword ptr [r11], ecx
#define AND_ECX_TO_PTR_R12 and dword ptr [r12], ecx
#define AND_ECX_TO_PTR_R13 and dword ptr [r13], ecx
#define AND_ECX_TO_PTR_R14 and dword ptr [r14], ecx
#define AND_ECX_TO_PTR_R15 and dword ptr [r15], ecx
#define AND_ECX_TO_PTR_EAX and dword ptr [eax], ecx
#define AND_ECX_TO_PTR_EBX and dword ptr [ebx], ecx
#define AND_ECX_TO_PTR_ECX and dword ptr [ecx], ecx
#define AND_ECX_TO_PTR_EDX and dword ptr [edx], ecx
#define AND_ECX_TO_PTR_EDI and dword ptr [edi], ecx
#define AND_ECX_TO_PTR_ESI and dword ptr [esi], ecx
#define AND_ECX_TO_PTR_EBP and dword ptr [ebp], ecx
#define AND_ECX_TO_PTR_ESP and dword ptr [esp], ecx

#define AND_EDX_TO_PTR_RAX and dword ptr [rax], edx
#define AND_EDX_TO_PTR_RBX and dword ptr [rbx], edx
#define AND_EDX_TO_PTR_RCX and dword ptr [rcx], edx
#define AND_EDX_TO_PTR_RDX and dword ptr [rdx], edx
#define AND_EDX_TO_PTR_RDI and dword ptr [rdi], edx
#define AND_EDX_TO_PTR_RSI and dword ptr [rsi], edx
#define AND_EDX_TO_PTR_RBP and dword ptr [rbp], edx
#define AND_EDX_TO_PTR_RSP and dword ptr [rsp], edx
#define AND_EDX_TO_PTR_R8 and dword ptr [r8], edx
#define AND_EDX_TO_PTR_R9 and dword ptr [r9], edx
#define AND_EDX_TO_PTR_R10 and dword ptr [r10], edx
#define AND_EDX_TO_PTR_R11 and dword ptr [r11], edx
#define AND_EDX_TO_PTR_R12 and dword ptr [r12], edx
#define AND_EDX_TO_PTR_R13 and dword ptr [r13], edx
#define AND_EDX_TO_PTR_R14 and dword ptr [r14], edx
#define AND_EDX_TO_PTR_R15 and dword ptr [r15], edx
#define AND_EDX_TO_PTR_EAX and dword ptr [eax], edx
#define AND_EDX_TO_PTR_EBX and dword ptr [ebx], edx
#define AND_EDX_TO_PTR_ECX and dword ptr [ecx], edx
#define AND_EDX_TO_PTR_EDX and dword ptr [edx], edx
#define AND_EDX_TO_PTR_EDI and dword ptr [edi], edx
#define AND_EDX_TO_PTR_ESI and dword ptr [esi], edx
#define AND_EDX_TO_PTR_EBP and dword ptr [ebp], edx
#define AND_EDX_TO_PTR_ESP and dword ptr [esp], edx

#define AND_EDI_TO_PTR_RAX and dword ptr [rax], edi
#define AND_EDI_TO_PTR_RBX and dword ptr [rbx], edi
#define AND_EDI_TO_PTR_RCX and dword ptr [rcx], edi
#define AND_EDI_TO_PTR_RDX and dword ptr [rdx], edi
#define AND_EDI_TO_PTR_RDI and dword ptr [rdi], edi
#define AND_EDI_TO_PTR_RSI and dword ptr [rsi], edi
#define AND_EDI_TO_PTR_RBP and dword ptr [rbp], edi
#define AND_EDI_TO_PTR_RSP and dword ptr [rsp], edi
#define AND_EDI_TO_PTR_R8 and dword ptr [r8], edi
#define AND_EDI_TO_PTR_R9 and dword ptr [r9], edi
#define AND_EDI_TO_PTR_R10 and dword ptr [r10], edi
#define AND_EDI_TO_PTR_R11 and dword ptr [r11], edi
#define AND_EDI_TO_PTR_R12 and dword ptr [r12], edi
#define AND_EDI_TO_PTR_R13 and dword ptr [r13], edi
#define AND_EDI_TO_PTR_R14 and dword ptr [r14], edi
#define AND_EDI_TO_PTR_R15 and dword ptr [r15], edi
#define AND_EDI_TO_PTR_EAX and dword ptr [eax], edi
#define AND_EDI_TO_PTR_EBX and dword ptr [ebx], edi
#define AND_EDI_TO_PTR_ECX and dword ptr [ecx], edi
#define AND_EDI_TO_PTR_EDX and dword ptr [edx], edi
#define AND_EDI_TO_PTR_EDI and dword ptr [edi], edi
#define AND_EDI_TO_PTR_ESI and dword ptr [esi], edi
#define AND_EDI_TO_PTR_EBP and dword ptr [ebp], edi
#define AND_EDI_TO_PTR_ESP and dword ptr [esp], edi

#define AND_ESI_TO_PTR_RAX and dword ptr [rax], esi
#define AND_ESI_TO_PTR_RBX and dword ptr [rbx], esi
#define AND_ESI_TO_PTR_RCX and dword ptr [rcx], esi
#define AND_ESI_TO_PTR_RDX and dword ptr [rdx], esi
#define AND_ESI_TO_PTR_RDI and dword ptr [rdi], esi
#define AND_ESI_TO_PTR_RSI and dword ptr [rsi], esi
#define AND_ESI_TO_PTR_RBP and dword ptr [rbp], esi
#define AND_ESI_TO_PTR_RSP and dword ptr [rsp], esi
#define AND_ESI_TO_PTR_R8 and dword ptr [r8], esi
#define AND_ESI_TO_PTR_R9 and dword ptr [r9], esi
#define AND_ESI_TO_PTR_R10 and dword ptr [r10], esi
#define AND_ESI_TO_PTR_R11 and dword ptr [r11], esi
#define AND_ESI_TO_PTR_R12 and dword ptr [r12], esi
#define AND_ESI_TO_PTR_R13 and dword ptr [r13], esi
#define AND_ESI_TO_PTR_R14 and dword ptr [r14], esi
#define AND_ESI_TO_PTR_R15 and dword ptr [r15], esi
#define AND_ESI_TO_PTR_EAX and dword ptr [eax], esi
#define AND_ESI_TO_PTR_EBX and dword ptr [ebx], esi
#define AND_ESI_TO_PTR_ECX and dword ptr [ecx], esi
#define AND_ESI_TO_PTR_EDX and dword ptr [edx], esi
#define AND_ESI_TO_PTR_EDI and dword ptr [edi], esi
#define AND_ESI_TO_PTR_ESI and dword ptr [esi], esi
#define AND_ESI_TO_PTR_EBP and dword ptr [ebp], esi
#define AND_ESI_TO_PTR_ESP and dword ptr [esp], esi

#define AND_EBP_TO_PTR_RAX and dword ptr [rax], ebp
#define AND_EBP_TO_PTR_RBX and dword ptr [rbx], ebp
#define AND_EBP_TO_PTR_RCX and dword ptr [rcx], ebp
#define AND_EBP_TO_PTR_RDX and dword ptr [rdx], ebp
#define AND_EBP_TO_PTR_RDI and dword ptr [rdi], ebp
#define AND_EBP_TO_PTR_RSI and dword ptr [rsi], ebp
#define AND_EBP_TO_PTR_RBP and dword ptr [rbp], ebp
#define AND_EBP_TO_PTR_RSP and dword ptr [rsp], ebp
#define AND_EBP_TO_PTR_R8 and dword ptr [r8], ebp
#define AND_EBP_TO_PTR_R9 and dword ptr [r9], ebp
#define AND_EBP_TO_PTR_R10 and dword ptr [r10], ebp
#define AND_EBP_TO_PTR_R11 and dword ptr [r11], ebp
#define AND_EBP_TO_PTR_R12 and dword ptr [r12], ebp
#define AND_EBP_TO_PTR_R13 and dword ptr [r13], ebp
#define AND_EBP_TO_PTR_R14 and dword ptr [r14], ebp
#define AND_EBP_TO_PTR_R15 and dword ptr [r15], ebp
#define AND_EBP_TO_PTR_EAX and dword ptr [eax], ebp
#define AND_EBP_TO_PTR_EBX and dword ptr [ebx], ebp
#define AND_EBP_TO_PTR_ECX and dword ptr [ecx], ebp
#define AND_EBP_TO_PTR_EDX and dword ptr [edx], ebp
#define AND_EBP_TO_PTR_EDI and dword ptr [edi], ebp
#define AND_EBP_TO_PTR_ESI and dword ptr [esi], ebp
#define AND_EBP_TO_PTR_EBP and dword ptr [ebp], ebp
#define AND_EBP_TO_PTR_ESP and dword ptr [esp], ebp

#define AND_ESP_TO_PTR_RAX and dword ptr [rax], esp
#define AND_ESP_TO_PTR_RBX and dword ptr [rbx], esp
#define AND_ESP_TO_PTR_RCX and dword ptr [rcx], esp
#define AND_ESP_TO_PTR_RDX and dword ptr [rdx], esp
#define AND_ESP_TO_PTR_RDI and dword ptr [rdi], esp
#define AND_ESP_TO_PTR_RSI and dword ptr [rsi], esp
#define AND_ESP_TO_PTR_RBP and dword ptr [rbp], esp
#define AND_ESP_TO_PTR_RSP and dword ptr [rsp], esp
#define AND_ESP_TO_PTR_R8 and dword ptr [r8], esp
#define AND_ESP_TO_PTR_R9 and dword ptr [r9], esp
#define AND_ESP_TO_PTR_R10 and dword ptr [r10], esp
#define AND_ESP_TO_PTR_R11 and dword ptr [r11], esp
#define AND_ESP_TO_PTR_R12 and dword ptr [r12], esp
#define AND_ESP_TO_PTR_R13 and dword ptr [r13], esp
#define AND_ESP_TO_PTR_R14 and dword ptr [r14], esp
#define AND_ESP_TO_PTR_R15 and dword ptr [r15], esp
#define AND_ESP_TO_PTR_EAX and dword ptr [eax], esp
#define AND_ESP_TO_PTR_EBX and dword ptr [ebx], esp
#define AND_ESP_TO_PTR_ECX and dword ptr [ecx], esp
#define AND_ESP_TO_PTR_EDX and dword ptr [edx], esp
#define AND_ESP_TO_PTR_EDI and dword ptr [edi], esp
#define AND_ESP_TO_PTR_ESI and dword ptr [esi], esp
#define AND_ESP_TO_PTR_EBP and dword ptr [ebp], esp
#define AND_ESP_TO_PTR_ESP and dword ptr [esp], esp

#define AND_R8D_TO_PTR_RAX and dword ptr [rax], r8d
#define AND_R8D_TO_PTR_RBX and dword ptr [rbx], r8d
#define AND_R8D_TO_PTR_RCX and dword ptr [rcx], r8d
#define AND_R8D_TO_PTR_RDX and dword ptr [rdx], r8d
#define AND_R8D_TO_PTR_RDI and dword ptr [rdi], r8d
#define AND_R8D_TO_PTR_RSI and dword ptr [rsi], r8d
#define AND_R8D_TO_PTR_RBP and dword ptr [rbp], r8d
#define AND_R8D_TO_PTR_RSP and dword ptr [rsp], r8d
#define AND_R8D_TO_PTR_R8 and dword ptr [r8], r8d
#define AND_R8D_TO_PTR_R9 and dword ptr [r9], r8d
#define AND_R8D_TO_PTR_R10 and dword ptr [r10], r8d
#define AND_R8D_TO_PTR_R11 and dword ptr [r11], r8d
#define AND_R8D_TO_PTR_R12 and dword ptr [r12], r8d
#define AND_R8D_TO_PTR_R13 and dword ptr [r13], r8d
#define AND_R8D_TO_PTR_R14 and dword ptr [r14], r8d
#define AND_R8D_TO_PTR_R15 and dword ptr [r15], r8d
#define AND_R8D_TO_PTR_EAX and dword ptr [eax], r8d
#define AND_R8D_TO_PTR_EBX and dword ptr [ebx], r8d
#define AND_R8D_TO_PTR_ECX and dword ptr [ecx], r8d
#define AND_R8D_TO_PTR_EDX and dword ptr [edx], r8d
#define AND_R8D_TO_PTR_EDI and dword ptr [edi], r8d
#define AND_R8D_TO_PTR_ESI and dword ptr [esi], r8d
#define AND_R8D_TO_PTR_EBP and dword ptr [ebp], r8d
#define AND_R8D_TO_PTR_ESP and dword ptr [esp], r8d

#define AND_R9D_TO_PTR_RAX and dword ptr [rax], r9d
#define AND_R9D_TO_PTR_RBX and dword ptr [rbx], r9d
#define AND_R9D_TO_PTR_RCX and dword ptr [rcx], r9d
#define AND_R9D_TO_PTR_RDX and dword ptr [rdx], r9d
#define AND_R9D_TO_PTR_RDI and dword ptr [rdi], r9d
#define AND_R9D_TO_PTR_RSI and dword ptr [rsi], r9d
#define AND_R9D_TO_PTR_RBP and dword ptr [rbp], r9d
#define AND_R9D_TO_PTR_RSP and dword ptr [rsp], r9d
#define AND_R9D_TO_PTR_R8 and dword ptr [r8], r9d
#define AND_R9D_TO_PTR_R9 and dword ptr [r9], r9d
#define AND_R9D_TO_PTR_R10 and dword ptr [r10], r9d
#define AND_R9D_TO_PTR_R11 and dword ptr [r11], r9d
#define AND_R9D_TO_PTR_R12 and dword ptr [r12], r9d
#define AND_R9D_TO_PTR_R13 and dword ptr [r13], r9d
#define AND_R9D_TO_PTR_R14 and dword ptr [r14], r9d
#define AND_R9D_TO_PTR_R15 and dword ptr [r15], r9d
#define AND_R9D_TO_PTR_EAX and dword ptr [eax], r9d
#define AND_R9D_TO_PTR_EBX and dword ptr [ebx], r9d
#define AND_R9D_TO_PTR_ECX and dword ptr [ecx], r9d
#define AND_R9D_TO_PTR_EDX and dword ptr [edx], r9d
#define AND_R9D_TO_PTR_EDI and dword ptr [edi], r9d
#define AND_R9D_TO_PTR_ESI and dword ptr [esi], r9d
#define AND_R9D_TO_PTR_EBP and dword ptr [ebp], r9d
#define AND_R9D_TO_PTR_ESP and dword ptr [esp], r9d

#define AND_R10D_TO_PTR_RAX and dword ptr [rax], r10d
#define AND_R10D_TO_PTR_RBX and dword ptr [rbx], r10d
#define AND_R10D_TO_PTR_RCX and dword ptr [rcx], r10d
#define AND_R10D_TO_PTR_RDX and dword ptr [rdx], r10d
#define AND_R10D_TO_PTR_RDI and dword ptr [rdi], r10d
#define AND_R10D_TO_PTR_RSI and dword ptr [rsi], r10d
#define AND_R10D_TO_PTR_RBP and dword ptr [rbp], r10d
#define AND_R10D_TO_PTR_RSP and dword ptr [rsp], r10d
#define AND_R10D_TO_PTR_R8 and dword ptr [r8], r10d
#define AND_R10D_TO_PTR_R9 and dword ptr [r9], r10d
#define AND_R10D_TO_PTR_R10 and dword ptr [r10], r10d
#define AND_R10D_TO_PTR_R11 and dword ptr [r11], r10d
#define AND_R10D_TO_PTR_R12 and dword ptr [r12], r10d
#define AND_R10D_TO_PTR_R13 and dword ptr [r13], r10d
#define AND_R10D_TO_PTR_R14 and dword ptr [r14], r10d
#define AND_R10D_TO_PTR_R15 and dword ptr [r15], r10d
#define AND_R10D_TO_PTR_EAX and dword ptr [eax], r10d
#define AND_R10D_TO_PTR_EBX and dword ptr [ebx], r10d
#define AND_R10D_TO_PTR_ECX and dword ptr [ecx], r10d
#define AND_R10D_TO_PTR_EDX and dword ptr [edx], r10d
#define AND_R10D_TO_PTR_EDI and dword ptr [edi], r10d
#define AND_R10D_TO_PTR_ESI and dword ptr [esi], r10d
#define AND_R10D_TO_PTR_EBP and dword ptr [ebp], r10d
#define AND_R10D_TO_PTR_ESP and dword ptr [esp], r10d

#define AND_R11D_TO_PTR_RAX and dword ptr [rax], r11d
#define AND_R11D_TO_PTR_RBX and dword ptr [rbx], r11d
#define AND_R11D_TO_PTR_RCX and dword ptr [rcx], r11d
#define AND_R11D_TO_PTR_RDX and dword ptr [rdx], r11d
#define AND_R11D_TO_PTR_RDI and dword ptr [rdi], r11d
#define AND_R11D_TO_PTR_RSI and dword ptr [rsi], r11d
#define AND_R11D_TO_PTR_RBP and dword ptr [rbp], r11d
#define AND_R11D_TO_PTR_RSP and dword ptr [rsp], r11d
#define AND_R11D_TO_PTR_R8 and dword ptr [r8], r11d
#define AND_R11D_TO_PTR_R9 and dword ptr [r9], r11d
#define AND_R11D_TO_PTR_R10 and dword ptr [r10], r11d
#define AND_R11D_TO_PTR_R11 and dword ptr [r11], r11d
#define AND_R11D_TO_PTR_R12 and dword ptr [r12], r11d
#define AND_R11D_TO_PTR_R13 and dword ptr [r13], r11d
#define AND_R11D_TO_PTR_R14 and dword ptr [r14], r11d
#define AND_R11D_TO_PTR_R15 and dword ptr [r15], r11d
#define AND_R11D_TO_PTR_EAX and dword ptr [eax], r11d
#define AND_R11D_TO_PTR_EBX and dword ptr [ebx], r11d
#define AND_R11D_TO_PTR_ECX and dword ptr [ecx], r11d
#define AND_R11D_TO_PTR_EDX and dword ptr [edx], r11d
#define AND_R11D_TO_PTR_EDI and dword ptr [edi], r11d
#define AND_R11D_TO_PTR_ESI and dword ptr [esi], r11d
#define AND_R11D_TO_PTR_EBP and dword ptr [ebp], r11d
#define AND_R11D_TO_PTR_ESP and dword ptr [esp], r11d

#define AND_R12D_TO_PTR_RAX and dword ptr [rax], r12d
#define AND_R12D_TO_PTR_RBX and dword ptr [rbx], r12d
#define AND_R12D_TO_PTR_RCX and dword ptr [rcx], r12d
#define AND_R12D_TO_PTR_RDX and dword ptr [rdx], r12d
#define AND_R12D_TO_PTR_RDI and dword ptr [rdi], r12d
#define AND_R12D_TO_PTR_RSI and dword ptr [rsi], r12d
#define AND_R12D_TO_PTR_RBP and dword ptr [rbp], r12d
#define AND_R12D_TO_PTR_RSP and dword ptr [rsp], r12d
#define AND_R12D_TO_PTR_R8 and dword ptr [r8], r12d
#define AND_R12D_TO_PTR_R9 and dword ptr [r9], r12d
#define AND_R12D_TO_PTR_R10 and dword ptr [r10], r12d
#define AND_R12D_TO_PTR_R11 and dword ptr [r11], r12d
#define AND_R12D_TO_PTR_R12 and dword ptr [r12], r12d
#define AND_R12D_TO_PTR_R13 and dword ptr [r13], r12d
#define AND_R12D_TO_PTR_R14 and dword ptr [r14], r12d
#define AND_R12D_TO_PTR_R15 and dword ptr [r15], r12d
#define AND_R12D_TO_PTR_EAX and dword ptr [eax], r12d
#define AND_R12D_TO_PTR_EBX and dword ptr [ebx], r12d
#define AND_R12D_TO_PTR_ECX and dword ptr [ecx], r12d
#define AND_R12D_TO_PTR_EDX and dword ptr [edx], r12d
#define AND_R12D_TO_PTR_EDI and dword ptr [edi], r12d
#define AND_R12D_TO_PTR_ESI and dword ptr [esi], r12d
#define AND_R12D_TO_PTR_EBP and dword ptr [ebp], r12d
#define AND_R12D_TO_PTR_ESP and dword ptr [esp], r12d

#define AND_R13D_TO_PTR_RAX and dword ptr [rax], r13d
#define AND_R13D_TO_PTR_RBX and dword ptr [rbx], r13d
#define AND_R13D_TO_PTR_RCX and dword ptr [rcx], r13d
#define AND_R13D_TO_PTR_RDX and dword ptr [rdx], r13d
#define AND_R13D_TO_PTR_RDI and dword ptr [rdi], r13d
#define AND_R13D_TO_PTR_RSI and dword ptr [rsi], r13d
#define AND_R13D_TO_PTR_RBP and dword ptr [rbp], r13d
#define AND_R13D_TO_PTR_RSP and dword ptr [rsp], r13d
#define AND_R13D_TO_PTR_R8 and dword ptr [r8], r13d
#define AND_R13D_TO_PTR_R9 and dword ptr [r9], r13d
#define AND_R13D_TO_PTR_R10 and dword ptr [r10], r13d
#define AND_R13D_TO_PTR_R11 and dword ptr [r11], r13d
#define AND_R13D_TO_PTR_R12 and dword ptr [r12], r13d
#define AND_R13D_TO_PTR_R13 and dword ptr [r13], r13d
#define AND_R13D_TO_PTR_R14 and dword ptr [r14], r13d
#define AND_R13D_TO_PTR_R15 and dword ptr [r15], r13d
#define AND_R13D_TO_PTR_EAX and dword ptr [eax], r13d
#define AND_R13D_TO_PTR_EBX and dword ptr [ebx], r13d
#define AND_R13D_TO_PTR_ECX and dword ptr [ecx], r13d
#define AND_R13D_TO_PTR_EDX and dword ptr [edx], r13d
#define AND_R13D_TO_PTR_EDI and dword ptr [edi], r13d
#define AND_R13D_TO_PTR_ESI and dword ptr [esi], r13d
#define AND_R13D_TO_PTR_EBP and dword ptr [ebp], r13d
#define AND_R13D_TO_PTR_ESP and dword ptr [esp], r13d

#define AND_R14D_TO_PTR_RAX and dword ptr [rax], r14d
#define AND_R14D_TO_PTR_RBX and dword ptr [rbx], r14d
#define AND_R14D_TO_PTR_RCX and dword ptr [rcx], r14d
#define AND_R14D_TO_PTR_RDX and dword ptr [rdx], r14d
#define AND_R14D_TO_PTR_RDI and dword ptr [rdi], r14d
#define AND_R14D_TO_PTR_RSI and dword ptr [rsi], r14d
#define AND_R14D_TO_PTR_RBP and dword ptr [rbp], r14d
#define AND_R14D_TO_PTR_RSP and dword ptr [rsp], r14d
#define AND_R14D_TO_PTR_R8 and dword ptr [r8], r14d
#define AND_R14D_TO_PTR_R9 and dword ptr [r9], r14d
#define AND_R14D_TO_PTR_R10 and dword ptr [r10], r14d
#define AND_R14D_TO_PTR_R11 and dword ptr [r11], r14d
#define AND_R14D_TO_PTR_R12 and dword ptr [r12], r14d
#define AND_R14D_TO_PTR_R13 and dword ptr [r13], r14d
#define AND_R14D_TO_PTR_R14 and dword ptr [r14], r14d
#define AND_R14D_TO_PTR_R15 and dword ptr [r15], r14d
#define AND_R14D_TO_PTR_EAX and dword ptr [eax], r14d
#define AND_R14D_TO_PTR_EBX and dword ptr [ebx], r14d
#define AND_R14D_TO_PTR_ECX and dword ptr [ecx], r14d
#define AND_R14D_TO_PTR_EDX and dword ptr [edx], r14d
#define AND_R14D_TO_PTR_EDI and dword ptr [edi], r14d
#define AND_R14D_TO_PTR_ESI and dword ptr [esi], r14d
#define AND_R14D_TO_PTR_EBP and dword ptr [ebp], r14d
#define AND_R14D_TO_PTR_ESP and dword ptr [esp], r14d

#define AND_R15D_TO_PTR_RAX and dword ptr [rax], r15d
#define AND_R15D_TO_PTR_RBX and dword ptr [rbx], r15d
#define AND_R15D_TO_PTR_RCX and dword ptr [rcx], r15d
#define AND_R15D_TO_PTR_RDX and dword ptr [rdx], r15d
#define AND_R15D_TO_PTR_RDI and dword ptr [rdi], r15d
#define AND_R15D_TO_PTR_RSI and dword ptr [rsi], r15d
#define AND_R15D_TO_PTR_RBP and dword ptr [rbp], r15d
#define AND_R15D_TO_PTR_RSP and dword ptr [rsp], r15d
#define AND_R15D_TO_PTR_R8 and dword ptr [r8], r15d
#define AND_R15D_TO_PTR_R9 and dword ptr [r9], r15d
#define AND_R15D_TO_PTR_R10 and dword ptr [r10], r15d
#define AND_R15D_TO_PTR_R11 and dword ptr [r11], r15d
#define AND_R15D_TO_PTR_R12 and dword ptr [r12], r15d
#define AND_R15D_TO_PTR_R13 and dword ptr [r13], r15d
#define AND_R15D_TO_PTR_R14 and dword ptr [r14], r15d
#define AND_R15D_TO_PTR_R15 and dword ptr [r15], r15d
#define AND_R15D_TO_PTR_EAX and dword ptr [eax], r15d
#define AND_R15D_TO_PTR_EBX and dword ptr [ebx], r15d
#define AND_R15D_TO_PTR_ECX and dword ptr [ecx], r15d
#define AND_R15D_TO_PTR_EDX and dword ptr [edx], r15d
#define AND_R15D_TO_PTR_EDI and dword ptr [edi], r15d
#define AND_R15D_TO_PTR_ESI and dword ptr [esi], r15d
#define AND_R15D_TO_PTR_EBP and dword ptr [ebp], r15d
#define AND_R15D_TO_PTR_ESP and dword ptr [esp], r15d

#define AND_EAX_FROM_PTR_RAX_(VALUE) and eax, dword ptr [rax + VALUE]
#define AND_EAX_FROM_PTR_RBX_(VALUE) and eax, dword ptr [rbx + VALUE]
#define AND_EAX_FROM_PTR_RCX_(VALUE) and eax, dword ptr [rcx + VALUE]
#define AND_EAX_FROM_PTR_RDX_(VALUE) and eax, dword ptr [rdx + VALUE]
#define AND_EAX_FROM_PTR_RDI_(VALUE) and eax, dword ptr [rdi + VALUE]
#define AND_EAX_FROM_PTR_RSI_(VALUE) and eax, dword ptr [rsi + VALUE]
#define AND_EAX_FROM_PTR_RBP_(VALUE) and eax, dword ptr [rbp + VALUE]
#define AND_EAX_FROM_PTR_RSP_(VALUE) and eax, dword ptr [rsp + VALUE]
#define AND_EAX_FROM_PTR_R8_(VALUE) and eax, dword ptr [r8 + VALUE]
#define AND_EAX_FROM_PTR_R9_(VALUE) and eax, dword ptr [r9 + VALUE]
#define AND_EAX_FROM_PTR_R10_(VALUE) and eax, dword ptr [r10 + VALUE]
#define AND_EAX_FROM_PTR_R11_(VALUE) and eax, dword ptr [r11 + VALUE]
#define AND_EAX_FROM_PTR_R12_(VALUE) and eax, dword ptr [r12 + VALUE]
#define AND_EAX_FROM_PTR_R13_(VALUE) and eax, dword ptr [r13 + VALUE]
#define AND_EAX_FROM_PTR_R14_(VALUE) and eax, dword ptr [r14 + VALUE]
#define AND_EAX_FROM_PTR_R15_(VALUE) and eax, dword ptr [r15 + VALUE]
#define AND_EAX_FROM_PTR_EAX_(VALUE) and eax, dword ptr [eax + VALUE]
#define AND_EAX_FROM_PTR_EBX_(VALUE) and eax, dword ptr [ebx + VALUE]
#define AND_EAX_FROM_PTR_ECX_(VALUE) and eax, dword ptr [ecx + VALUE]
#define AND_EAX_FROM_PTR_EDX_(VALUE) and eax, dword ptr [edx + VALUE]
#define AND_EAX_FROM_PTR_EDI_(VALUE) and eax, dword ptr [edi + VALUE]
#define AND_EAX_FROM_PTR_ESI_(VALUE) and eax, dword ptr [esi + VALUE]
#define AND_EAX_FROM_PTR_EBP_(VALUE) and eax, dword ptr [ebp + VALUE]
#define AND_EAX_FROM_PTR_ESP_(VALUE) and eax, dword ptr [esp + VALUE]

#define AND_EBX_FROM_PTR_RAX_(VALUE) and ebx, dword ptr [rax + VALUE]
#define AND_EBX_FROM_PTR_RBX_(VALUE) and ebx, dword ptr [rbx + VALUE]
#define AND_EBX_FROM_PTR_RCX_(VALUE) and ebx, dword ptr [rcx + VALUE]
#define AND_EBX_FROM_PTR_RDX_(VALUE) and ebx, dword ptr [rdx + VALUE]
#define AND_EBX_FROM_PTR_RDI_(VALUE) and ebx, dword ptr [rdi + VALUE]
#define AND_EBX_FROM_PTR_RSI_(VALUE) and ebx, dword ptr [rsi + VALUE]
#define AND_EBX_FROM_PTR_RBP_(VALUE) and ebx, dword ptr [rbp + VALUE]
#define AND_EBX_FROM_PTR_RSP_(VALUE) and ebx, dword ptr [rsp + VALUE]
#define AND_EBX_FROM_PTR_R8_(VALUE) and ebx, dword ptr [r8 + VALUE]
#define AND_EBX_FROM_PTR_R9_(VALUE) and ebx, dword ptr [r9 + VALUE]
#define AND_EBX_FROM_PTR_R10_(VALUE) and ebx, dword ptr [r10 + VALUE]
#define AND_EBX_FROM_PTR_R11_(VALUE) and ebx, dword ptr [r11 + VALUE]
#define AND_EBX_FROM_PTR_R12_(VALUE) and ebx, dword ptr [r12 + VALUE]
#define AND_EBX_FROM_PTR_R13_(VALUE) and ebx, dword ptr [r13 + VALUE]
#define AND_EBX_FROM_PTR_R14_(VALUE) and ebx, dword ptr [r14 + VALUE]
#define AND_EBX_FROM_PTR_R15_(VALUE) and ebx, dword ptr [r15 + VALUE]
#define AND_EBX_FROM_PTR_EAX_(VALUE) and ebx, dword ptr [eax + VALUE]
#define AND_EBX_FROM_PTR_EBX_(VALUE) and ebx, dword ptr [ebx + VALUE]
#define AND_EBX_FROM_PTR_ECX_(VALUE) and ebx, dword ptr [ecx + VALUE]
#define AND_EBX_FROM_PTR_EDX_(VALUE) and ebx, dword ptr [edx + VALUE]
#define AND_EBX_FROM_PTR_EDI_(VALUE) and ebx, dword ptr [edi + VALUE]
#define AND_EBX_FROM_PTR_ESI_(VALUE) and ebx, dword ptr [esi + VALUE]
#define AND_EBX_FROM_PTR_EBP_(VALUE) and ebx, dword ptr [ebp + VALUE]
#define AND_EBX_FROM_PTR_ESP_(VALUE) and ebx, dword ptr [esp + VALUE]

#define AND_ECX_FROM_PTR_RAX_(VALUE) and ecx, dword ptr [rax + VALUE]
#define AND_ECX_FROM_PTR_RBX_(VALUE) and ecx, dword ptr [rbx + VALUE]
#define AND_ECX_FROM_PTR_RCX_(VALUE) and ecx, dword ptr [rcx + VALUE]
#define AND_ECX_FROM_PTR_RDX_(VALUE) and ecx, dword ptr [rdx + VALUE]
#define AND_ECX_FROM_PTR_RDI_(VALUE) and ecx, dword ptr [rdi + VALUE]
#define AND_ECX_FROM_PTR_RSI_(VALUE) and ecx, dword ptr [rsi + VALUE]
#define AND_ECX_FROM_PTR_RBP_(VALUE) and ecx, dword ptr [rbp + VALUE]
#define AND_ECX_FROM_PTR_RSP_(VALUE) and ecx, dword ptr [rsp + VALUE]
#define AND_ECX_FROM_PTR_R8_(VALUE) and ecx, dword ptr [r8 + VALUE]
#define AND_ECX_FROM_PTR_R9_(VALUE) and ecx, dword ptr [r9 + VALUE]
#define AND_ECX_FROM_PTR_R10_(VALUE) and ecx, dword ptr [r10 + VALUE]
#define AND_ECX_FROM_PTR_R11_(VALUE) and ecx, dword ptr [r11 + VALUE]
#define AND_ECX_FROM_PTR_R12_(VALUE) and ecx, dword ptr [r12 + VALUE]
#define AND_ECX_FROM_PTR_R13_(VALUE) and ecx, dword ptr [r13 + VALUE]
#define AND_ECX_FROM_PTR_R14_(VALUE) and ecx, dword ptr [r14 + VALUE]
#define AND_ECX_FROM_PTR_R15_(VALUE) and ecx, dword ptr [r15 + VALUE]
#define AND_ECX_FROM_PTR_EAX_(VALUE) and ecx, dword ptr [eax + VALUE]
#define AND_ECX_FROM_PTR_EBX_(VALUE) and ecx, dword ptr [ebx + VALUE]
#define AND_ECX_FROM_PTR_ECX_(VALUE) and ecx, dword ptr [ecx + VALUE]
#define AND_ECX_FROM_PTR_EDX_(VALUE) and ecx, dword ptr [edx + VALUE]
#define AND_ECX_FROM_PTR_EDI_(VALUE) and ecx, dword ptr [edi + VALUE]
#define AND_ECX_FROM_PTR_ESI_(VALUE) and ecx, dword ptr [esi + VALUE]
#define AND_ECX_FROM_PTR_EBP_(VALUE) and ecx, dword ptr [ebp + VALUE]
#define AND_ECX_FROM_PTR_ESP_(VALUE) and ecx, dword ptr [esp + VALUE]

#define AND_EDX_FROM_PTR_RAX_(VALUE) and edx, dword ptr [rax + VALUE]
#define AND_EDX_FROM_PTR_RBX_(VALUE) and edx, dword ptr [rbx + VALUE]
#define AND_EDX_FROM_PTR_RCX_(VALUE) and edx, dword ptr [rcx + VALUE]
#define AND_EDX_FROM_PTR_RDX_(VALUE) and edx, dword ptr [rdx + VALUE]
#define AND_EDX_FROM_PTR_RDI_(VALUE) and edx, dword ptr [rdi + VALUE]
#define AND_EDX_FROM_PTR_RSI_(VALUE) and edx, dword ptr [rsi + VALUE]
#define AND_EDX_FROM_PTR_RBP_(VALUE) and edx, dword ptr [rbp + VALUE]
#define AND_EDX_FROM_PTR_RSP_(VALUE) and edx, dword ptr [rsp + VALUE]
#define AND_EDX_FROM_PTR_R8_(VALUE) and edx, dword ptr [r8 + VALUE]
#define AND_EDX_FROM_PTR_R9_(VALUE) and edx, dword ptr [r9 + VALUE]
#define AND_EDX_FROM_PTR_R10_(VALUE) and edx, dword ptr [r10 + VALUE]
#define AND_EDX_FROM_PTR_R11_(VALUE) and edx, dword ptr [r11 + VALUE]
#define AND_EDX_FROM_PTR_R12_(VALUE) and edx, dword ptr [r12 + VALUE]
#define AND_EDX_FROM_PTR_R13_(VALUE) and edx, dword ptr [r13 + VALUE]
#define AND_EDX_FROM_PTR_R14_(VALUE) and edx, dword ptr [r14 + VALUE]
#define AND_EDX_FROM_PTR_R15_(VALUE) and edx, dword ptr [r15 + VALUE]
#define AND_EDX_FROM_PTR_EAX_(VALUE) and edx, dword ptr [eax + VALUE]
#define AND_EDX_FROM_PTR_EBX_(VALUE) and edx, dword ptr [ebx + VALUE]
#define AND_EDX_FROM_PTR_ECX_(VALUE) and edx, dword ptr [ecx + VALUE]
#define AND_EDX_FROM_PTR_EDX_(VALUE) and edx, dword ptr [edx + VALUE]
#define AND_EDX_FROM_PTR_EDI_(VALUE) and edx, dword ptr [edi + VALUE]
#define AND_EDX_FROM_PTR_ESI_(VALUE) and edx, dword ptr [esi + VALUE]
#define AND_EDX_FROM_PTR_EBP_(VALUE) and edx, dword ptr [ebp + VALUE]
#define AND_EDX_FROM_PTR_ESP_(VALUE) and edx, dword ptr [esp + VALUE]

#define AND_EDI_FROM_PTR_RAX_(VALUE) and edi, dword ptr [rax + VALUE]
#define AND_EDI_FROM_PTR_RBX_(VALUE) and edi, dword ptr [rbx + VALUE]
#define AND_EDI_FROM_PTR_RCX_(VALUE) and edi, dword ptr [rcx + VALUE]
#define AND_EDI_FROM_PTR_RDX_(VALUE) and edi, dword ptr [rdx + VALUE]
#define AND_EDI_FROM_PTR_RDI_(VALUE) and edi, dword ptr [rdi + VALUE]
#define AND_EDI_FROM_PTR_RSI_(VALUE) and edi, dword ptr [rsi + VALUE]
#define AND_EDI_FROM_PTR_RBP_(VALUE) and edi, dword ptr [rbp + VALUE]
#define AND_EDI_FROM_PTR_RSP_(VALUE) and edi, dword ptr [rsp + VALUE]
#define AND_EDI_FROM_PTR_R8_(VALUE) and edi, dword ptr [r8 + VALUE]
#define AND_EDI_FROM_PTR_R9_(VALUE) and edi, dword ptr [r9 + VALUE]
#define AND_EDI_FROM_PTR_R10_(VALUE) and edi, dword ptr [r10 + VALUE]
#define AND_EDI_FROM_PTR_R11_(VALUE) and edi, dword ptr [r11 + VALUE]
#define AND_EDI_FROM_PTR_R12_(VALUE) and edi, dword ptr [r12 + VALUE]
#define AND_EDI_FROM_PTR_R13_(VALUE) and edi, dword ptr [r13 + VALUE]
#define AND_EDI_FROM_PTR_R14_(VALUE) and edi, dword ptr [r14 + VALUE]
#define AND_EDI_FROM_PTR_R15_(VALUE) and edi, dword ptr [r15 + VALUE]
#define AND_EDI_FROM_PTR_EAX_(VALUE) and edi, dword ptr [eax + VALUE]
#define AND_EDI_FROM_PTR_EBX_(VALUE) and edi, dword ptr [ebx + VALUE]
#define AND_EDI_FROM_PTR_ECX_(VALUE) and edi, dword ptr [ecx + VALUE]
#define AND_EDI_FROM_PTR_EDX_(VALUE) and edi, dword ptr [edx + VALUE]
#define AND_EDI_FROM_PTR_EDI_(VALUE) and edi, dword ptr [edi + VALUE]
#define AND_EDI_FROM_PTR_ESI_(VALUE) and edi, dword ptr [esi + VALUE]
#define AND_EDI_FROM_PTR_EBP_(VALUE) and edi, dword ptr [ebp + VALUE]
#define AND_EDI_FROM_PTR_ESP_(VALUE) and edi, dword ptr [esp + VALUE]

#define AND_ESI_FROM_PTR_RAX_(VALUE) and esi, dword ptr [rax + VALUE]
#define AND_ESI_FROM_PTR_RBX_(VALUE) and esi, dword ptr [rbx + VALUE]
#define AND_ESI_FROM_PTR_RCX_(VALUE) and esi, dword ptr [rcx + VALUE]
#define AND_ESI_FROM_PTR_RDX_(VALUE) and esi, dword ptr [rdx + VALUE]
#define AND_ESI_FROM_PTR_RDI_(VALUE) and esi, dword ptr [rdi + VALUE]
#define AND_ESI_FROM_PTR_RSI_(VALUE) and esi, dword ptr [rsi + VALUE]
#define AND_ESI_FROM_PTR_RBP_(VALUE) and esi, dword ptr [rbp + VALUE]
#define AND_ESI_FROM_PTR_RSP_(VALUE) and esi, dword ptr [rsp + VALUE]
#define AND_ESI_FROM_PTR_R8_(VALUE) and esi, dword ptr [r8 + VALUE]
#define AND_ESI_FROM_PTR_R9_(VALUE) and esi, dword ptr [r9 + VALUE]
#define AND_ESI_FROM_PTR_R10_(VALUE) and esi, dword ptr [r10 + VALUE]
#define AND_ESI_FROM_PTR_R11_(VALUE) and esi, dword ptr [r11 + VALUE]
#define AND_ESI_FROM_PTR_R12_(VALUE) and esi, dword ptr [r12 + VALUE]
#define AND_ESI_FROM_PTR_R13_(VALUE) and esi, dword ptr [r13 + VALUE]
#define AND_ESI_FROM_PTR_R14_(VALUE) and esi, dword ptr [r14 + VALUE]
#define AND_ESI_FROM_PTR_R15_(VALUE) and esi, dword ptr [r15 + VALUE]
#define AND_ESI_FROM_PTR_EAX_(VALUE) and esi, dword ptr [eax + VALUE]
#define AND_ESI_FROM_PTR_EBX_(VALUE) and esi, dword ptr [ebx + VALUE]
#define AND_ESI_FROM_PTR_ECX_(VALUE) and esi, dword ptr [ecx + VALUE]
#define AND_ESI_FROM_PTR_EDX_(VALUE) and esi, dword ptr [edx + VALUE]
#define AND_ESI_FROM_PTR_EDI_(VALUE) and esi, dword ptr [edi + VALUE]
#define AND_ESI_FROM_PTR_ESI_(VALUE) and esi, dword ptr [esi + VALUE]
#define AND_ESI_FROM_PTR_EBP_(VALUE) and esi, dword ptr [ebp + VALUE]
#define AND_ESI_FROM_PTR_ESP_(VALUE) and esi, dword ptr [esp + VALUE]

#define AND_EBP_FROM_PTR_RAX_(VALUE) and ebp, dword ptr [rax + VALUE]
#define AND_EBP_FROM_PTR_RBX_(VALUE) and ebp, dword ptr [rbx + VALUE]
#define AND_EBP_FROM_PTR_RCX_(VALUE) and ebp, dword ptr [rcx + VALUE]
#define AND_EBP_FROM_PTR_RDX_(VALUE) and ebp, dword ptr [rdx + VALUE]
#define AND_EBP_FROM_PTR_RDI_(VALUE) and ebp, dword ptr [rdi + VALUE]
#define AND_EBP_FROM_PTR_RSI_(VALUE) and ebp, dword ptr [rsi + VALUE]
#define AND_EBP_FROM_PTR_RBP_(VALUE) and ebp, dword ptr [rbp + VALUE]
#define AND_EBP_FROM_PTR_RSP_(VALUE) and ebp, dword ptr [rsp + VALUE]
#define AND_EBP_FROM_PTR_R8_(VALUE) and ebp, dword ptr [r8 + VALUE]
#define AND_EBP_FROM_PTR_R9_(VALUE) and ebp, dword ptr [r9 + VALUE]
#define AND_EBP_FROM_PTR_R10_(VALUE) and ebp, dword ptr [r10 + VALUE]
#define AND_EBP_FROM_PTR_R11_(VALUE) and ebp, dword ptr [r11 + VALUE]
#define AND_EBP_FROM_PTR_R12_(VALUE) and ebp, dword ptr [r12 + VALUE]
#define AND_EBP_FROM_PTR_R13_(VALUE) and ebp, dword ptr [r13 + VALUE]
#define AND_EBP_FROM_PTR_R14_(VALUE) and ebp, dword ptr [r14 + VALUE]
#define AND_EBP_FROM_PTR_R15_(VALUE) and ebp, dword ptr [r15 + VALUE]
#define AND_EBP_FROM_PTR_EAX_(VALUE) and ebp, dword ptr [eax + VALUE]
#define AND_EBP_FROM_PTR_EBX_(VALUE) and ebp, dword ptr [ebx + VALUE]
#define AND_EBP_FROM_PTR_ECX_(VALUE) and ebp, dword ptr [ecx + VALUE]
#define AND_EBP_FROM_PTR_EDX_(VALUE) and ebp, dword ptr [edx + VALUE]
#define AND_EBP_FROM_PTR_EDI_(VALUE) and ebp, dword ptr [edi + VALUE]
#define AND_EBP_FROM_PTR_ESI_(VALUE) and ebp, dword ptr [esi + VALUE]
#define AND_EBP_FROM_PTR_EBP_(VALUE) and ebp, dword ptr [ebp + VALUE]
#define AND_EBP_FROM_PTR_ESP_(VALUE) and ebp, dword ptr [esp + VALUE]

#define AND_ESP_FROM_PTR_RAX_(VALUE) and esp, dword ptr [rax + VALUE]
#define AND_ESP_FROM_PTR_RBX_(VALUE) and esp, dword ptr [rbx + VALUE]
#define AND_ESP_FROM_PTR_RCX_(VALUE) and esp, dword ptr [rcx + VALUE]
#define AND_ESP_FROM_PTR_RDX_(VALUE) and esp, dword ptr [rdx + VALUE]
#define AND_ESP_FROM_PTR_RDI_(VALUE) and esp, dword ptr [rdi + VALUE]
#define AND_ESP_FROM_PTR_RSI_(VALUE) and esp, dword ptr [rsi + VALUE]
#define AND_ESP_FROM_PTR_RBP_(VALUE) and esp, dword ptr [rbp + VALUE]
#define AND_ESP_FROM_PTR_RSP_(VALUE) and esp, dword ptr [rsp + VALUE]
#define AND_ESP_FROM_PTR_R8_(VALUE) and esp, dword ptr [r8 + VALUE]
#define AND_ESP_FROM_PTR_R9_(VALUE) and esp, dword ptr [r9 + VALUE]
#define AND_ESP_FROM_PTR_R10_(VALUE) and esp, dword ptr [r10 + VALUE]
#define AND_ESP_FROM_PTR_R11_(VALUE) and esp, dword ptr [r11 + VALUE]
#define AND_ESP_FROM_PTR_R12_(VALUE) and esp, dword ptr [r12 + VALUE]
#define AND_ESP_FROM_PTR_R13_(VALUE) and esp, dword ptr [r13 + VALUE]
#define AND_ESP_FROM_PTR_R14_(VALUE) and esp, dword ptr [r14 + VALUE]
#define AND_ESP_FROM_PTR_R15_(VALUE) and esp, dword ptr [r15 + VALUE]
#define AND_ESP_FROM_PTR_EAX_(VALUE) and esp, dword ptr [eax + VALUE]
#define AND_ESP_FROM_PTR_EBX_(VALUE) and esp, dword ptr [ebx + VALUE]
#define AND_ESP_FROM_PTR_ECX_(VALUE) and esp, dword ptr [ecx + VALUE]
#define AND_ESP_FROM_PTR_EDX_(VALUE) and esp, dword ptr [edx + VALUE]
#define AND_ESP_FROM_PTR_EDI_(VALUE) and esp, dword ptr [edi + VALUE]
#define AND_ESP_FROM_PTR_ESI_(VALUE) and esp, dword ptr [esi + VALUE]
#define AND_ESP_FROM_PTR_EBP_(VALUE) and esp, dword ptr [ebp + VALUE]
#define AND_ESP_FROM_PTR_ESP_(VALUE) and esp, dword ptr [esp + VALUE]

#define AND_R8D_FROM_PTR_RAX_(VALUE) and r8d, dword ptr [rax + VALUE]
#define AND_R8D_FROM_PTR_RBX_(VALUE) and r8d, dword ptr [rbx + VALUE]
#define AND_R8D_FROM_PTR_RCX_(VALUE) and r8d, dword ptr [rcx + VALUE]
#define AND_R8D_FROM_PTR_RDX_(VALUE) and r8d, dword ptr [rdx + VALUE]
#define AND_R8D_FROM_PTR_RDI_(VALUE) and r8d, dword ptr [rdi + VALUE]
#define AND_R8D_FROM_PTR_RSI_(VALUE) and r8d, dword ptr [rsi + VALUE]
#define AND_R8D_FROM_PTR_RBP_(VALUE) and r8d, dword ptr [rbp + VALUE]
#define AND_R8D_FROM_PTR_RSP_(VALUE) and r8d, dword ptr [rsp + VALUE]
#define AND_R8D_FROM_PTR_R8_(VALUE) and r8d, dword ptr [r8 + VALUE]
#define AND_R8D_FROM_PTR_R9_(VALUE) and r8d, dword ptr [r9 + VALUE]
#define AND_R8D_FROM_PTR_R10_(VALUE) and r8d, dword ptr [r10 + VALUE]
#define AND_R8D_FROM_PTR_R11_(VALUE) and r8d, dword ptr [r11 + VALUE]
#define AND_R8D_FROM_PTR_R12_(VALUE) and r8d, dword ptr [r12 + VALUE]
#define AND_R8D_FROM_PTR_R13_(VALUE) and r8d, dword ptr [r13 + VALUE]
#define AND_R8D_FROM_PTR_R14_(VALUE) and r8d, dword ptr [r14 + VALUE]
#define AND_R8D_FROM_PTR_R15_(VALUE) and r8d, dword ptr [r15 + VALUE]
#define AND_R8D_FROM_PTR_EAX_(VALUE) and r8d, dword ptr [eax + VALUE]
#define AND_R8D_FROM_PTR_EBX_(VALUE) and r8d, dword ptr [ebx + VALUE]
#define AND_R8D_FROM_PTR_ECX_(VALUE) and r8d, dword ptr [ecx + VALUE]
#define AND_R8D_FROM_PTR_EDX_(VALUE) and r8d, dword ptr [edx + VALUE]
#define AND_R8D_FROM_PTR_EDI_(VALUE) and r8d, dword ptr [edi + VALUE]
#define AND_R8D_FROM_PTR_ESI_(VALUE) and r8d, dword ptr [esi + VALUE]
#define AND_R8D_FROM_PTR_EBP_(VALUE) and r8d, dword ptr [ebp + VALUE]
#define AND_R8D_FROM_PTR_ESP_(VALUE) and r8d, dword ptr [esp + VALUE]

#define AND_R9D_FROM_PTR_RAX_(VALUE) and r9d, dword ptr [rax + VALUE]
#define AND_R9D_FROM_PTR_RBX_(VALUE) and r9d, dword ptr [rbx + VALUE]
#define AND_R9D_FROM_PTR_RCX_(VALUE) and r9d, dword ptr [rcx + VALUE]
#define AND_R9D_FROM_PTR_RDX_(VALUE) and r9d, dword ptr [rdx + VALUE]
#define AND_R9D_FROM_PTR_RDI_(VALUE) and r9d, dword ptr [rdi + VALUE]
#define AND_R9D_FROM_PTR_RSI_(VALUE) and r9d, dword ptr [rsi + VALUE]
#define AND_R9D_FROM_PTR_RBP_(VALUE) and r9d, dword ptr [rbp + VALUE]
#define AND_R9D_FROM_PTR_RSP_(VALUE) and r9d, dword ptr [rsp + VALUE]
#define AND_R9D_FROM_PTR_R8_(VALUE) and r9d, dword ptr [r8 + VALUE]
#define AND_R9D_FROM_PTR_R9_(VALUE) and r9d, dword ptr [r9 + VALUE]
#define AND_R9D_FROM_PTR_R10_(VALUE) and r9d, dword ptr [r10 + VALUE]
#define AND_R9D_FROM_PTR_R11_(VALUE) and r9d, dword ptr [r11 + VALUE]
#define AND_R9D_FROM_PTR_R12_(VALUE) and r9d, dword ptr [r12 + VALUE]
#define AND_R9D_FROM_PTR_R13_(VALUE) and r9d, dword ptr [r13 + VALUE]
#define AND_R9D_FROM_PTR_R14_(VALUE) and r9d, dword ptr [r14 + VALUE]
#define AND_R9D_FROM_PTR_R15_(VALUE) and r9d, dword ptr [r15 + VALUE]
#define AND_R9D_FROM_PTR_EAX_(VALUE) and r9d, dword ptr [eax + VALUE]
#define AND_R9D_FROM_PTR_EBX_(VALUE) and r9d, dword ptr [ebx + VALUE]
#define AND_R9D_FROM_PTR_ECX_(VALUE) and r9d, dword ptr [ecx + VALUE]
#define AND_R9D_FROM_PTR_EDX_(VALUE) and r9d, dword ptr [edx + VALUE]
#define AND_R9D_FROM_PTR_EDI_(VALUE) and r9d, dword ptr [edi + VALUE]
#define AND_R9D_FROM_PTR_ESI_(VALUE) and r9d, dword ptr [esi + VALUE]
#define AND_R9D_FROM_PTR_EBP_(VALUE) and r9d, dword ptr [ebp + VALUE]
#define AND_R9D_FROM_PTR_ESP_(VALUE) and r9d, dword ptr [esp + VALUE]

#define AND_R10D_FROM_PTR_RAX_(VALUE) and r10d, dword ptr [rax + VALUE]
#define AND_R10D_FROM_PTR_RBX_(VALUE) and r10d, dword ptr [rbx + VALUE]
#define AND_R10D_FROM_PTR_RCX_(VALUE) and r10d, dword ptr [rcx + VALUE]
#define AND_R10D_FROM_PTR_RDX_(VALUE) and r10d, dword ptr [rdx + VALUE]
#define AND_R10D_FROM_PTR_RDI_(VALUE) and r10d, dword ptr [rdi + VALUE]
#define AND_R10D_FROM_PTR_RSI_(VALUE) and r10d, dword ptr [rsi + VALUE]
#define AND_R10D_FROM_PTR_RBP_(VALUE) and r10d, dword ptr [rbp + VALUE]
#define AND_R10D_FROM_PTR_RSP_(VALUE) and r10d, dword ptr [rsp + VALUE]
#define AND_R10D_FROM_PTR_R8_(VALUE) and r10d, dword ptr [r8 + VALUE]
#define AND_R10D_FROM_PTR_R9_(VALUE) and r10d, dword ptr [r9 + VALUE]
#define AND_R10D_FROM_PTR_R10_(VALUE) and r10d, dword ptr [r10 + VALUE]
#define AND_R10D_FROM_PTR_R11_(VALUE) and r10d, dword ptr [r11 + VALUE]
#define AND_R10D_FROM_PTR_R12_(VALUE) and r10d, dword ptr [r12 + VALUE]
#define AND_R10D_FROM_PTR_R13_(VALUE) and r10d, dword ptr [r13 + VALUE]
#define AND_R10D_FROM_PTR_R14_(VALUE) and r10d, dword ptr [r14 + VALUE]
#define AND_R10D_FROM_PTR_R15_(VALUE) and r10d, dword ptr [r15 + VALUE]
#define AND_R10D_FROM_PTR_EAX_(VALUE) and r10d, dword ptr [eax + VALUE]
#define AND_R10D_FROM_PTR_EBX_(VALUE) and r10d, dword ptr [ebx + VALUE]
#define AND_R10D_FROM_PTR_ECX_(VALUE) and r10d, dword ptr [ecx + VALUE]
#define AND_R10D_FROM_PTR_EDX_(VALUE) and r10d, dword ptr [edx + VALUE]
#define AND_R10D_FROM_PTR_EDI_(VALUE) and r10d, dword ptr [edi + VALUE]
#define AND_R10D_FROM_PTR_ESI_(VALUE) and r10d, dword ptr [esi + VALUE]
#define AND_R10D_FROM_PTR_EBP_(VALUE) and r10d, dword ptr [ebp + VALUE]
#define AND_R10D_FROM_PTR_ESP_(VALUE) and r10d, dword ptr [esp + VALUE]

#define AND_R11D_FROM_PTR_RAX_(VALUE) and r11d, dword ptr [rax + VALUE]
#define AND_R11D_FROM_PTR_RBX_(VALUE) and r11d, dword ptr [rbx + VALUE]
#define AND_R11D_FROM_PTR_RCX_(VALUE) and r11d, dword ptr [rcx + VALUE]
#define AND_R11D_FROM_PTR_RDX_(VALUE) and r11d, dword ptr [rdx + VALUE]
#define AND_R11D_FROM_PTR_RDI_(VALUE) and r11d, dword ptr [rdi + VALUE]
#define AND_R11D_FROM_PTR_RSI_(VALUE) and r11d, dword ptr [rsi + VALUE]
#define AND_R11D_FROM_PTR_RBP_(VALUE) and r11d, dword ptr [rbp + VALUE]
#define AND_R11D_FROM_PTR_RSP_(VALUE) and r11d, dword ptr [rsp + VALUE]
#define AND_R11D_FROM_PTR_R8_(VALUE) and r11d, dword ptr [r8 + VALUE]
#define AND_R11D_FROM_PTR_R9_(VALUE) and r11d, dword ptr [r9 + VALUE]
#define AND_R11D_FROM_PTR_R10_(VALUE) and r11d, dword ptr [r10 + VALUE]
#define AND_R11D_FROM_PTR_R11_(VALUE) and r11d, dword ptr [r11 + VALUE]
#define AND_R11D_FROM_PTR_R12_(VALUE) and r11d, dword ptr [r12 + VALUE]
#define AND_R11D_FROM_PTR_R13_(VALUE) and r11d, dword ptr [r13 + VALUE]
#define AND_R11D_FROM_PTR_R14_(VALUE) and r11d, dword ptr [r14 + VALUE]
#define AND_R11D_FROM_PTR_R15_(VALUE) and r11d, dword ptr [r15 + VALUE]
#define AND_R11D_FROM_PTR_EAX_(VALUE) and r11d, dword ptr [eax + VALUE]
#define AND_R11D_FROM_PTR_EBX_(VALUE) and r11d, dword ptr [ebx + VALUE]
#define AND_R11D_FROM_PTR_ECX_(VALUE) and r11d, dword ptr [ecx + VALUE]
#define AND_R11D_FROM_PTR_EDX_(VALUE) and r11d, dword ptr [edx + VALUE]
#define AND_R11D_FROM_PTR_EDI_(VALUE) and r11d, dword ptr [edi + VALUE]
#define AND_R11D_FROM_PTR_ESI_(VALUE) and r11d, dword ptr [esi + VALUE]
#define AND_R11D_FROM_PTR_EBP_(VALUE) and r11d, dword ptr [ebp + VALUE]
#define AND_R11D_FROM_PTR_ESP_(VALUE) and r11d, dword ptr [esp + VALUE]

#define AND_R12D_FROM_PTR_RAX_(VALUE) and r12d, dword ptr [rax + VALUE]
#define AND_R12D_FROM_PTR_RBX_(VALUE) and r12d, dword ptr [rbx + VALUE]
#define AND_R12D_FROM_PTR_RCX_(VALUE) and r12d, dword ptr [rcx + VALUE]
#define AND_R12D_FROM_PTR_RDX_(VALUE) and r12d, dword ptr [rdx + VALUE]
#define AND_R12D_FROM_PTR_RDI_(VALUE) and r12d, dword ptr [rdi + VALUE]
#define AND_R12D_FROM_PTR_RSI_(VALUE) and r12d, dword ptr [rsi + VALUE]
#define AND_R12D_FROM_PTR_RBP_(VALUE) and r12d, dword ptr [rbp + VALUE]
#define AND_R12D_FROM_PTR_RSP_(VALUE) and r12d, dword ptr [rsp + VALUE]
#define AND_R12D_FROM_PTR_R8_(VALUE) and r12d, dword ptr [r8 + VALUE]
#define AND_R12D_FROM_PTR_R9_(VALUE) and r12d, dword ptr [r9 + VALUE]
#define AND_R12D_FROM_PTR_R10_(VALUE) and r12d, dword ptr [r10 + VALUE]
#define AND_R12D_FROM_PTR_R11_(VALUE) and r12d, dword ptr [r11 + VALUE]
#define AND_R12D_FROM_PTR_R12_(VALUE) and r12d, dword ptr [r12 + VALUE]
#define AND_R12D_FROM_PTR_R13_(VALUE) and r12d, dword ptr [r13 + VALUE]
#define AND_R12D_FROM_PTR_R14_(VALUE) and r12d, dword ptr [r14 + VALUE]
#define AND_R12D_FROM_PTR_R15_(VALUE) and r12d, dword ptr [r15 + VALUE]
#define AND_R12D_FROM_PTR_EAX_(VALUE) and r12d, dword ptr [eax + VALUE]
#define AND_R12D_FROM_PTR_EBX_(VALUE) and r12d, dword ptr [ebx + VALUE]
#define AND_R12D_FROM_PTR_ECX_(VALUE) and r12d, dword ptr [ecx + VALUE]
#define AND_R12D_FROM_PTR_EDX_(VALUE) and r12d, dword ptr [edx + VALUE]
#define AND_R12D_FROM_PTR_EDI_(VALUE) and r12d, dword ptr [edi + VALUE]
#define AND_R12D_FROM_PTR_ESI_(VALUE) and r12d, dword ptr [esi + VALUE]
#define AND_R12D_FROM_PTR_EBP_(VALUE) and r12d, dword ptr [ebp + VALUE]
#define AND_R12D_FROM_PTR_ESP_(VALUE) and r12d, dword ptr [esp + VALUE]

#define AND_R13D_FROM_PTR_RAX_(VALUE) and r13d, dword ptr [rax + VALUE]
#define AND_R13D_FROM_PTR_RBX_(VALUE) and r13d, dword ptr [rbx + VALUE]
#define AND_R13D_FROM_PTR_RCX_(VALUE) and r13d, dword ptr [rcx + VALUE]
#define AND_R13D_FROM_PTR_RDX_(VALUE) and r13d, dword ptr [rdx + VALUE]
#define AND_R13D_FROM_PTR_RDI_(VALUE) and r13d, dword ptr [rdi + VALUE]
#define AND_R13D_FROM_PTR_RSI_(VALUE) and r13d, dword ptr [rsi + VALUE]
#define AND_R13D_FROM_PTR_RBP_(VALUE) and r13d, dword ptr [rbp + VALUE]
#define AND_R13D_FROM_PTR_RSP_(VALUE) and r13d, dword ptr [rsp + VALUE]
#define AND_R13D_FROM_PTR_R8_(VALUE) and r13d, dword ptr [r8 + VALUE]
#define AND_R13D_FROM_PTR_R9_(VALUE) and r13d, dword ptr [r9 + VALUE]
#define AND_R13D_FROM_PTR_R10_(VALUE) and r13d, dword ptr [r10 + VALUE]
#define AND_R13D_FROM_PTR_R11_(VALUE) and r13d, dword ptr [r11 + VALUE]
#define AND_R13D_FROM_PTR_R12_(VALUE) and r13d, dword ptr [r12 + VALUE]
#define AND_R13D_FROM_PTR_R13_(VALUE) and r13d, dword ptr [r13 + VALUE]
#define AND_R13D_FROM_PTR_R14_(VALUE) and r13d, dword ptr [r14 + VALUE]
#define AND_R13D_FROM_PTR_R15_(VALUE) and r13d, dword ptr [r15 + VALUE]
#define AND_R13D_FROM_PTR_EAX_(VALUE) and r13d, dword ptr [eax + VALUE]
#define AND_R13D_FROM_PTR_EBX_(VALUE) and r13d, dword ptr [ebx + VALUE]
#define AND_R13D_FROM_PTR_ECX_(VALUE) and r13d, dword ptr [ecx + VALUE]
#define AND_R13D_FROM_PTR_EDX_(VALUE) and r13d, dword ptr [edx + VALUE]
#define AND_R13D_FROM_PTR_EDI_(VALUE) and r13d, dword ptr [edi + VALUE]
#define AND_R13D_FROM_PTR_ESI_(VALUE) and r13d, dword ptr [esi + VALUE]
#define AND_R13D_FROM_PTR_EBP_(VALUE) and r13d, dword ptr [ebp + VALUE]
#define AND_R13D_FROM_PTR_ESP_(VALUE) and r13d, dword ptr [esp + VALUE]

#define AND_R14D_FROM_PTR_RAX_(VALUE) and r14d, dword ptr [rax + VALUE]
#define AND_R14D_FROM_PTR_RBX_(VALUE) and r14d, dword ptr [rbx + VALUE]
#define AND_R14D_FROM_PTR_RCX_(VALUE) and r14d, dword ptr [rcx + VALUE]
#define AND_R14D_FROM_PTR_RDX_(VALUE) and r14d, dword ptr [rdx + VALUE]
#define AND_R14D_FROM_PTR_RDI_(VALUE) and r14d, dword ptr [rdi + VALUE]
#define AND_R14D_FROM_PTR_RSI_(VALUE) and r14d, dword ptr [rsi + VALUE]
#define AND_R14D_FROM_PTR_RBP_(VALUE) and r14d, dword ptr [rbp + VALUE]
#define AND_R14D_FROM_PTR_RSP_(VALUE) and r14d, dword ptr [rsp + VALUE]
#define AND_R14D_FROM_PTR_R8_(VALUE) and r14d, dword ptr [r8 + VALUE]
#define AND_R14D_FROM_PTR_R9_(VALUE) and r14d, dword ptr [r9 + VALUE]
#define AND_R14D_FROM_PTR_R10_(VALUE) and r14d, dword ptr [r10 + VALUE]
#define AND_R14D_FROM_PTR_R11_(VALUE) and r14d, dword ptr [r11 + VALUE]
#define AND_R14D_FROM_PTR_R12_(VALUE) and r14d, dword ptr [r12 + VALUE]
#define AND_R14D_FROM_PTR_R13_(VALUE) and r14d, dword ptr [r13 + VALUE]
#define AND_R14D_FROM_PTR_R14_(VALUE) and r14d, dword ptr [r14 + VALUE]
#define AND_R14D_FROM_PTR_R15_(VALUE) and r14d, dword ptr [r15 + VALUE]
#define AND_R14D_FROM_PTR_EAX_(VALUE) and r14d, dword ptr [eax + VALUE]
#define AND_R14D_FROM_PTR_EBX_(VALUE) and r14d, dword ptr [ebx + VALUE]
#define AND_R14D_FROM_PTR_ECX_(VALUE) and r14d, dword ptr [ecx + VALUE]
#define AND_R14D_FROM_PTR_EDX_(VALUE) and r14d, dword ptr [edx + VALUE]
#define AND_R14D_FROM_PTR_EDI_(VALUE) and r14d, dword ptr [edi + VALUE]
#define AND_R14D_FROM_PTR_ESI_(VALUE) and r14d, dword ptr [esi + VALUE]
#define AND_R14D_FROM_PTR_EBP_(VALUE) and r14d, dword ptr [ebp + VALUE]
#define AND_R14D_FROM_PTR_ESP_(VALUE) and r14d, dword ptr [esp + VALUE]

#define AND_R15D_FROM_PTR_RAX_(VALUE) and r15d, dword ptr [rax + VALUE]
#define AND_R15D_FROM_PTR_RBX_(VALUE) and r15d, dword ptr [rbx + VALUE]
#define AND_R15D_FROM_PTR_RCX_(VALUE) and r15d, dword ptr [rcx + VALUE]
#define AND_R15D_FROM_PTR_RDX_(VALUE) and r15d, dword ptr [rdx + VALUE]
#define AND_R15D_FROM_PTR_RDI_(VALUE) and r15d, dword ptr [rdi + VALUE]
#define AND_R15D_FROM_PTR_RSI_(VALUE) and r15d, dword ptr [rsi + VALUE]
#define AND_R15D_FROM_PTR_RBP_(VALUE) and r15d, dword ptr [rbp + VALUE]
#define AND_R15D_FROM_PTR_RSP_(VALUE) and r15d, dword ptr [rsp + VALUE]
#define AND_R15D_FROM_PTR_R8_(VALUE) and r15d, dword ptr [r8 + VALUE]
#define AND_R15D_FROM_PTR_R9_(VALUE) and r15d, dword ptr [r9 + VALUE]
#define AND_R15D_FROM_PTR_R10_(VALUE) and r15d, dword ptr [r10 + VALUE]
#define AND_R15D_FROM_PTR_R11_(VALUE) and r15d, dword ptr [r11 + VALUE]
#define AND_R15D_FROM_PTR_R12_(VALUE) and r15d, dword ptr [r12 + VALUE]
#define AND_R15D_FROM_PTR_R13_(VALUE) and r15d, dword ptr [r13 + VALUE]
#define AND_R15D_FROM_PTR_R14_(VALUE) and r15d, dword ptr [r14 + VALUE]
#define AND_R15D_FROM_PTR_R15_(VALUE) and r15d, dword ptr [r15 + VALUE]
#define AND_R15D_FROM_PTR_EAX_(VALUE) and r15d, dword ptr [eax + VALUE]
#define AND_R15D_FROM_PTR_EBX_(VALUE) and r15d, dword ptr [ebx + VALUE]
#define AND_R15D_FROM_PTR_ECX_(VALUE) and r15d, dword ptr [ecx + VALUE]
#define AND_R15D_FROM_PTR_EDX_(VALUE) and r15d, dword ptr [edx + VALUE]
#define AND_R15D_FROM_PTR_EDI_(VALUE) and r15d, dword ptr [edi + VALUE]
#define AND_R15D_FROM_PTR_ESI_(VALUE) and r15d, dword ptr [esi + VALUE]
#define AND_R15D_FROM_PTR_EBP_(VALUE) and r15d, dword ptr [ebp + VALUE]
#define AND_R15D_FROM_PTR_ESP_(VALUE) and r15d, dword ptr [esp + VALUE]

#define AND_EAX_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], eax
#define AND_EAX_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], eax
#define AND_EAX_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], eax
#define AND_EAX_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], eax
#define AND_EAX_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], eax
#define AND_EAX_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], eax
#define AND_EAX_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], eax
#define AND_EAX_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], eax
#define AND_EAX_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], eax
#define AND_EAX_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], eax
#define AND_EAX_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], eax
#define AND_EAX_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], eax
#define AND_EAX_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], eax
#define AND_EAX_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], eax
#define AND_EAX_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], eax
#define AND_EAX_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], eax
#define AND_EAX_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], eax
#define AND_EAX_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], eax
#define AND_EAX_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], eax
#define AND_EAX_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], eax
#define AND_EAX_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], eax
#define AND_EAX_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], eax
#define AND_EAX_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], eax
#define AND_EAX_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], eax

#define AND_EBX_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], ebx
#define AND_EBX_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], ebx
#define AND_EBX_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], ebx
#define AND_EBX_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], ebx
#define AND_EBX_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], ebx
#define AND_EBX_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], ebx
#define AND_EBX_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], ebx
#define AND_EBX_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], ebx
#define AND_EBX_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], ebx
#define AND_EBX_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], ebx
#define AND_EBX_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], ebx
#define AND_EBX_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], ebx
#define AND_EBX_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], ebx
#define AND_EBX_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], ebx
#define AND_EBX_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], ebx
#define AND_EBX_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], ebx
#define AND_EBX_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], ebx
#define AND_EBX_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], ebx
#define AND_EBX_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], ebx
#define AND_EBX_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], ebx
#define AND_EBX_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], ebx
#define AND_EBX_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], ebx
#define AND_EBX_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], ebx
#define AND_EBX_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], ebx

#define AND_ECX_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], ecx
#define AND_ECX_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], ecx
#define AND_ECX_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], ecx
#define AND_ECX_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], ecx
#define AND_ECX_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], ecx
#define AND_ECX_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], ecx
#define AND_ECX_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], ecx
#define AND_ECX_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], ecx
#define AND_ECX_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], ecx
#define AND_ECX_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], ecx
#define AND_ECX_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], ecx
#define AND_ECX_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], ecx
#define AND_ECX_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], ecx
#define AND_ECX_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], ecx
#define AND_ECX_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], ecx
#define AND_ECX_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], ecx
#define AND_ECX_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], ecx
#define AND_ECX_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], ecx
#define AND_ECX_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], ecx
#define AND_ECX_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], ecx
#define AND_ECX_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], ecx
#define AND_ECX_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], ecx
#define AND_ECX_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], ecx
#define AND_ECX_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], ecx

#define AND_EDX_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], edx
#define AND_EDX_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], edx
#define AND_EDX_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], edx
#define AND_EDX_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], edx
#define AND_EDX_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], edx
#define AND_EDX_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], edx
#define AND_EDX_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], edx
#define AND_EDX_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], edx
#define AND_EDX_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], edx
#define AND_EDX_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], edx
#define AND_EDX_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], edx
#define AND_EDX_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], edx
#define AND_EDX_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], edx
#define AND_EDX_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], edx
#define AND_EDX_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], edx
#define AND_EDX_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], edx
#define AND_EDX_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], edx
#define AND_EDX_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], edx
#define AND_EDX_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], edx
#define AND_EDX_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], edx
#define AND_EDX_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], edx
#define AND_EDX_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], edx
#define AND_EDX_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], edx
#define AND_EDX_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], edx

#define AND_EDI_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], edi
#define AND_EDI_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], edi
#define AND_EDI_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], edi
#define AND_EDI_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], edi
#define AND_EDI_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], edi
#define AND_EDI_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], edi
#define AND_EDI_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], edi
#define AND_EDI_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], edi
#define AND_EDI_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], edi
#define AND_EDI_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], edi
#define AND_EDI_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], edi
#define AND_EDI_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], edi
#define AND_EDI_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], edi
#define AND_EDI_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], edi
#define AND_EDI_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], edi
#define AND_EDI_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], edi
#define AND_EDI_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], edi
#define AND_EDI_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], edi
#define AND_EDI_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], edi
#define AND_EDI_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], edi
#define AND_EDI_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], edi
#define AND_EDI_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], edi
#define AND_EDI_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], edi
#define AND_EDI_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], edi

#define AND_ESI_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], esi
#define AND_ESI_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], esi
#define AND_ESI_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], esi
#define AND_ESI_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], esi
#define AND_ESI_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], esi
#define AND_ESI_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], esi
#define AND_ESI_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], esi
#define AND_ESI_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], esi
#define AND_ESI_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], esi
#define AND_ESI_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], esi
#define AND_ESI_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], esi
#define AND_ESI_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], esi
#define AND_ESI_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], esi
#define AND_ESI_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], esi
#define AND_ESI_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], esi
#define AND_ESI_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], esi
#define AND_ESI_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], esi
#define AND_ESI_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], esi
#define AND_ESI_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], esi
#define AND_ESI_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], esi
#define AND_ESI_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], esi
#define AND_ESI_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], esi
#define AND_ESI_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], esi
#define AND_ESI_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], esi

#define AND_EBP_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], ebp
#define AND_EBP_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], ebp
#define AND_EBP_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], ebp
#define AND_EBP_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], ebp
#define AND_EBP_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], ebp
#define AND_EBP_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], ebp
#define AND_EBP_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], ebp
#define AND_EBP_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], ebp
#define AND_EBP_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], ebp
#define AND_EBP_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], ebp
#define AND_EBP_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], ebp
#define AND_EBP_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], ebp
#define AND_EBP_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], ebp
#define AND_EBP_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], ebp
#define AND_EBP_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], ebp
#define AND_EBP_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], ebp
#define AND_EBP_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], ebp
#define AND_EBP_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], ebp
#define AND_EBP_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], ebp
#define AND_EBP_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], ebp
#define AND_EBP_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], ebp
#define AND_EBP_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], ebp
#define AND_EBP_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], ebp
#define AND_EBP_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], ebp

#define AND_ESP_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], esp
#define AND_ESP_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], esp
#define AND_ESP_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], esp
#define AND_ESP_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], esp
#define AND_ESP_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], esp
#define AND_ESP_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], esp
#define AND_ESP_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], esp
#define AND_ESP_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], esp
#define AND_ESP_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], esp
#define AND_ESP_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], esp
#define AND_ESP_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], esp
#define AND_ESP_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], esp
#define AND_ESP_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], esp
#define AND_ESP_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], esp
#define AND_ESP_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], esp
#define AND_ESP_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], esp
#define AND_ESP_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], esp
#define AND_ESP_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], esp
#define AND_ESP_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], esp
#define AND_ESP_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], esp
#define AND_ESP_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], esp
#define AND_ESP_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], esp
#define AND_ESP_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], esp
#define AND_ESP_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], esp

#define AND_R8D_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], r8d
#define AND_R8D_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], r8d
#define AND_R8D_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], r8d
#define AND_R8D_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], r8d
#define AND_R8D_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], r8d
#define AND_R8D_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], r8d
#define AND_R8D_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], r8d
#define AND_R8D_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], r8d
#define AND_R8D_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], r8d
#define AND_R8D_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], r8d
#define AND_R8D_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], r8d
#define AND_R8D_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], r8d
#define AND_R8D_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], r8d
#define AND_R8D_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], r8d
#define AND_R8D_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], r8d
#define AND_R8D_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], r8d
#define AND_R8D_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], r8d
#define AND_R8D_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], r8d
#define AND_R8D_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], r8d
#define AND_R8D_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], r8d
#define AND_R8D_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], r8d
#define AND_R8D_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], r8d
#define AND_R8D_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], r8d
#define AND_R8D_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], r8d

#define AND_R9D_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], r9d
#define AND_R9D_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], r9d
#define AND_R9D_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], r9d
#define AND_R9D_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], r9d
#define AND_R9D_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], r9d
#define AND_R9D_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], r9d
#define AND_R9D_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], r9d
#define AND_R9D_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], r9d
#define AND_R9D_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], r9d
#define AND_R9D_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], r9d
#define AND_R9D_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], r9d
#define AND_R9D_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], r9d
#define AND_R9D_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], r9d
#define AND_R9D_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], r9d
#define AND_R9D_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], r9d
#define AND_R9D_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], r9d
#define AND_R9D_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], r9d
#define AND_R9D_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], r9d
#define AND_R9D_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], r9d
#define AND_R9D_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], r9d
#define AND_R9D_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], r9d
#define AND_R9D_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], r9d
#define AND_R9D_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], r9d
#define AND_R9D_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], r9d

#define AND_R10D_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], r10d
#define AND_R10D_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], r10d
#define AND_R10D_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], r10d
#define AND_R10D_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], r10d
#define AND_R10D_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], r10d
#define AND_R10D_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], r10d
#define AND_R10D_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], r10d
#define AND_R10D_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], r10d
#define AND_R10D_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], r10d
#define AND_R10D_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], r10d
#define AND_R10D_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], r10d
#define AND_R10D_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], r10d
#define AND_R10D_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], r10d
#define AND_R10D_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], r10d
#define AND_R10D_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], r10d
#define AND_R10D_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], r10d
#define AND_R10D_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], r10d
#define AND_R10D_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], r10d
#define AND_R10D_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], r10d
#define AND_R10D_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], r10d
#define AND_R10D_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], r10d
#define AND_R10D_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], r10d
#define AND_R10D_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], r10d
#define AND_R10D_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], r10d

#define AND_R11D_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], r11d
#define AND_R11D_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], r11d
#define AND_R11D_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], r11d
#define AND_R11D_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], r11d
#define AND_R11D_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], r11d
#define AND_R11D_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], r11d
#define AND_R11D_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], r11d
#define AND_R11D_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], r11d
#define AND_R11D_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], r11d
#define AND_R11D_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], r11d
#define AND_R11D_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], r11d
#define AND_R11D_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], r11d
#define AND_R11D_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], r11d
#define AND_R11D_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], r11d
#define AND_R11D_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], r11d
#define AND_R11D_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], r11d
#define AND_R11D_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], r11d
#define AND_R11D_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], r11d
#define AND_R11D_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], r11d
#define AND_R11D_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], r11d
#define AND_R11D_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], r11d
#define AND_R11D_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], r11d
#define AND_R11D_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], r11d
#define AND_R11D_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], r11d

#define AND_R12D_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], r12d
#define AND_R12D_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], r12d
#define AND_R12D_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], r12d
#define AND_R12D_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], r12d
#define AND_R12D_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], r12d
#define AND_R12D_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], r12d
#define AND_R12D_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], r12d
#define AND_R12D_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], r12d
#define AND_R12D_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], r12d
#define AND_R12D_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], r12d
#define AND_R12D_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], r12d
#define AND_R12D_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], r12d
#define AND_R12D_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], r12d
#define AND_R12D_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], r12d
#define AND_R12D_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], r12d
#define AND_R12D_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], r12d
#define AND_R12D_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], r12d
#define AND_R12D_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], r12d
#define AND_R12D_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], r12d
#define AND_R12D_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], r12d
#define AND_R12D_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], r12d
#define AND_R12D_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], r12d
#define AND_R12D_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], r12d
#define AND_R12D_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], r12d

#define AND_R13D_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], r13d
#define AND_R13D_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], r13d
#define AND_R13D_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], r13d
#define AND_R13D_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], r13d
#define AND_R13D_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], r13d
#define AND_R13D_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], r13d
#define AND_R13D_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], r13d
#define AND_R13D_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], r13d
#define AND_R13D_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], r13d
#define AND_R13D_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], r13d
#define AND_R13D_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], r13d
#define AND_R13D_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], r13d
#define AND_R13D_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], r13d
#define AND_R13D_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], r13d
#define AND_R13D_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], r13d
#define AND_R13D_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], r13d
#define AND_R13D_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], r13d
#define AND_R13D_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], r13d
#define AND_R13D_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], r13d
#define AND_R13D_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], r13d
#define AND_R13D_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], r13d
#define AND_R13D_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], r13d
#define AND_R13D_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], r13d
#define AND_R13D_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], r13d

#define AND_R14D_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], r14d
#define AND_R14D_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], r14d
#define AND_R14D_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], r14d
#define AND_R14D_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], r14d
#define AND_R14D_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], r14d
#define AND_R14D_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], r14d
#define AND_R14D_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], r14d
#define AND_R14D_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], r14d
#define AND_R14D_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], r14d
#define AND_R14D_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], r14d
#define AND_R14D_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], r14d
#define AND_R14D_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], r14d
#define AND_R14D_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], r14d
#define AND_R14D_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], r14d
#define AND_R14D_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], r14d
#define AND_R14D_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], r14d
#define AND_R14D_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], r14d
#define AND_R14D_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], r14d
#define AND_R14D_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], r14d
#define AND_R14D_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], r14d
#define AND_R14D_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], r14d
#define AND_R14D_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], r14d
#define AND_R14D_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], r14d
#define AND_R14D_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], r14d

#define AND_R15D_TO_PTR_RAX_(VALUE) and dword ptr [rax + VALUE], r15d
#define AND_R15D_TO_PTR_RBX_(VALUE) and dword ptr [rbx + VALUE], r15d
#define AND_R15D_TO_PTR_RCX_(VALUE) and dword ptr [rcx + VALUE], r15d
#define AND_R15D_TO_PTR_RDX_(VALUE) and dword ptr [rdx + VALUE], r15d
#define AND_R15D_TO_PTR_RDI_(VALUE) and dword ptr [rdi + VALUE], r15d
#define AND_R15D_TO_PTR_RSI_(VALUE) and dword ptr [rsi + VALUE], r15d
#define AND_R15D_TO_PTR_RBP_(VALUE) and dword ptr [rbp + VALUE], r15d
#define AND_R15D_TO_PTR_RSP_(VALUE) and dword ptr [rsp + VALUE], r15d
#define AND_R15D_TO_PTR_R8_(VALUE) and dword ptr [r8 + VALUE], r15d
#define AND_R15D_TO_PTR_R9_(VALUE) and dword ptr [r9 + VALUE], r15d
#define AND_R15D_TO_PTR_R10_(VALUE) and dword ptr [r10 + VALUE], r15d
#define AND_R15D_TO_PTR_R11_(VALUE) and dword ptr [r11 + VALUE], r15d
#define AND_R15D_TO_PTR_R12_(VALUE) and dword ptr [r12 + VALUE], r15d
#define AND_R15D_TO_PTR_R13_(VALUE) and dword ptr [r13 + VALUE], r15d
#define AND_R15D_TO_PTR_R14_(VALUE) and dword ptr [r14 + VALUE], r15d
#define AND_R15D_TO_PTR_R15_(VALUE) and dword ptr [r15 + VALUE], r15d
#define AND_R15D_TO_PTR_EAX_(VALUE) and dword ptr [eax + VALUE], r15d
#define AND_R15D_TO_PTR_EBX_(VALUE) and dword ptr [ebx + VALUE], r15d
#define AND_R15D_TO_PTR_ECX_(VALUE) and dword ptr [ecx + VALUE], r15d
#define AND_R15D_TO_PTR_EDX_(VALUE) and dword ptr [edx + VALUE], r15d
#define AND_R15D_TO_PTR_EDI_(VALUE) and dword ptr [edi + VALUE], r15d
#define AND_R15D_TO_PTR_ESI_(VALUE) and dword ptr [esi + VALUE], r15d
#define AND_R15D_TO_PTR_EBP_(VALUE) and dword ptr [ebp + VALUE], r15d
#define AND_R15D_TO_PTR_ESP_(VALUE) and dword ptr [esp + VALUE], r15d
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
