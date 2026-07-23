#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__FAR_ALLOC \
	FAR_PTR\
		FAR_ALLOC(LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__FAR_ALLOC \
	FAR_PTR\
		FAR_ALLOC(SIZE)\
		LET	SIZE;
#endif /* !KNR_STYLE */

#ifdef IS__FAR__SUPPORTED
#define LOCALFUNCTION__FAR_ALLOC \
	FUNCTION_HEADER__FAR_ALLOC \
	{\
		PTR		HANDLE;\
		FAR_PTR	BASE;\
		FAR_PTR	USER;\
		\
		HANDLE = KERNEL32.GlobalAlloc(\
			(unsigned long)0X0002,\
			(SIZE + (ALIGN_UP(2 * sizeof(LET))))\
		);\
		\
		if (HANDLE == (PTR)0)\
			return ((FAR_PTR)0);\
		\
		BASE = (FAR_PTR)KERNEL32.GlobalLock(HANDLE);\
		\
		if (BASE == (FAR_PTR)0)\
		{\
			KERNEL32.GlobalFree(HANDLE);\
			return ((FAR_PTR)0);\
		}\
		\
		(((LET FAR *)(BASE))[0]) = (VAR)HANDLE;\
		(((LET FAR *)(BASE))[1]) = SIZE;\
		USER = (FAR_PTR)(((BYTE FAR *)BASE) + (ALIGN_UP(2 * sizeof(LET))));\
		return (USER);\
	}
#else /* !IS__FAR__SUPPORTED */
#define LOCALFUNCTION__FAR_ALLOC \
	FUNCTION_HEADER__FAR_ALLOC \
	{\
		return ((FAR_PTR)ALLOC(SIZE));\
	}
#endif /* IS__FAR__SUPPORTED */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
