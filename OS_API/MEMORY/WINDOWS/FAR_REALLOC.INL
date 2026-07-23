#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__FAR_REALLOC \
	FAR_PTR\
		FAR_REALLOC(FAR_PTR POINTER, LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__FAR_REALLOC \
	FAR_PTR\
		FAR_REALLOC(POINTER, SIZE)\
		FAR_PTR	POINTER;\
		LET		SIZE;
#endif /* !KNR_STYLE */

#ifdef IS__FAR__SUPPORTED
#define LOCALFUNCTION__FAR_REALLOC \
	FUNCTION_HEADER__FAR_REALLOC \
	{\
		PTR		HANDLE;\
		PTR		NEW_HANDLE;\
		FAR_PTR	BASE;\
		FAR_PTR	NEW_BASE;\
		FAR_PTR	NEW_USER;\
		\
		if (POINTER == (FAR_PTR)0)\
			return (FAR_ALLOC(SIZE));\
		\
		BASE = (PTR)(((BYTE FAR *)(POINTER)) - (ALIGN_UP(2 * sizeof(LET))));\
		HANDLE = (PTR)(VAR)(((LET FAR *)(BASE))[0]);\
		KERNEL32.GlobalUnlock(HANDLE);\
		NEW_HANDLE = KERNEL32.GlobalReAlloc(\
			HANDLE,\
			(SIZE + (ALIGN_UP(2 * sizeof(LET)))),\
			(unsigned long)0X0002\
		);\
		\
		if (NEW_HANDLE == (PTR)0)\
			return ((FAR_PTR)0);\
		\
		NEW_BASE = (FAR_PTR)KERNEL32.GlobalLock(NEW_HANDLE);\
		\
		if (NEW_BASE == (FAR_PTR)0)\
		{\
			KERNEL32.GlobalFree(NEW_HANDLE);\
			return ((FAR_PTR)0);\
		}\
		\
		(((LET FAR *)(NEW_BASE))[0]) = (LET)(VAR)NEW_HANDLE;\
		(((LET FAR *)(NEW_BASE))[1]) = SIZE;\
		NEW_USER = (FAR_PTR)(\
			((BYTE FAR *)NEW_BASE) + (ALIGN_UP(2 * sizeof(LET)))\
		);\
		return (NEW_USER);\
	}
#else /* !IS__FAR__SUPPORTED */
#define LOCALFUNCTION__FAR_REALLOC \
	FUNCTION_HEADER__FAR_REALLOC \
	{\
		return ((FAR_PTR)REALLOC((PTR)POINTER, SIZE));\
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
