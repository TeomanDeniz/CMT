#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define SBB_EAX_FROM_PTR_(VALUE) sbb eax, dword ptr [VALUE]
#define SBB_EBX_FROM_PTR_(VALUE) sbb ebx, dword ptr [VALUE]
#define SBB_ECX_FROM_PTR_(VALUE) sbb ecx, dword ptr [VALUE]
#define SBB_EDX_FROM_PTR_(VALUE) sbb edx, dword ptr [VALUE]
#define SBB_EDI_FROM_PTR_(VALUE) sbb edi, dword ptr [VALUE]
#define SBB_ESI_FROM_PTR_(VALUE) sbb esi, dword ptr [VALUE]
#define SBB_EBP_FROM_PTR_(VALUE) sbb ebp, dword ptr [VALUE]
#define SBB_ESP_FROM_PTR_(VALUE) sbb esp, dword ptr [VALUE]

#define SBB_EAX_TO_PTR_(VALUE) sbb dword ptr [VALUE], eax
#define SBB_EBX_TO_PTR_(VALUE) sbb dword ptr [VALUE], ebx
#define SBB_ECX_TO_PTR_(VALUE) sbb dword ptr [VALUE], ecx
#define SBB_EDX_TO_PTR_(VALUE) sbb dword ptr [VALUE], edx
#define SBB_EDI_TO_PTR_(VALUE) sbb dword ptr [VALUE], edi
#define SBB_ESI_TO_PTR_(VALUE) sbb dword ptr [VALUE], esi
#define SBB_EBP_TO_PTR_(VALUE) sbb dword ptr [VALUE], ebp
#define SBB_ESP_TO_PTR_(VALUE) sbb dword ptr [VALUE], esp

#define SBB_EAX_FROM_PTR_EAX sbb eax, dword ptr [eax]
#define SBB_EAX_FROM_PTR_EBX sbb eax, dword ptr [ebx]
#define SBB_EAX_FROM_PTR_ECX sbb eax, dword ptr [ecx]
#define SBB_EAX_FROM_PTR_EDX sbb eax, dword ptr [edx]
#define SBB_EAX_FROM_PTR_EDI sbb eax, dword ptr [edi]
#define SBB_EAX_FROM_PTR_ESI sbb eax, dword ptr [esi]
#define SBB_EAX_FROM_PTR_EBP sbb eax, dword ptr [ebp]
#define SBB_EAX_FROM_PTR_ESP sbb eax, dword ptr [esp]
#define SBB_EAX_FROM_PTR_BX sbb eax, dword ptr [bx]
#define SBB_EAX_FROM_PTR_BP sbb eax, dword ptr [bp]
#define SBB_EAX_FROM_PTR_SI sbb eax, dword ptr [si]
#define SBB_EAX_FROM_PTR_DI sbb eax, dword ptr [di]

#define SBB_EBX_FROM_PTR_EAX sbb ebx, dword ptr [eax]
#define SBB_EBX_FROM_PTR_EBX sbb ebx, dword ptr [ebx]
#define SBB_EBX_FROM_PTR_ECX sbb ebx, dword ptr [ecx]
#define SBB_EBX_FROM_PTR_EDX sbb ebx, dword ptr [edx]
#define SBB_EBX_FROM_PTR_EDI sbb ebx, dword ptr [edi]
#define SBB_EBX_FROM_PTR_ESI sbb ebx, dword ptr [esi]
#define SBB_EBX_FROM_PTR_EBP sbb ebx, dword ptr [ebp]
#define SBB_EBX_FROM_PTR_ESP sbb ebx, dword ptr [esp]
#define SBB_EBX_FROM_PTR_BX sbb ebx, dword ptr [bx]
#define SBB_EBX_FROM_PTR_BP sbb ebx, dword ptr [bp]
#define SBB_EBX_FROM_PTR_SI sbb ebx, dword ptr [si]
#define SBB_EBX_FROM_PTR_DI sbb ebx, dword ptr [di]

#define SBB_ECX_FROM_PTR_EAX sbb ecx, dword ptr [eax]
#define SBB_ECX_FROM_PTR_EBX sbb ecx, dword ptr [ebx]
#define SBB_ECX_FROM_PTR_ECX sbb ecx, dword ptr [ecx]
#define SBB_ECX_FROM_PTR_EDX sbb ecx, dword ptr [edx]
#define SBB_ECX_FROM_PTR_EDI sbb ecx, dword ptr [edi]
#define SBB_ECX_FROM_PTR_ESI sbb ecx, dword ptr [esi]
#define SBB_ECX_FROM_PTR_EBP sbb ecx, dword ptr [ebp]
#define SBB_ECX_FROM_PTR_ESP sbb ecx, dword ptr [esp]
#define SBB_ECX_FROM_PTR_BX sbb ecx, dword ptr [bx]
#define SBB_ECX_FROM_PTR_BP sbb ecx, dword ptr [bp]
#define SBB_ECX_FROM_PTR_SI sbb ecx, dword ptr [si]
#define SBB_ECX_FROM_PTR_DI sbb ecx, dword ptr [di]

#define SBB_EDX_FROM_PTR_EAX sbb edx, dword ptr [eax]
#define SBB_EDX_FROM_PTR_EBX sbb edx, dword ptr [ebx]
#define SBB_EDX_FROM_PTR_ECX sbb edx, dword ptr [ecx]
#define SBB_EDX_FROM_PTR_EDX sbb edx, dword ptr [edx]
#define SBB_EDX_FROM_PTR_EDI sbb edx, dword ptr [edi]
#define SBB_EDX_FROM_PTR_ESI sbb edx, dword ptr [esi]
#define SBB_EDX_FROM_PTR_EBP sbb edx, dword ptr [ebp]
#define SBB_EDX_FROM_PTR_ESP sbb edx, dword ptr [esp]
#define SBB_EDX_FROM_PTR_BX sbb edx, dword ptr [bx]
#define SBB_EDX_FROM_PTR_BP sbb edx, dword ptr [bp]
#define SBB_EDX_FROM_PTR_SI sbb edx, dword ptr [si]
#define SBB_EDX_FROM_PTR_DI sbb edx, dword ptr [di]

#define SBB_EDI_FROM_PTR_EAX sbb edi, dword ptr [eax]
#define SBB_EDI_FROM_PTR_EBX sbb edi, dword ptr [ebx]
#define SBB_EDI_FROM_PTR_ECX sbb edi, dword ptr [ecx]
#define SBB_EDI_FROM_PTR_EDX sbb edi, dword ptr [edx]
#define SBB_EDI_FROM_PTR_EDI sbb edi, dword ptr [edi]
#define SBB_EDI_FROM_PTR_ESI sbb edi, dword ptr [esi]
#define SBB_EDI_FROM_PTR_EBP sbb edi, dword ptr [ebp]
#define SBB_EDI_FROM_PTR_ESP sbb edi, dword ptr [esp]
#define SBB_EDI_FROM_PTR_BX sbb edi, dword ptr [bx]
#define SBB_EDI_FROM_PTR_BP sbb edi, dword ptr [bp]
#define SBB_EDI_FROM_PTR_SI sbb edi, dword ptr [si]
#define SBB_EDI_FROM_PTR_DI sbb edi, dword ptr [di]

#define SBB_ESI_FROM_PTR_EAX sbb esi, dword ptr [eax]
#define SBB_ESI_FROM_PTR_EBX sbb esi, dword ptr [ebx]
#define SBB_ESI_FROM_PTR_ECX sbb esi, dword ptr [ecx]
#define SBB_ESI_FROM_PTR_EDX sbb esi, dword ptr [edx]
#define SBB_ESI_FROM_PTR_EDI sbb esi, dword ptr [edi]
#define SBB_ESI_FROM_PTR_ESI sbb esi, dword ptr [esi]
#define SBB_ESI_FROM_PTR_EBP sbb esi, dword ptr [ebp]
#define SBB_ESI_FROM_PTR_ESP sbb esi, dword ptr [esp]
#define SBB_ESI_FROM_PTR_BX sbb esi, dword ptr [bx]
#define SBB_ESI_FROM_PTR_BP sbb esi, dword ptr [bp]
#define SBB_ESI_FROM_PTR_SI sbb esi, dword ptr [si]
#define SBB_ESI_FROM_PTR_DI sbb esi, dword ptr [di]

#define SBB_EBP_FROM_PTR_EAX sbb ebp, dword ptr [eax]
#define SBB_EBP_FROM_PTR_EBX sbb ebp, dword ptr [ebx]
#define SBB_EBP_FROM_PTR_ECX sbb ebp, dword ptr [ecx]
#define SBB_EBP_FROM_PTR_EDX sbb ebp, dword ptr [edx]
#define SBB_EBP_FROM_PTR_EDI sbb ebp, dword ptr [edi]
#define SBB_EBP_FROM_PTR_ESI sbb ebp, dword ptr [esi]
#define SBB_EBP_FROM_PTR_EBP sbb ebp, dword ptr [ebp]
#define SBB_EBP_FROM_PTR_ESP sbb ebp, dword ptr [esp]
#define SBB_EBP_FROM_PTR_BX sbb ebp, dword ptr [bx]
#define SBB_EBP_FROM_PTR_BP sbb ebp, dword ptr [bp]
#define SBB_EBP_FROM_PTR_SI sbb ebp, dword ptr [si]
#define SBB_EBP_FROM_PTR_DI sbb ebp, dword ptr [di]

#define SBB_ESP_FROM_PTR_EAX sbb esp, dword ptr [eax]
#define SBB_ESP_FROM_PTR_EBX sbb esp, dword ptr [ebx]
#define SBB_ESP_FROM_PTR_ECX sbb esp, dword ptr [ecx]
#define SBB_ESP_FROM_PTR_EDX sbb esp, dword ptr [edx]
#define SBB_ESP_FROM_PTR_EDI sbb esp, dword ptr [edi]
#define SBB_ESP_FROM_PTR_ESI sbb esp, dword ptr [esi]
#define SBB_ESP_FROM_PTR_EBP sbb esp, dword ptr [ebp]
#define SBB_ESP_FROM_PTR_ESP sbb esp, dword ptr [esp]
#define SBB_ESP_FROM_PTR_BX sbb esp, dword ptr [bx]
#define SBB_ESP_FROM_PTR_BP sbb esp, dword ptr [bp]
#define SBB_ESP_FROM_PTR_SI sbb esp, dword ptr [si]
#define SBB_ESP_FROM_PTR_DI sbb esp, dword ptr [di]

#define SBB_EAX_TO_PTR_EAX sbb dword ptr [eax], eax
#define SBB_EAX_TO_PTR_EBX sbb dword ptr [ebx], eax
#define SBB_EAX_TO_PTR_ECX sbb dword ptr [ecx], eax
#define SBB_EAX_TO_PTR_EDX sbb dword ptr [edx], eax
#define SBB_EAX_TO_PTR_EDI sbb dword ptr [edi], eax
#define SBB_EAX_TO_PTR_ESI sbb dword ptr [esi], eax
#define SBB_EAX_TO_PTR_EBP sbb dword ptr [ebp], eax
#define SBB_EAX_TO_PTR_ESP sbb dword ptr [esp], eax
#define SBB_EAX_TO_PTR_BX sbb dword ptr [bx], eax
#define SBB_EAX_TO_PTR_BP sbb dword ptr [bp], eax
#define SBB_EAX_TO_PTR_SI sbb dword ptr [si], eax
#define SBB_EAX_TO_PTR_DI sbb dword ptr [di], eax

#define SBB_EBX_TO_PTR_EAX sbb dword ptr [eax], ebx
#define SBB_EBX_TO_PTR_EBX sbb dword ptr [ebx], ebx
#define SBB_EBX_TO_PTR_ECX sbb dword ptr [ecx], ebx
#define SBB_EBX_TO_PTR_EDX sbb dword ptr [edx], ebx
#define SBB_EBX_TO_PTR_EDI sbb dword ptr [edi], ebx
#define SBB_EBX_TO_PTR_ESI sbb dword ptr [esi], ebx
#define SBB_EBX_TO_PTR_EBP sbb dword ptr [ebp], ebx
#define SBB_EBX_TO_PTR_ESP sbb dword ptr [esp], ebx
#define SBB_EBX_TO_PTR_BX sbb dword ptr [bx], ebx
#define SBB_EBX_TO_PTR_BP sbb dword ptr [bp], ebx
#define SBB_EBX_TO_PTR_SI sbb dword ptr [si], ebx
#define SBB_EBX_TO_PTR_DI sbb dword ptr [di], ebx

#define SBB_ECX_TO_PTR_EAX sbb dword ptr [eax], ecx
#define SBB_ECX_TO_PTR_EBX sbb dword ptr [ebx], ecx
#define SBB_ECX_TO_PTR_ECX sbb dword ptr [ecx], ecx
#define SBB_ECX_TO_PTR_EDX sbb dword ptr [edx], ecx
#define SBB_ECX_TO_PTR_EDI sbb dword ptr [edi], ecx
#define SBB_ECX_TO_PTR_ESI sbb dword ptr [esi], ecx
#define SBB_ECX_TO_PTR_EBP sbb dword ptr [ebp], ecx
#define SBB_ECX_TO_PTR_ESP sbb dword ptr [esp], ecx
#define SBB_ECX_TO_PTR_BX sbb dword ptr [bx], ecx
#define SBB_ECX_TO_PTR_BP sbb dword ptr [bp], ecx
#define SBB_ECX_TO_PTR_SI sbb dword ptr [si], ecx
#define SBB_ECX_TO_PTR_DI sbb dword ptr [di], ecx

#define SBB_EDX_TO_PTR_EAX sbb dword ptr [eax], edx
#define SBB_EDX_TO_PTR_EBX sbb dword ptr [ebx], edx
#define SBB_EDX_TO_PTR_ECX sbb dword ptr [ecx], edx
#define SBB_EDX_TO_PTR_EDX sbb dword ptr [edx], edx
#define SBB_EDX_TO_PTR_EDI sbb dword ptr [edi], edx
#define SBB_EDX_TO_PTR_ESI sbb dword ptr [esi], edx
#define SBB_EDX_TO_PTR_EBP sbb dword ptr [ebp], edx
#define SBB_EDX_TO_PTR_ESP sbb dword ptr [esp], edx
#define SBB_EDX_TO_PTR_BX sbb dword ptr [bx], edx
#define SBB_EDX_TO_PTR_BP sbb dword ptr [bp], edx
#define SBB_EDX_TO_PTR_SI sbb dword ptr [si], edx
#define SBB_EDX_TO_PTR_DI sbb dword ptr [di], edx

#define SBB_EDI_TO_PTR_EAX sbb dword ptr [eax], edi
#define SBB_EDI_TO_PTR_EBX sbb dword ptr [ebx], edi
#define SBB_EDI_TO_PTR_ECX sbb dword ptr [ecx], edi
#define SBB_EDI_TO_PTR_EDX sbb dword ptr [edx], edi
#define SBB_EDI_TO_PTR_EDI sbb dword ptr [edi], edi
#define SBB_EDI_TO_PTR_ESI sbb dword ptr [esi], edi
#define SBB_EDI_TO_PTR_EBP sbb dword ptr [ebp], edi
#define SBB_EDI_TO_PTR_ESP sbb dword ptr [esp], edi
#define SBB_EDI_TO_PTR_BX sbb dword ptr [bx], edi
#define SBB_EDI_TO_PTR_BP sbb dword ptr [bp], edi
#define SBB_EDI_TO_PTR_SI sbb dword ptr [si], edi
#define SBB_EDI_TO_PTR_DI sbb dword ptr [di], edi

#define SBB_ESI_TO_PTR_EAX sbb dword ptr [eax], esi
#define SBB_ESI_TO_PTR_EBX sbb dword ptr [ebx], esi
#define SBB_ESI_TO_PTR_ECX sbb dword ptr [ecx], esi
#define SBB_ESI_TO_PTR_EDX sbb dword ptr [edx], esi
#define SBB_ESI_TO_PTR_EDI sbb dword ptr [edi], esi
#define SBB_ESI_TO_PTR_ESI sbb dword ptr [esi], esi
#define SBB_ESI_TO_PTR_EBP sbb dword ptr [ebp], esi
#define SBB_ESI_TO_PTR_ESP sbb dword ptr [esp], esi
#define SBB_ESI_TO_PTR_BX sbb dword ptr [bx], esi
#define SBB_ESI_TO_PTR_BP sbb dword ptr [bp], esi
#define SBB_ESI_TO_PTR_SI sbb dword ptr [si], esi
#define SBB_ESI_TO_PTR_DI sbb dword ptr [di], esi

#define SBB_EBP_TO_PTR_EAX sbb dword ptr [eax], ebp
#define SBB_EBP_TO_PTR_EBX sbb dword ptr [ebx], ebp
#define SBB_EBP_TO_PTR_ECX sbb dword ptr [ecx], ebp
#define SBB_EBP_TO_PTR_EDX sbb dword ptr [edx], ebp
#define SBB_EBP_TO_PTR_EDI sbb dword ptr [edi], ebp
#define SBB_EBP_TO_PTR_ESI sbb dword ptr [esi], ebp
#define SBB_EBP_TO_PTR_EBP sbb dword ptr [ebp], ebp
#define SBB_EBP_TO_PTR_ESP sbb dword ptr [esp], ebp
#define SBB_EBP_TO_PTR_BX sbb dword ptr [bx], ebp
#define SBB_EBP_TO_PTR_BP sbb dword ptr [bp], ebp
#define SBB_EBP_TO_PTR_SI sbb dword ptr [si], ebp
#define SBB_EBP_TO_PTR_DI sbb dword ptr [di], ebp

#define SBB_ESP_TO_PTR_EAX sbb dword ptr [eax], esp
#define SBB_ESP_TO_PTR_EBX sbb dword ptr [ebx], esp
#define SBB_ESP_TO_PTR_ECX sbb dword ptr [ecx], esp
#define SBB_ESP_TO_PTR_EDX sbb dword ptr [edx], esp
#define SBB_ESP_TO_PTR_EDI sbb dword ptr [edi], esp
#define SBB_ESP_TO_PTR_ESI sbb dword ptr [esi], esp
#define SBB_ESP_TO_PTR_EBP sbb dword ptr [ebp], esp
#define SBB_ESP_TO_PTR_ESP sbb dword ptr [esp], esp
#define SBB_ESP_TO_PTR_BX sbb dword ptr [bx], esp
#define SBB_ESP_TO_PTR_BP sbb dword ptr [bp], esp
#define SBB_ESP_TO_PTR_SI sbb dword ptr [si], esp
#define SBB_ESP_TO_PTR_DI sbb dword ptr [di], esp

#define SBB_EAX_FROM_PTR_EAX_(VALUE) sbb eax, dword ptr [eax + VALUE]
#define SBB_EAX_FROM_PTR_EBX_(VALUE) sbb eax, dword ptr [ebx + VALUE]
#define SBB_EAX_FROM_PTR_ECX_(VALUE) sbb eax, dword ptr [ecx + VALUE]
#define SBB_EAX_FROM_PTR_EDX_(VALUE) sbb eax, dword ptr [edx + VALUE]
#define SBB_EAX_FROM_PTR_EDI_(VALUE) sbb eax, dword ptr [edi + VALUE]
#define SBB_EAX_FROM_PTR_ESI_(VALUE) sbb eax, dword ptr [esi + VALUE]
#define SBB_EAX_FROM_PTR_EBP_(VALUE) sbb eax, dword ptr [ebp + VALUE]
#define SBB_EAX_FROM_PTR_ESP_(VALUE) sbb eax, dword ptr [esp + VALUE]
#define SBB_EAX_FROM_PTR_BX_(VALUE) sbb eax, dword ptr [bx + VALUE]
#define SBB_EAX_FROM_PTR_BP_(VALUE) sbb eax, dword ptr [bp + VALUE]
#define SBB_EAX_FROM_PTR_SI_(VALUE) sbb eax, dword ptr [si + VALUE]
#define SBB_EAX_FROM_PTR_DI_(VALUE) sbb eax, dword ptr [di + VALUE]

#define SBB_EBX_FROM_PTR_EAX_(VALUE) sbb ebx, dword ptr [eax + VALUE]
#define SBB_EBX_FROM_PTR_EBX_(VALUE) sbb ebx, dword ptr [ebx + VALUE]
#define SBB_EBX_FROM_PTR_ECX_(VALUE) sbb ebx, dword ptr [ecx + VALUE]
#define SBB_EBX_FROM_PTR_EDX_(VALUE) sbb ebx, dword ptr [edx + VALUE]
#define SBB_EBX_FROM_PTR_EDI_(VALUE) sbb ebx, dword ptr [edi + VALUE]
#define SBB_EBX_FROM_PTR_ESI_(VALUE) sbb ebx, dword ptr [esi + VALUE]
#define SBB_EBX_FROM_PTR_EBP_(VALUE) sbb ebx, dword ptr [ebp + VALUE]
#define SBB_EBX_FROM_PTR_ESP_(VALUE) sbb ebx, dword ptr [esp + VALUE]
#define SBB_EBX_FROM_PTR_BX_(VALUE) sbb ebx, dword ptr [bx + VALUE]
#define SBB_EBX_FROM_PTR_BP_(VALUE) sbb ebx, dword ptr [bp + VALUE]
#define SBB_EBX_FROM_PTR_SI_(VALUE) sbb ebx, dword ptr [si + VALUE]
#define SBB_EBX_FROM_PTR_DI_(VALUE) sbb ebx, dword ptr [di + VALUE]

#define SBB_ECX_FROM_PTR_EAX_(VALUE) sbb ecx, dword ptr [eax + VALUE]
#define SBB_ECX_FROM_PTR_EBX_(VALUE) sbb ecx, dword ptr [ebx + VALUE]
#define SBB_ECX_FROM_PTR_ECX_(VALUE) sbb ecx, dword ptr [ecx + VALUE]
#define SBB_ECX_FROM_PTR_EDX_(VALUE) sbb ecx, dword ptr [edx + VALUE]
#define SBB_ECX_FROM_PTR_EDI_(VALUE) sbb ecx, dword ptr [edi + VALUE]
#define SBB_ECX_FROM_PTR_ESI_(VALUE) sbb ecx, dword ptr [esi + VALUE]
#define SBB_ECX_FROM_PTR_EBP_(VALUE) sbb ecx, dword ptr [ebp + VALUE]
#define SBB_ECX_FROM_PTR_ESP_(VALUE) sbb ecx, dword ptr [esp + VALUE]
#define SBB_ECX_FROM_PTR_BX_(VALUE) sbb ecx, dword ptr [bx + VALUE]
#define SBB_ECX_FROM_PTR_BP_(VALUE) sbb ecx, dword ptr [bp + VALUE]
#define SBB_ECX_FROM_PTR_SI_(VALUE) sbb ecx, dword ptr [si + VALUE]
#define SBB_ECX_FROM_PTR_DI_(VALUE) sbb ecx, dword ptr [di + VALUE]

#define SBB_EDX_FROM_PTR_EAX_(VALUE) sbb edx, dword ptr [eax + VALUE]
#define SBB_EDX_FROM_PTR_EBX_(VALUE) sbb edx, dword ptr [ebx + VALUE]
#define SBB_EDX_FROM_PTR_ECX_(VALUE) sbb edx, dword ptr [ecx + VALUE]
#define SBB_EDX_FROM_PTR_EDX_(VALUE) sbb edx, dword ptr [edx + VALUE]
#define SBB_EDX_FROM_PTR_EDI_(VALUE) sbb edx, dword ptr [edi + VALUE]
#define SBB_EDX_FROM_PTR_ESI_(VALUE) sbb edx, dword ptr [esi + VALUE]
#define SBB_EDX_FROM_PTR_EBP_(VALUE) sbb edx, dword ptr [ebp + VALUE]
#define SBB_EDX_FROM_PTR_ESP_(VALUE) sbb edx, dword ptr [esp + VALUE]
#define SBB_EDX_FROM_PTR_BX_(VALUE) sbb edx, dword ptr [bx + VALUE]
#define SBB_EDX_FROM_PTR_BP_(VALUE) sbb edx, dword ptr [bp + VALUE]
#define SBB_EDX_FROM_PTR_SI_(VALUE) sbb edx, dword ptr [si + VALUE]
#define SBB_EDX_FROM_PTR_DI_(VALUE) sbb edx, dword ptr [di + VALUE]

#define SBB_EDI_FROM_PTR_EAX_(VALUE) sbb edi, dword ptr [eax + VALUE]
#define SBB_EDI_FROM_PTR_EBX_(VALUE) sbb edi, dword ptr [ebx + VALUE]
#define SBB_EDI_FROM_PTR_ECX_(VALUE) sbb edi, dword ptr [ecx + VALUE]
#define SBB_EDI_FROM_PTR_EDX_(VALUE) sbb edi, dword ptr [edx + VALUE]
#define SBB_EDI_FROM_PTR_EDI_(VALUE) sbb edi, dword ptr [edi + VALUE]
#define SBB_EDI_FROM_PTR_ESI_(VALUE) sbb edi, dword ptr [esi + VALUE]
#define SBB_EDI_FROM_PTR_EBP_(VALUE) sbb edi, dword ptr [ebp + VALUE]
#define SBB_EDI_FROM_PTR_ESP_(VALUE) sbb edi, dword ptr [esp + VALUE]
#define SBB_EDI_FROM_PTR_BX_(VALUE) sbb edi, dword ptr [bx + VALUE]
#define SBB_EDI_FROM_PTR_BP_(VALUE) sbb edi, dword ptr [bp + VALUE]
#define SBB_EDI_FROM_PTR_SI_(VALUE) sbb edi, dword ptr [si + VALUE]
#define SBB_EDI_FROM_PTR_DI_(VALUE) sbb edi, dword ptr [di + VALUE]

#define SBB_ESI_FROM_PTR_EAX_(VALUE) sbb esi, dword ptr [eax + VALUE]
#define SBB_ESI_FROM_PTR_EBX_(VALUE) sbb esi, dword ptr [ebx + VALUE]
#define SBB_ESI_FROM_PTR_ECX_(VALUE) sbb esi, dword ptr [ecx + VALUE]
#define SBB_ESI_FROM_PTR_EDX_(VALUE) sbb esi, dword ptr [edx + VALUE]
#define SBB_ESI_FROM_PTR_EDI_(VALUE) sbb esi, dword ptr [edi + VALUE]
#define SBB_ESI_FROM_PTR_ESI_(VALUE) sbb esi, dword ptr [esi + VALUE]
#define SBB_ESI_FROM_PTR_EBP_(VALUE) sbb esi, dword ptr [ebp + VALUE]
#define SBB_ESI_FROM_PTR_ESP_(VALUE) sbb esi, dword ptr [esp + VALUE]
#define SBB_ESI_FROM_PTR_BX_(VALUE) sbb esi, dword ptr [bx + VALUE]
#define SBB_ESI_FROM_PTR_BP_(VALUE) sbb esi, dword ptr [bp + VALUE]
#define SBB_ESI_FROM_PTR_SI_(VALUE) sbb esi, dword ptr [si + VALUE]
#define SBB_ESI_FROM_PTR_DI_(VALUE) sbb esi, dword ptr [di + VALUE]

#define SBB_EBP_FROM_PTR_EAX_(VALUE) sbb ebp, dword ptr [eax + VALUE]
#define SBB_EBP_FROM_PTR_EBX_(VALUE) sbb ebp, dword ptr [ebx + VALUE]
#define SBB_EBP_FROM_PTR_ECX_(VALUE) sbb ebp, dword ptr [ecx + VALUE]
#define SBB_EBP_FROM_PTR_EDX_(VALUE) sbb ebp, dword ptr [edx + VALUE]
#define SBB_EBP_FROM_PTR_EDI_(VALUE) sbb ebp, dword ptr [edi + VALUE]
#define SBB_EBP_FROM_PTR_ESI_(VALUE) sbb ebp, dword ptr [esi + VALUE]
#define SBB_EBP_FROM_PTR_EBP_(VALUE) sbb ebp, dword ptr [ebp + VALUE]
#define SBB_EBP_FROM_PTR_ESP_(VALUE) sbb ebp, dword ptr [esp + VALUE]
#define SBB_EBP_FROM_PTR_BX_(VALUE) sbb ebp, dword ptr [bx + VALUE]
#define SBB_EBP_FROM_PTR_BP_(VALUE) sbb ebp, dword ptr [bp + VALUE]
#define SBB_EBP_FROM_PTR_SI_(VALUE) sbb ebp, dword ptr [si + VALUE]
#define SBB_EBP_FROM_PTR_DI_(VALUE) sbb ebp, dword ptr [di + VALUE]

#define SBB_ESP_FROM_PTR_EAX_(VALUE) sbb esp, dword ptr [eax + VALUE]
#define SBB_ESP_FROM_PTR_EBX_(VALUE) sbb esp, dword ptr [ebx + VALUE]
#define SBB_ESP_FROM_PTR_ECX_(VALUE) sbb esp, dword ptr [ecx + VALUE]
#define SBB_ESP_FROM_PTR_EDX_(VALUE) sbb esp, dword ptr [edx + VALUE]
#define SBB_ESP_FROM_PTR_EDI_(VALUE) sbb esp, dword ptr [edi + VALUE]
#define SBB_ESP_FROM_PTR_ESI_(VALUE) sbb esp, dword ptr [esi + VALUE]
#define SBB_ESP_FROM_PTR_EBP_(VALUE) sbb esp, dword ptr [ebp + VALUE]
#define SBB_ESP_FROM_PTR_ESP_(VALUE) sbb esp, dword ptr [esp + VALUE]
#define SBB_ESP_FROM_PTR_BX_(VALUE) sbb esp, dword ptr [bx + VALUE]
#define SBB_ESP_FROM_PTR_BP_(VALUE) sbb esp, dword ptr [bp + VALUE]
#define SBB_ESP_FROM_PTR_SI_(VALUE) sbb esp, dword ptr [si + VALUE]
#define SBB_ESP_FROM_PTR_DI_(VALUE) sbb esp, dword ptr [di + VALUE]

#define SBB_EAX_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], eax
#define SBB_EAX_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], eax
#define SBB_EAX_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], eax
#define SBB_EAX_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], eax
#define SBB_EAX_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], eax
#define SBB_EAX_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], eax
#define SBB_EAX_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], eax
#define SBB_EAX_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], eax
#define SBB_EAX_TO_PTR_BX_(VALUE) sbb dword ptr [bx + VALUE], eax
#define SBB_EAX_TO_PTR_BP_(VALUE) sbb dword ptr [bp + VALUE], eax
#define SBB_EAX_TO_PTR_SI_(VALUE) sbb dword ptr [si + VALUE], eax
#define SBB_EAX_TO_PTR_DI_(VALUE) sbb dword ptr [di + VALUE], eax

#define SBB_EBX_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], ebx
#define SBB_EBX_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], ebx
#define SBB_EBX_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], ebx
#define SBB_EBX_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], ebx
#define SBB_EBX_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], ebx
#define SBB_EBX_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], ebx
#define SBB_EBX_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], ebx
#define SBB_EBX_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], ebx
#define SBB_EBX_TO_PTR_BX_(VALUE) sbb dword ptr [bx + VALUE], ebx
#define SBB_EBX_TO_PTR_BP_(VALUE) sbb dword ptr [bp + VALUE], ebx
#define SBB_EBX_TO_PTR_SI_(VALUE) sbb dword ptr [si + VALUE], ebx
#define SBB_EBX_TO_PTR_DI_(VALUE) sbb dword ptr [di + VALUE], ebx

#define SBB_ECX_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], ecx
#define SBB_ECX_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], ecx
#define SBB_ECX_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], ecx
#define SBB_ECX_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], ecx
#define SBB_ECX_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], ecx
#define SBB_ECX_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], ecx
#define SBB_ECX_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], ecx
#define SBB_ECX_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], ecx
#define SBB_ECX_TO_PTR_BX_(VALUE) sbb dword ptr [bx + VALUE], ecx
#define SBB_ECX_TO_PTR_BP_(VALUE) sbb dword ptr [bp + VALUE], ecx
#define SBB_ECX_TO_PTR_SI_(VALUE) sbb dword ptr [si + VALUE], ecx
#define SBB_ECX_TO_PTR_DI_(VALUE) sbb dword ptr [di + VALUE], ecx

#define SBB_EDX_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], edx
#define SBB_EDX_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], edx
#define SBB_EDX_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], edx
#define SBB_EDX_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], edx
#define SBB_EDX_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], edx
#define SBB_EDX_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], edx
#define SBB_EDX_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], edx
#define SBB_EDX_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], edx
#define SBB_EDX_TO_PTR_BX_(VALUE) sbb dword ptr [bx + VALUE], edx
#define SBB_EDX_TO_PTR_BP_(VALUE) sbb dword ptr [bp + VALUE], edx
#define SBB_EDX_TO_PTR_SI_(VALUE) sbb dword ptr [si + VALUE], edx
#define SBB_EDX_TO_PTR_DI_(VALUE) sbb dword ptr [di + VALUE], edx

#define SBB_EDI_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], edi
#define SBB_EDI_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], edi
#define SBB_EDI_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], edi
#define SBB_EDI_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], edi
#define SBB_EDI_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], edi
#define SBB_EDI_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], edi
#define SBB_EDI_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], edi
#define SBB_EDI_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], edi
#define SBB_EDI_TO_PTR_BX_(VALUE) sbb dword ptr [bx + VALUE], edi
#define SBB_EDI_TO_PTR_BP_(VALUE) sbb dword ptr [bp + VALUE], edi
#define SBB_EDI_TO_PTR_SI_(VALUE) sbb dword ptr [si + VALUE], edi
#define SBB_EDI_TO_PTR_DI_(VALUE) sbb dword ptr [di + VALUE], edi

#define SBB_ESI_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], esi
#define SBB_ESI_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], esi
#define SBB_ESI_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], esi
#define SBB_ESI_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], esi
#define SBB_ESI_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], esi
#define SBB_ESI_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], esi
#define SBB_ESI_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], esi
#define SBB_ESI_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], esi
#define SBB_ESI_TO_PTR_BX_(VALUE) sbb dword ptr [bx + VALUE], esi
#define SBB_ESI_TO_PTR_BP_(VALUE) sbb dword ptr [bp + VALUE], esi
#define SBB_ESI_TO_PTR_SI_(VALUE) sbb dword ptr [si + VALUE], esi
#define SBB_ESI_TO_PTR_DI_(VALUE) sbb dword ptr [di + VALUE], esi

#define SBB_EBP_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], ebp
#define SBB_EBP_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], ebp
#define SBB_EBP_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], ebp
#define SBB_EBP_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], ebp
#define SBB_EBP_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], ebp
#define SBB_EBP_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], ebp
#define SBB_EBP_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], ebp
#define SBB_EBP_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], ebp
#define SBB_EBP_TO_PTR_BX_(VALUE) sbb dword ptr [bx + VALUE], ebp
#define SBB_EBP_TO_PTR_BP_(VALUE) sbb dword ptr [bp + VALUE], ebp
#define SBB_EBP_TO_PTR_SI_(VALUE) sbb dword ptr [si + VALUE], ebp
#define SBB_EBP_TO_PTR_DI_(VALUE) sbb dword ptr [di + VALUE], ebp

#define SBB_ESP_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], esp
#define SBB_ESP_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], esp
#define SBB_ESP_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], esp
#define SBB_ESP_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], esp
#define SBB_ESP_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], esp
#define SBB_ESP_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], esp
#define SBB_ESP_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], esp
#define SBB_ESP_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], esp
#define SBB_ESP_TO_PTR_BX_(VALUE) sbb dword ptr [bx + VALUE], esp
#define SBB_ESP_TO_PTR_BP_(VALUE) sbb dword ptr [bp + VALUE], esp
#define SBB_ESP_TO_PTR_SI_(VALUE) sbb dword ptr [si + VALUE], esp
#define SBB_ESP_TO_PTR_DI_(VALUE) sbb dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_EAX_FROM_PTR_(VALUE) sbb eax, dword ptr [VALUE]
#define SBB_EBX_FROM_PTR_(VALUE) sbb ebx, dword ptr [VALUE]
#define SBB_ECX_FROM_PTR_(VALUE) sbb ecx, dword ptr [VALUE]
#define SBB_EDX_FROM_PTR_(VALUE) sbb edx, dword ptr [VALUE]
#define SBB_EDI_FROM_PTR_(VALUE) sbb edi, dword ptr [VALUE]
#define SBB_ESI_FROM_PTR_(VALUE) sbb esi, dword ptr [VALUE]
#define SBB_EBP_FROM_PTR_(VALUE) sbb ebp, dword ptr [VALUE]
#define SBB_ESP_FROM_PTR_(VALUE) sbb esp, dword ptr [VALUE]
#define SBB_R8D_FROM_PTR_(VALUE) sbb r8d, dword ptr [VALUE]
#define SBB_R9D_FROM_PTR_(VALUE) sbb r9d, dword ptr [VALUE]
#define SBB_R10D_FROM_PTR_(VALUE) sbb r10d, dword ptr [VALUE]
#define SBB_R11D_FROM_PTR_(VALUE) sbb r11d, dword ptr [VALUE]
#define SBB_R12D_FROM_PTR_(VALUE) sbb r12d, dword ptr [VALUE]
#define SBB_R13D_FROM_PTR_(VALUE) sbb r13d, dword ptr [VALUE]
#define SBB_R14D_FROM_PTR_(VALUE) sbb r14d, dword ptr [VALUE]
#define SBB_R15D_FROM_PTR_(VALUE) sbb r15d, dword ptr [VALUE]

#define SBB_EAX_TO_PTR_(VALUE) sbb dword ptr [VALUE], eax
#define SBB_EBX_TO_PTR_(VALUE) sbb dword ptr [VALUE], ebx
#define SBB_ECX_TO_PTR_(VALUE) sbb dword ptr [VALUE], ecx
#define SBB_EDX_TO_PTR_(VALUE) sbb dword ptr [VALUE], edx
#define SBB_EDI_TO_PTR_(VALUE) sbb dword ptr [VALUE], edi
#define SBB_ESI_TO_PTR_(VALUE) sbb dword ptr [VALUE], esi
#define SBB_EBP_TO_PTR_(VALUE) sbb dword ptr [VALUE], ebp
#define SBB_ESP_TO_PTR_(VALUE) sbb dword ptr [VALUE], esp
#define SBB_R8D_TO_PTR_(VALUE) sbb dword ptr [VALUE], r8d
#define SBB_R9D_TO_PTR_(VALUE) sbb dword ptr [VALUE], r9d
#define SBB_R10D_TO_PTR_(VALUE) sbb dword ptr [VALUE], r10d
#define SBB_R11D_TO_PTR_(VALUE) sbb dword ptr [VALUE], r11d
#define SBB_R12D_TO_PTR_(VALUE) sbb dword ptr [VALUE], r12d
#define SBB_R13D_TO_PTR_(VALUE) sbb dword ptr [VALUE], r13d
#define SBB_R14D_TO_PTR_(VALUE) sbb dword ptr [VALUE], r14d
#define SBB_R15D_TO_PTR_(VALUE) sbb dword ptr [VALUE], r15d

#define SBB_EAX_FROM_PTR_RAX sbb eax, dword ptr [rax]
#define SBB_EAX_FROM_PTR_RBX sbb eax, dword ptr [rbx]
#define SBB_EAX_FROM_PTR_RCX sbb eax, dword ptr [rcx]
#define SBB_EAX_FROM_PTR_RDX sbb eax, dword ptr [rdx]
#define SBB_EAX_FROM_PTR_RDI sbb eax, dword ptr [rdi]
#define SBB_EAX_FROM_PTR_RSI sbb eax, dword ptr [rsi]
#define SBB_EAX_FROM_PTR_RBP sbb eax, dword ptr [rbp]
#define SBB_EAX_FROM_PTR_RSP sbb eax, dword ptr [rsp]
#define SBB_EAX_FROM_PTR_R8 sbb eax, dword ptr [r8]
#define SBB_EAX_FROM_PTR_R9 sbb eax, dword ptr [r9]
#define SBB_EAX_FROM_PTR_R10 sbb eax, dword ptr [r10]
#define SBB_EAX_FROM_PTR_R11 sbb eax, dword ptr [r11]
#define SBB_EAX_FROM_PTR_R12 sbb eax, dword ptr [r12]
#define SBB_EAX_FROM_PTR_R13 sbb eax, dword ptr [r13]
#define SBB_EAX_FROM_PTR_R14 sbb eax, dword ptr [r14]
#define SBB_EAX_FROM_PTR_R15 sbb eax, dword ptr [r15]
#define SBB_EAX_FROM_PTR_EAX sbb eax, dword ptr [eax]
#define SBB_EAX_FROM_PTR_EBX sbb eax, dword ptr [ebx]
#define SBB_EAX_FROM_PTR_ECX sbb eax, dword ptr [ecx]
#define SBB_EAX_FROM_PTR_EDX sbb eax, dword ptr [edx]
#define SBB_EAX_FROM_PTR_EDI sbb eax, dword ptr [edi]
#define SBB_EAX_FROM_PTR_ESI sbb eax, dword ptr [esi]
#define SBB_EAX_FROM_PTR_EBP sbb eax, dword ptr [ebp]
#define SBB_EAX_FROM_PTR_ESP sbb eax, dword ptr [esp]

#define SBB_EBX_FROM_PTR_RAX sbb ebx, dword ptr [rax]
#define SBB_EBX_FROM_PTR_RBX sbb ebx, dword ptr [rbx]
#define SBB_EBX_FROM_PTR_RCX sbb ebx, dword ptr [rcx]
#define SBB_EBX_FROM_PTR_RDX sbb ebx, dword ptr [rdx]
#define SBB_EBX_FROM_PTR_RDI sbb ebx, dword ptr [rdi]
#define SBB_EBX_FROM_PTR_RSI sbb ebx, dword ptr [rsi]
#define SBB_EBX_FROM_PTR_RBP sbb ebx, dword ptr [rbp]
#define SBB_EBX_FROM_PTR_RSP sbb ebx, dword ptr [rsp]
#define SBB_EBX_FROM_PTR_R8 sbb ebx, dword ptr [r8]
#define SBB_EBX_FROM_PTR_R9 sbb ebx, dword ptr [r9]
#define SBB_EBX_FROM_PTR_R10 sbb ebx, dword ptr [r10]
#define SBB_EBX_FROM_PTR_R11 sbb ebx, dword ptr [r11]
#define SBB_EBX_FROM_PTR_R12 sbb ebx, dword ptr [r12]
#define SBB_EBX_FROM_PTR_R13 sbb ebx, dword ptr [r13]
#define SBB_EBX_FROM_PTR_R14 sbb ebx, dword ptr [r14]
#define SBB_EBX_FROM_PTR_R15 sbb ebx, dword ptr [r15]
#define SBB_EBX_FROM_PTR_EAX sbb ebx, dword ptr [eax]
#define SBB_EBX_FROM_PTR_EBX sbb ebx, dword ptr [ebx]
#define SBB_EBX_FROM_PTR_ECX sbb ebx, dword ptr [ecx]
#define SBB_EBX_FROM_PTR_EDX sbb ebx, dword ptr [edx]
#define SBB_EBX_FROM_PTR_EDI sbb ebx, dword ptr [edi]
#define SBB_EBX_FROM_PTR_ESI sbb ebx, dword ptr [esi]
#define SBB_EBX_FROM_PTR_EBP sbb ebx, dword ptr [ebp]
#define SBB_EBX_FROM_PTR_ESP sbb ebx, dword ptr [esp]

#define SBB_ECX_FROM_PTR_RAX sbb ecx, dword ptr [rax]
#define SBB_ECX_FROM_PTR_RBX sbb ecx, dword ptr [rbx]
#define SBB_ECX_FROM_PTR_RCX sbb ecx, dword ptr [rcx]
#define SBB_ECX_FROM_PTR_RDX sbb ecx, dword ptr [rdx]
#define SBB_ECX_FROM_PTR_RDI sbb ecx, dword ptr [rdi]
#define SBB_ECX_FROM_PTR_RSI sbb ecx, dword ptr [rsi]
#define SBB_ECX_FROM_PTR_RBP sbb ecx, dword ptr [rbp]
#define SBB_ECX_FROM_PTR_RSP sbb ecx, dword ptr [rsp]
#define SBB_ECX_FROM_PTR_R8 sbb ecx, dword ptr [r8]
#define SBB_ECX_FROM_PTR_R9 sbb ecx, dword ptr [r9]
#define SBB_ECX_FROM_PTR_R10 sbb ecx, dword ptr [r10]
#define SBB_ECX_FROM_PTR_R11 sbb ecx, dword ptr [r11]
#define SBB_ECX_FROM_PTR_R12 sbb ecx, dword ptr [r12]
#define SBB_ECX_FROM_PTR_R13 sbb ecx, dword ptr [r13]
#define SBB_ECX_FROM_PTR_R14 sbb ecx, dword ptr [r14]
#define SBB_ECX_FROM_PTR_R15 sbb ecx, dword ptr [r15]
#define SBB_ECX_FROM_PTR_EAX sbb ecx, dword ptr [eax]
#define SBB_ECX_FROM_PTR_EBX sbb ecx, dword ptr [ebx]
#define SBB_ECX_FROM_PTR_ECX sbb ecx, dword ptr [ecx]
#define SBB_ECX_FROM_PTR_EDX sbb ecx, dword ptr [edx]
#define SBB_ECX_FROM_PTR_EDI sbb ecx, dword ptr [edi]
#define SBB_ECX_FROM_PTR_ESI sbb ecx, dword ptr [esi]
#define SBB_ECX_FROM_PTR_EBP sbb ecx, dword ptr [ebp]
#define SBB_ECX_FROM_PTR_ESP sbb ecx, dword ptr [esp]

#define SBB_EDX_FROM_PTR_RAX sbb edx, dword ptr [rax]
#define SBB_EDX_FROM_PTR_RBX sbb edx, dword ptr [rbx]
#define SBB_EDX_FROM_PTR_RCX sbb edx, dword ptr [rcx]
#define SBB_EDX_FROM_PTR_RDX sbb edx, dword ptr [rdx]
#define SBB_EDX_FROM_PTR_RDI sbb edx, dword ptr [rdi]
#define SBB_EDX_FROM_PTR_RSI sbb edx, dword ptr [rsi]
#define SBB_EDX_FROM_PTR_RBP sbb edx, dword ptr [rbp]
#define SBB_EDX_FROM_PTR_RSP sbb edx, dword ptr [rsp]
#define SBB_EDX_FROM_PTR_R8 sbb edx, dword ptr [r8]
#define SBB_EDX_FROM_PTR_R9 sbb edx, dword ptr [r9]
#define SBB_EDX_FROM_PTR_R10 sbb edx, dword ptr [r10]
#define SBB_EDX_FROM_PTR_R11 sbb edx, dword ptr [r11]
#define SBB_EDX_FROM_PTR_R12 sbb edx, dword ptr [r12]
#define SBB_EDX_FROM_PTR_R13 sbb edx, dword ptr [r13]
#define SBB_EDX_FROM_PTR_R14 sbb edx, dword ptr [r14]
#define SBB_EDX_FROM_PTR_R15 sbb edx, dword ptr [r15]
#define SBB_EDX_FROM_PTR_EAX sbb edx, dword ptr [eax]
#define SBB_EDX_FROM_PTR_EBX sbb edx, dword ptr [ebx]
#define SBB_EDX_FROM_PTR_ECX sbb edx, dword ptr [ecx]
#define SBB_EDX_FROM_PTR_EDX sbb edx, dword ptr [edx]
#define SBB_EDX_FROM_PTR_EDI sbb edx, dword ptr [edi]
#define SBB_EDX_FROM_PTR_ESI sbb edx, dword ptr [esi]
#define SBB_EDX_FROM_PTR_EBP sbb edx, dword ptr [ebp]
#define SBB_EDX_FROM_PTR_ESP sbb edx, dword ptr [esp]

#define SBB_EDI_FROM_PTR_RAX sbb edi, dword ptr [rax]
#define SBB_EDI_FROM_PTR_RBX sbb edi, dword ptr [rbx]
#define SBB_EDI_FROM_PTR_RCX sbb edi, dword ptr [rcx]
#define SBB_EDI_FROM_PTR_RDX sbb edi, dword ptr [rdx]
#define SBB_EDI_FROM_PTR_RDI sbb edi, dword ptr [rdi]
#define SBB_EDI_FROM_PTR_RSI sbb edi, dword ptr [rsi]
#define SBB_EDI_FROM_PTR_RBP sbb edi, dword ptr [rbp]
#define SBB_EDI_FROM_PTR_RSP sbb edi, dword ptr [rsp]
#define SBB_EDI_FROM_PTR_R8 sbb edi, dword ptr [r8]
#define SBB_EDI_FROM_PTR_R9 sbb edi, dword ptr [r9]
#define SBB_EDI_FROM_PTR_R10 sbb edi, dword ptr [r10]
#define SBB_EDI_FROM_PTR_R11 sbb edi, dword ptr [r11]
#define SBB_EDI_FROM_PTR_R12 sbb edi, dword ptr [r12]
#define SBB_EDI_FROM_PTR_R13 sbb edi, dword ptr [r13]
#define SBB_EDI_FROM_PTR_R14 sbb edi, dword ptr [r14]
#define SBB_EDI_FROM_PTR_R15 sbb edi, dword ptr [r15]
#define SBB_EDI_FROM_PTR_EAX sbb edi, dword ptr [eax]
#define SBB_EDI_FROM_PTR_EBX sbb edi, dword ptr [ebx]
#define SBB_EDI_FROM_PTR_ECX sbb edi, dword ptr [ecx]
#define SBB_EDI_FROM_PTR_EDX sbb edi, dword ptr [edx]
#define SBB_EDI_FROM_PTR_EDI sbb edi, dword ptr [edi]
#define SBB_EDI_FROM_PTR_ESI sbb edi, dword ptr [esi]
#define SBB_EDI_FROM_PTR_EBP sbb edi, dword ptr [ebp]
#define SBB_EDI_FROM_PTR_ESP sbb edi, dword ptr [esp]

#define SBB_ESI_FROM_PTR_RAX sbb esi, dword ptr [rax]
#define SBB_ESI_FROM_PTR_RBX sbb esi, dword ptr [rbx]
#define SBB_ESI_FROM_PTR_RCX sbb esi, dword ptr [rcx]
#define SBB_ESI_FROM_PTR_RDX sbb esi, dword ptr [rdx]
#define SBB_ESI_FROM_PTR_RDI sbb esi, dword ptr [rdi]
#define SBB_ESI_FROM_PTR_RSI sbb esi, dword ptr [rsi]
#define SBB_ESI_FROM_PTR_RBP sbb esi, dword ptr [rbp]
#define SBB_ESI_FROM_PTR_RSP sbb esi, dword ptr [rsp]
#define SBB_ESI_FROM_PTR_R8 sbb esi, dword ptr [r8]
#define SBB_ESI_FROM_PTR_R9 sbb esi, dword ptr [r9]
#define SBB_ESI_FROM_PTR_R10 sbb esi, dword ptr [r10]
#define SBB_ESI_FROM_PTR_R11 sbb esi, dword ptr [r11]
#define SBB_ESI_FROM_PTR_R12 sbb esi, dword ptr [r12]
#define SBB_ESI_FROM_PTR_R13 sbb esi, dword ptr [r13]
#define SBB_ESI_FROM_PTR_R14 sbb esi, dword ptr [r14]
#define SBB_ESI_FROM_PTR_R15 sbb esi, dword ptr [r15]
#define SBB_ESI_FROM_PTR_EAX sbb esi, dword ptr [eax]
#define SBB_ESI_FROM_PTR_EBX sbb esi, dword ptr [ebx]
#define SBB_ESI_FROM_PTR_ECX sbb esi, dword ptr [ecx]
#define SBB_ESI_FROM_PTR_EDX sbb esi, dword ptr [edx]
#define SBB_ESI_FROM_PTR_EDI sbb esi, dword ptr [edi]
#define SBB_ESI_FROM_PTR_ESI sbb esi, dword ptr [esi]
#define SBB_ESI_FROM_PTR_EBP sbb esi, dword ptr [ebp]
#define SBB_ESI_FROM_PTR_ESP sbb esi, dword ptr [esp]

#define SBB_EBP_FROM_PTR_RAX sbb ebp, dword ptr [rax]
#define SBB_EBP_FROM_PTR_RBX sbb ebp, dword ptr [rbx]
#define SBB_EBP_FROM_PTR_RCX sbb ebp, dword ptr [rcx]
#define SBB_EBP_FROM_PTR_RDX sbb ebp, dword ptr [rdx]
#define SBB_EBP_FROM_PTR_RDI sbb ebp, dword ptr [rdi]
#define SBB_EBP_FROM_PTR_RSI sbb ebp, dword ptr [rsi]
#define SBB_EBP_FROM_PTR_RBP sbb ebp, dword ptr [rbp]
#define SBB_EBP_FROM_PTR_RSP sbb ebp, dword ptr [rsp]
#define SBB_EBP_FROM_PTR_R8 sbb ebp, dword ptr [r8]
#define SBB_EBP_FROM_PTR_R9 sbb ebp, dword ptr [r9]
#define SBB_EBP_FROM_PTR_R10 sbb ebp, dword ptr [r10]
#define SBB_EBP_FROM_PTR_R11 sbb ebp, dword ptr [r11]
#define SBB_EBP_FROM_PTR_R12 sbb ebp, dword ptr [r12]
#define SBB_EBP_FROM_PTR_R13 sbb ebp, dword ptr [r13]
#define SBB_EBP_FROM_PTR_R14 sbb ebp, dword ptr [r14]
#define SBB_EBP_FROM_PTR_R15 sbb ebp, dword ptr [r15]
#define SBB_EBP_FROM_PTR_EAX sbb ebp, dword ptr [eax]
#define SBB_EBP_FROM_PTR_EBX sbb ebp, dword ptr [ebx]
#define SBB_EBP_FROM_PTR_ECX sbb ebp, dword ptr [ecx]
#define SBB_EBP_FROM_PTR_EDX sbb ebp, dword ptr [edx]
#define SBB_EBP_FROM_PTR_EDI sbb ebp, dword ptr [edi]
#define SBB_EBP_FROM_PTR_ESI sbb ebp, dword ptr [esi]
#define SBB_EBP_FROM_PTR_EBP sbb ebp, dword ptr [ebp]
#define SBB_EBP_FROM_PTR_ESP sbb ebp, dword ptr [esp]

#define SBB_ESP_FROM_PTR_RAX sbb esp, dword ptr [rax]
#define SBB_ESP_FROM_PTR_RBX sbb esp, dword ptr [rbx]
#define SBB_ESP_FROM_PTR_RCX sbb esp, dword ptr [rcx]
#define SBB_ESP_FROM_PTR_RDX sbb esp, dword ptr [rdx]
#define SBB_ESP_FROM_PTR_RDI sbb esp, dword ptr [rdi]
#define SBB_ESP_FROM_PTR_RSI sbb esp, dword ptr [rsi]
#define SBB_ESP_FROM_PTR_RBP sbb esp, dword ptr [rbp]
#define SBB_ESP_FROM_PTR_RSP sbb esp, dword ptr [rsp]
#define SBB_ESP_FROM_PTR_R8 sbb esp, dword ptr [r8]
#define SBB_ESP_FROM_PTR_R9 sbb esp, dword ptr [r9]
#define SBB_ESP_FROM_PTR_R10 sbb esp, dword ptr [r10]
#define SBB_ESP_FROM_PTR_R11 sbb esp, dword ptr [r11]
#define SBB_ESP_FROM_PTR_R12 sbb esp, dword ptr [r12]
#define SBB_ESP_FROM_PTR_R13 sbb esp, dword ptr [r13]
#define SBB_ESP_FROM_PTR_R14 sbb esp, dword ptr [r14]
#define SBB_ESP_FROM_PTR_R15 sbb esp, dword ptr [r15]
#define SBB_ESP_FROM_PTR_EAX sbb esp, dword ptr [eax]
#define SBB_ESP_FROM_PTR_EBX sbb esp, dword ptr [ebx]
#define SBB_ESP_FROM_PTR_ECX sbb esp, dword ptr [ecx]
#define SBB_ESP_FROM_PTR_EDX sbb esp, dword ptr [edx]
#define SBB_ESP_FROM_PTR_EDI sbb esp, dword ptr [edi]
#define SBB_ESP_FROM_PTR_ESI sbb esp, dword ptr [esi]
#define SBB_ESP_FROM_PTR_EBP sbb esp, dword ptr [ebp]
#define SBB_ESP_FROM_PTR_ESP sbb esp, dword ptr [esp]

#define SBB_R8D_FROM_PTR_RAX sbb r8d, dword ptr [rax]
#define SBB_R8D_FROM_PTR_RBX sbb r8d, dword ptr [rbx]
#define SBB_R8D_FROM_PTR_RCX sbb r8d, dword ptr [rcx]
#define SBB_R8D_FROM_PTR_RDX sbb r8d, dword ptr [rdx]
#define SBB_R8D_FROM_PTR_RDI sbb r8d, dword ptr [rdi]
#define SBB_R8D_FROM_PTR_RSI sbb r8d, dword ptr [rsi]
#define SBB_R8D_FROM_PTR_RBP sbb r8d, dword ptr [rbp]
#define SBB_R8D_FROM_PTR_RSP sbb r8d, dword ptr [rsp]
#define SBB_R8D_FROM_PTR_R8 sbb r8d, dword ptr [r8]
#define SBB_R8D_FROM_PTR_R9 sbb r8d, dword ptr [r9]
#define SBB_R8D_FROM_PTR_R10 sbb r8d, dword ptr [r10]
#define SBB_R8D_FROM_PTR_R11 sbb r8d, dword ptr [r11]
#define SBB_R8D_FROM_PTR_R12 sbb r8d, dword ptr [r12]
#define SBB_R8D_FROM_PTR_R13 sbb r8d, dword ptr [r13]
#define SBB_R8D_FROM_PTR_R14 sbb r8d, dword ptr [r14]
#define SBB_R8D_FROM_PTR_R15 sbb r8d, dword ptr [r15]
#define SBB_R8D_FROM_PTR_EAX sbb r8d, dword ptr [eax]
#define SBB_R8D_FROM_PTR_EBX sbb r8d, dword ptr [ebx]
#define SBB_R8D_FROM_PTR_ECX sbb r8d, dword ptr [ecx]
#define SBB_R8D_FROM_PTR_EDX sbb r8d, dword ptr [edx]
#define SBB_R8D_FROM_PTR_EDI sbb r8d, dword ptr [edi]
#define SBB_R8D_FROM_PTR_ESI sbb r8d, dword ptr [esi]
#define SBB_R8D_FROM_PTR_EBP sbb r8d, dword ptr [ebp]
#define SBB_R8D_FROM_PTR_ESP sbb r8d, dword ptr [esp]

#define SBB_R9D_FROM_PTR_RAX sbb r9d, dword ptr [rax]
#define SBB_R9D_FROM_PTR_RBX sbb r9d, dword ptr [rbx]
#define SBB_R9D_FROM_PTR_RCX sbb r9d, dword ptr [rcx]
#define SBB_R9D_FROM_PTR_RDX sbb r9d, dword ptr [rdx]
#define SBB_R9D_FROM_PTR_RDI sbb r9d, dword ptr [rdi]
#define SBB_R9D_FROM_PTR_RSI sbb r9d, dword ptr [rsi]
#define SBB_R9D_FROM_PTR_RBP sbb r9d, dword ptr [rbp]
#define SBB_R9D_FROM_PTR_RSP sbb r9d, dword ptr [rsp]
#define SBB_R9D_FROM_PTR_R8 sbb r9d, dword ptr [r8]
#define SBB_R9D_FROM_PTR_R9 sbb r9d, dword ptr [r9]
#define SBB_R9D_FROM_PTR_R10 sbb r9d, dword ptr [r10]
#define SBB_R9D_FROM_PTR_R11 sbb r9d, dword ptr [r11]
#define SBB_R9D_FROM_PTR_R12 sbb r9d, dword ptr [r12]
#define SBB_R9D_FROM_PTR_R13 sbb r9d, dword ptr [r13]
#define SBB_R9D_FROM_PTR_R14 sbb r9d, dword ptr [r14]
#define SBB_R9D_FROM_PTR_R15 sbb r9d, dword ptr [r15]
#define SBB_R9D_FROM_PTR_EAX sbb r9d, dword ptr [eax]
#define SBB_R9D_FROM_PTR_EBX sbb r9d, dword ptr [ebx]
#define SBB_R9D_FROM_PTR_ECX sbb r9d, dword ptr [ecx]
#define SBB_R9D_FROM_PTR_EDX sbb r9d, dword ptr [edx]
#define SBB_R9D_FROM_PTR_EDI sbb r9d, dword ptr [edi]
#define SBB_R9D_FROM_PTR_ESI sbb r9d, dword ptr [esi]
#define SBB_R9D_FROM_PTR_EBP sbb r9d, dword ptr [ebp]
#define SBB_R9D_FROM_PTR_ESP sbb r9d, dword ptr [esp]

#define SBB_R10D_FROM_PTR_RAX sbb r10d, dword ptr [rax]
#define SBB_R10D_FROM_PTR_RBX sbb r10d, dword ptr [rbx]
#define SBB_R10D_FROM_PTR_RCX sbb r10d, dword ptr [rcx]
#define SBB_R10D_FROM_PTR_RDX sbb r10d, dword ptr [rdx]
#define SBB_R10D_FROM_PTR_RDI sbb r10d, dword ptr [rdi]
#define SBB_R10D_FROM_PTR_RSI sbb r10d, dword ptr [rsi]
#define SBB_R10D_FROM_PTR_RBP sbb r10d, dword ptr [rbp]
#define SBB_R10D_FROM_PTR_RSP sbb r10d, dword ptr [rsp]
#define SBB_R10D_FROM_PTR_R8 sbb r10d, dword ptr [r8]
#define SBB_R10D_FROM_PTR_R9 sbb r10d, dword ptr [r9]
#define SBB_R10D_FROM_PTR_R10 sbb r10d, dword ptr [r10]
#define SBB_R10D_FROM_PTR_R11 sbb r10d, dword ptr [r11]
#define SBB_R10D_FROM_PTR_R12 sbb r10d, dword ptr [r12]
#define SBB_R10D_FROM_PTR_R13 sbb r10d, dword ptr [r13]
#define SBB_R10D_FROM_PTR_R14 sbb r10d, dword ptr [r14]
#define SBB_R10D_FROM_PTR_R15 sbb r10d, dword ptr [r15]
#define SBB_R10D_FROM_PTR_EAX sbb r10d, dword ptr [eax]
#define SBB_R10D_FROM_PTR_EBX sbb r10d, dword ptr [ebx]
#define SBB_R10D_FROM_PTR_ECX sbb r10d, dword ptr [ecx]
#define SBB_R10D_FROM_PTR_EDX sbb r10d, dword ptr [edx]
#define SBB_R10D_FROM_PTR_EDI sbb r10d, dword ptr [edi]
#define SBB_R10D_FROM_PTR_ESI sbb r10d, dword ptr [esi]
#define SBB_R10D_FROM_PTR_EBP sbb r10d, dword ptr [ebp]
#define SBB_R10D_FROM_PTR_ESP sbb r10d, dword ptr [esp]

#define SBB_R11D_FROM_PTR_RAX sbb r11d, dword ptr [rax]
#define SBB_R11D_FROM_PTR_RBX sbb r11d, dword ptr [rbx]
#define SBB_R11D_FROM_PTR_RCX sbb r11d, dword ptr [rcx]
#define SBB_R11D_FROM_PTR_RDX sbb r11d, dword ptr [rdx]
#define SBB_R11D_FROM_PTR_RDI sbb r11d, dword ptr [rdi]
#define SBB_R11D_FROM_PTR_RSI sbb r11d, dword ptr [rsi]
#define SBB_R11D_FROM_PTR_RBP sbb r11d, dword ptr [rbp]
#define SBB_R11D_FROM_PTR_RSP sbb r11d, dword ptr [rsp]
#define SBB_R11D_FROM_PTR_R8 sbb r11d, dword ptr [r8]
#define SBB_R11D_FROM_PTR_R9 sbb r11d, dword ptr [r9]
#define SBB_R11D_FROM_PTR_R10 sbb r11d, dword ptr [r10]
#define SBB_R11D_FROM_PTR_R11 sbb r11d, dword ptr [r11]
#define SBB_R11D_FROM_PTR_R12 sbb r11d, dword ptr [r12]
#define SBB_R11D_FROM_PTR_R13 sbb r11d, dword ptr [r13]
#define SBB_R11D_FROM_PTR_R14 sbb r11d, dword ptr [r14]
#define SBB_R11D_FROM_PTR_R15 sbb r11d, dword ptr [r15]
#define SBB_R11D_FROM_PTR_EAX sbb r11d, dword ptr [eax]
#define SBB_R11D_FROM_PTR_EBX sbb r11d, dword ptr [ebx]
#define SBB_R11D_FROM_PTR_ECX sbb r11d, dword ptr [ecx]
#define SBB_R11D_FROM_PTR_EDX sbb r11d, dword ptr [edx]
#define SBB_R11D_FROM_PTR_EDI sbb r11d, dword ptr [edi]
#define SBB_R11D_FROM_PTR_ESI sbb r11d, dword ptr [esi]
#define SBB_R11D_FROM_PTR_EBP sbb r11d, dword ptr [ebp]
#define SBB_R11D_FROM_PTR_ESP sbb r11d, dword ptr [esp]

#define SBB_R12D_FROM_PTR_RAX sbb r12d, dword ptr [rax]
#define SBB_R12D_FROM_PTR_RBX sbb r12d, dword ptr [rbx]
#define SBB_R12D_FROM_PTR_RCX sbb r12d, dword ptr [rcx]
#define SBB_R12D_FROM_PTR_RDX sbb r12d, dword ptr [rdx]
#define SBB_R12D_FROM_PTR_RDI sbb r12d, dword ptr [rdi]
#define SBB_R12D_FROM_PTR_RSI sbb r12d, dword ptr [rsi]
#define SBB_R12D_FROM_PTR_RBP sbb r12d, dword ptr [rbp]
#define SBB_R12D_FROM_PTR_RSP sbb r12d, dword ptr [rsp]
#define SBB_R12D_FROM_PTR_R8 sbb r12d, dword ptr [r8]
#define SBB_R12D_FROM_PTR_R9 sbb r12d, dword ptr [r9]
#define SBB_R12D_FROM_PTR_R10 sbb r12d, dword ptr [r10]
#define SBB_R12D_FROM_PTR_R11 sbb r12d, dword ptr [r11]
#define SBB_R12D_FROM_PTR_R12 sbb r12d, dword ptr [r12]
#define SBB_R12D_FROM_PTR_R13 sbb r12d, dword ptr [r13]
#define SBB_R12D_FROM_PTR_R14 sbb r12d, dword ptr [r14]
#define SBB_R12D_FROM_PTR_R15 sbb r12d, dword ptr [r15]
#define SBB_R12D_FROM_PTR_EAX sbb r12d, dword ptr [eax]
#define SBB_R12D_FROM_PTR_EBX sbb r12d, dword ptr [ebx]
#define SBB_R12D_FROM_PTR_ECX sbb r12d, dword ptr [ecx]
#define SBB_R12D_FROM_PTR_EDX sbb r12d, dword ptr [edx]
#define SBB_R12D_FROM_PTR_EDI sbb r12d, dword ptr [edi]
#define SBB_R12D_FROM_PTR_ESI sbb r12d, dword ptr [esi]
#define SBB_R12D_FROM_PTR_EBP sbb r12d, dword ptr [ebp]
#define SBB_R12D_FROM_PTR_ESP sbb r12d, dword ptr [esp]

#define SBB_R13D_FROM_PTR_RAX sbb r13d, dword ptr [rax]
#define SBB_R13D_FROM_PTR_RBX sbb r13d, dword ptr [rbx]
#define SBB_R13D_FROM_PTR_RCX sbb r13d, dword ptr [rcx]
#define SBB_R13D_FROM_PTR_RDX sbb r13d, dword ptr [rdx]
#define SBB_R13D_FROM_PTR_RDI sbb r13d, dword ptr [rdi]
#define SBB_R13D_FROM_PTR_RSI sbb r13d, dword ptr [rsi]
#define SBB_R13D_FROM_PTR_RBP sbb r13d, dword ptr [rbp]
#define SBB_R13D_FROM_PTR_RSP sbb r13d, dword ptr [rsp]
#define SBB_R13D_FROM_PTR_R8 sbb r13d, dword ptr [r8]
#define SBB_R13D_FROM_PTR_R9 sbb r13d, dword ptr [r9]
#define SBB_R13D_FROM_PTR_R10 sbb r13d, dword ptr [r10]
#define SBB_R13D_FROM_PTR_R11 sbb r13d, dword ptr [r11]
#define SBB_R13D_FROM_PTR_R12 sbb r13d, dword ptr [r12]
#define SBB_R13D_FROM_PTR_R13 sbb r13d, dword ptr [r13]
#define SBB_R13D_FROM_PTR_R14 sbb r13d, dword ptr [r14]
#define SBB_R13D_FROM_PTR_R15 sbb r13d, dword ptr [r15]
#define SBB_R13D_FROM_PTR_EAX sbb r13d, dword ptr [eax]
#define SBB_R13D_FROM_PTR_EBX sbb r13d, dword ptr [ebx]
#define SBB_R13D_FROM_PTR_ECX sbb r13d, dword ptr [ecx]
#define SBB_R13D_FROM_PTR_EDX sbb r13d, dword ptr [edx]
#define SBB_R13D_FROM_PTR_EDI sbb r13d, dword ptr [edi]
#define SBB_R13D_FROM_PTR_ESI sbb r13d, dword ptr [esi]
#define SBB_R13D_FROM_PTR_EBP sbb r13d, dword ptr [ebp]
#define SBB_R13D_FROM_PTR_ESP sbb r13d, dword ptr [esp]

#define SBB_R14D_FROM_PTR_RAX sbb r14d, dword ptr [rax]
#define SBB_R14D_FROM_PTR_RBX sbb r14d, dword ptr [rbx]
#define SBB_R14D_FROM_PTR_RCX sbb r14d, dword ptr [rcx]
#define SBB_R14D_FROM_PTR_RDX sbb r14d, dword ptr [rdx]
#define SBB_R14D_FROM_PTR_RDI sbb r14d, dword ptr [rdi]
#define SBB_R14D_FROM_PTR_RSI sbb r14d, dword ptr [rsi]
#define SBB_R14D_FROM_PTR_RBP sbb r14d, dword ptr [rbp]
#define SBB_R14D_FROM_PTR_RSP sbb r14d, dword ptr [rsp]
#define SBB_R14D_FROM_PTR_R8 sbb r14d, dword ptr [r8]
#define SBB_R14D_FROM_PTR_R9 sbb r14d, dword ptr [r9]
#define SBB_R14D_FROM_PTR_R10 sbb r14d, dword ptr [r10]
#define SBB_R14D_FROM_PTR_R11 sbb r14d, dword ptr [r11]
#define SBB_R14D_FROM_PTR_R12 sbb r14d, dword ptr [r12]
#define SBB_R14D_FROM_PTR_R13 sbb r14d, dword ptr [r13]
#define SBB_R14D_FROM_PTR_R14 sbb r14d, dword ptr [r14]
#define SBB_R14D_FROM_PTR_R15 sbb r14d, dword ptr [r15]
#define SBB_R14D_FROM_PTR_EAX sbb r14d, dword ptr [eax]
#define SBB_R14D_FROM_PTR_EBX sbb r14d, dword ptr [ebx]
#define SBB_R14D_FROM_PTR_ECX sbb r14d, dword ptr [ecx]
#define SBB_R14D_FROM_PTR_EDX sbb r14d, dword ptr [edx]
#define SBB_R14D_FROM_PTR_EDI sbb r14d, dword ptr [edi]
#define SBB_R14D_FROM_PTR_ESI sbb r14d, dword ptr [esi]
#define SBB_R14D_FROM_PTR_EBP sbb r14d, dword ptr [ebp]
#define SBB_R14D_FROM_PTR_ESP sbb r14d, dword ptr [esp]

#define SBB_R15D_FROM_PTR_RAX sbb r15d, dword ptr [rax]
#define SBB_R15D_FROM_PTR_RBX sbb r15d, dword ptr [rbx]
#define SBB_R15D_FROM_PTR_RCX sbb r15d, dword ptr [rcx]
#define SBB_R15D_FROM_PTR_RDX sbb r15d, dword ptr [rdx]
#define SBB_R15D_FROM_PTR_RDI sbb r15d, dword ptr [rdi]
#define SBB_R15D_FROM_PTR_RSI sbb r15d, dword ptr [rsi]
#define SBB_R15D_FROM_PTR_RBP sbb r15d, dword ptr [rbp]
#define SBB_R15D_FROM_PTR_RSP sbb r15d, dword ptr [rsp]
#define SBB_R15D_FROM_PTR_R8 sbb r15d, dword ptr [r8]
#define SBB_R15D_FROM_PTR_R9 sbb r15d, dword ptr [r9]
#define SBB_R15D_FROM_PTR_R10 sbb r15d, dword ptr [r10]
#define SBB_R15D_FROM_PTR_R11 sbb r15d, dword ptr [r11]
#define SBB_R15D_FROM_PTR_R12 sbb r15d, dword ptr [r12]
#define SBB_R15D_FROM_PTR_R13 sbb r15d, dword ptr [r13]
#define SBB_R15D_FROM_PTR_R14 sbb r15d, dword ptr [r14]
#define SBB_R15D_FROM_PTR_R15 sbb r15d, dword ptr [r15]
#define SBB_R15D_FROM_PTR_EAX sbb r15d, dword ptr [eax]
#define SBB_R15D_FROM_PTR_EBX sbb r15d, dword ptr [ebx]
#define SBB_R15D_FROM_PTR_ECX sbb r15d, dword ptr [ecx]
#define SBB_R15D_FROM_PTR_EDX sbb r15d, dword ptr [edx]
#define SBB_R15D_FROM_PTR_EDI sbb r15d, dword ptr [edi]
#define SBB_R15D_FROM_PTR_ESI sbb r15d, dword ptr [esi]
#define SBB_R15D_FROM_PTR_EBP sbb r15d, dword ptr [ebp]
#define SBB_R15D_FROM_PTR_ESP sbb r15d, dword ptr [esp]

#define SBB_EAX_TO_PTR_RAX sbb dword ptr [rax], eax
#define SBB_EAX_TO_PTR_RBX sbb dword ptr [rbx], eax
#define SBB_EAX_TO_PTR_RCX sbb dword ptr [rcx], eax
#define SBB_EAX_TO_PTR_RDX sbb dword ptr [rdx], eax
#define SBB_EAX_TO_PTR_RDI sbb dword ptr [rdi], eax
#define SBB_EAX_TO_PTR_RSI sbb dword ptr [rsi], eax
#define SBB_EAX_TO_PTR_RBP sbb dword ptr [rbp], eax
#define SBB_EAX_TO_PTR_RSP sbb dword ptr [rsp], eax
#define SBB_EAX_TO_PTR_R8 sbb dword ptr [r8], eax
#define SBB_EAX_TO_PTR_R9 sbb dword ptr [r9], eax
#define SBB_EAX_TO_PTR_R10 sbb dword ptr [r10], eax
#define SBB_EAX_TO_PTR_R11 sbb dword ptr [r11], eax
#define SBB_EAX_TO_PTR_R12 sbb dword ptr [r12], eax
#define SBB_EAX_TO_PTR_R13 sbb dword ptr [r13], eax
#define SBB_EAX_TO_PTR_R14 sbb dword ptr [r14], eax
#define SBB_EAX_TO_PTR_R15 sbb dword ptr [r15], eax
#define SBB_EAX_TO_PTR_EAX sbb dword ptr [eax], eax
#define SBB_EAX_TO_PTR_EBX sbb dword ptr [ebx], eax
#define SBB_EAX_TO_PTR_ECX sbb dword ptr [ecx], eax
#define SBB_EAX_TO_PTR_EDX sbb dword ptr [edx], eax
#define SBB_EAX_TO_PTR_EDI sbb dword ptr [edi], eax
#define SBB_EAX_TO_PTR_ESI sbb dword ptr [esi], eax
#define SBB_EAX_TO_PTR_EBP sbb dword ptr [ebp], eax
#define SBB_EAX_TO_PTR_ESP sbb dword ptr [esp], eax

#define SBB_EBX_TO_PTR_RAX sbb dword ptr [rax], ebx
#define SBB_EBX_TO_PTR_RBX sbb dword ptr [rbx], ebx
#define SBB_EBX_TO_PTR_RCX sbb dword ptr [rcx], ebx
#define SBB_EBX_TO_PTR_RDX sbb dword ptr [rdx], ebx
#define SBB_EBX_TO_PTR_RDI sbb dword ptr [rdi], ebx
#define SBB_EBX_TO_PTR_RSI sbb dword ptr [rsi], ebx
#define SBB_EBX_TO_PTR_RBP sbb dword ptr [rbp], ebx
#define SBB_EBX_TO_PTR_RSP sbb dword ptr [rsp], ebx
#define SBB_EBX_TO_PTR_R8 sbb dword ptr [r8], ebx
#define SBB_EBX_TO_PTR_R9 sbb dword ptr [r9], ebx
#define SBB_EBX_TO_PTR_R10 sbb dword ptr [r10], ebx
#define SBB_EBX_TO_PTR_R11 sbb dword ptr [r11], ebx
#define SBB_EBX_TO_PTR_R12 sbb dword ptr [r12], ebx
#define SBB_EBX_TO_PTR_R13 sbb dword ptr [r13], ebx
#define SBB_EBX_TO_PTR_R14 sbb dword ptr [r14], ebx
#define SBB_EBX_TO_PTR_R15 sbb dword ptr [r15], ebx
#define SBB_EBX_TO_PTR_EAX sbb dword ptr [eax], ebx
#define SBB_EBX_TO_PTR_EBX sbb dword ptr [ebx], ebx
#define SBB_EBX_TO_PTR_ECX sbb dword ptr [ecx], ebx
#define SBB_EBX_TO_PTR_EDX sbb dword ptr [edx], ebx
#define SBB_EBX_TO_PTR_EDI sbb dword ptr [edi], ebx
#define SBB_EBX_TO_PTR_ESI sbb dword ptr [esi], ebx
#define SBB_EBX_TO_PTR_EBP sbb dword ptr [ebp], ebx
#define SBB_EBX_TO_PTR_ESP sbb dword ptr [esp], ebx

#define SBB_ECX_TO_PTR_RAX sbb dword ptr [rax], ecx
#define SBB_ECX_TO_PTR_RBX sbb dword ptr [rbx], ecx
#define SBB_ECX_TO_PTR_RCX sbb dword ptr [rcx], ecx
#define SBB_ECX_TO_PTR_RDX sbb dword ptr [rdx], ecx
#define SBB_ECX_TO_PTR_RDI sbb dword ptr [rdi], ecx
#define SBB_ECX_TO_PTR_RSI sbb dword ptr [rsi], ecx
#define SBB_ECX_TO_PTR_RBP sbb dword ptr [rbp], ecx
#define SBB_ECX_TO_PTR_RSP sbb dword ptr [rsp], ecx
#define SBB_ECX_TO_PTR_R8 sbb dword ptr [r8], ecx
#define SBB_ECX_TO_PTR_R9 sbb dword ptr [r9], ecx
#define SBB_ECX_TO_PTR_R10 sbb dword ptr [r10], ecx
#define SBB_ECX_TO_PTR_R11 sbb dword ptr [r11], ecx
#define SBB_ECX_TO_PTR_R12 sbb dword ptr [r12], ecx
#define SBB_ECX_TO_PTR_R13 sbb dword ptr [r13], ecx
#define SBB_ECX_TO_PTR_R14 sbb dword ptr [r14], ecx
#define SBB_ECX_TO_PTR_R15 sbb dword ptr [r15], ecx
#define SBB_ECX_TO_PTR_EAX sbb dword ptr [eax], ecx
#define SBB_ECX_TO_PTR_EBX sbb dword ptr [ebx], ecx
#define SBB_ECX_TO_PTR_ECX sbb dword ptr [ecx], ecx
#define SBB_ECX_TO_PTR_EDX sbb dword ptr [edx], ecx
#define SBB_ECX_TO_PTR_EDI sbb dword ptr [edi], ecx
#define SBB_ECX_TO_PTR_ESI sbb dword ptr [esi], ecx
#define SBB_ECX_TO_PTR_EBP sbb dword ptr [ebp], ecx
#define SBB_ECX_TO_PTR_ESP sbb dword ptr [esp], ecx

#define SBB_EDX_TO_PTR_RAX sbb dword ptr [rax], edx
#define SBB_EDX_TO_PTR_RBX sbb dword ptr [rbx], edx
#define SBB_EDX_TO_PTR_RCX sbb dword ptr [rcx], edx
#define SBB_EDX_TO_PTR_RDX sbb dword ptr [rdx], edx
#define SBB_EDX_TO_PTR_RDI sbb dword ptr [rdi], edx
#define SBB_EDX_TO_PTR_RSI sbb dword ptr [rsi], edx
#define SBB_EDX_TO_PTR_RBP sbb dword ptr [rbp], edx
#define SBB_EDX_TO_PTR_RSP sbb dword ptr [rsp], edx
#define SBB_EDX_TO_PTR_R8 sbb dword ptr [r8], edx
#define SBB_EDX_TO_PTR_R9 sbb dword ptr [r9], edx
#define SBB_EDX_TO_PTR_R10 sbb dword ptr [r10], edx
#define SBB_EDX_TO_PTR_R11 sbb dword ptr [r11], edx
#define SBB_EDX_TO_PTR_R12 sbb dword ptr [r12], edx
#define SBB_EDX_TO_PTR_R13 sbb dword ptr [r13], edx
#define SBB_EDX_TO_PTR_R14 sbb dword ptr [r14], edx
#define SBB_EDX_TO_PTR_R15 sbb dword ptr [r15], edx
#define SBB_EDX_TO_PTR_EAX sbb dword ptr [eax], edx
#define SBB_EDX_TO_PTR_EBX sbb dword ptr [ebx], edx
#define SBB_EDX_TO_PTR_ECX sbb dword ptr [ecx], edx
#define SBB_EDX_TO_PTR_EDX sbb dword ptr [edx], edx
#define SBB_EDX_TO_PTR_EDI sbb dword ptr [edi], edx
#define SBB_EDX_TO_PTR_ESI sbb dword ptr [esi], edx
#define SBB_EDX_TO_PTR_EBP sbb dword ptr [ebp], edx
#define SBB_EDX_TO_PTR_ESP sbb dword ptr [esp], edx

#define SBB_EDI_TO_PTR_RAX sbb dword ptr [rax], edi
#define SBB_EDI_TO_PTR_RBX sbb dword ptr [rbx], edi
#define SBB_EDI_TO_PTR_RCX sbb dword ptr [rcx], edi
#define SBB_EDI_TO_PTR_RDX sbb dword ptr [rdx], edi
#define SBB_EDI_TO_PTR_RDI sbb dword ptr [rdi], edi
#define SBB_EDI_TO_PTR_RSI sbb dword ptr [rsi], edi
#define SBB_EDI_TO_PTR_RBP sbb dword ptr [rbp], edi
#define SBB_EDI_TO_PTR_RSP sbb dword ptr [rsp], edi
#define SBB_EDI_TO_PTR_R8 sbb dword ptr [r8], edi
#define SBB_EDI_TO_PTR_R9 sbb dword ptr [r9], edi
#define SBB_EDI_TO_PTR_R10 sbb dword ptr [r10], edi
#define SBB_EDI_TO_PTR_R11 sbb dword ptr [r11], edi
#define SBB_EDI_TO_PTR_R12 sbb dword ptr [r12], edi
#define SBB_EDI_TO_PTR_R13 sbb dword ptr [r13], edi
#define SBB_EDI_TO_PTR_R14 sbb dword ptr [r14], edi
#define SBB_EDI_TO_PTR_R15 sbb dword ptr [r15], edi
#define SBB_EDI_TO_PTR_EAX sbb dword ptr [eax], edi
#define SBB_EDI_TO_PTR_EBX sbb dword ptr [ebx], edi
#define SBB_EDI_TO_PTR_ECX sbb dword ptr [ecx], edi
#define SBB_EDI_TO_PTR_EDX sbb dword ptr [edx], edi
#define SBB_EDI_TO_PTR_EDI sbb dword ptr [edi], edi
#define SBB_EDI_TO_PTR_ESI sbb dword ptr [esi], edi
#define SBB_EDI_TO_PTR_EBP sbb dword ptr [ebp], edi
#define SBB_EDI_TO_PTR_ESP sbb dword ptr [esp], edi

#define SBB_ESI_TO_PTR_RAX sbb dword ptr [rax], esi
#define SBB_ESI_TO_PTR_RBX sbb dword ptr [rbx], esi
#define SBB_ESI_TO_PTR_RCX sbb dword ptr [rcx], esi
#define SBB_ESI_TO_PTR_RDX sbb dword ptr [rdx], esi
#define SBB_ESI_TO_PTR_RDI sbb dword ptr [rdi], esi
#define SBB_ESI_TO_PTR_RSI sbb dword ptr [rsi], esi
#define SBB_ESI_TO_PTR_RBP sbb dword ptr [rbp], esi
#define SBB_ESI_TO_PTR_RSP sbb dword ptr [rsp], esi
#define SBB_ESI_TO_PTR_R8 sbb dword ptr [r8], esi
#define SBB_ESI_TO_PTR_R9 sbb dword ptr [r9], esi
#define SBB_ESI_TO_PTR_R10 sbb dword ptr [r10], esi
#define SBB_ESI_TO_PTR_R11 sbb dword ptr [r11], esi
#define SBB_ESI_TO_PTR_R12 sbb dword ptr [r12], esi
#define SBB_ESI_TO_PTR_R13 sbb dword ptr [r13], esi
#define SBB_ESI_TO_PTR_R14 sbb dword ptr [r14], esi
#define SBB_ESI_TO_PTR_R15 sbb dword ptr [r15], esi
#define SBB_ESI_TO_PTR_EAX sbb dword ptr [eax], esi
#define SBB_ESI_TO_PTR_EBX sbb dword ptr [ebx], esi
#define SBB_ESI_TO_PTR_ECX sbb dword ptr [ecx], esi
#define SBB_ESI_TO_PTR_EDX sbb dword ptr [edx], esi
#define SBB_ESI_TO_PTR_EDI sbb dword ptr [edi], esi
#define SBB_ESI_TO_PTR_ESI sbb dword ptr [esi], esi
#define SBB_ESI_TO_PTR_EBP sbb dword ptr [ebp], esi
#define SBB_ESI_TO_PTR_ESP sbb dword ptr [esp], esi

#define SBB_EBP_TO_PTR_RAX sbb dword ptr [rax], ebp
#define SBB_EBP_TO_PTR_RBX sbb dword ptr [rbx], ebp
#define SBB_EBP_TO_PTR_RCX sbb dword ptr [rcx], ebp
#define SBB_EBP_TO_PTR_RDX sbb dword ptr [rdx], ebp
#define SBB_EBP_TO_PTR_RDI sbb dword ptr [rdi], ebp
#define SBB_EBP_TO_PTR_RSI sbb dword ptr [rsi], ebp
#define SBB_EBP_TO_PTR_RBP sbb dword ptr [rbp], ebp
#define SBB_EBP_TO_PTR_RSP sbb dword ptr [rsp], ebp
#define SBB_EBP_TO_PTR_R8 sbb dword ptr [r8], ebp
#define SBB_EBP_TO_PTR_R9 sbb dword ptr [r9], ebp
#define SBB_EBP_TO_PTR_R10 sbb dword ptr [r10], ebp
#define SBB_EBP_TO_PTR_R11 sbb dword ptr [r11], ebp
#define SBB_EBP_TO_PTR_R12 sbb dword ptr [r12], ebp
#define SBB_EBP_TO_PTR_R13 sbb dword ptr [r13], ebp
#define SBB_EBP_TO_PTR_R14 sbb dword ptr [r14], ebp
#define SBB_EBP_TO_PTR_R15 sbb dword ptr [r15], ebp
#define SBB_EBP_TO_PTR_EAX sbb dword ptr [eax], ebp
#define SBB_EBP_TO_PTR_EBX sbb dword ptr [ebx], ebp
#define SBB_EBP_TO_PTR_ECX sbb dword ptr [ecx], ebp
#define SBB_EBP_TO_PTR_EDX sbb dword ptr [edx], ebp
#define SBB_EBP_TO_PTR_EDI sbb dword ptr [edi], ebp
#define SBB_EBP_TO_PTR_ESI sbb dword ptr [esi], ebp
#define SBB_EBP_TO_PTR_EBP sbb dword ptr [ebp], ebp
#define SBB_EBP_TO_PTR_ESP sbb dword ptr [esp], ebp

#define SBB_ESP_TO_PTR_RAX sbb dword ptr [rax], esp
#define SBB_ESP_TO_PTR_RBX sbb dword ptr [rbx], esp
#define SBB_ESP_TO_PTR_RCX sbb dword ptr [rcx], esp
#define SBB_ESP_TO_PTR_RDX sbb dword ptr [rdx], esp
#define SBB_ESP_TO_PTR_RDI sbb dword ptr [rdi], esp
#define SBB_ESP_TO_PTR_RSI sbb dword ptr [rsi], esp
#define SBB_ESP_TO_PTR_RBP sbb dword ptr [rbp], esp
#define SBB_ESP_TO_PTR_RSP sbb dword ptr [rsp], esp
#define SBB_ESP_TO_PTR_R8 sbb dword ptr [r8], esp
#define SBB_ESP_TO_PTR_R9 sbb dword ptr [r9], esp
#define SBB_ESP_TO_PTR_R10 sbb dword ptr [r10], esp
#define SBB_ESP_TO_PTR_R11 sbb dword ptr [r11], esp
#define SBB_ESP_TO_PTR_R12 sbb dword ptr [r12], esp
#define SBB_ESP_TO_PTR_R13 sbb dword ptr [r13], esp
#define SBB_ESP_TO_PTR_R14 sbb dword ptr [r14], esp
#define SBB_ESP_TO_PTR_R15 sbb dword ptr [r15], esp
#define SBB_ESP_TO_PTR_EAX sbb dword ptr [eax], esp
#define SBB_ESP_TO_PTR_EBX sbb dword ptr [ebx], esp
#define SBB_ESP_TO_PTR_ECX sbb dword ptr [ecx], esp
#define SBB_ESP_TO_PTR_EDX sbb dword ptr [edx], esp
#define SBB_ESP_TO_PTR_EDI sbb dword ptr [edi], esp
#define SBB_ESP_TO_PTR_ESI sbb dword ptr [esi], esp
#define SBB_ESP_TO_PTR_EBP sbb dword ptr [ebp], esp
#define SBB_ESP_TO_PTR_ESP sbb dword ptr [esp], esp

#define SBB_R8D_TO_PTR_RAX sbb dword ptr [rax], r8d
#define SBB_R8D_TO_PTR_RBX sbb dword ptr [rbx], r8d
#define SBB_R8D_TO_PTR_RCX sbb dword ptr [rcx], r8d
#define SBB_R8D_TO_PTR_RDX sbb dword ptr [rdx], r8d
#define SBB_R8D_TO_PTR_RDI sbb dword ptr [rdi], r8d
#define SBB_R8D_TO_PTR_RSI sbb dword ptr [rsi], r8d
#define SBB_R8D_TO_PTR_RBP sbb dword ptr [rbp], r8d
#define SBB_R8D_TO_PTR_RSP sbb dword ptr [rsp], r8d
#define SBB_R8D_TO_PTR_R8 sbb dword ptr [r8], r8d
#define SBB_R8D_TO_PTR_R9 sbb dword ptr [r9], r8d
#define SBB_R8D_TO_PTR_R10 sbb dword ptr [r10], r8d
#define SBB_R8D_TO_PTR_R11 sbb dword ptr [r11], r8d
#define SBB_R8D_TO_PTR_R12 sbb dword ptr [r12], r8d
#define SBB_R8D_TO_PTR_R13 sbb dword ptr [r13], r8d
#define SBB_R8D_TO_PTR_R14 sbb dword ptr [r14], r8d
#define SBB_R8D_TO_PTR_R15 sbb dword ptr [r15], r8d
#define SBB_R8D_TO_PTR_EAX sbb dword ptr [eax], r8d
#define SBB_R8D_TO_PTR_EBX sbb dword ptr [ebx], r8d
#define SBB_R8D_TO_PTR_ECX sbb dword ptr [ecx], r8d
#define SBB_R8D_TO_PTR_EDX sbb dword ptr [edx], r8d
#define SBB_R8D_TO_PTR_EDI sbb dword ptr [edi], r8d
#define SBB_R8D_TO_PTR_ESI sbb dword ptr [esi], r8d
#define SBB_R8D_TO_PTR_EBP sbb dword ptr [ebp], r8d
#define SBB_R8D_TO_PTR_ESP sbb dword ptr [esp], r8d

#define SBB_R9D_TO_PTR_RAX sbb dword ptr [rax], r9d
#define SBB_R9D_TO_PTR_RBX sbb dword ptr [rbx], r9d
#define SBB_R9D_TO_PTR_RCX sbb dword ptr [rcx], r9d
#define SBB_R9D_TO_PTR_RDX sbb dword ptr [rdx], r9d
#define SBB_R9D_TO_PTR_RDI sbb dword ptr [rdi], r9d
#define SBB_R9D_TO_PTR_RSI sbb dword ptr [rsi], r9d
#define SBB_R9D_TO_PTR_RBP sbb dword ptr [rbp], r9d
#define SBB_R9D_TO_PTR_RSP sbb dword ptr [rsp], r9d
#define SBB_R9D_TO_PTR_R8 sbb dword ptr [r8], r9d
#define SBB_R9D_TO_PTR_R9 sbb dword ptr [r9], r9d
#define SBB_R9D_TO_PTR_R10 sbb dword ptr [r10], r9d
#define SBB_R9D_TO_PTR_R11 sbb dword ptr [r11], r9d
#define SBB_R9D_TO_PTR_R12 sbb dword ptr [r12], r9d
#define SBB_R9D_TO_PTR_R13 sbb dword ptr [r13], r9d
#define SBB_R9D_TO_PTR_R14 sbb dword ptr [r14], r9d
#define SBB_R9D_TO_PTR_R15 sbb dword ptr [r15], r9d
#define SBB_R9D_TO_PTR_EAX sbb dword ptr [eax], r9d
#define SBB_R9D_TO_PTR_EBX sbb dword ptr [ebx], r9d
#define SBB_R9D_TO_PTR_ECX sbb dword ptr [ecx], r9d
#define SBB_R9D_TO_PTR_EDX sbb dword ptr [edx], r9d
#define SBB_R9D_TO_PTR_EDI sbb dword ptr [edi], r9d
#define SBB_R9D_TO_PTR_ESI sbb dword ptr [esi], r9d
#define SBB_R9D_TO_PTR_EBP sbb dword ptr [ebp], r9d
#define SBB_R9D_TO_PTR_ESP sbb dword ptr [esp], r9d

#define SBB_R10D_TO_PTR_RAX sbb dword ptr [rax], r10d
#define SBB_R10D_TO_PTR_RBX sbb dword ptr [rbx], r10d
#define SBB_R10D_TO_PTR_RCX sbb dword ptr [rcx], r10d
#define SBB_R10D_TO_PTR_RDX sbb dword ptr [rdx], r10d
#define SBB_R10D_TO_PTR_RDI sbb dword ptr [rdi], r10d
#define SBB_R10D_TO_PTR_RSI sbb dword ptr [rsi], r10d
#define SBB_R10D_TO_PTR_RBP sbb dword ptr [rbp], r10d
#define SBB_R10D_TO_PTR_RSP sbb dword ptr [rsp], r10d
#define SBB_R10D_TO_PTR_R8 sbb dword ptr [r8], r10d
#define SBB_R10D_TO_PTR_R9 sbb dword ptr [r9], r10d
#define SBB_R10D_TO_PTR_R10 sbb dword ptr [r10], r10d
#define SBB_R10D_TO_PTR_R11 sbb dword ptr [r11], r10d
#define SBB_R10D_TO_PTR_R12 sbb dword ptr [r12], r10d
#define SBB_R10D_TO_PTR_R13 sbb dword ptr [r13], r10d
#define SBB_R10D_TO_PTR_R14 sbb dword ptr [r14], r10d
#define SBB_R10D_TO_PTR_R15 sbb dword ptr [r15], r10d
#define SBB_R10D_TO_PTR_EAX sbb dword ptr [eax], r10d
#define SBB_R10D_TO_PTR_EBX sbb dword ptr [ebx], r10d
#define SBB_R10D_TO_PTR_ECX sbb dword ptr [ecx], r10d
#define SBB_R10D_TO_PTR_EDX sbb dword ptr [edx], r10d
#define SBB_R10D_TO_PTR_EDI sbb dword ptr [edi], r10d
#define SBB_R10D_TO_PTR_ESI sbb dword ptr [esi], r10d
#define SBB_R10D_TO_PTR_EBP sbb dword ptr [ebp], r10d
#define SBB_R10D_TO_PTR_ESP sbb dword ptr [esp], r10d

#define SBB_R11D_TO_PTR_RAX sbb dword ptr [rax], r11d
#define SBB_R11D_TO_PTR_RBX sbb dword ptr [rbx], r11d
#define SBB_R11D_TO_PTR_RCX sbb dword ptr [rcx], r11d
#define SBB_R11D_TO_PTR_RDX sbb dword ptr [rdx], r11d
#define SBB_R11D_TO_PTR_RDI sbb dword ptr [rdi], r11d
#define SBB_R11D_TO_PTR_RSI sbb dword ptr [rsi], r11d
#define SBB_R11D_TO_PTR_RBP sbb dword ptr [rbp], r11d
#define SBB_R11D_TO_PTR_RSP sbb dword ptr [rsp], r11d
#define SBB_R11D_TO_PTR_R8 sbb dword ptr [r8], r11d
#define SBB_R11D_TO_PTR_R9 sbb dword ptr [r9], r11d
#define SBB_R11D_TO_PTR_R10 sbb dword ptr [r10], r11d
#define SBB_R11D_TO_PTR_R11 sbb dword ptr [r11], r11d
#define SBB_R11D_TO_PTR_R12 sbb dword ptr [r12], r11d
#define SBB_R11D_TO_PTR_R13 sbb dword ptr [r13], r11d
#define SBB_R11D_TO_PTR_R14 sbb dword ptr [r14], r11d
#define SBB_R11D_TO_PTR_R15 sbb dword ptr [r15], r11d
#define SBB_R11D_TO_PTR_EAX sbb dword ptr [eax], r11d
#define SBB_R11D_TO_PTR_EBX sbb dword ptr [ebx], r11d
#define SBB_R11D_TO_PTR_ECX sbb dword ptr [ecx], r11d
#define SBB_R11D_TO_PTR_EDX sbb dword ptr [edx], r11d
#define SBB_R11D_TO_PTR_EDI sbb dword ptr [edi], r11d
#define SBB_R11D_TO_PTR_ESI sbb dword ptr [esi], r11d
#define SBB_R11D_TO_PTR_EBP sbb dword ptr [ebp], r11d
#define SBB_R11D_TO_PTR_ESP sbb dword ptr [esp], r11d

#define SBB_R12D_TO_PTR_RAX sbb dword ptr [rax], r12d
#define SBB_R12D_TO_PTR_RBX sbb dword ptr [rbx], r12d
#define SBB_R12D_TO_PTR_RCX sbb dword ptr [rcx], r12d
#define SBB_R12D_TO_PTR_RDX sbb dword ptr [rdx], r12d
#define SBB_R12D_TO_PTR_RDI sbb dword ptr [rdi], r12d
#define SBB_R12D_TO_PTR_RSI sbb dword ptr [rsi], r12d
#define SBB_R12D_TO_PTR_RBP sbb dword ptr [rbp], r12d
#define SBB_R12D_TO_PTR_RSP sbb dword ptr [rsp], r12d
#define SBB_R12D_TO_PTR_R8 sbb dword ptr [r8], r12d
#define SBB_R12D_TO_PTR_R9 sbb dword ptr [r9], r12d
#define SBB_R12D_TO_PTR_R10 sbb dword ptr [r10], r12d
#define SBB_R12D_TO_PTR_R11 sbb dword ptr [r11], r12d
#define SBB_R12D_TO_PTR_R12 sbb dword ptr [r12], r12d
#define SBB_R12D_TO_PTR_R13 sbb dword ptr [r13], r12d
#define SBB_R12D_TO_PTR_R14 sbb dword ptr [r14], r12d
#define SBB_R12D_TO_PTR_R15 sbb dword ptr [r15], r12d
#define SBB_R12D_TO_PTR_EAX sbb dword ptr [eax], r12d
#define SBB_R12D_TO_PTR_EBX sbb dword ptr [ebx], r12d
#define SBB_R12D_TO_PTR_ECX sbb dword ptr [ecx], r12d
#define SBB_R12D_TO_PTR_EDX sbb dword ptr [edx], r12d
#define SBB_R12D_TO_PTR_EDI sbb dword ptr [edi], r12d
#define SBB_R12D_TO_PTR_ESI sbb dword ptr [esi], r12d
#define SBB_R12D_TO_PTR_EBP sbb dword ptr [ebp], r12d
#define SBB_R12D_TO_PTR_ESP sbb dword ptr [esp], r12d

#define SBB_R13D_TO_PTR_RAX sbb dword ptr [rax], r13d
#define SBB_R13D_TO_PTR_RBX sbb dword ptr [rbx], r13d
#define SBB_R13D_TO_PTR_RCX sbb dword ptr [rcx], r13d
#define SBB_R13D_TO_PTR_RDX sbb dword ptr [rdx], r13d
#define SBB_R13D_TO_PTR_RDI sbb dword ptr [rdi], r13d
#define SBB_R13D_TO_PTR_RSI sbb dword ptr [rsi], r13d
#define SBB_R13D_TO_PTR_RBP sbb dword ptr [rbp], r13d
#define SBB_R13D_TO_PTR_RSP sbb dword ptr [rsp], r13d
#define SBB_R13D_TO_PTR_R8 sbb dword ptr [r8], r13d
#define SBB_R13D_TO_PTR_R9 sbb dword ptr [r9], r13d
#define SBB_R13D_TO_PTR_R10 sbb dword ptr [r10], r13d
#define SBB_R13D_TO_PTR_R11 sbb dword ptr [r11], r13d
#define SBB_R13D_TO_PTR_R12 sbb dword ptr [r12], r13d
#define SBB_R13D_TO_PTR_R13 sbb dword ptr [r13], r13d
#define SBB_R13D_TO_PTR_R14 sbb dword ptr [r14], r13d
#define SBB_R13D_TO_PTR_R15 sbb dword ptr [r15], r13d
#define SBB_R13D_TO_PTR_EAX sbb dword ptr [eax], r13d
#define SBB_R13D_TO_PTR_EBX sbb dword ptr [ebx], r13d
#define SBB_R13D_TO_PTR_ECX sbb dword ptr [ecx], r13d
#define SBB_R13D_TO_PTR_EDX sbb dword ptr [edx], r13d
#define SBB_R13D_TO_PTR_EDI sbb dword ptr [edi], r13d
#define SBB_R13D_TO_PTR_ESI sbb dword ptr [esi], r13d
#define SBB_R13D_TO_PTR_EBP sbb dword ptr [ebp], r13d
#define SBB_R13D_TO_PTR_ESP sbb dword ptr [esp], r13d

#define SBB_R14D_TO_PTR_RAX sbb dword ptr [rax], r14d
#define SBB_R14D_TO_PTR_RBX sbb dword ptr [rbx], r14d
#define SBB_R14D_TO_PTR_RCX sbb dword ptr [rcx], r14d
#define SBB_R14D_TO_PTR_RDX sbb dword ptr [rdx], r14d
#define SBB_R14D_TO_PTR_RDI sbb dword ptr [rdi], r14d
#define SBB_R14D_TO_PTR_RSI sbb dword ptr [rsi], r14d
#define SBB_R14D_TO_PTR_RBP sbb dword ptr [rbp], r14d
#define SBB_R14D_TO_PTR_RSP sbb dword ptr [rsp], r14d
#define SBB_R14D_TO_PTR_R8 sbb dword ptr [r8], r14d
#define SBB_R14D_TO_PTR_R9 sbb dword ptr [r9], r14d
#define SBB_R14D_TO_PTR_R10 sbb dword ptr [r10], r14d
#define SBB_R14D_TO_PTR_R11 sbb dword ptr [r11], r14d
#define SBB_R14D_TO_PTR_R12 sbb dword ptr [r12], r14d
#define SBB_R14D_TO_PTR_R13 sbb dword ptr [r13], r14d
#define SBB_R14D_TO_PTR_R14 sbb dword ptr [r14], r14d
#define SBB_R14D_TO_PTR_R15 sbb dword ptr [r15], r14d
#define SBB_R14D_TO_PTR_EAX sbb dword ptr [eax], r14d
#define SBB_R14D_TO_PTR_EBX sbb dword ptr [ebx], r14d
#define SBB_R14D_TO_PTR_ECX sbb dword ptr [ecx], r14d
#define SBB_R14D_TO_PTR_EDX sbb dword ptr [edx], r14d
#define SBB_R14D_TO_PTR_EDI sbb dword ptr [edi], r14d
#define SBB_R14D_TO_PTR_ESI sbb dword ptr [esi], r14d
#define SBB_R14D_TO_PTR_EBP sbb dword ptr [ebp], r14d
#define SBB_R14D_TO_PTR_ESP sbb dword ptr [esp], r14d

#define SBB_R15D_TO_PTR_RAX sbb dword ptr [rax], r15d
#define SBB_R15D_TO_PTR_RBX sbb dword ptr [rbx], r15d
#define SBB_R15D_TO_PTR_RCX sbb dword ptr [rcx], r15d
#define SBB_R15D_TO_PTR_RDX sbb dword ptr [rdx], r15d
#define SBB_R15D_TO_PTR_RDI sbb dword ptr [rdi], r15d
#define SBB_R15D_TO_PTR_RSI sbb dword ptr [rsi], r15d
#define SBB_R15D_TO_PTR_RBP sbb dword ptr [rbp], r15d
#define SBB_R15D_TO_PTR_RSP sbb dword ptr [rsp], r15d
#define SBB_R15D_TO_PTR_R8 sbb dword ptr [r8], r15d
#define SBB_R15D_TO_PTR_R9 sbb dword ptr [r9], r15d
#define SBB_R15D_TO_PTR_R10 sbb dword ptr [r10], r15d
#define SBB_R15D_TO_PTR_R11 sbb dword ptr [r11], r15d
#define SBB_R15D_TO_PTR_R12 sbb dword ptr [r12], r15d
#define SBB_R15D_TO_PTR_R13 sbb dword ptr [r13], r15d
#define SBB_R15D_TO_PTR_R14 sbb dword ptr [r14], r15d
#define SBB_R15D_TO_PTR_R15 sbb dword ptr [r15], r15d
#define SBB_R15D_TO_PTR_EAX sbb dword ptr [eax], r15d
#define SBB_R15D_TO_PTR_EBX sbb dword ptr [ebx], r15d
#define SBB_R15D_TO_PTR_ECX sbb dword ptr [ecx], r15d
#define SBB_R15D_TO_PTR_EDX sbb dword ptr [edx], r15d
#define SBB_R15D_TO_PTR_EDI sbb dword ptr [edi], r15d
#define SBB_R15D_TO_PTR_ESI sbb dword ptr [esi], r15d
#define SBB_R15D_TO_PTR_EBP sbb dword ptr [ebp], r15d
#define SBB_R15D_TO_PTR_ESP sbb dword ptr [esp], r15d

#define SBB_EAX_FROM_PTR_RAX_(VALUE) sbb eax, dword ptr [rax + VALUE]
#define SBB_EAX_FROM_PTR_RBX_(VALUE) sbb eax, dword ptr [rbx + VALUE]
#define SBB_EAX_FROM_PTR_RCX_(VALUE) sbb eax, dword ptr [rcx + VALUE]
#define SBB_EAX_FROM_PTR_RDX_(VALUE) sbb eax, dword ptr [rdx + VALUE]
#define SBB_EAX_FROM_PTR_RDI_(VALUE) sbb eax, dword ptr [rdi + VALUE]
#define SBB_EAX_FROM_PTR_RSI_(VALUE) sbb eax, dword ptr [rsi + VALUE]
#define SBB_EAX_FROM_PTR_RBP_(VALUE) sbb eax, dword ptr [rbp + VALUE]
#define SBB_EAX_FROM_PTR_RSP_(VALUE) sbb eax, dword ptr [rsp + VALUE]
#define SBB_EAX_FROM_PTR_R8_(VALUE) sbb eax, dword ptr [r8 + VALUE]
#define SBB_EAX_FROM_PTR_R9_(VALUE) sbb eax, dword ptr [r9 + VALUE]
#define SBB_EAX_FROM_PTR_R10_(VALUE) sbb eax, dword ptr [r10 + VALUE]
#define SBB_EAX_FROM_PTR_R11_(VALUE) sbb eax, dword ptr [r11 + VALUE]
#define SBB_EAX_FROM_PTR_R12_(VALUE) sbb eax, dword ptr [r12 + VALUE]
#define SBB_EAX_FROM_PTR_R13_(VALUE) sbb eax, dword ptr [r13 + VALUE]
#define SBB_EAX_FROM_PTR_R14_(VALUE) sbb eax, dword ptr [r14 + VALUE]
#define SBB_EAX_FROM_PTR_R15_(VALUE) sbb eax, dword ptr [r15 + VALUE]
#define SBB_EAX_FROM_PTR_EAX_(VALUE) sbb eax, dword ptr [eax + VALUE]
#define SBB_EAX_FROM_PTR_EBX_(VALUE) sbb eax, dword ptr [ebx + VALUE]
#define SBB_EAX_FROM_PTR_ECX_(VALUE) sbb eax, dword ptr [ecx + VALUE]
#define SBB_EAX_FROM_PTR_EDX_(VALUE) sbb eax, dword ptr [edx + VALUE]
#define SBB_EAX_FROM_PTR_EDI_(VALUE) sbb eax, dword ptr [edi + VALUE]
#define SBB_EAX_FROM_PTR_ESI_(VALUE) sbb eax, dword ptr [esi + VALUE]
#define SBB_EAX_FROM_PTR_EBP_(VALUE) sbb eax, dword ptr [ebp + VALUE]
#define SBB_EAX_FROM_PTR_ESP_(VALUE) sbb eax, dword ptr [esp + VALUE]

#define SBB_EBX_FROM_PTR_RAX_(VALUE) sbb ebx, dword ptr [rax + VALUE]
#define SBB_EBX_FROM_PTR_RBX_(VALUE) sbb ebx, dword ptr [rbx + VALUE]
#define SBB_EBX_FROM_PTR_RCX_(VALUE) sbb ebx, dword ptr [rcx + VALUE]
#define SBB_EBX_FROM_PTR_RDX_(VALUE) sbb ebx, dword ptr [rdx + VALUE]
#define SBB_EBX_FROM_PTR_RDI_(VALUE) sbb ebx, dword ptr [rdi + VALUE]
#define SBB_EBX_FROM_PTR_RSI_(VALUE) sbb ebx, dword ptr [rsi + VALUE]
#define SBB_EBX_FROM_PTR_RBP_(VALUE) sbb ebx, dword ptr [rbp + VALUE]
#define SBB_EBX_FROM_PTR_RSP_(VALUE) sbb ebx, dword ptr [rsp + VALUE]
#define SBB_EBX_FROM_PTR_R8_(VALUE) sbb ebx, dword ptr [r8 + VALUE]
#define SBB_EBX_FROM_PTR_R9_(VALUE) sbb ebx, dword ptr [r9 + VALUE]
#define SBB_EBX_FROM_PTR_R10_(VALUE) sbb ebx, dword ptr [r10 + VALUE]
#define SBB_EBX_FROM_PTR_R11_(VALUE) sbb ebx, dword ptr [r11 + VALUE]
#define SBB_EBX_FROM_PTR_R12_(VALUE) sbb ebx, dword ptr [r12 + VALUE]
#define SBB_EBX_FROM_PTR_R13_(VALUE) sbb ebx, dword ptr [r13 + VALUE]
#define SBB_EBX_FROM_PTR_R14_(VALUE) sbb ebx, dword ptr [r14 + VALUE]
#define SBB_EBX_FROM_PTR_R15_(VALUE) sbb ebx, dword ptr [r15 + VALUE]
#define SBB_EBX_FROM_PTR_EAX_(VALUE) sbb ebx, dword ptr [eax + VALUE]
#define SBB_EBX_FROM_PTR_EBX_(VALUE) sbb ebx, dword ptr [ebx + VALUE]
#define SBB_EBX_FROM_PTR_ECX_(VALUE) sbb ebx, dword ptr [ecx + VALUE]
#define SBB_EBX_FROM_PTR_EDX_(VALUE) sbb ebx, dword ptr [edx + VALUE]
#define SBB_EBX_FROM_PTR_EDI_(VALUE) sbb ebx, dword ptr [edi + VALUE]
#define SBB_EBX_FROM_PTR_ESI_(VALUE) sbb ebx, dword ptr [esi + VALUE]
#define SBB_EBX_FROM_PTR_EBP_(VALUE) sbb ebx, dword ptr [ebp + VALUE]
#define SBB_EBX_FROM_PTR_ESP_(VALUE) sbb ebx, dword ptr [esp + VALUE]

#define SBB_ECX_FROM_PTR_RAX_(VALUE) sbb ecx, dword ptr [rax + VALUE]
#define SBB_ECX_FROM_PTR_RBX_(VALUE) sbb ecx, dword ptr [rbx + VALUE]
#define SBB_ECX_FROM_PTR_RCX_(VALUE) sbb ecx, dword ptr [rcx + VALUE]
#define SBB_ECX_FROM_PTR_RDX_(VALUE) sbb ecx, dword ptr [rdx + VALUE]
#define SBB_ECX_FROM_PTR_RDI_(VALUE) sbb ecx, dword ptr [rdi + VALUE]
#define SBB_ECX_FROM_PTR_RSI_(VALUE) sbb ecx, dword ptr [rsi + VALUE]
#define SBB_ECX_FROM_PTR_RBP_(VALUE) sbb ecx, dword ptr [rbp + VALUE]
#define SBB_ECX_FROM_PTR_RSP_(VALUE) sbb ecx, dword ptr [rsp + VALUE]
#define SBB_ECX_FROM_PTR_R8_(VALUE) sbb ecx, dword ptr [r8 + VALUE]
#define SBB_ECX_FROM_PTR_R9_(VALUE) sbb ecx, dword ptr [r9 + VALUE]
#define SBB_ECX_FROM_PTR_R10_(VALUE) sbb ecx, dword ptr [r10 + VALUE]
#define SBB_ECX_FROM_PTR_R11_(VALUE) sbb ecx, dword ptr [r11 + VALUE]
#define SBB_ECX_FROM_PTR_R12_(VALUE) sbb ecx, dword ptr [r12 + VALUE]
#define SBB_ECX_FROM_PTR_R13_(VALUE) sbb ecx, dword ptr [r13 + VALUE]
#define SBB_ECX_FROM_PTR_R14_(VALUE) sbb ecx, dword ptr [r14 + VALUE]
#define SBB_ECX_FROM_PTR_R15_(VALUE) sbb ecx, dword ptr [r15 + VALUE]
#define SBB_ECX_FROM_PTR_EAX_(VALUE) sbb ecx, dword ptr [eax + VALUE]
#define SBB_ECX_FROM_PTR_EBX_(VALUE) sbb ecx, dword ptr [ebx + VALUE]
#define SBB_ECX_FROM_PTR_ECX_(VALUE) sbb ecx, dword ptr [ecx + VALUE]
#define SBB_ECX_FROM_PTR_EDX_(VALUE) sbb ecx, dword ptr [edx + VALUE]
#define SBB_ECX_FROM_PTR_EDI_(VALUE) sbb ecx, dword ptr [edi + VALUE]
#define SBB_ECX_FROM_PTR_ESI_(VALUE) sbb ecx, dword ptr [esi + VALUE]
#define SBB_ECX_FROM_PTR_EBP_(VALUE) sbb ecx, dword ptr [ebp + VALUE]
#define SBB_ECX_FROM_PTR_ESP_(VALUE) sbb ecx, dword ptr [esp + VALUE]

#define SBB_EDX_FROM_PTR_RAX_(VALUE) sbb edx, dword ptr [rax + VALUE]
#define SBB_EDX_FROM_PTR_RBX_(VALUE) sbb edx, dword ptr [rbx + VALUE]
#define SBB_EDX_FROM_PTR_RCX_(VALUE) sbb edx, dword ptr [rcx + VALUE]
#define SBB_EDX_FROM_PTR_RDX_(VALUE) sbb edx, dword ptr [rdx + VALUE]
#define SBB_EDX_FROM_PTR_RDI_(VALUE) sbb edx, dword ptr [rdi + VALUE]
#define SBB_EDX_FROM_PTR_RSI_(VALUE) sbb edx, dword ptr [rsi + VALUE]
#define SBB_EDX_FROM_PTR_RBP_(VALUE) sbb edx, dword ptr [rbp + VALUE]
#define SBB_EDX_FROM_PTR_RSP_(VALUE) sbb edx, dword ptr [rsp + VALUE]
#define SBB_EDX_FROM_PTR_R8_(VALUE) sbb edx, dword ptr [r8 + VALUE]
#define SBB_EDX_FROM_PTR_R9_(VALUE) sbb edx, dword ptr [r9 + VALUE]
#define SBB_EDX_FROM_PTR_R10_(VALUE) sbb edx, dword ptr [r10 + VALUE]
#define SBB_EDX_FROM_PTR_R11_(VALUE) sbb edx, dword ptr [r11 + VALUE]
#define SBB_EDX_FROM_PTR_R12_(VALUE) sbb edx, dword ptr [r12 + VALUE]
#define SBB_EDX_FROM_PTR_R13_(VALUE) sbb edx, dword ptr [r13 + VALUE]
#define SBB_EDX_FROM_PTR_R14_(VALUE) sbb edx, dword ptr [r14 + VALUE]
#define SBB_EDX_FROM_PTR_R15_(VALUE) sbb edx, dword ptr [r15 + VALUE]
#define SBB_EDX_FROM_PTR_EAX_(VALUE) sbb edx, dword ptr [eax + VALUE]
#define SBB_EDX_FROM_PTR_EBX_(VALUE) sbb edx, dword ptr [ebx + VALUE]
#define SBB_EDX_FROM_PTR_ECX_(VALUE) sbb edx, dword ptr [ecx + VALUE]
#define SBB_EDX_FROM_PTR_EDX_(VALUE) sbb edx, dword ptr [edx + VALUE]
#define SBB_EDX_FROM_PTR_EDI_(VALUE) sbb edx, dword ptr [edi + VALUE]
#define SBB_EDX_FROM_PTR_ESI_(VALUE) sbb edx, dword ptr [esi + VALUE]
#define SBB_EDX_FROM_PTR_EBP_(VALUE) sbb edx, dword ptr [ebp + VALUE]
#define SBB_EDX_FROM_PTR_ESP_(VALUE) sbb edx, dword ptr [esp + VALUE]

#define SBB_EDI_FROM_PTR_RAX_(VALUE) sbb edi, dword ptr [rax + VALUE]
#define SBB_EDI_FROM_PTR_RBX_(VALUE) sbb edi, dword ptr [rbx + VALUE]
#define SBB_EDI_FROM_PTR_RCX_(VALUE) sbb edi, dword ptr [rcx + VALUE]
#define SBB_EDI_FROM_PTR_RDX_(VALUE) sbb edi, dword ptr [rdx + VALUE]
#define SBB_EDI_FROM_PTR_RDI_(VALUE) sbb edi, dword ptr [rdi + VALUE]
#define SBB_EDI_FROM_PTR_RSI_(VALUE) sbb edi, dword ptr [rsi + VALUE]
#define SBB_EDI_FROM_PTR_RBP_(VALUE) sbb edi, dword ptr [rbp + VALUE]
#define SBB_EDI_FROM_PTR_RSP_(VALUE) sbb edi, dword ptr [rsp + VALUE]
#define SBB_EDI_FROM_PTR_R8_(VALUE) sbb edi, dword ptr [r8 + VALUE]
#define SBB_EDI_FROM_PTR_R9_(VALUE) sbb edi, dword ptr [r9 + VALUE]
#define SBB_EDI_FROM_PTR_R10_(VALUE) sbb edi, dword ptr [r10 + VALUE]
#define SBB_EDI_FROM_PTR_R11_(VALUE) sbb edi, dword ptr [r11 + VALUE]
#define SBB_EDI_FROM_PTR_R12_(VALUE) sbb edi, dword ptr [r12 + VALUE]
#define SBB_EDI_FROM_PTR_R13_(VALUE) sbb edi, dword ptr [r13 + VALUE]
#define SBB_EDI_FROM_PTR_R14_(VALUE) sbb edi, dword ptr [r14 + VALUE]
#define SBB_EDI_FROM_PTR_R15_(VALUE) sbb edi, dword ptr [r15 + VALUE]
#define SBB_EDI_FROM_PTR_EAX_(VALUE) sbb edi, dword ptr [eax + VALUE]
#define SBB_EDI_FROM_PTR_EBX_(VALUE) sbb edi, dword ptr [ebx + VALUE]
#define SBB_EDI_FROM_PTR_ECX_(VALUE) sbb edi, dword ptr [ecx + VALUE]
#define SBB_EDI_FROM_PTR_EDX_(VALUE) sbb edi, dword ptr [edx + VALUE]
#define SBB_EDI_FROM_PTR_EDI_(VALUE) sbb edi, dword ptr [edi + VALUE]
#define SBB_EDI_FROM_PTR_ESI_(VALUE) sbb edi, dword ptr [esi + VALUE]
#define SBB_EDI_FROM_PTR_EBP_(VALUE) sbb edi, dword ptr [ebp + VALUE]
#define SBB_EDI_FROM_PTR_ESP_(VALUE) sbb edi, dword ptr [esp + VALUE]

#define SBB_ESI_FROM_PTR_RAX_(VALUE) sbb esi, dword ptr [rax + VALUE]
#define SBB_ESI_FROM_PTR_RBX_(VALUE) sbb esi, dword ptr [rbx + VALUE]
#define SBB_ESI_FROM_PTR_RCX_(VALUE) sbb esi, dword ptr [rcx + VALUE]
#define SBB_ESI_FROM_PTR_RDX_(VALUE) sbb esi, dword ptr [rdx + VALUE]
#define SBB_ESI_FROM_PTR_RDI_(VALUE) sbb esi, dword ptr [rdi + VALUE]
#define SBB_ESI_FROM_PTR_RSI_(VALUE) sbb esi, dword ptr [rsi + VALUE]
#define SBB_ESI_FROM_PTR_RBP_(VALUE) sbb esi, dword ptr [rbp + VALUE]
#define SBB_ESI_FROM_PTR_RSP_(VALUE) sbb esi, dword ptr [rsp + VALUE]
#define SBB_ESI_FROM_PTR_R8_(VALUE) sbb esi, dword ptr [r8 + VALUE]
#define SBB_ESI_FROM_PTR_R9_(VALUE) sbb esi, dword ptr [r9 + VALUE]
#define SBB_ESI_FROM_PTR_R10_(VALUE) sbb esi, dword ptr [r10 + VALUE]
#define SBB_ESI_FROM_PTR_R11_(VALUE) sbb esi, dword ptr [r11 + VALUE]
#define SBB_ESI_FROM_PTR_R12_(VALUE) sbb esi, dword ptr [r12 + VALUE]
#define SBB_ESI_FROM_PTR_R13_(VALUE) sbb esi, dword ptr [r13 + VALUE]
#define SBB_ESI_FROM_PTR_R14_(VALUE) sbb esi, dword ptr [r14 + VALUE]
#define SBB_ESI_FROM_PTR_R15_(VALUE) sbb esi, dword ptr [r15 + VALUE]
#define SBB_ESI_FROM_PTR_EAX_(VALUE) sbb esi, dword ptr [eax + VALUE]
#define SBB_ESI_FROM_PTR_EBX_(VALUE) sbb esi, dword ptr [ebx + VALUE]
#define SBB_ESI_FROM_PTR_ECX_(VALUE) sbb esi, dword ptr [ecx + VALUE]
#define SBB_ESI_FROM_PTR_EDX_(VALUE) sbb esi, dword ptr [edx + VALUE]
#define SBB_ESI_FROM_PTR_EDI_(VALUE) sbb esi, dword ptr [edi + VALUE]
#define SBB_ESI_FROM_PTR_ESI_(VALUE) sbb esi, dword ptr [esi + VALUE]
#define SBB_ESI_FROM_PTR_EBP_(VALUE) sbb esi, dword ptr [ebp + VALUE]
#define SBB_ESI_FROM_PTR_ESP_(VALUE) sbb esi, dword ptr [esp + VALUE]

#define SBB_EBP_FROM_PTR_RAX_(VALUE) sbb ebp, dword ptr [rax + VALUE]
#define SBB_EBP_FROM_PTR_RBX_(VALUE) sbb ebp, dword ptr [rbx + VALUE]
#define SBB_EBP_FROM_PTR_RCX_(VALUE) sbb ebp, dword ptr [rcx + VALUE]
#define SBB_EBP_FROM_PTR_RDX_(VALUE) sbb ebp, dword ptr [rdx + VALUE]
#define SBB_EBP_FROM_PTR_RDI_(VALUE) sbb ebp, dword ptr [rdi + VALUE]
#define SBB_EBP_FROM_PTR_RSI_(VALUE) sbb ebp, dword ptr [rsi + VALUE]
#define SBB_EBP_FROM_PTR_RBP_(VALUE) sbb ebp, dword ptr [rbp + VALUE]
#define SBB_EBP_FROM_PTR_RSP_(VALUE) sbb ebp, dword ptr [rsp + VALUE]
#define SBB_EBP_FROM_PTR_R8_(VALUE) sbb ebp, dword ptr [r8 + VALUE]
#define SBB_EBP_FROM_PTR_R9_(VALUE) sbb ebp, dword ptr [r9 + VALUE]
#define SBB_EBP_FROM_PTR_R10_(VALUE) sbb ebp, dword ptr [r10 + VALUE]
#define SBB_EBP_FROM_PTR_R11_(VALUE) sbb ebp, dword ptr [r11 + VALUE]
#define SBB_EBP_FROM_PTR_R12_(VALUE) sbb ebp, dword ptr [r12 + VALUE]
#define SBB_EBP_FROM_PTR_R13_(VALUE) sbb ebp, dword ptr [r13 + VALUE]
#define SBB_EBP_FROM_PTR_R14_(VALUE) sbb ebp, dword ptr [r14 + VALUE]
#define SBB_EBP_FROM_PTR_R15_(VALUE) sbb ebp, dword ptr [r15 + VALUE]
#define SBB_EBP_FROM_PTR_EAX_(VALUE) sbb ebp, dword ptr [eax + VALUE]
#define SBB_EBP_FROM_PTR_EBX_(VALUE) sbb ebp, dword ptr [ebx + VALUE]
#define SBB_EBP_FROM_PTR_ECX_(VALUE) sbb ebp, dword ptr [ecx + VALUE]
#define SBB_EBP_FROM_PTR_EDX_(VALUE) sbb ebp, dword ptr [edx + VALUE]
#define SBB_EBP_FROM_PTR_EDI_(VALUE) sbb ebp, dword ptr [edi + VALUE]
#define SBB_EBP_FROM_PTR_ESI_(VALUE) sbb ebp, dword ptr [esi + VALUE]
#define SBB_EBP_FROM_PTR_EBP_(VALUE) sbb ebp, dword ptr [ebp + VALUE]
#define SBB_EBP_FROM_PTR_ESP_(VALUE) sbb ebp, dword ptr [esp + VALUE]

#define SBB_ESP_FROM_PTR_RAX_(VALUE) sbb esp, dword ptr [rax + VALUE]
#define SBB_ESP_FROM_PTR_RBX_(VALUE) sbb esp, dword ptr [rbx + VALUE]
#define SBB_ESP_FROM_PTR_RCX_(VALUE) sbb esp, dword ptr [rcx + VALUE]
#define SBB_ESP_FROM_PTR_RDX_(VALUE) sbb esp, dword ptr [rdx + VALUE]
#define SBB_ESP_FROM_PTR_RDI_(VALUE) sbb esp, dword ptr [rdi + VALUE]
#define SBB_ESP_FROM_PTR_RSI_(VALUE) sbb esp, dword ptr [rsi + VALUE]
#define SBB_ESP_FROM_PTR_RBP_(VALUE) sbb esp, dword ptr [rbp + VALUE]
#define SBB_ESP_FROM_PTR_RSP_(VALUE) sbb esp, dword ptr [rsp + VALUE]
#define SBB_ESP_FROM_PTR_R8_(VALUE) sbb esp, dword ptr [r8 + VALUE]
#define SBB_ESP_FROM_PTR_R9_(VALUE) sbb esp, dword ptr [r9 + VALUE]
#define SBB_ESP_FROM_PTR_R10_(VALUE) sbb esp, dword ptr [r10 + VALUE]
#define SBB_ESP_FROM_PTR_R11_(VALUE) sbb esp, dword ptr [r11 + VALUE]
#define SBB_ESP_FROM_PTR_R12_(VALUE) sbb esp, dword ptr [r12 + VALUE]
#define SBB_ESP_FROM_PTR_R13_(VALUE) sbb esp, dword ptr [r13 + VALUE]
#define SBB_ESP_FROM_PTR_R14_(VALUE) sbb esp, dword ptr [r14 + VALUE]
#define SBB_ESP_FROM_PTR_R15_(VALUE) sbb esp, dword ptr [r15 + VALUE]
#define SBB_ESP_FROM_PTR_EAX_(VALUE) sbb esp, dword ptr [eax + VALUE]
#define SBB_ESP_FROM_PTR_EBX_(VALUE) sbb esp, dword ptr [ebx + VALUE]
#define SBB_ESP_FROM_PTR_ECX_(VALUE) sbb esp, dword ptr [ecx + VALUE]
#define SBB_ESP_FROM_PTR_EDX_(VALUE) sbb esp, dword ptr [edx + VALUE]
#define SBB_ESP_FROM_PTR_EDI_(VALUE) sbb esp, dword ptr [edi + VALUE]
#define SBB_ESP_FROM_PTR_ESI_(VALUE) sbb esp, dword ptr [esi + VALUE]
#define SBB_ESP_FROM_PTR_EBP_(VALUE) sbb esp, dword ptr [ebp + VALUE]
#define SBB_ESP_FROM_PTR_ESP_(VALUE) sbb esp, dword ptr [esp + VALUE]

#define SBB_R8D_FROM_PTR_RAX_(VALUE) sbb r8d, dword ptr [rax + VALUE]
#define SBB_R8D_FROM_PTR_RBX_(VALUE) sbb r8d, dword ptr [rbx + VALUE]
#define SBB_R8D_FROM_PTR_RCX_(VALUE) sbb r8d, dword ptr [rcx + VALUE]
#define SBB_R8D_FROM_PTR_RDX_(VALUE) sbb r8d, dword ptr [rdx + VALUE]
#define SBB_R8D_FROM_PTR_RDI_(VALUE) sbb r8d, dword ptr [rdi + VALUE]
#define SBB_R8D_FROM_PTR_RSI_(VALUE) sbb r8d, dword ptr [rsi + VALUE]
#define SBB_R8D_FROM_PTR_RBP_(VALUE) sbb r8d, dword ptr [rbp + VALUE]
#define SBB_R8D_FROM_PTR_RSP_(VALUE) sbb r8d, dword ptr [rsp + VALUE]
#define SBB_R8D_FROM_PTR_R8_(VALUE) sbb r8d, dword ptr [r8 + VALUE]
#define SBB_R8D_FROM_PTR_R9_(VALUE) sbb r8d, dword ptr [r9 + VALUE]
#define SBB_R8D_FROM_PTR_R10_(VALUE) sbb r8d, dword ptr [r10 + VALUE]
#define SBB_R8D_FROM_PTR_R11_(VALUE) sbb r8d, dword ptr [r11 + VALUE]
#define SBB_R8D_FROM_PTR_R12_(VALUE) sbb r8d, dword ptr [r12 + VALUE]
#define SBB_R8D_FROM_PTR_R13_(VALUE) sbb r8d, dword ptr [r13 + VALUE]
#define SBB_R8D_FROM_PTR_R14_(VALUE) sbb r8d, dword ptr [r14 + VALUE]
#define SBB_R8D_FROM_PTR_R15_(VALUE) sbb r8d, dword ptr [r15 + VALUE]
#define SBB_R8D_FROM_PTR_EAX_(VALUE) sbb r8d, dword ptr [eax + VALUE]
#define SBB_R8D_FROM_PTR_EBX_(VALUE) sbb r8d, dword ptr [ebx + VALUE]
#define SBB_R8D_FROM_PTR_ECX_(VALUE) sbb r8d, dword ptr [ecx + VALUE]
#define SBB_R8D_FROM_PTR_EDX_(VALUE) sbb r8d, dword ptr [edx + VALUE]
#define SBB_R8D_FROM_PTR_EDI_(VALUE) sbb r8d, dword ptr [edi + VALUE]
#define SBB_R8D_FROM_PTR_ESI_(VALUE) sbb r8d, dword ptr [esi + VALUE]
#define SBB_R8D_FROM_PTR_EBP_(VALUE) sbb r8d, dword ptr [ebp + VALUE]
#define SBB_R8D_FROM_PTR_ESP_(VALUE) sbb r8d, dword ptr [esp + VALUE]

#define SBB_R9D_FROM_PTR_RAX_(VALUE) sbb r9d, dword ptr [rax + VALUE]
#define SBB_R9D_FROM_PTR_RBX_(VALUE) sbb r9d, dword ptr [rbx + VALUE]
#define SBB_R9D_FROM_PTR_RCX_(VALUE) sbb r9d, dword ptr [rcx + VALUE]
#define SBB_R9D_FROM_PTR_RDX_(VALUE) sbb r9d, dword ptr [rdx + VALUE]
#define SBB_R9D_FROM_PTR_RDI_(VALUE) sbb r9d, dword ptr [rdi + VALUE]
#define SBB_R9D_FROM_PTR_RSI_(VALUE) sbb r9d, dword ptr [rsi + VALUE]
#define SBB_R9D_FROM_PTR_RBP_(VALUE) sbb r9d, dword ptr [rbp + VALUE]
#define SBB_R9D_FROM_PTR_RSP_(VALUE) sbb r9d, dword ptr [rsp + VALUE]
#define SBB_R9D_FROM_PTR_R8_(VALUE) sbb r9d, dword ptr [r8 + VALUE]
#define SBB_R9D_FROM_PTR_R9_(VALUE) sbb r9d, dword ptr [r9 + VALUE]
#define SBB_R9D_FROM_PTR_R10_(VALUE) sbb r9d, dword ptr [r10 + VALUE]
#define SBB_R9D_FROM_PTR_R11_(VALUE) sbb r9d, dword ptr [r11 + VALUE]
#define SBB_R9D_FROM_PTR_R12_(VALUE) sbb r9d, dword ptr [r12 + VALUE]
#define SBB_R9D_FROM_PTR_R13_(VALUE) sbb r9d, dword ptr [r13 + VALUE]
#define SBB_R9D_FROM_PTR_R14_(VALUE) sbb r9d, dword ptr [r14 + VALUE]
#define SBB_R9D_FROM_PTR_R15_(VALUE) sbb r9d, dword ptr [r15 + VALUE]
#define SBB_R9D_FROM_PTR_EAX_(VALUE) sbb r9d, dword ptr [eax + VALUE]
#define SBB_R9D_FROM_PTR_EBX_(VALUE) sbb r9d, dword ptr [ebx + VALUE]
#define SBB_R9D_FROM_PTR_ECX_(VALUE) sbb r9d, dword ptr [ecx + VALUE]
#define SBB_R9D_FROM_PTR_EDX_(VALUE) sbb r9d, dword ptr [edx + VALUE]
#define SBB_R9D_FROM_PTR_EDI_(VALUE) sbb r9d, dword ptr [edi + VALUE]
#define SBB_R9D_FROM_PTR_ESI_(VALUE) sbb r9d, dword ptr [esi + VALUE]
#define SBB_R9D_FROM_PTR_EBP_(VALUE) sbb r9d, dword ptr [ebp + VALUE]
#define SBB_R9D_FROM_PTR_ESP_(VALUE) sbb r9d, dword ptr [esp + VALUE]

#define SBB_R10D_FROM_PTR_RAX_(VALUE) sbb r10d, dword ptr [rax + VALUE]
#define SBB_R10D_FROM_PTR_RBX_(VALUE) sbb r10d, dword ptr [rbx + VALUE]
#define SBB_R10D_FROM_PTR_RCX_(VALUE) sbb r10d, dword ptr [rcx + VALUE]
#define SBB_R10D_FROM_PTR_RDX_(VALUE) sbb r10d, dword ptr [rdx + VALUE]
#define SBB_R10D_FROM_PTR_RDI_(VALUE) sbb r10d, dword ptr [rdi + VALUE]
#define SBB_R10D_FROM_PTR_RSI_(VALUE) sbb r10d, dword ptr [rsi + VALUE]
#define SBB_R10D_FROM_PTR_RBP_(VALUE) sbb r10d, dword ptr [rbp + VALUE]
#define SBB_R10D_FROM_PTR_RSP_(VALUE) sbb r10d, dword ptr [rsp + VALUE]
#define SBB_R10D_FROM_PTR_R8_(VALUE) sbb r10d, dword ptr [r8 + VALUE]
#define SBB_R10D_FROM_PTR_R9_(VALUE) sbb r10d, dword ptr [r9 + VALUE]
#define SBB_R10D_FROM_PTR_R10_(VALUE) sbb r10d, dword ptr [r10 + VALUE]
#define SBB_R10D_FROM_PTR_R11_(VALUE) sbb r10d, dword ptr [r11 + VALUE]
#define SBB_R10D_FROM_PTR_R12_(VALUE) sbb r10d, dword ptr [r12 + VALUE]
#define SBB_R10D_FROM_PTR_R13_(VALUE) sbb r10d, dword ptr [r13 + VALUE]
#define SBB_R10D_FROM_PTR_R14_(VALUE) sbb r10d, dword ptr [r14 + VALUE]
#define SBB_R10D_FROM_PTR_R15_(VALUE) sbb r10d, dword ptr [r15 + VALUE]
#define SBB_R10D_FROM_PTR_EAX_(VALUE) sbb r10d, dword ptr [eax + VALUE]
#define SBB_R10D_FROM_PTR_EBX_(VALUE) sbb r10d, dword ptr [ebx + VALUE]
#define SBB_R10D_FROM_PTR_ECX_(VALUE) sbb r10d, dword ptr [ecx + VALUE]
#define SBB_R10D_FROM_PTR_EDX_(VALUE) sbb r10d, dword ptr [edx + VALUE]
#define SBB_R10D_FROM_PTR_EDI_(VALUE) sbb r10d, dword ptr [edi + VALUE]
#define SBB_R10D_FROM_PTR_ESI_(VALUE) sbb r10d, dword ptr [esi + VALUE]
#define SBB_R10D_FROM_PTR_EBP_(VALUE) sbb r10d, dword ptr [ebp + VALUE]
#define SBB_R10D_FROM_PTR_ESP_(VALUE) sbb r10d, dword ptr [esp + VALUE]

#define SBB_R11D_FROM_PTR_RAX_(VALUE) sbb r11d, dword ptr [rax + VALUE]
#define SBB_R11D_FROM_PTR_RBX_(VALUE) sbb r11d, dword ptr [rbx + VALUE]
#define SBB_R11D_FROM_PTR_RCX_(VALUE) sbb r11d, dword ptr [rcx + VALUE]
#define SBB_R11D_FROM_PTR_RDX_(VALUE) sbb r11d, dword ptr [rdx + VALUE]
#define SBB_R11D_FROM_PTR_RDI_(VALUE) sbb r11d, dword ptr [rdi + VALUE]
#define SBB_R11D_FROM_PTR_RSI_(VALUE) sbb r11d, dword ptr [rsi + VALUE]
#define SBB_R11D_FROM_PTR_RBP_(VALUE) sbb r11d, dword ptr [rbp + VALUE]
#define SBB_R11D_FROM_PTR_RSP_(VALUE) sbb r11d, dword ptr [rsp + VALUE]
#define SBB_R11D_FROM_PTR_R8_(VALUE) sbb r11d, dword ptr [r8 + VALUE]
#define SBB_R11D_FROM_PTR_R9_(VALUE) sbb r11d, dword ptr [r9 + VALUE]
#define SBB_R11D_FROM_PTR_R10_(VALUE) sbb r11d, dword ptr [r10 + VALUE]
#define SBB_R11D_FROM_PTR_R11_(VALUE) sbb r11d, dword ptr [r11 + VALUE]
#define SBB_R11D_FROM_PTR_R12_(VALUE) sbb r11d, dword ptr [r12 + VALUE]
#define SBB_R11D_FROM_PTR_R13_(VALUE) sbb r11d, dword ptr [r13 + VALUE]
#define SBB_R11D_FROM_PTR_R14_(VALUE) sbb r11d, dword ptr [r14 + VALUE]
#define SBB_R11D_FROM_PTR_R15_(VALUE) sbb r11d, dword ptr [r15 + VALUE]
#define SBB_R11D_FROM_PTR_EAX_(VALUE) sbb r11d, dword ptr [eax + VALUE]
#define SBB_R11D_FROM_PTR_EBX_(VALUE) sbb r11d, dword ptr [ebx + VALUE]
#define SBB_R11D_FROM_PTR_ECX_(VALUE) sbb r11d, dword ptr [ecx + VALUE]
#define SBB_R11D_FROM_PTR_EDX_(VALUE) sbb r11d, dword ptr [edx + VALUE]
#define SBB_R11D_FROM_PTR_EDI_(VALUE) sbb r11d, dword ptr [edi + VALUE]
#define SBB_R11D_FROM_PTR_ESI_(VALUE) sbb r11d, dword ptr [esi + VALUE]
#define SBB_R11D_FROM_PTR_EBP_(VALUE) sbb r11d, dword ptr [ebp + VALUE]
#define SBB_R11D_FROM_PTR_ESP_(VALUE) sbb r11d, dword ptr [esp + VALUE]

#define SBB_R12D_FROM_PTR_RAX_(VALUE) sbb r12d, dword ptr [rax + VALUE]
#define SBB_R12D_FROM_PTR_RBX_(VALUE) sbb r12d, dword ptr [rbx + VALUE]
#define SBB_R12D_FROM_PTR_RCX_(VALUE) sbb r12d, dword ptr [rcx + VALUE]
#define SBB_R12D_FROM_PTR_RDX_(VALUE) sbb r12d, dword ptr [rdx + VALUE]
#define SBB_R12D_FROM_PTR_RDI_(VALUE) sbb r12d, dword ptr [rdi + VALUE]
#define SBB_R12D_FROM_PTR_RSI_(VALUE) sbb r12d, dword ptr [rsi + VALUE]
#define SBB_R12D_FROM_PTR_RBP_(VALUE) sbb r12d, dword ptr [rbp + VALUE]
#define SBB_R12D_FROM_PTR_RSP_(VALUE) sbb r12d, dword ptr [rsp + VALUE]
#define SBB_R12D_FROM_PTR_R8_(VALUE) sbb r12d, dword ptr [r8 + VALUE]
#define SBB_R12D_FROM_PTR_R9_(VALUE) sbb r12d, dword ptr [r9 + VALUE]
#define SBB_R12D_FROM_PTR_R10_(VALUE) sbb r12d, dword ptr [r10 + VALUE]
#define SBB_R12D_FROM_PTR_R11_(VALUE) sbb r12d, dword ptr [r11 + VALUE]
#define SBB_R12D_FROM_PTR_R12_(VALUE) sbb r12d, dword ptr [r12 + VALUE]
#define SBB_R12D_FROM_PTR_R13_(VALUE) sbb r12d, dword ptr [r13 + VALUE]
#define SBB_R12D_FROM_PTR_R14_(VALUE) sbb r12d, dword ptr [r14 + VALUE]
#define SBB_R12D_FROM_PTR_R15_(VALUE) sbb r12d, dword ptr [r15 + VALUE]
#define SBB_R12D_FROM_PTR_EAX_(VALUE) sbb r12d, dword ptr [eax + VALUE]
#define SBB_R12D_FROM_PTR_EBX_(VALUE) sbb r12d, dword ptr [ebx + VALUE]
#define SBB_R12D_FROM_PTR_ECX_(VALUE) sbb r12d, dword ptr [ecx + VALUE]
#define SBB_R12D_FROM_PTR_EDX_(VALUE) sbb r12d, dword ptr [edx + VALUE]
#define SBB_R12D_FROM_PTR_EDI_(VALUE) sbb r12d, dword ptr [edi + VALUE]
#define SBB_R12D_FROM_PTR_ESI_(VALUE) sbb r12d, dword ptr [esi + VALUE]
#define SBB_R12D_FROM_PTR_EBP_(VALUE) sbb r12d, dword ptr [ebp + VALUE]
#define SBB_R12D_FROM_PTR_ESP_(VALUE) sbb r12d, dword ptr [esp + VALUE]

#define SBB_R13D_FROM_PTR_RAX_(VALUE) sbb r13d, dword ptr [rax + VALUE]
#define SBB_R13D_FROM_PTR_RBX_(VALUE) sbb r13d, dword ptr [rbx + VALUE]
#define SBB_R13D_FROM_PTR_RCX_(VALUE) sbb r13d, dword ptr [rcx + VALUE]
#define SBB_R13D_FROM_PTR_RDX_(VALUE) sbb r13d, dword ptr [rdx + VALUE]
#define SBB_R13D_FROM_PTR_RDI_(VALUE) sbb r13d, dword ptr [rdi + VALUE]
#define SBB_R13D_FROM_PTR_RSI_(VALUE) sbb r13d, dword ptr [rsi + VALUE]
#define SBB_R13D_FROM_PTR_RBP_(VALUE) sbb r13d, dword ptr [rbp + VALUE]
#define SBB_R13D_FROM_PTR_RSP_(VALUE) sbb r13d, dword ptr [rsp + VALUE]
#define SBB_R13D_FROM_PTR_R8_(VALUE) sbb r13d, dword ptr [r8 + VALUE]
#define SBB_R13D_FROM_PTR_R9_(VALUE) sbb r13d, dword ptr [r9 + VALUE]
#define SBB_R13D_FROM_PTR_R10_(VALUE) sbb r13d, dword ptr [r10 + VALUE]
#define SBB_R13D_FROM_PTR_R11_(VALUE) sbb r13d, dword ptr [r11 + VALUE]
#define SBB_R13D_FROM_PTR_R12_(VALUE) sbb r13d, dword ptr [r12 + VALUE]
#define SBB_R13D_FROM_PTR_R13_(VALUE) sbb r13d, dword ptr [r13 + VALUE]
#define SBB_R13D_FROM_PTR_R14_(VALUE) sbb r13d, dword ptr [r14 + VALUE]
#define SBB_R13D_FROM_PTR_R15_(VALUE) sbb r13d, dword ptr [r15 + VALUE]
#define SBB_R13D_FROM_PTR_EAX_(VALUE) sbb r13d, dword ptr [eax + VALUE]
#define SBB_R13D_FROM_PTR_EBX_(VALUE) sbb r13d, dword ptr [ebx + VALUE]
#define SBB_R13D_FROM_PTR_ECX_(VALUE) sbb r13d, dword ptr [ecx + VALUE]
#define SBB_R13D_FROM_PTR_EDX_(VALUE) sbb r13d, dword ptr [edx + VALUE]
#define SBB_R13D_FROM_PTR_EDI_(VALUE) sbb r13d, dword ptr [edi + VALUE]
#define SBB_R13D_FROM_PTR_ESI_(VALUE) sbb r13d, dword ptr [esi + VALUE]
#define SBB_R13D_FROM_PTR_EBP_(VALUE) sbb r13d, dword ptr [ebp + VALUE]
#define SBB_R13D_FROM_PTR_ESP_(VALUE) sbb r13d, dword ptr [esp + VALUE]

#define SBB_R14D_FROM_PTR_RAX_(VALUE) sbb r14d, dword ptr [rax + VALUE]
#define SBB_R14D_FROM_PTR_RBX_(VALUE) sbb r14d, dword ptr [rbx + VALUE]
#define SBB_R14D_FROM_PTR_RCX_(VALUE) sbb r14d, dword ptr [rcx + VALUE]
#define SBB_R14D_FROM_PTR_RDX_(VALUE) sbb r14d, dword ptr [rdx + VALUE]
#define SBB_R14D_FROM_PTR_RDI_(VALUE) sbb r14d, dword ptr [rdi + VALUE]
#define SBB_R14D_FROM_PTR_RSI_(VALUE) sbb r14d, dword ptr [rsi + VALUE]
#define SBB_R14D_FROM_PTR_RBP_(VALUE) sbb r14d, dword ptr [rbp + VALUE]
#define SBB_R14D_FROM_PTR_RSP_(VALUE) sbb r14d, dword ptr [rsp + VALUE]
#define SBB_R14D_FROM_PTR_R8_(VALUE) sbb r14d, dword ptr [r8 + VALUE]
#define SBB_R14D_FROM_PTR_R9_(VALUE) sbb r14d, dword ptr [r9 + VALUE]
#define SBB_R14D_FROM_PTR_R10_(VALUE) sbb r14d, dword ptr [r10 + VALUE]
#define SBB_R14D_FROM_PTR_R11_(VALUE) sbb r14d, dword ptr [r11 + VALUE]
#define SBB_R14D_FROM_PTR_R12_(VALUE) sbb r14d, dword ptr [r12 + VALUE]
#define SBB_R14D_FROM_PTR_R13_(VALUE) sbb r14d, dword ptr [r13 + VALUE]
#define SBB_R14D_FROM_PTR_R14_(VALUE) sbb r14d, dword ptr [r14 + VALUE]
#define SBB_R14D_FROM_PTR_R15_(VALUE) sbb r14d, dword ptr [r15 + VALUE]
#define SBB_R14D_FROM_PTR_EAX_(VALUE) sbb r14d, dword ptr [eax + VALUE]
#define SBB_R14D_FROM_PTR_EBX_(VALUE) sbb r14d, dword ptr [ebx + VALUE]
#define SBB_R14D_FROM_PTR_ECX_(VALUE) sbb r14d, dword ptr [ecx + VALUE]
#define SBB_R14D_FROM_PTR_EDX_(VALUE) sbb r14d, dword ptr [edx + VALUE]
#define SBB_R14D_FROM_PTR_EDI_(VALUE) sbb r14d, dword ptr [edi + VALUE]
#define SBB_R14D_FROM_PTR_ESI_(VALUE) sbb r14d, dword ptr [esi + VALUE]
#define SBB_R14D_FROM_PTR_EBP_(VALUE) sbb r14d, dword ptr [ebp + VALUE]
#define SBB_R14D_FROM_PTR_ESP_(VALUE) sbb r14d, dword ptr [esp + VALUE]

#define SBB_R15D_FROM_PTR_RAX_(VALUE) sbb r15d, dword ptr [rax + VALUE]
#define SBB_R15D_FROM_PTR_RBX_(VALUE) sbb r15d, dword ptr [rbx + VALUE]
#define SBB_R15D_FROM_PTR_RCX_(VALUE) sbb r15d, dword ptr [rcx + VALUE]
#define SBB_R15D_FROM_PTR_RDX_(VALUE) sbb r15d, dword ptr [rdx + VALUE]
#define SBB_R15D_FROM_PTR_RDI_(VALUE) sbb r15d, dword ptr [rdi + VALUE]
#define SBB_R15D_FROM_PTR_RSI_(VALUE) sbb r15d, dword ptr [rsi + VALUE]
#define SBB_R15D_FROM_PTR_RBP_(VALUE) sbb r15d, dword ptr [rbp + VALUE]
#define SBB_R15D_FROM_PTR_RSP_(VALUE) sbb r15d, dword ptr [rsp + VALUE]
#define SBB_R15D_FROM_PTR_R8_(VALUE) sbb r15d, dword ptr [r8 + VALUE]
#define SBB_R15D_FROM_PTR_R9_(VALUE) sbb r15d, dword ptr [r9 + VALUE]
#define SBB_R15D_FROM_PTR_R10_(VALUE) sbb r15d, dword ptr [r10 + VALUE]
#define SBB_R15D_FROM_PTR_R11_(VALUE) sbb r15d, dword ptr [r11 + VALUE]
#define SBB_R15D_FROM_PTR_R12_(VALUE) sbb r15d, dword ptr [r12 + VALUE]
#define SBB_R15D_FROM_PTR_R13_(VALUE) sbb r15d, dword ptr [r13 + VALUE]
#define SBB_R15D_FROM_PTR_R14_(VALUE) sbb r15d, dword ptr [r14 + VALUE]
#define SBB_R15D_FROM_PTR_R15_(VALUE) sbb r15d, dword ptr [r15 + VALUE]
#define SBB_R15D_FROM_PTR_EAX_(VALUE) sbb r15d, dword ptr [eax + VALUE]
#define SBB_R15D_FROM_PTR_EBX_(VALUE) sbb r15d, dword ptr [ebx + VALUE]
#define SBB_R15D_FROM_PTR_ECX_(VALUE) sbb r15d, dword ptr [ecx + VALUE]
#define SBB_R15D_FROM_PTR_EDX_(VALUE) sbb r15d, dword ptr [edx + VALUE]
#define SBB_R15D_FROM_PTR_EDI_(VALUE) sbb r15d, dword ptr [edi + VALUE]
#define SBB_R15D_FROM_PTR_ESI_(VALUE) sbb r15d, dword ptr [esi + VALUE]
#define SBB_R15D_FROM_PTR_EBP_(VALUE) sbb r15d, dword ptr [ebp + VALUE]
#define SBB_R15D_FROM_PTR_ESP_(VALUE) sbb r15d, dword ptr [esp + VALUE]

#define SBB_EAX_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], eax
#define SBB_EAX_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], eax
#define SBB_EAX_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], eax
#define SBB_EAX_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], eax
#define SBB_EAX_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], eax
#define SBB_EAX_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], eax
#define SBB_EAX_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], eax
#define SBB_EAX_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], eax
#define SBB_EAX_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], eax
#define SBB_EAX_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], eax
#define SBB_EAX_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], eax
#define SBB_EAX_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], eax
#define SBB_EAX_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], eax
#define SBB_EAX_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], eax
#define SBB_EAX_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], eax
#define SBB_EAX_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], eax
#define SBB_EAX_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], eax
#define SBB_EAX_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], eax
#define SBB_EAX_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], eax
#define SBB_EAX_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], eax
#define SBB_EAX_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], eax
#define SBB_EAX_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], eax
#define SBB_EAX_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], eax
#define SBB_EAX_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], eax

#define SBB_EBX_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], ebx
#define SBB_EBX_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], ebx
#define SBB_EBX_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], ebx
#define SBB_EBX_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], ebx
#define SBB_EBX_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], ebx
#define SBB_EBX_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], ebx
#define SBB_EBX_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], ebx
#define SBB_EBX_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], ebx
#define SBB_EBX_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], ebx
#define SBB_EBX_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], ebx
#define SBB_EBX_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], ebx
#define SBB_EBX_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], ebx
#define SBB_EBX_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], ebx
#define SBB_EBX_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], ebx
#define SBB_EBX_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], ebx
#define SBB_EBX_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], ebx
#define SBB_EBX_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], ebx
#define SBB_EBX_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], ebx
#define SBB_EBX_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], ebx
#define SBB_EBX_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], ebx
#define SBB_EBX_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], ebx
#define SBB_EBX_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], ebx
#define SBB_EBX_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], ebx
#define SBB_EBX_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], ebx

#define SBB_ECX_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], ecx
#define SBB_ECX_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], ecx
#define SBB_ECX_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], ecx
#define SBB_ECX_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], ecx
#define SBB_ECX_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], ecx
#define SBB_ECX_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], ecx
#define SBB_ECX_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], ecx
#define SBB_ECX_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], ecx
#define SBB_ECX_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], ecx
#define SBB_ECX_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], ecx
#define SBB_ECX_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], ecx
#define SBB_ECX_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], ecx
#define SBB_ECX_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], ecx
#define SBB_ECX_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], ecx
#define SBB_ECX_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], ecx
#define SBB_ECX_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], ecx
#define SBB_ECX_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], ecx
#define SBB_ECX_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], ecx
#define SBB_ECX_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], ecx
#define SBB_ECX_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], ecx
#define SBB_ECX_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], ecx
#define SBB_ECX_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], ecx
#define SBB_ECX_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], ecx
#define SBB_ECX_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], ecx

#define SBB_EDX_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], edx
#define SBB_EDX_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], edx
#define SBB_EDX_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], edx
#define SBB_EDX_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], edx
#define SBB_EDX_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], edx
#define SBB_EDX_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], edx
#define SBB_EDX_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], edx
#define SBB_EDX_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], edx
#define SBB_EDX_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], edx
#define SBB_EDX_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], edx
#define SBB_EDX_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], edx
#define SBB_EDX_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], edx
#define SBB_EDX_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], edx
#define SBB_EDX_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], edx
#define SBB_EDX_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], edx
#define SBB_EDX_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], edx
#define SBB_EDX_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], edx
#define SBB_EDX_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], edx
#define SBB_EDX_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], edx
#define SBB_EDX_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], edx
#define SBB_EDX_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], edx
#define SBB_EDX_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], edx
#define SBB_EDX_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], edx
#define SBB_EDX_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], edx

#define SBB_EDI_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], edi
#define SBB_EDI_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], edi
#define SBB_EDI_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], edi
#define SBB_EDI_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], edi
#define SBB_EDI_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], edi
#define SBB_EDI_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], edi
#define SBB_EDI_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], edi
#define SBB_EDI_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], edi
#define SBB_EDI_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], edi
#define SBB_EDI_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], edi
#define SBB_EDI_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], edi
#define SBB_EDI_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], edi
#define SBB_EDI_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], edi
#define SBB_EDI_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], edi
#define SBB_EDI_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], edi
#define SBB_EDI_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], edi
#define SBB_EDI_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], edi
#define SBB_EDI_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], edi
#define SBB_EDI_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], edi
#define SBB_EDI_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], edi
#define SBB_EDI_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], edi
#define SBB_EDI_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], edi
#define SBB_EDI_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], edi
#define SBB_EDI_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], edi

#define SBB_ESI_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], esi
#define SBB_ESI_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], esi
#define SBB_ESI_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], esi
#define SBB_ESI_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], esi
#define SBB_ESI_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], esi
#define SBB_ESI_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], esi
#define SBB_ESI_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], esi
#define SBB_ESI_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], esi
#define SBB_ESI_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], esi
#define SBB_ESI_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], esi
#define SBB_ESI_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], esi
#define SBB_ESI_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], esi
#define SBB_ESI_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], esi
#define SBB_ESI_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], esi
#define SBB_ESI_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], esi
#define SBB_ESI_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], esi
#define SBB_ESI_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], esi
#define SBB_ESI_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], esi
#define SBB_ESI_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], esi
#define SBB_ESI_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], esi
#define SBB_ESI_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], esi
#define SBB_ESI_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], esi
#define SBB_ESI_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], esi
#define SBB_ESI_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], esi

#define SBB_EBP_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], ebp
#define SBB_EBP_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], ebp
#define SBB_EBP_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], ebp
#define SBB_EBP_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], ebp
#define SBB_EBP_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], ebp
#define SBB_EBP_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], ebp
#define SBB_EBP_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], ebp
#define SBB_EBP_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], ebp
#define SBB_EBP_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], ebp
#define SBB_EBP_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], ebp
#define SBB_EBP_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], ebp
#define SBB_EBP_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], ebp
#define SBB_EBP_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], ebp
#define SBB_EBP_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], ebp
#define SBB_EBP_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], ebp
#define SBB_EBP_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], ebp
#define SBB_EBP_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], ebp
#define SBB_EBP_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], ebp
#define SBB_EBP_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], ebp
#define SBB_EBP_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], ebp
#define SBB_EBP_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], ebp
#define SBB_EBP_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], ebp
#define SBB_EBP_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], ebp
#define SBB_EBP_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], ebp

#define SBB_ESP_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], esp
#define SBB_ESP_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], esp
#define SBB_ESP_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], esp
#define SBB_ESP_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], esp
#define SBB_ESP_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], esp
#define SBB_ESP_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], esp
#define SBB_ESP_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], esp
#define SBB_ESP_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], esp
#define SBB_ESP_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], esp
#define SBB_ESP_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], esp
#define SBB_ESP_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], esp
#define SBB_ESP_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], esp
#define SBB_ESP_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], esp
#define SBB_ESP_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], esp
#define SBB_ESP_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], esp
#define SBB_ESP_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], esp
#define SBB_ESP_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], esp
#define SBB_ESP_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], esp
#define SBB_ESP_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], esp
#define SBB_ESP_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], esp
#define SBB_ESP_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], esp
#define SBB_ESP_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], esp
#define SBB_ESP_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], esp
#define SBB_ESP_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], esp

#define SBB_R8D_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], r8d
#define SBB_R8D_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], r8d
#define SBB_R8D_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], r8d
#define SBB_R8D_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], r8d
#define SBB_R8D_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], r8d
#define SBB_R8D_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], r8d
#define SBB_R8D_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], r8d
#define SBB_R8D_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], r8d
#define SBB_R8D_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], r8d
#define SBB_R8D_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], r8d
#define SBB_R8D_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], r8d
#define SBB_R8D_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], r8d
#define SBB_R8D_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], r8d
#define SBB_R8D_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], r8d
#define SBB_R8D_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], r8d
#define SBB_R8D_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], r8d
#define SBB_R8D_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], r8d
#define SBB_R8D_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], r8d
#define SBB_R8D_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], r8d
#define SBB_R8D_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], r8d
#define SBB_R8D_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], r8d
#define SBB_R8D_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], r8d
#define SBB_R8D_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], r8d
#define SBB_R8D_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], r8d

#define SBB_R9D_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], r9d
#define SBB_R9D_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], r9d
#define SBB_R9D_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], r9d
#define SBB_R9D_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], r9d
#define SBB_R9D_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], r9d
#define SBB_R9D_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], r9d
#define SBB_R9D_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], r9d
#define SBB_R9D_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], r9d
#define SBB_R9D_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], r9d
#define SBB_R9D_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], r9d
#define SBB_R9D_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], r9d
#define SBB_R9D_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], r9d
#define SBB_R9D_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], r9d
#define SBB_R9D_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], r9d
#define SBB_R9D_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], r9d
#define SBB_R9D_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], r9d
#define SBB_R9D_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], r9d
#define SBB_R9D_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], r9d
#define SBB_R9D_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], r9d
#define SBB_R9D_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], r9d
#define SBB_R9D_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], r9d
#define SBB_R9D_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], r9d
#define SBB_R9D_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], r9d
#define SBB_R9D_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], r9d

#define SBB_R10D_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], r10d
#define SBB_R10D_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], r10d
#define SBB_R10D_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], r10d
#define SBB_R10D_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], r10d
#define SBB_R10D_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], r10d
#define SBB_R10D_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], r10d
#define SBB_R10D_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], r10d
#define SBB_R10D_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], r10d
#define SBB_R10D_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], r10d
#define SBB_R10D_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], r10d
#define SBB_R10D_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], r10d
#define SBB_R10D_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], r10d
#define SBB_R10D_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], r10d
#define SBB_R10D_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], r10d
#define SBB_R10D_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], r10d
#define SBB_R10D_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], r10d
#define SBB_R10D_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], r10d
#define SBB_R10D_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], r10d
#define SBB_R10D_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], r10d
#define SBB_R10D_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], r10d
#define SBB_R10D_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], r10d
#define SBB_R10D_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], r10d
#define SBB_R10D_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], r10d
#define SBB_R10D_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], r10d

#define SBB_R11D_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], r11d
#define SBB_R11D_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], r11d
#define SBB_R11D_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], r11d
#define SBB_R11D_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], r11d
#define SBB_R11D_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], r11d
#define SBB_R11D_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], r11d
#define SBB_R11D_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], r11d
#define SBB_R11D_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], r11d
#define SBB_R11D_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], r11d
#define SBB_R11D_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], r11d
#define SBB_R11D_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], r11d
#define SBB_R11D_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], r11d
#define SBB_R11D_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], r11d
#define SBB_R11D_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], r11d
#define SBB_R11D_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], r11d
#define SBB_R11D_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], r11d
#define SBB_R11D_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], r11d
#define SBB_R11D_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], r11d
#define SBB_R11D_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], r11d
#define SBB_R11D_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], r11d
#define SBB_R11D_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], r11d
#define SBB_R11D_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], r11d
#define SBB_R11D_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], r11d
#define SBB_R11D_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], r11d

#define SBB_R12D_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], r12d
#define SBB_R12D_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], r12d
#define SBB_R12D_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], r12d
#define SBB_R12D_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], r12d
#define SBB_R12D_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], r12d
#define SBB_R12D_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], r12d
#define SBB_R12D_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], r12d
#define SBB_R12D_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], r12d
#define SBB_R12D_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], r12d
#define SBB_R12D_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], r12d
#define SBB_R12D_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], r12d
#define SBB_R12D_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], r12d
#define SBB_R12D_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], r12d
#define SBB_R12D_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], r12d
#define SBB_R12D_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], r12d
#define SBB_R12D_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], r12d
#define SBB_R12D_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], r12d
#define SBB_R12D_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], r12d
#define SBB_R12D_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], r12d
#define SBB_R12D_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], r12d
#define SBB_R12D_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], r12d
#define SBB_R12D_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], r12d
#define SBB_R12D_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], r12d
#define SBB_R12D_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], r12d

#define SBB_R13D_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], r13d
#define SBB_R13D_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], r13d
#define SBB_R13D_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], r13d
#define SBB_R13D_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], r13d
#define SBB_R13D_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], r13d
#define SBB_R13D_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], r13d
#define SBB_R13D_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], r13d
#define SBB_R13D_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], r13d
#define SBB_R13D_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], r13d
#define SBB_R13D_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], r13d
#define SBB_R13D_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], r13d
#define SBB_R13D_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], r13d
#define SBB_R13D_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], r13d
#define SBB_R13D_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], r13d
#define SBB_R13D_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], r13d
#define SBB_R13D_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], r13d
#define SBB_R13D_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], r13d
#define SBB_R13D_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], r13d
#define SBB_R13D_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], r13d
#define SBB_R13D_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], r13d
#define SBB_R13D_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], r13d
#define SBB_R13D_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], r13d
#define SBB_R13D_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], r13d
#define SBB_R13D_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], r13d

#define SBB_R14D_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], r14d
#define SBB_R14D_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], r14d
#define SBB_R14D_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], r14d
#define SBB_R14D_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], r14d
#define SBB_R14D_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], r14d
#define SBB_R14D_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], r14d
#define SBB_R14D_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], r14d
#define SBB_R14D_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], r14d
#define SBB_R14D_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], r14d
#define SBB_R14D_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], r14d
#define SBB_R14D_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], r14d
#define SBB_R14D_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], r14d
#define SBB_R14D_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], r14d
#define SBB_R14D_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], r14d
#define SBB_R14D_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], r14d
#define SBB_R14D_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], r14d
#define SBB_R14D_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], r14d
#define SBB_R14D_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], r14d
#define SBB_R14D_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], r14d
#define SBB_R14D_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], r14d
#define SBB_R14D_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], r14d
#define SBB_R14D_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], r14d
#define SBB_R14D_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], r14d
#define SBB_R14D_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], r14d

#define SBB_R15D_TO_PTR_RAX_(VALUE) sbb dword ptr [rax + VALUE], r15d
#define SBB_R15D_TO_PTR_RBX_(VALUE) sbb dword ptr [rbx + VALUE], r15d
#define SBB_R15D_TO_PTR_RCX_(VALUE) sbb dword ptr [rcx + VALUE], r15d
#define SBB_R15D_TO_PTR_RDX_(VALUE) sbb dword ptr [rdx + VALUE], r15d
#define SBB_R15D_TO_PTR_RDI_(VALUE) sbb dword ptr [rdi + VALUE], r15d
#define SBB_R15D_TO_PTR_RSI_(VALUE) sbb dword ptr [rsi + VALUE], r15d
#define SBB_R15D_TO_PTR_RBP_(VALUE) sbb dword ptr [rbp + VALUE], r15d
#define SBB_R15D_TO_PTR_RSP_(VALUE) sbb dword ptr [rsp + VALUE], r15d
#define SBB_R15D_TO_PTR_R8_(VALUE) sbb dword ptr [r8 + VALUE], r15d
#define SBB_R15D_TO_PTR_R9_(VALUE) sbb dword ptr [r9 + VALUE], r15d
#define SBB_R15D_TO_PTR_R10_(VALUE) sbb dword ptr [r10 + VALUE], r15d
#define SBB_R15D_TO_PTR_R11_(VALUE) sbb dword ptr [r11 + VALUE], r15d
#define SBB_R15D_TO_PTR_R12_(VALUE) sbb dword ptr [r12 + VALUE], r15d
#define SBB_R15D_TO_PTR_R13_(VALUE) sbb dword ptr [r13 + VALUE], r15d
#define SBB_R15D_TO_PTR_R14_(VALUE) sbb dword ptr [r14 + VALUE], r15d
#define SBB_R15D_TO_PTR_R15_(VALUE) sbb dword ptr [r15 + VALUE], r15d
#define SBB_R15D_TO_PTR_EAX_(VALUE) sbb dword ptr [eax + VALUE], r15d
#define SBB_R15D_TO_PTR_EBX_(VALUE) sbb dword ptr [ebx + VALUE], r15d
#define SBB_R15D_TO_PTR_ECX_(VALUE) sbb dword ptr [ecx + VALUE], r15d
#define SBB_R15D_TO_PTR_EDX_(VALUE) sbb dword ptr [edx + VALUE], r15d
#define SBB_R15D_TO_PTR_EDI_(VALUE) sbb dword ptr [edi + VALUE], r15d
#define SBB_R15D_TO_PTR_ESI_(VALUE) sbb dword ptr [esi + VALUE], r15d
#define SBB_R15D_TO_PTR_EBP_(VALUE) sbb dword ptr [ebp + VALUE], r15d
#define SBB_R15D_TO_PTR_ESP_(VALUE) sbb dword ptr [esp + VALUE], r15d
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
