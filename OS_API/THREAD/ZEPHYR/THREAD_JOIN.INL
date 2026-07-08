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
		if (!THREAD)\
			return (-1);\
		\
		KERNEL32.WaitForSingleObject(THREAD, ((unsigned long)-1));\
		\
		if (RETURN_VALUE)\
		{\
			KERNEL32.GetExitCodeThread(\
				THREAD, (unsigned long *)(*RETURN_VALUE)\
			);\
		}\
		\
		if (KERNEL32.CloseHandle(THREAD))\
			return (0);\
		\
		return (1);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
