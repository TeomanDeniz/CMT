/******************************************************************************\
# H - PLATFORM                                   #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/03/05 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/07/07 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  ALIGN                                   |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| PROVIDES A UNIFIED COMPILE-TIME PLATFORM DETECTION LAYER.                |*|
|*|                                                                          |*|
|*| THE HEADER EXPOSES MACROS IDENTIFYING THE TARGET OPERATING SYSTEM OR     |*|
|*| EXECUTION ENVIRONMENT, ALLOWING PORTABLE PLATFORM-SPECIFIC CODE PATHS    |*|
|*| THROUGH CONDITIONAL COMPILATION.                                         |*|
|*|                                                                          |*|
|*| ALL PLATFORM IDENTIFICATION IS CENTRALIZED HERE SO THE REST OF THE       |*|
|*| CODEBASE AVOIDS COMPILER-SPECIFIC PREDEFINED MACROS.                     |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                  | PLATFORM NAME                 |*|
|*|==========================================|===============================|*|
|*| #define __PLATFORM_AIX__                 | IBM AIX                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_ANDROID__             | ANDROID                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_AMDAHL_UTS__          | AMDAHL UTS                    |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_AMIGAOS__             | AMIGAOS                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_APOLLO_AEGIS__        | APOLLO - AEGIS                |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_APOLLO_DOMAIN_OS__    | APOLLO - DOMAIN/OS            |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_BEOS__                | BEOS                          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_BLUE_GENE__           | IBM BLUE GENE                 |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_BSD_ENVIRONMENT__     | BSD                           |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_BSD_OS__              | BSD/OS                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_CONVEXOS__            | CONVEX COMPUTER               |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_CYGWIN_ENVIRONMENT__  | CYGWIN                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_DG_UX__               | DG/UX                         |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_DRAGONFLY__           | DRAGONFLY BSD                 |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_DYNIX_PTX__           | DYNIX                         |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_ECOS__                | ECOS                          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_EMX_ENVIRONMENT__     | EMX (PROGRAMMING ENVIRONMENT) |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_FREEBSD__             | FREEBSD                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_GNU_HURD__            | GNU HURD                      |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_GNU_KFREEBSD__        | DEBIAN GNU/KFREEBSD           |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_GNU_LINUX__           | LINUX                         |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_HI_UX_MPP__           | OSF/1                         |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_HP_UX__               | HP-UX                         |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_IBM_OS_400__          | IBM ISERIES OS/400            |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_INTEGRITY__           | INTEGRITY (OPERATING SYSTEM)  |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_INTERIX_ENVIRONMENT__ | INTERIX                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_IRIX__                | IRIX                          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_LINUX_KERNEL__        | LINUX KERNEL                  |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_LYNXOS__              | LYNXOS                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_MACOS__               | MACOS                         |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_MICROWARE_OS_9__      | OS-9                          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_MINIX__               | MINIX                         |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_MORPHOS__             | MORPHOS                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_MPE_IX__              | MPE/IX                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_MSDOS__               | MS-DOS                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_NETBSD__              | NETBSD                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_NONSTOP__             | NONSTOP (SERVER COMPUTERS)    |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_NUCLEUS_RTOS__        | NUCLEUS RTOS                  |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_OPENBSD__             | OPENBSD                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_OS2__                 | OS/2                          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_PALM_OS__             | PALM OS                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_PLAN9__               | PLAN 9 FROM BELL LABS         |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_PYRAMID_DC_OSX__      | DC/OSX                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_QNX__                 | QNX                           |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_RELIANT_UNIX__        | RELIANT UNIX (SINIX)          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_SCO_OPENSERVER__      | OPENSERVER                    |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_SOLARIS__             | ORACLE SOLARIS                |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_STRATUS_VOS__         | STRATUS VOS                   |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_SVR4_ENVIRONMENT__    | SVR4 (UNIX SYSTEM V)          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_SYLLABLE__            | SYLLABLE DESKTOP              |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_SYMBIAN_OS__          | SYMBIAN                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_TRU64_OSF__           | TRU64 UNIX                    |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_ULTRIX__              | ULTRIX                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_UNICOS__              | UNICOS                        |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_UNICOS_MP__           | UNICOS/MP                     |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_UNIX_ENVIRONMENT__    | UNIX                          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_UNIXWARE__            | UNIXWARE                      |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_UWIN_ENVIRONMENT__    | UWIN                          |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_VMS__                 | VMS                           |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_VXWORKS__             | VXWORKS                       |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_WINDOWS__             | MICROSOFT WINDOWS             |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_WINDOWS_CE__          | WINDOWS CE                    |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_WINDU_ENVIRONMENT__   | WIND/U (BRISTOL TECHNOLOGY)   |*|
|*|------------------------------------------|-------------------------------|*|
|*| #define __PLATFORM_ZOS__                 | IBM Z/OS                      |*|
|*|__________________________________________|_______________________________|*|
|*                                                                            *|
\******************************************************************************/

#ifndef PLATFORM_H
#define PLATFORM_H 202607 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

/* ****************************** [v] AIX [v] ******************************* */
#ifdef _AIX
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_AIX__
#else /* !_AIX */
#ifdef __TOS_AIX__ /* XLC */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_AIX__
#endif /* __TOS_AIX__ */
#endif /* _AIX */
/* ****************************** [^] AIX [^] ******************************* */

/* **************************** [v] ANDROID [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __ANDROID__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ANDROID__
#endif /* __ANDROID__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] ANDROID [^] ***************************** */

/* *************************** [v] AMDAHL UTS [v] *************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef UTS
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_AMDAHL_UTS__
#endif /* UTS */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************  [^] AMDAHL UTS [^] *************************** */

/* **************************** [v] AMIGAOS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef AMIGA
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_AMIGAOS__
#else /* AMIGA */
#ifdef __amigaos__ /* GNU C */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_AMIGAOS__
#endif /* __amigaos__ */
#endif /* AMIGA */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] AMIGAOS [^] ***************************** */

/* ************************* [v] APOLLO AEGIS [v] *************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef aegis
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_APOLLO_AEGIS__
#endif /* aegis */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************* [^] APOLLO AEGIS [^] *************************** */

/* ************************ [v] APOLLO DOMAIN/OS [v] ************************ */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef apollo
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_APOLLO_DOMAIN_OS__
#endif /* apollo */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************ [^] APOLLO DOMAIN/OS [^] ************************ */

/* ***************************** [v] BEOS [v] ******************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __BEOS__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BEOS__
#endif /* __BEOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] BEOS [^] ******************************* */

/* *************************** [v] BLUE GENE [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __bg__ /* XL C/C++, GNU C */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BLUE_GENE__
#else /* !__bg__ */
#ifdef __THW_BLUEGENE__ /* XL C/C++ */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BLUE_GENE__
#endif /* __THW_BLUEGENE__ */
#endif /* __bg__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] BLUE GENE [^] **************************** */

/* ************************ [v] BSD ENVIRONMENT [v] ************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __FreeBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BSD_ENVIRONMENT__
#else /* !__FreeBSD__ */
#ifdef __NetBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BSD_ENVIRONMENT__
#else /* !__NetBSD__ */
#ifdef __OpenBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BSD_ENVIRONMENT__
#else /* !__OpenBSD__ */
#ifdef __bsdi__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BSD_ENVIRONMENT__
#else /* !__bsdi__ */
#ifdef __DragonFly__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BSD_ENVIRONMENT__
#else /* !__DragonFly__ */
#ifdef _SYSTYPE_BSD /* DEC C */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BSD_ENVIRONMENT__
#endif /* _SYSTYPE_BSD */
#endif /* __DragonFly__ */
#endif /* __bsdi__ */
#endif /* __OpenBSD__ */
#endif /* __NetBSD__ */
#endif /* __FreeBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************ [^] BSD ENVIRONMENT [^] ************************* */

/* **************************** [v] BSD/OS [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __bsdi__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_BSD_OS__
#endif /* __bsdi__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] BSD/OS [^] ****************************** */

/* *************************** [v] CONVEXOS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __convex__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_CONVEXOS__
#endif /* __convex__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] CONVEXOS [^] ***************************** */

/* ********************** [v] CYGWIN ENVIRONMENT [v] ************************ */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __CYGWIN__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_CYGWIN_ENVIRONMENT__
#endif /* __CYGWIN__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ********************** [^] CYGWIN ENVIRONMENT [^] ************************ */

/* ***************************** [v] DG/UX [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef DGUX
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_DG_UX__
#else /* !DGUX */
#ifdef __DGUX__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_DG_UX__
#else /* !__DGUX__ */
#ifdef __dgux__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_DG_UX__
#endif /* __dgux__ */
#endif /* __DGUX__ */
#endif /* DGUX */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] DG/UX [^] ****************************** */

/* *************************** [v] DRAGONFLY [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __DragonFly__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_DRAGONFLY__
#endif /* __DragonFly__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] DRAGONFLY [^] **************************** */

/* *************************** [v] DYNIX/PTX [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef _SEQUENT_
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_DYNIX_PTX__
#else /* !_SEQUENT_ */
#ifdef sequent
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_DYNIX_PTX__
#endif /* sequent */
#endif /* _SEQUENT_ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] DYNIX/PTX [^] **************************** */

/* ***************************** [v] ECOS [v] ******************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __ECOS
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ECOS__
#endif /* __ECOS */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] ECOS [^] ******************************* */

/* ************************ [v] EMX ENVIRONMENT [v] ************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __EMX__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_EMX_ENVIRONMENT__
#endif /* __EMX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************ [^] EMX ENVIRONMENT [^] ************************* */

/* **************************** [v] FREEBSD [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __FreeBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_FREEBSD__
#else /* !__FreeBSD__ */
#ifdef __FreeBSD_kernel__ /* FREEBSD 8.3, 9.1, AND 10.0.1 */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_FREEBSD__
#endif /* __FreeBSD_kernel__ */
#endif /* __FreeBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] FREEBSD [^] ***************************** */

/* *************************** [v] GNU/HURD [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __gnu_hurd__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_GNU_HURD__
#endif /* __gnu_hurd__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] GNU/HURD [^] ***************************** */

/* ************************* [v] GNU/KFREEBSD [v] *************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __FreeBSD_kernel__ 
#ifdef __GLIBC__ 
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_GNU_KFREEBSD__
#endif /* __GLIBC__  */
#endif /* __FreeBSD_kernel__  */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************* [^] GNU/KFREEBSD [^] *************************** */

/* *************************** [v] GNU/LINUX [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __gnu_linux__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_GNU_LINUX__
#endif /* __gnu_linux__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] GNU/LINUX [^] **************************** */

/* *************************** [v] HI-UX MPP [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __hiuxmpp
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_HI_UX_MPP__
#endif /* __hiuxmpp */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] HI-UX MPP [^] **************************** */

/* ***************************** [v] HP-UX [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef _hpux /* HP UPC */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_HP_UX__
#else /* !_hpux */
#ifdef hpux
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_HP_UX__
#else /* !hpux */
#ifdef __hpux
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_HP_UX__
#endif /* __hpux */
#endif /* hpux */
#endif /* _hpux */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] HP-UX [^] ****************************** */

/* ************************** [v] IBM OS/400 [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __OS400__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_IBM_OS_400__
#endif /* __OS400__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************** [^] IBM OS/400 [^] **************************** */

/* *************************** [v] INTEGRITY [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __INTEGRITY
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_INTEGRITY__
#endif /* __INTEGRITY */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] INTEGRITY [^] **************************** */

/* ********************** [v] INTERIX ENVIRONMENT [v] *********************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __INTERIX /* GNU C, VISUAL STUDIO */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_INTERIX_ENVIRONMENT__
#endif /* __INTERIX */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ********************** [^] INTERIX ENVIRONMENT [^] *********************** */

/* ***************************** [v] IRIX [v] ******************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef sgi
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_IRIX__
#else /* !sgi */
#ifdef __sgi
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_IRIX__
#endif /* __sgi */
#endif /* sgi */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] IRIX [^] ******************************* */

/* ************************* [v] LINUX KERNEL [v] *************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __linux__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_LINUX_KERNEL__
#else /* !__linux__ */
#ifdef linux
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_LINUX_KERNEL__
#else /* !linux */
#ifdef __linux
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_LINUX_KERNEL__
#endif /* __linux */
#endif /* linux */
#endif /* __linux__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************* [^] LINUX KERNEL [^] *************************** */

/* **************************** [v] LYNXOS [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __Lynx__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_LYNXOS__
#endif /* __Lynx__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] LYNXOS [^] ****************************** */

/* ***************************** [v] MACOS [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef macintosh /* MAC OS 9 */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MACOS__
#else /* !macintosh */
#ifdef Macintosh /* MAC OS 9 */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MACOS__
#else /* !Macintosh */
#ifdef __MACH__ /* MAC OS X: GNU C, INTEL C++ */
#ifdef __APPLE__  /* GNU C, INTEL C++ */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MACOS__
#endif /* __APPLE__  */
#endif /* __MACH__ */
#endif /* Macintosh */
#endif /* macintosh */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] MACOS [^] ****************************** */

/* ************************ [v] MICROWARE OS-9 [v] ************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __OS9000 /* ULTIMATE C/C++ */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MICROWARE_OS_9__
#else /* !__OS9000 */
#ifdef _OSK /* ULTIMATE C/C++ */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MICROWARE_OS_9__
#endif /* _OSK */
#endif /* __OS9000 */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************ [^] MICROWARE OS-9 [^] ************************** */

/* ***************************** [v] MINIX [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __minix
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MINIX__
#endif /* __minix */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] MINIX [^] ****************************** */

/* **************************** [v] MORPHOS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __MORPHOS__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MORPHOS__
#endif /* __MORPHOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] MORPHOS [^] ***************************** */

/* **************************** [v] MPE/IX [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef mpeix
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MPE_IX__
#else /* !mpeix */
#ifdef __mpexl
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MPE_IX__
#endif /* __mpexl */
#endif /* mpeix */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] MPE/IX [^] ****************************** */

/* ***************************** [v] MSDOS [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef MSDOS
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MSDOS__
#else /* !MSDOS */
#ifdef __MSDOS__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MSDOS__
#else /* !__MSDOS__ */
#ifdef _MSDOS
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MSDOS__
#else /* !_MSDOS */
#ifdef __DOS__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_MSDOS__
#endif /* __DOS__ */
#endif /* _MSDOS */
#endif /* __MSDOS__ */
#endif /* MSDOS */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] MSDOS [^] ****************************** */

/* **************************** [v] NETBSD [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __NetBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_NETBSD__
#endif /* __NetBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] NETBSD [^] ****************************** */

/* **************************** [v] NONSTOP [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __TANDEM
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_NONSTOP__
#endif /* __TANDEM */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] NONSTOP [^] ***************************** */

/* ************************* [v] NUCLEUS RTOS [v] *************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __nucleus__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_NUCLEUS_RTOS__
#endif /* __nucleus__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************* [^] NUCLEUS RTOS [^] *************************** */

/* **************************** [v] OPENBSD [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __OpenBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_OPENBSD__
#endif /* __OpenBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] OPENBSD [^] ***************************** */

/* ***************************** [v] OS/2 [v] ******************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef OS2
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_OS2__
#else /* !OS2 */
#ifdef _OS2
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_OS2__
#else /* !_OS2 */
#ifdef __OS2__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_OS2__
#else /* !__OS2__ */
#ifdef __TOS_OS2__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_OS2__
#endif /* __TOS_OS2__ */
#endif /* __OS2__ */
#endif /* _OS2 */
#endif /* OS2 */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] OS/2 [^] ******************************* */

/* **************************** [v] PALM OS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __palmos__ /* GNU C IN PRC-TOOLS */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_PALM_OS__
#endif /* __palmos__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] PALM OS [^] ***************************** */

/* ***************************** [v] PLAN 9 [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef EPLAN9
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_PLAN9__
#endif /* EPLAN9 */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] PLAN 9 [^] ***************************** */

/* ************************ [v] PYRAMID DC/OSX [v] ************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef pyr
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_PYRAMID_DC_OSX__
#endif /* pyr */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************ [^] PYRAMID DC/OSX [^] ************************** */

/* ****************************** [v] QNX [v] ******************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __QNX__ /* QNX 4.X */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_QNX__
#else /* !__QNX__ */
#ifdef __QNXNTO__ /* QNX 6.X */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_QNX__
#endif /* __QNXNTO__ */
#endif /* __QNX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ****************************** [^] QNX [^] ******************************* */

/* ************************* [v] RELIANT UNIX [v] *************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef sinux
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_RELIANT_UNIX__
#endif /* sinux */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************* [^] RELIANT UNIX [^] *************************** */

/* ************************ [v] SCO OPENSERVER [v] ************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef M_I386 /* GNU C */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SCO_OPENSERVER__
#else /* !M_I386 */
#ifdef M_XENIX /* GNU C */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SCO_OPENSERVER__
#else /* !M_XENIX */
#ifdef _SCO_DS
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SCO_OPENSERVER__
#endif /* _SCO_DS */
#endif /* M_XENIX */
#endif /* M_I386 */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************ [^] SCO OPENSERVER [^] ************************** */

/* **************************** [v] SOLARIS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef sun
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SOLARIS__
#else /* !sun */
#ifdef __sun
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SOLARIS__
#endif /* __sun */
#endif /* sun */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] SOLARIS [^] ***************************** */

/* ************************** [v] STRATUS VOS [v] *************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __VOS__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_STRATUS_VOS__
#endif /* __VOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************** [^] STRATUS VOS [^] *************************** */

/* *********************** [v] SVR4 ENVIRONMENT [v] ************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __sysv__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SVR4_ENVIRONMENT__
#else /* !__sysv__ */
#ifdef __SVR4
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SVR4_ENVIRONMENT__
#else /* !__SVR4 */
#ifdef __svr4__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SVR4_ENVIRONMENT__
#else /* !__svr4__ */
#ifdef _SYSTYPE_SVR4 /* IRIX */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SVR4_ENVIRONMENT__
#endif /* _SYSTYPE_SVR4 */
#endif /* __svr4__ */
#endif /* __SVR4 */
#endif /* __sysv__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *********************** [^] SVR4 ENVIRONMENT [^] ************************* */

/* *************************** [v] SYLLABLE [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __SYLLABLE__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SYLLABLE__
#endif /* __SYLLABLE__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] SYLLABLE [^] ***************************** */

/* ************************** [v] SYMBIAN OS [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __SYMBIAN32__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_SYMBIAN_OS__
#endif /* __SYMBIAN32__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************** [^] SYMBIAN OS [^] **************************** */

/* ************************* [v] TRU64 (OSF/1) [v] ************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __osf__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_TRU64_OSF__
#else /* !__osf__ */
#ifdef __osf
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_TRU64_OSF__
#endif /* __osf */
#endif /* __osf__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************* [^] TRU64 (OSF/1) [^] ************************** */

/* **************************** [v] ULTRIX[v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef ultrix
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ULTRIX__
#else /* !ultrix */
#ifdef __ultrix
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ULTRIX__
#else /* !__ultrix */
#ifdef __ultrix__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ULTRIX__
#else /* !__ultrix__ */
#ifdef unix
#ifdef vax
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ULTRIX__
#endif /* vax */
#endif /* unix */
#endif /* __ultrix__ */
#endif /* __ultrix */
#endif /* ultrix */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] ULTRIX [^] ****************************** */

/* **************************** [v] UNICOS [v] ****************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef _UNICOS
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_UNICOS__
#endif /* _UNICOS */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] UNICOS [^] ****************************** */

/* *************************** [v] UNICOS/MP [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef _CRAY
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_UNICOS_MP__
#else /* !_CRAY */
#ifdef __crayx1
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_UNICOS_MP__
#endif /* __crayx1 */
#endif /* _CRAY */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] UNICOS/MP [^] **************************** */

/* *********************** [v] UNIX ENVIRONMENT [v] ************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __unix__
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_UNIX_ENVIRONMENT__
#else /* !__unix__ */
#ifdef __unix
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_UNIX_ENVIRONMENT__
#endif /* __unix */
#endif /* __unix__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *********************** [^] UNIX ENVIRONMENT [^] ************************* */

/* *************************** [v] UNIXWARE [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef sco
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_UNIXWARE__
#else /* !sco */
#ifdef _UNIXWARE7
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_UNIXWARE__
#endif /* _UNIXWARE7 */
#endif /* sco */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *************************** [^] UNIXWARE [^] ***************************** */

/* *********************** [v] U/WIN ENVIRONMENT [v] ************************ */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef _UWIN
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_UWIN_ENVIRONMENT__
#endif /* _UWIN */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* *********************** [^] U/WIN ENVIRONMENT [^] ************************ */

/* ****************************** [v] VMS [v] ******************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef VMS
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_VMS__
#else /* !VMS */
#ifdef __VMS
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_VMS__
#endif /* __VMS */
#endif /* VMS */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ****************************** [^] VMS [^] ******************************* */

/* **************************** [v] VXWORKS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __VXWORKS__ /* GNU C, DIAB */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_VXWORKS__
#else /* !__VXWORKS__ */
#ifdef __vxworks /* GNU C, DIAB */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_VXWORKS__
#endif /* __vxworks */
#endif /* __VXWORKS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] VXWORKS [^] ***************************** */

/* **************************** [v] WINDOWS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef _WIN16
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS__
#else /* !_WIN16 */
#ifdef _WIN32
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS__
#else /* !_WIN32 */
#ifdef _WIN64
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS__
#else /* !_WIN64 */
#ifdef __WIN32__ /* BORLAND C++ */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS__
#else /* !__WIN32__ */
#ifdef __TOS_WIN__ /* XLC */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS__
#else /* !__TOS_WIN__ */
#ifdef __WINDOWS__ /* WATCOM C/C++ */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS__
#endif /* __WINDOWS__ */
#endif /* __TOS_WIN__ */
#endif /* __WIN32__ */
#endif /* _WIN64 */
#endif /* _WIN32 */
#endif /* _WIN16 */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] WINDOWS [^] ***************************** */

/* ************************** [v] WINDOWS CE [v] **************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef _WIN32_WCE /* EMBEDDED VISUAL STUDIO C++ */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS_CE__
#else /* !_WIN32_WCE */
#ifdef WIN32_PLATFORM_HPC2000 /* H/PC 2000 */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS_CE__
#else /* !WIN32_PLATFORM_HPC2000 */
#ifdef WIN32_PLATFORM_HPCPRO /* H/PC PRO 2.11 */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS_CE__
#else /* !WIN32_PLATFORM_HPCPRO */
#ifdef WIN32_PLATFORM_HPCPRO /* H/PC PRO 3.0 */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS_CE__
#else /* !WIN32_PLATFORM_HPCPRO */
#ifdef WIN32_PLATFORM_PSPC /* POCKET PC */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDOWS_CE__
#endif /* WIN32_PLATFORM_PSPC */
#endif /* WIN32_PLATFORM_HPCPRO */
#endif /* WIN32_PLATFORM_HPCPRO */
#endif /* WIN32_PLATFORM_HPC2000 */
#endif /* _WIN32_WCE */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ************************** [^] WINDOWS CE [^] **************************** */

/* ********************** [v] WIND/U ENVIRONMENT [v] ************************ */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef _WINDU_SOURCE
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_WINDU_ENVIRONMENT__
#endif /* _WINDU_SOURCE */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ********************** [^] WIND/U ENVIRONMENT [^] ************************ */

/* ***************************** [v] Z/OS [v] ******************************* */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __MVS__ /* HOST */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ZOS__
#else /* !__MVS__ */
#ifdef __HOS_MVS__ /* HOST */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ZOS__
#else /* !__HOS_MVS__ */
#ifdef __TOS_MVS__ /* TARGET */
#define LOCALMACRO__PLATFORM_FOUND
#define __PLATFORM_ZOS__
#endif /* __TOS_MVS__ */
#endif /* __HOS_MVS__ */
#endif /* __MVS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ***************************** [^] Z/OS [^] ******************************* */

#ifndef LOCALMACRO__PLATFORM_FOUND
#warning "CMT - PLATFORM.H: target platform couldn't found."
#else /* LOCALMACRO__PLATFORM_FOUND */
#undef LOCALMACRO__PLATFORM_FOUND
#endif /* !LOCALMACRO__PLATFORM_FOUND */
#endif /* !PLATFORM_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
