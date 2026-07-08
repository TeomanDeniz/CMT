#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define PUSH_AX push ax
#define PUSH_BX push bx
#define PUSH_CX push cx
#define PUSH_DX push dx
#define PUSH_SI push si
#define PUSH_DI push di
#define PUSH_BP push bp
#define PUSH_SP push sp

#ifdef __SYSTEM_64_BIT__
#define PUSH_R8W push r8w
#define PUSH_R9W push r9w
#define PUSH_R10W push r10w
#define PUSH_R11W push r11w
#define PUSH_R12W push r12w
#define PUSH_R13W push r13w
#define PUSH_R14W push r14w
#define PUSH_R15W push r15w
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
