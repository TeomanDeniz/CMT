/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define SIZEOF_ADD_EAX_ 5
#define SIZEOF_ADD_EBX_ 6
#define SIZEOF_ADD_ECX_ 6
#define SIZEOF_ADD_EDX_ 6
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
