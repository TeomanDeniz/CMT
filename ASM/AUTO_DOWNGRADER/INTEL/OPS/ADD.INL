#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _ADD_RAX_ _ADD_EAX_
#define _ADD_RAX_RAX _ADD_EAX_EAX
#define _ADD_RAX_RBP _ADD_EAX_EBP
#define _ADD_RAX_RBX _ADD_EAX_EBX
#define _ADD_RAX_RCX _ADD_EAX_ECX
#define _ADD_RAX_RDI _ADD_EAX_EDI
#define _ADD_RAX_RDX _ADD_EAX_EDX
#define _ADD_RAX_RSI _ADD_EAX_ESI
#define _ADD_RAX_RSP _ADD_EAX_ESP

#define _ADD_RBP_ _ADD_EBP_
#define _ADD_RBP_RAX _ADD_EBP_EAX
#define _ADD_RBP_RBP _ADD_EBP_EBP
#define _ADD_RBP_RBX _ADD_EBP_EBX
#define _ADD_RBP_RCX _ADD_EBP_ECX
#define _ADD_RBP_RDI _ADD_EBP_EDI
#define _ADD_RBP_RDX _ADD_EBP_EDX
#define _ADD_RBP_RSI _ADD_EBP_ESI
#define _ADD_RBP_RSP _ADD_EBP_ESP

#define _ADD_RBX_ _ADD_EBX_
#define _ADD_RBX_RAX _ADD_EBX_EAX
#define _ADD_RBX_RBP _ADD_EBX_EBP
#define _ADD_RBX_RBX _ADD_EBX_EBX
#define _ADD_RBX_RCX _ADD_EBX_ECX
#define _ADD_RBX_RDI _ADD_EBX_EDI
#define _ADD_RBX_RDX _ADD_EBX_EDX
#define _ADD_RBX_RSI _ADD_EBX_ESI
#define _ADD_RBX_RSP _ADD_EBX_ESP

#define _ADD_RCX_ _ADD_ECX_
#define _ADD_RCX_RAX _ADD_ECX_EAX
#define _ADD_RCX_RBP _ADD_ECX_EBP
#define _ADD_RCX_RBX _ADD_ECX_EBX
#define _ADD_RCX_RCX _ADD_ECX_ECX
#define _ADD_RCX_RDI _ADD_ECX_EDI
#define _ADD_RCX_RDX _ADD_ECX_EDX
#define _ADD_RCX_RSI _ADD_ECX_ESI
#define _ADD_RCX_RSP _ADD_ECX_ESP

#define _ADD_RDI_ _ADD_EDI_
#define _ADD_RDI_RAX _ADD_EDI_EAX
#define _ADD_RDI_RBP _ADD_EDI_EBP
#define _ADD_RDI_RBX _ADD_EDI_EBX
#define _ADD_RDI_RCX _ADD_EDI_ECX
#define _ADD_RDI_RDI _ADD_EDI_EDI
#define _ADD_RDI_RDX _ADD_EDI_EDX
#define _ADD_RDI_RSI _ADD_EDI_ESI
#define _ADD_RDI_RSP _ADD_EDI_ESP

#define _ADD_RDX_ _ADD_EDX_
#define _ADD_RDX_RAX _ADD_EDX_EAX
#define _ADD_RDX_RBP _ADD_EDX_EBP
#define _ADD_RDX_RBX _ADD_EDX_EBX
#define _ADD_RDX_RCX _ADD_EDX_ECX
#define _ADD_RDX_RDI _ADD_EDX_EDI
#define _ADD_RDX_RDX _ADD_EDX_EDX
#define _ADD_RDX_RSI _ADD_EDX_ESI
#define _ADD_RDX_RSP _ADD_EDX_ESP

#define _ADD_RSI_ _ADD_ESI_
#define _ADD_RSI_RAX _ADD_ESI_EAX
#define _ADD_RSI_RBP _ADD_ESI_EBP
#define _ADD_RSI_RBX _ADD_ESI_EBX
#define _ADD_RSI_RCX _ADD_ESI_ECX
#define _ADD_RSI_RDI _ADD_ESI_EDI
#define _ADD_RSI_RDX _ADD_ESI_EDX
#define _ADD_RSI_RSI _ADD_ESI_ESI
#define _ADD_RSI_RSP _ADD_ESI_ESP

#define _ADD_RSP_ _ADD_ESP_
#define _ADD_RSP_RAX _ADD_ESP_EAX
#define _ADD_RSP_RBP _ADD_ESP_EBP
#define _ADD_RSP_RBX _ADD_ESP_EBX
#define _ADD_RSP_RCX _ADD_ESP_ECX
#define _ADD_RSP_RDI _ADD_ESP_EDI
#define _ADD_RSP_RDX _ADD_ESP_EDX
#define _ADD_RSP_RSI _ADD_ESP_ESI
#define _ADD_RSP_RSP _ADD_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _ADD_EAX_ _ADD_AX_
#define _ADD_EAX_EAX _ADD_AX_AX
#define _ADD_EAX_EBP _ADD_AX_BP
#define _ADD_EAX_EBX _ADD_AX_BX
#define _ADD_EAX_ECX _ADD_AX_CX
#define _ADD_EAX_EDI _ADD_AX_DI
#define _ADD_EAX_EDX _ADD_AX_DX
#define _ADD_EAX_ESI _ADD_AX_SI
#define _ADD_EAX_ESP _ADD_AX_SP

#define _ADD_EBP_ _ADD_BP_
#define _ADD_EBP_EAX _ADD_BP_AX
#define _ADD_EBP_EBP _ADD_BP_BP
#define _ADD_EBP_EBX _ADD_BP_BX
#define _ADD_EBP_ECX _ADD_BP_CX
#define _ADD_EBP_EDI _ADD_BP_DI
#define _ADD_EBP_EDX _ADD_BP_DX
#define _ADD_EBP_ESI _ADD_BP_SI
#define _ADD_EBP_ESP _ADD_BP_SP

#define _ADD_EBX_ _ADD_BX_
#define _ADD_EBX_EAX _ADD_BX_AX
#define _ADD_EBX_EBP _ADD_BX_BP
#define _ADD_EBX_EBX _ADD_BX_BX
#define _ADD_EBX_ECX _ADD_BX_CX
#define _ADD_EBX_EDI _ADD_BX_DI
#define _ADD_EBX_EDX _ADD_BX_DX
#define _ADD_EBX_ESI _ADD_BX_SI
#define _ADD_EBX_ESP _ADD_BX_SP

#define _ADD_ECX_ _ADD_CX_
#define _ADD_ECX_EAX _ADD_CX_AX
#define _ADD_ECX_EBP _ADD_CX_BP
#define _ADD_ECX_EBX _ADD_CX_BX
#define _ADD_ECX_ECX _ADD_CX_CX
#define _ADD_ECX_EDI _ADD_CX_DI
#define _ADD_ECX_EDX _ADD_CX_DX
#define _ADD_ECX_ESI _ADD_CX_SI
#define _ADD_ECX_ESP _ADD_CX_SP

#define _ADD_EDI_ _ADD_DI_
#define _ADD_EDI_EAX _ADD_DI_AX
#define _ADD_EDI_EBP _ADD_DI_BP
#define _ADD_EDI_EBX _ADD_DI_BX
#define _ADD_EDI_ECX _ADD_DI_CX
#define _ADD_EDI_EDI _ADD_DI_DI
#define _ADD_EDI_EDX _ADD_DI_DX
#define _ADD_EDI_ESI _ADD_DI_SI
#define _ADD_EDI_ESP _ADD_DI_SP

#define _ADD_EDX_ _ADD_DX_
#define _ADD_EDX_EAX _ADD_DX_AX
#define _ADD_EDX_EBP _ADD_DX_BP
#define _ADD_EDX_EBX _ADD_DX_BX
#define _ADD_EDX_ECX _ADD_DX_CX
#define _ADD_EDX_EDI _ADD_DX_DI
#define _ADD_EDX_EDX _ADD_DX_DX
#define _ADD_EDX_ESI _ADD_DX_SI
#define _ADD_EDX_ESP _ADD_DX_SP

#define _ADD_ESI_ _ADD_SI_
#define _ADD_ESI_EAX _ADD_SI_AX
#define _ADD_ESI_EBP _ADD_SI_BP
#define _ADD_ESI_EBX _ADD_SI_BX
#define _ADD_ESI_ECX _ADD_SI_CX
#define _ADD_ESI_EDI _ADD_SI_DI
#define _ADD_ESI_EDX _ADD_SI_DX
#define _ADD_ESI_ESI _ADD_SI_SI
#define _ADD_ESI_ESP _ADD_SI_SP

#define _ADD_ESP_ _ADD_SP_
#define _ADD_ESP_EAX _ADD_SP_AX
#define _ADD_ESP_EBP _ADD_SP_BP
#define _ADD_ESP_EBX _ADD_SP_BX
#define _ADD_ESP_ECX _ADD_SP_CX
#define _ADD_ESP_EDI _ADD_SP_DI
#define _ADD_ESP_EDX _ADD_SP_DX
#define _ADD_ESP_ESI _ADD_SP_SI
#define _ADD_ESP_ESP _ADD_SP_SP
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
