#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stddef.h>
/******* """"""""""
 * typedef	size_t;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define G_HEAP_PTRS G_HPTRS
#define G_HEAP_COUNT G_HCOUNT
#define G_HEAP_CAPACITY G_HCAP
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
extern PTR	*G_HEAP_PTRS;
extern LET	G_HEAP_COUNT;
extern LET	G_HEAP_CAPACITY;

#ifndef KNR_STYLE /* ANSI C */
extern void	free(void *);
extern void	*realloc(void *, size_t);
extern void	*calloc(size_t, size_t);
extern void	*malloc(size_t);
#else /* K&R */
extern char	*realloc();
extern		free();
extern char	*calloc();
extern char	*malloc();
#endif /* !KNR_STYLE */
EXTERN_C_END
/* **************************** [^] EXTERNS [^] ***************************** */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define G_MUTEX_ALLOC G_MUALLO
#define G_MEM_PAGES G_MEMPAG
#define G_HEAP_PTRS G_HPPTRS
#define G_HEAP_COUNT G_HPCOUT
#define G_HEAP_CAPACITY G_HPCAPA
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

#define LOCALMACRO__MEMORY_ALLOC \
	PTR	*G_HEAP_PTRS = (PTR *)0;\
	LET	G_HEAP_COUNT = (LET)0;\
	LET	G_HEAP_CAPACITY = (LET)0;

#include "STDLIB/ALLOC.INL"
#include "STDLIB/CALLOC.INL"
#include "STDLIB/FREE.INL"
#include "STDLIB/IS_HEAP.INL"
#include "STDLIB/LENGTH.INL"
#include "STDLIB/REALLOC.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //