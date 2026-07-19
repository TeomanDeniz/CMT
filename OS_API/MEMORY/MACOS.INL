#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

/* ****************************** [v] EXE [v] ******************************* */
#ifndef LOCALFUNCTION__ALLOC_EXE
#include "MACOS/EXE/ALLOC_EXE.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

#ifndef LOCALFUNCTION__FREE_EXE
#include "MACOS/EXE/FREE_EXE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__LENGTH_EXE
#include "MACOS/EXE/LENGTH_EXE.INL"
#endif /* !LOCALFUNCTION__LENGTH_EXE */
/* ****************************** [^] EXE [^] ******************************* */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
