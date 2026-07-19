#define _PUSH_(VALUE) __ASM__OP__(0X68) __ASM__IMM32__(VALUE)

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define _PUSH_AX __ASM__OP__(0X66) __ASM__OP__(0X50)
#define _PUSH_BX __ASM__OP__(0X66) __ASM__OP__(0X53)
#define _PUSH_CX __ASM__OP__(0X66) __ASM__OP__(0X51)
#define _PUSH_DX __ASM__OP__(0X66) __ASM__OP__(0X52)
#define _PUSH_SI __ASM__OP__(0X66) __ASM__OP__(0X56)
#define _PUSH_DI __ASM__OP__(0X66) __ASM__OP__(0X57)
#define _PUSH_BP __ASM__OP__(0X66) __ASM__OP__(0X55)
#define _PUSH_SP __ASM__OP__(0X66) __ASM__OP__(0X54)
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define _PUSH_EAX __ASM__OP__(0X50)
#define _PUSH_EBX __ASM__OP__(0X53)
#define _PUSH_ECX __ASM__OP__(0X51)
#define _PUSH_EDX __ASM__OP__(0X52)
#define _PUSH_ESI __ASM__OP__(0X56)
#define _PUSH_EDI __ASM__OP__(0X57)
#define _PUSH_EBP __ASM__OP__(0X55)
#define _PUSH_ESP __ASM__OP__(0X54)
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
