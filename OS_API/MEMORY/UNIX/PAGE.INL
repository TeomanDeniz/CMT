#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h>
/******* """"""""""
 * #define _SC_PAGESIZE
 * #define _SC_PAGE_SIZE
 * long	sysconf(int);
 * int	getpagesize(void);
 */
#include "../../../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""""""""
 * typedef	LET;
 */
/* **************************** [^] INCLUDES [^] **************************** */

extern LET	MEMORY_PAGE_SIZE;

#define LOCALLINKER__PAGE extern LET	MEMORY_PAGE_SIZE = (LET)0;
#define LOCALCONSTRUCTOR__PAGE \
	do\
	{\
		MEMORY_PAGE_SIZE = LOCALMACRO__PAGE_PREPARER;\
	}

#ifdef _SC_PAGESIZE
#define LOCALMACRO__PAGE_PREPARER sysconf(_SC_PAGESIZE)
#else /* !_SC_PAGESIZE */
#ifdef _SC_PAGE_SIZE
#define LOCALMACRO__PAGE_PREPARER sysconf(_SC_PAGE_SIZE)
#else /* !_SC_PAGE_SIZE */
#define LOCALMACRO__PAGE_PREPARER getpagesize()
#endif /* _SC_PAGE_SIZE */
#endif /* _SC_PAGESIZE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
