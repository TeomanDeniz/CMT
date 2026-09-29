#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _XOR_RAX_ _XOR_EAX_
#define _XOR_RAX_RAX _XOR_EAX_EAX
#define _XOR_RAX_RBP _XOR_EAX_EBP
#define _XOR_RAX_RBX _XOR_EAX_EBX
#define _XOR_RAX_RCX _XOR_EAX_ECX
#define _XOR_RAX_RDI _XOR_EAX_EDI
#define _XOR_RAX_RDX _XOR_EAX_EDX
#define _XOR_RAX_RSI _XOR_EAX_ESI
#define _XOR_RAX_RSP _XOR_EAX_ESP

#define _XOR_RBP_ _XOR_EBP_
#define _XOR_RBP_RAX _XOR_EBP_EAX
#define _XOR_RBP_RBP _XOR_EBP_EBP
#define _XOR_RBP_RBX _XOR_EBP_EBX
#define _XOR_RBP_RCX _XOR_EBP_ECX
#define _XOR_RBP_RDI _XOR_EBP_EDI
#define _XOR_RBP_RDX _XOR_EBP_EDX
#define _XOR_RBP_RSI _XOR_EBP_ESI
#define _XOR_RBP_RSP _XOR_EBP_ESP

#define _XOR_RBX_ _XOR_EBX_
#define _XOR_RBX_RAX _XOR_EBX_EAX
#define _XOR_RBX_RBP _XOR_EBX_EBP
#define _XOR_RBX_RBX _XOR_EBX_EBX
#define _XOR_RBX_RCX _XOR_EBX_ECX
#define _XOR_RBX_RDI _XOR_EBX_EDI
#define _XOR_RBX_RDX _XOR_EBX_EDX
#define _XOR_RBX_RSI _XOR_EBX_ESI
#define _XOR_RBX_RSP _XOR_EBX_ESP

#define _XOR_RCX_ _XOR_ECX_
#define _XOR_RCX_RAX _XOR_ECX_EAX
#define _XOR_RCX_RBP _XOR_ECX_EBP
#define _XOR_RCX_RBX _XOR_ECX_EBX
#define _XOR_RCX_RCX _XOR_ECX_ECX
#define _XOR_RCX_RDI _XOR_ECX_EDI
#define _XOR_RCX_RDX _XOR_ECX_EDX
#define _XOR_RCX_RSI _XOR_ECX_ESI
#define _XOR_RCX_RSP _XOR_ECX_ESP

#define _XOR_RDI_ _XOR_EDI_
#define _XOR_RDI_RAX _XOR_EDI_EAX
#define _XOR_RDI_RBP _XOR_EDI_EBP
#define _XOR_RDI_RBX _XOR_EDI_EBX
#define _XOR_RDI_RCX _XOR_EDI_ECX
#define _XOR_RDI_RDI _XOR_EDI_EDI
#define _XOR_RDI_RDX _XOR_EDI_EDX
#define _XOR_RDI_RSI _XOR_EDI_ESI
#define _XOR_RDI_RSP _XOR_EDI_ESP

#define _XOR_RDX_ _XOR_EDX_
#define _XOR_RDX_RAX _XOR_EDX_EAX
#define _XOR_RDX_RBP _XOR_EDX_EBP
#define _XOR_RDX_RBX _XOR_EDX_EBX
#define _XOR_RDX_RCX _XOR_EDX_ECX
#define _XOR_RDX_RDI _XOR_EDX_EDI
#define _XOR_RDX_RDX _XOR_EDX_EDX
#define _XOR_RDX_RSI _XOR_EDX_ESI
#define _XOR_RDX_RSP _XOR_EDX_ESP

#define _XOR_RSI_ _XOR_ESI_
#define _XOR_RSI_RAX _XOR_ESI_EAX
#define _XOR_RSI_RBP _XOR_ESI_EBP
#define _XOR_RSI_RBX _XOR_ESI_EBX
#define _XOR_RSI_RCX _XOR_ESI_ECX
#define _XOR_RSI_RDI _XOR_ESI_EDI
#define _XOR_RSI_RDX _XOR_ESI_EDX
#define _XOR_RSI_RSI _XOR_ESI_ESI
#define _XOR_RSI_RSP _XOR_ESI_ESP

#define _XOR_RSP_ _XOR_ESP_
#define _XOR_RSP_RAX _XOR_ESP_EAX
#define _XOR_RSP_RBP _XOR_ESP_EBP
#define _XOR_RSP_RBX _XOR_ESP_EBX
#define _XOR_RSP_RCX _XOR_ESP_ECX
#define _XOR_RSP_RDI _XOR_ESP_EDI
#define _XOR_RSP_RDX _XOR_ESP_EDX
#define _XOR_RSP_RSI _XOR_ESP_ESI
#define _XOR_RSP_RSP _XOR_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _XOR_EAX_ _XOR_AX_
#define _XOR_EAX_EAX _XOR_AX_AX
#define _XOR_EAX_EBP _XOR_AX_BP
#define _XOR_EAX_EBX _XOR_AX_BX
#define _XOR_EAX_ECX _XOR_AX_CX
#define _XOR_EAX_EDI _XOR_AX_DI
#define _XOR_EAX_EDX _XOR_AX_DX
#define _XOR_EAX_ESI _XOR_AX_SI
#define _XOR_EAX_ESP _XOR_AX_SP

#define _XOR_EBP_ _XOR_BP_
#define _XOR_EBP_EAX _XOR_BP_AX
#define _XOR_EBP_EBP _XOR_BP_BP
#define _XOR_EBP_EBX _XOR_BP_BX
#define _XOR_EBP_ECX _XOR_BP_CX
#define _XOR_EBP_EDI _XOR_BP_DI
#define _XOR_EBP_EDX _XOR_BP_DX
#define _XOR_EBP_ESI _XOR_BP_SI
#define _XOR_EBP_ESP _XOR_BP_SP

#define _XOR_EBX_ _XOR_BX_
#define _XOR_EBX_EAX _XOR_BX_AX
#define _XOR_EBX_EBP _XOR_BX_BP
#define _XOR_EBX_EBX _XOR_BX_BX
#define _XOR_EBX_ECX _XOR_BX_CX
#define _XOR_EBX_EDI _XOR_BX_DI
#define _XOR_EBX_EDX _XOR_BX_DX
#define _XOR_EBX_ESI _XOR_BX_SI
#define _XOR_EBX_ESP _XOR_BX_SP

#define _XOR_ECX_ _XOR_CX_
#define _XOR_ECX_EAX _XOR_CX_AX
#define _XOR_ECX_EBP _XOR_CX_BP
#define _XOR_ECX_EBX _XOR_CX_BX
#define _XOR_ECX_ECX _XOR_CX_CX
#define _XOR_ECX_EDI _XOR_CX_DI
#define _XOR_ECX_EDX _XOR_CX_DX
#define _XOR_ECX_ESI _XOR_CX_SI
#define _XOR_ECX_ESP _XOR_CX_SP

#define _XOR_EDI_ _XOR_DI_
#define _XOR_EDI_EAX _XOR_DI_AX
#define _XOR_EDI_EBP _XOR_DI_BP
#define _XOR_EDI_EBX _XOR_DI_BX
#define _XOR_EDI_ECX _XOR_DI_CX
#define _XOR_EDI_EDI _XOR_DI_DI
#define _XOR_EDI_EDX _XOR_DI_DX
#define _XOR_EDI_ESI _XOR_DI_SI
#define _XOR_EDI_ESP _XOR_DI_SP

#define _XOR_EDX_ _XOR_DX_
#define _XOR_EDX_EAX _XOR_DX_AX
#define _XOR_EDX_EBP _XOR_DX_BP
#define _XOR_EDX_EBX _XOR_DX_BX
#define _XOR_EDX_ECX _XOR_DX_CX
#define _XOR_EDX_EDI _XOR_DX_DI
#define _XOR_EDX_EDX _XOR_DX_DX
#define _XOR_EDX_ESI _XOR_DX_SI
#define _XOR_EDX_ESP _XOR_DX_SP

#define _XOR_ESI_ _XOR_SI_
#define _XOR_ESI_EAX _XOR_SI_AX
#define _XOR_ESI_EBP _XOR_SI_BP
#define _XOR_ESI_EBX _XOR_SI_BX
#define _XOR_ESI_ECX _XOR_SI_CX
#define _XOR_ESI_EDI _XOR_SI_DI
#define _XOR_ESI_EDX _XOR_SI_DX
#define _XOR_ESI_ESI _XOR_SI_SI
#define _XOR_ESI_ESP _XOR_SI_SP

#define _XOR_ESP_ _XOR_SP_
#define _XOR_ESP_EAX _XOR_SP_AX
#define _XOR_ESP_EBP _XOR_SP_BP
#define _XOR_ESP_EBX _XOR_SP_BX
#define _XOR_ESP_ECX _XOR_SP_CX
#define _XOR_ESP_EDI _XOR_SP_DI
#define _XOR_ESP_EDX _XOR_SP_DX
#define _XOR_ESP_ESI _XOR_SP_SI
#define _XOR_ESP_ESP _XOR_SP_SP
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
