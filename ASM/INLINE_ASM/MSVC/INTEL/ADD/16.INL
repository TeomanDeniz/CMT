#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#define ADD_AL_(VALUE) add al, VALUE
#define ADD_BL_(VALUE) add bl, VALUE
#define ADD_CL_(VALUE) add cl, VALUE
#define ADD_DL_(VALUE) add dl, VALUE
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define ADD_AX_(VALUE) add ax, VALUE
#define ADD_BX_(VALUE) add bx, VALUE
#define ADD_CX_(VALUE) add cx, VALUE
#define ADD_DX_(VALUE) add dx, VALUE
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
