/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define SIZEOF_POP_AX 1
#define SIZEOF_POP_BX 1
#define SIZEOF_POP_CX 1
#define SIZEOF_POP_DX 1
#define SIZEOF_POP_SI 1
#define SIZEOF_POP_DI 1
#define SIZEOF_POP_BP 1
#define SIZEOF_POP_SP 1
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
