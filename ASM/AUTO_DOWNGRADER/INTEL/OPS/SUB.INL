#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _SUB_RAX_ _SUB_EAX_
#define _SUB_RAX_RAX _SUB_EAX_EAX
#define _SUB_RAX_RBP _SUB_EAX_EBP
#define _SUB_RAX_RBX _SUB_EAX_EBX
#define _SUB_RAX_RCX _SUB_EAX_ECX
#define _SUB_RAX_RDI _SUB_EAX_EDI
#define _SUB_RAX_RDX _SUB_EAX_EDX
#define _SUB_RAX_RSI _SUB_EAX_ESI
#define _SUB_RAX_RSP _SUB_EAX_ESP

#define _SUB_RBP_ _SUB_EBP_
#define _SUB_RBP_RAX _SUB_EBP_EAX
#define _SUB_RBP_RBP _SUB_EBP_EBP
#define _SUB_RBP_RBX _SUB_EBP_EBX
#define _SUB_RBP_RCX _SUB_EBP_ECX
#define _SUB_RBP_RDI _SUB_EBP_EDI
#define _SUB_RBP_RDX _SUB_EBP_EDX
#define _SUB_RBP_RSI _SUB_EBP_ESI
#define _SUB_RBP_RSP _SUB_EBP_ESP

#define _SUB_RBX_ _SUB_EBX_
#define _SUB_RBX_RAX _SUB_EBX_EAX
#define _SUB_RBX_RBP _SUB_EBX_EBP
#define _SUB_RBX_RBX _SUB_EBX_EBX
#define _SUB_RBX_RCX _SUB_EBX_ECX
#define _SUB_RBX_RDI _SUB_EBX_EDI
#define _SUB_RBX_RDX _SUB_EBX_EDX
#define _SUB_RBX_RSI _SUB_EBX_ESI
#define _SUB_RBX_RSP _SUB_EBX_ESP

#define _SUB_RCX_ _SUB_ECX_
#define _SUB_RCX_RAX _SUB_ECX_EAX
#define _SUB_RCX_RBP _SUB_ECX_EBP
#define _SUB_RCX_RBX _SUB_ECX_EBX
#define _SUB_RCX_RCX _SUB_ECX_ECX
#define _SUB_RCX_RDI _SUB_ECX_EDI
#define _SUB_RCX_RDX _SUB_ECX_EDX
#define _SUB_RCX_RSI _SUB_ECX_ESI
#define _SUB_RCX_RSP _SUB_ECX_ESP

#define _SUB_RDI_ _SUB_EDI_
#define _SUB_RDI_RAX _SUB_EDI_EAX
#define _SUB_RDI_RBP _SUB_EDI_EBP
#define _SUB_RDI_RBX _SUB_EDI_EBX
#define _SUB_RDI_RCX _SUB_EDI_ECX
#define _SUB_RDI_RDI _SUB_EDI_EDI
#define _SUB_RDI_RDX _SUB_EDI_EDX
#define _SUB_RDI_RSI _SUB_EDI_ESI
#define _SUB_RDI_RSP _SUB_EDI_ESP

#define _SUB_RDX_ _SUB_EDX_
#define _SUB_RDX_RAX _SUB_EDX_EAX
#define _SUB_RDX_RBP _SUB_EDX_EBP
#define _SUB_RDX_RBX _SUB_EDX_EBX
#define _SUB_RDX_RCX _SUB_EDX_ECX
#define _SUB_RDX_RDI _SUB_EDX_EDI
#define _SUB_RDX_RDX _SUB_EDX_EDX
#define _SUB_RDX_RSI _SUB_EDX_ESI
#define _SUB_RDX_RSP _SUB_EDX_ESP

#define _SUB_RSI_ _SUB_ESI_
#define _SUB_RSI_RAX _SUB_ESI_EAX
#define _SUB_RSI_RBP _SUB_ESI_EBP
#define _SUB_RSI_RBX _SUB_ESI_EBX
#define _SUB_RSI_RCX _SUB_ESI_ECX
#define _SUB_RSI_RDI _SUB_ESI_EDI
#define _SUB_RSI_RDX _SUB_ESI_EDX
#define _SUB_RSI_RSI _SUB_ESI_ESI
#define _SUB_RSI_RSP _SUB_ESI_ESP

#define _SUB_RSP_ _SUB_ESP_
#define _SUB_RSP_RAX _SUB_ESP_EAX
#define _SUB_RSP_RBP _SUB_ESP_EBP
#define _SUB_RSP_RBX _SUB_ESP_EBX
#define _SUB_RSP_RCX _SUB_ESP_ECX
#define _SUB_RSP_RDI _SUB_ESP_EDI
#define _SUB_RSP_RDX _SUB_ESP_EDX
#define _SUB_RSP_RSI _SUB_ESP_ESI
#define _SUB_RSP_RSP _SUB_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _SUB_EAX_ _SUB_AX_
#define _SUB_EAX_EAX _SUB_AX_AX
#define _SUB_EAX_EBP _SUB_AX_BP
#define _SUB_EAX_EBX _SUB_AX_BX
#define _SUB_EAX_ECX _SUB_AX_CX
#define _SUB_EAX_EDI _SUB_AX_DI
#define _SUB_EAX_EDX _SUB_AX_DX
#define _SUB_EAX_ESI _SUB_AX_SI
#define _SUB_EAX_ESP _SUB_AX_SP

#define _SUB_EBP_ _SUB_BP_
#define _SUB_EBP_EAX _SUB_BP_AX
#define _SUB_EBP_EBP _SUB_BP_BP
#define _SUB_EBP_EBX _SUB_BP_BX
#define _SUB_EBP_ECX _SUB_BP_CX
#define _SUB_EBP_EDI _SUB_BP_DI
#define _SUB_EBP_EDX _SUB_BP_DX
#define _SUB_EBP_ESI _SUB_BP_SI
#define _SUB_EBP_ESP _SUB_BP_SP

#define _SUB_EBX_ _SUB_BX_
#define _SUB_EBX_EAX _SUB_BX_AX
#define _SUB_EBX_EBP _SUB_BX_BP
#define _SUB_EBX_EBX _SUB_BX_BX
#define _SUB_EBX_ECX _SUB_BX_CX
#define _SUB_EBX_EDI _SUB_BX_DI
#define _SUB_EBX_EDX _SUB_BX_DX
#define _SUB_EBX_ESI _SUB_BX_SI
#define _SUB_EBX_ESP _SUB_BX_SP

#define _SUB_ECX_ _SUB_CX_
#define _SUB_ECX_EAX _SUB_CX_AX
#define _SUB_ECX_EBP _SUB_CX_BP
#define _SUB_ECX_EBX _SUB_CX_BX
#define _SUB_ECX_ECX _SUB_CX_CX
#define _SUB_ECX_EDI _SUB_CX_DI
#define _SUB_ECX_EDX _SUB_CX_DX
#define _SUB_ECX_ESI _SUB_CX_SI
#define _SUB_ECX_ESP _SUB_CX_SP

#define _SUB_EDI_ _SUB_DI_
#define _SUB_EDI_EAX _SUB_DI_AX
#define _SUB_EDI_EBP _SUB_DI_BP
#define _SUB_EDI_EBX _SUB_DI_BX
#define _SUB_EDI_ECX _SUB_DI_CX
#define _SUB_EDI_EDI _SUB_DI_DI
#define _SUB_EDI_EDX _SUB_DI_DX
#define _SUB_EDI_ESI _SUB_DI_SI
#define _SUB_EDI_ESP _SUB_DI_SP

#define _SUB_EDX_ _SUB_DX_
#define _SUB_EDX_EAX _SUB_DX_AX
#define _SUB_EDX_EBP _SUB_DX_BP
#define _SUB_EDX_EBX _SUB_DX_BX
#define _SUB_EDX_ECX _SUB_DX_CX
#define _SUB_EDX_EDI _SUB_DX_DI
#define _SUB_EDX_EDX _SUB_DX_DX
#define _SUB_EDX_ESI _SUB_DX_SI
#define _SUB_EDX_ESP _SUB_DX_SP

#define _SUB_ESI_ _SUB_SI_
#define _SUB_ESI_EAX _SUB_SI_AX
#define _SUB_ESI_EBP _SUB_SI_BP
#define _SUB_ESI_EBX _SUB_SI_BX
#define _SUB_ESI_ECX _SUB_SI_CX
#define _SUB_ESI_EDI _SUB_SI_DI
#define _SUB_ESI_EDX _SUB_SI_DX
#define _SUB_ESI_ESI _SUB_SI_SI
#define _SUB_ESI_ESP _SUB_SI_SP

#define _SUB_ESP_ _SUB_SP_
#define _SUB_ESP_EAX _SUB_SP_AX
#define _SUB_ESP_EBP _SUB_SP_BP
#define _SUB_ESP_EBX _SUB_SP_BX
#define _SUB_ESP_ECX _SUB_SP_CX
#define _SUB_ESP_EDI _SUB_SP_DI
#define _SUB_ESP_EDX _SUB_SP_DX
#define _SUB_ESP_ESI _SUB_SP_SI
#define _SUB_ESP_ESP _SUB_SP_SP
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
