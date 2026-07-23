#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__GET_PAGE_SIZE \
	LET\
		GET_PAGE_SIZE(void)
#else /* K&R */
#define FUNCTION_HEADER__GET_PAGE_SIZE \
	LET\
		GET_PAGE_SIZE()
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__GET_PAGE_SIZE \
	FUNCTION_HEADER__GET_PAGE_SIZE \
	{\
		if (PAGE_SIZE)\
			return (PAGE_SIZE);\
		\
		struct S_WIN_SYSTEM_INFO	INFO;\
		\
		KERNEL32.GetSystemInfo(&INFO);\
		return ((LET)INFO.PAGE_SIZE);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
