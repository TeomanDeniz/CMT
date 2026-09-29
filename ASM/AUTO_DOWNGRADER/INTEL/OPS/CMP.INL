#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _CMP_RAX_ _CMP_EAX_
#define _CMP_RAX_RAX _CMP_EAX_EAX
#define _CMP_RAX_RBP _CMP_EAX_EBP
#define _CMP_RAX_RBX _CMP_EAX_EBX
#define _CMP_RAX_RCX _CMP_EAX_ECX
#define _CMP_RAX_RDI _CMP_EAX_EDI
#define _CMP_RAX_RDX _CMP_EAX_EDX
#define _CMP_RAX_RSI _CMP_EAX_ESI
#define _CMP_RAX_RSP _CMP_EAX_ESP

#define _CMP_RBP_ _CMP_EBP_
#define _CMP_RBP_RAX _CMP_EBP_EAX
#define _CMP_RBP_RBP _CMP_EBP_EBP
#define _CMP_RBP_RBX _CMP_EBP_EBX
#define _CMP_RBP_RCX _CMP_EBP_ECX
#define _CMP_RBP_RDI _CMP_EBP_EDI
#define _CMP_RBP_RDX _CMP_EBP_EDX
#define _CMP_RBP_RSI _CMP_EBP_ESI
#define _CMP_RBP_RSP _CMP_EBP_ESP

#define _CMP_RBX_ _CMP_EBX_
#define _CMP_RBX_RAX _CMP_EBX_EAX
#define _CMP_RBX_RBP _CMP_EBX_EBP
#define _CMP_RBX_RBX _CMP_EBX_EBX
#define _CMP_RBX_RCX _CMP_EBX_ECX
#define _CMP_RBX_RDI _CMP_EBX_EDI
#define _CMP_RBX_RDX _CMP_EBX_EDX
#define _CMP_RBX_RSI _CMP_EBX_ESI
#define _CMP_RBX_RSP _CMP_EBX_ESP

#define _CMP_RCX_ _CMP_ECX_
#define _CMP_RCX_RAX _CMP_ECX_EAX
#define _CMP_RCX_RBP _CMP_ECX_EBP
#define _CMP_RCX_RBX _CMP_ECX_EBX
#define _CMP_RCX_RCX _CMP_ECX_ECX
#define _CMP_RCX_RDI _CMP_ECX_EDI
#define _CMP_RCX_RDX _CMP_ECX_EDX
#define _CMP_RCX_RSI _CMP_ECX_ESI
#define _CMP_RCX_RSP _CMP_ECX_ESP

#define _CMP_RDI_ _CMP_EDI_
#define _CMP_RDI_RAX _CMP_EDI_EAX
#define _CMP_RDI_RBP _CMP_EDI_EBP
#define _CMP_RDI_RBX _CMP_EDI_EBX
#define _CMP_RDI_RCX _CMP_EDI_ECX
#define _CMP_RDI_RDI _CMP_EDI_EDI
#define _CMP_RDI_RDX _CMP_EDI_EDX
#define _CMP_RDI_RSI _CMP_EDI_ESI
#define _CMP_RDI_RSP _CMP_EDI_ESP

#define _CMP_RDX_ _CMP_EDX_
#define _CMP_RDX_RAX _CMP_EDX_EAX
#define _CMP_RDX_RBP _CMP_EDX_EBP
#define _CMP_RDX_RBX _CMP_EDX_EBX
#define _CMP_RDX_RCX _CMP_EDX_ECX
#define _CMP_RDX_RDI _CMP_EDX_EDI
#define _CMP_RDX_RDX _CMP_EDX_EDX
#define _CMP_RDX_RSI _CMP_EDX_ESI
#define _CMP_RDX_RSP _CMP_EDX_ESP

#define _CMP_RSI_ _CMP_ESI_
#define _CMP_RSI_RAX _CMP_ESI_EAX
#define _CMP_RSI_RBP _CMP_ESI_EBP
#define _CMP_RSI_RBX _CMP_ESI_EBX
#define _CMP_RSI_RCX _CMP_ESI_ECX
#define _CMP_RSI_RDI _CMP_ESI_EDI
#define _CMP_RSI_RDX _CMP_ESI_EDX
#define _CMP_RSI_RSI _CMP_ESI_ESI
#define _CMP_RSI_RSP _CMP_ESI_ESP

#define _CMP_RSP_ _CMP_ESP_
#define _CMP_RSP_RAX _CMP_ESP_EAX
#define _CMP_RSP_RBP _CMP_ESP_EBP
#define _CMP_RSP_RBX _CMP_ESP_EBX
#define _CMP_RSP_RCX _CMP_ESP_ECX
#define _CMP_RSP_RDI _CMP_ESP_EDI
#define _CMP_RSP_RDX _CMP_ESP_EDX
#define _CMP_RSP_RSI _CMP_ESP_ESI
#define _CMP_RSP_RSP _CMP_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _CMP_EAX_ _CMP_AX_
#define _CMP_EAX_EAX _CMP_AX_AX
#define _CMP_EAX_EBP _CMP_AX_BP
#define _CMP_EAX_EBX _CMP_AX_BX
#define _CMP_EAX_ECX _CMP_AX_CX
#define _CMP_EAX_EDI _CMP_AX_DI
#define _CMP_EAX_EDX _CMP_AX_DX
#define _CMP_EAX_ESI _CMP_AX_SI
#define _CMP_EAX_ESP _CMP_AX_SP

#define _CMP_EBP_ _CMP_BP_
#define _CMP_EBP_EAX _CMP_BP_AX
#define _CMP_EBP_EBP _CMP_BP_BP
#define _CMP_EBP_EBX _CMP_BP_BX
#define _CMP_EBP_ECX _CMP_BP_CX
#define _CMP_EBP_EDI _CMP_BP_DI
#define _CMP_EBP_EDX _CMP_BP_DX
#define _CMP_EBP_ESI _CMP_BP_SI
#define _CMP_EBP_ESP _CMP_BP_SP

#define _CMP_EBX_ _CMP_BX_
#define _CMP_EBX_EAX _CMP_BX_AX
#define _CMP_EBX_EBP _CMP_BX_BP
#define _CMP_EBX_EBX _CMP_BX_BX
#define _CMP_EBX_ECX _CMP_BX_CX
#define _CMP_EBX_EDI _CMP_BX_DI
#define _CMP_EBX_EDX _CMP_BX_DX
#define _CMP_EBX_ESI _CMP_BX_SI
#define _CMP_EBX_ESP _CMP_BX_SP

#define _CMP_ECX_ _CMP_CX_
#define _CMP_ECX_EAX _CMP_CX_AX
#define _CMP_ECX_EBP _CMP_CX_BP
#define _CMP_ECX_EBX _CMP_CX_BX
#define _CMP_ECX_ECX _CMP_CX_CX
#define _CMP_ECX_EDI _CMP_CX_DI
#define _CMP_ECX_EDX _CMP_CX_DX
#define _CMP_ECX_ESI _CMP_CX_SI
#define _CMP_ECX_ESP _CMP_CX_SP

#define _CMP_EDI_ _CMP_DI_
#define _CMP_EDI_EAX _CMP_DI_AX
#define _CMP_EDI_EBP _CMP_DI_BP
#define _CMP_EDI_EBX _CMP_DI_BX
#define _CMP_EDI_ECX _CMP_DI_CX
#define _CMP_EDI_EDI _CMP_DI_DI
#define _CMP_EDI_EDX _CMP_DI_DX
#define _CMP_EDI_ESI _CMP_DI_SI
#define _CMP_EDI_ESP _CMP_DI_SP

#define _CMP_EDX_ _CMP_DX_
#define _CMP_EDX_EAX _CMP_DX_AX
#define _CMP_EDX_EBP _CMP_DX_BP
#define _CMP_EDX_EBX _CMP_DX_BX
#define _CMP_EDX_ECX _CMP_DX_CX
#define _CMP_EDX_EDI _CMP_DX_DI
#define _CMP_EDX_EDX _CMP_DX_DX
#define _CMP_EDX_ESI _CMP_DX_SI
#define _CMP_EDX_ESP _CMP_DX_SP

#define _CMP_ESI_ _CMP_SI_
#define _CMP_ESI_EAX _CMP_SI_AX
#define _CMP_ESI_EBP _CMP_SI_BP
#define _CMP_ESI_EBX _CMP_SI_BX
#define _CMP_ESI_ECX _CMP_SI_CX
#define _CMP_ESI_EDI _CMP_SI_DI
#define _CMP_ESI_EDX _CMP_SI_DX
#define _CMP_ESI_ESI _CMP_SI_SI
#define _CMP_ESI_ESP _CMP_SI_SP

#define _CMP_ESP_ _CMP_SP_
#define _CMP_ESP_EAX _CMP_SP_AX
#define _CMP_ESP_EBP _CMP_SP_BP
#define _CMP_ESP_EBX _CMP_SP_BX
#define _CMP_ESP_ECX _CMP_SP_CX
#define _CMP_ESP_EDI _CMP_SP_DI
#define _CMP_ESP_EDX _CMP_SP_DX
#define _CMP_ESP_ESI _CMP_SP_SI
#define _CMP_ESP_ESP _CMP_SP_SP
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
