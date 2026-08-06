#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _MOV_RAX_ _MOV_EAX_
#define _MOV_RAX_RAX _MOV_EAX_EAX
#define _MOV_RAX_RBP _MOV_EAX_EBP
#define _MOV_RAX_RBX _MOV_EAX_EBX
#define _MOV_RAX_RCX _MOV_EAX_ECX
#define _MOV_RAX_RDI _MOV_EAX_EDI
#define _MOV_RAX_RDX _MOV_EAX_EDX
#define _MOV_RAX_RSI _MOV_EAX_ESI
#define _MOV_RAX_RSP _MOV_EAX_ESP

#define _MOV_RBP_ _MOV_EBP_
#define _MOV_RBP_RAX _MOV_EBP_EAX
#define _MOV_RBP_RBP _MOV_EBP_EBP
#define _MOV_RBP_RBX _MOV_EBP_EBX
#define _MOV_RBP_RCX _MOV_EBP_ECX
#define _MOV_RBP_RDI _MOV_EBP_EDI
#define _MOV_RBP_RDX _MOV_EBP_EDX
#define _MOV_RBP_RSI _MOV_EBP_ESI
#define _MOV_RBP_RSP _MOV_EBP_ESP

#define _MOV_RBX_ _MOV_EBX_
#define _MOV_RBX_RAX _MOV_EBX_EAX
#define _MOV_RBX_RBP _MOV_EBX_EBP
#define _MOV_RBX_RBX _MOV_EBX_EBX
#define _MOV_RBX_RCX _MOV_EBX_ECX
#define _MOV_RBX_RDI _MOV_EBX_EDI
#define _MOV_RBX_RDX _MOV_EBX_EDX
#define _MOV_RBX_RSI _MOV_EBX_ESI
#define _MOV_RBX_RSP _MOV_EBX_ESP

#define _MOV_RCX_ _MOV_ECX_
#define _MOV_RCX_RAX _MOV_ECX_EAX
#define _MOV_RCX_RBP _MOV_ECX_EBP
#define _MOV_RCX_RBX _MOV_ECX_EBX
#define _MOV_RCX_RCX _MOV_ECX_ECX
#define _MOV_RCX_RDI _MOV_ECX_EDI
#define _MOV_RCX_RDX _MOV_ECX_EDX
#define _MOV_RCX_RSI _MOV_ECX_ESI
#define _MOV_RCX_RSP _MOV_ECX_ESP

#define _MOV_RDI_ _MOV_EDI_
#define _MOV_RDI_RAX _MOV_EDI_EAX
#define _MOV_RDI_RBP _MOV_EDI_EBP
#define _MOV_RDI_RBX _MOV_EDI_EBX
#define _MOV_RDI_RCX _MOV_EDI_ECX
#define _MOV_RDI_RDI _MOV_EDI_EDI
#define _MOV_RDI_RDX _MOV_EDI_EDX
#define _MOV_RDI_RSI _MOV_EDI_ESI
#define _MOV_RDI_RSP _MOV_EDI_ESP

#define _MOV_RDX_ _MOV_EDX_
#define _MOV_RDX_RAX _MOV_EDX_EAX
#define _MOV_RDX_RBP _MOV_EDX_EBP
#define _MOV_RDX_RBX _MOV_EDX_EBX
#define _MOV_RDX_RCX _MOV_EDX_ECX
#define _MOV_RDX_RDI _MOV_EDX_EDI
#define _MOV_RDX_RDX _MOV_EDX_EDX
#define _MOV_RDX_RSI _MOV_EDX_ESI
#define _MOV_RDX_RSP _MOV_EDX_ESP

#define _MOV_RSI_ _MOV_ESI_
#define _MOV_RSI_RAX _MOV_ESI_EAX
#define _MOV_RSI_RBP _MOV_ESI_EBP
#define _MOV_RSI_RBX _MOV_ESI_EBX
#define _MOV_RSI_RCX _MOV_ESI_ECX
#define _MOV_RSI_RDI _MOV_ESI_EDI
#define _MOV_RSI_RDX _MOV_ESI_EDX
#define _MOV_RSI_RSI _MOV_ESI_ESI
#define _MOV_RSI_RSP _MOV_ESI_ESP

#define _MOV_RSP_ _MOV_ESP_
#define _MOV_RSP_RAX _MOV_ESP_EAX
#define _MOV_RSP_RBP _MOV_ESP_EBP
#define _MOV_RSP_RBX _MOV_ESP_EBX
#define _MOV_RSP_RCX _MOV_ESP_ECX
#define _MOV_RSP_RDI _MOV_ESP_EDI
#define _MOV_RSP_RDX _MOV_ESP_EDX
#define _MOV_RSP_RSI _MOV_ESP_ESI
#define _MOV_RSP_RSP _MOV_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _MOV_EAX_ _MOV_AX_
#define _MOV_EAX_EAX _MOV_AX_AX
#define _MOV_EAX_EBP _MOV_AX_BP
#define _MOV_EAX_EBX _MOV_AX_BX
#define _MOV_EAX_ECX _MOV_AX_CX
#define _MOV_EAX_EDI _MOV_AX_DI
#define _MOV_EAX_EDX _MOV_AX_DX
#define _MOV_EAX_ESI _MOV_AX_SI
#define _MOV_EAX_ESP _MOV_AX_SP

#define _MOV_EBP_ _MOV_BP_
#define _MOV_EBP_EAX _MOV_BP_AX
#define _MOV_EBP_EBP _MOV_BP_BP
#define _MOV_EBP_EBX _MOV_BP_BX
#define _MOV_EBP_ECX _MOV_BP_CX
#define _MOV_EBP_EDI _MOV_BP_DI
#define _MOV_EBP_EDX _MOV_BP_DX
#define _MOV_EBP_ESI _MOV_BP_SI
#define _MOV_EBP_ESP _MOV_BP_SP

#define _MOV_EBX_ _MOV_BX_
#define _MOV_EBX_EAX _MOV_BX_AX
#define _MOV_EBX_EBP _MOV_BX_BP
#define _MOV_EBX_EBX _MOV_BX_BX
#define _MOV_EBX_ECX _MOV_BX_CX
#define _MOV_EBX_EDI _MOV_BX_DI
#define _MOV_EBX_EDX _MOV_BX_DX
#define _MOV_EBX_ESI _MOV_BX_SI
#define _MOV_EBX_ESP _MOV_BX_SP

#define _MOV_ECX_ _MOV_CX_
#define _MOV_ECX_EAX _MOV_CX_AX
#define _MOV_ECX_EBP _MOV_CX_BP
#define _MOV_ECX_EBX _MOV_CX_BX
#define _MOV_ECX_ECX _MOV_CX_CX
#define _MOV_ECX_EDI _MOV_CX_DI
#define _MOV_ECX_EDX _MOV_CX_DX
#define _MOV_ECX_ESI _MOV_CX_SI
#define _MOV_ECX_ESP _MOV_CX_SP

#define _MOV_EDI_ _MOV_DI_
#define _MOV_EDI_EAX _MOV_DI_AX
#define _MOV_EDI_EBP _MOV_DI_BP
#define _MOV_EDI_EBX _MOV_DI_BX
#define _MOV_EDI_ECX _MOV_DI_CX
#define _MOV_EDI_EDI _MOV_DI_DI
#define _MOV_EDI_EDX _MOV_DI_DX
#define _MOV_EDI_ESI _MOV_DI_SI
#define _MOV_EDI_ESP _MOV_DI_SP

#define _MOV_EDX_ _MOV_DX_
#define _MOV_EDX_EAX _MOV_DX_AX
#define _MOV_EDX_EBP _MOV_DX_BP
#define _MOV_EDX_EBX _MOV_DX_BX
#define _MOV_EDX_ECX _MOV_DX_CX
#define _MOV_EDX_EDI _MOV_DX_DI
#define _MOV_EDX_EDX _MOV_DX_DX
#define _MOV_EDX_ESI _MOV_DX_SI
#define _MOV_EDX_ESP _MOV_DX_SP

#define _MOV_ESI_ _MOV_SI_
#define _MOV_ESI_EAX _MOV_SI_AX
#define _MOV_ESI_EBP _MOV_SI_BP
#define _MOV_ESI_EBX _MOV_SI_BX
#define _MOV_ESI_ECX _MOV_SI_CX
#define _MOV_ESI_EDI _MOV_SI_DI
#define _MOV_ESI_EDX _MOV_SI_DX
#define _MOV_ESI_ESI _MOV_SI_SI
#define _MOV_ESI_ESP _MOV_SI_SP

#define _MOV_ESP_ _MOV_SP_
#define _MOV_ESP_EAX _MOV_SP_AX
#define _MOV_ESP_EBP _MOV_SP_BP
#define _MOV_ESP_EBX _MOV_SP_BX
#define _MOV_ESP_ECX _MOV_SP_CX
#define _MOV_ESP_EDI _MOV_SP_DI
#define _MOV_ESP_EDX _MOV_SP_DX
#define _MOV_ESP_ESI _MOV_SP_SI
#define _MOV_ESP_ESP _MOV_SP_SP
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
