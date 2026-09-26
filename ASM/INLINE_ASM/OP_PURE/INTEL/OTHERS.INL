#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#define RET _RET
#define CPUID _CPUID
#define INT_(VALUE) _INT_(VALUE)

#ifdef __SYSTEM_64_BIT__
#define ENDBR64 _ENDBR64
#define ENDBR32 _ENDBR32
#else /* __SYSTEM_32_BIT__ */
#ifdef __SYSTEM_32_BIT__
#define ENDBR32 _ENDBR32
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
