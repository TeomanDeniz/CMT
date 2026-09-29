#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef INCL_CMT_ASM_JMP
#ifndef SEAL_ASM_JMP
#define SEAL_ASM_JMP
#include "INTEL/JMP.INL"
#endif /* !SEAL_ASM_JMP */
#endif /* INCL_CMT_ASM_JMP */

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

#ifdef INCL_CMT_ASM_MOV
#ifndef SEAL_ASM_MOV
#define SEAL_ASM_MOV
#include "INTEL/MOV.INL"
#endif /* !SEAL_ASM_MOV */
#endif /* INCL_CMT_ASM_MOV */

#ifdef INCL_CMT_ASM_MOV_PTR
#ifndef SEAL_ASM_MOV_PTR
#define SEAL_ASM_MOV_PTR
#include "INTEL/MOV_PTR.INL"
#endif /* !SEAL_ASM_MOV_PTR */
#endif /* INCL_CMT_ASM_MOV_PTR */

#ifdef INCL_CMT_ASM_MOV_PTR_SEGMENT
#ifndef SEAL_ASM_MOV_PTR_SEGMENT
#define SEAL_ASM_MOV_PTR_SEGMENT
#include "INTEL/MOV_PTR_SEGMENT.INL"
#endif /* !SEAL_ASM_MOV_PTR_SEGMENT */
#endif /* INCL_CMT_ASM_MOV_PTR_SEGMENT */

#ifdef INCL_CMT_ASM_ADD
#ifndef SEAL_ASM_ADD
#define SEAL_ASM_ADD
#include "INTEL/ADD.INL"
#endif /* !SEAL_ASM_ADD */
#endif /* INCL_CMT_ASM_ADD */

#ifdef INCL_CMT_ASM_ADD_PTR
#ifndef SEAL_ASM_ADD_PTR
#define SEAL_ASM_ADD_PTR
#include "INTEL/ADD_PTR.INL"
#endif /* !SEAL_ASM_ADD_PTR */
#endif /* INCL_CMT_ASM_ADD_PTR */

#ifdef INCL_CMT_ASM_ADC
#ifndef SEAL_ASM_ADC
#define SEAL_ASM_ADC
#include "INTEL/ADC.INL"
#endif /* !SEAL_ASM_ADC */
#endif /* INCL_CMT_ASM_ADC */

#ifdef INCL_CMT_ASM_ADC_PTR
#ifndef SEAL_ASM_ADC_PTR
#define SEAL_ASM_ADC_PTR
#include "INTEL/ADC_PTR.INL"
#endif /* !SEAL_ASM_ADC_PTR */
#endif /* INCL_CMT_ASM_ADC_PTR */

#ifdef INCL_CMT_ASM_SUB
#ifndef SEAL_ASM_SUB
#define SEAL_ASM_SUB
#include "INTEL/SUB.INL"
#endif /* !SEAL_ASM_SUB */
#endif /* INCL_CMT_ASM_SUB */

#ifdef INCL_CMT_ASM_SUB_PTR
#ifndef SEAL_ASM_SUB_PTR
#define SEAL_ASM_SUB_PTR
#include "INTEL/SUB_PTR.INL"
#endif /* !SEAL_ASM_SUB_PTR */
#endif /* INCL_CMT_ASM_SUB_PTR */

#ifdef INCL_CMT_ASM_SBB
#ifndef SEAL_ASM_SBB
#define SEAL_ASM_SBB
#include "INTEL/SBB.INL"
#endif /* !SEAL_ASM_SBB */
#endif /* INCL_CMT_ASM_SBB */

#ifdef INCL_CMT_ASM_SBB_PTR
#ifndef SEAL_ASM_SBB_PTR
#define SEAL_ASM_SBB_PTR
#include "INTEL/SBB_PTR.INL"
#endif /* !SEAL_ASM_SBB_PTR */
#endif /* INCL_CMT_ASM_SBB_PTR */

#ifdef INCL_CMT_ASM_AND
#ifndef SEAL_ASM_AND
#define SEAL_ASM_AND
#include "INTEL/AND.INL"
#endif /* !SEAL_ASM_AND */
#endif /* INCL_CMT_ASM_AND */

#ifdef INCL_CMT_ASM_AND_PTR
#ifndef SEAL_ASM_AND_PTR
#define SEAL_ASM_AND_PTR
#include "INTEL/AND_PTR.INL"
#endif /* !SEAL_ASM_AND_PTR */
#endif /* INCL_CMT_ASM_AND_PTR */

#ifdef INCL_CMT_ASM_OR
#ifndef SEAL_ASM_OR
#define SEAL_ASM_OR
#include "INTEL/OR.INL"
#endif /* !SEAL_ASM_OR */
#endif /* INCL_CMT_ASM_OR */

#ifdef INCL_CMT_ASM_OR_PTR
#ifndef SEAL_ASM_OR_PTR
#define SEAL_ASM_OR_PTR
#include "INTEL/OR_PTR.INL"
#endif /* !SEAL_ASM_OR_PTR */
#endif /* INCL_CMT_ASM_OR_PTR */

#ifdef INCL_CMT_ASM_XOR
#ifndef SEAL_ASM_XOR
#define SEAL_ASM_XOR
#include "INTEL/XOR.INL"
#endif /* !SEAL_ASM_XOR */
#endif /* INCL_CMT_ASM_XOR */

#ifdef INCL_CMT_ASM_XOR_PTR
#ifndef SEAL_ASM_XOR_PTR
#define SEAL_ASM_XOR_PTR
#include "INTEL/XOR_PTR.INL"
#endif /* !SEAL_ASM_XOR_PTR */
#endif /* INCL_CMT_ASM_XOR_PTR */

#ifdef INCL_CMT_ASM_CMP
#ifndef SEAL_ASM_CMP
#define SEAL_ASM_CMP
#include "INTEL/CMP.INL"
#endif /* !SEAL_ASM_CMP */
#endif /* INCL_CMT_ASM_CMP */

#ifdef INCL_CMT_ASM_CMP_PTR
#ifndef SEAL_ASM_CMP_PTR
#define SEAL_ASM_CMP_PTR
#include "INTEL/CMP_PTR.INL"
#endif /* !SEAL_ASM_CMP_PTR */
#endif /* INCL_CMT_ASM_CMP_PTR */

#ifdef INCL_CMT_ASM_TEST
#ifndef SEAL_ASM_TEST
#define SEAL_ASM_TEST
#include "INTEL/TEST.INL"
#endif /* !SEAL_ASM_TEST */
#endif /* INCL_CMT_ASM_TEST */

#ifdef INCL_CMT_ASM_TEST_PTR
#ifndef SEAL_ASM_TEST_PTR
#define SEAL_ASM_TEST_PTR
#include "INTEL/TEST_PTR.INL"
#endif /* !SEAL_ASM_TEST_PTR */
#endif /* INCL_CMT_ASM_TEST_PTR */

#ifdef INCL_CMT_ASM_XCHG
#ifndef SEAL_ASM_XCHG
#define SEAL_ASM_XCHG
#include "INTEL/XCHG.INL"
#endif /* !SEAL_ASM_XCHG */
#endif /* INCL_CMT_ASM_XCHG */

#ifdef INCL_CMT_ASM_XCHG_PTR
#ifndef SEAL_ASM_XCHG_PTR
#define SEAL_ASM_XCHG_PTR
#include "INTEL/XCHG_PTR.INL"
#endif /* !SEAL_ASM_XCHG_PTR */
#endif /* INCL_CMT_ASM_XCHG_PTR */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
