#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _SBB_RAX_ _SBB_EAX_
#define _SBB_RAX_RAX _SBB_EAX_EAX
#define _SBB_RAX_RBP _SBB_EAX_EBP
#define _SBB_RAX_RBX _SBB_EAX_EBX
#define _SBB_RAX_RCX _SBB_EAX_ECX
#define _SBB_RAX_RDI _SBB_EAX_EDI
#define _SBB_RAX_RDX _SBB_EAX_EDX
#define _SBB_RAX_RSI _SBB_EAX_ESI
#define _SBB_RAX_RSP _SBB_EAX_ESP

#define _SBB_RBP_ _SBB_EBP_
#define _SBB_RBP_RAX _SBB_EBP_EAX
#define _SBB_RBP_RBP _SBB_EBP_EBP
#define _SBB_RBP_RBX _SBB_EBP_EBX
#define _SBB_RBP_RCX _SBB_EBP_ECX
#define _SBB_RBP_RDI _SBB_EBP_EDI
#define _SBB_RBP_RDX _SBB_EBP_EDX
#define _SBB_RBP_RSI _SBB_EBP_ESI
#define _SBB_RBP_RSP _SBB_EBP_ESP

#define _SBB_RBX_ _SBB_EBX_
#define _SBB_RBX_RAX _SBB_EBX_EAX
#define _SBB_RBX_RBP _SBB_EBX_EBP
#define _SBB_RBX_RBX _SBB_EBX_EBX
#define _SBB_RBX_RCX _SBB_EBX_ECX
#define _SBB_RBX_RDI _SBB_EBX_EDI
#define _SBB_RBX_RDX _SBB_EBX_EDX
#define _SBB_RBX_RSI _SBB_EBX_ESI
#define _SBB_RBX_RSP _SBB_EBX_ESP

#define _SBB_RCX_ _SBB_ECX_
#define _SBB_RCX_RAX _SBB_ECX_EAX
#define _SBB_RCX_RBP _SBB_ECX_EBP
#define _SBB_RCX_RBX _SBB_ECX_EBX
#define _SBB_RCX_RCX _SBB_ECX_ECX
#define _SBB_RCX_RDI _SBB_ECX_EDI
#define _SBB_RCX_RDX _SBB_ECX_EDX
#define _SBB_RCX_RSI _SBB_ECX_ESI
#define _SBB_RCX_RSP _SBB_ECX_ESP

#define _SBB_RDI_ _SBB_EDI_
#define _SBB_RDI_RAX _SBB_EDI_EAX
#define _SBB_RDI_RBP _SBB_EDI_EBP
#define _SBB_RDI_RBX _SBB_EDI_EBX
#define _SBB_RDI_RCX _SBB_EDI_ECX
#define _SBB_RDI_RDI _SBB_EDI_EDI
#define _SBB_RDI_RDX _SBB_EDI_EDX
#define _SBB_RDI_RSI _SBB_EDI_ESI
#define _SBB_RDI_RSP _SBB_EDI_ESP

#define _SBB_RDX_ _SBB_EDX_
#define _SBB_RDX_RAX _SBB_EDX_EAX
#define _SBB_RDX_RBP _SBB_EDX_EBP
#define _SBB_RDX_RBX _SBB_EDX_EBX
#define _SBB_RDX_RCX _SBB_EDX_ECX
#define _SBB_RDX_RDI _SBB_EDX_EDI
#define _SBB_RDX_RDX _SBB_EDX_EDX
#define _SBB_RDX_RSI _SBB_EDX_ESI
#define _SBB_RDX_RSP _SBB_EDX_ESP

#define _SBB_RSI_ _SBB_ESI_
#define _SBB_RSI_RAX _SBB_ESI_EAX
#define _SBB_RSI_RBP _SBB_ESI_EBP
#define _SBB_RSI_RBX _SBB_ESI_EBX
#define _SBB_RSI_RCX _SBB_ESI_ECX
#define _SBB_RSI_RDI _SBB_ESI_EDI
#define _SBB_RSI_RDX _SBB_ESI_EDX
#define _SBB_RSI_RSI _SBB_ESI_ESI
#define _SBB_RSI_RSP _SBB_ESI_ESP

#define _SBB_RSP_ _SBB_ESP_
#define _SBB_RSP_RAX _SBB_ESP_EAX
#define _SBB_RSP_RBP _SBB_ESP_EBP
#define _SBB_RSP_RBX _SBB_ESP_EBX
#define _SBB_RSP_RCX _SBB_ESP_ECX
#define _SBB_RSP_RDI _SBB_ESP_EDI
#define _SBB_RSP_RDX _SBB_ESP_EDX
#define _SBB_RSP_RSI _SBB_ESP_ESI
#define _SBB_RSP_RSP _SBB_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define _SBB_EAX_ _SBB_AX_
#define _SBB_EAX_EAX _SBB_AX_AX
#define _SBB_EAX_EBP _SBB_AX_BP
#define _SBB_EAX_EBX _SBB_AX_BX
#define _SBB_EAX_ECX _SBB_AX_CX
#define _SBB_EAX_EDI _SBB_AX_DI
#define _SBB_EAX_EDX _SBB_AX_DX
#define _SBB_EAX_ESI _SBB_AX_SI
#define _SBB_EAX_ESP _SBB_AX_SP

#define _SBB_EBP_ _SBB_BP_
#define _SBB_EBP_EAX _SBB_BP_AX
#define _SBB_EBP_EBP _SBB_BP_BP
#define _SBB_EBP_EBX _SBB_BP_BX
#define _SBB_EBP_ECX _SBB_BP_CX
#define _SBB_EBP_EDI _SBB_BP_DI
#define _SBB_EBP_EDX _SBB_BP_DX
#define _SBB_EBP_ESI _SBB_BP_SI
#define _SBB_EBP_ESP _SBB_BP_SP

#define _SBB_EBX_ _SBB_BX_
#define _SBB_EBX_EAX _SBB_BX_AX
#define _SBB_EBX_EBP _SBB_BX_BP
#define _SBB_EBX_EBX _SBB_BX_BX
#define _SBB_EBX_ECX _SBB_BX_CX
#define _SBB_EBX_EDI _SBB_BX_DI
#define _SBB_EBX_EDX _SBB_BX_DX
#define _SBB_EBX_ESI _SBB_BX_SI
#define _SBB_EBX_ESP _SBB_BX_SP

#define _SBB_ECX_ _SBB_CX_
#define _SBB_ECX_EAX _SBB_CX_AX
#define _SBB_ECX_EBP _SBB_CX_BP
#define _SBB_ECX_EBX _SBB_CX_BX
#define _SBB_ECX_ECX _SBB_CX_CX
#define _SBB_ECX_EDI _SBB_CX_DI
#define _SBB_ECX_EDX _SBB_CX_DX
#define _SBB_ECX_ESI _SBB_CX_SI
#define _SBB_ECX_ESP _SBB_CX_SP

#define _SBB_EDI_ _SBB_DI_
#define _SBB_EDI_EAX _SBB_DI_AX
#define _SBB_EDI_EBP _SBB_DI_BP
#define _SBB_EDI_EBX _SBB_DI_BX
#define _SBB_EDI_ECX _SBB_DI_CX
#define _SBB_EDI_EDI _SBB_DI_DI
#define _SBB_EDI_EDX _SBB_DI_DX
#define _SBB_EDI_ESI _SBB_DI_SI
#define _SBB_EDI_ESP _SBB_DI_SP

#define _SBB_EDX_ _SBB_DX_
#define _SBB_EDX_EAX _SBB_DX_AX
#define _SBB_EDX_EBP _SBB_DX_BP
#define _SBB_EDX_EBX _SBB_DX_BX
#define _SBB_EDX_ECX _SBB_DX_CX
#define _SBB_EDX_EDI _SBB_DX_DI
#define _SBB_EDX_EDX _SBB_DX_DX
#define _SBB_EDX_ESI _SBB_DX_SI
#define _SBB_EDX_ESP _SBB_DX_SP

#define _SBB_ESI_ _SBB_SI_
#define _SBB_ESI_EAX _SBB_SI_AX
#define _SBB_ESI_EBP _SBB_SI_BP
#define _SBB_ESI_EBX _SBB_SI_BX
#define _SBB_ESI_ECX _SBB_SI_CX
#define _SBB_ESI_EDI _SBB_SI_DI
#define _SBB_ESI_EDX _SBB_SI_DX
#define _SBB_ESI_ESI _SBB_SI_SI
#define _SBB_ESI_ESP _SBB_SI_SP

#define _SBB_ESP_ _SBB_SP_
#define _SBB_ESP_EAX _SBB_SP_AX
#define _SBB_ESP_EBP _SBB_SP_BP
#define _SBB_ESP_EBX _SBB_SP_BX
#define _SBB_ESP_ECX _SBB_SP_CX
#define _SBB_ESP_EDI _SBB_SP_DI
#define _SBB_ESP_EDX _SBB_SP_DX
#define _SBB_ESP_ESI _SBB_SP_SI
#define _SBB_ESP_ESP _SBB_SP_SP
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
