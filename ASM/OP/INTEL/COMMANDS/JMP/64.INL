/* ************************** [v] DIRECT JUMPS [v] ************************** */
#define _JMP_NEAR_(VALUE) __ASM__OP__(0XE9) __ASM__IMM32__(VALUE)
#define _JMP_SHORT_(VALUE) __ASM__OP__(0XEB) __ASM__IMM8__(VALUE)
/* ************************** [^] DIRECT JUMPS [^] ************************** */

/* ************************* [v] REGISTER JUMPS [v] ************************* */
#define _JMP_R11 __ASM__OP__(0X41) __ASM__OP__(0XFF) __ASM__OP__(0XE3)
/* ************************* [^] REGISTER JUMPS [^] ************************* */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
