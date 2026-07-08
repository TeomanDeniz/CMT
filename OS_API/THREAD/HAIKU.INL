#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <OS.h>
/******* """"""
 * #define B_NORMAL_PRIORITY
 * typedef		thread_id;
 * typedef		int32;
 * typedef		status_t;
 * thread_id	spawn_thread(thread_func, char *, int32, void *);
 * status_t		resume_thread(thread_id);
 * status_t		wait_for_thread(thread_id, status_t *);
 */
#include "../../KEYWORDS/TYPES.H"
/******* """"""""""""""""""""""""
 * typedef	PTR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef thread_id	T_THREAD;
/* **************************** [^] TYPEDEFS [^] **************************** */

#ifndef LOCALFUNCTION__THREAD_CREATE
#include "HAIKU/THREAD_CREATE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__THREAD_JOIN
#include "HAIKU/THREAD_JOIN.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
