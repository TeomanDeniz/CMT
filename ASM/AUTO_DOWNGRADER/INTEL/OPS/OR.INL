#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _OR_RAX_ _OR_EAX_
#define _OR_RAX_RAX _OR_EAX_EAX
#define _OR_RAX_RBP _OR_EAX_EBP
#define _OR_RAX_RBX _OR_EAX_EBX
#define _OR_RAX_RCX _OR_EAX_ECX
#define _OR_RAX_RDI _OR_EAX_EDI
#define _OR_RAX_RDX _OR_EAX_EDX
#define _OR_RAX_RSI _OR_EAX_ESI
#define _OR_RAX_RSP _OR_EAX_ESP

#define _OR_RBP_ _OR_EBP_
#define _OR_RBP_RAX _OR_EBP_EAX
#define _OR_RBP_RBP _OR_EBP_EBP
#define _OR_RBP_RBX _OR_EBP_EBX
#define _OR_RBP_RCX _OR_EBP_ECX
#define _OR_RBP_RDI _OR_EBP_EDI
#define _OR_RBP_RDX _OR_EBP_EDX
#define _OR_RBP_RSI _OR_EBP_ESI
#define _OR_RBP_RSP _OR_EBP_ESP

#define _OR_RBX_ _OR_EBX_
#define _OR_RBX_RAX _OR_EBX_EAX
#define _OR_RBX_RBP _OR_EBX_EBP
#define _OR_RBX_RBX _OR_EBX_EBX
#define _OR_RBX_RCX _OR_EBX_ECX
#define _OR_RBX_RDI _OR_EBX_EDI
#define _OR_RBX_RDX _OR_EBX_EDX
#define _OR_RBX_RSI _OR_EBX_ESI
#define _OR_RBX_RSP _OR_EBX_ESP

#define _OR_RCX_ _OR_ECX_
#define _OR_RCX_RAX _OR_ECX_EAX
#define _OR_RCX_RBP _OR_ECX_EBP
#define _OR_RCX_RBX _OR_ECX_EBX
#define _OR_RCX_RCX _OR_ECX_ECX
#define _OR_RCX_RDI _OR_ECX_EDI
#define _OR_RCX_RDX _OR_ECX_EDX
#define _OR_RCX_RSI _OR_ECX_ESI
#define _OR_RCX_RSP _OR_ECX_ESP

#define _OR_RDI_ _OR_EDI_
#define _OR_RDI_RAX _OR_EDI_EAX
#define _OR_RDI_RBP _OR_EDI_EBP
#define _OR_RDI_RBX _OR_EDI_EBX
#define _OR_RDI_RCX _OR_EDI_ECX
#define _OR_RDI_RDI _OR_EDI_EDI
#define _OR_RDI_RDX _OR_EDI_EDX
#define _OR_RDI_RSI _OR_EDI_ESI
#define _OR_RDI_RSP _OR_EDI_ESP

#define _OR_RDX_ _OR_EDX_
#define _OR_RDX_RAX _OR_EDX_EAX
#define _OR_RDX_RBP _OR_EDX_EBP
#define _OR_RDX_RBX _OR_EDX_EBX
#define _OR_RDX_RCX _OR_EDX_ECX
#define _OR_RDX_RDI _OR_EDX_EDI
#define _OR_RDX_RDX _OR_EDX_EDX
#define _OR_RDX_RSI _OR_EDX_ESI
#define _OR_RDX_RSP _OR_EDX_ESP

#define _OR_RSI_ _OR_ESI_
#define _OR_RSI_RAX _OR_ESI_EAX
#define _OR_RSI_RBP _OR_ESI_EBP
#define _OR_RSI_RBX _OR_ESI_EBX
#define _OR_RSI_RCX _OR_ESI_ECX
#define _OR_RSI_RDI _OR_ESI_EDI
#define _OR_RSI_RDX _OR_ESI_EDX
#define _OR_RSI_RSI _OR_ESI_ESI
#define _OR_RSI_RSP _OR_ESI_ESP

#define _OR_RSP_ _OR_ESP_
#define _OR_RSP_RAX _OR_ESP_EAX
#define _OR_RSP_RBP _OR_ESP_EBP
#define _OR_RSP_RBX _OR_ESP_EBX
#define _OR_RSP_RCX _OR_ESP_ECX
#define _OR_RSP_RDI _OR_ESP_EDI
#define _OR_RSP_RDX _OR_ESP_EDX
#define _OR_RSP_RSI _OR_ESP_ESI
#define _OR_RSP_RSP _OR_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _OR_EAX_ _OR_AX_
#define _OR_EAX_EAX _OR_AX_AX
#define _OR_EAX_EBP _OR_AX_BP
#define _OR_EAX_EBX _OR_AX_BX
#define _OR_EAX_ECX _OR_AX_CX
#define _OR_EAX_EDI _OR_AX_DI
#define _OR_EAX_EDX _OR_AX_DX
#define _OR_EAX_ESI _OR_AX_SI
#define _OR_EAX_ESP _OR_AX_SP

#define _OR_EBP_ _OR_BP_
#define _OR_EBP_EAX _OR_BP_AX
#define _OR_EBP_EBP _OR_BP_BP
#define _OR_EBP_EBX _OR_BP_BX
#define _OR_EBP_ECX _OR_BP_CX
#define _OR_EBP_EDI _OR_BP_DI
#define _OR_EBP_EDX _OR_BP_DX
#define _OR_EBP_ESI _OR_BP_SI
#define _OR_EBP_ESP _OR_BP_SP

#define _OR_EBX_ _OR_BX_
#define _OR_EBX_EAX _OR_BX_AX
#define _OR_EBX_EBP _OR_BX_BP
#define _OR_EBX_EBX _OR_BX_BX
#define _OR_EBX_ECX _OR_BX_CX
#define _OR_EBX_EDI _OR_BX_DI
#define _OR_EBX_EDX _OR_BX_DX
#define _OR_EBX_ESI _OR_BX_SI
#define _OR_EBX_ESP _OR_BX_SP

#define _OR_ECX_ _OR_CX_
#define _OR_ECX_EAX _OR_CX_AX
#define _OR_ECX_EBP _OR_CX_BP
#define _OR_ECX_EBX _OR_CX_BX
#define _OR_ECX_ECX _OR_CX_CX
#define _OR_ECX_EDI _OR_CX_DI
#define _OR_ECX_EDX _OR_CX_DX
#define _OR_ECX_ESI _OR_CX_SI
#define _OR_ECX_ESP _OR_CX_SP

#define _OR_EDI_ _OR_DI_
#define _OR_EDI_EAX _OR_DI_AX
#define _OR_EDI_EBP _OR_DI_BP
#define _OR_EDI_EBX _OR_DI_BX
#define _OR_EDI_ECX _OR_DI_CX
#define _OR_EDI_EDI _OR_DI_DI
#define _OR_EDI_EDX _OR_DI_DX
#define _OR_EDI_ESI _OR_DI_SI
#define _OR_EDI_ESP _OR_DI_SP

#define _OR_EDX_ _OR_DX_
#define _OR_EDX_EAX _OR_DX_AX
#define _OR_EDX_EBP _OR_DX_BP
#define _OR_EDX_EBX _OR_DX_BX
#define _OR_EDX_ECX _OR_DX_CX
#define _OR_EDX_EDI _OR_DX_DI
#define _OR_EDX_EDX _OR_DX_DX
#define _OR_EDX_ESI _OR_DX_SI
#define _OR_EDX_ESP _OR_DX_SP

#define _OR_ESI_ _OR_SI_
#define _OR_ESI_EAX _OR_SI_AX
#define _OR_ESI_EBP _OR_SI_BP
#define _OR_ESI_EBX _OR_SI_BX
#define _OR_ESI_ECX _OR_SI_CX
#define _OR_ESI_EDI _OR_SI_DI
#define _OR_ESI_EDX _OR_SI_DX
#define _OR_ESI_ESI _OR_SI_SI
#define _OR_ESI_ESP _OR_SI_SP

#define _OR_ESP_ _OR_SP_
#define _OR_ESP_EAX _OR_SP_AX
#define _OR_ESP_EBP _OR_SP_BP
#define _OR_ESP_EBX _OR_SP_BX
#define _OR_ESP_ECX _OR_SP_CX
#define _OR_ESP_EDI _OR_SP_DI
#define _OR_ESP_EDX _OR_SP_DX
#define _OR_ESP_ESI _OR_SP_SI
#define _OR_ESP_ESP _OR_SP_SP
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
