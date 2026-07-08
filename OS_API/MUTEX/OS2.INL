#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#define INCL_DOS
#include <os2.h>
/******* """""""
 * *** INCL_DOS
 * * #define SEM_INDEFINITE_WAIT
 * * typedef	HMTX;
 * * typedef	PSZ;
 * * APIRET	DosCreateMutexSem(PCSZ, PHMTX, ULONG, BOOL32);
 * * APIRET	DosCloseMutexSem(HMTX);
 * * APIRET	DosRequestMutexSem(HMTX, ULONG);
 * * APIRET	DosReleaseMutexSem(HMTX);
 * *** INCL_DOS
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef HMTX	T_MUTEX;
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
		return (DosCreateMutexSem((PSZ)0, MUTEX, 0, 0) != 0);\
	}

#define LOCALFUNCTION__MUTEX_DESTROY \
	FUNCTION_HEADER__MUTEX_DESTROY \
	{\
		return (DosCloseMutexSem(*MUTEX) != 0);\
	}

#define MUTEX_LOCK(__MUTEX_LOCK__) \
	DosRequestMutexSem((__MUTEX_LOCK__), SEM_INDEFINITE_WAIT)
#define MUTEX_UNLOCK(__MUTEX_UNLOCK__) DosReleaseMutexSem((__MUTEX_UNLOCK__))

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
