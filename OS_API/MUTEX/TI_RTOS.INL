#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <ti/sysbios/knl/Semaphore.h>
/******* """"""""""""""""""""""""""""
 * #define Semaphore_Mode_BINARY
 * typedef	Semaphore_Handle;
 * typedef	Semaphore_Params;
 * void				Semaphore_Params_init(Semaphore_Handle *);
 * Semaphore_Handle	Semaphore_create(int, Semaphore_Params *, Error_Block *);
 * void				Semaphore_delete(Semaphore_Handle *);
 * bool				Semaphore_pend(Semaphore_Handle, uint32_t);
 * void				Semaphore_post(Semaphore_Handle);
 */
#include <xdc/runtime/Error.h>
/******* """""""""""""""""""""
 * typedef	Error_Block;
 */
#include <ti/sysbios/BIOS.h>
/******* """""""""""""""""""
 * #define BIOS_WAIT_FOREVER
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef Semaphore_Handle	T_MUTEX;
/* **************************** [^] TYPEDEFS [^] **************************** */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__MUTEX_CREATE \
	int\
		MUTEX_CREATE(T_MUTEX *MUTEX)
#define FUNCTION_HEADER__MUTEX_DESTROY \
	int\
		MUTEX_DESTROY(T_MUTEX *MUTEX)
#else /* K&R */
#define FUNCTION_HEADER__MUTEX_CREATE \
	int\
		MUTEX_CREATE(MUTEX)\
		T_MUTEX	*MUTEX;
#define FUNCTION_HEADER__MUTEX_DESTROY \
	int\
		MUTEX_DESTROY(MUTEX)\
		T_MUTEX	*MUTEX;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__MUTEX_CREATE \
	FUNCTION_HEADER__MUTEX_CREATE \
	{\
		Semaphore_Params	SEMAPHORE_PARAMS;\
		\
		if (!MUTEX)\
			return (1);\
		\
		Semaphore_Params_init(&SEMAPHORE_PARAMS);\
		SEMAPHORE_PARAMS.mode = Semaphore_Mode_BINARY;\
		*MUTEX = Semaphore_create(\
			1, &SEMAPHORE_PARAMS, (Error_Block *)0\
		);\
		return (0);\
	}

#define LOCALFUNCTION__MUTEX_DESTROY \
	FUNCTION_HEADER__MUTEX_DESTROY \
	{\
		if (!MUTEX)\
			return (1);\
		\
		Semaphore_delete(MUTEX);\
		return (0);\
	}

#define MUTEX_LOCK(__MUTEX_LOCK__) \
	Semaphore_pend((__MUTEX_LOCK__), BIOS_WAIT_FOREVER)
#define MUTEX_UNLOCK(__MUTEX_UNLOCK__) Semaphore_post((__MUTEX_UNLOCK__))

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
