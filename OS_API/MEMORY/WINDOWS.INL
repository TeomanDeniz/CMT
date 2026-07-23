#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../WIN_CORE/KERNEL32.H"
/******* """""""""""""""""""""""""""
 * struct S_WIN_SYSTEM_INFO;
 * struct S_KERNEL32	KERNEL32;
 */
#include "../../ATTRIBUTES/FAR.H"
/******* """"""""""""""""""""""""
 * #define IS__FAR__SUPPORTED
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] POINTER MODES [v] ************************** */
#define PTR_MODE_NONE ((unsigned long)1)
#define PTR_MODE_R ((unsigned long)2)
#define PTR_MODE_W ((unsigned long)4)
#define PTR_MODE_X ((unsigned long)16)
#define PTR_MODE_RW ((unsigned long)4)
#define PTR_MODE_RX ((unsigned long)32)
#define PTR_MODE_WX ((unsigned long)128)
#define PTR_MODE_RWX ((unsigned long)64)
/* ************************* [^] POINTER MODES [^] ************************** */

#ifndef LOCALFUNCTION__ALLOC
/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define G_MUTEX_ALLOC G_MUALLO
#define G_MEM_PAGES G_MEMPAG
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
extern T_MUTEX				G_MUTEX_ALLOC;
extern struct S_MEM_PAGE	*G_MEM_PAGES;
EXTERN_C_END
/* **************************** [^] EXTERNS [^] ***************************** */

#define LOCALCONSTRUCTOR__MEMORY_ALLOC MUTEX_CREATE(&G_MUTEX_ALLOC);
#define LOCALMACRO__MEMORY_ALLOC \
	T_MUTEX				G_MUTEX_ALLOC;\
	struct S_MEM_PAGE	*G_MEM_PAGES = (struct S_MEM_PAGE *)0;
#include "WINDOWS/ALLOC.INL"
#endif /* !LOCALFUNCTION__ALLOC */

#ifndef LOCALFUNCTION__ALLOC_EXE
/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define G_MUTEX_ALLOC_EXE G_MALEXE
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
extern T_MUTEX			G_MUTEX_ALLOC_EXE;
extern struct S_SLAB	*G_SLABS;
EXTERN_C_END
/* **************************** [^] EXTERNS [^] ***************************** */

#define LOCALCONSTRUCTOR__MEMORY_ALLOC_EXE MUTEX_CREATE(&G_MUTEX_ALLOC_EXE);
#define LOCALMACRO__MEMORY_ALLOC_EXE \
	T_MUTEX			G_MUTEX_ALLOC_EXE;\
	struct S_SLAB	*G_SLABS = (struct S_SLAB *)0;
#include "WINDOWS/ALLOC_EXE.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

#ifndef LOCALFUNCTION__ALLOC_PAGE
/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define PAGE_SIZE PAGESIZE
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
extern LET	PAGE_SIZE;
EXTERN_C_END
/* **************************** [^] EXTERNS [^] ***************************** */

#define LOCALCONSTRUCTOR__ALLOC_PAGE PAGE_SIZE = GET_PAGE_SIZE();
#define LOCALMACRO__MEMORY_ALLOC_PAGE \
	LET	PAGE_SIZE = (LET)0;
#include "WINDOWS/ALLOC_PAGE.INL"
#endif /* !LOCALFUNCTION__ALLOC_PAGE */

#ifndef LOCALFUNCTION__CALLOC
#include "WINDOWS/CALLOC.INL"
#endif /* !LOCALFUNCTION__CALLOC */

#ifndef LOCALFUNCTION__FAR_ALLOC
#include "WINDOWS/FAR_ALLOC.INL"
#endif /* !LOCALFUNCTION__FAR_ALLOC */

#ifndef LOCALFUNCTION__FAR_ALLOC_EXE
#include "WINDOWS/FAR_ALLOC_EXE.INL"
#endif /* !LOCALFUNCTION__FAR_ALLOC_EXE */

#ifndef LOCALFUNCTION__FAR_CALLOC
#include "WINDOWS/FAR_CALLOC.INL"
#endif /* !LOCALFUNCTION__FAR_CALLOC */

#ifndef LOCALFUNCTION__FAR_FREE
#include "WINDOWS/FAR_FREE.INL"
#endif /* !LOCALFUNCTION__FAR_FREE */

#ifndef LOCALFUNCTION__FAR_FREE_EXE
#include "WINDOWS/FAR_FREE_EXE.INL"
#endif /* !LOCALFUNCTION__FAR_FREE_EXE */

#ifndef LOCALFUNCTION__FAR_LENGTH
#include "WINDOWS/FAR_LENGTH.INL"
#endif /* !LOCALFUNCTION__FAR_LENGTH */

#ifndef LOCALFUNCTION__FAR_LENGTH_EXE
#include "WINDOWS/FAR_LENGTH_EXE.INL"
#endif /* !LOCALFUNCTION__FAR_LENGTH_EXE */

#ifndef LOCALFUNCTION__FAR_MEMORY_MODE
#include "WINDOWS/FAR_MEMORY_MODE.INL"
#endif /* !LOCALFUNCTION__FAR_MEMORY_MODE */

#ifndef LOCALFUNCTION__FAR_REALLOC
#include "WINDOWS/FAR_REALLOC.INL"
#endif /* !LOCALFUNCTION__FAR_REALLOC */

#ifndef LOCALFUNCTION__FREE
#include "WINDOWS/FREE.INL"
#endif /* !LOCALFUNCTION__FREE */

#ifndef LOCALFUNCTION__FREE_EXE
#include "WINDOWS/FREE_EXE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__FREE_PAGE
#include "WINDOWS/FREE_PAGE.INL"
#endif /* !LOCALFUNCTION__FREE_PAGE */

#ifndef LOCALFUNCTION__GET_PAGE_SIZE
#include "WINDOWS/GET_PAGE_SIZE.INL"
#endif /* !LOCALFUNCTION__GET_PAGE_SIZE */

#ifndef LOCALFUNCTION__LENGTH
#include "WINDOWS/LENGTH.INL"
#endif /* !LOCALFUNCTION__LENGTH */

#ifndef LOCALFUNCTION__LENGTH_EXE
#include "WINDOWS/LENGTH_EXE.INL"
#endif /* !LOCALFUNCTION__LENGTH_EXE */

#ifndef LOCALFUNCTION__MEMORY_MODE
#include "WINDOWS/MEMORY_MODE.INL"
#endif /* !LOCALFUNCTION__MEMORY_MODE */

#ifndef LOCALFUNCTION__REALLOC
#include "WINDOWS/REALLOC.INL"
#endif /* !LOCALFUNCTION__REALLOC */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
