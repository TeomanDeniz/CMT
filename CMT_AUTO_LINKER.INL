/**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**\
|**@                                                                        @**|
|**@                 db   `7MMF'   `7MF'MMP""MM""YMM   .g8""8q.             @**|
|**@                ;MM:    MM       M  P'   MM   `7 .dP'    `YM.           @**|
|**@               ,V^MM.   MM       M       MM      dM'      `MM           @**|
|**@              ,M  `MM   MM       M       MM      MM        MM           @**|
|**@              AbmmmqMA  MM       M       MM      MM.      ,MP           @**|
|**@             A'     VML YM.     ,M       MM      `Mb.    ,dP'           @**|
|**@           .AMA.   .AMMA.`bmmmmd"'     .JMML.      `"bmmd"'             @**|
|**@                                                                        @**|
|**@  `7MMF'      `7MMF'`7MN.   `7MF'`7MMF' `YMM' `7MM"""YMM  `7MM"""Mq.    @**|
|**@    MM          MM    MMN.    M    MM   .M'     MM    `7    MM   `MM.   @**|
|**@    MM          MM    M YMb   M    MM .d"       MM   d      MM   ,M9    @**|
|**@    MM          MM    M  `MN. M    MMMMM.       MMmmMM      MMmmdM9     @**|
|**@    MM      ,   MM    M   `MM.M    MM  VMA      MM   Y  ,   MM  YM.     @**|
|**@    MM     ,M   MM    M     YMM    MM   `MM.    MM     ,M   MM   `Mb.   @**|
|**@  .JMMmmmmMMM .JMML..JML.    YM  .JMML.   MMb..JMMmmmmMMM .JMML. .JMM.  @**|
|**@                                                                        @**|
|**@    HEADER-ONLY AUTO-INITIALIZER: NO MAKEFILES, NO .C FILES REQUIRED    @**|
|**@      INJECTS ALL NEEDED DEFINITIONS AND SETUP LOGIC AUTOMATICALLY      @**|
|**@                                                                        @**|
\**@@[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v][v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]@@**/

#ifndef CMT_EXTERN
/* ***************** [v] FILL UNDEFINED GLOBAL LINKERS [v] ****************** */
#ifndef GLOBALLINKER__RAX
#define GLOBALLINKER__RAX
#endif /* !GLOBALLINKER__RAX */

#ifndef GLOBALLINKER__X17
#define GLOBALLINKER__X17
#endif /* !GLOBALLINKER__X17 */

#ifndef GLOBALLINKER__MIDR
#define GLOBALLINKER__MIDR
#endif /* !GLOBALLINKER__MIDR */

#ifndef GLOBALLINKER__CPUID
#define GLOBALLINKER__CPUID
#endif /* !GLOBALLINKER__CPUID */

#ifndef GLOBALLINKER__MFSPR_287
#define GLOBALLINKER__MFSPR_287
#endif /* !GLOBALLINKER__MFSPR_287 */

#ifndef GLOBALLINKER__CPU
#define GLOBALLINKER__CPU
#endif /* !GLOBALLINKER__CPU */

#ifndef GLOBALLINKER__PEB_LOADER
#define GLOBALLINKER__PEB_LOADER
#endif /* !GLOBALLINKER__PEB_LOADER */

#ifndef GLOBALLINKER__KERNEL32
#define GLOBALLINKER__KERNEL32
#endif /* !GLOBALLINKER__KERNEL32 */

#ifndef GLOBALLINKER__MUTEX
#define GLOBALLINKER__MUTEX
#endif /* !GLOBALLINKER__MUTEX */

#ifndef GLOBALLINKER__THREAD
#define GLOBALLINKER__THREAD
#endif /* !GLOBALLINKER__THREAD */
/* ***************** [^] FILL UNDEFINED GLOBAL LINKERS [^] ****************** */

/* ************* [v] CONNECT GLOBAL LINKERS AND DEFINE MAIN [v] ************* */
#undef CMT_AUTO_LINKER
#define CMT_AUTO_LINKER \
	__CMT_JAILBREAK_VARIABLE__; \
	GLOBALLINKER__RAX \
	GLOBALLINKER__X17 \
	GLOBALLINKER__MIDR \
	GLOBALLINKER__CPUID \
	GLOBALLINKER__MFSPR_287 \
	GLOBALLINKER__CPU \
	GLOBALLINKER__PEB_LOADER \
	GLOBALLINKER__KERNEL32 \
	GLOBALLINKER__MUTEX \
	GLOBALLINKER__THREAD
/* ************* [^] CONNECT GLOBAL LINKERS AND DEFINE MAIN [^] ************* */
#endif /* !CMT_EXTERN */

#include "CMT_AUTO_CONSTRUCTOR.INL" /* OI! JOB DONE IN THERE MATE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
