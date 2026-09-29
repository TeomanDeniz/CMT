#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define ADC_EAX_FROM_PTR_(VALUE) adc eax, dword ptr [VALUE]
#define ADC_EBX_FROM_PTR_(VALUE) adc ebx, dword ptr [VALUE]
#define ADC_ECX_FROM_PTR_(VALUE) adc ecx, dword ptr [VALUE]
#define ADC_EDX_FROM_PTR_(VALUE) adc edx, dword ptr [VALUE]
#define ADC_EDI_FROM_PTR_(VALUE) adc edi, dword ptr [VALUE]
#define ADC_ESI_FROM_PTR_(VALUE) adc esi, dword ptr [VALUE]
#define ADC_EBP_FROM_PTR_(VALUE) adc ebp, dword ptr [VALUE]
#define ADC_ESP_FROM_PTR_(VALUE) adc esp, dword ptr [VALUE]

#define ADC_EAX_TO_PTR_(VALUE) adc dword ptr [VALUE], eax
#define ADC_EBX_TO_PTR_(VALUE) adc dword ptr [VALUE], ebx
#define ADC_ECX_TO_PTR_(VALUE) adc dword ptr [VALUE], ecx
#define ADC_EDX_TO_PTR_(VALUE) adc dword ptr [VALUE], edx
#define ADC_EDI_TO_PTR_(VALUE) adc dword ptr [VALUE], edi
#define ADC_ESI_TO_PTR_(VALUE) adc dword ptr [VALUE], esi
#define ADC_EBP_TO_PTR_(VALUE) adc dword ptr [VALUE], ebp
#define ADC_ESP_TO_PTR_(VALUE) adc dword ptr [VALUE], esp

#define ADC_EAX_FROM_PTR_EAX adc eax, dword ptr [eax]
#define ADC_EAX_FROM_PTR_EBX adc eax, dword ptr [ebx]
#define ADC_EAX_FROM_PTR_ECX adc eax, dword ptr [ecx]
#define ADC_EAX_FROM_PTR_EDX adc eax, dword ptr [edx]
#define ADC_EAX_FROM_PTR_EDI adc eax, dword ptr [edi]
#define ADC_EAX_FROM_PTR_ESI adc eax, dword ptr [esi]
#define ADC_EAX_FROM_PTR_EBP adc eax, dword ptr [ebp]
#define ADC_EAX_FROM_PTR_ESP adc eax, dword ptr [esp]
#define ADC_EAX_FROM_PTR_BX adc eax, dword ptr [bx]
#define ADC_EAX_FROM_PTR_BP adc eax, dword ptr [bp]
#define ADC_EAX_FROM_PTR_SI adc eax, dword ptr [si]
#define ADC_EAX_FROM_PTR_DI adc eax, dword ptr [di]

#define ADC_EBX_FROM_PTR_EAX adc ebx, dword ptr [eax]
#define ADC_EBX_FROM_PTR_EBX adc ebx, dword ptr [ebx]
#define ADC_EBX_FROM_PTR_ECX adc ebx, dword ptr [ecx]
#define ADC_EBX_FROM_PTR_EDX adc ebx, dword ptr [edx]
#define ADC_EBX_FROM_PTR_EDI adc ebx, dword ptr [edi]
#define ADC_EBX_FROM_PTR_ESI adc ebx, dword ptr [esi]
#define ADC_EBX_FROM_PTR_EBP adc ebx, dword ptr [ebp]
#define ADC_EBX_FROM_PTR_ESP adc ebx, dword ptr [esp]
#define ADC_EBX_FROM_PTR_BX adc ebx, dword ptr [bx]
#define ADC_EBX_FROM_PTR_BP adc ebx, dword ptr [bp]
#define ADC_EBX_FROM_PTR_SI adc ebx, dword ptr [si]
#define ADC_EBX_FROM_PTR_DI adc ebx, dword ptr [di]

#define ADC_ECX_FROM_PTR_EAX adc ecx, dword ptr [eax]
#define ADC_ECX_FROM_PTR_EBX adc ecx, dword ptr [ebx]
#define ADC_ECX_FROM_PTR_ECX adc ecx, dword ptr [ecx]
#define ADC_ECX_FROM_PTR_EDX adc ecx, dword ptr [edx]
#define ADC_ECX_FROM_PTR_EDI adc ecx, dword ptr [edi]
#define ADC_ECX_FROM_PTR_ESI adc ecx, dword ptr [esi]
#define ADC_ECX_FROM_PTR_EBP adc ecx, dword ptr [ebp]
#define ADC_ECX_FROM_PTR_ESP adc ecx, dword ptr [esp]
#define ADC_ECX_FROM_PTR_BX adc ecx, dword ptr [bx]
#define ADC_ECX_FROM_PTR_BP adc ecx, dword ptr [bp]
#define ADC_ECX_FROM_PTR_SI adc ecx, dword ptr [si]
#define ADC_ECX_FROM_PTR_DI adc ecx, dword ptr [di]

#define ADC_EDX_FROM_PTR_EAX adc edx, dword ptr [eax]
#define ADC_EDX_FROM_PTR_EBX adc edx, dword ptr [ebx]
#define ADC_EDX_FROM_PTR_ECX adc edx, dword ptr [ecx]
#define ADC_EDX_FROM_PTR_EDX adc edx, dword ptr [edx]
#define ADC_EDX_FROM_PTR_EDI adc edx, dword ptr [edi]
#define ADC_EDX_FROM_PTR_ESI adc edx, dword ptr [esi]
#define ADC_EDX_FROM_PTR_EBP adc edx, dword ptr [ebp]
#define ADC_EDX_FROM_PTR_ESP adc edx, dword ptr [esp]
#define ADC_EDX_FROM_PTR_BX adc edx, dword ptr [bx]
#define ADC_EDX_FROM_PTR_BP adc edx, dword ptr [bp]
#define ADC_EDX_FROM_PTR_SI adc edx, dword ptr [si]
#define ADC_EDX_FROM_PTR_DI adc edx, dword ptr [di]

#define ADC_EDI_FROM_PTR_EAX adc edi, dword ptr [eax]
#define ADC_EDI_FROM_PTR_EBX adc edi, dword ptr [ebx]
#define ADC_EDI_FROM_PTR_ECX adc edi, dword ptr [ecx]
#define ADC_EDI_FROM_PTR_EDX adc edi, dword ptr [edx]
#define ADC_EDI_FROM_PTR_EDI adc edi, dword ptr [edi]
#define ADC_EDI_FROM_PTR_ESI adc edi, dword ptr [esi]
#define ADC_EDI_FROM_PTR_EBP adc edi, dword ptr [ebp]
#define ADC_EDI_FROM_PTR_ESP adc edi, dword ptr [esp]
#define ADC_EDI_FROM_PTR_BX adc edi, dword ptr [bx]
#define ADC_EDI_FROM_PTR_BP adc edi, dword ptr [bp]
#define ADC_EDI_FROM_PTR_SI adc edi, dword ptr [si]
#define ADC_EDI_FROM_PTR_DI adc edi, dword ptr [di]

#define ADC_ESI_FROM_PTR_EAX adc esi, dword ptr [eax]
#define ADC_ESI_FROM_PTR_EBX adc esi, dword ptr [ebx]
#define ADC_ESI_FROM_PTR_ECX adc esi, dword ptr [ecx]
#define ADC_ESI_FROM_PTR_EDX adc esi, dword ptr [edx]
#define ADC_ESI_FROM_PTR_EDI adc esi, dword ptr [edi]
#define ADC_ESI_FROM_PTR_ESI adc esi, dword ptr [esi]
#define ADC_ESI_FROM_PTR_EBP adc esi, dword ptr [ebp]
#define ADC_ESI_FROM_PTR_ESP adc esi, dword ptr [esp]
#define ADC_ESI_FROM_PTR_BX adc esi, dword ptr [bx]
#define ADC_ESI_FROM_PTR_BP adc esi, dword ptr [bp]
#define ADC_ESI_FROM_PTR_SI adc esi, dword ptr [si]
#define ADC_ESI_FROM_PTR_DI adc esi, dword ptr [di]

#define ADC_EBP_FROM_PTR_EAX adc ebp, dword ptr [eax]
#define ADC_EBP_FROM_PTR_EBX adc ebp, dword ptr [ebx]
#define ADC_EBP_FROM_PTR_ECX adc ebp, dword ptr [ecx]
#define ADC_EBP_FROM_PTR_EDX adc ebp, dword ptr [edx]
#define ADC_EBP_FROM_PTR_EDI adc ebp, dword ptr [edi]
#define ADC_EBP_FROM_PTR_ESI adc ebp, dword ptr [esi]
#define ADC_EBP_FROM_PTR_EBP adc ebp, dword ptr [ebp]
#define ADC_EBP_FROM_PTR_ESP adc ebp, dword ptr [esp]
#define ADC_EBP_FROM_PTR_BX adc ebp, dword ptr [bx]
#define ADC_EBP_FROM_PTR_BP adc ebp, dword ptr [bp]
#define ADC_EBP_FROM_PTR_SI adc ebp, dword ptr [si]
#define ADC_EBP_FROM_PTR_DI adc ebp, dword ptr [di]

#define ADC_ESP_FROM_PTR_EAX adc esp, dword ptr [eax]
#define ADC_ESP_FROM_PTR_EBX adc esp, dword ptr [ebx]
#define ADC_ESP_FROM_PTR_ECX adc esp, dword ptr [ecx]
#define ADC_ESP_FROM_PTR_EDX adc esp, dword ptr [edx]
#define ADC_ESP_FROM_PTR_EDI adc esp, dword ptr [edi]
#define ADC_ESP_FROM_PTR_ESI adc esp, dword ptr [esi]
#define ADC_ESP_FROM_PTR_EBP adc esp, dword ptr [ebp]
#define ADC_ESP_FROM_PTR_ESP adc esp, dword ptr [esp]
#define ADC_ESP_FROM_PTR_BX adc esp, dword ptr [bx]
#define ADC_ESP_FROM_PTR_BP adc esp, dword ptr [bp]
#define ADC_ESP_FROM_PTR_SI adc esp, dword ptr [si]
#define ADC_ESP_FROM_PTR_DI adc esp, dword ptr [di]

#define ADC_EAX_TO_PTR_EAX adc dword ptr [eax], eax
#define ADC_EAX_TO_PTR_EBX adc dword ptr [ebx], eax
#define ADC_EAX_TO_PTR_ECX adc dword ptr [ecx], eax
#define ADC_EAX_TO_PTR_EDX adc dword ptr [edx], eax
#define ADC_EAX_TO_PTR_EDI adc dword ptr [edi], eax
#define ADC_EAX_TO_PTR_ESI adc dword ptr [esi], eax
#define ADC_EAX_TO_PTR_EBP adc dword ptr [ebp], eax
#define ADC_EAX_TO_PTR_ESP adc dword ptr [esp], eax
#define ADC_EAX_TO_PTR_BX adc dword ptr [bx], eax
#define ADC_EAX_TO_PTR_BP adc dword ptr [bp], eax
#define ADC_EAX_TO_PTR_SI adc dword ptr [si], eax
#define ADC_EAX_TO_PTR_DI adc dword ptr [di], eax

#define ADC_EBX_TO_PTR_EAX adc dword ptr [eax], ebx
#define ADC_EBX_TO_PTR_EBX adc dword ptr [ebx], ebx
#define ADC_EBX_TO_PTR_ECX adc dword ptr [ecx], ebx
#define ADC_EBX_TO_PTR_EDX adc dword ptr [edx], ebx
#define ADC_EBX_TO_PTR_EDI adc dword ptr [edi], ebx
#define ADC_EBX_TO_PTR_ESI adc dword ptr [esi], ebx
#define ADC_EBX_TO_PTR_EBP adc dword ptr [ebp], ebx
#define ADC_EBX_TO_PTR_ESP adc dword ptr [esp], ebx
#define ADC_EBX_TO_PTR_BX adc dword ptr [bx], ebx
#define ADC_EBX_TO_PTR_BP adc dword ptr [bp], ebx
#define ADC_EBX_TO_PTR_SI adc dword ptr [si], ebx
#define ADC_EBX_TO_PTR_DI adc dword ptr [di], ebx

#define ADC_ECX_TO_PTR_EAX adc dword ptr [eax], ecx
#define ADC_ECX_TO_PTR_EBX adc dword ptr [ebx], ecx
#define ADC_ECX_TO_PTR_ECX adc dword ptr [ecx], ecx
#define ADC_ECX_TO_PTR_EDX adc dword ptr [edx], ecx
#define ADC_ECX_TO_PTR_EDI adc dword ptr [edi], ecx
#define ADC_ECX_TO_PTR_ESI adc dword ptr [esi], ecx
#define ADC_ECX_TO_PTR_EBP adc dword ptr [ebp], ecx
#define ADC_ECX_TO_PTR_ESP adc dword ptr [esp], ecx
#define ADC_ECX_TO_PTR_BX adc dword ptr [bx], ecx
#define ADC_ECX_TO_PTR_BP adc dword ptr [bp], ecx
#define ADC_ECX_TO_PTR_SI adc dword ptr [si], ecx
#define ADC_ECX_TO_PTR_DI adc dword ptr [di], ecx

#define ADC_EDX_TO_PTR_EAX adc dword ptr [eax], edx
#define ADC_EDX_TO_PTR_EBX adc dword ptr [ebx], edx
#define ADC_EDX_TO_PTR_ECX adc dword ptr [ecx], edx
#define ADC_EDX_TO_PTR_EDX adc dword ptr [edx], edx
#define ADC_EDX_TO_PTR_EDI adc dword ptr [edi], edx
#define ADC_EDX_TO_PTR_ESI adc dword ptr [esi], edx
#define ADC_EDX_TO_PTR_EBP adc dword ptr [ebp], edx
#define ADC_EDX_TO_PTR_ESP adc dword ptr [esp], edx
#define ADC_EDX_TO_PTR_BX adc dword ptr [bx], edx
#define ADC_EDX_TO_PTR_BP adc dword ptr [bp], edx
#define ADC_EDX_TO_PTR_SI adc dword ptr [si], edx
#define ADC_EDX_TO_PTR_DI adc dword ptr [di], edx

#define ADC_EDI_TO_PTR_EAX adc dword ptr [eax], edi
#define ADC_EDI_TO_PTR_EBX adc dword ptr [ebx], edi
#define ADC_EDI_TO_PTR_ECX adc dword ptr [ecx], edi
#define ADC_EDI_TO_PTR_EDX adc dword ptr [edx], edi
#define ADC_EDI_TO_PTR_EDI adc dword ptr [edi], edi
#define ADC_EDI_TO_PTR_ESI adc dword ptr [esi], edi
#define ADC_EDI_TO_PTR_EBP adc dword ptr [ebp], edi
#define ADC_EDI_TO_PTR_ESP adc dword ptr [esp], edi
#define ADC_EDI_TO_PTR_BX adc dword ptr [bx], edi
#define ADC_EDI_TO_PTR_BP adc dword ptr [bp], edi
#define ADC_EDI_TO_PTR_SI adc dword ptr [si], edi
#define ADC_EDI_TO_PTR_DI adc dword ptr [di], edi

#define ADC_ESI_TO_PTR_EAX adc dword ptr [eax], esi
#define ADC_ESI_TO_PTR_EBX adc dword ptr [ebx], esi
#define ADC_ESI_TO_PTR_ECX adc dword ptr [ecx], esi
#define ADC_ESI_TO_PTR_EDX adc dword ptr [edx], esi
#define ADC_ESI_TO_PTR_EDI adc dword ptr [edi], esi
#define ADC_ESI_TO_PTR_ESI adc dword ptr [esi], esi
#define ADC_ESI_TO_PTR_EBP adc dword ptr [ebp], esi
#define ADC_ESI_TO_PTR_ESP adc dword ptr [esp], esi
#define ADC_ESI_TO_PTR_BX adc dword ptr [bx], esi
#define ADC_ESI_TO_PTR_BP adc dword ptr [bp], esi
#define ADC_ESI_TO_PTR_SI adc dword ptr [si], esi
#define ADC_ESI_TO_PTR_DI adc dword ptr [di], esi

#define ADC_EBP_TO_PTR_EAX adc dword ptr [eax], ebp
#define ADC_EBP_TO_PTR_EBX adc dword ptr [ebx], ebp
#define ADC_EBP_TO_PTR_ECX adc dword ptr [ecx], ebp
#define ADC_EBP_TO_PTR_EDX adc dword ptr [edx], ebp
#define ADC_EBP_TO_PTR_EDI adc dword ptr [edi], ebp
#define ADC_EBP_TO_PTR_ESI adc dword ptr [esi], ebp
#define ADC_EBP_TO_PTR_EBP adc dword ptr [ebp], ebp
#define ADC_EBP_TO_PTR_ESP adc dword ptr [esp], ebp
#define ADC_EBP_TO_PTR_BX adc dword ptr [bx], ebp
#define ADC_EBP_TO_PTR_BP adc dword ptr [bp], ebp
#define ADC_EBP_TO_PTR_SI adc dword ptr [si], ebp
#define ADC_EBP_TO_PTR_DI adc dword ptr [di], ebp

#define ADC_ESP_TO_PTR_EAX adc dword ptr [eax], esp
#define ADC_ESP_TO_PTR_EBX adc dword ptr [ebx], esp
#define ADC_ESP_TO_PTR_ECX adc dword ptr [ecx], esp
#define ADC_ESP_TO_PTR_EDX adc dword ptr [edx], esp
#define ADC_ESP_TO_PTR_EDI adc dword ptr [edi], esp
#define ADC_ESP_TO_PTR_ESI adc dword ptr [esi], esp
#define ADC_ESP_TO_PTR_EBP adc dword ptr [ebp], esp
#define ADC_ESP_TO_PTR_ESP adc dword ptr [esp], esp
#define ADC_ESP_TO_PTR_BX adc dword ptr [bx], esp
#define ADC_ESP_TO_PTR_BP adc dword ptr [bp], esp
#define ADC_ESP_TO_PTR_SI adc dword ptr [si], esp
#define ADC_ESP_TO_PTR_DI adc dword ptr [di], esp

#define ADC_EAX_FROM_PTR_EAX_(VALUE) adc eax, dword ptr [eax + VALUE]
#define ADC_EAX_FROM_PTR_EBX_(VALUE) adc eax, dword ptr [ebx + VALUE]
#define ADC_EAX_FROM_PTR_ECX_(VALUE) adc eax, dword ptr [ecx + VALUE]
#define ADC_EAX_FROM_PTR_EDX_(VALUE) adc eax, dword ptr [edx + VALUE]
#define ADC_EAX_FROM_PTR_EDI_(VALUE) adc eax, dword ptr [edi + VALUE]
#define ADC_EAX_FROM_PTR_ESI_(VALUE) adc eax, dword ptr [esi + VALUE]
#define ADC_EAX_FROM_PTR_EBP_(VALUE) adc eax, dword ptr [ebp + VALUE]
#define ADC_EAX_FROM_PTR_ESP_(VALUE) adc eax, dword ptr [esp + VALUE]
#define ADC_EAX_FROM_PTR_BX_(VALUE) adc eax, dword ptr [bx + VALUE]
#define ADC_EAX_FROM_PTR_BP_(VALUE) adc eax, dword ptr [bp + VALUE]
#define ADC_EAX_FROM_PTR_SI_(VALUE) adc eax, dword ptr [si + VALUE]
#define ADC_EAX_FROM_PTR_DI_(VALUE) adc eax, dword ptr [di + VALUE]

#define ADC_EBX_FROM_PTR_EAX_(VALUE) adc ebx, dword ptr [eax + VALUE]
#define ADC_EBX_FROM_PTR_EBX_(VALUE) adc ebx, dword ptr [ebx + VALUE]
#define ADC_EBX_FROM_PTR_ECX_(VALUE) adc ebx, dword ptr [ecx + VALUE]
#define ADC_EBX_FROM_PTR_EDX_(VALUE) adc ebx, dword ptr [edx + VALUE]
#define ADC_EBX_FROM_PTR_EDI_(VALUE) adc ebx, dword ptr [edi + VALUE]
#define ADC_EBX_FROM_PTR_ESI_(VALUE) adc ebx, dword ptr [esi + VALUE]
#define ADC_EBX_FROM_PTR_EBP_(VALUE) adc ebx, dword ptr [ebp + VALUE]
#define ADC_EBX_FROM_PTR_ESP_(VALUE) adc ebx, dword ptr [esp + VALUE]
#define ADC_EBX_FROM_PTR_BX_(VALUE) adc ebx, dword ptr [bx + VALUE]
#define ADC_EBX_FROM_PTR_BP_(VALUE) adc ebx, dword ptr [bp + VALUE]
#define ADC_EBX_FROM_PTR_SI_(VALUE) adc ebx, dword ptr [si + VALUE]
#define ADC_EBX_FROM_PTR_DI_(VALUE) adc ebx, dword ptr [di + VALUE]

#define ADC_ECX_FROM_PTR_EAX_(VALUE) adc ecx, dword ptr [eax + VALUE]
#define ADC_ECX_FROM_PTR_EBX_(VALUE) adc ecx, dword ptr [ebx + VALUE]
#define ADC_ECX_FROM_PTR_ECX_(VALUE) adc ecx, dword ptr [ecx + VALUE]
#define ADC_ECX_FROM_PTR_EDX_(VALUE) adc ecx, dword ptr [edx + VALUE]
#define ADC_ECX_FROM_PTR_EDI_(VALUE) adc ecx, dword ptr [edi + VALUE]
#define ADC_ECX_FROM_PTR_ESI_(VALUE) adc ecx, dword ptr [esi + VALUE]
#define ADC_ECX_FROM_PTR_EBP_(VALUE) adc ecx, dword ptr [ebp + VALUE]
#define ADC_ECX_FROM_PTR_ESP_(VALUE) adc ecx, dword ptr [esp + VALUE]
#define ADC_ECX_FROM_PTR_BX_(VALUE) adc ecx, dword ptr [bx + VALUE]
#define ADC_ECX_FROM_PTR_BP_(VALUE) adc ecx, dword ptr [bp + VALUE]
#define ADC_ECX_FROM_PTR_SI_(VALUE) adc ecx, dword ptr [si + VALUE]
#define ADC_ECX_FROM_PTR_DI_(VALUE) adc ecx, dword ptr [di + VALUE]

#define ADC_EDX_FROM_PTR_EAX_(VALUE) adc edx, dword ptr [eax + VALUE]
#define ADC_EDX_FROM_PTR_EBX_(VALUE) adc edx, dword ptr [ebx + VALUE]
#define ADC_EDX_FROM_PTR_ECX_(VALUE) adc edx, dword ptr [ecx + VALUE]
#define ADC_EDX_FROM_PTR_EDX_(VALUE) adc edx, dword ptr [edx + VALUE]
#define ADC_EDX_FROM_PTR_EDI_(VALUE) adc edx, dword ptr [edi + VALUE]
#define ADC_EDX_FROM_PTR_ESI_(VALUE) adc edx, dword ptr [esi + VALUE]
#define ADC_EDX_FROM_PTR_EBP_(VALUE) adc edx, dword ptr [ebp + VALUE]
#define ADC_EDX_FROM_PTR_ESP_(VALUE) adc edx, dword ptr [esp + VALUE]
#define ADC_EDX_FROM_PTR_BX_(VALUE) adc edx, dword ptr [bx + VALUE]
#define ADC_EDX_FROM_PTR_BP_(VALUE) adc edx, dword ptr [bp + VALUE]
#define ADC_EDX_FROM_PTR_SI_(VALUE) adc edx, dword ptr [si + VALUE]
#define ADC_EDX_FROM_PTR_DI_(VALUE) adc edx, dword ptr [di + VALUE]

#define ADC_EDI_FROM_PTR_EAX_(VALUE) adc edi, dword ptr [eax + VALUE]
#define ADC_EDI_FROM_PTR_EBX_(VALUE) adc edi, dword ptr [ebx + VALUE]
#define ADC_EDI_FROM_PTR_ECX_(VALUE) adc edi, dword ptr [ecx + VALUE]
#define ADC_EDI_FROM_PTR_EDX_(VALUE) adc edi, dword ptr [edx + VALUE]
#define ADC_EDI_FROM_PTR_EDI_(VALUE) adc edi, dword ptr [edi + VALUE]
#define ADC_EDI_FROM_PTR_ESI_(VALUE) adc edi, dword ptr [esi + VALUE]
#define ADC_EDI_FROM_PTR_EBP_(VALUE) adc edi, dword ptr [ebp + VALUE]
#define ADC_EDI_FROM_PTR_ESP_(VALUE) adc edi, dword ptr [esp + VALUE]
#define ADC_EDI_FROM_PTR_BX_(VALUE) adc edi, dword ptr [bx + VALUE]
#define ADC_EDI_FROM_PTR_BP_(VALUE) adc edi, dword ptr [bp + VALUE]
#define ADC_EDI_FROM_PTR_SI_(VALUE) adc edi, dword ptr [si + VALUE]
#define ADC_EDI_FROM_PTR_DI_(VALUE) adc edi, dword ptr [di + VALUE]

#define ADC_ESI_FROM_PTR_EAX_(VALUE) adc esi, dword ptr [eax + VALUE]
#define ADC_ESI_FROM_PTR_EBX_(VALUE) adc esi, dword ptr [ebx + VALUE]
#define ADC_ESI_FROM_PTR_ECX_(VALUE) adc esi, dword ptr [ecx + VALUE]
#define ADC_ESI_FROM_PTR_EDX_(VALUE) adc esi, dword ptr [edx + VALUE]
#define ADC_ESI_FROM_PTR_EDI_(VALUE) adc esi, dword ptr [edi + VALUE]
#define ADC_ESI_FROM_PTR_ESI_(VALUE) adc esi, dword ptr [esi + VALUE]
#define ADC_ESI_FROM_PTR_EBP_(VALUE) adc esi, dword ptr [ebp + VALUE]
#define ADC_ESI_FROM_PTR_ESP_(VALUE) adc esi, dword ptr [esp + VALUE]
#define ADC_ESI_FROM_PTR_BX_(VALUE) adc esi, dword ptr [bx + VALUE]
#define ADC_ESI_FROM_PTR_BP_(VALUE) adc esi, dword ptr [bp + VALUE]
#define ADC_ESI_FROM_PTR_SI_(VALUE) adc esi, dword ptr [si + VALUE]
#define ADC_ESI_FROM_PTR_DI_(VALUE) adc esi, dword ptr [di + VALUE]

#define ADC_EBP_FROM_PTR_EAX_(VALUE) adc ebp, dword ptr [eax + VALUE]
#define ADC_EBP_FROM_PTR_EBX_(VALUE) adc ebp, dword ptr [ebx + VALUE]
#define ADC_EBP_FROM_PTR_ECX_(VALUE) adc ebp, dword ptr [ecx + VALUE]
#define ADC_EBP_FROM_PTR_EDX_(VALUE) adc ebp, dword ptr [edx + VALUE]
#define ADC_EBP_FROM_PTR_EDI_(VALUE) adc ebp, dword ptr [edi + VALUE]
#define ADC_EBP_FROM_PTR_ESI_(VALUE) adc ebp, dword ptr [esi + VALUE]
#define ADC_EBP_FROM_PTR_EBP_(VALUE) adc ebp, dword ptr [ebp + VALUE]
#define ADC_EBP_FROM_PTR_ESP_(VALUE) adc ebp, dword ptr [esp + VALUE]
#define ADC_EBP_FROM_PTR_BX_(VALUE) adc ebp, dword ptr [bx + VALUE]
#define ADC_EBP_FROM_PTR_BP_(VALUE) adc ebp, dword ptr [bp + VALUE]
#define ADC_EBP_FROM_PTR_SI_(VALUE) adc ebp, dword ptr [si + VALUE]
#define ADC_EBP_FROM_PTR_DI_(VALUE) adc ebp, dword ptr [di + VALUE]

#define ADC_ESP_FROM_PTR_EAX_(VALUE) adc esp, dword ptr [eax + VALUE]
#define ADC_ESP_FROM_PTR_EBX_(VALUE) adc esp, dword ptr [ebx + VALUE]
#define ADC_ESP_FROM_PTR_ECX_(VALUE) adc esp, dword ptr [ecx + VALUE]
#define ADC_ESP_FROM_PTR_EDX_(VALUE) adc esp, dword ptr [edx + VALUE]
#define ADC_ESP_FROM_PTR_EDI_(VALUE) adc esp, dword ptr [edi + VALUE]
#define ADC_ESP_FROM_PTR_ESI_(VALUE) adc esp, dword ptr [esi + VALUE]
#define ADC_ESP_FROM_PTR_EBP_(VALUE) adc esp, dword ptr [ebp + VALUE]
#define ADC_ESP_FROM_PTR_ESP_(VALUE) adc esp, dword ptr [esp + VALUE]
#define ADC_ESP_FROM_PTR_BX_(VALUE) adc esp, dword ptr [bx + VALUE]
#define ADC_ESP_FROM_PTR_BP_(VALUE) adc esp, dword ptr [bp + VALUE]
#define ADC_ESP_FROM_PTR_SI_(VALUE) adc esp, dword ptr [si + VALUE]
#define ADC_ESP_FROM_PTR_DI_(VALUE) adc esp, dword ptr [di + VALUE]

#define ADC_EAX_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], eax
#define ADC_EAX_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], eax
#define ADC_EAX_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], eax
#define ADC_EAX_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], eax
#define ADC_EAX_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], eax
#define ADC_EAX_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], eax
#define ADC_EAX_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], eax
#define ADC_EAX_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], eax
#define ADC_EAX_TO_PTR_BX_(VALUE) adc dword ptr [bx + VALUE], eax
#define ADC_EAX_TO_PTR_BP_(VALUE) adc dword ptr [bp + VALUE], eax
#define ADC_EAX_TO_PTR_SI_(VALUE) adc dword ptr [si + VALUE], eax
#define ADC_EAX_TO_PTR_DI_(VALUE) adc dword ptr [di + VALUE], eax

#define ADC_EBX_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], ebx
#define ADC_EBX_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], ebx
#define ADC_EBX_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], ebx
#define ADC_EBX_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], ebx
#define ADC_EBX_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], ebx
#define ADC_EBX_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], ebx
#define ADC_EBX_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], ebx
#define ADC_EBX_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], ebx
#define ADC_EBX_TO_PTR_BX_(VALUE) adc dword ptr [bx + VALUE], ebx
#define ADC_EBX_TO_PTR_BP_(VALUE) adc dword ptr [bp + VALUE], ebx
#define ADC_EBX_TO_PTR_SI_(VALUE) adc dword ptr [si + VALUE], ebx
#define ADC_EBX_TO_PTR_DI_(VALUE) adc dword ptr [di + VALUE], ebx

#define ADC_ECX_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], ecx
#define ADC_ECX_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], ecx
#define ADC_ECX_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], ecx
#define ADC_ECX_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], ecx
#define ADC_ECX_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], ecx
#define ADC_ECX_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], ecx
#define ADC_ECX_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], ecx
#define ADC_ECX_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], ecx
#define ADC_ECX_TO_PTR_BX_(VALUE) adc dword ptr [bx + VALUE], ecx
#define ADC_ECX_TO_PTR_BP_(VALUE) adc dword ptr [bp + VALUE], ecx
#define ADC_ECX_TO_PTR_SI_(VALUE) adc dword ptr [si + VALUE], ecx
#define ADC_ECX_TO_PTR_DI_(VALUE) adc dword ptr [di + VALUE], ecx

#define ADC_EDX_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], edx
#define ADC_EDX_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], edx
#define ADC_EDX_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], edx
#define ADC_EDX_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], edx
#define ADC_EDX_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], edx
#define ADC_EDX_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], edx
#define ADC_EDX_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], edx
#define ADC_EDX_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], edx
#define ADC_EDX_TO_PTR_BX_(VALUE) adc dword ptr [bx + VALUE], edx
#define ADC_EDX_TO_PTR_BP_(VALUE) adc dword ptr [bp + VALUE], edx
#define ADC_EDX_TO_PTR_SI_(VALUE) adc dword ptr [si + VALUE], edx
#define ADC_EDX_TO_PTR_DI_(VALUE) adc dword ptr [di + VALUE], edx

#define ADC_EDI_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], edi
#define ADC_EDI_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], edi
#define ADC_EDI_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], edi
#define ADC_EDI_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], edi
#define ADC_EDI_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], edi
#define ADC_EDI_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], edi
#define ADC_EDI_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], edi
#define ADC_EDI_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], edi
#define ADC_EDI_TO_PTR_BX_(VALUE) adc dword ptr [bx + VALUE], edi
#define ADC_EDI_TO_PTR_BP_(VALUE) adc dword ptr [bp + VALUE], edi
#define ADC_EDI_TO_PTR_SI_(VALUE) adc dword ptr [si + VALUE], edi
#define ADC_EDI_TO_PTR_DI_(VALUE) adc dword ptr [di + VALUE], edi

#define ADC_ESI_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], esi
#define ADC_ESI_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], esi
#define ADC_ESI_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], esi
#define ADC_ESI_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], esi
#define ADC_ESI_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], esi
#define ADC_ESI_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], esi
#define ADC_ESI_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], esi
#define ADC_ESI_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], esi
#define ADC_ESI_TO_PTR_BX_(VALUE) adc dword ptr [bx + VALUE], esi
#define ADC_ESI_TO_PTR_BP_(VALUE) adc dword ptr [bp + VALUE], esi
#define ADC_ESI_TO_PTR_SI_(VALUE) adc dword ptr [si + VALUE], esi
#define ADC_ESI_TO_PTR_DI_(VALUE) adc dword ptr [di + VALUE], esi

#define ADC_EBP_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], ebp
#define ADC_EBP_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], ebp
#define ADC_EBP_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], ebp
#define ADC_EBP_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], ebp
#define ADC_EBP_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], ebp
#define ADC_EBP_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], ebp
#define ADC_EBP_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], ebp
#define ADC_EBP_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], ebp
#define ADC_EBP_TO_PTR_BX_(VALUE) adc dword ptr [bx + VALUE], ebp
#define ADC_EBP_TO_PTR_BP_(VALUE) adc dword ptr [bp + VALUE], ebp
#define ADC_EBP_TO_PTR_SI_(VALUE) adc dword ptr [si + VALUE], ebp
#define ADC_EBP_TO_PTR_DI_(VALUE) adc dword ptr [di + VALUE], ebp

#define ADC_ESP_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], esp
#define ADC_ESP_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], esp
#define ADC_ESP_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], esp
#define ADC_ESP_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], esp
#define ADC_ESP_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], esp
#define ADC_ESP_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], esp
#define ADC_ESP_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], esp
#define ADC_ESP_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], esp
#define ADC_ESP_TO_PTR_BX_(VALUE) adc dword ptr [bx + VALUE], esp
#define ADC_ESP_TO_PTR_BP_(VALUE) adc dword ptr [bp + VALUE], esp
#define ADC_ESP_TO_PTR_SI_(VALUE) adc dword ptr [si + VALUE], esp
#define ADC_ESP_TO_PTR_DI_(VALUE) adc dword ptr [di + VALUE], esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_EAX_FROM_PTR_(VALUE) adc eax, dword ptr [VALUE]
#define ADC_EBX_FROM_PTR_(VALUE) adc ebx, dword ptr [VALUE]
#define ADC_ECX_FROM_PTR_(VALUE) adc ecx, dword ptr [VALUE]
#define ADC_EDX_FROM_PTR_(VALUE) adc edx, dword ptr [VALUE]
#define ADC_EDI_FROM_PTR_(VALUE) adc edi, dword ptr [VALUE]
#define ADC_ESI_FROM_PTR_(VALUE) adc esi, dword ptr [VALUE]
#define ADC_EBP_FROM_PTR_(VALUE) adc ebp, dword ptr [VALUE]
#define ADC_ESP_FROM_PTR_(VALUE) adc esp, dword ptr [VALUE]
#define ADC_R8D_FROM_PTR_(VALUE) adc r8d, dword ptr [VALUE]
#define ADC_R9D_FROM_PTR_(VALUE) adc r9d, dword ptr [VALUE]
#define ADC_R10D_FROM_PTR_(VALUE) adc r10d, dword ptr [VALUE]
#define ADC_R11D_FROM_PTR_(VALUE) adc r11d, dword ptr [VALUE]
#define ADC_R12D_FROM_PTR_(VALUE) adc r12d, dword ptr [VALUE]
#define ADC_R13D_FROM_PTR_(VALUE) adc r13d, dword ptr [VALUE]
#define ADC_R14D_FROM_PTR_(VALUE) adc r14d, dword ptr [VALUE]
#define ADC_R15D_FROM_PTR_(VALUE) adc r15d, dword ptr [VALUE]

#define ADC_EAX_TO_PTR_(VALUE) adc dword ptr [VALUE], eax
#define ADC_EBX_TO_PTR_(VALUE) adc dword ptr [VALUE], ebx
#define ADC_ECX_TO_PTR_(VALUE) adc dword ptr [VALUE], ecx
#define ADC_EDX_TO_PTR_(VALUE) adc dword ptr [VALUE], edx
#define ADC_EDI_TO_PTR_(VALUE) adc dword ptr [VALUE], edi
#define ADC_ESI_TO_PTR_(VALUE) adc dword ptr [VALUE], esi
#define ADC_EBP_TO_PTR_(VALUE) adc dword ptr [VALUE], ebp
#define ADC_ESP_TO_PTR_(VALUE) adc dword ptr [VALUE], esp
#define ADC_R8D_TO_PTR_(VALUE) adc dword ptr [VALUE], r8d
#define ADC_R9D_TO_PTR_(VALUE) adc dword ptr [VALUE], r9d
#define ADC_R10D_TO_PTR_(VALUE) adc dword ptr [VALUE], r10d
#define ADC_R11D_TO_PTR_(VALUE) adc dword ptr [VALUE], r11d
#define ADC_R12D_TO_PTR_(VALUE) adc dword ptr [VALUE], r12d
#define ADC_R13D_TO_PTR_(VALUE) adc dword ptr [VALUE], r13d
#define ADC_R14D_TO_PTR_(VALUE) adc dword ptr [VALUE], r14d
#define ADC_R15D_TO_PTR_(VALUE) adc dword ptr [VALUE], r15d

#define ADC_EAX_FROM_PTR_RAX adc eax, dword ptr [rax]
#define ADC_EAX_FROM_PTR_RBX adc eax, dword ptr [rbx]
#define ADC_EAX_FROM_PTR_RCX adc eax, dword ptr [rcx]
#define ADC_EAX_FROM_PTR_RDX adc eax, dword ptr [rdx]
#define ADC_EAX_FROM_PTR_RDI adc eax, dword ptr [rdi]
#define ADC_EAX_FROM_PTR_RSI adc eax, dword ptr [rsi]
#define ADC_EAX_FROM_PTR_RBP adc eax, dword ptr [rbp]
#define ADC_EAX_FROM_PTR_RSP adc eax, dword ptr [rsp]
#define ADC_EAX_FROM_PTR_R8 adc eax, dword ptr [r8]
#define ADC_EAX_FROM_PTR_R9 adc eax, dword ptr [r9]
#define ADC_EAX_FROM_PTR_R10 adc eax, dword ptr [r10]
#define ADC_EAX_FROM_PTR_R11 adc eax, dword ptr [r11]
#define ADC_EAX_FROM_PTR_R12 adc eax, dword ptr [r12]
#define ADC_EAX_FROM_PTR_R13 adc eax, dword ptr [r13]
#define ADC_EAX_FROM_PTR_R14 adc eax, dword ptr [r14]
#define ADC_EAX_FROM_PTR_R15 adc eax, dword ptr [r15]
#define ADC_EAX_FROM_PTR_EAX adc eax, dword ptr [eax]
#define ADC_EAX_FROM_PTR_EBX adc eax, dword ptr [ebx]
#define ADC_EAX_FROM_PTR_ECX adc eax, dword ptr [ecx]
#define ADC_EAX_FROM_PTR_EDX adc eax, dword ptr [edx]
#define ADC_EAX_FROM_PTR_EDI adc eax, dword ptr [edi]
#define ADC_EAX_FROM_PTR_ESI adc eax, dword ptr [esi]
#define ADC_EAX_FROM_PTR_EBP adc eax, dword ptr [ebp]
#define ADC_EAX_FROM_PTR_ESP adc eax, dword ptr [esp]

#define ADC_EBX_FROM_PTR_RAX adc ebx, dword ptr [rax]
#define ADC_EBX_FROM_PTR_RBX adc ebx, dword ptr [rbx]
#define ADC_EBX_FROM_PTR_RCX adc ebx, dword ptr [rcx]
#define ADC_EBX_FROM_PTR_RDX adc ebx, dword ptr [rdx]
#define ADC_EBX_FROM_PTR_RDI adc ebx, dword ptr [rdi]
#define ADC_EBX_FROM_PTR_RSI adc ebx, dword ptr [rsi]
#define ADC_EBX_FROM_PTR_RBP adc ebx, dword ptr [rbp]
#define ADC_EBX_FROM_PTR_RSP adc ebx, dword ptr [rsp]
#define ADC_EBX_FROM_PTR_R8 adc ebx, dword ptr [r8]
#define ADC_EBX_FROM_PTR_R9 adc ebx, dword ptr [r9]
#define ADC_EBX_FROM_PTR_R10 adc ebx, dword ptr [r10]
#define ADC_EBX_FROM_PTR_R11 adc ebx, dword ptr [r11]
#define ADC_EBX_FROM_PTR_R12 adc ebx, dword ptr [r12]
#define ADC_EBX_FROM_PTR_R13 adc ebx, dword ptr [r13]
#define ADC_EBX_FROM_PTR_R14 adc ebx, dword ptr [r14]
#define ADC_EBX_FROM_PTR_R15 adc ebx, dword ptr [r15]
#define ADC_EBX_FROM_PTR_EAX adc ebx, dword ptr [eax]
#define ADC_EBX_FROM_PTR_EBX adc ebx, dword ptr [ebx]
#define ADC_EBX_FROM_PTR_ECX adc ebx, dword ptr [ecx]
#define ADC_EBX_FROM_PTR_EDX adc ebx, dword ptr [edx]
#define ADC_EBX_FROM_PTR_EDI adc ebx, dword ptr [edi]
#define ADC_EBX_FROM_PTR_ESI adc ebx, dword ptr [esi]
#define ADC_EBX_FROM_PTR_EBP adc ebx, dword ptr [ebp]
#define ADC_EBX_FROM_PTR_ESP adc ebx, dword ptr [esp]

#define ADC_ECX_FROM_PTR_RAX adc ecx, dword ptr [rax]
#define ADC_ECX_FROM_PTR_RBX adc ecx, dword ptr [rbx]
#define ADC_ECX_FROM_PTR_RCX adc ecx, dword ptr [rcx]
#define ADC_ECX_FROM_PTR_RDX adc ecx, dword ptr [rdx]
#define ADC_ECX_FROM_PTR_RDI adc ecx, dword ptr [rdi]
#define ADC_ECX_FROM_PTR_RSI adc ecx, dword ptr [rsi]
#define ADC_ECX_FROM_PTR_RBP adc ecx, dword ptr [rbp]
#define ADC_ECX_FROM_PTR_RSP adc ecx, dword ptr [rsp]
#define ADC_ECX_FROM_PTR_R8 adc ecx, dword ptr [r8]
#define ADC_ECX_FROM_PTR_R9 adc ecx, dword ptr [r9]
#define ADC_ECX_FROM_PTR_R10 adc ecx, dword ptr [r10]
#define ADC_ECX_FROM_PTR_R11 adc ecx, dword ptr [r11]
#define ADC_ECX_FROM_PTR_R12 adc ecx, dword ptr [r12]
#define ADC_ECX_FROM_PTR_R13 adc ecx, dword ptr [r13]
#define ADC_ECX_FROM_PTR_R14 adc ecx, dword ptr [r14]
#define ADC_ECX_FROM_PTR_R15 adc ecx, dword ptr [r15]
#define ADC_ECX_FROM_PTR_EAX adc ecx, dword ptr [eax]
#define ADC_ECX_FROM_PTR_EBX adc ecx, dword ptr [ebx]
#define ADC_ECX_FROM_PTR_ECX adc ecx, dword ptr [ecx]
#define ADC_ECX_FROM_PTR_EDX adc ecx, dword ptr [edx]
#define ADC_ECX_FROM_PTR_EDI adc ecx, dword ptr [edi]
#define ADC_ECX_FROM_PTR_ESI adc ecx, dword ptr [esi]
#define ADC_ECX_FROM_PTR_EBP adc ecx, dword ptr [ebp]
#define ADC_ECX_FROM_PTR_ESP adc ecx, dword ptr [esp]

#define ADC_EDX_FROM_PTR_RAX adc edx, dword ptr [rax]
#define ADC_EDX_FROM_PTR_RBX adc edx, dword ptr [rbx]
#define ADC_EDX_FROM_PTR_RCX adc edx, dword ptr [rcx]
#define ADC_EDX_FROM_PTR_RDX adc edx, dword ptr [rdx]
#define ADC_EDX_FROM_PTR_RDI adc edx, dword ptr [rdi]
#define ADC_EDX_FROM_PTR_RSI adc edx, dword ptr [rsi]
#define ADC_EDX_FROM_PTR_RBP adc edx, dword ptr [rbp]
#define ADC_EDX_FROM_PTR_RSP adc edx, dword ptr [rsp]
#define ADC_EDX_FROM_PTR_R8 adc edx, dword ptr [r8]
#define ADC_EDX_FROM_PTR_R9 adc edx, dword ptr [r9]
#define ADC_EDX_FROM_PTR_R10 adc edx, dword ptr [r10]
#define ADC_EDX_FROM_PTR_R11 adc edx, dword ptr [r11]
#define ADC_EDX_FROM_PTR_R12 adc edx, dword ptr [r12]
#define ADC_EDX_FROM_PTR_R13 adc edx, dword ptr [r13]
#define ADC_EDX_FROM_PTR_R14 adc edx, dword ptr [r14]
#define ADC_EDX_FROM_PTR_R15 adc edx, dword ptr [r15]
#define ADC_EDX_FROM_PTR_EAX adc edx, dword ptr [eax]
#define ADC_EDX_FROM_PTR_EBX adc edx, dword ptr [ebx]
#define ADC_EDX_FROM_PTR_ECX adc edx, dword ptr [ecx]
#define ADC_EDX_FROM_PTR_EDX adc edx, dword ptr [edx]
#define ADC_EDX_FROM_PTR_EDI adc edx, dword ptr [edi]
#define ADC_EDX_FROM_PTR_ESI adc edx, dword ptr [esi]
#define ADC_EDX_FROM_PTR_EBP adc edx, dword ptr [ebp]
#define ADC_EDX_FROM_PTR_ESP adc edx, dword ptr [esp]

#define ADC_EDI_FROM_PTR_RAX adc edi, dword ptr [rax]
#define ADC_EDI_FROM_PTR_RBX adc edi, dword ptr [rbx]
#define ADC_EDI_FROM_PTR_RCX adc edi, dword ptr [rcx]
#define ADC_EDI_FROM_PTR_RDX adc edi, dword ptr [rdx]
#define ADC_EDI_FROM_PTR_RDI adc edi, dword ptr [rdi]
#define ADC_EDI_FROM_PTR_RSI adc edi, dword ptr [rsi]
#define ADC_EDI_FROM_PTR_RBP adc edi, dword ptr [rbp]
#define ADC_EDI_FROM_PTR_RSP adc edi, dword ptr [rsp]
#define ADC_EDI_FROM_PTR_R8 adc edi, dword ptr [r8]
#define ADC_EDI_FROM_PTR_R9 adc edi, dword ptr [r9]
#define ADC_EDI_FROM_PTR_R10 adc edi, dword ptr [r10]
#define ADC_EDI_FROM_PTR_R11 adc edi, dword ptr [r11]
#define ADC_EDI_FROM_PTR_R12 adc edi, dword ptr [r12]
#define ADC_EDI_FROM_PTR_R13 adc edi, dword ptr [r13]
#define ADC_EDI_FROM_PTR_R14 adc edi, dword ptr [r14]
#define ADC_EDI_FROM_PTR_R15 adc edi, dword ptr [r15]
#define ADC_EDI_FROM_PTR_EAX adc edi, dword ptr [eax]
#define ADC_EDI_FROM_PTR_EBX adc edi, dword ptr [ebx]
#define ADC_EDI_FROM_PTR_ECX adc edi, dword ptr [ecx]
#define ADC_EDI_FROM_PTR_EDX adc edi, dword ptr [edx]
#define ADC_EDI_FROM_PTR_EDI adc edi, dword ptr [edi]
#define ADC_EDI_FROM_PTR_ESI adc edi, dword ptr [esi]
#define ADC_EDI_FROM_PTR_EBP adc edi, dword ptr [ebp]
#define ADC_EDI_FROM_PTR_ESP adc edi, dword ptr [esp]

#define ADC_ESI_FROM_PTR_RAX adc esi, dword ptr [rax]
#define ADC_ESI_FROM_PTR_RBX adc esi, dword ptr [rbx]
#define ADC_ESI_FROM_PTR_RCX adc esi, dword ptr [rcx]
#define ADC_ESI_FROM_PTR_RDX adc esi, dword ptr [rdx]
#define ADC_ESI_FROM_PTR_RDI adc esi, dword ptr [rdi]
#define ADC_ESI_FROM_PTR_RSI adc esi, dword ptr [rsi]
#define ADC_ESI_FROM_PTR_RBP adc esi, dword ptr [rbp]
#define ADC_ESI_FROM_PTR_RSP adc esi, dword ptr [rsp]
#define ADC_ESI_FROM_PTR_R8 adc esi, dword ptr [r8]
#define ADC_ESI_FROM_PTR_R9 adc esi, dword ptr [r9]
#define ADC_ESI_FROM_PTR_R10 adc esi, dword ptr [r10]
#define ADC_ESI_FROM_PTR_R11 adc esi, dword ptr [r11]
#define ADC_ESI_FROM_PTR_R12 adc esi, dword ptr [r12]
#define ADC_ESI_FROM_PTR_R13 adc esi, dword ptr [r13]
#define ADC_ESI_FROM_PTR_R14 adc esi, dword ptr [r14]
#define ADC_ESI_FROM_PTR_R15 adc esi, dword ptr [r15]
#define ADC_ESI_FROM_PTR_EAX adc esi, dword ptr [eax]
#define ADC_ESI_FROM_PTR_EBX adc esi, dword ptr [ebx]
#define ADC_ESI_FROM_PTR_ECX adc esi, dword ptr [ecx]
#define ADC_ESI_FROM_PTR_EDX adc esi, dword ptr [edx]
#define ADC_ESI_FROM_PTR_EDI adc esi, dword ptr [edi]
#define ADC_ESI_FROM_PTR_ESI adc esi, dword ptr [esi]
#define ADC_ESI_FROM_PTR_EBP adc esi, dword ptr [ebp]
#define ADC_ESI_FROM_PTR_ESP adc esi, dword ptr [esp]

#define ADC_EBP_FROM_PTR_RAX adc ebp, dword ptr [rax]
#define ADC_EBP_FROM_PTR_RBX adc ebp, dword ptr [rbx]
#define ADC_EBP_FROM_PTR_RCX adc ebp, dword ptr [rcx]
#define ADC_EBP_FROM_PTR_RDX adc ebp, dword ptr [rdx]
#define ADC_EBP_FROM_PTR_RDI adc ebp, dword ptr [rdi]
#define ADC_EBP_FROM_PTR_RSI adc ebp, dword ptr [rsi]
#define ADC_EBP_FROM_PTR_RBP adc ebp, dword ptr [rbp]
#define ADC_EBP_FROM_PTR_RSP adc ebp, dword ptr [rsp]
#define ADC_EBP_FROM_PTR_R8 adc ebp, dword ptr [r8]
#define ADC_EBP_FROM_PTR_R9 adc ebp, dword ptr [r9]
#define ADC_EBP_FROM_PTR_R10 adc ebp, dword ptr [r10]
#define ADC_EBP_FROM_PTR_R11 adc ebp, dword ptr [r11]
#define ADC_EBP_FROM_PTR_R12 adc ebp, dword ptr [r12]
#define ADC_EBP_FROM_PTR_R13 adc ebp, dword ptr [r13]
#define ADC_EBP_FROM_PTR_R14 adc ebp, dword ptr [r14]
#define ADC_EBP_FROM_PTR_R15 adc ebp, dword ptr [r15]
#define ADC_EBP_FROM_PTR_EAX adc ebp, dword ptr [eax]
#define ADC_EBP_FROM_PTR_EBX adc ebp, dword ptr [ebx]
#define ADC_EBP_FROM_PTR_ECX adc ebp, dword ptr [ecx]
#define ADC_EBP_FROM_PTR_EDX adc ebp, dword ptr [edx]
#define ADC_EBP_FROM_PTR_EDI adc ebp, dword ptr [edi]
#define ADC_EBP_FROM_PTR_ESI adc ebp, dword ptr [esi]
#define ADC_EBP_FROM_PTR_EBP adc ebp, dword ptr [ebp]
#define ADC_EBP_FROM_PTR_ESP adc ebp, dword ptr [esp]

#define ADC_ESP_FROM_PTR_RAX adc esp, dword ptr [rax]
#define ADC_ESP_FROM_PTR_RBX adc esp, dword ptr [rbx]
#define ADC_ESP_FROM_PTR_RCX adc esp, dword ptr [rcx]
#define ADC_ESP_FROM_PTR_RDX adc esp, dword ptr [rdx]
#define ADC_ESP_FROM_PTR_RDI adc esp, dword ptr [rdi]
#define ADC_ESP_FROM_PTR_RSI adc esp, dword ptr [rsi]
#define ADC_ESP_FROM_PTR_RBP adc esp, dword ptr [rbp]
#define ADC_ESP_FROM_PTR_RSP adc esp, dword ptr [rsp]
#define ADC_ESP_FROM_PTR_R8 adc esp, dword ptr [r8]
#define ADC_ESP_FROM_PTR_R9 adc esp, dword ptr [r9]
#define ADC_ESP_FROM_PTR_R10 adc esp, dword ptr [r10]
#define ADC_ESP_FROM_PTR_R11 adc esp, dword ptr [r11]
#define ADC_ESP_FROM_PTR_R12 adc esp, dword ptr [r12]
#define ADC_ESP_FROM_PTR_R13 adc esp, dword ptr [r13]
#define ADC_ESP_FROM_PTR_R14 adc esp, dword ptr [r14]
#define ADC_ESP_FROM_PTR_R15 adc esp, dword ptr [r15]
#define ADC_ESP_FROM_PTR_EAX adc esp, dword ptr [eax]
#define ADC_ESP_FROM_PTR_EBX adc esp, dword ptr [ebx]
#define ADC_ESP_FROM_PTR_ECX adc esp, dword ptr [ecx]
#define ADC_ESP_FROM_PTR_EDX adc esp, dword ptr [edx]
#define ADC_ESP_FROM_PTR_EDI adc esp, dword ptr [edi]
#define ADC_ESP_FROM_PTR_ESI adc esp, dword ptr [esi]
#define ADC_ESP_FROM_PTR_EBP adc esp, dword ptr [ebp]
#define ADC_ESP_FROM_PTR_ESP adc esp, dword ptr [esp]

#define ADC_R8D_FROM_PTR_RAX adc r8d, dword ptr [rax]
#define ADC_R8D_FROM_PTR_RBX adc r8d, dword ptr [rbx]
#define ADC_R8D_FROM_PTR_RCX adc r8d, dword ptr [rcx]
#define ADC_R8D_FROM_PTR_RDX adc r8d, dword ptr [rdx]
#define ADC_R8D_FROM_PTR_RDI adc r8d, dword ptr [rdi]
#define ADC_R8D_FROM_PTR_RSI adc r8d, dword ptr [rsi]
#define ADC_R8D_FROM_PTR_RBP adc r8d, dword ptr [rbp]
#define ADC_R8D_FROM_PTR_RSP adc r8d, dword ptr [rsp]
#define ADC_R8D_FROM_PTR_R8 adc r8d, dword ptr [r8]
#define ADC_R8D_FROM_PTR_R9 adc r8d, dword ptr [r9]
#define ADC_R8D_FROM_PTR_R10 adc r8d, dword ptr [r10]
#define ADC_R8D_FROM_PTR_R11 adc r8d, dword ptr [r11]
#define ADC_R8D_FROM_PTR_R12 adc r8d, dword ptr [r12]
#define ADC_R8D_FROM_PTR_R13 adc r8d, dword ptr [r13]
#define ADC_R8D_FROM_PTR_R14 adc r8d, dword ptr [r14]
#define ADC_R8D_FROM_PTR_R15 adc r8d, dword ptr [r15]
#define ADC_R8D_FROM_PTR_EAX adc r8d, dword ptr [eax]
#define ADC_R8D_FROM_PTR_EBX adc r8d, dword ptr [ebx]
#define ADC_R8D_FROM_PTR_ECX adc r8d, dword ptr [ecx]
#define ADC_R8D_FROM_PTR_EDX adc r8d, dword ptr [edx]
#define ADC_R8D_FROM_PTR_EDI adc r8d, dword ptr [edi]
#define ADC_R8D_FROM_PTR_ESI adc r8d, dword ptr [esi]
#define ADC_R8D_FROM_PTR_EBP adc r8d, dword ptr [ebp]
#define ADC_R8D_FROM_PTR_ESP adc r8d, dword ptr [esp]

#define ADC_R9D_FROM_PTR_RAX adc r9d, dword ptr [rax]
#define ADC_R9D_FROM_PTR_RBX adc r9d, dword ptr [rbx]
#define ADC_R9D_FROM_PTR_RCX adc r9d, dword ptr [rcx]
#define ADC_R9D_FROM_PTR_RDX adc r9d, dword ptr [rdx]
#define ADC_R9D_FROM_PTR_RDI adc r9d, dword ptr [rdi]
#define ADC_R9D_FROM_PTR_RSI adc r9d, dword ptr [rsi]
#define ADC_R9D_FROM_PTR_RBP adc r9d, dword ptr [rbp]
#define ADC_R9D_FROM_PTR_RSP adc r9d, dword ptr [rsp]
#define ADC_R9D_FROM_PTR_R8 adc r9d, dword ptr [r8]
#define ADC_R9D_FROM_PTR_R9 adc r9d, dword ptr [r9]
#define ADC_R9D_FROM_PTR_R10 adc r9d, dword ptr [r10]
#define ADC_R9D_FROM_PTR_R11 adc r9d, dword ptr [r11]
#define ADC_R9D_FROM_PTR_R12 adc r9d, dword ptr [r12]
#define ADC_R9D_FROM_PTR_R13 adc r9d, dword ptr [r13]
#define ADC_R9D_FROM_PTR_R14 adc r9d, dword ptr [r14]
#define ADC_R9D_FROM_PTR_R15 adc r9d, dword ptr [r15]
#define ADC_R9D_FROM_PTR_EAX adc r9d, dword ptr [eax]
#define ADC_R9D_FROM_PTR_EBX adc r9d, dword ptr [ebx]
#define ADC_R9D_FROM_PTR_ECX adc r9d, dword ptr [ecx]
#define ADC_R9D_FROM_PTR_EDX adc r9d, dword ptr [edx]
#define ADC_R9D_FROM_PTR_EDI adc r9d, dword ptr [edi]
#define ADC_R9D_FROM_PTR_ESI adc r9d, dword ptr [esi]
#define ADC_R9D_FROM_PTR_EBP adc r9d, dword ptr [ebp]
#define ADC_R9D_FROM_PTR_ESP adc r9d, dword ptr [esp]

#define ADC_R10D_FROM_PTR_RAX adc r10d, dword ptr [rax]
#define ADC_R10D_FROM_PTR_RBX adc r10d, dword ptr [rbx]
#define ADC_R10D_FROM_PTR_RCX adc r10d, dword ptr [rcx]
#define ADC_R10D_FROM_PTR_RDX adc r10d, dword ptr [rdx]
#define ADC_R10D_FROM_PTR_RDI adc r10d, dword ptr [rdi]
#define ADC_R10D_FROM_PTR_RSI adc r10d, dword ptr [rsi]
#define ADC_R10D_FROM_PTR_RBP adc r10d, dword ptr [rbp]
#define ADC_R10D_FROM_PTR_RSP adc r10d, dword ptr [rsp]
#define ADC_R10D_FROM_PTR_R8 adc r10d, dword ptr [r8]
#define ADC_R10D_FROM_PTR_R9 adc r10d, dword ptr [r9]
#define ADC_R10D_FROM_PTR_R10 adc r10d, dword ptr [r10]
#define ADC_R10D_FROM_PTR_R11 adc r10d, dword ptr [r11]
#define ADC_R10D_FROM_PTR_R12 adc r10d, dword ptr [r12]
#define ADC_R10D_FROM_PTR_R13 adc r10d, dword ptr [r13]
#define ADC_R10D_FROM_PTR_R14 adc r10d, dword ptr [r14]
#define ADC_R10D_FROM_PTR_R15 adc r10d, dword ptr [r15]
#define ADC_R10D_FROM_PTR_EAX adc r10d, dword ptr [eax]
#define ADC_R10D_FROM_PTR_EBX adc r10d, dword ptr [ebx]
#define ADC_R10D_FROM_PTR_ECX adc r10d, dword ptr [ecx]
#define ADC_R10D_FROM_PTR_EDX adc r10d, dword ptr [edx]
#define ADC_R10D_FROM_PTR_EDI adc r10d, dword ptr [edi]
#define ADC_R10D_FROM_PTR_ESI adc r10d, dword ptr [esi]
#define ADC_R10D_FROM_PTR_EBP adc r10d, dword ptr [ebp]
#define ADC_R10D_FROM_PTR_ESP adc r10d, dword ptr [esp]

#define ADC_R11D_FROM_PTR_RAX adc r11d, dword ptr [rax]
#define ADC_R11D_FROM_PTR_RBX adc r11d, dword ptr [rbx]
#define ADC_R11D_FROM_PTR_RCX adc r11d, dword ptr [rcx]
#define ADC_R11D_FROM_PTR_RDX adc r11d, dword ptr [rdx]
#define ADC_R11D_FROM_PTR_RDI adc r11d, dword ptr [rdi]
#define ADC_R11D_FROM_PTR_RSI adc r11d, dword ptr [rsi]
#define ADC_R11D_FROM_PTR_RBP adc r11d, dword ptr [rbp]
#define ADC_R11D_FROM_PTR_RSP adc r11d, dword ptr [rsp]
#define ADC_R11D_FROM_PTR_R8 adc r11d, dword ptr [r8]
#define ADC_R11D_FROM_PTR_R9 adc r11d, dword ptr [r9]
#define ADC_R11D_FROM_PTR_R10 adc r11d, dword ptr [r10]
#define ADC_R11D_FROM_PTR_R11 adc r11d, dword ptr [r11]
#define ADC_R11D_FROM_PTR_R12 adc r11d, dword ptr [r12]
#define ADC_R11D_FROM_PTR_R13 adc r11d, dword ptr [r13]
#define ADC_R11D_FROM_PTR_R14 adc r11d, dword ptr [r14]
#define ADC_R11D_FROM_PTR_R15 adc r11d, dword ptr [r15]
#define ADC_R11D_FROM_PTR_EAX adc r11d, dword ptr [eax]
#define ADC_R11D_FROM_PTR_EBX adc r11d, dword ptr [ebx]
#define ADC_R11D_FROM_PTR_ECX adc r11d, dword ptr [ecx]
#define ADC_R11D_FROM_PTR_EDX adc r11d, dword ptr [edx]
#define ADC_R11D_FROM_PTR_EDI adc r11d, dword ptr [edi]
#define ADC_R11D_FROM_PTR_ESI adc r11d, dword ptr [esi]
#define ADC_R11D_FROM_PTR_EBP adc r11d, dword ptr [ebp]
#define ADC_R11D_FROM_PTR_ESP adc r11d, dword ptr [esp]

#define ADC_R12D_FROM_PTR_RAX adc r12d, dword ptr [rax]
#define ADC_R12D_FROM_PTR_RBX adc r12d, dword ptr [rbx]
#define ADC_R12D_FROM_PTR_RCX adc r12d, dword ptr [rcx]
#define ADC_R12D_FROM_PTR_RDX adc r12d, dword ptr [rdx]
#define ADC_R12D_FROM_PTR_RDI adc r12d, dword ptr [rdi]
#define ADC_R12D_FROM_PTR_RSI adc r12d, dword ptr [rsi]
#define ADC_R12D_FROM_PTR_RBP adc r12d, dword ptr [rbp]
#define ADC_R12D_FROM_PTR_RSP adc r12d, dword ptr [rsp]
#define ADC_R12D_FROM_PTR_R8 adc r12d, dword ptr [r8]
#define ADC_R12D_FROM_PTR_R9 adc r12d, dword ptr [r9]
#define ADC_R12D_FROM_PTR_R10 adc r12d, dword ptr [r10]
#define ADC_R12D_FROM_PTR_R11 adc r12d, dword ptr [r11]
#define ADC_R12D_FROM_PTR_R12 adc r12d, dword ptr [r12]
#define ADC_R12D_FROM_PTR_R13 adc r12d, dword ptr [r13]
#define ADC_R12D_FROM_PTR_R14 adc r12d, dword ptr [r14]
#define ADC_R12D_FROM_PTR_R15 adc r12d, dword ptr [r15]
#define ADC_R12D_FROM_PTR_EAX adc r12d, dword ptr [eax]
#define ADC_R12D_FROM_PTR_EBX adc r12d, dword ptr [ebx]
#define ADC_R12D_FROM_PTR_ECX adc r12d, dword ptr [ecx]
#define ADC_R12D_FROM_PTR_EDX adc r12d, dword ptr [edx]
#define ADC_R12D_FROM_PTR_EDI adc r12d, dword ptr [edi]
#define ADC_R12D_FROM_PTR_ESI adc r12d, dword ptr [esi]
#define ADC_R12D_FROM_PTR_EBP adc r12d, dword ptr [ebp]
#define ADC_R12D_FROM_PTR_ESP adc r12d, dword ptr [esp]

#define ADC_R13D_FROM_PTR_RAX adc r13d, dword ptr [rax]
#define ADC_R13D_FROM_PTR_RBX adc r13d, dword ptr [rbx]
#define ADC_R13D_FROM_PTR_RCX adc r13d, dword ptr [rcx]
#define ADC_R13D_FROM_PTR_RDX adc r13d, dword ptr [rdx]
#define ADC_R13D_FROM_PTR_RDI adc r13d, dword ptr [rdi]
#define ADC_R13D_FROM_PTR_RSI adc r13d, dword ptr [rsi]
#define ADC_R13D_FROM_PTR_RBP adc r13d, dword ptr [rbp]
#define ADC_R13D_FROM_PTR_RSP adc r13d, dword ptr [rsp]
#define ADC_R13D_FROM_PTR_R8 adc r13d, dword ptr [r8]
#define ADC_R13D_FROM_PTR_R9 adc r13d, dword ptr [r9]
#define ADC_R13D_FROM_PTR_R10 adc r13d, dword ptr [r10]
#define ADC_R13D_FROM_PTR_R11 adc r13d, dword ptr [r11]
#define ADC_R13D_FROM_PTR_R12 adc r13d, dword ptr [r12]
#define ADC_R13D_FROM_PTR_R13 adc r13d, dword ptr [r13]
#define ADC_R13D_FROM_PTR_R14 adc r13d, dword ptr [r14]
#define ADC_R13D_FROM_PTR_R15 adc r13d, dword ptr [r15]
#define ADC_R13D_FROM_PTR_EAX adc r13d, dword ptr [eax]
#define ADC_R13D_FROM_PTR_EBX adc r13d, dword ptr [ebx]
#define ADC_R13D_FROM_PTR_ECX adc r13d, dword ptr [ecx]
#define ADC_R13D_FROM_PTR_EDX adc r13d, dword ptr [edx]
#define ADC_R13D_FROM_PTR_EDI adc r13d, dword ptr [edi]
#define ADC_R13D_FROM_PTR_ESI adc r13d, dword ptr [esi]
#define ADC_R13D_FROM_PTR_EBP adc r13d, dword ptr [ebp]
#define ADC_R13D_FROM_PTR_ESP adc r13d, dword ptr [esp]

#define ADC_R14D_FROM_PTR_RAX adc r14d, dword ptr [rax]
#define ADC_R14D_FROM_PTR_RBX adc r14d, dword ptr [rbx]
#define ADC_R14D_FROM_PTR_RCX adc r14d, dword ptr [rcx]
#define ADC_R14D_FROM_PTR_RDX adc r14d, dword ptr [rdx]
#define ADC_R14D_FROM_PTR_RDI adc r14d, dword ptr [rdi]
#define ADC_R14D_FROM_PTR_RSI adc r14d, dword ptr [rsi]
#define ADC_R14D_FROM_PTR_RBP adc r14d, dword ptr [rbp]
#define ADC_R14D_FROM_PTR_RSP adc r14d, dword ptr [rsp]
#define ADC_R14D_FROM_PTR_R8 adc r14d, dword ptr [r8]
#define ADC_R14D_FROM_PTR_R9 adc r14d, dword ptr [r9]
#define ADC_R14D_FROM_PTR_R10 adc r14d, dword ptr [r10]
#define ADC_R14D_FROM_PTR_R11 adc r14d, dword ptr [r11]
#define ADC_R14D_FROM_PTR_R12 adc r14d, dword ptr [r12]
#define ADC_R14D_FROM_PTR_R13 adc r14d, dword ptr [r13]
#define ADC_R14D_FROM_PTR_R14 adc r14d, dword ptr [r14]
#define ADC_R14D_FROM_PTR_R15 adc r14d, dword ptr [r15]
#define ADC_R14D_FROM_PTR_EAX adc r14d, dword ptr [eax]
#define ADC_R14D_FROM_PTR_EBX adc r14d, dword ptr [ebx]
#define ADC_R14D_FROM_PTR_ECX adc r14d, dword ptr [ecx]
#define ADC_R14D_FROM_PTR_EDX adc r14d, dword ptr [edx]
#define ADC_R14D_FROM_PTR_EDI adc r14d, dword ptr [edi]
#define ADC_R14D_FROM_PTR_ESI adc r14d, dword ptr [esi]
#define ADC_R14D_FROM_PTR_EBP adc r14d, dword ptr [ebp]
#define ADC_R14D_FROM_PTR_ESP adc r14d, dword ptr [esp]

#define ADC_R15D_FROM_PTR_RAX adc r15d, dword ptr [rax]
#define ADC_R15D_FROM_PTR_RBX adc r15d, dword ptr [rbx]
#define ADC_R15D_FROM_PTR_RCX adc r15d, dword ptr [rcx]
#define ADC_R15D_FROM_PTR_RDX adc r15d, dword ptr [rdx]
#define ADC_R15D_FROM_PTR_RDI adc r15d, dword ptr [rdi]
#define ADC_R15D_FROM_PTR_RSI adc r15d, dword ptr [rsi]
#define ADC_R15D_FROM_PTR_RBP adc r15d, dword ptr [rbp]
#define ADC_R15D_FROM_PTR_RSP adc r15d, dword ptr [rsp]
#define ADC_R15D_FROM_PTR_R8 adc r15d, dword ptr [r8]
#define ADC_R15D_FROM_PTR_R9 adc r15d, dword ptr [r9]
#define ADC_R15D_FROM_PTR_R10 adc r15d, dword ptr [r10]
#define ADC_R15D_FROM_PTR_R11 adc r15d, dword ptr [r11]
#define ADC_R15D_FROM_PTR_R12 adc r15d, dword ptr [r12]
#define ADC_R15D_FROM_PTR_R13 adc r15d, dword ptr [r13]
#define ADC_R15D_FROM_PTR_R14 adc r15d, dword ptr [r14]
#define ADC_R15D_FROM_PTR_R15 adc r15d, dword ptr [r15]
#define ADC_R15D_FROM_PTR_EAX adc r15d, dword ptr [eax]
#define ADC_R15D_FROM_PTR_EBX adc r15d, dword ptr [ebx]
#define ADC_R15D_FROM_PTR_ECX adc r15d, dword ptr [ecx]
#define ADC_R15D_FROM_PTR_EDX adc r15d, dword ptr [edx]
#define ADC_R15D_FROM_PTR_EDI adc r15d, dword ptr [edi]
#define ADC_R15D_FROM_PTR_ESI adc r15d, dword ptr [esi]
#define ADC_R15D_FROM_PTR_EBP adc r15d, dword ptr [ebp]
#define ADC_R15D_FROM_PTR_ESP adc r15d, dword ptr [esp]

#define ADC_EAX_TO_PTR_RAX adc dword ptr [rax], eax
#define ADC_EAX_TO_PTR_RBX adc dword ptr [rbx], eax
#define ADC_EAX_TO_PTR_RCX adc dword ptr [rcx], eax
#define ADC_EAX_TO_PTR_RDX adc dword ptr [rdx], eax
#define ADC_EAX_TO_PTR_RDI adc dword ptr [rdi], eax
#define ADC_EAX_TO_PTR_RSI adc dword ptr [rsi], eax
#define ADC_EAX_TO_PTR_RBP adc dword ptr [rbp], eax
#define ADC_EAX_TO_PTR_RSP adc dword ptr [rsp], eax
#define ADC_EAX_TO_PTR_R8 adc dword ptr [r8], eax
#define ADC_EAX_TO_PTR_R9 adc dword ptr [r9], eax
#define ADC_EAX_TO_PTR_R10 adc dword ptr [r10], eax
#define ADC_EAX_TO_PTR_R11 adc dword ptr [r11], eax
#define ADC_EAX_TO_PTR_R12 adc dword ptr [r12], eax
#define ADC_EAX_TO_PTR_R13 adc dword ptr [r13], eax
#define ADC_EAX_TO_PTR_R14 adc dword ptr [r14], eax
#define ADC_EAX_TO_PTR_R15 adc dword ptr [r15], eax
#define ADC_EAX_TO_PTR_EAX adc dword ptr [eax], eax
#define ADC_EAX_TO_PTR_EBX adc dword ptr [ebx], eax
#define ADC_EAX_TO_PTR_ECX adc dword ptr [ecx], eax
#define ADC_EAX_TO_PTR_EDX adc dword ptr [edx], eax
#define ADC_EAX_TO_PTR_EDI adc dword ptr [edi], eax
#define ADC_EAX_TO_PTR_ESI adc dword ptr [esi], eax
#define ADC_EAX_TO_PTR_EBP adc dword ptr [ebp], eax
#define ADC_EAX_TO_PTR_ESP adc dword ptr [esp], eax

#define ADC_EBX_TO_PTR_RAX adc dword ptr [rax], ebx
#define ADC_EBX_TO_PTR_RBX adc dword ptr [rbx], ebx
#define ADC_EBX_TO_PTR_RCX adc dword ptr [rcx], ebx
#define ADC_EBX_TO_PTR_RDX adc dword ptr [rdx], ebx
#define ADC_EBX_TO_PTR_RDI adc dword ptr [rdi], ebx
#define ADC_EBX_TO_PTR_RSI adc dword ptr [rsi], ebx
#define ADC_EBX_TO_PTR_RBP adc dword ptr [rbp], ebx
#define ADC_EBX_TO_PTR_RSP adc dword ptr [rsp], ebx
#define ADC_EBX_TO_PTR_R8 adc dword ptr [r8], ebx
#define ADC_EBX_TO_PTR_R9 adc dword ptr [r9], ebx
#define ADC_EBX_TO_PTR_R10 adc dword ptr [r10], ebx
#define ADC_EBX_TO_PTR_R11 adc dword ptr [r11], ebx
#define ADC_EBX_TO_PTR_R12 adc dword ptr [r12], ebx
#define ADC_EBX_TO_PTR_R13 adc dword ptr [r13], ebx
#define ADC_EBX_TO_PTR_R14 adc dword ptr [r14], ebx
#define ADC_EBX_TO_PTR_R15 adc dword ptr [r15], ebx
#define ADC_EBX_TO_PTR_EAX adc dword ptr [eax], ebx
#define ADC_EBX_TO_PTR_EBX adc dword ptr [ebx], ebx
#define ADC_EBX_TO_PTR_ECX adc dword ptr [ecx], ebx
#define ADC_EBX_TO_PTR_EDX adc dword ptr [edx], ebx
#define ADC_EBX_TO_PTR_EDI adc dword ptr [edi], ebx
#define ADC_EBX_TO_PTR_ESI adc dword ptr [esi], ebx
#define ADC_EBX_TO_PTR_EBP adc dword ptr [ebp], ebx
#define ADC_EBX_TO_PTR_ESP adc dword ptr [esp], ebx

#define ADC_ECX_TO_PTR_RAX adc dword ptr [rax], ecx
#define ADC_ECX_TO_PTR_RBX adc dword ptr [rbx], ecx
#define ADC_ECX_TO_PTR_RCX adc dword ptr [rcx], ecx
#define ADC_ECX_TO_PTR_RDX adc dword ptr [rdx], ecx
#define ADC_ECX_TO_PTR_RDI adc dword ptr [rdi], ecx
#define ADC_ECX_TO_PTR_RSI adc dword ptr [rsi], ecx
#define ADC_ECX_TO_PTR_RBP adc dword ptr [rbp], ecx
#define ADC_ECX_TO_PTR_RSP adc dword ptr [rsp], ecx
#define ADC_ECX_TO_PTR_R8 adc dword ptr [r8], ecx
#define ADC_ECX_TO_PTR_R9 adc dword ptr [r9], ecx
#define ADC_ECX_TO_PTR_R10 adc dword ptr [r10], ecx
#define ADC_ECX_TO_PTR_R11 adc dword ptr [r11], ecx
#define ADC_ECX_TO_PTR_R12 adc dword ptr [r12], ecx
#define ADC_ECX_TO_PTR_R13 adc dword ptr [r13], ecx
#define ADC_ECX_TO_PTR_R14 adc dword ptr [r14], ecx
#define ADC_ECX_TO_PTR_R15 adc dword ptr [r15], ecx
#define ADC_ECX_TO_PTR_EAX adc dword ptr [eax], ecx
#define ADC_ECX_TO_PTR_EBX adc dword ptr [ebx], ecx
#define ADC_ECX_TO_PTR_ECX adc dword ptr [ecx], ecx
#define ADC_ECX_TO_PTR_EDX adc dword ptr [edx], ecx
#define ADC_ECX_TO_PTR_EDI adc dword ptr [edi], ecx
#define ADC_ECX_TO_PTR_ESI adc dword ptr [esi], ecx
#define ADC_ECX_TO_PTR_EBP adc dword ptr [ebp], ecx
#define ADC_ECX_TO_PTR_ESP adc dword ptr [esp], ecx

#define ADC_EDX_TO_PTR_RAX adc dword ptr [rax], edx
#define ADC_EDX_TO_PTR_RBX adc dword ptr [rbx], edx
#define ADC_EDX_TO_PTR_RCX adc dword ptr [rcx], edx
#define ADC_EDX_TO_PTR_RDX adc dword ptr [rdx], edx
#define ADC_EDX_TO_PTR_RDI adc dword ptr [rdi], edx
#define ADC_EDX_TO_PTR_RSI adc dword ptr [rsi], edx
#define ADC_EDX_TO_PTR_RBP adc dword ptr [rbp], edx
#define ADC_EDX_TO_PTR_RSP adc dword ptr [rsp], edx
#define ADC_EDX_TO_PTR_R8 adc dword ptr [r8], edx
#define ADC_EDX_TO_PTR_R9 adc dword ptr [r9], edx
#define ADC_EDX_TO_PTR_R10 adc dword ptr [r10], edx
#define ADC_EDX_TO_PTR_R11 adc dword ptr [r11], edx
#define ADC_EDX_TO_PTR_R12 adc dword ptr [r12], edx
#define ADC_EDX_TO_PTR_R13 adc dword ptr [r13], edx
#define ADC_EDX_TO_PTR_R14 adc dword ptr [r14], edx
#define ADC_EDX_TO_PTR_R15 adc dword ptr [r15], edx
#define ADC_EDX_TO_PTR_EAX adc dword ptr [eax], edx
#define ADC_EDX_TO_PTR_EBX adc dword ptr [ebx], edx
#define ADC_EDX_TO_PTR_ECX adc dword ptr [ecx], edx
#define ADC_EDX_TO_PTR_EDX adc dword ptr [edx], edx
#define ADC_EDX_TO_PTR_EDI adc dword ptr [edi], edx
#define ADC_EDX_TO_PTR_ESI adc dword ptr [esi], edx
#define ADC_EDX_TO_PTR_EBP adc dword ptr [ebp], edx
#define ADC_EDX_TO_PTR_ESP adc dword ptr [esp], edx

#define ADC_EDI_TO_PTR_RAX adc dword ptr [rax], edi
#define ADC_EDI_TO_PTR_RBX adc dword ptr [rbx], edi
#define ADC_EDI_TO_PTR_RCX adc dword ptr [rcx], edi
#define ADC_EDI_TO_PTR_RDX adc dword ptr [rdx], edi
#define ADC_EDI_TO_PTR_RDI adc dword ptr [rdi], edi
#define ADC_EDI_TO_PTR_RSI adc dword ptr [rsi], edi
#define ADC_EDI_TO_PTR_RBP adc dword ptr [rbp], edi
#define ADC_EDI_TO_PTR_RSP adc dword ptr [rsp], edi
#define ADC_EDI_TO_PTR_R8 adc dword ptr [r8], edi
#define ADC_EDI_TO_PTR_R9 adc dword ptr [r9], edi
#define ADC_EDI_TO_PTR_R10 adc dword ptr [r10], edi
#define ADC_EDI_TO_PTR_R11 adc dword ptr [r11], edi
#define ADC_EDI_TO_PTR_R12 adc dword ptr [r12], edi
#define ADC_EDI_TO_PTR_R13 adc dword ptr [r13], edi
#define ADC_EDI_TO_PTR_R14 adc dword ptr [r14], edi
#define ADC_EDI_TO_PTR_R15 adc dword ptr [r15], edi
#define ADC_EDI_TO_PTR_EAX adc dword ptr [eax], edi
#define ADC_EDI_TO_PTR_EBX adc dword ptr [ebx], edi
#define ADC_EDI_TO_PTR_ECX adc dword ptr [ecx], edi
#define ADC_EDI_TO_PTR_EDX adc dword ptr [edx], edi
#define ADC_EDI_TO_PTR_EDI adc dword ptr [edi], edi
#define ADC_EDI_TO_PTR_ESI adc dword ptr [esi], edi
#define ADC_EDI_TO_PTR_EBP adc dword ptr [ebp], edi
#define ADC_EDI_TO_PTR_ESP adc dword ptr [esp], edi

#define ADC_ESI_TO_PTR_RAX adc dword ptr [rax], esi
#define ADC_ESI_TO_PTR_RBX adc dword ptr [rbx], esi
#define ADC_ESI_TO_PTR_RCX adc dword ptr [rcx], esi
#define ADC_ESI_TO_PTR_RDX adc dword ptr [rdx], esi
#define ADC_ESI_TO_PTR_RDI adc dword ptr [rdi], esi
#define ADC_ESI_TO_PTR_RSI adc dword ptr [rsi], esi
#define ADC_ESI_TO_PTR_RBP adc dword ptr [rbp], esi
#define ADC_ESI_TO_PTR_RSP adc dword ptr [rsp], esi
#define ADC_ESI_TO_PTR_R8 adc dword ptr [r8], esi
#define ADC_ESI_TO_PTR_R9 adc dword ptr [r9], esi
#define ADC_ESI_TO_PTR_R10 adc dword ptr [r10], esi
#define ADC_ESI_TO_PTR_R11 adc dword ptr [r11], esi
#define ADC_ESI_TO_PTR_R12 adc dword ptr [r12], esi
#define ADC_ESI_TO_PTR_R13 adc dword ptr [r13], esi
#define ADC_ESI_TO_PTR_R14 adc dword ptr [r14], esi
#define ADC_ESI_TO_PTR_R15 adc dword ptr [r15], esi
#define ADC_ESI_TO_PTR_EAX adc dword ptr [eax], esi
#define ADC_ESI_TO_PTR_EBX adc dword ptr [ebx], esi
#define ADC_ESI_TO_PTR_ECX adc dword ptr [ecx], esi
#define ADC_ESI_TO_PTR_EDX adc dword ptr [edx], esi
#define ADC_ESI_TO_PTR_EDI adc dword ptr [edi], esi
#define ADC_ESI_TO_PTR_ESI adc dword ptr [esi], esi
#define ADC_ESI_TO_PTR_EBP adc dword ptr [ebp], esi
#define ADC_ESI_TO_PTR_ESP adc dword ptr [esp], esi

#define ADC_EBP_TO_PTR_RAX adc dword ptr [rax], ebp
#define ADC_EBP_TO_PTR_RBX adc dword ptr [rbx], ebp
#define ADC_EBP_TO_PTR_RCX adc dword ptr [rcx], ebp
#define ADC_EBP_TO_PTR_RDX adc dword ptr [rdx], ebp
#define ADC_EBP_TO_PTR_RDI adc dword ptr [rdi], ebp
#define ADC_EBP_TO_PTR_RSI adc dword ptr [rsi], ebp
#define ADC_EBP_TO_PTR_RBP adc dword ptr [rbp], ebp
#define ADC_EBP_TO_PTR_RSP adc dword ptr [rsp], ebp
#define ADC_EBP_TO_PTR_R8 adc dword ptr [r8], ebp
#define ADC_EBP_TO_PTR_R9 adc dword ptr [r9], ebp
#define ADC_EBP_TO_PTR_R10 adc dword ptr [r10], ebp
#define ADC_EBP_TO_PTR_R11 adc dword ptr [r11], ebp
#define ADC_EBP_TO_PTR_R12 adc dword ptr [r12], ebp
#define ADC_EBP_TO_PTR_R13 adc dword ptr [r13], ebp
#define ADC_EBP_TO_PTR_R14 adc dword ptr [r14], ebp
#define ADC_EBP_TO_PTR_R15 adc dword ptr [r15], ebp
#define ADC_EBP_TO_PTR_EAX adc dword ptr [eax], ebp
#define ADC_EBP_TO_PTR_EBX adc dword ptr [ebx], ebp
#define ADC_EBP_TO_PTR_ECX adc dword ptr [ecx], ebp
#define ADC_EBP_TO_PTR_EDX adc dword ptr [edx], ebp
#define ADC_EBP_TO_PTR_EDI adc dword ptr [edi], ebp
#define ADC_EBP_TO_PTR_ESI adc dword ptr [esi], ebp
#define ADC_EBP_TO_PTR_EBP adc dword ptr [ebp], ebp
#define ADC_EBP_TO_PTR_ESP adc dword ptr [esp], ebp

#define ADC_ESP_TO_PTR_RAX adc dword ptr [rax], esp
#define ADC_ESP_TO_PTR_RBX adc dword ptr [rbx], esp
#define ADC_ESP_TO_PTR_RCX adc dword ptr [rcx], esp
#define ADC_ESP_TO_PTR_RDX adc dword ptr [rdx], esp
#define ADC_ESP_TO_PTR_RDI adc dword ptr [rdi], esp
#define ADC_ESP_TO_PTR_RSI adc dword ptr [rsi], esp
#define ADC_ESP_TO_PTR_RBP adc dword ptr [rbp], esp
#define ADC_ESP_TO_PTR_RSP adc dword ptr [rsp], esp
#define ADC_ESP_TO_PTR_R8 adc dword ptr [r8], esp
#define ADC_ESP_TO_PTR_R9 adc dword ptr [r9], esp
#define ADC_ESP_TO_PTR_R10 adc dword ptr [r10], esp
#define ADC_ESP_TO_PTR_R11 adc dword ptr [r11], esp
#define ADC_ESP_TO_PTR_R12 adc dword ptr [r12], esp
#define ADC_ESP_TO_PTR_R13 adc dword ptr [r13], esp
#define ADC_ESP_TO_PTR_R14 adc dword ptr [r14], esp
#define ADC_ESP_TO_PTR_R15 adc dword ptr [r15], esp
#define ADC_ESP_TO_PTR_EAX adc dword ptr [eax], esp
#define ADC_ESP_TO_PTR_EBX adc dword ptr [ebx], esp
#define ADC_ESP_TO_PTR_ECX adc dword ptr [ecx], esp
#define ADC_ESP_TO_PTR_EDX adc dword ptr [edx], esp
#define ADC_ESP_TO_PTR_EDI adc dword ptr [edi], esp
#define ADC_ESP_TO_PTR_ESI adc dword ptr [esi], esp
#define ADC_ESP_TO_PTR_EBP adc dword ptr [ebp], esp
#define ADC_ESP_TO_PTR_ESP adc dword ptr [esp], esp

#define ADC_R8D_TO_PTR_RAX adc dword ptr [rax], r8d
#define ADC_R8D_TO_PTR_RBX adc dword ptr [rbx], r8d
#define ADC_R8D_TO_PTR_RCX adc dword ptr [rcx], r8d
#define ADC_R8D_TO_PTR_RDX adc dword ptr [rdx], r8d
#define ADC_R8D_TO_PTR_RDI adc dword ptr [rdi], r8d
#define ADC_R8D_TO_PTR_RSI adc dword ptr [rsi], r8d
#define ADC_R8D_TO_PTR_RBP adc dword ptr [rbp], r8d
#define ADC_R8D_TO_PTR_RSP adc dword ptr [rsp], r8d
#define ADC_R8D_TO_PTR_R8 adc dword ptr [r8], r8d
#define ADC_R8D_TO_PTR_R9 adc dword ptr [r9], r8d
#define ADC_R8D_TO_PTR_R10 adc dword ptr [r10], r8d
#define ADC_R8D_TO_PTR_R11 adc dword ptr [r11], r8d
#define ADC_R8D_TO_PTR_R12 adc dword ptr [r12], r8d
#define ADC_R8D_TO_PTR_R13 adc dword ptr [r13], r8d
#define ADC_R8D_TO_PTR_R14 adc dword ptr [r14], r8d
#define ADC_R8D_TO_PTR_R15 adc dword ptr [r15], r8d
#define ADC_R8D_TO_PTR_EAX adc dword ptr [eax], r8d
#define ADC_R8D_TO_PTR_EBX adc dword ptr [ebx], r8d
#define ADC_R8D_TO_PTR_ECX adc dword ptr [ecx], r8d
#define ADC_R8D_TO_PTR_EDX adc dword ptr [edx], r8d
#define ADC_R8D_TO_PTR_EDI adc dword ptr [edi], r8d
#define ADC_R8D_TO_PTR_ESI adc dword ptr [esi], r8d
#define ADC_R8D_TO_PTR_EBP adc dword ptr [ebp], r8d
#define ADC_R8D_TO_PTR_ESP adc dword ptr [esp], r8d

#define ADC_R9D_TO_PTR_RAX adc dword ptr [rax], r9d
#define ADC_R9D_TO_PTR_RBX adc dword ptr [rbx], r9d
#define ADC_R9D_TO_PTR_RCX adc dword ptr [rcx], r9d
#define ADC_R9D_TO_PTR_RDX adc dword ptr [rdx], r9d
#define ADC_R9D_TO_PTR_RDI adc dword ptr [rdi], r9d
#define ADC_R9D_TO_PTR_RSI adc dword ptr [rsi], r9d
#define ADC_R9D_TO_PTR_RBP adc dword ptr [rbp], r9d
#define ADC_R9D_TO_PTR_RSP adc dword ptr [rsp], r9d
#define ADC_R9D_TO_PTR_R8 adc dword ptr [r8], r9d
#define ADC_R9D_TO_PTR_R9 adc dword ptr [r9], r9d
#define ADC_R9D_TO_PTR_R10 adc dword ptr [r10], r9d
#define ADC_R9D_TO_PTR_R11 adc dword ptr [r11], r9d
#define ADC_R9D_TO_PTR_R12 adc dword ptr [r12], r9d
#define ADC_R9D_TO_PTR_R13 adc dword ptr [r13], r9d
#define ADC_R9D_TO_PTR_R14 adc dword ptr [r14], r9d
#define ADC_R9D_TO_PTR_R15 adc dword ptr [r15], r9d
#define ADC_R9D_TO_PTR_EAX adc dword ptr [eax], r9d
#define ADC_R9D_TO_PTR_EBX adc dword ptr [ebx], r9d
#define ADC_R9D_TO_PTR_ECX adc dword ptr [ecx], r9d
#define ADC_R9D_TO_PTR_EDX adc dword ptr [edx], r9d
#define ADC_R9D_TO_PTR_EDI adc dword ptr [edi], r9d
#define ADC_R9D_TO_PTR_ESI adc dword ptr [esi], r9d
#define ADC_R9D_TO_PTR_EBP adc dword ptr [ebp], r9d
#define ADC_R9D_TO_PTR_ESP adc dword ptr [esp], r9d

#define ADC_R10D_TO_PTR_RAX adc dword ptr [rax], r10d
#define ADC_R10D_TO_PTR_RBX adc dword ptr [rbx], r10d
#define ADC_R10D_TO_PTR_RCX adc dword ptr [rcx], r10d
#define ADC_R10D_TO_PTR_RDX adc dword ptr [rdx], r10d
#define ADC_R10D_TO_PTR_RDI adc dword ptr [rdi], r10d
#define ADC_R10D_TO_PTR_RSI adc dword ptr [rsi], r10d
#define ADC_R10D_TO_PTR_RBP adc dword ptr [rbp], r10d
#define ADC_R10D_TO_PTR_RSP adc dword ptr [rsp], r10d
#define ADC_R10D_TO_PTR_R8 adc dword ptr [r8], r10d
#define ADC_R10D_TO_PTR_R9 adc dword ptr [r9], r10d
#define ADC_R10D_TO_PTR_R10 adc dword ptr [r10], r10d
#define ADC_R10D_TO_PTR_R11 adc dword ptr [r11], r10d
#define ADC_R10D_TO_PTR_R12 adc dword ptr [r12], r10d
#define ADC_R10D_TO_PTR_R13 adc dword ptr [r13], r10d
#define ADC_R10D_TO_PTR_R14 adc dword ptr [r14], r10d
#define ADC_R10D_TO_PTR_R15 adc dword ptr [r15], r10d
#define ADC_R10D_TO_PTR_EAX adc dword ptr [eax], r10d
#define ADC_R10D_TO_PTR_EBX adc dword ptr [ebx], r10d
#define ADC_R10D_TO_PTR_ECX adc dword ptr [ecx], r10d
#define ADC_R10D_TO_PTR_EDX adc dword ptr [edx], r10d
#define ADC_R10D_TO_PTR_EDI adc dword ptr [edi], r10d
#define ADC_R10D_TO_PTR_ESI adc dword ptr [esi], r10d
#define ADC_R10D_TO_PTR_EBP adc dword ptr [ebp], r10d
#define ADC_R10D_TO_PTR_ESP adc dword ptr [esp], r10d

#define ADC_R11D_TO_PTR_RAX adc dword ptr [rax], r11d
#define ADC_R11D_TO_PTR_RBX adc dword ptr [rbx], r11d
#define ADC_R11D_TO_PTR_RCX adc dword ptr [rcx], r11d
#define ADC_R11D_TO_PTR_RDX adc dword ptr [rdx], r11d
#define ADC_R11D_TO_PTR_RDI adc dword ptr [rdi], r11d
#define ADC_R11D_TO_PTR_RSI adc dword ptr [rsi], r11d
#define ADC_R11D_TO_PTR_RBP adc dword ptr [rbp], r11d
#define ADC_R11D_TO_PTR_RSP adc dword ptr [rsp], r11d
#define ADC_R11D_TO_PTR_R8 adc dword ptr [r8], r11d
#define ADC_R11D_TO_PTR_R9 adc dword ptr [r9], r11d
#define ADC_R11D_TO_PTR_R10 adc dword ptr [r10], r11d
#define ADC_R11D_TO_PTR_R11 adc dword ptr [r11], r11d
#define ADC_R11D_TO_PTR_R12 adc dword ptr [r12], r11d
#define ADC_R11D_TO_PTR_R13 adc dword ptr [r13], r11d
#define ADC_R11D_TO_PTR_R14 adc dword ptr [r14], r11d
#define ADC_R11D_TO_PTR_R15 adc dword ptr [r15], r11d
#define ADC_R11D_TO_PTR_EAX adc dword ptr [eax], r11d
#define ADC_R11D_TO_PTR_EBX adc dword ptr [ebx], r11d
#define ADC_R11D_TO_PTR_ECX adc dword ptr [ecx], r11d
#define ADC_R11D_TO_PTR_EDX adc dword ptr [edx], r11d
#define ADC_R11D_TO_PTR_EDI adc dword ptr [edi], r11d
#define ADC_R11D_TO_PTR_ESI adc dword ptr [esi], r11d
#define ADC_R11D_TO_PTR_EBP adc dword ptr [ebp], r11d
#define ADC_R11D_TO_PTR_ESP adc dword ptr [esp], r11d

#define ADC_R12D_TO_PTR_RAX adc dword ptr [rax], r12d
#define ADC_R12D_TO_PTR_RBX adc dword ptr [rbx], r12d
#define ADC_R12D_TO_PTR_RCX adc dword ptr [rcx], r12d
#define ADC_R12D_TO_PTR_RDX adc dword ptr [rdx], r12d
#define ADC_R12D_TO_PTR_RDI adc dword ptr [rdi], r12d
#define ADC_R12D_TO_PTR_RSI adc dword ptr [rsi], r12d
#define ADC_R12D_TO_PTR_RBP adc dword ptr [rbp], r12d
#define ADC_R12D_TO_PTR_RSP adc dword ptr [rsp], r12d
#define ADC_R12D_TO_PTR_R8 adc dword ptr [r8], r12d
#define ADC_R12D_TO_PTR_R9 adc dword ptr [r9], r12d
#define ADC_R12D_TO_PTR_R10 adc dword ptr [r10], r12d
#define ADC_R12D_TO_PTR_R11 adc dword ptr [r11], r12d
#define ADC_R12D_TO_PTR_R12 adc dword ptr [r12], r12d
#define ADC_R12D_TO_PTR_R13 adc dword ptr [r13], r12d
#define ADC_R12D_TO_PTR_R14 adc dword ptr [r14], r12d
#define ADC_R12D_TO_PTR_R15 adc dword ptr [r15], r12d
#define ADC_R12D_TO_PTR_EAX adc dword ptr [eax], r12d
#define ADC_R12D_TO_PTR_EBX adc dword ptr [ebx], r12d
#define ADC_R12D_TO_PTR_ECX adc dword ptr [ecx], r12d
#define ADC_R12D_TO_PTR_EDX adc dword ptr [edx], r12d
#define ADC_R12D_TO_PTR_EDI adc dword ptr [edi], r12d
#define ADC_R12D_TO_PTR_ESI adc dword ptr [esi], r12d
#define ADC_R12D_TO_PTR_EBP adc dword ptr [ebp], r12d
#define ADC_R12D_TO_PTR_ESP adc dword ptr [esp], r12d

#define ADC_R13D_TO_PTR_RAX adc dword ptr [rax], r13d
#define ADC_R13D_TO_PTR_RBX adc dword ptr [rbx], r13d
#define ADC_R13D_TO_PTR_RCX adc dword ptr [rcx], r13d
#define ADC_R13D_TO_PTR_RDX adc dword ptr [rdx], r13d
#define ADC_R13D_TO_PTR_RDI adc dword ptr [rdi], r13d
#define ADC_R13D_TO_PTR_RSI adc dword ptr [rsi], r13d
#define ADC_R13D_TO_PTR_RBP adc dword ptr [rbp], r13d
#define ADC_R13D_TO_PTR_RSP adc dword ptr [rsp], r13d
#define ADC_R13D_TO_PTR_R8 adc dword ptr [r8], r13d
#define ADC_R13D_TO_PTR_R9 adc dword ptr [r9], r13d
#define ADC_R13D_TO_PTR_R10 adc dword ptr [r10], r13d
#define ADC_R13D_TO_PTR_R11 adc dword ptr [r11], r13d
#define ADC_R13D_TO_PTR_R12 adc dword ptr [r12], r13d
#define ADC_R13D_TO_PTR_R13 adc dword ptr [r13], r13d
#define ADC_R13D_TO_PTR_R14 adc dword ptr [r14], r13d
#define ADC_R13D_TO_PTR_R15 adc dword ptr [r15], r13d
#define ADC_R13D_TO_PTR_EAX adc dword ptr [eax], r13d
#define ADC_R13D_TO_PTR_EBX adc dword ptr [ebx], r13d
#define ADC_R13D_TO_PTR_ECX adc dword ptr [ecx], r13d
#define ADC_R13D_TO_PTR_EDX adc dword ptr [edx], r13d
#define ADC_R13D_TO_PTR_EDI adc dword ptr [edi], r13d
#define ADC_R13D_TO_PTR_ESI adc dword ptr [esi], r13d
#define ADC_R13D_TO_PTR_EBP adc dword ptr [ebp], r13d
#define ADC_R13D_TO_PTR_ESP adc dword ptr [esp], r13d

#define ADC_R14D_TO_PTR_RAX adc dword ptr [rax], r14d
#define ADC_R14D_TO_PTR_RBX adc dword ptr [rbx], r14d
#define ADC_R14D_TO_PTR_RCX adc dword ptr [rcx], r14d
#define ADC_R14D_TO_PTR_RDX adc dword ptr [rdx], r14d
#define ADC_R14D_TO_PTR_RDI adc dword ptr [rdi], r14d
#define ADC_R14D_TO_PTR_RSI adc dword ptr [rsi], r14d
#define ADC_R14D_TO_PTR_RBP adc dword ptr [rbp], r14d
#define ADC_R14D_TO_PTR_RSP adc dword ptr [rsp], r14d
#define ADC_R14D_TO_PTR_R8 adc dword ptr [r8], r14d
#define ADC_R14D_TO_PTR_R9 adc dword ptr [r9], r14d
#define ADC_R14D_TO_PTR_R10 adc dword ptr [r10], r14d
#define ADC_R14D_TO_PTR_R11 adc dword ptr [r11], r14d
#define ADC_R14D_TO_PTR_R12 adc dword ptr [r12], r14d
#define ADC_R14D_TO_PTR_R13 adc dword ptr [r13], r14d
#define ADC_R14D_TO_PTR_R14 adc dword ptr [r14], r14d
#define ADC_R14D_TO_PTR_R15 adc dword ptr [r15], r14d
#define ADC_R14D_TO_PTR_EAX adc dword ptr [eax], r14d
#define ADC_R14D_TO_PTR_EBX adc dword ptr [ebx], r14d
#define ADC_R14D_TO_PTR_ECX adc dword ptr [ecx], r14d
#define ADC_R14D_TO_PTR_EDX adc dword ptr [edx], r14d
#define ADC_R14D_TO_PTR_EDI adc dword ptr [edi], r14d
#define ADC_R14D_TO_PTR_ESI adc dword ptr [esi], r14d
#define ADC_R14D_TO_PTR_EBP adc dword ptr [ebp], r14d
#define ADC_R14D_TO_PTR_ESP adc dword ptr [esp], r14d

#define ADC_R15D_TO_PTR_RAX adc dword ptr [rax], r15d
#define ADC_R15D_TO_PTR_RBX adc dword ptr [rbx], r15d
#define ADC_R15D_TO_PTR_RCX adc dword ptr [rcx], r15d
#define ADC_R15D_TO_PTR_RDX adc dword ptr [rdx], r15d
#define ADC_R15D_TO_PTR_RDI adc dword ptr [rdi], r15d
#define ADC_R15D_TO_PTR_RSI adc dword ptr [rsi], r15d
#define ADC_R15D_TO_PTR_RBP adc dword ptr [rbp], r15d
#define ADC_R15D_TO_PTR_RSP adc dword ptr [rsp], r15d
#define ADC_R15D_TO_PTR_R8 adc dword ptr [r8], r15d
#define ADC_R15D_TO_PTR_R9 adc dword ptr [r9], r15d
#define ADC_R15D_TO_PTR_R10 adc dword ptr [r10], r15d
#define ADC_R15D_TO_PTR_R11 adc dword ptr [r11], r15d
#define ADC_R15D_TO_PTR_R12 adc dword ptr [r12], r15d
#define ADC_R15D_TO_PTR_R13 adc dword ptr [r13], r15d
#define ADC_R15D_TO_PTR_R14 adc dword ptr [r14], r15d
#define ADC_R15D_TO_PTR_R15 adc dword ptr [r15], r15d
#define ADC_R15D_TO_PTR_EAX adc dword ptr [eax], r15d
#define ADC_R15D_TO_PTR_EBX adc dword ptr [ebx], r15d
#define ADC_R15D_TO_PTR_ECX adc dword ptr [ecx], r15d
#define ADC_R15D_TO_PTR_EDX adc dword ptr [edx], r15d
#define ADC_R15D_TO_PTR_EDI adc dword ptr [edi], r15d
#define ADC_R15D_TO_PTR_ESI adc dword ptr [esi], r15d
#define ADC_R15D_TO_PTR_EBP adc dword ptr [ebp], r15d
#define ADC_R15D_TO_PTR_ESP adc dword ptr [esp], r15d

#define ADC_EAX_FROM_PTR_RAX_(VALUE) adc eax, dword ptr [rax + VALUE]
#define ADC_EAX_FROM_PTR_RBX_(VALUE) adc eax, dword ptr [rbx + VALUE]
#define ADC_EAX_FROM_PTR_RCX_(VALUE) adc eax, dword ptr [rcx + VALUE]
#define ADC_EAX_FROM_PTR_RDX_(VALUE) adc eax, dword ptr [rdx + VALUE]
#define ADC_EAX_FROM_PTR_RDI_(VALUE) adc eax, dword ptr [rdi + VALUE]
#define ADC_EAX_FROM_PTR_RSI_(VALUE) adc eax, dword ptr [rsi + VALUE]
#define ADC_EAX_FROM_PTR_RBP_(VALUE) adc eax, dword ptr [rbp + VALUE]
#define ADC_EAX_FROM_PTR_RSP_(VALUE) adc eax, dword ptr [rsp + VALUE]
#define ADC_EAX_FROM_PTR_R8_(VALUE) adc eax, dword ptr [r8 + VALUE]
#define ADC_EAX_FROM_PTR_R9_(VALUE) adc eax, dword ptr [r9 + VALUE]
#define ADC_EAX_FROM_PTR_R10_(VALUE) adc eax, dword ptr [r10 + VALUE]
#define ADC_EAX_FROM_PTR_R11_(VALUE) adc eax, dword ptr [r11 + VALUE]
#define ADC_EAX_FROM_PTR_R12_(VALUE) adc eax, dword ptr [r12 + VALUE]
#define ADC_EAX_FROM_PTR_R13_(VALUE) adc eax, dword ptr [r13 + VALUE]
#define ADC_EAX_FROM_PTR_R14_(VALUE) adc eax, dword ptr [r14 + VALUE]
#define ADC_EAX_FROM_PTR_R15_(VALUE) adc eax, dword ptr [r15 + VALUE]
#define ADC_EAX_FROM_PTR_EAX_(VALUE) adc eax, dword ptr [eax + VALUE]
#define ADC_EAX_FROM_PTR_EBX_(VALUE) adc eax, dword ptr [ebx + VALUE]
#define ADC_EAX_FROM_PTR_ECX_(VALUE) adc eax, dword ptr [ecx + VALUE]
#define ADC_EAX_FROM_PTR_EDX_(VALUE) adc eax, dword ptr [edx + VALUE]
#define ADC_EAX_FROM_PTR_EDI_(VALUE) adc eax, dword ptr [edi + VALUE]
#define ADC_EAX_FROM_PTR_ESI_(VALUE) adc eax, dword ptr [esi + VALUE]
#define ADC_EAX_FROM_PTR_EBP_(VALUE) adc eax, dword ptr [ebp + VALUE]
#define ADC_EAX_FROM_PTR_ESP_(VALUE) adc eax, dword ptr [esp + VALUE]

#define ADC_EBX_FROM_PTR_RAX_(VALUE) adc ebx, dword ptr [rax + VALUE]
#define ADC_EBX_FROM_PTR_RBX_(VALUE) adc ebx, dword ptr [rbx + VALUE]
#define ADC_EBX_FROM_PTR_RCX_(VALUE) adc ebx, dword ptr [rcx + VALUE]
#define ADC_EBX_FROM_PTR_RDX_(VALUE) adc ebx, dword ptr [rdx + VALUE]
#define ADC_EBX_FROM_PTR_RDI_(VALUE) adc ebx, dword ptr [rdi + VALUE]
#define ADC_EBX_FROM_PTR_RSI_(VALUE) adc ebx, dword ptr [rsi + VALUE]
#define ADC_EBX_FROM_PTR_RBP_(VALUE) adc ebx, dword ptr [rbp + VALUE]
#define ADC_EBX_FROM_PTR_RSP_(VALUE) adc ebx, dword ptr [rsp + VALUE]
#define ADC_EBX_FROM_PTR_R8_(VALUE) adc ebx, dword ptr [r8 + VALUE]
#define ADC_EBX_FROM_PTR_R9_(VALUE) adc ebx, dword ptr [r9 + VALUE]
#define ADC_EBX_FROM_PTR_R10_(VALUE) adc ebx, dword ptr [r10 + VALUE]
#define ADC_EBX_FROM_PTR_R11_(VALUE) adc ebx, dword ptr [r11 + VALUE]
#define ADC_EBX_FROM_PTR_R12_(VALUE) adc ebx, dword ptr [r12 + VALUE]
#define ADC_EBX_FROM_PTR_R13_(VALUE) adc ebx, dword ptr [r13 + VALUE]
#define ADC_EBX_FROM_PTR_R14_(VALUE) adc ebx, dword ptr [r14 + VALUE]
#define ADC_EBX_FROM_PTR_R15_(VALUE) adc ebx, dword ptr [r15 + VALUE]
#define ADC_EBX_FROM_PTR_EAX_(VALUE) adc ebx, dword ptr [eax + VALUE]
#define ADC_EBX_FROM_PTR_EBX_(VALUE) adc ebx, dword ptr [ebx + VALUE]
#define ADC_EBX_FROM_PTR_ECX_(VALUE) adc ebx, dword ptr [ecx + VALUE]
#define ADC_EBX_FROM_PTR_EDX_(VALUE) adc ebx, dword ptr [edx + VALUE]
#define ADC_EBX_FROM_PTR_EDI_(VALUE) adc ebx, dword ptr [edi + VALUE]
#define ADC_EBX_FROM_PTR_ESI_(VALUE) adc ebx, dword ptr [esi + VALUE]
#define ADC_EBX_FROM_PTR_EBP_(VALUE) adc ebx, dword ptr [ebp + VALUE]
#define ADC_EBX_FROM_PTR_ESP_(VALUE) adc ebx, dword ptr [esp + VALUE]

#define ADC_ECX_FROM_PTR_RAX_(VALUE) adc ecx, dword ptr [rax + VALUE]
#define ADC_ECX_FROM_PTR_RBX_(VALUE) adc ecx, dword ptr [rbx + VALUE]
#define ADC_ECX_FROM_PTR_RCX_(VALUE) adc ecx, dword ptr [rcx + VALUE]
#define ADC_ECX_FROM_PTR_RDX_(VALUE) adc ecx, dword ptr [rdx + VALUE]
#define ADC_ECX_FROM_PTR_RDI_(VALUE) adc ecx, dword ptr [rdi + VALUE]
#define ADC_ECX_FROM_PTR_RSI_(VALUE) adc ecx, dword ptr [rsi + VALUE]
#define ADC_ECX_FROM_PTR_RBP_(VALUE) adc ecx, dword ptr [rbp + VALUE]
#define ADC_ECX_FROM_PTR_RSP_(VALUE) adc ecx, dword ptr [rsp + VALUE]
#define ADC_ECX_FROM_PTR_R8_(VALUE) adc ecx, dword ptr [r8 + VALUE]
#define ADC_ECX_FROM_PTR_R9_(VALUE) adc ecx, dword ptr [r9 + VALUE]
#define ADC_ECX_FROM_PTR_R10_(VALUE) adc ecx, dword ptr [r10 + VALUE]
#define ADC_ECX_FROM_PTR_R11_(VALUE) adc ecx, dword ptr [r11 + VALUE]
#define ADC_ECX_FROM_PTR_R12_(VALUE) adc ecx, dword ptr [r12 + VALUE]
#define ADC_ECX_FROM_PTR_R13_(VALUE) adc ecx, dword ptr [r13 + VALUE]
#define ADC_ECX_FROM_PTR_R14_(VALUE) adc ecx, dword ptr [r14 + VALUE]
#define ADC_ECX_FROM_PTR_R15_(VALUE) adc ecx, dword ptr [r15 + VALUE]
#define ADC_ECX_FROM_PTR_EAX_(VALUE) adc ecx, dword ptr [eax + VALUE]
#define ADC_ECX_FROM_PTR_EBX_(VALUE) adc ecx, dword ptr [ebx + VALUE]
#define ADC_ECX_FROM_PTR_ECX_(VALUE) adc ecx, dword ptr [ecx + VALUE]
#define ADC_ECX_FROM_PTR_EDX_(VALUE) adc ecx, dword ptr [edx + VALUE]
#define ADC_ECX_FROM_PTR_EDI_(VALUE) adc ecx, dword ptr [edi + VALUE]
#define ADC_ECX_FROM_PTR_ESI_(VALUE) adc ecx, dword ptr [esi + VALUE]
#define ADC_ECX_FROM_PTR_EBP_(VALUE) adc ecx, dword ptr [ebp + VALUE]
#define ADC_ECX_FROM_PTR_ESP_(VALUE) adc ecx, dword ptr [esp + VALUE]

#define ADC_EDX_FROM_PTR_RAX_(VALUE) adc edx, dword ptr [rax + VALUE]
#define ADC_EDX_FROM_PTR_RBX_(VALUE) adc edx, dword ptr [rbx + VALUE]
#define ADC_EDX_FROM_PTR_RCX_(VALUE) adc edx, dword ptr [rcx + VALUE]
#define ADC_EDX_FROM_PTR_RDX_(VALUE) adc edx, dword ptr [rdx + VALUE]
#define ADC_EDX_FROM_PTR_RDI_(VALUE) adc edx, dword ptr [rdi + VALUE]
#define ADC_EDX_FROM_PTR_RSI_(VALUE) adc edx, dword ptr [rsi + VALUE]
#define ADC_EDX_FROM_PTR_RBP_(VALUE) adc edx, dword ptr [rbp + VALUE]
#define ADC_EDX_FROM_PTR_RSP_(VALUE) adc edx, dword ptr [rsp + VALUE]
#define ADC_EDX_FROM_PTR_R8_(VALUE) adc edx, dword ptr [r8 + VALUE]
#define ADC_EDX_FROM_PTR_R9_(VALUE) adc edx, dword ptr [r9 + VALUE]
#define ADC_EDX_FROM_PTR_R10_(VALUE) adc edx, dword ptr [r10 + VALUE]
#define ADC_EDX_FROM_PTR_R11_(VALUE) adc edx, dword ptr [r11 + VALUE]
#define ADC_EDX_FROM_PTR_R12_(VALUE) adc edx, dword ptr [r12 + VALUE]
#define ADC_EDX_FROM_PTR_R13_(VALUE) adc edx, dword ptr [r13 + VALUE]
#define ADC_EDX_FROM_PTR_R14_(VALUE) adc edx, dword ptr [r14 + VALUE]
#define ADC_EDX_FROM_PTR_R15_(VALUE) adc edx, dword ptr [r15 + VALUE]
#define ADC_EDX_FROM_PTR_EAX_(VALUE) adc edx, dword ptr [eax + VALUE]
#define ADC_EDX_FROM_PTR_EBX_(VALUE) adc edx, dword ptr [ebx + VALUE]
#define ADC_EDX_FROM_PTR_ECX_(VALUE) adc edx, dword ptr [ecx + VALUE]
#define ADC_EDX_FROM_PTR_EDX_(VALUE) adc edx, dword ptr [edx + VALUE]
#define ADC_EDX_FROM_PTR_EDI_(VALUE) adc edx, dword ptr [edi + VALUE]
#define ADC_EDX_FROM_PTR_ESI_(VALUE) adc edx, dword ptr [esi + VALUE]
#define ADC_EDX_FROM_PTR_EBP_(VALUE) adc edx, dword ptr [ebp + VALUE]
#define ADC_EDX_FROM_PTR_ESP_(VALUE) adc edx, dword ptr [esp + VALUE]

#define ADC_EDI_FROM_PTR_RAX_(VALUE) adc edi, dword ptr [rax + VALUE]
#define ADC_EDI_FROM_PTR_RBX_(VALUE) adc edi, dword ptr [rbx + VALUE]
#define ADC_EDI_FROM_PTR_RCX_(VALUE) adc edi, dword ptr [rcx + VALUE]
#define ADC_EDI_FROM_PTR_RDX_(VALUE) adc edi, dword ptr [rdx + VALUE]
#define ADC_EDI_FROM_PTR_RDI_(VALUE) adc edi, dword ptr [rdi + VALUE]
#define ADC_EDI_FROM_PTR_RSI_(VALUE) adc edi, dword ptr [rsi + VALUE]
#define ADC_EDI_FROM_PTR_RBP_(VALUE) adc edi, dword ptr [rbp + VALUE]
#define ADC_EDI_FROM_PTR_RSP_(VALUE) adc edi, dword ptr [rsp + VALUE]
#define ADC_EDI_FROM_PTR_R8_(VALUE) adc edi, dword ptr [r8 + VALUE]
#define ADC_EDI_FROM_PTR_R9_(VALUE) adc edi, dword ptr [r9 + VALUE]
#define ADC_EDI_FROM_PTR_R10_(VALUE) adc edi, dword ptr [r10 + VALUE]
#define ADC_EDI_FROM_PTR_R11_(VALUE) adc edi, dword ptr [r11 + VALUE]
#define ADC_EDI_FROM_PTR_R12_(VALUE) adc edi, dword ptr [r12 + VALUE]
#define ADC_EDI_FROM_PTR_R13_(VALUE) adc edi, dword ptr [r13 + VALUE]
#define ADC_EDI_FROM_PTR_R14_(VALUE) adc edi, dword ptr [r14 + VALUE]
#define ADC_EDI_FROM_PTR_R15_(VALUE) adc edi, dword ptr [r15 + VALUE]
#define ADC_EDI_FROM_PTR_EAX_(VALUE) adc edi, dword ptr [eax + VALUE]
#define ADC_EDI_FROM_PTR_EBX_(VALUE) adc edi, dword ptr [ebx + VALUE]
#define ADC_EDI_FROM_PTR_ECX_(VALUE) adc edi, dword ptr [ecx + VALUE]
#define ADC_EDI_FROM_PTR_EDX_(VALUE) adc edi, dword ptr [edx + VALUE]
#define ADC_EDI_FROM_PTR_EDI_(VALUE) adc edi, dword ptr [edi + VALUE]
#define ADC_EDI_FROM_PTR_ESI_(VALUE) adc edi, dword ptr [esi + VALUE]
#define ADC_EDI_FROM_PTR_EBP_(VALUE) adc edi, dword ptr [ebp + VALUE]
#define ADC_EDI_FROM_PTR_ESP_(VALUE) adc edi, dword ptr [esp + VALUE]

#define ADC_ESI_FROM_PTR_RAX_(VALUE) adc esi, dword ptr [rax + VALUE]
#define ADC_ESI_FROM_PTR_RBX_(VALUE) adc esi, dword ptr [rbx + VALUE]
#define ADC_ESI_FROM_PTR_RCX_(VALUE) adc esi, dword ptr [rcx + VALUE]
#define ADC_ESI_FROM_PTR_RDX_(VALUE) adc esi, dword ptr [rdx + VALUE]
#define ADC_ESI_FROM_PTR_RDI_(VALUE) adc esi, dword ptr [rdi + VALUE]
#define ADC_ESI_FROM_PTR_RSI_(VALUE) adc esi, dword ptr [rsi + VALUE]
#define ADC_ESI_FROM_PTR_RBP_(VALUE) adc esi, dword ptr [rbp + VALUE]
#define ADC_ESI_FROM_PTR_RSP_(VALUE) adc esi, dword ptr [rsp + VALUE]
#define ADC_ESI_FROM_PTR_R8_(VALUE) adc esi, dword ptr [r8 + VALUE]
#define ADC_ESI_FROM_PTR_R9_(VALUE) adc esi, dword ptr [r9 + VALUE]
#define ADC_ESI_FROM_PTR_R10_(VALUE) adc esi, dword ptr [r10 + VALUE]
#define ADC_ESI_FROM_PTR_R11_(VALUE) adc esi, dword ptr [r11 + VALUE]
#define ADC_ESI_FROM_PTR_R12_(VALUE) adc esi, dword ptr [r12 + VALUE]
#define ADC_ESI_FROM_PTR_R13_(VALUE) adc esi, dword ptr [r13 + VALUE]
#define ADC_ESI_FROM_PTR_R14_(VALUE) adc esi, dword ptr [r14 + VALUE]
#define ADC_ESI_FROM_PTR_R15_(VALUE) adc esi, dword ptr [r15 + VALUE]
#define ADC_ESI_FROM_PTR_EAX_(VALUE) adc esi, dword ptr [eax + VALUE]
#define ADC_ESI_FROM_PTR_EBX_(VALUE) adc esi, dword ptr [ebx + VALUE]
#define ADC_ESI_FROM_PTR_ECX_(VALUE) adc esi, dword ptr [ecx + VALUE]
#define ADC_ESI_FROM_PTR_EDX_(VALUE) adc esi, dword ptr [edx + VALUE]
#define ADC_ESI_FROM_PTR_EDI_(VALUE) adc esi, dword ptr [edi + VALUE]
#define ADC_ESI_FROM_PTR_ESI_(VALUE) adc esi, dword ptr [esi + VALUE]
#define ADC_ESI_FROM_PTR_EBP_(VALUE) adc esi, dword ptr [ebp + VALUE]
#define ADC_ESI_FROM_PTR_ESP_(VALUE) adc esi, dword ptr [esp + VALUE]

#define ADC_EBP_FROM_PTR_RAX_(VALUE) adc ebp, dword ptr [rax + VALUE]
#define ADC_EBP_FROM_PTR_RBX_(VALUE) adc ebp, dword ptr [rbx + VALUE]
#define ADC_EBP_FROM_PTR_RCX_(VALUE) adc ebp, dword ptr [rcx + VALUE]
#define ADC_EBP_FROM_PTR_RDX_(VALUE) adc ebp, dword ptr [rdx + VALUE]
#define ADC_EBP_FROM_PTR_RDI_(VALUE) adc ebp, dword ptr [rdi + VALUE]
#define ADC_EBP_FROM_PTR_RSI_(VALUE) adc ebp, dword ptr [rsi + VALUE]
#define ADC_EBP_FROM_PTR_RBP_(VALUE) adc ebp, dword ptr [rbp + VALUE]
#define ADC_EBP_FROM_PTR_RSP_(VALUE) adc ebp, dword ptr [rsp + VALUE]
#define ADC_EBP_FROM_PTR_R8_(VALUE) adc ebp, dword ptr [r8 + VALUE]
#define ADC_EBP_FROM_PTR_R9_(VALUE) adc ebp, dword ptr [r9 + VALUE]
#define ADC_EBP_FROM_PTR_R10_(VALUE) adc ebp, dword ptr [r10 + VALUE]
#define ADC_EBP_FROM_PTR_R11_(VALUE) adc ebp, dword ptr [r11 + VALUE]
#define ADC_EBP_FROM_PTR_R12_(VALUE) adc ebp, dword ptr [r12 + VALUE]
#define ADC_EBP_FROM_PTR_R13_(VALUE) adc ebp, dword ptr [r13 + VALUE]
#define ADC_EBP_FROM_PTR_R14_(VALUE) adc ebp, dword ptr [r14 + VALUE]
#define ADC_EBP_FROM_PTR_R15_(VALUE) adc ebp, dword ptr [r15 + VALUE]
#define ADC_EBP_FROM_PTR_EAX_(VALUE) adc ebp, dword ptr [eax + VALUE]
#define ADC_EBP_FROM_PTR_EBX_(VALUE) adc ebp, dword ptr [ebx + VALUE]
#define ADC_EBP_FROM_PTR_ECX_(VALUE) adc ebp, dword ptr [ecx + VALUE]
#define ADC_EBP_FROM_PTR_EDX_(VALUE) adc ebp, dword ptr [edx + VALUE]
#define ADC_EBP_FROM_PTR_EDI_(VALUE) adc ebp, dword ptr [edi + VALUE]
#define ADC_EBP_FROM_PTR_ESI_(VALUE) adc ebp, dword ptr [esi + VALUE]
#define ADC_EBP_FROM_PTR_EBP_(VALUE) adc ebp, dword ptr [ebp + VALUE]
#define ADC_EBP_FROM_PTR_ESP_(VALUE) adc ebp, dword ptr [esp + VALUE]

#define ADC_ESP_FROM_PTR_RAX_(VALUE) adc esp, dword ptr [rax + VALUE]
#define ADC_ESP_FROM_PTR_RBX_(VALUE) adc esp, dword ptr [rbx + VALUE]
#define ADC_ESP_FROM_PTR_RCX_(VALUE) adc esp, dword ptr [rcx + VALUE]
#define ADC_ESP_FROM_PTR_RDX_(VALUE) adc esp, dword ptr [rdx + VALUE]
#define ADC_ESP_FROM_PTR_RDI_(VALUE) adc esp, dword ptr [rdi + VALUE]
#define ADC_ESP_FROM_PTR_RSI_(VALUE) adc esp, dword ptr [rsi + VALUE]
#define ADC_ESP_FROM_PTR_RBP_(VALUE) adc esp, dword ptr [rbp + VALUE]
#define ADC_ESP_FROM_PTR_RSP_(VALUE) adc esp, dword ptr [rsp + VALUE]
#define ADC_ESP_FROM_PTR_R8_(VALUE) adc esp, dword ptr [r8 + VALUE]
#define ADC_ESP_FROM_PTR_R9_(VALUE) adc esp, dword ptr [r9 + VALUE]
#define ADC_ESP_FROM_PTR_R10_(VALUE) adc esp, dword ptr [r10 + VALUE]
#define ADC_ESP_FROM_PTR_R11_(VALUE) adc esp, dword ptr [r11 + VALUE]
#define ADC_ESP_FROM_PTR_R12_(VALUE) adc esp, dword ptr [r12 + VALUE]
#define ADC_ESP_FROM_PTR_R13_(VALUE) adc esp, dword ptr [r13 + VALUE]
#define ADC_ESP_FROM_PTR_R14_(VALUE) adc esp, dword ptr [r14 + VALUE]
#define ADC_ESP_FROM_PTR_R15_(VALUE) adc esp, dword ptr [r15 + VALUE]
#define ADC_ESP_FROM_PTR_EAX_(VALUE) adc esp, dword ptr [eax + VALUE]
#define ADC_ESP_FROM_PTR_EBX_(VALUE) adc esp, dword ptr [ebx + VALUE]
#define ADC_ESP_FROM_PTR_ECX_(VALUE) adc esp, dword ptr [ecx + VALUE]
#define ADC_ESP_FROM_PTR_EDX_(VALUE) adc esp, dword ptr [edx + VALUE]
#define ADC_ESP_FROM_PTR_EDI_(VALUE) adc esp, dword ptr [edi + VALUE]
#define ADC_ESP_FROM_PTR_ESI_(VALUE) adc esp, dword ptr [esi + VALUE]
#define ADC_ESP_FROM_PTR_EBP_(VALUE) adc esp, dword ptr [ebp + VALUE]
#define ADC_ESP_FROM_PTR_ESP_(VALUE) adc esp, dword ptr [esp + VALUE]

#define ADC_R8D_FROM_PTR_RAX_(VALUE) adc r8d, dword ptr [rax + VALUE]
#define ADC_R8D_FROM_PTR_RBX_(VALUE) adc r8d, dword ptr [rbx + VALUE]
#define ADC_R8D_FROM_PTR_RCX_(VALUE) adc r8d, dword ptr [rcx + VALUE]
#define ADC_R8D_FROM_PTR_RDX_(VALUE) adc r8d, dword ptr [rdx + VALUE]
#define ADC_R8D_FROM_PTR_RDI_(VALUE) adc r8d, dword ptr [rdi + VALUE]
#define ADC_R8D_FROM_PTR_RSI_(VALUE) adc r8d, dword ptr [rsi + VALUE]
#define ADC_R8D_FROM_PTR_RBP_(VALUE) adc r8d, dword ptr [rbp + VALUE]
#define ADC_R8D_FROM_PTR_RSP_(VALUE) adc r8d, dword ptr [rsp + VALUE]
#define ADC_R8D_FROM_PTR_R8_(VALUE) adc r8d, dword ptr [r8 + VALUE]
#define ADC_R8D_FROM_PTR_R9_(VALUE) adc r8d, dword ptr [r9 + VALUE]
#define ADC_R8D_FROM_PTR_R10_(VALUE) adc r8d, dword ptr [r10 + VALUE]
#define ADC_R8D_FROM_PTR_R11_(VALUE) adc r8d, dword ptr [r11 + VALUE]
#define ADC_R8D_FROM_PTR_R12_(VALUE) adc r8d, dword ptr [r12 + VALUE]
#define ADC_R8D_FROM_PTR_R13_(VALUE) adc r8d, dword ptr [r13 + VALUE]
#define ADC_R8D_FROM_PTR_R14_(VALUE) adc r8d, dword ptr [r14 + VALUE]
#define ADC_R8D_FROM_PTR_R15_(VALUE) adc r8d, dword ptr [r15 + VALUE]
#define ADC_R8D_FROM_PTR_EAX_(VALUE) adc r8d, dword ptr [eax + VALUE]
#define ADC_R8D_FROM_PTR_EBX_(VALUE) adc r8d, dword ptr [ebx + VALUE]
#define ADC_R8D_FROM_PTR_ECX_(VALUE) adc r8d, dword ptr [ecx + VALUE]
#define ADC_R8D_FROM_PTR_EDX_(VALUE) adc r8d, dword ptr [edx + VALUE]
#define ADC_R8D_FROM_PTR_EDI_(VALUE) adc r8d, dword ptr [edi + VALUE]
#define ADC_R8D_FROM_PTR_ESI_(VALUE) adc r8d, dword ptr [esi + VALUE]
#define ADC_R8D_FROM_PTR_EBP_(VALUE) adc r8d, dword ptr [ebp + VALUE]
#define ADC_R8D_FROM_PTR_ESP_(VALUE) adc r8d, dword ptr [esp + VALUE]

#define ADC_R9D_FROM_PTR_RAX_(VALUE) adc r9d, dword ptr [rax + VALUE]
#define ADC_R9D_FROM_PTR_RBX_(VALUE) adc r9d, dword ptr [rbx + VALUE]
#define ADC_R9D_FROM_PTR_RCX_(VALUE) adc r9d, dword ptr [rcx + VALUE]
#define ADC_R9D_FROM_PTR_RDX_(VALUE) adc r9d, dword ptr [rdx + VALUE]
#define ADC_R9D_FROM_PTR_RDI_(VALUE) adc r9d, dword ptr [rdi + VALUE]
#define ADC_R9D_FROM_PTR_RSI_(VALUE) adc r9d, dword ptr [rsi + VALUE]
#define ADC_R9D_FROM_PTR_RBP_(VALUE) adc r9d, dword ptr [rbp + VALUE]
#define ADC_R9D_FROM_PTR_RSP_(VALUE) adc r9d, dword ptr [rsp + VALUE]
#define ADC_R9D_FROM_PTR_R8_(VALUE) adc r9d, dword ptr [r8 + VALUE]
#define ADC_R9D_FROM_PTR_R9_(VALUE) adc r9d, dword ptr [r9 + VALUE]
#define ADC_R9D_FROM_PTR_R10_(VALUE) adc r9d, dword ptr [r10 + VALUE]
#define ADC_R9D_FROM_PTR_R11_(VALUE) adc r9d, dword ptr [r11 + VALUE]
#define ADC_R9D_FROM_PTR_R12_(VALUE) adc r9d, dword ptr [r12 + VALUE]
#define ADC_R9D_FROM_PTR_R13_(VALUE) adc r9d, dword ptr [r13 + VALUE]
#define ADC_R9D_FROM_PTR_R14_(VALUE) adc r9d, dword ptr [r14 + VALUE]
#define ADC_R9D_FROM_PTR_R15_(VALUE) adc r9d, dword ptr [r15 + VALUE]
#define ADC_R9D_FROM_PTR_EAX_(VALUE) adc r9d, dword ptr [eax + VALUE]
#define ADC_R9D_FROM_PTR_EBX_(VALUE) adc r9d, dword ptr [ebx + VALUE]
#define ADC_R9D_FROM_PTR_ECX_(VALUE) adc r9d, dword ptr [ecx + VALUE]
#define ADC_R9D_FROM_PTR_EDX_(VALUE) adc r9d, dword ptr [edx + VALUE]
#define ADC_R9D_FROM_PTR_EDI_(VALUE) adc r9d, dword ptr [edi + VALUE]
#define ADC_R9D_FROM_PTR_ESI_(VALUE) adc r9d, dword ptr [esi + VALUE]
#define ADC_R9D_FROM_PTR_EBP_(VALUE) adc r9d, dword ptr [ebp + VALUE]
#define ADC_R9D_FROM_PTR_ESP_(VALUE) adc r9d, dword ptr [esp + VALUE]

#define ADC_R10D_FROM_PTR_RAX_(VALUE) adc r10d, dword ptr [rax + VALUE]
#define ADC_R10D_FROM_PTR_RBX_(VALUE) adc r10d, dword ptr [rbx + VALUE]
#define ADC_R10D_FROM_PTR_RCX_(VALUE) adc r10d, dword ptr [rcx + VALUE]
#define ADC_R10D_FROM_PTR_RDX_(VALUE) adc r10d, dword ptr [rdx + VALUE]
#define ADC_R10D_FROM_PTR_RDI_(VALUE) adc r10d, dword ptr [rdi + VALUE]
#define ADC_R10D_FROM_PTR_RSI_(VALUE) adc r10d, dword ptr [rsi + VALUE]
#define ADC_R10D_FROM_PTR_RBP_(VALUE) adc r10d, dword ptr [rbp + VALUE]
#define ADC_R10D_FROM_PTR_RSP_(VALUE) adc r10d, dword ptr [rsp + VALUE]
#define ADC_R10D_FROM_PTR_R8_(VALUE) adc r10d, dword ptr [r8 + VALUE]
#define ADC_R10D_FROM_PTR_R9_(VALUE) adc r10d, dword ptr [r9 + VALUE]
#define ADC_R10D_FROM_PTR_R10_(VALUE) adc r10d, dword ptr [r10 + VALUE]
#define ADC_R10D_FROM_PTR_R11_(VALUE) adc r10d, dword ptr [r11 + VALUE]
#define ADC_R10D_FROM_PTR_R12_(VALUE) adc r10d, dword ptr [r12 + VALUE]
#define ADC_R10D_FROM_PTR_R13_(VALUE) adc r10d, dword ptr [r13 + VALUE]
#define ADC_R10D_FROM_PTR_R14_(VALUE) adc r10d, dword ptr [r14 + VALUE]
#define ADC_R10D_FROM_PTR_R15_(VALUE) adc r10d, dword ptr [r15 + VALUE]
#define ADC_R10D_FROM_PTR_EAX_(VALUE) adc r10d, dword ptr [eax + VALUE]
#define ADC_R10D_FROM_PTR_EBX_(VALUE) adc r10d, dword ptr [ebx + VALUE]
#define ADC_R10D_FROM_PTR_ECX_(VALUE) adc r10d, dword ptr [ecx + VALUE]
#define ADC_R10D_FROM_PTR_EDX_(VALUE) adc r10d, dword ptr [edx + VALUE]
#define ADC_R10D_FROM_PTR_EDI_(VALUE) adc r10d, dword ptr [edi + VALUE]
#define ADC_R10D_FROM_PTR_ESI_(VALUE) adc r10d, dword ptr [esi + VALUE]
#define ADC_R10D_FROM_PTR_EBP_(VALUE) adc r10d, dword ptr [ebp + VALUE]
#define ADC_R10D_FROM_PTR_ESP_(VALUE) adc r10d, dword ptr [esp + VALUE]

#define ADC_R11D_FROM_PTR_RAX_(VALUE) adc r11d, dword ptr [rax + VALUE]
#define ADC_R11D_FROM_PTR_RBX_(VALUE) adc r11d, dword ptr [rbx + VALUE]
#define ADC_R11D_FROM_PTR_RCX_(VALUE) adc r11d, dword ptr [rcx + VALUE]
#define ADC_R11D_FROM_PTR_RDX_(VALUE) adc r11d, dword ptr [rdx + VALUE]
#define ADC_R11D_FROM_PTR_RDI_(VALUE) adc r11d, dword ptr [rdi + VALUE]
#define ADC_R11D_FROM_PTR_RSI_(VALUE) adc r11d, dword ptr [rsi + VALUE]
#define ADC_R11D_FROM_PTR_RBP_(VALUE) adc r11d, dword ptr [rbp + VALUE]
#define ADC_R11D_FROM_PTR_RSP_(VALUE) adc r11d, dword ptr [rsp + VALUE]
#define ADC_R11D_FROM_PTR_R8_(VALUE) adc r11d, dword ptr [r8 + VALUE]
#define ADC_R11D_FROM_PTR_R9_(VALUE) adc r11d, dword ptr [r9 + VALUE]
#define ADC_R11D_FROM_PTR_R10_(VALUE) adc r11d, dword ptr [r10 + VALUE]
#define ADC_R11D_FROM_PTR_R11_(VALUE) adc r11d, dword ptr [r11 + VALUE]
#define ADC_R11D_FROM_PTR_R12_(VALUE) adc r11d, dword ptr [r12 + VALUE]
#define ADC_R11D_FROM_PTR_R13_(VALUE) adc r11d, dword ptr [r13 + VALUE]
#define ADC_R11D_FROM_PTR_R14_(VALUE) adc r11d, dword ptr [r14 + VALUE]
#define ADC_R11D_FROM_PTR_R15_(VALUE) adc r11d, dword ptr [r15 + VALUE]
#define ADC_R11D_FROM_PTR_EAX_(VALUE) adc r11d, dword ptr [eax + VALUE]
#define ADC_R11D_FROM_PTR_EBX_(VALUE) adc r11d, dword ptr [ebx + VALUE]
#define ADC_R11D_FROM_PTR_ECX_(VALUE) adc r11d, dword ptr [ecx + VALUE]
#define ADC_R11D_FROM_PTR_EDX_(VALUE) adc r11d, dword ptr [edx + VALUE]
#define ADC_R11D_FROM_PTR_EDI_(VALUE) adc r11d, dword ptr [edi + VALUE]
#define ADC_R11D_FROM_PTR_ESI_(VALUE) adc r11d, dword ptr [esi + VALUE]
#define ADC_R11D_FROM_PTR_EBP_(VALUE) adc r11d, dword ptr [ebp + VALUE]
#define ADC_R11D_FROM_PTR_ESP_(VALUE) adc r11d, dword ptr [esp + VALUE]

#define ADC_R12D_FROM_PTR_RAX_(VALUE) adc r12d, dword ptr [rax + VALUE]
#define ADC_R12D_FROM_PTR_RBX_(VALUE) adc r12d, dword ptr [rbx + VALUE]
#define ADC_R12D_FROM_PTR_RCX_(VALUE) adc r12d, dword ptr [rcx + VALUE]
#define ADC_R12D_FROM_PTR_RDX_(VALUE) adc r12d, dword ptr [rdx + VALUE]
#define ADC_R12D_FROM_PTR_RDI_(VALUE) adc r12d, dword ptr [rdi + VALUE]
#define ADC_R12D_FROM_PTR_RSI_(VALUE) adc r12d, dword ptr [rsi + VALUE]
#define ADC_R12D_FROM_PTR_RBP_(VALUE) adc r12d, dword ptr [rbp + VALUE]
#define ADC_R12D_FROM_PTR_RSP_(VALUE) adc r12d, dword ptr [rsp + VALUE]
#define ADC_R12D_FROM_PTR_R8_(VALUE) adc r12d, dword ptr [r8 + VALUE]
#define ADC_R12D_FROM_PTR_R9_(VALUE) adc r12d, dword ptr [r9 + VALUE]
#define ADC_R12D_FROM_PTR_R10_(VALUE) adc r12d, dword ptr [r10 + VALUE]
#define ADC_R12D_FROM_PTR_R11_(VALUE) adc r12d, dword ptr [r11 + VALUE]
#define ADC_R12D_FROM_PTR_R12_(VALUE) adc r12d, dword ptr [r12 + VALUE]
#define ADC_R12D_FROM_PTR_R13_(VALUE) adc r12d, dword ptr [r13 + VALUE]
#define ADC_R12D_FROM_PTR_R14_(VALUE) adc r12d, dword ptr [r14 + VALUE]
#define ADC_R12D_FROM_PTR_R15_(VALUE) adc r12d, dword ptr [r15 + VALUE]
#define ADC_R12D_FROM_PTR_EAX_(VALUE) adc r12d, dword ptr [eax + VALUE]
#define ADC_R12D_FROM_PTR_EBX_(VALUE) adc r12d, dword ptr [ebx + VALUE]
#define ADC_R12D_FROM_PTR_ECX_(VALUE) adc r12d, dword ptr [ecx + VALUE]
#define ADC_R12D_FROM_PTR_EDX_(VALUE) adc r12d, dword ptr [edx + VALUE]
#define ADC_R12D_FROM_PTR_EDI_(VALUE) adc r12d, dword ptr [edi + VALUE]
#define ADC_R12D_FROM_PTR_ESI_(VALUE) adc r12d, dword ptr [esi + VALUE]
#define ADC_R12D_FROM_PTR_EBP_(VALUE) adc r12d, dword ptr [ebp + VALUE]
#define ADC_R12D_FROM_PTR_ESP_(VALUE) adc r12d, dword ptr [esp + VALUE]

#define ADC_R13D_FROM_PTR_RAX_(VALUE) adc r13d, dword ptr [rax + VALUE]
#define ADC_R13D_FROM_PTR_RBX_(VALUE) adc r13d, dword ptr [rbx + VALUE]
#define ADC_R13D_FROM_PTR_RCX_(VALUE) adc r13d, dword ptr [rcx + VALUE]
#define ADC_R13D_FROM_PTR_RDX_(VALUE) adc r13d, dword ptr [rdx + VALUE]
#define ADC_R13D_FROM_PTR_RDI_(VALUE) adc r13d, dword ptr [rdi + VALUE]
#define ADC_R13D_FROM_PTR_RSI_(VALUE) adc r13d, dword ptr [rsi + VALUE]
#define ADC_R13D_FROM_PTR_RBP_(VALUE) adc r13d, dword ptr [rbp + VALUE]
#define ADC_R13D_FROM_PTR_RSP_(VALUE) adc r13d, dword ptr [rsp + VALUE]
#define ADC_R13D_FROM_PTR_R8_(VALUE) adc r13d, dword ptr [r8 + VALUE]
#define ADC_R13D_FROM_PTR_R9_(VALUE) adc r13d, dword ptr [r9 + VALUE]
#define ADC_R13D_FROM_PTR_R10_(VALUE) adc r13d, dword ptr [r10 + VALUE]
#define ADC_R13D_FROM_PTR_R11_(VALUE) adc r13d, dword ptr [r11 + VALUE]
#define ADC_R13D_FROM_PTR_R12_(VALUE) adc r13d, dword ptr [r12 + VALUE]
#define ADC_R13D_FROM_PTR_R13_(VALUE) adc r13d, dword ptr [r13 + VALUE]
#define ADC_R13D_FROM_PTR_R14_(VALUE) adc r13d, dword ptr [r14 + VALUE]
#define ADC_R13D_FROM_PTR_R15_(VALUE) adc r13d, dword ptr [r15 + VALUE]
#define ADC_R13D_FROM_PTR_EAX_(VALUE) adc r13d, dword ptr [eax + VALUE]
#define ADC_R13D_FROM_PTR_EBX_(VALUE) adc r13d, dword ptr [ebx + VALUE]
#define ADC_R13D_FROM_PTR_ECX_(VALUE) adc r13d, dword ptr [ecx + VALUE]
#define ADC_R13D_FROM_PTR_EDX_(VALUE) adc r13d, dword ptr [edx + VALUE]
#define ADC_R13D_FROM_PTR_EDI_(VALUE) adc r13d, dword ptr [edi + VALUE]
#define ADC_R13D_FROM_PTR_ESI_(VALUE) adc r13d, dword ptr [esi + VALUE]
#define ADC_R13D_FROM_PTR_EBP_(VALUE) adc r13d, dword ptr [ebp + VALUE]
#define ADC_R13D_FROM_PTR_ESP_(VALUE) adc r13d, dword ptr [esp + VALUE]

#define ADC_R14D_FROM_PTR_RAX_(VALUE) adc r14d, dword ptr [rax + VALUE]
#define ADC_R14D_FROM_PTR_RBX_(VALUE) adc r14d, dword ptr [rbx + VALUE]
#define ADC_R14D_FROM_PTR_RCX_(VALUE) adc r14d, dword ptr [rcx + VALUE]
#define ADC_R14D_FROM_PTR_RDX_(VALUE) adc r14d, dword ptr [rdx + VALUE]
#define ADC_R14D_FROM_PTR_RDI_(VALUE) adc r14d, dword ptr [rdi + VALUE]
#define ADC_R14D_FROM_PTR_RSI_(VALUE) adc r14d, dword ptr [rsi + VALUE]
#define ADC_R14D_FROM_PTR_RBP_(VALUE) adc r14d, dword ptr [rbp + VALUE]
#define ADC_R14D_FROM_PTR_RSP_(VALUE) adc r14d, dword ptr [rsp + VALUE]
#define ADC_R14D_FROM_PTR_R8_(VALUE) adc r14d, dword ptr [r8 + VALUE]
#define ADC_R14D_FROM_PTR_R9_(VALUE) adc r14d, dword ptr [r9 + VALUE]
#define ADC_R14D_FROM_PTR_R10_(VALUE) adc r14d, dword ptr [r10 + VALUE]
#define ADC_R14D_FROM_PTR_R11_(VALUE) adc r14d, dword ptr [r11 + VALUE]
#define ADC_R14D_FROM_PTR_R12_(VALUE) adc r14d, dword ptr [r12 + VALUE]
#define ADC_R14D_FROM_PTR_R13_(VALUE) adc r14d, dword ptr [r13 + VALUE]
#define ADC_R14D_FROM_PTR_R14_(VALUE) adc r14d, dword ptr [r14 + VALUE]
#define ADC_R14D_FROM_PTR_R15_(VALUE) adc r14d, dword ptr [r15 + VALUE]
#define ADC_R14D_FROM_PTR_EAX_(VALUE) adc r14d, dword ptr [eax + VALUE]
#define ADC_R14D_FROM_PTR_EBX_(VALUE) adc r14d, dword ptr [ebx + VALUE]
#define ADC_R14D_FROM_PTR_ECX_(VALUE) adc r14d, dword ptr [ecx + VALUE]
#define ADC_R14D_FROM_PTR_EDX_(VALUE) adc r14d, dword ptr [edx + VALUE]
#define ADC_R14D_FROM_PTR_EDI_(VALUE) adc r14d, dword ptr [edi + VALUE]
#define ADC_R14D_FROM_PTR_ESI_(VALUE) adc r14d, dword ptr [esi + VALUE]
#define ADC_R14D_FROM_PTR_EBP_(VALUE) adc r14d, dword ptr [ebp + VALUE]
#define ADC_R14D_FROM_PTR_ESP_(VALUE) adc r14d, dword ptr [esp + VALUE]

#define ADC_R15D_FROM_PTR_RAX_(VALUE) adc r15d, dword ptr [rax + VALUE]
#define ADC_R15D_FROM_PTR_RBX_(VALUE) adc r15d, dword ptr [rbx + VALUE]
#define ADC_R15D_FROM_PTR_RCX_(VALUE) adc r15d, dword ptr [rcx + VALUE]
#define ADC_R15D_FROM_PTR_RDX_(VALUE) adc r15d, dword ptr [rdx + VALUE]
#define ADC_R15D_FROM_PTR_RDI_(VALUE) adc r15d, dword ptr [rdi + VALUE]
#define ADC_R15D_FROM_PTR_RSI_(VALUE) adc r15d, dword ptr [rsi + VALUE]
#define ADC_R15D_FROM_PTR_RBP_(VALUE) adc r15d, dword ptr [rbp + VALUE]
#define ADC_R15D_FROM_PTR_RSP_(VALUE) adc r15d, dword ptr [rsp + VALUE]
#define ADC_R15D_FROM_PTR_R8_(VALUE) adc r15d, dword ptr [r8 + VALUE]
#define ADC_R15D_FROM_PTR_R9_(VALUE) adc r15d, dword ptr [r9 + VALUE]
#define ADC_R15D_FROM_PTR_R10_(VALUE) adc r15d, dword ptr [r10 + VALUE]
#define ADC_R15D_FROM_PTR_R11_(VALUE) adc r15d, dword ptr [r11 + VALUE]
#define ADC_R15D_FROM_PTR_R12_(VALUE) adc r15d, dword ptr [r12 + VALUE]
#define ADC_R15D_FROM_PTR_R13_(VALUE) adc r15d, dword ptr [r13 + VALUE]
#define ADC_R15D_FROM_PTR_R14_(VALUE) adc r15d, dword ptr [r14 + VALUE]
#define ADC_R15D_FROM_PTR_R15_(VALUE) adc r15d, dword ptr [r15 + VALUE]
#define ADC_R15D_FROM_PTR_EAX_(VALUE) adc r15d, dword ptr [eax + VALUE]
#define ADC_R15D_FROM_PTR_EBX_(VALUE) adc r15d, dword ptr [ebx + VALUE]
#define ADC_R15D_FROM_PTR_ECX_(VALUE) adc r15d, dword ptr [ecx + VALUE]
#define ADC_R15D_FROM_PTR_EDX_(VALUE) adc r15d, dword ptr [edx + VALUE]
#define ADC_R15D_FROM_PTR_EDI_(VALUE) adc r15d, dword ptr [edi + VALUE]
#define ADC_R15D_FROM_PTR_ESI_(VALUE) adc r15d, dword ptr [esi + VALUE]
#define ADC_R15D_FROM_PTR_EBP_(VALUE) adc r15d, dword ptr [ebp + VALUE]
#define ADC_R15D_FROM_PTR_ESP_(VALUE) adc r15d, dword ptr [esp + VALUE]

#define ADC_EAX_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], eax
#define ADC_EAX_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], eax
#define ADC_EAX_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], eax
#define ADC_EAX_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], eax
#define ADC_EAX_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], eax
#define ADC_EAX_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], eax
#define ADC_EAX_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], eax
#define ADC_EAX_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], eax
#define ADC_EAX_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], eax
#define ADC_EAX_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], eax
#define ADC_EAX_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], eax
#define ADC_EAX_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], eax
#define ADC_EAX_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], eax
#define ADC_EAX_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], eax
#define ADC_EAX_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], eax
#define ADC_EAX_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], eax
#define ADC_EAX_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], eax
#define ADC_EAX_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], eax
#define ADC_EAX_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], eax
#define ADC_EAX_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], eax
#define ADC_EAX_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], eax
#define ADC_EAX_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], eax
#define ADC_EAX_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], eax
#define ADC_EAX_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], eax

#define ADC_EBX_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], ebx
#define ADC_EBX_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], ebx
#define ADC_EBX_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], ebx
#define ADC_EBX_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], ebx
#define ADC_EBX_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], ebx
#define ADC_EBX_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], ebx
#define ADC_EBX_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], ebx
#define ADC_EBX_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], ebx
#define ADC_EBX_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], ebx
#define ADC_EBX_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], ebx
#define ADC_EBX_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], ebx
#define ADC_EBX_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], ebx
#define ADC_EBX_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], ebx
#define ADC_EBX_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], ebx
#define ADC_EBX_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], ebx
#define ADC_EBX_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], ebx
#define ADC_EBX_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], ebx
#define ADC_EBX_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], ebx
#define ADC_EBX_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], ebx
#define ADC_EBX_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], ebx
#define ADC_EBX_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], ebx
#define ADC_EBX_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], ebx
#define ADC_EBX_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], ebx
#define ADC_EBX_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], ebx

#define ADC_ECX_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], ecx
#define ADC_ECX_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], ecx
#define ADC_ECX_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], ecx
#define ADC_ECX_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], ecx
#define ADC_ECX_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], ecx
#define ADC_ECX_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], ecx
#define ADC_ECX_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], ecx
#define ADC_ECX_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], ecx
#define ADC_ECX_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], ecx
#define ADC_ECX_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], ecx
#define ADC_ECX_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], ecx
#define ADC_ECX_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], ecx
#define ADC_ECX_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], ecx
#define ADC_ECX_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], ecx
#define ADC_ECX_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], ecx
#define ADC_ECX_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], ecx
#define ADC_ECX_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], ecx
#define ADC_ECX_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], ecx
#define ADC_ECX_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], ecx
#define ADC_ECX_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], ecx
#define ADC_ECX_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], ecx
#define ADC_ECX_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], ecx
#define ADC_ECX_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], ecx
#define ADC_ECX_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], ecx

#define ADC_EDX_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], edx
#define ADC_EDX_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], edx
#define ADC_EDX_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], edx
#define ADC_EDX_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], edx
#define ADC_EDX_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], edx
#define ADC_EDX_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], edx
#define ADC_EDX_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], edx
#define ADC_EDX_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], edx
#define ADC_EDX_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], edx
#define ADC_EDX_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], edx
#define ADC_EDX_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], edx
#define ADC_EDX_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], edx
#define ADC_EDX_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], edx
#define ADC_EDX_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], edx
#define ADC_EDX_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], edx
#define ADC_EDX_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], edx
#define ADC_EDX_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], edx
#define ADC_EDX_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], edx
#define ADC_EDX_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], edx
#define ADC_EDX_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], edx
#define ADC_EDX_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], edx
#define ADC_EDX_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], edx
#define ADC_EDX_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], edx
#define ADC_EDX_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], edx

#define ADC_EDI_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], edi
#define ADC_EDI_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], edi
#define ADC_EDI_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], edi
#define ADC_EDI_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], edi
#define ADC_EDI_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], edi
#define ADC_EDI_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], edi
#define ADC_EDI_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], edi
#define ADC_EDI_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], edi
#define ADC_EDI_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], edi
#define ADC_EDI_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], edi
#define ADC_EDI_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], edi
#define ADC_EDI_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], edi
#define ADC_EDI_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], edi
#define ADC_EDI_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], edi
#define ADC_EDI_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], edi
#define ADC_EDI_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], edi
#define ADC_EDI_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], edi
#define ADC_EDI_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], edi
#define ADC_EDI_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], edi
#define ADC_EDI_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], edi
#define ADC_EDI_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], edi
#define ADC_EDI_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], edi
#define ADC_EDI_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], edi
#define ADC_EDI_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], edi

#define ADC_ESI_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], esi
#define ADC_ESI_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], esi
#define ADC_ESI_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], esi
#define ADC_ESI_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], esi
#define ADC_ESI_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], esi
#define ADC_ESI_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], esi
#define ADC_ESI_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], esi
#define ADC_ESI_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], esi
#define ADC_ESI_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], esi
#define ADC_ESI_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], esi
#define ADC_ESI_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], esi
#define ADC_ESI_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], esi
#define ADC_ESI_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], esi
#define ADC_ESI_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], esi
#define ADC_ESI_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], esi
#define ADC_ESI_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], esi
#define ADC_ESI_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], esi
#define ADC_ESI_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], esi
#define ADC_ESI_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], esi
#define ADC_ESI_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], esi
#define ADC_ESI_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], esi
#define ADC_ESI_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], esi
#define ADC_ESI_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], esi
#define ADC_ESI_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], esi

#define ADC_EBP_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], ebp
#define ADC_EBP_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], ebp
#define ADC_EBP_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], ebp
#define ADC_EBP_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], ebp
#define ADC_EBP_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], ebp
#define ADC_EBP_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], ebp
#define ADC_EBP_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], ebp
#define ADC_EBP_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], ebp
#define ADC_EBP_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], ebp
#define ADC_EBP_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], ebp
#define ADC_EBP_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], ebp
#define ADC_EBP_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], ebp
#define ADC_EBP_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], ebp
#define ADC_EBP_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], ebp
#define ADC_EBP_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], ebp
#define ADC_EBP_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], ebp
#define ADC_EBP_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], ebp
#define ADC_EBP_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], ebp
#define ADC_EBP_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], ebp
#define ADC_EBP_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], ebp
#define ADC_EBP_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], ebp
#define ADC_EBP_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], ebp
#define ADC_EBP_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], ebp
#define ADC_EBP_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], ebp

#define ADC_ESP_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], esp
#define ADC_ESP_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], esp
#define ADC_ESP_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], esp
#define ADC_ESP_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], esp
#define ADC_ESP_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], esp
#define ADC_ESP_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], esp
#define ADC_ESP_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], esp
#define ADC_ESP_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], esp
#define ADC_ESP_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], esp
#define ADC_ESP_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], esp
#define ADC_ESP_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], esp
#define ADC_ESP_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], esp
#define ADC_ESP_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], esp
#define ADC_ESP_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], esp
#define ADC_ESP_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], esp
#define ADC_ESP_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], esp
#define ADC_ESP_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], esp
#define ADC_ESP_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], esp
#define ADC_ESP_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], esp
#define ADC_ESP_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], esp
#define ADC_ESP_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], esp
#define ADC_ESP_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], esp
#define ADC_ESP_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], esp
#define ADC_ESP_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], esp

#define ADC_R8D_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], r8d
#define ADC_R8D_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], r8d
#define ADC_R8D_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], r8d
#define ADC_R8D_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], r8d
#define ADC_R8D_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], r8d
#define ADC_R8D_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], r8d
#define ADC_R8D_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], r8d
#define ADC_R8D_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], r8d
#define ADC_R8D_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], r8d
#define ADC_R8D_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], r8d
#define ADC_R8D_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], r8d
#define ADC_R8D_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], r8d
#define ADC_R8D_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], r8d
#define ADC_R8D_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], r8d
#define ADC_R8D_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], r8d
#define ADC_R8D_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], r8d
#define ADC_R8D_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], r8d
#define ADC_R8D_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], r8d
#define ADC_R8D_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], r8d
#define ADC_R8D_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], r8d
#define ADC_R8D_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], r8d
#define ADC_R8D_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], r8d
#define ADC_R8D_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], r8d
#define ADC_R8D_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], r8d

#define ADC_R9D_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], r9d
#define ADC_R9D_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], r9d
#define ADC_R9D_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], r9d
#define ADC_R9D_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], r9d
#define ADC_R9D_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], r9d
#define ADC_R9D_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], r9d
#define ADC_R9D_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], r9d
#define ADC_R9D_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], r9d
#define ADC_R9D_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], r9d
#define ADC_R9D_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], r9d
#define ADC_R9D_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], r9d
#define ADC_R9D_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], r9d
#define ADC_R9D_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], r9d
#define ADC_R9D_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], r9d
#define ADC_R9D_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], r9d
#define ADC_R9D_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], r9d
#define ADC_R9D_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], r9d
#define ADC_R9D_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], r9d
#define ADC_R9D_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], r9d
#define ADC_R9D_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], r9d
#define ADC_R9D_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], r9d
#define ADC_R9D_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], r9d
#define ADC_R9D_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], r9d
#define ADC_R9D_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], r9d

#define ADC_R10D_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], r10d
#define ADC_R10D_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], r10d
#define ADC_R10D_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], r10d
#define ADC_R10D_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], r10d
#define ADC_R10D_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], r10d
#define ADC_R10D_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], r10d
#define ADC_R10D_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], r10d
#define ADC_R10D_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], r10d
#define ADC_R10D_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], r10d
#define ADC_R10D_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], r10d
#define ADC_R10D_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], r10d
#define ADC_R10D_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], r10d
#define ADC_R10D_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], r10d
#define ADC_R10D_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], r10d
#define ADC_R10D_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], r10d
#define ADC_R10D_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], r10d
#define ADC_R10D_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], r10d
#define ADC_R10D_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], r10d
#define ADC_R10D_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], r10d
#define ADC_R10D_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], r10d
#define ADC_R10D_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], r10d
#define ADC_R10D_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], r10d
#define ADC_R10D_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], r10d
#define ADC_R10D_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], r10d

#define ADC_R11D_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], r11d
#define ADC_R11D_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], r11d
#define ADC_R11D_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], r11d
#define ADC_R11D_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], r11d
#define ADC_R11D_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], r11d
#define ADC_R11D_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], r11d
#define ADC_R11D_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], r11d
#define ADC_R11D_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], r11d
#define ADC_R11D_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], r11d
#define ADC_R11D_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], r11d
#define ADC_R11D_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], r11d
#define ADC_R11D_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], r11d
#define ADC_R11D_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], r11d
#define ADC_R11D_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], r11d
#define ADC_R11D_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], r11d
#define ADC_R11D_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], r11d
#define ADC_R11D_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], r11d
#define ADC_R11D_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], r11d
#define ADC_R11D_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], r11d
#define ADC_R11D_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], r11d
#define ADC_R11D_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], r11d
#define ADC_R11D_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], r11d
#define ADC_R11D_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], r11d
#define ADC_R11D_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], r11d

#define ADC_R12D_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], r12d
#define ADC_R12D_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], r12d
#define ADC_R12D_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], r12d
#define ADC_R12D_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], r12d
#define ADC_R12D_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], r12d
#define ADC_R12D_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], r12d
#define ADC_R12D_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], r12d
#define ADC_R12D_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], r12d
#define ADC_R12D_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], r12d
#define ADC_R12D_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], r12d
#define ADC_R12D_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], r12d
#define ADC_R12D_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], r12d
#define ADC_R12D_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], r12d
#define ADC_R12D_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], r12d
#define ADC_R12D_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], r12d
#define ADC_R12D_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], r12d
#define ADC_R12D_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], r12d
#define ADC_R12D_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], r12d
#define ADC_R12D_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], r12d
#define ADC_R12D_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], r12d
#define ADC_R12D_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], r12d
#define ADC_R12D_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], r12d
#define ADC_R12D_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], r12d
#define ADC_R12D_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], r12d

#define ADC_R13D_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], r13d
#define ADC_R13D_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], r13d
#define ADC_R13D_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], r13d
#define ADC_R13D_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], r13d
#define ADC_R13D_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], r13d
#define ADC_R13D_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], r13d
#define ADC_R13D_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], r13d
#define ADC_R13D_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], r13d
#define ADC_R13D_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], r13d
#define ADC_R13D_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], r13d
#define ADC_R13D_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], r13d
#define ADC_R13D_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], r13d
#define ADC_R13D_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], r13d
#define ADC_R13D_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], r13d
#define ADC_R13D_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], r13d
#define ADC_R13D_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], r13d
#define ADC_R13D_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], r13d
#define ADC_R13D_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], r13d
#define ADC_R13D_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], r13d
#define ADC_R13D_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], r13d
#define ADC_R13D_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], r13d
#define ADC_R13D_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], r13d
#define ADC_R13D_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], r13d
#define ADC_R13D_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], r13d

#define ADC_R14D_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], r14d
#define ADC_R14D_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], r14d
#define ADC_R14D_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], r14d
#define ADC_R14D_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], r14d
#define ADC_R14D_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], r14d
#define ADC_R14D_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], r14d
#define ADC_R14D_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], r14d
#define ADC_R14D_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], r14d
#define ADC_R14D_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], r14d
#define ADC_R14D_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], r14d
#define ADC_R14D_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], r14d
#define ADC_R14D_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], r14d
#define ADC_R14D_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], r14d
#define ADC_R14D_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], r14d
#define ADC_R14D_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], r14d
#define ADC_R14D_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], r14d
#define ADC_R14D_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], r14d
#define ADC_R14D_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], r14d
#define ADC_R14D_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], r14d
#define ADC_R14D_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], r14d
#define ADC_R14D_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], r14d
#define ADC_R14D_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], r14d
#define ADC_R14D_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], r14d
#define ADC_R14D_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], r14d

#define ADC_R15D_TO_PTR_RAX_(VALUE) adc dword ptr [rax + VALUE], r15d
#define ADC_R15D_TO_PTR_RBX_(VALUE) adc dword ptr [rbx + VALUE], r15d
#define ADC_R15D_TO_PTR_RCX_(VALUE) adc dword ptr [rcx + VALUE], r15d
#define ADC_R15D_TO_PTR_RDX_(VALUE) adc dword ptr [rdx + VALUE], r15d
#define ADC_R15D_TO_PTR_RDI_(VALUE) adc dword ptr [rdi + VALUE], r15d
#define ADC_R15D_TO_PTR_RSI_(VALUE) adc dword ptr [rsi + VALUE], r15d
#define ADC_R15D_TO_PTR_RBP_(VALUE) adc dword ptr [rbp + VALUE], r15d
#define ADC_R15D_TO_PTR_RSP_(VALUE) adc dword ptr [rsp + VALUE], r15d
#define ADC_R15D_TO_PTR_R8_(VALUE) adc dword ptr [r8 + VALUE], r15d
#define ADC_R15D_TO_PTR_R9_(VALUE) adc dword ptr [r9 + VALUE], r15d
#define ADC_R15D_TO_PTR_R10_(VALUE) adc dword ptr [r10 + VALUE], r15d
#define ADC_R15D_TO_PTR_R11_(VALUE) adc dword ptr [r11 + VALUE], r15d
#define ADC_R15D_TO_PTR_R12_(VALUE) adc dword ptr [r12 + VALUE], r15d
#define ADC_R15D_TO_PTR_R13_(VALUE) adc dword ptr [r13 + VALUE], r15d
#define ADC_R15D_TO_PTR_R14_(VALUE) adc dword ptr [r14 + VALUE], r15d
#define ADC_R15D_TO_PTR_R15_(VALUE) adc dword ptr [r15 + VALUE], r15d
#define ADC_R15D_TO_PTR_EAX_(VALUE) adc dword ptr [eax + VALUE], r15d
#define ADC_R15D_TO_PTR_EBX_(VALUE) adc dword ptr [ebx + VALUE], r15d
#define ADC_R15D_TO_PTR_ECX_(VALUE) adc dword ptr [ecx + VALUE], r15d
#define ADC_R15D_TO_PTR_EDX_(VALUE) adc dword ptr [edx + VALUE], r15d
#define ADC_R15D_TO_PTR_EDI_(VALUE) adc dword ptr [edi + VALUE], r15d
#define ADC_R15D_TO_PTR_ESI_(VALUE) adc dword ptr [esi + VALUE], r15d
#define ADC_R15D_TO_PTR_EBP_(VALUE) adc dword ptr [ebp + VALUE], r15d
#define ADC_R15D_TO_PTR_ESP_(VALUE) adc dword ptr [esp + VALUE], r15d
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
