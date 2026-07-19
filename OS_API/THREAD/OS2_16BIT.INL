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
 * * typedef	SEL;
 * * typedef	PBYTE;
 * * USHORT		DosCreateThread(PFNTHREAD, PTID, PBYTE);
 * * APIRET		DosWaitThread(PTID, ULONG);
 * * USHORT		DosAllocSeg(USHORT, PSEL, USHORT);
 * *** INCL_DOSPROCESS
 */
#include "../../KEYWORDS/TYPES.H"
/******* """"""""""""""""""""""""
 * typedef	PTR;
 */
#include "../../MUTEX.H"
/******* """""""""""""""
 * #define MUTEX_LOCK(MUTEX)
 * #define MUTEX_UNLOCK(MUTEX)
 * int		MUTEX_CREATE(T_MUTEX *);
 * int		MUTEX_DESTROY(T_MUTEX *);
 * typedef	T_MUTEX;
 */
#include "../../MEMORY.H"
/******* """"""""""""""""
 * PTR	ALLOC(LET);
 * void	FREE(PTR);
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ***************************** [v] STRUCT [v] ***************************** */
struct S_THREAD_MANAGER
{
	TID			THREAD;
	PTR			(*FUNCTION)(PTR);
	PTR			ARG;
	PTR			RETURN;
	T_MUTEX		MUTEX;
	T_MUTEX		MUTEX_JOIN;
	T_MUTEX		MUTEX_OPEN;
	int			OPEN;
	int			JOINS;
}
/* ***************************** [^] STRUCT [^] ***************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef struct S_THREAD_MANAGER	*T_THREAD;
/* **************************** [^] TYPEDEFS [^] **************************** */

/* **************************** [v] EXTENRS [v] ***************************** */
extern struct S_THREAD_MANAGER	*__THREAD_ARG_MAILBOX__;
extern T_MUTEX					__THREAD_ARG_MUTEX__;
extern T_MUTEX					__THREAD_ARG_HANDOFF__;
/* **************************** [^] EXTENRS [^] ***************************** */

#define LOCALCONSTRUCTOR__THREAD \
	MUTEX_CREATE(&__THREAD_ARG_MUTEX__);\
	MUTEX_CREATE(&__THREAD_ARG_HANDOFF__);

#define LOCALMACRO__THREAD_GLOBALS \
	struct S_THREAD_MANAGER	*__THREAD_ARG_MAILBOX__;\
	T_MUTEX					__THREAD_ARG_MUTEX__;\
	T_MUTEX					__THREAD_ARG_HANDOFF__;

#ifndef LOCALFUNCTION__THREAD_CREATE
#include "OS2_16BIT/THREAD_CREATE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__THREAD_JOIN
#include "OS2_16BIT/THREAD_JOIN.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
