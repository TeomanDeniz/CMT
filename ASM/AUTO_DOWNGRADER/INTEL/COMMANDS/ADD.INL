#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define ADD_RAX_ ADD_EAX_
#define ADD_RAX_RAX ADD_EAX_EAX
#define ADD_RAX_RBP ADD_EAX_EBP
#define ADD_RAX_RBX ADD_EAX_EBX
#define ADD_RAX_RCX ADD_EAX_ECX
#define ADD_RAX_RDI ADD_EAX_EDI
#define ADD_RAX_RDX ADD_EAX_EDX
#define ADD_RAX_RSI ADD_EAX_ESI
#define ADD_RAX_RSP ADD_EAX_ESP

#define ADD_RBP_ ADD_EBP_
#define ADD_RBP_RAX ADD_EBP_EAX
#define ADD_RBP_RBP ADD_EBP_EBP
#define ADD_RBP_RBX ADD_EBP_EBX
#define ADD_RBP_RCX ADD_EBP_ECX
#define ADD_RBP_RDI ADD_EBP_EDI
#define ADD_RBP_RDX ADD_EBP_EDX
#define ADD_RBP_RSI ADD_EBP_ESI
#define ADD_RBP_RSP ADD_EBP_ESP

#define ADD_RBX_ ADD_EBX_
#define ADD_RBX_RAX ADD_EBX_EAX
#define ADD_RBX_RBP ADD_EBX_EBP
#define ADD_RBX_RBX ADD_EBX_EBX
#define ADD_RBX_RCX ADD_EBX_ECX
#define ADD_RBX_RDI ADD_EBX_EDI
#define ADD_RBX_RDX ADD_EBX_EDX
#define ADD_RBX_RSI ADD_EBX_ESI
#define ADD_RBX_RSP ADD_EBX_ESP

#define ADD_RCX_ ADD_ECX_
#define ADD_RCX_RAX ADD_ECX_EAX
#define ADD_RCX_RBP ADD_ECX_EBP
#define ADD_RCX_RBX ADD_ECX_EBX
#define ADD_RCX_RCX ADD_ECX_ECX
#define ADD_RCX_RDI ADD_ECX_EDI
#define ADD_RCX_RDX ADD_ECX_EDX
#define ADD_RCX_RSI ADD_ECX_ESI
#define ADD_RCX_RSP ADD_ECX_ESP

#define ADD_RDI_ ADD_EDI_
#define ADD_RDI_RAX ADD_EDI_EAX
#define ADD_RDI_RBP ADD_EDI_EBP
#define ADD_RDI_RBX ADD_EDI_EBX
#define ADD_RDI_RCX ADD_EDI_ECX
#define ADD_RDI_RDI ADD_EDI_EDI
#define ADD_RDI_RDX ADD_EDI_EDX
#define ADD_RDI_RSI ADD_EDI_ESI
#define ADD_RDI_RSP ADD_EDI_ESP

#define ADD_RDX_ ADD_EDX_
#define ADD_RDX_RAX ADD_EDX_EAX
#define ADD_RDX_RBP ADD_EDX_EBP
#define ADD_RDX_RBX ADD_EDX_EBX
#define ADD_RDX_RCX ADD_EDX_ECX
#define ADD_RDX_RDI ADD_EDX_EDI
#define ADD_RDX_RDX ADD_EDX_EDX
#define ADD_RDX_RSI ADD_EDX_ESI
#define ADD_RDX_RSP ADD_EDX_ESP

#define ADD_RSI_ ADD_ESI_
#define ADD_RSI_RAX ADD_ESI_EAX
#define ADD_RSI_RBP ADD_ESI_EBP
#define ADD_RSI_RBX ADD_ESI_EBX
#define ADD_RSI_RCX ADD_ESI_ECX
#define ADD_RSI_RDI ADD_ESI_EDI
#define ADD_RSI_RDX ADD_ESI_EDX
#define ADD_RSI_RSI ADD_ESI_ESI
#define ADD_RSI_RSP ADD_ESI_ESP

#define ADD_RSP_ ADD_ESP_
#define ADD_RSP_RAX ADD_ESP_EAX
#define ADD_RSP_RBP ADD_ESP_EBP
#define ADD_RSP_RBX ADD_ESP_EBX
#define ADD_RSP_RCX ADD_ESP_ECX
#define ADD_RSP_RDI ADD_ESP_EDI
#define ADD_RSP_RDX ADD_ESP_EDX
#define ADD_RSP_RSI ADD_ESP_ESI
#define ADD_RSP_RSP ADD_ESP_ESP

#ifndef __SYSTEM_32_BIT__
#define ADD_EAX_ ADD_AX_
#define ADD_EAX_EAX ADD_AX_AX
#define ADD_EAX_EBP ADD_AX_BP
#define ADD_EAX_EBX ADD_AX_BX
#define ADD_EAX_ECX ADD_AX_CX
#define ADD_EAX_EDI ADD_AX_DI
#define ADD_EAX_EDX ADD_AX_DX
#define ADD_EAX_ESI ADD_AX_SI
#define ADD_EAX_ESP ADD_AX_SP

#define ADD_EBP_ ADD_BP_
#define ADD_EBP_EAX ADD_BP_AX
#define ADD_EBP_EBP ADD_BP_BP
#define ADD_EBP_EBX ADD_BP_BX
#define ADD_EBP_ECX ADD_BP_CX
#define ADD_EBP_EDI ADD_BP_DI
#define ADD_EBP_EDX ADD_BP_DX
#define ADD_EBP_ESI ADD_BP_SI
#define ADD_EBP_ESP ADD_BP_SP

#define ADD_EBX_ ADD_BX_
#define ADD_EBX_EAX ADD_BX_AX
#define ADD_EBX_EBP ADD_BX_BP
#define ADD_EBX_EBX ADD_BX_BX
#define ADD_EBX_ECX ADD_BX_CX
#define ADD_EBX_EDI ADD_BX_DI
#define ADD_EBX_EDX ADD_BX_DX
#define ADD_EBX_ESI ADD_BX_SI
#define ADD_EBX_ESP ADD_BX_SP

#define ADD_ECX_ ADD_CX_
#define ADD_ECX_EAX ADD_CX_AX
#define ADD_ECX_EBP ADD_CX_BP
#define ADD_ECX_EBX ADD_CX_BX
#define ADD_ECX_ECX ADD_CX_CX
#define ADD_ECX_EDI ADD_CX_DI
#define ADD_ECX_EDX ADD_CX_DX
#define ADD_ECX_ESI ADD_CX_SI
#define ADD_ECX_ESP ADD_CX_SP

#define ADD_EDI_ ADD_DI_
#define ADD_EDI_EAX ADD_DI_AX
#define ADD_EDI_EBP ADD_DI_BP
#define ADD_EDI_EBX ADD_DI_BX
#define ADD_EDI_ECX ADD_DI_CX
#define ADD_EDI_EDI ADD_DI_DI
#define ADD_EDI_EDX ADD_DI_DX
#define ADD_EDI_ESI ADD_DI_SI
#define ADD_EDI_ESP ADD_DI_SP

#define ADD_EDX_ ADD_DX_
#define ADD_EDX_EAX ADD_DX_AX
#define ADD_EDX_EBP ADD_DX_BP
#define ADD_EDX_EBX ADD_DX_BX
#define ADD_EDX_ECX ADD_DX_CX
#define ADD_EDX_EDI ADD_DX_DI
#define ADD_EDX_EDX ADD_DX_DX
#define ADD_EDX_ESI ADD_DX_SI
#define ADD_EDX_ESP ADD_DX_SP

#define ADD_ESI_ ADD_SI_
#define ADD_ESI_EAX ADD_SI_AX
#define ADD_ESI_EBP ADD_SI_BP
#define ADD_ESI_EBX ADD_SI_BX
#define ADD_ESI_ECX ADD_SI_CX
#define ADD_ESI_EDI ADD_SI_DI
#define ADD_ESI_EDX ADD_SI_DX
#define ADD_ESI_ESI ADD_SI_SI
#define ADD_ESI_ESP ADD_SI_SP

#define ADD_ESP_ ADD_SP_
#define ADD_ESP_EAX ADD_SP_AX
#define ADD_ESP_EBP ADD_SP_BP
#define ADD_ESP_EBX ADD_SP_BX
#define ADD_ESP_ECX ADD_SP_CX
#define ADD_ESP_EDI ADD_SP_DI
#define ADD_ESP_EDX ADD_SP_DX
#define ADD_ESP_ESI ADD_SP_SI
#define ADD_ESP_ESP ADD_SP_SP
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
