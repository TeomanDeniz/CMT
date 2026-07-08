#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__THREAD_JOIN \
	int\
		THREAD_JOIN(T_THREAD THREAD, PTR *RETURN_VALUE)
#else /* K&R */
#define FUNCTION_HEADER__THREAD_JOIN \
	int\
		THREAD_JOIN(THREAD, RETURN_VALUE)\
		T_THREAD	THREAD;\
		PTR			*RETURN_VALUE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__THREAD_JOIN \
	FUNCTION_HEADER__THREAD_JOIN \
	{\
		register unsigned int	MUST_WAIT;\
		\
		if (!THREAD)\
			return (1);\
		\
		MUST_WAIT = 0;\
		MUTEX_LOCK(THREAD->MUTEX_OPEN);\
		\
		if (THREAD->OPEN)\
		{\
			MUTEX_LOCK(THREAD->MUTEX_JOIN);\
			THREAD->JOINS++;\
			MUTEX_UNLOCK(THREAD->MUTEX_JOIN);\
			MUST_WAIT = 1;\
		}\
		\
		MUTEX_UNLOCK(THREAD->MUTEX_OPEN);\
		\
		if (MUST_WAIT)\
			MUTEX_LOCK(THREAD->MUTEX);\
		\
		if (RETURN_VALUE)\
			*RETURN_VALUE = THREAD->RETURN;\
		\
		return (0);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
