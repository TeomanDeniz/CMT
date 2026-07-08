#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../../ENVIRONMENTS/KNR_STYLE.H"
/******* """"""""""""""""""""""""""""""""""""""
 * #define KNR_STYLE
 */
#include "../../../../KEYWORDS/TYPES.H"
/******* """"""""""""""""""""""""""""""
 * typedef	PTR;
 * typedef	LET;
 */
#include <stddef.h>
/******* """"""""""
 * typedef	size_t;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* ANSI C */
extern void	*calloc(size_t, size_t);
#else /* K&R */
extern char	*calloc();
#endif /* !KNR_STYLE */
/* **************************** [^] EXTERNS [^] ***************************** */

#ifndef KNR_STYLE /* ANSI C */
extern PTR	CALLOC(register LET, register LET);
#define FUNCTION_HEADER__CALLOC \
	PTR	CALLOC(register LET MULTIPLICATION, register LET SIZE)
#else /* K&R */
extern PTR	CALLOC();
#define FUNCTION_HEADER__CALLOC \
	PTR	CALLOC(MULTIPLICATION, SIZE) \
	register LET	MULTIPLICATION;
	register LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CALLOC \
	FUNCTION_HEADER__CALLOC \
	{\
		const PTR	RESULT = calloc(1, (MULTIPLICATION * SIZE) + sizeof(LET));\
		\
		if (!RESULT)\
			return ((PTR)0);\
		\
		(*((LET *)RESULT)) = MULTIPLICATION * SIZE;\
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
