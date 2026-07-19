/* **************************** [v] INCLUDES [v] **************************** */
#include "../CHECK_FEATURE/INLINE_ASM.H"
/******* """"""""""""""""""""""""""""
 * #define IS__INLINE_ASM__SUPPORTED
 * #define INLINE_ASM_TYPE__WATCOM
 * #define INLINE_ASM_TYPE__AZTEC
 * #define INLINE_ASM_TYPE__KEIL_C166
 * #define INLINE_ASM_TYPE__RENESAS
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#ifdef __TINYC__
#define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#else /* !__TINYC__ */
#ifndef IS__INLINE_ASM__SUPPORTED
#define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#else /* IS__INLINE_ASM__SUPPORTED */
#ifdef INLINE_ASM_TYPE__WATCOM
#define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#else /* !INLINE_ASM_TYPE__WATCOM */
#ifdef INLINE_ASM_TYPE__AZTEC
#define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#else /* !INLINE_ASM_TYPE__AZTEC */
#ifdef INLINE_ASM_TYPE__KEIL_C166
#define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#else /* !INLINE_ASM_TYPE__KEIL_C166 */
#ifdef INLINE_ASM_TYPE__RENESAS
#define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#endif /* INLINE_ASM_TYPE__RENESAS */
#endif /* INLINE_ASM_TYPE__KEIL_C166 */
#endif /* INLINE_ASM_TYPE__AZTEC */
#endif /* INLINE_ASM_TYPE__WATCOM */
#endif /* !IS__INLINE_ASM__SUPPORTED */
#endif /* __TINYC__ */
#endif /* !CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
