/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define _POP_AX __ASM__OP__(0X66) __ASM__OP__(0X58)
#define _POP_BX __ASM__OP__(0X66) __ASM__OP__(0X5B)
#define _POP_CX __ASM__OP__(0X66) __ASM__OP__(0X59)
#define _POP_DX __ASM__OP__(0X66) __ASM__OP__(0X5A)
#define _POP_SI __ASM__OP__(0X66) __ASM__OP__(0X5E)
#define _POP_DI __ASM__OP__(0X66) __ASM__OP__(0X5F)
#define _POP_BP __ASM__OP__(0X66) __ASM__OP__(0X5D)
#define _POP_SP __ASM__OP__(0X66) __ASM__OP__(0X5C)
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define _POP_EAX __ASM__OP__(0X58)
#define _POP_EBX __ASM__OP__(0X5B)
#define _POP_ECX __ASM__OP__(0X59)
#define _POP_EDX __ASM__OP__(0X5A)
#define _POP_ESI __ASM__OP__(0X5E)
#define _POP_EDI __ASM__OP__(0X5F)
#define _POP_EBP __ASM__OP__(0X5D)
#define _POP_ESP __ASM__OP__(0X5C)
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
