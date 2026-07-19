#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__THREAD_CREATE \
	T_THREAD \
		THREAD_CREATE(PTR (*FUNCTION)(PTR), PTR ARG)
#else /* K&R */
#define FUNCTION_HEADER__THREAD_CREATE \
	T_THREAD \
		THREAD_CREATE(FUNCTION, ARG)\
		PTR	(*FUNCTION)();\
		PTR	ARG;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__THREAD_CREATE \
	FUNCTION_HEADER__THREAD_CREATE \
	{\
		TID	THREAD_ID;\
		\
		if (\
			DosCreateThread(\
				&THREAD_ID,\
				(PFNTHREAD)FUNCTION,\
				(ULONG)ARG,\
				0,\
				65536\
			) != 0\
		)\
			return ((T_THREAD)0);\
		\
		return ((T_THREAD)THREAD_ID);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
