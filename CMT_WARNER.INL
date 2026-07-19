#ifndef WARN
#ifdef __clang__ /* CLANG */
#define LOCALMACRO__WARN_GNU
#define LOCALMACRO__WARN
#endif /* __clang__ */

#ifndef LOCALMACRO__WARN
#ifdef __DJGPP__ /* DJGPP */
#define LOCALMACRO__WARN_GNU
#define LOCALMACRO__WARN
#endif /* __DJGPP__ */
#endif /* !LOCALMACRO__WARN */

#ifndef LOCALMACRO__WARN
#ifdef __GNUC__ /* GNU MINGW */
#define LOCALMACRO__WARN_GNU
#define LOCALMACRO__WARN
#endif /* __GNUC__ */
#endif /* !LOCALMACRO__WARN */

#ifndef LOCALMACRO__WARN
#ifdef __INTEL_COMPILER /* INTEL C/C++ */
#define LOCALMACRO__WARN_GNU
#define LOCALMACRO__WARN
#endif /* __INTEL_COMPILER */
#endif /* !LOCALMACRO__WARN */

#ifndef LOCALMACRO__WARN
#ifdef __ICC /* INTEL C/C++ */
#define LOCALMACRO__WARN_GNU
#define LOCALMACRO__WARN
#endif /* __ICC */
#endif /* !LOCALMACRO__WARN */

#ifndef LOCALMACRO__WARN
#ifdef __ECC /* INTEL C/C++ */
#define LOCALMACRO__WARN_GNU
#define LOCALMACRO__WARN
#endif /* __ECC */
#endif /* !LOCALMACRO__WARN */

#ifndef LOCALMACRO__WARN
#ifdef __ICL /* INTEL C/C++ */
#define LOCALMACRO__WARN_GNU
#define LOCALMACRO__WARN
#endif /* __ICL */
#endif /* !LOCALMACRO__WARN */

#ifndef LOCALMACRO__WARN
#ifdef _MSC_VER /* MICROSOFT VISUAL C++ */
#define LOCALMACRO__WARN_MSVC
#define LOCALMACRO__WARN
#endif /* _MSC_VER */
#endif /* !LOCALMACRO__WARN */

#ifdef LOCALMACRO__WARN
#ifdef LOCALMACRO__WARN_GNU
#define WARN(MESSAGE) __attribute__((deprecated(MESSAGE)))
#else /* !LOCALMACRO__WARN_GNU */
#ifdef LOCALMACRO__WARN_MSVC
#define WARN(MESSAGE) __declspec(deprecated(MESSAGE))
#endif /* LOCALMACRO__WARN_MSVC */
#endif /* LOCALMACRO__WARN_GNU */
#else /* !LOCALMACRO__WARN */
#define WARN(MESSAGE) (char)MESSAGE
#endif /* LOCALMACRO__WARN */
#endif /* !WARN */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
