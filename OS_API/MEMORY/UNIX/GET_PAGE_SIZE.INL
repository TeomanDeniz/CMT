#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifdef _SC_PAGESIZE
#define LOCALMACRO__PAGE_PREPARER sysconf(_SC_PAGESIZE)
#else /* !_SC_PAGESIZE */
#ifdef _SC_PAGE_SIZE
#define LOCALMACRO__PAGE_PREPARER sysconf(_SC_PAGE_SIZE)
#else /* !_SC_PAGE_SIZE */
#define LOCALMACRO__PAGE_PREPARER getpagesize()
#endif /* _SC_PAGE_SIZE */
#endif /* _SC_PAGESIZE */

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
		const LET	RESULT = (LET)LOCALMACRO__PAGE_PREPARER;\
		\
		if (!RESULT)\
			return ((LET)4096);\
		\
		return (LOCALMACRO__PAGE_PREPARER);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
