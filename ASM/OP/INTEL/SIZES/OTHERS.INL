#define SIZEOF_RET 2
#define SIZEOF_CPUID 2
#define SIZEOF_INT_ 2

#ifdef __SYSTEM_64_BIT__
#define SIZEOF_ENDBR64 4
#define SIZEOF_ENDBR32 4
#else /* __SYSTEM_32_BIT__ */
#ifdef __SYSTEM_32_BIT__
#define SIZEOF_ENDBR32 4
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
