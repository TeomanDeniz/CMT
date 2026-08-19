#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../WIN_CORE/KERNEL32.H"
/******* """"""""""""""""""""""""
 * struct S_KERNEL32	KERNEL32;
 */
/* **************************** [^] INCLUDES [^] **************************** */

typedef PTR	T_CONSOLE_OUT_HANDLE;

#ifdef __cplusplus /* C++ */
#include "WINDOWS/CPP/CMT_CONSOLE.INL"
#include "WINDOWS/CPP/FREE.INL"
#include "WINDOWS/CPP/LOG.INL"
#include "WINDOWS/CPP/WARNING.INL"
#include "WINDOWS/CPP/WARNING_AT.INL"
#include "WINDOWS/CPP/ERROR.INL"
#include "WINDOWS/CPP/CURSOR/COLOR.INL"
#include "WINDOWS/CPP/CURSOR/DEFAULT_COLOR.INL"
#else /* !__cplusplus */
#ifdef CONSOLE_HPP
#include "WINDOWS/C_OOP/CMT_CONSOLE.INL"
#include "WINDOWS/C_OOP/FREE.INL"
#include "WINDOWS/C_OOP/LOG.INL"
#include "WINDOWS/C_OOP/WARNING.INL"
#include "WINDOWS/C_OOP/WARNING_AT.INL"
#include "WINDOWS/C_OOP/ERROR.INL"
#include "WINDOWS/C_OOP/CURSOR/COLOR.INL"
#include "WINDOWS/C_OOP/CURSOR/DEFAULT_COLOR.INL"
#else /* !CONSOLE_HPP */
#include "WINDOWS/C/CMT_CONSOLE.INL"
#include "WINDOWS/C/FREE.INL"
#include "WINDOWS/C/LOG.INL"
#include "WINDOWS/C/WARNING.INL"
#include "WINDOWS/C/WARNING_AT.INL"
#include "WINDOWS/C/ERROR.INL"
#include "WINDOWS/C/CURSOR/COLOR.INL"
#include "WINDOWS/C/CURSOR/DEFAULT_COLOR.INL"
#endif /* CONSOLE_HPP */
#endif /* __cplusplus */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
