#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

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

#include "MACOS/ALLOC_EXE.INL"
#include "MACOS/FAR_ALLOC_EXE.INL"
#include "MACOS/FAR_FREE_EXE.INL"
#include "MACOS/FAR_LENGTH_EXE.INL"
#include "MACOS/FREE_EXE.INL"
#include "MACOS/LENGTH_EXE.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
