#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define SIZEOF_MOVABS_RAX_ SIZEOF_MOV_EAX_
#define SIZEOF_MOVABS_RBX_ SIZEOF_MOV_EBX_
#define SIZEOF_MOVABS_RCX_ SIZEOF_MOV_ECX_
#define SIZEOF_MOVABS_RDX_ SIZEOF_MOV_EDX_
#define SIZEOF_MOVABS_RSI_ SIZEOF_MOV_ESI_
#define SIZEOF_MOVABS_RDI_ SIZEOF_MOV_EDI_
#define SIZEOF_MOVABS_RBP_ SIZEOF_MOV_EBP_
#define SIZEOF_MOVABS_RSP_ SIZEOF_MOV_ESP_
#endif /* !__SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
