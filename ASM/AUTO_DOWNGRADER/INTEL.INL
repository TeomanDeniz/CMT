#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef INCL_CMT_ASM_INLINE
#ifndef SEAL_ASM_AUTO_DOWNGRADER_INLINE
#define SEAL_ASM_AUTO_DOWNGRADER_INLINE
#include "INTEL/COMMANDS/ADD.INL"
#include "INTEL/COMMANDS/JMP.INL"
#include "INTEL/COMMANDS/MOV.INL"
#include "INTEL/COMMANDS/MOV_PTR.INL"
#include "INTEL/COMMANDS/MOV_PTR_SEGMENT.INL"
#include "INTEL/COMMANDS/MOVABS.INL"
#include "INTEL/COMMANDS/PUSH.INL"
#include "INTEL/COMMANDS/POP.INL"
#endif /* !SEAL_ASM_AUTO_DOWNGRADER_INLINE */
#endif /* INCL_CMT_ASM_INLINE */

#ifdef INCL_CMT_ASM_OP
#ifndef SEAL_ASM_AUTO_DOWNGRADER_OP
#define SEAL_ASM_AUTO_DOWNGRADER_OP
#include "INTEL/OPS/ADD.INL"
#include "INTEL/OPS/JMP.INL"
#include "INTEL/OPS/MOV.INL"
#include "INTEL/OPS/MOV_PTR.INL"
#include "INTEL/OPS/MOV_PTR_SEGMENT.INL"
#include "INTEL/OPS/MOVABS.INL"
#include "INTEL/OPS/PUSH.INL"
#include "INTEL/OPS/POP.INL"
#endif /* !SEAL_ASM_AUTO_DOWNGRADER_OP */
#endif /* INCL_CMT_ASM_OP */

#ifdef INCL_CMT_ASM_SIZEOF
#ifndef SEAL_ASM_AUTO_DOWNGRADER_SIZEOF
#define SEAL_ASM_AUTO_DOWNGRADER_SIZEOF
#include "INTEL/SIZES/ADD.INL"
#include "INTEL/SIZES/JMP.INL"
#include "INTEL/SIZES/MOV.INL"
#include "INTEL/SIZES/MOV_PTR.INL"
#include "INTEL/SIZES/MOV_PTR_SEGMENT.INL"
#include "INTEL/SIZES/MOVABS.INL"
#include "INTEL/SIZES/PUSH.INL"
#include "INTEL/SIZES/POP.INL"
#endif /* !SEAL_ASM_AUTO_DOWNGRADER_SIZEOF */
#endif /* INCL_CMT_ASM_SIZEOF */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
