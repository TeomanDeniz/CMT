#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef SEAL_ASM_INLINE
#define SEAL_ASM_INLINE
#ifdef __SYSTEM_64_BIT__
#include "ARM64/MRS.INL"
#include "ARM64/MOV.INL"
#else /* __SYSTEM_32_BIT__ */
#include "ARM32/MRC.INL"
#include "ARM32/MOV.INL"
#endif /* __SYSTEM_64_BIT__ */
#endif /* !SEAL_ASM_INLINE */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
