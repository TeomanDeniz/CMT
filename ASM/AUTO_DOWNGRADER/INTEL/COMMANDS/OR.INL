#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define OR_RAX_ OR_EAX_
#define OR_RAX_RAX OR_EAX_EAX
#define OR_RAX_RBP OR_EAX_EBP
#define OR_RAX_RBX OR_EAX_EBX
#define OR_RAX_RCX OR_EAX_ECX
#define OR_RAX_RDI OR_EAX_EDI
#define OR_RAX_RDX OR_EAX_EDX
#define OR_RAX_RSI OR_EAX_ESI
#define OR_RAX_RSP OR_EAX_ESP

#define OR_RBP_ OR_EBP_
#define OR_RBP_RAX OR_EBP_EAX
#define OR_RBP_RBP OR_EBP_EBP
#define OR_RBP_RBX OR_EBP_EBX
#define OR_RBP_RCX OR_EBP_ECX
#define OR_RBP_RDI OR_EBP_EDI
#define OR_RBP_RDX OR_EBP_EDX
#define OR_RBP_RSI OR_EBP_ESI
#define OR_RBP_RSP OR_EBP_ESP

#define OR_RBX_ OR_EBX_
#define OR_RBX_RAX OR_EBX_EAX
#define OR_RBX_RBP OR_EBX_EBP
#define OR_RBX_RBX OR_EBX_EBX
#define OR_RBX_RCX OR_EBX_ECX
#define OR_RBX_RDI OR_EBX_EDI
#define OR_RBX_RDX OR_EBX_EDX
#define OR_RBX_RSI OR_EBX_ESI
#define OR_RBX_RSP OR_EBX_ESP

#define OR_RCX_ OR_ECX_
#define OR_RCX_RAX OR_ECX_EAX
#define OR_RCX_RBP OR_ECX_EBP
#define OR_RCX_RBX OR_ECX_EBX
#define OR_RCX_RCX OR_ECX_ECX
#define OR_RCX_RDI OR_ECX_EDI
#define OR_RCX_RDX OR_ECX_EDX
#define OR_RCX_RSI OR_ECX_ESI
#define OR_RCX_RSP OR_ECX_ESP

#define OR_RDI_ OR_EDI_
#define OR_RDI_RAX OR_EDI_EAX
#define OR_RDI_RBP OR_EDI_EBP
#define OR_RDI_RBX OR_EDI_EBX
#define OR_RDI_RCX OR_EDI_ECX
#define OR_RDI_RDI OR_EDI_EDI
#define OR_RDI_RDX OR_EDI_EDX
#define OR_RDI_RSI OR_EDI_ESI
#define OR_RDI_RSP OR_EDI_ESP

#define OR_RDX_ OR_EDX_
#define OR_RDX_RAX OR_EDX_EAX
#define OR_RDX_RBP OR_EDX_EBP
#define OR_RDX_RBX OR_EDX_EBX
#define OR_RDX_RCX OR_EDX_ECX
#define OR_RDX_RDI OR_EDX_EDI
#define OR_RDX_RDX OR_EDX_EDX
#define OR_RDX_RSI OR_EDX_ESI
#define OR_RDX_RSP OR_EDX_ESP

#define OR_RSI_ OR_ESI_
#define OR_RSI_RAX OR_ESI_EAX
#define OR_RSI_RBP OR_ESI_EBP
#define OR_RSI_RBX OR_ESI_EBX
#define OR_RSI_RCX OR_ESI_ECX
#define OR_RSI_RDI OR_ESI_EDI
#define OR_RSI_RDX OR_ESI_EDX
#define OR_RSI_RSI OR_ESI_ESI
#define OR_RSI_RSP OR_ESI_ESP

#define OR_RSP_ OR_ESP_
#define OR_RSP_RAX OR_ESP_EAX
#define OR_RSP_RBP OR_ESP_EBP
#define OR_RSP_RBX OR_ESP_EBX
#define OR_RSP_RCX OR_ESP_ECX
#define OR_RSP_RDI OR_ESP_EDI
#define OR_RSP_RDX OR_ESP_EDX
#define OR_RSP_RSI OR_ESP_ESI
#define OR_RSP_RSP OR_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define OR_EAX_ OR_AX_
#define OR_EAX_EAX OR_AX_AX
#define OR_EAX_EBP OR_AX_BP
#define OR_EAX_EBX OR_AX_BX
#define OR_EAX_ECX OR_AX_CX
#define OR_EAX_EDI OR_AX_DI
#define OR_EAX_EDX OR_AX_DX
#define OR_EAX_ESI OR_AX_SI
#define OR_EAX_ESP OR_AX_SP

#define OR_EBP_ OR_BP_
#define OR_EBP_EAX OR_BP_AX
#define OR_EBP_EBP OR_BP_BP
#define OR_EBP_EBX OR_BP_BX
#define OR_EBP_ECX OR_BP_CX
#define OR_EBP_EDI OR_BP_DI
#define OR_EBP_EDX OR_BP_DX
#define OR_EBP_ESI OR_BP_SI
#define OR_EBP_ESP OR_BP_SP

#define OR_EBX_ OR_BX_
#define OR_EBX_EAX OR_BX_AX
#define OR_EBX_EBP OR_BX_BP
#define OR_EBX_EBX OR_BX_BX
#define OR_EBX_ECX OR_BX_CX
#define OR_EBX_EDI OR_BX_DI
#define OR_EBX_EDX OR_BX_DX
#define OR_EBX_ESI OR_BX_SI
#define OR_EBX_ESP OR_BX_SP

#define OR_ECX_ OR_CX_
#define OR_ECX_EAX OR_CX_AX
#define OR_ECX_EBP OR_CX_BP
#define OR_ECX_EBX OR_CX_BX
#define OR_ECX_ECX OR_CX_CX
#define OR_ECX_EDI OR_CX_DI
#define OR_ECX_EDX OR_CX_DX
#define OR_ECX_ESI OR_CX_SI
#define OR_ECX_ESP OR_CX_SP

#define OR_EDI_ OR_DI_
#define OR_EDI_EAX OR_DI_AX
#define OR_EDI_EBP OR_DI_BP
#define OR_EDI_EBX OR_DI_BX
#define OR_EDI_ECX OR_DI_CX
#define OR_EDI_EDI OR_DI_DI
#define OR_EDI_EDX OR_DI_DX
#define OR_EDI_ESI OR_DI_SI
#define OR_EDI_ESP OR_DI_SP

#define OR_EDX_ OR_DX_
#define OR_EDX_EAX OR_DX_AX
#define OR_EDX_EBP OR_DX_BP
#define OR_EDX_EBX OR_DX_BX
#define OR_EDX_ECX OR_DX_CX
#define OR_EDX_EDI OR_DX_DI
#define OR_EDX_EDX OR_DX_DX
#define OR_EDX_ESI OR_DX_SI
#define OR_EDX_ESP OR_DX_SP

#define OR_ESI_ OR_SI_
#define OR_ESI_EAX OR_SI_AX
#define OR_ESI_EBP OR_SI_BP
#define OR_ESI_EBX OR_SI_BX
#define OR_ESI_ECX OR_SI_CX
#define OR_ESI_EDI OR_SI_DI
#define OR_ESI_EDX OR_SI_DX
#define OR_ESI_ESI OR_SI_SI
#define OR_ESI_ESP OR_SI_SP

#define OR_ESP_ OR_SP_
#define OR_ESP_EAX OR_SP_AX
#define OR_ESP_EBP OR_SP_BP
#define OR_ESP_EBX OR_SP_BX
#define OR_ESP_ECX OR_SP_CX
#define OR_ESP_EDI OR_SP_DI
#define OR_ESP_EDX OR_SP_DX
#define OR_ESP_ESI OR_SP_SI
#define OR_ESP_ESP OR_SP_SP
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
