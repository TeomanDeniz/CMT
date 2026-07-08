#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _ADD_RAX_(VALUE) _ADD_EAX_(VALUE)
#define _ADD_RBX_(VALUE) _ADD_EBX_(VALUE)
#define _ADD_RCX_(VALUE) _ADD_ECX_(VALUE)
#define _ADD_RDX_(VALUE) _ADD_EDX_(VALUE)

#ifndef __SYSTEM_32_BIT__
#define _ADD_EAX_(VALUE) _ADD_AX_(VALUE)
#define _ADD_EBX_(VALUE) _ADD_BX_(VALUE)
#define _ADD_ECX_(VALUE) _ADD_CX_(VALUE)
#define _ADD_EDX_(VALUE) _ADD_DX_(VALUE)
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
