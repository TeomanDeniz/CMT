/* ************************** [v] DIRECT JUMPS [v] ************************** */
#define SIZEOF_JMP_NEAR_ 5
#define SIZEOF_JMP_SHORT_ 2
/* ************************** [^] DIRECT JUMPS [^] ************************** */

/* ************************* [v] REGISTER JUMPS [v] ************************* */
#define SIZEOF_JMP_EDX 2
/* ************************* [^] REGISTER JUMPS [^] ************************* */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
