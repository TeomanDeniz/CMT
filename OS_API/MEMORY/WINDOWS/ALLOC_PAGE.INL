#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

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
		LET	PAGE;\
		LET	BODY_PAGES;\
		\
		PAGE = PAGE_SIZE;\
		BODY_PAGES = ((SIZE + PAGE - 1) / PAGE) * PAGE;\
		\
		MAP = KERNEL32.VirtualAlloc(\
			(PTR)0,\
			(PAGE + BODY_PAGES),\
			((unsigned long)0X00003000) | (unsigned long)EXTRA_FLAGS,\
			(unsigned long)0X00000004\
		);\
		\
		if (MAP == (PTR)0)\
			return ((PTR)0);\
		\
		*(LET *)MAP = PAGE + BODY_PAGES;\
		\
		if (PROT_FLAGS != (unsigned long)0X00000004)\
		{\
			unsigned long	OLD_PROTECT;\
			PTR				BODY;\
			\
			BODY = (PTR)(((BYTE *)MAP) + PAGE);\
			\
			if (\
				!KERNEL32.VirtualProtect(\
					BODY,\
					BODY_PAGES,\
					PROT_FLAGS,\
					&OLD_PROTECT\
				)\
			)\
			{\
				KERNEL32.VirtualFree(MAP, 0, (unsigned long)0X00008000);\
				return ((PTR)0);\
			}\
		}\
		\
		return ((PTR)(((BYTE *)MAP) + PAGE));\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
