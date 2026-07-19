#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef INCL_CMT_ASM_ADD
#ifndef SEAL_ASM_ADD
#define SEAL_ASM_ADD
#include "INTEL/ADD.INL"
#endif /* !SEAL_ASM_ADD */
#endif /* INCL_CMT_ASM_ADD */

#ifdef INCL_CMT_ASM_JMP
#ifndef SEAL_ASM_JMP
#define SEAL_ASM_JMP
#include "INTEL/JMP.INL"
#endif /* !SEAL_ASM_JMP */
#endif /* INCL_CMT_ASM_JMP */

#ifdef INCL_CMT_ASM_MOV
#ifndef SEAL_ASM_MOV
#define SEAL_ASM_MOV
#include "INTEL/MOV.INL"
#endif /* !SEAL_ASM_MOV */
#endif /* INCL_CMT_ASM_MOV */

#ifdef INCL_CMT_ASM_MOVABS
#ifndef SEAL_ASM_MOVABS
#define SEAL_ASM_MOVABS
#include "INTEL/MOVABS.INL"
#endif /* !SEAL_ASM_MOVABS */
#endif /* INCL_CMT_ASM_MOVABS */

#ifdef INCL_CMT_ASM_OTHERS
#ifndef SEAL_ASM_OTHERS
#define SEAL_ASM_OTHERS
#include "INTEL/OTHERS.INL"
#endif /* !SEAL_ASM_OTHERS */
#endif /* INCL_CMT_ASM_OTHERS */

#ifdef INCL_CMT_ASM_PUSH
#ifndef SEAL_ASM_PUSH
#define SEAL_ASM_PUSH
#include "INTEL/PUSH.INL"
#endif /* !SEAL_ASM_PUSH */
#endif /* INCL_CMT_ASM_PUSH */

#ifdef INCL_CMT_ASM_POP
#ifndef SEAL_ASM_POP
#define SEAL_ASM_POP
#include "INTEL/POP.INL"
#endif /* !SEAL_ASM_POP */
#endif /* INCL_CMT_ASM_POP */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
