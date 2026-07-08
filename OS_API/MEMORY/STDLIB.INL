#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ***************************** [v] NORMAL [v] ***************************** */
#ifndef LOCALFUNCTION__ALLOC
#include "STDLIB/NORMAL/ALLOC.INL"
#endif /* !LOCALFUNCTION__ALLOC */

#ifndef LOCALFUNCTION__CALLOC
#include "STDLIB/NORMAL/CALLOC.INL"
#endif /* !LOCALFUNCTION__CALLOC */

#ifndef LOCALFUNCTION__FREE
#include "STDLIB/NORMAL/FREE.INL"
#endif /* !LOCALFUNCTION__FREE */

#ifndef LOCALFUNCTION__LENGTH
#include "STDLIB/NORMAL/LENGTH.INL"
#endif /* !LOCALFUNCTION__LENGTH */

#ifndef LOCALFUNCTION__REALLOC
#include "STDLIB/NORMAL/REALLOC.INL"
#endif /* !LOCALFUNCTION__REALLOC */
/* ***************************** [^] NORMAL [^] ***************************** */

/* ****************************** [v] FAR [v] ******************************* */
#ifndef LOCALFUNCTION__ALLOC_FAR
#include "STDLIB/FAR/ALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__ALLOC_FAR */

#ifndef LOCALFUNCTION__CALLOC_FAR
#include "STDLIB/FAR/CALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__CALLOC_FAR */

#ifndef LOCALFUNCTION__FREE_FAR
#include "STDLIB/FAR/FREE_FAR.INL"
#endif /* !LOCALFUNCTION__FREE_FAR */

#ifndef LOCALFUNCTION__LENGTH_FAR
#include "STDLIB/FAR/LENGTH_FAR.INL"
#endif /* !LOCALFUNCTION__LENGTH_FAR */

#ifndef LOCALFUNCTION__REALLOC_FAR
#include "STDLIB/FAR/REALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__REALLOC_FAR */
/* ****************************** [^] FAR [^] ******************************* */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
