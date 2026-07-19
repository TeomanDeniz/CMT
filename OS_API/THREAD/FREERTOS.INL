#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include "FreeRTOS.h"
/******* """"""""""""
 * @for "task.h"
 * #define configMINIMAL_STACK_SIZE
 * #define pdPASS
 */
#include "task.h"
/******* """"""""
 * #define tskIDLE_PRIORITY
 * typedef	TaskHandle_t;
 * typedef	TaskFunction_t;
 * BaseType_t	xTaskCreate(TaskFunction_t, const char *,
 *              	configSTACK_DEPTH_TYPE, void *, UBaseType_t, TaskHandle_t);
 * void			vTaskDelete(TaskHandle_t);
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
	TaskHandle_t	THREAD;
	PTR				(*FUNCTION)(PTR);
	PTR				ARG;
	PTR				RETURN;
	T_MUTEX			MUTEX;
	T_MUTEX			MUTEX_JOIN;
	T_MUTEX			MUTEX_OPEN;
	int				OPEN;
	int				JOINS;
}
/* ***************************** [^] STRUCT [^] ***************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef struct S_THREAD_MANAGER	*T_THREAD;
/* **************************** [^] TYPEDEFS [^] **************************** */

#ifndef LOCALFUNCTION__THREAD_CREATE
#include "FREERTOS/THREAD_CREATE.INL"
#endif /* !LOCALFUNCTION__FREE_EXE */

#ifndef LOCALFUNCTION__THREAD_JOIN
#include "FREERTOS/THREAD_JOIN.INL"
#endif /* !LOCALFUNCTION__ALLOC_EXE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
