/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define SIZEOF_POP_AX 2
#define SIZEOF_POP_BX 2
#define SIZEOF_POP_CX 2
#define SIZEOF_POP_DX 2
#define SIZEOF_POP_SI 2
#define SIZEOF_POP_DI 2
#define SIZEOF_POP_BP 2
#define SIZEOF_POP_SP 2
#define SIZEOF_POP_R8W 3
#define SIZEOF_POP_R9W 3
#define SIZEOF_POP_R10W 3
#define SIZEOF_POP_R11W 3
#define SIZEOF_POP_R12W 3
#define SIZEOF_POP_R13W 3
#define SIZEOF_POP_R14W 3
#define SIZEOF_POP_R15W 3
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define SIZEOF_POP_RAX 1
#define SIZEOF_POP_RBX 1
#define SIZEOF_POP_RCX 1
#define SIZEOF_POP_RDX 1
#define SIZEOF_POP_RSI 1
#define SIZEOF_POP_RDI 1
#define SIZEOF_POP_RBP 1
#define SIZEOF_POP_RSP 1
#define SIZEOF_POP_R8 2
#define SIZEOF_POP_R9 2
#define SIZEOF_POP_R10 2
#define SIZEOF_POP_R11 2
#define SIZEOF_POP_R12 2
#define SIZEOF_POP_R13 2
#define SIZEOF_POP_R14 2
#define SIZEOF_POP_R15 2
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
