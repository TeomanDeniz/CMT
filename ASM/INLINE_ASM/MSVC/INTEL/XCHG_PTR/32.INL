#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define XCHG_EAX_FROM_PTR_(VALUE) xchg eax, dword ptr [VALUE]
#define XCHG_EBX_FROM_PTR_(VALUE) xchg ebx, dword ptr [VALUE]
#define XCHG_ECX_FROM_PTR_(VALUE) xchg ecx, dword ptr [VALUE]
#define XCHG_EDX_FROM_PTR_(VALUE) xchg edx, dword ptr [VALUE]
#define XCHG_EDI_FROM_PTR_(VALUE) xchg edi, dword ptr [VALUE]
#define XCHG_ESI_FROM_PTR_(VALUE) xchg esi, dword ptr [VALUE]
#define XCHG_EBP_FROM_PTR_(VALUE) xchg ebp, dword ptr [VALUE]
#define XCHG_ESP_FROM_PTR_(VALUE) xchg esp, dword ptr [VALUE]

#define XCHG_EAX_TO_PTR_(VALUE) xchg dword ptr [VALUE], eax
#define XCHG_EBX_TO_PTR_(VALUE) xchg dword ptr [VALUE], ebx
#define XCHG_ECX_TO_PTR_(VALUE) xchg dword ptr [VALUE], ecx
#define XCHG_EDX_TO_PTR_(VALUE) xchg dword ptr [VALUE], edx
#define XCHG_EDI_TO_PTR_(VALUE) xchg dword ptr [VALUE], edi
#define XCHG_ESI_TO_PTR_(VALUE) xchg dword ptr [VALUE], esi
#define XCHG_EBP_TO_PTR_(VALUE) xchg dword ptr [VALUE], ebp
#define XCHG_ESP_TO_PTR_(VALUE) xchg dword ptr [VALUE], esp

#define XCHG_EAX_FROM_PTR_EAX xchg eax, dword ptr [eax]
#define XCHG_EAX_FROM_PTR_EBX xchg eax, dword ptr [ebx]
#define XCHG_EAX_FROM_PTR_ECX xchg eax, dword ptr [ecx]
#define XCHG_EAX_FROM_PTR_EDX xchg eax, dword ptr [edx]
#define XCHG_EAX_FROM_PTR_EDI xchg eax, dword ptr [edi]
#define XCHG_EAX_FROM_PTR_ESI xchg eax, dword ptr [esi]
#define XCHG_EAX_FROM_PTR_EBP xchg eax, dword ptr [ebp]
#define XCHG_EAX_FROM_PTR_ESP xchg eax, dword ptr [esp]
#define XCHG_EAX_FROM_PTR_BX xchg eax, dword ptr [bx]
#define XCHG_EAX_FROM_PTR_BP xchg eax, dword ptr [bp]
#define XCHG_EAX_FROM_PTR_SI xchg eax, dword ptr [si]
#define XCHG_EAX_FROM_PTR_DI xchg eax, dword ptr [di]

#define XCHG_EBX_FROM_PTR_EAX xchg ebx, dword ptr [eax]
#define XCHG_EBX_FROM_PTR_EBX xchg ebx, dword ptr [ebx]
#define XCHG_EBX_FROM_PTR_ECX xchg ebx, dword ptr [ecx]
#define XCHG_EBX_FROM_PTR_EDX xchg ebx, dword ptr [edx]
#define XCHG_EBX_FROM_PTR_EDI xchg ebx, dword ptr [edi]
#define XCHG_EBX_FROM_PTR_ESI xchg ebx, dword ptr [esi]
#define XCHG_EBX_FROM_PTR_EBP xchg ebx, dword ptr [ebp]
#define XCHG_EBX_FROM_PTR_ESP xchg ebx, dword ptr [esp]
#define XCHG_EBX_FROM_PTR_BX xchg ebx, dword ptr [bx]
#define XCHG_EBX_FROM_PTR_BP xchg ebx, dword ptr [bp]
#define XCHG_EBX_FROM_PTR_SI xchg ebx, dword ptr [si]
#define XCHG_EBX_FROM_PTR_DI xchg ebx, dword ptr [di]

#define XCHG_ECX_FROM_PTR_EAX xchg ecx, dword ptr [eax]
#define XCHG_ECX_FROM_PTR_EBX xchg ecx, dword ptr [ebx]
#define XCHG_ECX_FROM_PTR_ECX xchg ecx, dword ptr [ecx]
#define XCHG_ECX_FROM_PTR_EDX xchg ecx, dword ptr [edx]
#define XCHG_ECX_FROM_PTR_EDI xchg ecx, dword ptr [edi]
#define XCHG_ECX_FROM_PTR_ESI xchg ecx, dword ptr [esi]
#define XCHG_ECX_FROM_PTR_EBP xchg ecx, dword ptr [ebp]
#define XCHG_ECX_FROM_PTR_ESP xchg ecx, dword ptr [esp]
#define XCHG_ECX_FROM_PTR_BX xchg ecx, dword ptr [bx]
#define XCHG_ECX_FROM_PTR_BP xchg ecx, dword ptr [bp]
#define XCHG_ECX_FROM_PTR_SI xchg ecx, dword ptr [si]
#define XCHG_ECX_FROM_PTR_DI xchg ecx, dword ptr [di]

#define XCHG_EDX_FROM_PTR_EAX xchg edx, dword ptr [eax]
#define XCHG_EDX_FROM_PTR_EBX xchg edx, dword ptr [ebx]
#define XCHG_EDX_FROM_PTR_ECX xchg edx, dword ptr [ecx]
#define XCHG_EDX_FROM_PTR_EDX xchg edx, dword ptr [edx]
#define XCHG_EDX_FROM_PTR_EDI xchg edx, dword ptr [edi]
#define XCHG_EDX_FROM_PTR_ESI xchg edx, dword ptr [esi]
#define XCHG_EDX_FROM_PTR_EBP xchg edx, dword ptr [ebp]
#define XCHG_EDX_FROM_PTR_ESP xchg edx, dword ptr [esp]
#define XCHG_EDX_FROM_PTR_BX xchg edx, dword ptr [bx]
#define XCHG_EDX_FROM_PTR_BP xchg edx, dword ptr [bp]
#define XCHG_EDX_FROM_PTR_SI xchg edx, dword ptr [si]
#define XCHG_EDX_FROM_PTR_DI xchg edx, dword ptr [di]

#define XCHG_EDI_FROM_PTR_EAX xchg edi, dword ptr [eax]
#define XCHG_EDI_FROM_PTR_EBX xchg edi, dword ptr [ebx]
#define XCHG_EDI_FROM_PTR_ECX xchg edi, dword ptr [ecx]
#define XCHG_EDI_FROM_PTR_EDX xchg edi, dword ptr [edx]
#define XCHG_EDI_FROM_PTR_EDI xchg edi, dword ptr [edi]
#define XCHG_EDI_FROM_PTR_ESI xchg edi, dword ptr [esi]
#define XCHG_EDI_FROM_PTR_EBP xchg edi, dword ptr [ebp]
#define XCHG_EDI_FROM_PTR_ESP xchg edi, dword ptr [esp]
#define XCHG_EDI_FROM_PTR_BX xchg edi, dword ptr [bx]
#define XCHG_EDI_FROM_PTR_BP xchg edi, dword ptr [bp]
#define XCHG_EDI_FROM_PTR_SI xchg edi, dword ptr [si]
#define XCHG_EDI_FROM_PTR_DI xchg edi, dword ptr [di]

#define XCHG_ESI_FROM_PTR_EAX xchg esi, dword ptr [eax]
#define XCHG_ESI_FROM_PTR_EBX xchg esi, dword ptr [ebx]
#define XCHG_ESI_FROM_PTR_ECX xchg esi, dword ptr [ecx]
#define XCHG_ESI_FROM_PTR_EDX xchg esi, dword ptr [edx]
#define XCHG_ESI_FROM_PTR_EDI xchg esi, dword ptr [edi]
#define XCHG_ESI_FROM_PTR_ESI xchg esi, dword ptr [esi]
#define XCHG_ESI_FROM_PTR_EBP xchg esi, dword ptr [ebp]
#define XCHG_ESI_FROM_PTR_ESP xchg esi, dword ptr [esp]
#define XCHG_ESI_FROM_PTR_BX xchg esi, dword ptr [bx]
#define XCHG_ESI_FROM_PTR_BP xchg esi, dword ptr [bp]
#define XCHG_ESI_FROM_PTR_SI xchg esi, dword ptr [si]
#define XCHG_ESI_FROM_PTR_DI xchg esi, dword ptr [di]

#define XCHG_EBP_FROM_PTR_EAX xchg ebp, dword ptr [eax]
#define XCHG_EBP_FROM_PTR_EBX xchg ebp, dword ptr [ebx]
#define XCHG_EBP_FROM_PTR_ECX xchg ebp, dword ptr [ecx]
#define XCHG_EBP_FROM_PTR_EDX xchg ebp, dword ptr [edx]
#define XCHG_EBP_FROM_PTR_EDI xchg ebp, dword ptr [edi]
#define XCHG_EBP_FROM_PTR_ESI xchg ebp, dword ptr [esi]
#define XCHG_EBP_FROM_PTR_EBP xchg ebp, dword ptr [ebp]
#define XCHG_EBP_FROM_PTR_ESP xchg ebp, dword ptr [esp]
#define XCHG_EBP_FROM_PTR_BX xchg ebp, dword ptr [bx]
#define XCHG_EBP_FROM_PTR_BP xchg ebp, dword ptr [bp]
#define XCHG_EBP_FROM_PTR_SI xchg ebp, dword ptr [si]
#define XCHG_EBP_FROM_PTR_DI xchg ebp, dword ptr [di]

#define XCHG_ESP_FROM_PTR_EAX xchg esp, dword ptr [eax]
#define XCHG_ESP_FROM_PTR_EBX xchg esp, dword ptr [ebx]
#define XCHG_ESP_FROM_PTR_ECX xchg esp, dword ptr [ecx]
#define XCHG_ESP_FROM_PTR_EDX xchg esp, dword ptr [edx]
#define XCHG_ESP_FROM_PTR_EDI xchg esp, dword ptr [edi]
#define XCHG_ESP_FROM_PTR_ESI xchg esp, dword ptr [esi]
#define XCHG_ESP_FROM_PTR_EBP xchg esp, dword ptr [ebp]
#define XCHG_ESP_FROM_PTR_ESP xchg esp, dword ptr [esp]
#define XCHG_ESP_FROM_PTR_BX xchg esp, dword ptr [bx]
#define XCHG_ESP_FROM_PTR_BP xchg esp, dword ptr [bp]
#define XCHG_ESP_FROM_PTR_SI xchg esp, dword ptr [si]
#define XCHG_ESP_FROM_PTR_DI xchg esp, dword ptr [di]

#define XCHG_EAX_TO_PTR_EAX xchg dword ptr [eax], eax
#define XCHG_EAX_TO_PTR_EBX xchg dword ptr [ebx], eax
#define XCHG_EAX_TO_PTR_ECX xchg dword ptr [ecx], eax
#define XCHG_EAX_TO_PTR_EDX xchg dword ptr [edx], eax
#define XCHG_EAX_TO_PTR_EDI xchg dword ptr [edi], eax
#define XCHG_EAX_TO_PTR_ESI xchg dword ptr [esi], eax
#define XCHG_EAX_TO_PTR_EBP xchg dword ptr [ebp], eax
#define XCHG_EAX_TO_PTR_ESP xchg dword ptr [esp], eax
#define XCHG_EAX_TO_PTR_BX xchg dword ptr [bx], eax
#define XCHG_EAX_TO_PTR_BP xchg dword ptr [bp], eax
#define XCHG_EAX_TO_PTR_SI xchg dword ptr [si], eax
#define XCHG_EAX_TO_PTR_DI xchg dword ptr [di], eax

#define XCHG_EBX_TO_PTR_EAX xchg dword ptr [eax], ebx
#define XCHG_EBX_TO_PTR_EBX xchg dword ptr [ebx], ebx
#define XCHG_EBX_TO_PTR_ECX xchg dword ptr [ecx], ebx
#define XCHG_EBX_TO_PTR_EDX xchg dword ptr [edx], ebx
#define XCHG_EBX_TO_PTR_EDI xchg dword ptr [edi], ebx
#define XCHG_EBX_TO_PTR_ESI xchg dword ptr [esi], ebx
#define XCHG_EBX_TO_PTR_EBP xchg dword ptr [ebp], ebx
#define XCHG_EBX_TO_PTR_ESP xchg dword ptr [esp], ebx
#define XCHG_EBX_TO_PTR_BX xchg dword ptr [bx], ebx
#define XCHG_EBX_TO_PTR_BP xchg dword ptr [bp], ebx
#define XCHG_EBX_TO_PTR_SI xchg dword ptr [si], ebx
#define XCHG_EBX_TO_PTR_DI xchg dword ptr [di], ebx

#define XCHG_ECX_TO_PTR_EAX xchg dword ptr [eax], ecx
#define XCHG_ECX_TO_PTR_EBX xchg dword ptr [ebx], ecx
#define XCHG_ECX_TO_PTR_ECX xchg dword ptr [ecx], ecx
#define XCHG_ECX_TO_PTR_EDX xchg dword ptr [edx], ecx
#define XCHG_ECX_TO_PTR_EDI xchg dword ptr [edi], ecx
#define XCHG_ECX_TO_PTR_ESI xchg dword ptr [esi], ecx
#define XCHG_ECX_TO_PTR_EBP xchg dword ptr [ebp], ecx
#define XCHG_ECX_TO_PTR_ESP xchg dword ptr [esp], ecx
#define XCHG_ECX_TO_PTR_BX xchg dword ptr [bx], ecx
#define XCHG_ECX_TO_PTR_BP xchg dword ptr [bp], ecx
#define XCHG_ECX_TO_PTR_SI xchg dword ptr [si], ecx
#define XCHG_ECX_TO_PTR_DI xchg dword ptr [di], ecx

#define XCHG_EDX_TO_PTR_EAX xchg dword ptr [eax], edx
#define XCHG_EDX_TO_PTR_EBX xchg dword ptr [ebx], edx
#define XCHG_EDX_TO_PTR_ECX xchg dword ptr [ecx], edx
#define XCHG_EDX_TO_PTR_EDX xchg dword ptr [edx], edx
#define XCHG_EDX_TO_PTR_EDI xchg dword ptr [edi], edx
#define XCHG_EDX_TO_PTR_ESI xchg dword ptr [esi], edx
#define XCHG_EDX_TO_PTR_EBP xchg dword ptr [ebp], edx
#define XCHG_EDX_TO_PTR_ESP xchg dword ptr [esp], edx
#define XCHG_EDX_TO_PTR_BX xchg dword ptr [bx], edx
#define XCHG_EDX_TO_PTR_BP xchg dword ptr [bp], edx
#define XCHG_EDX_TO_PTR_SI xchg dword ptr [si], edx
#define XCHG_EDX_TO_PTR_DI xchg dword ptr [di], edx

#define XCHG_EDI_TO_PTR_EAX xchg dword ptr [eax], edi
#define XCHG_EDI_TO_PTR_EBX xchg dword ptr [ebx], edi
#define XCHG_EDI_TO_PTR_ECX xchg dword ptr [ecx], edi
#define XCHG_EDI_TO_PTR_EDX xchg dword ptr [edx], edi
#define XCHG_EDI_TO_PTR_EDI xchg dword ptr [edi], edi
#define XCHG_EDI_TO_PTR_ESI xchg dword ptr [esi], edi
#define XCHG_EDI_TO_PTR_EBP xchg dword ptr [ebp], edi
#define XCHG_EDI_TO_PTR_ESP xchg dword ptr [esp], edi
#define XCHG_EDI_TO_PTR_BX xchg dword ptr [bx], edi
#define XCHG_EDI_TO_PTR_BP xchg dword ptr [bp], edi
#define XCHG_EDI_TO_PTR_SI xchg dword ptr [si], edi
#define XCHG_EDI_TO_PTR_DI xchg dword ptr [di], edi

#define XCHG_ESI_TO_PTR_EAX xchg dword ptr [eax], esi
#define XCHG_ESI_TO_PTR_EBX xchg dword ptr [ebx], esi
#define XCHG_ESI_TO_PTR_ECX xchg dword ptr [ecx], esi
#define XCHG_ESI_TO_PTR_EDX xchg dword ptr [edx], esi
#define XCHG_ESI_TO_PTR_EDI xchg dword ptr [edi], esi
#define XCHG_ESI_TO_PTR_ESI xchg dword ptr [esi], esi
#define XCHG_ESI_TO_PTR_EBP xchg dword ptr [ebp], esi
#define XCHG_ESI_TO_PTR_ESP xchg dword ptr [esp], esi
#define XCHG_ESI_TO_PTR_BX xchg dword ptr [bx], esi
#define XCHG_ESI_TO_PTR_BP xchg dword ptr [bp], esi
#define XCHG_ESI_TO_PTR_SI xchg dword ptr [si], esi
#define XCHG_ESI_TO_PTR_DI xchg dword ptr [di], esi

#define XCHG_EBP_TO_PTR_EAX xchg dword ptr [eax], ebp
#define XCHG_EBP_TO_PTR_EBX xchg dword ptr [ebx], ebp
#define XCHG_EBP_TO_PTR_ECX xchg dword ptr [ecx], ebp
#define XCHG_EBP_TO_PTR_EDX xchg dword ptr [edx], ebp
#define XCHG_EBP_TO_PTR_EDI xchg dword ptr [edi], ebp
#define XCHG_EBP_TO_PTR_ESI xchg dword ptr [esi], ebp
#define XCHG_EBP_TO_PTR_EBP xchg dword ptr [ebp], ebp
#define XCHG_EBP_TO_PTR_ESP xchg dword ptr [esp], ebp
#define XCHG_EBP_TO_PTR_BX xchg dword ptr [bx], ebp
#define XCHG_EBP_TO_PTR_BP xchg dword ptr [bp], ebp
#define XCHG_EBP_TO_PTR_SI xchg dword ptr [si], ebp
#define XCHG_EBP_TO_PTR_DI xchg dword ptr [di], ebp

#define XCHG_ESP_TO_PTR_EAX xchg dword ptr [eax], esp
#define XCHG_ESP_TO_PTR_EBX xchg dword ptr [ebx], esp
#define XCHG_ESP_TO_PTR_ECX xchg dword ptr [ecx], esp
#define XCHG_ESP_TO_PTR_EDX xchg dword ptr [edx], esp
#define XCHG_ESP_TO_PTR_EDI xchg dword ptr [edi], esp
#define XCHG_ESP_TO_PTR_ESI xchg dword ptr [esi], esp
#define XCHG_ESP_TO_PTR_EBP xchg dword ptr [ebp], esp
#define XCHG_ESP_TO_PTR_ESP xchg dword ptr [esp], esp
#define XCHG_ESP_TO_PTR_BX xchg dword ptr [bx], esp
#define XCHG_ESP_TO_PTR_BP xchg dword ptr [bp], esp
#define XCHG_ESP_TO_PTR_SI xchg dword ptr [si], esp
#define XCHG_ESP_TO_PTR_DI xchg dword ptr [di], esp

#define XCHG_EAX_FROM_PTR_EAX_(VALUE) xchg eax, dword ptr [eax + VALUE]
#define XCHG_EAX_FROM_PTR_EBX_(VALUE) xchg eax, dword ptr [ebx + VALUE]
#define XCHG_EAX_FROM_PTR_ECX_(VALUE) xchg eax, dword ptr [ecx + VALUE]
#define XCHG_EAX_FROM_PTR_EDX_(VALUE) xchg eax, dword ptr [edx + VALUE]
#define XCHG_EAX_FROM_PTR_EDI_(VALUE) xchg eax, dword ptr [edi + VALUE]
#define XCHG_EAX_FROM_PTR_ESI_(VALUE) xchg eax, dword ptr [esi + VALUE]
#define XCHG_EAX_FROM_PTR_EBP_(VALUE) xchg eax, dword ptr [ebp + VALUE]
#define XCHG_EAX_FROM_PTR_ESP_(VALUE) xchg eax, dword ptr [esp + VALUE]
#define XCHG_EAX_FROM_PTR_BX_(VALUE) xchg eax, dword ptr [bx + VALUE]
#define XCHG_EAX_FROM_PTR_BP_(VALUE) xchg eax, dword ptr [bp + VALUE]
#define XCHG_EAX_FROM_PTR_SI_(VALUE) xchg eax, dword ptr [si + VALUE]
#define XCHG_EAX_FROM_PTR_DI_(VALUE) xchg eax, dword ptr [di + VALUE]

#define XCHG_EBX_FROM_PTR_EAX_(VALUE) xchg ebx, dword ptr [eax + VALUE]
#define XCHG_EBX_FROM_PTR_EBX_(VALUE) xchg ebx, dword ptr [ebx + VALUE]
#define XCHG_EBX_FROM_PTR_ECX_(VALUE) xchg ebx, dword ptr [ecx + VALUE]
#define XCHG_EBX_FROM_PTR_EDX_(VALUE) xchg ebx, dword ptr [edx + VALUE]
#define XCHG_EBX_FROM_PTR_EDI_(VALUE) xchg ebx, dword ptr [edi + VALUE]
#define XCHG_EBX_FROM_PTR_ESI_(VALUE) xchg ebx, dword ptr [esi + VALUE]
#define XCHG_EBX_FROM_PTR_EBP_(VALUE) xchg ebx, dword ptr [ebp + VALUE]
#define XCHG_EBX_FROM_PTR_ESP_(VALUE) xchg ebx, dword ptr [esp + VALUE]
#define XCHG_EBX_FROM_PTR_BX_(VALUE) xchg ebx, dword ptr [bx + VALUE]
#define XCHG_EBX_FROM_PTR_BP_(VALUE) xchg ebx, dword ptr [bp + VALUE]
#define XCHG_EBX_FROM_PTR_SI_(VALUE) xchg ebx, dword ptr [si + VALUE]
#define XCHG_EBX_FROM_PTR_DI_(VALUE) xchg ebx, dword ptr [di + VALUE]

#define XCHG_ECX_FROM_PTR_EAX_(VALUE) xchg ecx, dword ptr [eax + VALUE]
#define XCHG_ECX_FROM_PTR_EBX_(VALUE) xchg ecx, dword ptr [ebx + VALUE]
#define XCHG_ECX_FROM_PTR_ECX_(VALUE) xchg ecx, dword ptr [ecx + VALUE]
#define XCHG_ECX_FROM_PTR_EDX_(VALUE) xchg ecx, dword ptr [edx + VALUE]
#define XCHG_ECX_FROM_PTR_EDI_(VALUE) xchg ecx, dword ptr [edi + VALUE]
#define XCHG_ECX_FROM_PTR_ESI_(VALUE) xchg ecx, dword ptr [esi + VALUE]
#define XCHG_ECX_FROM_PTR_EBP_(VALUE) xchg ecx, dword ptr [ebp + VALUE]
#define XCHG_ECX_FROM_PTR_ESP_(VALUE) xchg ecx, dword ptr [esp + VALUE]
#define XCHG_ECX_FROM_PTR_BX_(VALUE) xchg ecx, dword ptr [bx + VALUE]
#define XCHG_ECX_FROM_PTR_BP_(VALUE) xchg ecx, dword ptr [bp + VALUE]
#define XCHG_ECX_FROM_PTR_SI_(VALUE) xchg ecx, dword ptr [si + VALUE]
#define XCHG_ECX_FROM_PTR_DI_(VALUE) xchg ecx, dword ptr [di + VALUE]

#define XCHG_EDX_FROM_PTR_EAX_(VALUE) xchg edx, dword ptr [eax + VALUE]
#define XCHG_EDX_FROM_PTR_EBX_(VALUE) xchg edx, dword ptr [ebx + VALUE]
#define XCHG_EDX_FROM_PTR_ECX_(VALUE) xchg edx, dword ptr [ecx + VALUE]
#define XCHG_EDX_FROM_PTR_EDX_(VALUE) xchg edx, dword ptr [edx + VALUE]
#define XCHG_EDX_FROM_PTR_EDI_(VALUE) xchg edx, dword ptr [edi + VALUE]
#define XCHG_EDX_FROM_PTR_ESI_(VALUE) xchg edx, dword ptr [esi + VALUE]
#define XCHG_EDX_FROM_PTR_EBP_(VALUE) xchg edx, dword ptr [ebp + VALUE]
#define XCHG_EDX_FROM_PTR_ESP_(VALUE) xchg edx, dword ptr [esp + VALUE]
#define XCHG_EDX_FROM_PTR_BX_(VALUE) xchg edx, dword ptr [bx + VALUE]
#define XCHG_EDX_FROM_PTR_BP_(VALUE) xchg edx, dword ptr [bp + VALUE]
#define XCHG_EDX_FROM_PTR_SI_(VALUE) xchg edx, dword ptr [si + VALUE]
#define XCHG_EDX_FROM_PTR_DI_(VALUE) xchg edx, dword ptr [di + VALUE]

#define XCHG_EDI_FROM_PTR_EAX_(VALUE) xchg edi, dword ptr [eax + VALUE]
#define XCHG_EDI_FROM_PTR_EBX_(VALUE) xchg edi, dword ptr [ebx + VALUE]
#define XCHG_EDI_FROM_PTR_ECX_(VALUE) xchg edi, dword ptr [ecx + VALUE]
#define XCHG_EDI_FROM_PTR_EDX_(VALUE) xchg edi, dword ptr [edx + VALUE]
#define XCHG_EDI_FROM_PTR_EDI_(VALUE) xchg edi, dword ptr [edi + VALUE]
#define XCHG_EDI_FROM_PTR_ESI_(VALUE) xchg edi, dword ptr [esi + VALUE]
#define XCHG_EDI_FROM_PTR_EBP_(VALUE) xchg edi, dword ptr [ebp + VALUE]
#define XCHG_EDI_FROM_PTR_ESP_(VALUE) xchg edi, dword ptr [esp + VALUE]
#define XCHG_EDI_FROM_PTR_BX_(VALUE) xchg edi, dword ptr [bx + VALUE]
#define XCHG_EDI_FROM_PTR_BP_(VALUE) xchg edi, dword ptr [bp + VALUE]
#define XCHG_EDI_FROM_PTR_SI_(VALUE) xchg edi, dword ptr [si + VALUE]
#define XCHG_EDI_FROM_PTR_DI_(VALUE) xchg edi, dword ptr [di + VALUE]

#define XCHG_ESI_FROM_PTR_EAX_(VALUE) xchg esi, dword ptr [eax + VALUE]
#define XCHG_ESI_FROM_PTR_EBX_(VALUE) xchg esi, dword ptr [ebx + VALUE]
#define XCHG_ESI_FROM_PTR_ECX_(VALUE) xchg esi, dword ptr [ecx + VALUE]
#define XCHG_ESI_FROM_PTR_EDX_(VALUE) xchg esi, dword ptr [edx + VALUE]
#define XCHG_ESI_FROM_PTR_EDI_(VALUE) xchg esi, dword ptr [edi + VALUE]
#define XCHG_ESI_FROM_PTR_ESI_(VALUE) xchg esi, dword ptr [esi + VALUE]
#define XCHG_ESI_FROM_PTR_EBP_(VALUE) xchg esi, dword ptr [ebp + VALUE]
#define XCHG_ESI_FROM_PTR_ESP_(VALUE) xchg esi, dword ptr [esp + VALUE]
#define XCHG_ESI_FROM_PTR_BX_(VALUE) xchg esi, dword ptr [bx + VALUE]
#define XCHG_ESI_FROM_PTR_BP_(VALUE) xchg esi, dword ptr [bp + VALUE]
#define XCHG_ESI_FROM_PTR_SI_(VALUE) xchg esi, dword ptr [si + VALUE]
#define XCHG_ESI_FROM_PTR_DI_(VALUE) xchg esi, dword ptr [di + VALUE]

#define XCHG_EBP_FROM_PTR_EAX_(VALUE) xchg ebp, dword ptr [eax + VALUE]
#define XCHG_EBP_FROM_PTR_EBX_(VALUE) xchg ebp, dword ptr [ebx + VALUE]
#define XCHG_EBP_FROM_PTR_ECX_(VALUE) xchg ebp, dword ptr [ecx + VALUE]
#define XCHG_EBP_FROM_PTR_EDX_(VALUE) xchg ebp, dword ptr [edx + VALUE]
#define XCHG_EBP_FROM_PTR_EDI_(VALUE) xchg ebp, dword ptr [edi + VALUE]
#define XCHG_EBP_FROM_PTR_ESI_(VALUE) xchg ebp, dword ptr [esi + VALUE]
#define XCHG_EBP_FROM_PTR_EBP_(VALUE) xchg ebp, dword ptr [ebp + VALUE]
#define XCHG_EBP_FROM_PTR_ESP_(VALUE) xchg ebp, dword ptr [esp + VALUE]
#define XCHG_EBP_FROM_PTR_BX_(VALUE) xchg ebp, dword ptr [bx + VALUE]
#define XCHG_EBP_FROM_PTR_BP_(VALUE) xchg ebp, dword ptr [bp + VALUE]
#define XCHG_EBP_FROM_PTR_SI_(VALUE) xchg ebp, dword ptr [si + VALUE]
#define XCHG_EBP_FROM_PTR_DI_(VALUE) xchg ebp, dword ptr [di + VALUE]

#define XCHG_ESP_FROM_PTR_EAX_(VALUE) xchg esp, dword ptr [eax + VALUE]
#define XCHG_ESP_FROM_PTR_EBX_(VALUE) xchg esp, dword ptr [ebx + VALUE]
#define XCHG_ESP_FROM_PTR_ECX_(VALUE) xchg esp, dword ptr [ecx + VALUE]
#define XCHG_ESP_FROM_PTR_EDX_(VALUE) xchg esp, dword ptr [edx + VALUE]
#define XCHG_ESP_FROM_PTR_EDI_(VALUE) xchg esp, dword ptr [edi + VALUE]
#define XCHG_ESP_FROM_PTR_ESI_(VALUE) xchg esp, dword ptr [esi + VALUE]
#define XCHG_ESP_FROM_PTR_EBP_(VALUE) xchg esp, dword ptr [ebp + VALUE]
#define XCHG_ESP_FROM_PTR_ESP_(VALUE) xchg esp, dword ptr [esp + VALUE]
#define XCHG_ESP_FROM_PTR_BX_(VALUE) xchg esp, dword ptr [bx + VALUE]
#define XCHG_ESP_FROM_PTR_BP_(VALUE) xchg esp, dword ptr [bp + VALUE]
#define XCHG_ESP_FROM_PTR_SI_(VALUE) xchg esp, dword ptr [si + VALUE]
#define XCHG_ESP_FROM_PTR_DI_(VALUE) xchg esp, dword ptr [di + VALUE]

#define XCHG_EAX_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], eax
#define XCHG_EAX_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], eax
#define XCHG_EAX_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], eax
#define XCHG_EAX_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], eax
#define XCHG_EAX_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], eax
#define XCHG_EAX_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], eax
#define XCHG_EAX_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], eax
#define XCHG_EAX_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], eax
#define XCHG_EAX_TO_PTR_BX_(VALUE) xchg dword ptr [bx + VALUE], eax
#define XCHG_EAX_TO_PTR_BP_(VALUE) xchg dword ptr [bp + VALUE], eax
#define XCHG_EAX_TO_PTR_SI_(VALUE) xchg dword ptr [si + VALUE], eax
#define XCHG_EAX_TO_PTR_DI_(VALUE) xchg dword ptr [di + VALUE], eax

#define XCHG_EBX_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], ebx
#define XCHG_EBX_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], ebx
#define XCHG_EBX_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], ebx
#define XCHG_EBX_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], ebx
#define XCHG_EBX_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], ebx
#define XCHG_EBX_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], ebx
#define XCHG_EBX_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], ebx
#define XCHG_EBX_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], ebx
#define XCHG_EBX_TO_PTR_BX_(VALUE) xchg dword ptr [bx + VALUE], ebx
#define XCHG_EBX_TO_PTR_BP_(VALUE) xchg dword ptr [bp + VALUE], ebx
#define XCHG_EBX_TO_PTR_SI_(VALUE) xchg dword ptr [si + VALUE], ebx
#define XCHG_EBX_TO_PTR_DI_(VALUE) xchg dword ptr [di + VALUE], ebx

#define XCHG_ECX_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], ecx
#define XCHG_ECX_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], ecx
#define XCHG_ECX_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], ecx
#define XCHG_ECX_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], ecx
#define XCHG_ECX_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], ecx
#define XCHG_ECX_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], ecx
#define XCHG_ECX_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], ecx
#define XCHG_ECX_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], ecx
#define XCHG_ECX_TO_PTR_BX_(VALUE) xchg dword ptr [bx + VALUE], ecx
#define XCHG_ECX_TO_PTR_BP_(VALUE) xchg dword ptr [bp + VALUE], ecx
#define XCHG_ECX_TO_PTR_SI_(VALUE) xchg dword ptr [si + VALUE], ecx
#define XCHG_ECX_TO_PTR_DI_(VALUE) xchg dword ptr [di + VALUE], ecx

#define XCHG_EDX_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], edx
#define XCHG_EDX_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], edx
#define XCHG_EDX_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], edx
#define XCHG_EDX_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], edx
#define XCHG_EDX_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], edx
#define XCHG_EDX_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], edx
#define XCHG_EDX_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], edx
#define XCHG_EDX_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], edx
#define XCHG_EDX_TO_PTR_BX_(VALUE) xchg dword ptr [bx + VALUE], edx
#define XCHG_EDX_TO_PTR_BP_(VALUE) xchg dword ptr [bp + VALUE], edx
#define XCHG_EDX_TO_PTR_SI_(VALUE) xchg dword ptr [si + VALUE], edx
#define XCHG_EDX_TO_PTR_DI_(VALUE) xchg dword ptr [di + VALUE], edx

#define XCHG_EDI_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], edi
#define XCHG_EDI_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], edi
#define XCHG_EDI_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], edi
#define XCHG_EDI_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], edi
#define XCHG_EDI_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], edi
#define XCHG_EDI_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], edi
#define XCHG_EDI_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], edi
#define XCHG_EDI_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], edi
#define XCHG_EDI_TO_PTR_BX_(VALUE) xchg dword ptr [bx + VALUE], edi
#define XCHG_EDI_TO_PTR_BP_(VALUE) xchg dword ptr [bp + VALUE], edi
#define XCHG_EDI_TO_PTR_SI_(VALUE) xchg dword ptr [si + VALUE], edi
#define XCHG_EDI_TO_PTR_DI_(VALUE) xchg dword ptr [di + VALUE], edi

#define XCHG_ESI_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], esi
#define XCHG_ESI_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], esi
#define XCHG_ESI_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], esi
#define XCHG_ESI_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], esi
#define XCHG_ESI_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], esi
#define XCHG_ESI_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], esi
#define XCHG_ESI_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], esi
#define XCHG_ESI_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], esi
#define XCHG_ESI_TO_PTR_BX_(VALUE) xchg dword ptr [bx + VALUE], esi
#define XCHG_ESI_TO_PTR_BP_(VALUE) xchg dword ptr [bp + VALUE], esi
#define XCHG_ESI_TO_PTR_SI_(VALUE) xchg dword ptr [si + VALUE], esi
#define XCHG_ESI_TO_PTR_DI_(VALUE) xchg dword ptr [di + VALUE], esi

#define XCHG_EBP_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], ebp
#define XCHG_EBP_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], ebp
#define XCHG_EBP_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], ebp
#define XCHG_EBP_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], ebp
#define XCHG_EBP_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], ebp
#define XCHG_EBP_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], ebp
#define XCHG_EBP_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], ebp
#define XCHG_EBP_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], ebp
#define XCHG_EBP_TO_PTR_BX_(VALUE) xchg dword ptr [bx + VALUE], ebp
#define XCHG_EBP_TO_PTR_BP_(VALUE) xchg dword ptr [bp + VALUE], ebp
#define XCHG_EBP_TO_PTR_SI_(VALUE) xchg dword ptr [si + VALUE], ebp
#define XCHG_EBP_TO_PTR_DI_(VALUE) xchg dword ptr [di + VALUE], ebp

#define XCHG_ESP_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], esp
#define XCHG_ESP_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], esp
#define XCHG_ESP_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], esp
#define XCHG_ESP_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], esp
#define XCHG_ESP_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], esp
#define XCHG_ESP_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], esp
#define XCHG_ESP_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], esp
#define XCHG_ESP_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], esp
#define XCHG_ESP_TO_PTR_BX_(VALUE) xchg dword ptr [bx + VALUE], esp
#define XCHG_ESP_TO_PTR_BP_(VALUE) xchg dword ptr [bp + VALUE], esp
#define XCHG_ESP_TO_PTR_SI_(VALUE) xchg dword ptr [si + VALUE], esp
#define XCHG_ESP_TO_PTR_DI_(VALUE) xchg dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_EAX_FROM_PTR_(VALUE) xchg eax, dword ptr [VALUE]
#define XCHG_EBX_FROM_PTR_(VALUE) xchg ebx, dword ptr [VALUE]
#define XCHG_ECX_FROM_PTR_(VALUE) xchg ecx, dword ptr [VALUE]
#define XCHG_EDX_FROM_PTR_(VALUE) xchg edx, dword ptr [VALUE]
#define XCHG_EDI_FROM_PTR_(VALUE) xchg edi, dword ptr [VALUE]
#define XCHG_ESI_FROM_PTR_(VALUE) xchg esi, dword ptr [VALUE]
#define XCHG_EBP_FROM_PTR_(VALUE) xchg ebp, dword ptr [VALUE]
#define XCHG_ESP_FROM_PTR_(VALUE) xchg esp, dword ptr [VALUE]
#define XCHG_R8D_FROM_PTR_(VALUE) xchg r8d, dword ptr [VALUE]
#define XCHG_R9D_FROM_PTR_(VALUE) xchg r9d, dword ptr [VALUE]
#define XCHG_R10D_FROM_PTR_(VALUE) xchg r10d, dword ptr [VALUE]
#define XCHG_R11D_FROM_PTR_(VALUE) xchg r11d, dword ptr [VALUE]
#define XCHG_R12D_FROM_PTR_(VALUE) xchg r12d, dword ptr [VALUE]
#define XCHG_R13D_FROM_PTR_(VALUE) xchg r13d, dword ptr [VALUE]
#define XCHG_R14D_FROM_PTR_(VALUE) xchg r14d, dword ptr [VALUE]
#define XCHG_R15D_FROM_PTR_(VALUE) xchg r15d, dword ptr [VALUE]

#define XCHG_EAX_TO_PTR_(VALUE) xchg dword ptr [VALUE], eax
#define XCHG_EBX_TO_PTR_(VALUE) xchg dword ptr [VALUE], ebx
#define XCHG_ECX_TO_PTR_(VALUE) xchg dword ptr [VALUE], ecx
#define XCHG_EDX_TO_PTR_(VALUE) xchg dword ptr [VALUE], edx
#define XCHG_EDI_TO_PTR_(VALUE) xchg dword ptr [VALUE], edi
#define XCHG_ESI_TO_PTR_(VALUE) xchg dword ptr [VALUE], esi
#define XCHG_EBP_TO_PTR_(VALUE) xchg dword ptr [VALUE], ebp
#define XCHG_ESP_TO_PTR_(VALUE) xchg dword ptr [VALUE], esp
#define XCHG_R8D_TO_PTR_(VALUE) xchg dword ptr [VALUE], r8d
#define XCHG_R9D_TO_PTR_(VALUE) xchg dword ptr [VALUE], r9d
#define XCHG_R10D_TO_PTR_(VALUE) xchg dword ptr [VALUE], r10d
#define XCHG_R11D_TO_PTR_(VALUE) xchg dword ptr [VALUE], r11d
#define XCHG_R12D_TO_PTR_(VALUE) xchg dword ptr [VALUE], r12d
#define XCHG_R13D_TO_PTR_(VALUE) xchg dword ptr [VALUE], r13d
#define XCHG_R14D_TO_PTR_(VALUE) xchg dword ptr [VALUE], r14d
#define XCHG_R15D_TO_PTR_(VALUE) xchg dword ptr [VALUE], r15d

#define XCHG_EAX_FROM_PTR_RAX xchg eax, dword ptr [rax]
#define XCHG_EAX_FROM_PTR_RBX xchg eax, dword ptr [rbx]
#define XCHG_EAX_FROM_PTR_RCX xchg eax, dword ptr [rcx]
#define XCHG_EAX_FROM_PTR_RDX xchg eax, dword ptr [rdx]
#define XCHG_EAX_FROM_PTR_RDI xchg eax, dword ptr [rdi]
#define XCHG_EAX_FROM_PTR_RSI xchg eax, dword ptr [rsi]
#define XCHG_EAX_FROM_PTR_RBP xchg eax, dword ptr [rbp]
#define XCHG_EAX_FROM_PTR_RSP xchg eax, dword ptr [rsp]
#define XCHG_EAX_FROM_PTR_R8 xchg eax, dword ptr [r8]
#define XCHG_EAX_FROM_PTR_R9 xchg eax, dword ptr [r9]
#define XCHG_EAX_FROM_PTR_R10 xchg eax, dword ptr [r10]
#define XCHG_EAX_FROM_PTR_R11 xchg eax, dword ptr [r11]
#define XCHG_EAX_FROM_PTR_R12 xchg eax, dword ptr [r12]
#define XCHG_EAX_FROM_PTR_R13 xchg eax, dword ptr [r13]
#define XCHG_EAX_FROM_PTR_R14 xchg eax, dword ptr [r14]
#define XCHG_EAX_FROM_PTR_R15 xchg eax, dword ptr [r15]
#define XCHG_EAX_FROM_PTR_EAX xchg eax, dword ptr [eax]
#define XCHG_EAX_FROM_PTR_EBX xchg eax, dword ptr [ebx]
#define XCHG_EAX_FROM_PTR_ECX xchg eax, dword ptr [ecx]
#define XCHG_EAX_FROM_PTR_EDX xchg eax, dword ptr [edx]
#define XCHG_EAX_FROM_PTR_EDI xchg eax, dword ptr [edi]
#define XCHG_EAX_FROM_PTR_ESI xchg eax, dword ptr [esi]
#define XCHG_EAX_FROM_PTR_EBP xchg eax, dword ptr [ebp]
#define XCHG_EAX_FROM_PTR_ESP xchg eax, dword ptr [esp]

#define XCHG_EBX_FROM_PTR_RAX xchg ebx, dword ptr [rax]
#define XCHG_EBX_FROM_PTR_RBX xchg ebx, dword ptr [rbx]
#define XCHG_EBX_FROM_PTR_RCX xchg ebx, dword ptr [rcx]
#define XCHG_EBX_FROM_PTR_RDX xchg ebx, dword ptr [rdx]
#define XCHG_EBX_FROM_PTR_RDI xchg ebx, dword ptr [rdi]
#define XCHG_EBX_FROM_PTR_RSI xchg ebx, dword ptr [rsi]
#define XCHG_EBX_FROM_PTR_RBP xchg ebx, dword ptr [rbp]
#define XCHG_EBX_FROM_PTR_RSP xchg ebx, dword ptr [rsp]
#define XCHG_EBX_FROM_PTR_R8 xchg ebx, dword ptr [r8]
#define XCHG_EBX_FROM_PTR_R9 xchg ebx, dword ptr [r9]
#define XCHG_EBX_FROM_PTR_R10 xchg ebx, dword ptr [r10]
#define XCHG_EBX_FROM_PTR_R11 xchg ebx, dword ptr [r11]
#define XCHG_EBX_FROM_PTR_R12 xchg ebx, dword ptr [r12]
#define XCHG_EBX_FROM_PTR_R13 xchg ebx, dword ptr [r13]
#define XCHG_EBX_FROM_PTR_R14 xchg ebx, dword ptr [r14]
#define XCHG_EBX_FROM_PTR_R15 xchg ebx, dword ptr [r15]
#define XCHG_EBX_FROM_PTR_EAX xchg ebx, dword ptr [eax]
#define XCHG_EBX_FROM_PTR_EBX xchg ebx, dword ptr [ebx]
#define XCHG_EBX_FROM_PTR_ECX xchg ebx, dword ptr [ecx]
#define XCHG_EBX_FROM_PTR_EDX xchg ebx, dword ptr [edx]
#define XCHG_EBX_FROM_PTR_EDI xchg ebx, dword ptr [edi]
#define XCHG_EBX_FROM_PTR_ESI xchg ebx, dword ptr [esi]
#define XCHG_EBX_FROM_PTR_EBP xchg ebx, dword ptr [ebp]
#define XCHG_EBX_FROM_PTR_ESP xchg ebx, dword ptr [esp]

#define XCHG_ECX_FROM_PTR_RAX xchg ecx, dword ptr [rax]
#define XCHG_ECX_FROM_PTR_RBX xchg ecx, dword ptr [rbx]
#define XCHG_ECX_FROM_PTR_RCX xchg ecx, dword ptr [rcx]
#define XCHG_ECX_FROM_PTR_RDX xchg ecx, dword ptr [rdx]
#define XCHG_ECX_FROM_PTR_RDI xchg ecx, dword ptr [rdi]
#define XCHG_ECX_FROM_PTR_RSI xchg ecx, dword ptr [rsi]
#define XCHG_ECX_FROM_PTR_RBP xchg ecx, dword ptr [rbp]
#define XCHG_ECX_FROM_PTR_RSP xchg ecx, dword ptr [rsp]
#define XCHG_ECX_FROM_PTR_R8 xchg ecx, dword ptr [r8]
#define XCHG_ECX_FROM_PTR_R9 xchg ecx, dword ptr [r9]
#define XCHG_ECX_FROM_PTR_R10 xchg ecx, dword ptr [r10]
#define XCHG_ECX_FROM_PTR_R11 xchg ecx, dword ptr [r11]
#define XCHG_ECX_FROM_PTR_R12 xchg ecx, dword ptr [r12]
#define XCHG_ECX_FROM_PTR_R13 xchg ecx, dword ptr [r13]
#define XCHG_ECX_FROM_PTR_R14 xchg ecx, dword ptr [r14]
#define XCHG_ECX_FROM_PTR_R15 xchg ecx, dword ptr [r15]
#define XCHG_ECX_FROM_PTR_EAX xchg ecx, dword ptr [eax]
#define XCHG_ECX_FROM_PTR_EBX xchg ecx, dword ptr [ebx]
#define XCHG_ECX_FROM_PTR_ECX xchg ecx, dword ptr [ecx]
#define XCHG_ECX_FROM_PTR_EDX xchg ecx, dword ptr [edx]
#define XCHG_ECX_FROM_PTR_EDI xchg ecx, dword ptr [edi]
#define XCHG_ECX_FROM_PTR_ESI xchg ecx, dword ptr [esi]
#define XCHG_ECX_FROM_PTR_EBP xchg ecx, dword ptr [ebp]
#define XCHG_ECX_FROM_PTR_ESP xchg ecx, dword ptr [esp]

#define XCHG_EDX_FROM_PTR_RAX xchg edx, dword ptr [rax]
#define XCHG_EDX_FROM_PTR_RBX xchg edx, dword ptr [rbx]
#define XCHG_EDX_FROM_PTR_RCX xchg edx, dword ptr [rcx]
#define XCHG_EDX_FROM_PTR_RDX xchg edx, dword ptr [rdx]
#define XCHG_EDX_FROM_PTR_RDI xchg edx, dword ptr [rdi]
#define XCHG_EDX_FROM_PTR_RSI xchg edx, dword ptr [rsi]
#define XCHG_EDX_FROM_PTR_RBP xchg edx, dword ptr [rbp]
#define XCHG_EDX_FROM_PTR_RSP xchg edx, dword ptr [rsp]
#define XCHG_EDX_FROM_PTR_R8 xchg edx, dword ptr [r8]
#define XCHG_EDX_FROM_PTR_R9 xchg edx, dword ptr [r9]
#define XCHG_EDX_FROM_PTR_R10 xchg edx, dword ptr [r10]
#define XCHG_EDX_FROM_PTR_R11 xchg edx, dword ptr [r11]
#define XCHG_EDX_FROM_PTR_R12 xchg edx, dword ptr [r12]
#define XCHG_EDX_FROM_PTR_R13 xchg edx, dword ptr [r13]
#define XCHG_EDX_FROM_PTR_R14 xchg edx, dword ptr [r14]
#define XCHG_EDX_FROM_PTR_R15 xchg edx, dword ptr [r15]
#define XCHG_EDX_FROM_PTR_EAX xchg edx, dword ptr [eax]
#define XCHG_EDX_FROM_PTR_EBX xchg edx, dword ptr [ebx]
#define XCHG_EDX_FROM_PTR_ECX xchg edx, dword ptr [ecx]
#define XCHG_EDX_FROM_PTR_EDX xchg edx, dword ptr [edx]
#define XCHG_EDX_FROM_PTR_EDI xchg edx, dword ptr [edi]
#define XCHG_EDX_FROM_PTR_ESI xchg edx, dword ptr [esi]
#define XCHG_EDX_FROM_PTR_EBP xchg edx, dword ptr [ebp]
#define XCHG_EDX_FROM_PTR_ESP xchg edx, dword ptr [esp]

#define XCHG_EDI_FROM_PTR_RAX xchg edi, dword ptr [rax]
#define XCHG_EDI_FROM_PTR_RBX xchg edi, dword ptr [rbx]
#define XCHG_EDI_FROM_PTR_RCX xchg edi, dword ptr [rcx]
#define XCHG_EDI_FROM_PTR_RDX xchg edi, dword ptr [rdx]
#define XCHG_EDI_FROM_PTR_RDI xchg edi, dword ptr [rdi]
#define XCHG_EDI_FROM_PTR_RSI xchg edi, dword ptr [rsi]
#define XCHG_EDI_FROM_PTR_RBP xchg edi, dword ptr [rbp]
#define XCHG_EDI_FROM_PTR_RSP xchg edi, dword ptr [rsp]
#define XCHG_EDI_FROM_PTR_R8 xchg edi, dword ptr [r8]
#define XCHG_EDI_FROM_PTR_R9 xchg edi, dword ptr [r9]
#define XCHG_EDI_FROM_PTR_R10 xchg edi, dword ptr [r10]
#define XCHG_EDI_FROM_PTR_R11 xchg edi, dword ptr [r11]
#define XCHG_EDI_FROM_PTR_R12 xchg edi, dword ptr [r12]
#define XCHG_EDI_FROM_PTR_R13 xchg edi, dword ptr [r13]
#define XCHG_EDI_FROM_PTR_R14 xchg edi, dword ptr [r14]
#define XCHG_EDI_FROM_PTR_R15 xchg edi, dword ptr [r15]
#define XCHG_EDI_FROM_PTR_EAX xchg edi, dword ptr [eax]
#define XCHG_EDI_FROM_PTR_EBX xchg edi, dword ptr [ebx]
#define XCHG_EDI_FROM_PTR_ECX xchg edi, dword ptr [ecx]
#define XCHG_EDI_FROM_PTR_EDX xchg edi, dword ptr [edx]
#define XCHG_EDI_FROM_PTR_EDI xchg edi, dword ptr [edi]
#define XCHG_EDI_FROM_PTR_ESI xchg edi, dword ptr [esi]
#define XCHG_EDI_FROM_PTR_EBP xchg edi, dword ptr [ebp]
#define XCHG_EDI_FROM_PTR_ESP xchg edi, dword ptr [esp]

#define XCHG_ESI_FROM_PTR_RAX xchg esi, dword ptr [rax]
#define XCHG_ESI_FROM_PTR_RBX xchg esi, dword ptr [rbx]
#define XCHG_ESI_FROM_PTR_RCX xchg esi, dword ptr [rcx]
#define XCHG_ESI_FROM_PTR_RDX xchg esi, dword ptr [rdx]
#define XCHG_ESI_FROM_PTR_RDI xchg esi, dword ptr [rdi]
#define XCHG_ESI_FROM_PTR_RSI xchg esi, dword ptr [rsi]
#define XCHG_ESI_FROM_PTR_RBP xchg esi, dword ptr [rbp]
#define XCHG_ESI_FROM_PTR_RSP xchg esi, dword ptr [rsp]
#define XCHG_ESI_FROM_PTR_R8 xchg esi, dword ptr [r8]
#define XCHG_ESI_FROM_PTR_R9 xchg esi, dword ptr [r9]
#define XCHG_ESI_FROM_PTR_R10 xchg esi, dword ptr [r10]
#define XCHG_ESI_FROM_PTR_R11 xchg esi, dword ptr [r11]
#define XCHG_ESI_FROM_PTR_R12 xchg esi, dword ptr [r12]
#define XCHG_ESI_FROM_PTR_R13 xchg esi, dword ptr [r13]
#define XCHG_ESI_FROM_PTR_R14 xchg esi, dword ptr [r14]
#define XCHG_ESI_FROM_PTR_R15 xchg esi, dword ptr [r15]
#define XCHG_ESI_FROM_PTR_EAX xchg esi, dword ptr [eax]
#define XCHG_ESI_FROM_PTR_EBX xchg esi, dword ptr [ebx]
#define XCHG_ESI_FROM_PTR_ECX xchg esi, dword ptr [ecx]
#define XCHG_ESI_FROM_PTR_EDX xchg esi, dword ptr [edx]
#define XCHG_ESI_FROM_PTR_EDI xchg esi, dword ptr [edi]
#define XCHG_ESI_FROM_PTR_ESI xchg esi, dword ptr [esi]
#define XCHG_ESI_FROM_PTR_EBP xchg esi, dword ptr [ebp]
#define XCHG_ESI_FROM_PTR_ESP xchg esi, dword ptr [esp]

#define XCHG_EBP_FROM_PTR_RAX xchg ebp, dword ptr [rax]
#define XCHG_EBP_FROM_PTR_RBX xchg ebp, dword ptr [rbx]
#define XCHG_EBP_FROM_PTR_RCX xchg ebp, dword ptr [rcx]
#define XCHG_EBP_FROM_PTR_RDX xchg ebp, dword ptr [rdx]
#define XCHG_EBP_FROM_PTR_RDI xchg ebp, dword ptr [rdi]
#define XCHG_EBP_FROM_PTR_RSI xchg ebp, dword ptr [rsi]
#define XCHG_EBP_FROM_PTR_RBP xchg ebp, dword ptr [rbp]
#define XCHG_EBP_FROM_PTR_RSP xchg ebp, dword ptr [rsp]
#define XCHG_EBP_FROM_PTR_R8 xchg ebp, dword ptr [r8]
#define XCHG_EBP_FROM_PTR_R9 xchg ebp, dword ptr [r9]
#define XCHG_EBP_FROM_PTR_R10 xchg ebp, dword ptr [r10]
#define XCHG_EBP_FROM_PTR_R11 xchg ebp, dword ptr [r11]
#define XCHG_EBP_FROM_PTR_R12 xchg ebp, dword ptr [r12]
#define XCHG_EBP_FROM_PTR_R13 xchg ebp, dword ptr [r13]
#define XCHG_EBP_FROM_PTR_R14 xchg ebp, dword ptr [r14]
#define XCHG_EBP_FROM_PTR_R15 xchg ebp, dword ptr [r15]
#define XCHG_EBP_FROM_PTR_EAX xchg ebp, dword ptr [eax]
#define XCHG_EBP_FROM_PTR_EBX xchg ebp, dword ptr [ebx]
#define XCHG_EBP_FROM_PTR_ECX xchg ebp, dword ptr [ecx]
#define XCHG_EBP_FROM_PTR_EDX xchg ebp, dword ptr [edx]
#define XCHG_EBP_FROM_PTR_EDI xchg ebp, dword ptr [edi]
#define XCHG_EBP_FROM_PTR_ESI xchg ebp, dword ptr [esi]
#define XCHG_EBP_FROM_PTR_EBP xchg ebp, dword ptr [ebp]
#define XCHG_EBP_FROM_PTR_ESP xchg ebp, dword ptr [esp]

#define XCHG_ESP_FROM_PTR_RAX xchg esp, dword ptr [rax]
#define XCHG_ESP_FROM_PTR_RBX xchg esp, dword ptr [rbx]
#define XCHG_ESP_FROM_PTR_RCX xchg esp, dword ptr [rcx]
#define XCHG_ESP_FROM_PTR_RDX xchg esp, dword ptr [rdx]
#define XCHG_ESP_FROM_PTR_RDI xchg esp, dword ptr [rdi]
#define XCHG_ESP_FROM_PTR_RSI xchg esp, dword ptr [rsi]
#define XCHG_ESP_FROM_PTR_RBP xchg esp, dword ptr [rbp]
#define XCHG_ESP_FROM_PTR_RSP xchg esp, dword ptr [rsp]
#define XCHG_ESP_FROM_PTR_R8 xchg esp, dword ptr [r8]
#define XCHG_ESP_FROM_PTR_R9 xchg esp, dword ptr [r9]
#define XCHG_ESP_FROM_PTR_R10 xchg esp, dword ptr [r10]
#define XCHG_ESP_FROM_PTR_R11 xchg esp, dword ptr [r11]
#define XCHG_ESP_FROM_PTR_R12 xchg esp, dword ptr [r12]
#define XCHG_ESP_FROM_PTR_R13 xchg esp, dword ptr [r13]
#define XCHG_ESP_FROM_PTR_R14 xchg esp, dword ptr [r14]
#define XCHG_ESP_FROM_PTR_R15 xchg esp, dword ptr [r15]
#define XCHG_ESP_FROM_PTR_EAX xchg esp, dword ptr [eax]
#define XCHG_ESP_FROM_PTR_EBX xchg esp, dword ptr [ebx]
#define XCHG_ESP_FROM_PTR_ECX xchg esp, dword ptr [ecx]
#define XCHG_ESP_FROM_PTR_EDX xchg esp, dword ptr [edx]
#define XCHG_ESP_FROM_PTR_EDI xchg esp, dword ptr [edi]
#define XCHG_ESP_FROM_PTR_ESI xchg esp, dword ptr [esi]
#define XCHG_ESP_FROM_PTR_EBP xchg esp, dword ptr [ebp]
#define XCHG_ESP_FROM_PTR_ESP xchg esp, dword ptr [esp]

#define XCHG_R8D_FROM_PTR_RAX xchg r8d, dword ptr [rax]
#define XCHG_R8D_FROM_PTR_RBX xchg r8d, dword ptr [rbx]
#define XCHG_R8D_FROM_PTR_RCX xchg r8d, dword ptr [rcx]
#define XCHG_R8D_FROM_PTR_RDX xchg r8d, dword ptr [rdx]
#define XCHG_R8D_FROM_PTR_RDI xchg r8d, dword ptr [rdi]
#define XCHG_R8D_FROM_PTR_RSI xchg r8d, dword ptr [rsi]
#define XCHG_R8D_FROM_PTR_RBP xchg r8d, dword ptr [rbp]
#define XCHG_R8D_FROM_PTR_RSP xchg r8d, dword ptr [rsp]
#define XCHG_R8D_FROM_PTR_R8 xchg r8d, dword ptr [r8]
#define XCHG_R8D_FROM_PTR_R9 xchg r8d, dword ptr [r9]
#define XCHG_R8D_FROM_PTR_R10 xchg r8d, dword ptr [r10]
#define XCHG_R8D_FROM_PTR_R11 xchg r8d, dword ptr [r11]
#define XCHG_R8D_FROM_PTR_R12 xchg r8d, dword ptr [r12]
#define XCHG_R8D_FROM_PTR_R13 xchg r8d, dword ptr [r13]
#define XCHG_R8D_FROM_PTR_R14 xchg r8d, dword ptr [r14]
#define XCHG_R8D_FROM_PTR_R15 xchg r8d, dword ptr [r15]
#define XCHG_R8D_FROM_PTR_EAX xchg r8d, dword ptr [eax]
#define XCHG_R8D_FROM_PTR_EBX xchg r8d, dword ptr [ebx]
#define XCHG_R8D_FROM_PTR_ECX xchg r8d, dword ptr [ecx]
#define XCHG_R8D_FROM_PTR_EDX xchg r8d, dword ptr [edx]
#define XCHG_R8D_FROM_PTR_EDI xchg r8d, dword ptr [edi]
#define XCHG_R8D_FROM_PTR_ESI xchg r8d, dword ptr [esi]
#define XCHG_R8D_FROM_PTR_EBP xchg r8d, dword ptr [ebp]
#define XCHG_R8D_FROM_PTR_ESP xchg r8d, dword ptr [esp]

#define XCHG_R9D_FROM_PTR_RAX xchg r9d, dword ptr [rax]
#define XCHG_R9D_FROM_PTR_RBX xchg r9d, dword ptr [rbx]
#define XCHG_R9D_FROM_PTR_RCX xchg r9d, dword ptr [rcx]
#define XCHG_R9D_FROM_PTR_RDX xchg r9d, dword ptr [rdx]
#define XCHG_R9D_FROM_PTR_RDI xchg r9d, dword ptr [rdi]
#define XCHG_R9D_FROM_PTR_RSI xchg r9d, dword ptr [rsi]
#define XCHG_R9D_FROM_PTR_RBP xchg r9d, dword ptr [rbp]
#define XCHG_R9D_FROM_PTR_RSP xchg r9d, dword ptr [rsp]
#define XCHG_R9D_FROM_PTR_R8 xchg r9d, dword ptr [r8]
#define XCHG_R9D_FROM_PTR_R9 xchg r9d, dword ptr [r9]
#define XCHG_R9D_FROM_PTR_R10 xchg r9d, dword ptr [r10]
#define XCHG_R9D_FROM_PTR_R11 xchg r9d, dword ptr [r11]
#define XCHG_R9D_FROM_PTR_R12 xchg r9d, dword ptr [r12]
#define XCHG_R9D_FROM_PTR_R13 xchg r9d, dword ptr [r13]
#define XCHG_R9D_FROM_PTR_R14 xchg r9d, dword ptr [r14]
#define XCHG_R9D_FROM_PTR_R15 xchg r9d, dword ptr [r15]
#define XCHG_R9D_FROM_PTR_EAX xchg r9d, dword ptr [eax]
#define XCHG_R9D_FROM_PTR_EBX xchg r9d, dword ptr [ebx]
#define XCHG_R9D_FROM_PTR_ECX xchg r9d, dword ptr [ecx]
#define XCHG_R9D_FROM_PTR_EDX xchg r9d, dword ptr [edx]
#define XCHG_R9D_FROM_PTR_EDI xchg r9d, dword ptr [edi]
#define XCHG_R9D_FROM_PTR_ESI xchg r9d, dword ptr [esi]
#define XCHG_R9D_FROM_PTR_EBP xchg r9d, dword ptr [ebp]
#define XCHG_R9D_FROM_PTR_ESP xchg r9d, dword ptr [esp]

#define XCHG_R10D_FROM_PTR_RAX xchg r10d, dword ptr [rax]
#define XCHG_R10D_FROM_PTR_RBX xchg r10d, dword ptr [rbx]
#define XCHG_R10D_FROM_PTR_RCX xchg r10d, dword ptr [rcx]
#define XCHG_R10D_FROM_PTR_RDX xchg r10d, dword ptr [rdx]
#define XCHG_R10D_FROM_PTR_RDI xchg r10d, dword ptr [rdi]
#define XCHG_R10D_FROM_PTR_RSI xchg r10d, dword ptr [rsi]
#define XCHG_R10D_FROM_PTR_RBP xchg r10d, dword ptr [rbp]
#define XCHG_R10D_FROM_PTR_RSP xchg r10d, dword ptr [rsp]
#define XCHG_R10D_FROM_PTR_R8 xchg r10d, dword ptr [r8]
#define XCHG_R10D_FROM_PTR_R9 xchg r10d, dword ptr [r9]
#define XCHG_R10D_FROM_PTR_R10 xchg r10d, dword ptr [r10]
#define XCHG_R10D_FROM_PTR_R11 xchg r10d, dword ptr [r11]
#define XCHG_R10D_FROM_PTR_R12 xchg r10d, dword ptr [r12]
#define XCHG_R10D_FROM_PTR_R13 xchg r10d, dword ptr [r13]
#define XCHG_R10D_FROM_PTR_R14 xchg r10d, dword ptr [r14]
#define XCHG_R10D_FROM_PTR_R15 xchg r10d, dword ptr [r15]
#define XCHG_R10D_FROM_PTR_EAX xchg r10d, dword ptr [eax]
#define XCHG_R10D_FROM_PTR_EBX xchg r10d, dword ptr [ebx]
#define XCHG_R10D_FROM_PTR_ECX xchg r10d, dword ptr [ecx]
#define XCHG_R10D_FROM_PTR_EDX xchg r10d, dword ptr [edx]
#define XCHG_R10D_FROM_PTR_EDI xchg r10d, dword ptr [edi]
#define XCHG_R10D_FROM_PTR_ESI xchg r10d, dword ptr [esi]
#define XCHG_R10D_FROM_PTR_EBP xchg r10d, dword ptr [ebp]
#define XCHG_R10D_FROM_PTR_ESP xchg r10d, dword ptr [esp]

#define XCHG_R11D_FROM_PTR_RAX xchg r11d, dword ptr [rax]
#define XCHG_R11D_FROM_PTR_RBX xchg r11d, dword ptr [rbx]
#define XCHG_R11D_FROM_PTR_RCX xchg r11d, dword ptr [rcx]
#define XCHG_R11D_FROM_PTR_RDX xchg r11d, dword ptr [rdx]
#define XCHG_R11D_FROM_PTR_RDI xchg r11d, dword ptr [rdi]
#define XCHG_R11D_FROM_PTR_RSI xchg r11d, dword ptr [rsi]
#define XCHG_R11D_FROM_PTR_RBP xchg r11d, dword ptr [rbp]
#define XCHG_R11D_FROM_PTR_RSP xchg r11d, dword ptr [rsp]
#define XCHG_R11D_FROM_PTR_R8 xchg r11d, dword ptr [r8]
#define XCHG_R11D_FROM_PTR_R9 xchg r11d, dword ptr [r9]
#define XCHG_R11D_FROM_PTR_R10 xchg r11d, dword ptr [r10]
#define XCHG_R11D_FROM_PTR_R11 xchg r11d, dword ptr [r11]
#define XCHG_R11D_FROM_PTR_R12 xchg r11d, dword ptr [r12]
#define XCHG_R11D_FROM_PTR_R13 xchg r11d, dword ptr [r13]
#define XCHG_R11D_FROM_PTR_R14 xchg r11d, dword ptr [r14]
#define XCHG_R11D_FROM_PTR_R15 xchg r11d, dword ptr [r15]
#define XCHG_R11D_FROM_PTR_EAX xchg r11d, dword ptr [eax]
#define XCHG_R11D_FROM_PTR_EBX xchg r11d, dword ptr [ebx]
#define XCHG_R11D_FROM_PTR_ECX xchg r11d, dword ptr [ecx]
#define XCHG_R11D_FROM_PTR_EDX xchg r11d, dword ptr [edx]
#define XCHG_R11D_FROM_PTR_EDI xchg r11d, dword ptr [edi]
#define XCHG_R11D_FROM_PTR_ESI xchg r11d, dword ptr [esi]
#define XCHG_R11D_FROM_PTR_EBP xchg r11d, dword ptr [ebp]
#define XCHG_R11D_FROM_PTR_ESP xchg r11d, dword ptr [esp]

#define XCHG_R12D_FROM_PTR_RAX xchg r12d, dword ptr [rax]
#define XCHG_R12D_FROM_PTR_RBX xchg r12d, dword ptr [rbx]
#define XCHG_R12D_FROM_PTR_RCX xchg r12d, dword ptr [rcx]
#define XCHG_R12D_FROM_PTR_RDX xchg r12d, dword ptr [rdx]
#define XCHG_R12D_FROM_PTR_RDI xchg r12d, dword ptr [rdi]
#define XCHG_R12D_FROM_PTR_RSI xchg r12d, dword ptr [rsi]
#define XCHG_R12D_FROM_PTR_RBP xchg r12d, dword ptr [rbp]
#define XCHG_R12D_FROM_PTR_RSP xchg r12d, dword ptr [rsp]
#define XCHG_R12D_FROM_PTR_R8 xchg r12d, dword ptr [r8]
#define XCHG_R12D_FROM_PTR_R9 xchg r12d, dword ptr [r9]
#define XCHG_R12D_FROM_PTR_R10 xchg r12d, dword ptr [r10]
#define XCHG_R12D_FROM_PTR_R11 xchg r12d, dword ptr [r11]
#define XCHG_R12D_FROM_PTR_R12 xchg r12d, dword ptr [r12]
#define XCHG_R12D_FROM_PTR_R13 xchg r12d, dword ptr [r13]
#define XCHG_R12D_FROM_PTR_R14 xchg r12d, dword ptr [r14]
#define XCHG_R12D_FROM_PTR_R15 xchg r12d, dword ptr [r15]
#define XCHG_R12D_FROM_PTR_EAX xchg r12d, dword ptr [eax]
#define XCHG_R12D_FROM_PTR_EBX xchg r12d, dword ptr [ebx]
#define XCHG_R12D_FROM_PTR_ECX xchg r12d, dword ptr [ecx]
#define XCHG_R12D_FROM_PTR_EDX xchg r12d, dword ptr [edx]
#define XCHG_R12D_FROM_PTR_EDI xchg r12d, dword ptr [edi]
#define XCHG_R12D_FROM_PTR_ESI xchg r12d, dword ptr [esi]
#define XCHG_R12D_FROM_PTR_EBP xchg r12d, dword ptr [ebp]
#define XCHG_R12D_FROM_PTR_ESP xchg r12d, dword ptr [esp]

#define XCHG_R13D_FROM_PTR_RAX xchg r13d, dword ptr [rax]
#define XCHG_R13D_FROM_PTR_RBX xchg r13d, dword ptr [rbx]
#define XCHG_R13D_FROM_PTR_RCX xchg r13d, dword ptr [rcx]
#define XCHG_R13D_FROM_PTR_RDX xchg r13d, dword ptr [rdx]
#define XCHG_R13D_FROM_PTR_RDI xchg r13d, dword ptr [rdi]
#define XCHG_R13D_FROM_PTR_RSI xchg r13d, dword ptr [rsi]
#define XCHG_R13D_FROM_PTR_RBP xchg r13d, dword ptr [rbp]
#define XCHG_R13D_FROM_PTR_RSP xchg r13d, dword ptr [rsp]
#define XCHG_R13D_FROM_PTR_R8 xchg r13d, dword ptr [r8]
#define XCHG_R13D_FROM_PTR_R9 xchg r13d, dword ptr [r9]
#define XCHG_R13D_FROM_PTR_R10 xchg r13d, dword ptr [r10]
#define XCHG_R13D_FROM_PTR_R11 xchg r13d, dword ptr [r11]
#define XCHG_R13D_FROM_PTR_R12 xchg r13d, dword ptr [r12]
#define XCHG_R13D_FROM_PTR_R13 xchg r13d, dword ptr [r13]
#define XCHG_R13D_FROM_PTR_R14 xchg r13d, dword ptr [r14]
#define XCHG_R13D_FROM_PTR_R15 xchg r13d, dword ptr [r15]
#define XCHG_R13D_FROM_PTR_EAX xchg r13d, dword ptr [eax]
#define XCHG_R13D_FROM_PTR_EBX xchg r13d, dword ptr [ebx]
#define XCHG_R13D_FROM_PTR_ECX xchg r13d, dword ptr [ecx]
#define XCHG_R13D_FROM_PTR_EDX xchg r13d, dword ptr [edx]
#define XCHG_R13D_FROM_PTR_EDI xchg r13d, dword ptr [edi]
#define XCHG_R13D_FROM_PTR_ESI xchg r13d, dword ptr [esi]
#define XCHG_R13D_FROM_PTR_EBP xchg r13d, dword ptr [ebp]
#define XCHG_R13D_FROM_PTR_ESP xchg r13d, dword ptr [esp]

#define XCHG_R14D_FROM_PTR_RAX xchg r14d, dword ptr [rax]
#define XCHG_R14D_FROM_PTR_RBX xchg r14d, dword ptr [rbx]
#define XCHG_R14D_FROM_PTR_RCX xchg r14d, dword ptr [rcx]
#define XCHG_R14D_FROM_PTR_RDX xchg r14d, dword ptr [rdx]
#define XCHG_R14D_FROM_PTR_RDI xchg r14d, dword ptr [rdi]
#define XCHG_R14D_FROM_PTR_RSI xchg r14d, dword ptr [rsi]
#define XCHG_R14D_FROM_PTR_RBP xchg r14d, dword ptr [rbp]
#define XCHG_R14D_FROM_PTR_RSP xchg r14d, dword ptr [rsp]
#define XCHG_R14D_FROM_PTR_R8 xchg r14d, dword ptr [r8]
#define XCHG_R14D_FROM_PTR_R9 xchg r14d, dword ptr [r9]
#define XCHG_R14D_FROM_PTR_R10 xchg r14d, dword ptr [r10]
#define XCHG_R14D_FROM_PTR_R11 xchg r14d, dword ptr [r11]
#define XCHG_R14D_FROM_PTR_R12 xchg r14d, dword ptr [r12]
#define XCHG_R14D_FROM_PTR_R13 xchg r14d, dword ptr [r13]
#define XCHG_R14D_FROM_PTR_R14 xchg r14d, dword ptr [r14]
#define XCHG_R14D_FROM_PTR_R15 xchg r14d, dword ptr [r15]
#define XCHG_R14D_FROM_PTR_EAX xchg r14d, dword ptr [eax]
#define XCHG_R14D_FROM_PTR_EBX xchg r14d, dword ptr [ebx]
#define XCHG_R14D_FROM_PTR_ECX xchg r14d, dword ptr [ecx]
#define XCHG_R14D_FROM_PTR_EDX xchg r14d, dword ptr [edx]
#define XCHG_R14D_FROM_PTR_EDI xchg r14d, dword ptr [edi]
#define XCHG_R14D_FROM_PTR_ESI xchg r14d, dword ptr [esi]
#define XCHG_R14D_FROM_PTR_EBP xchg r14d, dword ptr [ebp]
#define XCHG_R14D_FROM_PTR_ESP xchg r14d, dword ptr [esp]

#define XCHG_R15D_FROM_PTR_RAX xchg r15d, dword ptr [rax]
#define XCHG_R15D_FROM_PTR_RBX xchg r15d, dword ptr [rbx]
#define XCHG_R15D_FROM_PTR_RCX xchg r15d, dword ptr [rcx]
#define XCHG_R15D_FROM_PTR_RDX xchg r15d, dword ptr [rdx]
#define XCHG_R15D_FROM_PTR_RDI xchg r15d, dword ptr [rdi]
#define XCHG_R15D_FROM_PTR_RSI xchg r15d, dword ptr [rsi]
#define XCHG_R15D_FROM_PTR_RBP xchg r15d, dword ptr [rbp]
#define XCHG_R15D_FROM_PTR_RSP xchg r15d, dword ptr [rsp]
#define XCHG_R15D_FROM_PTR_R8 xchg r15d, dword ptr [r8]
#define XCHG_R15D_FROM_PTR_R9 xchg r15d, dword ptr [r9]
#define XCHG_R15D_FROM_PTR_R10 xchg r15d, dword ptr [r10]
#define XCHG_R15D_FROM_PTR_R11 xchg r15d, dword ptr [r11]
#define XCHG_R15D_FROM_PTR_R12 xchg r15d, dword ptr [r12]
#define XCHG_R15D_FROM_PTR_R13 xchg r15d, dword ptr [r13]
#define XCHG_R15D_FROM_PTR_R14 xchg r15d, dword ptr [r14]
#define XCHG_R15D_FROM_PTR_R15 xchg r15d, dword ptr [r15]
#define XCHG_R15D_FROM_PTR_EAX xchg r15d, dword ptr [eax]
#define XCHG_R15D_FROM_PTR_EBX xchg r15d, dword ptr [ebx]
#define XCHG_R15D_FROM_PTR_ECX xchg r15d, dword ptr [ecx]
#define XCHG_R15D_FROM_PTR_EDX xchg r15d, dword ptr [edx]
#define XCHG_R15D_FROM_PTR_EDI xchg r15d, dword ptr [edi]
#define XCHG_R15D_FROM_PTR_ESI xchg r15d, dword ptr [esi]
#define XCHG_R15D_FROM_PTR_EBP xchg r15d, dword ptr [ebp]
#define XCHG_R15D_FROM_PTR_ESP xchg r15d, dword ptr [esp]

#define XCHG_EAX_TO_PTR_RAX xchg dword ptr [rax], eax
#define XCHG_EAX_TO_PTR_RBX xchg dword ptr [rbx], eax
#define XCHG_EAX_TO_PTR_RCX xchg dword ptr [rcx], eax
#define XCHG_EAX_TO_PTR_RDX xchg dword ptr [rdx], eax
#define XCHG_EAX_TO_PTR_RDI xchg dword ptr [rdi], eax
#define XCHG_EAX_TO_PTR_RSI xchg dword ptr [rsi], eax
#define XCHG_EAX_TO_PTR_RBP xchg dword ptr [rbp], eax
#define XCHG_EAX_TO_PTR_RSP xchg dword ptr [rsp], eax
#define XCHG_EAX_TO_PTR_R8 xchg dword ptr [r8], eax
#define XCHG_EAX_TO_PTR_R9 xchg dword ptr [r9], eax
#define XCHG_EAX_TO_PTR_R10 xchg dword ptr [r10], eax
#define XCHG_EAX_TO_PTR_R11 xchg dword ptr [r11], eax
#define XCHG_EAX_TO_PTR_R12 xchg dword ptr [r12], eax
#define XCHG_EAX_TO_PTR_R13 xchg dword ptr [r13], eax
#define XCHG_EAX_TO_PTR_R14 xchg dword ptr [r14], eax
#define XCHG_EAX_TO_PTR_R15 xchg dword ptr [r15], eax
#define XCHG_EAX_TO_PTR_EAX xchg dword ptr [eax], eax
#define XCHG_EAX_TO_PTR_EBX xchg dword ptr [ebx], eax
#define XCHG_EAX_TO_PTR_ECX xchg dword ptr [ecx], eax
#define XCHG_EAX_TO_PTR_EDX xchg dword ptr [edx], eax
#define XCHG_EAX_TO_PTR_EDI xchg dword ptr [edi], eax
#define XCHG_EAX_TO_PTR_ESI xchg dword ptr [esi], eax
#define XCHG_EAX_TO_PTR_EBP xchg dword ptr [ebp], eax
#define XCHG_EAX_TO_PTR_ESP xchg dword ptr [esp], eax

#define XCHG_EBX_TO_PTR_RAX xchg dword ptr [rax], ebx
#define XCHG_EBX_TO_PTR_RBX xchg dword ptr [rbx], ebx
#define XCHG_EBX_TO_PTR_RCX xchg dword ptr [rcx], ebx
#define XCHG_EBX_TO_PTR_RDX xchg dword ptr [rdx], ebx
#define XCHG_EBX_TO_PTR_RDI xchg dword ptr [rdi], ebx
#define XCHG_EBX_TO_PTR_RSI xchg dword ptr [rsi], ebx
#define XCHG_EBX_TO_PTR_RBP xchg dword ptr [rbp], ebx
#define XCHG_EBX_TO_PTR_RSP xchg dword ptr [rsp], ebx
#define XCHG_EBX_TO_PTR_R8 xchg dword ptr [r8], ebx
#define XCHG_EBX_TO_PTR_R9 xchg dword ptr [r9], ebx
#define XCHG_EBX_TO_PTR_R10 xchg dword ptr [r10], ebx
#define XCHG_EBX_TO_PTR_R11 xchg dword ptr [r11], ebx
#define XCHG_EBX_TO_PTR_R12 xchg dword ptr [r12], ebx
#define XCHG_EBX_TO_PTR_R13 xchg dword ptr [r13], ebx
#define XCHG_EBX_TO_PTR_R14 xchg dword ptr [r14], ebx
#define XCHG_EBX_TO_PTR_R15 xchg dword ptr [r15], ebx
#define XCHG_EBX_TO_PTR_EAX xchg dword ptr [eax], ebx
#define XCHG_EBX_TO_PTR_EBX xchg dword ptr [ebx], ebx
#define XCHG_EBX_TO_PTR_ECX xchg dword ptr [ecx], ebx
#define XCHG_EBX_TO_PTR_EDX xchg dword ptr [edx], ebx
#define XCHG_EBX_TO_PTR_EDI xchg dword ptr [edi], ebx
#define XCHG_EBX_TO_PTR_ESI xchg dword ptr [esi], ebx
#define XCHG_EBX_TO_PTR_EBP xchg dword ptr [ebp], ebx
#define XCHG_EBX_TO_PTR_ESP xchg dword ptr [esp], ebx

#define XCHG_ECX_TO_PTR_RAX xchg dword ptr [rax], ecx
#define XCHG_ECX_TO_PTR_RBX xchg dword ptr [rbx], ecx
#define XCHG_ECX_TO_PTR_RCX xchg dword ptr [rcx], ecx
#define XCHG_ECX_TO_PTR_RDX xchg dword ptr [rdx], ecx
#define XCHG_ECX_TO_PTR_RDI xchg dword ptr [rdi], ecx
#define XCHG_ECX_TO_PTR_RSI xchg dword ptr [rsi], ecx
#define XCHG_ECX_TO_PTR_RBP xchg dword ptr [rbp], ecx
#define XCHG_ECX_TO_PTR_RSP xchg dword ptr [rsp], ecx
#define XCHG_ECX_TO_PTR_R8 xchg dword ptr [r8], ecx
#define XCHG_ECX_TO_PTR_R9 xchg dword ptr [r9], ecx
#define XCHG_ECX_TO_PTR_R10 xchg dword ptr [r10], ecx
#define XCHG_ECX_TO_PTR_R11 xchg dword ptr [r11], ecx
#define XCHG_ECX_TO_PTR_R12 xchg dword ptr [r12], ecx
#define XCHG_ECX_TO_PTR_R13 xchg dword ptr [r13], ecx
#define XCHG_ECX_TO_PTR_R14 xchg dword ptr [r14], ecx
#define XCHG_ECX_TO_PTR_R15 xchg dword ptr [r15], ecx
#define XCHG_ECX_TO_PTR_EAX xchg dword ptr [eax], ecx
#define XCHG_ECX_TO_PTR_EBX xchg dword ptr [ebx], ecx
#define XCHG_ECX_TO_PTR_ECX xchg dword ptr [ecx], ecx
#define XCHG_ECX_TO_PTR_EDX xchg dword ptr [edx], ecx
#define XCHG_ECX_TO_PTR_EDI xchg dword ptr [edi], ecx
#define XCHG_ECX_TO_PTR_ESI xchg dword ptr [esi], ecx
#define XCHG_ECX_TO_PTR_EBP xchg dword ptr [ebp], ecx
#define XCHG_ECX_TO_PTR_ESP xchg dword ptr [esp], ecx

#define XCHG_EDX_TO_PTR_RAX xchg dword ptr [rax], edx
#define XCHG_EDX_TO_PTR_RBX xchg dword ptr [rbx], edx
#define XCHG_EDX_TO_PTR_RCX xchg dword ptr [rcx], edx
#define XCHG_EDX_TO_PTR_RDX xchg dword ptr [rdx], edx
#define XCHG_EDX_TO_PTR_RDI xchg dword ptr [rdi], edx
#define XCHG_EDX_TO_PTR_RSI xchg dword ptr [rsi], edx
#define XCHG_EDX_TO_PTR_RBP xchg dword ptr [rbp], edx
#define XCHG_EDX_TO_PTR_RSP xchg dword ptr [rsp], edx
#define XCHG_EDX_TO_PTR_R8 xchg dword ptr [r8], edx
#define XCHG_EDX_TO_PTR_R9 xchg dword ptr [r9], edx
#define XCHG_EDX_TO_PTR_R10 xchg dword ptr [r10], edx
#define XCHG_EDX_TO_PTR_R11 xchg dword ptr [r11], edx
#define XCHG_EDX_TO_PTR_R12 xchg dword ptr [r12], edx
#define XCHG_EDX_TO_PTR_R13 xchg dword ptr [r13], edx
#define XCHG_EDX_TO_PTR_R14 xchg dword ptr [r14], edx
#define XCHG_EDX_TO_PTR_R15 xchg dword ptr [r15], edx
#define XCHG_EDX_TO_PTR_EAX xchg dword ptr [eax], edx
#define XCHG_EDX_TO_PTR_EBX xchg dword ptr [ebx], edx
#define XCHG_EDX_TO_PTR_ECX xchg dword ptr [ecx], edx
#define XCHG_EDX_TO_PTR_EDX xchg dword ptr [edx], edx
#define XCHG_EDX_TO_PTR_EDI xchg dword ptr [edi], edx
#define XCHG_EDX_TO_PTR_ESI xchg dword ptr [esi], edx
#define XCHG_EDX_TO_PTR_EBP xchg dword ptr [ebp], edx
#define XCHG_EDX_TO_PTR_ESP xchg dword ptr [esp], edx

#define XCHG_EDI_TO_PTR_RAX xchg dword ptr [rax], edi
#define XCHG_EDI_TO_PTR_RBX xchg dword ptr [rbx], edi
#define XCHG_EDI_TO_PTR_RCX xchg dword ptr [rcx], edi
#define XCHG_EDI_TO_PTR_RDX xchg dword ptr [rdx], edi
#define XCHG_EDI_TO_PTR_RDI xchg dword ptr [rdi], edi
#define XCHG_EDI_TO_PTR_RSI xchg dword ptr [rsi], edi
#define XCHG_EDI_TO_PTR_RBP xchg dword ptr [rbp], edi
#define XCHG_EDI_TO_PTR_RSP xchg dword ptr [rsp], edi
#define XCHG_EDI_TO_PTR_R8 xchg dword ptr [r8], edi
#define XCHG_EDI_TO_PTR_R9 xchg dword ptr [r9], edi
#define XCHG_EDI_TO_PTR_R10 xchg dword ptr [r10], edi
#define XCHG_EDI_TO_PTR_R11 xchg dword ptr [r11], edi
#define XCHG_EDI_TO_PTR_R12 xchg dword ptr [r12], edi
#define XCHG_EDI_TO_PTR_R13 xchg dword ptr [r13], edi
#define XCHG_EDI_TO_PTR_R14 xchg dword ptr [r14], edi
#define XCHG_EDI_TO_PTR_R15 xchg dword ptr [r15], edi
#define XCHG_EDI_TO_PTR_EAX xchg dword ptr [eax], edi
#define XCHG_EDI_TO_PTR_EBX xchg dword ptr [ebx], edi
#define XCHG_EDI_TO_PTR_ECX xchg dword ptr [ecx], edi
#define XCHG_EDI_TO_PTR_EDX xchg dword ptr [edx], edi
#define XCHG_EDI_TO_PTR_EDI xchg dword ptr [edi], edi
#define XCHG_EDI_TO_PTR_ESI xchg dword ptr [esi], edi
#define XCHG_EDI_TO_PTR_EBP xchg dword ptr [ebp], edi
#define XCHG_EDI_TO_PTR_ESP xchg dword ptr [esp], edi

#define XCHG_ESI_TO_PTR_RAX xchg dword ptr [rax], esi
#define XCHG_ESI_TO_PTR_RBX xchg dword ptr [rbx], esi
#define XCHG_ESI_TO_PTR_RCX xchg dword ptr [rcx], esi
#define XCHG_ESI_TO_PTR_RDX xchg dword ptr [rdx], esi
#define XCHG_ESI_TO_PTR_RDI xchg dword ptr [rdi], esi
#define XCHG_ESI_TO_PTR_RSI xchg dword ptr [rsi], esi
#define XCHG_ESI_TO_PTR_RBP xchg dword ptr [rbp], esi
#define XCHG_ESI_TO_PTR_RSP xchg dword ptr [rsp], esi
#define XCHG_ESI_TO_PTR_R8 xchg dword ptr [r8], esi
#define XCHG_ESI_TO_PTR_R9 xchg dword ptr [r9], esi
#define XCHG_ESI_TO_PTR_R10 xchg dword ptr [r10], esi
#define XCHG_ESI_TO_PTR_R11 xchg dword ptr [r11], esi
#define XCHG_ESI_TO_PTR_R12 xchg dword ptr [r12], esi
#define XCHG_ESI_TO_PTR_R13 xchg dword ptr [r13], esi
#define XCHG_ESI_TO_PTR_R14 xchg dword ptr [r14], esi
#define XCHG_ESI_TO_PTR_R15 xchg dword ptr [r15], esi
#define XCHG_ESI_TO_PTR_EAX xchg dword ptr [eax], esi
#define XCHG_ESI_TO_PTR_EBX xchg dword ptr [ebx], esi
#define XCHG_ESI_TO_PTR_ECX xchg dword ptr [ecx], esi
#define XCHG_ESI_TO_PTR_EDX xchg dword ptr [edx], esi
#define XCHG_ESI_TO_PTR_EDI xchg dword ptr [edi], esi
#define XCHG_ESI_TO_PTR_ESI xchg dword ptr [esi], esi
#define XCHG_ESI_TO_PTR_EBP xchg dword ptr [ebp], esi
#define XCHG_ESI_TO_PTR_ESP xchg dword ptr [esp], esi

#define XCHG_EBP_TO_PTR_RAX xchg dword ptr [rax], ebp
#define XCHG_EBP_TO_PTR_RBX xchg dword ptr [rbx], ebp
#define XCHG_EBP_TO_PTR_RCX xchg dword ptr [rcx], ebp
#define XCHG_EBP_TO_PTR_RDX xchg dword ptr [rdx], ebp
#define XCHG_EBP_TO_PTR_RDI xchg dword ptr [rdi], ebp
#define XCHG_EBP_TO_PTR_RSI xchg dword ptr [rsi], ebp
#define XCHG_EBP_TO_PTR_RBP xchg dword ptr [rbp], ebp
#define XCHG_EBP_TO_PTR_RSP xchg dword ptr [rsp], ebp
#define XCHG_EBP_TO_PTR_R8 xchg dword ptr [r8], ebp
#define XCHG_EBP_TO_PTR_R9 xchg dword ptr [r9], ebp
#define XCHG_EBP_TO_PTR_R10 xchg dword ptr [r10], ebp
#define XCHG_EBP_TO_PTR_R11 xchg dword ptr [r11], ebp
#define XCHG_EBP_TO_PTR_R12 xchg dword ptr [r12], ebp
#define XCHG_EBP_TO_PTR_R13 xchg dword ptr [r13], ebp
#define XCHG_EBP_TO_PTR_R14 xchg dword ptr [r14], ebp
#define XCHG_EBP_TO_PTR_R15 xchg dword ptr [r15], ebp
#define XCHG_EBP_TO_PTR_EAX xchg dword ptr [eax], ebp
#define XCHG_EBP_TO_PTR_EBX xchg dword ptr [ebx], ebp
#define XCHG_EBP_TO_PTR_ECX xchg dword ptr [ecx], ebp
#define XCHG_EBP_TO_PTR_EDX xchg dword ptr [edx], ebp
#define XCHG_EBP_TO_PTR_EDI xchg dword ptr [edi], ebp
#define XCHG_EBP_TO_PTR_ESI xchg dword ptr [esi], ebp
#define XCHG_EBP_TO_PTR_EBP xchg dword ptr [ebp], ebp
#define XCHG_EBP_TO_PTR_ESP xchg dword ptr [esp], ebp

#define XCHG_ESP_TO_PTR_RAX xchg dword ptr [rax], esp
#define XCHG_ESP_TO_PTR_RBX xchg dword ptr [rbx], esp
#define XCHG_ESP_TO_PTR_RCX xchg dword ptr [rcx], esp
#define XCHG_ESP_TO_PTR_RDX xchg dword ptr [rdx], esp
#define XCHG_ESP_TO_PTR_RDI xchg dword ptr [rdi], esp
#define XCHG_ESP_TO_PTR_RSI xchg dword ptr [rsi], esp
#define XCHG_ESP_TO_PTR_RBP xchg dword ptr [rbp], esp
#define XCHG_ESP_TO_PTR_RSP xchg dword ptr [rsp], esp
#define XCHG_ESP_TO_PTR_R8 xchg dword ptr [r8], esp
#define XCHG_ESP_TO_PTR_R9 xchg dword ptr [r9], esp
#define XCHG_ESP_TO_PTR_R10 xchg dword ptr [r10], esp
#define XCHG_ESP_TO_PTR_R11 xchg dword ptr [r11], esp
#define XCHG_ESP_TO_PTR_R12 xchg dword ptr [r12], esp
#define XCHG_ESP_TO_PTR_R13 xchg dword ptr [r13], esp
#define XCHG_ESP_TO_PTR_R14 xchg dword ptr [r14], esp
#define XCHG_ESP_TO_PTR_R15 xchg dword ptr [r15], esp
#define XCHG_ESP_TO_PTR_EAX xchg dword ptr [eax], esp
#define XCHG_ESP_TO_PTR_EBX xchg dword ptr [ebx], esp
#define XCHG_ESP_TO_PTR_ECX xchg dword ptr [ecx], esp
#define XCHG_ESP_TO_PTR_EDX xchg dword ptr [edx], esp
#define XCHG_ESP_TO_PTR_EDI xchg dword ptr [edi], esp
#define XCHG_ESP_TO_PTR_ESI xchg dword ptr [esi], esp
#define XCHG_ESP_TO_PTR_EBP xchg dword ptr [ebp], esp
#define XCHG_ESP_TO_PTR_ESP xchg dword ptr [esp], esp

#define XCHG_R8D_TO_PTR_RAX xchg dword ptr [rax], r8d
#define XCHG_R8D_TO_PTR_RBX xchg dword ptr [rbx], r8d
#define XCHG_R8D_TO_PTR_RCX xchg dword ptr [rcx], r8d
#define XCHG_R8D_TO_PTR_RDX xchg dword ptr [rdx], r8d
#define XCHG_R8D_TO_PTR_RDI xchg dword ptr [rdi], r8d
#define XCHG_R8D_TO_PTR_RSI xchg dword ptr [rsi], r8d
#define XCHG_R8D_TO_PTR_RBP xchg dword ptr [rbp], r8d
#define XCHG_R8D_TO_PTR_RSP xchg dword ptr [rsp], r8d
#define XCHG_R8D_TO_PTR_R8 xchg dword ptr [r8], r8d
#define XCHG_R8D_TO_PTR_R9 xchg dword ptr [r9], r8d
#define XCHG_R8D_TO_PTR_R10 xchg dword ptr [r10], r8d
#define XCHG_R8D_TO_PTR_R11 xchg dword ptr [r11], r8d
#define XCHG_R8D_TO_PTR_R12 xchg dword ptr [r12], r8d
#define XCHG_R8D_TO_PTR_R13 xchg dword ptr [r13], r8d
#define XCHG_R8D_TO_PTR_R14 xchg dword ptr [r14], r8d
#define XCHG_R8D_TO_PTR_R15 xchg dword ptr [r15], r8d
#define XCHG_R8D_TO_PTR_EAX xchg dword ptr [eax], r8d
#define XCHG_R8D_TO_PTR_EBX xchg dword ptr [ebx], r8d
#define XCHG_R8D_TO_PTR_ECX xchg dword ptr [ecx], r8d
#define XCHG_R8D_TO_PTR_EDX xchg dword ptr [edx], r8d
#define XCHG_R8D_TO_PTR_EDI xchg dword ptr [edi], r8d
#define XCHG_R8D_TO_PTR_ESI xchg dword ptr [esi], r8d
#define XCHG_R8D_TO_PTR_EBP xchg dword ptr [ebp], r8d
#define XCHG_R8D_TO_PTR_ESP xchg dword ptr [esp], r8d

#define XCHG_R9D_TO_PTR_RAX xchg dword ptr [rax], r9d
#define XCHG_R9D_TO_PTR_RBX xchg dword ptr [rbx], r9d
#define XCHG_R9D_TO_PTR_RCX xchg dword ptr [rcx], r9d
#define XCHG_R9D_TO_PTR_RDX xchg dword ptr [rdx], r9d
#define XCHG_R9D_TO_PTR_RDI xchg dword ptr [rdi], r9d
#define XCHG_R9D_TO_PTR_RSI xchg dword ptr [rsi], r9d
#define XCHG_R9D_TO_PTR_RBP xchg dword ptr [rbp], r9d
#define XCHG_R9D_TO_PTR_RSP xchg dword ptr [rsp], r9d
#define XCHG_R9D_TO_PTR_R8 xchg dword ptr [r8], r9d
#define XCHG_R9D_TO_PTR_R9 xchg dword ptr [r9], r9d
#define XCHG_R9D_TO_PTR_R10 xchg dword ptr [r10], r9d
#define XCHG_R9D_TO_PTR_R11 xchg dword ptr [r11], r9d
#define XCHG_R9D_TO_PTR_R12 xchg dword ptr [r12], r9d
#define XCHG_R9D_TO_PTR_R13 xchg dword ptr [r13], r9d
#define XCHG_R9D_TO_PTR_R14 xchg dword ptr [r14], r9d
#define XCHG_R9D_TO_PTR_R15 xchg dword ptr [r15], r9d
#define XCHG_R9D_TO_PTR_EAX xchg dword ptr [eax], r9d
#define XCHG_R9D_TO_PTR_EBX xchg dword ptr [ebx], r9d
#define XCHG_R9D_TO_PTR_ECX xchg dword ptr [ecx], r9d
#define XCHG_R9D_TO_PTR_EDX xchg dword ptr [edx], r9d
#define XCHG_R9D_TO_PTR_EDI xchg dword ptr [edi], r9d
#define XCHG_R9D_TO_PTR_ESI xchg dword ptr [esi], r9d
#define XCHG_R9D_TO_PTR_EBP xchg dword ptr [ebp], r9d
#define XCHG_R9D_TO_PTR_ESP xchg dword ptr [esp], r9d

#define XCHG_R10D_TO_PTR_RAX xchg dword ptr [rax], r10d
#define XCHG_R10D_TO_PTR_RBX xchg dword ptr [rbx], r10d
#define XCHG_R10D_TO_PTR_RCX xchg dword ptr [rcx], r10d
#define XCHG_R10D_TO_PTR_RDX xchg dword ptr [rdx], r10d
#define XCHG_R10D_TO_PTR_RDI xchg dword ptr [rdi], r10d
#define XCHG_R10D_TO_PTR_RSI xchg dword ptr [rsi], r10d
#define XCHG_R10D_TO_PTR_RBP xchg dword ptr [rbp], r10d
#define XCHG_R10D_TO_PTR_RSP xchg dword ptr [rsp], r10d
#define XCHG_R10D_TO_PTR_R8 xchg dword ptr [r8], r10d
#define XCHG_R10D_TO_PTR_R9 xchg dword ptr [r9], r10d
#define XCHG_R10D_TO_PTR_R10 xchg dword ptr [r10], r10d
#define XCHG_R10D_TO_PTR_R11 xchg dword ptr [r11], r10d
#define XCHG_R10D_TO_PTR_R12 xchg dword ptr [r12], r10d
#define XCHG_R10D_TO_PTR_R13 xchg dword ptr [r13], r10d
#define XCHG_R10D_TO_PTR_R14 xchg dword ptr [r14], r10d
#define XCHG_R10D_TO_PTR_R15 xchg dword ptr [r15], r10d
#define XCHG_R10D_TO_PTR_EAX xchg dword ptr [eax], r10d
#define XCHG_R10D_TO_PTR_EBX xchg dword ptr [ebx], r10d
#define XCHG_R10D_TO_PTR_ECX xchg dword ptr [ecx], r10d
#define XCHG_R10D_TO_PTR_EDX xchg dword ptr [edx], r10d
#define XCHG_R10D_TO_PTR_EDI xchg dword ptr [edi], r10d
#define XCHG_R10D_TO_PTR_ESI xchg dword ptr [esi], r10d
#define XCHG_R10D_TO_PTR_EBP xchg dword ptr [ebp], r10d
#define XCHG_R10D_TO_PTR_ESP xchg dword ptr [esp], r10d

#define XCHG_R11D_TO_PTR_RAX xchg dword ptr [rax], r11d
#define XCHG_R11D_TO_PTR_RBX xchg dword ptr [rbx], r11d
#define XCHG_R11D_TO_PTR_RCX xchg dword ptr [rcx], r11d
#define XCHG_R11D_TO_PTR_RDX xchg dword ptr [rdx], r11d
#define XCHG_R11D_TO_PTR_RDI xchg dword ptr [rdi], r11d
#define XCHG_R11D_TO_PTR_RSI xchg dword ptr [rsi], r11d
#define XCHG_R11D_TO_PTR_RBP xchg dword ptr [rbp], r11d
#define XCHG_R11D_TO_PTR_RSP xchg dword ptr [rsp], r11d
#define XCHG_R11D_TO_PTR_R8 xchg dword ptr [r8], r11d
#define XCHG_R11D_TO_PTR_R9 xchg dword ptr [r9], r11d
#define XCHG_R11D_TO_PTR_R10 xchg dword ptr [r10], r11d
#define XCHG_R11D_TO_PTR_R11 xchg dword ptr [r11], r11d
#define XCHG_R11D_TO_PTR_R12 xchg dword ptr [r12], r11d
#define XCHG_R11D_TO_PTR_R13 xchg dword ptr [r13], r11d
#define XCHG_R11D_TO_PTR_R14 xchg dword ptr [r14], r11d
#define XCHG_R11D_TO_PTR_R15 xchg dword ptr [r15], r11d
#define XCHG_R11D_TO_PTR_EAX xchg dword ptr [eax], r11d
#define XCHG_R11D_TO_PTR_EBX xchg dword ptr [ebx], r11d
#define XCHG_R11D_TO_PTR_ECX xchg dword ptr [ecx], r11d
#define XCHG_R11D_TO_PTR_EDX xchg dword ptr [edx], r11d
#define XCHG_R11D_TO_PTR_EDI xchg dword ptr [edi], r11d
#define XCHG_R11D_TO_PTR_ESI xchg dword ptr [esi], r11d
#define XCHG_R11D_TO_PTR_EBP xchg dword ptr [ebp], r11d
#define XCHG_R11D_TO_PTR_ESP xchg dword ptr [esp], r11d

#define XCHG_R12D_TO_PTR_RAX xchg dword ptr [rax], r12d
#define XCHG_R12D_TO_PTR_RBX xchg dword ptr [rbx], r12d
#define XCHG_R12D_TO_PTR_RCX xchg dword ptr [rcx], r12d
#define XCHG_R12D_TO_PTR_RDX xchg dword ptr [rdx], r12d
#define XCHG_R12D_TO_PTR_RDI xchg dword ptr [rdi], r12d
#define XCHG_R12D_TO_PTR_RSI xchg dword ptr [rsi], r12d
#define XCHG_R12D_TO_PTR_RBP xchg dword ptr [rbp], r12d
#define XCHG_R12D_TO_PTR_RSP xchg dword ptr [rsp], r12d
#define XCHG_R12D_TO_PTR_R8 xchg dword ptr [r8], r12d
#define XCHG_R12D_TO_PTR_R9 xchg dword ptr [r9], r12d
#define XCHG_R12D_TO_PTR_R10 xchg dword ptr [r10], r12d
#define XCHG_R12D_TO_PTR_R11 xchg dword ptr [r11], r12d
#define XCHG_R12D_TO_PTR_R12 xchg dword ptr [r12], r12d
#define XCHG_R12D_TO_PTR_R13 xchg dword ptr [r13], r12d
#define XCHG_R12D_TO_PTR_R14 xchg dword ptr [r14], r12d
#define XCHG_R12D_TO_PTR_R15 xchg dword ptr [r15], r12d
#define XCHG_R12D_TO_PTR_EAX xchg dword ptr [eax], r12d
#define XCHG_R12D_TO_PTR_EBX xchg dword ptr [ebx], r12d
#define XCHG_R12D_TO_PTR_ECX xchg dword ptr [ecx], r12d
#define XCHG_R12D_TO_PTR_EDX xchg dword ptr [edx], r12d
#define XCHG_R12D_TO_PTR_EDI xchg dword ptr [edi], r12d
#define XCHG_R12D_TO_PTR_ESI xchg dword ptr [esi], r12d
#define XCHG_R12D_TO_PTR_EBP xchg dword ptr [ebp], r12d
#define XCHG_R12D_TO_PTR_ESP xchg dword ptr [esp], r12d

#define XCHG_R13D_TO_PTR_RAX xchg dword ptr [rax], r13d
#define XCHG_R13D_TO_PTR_RBX xchg dword ptr [rbx], r13d
#define XCHG_R13D_TO_PTR_RCX xchg dword ptr [rcx], r13d
#define XCHG_R13D_TO_PTR_RDX xchg dword ptr [rdx], r13d
#define XCHG_R13D_TO_PTR_RDI xchg dword ptr [rdi], r13d
#define XCHG_R13D_TO_PTR_RSI xchg dword ptr [rsi], r13d
#define XCHG_R13D_TO_PTR_RBP xchg dword ptr [rbp], r13d
#define XCHG_R13D_TO_PTR_RSP xchg dword ptr [rsp], r13d
#define XCHG_R13D_TO_PTR_R8 xchg dword ptr [r8], r13d
#define XCHG_R13D_TO_PTR_R9 xchg dword ptr [r9], r13d
#define XCHG_R13D_TO_PTR_R10 xchg dword ptr [r10], r13d
#define XCHG_R13D_TO_PTR_R11 xchg dword ptr [r11], r13d
#define XCHG_R13D_TO_PTR_R12 xchg dword ptr [r12], r13d
#define XCHG_R13D_TO_PTR_R13 xchg dword ptr [r13], r13d
#define XCHG_R13D_TO_PTR_R14 xchg dword ptr [r14], r13d
#define XCHG_R13D_TO_PTR_R15 xchg dword ptr [r15], r13d
#define XCHG_R13D_TO_PTR_EAX xchg dword ptr [eax], r13d
#define XCHG_R13D_TO_PTR_EBX xchg dword ptr [ebx], r13d
#define XCHG_R13D_TO_PTR_ECX xchg dword ptr [ecx], r13d
#define XCHG_R13D_TO_PTR_EDX xchg dword ptr [edx], r13d
#define XCHG_R13D_TO_PTR_EDI xchg dword ptr [edi], r13d
#define XCHG_R13D_TO_PTR_ESI xchg dword ptr [esi], r13d
#define XCHG_R13D_TO_PTR_EBP xchg dword ptr [ebp], r13d
#define XCHG_R13D_TO_PTR_ESP xchg dword ptr [esp], r13d

#define XCHG_R14D_TO_PTR_RAX xchg dword ptr [rax], r14d
#define XCHG_R14D_TO_PTR_RBX xchg dword ptr [rbx], r14d
#define XCHG_R14D_TO_PTR_RCX xchg dword ptr [rcx], r14d
#define XCHG_R14D_TO_PTR_RDX xchg dword ptr [rdx], r14d
#define XCHG_R14D_TO_PTR_RDI xchg dword ptr [rdi], r14d
#define XCHG_R14D_TO_PTR_RSI xchg dword ptr [rsi], r14d
#define XCHG_R14D_TO_PTR_RBP xchg dword ptr [rbp], r14d
#define XCHG_R14D_TO_PTR_RSP xchg dword ptr [rsp], r14d
#define XCHG_R14D_TO_PTR_R8 xchg dword ptr [r8], r14d
#define XCHG_R14D_TO_PTR_R9 xchg dword ptr [r9], r14d
#define XCHG_R14D_TO_PTR_R10 xchg dword ptr [r10], r14d
#define XCHG_R14D_TO_PTR_R11 xchg dword ptr [r11], r14d
#define XCHG_R14D_TO_PTR_R12 xchg dword ptr [r12], r14d
#define XCHG_R14D_TO_PTR_R13 xchg dword ptr [r13], r14d
#define XCHG_R14D_TO_PTR_R14 xchg dword ptr [r14], r14d
#define XCHG_R14D_TO_PTR_R15 xchg dword ptr [r15], r14d
#define XCHG_R14D_TO_PTR_EAX xchg dword ptr [eax], r14d
#define XCHG_R14D_TO_PTR_EBX xchg dword ptr [ebx], r14d
#define XCHG_R14D_TO_PTR_ECX xchg dword ptr [ecx], r14d
#define XCHG_R14D_TO_PTR_EDX xchg dword ptr [edx], r14d
#define XCHG_R14D_TO_PTR_EDI xchg dword ptr [edi], r14d
#define XCHG_R14D_TO_PTR_ESI xchg dword ptr [esi], r14d
#define XCHG_R14D_TO_PTR_EBP xchg dword ptr [ebp], r14d
#define XCHG_R14D_TO_PTR_ESP xchg dword ptr [esp], r14d

#define XCHG_R15D_TO_PTR_RAX xchg dword ptr [rax], r15d
#define XCHG_R15D_TO_PTR_RBX xchg dword ptr [rbx], r15d
#define XCHG_R15D_TO_PTR_RCX xchg dword ptr [rcx], r15d
#define XCHG_R15D_TO_PTR_RDX xchg dword ptr [rdx], r15d
#define XCHG_R15D_TO_PTR_RDI xchg dword ptr [rdi], r15d
#define XCHG_R15D_TO_PTR_RSI xchg dword ptr [rsi], r15d
#define XCHG_R15D_TO_PTR_RBP xchg dword ptr [rbp], r15d
#define XCHG_R15D_TO_PTR_RSP xchg dword ptr [rsp], r15d
#define XCHG_R15D_TO_PTR_R8 xchg dword ptr [r8], r15d
#define XCHG_R15D_TO_PTR_R9 xchg dword ptr [r9], r15d
#define XCHG_R15D_TO_PTR_R10 xchg dword ptr [r10], r15d
#define XCHG_R15D_TO_PTR_R11 xchg dword ptr [r11], r15d
#define XCHG_R15D_TO_PTR_R12 xchg dword ptr [r12], r15d
#define XCHG_R15D_TO_PTR_R13 xchg dword ptr [r13], r15d
#define XCHG_R15D_TO_PTR_R14 xchg dword ptr [r14], r15d
#define XCHG_R15D_TO_PTR_R15 xchg dword ptr [r15], r15d
#define XCHG_R15D_TO_PTR_EAX xchg dword ptr [eax], r15d
#define XCHG_R15D_TO_PTR_EBX xchg dword ptr [ebx], r15d
#define XCHG_R15D_TO_PTR_ECX xchg dword ptr [ecx], r15d
#define XCHG_R15D_TO_PTR_EDX xchg dword ptr [edx], r15d
#define XCHG_R15D_TO_PTR_EDI xchg dword ptr [edi], r15d
#define XCHG_R15D_TO_PTR_ESI xchg dword ptr [esi], r15d
#define XCHG_R15D_TO_PTR_EBP xchg dword ptr [ebp], r15d
#define XCHG_R15D_TO_PTR_ESP xchg dword ptr [esp], r15d

#define XCHG_EAX_FROM_PTR_RAX_(VALUE) xchg eax, dword ptr [rax + VALUE]
#define XCHG_EAX_FROM_PTR_RBX_(VALUE) xchg eax, dword ptr [rbx + VALUE]
#define XCHG_EAX_FROM_PTR_RCX_(VALUE) xchg eax, dword ptr [rcx + VALUE]
#define XCHG_EAX_FROM_PTR_RDX_(VALUE) xchg eax, dword ptr [rdx + VALUE]
#define XCHG_EAX_FROM_PTR_RDI_(VALUE) xchg eax, dword ptr [rdi + VALUE]
#define XCHG_EAX_FROM_PTR_RSI_(VALUE) xchg eax, dword ptr [rsi + VALUE]
#define XCHG_EAX_FROM_PTR_RBP_(VALUE) xchg eax, dword ptr [rbp + VALUE]
#define XCHG_EAX_FROM_PTR_RSP_(VALUE) xchg eax, dword ptr [rsp + VALUE]
#define XCHG_EAX_FROM_PTR_R8_(VALUE) xchg eax, dword ptr [r8 + VALUE]
#define XCHG_EAX_FROM_PTR_R9_(VALUE) xchg eax, dword ptr [r9 + VALUE]
#define XCHG_EAX_FROM_PTR_R10_(VALUE) xchg eax, dword ptr [r10 + VALUE]
#define XCHG_EAX_FROM_PTR_R11_(VALUE) xchg eax, dword ptr [r11 + VALUE]
#define XCHG_EAX_FROM_PTR_R12_(VALUE) xchg eax, dword ptr [r12 + VALUE]
#define XCHG_EAX_FROM_PTR_R13_(VALUE) xchg eax, dword ptr [r13 + VALUE]
#define XCHG_EAX_FROM_PTR_R14_(VALUE) xchg eax, dword ptr [r14 + VALUE]
#define XCHG_EAX_FROM_PTR_R15_(VALUE) xchg eax, dword ptr [r15 + VALUE]
#define XCHG_EAX_FROM_PTR_EAX_(VALUE) xchg eax, dword ptr [eax + VALUE]
#define XCHG_EAX_FROM_PTR_EBX_(VALUE) xchg eax, dword ptr [ebx + VALUE]
#define XCHG_EAX_FROM_PTR_ECX_(VALUE) xchg eax, dword ptr [ecx + VALUE]
#define XCHG_EAX_FROM_PTR_EDX_(VALUE) xchg eax, dword ptr [edx + VALUE]
#define XCHG_EAX_FROM_PTR_EDI_(VALUE) xchg eax, dword ptr [edi + VALUE]
#define XCHG_EAX_FROM_PTR_ESI_(VALUE) xchg eax, dword ptr [esi + VALUE]
#define XCHG_EAX_FROM_PTR_EBP_(VALUE) xchg eax, dword ptr [ebp + VALUE]
#define XCHG_EAX_FROM_PTR_ESP_(VALUE) xchg eax, dword ptr [esp + VALUE]

#define XCHG_EBX_FROM_PTR_RAX_(VALUE) xchg ebx, dword ptr [rax + VALUE]
#define XCHG_EBX_FROM_PTR_RBX_(VALUE) xchg ebx, dword ptr [rbx + VALUE]
#define XCHG_EBX_FROM_PTR_RCX_(VALUE) xchg ebx, dword ptr [rcx + VALUE]
#define XCHG_EBX_FROM_PTR_RDX_(VALUE) xchg ebx, dword ptr [rdx + VALUE]
#define XCHG_EBX_FROM_PTR_RDI_(VALUE) xchg ebx, dword ptr [rdi + VALUE]
#define XCHG_EBX_FROM_PTR_RSI_(VALUE) xchg ebx, dword ptr [rsi + VALUE]
#define XCHG_EBX_FROM_PTR_RBP_(VALUE) xchg ebx, dword ptr [rbp + VALUE]
#define XCHG_EBX_FROM_PTR_RSP_(VALUE) xchg ebx, dword ptr [rsp + VALUE]
#define XCHG_EBX_FROM_PTR_R8_(VALUE) xchg ebx, dword ptr [r8 + VALUE]
#define XCHG_EBX_FROM_PTR_R9_(VALUE) xchg ebx, dword ptr [r9 + VALUE]
#define XCHG_EBX_FROM_PTR_R10_(VALUE) xchg ebx, dword ptr [r10 + VALUE]
#define XCHG_EBX_FROM_PTR_R11_(VALUE) xchg ebx, dword ptr [r11 + VALUE]
#define XCHG_EBX_FROM_PTR_R12_(VALUE) xchg ebx, dword ptr [r12 + VALUE]
#define XCHG_EBX_FROM_PTR_R13_(VALUE) xchg ebx, dword ptr [r13 + VALUE]
#define XCHG_EBX_FROM_PTR_R14_(VALUE) xchg ebx, dword ptr [r14 + VALUE]
#define XCHG_EBX_FROM_PTR_R15_(VALUE) xchg ebx, dword ptr [r15 + VALUE]
#define XCHG_EBX_FROM_PTR_EAX_(VALUE) xchg ebx, dword ptr [eax + VALUE]
#define XCHG_EBX_FROM_PTR_EBX_(VALUE) xchg ebx, dword ptr [ebx + VALUE]
#define XCHG_EBX_FROM_PTR_ECX_(VALUE) xchg ebx, dword ptr [ecx + VALUE]
#define XCHG_EBX_FROM_PTR_EDX_(VALUE) xchg ebx, dword ptr [edx + VALUE]
#define XCHG_EBX_FROM_PTR_EDI_(VALUE) xchg ebx, dword ptr [edi + VALUE]
#define XCHG_EBX_FROM_PTR_ESI_(VALUE) xchg ebx, dword ptr [esi + VALUE]
#define XCHG_EBX_FROM_PTR_EBP_(VALUE) xchg ebx, dword ptr [ebp + VALUE]
#define XCHG_EBX_FROM_PTR_ESP_(VALUE) xchg ebx, dword ptr [esp + VALUE]

#define XCHG_ECX_FROM_PTR_RAX_(VALUE) xchg ecx, dword ptr [rax + VALUE]
#define XCHG_ECX_FROM_PTR_RBX_(VALUE) xchg ecx, dword ptr [rbx + VALUE]
#define XCHG_ECX_FROM_PTR_RCX_(VALUE) xchg ecx, dword ptr [rcx + VALUE]
#define XCHG_ECX_FROM_PTR_RDX_(VALUE) xchg ecx, dword ptr [rdx + VALUE]
#define XCHG_ECX_FROM_PTR_RDI_(VALUE) xchg ecx, dword ptr [rdi + VALUE]
#define XCHG_ECX_FROM_PTR_RSI_(VALUE) xchg ecx, dword ptr [rsi + VALUE]
#define XCHG_ECX_FROM_PTR_RBP_(VALUE) xchg ecx, dword ptr [rbp + VALUE]
#define XCHG_ECX_FROM_PTR_RSP_(VALUE) xchg ecx, dword ptr [rsp + VALUE]
#define XCHG_ECX_FROM_PTR_R8_(VALUE) xchg ecx, dword ptr [r8 + VALUE]
#define XCHG_ECX_FROM_PTR_R9_(VALUE) xchg ecx, dword ptr [r9 + VALUE]
#define XCHG_ECX_FROM_PTR_R10_(VALUE) xchg ecx, dword ptr [r10 + VALUE]
#define XCHG_ECX_FROM_PTR_R11_(VALUE) xchg ecx, dword ptr [r11 + VALUE]
#define XCHG_ECX_FROM_PTR_R12_(VALUE) xchg ecx, dword ptr [r12 + VALUE]
#define XCHG_ECX_FROM_PTR_R13_(VALUE) xchg ecx, dword ptr [r13 + VALUE]
#define XCHG_ECX_FROM_PTR_R14_(VALUE) xchg ecx, dword ptr [r14 + VALUE]
#define XCHG_ECX_FROM_PTR_R15_(VALUE) xchg ecx, dword ptr [r15 + VALUE]
#define XCHG_ECX_FROM_PTR_EAX_(VALUE) xchg ecx, dword ptr [eax + VALUE]
#define XCHG_ECX_FROM_PTR_EBX_(VALUE) xchg ecx, dword ptr [ebx + VALUE]
#define XCHG_ECX_FROM_PTR_ECX_(VALUE) xchg ecx, dword ptr [ecx + VALUE]
#define XCHG_ECX_FROM_PTR_EDX_(VALUE) xchg ecx, dword ptr [edx + VALUE]
#define XCHG_ECX_FROM_PTR_EDI_(VALUE) xchg ecx, dword ptr [edi + VALUE]
#define XCHG_ECX_FROM_PTR_ESI_(VALUE) xchg ecx, dword ptr [esi + VALUE]
#define XCHG_ECX_FROM_PTR_EBP_(VALUE) xchg ecx, dword ptr [ebp + VALUE]
#define XCHG_ECX_FROM_PTR_ESP_(VALUE) xchg ecx, dword ptr [esp + VALUE]

#define XCHG_EDX_FROM_PTR_RAX_(VALUE) xchg edx, dword ptr [rax + VALUE]
#define XCHG_EDX_FROM_PTR_RBX_(VALUE) xchg edx, dword ptr [rbx + VALUE]
#define XCHG_EDX_FROM_PTR_RCX_(VALUE) xchg edx, dword ptr [rcx + VALUE]
#define XCHG_EDX_FROM_PTR_RDX_(VALUE) xchg edx, dword ptr [rdx + VALUE]
#define XCHG_EDX_FROM_PTR_RDI_(VALUE) xchg edx, dword ptr [rdi + VALUE]
#define XCHG_EDX_FROM_PTR_RSI_(VALUE) xchg edx, dword ptr [rsi + VALUE]
#define XCHG_EDX_FROM_PTR_RBP_(VALUE) xchg edx, dword ptr [rbp + VALUE]
#define XCHG_EDX_FROM_PTR_RSP_(VALUE) xchg edx, dword ptr [rsp + VALUE]
#define XCHG_EDX_FROM_PTR_R8_(VALUE) xchg edx, dword ptr [r8 + VALUE]
#define XCHG_EDX_FROM_PTR_R9_(VALUE) xchg edx, dword ptr [r9 + VALUE]
#define XCHG_EDX_FROM_PTR_R10_(VALUE) xchg edx, dword ptr [r10 + VALUE]
#define XCHG_EDX_FROM_PTR_R11_(VALUE) xchg edx, dword ptr [r11 + VALUE]
#define XCHG_EDX_FROM_PTR_R12_(VALUE) xchg edx, dword ptr [r12 + VALUE]
#define XCHG_EDX_FROM_PTR_R13_(VALUE) xchg edx, dword ptr [r13 + VALUE]
#define XCHG_EDX_FROM_PTR_R14_(VALUE) xchg edx, dword ptr [r14 + VALUE]
#define XCHG_EDX_FROM_PTR_R15_(VALUE) xchg edx, dword ptr [r15 + VALUE]
#define XCHG_EDX_FROM_PTR_EAX_(VALUE) xchg edx, dword ptr [eax + VALUE]
#define XCHG_EDX_FROM_PTR_EBX_(VALUE) xchg edx, dword ptr [ebx + VALUE]
#define XCHG_EDX_FROM_PTR_ECX_(VALUE) xchg edx, dword ptr [ecx + VALUE]
#define XCHG_EDX_FROM_PTR_EDX_(VALUE) xchg edx, dword ptr [edx + VALUE]
#define XCHG_EDX_FROM_PTR_EDI_(VALUE) xchg edx, dword ptr [edi + VALUE]
#define XCHG_EDX_FROM_PTR_ESI_(VALUE) xchg edx, dword ptr [esi + VALUE]
#define XCHG_EDX_FROM_PTR_EBP_(VALUE) xchg edx, dword ptr [ebp + VALUE]
#define XCHG_EDX_FROM_PTR_ESP_(VALUE) xchg edx, dword ptr [esp + VALUE]

#define XCHG_EDI_FROM_PTR_RAX_(VALUE) xchg edi, dword ptr [rax + VALUE]
#define XCHG_EDI_FROM_PTR_RBX_(VALUE) xchg edi, dword ptr [rbx + VALUE]
#define XCHG_EDI_FROM_PTR_RCX_(VALUE) xchg edi, dword ptr [rcx + VALUE]
#define XCHG_EDI_FROM_PTR_RDX_(VALUE) xchg edi, dword ptr [rdx + VALUE]
#define XCHG_EDI_FROM_PTR_RDI_(VALUE) xchg edi, dword ptr [rdi + VALUE]
#define XCHG_EDI_FROM_PTR_RSI_(VALUE) xchg edi, dword ptr [rsi + VALUE]
#define XCHG_EDI_FROM_PTR_RBP_(VALUE) xchg edi, dword ptr [rbp + VALUE]
#define XCHG_EDI_FROM_PTR_RSP_(VALUE) xchg edi, dword ptr [rsp + VALUE]
#define XCHG_EDI_FROM_PTR_R8_(VALUE) xchg edi, dword ptr [r8 + VALUE]
#define XCHG_EDI_FROM_PTR_R9_(VALUE) xchg edi, dword ptr [r9 + VALUE]
#define XCHG_EDI_FROM_PTR_R10_(VALUE) xchg edi, dword ptr [r10 + VALUE]
#define XCHG_EDI_FROM_PTR_R11_(VALUE) xchg edi, dword ptr [r11 + VALUE]
#define XCHG_EDI_FROM_PTR_R12_(VALUE) xchg edi, dword ptr [r12 + VALUE]
#define XCHG_EDI_FROM_PTR_R13_(VALUE) xchg edi, dword ptr [r13 + VALUE]
#define XCHG_EDI_FROM_PTR_R14_(VALUE) xchg edi, dword ptr [r14 + VALUE]
#define XCHG_EDI_FROM_PTR_R15_(VALUE) xchg edi, dword ptr [r15 + VALUE]
#define XCHG_EDI_FROM_PTR_EAX_(VALUE) xchg edi, dword ptr [eax + VALUE]
#define XCHG_EDI_FROM_PTR_EBX_(VALUE) xchg edi, dword ptr [ebx + VALUE]
#define XCHG_EDI_FROM_PTR_ECX_(VALUE) xchg edi, dword ptr [ecx + VALUE]
#define XCHG_EDI_FROM_PTR_EDX_(VALUE) xchg edi, dword ptr [edx + VALUE]
#define XCHG_EDI_FROM_PTR_EDI_(VALUE) xchg edi, dword ptr [edi + VALUE]
#define XCHG_EDI_FROM_PTR_ESI_(VALUE) xchg edi, dword ptr [esi + VALUE]
#define XCHG_EDI_FROM_PTR_EBP_(VALUE) xchg edi, dword ptr [ebp + VALUE]
#define XCHG_EDI_FROM_PTR_ESP_(VALUE) xchg edi, dword ptr [esp + VALUE]

#define XCHG_ESI_FROM_PTR_RAX_(VALUE) xchg esi, dword ptr [rax + VALUE]
#define XCHG_ESI_FROM_PTR_RBX_(VALUE) xchg esi, dword ptr [rbx + VALUE]
#define XCHG_ESI_FROM_PTR_RCX_(VALUE) xchg esi, dword ptr [rcx + VALUE]
#define XCHG_ESI_FROM_PTR_RDX_(VALUE) xchg esi, dword ptr [rdx + VALUE]
#define XCHG_ESI_FROM_PTR_RDI_(VALUE) xchg esi, dword ptr [rdi + VALUE]
#define XCHG_ESI_FROM_PTR_RSI_(VALUE) xchg esi, dword ptr [rsi + VALUE]
#define XCHG_ESI_FROM_PTR_RBP_(VALUE) xchg esi, dword ptr [rbp + VALUE]
#define XCHG_ESI_FROM_PTR_RSP_(VALUE) xchg esi, dword ptr [rsp + VALUE]
#define XCHG_ESI_FROM_PTR_R8_(VALUE) xchg esi, dword ptr [r8 + VALUE]
#define XCHG_ESI_FROM_PTR_R9_(VALUE) xchg esi, dword ptr [r9 + VALUE]
#define XCHG_ESI_FROM_PTR_R10_(VALUE) xchg esi, dword ptr [r10 + VALUE]
#define XCHG_ESI_FROM_PTR_R11_(VALUE) xchg esi, dword ptr [r11 + VALUE]
#define XCHG_ESI_FROM_PTR_R12_(VALUE) xchg esi, dword ptr [r12 + VALUE]
#define XCHG_ESI_FROM_PTR_R13_(VALUE) xchg esi, dword ptr [r13 + VALUE]
#define XCHG_ESI_FROM_PTR_R14_(VALUE) xchg esi, dword ptr [r14 + VALUE]
#define XCHG_ESI_FROM_PTR_R15_(VALUE) xchg esi, dword ptr [r15 + VALUE]
#define XCHG_ESI_FROM_PTR_EAX_(VALUE) xchg esi, dword ptr [eax + VALUE]
#define XCHG_ESI_FROM_PTR_EBX_(VALUE) xchg esi, dword ptr [ebx + VALUE]
#define XCHG_ESI_FROM_PTR_ECX_(VALUE) xchg esi, dword ptr [ecx + VALUE]
#define XCHG_ESI_FROM_PTR_EDX_(VALUE) xchg esi, dword ptr [edx + VALUE]
#define XCHG_ESI_FROM_PTR_EDI_(VALUE) xchg esi, dword ptr [edi + VALUE]
#define XCHG_ESI_FROM_PTR_ESI_(VALUE) xchg esi, dword ptr [esi + VALUE]
#define XCHG_ESI_FROM_PTR_EBP_(VALUE) xchg esi, dword ptr [ebp + VALUE]
#define XCHG_ESI_FROM_PTR_ESP_(VALUE) xchg esi, dword ptr [esp + VALUE]

#define XCHG_EBP_FROM_PTR_RAX_(VALUE) xchg ebp, dword ptr [rax + VALUE]
#define XCHG_EBP_FROM_PTR_RBX_(VALUE) xchg ebp, dword ptr [rbx + VALUE]
#define XCHG_EBP_FROM_PTR_RCX_(VALUE) xchg ebp, dword ptr [rcx + VALUE]
#define XCHG_EBP_FROM_PTR_RDX_(VALUE) xchg ebp, dword ptr [rdx + VALUE]
#define XCHG_EBP_FROM_PTR_RDI_(VALUE) xchg ebp, dword ptr [rdi + VALUE]
#define XCHG_EBP_FROM_PTR_RSI_(VALUE) xchg ebp, dword ptr [rsi + VALUE]
#define XCHG_EBP_FROM_PTR_RBP_(VALUE) xchg ebp, dword ptr [rbp + VALUE]
#define XCHG_EBP_FROM_PTR_RSP_(VALUE) xchg ebp, dword ptr [rsp + VALUE]
#define XCHG_EBP_FROM_PTR_R8_(VALUE) xchg ebp, dword ptr [r8 + VALUE]
#define XCHG_EBP_FROM_PTR_R9_(VALUE) xchg ebp, dword ptr [r9 + VALUE]
#define XCHG_EBP_FROM_PTR_R10_(VALUE) xchg ebp, dword ptr [r10 + VALUE]
#define XCHG_EBP_FROM_PTR_R11_(VALUE) xchg ebp, dword ptr [r11 + VALUE]
#define XCHG_EBP_FROM_PTR_R12_(VALUE) xchg ebp, dword ptr [r12 + VALUE]
#define XCHG_EBP_FROM_PTR_R13_(VALUE) xchg ebp, dword ptr [r13 + VALUE]
#define XCHG_EBP_FROM_PTR_R14_(VALUE) xchg ebp, dword ptr [r14 + VALUE]
#define XCHG_EBP_FROM_PTR_R15_(VALUE) xchg ebp, dword ptr [r15 + VALUE]
#define XCHG_EBP_FROM_PTR_EAX_(VALUE) xchg ebp, dword ptr [eax + VALUE]
#define XCHG_EBP_FROM_PTR_EBX_(VALUE) xchg ebp, dword ptr [ebx + VALUE]
#define XCHG_EBP_FROM_PTR_ECX_(VALUE) xchg ebp, dword ptr [ecx + VALUE]
#define XCHG_EBP_FROM_PTR_EDX_(VALUE) xchg ebp, dword ptr [edx + VALUE]
#define XCHG_EBP_FROM_PTR_EDI_(VALUE) xchg ebp, dword ptr [edi + VALUE]
#define XCHG_EBP_FROM_PTR_ESI_(VALUE) xchg ebp, dword ptr [esi + VALUE]
#define XCHG_EBP_FROM_PTR_EBP_(VALUE) xchg ebp, dword ptr [ebp + VALUE]
#define XCHG_EBP_FROM_PTR_ESP_(VALUE) xchg ebp, dword ptr [esp + VALUE]

#define XCHG_ESP_FROM_PTR_RAX_(VALUE) xchg esp, dword ptr [rax + VALUE]
#define XCHG_ESP_FROM_PTR_RBX_(VALUE) xchg esp, dword ptr [rbx + VALUE]
#define XCHG_ESP_FROM_PTR_RCX_(VALUE) xchg esp, dword ptr [rcx + VALUE]
#define XCHG_ESP_FROM_PTR_RDX_(VALUE) xchg esp, dword ptr [rdx + VALUE]
#define XCHG_ESP_FROM_PTR_RDI_(VALUE) xchg esp, dword ptr [rdi + VALUE]
#define XCHG_ESP_FROM_PTR_RSI_(VALUE) xchg esp, dword ptr [rsi + VALUE]
#define XCHG_ESP_FROM_PTR_RBP_(VALUE) xchg esp, dword ptr [rbp + VALUE]
#define XCHG_ESP_FROM_PTR_RSP_(VALUE) xchg esp, dword ptr [rsp + VALUE]
#define XCHG_ESP_FROM_PTR_R8_(VALUE) xchg esp, dword ptr [r8 + VALUE]
#define XCHG_ESP_FROM_PTR_R9_(VALUE) xchg esp, dword ptr [r9 + VALUE]
#define XCHG_ESP_FROM_PTR_R10_(VALUE) xchg esp, dword ptr [r10 + VALUE]
#define XCHG_ESP_FROM_PTR_R11_(VALUE) xchg esp, dword ptr [r11 + VALUE]
#define XCHG_ESP_FROM_PTR_R12_(VALUE) xchg esp, dword ptr [r12 + VALUE]
#define XCHG_ESP_FROM_PTR_R13_(VALUE) xchg esp, dword ptr [r13 + VALUE]
#define XCHG_ESP_FROM_PTR_R14_(VALUE) xchg esp, dword ptr [r14 + VALUE]
#define XCHG_ESP_FROM_PTR_R15_(VALUE) xchg esp, dword ptr [r15 + VALUE]
#define XCHG_ESP_FROM_PTR_EAX_(VALUE) xchg esp, dword ptr [eax + VALUE]
#define XCHG_ESP_FROM_PTR_EBX_(VALUE) xchg esp, dword ptr [ebx + VALUE]
#define XCHG_ESP_FROM_PTR_ECX_(VALUE) xchg esp, dword ptr [ecx + VALUE]
#define XCHG_ESP_FROM_PTR_EDX_(VALUE) xchg esp, dword ptr [edx + VALUE]
#define XCHG_ESP_FROM_PTR_EDI_(VALUE) xchg esp, dword ptr [edi + VALUE]
#define XCHG_ESP_FROM_PTR_ESI_(VALUE) xchg esp, dword ptr [esi + VALUE]
#define XCHG_ESP_FROM_PTR_EBP_(VALUE) xchg esp, dword ptr [ebp + VALUE]
#define XCHG_ESP_FROM_PTR_ESP_(VALUE) xchg esp, dword ptr [esp + VALUE]

#define XCHG_R8D_FROM_PTR_RAX_(VALUE) xchg r8d, dword ptr [rax + VALUE]
#define XCHG_R8D_FROM_PTR_RBX_(VALUE) xchg r8d, dword ptr [rbx + VALUE]
#define XCHG_R8D_FROM_PTR_RCX_(VALUE) xchg r8d, dword ptr [rcx + VALUE]
#define XCHG_R8D_FROM_PTR_RDX_(VALUE) xchg r8d, dword ptr [rdx + VALUE]
#define XCHG_R8D_FROM_PTR_RDI_(VALUE) xchg r8d, dword ptr [rdi + VALUE]
#define XCHG_R8D_FROM_PTR_RSI_(VALUE) xchg r8d, dword ptr [rsi + VALUE]
#define XCHG_R8D_FROM_PTR_RBP_(VALUE) xchg r8d, dword ptr [rbp + VALUE]
#define XCHG_R8D_FROM_PTR_RSP_(VALUE) xchg r8d, dword ptr [rsp + VALUE]
#define XCHG_R8D_FROM_PTR_R8_(VALUE) xchg r8d, dword ptr [r8 + VALUE]
#define XCHG_R8D_FROM_PTR_R9_(VALUE) xchg r8d, dword ptr [r9 + VALUE]
#define XCHG_R8D_FROM_PTR_R10_(VALUE) xchg r8d, dword ptr [r10 + VALUE]
#define XCHG_R8D_FROM_PTR_R11_(VALUE) xchg r8d, dword ptr [r11 + VALUE]
#define XCHG_R8D_FROM_PTR_R12_(VALUE) xchg r8d, dword ptr [r12 + VALUE]
#define XCHG_R8D_FROM_PTR_R13_(VALUE) xchg r8d, dword ptr [r13 + VALUE]
#define XCHG_R8D_FROM_PTR_R14_(VALUE) xchg r8d, dword ptr [r14 + VALUE]
#define XCHG_R8D_FROM_PTR_R15_(VALUE) xchg r8d, dword ptr [r15 + VALUE]
#define XCHG_R8D_FROM_PTR_EAX_(VALUE) xchg r8d, dword ptr [eax + VALUE]
#define XCHG_R8D_FROM_PTR_EBX_(VALUE) xchg r8d, dword ptr [ebx + VALUE]
#define XCHG_R8D_FROM_PTR_ECX_(VALUE) xchg r8d, dword ptr [ecx + VALUE]
#define XCHG_R8D_FROM_PTR_EDX_(VALUE) xchg r8d, dword ptr [edx + VALUE]
#define XCHG_R8D_FROM_PTR_EDI_(VALUE) xchg r8d, dword ptr [edi + VALUE]
#define XCHG_R8D_FROM_PTR_ESI_(VALUE) xchg r8d, dword ptr [esi + VALUE]
#define XCHG_R8D_FROM_PTR_EBP_(VALUE) xchg r8d, dword ptr [ebp + VALUE]
#define XCHG_R8D_FROM_PTR_ESP_(VALUE) xchg r8d, dword ptr [esp + VALUE]

#define XCHG_R9D_FROM_PTR_RAX_(VALUE) xchg r9d, dword ptr [rax + VALUE]
#define XCHG_R9D_FROM_PTR_RBX_(VALUE) xchg r9d, dword ptr [rbx + VALUE]
#define XCHG_R9D_FROM_PTR_RCX_(VALUE) xchg r9d, dword ptr [rcx + VALUE]
#define XCHG_R9D_FROM_PTR_RDX_(VALUE) xchg r9d, dword ptr [rdx + VALUE]
#define XCHG_R9D_FROM_PTR_RDI_(VALUE) xchg r9d, dword ptr [rdi + VALUE]
#define XCHG_R9D_FROM_PTR_RSI_(VALUE) xchg r9d, dword ptr [rsi + VALUE]
#define XCHG_R9D_FROM_PTR_RBP_(VALUE) xchg r9d, dword ptr [rbp + VALUE]
#define XCHG_R9D_FROM_PTR_RSP_(VALUE) xchg r9d, dword ptr [rsp + VALUE]
#define XCHG_R9D_FROM_PTR_R8_(VALUE) xchg r9d, dword ptr [r8 + VALUE]
#define XCHG_R9D_FROM_PTR_R9_(VALUE) xchg r9d, dword ptr [r9 + VALUE]
#define XCHG_R9D_FROM_PTR_R10_(VALUE) xchg r9d, dword ptr [r10 + VALUE]
#define XCHG_R9D_FROM_PTR_R11_(VALUE) xchg r9d, dword ptr [r11 + VALUE]
#define XCHG_R9D_FROM_PTR_R12_(VALUE) xchg r9d, dword ptr [r12 + VALUE]
#define XCHG_R9D_FROM_PTR_R13_(VALUE) xchg r9d, dword ptr [r13 + VALUE]
#define XCHG_R9D_FROM_PTR_R14_(VALUE) xchg r9d, dword ptr [r14 + VALUE]
#define XCHG_R9D_FROM_PTR_R15_(VALUE) xchg r9d, dword ptr [r15 + VALUE]
#define XCHG_R9D_FROM_PTR_EAX_(VALUE) xchg r9d, dword ptr [eax + VALUE]
#define XCHG_R9D_FROM_PTR_EBX_(VALUE) xchg r9d, dword ptr [ebx + VALUE]
#define XCHG_R9D_FROM_PTR_ECX_(VALUE) xchg r9d, dword ptr [ecx + VALUE]
#define XCHG_R9D_FROM_PTR_EDX_(VALUE) xchg r9d, dword ptr [edx + VALUE]
#define XCHG_R9D_FROM_PTR_EDI_(VALUE) xchg r9d, dword ptr [edi + VALUE]
#define XCHG_R9D_FROM_PTR_ESI_(VALUE) xchg r9d, dword ptr [esi + VALUE]
#define XCHG_R9D_FROM_PTR_EBP_(VALUE) xchg r9d, dword ptr [ebp + VALUE]
#define XCHG_R9D_FROM_PTR_ESP_(VALUE) xchg r9d, dword ptr [esp + VALUE]

#define XCHG_R10D_FROM_PTR_RAX_(VALUE) xchg r10d, dword ptr [rax + VALUE]
#define XCHG_R10D_FROM_PTR_RBX_(VALUE) xchg r10d, dword ptr [rbx + VALUE]
#define XCHG_R10D_FROM_PTR_RCX_(VALUE) xchg r10d, dword ptr [rcx + VALUE]
#define XCHG_R10D_FROM_PTR_RDX_(VALUE) xchg r10d, dword ptr [rdx + VALUE]
#define XCHG_R10D_FROM_PTR_RDI_(VALUE) xchg r10d, dword ptr [rdi + VALUE]
#define XCHG_R10D_FROM_PTR_RSI_(VALUE) xchg r10d, dword ptr [rsi + VALUE]
#define XCHG_R10D_FROM_PTR_RBP_(VALUE) xchg r10d, dword ptr [rbp + VALUE]
#define XCHG_R10D_FROM_PTR_RSP_(VALUE) xchg r10d, dword ptr [rsp + VALUE]
#define XCHG_R10D_FROM_PTR_R8_(VALUE) xchg r10d, dword ptr [r8 + VALUE]
#define XCHG_R10D_FROM_PTR_R9_(VALUE) xchg r10d, dword ptr [r9 + VALUE]
#define XCHG_R10D_FROM_PTR_R10_(VALUE) xchg r10d, dword ptr [r10 + VALUE]
#define XCHG_R10D_FROM_PTR_R11_(VALUE) xchg r10d, dword ptr [r11 + VALUE]
#define XCHG_R10D_FROM_PTR_R12_(VALUE) xchg r10d, dword ptr [r12 + VALUE]
#define XCHG_R10D_FROM_PTR_R13_(VALUE) xchg r10d, dword ptr [r13 + VALUE]
#define XCHG_R10D_FROM_PTR_R14_(VALUE) xchg r10d, dword ptr [r14 + VALUE]
#define XCHG_R10D_FROM_PTR_R15_(VALUE) xchg r10d, dword ptr [r15 + VALUE]
#define XCHG_R10D_FROM_PTR_EAX_(VALUE) xchg r10d, dword ptr [eax + VALUE]
#define XCHG_R10D_FROM_PTR_EBX_(VALUE) xchg r10d, dword ptr [ebx + VALUE]
#define XCHG_R10D_FROM_PTR_ECX_(VALUE) xchg r10d, dword ptr [ecx + VALUE]
#define XCHG_R10D_FROM_PTR_EDX_(VALUE) xchg r10d, dword ptr [edx + VALUE]
#define XCHG_R10D_FROM_PTR_EDI_(VALUE) xchg r10d, dword ptr [edi + VALUE]
#define XCHG_R10D_FROM_PTR_ESI_(VALUE) xchg r10d, dword ptr [esi + VALUE]
#define XCHG_R10D_FROM_PTR_EBP_(VALUE) xchg r10d, dword ptr [ebp + VALUE]
#define XCHG_R10D_FROM_PTR_ESP_(VALUE) xchg r10d, dword ptr [esp + VALUE]

#define XCHG_R11D_FROM_PTR_RAX_(VALUE) xchg r11d, dword ptr [rax + VALUE]
#define XCHG_R11D_FROM_PTR_RBX_(VALUE) xchg r11d, dword ptr [rbx + VALUE]
#define XCHG_R11D_FROM_PTR_RCX_(VALUE) xchg r11d, dword ptr [rcx + VALUE]
#define XCHG_R11D_FROM_PTR_RDX_(VALUE) xchg r11d, dword ptr [rdx + VALUE]
#define XCHG_R11D_FROM_PTR_RDI_(VALUE) xchg r11d, dword ptr [rdi + VALUE]
#define XCHG_R11D_FROM_PTR_RSI_(VALUE) xchg r11d, dword ptr [rsi + VALUE]
#define XCHG_R11D_FROM_PTR_RBP_(VALUE) xchg r11d, dword ptr [rbp + VALUE]
#define XCHG_R11D_FROM_PTR_RSP_(VALUE) xchg r11d, dword ptr [rsp + VALUE]
#define XCHG_R11D_FROM_PTR_R8_(VALUE) xchg r11d, dword ptr [r8 + VALUE]
#define XCHG_R11D_FROM_PTR_R9_(VALUE) xchg r11d, dword ptr [r9 + VALUE]
#define XCHG_R11D_FROM_PTR_R10_(VALUE) xchg r11d, dword ptr [r10 + VALUE]
#define XCHG_R11D_FROM_PTR_R11_(VALUE) xchg r11d, dword ptr [r11 + VALUE]
#define XCHG_R11D_FROM_PTR_R12_(VALUE) xchg r11d, dword ptr [r12 + VALUE]
#define XCHG_R11D_FROM_PTR_R13_(VALUE) xchg r11d, dword ptr [r13 + VALUE]
#define XCHG_R11D_FROM_PTR_R14_(VALUE) xchg r11d, dword ptr [r14 + VALUE]
#define XCHG_R11D_FROM_PTR_R15_(VALUE) xchg r11d, dword ptr [r15 + VALUE]
#define XCHG_R11D_FROM_PTR_EAX_(VALUE) xchg r11d, dword ptr [eax + VALUE]
#define XCHG_R11D_FROM_PTR_EBX_(VALUE) xchg r11d, dword ptr [ebx + VALUE]
#define XCHG_R11D_FROM_PTR_ECX_(VALUE) xchg r11d, dword ptr [ecx + VALUE]
#define XCHG_R11D_FROM_PTR_EDX_(VALUE) xchg r11d, dword ptr [edx + VALUE]
#define XCHG_R11D_FROM_PTR_EDI_(VALUE) xchg r11d, dword ptr [edi + VALUE]
#define XCHG_R11D_FROM_PTR_ESI_(VALUE) xchg r11d, dword ptr [esi + VALUE]
#define XCHG_R11D_FROM_PTR_EBP_(VALUE) xchg r11d, dword ptr [ebp + VALUE]
#define XCHG_R11D_FROM_PTR_ESP_(VALUE) xchg r11d, dword ptr [esp + VALUE]

#define XCHG_R12D_FROM_PTR_RAX_(VALUE) xchg r12d, dword ptr [rax + VALUE]
#define XCHG_R12D_FROM_PTR_RBX_(VALUE) xchg r12d, dword ptr [rbx + VALUE]
#define XCHG_R12D_FROM_PTR_RCX_(VALUE) xchg r12d, dword ptr [rcx + VALUE]
#define XCHG_R12D_FROM_PTR_RDX_(VALUE) xchg r12d, dword ptr [rdx + VALUE]
#define XCHG_R12D_FROM_PTR_RDI_(VALUE) xchg r12d, dword ptr [rdi + VALUE]
#define XCHG_R12D_FROM_PTR_RSI_(VALUE) xchg r12d, dword ptr [rsi + VALUE]
#define XCHG_R12D_FROM_PTR_RBP_(VALUE) xchg r12d, dword ptr [rbp + VALUE]
#define XCHG_R12D_FROM_PTR_RSP_(VALUE) xchg r12d, dword ptr [rsp + VALUE]
#define XCHG_R12D_FROM_PTR_R8_(VALUE) xchg r12d, dword ptr [r8 + VALUE]
#define XCHG_R12D_FROM_PTR_R9_(VALUE) xchg r12d, dword ptr [r9 + VALUE]
#define XCHG_R12D_FROM_PTR_R10_(VALUE) xchg r12d, dword ptr [r10 + VALUE]
#define XCHG_R12D_FROM_PTR_R11_(VALUE) xchg r12d, dword ptr [r11 + VALUE]
#define XCHG_R12D_FROM_PTR_R12_(VALUE) xchg r12d, dword ptr [r12 + VALUE]
#define XCHG_R12D_FROM_PTR_R13_(VALUE) xchg r12d, dword ptr [r13 + VALUE]
#define XCHG_R12D_FROM_PTR_R14_(VALUE) xchg r12d, dword ptr [r14 + VALUE]
#define XCHG_R12D_FROM_PTR_R15_(VALUE) xchg r12d, dword ptr [r15 + VALUE]
#define XCHG_R12D_FROM_PTR_EAX_(VALUE) xchg r12d, dword ptr [eax + VALUE]
#define XCHG_R12D_FROM_PTR_EBX_(VALUE) xchg r12d, dword ptr [ebx + VALUE]
#define XCHG_R12D_FROM_PTR_ECX_(VALUE) xchg r12d, dword ptr [ecx + VALUE]
#define XCHG_R12D_FROM_PTR_EDX_(VALUE) xchg r12d, dword ptr [edx + VALUE]
#define XCHG_R12D_FROM_PTR_EDI_(VALUE) xchg r12d, dword ptr [edi + VALUE]
#define XCHG_R12D_FROM_PTR_ESI_(VALUE) xchg r12d, dword ptr [esi + VALUE]
#define XCHG_R12D_FROM_PTR_EBP_(VALUE) xchg r12d, dword ptr [ebp + VALUE]
#define XCHG_R12D_FROM_PTR_ESP_(VALUE) xchg r12d, dword ptr [esp + VALUE]

#define XCHG_R13D_FROM_PTR_RAX_(VALUE) xchg r13d, dword ptr [rax + VALUE]
#define XCHG_R13D_FROM_PTR_RBX_(VALUE) xchg r13d, dword ptr [rbx + VALUE]
#define XCHG_R13D_FROM_PTR_RCX_(VALUE) xchg r13d, dword ptr [rcx + VALUE]
#define XCHG_R13D_FROM_PTR_RDX_(VALUE) xchg r13d, dword ptr [rdx + VALUE]
#define XCHG_R13D_FROM_PTR_RDI_(VALUE) xchg r13d, dword ptr [rdi + VALUE]
#define XCHG_R13D_FROM_PTR_RSI_(VALUE) xchg r13d, dword ptr [rsi + VALUE]
#define XCHG_R13D_FROM_PTR_RBP_(VALUE) xchg r13d, dword ptr [rbp + VALUE]
#define XCHG_R13D_FROM_PTR_RSP_(VALUE) xchg r13d, dword ptr [rsp + VALUE]
#define XCHG_R13D_FROM_PTR_R8_(VALUE) xchg r13d, dword ptr [r8 + VALUE]
#define XCHG_R13D_FROM_PTR_R9_(VALUE) xchg r13d, dword ptr [r9 + VALUE]
#define XCHG_R13D_FROM_PTR_R10_(VALUE) xchg r13d, dword ptr [r10 + VALUE]
#define XCHG_R13D_FROM_PTR_R11_(VALUE) xchg r13d, dword ptr [r11 + VALUE]
#define XCHG_R13D_FROM_PTR_R12_(VALUE) xchg r13d, dword ptr [r12 + VALUE]
#define XCHG_R13D_FROM_PTR_R13_(VALUE) xchg r13d, dword ptr [r13 + VALUE]
#define XCHG_R13D_FROM_PTR_R14_(VALUE) xchg r13d, dword ptr [r14 + VALUE]
#define XCHG_R13D_FROM_PTR_R15_(VALUE) xchg r13d, dword ptr [r15 + VALUE]
#define XCHG_R13D_FROM_PTR_EAX_(VALUE) xchg r13d, dword ptr [eax + VALUE]
#define XCHG_R13D_FROM_PTR_EBX_(VALUE) xchg r13d, dword ptr [ebx + VALUE]
#define XCHG_R13D_FROM_PTR_ECX_(VALUE) xchg r13d, dword ptr [ecx + VALUE]
#define XCHG_R13D_FROM_PTR_EDX_(VALUE) xchg r13d, dword ptr [edx + VALUE]
#define XCHG_R13D_FROM_PTR_EDI_(VALUE) xchg r13d, dword ptr [edi + VALUE]
#define XCHG_R13D_FROM_PTR_ESI_(VALUE) xchg r13d, dword ptr [esi + VALUE]
#define XCHG_R13D_FROM_PTR_EBP_(VALUE) xchg r13d, dword ptr [ebp + VALUE]
#define XCHG_R13D_FROM_PTR_ESP_(VALUE) xchg r13d, dword ptr [esp + VALUE]

#define XCHG_R14D_FROM_PTR_RAX_(VALUE) xchg r14d, dword ptr [rax + VALUE]
#define XCHG_R14D_FROM_PTR_RBX_(VALUE) xchg r14d, dword ptr [rbx + VALUE]
#define XCHG_R14D_FROM_PTR_RCX_(VALUE) xchg r14d, dword ptr [rcx + VALUE]
#define XCHG_R14D_FROM_PTR_RDX_(VALUE) xchg r14d, dword ptr [rdx + VALUE]
#define XCHG_R14D_FROM_PTR_RDI_(VALUE) xchg r14d, dword ptr [rdi + VALUE]
#define XCHG_R14D_FROM_PTR_RSI_(VALUE) xchg r14d, dword ptr [rsi + VALUE]
#define XCHG_R14D_FROM_PTR_RBP_(VALUE) xchg r14d, dword ptr [rbp + VALUE]
#define XCHG_R14D_FROM_PTR_RSP_(VALUE) xchg r14d, dword ptr [rsp + VALUE]
#define XCHG_R14D_FROM_PTR_R8_(VALUE) xchg r14d, dword ptr [r8 + VALUE]
#define XCHG_R14D_FROM_PTR_R9_(VALUE) xchg r14d, dword ptr [r9 + VALUE]
#define XCHG_R14D_FROM_PTR_R10_(VALUE) xchg r14d, dword ptr [r10 + VALUE]
#define XCHG_R14D_FROM_PTR_R11_(VALUE) xchg r14d, dword ptr [r11 + VALUE]
#define XCHG_R14D_FROM_PTR_R12_(VALUE) xchg r14d, dword ptr [r12 + VALUE]
#define XCHG_R14D_FROM_PTR_R13_(VALUE) xchg r14d, dword ptr [r13 + VALUE]
#define XCHG_R14D_FROM_PTR_R14_(VALUE) xchg r14d, dword ptr [r14 + VALUE]
#define XCHG_R14D_FROM_PTR_R15_(VALUE) xchg r14d, dword ptr [r15 + VALUE]
#define XCHG_R14D_FROM_PTR_EAX_(VALUE) xchg r14d, dword ptr [eax + VALUE]
#define XCHG_R14D_FROM_PTR_EBX_(VALUE) xchg r14d, dword ptr [ebx + VALUE]
#define XCHG_R14D_FROM_PTR_ECX_(VALUE) xchg r14d, dword ptr [ecx + VALUE]
#define XCHG_R14D_FROM_PTR_EDX_(VALUE) xchg r14d, dword ptr [edx + VALUE]
#define XCHG_R14D_FROM_PTR_EDI_(VALUE) xchg r14d, dword ptr [edi + VALUE]
#define XCHG_R14D_FROM_PTR_ESI_(VALUE) xchg r14d, dword ptr [esi + VALUE]
#define XCHG_R14D_FROM_PTR_EBP_(VALUE) xchg r14d, dword ptr [ebp + VALUE]
#define XCHG_R14D_FROM_PTR_ESP_(VALUE) xchg r14d, dword ptr [esp + VALUE]

#define XCHG_R15D_FROM_PTR_RAX_(VALUE) xchg r15d, dword ptr [rax + VALUE]
#define XCHG_R15D_FROM_PTR_RBX_(VALUE) xchg r15d, dword ptr [rbx + VALUE]
#define XCHG_R15D_FROM_PTR_RCX_(VALUE) xchg r15d, dword ptr [rcx + VALUE]
#define XCHG_R15D_FROM_PTR_RDX_(VALUE) xchg r15d, dword ptr [rdx + VALUE]
#define XCHG_R15D_FROM_PTR_RDI_(VALUE) xchg r15d, dword ptr [rdi + VALUE]
#define XCHG_R15D_FROM_PTR_RSI_(VALUE) xchg r15d, dword ptr [rsi + VALUE]
#define XCHG_R15D_FROM_PTR_RBP_(VALUE) xchg r15d, dword ptr [rbp + VALUE]
#define XCHG_R15D_FROM_PTR_RSP_(VALUE) xchg r15d, dword ptr [rsp + VALUE]
#define XCHG_R15D_FROM_PTR_R8_(VALUE) xchg r15d, dword ptr [r8 + VALUE]
#define XCHG_R15D_FROM_PTR_R9_(VALUE) xchg r15d, dword ptr [r9 + VALUE]
#define XCHG_R15D_FROM_PTR_R10_(VALUE) xchg r15d, dword ptr [r10 + VALUE]
#define XCHG_R15D_FROM_PTR_R11_(VALUE) xchg r15d, dword ptr [r11 + VALUE]
#define XCHG_R15D_FROM_PTR_R12_(VALUE) xchg r15d, dword ptr [r12 + VALUE]
#define XCHG_R15D_FROM_PTR_R13_(VALUE) xchg r15d, dword ptr [r13 + VALUE]
#define XCHG_R15D_FROM_PTR_R14_(VALUE) xchg r15d, dword ptr [r14 + VALUE]
#define XCHG_R15D_FROM_PTR_R15_(VALUE) xchg r15d, dword ptr [r15 + VALUE]
#define XCHG_R15D_FROM_PTR_EAX_(VALUE) xchg r15d, dword ptr [eax + VALUE]
#define XCHG_R15D_FROM_PTR_EBX_(VALUE) xchg r15d, dword ptr [ebx + VALUE]
#define XCHG_R15D_FROM_PTR_ECX_(VALUE) xchg r15d, dword ptr [ecx + VALUE]
#define XCHG_R15D_FROM_PTR_EDX_(VALUE) xchg r15d, dword ptr [edx + VALUE]
#define XCHG_R15D_FROM_PTR_EDI_(VALUE) xchg r15d, dword ptr [edi + VALUE]
#define XCHG_R15D_FROM_PTR_ESI_(VALUE) xchg r15d, dword ptr [esi + VALUE]
#define XCHG_R15D_FROM_PTR_EBP_(VALUE) xchg r15d, dword ptr [ebp + VALUE]
#define XCHG_R15D_FROM_PTR_ESP_(VALUE) xchg r15d, dword ptr [esp + VALUE]

#define XCHG_EAX_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], eax
#define XCHG_EAX_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], eax
#define XCHG_EAX_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], eax
#define XCHG_EAX_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], eax
#define XCHG_EAX_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], eax
#define XCHG_EAX_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], eax
#define XCHG_EAX_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], eax
#define XCHG_EAX_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], eax
#define XCHG_EAX_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], eax
#define XCHG_EAX_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], eax
#define XCHG_EAX_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], eax
#define XCHG_EAX_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], eax
#define XCHG_EAX_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], eax
#define XCHG_EAX_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], eax
#define XCHG_EAX_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], eax
#define XCHG_EAX_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], eax
#define XCHG_EAX_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], eax
#define XCHG_EAX_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], eax
#define XCHG_EAX_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], eax
#define XCHG_EAX_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], eax
#define XCHG_EAX_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], eax
#define XCHG_EAX_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], eax
#define XCHG_EAX_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], eax
#define XCHG_EAX_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], eax

#define XCHG_EBX_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], ebx
#define XCHG_EBX_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], ebx
#define XCHG_EBX_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], ebx
#define XCHG_EBX_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], ebx
#define XCHG_EBX_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], ebx
#define XCHG_EBX_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], ebx
#define XCHG_EBX_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], ebx
#define XCHG_EBX_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], ebx
#define XCHG_EBX_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], ebx
#define XCHG_EBX_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], ebx
#define XCHG_EBX_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], ebx
#define XCHG_EBX_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], ebx
#define XCHG_EBX_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], ebx
#define XCHG_EBX_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], ebx
#define XCHG_EBX_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], ebx
#define XCHG_EBX_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], ebx
#define XCHG_EBX_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], ebx
#define XCHG_EBX_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], ebx
#define XCHG_EBX_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], ebx
#define XCHG_EBX_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], ebx
#define XCHG_EBX_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], ebx
#define XCHG_EBX_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], ebx
#define XCHG_EBX_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], ebx
#define XCHG_EBX_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], ebx

#define XCHG_ECX_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], ecx
#define XCHG_ECX_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], ecx
#define XCHG_ECX_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], ecx
#define XCHG_ECX_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], ecx
#define XCHG_ECX_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], ecx
#define XCHG_ECX_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], ecx
#define XCHG_ECX_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], ecx
#define XCHG_ECX_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], ecx
#define XCHG_ECX_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], ecx
#define XCHG_ECX_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], ecx
#define XCHG_ECX_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], ecx
#define XCHG_ECX_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], ecx
#define XCHG_ECX_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], ecx
#define XCHG_ECX_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], ecx
#define XCHG_ECX_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], ecx
#define XCHG_ECX_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], ecx
#define XCHG_ECX_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], ecx
#define XCHG_ECX_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], ecx
#define XCHG_ECX_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], ecx
#define XCHG_ECX_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], ecx
#define XCHG_ECX_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], ecx
#define XCHG_ECX_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], ecx
#define XCHG_ECX_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], ecx
#define XCHG_ECX_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], ecx

#define XCHG_EDX_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], edx
#define XCHG_EDX_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], edx
#define XCHG_EDX_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], edx
#define XCHG_EDX_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], edx
#define XCHG_EDX_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], edx
#define XCHG_EDX_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], edx
#define XCHG_EDX_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], edx
#define XCHG_EDX_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], edx
#define XCHG_EDX_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], edx
#define XCHG_EDX_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], edx
#define XCHG_EDX_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], edx
#define XCHG_EDX_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], edx
#define XCHG_EDX_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], edx
#define XCHG_EDX_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], edx
#define XCHG_EDX_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], edx
#define XCHG_EDX_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], edx
#define XCHG_EDX_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], edx
#define XCHG_EDX_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], edx
#define XCHG_EDX_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], edx
#define XCHG_EDX_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], edx
#define XCHG_EDX_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], edx
#define XCHG_EDX_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], edx
#define XCHG_EDX_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], edx
#define XCHG_EDX_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], edx

#define XCHG_EDI_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], edi
#define XCHG_EDI_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], edi
#define XCHG_EDI_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], edi
#define XCHG_EDI_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], edi
#define XCHG_EDI_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], edi
#define XCHG_EDI_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], edi
#define XCHG_EDI_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], edi
#define XCHG_EDI_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], edi
#define XCHG_EDI_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], edi
#define XCHG_EDI_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], edi
#define XCHG_EDI_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], edi
#define XCHG_EDI_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], edi
#define XCHG_EDI_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], edi
#define XCHG_EDI_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], edi
#define XCHG_EDI_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], edi
#define XCHG_EDI_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], edi
#define XCHG_EDI_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], edi
#define XCHG_EDI_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], edi
#define XCHG_EDI_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], edi
#define XCHG_EDI_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], edi
#define XCHG_EDI_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], edi
#define XCHG_EDI_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], edi
#define XCHG_EDI_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], edi
#define XCHG_EDI_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], edi

#define XCHG_ESI_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], esi
#define XCHG_ESI_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], esi
#define XCHG_ESI_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], esi
#define XCHG_ESI_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], esi
#define XCHG_ESI_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], esi
#define XCHG_ESI_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], esi
#define XCHG_ESI_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], esi
#define XCHG_ESI_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], esi
#define XCHG_ESI_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], esi
#define XCHG_ESI_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], esi
#define XCHG_ESI_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], esi
#define XCHG_ESI_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], esi
#define XCHG_ESI_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], esi
#define XCHG_ESI_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], esi
#define XCHG_ESI_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], esi
#define XCHG_ESI_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], esi
#define XCHG_ESI_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], esi
#define XCHG_ESI_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], esi
#define XCHG_ESI_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], esi
#define XCHG_ESI_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], esi
#define XCHG_ESI_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], esi
#define XCHG_ESI_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], esi
#define XCHG_ESI_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], esi
#define XCHG_ESI_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], esi

#define XCHG_EBP_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], ebp
#define XCHG_EBP_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], ebp
#define XCHG_EBP_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], ebp
#define XCHG_EBP_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], ebp
#define XCHG_EBP_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], ebp
#define XCHG_EBP_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], ebp
#define XCHG_EBP_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], ebp
#define XCHG_EBP_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], ebp
#define XCHG_EBP_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], ebp
#define XCHG_EBP_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], ebp
#define XCHG_EBP_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], ebp
#define XCHG_EBP_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], ebp
#define XCHG_EBP_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], ebp
#define XCHG_EBP_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], ebp
#define XCHG_EBP_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], ebp
#define XCHG_EBP_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], ebp
#define XCHG_EBP_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], ebp
#define XCHG_EBP_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], ebp
#define XCHG_EBP_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], ebp
#define XCHG_EBP_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], ebp
#define XCHG_EBP_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], ebp
#define XCHG_EBP_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], ebp
#define XCHG_EBP_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], ebp
#define XCHG_EBP_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], ebp

#define XCHG_ESP_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], esp
#define XCHG_ESP_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], esp
#define XCHG_ESP_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], esp
#define XCHG_ESP_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], esp
#define XCHG_ESP_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], esp
#define XCHG_ESP_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], esp
#define XCHG_ESP_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], esp
#define XCHG_ESP_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], esp
#define XCHG_ESP_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], esp
#define XCHG_ESP_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], esp
#define XCHG_ESP_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], esp
#define XCHG_ESP_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], esp
#define XCHG_ESP_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], esp
#define XCHG_ESP_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], esp
#define XCHG_ESP_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], esp
#define XCHG_ESP_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], esp
#define XCHG_ESP_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], esp
#define XCHG_ESP_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], esp
#define XCHG_ESP_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], esp
#define XCHG_ESP_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], esp
#define XCHG_ESP_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], esp
#define XCHG_ESP_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], esp
#define XCHG_ESP_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], esp
#define XCHG_ESP_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], esp

#define XCHG_R8D_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], r8d
#define XCHG_R8D_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], r8d
#define XCHG_R8D_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], r8d
#define XCHG_R8D_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], r8d
#define XCHG_R8D_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], r8d
#define XCHG_R8D_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], r8d
#define XCHG_R8D_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], r8d
#define XCHG_R8D_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], r8d
#define XCHG_R8D_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], r8d
#define XCHG_R8D_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], r8d
#define XCHG_R8D_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], r8d
#define XCHG_R8D_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], r8d
#define XCHG_R8D_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], r8d
#define XCHG_R8D_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], r8d
#define XCHG_R8D_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], r8d
#define XCHG_R8D_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], r8d
#define XCHG_R8D_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], r8d
#define XCHG_R8D_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], r8d
#define XCHG_R8D_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], r8d
#define XCHG_R8D_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], r8d
#define XCHG_R8D_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], r8d
#define XCHG_R8D_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], r8d
#define XCHG_R8D_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], r8d
#define XCHG_R8D_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], r8d

#define XCHG_R9D_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], r9d
#define XCHG_R9D_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], r9d
#define XCHG_R9D_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], r9d
#define XCHG_R9D_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], r9d
#define XCHG_R9D_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], r9d
#define XCHG_R9D_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], r9d
#define XCHG_R9D_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], r9d
#define XCHG_R9D_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], r9d
#define XCHG_R9D_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], r9d
#define XCHG_R9D_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], r9d
#define XCHG_R9D_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], r9d
#define XCHG_R9D_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], r9d
#define XCHG_R9D_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], r9d
#define XCHG_R9D_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], r9d
#define XCHG_R9D_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], r9d
#define XCHG_R9D_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], r9d
#define XCHG_R9D_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], r9d
#define XCHG_R9D_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], r9d
#define XCHG_R9D_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], r9d
#define XCHG_R9D_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], r9d
#define XCHG_R9D_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], r9d
#define XCHG_R9D_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], r9d
#define XCHG_R9D_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], r9d
#define XCHG_R9D_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], r9d

#define XCHG_R10D_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], r10d
#define XCHG_R10D_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], r10d
#define XCHG_R10D_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], r10d
#define XCHG_R10D_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], r10d
#define XCHG_R10D_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], r10d
#define XCHG_R10D_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], r10d
#define XCHG_R10D_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], r10d
#define XCHG_R10D_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], r10d
#define XCHG_R10D_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], r10d
#define XCHG_R10D_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], r10d
#define XCHG_R10D_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], r10d
#define XCHG_R10D_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], r10d
#define XCHG_R10D_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], r10d
#define XCHG_R10D_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], r10d
#define XCHG_R10D_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], r10d
#define XCHG_R10D_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], r10d
#define XCHG_R10D_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], r10d
#define XCHG_R10D_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], r10d
#define XCHG_R10D_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], r10d
#define XCHG_R10D_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], r10d
#define XCHG_R10D_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], r10d
#define XCHG_R10D_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], r10d
#define XCHG_R10D_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], r10d
#define XCHG_R10D_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], r10d

#define XCHG_R11D_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], r11d
#define XCHG_R11D_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], r11d
#define XCHG_R11D_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], r11d
#define XCHG_R11D_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], r11d
#define XCHG_R11D_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], r11d
#define XCHG_R11D_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], r11d
#define XCHG_R11D_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], r11d
#define XCHG_R11D_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], r11d
#define XCHG_R11D_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], r11d
#define XCHG_R11D_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], r11d
#define XCHG_R11D_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], r11d
#define XCHG_R11D_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], r11d
#define XCHG_R11D_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], r11d
#define XCHG_R11D_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], r11d
#define XCHG_R11D_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], r11d
#define XCHG_R11D_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], r11d
#define XCHG_R11D_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], r11d
#define XCHG_R11D_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], r11d
#define XCHG_R11D_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], r11d
#define XCHG_R11D_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], r11d
#define XCHG_R11D_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], r11d
#define XCHG_R11D_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], r11d
#define XCHG_R11D_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], r11d
#define XCHG_R11D_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], r11d

#define XCHG_R12D_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], r12d
#define XCHG_R12D_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], r12d
#define XCHG_R12D_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], r12d
#define XCHG_R12D_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], r12d
#define XCHG_R12D_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], r12d
#define XCHG_R12D_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], r12d
#define XCHG_R12D_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], r12d
#define XCHG_R12D_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], r12d
#define XCHG_R12D_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], r12d
#define XCHG_R12D_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], r12d
#define XCHG_R12D_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], r12d
#define XCHG_R12D_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], r12d
#define XCHG_R12D_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], r12d
#define XCHG_R12D_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], r12d
#define XCHG_R12D_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], r12d
#define XCHG_R12D_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], r12d
#define XCHG_R12D_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], r12d
#define XCHG_R12D_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], r12d
#define XCHG_R12D_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], r12d
#define XCHG_R12D_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], r12d
#define XCHG_R12D_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], r12d
#define XCHG_R12D_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], r12d
#define XCHG_R12D_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], r12d
#define XCHG_R12D_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], r12d

#define XCHG_R13D_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], r13d
#define XCHG_R13D_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], r13d
#define XCHG_R13D_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], r13d
#define XCHG_R13D_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], r13d
#define XCHG_R13D_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], r13d
#define XCHG_R13D_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], r13d
#define XCHG_R13D_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], r13d
#define XCHG_R13D_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], r13d
#define XCHG_R13D_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], r13d
#define XCHG_R13D_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], r13d
#define XCHG_R13D_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], r13d
#define XCHG_R13D_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], r13d
#define XCHG_R13D_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], r13d
#define XCHG_R13D_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], r13d
#define XCHG_R13D_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], r13d
#define XCHG_R13D_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], r13d
#define XCHG_R13D_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], r13d
#define XCHG_R13D_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], r13d
#define XCHG_R13D_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], r13d
#define XCHG_R13D_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], r13d
#define XCHG_R13D_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], r13d
#define XCHG_R13D_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], r13d
#define XCHG_R13D_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], r13d
#define XCHG_R13D_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], r13d

#define XCHG_R14D_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], r14d
#define XCHG_R14D_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], r14d
#define XCHG_R14D_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], r14d
#define XCHG_R14D_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], r14d
#define XCHG_R14D_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], r14d
#define XCHG_R14D_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], r14d
#define XCHG_R14D_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], r14d
#define XCHG_R14D_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], r14d
#define XCHG_R14D_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], r14d
#define XCHG_R14D_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], r14d
#define XCHG_R14D_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], r14d
#define XCHG_R14D_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], r14d
#define XCHG_R14D_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], r14d
#define XCHG_R14D_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], r14d
#define XCHG_R14D_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], r14d
#define XCHG_R14D_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], r14d
#define XCHG_R14D_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], r14d
#define XCHG_R14D_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], r14d
#define XCHG_R14D_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], r14d
#define XCHG_R14D_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], r14d
#define XCHG_R14D_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], r14d
#define XCHG_R14D_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], r14d
#define XCHG_R14D_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], r14d
#define XCHG_R14D_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], r14d

#define XCHG_R15D_TO_PTR_RAX_(VALUE) xchg dword ptr [rax + VALUE], r15d
#define XCHG_R15D_TO_PTR_RBX_(VALUE) xchg dword ptr [rbx + VALUE], r15d
#define XCHG_R15D_TO_PTR_RCX_(VALUE) xchg dword ptr [rcx + VALUE], r15d
#define XCHG_R15D_TO_PTR_RDX_(VALUE) xchg dword ptr [rdx + VALUE], r15d
#define XCHG_R15D_TO_PTR_RDI_(VALUE) xchg dword ptr [rdi + VALUE], r15d
#define XCHG_R15D_TO_PTR_RSI_(VALUE) xchg dword ptr [rsi + VALUE], r15d
#define XCHG_R15D_TO_PTR_RBP_(VALUE) xchg dword ptr [rbp + VALUE], r15d
#define XCHG_R15D_TO_PTR_RSP_(VALUE) xchg dword ptr [rsp + VALUE], r15d
#define XCHG_R15D_TO_PTR_R8_(VALUE) xchg dword ptr [r8 + VALUE], r15d
#define XCHG_R15D_TO_PTR_R9_(VALUE) xchg dword ptr [r9 + VALUE], r15d
#define XCHG_R15D_TO_PTR_R10_(VALUE) xchg dword ptr [r10 + VALUE], r15d
#define XCHG_R15D_TO_PTR_R11_(VALUE) xchg dword ptr [r11 + VALUE], r15d
#define XCHG_R15D_TO_PTR_R12_(VALUE) xchg dword ptr [r12 + VALUE], r15d
#define XCHG_R15D_TO_PTR_R13_(VALUE) xchg dword ptr [r13 + VALUE], r15d
#define XCHG_R15D_TO_PTR_R14_(VALUE) xchg dword ptr [r14 + VALUE], r15d
#define XCHG_R15D_TO_PTR_R15_(VALUE) xchg dword ptr [r15 + VALUE], r15d
#define XCHG_R15D_TO_PTR_EAX_(VALUE) xchg dword ptr [eax + VALUE], r15d
#define XCHG_R15D_TO_PTR_EBX_(VALUE) xchg dword ptr [ebx + VALUE], r15d
#define XCHG_R15D_TO_PTR_ECX_(VALUE) xchg dword ptr [ecx + VALUE], r15d
#define XCHG_R15D_TO_PTR_EDX_(VALUE) xchg dword ptr [edx + VALUE], r15d
#define XCHG_R15D_TO_PTR_EDI_(VALUE) xchg dword ptr [edi + VALUE], r15d
#define XCHG_R15D_TO_PTR_ESI_(VALUE) xchg dword ptr [esi + VALUE], r15d
#define XCHG_R15D_TO_PTR_EBP_(VALUE) xchg dword ptr [ebp + VALUE], r15d
#define XCHG_R15D_TO_PTR_ESP_(VALUE) xchg dword ptr [esp + VALUE], r15d
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
