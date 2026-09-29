#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define TEST_EAX_FROM_PTR_(VALUE) test eax, dword ptr [VALUE]
#define TEST_EBX_FROM_PTR_(VALUE) test ebx, dword ptr [VALUE]
#define TEST_ECX_FROM_PTR_(VALUE) test ecx, dword ptr [VALUE]
#define TEST_EDX_FROM_PTR_(VALUE) test edx, dword ptr [VALUE]
#define TEST_EDI_FROM_PTR_(VALUE) test edi, dword ptr [VALUE]
#define TEST_ESI_FROM_PTR_(VALUE) test esi, dword ptr [VALUE]
#define TEST_EBP_FROM_PTR_(VALUE) test ebp, dword ptr [VALUE]
#define TEST_ESP_FROM_PTR_(VALUE) test esp, dword ptr [VALUE]

#define TEST_EAX_TO_PTR_(VALUE) test dword ptr [VALUE], eax
#define TEST_EBX_TO_PTR_(VALUE) test dword ptr [VALUE], ebx
#define TEST_ECX_TO_PTR_(VALUE) test dword ptr [VALUE], ecx
#define TEST_EDX_TO_PTR_(VALUE) test dword ptr [VALUE], edx
#define TEST_EDI_TO_PTR_(VALUE) test dword ptr [VALUE], edi
#define TEST_ESI_TO_PTR_(VALUE) test dword ptr [VALUE], esi
#define TEST_EBP_TO_PTR_(VALUE) test dword ptr [VALUE], ebp
#define TEST_ESP_TO_PTR_(VALUE) test dword ptr [VALUE], esp

#define TEST_EAX_FROM_PTR_EAX test eax, dword ptr [eax]
#define TEST_EAX_FROM_PTR_EBX test eax, dword ptr [ebx]
#define TEST_EAX_FROM_PTR_ECX test eax, dword ptr [ecx]
#define TEST_EAX_FROM_PTR_EDX test eax, dword ptr [edx]
#define TEST_EAX_FROM_PTR_EDI test eax, dword ptr [edi]
#define TEST_EAX_FROM_PTR_ESI test eax, dword ptr [esi]
#define TEST_EAX_FROM_PTR_EBP test eax, dword ptr [ebp]
#define TEST_EAX_FROM_PTR_ESP test eax, dword ptr [esp]
#define TEST_EAX_FROM_PTR_BX test eax, dword ptr [bx]
#define TEST_EAX_FROM_PTR_BP test eax, dword ptr [bp]
#define TEST_EAX_FROM_PTR_SI test eax, dword ptr [si]
#define TEST_EAX_FROM_PTR_DI test eax, dword ptr [di]

#define TEST_EBX_FROM_PTR_EAX test ebx, dword ptr [eax]
#define TEST_EBX_FROM_PTR_EBX test ebx, dword ptr [ebx]
#define TEST_EBX_FROM_PTR_ECX test ebx, dword ptr [ecx]
#define TEST_EBX_FROM_PTR_EDX test ebx, dword ptr [edx]
#define TEST_EBX_FROM_PTR_EDI test ebx, dword ptr [edi]
#define TEST_EBX_FROM_PTR_ESI test ebx, dword ptr [esi]
#define TEST_EBX_FROM_PTR_EBP test ebx, dword ptr [ebp]
#define TEST_EBX_FROM_PTR_ESP test ebx, dword ptr [esp]
#define TEST_EBX_FROM_PTR_BX test ebx, dword ptr [bx]
#define TEST_EBX_FROM_PTR_BP test ebx, dword ptr [bp]
#define TEST_EBX_FROM_PTR_SI test ebx, dword ptr [si]
#define TEST_EBX_FROM_PTR_DI test ebx, dword ptr [di]

#define TEST_ECX_FROM_PTR_EAX test ecx, dword ptr [eax]
#define TEST_ECX_FROM_PTR_EBX test ecx, dword ptr [ebx]
#define TEST_ECX_FROM_PTR_ECX test ecx, dword ptr [ecx]
#define TEST_ECX_FROM_PTR_EDX test ecx, dword ptr [edx]
#define TEST_ECX_FROM_PTR_EDI test ecx, dword ptr [edi]
#define TEST_ECX_FROM_PTR_ESI test ecx, dword ptr [esi]
#define TEST_ECX_FROM_PTR_EBP test ecx, dword ptr [ebp]
#define TEST_ECX_FROM_PTR_ESP test ecx, dword ptr [esp]
#define TEST_ECX_FROM_PTR_BX test ecx, dword ptr [bx]
#define TEST_ECX_FROM_PTR_BP test ecx, dword ptr [bp]
#define TEST_ECX_FROM_PTR_SI test ecx, dword ptr [si]
#define TEST_ECX_FROM_PTR_DI test ecx, dword ptr [di]

#define TEST_EDX_FROM_PTR_EAX test edx, dword ptr [eax]
#define TEST_EDX_FROM_PTR_EBX test edx, dword ptr [ebx]
#define TEST_EDX_FROM_PTR_ECX test edx, dword ptr [ecx]
#define TEST_EDX_FROM_PTR_EDX test edx, dword ptr [edx]
#define TEST_EDX_FROM_PTR_EDI test edx, dword ptr [edi]
#define TEST_EDX_FROM_PTR_ESI test edx, dword ptr [esi]
#define TEST_EDX_FROM_PTR_EBP test edx, dword ptr [ebp]
#define TEST_EDX_FROM_PTR_ESP test edx, dword ptr [esp]
#define TEST_EDX_FROM_PTR_BX test edx, dword ptr [bx]
#define TEST_EDX_FROM_PTR_BP test edx, dword ptr [bp]
#define TEST_EDX_FROM_PTR_SI test edx, dword ptr [si]
#define TEST_EDX_FROM_PTR_DI test edx, dword ptr [di]

#define TEST_EDI_FROM_PTR_EAX test edi, dword ptr [eax]
#define TEST_EDI_FROM_PTR_EBX test edi, dword ptr [ebx]
#define TEST_EDI_FROM_PTR_ECX test edi, dword ptr [ecx]
#define TEST_EDI_FROM_PTR_EDX test edi, dword ptr [edx]
#define TEST_EDI_FROM_PTR_EDI test edi, dword ptr [edi]
#define TEST_EDI_FROM_PTR_ESI test edi, dword ptr [esi]
#define TEST_EDI_FROM_PTR_EBP test edi, dword ptr [ebp]
#define TEST_EDI_FROM_PTR_ESP test edi, dword ptr [esp]
#define TEST_EDI_FROM_PTR_BX test edi, dword ptr [bx]
#define TEST_EDI_FROM_PTR_BP test edi, dword ptr [bp]
#define TEST_EDI_FROM_PTR_SI test edi, dword ptr [si]
#define TEST_EDI_FROM_PTR_DI test edi, dword ptr [di]

#define TEST_ESI_FROM_PTR_EAX test esi, dword ptr [eax]
#define TEST_ESI_FROM_PTR_EBX test esi, dword ptr [ebx]
#define TEST_ESI_FROM_PTR_ECX test esi, dword ptr [ecx]
#define TEST_ESI_FROM_PTR_EDX test esi, dword ptr [edx]
#define TEST_ESI_FROM_PTR_EDI test esi, dword ptr [edi]
#define TEST_ESI_FROM_PTR_ESI test esi, dword ptr [esi]
#define TEST_ESI_FROM_PTR_EBP test esi, dword ptr [ebp]
#define TEST_ESI_FROM_PTR_ESP test esi, dword ptr [esp]
#define TEST_ESI_FROM_PTR_BX test esi, dword ptr [bx]
#define TEST_ESI_FROM_PTR_BP test esi, dword ptr [bp]
#define TEST_ESI_FROM_PTR_SI test esi, dword ptr [si]
#define TEST_ESI_FROM_PTR_DI test esi, dword ptr [di]

#define TEST_EBP_FROM_PTR_EAX test ebp, dword ptr [eax]
#define TEST_EBP_FROM_PTR_EBX test ebp, dword ptr [ebx]
#define TEST_EBP_FROM_PTR_ECX test ebp, dword ptr [ecx]
#define TEST_EBP_FROM_PTR_EDX test ebp, dword ptr [edx]
#define TEST_EBP_FROM_PTR_EDI test ebp, dword ptr [edi]
#define TEST_EBP_FROM_PTR_ESI test ebp, dword ptr [esi]
#define TEST_EBP_FROM_PTR_EBP test ebp, dword ptr [ebp]
#define TEST_EBP_FROM_PTR_ESP test ebp, dword ptr [esp]
#define TEST_EBP_FROM_PTR_BX test ebp, dword ptr [bx]
#define TEST_EBP_FROM_PTR_BP test ebp, dword ptr [bp]
#define TEST_EBP_FROM_PTR_SI test ebp, dword ptr [si]
#define TEST_EBP_FROM_PTR_DI test ebp, dword ptr [di]

#define TEST_ESP_FROM_PTR_EAX test esp, dword ptr [eax]
#define TEST_ESP_FROM_PTR_EBX test esp, dword ptr [ebx]
#define TEST_ESP_FROM_PTR_ECX test esp, dword ptr [ecx]
#define TEST_ESP_FROM_PTR_EDX test esp, dword ptr [edx]
#define TEST_ESP_FROM_PTR_EDI test esp, dword ptr [edi]
#define TEST_ESP_FROM_PTR_ESI test esp, dword ptr [esi]
#define TEST_ESP_FROM_PTR_EBP test esp, dword ptr [ebp]
#define TEST_ESP_FROM_PTR_ESP test esp, dword ptr [esp]
#define TEST_ESP_FROM_PTR_BX test esp, dword ptr [bx]
#define TEST_ESP_FROM_PTR_BP test esp, dword ptr [bp]
#define TEST_ESP_FROM_PTR_SI test esp, dword ptr [si]
#define TEST_ESP_FROM_PTR_DI test esp, dword ptr [di]

#define TEST_EAX_TO_PTR_EAX test dword ptr [eax], eax
#define TEST_EAX_TO_PTR_EBX test dword ptr [ebx], eax
#define TEST_EAX_TO_PTR_ECX test dword ptr [ecx], eax
#define TEST_EAX_TO_PTR_EDX test dword ptr [edx], eax
#define TEST_EAX_TO_PTR_EDI test dword ptr [edi], eax
#define TEST_EAX_TO_PTR_ESI test dword ptr [esi], eax
#define TEST_EAX_TO_PTR_EBP test dword ptr [ebp], eax
#define TEST_EAX_TO_PTR_ESP test dword ptr [esp], eax
#define TEST_EAX_TO_PTR_BX test dword ptr [bx], eax
#define TEST_EAX_TO_PTR_BP test dword ptr [bp], eax
#define TEST_EAX_TO_PTR_SI test dword ptr [si], eax
#define TEST_EAX_TO_PTR_DI test dword ptr [di], eax

#define TEST_EBX_TO_PTR_EAX test dword ptr [eax], ebx
#define TEST_EBX_TO_PTR_EBX test dword ptr [ebx], ebx
#define TEST_EBX_TO_PTR_ECX test dword ptr [ecx], ebx
#define TEST_EBX_TO_PTR_EDX test dword ptr [edx], ebx
#define TEST_EBX_TO_PTR_EDI test dword ptr [edi], ebx
#define TEST_EBX_TO_PTR_ESI test dword ptr [esi], ebx
#define TEST_EBX_TO_PTR_EBP test dword ptr [ebp], ebx
#define TEST_EBX_TO_PTR_ESP test dword ptr [esp], ebx
#define TEST_EBX_TO_PTR_BX test dword ptr [bx], ebx
#define TEST_EBX_TO_PTR_BP test dword ptr [bp], ebx
#define TEST_EBX_TO_PTR_SI test dword ptr [si], ebx
#define TEST_EBX_TO_PTR_DI test dword ptr [di], ebx

#define TEST_ECX_TO_PTR_EAX test dword ptr [eax], ecx
#define TEST_ECX_TO_PTR_EBX test dword ptr [ebx], ecx
#define TEST_ECX_TO_PTR_ECX test dword ptr [ecx], ecx
#define TEST_ECX_TO_PTR_EDX test dword ptr [edx], ecx
#define TEST_ECX_TO_PTR_EDI test dword ptr [edi], ecx
#define TEST_ECX_TO_PTR_ESI test dword ptr [esi], ecx
#define TEST_ECX_TO_PTR_EBP test dword ptr [ebp], ecx
#define TEST_ECX_TO_PTR_ESP test dword ptr [esp], ecx
#define TEST_ECX_TO_PTR_BX test dword ptr [bx], ecx
#define TEST_ECX_TO_PTR_BP test dword ptr [bp], ecx
#define TEST_ECX_TO_PTR_SI test dword ptr [si], ecx
#define TEST_ECX_TO_PTR_DI test dword ptr [di], ecx

#define TEST_EDX_TO_PTR_EAX test dword ptr [eax], edx
#define TEST_EDX_TO_PTR_EBX test dword ptr [ebx], edx
#define TEST_EDX_TO_PTR_ECX test dword ptr [ecx], edx
#define TEST_EDX_TO_PTR_EDX test dword ptr [edx], edx
#define TEST_EDX_TO_PTR_EDI test dword ptr [edi], edx
#define TEST_EDX_TO_PTR_ESI test dword ptr [esi], edx
#define TEST_EDX_TO_PTR_EBP test dword ptr [ebp], edx
#define TEST_EDX_TO_PTR_ESP test dword ptr [esp], edx
#define TEST_EDX_TO_PTR_BX test dword ptr [bx], edx
#define TEST_EDX_TO_PTR_BP test dword ptr [bp], edx
#define TEST_EDX_TO_PTR_SI test dword ptr [si], edx
#define TEST_EDX_TO_PTR_DI test dword ptr [di], edx

#define TEST_EDI_TO_PTR_EAX test dword ptr [eax], edi
#define TEST_EDI_TO_PTR_EBX test dword ptr [ebx], edi
#define TEST_EDI_TO_PTR_ECX test dword ptr [ecx], edi
#define TEST_EDI_TO_PTR_EDX test dword ptr [edx], edi
#define TEST_EDI_TO_PTR_EDI test dword ptr [edi], edi
#define TEST_EDI_TO_PTR_ESI test dword ptr [esi], edi
#define TEST_EDI_TO_PTR_EBP test dword ptr [ebp], edi
#define TEST_EDI_TO_PTR_ESP test dword ptr [esp], edi
#define TEST_EDI_TO_PTR_BX test dword ptr [bx], edi
#define TEST_EDI_TO_PTR_BP test dword ptr [bp], edi
#define TEST_EDI_TO_PTR_SI test dword ptr [si], edi
#define TEST_EDI_TO_PTR_DI test dword ptr [di], edi

#define TEST_ESI_TO_PTR_EAX test dword ptr [eax], esi
#define TEST_ESI_TO_PTR_EBX test dword ptr [ebx], esi
#define TEST_ESI_TO_PTR_ECX test dword ptr [ecx], esi
#define TEST_ESI_TO_PTR_EDX test dword ptr [edx], esi
#define TEST_ESI_TO_PTR_EDI test dword ptr [edi], esi
#define TEST_ESI_TO_PTR_ESI test dword ptr [esi], esi
#define TEST_ESI_TO_PTR_EBP test dword ptr [ebp], esi
#define TEST_ESI_TO_PTR_ESP test dword ptr [esp], esi
#define TEST_ESI_TO_PTR_BX test dword ptr [bx], esi
#define TEST_ESI_TO_PTR_BP test dword ptr [bp], esi
#define TEST_ESI_TO_PTR_SI test dword ptr [si], esi
#define TEST_ESI_TO_PTR_DI test dword ptr [di], esi

#define TEST_EBP_TO_PTR_EAX test dword ptr [eax], ebp
#define TEST_EBP_TO_PTR_EBX test dword ptr [ebx], ebp
#define TEST_EBP_TO_PTR_ECX test dword ptr [ecx], ebp
#define TEST_EBP_TO_PTR_EDX test dword ptr [edx], ebp
#define TEST_EBP_TO_PTR_EDI test dword ptr [edi], ebp
#define TEST_EBP_TO_PTR_ESI test dword ptr [esi], ebp
#define TEST_EBP_TO_PTR_EBP test dword ptr [ebp], ebp
#define TEST_EBP_TO_PTR_ESP test dword ptr [esp], ebp
#define TEST_EBP_TO_PTR_BX test dword ptr [bx], ebp
#define TEST_EBP_TO_PTR_BP test dword ptr [bp], ebp
#define TEST_EBP_TO_PTR_SI test dword ptr [si], ebp
#define TEST_EBP_TO_PTR_DI test dword ptr [di], ebp

#define TEST_ESP_TO_PTR_EAX test dword ptr [eax], esp
#define TEST_ESP_TO_PTR_EBX test dword ptr [ebx], esp
#define TEST_ESP_TO_PTR_ECX test dword ptr [ecx], esp
#define TEST_ESP_TO_PTR_EDX test dword ptr [edx], esp
#define TEST_ESP_TO_PTR_EDI test dword ptr [edi], esp
#define TEST_ESP_TO_PTR_ESI test dword ptr [esi], esp
#define TEST_ESP_TO_PTR_EBP test dword ptr [ebp], esp
#define TEST_ESP_TO_PTR_ESP test dword ptr [esp], esp
#define TEST_ESP_TO_PTR_BX test dword ptr [bx], esp
#define TEST_ESP_TO_PTR_BP test dword ptr [bp], esp
#define TEST_ESP_TO_PTR_SI test dword ptr [si], esp
#define TEST_ESP_TO_PTR_DI test dword ptr [di], esp

#define TEST_EAX_FROM_PTR_EAX_(VALUE) test eax, dword ptr [eax + VALUE]
#define TEST_EAX_FROM_PTR_EBX_(VALUE) test eax, dword ptr [ebx + VALUE]
#define TEST_EAX_FROM_PTR_ECX_(VALUE) test eax, dword ptr [ecx + VALUE]
#define TEST_EAX_FROM_PTR_EDX_(VALUE) test eax, dword ptr [edx + VALUE]
#define TEST_EAX_FROM_PTR_EDI_(VALUE) test eax, dword ptr [edi + VALUE]
#define TEST_EAX_FROM_PTR_ESI_(VALUE) test eax, dword ptr [esi + VALUE]
#define TEST_EAX_FROM_PTR_EBP_(VALUE) test eax, dword ptr [ebp + VALUE]
#define TEST_EAX_FROM_PTR_ESP_(VALUE) test eax, dword ptr [esp + VALUE]
#define TEST_EAX_FROM_PTR_BX_(VALUE) test eax, dword ptr [bx + VALUE]
#define TEST_EAX_FROM_PTR_BP_(VALUE) test eax, dword ptr [bp + VALUE]
#define TEST_EAX_FROM_PTR_SI_(VALUE) test eax, dword ptr [si + VALUE]
#define TEST_EAX_FROM_PTR_DI_(VALUE) test eax, dword ptr [di + VALUE]

#define TEST_EBX_FROM_PTR_EAX_(VALUE) test ebx, dword ptr [eax + VALUE]
#define TEST_EBX_FROM_PTR_EBX_(VALUE) test ebx, dword ptr [ebx + VALUE]
#define TEST_EBX_FROM_PTR_ECX_(VALUE) test ebx, dword ptr [ecx + VALUE]
#define TEST_EBX_FROM_PTR_EDX_(VALUE) test ebx, dword ptr [edx + VALUE]
#define TEST_EBX_FROM_PTR_EDI_(VALUE) test ebx, dword ptr [edi + VALUE]
#define TEST_EBX_FROM_PTR_ESI_(VALUE) test ebx, dword ptr [esi + VALUE]
#define TEST_EBX_FROM_PTR_EBP_(VALUE) test ebx, dword ptr [ebp + VALUE]
#define TEST_EBX_FROM_PTR_ESP_(VALUE) test ebx, dword ptr [esp + VALUE]
#define TEST_EBX_FROM_PTR_BX_(VALUE) test ebx, dword ptr [bx + VALUE]
#define TEST_EBX_FROM_PTR_BP_(VALUE) test ebx, dword ptr [bp + VALUE]
#define TEST_EBX_FROM_PTR_SI_(VALUE) test ebx, dword ptr [si + VALUE]
#define TEST_EBX_FROM_PTR_DI_(VALUE) test ebx, dword ptr [di + VALUE]

#define TEST_ECX_FROM_PTR_EAX_(VALUE) test ecx, dword ptr [eax + VALUE]
#define TEST_ECX_FROM_PTR_EBX_(VALUE) test ecx, dword ptr [ebx + VALUE]
#define TEST_ECX_FROM_PTR_ECX_(VALUE) test ecx, dword ptr [ecx + VALUE]
#define TEST_ECX_FROM_PTR_EDX_(VALUE) test ecx, dword ptr [edx + VALUE]
#define TEST_ECX_FROM_PTR_EDI_(VALUE) test ecx, dword ptr [edi + VALUE]
#define TEST_ECX_FROM_PTR_ESI_(VALUE) test ecx, dword ptr [esi + VALUE]
#define TEST_ECX_FROM_PTR_EBP_(VALUE) test ecx, dword ptr [ebp + VALUE]
#define TEST_ECX_FROM_PTR_ESP_(VALUE) test ecx, dword ptr [esp + VALUE]
#define TEST_ECX_FROM_PTR_BX_(VALUE) test ecx, dword ptr [bx + VALUE]
#define TEST_ECX_FROM_PTR_BP_(VALUE) test ecx, dword ptr [bp + VALUE]
#define TEST_ECX_FROM_PTR_SI_(VALUE) test ecx, dword ptr [si + VALUE]
#define TEST_ECX_FROM_PTR_DI_(VALUE) test ecx, dword ptr [di + VALUE]

#define TEST_EDX_FROM_PTR_EAX_(VALUE) test edx, dword ptr [eax + VALUE]
#define TEST_EDX_FROM_PTR_EBX_(VALUE) test edx, dword ptr [ebx + VALUE]
#define TEST_EDX_FROM_PTR_ECX_(VALUE) test edx, dword ptr [ecx + VALUE]
#define TEST_EDX_FROM_PTR_EDX_(VALUE) test edx, dword ptr [edx + VALUE]
#define TEST_EDX_FROM_PTR_EDI_(VALUE) test edx, dword ptr [edi + VALUE]
#define TEST_EDX_FROM_PTR_ESI_(VALUE) test edx, dword ptr [esi + VALUE]
#define TEST_EDX_FROM_PTR_EBP_(VALUE) test edx, dword ptr [ebp + VALUE]
#define TEST_EDX_FROM_PTR_ESP_(VALUE) test edx, dword ptr [esp + VALUE]
#define TEST_EDX_FROM_PTR_BX_(VALUE) test edx, dword ptr [bx + VALUE]
#define TEST_EDX_FROM_PTR_BP_(VALUE) test edx, dword ptr [bp + VALUE]
#define TEST_EDX_FROM_PTR_SI_(VALUE) test edx, dword ptr [si + VALUE]
#define TEST_EDX_FROM_PTR_DI_(VALUE) test edx, dword ptr [di + VALUE]

#define TEST_EDI_FROM_PTR_EAX_(VALUE) test edi, dword ptr [eax + VALUE]
#define TEST_EDI_FROM_PTR_EBX_(VALUE) test edi, dword ptr [ebx + VALUE]
#define TEST_EDI_FROM_PTR_ECX_(VALUE) test edi, dword ptr [ecx + VALUE]
#define TEST_EDI_FROM_PTR_EDX_(VALUE) test edi, dword ptr [edx + VALUE]
#define TEST_EDI_FROM_PTR_EDI_(VALUE) test edi, dword ptr [edi + VALUE]
#define TEST_EDI_FROM_PTR_ESI_(VALUE) test edi, dword ptr [esi + VALUE]
#define TEST_EDI_FROM_PTR_EBP_(VALUE) test edi, dword ptr [ebp + VALUE]
#define TEST_EDI_FROM_PTR_ESP_(VALUE) test edi, dword ptr [esp + VALUE]
#define TEST_EDI_FROM_PTR_BX_(VALUE) test edi, dword ptr [bx + VALUE]
#define TEST_EDI_FROM_PTR_BP_(VALUE) test edi, dword ptr [bp + VALUE]
#define TEST_EDI_FROM_PTR_SI_(VALUE) test edi, dword ptr [si + VALUE]
#define TEST_EDI_FROM_PTR_DI_(VALUE) test edi, dword ptr [di + VALUE]

#define TEST_ESI_FROM_PTR_EAX_(VALUE) test esi, dword ptr [eax + VALUE]
#define TEST_ESI_FROM_PTR_EBX_(VALUE) test esi, dword ptr [ebx + VALUE]
#define TEST_ESI_FROM_PTR_ECX_(VALUE) test esi, dword ptr [ecx + VALUE]
#define TEST_ESI_FROM_PTR_EDX_(VALUE) test esi, dword ptr [edx + VALUE]
#define TEST_ESI_FROM_PTR_EDI_(VALUE) test esi, dword ptr [edi + VALUE]
#define TEST_ESI_FROM_PTR_ESI_(VALUE) test esi, dword ptr [esi + VALUE]
#define TEST_ESI_FROM_PTR_EBP_(VALUE) test esi, dword ptr [ebp + VALUE]
#define TEST_ESI_FROM_PTR_ESP_(VALUE) test esi, dword ptr [esp + VALUE]
#define TEST_ESI_FROM_PTR_BX_(VALUE) test esi, dword ptr [bx + VALUE]
#define TEST_ESI_FROM_PTR_BP_(VALUE) test esi, dword ptr [bp + VALUE]
#define TEST_ESI_FROM_PTR_SI_(VALUE) test esi, dword ptr [si + VALUE]
#define TEST_ESI_FROM_PTR_DI_(VALUE) test esi, dword ptr [di + VALUE]

#define TEST_EBP_FROM_PTR_EAX_(VALUE) test ebp, dword ptr [eax + VALUE]
#define TEST_EBP_FROM_PTR_EBX_(VALUE) test ebp, dword ptr [ebx + VALUE]
#define TEST_EBP_FROM_PTR_ECX_(VALUE) test ebp, dword ptr [ecx + VALUE]
#define TEST_EBP_FROM_PTR_EDX_(VALUE) test ebp, dword ptr [edx + VALUE]
#define TEST_EBP_FROM_PTR_EDI_(VALUE) test ebp, dword ptr [edi + VALUE]
#define TEST_EBP_FROM_PTR_ESI_(VALUE) test ebp, dword ptr [esi + VALUE]
#define TEST_EBP_FROM_PTR_EBP_(VALUE) test ebp, dword ptr [ebp + VALUE]
#define TEST_EBP_FROM_PTR_ESP_(VALUE) test ebp, dword ptr [esp + VALUE]
#define TEST_EBP_FROM_PTR_BX_(VALUE) test ebp, dword ptr [bx + VALUE]
#define TEST_EBP_FROM_PTR_BP_(VALUE) test ebp, dword ptr [bp + VALUE]
#define TEST_EBP_FROM_PTR_SI_(VALUE) test ebp, dword ptr [si + VALUE]
#define TEST_EBP_FROM_PTR_DI_(VALUE) test ebp, dword ptr [di + VALUE]

#define TEST_ESP_FROM_PTR_EAX_(VALUE) test esp, dword ptr [eax + VALUE]
#define TEST_ESP_FROM_PTR_EBX_(VALUE) test esp, dword ptr [ebx + VALUE]
#define TEST_ESP_FROM_PTR_ECX_(VALUE) test esp, dword ptr [ecx + VALUE]
#define TEST_ESP_FROM_PTR_EDX_(VALUE) test esp, dword ptr [edx + VALUE]
#define TEST_ESP_FROM_PTR_EDI_(VALUE) test esp, dword ptr [edi + VALUE]
#define TEST_ESP_FROM_PTR_ESI_(VALUE) test esp, dword ptr [esi + VALUE]
#define TEST_ESP_FROM_PTR_EBP_(VALUE) test esp, dword ptr [ebp + VALUE]
#define TEST_ESP_FROM_PTR_ESP_(VALUE) test esp, dword ptr [esp + VALUE]
#define TEST_ESP_FROM_PTR_BX_(VALUE) test esp, dword ptr [bx + VALUE]
#define TEST_ESP_FROM_PTR_BP_(VALUE) test esp, dword ptr [bp + VALUE]
#define TEST_ESP_FROM_PTR_SI_(VALUE) test esp, dword ptr [si + VALUE]
#define TEST_ESP_FROM_PTR_DI_(VALUE) test esp, dword ptr [di + VALUE]

#define TEST_EAX_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], eax
#define TEST_EAX_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], eax
#define TEST_EAX_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], eax
#define TEST_EAX_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], eax
#define TEST_EAX_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], eax
#define TEST_EAX_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], eax
#define TEST_EAX_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], eax
#define TEST_EAX_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], eax
#define TEST_EAX_TO_PTR_BX_(VALUE) test dword ptr [bx + VALUE], eax
#define TEST_EAX_TO_PTR_BP_(VALUE) test dword ptr [bp + VALUE], eax
#define TEST_EAX_TO_PTR_SI_(VALUE) test dword ptr [si + VALUE], eax
#define TEST_EAX_TO_PTR_DI_(VALUE) test dword ptr [di + VALUE], eax

#define TEST_EBX_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], ebx
#define TEST_EBX_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], ebx
#define TEST_EBX_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], ebx
#define TEST_EBX_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], ebx
#define TEST_EBX_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], ebx
#define TEST_EBX_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], ebx
#define TEST_EBX_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], ebx
#define TEST_EBX_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], ebx
#define TEST_EBX_TO_PTR_BX_(VALUE) test dword ptr [bx + VALUE], ebx
#define TEST_EBX_TO_PTR_BP_(VALUE) test dword ptr [bp + VALUE], ebx
#define TEST_EBX_TO_PTR_SI_(VALUE) test dword ptr [si + VALUE], ebx
#define TEST_EBX_TO_PTR_DI_(VALUE) test dword ptr [di + VALUE], ebx

#define TEST_ECX_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], ecx
#define TEST_ECX_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], ecx
#define TEST_ECX_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], ecx
#define TEST_ECX_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], ecx
#define TEST_ECX_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], ecx
#define TEST_ECX_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], ecx
#define TEST_ECX_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], ecx
#define TEST_ECX_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], ecx
#define TEST_ECX_TO_PTR_BX_(VALUE) test dword ptr [bx + VALUE], ecx
#define TEST_ECX_TO_PTR_BP_(VALUE) test dword ptr [bp + VALUE], ecx
#define TEST_ECX_TO_PTR_SI_(VALUE) test dword ptr [si + VALUE], ecx
#define TEST_ECX_TO_PTR_DI_(VALUE) test dword ptr [di + VALUE], ecx

#define TEST_EDX_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], edx
#define TEST_EDX_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], edx
#define TEST_EDX_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], edx
#define TEST_EDX_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], edx
#define TEST_EDX_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], edx
#define TEST_EDX_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], edx
#define TEST_EDX_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], edx
#define TEST_EDX_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], edx
#define TEST_EDX_TO_PTR_BX_(VALUE) test dword ptr [bx + VALUE], edx
#define TEST_EDX_TO_PTR_BP_(VALUE) test dword ptr [bp + VALUE], edx
#define TEST_EDX_TO_PTR_SI_(VALUE) test dword ptr [si + VALUE], edx
#define TEST_EDX_TO_PTR_DI_(VALUE) test dword ptr [di + VALUE], edx

#define TEST_EDI_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], edi
#define TEST_EDI_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], edi
#define TEST_EDI_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], edi
#define TEST_EDI_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], edi
#define TEST_EDI_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], edi
#define TEST_EDI_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], edi
#define TEST_EDI_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], edi
#define TEST_EDI_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], edi
#define TEST_EDI_TO_PTR_BX_(VALUE) test dword ptr [bx + VALUE], edi
#define TEST_EDI_TO_PTR_BP_(VALUE) test dword ptr [bp + VALUE], edi
#define TEST_EDI_TO_PTR_SI_(VALUE) test dword ptr [si + VALUE], edi
#define TEST_EDI_TO_PTR_DI_(VALUE) test dword ptr [di + VALUE], edi

#define TEST_ESI_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], esi
#define TEST_ESI_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], esi
#define TEST_ESI_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], esi
#define TEST_ESI_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], esi
#define TEST_ESI_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], esi
#define TEST_ESI_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], esi
#define TEST_ESI_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], esi
#define TEST_ESI_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], esi
#define TEST_ESI_TO_PTR_BX_(VALUE) test dword ptr [bx + VALUE], esi
#define TEST_ESI_TO_PTR_BP_(VALUE) test dword ptr [bp + VALUE], esi
#define TEST_ESI_TO_PTR_SI_(VALUE) test dword ptr [si + VALUE], esi
#define TEST_ESI_TO_PTR_DI_(VALUE) test dword ptr [di + VALUE], esi

#define TEST_EBP_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], ebp
#define TEST_EBP_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], ebp
#define TEST_EBP_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], ebp
#define TEST_EBP_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], ebp
#define TEST_EBP_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], ebp
#define TEST_EBP_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], ebp
#define TEST_EBP_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], ebp
#define TEST_EBP_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], ebp
#define TEST_EBP_TO_PTR_BX_(VALUE) test dword ptr [bx + VALUE], ebp
#define TEST_EBP_TO_PTR_BP_(VALUE) test dword ptr [bp + VALUE], ebp
#define TEST_EBP_TO_PTR_SI_(VALUE) test dword ptr [si + VALUE], ebp
#define TEST_EBP_TO_PTR_DI_(VALUE) test dword ptr [di + VALUE], ebp

#define TEST_ESP_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], esp
#define TEST_ESP_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], esp
#define TEST_ESP_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], esp
#define TEST_ESP_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], esp
#define TEST_ESP_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], esp
#define TEST_ESP_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], esp
#define TEST_ESP_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], esp
#define TEST_ESP_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], esp
#define TEST_ESP_TO_PTR_BX_(VALUE) test dword ptr [bx + VALUE], esp
#define TEST_ESP_TO_PTR_BP_(VALUE) test dword ptr [bp + VALUE], esp
#define TEST_ESP_TO_PTR_SI_(VALUE) test dword ptr [si + VALUE], esp
#define TEST_ESP_TO_PTR_DI_(VALUE) test dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_EAX_FROM_PTR_(VALUE) test eax, dword ptr [VALUE]
#define TEST_EBX_FROM_PTR_(VALUE) test ebx, dword ptr [VALUE]
#define TEST_ECX_FROM_PTR_(VALUE) test ecx, dword ptr [VALUE]
#define TEST_EDX_FROM_PTR_(VALUE) test edx, dword ptr [VALUE]
#define TEST_EDI_FROM_PTR_(VALUE) test edi, dword ptr [VALUE]
#define TEST_ESI_FROM_PTR_(VALUE) test esi, dword ptr [VALUE]
#define TEST_EBP_FROM_PTR_(VALUE) test ebp, dword ptr [VALUE]
#define TEST_ESP_FROM_PTR_(VALUE) test esp, dword ptr [VALUE]
#define TEST_R8D_FROM_PTR_(VALUE) test r8d, dword ptr [VALUE]
#define TEST_R9D_FROM_PTR_(VALUE) test r9d, dword ptr [VALUE]
#define TEST_R10D_FROM_PTR_(VALUE) test r10d, dword ptr [VALUE]
#define TEST_R11D_FROM_PTR_(VALUE) test r11d, dword ptr [VALUE]
#define TEST_R12D_FROM_PTR_(VALUE) test r12d, dword ptr [VALUE]
#define TEST_R13D_FROM_PTR_(VALUE) test r13d, dword ptr [VALUE]
#define TEST_R14D_FROM_PTR_(VALUE) test r14d, dword ptr [VALUE]
#define TEST_R15D_FROM_PTR_(VALUE) test r15d, dword ptr [VALUE]

#define TEST_EAX_TO_PTR_(VALUE) test dword ptr [VALUE], eax
#define TEST_EBX_TO_PTR_(VALUE) test dword ptr [VALUE], ebx
#define TEST_ECX_TO_PTR_(VALUE) test dword ptr [VALUE], ecx
#define TEST_EDX_TO_PTR_(VALUE) test dword ptr [VALUE], edx
#define TEST_EDI_TO_PTR_(VALUE) test dword ptr [VALUE], edi
#define TEST_ESI_TO_PTR_(VALUE) test dword ptr [VALUE], esi
#define TEST_EBP_TO_PTR_(VALUE) test dword ptr [VALUE], ebp
#define TEST_ESP_TO_PTR_(VALUE) test dword ptr [VALUE], esp
#define TEST_R8D_TO_PTR_(VALUE) test dword ptr [VALUE], r8d
#define TEST_R9D_TO_PTR_(VALUE) test dword ptr [VALUE], r9d
#define TEST_R10D_TO_PTR_(VALUE) test dword ptr [VALUE], r10d
#define TEST_R11D_TO_PTR_(VALUE) test dword ptr [VALUE], r11d
#define TEST_R12D_TO_PTR_(VALUE) test dword ptr [VALUE], r12d
#define TEST_R13D_TO_PTR_(VALUE) test dword ptr [VALUE], r13d
#define TEST_R14D_TO_PTR_(VALUE) test dword ptr [VALUE], r14d
#define TEST_R15D_TO_PTR_(VALUE) test dword ptr [VALUE], r15d

#define TEST_EAX_FROM_PTR_RAX test eax, dword ptr [rax]
#define TEST_EAX_FROM_PTR_RBX test eax, dword ptr [rbx]
#define TEST_EAX_FROM_PTR_RCX test eax, dword ptr [rcx]
#define TEST_EAX_FROM_PTR_RDX test eax, dword ptr [rdx]
#define TEST_EAX_FROM_PTR_RDI test eax, dword ptr [rdi]
#define TEST_EAX_FROM_PTR_RSI test eax, dword ptr [rsi]
#define TEST_EAX_FROM_PTR_RBP test eax, dword ptr [rbp]
#define TEST_EAX_FROM_PTR_RSP test eax, dword ptr [rsp]
#define TEST_EAX_FROM_PTR_R8 test eax, dword ptr [r8]
#define TEST_EAX_FROM_PTR_R9 test eax, dword ptr [r9]
#define TEST_EAX_FROM_PTR_R10 test eax, dword ptr [r10]
#define TEST_EAX_FROM_PTR_R11 test eax, dword ptr [r11]
#define TEST_EAX_FROM_PTR_R12 test eax, dword ptr [r12]
#define TEST_EAX_FROM_PTR_R13 test eax, dword ptr [r13]
#define TEST_EAX_FROM_PTR_R14 test eax, dword ptr [r14]
#define TEST_EAX_FROM_PTR_R15 test eax, dword ptr [r15]
#define TEST_EAX_FROM_PTR_EAX test eax, dword ptr [eax]
#define TEST_EAX_FROM_PTR_EBX test eax, dword ptr [ebx]
#define TEST_EAX_FROM_PTR_ECX test eax, dword ptr [ecx]
#define TEST_EAX_FROM_PTR_EDX test eax, dword ptr [edx]
#define TEST_EAX_FROM_PTR_EDI test eax, dword ptr [edi]
#define TEST_EAX_FROM_PTR_ESI test eax, dword ptr [esi]
#define TEST_EAX_FROM_PTR_EBP test eax, dword ptr [ebp]
#define TEST_EAX_FROM_PTR_ESP test eax, dword ptr [esp]

#define TEST_EBX_FROM_PTR_RAX test ebx, dword ptr [rax]
#define TEST_EBX_FROM_PTR_RBX test ebx, dword ptr [rbx]
#define TEST_EBX_FROM_PTR_RCX test ebx, dword ptr [rcx]
#define TEST_EBX_FROM_PTR_RDX test ebx, dword ptr [rdx]
#define TEST_EBX_FROM_PTR_RDI test ebx, dword ptr [rdi]
#define TEST_EBX_FROM_PTR_RSI test ebx, dword ptr [rsi]
#define TEST_EBX_FROM_PTR_RBP test ebx, dword ptr [rbp]
#define TEST_EBX_FROM_PTR_RSP test ebx, dword ptr [rsp]
#define TEST_EBX_FROM_PTR_R8 test ebx, dword ptr [r8]
#define TEST_EBX_FROM_PTR_R9 test ebx, dword ptr [r9]
#define TEST_EBX_FROM_PTR_R10 test ebx, dword ptr [r10]
#define TEST_EBX_FROM_PTR_R11 test ebx, dword ptr [r11]
#define TEST_EBX_FROM_PTR_R12 test ebx, dword ptr [r12]
#define TEST_EBX_FROM_PTR_R13 test ebx, dword ptr [r13]
#define TEST_EBX_FROM_PTR_R14 test ebx, dword ptr [r14]
#define TEST_EBX_FROM_PTR_R15 test ebx, dword ptr [r15]
#define TEST_EBX_FROM_PTR_EAX test ebx, dword ptr [eax]
#define TEST_EBX_FROM_PTR_EBX test ebx, dword ptr [ebx]
#define TEST_EBX_FROM_PTR_ECX test ebx, dword ptr [ecx]
#define TEST_EBX_FROM_PTR_EDX test ebx, dword ptr [edx]
#define TEST_EBX_FROM_PTR_EDI test ebx, dword ptr [edi]
#define TEST_EBX_FROM_PTR_ESI test ebx, dword ptr [esi]
#define TEST_EBX_FROM_PTR_EBP test ebx, dword ptr [ebp]
#define TEST_EBX_FROM_PTR_ESP test ebx, dword ptr [esp]

#define TEST_ECX_FROM_PTR_RAX test ecx, dword ptr [rax]
#define TEST_ECX_FROM_PTR_RBX test ecx, dword ptr [rbx]
#define TEST_ECX_FROM_PTR_RCX test ecx, dword ptr [rcx]
#define TEST_ECX_FROM_PTR_RDX test ecx, dword ptr [rdx]
#define TEST_ECX_FROM_PTR_RDI test ecx, dword ptr [rdi]
#define TEST_ECX_FROM_PTR_RSI test ecx, dword ptr [rsi]
#define TEST_ECX_FROM_PTR_RBP test ecx, dword ptr [rbp]
#define TEST_ECX_FROM_PTR_RSP test ecx, dword ptr [rsp]
#define TEST_ECX_FROM_PTR_R8 test ecx, dword ptr [r8]
#define TEST_ECX_FROM_PTR_R9 test ecx, dword ptr [r9]
#define TEST_ECX_FROM_PTR_R10 test ecx, dword ptr [r10]
#define TEST_ECX_FROM_PTR_R11 test ecx, dword ptr [r11]
#define TEST_ECX_FROM_PTR_R12 test ecx, dword ptr [r12]
#define TEST_ECX_FROM_PTR_R13 test ecx, dword ptr [r13]
#define TEST_ECX_FROM_PTR_R14 test ecx, dword ptr [r14]
#define TEST_ECX_FROM_PTR_R15 test ecx, dword ptr [r15]
#define TEST_ECX_FROM_PTR_EAX test ecx, dword ptr [eax]
#define TEST_ECX_FROM_PTR_EBX test ecx, dword ptr [ebx]
#define TEST_ECX_FROM_PTR_ECX test ecx, dword ptr [ecx]
#define TEST_ECX_FROM_PTR_EDX test ecx, dword ptr [edx]
#define TEST_ECX_FROM_PTR_EDI test ecx, dword ptr [edi]
#define TEST_ECX_FROM_PTR_ESI test ecx, dword ptr [esi]
#define TEST_ECX_FROM_PTR_EBP test ecx, dword ptr [ebp]
#define TEST_ECX_FROM_PTR_ESP test ecx, dword ptr [esp]

#define TEST_EDX_FROM_PTR_RAX test edx, dword ptr [rax]
#define TEST_EDX_FROM_PTR_RBX test edx, dword ptr [rbx]
#define TEST_EDX_FROM_PTR_RCX test edx, dword ptr [rcx]
#define TEST_EDX_FROM_PTR_RDX test edx, dword ptr [rdx]
#define TEST_EDX_FROM_PTR_RDI test edx, dword ptr [rdi]
#define TEST_EDX_FROM_PTR_RSI test edx, dword ptr [rsi]
#define TEST_EDX_FROM_PTR_RBP test edx, dword ptr [rbp]
#define TEST_EDX_FROM_PTR_RSP test edx, dword ptr [rsp]
#define TEST_EDX_FROM_PTR_R8 test edx, dword ptr [r8]
#define TEST_EDX_FROM_PTR_R9 test edx, dword ptr [r9]
#define TEST_EDX_FROM_PTR_R10 test edx, dword ptr [r10]
#define TEST_EDX_FROM_PTR_R11 test edx, dword ptr [r11]
#define TEST_EDX_FROM_PTR_R12 test edx, dword ptr [r12]
#define TEST_EDX_FROM_PTR_R13 test edx, dword ptr [r13]
#define TEST_EDX_FROM_PTR_R14 test edx, dword ptr [r14]
#define TEST_EDX_FROM_PTR_R15 test edx, dword ptr [r15]
#define TEST_EDX_FROM_PTR_EAX test edx, dword ptr [eax]
#define TEST_EDX_FROM_PTR_EBX test edx, dword ptr [ebx]
#define TEST_EDX_FROM_PTR_ECX test edx, dword ptr [ecx]
#define TEST_EDX_FROM_PTR_EDX test edx, dword ptr [edx]
#define TEST_EDX_FROM_PTR_EDI test edx, dword ptr [edi]
#define TEST_EDX_FROM_PTR_ESI test edx, dword ptr [esi]
#define TEST_EDX_FROM_PTR_EBP test edx, dword ptr [ebp]
#define TEST_EDX_FROM_PTR_ESP test edx, dword ptr [esp]

#define TEST_EDI_FROM_PTR_RAX test edi, dword ptr [rax]
#define TEST_EDI_FROM_PTR_RBX test edi, dword ptr [rbx]
#define TEST_EDI_FROM_PTR_RCX test edi, dword ptr [rcx]
#define TEST_EDI_FROM_PTR_RDX test edi, dword ptr [rdx]
#define TEST_EDI_FROM_PTR_RDI test edi, dword ptr [rdi]
#define TEST_EDI_FROM_PTR_RSI test edi, dword ptr [rsi]
#define TEST_EDI_FROM_PTR_RBP test edi, dword ptr [rbp]
#define TEST_EDI_FROM_PTR_RSP test edi, dword ptr [rsp]
#define TEST_EDI_FROM_PTR_R8 test edi, dword ptr [r8]
#define TEST_EDI_FROM_PTR_R9 test edi, dword ptr [r9]
#define TEST_EDI_FROM_PTR_R10 test edi, dword ptr [r10]
#define TEST_EDI_FROM_PTR_R11 test edi, dword ptr [r11]
#define TEST_EDI_FROM_PTR_R12 test edi, dword ptr [r12]
#define TEST_EDI_FROM_PTR_R13 test edi, dword ptr [r13]
#define TEST_EDI_FROM_PTR_R14 test edi, dword ptr [r14]
#define TEST_EDI_FROM_PTR_R15 test edi, dword ptr [r15]
#define TEST_EDI_FROM_PTR_EAX test edi, dword ptr [eax]
#define TEST_EDI_FROM_PTR_EBX test edi, dword ptr [ebx]
#define TEST_EDI_FROM_PTR_ECX test edi, dword ptr [ecx]
#define TEST_EDI_FROM_PTR_EDX test edi, dword ptr [edx]
#define TEST_EDI_FROM_PTR_EDI test edi, dword ptr [edi]
#define TEST_EDI_FROM_PTR_ESI test edi, dword ptr [esi]
#define TEST_EDI_FROM_PTR_EBP test edi, dword ptr [ebp]
#define TEST_EDI_FROM_PTR_ESP test edi, dword ptr [esp]

#define TEST_ESI_FROM_PTR_RAX test esi, dword ptr [rax]
#define TEST_ESI_FROM_PTR_RBX test esi, dword ptr [rbx]
#define TEST_ESI_FROM_PTR_RCX test esi, dword ptr [rcx]
#define TEST_ESI_FROM_PTR_RDX test esi, dword ptr [rdx]
#define TEST_ESI_FROM_PTR_RDI test esi, dword ptr [rdi]
#define TEST_ESI_FROM_PTR_RSI test esi, dword ptr [rsi]
#define TEST_ESI_FROM_PTR_RBP test esi, dword ptr [rbp]
#define TEST_ESI_FROM_PTR_RSP test esi, dword ptr [rsp]
#define TEST_ESI_FROM_PTR_R8 test esi, dword ptr [r8]
#define TEST_ESI_FROM_PTR_R9 test esi, dword ptr [r9]
#define TEST_ESI_FROM_PTR_R10 test esi, dword ptr [r10]
#define TEST_ESI_FROM_PTR_R11 test esi, dword ptr [r11]
#define TEST_ESI_FROM_PTR_R12 test esi, dword ptr [r12]
#define TEST_ESI_FROM_PTR_R13 test esi, dword ptr [r13]
#define TEST_ESI_FROM_PTR_R14 test esi, dword ptr [r14]
#define TEST_ESI_FROM_PTR_R15 test esi, dword ptr [r15]
#define TEST_ESI_FROM_PTR_EAX test esi, dword ptr [eax]
#define TEST_ESI_FROM_PTR_EBX test esi, dword ptr [ebx]
#define TEST_ESI_FROM_PTR_ECX test esi, dword ptr [ecx]
#define TEST_ESI_FROM_PTR_EDX test esi, dword ptr [edx]
#define TEST_ESI_FROM_PTR_EDI test esi, dword ptr [edi]
#define TEST_ESI_FROM_PTR_ESI test esi, dword ptr [esi]
#define TEST_ESI_FROM_PTR_EBP test esi, dword ptr [ebp]
#define TEST_ESI_FROM_PTR_ESP test esi, dword ptr [esp]

#define TEST_EBP_FROM_PTR_RAX test ebp, dword ptr [rax]
#define TEST_EBP_FROM_PTR_RBX test ebp, dword ptr [rbx]
#define TEST_EBP_FROM_PTR_RCX test ebp, dword ptr [rcx]
#define TEST_EBP_FROM_PTR_RDX test ebp, dword ptr [rdx]
#define TEST_EBP_FROM_PTR_RDI test ebp, dword ptr [rdi]
#define TEST_EBP_FROM_PTR_RSI test ebp, dword ptr [rsi]
#define TEST_EBP_FROM_PTR_RBP test ebp, dword ptr [rbp]
#define TEST_EBP_FROM_PTR_RSP test ebp, dword ptr [rsp]
#define TEST_EBP_FROM_PTR_R8 test ebp, dword ptr [r8]
#define TEST_EBP_FROM_PTR_R9 test ebp, dword ptr [r9]
#define TEST_EBP_FROM_PTR_R10 test ebp, dword ptr [r10]
#define TEST_EBP_FROM_PTR_R11 test ebp, dword ptr [r11]
#define TEST_EBP_FROM_PTR_R12 test ebp, dword ptr [r12]
#define TEST_EBP_FROM_PTR_R13 test ebp, dword ptr [r13]
#define TEST_EBP_FROM_PTR_R14 test ebp, dword ptr [r14]
#define TEST_EBP_FROM_PTR_R15 test ebp, dword ptr [r15]
#define TEST_EBP_FROM_PTR_EAX test ebp, dword ptr [eax]
#define TEST_EBP_FROM_PTR_EBX test ebp, dword ptr [ebx]
#define TEST_EBP_FROM_PTR_ECX test ebp, dword ptr [ecx]
#define TEST_EBP_FROM_PTR_EDX test ebp, dword ptr [edx]
#define TEST_EBP_FROM_PTR_EDI test ebp, dword ptr [edi]
#define TEST_EBP_FROM_PTR_ESI test ebp, dword ptr [esi]
#define TEST_EBP_FROM_PTR_EBP test ebp, dword ptr [ebp]
#define TEST_EBP_FROM_PTR_ESP test ebp, dword ptr [esp]

#define TEST_ESP_FROM_PTR_RAX test esp, dword ptr [rax]
#define TEST_ESP_FROM_PTR_RBX test esp, dword ptr [rbx]
#define TEST_ESP_FROM_PTR_RCX test esp, dword ptr [rcx]
#define TEST_ESP_FROM_PTR_RDX test esp, dword ptr [rdx]
#define TEST_ESP_FROM_PTR_RDI test esp, dword ptr [rdi]
#define TEST_ESP_FROM_PTR_RSI test esp, dword ptr [rsi]
#define TEST_ESP_FROM_PTR_RBP test esp, dword ptr [rbp]
#define TEST_ESP_FROM_PTR_RSP test esp, dword ptr [rsp]
#define TEST_ESP_FROM_PTR_R8 test esp, dword ptr [r8]
#define TEST_ESP_FROM_PTR_R9 test esp, dword ptr [r9]
#define TEST_ESP_FROM_PTR_R10 test esp, dword ptr [r10]
#define TEST_ESP_FROM_PTR_R11 test esp, dword ptr [r11]
#define TEST_ESP_FROM_PTR_R12 test esp, dword ptr [r12]
#define TEST_ESP_FROM_PTR_R13 test esp, dword ptr [r13]
#define TEST_ESP_FROM_PTR_R14 test esp, dword ptr [r14]
#define TEST_ESP_FROM_PTR_R15 test esp, dword ptr [r15]
#define TEST_ESP_FROM_PTR_EAX test esp, dword ptr [eax]
#define TEST_ESP_FROM_PTR_EBX test esp, dword ptr [ebx]
#define TEST_ESP_FROM_PTR_ECX test esp, dword ptr [ecx]
#define TEST_ESP_FROM_PTR_EDX test esp, dword ptr [edx]
#define TEST_ESP_FROM_PTR_EDI test esp, dword ptr [edi]
#define TEST_ESP_FROM_PTR_ESI test esp, dword ptr [esi]
#define TEST_ESP_FROM_PTR_EBP test esp, dword ptr [ebp]
#define TEST_ESP_FROM_PTR_ESP test esp, dword ptr [esp]

#define TEST_R8D_FROM_PTR_RAX test r8d, dword ptr [rax]
#define TEST_R8D_FROM_PTR_RBX test r8d, dword ptr [rbx]
#define TEST_R8D_FROM_PTR_RCX test r8d, dword ptr [rcx]
#define TEST_R8D_FROM_PTR_RDX test r8d, dword ptr [rdx]
#define TEST_R8D_FROM_PTR_RDI test r8d, dword ptr [rdi]
#define TEST_R8D_FROM_PTR_RSI test r8d, dword ptr [rsi]
#define TEST_R8D_FROM_PTR_RBP test r8d, dword ptr [rbp]
#define TEST_R8D_FROM_PTR_RSP test r8d, dword ptr [rsp]
#define TEST_R8D_FROM_PTR_R8 test r8d, dword ptr [r8]
#define TEST_R8D_FROM_PTR_R9 test r8d, dword ptr [r9]
#define TEST_R8D_FROM_PTR_R10 test r8d, dword ptr [r10]
#define TEST_R8D_FROM_PTR_R11 test r8d, dword ptr [r11]
#define TEST_R8D_FROM_PTR_R12 test r8d, dword ptr [r12]
#define TEST_R8D_FROM_PTR_R13 test r8d, dword ptr [r13]
#define TEST_R8D_FROM_PTR_R14 test r8d, dword ptr [r14]
#define TEST_R8D_FROM_PTR_R15 test r8d, dword ptr [r15]
#define TEST_R8D_FROM_PTR_EAX test r8d, dword ptr [eax]
#define TEST_R8D_FROM_PTR_EBX test r8d, dword ptr [ebx]
#define TEST_R8D_FROM_PTR_ECX test r8d, dword ptr [ecx]
#define TEST_R8D_FROM_PTR_EDX test r8d, dword ptr [edx]
#define TEST_R8D_FROM_PTR_EDI test r8d, dword ptr [edi]
#define TEST_R8D_FROM_PTR_ESI test r8d, dword ptr [esi]
#define TEST_R8D_FROM_PTR_EBP test r8d, dword ptr [ebp]
#define TEST_R8D_FROM_PTR_ESP test r8d, dword ptr [esp]

#define TEST_R9D_FROM_PTR_RAX test r9d, dword ptr [rax]
#define TEST_R9D_FROM_PTR_RBX test r9d, dword ptr [rbx]
#define TEST_R9D_FROM_PTR_RCX test r9d, dword ptr [rcx]
#define TEST_R9D_FROM_PTR_RDX test r9d, dword ptr [rdx]
#define TEST_R9D_FROM_PTR_RDI test r9d, dword ptr [rdi]
#define TEST_R9D_FROM_PTR_RSI test r9d, dword ptr [rsi]
#define TEST_R9D_FROM_PTR_RBP test r9d, dword ptr [rbp]
#define TEST_R9D_FROM_PTR_RSP test r9d, dword ptr [rsp]
#define TEST_R9D_FROM_PTR_R8 test r9d, dword ptr [r8]
#define TEST_R9D_FROM_PTR_R9 test r9d, dword ptr [r9]
#define TEST_R9D_FROM_PTR_R10 test r9d, dword ptr [r10]
#define TEST_R9D_FROM_PTR_R11 test r9d, dword ptr [r11]
#define TEST_R9D_FROM_PTR_R12 test r9d, dword ptr [r12]
#define TEST_R9D_FROM_PTR_R13 test r9d, dword ptr [r13]
#define TEST_R9D_FROM_PTR_R14 test r9d, dword ptr [r14]
#define TEST_R9D_FROM_PTR_R15 test r9d, dword ptr [r15]
#define TEST_R9D_FROM_PTR_EAX test r9d, dword ptr [eax]
#define TEST_R9D_FROM_PTR_EBX test r9d, dword ptr [ebx]
#define TEST_R9D_FROM_PTR_ECX test r9d, dword ptr [ecx]
#define TEST_R9D_FROM_PTR_EDX test r9d, dword ptr [edx]
#define TEST_R9D_FROM_PTR_EDI test r9d, dword ptr [edi]
#define TEST_R9D_FROM_PTR_ESI test r9d, dword ptr [esi]
#define TEST_R9D_FROM_PTR_EBP test r9d, dword ptr [ebp]
#define TEST_R9D_FROM_PTR_ESP test r9d, dword ptr [esp]

#define TEST_R10D_FROM_PTR_RAX test r10d, dword ptr [rax]
#define TEST_R10D_FROM_PTR_RBX test r10d, dword ptr [rbx]
#define TEST_R10D_FROM_PTR_RCX test r10d, dword ptr [rcx]
#define TEST_R10D_FROM_PTR_RDX test r10d, dword ptr [rdx]
#define TEST_R10D_FROM_PTR_RDI test r10d, dword ptr [rdi]
#define TEST_R10D_FROM_PTR_RSI test r10d, dword ptr [rsi]
#define TEST_R10D_FROM_PTR_RBP test r10d, dword ptr [rbp]
#define TEST_R10D_FROM_PTR_RSP test r10d, dword ptr [rsp]
#define TEST_R10D_FROM_PTR_R8 test r10d, dword ptr [r8]
#define TEST_R10D_FROM_PTR_R9 test r10d, dword ptr [r9]
#define TEST_R10D_FROM_PTR_R10 test r10d, dword ptr [r10]
#define TEST_R10D_FROM_PTR_R11 test r10d, dword ptr [r11]
#define TEST_R10D_FROM_PTR_R12 test r10d, dword ptr [r12]
#define TEST_R10D_FROM_PTR_R13 test r10d, dword ptr [r13]
#define TEST_R10D_FROM_PTR_R14 test r10d, dword ptr [r14]
#define TEST_R10D_FROM_PTR_R15 test r10d, dword ptr [r15]
#define TEST_R10D_FROM_PTR_EAX test r10d, dword ptr [eax]
#define TEST_R10D_FROM_PTR_EBX test r10d, dword ptr [ebx]
#define TEST_R10D_FROM_PTR_ECX test r10d, dword ptr [ecx]
#define TEST_R10D_FROM_PTR_EDX test r10d, dword ptr [edx]
#define TEST_R10D_FROM_PTR_EDI test r10d, dword ptr [edi]
#define TEST_R10D_FROM_PTR_ESI test r10d, dword ptr [esi]
#define TEST_R10D_FROM_PTR_EBP test r10d, dword ptr [ebp]
#define TEST_R10D_FROM_PTR_ESP test r10d, dword ptr [esp]

#define TEST_R11D_FROM_PTR_RAX test r11d, dword ptr [rax]
#define TEST_R11D_FROM_PTR_RBX test r11d, dword ptr [rbx]
#define TEST_R11D_FROM_PTR_RCX test r11d, dword ptr [rcx]
#define TEST_R11D_FROM_PTR_RDX test r11d, dword ptr [rdx]
#define TEST_R11D_FROM_PTR_RDI test r11d, dword ptr [rdi]
#define TEST_R11D_FROM_PTR_RSI test r11d, dword ptr [rsi]
#define TEST_R11D_FROM_PTR_RBP test r11d, dword ptr [rbp]
#define TEST_R11D_FROM_PTR_RSP test r11d, dword ptr [rsp]
#define TEST_R11D_FROM_PTR_R8 test r11d, dword ptr [r8]
#define TEST_R11D_FROM_PTR_R9 test r11d, dword ptr [r9]
#define TEST_R11D_FROM_PTR_R10 test r11d, dword ptr [r10]
#define TEST_R11D_FROM_PTR_R11 test r11d, dword ptr [r11]
#define TEST_R11D_FROM_PTR_R12 test r11d, dword ptr [r12]
#define TEST_R11D_FROM_PTR_R13 test r11d, dword ptr [r13]
#define TEST_R11D_FROM_PTR_R14 test r11d, dword ptr [r14]
#define TEST_R11D_FROM_PTR_R15 test r11d, dword ptr [r15]
#define TEST_R11D_FROM_PTR_EAX test r11d, dword ptr [eax]
#define TEST_R11D_FROM_PTR_EBX test r11d, dword ptr [ebx]
#define TEST_R11D_FROM_PTR_ECX test r11d, dword ptr [ecx]
#define TEST_R11D_FROM_PTR_EDX test r11d, dword ptr [edx]
#define TEST_R11D_FROM_PTR_EDI test r11d, dword ptr [edi]
#define TEST_R11D_FROM_PTR_ESI test r11d, dword ptr [esi]
#define TEST_R11D_FROM_PTR_EBP test r11d, dword ptr [ebp]
#define TEST_R11D_FROM_PTR_ESP test r11d, dword ptr [esp]

#define TEST_R12D_FROM_PTR_RAX test r12d, dword ptr [rax]
#define TEST_R12D_FROM_PTR_RBX test r12d, dword ptr [rbx]
#define TEST_R12D_FROM_PTR_RCX test r12d, dword ptr [rcx]
#define TEST_R12D_FROM_PTR_RDX test r12d, dword ptr [rdx]
#define TEST_R12D_FROM_PTR_RDI test r12d, dword ptr [rdi]
#define TEST_R12D_FROM_PTR_RSI test r12d, dword ptr [rsi]
#define TEST_R12D_FROM_PTR_RBP test r12d, dword ptr [rbp]
#define TEST_R12D_FROM_PTR_RSP test r12d, dword ptr [rsp]
#define TEST_R12D_FROM_PTR_R8 test r12d, dword ptr [r8]
#define TEST_R12D_FROM_PTR_R9 test r12d, dword ptr [r9]
#define TEST_R12D_FROM_PTR_R10 test r12d, dword ptr [r10]
#define TEST_R12D_FROM_PTR_R11 test r12d, dword ptr [r11]
#define TEST_R12D_FROM_PTR_R12 test r12d, dword ptr [r12]
#define TEST_R12D_FROM_PTR_R13 test r12d, dword ptr [r13]
#define TEST_R12D_FROM_PTR_R14 test r12d, dword ptr [r14]
#define TEST_R12D_FROM_PTR_R15 test r12d, dword ptr [r15]
#define TEST_R12D_FROM_PTR_EAX test r12d, dword ptr [eax]
#define TEST_R12D_FROM_PTR_EBX test r12d, dword ptr [ebx]
#define TEST_R12D_FROM_PTR_ECX test r12d, dword ptr [ecx]
#define TEST_R12D_FROM_PTR_EDX test r12d, dword ptr [edx]
#define TEST_R12D_FROM_PTR_EDI test r12d, dword ptr [edi]
#define TEST_R12D_FROM_PTR_ESI test r12d, dword ptr [esi]
#define TEST_R12D_FROM_PTR_EBP test r12d, dword ptr [ebp]
#define TEST_R12D_FROM_PTR_ESP test r12d, dword ptr [esp]

#define TEST_R13D_FROM_PTR_RAX test r13d, dword ptr [rax]
#define TEST_R13D_FROM_PTR_RBX test r13d, dword ptr [rbx]
#define TEST_R13D_FROM_PTR_RCX test r13d, dword ptr [rcx]
#define TEST_R13D_FROM_PTR_RDX test r13d, dword ptr [rdx]
#define TEST_R13D_FROM_PTR_RDI test r13d, dword ptr [rdi]
#define TEST_R13D_FROM_PTR_RSI test r13d, dword ptr [rsi]
#define TEST_R13D_FROM_PTR_RBP test r13d, dword ptr [rbp]
#define TEST_R13D_FROM_PTR_RSP test r13d, dword ptr [rsp]
#define TEST_R13D_FROM_PTR_R8 test r13d, dword ptr [r8]
#define TEST_R13D_FROM_PTR_R9 test r13d, dword ptr [r9]
#define TEST_R13D_FROM_PTR_R10 test r13d, dword ptr [r10]
#define TEST_R13D_FROM_PTR_R11 test r13d, dword ptr [r11]
#define TEST_R13D_FROM_PTR_R12 test r13d, dword ptr [r12]
#define TEST_R13D_FROM_PTR_R13 test r13d, dword ptr [r13]
#define TEST_R13D_FROM_PTR_R14 test r13d, dword ptr [r14]
#define TEST_R13D_FROM_PTR_R15 test r13d, dword ptr [r15]
#define TEST_R13D_FROM_PTR_EAX test r13d, dword ptr [eax]
#define TEST_R13D_FROM_PTR_EBX test r13d, dword ptr [ebx]
#define TEST_R13D_FROM_PTR_ECX test r13d, dword ptr [ecx]
#define TEST_R13D_FROM_PTR_EDX test r13d, dword ptr [edx]
#define TEST_R13D_FROM_PTR_EDI test r13d, dword ptr [edi]
#define TEST_R13D_FROM_PTR_ESI test r13d, dword ptr [esi]
#define TEST_R13D_FROM_PTR_EBP test r13d, dword ptr [ebp]
#define TEST_R13D_FROM_PTR_ESP test r13d, dword ptr [esp]

#define TEST_R14D_FROM_PTR_RAX test r14d, dword ptr [rax]
#define TEST_R14D_FROM_PTR_RBX test r14d, dword ptr [rbx]
#define TEST_R14D_FROM_PTR_RCX test r14d, dword ptr [rcx]
#define TEST_R14D_FROM_PTR_RDX test r14d, dword ptr [rdx]
#define TEST_R14D_FROM_PTR_RDI test r14d, dword ptr [rdi]
#define TEST_R14D_FROM_PTR_RSI test r14d, dword ptr [rsi]
#define TEST_R14D_FROM_PTR_RBP test r14d, dword ptr [rbp]
#define TEST_R14D_FROM_PTR_RSP test r14d, dword ptr [rsp]
#define TEST_R14D_FROM_PTR_R8 test r14d, dword ptr [r8]
#define TEST_R14D_FROM_PTR_R9 test r14d, dword ptr [r9]
#define TEST_R14D_FROM_PTR_R10 test r14d, dword ptr [r10]
#define TEST_R14D_FROM_PTR_R11 test r14d, dword ptr [r11]
#define TEST_R14D_FROM_PTR_R12 test r14d, dword ptr [r12]
#define TEST_R14D_FROM_PTR_R13 test r14d, dword ptr [r13]
#define TEST_R14D_FROM_PTR_R14 test r14d, dword ptr [r14]
#define TEST_R14D_FROM_PTR_R15 test r14d, dword ptr [r15]
#define TEST_R14D_FROM_PTR_EAX test r14d, dword ptr [eax]
#define TEST_R14D_FROM_PTR_EBX test r14d, dword ptr [ebx]
#define TEST_R14D_FROM_PTR_ECX test r14d, dword ptr [ecx]
#define TEST_R14D_FROM_PTR_EDX test r14d, dword ptr [edx]
#define TEST_R14D_FROM_PTR_EDI test r14d, dword ptr [edi]
#define TEST_R14D_FROM_PTR_ESI test r14d, dword ptr [esi]
#define TEST_R14D_FROM_PTR_EBP test r14d, dword ptr [ebp]
#define TEST_R14D_FROM_PTR_ESP test r14d, dword ptr [esp]

#define TEST_R15D_FROM_PTR_RAX test r15d, dword ptr [rax]
#define TEST_R15D_FROM_PTR_RBX test r15d, dword ptr [rbx]
#define TEST_R15D_FROM_PTR_RCX test r15d, dword ptr [rcx]
#define TEST_R15D_FROM_PTR_RDX test r15d, dword ptr [rdx]
#define TEST_R15D_FROM_PTR_RDI test r15d, dword ptr [rdi]
#define TEST_R15D_FROM_PTR_RSI test r15d, dword ptr [rsi]
#define TEST_R15D_FROM_PTR_RBP test r15d, dword ptr [rbp]
#define TEST_R15D_FROM_PTR_RSP test r15d, dword ptr [rsp]
#define TEST_R15D_FROM_PTR_R8 test r15d, dword ptr [r8]
#define TEST_R15D_FROM_PTR_R9 test r15d, dword ptr [r9]
#define TEST_R15D_FROM_PTR_R10 test r15d, dword ptr [r10]
#define TEST_R15D_FROM_PTR_R11 test r15d, dword ptr [r11]
#define TEST_R15D_FROM_PTR_R12 test r15d, dword ptr [r12]
#define TEST_R15D_FROM_PTR_R13 test r15d, dword ptr [r13]
#define TEST_R15D_FROM_PTR_R14 test r15d, dword ptr [r14]
#define TEST_R15D_FROM_PTR_R15 test r15d, dword ptr [r15]
#define TEST_R15D_FROM_PTR_EAX test r15d, dword ptr [eax]
#define TEST_R15D_FROM_PTR_EBX test r15d, dword ptr [ebx]
#define TEST_R15D_FROM_PTR_ECX test r15d, dword ptr [ecx]
#define TEST_R15D_FROM_PTR_EDX test r15d, dword ptr [edx]
#define TEST_R15D_FROM_PTR_EDI test r15d, dword ptr [edi]
#define TEST_R15D_FROM_PTR_ESI test r15d, dword ptr [esi]
#define TEST_R15D_FROM_PTR_EBP test r15d, dword ptr [ebp]
#define TEST_R15D_FROM_PTR_ESP test r15d, dword ptr [esp]

#define TEST_EAX_TO_PTR_RAX test dword ptr [rax], eax
#define TEST_EAX_TO_PTR_RBX test dword ptr [rbx], eax
#define TEST_EAX_TO_PTR_RCX test dword ptr [rcx], eax
#define TEST_EAX_TO_PTR_RDX test dword ptr [rdx], eax
#define TEST_EAX_TO_PTR_RDI test dword ptr [rdi], eax
#define TEST_EAX_TO_PTR_RSI test dword ptr [rsi], eax
#define TEST_EAX_TO_PTR_RBP test dword ptr [rbp], eax
#define TEST_EAX_TO_PTR_RSP test dword ptr [rsp], eax
#define TEST_EAX_TO_PTR_R8 test dword ptr [r8], eax
#define TEST_EAX_TO_PTR_R9 test dword ptr [r9], eax
#define TEST_EAX_TO_PTR_R10 test dword ptr [r10], eax
#define TEST_EAX_TO_PTR_R11 test dword ptr [r11], eax
#define TEST_EAX_TO_PTR_R12 test dword ptr [r12], eax
#define TEST_EAX_TO_PTR_R13 test dword ptr [r13], eax
#define TEST_EAX_TO_PTR_R14 test dword ptr [r14], eax
#define TEST_EAX_TO_PTR_R15 test dword ptr [r15], eax
#define TEST_EAX_TO_PTR_EAX test dword ptr [eax], eax
#define TEST_EAX_TO_PTR_EBX test dword ptr [ebx], eax
#define TEST_EAX_TO_PTR_ECX test dword ptr [ecx], eax
#define TEST_EAX_TO_PTR_EDX test dword ptr [edx], eax
#define TEST_EAX_TO_PTR_EDI test dword ptr [edi], eax
#define TEST_EAX_TO_PTR_ESI test dword ptr [esi], eax
#define TEST_EAX_TO_PTR_EBP test dword ptr [ebp], eax
#define TEST_EAX_TO_PTR_ESP test dword ptr [esp], eax

#define TEST_EBX_TO_PTR_RAX test dword ptr [rax], ebx
#define TEST_EBX_TO_PTR_RBX test dword ptr [rbx], ebx
#define TEST_EBX_TO_PTR_RCX test dword ptr [rcx], ebx
#define TEST_EBX_TO_PTR_RDX test dword ptr [rdx], ebx
#define TEST_EBX_TO_PTR_RDI test dword ptr [rdi], ebx
#define TEST_EBX_TO_PTR_RSI test dword ptr [rsi], ebx
#define TEST_EBX_TO_PTR_RBP test dword ptr [rbp], ebx
#define TEST_EBX_TO_PTR_RSP test dword ptr [rsp], ebx
#define TEST_EBX_TO_PTR_R8 test dword ptr [r8], ebx
#define TEST_EBX_TO_PTR_R9 test dword ptr [r9], ebx
#define TEST_EBX_TO_PTR_R10 test dword ptr [r10], ebx
#define TEST_EBX_TO_PTR_R11 test dword ptr [r11], ebx
#define TEST_EBX_TO_PTR_R12 test dword ptr [r12], ebx
#define TEST_EBX_TO_PTR_R13 test dword ptr [r13], ebx
#define TEST_EBX_TO_PTR_R14 test dword ptr [r14], ebx
#define TEST_EBX_TO_PTR_R15 test dword ptr [r15], ebx
#define TEST_EBX_TO_PTR_EAX test dword ptr [eax], ebx
#define TEST_EBX_TO_PTR_EBX test dword ptr [ebx], ebx
#define TEST_EBX_TO_PTR_ECX test dword ptr [ecx], ebx
#define TEST_EBX_TO_PTR_EDX test dword ptr [edx], ebx
#define TEST_EBX_TO_PTR_EDI test dword ptr [edi], ebx
#define TEST_EBX_TO_PTR_ESI test dword ptr [esi], ebx
#define TEST_EBX_TO_PTR_EBP test dword ptr [ebp], ebx
#define TEST_EBX_TO_PTR_ESP test dword ptr [esp], ebx

#define TEST_ECX_TO_PTR_RAX test dword ptr [rax], ecx
#define TEST_ECX_TO_PTR_RBX test dword ptr [rbx], ecx
#define TEST_ECX_TO_PTR_RCX test dword ptr [rcx], ecx
#define TEST_ECX_TO_PTR_RDX test dword ptr [rdx], ecx
#define TEST_ECX_TO_PTR_RDI test dword ptr [rdi], ecx
#define TEST_ECX_TO_PTR_RSI test dword ptr [rsi], ecx
#define TEST_ECX_TO_PTR_RBP test dword ptr [rbp], ecx
#define TEST_ECX_TO_PTR_RSP test dword ptr [rsp], ecx
#define TEST_ECX_TO_PTR_R8 test dword ptr [r8], ecx
#define TEST_ECX_TO_PTR_R9 test dword ptr [r9], ecx
#define TEST_ECX_TO_PTR_R10 test dword ptr [r10], ecx
#define TEST_ECX_TO_PTR_R11 test dword ptr [r11], ecx
#define TEST_ECX_TO_PTR_R12 test dword ptr [r12], ecx
#define TEST_ECX_TO_PTR_R13 test dword ptr [r13], ecx
#define TEST_ECX_TO_PTR_R14 test dword ptr [r14], ecx
#define TEST_ECX_TO_PTR_R15 test dword ptr [r15], ecx
#define TEST_ECX_TO_PTR_EAX test dword ptr [eax], ecx
#define TEST_ECX_TO_PTR_EBX test dword ptr [ebx], ecx
#define TEST_ECX_TO_PTR_ECX test dword ptr [ecx], ecx
#define TEST_ECX_TO_PTR_EDX test dword ptr [edx], ecx
#define TEST_ECX_TO_PTR_EDI test dword ptr [edi], ecx
#define TEST_ECX_TO_PTR_ESI test dword ptr [esi], ecx
#define TEST_ECX_TO_PTR_EBP test dword ptr [ebp], ecx
#define TEST_ECX_TO_PTR_ESP test dword ptr [esp], ecx

#define TEST_EDX_TO_PTR_RAX test dword ptr [rax], edx
#define TEST_EDX_TO_PTR_RBX test dword ptr [rbx], edx
#define TEST_EDX_TO_PTR_RCX test dword ptr [rcx], edx
#define TEST_EDX_TO_PTR_RDX test dword ptr [rdx], edx
#define TEST_EDX_TO_PTR_RDI test dword ptr [rdi], edx
#define TEST_EDX_TO_PTR_RSI test dword ptr [rsi], edx
#define TEST_EDX_TO_PTR_RBP test dword ptr [rbp], edx
#define TEST_EDX_TO_PTR_RSP test dword ptr [rsp], edx
#define TEST_EDX_TO_PTR_R8 test dword ptr [r8], edx
#define TEST_EDX_TO_PTR_R9 test dword ptr [r9], edx
#define TEST_EDX_TO_PTR_R10 test dword ptr [r10], edx
#define TEST_EDX_TO_PTR_R11 test dword ptr [r11], edx
#define TEST_EDX_TO_PTR_R12 test dword ptr [r12], edx
#define TEST_EDX_TO_PTR_R13 test dword ptr [r13], edx
#define TEST_EDX_TO_PTR_R14 test dword ptr [r14], edx
#define TEST_EDX_TO_PTR_R15 test dword ptr [r15], edx
#define TEST_EDX_TO_PTR_EAX test dword ptr [eax], edx
#define TEST_EDX_TO_PTR_EBX test dword ptr [ebx], edx
#define TEST_EDX_TO_PTR_ECX test dword ptr [ecx], edx
#define TEST_EDX_TO_PTR_EDX test dword ptr [edx], edx
#define TEST_EDX_TO_PTR_EDI test dword ptr [edi], edx
#define TEST_EDX_TO_PTR_ESI test dword ptr [esi], edx
#define TEST_EDX_TO_PTR_EBP test dword ptr [ebp], edx
#define TEST_EDX_TO_PTR_ESP test dword ptr [esp], edx

#define TEST_EDI_TO_PTR_RAX test dword ptr [rax], edi
#define TEST_EDI_TO_PTR_RBX test dword ptr [rbx], edi
#define TEST_EDI_TO_PTR_RCX test dword ptr [rcx], edi
#define TEST_EDI_TO_PTR_RDX test dword ptr [rdx], edi
#define TEST_EDI_TO_PTR_RDI test dword ptr [rdi], edi
#define TEST_EDI_TO_PTR_RSI test dword ptr [rsi], edi
#define TEST_EDI_TO_PTR_RBP test dword ptr [rbp], edi
#define TEST_EDI_TO_PTR_RSP test dword ptr [rsp], edi
#define TEST_EDI_TO_PTR_R8 test dword ptr [r8], edi
#define TEST_EDI_TO_PTR_R9 test dword ptr [r9], edi
#define TEST_EDI_TO_PTR_R10 test dword ptr [r10], edi
#define TEST_EDI_TO_PTR_R11 test dword ptr [r11], edi
#define TEST_EDI_TO_PTR_R12 test dword ptr [r12], edi
#define TEST_EDI_TO_PTR_R13 test dword ptr [r13], edi
#define TEST_EDI_TO_PTR_R14 test dword ptr [r14], edi
#define TEST_EDI_TO_PTR_R15 test dword ptr [r15], edi
#define TEST_EDI_TO_PTR_EAX test dword ptr [eax], edi
#define TEST_EDI_TO_PTR_EBX test dword ptr [ebx], edi
#define TEST_EDI_TO_PTR_ECX test dword ptr [ecx], edi
#define TEST_EDI_TO_PTR_EDX test dword ptr [edx], edi
#define TEST_EDI_TO_PTR_EDI test dword ptr [edi], edi
#define TEST_EDI_TO_PTR_ESI test dword ptr [esi], edi
#define TEST_EDI_TO_PTR_EBP test dword ptr [ebp], edi
#define TEST_EDI_TO_PTR_ESP test dword ptr [esp], edi

#define TEST_ESI_TO_PTR_RAX test dword ptr [rax], esi
#define TEST_ESI_TO_PTR_RBX test dword ptr [rbx], esi
#define TEST_ESI_TO_PTR_RCX test dword ptr [rcx], esi
#define TEST_ESI_TO_PTR_RDX test dword ptr [rdx], esi
#define TEST_ESI_TO_PTR_RDI test dword ptr [rdi], esi
#define TEST_ESI_TO_PTR_RSI test dword ptr [rsi], esi
#define TEST_ESI_TO_PTR_RBP test dword ptr [rbp], esi
#define TEST_ESI_TO_PTR_RSP test dword ptr [rsp], esi
#define TEST_ESI_TO_PTR_R8 test dword ptr [r8], esi
#define TEST_ESI_TO_PTR_R9 test dword ptr [r9], esi
#define TEST_ESI_TO_PTR_R10 test dword ptr [r10], esi
#define TEST_ESI_TO_PTR_R11 test dword ptr [r11], esi
#define TEST_ESI_TO_PTR_R12 test dword ptr [r12], esi
#define TEST_ESI_TO_PTR_R13 test dword ptr [r13], esi
#define TEST_ESI_TO_PTR_R14 test dword ptr [r14], esi
#define TEST_ESI_TO_PTR_R15 test dword ptr [r15], esi
#define TEST_ESI_TO_PTR_EAX test dword ptr [eax], esi
#define TEST_ESI_TO_PTR_EBX test dword ptr [ebx], esi
#define TEST_ESI_TO_PTR_ECX test dword ptr [ecx], esi
#define TEST_ESI_TO_PTR_EDX test dword ptr [edx], esi
#define TEST_ESI_TO_PTR_EDI test dword ptr [edi], esi
#define TEST_ESI_TO_PTR_ESI test dword ptr [esi], esi
#define TEST_ESI_TO_PTR_EBP test dword ptr [ebp], esi
#define TEST_ESI_TO_PTR_ESP test dword ptr [esp], esi

#define TEST_EBP_TO_PTR_RAX test dword ptr [rax], ebp
#define TEST_EBP_TO_PTR_RBX test dword ptr [rbx], ebp
#define TEST_EBP_TO_PTR_RCX test dword ptr [rcx], ebp
#define TEST_EBP_TO_PTR_RDX test dword ptr [rdx], ebp
#define TEST_EBP_TO_PTR_RDI test dword ptr [rdi], ebp
#define TEST_EBP_TO_PTR_RSI test dword ptr [rsi], ebp
#define TEST_EBP_TO_PTR_RBP test dword ptr [rbp], ebp
#define TEST_EBP_TO_PTR_RSP test dword ptr [rsp], ebp
#define TEST_EBP_TO_PTR_R8 test dword ptr [r8], ebp
#define TEST_EBP_TO_PTR_R9 test dword ptr [r9], ebp
#define TEST_EBP_TO_PTR_R10 test dword ptr [r10], ebp
#define TEST_EBP_TO_PTR_R11 test dword ptr [r11], ebp
#define TEST_EBP_TO_PTR_R12 test dword ptr [r12], ebp
#define TEST_EBP_TO_PTR_R13 test dword ptr [r13], ebp
#define TEST_EBP_TO_PTR_R14 test dword ptr [r14], ebp
#define TEST_EBP_TO_PTR_R15 test dword ptr [r15], ebp
#define TEST_EBP_TO_PTR_EAX test dword ptr [eax], ebp
#define TEST_EBP_TO_PTR_EBX test dword ptr [ebx], ebp
#define TEST_EBP_TO_PTR_ECX test dword ptr [ecx], ebp
#define TEST_EBP_TO_PTR_EDX test dword ptr [edx], ebp
#define TEST_EBP_TO_PTR_EDI test dword ptr [edi], ebp
#define TEST_EBP_TO_PTR_ESI test dword ptr [esi], ebp
#define TEST_EBP_TO_PTR_EBP test dword ptr [ebp], ebp
#define TEST_EBP_TO_PTR_ESP test dword ptr [esp], ebp

#define TEST_ESP_TO_PTR_RAX test dword ptr [rax], esp
#define TEST_ESP_TO_PTR_RBX test dword ptr [rbx], esp
#define TEST_ESP_TO_PTR_RCX test dword ptr [rcx], esp
#define TEST_ESP_TO_PTR_RDX test dword ptr [rdx], esp
#define TEST_ESP_TO_PTR_RDI test dword ptr [rdi], esp
#define TEST_ESP_TO_PTR_RSI test dword ptr [rsi], esp
#define TEST_ESP_TO_PTR_RBP test dword ptr [rbp], esp
#define TEST_ESP_TO_PTR_RSP test dword ptr [rsp], esp
#define TEST_ESP_TO_PTR_R8 test dword ptr [r8], esp
#define TEST_ESP_TO_PTR_R9 test dword ptr [r9], esp
#define TEST_ESP_TO_PTR_R10 test dword ptr [r10], esp
#define TEST_ESP_TO_PTR_R11 test dword ptr [r11], esp
#define TEST_ESP_TO_PTR_R12 test dword ptr [r12], esp
#define TEST_ESP_TO_PTR_R13 test dword ptr [r13], esp
#define TEST_ESP_TO_PTR_R14 test dword ptr [r14], esp
#define TEST_ESP_TO_PTR_R15 test dword ptr [r15], esp
#define TEST_ESP_TO_PTR_EAX test dword ptr [eax], esp
#define TEST_ESP_TO_PTR_EBX test dword ptr [ebx], esp
#define TEST_ESP_TO_PTR_ECX test dword ptr [ecx], esp
#define TEST_ESP_TO_PTR_EDX test dword ptr [edx], esp
#define TEST_ESP_TO_PTR_EDI test dword ptr [edi], esp
#define TEST_ESP_TO_PTR_ESI test dword ptr [esi], esp
#define TEST_ESP_TO_PTR_EBP test dword ptr [ebp], esp
#define TEST_ESP_TO_PTR_ESP test dword ptr [esp], esp

#define TEST_R8D_TO_PTR_RAX test dword ptr [rax], r8d
#define TEST_R8D_TO_PTR_RBX test dword ptr [rbx], r8d
#define TEST_R8D_TO_PTR_RCX test dword ptr [rcx], r8d
#define TEST_R8D_TO_PTR_RDX test dword ptr [rdx], r8d
#define TEST_R8D_TO_PTR_RDI test dword ptr [rdi], r8d
#define TEST_R8D_TO_PTR_RSI test dword ptr [rsi], r8d
#define TEST_R8D_TO_PTR_RBP test dword ptr [rbp], r8d
#define TEST_R8D_TO_PTR_RSP test dword ptr [rsp], r8d
#define TEST_R8D_TO_PTR_R8 test dword ptr [r8], r8d
#define TEST_R8D_TO_PTR_R9 test dword ptr [r9], r8d
#define TEST_R8D_TO_PTR_R10 test dword ptr [r10], r8d
#define TEST_R8D_TO_PTR_R11 test dword ptr [r11], r8d
#define TEST_R8D_TO_PTR_R12 test dword ptr [r12], r8d
#define TEST_R8D_TO_PTR_R13 test dword ptr [r13], r8d
#define TEST_R8D_TO_PTR_R14 test dword ptr [r14], r8d
#define TEST_R8D_TO_PTR_R15 test dword ptr [r15], r8d
#define TEST_R8D_TO_PTR_EAX test dword ptr [eax], r8d
#define TEST_R8D_TO_PTR_EBX test dword ptr [ebx], r8d
#define TEST_R8D_TO_PTR_ECX test dword ptr [ecx], r8d
#define TEST_R8D_TO_PTR_EDX test dword ptr [edx], r8d
#define TEST_R8D_TO_PTR_EDI test dword ptr [edi], r8d
#define TEST_R8D_TO_PTR_ESI test dword ptr [esi], r8d
#define TEST_R8D_TO_PTR_EBP test dword ptr [ebp], r8d
#define TEST_R8D_TO_PTR_ESP test dword ptr [esp], r8d

#define TEST_R9D_TO_PTR_RAX test dword ptr [rax], r9d
#define TEST_R9D_TO_PTR_RBX test dword ptr [rbx], r9d
#define TEST_R9D_TO_PTR_RCX test dword ptr [rcx], r9d
#define TEST_R9D_TO_PTR_RDX test dword ptr [rdx], r9d
#define TEST_R9D_TO_PTR_RDI test dword ptr [rdi], r9d
#define TEST_R9D_TO_PTR_RSI test dword ptr [rsi], r9d
#define TEST_R9D_TO_PTR_RBP test dword ptr [rbp], r9d
#define TEST_R9D_TO_PTR_RSP test dword ptr [rsp], r9d
#define TEST_R9D_TO_PTR_R8 test dword ptr [r8], r9d
#define TEST_R9D_TO_PTR_R9 test dword ptr [r9], r9d
#define TEST_R9D_TO_PTR_R10 test dword ptr [r10], r9d
#define TEST_R9D_TO_PTR_R11 test dword ptr [r11], r9d
#define TEST_R9D_TO_PTR_R12 test dword ptr [r12], r9d
#define TEST_R9D_TO_PTR_R13 test dword ptr [r13], r9d
#define TEST_R9D_TO_PTR_R14 test dword ptr [r14], r9d
#define TEST_R9D_TO_PTR_R15 test dword ptr [r15], r9d
#define TEST_R9D_TO_PTR_EAX test dword ptr [eax], r9d
#define TEST_R9D_TO_PTR_EBX test dword ptr [ebx], r9d
#define TEST_R9D_TO_PTR_ECX test dword ptr [ecx], r9d
#define TEST_R9D_TO_PTR_EDX test dword ptr [edx], r9d
#define TEST_R9D_TO_PTR_EDI test dword ptr [edi], r9d
#define TEST_R9D_TO_PTR_ESI test dword ptr [esi], r9d
#define TEST_R9D_TO_PTR_EBP test dword ptr [ebp], r9d
#define TEST_R9D_TO_PTR_ESP test dword ptr [esp], r9d

#define TEST_R10D_TO_PTR_RAX test dword ptr [rax], r10d
#define TEST_R10D_TO_PTR_RBX test dword ptr [rbx], r10d
#define TEST_R10D_TO_PTR_RCX test dword ptr [rcx], r10d
#define TEST_R10D_TO_PTR_RDX test dword ptr [rdx], r10d
#define TEST_R10D_TO_PTR_RDI test dword ptr [rdi], r10d
#define TEST_R10D_TO_PTR_RSI test dword ptr [rsi], r10d
#define TEST_R10D_TO_PTR_RBP test dword ptr [rbp], r10d
#define TEST_R10D_TO_PTR_RSP test dword ptr [rsp], r10d
#define TEST_R10D_TO_PTR_R8 test dword ptr [r8], r10d
#define TEST_R10D_TO_PTR_R9 test dword ptr [r9], r10d
#define TEST_R10D_TO_PTR_R10 test dword ptr [r10], r10d
#define TEST_R10D_TO_PTR_R11 test dword ptr [r11], r10d
#define TEST_R10D_TO_PTR_R12 test dword ptr [r12], r10d
#define TEST_R10D_TO_PTR_R13 test dword ptr [r13], r10d
#define TEST_R10D_TO_PTR_R14 test dword ptr [r14], r10d
#define TEST_R10D_TO_PTR_R15 test dword ptr [r15], r10d
#define TEST_R10D_TO_PTR_EAX test dword ptr [eax], r10d
#define TEST_R10D_TO_PTR_EBX test dword ptr [ebx], r10d
#define TEST_R10D_TO_PTR_ECX test dword ptr [ecx], r10d
#define TEST_R10D_TO_PTR_EDX test dword ptr [edx], r10d
#define TEST_R10D_TO_PTR_EDI test dword ptr [edi], r10d
#define TEST_R10D_TO_PTR_ESI test dword ptr [esi], r10d
#define TEST_R10D_TO_PTR_EBP test dword ptr [ebp], r10d
#define TEST_R10D_TO_PTR_ESP test dword ptr [esp], r10d

#define TEST_R11D_TO_PTR_RAX test dword ptr [rax], r11d
#define TEST_R11D_TO_PTR_RBX test dword ptr [rbx], r11d
#define TEST_R11D_TO_PTR_RCX test dword ptr [rcx], r11d
#define TEST_R11D_TO_PTR_RDX test dword ptr [rdx], r11d
#define TEST_R11D_TO_PTR_RDI test dword ptr [rdi], r11d
#define TEST_R11D_TO_PTR_RSI test dword ptr [rsi], r11d
#define TEST_R11D_TO_PTR_RBP test dword ptr [rbp], r11d
#define TEST_R11D_TO_PTR_RSP test dword ptr [rsp], r11d
#define TEST_R11D_TO_PTR_R8 test dword ptr [r8], r11d
#define TEST_R11D_TO_PTR_R9 test dword ptr [r9], r11d
#define TEST_R11D_TO_PTR_R10 test dword ptr [r10], r11d
#define TEST_R11D_TO_PTR_R11 test dword ptr [r11], r11d
#define TEST_R11D_TO_PTR_R12 test dword ptr [r12], r11d
#define TEST_R11D_TO_PTR_R13 test dword ptr [r13], r11d
#define TEST_R11D_TO_PTR_R14 test dword ptr [r14], r11d
#define TEST_R11D_TO_PTR_R15 test dword ptr [r15], r11d
#define TEST_R11D_TO_PTR_EAX test dword ptr [eax], r11d
#define TEST_R11D_TO_PTR_EBX test dword ptr [ebx], r11d
#define TEST_R11D_TO_PTR_ECX test dword ptr [ecx], r11d
#define TEST_R11D_TO_PTR_EDX test dword ptr [edx], r11d
#define TEST_R11D_TO_PTR_EDI test dword ptr [edi], r11d
#define TEST_R11D_TO_PTR_ESI test dword ptr [esi], r11d
#define TEST_R11D_TO_PTR_EBP test dword ptr [ebp], r11d
#define TEST_R11D_TO_PTR_ESP test dword ptr [esp], r11d

#define TEST_R12D_TO_PTR_RAX test dword ptr [rax], r12d
#define TEST_R12D_TO_PTR_RBX test dword ptr [rbx], r12d
#define TEST_R12D_TO_PTR_RCX test dword ptr [rcx], r12d
#define TEST_R12D_TO_PTR_RDX test dword ptr [rdx], r12d
#define TEST_R12D_TO_PTR_RDI test dword ptr [rdi], r12d
#define TEST_R12D_TO_PTR_RSI test dword ptr [rsi], r12d
#define TEST_R12D_TO_PTR_RBP test dword ptr [rbp], r12d
#define TEST_R12D_TO_PTR_RSP test dword ptr [rsp], r12d
#define TEST_R12D_TO_PTR_R8 test dword ptr [r8], r12d
#define TEST_R12D_TO_PTR_R9 test dword ptr [r9], r12d
#define TEST_R12D_TO_PTR_R10 test dword ptr [r10], r12d
#define TEST_R12D_TO_PTR_R11 test dword ptr [r11], r12d
#define TEST_R12D_TO_PTR_R12 test dword ptr [r12], r12d
#define TEST_R12D_TO_PTR_R13 test dword ptr [r13], r12d
#define TEST_R12D_TO_PTR_R14 test dword ptr [r14], r12d
#define TEST_R12D_TO_PTR_R15 test dword ptr [r15], r12d
#define TEST_R12D_TO_PTR_EAX test dword ptr [eax], r12d
#define TEST_R12D_TO_PTR_EBX test dword ptr [ebx], r12d
#define TEST_R12D_TO_PTR_ECX test dword ptr [ecx], r12d
#define TEST_R12D_TO_PTR_EDX test dword ptr [edx], r12d
#define TEST_R12D_TO_PTR_EDI test dword ptr [edi], r12d
#define TEST_R12D_TO_PTR_ESI test dword ptr [esi], r12d
#define TEST_R12D_TO_PTR_EBP test dword ptr [ebp], r12d
#define TEST_R12D_TO_PTR_ESP test dword ptr [esp], r12d

#define TEST_R13D_TO_PTR_RAX test dword ptr [rax], r13d
#define TEST_R13D_TO_PTR_RBX test dword ptr [rbx], r13d
#define TEST_R13D_TO_PTR_RCX test dword ptr [rcx], r13d
#define TEST_R13D_TO_PTR_RDX test dword ptr [rdx], r13d
#define TEST_R13D_TO_PTR_RDI test dword ptr [rdi], r13d
#define TEST_R13D_TO_PTR_RSI test dword ptr [rsi], r13d
#define TEST_R13D_TO_PTR_RBP test dword ptr [rbp], r13d
#define TEST_R13D_TO_PTR_RSP test dword ptr [rsp], r13d
#define TEST_R13D_TO_PTR_R8 test dword ptr [r8], r13d
#define TEST_R13D_TO_PTR_R9 test dword ptr [r9], r13d
#define TEST_R13D_TO_PTR_R10 test dword ptr [r10], r13d
#define TEST_R13D_TO_PTR_R11 test dword ptr [r11], r13d
#define TEST_R13D_TO_PTR_R12 test dword ptr [r12], r13d
#define TEST_R13D_TO_PTR_R13 test dword ptr [r13], r13d
#define TEST_R13D_TO_PTR_R14 test dword ptr [r14], r13d
#define TEST_R13D_TO_PTR_R15 test dword ptr [r15], r13d
#define TEST_R13D_TO_PTR_EAX test dword ptr [eax], r13d
#define TEST_R13D_TO_PTR_EBX test dword ptr [ebx], r13d
#define TEST_R13D_TO_PTR_ECX test dword ptr [ecx], r13d
#define TEST_R13D_TO_PTR_EDX test dword ptr [edx], r13d
#define TEST_R13D_TO_PTR_EDI test dword ptr [edi], r13d
#define TEST_R13D_TO_PTR_ESI test dword ptr [esi], r13d
#define TEST_R13D_TO_PTR_EBP test dword ptr [ebp], r13d
#define TEST_R13D_TO_PTR_ESP test dword ptr [esp], r13d

#define TEST_R14D_TO_PTR_RAX test dword ptr [rax], r14d
#define TEST_R14D_TO_PTR_RBX test dword ptr [rbx], r14d
#define TEST_R14D_TO_PTR_RCX test dword ptr [rcx], r14d
#define TEST_R14D_TO_PTR_RDX test dword ptr [rdx], r14d
#define TEST_R14D_TO_PTR_RDI test dword ptr [rdi], r14d
#define TEST_R14D_TO_PTR_RSI test dword ptr [rsi], r14d
#define TEST_R14D_TO_PTR_RBP test dword ptr [rbp], r14d
#define TEST_R14D_TO_PTR_RSP test dword ptr [rsp], r14d
#define TEST_R14D_TO_PTR_R8 test dword ptr [r8], r14d
#define TEST_R14D_TO_PTR_R9 test dword ptr [r9], r14d
#define TEST_R14D_TO_PTR_R10 test dword ptr [r10], r14d
#define TEST_R14D_TO_PTR_R11 test dword ptr [r11], r14d
#define TEST_R14D_TO_PTR_R12 test dword ptr [r12], r14d
#define TEST_R14D_TO_PTR_R13 test dword ptr [r13], r14d
#define TEST_R14D_TO_PTR_R14 test dword ptr [r14], r14d
#define TEST_R14D_TO_PTR_R15 test dword ptr [r15], r14d
#define TEST_R14D_TO_PTR_EAX test dword ptr [eax], r14d
#define TEST_R14D_TO_PTR_EBX test dword ptr [ebx], r14d
#define TEST_R14D_TO_PTR_ECX test dword ptr [ecx], r14d
#define TEST_R14D_TO_PTR_EDX test dword ptr [edx], r14d
#define TEST_R14D_TO_PTR_EDI test dword ptr [edi], r14d
#define TEST_R14D_TO_PTR_ESI test dword ptr [esi], r14d
#define TEST_R14D_TO_PTR_EBP test dword ptr [ebp], r14d
#define TEST_R14D_TO_PTR_ESP test dword ptr [esp], r14d

#define TEST_R15D_TO_PTR_RAX test dword ptr [rax], r15d
#define TEST_R15D_TO_PTR_RBX test dword ptr [rbx], r15d
#define TEST_R15D_TO_PTR_RCX test dword ptr [rcx], r15d
#define TEST_R15D_TO_PTR_RDX test dword ptr [rdx], r15d
#define TEST_R15D_TO_PTR_RDI test dword ptr [rdi], r15d
#define TEST_R15D_TO_PTR_RSI test dword ptr [rsi], r15d
#define TEST_R15D_TO_PTR_RBP test dword ptr [rbp], r15d
#define TEST_R15D_TO_PTR_RSP test dword ptr [rsp], r15d
#define TEST_R15D_TO_PTR_R8 test dword ptr [r8], r15d
#define TEST_R15D_TO_PTR_R9 test dword ptr [r9], r15d
#define TEST_R15D_TO_PTR_R10 test dword ptr [r10], r15d
#define TEST_R15D_TO_PTR_R11 test dword ptr [r11], r15d
#define TEST_R15D_TO_PTR_R12 test dword ptr [r12], r15d
#define TEST_R15D_TO_PTR_R13 test dword ptr [r13], r15d
#define TEST_R15D_TO_PTR_R14 test dword ptr [r14], r15d
#define TEST_R15D_TO_PTR_R15 test dword ptr [r15], r15d
#define TEST_R15D_TO_PTR_EAX test dword ptr [eax], r15d
#define TEST_R15D_TO_PTR_EBX test dword ptr [ebx], r15d
#define TEST_R15D_TO_PTR_ECX test dword ptr [ecx], r15d
#define TEST_R15D_TO_PTR_EDX test dword ptr [edx], r15d
#define TEST_R15D_TO_PTR_EDI test dword ptr [edi], r15d
#define TEST_R15D_TO_PTR_ESI test dword ptr [esi], r15d
#define TEST_R15D_TO_PTR_EBP test dword ptr [ebp], r15d
#define TEST_R15D_TO_PTR_ESP test dword ptr [esp], r15d

#define TEST_EAX_FROM_PTR_RAX_(VALUE) test eax, dword ptr [rax + VALUE]
#define TEST_EAX_FROM_PTR_RBX_(VALUE) test eax, dword ptr [rbx + VALUE]
#define TEST_EAX_FROM_PTR_RCX_(VALUE) test eax, dword ptr [rcx + VALUE]
#define TEST_EAX_FROM_PTR_RDX_(VALUE) test eax, dword ptr [rdx + VALUE]
#define TEST_EAX_FROM_PTR_RDI_(VALUE) test eax, dword ptr [rdi + VALUE]
#define TEST_EAX_FROM_PTR_RSI_(VALUE) test eax, dword ptr [rsi + VALUE]
#define TEST_EAX_FROM_PTR_RBP_(VALUE) test eax, dword ptr [rbp + VALUE]
#define TEST_EAX_FROM_PTR_RSP_(VALUE) test eax, dword ptr [rsp + VALUE]
#define TEST_EAX_FROM_PTR_R8_(VALUE) test eax, dword ptr [r8 + VALUE]
#define TEST_EAX_FROM_PTR_R9_(VALUE) test eax, dword ptr [r9 + VALUE]
#define TEST_EAX_FROM_PTR_R10_(VALUE) test eax, dword ptr [r10 + VALUE]
#define TEST_EAX_FROM_PTR_R11_(VALUE) test eax, dword ptr [r11 + VALUE]
#define TEST_EAX_FROM_PTR_R12_(VALUE) test eax, dword ptr [r12 + VALUE]
#define TEST_EAX_FROM_PTR_R13_(VALUE) test eax, dword ptr [r13 + VALUE]
#define TEST_EAX_FROM_PTR_R14_(VALUE) test eax, dword ptr [r14 + VALUE]
#define TEST_EAX_FROM_PTR_R15_(VALUE) test eax, dword ptr [r15 + VALUE]
#define TEST_EAX_FROM_PTR_EAX_(VALUE) test eax, dword ptr [eax + VALUE]
#define TEST_EAX_FROM_PTR_EBX_(VALUE) test eax, dword ptr [ebx + VALUE]
#define TEST_EAX_FROM_PTR_ECX_(VALUE) test eax, dword ptr [ecx + VALUE]
#define TEST_EAX_FROM_PTR_EDX_(VALUE) test eax, dword ptr [edx + VALUE]
#define TEST_EAX_FROM_PTR_EDI_(VALUE) test eax, dword ptr [edi + VALUE]
#define TEST_EAX_FROM_PTR_ESI_(VALUE) test eax, dword ptr [esi + VALUE]
#define TEST_EAX_FROM_PTR_EBP_(VALUE) test eax, dword ptr [ebp + VALUE]
#define TEST_EAX_FROM_PTR_ESP_(VALUE) test eax, dword ptr [esp + VALUE]

#define TEST_EBX_FROM_PTR_RAX_(VALUE) test ebx, dword ptr [rax + VALUE]
#define TEST_EBX_FROM_PTR_RBX_(VALUE) test ebx, dword ptr [rbx + VALUE]
#define TEST_EBX_FROM_PTR_RCX_(VALUE) test ebx, dword ptr [rcx + VALUE]
#define TEST_EBX_FROM_PTR_RDX_(VALUE) test ebx, dword ptr [rdx + VALUE]
#define TEST_EBX_FROM_PTR_RDI_(VALUE) test ebx, dword ptr [rdi + VALUE]
#define TEST_EBX_FROM_PTR_RSI_(VALUE) test ebx, dword ptr [rsi + VALUE]
#define TEST_EBX_FROM_PTR_RBP_(VALUE) test ebx, dword ptr [rbp + VALUE]
#define TEST_EBX_FROM_PTR_RSP_(VALUE) test ebx, dword ptr [rsp + VALUE]
#define TEST_EBX_FROM_PTR_R8_(VALUE) test ebx, dword ptr [r8 + VALUE]
#define TEST_EBX_FROM_PTR_R9_(VALUE) test ebx, dword ptr [r9 + VALUE]
#define TEST_EBX_FROM_PTR_R10_(VALUE) test ebx, dword ptr [r10 + VALUE]
#define TEST_EBX_FROM_PTR_R11_(VALUE) test ebx, dword ptr [r11 + VALUE]
#define TEST_EBX_FROM_PTR_R12_(VALUE) test ebx, dword ptr [r12 + VALUE]
#define TEST_EBX_FROM_PTR_R13_(VALUE) test ebx, dword ptr [r13 + VALUE]
#define TEST_EBX_FROM_PTR_R14_(VALUE) test ebx, dword ptr [r14 + VALUE]
#define TEST_EBX_FROM_PTR_R15_(VALUE) test ebx, dword ptr [r15 + VALUE]
#define TEST_EBX_FROM_PTR_EAX_(VALUE) test ebx, dword ptr [eax + VALUE]
#define TEST_EBX_FROM_PTR_EBX_(VALUE) test ebx, dword ptr [ebx + VALUE]
#define TEST_EBX_FROM_PTR_ECX_(VALUE) test ebx, dword ptr [ecx + VALUE]
#define TEST_EBX_FROM_PTR_EDX_(VALUE) test ebx, dword ptr [edx + VALUE]
#define TEST_EBX_FROM_PTR_EDI_(VALUE) test ebx, dword ptr [edi + VALUE]
#define TEST_EBX_FROM_PTR_ESI_(VALUE) test ebx, dword ptr [esi + VALUE]
#define TEST_EBX_FROM_PTR_EBP_(VALUE) test ebx, dword ptr [ebp + VALUE]
#define TEST_EBX_FROM_PTR_ESP_(VALUE) test ebx, dword ptr [esp + VALUE]

#define TEST_ECX_FROM_PTR_RAX_(VALUE) test ecx, dword ptr [rax + VALUE]
#define TEST_ECX_FROM_PTR_RBX_(VALUE) test ecx, dword ptr [rbx + VALUE]
#define TEST_ECX_FROM_PTR_RCX_(VALUE) test ecx, dword ptr [rcx + VALUE]
#define TEST_ECX_FROM_PTR_RDX_(VALUE) test ecx, dword ptr [rdx + VALUE]
#define TEST_ECX_FROM_PTR_RDI_(VALUE) test ecx, dword ptr [rdi + VALUE]
#define TEST_ECX_FROM_PTR_RSI_(VALUE) test ecx, dword ptr [rsi + VALUE]
#define TEST_ECX_FROM_PTR_RBP_(VALUE) test ecx, dword ptr [rbp + VALUE]
#define TEST_ECX_FROM_PTR_RSP_(VALUE) test ecx, dword ptr [rsp + VALUE]
#define TEST_ECX_FROM_PTR_R8_(VALUE) test ecx, dword ptr [r8 + VALUE]
#define TEST_ECX_FROM_PTR_R9_(VALUE) test ecx, dword ptr [r9 + VALUE]
#define TEST_ECX_FROM_PTR_R10_(VALUE) test ecx, dword ptr [r10 + VALUE]
#define TEST_ECX_FROM_PTR_R11_(VALUE) test ecx, dword ptr [r11 + VALUE]
#define TEST_ECX_FROM_PTR_R12_(VALUE) test ecx, dword ptr [r12 + VALUE]
#define TEST_ECX_FROM_PTR_R13_(VALUE) test ecx, dword ptr [r13 + VALUE]
#define TEST_ECX_FROM_PTR_R14_(VALUE) test ecx, dword ptr [r14 + VALUE]
#define TEST_ECX_FROM_PTR_R15_(VALUE) test ecx, dword ptr [r15 + VALUE]
#define TEST_ECX_FROM_PTR_EAX_(VALUE) test ecx, dword ptr [eax + VALUE]
#define TEST_ECX_FROM_PTR_EBX_(VALUE) test ecx, dword ptr [ebx + VALUE]
#define TEST_ECX_FROM_PTR_ECX_(VALUE) test ecx, dword ptr [ecx + VALUE]
#define TEST_ECX_FROM_PTR_EDX_(VALUE) test ecx, dword ptr [edx + VALUE]
#define TEST_ECX_FROM_PTR_EDI_(VALUE) test ecx, dword ptr [edi + VALUE]
#define TEST_ECX_FROM_PTR_ESI_(VALUE) test ecx, dword ptr [esi + VALUE]
#define TEST_ECX_FROM_PTR_EBP_(VALUE) test ecx, dword ptr [ebp + VALUE]
#define TEST_ECX_FROM_PTR_ESP_(VALUE) test ecx, dword ptr [esp + VALUE]

#define TEST_EDX_FROM_PTR_RAX_(VALUE) test edx, dword ptr [rax + VALUE]
#define TEST_EDX_FROM_PTR_RBX_(VALUE) test edx, dword ptr [rbx + VALUE]
#define TEST_EDX_FROM_PTR_RCX_(VALUE) test edx, dword ptr [rcx + VALUE]
#define TEST_EDX_FROM_PTR_RDX_(VALUE) test edx, dword ptr [rdx + VALUE]
#define TEST_EDX_FROM_PTR_RDI_(VALUE) test edx, dword ptr [rdi + VALUE]
#define TEST_EDX_FROM_PTR_RSI_(VALUE) test edx, dword ptr [rsi + VALUE]
#define TEST_EDX_FROM_PTR_RBP_(VALUE) test edx, dword ptr [rbp + VALUE]
#define TEST_EDX_FROM_PTR_RSP_(VALUE) test edx, dword ptr [rsp + VALUE]
#define TEST_EDX_FROM_PTR_R8_(VALUE) test edx, dword ptr [r8 + VALUE]
#define TEST_EDX_FROM_PTR_R9_(VALUE) test edx, dword ptr [r9 + VALUE]
#define TEST_EDX_FROM_PTR_R10_(VALUE) test edx, dword ptr [r10 + VALUE]
#define TEST_EDX_FROM_PTR_R11_(VALUE) test edx, dword ptr [r11 + VALUE]
#define TEST_EDX_FROM_PTR_R12_(VALUE) test edx, dword ptr [r12 + VALUE]
#define TEST_EDX_FROM_PTR_R13_(VALUE) test edx, dword ptr [r13 + VALUE]
#define TEST_EDX_FROM_PTR_R14_(VALUE) test edx, dword ptr [r14 + VALUE]
#define TEST_EDX_FROM_PTR_R15_(VALUE) test edx, dword ptr [r15 + VALUE]
#define TEST_EDX_FROM_PTR_EAX_(VALUE) test edx, dword ptr [eax + VALUE]
#define TEST_EDX_FROM_PTR_EBX_(VALUE) test edx, dword ptr [ebx + VALUE]
#define TEST_EDX_FROM_PTR_ECX_(VALUE) test edx, dword ptr [ecx + VALUE]
#define TEST_EDX_FROM_PTR_EDX_(VALUE) test edx, dword ptr [edx + VALUE]
#define TEST_EDX_FROM_PTR_EDI_(VALUE) test edx, dword ptr [edi + VALUE]
#define TEST_EDX_FROM_PTR_ESI_(VALUE) test edx, dword ptr [esi + VALUE]
#define TEST_EDX_FROM_PTR_EBP_(VALUE) test edx, dword ptr [ebp + VALUE]
#define TEST_EDX_FROM_PTR_ESP_(VALUE) test edx, dword ptr [esp + VALUE]

#define TEST_EDI_FROM_PTR_RAX_(VALUE) test edi, dword ptr [rax + VALUE]
#define TEST_EDI_FROM_PTR_RBX_(VALUE) test edi, dword ptr [rbx + VALUE]
#define TEST_EDI_FROM_PTR_RCX_(VALUE) test edi, dword ptr [rcx + VALUE]
#define TEST_EDI_FROM_PTR_RDX_(VALUE) test edi, dword ptr [rdx + VALUE]
#define TEST_EDI_FROM_PTR_RDI_(VALUE) test edi, dword ptr [rdi + VALUE]
#define TEST_EDI_FROM_PTR_RSI_(VALUE) test edi, dword ptr [rsi + VALUE]
#define TEST_EDI_FROM_PTR_RBP_(VALUE) test edi, dword ptr [rbp + VALUE]
#define TEST_EDI_FROM_PTR_RSP_(VALUE) test edi, dword ptr [rsp + VALUE]
#define TEST_EDI_FROM_PTR_R8_(VALUE) test edi, dword ptr [r8 + VALUE]
#define TEST_EDI_FROM_PTR_R9_(VALUE) test edi, dword ptr [r9 + VALUE]
#define TEST_EDI_FROM_PTR_R10_(VALUE) test edi, dword ptr [r10 + VALUE]
#define TEST_EDI_FROM_PTR_R11_(VALUE) test edi, dword ptr [r11 + VALUE]
#define TEST_EDI_FROM_PTR_R12_(VALUE) test edi, dword ptr [r12 + VALUE]
#define TEST_EDI_FROM_PTR_R13_(VALUE) test edi, dword ptr [r13 + VALUE]
#define TEST_EDI_FROM_PTR_R14_(VALUE) test edi, dword ptr [r14 + VALUE]
#define TEST_EDI_FROM_PTR_R15_(VALUE) test edi, dword ptr [r15 + VALUE]
#define TEST_EDI_FROM_PTR_EAX_(VALUE) test edi, dword ptr [eax + VALUE]
#define TEST_EDI_FROM_PTR_EBX_(VALUE) test edi, dword ptr [ebx + VALUE]
#define TEST_EDI_FROM_PTR_ECX_(VALUE) test edi, dword ptr [ecx + VALUE]
#define TEST_EDI_FROM_PTR_EDX_(VALUE) test edi, dword ptr [edx + VALUE]
#define TEST_EDI_FROM_PTR_EDI_(VALUE) test edi, dword ptr [edi + VALUE]
#define TEST_EDI_FROM_PTR_ESI_(VALUE) test edi, dword ptr [esi + VALUE]
#define TEST_EDI_FROM_PTR_EBP_(VALUE) test edi, dword ptr [ebp + VALUE]
#define TEST_EDI_FROM_PTR_ESP_(VALUE) test edi, dword ptr [esp + VALUE]

#define TEST_ESI_FROM_PTR_RAX_(VALUE) test esi, dword ptr [rax + VALUE]
#define TEST_ESI_FROM_PTR_RBX_(VALUE) test esi, dword ptr [rbx + VALUE]
#define TEST_ESI_FROM_PTR_RCX_(VALUE) test esi, dword ptr [rcx + VALUE]
#define TEST_ESI_FROM_PTR_RDX_(VALUE) test esi, dword ptr [rdx + VALUE]
#define TEST_ESI_FROM_PTR_RDI_(VALUE) test esi, dword ptr [rdi + VALUE]
#define TEST_ESI_FROM_PTR_RSI_(VALUE) test esi, dword ptr [rsi + VALUE]
#define TEST_ESI_FROM_PTR_RBP_(VALUE) test esi, dword ptr [rbp + VALUE]
#define TEST_ESI_FROM_PTR_RSP_(VALUE) test esi, dword ptr [rsp + VALUE]
#define TEST_ESI_FROM_PTR_R8_(VALUE) test esi, dword ptr [r8 + VALUE]
#define TEST_ESI_FROM_PTR_R9_(VALUE) test esi, dword ptr [r9 + VALUE]
#define TEST_ESI_FROM_PTR_R10_(VALUE) test esi, dword ptr [r10 + VALUE]
#define TEST_ESI_FROM_PTR_R11_(VALUE) test esi, dword ptr [r11 + VALUE]
#define TEST_ESI_FROM_PTR_R12_(VALUE) test esi, dword ptr [r12 + VALUE]
#define TEST_ESI_FROM_PTR_R13_(VALUE) test esi, dword ptr [r13 + VALUE]
#define TEST_ESI_FROM_PTR_R14_(VALUE) test esi, dword ptr [r14 + VALUE]
#define TEST_ESI_FROM_PTR_R15_(VALUE) test esi, dword ptr [r15 + VALUE]
#define TEST_ESI_FROM_PTR_EAX_(VALUE) test esi, dword ptr [eax + VALUE]
#define TEST_ESI_FROM_PTR_EBX_(VALUE) test esi, dword ptr [ebx + VALUE]
#define TEST_ESI_FROM_PTR_ECX_(VALUE) test esi, dword ptr [ecx + VALUE]
#define TEST_ESI_FROM_PTR_EDX_(VALUE) test esi, dword ptr [edx + VALUE]
#define TEST_ESI_FROM_PTR_EDI_(VALUE) test esi, dword ptr [edi + VALUE]
#define TEST_ESI_FROM_PTR_ESI_(VALUE) test esi, dword ptr [esi + VALUE]
#define TEST_ESI_FROM_PTR_EBP_(VALUE) test esi, dword ptr [ebp + VALUE]
#define TEST_ESI_FROM_PTR_ESP_(VALUE) test esi, dword ptr [esp + VALUE]

#define TEST_EBP_FROM_PTR_RAX_(VALUE) test ebp, dword ptr [rax + VALUE]
#define TEST_EBP_FROM_PTR_RBX_(VALUE) test ebp, dword ptr [rbx + VALUE]
#define TEST_EBP_FROM_PTR_RCX_(VALUE) test ebp, dword ptr [rcx + VALUE]
#define TEST_EBP_FROM_PTR_RDX_(VALUE) test ebp, dword ptr [rdx + VALUE]
#define TEST_EBP_FROM_PTR_RDI_(VALUE) test ebp, dword ptr [rdi + VALUE]
#define TEST_EBP_FROM_PTR_RSI_(VALUE) test ebp, dword ptr [rsi + VALUE]
#define TEST_EBP_FROM_PTR_RBP_(VALUE) test ebp, dword ptr [rbp + VALUE]
#define TEST_EBP_FROM_PTR_RSP_(VALUE) test ebp, dword ptr [rsp + VALUE]
#define TEST_EBP_FROM_PTR_R8_(VALUE) test ebp, dword ptr [r8 + VALUE]
#define TEST_EBP_FROM_PTR_R9_(VALUE) test ebp, dword ptr [r9 + VALUE]
#define TEST_EBP_FROM_PTR_R10_(VALUE) test ebp, dword ptr [r10 + VALUE]
#define TEST_EBP_FROM_PTR_R11_(VALUE) test ebp, dword ptr [r11 + VALUE]
#define TEST_EBP_FROM_PTR_R12_(VALUE) test ebp, dword ptr [r12 + VALUE]
#define TEST_EBP_FROM_PTR_R13_(VALUE) test ebp, dword ptr [r13 + VALUE]
#define TEST_EBP_FROM_PTR_R14_(VALUE) test ebp, dword ptr [r14 + VALUE]
#define TEST_EBP_FROM_PTR_R15_(VALUE) test ebp, dword ptr [r15 + VALUE]
#define TEST_EBP_FROM_PTR_EAX_(VALUE) test ebp, dword ptr [eax + VALUE]
#define TEST_EBP_FROM_PTR_EBX_(VALUE) test ebp, dword ptr [ebx + VALUE]
#define TEST_EBP_FROM_PTR_ECX_(VALUE) test ebp, dword ptr [ecx + VALUE]
#define TEST_EBP_FROM_PTR_EDX_(VALUE) test ebp, dword ptr [edx + VALUE]
#define TEST_EBP_FROM_PTR_EDI_(VALUE) test ebp, dword ptr [edi + VALUE]
#define TEST_EBP_FROM_PTR_ESI_(VALUE) test ebp, dword ptr [esi + VALUE]
#define TEST_EBP_FROM_PTR_EBP_(VALUE) test ebp, dword ptr [ebp + VALUE]
#define TEST_EBP_FROM_PTR_ESP_(VALUE) test ebp, dword ptr [esp + VALUE]

#define TEST_ESP_FROM_PTR_RAX_(VALUE) test esp, dword ptr [rax + VALUE]
#define TEST_ESP_FROM_PTR_RBX_(VALUE) test esp, dword ptr [rbx + VALUE]
#define TEST_ESP_FROM_PTR_RCX_(VALUE) test esp, dword ptr [rcx + VALUE]
#define TEST_ESP_FROM_PTR_RDX_(VALUE) test esp, dword ptr [rdx + VALUE]
#define TEST_ESP_FROM_PTR_RDI_(VALUE) test esp, dword ptr [rdi + VALUE]
#define TEST_ESP_FROM_PTR_RSI_(VALUE) test esp, dword ptr [rsi + VALUE]
#define TEST_ESP_FROM_PTR_RBP_(VALUE) test esp, dword ptr [rbp + VALUE]
#define TEST_ESP_FROM_PTR_RSP_(VALUE) test esp, dword ptr [rsp + VALUE]
#define TEST_ESP_FROM_PTR_R8_(VALUE) test esp, dword ptr [r8 + VALUE]
#define TEST_ESP_FROM_PTR_R9_(VALUE) test esp, dword ptr [r9 + VALUE]
#define TEST_ESP_FROM_PTR_R10_(VALUE) test esp, dword ptr [r10 + VALUE]
#define TEST_ESP_FROM_PTR_R11_(VALUE) test esp, dword ptr [r11 + VALUE]
#define TEST_ESP_FROM_PTR_R12_(VALUE) test esp, dword ptr [r12 + VALUE]
#define TEST_ESP_FROM_PTR_R13_(VALUE) test esp, dword ptr [r13 + VALUE]
#define TEST_ESP_FROM_PTR_R14_(VALUE) test esp, dword ptr [r14 + VALUE]
#define TEST_ESP_FROM_PTR_R15_(VALUE) test esp, dword ptr [r15 + VALUE]
#define TEST_ESP_FROM_PTR_EAX_(VALUE) test esp, dword ptr [eax + VALUE]
#define TEST_ESP_FROM_PTR_EBX_(VALUE) test esp, dword ptr [ebx + VALUE]
#define TEST_ESP_FROM_PTR_ECX_(VALUE) test esp, dword ptr [ecx + VALUE]
#define TEST_ESP_FROM_PTR_EDX_(VALUE) test esp, dword ptr [edx + VALUE]
#define TEST_ESP_FROM_PTR_EDI_(VALUE) test esp, dword ptr [edi + VALUE]
#define TEST_ESP_FROM_PTR_ESI_(VALUE) test esp, dword ptr [esi + VALUE]
#define TEST_ESP_FROM_PTR_EBP_(VALUE) test esp, dword ptr [ebp + VALUE]
#define TEST_ESP_FROM_PTR_ESP_(VALUE) test esp, dword ptr [esp + VALUE]

#define TEST_R8D_FROM_PTR_RAX_(VALUE) test r8d, dword ptr [rax + VALUE]
#define TEST_R8D_FROM_PTR_RBX_(VALUE) test r8d, dword ptr [rbx + VALUE]
#define TEST_R8D_FROM_PTR_RCX_(VALUE) test r8d, dword ptr [rcx + VALUE]
#define TEST_R8D_FROM_PTR_RDX_(VALUE) test r8d, dword ptr [rdx + VALUE]
#define TEST_R8D_FROM_PTR_RDI_(VALUE) test r8d, dword ptr [rdi + VALUE]
#define TEST_R8D_FROM_PTR_RSI_(VALUE) test r8d, dword ptr [rsi + VALUE]
#define TEST_R8D_FROM_PTR_RBP_(VALUE) test r8d, dword ptr [rbp + VALUE]
#define TEST_R8D_FROM_PTR_RSP_(VALUE) test r8d, dword ptr [rsp + VALUE]
#define TEST_R8D_FROM_PTR_R8_(VALUE) test r8d, dword ptr [r8 + VALUE]
#define TEST_R8D_FROM_PTR_R9_(VALUE) test r8d, dword ptr [r9 + VALUE]
#define TEST_R8D_FROM_PTR_R10_(VALUE) test r8d, dword ptr [r10 + VALUE]
#define TEST_R8D_FROM_PTR_R11_(VALUE) test r8d, dword ptr [r11 + VALUE]
#define TEST_R8D_FROM_PTR_R12_(VALUE) test r8d, dword ptr [r12 + VALUE]
#define TEST_R8D_FROM_PTR_R13_(VALUE) test r8d, dword ptr [r13 + VALUE]
#define TEST_R8D_FROM_PTR_R14_(VALUE) test r8d, dword ptr [r14 + VALUE]
#define TEST_R8D_FROM_PTR_R15_(VALUE) test r8d, dword ptr [r15 + VALUE]
#define TEST_R8D_FROM_PTR_EAX_(VALUE) test r8d, dword ptr [eax + VALUE]
#define TEST_R8D_FROM_PTR_EBX_(VALUE) test r8d, dword ptr [ebx + VALUE]
#define TEST_R8D_FROM_PTR_ECX_(VALUE) test r8d, dword ptr [ecx + VALUE]
#define TEST_R8D_FROM_PTR_EDX_(VALUE) test r8d, dword ptr [edx + VALUE]
#define TEST_R8D_FROM_PTR_EDI_(VALUE) test r8d, dword ptr [edi + VALUE]
#define TEST_R8D_FROM_PTR_ESI_(VALUE) test r8d, dword ptr [esi + VALUE]
#define TEST_R8D_FROM_PTR_EBP_(VALUE) test r8d, dword ptr [ebp + VALUE]
#define TEST_R8D_FROM_PTR_ESP_(VALUE) test r8d, dword ptr [esp + VALUE]

#define TEST_R9D_FROM_PTR_RAX_(VALUE) test r9d, dword ptr [rax + VALUE]
#define TEST_R9D_FROM_PTR_RBX_(VALUE) test r9d, dword ptr [rbx + VALUE]
#define TEST_R9D_FROM_PTR_RCX_(VALUE) test r9d, dword ptr [rcx + VALUE]
#define TEST_R9D_FROM_PTR_RDX_(VALUE) test r9d, dword ptr [rdx + VALUE]
#define TEST_R9D_FROM_PTR_RDI_(VALUE) test r9d, dword ptr [rdi + VALUE]
#define TEST_R9D_FROM_PTR_RSI_(VALUE) test r9d, dword ptr [rsi + VALUE]
#define TEST_R9D_FROM_PTR_RBP_(VALUE) test r9d, dword ptr [rbp + VALUE]
#define TEST_R9D_FROM_PTR_RSP_(VALUE) test r9d, dword ptr [rsp + VALUE]
#define TEST_R9D_FROM_PTR_R8_(VALUE) test r9d, dword ptr [r8 + VALUE]
#define TEST_R9D_FROM_PTR_R9_(VALUE) test r9d, dword ptr [r9 + VALUE]
#define TEST_R9D_FROM_PTR_R10_(VALUE) test r9d, dword ptr [r10 + VALUE]
#define TEST_R9D_FROM_PTR_R11_(VALUE) test r9d, dword ptr [r11 + VALUE]
#define TEST_R9D_FROM_PTR_R12_(VALUE) test r9d, dword ptr [r12 + VALUE]
#define TEST_R9D_FROM_PTR_R13_(VALUE) test r9d, dword ptr [r13 + VALUE]
#define TEST_R9D_FROM_PTR_R14_(VALUE) test r9d, dword ptr [r14 + VALUE]
#define TEST_R9D_FROM_PTR_R15_(VALUE) test r9d, dword ptr [r15 + VALUE]
#define TEST_R9D_FROM_PTR_EAX_(VALUE) test r9d, dword ptr [eax + VALUE]
#define TEST_R9D_FROM_PTR_EBX_(VALUE) test r9d, dword ptr [ebx + VALUE]
#define TEST_R9D_FROM_PTR_ECX_(VALUE) test r9d, dword ptr [ecx + VALUE]
#define TEST_R9D_FROM_PTR_EDX_(VALUE) test r9d, dword ptr [edx + VALUE]
#define TEST_R9D_FROM_PTR_EDI_(VALUE) test r9d, dword ptr [edi + VALUE]
#define TEST_R9D_FROM_PTR_ESI_(VALUE) test r9d, dword ptr [esi + VALUE]
#define TEST_R9D_FROM_PTR_EBP_(VALUE) test r9d, dword ptr [ebp + VALUE]
#define TEST_R9D_FROM_PTR_ESP_(VALUE) test r9d, dword ptr [esp + VALUE]

#define TEST_R10D_FROM_PTR_RAX_(VALUE) test r10d, dword ptr [rax + VALUE]
#define TEST_R10D_FROM_PTR_RBX_(VALUE) test r10d, dword ptr [rbx + VALUE]
#define TEST_R10D_FROM_PTR_RCX_(VALUE) test r10d, dword ptr [rcx + VALUE]
#define TEST_R10D_FROM_PTR_RDX_(VALUE) test r10d, dword ptr [rdx + VALUE]
#define TEST_R10D_FROM_PTR_RDI_(VALUE) test r10d, dword ptr [rdi + VALUE]
#define TEST_R10D_FROM_PTR_RSI_(VALUE) test r10d, dword ptr [rsi + VALUE]
#define TEST_R10D_FROM_PTR_RBP_(VALUE) test r10d, dword ptr [rbp + VALUE]
#define TEST_R10D_FROM_PTR_RSP_(VALUE) test r10d, dword ptr [rsp + VALUE]
#define TEST_R10D_FROM_PTR_R8_(VALUE) test r10d, dword ptr [r8 + VALUE]
#define TEST_R10D_FROM_PTR_R9_(VALUE) test r10d, dword ptr [r9 + VALUE]
#define TEST_R10D_FROM_PTR_R10_(VALUE) test r10d, dword ptr [r10 + VALUE]
#define TEST_R10D_FROM_PTR_R11_(VALUE) test r10d, dword ptr [r11 + VALUE]
#define TEST_R10D_FROM_PTR_R12_(VALUE) test r10d, dword ptr [r12 + VALUE]
#define TEST_R10D_FROM_PTR_R13_(VALUE) test r10d, dword ptr [r13 + VALUE]
#define TEST_R10D_FROM_PTR_R14_(VALUE) test r10d, dword ptr [r14 + VALUE]
#define TEST_R10D_FROM_PTR_R15_(VALUE) test r10d, dword ptr [r15 + VALUE]
#define TEST_R10D_FROM_PTR_EAX_(VALUE) test r10d, dword ptr [eax + VALUE]
#define TEST_R10D_FROM_PTR_EBX_(VALUE) test r10d, dword ptr [ebx + VALUE]
#define TEST_R10D_FROM_PTR_ECX_(VALUE) test r10d, dword ptr [ecx + VALUE]
#define TEST_R10D_FROM_PTR_EDX_(VALUE) test r10d, dword ptr [edx + VALUE]
#define TEST_R10D_FROM_PTR_EDI_(VALUE) test r10d, dword ptr [edi + VALUE]
#define TEST_R10D_FROM_PTR_ESI_(VALUE) test r10d, dword ptr [esi + VALUE]
#define TEST_R10D_FROM_PTR_EBP_(VALUE) test r10d, dword ptr [ebp + VALUE]
#define TEST_R10D_FROM_PTR_ESP_(VALUE) test r10d, dword ptr [esp + VALUE]

#define TEST_R11D_FROM_PTR_RAX_(VALUE) test r11d, dword ptr [rax + VALUE]
#define TEST_R11D_FROM_PTR_RBX_(VALUE) test r11d, dword ptr [rbx + VALUE]
#define TEST_R11D_FROM_PTR_RCX_(VALUE) test r11d, dword ptr [rcx + VALUE]
#define TEST_R11D_FROM_PTR_RDX_(VALUE) test r11d, dword ptr [rdx + VALUE]
#define TEST_R11D_FROM_PTR_RDI_(VALUE) test r11d, dword ptr [rdi + VALUE]
#define TEST_R11D_FROM_PTR_RSI_(VALUE) test r11d, dword ptr [rsi + VALUE]
#define TEST_R11D_FROM_PTR_RBP_(VALUE) test r11d, dword ptr [rbp + VALUE]
#define TEST_R11D_FROM_PTR_RSP_(VALUE) test r11d, dword ptr [rsp + VALUE]
#define TEST_R11D_FROM_PTR_R8_(VALUE) test r11d, dword ptr [r8 + VALUE]
#define TEST_R11D_FROM_PTR_R9_(VALUE) test r11d, dword ptr [r9 + VALUE]
#define TEST_R11D_FROM_PTR_R10_(VALUE) test r11d, dword ptr [r10 + VALUE]
#define TEST_R11D_FROM_PTR_R11_(VALUE) test r11d, dword ptr [r11 + VALUE]
#define TEST_R11D_FROM_PTR_R12_(VALUE) test r11d, dword ptr [r12 + VALUE]
#define TEST_R11D_FROM_PTR_R13_(VALUE) test r11d, dword ptr [r13 + VALUE]
#define TEST_R11D_FROM_PTR_R14_(VALUE) test r11d, dword ptr [r14 + VALUE]
#define TEST_R11D_FROM_PTR_R15_(VALUE) test r11d, dword ptr [r15 + VALUE]
#define TEST_R11D_FROM_PTR_EAX_(VALUE) test r11d, dword ptr [eax + VALUE]
#define TEST_R11D_FROM_PTR_EBX_(VALUE) test r11d, dword ptr [ebx + VALUE]
#define TEST_R11D_FROM_PTR_ECX_(VALUE) test r11d, dword ptr [ecx + VALUE]
#define TEST_R11D_FROM_PTR_EDX_(VALUE) test r11d, dword ptr [edx + VALUE]
#define TEST_R11D_FROM_PTR_EDI_(VALUE) test r11d, dword ptr [edi + VALUE]
#define TEST_R11D_FROM_PTR_ESI_(VALUE) test r11d, dword ptr [esi + VALUE]
#define TEST_R11D_FROM_PTR_EBP_(VALUE) test r11d, dword ptr [ebp + VALUE]
#define TEST_R11D_FROM_PTR_ESP_(VALUE) test r11d, dword ptr [esp + VALUE]

#define TEST_R12D_FROM_PTR_RAX_(VALUE) test r12d, dword ptr [rax + VALUE]
#define TEST_R12D_FROM_PTR_RBX_(VALUE) test r12d, dword ptr [rbx + VALUE]
#define TEST_R12D_FROM_PTR_RCX_(VALUE) test r12d, dword ptr [rcx + VALUE]
#define TEST_R12D_FROM_PTR_RDX_(VALUE) test r12d, dword ptr [rdx + VALUE]
#define TEST_R12D_FROM_PTR_RDI_(VALUE) test r12d, dword ptr [rdi + VALUE]
#define TEST_R12D_FROM_PTR_RSI_(VALUE) test r12d, dword ptr [rsi + VALUE]
#define TEST_R12D_FROM_PTR_RBP_(VALUE) test r12d, dword ptr [rbp + VALUE]
#define TEST_R12D_FROM_PTR_RSP_(VALUE) test r12d, dword ptr [rsp + VALUE]
#define TEST_R12D_FROM_PTR_R8_(VALUE) test r12d, dword ptr [r8 + VALUE]
#define TEST_R12D_FROM_PTR_R9_(VALUE) test r12d, dword ptr [r9 + VALUE]
#define TEST_R12D_FROM_PTR_R10_(VALUE) test r12d, dword ptr [r10 + VALUE]
#define TEST_R12D_FROM_PTR_R11_(VALUE) test r12d, dword ptr [r11 + VALUE]
#define TEST_R12D_FROM_PTR_R12_(VALUE) test r12d, dword ptr [r12 + VALUE]
#define TEST_R12D_FROM_PTR_R13_(VALUE) test r12d, dword ptr [r13 + VALUE]
#define TEST_R12D_FROM_PTR_R14_(VALUE) test r12d, dword ptr [r14 + VALUE]
#define TEST_R12D_FROM_PTR_R15_(VALUE) test r12d, dword ptr [r15 + VALUE]
#define TEST_R12D_FROM_PTR_EAX_(VALUE) test r12d, dword ptr [eax + VALUE]
#define TEST_R12D_FROM_PTR_EBX_(VALUE) test r12d, dword ptr [ebx + VALUE]
#define TEST_R12D_FROM_PTR_ECX_(VALUE) test r12d, dword ptr [ecx + VALUE]
#define TEST_R12D_FROM_PTR_EDX_(VALUE) test r12d, dword ptr [edx + VALUE]
#define TEST_R12D_FROM_PTR_EDI_(VALUE) test r12d, dword ptr [edi + VALUE]
#define TEST_R12D_FROM_PTR_ESI_(VALUE) test r12d, dword ptr [esi + VALUE]
#define TEST_R12D_FROM_PTR_EBP_(VALUE) test r12d, dword ptr [ebp + VALUE]
#define TEST_R12D_FROM_PTR_ESP_(VALUE) test r12d, dword ptr [esp + VALUE]

#define TEST_R13D_FROM_PTR_RAX_(VALUE) test r13d, dword ptr [rax + VALUE]
#define TEST_R13D_FROM_PTR_RBX_(VALUE) test r13d, dword ptr [rbx + VALUE]
#define TEST_R13D_FROM_PTR_RCX_(VALUE) test r13d, dword ptr [rcx + VALUE]
#define TEST_R13D_FROM_PTR_RDX_(VALUE) test r13d, dword ptr [rdx + VALUE]
#define TEST_R13D_FROM_PTR_RDI_(VALUE) test r13d, dword ptr [rdi + VALUE]
#define TEST_R13D_FROM_PTR_RSI_(VALUE) test r13d, dword ptr [rsi + VALUE]
#define TEST_R13D_FROM_PTR_RBP_(VALUE) test r13d, dword ptr [rbp + VALUE]
#define TEST_R13D_FROM_PTR_RSP_(VALUE) test r13d, dword ptr [rsp + VALUE]
#define TEST_R13D_FROM_PTR_R8_(VALUE) test r13d, dword ptr [r8 + VALUE]
#define TEST_R13D_FROM_PTR_R9_(VALUE) test r13d, dword ptr [r9 + VALUE]
#define TEST_R13D_FROM_PTR_R10_(VALUE) test r13d, dword ptr [r10 + VALUE]
#define TEST_R13D_FROM_PTR_R11_(VALUE) test r13d, dword ptr [r11 + VALUE]
#define TEST_R13D_FROM_PTR_R12_(VALUE) test r13d, dword ptr [r12 + VALUE]
#define TEST_R13D_FROM_PTR_R13_(VALUE) test r13d, dword ptr [r13 + VALUE]
#define TEST_R13D_FROM_PTR_R14_(VALUE) test r13d, dword ptr [r14 + VALUE]
#define TEST_R13D_FROM_PTR_R15_(VALUE) test r13d, dword ptr [r15 + VALUE]
#define TEST_R13D_FROM_PTR_EAX_(VALUE) test r13d, dword ptr [eax + VALUE]
#define TEST_R13D_FROM_PTR_EBX_(VALUE) test r13d, dword ptr [ebx + VALUE]
#define TEST_R13D_FROM_PTR_ECX_(VALUE) test r13d, dword ptr [ecx + VALUE]
#define TEST_R13D_FROM_PTR_EDX_(VALUE) test r13d, dword ptr [edx + VALUE]
#define TEST_R13D_FROM_PTR_EDI_(VALUE) test r13d, dword ptr [edi + VALUE]
#define TEST_R13D_FROM_PTR_ESI_(VALUE) test r13d, dword ptr [esi + VALUE]
#define TEST_R13D_FROM_PTR_EBP_(VALUE) test r13d, dword ptr [ebp + VALUE]
#define TEST_R13D_FROM_PTR_ESP_(VALUE) test r13d, dword ptr [esp + VALUE]

#define TEST_R14D_FROM_PTR_RAX_(VALUE) test r14d, dword ptr [rax + VALUE]
#define TEST_R14D_FROM_PTR_RBX_(VALUE) test r14d, dword ptr [rbx + VALUE]
#define TEST_R14D_FROM_PTR_RCX_(VALUE) test r14d, dword ptr [rcx + VALUE]
#define TEST_R14D_FROM_PTR_RDX_(VALUE) test r14d, dword ptr [rdx + VALUE]
#define TEST_R14D_FROM_PTR_RDI_(VALUE) test r14d, dword ptr [rdi + VALUE]
#define TEST_R14D_FROM_PTR_RSI_(VALUE) test r14d, dword ptr [rsi + VALUE]
#define TEST_R14D_FROM_PTR_RBP_(VALUE) test r14d, dword ptr [rbp + VALUE]
#define TEST_R14D_FROM_PTR_RSP_(VALUE) test r14d, dword ptr [rsp + VALUE]
#define TEST_R14D_FROM_PTR_R8_(VALUE) test r14d, dword ptr [r8 + VALUE]
#define TEST_R14D_FROM_PTR_R9_(VALUE) test r14d, dword ptr [r9 + VALUE]
#define TEST_R14D_FROM_PTR_R10_(VALUE) test r14d, dword ptr [r10 + VALUE]
#define TEST_R14D_FROM_PTR_R11_(VALUE) test r14d, dword ptr [r11 + VALUE]
#define TEST_R14D_FROM_PTR_R12_(VALUE) test r14d, dword ptr [r12 + VALUE]
#define TEST_R14D_FROM_PTR_R13_(VALUE) test r14d, dword ptr [r13 + VALUE]
#define TEST_R14D_FROM_PTR_R14_(VALUE) test r14d, dword ptr [r14 + VALUE]
#define TEST_R14D_FROM_PTR_R15_(VALUE) test r14d, dword ptr [r15 + VALUE]
#define TEST_R14D_FROM_PTR_EAX_(VALUE) test r14d, dword ptr [eax + VALUE]
#define TEST_R14D_FROM_PTR_EBX_(VALUE) test r14d, dword ptr [ebx + VALUE]
#define TEST_R14D_FROM_PTR_ECX_(VALUE) test r14d, dword ptr [ecx + VALUE]
#define TEST_R14D_FROM_PTR_EDX_(VALUE) test r14d, dword ptr [edx + VALUE]
#define TEST_R14D_FROM_PTR_EDI_(VALUE) test r14d, dword ptr [edi + VALUE]
#define TEST_R14D_FROM_PTR_ESI_(VALUE) test r14d, dword ptr [esi + VALUE]
#define TEST_R14D_FROM_PTR_EBP_(VALUE) test r14d, dword ptr [ebp + VALUE]
#define TEST_R14D_FROM_PTR_ESP_(VALUE) test r14d, dword ptr [esp + VALUE]

#define TEST_R15D_FROM_PTR_RAX_(VALUE) test r15d, dword ptr [rax + VALUE]
#define TEST_R15D_FROM_PTR_RBX_(VALUE) test r15d, dword ptr [rbx + VALUE]
#define TEST_R15D_FROM_PTR_RCX_(VALUE) test r15d, dword ptr [rcx + VALUE]
#define TEST_R15D_FROM_PTR_RDX_(VALUE) test r15d, dword ptr [rdx + VALUE]
#define TEST_R15D_FROM_PTR_RDI_(VALUE) test r15d, dword ptr [rdi + VALUE]
#define TEST_R15D_FROM_PTR_RSI_(VALUE) test r15d, dword ptr [rsi + VALUE]
#define TEST_R15D_FROM_PTR_RBP_(VALUE) test r15d, dword ptr [rbp + VALUE]
#define TEST_R15D_FROM_PTR_RSP_(VALUE) test r15d, dword ptr [rsp + VALUE]
#define TEST_R15D_FROM_PTR_R8_(VALUE) test r15d, dword ptr [r8 + VALUE]
#define TEST_R15D_FROM_PTR_R9_(VALUE) test r15d, dword ptr [r9 + VALUE]
#define TEST_R15D_FROM_PTR_R10_(VALUE) test r15d, dword ptr [r10 + VALUE]
#define TEST_R15D_FROM_PTR_R11_(VALUE) test r15d, dword ptr [r11 + VALUE]
#define TEST_R15D_FROM_PTR_R12_(VALUE) test r15d, dword ptr [r12 + VALUE]
#define TEST_R15D_FROM_PTR_R13_(VALUE) test r15d, dword ptr [r13 + VALUE]
#define TEST_R15D_FROM_PTR_R14_(VALUE) test r15d, dword ptr [r14 + VALUE]
#define TEST_R15D_FROM_PTR_R15_(VALUE) test r15d, dword ptr [r15 + VALUE]
#define TEST_R15D_FROM_PTR_EAX_(VALUE) test r15d, dword ptr [eax + VALUE]
#define TEST_R15D_FROM_PTR_EBX_(VALUE) test r15d, dword ptr [ebx + VALUE]
#define TEST_R15D_FROM_PTR_ECX_(VALUE) test r15d, dword ptr [ecx + VALUE]
#define TEST_R15D_FROM_PTR_EDX_(VALUE) test r15d, dword ptr [edx + VALUE]
#define TEST_R15D_FROM_PTR_EDI_(VALUE) test r15d, dword ptr [edi + VALUE]
#define TEST_R15D_FROM_PTR_ESI_(VALUE) test r15d, dword ptr [esi + VALUE]
#define TEST_R15D_FROM_PTR_EBP_(VALUE) test r15d, dword ptr [ebp + VALUE]
#define TEST_R15D_FROM_PTR_ESP_(VALUE) test r15d, dword ptr [esp + VALUE]

#define TEST_EAX_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], eax
#define TEST_EAX_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], eax
#define TEST_EAX_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], eax
#define TEST_EAX_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], eax
#define TEST_EAX_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], eax
#define TEST_EAX_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], eax
#define TEST_EAX_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], eax
#define TEST_EAX_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], eax
#define TEST_EAX_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], eax
#define TEST_EAX_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], eax
#define TEST_EAX_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], eax
#define TEST_EAX_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], eax
#define TEST_EAX_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], eax
#define TEST_EAX_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], eax
#define TEST_EAX_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], eax
#define TEST_EAX_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], eax
#define TEST_EAX_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], eax
#define TEST_EAX_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], eax
#define TEST_EAX_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], eax
#define TEST_EAX_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], eax
#define TEST_EAX_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], eax
#define TEST_EAX_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], eax
#define TEST_EAX_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], eax
#define TEST_EAX_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], eax

#define TEST_EBX_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], ebx
#define TEST_EBX_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], ebx
#define TEST_EBX_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], ebx
#define TEST_EBX_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], ebx
#define TEST_EBX_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], ebx
#define TEST_EBX_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], ebx
#define TEST_EBX_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], ebx
#define TEST_EBX_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], ebx
#define TEST_EBX_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], ebx
#define TEST_EBX_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], ebx
#define TEST_EBX_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], ebx
#define TEST_EBX_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], ebx
#define TEST_EBX_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], ebx
#define TEST_EBX_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], ebx
#define TEST_EBX_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], ebx
#define TEST_EBX_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], ebx
#define TEST_EBX_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], ebx
#define TEST_EBX_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], ebx
#define TEST_EBX_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], ebx
#define TEST_EBX_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], ebx
#define TEST_EBX_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], ebx
#define TEST_EBX_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], ebx
#define TEST_EBX_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], ebx
#define TEST_EBX_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], ebx

#define TEST_ECX_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], ecx
#define TEST_ECX_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], ecx
#define TEST_ECX_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], ecx
#define TEST_ECX_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], ecx
#define TEST_ECX_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], ecx
#define TEST_ECX_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], ecx
#define TEST_ECX_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], ecx
#define TEST_ECX_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], ecx
#define TEST_ECX_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], ecx
#define TEST_ECX_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], ecx
#define TEST_ECX_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], ecx
#define TEST_ECX_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], ecx
#define TEST_ECX_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], ecx
#define TEST_ECX_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], ecx
#define TEST_ECX_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], ecx
#define TEST_ECX_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], ecx
#define TEST_ECX_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], ecx
#define TEST_ECX_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], ecx
#define TEST_ECX_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], ecx
#define TEST_ECX_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], ecx
#define TEST_ECX_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], ecx
#define TEST_ECX_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], ecx
#define TEST_ECX_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], ecx
#define TEST_ECX_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], ecx

#define TEST_EDX_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], edx
#define TEST_EDX_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], edx
#define TEST_EDX_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], edx
#define TEST_EDX_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], edx
#define TEST_EDX_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], edx
#define TEST_EDX_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], edx
#define TEST_EDX_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], edx
#define TEST_EDX_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], edx
#define TEST_EDX_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], edx
#define TEST_EDX_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], edx
#define TEST_EDX_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], edx
#define TEST_EDX_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], edx
#define TEST_EDX_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], edx
#define TEST_EDX_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], edx
#define TEST_EDX_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], edx
#define TEST_EDX_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], edx
#define TEST_EDX_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], edx
#define TEST_EDX_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], edx
#define TEST_EDX_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], edx
#define TEST_EDX_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], edx
#define TEST_EDX_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], edx
#define TEST_EDX_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], edx
#define TEST_EDX_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], edx
#define TEST_EDX_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], edx

#define TEST_EDI_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], edi
#define TEST_EDI_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], edi
#define TEST_EDI_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], edi
#define TEST_EDI_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], edi
#define TEST_EDI_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], edi
#define TEST_EDI_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], edi
#define TEST_EDI_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], edi
#define TEST_EDI_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], edi
#define TEST_EDI_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], edi
#define TEST_EDI_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], edi
#define TEST_EDI_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], edi
#define TEST_EDI_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], edi
#define TEST_EDI_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], edi
#define TEST_EDI_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], edi
#define TEST_EDI_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], edi
#define TEST_EDI_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], edi
#define TEST_EDI_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], edi
#define TEST_EDI_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], edi
#define TEST_EDI_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], edi
#define TEST_EDI_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], edi
#define TEST_EDI_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], edi
#define TEST_EDI_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], edi
#define TEST_EDI_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], edi
#define TEST_EDI_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], edi

#define TEST_ESI_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], esi
#define TEST_ESI_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], esi
#define TEST_ESI_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], esi
#define TEST_ESI_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], esi
#define TEST_ESI_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], esi
#define TEST_ESI_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], esi
#define TEST_ESI_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], esi
#define TEST_ESI_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], esi
#define TEST_ESI_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], esi
#define TEST_ESI_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], esi
#define TEST_ESI_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], esi
#define TEST_ESI_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], esi
#define TEST_ESI_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], esi
#define TEST_ESI_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], esi
#define TEST_ESI_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], esi
#define TEST_ESI_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], esi
#define TEST_ESI_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], esi
#define TEST_ESI_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], esi
#define TEST_ESI_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], esi
#define TEST_ESI_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], esi
#define TEST_ESI_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], esi
#define TEST_ESI_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], esi
#define TEST_ESI_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], esi
#define TEST_ESI_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], esi

#define TEST_EBP_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], ebp
#define TEST_EBP_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], ebp
#define TEST_EBP_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], ebp
#define TEST_EBP_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], ebp
#define TEST_EBP_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], ebp
#define TEST_EBP_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], ebp
#define TEST_EBP_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], ebp
#define TEST_EBP_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], ebp
#define TEST_EBP_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], ebp
#define TEST_EBP_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], ebp
#define TEST_EBP_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], ebp
#define TEST_EBP_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], ebp
#define TEST_EBP_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], ebp
#define TEST_EBP_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], ebp
#define TEST_EBP_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], ebp
#define TEST_EBP_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], ebp
#define TEST_EBP_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], ebp
#define TEST_EBP_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], ebp
#define TEST_EBP_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], ebp
#define TEST_EBP_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], ebp
#define TEST_EBP_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], ebp
#define TEST_EBP_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], ebp
#define TEST_EBP_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], ebp
#define TEST_EBP_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], ebp

#define TEST_ESP_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], esp
#define TEST_ESP_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], esp
#define TEST_ESP_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], esp
#define TEST_ESP_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], esp
#define TEST_ESP_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], esp
#define TEST_ESP_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], esp
#define TEST_ESP_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], esp
#define TEST_ESP_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], esp
#define TEST_ESP_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], esp
#define TEST_ESP_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], esp
#define TEST_ESP_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], esp
#define TEST_ESP_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], esp
#define TEST_ESP_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], esp
#define TEST_ESP_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], esp
#define TEST_ESP_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], esp
#define TEST_ESP_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], esp
#define TEST_ESP_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], esp
#define TEST_ESP_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], esp
#define TEST_ESP_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], esp
#define TEST_ESP_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], esp
#define TEST_ESP_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], esp
#define TEST_ESP_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], esp
#define TEST_ESP_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], esp
#define TEST_ESP_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], esp

#define TEST_R8D_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], r8d
#define TEST_R8D_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], r8d
#define TEST_R8D_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], r8d
#define TEST_R8D_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], r8d
#define TEST_R8D_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], r8d
#define TEST_R8D_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], r8d
#define TEST_R8D_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], r8d
#define TEST_R8D_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], r8d
#define TEST_R8D_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], r8d
#define TEST_R8D_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], r8d
#define TEST_R8D_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], r8d
#define TEST_R8D_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], r8d
#define TEST_R8D_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], r8d
#define TEST_R8D_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], r8d
#define TEST_R8D_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], r8d
#define TEST_R8D_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], r8d
#define TEST_R8D_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], r8d
#define TEST_R8D_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], r8d
#define TEST_R8D_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], r8d
#define TEST_R8D_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], r8d
#define TEST_R8D_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], r8d
#define TEST_R8D_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], r8d
#define TEST_R8D_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], r8d
#define TEST_R8D_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], r8d

#define TEST_R9D_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], r9d
#define TEST_R9D_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], r9d
#define TEST_R9D_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], r9d
#define TEST_R9D_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], r9d
#define TEST_R9D_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], r9d
#define TEST_R9D_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], r9d
#define TEST_R9D_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], r9d
#define TEST_R9D_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], r9d
#define TEST_R9D_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], r9d
#define TEST_R9D_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], r9d
#define TEST_R9D_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], r9d
#define TEST_R9D_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], r9d
#define TEST_R9D_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], r9d
#define TEST_R9D_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], r9d
#define TEST_R9D_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], r9d
#define TEST_R9D_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], r9d
#define TEST_R9D_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], r9d
#define TEST_R9D_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], r9d
#define TEST_R9D_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], r9d
#define TEST_R9D_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], r9d
#define TEST_R9D_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], r9d
#define TEST_R9D_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], r9d
#define TEST_R9D_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], r9d
#define TEST_R9D_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], r9d

#define TEST_R10D_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], r10d
#define TEST_R10D_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], r10d
#define TEST_R10D_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], r10d
#define TEST_R10D_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], r10d
#define TEST_R10D_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], r10d
#define TEST_R10D_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], r10d
#define TEST_R10D_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], r10d
#define TEST_R10D_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], r10d
#define TEST_R10D_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], r10d
#define TEST_R10D_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], r10d
#define TEST_R10D_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], r10d
#define TEST_R10D_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], r10d
#define TEST_R10D_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], r10d
#define TEST_R10D_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], r10d
#define TEST_R10D_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], r10d
#define TEST_R10D_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], r10d
#define TEST_R10D_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], r10d
#define TEST_R10D_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], r10d
#define TEST_R10D_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], r10d
#define TEST_R10D_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], r10d
#define TEST_R10D_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], r10d
#define TEST_R10D_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], r10d
#define TEST_R10D_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], r10d
#define TEST_R10D_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], r10d

#define TEST_R11D_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], r11d
#define TEST_R11D_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], r11d
#define TEST_R11D_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], r11d
#define TEST_R11D_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], r11d
#define TEST_R11D_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], r11d
#define TEST_R11D_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], r11d
#define TEST_R11D_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], r11d
#define TEST_R11D_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], r11d
#define TEST_R11D_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], r11d
#define TEST_R11D_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], r11d
#define TEST_R11D_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], r11d
#define TEST_R11D_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], r11d
#define TEST_R11D_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], r11d
#define TEST_R11D_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], r11d
#define TEST_R11D_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], r11d
#define TEST_R11D_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], r11d
#define TEST_R11D_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], r11d
#define TEST_R11D_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], r11d
#define TEST_R11D_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], r11d
#define TEST_R11D_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], r11d
#define TEST_R11D_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], r11d
#define TEST_R11D_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], r11d
#define TEST_R11D_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], r11d
#define TEST_R11D_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], r11d

#define TEST_R12D_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], r12d
#define TEST_R12D_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], r12d
#define TEST_R12D_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], r12d
#define TEST_R12D_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], r12d
#define TEST_R12D_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], r12d
#define TEST_R12D_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], r12d
#define TEST_R12D_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], r12d
#define TEST_R12D_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], r12d
#define TEST_R12D_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], r12d
#define TEST_R12D_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], r12d
#define TEST_R12D_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], r12d
#define TEST_R12D_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], r12d
#define TEST_R12D_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], r12d
#define TEST_R12D_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], r12d
#define TEST_R12D_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], r12d
#define TEST_R12D_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], r12d
#define TEST_R12D_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], r12d
#define TEST_R12D_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], r12d
#define TEST_R12D_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], r12d
#define TEST_R12D_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], r12d
#define TEST_R12D_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], r12d
#define TEST_R12D_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], r12d
#define TEST_R12D_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], r12d
#define TEST_R12D_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], r12d

#define TEST_R13D_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], r13d
#define TEST_R13D_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], r13d
#define TEST_R13D_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], r13d
#define TEST_R13D_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], r13d
#define TEST_R13D_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], r13d
#define TEST_R13D_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], r13d
#define TEST_R13D_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], r13d
#define TEST_R13D_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], r13d
#define TEST_R13D_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], r13d
#define TEST_R13D_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], r13d
#define TEST_R13D_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], r13d
#define TEST_R13D_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], r13d
#define TEST_R13D_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], r13d
#define TEST_R13D_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], r13d
#define TEST_R13D_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], r13d
#define TEST_R13D_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], r13d
#define TEST_R13D_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], r13d
#define TEST_R13D_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], r13d
#define TEST_R13D_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], r13d
#define TEST_R13D_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], r13d
#define TEST_R13D_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], r13d
#define TEST_R13D_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], r13d
#define TEST_R13D_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], r13d
#define TEST_R13D_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], r13d

#define TEST_R14D_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], r14d
#define TEST_R14D_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], r14d
#define TEST_R14D_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], r14d
#define TEST_R14D_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], r14d
#define TEST_R14D_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], r14d
#define TEST_R14D_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], r14d
#define TEST_R14D_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], r14d
#define TEST_R14D_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], r14d
#define TEST_R14D_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], r14d
#define TEST_R14D_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], r14d
#define TEST_R14D_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], r14d
#define TEST_R14D_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], r14d
#define TEST_R14D_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], r14d
#define TEST_R14D_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], r14d
#define TEST_R14D_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], r14d
#define TEST_R14D_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], r14d
#define TEST_R14D_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], r14d
#define TEST_R14D_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], r14d
#define TEST_R14D_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], r14d
#define TEST_R14D_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], r14d
#define TEST_R14D_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], r14d
#define TEST_R14D_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], r14d
#define TEST_R14D_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], r14d
#define TEST_R14D_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], r14d

#define TEST_R15D_TO_PTR_RAX_(VALUE) test dword ptr [rax + VALUE], r15d
#define TEST_R15D_TO_PTR_RBX_(VALUE) test dword ptr [rbx + VALUE], r15d
#define TEST_R15D_TO_PTR_RCX_(VALUE) test dword ptr [rcx + VALUE], r15d
#define TEST_R15D_TO_PTR_RDX_(VALUE) test dword ptr [rdx + VALUE], r15d
#define TEST_R15D_TO_PTR_RDI_(VALUE) test dword ptr [rdi + VALUE], r15d
#define TEST_R15D_TO_PTR_RSI_(VALUE) test dword ptr [rsi + VALUE], r15d
#define TEST_R15D_TO_PTR_RBP_(VALUE) test dword ptr [rbp + VALUE], r15d
#define TEST_R15D_TO_PTR_RSP_(VALUE) test dword ptr [rsp + VALUE], r15d
#define TEST_R15D_TO_PTR_R8_(VALUE) test dword ptr [r8 + VALUE], r15d
#define TEST_R15D_TO_PTR_R9_(VALUE) test dword ptr [r9 + VALUE], r15d
#define TEST_R15D_TO_PTR_R10_(VALUE) test dword ptr [r10 + VALUE], r15d
#define TEST_R15D_TO_PTR_R11_(VALUE) test dword ptr [r11 + VALUE], r15d
#define TEST_R15D_TO_PTR_R12_(VALUE) test dword ptr [r12 + VALUE], r15d
#define TEST_R15D_TO_PTR_R13_(VALUE) test dword ptr [r13 + VALUE], r15d
#define TEST_R15D_TO_PTR_R14_(VALUE) test dword ptr [r14 + VALUE], r15d
#define TEST_R15D_TO_PTR_R15_(VALUE) test dword ptr [r15 + VALUE], r15d
#define TEST_R15D_TO_PTR_EAX_(VALUE) test dword ptr [eax + VALUE], r15d
#define TEST_R15D_TO_PTR_EBX_(VALUE) test dword ptr [ebx + VALUE], r15d
#define TEST_R15D_TO_PTR_ECX_(VALUE) test dword ptr [ecx + VALUE], r15d
#define TEST_R15D_TO_PTR_EDX_(VALUE) test dword ptr [edx + VALUE], r15d
#define TEST_R15D_TO_PTR_EDI_(VALUE) test dword ptr [edi + VALUE], r15d
#define TEST_R15D_TO_PTR_ESI_(VALUE) test dword ptr [esi + VALUE], r15d
#define TEST_R15D_TO_PTR_EBP_(VALUE) test dword ptr [ebp + VALUE], r15d
#define TEST_R15D_TO_PTR_ESP_(VALUE) test dword ptr [esp + VALUE], r15d
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
