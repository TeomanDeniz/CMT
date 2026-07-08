#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#define INCL_DOSPROCESS
#include <os2.h>
/******* """""""
 * *** INCL_DOSPROCESS
 * * typedef	TID;
 * * typedef	ULONG;
 * * typedef	PFNTHREAD;
 * * APIRET		DosCreateThread(PTID, PFNTHREAD, ULONG, ULONG, ULONG);
 * * APIRET		DosWaitThread(PTID, ULONG);
 * *** INCL_DOSPROCESS
 */
#include "../../KEYWORDS/TYPES.H"
/******* """"""""""""""""""""""""
 * typedef	PTR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef TID	T_THREAD;
/* **************************** [^] TYPEDEFS [^] **************************** */

#ifndef LOCALFUNCTION__THREAD_CREATE
#include "OS2_32BIT/THREAD_CREATE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__THREAD_JOIN
#include "OS2_32BIT/THREAD_JOIN.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
