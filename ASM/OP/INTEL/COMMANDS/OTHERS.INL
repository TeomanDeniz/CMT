#define _RET __ASM__OP__(0XC3)
#define _CPUID __ASM__OP__(0X0F) __ASM__OP__(0XA2)
#define _INT_(VALUE) __ASM__OP__(0XCD) __ASM__IMM8__(VALUE)

#ifdef __SYSTEM_64_BIT__
#define _ENDBR64 \
	__ASM__OP__(0XF3) __ASM__OP__(0X0F) __ASM__OP__(0X1E) __ASM__OP__(0XFA)
#define _ENDBR32 \
	__ASM__OP__(0XF3) __ASM__OP__(0X0F) __ASM__OP__(0X1E) __ASM__OP__(0XFB)
#else /* __SYSTEM_32_BIT__ */
#ifdef __SYSTEM_32_BIT__
#define _ENDBR32 \
	__ASM__OP__(0XF3) __ASM__OP__(0X0F) __ASM__OP__(0X1E) __ASM__OP__(0XFB)
#endif /* __SYSTEM_32_BIT__ */
#endif /* __SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
