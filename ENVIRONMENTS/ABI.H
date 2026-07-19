/******************************************************************************\
# H - ABI                                        #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/09/15 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/07/18 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                   ABI                                    |*|
|*|__________________________________________________________________________|*|
|*|     ___                                                                  |*|
|*| THE ABI LAYER PROVIDES A CENTRALIZED SET OF MACROS AND DEFINITIONS THAT  |*|
|*| ADAPT LOW-LEVEL CODE TO THE TARGET PLATFORM'S APPLICATION BINARY         |*|
|*| INTERFACE.                                                               |*|
|*|                                                                          |*|
|*| IT DETECTS AND EXPOSES PLATFORM-SPECIFIC PROPERTIES INCLUDING:           |*|
|*|   __________                                                             |*|
|*| * ENDIANNESS (LITTLE-ENDIAN VS BIG-ENDIAN)                               |*|
|*|                                                                          |*|
|*|    LITTLE ENDIAN        vv vvvv vv | vv vvvv vv     BIG ENDIAN           |*|
|*|  ..................     :: 0x00 :: | :: 0x00 :: ..................       |*|
|*|  : 0x AB CD EF 12 :     :: 0x?? :: | :: 0x?? :: : 0x AB CD EF 12 :       |*|
|*|  :....||.||.||.||.:     :::::::::: | :::::::::: :....||.||.||.||.:       |*|
|*|       || || || ||       :: 0x01 :: | :: 0x01 ::      || || || ||         |*|
|*|       || || || ||       :: 0x?? :: | :: 0x?? ::      || || || ||         |*|
|*|       || || || ||       :::::::::: | ::::::::::      || || || ||         |*|
|*|       || || || \\       :: 0x02 :: | :: 0x02 ::      // || || ||         |*|
|*|       || || ||  \========>(0x12):: | ::(0xAB)<=======/  || || ||         |*|
|*|       || || ||          :::::::::: | ::::::::::         || || ||         |*|
|*|       || || \\          :: 0x03 :: | :: 0x03 ::         // || ||         |*|
|*|       || ||  \===========>(0xEF):: | ::(0xCD)<==========/  || ||         |*|
|*|       || ||             :::::::::: | ::::::::::            || ||         |*|
|*|       || \\             :: 0x04 :: | :: 0x04 ::            // ||         |*|
|*|       ||  \==============>(0xCD):: | ::(0xEF)<=============/  ||         |*|
|*|       ||                :::::::::: | ::::::::::               ||         |*|
|*|       \\                :: 0x05 :: | :: 0x05 ::               //         |*|
|*|        \=================>(0xAB):: | ::(0x12)<================/          |*|
|*|                         :::::::::: | ::::::::::                          |*|
|*|                         :: 0x06 :: | :: 0x06 ::                          |*|
|*|                         :: 0x?? :: | :: 0x?? ::                          |*|
|*|                         vv vvvv vv | vv vvvv vv                          |*|
|*|   ____________________                                                   |*|
|*| * REGISTER CONVENTIONS, ESPECIALLY CALLEE-SAVED VS CALLER-SAVED          |*|
|*|   REGISTERS                                                              |*|
|*|   ____________________________                                           |*|
|*| * FUNCTION CALLING CONVENTIONS, INCLUDING:                               |*|
|*| :                                                                        |*|
|*| :.. ARGUMENT PASSING (REGISTERS VS STACK, ORDERING)                      |*|
|*| :                                                                        |*|
|*| :.. RETURN VALUE MECHANISMS (REGISTERS, MULTIPLE REGISTERS, OR MEMORY)   |*|
|*|                                                                          |*|
|*| THESE DEFINITIONS ENSURE CONSISTENT BEHAVIOR ACROSS ARCHITECTURES AND    |*|
|*| OPERATING SYSTEMS BY ABSTRACTING ABI DIFFERENCES BEHIND A UNIFORM        |*|
|*| INTERFACE.                                                               |*|
|*|                                                                          |*|
|*| THE HEADER IS INTENDED FOR USE IN LOW-LEVEL SYSTEMS CODE, COMPILERS, OR  |*|
|*| CROSS-PLATFORM RUNTIMES WHERE DIRECT CONTROL OVER CALLING CONVENTIONS    |*|
|*| AND BINARY INTERFACES IS REQUIRED.                                       |*|
|*|                                                                          |*|
|*| INCORRECT ASSUMPTIONS ABOUT ABI DETAILS CAN LEAD TO SUBTLE CORRUPTION    |*|
|*| BUGS; THIS LAYER EXISTS TO MAKE THOSE CONSTRAINTS EXPLICIT AND           |*|
|*| ENFORCEABLE AT COMPILE TIME.                                             |*|
|*|                                                                          |*|
|*| STACK OFFSETS SHOWN ASSUME NO COMPILER-GENERATED PROLOGUE/EPILOGUE       |*|
|*| ADJUSTMENTS.                                                             |*|
|*|                                                                          |*|
|*| ACTUAL OFFSETS MAY VARY DEPENDING ON FUNCTION FRAME SETUP.               |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| ENDIANS                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define __ABI__LITTLE_ENDIAN__                                | 120      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define __ABI__BIG_ENDIAN__                                   | 140      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define __ABI__ENDIAN__                                       | 160      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|* __________________________________________________________________________ *|
|*| CALLEE-SAVED REGISTERS                                        | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define __ABI__CALLEE_SAVED_WINDOWS__                         | 173      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define __ABI__CALLEE_SAVED_UNIX__                            | 209      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|* __________________________________________________________________________ *|
|*| CALLER-SAVED REGISTERS                                        | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define __ABI__CALLER_SAVED_WINDOWS__                         | 261      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define __ABI__CALLER_SAVED_UNIX__                            | 291      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|* __________________________________________________________________________ *|
|*| ARGUMENT PASSING WAYS                                         | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define __ABI__PASS_REG_WINDOWS__                             | 333      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define __ABI__PASS_REG_UNIX__                                | 363      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define __ABI__PASS_STACK__                                   | 463      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                         ..........................                         *|
|* ........................: __ABI__LITTLE_ENDIAN__ :........................ *|
|* :                       ''''''''''''''''''''''''''                       : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__LITTLE_ENDIAN__                                      : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED WHEN THE TARGET ARCHITECTURE USES LITTLE-ENDIAN BYTE ORDER     : *|
|* : (LEAST SIGNIFICANT BYTE STORED FIRST).                                 : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [TEXT]                                                              : *|
|* : 1|                                                                     : *|
|* : 2|   Input         Output                                              : *|
|* : 3| 0xABCDEF12 -> 0x12EFCDAB                                            : *|
|* : 4|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                          .......................                           *|
|* .........................: __ABI__BIG_ENDIAN__ :.......................... *|
|* :                        '''''''''''''''''''''''                         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__BIG_ENDIAN__                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED WHEN THE TARGET ARCHITECTURE USES BIG-ENDIAN BYTE ORDER        : *|
|* : (MOST SIGNIFICANT BYTE STORED FIRST).                                  : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [TEXT]                                                              : *|
|* : 1|                                                                     : *|
|* : 2|   Input         Output                                              : *|
|* : 3| 0xABCDEF12 -> 0xABCDEF12                                            : *|
|* : 4|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                            ...................                             *|
|* ...........................: __ABI__ENDIAN__ :............................ *|
|* :                          '''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__ENDIAN__                                             : *|
|* : 3|                                                                     : *|
|* :         _    ______________________                    _               : *|
|* : DEFINED 1 IF __ABI__LITTLE_ENDIAN__ DEFINED OR DEFINED 2 IF            : *|
|* : __ABI__BIG_ENDIAN__ DEFINED.                                           : *|
|* : ^^^^^^^^^^^^^^^^^^^                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                     .................................                      *|
|* ....................: __ABI__CALLEE_SAVED_WINDOWS__ :..................... *|
|* :                   '''''''''''''''''''''''''''''''''                    : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__CALLEE_SAVED_WINDOWS__                               : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED FOR MICROSOFT WINDOWS PLATFORMS.                               : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 64-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * RBX, RBP, RDI, RSI, R12, R13, R14, AND R15 REGISTERS ARE            : *|
|* :    CALLEE-SAVED.                                                       : *|
|* :                                                                        : *|
|* :  * RSP STACK POINTER MUST BE PRESERVED (NOT TREATED AS A CALLEE-SAVED  : *|
|* :    GPR)                                                                : *|
|* :                                                                        : *|
|* :  * XMM6, XMM7, XMM8, XMM9, XMM10, XMM11, XMM12, XMM13, XMM14, AND      : *|
|* :    XMM15 FLOATING-POINT REGISTERS ARE CALLEE-SAVED.                    : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 32-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * EBX, EBP, EDI, AND ESI REGISTERS ARE CALLEE-SAVED.                  : *|
|* :                                                                        : *|
|* :  * ESP STACK POINTER MUST BE PRESERVED (NOT TREATED AS A CALLEE-SAVED  : *|
|* :    GPR)                                                                : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 16-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * BX, BP, DI, AND SI REGISTERS ARE CALLEE-SAVED.                      : *|
|* :                                                                        : *|
|* :  * SP STACK POINTER MUST BE PRESERVED (NOT TREATED AS A CALLEE-SAVED   : *|
|* :    GPR)                                                                : *|
|* :........................................................................: *|
|*                                                                            *|
|*                       ..............................                       *|
|* ......................: __ABI__CALLEE_SAVED_UNIX__ :...................... *|
|* :                     ''''''''''''''''''''''''''''''                     : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__CALLEE_SAVED_UNIX__                                  : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED FOR COMMON UNIX-LIKE ABIS (E.G., SYSTEM V ABI).                : *|
|* :                                                                        : *|
|* : PLATFORM-SPECIFIC VARIATIONS MAY EXIST.                                : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 64-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * RBX, RBP, R12, R13, R14, AND R15 REGISTERS ARE CALLEE-SAVED.        : *|
|* :                                                                        : *|
|* :  * RSP STACK POINTER MUST BE PRESERVED (NOT TREATED AS A CALLEE-SAVED  : *|
|* :    GPR)                                                                : *|
|* :                                                                        : *|
|* :  * XMM6, XMM7, XMM8, XMM9, XMM10, XMM11, XMM12, XMM13, XMM14, AND      : *|
|* :    XMM15 FLOATING-POINT REGISTERS ARE CALLEE-SAVED.                    : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 32-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * EBX, EBP, EDI, AND ESI REGISTERS ARE CALLEE-SAVED.                  : *|
|* :                                                                        : *|
|* :  * ESP STACK POINTER MUST BE PRESERVED (NOT TREATED AS A CALLEE-SAVED  : *|
|* :    GPR)                                                                : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 16-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * BX, BP, DI, AND SI REGISTERS ARE CALLEE-SAVED.                      : *|
|* :                                                                        : *|
|* :  * SP STACK POINTER MUST BE PRESERVED (NOT TREATED AS A CALLEE-SAVED   : *|
|* :    GPR)                                                                : *|
|* :                                                                        : *|
|* : FOR POWERPC CPU - 32-BIT AND 64-BIT ARCHITECTURES:                     : *|
|* :                                                                        : *|
|* :  * R14, R15, R16, R17, R18, R19, R20, R21, R22, R23, R24, R25, R26,    : *|
|* :    R27, R28, R29, R30, AND R31 REGISTERS ARE CALLEE-SAVED.             : *|
|* :                                                                        : *|
|* :  * R1 (STACK POINTER - MUST ALWAYS BE PRESERVED)                       : *|
|* :                                                                        : *|
|* :  * R2 (TOC POINTER ON PPC64 - IMPORTANT IN MANY ENVIRONMENTS)          : *|
|* :                                                                        : *|
|* :  * R13 (OFTEN USED AS SMALL DATA POINTER, PLATFORM-DEPENDENT)          : *|
|* :                                                                        : *|
|* :  * F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24, F25, F26,    : *|
|* :    F27, F28, F29, F30, AND F31 FLOATING-POINT REGISTERS ARE            : *|
|* :    CALLEE-SAVED.                                                       : *|
|* :........................................................................: *|
|*                                                                            *|
|*                     .................................                      *|
|* ....................: __ABI__CALLER_SAVED_WINDOWS__ :..................... *|
|* :                   '''''''''''''''''''''''''''''''''                    : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__CALLER_SAVED_WINDOWS__                               : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED FOR MICROSOFT WINDOWS PLATFORMS.                               : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 64-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * RAX, RCX, RDX, R8, R9, R10, AND R11 REGISTERS ARE CALLER-SAVED.     : *|
|* :                                                                        : *|
|* :  * XMM0, XMM1, XMM2, XMM3, XMM4, AND XMM5 FLOATING-POINT REGISTERS ARE : *|
|* :    CALLER-SAVED.                                                       : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 32-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * EAX, ECX, AND EDX REGISTERS ARE CALLER-SAVED.                       : *|
|* :                                                                        : *|
|* :  * XMM0, XMM1, XMM2, XMM3, XMM4, XMM5, XMM6, AND XMM7 FLOATING-POINT   : *|
|* :    REGISTERS ARE CALLER-SAVED.                                         : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 16-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * AX, CX, AND DX REGISTERS ARE COMMONLY TREATED AS CALLER-SAVED IN    : *|
|* :    TYPICAL 16-BIT CALLING CONVENTIONS.                                 : *|
|* :........................................................................: *|
|*                                                                            *|
|*                       ..............................                       *|
|* ......................: __ABI__CALLER_SAVED_UNIX__ :...................... *|
|* :                     ''''''''''''''''''''''''''''''                     : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__CALLER_SAVED_UNIX__                                  : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED FOR COMMON UNIX-LIKE ABIS (E.G., SYSTEM V ABI).                : *|
|* :                                                                        : *|
|* : PLATFORM-SPECIFIC VARIATIONS MAY EXIST.                                : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 64-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * RAX, RCX, RDX, RSI, RDI, R8, R9, R10, AND R11 REGISTERS ARE         : *|
|* :    CALLER-SAVED.                                                       : *|
|* :                                                                        : *|
|* :  * XMM0, XMM1, XMM2, XMM3, XMM4, AND XMM5 FLOATING-POINT REGISTERS ARE : *|
|* :    CALLER-SAVED.                                                       : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 32-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * EAX, ECX, AND EDX REGISTERS ARE CALLER-SAVED.                       : *|
|* :                                                                        : *|
|* :  * XMM0, XMM1, XMM2, XMM3, XMM4, XMM5, XMM6, AND XMM7 FLOATING-POINT   : *|
|* :    REGISTERS ARE CALLER-SAVED IF SSE IS USED.                          : *|
|* :                               ^^^^^^^^^^^^^^                           : *|
|* : FOR INTEL CPU - 16-BIT ARCHITECTURE:                                   : *|
|* :                                                                        : *|
|* :  * AX, CX, AND DX, REGISTERS ARE CALLER-SAVED.                         : *|
|* :                                                                        : *|
|* :  * (FPU/X87 IS CALLER-MANAGED IN PRACTICE)                             : *|
|* :                                                                        : *|
|* : FOR POWERPC CPU - 32-BIT AND 64-BIT ARCHITECTURES:                     : *|
|* :                                                                        : *|
|* :  * R0, R3, R4, R5, R6, R7, R8, R9, R10, R11, AND R12 REGISTERS ARE     : *|
|* :    CALLER-SAVED.                                                       : *|
|* :                                                                        : *|
|* :  * F0, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, AND F13      : *|
|* :    FLOATING-POINT REGISTERS ARE CALLER-SAVED.                          : *|
|* :........................................................................: *|
|*                                                                            *|
|*                       .............................                        *|
|* ......................: __ABI__PASS_REG_WINDOWS__ :....................... *|
|* :                     '''''''''''''''''''''''''''''                      : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__PASS_REG_WINDOWS__                                   : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED FOR WINDOWS PLATFORM                                           : *|
|* :                                                                        : *|
|* : FOR INTEL CPU - 64-BIT ARCHITECTURE:                                   : *|
|* :                  ___________________________________                   : *|
|* :                 | ARGUMENT INDEX | REGISTER / STACK |                  : *|
|* :                 |================|==================|                  : *|
|* :                 | 1              | RCX              |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 2              | RDX              |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 3              | R8               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 4              | R9               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 5              | [RSP + 40]       |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 6              | [RSP + 48]       |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | ...            | [RSP + ...]      |                  : *|
|* :                 |________________|__________________|                  : *|
|* :........................................................................: *|
|*                                                                            *|
|*                         ..........................                         *|
|* ........................: __ABI__PASS_REG_UNIX__ :........................ *|
|* :                       ''''''''''''''''''''''''''                       : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__PASS_REG_UNIX__                                      : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED FOR ANY UNIX PLATFORM.                                         : *|
|* :                _______________________________________                 : *|
|* :               \                                       /                : *|
|* :                \ FOR INTEL CPU - 64-BIT ARCHITECTURE /                 : *|
|* :                 \___________________________________/                  : *|
|* :                 | ARGUMENT INDEX | REGISTER / STACK |                  : *|
|* :                 |================|==================|                  : *|
|* :                 | 1              | RDI              |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 2              | RSI              |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 3              | RDX              |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 4              | RCX              |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 5              | R8               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 6              | R9               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 7              | [RSP + 16]       |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 8              | [RSP + 24]       |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | ...            | [RSP + ...]      |                  : *|
|* :                 [________________|__________________]                  : *|
|* :                 /                                   \                  : *|
|* :                /       RETURN REGISTER IS RAX        \                 : *|
|* :               /_______________________________________\                : *|
|* :                                                                        : *|
|* :                _______________________________________                 : *|
|* :               \     F O R   P O W E R P C   C P U     /                : *|
|* :                \         32-BIT ARCHITECTURE         /                 : *|
|* :                 \___________________________________/                  : *|
|* :                 | ARGUMENT INDEX | REGISTER / STACK |                  : *|
|* :                 |================|==================|                  : *|
|* :                 | 1              | R3               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 2              | R4               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 3              | R5               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 4              | R6               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 5              | R7               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 6              | R8               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 7              | R9               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 8              | R10              |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 9              | 8(R1)            |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 10             | 12(R1)           |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | ...            | ...(R1)          |                  : *|
|* :                 [________________|__________________]                  : *|
|* :                 /                                   \                  : *|
|* :                /        RETURN REGISTER IS R3        \                 : *|
|* :               /_______________________________________\                : *|
|* :               \     F O R   P O W E R P C   C P U     /                : *|
|* :                \         64-BIT ARCHITECTURE         /                 : *|
|* :                 \___________________________________/                  : *|
|* :                 | ARGUMENT INDEX | REGISTER / STACK |                  : *|
|* :                 |================|==================|                  : *|
|* :                 | 1              | R3               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 2              | R4               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 3              | R5               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 4              | R6               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 5              | R7               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 6              | R8               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 7              | R9               |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 8              | R10              |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 9              | 16(R1)           |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 10             | 24(R1)           |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | ...            | ...(R1)          |                  : *|
|* :                 [________________|__________________]                  : *|
|* :                 /                                   \                  : *|
|* :                /        RETURN REGISTER IS R3        \                 : *|
|* :               /_______________________________________\                : *|
|* :........................................................................: *|
|*                                                                            *|
|*                          .......................                           *|
|* .........................: __ABI__PASS_STACK__ :.......................... *|
|* :                        '''''''''''''''''''''''                         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __ABI__PASS_STACK__                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED FOR ANY UNIX OR WINDOWS PLATFORM.                              : *|
|* :               _________________________________________                : *|
|* :               \                                       /                : *|
|* :                \ FOR INTEL CPU - 32-BIT ARCHITECTURE /                 : *|
|* :                 \___________________________________/                  : *|
|* :                 | ARGUMENT INDEX | REGISTER / STACK |                  : *|
|* :                 |================|==================|                  : *|
|* :                 | 1              | [ESP + 8]        |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 2              | [ESP + 12]       |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 3              | [ESP + 16]       |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | ...            | [ESP + ...]      |                  : *|
|* :                 [________________|__________________]                  : *|
|* :                 /                                   \                  : *|
|* :                /                                     \                 : *|
|* :               /_______________________________________\                : *|
|* :               \                                       /                : *|
|* :                \ FOR INTEL CPU - 16-BIT ARCHITECTURE /                 : *|
|* :                 \___________________________________/                  : *|
|* :                 | ARGUMENT INDEX | REGISTER / STACK |                  : *|
|* :                 |================|==================|                  : *|
|* :                 | 1              | [BP + 4]         |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 2              | [BP + 6]         |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | 3              | [BP + 8]         |                  : *|
|* :                 |----------------|------------------|                  : *|
|* :                 | ...            | [BP + ...]       |                  : *|
|* :                 |________________|__________________|                  : *|
|* :                                                                        : *|
|* : TO BE HONEST, THIS IS A "TEACHING SHORTCUT", NOT A SPEC.               : *|
|* :                                                                        : *|
|* : LIKE FOR INTEL 16-BIT CPU, THIS STACK ADDRESS LAYOUT IS NOT ALWAYS     : *|
|* : SAME THANKS TO FAR POINTERS WHICH MOSTLY USED.                         : *|
|* :                                                                        : *|
|* : AND ARGUMENTS ARE LOCATED ACCORDING TO A CALLING CONVENTION, WHICH     : *|
|* : DEFINES STACK FRAME LAYOUT.                                            : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef ABI_H
#define ABI_H 202607 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "PLATFORM.H"
/******* """"""""""""
 * #define __PLATFORM_BSD_ENVIRONMENT__
 * #define __PLATFORM_BSD_OS__
 * #define __PLATFORM_DRAGONFLY__
 * #define __PLATFORM_FREEBSD__
 * #define __PLATFORM_GNU_KFREEBSD__
 * #define __PLATFORM_GNU_LINUX__
 * #define __PLATFORM_LINUX_KERNEL__
 * #define __PLATFORM_MACOS__
 * #define __PLATFORM_OPENBSD__
 * #define __PLATFORM_SOLARIS__
 * #define __PLATFORM_SVR4_ENVIRONMENT__
 * #define __PLATFORM_UNIX_ENVIRONMENT__
 * #define __PLATFORM_UNIXWARE__
 * #define __PLATFORM_UWIN_ENVIRONMENT__
 * #define __PLATFORM_VMS__
 * #define __PLATFORM_VXWORKS__
 * #define __PLATFORM_WINDOWS__
 * #define __PLATFORM_WINDOWS_CE__
 * #define __PLATFORM_WINDU_ENVIRONMENT__
 */
#include "ARCHITECTURE.H"
/******* """"""""""""""""
 * #define __CPU_INTEL__
 * #define __CPU_POWERPC__
 */
#include "CPU.H"
/******* """""""
 * #define __SYSTEM_64_BIT__
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __CPU_INTEL__
#define LOCALMACRO__WINDOWS
#define LOCALMACRO__UNIX
#endif /* __CPU_INTEL__ */

#ifdef __CPU_POWERPC__
#define LOCALMACRO__UNIX
#endif /* __CPU_POWERPC__ */

#ifdef LOCALMACRO__WINDOWS
#undef LOCALMACRO__WINDOWS
#ifdef __PLATFORM_WINDOWS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__WINDOWS
#else /* !__PLATFORM_WINDOWS__ */
#ifdef __PLATFORM_WINDOWS_CE__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__WINDOWS
#else /* !__PLATFORM_WINDOWS_CE__ */
#ifdef __PLATFORM_WINDU_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__WINDOWS
#endif /* __PLATFORM_WINDU_ENVIRONMENT__ */
#endif /* __PLATFORM_WINDOWS_CE__ */
#endif /* __PLATFORM_WINDOWS__ */
#endif /* LOCALMACRO__WINDOWS */

#ifdef LOCALMACRO__UNIX
#undef LOCALMACRO__UNIX
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_GNU_LINUX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_GNU_LINUX__ */
#ifdef __PLATFORM_LINUX_KERNEL__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_LINUX_KERNEL__ */
#ifdef __PLATFORM_FREEBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_FREEBSD__ */
#ifdef __PLATFORM_NETBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_NETBSD__ */
#ifdef __PLATFORM_OPENBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_OPENBSD__ */
#ifdef __PLATFORM_DRAGONFLY__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_DRAGONFLY__ */
#ifdef __PLATFORM_BSD_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_BSD_ENVIRONMENT__ */
#ifdef __PLATFORM_MACOS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_MACOS__ */
#ifdef __PLATFORM_SOLARIS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_SOLARIS__ */
#ifdef __PLATFORM_UNIXWARE__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_UNIXWARE__ */
#ifdef __PLATFORM_SVR4_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_SVR4_ENVIRONMENT__ */
#ifdef __PLATFORM_GNU_KFREEBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#else /* !__PLATFORM_GNU_KFREEBSD__ */
#ifdef __PLATFORM_UNIX_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__UNIX
#endif /* __PLATFORM_UNIX_ENVIRONMENT__ */
#endif /* __PLATFORM_GNU_KFREEBSD__ */
#endif /* __PLATFORM_SVR4_ENVIRONMENT__ */
#endif /* __PLATFORM_UNIXWARE__ */
#endif /* __PLATFORM_SOLARIS__ */
#endif /* __PLATFORM_MACOS__ */
#endif /* __PLATFORM_BSD_ENVIRONMENT__ */
#endif /* __PLATFORM_DRAGONFLY__ */
#endif /* __PLATFORM_OPENBSD__ */
#endif /* __PLATFORM_NETBSD__ */
#endif /* __PLATFORM_FREEBSD__ */
#endif /* __PLATFORM_LINUX_KERNEL__ */
#endif /* __PLATFORM_GNU_LINUX__ */
#endif /* LOCALMACRO__PLATFORM_FOUND */
#endif /* LOCALMACRO__UNIX */

#ifndef LOCALMACRO__PLATFORM_FOUND
#warning "CMT - ABI.H: PLATFORM NOT FOUND. USING UNIX ABI AS DEFAULT"
#define LOCALMACRO__UNIX
#else /* LOCALMACRO__PLATFORM_FOUND */
#undef LOCALMACRO__PLATFORM_FOUND
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifdef LOCALMACRO__WINDOWS
#undef LOCALMACRO__WINDOWS
#define __ABI__CALLEE_SAVED_WINDOWS__
#define __ABI__CALLER_SAVED_WINDOWS__
#ifdef __CPU_INTEL__
#ifdef __SYSTEM_64_BIT__
#define __ABI__PASS_REG_WINDOWS__
#else /* !__SYSTEM_64_BIT__ */
#define __ABI__PASS_STACK__
#endif /* __SYSTEM_64_BIT__ */
#endif /* __CPU_INTEL__ */
#endif /* LOCALMACRO__WINDOWS */

#ifdef LOCALMACRO__UNIX
#undef LOCALMACRO__UNIX
#define __ABI__CALLEE_SAVED_UNIX__
#define __ABI__CALLER_SAVED_UNIX__
#ifdef __CPU_POWERPC__
#define __ABI__PASS_REG_UNIX__
#else /* !__CPU_POWERPC__ */
#ifdef __CPU_INTEL__
#ifdef __SYSTEM_64_BIT__
#define __ABI__PASS_REG_UNIX__
#else /* !__SYSTEM_64_BIT__ */
#define __ABI__PASS_STACK__
#endif /* __SYSTEM_64_BIT__ */
#endif /* __CPU_INTEL__ */
#endif /* __CPU_POWERPC__ */
#endif /* LOCALMACRO__UNIX */

/* *************************** [v] ENDIANNESS [v] *************************** */
#ifdef __has_include
#if (__has_include(<endian.h>))
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#endif /* __has_include(<endian.h>) */
#endif /* __has_include */

#ifndef LOCALMACRO__INCLUDE_BYTE_ORDER
#ifdef __linux__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#else /* !__linux__ */
#ifdef __GLIBC__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#else /* !__GLIBC__ */
#ifdef __UCLIBC__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#else /* !__UCLIBC__ */
#ifdef __BIONIC__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#endif /* __BIONIC__ */
#endif /* __UCLIBC__ */
#endif /* __GLIBC__ */
#endif /* __linux__ */
#endif /* !LOCALMACRO__INCLUDE_BYTE_ORDER */

#ifdef LOCALMACRO__INCLUDE_BYTE_ORDER
#undef LOCALMACRO__INCLUDE_BYTE_ORDER

#include <endian.h>
/******* """"""""""
 * #define __BYTE_ORDER
 * #define __BIG_ENDIAN
 * #define __LITTLE_ENDIAN
 * or
 * #define BYTE_ORDER
 * #define BIG_ENDIAN
 * #define LITTLE_ENDIAN
 */

#else /* !LOCALMACRO__INCLUDE_BYTE_ORDER */

#ifdef __PLATFORM_BSD_ENVIRONMENT__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#else /* !__PLATFORM_BSD_ENVIRONMENT__ */
#ifdef __PLATFORM_BSD_OS__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#else /* !__PLATFORM_BSD_OS__ */
#ifdef __PLATFORM_FREEBSD__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#else /* !__PLATFORM_FREEBSD__ */
#ifdef __PLATFORM_GNU_KFREEBSD__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#else /* !__PLATFORM_GNU_KFREEBSD__ */
#ifdef __PLATFORM_NETBSD__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#else /* !__PLATFORM_NETBSD__ */
#ifdef __PLATFORM_OPENBSD__
#define LOCALMACRO__INCLUDE_BYTE_ORDER
#endif /* __PLATFORM_OPENBSD__ */
#endif /* __PLATFORM_NETBSD__ */
#endif /* __PLATFORM_GNU_KFREEBSD__ */
#endif /* __PLATFORM_FREEBSD__ */
#endif /* __PLATFORM_BSD_OS__ */
#endif /* __PLATFORM_BSD_ENVIRONMENT__ */

#ifdef LOCALMACRO__INCLUDE_BYTE_ORDER
#include <sys/param.h>
/******* """""""""""""
 * #define BYTE_ORDER
 * #define BIG_ENDIAN
 * #define LITTLE_ENDIAN
 */
#undef LOCALMACRO__INCLUDE_BYTE_ORDER
#endif /* LOCALMACRO__INCLUDE_BYTE_ORDER */
#endif /* LOCALMACRO__INCLUDE_BYTE_ORDER */

#ifdef _BIG_ENDIAN
#define LOCALMACRO__BIG_ENDIAN
#else /* !_BIG_ENDIAN */
#ifdef __BIG_ENDIAN__
#define LOCALMACRO__BIG_ENDIAN
#else /* !__BIG_ENDIAN__ */
#ifdef _LITTLE_ENDIAN
#define LOCALMACRO__LITTLE_ENDIAN
#else /* !_LITTLE_ENDIAN */
#ifdef __LITTLE_ENDIAN__
#define LOCALMACRO__LITTLE_ENDIAN
#else /* !__LITTLE_ENDIAN__ */
#ifdef __BYTE_ORDER__
#define LOCALMACRO__BYTE_ORDER __BYTE_ORDER__
#define LOCALMACRO__BIG_ORDERING __ORDER_BIG_ENDIAN__
#define LOCALMACRO__LITTLE_ORDERING __ORDER_LITTLE_ENDIAN__
#else /* !__BYTE_ORDER__ */
#ifdef __BYTE_ORDER
#define LOCALMACRO__BYTE_ORDER __BYTE_ORDER
#define LOCALMACRO__BIG_ORDERING __BIG_ENDIAN
#define LOCALMACRO__LITTLE_ORDERING __LITTLE_ENDIAN
#else /* !__BYTE_ORDER */
#ifdef _BYTE_ORDER
#define LOCALMACRO__BYTE_ORDER _BYTE_ORDER
#define LOCALMACRO__BIG_ORDERING _BIG_ENDIAN
#define LOCALMACRO__LITTLE_ORDERING _LITTLE_ENDIAN
#else /* !_BYTE_ORDER */
#ifdef BYTE_ORDER
#define LOCALMACRO__BYTE_ORDER BYTE_ORDER
#define LOCALMACRO__BIG_ORDERING BIG_ENDIAN
#define LOCALMACRO__LITTLE_ORDERING LITTLE_ENDIAN
#endif /* BYTE_ORDER */
#endif /* _BYTE_ORDER */
#endif /* __BYTE_ORDER */
#endif /* __BYTE_ORDER__ */
#endif /* __LITTLE_ENDIAN__ */
#endif /* _LITTLE_ENDIAN */
#endif /* __BIG_ENDIAN__ */
#endif /* _BIG_ENDIAN */

#ifdef LOCALMACRO__LITTLE_ENDIAN
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#undef LOCALMACRO__LITTLE_ENDIAN
#else /* !LOCALMACRO__LITTLE_ENDIAN */
#ifdef LOCALMACRO__BIG_ENDIAN
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#undef LOCALMACRO__BIG_ENDIAN
#else /* !LOCALMACRO__BIG_ENDIAN */
#ifdef LOCALMACRO__BYTE_ORDER

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_MIPS__
#ifdef __MIPSEL__
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#else /* !__MIPSEL__ */

#ifdef __MIPSEB__
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#else /* !__MIPSEB__ */
#ifdef _MIPSEL
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#else /* !_MIPSEL */
#ifdef __MIPSEL
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#else /* !__MIPSEL */
#ifdef __MIPSEB
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#else /* !__MIPSEB */
#ifdef _MIPSEB
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#endif /* _MIPSEB */
#endif /* __MIPSEB */
#endif /* __MIPSEB__ */
#endif /* __MIPSEL */
#endif /* _MIPSEL */
#endif /* __MIPSEL__ */
#endif /* __CPU_MIPS__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_POWERPC__
#ifdef LOCALMACRO__BYTE_ORDER
#if (LOCALMACRO__BYTE_ORDER == LOCALMACRO__LITTLE_ORDERING)
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#else /* LOCALMACRO__BYTE_ORDER != LOCALMACRO__LITTLE_ORDERING */
#if (LOCALMACRO__BYTE_ORDER == LOCALMACRO__BIG_ORDERING)
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#endif /* LOCALMACRO__BYTE_ORDER == LOCALMACRO__BIG_ORDERING */
#endif /* LOCALMACRO__BYTE_ORDER == LOCALMACRO__LITTLE_ORDERING */
#endif /* LOCALMACRO__BYTE_ORDER */
#endif /* __CPU_POWERPC__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_ARM__
#ifdef __ARMEL__
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#else /* !__ARMEL__ */
#ifdef __AARCH64EL__
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#else /* !__AARCH64EL__ */
#ifdef __THUMBEL__
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#else /* !__THUMBEL__ */
#ifdef __ARMEB__
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#else /* !__ARMEB__ */
#ifdef __AARCH64EB__
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#else /* !__AARCH64EB__ */
#ifdef __THUMBEB__
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#endif /* __THUMBEB__ */
#endif /* __AARCH64EB__ */
#endif /* __ARMEB__ */
#endif /* __THUMBEL__ */
#endif /* __AARCH64EL__ */
#endif /* __ARMEL__ */
#endif /* __CPU_ARM__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_INTEL__
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#endif /* __CPU_INTEL__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_RISCV__
#ifdef LOCALMACRO__BYTE_ORDER
#if (LOCALMACRO__BYTE_ORDER == LOCALMACRO__BIG_ORDERING)
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#else /* LOCALMACRO__BYTE_ORDER != LOCALMACRO__BIG_ORDERING */
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#endif /* LOCALMACRO__BYTE_ORDER == LOCALMACRO__BIG_ORDERING */
#else /* !LOCALMACRO__BYTE_ORDER */ /* DEFAULT */
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#endif /* LOCALMACRO__BYTE_ORDER */
#endif /* __CPU_RISCV__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_SPARC__
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#endif /* __CPU_SPARC__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_M68K__
#define LOCALMACRO__ENDIAN
#define __ABI__BIG_ENDIAN__
#define __ABI__ENDIAN__ 2
#endif /* __CPU_M68K__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_BLACKFIN__
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#endif /* __CPU_BLACKFIN__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_6502__
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#endif /* __CPU_6502__ */
#endif /* !LOCALMACRO__ENDIAN */

#ifndef LOCALMACRO__ENDIAN
#ifdef __CPU_Z80__
#define LOCALMACRO__ENDIAN
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#endif /* __CPU_Z80__ */
#endif /* !LOCALMACRO__ENDIAN */

#undef LOCALMACRO__BYTE_ORDER
#undef LOCALMACRO__BIG_ORDERING
#undef LOCALMACRO__LITTLE_ORDERING

#endif /* LOCALMACRO__BYTE_ORDER */
#endif /* LOCALMACRO__BIG_ENDIAN */
#endif /* LOCALMACRO__LITTLE_ENDIAN */

#ifndef LOCALMACRO__ENDIAN /* DEFAULT */
#warning "CMT - ABI.H: ENDIAN NOT FOUND. USING DEFAULT SETTINGS: LITTLE ENDIAN."
#define __ABI__LITTLE_ENDIAN__
#define __ABI__ENDIAN__ 1
#else /* LOCALMACRO__ENDIAN */
#undef LOCALMACRO__ENDIAN
#endif /* !LOCALMACRO__ENDIAN */
/* *************************** [^] ENDIANNESS [^] *************************** */
#endif /* !ABI_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
