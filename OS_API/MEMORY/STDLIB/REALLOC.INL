#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stddef.h>
/******* """"""""""
 * typedef	size_t;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
#ifndef KNR_STYLE /* ANSI C */
extern void	*realloc(PTR, size_t);
#else /* K&R */
extern char	*realloc();
#endif /* !KNR_STYLE */
EXTERN_C_END
/* **************************** [^] EXTERNS [^] ***************************** */

#ifndef KNR_STYLE /* ANSI C */
#define FUNCTION_HEADER__REALLOC \
	PTR	REALLOC(PTR ADDRESS, register LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__REALLOC \
	PTR	REALLOC(ADDRESS, SIZE) \
	PTR				ADDRESS;
	register LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__REALLOC \
	FUNCTION_HEADER__REALLOC \
	{\
		const PTR	RESULT = realloc(ADDRESS, SIZE + sizeof(LET));\
		\
		if (!RESULT)\
			return ((PTR)0);\
		\
		(*((LET *)RESULT)) = SIZE;\
		return (((LET *)RESULT) + 1);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
