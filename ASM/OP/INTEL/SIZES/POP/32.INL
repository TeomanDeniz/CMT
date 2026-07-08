/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define SIZEOF_POP_AX 2
#define SIZEOF_POP_BX 2
#define SIZEOF_POP_CX 2
#define SIZEOF_POP_DX 2
#define SIZEOF_POP_SI 2
#define SIZEOF_POP_DI 2
#define SIZEOF_POP_BP 2
#define SIZEOF_POP_SP 2
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define SIZEOF_POP_EAX 1
#define SIZEOF_POP_EBX 1
#define SIZEOF_POP_ECX 1
#define SIZEOF_POP_EDX 1
#define SIZEOF_POP_ESI 1
#define SIZEOF_POP_EDI 1
#define SIZEOF_POP_EBP 1
#define SIZEOF_POP_ESP 1
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
