#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__FAR_FREE \
	void\
		FAR_FREE(FAR_PTR POINTER)
#else /* K&R */
#define FUNCTION_HEADER__FAR_FREE \
	FAR_FREE(POINTER)\
	FAR_PTR	POINTER;
#endif /* !KNR_STYLE */

#ifdef IS__FAR__SUPPORTED
#define LOCALFUNCTION__FAR_FREE \
	FUNCTION_HEADER__FAR_FREE \
	{\
		PTR		HANDLE;\
		FAR_PTR	BASE;\
		\
		if (POINTER == (FAR_PTR)0)\
			return ;\
		\
		BASE = (PTR)(((BYTE FAR *)(POINTER)) - (ALIGN_UP(2 * sizeof(LET))));\
		HANDLE = (PTR)(VAR)(((LET FAR *)(BASE))[0]);\
		KERNEL32.GlobalUnlock(HANDLE);\
		KERNEL32.GlobalFree(HANDLE);\
	}
#else /* !IS__FAR__SUPPORTED */
#define LOCALFUNCTION__FAR_FREE \
	FUNCTION_HEADER__FAR_FREE \
	{\
		FREE((PTR)POINTER);\
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
