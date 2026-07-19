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
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define SIZEOF_PUSH_EAX 1
#define SIZEOF_PUSH_EBX 1
#define SIZEOF_PUSH_ECX 1
#define SIZEOF_PUSH_EDX 1
#define SIZEOF_PUSH_ESI 1
#define SIZEOF_PUSH_EDI 1
#define SIZEOF_PUSH_EBP 1
#define SIZEOF_PUSH_ESP 1
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
