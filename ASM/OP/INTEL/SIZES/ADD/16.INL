/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#define SIZEOF_ADD_AL_ 2
#define SIZEOF_ADD_BL_ 3
#define SIZEOF_ADD_CL_ 3
#define SIZEOF_ADD_DL_ 3
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define SIZEOF_ADD_AX_ 3
#define SIZEOF_ADD_BX_ 4
#define SIZEOF_ADD_CX_ 4
#define SIZEOF_ADD_DX_ 4
#else /* !__SYSTEM_16_BIT__ */
#define SIZEOF_ADD_AX_ 4
#define SIZEOF_ADD_BX_ 5
#define SIZEOF_ADD_CX_ 5
#define SIZEOF_ADD_DX_ 5
#endif /* __SYSTEM_16_BIT__ */
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
