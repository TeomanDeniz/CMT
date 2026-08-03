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
# : License - GPL-3.0   :: Update - 2026/08/03 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  OBJECT                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| OBJECT PROVIDES C-STYLE OBJECT-ORIENTED PROGRAMMING:                     |*|
|*| ^^^^^^          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |*|
|*| :.. OBJECT DEFINITIONS (OBJECT)                                          |*|
|*| :.. STACK CONSTRUCTORS (OBJ) AND HEAP CONSTRUCTORS (NEW)                 |*|
|*| :.. BOUND METHODS THROUGH RUNTIME GENERATED TRAMPOLINES                  |*|
|*| :.. ASSEMBLY-LEVEL INJECTION FOR PERFORMANCE                             |*|
|*| :.. CROSS-PLATFORM SUPPORT (16/32/64-BIT INTEL) AND MAJOR COMPILERS      |*|
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
|*| #define OBJ(OBJECT_NAME, VARIABLE_NAME)                       | 86       |*|
|*| #define obj(object_name, variable_name)                       |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define NEW(OBJECT_NAME, VARIABLE_NAME)                       | 156      |*|
|*| #define new(object_name, variable_name)                       |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define DESTROY(THE_OBJECT)                                   | 220      |*|
|*| #define destroy(the_object)                                   |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__CONNECT(OBJECT_TYPE_NAME)                     | 313      |*|
|*| #define object__connect(object_type_name)                     |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__INJECT(TARGET, SOURCE)                        | 349      |*|
|*| #define object__inject(target, source)                        |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__EJECT(MEMBER_NAME)                            | 393      |*|
|*| #define object__eject(member_name)                            |          |*|
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
|* : 4|     void    (*worked)(int);                                         : *|
|* : 5|     int        value;                                               : *|
|* : 6| };                                                                  : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  .......                                   *|
|* .................................: OBJ :.................................. *|
|* :                                '''''''                                 : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJ(OBJECT_NAME, VARIABLE_NAME)                             : *|
|* : 3| #define obj(object_name, variable_name)                             : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : INSTANTIATES AN OBJECT ON THE STACK.                                   : *|
|* :                        ^^^^^^^^^^^^                                    : *|
|* : THE VARIABLE IS A PLAIN OBJECT VALUE, SO ITS MEMBERS ARE REACHED WITH  : *|
|* : ..                                                                     : *|
|* : ^                                                                      : *|
|* : CALLING OBJ AUTOMATICALLY INVOKES THE CONSTRUCTOR.                     : *|
|* :         ^^^                                                            : *|
|* : <DESTROY> MAY SAFELY BE CALLED ON THE OBJECT. SINCE THE OBJECT LIVES   : *|
|* : ON THE STACK, THE CALL SIMPLY DOES NOTHING AFTER ANY MEMBER CLEANUP    : *|
|* : HAS COMPLETED.                                                         : *|
|* :                                                                        : *|
|* : THE CONSTRUCTOR MUST BE NAMED EXACTLY THE SAME AS THE OBJECT TYPE:     : *|
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
|* : 2| obj (o_test, test) ();                                              : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : WITH PARAMETERS:                                                       : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| obj (o_test, test) (42, "test");                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : SINCE THE MACRO EXPANDS TO AN ORDINARY DECLARATION, QUALIFIERS AND     : *|
|* : ATTRIBUTES MAY BE WRITTEN IN FRONT OF IT:                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| const obj (o_test, test) (42);                                      : *|
|* : 3|                                                                     : *|
|* : 4| test.setName("test");                                               : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  .......                                   *|
|* .................................: NEW :.................................. *|
|* :                                '''''''                                 : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define NEW(OBJECT_NAME, VARIABLE_NAME)                             : *|
|* : 3| #define new(object_name, variable_name)                             : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : INSTANTIATES AN OBJECT ON THE HEAP.                                    : *|
|* :                        ^^^^^^^^^^^                                     : *|
|* : THE VARIABLE IS A POINTER TO THE OBJECT, SO ITS MEMBERS ARE REACHED    : *|
|* : WITH ->.                                                               : *|
|* :      ^^                                                                : *|
|* : THE ALLOCATION IS CHECKED BEFORE THE CONSTRUCTOR RUNS: IF <ALLOC>      : *|
|* : FAILS, THE VARIABLE IS NULL AND THE CONSTRUCTOR IS NEVER CALLED.       : *|
|* :                        ^^^^                                            : *|
|* : UNLIKE <OBJ>, HEAP INSTANCES OWN THEIR STORAGE. CALLING <DESTROY>      : *|
|* : AFTER MEMBER CLEANUP RELEASES THAT ALLOCATION.                         : *|
|* :                                                            _______     : *|
|* : THE CALLER OWNS THAT ALLOCATION AND HAS TO RELEASE IT WITH DESTROY     : *|
|* : ONCE THE INJECTED MEMBERS HAVE BEEN EJECTED.                           : *|
|* :                                                                        : *|
|* : USAGE:                                                                 : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| new (o_test, test) ();                                              : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : WITH PARAMETERS:                                                       : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| new (o_test, test) (42, "test");                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : BECAUSE THE OBJECT LIVES ON THE HEAP, IT CAN OUTLIVE THE SCOPE IT WAS  : *|
|* : CREATED IN AND BE RETURNED FROM A FUNCTION:                            : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    *a_function(void)                                           : *|
|* : 3| {                                                                   : *|
|* : 4|     new (test_object_type, result) (1);                             : *|
|* : 5|                                                                     : *|
|* : 6|     return (result);                                                : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* :                                     _____           ______             : *|
|* : QUALIFIERS WORK HERE TOO. NOTE THAT const MAKES THE OBJECT             : *|
|* : READ-ONLY, SO ITS FIELDS CAN NO LONGER BE ASSIGNED DIRECTLY AND HAVE   : *|
|* : TO GO THROUGH A METHOD:                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| const new (test_object_type, test) (42);                            : *|
|* : 3|                                                                     : *|
|* : 4| test->set(33);                                                      : *|
|* : 5| // test->value = 33; -> error: assignment of member 'value' in read : *|
|* : 6|     -only object                                                    : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: DESTROY :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define DESTROY(THE_OBJECT)                                         : *|
|* : 3| #define destroy(the_object)                                         : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : RELEASES AN OBJECT THAT WAS CREATED ON THE HEAP WITH NEW.              : *|
|* :                                     ^^^^^^^^^^^      ^^^               : *|
|* : THE ARGUMENT IS THE OBJECT POINTER ITSELF, SO FROM OUTSIDE IT IS THE   : *|
|* : VARIABLE NEW PRODUCED, AND FROM INSIDE A METHOD IT IS SIMPLY THIS:     : *|
|* :          ^^^                                                 ^^^^      : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| new (o_test, test) ();                                              : *|
|* : 3| ...                                                                 : *|
|* : 4| destroy (test);                                                     : *|
|* : 5|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    free_self(void)                                             : *|
|* : 3| {                                                                   : *|
|* : 4|     object__connect (o_test);                                       : *|
|* : 5|                                                                     : *|
|* : 6|     destroy (this);                                                 : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* : _______                                                ___             : *|
|* : DESTROY ONLY GIVES BACK THE OBJECT ALLOCATION. IT DOES NOT EJECT       : *|
|* : ANYTHING, SO EVERY INJECTED MEMBER HAS TO BE EJECTED <BEFORE> THE      : *|
|* : OBJECT IS DESTROYED, OTHERWISE THE EXECUTABLE MEMORY BEHIND EACH       : *|
|* : TRAMPOLINE LEAKS AND THE EJECTS THEMSELVES WOULD BE READING FREED      : *|
|* : MEMORY.                                                                : *|
|* :                                                                        : *|
|* : AFTER THE CALL THE POINTER IS DANGLING; NOTHING IN THE OBJECT MAY BE   : *|
|* : TOUCHED AGAIN, INCLUDING this.                                         : *|
|* :                          ^^^^                                          : *|
|* : <RECOMMENDED USAGE>: SINCE THERE IS NO AUTOMATIC DESTRUCTOR, PUT       : *|
|* : <destroy> AS THE LAST STATEMENT OF THE <free()> MEMBER YOU WRITE       : *|
|* : ANYWAY, SO A HEAP OBJECT CLEANS ITSELF UP IN ONE CALL:                 : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void    test_free(void)                                            : *|
|* :  3| {                                                                  : *|
|* :  4|     object__connect (o_test);                                      : *|
|* :  5|                                                                    : *|
|* :  6|     object__eject (this->test);                                    : *|
|* :  7|     object__eject (this->free); // Always the last eject!          : *|
|* :  8|                                                                    : *|
|* :  9|     destroy (this); // Always the very last statement!             : *|
|* : 10| }                                                                  : *|
|* : 11|                                                                    : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| new (o_test, test) ();                                              : *|
|* : 3|                                                                     : *|
|* : 4| test->free(); // Ejects everything and frees the object             : *|
|* : 5|                                                                     : *|
|* :                   _______                                              : *|
|* : /!\ STACK OBJECTS DESTROY MAY ALSO BE CALLED ON OBJECTS CREATED WITH   : *|
|* : obj.                                                                   : *|
|* : ^^^                                                                    : *|
|* : THE MACRO DETECTS WHETHER THE OBJECT RESIDES ON THE HEAP. HEAP OBJECTS : *|
|* : ARE RELEASED NORMALLY; STACK OBJECTS ARE LEFT UNTOUCHED, SO CALLING    : *|
|* : destroy ON THEM IS A NO-OP.                                            : *|
|* : ^^^^^^^                                                                : *|
|* : THIS ALLOWS A SINGLE CLEANUP PATH TO BE SHARED BETWEEN STACK AND HEAP  : *|
|* : INSTANCES:                                                             : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void free_self(void)                                               : *|
|* :  3| {                                                                  : *|
|* :  4|     object__connect(o_test);                                       : *|
|* :  5|                                                                    : *|
|* :  6|     object__eject(this->test);                                     : *|
|* :  7|     object__eject(this->free);                                     : *|
|* :  8|                                                                    : *|
|* :  9|     destroy(this); // Safe for both stack and heap objects         : *|
|* : 10| }                                                                  : *|
|* : 11|                                                                    : *|
|* :                             _____                                      : *|
|* : IF THE POINTER WAS DECLARED const, DESTROY IT FROM INSIDE A METHOD,    : *|
|* : WHERE THE <this> PRODUCED BY <OBJECT__CONNECT> CARRIES NO QUALIFIER,   : *|
|* : OR CAST IT AT THE CALL SITE - DEPENDING ON HOW STRICT THE COMPILER IS  : *|
|* : ABOUT QUALIFIERS ON <free>.                                            : *|
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
|* :                                    ____     ____                       : *|
|* : THIS MACRO DEFINES A POINTER NAMED THIS (OR this IN THE LOWERCASE      : *|
|* : FORM) THAT REFERS TO THE PARENT OBJECT. IT READS THE OBJECT ADDRESS    : *|
|* : STRAIGHT OUT OF THE REGISTER THE TRAMPOLINE PLACED IT IN, SO IT MUST   : *|
|* : BE THE FIRST STATEMENT OF THE FUNCTION.                                : *|
|* :        ^^^^^^^^^^^^^^^                                                 : *|
|* : EXAMPLES:                                                              : *|
|* : ^^^^^^^^                                                               : *|
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
|*                             ..................                             *|
|* ............................: OBJECT__INJECT :............................ *|
|* :                           ''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT__INJECT(TARGET, SOURCE)                              : *|
|* : 3| #define object__inject(target, source)                              : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : USED TO INJECT A FUNCTION INTO AN OBJECT INSTANCE.                     : *|
|* :               ___                                                      : *|
|* : FUNCTIONS ARE NOT AUTOMATICALLY BOUND; INJECTION MUST BE DONE          : *|
|* : MANUALLY, USUALLY INSIDE THE CONSTRUCTOR.                              : *|
|* : ______                                                ______           : *|
|* : TARGET IS THE MEMBER THAT WILL HOLD THE BOUND METHOD, SOURCE IS        : *|
|* : THE PLAIN FUNCTION THAT IMPLEMENTS IT. BOTH NAMES ARE GIVEN            : *|
|* : EXPLICITLY, SO THE MEMBER AND THE FUNCTION DO NOT HAVE TO SHARE A      : *|
|* : NAME:                                                                  : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void o_object(int a)                                               : *|
|* :  3| {                                                                  : *|
|* :  4|     object__connect (o_object);                                    : *|
|* :  5|                                                                    : *|
|* :  6|     object__inject (this->test, test);       // this->test  = test : *|
|* :  7|     object__inject (this->abc, test);        // this->abc   = test : *|
|* :  8|     object__inject (struct_ptr->abc, test);  // any lvalue works   : *|
|* :  9|                                                                    : *|
|* : 10|     this->value = a;                                               : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* :                                                                        : *|
|* : UNDER THE HOOD THE MACRO ASSEMBLES A SMALL TRAMPOLINE THAT LOADS THE   : *|
|* : OBJECT ADDRESS INTO A REGISTER AND JUMPS TO <SOURCE>, THEN COPIES IT   : *|
|* : INTO EXECUTABLE MEMORY WITH <ALLOC_EXE>. THAT TRAMPOLINE IS WHAT MAKES : *|
|* : <OBJECT__CONNECT> ABLE TO RECOVER <this>, AND IT IS WHY EVERY INJECTED : *|
|* : MEMBER OWNS A SMALL EXECUTABLE ALLOCATION THAT HAS TO BE RELEASED      : *|
|* : AGAIN WITH OBJECT__EJECT.                                              : *|
|* :            ^^^^^^^^^^^^^                                               : *|
|* : THE OLDER <OBJECT__INJECT_2> / <OBJECT__INJECT_3> VARIANTS NO LONGER   : *|
|* : EXIST. THE TWO-ARGUMENT FORM REPLACES ALL OF THEM.                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             .................                              *|
|* ............................: OBJECT__EJECT :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT__EJECT(MEMBER_NAME)                                  : *|
|* : 3| #define object__eject(member_name)                                  : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : SINCE NO AUTOMATIC DESTRUCTOR EXISTS, MEMBERS MUST BE EJECTED          : *|
|* : MANUALLY.                                                              : *|
|* :                                                                        : *|
|* : A CUSTOM DESTRUCTOR MUST BE IMPLEMENTED BY THE USER.                   : *|
|* :                                                                        : *|
|* : EJECTING RELEASES THE TRAMPOLINE BEHIND A MEMBER, SO THE MEMBER THAT   : *|
|* : HOLDS THE DESTRUCTOR ITSELF HAS TO BE EJECTED LAST.                    : *|
|* :                                               ^^^^                     : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| object o_test                                                      : *|
|* :  3| {                                                                  : *|
|* :  4|     void    (*free)(void);                                         : *|
|* :  5|     void    (*test)(void);                                         : *|
|* :  6| };                                                                 : *|
|* :  7|                                                                    : *|
|* :  8| void test(void)                                                    : *|
|* :  9| {                                                                  : *|
|* : 10|     object__connect (o_test);                                      : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* : 13| void test_free(void)                                               : *|
|* : 14| {                                                                  : *|
|* : 15|     object__connect (o_test);                                      : *|
|* : 16|                                                                    : *|
|* : 17|     object__eject (this->test);                                    : *|
|* : 18|     object__eject (this->free); // Always on the end!              : *|
|* : 19|     destroy (this);                                                : *|
|* : 20| }                                                                  : *|
|* : 21|                                                                    : *|
|* : 22| void o_test(void)                                                  : *|
|* : 23| {                                                                  : *|
|* : 24|     object__connect (o_test);                                      : *|
|* : 25|                                                                    : *|
|* : 26|     object__inject (this->test, test);                             : *|
|* : 27|     object__inject (this->free, test_free);                        : *|
|* : 28| }                                                                  : *|
|* : 29|                                                                    : *|
|* :                          ___                                           : *|
|* : FOR OBJECTS CREATED WITH new, EJECTING ONLY GIVES BACK THE             : *|
|* : EXECUTABLE MEMORY OF THE INJECTED METHODS. THE OBJECT ALLOCATION       : *|
|* : ITSELF STILL BELONGS TO THE CALLER AND HAS TO BE RELEASED SEPARATELY.  : *|
|* :                          ___                                           : *|
|* : FOR OBJECTS CREATED WITH new, EJECTING ONLY GIVES BACK THE             : *|
|* : EXECUTABLE MEMORY OF THE INJECTED METHODS. THE OBJECT ALLOCATION       : *|
|* : ITSELF IS RELEASED WITH <DESTROY>, EITHER BY THE CALLER OR AS THE LAST : *|
|* : STATEMENT OF THE MEMBER THAT DOES THE EJECTING.                        : *|
|* :........................................................................: *|
|*                                                                            *|
|*    ______________                                                          *|
|*  _| FULL EXAMPLE |_______________________________________________________  *|
|* | '""""""""""""""'                                                       | *|
|* |   v [C LANGUAGE]                                                       | *|
|* |  1|                                                                    | *|
|* |  2| #define INCL_CMT_OBJECT // DEFINE OOP                              | *|
|* |  3| #include "CMT/CMT.H"                                               | *|
|* |  4| #include <stdio.h>                                                 | *|
|* |  5|                                                                    | *|
|* |  6| object test_object_type                                            | *|
|* |  7| {                                                                  | *|
|* |  8|     void    (*add)(int);                                           | *|
|* |  9|     void    (*set)(int);                                           | *|
|* | 10|     int        value;                                              | *|
|* | 11|     void    (*free)(void);                                         | *|
|* | 12| };                                                                 | *|
|* | 13|                                                                    | *|
|* | 14| void    add(int value)                                             | *|
|* | 15| {                                                                  | *|
|* | 16|     object__connect (test_object_type);                            | *|
|* | 17|                                                                    | *|
|* | 18|     this->value += value;                                          | *|
|* | 19| }                                                                  | *|
|* | 20|                                                                    | *|
|* | 21| void    set(int value)                                             | *|
|* | 22| {                                                                  | *|
|* | 23|     object__connect (test_object_type);                            | *|
|* | 24|                                                                    | *|
|* | 25|     this->value = value;                                           | *|
|* | 26| }                                                                  | *|
|* | 27|                                                                    | *|
|* | 28| void    free_self(void)                                            | *|
|* | 29| {                                                                  | *|
|* | 30|     object__connect (test_object_type);                            | *|
|* | 31|                                                                    | *|
|* | 32|     object__eject (this->add);                                     | *|
|* | 33|     object__eject (this->set);                                     | *|
|* | 34|                                                                    | *|
|* | 35|     object__eject (this->free); // Always on the end!              | *|
|* | 36|     destroy (this);                                                | *|
|* | 37| }                                                                  | *|
|* | 38|                                                                    | *|
|* | 39| void    test_object_type(int start_var)                            | *|
|* | 40| {                                                                  | *|
|* | 41|     object__connect (test_object_type);                            | *|
|* | 42|                                                                    | *|
|* | 43|     object__inject (this->add, add);                               | *|
|* | 44|     object__inject (this->set, set);                               | *|
|* | 45|     object__inject (this->free, free_self);                        | *|
|* | 46|     this->value = start_var;                                       | *|
|* | 47| }                                                                  | *|
|* | 48|                                                                    | *|
|* | 49| void    *a_function(void)                                          | *|
|* | 50| {                                                                  | *|
|* | 51|     new (test_object_type, result) (1); // Heap                    | *|
|* | 52|                                                                    | *|
|* | 53|     return (result);                                               | *|
|* | 54| }                                                                  | *|
|* | 55|                                                                    | *|
|* | 56| int    main(void)                                                  | *|
|* | 57| {                                                                  | *|
|* | 58|     object test_object_type    *a;                                 | *|
|* | 59|                                                                    | *|
|* | 60|     const new (test_object_type, test_h) (42); // Yeah, variable a | *|
|* | 61|         ttributes works too                                        | *|
|* | 62|     obj (test_object_type, test_s) (22); // Stack                  | *|
|* | 63|                                                                    | *|
|* | 64|     printf("%d\n", test_h->value); // 42                           | *|
|* | 65|     test_h->add(42);                                               | *|
|* | 66|     printf("%d\n", test_h->value); // 84                           | *|
|* | 67|     printf("%d\n", test_s.value); // 22                            | *|
|* | 68|                                                                    | *|
|* | 69|     test_s.value = 33;                                             | *|
|* | 70|     test_h->set(33); // I needed to do this in C++ way.            | *|
|* | 71|     // test_h->value = 33; | error: assignment of member 'value' i | *|
|* | 72|         n read-only object                                         | *|
|* | 73|                                                                    | *|
|* | 74|     printf("%d\n", test_h->value); // 33                           | *|
|* | 75|     printf("%d\n", test_s.value); // 33                            | *|
|* | 76|                                                                    | *|
|* | 77|     test_h->free();                                                | *|
|* | 78|     test_s.free();        // Stack: nothing else to release        | *|
|* | 79|                                                                    | *|
|* | 80|     a = a_function();                                              | *|
|* | 81|     printf("%d\n", a->value); // 1                                 | *|
|* | 82|     a->free();                                                     | *|
|* | 83|     return (0);                                                    | *|
|* | 84| }                                                                  | *|
|* | 85|                                                                    | *|
|* |________________________________________________________________________| *|
|*                                                                            *|
|*    _______                                                                 *|
|*  _| NOTES |______________________________________________________________  *|
|* | '"""""""'                                                              | *|
|* |                                                                        | *|
|* | TRAMPOLINES ARE CURRENTLY GENERATED FOR <INTEL> CPUS IN 16, 32 AND     | *|
|* | 64-BIT MODE. ARM AND POWERPC ARE WORK IN PROGRESS.                     | *|
|* |                                                                        | *|
|* | THE HEADER SUPPRESSES THE STACK PROTECTOR AROUND ITS OWN CODE, BECAUSE | *|
|* | GCC'S CANARY PROLOGUE CLOBBERS THE REGISTER THE TRAMPOLINE DELIVERS    | *|
|* | THE OBJECT POINTER IN. THE SUPPRESSION IS PUSHED AND POPPED, SO IT     | *|
|* | DOES NOT LEAK INTO THE TRANSLATION UNIT THAT INCLUDED THE HEADER.      | *|
|* |                                                                        | *|
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
#define OBJECT_H 202608 /* VERSION */

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
 * PTR		ALLOC(LET);
 * PTR		ALLOC_EXE(PTR, LET);
 * void		FREE(PTR);
 * void		FREE_EXE(PTR);
 * BOOLEAN	IS_HEAP(PTR);
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
#define OBJ(OBJECT_NAME, VARIABLE_NAME) \
	OBJECT OBJECT_NAME	VARIABLE_NAME;\
	\
	SET_RAX(&VARIABLE_NAME);\
	OBJECT_NAME

#define NEW(OBJECT_NAME, VARIABLE_NAME) \
	OBJECT OBJECT_NAME	*VARIABLE_NAME = \
		(OBJECT OBJECT_NAME *)ALLOC(sizeof(OBJECT OBJECT_NAME));\
	\
	if (VARIABLE_NAME)\
		SET_RAX(&VARIABLE_NAME);\
	\
	if (VARIABLE_NAME)\
		OBJECT_NAME

#define DESTROY(THE_OBJECT) FREE(THE_OBJECT)
#else /* !LOCALMACRO__GCC_C23 */
#define OBJ(OBJECT_NAME, VARIABLE_NAME) \
	OBJECT OBJECT_NAME	VARIABLE_NAME;\
	extern void			OBJECT_NAME();\
	\
	SET_RAX(&VARIABLE_NAME);\
	OBJECT_NAME

#define NEW(OBJECT_NAME, VARIABLE_NAME) \
	OBJECT OBJECT_NAME	*VARIABLE_NAME = \
		(OBJECT OBJECT_NAME *)ALLOC(sizeof(OBJECT OBJECT_NAME));\
	extern void			OBJECT_NAME();\
	\
	if (VARIABLE_NAME)\
		SET_RAX(&VARIABLE_NAME);\
	\
	if (VARIABLE_NAME)\
		OBJECT_NAME

#define DESTROY(THE_OBJECT) \
	if (IS_HEAP(THE_OBJECT))\
		FREE(THE_OBJECT)
#endif /* LOCALMACRO__GCC_C23 */

#define obj(object_name, variable_name) OBJ(object_name, variable_name)
#define new(object_name, variable_name) NEW(object_name, variable_name)
#define destroy(the_object) \
	if (IS_HEAP(the_object))\
		FREE(the_object)

#define OBJECT__INJECT(TARGET, SOURCE) \
	do\
	{\
		register LET	INDEX;\
		BYTE			__OP__[LOCALMACRO__FUNCTION_SIZE];\
		\
		INDEX = 0;\
		LOCALMACRO__INJECTOR(THIS, SOURCE) \
		(TARGET) = ALLOC_EXE(__OP__, LOCALMACRO__FUNCTION_SIZE);\
		/* DO NOT BE AFRAID MY CHILD, IT IS W^X SAFE. I KNOW WHAT I AM DOING */\
	}\
	while (0)

#define object__inject(target, source) \
	do\
	{\
		register LET	INDEX;\
		BYTE			__OP__[LOCALMACRO__FUNCTION_SIZE];\
		\
		INDEX = 0;\
		LOCALMACRO__INJECTOR(this, source) \
		(target) = ALLOC_EXE(__OP__, LOCALMACRO__FUNCTION_SIZE);\
		/* DO NOT BE AFRAID MY CHILD, IT IS W^X SAFE. I KNOW WHAT I AM DOING */\
	}\
	while (0)

#define OBJECT__EJECT(MEMBER_NAME) FREE_EXE(MEMBER_NAME)
#define object__eject(member_name) FREE_EXE(member_name)

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

/* WIP: ARM, POWERPC, ETC... */
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
