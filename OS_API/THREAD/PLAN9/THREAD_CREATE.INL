#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef KNR_STYLE /* STANDARD C */
static void
	THREAD_ENTRY(PTR ARGUMENTS)
#else /* K&R */
static
	THREAD_ENTRY(ARGUMENTS)
	PTR	ARGUMENTS;
#endif /* !KNR_STYLE */
{
	struct T_START	*START;
	PTR				RESULT;

	START = ARGUMENTS;
	RESULT = START->FUNCTION(START->ARGS);
	sendp(START->THREAD, RESULT);
	free(START);
	threadexits((PTR)0);
}

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
		T_THREAD		THREAD;\
		struct T_START	*START;\
		\
		THREAD = chancreate(sizeof(PTR), 0);\
		START = (struct T_START *)malloc(sizeof(struct T_START));\
		START->FUNCTION = (PTR (*)())FUNCTION;\
		START->ARGS = ARG;\
		START->THREAD_PTR = THREAD;\
		threadcreate(THREAD_ENTRY, START, 8192);\
		return (THREAD);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
