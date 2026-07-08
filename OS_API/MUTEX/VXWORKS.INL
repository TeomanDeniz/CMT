#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <semLib.h>
/******* """"""""""
 * #define SEM_Q_PRIORITY
 * #define SEM_INVERSION_SAFE
 * #define ERROR
 * typedef	SEM_ID;
 * SEM_ID	semMCreate(int);
 * STATUS	semDelete(SEM_ID);
 * STATUS	semTake(SEM_ID, int);
 * STATUS	semGive(SEM_ID);
 */
#include <sysLib.h>
/******* """"""""""
 * #define WAIT_FOREVER
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef SEM_ID	T_MUTEX;
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
		if (!MUTEX)\
			return (1);\
		\
		*MUTEX = semMCreate(SEM_Q_PRIORITY | SEM_INVERSION_SAFE);\
		return (0);\
	}


#define LOCALFUNCTION__MUTEX_DESTROY \
	FUNCTION_HEADER__MUTEX_DESTROY \
	{\
		if (!MUTEX)\
			return (1);\
		\
		return ((semDelete(*MUTEX) == ERROR) * 2);\
	}

#define MUTEX_LOCK(__MUTEX_LOCK__) semTake((__MUTEX_LOCK__), WAIT_FOREVER)
#define MUTEX_UNLOCK(__MUTEX_UNLOCK__) semGive((__MUTEX_UNLOCK__))

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
