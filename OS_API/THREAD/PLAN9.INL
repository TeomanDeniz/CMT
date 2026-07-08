#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <u.h>
/******* """""
 * @for <libc.h>
 */
#include <libc.h>
/******* """"""""
 * void	free(void *);
 * void	*malloc(ulong);
 */
#include <thread.h>
/******* """"""""""
 * typedef	Channel;
 * int		sendp(Channel *, void *);
 * void		threadexits(char *);
 * Channel	*chancreate(int, int);
 * int		threadcreate(void (*)(void*), void *, uint);
 * void		*recvp(Channel *);
 * void		chanfree(Channel *);
 */
#include "../../KEYWORDS/TYPES.H"
/******* """"""""""""""""""""""""
 * typedef	PTR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] STRUCTS [v] ***************************** */
struct T_START
{
	PTR		(*FUNCTION)();
	PTR		ARGS;
	Channel	*THREAD_PTR;
};
/* **************************** [^] STRUCTS [^] ***************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef Channel	*T_THREAD;
/* **************************** [^] TYPEDEFS [^] **************************** */

#ifndef LOCALFUNCTION__THREAD_CREATE
#include "PLAN9/THREAD_CREATE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__THREAD_JOIN
#include "PLAN9/THREAD_JOIN.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
