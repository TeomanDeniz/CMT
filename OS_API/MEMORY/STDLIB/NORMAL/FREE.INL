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
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* ANSI C */
extern void	free(void *);
#else /* K&R */
extern		free();
#endif /* !KNR_STYLE */
/* **************************** [^] EXTERNS [^] ***************************** */

#ifndef KNR_STYLE /* ANSI C */
extern void	FREE(PTR);
#define FUNCTION_HEADER__FREE void	FREE(PTR ADDRESS)
#else /* K&R */
extern		FREE();
#define FUNCTION_HEADER__FREE \
	FREE(ADDRESS) \
	PTR	ADDRESS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__FREE \
	FUNCTION_HEADER__FREE \
	{\
		free((PTR)(((LET *)ADDRESS) - 1));\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
