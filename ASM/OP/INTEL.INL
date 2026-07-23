#ifdef INCL_CMT_ASM_OP
#ifdef INCL_CMT_ASM_ADD
#ifndef SEAL_ASM_OP_ADD
#define SEAL_ASM_OP_ADD
#include "INTEL/COMMANDS/ADD.INL"
#endif /* !SEAL_ASM_OP_ADD */
#endif /* INCL_CMT_ASM_ADD */

#ifdef INCL_CMT_ASM_JMP
#ifndef SEAL_ASM_OP_JMP
#define SEAL_ASM_OP_JMP
#include "INTEL/COMMANDS/JMP.INL"
#endif /* !SEAL_ASM_OP_JMP */
#endif /* INCL_CMT_ASM_JMP */

#ifdef INCL_CMT_ASM_MOV
#ifndef SEAL_ASM_OP_MOV
#define SEAL_ASM_OP_MOV
#include "INTEL/COMMANDS/MOV.INL"
#endif /* !SEAL_ASM_OP_MOV */
#endif /* INCL_CMT_ASM_MOV */

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
#endif /* INCL_CMT_ASM_OP */

#ifdef INCL_CMT_ASM_SIZEOF
#ifdef INCL_CMT_ASM_ADD
#ifndef SEAL_ASM_SIZE_ADD
#define SEAL_ASM_SIZE_ADD
#include "INTEL/SIZES/ADD.INL"
#endif /* !SEAL_ASM_SIZE_ADD */
#endif /* INCL_CMT_ASM_ADD */

#ifdef INCL_CMT_ASM_JMP
#ifndef SEAL_ASM_SIZE_JMP
#define SEAL_ASM_SIZE_JMP
#include "INTEL/SIZES/JMP.INL"
#endif /* !SEAL_ASM_SIZE_JMP */
#endif /* INCL_CMT_ASM_JMP */

#ifdef INCL_CMT_ASM_MOV
#ifndef SEAL_ASM_SIZE_MOV
#define SEAL_ASM_SIZE_MOV
#include "INTEL/SIZES/MOV.INL"
#endif /* !SEAL_ASM_SIZE_MOV */
#endif /* INCL_CMT_ASM_MOV */

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
#endif /* INCL_CMT_ASM_SIZEOF */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
