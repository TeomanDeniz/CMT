/******************************************************************************\
# H - OBJECT                                     #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/05/25 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/07/23 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  OBJECT                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS HEADER PROVIDES C-STYLE OBJECT-ORIENTED PROGRAMMING:                |*|
|*| :                       ______                    ___                    |*|
|*| :.. OBJECT DEFINITIONS (OBJECT) AND CONSTRUCTORS (NEW)                   |*|
|*| :.. DYNAMIC FUNCTION TABLES FOR RUNTIME BINDING                          |*|
|*| :.. ASSEMBLY-LEVEL INJECTION FOR PERFORMANCE                             |*|
|*| :.. MEMORY-EFFICIENT AND FLEXIBLE                                        |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define OBJECT                                                | 61       |*|
|*| #define object                                                |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define NEW(NAME, TYPE)                                       | 86       |*|
|*| #define new(name, type)                                       |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__CONNECT(OBJECT_TYPE_NAME)                     | 141      |*|
|*| #define object__connect(object_type_name)                     |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__INJECT(MEMBER)                                | 175      |*|
|*| #define object__inject(member)                                |          |*|
|*| #define OBJECT__INJECT_2(MEMBER, FUNCTION)                    |          |*|
|*| #define object__inject_2(member, function)                    |          |*|
|*| #define OBJECT__INJECT_3(                                     |          |*|
|*|             OBJECT_PTR, MEMBER, FUNCTION                      |          |*|
|*|         )                                                     |          |*|
|*| #define object__inject_3(                                     |          |*|
|*|             object_ptr, member, function                      |          |*|
|*|         )                                                     |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__EJECT(MEMBER)                                 | 212      |*|
|*| #define object__eject(member)                                 |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: OBJECT :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT struct                                               : *|
|* : 3| #define object struct                                               : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : USED TO VISUALLY DISTINGUISH OBJECTS FROM REGULAR STRUCTS.             : *|
|* :                                                                        : *|
|* : THIS MACRO HAS NO FUNCTIONAL IMPACT.                                   : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| object o_object                                                     : *|
|* : 3| {                                                                   : *|
|* : 4|     void (*worked)(int);                                            : *|
|* : 5|     int value;                                                      : *|
|* : 6| };                                                                  : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  .......                                   *|
|* .................................: NEW :.................................. *|
|* :                                '''''''                                 : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define NEW(NAME, TYPE)                                             : *|
|* : 3| #define new(name, type)                                             : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : USED TO INSTANTIATE AN OBJECT.                                         : *|
|* :         ___                                                            : *|
|* : CALLING NEW AUTOMATICALLY INVOKES THE CONSTRUCTOR.                     : *|
|* :                                                                        : *|
|* : THE CONSTRUCTOR MUST BE NAMED EXACTLY THE SAME AS THE OBJECT TYPE.     : *|
|* :                                                                        : *|
|* : FOR EXAMPLE:                                                           : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| object o_test                                                      : *|
|* :  3| {                                                                  : *|
|* :  4|     ...                                                            : *|
|* :  5| };                                                                 : *|
|* :  6|                                                                    : *|
|* :  7| void o_test()                                                      : *|
|* :  8| {                                                                  : *|
|* :  9|     ...                                                            : *|
|* : 10| }                                                                  : *|
|* : 11|                                                                    : *|
|* :                                                                        : *|
|* : CONSTRUCTORS MAY ACCEPT PARAMETERS:                                    : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void o_test(int arg, char *arg2)                                    : *|
|* : 3| {                                                                   : *|
|* : 4|     ...                                                             : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* :                                                                        : *|
|* : USAGE:                                                                 : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| new (o_object, test) ();                                            : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : WITH PARAMETERS:                                                       : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| new (o_object, test) (42, "test");                                  : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                            ...................                             *|
|* ...........................: OBJECT__CONNECT :............................ *|
|* :                          '''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT__CONNECT(OBJECT_TYPE_NAME)                           : *|
|* : 3| #define object__connect(object_type_name)                           : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : CONNECTS A FUNCTION TO AN OBJECT INSTANCE.                             : *|
|* :                                                                        : *|
|* : THIS MACRO AUTOMATICALLY DEFINES A POINTER NAMED `THIS` THAT REFERS TO : *|
|* : THE PARENT OBJECT.                                                     : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void test1(int a)                                                  : *|
|* :  3| {                                                                  : *|
|* :  4|     OBJECT__CONNECT (o_object);                                    : *|
|* :  5|                                                                    : *|
|* :  6|     THIS->value = a;                                               : *|
|* :  7| }                                                                  : *|
|* :  8|                                                                    : *|
|* :  9| void test2(int a)                                                  : *|
|* : 10| {                                                                  : *|
|* : 11|     object__connect (o_object);                                    : *|
|* : 12|                                                                    : *|
|* : 13|     this->value = a;                                               : *|
|* : 14| }                                                                  : *|
|* : 15|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*           ......................................................           *|
|* ..........: OBJECT__INJECT, OBJECT__INJECT_2, OBJECT__INJECT_3 :.......... *|
|* :         ''''''''''''''''''''''''''''''''''''''''''''''''''''''         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT__INJECT(MEMBER)                                      : *|
|* : 3| #define object__inject(member)                                      : *|
|* : 4| #define OBJECT__INJECT_2(MEMBER, FUNCTION)                          : *|
|* : 5| #define object__inject_2(member, function)                          : *|
|* : 6| #define OBJECT__INJECT_3(OBJECT_PTR, MEMBER, FUNCTION)              : *|
|* : 7| #define object__inject_3(object_ptr, member, function)              : *|
|* : 8|                                                                     : *|
|* :                                                                        : *|
|* : USED TO INJECT FUNCTIONS INTO AN OBJECT INSTANCE.                      : *|
|* :                                                                        : *|
|* : FUNCTIONS ARE **NOT** AUTOMATICALLY BOUND; INJECTION MUST BE DONE      : *|
|* : MANUALLY.                                                              : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void o_object(int a)                                               : *|
|* :  3| {                                                                  : *|
|* :  4|     object__connect (o_object);                                    : *|
|* :  5|                                                                    : *|
|* :  6|     object__inject (test);        // this->test = test;            : *|
|* :  7|     object__inject_2 (abc, test); // this->abc = test;             : *|
|* :  8|     object__inject_3 (                                             : *|
|* :  9|         struct_ptr, abc, test     // struct_ptr->abc = test;       : *|
|* : 10|     );                                                             : *|
|* : 11|                                                                    : *|
|* : 12|     this->value = a;                                               : *|
|* : 13| }                                                                  : *|
|* : 14|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             .................                              *|
|* ............................: OBJECT__EJECT :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT__EJECT(MEMBER)                                       : *|
|* : 3| #define object__eject(member)                                       : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : SINCE NO AUTOMATIC DESTRUCTOR EXISTS, MEMBERS MUST BE EJECTED MANUALLY : *|
|* :                                                                        : *|
|* : A CUSTOM DESTRUCTOR MUST BE IMPLEMENTED BY THE USER.                   : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| object o_test                                                      : *|
|* :  3| {                                                                  : *|
|* :  4|     void (*free)();                                                : *|
|* :  5|     void (*test)();                                                : *|
|* :  6| };                                                                 : *|
|* :  7|                                                                    : *|
|* :  8| void test()                                                        : *|
|* :  9| {                                                                  : *|
|* : 10|     object__connect (o_test);                                      : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* : 13| void test_free()                                                   : *|
|* : 14| {                                                                  : *|
|* : 15|     object__connect (o_test);                                      : *|
|* : 16|                                                                    : *|
|* : 17|     object__eject (test);                                          : *|
|* : 18|     object__eject (free); // Always on the end!                    : *|
|* : 19| }                                                                  : *|
|* : 20|                                                                    : *|
|* : 21| void o_test()                                                      : *|
|* : 22| {                                                                  : *|
|* : 23|     object__connect (o_test);                                      : *|
|* : 24|                                                                    : *|
|* : 25|     object__inject (test);                                         : *|
|* : 26|     object__inject_2 (free, test_free);                            : *|
|* : 27| }                                                                  : *|
|* : 28|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*    ______________                                                          *|
|*  _| FULL EXAMPLE |_______________________________________________________  *|
|* | '""""""""""""""'                                                       | *|
|* |   v [C LANGUAGE]                                                       | *|
|* |  1|                                                                    | *|
|* |  2| struct test_object_type                                            | *|
|* |  3| {                                                                  | *|
|* |  4|     void (*add)(int);                                              | *|
|* |  5|     int  value;                                                    | *|
|* |  6|     void (*free)(void);                                            | *|
|* |  7| };                                                                 | *|
|* |  8|                                                                    | *|
|* |  9| void add(int value)                                                | *|
|* | 10| {                                                                  | *|
|* | 11|     object__connect (test_object_type);                            | *|
|* | 12|                                                                    | *|
|* | 13|     this->value += value;                                          | *|
|* | 14| }                                                                  | *|
|* | 15|                                                                    | *|
|* | 16| void free_self(void)                                               | *|
|* | 17| {                                                                  | *|
|* | 18|     object__connect (test_object_type);                            | *|
|* | 19|                                                                    | *|
|* | 20|     object__eject (this->add);                                     | *|
|* | 21|     object__eject (this->free);                                    | *|
|* | 22| }                                                                  | *|
|* | 23|                                                                    | *|
|* | 24| void test_object_type(int start_var)                               | *|
|* | 25| {                                                                  | *|
|* | 26|     object__connect (test_object_type);                            | *|
|* | 27|                                                                    | *|
|* | 28|     object__inject (add);                                          | *|
|* | 29|     object__inject_2 (free, free_self);                            | *|
|* | 30|     this->value = start_var;                                       | *|
|* | 31| }                                                                  | *|
|* | 32|                                                                    | *|
|* | 33| int main(void)                                                     | *|
|* | 34| {                                                                  | *|
|* | 35|     new (test_object_type, test1) (42);                            | *|
|* | 36|     new (test_object_type, test2) (10);                            | *|
|* | 37|                                                                    | *|
|* | 38|     printf("%d\n", test1.value); // 42                             | *|
|* | 39|     test1.add(42);                                                 | *|
|* | 40|     printf("%d\n", test2.value); // 10                             | *|
|* | 41|     printf("%d\n", test1.value); // 82                             | *|
|* | 42|                                                                    | *|
|* | 43|     test1.free();                                                  | *|
|* | 44|     test2.free();                                                  | *|
|* | 45|     return (0);                                                    | *|
|* | 46| }                                                                  | *|
|* | 47|                                                                    | *|
|* |________________________________________________________________________| *|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                SIDE NOTES                                #*|
|*############################################################################*|
|*                                                                            *|
|* IF YOU TRY TO USE THIS SYSTEM ON DEVICES LIKE 8051, PIC, MSP430, ETC.,     *|
|* THIS APPROACH CAN BLOAT MEMORY QUICKLY. THEREFORE, PLEASE CONSIDER USING   *|
|* THIS SYSTEM ONLY ON DEVICES WITH MORE THAN 64KB OF RAM.                    *|
|*                                                                            *|
\******************************************************************************/

/* ****************************** [v] C++ [v] ******************************* */
#ifdef __cplusplus /* C++ */
#define OBJECT_H
#endif /* __cplusplus */
/* ****************************** [^] C++ [^] ******************************* */

#ifndef OBJECT_H
#define OBJECT_H 202607 /* VERSION */

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

#undef INCL_CMT_ASM_SIZEOF /* IF USER ALREADY DEFINED THESE BEFORE */
#undef INCL_CMT_ASM_OP
#undef INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER
#undef INCL_CMT_ASM_OTHERS
#undef INCL_CMT_ASM_MOV
#undef INCL_CMT_ASM_MOVABS
#undef INCL_CMT_ASM_JMP
#undef INCL_CMT_ASM_PUSH

/* **************************** [v] INCLUDES [v] **************************** */
#define INCL_CMT_ASM_SIZEOF /* INSTEAD OF GETTING EVERYING, */
#define INCL_CMT_ASM_OP     /* JUST GET WHAT WE NEED. */
#define INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER /* NO NEED */
#define INCL_CMT_ASM_OTHERS
#define INCL_CMT_ASM_MOV
#define INCL_CMT_ASM_MOVABS
#define INCL_CMT_ASM_JMP
#define INCL_CMT_ASM_PUSH
#include "ASM.H"
/******* """""""
 * #define _MOVABS_RAX_(SELF)
 * #define _MOVABS_R11_(TARGET)
 * #define _JMP_R11
 * #define _MOV_EAX_(SELF)
 * #define _MOV_EDX_(TARGET)
 * #define _JMP_EDX
 * #define _MOV_AX_(SELF)
 * #define _PUSH_(TARGET)
 * #define _RET
 * #define SIZEOF_MOVABS_RAX_
 * #define SIZEOF_MOVABS_R11_
 * #define SIZEOF_JMP_R11
 * #define SIZEOF_MOV_EAX_
 * #define SIZEOF_MOV_EDX_
 * #define SIZEOF_JMP_EDX
 * #define SIZEOF_MOV_AX_
 * #define SIZEOF_PUSH_
 * #define SIZEOF_RET
 */
#include "ATTRIBUTES/STDCALL.H"
/******* """"""""""""""""""""""
 * #define STDCALL
 */
#include "ATTRIBUTES/REGPASS.H"
/******* """"""""""""""""""""""
 * #define REGPASS
 */
#include "ENVIRONMENTS/KNR_STYLE.H"
/******* """"""""""""""""""""""""""
 * #define void
 * #define const
 */
#include "ENVIRONMENTS/CPU.H"
/******* """"""""""""""""""""
 * #define __CPU_INTEL__
 */
#include "ENVIRONMENTS/ARCHITECTURE.H"
/******* """""""""""""""""""""""""""""
 * #define __SYSTEM_64_BIT__
 * #define __SYSTEM_32_BIT__
 * #define __SYSTEM_16_BIT__
 */
#include "ENVIRONMENTS/PLATFORM.H"
/******* """""""""""""""""""""""""
 * 
 */
#include "ASM/C/INTEL/RAX.H"
/******* """""""""""""""""""
 * #define GET_RAX(VAR)
 */
#include "KEYWORDS/TYPES.H"
/******* """"""""""""""""""
 * typedef PTR;
 * typedef BYTE;
 */
#include "OS_API/MEMORY.H"
/******* """""""""""""""""
 * PTR	*ALLOC_EXE(PTR, LET);
 * void	FREE_EXE(PTR);
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ****************** [v] STACK PROTECTOR SUPPRESSION [v] ******************* *\
|* **** THE TRAMPOLINE RECEIVES ITS VALUE IN "RAX", BUT GCC'S CANARY      *** *|
|* **** PROLOGUE LOADS THROUGH "RAX" AND THEN ZEROES IT, DESTROYING THE   *** *|
|* **** VALUE BEFORE ANY USER CODE RUNS. "push_options" / "pop_options"   *** *|
|* **** KEEP THE SUPPRESSION FROM LEAKING INTO ANYTHING ELSE - WITHOUT    *** *|
|* **** THEM EVERY FUNCTION DEFINED LATER IN THE TRANSLATION UNIT LOSES   *** *|
|* **** ITS CANARY TOO, INCLUDING CODE BELONGING TO WHOEVER INCLUDED US.  *** *|
\* ************************************************************************** */
#ifdef __GNUC__
#ifndef __clang__
#ifndef __INTEL_COMPILER
#if ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 4)))
#ifdef __SSP__
#define LOCALMACRO__SSP
#else /* !__SSP__ */
#ifdef __SSP_STRONG__
#define LOCALMACRO__SSP
#else /* !__SSP_STRONG__ */
#ifdef __SSP_ALL__
#define LOCALMACRO__SSP
#endif /* __SSP_ALL__ */
#endif /* __SSP_STRONG__ */
#endif /* __SSP__ */

#ifdef LOCALMACRO__SSP
#undef LOCALMACRO__SSP
#undef CMT_NO_SSP_PUSH
#undef CMT_NO_SSP_POP
#define CMT_NO_SSP_PUSH \
	_Pragma("GCC push_options") \
	_Pragma("GCC optimize (\"no-stack-protector\")")
#define CMT_NO_SSP_POP _Pragma("GCC pop_options")
#define LOCALMACRO__GCC_C23
#endif /* LOCALMACRO__SSP */
#endif /* GCC >= 4.4 */
#endif /* !__INTEL_COMPILER */
#else /* __clang__ */
#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ >= 201710L)
_Pragma("clang diagnostic ignored \"-Wdeprecated-non-prototype\"");
#endif /* STDC >= 23 */
#endif /* __STDC_VERSION__ */

#ifdef __has_attribute
#if (__has_attribute(no_stack_protector))
#undef CMT_NO_SSP_PUSH
#undef CMT_NO_SSP_POP
#define CMT_NO_SSP_PUSH \
	_Pragma(\
		"clang attribute push (__attribute__((no_stack_protector)), apply_to = \
		function)"\
	)
#define CMT_NO_SSP_POP _Pragma("clang attribute pop")
#endif /* __has_attribute(no_stack_protector) */
#endif /* __has_attribute */
#endif /* !__clang__ */
#endif /* __GNUC__ */

#ifndef CMT_NO_SSP_PUSH
#define CMT_NO_SSP_PUSH
#define CMT_NO_SSP_POP
#endif /* !CMT_NO_SSP_PUSH */
/* ****************** [^] STACK PROTECTOR SUPPRESSION [^] ******************* */

CMT_NO_SSP_PUSH

/* ********************** [v] CHECK FUNCTION SIZE [v] *********************** */
#ifdef __CPU_INTEL__
#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__FUNCTION_SIZE \
	(SIZEOF_MOVABS_RAX_ + SIZEOF_MOVABS_R11_ + SIZEOF_JMP_R11)
#endif /* __SYSTEM_64_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define LOCALMACRO__FUNCTION_SIZE \
	(SIZEOF_MOV_EAX_ + SIZEOF_MOV_EDX_ + SIZEOF_JMP_EDX)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_16_BIT__
#define LOCALMACRO__FUNCTION_SIZE \
	(SIZEOF_MOV_AX_ + SIZEOF_PUSH_ + SIZEOF_RET)
#endif /* __SYSTEM_16_BIT__ */
#endif /* __CPU_INTEL__ */
/* ********************** [^] CHECK FUNCTION SIZE [^] *********************** */

#define OBJECT struct
#define object struct

#ifdef __CPU_INTEL__
#define OBJECT__CONNECT(OBJECT_TYPE_NAME) \
	register PTR				LOCALMACRO__SELF__;\
	GET_RAX(LOCALMACRO__SELF__);\
	OBJECT OBJECT_TYPE_NAME	*const THIS = \
		(OBJECT OBJECT_TYPE_NAME *)LOCALMACRO__SELF__
#define object__connect(object_type_name) \
	register PTR				LOCALMACRO__SELF__;\
	GET_RAX(LOCALMACRO__SELF__);\
	OBJECT object_type_name	*const this = \
		(OBJECT object_type_name *)LOCALMACRO__SELF__
#endif /* __CPU_INTEL__ */

#ifdef LOCALMACRO__GCC_C23
#undef LOCALMACRO__GCC_C23
#define NEW(OBJECT_NAME, VARIABLE_NAME) \
	OBJECT OBJECT_NAME	VARIABLE_NAME;\
	\
	SET_RAX(&VARIABLE_NAME);\
	OBJECT_NAME
#else /* !LOCALMACRO__GCC_C23 */
#define NEW(OBJECT_NAME, VARIABLE_NAME) \
	OBJECT OBJECT_NAME	VARIABLE_NAME;\
	extern void			OBJECT_NAME();\
	\
	SET_RAX(&VARIABLE_NAME);\
	OBJECT_NAME
#endif /* LOCALMACRO__GCC_C23 */

#define new(object_name, variable_name) NEW(object_name, variable_name)

#define OBJECT__INJECT_3(OBJECT_PTR, TARGET, SOURCE) \
	do\
	{\
		register LET	INDEX;\
		BYTE			__OP__[LOCALMACRO__FUNCTION_SIZE];\
		\
		INDEX = 0;\
		LOCALMACRO__INJECTOR(OBJECT_PTR, SOURCE) \
		((OBJECT_PTR)->TARGET) = ALLOC_EXE(__OP__, LOCALMACRO__FUNCTION_SIZE);\
		/* DO NOT BE AFRAID MY CHILD, IT IS W^X SAFE. I KNOW WHAT I AM DOING */\
	}\
	while (0)
#define object__inject_3(object_ptr, target, source) \
	OBJECT__INJECT_3(object_ptr, target, source)

#define OBJECT__INJECT_2(TARGET, SOURCE) OBJECT__INJECT_3(THIS, TARGET, SOURCE)
#define object__inject_2(TARGET, SOURCE) object__inject_3(this, TARGET, SOURCE)

#define OBJECT__INJECT(TARGET) OBJECT__INJECT_2(TARGET, TARGET)
#define object__inject(TARGET) object__inject_2(TARGET, TARGET)

#define OBJECT__EJECT(MEMBER_NAME) FREE_EXE(THIS->MEMBER_NAME)
#define object__eject(member_name) FREE_EXE(this->member_name)

/* ####################### [v] TRAMPOLINE CONTENT [v] ####################### */
#ifdef __CPU_INTEL__
#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__INJECTOR(OBJECT_PTR, SOURCE) \
	_MOVABS_RAX_(OBJECT_PTR)\
	_MOVABS_R11_(SOURCE)\
	_JMP_R11
#else /* !__SYSTEM_64_BIT__ */
#ifdef __SYSTEM_32_BIT__
#define LOCALMACRO__INJECTOR(OBJECT_PTR, SOURCE) \
	_MOV_EAX_(OBJECT_PTR)\
	_MOV_EDX_(SOURCE)\
	_JMP_EDX
#else /* !__SYSTEM_32_BIT__ */
#ifdef __SYSTEM_16_BIT__ /* IT IS SLOW, BUT WORKS... */
#define LOCALMACRO__INJECTOR(OBJECT_PTR, SOURCE) \
	_MOV_AX_(OBJECT_PTR)\
	_PUSH_(SOURCE)\
	_RET
#endif /* __SYSTEM_16_BIT__ */
#endif /* __SYSTEM_32_BIT__ */
#endif /* __SYSTEM_64_BIT__ */
#endif /* __CPU_INTEL__ */

/* WIP: ARM AND POWERPC */
/* ####################### [^] TRAMPOLINE CONTENT [^] ####################### */

#ifndef LOCALMACRO__INJECTOR
#define LOCALMACRO__INJECTOR "ERROR: CMT-OBJECTS DOESN'T SUPPORT YOUR CPU (YET)"
#endif /* !LOCALMACRO__INJECTOR */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !OBJECT_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
