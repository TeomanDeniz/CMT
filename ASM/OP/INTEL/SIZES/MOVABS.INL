#ifdef __SYSTEM_64_BIT__
#define SIZEOF_MOVABS_RAX_ 10
#define SIZEOF_MOVABS_RBX_ 10
#define SIZEOF_MOVABS_RCX_ 10
#define SIZEOF_MOVABS_RDX_ 10
#define SIZEOF_MOVABS_RSI_ 10
#define SIZEOF_MOVABS_RDI_ 10
#define SIZEOF_MOVABS_RBP_ 10
#define SIZEOF_MOVABS_RSP_ 10
#define SIZEOF_MOVABS_R8_ 10
#define SIZEOF_MOVABS_R9_ 10
#define SIZEOF_MOVABS_R10_ 10
#define SIZEOF_MOVABS_R11_ 10
#define SIZEOF_MOVABS_R12_ 10
#define SIZEOF_MOVABS_R13_ 10
#define SIZEOF_MOVABS_R14_ 10
#define SIZEOF_MOVABS_R15_ 10
#endif /* __SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
