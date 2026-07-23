#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <sys/mman.h>
/******* """"""""""""
 * #define PROT_READ
 * #define PROT_WRITE
 * #define MAP_PRIVATE
 * #define MAP_ANONYMOUS
 * #define MAP_FAILED
 * int	munmap(void *, size_t);
 * int	mprotect(void *, size_t, int);
 * void	*mmap(void *, size_t, int, int, int, off_t);
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__ALLOC_PAGE \
	PTR\
		ALLOC_PAGE(LET SIZE, BIT32 PROT_FLAGS, BIT32 EXTRA_FLAGS)
#else /* K&R */
#define FUNCTION_HEADER__ALLOC_PAGE \
	PTR\
		ALLOC_PAGE(SIZE, PROT_FLAGS, EXTRA_FLAGS)\
		LET		SIZE;\
		BIT32	PROT_FLAGS;\
		BIT32	EXTRA_FLAGS;

#endif /* !KNR_STYLE */

#define LOCALFUNCTION__ALLOC_PAGE \
	FUNCTION_HEADER__ALLOC_PAGE \
	{\
		PTR	MAP;\
		LET	TOTAL;\
		LET	BODY_PAGES;\
		\
		BODY_PAGES = ((SIZE + PAGE_SIZE - 1) / PAGE_SIZE) * PAGE_SIZE;\
		TOTAL = PAGE_SIZE + BODY_PAGES;\
		MAP = mmap(\
			(PTR)0,\
			TOTAL,\
			PROT_READ | PROT_WRITE,\
			MAP_PRIVATE | MAP_ANONYMOUS | (int)EXTRA_FLAGS,\
			-1,\
			0\
		);\
		\
		if (MAP == MAP_FAILED)\
			return ((PTR)0);\
		\
		*(LET *)MAP = TOTAL;\
		\
		if (PROT_FLAGS != (PROT_READ | PROT_WRITE))\
		{\
			PTR	BODY;\
			\
			BODY = (PTR)(((BYTE *)MAP) + PAGE_SIZE);\
			\
			if (mprotect(BODY, BODY_PAGES, PROT_FLAGS) != 0)\
			{\
				munmap(MAP, TOTAL);\
				return ((PTR)0);\
			}\
		}\
		\
		return ((PTR)(((BYTE *)MAP) + PAGE_SIZE));\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
