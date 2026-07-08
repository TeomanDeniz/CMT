#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define PUSH_AX _PUSH_AX
#define PUSH_BX _PUSH_BX
#define PUSH_CX _PUSH_CX
#define PUSH_DX _PUSH_DX
#define PUSH_SI _PUSH_SI
#define PUSH_DI _PUSH_DI
#define PUSH_BP _PUSH_BP
#define PUSH_SP _PUSH_SP

#ifdef __SYSTEM_64_BIT__
#define PUSH_R8W _PUSH_R8W
#define PUSH_R9W _PUSH_R9W
#define PUSH_R10W _PUSH_R10W
#define PUSH_R11W _PUSH_R11W
#define PUSH_R12W _PUSH_R12W
#define PUSH_R13W _PUSH_R13W
#define PUSH_R14W _PUSH_R14W
#define PUSH_R15W _PUSH_R15W
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
