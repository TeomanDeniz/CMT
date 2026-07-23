/******************************************************************************\
# H - STRINGIFICATION                            #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/11/21 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                             STRINGIFICATION                              |*|
|*|__________________________________________________________________________|*|
|*|         ______________________________                                   |*|
|*| DEFINES IS__STRINGIFICATION__SUPPORTED IF THE COMPILER SUPPORTS THE      |*|
|*| STRINGIFICATION (#) FEATURE.                                             |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define IS__STRINGIFICATION__SUPPORTED                        | 36       |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                     ..................................                     *|
|* ....................: IS__STRINGIFICATION__SUPPORTED :.................... *|
|* :                   ''''''''''''''''''''''''''''''''''                   : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS__STRINGIFICATION__SUPPORTED                              : *|
|* : 3|                                                                     : *|
|* :                               _                                        : *|
|* : STRINGIFICATION REFERS TO THE # OPERATOR IN MACROS, USED TO CONVERT    : *|
|* : PURE INPUTS TO STRINGS.                                                : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define X(A) #A                                                     : *|
|* : 3|                                                                     : *|
|* : 4| printf( X( i am testing something ) );                              : *|
|* : 5| // Will return: "i am testing something" without a new line.        : *|
|* : 6|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef CHECK_FEATURE__STRINGIFICATION_H
#define CHECK_FEATURE__STRINGIFICATION_H 202606 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ >= 199012L) /* C89/ANSI C */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __STDC_VERSION__ >= 199012L */
#endif /* __STDC_VERSION__ */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __cplusplus /* C++ */
#if (__cplusplus >= 199711L) /* C++98 OR LATER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __cplusplus >= 199711L */
#endif /* __cplusplus */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __GNUC__
#if (__GNUC__ >= 2) /* GCC 2.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __GNUC__ >= 2 */
#endif /* __GNUC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _MSC_VER /* MICROSOFT C COMPILER */
#if (_MSC_VER >= 800) /* AT VERSION VISUAL C++ 1.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _MSC_VER >= 800 */
#endif /* _MSC_VER */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __clang__ /* LLVM / CLANG */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __clang__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __ICC /* INTEL C++ COMPILER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __ICC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __ECC /* INTEL C++ COMPILER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __ECC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __ICL /* INTEL C++ COMPILER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __ICL */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __INTEL_COMPILER /* INTEL C++ COMPILER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __INTEL_COMPILER */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __TINYC__ /* TCC - TINY C COMPILER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __TINYC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __WATCOMC__ /* OPEN WATCOM */
#if (__WATCOMC__ >= 900) /* VERSION 9.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __WATCOMC__ >= 900 */
#endif /* __WATCOMC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __CODEGEARC__ /* BORLAND C++ (CODEGEAR) */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __CODEGEARC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __BORLANDC__ /* BORLAND C++ */
#if (__BORLANDC__ >= 0X400) /* VERSION 3.0+ (0X400+) */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __BORLANDC__ >= 0X400 */
#endif /* __BORLANDC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __LCC__ /* LCC */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __LCC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef AZTEC_C /* AZTEC C COMPILER */
#if (__VERSION >= 0X510) /* VERSION 5.10+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __VERSION >= 0X510 */
#endif /* AZTEC_C */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __AZTEC_C__ /* AZTEC C COMPILER */
#if (__VERSION >= 0X510) /* VERSION 5.10+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __VERSION >= 0X510 */
#endif /* __AZTEC_C__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __DECC /* COMPAQ C/C++ */
#if (__DECC_VER >= 50090001) /* VERSION 5.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __DECC_VER >= 50090001 */
#endif /* __DECC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __DECCXX /* COMPAQ C/C++ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __DECCXX */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _ACC_ /* ACC */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _ACC_ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __ACK__ /* AMSTERDAM COMPILER KIT */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __ACK__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __COMPCERT__ /* COMPCERT */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __COMPCERT__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __COVERITY__ /* COVERITY C/C++ STATIC ANALYZER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __COVERITY__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _DICE /* DICE C */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _DICE */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __SYSC__ /* DIGNUS SYSTEMS/C++ */
#if (__SYSC_VER__ >= 15000) /* VERSION 1.50+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __SYSC_VER__ >= 15000 */
#endif /* __SYSC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __convexc__ /* CONVEX C */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __convexc__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __DCC__ /* DIAB C/C++ */
#if (__VERSION_NUMBER__ >= 4000) /* VERSION 4.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __VERSION_NUMBER__ >= 4000 */
#endif /* __DCC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __HP_cc /* HP ANSI C */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __HP_cc */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __CMB__ /* ALTIUM MICROBLAZE C */
#if (__VERSION__ >= 2)
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __VERSION__ >= 2 */
#endif /* __CMB__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __CHC__ /* ALTIUM MICROBLAZE C */
#if (__VERSION__ >= 2)
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __VERSION__ >= 2 */
#endif /* __CHC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __CC_ARM /* ARM C COMPILER */
#if (__ARMCC_VERSION >= 200000) /* VERSION 2.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __ARMCC_VERSION >= 200000 */
#endif /* __CC_ARM */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __COMO__ /* COMEAU C++ */
#if (__COMO_VERSION__ >= 200) /* VERSION 2.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __COMO_VERSION__ >= 200 */
#endif /* __COMO__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _CRAYC /* CRAY C COMPILER */
#if (_RELEASE >= 6) /* VERSION 6.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _RELEASE >= 6 */
#endif /* _CRAYC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __DMC__ /* DIGITAL MARS */
#if (__DMC__ >= 0X700) /* VERSION 7.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __DMC__ >= 0X700 */
#endif /* __DMC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __DJGPP__ /* MS-DOS GCC COMPILER */
#if (__DJGPP__ >= 2) /* VERSION 2+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __DJGPP__ >= 2 */
#endif /* __DJGPP__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __EDG__ /* EDG C++ FRONTEND */
#if (__EDG_VERSION__ >= 200) /* VERSION 2.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __EDG_VERSION__ >= 200 */
#endif /* __EDG__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __PATHCC__ /* EKOPATH */
#if (__PATHCC__ >= 2) /* VERSION 2.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __PATHCC__ >= 2 */
#endif /* __PATHCC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __FCC_VERSION /* FUJITSU C++ */
#if (__FCC_VERSION >= 40000) /* VERSION 4.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __FCC_VERSION >= 40000 */
#endif /* __FCC_VERSION */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __ghs__ /* GREEN HILLS C/C++ */
#if (__ghs__ >= 1)
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __ghs__ >= 1 */
#endif /* __ghs__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __HP_aCC /* HP AC++ */
#if (__HP_aCC >= 60000) /* A.06.00+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __HP_aCC >= 60000 */
#endif /* __HP_aCC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __IAR_SYSTEMS_ICC__ /* IAR C/C++ */
#if (__VER__ >= 800) /* VERSION 8.00+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __VER__ >= 800 */
#endif /* __IAR_SYSTEMS_ICC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __ibmxl__ /* IBM XL C/C++ (CLANG-BASED VERSIONS) */
#if (__ibmxl_vrm__ >= 0X01000000) /* VERSION 1.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __ibmxl_vrm__ >= 0X01000000 */
#endif /* __ibmxl__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __xlC__ /* IBM XL C/C++ (LEGACY VERSIONS) */
#if (__IBMC__ >= 0X0600) /* VERSION 6.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __IBMC__ >= 0X0600 */
#endif /* __xlC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __IBMC__ /* IBM Z/OS XL C */
#if (__IBMC__ >= 0X0600) /* VERSION 6.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __IBMC__ >= 0X0600 */
#endif /* __IBMC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __IBMCPP__ /* IBM Z/OS XL C++ */
#if (__IBMCPP__ >= 0X0600) /* VERSION 6.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __IBMCPP__ >= 0X0600 */
#endif /* __IBMCPP__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __IMAGECRAFT__ /* IMAGECRAFT C */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __IMAGECRAFT__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __KCC__ /* KAI C++ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __KCC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __CA__ /* KEIL CARM */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __CA__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __KEIL__ /* KEIL CARM */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __KEIL__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __C166__ /* KEIL C166 */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __C166__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __C51__ /* KEIL C51 */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __C51__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __CX51__ /* KEIL C51 */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __CX51__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __llvm__ /* LLVM / CLANG */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __llvm__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __HIGHC__ /* METAWARE HEIGH/C++ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __HIGHC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __MWERKS__ /* METROWERKS CODEWARRIOR */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __MWERKS__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _MRI /* MICROTEC MRI */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _MRI */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __NDPC__ /* MICROWAY NDP */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __NDPC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __NDPX__ /* MICROWAY NDP */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __NDPX__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __MINGW32__ /* MINGW-32 */
#ifdef __MINGW32_MAJOR_VERSION
#if (__MINGW32_MAJOR_VERSION >= 1)
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __MINGW32_MAJOR_VERSION >= 1 */
#endif /* __MINGW32_MAJOR_VERSION */
#endif /* __MINGW32__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __MINGW64__ /* MINGW-W64 */
#ifdef __MINGW64_VERSION_MAJOR
#if (__MINGW64_VERSION_MAJOR >= 1)
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __MINGW64_VERSION_MAJOR >= 1 */
#endif /* __MINGW64_VERSION_MAJOR */
#endif /* __MINGW64__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __sgi /* MIPSPRO */
#if (_COMPILER_VERSION >= 700) /* VERSION 7.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _COMPILER_VERSION >= 700 */
#endif /* __sgi */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef sgi /* MIPSPRO */
#if (_COMPILER_VERSION >= 700) /* VERSION 7.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _COMPILER_VERSION >= 700 */
#endif /* sgi */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __MRC__ /* MPW C++ */
#if (__MRC__ >= 0X500) /* VERSION 5.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __MRC__ >= 0X500 */
#endif /* __MRC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef MPW_C /* MPW C++ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* MPW_C */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef MPW_CPLUS /* MPW C++ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* MPW_CPLUS */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __CC_NORCROFT /* NORCROFT C */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __CC_NORCROFT */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __NWCC__ /* NWCC */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __NWCC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __OPEN64__ /* OPEN64 */
#if (__OPENCC__ >= 4) /* VERSION 4.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __OPENCC__ >= 4 */
#endif /* __OPEN64__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __OPENCC__ /* OPEN64 */
#if (__OPENCC__ >= 4) /* VERSION 4.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __OPENCC__ >= 4 */
#endif /* __OPENCC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef ORA_PROC /* ORACLE PRO*C PRECOMPILER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* ORA_PROC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __SUNPRO_C /* ORACLE SOLARIS STUDIO */
#if (__SUNPRO_C >= 0X500) /* VERSION 5.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __SUNPRO_C >= 0X500 */
#endif /* __SUNPRO_C */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _PACC_VER /* PALM C/C++ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _PACC_VER */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __POCC__ /* PELLES C */
#if (__POCC__ >= 300) /* VERSION 3.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __POCC__ >= 300 */
#endif /* __POCC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __PGI /* PORTLAND GROUP C/C++ */
#if (__PGIC__ >= 7) /* VERSION 7.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __PGIC__ >= 7 */
#endif /* __PGI */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __PGIC__ /* PORTLAND GROUP C/C++ */
#if (__PGIC__ >= 7) /* VERSION 7.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __PGIC__ >= 7 */
#endif /* __PGIC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __RENESAS__ /* RENESAS C/C++ */
#if (__RENESAS_VERSION__ >= 0X0800) /* VERSION 8.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __RENESAS_VERSION__ >= 0X0800 */
#endif /* __RENESAS__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __HITACHI__ /* RENESAS C/C++ (HITACHI) */
#if (__HITACHI_VERSION__ >= 0X0800) /* VERSION 8.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __HITACHI_VERSION__ >= 0X0800 */
#endif /* __HITACHI__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef SASC /* SAS/C */
#if (__SASC__ >= 650) /* VERSION 6.50+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __SASC__ >= 650 */
#endif /* SASC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __SASC /* SAS/C */
#if (__SASC__ >= 650) /* VERSION 6.50+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __SASC__ >= 650 */
#endif /* __SASC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __SASC__ /* SAS/C */
#if (__SASC__ >= 650) /* VERSION 6.50+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __SASC__ >= 650 */
#endif /* __SASC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _SCO_DS /* SCO OPENSERVER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _SCO_DS */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef SDCC /* SMALL DEVICE C COMPILER */
#if (SDCC >= 256) /* VERSION 2.5.6+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* SDCC >= 256 */
#endif /* SDCC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __SNC__ /* SN COMPILER */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __SNC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __VOSC__ /* STRATUS VOS C */
#if (__VOSC__ == 1) /* ONLY ANSI C MODE (1) */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __VOSC__ == 1 */
#endif /* __VOSC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __SC__ /* SYMANTEC C++ */
#if (__SC__ >= 0X700) /* VERSION 7.0+*/
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __SC__ >= 0X700 */
#endif /* __SC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __TenDRA__ /* TENDRA C/C++ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __TenDRA__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __TI_COMPILER_VERSION__ /* TEXAS INSTRUMENTS C/C++ COMPILER */
#if (__TI_COMPILER_VERSION__ >= 4009001) /* VERSION 4.9.1+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __TI_COMPILER_VERSION__ >= 4009001 */
#endif /* __TI_COMPILER_VERSION__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _TMS320C6X /* TEXAS INSTRUMENTS C/C++ COMPILER */
#if (__TI_COMPILER_VERSION__ >= 4009001) /* VERSION 4.9.1+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __TI_COMPILER_VERSION__ >= 4009001 */
#endif /* _TMS320C6X */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef _UCC /* ULTIMATE C/C++ */
#if (_MAJOR_REV >= 2) /* VERSION 2.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* _MAJOR_REV >= 2 */
#endif /* _UCC */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __USLC__ /* USL C */
#if (__SCO_VERSION__ >= 302199801) /* VERSION 3.2+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __SCO_VERSION__ >= 302199801 */
#endif /* __USLC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __VBCC__ /* VBCC */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __VBCC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */

#ifndef IS__STRINGIFICATION__SUPPORTED
#ifdef __ZTC__ /* ZORTECH C++ */
#if (__ZTC__ >= 0X300) /* VERSION 3.0+ */
#define IS__STRINGIFICATION__SUPPORTED
#endif /* __ZTC__ >= 0X300 */
#endif /* __ZTC__ */
#endif /* !IS__STRINGIFICATION__SUPPORTED */
#endif /* !CHECK_FEATURE__STRINGIFICATION_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
