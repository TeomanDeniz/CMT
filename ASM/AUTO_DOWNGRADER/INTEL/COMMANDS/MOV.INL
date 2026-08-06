#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define MOV_RAX_ MOV_EAX_
#define MOV_RAX_RAX MOV_EAX_EAX
#define MOV_RAX_RBP MOV_EAX_EBP
#define MOV_RAX_RBX MOV_EAX_EBX
#define MOV_RAX_RCX MOV_EAX_ECX
#define MOV_RAX_RDI MOV_EAX_EDI
#define MOV_RAX_RDX MOV_EAX_EDX
#define MOV_RAX_RSI MOV_EAX_ESI
#define MOV_RAX_RSP MOV_EAX_ESP

#define MOV_RBP_ MOV_EBP_
#define MOV_RBP_RAX MOV_EBP_EAX
#define MOV_RBP_RBP MOV_EBP_EBP
#define MOV_RBP_RBX MOV_EBP_EBX
#define MOV_RBP_RCX MOV_EBP_ECX
#define MOV_RBP_RDI MOV_EBP_EDI
#define MOV_RBP_RDX MOV_EBP_EDX
#define MOV_RBP_RSI MOV_EBP_ESI
#define MOV_RBP_RSP MOV_EBP_ESP

#define MOV_RBX_ MOV_EBX_
#define MOV_RBX_RAX MOV_EBX_EAX
#define MOV_RBX_RBP MOV_EBX_EBP
#define MOV_RBX_RBX MOV_EBX_EBX
#define MOV_RBX_RCX MOV_EBX_ECX
#define MOV_RBX_RDI MOV_EBX_EDI
#define MOV_RBX_RDX MOV_EBX_EDX
#define MOV_RBX_RSI MOV_EBX_ESI
#define MOV_RBX_RSP MOV_EBX_ESP

#define MOV_RCX_ MOV_ECX_
#define MOV_RCX_RAX MOV_ECX_EAX
#define MOV_RCX_RBP MOV_ECX_EBP
#define MOV_RCX_RBX MOV_ECX_EBX
#define MOV_RCX_RCX MOV_ECX_ECX
#define MOV_RCX_RDI MOV_ECX_EDI
#define MOV_RCX_RDX MOV_ECX_EDX
#define MOV_RCX_RSI MOV_ECX_ESI
#define MOV_RCX_RSP MOV_ECX_ESP

#define MOV_RDI_ MOV_EDI_
#define MOV_RDI_RAX MOV_EDI_EAX
#define MOV_RDI_RBP MOV_EDI_EBP
#define MOV_RDI_RBX MOV_EDI_EBX
#define MOV_RDI_RCX MOV_EDI_ECX
#define MOV_RDI_RDI MOV_EDI_EDI
#define MOV_RDI_RDX MOV_EDI_EDX
#define MOV_RDI_RSI MOV_EDI_ESI
#define MOV_RDI_RSP MOV_EDI_ESP

#define MOV_RDX_ MOV_EDX_
#define MOV_RDX_RAX MOV_EDX_EAX
#define MOV_RDX_RBP MOV_EDX_EBP
#define MOV_RDX_RBX MOV_EDX_EBX
#define MOV_RDX_RCX MOV_EDX_ECX
#define MOV_RDX_RDI MOV_EDX_EDI
#define MOV_RDX_RDX MOV_EDX_EDX
#define MOV_RDX_RSI MOV_EDX_ESI
#define MOV_RDX_RSP MOV_EDX_ESP

#define MOV_RSI_ MOV_ESI_
#define MOV_RSI_RAX MOV_ESI_EAX
#define MOV_RSI_RBP MOV_ESI_EBP
#define MOV_RSI_RBX MOV_ESI_EBX
#define MOV_RSI_RCX MOV_ESI_ECX
#define MOV_RSI_RDI MOV_ESI_EDI
#define MOV_RSI_RDX MOV_ESI_EDX
#define MOV_RSI_RSI MOV_ESI_ESI
#define MOV_RSI_RSP MOV_ESI_ESP

#define MOV_RSP_ MOV_ESP_
#define MOV_RSP_RAX MOV_ESP_EAX
#define MOV_RSP_RBP MOV_ESP_EBP
#define MOV_RSP_RBX MOV_ESP_EBX
#define MOV_RSP_RCX MOV_ESP_ECX
#define MOV_RSP_RDI MOV_ESP_EDI
#define MOV_RSP_RDX MOV_ESP_EDX
#define MOV_RSP_RSI MOV_ESP_ESI
#define MOV_RSP_RSP MOV_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define MOV_EAX_ MOV_AX_
#define MOV_EAX_EAX MOV_AX_AX
#define MOV_EAX_EBP MOV_AX_BP
#define MOV_EAX_EBX MOV_AX_BX
#define MOV_EAX_ECX MOV_AX_CX
#define MOV_EAX_EDI MOV_AX_DI
#define MOV_EAX_EDX MOV_AX_DX
#define MOV_EAX_ESI MOV_AX_SI
#define MOV_EAX_ESP MOV_AX_SP

#define MOV_EBP_ MOV_BP_
#define MOV_EBP_EAX MOV_BP_AX
#define MOV_EBP_EBP MOV_BP_BP
#define MOV_EBP_EBX MOV_BP_BX
#define MOV_EBP_ECX MOV_BP_CX
#define MOV_EBP_EDI MOV_BP_DI
#define MOV_EBP_EDX MOV_BP_DX
#define MOV_EBP_ESI MOV_BP_SI
#define MOV_EBP_ESP MOV_BP_SP

#define MOV_EBX_ MOV_BX_
#define MOV_EBX_EAX MOV_BX_AX
#define MOV_EBX_EBP MOV_BX_BP
#define MOV_EBX_EBX MOV_BX_BX
#define MOV_EBX_ECX MOV_BX_CX
#define MOV_EBX_EDI MOV_BX_DI
#define MOV_EBX_EDX MOV_BX_DX
#define MOV_EBX_ESI MOV_BX_SI
#define MOV_EBX_ESP MOV_BX_SP

#define MOV_ECX_ MOV_CX_
#define MOV_ECX_EAX MOV_CX_AX
#define MOV_ECX_EBP MOV_CX_BP
#define MOV_ECX_EBX MOV_CX_BX
#define MOV_ECX_ECX MOV_CX_CX
#define MOV_ECX_EDI MOV_CX_DI
#define MOV_ECX_EDX MOV_CX_DX
#define MOV_ECX_ESI MOV_CX_SI
#define MOV_ECX_ESP MOV_CX_SP

#define MOV_EDI_ MOV_DI_
#define MOV_EDI_EAX MOV_DI_AX
#define MOV_EDI_EBP MOV_DI_BP
#define MOV_EDI_EBX MOV_DI_BX
#define MOV_EDI_ECX MOV_DI_CX
#define MOV_EDI_EDI MOV_DI_DI
#define MOV_EDI_EDX MOV_DI_DX
#define MOV_EDI_ESI MOV_DI_SI
#define MOV_EDI_ESP MOV_DI_SP

#define MOV_EDX_ MOV_DX_
#define MOV_EDX_EAX MOV_DX_AX
#define MOV_EDX_EBP MOV_DX_BP
#define MOV_EDX_EBX MOV_DX_BX
#define MOV_EDX_ECX MOV_DX_CX
#define MOV_EDX_EDI MOV_DX_DI
#define MOV_EDX_EDX MOV_DX_DX
#define MOV_EDX_ESI MOV_DX_SI
#define MOV_EDX_ESP MOV_DX_SP

#define MOV_ESI_ MOV_SI_
#define MOV_ESI_EAX MOV_SI_AX
#define MOV_ESI_EBP MOV_SI_BP
#define MOV_ESI_EBX MOV_SI_BX
#define MOV_ESI_ECX MOV_SI_CX
#define MOV_ESI_EDI MOV_SI_DI
#define MOV_ESI_EDX MOV_SI_DX
#define MOV_ESI_ESI MOV_SI_SI
#define MOV_ESI_ESP MOV_SI_SP

#define MOV_ESP_ MOV_SP_
#define MOV_ESP_EAX MOV_SP_AX
#define MOV_ESP_EBP MOV_SP_BP
#define MOV_ESP_EBX MOV_SP_BX
#define MOV_ESP_ECX MOV_SP_CX
#define MOV_ESP_EDI MOV_SP_DI
#define MOV_ESP_EDX MOV_SP_DX
#define MOV_ESP_ESI MOV_SP_SI
#define MOV_ESP_ESP MOV_SP_SP
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
