#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
#endif /* !_POSIX_C_SOURCE */

#ifndef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE 1
#endif /* !_DEFAULT_SOURCE */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h>
/******* """"""""""
 * #define _SC_PAGESIZE
 * #define _SC_PAGE_SIZE
 * long	sysconf(int);
 * int	getpagesize(void);
 */
#include <sys/mman.h>
/******* """"""""""""
 * #define PROT_READ
 * #define PROT_WRITE
 * #define PROT_EXEC
 * #define PROT_NONE
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] POINTER MODES [v] ************************** */
#define PTR_MODE_NONE (PROT_NONE)
#define PTR_MODE_R (PROT_READ)
#define PTR_MODE_W (PROT_WRITE)
#define PTR_MODE_X (PROT_EXEC)
#define PTR_MODE_RW (PROT_READ | PROT_WRITE)
#define PTR_MODE_RX (PROT_READ | PROT_EXEC)
#define PTR_MODE_WX (PROT_WRITE | PROT_EXEC)
#define PTR_MODE_RWX (PROT_READ | PROT_WRITE | PROT_EXEC)
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
#include "UNIX/ALLOC.INL"
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
#include "UNIX/ALLOC_EXE.INL"
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
#include "UNIX/ALLOC_PAGE.INL"
#endif /* !LOCALFUNCTION__ALLOC_PAGE */

#ifndef LOCALFUNCTION__CALLOC
#include "UNIX/CALLOC.INL"
#endif /* !LOCALFUNCTION__CALLOC */

#ifndef LOCALFUNCTION__FAR_ALLOC
#include "UNIX/FAR_ALLOC.INL"
#endif /* !LOCALFUNCTION__FAR_ALLOC */

#ifndef LOCALFUNCTION__FAR_ALLOC_EXE
#include "UNIX/FAR_ALLOC_EXE.INL"
#endif /* !LOCALFUNCTION__FAR_ALLOC_EXE */

#ifndef LOCALFUNCTION__FAR_CALLOC
#include "UNIX/FAR_CALLOC.INL"
#endif /* !LOCALFUNCTION__FAR_CALLOC */

#ifndef LOCALFUNCTION__FAR_FREE
#include "UNIX/FAR_FREE.INL"
#endif /* !LOCALFUNCTION__FAR_FREE */

#ifndef LOCALFUNCTION__FAR_FREE_EXE
#include "UNIX/FAR_FREE_EXE.INL"
#endif /* !LOCALFUNCTION__FAR_FREE_EXE */

#ifndef LOCALFUNCTION__FAR_LENGTH
#include "UNIX/FAR_LENGTH.INL"
#endif /* !LOCALFUNCTION__FAR_LENGTH */

#ifndef LOCALFUNCTION__FAR_LENGTH_EXE
#include "UNIX/FAR_LENGTH_EXE.INL"
#endif /* !LOCALFUNCTION__FAR_LENGTH_EXE */

#ifndef LOCALFUNCTION__FAR_MEMORY_MODE
#include "UNIX/FAR_MEMORY_MODE.INL"
#endif /* !LOCALFUNCTION__FAR_MEMORY_MODE */

#ifndef LOCALFUNCTION__FAR_REALLOC
#include "UNIX/FAR_REALLOC.INL"
#endif /* !LOCALFUNCTION__FAR_REALLOC */

#ifndef LOCALFUNCTION__FREE
#include "UNIX/FREE.INL"
#endif /* !LOCALFUNCTION__FREE */

#ifndef LOCALFUNCTION__FREE_EXE
#include "UNIX/FREE_EXE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__FREE_PAGE
#include "UNIX/FREE_PAGE.INL"
#endif /* !LOCALFUNCTION__FREE_PAGE */

#ifndef LOCALFUNCTION__GET_PAGE_SIZE
#include "UNIX/GET_PAGE_SIZE.INL"
#endif /* !LOCALFUNCTION__GET_PAGE_SIZE */

#ifndef LOCALFUNCTION__LENGTH
#include "UNIX/LENGTH.INL"
#endif /* !LOCALFUNCTION__LENGTH */

#ifndef LOCALFUNCTION__LENGTH_EXE
#include "UNIX/LENGTH_EXE.INL"
#endif /* !LOCALFUNCTION__LENGTH_EXE */

#ifndef LOCALFUNCTION__MEMORY_MODE
#include "UNIX/MEMORY_MODE.INL"
#endif /* !LOCALFUNCTION__MEMORY_MODE */

#ifndef LOCALFUNCTION__REALLOC
#include "UNIX/REALLOC.INL"
#endif /* !LOCALFUNCTION__REALLOC */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
