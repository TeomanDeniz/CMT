#define SIZEOF_PUSH_ 5

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define SIZEOF_PUSH_AX 2
#define SIZEOF_PUSH_BX 2
#define SIZEOF_PUSH_CX 2
#define SIZEOF_PUSH_DX 2
#define SIZEOF_PUSH_SI 2
#define SIZEOF_PUSH_DI 2
#define SIZEOF_PUSH_BP 2
#define SIZEOF_PUSH_SP 2
#define SIZEOF_PUSH_R8W 3
#define SIZEOF_PUSH_R9W 3
#define SIZEOF_PUSH_R10W 3
#define SIZEOF_PUSH_R11W 3
#define SIZEOF_PUSH_R12W 3
#define SIZEOF_PUSH_R13W 3
#define SIZEOF_PUSH_R14W 3
#define SIZEOF_PUSH_R15W 3
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define SIZEOF_PUSH_RAX 1
#define SIZEOF_PUSH_RBX 1
#define SIZEOF_PUSH_RCX 1
#define SIZEOF_PUSH_RDX 1
#define SIZEOF_PUSH_RSI 1
#define SIZEOF_PUSH_RDI 1
#define SIZEOF_PUSH_RBP 1
#define SIZEOF_PUSH_RSP 1
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
