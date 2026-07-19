#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#define ADD_AL_(VALUE) CMT_ASM("addb $" _(VALUE) ", %al")
#define ADD_BL_(VALUE) CMT_ASM("addb $" _(VALUE) ", %bl")
#define ADD_CL_(VALUE) CMT_ASM("addb $" _(VALUE) ", %cl")
#define ADD_DL_(VALUE) CMT_ASM("addb $" _(VALUE) ", %dl")
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define ADD_AX_(VALUE) CMT_ASM("addw $" _(VALUE) ", %ax")
#define ADD_BX_(VALUE) CMT_ASM("addw $" _(VALUE) ", %bx")
#define ADD_CX_(VALUE) CMT_ASM("addw $" _(VALUE) ", %cx")
#define ADD_DX_(VALUE) CMT_ASM("addw $" _(VALUE) ", %dx")
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
