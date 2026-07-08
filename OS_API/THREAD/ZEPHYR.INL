#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <zephyr/kernel.h>
/******* """""""""""""""""
 * #define K_THREAD_STACK_SIZEOF(sym)
 * #define K_PRIO_PREEMPT(x)
 * #define K_NO_WAIT
 * #define K_FOREVER
 * struct k_thread;
 * typedef k_thread_entry_t;
 * k_tid_t k_thread_create(struct k_thread *, k_thread_stack_t *,
 *                         size_t, k_thread_entry_t, void *, void *, void *,
 *                         int, uint32_t, k_timeout_t);
 * int k_thread_join(struct k_thread *, k_timeout_t);
 */
#include <stdlib.h>
/******* """"""""""
 * void *malloc(size_t);
 * void free(void *);
 */
#include "../../KEYWORDS/TYPES.H"
/******* """"""""""""""""""""""""
 * typedef	PTR;
 * typedef	BYTE;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef struct k_thread	*T_THREAD;
/* **************************** [^] TYPEDEFS [^] **************************** */

#ifndef LOCALFUNCTION__THREAD_CREATE
#include "ZEPHYR/THREAD_CREATE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__THREAD_JOIN
#include "ZEPHYR/THREAD_JOIN.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
