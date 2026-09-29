#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define XOR_EAX_FROM_PTR_(VALUE) xor eax, dword ptr [VALUE]
#define XOR_EBX_FROM_PTR_(VALUE) xor ebx, dword ptr [VALUE]
#define XOR_ECX_FROM_PTR_(VALUE) xor ecx, dword ptr [VALUE]
#define XOR_EDX_FROM_PTR_(VALUE) xor edx, dword ptr [VALUE]
#define XOR_EDI_FROM_PTR_(VALUE) xor edi, dword ptr [VALUE]
#define XOR_ESI_FROM_PTR_(VALUE) xor esi, dword ptr [VALUE]
#define XOR_EBP_FROM_PTR_(VALUE) xor ebp, dword ptr [VALUE]
#define XOR_ESP_FROM_PTR_(VALUE) xor esp, dword ptr [VALUE]

#define XOR_EAX_TO_PTR_(VALUE) xor dword ptr [VALUE], eax
#define XOR_EBX_TO_PTR_(VALUE) xor dword ptr [VALUE], ebx
#define XOR_ECX_TO_PTR_(VALUE) xor dword ptr [VALUE], ecx
#define XOR_EDX_TO_PTR_(VALUE) xor dword ptr [VALUE], edx
#define XOR_EDI_TO_PTR_(VALUE) xor dword ptr [VALUE], edi
#define XOR_ESI_TO_PTR_(VALUE) xor dword ptr [VALUE], esi
#define XOR_EBP_TO_PTR_(VALUE) xor dword ptr [VALUE], ebp
#define XOR_ESP_TO_PTR_(VALUE) xor dword ptr [VALUE], esp

#define XOR_EAX_FROM_PTR_EAX xor eax, dword ptr [eax]
#define XOR_EAX_FROM_PTR_EBX xor eax, dword ptr [ebx]
#define XOR_EAX_FROM_PTR_ECX xor eax, dword ptr [ecx]
#define XOR_EAX_FROM_PTR_EDX xor eax, dword ptr [edx]
#define XOR_EAX_FROM_PTR_EDI xor eax, dword ptr [edi]
#define XOR_EAX_FROM_PTR_ESI xor eax, dword ptr [esi]
#define XOR_EAX_FROM_PTR_EBP xor eax, dword ptr [ebp]
#define XOR_EAX_FROM_PTR_ESP xor eax, dword ptr [esp]
#define XOR_EAX_FROM_PTR_BX xor eax, dword ptr [bx]
#define XOR_EAX_FROM_PTR_BP xor eax, dword ptr [bp]
#define XOR_EAX_FROM_PTR_SI xor eax, dword ptr [si]
#define XOR_EAX_FROM_PTR_DI xor eax, dword ptr [di]

#define XOR_EBX_FROM_PTR_EAX xor ebx, dword ptr [eax]
#define XOR_EBX_FROM_PTR_EBX xor ebx, dword ptr [ebx]
#define XOR_EBX_FROM_PTR_ECX xor ebx, dword ptr [ecx]
#define XOR_EBX_FROM_PTR_EDX xor ebx, dword ptr [edx]
#define XOR_EBX_FROM_PTR_EDI xor ebx, dword ptr [edi]
#define XOR_EBX_FROM_PTR_ESI xor ebx, dword ptr [esi]
#define XOR_EBX_FROM_PTR_EBP xor ebx, dword ptr [ebp]
#define XOR_EBX_FROM_PTR_ESP xor ebx, dword ptr [esp]
#define XOR_EBX_FROM_PTR_BX xor ebx, dword ptr [bx]
#define XOR_EBX_FROM_PTR_BP xor ebx, dword ptr [bp]
#define XOR_EBX_FROM_PTR_SI xor ebx, dword ptr [si]
#define XOR_EBX_FROM_PTR_DI xor ebx, dword ptr [di]

#define XOR_ECX_FROM_PTR_EAX xor ecx, dword ptr [eax]
#define XOR_ECX_FROM_PTR_EBX xor ecx, dword ptr [ebx]
#define XOR_ECX_FROM_PTR_ECX xor ecx, dword ptr [ecx]
#define XOR_ECX_FROM_PTR_EDX xor ecx, dword ptr [edx]
#define XOR_ECX_FROM_PTR_EDI xor ecx, dword ptr [edi]
#define XOR_ECX_FROM_PTR_ESI xor ecx, dword ptr [esi]
#define XOR_ECX_FROM_PTR_EBP xor ecx, dword ptr [ebp]
#define XOR_ECX_FROM_PTR_ESP xor ecx, dword ptr [esp]
#define XOR_ECX_FROM_PTR_BX xor ecx, dword ptr [bx]
#define XOR_ECX_FROM_PTR_BP xor ecx, dword ptr [bp]
#define XOR_ECX_FROM_PTR_SI xor ecx, dword ptr [si]
#define XOR_ECX_FROM_PTR_DI xor ecx, dword ptr [di]

#define XOR_EDX_FROM_PTR_EAX xor edx, dword ptr [eax]
#define XOR_EDX_FROM_PTR_EBX xor edx, dword ptr [ebx]
#define XOR_EDX_FROM_PTR_ECX xor edx, dword ptr [ecx]
#define XOR_EDX_FROM_PTR_EDX xor edx, dword ptr [edx]
#define XOR_EDX_FROM_PTR_EDI xor edx, dword ptr [edi]
#define XOR_EDX_FROM_PTR_ESI xor edx, dword ptr [esi]
#define XOR_EDX_FROM_PTR_EBP xor edx, dword ptr [ebp]
#define XOR_EDX_FROM_PTR_ESP xor edx, dword ptr [esp]
#define XOR_EDX_FROM_PTR_BX xor edx, dword ptr [bx]
#define XOR_EDX_FROM_PTR_BP xor edx, dword ptr [bp]
#define XOR_EDX_FROM_PTR_SI xor edx, dword ptr [si]
#define XOR_EDX_FROM_PTR_DI xor edx, dword ptr [di]

#define XOR_EDI_FROM_PTR_EAX xor edi, dword ptr [eax]
#define XOR_EDI_FROM_PTR_EBX xor edi, dword ptr [ebx]
#define XOR_EDI_FROM_PTR_ECX xor edi, dword ptr [ecx]
#define XOR_EDI_FROM_PTR_EDX xor edi, dword ptr [edx]
#define XOR_EDI_FROM_PTR_EDI xor edi, dword ptr [edi]
#define XOR_EDI_FROM_PTR_ESI xor edi, dword ptr [esi]
#define XOR_EDI_FROM_PTR_EBP xor edi, dword ptr [ebp]
#define XOR_EDI_FROM_PTR_ESP xor edi, dword ptr [esp]
#define XOR_EDI_FROM_PTR_BX xor edi, dword ptr [bx]
#define XOR_EDI_FROM_PTR_BP xor edi, dword ptr [bp]
#define XOR_EDI_FROM_PTR_SI xor edi, dword ptr [si]
#define XOR_EDI_FROM_PTR_DI xor edi, dword ptr [di]

#define XOR_ESI_FROM_PTR_EAX xor esi, dword ptr [eax]
#define XOR_ESI_FROM_PTR_EBX xor esi, dword ptr [ebx]
#define XOR_ESI_FROM_PTR_ECX xor esi, dword ptr [ecx]
#define XOR_ESI_FROM_PTR_EDX xor esi, dword ptr [edx]
#define XOR_ESI_FROM_PTR_EDI xor esi, dword ptr [edi]
#define XOR_ESI_FROM_PTR_ESI xor esi, dword ptr [esi]
#define XOR_ESI_FROM_PTR_EBP xor esi, dword ptr [ebp]
#define XOR_ESI_FROM_PTR_ESP xor esi, dword ptr [esp]
#define XOR_ESI_FROM_PTR_BX xor esi, dword ptr [bx]
#define XOR_ESI_FROM_PTR_BP xor esi, dword ptr [bp]
#define XOR_ESI_FROM_PTR_SI xor esi, dword ptr [si]
#define XOR_ESI_FROM_PTR_DI xor esi, dword ptr [di]

#define XOR_EBP_FROM_PTR_EAX xor ebp, dword ptr [eax]
#define XOR_EBP_FROM_PTR_EBX xor ebp, dword ptr [ebx]
#define XOR_EBP_FROM_PTR_ECX xor ebp, dword ptr [ecx]
#define XOR_EBP_FROM_PTR_EDX xor ebp, dword ptr [edx]
#define XOR_EBP_FROM_PTR_EDI xor ebp, dword ptr [edi]
#define XOR_EBP_FROM_PTR_ESI xor ebp, dword ptr [esi]
#define XOR_EBP_FROM_PTR_EBP xor ebp, dword ptr [ebp]
#define XOR_EBP_FROM_PTR_ESP xor ebp, dword ptr [esp]
#define XOR_EBP_FROM_PTR_BX xor ebp, dword ptr [bx]
#define XOR_EBP_FROM_PTR_BP xor ebp, dword ptr [bp]
#define XOR_EBP_FROM_PTR_SI xor ebp, dword ptr [si]
#define XOR_EBP_FROM_PTR_DI xor ebp, dword ptr [di]

#define XOR_ESP_FROM_PTR_EAX xor esp, dword ptr [eax]
#define XOR_ESP_FROM_PTR_EBX xor esp, dword ptr [ebx]
#define XOR_ESP_FROM_PTR_ECX xor esp, dword ptr [ecx]
#define XOR_ESP_FROM_PTR_EDX xor esp, dword ptr [edx]
#define XOR_ESP_FROM_PTR_EDI xor esp, dword ptr [edi]
#define XOR_ESP_FROM_PTR_ESI xor esp, dword ptr [esi]
#define XOR_ESP_FROM_PTR_EBP xor esp, dword ptr [ebp]
#define XOR_ESP_FROM_PTR_ESP xor esp, dword ptr [esp]
#define XOR_ESP_FROM_PTR_BX xor esp, dword ptr [bx]
#define XOR_ESP_FROM_PTR_BP xor esp, dword ptr [bp]
#define XOR_ESP_FROM_PTR_SI xor esp, dword ptr [si]
#define XOR_ESP_FROM_PTR_DI xor esp, dword ptr [di]

#define XOR_EAX_TO_PTR_EAX xor dword ptr [eax], eax
#define XOR_EAX_TO_PTR_EBX xor dword ptr [ebx], eax
#define XOR_EAX_TO_PTR_ECX xor dword ptr [ecx], eax
#define XOR_EAX_TO_PTR_EDX xor dword ptr [edx], eax
#define XOR_EAX_TO_PTR_EDI xor dword ptr [edi], eax
#define XOR_EAX_TO_PTR_ESI xor dword ptr [esi], eax
#define XOR_EAX_TO_PTR_EBP xor dword ptr [ebp], eax
#define XOR_EAX_TO_PTR_ESP xor dword ptr [esp], eax
#define XOR_EAX_TO_PTR_BX xor dword ptr [bx], eax
#define XOR_EAX_TO_PTR_BP xor dword ptr [bp], eax
#define XOR_EAX_TO_PTR_SI xor dword ptr [si], eax
#define XOR_EAX_TO_PTR_DI xor dword ptr [di], eax

#define XOR_EBX_TO_PTR_EAX xor dword ptr [eax], ebx
#define XOR_EBX_TO_PTR_EBX xor dword ptr [ebx], ebx
#define XOR_EBX_TO_PTR_ECX xor dword ptr [ecx], ebx
#define XOR_EBX_TO_PTR_EDX xor dword ptr [edx], ebx
#define XOR_EBX_TO_PTR_EDI xor dword ptr [edi], ebx
#define XOR_EBX_TO_PTR_ESI xor dword ptr [esi], ebx
#define XOR_EBX_TO_PTR_EBP xor dword ptr [ebp], ebx
#define XOR_EBX_TO_PTR_ESP xor dword ptr [esp], ebx
#define XOR_EBX_TO_PTR_BX xor dword ptr [bx], ebx
#define XOR_EBX_TO_PTR_BP xor dword ptr [bp], ebx
#define XOR_EBX_TO_PTR_SI xor dword ptr [si], ebx
#define XOR_EBX_TO_PTR_DI xor dword ptr [di], ebx

#define XOR_ECX_TO_PTR_EAX xor dword ptr [eax], ecx
#define XOR_ECX_TO_PTR_EBX xor dword ptr [ebx], ecx
#define XOR_ECX_TO_PTR_ECX xor dword ptr [ecx], ecx
#define XOR_ECX_TO_PTR_EDX xor dword ptr [edx], ecx
#define XOR_ECX_TO_PTR_EDI xor dword ptr [edi], ecx
#define XOR_ECX_TO_PTR_ESI xor dword ptr [esi], ecx
#define XOR_ECX_TO_PTR_EBP xor dword ptr [ebp], ecx
#define XOR_ECX_TO_PTR_ESP xor dword ptr [esp], ecx
#define XOR_ECX_TO_PTR_BX xor dword ptr [bx], ecx
#define XOR_ECX_TO_PTR_BP xor dword ptr [bp], ecx
#define XOR_ECX_TO_PTR_SI xor dword ptr [si], ecx
#define XOR_ECX_TO_PTR_DI xor dword ptr [di], ecx

#define XOR_EDX_TO_PTR_EAX xor dword ptr [eax], edx
#define XOR_EDX_TO_PTR_EBX xor dword ptr [ebx], edx
#define XOR_EDX_TO_PTR_ECX xor dword ptr [ecx], edx
#define XOR_EDX_TO_PTR_EDX xor dword ptr [edx], edx
#define XOR_EDX_TO_PTR_EDI xor dword ptr [edi], edx
#define XOR_EDX_TO_PTR_ESI xor dword ptr [esi], edx
#define XOR_EDX_TO_PTR_EBP xor dword ptr [ebp], edx
#define XOR_EDX_TO_PTR_ESP xor dword ptr [esp], edx
#define XOR_EDX_TO_PTR_BX xor dword ptr [bx], edx
#define XOR_EDX_TO_PTR_BP xor dword ptr [bp], edx
#define XOR_EDX_TO_PTR_SI xor dword ptr [si], edx
#define XOR_EDX_TO_PTR_DI xor dword ptr [di], edx

#define XOR_EDI_TO_PTR_EAX xor dword ptr [eax], edi
#define XOR_EDI_TO_PTR_EBX xor dword ptr [ebx], edi
#define XOR_EDI_TO_PTR_ECX xor dword ptr [ecx], edi
#define XOR_EDI_TO_PTR_EDX xor dword ptr [edx], edi
#define XOR_EDI_TO_PTR_EDI xor dword ptr [edi], edi
#define XOR_EDI_TO_PTR_ESI xor dword ptr [esi], edi
#define XOR_EDI_TO_PTR_EBP xor dword ptr [ebp], edi
#define XOR_EDI_TO_PTR_ESP xor dword ptr [esp], edi
#define XOR_EDI_TO_PTR_BX xor dword ptr [bx], edi
#define XOR_EDI_TO_PTR_BP xor dword ptr [bp], edi
#define XOR_EDI_TO_PTR_SI xor dword ptr [si], edi
#define XOR_EDI_TO_PTR_DI xor dword ptr [di], edi

#define XOR_ESI_TO_PTR_EAX xor dword ptr [eax], esi
#define XOR_ESI_TO_PTR_EBX xor dword ptr [ebx], esi
#define XOR_ESI_TO_PTR_ECX xor dword ptr [ecx], esi
#define XOR_ESI_TO_PTR_EDX xor dword ptr [edx], esi
#define XOR_ESI_TO_PTR_EDI xor dword ptr [edi], esi
#define XOR_ESI_TO_PTR_ESI xor dword ptr [esi], esi
#define XOR_ESI_TO_PTR_EBP xor dword ptr [ebp], esi
#define XOR_ESI_TO_PTR_ESP xor dword ptr [esp], esi
#define XOR_ESI_TO_PTR_BX xor dword ptr [bx], esi
#define XOR_ESI_TO_PTR_BP xor dword ptr [bp], esi
#define XOR_ESI_TO_PTR_SI xor dword ptr [si], esi
#define XOR_ESI_TO_PTR_DI xor dword ptr [di], esi

#define XOR_EBP_TO_PTR_EAX xor dword ptr [eax], ebp
#define XOR_EBP_TO_PTR_EBX xor dword ptr [ebx], ebp
#define XOR_EBP_TO_PTR_ECX xor dword ptr [ecx], ebp
#define XOR_EBP_TO_PTR_EDX xor dword ptr [edx], ebp
#define XOR_EBP_TO_PTR_EDI xor dword ptr [edi], ebp
#define XOR_EBP_TO_PTR_ESI xor dword ptr [esi], ebp
#define XOR_EBP_TO_PTR_EBP xor dword ptr [ebp], ebp
#define XOR_EBP_TO_PTR_ESP xor dword ptr [esp], ebp
#define XOR_EBP_TO_PTR_BX xor dword ptr [bx], ebp
#define XOR_EBP_TO_PTR_BP xor dword ptr [bp], ebp
#define XOR_EBP_TO_PTR_SI xor dword ptr [si], ebp
#define XOR_EBP_TO_PTR_DI xor dword ptr [di], ebp

#define XOR_ESP_TO_PTR_EAX xor dword ptr [eax], esp
#define XOR_ESP_TO_PTR_EBX xor dword ptr [ebx], esp
#define XOR_ESP_TO_PTR_ECX xor dword ptr [ecx], esp
#define XOR_ESP_TO_PTR_EDX xor dword ptr [edx], esp
#define XOR_ESP_TO_PTR_EDI xor dword ptr [edi], esp
#define XOR_ESP_TO_PTR_ESI xor dword ptr [esi], esp
#define XOR_ESP_TO_PTR_EBP xor dword ptr [ebp], esp
#define XOR_ESP_TO_PTR_ESP xor dword ptr [esp], esp
#define XOR_ESP_TO_PTR_BX xor dword ptr [bx], esp
#define XOR_ESP_TO_PTR_BP xor dword ptr [bp], esp
#define XOR_ESP_TO_PTR_SI xor dword ptr [si], esp
#define XOR_ESP_TO_PTR_DI xor dword ptr [di], esp

#define XOR_EAX_FROM_PTR_EAX_(VALUE) xor eax, dword ptr [eax + VALUE]
#define XOR_EAX_FROM_PTR_EBX_(VALUE) xor eax, dword ptr [ebx + VALUE]
#define XOR_EAX_FROM_PTR_ECX_(VALUE) xor eax, dword ptr [ecx + VALUE]
#define XOR_EAX_FROM_PTR_EDX_(VALUE) xor eax, dword ptr [edx + VALUE]
#define XOR_EAX_FROM_PTR_EDI_(VALUE) xor eax, dword ptr [edi + VALUE]
#define XOR_EAX_FROM_PTR_ESI_(VALUE) xor eax, dword ptr [esi + VALUE]
#define XOR_EAX_FROM_PTR_EBP_(VALUE) xor eax, dword ptr [ebp + VALUE]
#define XOR_EAX_FROM_PTR_ESP_(VALUE) xor eax, dword ptr [esp + VALUE]
#define XOR_EAX_FROM_PTR_BX_(VALUE) xor eax, dword ptr [bx + VALUE]
#define XOR_EAX_FROM_PTR_BP_(VALUE) xor eax, dword ptr [bp + VALUE]
#define XOR_EAX_FROM_PTR_SI_(VALUE) xor eax, dword ptr [si + VALUE]
#define XOR_EAX_FROM_PTR_DI_(VALUE) xor eax, dword ptr [di + VALUE]

#define XOR_EBX_FROM_PTR_EAX_(VALUE) xor ebx, dword ptr [eax + VALUE]
#define XOR_EBX_FROM_PTR_EBX_(VALUE) xor ebx, dword ptr [ebx + VALUE]
#define XOR_EBX_FROM_PTR_ECX_(VALUE) xor ebx, dword ptr [ecx + VALUE]
#define XOR_EBX_FROM_PTR_EDX_(VALUE) xor ebx, dword ptr [edx + VALUE]
#define XOR_EBX_FROM_PTR_EDI_(VALUE) xor ebx, dword ptr [edi + VALUE]
#define XOR_EBX_FROM_PTR_ESI_(VALUE) xor ebx, dword ptr [esi + VALUE]
#define XOR_EBX_FROM_PTR_EBP_(VALUE) xor ebx, dword ptr [ebp + VALUE]
#define XOR_EBX_FROM_PTR_ESP_(VALUE) xor ebx, dword ptr [esp + VALUE]
#define XOR_EBX_FROM_PTR_BX_(VALUE) xor ebx, dword ptr [bx + VALUE]
#define XOR_EBX_FROM_PTR_BP_(VALUE) xor ebx, dword ptr [bp + VALUE]
#define XOR_EBX_FROM_PTR_SI_(VALUE) xor ebx, dword ptr [si + VALUE]
#define XOR_EBX_FROM_PTR_DI_(VALUE) xor ebx, dword ptr [di + VALUE]

#define XOR_ECX_FROM_PTR_EAX_(VALUE) xor ecx, dword ptr [eax + VALUE]
#define XOR_ECX_FROM_PTR_EBX_(VALUE) xor ecx, dword ptr [ebx + VALUE]
#define XOR_ECX_FROM_PTR_ECX_(VALUE) xor ecx, dword ptr [ecx + VALUE]
#define XOR_ECX_FROM_PTR_EDX_(VALUE) xor ecx, dword ptr [edx + VALUE]
#define XOR_ECX_FROM_PTR_EDI_(VALUE) xor ecx, dword ptr [edi + VALUE]
#define XOR_ECX_FROM_PTR_ESI_(VALUE) xor ecx, dword ptr [esi + VALUE]
#define XOR_ECX_FROM_PTR_EBP_(VALUE) xor ecx, dword ptr [ebp + VALUE]
#define XOR_ECX_FROM_PTR_ESP_(VALUE) xor ecx, dword ptr [esp + VALUE]
#define XOR_ECX_FROM_PTR_BX_(VALUE) xor ecx, dword ptr [bx + VALUE]
#define XOR_ECX_FROM_PTR_BP_(VALUE) xor ecx, dword ptr [bp + VALUE]
#define XOR_ECX_FROM_PTR_SI_(VALUE) xor ecx, dword ptr [si + VALUE]
#define XOR_ECX_FROM_PTR_DI_(VALUE) xor ecx, dword ptr [di + VALUE]

#define XOR_EDX_FROM_PTR_EAX_(VALUE) xor edx, dword ptr [eax + VALUE]
#define XOR_EDX_FROM_PTR_EBX_(VALUE) xor edx, dword ptr [ebx + VALUE]
#define XOR_EDX_FROM_PTR_ECX_(VALUE) xor edx, dword ptr [ecx + VALUE]
#define XOR_EDX_FROM_PTR_EDX_(VALUE) xor edx, dword ptr [edx + VALUE]
#define XOR_EDX_FROM_PTR_EDI_(VALUE) xor edx, dword ptr [edi + VALUE]
#define XOR_EDX_FROM_PTR_ESI_(VALUE) xor edx, dword ptr [esi + VALUE]
#define XOR_EDX_FROM_PTR_EBP_(VALUE) xor edx, dword ptr [ebp + VALUE]
#define XOR_EDX_FROM_PTR_ESP_(VALUE) xor edx, dword ptr [esp + VALUE]
#define XOR_EDX_FROM_PTR_BX_(VALUE) xor edx, dword ptr [bx + VALUE]
#define XOR_EDX_FROM_PTR_BP_(VALUE) xor edx, dword ptr [bp + VALUE]
#define XOR_EDX_FROM_PTR_SI_(VALUE) xor edx, dword ptr [si + VALUE]
#define XOR_EDX_FROM_PTR_DI_(VALUE) xor edx, dword ptr [di + VALUE]

#define XOR_EDI_FROM_PTR_EAX_(VALUE) xor edi, dword ptr [eax + VALUE]
#define XOR_EDI_FROM_PTR_EBX_(VALUE) xor edi, dword ptr [ebx + VALUE]
#define XOR_EDI_FROM_PTR_ECX_(VALUE) xor edi, dword ptr [ecx + VALUE]
#define XOR_EDI_FROM_PTR_EDX_(VALUE) xor edi, dword ptr [edx + VALUE]
#define XOR_EDI_FROM_PTR_EDI_(VALUE) xor edi, dword ptr [edi + VALUE]
#define XOR_EDI_FROM_PTR_ESI_(VALUE) xor edi, dword ptr [esi + VALUE]
#define XOR_EDI_FROM_PTR_EBP_(VALUE) xor edi, dword ptr [ebp + VALUE]
#define XOR_EDI_FROM_PTR_ESP_(VALUE) xor edi, dword ptr [esp + VALUE]
#define XOR_EDI_FROM_PTR_BX_(VALUE) xor edi, dword ptr [bx + VALUE]
#define XOR_EDI_FROM_PTR_BP_(VALUE) xor edi, dword ptr [bp + VALUE]
#define XOR_EDI_FROM_PTR_SI_(VALUE) xor edi, dword ptr [si + VALUE]
#define XOR_EDI_FROM_PTR_DI_(VALUE) xor edi, dword ptr [di + VALUE]

#define XOR_ESI_FROM_PTR_EAX_(VALUE) xor esi, dword ptr [eax + VALUE]
#define XOR_ESI_FROM_PTR_EBX_(VALUE) xor esi, dword ptr [ebx + VALUE]
#define XOR_ESI_FROM_PTR_ECX_(VALUE) xor esi, dword ptr [ecx + VALUE]
#define XOR_ESI_FROM_PTR_EDX_(VALUE) xor esi, dword ptr [edx + VALUE]
#define XOR_ESI_FROM_PTR_EDI_(VALUE) xor esi, dword ptr [edi + VALUE]
#define XOR_ESI_FROM_PTR_ESI_(VALUE) xor esi, dword ptr [esi + VALUE]
#define XOR_ESI_FROM_PTR_EBP_(VALUE) xor esi, dword ptr [ebp + VALUE]
#define XOR_ESI_FROM_PTR_ESP_(VALUE) xor esi, dword ptr [esp + VALUE]
#define XOR_ESI_FROM_PTR_BX_(VALUE) xor esi, dword ptr [bx + VALUE]
#define XOR_ESI_FROM_PTR_BP_(VALUE) xor esi, dword ptr [bp + VALUE]
#define XOR_ESI_FROM_PTR_SI_(VALUE) xor esi, dword ptr [si + VALUE]
#define XOR_ESI_FROM_PTR_DI_(VALUE) xor esi, dword ptr [di + VALUE]

#define XOR_EBP_FROM_PTR_EAX_(VALUE) xor ebp, dword ptr [eax + VALUE]
#define XOR_EBP_FROM_PTR_EBX_(VALUE) xor ebp, dword ptr [ebx + VALUE]
#define XOR_EBP_FROM_PTR_ECX_(VALUE) xor ebp, dword ptr [ecx + VALUE]
#define XOR_EBP_FROM_PTR_EDX_(VALUE) xor ebp, dword ptr [edx + VALUE]
#define XOR_EBP_FROM_PTR_EDI_(VALUE) xor ebp, dword ptr [edi + VALUE]
#define XOR_EBP_FROM_PTR_ESI_(VALUE) xor ebp, dword ptr [esi + VALUE]
#define XOR_EBP_FROM_PTR_EBP_(VALUE) xor ebp, dword ptr [ebp + VALUE]
#define XOR_EBP_FROM_PTR_ESP_(VALUE) xor ebp, dword ptr [esp + VALUE]
#define XOR_EBP_FROM_PTR_BX_(VALUE) xor ebp, dword ptr [bx + VALUE]
#define XOR_EBP_FROM_PTR_BP_(VALUE) xor ebp, dword ptr [bp + VALUE]
#define XOR_EBP_FROM_PTR_SI_(VALUE) xor ebp, dword ptr [si + VALUE]
#define XOR_EBP_FROM_PTR_DI_(VALUE) xor ebp, dword ptr [di + VALUE]

#define XOR_ESP_FROM_PTR_EAX_(VALUE) xor esp, dword ptr [eax + VALUE]
#define XOR_ESP_FROM_PTR_EBX_(VALUE) xor esp, dword ptr [ebx + VALUE]
#define XOR_ESP_FROM_PTR_ECX_(VALUE) xor esp, dword ptr [ecx + VALUE]
#define XOR_ESP_FROM_PTR_EDX_(VALUE) xor esp, dword ptr [edx + VALUE]
#define XOR_ESP_FROM_PTR_EDI_(VALUE) xor esp, dword ptr [edi + VALUE]
#define XOR_ESP_FROM_PTR_ESI_(VALUE) xor esp, dword ptr [esi + VALUE]
#define XOR_ESP_FROM_PTR_EBP_(VALUE) xor esp, dword ptr [ebp + VALUE]
#define XOR_ESP_FROM_PTR_ESP_(VALUE) xor esp, dword ptr [esp + VALUE]
#define XOR_ESP_FROM_PTR_BX_(VALUE) xor esp, dword ptr [bx + VALUE]
#define XOR_ESP_FROM_PTR_BP_(VALUE) xor esp, dword ptr [bp + VALUE]
#define XOR_ESP_FROM_PTR_SI_(VALUE) xor esp, dword ptr [si + VALUE]
#define XOR_ESP_FROM_PTR_DI_(VALUE) xor esp, dword ptr [di + VALUE]

#define XOR_EAX_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], eax
#define XOR_EAX_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], eax
#define XOR_EAX_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], eax
#define XOR_EAX_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], eax
#define XOR_EAX_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], eax
#define XOR_EAX_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], eax
#define XOR_EAX_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], eax
#define XOR_EAX_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], eax
#define XOR_EAX_TO_PTR_BX_(VALUE) xor dword ptr [bx + VALUE], eax
#define XOR_EAX_TO_PTR_BP_(VALUE) xor dword ptr [bp + VALUE], eax
#define XOR_EAX_TO_PTR_SI_(VALUE) xor dword ptr [si + VALUE], eax
#define XOR_EAX_TO_PTR_DI_(VALUE) xor dword ptr [di + VALUE], eax

#define XOR_EBX_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], ebx
#define XOR_EBX_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], ebx
#define XOR_EBX_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], ebx
#define XOR_EBX_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], ebx
#define XOR_EBX_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], ebx
#define XOR_EBX_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], ebx
#define XOR_EBX_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], ebx
#define XOR_EBX_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], ebx
#define XOR_EBX_TO_PTR_BX_(VALUE) xor dword ptr [bx + VALUE], ebx
#define XOR_EBX_TO_PTR_BP_(VALUE) xor dword ptr [bp + VALUE], ebx
#define XOR_EBX_TO_PTR_SI_(VALUE) xor dword ptr [si + VALUE], ebx
#define XOR_EBX_TO_PTR_DI_(VALUE) xor dword ptr [di + VALUE], ebx

#define XOR_ECX_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], ecx
#define XOR_ECX_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], ecx
#define XOR_ECX_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], ecx
#define XOR_ECX_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], ecx
#define XOR_ECX_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], ecx
#define XOR_ECX_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], ecx
#define XOR_ECX_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], ecx
#define XOR_ECX_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], ecx
#define XOR_ECX_TO_PTR_BX_(VALUE) xor dword ptr [bx + VALUE], ecx
#define XOR_ECX_TO_PTR_BP_(VALUE) xor dword ptr [bp + VALUE], ecx
#define XOR_ECX_TO_PTR_SI_(VALUE) xor dword ptr [si + VALUE], ecx
#define XOR_ECX_TO_PTR_DI_(VALUE) xor dword ptr [di + VALUE], ecx

#define XOR_EDX_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], edx
#define XOR_EDX_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], edx
#define XOR_EDX_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], edx
#define XOR_EDX_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], edx
#define XOR_EDX_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], edx
#define XOR_EDX_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], edx
#define XOR_EDX_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], edx
#define XOR_EDX_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], edx
#define XOR_EDX_TO_PTR_BX_(VALUE) xor dword ptr [bx + VALUE], edx
#define XOR_EDX_TO_PTR_BP_(VALUE) xor dword ptr [bp + VALUE], edx
#define XOR_EDX_TO_PTR_SI_(VALUE) xor dword ptr [si + VALUE], edx
#define XOR_EDX_TO_PTR_DI_(VALUE) xor dword ptr [di + VALUE], edx

#define XOR_EDI_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], edi
#define XOR_EDI_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], edi
#define XOR_EDI_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], edi
#define XOR_EDI_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], edi
#define XOR_EDI_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], edi
#define XOR_EDI_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], edi
#define XOR_EDI_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], edi
#define XOR_EDI_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], edi
#define XOR_EDI_TO_PTR_BX_(VALUE) xor dword ptr [bx + VALUE], edi
#define XOR_EDI_TO_PTR_BP_(VALUE) xor dword ptr [bp + VALUE], edi
#define XOR_EDI_TO_PTR_SI_(VALUE) xor dword ptr [si + VALUE], edi
#define XOR_EDI_TO_PTR_DI_(VALUE) xor dword ptr [di + VALUE], edi

#define XOR_ESI_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], esi
#define XOR_ESI_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], esi
#define XOR_ESI_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], esi
#define XOR_ESI_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], esi
#define XOR_ESI_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], esi
#define XOR_ESI_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], esi
#define XOR_ESI_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], esi
#define XOR_ESI_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], esi
#define XOR_ESI_TO_PTR_BX_(VALUE) xor dword ptr [bx + VALUE], esi
#define XOR_ESI_TO_PTR_BP_(VALUE) xor dword ptr [bp + VALUE], esi
#define XOR_ESI_TO_PTR_SI_(VALUE) xor dword ptr [si + VALUE], esi
#define XOR_ESI_TO_PTR_DI_(VALUE) xor dword ptr [di + VALUE], esi

#define XOR_EBP_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], ebp
#define XOR_EBP_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], ebp
#define XOR_EBP_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], ebp
#define XOR_EBP_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], ebp
#define XOR_EBP_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], ebp
#define XOR_EBP_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], ebp
#define XOR_EBP_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], ebp
#define XOR_EBP_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], ebp
#define XOR_EBP_TO_PTR_BX_(VALUE) xor dword ptr [bx + VALUE], ebp
#define XOR_EBP_TO_PTR_BP_(VALUE) xor dword ptr [bp + VALUE], ebp
#define XOR_EBP_TO_PTR_SI_(VALUE) xor dword ptr [si + VALUE], ebp
#define XOR_EBP_TO_PTR_DI_(VALUE) xor dword ptr [di + VALUE], ebp

#define XOR_ESP_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], esp
#define XOR_ESP_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], esp
#define XOR_ESP_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], esp
#define XOR_ESP_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], esp
#define XOR_ESP_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], esp
#define XOR_ESP_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], esp
#define XOR_ESP_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], esp
#define XOR_ESP_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], esp
#define XOR_ESP_TO_PTR_BX_(VALUE) xor dword ptr [bx + VALUE], esp
#define XOR_ESP_TO_PTR_BP_(VALUE) xor dword ptr [bp + VALUE], esp
#define XOR_ESP_TO_PTR_SI_(VALUE) xor dword ptr [si + VALUE], esp
#define XOR_ESP_TO_PTR_DI_(VALUE) xor dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_EAX_FROM_PTR_(VALUE) xor eax, dword ptr [VALUE]
#define XOR_EBX_FROM_PTR_(VALUE) xor ebx, dword ptr [VALUE]
#define XOR_ECX_FROM_PTR_(VALUE) xor ecx, dword ptr [VALUE]
#define XOR_EDX_FROM_PTR_(VALUE) xor edx, dword ptr [VALUE]
#define XOR_EDI_FROM_PTR_(VALUE) xor edi, dword ptr [VALUE]
#define XOR_ESI_FROM_PTR_(VALUE) xor esi, dword ptr [VALUE]
#define XOR_EBP_FROM_PTR_(VALUE) xor ebp, dword ptr [VALUE]
#define XOR_ESP_FROM_PTR_(VALUE) xor esp, dword ptr [VALUE]
#define XOR_R8D_FROM_PTR_(VALUE) xor r8d, dword ptr [VALUE]
#define XOR_R9D_FROM_PTR_(VALUE) xor r9d, dword ptr [VALUE]
#define XOR_R10D_FROM_PTR_(VALUE) xor r10d, dword ptr [VALUE]
#define XOR_R11D_FROM_PTR_(VALUE) xor r11d, dword ptr [VALUE]
#define XOR_R12D_FROM_PTR_(VALUE) xor r12d, dword ptr [VALUE]
#define XOR_R13D_FROM_PTR_(VALUE) xor r13d, dword ptr [VALUE]
#define XOR_R14D_FROM_PTR_(VALUE) xor r14d, dword ptr [VALUE]
#define XOR_R15D_FROM_PTR_(VALUE) xor r15d, dword ptr [VALUE]

#define XOR_EAX_TO_PTR_(VALUE) xor dword ptr [VALUE], eax
#define XOR_EBX_TO_PTR_(VALUE) xor dword ptr [VALUE], ebx
#define XOR_ECX_TO_PTR_(VALUE) xor dword ptr [VALUE], ecx
#define XOR_EDX_TO_PTR_(VALUE) xor dword ptr [VALUE], edx
#define XOR_EDI_TO_PTR_(VALUE) xor dword ptr [VALUE], edi
#define XOR_ESI_TO_PTR_(VALUE) xor dword ptr [VALUE], esi
#define XOR_EBP_TO_PTR_(VALUE) xor dword ptr [VALUE], ebp
#define XOR_ESP_TO_PTR_(VALUE) xor dword ptr [VALUE], esp
#define XOR_R8D_TO_PTR_(VALUE) xor dword ptr [VALUE], r8d
#define XOR_R9D_TO_PTR_(VALUE) xor dword ptr [VALUE], r9d
#define XOR_R10D_TO_PTR_(VALUE) xor dword ptr [VALUE], r10d
#define XOR_R11D_TO_PTR_(VALUE) xor dword ptr [VALUE], r11d
#define XOR_R12D_TO_PTR_(VALUE) xor dword ptr [VALUE], r12d
#define XOR_R13D_TO_PTR_(VALUE) xor dword ptr [VALUE], r13d
#define XOR_R14D_TO_PTR_(VALUE) xor dword ptr [VALUE], r14d
#define XOR_R15D_TO_PTR_(VALUE) xor dword ptr [VALUE], r15d

#define XOR_EAX_FROM_PTR_RAX xor eax, dword ptr [rax]
#define XOR_EAX_FROM_PTR_RBX xor eax, dword ptr [rbx]
#define XOR_EAX_FROM_PTR_RCX xor eax, dword ptr [rcx]
#define XOR_EAX_FROM_PTR_RDX xor eax, dword ptr [rdx]
#define XOR_EAX_FROM_PTR_RDI xor eax, dword ptr [rdi]
#define XOR_EAX_FROM_PTR_RSI xor eax, dword ptr [rsi]
#define XOR_EAX_FROM_PTR_RBP xor eax, dword ptr [rbp]
#define XOR_EAX_FROM_PTR_RSP xor eax, dword ptr [rsp]
#define XOR_EAX_FROM_PTR_R8 xor eax, dword ptr [r8]
#define XOR_EAX_FROM_PTR_R9 xor eax, dword ptr [r9]
#define XOR_EAX_FROM_PTR_R10 xor eax, dword ptr [r10]
#define XOR_EAX_FROM_PTR_R11 xor eax, dword ptr [r11]
#define XOR_EAX_FROM_PTR_R12 xor eax, dword ptr [r12]
#define XOR_EAX_FROM_PTR_R13 xor eax, dword ptr [r13]
#define XOR_EAX_FROM_PTR_R14 xor eax, dword ptr [r14]
#define XOR_EAX_FROM_PTR_R15 xor eax, dword ptr [r15]
#define XOR_EAX_FROM_PTR_EAX xor eax, dword ptr [eax]
#define XOR_EAX_FROM_PTR_EBX xor eax, dword ptr [ebx]
#define XOR_EAX_FROM_PTR_ECX xor eax, dword ptr [ecx]
#define XOR_EAX_FROM_PTR_EDX xor eax, dword ptr [edx]
#define XOR_EAX_FROM_PTR_EDI xor eax, dword ptr [edi]
#define XOR_EAX_FROM_PTR_ESI xor eax, dword ptr [esi]
#define XOR_EAX_FROM_PTR_EBP xor eax, dword ptr [ebp]
#define XOR_EAX_FROM_PTR_ESP xor eax, dword ptr [esp]

#define XOR_EBX_FROM_PTR_RAX xor ebx, dword ptr [rax]
#define XOR_EBX_FROM_PTR_RBX xor ebx, dword ptr [rbx]
#define XOR_EBX_FROM_PTR_RCX xor ebx, dword ptr [rcx]
#define XOR_EBX_FROM_PTR_RDX xor ebx, dword ptr [rdx]
#define XOR_EBX_FROM_PTR_RDI xor ebx, dword ptr [rdi]
#define XOR_EBX_FROM_PTR_RSI xor ebx, dword ptr [rsi]
#define XOR_EBX_FROM_PTR_RBP xor ebx, dword ptr [rbp]
#define XOR_EBX_FROM_PTR_RSP xor ebx, dword ptr [rsp]
#define XOR_EBX_FROM_PTR_R8 xor ebx, dword ptr [r8]
#define XOR_EBX_FROM_PTR_R9 xor ebx, dword ptr [r9]
#define XOR_EBX_FROM_PTR_R10 xor ebx, dword ptr [r10]
#define XOR_EBX_FROM_PTR_R11 xor ebx, dword ptr [r11]
#define XOR_EBX_FROM_PTR_R12 xor ebx, dword ptr [r12]
#define XOR_EBX_FROM_PTR_R13 xor ebx, dword ptr [r13]
#define XOR_EBX_FROM_PTR_R14 xor ebx, dword ptr [r14]
#define XOR_EBX_FROM_PTR_R15 xor ebx, dword ptr [r15]
#define XOR_EBX_FROM_PTR_EAX xor ebx, dword ptr [eax]
#define XOR_EBX_FROM_PTR_EBX xor ebx, dword ptr [ebx]
#define XOR_EBX_FROM_PTR_ECX xor ebx, dword ptr [ecx]
#define XOR_EBX_FROM_PTR_EDX xor ebx, dword ptr [edx]
#define XOR_EBX_FROM_PTR_EDI xor ebx, dword ptr [edi]
#define XOR_EBX_FROM_PTR_ESI xor ebx, dword ptr [esi]
#define XOR_EBX_FROM_PTR_EBP xor ebx, dword ptr [ebp]
#define XOR_EBX_FROM_PTR_ESP xor ebx, dword ptr [esp]

#define XOR_ECX_FROM_PTR_RAX xor ecx, dword ptr [rax]
#define XOR_ECX_FROM_PTR_RBX xor ecx, dword ptr [rbx]
#define XOR_ECX_FROM_PTR_RCX xor ecx, dword ptr [rcx]
#define XOR_ECX_FROM_PTR_RDX xor ecx, dword ptr [rdx]
#define XOR_ECX_FROM_PTR_RDI xor ecx, dword ptr [rdi]
#define XOR_ECX_FROM_PTR_RSI xor ecx, dword ptr [rsi]
#define XOR_ECX_FROM_PTR_RBP xor ecx, dword ptr [rbp]
#define XOR_ECX_FROM_PTR_RSP xor ecx, dword ptr [rsp]
#define XOR_ECX_FROM_PTR_R8 xor ecx, dword ptr [r8]
#define XOR_ECX_FROM_PTR_R9 xor ecx, dword ptr [r9]
#define XOR_ECX_FROM_PTR_R10 xor ecx, dword ptr [r10]
#define XOR_ECX_FROM_PTR_R11 xor ecx, dword ptr [r11]
#define XOR_ECX_FROM_PTR_R12 xor ecx, dword ptr [r12]
#define XOR_ECX_FROM_PTR_R13 xor ecx, dword ptr [r13]
#define XOR_ECX_FROM_PTR_R14 xor ecx, dword ptr [r14]
#define XOR_ECX_FROM_PTR_R15 xor ecx, dword ptr [r15]
#define XOR_ECX_FROM_PTR_EAX xor ecx, dword ptr [eax]
#define XOR_ECX_FROM_PTR_EBX xor ecx, dword ptr [ebx]
#define XOR_ECX_FROM_PTR_ECX xor ecx, dword ptr [ecx]
#define XOR_ECX_FROM_PTR_EDX xor ecx, dword ptr [edx]
#define XOR_ECX_FROM_PTR_EDI xor ecx, dword ptr [edi]
#define XOR_ECX_FROM_PTR_ESI xor ecx, dword ptr [esi]
#define XOR_ECX_FROM_PTR_EBP xor ecx, dword ptr [ebp]
#define XOR_ECX_FROM_PTR_ESP xor ecx, dword ptr [esp]

#define XOR_EDX_FROM_PTR_RAX xor edx, dword ptr [rax]
#define XOR_EDX_FROM_PTR_RBX xor edx, dword ptr [rbx]
#define XOR_EDX_FROM_PTR_RCX xor edx, dword ptr [rcx]
#define XOR_EDX_FROM_PTR_RDX xor edx, dword ptr [rdx]
#define XOR_EDX_FROM_PTR_RDI xor edx, dword ptr [rdi]
#define XOR_EDX_FROM_PTR_RSI xor edx, dword ptr [rsi]
#define XOR_EDX_FROM_PTR_RBP xor edx, dword ptr [rbp]
#define XOR_EDX_FROM_PTR_RSP xor edx, dword ptr [rsp]
#define XOR_EDX_FROM_PTR_R8 xor edx, dword ptr [r8]
#define XOR_EDX_FROM_PTR_R9 xor edx, dword ptr [r9]
#define XOR_EDX_FROM_PTR_R10 xor edx, dword ptr [r10]
#define XOR_EDX_FROM_PTR_R11 xor edx, dword ptr [r11]
#define XOR_EDX_FROM_PTR_R12 xor edx, dword ptr [r12]
#define XOR_EDX_FROM_PTR_R13 xor edx, dword ptr [r13]
#define XOR_EDX_FROM_PTR_R14 xor edx, dword ptr [r14]
#define XOR_EDX_FROM_PTR_R15 xor edx, dword ptr [r15]
#define XOR_EDX_FROM_PTR_EAX xor edx, dword ptr [eax]
#define XOR_EDX_FROM_PTR_EBX xor edx, dword ptr [ebx]
#define XOR_EDX_FROM_PTR_ECX xor edx, dword ptr [ecx]
#define XOR_EDX_FROM_PTR_EDX xor edx, dword ptr [edx]
#define XOR_EDX_FROM_PTR_EDI xor edx, dword ptr [edi]
#define XOR_EDX_FROM_PTR_ESI xor edx, dword ptr [esi]
#define XOR_EDX_FROM_PTR_EBP xor edx, dword ptr [ebp]
#define XOR_EDX_FROM_PTR_ESP xor edx, dword ptr [esp]

#define XOR_EDI_FROM_PTR_RAX xor edi, dword ptr [rax]
#define XOR_EDI_FROM_PTR_RBX xor edi, dword ptr [rbx]
#define XOR_EDI_FROM_PTR_RCX xor edi, dword ptr [rcx]
#define XOR_EDI_FROM_PTR_RDX xor edi, dword ptr [rdx]
#define XOR_EDI_FROM_PTR_RDI xor edi, dword ptr [rdi]
#define XOR_EDI_FROM_PTR_RSI xor edi, dword ptr [rsi]
#define XOR_EDI_FROM_PTR_RBP xor edi, dword ptr [rbp]
#define XOR_EDI_FROM_PTR_RSP xor edi, dword ptr [rsp]
#define XOR_EDI_FROM_PTR_R8 xor edi, dword ptr [r8]
#define XOR_EDI_FROM_PTR_R9 xor edi, dword ptr [r9]
#define XOR_EDI_FROM_PTR_R10 xor edi, dword ptr [r10]
#define XOR_EDI_FROM_PTR_R11 xor edi, dword ptr [r11]
#define XOR_EDI_FROM_PTR_R12 xor edi, dword ptr [r12]
#define XOR_EDI_FROM_PTR_R13 xor edi, dword ptr [r13]
#define XOR_EDI_FROM_PTR_R14 xor edi, dword ptr [r14]
#define XOR_EDI_FROM_PTR_R15 xor edi, dword ptr [r15]
#define XOR_EDI_FROM_PTR_EAX xor edi, dword ptr [eax]
#define XOR_EDI_FROM_PTR_EBX xor edi, dword ptr [ebx]
#define XOR_EDI_FROM_PTR_ECX xor edi, dword ptr [ecx]
#define XOR_EDI_FROM_PTR_EDX xor edi, dword ptr [edx]
#define XOR_EDI_FROM_PTR_EDI xor edi, dword ptr [edi]
#define XOR_EDI_FROM_PTR_ESI xor edi, dword ptr [esi]
#define XOR_EDI_FROM_PTR_EBP xor edi, dword ptr [ebp]
#define XOR_EDI_FROM_PTR_ESP xor edi, dword ptr [esp]

#define XOR_ESI_FROM_PTR_RAX xor esi, dword ptr [rax]
#define XOR_ESI_FROM_PTR_RBX xor esi, dword ptr [rbx]
#define XOR_ESI_FROM_PTR_RCX xor esi, dword ptr [rcx]
#define XOR_ESI_FROM_PTR_RDX xor esi, dword ptr [rdx]
#define XOR_ESI_FROM_PTR_RDI xor esi, dword ptr [rdi]
#define XOR_ESI_FROM_PTR_RSI xor esi, dword ptr [rsi]
#define XOR_ESI_FROM_PTR_RBP xor esi, dword ptr [rbp]
#define XOR_ESI_FROM_PTR_RSP xor esi, dword ptr [rsp]
#define XOR_ESI_FROM_PTR_R8 xor esi, dword ptr [r8]
#define XOR_ESI_FROM_PTR_R9 xor esi, dword ptr [r9]
#define XOR_ESI_FROM_PTR_R10 xor esi, dword ptr [r10]
#define XOR_ESI_FROM_PTR_R11 xor esi, dword ptr [r11]
#define XOR_ESI_FROM_PTR_R12 xor esi, dword ptr [r12]
#define XOR_ESI_FROM_PTR_R13 xor esi, dword ptr [r13]
#define XOR_ESI_FROM_PTR_R14 xor esi, dword ptr [r14]
#define XOR_ESI_FROM_PTR_R15 xor esi, dword ptr [r15]
#define XOR_ESI_FROM_PTR_EAX xor esi, dword ptr [eax]
#define XOR_ESI_FROM_PTR_EBX xor esi, dword ptr [ebx]
#define XOR_ESI_FROM_PTR_ECX xor esi, dword ptr [ecx]
#define XOR_ESI_FROM_PTR_EDX xor esi, dword ptr [edx]
#define XOR_ESI_FROM_PTR_EDI xor esi, dword ptr [edi]
#define XOR_ESI_FROM_PTR_ESI xor esi, dword ptr [esi]
#define XOR_ESI_FROM_PTR_EBP xor esi, dword ptr [ebp]
#define XOR_ESI_FROM_PTR_ESP xor esi, dword ptr [esp]

#define XOR_EBP_FROM_PTR_RAX xor ebp, dword ptr [rax]
#define XOR_EBP_FROM_PTR_RBX xor ebp, dword ptr [rbx]
#define XOR_EBP_FROM_PTR_RCX xor ebp, dword ptr [rcx]
#define XOR_EBP_FROM_PTR_RDX xor ebp, dword ptr [rdx]
#define XOR_EBP_FROM_PTR_RDI xor ebp, dword ptr [rdi]
#define XOR_EBP_FROM_PTR_RSI xor ebp, dword ptr [rsi]
#define XOR_EBP_FROM_PTR_RBP xor ebp, dword ptr [rbp]
#define XOR_EBP_FROM_PTR_RSP xor ebp, dword ptr [rsp]
#define XOR_EBP_FROM_PTR_R8 xor ebp, dword ptr [r8]
#define XOR_EBP_FROM_PTR_R9 xor ebp, dword ptr [r9]
#define XOR_EBP_FROM_PTR_R10 xor ebp, dword ptr [r10]
#define XOR_EBP_FROM_PTR_R11 xor ebp, dword ptr [r11]
#define XOR_EBP_FROM_PTR_R12 xor ebp, dword ptr [r12]
#define XOR_EBP_FROM_PTR_R13 xor ebp, dword ptr [r13]
#define XOR_EBP_FROM_PTR_R14 xor ebp, dword ptr [r14]
#define XOR_EBP_FROM_PTR_R15 xor ebp, dword ptr [r15]
#define XOR_EBP_FROM_PTR_EAX xor ebp, dword ptr [eax]
#define XOR_EBP_FROM_PTR_EBX xor ebp, dword ptr [ebx]
#define XOR_EBP_FROM_PTR_ECX xor ebp, dword ptr [ecx]
#define XOR_EBP_FROM_PTR_EDX xor ebp, dword ptr [edx]
#define XOR_EBP_FROM_PTR_EDI xor ebp, dword ptr [edi]
#define XOR_EBP_FROM_PTR_ESI xor ebp, dword ptr [esi]
#define XOR_EBP_FROM_PTR_EBP xor ebp, dword ptr [ebp]
#define XOR_EBP_FROM_PTR_ESP xor ebp, dword ptr [esp]

#define XOR_ESP_FROM_PTR_RAX xor esp, dword ptr [rax]
#define XOR_ESP_FROM_PTR_RBX xor esp, dword ptr [rbx]
#define XOR_ESP_FROM_PTR_RCX xor esp, dword ptr [rcx]
#define XOR_ESP_FROM_PTR_RDX xor esp, dword ptr [rdx]
#define XOR_ESP_FROM_PTR_RDI xor esp, dword ptr [rdi]
#define XOR_ESP_FROM_PTR_RSI xor esp, dword ptr [rsi]
#define XOR_ESP_FROM_PTR_RBP xor esp, dword ptr [rbp]
#define XOR_ESP_FROM_PTR_RSP xor esp, dword ptr [rsp]
#define XOR_ESP_FROM_PTR_R8 xor esp, dword ptr [r8]
#define XOR_ESP_FROM_PTR_R9 xor esp, dword ptr [r9]
#define XOR_ESP_FROM_PTR_R10 xor esp, dword ptr [r10]
#define XOR_ESP_FROM_PTR_R11 xor esp, dword ptr [r11]
#define XOR_ESP_FROM_PTR_R12 xor esp, dword ptr [r12]
#define XOR_ESP_FROM_PTR_R13 xor esp, dword ptr [r13]
#define XOR_ESP_FROM_PTR_R14 xor esp, dword ptr [r14]
#define XOR_ESP_FROM_PTR_R15 xor esp, dword ptr [r15]
#define XOR_ESP_FROM_PTR_EAX xor esp, dword ptr [eax]
#define XOR_ESP_FROM_PTR_EBX xor esp, dword ptr [ebx]
#define XOR_ESP_FROM_PTR_ECX xor esp, dword ptr [ecx]
#define XOR_ESP_FROM_PTR_EDX xor esp, dword ptr [edx]
#define XOR_ESP_FROM_PTR_EDI xor esp, dword ptr [edi]
#define XOR_ESP_FROM_PTR_ESI xor esp, dword ptr [esi]
#define XOR_ESP_FROM_PTR_EBP xor esp, dword ptr [ebp]
#define XOR_ESP_FROM_PTR_ESP xor esp, dword ptr [esp]

#define XOR_R8D_FROM_PTR_RAX xor r8d, dword ptr [rax]
#define XOR_R8D_FROM_PTR_RBX xor r8d, dword ptr [rbx]
#define XOR_R8D_FROM_PTR_RCX xor r8d, dword ptr [rcx]
#define XOR_R8D_FROM_PTR_RDX xor r8d, dword ptr [rdx]
#define XOR_R8D_FROM_PTR_RDI xor r8d, dword ptr [rdi]
#define XOR_R8D_FROM_PTR_RSI xor r8d, dword ptr [rsi]
#define XOR_R8D_FROM_PTR_RBP xor r8d, dword ptr [rbp]
#define XOR_R8D_FROM_PTR_RSP xor r8d, dword ptr [rsp]
#define XOR_R8D_FROM_PTR_R8 xor r8d, dword ptr [r8]
#define XOR_R8D_FROM_PTR_R9 xor r8d, dword ptr [r9]
#define XOR_R8D_FROM_PTR_R10 xor r8d, dword ptr [r10]
#define XOR_R8D_FROM_PTR_R11 xor r8d, dword ptr [r11]
#define XOR_R8D_FROM_PTR_R12 xor r8d, dword ptr [r12]
#define XOR_R8D_FROM_PTR_R13 xor r8d, dword ptr [r13]
#define XOR_R8D_FROM_PTR_R14 xor r8d, dword ptr [r14]
#define XOR_R8D_FROM_PTR_R15 xor r8d, dword ptr [r15]
#define XOR_R8D_FROM_PTR_EAX xor r8d, dword ptr [eax]
#define XOR_R8D_FROM_PTR_EBX xor r8d, dword ptr [ebx]
#define XOR_R8D_FROM_PTR_ECX xor r8d, dword ptr [ecx]
#define XOR_R8D_FROM_PTR_EDX xor r8d, dword ptr [edx]
#define XOR_R8D_FROM_PTR_EDI xor r8d, dword ptr [edi]
#define XOR_R8D_FROM_PTR_ESI xor r8d, dword ptr [esi]
#define XOR_R8D_FROM_PTR_EBP xor r8d, dword ptr [ebp]
#define XOR_R8D_FROM_PTR_ESP xor r8d, dword ptr [esp]

#define XOR_R9D_FROM_PTR_RAX xor r9d, dword ptr [rax]
#define XOR_R9D_FROM_PTR_RBX xor r9d, dword ptr [rbx]
#define XOR_R9D_FROM_PTR_RCX xor r9d, dword ptr [rcx]
#define XOR_R9D_FROM_PTR_RDX xor r9d, dword ptr [rdx]
#define XOR_R9D_FROM_PTR_RDI xor r9d, dword ptr [rdi]
#define XOR_R9D_FROM_PTR_RSI xor r9d, dword ptr [rsi]
#define XOR_R9D_FROM_PTR_RBP xor r9d, dword ptr [rbp]
#define XOR_R9D_FROM_PTR_RSP xor r9d, dword ptr [rsp]
#define XOR_R9D_FROM_PTR_R8 xor r9d, dword ptr [r8]
#define XOR_R9D_FROM_PTR_R9 xor r9d, dword ptr [r9]
#define XOR_R9D_FROM_PTR_R10 xor r9d, dword ptr [r10]
#define XOR_R9D_FROM_PTR_R11 xor r9d, dword ptr [r11]
#define XOR_R9D_FROM_PTR_R12 xor r9d, dword ptr [r12]
#define XOR_R9D_FROM_PTR_R13 xor r9d, dword ptr [r13]
#define XOR_R9D_FROM_PTR_R14 xor r9d, dword ptr [r14]
#define XOR_R9D_FROM_PTR_R15 xor r9d, dword ptr [r15]
#define XOR_R9D_FROM_PTR_EAX xor r9d, dword ptr [eax]
#define XOR_R9D_FROM_PTR_EBX xor r9d, dword ptr [ebx]
#define XOR_R9D_FROM_PTR_ECX xor r9d, dword ptr [ecx]
#define XOR_R9D_FROM_PTR_EDX xor r9d, dword ptr [edx]
#define XOR_R9D_FROM_PTR_EDI xor r9d, dword ptr [edi]
#define XOR_R9D_FROM_PTR_ESI xor r9d, dword ptr [esi]
#define XOR_R9D_FROM_PTR_EBP xor r9d, dword ptr [ebp]
#define XOR_R9D_FROM_PTR_ESP xor r9d, dword ptr [esp]

#define XOR_R10D_FROM_PTR_RAX xor r10d, dword ptr [rax]
#define XOR_R10D_FROM_PTR_RBX xor r10d, dword ptr [rbx]
#define XOR_R10D_FROM_PTR_RCX xor r10d, dword ptr [rcx]
#define XOR_R10D_FROM_PTR_RDX xor r10d, dword ptr [rdx]
#define XOR_R10D_FROM_PTR_RDI xor r10d, dword ptr [rdi]
#define XOR_R10D_FROM_PTR_RSI xor r10d, dword ptr [rsi]
#define XOR_R10D_FROM_PTR_RBP xor r10d, dword ptr [rbp]
#define XOR_R10D_FROM_PTR_RSP xor r10d, dword ptr [rsp]
#define XOR_R10D_FROM_PTR_R8 xor r10d, dword ptr [r8]
#define XOR_R10D_FROM_PTR_R9 xor r10d, dword ptr [r9]
#define XOR_R10D_FROM_PTR_R10 xor r10d, dword ptr [r10]
#define XOR_R10D_FROM_PTR_R11 xor r10d, dword ptr [r11]
#define XOR_R10D_FROM_PTR_R12 xor r10d, dword ptr [r12]
#define XOR_R10D_FROM_PTR_R13 xor r10d, dword ptr [r13]
#define XOR_R10D_FROM_PTR_R14 xor r10d, dword ptr [r14]
#define XOR_R10D_FROM_PTR_R15 xor r10d, dword ptr [r15]
#define XOR_R10D_FROM_PTR_EAX xor r10d, dword ptr [eax]
#define XOR_R10D_FROM_PTR_EBX xor r10d, dword ptr [ebx]
#define XOR_R10D_FROM_PTR_ECX xor r10d, dword ptr [ecx]
#define XOR_R10D_FROM_PTR_EDX xor r10d, dword ptr [edx]
#define XOR_R10D_FROM_PTR_EDI xor r10d, dword ptr [edi]
#define XOR_R10D_FROM_PTR_ESI xor r10d, dword ptr [esi]
#define XOR_R10D_FROM_PTR_EBP xor r10d, dword ptr [ebp]
#define XOR_R10D_FROM_PTR_ESP xor r10d, dword ptr [esp]

#define XOR_R11D_FROM_PTR_RAX xor r11d, dword ptr [rax]
#define XOR_R11D_FROM_PTR_RBX xor r11d, dword ptr [rbx]
#define XOR_R11D_FROM_PTR_RCX xor r11d, dword ptr [rcx]
#define XOR_R11D_FROM_PTR_RDX xor r11d, dword ptr [rdx]
#define XOR_R11D_FROM_PTR_RDI xor r11d, dword ptr [rdi]
#define XOR_R11D_FROM_PTR_RSI xor r11d, dword ptr [rsi]
#define XOR_R11D_FROM_PTR_RBP xor r11d, dword ptr [rbp]
#define XOR_R11D_FROM_PTR_RSP xor r11d, dword ptr [rsp]
#define XOR_R11D_FROM_PTR_R8 xor r11d, dword ptr [r8]
#define XOR_R11D_FROM_PTR_R9 xor r11d, dword ptr [r9]
#define XOR_R11D_FROM_PTR_R10 xor r11d, dword ptr [r10]
#define XOR_R11D_FROM_PTR_R11 xor r11d, dword ptr [r11]
#define XOR_R11D_FROM_PTR_R12 xor r11d, dword ptr [r12]
#define XOR_R11D_FROM_PTR_R13 xor r11d, dword ptr [r13]
#define XOR_R11D_FROM_PTR_R14 xor r11d, dword ptr [r14]
#define XOR_R11D_FROM_PTR_R15 xor r11d, dword ptr [r15]
#define XOR_R11D_FROM_PTR_EAX xor r11d, dword ptr [eax]
#define XOR_R11D_FROM_PTR_EBX xor r11d, dword ptr [ebx]
#define XOR_R11D_FROM_PTR_ECX xor r11d, dword ptr [ecx]
#define XOR_R11D_FROM_PTR_EDX xor r11d, dword ptr [edx]
#define XOR_R11D_FROM_PTR_EDI xor r11d, dword ptr [edi]
#define XOR_R11D_FROM_PTR_ESI xor r11d, dword ptr [esi]
#define XOR_R11D_FROM_PTR_EBP xor r11d, dword ptr [ebp]
#define XOR_R11D_FROM_PTR_ESP xor r11d, dword ptr [esp]

#define XOR_R12D_FROM_PTR_RAX xor r12d, dword ptr [rax]
#define XOR_R12D_FROM_PTR_RBX xor r12d, dword ptr [rbx]
#define XOR_R12D_FROM_PTR_RCX xor r12d, dword ptr [rcx]
#define XOR_R12D_FROM_PTR_RDX xor r12d, dword ptr [rdx]
#define XOR_R12D_FROM_PTR_RDI xor r12d, dword ptr [rdi]
#define XOR_R12D_FROM_PTR_RSI xor r12d, dword ptr [rsi]
#define XOR_R12D_FROM_PTR_RBP xor r12d, dword ptr [rbp]
#define XOR_R12D_FROM_PTR_RSP xor r12d, dword ptr [rsp]
#define XOR_R12D_FROM_PTR_R8 xor r12d, dword ptr [r8]
#define XOR_R12D_FROM_PTR_R9 xor r12d, dword ptr [r9]
#define XOR_R12D_FROM_PTR_R10 xor r12d, dword ptr [r10]
#define XOR_R12D_FROM_PTR_R11 xor r12d, dword ptr [r11]
#define XOR_R12D_FROM_PTR_R12 xor r12d, dword ptr [r12]
#define XOR_R12D_FROM_PTR_R13 xor r12d, dword ptr [r13]
#define XOR_R12D_FROM_PTR_R14 xor r12d, dword ptr [r14]
#define XOR_R12D_FROM_PTR_R15 xor r12d, dword ptr [r15]
#define XOR_R12D_FROM_PTR_EAX xor r12d, dword ptr [eax]
#define XOR_R12D_FROM_PTR_EBX xor r12d, dword ptr [ebx]
#define XOR_R12D_FROM_PTR_ECX xor r12d, dword ptr [ecx]
#define XOR_R12D_FROM_PTR_EDX xor r12d, dword ptr [edx]
#define XOR_R12D_FROM_PTR_EDI xor r12d, dword ptr [edi]
#define XOR_R12D_FROM_PTR_ESI xor r12d, dword ptr [esi]
#define XOR_R12D_FROM_PTR_EBP xor r12d, dword ptr [ebp]
#define XOR_R12D_FROM_PTR_ESP xor r12d, dword ptr [esp]

#define XOR_R13D_FROM_PTR_RAX xor r13d, dword ptr [rax]
#define XOR_R13D_FROM_PTR_RBX xor r13d, dword ptr [rbx]
#define XOR_R13D_FROM_PTR_RCX xor r13d, dword ptr [rcx]
#define XOR_R13D_FROM_PTR_RDX xor r13d, dword ptr [rdx]
#define XOR_R13D_FROM_PTR_RDI xor r13d, dword ptr [rdi]
#define XOR_R13D_FROM_PTR_RSI xor r13d, dword ptr [rsi]
#define XOR_R13D_FROM_PTR_RBP xor r13d, dword ptr [rbp]
#define XOR_R13D_FROM_PTR_RSP xor r13d, dword ptr [rsp]
#define XOR_R13D_FROM_PTR_R8 xor r13d, dword ptr [r8]
#define XOR_R13D_FROM_PTR_R9 xor r13d, dword ptr [r9]
#define XOR_R13D_FROM_PTR_R10 xor r13d, dword ptr [r10]
#define XOR_R13D_FROM_PTR_R11 xor r13d, dword ptr [r11]
#define XOR_R13D_FROM_PTR_R12 xor r13d, dword ptr [r12]
#define XOR_R13D_FROM_PTR_R13 xor r13d, dword ptr [r13]
#define XOR_R13D_FROM_PTR_R14 xor r13d, dword ptr [r14]
#define XOR_R13D_FROM_PTR_R15 xor r13d, dword ptr [r15]
#define XOR_R13D_FROM_PTR_EAX xor r13d, dword ptr [eax]
#define XOR_R13D_FROM_PTR_EBX xor r13d, dword ptr [ebx]
#define XOR_R13D_FROM_PTR_ECX xor r13d, dword ptr [ecx]
#define XOR_R13D_FROM_PTR_EDX xor r13d, dword ptr [edx]
#define XOR_R13D_FROM_PTR_EDI xor r13d, dword ptr [edi]
#define XOR_R13D_FROM_PTR_ESI xor r13d, dword ptr [esi]
#define XOR_R13D_FROM_PTR_EBP xor r13d, dword ptr [ebp]
#define XOR_R13D_FROM_PTR_ESP xor r13d, dword ptr [esp]

#define XOR_R14D_FROM_PTR_RAX xor r14d, dword ptr [rax]
#define XOR_R14D_FROM_PTR_RBX xor r14d, dword ptr [rbx]
#define XOR_R14D_FROM_PTR_RCX xor r14d, dword ptr [rcx]
#define XOR_R14D_FROM_PTR_RDX xor r14d, dword ptr [rdx]
#define XOR_R14D_FROM_PTR_RDI xor r14d, dword ptr [rdi]
#define XOR_R14D_FROM_PTR_RSI xor r14d, dword ptr [rsi]
#define XOR_R14D_FROM_PTR_RBP xor r14d, dword ptr [rbp]
#define XOR_R14D_FROM_PTR_RSP xor r14d, dword ptr [rsp]
#define XOR_R14D_FROM_PTR_R8 xor r14d, dword ptr [r8]
#define XOR_R14D_FROM_PTR_R9 xor r14d, dword ptr [r9]
#define XOR_R14D_FROM_PTR_R10 xor r14d, dword ptr [r10]
#define XOR_R14D_FROM_PTR_R11 xor r14d, dword ptr [r11]
#define XOR_R14D_FROM_PTR_R12 xor r14d, dword ptr [r12]
#define XOR_R14D_FROM_PTR_R13 xor r14d, dword ptr [r13]
#define XOR_R14D_FROM_PTR_R14 xor r14d, dword ptr [r14]
#define XOR_R14D_FROM_PTR_R15 xor r14d, dword ptr [r15]
#define XOR_R14D_FROM_PTR_EAX xor r14d, dword ptr [eax]
#define XOR_R14D_FROM_PTR_EBX xor r14d, dword ptr [ebx]
#define XOR_R14D_FROM_PTR_ECX xor r14d, dword ptr [ecx]
#define XOR_R14D_FROM_PTR_EDX xor r14d, dword ptr [edx]
#define XOR_R14D_FROM_PTR_EDI xor r14d, dword ptr [edi]
#define XOR_R14D_FROM_PTR_ESI xor r14d, dword ptr [esi]
#define XOR_R14D_FROM_PTR_EBP xor r14d, dword ptr [ebp]
#define XOR_R14D_FROM_PTR_ESP xor r14d, dword ptr [esp]

#define XOR_R15D_FROM_PTR_RAX xor r15d, dword ptr [rax]
#define XOR_R15D_FROM_PTR_RBX xor r15d, dword ptr [rbx]
#define XOR_R15D_FROM_PTR_RCX xor r15d, dword ptr [rcx]
#define XOR_R15D_FROM_PTR_RDX xor r15d, dword ptr [rdx]
#define XOR_R15D_FROM_PTR_RDI xor r15d, dword ptr [rdi]
#define XOR_R15D_FROM_PTR_RSI xor r15d, dword ptr [rsi]
#define XOR_R15D_FROM_PTR_RBP xor r15d, dword ptr [rbp]
#define XOR_R15D_FROM_PTR_RSP xor r15d, dword ptr [rsp]
#define XOR_R15D_FROM_PTR_R8 xor r15d, dword ptr [r8]
#define XOR_R15D_FROM_PTR_R9 xor r15d, dword ptr [r9]
#define XOR_R15D_FROM_PTR_R10 xor r15d, dword ptr [r10]
#define XOR_R15D_FROM_PTR_R11 xor r15d, dword ptr [r11]
#define XOR_R15D_FROM_PTR_R12 xor r15d, dword ptr [r12]
#define XOR_R15D_FROM_PTR_R13 xor r15d, dword ptr [r13]
#define XOR_R15D_FROM_PTR_R14 xor r15d, dword ptr [r14]
#define XOR_R15D_FROM_PTR_R15 xor r15d, dword ptr [r15]
#define XOR_R15D_FROM_PTR_EAX xor r15d, dword ptr [eax]
#define XOR_R15D_FROM_PTR_EBX xor r15d, dword ptr [ebx]
#define XOR_R15D_FROM_PTR_ECX xor r15d, dword ptr [ecx]
#define XOR_R15D_FROM_PTR_EDX xor r15d, dword ptr [edx]
#define XOR_R15D_FROM_PTR_EDI xor r15d, dword ptr [edi]
#define XOR_R15D_FROM_PTR_ESI xor r15d, dword ptr [esi]
#define XOR_R15D_FROM_PTR_EBP xor r15d, dword ptr [ebp]
#define XOR_R15D_FROM_PTR_ESP xor r15d, dword ptr [esp]

#define XOR_EAX_TO_PTR_RAX xor dword ptr [rax], eax
#define XOR_EAX_TO_PTR_RBX xor dword ptr [rbx], eax
#define XOR_EAX_TO_PTR_RCX xor dword ptr [rcx], eax
#define XOR_EAX_TO_PTR_RDX xor dword ptr [rdx], eax
#define XOR_EAX_TO_PTR_RDI xor dword ptr [rdi], eax
#define XOR_EAX_TO_PTR_RSI xor dword ptr [rsi], eax
#define XOR_EAX_TO_PTR_RBP xor dword ptr [rbp], eax
#define XOR_EAX_TO_PTR_RSP xor dword ptr [rsp], eax
#define XOR_EAX_TO_PTR_R8 xor dword ptr [r8], eax
#define XOR_EAX_TO_PTR_R9 xor dword ptr [r9], eax
#define XOR_EAX_TO_PTR_R10 xor dword ptr [r10], eax
#define XOR_EAX_TO_PTR_R11 xor dword ptr [r11], eax
#define XOR_EAX_TO_PTR_R12 xor dword ptr [r12], eax
#define XOR_EAX_TO_PTR_R13 xor dword ptr [r13], eax
#define XOR_EAX_TO_PTR_R14 xor dword ptr [r14], eax
#define XOR_EAX_TO_PTR_R15 xor dword ptr [r15], eax
#define XOR_EAX_TO_PTR_EAX xor dword ptr [eax], eax
#define XOR_EAX_TO_PTR_EBX xor dword ptr [ebx], eax
#define XOR_EAX_TO_PTR_ECX xor dword ptr [ecx], eax
#define XOR_EAX_TO_PTR_EDX xor dword ptr [edx], eax
#define XOR_EAX_TO_PTR_EDI xor dword ptr [edi], eax
#define XOR_EAX_TO_PTR_ESI xor dword ptr [esi], eax
#define XOR_EAX_TO_PTR_EBP xor dword ptr [ebp], eax
#define XOR_EAX_TO_PTR_ESP xor dword ptr [esp], eax

#define XOR_EBX_TO_PTR_RAX xor dword ptr [rax], ebx
#define XOR_EBX_TO_PTR_RBX xor dword ptr [rbx], ebx
#define XOR_EBX_TO_PTR_RCX xor dword ptr [rcx], ebx
#define XOR_EBX_TO_PTR_RDX xor dword ptr [rdx], ebx
#define XOR_EBX_TO_PTR_RDI xor dword ptr [rdi], ebx
#define XOR_EBX_TO_PTR_RSI xor dword ptr [rsi], ebx
#define XOR_EBX_TO_PTR_RBP xor dword ptr [rbp], ebx
#define XOR_EBX_TO_PTR_RSP xor dword ptr [rsp], ebx
#define XOR_EBX_TO_PTR_R8 xor dword ptr [r8], ebx
#define XOR_EBX_TO_PTR_R9 xor dword ptr [r9], ebx
#define XOR_EBX_TO_PTR_R10 xor dword ptr [r10], ebx
#define XOR_EBX_TO_PTR_R11 xor dword ptr [r11], ebx
#define XOR_EBX_TO_PTR_R12 xor dword ptr [r12], ebx
#define XOR_EBX_TO_PTR_R13 xor dword ptr [r13], ebx
#define XOR_EBX_TO_PTR_R14 xor dword ptr [r14], ebx
#define XOR_EBX_TO_PTR_R15 xor dword ptr [r15], ebx
#define XOR_EBX_TO_PTR_EAX xor dword ptr [eax], ebx
#define XOR_EBX_TO_PTR_EBX xor dword ptr [ebx], ebx
#define XOR_EBX_TO_PTR_ECX xor dword ptr [ecx], ebx
#define XOR_EBX_TO_PTR_EDX xor dword ptr [edx], ebx
#define XOR_EBX_TO_PTR_EDI xor dword ptr [edi], ebx
#define XOR_EBX_TO_PTR_ESI xor dword ptr [esi], ebx
#define XOR_EBX_TO_PTR_EBP xor dword ptr [ebp], ebx
#define XOR_EBX_TO_PTR_ESP xor dword ptr [esp], ebx

#define XOR_ECX_TO_PTR_RAX xor dword ptr [rax], ecx
#define XOR_ECX_TO_PTR_RBX xor dword ptr [rbx], ecx
#define XOR_ECX_TO_PTR_RCX xor dword ptr [rcx], ecx
#define XOR_ECX_TO_PTR_RDX xor dword ptr [rdx], ecx
#define XOR_ECX_TO_PTR_RDI xor dword ptr [rdi], ecx
#define XOR_ECX_TO_PTR_RSI xor dword ptr [rsi], ecx
#define XOR_ECX_TO_PTR_RBP xor dword ptr [rbp], ecx
#define XOR_ECX_TO_PTR_RSP xor dword ptr [rsp], ecx
#define XOR_ECX_TO_PTR_R8 xor dword ptr [r8], ecx
#define XOR_ECX_TO_PTR_R9 xor dword ptr [r9], ecx
#define XOR_ECX_TO_PTR_R10 xor dword ptr [r10], ecx
#define XOR_ECX_TO_PTR_R11 xor dword ptr [r11], ecx
#define XOR_ECX_TO_PTR_R12 xor dword ptr [r12], ecx
#define XOR_ECX_TO_PTR_R13 xor dword ptr [r13], ecx
#define XOR_ECX_TO_PTR_R14 xor dword ptr [r14], ecx
#define XOR_ECX_TO_PTR_R15 xor dword ptr [r15], ecx
#define XOR_ECX_TO_PTR_EAX xor dword ptr [eax], ecx
#define XOR_ECX_TO_PTR_EBX xor dword ptr [ebx], ecx
#define XOR_ECX_TO_PTR_ECX xor dword ptr [ecx], ecx
#define XOR_ECX_TO_PTR_EDX xor dword ptr [edx], ecx
#define XOR_ECX_TO_PTR_EDI xor dword ptr [edi], ecx
#define XOR_ECX_TO_PTR_ESI xor dword ptr [esi], ecx
#define XOR_ECX_TO_PTR_EBP xor dword ptr [ebp], ecx
#define XOR_ECX_TO_PTR_ESP xor dword ptr [esp], ecx

#define XOR_EDX_TO_PTR_RAX xor dword ptr [rax], edx
#define XOR_EDX_TO_PTR_RBX xor dword ptr [rbx], edx
#define XOR_EDX_TO_PTR_RCX xor dword ptr [rcx], edx
#define XOR_EDX_TO_PTR_RDX xor dword ptr [rdx], edx
#define XOR_EDX_TO_PTR_RDI xor dword ptr [rdi], edx
#define XOR_EDX_TO_PTR_RSI xor dword ptr [rsi], edx
#define XOR_EDX_TO_PTR_RBP xor dword ptr [rbp], edx
#define XOR_EDX_TO_PTR_RSP xor dword ptr [rsp], edx
#define XOR_EDX_TO_PTR_R8 xor dword ptr [r8], edx
#define XOR_EDX_TO_PTR_R9 xor dword ptr [r9], edx
#define XOR_EDX_TO_PTR_R10 xor dword ptr [r10], edx
#define XOR_EDX_TO_PTR_R11 xor dword ptr [r11], edx
#define XOR_EDX_TO_PTR_R12 xor dword ptr [r12], edx
#define XOR_EDX_TO_PTR_R13 xor dword ptr [r13], edx
#define XOR_EDX_TO_PTR_R14 xor dword ptr [r14], edx
#define XOR_EDX_TO_PTR_R15 xor dword ptr [r15], edx
#define XOR_EDX_TO_PTR_EAX xor dword ptr [eax], edx
#define XOR_EDX_TO_PTR_EBX xor dword ptr [ebx], edx
#define XOR_EDX_TO_PTR_ECX xor dword ptr [ecx], edx
#define XOR_EDX_TO_PTR_EDX xor dword ptr [edx], edx
#define XOR_EDX_TO_PTR_EDI xor dword ptr [edi], edx
#define XOR_EDX_TO_PTR_ESI xor dword ptr [esi], edx
#define XOR_EDX_TO_PTR_EBP xor dword ptr [ebp], edx
#define XOR_EDX_TO_PTR_ESP xor dword ptr [esp], edx

#define XOR_EDI_TO_PTR_RAX xor dword ptr [rax], edi
#define XOR_EDI_TO_PTR_RBX xor dword ptr [rbx], edi
#define XOR_EDI_TO_PTR_RCX xor dword ptr [rcx], edi
#define XOR_EDI_TO_PTR_RDX xor dword ptr [rdx], edi
#define XOR_EDI_TO_PTR_RDI xor dword ptr [rdi], edi
#define XOR_EDI_TO_PTR_RSI xor dword ptr [rsi], edi
#define XOR_EDI_TO_PTR_RBP xor dword ptr [rbp], edi
#define XOR_EDI_TO_PTR_RSP xor dword ptr [rsp], edi
#define XOR_EDI_TO_PTR_R8 xor dword ptr [r8], edi
#define XOR_EDI_TO_PTR_R9 xor dword ptr [r9], edi
#define XOR_EDI_TO_PTR_R10 xor dword ptr [r10], edi
#define XOR_EDI_TO_PTR_R11 xor dword ptr [r11], edi
#define XOR_EDI_TO_PTR_R12 xor dword ptr [r12], edi
#define XOR_EDI_TO_PTR_R13 xor dword ptr [r13], edi
#define XOR_EDI_TO_PTR_R14 xor dword ptr [r14], edi
#define XOR_EDI_TO_PTR_R15 xor dword ptr [r15], edi
#define XOR_EDI_TO_PTR_EAX xor dword ptr [eax], edi
#define XOR_EDI_TO_PTR_EBX xor dword ptr [ebx], edi
#define XOR_EDI_TO_PTR_ECX xor dword ptr [ecx], edi
#define XOR_EDI_TO_PTR_EDX xor dword ptr [edx], edi
#define XOR_EDI_TO_PTR_EDI xor dword ptr [edi], edi
#define XOR_EDI_TO_PTR_ESI xor dword ptr [esi], edi
#define XOR_EDI_TO_PTR_EBP xor dword ptr [ebp], edi
#define XOR_EDI_TO_PTR_ESP xor dword ptr [esp], edi

#define XOR_ESI_TO_PTR_RAX xor dword ptr [rax], esi
#define XOR_ESI_TO_PTR_RBX xor dword ptr [rbx], esi
#define XOR_ESI_TO_PTR_RCX xor dword ptr [rcx], esi
#define XOR_ESI_TO_PTR_RDX xor dword ptr [rdx], esi
#define XOR_ESI_TO_PTR_RDI xor dword ptr [rdi], esi
#define XOR_ESI_TO_PTR_RSI xor dword ptr [rsi], esi
#define XOR_ESI_TO_PTR_RBP xor dword ptr [rbp], esi
#define XOR_ESI_TO_PTR_RSP xor dword ptr [rsp], esi
#define XOR_ESI_TO_PTR_R8 xor dword ptr [r8], esi
#define XOR_ESI_TO_PTR_R9 xor dword ptr [r9], esi
#define XOR_ESI_TO_PTR_R10 xor dword ptr [r10], esi
#define XOR_ESI_TO_PTR_R11 xor dword ptr [r11], esi
#define XOR_ESI_TO_PTR_R12 xor dword ptr [r12], esi
#define XOR_ESI_TO_PTR_R13 xor dword ptr [r13], esi
#define XOR_ESI_TO_PTR_R14 xor dword ptr [r14], esi
#define XOR_ESI_TO_PTR_R15 xor dword ptr [r15], esi
#define XOR_ESI_TO_PTR_EAX xor dword ptr [eax], esi
#define XOR_ESI_TO_PTR_EBX xor dword ptr [ebx], esi
#define XOR_ESI_TO_PTR_ECX xor dword ptr [ecx], esi
#define XOR_ESI_TO_PTR_EDX xor dword ptr [edx], esi
#define XOR_ESI_TO_PTR_EDI xor dword ptr [edi], esi
#define XOR_ESI_TO_PTR_ESI xor dword ptr [esi], esi
#define XOR_ESI_TO_PTR_EBP xor dword ptr [ebp], esi
#define XOR_ESI_TO_PTR_ESP xor dword ptr [esp], esi

#define XOR_EBP_TO_PTR_RAX xor dword ptr [rax], ebp
#define XOR_EBP_TO_PTR_RBX xor dword ptr [rbx], ebp
#define XOR_EBP_TO_PTR_RCX xor dword ptr [rcx], ebp
#define XOR_EBP_TO_PTR_RDX xor dword ptr [rdx], ebp
#define XOR_EBP_TO_PTR_RDI xor dword ptr [rdi], ebp
#define XOR_EBP_TO_PTR_RSI xor dword ptr [rsi], ebp
#define XOR_EBP_TO_PTR_RBP xor dword ptr [rbp], ebp
#define XOR_EBP_TO_PTR_RSP xor dword ptr [rsp], ebp
#define XOR_EBP_TO_PTR_R8 xor dword ptr [r8], ebp
#define XOR_EBP_TO_PTR_R9 xor dword ptr [r9], ebp
#define XOR_EBP_TO_PTR_R10 xor dword ptr [r10], ebp
#define XOR_EBP_TO_PTR_R11 xor dword ptr [r11], ebp
#define XOR_EBP_TO_PTR_R12 xor dword ptr [r12], ebp
#define XOR_EBP_TO_PTR_R13 xor dword ptr [r13], ebp
#define XOR_EBP_TO_PTR_R14 xor dword ptr [r14], ebp
#define XOR_EBP_TO_PTR_R15 xor dword ptr [r15], ebp
#define XOR_EBP_TO_PTR_EAX xor dword ptr [eax], ebp
#define XOR_EBP_TO_PTR_EBX xor dword ptr [ebx], ebp
#define XOR_EBP_TO_PTR_ECX xor dword ptr [ecx], ebp
#define XOR_EBP_TO_PTR_EDX xor dword ptr [edx], ebp
#define XOR_EBP_TO_PTR_EDI xor dword ptr [edi], ebp
#define XOR_EBP_TO_PTR_ESI xor dword ptr [esi], ebp
#define XOR_EBP_TO_PTR_EBP xor dword ptr [ebp], ebp
#define XOR_EBP_TO_PTR_ESP xor dword ptr [esp], ebp

#define XOR_ESP_TO_PTR_RAX xor dword ptr [rax], esp
#define XOR_ESP_TO_PTR_RBX xor dword ptr [rbx], esp
#define XOR_ESP_TO_PTR_RCX xor dword ptr [rcx], esp
#define XOR_ESP_TO_PTR_RDX xor dword ptr [rdx], esp
#define XOR_ESP_TO_PTR_RDI xor dword ptr [rdi], esp
#define XOR_ESP_TO_PTR_RSI xor dword ptr [rsi], esp
#define XOR_ESP_TO_PTR_RBP xor dword ptr [rbp], esp
#define XOR_ESP_TO_PTR_RSP xor dword ptr [rsp], esp
#define XOR_ESP_TO_PTR_R8 xor dword ptr [r8], esp
#define XOR_ESP_TO_PTR_R9 xor dword ptr [r9], esp
#define XOR_ESP_TO_PTR_R10 xor dword ptr [r10], esp
#define XOR_ESP_TO_PTR_R11 xor dword ptr [r11], esp
#define XOR_ESP_TO_PTR_R12 xor dword ptr [r12], esp
#define XOR_ESP_TO_PTR_R13 xor dword ptr [r13], esp
#define XOR_ESP_TO_PTR_R14 xor dword ptr [r14], esp
#define XOR_ESP_TO_PTR_R15 xor dword ptr [r15], esp
#define XOR_ESP_TO_PTR_EAX xor dword ptr [eax], esp
#define XOR_ESP_TO_PTR_EBX xor dword ptr [ebx], esp
#define XOR_ESP_TO_PTR_ECX xor dword ptr [ecx], esp
#define XOR_ESP_TO_PTR_EDX xor dword ptr [edx], esp
#define XOR_ESP_TO_PTR_EDI xor dword ptr [edi], esp
#define XOR_ESP_TO_PTR_ESI xor dword ptr [esi], esp
#define XOR_ESP_TO_PTR_EBP xor dword ptr [ebp], esp
#define XOR_ESP_TO_PTR_ESP xor dword ptr [esp], esp

#define XOR_R8D_TO_PTR_RAX xor dword ptr [rax], r8d
#define XOR_R8D_TO_PTR_RBX xor dword ptr [rbx], r8d
#define XOR_R8D_TO_PTR_RCX xor dword ptr [rcx], r8d
#define XOR_R8D_TO_PTR_RDX xor dword ptr [rdx], r8d
#define XOR_R8D_TO_PTR_RDI xor dword ptr [rdi], r8d
#define XOR_R8D_TO_PTR_RSI xor dword ptr [rsi], r8d
#define XOR_R8D_TO_PTR_RBP xor dword ptr [rbp], r8d
#define XOR_R8D_TO_PTR_RSP xor dword ptr [rsp], r8d
#define XOR_R8D_TO_PTR_R8 xor dword ptr [r8], r8d
#define XOR_R8D_TO_PTR_R9 xor dword ptr [r9], r8d
#define XOR_R8D_TO_PTR_R10 xor dword ptr [r10], r8d
#define XOR_R8D_TO_PTR_R11 xor dword ptr [r11], r8d
#define XOR_R8D_TO_PTR_R12 xor dword ptr [r12], r8d
#define XOR_R8D_TO_PTR_R13 xor dword ptr [r13], r8d
#define XOR_R8D_TO_PTR_R14 xor dword ptr [r14], r8d
#define XOR_R8D_TO_PTR_R15 xor dword ptr [r15], r8d
#define XOR_R8D_TO_PTR_EAX xor dword ptr [eax], r8d
#define XOR_R8D_TO_PTR_EBX xor dword ptr [ebx], r8d
#define XOR_R8D_TO_PTR_ECX xor dword ptr [ecx], r8d
#define XOR_R8D_TO_PTR_EDX xor dword ptr [edx], r8d
#define XOR_R8D_TO_PTR_EDI xor dword ptr [edi], r8d
#define XOR_R8D_TO_PTR_ESI xor dword ptr [esi], r8d
#define XOR_R8D_TO_PTR_EBP xor dword ptr [ebp], r8d
#define XOR_R8D_TO_PTR_ESP xor dword ptr [esp], r8d

#define XOR_R9D_TO_PTR_RAX xor dword ptr [rax], r9d
#define XOR_R9D_TO_PTR_RBX xor dword ptr [rbx], r9d
#define XOR_R9D_TO_PTR_RCX xor dword ptr [rcx], r9d
#define XOR_R9D_TO_PTR_RDX xor dword ptr [rdx], r9d
#define XOR_R9D_TO_PTR_RDI xor dword ptr [rdi], r9d
#define XOR_R9D_TO_PTR_RSI xor dword ptr [rsi], r9d
#define XOR_R9D_TO_PTR_RBP xor dword ptr [rbp], r9d
#define XOR_R9D_TO_PTR_RSP xor dword ptr [rsp], r9d
#define XOR_R9D_TO_PTR_R8 xor dword ptr [r8], r9d
#define XOR_R9D_TO_PTR_R9 xor dword ptr [r9], r9d
#define XOR_R9D_TO_PTR_R10 xor dword ptr [r10], r9d
#define XOR_R9D_TO_PTR_R11 xor dword ptr [r11], r9d
#define XOR_R9D_TO_PTR_R12 xor dword ptr [r12], r9d
#define XOR_R9D_TO_PTR_R13 xor dword ptr [r13], r9d
#define XOR_R9D_TO_PTR_R14 xor dword ptr [r14], r9d
#define XOR_R9D_TO_PTR_R15 xor dword ptr [r15], r9d
#define XOR_R9D_TO_PTR_EAX xor dword ptr [eax], r9d
#define XOR_R9D_TO_PTR_EBX xor dword ptr [ebx], r9d
#define XOR_R9D_TO_PTR_ECX xor dword ptr [ecx], r9d
#define XOR_R9D_TO_PTR_EDX xor dword ptr [edx], r9d
#define XOR_R9D_TO_PTR_EDI xor dword ptr [edi], r9d
#define XOR_R9D_TO_PTR_ESI xor dword ptr [esi], r9d
#define XOR_R9D_TO_PTR_EBP xor dword ptr [ebp], r9d
#define XOR_R9D_TO_PTR_ESP xor dword ptr [esp], r9d

#define XOR_R10D_TO_PTR_RAX xor dword ptr [rax], r10d
#define XOR_R10D_TO_PTR_RBX xor dword ptr [rbx], r10d
#define XOR_R10D_TO_PTR_RCX xor dword ptr [rcx], r10d
#define XOR_R10D_TO_PTR_RDX xor dword ptr [rdx], r10d
#define XOR_R10D_TO_PTR_RDI xor dword ptr [rdi], r10d
#define XOR_R10D_TO_PTR_RSI xor dword ptr [rsi], r10d
#define XOR_R10D_TO_PTR_RBP xor dword ptr [rbp], r10d
#define XOR_R10D_TO_PTR_RSP xor dword ptr [rsp], r10d
#define XOR_R10D_TO_PTR_R8 xor dword ptr [r8], r10d
#define XOR_R10D_TO_PTR_R9 xor dword ptr [r9], r10d
#define XOR_R10D_TO_PTR_R10 xor dword ptr [r10], r10d
#define XOR_R10D_TO_PTR_R11 xor dword ptr [r11], r10d
#define XOR_R10D_TO_PTR_R12 xor dword ptr [r12], r10d
#define XOR_R10D_TO_PTR_R13 xor dword ptr [r13], r10d
#define XOR_R10D_TO_PTR_R14 xor dword ptr [r14], r10d
#define XOR_R10D_TO_PTR_R15 xor dword ptr [r15], r10d
#define XOR_R10D_TO_PTR_EAX xor dword ptr [eax], r10d
#define XOR_R10D_TO_PTR_EBX xor dword ptr [ebx], r10d
#define XOR_R10D_TO_PTR_ECX xor dword ptr [ecx], r10d
#define XOR_R10D_TO_PTR_EDX xor dword ptr [edx], r10d
#define XOR_R10D_TO_PTR_EDI xor dword ptr [edi], r10d
#define XOR_R10D_TO_PTR_ESI xor dword ptr [esi], r10d
#define XOR_R10D_TO_PTR_EBP xor dword ptr [ebp], r10d
#define XOR_R10D_TO_PTR_ESP xor dword ptr [esp], r10d

#define XOR_R11D_TO_PTR_RAX xor dword ptr [rax], r11d
#define XOR_R11D_TO_PTR_RBX xor dword ptr [rbx], r11d
#define XOR_R11D_TO_PTR_RCX xor dword ptr [rcx], r11d
#define XOR_R11D_TO_PTR_RDX xor dword ptr [rdx], r11d
#define XOR_R11D_TO_PTR_RDI xor dword ptr [rdi], r11d
#define XOR_R11D_TO_PTR_RSI xor dword ptr [rsi], r11d
#define XOR_R11D_TO_PTR_RBP xor dword ptr [rbp], r11d
#define XOR_R11D_TO_PTR_RSP xor dword ptr [rsp], r11d
#define XOR_R11D_TO_PTR_R8 xor dword ptr [r8], r11d
#define XOR_R11D_TO_PTR_R9 xor dword ptr [r9], r11d
#define XOR_R11D_TO_PTR_R10 xor dword ptr [r10], r11d
#define XOR_R11D_TO_PTR_R11 xor dword ptr [r11], r11d
#define XOR_R11D_TO_PTR_R12 xor dword ptr [r12], r11d
#define XOR_R11D_TO_PTR_R13 xor dword ptr [r13], r11d
#define XOR_R11D_TO_PTR_R14 xor dword ptr [r14], r11d
#define XOR_R11D_TO_PTR_R15 xor dword ptr [r15], r11d
#define XOR_R11D_TO_PTR_EAX xor dword ptr [eax], r11d
#define XOR_R11D_TO_PTR_EBX xor dword ptr [ebx], r11d
#define XOR_R11D_TO_PTR_ECX xor dword ptr [ecx], r11d
#define XOR_R11D_TO_PTR_EDX xor dword ptr [edx], r11d
#define XOR_R11D_TO_PTR_EDI xor dword ptr [edi], r11d
#define XOR_R11D_TO_PTR_ESI xor dword ptr [esi], r11d
#define XOR_R11D_TO_PTR_EBP xor dword ptr [ebp], r11d
#define XOR_R11D_TO_PTR_ESP xor dword ptr [esp], r11d

#define XOR_R12D_TO_PTR_RAX xor dword ptr [rax], r12d
#define XOR_R12D_TO_PTR_RBX xor dword ptr [rbx], r12d
#define XOR_R12D_TO_PTR_RCX xor dword ptr [rcx], r12d
#define XOR_R12D_TO_PTR_RDX xor dword ptr [rdx], r12d
#define XOR_R12D_TO_PTR_RDI xor dword ptr [rdi], r12d
#define XOR_R12D_TO_PTR_RSI xor dword ptr [rsi], r12d
#define XOR_R12D_TO_PTR_RBP xor dword ptr [rbp], r12d
#define XOR_R12D_TO_PTR_RSP xor dword ptr [rsp], r12d
#define XOR_R12D_TO_PTR_R8 xor dword ptr [r8], r12d
#define XOR_R12D_TO_PTR_R9 xor dword ptr [r9], r12d
#define XOR_R12D_TO_PTR_R10 xor dword ptr [r10], r12d
#define XOR_R12D_TO_PTR_R11 xor dword ptr [r11], r12d
#define XOR_R12D_TO_PTR_R12 xor dword ptr [r12], r12d
#define XOR_R12D_TO_PTR_R13 xor dword ptr [r13], r12d
#define XOR_R12D_TO_PTR_R14 xor dword ptr [r14], r12d
#define XOR_R12D_TO_PTR_R15 xor dword ptr [r15], r12d
#define XOR_R12D_TO_PTR_EAX xor dword ptr [eax], r12d
#define XOR_R12D_TO_PTR_EBX xor dword ptr [ebx], r12d
#define XOR_R12D_TO_PTR_ECX xor dword ptr [ecx], r12d
#define XOR_R12D_TO_PTR_EDX xor dword ptr [edx], r12d
#define XOR_R12D_TO_PTR_EDI xor dword ptr [edi], r12d
#define XOR_R12D_TO_PTR_ESI xor dword ptr [esi], r12d
#define XOR_R12D_TO_PTR_EBP xor dword ptr [ebp], r12d
#define XOR_R12D_TO_PTR_ESP xor dword ptr [esp], r12d

#define XOR_R13D_TO_PTR_RAX xor dword ptr [rax], r13d
#define XOR_R13D_TO_PTR_RBX xor dword ptr [rbx], r13d
#define XOR_R13D_TO_PTR_RCX xor dword ptr [rcx], r13d
#define XOR_R13D_TO_PTR_RDX xor dword ptr [rdx], r13d
#define XOR_R13D_TO_PTR_RDI xor dword ptr [rdi], r13d
#define XOR_R13D_TO_PTR_RSI xor dword ptr [rsi], r13d
#define XOR_R13D_TO_PTR_RBP xor dword ptr [rbp], r13d
#define XOR_R13D_TO_PTR_RSP xor dword ptr [rsp], r13d
#define XOR_R13D_TO_PTR_R8 xor dword ptr [r8], r13d
#define XOR_R13D_TO_PTR_R9 xor dword ptr [r9], r13d
#define XOR_R13D_TO_PTR_R10 xor dword ptr [r10], r13d
#define XOR_R13D_TO_PTR_R11 xor dword ptr [r11], r13d
#define XOR_R13D_TO_PTR_R12 xor dword ptr [r12], r13d
#define XOR_R13D_TO_PTR_R13 xor dword ptr [r13], r13d
#define XOR_R13D_TO_PTR_R14 xor dword ptr [r14], r13d
#define XOR_R13D_TO_PTR_R15 xor dword ptr [r15], r13d
#define XOR_R13D_TO_PTR_EAX xor dword ptr [eax], r13d
#define XOR_R13D_TO_PTR_EBX xor dword ptr [ebx], r13d
#define XOR_R13D_TO_PTR_ECX xor dword ptr [ecx], r13d
#define XOR_R13D_TO_PTR_EDX xor dword ptr [edx], r13d
#define XOR_R13D_TO_PTR_EDI xor dword ptr [edi], r13d
#define XOR_R13D_TO_PTR_ESI xor dword ptr [esi], r13d
#define XOR_R13D_TO_PTR_EBP xor dword ptr [ebp], r13d
#define XOR_R13D_TO_PTR_ESP xor dword ptr [esp], r13d

#define XOR_R14D_TO_PTR_RAX xor dword ptr [rax], r14d
#define XOR_R14D_TO_PTR_RBX xor dword ptr [rbx], r14d
#define XOR_R14D_TO_PTR_RCX xor dword ptr [rcx], r14d
#define XOR_R14D_TO_PTR_RDX xor dword ptr [rdx], r14d
#define XOR_R14D_TO_PTR_RDI xor dword ptr [rdi], r14d
#define XOR_R14D_TO_PTR_RSI xor dword ptr [rsi], r14d
#define XOR_R14D_TO_PTR_RBP xor dword ptr [rbp], r14d
#define XOR_R14D_TO_PTR_RSP xor dword ptr [rsp], r14d
#define XOR_R14D_TO_PTR_R8 xor dword ptr [r8], r14d
#define XOR_R14D_TO_PTR_R9 xor dword ptr [r9], r14d
#define XOR_R14D_TO_PTR_R10 xor dword ptr [r10], r14d
#define XOR_R14D_TO_PTR_R11 xor dword ptr [r11], r14d
#define XOR_R14D_TO_PTR_R12 xor dword ptr [r12], r14d
#define XOR_R14D_TO_PTR_R13 xor dword ptr [r13], r14d
#define XOR_R14D_TO_PTR_R14 xor dword ptr [r14], r14d
#define XOR_R14D_TO_PTR_R15 xor dword ptr [r15], r14d
#define XOR_R14D_TO_PTR_EAX xor dword ptr [eax], r14d
#define XOR_R14D_TO_PTR_EBX xor dword ptr [ebx], r14d
#define XOR_R14D_TO_PTR_ECX xor dword ptr [ecx], r14d
#define XOR_R14D_TO_PTR_EDX xor dword ptr [edx], r14d
#define XOR_R14D_TO_PTR_EDI xor dword ptr [edi], r14d
#define XOR_R14D_TO_PTR_ESI xor dword ptr [esi], r14d
#define XOR_R14D_TO_PTR_EBP xor dword ptr [ebp], r14d
#define XOR_R14D_TO_PTR_ESP xor dword ptr [esp], r14d

#define XOR_R15D_TO_PTR_RAX xor dword ptr [rax], r15d
#define XOR_R15D_TO_PTR_RBX xor dword ptr [rbx], r15d
#define XOR_R15D_TO_PTR_RCX xor dword ptr [rcx], r15d
#define XOR_R15D_TO_PTR_RDX xor dword ptr [rdx], r15d
#define XOR_R15D_TO_PTR_RDI xor dword ptr [rdi], r15d
#define XOR_R15D_TO_PTR_RSI xor dword ptr [rsi], r15d
#define XOR_R15D_TO_PTR_RBP xor dword ptr [rbp], r15d
#define XOR_R15D_TO_PTR_RSP xor dword ptr [rsp], r15d
#define XOR_R15D_TO_PTR_R8 xor dword ptr [r8], r15d
#define XOR_R15D_TO_PTR_R9 xor dword ptr [r9], r15d
#define XOR_R15D_TO_PTR_R10 xor dword ptr [r10], r15d
#define XOR_R15D_TO_PTR_R11 xor dword ptr [r11], r15d
#define XOR_R15D_TO_PTR_R12 xor dword ptr [r12], r15d
#define XOR_R15D_TO_PTR_R13 xor dword ptr [r13], r15d
#define XOR_R15D_TO_PTR_R14 xor dword ptr [r14], r15d
#define XOR_R15D_TO_PTR_R15 xor dword ptr [r15], r15d
#define XOR_R15D_TO_PTR_EAX xor dword ptr [eax], r15d
#define XOR_R15D_TO_PTR_EBX xor dword ptr [ebx], r15d
#define XOR_R15D_TO_PTR_ECX xor dword ptr [ecx], r15d
#define XOR_R15D_TO_PTR_EDX xor dword ptr [edx], r15d
#define XOR_R15D_TO_PTR_EDI xor dword ptr [edi], r15d
#define XOR_R15D_TO_PTR_ESI xor dword ptr [esi], r15d
#define XOR_R15D_TO_PTR_EBP xor dword ptr [ebp], r15d
#define XOR_R15D_TO_PTR_ESP xor dword ptr [esp], r15d

#define XOR_EAX_FROM_PTR_RAX_(VALUE) xor eax, dword ptr [rax + VALUE]
#define XOR_EAX_FROM_PTR_RBX_(VALUE) xor eax, dword ptr [rbx + VALUE]
#define XOR_EAX_FROM_PTR_RCX_(VALUE) xor eax, dword ptr [rcx + VALUE]
#define XOR_EAX_FROM_PTR_RDX_(VALUE) xor eax, dword ptr [rdx + VALUE]
#define XOR_EAX_FROM_PTR_RDI_(VALUE) xor eax, dword ptr [rdi + VALUE]
#define XOR_EAX_FROM_PTR_RSI_(VALUE) xor eax, dword ptr [rsi + VALUE]
#define XOR_EAX_FROM_PTR_RBP_(VALUE) xor eax, dword ptr [rbp + VALUE]
#define XOR_EAX_FROM_PTR_RSP_(VALUE) xor eax, dword ptr [rsp + VALUE]
#define XOR_EAX_FROM_PTR_R8_(VALUE) xor eax, dword ptr [r8 + VALUE]
#define XOR_EAX_FROM_PTR_R9_(VALUE) xor eax, dword ptr [r9 + VALUE]
#define XOR_EAX_FROM_PTR_R10_(VALUE) xor eax, dword ptr [r10 + VALUE]
#define XOR_EAX_FROM_PTR_R11_(VALUE) xor eax, dword ptr [r11 + VALUE]
#define XOR_EAX_FROM_PTR_R12_(VALUE) xor eax, dword ptr [r12 + VALUE]
#define XOR_EAX_FROM_PTR_R13_(VALUE) xor eax, dword ptr [r13 + VALUE]
#define XOR_EAX_FROM_PTR_R14_(VALUE) xor eax, dword ptr [r14 + VALUE]
#define XOR_EAX_FROM_PTR_R15_(VALUE) xor eax, dword ptr [r15 + VALUE]
#define XOR_EAX_FROM_PTR_EAX_(VALUE) xor eax, dword ptr [eax + VALUE]
#define XOR_EAX_FROM_PTR_EBX_(VALUE) xor eax, dword ptr [ebx + VALUE]
#define XOR_EAX_FROM_PTR_ECX_(VALUE) xor eax, dword ptr [ecx + VALUE]
#define XOR_EAX_FROM_PTR_EDX_(VALUE) xor eax, dword ptr [edx + VALUE]
#define XOR_EAX_FROM_PTR_EDI_(VALUE) xor eax, dword ptr [edi + VALUE]
#define XOR_EAX_FROM_PTR_ESI_(VALUE) xor eax, dword ptr [esi + VALUE]
#define XOR_EAX_FROM_PTR_EBP_(VALUE) xor eax, dword ptr [ebp + VALUE]
#define XOR_EAX_FROM_PTR_ESP_(VALUE) xor eax, dword ptr [esp + VALUE]

#define XOR_EBX_FROM_PTR_RAX_(VALUE) xor ebx, dword ptr [rax + VALUE]
#define XOR_EBX_FROM_PTR_RBX_(VALUE) xor ebx, dword ptr [rbx + VALUE]
#define XOR_EBX_FROM_PTR_RCX_(VALUE) xor ebx, dword ptr [rcx + VALUE]
#define XOR_EBX_FROM_PTR_RDX_(VALUE) xor ebx, dword ptr [rdx + VALUE]
#define XOR_EBX_FROM_PTR_RDI_(VALUE) xor ebx, dword ptr [rdi + VALUE]
#define XOR_EBX_FROM_PTR_RSI_(VALUE) xor ebx, dword ptr [rsi + VALUE]
#define XOR_EBX_FROM_PTR_RBP_(VALUE) xor ebx, dword ptr [rbp + VALUE]
#define XOR_EBX_FROM_PTR_RSP_(VALUE) xor ebx, dword ptr [rsp + VALUE]
#define XOR_EBX_FROM_PTR_R8_(VALUE) xor ebx, dword ptr [r8 + VALUE]
#define XOR_EBX_FROM_PTR_R9_(VALUE) xor ebx, dword ptr [r9 + VALUE]
#define XOR_EBX_FROM_PTR_R10_(VALUE) xor ebx, dword ptr [r10 + VALUE]
#define XOR_EBX_FROM_PTR_R11_(VALUE) xor ebx, dword ptr [r11 + VALUE]
#define XOR_EBX_FROM_PTR_R12_(VALUE) xor ebx, dword ptr [r12 + VALUE]
#define XOR_EBX_FROM_PTR_R13_(VALUE) xor ebx, dword ptr [r13 + VALUE]
#define XOR_EBX_FROM_PTR_R14_(VALUE) xor ebx, dword ptr [r14 + VALUE]
#define XOR_EBX_FROM_PTR_R15_(VALUE) xor ebx, dword ptr [r15 + VALUE]
#define XOR_EBX_FROM_PTR_EAX_(VALUE) xor ebx, dword ptr [eax + VALUE]
#define XOR_EBX_FROM_PTR_EBX_(VALUE) xor ebx, dword ptr [ebx + VALUE]
#define XOR_EBX_FROM_PTR_ECX_(VALUE) xor ebx, dword ptr [ecx + VALUE]
#define XOR_EBX_FROM_PTR_EDX_(VALUE) xor ebx, dword ptr [edx + VALUE]
#define XOR_EBX_FROM_PTR_EDI_(VALUE) xor ebx, dword ptr [edi + VALUE]
#define XOR_EBX_FROM_PTR_ESI_(VALUE) xor ebx, dword ptr [esi + VALUE]
#define XOR_EBX_FROM_PTR_EBP_(VALUE) xor ebx, dword ptr [ebp + VALUE]
#define XOR_EBX_FROM_PTR_ESP_(VALUE) xor ebx, dword ptr [esp + VALUE]

#define XOR_ECX_FROM_PTR_RAX_(VALUE) xor ecx, dword ptr [rax + VALUE]
#define XOR_ECX_FROM_PTR_RBX_(VALUE) xor ecx, dword ptr [rbx + VALUE]
#define XOR_ECX_FROM_PTR_RCX_(VALUE) xor ecx, dword ptr [rcx + VALUE]
#define XOR_ECX_FROM_PTR_RDX_(VALUE) xor ecx, dword ptr [rdx + VALUE]
#define XOR_ECX_FROM_PTR_RDI_(VALUE) xor ecx, dword ptr [rdi + VALUE]
#define XOR_ECX_FROM_PTR_RSI_(VALUE) xor ecx, dword ptr [rsi + VALUE]
#define XOR_ECX_FROM_PTR_RBP_(VALUE) xor ecx, dword ptr [rbp + VALUE]
#define XOR_ECX_FROM_PTR_RSP_(VALUE) xor ecx, dword ptr [rsp + VALUE]
#define XOR_ECX_FROM_PTR_R8_(VALUE) xor ecx, dword ptr [r8 + VALUE]
#define XOR_ECX_FROM_PTR_R9_(VALUE) xor ecx, dword ptr [r9 + VALUE]
#define XOR_ECX_FROM_PTR_R10_(VALUE) xor ecx, dword ptr [r10 + VALUE]
#define XOR_ECX_FROM_PTR_R11_(VALUE) xor ecx, dword ptr [r11 + VALUE]
#define XOR_ECX_FROM_PTR_R12_(VALUE) xor ecx, dword ptr [r12 + VALUE]
#define XOR_ECX_FROM_PTR_R13_(VALUE) xor ecx, dword ptr [r13 + VALUE]
#define XOR_ECX_FROM_PTR_R14_(VALUE) xor ecx, dword ptr [r14 + VALUE]
#define XOR_ECX_FROM_PTR_R15_(VALUE) xor ecx, dword ptr [r15 + VALUE]
#define XOR_ECX_FROM_PTR_EAX_(VALUE) xor ecx, dword ptr [eax + VALUE]
#define XOR_ECX_FROM_PTR_EBX_(VALUE) xor ecx, dword ptr [ebx + VALUE]
#define XOR_ECX_FROM_PTR_ECX_(VALUE) xor ecx, dword ptr [ecx + VALUE]
#define XOR_ECX_FROM_PTR_EDX_(VALUE) xor ecx, dword ptr [edx + VALUE]
#define XOR_ECX_FROM_PTR_EDI_(VALUE) xor ecx, dword ptr [edi + VALUE]
#define XOR_ECX_FROM_PTR_ESI_(VALUE) xor ecx, dword ptr [esi + VALUE]
#define XOR_ECX_FROM_PTR_EBP_(VALUE) xor ecx, dword ptr [ebp + VALUE]
#define XOR_ECX_FROM_PTR_ESP_(VALUE) xor ecx, dword ptr [esp + VALUE]

#define XOR_EDX_FROM_PTR_RAX_(VALUE) xor edx, dword ptr [rax + VALUE]
#define XOR_EDX_FROM_PTR_RBX_(VALUE) xor edx, dword ptr [rbx + VALUE]
#define XOR_EDX_FROM_PTR_RCX_(VALUE) xor edx, dword ptr [rcx + VALUE]
#define XOR_EDX_FROM_PTR_RDX_(VALUE) xor edx, dword ptr [rdx + VALUE]
#define XOR_EDX_FROM_PTR_RDI_(VALUE) xor edx, dword ptr [rdi + VALUE]
#define XOR_EDX_FROM_PTR_RSI_(VALUE) xor edx, dword ptr [rsi + VALUE]
#define XOR_EDX_FROM_PTR_RBP_(VALUE) xor edx, dword ptr [rbp + VALUE]
#define XOR_EDX_FROM_PTR_RSP_(VALUE) xor edx, dword ptr [rsp + VALUE]
#define XOR_EDX_FROM_PTR_R8_(VALUE) xor edx, dword ptr [r8 + VALUE]
#define XOR_EDX_FROM_PTR_R9_(VALUE) xor edx, dword ptr [r9 + VALUE]
#define XOR_EDX_FROM_PTR_R10_(VALUE) xor edx, dword ptr [r10 + VALUE]
#define XOR_EDX_FROM_PTR_R11_(VALUE) xor edx, dword ptr [r11 + VALUE]
#define XOR_EDX_FROM_PTR_R12_(VALUE) xor edx, dword ptr [r12 + VALUE]
#define XOR_EDX_FROM_PTR_R13_(VALUE) xor edx, dword ptr [r13 + VALUE]
#define XOR_EDX_FROM_PTR_R14_(VALUE) xor edx, dword ptr [r14 + VALUE]
#define XOR_EDX_FROM_PTR_R15_(VALUE) xor edx, dword ptr [r15 + VALUE]
#define XOR_EDX_FROM_PTR_EAX_(VALUE) xor edx, dword ptr [eax + VALUE]
#define XOR_EDX_FROM_PTR_EBX_(VALUE) xor edx, dword ptr [ebx + VALUE]
#define XOR_EDX_FROM_PTR_ECX_(VALUE) xor edx, dword ptr [ecx + VALUE]
#define XOR_EDX_FROM_PTR_EDX_(VALUE) xor edx, dword ptr [edx + VALUE]
#define XOR_EDX_FROM_PTR_EDI_(VALUE) xor edx, dword ptr [edi + VALUE]
#define XOR_EDX_FROM_PTR_ESI_(VALUE) xor edx, dword ptr [esi + VALUE]
#define XOR_EDX_FROM_PTR_EBP_(VALUE) xor edx, dword ptr [ebp + VALUE]
#define XOR_EDX_FROM_PTR_ESP_(VALUE) xor edx, dword ptr [esp + VALUE]

#define XOR_EDI_FROM_PTR_RAX_(VALUE) xor edi, dword ptr [rax + VALUE]
#define XOR_EDI_FROM_PTR_RBX_(VALUE) xor edi, dword ptr [rbx + VALUE]
#define XOR_EDI_FROM_PTR_RCX_(VALUE) xor edi, dword ptr [rcx + VALUE]
#define XOR_EDI_FROM_PTR_RDX_(VALUE) xor edi, dword ptr [rdx + VALUE]
#define XOR_EDI_FROM_PTR_RDI_(VALUE) xor edi, dword ptr [rdi + VALUE]
#define XOR_EDI_FROM_PTR_RSI_(VALUE) xor edi, dword ptr [rsi + VALUE]
#define XOR_EDI_FROM_PTR_RBP_(VALUE) xor edi, dword ptr [rbp + VALUE]
#define XOR_EDI_FROM_PTR_RSP_(VALUE) xor edi, dword ptr [rsp + VALUE]
#define XOR_EDI_FROM_PTR_R8_(VALUE) xor edi, dword ptr [r8 + VALUE]
#define XOR_EDI_FROM_PTR_R9_(VALUE) xor edi, dword ptr [r9 + VALUE]
#define XOR_EDI_FROM_PTR_R10_(VALUE) xor edi, dword ptr [r10 + VALUE]
#define XOR_EDI_FROM_PTR_R11_(VALUE) xor edi, dword ptr [r11 + VALUE]
#define XOR_EDI_FROM_PTR_R12_(VALUE) xor edi, dword ptr [r12 + VALUE]
#define XOR_EDI_FROM_PTR_R13_(VALUE) xor edi, dword ptr [r13 + VALUE]
#define XOR_EDI_FROM_PTR_R14_(VALUE) xor edi, dword ptr [r14 + VALUE]
#define XOR_EDI_FROM_PTR_R15_(VALUE) xor edi, dword ptr [r15 + VALUE]
#define XOR_EDI_FROM_PTR_EAX_(VALUE) xor edi, dword ptr [eax + VALUE]
#define XOR_EDI_FROM_PTR_EBX_(VALUE) xor edi, dword ptr [ebx + VALUE]
#define XOR_EDI_FROM_PTR_ECX_(VALUE) xor edi, dword ptr [ecx + VALUE]
#define XOR_EDI_FROM_PTR_EDX_(VALUE) xor edi, dword ptr [edx + VALUE]
#define XOR_EDI_FROM_PTR_EDI_(VALUE) xor edi, dword ptr [edi + VALUE]
#define XOR_EDI_FROM_PTR_ESI_(VALUE) xor edi, dword ptr [esi + VALUE]
#define XOR_EDI_FROM_PTR_EBP_(VALUE) xor edi, dword ptr [ebp + VALUE]
#define XOR_EDI_FROM_PTR_ESP_(VALUE) xor edi, dword ptr [esp + VALUE]

#define XOR_ESI_FROM_PTR_RAX_(VALUE) xor esi, dword ptr [rax + VALUE]
#define XOR_ESI_FROM_PTR_RBX_(VALUE) xor esi, dword ptr [rbx + VALUE]
#define XOR_ESI_FROM_PTR_RCX_(VALUE) xor esi, dword ptr [rcx + VALUE]
#define XOR_ESI_FROM_PTR_RDX_(VALUE) xor esi, dword ptr [rdx + VALUE]
#define XOR_ESI_FROM_PTR_RDI_(VALUE) xor esi, dword ptr [rdi + VALUE]
#define XOR_ESI_FROM_PTR_RSI_(VALUE) xor esi, dword ptr [rsi + VALUE]
#define XOR_ESI_FROM_PTR_RBP_(VALUE) xor esi, dword ptr [rbp + VALUE]
#define XOR_ESI_FROM_PTR_RSP_(VALUE) xor esi, dword ptr [rsp + VALUE]
#define XOR_ESI_FROM_PTR_R8_(VALUE) xor esi, dword ptr [r8 + VALUE]
#define XOR_ESI_FROM_PTR_R9_(VALUE) xor esi, dword ptr [r9 + VALUE]
#define XOR_ESI_FROM_PTR_R10_(VALUE) xor esi, dword ptr [r10 + VALUE]
#define XOR_ESI_FROM_PTR_R11_(VALUE) xor esi, dword ptr [r11 + VALUE]
#define XOR_ESI_FROM_PTR_R12_(VALUE) xor esi, dword ptr [r12 + VALUE]
#define XOR_ESI_FROM_PTR_R13_(VALUE) xor esi, dword ptr [r13 + VALUE]
#define XOR_ESI_FROM_PTR_R14_(VALUE) xor esi, dword ptr [r14 + VALUE]
#define XOR_ESI_FROM_PTR_R15_(VALUE) xor esi, dword ptr [r15 + VALUE]
#define XOR_ESI_FROM_PTR_EAX_(VALUE) xor esi, dword ptr [eax + VALUE]
#define XOR_ESI_FROM_PTR_EBX_(VALUE) xor esi, dword ptr [ebx + VALUE]
#define XOR_ESI_FROM_PTR_ECX_(VALUE) xor esi, dword ptr [ecx + VALUE]
#define XOR_ESI_FROM_PTR_EDX_(VALUE) xor esi, dword ptr [edx + VALUE]
#define XOR_ESI_FROM_PTR_EDI_(VALUE) xor esi, dword ptr [edi + VALUE]
#define XOR_ESI_FROM_PTR_ESI_(VALUE) xor esi, dword ptr [esi + VALUE]
#define XOR_ESI_FROM_PTR_EBP_(VALUE) xor esi, dword ptr [ebp + VALUE]
#define XOR_ESI_FROM_PTR_ESP_(VALUE) xor esi, dword ptr [esp + VALUE]

#define XOR_EBP_FROM_PTR_RAX_(VALUE) xor ebp, dword ptr [rax + VALUE]
#define XOR_EBP_FROM_PTR_RBX_(VALUE) xor ebp, dword ptr [rbx + VALUE]
#define XOR_EBP_FROM_PTR_RCX_(VALUE) xor ebp, dword ptr [rcx + VALUE]
#define XOR_EBP_FROM_PTR_RDX_(VALUE) xor ebp, dword ptr [rdx + VALUE]
#define XOR_EBP_FROM_PTR_RDI_(VALUE) xor ebp, dword ptr [rdi + VALUE]
#define XOR_EBP_FROM_PTR_RSI_(VALUE) xor ebp, dword ptr [rsi + VALUE]
#define XOR_EBP_FROM_PTR_RBP_(VALUE) xor ebp, dword ptr [rbp + VALUE]
#define XOR_EBP_FROM_PTR_RSP_(VALUE) xor ebp, dword ptr [rsp + VALUE]
#define XOR_EBP_FROM_PTR_R8_(VALUE) xor ebp, dword ptr [r8 + VALUE]
#define XOR_EBP_FROM_PTR_R9_(VALUE) xor ebp, dword ptr [r9 + VALUE]
#define XOR_EBP_FROM_PTR_R10_(VALUE) xor ebp, dword ptr [r10 + VALUE]
#define XOR_EBP_FROM_PTR_R11_(VALUE) xor ebp, dword ptr [r11 + VALUE]
#define XOR_EBP_FROM_PTR_R12_(VALUE) xor ebp, dword ptr [r12 + VALUE]
#define XOR_EBP_FROM_PTR_R13_(VALUE) xor ebp, dword ptr [r13 + VALUE]
#define XOR_EBP_FROM_PTR_R14_(VALUE) xor ebp, dword ptr [r14 + VALUE]
#define XOR_EBP_FROM_PTR_R15_(VALUE) xor ebp, dword ptr [r15 + VALUE]
#define XOR_EBP_FROM_PTR_EAX_(VALUE) xor ebp, dword ptr [eax + VALUE]
#define XOR_EBP_FROM_PTR_EBX_(VALUE) xor ebp, dword ptr [ebx + VALUE]
#define XOR_EBP_FROM_PTR_ECX_(VALUE) xor ebp, dword ptr [ecx + VALUE]
#define XOR_EBP_FROM_PTR_EDX_(VALUE) xor ebp, dword ptr [edx + VALUE]
#define XOR_EBP_FROM_PTR_EDI_(VALUE) xor ebp, dword ptr [edi + VALUE]
#define XOR_EBP_FROM_PTR_ESI_(VALUE) xor ebp, dword ptr [esi + VALUE]
#define XOR_EBP_FROM_PTR_EBP_(VALUE) xor ebp, dword ptr [ebp + VALUE]
#define XOR_EBP_FROM_PTR_ESP_(VALUE) xor ebp, dword ptr [esp + VALUE]

#define XOR_ESP_FROM_PTR_RAX_(VALUE) xor esp, dword ptr [rax + VALUE]
#define XOR_ESP_FROM_PTR_RBX_(VALUE) xor esp, dword ptr [rbx + VALUE]
#define XOR_ESP_FROM_PTR_RCX_(VALUE) xor esp, dword ptr [rcx + VALUE]
#define XOR_ESP_FROM_PTR_RDX_(VALUE) xor esp, dword ptr [rdx + VALUE]
#define XOR_ESP_FROM_PTR_RDI_(VALUE) xor esp, dword ptr [rdi + VALUE]
#define XOR_ESP_FROM_PTR_RSI_(VALUE) xor esp, dword ptr [rsi + VALUE]
#define XOR_ESP_FROM_PTR_RBP_(VALUE) xor esp, dword ptr [rbp + VALUE]
#define XOR_ESP_FROM_PTR_RSP_(VALUE) xor esp, dword ptr [rsp + VALUE]
#define XOR_ESP_FROM_PTR_R8_(VALUE) xor esp, dword ptr [r8 + VALUE]
#define XOR_ESP_FROM_PTR_R9_(VALUE) xor esp, dword ptr [r9 + VALUE]
#define XOR_ESP_FROM_PTR_R10_(VALUE) xor esp, dword ptr [r10 + VALUE]
#define XOR_ESP_FROM_PTR_R11_(VALUE) xor esp, dword ptr [r11 + VALUE]
#define XOR_ESP_FROM_PTR_R12_(VALUE) xor esp, dword ptr [r12 + VALUE]
#define XOR_ESP_FROM_PTR_R13_(VALUE) xor esp, dword ptr [r13 + VALUE]
#define XOR_ESP_FROM_PTR_R14_(VALUE) xor esp, dword ptr [r14 + VALUE]
#define XOR_ESP_FROM_PTR_R15_(VALUE) xor esp, dword ptr [r15 + VALUE]
#define XOR_ESP_FROM_PTR_EAX_(VALUE) xor esp, dword ptr [eax + VALUE]
#define XOR_ESP_FROM_PTR_EBX_(VALUE) xor esp, dword ptr [ebx + VALUE]
#define XOR_ESP_FROM_PTR_ECX_(VALUE) xor esp, dword ptr [ecx + VALUE]
#define XOR_ESP_FROM_PTR_EDX_(VALUE) xor esp, dword ptr [edx + VALUE]
#define XOR_ESP_FROM_PTR_EDI_(VALUE) xor esp, dword ptr [edi + VALUE]
#define XOR_ESP_FROM_PTR_ESI_(VALUE) xor esp, dword ptr [esi + VALUE]
#define XOR_ESP_FROM_PTR_EBP_(VALUE) xor esp, dword ptr [ebp + VALUE]
#define XOR_ESP_FROM_PTR_ESP_(VALUE) xor esp, dword ptr [esp + VALUE]

#define XOR_R8D_FROM_PTR_RAX_(VALUE) xor r8d, dword ptr [rax + VALUE]
#define XOR_R8D_FROM_PTR_RBX_(VALUE) xor r8d, dword ptr [rbx + VALUE]
#define XOR_R8D_FROM_PTR_RCX_(VALUE) xor r8d, dword ptr [rcx + VALUE]
#define XOR_R8D_FROM_PTR_RDX_(VALUE) xor r8d, dword ptr [rdx + VALUE]
#define XOR_R8D_FROM_PTR_RDI_(VALUE) xor r8d, dword ptr [rdi + VALUE]
#define XOR_R8D_FROM_PTR_RSI_(VALUE) xor r8d, dword ptr [rsi + VALUE]
#define XOR_R8D_FROM_PTR_RBP_(VALUE) xor r8d, dword ptr [rbp + VALUE]
#define XOR_R8D_FROM_PTR_RSP_(VALUE) xor r8d, dword ptr [rsp + VALUE]
#define XOR_R8D_FROM_PTR_R8_(VALUE) xor r8d, dword ptr [r8 + VALUE]
#define XOR_R8D_FROM_PTR_R9_(VALUE) xor r8d, dword ptr [r9 + VALUE]
#define XOR_R8D_FROM_PTR_R10_(VALUE) xor r8d, dword ptr [r10 + VALUE]
#define XOR_R8D_FROM_PTR_R11_(VALUE) xor r8d, dword ptr [r11 + VALUE]
#define XOR_R8D_FROM_PTR_R12_(VALUE) xor r8d, dword ptr [r12 + VALUE]
#define XOR_R8D_FROM_PTR_R13_(VALUE) xor r8d, dword ptr [r13 + VALUE]
#define XOR_R8D_FROM_PTR_R14_(VALUE) xor r8d, dword ptr [r14 + VALUE]
#define XOR_R8D_FROM_PTR_R15_(VALUE) xor r8d, dword ptr [r15 + VALUE]
#define XOR_R8D_FROM_PTR_EAX_(VALUE) xor r8d, dword ptr [eax + VALUE]
#define XOR_R8D_FROM_PTR_EBX_(VALUE) xor r8d, dword ptr [ebx + VALUE]
#define XOR_R8D_FROM_PTR_ECX_(VALUE) xor r8d, dword ptr [ecx + VALUE]
#define XOR_R8D_FROM_PTR_EDX_(VALUE) xor r8d, dword ptr [edx + VALUE]
#define XOR_R8D_FROM_PTR_EDI_(VALUE) xor r8d, dword ptr [edi + VALUE]
#define XOR_R8D_FROM_PTR_ESI_(VALUE) xor r8d, dword ptr [esi + VALUE]
#define XOR_R8D_FROM_PTR_EBP_(VALUE) xor r8d, dword ptr [ebp + VALUE]
#define XOR_R8D_FROM_PTR_ESP_(VALUE) xor r8d, dword ptr [esp + VALUE]

#define XOR_R9D_FROM_PTR_RAX_(VALUE) xor r9d, dword ptr [rax + VALUE]
#define XOR_R9D_FROM_PTR_RBX_(VALUE) xor r9d, dword ptr [rbx + VALUE]
#define XOR_R9D_FROM_PTR_RCX_(VALUE) xor r9d, dword ptr [rcx + VALUE]
#define XOR_R9D_FROM_PTR_RDX_(VALUE) xor r9d, dword ptr [rdx + VALUE]
#define XOR_R9D_FROM_PTR_RDI_(VALUE) xor r9d, dword ptr [rdi + VALUE]
#define XOR_R9D_FROM_PTR_RSI_(VALUE) xor r9d, dword ptr [rsi + VALUE]
#define XOR_R9D_FROM_PTR_RBP_(VALUE) xor r9d, dword ptr [rbp + VALUE]
#define XOR_R9D_FROM_PTR_RSP_(VALUE) xor r9d, dword ptr [rsp + VALUE]
#define XOR_R9D_FROM_PTR_R8_(VALUE) xor r9d, dword ptr [r8 + VALUE]
#define XOR_R9D_FROM_PTR_R9_(VALUE) xor r9d, dword ptr [r9 + VALUE]
#define XOR_R9D_FROM_PTR_R10_(VALUE) xor r9d, dword ptr [r10 + VALUE]
#define XOR_R9D_FROM_PTR_R11_(VALUE) xor r9d, dword ptr [r11 + VALUE]
#define XOR_R9D_FROM_PTR_R12_(VALUE) xor r9d, dword ptr [r12 + VALUE]
#define XOR_R9D_FROM_PTR_R13_(VALUE) xor r9d, dword ptr [r13 + VALUE]
#define XOR_R9D_FROM_PTR_R14_(VALUE) xor r9d, dword ptr [r14 + VALUE]
#define XOR_R9D_FROM_PTR_R15_(VALUE) xor r9d, dword ptr [r15 + VALUE]
#define XOR_R9D_FROM_PTR_EAX_(VALUE) xor r9d, dword ptr [eax + VALUE]
#define XOR_R9D_FROM_PTR_EBX_(VALUE) xor r9d, dword ptr [ebx + VALUE]
#define XOR_R9D_FROM_PTR_ECX_(VALUE) xor r9d, dword ptr [ecx + VALUE]
#define XOR_R9D_FROM_PTR_EDX_(VALUE) xor r9d, dword ptr [edx + VALUE]
#define XOR_R9D_FROM_PTR_EDI_(VALUE) xor r9d, dword ptr [edi + VALUE]
#define XOR_R9D_FROM_PTR_ESI_(VALUE) xor r9d, dword ptr [esi + VALUE]
#define XOR_R9D_FROM_PTR_EBP_(VALUE) xor r9d, dword ptr [ebp + VALUE]
#define XOR_R9D_FROM_PTR_ESP_(VALUE) xor r9d, dword ptr [esp + VALUE]

#define XOR_R10D_FROM_PTR_RAX_(VALUE) xor r10d, dword ptr [rax + VALUE]
#define XOR_R10D_FROM_PTR_RBX_(VALUE) xor r10d, dword ptr [rbx + VALUE]
#define XOR_R10D_FROM_PTR_RCX_(VALUE) xor r10d, dword ptr [rcx + VALUE]
#define XOR_R10D_FROM_PTR_RDX_(VALUE) xor r10d, dword ptr [rdx + VALUE]
#define XOR_R10D_FROM_PTR_RDI_(VALUE) xor r10d, dword ptr [rdi + VALUE]
#define XOR_R10D_FROM_PTR_RSI_(VALUE) xor r10d, dword ptr [rsi + VALUE]
#define XOR_R10D_FROM_PTR_RBP_(VALUE) xor r10d, dword ptr [rbp + VALUE]
#define XOR_R10D_FROM_PTR_RSP_(VALUE) xor r10d, dword ptr [rsp + VALUE]
#define XOR_R10D_FROM_PTR_R8_(VALUE) xor r10d, dword ptr [r8 + VALUE]
#define XOR_R10D_FROM_PTR_R9_(VALUE) xor r10d, dword ptr [r9 + VALUE]
#define XOR_R10D_FROM_PTR_R10_(VALUE) xor r10d, dword ptr [r10 + VALUE]
#define XOR_R10D_FROM_PTR_R11_(VALUE) xor r10d, dword ptr [r11 + VALUE]
#define XOR_R10D_FROM_PTR_R12_(VALUE) xor r10d, dword ptr [r12 + VALUE]
#define XOR_R10D_FROM_PTR_R13_(VALUE) xor r10d, dword ptr [r13 + VALUE]
#define XOR_R10D_FROM_PTR_R14_(VALUE) xor r10d, dword ptr [r14 + VALUE]
#define XOR_R10D_FROM_PTR_R15_(VALUE) xor r10d, dword ptr [r15 + VALUE]
#define XOR_R10D_FROM_PTR_EAX_(VALUE) xor r10d, dword ptr [eax + VALUE]
#define XOR_R10D_FROM_PTR_EBX_(VALUE) xor r10d, dword ptr [ebx + VALUE]
#define XOR_R10D_FROM_PTR_ECX_(VALUE) xor r10d, dword ptr [ecx + VALUE]
#define XOR_R10D_FROM_PTR_EDX_(VALUE) xor r10d, dword ptr [edx + VALUE]
#define XOR_R10D_FROM_PTR_EDI_(VALUE) xor r10d, dword ptr [edi + VALUE]
#define XOR_R10D_FROM_PTR_ESI_(VALUE) xor r10d, dword ptr [esi + VALUE]
#define XOR_R10D_FROM_PTR_EBP_(VALUE) xor r10d, dword ptr [ebp + VALUE]
#define XOR_R10D_FROM_PTR_ESP_(VALUE) xor r10d, dword ptr [esp + VALUE]

#define XOR_R11D_FROM_PTR_RAX_(VALUE) xor r11d, dword ptr [rax + VALUE]
#define XOR_R11D_FROM_PTR_RBX_(VALUE) xor r11d, dword ptr [rbx + VALUE]
#define XOR_R11D_FROM_PTR_RCX_(VALUE) xor r11d, dword ptr [rcx + VALUE]
#define XOR_R11D_FROM_PTR_RDX_(VALUE) xor r11d, dword ptr [rdx + VALUE]
#define XOR_R11D_FROM_PTR_RDI_(VALUE) xor r11d, dword ptr [rdi + VALUE]
#define XOR_R11D_FROM_PTR_RSI_(VALUE) xor r11d, dword ptr [rsi + VALUE]
#define XOR_R11D_FROM_PTR_RBP_(VALUE) xor r11d, dword ptr [rbp + VALUE]
#define XOR_R11D_FROM_PTR_RSP_(VALUE) xor r11d, dword ptr [rsp + VALUE]
#define XOR_R11D_FROM_PTR_R8_(VALUE) xor r11d, dword ptr [r8 + VALUE]
#define XOR_R11D_FROM_PTR_R9_(VALUE) xor r11d, dword ptr [r9 + VALUE]
#define XOR_R11D_FROM_PTR_R10_(VALUE) xor r11d, dword ptr [r10 + VALUE]
#define XOR_R11D_FROM_PTR_R11_(VALUE) xor r11d, dword ptr [r11 + VALUE]
#define XOR_R11D_FROM_PTR_R12_(VALUE) xor r11d, dword ptr [r12 + VALUE]
#define XOR_R11D_FROM_PTR_R13_(VALUE) xor r11d, dword ptr [r13 + VALUE]
#define XOR_R11D_FROM_PTR_R14_(VALUE) xor r11d, dword ptr [r14 + VALUE]
#define XOR_R11D_FROM_PTR_R15_(VALUE) xor r11d, dword ptr [r15 + VALUE]
#define XOR_R11D_FROM_PTR_EAX_(VALUE) xor r11d, dword ptr [eax + VALUE]
#define XOR_R11D_FROM_PTR_EBX_(VALUE) xor r11d, dword ptr [ebx + VALUE]
#define XOR_R11D_FROM_PTR_ECX_(VALUE) xor r11d, dword ptr [ecx + VALUE]
#define XOR_R11D_FROM_PTR_EDX_(VALUE) xor r11d, dword ptr [edx + VALUE]
#define XOR_R11D_FROM_PTR_EDI_(VALUE) xor r11d, dword ptr [edi + VALUE]
#define XOR_R11D_FROM_PTR_ESI_(VALUE) xor r11d, dword ptr [esi + VALUE]
#define XOR_R11D_FROM_PTR_EBP_(VALUE) xor r11d, dword ptr [ebp + VALUE]
#define XOR_R11D_FROM_PTR_ESP_(VALUE) xor r11d, dword ptr [esp + VALUE]

#define XOR_R12D_FROM_PTR_RAX_(VALUE) xor r12d, dword ptr [rax + VALUE]
#define XOR_R12D_FROM_PTR_RBX_(VALUE) xor r12d, dword ptr [rbx + VALUE]
#define XOR_R12D_FROM_PTR_RCX_(VALUE) xor r12d, dword ptr [rcx + VALUE]
#define XOR_R12D_FROM_PTR_RDX_(VALUE) xor r12d, dword ptr [rdx + VALUE]
#define XOR_R12D_FROM_PTR_RDI_(VALUE) xor r12d, dword ptr [rdi + VALUE]
#define XOR_R12D_FROM_PTR_RSI_(VALUE) xor r12d, dword ptr [rsi + VALUE]
#define XOR_R12D_FROM_PTR_RBP_(VALUE) xor r12d, dword ptr [rbp + VALUE]
#define XOR_R12D_FROM_PTR_RSP_(VALUE) xor r12d, dword ptr [rsp + VALUE]
#define XOR_R12D_FROM_PTR_R8_(VALUE) xor r12d, dword ptr [r8 + VALUE]
#define XOR_R12D_FROM_PTR_R9_(VALUE) xor r12d, dword ptr [r9 + VALUE]
#define XOR_R12D_FROM_PTR_R10_(VALUE) xor r12d, dword ptr [r10 + VALUE]
#define XOR_R12D_FROM_PTR_R11_(VALUE) xor r12d, dword ptr [r11 + VALUE]
#define XOR_R12D_FROM_PTR_R12_(VALUE) xor r12d, dword ptr [r12 + VALUE]
#define XOR_R12D_FROM_PTR_R13_(VALUE) xor r12d, dword ptr [r13 + VALUE]
#define XOR_R12D_FROM_PTR_R14_(VALUE) xor r12d, dword ptr [r14 + VALUE]
#define XOR_R12D_FROM_PTR_R15_(VALUE) xor r12d, dword ptr [r15 + VALUE]
#define XOR_R12D_FROM_PTR_EAX_(VALUE) xor r12d, dword ptr [eax + VALUE]
#define XOR_R12D_FROM_PTR_EBX_(VALUE) xor r12d, dword ptr [ebx + VALUE]
#define XOR_R12D_FROM_PTR_ECX_(VALUE) xor r12d, dword ptr [ecx + VALUE]
#define XOR_R12D_FROM_PTR_EDX_(VALUE) xor r12d, dword ptr [edx + VALUE]
#define XOR_R12D_FROM_PTR_EDI_(VALUE) xor r12d, dword ptr [edi + VALUE]
#define XOR_R12D_FROM_PTR_ESI_(VALUE) xor r12d, dword ptr [esi + VALUE]
#define XOR_R12D_FROM_PTR_EBP_(VALUE) xor r12d, dword ptr [ebp + VALUE]
#define XOR_R12D_FROM_PTR_ESP_(VALUE) xor r12d, dword ptr [esp + VALUE]

#define XOR_R13D_FROM_PTR_RAX_(VALUE) xor r13d, dword ptr [rax + VALUE]
#define XOR_R13D_FROM_PTR_RBX_(VALUE) xor r13d, dword ptr [rbx + VALUE]
#define XOR_R13D_FROM_PTR_RCX_(VALUE) xor r13d, dword ptr [rcx + VALUE]
#define XOR_R13D_FROM_PTR_RDX_(VALUE) xor r13d, dword ptr [rdx + VALUE]
#define XOR_R13D_FROM_PTR_RDI_(VALUE) xor r13d, dword ptr [rdi + VALUE]
#define XOR_R13D_FROM_PTR_RSI_(VALUE) xor r13d, dword ptr [rsi + VALUE]
#define XOR_R13D_FROM_PTR_RBP_(VALUE) xor r13d, dword ptr [rbp + VALUE]
#define XOR_R13D_FROM_PTR_RSP_(VALUE) xor r13d, dword ptr [rsp + VALUE]
#define XOR_R13D_FROM_PTR_R8_(VALUE) xor r13d, dword ptr [r8 + VALUE]
#define XOR_R13D_FROM_PTR_R9_(VALUE) xor r13d, dword ptr [r9 + VALUE]
#define XOR_R13D_FROM_PTR_R10_(VALUE) xor r13d, dword ptr [r10 + VALUE]
#define XOR_R13D_FROM_PTR_R11_(VALUE) xor r13d, dword ptr [r11 + VALUE]
#define XOR_R13D_FROM_PTR_R12_(VALUE) xor r13d, dword ptr [r12 + VALUE]
#define XOR_R13D_FROM_PTR_R13_(VALUE) xor r13d, dword ptr [r13 + VALUE]
#define XOR_R13D_FROM_PTR_R14_(VALUE) xor r13d, dword ptr [r14 + VALUE]
#define XOR_R13D_FROM_PTR_R15_(VALUE) xor r13d, dword ptr [r15 + VALUE]
#define XOR_R13D_FROM_PTR_EAX_(VALUE) xor r13d, dword ptr [eax + VALUE]
#define XOR_R13D_FROM_PTR_EBX_(VALUE) xor r13d, dword ptr [ebx + VALUE]
#define XOR_R13D_FROM_PTR_ECX_(VALUE) xor r13d, dword ptr [ecx + VALUE]
#define XOR_R13D_FROM_PTR_EDX_(VALUE) xor r13d, dword ptr [edx + VALUE]
#define XOR_R13D_FROM_PTR_EDI_(VALUE) xor r13d, dword ptr [edi + VALUE]
#define XOR_R13D_FROM_PTR_ESI_(VALUE) xor r13d, dword ptr [esi + VALUE]
#define XOR_R13D_FROM_PTR_EBP_(VALUE) xor r13d, dword ptr [ebp + VALUE]
#define XOR_R13D_FROM_PTR_ESP_(VALUE) xor r13d, dword ptr [esp + VALUE]

#define XOR_R14D_FROM_PTR_RAX_(VALUE) xor r14d, dword ptr [rax + VALUE]
#define XOR_R14D_FROM_PTR_RBX_(VALUE) xor r14d, dword ptr [rbx + VALUE]
#define XOR_R14D_FROM_PTR_RCX_(VALUE) xor r14d, dword ptr [rcx + VALUE]
#define XOR_R14D_FROM_PTR_RDX_(VALUE) xor r14d, dword ptr [rdx + VALUE]
#define XOR_R14D_FROM_PTR_RDI_(VALUE) xor r14d, dword ptr [rdi + VALUE]
#define XOR_R14D_FROM_PTR_RSI_(VALUE) xor r14d, dword ptr [rsi + VALUE]
#define XOR_R14D_FROM_PTR_RBP_(VALUE) xor r14d, dword ptr [rbp + VALUE]
#define XOR_R14D_FROM_PTR_RSP_(VALUE) xor r14d, dword ptr [rsp + VALUE]
#define XOR_R14D_FROM_PTR_R8_(VALUE) xor r14d, dword ptr [r8 + VALUE]
#define XOR_R14D_FROM_PTR_R9_(VALUE) xor r14d, dword ptr [r9 + VALUE]
#define XOR_R14D_FROM_PTR_R10_(VALUE) xor r14d, dword ptr [r10 + VALUE]
#define XOR_R14D_FROM_PTR_R11_(VALUE) xor r14d, dword ptr [r11 + VALUE]
#define XOR_R14D_FROM_PTR_R12_(VALUE) xor r14d, dword ptr [r12 + VALUE]
#define XOR_R14D_FROM_PTR_R13_(VALUE) xor r14d, dword ptr [r13 + VALUE]
#define XOR_R14D_FROM_PTR_R14_(VALUE) xor r14d, dword ptr [r14 + VALUE]
#define XOR_R14D_FROM_PTR_R15_(VALUE) xor r14d, dword ptr [r15 + VALUE]
#define XOR_R14D_FROM_PTR_EAX_(VALUE) xor r14d, dword ptr [eax + VALUE]
#define XOR_R14D_FROM_PTR_EBX_(VALUE) xor r14d, dword ptr [ebx + VALUE]
#define XOR_R14D_FROM_PTR_ECX_(VALUE) xor r14d, dword ptr [ecx + VALUE]
#define XOR_R14D_FROM_PTR_EDX_(VALUE) xor r14d, dword ptr [edx + VALUE]
#define XOR_R14D_FROM_PTR_EDI_(VALUE) xor r14d, dword ptr [edi + VALUE]
#define XOR_R14D_FROM_PTR_ESI_(VALUE) xor r14d, dword ptr [esi + VALUE]
#define XOR_R14D_FROM_PTR_EBP_(VALUE) xor r14d, dword ptr [ebp + VALUE]
#define XOR_R14D_FROM_PTR_ESP_(VALUE) xor r14d, dword ptr [esp + VALUE]

#define XOR_R15D_FROM_PTR_RAX_(VALUE) xor r15d, dword ptr [rax + VALUE]
#define XOR_R15D_FROM_PTR_RBX_(VALUE) xor r15d, dword ptr [rbx + VALUE]
#define XOR_R15D_FROM_PTR_RCX_(VALUE) xor r15d, dword ptr [rcx + VALUE]
#define XOR_R15D_FROM_PTR_RDX_(VALUE) xor r15d, dword ptr [rdx + VALUE]
#define XOR_R15D_FROM_PTR_RDI_(VALUE) xor r15d, dword ptr [rdi + VALUE]
#define XOR_R15D_FROM_PTR_RSI_(VALUE) xor r15d, dword ptr [rsi + VALUE]
#define XOR_R15D_FROM_PTR_RBP_(VALUE) xor r15d, dword ptr [rbp + VALUE]
#define XOR_R15D_FROM_PTR_RSP_(VALUE) xor r15d, dword ptr [rsp + VALUE]
#define XOR_R15D_FROM_PTR_R8_(VALUE) xor r15d, dword ptr [r8 + VALUE]
#define XOR_R15D_FROM_PTR_R9_(VALUE) xor r15d, dword ptr [r9 + VALUE]
#define XOR_R15D_FROM_PTR_R10_(VALUE) xor r15d, dword ptr [r10 + VALUE]
#define XOR_R15D_FROM_PTR_R11_(VALUE) xor r15d, dword ptr [r11 + VALUE]
#define XOR_R15D_FROM_PTR_R12_(VALUE) xor r15d, dword ptr [r12 + VALUE]
#define XOR_R15D_FROM_PTR_R13_(VALUE) xor r15d, dword ptr [r13 + VALUE]
#define XOR_R15D_FROM_PTR_R14_(VALUE) xor r15d, dword ptr [r14 + VALUE]
#define XOR_R15D_FROM_PTR_R15_(VALUE) xor r15d, dword ptr [r15 + VALUE]
#define XOR_R15D_FROM_PTR_EAX_(VALUE) xor r15d, dword ptr [eax + VALUE]
#define XOR_R15D_FROM_PTR_EBX_(VALUE) xor r15d, dword ptr [ebx + VALUE]
#define XOR_R15D_FROM_PTR_ECX_(VALUE) xor r15d, dword ptr [ecx + VALUE]
#define XOR_R15D_FROM_PTR_EDX_(VALUE) xor r15d, dword ptr [edx + VALUE]
#define XOR_R15D_FROM_PTR_EDI_(VALUE) xor r15d, dword ptr [edi + VALUE]
#define XOR_R15D_FROM_PTR_ESI_(VALUE) xor r15d, dword ptr [esi + VALUE]
#define XOR_R15D_FROM_PTR_EBP_(VALUE) xor r15d, dword ptr [ebp + VALUE]
#define XOR_R15D_FROM_PTR_ESP_(VALUE) xor r15d, dword ptr [esp + VALUE]

#define XOR_EAX_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], eax
#define XOR_EAX_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], eax
#define XOR_EAX_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], eax
#define XOR_EAX_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], eax
#define XOR_EAX_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], eax
#define XOR_EAX_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], eax
#define XOR_EAX_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], eax
#define XOR_EAX_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], eax
#define XOR_EAX_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], eax
#define XOR_EAX_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], eax
#define XOR_EAX_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], eax
#define XOR_EAX_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], eax
#define XOR_EAX_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], eax
#define XOR_EAX_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], eax
#define XOR_EAX_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], eax
#define XOR_EAX_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], eax
#define XOR_EAX_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], eax
#define XOR_EAX_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], eax
#define XOR_EAX_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], eax
#define XOR_EAX_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], eax
#define XOR_EAX_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], eax
#define XOR_EAX_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], eax
#define XOR_EAX_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], eax
#define XOR_EAX_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], eax

#define XOR_EBX_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], ebx
#define XOR_EBX_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], ebx
#define XOR_EBX_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], ebx
#define XOR_EBX_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], ebx
#define XOR_EBX_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], ebx
#define XOR_EBX_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], ebx
#define XOR_EBX_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], ebx
#define XOR_EBX_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], ebx
#define XOR_EBX_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], ebx
#define XOR_EBX_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], ebx
#define XOR_EBX_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], ebx
#define XOR_EBX_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], ebx
#define XOR_EBX_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], ebx
#define XOR_EBX_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], ebx
#define XOR_EBX_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], ebx
#define XOR_EBX_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], ebx
#define XOR_EBX_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], ebx
#define XOR_EBX_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], ebx
#define XOR_EBX_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], ebx
#define XOR_EBX_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], ebx
#define XOR_EBX_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], ebx
#define XOR_EBX_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], ebx
#define XOR_EBX_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], ebx
#define XOR_EBX_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], ebx

#define XOR_ECX_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], ecx
#define XOR_ECX_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], ecx
#define XOR_ECX_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], ecx
#define XOR_ECX_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], ecx
#define XOR_ECX_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], ecx
#define XOR_ECX_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], ecx
#define XOR_ECX_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], ecx
#define XOR_ECX_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], ecx
#define XOR_ECX_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], ecx
#define XOR_ECX_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], ecx
#define XOR_ECX_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], ecx
#define XOR_ECX_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], ecx
#define XOR_ECX_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], ecx
#define XOR_ECX_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], ecx
#define XOR_ECX_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], ecx
#define XOR_ECX_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], ecx
#define XOR_ECX_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], ecx
#define XOR_ECX_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], ecx
#define XOR_ECX_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], ecx
#define XOR_ECX_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], ecx
#define XOR_ECX_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], ecx
#define XOR_ECX_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], ecx
#define XOR_ECX_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], ecx
#define XOR_ECX_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], ecx

#define XOR_EDX_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], edx
#define XOR_EDX_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], edx
#define XOR_EDX_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], edx
#define XOR_EDX_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], edx
#define XOR_EDX_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], edx
#define XOR_EDX_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], edx
#define XOR_EDX_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], edx
#define XOR_EDX_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], edx
#define XOR_EDX_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], edx
#define XOR_EDX_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], edx
#define XOR_EDX_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], edx
#define XOR_EDX_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], edx
#define XOR_EDX_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], edx
#define XOR_EDX_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], edx
#define XOR_EDX_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], edx
#define XOR_EDX_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], edx
#define XOR_EDX_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], edx
#define XOR_EDX_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], edx
#define XOR_EDX_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], edx
#define XOR_EDX_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], edx
#define XOR_EDX_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], edx
#define XOR_EDX_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], edx
#define XOR_EDX_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], edx
#define XOR_EDX_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], edx

#define XOR_EDI_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], edi
#define XOR_EDI_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], edi
#define XOR_EDI_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], edi
#define XOR_EDI_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], edi
#define XOR_EDI_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], edi
#define XOR_EDI_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], edi
#define XOR_EDI_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], edi
#define XOR_EDI_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], edi
#define XOR_EDI_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], edi
#define XOR_EDI_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], edi
#define XOR_EDI_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], edi
#define XOR_EDI_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], edi
#define XOR_EDI_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], edi
#define XOR_EDI_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], edi
#define XOR_EDI_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], edi
#define XOR_EDI_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], edi
#define XOR_EDI_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], edi
#define XOR_EDI_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], edi
#define XOR_EDI_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], edi
#define XOR_EDI_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], edi
#define XOR_EDI_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], edi
#define XOR_EDI_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], edi
#define XOR_EDI_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], edi
#define XOR_EDI_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], edi

#define XOR_ESI_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], esi
#define XOR_ESI_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], esi
#define XOR_ESI_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], esi
#define XOR_ESI_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], esi
#define XOR_ESI_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], esi
#define XOR_ESI_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], esi
#define XOR_ESI_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], esi
#define XOR_ESI_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], esi
#define XOR_ESI_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], esi
#define XOR_ESI_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], esi
#define XOR_ESI_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], esi
#define XOR_ESI_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], esi
#define XOR_ESI_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], esi
#define XOR_ESI_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], esi
#define XOR_ESI_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], esi
#define XOR_ESI_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], esi
#define XOR_ESI_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], esi
#define XOR_ESI_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], esi
#define XOR_ESI_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], esi
#define XOR_ESI_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], esi
#define XOR_ESI_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], esi
#define XOR_ESI_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], esi
#define XOR_ESI_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], esi
#define XOR_ESI_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], esi

#define XOR_EBP_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], ebp
#define XOR_EBP_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], ebp
#define XOR_EBP_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], ebp
#define XOR_EBP_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], ebp
#define XOR_EBP_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], ebp
#define XOR_EBP_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], ebp
#define XOR_EBP_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], ebp
#define XOR_EBP_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], ebp
#define XOR_EBP_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], ebp
#define XOR_EBP_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], ebp
#define XOR_EBP_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], ebp
#define XOR_EBP_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], ebp
#define XOR_EBP_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], ebp
#define XOR_EBP_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], ebp
#define XOR_EBP_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], ebp
#define XOR_EBP_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], ebp
#define XOR_EBP_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], ebp
#define XOR_EBP_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], ebp
#define XOR_EBP_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], ebp
#define XOR_EBP_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], ebp
#define XOR_EBP_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], ebp
#define XOR_EBP_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], ebp
#define XOR_EBP_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], ebp
#define XOR_EBP_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], ebp

#define XOR_ESP_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], esp
#define XOR_ESP_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], esp
#define XOR_ESP_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], esp
#define XOR_ESP_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], esp
#define XOR_ESP_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], esp
#define XOR_ESP_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], esp
#define XOR_ESP_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], esp
#define XOR_ESP_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], esp
#define XOR_ESP_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], esp
#define XOR_ESP_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], esp
#define XOR_ESP_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], esp
#define XOR_ESP_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], esp
#define XOR_ESP_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], esp
#define XOR_ESP_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], esp
#define XOR_ESP_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], esp
#define XOR_ESP_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], esp
#define XOR_ESP_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], esp
#define XOR_ESP_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], esp
#define XOR_ESP_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], esp
#define XOR_ESP_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], esp
#define XOR_ESP_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], esp
#define XOR_ESP_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], esp
#define XOR_ESP_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], esp
#define XOR_ESP_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], esp

#define XOR_R8D_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], r8d
#define XOR_R8D_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], r8d
#define XOR_R8D_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], r8d
#define XOR_R8D_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], r8d
#define XOR_R8D_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], r8d
#define XOR_R8D_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], r8d
#define XOR_R8D_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], r8d
#define XOR_R8D_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], r8d
#define XOR_R8D_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], r8d
#define XOR_R8D_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], r8d
#define XOR_R8D_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], r8d
#define XOR_R8D_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], r8d
#define XOR_R8D_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], r8d
#define XOR_R8D_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], r8d
#define XOR_R8D_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], r8d
#define XOR_R8D_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], r8d
#define XOR_R8D_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], r8d
#define XOR_R8D_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], r8d
#define XOR_R8D_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], r8d
#define XOR_R8D_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], r8d
#define XOR_R8D_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], r8d
#define XOR_R8D_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], r8d
#define XOR_R8D_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], r8d
#define XOR_R8D_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], r8d

#define XOR_R9D_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], r9d
#define XOR_R9D_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], r9d
#define XOR_R9D_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], r9d
#define XOR_R9D_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], r9d
#define XOR_R9D_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], r9d
#define XOR_R9D_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], r9d
#define XOR_R9D_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], r9d
#define XOR_R9D_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], r9d
#define XOR_R9D_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], r9d
#define XOR_R9D_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], r9d
#define XOR_R9D_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], r9d
#define XOR_R9D_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], r9d
#define XOR_R9D_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], r9d
#define XOR_R9D_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], r9d
#define XOR_R9D_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], r9d
#define XOR_R9D_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], r9d
#define XOR_R9D_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], r9d
#define XOR_R9D_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], r9d
#define XOR_R9D_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], r9d
#define XOR_R9D_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], r9d
#define XOR_R9D_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], r9d
#define XOR_R9D_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], r9d
#define XOR_R9D_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], r9d
#define XOR_R9D_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], r9d

#define XOR_R10D_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], r10d
#define XOR_R10D_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], r10d
#define XOR_R10D_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], r10d
#define XOR_R10D_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], r10d
#define XOR_R10D_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], r10d
#define XOR_R10D_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], r10d
#define XOR_R10D_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], r10d
#define XOR_R10D_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], r10d
#define XOR_R10D_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], r10d
#define XOR_R10D_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], r10d
#define XOR_R10D_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], r10d
#define XOR_R10D_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], r10d
#define XOR_R10D_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], r10d
#define XOR_R10D_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], r10d
#define XOR_R10D_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], r10d
#define XOR_R10D_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], r10d
#define XOR_R10D_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], r10d
#define XOR_R10D_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], r10d
#define XOR_R10D_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], r10d
#define XOR_R10D_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], r10d
#define XOR_R10D_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], r10d
#define XOR_R10D_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], r10d
#define XOR_R10D_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], r10d
#define XOR_R10D_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], r10d

#define XOR_R11D_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], r11d
#define XOR_R11D_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], r11d
#define XOR_R11D_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], r11d
#define XOR_R11D_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], r11d
#define XOR_R11D_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], r11d
#define XOR_R11D_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], r11d
#define XOR_R11D_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], r11d
#define XOR_R11D_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], r11d
#define XOR_R11D_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], r11d
#define XOR_R11D_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], r11d
#define XOR_R11D_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], r11d
#define XOR_R11D_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], r11d
#define XOR_R11D_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], r11d
#define XOR_R11D_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], r11d
#define XOR_R11D_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], r11d
#define XOR_R11D_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], r11d
#define XOR_R11D_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], r11d
#define XOR_R11D_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], r11d
#define XOR_R11D_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], r11d
#define XOR_R11D_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], r11d
#define XOR_R11D_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], r11d
#define XOR_R11D_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], r11d
#define XOR_R11D_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], r11d
#define XOR_R11D_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], r11d

#define XOR_R12D_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], r12d
#define XOR_R12D_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], r12d
#define XOR_R12D_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], r12d
#define XOR_R12D_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], r12d
#define XOR_R12D_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], r12d
#define XOR_R12D_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], r12d
#define XOR_R12D_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], r12d
#define XOR_R12D_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], r12d
#define XOR_R12D_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], r12d
#define XOR_R12D_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], r12d
#define XOR_R12D_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], r12d
#define XOR_R12D_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], r12d
#define XOR_R12D_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], r12d
#define XOR_R12D_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], r12d
#define XOR_R12D_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], r12d
#define XOR_R12D_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], r12d
#define XOR_R12D_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], r12d
#define XOR_R12D_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], r12d
#define XOR_R12D_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], r12d
#define XOR_R12D_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], r12d
#define XOR_R12D_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], r12d
#define XOR_R12D_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], r12d
#define XOR_R12D_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], r12d
#define XOR_R12D_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], r12d

#define XOR_R13D_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], r13d
#define XOR_R13D_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], r13d
#define XOR_R13D_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], r13d
#define XOR_R13D_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], r13d
#define XOR_R13D_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], r13d
#define XOR_R13D_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], r13d
#define XOR_R13D_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], r13d
#define XOR_R13D_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], r13d
#define XOR_R13D_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], r13d
#define XOR_R13D_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], r13d
#define XOR_R13D_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], r13d
#define XOR_R13D_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], r13d
#define XOR_R13D_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], r13d
#define XOR_R13D_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], r13d
#define XOR_R13D_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], r13d
#define XOR_R13D_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], r13d
#define XOR_R13D_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], r13d
#define XOR_R13D_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], r13d
#define XOR_R13D_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], r13d
#define XOR_R13D_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], r13d
#define XOR_R13D_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], r13d
#define XOR_R13D_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], r13d
#define XOR_R13D_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], r13d
#define XOR_R13D_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], r13d

#define XOR_R14D_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], r14d
#define XOR_R14D_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], r14d
#define XOR_R14D_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], r14d
#define XOR_R14D_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], r14d
#define XOR_R14D_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], r14d
#define XOR_R14D_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], r14d
#define XOR_R14D_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], r14d
#define XOR_R14D_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], r14d
#define XOR_R14D_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], r14d
#define XOR_R14D_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], r14d
#define XOR_R14D_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], r14d
#define XOR_R14D_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], r14d
#define XOR_R14D_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], r14d
#define XOR_R14D_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], r14d
#define XOR_R14D_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], r14d
#define XOR_R14D_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], r14d
#define XOR_R14D_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], r14d
#define XOR_R14D_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], r14d
#define XOR_R14D_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], r14d
#define XOR_R14D_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], r14d
#define XOR_R14D_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], r14d
#define XOR_R14D_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], r14d
#define XOR_R14D_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], r14d
#define XOR_R14D_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], r14d

#define XOR_R15D_TO_PTR_RAX_(VALUE) xor dword ptr [rax + VALUE], r15d
#define XOR_R15D_TO_PTR_RBX_(VALUE) xor dword ptr [rbx + VALUE], r15d
#define XOR_R15D_TO_PTR_RCX_(VALUE) xor dword ptr [rcx + VALUE], r15d
#define XOR_R15D_TO_PTR_RDX_(VALUE) xor dword ptr [rdx + VALUE], r15d
#define XOR_R15D_TO_PTR_RDI_(VALUE) xor dword ptr [rdi + VALUE], r15d
#define XOR_R15D_TO_PTR_RSI_(VALUE) xor dword ptr [rsi + VALUE], r15d
#define XOR_R15D_TO_PTR_RBP_(VALUE) xor dword ptr [rbp + VALUE], r15d
#define XOR_R15D_TO_PTR_RSP_(VALUE) xor dword ptr [rsp + VALUE], r15d
#define XOR_R15D_TO_PTR_R8_(VALUE) xor dword ptr [r8 + VALUE], r15d
#define XOR_R15D_TO_PTR_R9_(VALUE) xor dword ptr [r9 + VALUE], r15d
#define XOR_R15D_TO_PTR_R10_(VALUE) xor dword ptr [r10 + VALUE], r15d
#define XOR_R15D_TO_PTR_R11_(VALUE) xor dword ptr [r11 + VALUE], r15d
#define XOR_R15D_TO_PTR_R12_(VALUE) xor dword ptr [r12 + VALUE], r15d
#define XOR_R15D_TO_PTR_R13_(VALUE) xor dword ptr [r13 + VALUE], r15d
#define XOR_R15D_TO_PTR_R14_(VALUE) xor dword ptr [r14 + VALUE], r15d
#define XOR_R15D_TO_PTR_R15_(VALUE) xor dword ptr [r15 + VALUE], r15d
#define XOR_R15D_TO_PTR_EAX_(VALUE) xor dword ptr [eax + VALUE], r15d
#define XOR_R15D_TO_PTR_EBX_(VALUE) xor dword ptr [ebx + VALUE], r15d
#define XOR_R15D_TO_PTR_ECX_(VALUE) xor dword ptr [ecx + VALUE], r15d
#define XOR_R15D_TO_PTR_EDX_(VALUE) xor dword ptr [edx + VALUE], r15d
#define XOR_R15D_TO_PTR_EDI_(VALUE) xor dword ptr [edi + VALUE], r15d
#define XOR_R15D_TO_PTR_ESI_(VALUE) xor dword ptr [esi + VALUE], r15d
#define XOR_R15D_TO_PTR_EBP_(VALUE) xor dword ptr [ebp + VALUE], r15d
#define XOR_R15D_TO_PTR_ESP_(VALUE) xor dword ptr [esp + VALUE], r15d
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
