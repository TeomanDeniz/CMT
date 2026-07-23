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
# : License - GPL-3.0   :: Update - 2026/07/23 : #    ::::!!!1!!1!!!1!!!::     #
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

/* v FOR NOW, WILL REMOVED IN THE FUTURE v */
EXTERN_C_START
#ifndef KNR_STYLE /* STANDARD C */
extern PTR	memset(PTR, int, LET);
extern PTR	memcpy(PTR, const void *, LET);
#else /* K&R */ /* TODO */
extern PTR	memset();
extern PTR	memcpy();
#endif /* !KNR_STYLE */
EXTERN_C_END
/* ^ FOR NOW, WILL REMOVED IN THE FUTURE ^ */

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
	LOCALFUNCTION__REALLOC

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
