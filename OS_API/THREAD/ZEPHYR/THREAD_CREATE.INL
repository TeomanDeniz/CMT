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
		struct k_thread	*THREAD_DATA;\
		BYTE			*STACK_AREA;\
		\
		THREAD_DATA = (struct k_thread *)malloc(sizeof(struct k_thread));\
		\
		if (!THREAD_DATA)\
			return ((T_THREAD)0);\
		\
		STACK_AREA = (BYTE *)malloc(sizeof(BYTE) * 1024);\
		\
		if (!STACK_AREA)\
		{\
			free(THREAD_DATA);\
			return ((T_THREAD)0);\
		}\
		\
		return (\
			k_thread_create(\
				THREAD_DATA,\
				STACK_AREA,\
				1024,\
				(k_thread_entry_t)FUNCTION,\
				ARG,\
				(void *)0,\
				(void *)0,\
				K_PRIO_PREEMPT(1),\
				0,\
				K_NO_WAIT\
			)\
		);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
