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
# : License - GPL-3.0   :: Update - 2026/07/20 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

#ifndef MEMORY_H
#define MEMORY_H 202607 /* VERSION */

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
#include "../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""
 * #define BOOLEAN
 * typedef	BIT32;
 * typedef	PTR;
 * typedef	FAR_PTR;
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

#ifndef LOCALMACRO__PLATFORM_FOUND
#warning "CMT - MEMORY.H: PLATFORM COULDN'T DETECTED. USING DEFAULT AS 'UNIX'"
#define LOCALMACRO__PLATFORM_UNIX
#else /* LOCALMACRO__PLATFORM_FOUND */
#undef LOCALMACRO__PLATFORM_FOUND
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifdef LOCALMACRO__STDLIB
#undef LOCALMACRO__STDLIB
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
#include "MEMORY/MSDOS.INL"
#endif /* LOCALMACRO__PLATFORM_MSDOS */

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
#define PAGE_SIZE CMTPGSIZ
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
#endif /* !KNR_STYLE */

extern LET		PAGE_SIZE;

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



#endif /* !MEMORY_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
