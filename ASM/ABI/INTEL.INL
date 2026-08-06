#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef __ABI__PASS_REG_WINDOWS__
#ifdef INCL_CMT_ASM_INLINE
#ifndef SEAL_ASM_ABI_MOV_INLINE
#define SEAL_ASM_ABI_MOV_INLINE
#include "INTEL/ARGUMENTS/COMMANDS/MOV/WINDOWS.INL"
#endif /* !SEAL_ASM_ABI_MOV_INLINE */
#endif /* INCL_CMT_ASM_INLINE */

#ifdef INCL_CMT_ASM_OP
#ifndef SEAL_ASM_ABI_MOV_OP
#define SEAL_ASM_ABI_MOV_OP
#include "INTEL/ARGUMENTS/OPS/MOV/WINDOWS.INL"
#endif /* !SEAL_ASM_ABI_MOV_OP */
#endif /* INCL_CMT_ASM_OP */

#ifdef INCL_CMT_ASM_SIZEOF
#ifndef SEAL_ASM_ABI_MOV_SIZEOF
#define SEAL_ASM_ABI_MOV_SIZEOF
#include "INTEL/ARGUMENTS/SIZES/MOV/WINDOWS.INL"
#endif /* !SEAL_ASM_ABI_MOV_SIZEOF */
#endif /* INCL_CMT_ASM_SIZEOF */
#else /* !__ABI__PASS_REG_WINDOWS__ */
#ifdef __ABI__PASS_REG_UNIX__
#ifdef INCL_CMT_ASM_INLINE
#ifndef SEAL_ASM_ABI_MOV_INLINE
#define SEAL_ASM_ABI_MOV_INLINE
#include "INTEL/ARGUMENTS/COMMANDS/MOV/UNIX.INL"
#endif /* !SEAL_ASM_ABI_MOV_INLINE */
#endif /* INCL_CMT_ASM_INLINE */

#ifdef INCL_CMT_ASM_OP
#ifndef SEAL_ASM_ABI_MOV_OP
#define SEAL_ASM_ABI_MOV_OP
#include "INTEL/ARGUMENTS/OPS/MOV/UNIX.INL"
#endif /* !SEAL_ASM_ABI_MOV_OP */
#endif /* INCL_CMT_ASM_OP */

#ifdef INCL_CMT_ASM_SIZEOF
#ifndef SEAL_ASM_ABI_MOV_SIZEOF
#define SEAL_ASM_ABI_MOV_SIZEOF
#include "INTEL/ARGUMENTS/SIZES/MOV/UNIX.INL"
#endif /* !SEAL_ASM_ABI_MOV_SIZEOF */
#endif /* INCL_CMT_ASM_SIZEOF */
#else /* !__ABI__PASS_REG_UNIX__ */
#ifdef __ABI__PASS_STACK__
#ifdef INCL_CMT_ASM_INLINE
#ifndef SEAL_ASM_ABI_MOV_INLINE
#define SEAL_ASM_ABI_MOV_INLINE
#include "INTEL/ARGUMENTS/COMMANDS/MOV/STACK.INL"
#endif /* !SEAL_ASM_ABI_MOV_INLINE */
#endif /* INCL_CMT_ASM_INLINE */

#ifdef INCL_CMT_ASM_OP
#ifndef SEAL_ASM_ABI_MOV_OP
#define SEAL_ASM_ABI_MOV_OP
#include "INTEL/ARGUMENTS/OPS/MOV/STACK.INL"
#endif /* !SEAL_ASM_ABI_MOV_OP */
#endif /* INCL_CMT_ASM_OP */

#ifdef INCL_CMT_ASM_SIZEOF
#ifndef SEAL_ASM_ABI_MOV_SIZEOF
#define SEAL_ASM_ABI_MOV_SIZEOF
#include "INTEL/ARGUMENTS/SIZES/MOV/STACK.INL"
#endif /* !SEAL_ASM_ABI_MOV_SIZEOF */
#endif /* INCL_CMT_ASM_SIZEOF */
#endif /* __ABI__PASS_STACK__ */
#endif /* __ABI__PASS_REG_UNIX__ */
#endif /* __ABI__PASS_REG_WINDOWS__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
