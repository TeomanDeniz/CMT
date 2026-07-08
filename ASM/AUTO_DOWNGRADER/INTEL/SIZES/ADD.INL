#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define SIZEOF_ADD_RAX_ SIZEOF_ADD_EAX_
#define SIZEOF_ADD_RBX_ SIZEOF_ADD_EBX_
#define SIZEOF_ADD_RCX_ SIZEOF_ADD_ECX_
#define SIZEOF_ADD_RDX_ SIZEOF_ADD_EDX_

#ifndef __SYSTEM_32_BIT__
#define SIZEOF_ADD_EAX_ SIZEOF_ADD_AX_
#define SIZEOF_ADD_EBX_ SIZEOF_ADD_BX_
#define SIZEOF_ADD_ECX_ SIZEOF_ADD_CX_
#define SIZEOF_ADD_EDX_ SIZEOF_ADD_DX_
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
