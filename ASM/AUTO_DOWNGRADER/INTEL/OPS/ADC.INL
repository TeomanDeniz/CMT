#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _ADC_RAX_ _ADC_EAX_
#define _ADC_RAX_RAX _ADC_EAX_EAX
#define _ADC_RAX_RBP _ADC_EAX_EBP
#define _ADC_RAX_RBX _ADC_EAX_EBX
#define _ADC_RAX_RCX _ADC_EAX_ECX
#define _ADC_RAX_RDI _ADC_EAX_EDI
#define _ADC_RAX_RDX _ADC_EAX_EDX
#define _ADC_RAX_RSI _ADC_EAX_ESI
#define _ADC_RAX_RSP _ADC_EAX_ESP

#define _ADC_RBP_ _ADC_EBP_
#define _ADC_RBP_RAX _ADC_EBP_EAX
#define _ADC_RBP_RBP _ADC_EBP_EBP
#define _ADC_RBP_RBX _ADC_EBP_EBX
#define _ADC_RBP_RCX _ADC_EBP_ECX
#define _ADC_RBP_RDI _ADC_EBP_EDI
#define _ADC_RBP_RDX _ADC_EBP_EDX
#define _ADC_RBP_RSI _ADC_EBP_ESI
#define _ADC_RBP_RSP _ADC_EBP_ESP

#define _ADC_RBX_ _ADC_EBX_
#define _ADC_RBX_RAX _ADC_EBX_EAX
#define _ADC_RBX_RBP _ADC_EBX_EBP
#define _ADC_RBX_RBX _ADC_EBX_EBX
#define _ADC_RBX_RCX _ADC_EBX_ECX
#define _ADC_RBX_RDI _ADC_EBX_EDI
#define _ADC_RBX_RDX _ADC_EBX_EDX
#define _ADC_RBX_RSI _ADC_EBX_ESI
#define _ADC_RBX_RSP _ADC_EBX_ESP

#define _ADC_RCX_ _ADC_ECX_
#define _ADC_RCX_RAX _ADC_ECX_EAX
#define _ADC_RCX_RBP _ADC_ECX_EBP
#define _ADC_RCX_RBX _ADC_ECX_EBX
#define _ADC_RCX_RCX _ADC_ECX_ECX
#define _ADC_RCX_RDI _ADC_ECX_EDI
#define _ADC_RCX_RDX _ADC_ECX_EDX
#define _ADC_RCX_RSI _ADC_ECX_ESI
#define _ADC_RCX_RSP _ADC_ECX_ESP

#define _ADC_RDI_ _ADC_EDI_
#define _ADC_RDI_RAX _ADC_EDI_EAX
#define _ADC_RDI_RBP _ADC_EDI_EBP
#define _ADC_RDI_RBX _ADC_EDI_EBX
#define _ADC_RDI_RCX _ADC_EDI_ECX
#define _ADC_RDI_RDI _ADC_EDI_EDI
#define _ADC_RDI_RDX _ADC_EDI_EDX
#define _ADC_RDI_RSI _ADC_EDI_ESI
#define _ADC_RDI_RSP _ADC_EDI_ESP

#define _ADC_RDX_ _ADC_EDX_
#define _ADC_RDX_RAX _ADC_EDX_EAX
#define _ADC_RDX_RBP _ADC_EDX_EBP
#define _ADC_RDX_RBX _ADC_EDX_EBX
#define _ADC_RDX_RCX _ADC_EDX_ECX
#define _ADC_RDX_RDI _ADC_EDX_EDI
#define _ADC_RDX_RDX _ADC_EDX_EDX
#define _ADC_RDX_RSI _ADC_EDX_ESI
#define _ADC_RDX_RSP _ADC_EDX_ESP

#define _ADC_RSI_ _ADC_ESI_
#define _ADC_RSI_RAX _ADC_ESI_EAX
#define _ADC_RSI_RBP _ADC_ESI_EBP
#define _ADC_RSI_RBX _ADC_ESI_EBX
#define _ADC_RSI_RCX _ADC_ESI_ECX
#define _ADC_RSI_RDI _ADC_ESI_EDI
#define _ADC_RSI_RDX _ADC_ESI_EDX
#define _ADC_RSI_RSI _ADC_ESI_ESI
#define _ADC_RSI_RSP _ADC_ESI_ESP

#define _ADC_RSP_ _ADC_ESP_
#define _ADC_RSP_RAX _ADC_ESP_EAX
#define _ADC_RSP_RBP _ADC_ESP_EBP
#define _ADC_RSP_RBX _ADC_ESP_EBX
#define _ADC_RSP_RCX _ADC_ESP_ECX
#define _ADC_RSP_RDI _ADC_ESP_EDI
#define _ADC_RSP_RDX _ADC_ESP_EDX
#define _ADC_RSP_RSI _ADC_ESP_ESI
#define _ADC_RSP_RSP _ADC_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _ADC_EAX_ _ADC_AX_
#define _ADC_EAX_EAX _ADC_AX_AX
#define _ADC_EAX_EBP _ADC_AX_BP
#define _ADC_EAX_EBX _ADC_AX_BX
#define _ADC_EAX_ECX _ADC_AX_CX
#define _ADC_EAX_EDI _ADC_AX_DI
#define _ADC_EAX_EDX _ADC_AX_DX
#define _ADC_EAX_ESI _ADC_AX_SI
#define _ADC_EAX_ESP _ADC_AX_SP

#define _ADC_EBP_ _ADC_BP_
#define _ADC_EBP_EAX _ADC_BP_AX
#define _ADC_EBP_EBP _ADC_BP_BP
#define _ADC_EBP_EBX _ADC_BP_BX
#define _ADC_EBP_ECX _ADC_BP_CX
#define _ADC_EBP_EDI _ADC_BP_DI
#define _ADC_EBP_EDX _ADC_BP_DX
#define _ADC_EBP_ESI _ADC_BP_SI
#define _ADC_EBP_ESP _ADC_BP_SP

#define _ADC_EBX_ _ADC_BX_
#define _ADC_EBX_EAX _ADC_BX_AX
#define _ADC_EBX_EBP _ADC_BX_BP
#define _ADC_EBX_EBX _ADC_BX_BX
#define _ADC_EBX_ECX _ADC_BX_CX
#define _ADC_EBX_EDI _ADC_BX_DI
#define _ADC_EBX_EDX _ADC_BX_DX
#define _ADC_EBX_ESI _ADC_BX_SI
#define _ADC_EBX_ESP _ADC_BX_SP

#define _ADC_ECX_ _ADC_CX_
#define _ADC_ECX_EAX _ADC_CX_AX
#define _ADC_ECX_EBP _ADC_CX_BP
#define _ADC_ECX_EBX _ADC_CX_BX
#define _ADC_ECX_ECX _ADC_CX_CX
#define _ADC_ECX_EDI _ADC_CX_DI
#define _ADC_ECX_EDX _ADC_CX_DX
#define _ADC_ECX_ESI _ADC_CX_SI
#define _ADC_ECX_ESP _ADC_CX_SP

#define _ADC_EDI_ _ADC_DI_
#define _ADC_EDI_EAX _ADC_DI_AX
#define _ADC_EDI_EBP _ADC_DI_BP
#define _ADC_EDI_EBX _ADC_DI_BX
#define _ADC_EDI_ECX _ADC_DI_CX
#define _ADC_EDI_EDI _ADC_DI_DI
#define _ADC_EDI_EDX _ADC_DI_DX
#define _ADC_EDI_ESI _ADC_DI_SI
#define _ADC_EDI_ESP _ADC_DI_SP

#define _ADC_EDX_ _ADC_DX_
#define _ADC_EDX_EAX _ADC_DX_AX
#define _ADC_EDX_EBP _ADC_DX_BP
#define _ADC_EDX_EBX _ADC_DX_BX
#define _ADC_EDX_ECX _ADC_DX_CX
#define _ADC_EDX_EDI _ADC_DX_DI
#define _ADC_EDX_EDX _ADC_DX_DX
#define _ADC_EDX_ESI _ADC_DX_SI
#define _ADC_EDX_ESP _ADC_DX_SP

#define _ADC_ESI_ _ADC_SI_
#define _ADC_ESI_EAX _ADC_SI_AX
#define _ADC_ESI_EBP _ADC_SI_BP
#define _ADC_ESI_EBX _ADC_SI_BX
#define _ADC_ESI_ECX _ADC_SI_CX
#define _ADC_ESI_EDI _ADC_SI_DI
#define _ADC_ESI_EDX _ADC_SI_DX
#define _ADC_ESI_ESI _ADC_SI_SI
#define _ADC_ESI_ESP _ADC_SI_SP

#define _ADC_ESP_ _ADC_SP_
#define _ADC_ESP_EAX _ADC_SP_AX
#define _ADC_ESP_EBP _ADC_SP_BP
#define _ADC_ESP_EBX _ADC_SP_BX
#define _ADC_ESP_ECX _ADC_SP_CX
#define _ADC_ESP_EDI _ADC_SP_DI
#define _ADC_ESP_EDX _ADC_SP_DX
#define _ADC_ESP_ESI _ADC_SP_SI
#define _ADC_ESP_ESP _ADC_SP_SP
#endif /* !__SYSTEM_32_BIT__ */
#endif /* !__SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
