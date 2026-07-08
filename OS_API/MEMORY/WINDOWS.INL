#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#include "WINDOWS/PAGE.INL"

/* ****************************** [v] EXE [v] ******************************* */
#ifndef LOCALFUNCTION__ALLOC_EXE
#include "WINDOWS/EXE/ALLOC_EXE.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

#ifndef LOCALFUNCTION__FREE_EXE
#include "WINDOWS/EXE/FREE_EXE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__LENGTH_EXE
#include "WINDOWS/EXE/LENGTH_EXE.INL"
#endif /* !LOCALFUNCTION__LENGTH_EXE */
/* ****************************** [^] EXE [^] ******************************* */

/* ****************************** [v] FAR [v] ******************************* */
#ifndef LOCALFUNCTION__ALLOC_FAR
#include "WINDOWS/FAR/ALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__ALLOC_FAR */

#ifndef LOCALFUNCTION__CALLOC_FAR
#include "WINDOWS/FAR/CALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__CALLOC_FAR */

#ifndef LOCALFUNCTION__FREE_FAR
#include "WINDOWS/FAR/FREE_FAR.INL"
#endif /* !LOCALFUNCTION__FREE_FAR */

#ifndef LOCALFUNCTION__LENGTH_FAR
#include "WINDOWS/FAR/LENGTH_FAR.INL"
#endif /* !LOCALFUNCTION__LENGTH_FAR */

#ifndef LOCALFUNCTION__REALLOC_FAR
#include "WINDOWS/FAR/REALLOC_FAR.INL"
#endif /* !LOCALFUNCTION__REALLOC_FAR */

#ifndef LOCALFUNCTION__PROTECT_FAR
#include "WINDOWS/FAR/PROTECT_FAR.INL"
#endif /* !LOCALFUNCTION__PROTECT_FAR */
/* ****************************** [^] FAR [^] ******************************* */

/* ***************************** [v] NORMAL [v] ***************************** */
#ifndef LOCALFUNCTION__ALLOC
#include "WINDOWS/NORMAL/ALLOC.INL"
#endif /* !LOCALFUNCTION__ALLOC */

#ifndef LOCALFUNCTION__CALLOC
#include "WINDOWS/NORMAL/CALLOC.INL"
#endif /* !LOCALFUNCTION__CALLOC */

#ifndef LOCALFUNCTION__FREE
#include "WINDOWS/NORMAL/FREE.INL"
#endif /* !LOCALFUNCTION__FREE */

#ifndef LOCALFUNCTION__LENGTH
#include "WINDOWS/NORMAL/LENGTH.INL"
#endif /* !LOCALFUNCTION__LENGTH */

#ifndef LOCALFUNCTION__REALLOC
#include "WINDOWS/NORMAL/REALLOC.INL"
#endif /* !LOCALFUNCTION__REALLOC */

#ifndef LOCALFUNCTION__PROTECT
#include "WINDOWS/NORMAL/PROTECT.INL"
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
