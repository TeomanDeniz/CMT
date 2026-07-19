/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define _POP_AX __ASM__OP__(0X66) __ASM__OP__(0X58)
#define _POP_BX __ASM__OP__(0X66) __ASM__OP__(0X5B)
#define _POP_CX __ASM__OP__(0X66) __ASM__OP__(0X59)
#define _POP_DX __ASM__OP__(0X66) __ASM__OP__(0X5A)
#define _POP_SI __ASM__OP__(0X66) __ASM__OP__(0X5E)
#define _POP_DI __ASM__OP__(0X66) __ASM__OP__(0X5F)
#define _POP_BP __ASM__OP__(0X66) __ASM__OP__(0X5D)
#define _POP_SP __ASM__OP__(0X66) __ASM__OP__(0X5C)
#define _POP_R8W __ASM__OP__(0X66) __ASM__OP__(0X41) __ASM__OP__(0X58)
#define _POP_R9W __ASM__OP__(0X66) __ASM__OP__(0X41) __ASM__OP__(0X59)
#define _POP_R10W __ASM__OP__(0X66) __ASM__OP__(0X41) __ASM__OP__(0X5A)
#define _POP_R11W __ASM__OP__(0X66) __ASM__OP__(0X41) __ASM__OP__(0X5B)
#define _POP_R12W __ASM__OP__(0X66) __ASM__OP__(0X41) __ASM__OP__(0X5C)
#define _POP_R13W __ASM__OP__(0X66) __ASM__OP__(0X41) __ASM__OP__(0X5D)
#define _POP_R14W __ASM__OP__(0X66) __ASM__OP__(0X41) __ASM__OP__(0X5E)
#define _POP_R15W __ASM__OP__(0X66) __ASM__OP__(0X41) __ASM__OP__(0X5F)
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define _POP_RAX __ASM__OP__(0X58)
#define _POP_RBX __ASM__OP__(0X5B)
#define _POP_RCX __ASM__OP__(0X59)
#define _POP_RDX __ASM__OP__(0X5A)
#define _POP_RSI __ASM__OP__(0X5E)
#define _POP_RDI __ASM__OP__(0X5F)
#define _POP_RBP __ASM__OP__(0X5D)
#define _POP_RSP __ASM__OP__(0X5C)
#define _POP_R8 __ASM__OP__(0X41) __ASM__OP__(0X58)
#define _POP_R9 __ASM__OP__(0X41) __ASM__OP__(0X59)
#define _POP_R10 __ASM__OP__(0X41) __ASM__OP__(0X5A)
#define _POP_R11 __ASM__OP__(0X41) __ASM__OP__(0X5B)
#define _POP_R12 __ASM__OP__(0X41) __ASM__OP__(0X5C)
#define _POP_R13 __ASM__OP__(0X41) __ASM__OP__(0X5D)
#define _POP_R14 __ASM__OP__(0X41) __ASM__OP__(0X5E)
#define _POP_R15 __ASM__OP__(0X41) __ASM__OP__(0X5F)
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
