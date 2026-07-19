/******************************************************************************\
# H - COMMA_OPERATOR                             #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/07/15 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                              COMMA_OPERATOR                              |*|
|*|__________________________________________________________________________|*|
|*|         _____________________________                                    |*|
|*| DEFINES IS__COMMA_OPERATOR__SUPPORTED IF THE COMPILER SUPPORTS THE COMMA |*|
|*| OPERATOR.                                                                |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define IS__COMMA_OPERATOR__SUPPORTED                         | 36       |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                     .................................                      *|
|* ....................: IS__COMMA_OPERATOR__SUPPORTED :..................... *|
|* :                   '''''''''''''''''''''''''''''''''                    : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS__COMMA_OPERATOR__SUPPORTED                               : *|
|* : 3|                                                                     : *|
|* :                                  ___                                   : *|
|* : THE COMMA OPERATOR REFERS TO THE (,) OPERATOR IN MACROS OR             : *|
|* : EXPRESSIONS, USED TO EVALUATE MULTIPLE EXPRESSIONS IN SEQUENCE AND     : *|
|* : RETURN THE LAST.                                                       : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| #ifdef IS__COMMA_OPERATOR__SUPPORTED                               : *|
|* :  3| int a = (b++, funct(), c = 42, b += c, 66);                        : *|
|* :  4| // PERFORMS ALL ACTIONS AND RETURNS 66                             : *|
|* :  5| #else                                                              : *|
|* :  6| b++;                                                               : *|
|* :  7| funct();                                                           : *|
|* :  8| c = 42;                                                            : *|
|* :  9| b += c;                                                            : *|
|* : 10| int a = 66;                                                        : *|
|* : 11| #endif                                                             : *|
|* : 12|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef CHECK_FEATURE__COMMA_OPERATOR_H
#define CHECK_FEATURE__COMMA_OPERATOR_H 202606 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

#ifdef _ACC_ /* ACC */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _ACC_ */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CMB__ /* ALTIUM MICROBLAZE C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CMB__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CHC__ /* ALTIUM C-TO-HARDWARE */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CHC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __ACK__ /* AMSTERDAM COMPILER KIT */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __ACK__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CC_ARM /* ARM COMPILER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CC_ARM */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __BORLANDC__ /* BORLAND C++ */
#if (__BORLANDC__ >= 0X400) /* VERSION 3.0+ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __BORLANDC__ >= 0X400 */
#endif /* __BORLANDC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CODEGEARC__ /* BORLAND C++ (CODEGEAR) */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CODEGEARC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CC65__ /* CC65 */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CC65__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __clang__ /* CLANG */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __clang__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __COMO__ /* COMEAU C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __COMO__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __DECC /* COMPAQ C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __DECC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __convexc__ /* CONVEX C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __convexc__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __COMPCERT__ /* COMPCERT */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __COMPCERT__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __COVERITY__ /* COVERITY C/C++ STATIC ANALYZER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __COVERITY__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef _CRAYC /* CRAY C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _CRAYC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __DCC__ /* DIAB C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __DCC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef _DICE /* DICE C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _DICE */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __DMC__ /* DIGITAL MARS */
#if (__DMC__ >= 0X700) /* VERSION 7.0+ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __DMC__ >= 0X700 */
#endif /* __DMC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __SYSC__ /* DIGNUS SYSTEMS/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __SYSC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __DJGPP__ /* DJGPP */
#if (__DJGPP__ >= 2) /* VERSION 2.0+ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __DJGPP__ >= 2 */
#endif /* __DJGPP__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __EDG__ /* EDG C++ FRONTEND */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __EDG__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __PATHCC__ /* EKOPATH */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __PATHCC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __FCC_VERSION /* FUJITSU C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __FCC_VERSION */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __GNUC__ /* GCC C/C++ */
#if (__GNUC__ >= 2) /* VERSION 2.0+ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __GNUC__ >= 2 */
#endif /* __GNUC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __ghs__ /* GREEN HILL C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __ghs__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __HP_cc /* HP ANSI C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __HP_cc */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __HP_aCC /* HP AC++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __HP_aCC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __IAR_SYSTEMS_ICC__ /* IAR C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __IAR_SYSTEMS_ICC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __ibmxl__ /* IBM XL C/C++ (CLANG-BASED) */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __ibmxl__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __xlC__ /* IBM XL C/C++ (LEGACY) */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __xlC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __IBMC__ /* IBM Z/OS XL C/C++ OR IBM XL C/C++ (LEGACY) */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __IBMC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __IBMCPP__ /* IBM Z/OS XL C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __IBMCPP__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __IMAGECRAFT__ /* IMAGECRAFT C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __IMAGECRAFT__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __INTEL_COMPILER /* INTEL C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __INTEL_COMPILER */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __ICC /* INTEL C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __ICC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __ECC /* INTEL C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __ECC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __ICL /* INTEL C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __ICL */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __KCC /* KAI C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __KCC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CA__ /* KEIL CARM */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CA__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __KEIL__ /* KEIL CARM */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __KEIL__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __C166__ /* KEIL C166 */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __C166__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __C51__ /* KEIL C51 */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __C51__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CX51__ /* KEIL C51 */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CX51__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __LCC__ /* LCC */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __LCC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __llvm__ /* LLVM */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __llvm__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __HIGHC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __MWERKS__ /* METROWERKS CODEWARRIOR */
#if (__MWERKS__ >= 0X2000) /* VERSION 2.0+ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __MWERKS__ >= 0X2000 */
#endif /* __MWERKS__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CWCC__ /* METROWORKS CODEWARRIOR */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CWCC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef _MSC_VER /* MICROSOFT VISUAL C++ */
#if (_MSC_VER >= 800) /* VERSION 1.0+ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _MSC_VER >= 800 */
#endif /* _MSC_VER */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef _MRI /* MICROTEC C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _MRI */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __NDPC__ /* MICROWAY NDP C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __NDPC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __NDPX__ /* MICROWAY NDP C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __NDPX__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __MINGW32__ /* MINGW */
#if (__MINGW32_MAJOR_VERSION >= 1)
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __MINGW32_MAJOR_VERSION >= 1 */
#endif /* __MINGW32__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __MINGW64__ /* MINGW-W64 */
#if (__MINGW64_MAJOR_VERSION >= 1)
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __MINGW64_MAJOR_VERSION >= 1 */
#endif /* __MINGW64__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __sgi /* MIPSPRO */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __sgi */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef sgi /* MIPSPRO */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* sgi */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __MRC__ /* MPW C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __MRC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef MPW_C /* MPW C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* MPW_C */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef MPW_CPLUS /* MPW C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* MPW_CPLUS */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __CC_NORCROFT /* NORCROFT C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __CC_NORCROFT */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __NWCC__ /* NWCC */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __NWCC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __OPEN64__ /* OPEN64 */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __OPEN64__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __OPENCC__ /* OPEN64 */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __OPENCC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef ORA_PROC /* ORACLE PRO*C PRECOMPILER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* ORA_PROC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __SUNPRO_C /* ORACLE SOLARIS STUDIO */
#if (__SUNPRO_C >= 0X200) /* VERSION 2.0+ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __SUNPRO_C >= 0X200 */
#endif /* __SUNPRO_C */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef _PACC_VER /* PALM C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _PACC_VER */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __POCC__ /* PELLES C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __POCC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __PGI /* PORTLAND GROUP C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __PGI */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __PGIC__ /* PORTLAND GROUP C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __PGIC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __RENESAS__ /* RENESAS C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __RENESAS__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __HITACHI__ /* RENESAS C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __HITACHI__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef SASC /* SAS/C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* SASC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __SASC /* SAS/C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __SASC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __SASC__ /* SAS/C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __SASC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef _SCO_DS /* SCO OPENSERVER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _SCO_DS */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef SDCC /* SMALL DEVICE C COMPILER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* SDCC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __SNC__ /* SN COMPILER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __SNC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __VOSC__ /* STRATUS VOS C */
#if (__VOSC__ == 1) /* ONLY ANSI C MODE (1) SUPPORTS */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __VOSC__ == 1 */
#endif /* __VOSC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __SC__ /* SYMANTEC C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __SC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __TenDRA__ /* TENDRA C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __TenDRA__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __TI_COMPILER_VERSION__ /* TEXAS INSTRUMENTS C/C++ COMPILER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __TI_COMPILER_VERSION__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef _TMS320C6X /* TEXAS INSTRUMENTS C/C++ COMPILER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _TMS320C6X */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __TINYC__ /* TINY C COMPILER */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __TINYC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef _UCC /* ULTIMATE C/C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* _UCC */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __USLC__ /* USL C */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __USLC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __VBCC__ /* VBCC */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __VBCC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __WATCOMC__ /* WATCOM C++ */
#if (__WATCOMC__ >= 900) /* VERSION 9.0+ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __WATCOMC__ >= 900 */
#endif /* __WATCOMC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */

#ifndef IS__COMMA_OPERATOR__SUPPORTED
#ifdef __ZTC__ /* ZORTECH C++ */
#define IS__COMMA_OPERATOR__SUPPORTED
#endif /* __ZTC__ */
#endif /* !IS__COMMA_OPERATOR__SUPPORTED */
#endif /* !CHECK_FEATURE__COMMA_OPERATOR_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
