/******************************************************************************\
# H - CPUID                                      #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/03/16 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/12 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  CPUID                                   |*|
|*|__________________________________________________________________________|*|
|*|                          _____                                           |*|
|*| THESE MACROS EXECUTE THE CPUID INSTRUCTION AND RETURN THE VALUES STORED  |*|
|*| IN THE CPU REGISTERS AFTER EXECUTION.                                    |*|
|*| _____                                                                    |*|
|*| CPUID IS USED TO QUERY PROCESSOR INFORMATION SUCH AS VENDOR ID, FEATURE  |*|
|*| FLAGS, SUPPORTED INSTRUCTION SETS, CACHE DETAILS, AND EXTENDED PROCESSOR |*|
|*| CAPABILITIES.                                                            |*|
|*|                                                 __________               |*|
|*| THE REQUESTED INFORMATION IS SELECTED USING THE LEAF VALUE, WHICH IS     |*|
|*| PLACED IN THE EAX REGISTER BEFORE EXECUTING CPUID.                       |*|
|*|               ^^^                           ^^^^^                        |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define GET_CPUID(LEAF, AX, BX, CX, DX)                       | 181      |*|
|*| #define get_cpuid(leaf, ax, bx, cx, dx)                       |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|* __________________________________________________________________________ *|
|*| VENDOR STRINGS (CPUS)                                   | VALUE          |*|
|*|=========================================================|================|*|
|*| #define CPUID_VENDOR_AMD                                | "AuthenticAMD" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_AMD_OLD                            | "AMDisbetter!" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_INTEL                              | "GenuineIntel" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_VIA                                | "VIA VIA VIA " |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_TRANSMETA                          | "GenuineTMx86" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_TRANSMETA_OLD                      | "TransmetaCPU" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_CYRIX                              | "CyrixInstead" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_CENTAUR                            | "CentaurHauls" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_NEXGEN                             | "NexGenDriven" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_UMC                                | "UMC UMC UMC " |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_SIS                                | "SiS SiS SiS " |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_NSC                                | "Geode by NSC" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_RISE                               | "RiseRiseRise" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_VORTEX                             | "Vortex86 SoC" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_AO486                              | "MiSTer AO486" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_AO486_OLD                          | "GenuineAO486" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_ZHAOXIN                            | "  Shanghai  " |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_HYGON                              | "HygonGenuine" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_ELBRUS                             | "E2K MACHINE " |*|
|*|_________________________________________________________|________________|*|
|*                                                                            *|
|* __________________________________________________________________________ *|
|*| VENDOR STRINGS (HYPERVISORS)                            | VALUE          |*|
|*|=========================================================|================|*|
|*| #define CPUID_VENDOR_QEMU                               | "TCGTCGTCGTCG" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_KVM                                | " KVMKVMKVM  " |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_VMWARE                             | "VMwareVMware" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_VIRTUALBOX                         | "VBoxVBoxVBox" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_XEN                                | "XenVMMXenVMM" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_HYPERV                             | "Microsoft Hv" |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_PARALLELS                          | " prl hyperv " |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_PARALLELS_ALT                      | " lrpepyh vr " |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_BHYVE                              | "bhyve bhyve " |*|
|*|---------------------------------------------------------|----------------|*|
|*| #define CPUID_VENDOR_QNX                                | " QNXQVMBSQG " |*|
|*|_________________________________________________________|________________|*|
|*                                                                            *|
|* __________________________________________________________________________ *|
|*| CPU FEATURES                                                             |*|
|*|==========================================================================|*|
|*| #define CPUID_FEAT_EBX_BRAND_INDEX                                       |*|
|*| #define CPUID_FEAT_EBX_CLFLUSH_LINE_SIZE                                 |*|
|*| #define CPUID_FEAT_EBX_APIC_ID_SPACE                                     |*|
|*| #define CPUID_FEAT_EBX_INITIAL_APIC_ID                                   |*|
|*| #define CPUID_FEAT_ECX_SSE3                                              |*|
|*| #define CPUID_FEAT_ECX_PCLMUL                                            |*|
|*| #define CPUID_FEAT_ECX_DTES64                                            |*|
|*| #define CPUID_FEAT_ECX_MONITOR                                           |*|
|*| #define CPUID_FEAT_ECX_DS_CPL                                            |*|
|*| #define CPUID_FEAT_ECX_VMX                                               |*|
|*| #define CPUID_FEAT_ECX_SMX                                               |*|
|*| #define CPUID_FEAT_ECX_EST                                               |*|
|*| #define CPUID_FEAT_ECX_TM2                                               |*|
|*| #define CPUID_FEAT_ECX_SSSE3                                             |*|
|*| #define CPUID_FEAT_ECX_CID                                               |*|
|*| #define CPUID_FEAT_ECX_SDBG                                              |*|
|*| #define CPUID_FEAT_ECX_FMA                                               |*|
|*| #define CPUID_FEAT_ECX_CX16                                              |*|
|*| #define CPUID_FEAT_ECX_XTPR                                              |*|
|*| #define CPUID_FEAT_ECX_PDCM                                              |*|
|*| #define CPUID_FEAT_ECX_PCID                                              |*|
|*| #define CPUID_FEAT_ECX_DCA                                               |*|
|*| #define CPUID_FEAT_ECX_SSE4_1                                            |*|
|*| #define CPUID_FEAT_ECX_SSE4_2                                            |*|
|*| #define CPUID_FEAT_ECX_X2APIC                                            |*|
|*| #define CPUID_FEAT_ECX_MOVBE                                             |*|
|*| #define CPUID_FEAT_ECX_POPCNT                                            |*|
|*| #define CPUID_FEAT_ECX_TSC                                               |*|
|*| #define CPUID_FEAT_ECX_AES                                               |*|
|*| #define CPUID_FEAT_ECX_XSAVE                                             |*|
|*| #define CPUID_FEAT_ECX_OSXSAVE                                           |*|
|*| #define CPUID_FEAT_ECX_AVX                                               |*|
|*| #define CPUID_FEAT_ECX_F16C                                              |*|
|*| #define CPUID_FEAT_ECX_RDRAND                                            |*|
|*| #define CPUID_FEAT_ECX_HYPERVISOR                                        |*|
|*| #define CPUID_FEAT_EDX_FPU                                               |*|
|*| #define CPUID_FEAT_EDX_VME                                               |*|
|*| #define CPUID_FEAT_EDX_DE                                                |*|
|*| #define CPUID_FEAT_EDX_PSE                                               |*|
|*| #define CPUID_FEAT_EDX_TSC                                               |*|
|*| #define CPUID_FEAT_EDX_MSR                                               |*|
|*| #define CPUID_FEAT_EDX_PAE                                               |*|
|*| #define CPUID_FEAT_EDX_MCE                                               |*|
|*| #define CPUID_FEAT_EDX_CX8                                               |*|
|*| #define CPUID_FEAT_EDX_APIC                                              |*|
|*| #define CPUID_FEAT_EDX_SEP                                               |*|
|*| #define CPUID_FEAT_EDX_MTRR                                              |*|
|*| #define CPUID_FEAT_EDX_PGE                                               |*|
|*| #define CPUID_FEAT_EDX_MCA                                               |*|
|*| #define CPUID_FEAT_EDX_CMOV                                              |*|
|*| #define CPUID_FEAT_EDX_PAT                                               |*|
|*| #define CPUID_FEAT_EDX_PSE36                                             |*|
|*| #define CPUID_FEAT_EDX_PSN                                               |*|
|*| #define CPUID_FEAT_EDX_CLFLUSH                                           |*|
|*| #define CPUID_FEAT_EDX_DS                                                |*|
|*| #define CPUID_FEAT_EDX_ACPI                                              |*|
|*| #define CPUID_FEAT_EDX_MMX                                               |*|
|*| #define CPUID_FEAT_EDX_FXSR                                              |*|
|*| #define CPUID_FEAT_EDX_SSE                                               |*|
|*| #define CPUID_FEAT_EDX_SSE2                                              |*|
|*| #define CPUID_FEAT_EDX_SS                                                |*|
|*| #define CPUID_FEAT_EDX_HTT                                               |*|
|*| #define CPUID_FEAT_EDX_TM                                                |*|
|*| #define CPUID_FEAT_EDX_IA64                                              |*|
|*| #define CPUID_FEAT_EDX_PBE                                               |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
|*                                 .........                                  *|
|* ................................: CPUID :................................. *|
|* :                               '''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define GET_CPUID(LEAF, AX, BX, CX, DX)                             : *|
|* : 3| #define get_cpuid(leaf, ax, bx, cx, dx)                             : *|
|* : 4|                                                                     : *|
|* :              _____                                ____                 : *|
|* : EXECUTES THE CPUID INSTRUCTION WITH THE SPECIFIED LEAF VALUE AND       : *|
|* : STORES THE RESULTING REGISTER OUTPUTS IN THE PROVIDED VARIABLES.       : *|
|* :                                      ___           _____               : *|
|* : THE MACRO PLACES THE LEAF VALUE INTO EAX, RUNS THE CPUID INSTRUCTION,  : *|
|* : AND THEN WRITES THE RESULTING VALUES OF EAX, EBX, ECX, AND EDX INTO    : *|
|* : THE GIVEN VARIABLES.                    ^^^  ^^^  ^^^      ^^^         : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| unsigned int eax, ebx, ecx, edx;                                    : *|
|* : 3|                                                                     : *|
|* : 4| get_cpuid(0, eax, ebx, ecx, edx);                                   : *|
|* : 5|                                                                     : *|
|* :                                                                        : *|
|* : AFTER EXECUTION:                                                       : *|
|* :   ___              ____________________________                        : *|
|* : * EAX CONTAINS THE MAXIMUM SUPPORTED CPUID LEAF.                       : *|
|* :   ___  ___      ___                      _________________             : *|
|* : * EBX, EDX, AND ECX TOGETHER CONTAIN THE CPU VENDOR STRING.            : *|
|* :     ____                                                               : *|
|* : THE LEAF SELECTS WHICH PROCESSOR INFORMATION BLOCK IS RETURNED.        : *|
|* :                                                                        : *|
|* : COMMON EXAMPLES:                                                       : *|
|* :  ___________________________________________________                   : *|
|* : | LEAF       | DESCRIPTION                          |                  : *|
|* : |------------|--------------------------------------|                  : *|
|* : | 0X0        | MAXIMUM SUPPORTED LEAF AND VENDOR ID |                  : *|
|* : | 0X1        | PROCESSOR VERSION AND FEATURE FLAGS  |                  : *|
|* : | 0X7        | STRUCTURED EXTENDED FEATURE FLAGS    |                  : *|
|* : | 0X80000000 | MAXIMUM SUPPORTED EXTENDED LEAF      |                  : *|
|* : |____________|______________________________________|                  : *|
|* :                                                                        : *|
|* : DIFFERENT LEAVES RETURN DIFFERENT DATA LAYOUTS IN THE OUTPUT           : *|
|* : REGISTERS.                                                             : *|
|* :                                                                        : *|
|* : EXAMPLE EXTRACTING THE VENDOR STRING:                                  : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| unsigned int eax, ebx, ecx, edx;                                   : *|
|* :  3| char vendor[13];                                                   : *|
|* :  4|                                                                    : *|
|* :  5| get_cpuid(0, eax, ebx, ecx, edx);                                  : *|
|* :  6|                                                                    : *|
|* :  7| ((unsigned int *)vendor)[0] = ebx;                                 : *|
|* :  8| ((unsigned int *)vendor)[1] = edx;                                 : *|
|* :  9| ((unsigned int *)vendor)[2] = ecx;                                 : *|
|* : 10|                                                                    : *|
|* : 11| vendor[12] = 0;                                                    : *|
|* : 12|                                                                    : *|
|* : 13| printf("[%s]\n", vendor);                                          : *|
|* : 14| // Result [GenuineIntel] (Aka: CPUID_VENDOR_INTEL)                 : *|
|* : 15|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

/* * * * * * * * * * * * * * * * * * * ** * * * * * * * * * * * * * * * * * * *\
|* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ *|
|* @                              TEST REPORT                               @ *|
|* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ *|
|*                                                                            *|
|* #===============================================================#========# *|
|* | ENVIRONMENTS                                                  | RESULT | *|
|* #===============================================================#========# *|
|* |                                                               |        | *|
|* |_______________________________________________________________|________| *|
|*                                                                            *|
|*  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  *|
|*                                                                            *|
|*  /!\ No noteworthy issues were encountered to report.                      *|
|*                                                                            *|
\* * * * * * * * * * * * * * * * * * * ** * * * * * * * * * * * * * * * * * * */

#ifndef CPUID_H
#define CPUID_H 202606 /* VERSION */

/* ********************** [v] VENDOR STRINGS (CPUS) [v] ********************* */
#define CPUID_VENDOR_AMD "AuthenticAMD"
#define CPUID_VENDOR_AMD_OLD "AMDisbetter!" /* EARLY AMD K5 */
#define CPUID_VENDOR_INTEL "GenuineIntel"
#define CPUID_VENDOR_VIA "VIA VIA VIA "
#define CPUID_VENDOR_TRANSMETA "GenuineTMx86"
#define CPUID_VENDOR_TRANSMETA_OLD "TransmetaCPU"
#define CPUID_VENDOR_CYRIX "CyrixInstead"
#define CPUID_VENDOR_CENTAUR "CentaurHauls"
#define CPUID_VENDOR_NEXGEN "NexGenDriven"
#define CPUID_VENDOR_UMC "UMC UMC UMC "
#define CPUID_VENDOR_SIS "SiS SiS SiS "
#define CPUID_VENDOR_NSC "Geode by NSC"
#define CPUID_VENDOR_RISE "RiseRiseRise"
#define CPUID_VENDOR_VORTEX "Vortex86 SoC"
#define CPUID_VENDOR_AO486 "MiSTer AO486"
#define CPUID_VENDOR_AO486_OLD "GenuineAO486"
#define CPUID_VENDOR_ZHAOXIN "  Shanghai  "
#define CPUID_VENDOR_HYGON "HygonGenuine"
#define CPUID_VENDOR_ELBRUS "E2K MACHINE "
/* ********************** [^] VENDOR STRINGS (CPUS) [^] ********************* */
 
/* ****************** [v] VENDOR STRINGS (HYPERVISORS) [v] ****************** */
#define CPUID_VENDOR_QEMU "TCGTCGTCGTCG"
#define CPUID_VENDOR_KVM " KVMKVMKVM  "
#define CPUID_VENDOR_VMWARE "VMwareVMware"
#define CPUID_VENDOR_VIRTUALBOX "VBoxVBoxVBox"
#define CPUID_VENDOR_XEN "XenVMMXenVMM"
#define CPUID_VENDOR_HYPERV "Microsoft Hv"
#define CPUID_VENDOR_PARALLELS " prl hyperv "
#define CPUID_VENDOR_PARALLELS_ALT " lrpepyh vr " /* CHECK ENDIANS */
#define CPUID_VENDOR_BHYVE "bhyve bhyve "
#define CPUID_VENDOR_QNX " QNXQVMBSQG "
/* ****************** [^] VENDOR STRINGS (HYPERVISORS) [^] ****************** */

/* ************************** [v] CPU FEATURES [v] ************************** */
#define CPUID_FEAT_EBX_BRAND_INDEX (0XFF << 0)
#define CPUID_FEAT_EBX_CLFLUSH_LINE_SIZE (0XFF << 8)
#define CPUID_FEAT_EBX_APIC_ID_SPACE (0XFF << 16)
#define CPUID_FEAT_EBX_INITIAL_APIC_ID (0XFF << 24)
#define CPUID_FEAT_ECX_SSE3 (1 << 0)
#define CPUID_FEAT_ECX_PCLMUL (1 << 1)
#define CPUID_FEAT_ECX_DTES64 (1 << 2)
#define CPUID_FEAT_ECX_MONITOR (1 << 3)
#define CPUID_FEAT_ECX_DS_CPL (1 << 4)
#define CPUID_FEAT_ECX_VMX (1 << 5)
#define CPUID_FEAT_ECX_SMX (1 << 6)
#define CPUID_FEAT_ECX_EST (1 << 7)
#define CPUID_FEAT_ECX_TM2 (1 << 8)
#define CPUID_FEAT_ECX_SSSE3 (1 << 9)
#define CPUID_FEAT_ECX_CID (1 << 10)
#define CPUID_FEAT_ECX_SDBG (1 << 11)
#define CPUID_FEAT_ECX_FMA (1 << 12)
#define CPUID_FEAT_ECX_CX16 (1 << 13)
#define CPUID_FEAT_ECX_XTPR (1 << 14)
#define CPUID_FEAT_ECX_PDCM (1 << 15)
#define CPUID_FEAT_ECX_PCID (1 << 17)
#define CPUID_FEAT_ECX_DCA (1 << 18)
#define CPUID_FEAT_ECX_SSE4_1 (1 << 19)
#define CPUID_FEAT_ECX_SSE4_2 (1 << 20)
#define CPUID_FEAT_ECX_X2APIC (1 << 21)
#define CPUID_FEAT_ECX_MOVBE (1 << 22)
#define CPUID_FEAT_ECX_POPCNT (1 << 23)
#define CPUID_FEAT_ECX_TSC (1 << 24)
#define CPUID_FEAT_ECX_AES (1 << 25)
#define CPUID_FEAT_ECX_XSAVE (1 << 26)
#define CPUID_FEAT_ECX_OSXSAVE (1 << 27)
#define CPUID_FEAT_ECX_AVX (1 << 28)
#define CPUID_FEAT_ECX_F16C (1 << 29)
#define CPUID_FEAT_ECX_RDRAND (1 << 30)
#define CPUID_FEAT_ECX_HYPERVISOR (1 << 31)
#define CPUID_FEAT_EDX_FPU (1 << 0)
#define CPUID_FEAT_EDX_VME (1 << 1)
#define CPUID_FEAT_EDX_DE (1 << 2)
#define CPUID_FEAT_EDX_PSE (1 << 3)
#define CPUID_FEAT_EDX_TSC (1 << 4)
#define CPUID_FEAT_EDX_MSR (1 << 5)
#define CPUID_FEAT_EDX_PAE (1 << 6)
#define CPUID_FEAT_EDX_MCE (1 << 7)
#define CPUID_FEAT_EDX_CX8 (1 << 8)
#define CPUID_FEAT_EDX_APIC (1 << 9)
#define CPUID_FEAT_EDX_SEP (1 << 11)
#define CPUID_FEAT_EDX_MTRR (1 << 12)
#define CPUID_FEAT_EDX_PGE (1 << 13)
#define CPUID_FEAT_EDX_MCA (1 << 14)
#define CPUID_FEAT_EDX_CMOV (1 << 15)
#define CPUID_FEAT_EDX_PAT (1 << 16)
#define CPUID_FEAT_EDX_PSE36 (1 << 17)
#define CPUID_FEAT_EDX_PSN (1 << 18)
#define CPUID_FEAT_EDX_CLFLUSH (1 << 19)
#define CPUID_FEAT_EDX_DS (1 << 21)
#define CPUID_FEAT_EDX_ACPI (1 << 22)
#define CPUID_FEAT_EDX_MMX (1 << 23)
#define CPUID_FEAT_EDX_FXSR (1 << 24)
#define CPUID_FEAT_EDX_SSE (1 << 25)
#define CPUID_FEAT_EDX_SSE2 (1 << 26)
#define CPUID_FEAT_EDX_SS (1 << 27)
#define CPUID_FEAT_EDX_HTT (1 << 28)
#define CPUID_FEAT_EDX_TM (1 << 29)
#define CPUID_FEAT_EDX_IA64 (1 << 30)
#define CPUID_FEAT_EDX_PBE (1 << 31)
/* ************************** [^] CPU FEATURES [^] ************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ENVIRONMENTS/CPU.H"
/******* """""""""""""""""""""""""""""
 * #define __CPU_INTEL__
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __CPU_INTEL__
/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../CHECK_FEATURE/INLINE_ASM.H"
/******* """""""""""""""""""""""""""""""""""""
 * #define IS__INLINE_ASM__SUPPORTED
 * #define INLINE_ASM_TYPE__BORLAND
 * #define INLINE_ASM_TYPE__DIGITAL_MARS
 * #define INLINE_ASM_TYPE__GNU
 * #define INLINE_ASM_TYPE__MSVC
 * #define INLINE_ASM_TYPE__SOLARIS
 * #define INLINE_ASM_TYPE__WATCOM
 */
#include "../../../ENVIRONMENTS/ARCHITECTURE.H"
/******* """"""""""""""""""""""""""""""""""""""
 * #define __SYSTEM_16_BIT__
 */
#include "../../../ENVIRONMENTS/ABI.H"
/******* """""""""""""""""""""""""""""
 * #define __ABI__PASS_REG_WINDOWS__
 * #define __ABI__PASS_REG_UNIX__
 */
#include "../../../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""""""""
 * typedef BIT32;
 */
#include "../../../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""""""""
 * #define KNR_STYLE
 * #define unsigned
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef __SYSTEM_16_BIT__

#ifdef INLINE_ASM_TYPE__WATCOM
#undef IS__INLINE_ASM__SUPPORTED
#endif /* INLINE_ASM_TYPE__WATCOM */

#ifdef IS__INLINE_ASM__SUPPORTED

#ifdef INLINE_ASM_TYPE__BORLAND
#define GET_CPUID(LEAF, ARG1, ARG2, ARG3, ARG4) \
	do\
	{\
		BIT32	__EAX__;\
		BIT32	__EBX__;\
		BIT32	__ECX__;\
		BIT32	__EDX__;\
		\
		asm\
		{\
			push ebx;\
			mov eax, LEAF;\
			cpuid;\
			mov __EAX__, eax;\
			mov __EBX__, ebx;\
			mov __ECX__, ecx;\
			mov __EDX__, edx;\
			pop ebx;\
		}\
		\
		(ARG1) = __EAX__;\
		(ARG2) = __EBX__;\
		(ARG3) = __ECX__;\
		(ARG4) = __EDX__;\
	} while (0)
#endif /* INLINE_ASM_TYPE__BORLAND */

#ifndef GET_CPUID
#ifdef INLINE_ASM_TYPE__DIGITAL_MARS
#define GET_CPUID(LEAF, ARG1, ARG2, ARG3, ARG4) \
	do\
	{\
		BIT32	__EAX__;\
		BIT32	__EBX__;\
		BIT32	__ECX__;\
		BIT32	__EDX__;\
		\
		asm\
		{\
			push ebx\
			mov eax, LEAF\
			cpuid\
			mov __EAX__, eax\
			mov __EBX__, ebx\
			mov __ECX__, ecx\
			mov __EDX__, edx\
			pop ebx\
		}\
		\
		(ARG1) = __EAX__;\
		(ARG2) = __EBX__;\
		(ARG3) = __ECX__;\
		(ARG4) = __EDX__;\
	} while (0)
#endif /* INLINE_ASM_TYPE__DIGITAL_MARS */
#endif /* !GET_CPUID */

#ifndef GET_CPUID
#ifdef INLINE_ASM_TYPE__GNU
#ifndef __PIC__ /* POSITION-INDEPENDENT CODE */
#define GET_CPUID(LEAF, EAX, EBX, ECX, EDX) \
	__asm__ __volatile__("cpuid"\
		:\
			"=a" (EAX),\
			"=b" (EBX),\
			"=c" (ECX),\
			"=d" (EDX)\
		: "a" (LEAF)\
	)
#else /* __PIC__ */
#define GET_CPUID(LEAF, EAX, EBX, ECX, EDX) \
	__asm__ __volatile__("xchg{l} %%ebx, %1\n\t" \
		"cpuid\n\t" \
		"xchg{l} %%ebx, %1\n\t" \
		: \
			"=a"(EAX), \
			"=&r"(EBX), \
			"=c"(ECX), \
			"=d"(EDX) \
		: "a"(LEAF)\
	)
#endif /* !__PIC__ */
#endif /* INLINE_ASM_TYPE__GNU */
#endif /* !GET_CPUID */

#ifndef GET_CPUID
#ifdef INLINE_ASM_TYPE__MSVC
#define GET_CPUID(LEAF, ARG1, ARG2, ARG3, ARG4) \
	do\
	{\
		BIT32	__EAX__;\
		BIT32	__EBX__;\
		BIT32	__ECX__;\
		BIT32	__EDX__;\
		\
		__asm\
		{\
			push ebx\
			mov eax, LEAF\
			cpuid\
			mov __EAX__, eax\
			mov __EBX__, ebx\
			mov __ECX__, ecx\
			mov __EDX__, edx\
			pop ebx\
		}\
		\
		(ARG1) = __EAX__;\
		(ARG2) = __EBX__;\
		(ARG3) = __ECX__;\
		(ARG4) = __EDX__;\
	} while (0)
#endif /* INLINE_ASM_TYPE__MSVC */
#endif /* !GET_CPUID */

#ifndef GET_CPUID
#ifdef INLINE_ASM_TYPE__SOLARIS
#define GET_CPUID(LEAF, EAX, EBX, ECX, EDX) \
	__asm("\n\
			movl %1, %%eax \n\
			cpuid \n\
			movl %%eax, %0 \n\
			movl %%ebx, %2 \n\
			movl %%ecx, %3 \n\
			movl %%edx, %4 \n\
		"
		: "=m"(EAX), "=m"(EBX), "=m"(ECX), "=m"(EDX) \
		: "r"(LEAF) \
		: "eax", "ebx", "ecx", "edx" \
    )
#endif /* INLINE_ASM_TYPE__SOLARIS */
#endif /* !GET_CPUID */

#ifndef GET_CPUID
#define GET_CPUID(LEAF, EAX, EBX, ECX, EDX) \
	"ERROR - CMT (CPUID.H) IS NOT SUPPORTED IN YOUR COMPILER :l"
#endif /* !GET_CPUID */

#else /* !IS__INLINE_ASM__SUPPORTED */

#ifdef INLINE_ASM_TYPE__WATCOM
#define IS__INLINE_ASM__SUPPORTED
#endif /* INLINE_ASM_TYPE__WATCOM */

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

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""""""""
 * #define KNR_STYLE
 * #define void
 */
#include "../../../ASM/CAN_CMT_USE_INLINE_ASM_FOR_SECTIONS.INL"
/******* """"""""""""""""""""""""""""""""""""""""""""""""""""""
 * #define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define LOCALFUNCTION__GET_CPUID L_GCPUID
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* STANDARD C */
extern void	LOCALFUNCTION__GET_CPUID(BIT32, BIT32 *, BIT32 *, BIT32 *, BIT32 *);
#else /* K&R */
extern int	LOCALFUNCTION__GET_CPUID();
#endif /* !KNR_STYLE */
/* **************************** [^] EXTERNS [^] ***************************** */

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

#ifdef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#define GLOBALCONSTRUCTOR__CPUID ((int (*)())LOCALFUNCTION__GET_CPUID)();\

#endif /* CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

/* ********************* [v] METAWARE HIGH C LINKER [v] ********************* */
/* * METAWARE LINKER DOES NOT SUPPORT LOWER CASE NAMES ON FUNCTION NAMES!!! * */
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define LOCALLINKER__CPUID_HIGHC \
	pragma Alias(LOCALFUNCTION__GET_CPUID, "LOCALFUNCTION__GET_CPUID");
#else /* !__HIGHC__ */
#define LOCALLINKER__CPUID_HIGHC
#endif /* __HIGHC__ */
/* ********************* [^] METAWARE HIGH C LINKER [^] ********************* */

#ifndef INLINE_ASM_TYPE__WATCOM
/* **************************** [v] INCLUDES [v] **************************** */
#define INCL_CMT_ASM_MOV
#define INCL_CMT_ASM_OTHERS
#define INCL_CMT_ASM_PUSH
#define INCL_CMT_ASM_POP
#define INCL_CMT_ASM_INLINE
#include "../../../ASM.H"
/******* """"""""""""""""
 * #define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
 * #define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
 * #define END
 * #define MOV_EAX_EDI
 * #define CPUID
 * #define MOV_EAX_TO_PTR_RSI
 * #define MOV_EBX_TO_PTR_RDX
 * #define MOV_ECX_TO_PTR_RCX
 * #define MOV_EDX_TO_PTR_R8
 * #define PUSH_RBX
 * #define MOV_EAX_ECX
 * #define MOV_EAX_TO_PTR_RDX
 * #define MOV_R10_FROM_PTR_RSP_(VALUE)
 * #define MOV_EBX_TO_PTR_R8
 * #define MOV_ECX_TO_PTR_R9
 * #define MOV_EDX_TO_PTR_R10
 * #define POP_RBX
 * #define PUSH_EBP
 * #define MOV_EBP_ESP
 * #define PUSH_EBX
 * #define PUSH_ESI
 * #define MOV_EAX_FROM_PTR_EBP_(VALUE)
 * #define MOV_EAX_TO_PTR_ESI
 * #define MOV_EBX_TO_PTR_ESI
 * #define MOV_ECX_TO_PTR_ESI
 * #define MOV_ESI_FROM_PTR_EBP_(VALUE)
 * #define MOV_EDX_TO_PTR_ESI
 * #define POP_ESI
 * #define POP_EBX
 * #define POP_EBP
 * #define RET
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __ABI__PASS_REG_UNIX__
#define LOCALLINKER__CPUID \
	LOCALLINKER__CPUID_HIGHC \
	SECTION(\
		void, \
		LOCALFUNCTION__GET_CPUID, \
		(\
			BIT32 LEAF, \
			BIT32 *AX, \
			BIT32 *BX, \
			BIT32 *CX, \
			BIT32 *DX\
		)\
	)\
	SECTION_KNR(\
		void /* void DEFINED EMPTY */, \
		LOCALFUNCTION__GET_CPUID, \
		(LEAF, AX, BX, CX, DX)\
		BIT32	LEAF;\
		BIT32	*AX;\
		BIT32	*BX;\
		BIT32	*CX;\
		BIT32	*DX;\
	)\
		PUSH_RBX \
		MOV_EAX_EDI \
		CPUID \
		MOV_EAX_TO_PTR_RSI \
		MOV_EBX_TO_PTR_RDX \
		MOV_ECX_TO_PTR_RCX \
		MOV_EDX_TO_PTR_R8 \
		POP_RBX \
		RET \
	END
#else /* !__ABI__PASS_REG_UNIX__ */
#ifdef __ABI__PASS_REG_WINDOWS__
#define LOCALLINKER__CPUID \
	LOCALLINKER__CPUID_HIGHC \
	SECTION(\
		void, \
		LOCALFUNCTION__GET_CPUID, \
		(\
			BIT32 LEAF, \
			BIT32 *AX, \
			BIT32 *BX, \
			BIT32 *CX, \
			BIT32 *DX\
		)\
	)\
	SECTION_KNR(\
		void /* void DEFINED EMPTY */, \
		LOCALFUNCTION__GET_CPUID, \
		(LEAF, AX, BX, CX, DX) \
		BIT32	LEAF;\
		BIT32	*AX;\
		BIT32	*BX;\
		BIT32	*CX;\
		BIT32	*DX;\
	)\
		PUSH_RBX \
		MOV_EAX_ECX \
		CPUID \
		MOV_EAX_TO_PTR_RDX \
		MOV_R10_FROM_PTR_RSP_(40) \
		MOV_EBX_TO_PTR_R8 \
		MOV_ECX_TO_PTR_R9 \
		MOV_EDX_TO_PTR_R10 \
		POP_RBX \
		RET \
	END
#else /* !__ABI__PASS_REG_WINDOWS__ */
#define LOCALLINKER__CPUID \
	LOCALLINKER__CPUID_HIGHC \
	SECTION(\
		void, \
		LOCALFUNCTION__GET_CPUID, \
		(\
			BIT32 LEAF, \
			BIT32 *AX, \
			BIT32 *BX, \
			BIT32 *CX, \
			BIT32 *DX\
		)\
	)\
	SECTION_KNR(\
		void, \
		LOCALFUNCTION__GET_CPUID, \
		(LEAF, AX, BX, CX, DX)\
		BIT32	LEAF;\
		BIT32	*AX;\
		BIT32	*BX;\
		BIT32	*CX;\
		BIT32	*DX;\
	)\
		MOV_EAX_(42) \
		MOV_EBX_(42) \
		MOV_ECX_(42) \
		MOV_EDX_(42) \
		RET \
		PUSH_EBP \
		MOV_EBP_ESP \
		PUSH_EBX \
		PUSH_ESI \
		MOV_EAX_FROM_PTR_EBP_(8) \
		CPUID \
		MOV_ESI_FROM_PTR_EBP_(12) \
		MOV_EAX_TO_PTR_ESI \
		MOV_ESI_FROM_PTR_EBP_(16) \
		MOV_EBX_TO_PTR_ESI \
		MOV_ESI_FROM_PTR_EBP_(20) \
		MOV_ECX_TO_PTR_ESI \
		MOV_ESI_FROM_PTR_EBP_(24) \
		MOV_EDX_TO_PTR_ESI \
		POP_ESI \
		POP_EBX \
		POP_EBP \
		RET \
	END
#endif /* __ABI__PASS_REG_WINDOWS__ */
#endif /* __ABI__PASS_REG_UNIX__ */

#else /* INLINE_ASM_TYPE__WATCOM */

#define LOCALLINKER__CPUID LOCALLINKER__CPUID_HIGHC

#ifdef CMT_SETUP
#pragma aux LOCALFUNCTION__GET_CPUID = \
    "cpuid" \
    parm [eax] /* input LEAF in EAX */ \
    value [eax ebx ecx edx] \
    modify [eax ebx ecx edx];
#endif /* CMT_SETUP */

#endif /* !INLINE_ASM_TYPE__WATCOM */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
LOCALLINKER__CPUID
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../../../CMT_AUTO_CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__CPUID
#define GLOBALLINKER__CPUID LOCALLINKER__CPUID
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#include "../../../CMT_AUTO_LINKER.INL"
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

#define GET_CPUID(LEAF, AX, BX, CX, DX) \
	do\
	{\
		unsigned int	__AX__;\
		unsigned int	__BX__;\
		unsigned int	__CX__;\
		unsigned int	__DX__;\
		\
		LOCALFUNCTION__GET_CPUID(LEAF, &__AX__, &__BX__, &__CX__, &__DX__);\
		(AX) = __AX__;\
		(BX) = __BX__;\
		(CX) = __CX__;\
		(DX) = __DX__;\
	}\
	while (0)

#endif /* IS__INLINE_ASM__SUPPORTED */

#else /* __SYSTEM_16_BIT__ */
#define GET_CPUID(LEAF, AX, BX, CX, DX) \
	"ERROR - 16-BIT INTEL CPU MOSTLY NOT SUPPORT CPUID >:I"
#endif /* !__SYSTEM_16_BIT__ */

#else /* !__CPU_INTEL__ */
#define GET_CPUID(LEAF, AX, BX, CX, DX) \
	"ERROR - YOU'RE NOT USING AN INTEL CPU TO USE THIS COMMAND >:("
#endif /* __CPU_INTEL__ */

/* *************************** [v] LOWERCASE [v] **************************** */
#define get_cpuid(leaf, ax, bx, cx, dx) GET_CPUID(leaf, ax, bx, cx, dx)
/* *************************** [^] LOWERCASE [^] **************************** */
#endif /* !CPUID_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
