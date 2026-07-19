#define SIZEOF_PUSH_ 3

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define SIZEOF_PUSH_AX 1
#define SIZEOF_PUSH_BX 1
#define SIZEOF_PUSH_CX 1
#define SIZEOF_PUSH_DX 1
#define SIZEOF_PUSH_SI 1
#define SIZEOF_PUSH_DI 1
#define SIZEOF_PUSH_BP 1
#define SIZEOF_PUSH_SP 1
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
