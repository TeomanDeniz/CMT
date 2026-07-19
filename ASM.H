/******************************************************************************\
# H - ASM                                        #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2024/02/27 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/23 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                   ASM                                    |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS HEADER PROVIDES A UNIFIED MACRO LAYER THAT LETS YOU WRITE INLINE    |*|
|*| ASSEMBLY WITH MINIMAL COMPILER-SPECIFIC BOILERPLATE.                     |*|
|*|                                                                          |*|
|*| THE SYSTEM:                                                              |*|
|*| - DETECTS COMPILER ASM SUPPORT                                           |*|
|*| - DETECTS ARCHITECTURE: 16-BIT / 32-BIT / 64-BIT                         |*|
|*| - DETECTS BACKEND SYNTAX: AT&T, INTEL, OR MSVC INLINE ASM                |*|
|*| - DEFINES STABLE MACRO KEYWORDS SO YOUR ASM BLOCKS STAY PORTABLE         |*|
|*|                                                                          |*|
|*| THIS ALLOWS YOU TO CREATE SECTIONS (FUNCTIONS) THAT ARE ENTIRELY BUILT   |*|
|*| WITH ASSEMBLY CODE, USING A SINGLE STANDARD SYNTAX, ACROSS COMPILERS.    |*|
|*|                                                                          |*|
|*| IF INLINE ASSEMBLY DOESN'T SUPPORTED BY YOUR COMPILER, WORRY NOT.        |*|
|*| THIS SYSTEM WILL ENSURE YOUR PROGRAM SUPPORTS IT.                        |*|
|*|                                                                          |*|
|*| WHAT THIS SYSTEM DOES:                                                   |*|
|*| :.., ENSURES YOUR INLINE ASM CAN COMPILE ACROSS:                         |*|
|*| :  :                                                                     |*|
|*| :  :.. GCC / CLANG (AT&T SYNTAX)                                         |*|
|*| :  :                                                                     |*|
|*| :  :.. ICC (AT&T OR INTEL DEPENDING ON BUILD)                            |*|
|*| :  :                                                                     |*|
|*| :  :.. MSVC (__ASM{} INTEL SYNTAX)                                       |*|
|*| :                                                                        |*|
|*| :.. PROVIDES STABLE NAMES FOR REGISTERS THAT CHANGE SIZE ACROSS          |*|
|*| :   ARCHITECTURES                                                        |*|
|*| :                                                                        |*|
|*| :.. ALLOWS MACRO-STYLE 8/16/32/64-BIT OPS WITHOUT MANUAL SYNTAX          |*|
|*| :   BRANCHING                                                            |*|
|*| :                                                                        |*|
|*| :.. PROVIDES UNIFIED MEMORY ADDRESSING PATTERNS                          |*|
|*| :                                                                        |*|
|*| :.. ENABLES PLATFORM-INDEPENDENT SECTION CREATION FOR ASM ENTRY POINTS   |*|
|*|                                                                          |*|
|*| ######################################################################## |*|
|*| #           COMPILE-TIME MODULE SELECTION SYSTEM (IMPORTANT)           # |*|
|*| ######################################################################## |*|
|*| #                                                                      # |*|
|*| # THIS MODULE USES A COMPILE-TIME INCLUSION MODEL TO REDUCE BUILD COST # |*|
|*| # AND ALLOW SELECTIVE OPCODE FEATURE ACTIVATION.                       # |*|
|*| #                                                                      # |*|
|*| # INSTEAD OF COMPILING THE FULL INSTRUCTION SET, THE SYSTEM USES       # |*|
|*| # MACRO-GATED FEATURE FLAGS:                                           # |*|
|*| #                                                                      # |*|
|*| #   v [C LANGUAGE]                                                     # |*|
|*| #  1|                                                                  # |*|
|*| #  2| #define INCL_CMT_ASM_ADD                                         # |*|
|*| #  3|                                                                  # |*|
|*| #  4| #define INCL_CMT_ASM_OP                                          # |*|
|*| #  5| #define INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER                     # |*|
|*| #  6|                                                                  # |*|
|*| #  7| #include <CMT/ASM.H>                                             # |*|
|*| #  8|                                                                  # |*|
|*| #  9| ...                                                              # |*|
|*| # 10|                                                                  # |*|
|*| #                                                                      # |*|
|*| # OR                                                                   # |*|
|*| #                                                                      # |*|
|*| #   v [C LANGUAGE]                                                     # |*|
|*| #  1|                                                                  # |*|
|*| #  2| #define INCL_CMT_ASM_ADD                                         # |*|
|*| #  3| #define INCL_CMT_ASM_OTHERS                                      # |*|
|*| #  4|                                                                  # |*|
|*| #  5| #define INCL_CMT_ASM_INLINE                                      # |*|
|*| #  6| #define INCL_CMT_ASM_SIZEOF                                      # |*|
|*| #  7|                                                                  # |*|
|*| #  8| #include <CMT/ASM.H>                                             # |*|
|*| #  9|                                                                  # |*|
|*| # 10| ...                                                              # |*|
|*| # 11|                                                                  # |*|
|*| #                                                                      # |*|
|*| # EACH FEATURE GROUP IS GUARDED BY NESTED PREPROCESSOR SWITCHES:       # |*|
|*| #                                                                      # |*|
|*| #  v [C LANGUAGE]                                                      # |*|
|*| # 1|                                                                   # |*|
|*| # 2| #ifdef INCL_CMT_ASM_ADD                                           # |*|
|*| # 3| #include "INTEL/ADD.INL"                                          # |*|
|*| # 4| #endif                                                            # |*|
|*| # 5|                                                                   # |*|
|*| #                      _____                                           # |*|
|*| # IN DIRECT INCLUDE OF ASM.H, IT IS GOING TO INCLUDE EVERYTHING        # |*|
|*| # AUTOMATICALLY. WE ARE NOT SUGGESTING TO DIRECTLY INCLUDE ASM.H       # |*|
|*| # WITHOUT MACRO-GATED FEATURE FLAGS.                       ^^^^^       # |*|
|*| #                                                                      # |*|
|*| # O THE GOAL OF THIS PURPOSE IS:                                       # |*|
|*| # :                                                                    # |*|
|*| # :.., MINIMIZE COMPILE-TIME OVERHEAD BY EXCLUDING UNUSED INSTRUCTION  # |*|
|*| # :  : SETS                                                            # |*|
|*| # :                                                                    # |*|
|*| # :.., ALLOW PER-PROJECT OPCODE SURFACE SELECTION                      # |*|
|*| # :                                                                    # |*|
|*| # :.., PREVENT UNNECESSARY TEMPLATE / MACRO EXPANSION ACROSS FULL ISA  # |*|
|*| # :                                                                    # |*|
|*| # :.., ENABLE MODULAR ISA SLICING (ADD / JMP / MOV / ETC.)             # |*|
|*| #                                                                      # |*|
|*| # THE COMMAND-SPECIFIC FLAGS EXIST IN THE CPU DOCUMENTATIONS AT THE    # |*|
|*| # BOTTOM OF THIS MODULE'S DOCUMENTATION.                               # |*|
|*| #       _____                                                          # |*|
|*| # O FOR ASM.H-SPECIFIC FLAGS, THE AVAILABLE OPTIONS ARE:               # |*|
|*| # :   _______________                                                  # |*|
|*| # :.., INCL_CMT_ASM_OP: INCLUDES OPCODE DEFINITIONS FOR COMMANDS       # |*|
|*| # :  : (EXAMPLE: _MOV_RAX_RBX)                                         # |*|
|*| # :             ^^^^^^^^^^^^                                           # |*|
|*| # :    ___________________                                             # |*|
|*| # :.., INCL_CMT_ASM_SIZEOF: INCLUDES SIZEOF VALUES FOR OPCODE          # |*|
|*| # :  : SEQUENCES (EXAMPLE: SIZEOF_MOV_RAX_RBX)                         # |*|
|*| # :                        ^^^^^^^^^^^^^^^^^^                          # |*|
|*| # :    ___________________                                             # |*|
|*| # :.., INCL_CMT_ASM_INLINE: INCLUDES INLINE ASSEMBLY SYNTAX VERSIONS   # |*|
|*| # :  : OF COMMANDS (EXAMPLE: MOV_RAX_RBX)                              # |*|
|*| # :                          ^^^^^^^^^^^                               # |*|
|*| # :    ____________________________________                            # |*|
|*| # :.., INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER: DISABLES THE AUTOMATIC    # |*|
|*| #    : DOWNGRADING SYSTEM (E.G., RAX BECOMES EAX AUTOMATICALLY)        # |*|
|*| #                                ^^^         ^^^                       # |*|
|*| #            _______________  ___________________                      # |*|
|*| # IF NONE OF INCL_CMT_ASM_OP, INCL_CMT_ASM_SIZEOF, OR                  # |*|
|*| # INCL_CMT_ASM_INLINE ARE DEFINED, ALL THREE ARE ENABLED AUTOMATICALLY # |*|
|*| # ^^^^^^^^^^^^^^^^^^^                                                  # |*|
|*| ######################################################################## |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define SECTION(RETURN_TYPE, NAME, ARGUMENTS)                 | 164      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS)          | 190      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)             | 216      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)      | 250      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define END                                                   | 285      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS                  | 305      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: SECTION :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define SECTION(RETURN_TYPE, NAME, ARGUMENTS)                       : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : CREATE A LINKABLE SECTION (FUNCTION) IN ASSEMBLY CODE.                 : *|
|* :                                                                        : *|
|* : ONLY WORKS IN ASNI C AND DOES NOTHING IN K&R C.                        : *|
|* :   ___________                                                          : *|
|* : # RETURN_TYPE: THE RETURN TYPE OF YOUR FUNCTION                        : *|
|* :   ____                                                                 : *|
|* : # NAME: NAME OF YOUR FUNCTION                                          : *|
|* :   _________                                                            : *|
|* : # ARGUMENTS: ARGUMENTS TO YOUR FUNCTION.                               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| SECTION(void, test, (int a, char b))                                : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             ..................                             *|
|* ............................: STATIC_SECTION :............................ *|
|* :                           ''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS)                : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : CREATE A UNLINKABLE STATIC SECTION (FUNCTION) IN ASSEMBLY CODE.        : *|
|* :                                                                        : *|
|* : ONLY WORKS IN ASNI C AND DOES NOTHING IN K&R C.                        : *|
|* :   ___________                                                          : *|
|* : # RETURN_TYPE: THE RETURN TYPE OF YOUR FUNCTION                        : *|
|* :   ____                                                                 : *|
|* : # NAME: NAME OF YOUR FUNCTION                                          : *|
|* :   _________                                                            : *|
|* : # ARGUMENTS: ARGUMENTS TO YOUR FUNCTION.                               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| STATIC_SECTION(void, test, (int a, char b))                         : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ...............                               *|
|* .............................: SECTION_KNR :.............................. *|
|* :                            '''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)                   : *|
|* : 3|                                                                     : *|
|* :         _______                                                        : *|
|* : SAME AS SECTION BUT YOU HAVE TO WRITE YOUR ARGUMENTS IN K&R SYNTAX.    : *|
|* :                                                                        : *|
|* : ONLY WORKS IN K&R C AND DOES NOTHING IN ANSI C.                        : *|
|* :   ___________                                                          : *|
|* : # RETURN_TYPE: THE RETURN TYPE OF YOUR FUNCTION                        : *|
|* :   ____                                                                 : *|
|* : # NAME: NAME OF YOUR FUNCTION                                          : *|
|* :   _________                                                            : *|
|* : # ARGUMENTS: ARGUMENTS TO YOUR FUNCTION.                               : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| SECTION_KNR(void, test, (a, b) int a; char b;)                      : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : YOU CAN ALSO USE BOTH ANSI AND K&R SECTION CREATION AT THE SAME TIME:  : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| SECTION(void, test, (int a, char b))                                : *|
|* : 3| SECTION_KNR(void, test, (a, b) int a; char b;)                      : *|
|* : 4|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                           ......................                           *|
|* ..........................: STATIC_SECTION_KNR :.......................... *|
|* :                         ''''''''''''''''''''''                         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)            : *|
|* : 3|                                                                     : *|
|* :         ______________                                                 : *|
|* : SAME AS STATIC_SECTION BUT YOU HAVE TO WRITE YOUR ARGUMENTS IN K&R     : *|
|* : SYNTAX.                                                                : *|
|* :                                                                        : *|
|* : ONLY WORKS IN K&R C AND DOES NOTHING IN ANSI C.                        : *|
|* :   ___________                                                          : *|
|* : # RETURN_TYPE: THE RETURN TYPE OF YOUR FUNCTION                        : *|
|* :   ____                                                                 : *|
|* : # NAME: NAME OF YOUR FUNCTION                                          : *|
|* :   _________                                                            : *|
|* : # ARGUMENTS: ARGUMENTS TO YOUR FUNCTION.                               : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| STATIC_SECTION_KNR(void, test, (a, b) int a; char b;)               : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : YOU CAN ALSO USE BOTH ANSI AND K&R SECTION CREATION AT THE SAME TIME:  : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| STATIC_SECTION(void, test, (int a, char b))                         : *|
|* : 3| STATIC_SECTION_KNR(void, test, (a, b) int a; char b;)               : *|
|* : 4|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  .......                                   *|
|* .................................: END :.................................. *|
|* :                                '''''''                                 : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define END                                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : END OF YOUR SECTION.                                                   : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| SECTION(void, test, (int a, char b))                                : *|
|* : 3| . . .                                                               : *|
|* : 4| END                                                                 : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                  ........................................                  *|
|* .................: CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS :................. *|
|* :                ''''''''''''''''''''''''''''''''''''''''                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS                        : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : INDICATES THAT CMT'S SECTION SYSTEM CANNOT BE FULLY REALIZED USING     : *|
|* : INLINE ASSEMBLY IN THE CURRENT BUILD/CONFIGURATION.                    : *|
|* :                                                                        : *|
|* : SECTION SETUP MAY REQUIRE RUNTIME INITIALIZATION OR ALTERNATIVE CODE   : *|
|* : PATHS INSTEAD OF COMPILE-TIME PLACEMENT.                               : *|
|* :                                                                        : *|
|* : THIS IS A PURELY OPTIONAL SOLUTION FOR THE SECTION YOU CREATED IN YOUR : *|
|* : PROJECT.                                                               : *|
|* :                                                                        : *|
|* : IF YOU'RE ALREADY USING A MODERN COMPILER, YOU DON'T NEED TO TAKE ANY  : *|
|* : ADDITIONAL STEPS LIKE THIS.                                            : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| #define INCL_CMT_ASM_INLINE                                        : *|
|* :  3| #define INCL_CMT_ASM_OTHERS                                        : *|
|* :  4| #define INCL_CMT_ASM_MOV                                           : *|
|* :  5| #include <CMT/ASM.H>                                               : *|
|* :  6|                                                                    : *|
|* :  7| SECTION (int, test, (void))                                        : *|
|* :  8|     MOV_EAX_(42)                                                   : *|
|* :  9|     RET                                                            : *|
|* : 10| END                                                                : *|
|* : 11|                                                                    : *|
|* : 12| int main()                                                         : *|
|* : 13| {                                                                  : *|
|* : 14| #ifdef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS                        : *|
|* : 15|     ((void (*) (void))test)(); // RUN YOUR FUNCTION ONCE TO MAKE   : *|
|* : 16|                                // IT SET ITSELF UP                 : *|
|* : 17| #endif                                                             : *|
|* : 18|     printf("%d\n", test());                                        : *|
|* : 19|     return (0);                                                    : *|
|* : 20| }                                                                  : *|
|* : 21|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

/******************************************************************************\
|*    __________                                                              *|
|*  _| EXAMPLES |___________________________________________________________  *|
|* | '""""""""""'                                                           | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| SECTION(void *, random_example, ())                                 | *|
|* | 3|     MOV_RAX_RBX // mov rax, rbx                                     | *|
|* | 4|     ADD_RAX_(1) // add rax, 1                                       | *|
|* | 5|     RET         // ret                                              | *|
|* | 6| END                                                                 | *|
|* | 7|                                                                     | *|
|* |                                                                        | *|
|* | EXAMPLE - BYTE COPY ROUTINE                                            | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| SECTION(int, is_zero, (int x))                                      | *|
|* | 3|     XOR_EAX_EAX  // xor eax, eax                                    | *|
|* | 4|     TEST_EDI_EDI // test edi, edi                                   | *|
|* | 5|     SETE_AL      // sete al                                         | *|
|* | 6|     RET          // ret                                             | *|
|* | 7| END                                                                 | *|
|* | 8|                                                                     | *|
|* |                                                                        | *|
|* |   v [C LANGUAGE]                                                       | *|
|* |  1|                                                                    | *|
|* |  2| SECTION(int, add_with_temp, (int a, int b))                        | *|
|* |  3| SECTION_KNR(int, add_with_temp, (a, b) int a; int b;)              | *|
|* |  4|     PUSH_RBX    // push rbx                                        | *|
|* |  5|     MOV_EBX_EDI // mov ebx, edi                                    | *|
|* |  6|     ADD_EBX_ESI // add ebx, esi                                    | *|
|* |  7|     MOV_EAX_EBX // mov eax, ebx                                    | *|
|* |  8|     POP_RBX     // pop ebx                                         | *|
|* |  9|     RET         // ret                                             | *|
|* | 10| END                                                                | *|
|* | 11|                                                                    | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| SECTION (int, return_42, ())                                        | *|
|* | 3|     MOV_EAX_(42) // mov eax, 42                                     | *|
|* | 4|     RET          // ret                                             | *|
|* | 5| END                                                                 | *|
|* | 6|                                                                     | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| SECTION (void, jump, (void *jump_address))                          | *|
|* | 3|     MOV_RAX_ARG1 // mov rax, (first_argument) (Cross OS & ABI)      | *|
|* | 4|     JMP_RAX      // jmp rax                                         | *|
|* | 5| END                                                                 | *|
|* | 6|                                                                     | *|
|* |                                                                        | *|
|* | OR IF YOU JUST NEED OP CODES:                                          | *|
|* |                                                                        | *|
|* |   v [C LANGUAGE]                                                       | *|
|* |  1|                                                                    | *|
|* |  2| register int INDEX = 0;                                            | *|
|* |  3| char         __OP__[                                               | *|
|* |  4|     SIZEOF_MOV_RAX_RBX + SIZEOF_ADD_RAX_ + SIZEOF_RET              | *|
|* |  5| ];                                                                 | *|
|* |  6|                                                                    | *|
|* |  7| _MOV_RAX_RBX                                                       | *|
|* |  8| _ADD_RAX_(1)                                                       | *|
|* |  9| _RET                                                               | *|
|* | 10|                                                                    | *|
|* | 11| void *(*func)() = MEM_EXECUTABLE_ALLOC(__OP__, INDEX);             | *|
|* | 12|                                                                    | *|
|* | 13| func();                                                            | *|
|* | 14|                                                                    | *|
|* | 15| MEM_EXECUTABLE_FREE(func);                                         | *|
|* | 16|                                                                    | *|
|* |                                                                        | *|
|* |   v [C LANGUAGE]                                                       | *|
|* |  1|                                                                    | *|
|* |  2| SECTION (void, test, (int input))                                  | *|
|* |  3|     CMP_ARG1_(1)                             // cmp (arg1), 1      | *|
|* |  4|     JE_SHORT_(SIZEOF_MOV_RAX_ + SIZEOF_JMP_) // je layer_50        | *|
|* |  5|     MOV_RAX_(42)                             // mov rax, 42        | *|
|* |  6|     JMP_SHORT_(SIZEOF_MOV_RAX_)              // jmp layer_end      | *|
|* |  7|     // layer_50:                             // layer_50:          | *|
|* |  8|     MOV_RAX_(50)                             // mov rax, 50        | *|
|* |  9|     // layer_end:                            // layer_end:         | *|
|* | 10|     RET                                      // ret                | *|
|* | 11| END                                                                | *|
|* | 12|                                                                    | *|
|* |________________________________________________________________________| *|
|*                                                                            *|
\******************************************************************************/

/* @@@@@@@@@@@@@@@@@@@@@ TODO | PLEASE IGNORE THIS PART @@@@@@@@@@@@@@@@@@@@@ *\

Since, creating the main syntax in MSVC (Intel) style, I don't have to do
anything much.

Example look:

MOV (RAX, RBX) // mov rax, rbx

||| OP CODE STYLE

#define RAX 0
#define RCX 1
#define RDX 2
#define RBX 3
#define RSP 4
#define RBP 5
#define RSI 6
#define RDI 7

#define MOV(_A_, _B_) (0XC0 | ((_B_) << 3) | (_A_))

||| GNU - AT&T STYLE

#define MOV_RAX_RBX "movq %rbx, %rax"

#define MOV(_A_, _B_) MOV_##_A_##_##_B_

|||

Still planning PTR

\* @@@@@@@@@@@@@@@@@@@@@ TODO | PLEASE IGNORE THIS PART @@@@@@@@@@@@@@@@@@@@@ */

/* *********************** [v] TI CGT CCS (PUSH) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_push /* TI CGT CCS COMPILER DIRECTIVES */
#pragma CHECK_MISRA("5.4") /* TAG NAMES SHALL BE A UNIQUE IDENTIFIER */
#pragma CHECK_MISRA("19.3") /*
# THE #INCLUDE DIRECTIVE SHALL BE FOLLOWED BY EITHER A <FILENAME> OR "FILENAME"
# SEQUENCE
# */
#endif /* __TI_COMPILER_VERSION__ */
/* *********************** [^] TI CGT CCS (PUSH) [^] ************************ */

#ifndef INCL_CMT_ASM_ADD
#ifndef INCL_CMT_ASM_JMP
#ifndef INCL_CMT_ASM_MOV
#ifndef INCL_CMT_ASM_MOVABS
#ifndef INCL_CMT_ASM_OTHERS
#ifndef INCL_CMT_ASM_PUSH
#ifndef INCL_CMT_ASM_POP
#ifndef INCL_CMT_ASM_MOV_PTR
#ifndef INCL_CMT_ASM_MOV_PTR_SEGMENT
#ifndef INCL_CMT_ASM_MOV_ABI
#define INCL_CMT_ASM_ADD
#define INCL_CMT_ASM_JMP
#define INCL_CMT_ASM_MOV
#define INCL_CMT_ASM_MOVABS
#define INCL_CMT_ASM_OTHERS
#define INCL_CMT_ASM_PUSH
#define INCL_CMT_ASM_POP
#define INCL_CMT_ASM_MOV_PTR
#define INCL_CMT_ASM_MOV_PTR_SEGMENT
#define INCL_CMT_ASM_MOV_ABI
#endif /* !INCL_CMT_ASM_MOV_ABI */
#endif /* !INCL_CMT_ASM_MOV_PTR_SEGMENT */
#endif /* !INCL_CMT_ASM_MOV_PTR */
#endif /* !INCL_CMT_ASM_POP */
#endif /* !INCL_CMT_ASM_PUSH */
#endif /* !INCL_CMT_ASM_OTHERS */
#endif /* !INCL_CMT_ASM_MOVABS */
#endif /* !INCL_CMT_ASM_MOV */
#endif /* !INCL_CMT_ASM_JMP */
#endif /* !INCL_CMT_ASM_ADD */

#ifndef INCL_CMT_ASM_INLINE
#ifndef INCL_CMT_ASM_SIZEOF
#ifndef INCL_CMT_ASM_OP
#define INCL_CMT_ASM_OP
#define INCL_CMT_ASM_SIZEOF
#define INCL_CMT_ASM_INLINE
#endif /* !INCL_CMT_ASM_OP */
#endif /* !INCL_CMT_ASM_SIZEOF */
#endif /* !INCL_CMT_ASM_INLINE */

#ifndef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#include "ASM/CAN_CMT_USE_INLINE_ASM_FOR_SECTIONS.INL"
#endif /* !CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */

#ifndef INCL_CMT_ASM_OP
#ifdef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#define INCL_CMT_ASM_OP
#endif /* CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */
#endif /* !INCL_CMT_ASM_OP */

#include "ASM/OP.INL"

#ifndef ASM_H
#define ASM_H 202606 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "ENVIRONMENTS/CPU.H"
/******* """"""""""""""""""""
 * #define __CPU_INTEL__
 * #define __CPU_ARM__
 * #define __CPU_POWERPC__
 */
#include "ENVIRONMENTS/KNR_STYLE.H"
/******* """"""""""""""""""""""""""
 * #define KNR_STYLE
 * #define unsigned
 */
#include "ENVIRONMENTS/ARCHITECTURE.H"
/******* """""""""""""""""""""""""""""
 * #define __SYSTEM_64_BIT__
 * #define __SYSTEM_32_BIT__
 * #define __SYSTEM_16_BIT__
 */
#include "ATTRIBUTES/EXTERN_C.H"
/******* """""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
#include "CHECK_FEATURE/INLINE_ASM.H"
/******* """"""""""""""""""""""""""""
 * #define IS__INLINE_ASM__SUPPORTED
 * #define INLINE_ASM_TYPE__GNU
 * #define INLINE_ASM_TYPE__MSVC
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef INCL_CMT_ASM_INLINE
#ifndef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS

/* ********************** [v] INLINE_ASM_TYPE__GNU [v] ********************** */
#ifdef INLINE_ASM_TYPE__GNU
#define LOCALMACRO__GNU_STYLE
#else /* !INLINE_ASM_TYPE__GNU */
#ifdef INLINE_ASM_TYPE__GNU_EXTENDED
#define LOCALMACRO__GNU_STYLE
#endif /* INLINE_ASM_TYPE__GNU_EXTENDED */
#endif /* INLINE_ASM_TYPE__GNU */

#ifdef LOCALMACRO__GNU_STYLE
#undef LOCALMACRO__GNU_STYLE
#define LOCALMACRO_ATNT_SYNTAX_STRING
#define CMT_ASM(EVERYTHING) EVERYTHING"\n\t"
#define _(X) #X
#define SECTION(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	extern RETURN_TYPE NAME ARGUMENTS;\
	__asm__ (".text\n\t.global " #NAME "\n\t" #NAME ":\n\t"
#define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	extern static RETURN_TYPE NAME ARGUMENTS;\
	__asm__ (#NAME ":\n\t"
#define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
#define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
#define END ); EXTERN_C_END

#ifdef __CPU_INTEL__
#include "ASM/INLINE_ASM/GNU/INTEL.INL"
#endif /* __CPU_INTEL__ */

#ifdef __CPU_ARM__
#include "ASM/INLINE_ASM/GNU/ARM.INL"
#endif /* __CPU_ARM__ */

#ifdef __CPU_POWERPC__
#include "ASM/INLINE_ASM/GNU/POWERPC.INL"
#endif /* __CPU_POWERPC__ */

#endif /* LOCALMACRO__GNU_STYLE */
/* ********************** [^] INLINE_ASM_TYPE__GNU [^] ********************** */

/* ********************* [v] INLINE_ASM_TYPE__MSVC [v] ********************** */
#ifdef INLINE_ASM_TYPE__MSVC

/* **************************** [v] INCLUDES [v] **************************** */
#include "KEYWORDS/TYPES.H"
/******* """"""""""""""""""
 * typedef PTR;
 * typedef BYTE;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef KNR_STYLE
#define SECTION(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	__declspec(naked) RETURN_TYPE NAME ARGUMENTS\
	{\
		__asm {
#define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	__declspec(naked) static RETURN_TYPE NAME ARGUMENTS\
	{\
		__asm {
#define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
#define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
#else /* KNR_STYLE */
#define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
#define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS)
#define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	__declspec(naked) RETURN_TYPE NAME ARGUMENTS\
	{\
		__asm {
#define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	__declspec(naked) static RETURN_TYPE NAME ARGUMENTS\
	{\
		__asm {
#endif /* !KNR_STYLE */
#define END \
		}\
	}\
	EXTERN_C_END

#ifdef __CPU_INTEL__
#include "ASM/INLINE_ASM/MSVC/INTEL.INL"
#endif /* __CPU_INTEL__ */

#ifdef __CPU_ARM__
#include "ASM/INLINE_ASM/MSVC/ARM.INL"
#endif /* __CPU_ARM__ */
#endif /* INLINE_ASM_TYPE__MSVC */
/* ********************* [^] INLINE_ASM_TYPE__MSVC [^] ********************** */

#else /* CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */

/* **************************** [v] INCLUDES [v] **************************** */
#include "OS_API/CLEAR_INSTRUCTION_CACHE.H"
/******* """"""""""""""""""""""""""""""""""
 * #define CLEAR_INSTRUCTION_CACHE(ADDRESS, SIZE)
 */
#include "KEYWORDS/TYPES.H"
/******* """"""""""""""""""
 * typedef	PTR;
 * typedef	LET;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef _WIN32
/* **************************** [v] INCLUDES [v] **************************** */
#include "ATTRIBUTES/STDCALL.H"
/******* """"""""""""""""""""""
 * #define STDCALL
 */
#include "WIN_CORE/KERNEL32.H"
/******* """""""""""""""""""""
 * struct S_WIN_SYSTEM_INFO;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef KNR_STYLE
extern void STDCALL	GetSystemInfo(struct S_WIN_SYSTEM_INFO *);
extern int STDCALL	VirtualProtect(
	PTR, unsigned long, unsigned long, unsigned long *
);
extern LET STDCALL	VirtualQuery(PTR, struct S_MEMORY_BASIC_INFORMATION *, LET);
#else /* KNR_STYLE */
extern void STDCALL	GetSystemInfo();
extern int STDCALL	VirtualProtect();
extern LET STDCALL	VirtualQuery();
#endif /* !KNR_STYLE */

#define __INLINE_ASM__PREPARE_PAGE__ \
	struct S_WIN_SYSTEM_INFO	__SYSTEM_INFO__;\
	unsigned long				OLD_MEMORY;\
	register LET				PAGE_SIZE;\
	\
	GetSystemInfo(&__SYSTEM_INFO__);\
	PAGE_SIZE = __SYSTEM_INFO__.PAGE_SIZE / 2;\
	\
	if (!VirtualProtect(__OP__, MEMORY_PAGE_SIZE, 64, &OLD_MEMORY))\
		return (1);
#define __INLINE_ASM__END_PAGE__ \
	if (!VirtualProtect(__OP__, MEMORY_PAGE_SIZE, 32, &OLD_MEMORY))\
		return (1);
#else /* !_WIN32  */
#ifdef __unix__
#define __INLINE_ASM__PREPARE_PAGE__ \
	register LET	PAGE = (LET)(((LET)__OP__) & ~(MEMORY_PAGE_SIZE - 1));\
	\
	if (mprotect((PTR)PAGE, MEMORY_PAGE_SIZE, 3) != 0)\
		return (1);
#define __INLINE_ASM__END_PAGE__ \
	if (mprotect((PTR)PAGE, MEMORY_PAGE_SIZE, 5) != 0)\
		return (1);
#else /* DOS */
#define __INLINE_ASM__PREPARE_PAGE__ /* EMPTY */
#define __INLINE_ASM__END_PAGE__ /* EMPTY */
#endif /* __UNIX__ */
#endif /* _WIN32 */

#define LOCALMACRO__SECTION_START(NAME) \
	{\
		register LET	INDEX = 0;\
		BYTE			*__OP__ = (BYTE *)(NAME);\
		__INLINE_ASM__PREPARE_PAGE__

#ifndef KNR_STYLE
#define SECTION(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START \
	RETURN_TYPE NAME ARGUMENTS \
	LOCALMACRO__SECTION_START(NAME)

#define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	static RETURN_TYPE NAME ARGUMENTS \
	LOCALMACRO__SECTION_START(NAME)
#define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
#define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
#else /* KNR_STYLE */
#define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
#define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS)
#define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	RETURN_TYPE NAME ARGUMENTS \
	LOCALMACRO__SECTION_START(NAME)
#define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS) \
	EXTERN_C_START\
	static RETURN_TYPE NAME ARGUMENTS \
	LOCALMACRO__SECTION_START(NAME)
#endif /* !KNR_STYLE */

#define END \
		__INLINE_ASM__END_PAGE__ \
		CLEAR_INSTRUCTION_CACHE(__OP__, PAGE_SIZE);\
	}\
	EXTERN_C_END

#ifdef __CPU_INTEL__
#include "ASM/INLINE_ASM/OP_PURE/INTEL.INL"
#endif /* __CPU_INTEL__ */

#ifdef __CPU_ARM__
#include "ASM/INLINE_ASM/OP_PURE/ARM.INL"
#endif /* __CPU_ARM__ */

#ifdef __CPU_POWERPC__
#include "ASM/INLINE_ASM/OP_PURE/POWERPC.INL"
#endif /* __CPU_POWERPC__ */

#endif /* !CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */
#endif /* INCL_CMT_ASM_INLINE */
#endif /* !ASM_H */

#ifndef INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER
#include "ASM/AUTO_DOWNGRADER.INL"
#endif /* !INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER */

#ifdef INCL_CMT_ASM_MOV_ABI
#ifdef ABI_H
#ifndef __ABI__PASS_REG_WINDOWS__
#ifndef __ABI__PASS_REG_UNIX__
#ifndef __ABI__PASS_STACK__
#undef ABI_H /* FUCKING HELL, RETRY AGAIN? */
#include "ENVIRONMENTS/ABI.H"
#endif /* !__ABI__PASS_STACK__ */
#endif /* !__ABI__PASS_REG_UNIX__ */
#endif /* !__ABI__PASS_REG_WINDOWS__ */
#else /* !ABI_H */
#include "ENVIRONMENTS/ABI.H"
/******* """"""""""""""""""""
 * #define __ABI__PASS_REG_WINDOWS__
 * #define __ABI__PASS_REG_UNIX__
 * #define __ABI__PASS_STACK__
 */
#endif /* ABI_H */

#include "ASM/ABI.INL"
#endif /* INCL_CMT_ASM_MOV_ABI */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
