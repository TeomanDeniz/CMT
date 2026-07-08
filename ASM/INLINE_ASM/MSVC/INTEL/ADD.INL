#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef __SYSTEM_16_BIT__
#include "ADD/16.INL"
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#include "ADD/32.INL"
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#include "ADD/64.INL"
#endif /* __SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
