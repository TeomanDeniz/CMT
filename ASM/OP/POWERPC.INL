#ifdef INCL_CMT_ASM_OP
#ifndef SEAL_ASM_OP
#define SEAL_ASM_OP
#include "POWERPC/COMMANDS/MFSPR.INL"
#include "POWERPC/COMMANDS/OTHERS.INL"
#endif /* !SEAL_ASM_OP */
#endif /* INCL_CMT_ASM_OP */

#ifdef INCL_CMT_ASM_SIZEOF
#ifndef SEAL_ASM_SIZEOF
#define SEAL_ASM_SIZEOF
#include "POWERPC/SIZES/MFSPR.INL"
#include "POWERPC/SIZES/OTHERS.INL"
#endif /* !SEAL_ASM_SIZEOF */
#endif /* INCL_CMT_ASM_SIZEOF */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
