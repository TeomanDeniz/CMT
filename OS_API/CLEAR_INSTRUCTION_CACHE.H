/******************************************************************************\
# H - CLEAR_INSTRUCTION_CACHE                    #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/12/24 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/11 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                         CLEAR_INSTRUCTION_CACHE                          |*|
|*|__________________________________________________________________________|*|
|*|                                   ____     ___________                   |*|
|*| MODERN CPUS COMMONLY USE SEPARATE DATA AND INSTRUCTION CACHES.           |*|
|*|                                                                          |*|
|*| WHEN YOU WRITE EXECUTABLE MEMORY (E.G., JIT, TRAMPOLINES, RUNTIME        |*|
|*| PATCHING), THE WRITE UPDATES THE DATA CACHE ONLY.                        |*|
|*|     _________________            ^^^^^^^^^^                              |*|
|*| THE INSTRUCTION CACHE MAY STILL HOLD STALE INSTRUCTIONS FOR THE SAME     |*|
|*| ADDRESS RANGE.                                                           |*|
|*|                                                                          |*|
|*| WITHOUT EXPLICIT SYNCHRONIZATION, THE CPU CAN EXECUTE OUTDATED OR        |*|
|*| INVALID INSTRUCTIONS.                                                    |*|
|*|                                                                          |*|
|*| O - AFTER INVOKING THE MACRO:                                            |*|
|*| :                              ____________                              |*|
|*| :.., DATA CACHE LINES COVERING [BEGIN, END) ARE WRITTEN BACK             |*|
|*| :  : (IF REQUIRED BY ARCHITECTURE)                                       |*|
|*| :                                     ____________                       |*|
|*| :.., INSTRUCTION CACHE LINES COVERING [BEGIN, END) ARE INVALIDATED       |*|
|*| :                                                                        |*|
|*| :.., SUBSEQUENT EXECUTION FETCHES UPDATED INSTRUCTIONS FROM MEMORY       |*|
|*|                                                                          |*|
|*| O - ARCHITECTURE NOTES:                                                  |*|
|*| :    ____________                                                        |*|
|*| :.., X86 / X86_64: TYPICALLY COHERENT; OFTEN NO VISIBLE EFFECT           |*|
|*| :    _____________________________                                       |*|
|*| :.., ARM / RISC-V / MIPS / POWERPC: EXPLICIT CACHE MAINTENANCE REQUIRED  |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define CLEAR_INSTRUCTION_CACHE(BEGIN, END)                   | 60       |*|
|*| #define clear_instruction_cache(begin, end)                   |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                        ...........................                         *|
|* .......................: CLEAR_INSTRUCTION_CACHE :........................ *|
|* :                      '''''''''''''''''''''''''''                       : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define CLEAR_INSTRUCTION_CACHE(BEGIN, END)                         : *|
|* : 3| #define clear_instruction_cache(begin, end)                         : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : FORCES INSTRUCTION CACHE SYNCHRONIZATION FOR THE ADDRESS RANGE         : *|
|* : [BEGIN, END).                                                          : *|
|* : ^^^^^^^^^^^^                                                           : *|
|* : BOTH MACRO VARIANTS ARE PROVIDED FOR STYLISTIC PREFERENCE.             : *|
|* : THEY PERFORM IDENTICAL OPERATIONS.                                     : *|
|* :   _____                                                                : *|
|* : * BEGIN - START ADDRESS (INCLUSIVE)                                    : *|
|* : * END - END ADDRESS (EXCLUSIVE)                                        : *|
|* :   ^^^                                                                  : *|
|* : O - INTENDED FOR:                                                      : *|
|* : :                                                                      : *|
|* : :.., JIT COMPILERS                                                     : *|
|* : :                                                                      : *|
|* : :.., RUNTIME CODE GENERATION                                           : *|
|* : :                                                                      : *|
|* : :.., HOT PATCHING                                                      : *|
|* : :                                                                      : *|
|* : :.., TRAMPOLINE INJECTION                                              : *|
|* : :                                                                      : *|
|* : :.., SELF-MODIFYING CODE                                               : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| memcpy(code_ptr, bytes, size);                                      : *|
|* : 3| CLEAR_INSTRUCTION_CACHE(code_ptr, code_ptr + size);                 : *|
|* : 4| mprotect(page, RX);                                                 : *|
|* : 5|                                                                     : *|
|* :         ______________________________     ________________            : *|
|* : CALL IT AFTER WRITING EXECUTABLE BYTES AND BEFORE EXECUTION.           : *|
|* :                                                                        : *|
|* : FAILURE TO DO SO ON NON-COHERENT ARCHITECTURES RESULTS IN UNDEFINED    : *|
|* : BEHAVIOR.                                                              : *|
|* :                                                                        : *|
|* : ANOTHER EXAMPLE:                                                       : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| #include <stdio.h>                                                 : *|
|* :  3| #include <CMT/OS_API/CLEAR_INSTRUCTION_CACHE.H>                    : *|
|* :  4|                                                                    : *|
|* :  5| void foo(void)                                                     : *|
|* :  6| {                                                                  : *|
|* :  7|     printf("Hello before cache flush\n");                          : *|
|* :  8| }                                                                  : *|
|* :  9|                                                                    : *|
|* : 10| int main(void) {                                                   : *|
|* : 11|     void *begin = (void *)&foo;                                    : *|
|* : 12|     void *end = (void *)((char *)&foo + 64); // fake range         : *|
|* : 13|                                                                    : *|
|* : 14|     CLEAR_INSTRUCTION_CACHE(begin, end);                           : *|
|* : 15|                                                                    : *|
|* : 16|     foo();                                                         : *|
|* : 17|                                                                    : *|
|* : 18|     return (0);                                                    : *|
|* : 19| }                                                                  : *|
|* : 20|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef CLEAR_INSTRUCTION_CACHE_H
#define CLEAR_INSTRUCTION_CACHE_H 202606 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ENVIRONMENTS/PLATFORM.H"
/******* """"""""""""""""""""""""""""
 * #define __PLATFORM_WINDOWS__
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __PLATFORM_WINDOWS__
/* **************************** [v] INCLUDES [v] **************************** */
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define KNR_STYLE
 */
#include "../ATTRIBUTES/STDCALL.H"
/******* """""""""""""""""""""""""
 * #define STDCALL
 */
#include "../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""
 * typedef	VAR;
 * typedef	PTR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef KNR_STYLE /* STANDARD C */
extern PTR	STDCALL *GetCurrentProcess(void);
extern int	STDCALL *FlushInstructionCache(PTR, const PTR, VAR);
#else /* K&R */
extern PTR	STDCALL *GetCurrentProcess();
extern int	STDCALL *FlushInstructionCache();
#endif /* !KNR_STYLE */

#define CLEAR_INSTRUCTION_CACHE(BEGIN, END) \
	FlushInstructionCache(\
		GetCurrentProcess(),\
		(PTR)(BEGIN),\
		(VAR)((char *)(END) - (char *)(BEGIN))\
	)
#else /* !__PLATFORM_WINDOWS__ */
#ifdef __GNUC__
#define CLEAR_INSTRUCTION_CACHE(BEGIN, END) \
	__builtin___clear_cache((char *)(BEGIN), (char *)(END))
#else /* !__GNUC__ */
#ifdef __clang__
#define CLEAR_INSTRUCTION_CACHE(BEGIN, END) \
	__builtin___clear_cache((char *)(BEGIN), (char *)(END))
#endif /* __clang__ */
#endif /* __GNUC__ */
#endif /* __PLATFORM_WINDOWS__ */

#ifndef CLEAR_INSTRUCTION_CACHE
#define CLEAR_INSTRUCTION_CACHE(BEGIN, END) /* NOTHING */
#endif /* !CLEAR_INSTRUCTION_CACHE */

#define clear_instruction_cache CLEAR_INSTRUCTION_CACHE
#endif /* !CLEAR_INSTRUCTION_CACHE_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
