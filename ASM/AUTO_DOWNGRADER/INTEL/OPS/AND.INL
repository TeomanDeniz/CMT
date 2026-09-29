#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _AND_RAX_ _AND_EAX_
#define _AND_RAX_RAX _AND_EAX_EAX
#define _AND_RAX_RBP _AND_EAX_EBP
#define _AND_RAX_RBX _AND_EAX_EBX
#define _AND_RAX_RCX _AND_EAX_ECX
#define _AND_RAX_RDI _AND_EAX_EDI
#define _AND_RAX_RDX _AND_EAX_EDX
#define _AND_RAX_RSI _AND_EAX_ESI
#define _AND_RAX_RSP _AND_EAX_ESP

#define _AND_RBP_ _AND_EBP_
#define _AND_RBP_RAX _AND_EBP_EAX
#define _AND_RBP_RBP _AND_EBP_EBP
#define _AND_RBP_RBX _AND_EBP_EBX
#define _AND_RBP_RCX _AND_EBP_ECX
#define _AND_RBP_RDI _AND_EBP_EDI
#define _AND_RBP_RDX _AND_EBP_EDX
#define _AND_RBP_RSI _AND_EBP_ESI
#define _AND_RBP_RSP _AND_EBP_ESP

#define _AND_RBX_ _AND_EBX_
#define _AND_RBX_RAX _AND_EBX_EAX
#define _AND_RBX_RBP _AND_EBX_EBP
#define _AND_RBX_RBX _AND_EBX_EBX
#define _AND_RBX_RCX _AND_EBX_ECX
#define _AND_RBX_RDI _AND_EBX_EDI
#define _AND_RBX_RDX _AND_EBX_EDX
#define _AND_RBX_RSI _AND_EBX_ESI
#define _AND_RBX_RSP _AND_EBX_ESP

#define _AND_RCX_ _AND_ECX_
#define _AND_RCX_RAX _AND_ECX_EAX
#define _AND_RCX_RBP _AND_ECX_EBP
#define _AND_RCX_RBX _AND_ECX_EBX
#define _AND_RCX_RCX _AND_ECX_ECX
#define _AND_RCX_RDI _AND_ECX_EDI
#define _AND_RCX_RDX _AND_ECX_EDX
#define _AND_RCX_RSI _AND_ECX_ESI
#define _AND_RCX_RSP _AND_ECX_ESP

#define _AND_RDI_ _AND_EDI_
#define _AND_RDI_RAX _AND_EDI_EAX
#define _AND_RDI_RBP _AND_EDI_EBP
#define _AND_RDI_RBX _AND_EDI_EBX
#define _AND_RDI_RCX _AND_EDI_ECX
#define _AND_RDI_RDI _AND_EDI_EDI
#define _AND_RDI_RDX _AND_EDI_EDX
#define _AND_RDI_RSI _AND_EDI_ESI
#define _AND_RDI_RSP _AND_EDI_ESP

#define _AND_RDX_ _AND_EDX_
#define _AND_RDX_RAX _AND_EDX_EAX
#define _AND_RDX_RBP _AND_EDX_EBP
#define _AND_RDX_RBX _AND_EDX_EBX
#define _AND_RDX_RCX _AND_EDX_ECX
#define _AND_RDX_RDI _AND_EDX_EDI
#define _AND_RDX_RDX _AND_EDX_EDX
#define _AND_RDX_RSI _AND_EDX_ESI
#define _AND_RDX_RSP _AND_EDX_ESP

#define _AND_RSI_ _AND_ESI_
#define _AND_RSI_RAX _AND_ESI_EAX
#define _AND_RSI_RBP _AND_ESI_EBP
#define _AND_RSI_RBX _AND_ESI_EBX
#define _AND_RSI_RCX _AND_ESI_ECX
#define _AND_RSI_RDI _AND_ESI_EDI
#define _AND_RSI_RDX _AND_ESI_EDX
#define _AND_RSI_RSI _AND_ESI_ESI
#define _AND_RSI_RSP _AND_ESI_ESP

#define _AND_RSP_ _AND_ESP_
#define _AND_RSP_RAX _AND_ESP_EAX
#define _AND_RSP_RBP _AND_ESP_EBP
#define _AND_RSP_RBX _AND_ESP_EBX
#define _AND_RSP_RCX _AND_ESP_ECX
#define _AND_RSP_RDI _AND_ESP_EDI
#define _AND_RSP_RDX _AND_ESP_EDX
#define _AND_RSP_RSI _AND_ESP_ESI
#define _AND_RSP_RSP _AND_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _AND_EAX_ _AND_AX_
#define _AND_EAX_EAX _AND_AX_AX
#define _AND_EAX_EBP _AND_AX_BP
#define _AND_EAX_EBX _AND_AX_BX
#define _AND_EAX_ECX _AND_AX_CX
#define _AND_EAX_EDI _AND_AX_DI
#define _AND_EAX_EDX _AND_AX_DX
#define _AND_EAX_ESI _AND_AX_SI
#define _AND_EAX_ESP _AND_AX_SP

#define _AND_EBP_ _AND_BP_
#define _AND_EBP_EAX _AND_BP_AX
#define _AND_EBP_EBP _AND_BP_BP
#define _AND_EBP_EBX _AND_BP_BX
#define _AND_EBP_ECX _AND_BP_CX
#define _AND_EBP_EDI _AND_BP_DI
#define _AND_EBP_EDX _AND_BP_DX
#define _AND_EBP_ESI _AND_BP_SI
#define _AND_EBP_ESP _AND_BP_SP

#define _AND_EBX_ _AND_BX_
#define _AND_EBX_EAX _AND_BX_AX
#define _AND_EBX_EBP _AND_BX_BP
#define _AND_EBX_EBX _AND_BX_BX
#define _AND_EBX_ECX _AND_BX_CX
#define _AND_EBX_EDI _AND_BX_DI
#define _AND_EBX_EDX _AND_BX_DX
#define _AND_EBX_ESI _AND_BX_SI
#define _AND_EBX_ESP _AND_BX_SP

#define _AND_ECX_ _AND_CX_
#define _AND_ECX_EAX _AND_CX_AX
#define _AND_ECX_EBP _AND_CX_BP
#define _AND_ECX_EBX _AND_CX_BX
#define _AND_ECX_ECX _AND_CX_CX
#define _AND_ECX_EDI _AND_CX_DI
#define _AND_ECX_EDX _AND_CX_DX
#define _AND_ECX_ESI _AND_CX_SI
#define _AND_ECX_ESP _AND_CX_SP

#define _AND_EDI_ _AND_DI_
#define _AND_EDI_EAX _AND_DI_AX
#define _AND_EDI_EBP _AND_DI_BP
#define _AND_EDI_EBX _AND_DI_BX
#define _AND_EDI_ECX _AND_DI_CX
#define _AND_EDI_EDI _AND_DI_DI
#define _AND_EDI_EDX _AND_DI_DX
#define _AND_EDI_ESI _AND_DI_SI
#define _AND_EDI_ESP _AND_DI_SP

#define _AND_EDX_ _AND_DX_
#define _AND_EDX_EAX _AND_DX_AX
#define _AND_EDX_EBP _AND_DX_BP
#define _AND_EDX_EBX _AND_DX_BX
#define _AND_EDX_ECX _AND_DX_CX
#define _AND_EDX_EDI _AND_DX_DI
#define _AND_EDX_EDX _AND_DX_DX
#define _AND_EDX_ESI _AND_DX_SI
#define _AND_EDX_ESP _AND_DX_SP

#define _AND_ESI_ _AND_SI_
#define _AND_ESI_EAX _AND_SI_AX
#define _AND_ESI_EBP _AND_SI_BP
#define _AND_ESI_EBX _AND_SI_BX
#define _AND_ESI_ECX _AND_SI_CX
#define _AND_ESI_EDI _AND_SI_DI
#define _AND_ESI_EDX _AND_SI_DX
#define _AND_ESI_ESI _AND_SI_SI
#define _AND_ESI_ESP _AND_SI_SP

#define _AND_ESP_ _AND_SP_
#define _AND_ESP_EAX _AND_SP_AX
#define _AND_ESP_EBP _AND_SP_BP
#define _AND_ESP_EBX _AND_SP_BX
#define _AND_ESP_ECX _AND_SP_CX
#define _AND_ESP_EDI _AND_SP_DI
#define _AND_ESP_EDX _AND_SP_DX
#define _AND_ESP_ESI _AND_SP_SI
#define _AND_ESP_ESP _AND_SP_SP
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
