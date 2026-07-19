#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define POP_AX _POP_AX
#define POP_BX _POP_BX
#define POP_CX _POP_CX
#define POP_DX _POP_DX
#define POP_SI _POP_SI
#define POP_DI _POP_DI
#define POP_BP _POP_BP
#define POP_SP _POP_SP

#ifdef __SYSTEM_64_BIT__
#define POP_R8W _POP_R8W
#define POP_R9W _POP_R9W
#define POP_R10W _POP_R10W
#define POP_R11W _POP_R11W
#define POP_R12W _POP_R12W
#define POP_R13W _POP_R13W
#define POP_R14W _POP_R14W
#define POP_R15W _POP_R15W
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
