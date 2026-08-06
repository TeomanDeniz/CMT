#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* ANSI C */
#define FUNCTION_HEADER__FREE void	FREE(PTR ADDRESS)
#else /* K&R */
#define FUNCTION_HEADER__FREE \
	FREE(ADDRESS) \
	PTR	ADDRESS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__FREE \
	FUNCTION_HEADER__FREE \
	{\
		LET	TRACK_I;\
		\
		for (TRACK_I = 0; TRACK_I < G_HEAP_COUNT; TRACK_I += 1)\
		{\
			if (G_HEAP_PTRS[TRACK_I] == ADDRESS)\
			{\
				G_HEAP_PTRS[TRACK_I] =\
					G_HEAP_PTRS[G_HEAP_COUNT - 1];\
				G_HEAP_COUNT -= 1;\
				break ;\
			}\
		}\
		\
		free((PTR)(((BYTE *)ADDRESS) - ALIGN_UP(sizeof(LET))));\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //