#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <pthread.h>
/******* """""""""""
 * typedef	pthread_mutex_t;
 * typedef	pthread_mutexattr_t;
 * int	pthread_mutex_init(pthread_mutex_t *, pthread_mutexattr_t *);
 * int	pthread_mutex_destroy(pthread_mutex_t *);
 * int	pthread_mutex_lock(pthread_mutex_t *);
 * int	pthread_mutex_unlock(pthread_mutex_t *);
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef pthread_mutex_t	T_MUTEX;
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
		pthread_mutex_init(*MUTEX, (pthread_mutexattr_t *)0);\
		return (0);\
	}

#define LOCALFUNCTION__MUTEX_DESTROY \
	FUNCTION_HEADER__MUTEX_DESTROY \
	{\
		if (!MUTEX)\
			return (1);\
		\
		pthread_mutex_destroy(*MUTEX);\
		return (0);\
	}

#define MUTEX_LOCK(__MUTEX_LOCK__) pthread_mutex_lock((__MUTEX_LOCK__));
#define MUTEX_UNLOCK(__MUTEX_UNLOCK__) pthread_mutex_unlock((__MUTEX_UNLOCK__));

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
