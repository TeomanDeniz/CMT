#ifdef INCL_CMT_ASM_OP
#ifdef INCL_CMT_ASM_JMP
#ifndef SEAL_ASM_OP_JMP
#define SEAL_ASM_OP_JMP
#include "INTEL/COMMANDS/JMP.INL"
#endif /* !SEAL_ASM_OP_JMP */
#endif /* INCL_CMT_ASM_JMP */

#ifdef INCL_CMT_ASM_MOVABS
#ifndef SEAL_ASM_OP_MOVABS
#define SEAL_ASM_OP_MOVABS
#include "INTEL/COMMANDS/MOVABS.INL"
#endif /* !SEAL_ASM_OP_MOVABS */
#endif /* INCL_CMT_ASM_MOVABS */

#ifdef INCL_CMT_ASM_OTHERS
#ifndef SEAL_ASM_OP_OTHERS
#define SEAL_ASM_OP_OTHERS
#include "INTEL/COMMANDS/OTHERS.INL"
#endif /* !SEAL_ASM_OP_OTHERS */
#endif /* INCL_CMT_ASM_OTHERS */

#ifdef INCL_CMT_ASM_PUSH
#ifndef SEAL_ASM_OP_PUSH
#define SEAL_ASM_OP_PUSH
#include "INTEL/COMMANDS/PUSH.INL"
#endif /* !SEAL_ASM_OP_PUSH */
#endif /* INCL_CMT_ASM_PUSH */

#ifdef INCL_CMT_ASM_POP
#ifndef SEAL_ASM_OP_POP
#define SEAL_ASM_OP_POP
#include "INTEL/COMMANDS/POP.INL"
#endif /* !SEAL_ASM_OP_POP */
#endif /* INCL_CMT_ASM_POP */

#ifdef INCL_CMT_ASM_MOV
#ifndef SEAL_ASM_OP_MOV
#define SEAL_ASM_OP_MOV
#include "INTEL/COMMANDS/MOV.INL"
#endif /* !SEAL_ASM_OP_MOV */
#endif /* INCL_CMT_ASM_MOV */

#ifdef INCL_CMT_ASM_MOV_PTR
#ifndef SEAL_ASM_OP_MOV_PTR
#define SEAL_ASM_OP_MOV_PTR
#include "INTEL/COMMANDS/MOV_PTR.INL"
#endif /* !SEAL_ASM_OP_MOV_PTR */
#endif /* INCL_CMT_ASM_MOV_PTR */

#ifdef INCL_CMT_ASM_MOV_PTR_SEGMENT
#ifndef SEAL_ASM_OP_MOV_PTR_SEGMENT
#define SEAL_ASM_OP_MOV_PTR_SEGMENT
#include "INTEL/COMMANDS/MOV_PTR_SEGMENT.INL"
#endif /* !SEAL_ASM_OP_MOV_PTR_SEGMENT */
#endif /* INCL_CMT_ASM_MOV_PTR_SEGMENT */

#ifdef INCL_CMT_ASM_ADD
#ifndef SEAL_ASM_OP_ADD
#define SEAL_ASM_OP_ADD
#include "INTEL/COMMANDS/ADD.INL"
#endif /* !SEAL_ASM_OP_ADD */
#endif /* INCL_CMT_ASM_ADD */

#ifdef INCL_CMT_ASM_ADD_PTR
#ifndef SEAL_ASM_OP_ADD_PTR
#define SEAL_ASM_OP_ADD_PTR
#include "INTEL/COMMANDS/ADD_PTR.INL"
#endif /* !SEAL_ASM_OP_ADD_PTR */
#endif /* INCL_CMT_ASM_ADD_PTR */

#ifdef INCL_CMT_ASM_ADC
#ifndef SEAL_ASM_OP_ADC
#define SEAL_ASM_OP_ADC
#include "INTEL/COMMANDS/ADC.INL"
#endif /* !SEAL_ASM_OP_ADC */
#endif /* INCL_CMT_ASM_ADC */

#ifdef INCL_CMT_ASM_ADC_PTR
#ifndef SEAL_ASM_OP_ADC_PTR
#define SEAL_ASM_OP_ADC_PTR
#include "INTEL/COMMANDS/ADC_PTR.INL"
#endif /* !SEAL_ASM_OP_ADC_PTR */
#endif /* INCL_CMT_ASM_ADC_PTR */

#ifdef INCL_CMT_ASM_SUB
#ifndef SEAL_ASM_OP_SUB
#define SEAL_ASM_OP_SUB
#include "INTEL/COMMANDS/SUB.INL"
#endif /* !SEAL_ASM_OP_SUB */
#endif /* INCL_CMT_ASM_SUB */

#ifdef INCL_CMT_ASM_SUB_PTR
#ifndef SEAL_ASM_OP_SUB_PTR
#define SEAL_ASM_OP_SUB_PTR
#include "INTEL/COMMANDS/SUB_PTR.INL"
#endif /* !SEAL_ASM_OP_SUB_PTR */
#endif /* INCL_CMT_ASM_SUB_PTR */

#ifdef INCL_CMT_ASM_SBB
#ifndef SEAL_ASM_OP_SBB
#define SEAL_ASM_OP_SBB
#include "INTEL/COMMANDS/SBB.INL"
#endif /* !SEAL_ASM_OP_SBB */
#endif /* INCL_CMT_ASM_SBB */

#ifdef INCL_CMT_ASM_SBB_PTR
#ifndef SEAL_ASM_OP_SBB_PTR
#define SEAL_ASM_OP_SBB_PTR
#include "INTEL/COMMANDS/SBB_PTR.INL"
#endif /* !SEAL_ASM_OP_SBB_PTR */
#endif /* INCL_CMT_ASM_SBB_PTR */

#ifdef INCL_CMT_ASM_AND
#ifndef SEAL_ASM_OP_AND
#define SEAL_ASM_OP_AND
#include "INTEL/COMMANDS/AND.INL"
#endif /* !SEAL_ASM_OP_AND */
#endif /* INCL_CMT_ASM_AND */

#ifdef INCL_CMT_ASM_AND_PTR
#ifndef SEAL_ASM_OP_AND_PTR
#define SEAL_ASM_OP_AND_PTR
#include "INTEL/COMMANDS/AND_PTR.INL"
#endif /* !SEAL_ASM_OP_AND_PTR */
#endif /* INCL_CMT_ASM_AND_PTR */

#ifdef INCL_CMT_ASM_OR
#ifndef SEAL_ASM_OP_OR
#define SEAL_ASM_OP_OR
#include "INTEL/COMMANDS/OR.INL"
#endif /* !SEAL_ASM_OP_OR */
#endif /* INCL_CMT_ASM_OR */

#ifdef INCL_CMT_ASM_OR_PTR
#ifndef SEAL_ASM_OP_OR_PTR
#define SEAL_ASM_OP_OR_PTR
#include "INTEL/COMMANDS/OR_PTR.INL"
#endif /* !SEAL_ASM_OP_OR_PTR */
#endif /* INCL_CMT_ASM_OR_PTR */

#ifdef INCL_CMT_ASM_XOR
#ifndef SEAL_ASM_OP_XOR
#define SEAL_ASM_OP_XOR
#include "INTEL/COMMANDS/XOR.INL"
#endif /* !SEAL_ASM_OP_XOR */
#endif /* INCL_CMT_ASM_XOR */

#ifdef INCL_CMT_ASM_XOR_PTR
#ifndef SEAL_ASM_OP_XOR_PTR
#define SEAL_ASM_OP_XOR_PTR
#include "INTEL/COMMANDS/XOR_PTR.INL"
#endif /* !SEAL_ASM_OP_XOR_PTR */
#endif /* INCL_CMT_ASM_XOR_PTR */

#ifdef INCL_CMT_ASM_CMP
#ifndef SEAL_ASM_OP_CMP
#define SEAL_ASM_OP_CMP
#include "INTEL/COMMANDS/CMP.INL"
#endif /* !SEAL_ASM_OP_CMP */
#endif /* INCL_CMT_ASM_CMP */

#ifdef INCL_CMT_ASM_CMP_PTR
#ifndef SEAL_ASM_OP_CMP_PTR
#define SEAL_ASM_OP_CMP_PTR
#include "INTEL/COMMANDS/CMP_PTR.INL"
#endif /* !SEAL_ASM_OP_CMP_PTR */
#endif /* INCL_CMT_ASM_CMP_PTR */

#ifdef INCL_CMT_ASM_TEST
#ifndef SEAL_ASM_OP_TEST
#define SEAL_ASM_OP_TEST
#include "INTEL/COMMANDS/TEST.INL"
#endif /* !SEAL_ASM_OP_TEST */
#endif /* INCL_CMT_ASM_TEST */

#ifdef INCL_CMT_ASM_TEST_PTR
#ifndef SEAL_ASM_OP_TEST_PTR
#define SEAL_ASM_OP_TEST_PTR
#include "INTEL/COMMANDS/TEST_PTR.INL"
#endif /* !SEAL_ASM_OP_TEST_PTR */
#endif /* INCL_CMT_ASM_TEST_PTR */

#ifdef INCL_CMT_ASM_XCHG
#ifndef SEAL_ASM_OP_XCHG
#define SEAL_ASM_OP_XCHG
#include "INTEL/COMMANDS/XCHG.INL"
#endif /* !SEAL_ASM_OP_XCHG */
#endif /* INCL_CMT_ASM_XCHG */

#ifdef INCL_CMT_ASM_XCHG_PTR
#ifndef SEAL_ASM_OP_XCHG_PTR
#define SEAL_ASM_OP_XCHG_PTR
#include "INTEL/COMMANDS/XCHG_PTR.INL"
#endif /* !SEAL_ASM_OP_XCHG_PTR */
#endif /* INCL_CMT_ASM_XCHG_PTR */
#endif /* INCL_CMT_ASM_OP */

#ifdef INCL_CMT_ASM_SIZEOF
#ifdef INCL_CMT_ASM_JMP
#ifndef SEAL_ASM_SIZE_JMP
#define SEAL_ASM_SIZE_JMP
#include "INTEL/SIZES/JMP.INL"
#endif /* !SEAL_ASM_SIZE_JMP */
#endif /* INCL_CMT_ASM_JMP */

#ifdef INCL_CMT_ASM_MOVABS
#ifndef SEAL_ASM_SIZE_MOVABS
#define SEAL_ASM_SIZE_MOVABS
#include "INTEL/SIZES/MOVABS.INL"
#endif /* !SEAL_ASM_SIZE_MOVABS */
#endif /* INCL_CMT_ASM_MOVABS */

#ifdef INCL_CMT_ASM_OTHERS
#ifndef SEAL_ASM_SIZE_OTHERS
#define SEAL_ASM_SIZE_OTHERS
#include "INTEL/SIZES/OTHERS.INL"
#endif /* !SEAL_ASM_SIZE_OTHERS */
#endif /* INCL_CMT_ASM_OTHERS */

#ifdef INCL_CMT_ASM_PUSH
#ifndef SEAL_ASM_SIZE_PUSH
#define SEAL_ASM_SIZE_PUSH
#include "INTEL/SIZES/PUSH.INL"
#endif /* !SEAL_ASM_SIZE_PUSH */
#endif /* INCL_CMT_ASM_PUSH */

#ifdef INCL_CMT_ASM_POP
#ifndef SEAL_ASM_SIZE_POP
#define SEAL_ASM_SIZE_POP
#include "INTEL/SIZES/POP.INL"
#endif /* !SEAL_ASM_SIZE_POP */
#endif /* INCL_CMT_ASM_POP */

#ifdef INCL_CMT_ASM_MOV
#ifndef SEAL_ASM_SIZE_MOV
#define SEAL_ASM_SIZE_MOV
#include "INTEL/SIZES/MOV.INL"
#endif /* !SEAL_ASM_SIZE_MOV */
#endif /* INCL_CMT_ASM_MOV */

#ifdef INCL_CMT_ASM_MOV_PTR
#ifndef SEAL_ASM_SIZE_MOV_PTR
#define SEAL_ASM_SIZE_MOV_PTR
#include "INTEL/SIZES/MOV_PTR.INL"
#endif /* !SEAL_ASM_SIZE_MOV_PTR */
#endif /* INCL_CMT_ASM_MOV_PTR */

#ifdef INCL_CMT_ASM_MOV_PTR_SEGMENT
#ifndef SEAL_ASM_SIZE_MOV_PTR_SEGMENT
#define SEAL_ASM_SIZE_MOV_PTR_SEGMENT
#include "INTEL/SIZES/MOV_PTR_SEGMENT.INL"
#endif /* !SEAL_ASM_SIZE_MOV_PTR_SEGMENT */
#endif /* INCL_CMT_ASM_MOV_PTR_SEGMENT */

#ifdef INCL_CMT_ASM_ADD
#ifndef SEAL_ASM_SIZE_ADD
#define SEAL_ASM_SIZE_ADD
#include "INTEL/SIZES/ADD.INL"
#endif /* !SEAL_ASM_SIZE_ADD */
#endif /* INCL_CMT_ASM_ADD */

#ifdef INCL_CMT_ASM_ADD_PTR
#ifndef SEAL_ASM_SIZE_ADD_PTR
#define SEAL_ASM_SIZE_ADD_PTR
#include "INTEL/SIZES/ADD_PTR.INL"
#endif /* !SEAL_ASM_SIZE_ADD_PTR */
#endif /* INCL_CMT_ASM_ADD_PTR */

#ifdef INCL_CMT_ASM_ADC
#ifndef SEAL_ASM_SIZE_ADC
#define SEAL_ASM_SIZE_ADC
#include "INTEL/SIZES/ADC.INL"
#endif /* !SEAL_ASM_SIZE_ADC */
#endif /* INCL_CMT_ASM_ADC */

#ifdef INCL_CMT_ASM_ADC_PTR
#ifndef SEAL_ASM_SIZE_ADC_PTR
#define SEAL_ASM_SIZE_ADC_PTR
#include "INTEL/SIZES/ADC_PTR.INL"
#endif /* !SEAL_ASM_SIZE_ADC_PTR */
#endif /* INCL_CMT_ASM_ADC_PTR */

#ifdef INCL_CMT_ASM_SUB
#ifndef SEAL_ASM_SIZE_SUB
#define SEAL_ASM_SIZE_SUB
#include "INTEL/SIZES/SUB.INL"
#endif /* !SEAL_ASM_SIZE_SUB */
#endif /* INCL_CMT_ASM_SUB */

#ifdef INCL_CMT_ASM_SUB_PTR
#ifndef SEAL_ASM_SIZE_SUB_PTR
#define SEAL_ASM_SIZE_SUB_PTR
#include "INTEL/SIZES/SUB_PTR.INL"
#endif /* !SEAL_ASM_SIZE_SUB_PTR */
#endif /* INCL_CMT_ASM_SUB_PTR */

#ifdef INCL_CMT_ASM_SBB
#ifndef SEAL_ASM_SIZE_SBB
#define SEAL_ASM_SIZE_SBB
#include "INTEL/SIZES/SBB.INL"
#endif /* !SEAL_ASM_SIZE_SBB */
#endif /* INCL_CMT_ASM_SBB */

#ifdef INCL_CMT_ASM_SBB_PTR
#ifndef SEAL_ASM_SIZE_SBB_PTR
#define SEAL_ASM_SIZE_SBB_PTR
#include "INTEL/SIZES/SBB_PTR.INL"
#endif /* !SEAL_ASM_SIZE_SBB_PTR */
#endif /* INCL_CMT_ASM_SBB_PTR */

#ifdef INCL_CMT_ASM_AND
#ifndef SEAL_ASM_SIZE_AND
#define SEAL_ASM_SIZE_AND
#include "INTEL/SIZES/AND.INL"
#endif /* !SEAL_ASM_SIZE_AND */
#endif /* INCL_CMT_ASM_AND */

#ifdef INCL_CMT_ASM_AND_PTR
#ifndef SEAL_ASM_SIZE_AND_PTR
#define SEAL_ASM_SIZE_AND_PTR
#include "INTEL/SIZES/AND_PTR.INL"
#endif /* !SEAL_ASM_SIZE_AND_PTR */
#endif /* INCL_CMT_ASM_AND_PTR */

#ifdef INCL_CMT_ASM_OR
#ifndef SEAL_ASM_SIZE_OR
#define SEAL_ASM_SIZE_OR
#include "INTEL/SIZES/OR.INL"
#endif /* !SEAL_ASM_SIZE_OR */
#endif /* INCL_CMT_ASM_OR */

#ifdef INCL_CMT_ASM_OR_PTR
#ifndef SEAL_ASM_SIZE_OR_PTR
#define SEAL_ASM_SIZE_OR_PTR
#include "INTEL/SIZES/OR_PTR.INL"
#endif /* !SEAL_ASM_SIZE_OR_PTR */
#endif /* INCL_CMT_ASM_OR_PTR */

#ifdef INCL_CMT_ASM_XOR
#ifndef SEAL_ASM_SIZE_XOR
#define SEAL_ASM_SIZE_XOR
#include "INTEL/SIZES/XOR.INL"
#endif /* !SEAL_ASM_SIZE_XOR */
#endif /* INCL_CMT_ASM_XOR */

#ifdef INCL_CMT_ASM_XOR_PTR
#ifndef SEAL_ASM_SIZE_XOR_PTR
#define SEAL_ASM_SIZE_XOR_PTR
#include "INTEL/SIZES/XOR_PTR.INL"
#endif /* !SEAL_ASM_SIZE_XOR_PTR */
#endif /* INCL_CMT_ASM_XOR_PTR */

#ifdef INCL_CMT_ASM_CMP
#ifndef SEAL_ASM_SIZE_CMP
#define SEAL_ASM_SIZE_CMP
#include "INTEL/SIZES/CMP.INL"
#endif /* !SEAL_ASM_SIZE_CMP */
#endif /* INCL_CMT_ASM_CMP */

#ifdef INCL_CMT_ASM_CMP_PTR
#ifndef SEAL_ASM_SIZE_CMP_PTR
#define SEAL_ASM_SIZE_CMP_PTR
#include "INTEL/SIZES/CMP_PTR.INL"
#endif /* !SEAL_ASM_SIZE_CMP_PTR */
#endif /* INCL_CMT_ASM_CMP_PTR */

#ifdef INCL_CMT_ASM_TEST
#ifndef SEAL_ASM_SIZE_TEST
#define SEAL_ASM_SIZE_TEST
#include "INTEL/SIZES/TEST.INL"
#endif /* !SEAL_ASM_SIZE_TEST */
#endif /* INCL_CMT_ASM_TEST */

#ifdef INCL_CMT_ASM_TEST_PTR
#ifndef SEAL_ASM_SIZE_TEST_PTR
#define SEAL_ASM_SIZE_TEST_PTR
#include "INTEL/SIZES/TEST_PTR.INL"
#endif /* !SEAL_ASM_SIZE_TEST_PTR */
#endif /* INCL_CMT_ASM_TEST_PTR */

#ifdef INCL_CMT_ASM_XCHG
#ifndef SEAL_ASM_SIZE_XCHG
#define SEAL_ASM_SIZE_XCHG
#include "INTEL/SIZES/XCHG.INL"
#endif /* !SEAL_ASM_SIZE_XCHG */
#endif /* INCL_CMT_ASM_XCHG */

#ifdef INCL_CMT_ASM_XCHG_PTR
#ifndef SEAL_ASM_SIZE_XCHG_PTR
#define SEAL_ASM_SIZE_XCHG_PTR
#include "INTEL/SIZES/XCHG_PTR.INL"
#endif /* !SEAL_ASM_SIZE_XCHG_PTR */
#endif /* INCL_CMT_ASM_XCHG_PTR */
#endif /* INCL_CMT_ASM_SIZEOF */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
