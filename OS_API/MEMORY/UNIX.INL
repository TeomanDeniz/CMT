#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#include "UNIX/PAGE.INL"

/* ****************************** [v] EXE [v] ******************************* */
#ifndef LOCALFUNCTION__ALLOC_EXE
#include "UNIX/EXE/ALLOC_EXE.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

#ifndef LOCALFUNCTION__FREE_EXE
#include "UNIX/EXE/FREE_EXE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__LENGTH_EXE
#include "UNIX/EXE/LENGTH_EXE.INL"
#endif /* !LOCALFUNCTION__LENGTH_EXE */
/* ****************************** [^] EXE [^] ******************************* */

/* ****************************** [v] FAR [v] ******************************* */
#ifndef LOCALFUNCTION__ALLOC_FAR
#include "UNIX/FAR/ALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__ALLOC_FAR */

#ifndef LOCALFUNCTION__CALLOC_FAR
#include "UNIX/FAR/CALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__CALLOC_FAR */

#ifndef LOCALFUNCTION__FREE_FAR
#include "UNIX/FAR/FREE_FAR.INL"
#endif /* !LOCALFUNCTION__FREE_FAR */

#ifndef LOCALFUNCTION__LENGTH_FAR
#include "UNIX/FAR/LENGTH_FAR.INL"
#endif /* !LOCALFUNCTION__LENGTH_FAR */

#ifndef LOCALFUNCTION__REALLOC_FAR
#include "UNIX/FAR/REALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__REALLOC_FAR */

#ifndef LOCALFUNCTION__PROTECT_FAR
#include "UNIX/FAR/PROTECT_FAR.INL"
#endif /* !LOCALFUNCTION__PROTECT_FAR */
/* ****************************** [^] FAR [^] ******************************* */

/* ***************************** [v] NORMAL [v] ***************************** */
#ifndef LOCALFUNCTION__ALLOC
#include "UNIX/NORMAL/ALLOC.INL"
#endif /* !LOCALFUNCTION__ALLOC */

#ifndef LOCALFUNCTION__CALLOC
#include "UNIX/NORMAL/CALLOC.INL"
#endif /* !LOCALFUNCTION__CALLOC */

#ifndef LOCALFUNCTION__FREE
#include "UNIX/NORMAL/FREE.INL"
#endif /* !LOCALFUNCTION__FREE */

#ifndef LOCALFUNCTION__LENGTH
#include "UNIX/NORMAL/LENGTH.INL"
#endif /* !LOCALFUNCTION__LENGTH */

#ifndef LOCALFUNCTION__REALLOC
#include "UNIX/NORMAL/REALLOC.INL"
#endif /* !LOCALFUNCTION__REALLOC */

#ifndef LOCALFUNCTION__PROTECT
#include "UNIX/NORMAL/PROTECT.INL"
#endif /* !LOCALFUNCTION__PROTECT */
/* ***************************** [^] NORMAL [^] ***************************** */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
