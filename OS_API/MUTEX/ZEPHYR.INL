#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <zephyr/kernel.h>
/******* """""""""""""""""
 * #define K_FOREVER
 * struct k_mutex;
 * int k_mutex_init(struct k_mutex *);
 * int k_mutex_lock(struct k_mutex *, k_timeout_t);
 * int k_mutex_unlock(struct k_mutex *);
 */
#include "../../KEYWORDS/IGNORE_VAR.H"
/******* """""""""""""""""""""""""""""
 * #define IGNORE_VAR(VARIABLE)
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef struct k_mutex	T_MUTEX;
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
			return ((T_MUTEX)1);\
		\
		if (k_mutex_init(MUTEX))\
			return ((T_MUTEX)2);\
		\
		return (0);\
	}

#define LOCALFUNCTION__MUTEX_DESTROY \
	FUNCTION_HEADER__MUTEX_DESTROY \
	{\
		IGNORE_VAR(T_MUTEX);\
		return (0);\
	}

#define MUTEX_LOCK(__MUTEX_LOCK__) k_mutex_lock((__MUTEX_LOCK__), K_FOREVER)
#define MUTEX_UNLOCK(__MUTEX_UNLOCK__) k_mutex_unlock((__MUTEX_UNLOCK__))

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
