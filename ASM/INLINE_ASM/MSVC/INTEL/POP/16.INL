#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define POP_AX pop ax
#define POP_BX pop bx
#define POP_CX pop cx
#define POP_DX pop dx
#define POP_SI pop si
#define POP_DI pop di
#define POP_BP pop bp
#define POP_SP pop sp

#ifdef __SYSTEM_64_BIT__
#define POP_R8W pop r8w
#define POP_R9W pop r9w
#define POP_R10W pop r10w
#define POP_R11W pop r11w
#define POP_R12W pop r12w
#define POP_R13W pop r13w
#define POP_R14W pop r14w
#define POP_R15W pop r15w
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
