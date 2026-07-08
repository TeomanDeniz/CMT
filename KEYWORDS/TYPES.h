/******************************************************************************\
# H - TYPES                                      #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/11/27 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/11 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  TYPES                                   |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS HEADER DEFINES:                                                     |*|
|*|                                                                          |*|
|*| O - PLATFORM-INDEPENDENT STANDARD TYPES                                  |*|
|*|                          ^^^^^^^^ ^^^^^                                  |*|
|*| O - FIXED-WIDTH INTEGER AND FLOATING-POINT TYPES                         |*|
|*|                                                                          |*|
|*| O - FEATURE MACROS TO DETECT COMPILER AND ARCHITECTURE SUPPORT           |*|
|*|     ^^^^^^^ ^^^^^^                                                       |*|
|*| ALL DEFINITIONS ARE CONDITIONAL AND PORTABLE.                            |*|
|*| UNSUPPORTED TYPES ARE NOT DEFINED.                                       |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/******************************************************************************\
|*                                  CONTENTS                                  *|
|******************************************************************************|
|*    ....................................................................    *|
|*  .'                           STANDARD TYPES                           '.  *|
|*.:........................................................................:.*|
|* NAME :                             DESCRIPTION                             *|
|*......:.....................................................................*|
|* BYTE : UNSIGNED ONE BYTE STORAGE UNIT (CHAR)                               *|
|* byte :                                                                     *|
|*......:.....................................................................*|
|* LET  : TYPE FOR ARRAY INDEXING AND SIZES (LIKE size_t)                     *|
|* let  :                                                                     *|
|*......:.....................................................................*|
|* VAR  : SIGNED INTEGER TYPE WITH THE SAME WIDTH AS "void *"                 *|
|* var  :                                                                     *|
|*......:.....................................................................*|
|* PTR  : GENERIC POINTER TYPE                                                *|
|* ptr  :                                                                     *|
|*......:.....................................................................*|
|*                                                                            *|
|*    ....................................................................    *|
|*  .'                       TYPES WITH FIXED SIZES                       '.  *|
|*.:........................................................................:.*|
|*  NAME  :                            DESCRIPTION                            *|
|*........:...................................................................*|
|* BIT8   : 8-BIT UNSIGNED OR SIGNED INTEGER                                  *|
|* bit8   :                                                                   *|
|*........:...................................................................*|
|* BIT16  : 16-BIT UNSIGNED OR SIGNED INTEGER                                 *|
|* bit16  :                                                                   *|
|*........:...................................................................*|
|* BIT32  : 32-BIT UNSIGNED OR SIGNED INTEGER                                 *|
|* bit32  :                                                                   *|
|*........:...................................................................*|
|* BIT64  : 64-BIT UNSIGNED OR SIGNED INTEGER                                 *|
|* bit64  :                                                                   *|
|*........:...................................................................*|
|* BIT128 : 128-BIT UNSIGNED OR SIGNED INTEGER (IF SUPPORTED)                 *|
|* bit128 :                                                                   *|
|*........:...................................................................*|
|*                                                                            *|
|*    ....................................................................    *|
|*  .'                        FLOATING-POINT TYPES                        '.  *|
|*.:........................................................................:.*|
|*   NAME   :                           DESCRIPTION                           *|
|*..........:.................................................................*|
|* FLOAT32  : 32-BIT SINGLE-PRECISION FLOATING-POINT                          *|
|* float32  :                                                                 *|
|*..........:.................................................................*|
|* FLOAT64  : 64-BIT DOUBLE-PRECISION FLOATING-POINT (IF SUPPORTED IN         *|
|* float64  : NON64-BIT ARCHITECTURES)                                        *|
|*..........:.................................................................*|
|* FLOAT128 : 128-BIT EXTENDED-PRECISION FLOATING-POINT (IF SUPPORTED)        *|
|* float128 :                                                                 *|
|*..........:.................................................................*|
|*                                                                            *|
|*    ....................................................................    *|
|*  .'                      SUPPORT DETECTION MACROS                      '.  *|
|*.:........................................................................:.*|
|*        NAME         :                     DESCRIPTION                      *|
|*.....................:......................................................*|
|* SUPPORTED__BIT64    : DEFINED IF COMPILER SUPPORTS BIT64 TYPE, MOSTLY FOR  *|
|*                     : 16-BIT OR 32-BIT ARCHITECTURES                       *|
|*.....................:......................................................*|
|* SUPPORTED__BIT128   : DEFINED IF COMPILER SUPPORTS BIT128 TYPE             *|
|*.....................:......................................................*|
|* SUPPORTED__FLOAT64  : DEFINED IF COMPILER SUPPORTS FLOAT64 TYPE            *|
|*.....................:......................................................*|
|* SUPPORTED__FLOAT128 : DEFINED IF COMPILER SUPPORTS FLOAT128 TYPE           *|
|*.....................:......................................................*|
|*:                                                                          :*|
|*:             NO MACRO -> NO GUARANTEE -> DO NOT USE THE TYPE              :*|
|*:..........................................................................:*|
\******************************************************************************/

/******************************************************************************\
|*                             PORTABILITY NOTES                              *|
|******************************************************************************|
|*                                                                            *|
|* O - TYPES ARE ONLY DEFINED WHEN NATIVELY SUPPORTED.                        *|
|*               ^^^^ ^^^^^^^ ^^^^ ^^^^^^^^ ^^^^^^^^^                         *|
|* O - "BIT128" AND "FLOAT128" DEPEND ENTIRELY ON COMPILER + ARCHITECTURE.    *|
|*                                                                            *|
|* O - ON SOME PLATFORMS, DOUBLE MAY BE 32-BIT. WHICH "FLOAT64" WILL NOT      *|
|*     DEFINED.                                                               *|
|*                                                                            *|
|* O - "SUPPORTED__BIT64" IS STILL DEFINED ON TRUE 64-BIT ARCHITECTURES.      *|
|*                                                                            *|
|* ALWAYS GUARD USAGE WITH THE CORRESPONDING "SUPPORTED__*" MACRO.            *|
|*                                                                            *|
\******************************************************************************/

#ifndef TYPES_H
#define TYPES_H 202606 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ENVIRONMENTS/ARCHITECTURE.H"
/******* """"""""""""""""""""""""""""""""
 * #define __HAS_128_BIT__
 * #define __HAS_64_BIT__
 * #define __SYSTEM_64_BIT__
 * #define __SYSTEM_32_BIT__
 * #define __SYSTEM_16_BIT__
 * #define __SYSTEM_8_BIT__
 */
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define void
 * #define unsigned
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __SYSTEM_8_BIT__
typedef char			VAR;
typedef VAR				var;
typedef unsigned char	LET;
typedef LET				let;
typedef unsigned char	BYTE;
typedef BYTE			byte;
typedef char			BIT8;
typedef BIT8			bit8;
typedef short			BIT16;
typedef BIT16			bit16;
typedef long			BIT32;
typedef BIT32			bit32;
typedef float			FLOAT32;
typedef FLOAT32			float32;
#endif /* __SYSTEM_8_BIT__ */

/* *********************** [v] LOCALMACRO__INT32 [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#ifdef __MSDOS__
#define LOCALMACRO__INT32
#else /* !__MSDOS__ */
#ifdef _M_I86
#define LOCALMACRO__INT32
#else /* !_M_I86 */
#ifdef __I8086__
#define LOCALMACRO__INT32
#endif /* __I8086__ */
#endif /* _M_I86 */
#endif /* __MSDOS__ */
/* *********************** [^] LOCALMACRO__INT32 [^] ************************ */

#ifdef LOCALMACRO__INT32
#undef LOCALMACRO__INT32
typedef long			VAR;
#else /* !LOCALMACRO__INT32 */
typedef int				VAR;
#endif /* LOCALMACRO__INT32 */

typedef VAR				var;
typedef unsigned int	LET;
typedef LET				let;
typedef unsigned char	BYTE;
typedef BYTE			byte;
typedef char			BIT8;
typedef BIT8			bit8;
typedef int				BIT16;
typedef BIT16			bit16;
typedef long			BIT32;
typedef BIT32			bit32;
typedef float			FLOAT32;
typedef FLOAT32			float32;

/* *********************** [v] SUPPORTED__FLOAT64 [v] *********************** */
#ifdef __MSDOS__
#define SUPPORTED__FLOAT64
#else /* !__MSDOS__ */
#ifdef __BORLANDC__
#define SUPPORTED__FLOAT64
#else /* !__BORLANDC__ */
#ifdef __WATCOMC__
#define SUPPORTED__FLOAT64
#else /* !__WATCOMC__ */
#ifdef __GNUC__
#define SUPPORTED__FLOAT64
#endif /* __GNUC__ */
#endif /* __WATCOMC__ */
#endif /* __BORLANDC__ */
#endif /* __MSDOS__ */
/* *********************** [^] SUPPORTED__FLOAT64 [^] *********************** */

#ifdef SUPPORTED__FLOAT64
typedef double	FLOAT64;
typedef FLOAT64	float64;
#endif /* SUPPORTED__FLOAT64 */
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
typedef long			VAR;
typedef VAR				var;
typedef unsigned long	LET;
typedef LET				let;
typedef unsigned char	BYTE;
typedef BYTE			byte;
typedef int				BIT32;
typedef BIT32			bit32;
typedef short			BIT16;
typedef BIT16			bit16;
typedef char			BIT8;
typedef BIT8			bit8;
typedef float			FLOAT32;
typedef FLOAT32			float32;

#ifndef __ARM_EABI__
#ifndef __CORTEX_M__
#define SUPPORTED__FLOAT64
#endif /* !__CORTEX_M__ */
#endif /* !__ARM_EABI__ */

#ifndef SUPPORTED__FLOAT64
#ifdef __GNUC__
#define SUPPORTED__FLOAT64
#else /* !__GNUC__ */
#ifdef _MSC_VER
#define SUPPORTED__FLOAT64
#endif /* _MSC_VER */
#endif /* __GNUC__ */
#endif /* !SUPPORTED__FLOAT64 */

#ifdef SUPPORTED__FLOAT64
typedef double	FLOAT64;
typedef FLOAT64	float64;
#endif /* SUPPORTED__FLOAT64 */
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
typedef long long			VAR;
typedef VAR					var;
typedef unsigned long long	LET;
typedef LET					let;
typedef unsigned char		BYTE;
typedef BYTE				byte;
typedef char				BIT8;
typedef BIT8				bit8;
typedef short				BIT16;
typedef BIT16				bit16;
typedef int					BIT32;
typedef BIT32				bit32;
typedef long long			BIT64;
typedef BIT64				bit64;
typedef float				FLOAT32;
typedef FLOAT32				float32;
typedef double				FLOAT64;
typedef FLOAT64				float64;
#define SUPPORTED__BIT64
#define SUPPORTED__FLOAT64
#else /* !__SYSTEM_64_BIT__ */
#ifdef __HAS_64_BIT__
#ifdef _MSC_VER
#define LOCALMACRO__INT64
#else /* !_MSC_VER */
#ifdef __WATCOMC__
#define LOCALMACRO__INT64
#else /* !__WATCOMC__ */
#ifdef __BORLANDC__
#define LOCALMACRO__INT64
#else /* !__BORLANDC__ */
#ifdef __INTEL_COMPILER
#define LOCALMACRO__INT64
#endif /* __INTEL_COMPILER */
#endif /* __BORLANDC__ */
#endif /* __WATCOMC__ */
#endif /* _MSC_VER */
#ifdef LOCALMACRO__INT64
#undef LOCALMACRO__INT64
typedef __int64		BIT64;
#else /* !LOCALMACRO__INT64 */
typedef long long	BIT64;
#endif /* LOCALMACRO__INT64 */

typedef BIT64		bit64;
#define SUPPORTED__BIT64
#endif /* __HAS_64_BIT__ */
#endif /* __SYSTEM_64_BIT__ */

typedef void	*PTR;
typedef void	*ptr;

#ifdef __HAS_128_BIT__
typedef __int128	BIT128;
typedef BIT128		bit128;
#define SUPPORTED__BIT128
#endif /* __HAS_128_BIT__ */

#ifdef __GNUC__
#ifdef __SIZEOF_LONG_DOUBLE__
#if (__SIZEOF_LONG_DOUBLE__ == 12)
typedef long double	FLOAT128;
#define SUPPORTED__FLOAT128
#endif /* __SIZEOF_LONG_DOUBLE__ >= 12 */
#endif /* __SIZEOF_LONG_DOUBLE__ */
#endif /* __GNUC__ */
#endif /* !TYPES_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
