#ifdef __SYSTEM_64_BIT__
#define _MOVABS_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XB8)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XBB)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XB9)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XBA)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XBE)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XBF)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XBD)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XBC)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XB8)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XB9)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XBA)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XBB)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XBC)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XBD)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XBE)\
	__ASM__IMM64__(VALUE)
#define _MOVABS_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XBF)\
	__ASM__IMM64__(VALUE)
#endif /* __SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
