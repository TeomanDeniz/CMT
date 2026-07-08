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
 * Channel	*chancreate(int, int);
 * void		chanfree(Channel *);
 * ulong	recvul(Channel *);
 * int		sendul(Channel *, ulong);
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef Channel	*T_MUTEX;
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
		*MUTEX = chancreate(sizeof(int), 1);\
		sendul(*MUTEX, 1);\
		return (0);\
	}

#define LOCALFUNCTION__MUTEX_DESTROY \
	FUNCTION_HEADER__MUTEX_DESTROY \
	{\
		if (!MUTEX)\
			return (1);\
		\
		chanfree(*MUTEX);\
		return (0);\
	}

#define MUTEX_LOCK(__MUTEX_LOCK__) recvul((__MUTEX_LOCK__))
#define MUTEX_UNLOCK(__MUTEX_UNLOCK__) sendul((__MUTEX_UNLOCK__), 1)

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
