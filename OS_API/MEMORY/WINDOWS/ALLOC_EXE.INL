#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

/*
 * BOTH TIERS LEAVE THE SLAB PERMANENTLY WRITABLE THROUGH "->RW", SO NOTHING
 * HERE EVER CALLS "VirtualProtect" AT RUNTIME. A FLIPPING TIER WAS MEASURED
 * AND DROPPED - IT COSTS TWO SYSCALLS PER ALLOCATION AND TWO PER FREE, WHICH
 * MEASURED ROUGHLY 650 TIMES SLOWER THAN EITHER TIER KEPT BELOW.
 */

/* ************************* [v] SEGMENT TAKING [v] ************************* *\
|* **** THIS IS EXPANDED TWICE (BEFORE AND AFTER SLAB CREATION), SO IT   **** *|
|* **** MUST NOT CONTAIN A LABEL. THE OUTER LOOP STOPS ON "RESULT".      **** *|
\* ************************************************************************** */
#define LOCALMACRO__EXE_TAKE_SEGMENT \
	{\
		struct S_SLAB		*SCAN;\
		struct S_SEGMENT	*SEGMENT;\
		\
		RESULT = ((PTR)0);\
		\
		for (SCAN = G_SLABS; SCAN && !RESULT; SCAN = SCAN->NEXT)\
		{\
			for (SEGMENT = SCAN->SEGMENTS; SEGMENT; SEGMENT = SEGMENT->NEXT)\
			{\
				BYTE	*RW_PTR;\
				BYTE	*RX_PTR;\
				\
				if (!SEGMENT->FREE || SEGMENT->SIZE < REQUEST)\
					continue ;\
				\
				if (\
					SEGMENT->SIZE >=\
					(\
						REQUEST +\
						ALIGN_UP(sizeof(struct S_SEGMENT)) +\
						MAX_ALIGNMENT\
					)\
				)\
				{\
					struct S_SEGMENT	*SPLIT;\
					\
					SPLIT = (struct S_SEGMENT *)(\
						((BYTE *)SEGMENT) +\
						ALIGN_UP(sizeof(struct S_SEGMENT)) +\
						REQUEST\
					);\
					SPLIT->SIZE = (\
						SEGMENT->SIZE -\
						REQUEST -\
						ALIGN_UP(sizeof(struct S_SEGMENT))\
					);\
					SPLIT->FREE = 1;\
					SPLIT->NEXT = SEGMENT->NEXT;\
					SPLIT->PREV = SEGMENT;\
					\
					if (SPLIT->NEXT)\
						SPLIT->NEXT->PREV = SPLIT;\
					\
					SEGMENT->NEXT = SPLIT;\
					SEGMENT->SIZE = REQUEST;\
				}\
				\
				SEGMENT->FREE = 0;\
				RW_PTR = (\
					((BYTE *)(SEGMENT)) +\
					ALIGN_UP(sizeof(struct S_SEGMENT))\
				);\
				RX_PTR = SCAN->RX + (RW_PTR - SCAN->RW);\
				\
				if (OP_CODES != (PTR)0)\
					memcpy((PTR)RW_PTR, OP_CODES, SIZE);\
				\
				CLEAR_INSTRUCTION_CACHE(RX_PTR, RX_PTR + SIZE);\
				RESULT = ((PTR)RX_PTR);\
				break ;\
			}\
		}\
	}
/* ************************* [^] SEGMENT TAKING [^] ************************* */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__ALLOC_EXE \
	PTR\
		ALLOC_EXE(const PTR OP_CODES, LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__ALLOC_EXE \
	PTR\
		ALLOC_EXE(OP_CODES, SIZE)\
		PTR	OP_CODES;\
		LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__ALLOC_EXE \
	FUNCTION_HEADER__ALLOC_EXE \
	{\
		struct S_SLAB	*SLAB;\
		PTR				RESULT;\
		LET				SLAB_SIZE;\
		const LET		REQUEST = ALIGN_UP(SIZE);\
		\
		if (REQUEST == 0)\
			return ((PTR)0);\
		\
		MUTEX_LOCK(G_MUTEX_ALLOC_EXE);\
		LOCALMACRO__EXE_TAKE_SEGMENT\
		\
		if (RESULT != (PTR)0)\
		{\
			MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
			return (RESULT);\
		}\
		\
		SLAB_SIZE = PAGE_SIZE;\
		\
		if (REQUEST + ALIGN_UP(sizeof(struct S_SEGMENT)) > SLAB_SIZE)\
		{\
			SLAB_SIZE = (\
				(\
					(\
						REQUEST +\
						ALIGN_UP(sizeof(struct S_SEGMENT)) +\
						PAGE_SIZE - 1\
					) / PAGE_SIZE\
				) * PAGE_SIZE\
			);\
		}\
		\
		{\
			struct S_SLAB	*NEW_SLAB;\
			BYTE			*RW;\
			BYTE			*RX;\
			int				MODE;\
			\
			RW = ((BYTE *)0);\
			RX = ((BYTE *)0);\
			MODE = 0;\
			\
			/*\
			 * TIER 1 - PLAIN "RWX".\
			 * ONE CALL, NOTHING TO UNDO LATER. THIS IS THE PATH EVERY\
			 * WINDOWS HOST TAKES UNLESS ARBITRARY CODE GUARD IS ON.\
			 */\
			{\
				PTR	MAP;\
				\
				MAP = KERNEL32.VirtualAlloc(\
					(PTR)0,\
					SLAB_SIZE,\
					(unsigned long)0X00003000,\
					(unsigned long)0X00000040\
				);\
				\
				if (MAP != (PTR)0)\
				{\
					RW = ((BYTE *)MAP);\
					RX = ((BYTE *)MAP);\
					MODE = 0;\
				}\
			}\
			\
			/*\
			 * TIER 2 - TWO VIEWS OF ONE PAGEFILE BACKED SECTION.\
			 * THE WRITABLE VIEW AND THE EXECUTABLE VIEW LIVE AT DIFFERENT\
			 * ADDRESSES OVER THE SAME PHYSICAL PAGES, SO NEITHER ADDRESS\
			 * IS EVER BOTH WRITABLE AND EXECUTABLE.\
			 */\
			if (RW == (BYTE *)0)\
			{\
				PTR	SECTION;\
				\
				SECTION = KERNEL32.CreateFileMappingA(\
					(PTR)-1,\
					(PTR)0,\
					(unsigned long)0X08000040,\
					(unsigned long)((SLAB_SIZE >> 16) >> 16),\
					(unsigned long)(SLAB_SIZE & (LET)0XFFFFFFFF),\
					(const char *)0\
				);\
				\
				if (SECTION != (PTR)0)\
				{\
					PTR	RW_VIEW;\
					\
					RW_VIEW = KERNEL32.MapViewOfFile(\
						SECTION,\
						(unsigned long)0X00000002,\
						(unsigned long)0,\
						(unsigned long)0,\
						SLAB_SIZE\
					);\
					\
					if (RW_VIEW != (PTR)0)\
					{\
						PTR	RX_VIEW;\
						\
						RX_VIEW = KERNEL32.MapViewOfFile(\
							SECTION,\
							(unsigned long)0X00000024,\
							(unsigned long)0,\
							(unsigned long)0,\
							SLAB_SIZE\
						);\
						\
						if (RX_VIEW == (PTR)0)\
							KERNEL32.UnmapViewOfFile(RW_VIEW);\
						else\
						{\
							RW = ((BYTE *)RW_VIEW);\
							RX = ((BYTE *)RX_VIEW);\
							MODE = 1;\
						}\
					}\
					\
					/*\
					 * THE VIEWS KEEP THE SECTION ALIVE, SO THE HANDLE\
					 * ITSELF IS NOT NEEDED ANY MORE.\
					 */\
					KERNEL32.CloseHandle(SECTION);\
				}\
			}\
			\
			if (RW == (BYTE *)0)\
				SLAB = ((struct S_SLAB *)0);\
			else\
			{\
				NEW_SLAB = (struct S_SLAB *)ALLOC(sizeof(struct S_SLAB));\
				\
				if (!NEW_SLAB)\
				{\
					if (RX != RW)\
					{\
						KERNEL32.UnmapViewOfFile((PTR)RX);\
						KERNEL32.UnmapViewOfFile((PTR)RW);\
					}\
					else\
					{\
						KERNEL32.VirtualFree(\
							(PTR)RW, 0, (unsigned long)0X00008000\
						);\
					}\
					\
					SLAB = ((struct S_SLAB *)0);\
				}\
				else\
				{\
					NEW_SLAB->RW = RW;\
					NEW_SLAB->RX = RX;\
					NEW_SLAB->SIZE = SLAB_SIZE;\
					NEW_SLAB->MODE = MODE;\
					NEW_SLAB->SEGMENTS = (struct S_SEGMENT *)RW;\
					NEW_SLAB->SEGMENTS->SIZE =\
						SLAB_SIZE - ALIGN_UP(sizeof(struct S_SEGMENT));\
					NEW_SLAB->SEGMENTS->FREE = 1;\
					NEW_SLAB->SEGMENTS->NEXT = (struct S_SEGMENT *)0;\
					NEW_SLAB->SEGMENTS->PREV = (struct S_SEGMENT *)0;\
					NEW_SLAB->PREV = (struct S_SLAB *)0;\
					NEW_SLAB->NEXT = (struct S_SLAB *)0;\
					SLAB = NEW_SLAB;\
				}\
			}\
		}\
		\
		if (!SLAB)\
		{\
			MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
			return ((PTR)0);\
		}\
		\
		SLAB->NEXT = G_SLABS;\
		\
		if (G_SLABS)\
			G_SLABS->PREV = SLAB;\
		\
		G_SLABS = SLAB;\
		LOCALMACRO__EXE_TAKE_SEGMENT\
		MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
		return (RESULT);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
