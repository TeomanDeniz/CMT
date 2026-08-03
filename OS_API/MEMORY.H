/******************************************************************************\
# H - MEMORY                                     #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/06/12 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/03 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  MEMORY                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| CROSS-PLATFORM MEMORY MANAGEMENT UTILITIES FOR NORMAL, FAR, PAGED, AND   |*|
|*| EXECUTABLE MEMORY ALLOCATION.                                            |*|
|*|                                                                          |*|
|*| PROVIDES LIGHTWEIGHT WRAPPERS AROUND STANDARD ALLOCATORS WHILE EXPOSING  |*|
|*| LOW-LEVEL FEATURES SUCH AS PAGE ALLOCATION, RUNTIME MEMORY PROTECTION    |*|
|*| CHANGES, EXECUTABLE MEMORY REGIONS, AND FAR-POINTER COMPATIBILITY FOR    |*|
|*| LEGACY ARCHITECTURES.                                                    |*|
|*|                                                                          |*|
|*| DESIGNED TO WORK ACROSS 16-BIT, 32-BIT, AND 64-BIT ENVIRONMENTS WITH     |*|
|*| AUTOMATIC ARCHITECTURE-AWARE BEHAVIOR AND FALLBACK HANDLING.             |*|
|*|    ______                                                                |*|
|*| IF stdlib EXISTS IN YOUR COMPILER, THE FUNCTION WILL SIMPLY USES THE     |*|
|*| malloc, calloc, AND free FUNCTIONS FOR BEST PERFORMANCE.                 |*|
|*| ^^^^^^  ^^^^^^      ^^^^                                                 |*|
|*| FAR POINTER FUNCTIONS ARE AUTOMATICALLY DOWNGRADES TO NORMAL FUNCTIONS   |*|
|*| IN 32-BIT AND 64-BIT ARCHITECTURES.                                      |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define PTR_MODE_NONE                                         | 109      |*|
|*| #define PTR_MODE_RWX                                          |          |*|
|*| #define PTR_MODE_RW                                           |          |*|
|*| #define PTR_MODE_RX                                           |          |*|
|*| #define PTR_MODE_WX                                           |          |*|
|*| #define PTR_MODE_R                                            |          |*|
|*| #define PTR_MODE_W                                            |          |*|
|*| #define PTR_MODE_X                                            |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| PTR ALLOC(LEN);                                               | 169      |*|
|*|---------------------------------------------------------------|----------|*|
|*| PTR CALLOC(LEN);                                              | 203      |*|
|*|---------------------------------------------------------------|----------|*|
|*| PTR REALLOC(PTR, LEN);                                        | 240      |*|
|*|---------------------------------------------------------------|----------|*|
|*| void FREE(PTR);                                               | 287      |*|
|*|---------------------------------------------------------------|----------|*|
|*| LET LENGTH(PTR);                                              | 314      |*|
|*|---------------------------------------------------------------|----------|*|
|*| FAR_PTR FAR_ALLOC(LEN);                                       | 362      |*|
|*|---------------------------------------------------------------|----------|*|
|*| FAR_PTR FAR_CALLOC(LEN);                                      | 397      |*|
|*|---------------------------------------------------------------|----------|*|
|*| FAR_PTR FAR_REALLOC(FAR_PTR, LEN);                            | 425      |*|
|*|---------------------------------------------------------------|----------|*|
|*| void FAR_FREE(FAR_PTR);                                       | 455      |*|
|*|---------------------------------------------------------------|----------|*|
|*| LET FAR_LENGTH(FAR_PTR);                                      | 483      |*|
|*|---------------------------------------------------------------|----------|*|
|*| BOOLEAN MEMORY_MODE(PTR, LET, BIT32);                         | 511      |*|
|*|---------------------------------------------------------------|----------|*|
|*| BOOLEAN FAR_MEMORY_MODE(FAR_PTR, LET, BIT32);                 | 561      |*|
|*|---------------------------------------------------------------|----------|*|
|*| PTR ALLOC_EXE(PTR, LET);                                      | 586      |*|
|*|---------------------------------------------------------------|----------|*|
|*| LET LENGTH_EXE(PTR);                                          | 680      |*|
|*|---------------------------------------------------------------|----------|*|
|*| void FREE_EXE(PTR);                                           | 713      |*|
|*|---------------------------------------------------------------|----------|*|
|*| FAR_PTR FAR_ALLOC_EXE(PTR, LET);                              | 750      |*|
|*|---------------------------------------------------------------|----------|*|
|*| LET FAR_LENGTH_EXE(FAR_PTR);                                  | 776      |*|
|*|---------------------------------------------------------------|----------|*|
|*| void FAR_FREE_EXE(FAR_PTR);                                   | 799      |*|
|*|---------------------------------------------------------------|----------|*|
|*| LET PAGE_SIZE;                                                | 822      |*|
|*|---------------------------------------------------------------|----------|*|
|*| LET GET_PAGE_SIZE(void);                                      | 856      |*|
|*|---------------------------------------------------------------|----------|*|
|*| PTR ALLOC_PAGE(LET, BIT32, BIT32);                            | 884      |*|
|*|---------------------------------------------------------------|----------|*|
|*| void FREE_PAGE(PTR);                                          | 933      |*|
|*|---------------------------------------------------------------|----------|*|
|*| BOOLEAN IS_HEAP(PTR);                                         | 967      |*|
|*|---------------------------------------------------------------|----------|*|
|*| BOOLEAN IS_HEAP_FAR(FAR_PTR);                                 | 996      |*|
|*|---------------------------------------------------------------|----------|*|
|*| BOOLEAN IS_HEAP_EXE(PTR);                                     | 1023     |*|
|*|---------------------------------------------------------------|----------|*|
|*| BOOLEAN IS_HEAP_FAR_EXE(FAR_PTR);                             | 1053     |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: PTR_MODE :............................... *|
|* :                              ''''''''''''                              : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| #define PTR_MODE_NONE                                              : *|
|* :  3| #define PTR_MODE_R                                                 : *|
|* :  4| #define PTR_MODE_W                                                 : *|
|* :  5| #define PTR_MODE_X                                                 : *|
|* :  6| #define PTR_MODE_RW                                                : *|
|* :  7| #define PTR_MODE_RX                                                : *|
|* :  8| #define PTR_MODE_WX                                                : *|
|* :  9| #define PTR_MODE_RWX                                               : *|
|* : 10|                                                                    : *|
|* :                                                                        : *|
|* : PROTECTION FLAGS DESCRIBING WHAT THE CPU IS ALLOWED TO DO WITH A       : *|
|* : REGION OF MEMORY: READ, WRITE, EXECUTE.                                : *|
|* :                   ^     ^       ^                                      : *|
|* : THEY ARE CONSUMED BY <MEMORY_MODE>, <FAR_MEMORY_MODE> AND              : *|
|* : ALLOC_PAGE.                                                            : *|
|* : ^^^^^^^^^^                                                             : *|
|* :  _________________ __________________________________________________  : *|
|* : | CONSTANT        | MEANING                                          | : *|
|* : |=================|==================================================| : *|
|* : | <PTR_MODE_NONE> | NO ACCESS AT ALL. ANY TOUCH FAULTS.              | : *|
|* : |-----------------|--------------------------------------------------| : *|
|* : | <PTR_MODE_R>    | READ ONLY.                                       | : *|
|* : |-----------------|--------------------------------------------------| : *|
|* : | <PTR_MODE_W>    | WRITE ONLY.                                      | : *|
|* : |-----------------|--------------------------------------------------| : *|
|* : | <PTR_MODE_X>    | EXECUTE ONLY.                                    | : *|
|* : |-----------------|--------------------------------------------------| : *|
|* : | <PTR_MODE_RW>   | READ AND WRITE. ORDINARY DATA MEMORY.            | : *|
|* : |-----------------|--------------------------------------------------| : *|
|* : | <PTR_MODE_RX>   | READ AND EXECUTE. FINISHED CODE.                 | : *|
|* : |-----------------|--------------------------------------------------| : *|
|* : | <PTR_MODE_WX>   | WRITE AND EXECUTE.                               | : *|
|* : |-----------------|--------------------------------------------------| : *|
|* : | <PTR_MODE_RWX>  | READ, WRITE AND EXECUTE.                         | : *|
|* : |_________________|__________________________________________________| : *|
|* :     _________________________                                          : *|
|* : /!\ DO NOT COMBINE THESE WITH |.                                       : *|
|* :                               ^                                        : *|
|* : ON UNIX THESE EXPAND TO <PROT_*> BIT FLAGS, SO <PTR_MODE_R |           : *|
|* : PTR_MODE_X> HAPPENS TO WORK. ON WINDOWS THEY EXPAND TO <PAGE_*>        : *|
|* : <ENUMERATED VALUES>, WHERE <PTR_MODE_R | PTR_MODE_X> PRODUCES THE      : *|
|* : NUMBER <18>, WHICH IS NOT A VALID PROTECTION CONSTANT AND MAKES THE    : *|
|* : CALL FAIL. ALWAYS PASS ONE OF THE COMBINED CONSTANTS DIRECTLY.         : *|
|* :                                                                        : *|
|* : O - TWO MORE PLATFORM NOTES WORTH KNOWING                              : *|
|* : :                                                                      : *|
|* : :.., MOST HARDWARE CANNOT EXPRESS "WRITE BUT NOT READ". ON WINDOWS     : *|
|* : :  : <PTR_MODE_W> IS THE SAME VALUE AS <PTR_MODE_RW>, AND ON MOST UNIX : *|
|* : :  : KERNELS <PROT_WRITE> IMPLIES READ AS WELL. TREAT <PTR_MODE_W> AS  : *|
|* : :  : "AT LEAST WRITABLE", NEVER AS A WAY TO HIDE DATA FROM A READER.   : *|
|* : :                                                                      : *|
|* : :.., <PTR_MODE_X> ALONE IS LIKEWISE UNAVAILABLE ON MANY TARGETS AND IS : *|
|* :    : USUALLY WIDENED TO <PTR_MODE_RX> BY THE KERNEL.                   : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 .........                                  *|
|* ................................: ALLOC :................................. *|
|* :                               '''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PTR    ALLOC(LEN);                                                  : *|
|* : 3|                                                                     : *|
|* :                                         ___                            : *|
|* : ALLOCATES A RAW BLOCK OF MEMORY OF SIZE LEN BYTES. THE RETURNED        : *|
|* : MEMORY IS UNINITIALIZED, MEANING IT MAY CONTAIN GARBAGE DATA.          : *|
|* :                                                                        : *|
|* : THIS IS A DIRECT WRAPPER OVER malloc WHEN AVAILABLE.                   : *|
|* :                               ^^^^^^                                   : *|
|* : USE IT WHEN YOU INTEND TO IMMEDIATELY OVERWRITE THE ALLOCATED MEMORY.  : *|
|* :                                    ______  _______     ____            : *|
|* : FOR NOT CONFLICTING FUNCTIONS LIKE calloc, realloc AND free,           : *|
|* : THERE IS NO LOWERCASE VERSION OF THESE FUNCTIONS.                      : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| char    *test_memory = (char *)ALLOC(42);                          : *|
|* :  3|                                                                    : *|
|* :  4| test_memory[0] = 't'                                               : *|
|* :  5| test_memory[1] = 'e'                                               : *|
|* :  6| test_memory[2] = 's'                                               : *|
|* :  7| test_memory[3] = 't'                                               : *|
|* :  8| test_memory[4] = 0                                                 : *|
|* :  9|                                                                    : *|
|* : 10| ...                                                                : *|
|* : 11|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: CALLOC :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PTR    CALLOC(LEN);                                                 : *|
|* : 3|                                                                     : *|
|* :                                     ___                                : *|
|* : ALLOCATES A BLOCK OF MEMORY OF SIZE LEN BYTES AND INITIALIZES ALL      : *|
|* : BYTES TO ZERO.                                                         : *|
|* :                                                                        : *|
|* : THIS IS A DIRECT WRAPPER OVER calloc WHEN AVAILABLE.                   : *|
|* :                               ^^^^^^                                   : *|
|* : USE IT WHEN YOU NEED PREDICTABLE ZERO-INITIALIZED MEMORY (E.G. ARRAYS, : *|
|* : STRUCTS, BUFFERS).                                                     : *|
|* :                         ___________________  ______                    : *|
|* : /!\ UNLIKE THE STANDARD calloc(count, size), CALLOC TAKES A            : *|
|* : <SINGLE> TOTAL BYTE COUNT. THERE IS NO SEPARATE ELEMENT-COUNT          : *|
|* : ARGUMENT, SO NO INTERNAL MULTIPLICATION OVERFLOW CHECK IS PERFORMED.   : *|
|* : IF YOU ARE ALLOCATING AN ARRAY, CALCULATE AND VALIDATE <count * size>  : *|
|* : YOURSELF BEFORE CALLING.                                               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| char    *test_memory = (char *)CALLOC(42);                         : *|
|* :  3|                                                                    : *|
|* :  4| test_memory[0] = 't'                                               : *|
|* :  5| test_memory[1] = 'e'                                               : *|
|* :  6| test_memory[2] = 's'                                               : *|
|* :  7| test_memory[3] = 't'                                               : *|
|* :  8|                                                                    : *|
|* :  9| ...                                                                : *|
|* : 10|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: REALLOC :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PTR    REALLOC(PTR, LEN);                                           : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : O - RESIZES A PREVIOUSLY ALLOCATED MEMORY BLOCK (PTR) TO LEN BYTES.    : *|
|* : :                                                ^^^     ^^^           : *|
|* : :.., IF THE NEW SIZE IS LARGER, THE EXISTING DATA IS PRESERVED AND THE : *|
|* : :  : EXTRA MEMORY IS UNINITIALIZED.                                    : *|
|* : :                                                                      : *|
|* : :.., IF SMALLER, THE BLOCK IS TRUNCATED.                               : *|
|* : :                                                                      : *|
|* : :.., MAY MOVE THE MEMORY TO A NEW LOCATION - ALWAYS USE THE RETURNED   : *|
|* : :  : POINTER.                                                          : *|
|* : :                                                                      : *|
|* : :.., IF <PTR> IS <NULL>, BEHAVES LIKE <malloc>.                        : *|
|* : :                                                                      : *|
|* : :.., IF LEN IS 0, BEHAVES LIKE free.                                   : *|
|* :         ^^^    ^               ^^^^                                    : *|
|* : USE IT WHEN YOU NEED TO DYNAMICALLY GROW OR SHRINK BUFFERS.            : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| char    *buffer = (char *)CALLOC(4);                               : *|
|* :  3|                                                                    : *|
|* :  4| buffer[0] = 't';                                                   : *|
|* :  5| buffer[1] = 'e';                                                   : *|
|* :  6| buffer[2] = 's';                                                   : *|
|* :  7| buffer[3] = 't';                                                   : *|
|* :  8|                                                                    : *|
|* :  9| // resize to hold more data                                        : *|
|* : 10| buffer = (char *)REALLOC(buffer, 8);                               : *|
|* : 11|                                                                    : *|
|* : 12| buffer[4] = '!';                                                   : *|
|* : 13| buffer[5] = '!';                                                   : *|
|* : 14| buffer[6] = '!';                                                   : *|
|* : 15| buffer[7] = '\0';                                                  : *|
|* : 16|                                                                    : *|
|* : 17| // buffer now contains "test!!!"                                   : *|
|* : 18|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  ........                                  *|
|* .................................: FREE :................................. *|
|* :                                ''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    FREE(PTR);                                                  : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEALLOCATES A PREVIOUSLY ALLOCATED MEMORY BLOCK.                       : *|
|* :                                   _____    ______                      : *|
|* : THE POINTER MUST EITHER COME FROM ALLOC OR CALLOC. AFTER CALLING       : *|
|* : FREE, THE POINTER BECOMES INVALID AND MUST NOT BE DEREFERENCED.        : *|
|* : ^^^^                                                                   : *|
|* : THIS IS A DIRECT WRAPPER OVER free WHEN AVAILABLE.                     : *|
|* :                               ^^^^                                     : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| char    *test_memory = (char *)ALLOC(42);                           : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| FREE(test_memory);                                                  : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: LENGTH :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| LET    LENGTH(PTR);                                                 : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : RETURNS THE USABLE SIZE, IN BYTES, OF A BLOCK PREVIOUSLY RETURNED BY   : *|
|* : ALLOC, CALLOC OR REALLOC.                                              : *|
|* : ^^^^^  ^^^^^^    ^^^^^^^                                               : *|
|* : O - EVERY ALLOCATION CARRIES A SMALL HIDDEN HEADER IMMEDIATELY BEFORE  : *|
|* : :   THE ADDRESS YOU RECEIVE, AND <LENGTH> SIMPLY READS THE SIZE FIELD  : *|
|* : :   BACK OUT OF IT. THIS MEANS THE LOOKUP IS O(1) - NO SCANNING, NO    : *|
|* : :   BOOKKEEPING TABLE.                                                 : *|
|* : :            _                   ____                                  : *|
|* : :.., RETURNS 0 IF THE POINTER IS NULL.                                 : *|
|* : :                                                                      : *|
|* : :.., THE VALUE MAY BE <LARGER> THAN WHAT YOU ORIGINALLY REQUESTED,     : *|
|* : :  : BECAUSE REQUESTS ARE ROUNDED UP TO THE ALLOCATOR'S ALIGNMENT      : *|
|* : :  : GRANULARITY.                                                      : *|
|* : :                                                                      : *|
|* : :.., PASSING A POINTER THAT DID NOT COME FROM THIS ALLOCATOR (A STACK  : *|
|* :    : ADDRESS, A STRING LITERAL, A POINTER FROM THE SYSTEM <malloc>)    : *|
|* :    : READS WHATEVER BYTES HAPPEN TO SIT BEFORE IT. THE RESULT IS       : *|
|* :    : MEANINGLESS AND THE PROGRAM MAY CRASH.                            : *|
|* :                                                                        : *|
|* : USE IT WHEN YOU WANT TO CARRY A BUFFER AROUND WITHOUT CARRYING A       : *|
|* : SEPARATE SIZE VARIABLE NEXT TO IT.                                     : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| char    *buffer = (char *)ALLOC(42);                               : *|
|* :  3|                                                                    : *|
|* :  4| ...                                                                : *|
|* :  5|                                                                    : *|
|* :  6| // NO NEED TO REMEMBER "42" ANYMORE                                : *|
|* :  7| LET    size = LENGTH(buffer);                                      : *|
|* :  8|                                                                    : *|
|* :  9| while (size--)                                                     : *|
|* : 10|     buffer[size] = 0;                                              : *|
|* : 11|                                                                    : *|
|* : 12| FREE(buffer);                                                      : *|
|* : 13|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               .............                                *|
|* ..............................: FAR_ALLOC :............................... *|
|* :                             '''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    FAR_ALLOC(LEN);                                          : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : ALLOCATES LEN BYTES OF MEMORY REACHABLE THROUGH A FAR POINTER.         : *|
|* :           ^^^                                                          : *|
|* : ON 16-BIT TARGETS THIS REACHES MEMORY OUTSIDE THE CURRENT DATA         : *|
|* : SEGMENT, ALLOWING ALLOCATIONS LARGER THAN 64 KB AND BEYOND THE NEAR    : *|
|* : HEAP. ON 32-BIT AND 64-BIT TARGETS THERE IS NO SEGMENTATION, SO        : *|
|* : <FAR_PTR> COLLAPSES TO A NORMAL POINTER AND THIS FUNCTION SIMPLY       : *|
|* : FORWARDS TO ALLOC.                                                     : *|
|* :             ^^^^^                                                      : *|
|* : USE IT ONLY WHEN YOU ARE WRITING CODE THAT MUST ALSO BUILD FOR A       : *|
|* : SEGMENTED 16-BIT MEMORY MODEL. ON EVERY MODERN TARGET IT IS A NO-COST  : *|
|* : ALIAS.                                                                 : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| FAR_PTR    huge_buffer = FAR_ALLOC(70000); // > 64 KB              : *|
|* :  3|                                                                    : *|
|* :  4| if (!huge_buffer)                                                  : *|
|* :  5|     return (1);                                                    : *|
|* :  6|                                                                    : *|
|* :  7| ...                                                                : *|
|* :  8|                                                                    : *|
|* :  9| FAR_FREE(huge_buffer);                                             : *|
|* : 10|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ..............                               *|
|* ..............................: FAR_CALLOC :.............................. *|
|* :                             ''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    FAR_CALLOC(LEN);                                         : *|
|* : 3|                                                                     : *|
|* :         _________                                                      : *|
|* : SAME AS FAR_ALLOC, EXCEPT EVERY BYTE OF THE RETURNED BLOCK IS SET TO   : *|
|* : ZERO.                                                                  : *|
|* :      ______                                                            : *|
|* : LIKE CALLOC, THIS TAKES A SINGLE TOTAL BYTE COUNT RATHER THAN AN       : *|
|* : ELEMENT COUNT AND AN ELEMENT SIZE.                                     : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    table = FAR_CALLOC(70000);                               : *|
|* : 3|                                                                     : *|
|* : 4| // ALL 70000 BYTES ARE GUARANTEED TO BE 0                           : *|
|* : 5|                                                                     : *|
|* : 6| ...                                                                 : *|
|* : 7|                                                                     : *|
|* : 8| FAR_FREE(table);                                                    : *|
|* : 9|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ...............                               *|
|* .............................: FAR_REALLOC :.............................. *|
|* :                            '''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    FAR_REALLOC(FAR_PTR, LEN);                               : *|
|* : 3|                                                                     : *|
|* :                                        _________    __________         : *|
|* : RESIZES A BLOCK PREVIOUSLY RETURNED BY FAR_ALLOC OR FAR_CALLOC TO      : *|
|* : LEN BYTES.                                                             : *|
|* : ^^^                                                                    : *|
|* : BEHAVES EXACTLY LIKE <REALLOC>, INCLUDING THE <NULL> AND ZERO-LENGTH   : *|
|* : SPECIAL CASES, BUT OPERATES ON FAR POINTERS. THE BLOCK MAY MOVE, SO    : *|
|* : ALWAYS USE THE RETURNED VALUE AND DISCARD THE OLD POINTER.             : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| FAR_PTR    buffer = FAR_ALLOC(70000);                              : *|
|* :  3|                                                                    : *|
|* :  4| ...                                                                : *|
|* :  5|                                                                    : *|
|* :  6| buffer = FAR_REALLOC(buffer, 140000);                              : *|
|* :  7|                                                                    : *|
|* :  8| if (!buffer)                                                       : *|
|* :  9|     return (1); // OLD BLOCK IS STILL ALIVE ON FAILURE             : *|
|* : 10|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: FAR_FREE :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    FAR_FREE(FAR_PTR);                                          : *|
|* : 3|                                                                     : *|
|* :                                         _________  __________          : *|
|* : RELEASES A BLOCK PREVIOUSLY RETURNED BY FAR_ALLOC, FAR_CALLOC OR       : *|
|* : FAR_REALLOC.                                                           : *|
|* : ^^^^^^^^^^^                                                            : *|
|* : DO NOT MIX ALLOCATOR FAMILIES: A POINTER FROM <FAR_ALLOC> MUST BE      : *|
|* : RELEASED WITH <FAR_FREE>, AND A POINTER FROM <ALLOC> MUST BE RELEASED  : *|
|* : WITH <FREE>. ON 16-BIT BUILDS THESE USE GENUINELY DIFFERENT UNDERLYING : *|
|* : ALLOCATORS, AND CROSSING THEM CORRUPTS THE HEAP.                       : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    buffer = FAR_ALLOC(70000);                               : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| FAR_FREE(buffer);                                                   : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ..............                               *|
|* ..............................: FAR_LENGTH :.............................. *|
|* :                             ''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| LET    FAR_LENGTH(FAR_PTR);                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : RETURNS THE USABLE SIZE, IN BYTES, OF A FAR BLOCK.                     : *|
|* :                                        ______                          : *|
|* : THIS IS THE FAR-POINTER COUNTERPART OF LENGTH AND FOLLOWS EXACTLY      : *|
|* : THE SAME RULES: <0> FOR A <NULL> POINTER, POSSIBLY ROUNDED UP FROM     : *|
|* : YOUR ORIGINAL REQUEST, AND UNDEFINED FOR POINTERS THIS MODULE DID NOT  : *|
|* : HAND OUT.                                                              : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    buffer = FAR_ALLOC(70000);                               : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| if (FAR_LENGTH(buffer) < needed)                                    : *|
|* : 7|     buffer = FAR_REALLOC(buffer, needed);                           : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ...............                               *|
|* .............................: MEMORY_MODE :.............................. *|
|* :                            '''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| BOOLEAN    MEMORY_MODE(PTR, LET, BIT32);                            : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : CHANGES THE PROTECTION OF AN ALREADY-MAPPED REGION AT RUNTIME. RETURNS : *|
|* : A NON-ZERO VALUE ON SUCCESS AND 0 ON FAILURE.                          : *|
|* :                                 ^                                      : *|
|* : ARGUMENTS ARE THE STARTING ADDRESS, THE LENGTH IN BYTES, AND ONE OF    : *|
|* : THE PTR_MODE CONSTANTS.                                                : *|
|* :     ^^^^^^^^                                                           : *|
|* : /!\ THE ADDRESS MUST BE PAGE-ALIGNED.                                  : *|
|* :     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                                  : *|
|* : PROTECTION IS A PROPERTY OF WHOLE PAGES, NOT OF INDIVIDUAL BYTES. ON   : *|
|* : UNIX, PASSING AN ADDRESS THAT IS NOT A MULTIPLE OF <PAGE_SIZE> MAKES   : *|
|* : THE UNDERLYING <mprotect> FAIL OUTRIGHT. ON WINDOWS THE CALL QUIETLY   : *|
|* : SUCCEEDS BUT ROUNDS OUTWARD, CHANGING THE PROTECTION OF <EVERY> BYTE   : *|
|* : ON THE PAGES YOU TOUCHED - INCLUDING DATA BELONGING TO UNRELATED       : *|
|* : ALLOCATIONS THAT HAPPEN TO SHARE THE PAGE.                             : *|
|* :                        ___________                                     : *|
|* : IN PRACTICE THIS MEANS MEMORY_MODE IS SAFE ON MEMORY FROM              : *|
|* : ALLOC_PAGE, AND UNSAFE ON MEMORY FROM ALLOC / CALLOC.                  : *|
|* : ^^^^^^^^^^                            ^^^^^   ^^^^^^                   : *|
|* : ALSO NOTE THAT REVOKING WRITE ACCESS DOES NOT SCRUB THE CONTENTS; THE  : *|
|* : BYTES ARE STILL THERE, THEY ARE JUST NO LONGER WRITABLE.               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| PTR    region = ALLOC_PAGE(4096, PTR_MODE_RW, 0);                  : *|
|* :  3|                                                                    : *|
|* :  4| ...                                                                : *|
|* :  5|                                                                    : *|
|* :  6| // FILL IT FIRST                                                   : *|
|* :  7| memset(region, 0, 4096);                                           : *|
|* :  8|                                                                    : *|
|* :  9| // THEN FREEZE IT                                                  : *|
|* : 10| if (!MEMORY_MODE(region, 4096, PTR_MODE_R))                        : *|
|* : 11|     return (1);                                                    : *|
|* : 12|                                                                    : *|
|* : 13| // region[0] = 1; <-- WOULD NOW CRASH                              : *|
|* : 14|                                                                    : *|
|* : 15| FREE_PAGE(region);                                                 : *|
|* : 16|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                            ...................                             *|
|* ...........................: FAR_MEMORY_MODE :............................ *|
|* :                          '''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| BOOLEAN    FAR_MEMORY_MODE(FAR_PTR, LET, BIT32);                    : *|
|* : 3|                                                                     : *|
|* :                            ___________                                 : *|
|* : FAR-POINTER COUNTERPART OF MEMORY_MODE. IDENTICAL SEMANTICS,           : *|
|* : IDENTICAL PAGE-ALIGNMENT REQUIREMENT.                                  : *|
|* :                                                                        : *|
|* : ON 32-BIT AND 64-BIT TARGETS IT FORWARDS DIRECTLY TO MEMORY_MODE.      : *|
|* :                                                      ^^^^^^^^^^^       : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    region = (FAR_PTR)ALLOC_PAGE(4096, PTR_MODE_RW, 0);      : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| FAR_MEMORY_MODE(region, 4096, PTR_MODE_RX);                         : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               .............                                *|
|* ..............................: ALLOC_EXE :............................... *|
|* :                             '''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PTR    ALLOC_EXE(const PTR OP_CODES, LET);                          : *|
|* : 3|                                                                     : *|
|* :                      __________                ___                     : *|
|* : ALLOCATES A BLOCK OF EXECUTABLE MEMORY, COPIES LEN BYTES OF            : *|
|* : MACHINE CODE FROM <OP_CODES> INTO IT, FLUSHES THE INSTRUCTION CACHE    : *|
|* : FOR THAT RANGE, AND RETURNS A POINTER YOU CAN CAST TO A FUNCTION       : *|
|* : POINTER AND CALL.                                                      : *|
|* :    ________    ____                                                    : *|
|* : IF OP_CODES IS NULL THE REGION IS ALLOCATED BUT LEFT                   : *|
|* : UNINITIALIZED.                                                         : *|
|* :                                                                        : *|
|* : ALLOCATIONS ARE SERVED FROM INTERNALLY MANAGED SLABS, SO MANY SMALL    : *|
|* : STUBS SHARE ONE MAPPING INSTEAD OF BURNING A PAGE EACH. FREED SEGMENTS : *|
|* : ARE COALESCED WITH THEIR NEIGHBOURS AND REUSED, AND A SLAB IS RETURNED : *|
|* : TO THE OPERATING SYSTEM ONCE EVERY SEGMENT INSIDE IT IS FREE.          : *|
|* :                                                                        : *|
|* : THIS IS THE PRIMITIVE YOU BUILD A JIT, A TRAMPOLINE, A THUNK, OR A     : *|
|* : RUNTIME PATCH OUT OF.                                                  : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| // x86-64: mov eax, 42 ; ret                                       : *|
|* :  3| static const unsigned char    CODE[] = {                           : *|
|* :  4|     0XB8, 0X2A, 0X00, 0X00, 0X00,                                  : *|
|* :  5|     0XC3                                                           : *|
|* :  6| };                                                                 : *|
|* :  7|                                                                    : *|
|* :  8| LET    (*answer)(void);                                            : *|
|* :  9|                                                                    : *|
|* : 10| answer = (LET (*)(void))ALLOC_EXE((PTR)CODE, sizeof(CODE));        : *|
|* : 11|                                                                    : *|
|* : 12| if (!answer)                                                       : *|
|* : 13|     return (1);                                                    : *|
|* : 14|                                                                    : *|
|* : 15| ...                                                                : *|
|* : 16|                                                                    : *|
|* : 17| // PRINTS 42                                                       : *|
|* : 18| printf("%lu\n", answer());                                         : *|
|* : 19|                                                                    : *|
|* : 20| FREE_EXE((PTR)answer);                                             : *|
|* : 21|                                                                    : *|
|* :                                                                        : *|
|* : MEMORY PROTECTION AND WHAT YOU MAY ASSUME ABOUT THE POINTER            : *|
|* :                                                                        : *|
|* : EXECUTABLE MEMORY IS THE ONE ALLOCATION THE OPERATING SYSTEM GENUINELY : *|
|* : ARGUES WITH YOU ABOUT, SO <ALLOC_EXE> TRIES STRATEGIES IN ORDER OF     : *|
|* : SPEED AND TAKES THE FIRST THE HOST PERMITS.                            : *|
|* : ^^^^^                                                                  : *|
|* :                                                                        : *|
|* : TIER 1 IS WHAT VIRTUALLY EVERY HOST TAKES. TIER 2 ONLY APPEARS WHERE   : *|
|* : THE KERNEL REFUSES EXECUTABLE ANONYMOUS MEMORY OUTRIGHT - OPENBSD'S    : *|
|* : W^X ENFORCEMENT, SELINUX WITH <deny_execmem>, OR WINDOWS WITH          : *|
|* : ARBITRARY CODE GUARD ENABLED.                                          : *|
|* :                            ___________                                 : *|
|* : A THIRD STRATEGY - MAPPING PTR_MODE_RW, FILLING IT, THEN FLIPPING      : *|
|* : THE WHOLE SLAB TO <PTR_MODE_RX> AND BACK - WAS IMPLEMENTED AND THEN    : *|
|* : REMOVED ON MEASUREMENT. IT COSTS TWO <mprotect> CALLS PER ALLOCATION   : *|
|* : <AND> TWO PER FREE, PLUS A TLB SHOOTDOWN EACH TIME, WHICH BENCHMARKED  : *|
|* : AROUND <6600 NS> PER ALLOCATE/FREE PAIR AGAINST <10 NS> FOR BOTH TIERS : *|
|* : ABOVE. IT ALSO ALMOST NEVER HELPS: HOSTS THAT REFUSE <PROT_EXEC> ON    : *|
|* : ANONYMOUS MEMORY GENERALLY REFUSE <mprotect(PROT_EXEC)> FOR THE SAME   : *|
|* : REASON.                                                                : *|
|* :                                                                        : *|
|* : MACOS IS A SPECIAL CASE. APPLE DOES NOT PERMIT TIER 2 UNDER THE        : *|
|* : HARDENED RUNTIME, SO TIER 1 FALLS BACK TO <MAP_JIT> PLUS               : *|
|* : <pthread_jit_write_protect_np>, WHICH TOGGLES THE WRITE PERMISSION OF  : *|
|* : JIT PAGES <PER THREAD> IN HARDWARE. TWO CONSEQUENCES FOLLOW: THE       : *|
|* : TOGGLE IS THREAD-LOCAL, SO A SLAB WRITTEN ON ONE THREAD IS NOT         : *|
|* : WRITABLE FROM ANOTHER; AND IT COVERS EVERY <MAP_JIT> REGION ON THAT    : *|
|* : THREAD AT ONCE, SO YOU CANNOT HOLD ONE JIT REGION WRITABLE WHILE       : *|
|* : ANOTHER EXECUTES.                                                      : *|
|* :                                                                        : *|
|* : /!\ DO NOT ASSUME THE RETURNED POINTER IS WRITABLE.                    : *|
|* :     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                    : *|
|* : ON TIER 1 IT HAPPENS TO BE, BECAUSE THE WHOLE REGION IS                : *|
|* : <PTR_MODE_RWX>. ON TIER 2 AND UNDER <MAP_JIT> IT IS NOT, AND WRITING   : *|
|* : THROUGH IT FAULTS. SINCE THE TIER IS CHOSEN BY THE HOST AND NOT BY     : *|
|* : YOU, PORTABLE CODE MUST HAND ALL MACHINE CODE OVER IN THE <OP_CODES>   : *|
|* : ARGUMENT AT ALLOCATION TIME. IF YOU NEED TO MODIFY A STUB, ALLOCATE A  : *|
|* : NEW ONE AND FREE THE OLD ONE.                                          : *|
|* :                                                                        : *|
|* : REGARDLESS OF TIER, THE INSTRUCTION CACHE IS FLUSHED OVER THE NEW CODE : *|
|* : BEFORE THE POINTER IS RETURNED. THIS MATTERS ENORMOUSLY ON ARM, MIPS   : *|
|* : AND POWER, WHERE THE DATA AND INSTRUCTION CACHES ARE NOT COHERENT AND  : *|
|* : FRESHLY WRITTEN BYTES ARE OTHERWISE INVISIBLE TO THE FETCH UNIT.       : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ..............                               *|
|* ..............................: LENGTH_EXE :.............................. *|
|* :                             ''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| LET    LENGTH_EXE(PTR);                                             : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : RETURNS THE SIZE, IN BYTES, OF AN EXECUTABLE SEGMENT PREVIOUSLY        : *|
|* : RETURNED BY ALLOC_EXE.                                                 : *|
|* :             ^^^^^^^^^                                                  : *|
|* : EXECUTABLE SEGMENTS CARRY THEIR OWN HEADER, SEPARATE FROM THE ONE USED : *|
|* : BY <ALLOC>, SO **<LENGTH> AND <LENGTH_EXE> ARE NOT INTERCHANGEABLE**.  : *|
|* : CALLING <LENGTH> ON AN <ALLOC_EXE> POINTER READS THE WRONG HEADER AND  : *|
|* : RETURNS GARBAGE.                                                       : *|
|* :         _       ____                  ______                           : *|
|* : RETURNS 0 FOR A NULL POINTER. AS WITH LENGTH, THE VALUE MAY            : *|
|* : EXCEED WHAT YOU REQUESTED BECAUSE OF ALIGNMENT ROUNDING.               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PTR    stub = ALLOC_EXE((PTR)CODE, sizeof(CODE));                   : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| printf("STUB OCCUPIES %lu BYTES\n", LENGTH_EXE(stub));              : *|
|* : 7|                                                                     : *|
|* : 8| FREE_EXE(stub);                                                     : *|
|* : 9|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: FREE_EXE :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    FREE_EXE(PTR);                                              : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : RELEASES AN EXECUTABLE SEGMENT OBTAINED FROM ALLOC_EXE.                : *|
|* :                                              ^^^^^^^^^                 : *|
|* : THE POINTER IS LOCATED BY SEARCHING THE SLAB LIST, SO PASSING AN       : *|
|* : ADDRESS THAT WAS NEVER RETURNED BY <ALLOC_EXE> IS DETECTED AND IGNORED : *|
|* : RATHER THAN CORRUPTING ANYTHING. DOUBLE FREES ARE LIKEWISE DETECTED    : *|
|* : AND IGNORED.                                                           : *|
|* :                                                                        : *|
|* : THE SEGMENT IS MERGED WITH ANY ADJACENT FREE SEGMENTS. WHEN THE WHOLE  : *|
|* : SLAB BECOMES FREE, EVERY MAPPING BACKING IT IS UNMAPPED AND THE MEMORY : *|
|* : GOES BACK TO THE OPERATING SYSTEM.                                     : *|
|* :                                                                        : *|
|* : /!\ MAKE ABSOLUTELY SURE NO THREAD IS STILL EXECUTING INSIDE THE STUB, : *|
|* : AND THAT NO FUNCTION POINTER STILL REFERS TO IT. UNLIKE A FREED DATA   : *|
|* : BLOCK, A FREED CODE BLOCK IS UNMAPPED RATHER THAN RECYCLED, SO A STALE : *|
|* : CALL JUMPS INTO AN UNMAPPED PAGE AND THE PROCESS DIES IMMEDIATELY.     : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PTR    stub = ALLOC_EXE((PTR)CODE, sizeof(CODE));                   : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| FREE_EXE(stub);                                                     : *|
|* : 7| stub = (PTR)0; // DON'T LEAVE A DANGLING CODE POINTER AROUND        : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             .................                              *|
|* ............................: FAR_ALLOC_EXE :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    FAR_ALLOC_EXE(const PTR OP_CODES, LET);                  : *|
|* : 3|                                                                     : *|
|* :                            _________                                   : *|
|* : FAR-POINTER COUNTERPART OF ALLOC_EXE. SAME SLAB ALLOCATOR, SAME TIER   : *|
|* : LADDER, SAME INSTRUCTION-CACHE FLUSH; ONLY THE RETURNED POINTER TYPE   : *|
|* : DIFFERS.                                                               : *|
|* :                                                                        : *|
|* : ON 32-BIT AND 64-BIT TARGETS IT FORWARDS DIRECTLY TO ALLOC_EXE.        : *|
|* :                                                      ^^^^^^^^^         : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    stub = FAR_ALLOC_EXE((PTR)CODE, sizeof(CODE));           : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| FAR_FREE_EXE(stub);                                                 : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             ..................                             *|
|* ............................: FAR_LENGTH_EXE :............................ *|
|* :                           ''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| LET    FAR_LENGTH_EXE(FAR_PTR);                                     : *|
|* : 3|                                                                     : *|
|* :                            __________                                  : *|
|* : FAR-POINTER COUNTERPART OF LENGTH_EXE. RETURNS THE SIZE OF A FAR       : *|
|* : EXECUTABLE SEGMENT, OR 0 FOR A NULL POINTER.                           : *|
|* :                        ^       ^^^^                                    : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    stub = FAR_ALLOC_EXE((PTR)CODE, sizeof(CODE));           : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| printf("%lu\n", FAR_LENGTH_EXE(stub));                              : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ................                              *|
|* .............................: FAR_FREE_EXE :............................. *|
|* :                            ''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    FAR_FREE_EXE(FAR_PTR);                                      : *|
|* : 3|                                                                     : *|
|* :                            ________                                    : *|
|* : FAR-POINTER COUNTERPART OF FREE_EXE. RELEASES A FAR EXECUTABLE         : *|
|* : SEGMENT AND CARRIES THE SAME WARNING ABOUT DANGLING CODE POINTERS.     : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR    stub = FAR_ALLOC_EXE((PTR)CODE, sizeof(CODE));           : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| FAR_FREE_EXE(stub);                                                 : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               .............                                *|
|* ..............................: PAGE_SIZE :............................... *|
|* :                             '''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| extern LET    PAGE_SIZE;                                            : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : THE SIZE OF A SINGLE MEMORY PAGE ON THE HOST, IN BYTES.                : *|
|* :                                                                        : *|
|* : THE VALUE IS CACHED ONCE BY THE MODULE'S CONSTRUCTOR AT STARTUP, SO    : *|
|* : READING IT COSTS NOTHING - NO SYSCALL, NO BRANCH. COMMONLY <4096>, BUT : *|
|* : DO NOT HARDCODE THAT: IT IS <16384> ON APPLE SILICON, AND <65536> ON   : *|
|* : SOME OTHER CONFIGURATIONS.                                             : *|
|* :     _________               _____                                      : *|
|* : /!\ PAGE_SIZE IS ONLY VALID AFTER THE MODULE CONSTRUCTOR HAS RUN.      : *|
|* : IF YOU CALL INTO THIS MODULE FROM YOUR OWN CONSTRUCTOR, OR FROM        : *|
|* : ANYTHING THAT RUNS BEFORE <main>, USE <GET_PAGE_SIZE> INSTEAD, WHICH   : *|
|* : COMPUTES THE VALUE ON DEMAND.                                          : *|
|* :                _________                                               : *|
|* : NOTE ALSO THAT PAGE_SIZE IS A NAME SEVERAL SYSTEM HEADERS LIKE TO      : *|
|* : DEFINE AS A MACRO OF THEIR OWN. INCLUDE <MEMORY.H> AFTER YOUR SYSTEM   : *|
|* : HEADERS IF YOU HIT A REDEFINITION.                                     : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| // ROUND A REQUEST UP TO A WHOLE NUMBER OF PAGES                    : *|
|* : 3| LET    rounded =                                                    : *|
|* : 4|     ((wanted + PAGE_SIZE - 1) / PAGE_SIZE) * PAGE_SIZE;             : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             .................                              *|
|* ............................: GET_PAGE_SIZE :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| LET    GET_PAGE_SIZE(void);                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : QUERIES THE HOST FOR ITS PAGE SIZE AND RETURNS IT.                     : *|
|* :                    _________                                           : *|
|* : RETURNS THE CACHED PAGE_SIZE WHEN IT IS ALREADY POPULATED, AND         : *|
|* : OTHERWISE ASKS THE OPERATING SYSTEM DIRECTLY - <sysconf(_SC_PAGESIZE)> : *|
|* : ON UNIX, <GetSystemInfo> ON WINDOWS. IF THE QUERY FAILS, A             : *|
|* : CONSERVATIVE 4096 IS RETURNED SO CALLERS ALWAYS GET A USABLE NUMBER.   : *|
|* :              ^^^^                                                      : *|
|* : PREFER <PAGE_SIZE> IN ORDINARY CODE AND REACH FOR THIS ONLY WHEN YOU   : *|
|* : CANNOT RELY ON THE CONSTRUCTOR HAVING RUN YET.                         : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| LET    page = GET_PAGE_SIZE();                                      : *|
|* : 3|                                                                     : *|
|* : 4| printf("PAGE SIZE: %lu\n", page);                                   : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ..............                               *|
|* ..............................: ALLOC_PAGE :.............................. *|
|* :                             ''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PTR    ALLOC_PAGE(LET, BIT32, BIT32);                               : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : ALLOCATES WHOLE PAGES DIRECTLY FROM THE OPERATING SYSTEM, BYPASSING    : *|
|* : THE BLOCK ALLOCATOR ENTIRELY.                                          : *|
|* :                                                       ________         : *|
|* : ARGUMENTS ARE THE REQUESTED SIZE IN BYTES, ONE OF THE PTR_MODE         : *|
|* : PROTECTION CONSTANTS, AND A FIELD OF EXTRA PLATFORM FLAGS PASSED       : *|
|* : STRAIGHT THROUGH TO THE UNDERLYING <mmap> OR <VirtualAlloc> (PASS <0>  : *|
|* : IF YOU HAVE NONE).                                                     : *|
|* :                                                                        : *|
|* : THE REQUEST IS ROUNDED UP TO A WHOLE NUMBER OF PAGES, AND THE RETURNED : *|
|* : ADDRESS IS PAGE-ALIGNED. THIS IS WHAT MAKES IT THE RIGHT INPUT FOR     : *|
|* : MEMORY_MODE.                                                           : *|
|* : ^^^^^^^^^^^                                                            : *|
|* : USE THIS WHEN YOU NEED PROTECTION CONTROL, A GUARD PAGE, A LARGE       : *|
|* : ARENA, OR MEMORY THAT IS GENUINELY RETURNED TO THE OS ON RELEASE       : *|
|* : RATHER THAN KEPT ON A FREE LIST. FOR ORDINARY ALLOCATIONS, <ALLOC> IS  : *|
|* : FAR CHEAPER.                                                           : *|
|* :         ____                          _________                        : *|
|* : RETURNS NULL ON FAILURE. RELEASE WITH FREE_PAGE ONLY - NEVER WITH      : *|
|* : FREE.                                                                  : *|
|* : ^^^^                                                                   : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| // A READ-ONLY LOOKUP TABLE NOBODY CAN CORRUPT LATER               : *|
|* :  3| PTR    table = ALLOC_PAGE(8192, PTR_MODE_RW, 0);                   : *|
|* :  4|                                                                    : *|
|* :  5| if (!table)                                                        : *|
|* :  6|     return (1);                                                    : *|
|* :  7|                                                                    : *|
|* :  8| ...                                                                : *|
|* :  9|                                                                    : *|
|* : 10| // FILL IT, THEN SEAL IT                                           : *|
|* : 11| MEMORY_MODE(table, 8192, PTR_MODE_R);                              : *|
|* : 12|                                                                    : *|
|* : 13| ...                                                                : *|
|* : 14|                                                                    : *|
|* : 15| FREE_PAGE(table);                                                  : *|
|* : 16|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               .............                                *|
|* ..............................: FREE_PAGE :............................... *|
|* :                             '''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    FREE_PAGE(PTR);                                             : *|
|* : 3|                                                                     : *|
|* :                              __________                                : *|
|* : RELEASES PAGES OBTAINED FROM ALLOC_PAGE, RETURNING THEM TO THE         : *|
|* : OPERATING SYSTEM IMMEDIATELY.                                          : *|
|* :                                                                        : *|
|* : THE ORIGINAL LENGTH IS RECOVERED FROM A HEADER STORED ALONGSIDE THE    : *|
|* : MAPPING, SO YOU DO NOT HAVE TO REMEMBER IT.                            : *|
|* :         ____                                                           : *|
|* : PASSING NULL IS SAFE AND DOES NOTHING. PASSING ANYTHING THAT DID NOT   : *|
|* : COME FROM ALLOC_PAGE IS UNDEFINED.                                     : *|
|* :           ^^^^^^^^^^                                                   : *|
|* : /!\ UNLIKE <FREE>, THIS GENUINELY UNMAPS THE ADDRESS RANGE. ANY LATER  : *|
|* : READ, WRITE OR EXECUTE THROUGH THAT POINTER FAULTS IMMEDIATELY RATHER  : *|
|* : THAN SILENTLY TOUCHING RECYCLED MEMORY.                                : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PTR    region = ALLOC_PAGE(4096, PTR_MODE_RW, 0);                   : *|
|* : 3|                                                                     : *|
|* : 4| ...                                                                 : *|
|* : 5|                                                                     : *|
|* : 6| FREE_PAGE(region);                                                  : *|
|* : 7| region = (PTR)0;                                                    : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: IS_HEAP :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| BOOLEAN    IS_HEAP(PTR);                                            : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : RETURNS WHETHER PTR POINTS TO A VALID HEAP ALLOCATION.                 : *|
|* :                 ^^^                                                    : *|
|* : THIS FUNCTION CAN BE USED TO VERIFY THAT A POINTER ORIGINATES FROM THE : *|
|* : HEAP BEFORE PASSING IT TO FUNCTIONS THAT REQUIRE HEAP-ALLOCATED        : *|
|* : MEMORY.                                                                : *|
|* :                                                                        : *|
|* : RETURNS TRUE IF THE POINTER BELONGS TO THE HEAP, OTHERWISE FALSE.      : *|
|* :         ^^^^                                               ^^^^^       : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| char *memory = (char *)ALLOC(64);                                   : *|
|* : 3|                                                                     : *|
|* : 4| if (IS_HEAP(memory))                                                : *|
|* : 5| {                                                                   : *|
|* : 6|     FREE(memory);                                                   : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ...............                               *|
|* .............................: IS_HEAP_FAR :.............................. *|
|* :                            '''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| BOOLEAN    IS_HEAP_FAR(FAR_PTR);                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : RETURNS WHETHER FAR_PTR POINTS TO A VALID HEAP ALLOCATION.             : *|
|* :                 ^^^^^^^                                                : *|
|* : THIS IS THE FAR-POINTER EQUIVALENT OF IS_HEAP().                       : *|
|* :                                       ^^^^^^^^^                        : *|
|* : RETURNS TRUE IF THE POINTER BELONGS TO THE HEAP, OTHERWISE FALSE.      : *|
|* :         ^^^^                                               ^^^^^       : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR memory = ...;                                               : *|
|* : 3|                                                                     : *|
|* : 4| if (IS_HEAP_FAR(memory))                                            : *|
|* : 5| {                                                                   : *|
|* : 6|     ...                                                             : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ...............                               *|
|* .............................: IS_HEAP_EXE :.............................. *|
|* :                            '''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| BOOLEAN    IS_HEAP_EXE(PTR);                                        : *|
|* : 3|                                                                     : *|
|* :                 ___                                                    : *|
|* : RETURNS WHETHER PTR POINTS TO HEAP MEMORY ALLOCATED BY THE CURRENTLY   : *|
|* : RUNNING EXECUTABLE.                                                    : *|
|* :        _________                                                       : *|
|* : UNLIKE IS_HEAP(), THIS FUNCTION REJECTS HEAP POINTERS ORIGINATING      : *|
|* : FROM OTHER LOADED EXECUTABLES OR MODULES.                              : *|
|* :         ____                                                           : *|
|* : RETURNS TRUE IF THE POINTER BELONGS TO THE CURRENT EXECUTABLE'S        : *|
|* : HEAP, OTHERWISE FALSE.                                                 : *|
|* :                 ^^^^^                                                  : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| char *memory = (char *)ALLOC(64);                                   : *|
|* : 3|                                                                     : *|
|* : 4| if (IS_HEAP_EXE(memory))                                            : *|
|* : 5| {                                                                   : *|
|* : 6|     FREE(memory);                                                   : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                            ...................                             *|
|* ...........................: IS_HEAP_FAR_EXE :............................ *|
|* :                          '''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| BOOLEAN    IS_HEAP_FAR_EXE(FAR_PTR);                                : *|
|* : 3|                                                                     : *|
|* :                 _______                                                : *|
|* : RETURNS WHETHER FAR_PTR POINTS TO HEAP MEMORY ALLOCATED BY THE         : *|
|* : CURRENTLY RUNNING EXECUTABLE.                                          : *|
|* :                                                                        : *|
|* : THIS IS THE FAR-POINTER EQUIVALENT OF IS_HEAP_EXE().                   : *|
|* :                                       ^^^^^^^^^^^^^                    : *|
|* : RETURNS <TRUE> IF THE POINTER BELONGS TO THE CURRENT EXECUTABLE'S      : *|
|* : HEAP, OTHERWISE FALSE.                                                 : *|
|* :                 ^^^^^                                                  : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FAR_PTR memory = ...;                                               : *|
|* : 3|                                                                     : *|
|* : 4| if (IS_HEAP_FAR_EXE(memory))                                        : *|
|* : 5| {                                                                   : *|
|* : 6|     ...                                                             : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef MEMORY_H
#define MEMORY_H 202608 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ENVIRONMENTS/PLATFORM.H"
/******* """"""""""""""""""""""""""""
 * #define __PLATFORM_AIX__
 * #define __PLATFORM_ANDROID__
 * #define __PLATFORM_BSD_ENVIRONMENT__
 * #define __PLATFORM_BSD_OS__
 * #define __PLATFORM_CYGWIN_ENVIRONMENT__
 * #define __PLATFORM_DRAGONFLY__
 * #define __PLATFORM_FREEBSD__
 * #define __PLATFORM_GNU_HURD__
 * #define __PLATFORM_GNU_KFREEBSD__
 * #define __PLATFORM_GNU_LINUX__
 * #define __PLATFORM_HP_UX__
 * #define __PLATFORM_INTERIX_ENVIRONMENT__
 * #define __PLATFORM_IRIX__
 * #define __PLATFORM_LINUX_KERNEL__
 * #define __PLATFORM_LYNXOS__
 * #define __PLATFORM_MACOS__
 * #define __PLATFORM_MINIX__
 * #define __PLATFORM_NETBSD__
 * #define __PLATFORM_OPENBSD__
 * #define __PLATFORM_QNX__
 * #define __PLATFORM_RELIANT_UNIX__
 * #define __PLATFORM_SCO_OPENSERVER__
 * #define __PLATFORM_SOLARIS__
 * #define __PLATFORM_SVR4_ENVIRONMENT__
 * #define __PLATFORM_SYLLABLE__
 * #define __PLATFORM_TRU64_OSF__
 * #define __PLATFORM_ULTRIX__
 * #define __PLATFORM_UNICOS__
 * #define __PLATFORM_UNICOS_MP__
 * #define __PLATFORM_UNIX_ENVIRONMENT__
 * #define __PLATFORM_UNIXWARE__
 * #define __PLATFORM_UWIN_ENVIRONMENT__
 * #define __PLATFORM_WINDOWS__
 * #define __PLATFORM_WINDOWS_CE__
 * #define __PLATFORM_MSDOS__
 */
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define KNR_STYLE
 */
#include "../ATTRIBUTES/EXTERN_C.H"
/******* """"""""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
#include "../ATTRIBUTES/ALIGN.H"
/******* """""""""""""""""""""""
 * #define ALIGN_UP(VALUE)
 */
#include "../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""
 * #define BOOLEAN
 * typedef	BIT32;
 * typedef	LET;
 * typedef	VAR;
 * typedef	PTR;
 * typedef	FAR_PTR;
 */
#include "CLEAR_INSTRUCTION_CACHE.H"
/******* """""""""""""""""""""""""""
 * #define CLEAR_INSTRUCTION_CACHE(BEGIN, END)
 */
#include "MUTEX.H"
/******* """""""""
 * #define MUTEX_LOCK(MUTEX)
 * #define MUTEX_UNLOCK(MUTEX)
 * int		MUTEX_CREATE(T_MUTEX *);
 * int		MUTEX_DESTROY(T_MUTEX *);
 * typedef	T_MUTEX;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ***************************** [v] STDLIB [v] ***************************** */
#ifdef __STDC_HOSTED__
#if (__STDC_HOSTED__ == 1)
#define LOCALMACRO__STDLIB
#endif /* __STDC_HOSTED__ == 1 */
#else /* !__STDC_HOSTED__ */
#ifdef __has_include
#if (__has_include(<stdlib.h>))
#define LOCALMACRO__STDLIB
#endif /* __has_include(<stdlib.h>) */
#endif /* __has_include */
#endif /* __STDC_HOSTED__ */
/* ***************************** [^] STDLIB [^] ***************************** */

/* ****************************** [v] UNIX [v] ****************************** */
#ifdef __PLATFORM_AIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_AIX__ */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_ANDROID__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_ANDROID__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_BSD_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_BSD_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_BSD_OS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_BSD_OS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_CYGWIN_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_CYGWIN_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_DRAGONFLY__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_DRAGONFLY__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_FREEBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_FREEBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_GNU_HURD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_GNU_HURD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_GNU_KFREEBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_GNU_KFREEBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_GNU_LINUX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_GNU_LINUX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_HP_UX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_HP_UX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_INTERIX_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_INTERIX_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_IRIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_IRIX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_LINUX_KERNEL__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_LINUX_KERNEL__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_LYNXOS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_LYNXOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_MACOS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#define LOCALMACRO__PLATFORM_MACOS
#endif /* __PLATFORM_MACOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_MINIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_MINIX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_NETBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_NETBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_OPENBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_OPENBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_QNX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_QNX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_RELIANT_UNIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_RELIANT_UNIX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_SCO_OPENSERVER__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_SCO_OPENSERVER__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_SOLARIS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_SOLARIS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_SVR4_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_SVR4_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_SYLLABLE__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_SYLLABLE__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_TRU64_OSF__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_TRU64_OSF__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_ULTRIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_ULTRIX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UNICOS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_UNICOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UNICOS_MP__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_UNICOS_MP__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UNIX_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_UNIX_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UNIXWARE__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_UNIXWARE__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UWIN_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_UNIX
#endif /* __PLATFORM_UWIN_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ****************************** [^] UNIX [^] ****************************** */

/* **************************** [v] WINDOWS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_WINDOWS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_WINDOWS
#endif /* __PLATFORM_WINDOWS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_WINDOWS_CE__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_WINDOWS
#endif /* __PLATFORM_WINDOWS_CE__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] WINDOWS [^] ***************************** */

/* ***************************** [v] MSDOS [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_MSDOS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__PLATFORM_MSDOS
#endif /* __PLATFORM_MSDOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] MSDOS [^] ****************************** */

/* **************************** [v] STRUCTS [v] ***************************** */
EXTERN_C_START
struct S_MEM_BLOCK
{
	LET					SIZE;
	int					FREED;
	struct S_MEM_BLOCK	*NEXT;
	struct S_MEM_BLOCK	*PREV;
	struct S_MEM_PAGE	*PAGE;
};

struct S_MEM_PAGE
{
	LET					SIZE;
	LET					USED;
	struct S_MEM_PAGE	*NEXT;
	struct S_MEM_PAGE	*PREV;
	struct S_MEM_BLOCK	*BLOCKS;
};

struct S_SEGMENT
{
	LET					SIZE;
	int					FREE;
	struct S_SEGMENT	*NEXT;
	struct S_SEGMENT	*PREV;
};

struct S_SLAB
{
	BYTE				*RW;
	BYTE				*RX;
	LET					SIZE;
	int					MODE;
	struct S_SEGMENT	*SEGMENTS;
	struct S_SLAB		*NEXT;
	struct S_SLAB		*PREV;
};
EXTERN_C_END
/* **************************** [^] STRUCTS [^] ***************************** */

/* v FOR NOW, WILL REMOVED IN THE FUTURE v */
EXTERN_C_START
#ifndef KNR_STYLE /* STANDARD C */
#ifndef LOCALMACRO__PLATFORM_UNIX
extern PTR	memset(PTR, int, LET);
extern PTR	memcpy(PTR, const void *, LET);
#endif /* !LOCALMACRO__PLATFORM_UNIX */
#else /* K&R */ /* TODO */
extern PTR	memset();
extern PTR	memcpy();
#endif /* !KNR_STYLE */
EXTERN_C_END
/* ^ FOR NOW, WILL REMOVED IN THE FUTURE ^ */

#ifndef LOCALMACRO__PLATFORM_FOUND
#warning "CMT - MEMORY.H: PLATFORM COULDN'T DETECTED. USING DEFAULT AS 'UNIX'"
#define LOCALMACRO__PLATFORM_UNIX
#else /* LOCALMACRO__PLATFORM_FOUND */
#undef LOCALMACRO__PLATFORM_FOUND
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifdef LOCALMACRO__STDLIB
#include "MEMORY/STDLIB.INL"
#endif /* LOCALMACRO__STDLIB */

#ifdef LOCALMACRO__PLATFORM_MACOS
#undef LOCALMACRO__PLATFORM_MACOS
#include "MEMORY/MACOS.INL"
#endif /* LOCALMACRO__PLATFORM_MACOS */

#ifdef LOCALMACRO__PLATFORM_UNIX
#undef LOCALMACRO__PLATFORM_UNIX
#include "MEMORY/UNIX.INL"
#endif /* LOCALMACRO__PLATFORM_UNIX */

#ifdef LOCALMACRO__PLATFORM_WINDOWS
#undef LOCALMACRO__PLATFORM_WINDOWS
#include "MEMORY/WINDOWS.INL"
#endif /* LOCALMACRO__PLATFORM_WINDOWS */

#ifdef LOCALMACRO__PLATFORM_MSDOS
#undef LOCALMACRO__PLATFORM_MSDOS
#error "CMT/MEMORY: MS-DOS / 16-bit backend not implemented yet (needs \
compiler-specific INT 21h AH=48h/49h allocation, deferred for now)"
#include "MEMORY/MSDOS.INL"
#endif /* LOCALMACRO__PLATFORM_MSDOS */

#undef LOCALMACRO__STDLIB

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define FAR_LENGTH CMTFLENG
#define FAR_ALLOC CMTFALLO
#define FAR_CALLOC CMTFCALO
#define FAR_REALLOC CMTFRALO
#define MEMORY_MODE CMTMEMMO
#define FAR_MEMORY_MODE CMTFMEMM
#define ALLOC_EXE CMTEXEAL
#define FAR_ALLOC_EXE CMTFEXEA
#define FAR_FREE_EXE CMTFEXEF
#define ALLOC_PAGE CMTALLOP
#define FREE_PAGE CMTFPAGE
#define GET_PAGE_SIZE CMTGPGSI
#define FAR_LENGTH_EXE CMTFLEXE
#define LENGTH_EXE CMTLEEXE
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
#ifndef KNR_STYLE /* STANDARD C */
extern PTR		ALLOC(LET);
extern PTR		ALLOC_EXE(const PTR, LET);
extern PTR		ALLOC_PAGE(LET, BIT32, BIT32);
extern PTR		CALLOC(LET);
extern FAR_PTR	FAR_ALLOC(LET);
extern FAR_PTR	FAR_ALLOC_EXE(const PTR, LET);
extern FAR_PTR	FAR_CALLOC(LET);
extern void		FAR_FREE(FAR_PTR);
extern void		FAR_FREE_EXE(FAR_PTR);
extern LET		FAR_LENGTH(FAR_PTR);
extern LET		FAR_LENGTH_EXE(FAR_PTR);
extern BOOLEAN	FAR_MEMORY_MODE(FAR_PTR, LET, BIT32);
extern FAR_PTR	FAR_REALLOC(FAR_PTR, LET);
extern void		FREE(PTR);
extern void		FREE_EXE(PTR);
extern void		FREE_PAGE(PTR);
extern LET		GET_PAGE_SIZE(void);
extern LET		LENGTH(PTR);
extern LET		LENGTH_EXE(PTR);
extern BOOLEAN	MEMORY_MODE(PTR, LET, BIT32);
extern PTR		REALLOC(PTR, LET);
extern BOOLEAN	IS_HEAP(PTR);
extern BOOLEAN	IS_HEAP_FAR(FAR_PTR);
extern BOOLEAN	IS_HEAP_FAR_EXE(FAR_PTR);
extern BOOLEAN	IS_HEAP_EXE(PTR);
#else /* K&R */
extern PTR		ALLOC();
extern PTR		ALLOC_EXE();
extern PTR		ALLOC_PAGE();
extern PTR		CALLOC();
extern FAR_PTR	FAR_ALLOC();
extern FAR_PTR	FAR_ALLOC_EXE();
extern FAR_PTR	FAR_CALLOC();
extern 			FAR_FREE();
extern 			FAR_FREE_EXE();
extern LET		FAR_LENGTH();
extern LET		FAR_LENGTH_EXE();
extern BOOLEAN	FAR_MEMORY_MODE();
extern FAR_PTR	FAR_REALLOC();
extern 			FREE();
extern 			FREE_EXE();
extern 			FREE_PAGE();
extern LET		GET_PAGE_SIZE();
extern LET		LENGTH();
extern LET		LENGTH_EXE();
extern BOOLEAN	MEMORY_MODE();
extern PTR		REALLOC();
extern BOOLEAN	IS_HEAP();
extern BOOLEAN	IS_HEAP_FAR();
extern BOOLEAN	IS_HEAP_FAR_EXE();
extern BOOLEAN	IS_HEAP_EXE();
#endif /* !KNR_STYLE */
EXTERN_C_END
/* **************************** [^] EXTERNS [^] ***************************** */

/**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**\
|**@                                                                        @**|
|**@            @@@@@@@@@   @@@@@  @@@@@ @@@@@@@@@@@    @@@@@@@             @**|
|**@           @@@:::::@@@ ::@@@  ::@@@ :@:::@@@:::@  @@@:::::@@@           @**|
|**@          :@@@    :@@@  :@@@   :@@@ :   :@@@  :  @@@     ::@@@          @**|
|**@          :@@@@@@@@@@@  :@@@   :@@@     :@@@    :@@@      :@@@          @**|
|**@          :@@@:::::@@@  :@@@   :@@@     :@@@    :@@@      :@@@          @**|
|**@          :@@@    :@@@  :@@@   :@@@     :@@@    ::@@@     @@@           @**|
|**@          @@@@@   @@@@@ ::@@@@@@@@      @@@@@    :::@@@@@@@:            @**|
|**@         :::::   :::::   ::::::::      :::::       :::::::              @**|
|**@                                                                        @**|
|**@ @@@@@       @@@@@ @@@@@@   @@@@@ @@@@@   @@@@ @@@@@@@@@@ @@@@@@@@@@@   @**|
|**@::@@@       ::@@@ ::@@@@@@ ::@@@ ::@@@   @@@: ::@@@:::::@::@@@:::::@@@  @**|
|**@ :@@@        :@@@  :@@@:@@@ :@@@  :@@@  @@@    :@@@  @ :  :@@@    :@@@  @**|
|**@ :@@@        :@@@  :@@@::@@@:@@@  :@@@@@@@     :@@@@@@    :@@@@@@@@@@   @**|
|**@ :@@@        :@@@  :@@@ ::@@@@@@  :@@@::@@@    :@@@::@    :@@@:::::@@@  @**|
|**@ :@@@      @ :@@@  :@@@  ::@@@@@  :@@@ ::@@@   :@@@ :   @ :@@@    :@@@  @**|
|**@ @@@@@@@@@@@ @@@@@ @@@@@  ::@@@@@ @@@@@ ::@@@@ @@@@@@@@@@ @@@@@   @@@@@ @**|
|**@::::::::::: ::::: :::::    ::::: :::::   :::: :::::::::: :::::   :::::  @**|
|**@                                                                        @**|
\**@@[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v][v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]@@**/

/* ******************* [v] LOCALMACRO__SETUP_LINKABLE [v] ******************* */
#ifdef CMT_SETUP
#define LOCALMACRO__SETUP_LINKABLE
#else /* !CMT_SETUP */
#ifndef CMT_EXTERN /* MEANS BOTH NOT DEFINED */
#define LOCALMACRO__SETUP_LINKABLE
#endif /* !CMT_EXTERN */
#endif /* !CMT_SETUP */
/* ******************* [^] LOCALMACRO__SETUP_LINKABLE [^] ******************* */

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                  SETUP MEMBER CREATION                   |  \\//  */
/*   \/   #==========================================================#   \/   */

#ifndef LOCALCONSTRUCTOR__MEMORY_ALLOC
#define LOCALCONSTRUCTOR__MEMORY_ALLOC
#endif /* !LOCALCONSTRUCTOR__MEMORY_ALLOC */

#ifndef LOCALCONSTRUCTOR__MEMORY_ALLOC_EXE
#define LOCALCONSTRUCTOR__MEMORY_ALLOC_EXE
#endif /* !LOCALCONSTRUCTOR__MEMORY_ALLOC_EXE */

#ifndef LOCALCONSTRUCTOR__ALLOC_PAGE
#define LOCALCONSTRUCTOR__ALLOC_PAGE
#endif /* !LOCALCONSTRUCTOR__ALLOC_PAGE */

#undef GLOBALCONSTRUCTOR__MEMORY
#define GLOBALCONSTRUCTOR__MEMORY \
	LOCALCONSTRUCTOR__MEMORY_ALLOC \
	LOCALCONSTRUCTOR__MEMORY_ALLOC_EXE \
	LOCALCONSTRUCTOR__ALLOC_PAGE

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#ifndef LOCALMACRO__MEMORY_ALLOC
#define LOCALMACRO__MEMORY_ALLOC
#endif /* !LOCALMACRO__MEMORY_ALLOC */

#ifndef LOCALMACRO__MEMORY_ALLOC_EXE
#define LOCALMACRO__MEMORY_ALLOC_EXE
#endif /* !LOCALMACRO__MEMORY_ALLOC_EXE */

#ifndef LOCALMACRO__MEMORY_ALLOC_PAGE
#define LOCALMACRO__MEMORY_ALLOC_PAGE
#endif /* !LOCALMACRO__MEMORY_ALLOC_PAGE */

#define LOCALLINKER__MEMORY \
	LOCALMACRO__MEMORY_ALLOC \
	LOCALMACRO__MEMORY_ALLOC_EXE \
	LOCALMACRO__MEMORY_ALLOC_PAGE \
	LOCALFUNCTION__ALLOC \
	LOCALFUNCTION__ALLOC_EXE \
	LOCALFUNCTION__ALLOC_PAGE \
	LOCALFUNCTION__CALLOC \
	LOCALFUNCTION__FAR_ALLOC \
	LOCALFUNCTION__FAR_ALLOC_EXE \
	LOCALFUNCTION__FAR_CALLOC \
	LOCALFUNCTION__FAR_FREE \
	LOCALFUNCTION__FAR_FREE_EXE \
	LOCALFUNCTION__FAR_LENGTH \
	LOCALFUNCTION__FAR_LENGTH_EXE \
	LOCALFUNCTION__FAR_MEMORY_MODE \
	LOCALFUNCTION__FAR_REALLOC \
	LOCALFUNCTION__FREE \
	LOCALFUNCTION__FREE_EXE \
	LOCALFUNCTION__FREE_PAGE \
	LOCALFUNCTION__GET_PAGE_SIZE \
	LOCALFUNCTION__LENGTH \
	LOCALFUNCTION__LENGTH_EXE \
	LOCALFUNCTION__MEMORY_MODE \
	LOCALFUNCTION__REALLOC \
	LOCALFUNCTION__IS_HEAP \
	LOCALFUNCTION__IS_HEAP_FAR \
	LOCALFUNCTION__IS_HEAP_FAR_EXE \
	LOCALFUNCTION__IS_HEAP_EXE

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
EXTERN_C_START
LOCALLINKER__MEMORY
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__MEMORY
#define GLOBALLINKER__MEMORY LOCALLINKER__MEMORY
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT_AUTO_LINKER.INL"
#endif /* CMT_SETUP */
#else /* !LOCALMACRO__SETUP_LINKABLE */
#include "../../../CMT_AUTO_CONSTRUCTOR.INL"
#endif /* LOCALMACRO__SETUP_LINKABLE */

/**@@[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^][^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]@@**\
|**@          _    _ _______ ____    _      _____ _   _ _  ________ _____   @**|
|**@     /\  | |  | |__   __/ __ \  | |    |_   _| \ | | |/ /  ____|  __ \  @**|
|**@    /  \ | |  | |  | | | |  | |_| |      | | |  \| | ' /| |__  | |__) | @**|
|**@   / /\ \| |  | |  | | | |  | |_| |      | | | . ` |  < |  __| |  _  /  @**|
|**@  / ____ \ |__| |  | | | |__| | | |____ _| |_| |\  | . \| |____| | \ \  @**|
|**@ /_/    \_\____/   |_|  \____/  |______|_____|_| \_|_|\_\______|_|  \_\ @**|
|**@                                                                        @**|
\**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**/

#endif /* !MEMORY_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
