/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define SIZEOF_ADD_RAX_ 6
#define SIZEOF_ADD_RBX_ 7
#define SIZEOF_ADD_RCX_ 7
#define SIZEOF_ADD_RDX_ 7
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

#include "32.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
