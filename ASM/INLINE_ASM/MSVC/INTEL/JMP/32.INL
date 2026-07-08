#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] DIRECT JUMPS [v] ************************** */
#define JMP_NEAR_(VALUE) \
	__emit 0XE9 \
	__emit (BYTE)(((VAR)(VALUE)) & 0XFF)\
	__emit (BYTE)((((VAR)(VALUE)) >> 8) & 0XFF)\
	__emit (BYTE)((((VAR)(VALUE)) >> 16) & 0XFF)\
	__emit (BYTE)((((VAR)(VALUE)) >> 24) & 0XFF)
#define JMP_SHORT_(VALUE) \
	__emit 0XEB \
	__emit (BYTE)(((VAR)(VALUE)) & 0XFF)
/* ************************** [^] DIRECT JUMPS [^] ************************** */

/* ************************* [v] REGISTER JUMPS [v] ************************* */
#define JMP_EDX jmp edx
/* ************************* [^] REGISTER JUMPS [^] ************************* */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
