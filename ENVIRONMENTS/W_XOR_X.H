/******************************************************************************\
# H - W_XOR_X                                    #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/07/04 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/07/06 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 W_XOR_X                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| COMPILE-TIME DETECTION OF PLATFORM-ENFORCED W^X MEMORY POLICY.           |*|
|*|                                                                          |*|
|*| THIS ONLY COVERS PLATFORMS WITH DEFAULT, OUT-OF-THE-BOX ENFORCEMENT.     |*|
|*|                                                                          |*|
|*| OPTIONAL/OPT-IN MECHANISMS (LINUX GRSECURITY/PAX MPROTECT, WINDOWS ACG,  |*|
|*| ANDROID PER-SDK-LEVEL POLICY, NETBSD PAX) DEPEND ON RUNTIME OR BUILD     |*|
|*| CONFIGURATION THIS FILE CANNOT SEE, SO THEY ARE LEFT UNDEFINED HERE --   |*|
|*| CHECK FOR THEM YOURSELF IF RELEVANT.                                     |*|
|*|                                                                          |*|
|*| SEE PLATFORM-SPECIFIC MEMORY PROTECTION APIS IN YOUR OWN CODE FOR HOW TO |*|
|*| ACTUALLY ALLOCATE/TRANSITION MEMORY ON EACH PLATFORM                     |*|
|*|       ____ _______   ____________ ______________                         |*|
|*| (E.G. mmap/mprotect, VirtualAlloc/VirtualProtect,                        |*|
|*| pthread_jit_write_protect_np).                                           |*|
|*| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^                                             |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define W_XOR_X                                               | 55       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define W_NOT_TO_X                                            | 67       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define IS_W_XOR_X                                            | 82       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define IS_W_NOT_TO_X                                         | 95       |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: W_XOR_X :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define W_XOR_X                                                     : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED IF A MEMORY PAGE CAN ONLY EVER BE RW OR RX, NEVER RWX AT THE   : *|
|* : SAME TIME, AS ENFORCED BY THE OS.                                      : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ..............                               *|
|* ..............................: W_NOT_TO_X :.............................. *|
|* :                             ''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define W_NOT_TO_X                                                  : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED IF A PAGE, ONCE WRITABLE, CAN NEVER BECOME EXECUTABLE AT ALL   : *|
|* : (NO W->X TRANSITION PERMITTED BY ANY MEANS, NOT EVEN DUAL-MAPPING).    : *|
|* :                                                                        : *|
|* : STRICTER THAN W_XOR_X; ONLY DEFINED WHERE THAT STRONGER GUARANTEE      : *|
|* : HOLDS.                                                                 : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ..............                               *|
|* ..............................: IS_W_XOR_X :.............................. *|
|* :                             ''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS_W_XOR_X                                                  : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : ALWAYS DEFINED, 0 OR 1. SAME INFORMATION AS W_XOR_X, USABLE IN RUNTIME : *|
|* : EXPRESSIONS (IF (IS_W_XOR_X)) WHERE A POSSIBLY-UNDEFINED MACRO CAN'T   : *|
|* : BE.                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             .................                              *|
|* ............................: IS_W_NOT_TO_X :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS_W_NOT_TO_X                                               : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : ALWAYS DEFINED, 0 OR 1. SAME INFORMATION AS W_NOT_TO_X, USABLE IN      : *|
|* : RUNTIME EXPRESSIONS (IF (IS_W_NOT_TO_X)) WHERE A POSSIBLY-UNDEFINED    : *|
|* : MACRO CAN'T BE.                                                        : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef W_XOR_X_H
#define W_XOR_X_H 202607 /* VERSION */

/* ***************************** [v] APPLE [v] ****************************** */
#ifdef __APPLE__
/* **************************** [v] INCLUDES [v] **************************** */
#include <TargetConditionals.h>
/******* """"""""""""""""""""""
 * #define TARGET_OS_IOS
 * #define TARGET_OS_TV
 * #define TARGET_OS_WATCH
 * #define TARGET_OS_VISION
 * #define TARGET_OS_OSX
 */
/* **************************** [^] INCLUDES [^] **************************** */

#if (TARGET_OS_IOS)
#define LOCALMACRO__W_NOT_TO_X
#else /* !TARGET_OS_IOS */
#if (TARGET_OS_TV)
#define LOCALMACRO__W_NOT_TO_X
#else /* !TARGET_OS_TV */
#if (TARGET_OS_WATCH)
#define LOCALMACRO__W_NOT_TO_X
#else /* !TARGET_OS_WATCH */
#if (TARGET_OS_VISION)
#define LOCALMACRO__W_NOT_TO_X
#endif /* TARGET_OS_VISION */
#endif /* TARGET_OS_WATCH */
#endif /* TARGET_OS_TV */
#endif /* TARGET_OS_IOS */

#ifdef LOCALMACRO__W_NOT_TO_X
#undef LOCALMACRO__W_NOT_TO_X
#define W_XOR_X
#define W_NOT_TO_X /* NO JIT ENTITLEMENT => NO W->X TRANSITION AT ALL */
#else /* !LOCALMACRO__W_NOT_TO_X */
#if (TARGET_OS_OSX)
#define W_XOR_X /* MAP_JIT + pthread_jit_write_protect_np() TOGGLING */
#endif /* TARGET_OS_OSX */
#endif /* LOCALMACRO__W_NOT_TO_X */
#endif /* __APPLE__ */
/* ***************************** [^] APPLE [^] ****************************** */

/* **************************** [v] OPENBSD [v] ***************************** */
#ifndef W_XOR_X
#ifdef __OpenBSD__
#define W_XOR_X
#endif /* __OpenBSD__ */
#endif /* !W_XOR_X */
/* **************************** [^] OPENBSD [^] ***************************** */

/* ************************** [v] HARDENEDBSD [v] *************************** */
#ifndef W_XOR_X
#ifdef __HardenedBSD__
#define W_XOR_X
#endif /* __HardenedBSD__ */
#endif /* !W_XOR_X */
/* ************************** [^] HARDENEDBSD [^] *************************** */

#ifdef W_XOR_X
#define IS_W_XOR_X 1
#else /* W_XOR_X */
#define IS_W_XOR_X 0
#endif /* !W_XOR_X */

#ifdef W_NOT_TO_X
#define IS_W_NOT_TO_X 1
#else /* W_NOT_TO_X */
#define IS_W_NOT_TO_X 0
#endif /* !W_NOT_TO_X */
#endif /* !W_XOR_X_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
