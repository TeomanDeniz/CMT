#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define SUB_EAX_FROM_PTR_(VALUE) sub eax, dword ptr [VALUE]
#define SUB_EBX_FROM_PTR_(VALUE) sub ebx, dword ptr [VALUE]
#define SUB_ECX_FROM_PTR_(VALUE) sub ecx, dword ptr [VALUE]
#define SUB_EDX_FROM_PTR_(VALUE) sub edx, dword ptr [VALUE]
#define SUB_EDI_FROM_PTR_(VALUE) sub edi, dword ptr [VALUE]
#define SUB_ESI_FROM_PTR_(VALUE) sub esi, dword ptr [VALUE]
#define SUB_EBP_FROM_PTR_(VALUE) sub ebp, dword ptr [VALUE]
#define SUB_ESP_FROM_PTR_(VALUE) sub esp, dword ptr [VALUE]

#define SUB_EAX_TO_PTR_(VALUE) sub dword ptr [VALUE], eax
#define SUB_EBX_TO_PTR_(VALUE) sub dword ptr [VALUE], ebx
#define SUB_ECX_TO_PTR_(VALUE) sub dword ptr [VALUE], ecx
#define SUB_EDX_TO_PTR_(VALUE) sub dword ptr [VALUE], edx
#define SUB_EDI_TO_PTR_(VALUE) sub dword ptr [VALUE], edi
#define SUB_ESI_TO_PTR_(VALUE) sub dword ptr [VALUE], esi
#define SUB_EBP_TO_PTR_(VALUE) sub dword ptr [VALUE], ebp
#define SUB_ESP_TO_PTR_(VALUE) sub dword ptr [VALUE], esp

#define SUB_EAX_FROM_PTR_EAX sub eax, dword ptr [eax]
#define SUB_EAX_FROM_PTR_EBX sub eax, dword ptr [ebx]
#define SUB_EAX_FROM_PTR_ECX sub eax, dword ptr [ecx]
#define SUB_EAX_FROM_PTR_EDX sub eax, dword ptr [edx]
#define SUB_EAX_FROM_PTR_EDI sub eax, dword ptr [edi]
#define SUB_EAX_FROM_PTR_ESI sub eax, dword ptr [esi]
#define SUB_EAX_FROM_PTR_EBP sub eax, dword ptr [ebp]
#define SUB_EAX_FROM_PTR_ESP sub eax, dword ptr [esp]
#define SUB_EAX_FROM_PTR_BX sub eax, dword ptr [bx]
#define SUB_EAX_FROM_PTR_BP sub eax, dword ptr [bp]
#define SUB_EAX_FROM_PTR_SI sub eax, dword ptr [si]
#define SUB_EAX_FROM_PTR_DI sub eax, dword ptr [di]

#define SUB_EBX_FROM_PTR_EAX sub ebx, dword ptr [eax]
#define SUB_EBX_FROM_PTR_EBX sub ebx, dword ptr [ebx]
#define SUB_EBX_FROM_PTR_ECX sub ebx, dword ptr [ecx]
#define SUB_EBX_FROM_PTR_EDX sub ebx, dword ptr [edx]
#define SUB_EBX_FROM_PTR_EDI sub ebx, dword ptr [edi]
#define SUB_EBX_FROM_PTR_ESI sub ebx, dword ptr [esi]
#define SUB_EBX_FROM_PTR_EBP sub ebx, dword ptr [ebp]
#define SUB_EBX_FROM_PTR_ESP sub ebx, dword ptr [esp]
#define SUB_EBX_FROM_PTR_BX sub ebx, dword ptr [bx]
#define SUB_EBX_FROM_PTR_BP sub ebx, dword ptr [bp]
#define SUB_EBX_FROM_PTR_SI sub ebx, dword ptr [si]
#define SUB_EBX_FROM_PTR_DI sub ebx, dword ptr [di]

#define SUB_ECX_FROM_PTR_EAX sub ecx, dword ptr [eax]
#define SUB_ECX_FROM_PTR_EBX sub ecx, dword ptr [ebx]
#define SUB_ECX_FROM_PTR_ECX sub ecx, dword ptr [ecx]
#define SUB_ECX_FROM_PTR_EDX sub ecx, dword ptr [edx]
#define SUB_ECX_FROM_PTR_EDI sub ecx, dword ptr [edi]
#define SUB_ECX_FROM_PTR_ESI sub ecx, dword ptr [esi]
#define SUB_ECX_FROM_PTR_EBP sub ecx, dword ptr [ebp]
#define SUB_ECX_FROM_PTR_ESP sub ecx, dword ptr [esp]
#define SUB_ECX_FROM_PTR_BX sub ecx, dword ptr [bx]
#define SUB_ECX_FROM_PTR_BP sub ecx, dword ptr [bp]
#define SUB_ECX_FROM_PTR_SI sub ecx, dword ptr [si]
#define SUB_ECX_FROM_PTR_DI sub ecx, dword ptr [di]

#define SUB_EDX_FROM_PTR_EAX sub edx, dword ptr [eax]
#define SUB_EDX_FROM_PTR_EBX sub edx, dword ptr [ebx]
#define SUB_EDX_FROM_PTR_ECX sub edx, dword ptr [ecx]
#define SUB_EDX_FROM_PTR_EDX sub edx, dword ptr [edx]
#define SUB_EDX_FROM_PTR_EDI sub edx, dword ptr [edi]
#define SUB_EDX_FROM_PTR_ESI sub edx, dword ptr [esi]
#define SUB_EDX_FROM_PTR_EBP sub edx, dword ptr [ebp]
#define SUB_EDX_FROM_PTR_ESP sub edx, dword ptr [esp]
#define SUB_EDX_FROM_PTR_BX sub edx, dword ptr [bx]
#define SUB_EDX_FROM_PTR_BP sub edx, dword ptr [bp]
#define SUB_EDX_FROM_PTR_SI sub edx, dword ptr [si]
#define SUB_EDX_FROM_PTR_DI sub edx, dword ptr [di]

#define SUB_EDI_FROM_PTR_EAX sub edi, dword ptr [eax]
#define SUB_EDI_FROM_PTR_EBX sub edi, dword ptr [ebx]
#define SUB_EDI_FROM_PTR_ECX sub edi, dword ptr [ecx]
#define SUB_EDI_FROM_PTR_EDX sub edi, dword ptr [edx]
#define SUB_EDI_FROM_PTR_EDI sub edi, dword ptr [edi]
#define SUB_EDI_FROM_PTR_ESI sub edi, dword ptr [esi]
#define SUB_EDI_FROM_PTR_EBP sub edi, dword ptr [ebp]
#define SUB_EDI_FROM_PTR_ESP sub edi, dword ptr [esp]
#define SUB_EDI_FROM_PTR_BX sub edi, dword ptr [bx]
#define SUB_EDI_FROM_PTR_BP sub edi, dword ptr [bp]
#define SUB_EDI_FROM_PTR_SI sub edi, dword ptr [si]
#define SUB_EDI_FROM_PTR_DI sub edi, dword ptr [di]

#define SUB_ESI_FROM_PTR_EAX sub esi, dword ptr [eax]
#define SUB_ESI_FROM_PTR_EBX sub esi, dword ptr [ebx]
#define SUB_ESI_FROM_PTR_ECX sub esi, dword ptr [ecx]
#define SUB_ESI_FROM_PTR_EDX sub esi, dword ptr [edx]
#define SUB_ESI_FROM_PTR_EDI sub esi, dword ptr [edi]
#define SUB_ESI_FROM_PTR_ESI sub esi, dword ptr [esi]
#define SUB_ESI_FROM_PTR_EBP sub esi, dword ptr [ebp]
#define SUB_ESI_FROM_PTR_ESP sub esi, dword ptr [esp]
#define SUB_ESI_FROM_PTR_BX sub esi, dword ptr [bx]
#define SUB_ESI_FROM_PTR_BP sub esi, dword ptr [bp]
#define SUB_ESI_FROM_PTR_SI sub esi, dword ptr [si]
#define SUB_ESI_FROM_PTR_DI sub esi, dword ptr [di]

#define SUB_EBP_FROM_PTR_EAX sub ebp, dword ptr [eax]
#define SUB_EBP_FROM_PTR_EBX sub ebp, dword ptr [ebx]
#define SUB_EBP_FROM_PTR_ECX sub ebp, dword ptr [ecx]
#define SUB_EBP_FROM_PTR_EDX sub ebp, dword ptr [edx]
#define SUB_EBP_FROM_PTR_EDI sub ebp, dword ptr [edi]
#define SUB_EBP_FROM_PTR_ESI sub ebp, dword ptr [esi]
#define SUB_EBP_FROM_PTR_EBP sub ebp, dword ptr [ebp]
#define SUB_EBP_FROM_PTR_ESP sub ebp, dword ptr [esp]
#define SUB_EBP_FROM_PTR_BX sub ebp, dword ptr [bx]
#define SUB_EBP_FROM_PTR_BP sub ebp, dword ptr [bp]
#define SUB_EBP_FROM_PTR_SI sub ebp, dword ptr [si]
#define SUB_EBP_FROM_PTR_DI sub ebp, dword ptr [di]

#define SUB_ESP_FROM_PTR_EAX sub esp, dword ptr [eax]
#define SUB_ESP_FROM_PTR_EBX sub esp, dword ptr [ebx]
#define SUB_ESP_FROM_PTR_ECX sub esp, dword ptr [ecx]
#define SUB_ESP_FROM_PTR_EDX sub esp, dword ptr [edx]
#define SUB_ESP_FROM_PTR_EDI sub esp, dword ptr [edi]
#define SUB_ESP_FROM_PTR_ESI sub esp, dword ptr [esi]
#define SUB_ESP_FROM_PTR_EBP sub esp, dword ptr [ebp]
#define SUB_ESP_FROM_PTR_ESP sub esp, dword ptr [esp]
#define SUB_ESP_FROM_PTR_BX sub esp, dword ptr [bx]
#define SUB_ESP_FROM_PTR_BP sub esp, dword ptr [bp]
#define SUB_ESP_FROM_PTR_SI sub esp, dword ptr [si]
#define SUB_ESP_FROM_PTR_DI sub esp, dword ptr [di]

#define SUB_EAX_TO_PTR_EAX sub dword ptr [eax], eax
#define SUB_EAX_TO_PTR_EBX sub dword ptr [ebx], eax
#define SUB_EAX_TO_PTR_ECX sub dword ptr [ecx], eax
#define SUB_EAX_TO_PTR_EDX sub dword ptr [edx], eax
#define SUB_EAX_TO_PTR_EDI sub dword ptr [edi], eax
#define SUB_EAX_TO_PTR_ESI sub dword ptr [esi], eax
#define SUB_EAX_TO_PTR_EBP sub dword ptr [ebp], eax
#define SUB_EAX_TO_PTR_ESP sub dword ptr [esp], eax
#define SUB_EAX_TO_PTR_BX sub dword ptr [bx], eax
#define SUB_EAX_TO_PTR_BP sub dword ptr [bp], eax
#define SUB_EAX_TO_PTR_SI sub dword ptr [si], eax
#define SUB_EAX_TO_PTR_DI sub dword ptr [di], eax

#define SUB_EBX_TO_PTR_EAX sub dword ptr [eax], ebx
#define SUB_EBX_TO_PTR_EBX sub dword ptr [ebx], ebx
#define SUB_EBX_TO_PTR_ECX sub dword ptr [ecx], ebx
#define SUB_EBX_TO_PTR_EDX sub dword ptr [edx], ebx
#define SUB_EBX_TO_PTR_EDI sub dword ptr [edi], ebx
#define SUB_EBX_TO_PTR_ESI sub dword ptr [esi], ebx
#define SUB_EBX_TO_PTR_EBP sub dword ptr [ebp], ebx
#define SUB_EBX_TO_PTR_ESP sub dword ptr [esp], ebx
#define SUB_EBX_TO_PTR_BX sub dword ptr [bx], ebx
#define SUB_EBX_TO_PTR_BP sub dword ptr [bp], ebx
#define SUB_EBX_TO_PTR_SI sub dword ptr [si], ebx
#define SUB_EBX_TO_PTR_DI sub dword ptr [di], ebx

#define SUB_ECX_TO_PTR_EAX sub dword ptr [eax], ecx
#define SUB_ECX_TO_PTR_EBX sub dword ptr [ebx], ecx
#define SUB_ECX_TO_PTR_ECX sub dword ptr [ecx], ecx
#define SUB_ECX_TO_PTR_EDX sub dword ptr [edx], ecx
#define SUB_ECX_TO_PTR_EDI sub dword ptr [edi], ecx
#define SUB_ECX_TO_PTR_ESI sub dword ptr [esi], ecx
#define SUB_ECX_TO_PTR_EBP sub dword ptr [ebp], ecx
#define SUB_ECX_TO_PTR_ESP sub dword ptr [esp], ecx
#define SUB_ECX_TO_PTR_BX sub dword ptr [bx], ecx
#define SUB_ECX_TO_PTR_BP sub dword ptr [bp], ecx
#define SUB_ECX_TO_PTR_SI sub dword ptr [si], ecx
#define SUB_ECX_TO_PTR_DI sub dword ptr [di], ecx

#define SUB_EDX_TO_PTR_EAX sub dword ptr [eax], edx
#define SUB_EDX_TO_PTR_EBX sub dword ptr [ebx], edx
#define SUB_EDX_TO_PTR_ECX sub dword ptr [ecx], edx
#define SUB_EDX_TO_PTR_EDX sub dword ptr [edx], edx
#define SUB_EDX_TO_PTR_EDI sub dword ptr [edi], edx
#define SUB_EDX_TO_PTR_ESI sub dword ptr [esi], edx
#define SUB_EDX_TO_PTR_EBP sub dword ptr [ebp], edx
#define SUB_EDX_TO_PTR_ESP sub dword ptr [esp], edx
#define SUB_EDX_TO_PTR_BX sub dword ptr [bx], edx
#define SUB_EDX_TO_PTR_BP sub dword ptr [bp], edx
#define SUB_EDX_TO_PTR_SI sub dword ptr [si], edx
#define SUB_EDX_TO_PTR_DI sub dword ptr [di], edx

#define SUB_EDI_TO_PTR_EAX sub dword ptr [eax], edi
#define SUB_EDI_TO_PTR_EBX sub dword ptr [ebx], edi
#define SUB_EDI_TO_PTR_ECX sub dword ptr [ecx], edi
#define SUB_EDI_TO_PTR_EDX sub dword ptr [edx], edi
#define SUB_EDI_TO_PTR_EDI sub dword ptr [edi], edi
#define SUB_EDI_TO_PTR_ESI sub dword ptr [esi], edi
#define SUB_EDI_TO_PTR_EBP sub dword ptr [ebp], edi
#define SUB_EDI_TO_PTR_ESP sub dword ptr [esp], edi
#define SUB_EDI_TO_PTR_BX sub dword ptr [bx], edi
#define SUB_EDI_TO_PTR_BP sub dword ptr [bp], edi
#define SUB_EDI_TO_PTR_SI sub dword ptr [si], edi
#define SUB_EDI_TO_PTR_DI sub dword ptr [di], edi

#define SUB_ESI_TO_PTR_EAX sub dword ptr [eax], esi
#define SUB_ESI_TO_PTR_EBX sub dword ptr [ebx], esi
#define SUB_ESI_TO_PTR_ECX sub dword ptr [ecx], esi
#define SUB_ESI_TO_PTR_EDX sub dword ptr [edx], esi
#define SUB_ESI_TO_PTR_EDI sub dword ptr [edi], esi
#define SUB_ESI_TO_PTR_ESI sub dword ptr [esi], esi
#define SUB_ESI_TO_PTR_EBP sub dword ptr [ebp], esi
#define SUB_ESI_TO_PTR_ESP sub dword ptr [esp], esi
#define SUB_ESI_TO_PTR_BX sub dword ptr [bx], esi
#define SUB_ESI_TO_PTR_BP sub dword ptr [bp], esi
#define SUB_ESI_TO_PTR_SI sub dword ptr [si], esi
#define SUB_ESI_TO_PTR_DI sub dword ptr [di], esi

#define SUB_EBP_TO_PTR_EAX sub dword ptr [eax], ebp
#define SUB_EBP_TO_PTR_EBX sub dword ptr [ebx], ebp
#define SUB_EBP_TO_PTR_ECX sub dword ptr [ecx], ebp
#define SUB_EBP_TO_PTR_EDX sub dword ptr [edx], ebp
#define SUB_EBP_TO_PTR_EDI sub dword ptr [edi], ebp
#define SUB_EBP_TO_PTR_ESI sub dword ptr [esi], ebp
#define SUB_EBP_TO_PTR_EBP sub dword ptr [ebp], ebp
#define SUB_EBP_TO_PTR_ESP sub dword ptr [esp], ebp
#define SUB_EBP_TO_PTR_BX sub dword ptr [bx], ebp
#define SUB_EBP_TO_PTR_BP sub dword ptr [bp], ebp
#define SUB_EBP_TO_PTR_SI sub dword ptr [si], ebp
#define SUB_EBP_TO_PTR_DI sub dword ptr [di], ebp

#define SUB_ESP_TO_PTR_EAX sub dword ptr [eax], esp
#define SUB_ESP_TO_PTR_EBX sub dword ptr [ebx], esp
#define SUB_ESP_TO_PTR_ECX sub dword ptr [ecx], esp
#define SUB_ESP_TO_PTR_EDX sub dword ptr [edx], esp
#define SUB_ESP_TO_PTR_EDI sub dword ptr [edi], esp
#define SUB_ESP_TO_PTR_ESI sub dword ptr [esi], esp
#define SUB_ESP_TO_PTR_EBP sub dword ptr [ebp], esp
#define SUB_ESP_TO_PTR_ESP sub dword ptr [esp], esp
#define SUB_ESP_TO_PTR_BX sub dword ptr [bx], esp
#define SUB_ESP_TO_PTR_BP sub dword ptr [bp], esp
#define SUB_ESP_TO_PTR_SI sub dword ptr [si], esp
#define SUB_ESP_TO_PTR_DI sub dword ptr [di], esp

#define SUB_EAX_FROM_PTR_EAX_(VALUE) sub eax, dword ptr [eax + VALUE]
#define SUB_EAX_FROM_PTR_EBX_(VALUE) sub eax, dword ptr [ebx + VALUE]
#define SUB_EAX_FROM_PTR_ECX_(VALUE) sub eax, dword ptr [ecx + VALUE]
#define SUB_EAX_FROM_PTR_EDX_(VALUE) sub eax, dword ptr [edx + VALUE]
#define SUB_EAX_FROM_PTR_EDI_(VALUE) sub eax, dword ptr [edi + VALUE]
#define SUB_EAX_FROM_PTR_ESI_(VALUE) sub eax, dword ptr [esi + VALUE]
#define SUB_EAX_FROM_PTR_EBP_(VALUE) sub eax, dword ptr [ebp + VALUE]
#define SUB_EAX_FROM_PTR_ESP_(VALUE) sub eax, dword ptr [esp + VALUE]
#define SUB_EAX_FROM_PTR_BX_(VALUE) sub eax, dword ptr [bx + VALUE]
#define SUB_EAX_FROM_PTR_BP_(VALUE) sub eax, dword ptr [bp + VALUE]
#define SUB_EAX_FROM_PTR_SI_(VALUE) sub eax, dword ptr [si + VALUE]
#define SUB_EAX_FROM_PTR_DI_(VALUE) sub eax, dword ptr [di + VALUE]

#define SUB_EBX_FROM_PTR_EAX_(VALUE) sub ebx, dword ptr [eax + VALUE]
#define SUB_EBX_FROM_PTR_EBX_(VALUE) sub ebx, dword ptr [ebx + VALUE]
#define SUB_EBX_FROM_PTR_ECX_(VALUE) sub ebx, dword ptr [ecx + VALUE]
#define SUB_EBX_FROM_PTR_EDX_(VALUE) sub ebx, dword ptr [edx + VALUE]
#define SUB_EBX_FROM_PTR_EDI_(VALUE) sub ebx, dword ptr [edi + VALUE]
#define SUB_EBX_FROM_PTR_ESI_(VALUE) sub ebx, dword ptr [esi + VALUE]
#define SUB_EBX_FROM_PTR_EBP_(VALUE) sub ebx, dword ptr [ebp + VALUE]
#define SUB_EBX_FROM_PTR_ESP_(VALUE) sub ebx, dword ptr [esp + VALUE]
#define SUB_EBX_FROM_PTR_BX_(VALUE) sub ebx, dword ptr [bx + VALUE]
#define SUB_EBX_FROM_PTR_BP_(VALUE) sub ebx, dword ptr [bp + VALUE]
#define SUB_EBX_FROM_PTR_SI_(VALUE) sub ebx, dword ptr [si + VALUE]
#define SUB_EBX_FROM_PTR_DI_(VALUE) sub ebx, dword ptr [di + VALUE]

#define SUB_ECX_FROM_PTR_EAX_(VALUE) sub ecx, dword ptr [eax + VALUE]
#define SUB_ECX_FROM_PTR_EBX_(VALUE) sub ecx, dword ptr [ebx + VALUE]
#define SUB_ECX_FROM_PTR_ECX_(VALUE) sub ecx, dword ptr [ecx + VALUE]
#define SUB_ECX_FROM_PTR_EDX_(VALUE) sub ecx, dword ptr [edx + VALUE]
#define SUB_ECX_FROM_PTR_EDI_(VALUE) sub ecx, dword ptr [edi + VALUE]
#define SUB_ECX_FROM_PTR_ESI_(VALUE) sub ecx, dword ptr [esi + VALUE]
#define SUB_ECX_FROM_PTR_EBP_(VALUE) sub ecx, dword ptr [ebp + VALUE]
#define SUB_ECX_FROM_PTR_ESP_(VALUE) sub ecx, dword ptr [esp + VALUE]
#define SUB_ECX_FROM_PTR_BX_(VALUE) sub ecx, dword ptr [bx + VALUE]
#define SUB_ECX_FROM_PTR_BP_(VALUE) sub ecx, dword ptr [bp + VALUE]
#define SUB_ECX_FROM_PTR_SI_(VALUE) sub ecx, dword ptr [si + VALUE]
#define SUB_ECX_FROM_PTR_DI_(VALUE) sub ecx, dword ptr [di + VALUE]

#define SUB_EDX_FROM_PTR_EAX_(VALUE) sub edx, dword ptr [eax + VALUE]
#define SUB_EDX_FROM_PTR_EBX_(VALUE) sub edx, dword ptr [ebx + VALUE]
#define SUB_EDX_FROM_PTR_ECX_(VALUE) sub edx, dword ptr [ecx + VALUE]
#define SUB_EDX_FROM_PTR_EDX_(VALUE) sub edx, dword ptr [edx + VALUE]
#define SUB_EDX_FROM_PTR_EDI_(VALUE) sub edx, dword ptr [edi + VALUE]
#define SUB_EDX_FROM_PTR_ESI_(VALUE) sub edx, dword ptr [esi + VALUE]
#define SUB_EDX_FROM_PTR_EBP_(VALUE) sub edx, dword ptr [ebp + VALUE]
#define SUB_EDX_FROM_PTR_ESP_(VALUE) sub edx, dword ptr [esp + VALUE]
#define SUB_EDX_FROM_PTR_BX_(VALUE) sub edx, dword ptr [bx + VALUE]
#define SUB_EDX_FROM_PTR_BP_(VALUE) sub edx, dword ptr [bp + VALUE]
#define SUB_EDX_FROM_PTR_SI_(VALUE) sub edx, dword ptr [si + VALUE]
#define SUB_EDX_FROM_PTR_DI_(VALUE) sub edx, dword ptr [di + VALUE]

#define SUB_EDI_FROM_PTR_EAX_(VALUE) sub edi, dword ptr [eax + VALUE]
#define SUB_EDI_FROM_PTR_EBX_(VALUE) sub edi, dword ptr [ebx + VALUE]
#define SUB_EDI_FROM_PTR_ECX_(VALUE) sub edi, dword ptr [ecx + VALUE]
#define SUB_EDI_FROM_PTR_EDX_(VALUE) sub edi, dword ptr [edx + VALUE]
#define SUB_EDI_FROM_PTR_EDI_(VALUE) sub edi, dword ptr [edi + VALUE]
#define SUB_EDI_FROM_PTR_ESI_(VALUE) sub edi, dword ptr [esi + VALUE]
#define SUB_EDI_FROM_PTR_EBP_(VALUE) sub edi, dword ptr [ebp + VALUE]
#define SUB_EDI_FROM_PTR_ESP_(VALUE) sub edi, dword ptr [esp + VALUE]
#define SUB_EDI_FROM_PTR_BX_(VALUE) sub edi, dword ptr [bx + VALUE]
#define SUB_EDI_FROM_PTR_BP_(VALUE) sub edi, dword ptr [bp + VALUE]
#define SUB_EDI_FROM_PTR_SI_(VALUE) sub edi, dword ptr [si + VALUE]
#define SUB_EDI_FROM_PTR_DI_(VALUE) sub edi, dword ptr [di + VALUE]

#define SUB_ESI_FROM_PTR_EAX_(VALUE) sub esi, dword ptr [eax + VALUE]
#define SUB_ESI_FROM_PTR_EBX_(VALUE) sub esi, dword ptr [ebx + VALUE]
#define SUB_ESI_FROM_PTR_ECX_(VALUE) sub esi, dword ptr [ecx + VALUE]
#define SUB_ESI_FROM_PTR_EDX_(VALUE) sub esi, dword ptr [edx + VALUE]
#define SUB_ESI_FROM_PTR_EDI_(VALUE) sub esi, dword ptr [edi + VALUE]
#define SUB_ESI_FROM_PTR_ESI_(VALUE) sub esi, dword ptr [esi + VALUE]
#define SUB_ESI_FROM_PTR_EBP_(VALUE) sub esi, dword ptr [ebp + VALUE]
#define SUB_ESI_FROM_PTR_ESP_(VALUE) sub esi, dword ptr [esp + VALUE]
#define SUB_ESI_FROM_PTR_BX_(VALUE) sub esi, dword ptr [bx + VALUE]
#define SUB_ESI_FROM_PTR_BP_(VALUE) sub esi, dword ptr [bp + VALUE]
#define SUB_ESI_FROM_PTR_SI_(VALUE) sub esi, dword ptr [si + VALUE]
#define SUB_ESI_FROM_PTR_DI_(VALUE) sub esi, dword ptr [di + VALUE]

#define SUB_EBP_FROM_PTR_EAX_(VALUE) sub ebp, dword ptr [eax + VALUE]
#define SUB_EBP_FROM_PTR_EBX_(VALUE) sub ebp, dword ptr [ebx + VALUE]
#define SUB_EBP_FROM_PTR_ECX_(VALUE) sub ebp, dword ptr [ecx + VALUE]
#define SUB_EBP_FROM_PTR_EDX_(VALUE) sub ebp, dword ptr [edx + VALUE]
#define SUB_EBP_FROM_PTR_EDI_(VALUE) sub ebp, dword ptr [edi + VALUE]
#define SUB_EBP_FROM_PTR_ESI_(VALUE) sub ebp, dword ptr [esi + VALUE]
#define SUB_EBP_FROM_PTR_EBP_(VALUE) sub ebp, dword ptr [ebp + VALUE]
#define SUB_EBP_FROM_PTR_ESP_(VALUE) sub ebp, dword ptr [esp + VALUE]
#define SUB_EBP_FROM_PTR_BX_(VALUE) sub ebp, dword ptr [bx + VALUE]
#define SUB_EBP_FROM_PTR_BP_(VALUE) sub ebp, dword ptr [bp + VALUE]
#define SUB_EBP_FROM_PTR_SI_(VALUE) sub ebp, dword ptr [si + VALUE]
#define SUB_EBP_FROM_PTR_DI_(VALUE) sub ebp, dword ptr [di + VALUE]

#define SUB_ESP_FROM_PTR_EAX_(VALUE) sub esp, dword ptr [eax + VALUE]
#define SUB_ESP_FROM_PTR_EBX_(VALUE) sub esp, dword ptr [ebx + VALUE]
#define SUB_ESP_FROM_PTR_ECX_(VALUE) sub esp, dword ptr [ecx + VALUE]
#define SUB_ESP_FROM_PTR_EDX_(VALUE) sub esp, dword ptr [edx + VALUE]
#define SUB_ESP_FROM_PTR_EDI_(VALUE) sub esp, dword ptr [edi + VALUE]
#define SUB_ESP_FROM_PTR_ESI_(VALUE) sub esp, dword ptr [esi + VALUE]
#define SUB_ESP_FROM_PTR_EBP_(VALUE) sub esp, dword ptr [ebp + VALUE]
#define SUB_ESP_FROM_PTR_ESP_(VALUE) sub esp, dword ptr [esp + VALUE]
#define SUB_ESP_FROM_PTR_BX_(VALUE) sub esp, dword ptr [bx + VALUE]
#define SUB_ESP_FROM_PTR_BP_(VALUE) sub esp, dword ptr [bp + VALUE]
#define SUB_ESP_FROM_PTR_SI_(VALUE) sub esp, dword ptr [si + VALUE]
#define SUB_ESP_FROM_PTR_DI_(VALUE) sub esp, dword ptr [di + VALUE]

#define SUB_EAX_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], eax
#define SUB_EAX_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], eax
#define SUB_EAX_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], eax
#define SUB_EAX_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], eax
#define SUB_EAX_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], eax
#define SUB_EAX_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], eax
#define SUB_EAX_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], eax
#define SUB_EAX_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], eax
#define SUB_EAX_TO_PTR_BX_(VALUE) sub dword ptr [bx + VALUE], eax
#define SUB_EAX_TO_PTR_BP_(VALUE) sub dword ptr [bp + VALUE], eax
#define SUB_EAX_TO_PTR_SI_(VALUE) sub dword ptr [si + VALUE], eax
#define SUB_EAX_TO_PTR_DI_(VALUE) sub dword ptr [di + VALUE], eax

#define SUB_EBX_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], ebx
#define SUB_EBX_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], ebx
#define SUB_EBX_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], ebx
#define SUB_EBX_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], ebx
#define SUB_EBX_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], ebx
#define SUB_EBX_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], ebx
#define SUB_EBX_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], ebx
#define SUB_EBX_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], ebx
#define SUB_EBX_TO_PTR_BX_(VALUE) sub dword ptr [bx + VALUE], ebx
#define SUB_EBX_TO_PTR_BP_(VALUE) sub dword ptr [bp + VALUE], ebx
#define SUB_EBX_TO_PTR_SI_(VALUE) sub dword ptr [si + VALUE], ebx
#define SUB_EBX_TO_PTR_DI_(VALUE) sub dword ptr [di + VALUE], ebx

#define SUB_ECX_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], ecx
#define SUB_ECX_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], ecx
#define SUB_ECX_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], ecx
#define SUB_ECX_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], ecx
#define SUB_ECX_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], ecx
#define SUB_ECX_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], ecx
#define SUB_ECX_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], ecx
#define SUB_ECX_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], ecx
#define SUB_ECX_TO_PTR_BX_(VALUE) sub dword ptr [bx + VALUE], ecx
#define SUB_ECX_TO_PTR_BP_(VALUE) sub dword ptr [bp + VALUE], ecx
#define SUB_ECX_TO_PTR_SI_(VALUE) sub dword ptr [si + VALUE], ecx
#define SUB_ECX_TO_PTR_DI_(VALUE) sub dword ptr [di + VALUE], ecx

#define SUB_EDX_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], edx
#define SUB_EDX_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], edx
#define SUB_EDX_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], edx
#define SUB_EDX_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], edx
#define SUB_EDX_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], edx
#define SUB_EDX_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], edx
#define SUB_EDX_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], edx
#define SUB_EDX_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], edx
#define SUB_EDX_TO_PTR_BX_(VALUE) sub dword ptr [bx + VALUE], edx
#define SUB_EDX_TO_PTR_BP_(VALUE) sub dword ptr [bp + VALUE], edx
#define SUB_EDX_TO_PTR_SI_(VALUE) sub dword ptr [si + VALUE], edx
#define SUB_EDX_TO_PTR_DI_(VALUE) sub dword ptr [di + VALUE], edx

#define SUB_EDI_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], edi
#define SUB_EDI_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], edi
#define SUB_EDI_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], edi
#define SUB_EDI_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], edi
#define SUB_EDI_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], edi
#define SUB_EDI_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], edi
#define SUB_EDI_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], edi
#define SUB_EDI_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], edi
#define SUB_EDI_TO_PTR_BX_(VALUE) sub dword ptr [bx + VALUE], edi
#define SUB_EDI_TO_PTR_BP_(VALUE) sub dword ptr [bp + VALUE], edi
#define SUB_EDI_TO_PTR_SI_(VALUE) sub dword ptr [si + VALUE], edi
#define SUB_EDI_TO_PTR_DI_(VALUE) sub dword ptr [di + VALUE], edi

#define SUB_ESI_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], esi
#define SUB_ESI_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], esi
#define SUB_ESI_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], esi
#define SUB_ESI_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], esi
#define SUB_ESI_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], esi
#define SUB_ESI_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], esi
#define SUB_ESI_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], esi
#define SUB_ESI_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], esi
#define SUB_ESI_TO_PTR_BX_(VALUE) sub dword ptr [bx + VALUE], esi
#define SUB_ESI_TO_PTR_BP_(VALUE) sub dword ptr [bp + VALUE], esi
#define SUB_ESI_TO_PTR_SI_(VALUE) sub dword ptr [si + VALUE], esi
#define SUB_ESI_TO_PTR_DI_(VALUE) sub dword ptr [di + VALUE], esi

#define SUB_EBP_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], ebp
#define SUB_EBP_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], ebp
#define SUB_EBP_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], ebp
#define SUB_EBP_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], ebp
#define SUB_EBP_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], ebp
#define SUB_EBP_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], ebp
#define SUB_EBP_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], ebp
#define SUB_EBP_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], ebp
#define SUB_EBP_TO_PTR_BX_(VALUE) sub dword ptr [bx + VALUE], ebp
#define SUB_EBP_TO_PTR_BP_(VALUE) sub dword ptr [bp + VALUE], ebp
#define SUB_EBP_TO_PTR_SI_(VALUE) sub dword ptr [si + VALUE], ebp
#define SUB_EBP_TO_PTR_DI_(VALUE) sub dword ptr [di + VALUE], ebp

#define SUB_ESP_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], esp
#define SUB_ESP_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], esp
#define SUB_ESP_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], esp
#define SUB_ESP_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], esp
#define SUB_ESP_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], esp
#define SUB_ESP_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], esp
#define SUB_ESP_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], esp
#define SUB_ESP_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], esp
#define SUB_ESP_TO_PTR_BX_(VALUE) sub dword ptr [bx + VALUE], esp
#define SUB_ESP_TO_PTR_BP_(VALUE) sub dword ptr [bp + VALUE], esp
#define SUB_ESP_TO_PTR_SI_(VALUE) sub dword ptr [si + VALUE], esp
#define SUB_ESP_TO_PTR_DI_(VALUE) sub dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_EAX_FROM_PTR_(VALUE) sub eax, dword ptr [VALUE]
#define SUB_EBX_FROM_PTR_(VALUE) sub ebx, dword ptr [VALUE]
#define SUB_ECX_FROM_PTR_(VALUE) sub ecx, dword ptr [VALUE]
#define SUB_EDX_FROM_PTR_(VALUE) sub edx, dword ptr [VALUE]
#define SUB_EDI_FROM_PTR_(VALUE) sub edi, dword ptr [VALUE]
#define SUB_ESI_FROM_PTR_(VALUE) sub esi, dword ptr [VALUE]
#define SUB_EBP_FROM_PTR_(VALUE) sub ebp, dword ptr [VALUE]
#define SUB_ESP_FROM_PTR_(VALUE) sub esp, dword ptr [VALUE]
#define SUB_R8D_FROM_PTR_(VALUE) sub r8d, dword ptr [VALUE]
#define SUB_R9D_FROM_PTR_(VALUE) sub r9d, dword ptr [VALUE]
#define SUB_R10D_FROM_PTR_(VALUE) sub r10d, dword ptr [VALUE]
#define SUB_R11D_FROM_PTR_(VALUE) sub r11d, dword ptr [VALUE]
#define SUB_R12D_FROM_PTR_(VALUE) sub r12d, dword ptr [VALUE]
#define SUB_R13D_FROM_PTR_(VALUE) sub r13d, dword ptr [VALUE]
#define SUB_R14D_FROM_PTR_(VALUE) sub r14d, dword ptr [VALUE]
#define SUB_R15D_FROM_PTR_(VALUE) sub r15d, dword ptr [VALUE]

#define SUB_EAX_TO_PTR_(VALUE) sub dword ptr [VALUE], eax
#define SUB_EBX_TO_PTR_(VALUE) sub dword ptr [VALUE], ebx
#define SUB_ECX_TO_PTR_(VALUE) sub dword ptr [VALUE], ecx
#define SUB_EDX_TO_PTR_(VALUE) sub dword ptr [VALUE], edx
#define SUB_EDI_TO_PTR_(VALUE) sub dword ptr [VALUE], edi
#define SUB_ESI_TO_PTR_(VALUE) sub dword ptr [VALUE], esi
#define SUB_EBP_TO_PTR_(VALUE) sub dword ptr [VALUE], ebp
#define SUB_ESP_TO_PTR_(VALUE) sub dword ptr [VALUE], esp
#define SUB_R8D_TO_PTR_(VALUE) sub dword ptr [VALUE], r8d
#define SUB_R9D_TO_PTR_(VALUE) sub dword ptr [VALUE], r9d
#define SUB_R10D_TO_PTR_(VALUE) sub dword ptr [VALUE], r10d
#define SUB_R11D_TO_PTR_(VALUE) sub dword ptr [VALUE], r11d
#define SUB_R12D_TO_PTR_(VALUE) sub dword ptr [VALUE], r12d
#define SUB_R13D_TO_PTR_(VALUE) sub dword ptr [VALUE], r13d
#define SUB_R14D_TO_PTR_(VALUE) sub dword ptr [VALUE], r14d
#define SUB_R15D_TO_PTR_(VALUE) sub dword ptr [VALUE], r15d

#define SUB_EAX_FROM_PTR_RAX sub eax, dword ptr [rax]
#define SUB_EAX_FROM_PTR_RBX sub eax, dword ptr [rbx]
#define SUB_EAX_FROM_PTR_RCX sub eax, dword ptr [rcx]
#define SUB_EAX_FROM_PTR_RDX sub eax, dword ptr [rdx]
#define SUB_EAX_FROM_PTR_RDI sub eax, dword ptr [rdi]
#define SUB_EAX_FROM_PTR_RSI sub eax, dword ptr [rsi]
#define SUB_EAX_FROM_PTR_RBP sub eax, dword ptr [rbp]
#define SUB_EAX_FROM_PTR_RSP sub eax, dword ptr [rsp]
#define SUB_EAX_FROM_PTR_R8 sub eax, dword ptr [r8]
#define SUB_EAX_FROM_PTR_R9 sub eax, dword ptr [r9]
#define SUB_EAX_FROM_PTR_R10 sub eax, dword ptr [r10]
#define SUB_EAX_FROM_PTR_R11 sub eax, dword ptr [r11]
#define SUB_EAX_FROM_PTR_R12 sub eax, dword ptr [r12]
#define SUB_EAX_FROM_PTR_R13 sub eax, dword ptr [r13]
#define SUB_EAX_FROM_PTR_R14 sub eax, dword ptr [r14]
#define SUB_EAX_FROM_PTR_R15 sub eax, dword ptr [r15]
#define SUB_EAX_FROM_PTR_EAX sub eax, dword ptr [eax]
#define SUB_EAX_FROM_PTR_EBX sub eax, dword ptr [ebx]
#define SUB_EAX_FROM_PTR_ECX sub eax, dword ptr [ecx]
#define SUB_EAX_FROM_PTR_EDX sub eax, dword ptr [edx]
#define SUB_EAX_FROM_PTR_EDI sub eax, dword ptr [edi]
#define SUB_EAX_FROM_PTR_ESI sub eax, dword ptr [esi]
#define SUB_EAX_FROM_PTR_EBP sub eax, dword ptr [ebp]
#define SUB_EAX_FROM_PTR_ESP sub eax, dword ptr [esp]

#define SUB_EBX_FROM_PTR_RAX sub ebx, dword ptr [rax]
#define SUB_EBX_FROM_PTR_RBX sub ebx, dword ptr [rbx]
#define SUB_EBX_FROM_PTR_RCX sub ebx, dword ptr [rcx]
#define SUB_EBX_FROM_PTR_RDX sub ebx, dword ptr [rdx]
#define SUB_EBX_FROM_PTR_RDI sub ebx, dword ptr [rdi]
#define SUB_EBX_FROM_PTR_RSI sub ebx, dword ptr [rsi]
#define SUB_EBX_FROM_PTR_RBP sub ebx, dword ptr [rbp]
#define SUB_EBX_FROM_PTR_RSP sub ebx, dword ptr [rsp]
#define SUB_EBX_FROM_PTR_R8 sub ebx, dword ptr [r8]
#define SUB_EBX_FROM_PTR_R9 sub ebx, dword ptr [r9]
#define SUB_EBX_FROM_PTR_R10 sub ebx, dword ptr [r10]
#define SUB_EBX_FROM_PTR_R11 sub ebx, dword ptr [r11]
#define SUB_EBX_FROM_PTR_R12 sub ebx, dword ptr [r12]
#define SUB_EBX_FROM_PTR_R13 sub ebx, dword ptr [r13]
#define SUB_EBX_FROM_PTR_R14 sub ebx, dword ptr [r14]
#define SUB_EBX_FROM_PTR_R15 sub ebx, dword ptr [r15]
#define SUB_EBX_FROM_PTR_EAX sub ebx, dword ptr [eax]
#define SUB_EBX_FROM_PTR_EBX sub ebx, dword ptr [ebx]
#define SUB_EBX_FROM_PTR_ECX sub ebx, dword ptr [ecx]
#define SUB_EBX_FROM_PTR_EDX sub ebx, dword ptr [edx]
#define SUB_EBX_FROM_PTR_EDI sub ebx, dword ptr [edi]
#define SUB_EBX_FROM_PTR_ESI sub ebx, dword ptr [esi]
#define SUB_EBX_FROM_PTR_EBP sub ebx, dword ptr [ebp]
#define SUB_EBX_FROM_PTR_ESP sub ebx, dword ptr [esp]

#define SUB_ECX_FROM_PTR_RAX sub ecx, dword ptr [rax]
#define SUB_ECX_FROM_PTR_RBX sub ecx, dword ptr [rbx]
#define SUB_ECX_FROM_PTR_RCX sub ecx, dword ptr [rcx]
#define SUB_ECX_FROM_PTR_RDX sub ecx, dword ptr [rdx]
#define SUB_ECX_FROM_PTR_RDI sub ecx, dword ptr [rdi]
#define SUB_ECX_FROM_PTR_RSI sub ecx, dword ptr [rsi]
#define SUB_ECX_FROM_PTR_RBP sub ecx, dword ptr [rbp]
#define SUB_ECX_FROM_PTR_RSP sub ecx, dword ptr [rsp]
#define SUB_ECX_FROM_PTR_R8 sub ecx, dword ptr [r8]
#define SUB_ECX_FROM_PTR_R9 sub ecx, dword ptr [r9]
#define SUB_ECX_FROM_PTR_R10 sub ecx, dword ptr [r10]
#define SUB_ECX_FROM_PTR_R11 sub ecx, dword ptr [r11]
#define SUB_ECX_FROM_PTR_R12 sub ecx, dword ptr [r12]
#define SUB_ECX_FROM_PTR_R13 sub ecx, dword ptr [r13]
#define SUB_ECX_FROM_PTR_R14 sub ecx, dword ptr [r14]
#define SUB_ECX_FROM_PTR_R15 sub ecx, dword ptr [r15]
#define SUB_ECX_FROM_PTR_EAX sub ecx, dword ptr [eax]
#define SUB_ECX_FROM_PTR_EBX sub ecx, dword ptr [ebx]
#define SUB_ECX_FROM_PTR_ECX sub ecx, dword ptr [ecx]
#define SUB_ECX_FROM_PTR_EDX sub ecx, dword ptr [edx]
#define SUB_ECX_FROM_PTR_EDI sub ecx, dword ptr [edi]
#define SUB_ECX_FROM_PTR_ESI sub ecx, dword ptr [esi]
#define SUB_ECX_FROM_PTR_EBP sub ecx, dword ptr [ebp]
#define SUB_ECX_FROM_PTR_ESP sub ecx, dword ptr [esp]

#define SUB_EDX_FROM_PTR_RAX sub edx, dword ptr [rax]
#define SUB_EDX_FROM_PTR_RBX sub edx, dword ptr [rbx]
#define SUB_EDX_FROM_PTR_RCX sub edx, dword ptr [rcx]
#define SUB_EDX_FROM_PTR_RDX sub edx, dword ptr [rdx]
#define SUB_EDX_FROM_PTR_RDI sub edx, dword ptr [rdi]
#define SUB_EDX_FROM_PTR_RSI sub edx, dword ptr [rsi]
#define SUB_EDX_FROM_PTR_RBP sub edx, dword ptr [rbp]
#define SUB_EDX_FROM_PTR_RSP sub edx, dword ptr [rsp]
#define SUB_EDX_FROM_PTR_R8 sub edx, dword ptr [r8]
#define SUB_EDX_FROM_PTR_R9 sub edx, dword ptr [r9]
#define SUB_EDX_FROM_PTR_R10 sub edx, dword ptr [r10]
#define SUB_EDX_FROM_PTR_R11 sub edx, dword ptr [r11]
#define SUB_EDX_FROM_PTR_R12 sub edx, dword ptr [r12]
#define SUB_EDX_FROM_PTR_R13 sub edx, dword ptr [r13]
#define SUB_EDX_FROM_PTR_R14 sub edx, dword ptr [r14]
#define SUB_EDX_FROM_PTR_R15 sub edx, dword ptr [r15]
#define SUB_EDX_FROM_PTR_EAX sub edx, dword ptr [eax]
#define SUB_EDX_FROM_PTR_EBX sub edx, dword ptr [ebx]
#define SUB_EDX_FROM_PTR_ECX sub edx, dword ptr [ecx]
#define SUB_EDX_FROM_PTR_EDX sub edx, dword ptr [edx]
#define SUB_EDX_FROM_PTR_EDI sub edx, dword ptr [edi]
#define SUB_EDX_FROM_PTR_ESI sub edx, dword ptr [esi]
#define SUB_EDX_FROM_PTR_EBP sub edx, dword ptr [ebp]
#define SUB_EDX_FROM_PTR_ESP sub edx, dword ptr [esp]

#define SUB_EDI_FROM_PTR_RAX sub edi, dword ptr [rax]
#define SUB_EDI_FROM_PTR_RBX sub edi, dword ptr [rbx]
#define SUB_EDI_FROM_PTR_RCX sub edi, dword ptr [rcx]
#define SUB_EDI_FROM_PTR_RDX sub edi, dword ptr [rdx]
#define SUB_EDI_FROM_PTR_RDI sub edi, dword ptr [rdi]
#define SUB_EDI_FROM_PTR_RSI sub edi, dword ptr [rsi]
#define SUB_EDI_FROM_PTR_RBP sub edi, dword ptr [rbp]
#define SUB_EDI_FROM_PTR_RSP sub edi, dword ptr [rsp]
#define SUB_EDI_FROM_PTR_R8 sub edi, dword ptr [r8]
#define SUB_EDI_FROM_PTR_R9 sub edi, dword ptr [r9]
#define SUB_EDI_FROM_PTR_R10 sub edi, dword ptr [r10]
#define SUB_EDI_FROM_PTR_R11 sub edi, dword ptr [r11]
#define SUB_EDI_FROM_PTR_R12 sub edi, dword ptr [r12]
#define SUB_EDI_FROM_PTR_R13 sub edi, dword ptr [r13]
#define SUB_EDI_FROM_PTR_R14 sub edi, dword ptr [r14]
#define SUB_EDI_FROM_PTR_R15 sub edi, dword ptr [r15]
#define SUB_EDI_FROM_PTR_EAX sub edi, dword ptr [eax]
#define SUB_EDI_FROM_PTR_EBX sub edi, dword ptr [ebx]
#define SUB_EDI_FROM_PTR_ECX sub edi, dword ptr [ecx]
#define SUB_EDI_FROM_PTR_EDX sub edi, dword ptr [edx]
#define SUB_EDI_FROM_PTR_EDI sub edi, dword ptr [edi]
#define SUB_EDI_FROM_PTR_ESI sub edi, dword ptr [esi]
#define SUB_EDI_FROM_PTR_EBP sub edi, dword ptr [ebp]
#define SUB_EDI_FROM_PTR_ESP sub edi, dword ptr [esp]

#define SUB_ESI_FROM_PTR_RAX sub esi, dword ptr [rax]
#define SUB_ESI_FROM_PTR_RBX sub esi, dword ptr [rbx]
#define SUB_ESI_FROM_PTR_RCX sub esi, dword ptr [rcx]
#define SUB_ESI_FROM_PTR_RDX sub esi, dword ptr [rdx]
#define SUB_ESI_FROM_PTR_RDI sub esi, dword ptr [rdi]
#define SUB_ESI_FROM_PTR_RSI sub esi, dword ptr [rsi]
#define SUB_ESI_FROM_PTR_RBP sub esi, dword ptr [rbp]
#define SUB_ESI_FROM_PTR_RSP sub esi, dword ptr [rsp]
#define SUB_ESI_FROM_PTR_R8 sub esi, dword ptr [r8]
#define SUB_ESI_FROM_PTR_R9 sub esi, dword ptr [r9]
#define SUB_ESI_FROM_PTR_R10 sub esi, dword ptr [r10]
#define SUB_ESI_FROM_PTR_R11 sub esi, dword ptr [r11]
#define SUB_ESI_FROM_PTR_R12 sub esi, dword ptr [r12]
#define SUB_ESI_FROM_PTR_R13 sub esi, dword ptr [r13]
#define SUB_ESI_FROM_PTR_R14 sub esi, dword ptr [r14]
#define SUB_ESI_FROM_PTR_R15 sub esi, dword ptr [r15]
#define SUB_ESI_FROM_PTR_EAX sub esi, dword ptr [eax]
#define SUB_ESI_FROM_PTR_EBX sub esi, dword ptr [ebx]
#define SUB_ESI_FROM_PTR_ECX sub esi, dword ptr [ecx]
#define SUB_ESI_FROM_PTR_EDX sub esi, dword ptr [edx]
#define SUB_ESI_FROM_PTR_EDI sub esi, dword ptr [edi]
#define SUB_ESI_FROM_PTR_ESI sub esi, dword ptr [esi]
#define SUB_ESI_FROM_PTR_EBP sub esi, dword ptr [ebp]
#define SUB_ESI_FROM_PTR_ESP sub esi, dword ptr [esp]

#define SUB_EBP_FROM_PTR_RAX sub ebp, dword ptr [rax]
#define SUB_EBP_FROM_PTR_RBX sub ebp, dword ptr [rbx]
#define SUB_EBP_FROM_PTR_RCX sub ebp, dword ptr [rcx]
#define SUB_EBP_FROM_PTR_RDX sub ebp, dword ptr [rdx]
#define SUB_EBP_FROM_PTR_RDI sub ebp, dword ptr [rdi]
#define SUB_EBP_FROM_PTR_RSI sub ebp, dword ptr [rsi]
#define SUB_EBP_FROM_PTR_RBP sub ebp, dword ptr [rbp]
#define SUB_EBP_FROM_PTR_RSP sub ebp, dword ptr [rsp]
#define SUB_EBP_FROM_PTR_R8 sub ebp, dword ptr [r8]
#define SUB_EBP_FROM_PTR_R9 sub ebp, dword ptr [r9]
#define SUB_EBP_FROM_PTR_R10 sub ebp, dword ptr [r10]
#define SUB_EBP_FROM_PTR_R11 sub ebp, dword ptr [r11]
#define SUB_EBP_FROM_PTR_R12 sub ebp, dword ptr [r12]
#define SUB_EBP_FROM_PTR_R13 sub ebp, dword ptr [r13]
#define SUB_EBP_FROM_PTR_R14 sub ebp, dword ptr [r14]
#define SUB_EBP_FROM_PTR_R15 sub ebp, dword ptr [r15]
#define SUB_EBP_FROM_PTR_EAX sub ebp, dword ptr [eax]
#define SUB_EBP_FROM_PTR_EBX sub ebp, dword ptr [ebx]
#define SUB_EBP_FROM_PTR_ECX sub ebp, dword ptr [ecx]
#define SUB_EBP_FROM_PTR_EDX sub ebp, dword ptr [edx]
#define SUB_EBP_FROM_PTR_EDI sub ebp, dword ptr [edi]
#define SUB_EBP_FROM_PTR_ESI sub ebp, dword ptr [esi]
#define SUB_EBP_FROM_PTR_EBP sub ebp, dword ptr [ebp]
#define SUB_EBP_FROM_PTR_ESP sub ebp, dword ptr [esp]

#define SUB_ESP_FROM_PTR_RAX sub esp, dword ptr [rax]
#define SUB_ESP_FROM_PTR_RBX sub esp, dword ptr [rbx]
#define SUB_ESP_FROM_PTR_RCX sub esp, dword ptr [rcx]
#define SUB_ESP_FROM_PTR_RDX sub esp, dword ptr [rdx]
#define SUB_ESP_FROM_PTR_RDI sub esp, dword ptr [rdi]
#define SUB_ESP_FROM_PTR_RSI sub esp, dword ptr [rsi]
#define SUB_ESP_FROM_PTR_RBP sub esp, dword ptr [rbp]
#define SUB_ESP_FROM_PTR_RSP sub esp, dword ptr [rsp]
#define SUB_ESP_FROM_PTR_R8 sub esp, dword ptr [r8]
#define SUB_ESP_FROM_PTR_R9 sub esp, dword ptr [r9]
#define SUB_ESP_FROM_PTR_R10 sub esp, dword ptr [r10]
#define SUB_ESP_FROM_PTR_R11 sub esp, dword ptr [r11]
#define SUB_ESP_FROM_PTR_R12 sub esp, dword ptr [r12]
#define SUB_ESP_FROM_PTR_R13 sub esp, dword ptr [r13]
#define SUB_ESP_FROM_PTR_R14 sub esp, dword ptr [r14]
#define SUB_ESP_FROM_PTR_R15 sub esp, dword ptr [r15]
#define SUB_ESP_FROM_PTR_EAX sub esp, dword ptr [eax]
#define SUB_ESP_FROM_PTR_EBX sub esp, dword ptr [ebx]
#define SUB_ESP_FROM_PTR_ECX sub esp, dword ptr [ecx]
#define SUB_ESP_FROM_PTR_EDX sub esp, dword ptr [edx]
#define SUB_ESP_FROM_PTR_EDI sub esp, dword ptr [edi]
#define SUB_ESP_FROM_PTR_ESI sub esp, dword ptr [esi]
#define SUB_ESP_FROM_PTR_EBP sub esp, dword ptr [ebp]
#define SUB_ESP_FROM_PTR_ESP sub esp, dword ptr [esp]

#define SUB_R8D_FROM_PTR_RAX sub r8d, dword ptr [rax]
#define SUB_R8D_FROM_PTR_RBX sub r8d, dword ptr [rbx]
#define SUB_R8D_FROM_PTR_RCX sub r8d, dword ptr [rcx]
#define SUB_R8D_FROM_PTR_RDX sub r8d, dword ptr [rdx]
#define SUB_R8D_FROM_PTR_RDI sub r8d, dword ptr [rdi]
#define SUB_R8D_FROM_PTR_RSI sub r8d, dword ptr [rsi]
#define SUB_R8D_FROM_PTR_RBP sub r8d, dword ptr [rbp]
#define SUB_R8D_FROM_PTR_RSP sub r8d, dword ptr [rsp]
#define SUB_R8D_FROM_PTR_R8 sub r8d, dword ptr [r8]
#define SUB_R8D_FROM_PTR_R9 sub r8d, dword ptr [r9]
#define SUB_R8D_FROM_PTR_R10 sub r8d, dword ptr [r10]
#define SUB_R8D_FROM_PTR_R11 sub r8d, dword ptr [r11]
#define SUB_R8D_FROM_PTR_R12 sub r8d, dword ptr [r12]
#define SUB_R8D_FROM_PTR_R13 sub r8d, dword ptr [r13]
#define SUB_R8D_FROM_PTR_R14 sub r8d, dword ptr [r14]
#define SUB_R8D_FROM_PTR_R15 sub r8d, dword ptr [r15]
#define SUB_R8D_FROM_PTR_EAX sub r8d, dword ptr [eax]
#define SUB_R8D_FROM_PTR_EBX sub r8d, dword ptr [ebx]
#define SUB_R8D_FROM_PTR_ECX sub r8d, dword ptr [ecx]
#define SUB_R8D_FROM_PTR_EDX sub r8d, dword ptr [edx]
#define SUB_R8D_FROM_PTR_EDI sub r8d, dword ptr [edi]
#define SUB_R8D_FROM_PTR_ESI sub r8d, dword ptr [esi]
#define SUB_R8D_FROM_PTR_EBP sub r8d, dword ptr [ebp]
#define SUB_R8D_FROM_PTR_ESP sub r8d, dword ptr [esp]

#define SUB_R9D_FROM_PTR_RAX sub r9d, dword ptr [rax]
#define SUB_R9D_FROM_PTR_RBX sub r9d, dword ptr [rbx]
#define SUB_R9D_FROM_PTR_RCX sub r9d, dword ptr [rcx]
#define SUB_R9D_FROM_PTR_RDX sub r9d, dword ptr [rdx]
#define SUB_R9D_FROM_PTR_RDI sub r9d, dword ptr [rdi]
#define SUB_R9D_FROM_PTR_RSI sub r9d, dword ptr [rsi]
#define SUB_R9D_FROM_PTR_RBP sub r9d, dword ptr [rbp]
#define SUB_R9D_FROM_PTR_RSP sub r9d, dword ptr [rsp]
#define SUB_R9D_FROM_PTR_R8 sub r9d, dword ptr [r8]
#define SUB_R9D_FROM_PTR_R9 sub r9d, dword ptr [r9]
#define SUB_R9D_FROM_PTR_R10 sub r9d, dword ptr [r10]
#define SUB_R9D_FROM_PTR_R11 sub r9d, dword ptr [r11]
#define SUB_R9D_FROM_PTR_R12 sub r9d, dword ptr [r12]
#define SUB_R9D_FROM_PTR_R13 sub r9d, dword ptr [r13]
#define SUB_R9D_FROM_PTR_R14 sub r9d, dword ptr [r14]
#define SUB_R9D_FROM_PTR_R15 sub r9d, dword ptr [r15]
#define SUB_R9D_FROM_PTR_EAX sub r9d, dword ptr [eax]
#define SUB_R9D_FROM_PTR_EBX sub r9d, dword ptr [ebx]
#define SUB_R9D_FROM_PTR_ECX sub r9d, dword ptr [ecx]
#define SUB_R9D_FROM_PTR_EDX sub r9d, dword ptr [edx]
#define SUB_R9D_FROM_PTR_EDI sub r9d, dword ptr [edi]
#define SUB_R9D_FROM_PTR_ESI sub r9d, dword ptr [esi]
#define SUB_R9D_FROM_PTR_EBP sub r9d, dword ptr [ebp]
#define SUB_R9D_FROM_PTR_ESP sub r9d, dword ptr [esp]

#define SUB_R10D_FROM_PTR_RAX sub r10d, dword ptr [rax]
#define SUB_R10D_FROM_PTR_RBX sub r10d, dword ptr [rbx]
#define SUB_R10D_FROM_PTR_RCX sub r10d, dword ptr [rcx]
#define SUB_R10D_FROM_PTR_RDX sub r10d, dword ptr [rdx]
#define SUB_R10D_FROM_PTR_RDI sub r10d, dword ptr [rdi]
#define SUB_R10D_FROM_PTR_RSI sub r10d, dword ptr [rsi]
#define SUB_R10D_FROM_PTR_RBP sub r10d, dword ptr [rbp]
#define SUB_R10D_FROM_PTR_RSP sub r10d, dword ptr [rsp]
#define SUB_R10D_FROM_PTR_R8 sub r10d, dword ptr [r8]
#define SUB_R10D_FROM_PTR_R9 sub r10d, dword ptr [r9]
#define SUB_R10D_FROM_PTR_R10 sub r10d, dword ptr [r10]
#define SUB_R10D_FROM_PTR_R11 sub r10d, dword ptr [r11]
#define SUB_R10D_FROM_PTR_R12 sub r10d, dword ptr [r12]
#define SUB_R10D_FROM_PTR_R13 sub r10d, dword ptr [r13]
#define SUB_R10D_FROM_PTR_R14 sub r10d, dword ptr [r14]
#define SUB_R10D_FROM_PTR_R15 sub r10d, dword ptr [r15]
#define SUB_R10D_FROM_PTR_EAX sub r10d, dword ptr [eax]
#define SUB_R10D_FROM_PTR_EBX sub r10d, dword ptr [ebx]
#define SUB_R10D_FROM_PTR_ECX sub r10d, dword ptr [ecx]
#define SUB_R10D_FROM_PTR_EDX sub r10d, dword ptr [edx]
#define SUB_R10D_FROM_PTR_EDI sub r10d, dword ptr [edi]
#define SUB_R10D_FROM_PTR_ESI sub r10d, dword ptr [esi]
#define SUB_R10D_FROM_PTR_EBP sub r10d, dword ptr [ebp]
#define SUB_R10D_FROM_PTR_ESP sub r10d, dword ptr [esp]

#define SUB_R11D_FROM_PTR_RAX sub r11d, dword ptr [rax]
#define SUB_R11D_FROM_PTR_RBX sub r11d, dword ptr [rbx]
#define SUB_R11D_FROM_PTR_RCX sub r11d, dword ptr [rcx]
#define SUB_R11D_FROM_PTR_RDX sub r11d, dword ptr [rdx]
#define SUB_R11D_FROM_PTR_RDI sub r11d, dword ptr [rdi]
#define SUB_R11D_FROM_PTR_RSI sub r11d, dword ptr [rsi]
#define SUB_R11D_FROM_PTR_RBP sub r11d, dword ptr [rbp]
#define SUB_R11D_FROM_PTR_RSP sub r11d, dword ptr [rsp]
#define SUB_R11D_FROM_PTR_R8 sub r11d, dword ptr [r8]
#define SUB_R11D_FROM_PTR_R9 sub r11d, dword ptr [r9]
#define SUB_R11D_FROM_PTR_R10 sub r11d, dword ptr [r10]
#define SUB_R11D_FROM_PTR_R11 sub r11d, dword ptr [r11]
#define SUB_R11D_FROM_PTR_R12 sub r11d, dword ptr [r12]
#define SUB_R11D_FROM_PTR_R13 sub r11d, dword ptr [r13]
#define SUB_R11D_FROM_PTR_R14 sub r11d, dword ptr [r14]
#define SUB_R11D_FROM_PTR_R15 sub r11d, dword ptr [r15]
#define SUB_R11D_FROM_PTR_EAX sub r11d, dword ptr [eax]
#define SUB_R11D_FROM_PTR_EBX sub r11d, dword ptr [ebx]
#define SUB_R11D_FROM_PTR_ECX sub r11d, dword ptr [ecx]
#define SUB_R11D_FROM_PTR_EDX sub r11d, dword ptr [edx]
#define SUB_R11D_FROM_PTR_EDI sub r11d, dword ptr [edi]
#define SUB_R11D_FROM_PTR_ESI sub r11d, dword ptr [esi]
#define SUB_R11D_FROM_PTR_EBP sub r11d, dword ptr [ebp]
#define SUB_R11D_FROM_PTR_ESP sub r11d, dword ptr [esp]

#define SUB_R12D_FROM_PTR_RAX sub r12d, dword ptr [rax]
#define SUB_R12D_FROM_PTR_RBX sub r12d, dword ptr [rbx]
#define SUB_R12D_FROM_PTR_RCX sub r12d, dword ptr [rcx]
#define SUB_R12D_FROM_PTR_RDX sub r12d, dword ptr [rdx]
#define SUB_R12D_FROM_PTR_RDI sub r12d, dword ptr [rdi]
#define SUB_R12D_FROM_PTR_RSI sub r12d, dword ptr [rsi]
#define SUB_R12D_FROM_PTR_RBP sub r12d, dword ptr [rbp]
#define SUB_R12D_FROM_PTR_RSP sub r12d, dword ptr [rsp]
#define SUB_R12D_FROM_PTR_R8 sub r12d, dword ptr [r8]
#define SUB_R12D_FROM_PTR_R9 sub r12d, dword ptr [r9]
#define SUB_R12D_FROM_PTR_R10 sub r12d, dword ptr [r10]
#define SUB_R12D_FROM_PTR_R11 sub r12d, dword ptr [r11]
#define SUB_R12D_FROM_PTR_R12 sub r12d, dword ptr [r12]
#define SUB_R12D_FROM_PTR_R13 sub r12d, dword ptr [r13]
#define SUB_R12D_FROM_PTR_R14 sub r12d, dword ptr [r14]
#define SUB_R12D_FROM_PTR_R15 sub r12d, dword ptr [r15]
#define SUB_R12D_FROM_PTR_EAX sub r12d, dword ptr [eax]
#define SUB_R12D_FROM_PTR_EBX sub r12d, dword ptr [ebx]
#define SUB_R12D_FROM_PTR_ECX sub r12d, dword ptr [ecx]
#define SUB_R12D_FROM_PTR_EDX sub r12d, dword ptr [edx]
#define SUB_R12D_FROM_PTR_EDI sub r12d, dword ptr [edi]
#define SUB_R12D_FROM_PTR_ESI sub r12d, dword ptr [esi]
#define SUB_R12D_FROM_PTR_EBP sub r12d, dword ptr [ebp]
#define SUB_R12D_FROM_PTR_ESP sub r12d, dword ptr [esp]

#define SUB_R13D_FROM_PTR_RAX sub r13d, dword ptr [rax]
#define SUB_R13D_FROM_PTR_RBX sub r13d, dword ptr [rbx]
#define SUB_R13D_FROM_PTR_RCX sub r13d, dword ptr [rcx]
#define SUB_R13D_FROM_PTR_RDX sub r13d, dword ptr [rdx]
#define SUB_R13D_FROM_PTR_RDI sub r13d, dword ptr [rdi]
#define SUB_R13D_FROM_PTR_RSI sub r13d, dword ptr [rsi]
#define SUB_R13D_FROM_PTR_RBP sub r13d, dword ptr [rbp]
#define SUB_R13D_FROM_PTR_RSP sub r13d, dword ptr [rsp]
#define SUB_R13D_FROM_PTR_R8 sub r13d, dword ptr [r8]
#define SUB_R13D_FROM_PTR_R9 sub r13d, dword ptr [r9]
#define SUB_R13D_FROM_PTR_R10 sub r13d, dword ptr [r10]
#define SUB_R13D_FROM_PTR_R11 sub r13d, dword ptr [r11]
#define SUB_R13D_FROM_PTR_R12 sub r13d, dword ptr [r12]
#define SUB_R13D_FROM_PTR_R13 sub r13d, dword ptr [r13]
#define SUB_R13D_FROM_PTR_R14 sub r13d, dword ptr [r14]
#define SUB_R13D_FROM_PTR_R15 sub r13d, dword ptr [r15]
#define SUB_R13D_FROM_PTR_EAX sub r13d, dword ptr [eax]
#define SUB_R13D_FROM_PTR_EBX sub r13d, dword ptr [ebx]
#define SUB_R13D_FROM_PTR_ECX sub r13d, dword ptr [ecx]
#define SUB_R13D_FROM_PTR_EDX sub r13d, dword ptr [edx]
#define SUB_R13D_FROM_PTR_EDI sub r13d, dword ptr [edi]
#define SUB_R13D_FROM_PTR_ESI sub r13d, dword ptr [esi]
#define SUB_R13D_FROM_PTR_EBP sub r13d, dword ptr [ebp]
#define SUB_R13D_FROM_PTR_ESP sub r13d, dword ptr [esp]

#define SUB_R14D_FROM_PTR_RAX sub r14d, dword ptr [rax]
#define SUB_R14D_FROM_PTR_RBX sub r14d, dword ptr [rbx]
#define SUB_R14D_FROM_PTR_RCX sub r14d, dword ptr [rcx]
#define SUB_R14D_FROM_PTR_RDX sub r14d, dword ptr [rdx]
#define SUB_R14D_FROM_PTR_RDI sub r14d, dword ptr [rdi]
#define SUB_R14D_FROM_PTR_RSI sub r14d, dword ptr [rsi]
#define SUB_R14D_FROM_PTR_RBP sub r14d, dword ptr [rbp]
#define SUB_R14D_FROM_PTR_RSP sub r14d, dword ptr [rsp]
#define SUB_R14D_FROM_PTR_R8 sub r14d, dword ptr [r8]
#define SUB_R14D_FROM_PTR_R9 sub r14d, dword ptr [r9]
#define SUB_R14D_FROM_PTR_R10 sub r14d, dword ptr [r10]
#define SUB_R14D_FROM_PTR_R11 sub r14d, dword ptr [r11]
#define SUB_R14D_FROM_PTR_R12 sub r14d, dword ptr [r12]
#define SUB_R14D_FROM_PTR_R13 sub r14d, dword ptr [r13]
#define SUB_R14D_FROM_PTR_R14 sub r14d, dword ptr [r14]
#define SUB_R14D_FROM_PTR_R15 sub r14d, dword ptr [r15]
#define SUB_R14D_FROM_PTR_EAX sub r14d, dword ptr [eax]
#define SUB_R14D_FROM_PTR_EBX sub r14d, dword ptr [ebx]
#define SUB_R14D_FROM_PTR_ECX sub r14d, dword ptr [ecx]
#define SUB_R14D_FROM_PTR_EDX sub r14d, dword ptr [edx]
#define SUB_R14D_FROM_PTR_EDI sub r14d, dword ptr [edi]
#define SUB_R14D_FROM_PTR_ESI sub r14d, dword ptr [esi]
#define SUB_R14D_FROM_PTR_EBP sub r14d, dword ptr [ebp]
#define SUB_R14D_FROM_PTR_ESP sub r14d, dword ptr [esp]

#define SUB_R15D_FROM_PTR_RAX sub r15d, dword ptr [rax]
#define SUB_R15D_FROM_PTR_RBX sub r15d, dword ptr [rbx]
#define SUB_R15D_FROM_PTR_RCX sub r15d, dword ptr [rcx]
#define SUB_R15D_FROM_PTR_RDX sub r15d, dword ptr [rdx]
#define SUB_R15D_FROM_PTR_RDI sub r15d, dword ptr [rdi]
#define SUB_R15D_FROM_PTR_RSI sub r15d, dword ptr [rsi]
#define SUB_R15D_FROM_PTR_RBP sub r15d, dword ptr [rbp]
#define SUB_R15D_FROM_PTR_RSP sub r15d, dword ptr [rsp]
#define SUB_R15D_FROM_PTR_R8 sub r15d, dword ptr [r8]
#define SUB_R15D_FROM_PTR_R9 sub r15d, dword ptr [r9]
#define SUB_R15D_FROM_PTR_R10 sub r15d, dword ptr [r10]
#define SUB_R15D_FROM_PTR_R11 sub r15d, dword ptr [r11]
#define SUB_R15D_FROM_PTR_R12 sub r15d, dword ptr [r12]
#define SUB_R15D_FROM_PTR_R13 sub r15d, dword ptr [r13]
#define SUB_R15D_FROM_PTR_R14 sub r15d, dword ptr [r14]
#define SUB_R15D_FROM_PTR_R15 sub r15d, dword ptr [r15]
#define SUB_R15D_FROM_PTR_EAX sub r15d, dword ptr [eax]
#define SUB_R15D_FROM_PTR_EBX sub r15d, dword ptr [ebx]
#define SUB_R15D_FROM_PTR_ECX sub r15d, dword ptr [ecx]
#define SUB_R15D_FROM_PTR_EDX sub r15d, dword ptr [edx]
#define SUB_R15D_FROM_PTR_EDI sub r15d, dword ptr [edi]
#define SUB_R15D_FROM_PTR_ESI sub r15d, dword ptr [esi]
#define SUB_R15D_FROM_PTR_EBP sub r15d, dword ptr [ebp]
#define SUB_R15D_FROM_PTR_ESP sub r15d, dword ptr [esp]

#define SUB_EAX_TO_PTR_RAX sub dword ptr [rax], eax
#define SUB_EAX_TO_PTR_RBX sub dword ptr [rbx], eax
#define SUB_EAX_TO_PTR_RCX sub dword ptr [rcx], eax
#define SUB_EAX_TO_PTR_RDX sub dword ptr [rdx], eax
#define SUB_EAX_TO_PTR_RDI sub dword ptr [rdi], eax
#define SUB_EAX_TO_PTR_RSI sub dword ptr [rsi], eax
#define SUB_EAX_TO_PTR_RBP sub dword ptr [rbp], eax
#define SUB_EAX_TO_PTR_RSP sub dword ptr [rsp], eax
#define SUB_EAX_TO_PTR_R8 sub dword ptr [r8], eax
#define SUB_EAX_TO_PTR_R9 sub dword ptr [r9], eax
#define SUB_EAX_TO_PTR_R10 sub dword ptr [r10], eax
#define SUB_EAX_TO_PTR_R11 sub dword ptr [r11], eax
#define SUB_EAX_TO_PTR_R12 sub dword ptr [r12], eax
#define SUB_EAX_TO_PTR_R13 sub dword ptr [r13], eax
#define SUB_EAX_TO_PTR_R14 sub dword ptr [r14], eax
#define SUB_EAX_TO_PTR_R15 sub dword ptr [r15], eax
#define SUB_EAX_TO_PTR_EAX sub dword ptr [eax], eax
#define SUB_EAX_TO_PTR_EBX sub dword ptr [ebx], eax
#define SUB_EAX_TO_PTR_ECX sub dword ptr [ecx], eax
#define SUB_EAX_TO_PTR_EDX sub dword ptr [edx], eax
#define SUB_EAX_TO_PTR_EDI sub dword ptr [edi], eax
#define SUB_EAX_TO_PTR_ESI sub dword ptr [esi], eax
#define SUB_EAX_TO_PTR_EBP sub dword ptr [ebp], eax
#define SUB_EAX_TO_PTR_ESP sub dword ptr [esp], eax

#define SUB_EBX_TO_PTR_RAX sub dword ptr [rax], ebx
#define SUB_EBX_TO_PTR_RBX sub dword ptr [rbx], ebx
#define SUB_EBX_TO_PTR_RCX sub dword ptr [rcx], ebx
#define SUB_EBX_TO_PTR_RDX sub dword ptr [rdx], ebx
#define SUB_EBX_TO_PTR_RDI sub dword ptr [rdi], ebx
#define SUB_EBX_TO_PTR_RSI sub dword ptr [rsi], ebx
#define SUB_EBX_TO_PTR_RBP sub dword ptr [rbp], ebx
#define SUB_EBX_TO_PTR_RSP sub dword ptr [rsp], ebx
#define SUB_EBX_TO_PTR_R8 sub dword ptr [r8], ebx
#define SUB_EBX_TO_PTR_R9 sub dword ptr [r9], ebx
#define SUB_EBX_TO_PTR_R10 sub dword ptr [r10], ebx
#define SUB_EBX_TO_PTR_R11 sub dword ptr [r11], ebx
#define SUB_EBX_TO_PTR_R12 sub dword ptr [r12], ebx
#define SUB_EBX_TO_PTR_R13 sub dword ptr [r13], ebx
#define SUB_EBX_TO_PTR_R14 sub dword ptr [r14], ebx
#define SUB_EBX_TO_PTR_R15 sub dword ptr [r15], ebx
#define SUB_EBX_TO_PTR_EAX sub dword ptr [eax], ebx
#define SUB_EBX_TO_PTR_EBX sub dword ptr [ebx], ebx
#define SUB_EBX_TO_PTR_ECX sub dword ptr [ecx], ebx
#define SUB_EBX_TO_PTR_EDX sub dword ptr [edx], ebx
#define SUB_EBX_TO_PTR_EDI sub dword ptr [edi], ebx
#define SUB_EBX_TO_PTR_ESI sub dword ptr [esi], ebx
#define SUB_EBX_TO_PTR_EBP sub dword ptr [ebp], ebx
#define SUB_EBX_TO_PTR_ESP sub dword ptr [esp], ebx

#define SUB_ECX_TO_PTR_RAX sub dword ptr [rax], ecx
#define SUB_ECX_TO_PTR_RBX sub dword ptr [rbx], ecx
#define SUB_ECX_TO_PTR_RCX sub dword ptr [rcx], ecx
#define SUB_ECX_TO_PTR_RDX sub dword ptr [rdx], ecx
#define SUB_ECX_TO_PTR_RDI sub dword ptr [rdi], ecx
#define SUB_ECX_TO_PTR_RSI sub dword ptr [rsi], ecx
#define SUB_ECX_TO_PTR_RBP sub dword ptr [rbp], ecx
#define SUB_ECX_TO_PTR_RSP sub dword ptr [rsp], ecx
#define SUB_ECX_TO_PTR_R8 sub dword ptr [r8], ecx
#define SUB_ECX_TO_PTR_R9 sub dword ptr [r9], ecx
#define SUB_ECX_TO_PTR_R10 sub dword ptr [r10], ecx
#define SUB_ECX_TO_PTR_R11 sub dword ptr [r11], ecx
#define SUB_ECX_TO_PTR_R12 sub dword ptr [r12], ecx
#define SUB_ECX_TO_PTR_R13 sub dword ptr [r13], ecx
#define SUB_ECX_TO_PTR_R14 sub dword ptr [r14], ecx
#define SUB_ECX_TO_PTR_R15 sub dword ptr [r15], ecx
#define SUB_ECX_TO_PTR_EAX sub dword ptr [eax], ecx
#define SUB_ECX_TO_PTR_EBX sub dword ptr [ebx], ecx
#define SUB_ECX_TO_PTR_ECX sub dword ptr [ecx], ecx
#define SUB_ECX_TO_PTR_EDX sub dword ptr [edx], ecx
#define SUB_ECX_TO_PTR_EDI sub dword ptr [edi], ecx
#define SUB_ECX_TO_PTR_ESI sub dword ptr [esi], ecx
#define SUB_ECX_TO_PTR_EBP sub dword ptr [ebp], ecx
#define SUB_ECX_TO_PTR_ESP sub dword ptr [esp], ecx

#define SUB_EDX_TO_PTR_RAX sub dword ptr [rax], edx
#define SUB_EDX_TO_PTR_RBX sub dword ptr [rbx], edx
#define SUB_EDX_TO_PTR_RCX sub dword ptr [rcx], edx
#define SUB_EDX_TO_PTR_RDX sub dword ptr [rdx], edx
#define SUB_EDX_TO_PTR_RDI sub dword ptr [rdi], edx
#define SUB_EDX_TO_PTR_RSI sub dword ptr [rsi], edx
#define SUB_EDX_TO_PTR_RBP sub dword ptr [rbp], edx
#define SUB_EDX_TO_PTR_RSP sub dword ptr [rsp], edx
#define SUB_EDX_TO_PTR_R8 sub dword ptr [r8], edx
#define SUB_EDX_TO_PTR_R9 sub dword ptr [r9], edx
#define SUB_EDX_TO_PTR_R10 sub dword ptr [r10], edx
#define SUB_EDX_TO_PTR_R11 sub dword ptr [r11], edx
#define SUB_EDX_TO_PTR_R12 sub dword ptr [r12], edx
#define SUB_EDX_TO_PTR_R13 sub dword ptr [r13], edx
#define SUB_EDX_TO_PTR_R14 sub dword ptr [r14], edx
#define SUB_EDX_TO_PTR_R15 sub dword ptr [r15], edx
#define SUB_EDX_TO_PTR_EAX sub dword ptr [eax], edx
#define SUB_EDX_TO_PTR_EBX sub dword ptr [ebx], edx
#define SUB_EDX_TO_PTR_ECX sub dword ptr [ecx], edx
#define SUB_EDX_TO_PTR_EDX sub dword ptr [edx], edx
#define SUB_EDX_TO_PTR_EDI sub dword ptr [edi], edx
#define SUB_EDX_TO_PTR_ESI sub dword ptr [esi], edx
#define SUB_EDX_TO_PTR_EBP sub dword ptr [ebp], edx
#define SUB_EDX_TO_PTR_ESP sub dword ptr [esp], edx

#define SUB_EDI_TO_PTR_RAX sub dword ptr [rax], edi
#define SUB_EDI_TO_PTR_RBX sub dword ptr [rbx], edi
#define SUB_EDI_TO_PTR_RCX sub dword ptr [rcx], edi
#define SUB_EDI_TO_PTR_RDX sub dword ptr [rdx], edi
#define SUB_EDI_TO_PTR_RDI sub dword ptr [rdi], edi
#define SUB_EDI_TO_PTR_RSI sub dword ptr [rsi], edi
#define SUB_EDI_TO_PTR_RBP sub dword ptr [rbp], edi
#define SUB_EDI_TO_PTR_RSP sub dword ptr [rsp], edi
#define SUB_EDI_TO_PTR_R8 sub dword ptr [r8], edi
#define SUB_EDI_TO_PTR_R9 sub dword ptr [r9], edi
#define SUB_EDI_TO_PTR_R10 sub dword ptr [r10], edi
#define SUB_EDI_TO_PTR_R11 sub dword ptr [r11], edi
#define SUB_EDI_TO_PTR_R12 sub dword ptr [r12], edi
#define SUB_EDI_TO_PTR_R13 sub dword ptr [r13], edi
#define SUB_EDI_TO_PTR_R14 sub dword ptr [r14], edi
#define SUB_EDI_TO_PTR_R15 sub dword ptr [r15], edi
#define SUB_EDI_TO_PTR_EAX sub dword ptr [eax], edi
#define SUB_EDI_TO_PTR_EBX sub dword ptr [ebx], edi
#define SUB_EDI_TO_PTR_ECX sub dword ptr [ecx], edi
#define SUB_EDI_TO_PTR_EDX sub dword ptr [edx], edi
#define SUB_EDI_TO_PTR_EDI sub dword ptr [edi], edi
#define SUB_EDI_TO_PTR_ESI sub dword ptr [esi], edi
#define SUB_EDI_TO_PTR_EBP sub dword ptr [ebp], edi
#define SUB_EDI_TO_PTR_ESP sub dword ptr [esp], edi

#define SUB_ESI_TO_PTR_RAX sub dword ptr [rax], esi
#define SUB_ESI_TO_PTR_RBX sub dword ptr [rbx], esi
#define SUB_ESI_TO_PTR_RCX sub dword ptr [rcx], esi
#define SUB_ESI_TO_PTR_RDX sub dword ptr [rdx], esi
#define SUB_ESI_TO_PTR_RDI sub dword ptr [rdi], esi
#define SUB_ESI_TO_PTR_RSI sub dword ptr [rsi], esi
#define SUB_ESI_TO_PTR_RBP sub dword ptr [rbp], esi
#define SUB_ESI_TO_PTR_RSP sub dword ptr [rsp], esi
#define SUB_ESI_TO_PTR_R8 sub dword ptr [r8], esi
#define SUB_ESI_TO_PTR_R9 sub dword ptr [r9], esi
#define SUB_ESI_TO_PTR_R10 sub dword ptr [r10], esi
#define SUB_ESI_TO_PTR_R11 sub dword ptr [r11], esi
#define SUB_ESI_TO_PTR_R12 sub dword ptr [r12], esi
#define SUB_ESI_TO_PTR_R13 sub dword ptr [r13], esi
#define SUB_ESI_TO_PTR_R14 sub dword ptr [r14], esi
#define SUB_ESI_TO_PTR_R15 sub dword ptr [r15], esi
#define SUB_ESI_TO_PTR_EAX sub dword ptr [eax], esi
#define SUB_ESI_TO_PTR_EBX sub dword ptr [ebx], esi
#define SUB_ESI_TO_PTR_ECX sub dword ptr [ecx], esi
#define SUB_ESI_TO_PTR_EDX sub dword ptr [edx], esi
#define SUB_ESI_TO_PTR_EDI sub dword ptr [edi], esi
#define SUB_ESI_TO_PTR_ESI sub dword ptr [esi], esi
#define SUB_ESI_TO_PTR_EBP sub dword ptr [ebp], esi
#define SUB_ESI_TO_PTR_ESP sub dword ptr [esp], esi

#define SUB_EBP_TO_PTR_RAX sub dword ptr [rax], ebp
#define SUB_EBP_TO_PTR_RBX sub dword ptr [rbx], ebp
#define SUB_EBP_TO_PTR_RCX sub dword ptr [rcx], ebp
#define SUB_EBP_TO_PTR_RDX sub dword ptr [rdx], ebp
#define SUB_EBP_TO_PTR_RDI sub dword ptr [rdi], ebp
#define SUB_EBP_TO_PTR_RSI sub dword ptr [rsi], ebp
#define SUB_EBP_TO_PTR_RBP sub dword ptr [rbp], ebp
#define SUB_EBP_TO_PTR_RSP sub dword ptr [rsp], ebp
#define SUB_EBP_TO_PTR_R8 sub dword ptr [r8], ebp
#define SUB_EBP_TO_PTR_R9 sub dword ptr [r9], ebp
#define SUB_EBP_TO_PTR_R10 sub dword ptr [r10], ebp
#define SUB_EBP_TO_PTR_R11 sub dword ptr [r11], ebp
#define SUB_EBP_TO_PTR_R12 sub dword ptr [r12], ebp
#define SUB_EBP_TO_PTR_R13 sub dword ptr [r13], ebp
#define SUB_EBP_TO_PTR_R14 sub dword ptr [r14], ebp
#define SUB_EBP_TO_PTR_R15 sub dword ptr [r15], ebp
#define SUB_EBP_TO_PTR_EAX sub dword ptr [eax], ebp
#define SUB_EBP_TO_PTR_EBX sub dword ptr [ebx], ebp
#define SUB_EBP_TO_PTR_ECX sub dword ptr [ecx], ebp
#define SUB_EBP_TO_PTR_EDX sub dword ptr [edx], ebp
#define SUB_EBP_TO_PTR_EDI sub dword ptr [edi], ebp
#define SUB_EBP_TO_PTR_ESI sub dword ptr [esi], ebp
#define SUB_EBP_TO_PTR_EBP sub dword ptr [ebp], ebp
#define SUB_EBP_TO_PTR_ESP sub dword ptr [esp], ebp

#define SUB_ESP_TO_PTR_RAX sub dword ptr [rax], esp
#define SUB_ESP_TO_PTR_RBX sub dword ptr [rbx], esp
#define SUB_ESP_TO_PTR_RCX sub dword ptr [rcx], esp
#define SUB_ESP_TO_PTR_RDX sub dword ptr [rdx], esp
#define SUB_ESP_TO_PTR_RDI sub dword ptr [rdi], esp
#define SUB_ESP_TO_PTR_RSI sub dword ptr [rsi], esp
#define SUB_ESP_TO_PTR_RBP sub dword ptr [rbp], esp
#define SUB_ESP_TO_PTR_RSP sub dword ptr [rsp], esp
#define SUB_ESP_TO_PTR_R8 sub dword ptr [r8], esp
#define SUB_ESP_TO_PTR_R9 sub dword ptr [r9], esp
#define SUB_ESP_TO_PTR_R10 sub dword ptr [r10], esp
#define SUB_ESP_TO_PTR_R11 sub dword ptr [r11], esp
#define SUB_ESP_TO_PTR_R12 sub dword ptr [r12], esp
#define SUB_ESP_TO_PTR_R13 sub dword ptr [r13], esp
#define SUB_ESP_TO_PTR_R14 sub dword ptr [r14], esp
#define SUB_ESP_TO_PTR_R15 sub dword ptr [r15], esp
#define SUB_ESP_TO_PTR_EAX sub dword ptr [eax], esp
#define SUB_ESP_TO_PTR_EBX sub dword ptr [ebx], esp
#define SUB_ESP_TO_PTR_ECX sub dword ptr [ecx], esp
#define SUB_ESP_TO_PTR_EDX sub dword ptr [edx], esp
#define SUB_ESP_TO_PTR_EDI sub dword ptr [edi], esp
#define SUB_ESP_TO_PTR_ESI sub dword ptr [esi], esp
#define SUB_ESP_TO_PTR_EBP sub dword ptr [ebp], esp
#define SUB_ESP_TO_PTR_ESP sub dword ptr [esp], esp

#define SUB_R8D_TO_PTR_RAX sub dword ptr [rax], r8d
#define SUB_R8D_TO_PTR_RBX sub dword ptr [rbx], r8d
#define SUB_R8D_TO_PTR_RCX sub dword ptr [rcx], r8d
#define SUB_R8D_TO_PTR_RDX sub dword ptr [rdx], r8d
#define SUB_R8D_TO_PTR_RDI sub dword ptr [rdi], r8d
#define SUB_R8D_TO_PTR_RSI sub dword ptr [rsi], r8d
#define SUB_R8D_TO_PTR_RBP sub dword ptr [rbp], r8d
#define SUB_R8D_TO_PTR_RSP sub dword ptr [rsp], r8d
#define SUB_R8D_TO_PTR_R8 sub dword ptr [r8], r8d
#define SUB_R8D_TO_PTR_R9 sub dword ptr [r9], r8d
#define SUB_R8D_TO_PTR_R10 sub dword ptr [r10], r8d
#define SUB_R8D_TO_PTR_R11 sub dword ptr [r11], r8d
#define SUB_R8D_TO_PTR_R12 sub dword ptr [r12], r8d
#define SUB_R8D_TO_PTR_R13 sub dword ptr [r13], r8d
#define SUB_R8D_TO_PTR_R14 sub dword ptr [r14], r8d
#define SUB_R8D_TO_PTR_R15 sub dword ptr [r15], r8d
#define SUB_R8D_TO_PTR_EAX sub dword ptr [eax], r8d
#define SUB_R8D_TO_PTR_EBX sub dword ptr [ebx], r8d
#define SUB_R8D_TO_PTR_ECX sub dword ptr [ecx], r8d
#define SUB_R8D_TO_PTR_EDX sub dword ptr [edx], r8d
#define SUB_R8D_TO_PTR_EDI sub dword ptr [edi], r8d
#define SUB_R8D_TO_PTR_ESI sub dword ptr [esi], r8d
#define SUB_R8D_TO_PTR_EBP sub dword ptr [ebp], r8d
#define SUB_R8D_TO_PTR_ESP sub dword ptr [esp], r8d

#define SUB_R9D_TO_PTR_RAX sub dword ptr [rax], r9d
#define SUB_R9D_TO_PTR_RBX sub dword ptr [rbx], r9d
#define SUB_R9D_TO_PTR_RCX sub dword ptr [rcx], r9d
#define SUB_R9D_TO_PTR_RDX sub dword ptr [rdx], r9d
#define SUB_R9D_TO_PTR_RDI sub dword ptr [rdi], r9d
#define SUB_R9D_TO_PTR_RSI sub dword ptr [rsi], r9d
#define SUB_R9D_TO_PTR_RBP sub dword ptr [rbp], r9d
#define SUB_R9D_TO_PTR_RSP sub dword ptr [rsp], r9d
#define SUB_R9D_TO_PTR_R8 sub dword ptr [r8], r9d
#define SUB_R9D_TO_PTR_R9 sub dword ptr [r9], r9d
#define SUB_R9D_TO_PTR_R10 sub dword ptr [r10], r9d
#define SUB_R9D_TO_PTR_R11 sub dword ptr [r11], r9d
#define SUB_R9D_TO_PTR_R12 sub dword ptr [r12], r9d
#define SUB_R9D_TO_PTR_R13 sub dword ptr [r13], r9d
#define SUB_R9D_TO_PTR_R14 sub dword ptr [r14], r9d
#define SUB_R9D_TO_PTR_R15 sub dword ptr [r15], r9d
#define SUB_R9D_TO_PTR_EAX sub dword ptr [eax], r9d
#define SUB_R9D_TO_PTR_EBX sub dword ptr [ebx], r9d
#define SUB_R9D_TO_PTR_ECX sub dword ptr [ecx], r9d
#define SUB_R9D_TO_PTR_EDX sub dword ptr [edx], r9d
#define SUB_R9D_TO_PTR_EDI sub dword ptr [edi], r9d
#define SUB_R9D_TO_PTR_ESI sub dword ptr [esi], r9d
#define SUB_R9D_TO_PTR_EBP sub dword ptr [ebp], r9d
#define SUB_R9D_TO_PTR_ESP sub dword ptr [esp], r9d

#define SUB_R10D_TO_PTR_RAX sub dword ptr [rax], r10d
#define SUB_R10D_TO_PTR_RBX sub dword ptr [rbx], r10d
#define SUB_R10D_TO_PTR_RCX sub dword ptr [rcx], r10d
#define SUB_R10D_TO_PTR_RDX sub dword ptr [rdx], r10d
#define SUB_R10D_TO_PTR_RDI sub dword ptr [rdi], r10d
#define SUB_R10D_TO_PTR_RSI sub dword ptr [rsi], r10d
#define SUB_R10D_TO_PTR_RBP sub dword ptr [rbp], r10d
#define SUB_R10D_TO_PTR_RSP sub dword ptr [rsp], r10d
#define SUB_R10D_TO_PTR_R8 sub dword ptr [r8], r10d
#define SUB_R10D_TO_PTR_R9 sub dword ptr [r9], r10d
#define SUB_R10D_TO_PTR_R10 sub dword ptr [r10], r10d
#define SUB_R10D_TO_PTR_R11 sub dword ptr [r11], r10d
#define SUB_R10D_TO_PTR_R12 sub dword ptr [r12], r10d
#define SUB_R10D_TO_PTR_R13 sub dword ptr [r13], r10d
#define SUB_R10D_TO_PTR_R14 sub dword ptr [r14], r10d
#define SUB_R10D_TO_PTR_R15 sub dword ptr [r15], r10d
#define SUB_R10D_TO_PTR_EAX sub dword ptr [eax], r10d
#define SUB_R10D_TO_PTR_EBX sub dword ptr [ebx], r10d
#define SUB_R10D_TO_PTR_ECX sub dword ptr [ecx], r10d
#define SUB_R10D_TO_PTR_EDX sub dword ptr [edx], r10d
#define SUB_R10D_TO_PTR_EDI sub dword ptr [edi], r10d
#define SUB_R10D_TO_PTR_ESI sub dword ptr [esi], r10d
#define SUB_R10D_TO_PTR_EBP sub dword ptr [ebp], r10d
#define SUB_R10D_TO_PTR_ESP sub dword ptr [esp], r10d

#define SUB_R11D_TO_PTR_RAX sub dword ptr [rax], r11d
#define SUB_R11D_TO_PTR_RBX sub dword ptr [rbx], r11d
#define SUB_R11D_TO_PTR_RCX sub dword ptr [rcx], r11d
#define SUB_R11D_TO_PTR_RDX sub dword ptr [rdx], r11d
#define SUB_R11D_TO_PTR_RDI sub dword ptr [rdi], r11d
#define SUB_R11D_TO_PTR_RSI sub dword ptr [rsi], r11d
#define SUB_R11D_TO_PTR_RBP sub dword ptr [rbp], r11d
#define SUB_R11D_TO_PTR_RSP sub dword ptr [rsp], r11d
#define SUB_R11D_TO_PTR_R8 sub dword ptr [r8], r11d
#define SUB_R11D_TO_PTR_R9 sub dword ptr [r9], r11d
#define SUB_R11D_TO_PTR_R10 sub dword ptr [r10], r11d
#define SUB_R11D_TO_PTR_R11 sub dword ptr [r11], r11d
#define SUB_R11D_TO_PTR_R12 sub dword ptr [r12], r11d
#define SUB_R11D_TO_PTR_R13 sub dword ptr [r13], r11d
#define SUB_R11D_TO_PTR_R14 sub dword ptr [r14], r11d
#define SUB_R11D_TO_PTR_R15 sub dword ptr [r15], r11d
#define SUB_R11D_TO_PTR_EAX sub dword ptr [eax], r11d
#define SUB_R11D_TO_PTR_EBX sub dword ptr [ebx], r11d
#define SUB_R11D_TO_PTR_ECX sub dword ptr [ecx], r11d
#define SUB_R11D_TO_PTR_EDX sub dword ptr [edx], r11d
#define SUB_R11D_TO_PTR_EDI sub dword ptr [edi], r11d
#define SUB_R11D_TO_PTR_ESI sub dword ptr [esi], r11d
#define SUB_R11D_TO_PTR_EBP sub dword ptr [ebp], r11d
#define SUB_R11D_TO_PTR_ESP sub dword ptr [esp], r11d

#define SUB_R12D_TO_PTR_RAX sub dword ptr [rax], r12d
#define SUB_R12D_TO_PTR_RBX sub dword ptr [rbx], r12d
#define SUB_R12D_TO_PTR_RCX sub dword ptr [rcx], r12d
#define SUB_R12D_TO_PTR_RDX sub dword ptr [rdx], r12d
#define SUB_R12D_TO_PTR_RDI sub dword ptr [rdi], r12d
#define SUB_R12D_TO_PTR_RSI sub dword ptr [rsi], r12d
#define SUB_R12D_TO_PTR_RBP sub dword ptr [rbp], r12d
#define SUB_R12D_TO_PTR_RSP sub dword ptr [rsp], r12d
#define SUB_R12D_TO_PTR_R8 sub dword ptr [r8], r12d
#define SUB_R12D_TO_PTR_R9 sub dword ptr [r9], r12d
#define SUB_R12D_TO_PTR_R10 sub dword ptr [r10], r12d
#define SUB_R12D_TO_PTR_R11 sub dword ptr [r11], r12d
#define SUB_R12D_TO_PTR_R12 sub dword ptr [r12], r12d
#define SUB_R12D_TO_PTR_R13 sub dword ptr [r13], r12d
#define SUB_R12D_TO_PTR_R14 sub dword ptr [r14], r12d
#define SUB_R12D_TO_PTR_R15 sub dword ptr [r15], r12d
#define SUB_R12D_TO_PTR_EAX sub dword ptr [eax], r12d
#define SUB_R12D_TO_PTR_EBX sub dword ptr [ebx], r12d
#define SUB_R12D_TO_PTR_ECX sub dword ptr [ecx], r12d
#define SUB_R12D_TO_PTR_EDX sub dword ptr [edx], r12d
#define SUB_R12D_TO_PTR_EDI sub dword ptr [edi], r12d
#define SUB_R12D_TO_PTR_ESI sub dword ptr [esi], r12d
#define SUB_R12D_TO_PTR_EBP sub dword ptr [ebp], r12d
#define SUB_R12D_TO_PTR_ESP sub dword ptr [esp], r12d

#define SUB_R13D_TO_PTR_RAX sub dword ptr [rax], r13d
#define SUB_R13D_TO_PTR_RBX sub dword ptr [rbx], r13d
#define SUB_R13D_TO_PTR_RCX sub dword ptr [rcx], r13d
#define SUB_R13D_TO_PTR_RDX sub dword ptr [rdx], r13d
#define SUB_R13D_TO_PTR_RDI sub dword ptr [rdi], r13d
#define SUB_R13D_TO_PTR_RSI sub dword ptr [rsi], r13d
#define SUB_R13D_TO_PTR_RBP sub dword ptr [rbp], r13d
#define SUB_R13D_TO_PTR_RSP sub dword ptr [rsp], r13d
#define SUB_R13D_TO_PTR_R8 sub dword ptr [r8], r13d
#define SUB_R13D_TO_PTR_R9 sub dword ptr [r9], r13d
#define SUB_R13D_TO_PTR_R10 sub dword ptr [r10], r13d
#define SUB_R13D_TO_PTR_R11 sub dword ptr [r11], r13d
#define SUB_R13D_TO_PTR_R12 sub dword ptr [r12], r13d
#define SUB_R13D_TO_PTR_R13 sub dword ptr [r13], r13d
#define SUB_R13D_TO_PTR_R14 sub dword ptr [r14], r13d
#define SUB_R13D_TO_PTR_R15 sub dword ptr [r15], r13d
#define SUB_R13D_TO_PTR_EAX sub dword ptr [eax], r13d
#define SUB_R13D_TO_PTR_EBX sub dword ptr [ebx], r13d
#define SUB_R13D_TO_PTR_ECX sub dword ptr [ecx], r13d
#define SUB_R13D_TO_PTR_EDX sub dword ptr [edx], r13d
#define SUB_R13D_TO_PTR_EDI sub dword ptr [edi], r13d
#define SUB_R13D_TO_PTR_ESI sub dword ptr [esi], r13d
#define SUB_R13D_TO_PTR_EBP sub dword ptr [ebp], r13d
#define SUB_R13D_TO_PTR_ESP sub dword ptr [esp], r13d

#define SUB_R14D_TO_PTR_RAX sub dword ptr [rax], r14d
#define SUB_R14D_TO_PTR_RBX sub dword ptr [rbx], r14d
#define SUB_R14D_TO_PTR_RCX sub dword ptr [rcx], r14d
#define SUB_R14D_TO_PTR_RDX sub dword ptr [rdx], r14d
#define SUB_R14D_TO_PTR_RDI sub dword ptr [rdi], r14d
#define SUB_R14D_TO_PTR_RSI sub dword ptr [rsi], r14d
#define SUB_R14D_TO_PTR_RBP sub dword ptr [rbp], r14d
#define SUB_R14D_TO_PTR_RSP sub dword ptr [rsp], r14d
#define SUB_R14D_TO_PTR_R8 sub dword ptr [r8], r14d
#define SUB_R14D_TO_PTR_R9 sub dword ptr [r9], r14d
#define SUB_R14D_TO_PTR_R10 sub dword ptr [r10], r14d
#define SUB_R14D_TO_PTR_R11 sub dword ptr [r11], r14d
#define SUB_R14D_TO_PTR_R12 sub dword ptr [r12], r14d
#define SUB_R14D_TO_PTR_R13 sub dword ptr [r13], r14d
#define SUB_R14D_TO_PTR_R14 sub dword ptr [r14], r14d
#define SUB_R14D_TO_PTR_R15 sub dword ptr [r15], r14d
#define SUB_R14D_TO_PTR_EAX sub dword ptr [eax], r14d
#define SUB_R14D_TO_PTR_EBX sub dword ptr [ebx], r14d
#define SUB_R14D_TO_PTR_ECX sub dword ptr [ecx], r14d
#define SUB_R14D_TO_PTR_EDX sub dword ptr [edx], r14d
#define SUB_R14D_TO_PTR_EDI sub dword ptr [edi], r14d
#define SUB_R14D_TO_PTR_ESI sub dword ptr [esi], r14d
#define SUB_R14D_TO_PTR_EBP sub dword ptr [ebp], r14d
#define SUB_R14D_TO_PTR_ESP sub dword ptr [esp], r14d

#define SUB_R15D_TO_PTR_RAX sub dword ptr [rax], r15d
#define SUB_R15D_TO_PTR_RBX sub dword ptr [rbx], r15d
#define SUB_R15D_TO_PTR_RCX sub dword ptr [rcx], r15d
#define SUB_R15D_TO_PTR_RDX sub dword ptr [rdx], r15d
#define SUB_R15D_TO_PTR_RDI sub dword ptr [rdi], r15d
#define SUB_R15D_TO_PTR_RSI sub dword ptr [rsi], r15d
#define SUB_R15D_TO_PTR_RBP sub dword ptr [rbp], r15d
#define SUB_R15D_TO_PTR_RSP sub dword ptr [rsp], r15d
#define SUB_R15D_TO_PTR_R8 sub dword ptr [r8], r15d
#define SUB_R15D_TO_PTR_R9 sub dword ptr [r9], r15d
#define SUB_R15D_TO_PTR_R10 sub dword ptr [r10], r15d
#define SUB_R15D_TO_PTR_R11 sub dword ptr [r11], r15d
#define SUB_R15D_TO_PTR_R12 sub dword ptr [r12], r15d
#define SUB_R15D_TO_PTR_R13 sub dword ptr [r13], r15d
#define SUB_R15D_TO_PTR_R14 sub dword ptr [r14], r15d
#define SUB_R15D_TO_PTR_R15 sub dword ptr [r15], r15d
#define SUB_R15D_TO_PTR_EAX sub dword ptr [eax], r15d
#define SUB_R15D_TO_PTR_EBX sub dword ptr [ebx], r15d
#define SUB_R15D_TO_PTR_ECX sub dword ptr [ecx], r15d
#define SUB_R15D_TO_PTR_EDX sub dword ptr [edx], r15d
#define SUB_R15D_TO_PTR_EDI sub dword ptr [edi], r15d
#define SUB_R15D_TO_PTR_ESI sub dword ptr [esi], r15d
#define SUB_R15D_TO_PTR_EBP sub dword ptr [ebp], r15d
#define SUB_R15D_TO_PTR_ESP sub dword ptr [esp], r15d

#define SUB_EAX_FROM_PTR_RAX_(VALUE) sub eax, dword ptr [rax + VALUE]
#define SUB_EAX_FROM_PTR_RBX_(VALUE) sub eax, dword ptr [rbx + VALUE]
#define SUB_EAX_FROM_PTR_RCX_(VALUE) sub eax, dword ptr [rcx + VALUE]
#define SUB_EAX_FROM_PTR_RDX_(VALUE) sub eax, dword ptr [rdx + VALUE]
#define SUB_EAX_FROM_PTR_RDI_(VALUE) sub eax, dword ptr [rdi + VALUE]
#define SUB_EAX_FROM_PTR_RSI_(VALUE) sub eax, dword ptr [rsi + VALUE]
#define SUB_EAX_FROM_PTR_RBP_(VALUE) sub eax, dword ptr [rbp + VALUE]
#define SUB_EAX_FROM_PTR_RSP_(VALUE) sub eax, dword ptr [rsp + VALUE]
#define SUB_EAX_FROM_PTR_R8_(VALUE) sub eax, dword ptr [r8 + VALUE]
#define SUB_EAX_FROM_PTR_R9_(VALUE) sub eax, dword ptr [r9 + VALUE]
#define SUB_EAX_FROM_PTR_R10_(VALUE) sub eax, dword ptr [r10 + VALUE]
#define SUB_EAX_FROM_PTR_R11_(VALUE) sub eax, dword ptr [r11 + VALUE]
#define SUB_EAX_FROM_PTR_R12_(VALUE) sub eax, dword ptr [r12 + VALUE]
#define SUB_EAX_FROM_PTR_R13_(VALUE) sub eax, dword ptr [r13 + VALUE]
#define SUB_EAX_FROM_PTR_R14_(VALUE) sub eax, dword ptr [r14 + VALUE]
#define SUB_EAX_FROM_PTR_R15_(VALUE) sub eax, dword ptr [r15 + VALUE]
#define SUB_EAX_FROM_PTR_EAX_(VALUE) sub eax, dword ptr [eax + VALUE]
#define SUB_EAX_FROM_PTR_EBX_(VALUE) sub eax, dword ptr [ebx + VALUE]
#define SUB_EAX_FROM_PTR_ECX_(VALUE) sub eax, dword ptr [ecx + VALUE]
#define SUB_EAX_FROM_PTR_EDX_(VALUE) sub eax, dword ptr [edx + VALUE]
#define SUB_EAX_FROM_PTR_EDI_(VALUE) sub eax, dword ptr [edi + VALUE]
#define SUB_EAX_FROM_PTR_ESI_(VALUE) sub eax, dword ptr [esi + VALUE]
#define SUB_EAX_FROM_PTR_EBP_(VALUE) sub eax, dword ptr [ebp + VALUE]
#define SUB_EAX_FROM_PTR_ESP_(VALUE) sub eax, dword ptr [esp + VALUE]

#define SUB_EBX_FROM_PTR_RAX_(VALUE) sub ebx, dword ptr [rax + VALUE]
#define SUB_EBX_FROM_PTR_RBX_(VALUE) sub ebx, dword ptr [rbx + VALUE]
#define SUB_EBX_FROM_PTR_RCX_(VALUE) sub ebx, dword ptr [rcx + VALUE]
#define SUB_EBX_FROM_PTR_RDX_(VALUE) sub ebx, dword ptr [rdx + VALUE]
#define SUB_EBX_FROM_PTR_RDI_(VALUE) sub ebx, dword ptr [rdi + VALUE]
#define SUB_EBX_FROM_PTR_RSI_(VALUE) sub ebx, dword ptr [rsi + VALUE]
#define SUB_EBX_FROM_PTR_RBP_(VALUE) sub ebx, dword ptr [rbp + VALUE]
#define SUB_EBX_FROM_PTR_RSP_(VALUE) sub ebx, dword ptr [rsp + VALUE]
#define SUB_EBX_FROM_PTR_R8_(VALUE) sub ebx, dword ptr [r8 + VALUE]
#define SUB_EBX_FROM_PTR_R9_(VALUE) sub ebx, dword ptr [r9 + VALUE]
#define SUB_EBX_FROM_PTR_R10_(VALUE) sub ebx, dword ptr [r10 + VALUE]
#define SUB_EBX_FROM_PTR_R11_(VALUE) sub ebx, dword ptr [r11 + VALUE]
#define SUB_EBX_FROM_PTR_R12_(VALUE) sub ebx, dword ptr [r12 + VALUE]
#define SUB_EBX_FROM_PTR_R13_(VALUE) sub ebx, dword ptr [r13 + VALUE]
#define SUB_EBX_FROM_PTR_R14_(VALUE) sub ebx, dword ptr [r14 + VALUE]
#define SUB_EBX_FROM_PTR_R15_(VALUE) sub ebx, dword ptr [r15 + VALUE]
#define SUB_EBX_FROM_PTR_EAX_(VALUE) sub ebx, dword ptr [eax + VALUE]
#define SUB_EBX_FROM_PTR_EBX_(VALUE) sub ebx, dword ptr [ebx + VALUE]
#define SUB_EBX_FROM_PTR_ECX_(VALUE) sub ebx, dword ptr [ecx + VALUE]
#define SUB_EBX_FROM_PTR_EDX_(VALUE) sub ebx, dword ptr [edx + VALUE]
#define SUB_EBX_FROM_PTR_EDI_(VALUE) sub ebx, dword ptr [edi + VALUE]
#define SUB_EBX_FROM_PTR_ESI_(VALUE) sub ebx, dword ptr [esi + VALUE]
#define SUB_EBX_FROM_PTR_EBP_(VALUE) sub ebx, dword ptr [ebp + VALUE]
#define SUB_EBX_FROM_PTR_ESP_(VALUE) sub ebx, dword ptr [esp + VALUE]

#define SUB_ECX_FROM_PTR_RAX_(VALUE) sub ecx, dword ptr [rax + VALUE]
#define SUB_ECX_FROM_PTR_RBX_(VALUE) sub ecx, dword ptr [rbx + VALUE]
#define SUB_ECX_FROM_PTR_RCX_(VALUE) sub ecx, dword ptr [rcx + VALUE]
#define SUB_ECX_FROM_PTR_RDX_(VALUE) sub ecx, dword ptr [rdx + VALUE]
#define SUB_ECX_FROM_PTR_RDI_(VALUE) sub ecx, dword ptr [rdi + VALUE]
#define SUB_ECX_FROM_PTR_RSI_(VALUE) sub ecx, dword ptr [rsi + VALUE]
#define SUB_ECX_FROM_PTR_RBP_(VALUE) sub ecx, dword ptr [rbp + VALUE]
#define SUB_ECX_FROM_PTR_RSP_(VALUE) sub ecx, dword ptr [rsp + VALUE]
#define SUB_ECX_FROM_PTR_R8_(VALUE) sub ecx, dword ptr [r8 + VALUE]
#define SUB_ECX_FROM_PTR_R9_(VALUE) sub ecx, dword ptr [r9 + VALUE]
#define SUB_ECX_FROM_PTR_R10_(VALUE) sub ecx, dword ptr [r10 + VALUE]
#define SUB_ECX_FROM_PTR_R11_(VALUE) sub ecx, dword ptr [r11 + VALUE]
#define SUB_ECX_FROM_PTR_R12_(VALUE) sub ecx, dword ptr [r12 + VALUE]
#define SUB_ECX_FROM_PTR_R13_(VALUE) sub ecx, dword ptr [r13 + VALUE]
#define SUB_ECX_FROM_PTR_R14_(VALUE) sub ecx, dword ptr [r14 + VALUE]
#define SUB_ECX_FROM_PTR_R15_(VALUE) sub ecx, dword ptr [r15 + VALUE]
#define SUB_ECX_FROM_PTR_EAX_(VALUE) sub ecx, dword ptr [eax + VALUE]
#define SUB_ECX_FROM_PTR_EBX_(VALUE) sub ecx, dword ptr [ebx + VALUE]
#define SUB_ECX_FROM_PTR_ECX_(VALUE) sub ecx, dword ptr [ecx + VALUE]
#define SUB_ECX_FROM_PTR_EDX_(VALUE) sub ecx, dword ptr [edx + VALUE]
#define SUB_ECX_FROM_PTR_EDI_(VALUE) sub ecx, dword ptr [edi + VALUE]
#define SUB_ECX_FROM_PTR_ESI_(VALUE) sub ecx, dword ptr [esi + VALUE]
#define SUB_ECX_FROM_PTR_EBP_(VALUE) sub ecx, dword ptr [ebp + VALUE]
#define SUB_ECX_FROM_PTR_ESP_(VALUE) sub ecx, dword ptr [esp + VALUE]

#define SUB_EDX_FROM_PTR_RAX_(VALUE) sub edx, dword ptr [rax + VALUE]
#define SUB_EDX_FROM_PTR_RBX_(VALUE) sub edx, dword ptr [rbx + VALUE]
#define SUB_EDX_FROM_PTR_RCX_(VALUE) sub edx, dword ptr [rcx + VALUE]
#define SUB_EDX_FROM_PTR_RDX_(VALUE) sub edx, dword ptr [rdx + VALUE]
#define SUB_EDX_FROM_PTR_RDI_(VALUE) sub edx, dword ptr [rdi + VALUE]
#define SUB_EDX_FROM_PTR_RSI_(VALUE) sub edx, dword ptr [rsi + VALUE]
#define SUB_EDX_FROM_PTR_RBP_(VALUE) sub edx, dword ptr [rbp + VALUE]
#define SUB_EDX_FROM_PTR_RSP_(VALUE) sub edx, dword ptr [rsp + VALUE]
#define SUB_EDX_FROM_PTR_R8_(VALUE) sub edx, dword ptr [r8 + VALUE]
#define SUB_EDX_FROM_PTR_R9_(VALUE) sub edx, dword ptr [r9 + VALUE]
#define SUB_EDX_FROM_PTR_R10_(VALUE) sub edx, dword ptr [r10 + VALUE]
#define SUB_EDX_FROM_PTR_R11_(VALUE) sub edx, dword ptr [r11 + VALUE]
#define SUB_EDX_FROM_PTR_R12_(VALUE) sub edx, dword ptr [r12 + VALUE]
#define SUB_EDX_FROM_PTR_R13_(VALUE) sub edx, dword ptr [r13 + VALUE]
#define SUB_EDX_FROM_PTR_R14_(VALUE) sub edx, dword ptr [r14 + VALUE]
#define SUB_EDX_FROM_PTR_R15_(VALUE) sub edx, dword ptr [r15 + VALUE]
#define SUB_EDX_FROM_PTR_EAX_(VALUE) sub edx, dword ptr [eax + VALUE]
#define SUB_EDX_FROM_PTR_EBX_(VALUE) sub edx, dword ptr [ebx + VALUE]
#define SUB_EDX_FROM_PTR_ECX_(VALUE) sub edx, dword ptr [ecx + VALUE]
#define SUB_EDX_FROM_PTR_EDX_(VALUE) sub edx, dword ptr [edx + VALUE]
#define SUB_EDX_FROM_PTR_EDI_(VALUE) sub edx, dword ptr [edi + VALUE]
#define SUB_EDX_FROM_PTR_ESI_(VALUE) sub edx, dword ptr [esi + VALUE]
#define SUB_EDX_FROM_PTR_EBP_(VALUE) sub edx, dword ptr [ebp + VALUE]
#define SUB_EDX_FROM_PTR_ESP_(VALUE) sub edx, dword ptr [esp + VALUE]

#define SUB_EDI_FROM_PTR_RAX_(VALUE) sub edi, dword ptr [rax + VALUE]
#define SUB_EDI_FROM_PTR_RBX_(VALUE) sub edi, dword ptr [rbx + VALUE]
#define SUB_EDI_FROM_PTR_RCX_(VALUE) sub edi, dword ptr [rcx + VALUE]
#define SUB_EDI_FROM_PTR_RDX_(VALUE) sub edi, dword ptr [rdx + VALUE]
#define SUB_EDI_FROM_PTR_RDI_(VALUE) sub edi, dword ptr [rdi + VALUE]
#define SUB_EDI_FROM_PTR_RSI_(VALUE) sub edi, dword ptr [rsi + VALUE]
#define SUB_EDI_FROM_PTR_RBP_(VALUE) sub edi, dword ptr [rbp + VALUE]
#define SUB_EDI_FROM_PTR_RSP_(VALUE) sub edi, dword ptr [rsp + VALUE]
#define SUB_EDI_FROM_PTR_R8_(VALUE) sub edi, dword ptr [r8 + VALUE]
#define SUB_EDI_FROM_PTR_R9_(VALUE) sub edi, dword ptr [r9 + VALUE]
#define SUB_EDI_FROM_PTR_R10_(VALUE) sub edi, dword ptr [r10 + VALUE]
#define SUB_EDI_FROM_PTR_R11_(VALUE) sub edi, dword ptr [r11 + VALUE]
#define SUB_EDI_FROM_PTR_R12_(VALUE) sub edi, dword ptr [r12 + VALUE]
#define SUB_EDI_FROM_PTR_R13_(VALUE) sub edi, dword ptr [r13 + VALUE]
#define SUB_EDI_FROM_PTR_R14_(VALUE) sub edi, dword ptr [r14 + VALUE]
#define SUB_EDI_FROM_PTR_R15_(VALUE) sub edi, dword ptr [r15 + VALUE]
#define SUB_EDI_FROM_PTR_EAX_(VALUE) sub edi, dword ptr [eax + VALUE]
#define SUB_EDI_FROM_PTR_EBX_(VALUE) sub edi, dword ptr [ebx + VALUE]
#define SUB_EDI_FROM_PTR_ECX_(VALUE) sub edi, dword ptr [ecx + VALUE]
#define SUB_EDI_FROM_PTR_EDX_(VALUE) sub edi, dword ptr [edx + VALUE]
#define SUB_EDI_FROM_PTR_EDI_(VALUE) sub edi, dword ptr [edi + VALUE]
#define SUB_EDI_FROM_PTR_ESI_(VALUE) sub edi, dword ptr [esi + VALUE]
#define SUB_EDI_FROM_PTR_EBP_(VALUE) sub edi, dword ptr [ebp + VALUE]
#define SUB_EDI_FROM_PTR_ESP_(VALUE) sub edi, dword ptr [esp + VALUE]

#define SUB_ESI_FROM_PTR_RAX_(VALUE) sub esi, dword ptr [rax + VALUE]
#define SUB_ESI_FROM_PTR_RBX_(VALUE) sub esi, dword ptr [rbx + VALUE]
#define SUB_ESI_FROM_PTR_RCX_(VALUE) sub esi, dword ptr [rcx + VALUE]
#define SUB_ESI_FROM_PTR_RDX_(VALUE) sub esi, dword ptr [rdx + VALUE]
#define SUB_ESI_FROM_PTR_RDI_(VALUE) sub esi, dword ptr [rdi + VALUE]
#define SUB_ESI_FROM_PTR_RSI_(VALUE) sub esi, dword ptr [rsi + VALUE]
#define SUB_ESI_FROM_PTR_RBP_(VALUE) sub esi, dword ptr [rbp + VALUE]
#define SUB_ESI_FROM_PTR_RSP_(VALUE) sub esi, dword ptr [rsp + VALUE]
#define SUB_ESI_FROM_PTR_R8_(VALUE) sub esi, dword ptr [r8 + VALUE]
#define SUB_ESI_FROM_PTR_R9_(VALUE) sub esi, dword ptr [r9 + VALUE]
#define SUB_ESI_FROM_PTR_R10_(VALUE) sub esi, dword ptr [r10 + VALUE]
#define SUB_ESI_FROM_PTR_R11_(VALUE) sub esi, dword ptr [r11 + VALUE]
#define SUB_ESI_FROM_PTR_R12_(VALUE) sub esi, dword ptr [r12 + VALUE]
#define SUB_ESI_FROM_PTR_R13_(VALUE) sub esi, dword ptr [r13 + VALUE]
#define SUB_ESI_FROM_PTR_R14_(VALUE) sub esi, dword ptr [r14 + VALUE]
#define SUB_ESI_FROM_PTR_R15_(VALUE) sub esi, dword ptr [r15 + VALUE]
#define SUB_ESI_FROM_PTR_EAX_(VALUE) sub esi, dword ptr [eax + VALUE]
#define SUB_ESI_FROM_PTR_EBX_(VALUE) sub esi, dword ptr [ebx + VALUE]
#define SUB_ESI_FROM_PTR_ECX_(VALUE) sub esi, dword ptr [ecx + VALUE]
#define SUB_ESI_FROM_PTR_EDX_(VALUE) sub esi, dword ptr [edx + VALUE]
#define SUB_ESI_FROM_PTR_EDI_(VALUE) sub esi, dword ptr [edi + VALUE]
#define SUB_ESI_FROM_PTR_ESI_(VALUE) sub esi, dword ptr [esi + VALUE]
#define SUB_ESI_FROM_PTR_EBP_(VALUE) sub esi, dword ptr [ebp + VALUE]
#define SUB_ESI_FROM_PTR_ESP_(VALUE) sub esi, dword ptr [esp + VALUE]

#define SUB_EBP_FROM_PTR_RAX_(VALUE) sub ebp, dword ptr [rax + VALUE]
#define SUB_EBP_FROM_PTR_RBX_(VALUE) sub ebp, dword ptr [rbx + VALUE]
#define SUB_EBP_FROM_PTR_RCX_(VALUE) sub ebp, dword ptr [rcx + VALUE]
#define SUB_EBP_FROM_PTR_RDX_(VALUE) sub ebp, dword ptr [rdx + VALUE]
#define SUB_EBP_FROM_PTR_RDI_(VALUE) sub ebp, dword ptr [rdi + VALUE]
#define SUB_EBP_FROM_PTR_RSI_(VALUE) sub ebp, dword ptr [rsi + VALUE]
#define SUB_EBP_FROM_PTR_RBP_(VALUE) sub ebp, dword ptr [rbp + VALUE]
#define SUB_EBP_FROM_PTR_RSP_(VALUE) sub ebp, dword ptr [rsp + VALUE]
#define SUB_EBP_FROM_PTR_R8_(VALUE) sub ebp, dword ptr [r8 + VALUE]
#define SUB_EBP_FROM_PTR_R9_(VALUE) sub ebp, dword ptr [r9 + VALUE]
#define SUB_EBP_FROM_PTR_R10_(VALUE) sub ebp, dword ptr [r10 + VALUE]
#define SUB_EBP_FROM_PTR_R11_(VALUE) sub ebp, dword ptr [r11 + VALUE]
#define SUB_EBP_FROM_PTR_R12_(VALUE) sub ebp, dword ptr [r12 + VALUE]
#define SUB_EBP_FROM_PTR_R13_(VALUE) sub ebp, dword ptr [r13 + VALUE]
#define SUB_EBP_FROM_PTR_R14_(VALUE) sub ebp, dword ptr [r14 + VALUE]
#define SUB_EBP_FROM_PTR_R15_(VALUE) sub ebp, dword ptr [r15 + VALUE]
#define SUB_EBP_FROM_PTR_EAX_(VALUE) sub ebp, dword ptr [eax + VALUE]
#define SUB_EBP_FROM_PTR_EBX_(VALUE) sub ebp, dword ptr [ebx + VALUE]
#define SUB_EBP_FROM_PTR_ECX_(VALUE) sub ebp, dword ptr [ecx + VALUE]
#define SUB_EBP_FROM_PTR_EDX_(VALUE) sub ebp, dword ptr [edx + VALUE]
#define SUB_EBP_FROM_PTR_EDI_(VALUE) sub ebp, dword ptr [edi + VALUE]
#define SUB_EBP_FROM_PTR_ESI_(VALUE) sub ebp, dword ptr [esi + VALUE]
#define SUB_EBP_FROM_PTR_EBP_(VALUE) sub ebp, dword ptr [ebp + VALUE]
#define SUB_EBP_FROM_PTR_ESP_(VALUE) sub ebp, dword ptr [esp + VALUE]

#define SUB_ESP_FROM_PTR_RAX_(VALUE) sub esp, dword ptr [rax + VALUE]
#define SUB_ESP_FROM_PTR_RBX_(VALUE) sub esp, dword ptr [rbx + VALUE]
#define SUB_ESP_FROM_PTR_RCX_(VALUE) sub esp, dword ptr [rcx + VALUE]
#define SUB_ESP_FROM_PTR_RDX_(VALUE) sub esp, dword ptr [rdx + VALUE]
#define SUB_ESP_FROM_PTR_RDI_(VALUE) sub esp, dword ptr [rdi + VALUE]
#define SUB_ESP_FROM_PTR_RSI_(VALUE) sub esp, dword ptr [rsi + VALUE]
#define SUB_ESP_FROM_PTR_RBP_(VALUE) sub esp, dword ptr [rbp + VALUE]
#define SUB_ESP_FROM_PTR_RSP_(VALUE) sub esp, dword ptr [rsp + VALUE]
#define SUB_ESP_FROM_PTR_R8_(VALUE) sub esp, dword ptr [r8 + VALUE]
#define SUB_ESP_FROM_PTR_R9_(VALUE) sub esp, dword ptr [r9 + VALUE]
#define SUB_ESP_FROM_PTR_R10_(VALUE) sub esp, dword ptr [r10 + VALUE]
#define SUB_ESP_FROM_PTR_R11_(VALUE) sub esp, dword ptr [r11 + VALUE]
#define SUB_ESP_FROM_PTR_R12_(VALUE) sub esp, dword ptr [r12 + VALUE]
#define SUB_ESP_FROM_PTR_R13_(VALUE) sub esp, dword ptr [r13 + VALUE]
#define SUB_ESP_FROM_PTR_R14_(VALUE) sub esp, dword ptr [r14 + VALUE]
#define SUB_ESP_FROM_PTR_R15_(VALUE) sub esp, dword ptr [r15 + VALUE]
#define SUB_ESP_FROM_PTR_EAX_(VALUE) sub esp, dword ptr [eax + VALUE]
#define SUB_ESP_FROM_PTR_EBX_(VALUE) sub esp, dword ptr [ebx + VALUE]
#define SUB_ESP_FROM_PTR_ECX_(VALUE) sub esp, dword ptr [ecx + VALUE]
#define SUB_ESP_FROM_PTR_EDX_(VALUE) sub esp, dword ptr [edx + VALUE]
#define SUB_ESP_FROM_PTR_EDI_(VALUE) sub esp, dword ptr [edi + VALUE]
#define SUB_ESP_FROM_PTR_ESI_(VALUE) sub esp, dword ptr [esi + VALUE]
#define SUB_ESP_FROM_PTR_EBP_(VALUE) sub esp, dword ptr [ebp + VALUE]
#define SUB_ESP_FROM_PTR_ESP_(VALUE) sub esp, dword ptr [esp + VALUE]

#define SUB_R8D_FROM_PTR_RAX_(VALUE) sub r8d, dword ptr [rax + VALUE]
#define SUB_R8D_FROM_PTR_RBX_(VALUE) sub r8d, dword ptr [rbx + VALUE]
#define SUB_R8D_FROM_PTR_RCX_(VALUE) sub r8d, dword ptr [rcx + VALUE]
#define SUB_R8D_FROM_PTR_RDX_(VALUE) sub r8d, dword ptr [rdx + VALUE]
#define SUB_R8D_FROM_PTR_RDI_(VALUE) sub r8d, dword ptr [rdi + VALUE]
#define SUB_R8D_FROM_PTR_RSI_(VALUE) sub r8d, dword ptr [rsi + VALUE]
#define SUB_R8D_FROM_PTR_RBP_(VALUE) sub r8d, dword ptr [rbp + VALUE]
#define SUB_R8D_FROM_PTR_RSP_(VALUE) sub r8d, dword ptr [rsp + VALUE]
#define SUB_R8D_FROM_PTR_R8_(VALUE) sub r8d, dword ptr [r8 + VALUE]
#define SUB_R8D_FROM_PTR_R9_(VALUE) sub r8d, dword ptr [r9 + VALUE]
#define SUB_R8D_FROM_PTR_R10_(VALUE) sub r8d, dword ptr [r10 + VALUE]
#define SUB_R8D_FROM_PTR_R11_(VALUE) sub r8d, dword ptr [r11 + VALUE]
#define SUB_R8D_FROM_PTR_R12_(VALUE) sub r8d, dword ptr [r12 + VALUE]
#define SUB_R8D_FROM_PTR_R13_(VALUE) sub r8d, dword ptr [r13 + VALUE]
#define SUB_R8D_FROM_PTR_R14_(VALUE) sub r8d, dword ptr [r14 + VALUE]
#define SUB_R8D_FROM_PTR_R15_(VALUE) sub r8d, dword ptr [r15 + VALUE]
#define SUB_R8D_FROM_PTR_EAX_(VALUE) sub r8d, dword ptr [eax + VALUE]
#define SUB_R8D_FROM_PTR_EBX_(VALUE) sub r8d, dword ptr [ebx + VALUE]
#define SUB_R8D_FROM_PTR_ECX_(VALUE) sub r8d, dword ptr [ecx + VALUE]
#define SUB_R8D_FROM_PTR_EDX_(VALUE) sub r8d, dword ptr [edx + VALUE]
#define SUB_R8D_FROM_PTR_EDI_(VALUE) sub r8d, dword ptr [edi + VALUE]
#define SUB_R8D_FROM_PTR_ESI_(VALUE) sub r8d, dword ptr [esi + VALUE]
#define SUB_R8D_FROM_PTR_EBP_(VALUE) sub r8d, dword ptr [ebp + VALUE]
#define SUB_R8D_FROM_PTR_ESP_(VALUE) sub r8d, dword ptr [esp + VALUE]

#define SUB_R9D_FROM_PTR_RAX_(VALUE) sub r9d, dword ptr [rax + VALUE]
#define SUB_R9D_FROM_PTR_RBX_(VALUE) sub r9d, dword ptr [rbx + VALUE]
#define SUB_R9D_FROM_PTR_RCX_(VALUE) sub r9d, dword ptr [rcx + VALUE]
#define SUB_R9D_FROM_PTR_RDX_(VALUE) sub r9d, dword ptr [rdx + VALUE]
#define SUB_R9D_FROM_PTR_RDI_(VALUE) sub r9d, dword ptr [rdi + VALUE]
#define SUB_R9D_FROM_PTR_RSI_(VALUE) sub r9d, dword ptr [rsi + VALUE]
#define SUB_R9D_FROM_PTR_RBP_(VALUE) sub r9d, dword ptr [rbp + VALUE]
#define SUB_R9D_FROM_PTR_RSP_(VALUE) sub r9d, dword ptr [rsp + VALUE]
#define SUB_R9D_FROM_PTR_R8_(VALUE) sub r9d, dword ptr [r8 + VALUE]
#define SUB_R9D_FROM_PTR_R9_(VALUE) sub r9d, dword ptr [r9 + VALUE]
#define SUB_R9D_FROM_PTR_R10_(VALUE) sub r9d, dword ptr [r10 + VALUE]
#define SUB_R9D_FROM_PTR_R11_(VALUE) sub r9d, dword ptr [r11 + VALUE]
#define SUB_R9D_FROM_PTR_R12_(VALUE) sub r9d, dword ptr [r12 + VALUE]
#define SUB_R9D_FROM_PTR_R13_(VALUE) sub r9d, dword ptr [r13 + VALUE]
#define SUB_R9D_FROM_PTR_R14_(VALUE) sub r9d, dword ptr [r14 + VALUE]
#define SUB_R9D_FROM_PTR_R15_(VALUE) sub r9d, dword ptr [r15 + VALUE]
#define SUB_R9D_FROM_PTR_EAX_(VALUE) sub r9d, dword ptr [eax + VALUE]
#define SUB_R9D_FROM_PTR_EBX_(VALUE) sub r9d, dword ptr [ebx + VALUE]
#define SUB_R9D_FROM_PTR_ECX_(VALUE) sub r9d, dword ptr [ecx + VALUE]
#define SUB_R9D_FROM_PTR_EDX_(VALUE) sub r9d, dword ptr [edx + VALUE]
#define SUB_R9D_FROM_PTR_EDI_(VALUE) sub r9d, dword ptr [edi + VALUE]
#define SUB_R9D_FROM_PTR_ESI_(VALUE) sub r9d, dword ptr [esi + VALUE]
#define SUB_R9D_FROM_PTR_EBP_(VALUE) sub r9d, dword ptr [ebp + VALUE]
#define SUB_R9D_FROM_PTR_ESP_(VALUE) sub r9d, dword ptr [esp + VALUE]

#define SUB_R10D_FROM_PTR_RAX_(VALUE) sub r10d, dword ptr [rax + VALUE]
#define SUB_R10D_FROM_PTR_RBX_(VALUE) sub r10d, dword ptr [rbx + VALUE]
#define SUB_R10D_FROM_PTR_RCX_(VALUE) sub r10d, dword ptr [rcx + VALUE]
#define SUB_R10D_FROM_PTR_RDX_(VALUE) sub r10d, dword ptr [rdx + VALUE]
#define SUB_R10D_FROM_PTR_RDI_(VALUE) sub r10d, dword ptr [rdi + VALUE]
#define SUB_R10D_FROM_PTR_RSI_(VALUE) sub r10d, dword ptr [rsi + VALUE]
#define SUB_R10D_FROM_PTR_RBP_(VALUE) sub r10d, dword ptr [rbp + VALUE]
#define SUB_R10D_FROM_PTR_RSP_(VALUE) sub r10d, dword ptr [rsp + VALUE]
#define SUB_R10D_FROM_PTR_R8_(VALUE) sub r10d, dword ptr [r8 + VALUE]
#define SUB_R10D_FROM_PTR_R9_(VALUE) sub r10d, dword ptr [r9 + VALUE]
#define SUB_R10D_FROM_PTR_R10_(VALUE) sub r10d, dword ptr [r10 + VALUE]
#define SUB_R10D_FROM_PTR_R11_(VALUE) sub r10d, dword ptr [r11 + VALUE]
#define SUB_R10D_FROM_PTR_R12_(VALUE) sub r10d, dword ptr [r12 + VALUE]
#define SUB_R10D_FROM_PTR_R13_(VALUE) sub r10d, dword ptr [r13 + VALUE]
#define SUB_R10D_FROM_PTR_R14_(VALUE) sub r10d, dword ptr [r14 + VALUE]
#define SUB_R10D_FROM_PTR_R15_(VALUE) sub r10d, dword ptr [r15 + VALUE]
#define SUB_R10D_FROM_PTR_EAX_(VALUE) sub r10d, dword ptr [eax + VALUE]
#define SUB_R10D_FROM_PTR_EBX_(VALUE) sub r10d, dword ptr [ebx + VALUE]
#define SUB_R10D_FROM_PTR_ECX_(VALUE) sub r10d, dword ptr [ecx + VALUE]
#define SUB_R10D_FROM_PTR_EDX_(VALUE) sub r10d, dword ptr [edx + VALUE]
#define SUB_R10D_FROM_PTR_EDI_(VALUE) sub r10d, dword ptr [edi + VALUE]
#define SUB_R10D_FROM_PTR_ESI_(VALUE) sub r10d, dword ptr [esi + VALUE]
#define SUB_R10D_FROM_PTR_EBP_(VALUE) sub r10d, dword ptr [ebp + VALUE]
#define SUB_R10D_FROM_PTR_ESP_(VALUE) sub r10d, dword ptr [esp + VALUE]

#define SUB_R11D_FROM_PTR_RAX_(VALUE) sub r11d, dword ptr [rax + VALUE]
#define SUB_R11D_FROM_PTR_RBX_(VALUE) sub r11d, dword ptr [rbx + VALUE]
#define SUB_R11D_FROM_PTR_RCX_(VALUE) sub r11d, dword ptr [rcx + VALUE]
#define SUB_R11D_FROM_PTR_RDX_(VALUE) sub r11d, dword ptr [rdx + VALUE]
#define SUB_R11D_FROM_PTR_RDI_(VALUE) sub r11d, dword ptr [rdi + VALUE]
#define SUB_R11D_FROM_PTR_RSI_(VALUE) sub r11d, dword ptr [rsi + VALUE]
#define SUB_R11D_FROM_PTR_RBP_(VALUE) sub r11d, dword ptr [rbp + VALUE]
#define SUB_R11D_FROM_PTR_RSP_(VALUE) sub r11d, dword ptr [rsp + VALUE]
#define SUB_R11D_FROM_PTR_R8_(VALUE) sub r11d, dword ptr [r8 + VALUE]
#define SUB_R11D_FROM_PTR_R9_(VALUE) sub r11d, dword ptr [r9 + VALUE]
#define SUB_R11D_FROM_PTR_R10_(VALUE) sub r11d, dword ptr [r10 + VALUE]
#define SUB_R11D_FROM_PTR_R11_(VALUE) sub r11d, dword ptr [r11 + VALUE]
#define SUB_R11D_FROM_PTR_R12_(VALUE) sub r11d, dword ptr [r12 + VALUE]
#define SUB_R11D_FROM_PTR_R13_(VALUE) sub r11d, dword ptr [r13 + VALUE]
#define SUB_R11D_FROM_PTR_R14_(VALUE) sub r11d, dword ptr [r14 + VALUE]
#define SUB_R11D_FROM_PTR_R15_(VALUE) sub r11d, dword ptr [r15 + VALUE]
#define SUB_R11D_FROM_PTR_EAX_(VALUE) sub r11d, dword ptr [eax + VALUE]
#define SUB_R11D_FROM_PTR_EBX_(VALUE) sub r11d, dword ptr [ebx + VALUE]
#define SUB_R11D_FROM_PTR_ECX_(VALUE) sub r11d, dword ptr [ecx + VALUE]
#define SUB_R11D_FROM_PTR_EDX_(VALUE) sub r11d, dword ptr [edx + VALUE]
#define SUB_R11D_FROM_PTR_EDI_(VALUE) sub r11d, dword ptr [edi + VALUE]
#define SUB_R11D_FROM_PTR_ESI_(VALUE) sub r11d, dword ptr [esi + VALUE]
#define SUB_R11D_FROM_PTR_EBP_(VALUE) sub r11d, dword ptr [ebp + VALUE]
#define SUB_R11D_FROM_PTR_ESP_(VALUE) sub r11d, dword ptr [esp + VALUE]

#define SUB_R12D_FROM_PTR_RAX_(VALUE) sub r12d, dword ptr [rax + VALUE]
#define SUB_R12D_FROM_PTR_RBX_(VALUE) sub r12d, dword ptr [rbx + VALUE]
#define SUB_R12D_FROM_PTR_RCX_(VALUE) sub r12d, dword ptr [rcx + VALUE]
#define SUB_R12D_FROM_PTR_RDX_(VALUE) sub r12d, dword ptr [rdx + VALUE]
#define SUB_R12D_FROM_PTR_RDI_(VALUE) sub r12d, dword ptr [rdi + VALUE]
#define SUB_R12D_FROM_PTR_RSI_(VALUE) sub r12d, dword ptr [rsi + VALUE]
#define SUB_R12D_FROM_PTR_RBP_(VALUE) sub r12d, dword ptr [rbp + VALUE]
#define SUB_R12D_FROM_PTR_RSP_(VALUE) sub r12d, dword ptr [rsp + VALUE]
#define SUB_R12D_FROM_PTR_R8_(VALUE) sub r12d, dword ptr [r8 + VALUE]
#define SUB_R12D_FROM_PTR_R9_(VALUE) sub r12d, dword ptr [r9 + VALUE]
#define SUB_R12D_FROM_PTR_R10_(VALUE) sub r12d, dword ptr [r10 + VALUE]
#define SUB_R12D_FROM_PTR_R11_(VALUE) sub r12d, dword ptr [r11 + VALUE]
#define SUB_R12D_FROM_PTR_R12_(VALUE) sub r12d, dword ptr [r12 + VALUE]
#define SUB_R12D_FROM_PTR_R13_(VALUE) sub r12d, dword ptr [r13 + VALUE]
#define SUB_R12D_FROM_PTR_R14_(VALUE) sub r12d, dword ptr [r14 + VALUE]
#define SUB_R12D_FROM_PTR_R15_(VALUE) sub r12d, dword ptr [r15 + VALUE]
#define SUB_R12D_FROM_PTR_EAX_(VALUE) sub r12d, dword ptr [eax + VALUE]
#define SUB_R12D_FROM_PTR_EBX_(VALUE) sub r12d, dword ptr [ebx + VALUE]
#define SUB_R12D_FROM_PTR_ECX_(VALUE) sub r12d, dword ptr [ecx + VALUE]
#define SUB_R12D_FROM_PTR_EDX_(VALUE) sub r12d, dword ptr [edx + VALUE]
#define SUB_R12D_FROM_PTR_EDI_(VALUE) sub r12d, dword ptr [edi + VALUE]
#define SUB_R12D_FROM_PTR_ESI_(VALUE) sub r12d, dword ptr [esi + VALUE]
#define SUB_R12D_FROM_PTR_EBP_(VALUE) sub r12d, dword ptr [ebp + VALUE]
#define SUB_R12D_FROM_PTR_ESP_(VALUE) sub r12d, dword ptr [esp + VALUE]

#define SUB_R13D_FROM_PTR_RAX_(VALUE) sub r13d, dword ptr [rax + VALUE]
#define SUB_R13D_FROM_PTR_RBX_(VALUE) sub r13d, dword ptr [rbx + VALUE]
#define SUB_R13D_FROM_PTR_RCX_(VALUE) sub r13d, dword ptr [rcx + VALUE]
#define SUB_R13D_FROM_PTR_RDX_(VALUE) sub r13d, dword ptr [rdx + VALUE]
#define SUB_R13D_FROM_PTR_RDI_(VALUE) sub r13d, dword ptr [rdi + VALUE]
#define SUB_R13D_FROM_PTR_RSI_(VALUE) sub r13d, dword ptr [rsi + VALUE]
#define SUB_R13D_FROM_PTR_RBP_(VALUE) sub r13d, dword ptr [rbp + VALUE]
#define SUB_R13D_FROM_PTR_RSP_(VALUE) sub r13d, dword ptr [rsp + VALUE]
#define SUB_R13D_FROM_PTR_R8_(VALUE) sub r13d, dword ptr [r8 + VALUE]
#define SUB_R13D_FROM_PTR_R9_(VALUE) sub r13d, dword ptr [r9 + VALUE]
#define SUB_R13D_FROM_PTR_R10_(VALUE) sub r13d, dword ptr [r10 + VALUE]
#define SUB_R13D_FROM_PTR_R11_(VALUE) sub r13d, dword ptr [r11 + VALUE]
#define SUB_R13D_FROM_PTR_R12_(VALUE) sub r13d, dword ptr [r12 + VALUE]
#define SUB_R13D_FROM_PTR_R13_(VALUE) sub r13d, dword ptr [r13 + VALUE]
#define SUB_R13D_FROM_PTR_R14_(VALUE) sub r13d, dword ptr [r14 + VALUE]
#define SUB_R13D_FROM_PTR_R15_(VALUE) sub r13d, dword ptr [r15 + VALUE]
#define SUB_R13D_FROM_PTR_EAX_(VALUE) sub r13d, dword ptr [eax + VALUE]
#define SUB_R13D_FROM_PTR_EBX_(VALUE) sub r13d, dword ptr [ebx + VALUE]
#define SUB_R13D_FROM_PTR_ECX_(VALUE) sub r13d, dword ptr [ecx + VALUE]
#define SUB_R13D_FROM_PTR_EDX_(VALUE) sub r13d, dword ptr [edx + VALUE]
#define SUB_R13D_FROM_PTR_EDI_(VALUE) sub r13d, dword ptr [edi + VALUE]
#define SUB_R13D_FROM_PTR_ESI_(VALUE) sub r13d, dword ptr [esi + VALUE]
#define SUB_R13D_FROM_PTR_EBP_(VALUE) sub r13d, dword ptr [ebp + VALUE]
#define SUB_R13D_FROM_PTR_ESP_(VALUE) sub r13d, dword ptr [esp + VALUE]

#define SUB_R14D_FROM_PTR_RAX_(VALUE) sub r14d, dword ptr [rax + VALUE]
#define SUB_R14D_FROM_PTR_RBX_(VALUE) sub r14d, dword ptr [rbx + VALUE]
#define SUB_R14D_FROM_PTR_RCX_(VALUE) sub r14d, dword ptr [rcx + VALUE]
#define SUB_R14D_FROM_PTR_RDX_(VALUE) sub r14d, dword ptr [rdx + VALUE]
#define SUB_R14D_FROM_PTR_RDI_(VALUE) sub r14d, dword ptr [rdi + VALUE]
#define SUB_R14D_FROM_PTR_RSI_(VALUE) sub r14d, dword ptr [rsi + VALUE]
#define SUB_R14D_FROM_PTR_RBP_(VALUE) sub r14d, dword ptr [rbp + VALUE]
#define SUB_R14D_FROM_PTR_RSP_(VALUE) sub r14d, dword ptr [rsp + VALUE]
#define SUB_R14D_FROM_PTR_R8_(VALUE) sub r14d, dword ptr [r8 + VALUE]
#define SUB_R14D_FROM_PTR_R9_(VALUE) sub r14d, dword ptr [r9 + VALUE]
#define SUB_R14D_FROM_PTR_R10_(VALUE) sub r14d, dword ptr [r10 + VALUE]
#define SUB_R14D_FROM_PTR_R11_(VALUE) sub r14d, dword ptr [r11 + VALUE]
#define SUB_R14D_FROM_PTR_R12_(VALUE) sub r14d, dword ptr [r12 + VALUE]
#define SUB_R14D_FROM_PTR_R13_(VALUE) sub r14d, dword ptr [r13 + VALUE]
#define SUB_R14D_FROM_PTR_R14_(VALUE) sub r14d, dword ptr [r14 + VALUE]
#define SUB_R14D_FROM_PTR_R15_(VALUE) sub r14d, dword ptr [r15 + VALUE]
#define SUB_R14D_FROM_PTR_EAX_(VALUE) sub r14d, dword ptr [eax + VALUE]
#define SUB_R14D_FROM_PTR_EBX_(VALUE) sub r14d, dword ptr [ebx + VALUE]
#define SUB_R14D_FROM_PTR_ECX_(VALUE) sub r14d, dword ptr [ecx + VALUE]
#define SUB_R14D_FROM_PTR_EDX_(VALUE) sub r14d, dword ptr [edx + VALUE]
#define SUB_R14D_FROM_PTR_EDI_(VALUE) sub r14d, dword ptr [edi + VALUE]
#define SUB_R14D_FROM_PTR_ESI_(VALUE) sub r14d, dword ptr [esi + VALUE]
#define SUB_R14D_FROM_PTR_EBP_(VALUE) sub r14d, dword ptr [ebp + VALUE]
#define SUB_R14D_FROM_PTR_ESP_(VALUE) sub r14d, dword ptr [esp + VALUE]

#define SUB_R15D_FROM_PTR_RAX_(VALUE) sub r15d, dword ptr [rax + VALUE]
#define SUB_R15D_FROM_PTR_RBX_(VALUE) sub r15d, dword ptr [rbx + VALUE]
#define SUB_R15D_FROM_PTR_RCX_(VALUE) sub r15d, dword ptr [rcx + VALUE]
#define SUB_R15D_FROM_PTR_RDX_(VALUE) sub r15d, dword ptr [rdx + VALUE]
#define SUB_R15D_FROM_PTR_RDI_(VALUE) sub r15d, dword ptr [rdi + VALUE]
#define SUB_R15D_FROM_PTR_RSI_(VALUE) sub r15d, dword ptr [rsi + VALUE]
#define SUB_R15D_FROM_PTR_RBP_(VALUE) sub r15d, dword ptr [rbp + VALUE]
#define SUB_R15D_FROM_PTR_RSP_(VALUE) sub r15d, dword ptr [rsp + VALUE]
#define SUB_R15D_FROM_PTR_R8_(VALUE) sub r15d, dword ptr [r8 + VALUE]
#define SUB_R15D_FROM_PTR_R9_(VALUE) sub r15d, dword ptr [r9 + VALUE]
#define SUB_R15D_FROM_PTR_R10_(VALUE) sub r15d, dword ptr [r10 + VALUE]
#define SUB_R15D_FROM_PTR_R11_(VALUE) sub r15d, dword ptr [r11 + VALUE]
#define SUB_R15D_FROM_PTR_R12_(VALUE) sub r15d, dword ptr [r12 + VALUE]
#define SUB_R15D_FROM_PTR_R13_(VALUE) sub r15d, dword ptr [r13 + VALUE]
#define SUB_R15D_FROM_PTR_R14_(VALUE) sub r15d, dword ptr [r14 + VALUE]
#define SUB_R15D_FROM_PTR_R15_(VALUE) sub r15d, dword ptr [r15 + VALUE]
#define SUB_R15D_FROM_PTR_EAX_(VALUE) sub r15d, dword ptr [eax + VALUE]
#define SUB_R15D_FROM_PTR_EBX_(VALUE) sub r15d, dword ptr [ebx + VALUE]
#define SUB_R15D_FROM_PTR_ECX_(VALUE) sub r15d, dword ptr [ecx + VALUE]
#define SUB_R15D_FROM_PTR_EDX_(VALUE) sub r15d, dword ptr [edx + VALUE]
#define SUB_R15D_FROM_PTR_EDI_(VALUE) sub r15d, dword ptr [edi + VALUE]
#define SUB_R15D_FROM_PTR_ESI_(VALUE) sub r15d, dword ptr [esi + VALUE]
#define SUB_R15D_FROM_PTR_EBP_(VALUE) sub r15d, dword ptr [ebp + VALUE]
#define SUB_R15D_FROM_PTR_ESP_(VALUE) sub r15d, dword ptr [esp + VALUE]

#define SUB_EAX_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], eax
#define SUB_EAX_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], eax
#define SUB_EAX_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], eax
#define SUB_EAX_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], eax
#define SUB_EAX_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], eax
#define SUB_EAX_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], eax
#define SUB_EAX_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], eax
#define SUB_EAX_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], eax
#define SUB_EAX_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], eax
#define SUB_EAX_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], eax
#define SUB_EAX_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], eax
#define SUB_EAX_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], eax
#define SUB_EAX_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], eax
#define SUB_EAX_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], eax
#define SUB_EAX_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], eax
#define SUB_EAX_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], eax
#define SUB_EAX_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], eax
#define SUB_EAX_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], eax
#define SUB_EAX_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], eax
#define SUB_EAX_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], eax
#define SUB_EAX_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], eax
#define SUB_EAX_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], eax
#define SUB_EAX_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], eax
#define SUB_EAX_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], eax

#define SUB_EBX_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], ebx
#define SUB_EBX_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], ebx
#define SUB_EBX_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], ebx
#define SUB_EBX_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], ebx
#define SUB_EBX_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], ebx
#define SUB_EBX_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], ebx
#define SUB_EBX_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], ebx
#define SUB_EBX_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], ebx
#define SUB_EBX_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], ebx
#define SUB_EBX_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], ebx
#define SUB_EBX_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], ebx
#define SUB_EBX_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], ebx
#define SUB_EBX_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], ebx
#define SUB_EBX_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], ebx
#define SUB_EBX_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], ebx
#define SUB_EBX_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], ebx
#define SUB_EBX_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], ebx
#define SUB_EBX_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], ebx
#define SUB_EBX_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], ebx
#define SUB_EBX_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], ebx
#define SUB_EBX_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], ebx
#define SUB_EBX_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], ebx
#define SUB_EBX_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], ebx
#define SUB_EBX_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], ebx

#define SUB_ECX_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], ecx
#define SUB_ECX_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], ecx
#define SUB_ECX_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], ecx
#define SUB_ECX_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], ecx
#define SUB_ECX_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], ecx
#define SUB_ECX_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], ecx
#define SUB_ECX_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], ecx
#define SUB_ECX_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], ecx
#define SUB_ECX_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], ecx
#define SUB_ECX_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], ecx
#define SUB_ECX_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], ecx
#define SUB_ECX_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], ecx
#define SUB_ECX_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], ecx
#define SUB_ECX_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], ecx
#define SUB_ECX_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], ecx
#define SUB_ECX_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], ecx
#define SUB_ECX_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], ecx
#define SUB_ECX_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], ecx
#define SUB_ECX_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], ecx
#define SUB_ECX_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], ecx
#define SUB_ECX_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], ecx
#define SUB_ECX_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], ecx
#define SUB_ECX_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], ecx
#define SUB_ECX_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], ecx

#define SUB_EDX_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], edx
#define SUB_EDX_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], edx
#define SUB_EDX_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], edx
#define SUB_EDX_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], edx
#define SUB_EDX_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], edx
#define SUB_EDX_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], edx
#define SUB_EDX_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], edx
#define SUB_EDX_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], edx
#define SUB_EDX_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], edx
#define SUB_EDX_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], edx
#define SUB_EDX_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], edx
#define SUB_EDX_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], edx
#define SUB_EDX_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], edx
#define SUB_EDX_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], edx
#define SUB_EDX_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], edx
#define SUB_EDX_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], edx
#define SUB_EDX_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], edx
#define SUB_EDX_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], edx
#define SUB_EDX_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], edx
#define SUB_EDX_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], edx
#define SUB_EDX_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], edx
#define SUB_EDX_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], edx
#define SUB_EDX_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], edx
#define SUB_EDX_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], edx

#define SUB_EDI_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], edi
#define SUB_EDI_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], edi
#define SUB_EDI_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], edi
#define SUB_EDI_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], edi
#define SUB_EDI_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], edi
#define SUB_EDI_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], edi
#define SUB_EDI_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], edi
#define SUB_EDI_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], edi
#define SUB_EDI_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], edi
#define SUB_EDI_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], edi
#define SUB_EDI_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], edi
#define SUB_EDI_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], edi
#define SUB_EDI_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], edi
#define SUB_EDI_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], edi
#define SUB_EDI_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], edi
#define SUB_EDI_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], edi
#define SUB_EDI_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], edi
#define SUB_EDI_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], edi
#define SUB_EDI_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], edi
#define SUB_EDI_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], edi
#define SUB_EDI_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], edi
#define SUB_EDI_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], edi
#define SUB_EDI_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], edi
#define SUB_EDI_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], edi

#define SUB_ESI_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], esi
#define SUB_ESI_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], esi
#define SUB_ESI_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], esi
#define SUB_ESI_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], esi
#define SUB_ESI_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], esi
#define SUB_ESI_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], esi
#define SUB_ESI_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], esi
#define SUB_ESI_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], esi
#define SUB_ESI_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], esi
#define SUB_ESI_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], esi
#define SUB_ESI_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], esi
#define SUB_ESI_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], esi
#define SUB_ESI_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], esi
#define SUB_ESI_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], esi
#define SUB_ESI_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], esi
#define SUB_ESI_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], esi
#define SUB_ESI_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], esi
#define SUB_ESI_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], esi
#define SUB_ESI_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], esi
#define SUB_ESI_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], esi
#define SUB_ESI_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], esi
#define SUB_ESI_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], esi
#define SUB_ESI_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], esi
#define SUB_ESI_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], esi

#define SUB_EBP_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], ebp
#define SUB_EBP_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], ebp
#define SUB_EBP_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], ebp
#define SUB_EBP_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], ebp
#define SUB_EBP_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], ebp
#define SUB_EBP_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], ebp
#define SUB_EBP_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], ebp
#define SUB_EBP_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], ebp
#define SUB_EBP_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], ebp
#define SUB_EBP_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], ebp
#define SUB_EBP_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], ebp
#define SUB_EBP_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], ebp
#define SUB_EBP_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], ebp
#define SUB_EBP_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], ebp
#define SUB_EBP_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], ebp
#define SUB_EBP_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], ebp
#define SUB_EBP_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], ebp
#define SUB_EBP_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], ebp
#define SUB_EBP_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], ebp
#define SUB_EBP_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], ebp
#define SUB_EBP_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], ebp
#define SUB_EBP_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], ebp
#define SUB_EBP_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], ebp
#define SUB_EBP_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], ebp

#define SUB_ESP_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], esp
#define SUB_ESP_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], esp
#define SUB_ESP_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], esp
#define SUB_ESP_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], esp
#define SUB_ESP_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], esp
#define SUB_ESP_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], esp
#define SUB_ESP_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], esp
#define SUB_ESP_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], esp
#define SUB_ESP_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], esp
#define SUB_ESP_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], esp
#define SUB_ESP_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], esp
#define SUB_ESP_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], esp
#define SUB_ESP_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], esp
#define SUB_ESP_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], esp
#define SUB_ESP_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], esp
#define SUB_ESP_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], esp
#define SUB_ESP_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], esp
#define SUB_ESP_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], esp
#define SUB_ESP_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], esp
#define SUB_ESP_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], esp
#define SUB_ESP_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], esp
#define SUB_ESP_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], esp
#define SUB_ESP_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], esp
#define SUB_ESP_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], esp

#define SUB_R8D_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], r8d
#define SUB_R8D_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], r8d
#define SUB_R8D_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], r8d
#define SUB_R8D_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], r8d
#define SUB_R8D_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], r8d
#define SUB_R8D_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], r8d
#define SUB_R8D_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], r8d
#define SUB_R8D_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], r8d
#define SUB_R8D_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], r8d
#define SUB_R8D_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], r8d
#define SUB_R8D_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], r8d
#define SUB_R8D_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], r8d
#define SUB_R8D_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], r8d
#define SUB_R8D_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], r8d
#define SUB_R8D_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], r8d
#define SUB_R8D_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], r8d
#define SUB_R8D_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], r8d
#define SUB_R8D_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], r8d
#define SUB_R8D_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], r8d
#define SUB_R8D_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], r8d
#define SUB_R8D_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], r8d
#define SUB_R8D_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], r8d
#define SUB_R8D_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], r8d
#define SUB_R8D_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], r8d

#define SUB_R9D_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], r9d
#define SUB_R9D_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], r9d
#define SUB_R9D_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], r9d
#define SUB_R9D_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], r9d
#define SUB_R9D_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], r9d
#define SUB_R9D_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], r9d
#define SUB_R9D_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], r9d
#define SUB_R9D_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], r9d
#define SUB_R9D_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], r9d
#define SUB_R9D_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], r9d
#define SUB_R9D_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], r9d
#define SUB_R9D_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], r9d
#define SUB_R9D_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], r9d
#define SUB_R9D_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], r9d
#define SUB_R9D_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], r9d
#define SUB_R9D_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], r9d
#define SUB_R9D_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], r9d
#define SUB_R9D_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], r9d
#define SUB_R9D_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], r9d
#define SUB_R9D_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], r9d
#define SUB_R9D_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], r9d
#define SUB_R9D_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], r9d
#define SUB_R9D_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], r9d
#define SUB_R9D_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], r9d

#define SUB_R10D_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], r10d
#define SUB_R10D_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], r10d
#define SUB_R10D_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], r10d
#define SUB_R10D_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], r10d
#define SUB_R10D_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], r10d
#define SUB_R10D_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], r10d
#define SUB_R10D_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], r10d
#define SUB_R10D_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], r10d
#define SUB_R10D_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], r10d
#define SUB_R10D_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], r10d
#define SUB_R10D_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], r10d
#define SUB_R10D_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], r10d
#define SUB_R10D_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], r10d
#define SUB_R10D_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], r10d
#define SUB_R10D_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], r10d
#define SUB_R10D_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], r10d
#define SUB_R10D_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], r10d
#define SUB_R10D_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], r10d
#define SUB_R10D_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], r10d
#define SUB_R10D_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], r10d
#define SUB_R10D_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], r10d
#define SUB_R10D_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], r10d
#define SUB_R10D_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], r10d
#define SUB_R10D_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], r10d

#define SUB_R11D_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], r11d
#define SUB_R11D_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], r11d
#define SUB_R11D_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], r11d
#define SUB_R11D_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], r11d
#define SUB_R11D_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], r11d
#define SUB_R11D_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], r11d
#define SUB_R11D_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], r11d
#define SUB_R11D_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], r11d
#define SUB_R11D_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], r11d
#define SUB_R11D_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], r11d
#define SUB_R11D_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], r11d
#define SUB_R11D_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], r11d
#define SUB_R11D_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], r11d
#define SUB_R11D_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], r11d
#define SUB_R11D_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], r11d
#define SUB_R11D_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], r11d
#define SUB_R11D_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], r11d
#define SUB_R11D_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], r11d
#define SUB_R11D_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], r11d
#define SUB_R11D_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], r11d
#define SUB_R11D_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], r11d
#define SUB_R11D_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], r11d
#define SUB_R11D_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], r11d
#define SUB_R11D_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], r11d

#define SUB_R12D_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], r12d
#define SUB_R12D_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], r12d
#define SUB_R12D_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], r12d
#define SUB_R12D_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], r12d
#define SUB_R12D_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], r12d
#define SUB_R12D_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], r12d
#define SUB_R12D_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], r12d
#define SUB_R12D_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], r12d
#define SUB_R12D_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], r12d
#define SUB_R12D_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], r12d
#define SUB_R12D_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], r12d
#define SUB_R12D_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], r12d
#define SUB_R12D_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], r12d
#define SUB_R12D_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], r12d
#define SUB_R12D_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], r12d
#define SUB_R12D_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], r12d
#define SUB_R12D_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], r12d
#define SUB_R12D_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], r12d
#define SUB_R12D_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], r12d
#define SUB_R12D_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], r12d
#define SUB_R12D_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], r12d
#define SUB_R12D_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], r12d
#define SUB_R12D_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], r12d
#define SUB_R12D_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], r12d

#define SUB_R13D_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], r13d
#define SUB_R13D_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], r13d
#define SUB_R13D_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], r13d
#define SUB_R13D_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], r13d
#define SUB_R13D_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], r13d
#define SUB_R13D_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], r13d
#define SUB_R13D_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], r13d
#define SUB_R13D_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], r13d
#define SUB_R13D_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], r13d
#define SUB_R13D_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], r13d
#define SUB_R13D_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], r13d
#define SUB_R13D_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], r13d
#define SUB_R13D_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], r13d
#define SUB_R13D_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], r13d
#define SUB_R13D_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], r13d
#define SUB_R13D_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], r13d
#define SUB_R13D_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], r13d
#define SUB_R13D_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], r13d
#define SUB_R13D_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], r13d
#define SUB_R13D_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], r13d
#define SUB_R13D_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], r13d
#define SUB_R13D_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], r13d
#define SUB_R13D_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], r13d
#define SUB_R13D_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], r13d

#define SUB_R14D_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], r14d
#define SUB_R14D_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], r14d
#define SUB_R14D_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], r14d
#define SUB_R14D_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], r14d
#define SUB_R14D_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], r14d
#define SUB_R14D_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], r14d
#define SUB_R14D_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], r14d
#define SUB_R14D_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], r14d
#define SUB_R14D_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], r14d
#define SUB_R14D_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], r14d
#define SUB_R14D_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], r14d
#define SUB_R14D_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], r14d
#define SUB_R14D_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], r14d
#define SUB_R14D_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], r14d
#define SUB_R14D_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], r14d
#define SUB_R14D_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], r14d
#define SUB_R14D_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], r14d
#define SUB_R14D_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], r14d
#define SUB_R14D_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], r14d
#define SUB_R14D_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], r14d
#define SUB_R14D_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], r14d
#define SUB_R14D_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], r14d
#define SUB_R14D_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], r14d
#define SUB_R14D_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], r14d

#define SUB_R15D_TO_PTR_RAX_(VALUE) sub dword ptr [rax + VALUE], r15d
#define SUB_R15D_TO_PTR_RBX_(VALUE) sub dword ptr [rbx + VALUE], r15d
#define SUB_R15D_TO_PTR_RCX_(VALUE) sub dword ptr [rcx + VALUE], r15d
#define SUB_R15D_TO_PTR_RDX_(VALUE) sub dword ptr [rdx + VALUE], r15d
#define SUB_R15D_TO_PTR_RDI_(VALUE) sub dword ptr [rdi + VALUE], r15d
#define SUB_R15D_TO_PTR_RSI_(VALUE) sub dword ptr [rsi + VALUE], r15d
#define SUB_R15D_TO_PTR_RBP_(VALUE) sub dword ptr [rbp + VALUE], r15d
#define SUB_R15D_TO_PTR_RSP_(VALUE) sub dword ptr [rsp + VALUE], r15d
#define SUB_R15D_TO_PTR_R8_(VALUE) sub dword ptr [r8 + VALUE], r15d
#define SUB_R15D_TO_PTR_R9_(VALUE) sub dword ptr [r9 + VALUE], r15d
#define SUB_R15D_TO_PTR_R10_(VALUE) sub dword ptr [r10 + VALUE], r15d
#define SUB_R15D_TO_PTR_R11_(VALUE) sub dword ptr [r11 + VALUE], r15d
#define SUB_R15D_TO_PTR_R12_(VALUE) sub dword ptr [r12 + VALUE], r15d
#define SUB_R15D_TO_PTR_R13_(VALUE) sub dword ptr [r13 + VALUE], r15d
#define SUB_R15D_TO_PTR_R14_(VALUE) sub dword ptr [r14 + VALUE], r15d
#define SUB_R15D_TO_PTR_R15_(VALUE) sub dword ptr [r15 + VALUE], r15d
#define SUB_R15D_TO_PTR_EAX_(VALUE) sub dword ptr [eax + VALUE], r15d
#define SUB_R15D_TO_PTR_EBX_(VALUE) sub dword ptr [ebx + VALUE], r15d
#define SUB_R15D_TO_PTR_ECX_(VALUE) sub dword ptr [ecx + VALUE], r15d
#define SUB_R15D_TO_PTR_EDX_(VALUE) sub dword ptr [edx + VALUE], r15d
#define SUB_R15D_TO_PTR_EDI_(VALUE) sub dword ptr [edi + VALUE], r15d
#define SUB_R15D_TO_PTR_ESI_(VALUE) sub dword ptr [esi + VALUE], r15d
#define SUB_R15D_TO_PTR_EBP_(VALUE) sub dword ptr [ebp + VALUE], r15d
#define SUB_R15D_TO_PTR_ESP_(VALUE) sub dword ptr [esp + VALUE], r15d
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
