/**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**\
|**@                                                                        @**|
|**@                         ##    #    # ##### .####.                      @**|
|**@                        #''#   #    #   #   ##  ##                      @**|
|**@                       ######  #.  .#   #   ##  ##                      @**|
|**@                      ##    ## '####'   #   '####'                      @**|
|**@                                                                        @**|
|**@  .###. .####. ##  # .####. ##### ####. #    # .###. ##### .####. ####. @**|
|**@  ##    ##  ## #'# # #....    #   #  .# #    # ##      #   ##  ## #  .# @**|
|**@  ##    ##  ## # '##  ''''#   #   ####' #.  .# ##      #   ##  ## ####' @**|
|**@  '###' '####' #  '# '####'   #   #  '# '####' '###'   #   '####' #  '# @**|
|**@                                                                        @**|
|**@ AUTO-CONSTRUCTOR: RUNS REGISTERED INITIALIZATION FUNCTIONS BEFORE MAIN @**|
|**@       ENSURING REQUIRED SETUP IS READY BEFORE USER CODE EXECUTES       @**|
|**@                                                                        @**|
\**@@[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v][v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]@@**/

/* *************** [v] FILL UNDEFINED GLOBAL CONSTRUCTORS [v] *************** */
#ifndef GLOBALCONSTRUCTOR__MIDR
#define GLOBALCONSTRUCTOR__MIDR
#endif /* !GLOBALCONSTRUCTOR__MIDR */

#ifndef GLOBALCONSTRUCTOR__X17
#define GLOBALCONSTRUCTOR__X17
#endif /* !GLOBALCONSTRUCTOR__X17 */

#ifndef GLOBALCONSTRUCTOR__CPUID
#define GLOBALCONSTRUCTOR__CPUID
#endif /* !GLOBALCONSTRUCTOR__CPUID */

#ifndef GLOBALCONSTRUCTOR__RAX
#define GLOBALCONSTRUCTOR__RAX
#endif /* !GLOBALCONSTRUCTOR__RAX */

#ifndef GLOBALCONSTRUCTOR__MFSPR_287
#define GLOBALCONSTRUCTOR__MFSPR_287
#endif /* !GLOBALCONSTRUCTOR__MFSPR_287 */

#ifndef GLOBALCONSTRUCTOR__CPU
#define GLOBALCONSTRUCTOR__CPU
#endif /* !GLOBALCONSTRUCTOR__CPU */

#ifndef GLOBALCONSTRUCTOR__PEB_LOADER
#define GLOBALCONSTRUCTOR__PEB_LOADER
#endif /* !GLOBALCONSTRUCTOR__PEB_LOADER */

#ifndef GLOBALCONSTRUCTOR__KERNEL32
#define GLOBALCONSTRUCTOR__KERNEL32
#endif /* !GLOBALCONSTRUCTOR__KERNEL32 */

#ifndef GLOBALCONSTRUCTOR__USER32
#define GLOBALCONSTRUCTOR__USER32
#endif /* !GLOBALCONSTRUCTOR__USER32 */

#ifndef GLOBALCONSTRUCTOR__THREAD
#define GLOBALCONSTRUCTOR__THREAD
#endif /* !GLOBALCONSTRUCTOR__THREAD */

#ifndef GLOBALCONSTRUCTOR__MEMORY
#define GLOBALCONSTRUCTOR__MEMORY
#endif /* !GLOBALCONSTRUCTOR__MEMORY */

#ifndef GLOBALCONSTRUCTOR__TRY_CATCH
#define GLOBALCONSTRUCTOR__TRY_CATCH
#endif /* !GLOBALCONSTRUCTOR__TRY_CATCH */
/* *************** [^] FILL UNDEFINED GLOBAL CONSTRUCTORS [^] *************** */

/* ****************** [v] CONNECT CONSTRUCTORS EVENTS [v] ******************* */
#undef CMT_AUTO_CONSTRUCTOR
#define CMT_AUTO_CONSTRUCTOR \
	GLOBALCONSTRUCTOR__PEB_LOADER \
	GLOBALCONSTRUCTOR__KERNEL32 \
	GLOBALCONSTRUCTOR__USER32 \
	GLOBALCONSTRUCTOR__MIDR \
	GLOBALCONSTRUCTOR__X17 \
	GLOBALCONSTRUCTOR__CPUID \
	GLOBALCONSTRUCTOR__RAX \
	GLOBALCONSTRUCTOR__MFSPR_287 \
	GLOBALCONSTRUCTOR__CPU \
	GLOBALCONSTRUCTOR__THREAD \
	GLOBALCONSTRUCTOR__MEMORY \
	GLOBALCONSTRUCTOR__TRY_CATCH
/* ****************** [^] CONNECT CONSTRUCTORS EVENTS [^] ******************* */

/* THANK YOU MARIO! */

#include "DESTRUCTOR.INL" /* BUT OUR PRINCESS IS IN ANOTHER CASTLE! */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
