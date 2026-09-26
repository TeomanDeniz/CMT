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
# : License - GPL-3.0   :: Update - 2026/09/25 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  OBJECT                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| O - OBJECT PROVIDES C-STYLE OBJECT-ORIENTED PROGRAMMING:                 |*|
|*| :   ^^^^^^          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                  |*|
|*| :.., OBJECT DEFINITIONS (OBJECT)                                         |*|
|*| :                                                                        |*|
|*| :.., STACK CONSTRUCTORS (OBJ) AND HEAP CONSTRUCTORS (NEW)                |*|
|*| :                                                                        |*|
|*| :.., AUTOMATIC DESTRUCTOR DISPATCH ON HEAP RELEASE (DELETE), DRIVEN BY   |*|
|*| :  : AN INJECTED <DESTRUCTOR> MEMBER                                     |*|
|*| :                                                                        |*|
|*| :.., BOUND METHODS THROUGH RUNTIME GENERATED TRAMPOLINES                 |*|
|*| :                                                                        |*|
|*| :.., ASSEMBLY-LEVEL INJECTION FOR PERFORMANCE                            |*|
|*| :                                                                        |*|
|*| :.., PLUGGABLE HEAP ALLOCATOR/DEALLOCATOR PER OBJECT TYPE                |*|
|*| :  : (OBJECT__PROTOTYPE_ALLOC / OBJECT__PROTOTYPE_FREE)                  |*|
|*| :                                                                        |*|
|*| :.., CROSS-PLATFORM SUPPORT (16/32/64-BIT INTEL) AND MAJOR COMPILERS     |*|
|*| :                                                                        |*|
|*| :.., MEMORY-EFFICIENT AND FLEXIBLE                                       |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define OBJECT                                                | 87       |*|
|*| #define object                                                |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJ(OBJECT_NAME, VARIABLE_NAME)                       | 112      |*|
|*| #define obj(object_name, variable_name)                       |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define NEW(OBJECT_NAME, VARIABLE_NAME)                       | 183      |*|
|*| #define new(object_name, variable_name)                       |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define DELETE(OBJECT_POINTER)                                | 296      |*|
|*| #define delete(object_pointer)                                |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define DESTROY(THE_OBJECT)                                   | 376      |*|
|*| #define destroy(the_object)                                   |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__CONNECT(OBJECT_TYPE_NAME)                     | 424      |*|
|*| #define object__connect(object_type_name)                     |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__PROTOTYPE_ALLOC(ALLOC)                        | 460      |*|
|*| #define object__prototype_alloc(alloc)                        |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__PROTOTYPE_FREE(FREE)                          | 460      |*|
|*| #define object__prototype_free(free)                          |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__INJECT(TARGET, SOURCE)                        | 515      |*|
|*| #define object__inject(target, source)                        |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__EJECT(MEMBER_NAME)                            | 556      |*|
|*| #define object__eject(member_name)                            |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__INITIALIZE(VARIABLE, TYPE)                    | 614      |*|
|*| #define object__initialize(variable, type)                    |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define OBJECT__COPY(DST, SRC)                                | 728      |*|
|*| #define object__copy(dst, src)                                |          |*|
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
|* : CALL <DESTROY> ON THE OBJECT WHEN IT'S DONE WITH, TO RUN ITS           : *|
|* : <__DESTRUCTOR__> AND FREE THAT DESTRUCTOR'S OWN TRAMPOLINE (SEE        : *|
|* : <DESTROY>). THERE IS NO ALLOCATION TO RELEASE FOR A STACK OBJECT - IT  : *|
|* : GOES AWAY WITH ITS SCOPE AS USUAL.                                     : *|
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
|* : UNLIKE <OBJ>, HEAP INSTANCES OWN THEIR STORAGE. CALL <DELETE> ON THE   : *|
|* : OBJECT WHEN IT'S DONE WITH - IT RUNS <__DESTRUCTOR__>, FREES THAT      : *|
|* : DESTRUCTOR'S TRAMPOLINE, THEN RELEASES THE UNDERLYING ALLOCATION AND   : *|
|* : NULLS THE POINTER (SEE DELETE).                                        : *|
|* :                        ^^^^^^                                          : *|
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
|* : 5| // test->value = 33; -> error: assignment of member 'value' in      : *|
|* : 6| // read-only object                                                 : *|
|* : 7|                                                                     : *|
|* :                                                                        : *|
|* :                   .'''''''''''''''''''''''''''''''.                    : *|
|* :::::::::::::::::::'  THE __DESTRUCTOR__ CONVENTION  ':::::::::::::::::::: *|
|* :      ______     _______                                                : *|
|* : BOTH DELETE AND DESTROY (BELOW) CALL A MEMBER NAMED EXACTLY            : *|
|* : <__DESTRUCTOR__> ON THE OBJECT. THIS MEMBER IS <NOT> CREATED           : *|
|* : AUTOMATICALLY - LIKE EVERY OTHER BOUND METHOD, IT HAS TO BE INJECTED   : *|
|* : BY THE CONSTRUCTOR WITH object__inject:                                : *|
|* :                         ^^^^^^^^^^^^^^                                 : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| object o_test                                                      : *|
|* :  3| {                                                                  : *|
|* :  4|     void    (*test)(void);                                         : *|
|* :  5|     void    (*__DESTRUCTOR__)(void);                               : *|
|* :  6| };                                                                 : *|
|* :  7|                                                                    : *|
|* :  8| void my_destructor(void)                                           : *|
|* :  9| {                                                                  : *|
|* : 10|     object__connect (o_test);                                      : *|
|* : 11|                                                                    : *|
|* : 12|     object__eject (this->test); // eject every OTHER member here   : *|
|* : 13| }                                                                  : *|
|* : 14|                                                                    : *|
|* : 15| void o_test(void)                                                  : *|
|* : 16| {                                                                  : *|
|* : 17|     object__connect (o_test);                                      : *|
|* : 18|                                                                    : *|
|* : 19|     object__inject (this->test, test);                             : *|
|* : 20|     object__inject (this->__DESTRUCTOR__, my_destructor);          : *|
|* : 21| }                                                                  : *|
|* : 22|                                                                    : *|
|* :                 ________________          ______________               : *|
|* : /!\ THE NAME IS ALWAYS UPPERCASE, EXACTLY __DESTRUCTOR__,              : *|
|* : REGARDLESS OF WHETHER THE OBJECT WAS DECLARED WITH THE UPPERCASE OR    : *|
|* : LOWERCASE MACRO FAMILY. THE DOUBLE-UNDERSCORE, ALL-CAPS SHAPE IS THE   : *|
|* : SIGNAL THAT THIS MEMBER IS FRAMEWORK-RECOGNIZED AND RESERVED: DON'T    : *|
|* : REUSE IT FOR ANYTHING ELSE, AND DON'T RELY ON ANY OTHER CASING BEING   : *|
|* : RECOGNIZED BY DELETE/DESTROY.                                          : *|
|* :               ^^^^^^ ^^^^^^^                                           : *|
|* : NOTHING CHECKS THAT <__DESTRUCTOR__> WAS ACTUALLY INJECTED. CALLING    : *|
|* : <DELETE> OR <DESTROY> ON AN OBJECT WHOSE CONSTRUCTOR NEVER INJECTED    : *|
|* : <__DESTRUCTOR__> JUMPS THROUGH AN UNINITIALIZED FUNCTION POINTER.      : *|
|* : EVERY <object> USED WITH <DELETE>/<DESTROY> <MUST> DECLARE AND INJECT  : *|
|* : __DESTRUCTOR__.                                                        : *|
|* : ^^^^^^^^^^^^^^                                                         : *|
|* : THE DESTRUCTOR'S OWN JOB IS TO EJECT EVERY <OTHER> INJECTED MEMBER OF  : *|
|* : THE OBJECT (SEE <OBJECT__EJECT> BELOW) - <DELETE>/<DESTROY> ONLY TAKE  : *|
|* : CARE OF THE DESTRUCTOR MEMBER ITSELF AND, FOR <DELETE>, THE UNDERLYING : *|
|* : ALLOCATION.                                                            : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: DELETE :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define DELETE(OBJECT_POINTER)                                      : *|
|* : 3| #define delete(object_pointer)                                      : *|
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
|* : 4| delete (test);                                                      : *|
|* : 5|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    free_self(void)                                             : *|
|* : 3| {                                                                   : *|
|* : 4|     object__connect (o_test);                                       : *|
|* : 5|                                                                     : *|
|* : 6|     delete (this);                                                  : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* :                                                                        : *|
|* : DELETE IS A NO-OP ON A NULL POINTER. OTHERWISE IT, IN ORDER:           : *|
|* : ^^^^^^                                                                 : *|
|* : 1. CALLS <OBJECT_POINTER->__DESTRUCTOR__()>. 2. FREES THE EXECUTABLE   : *|
|* : TRAMPOLINE BEHIND <__DESTRUCTOR__> ITSELF. 3. RECOVERS THE             : *|
|* : ALLOCATOR/FREER PAIR THAT WAS STORED FOR THIS OBJECT WHEN IT WAS       : *|
|* : CREATED (BY <NEW>, OR BY                                               : *|
|* : <OBJECT__PROTOTYPE_ALLOCATOR>/<OBJECT__PROTOTYPE_FREER>, SEE BELOW),   : *|
|* : AND CALLS IT ON THE ALLOCATION. 4. SETS <OBJECT_POINTER> TO 0.         : *|
|* :                                                             ^          : *|
|* : THE DESTRUCTOR IS STILL RESPONSIBLE FOR EJECTING EVERY <OTHER>         : *|
|* : INJECTED MEMBER FIRST - <DELETE> DOES NOT WALK THE OBJECT'S MEMBERS,   : *|
|* : IT ONLY KNOWS ABOUT __DESTRUCTOR__ AND THE UNDERLYING ALLOCATION:      : *|
|* :                     ^^^^^^^^^^^^^^                                     : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void    my_destructor(void)                                        : *|
|* :  3| {                                                                  : *|
|* :  4|     object__connect (o_test);                                      : *|
|* :  5|                                                                    : *|
|* :  6|     object__eject (this->test); // every member except             : *|
|* :  7|                                 // __DESTRUCTOR__ itself           : *|
|* :  8| }                                                                  : *|
|* :  9|                                                                    : *|
|* : 10| void    free_self(void)                                            : *|
|* : 11| {                                                                  : *|
|* : 12|     object__connect (o_test);                                      : *|
|* : 13|                                                                    : *|
|* : 14|     delete (this); // runs __DESTRUCTOR__ (ejects `test`), then    : *|
|* : 15|                    // frees                                        : *|
|* : 16| }                                                                  : *|
|* : 17|                                                                    : *|
|* :                                                                        : *|
|* : BECAUSE STEP 2 AND THE POINTER-NULL HAPPEN AUTOMATICALLY, NOTHING      : *|
|* : NEEDS TO BE EJECTED OR NULLED BY HAND FOR THE DESTRUCTOR MEMBER OR THE : *|
|* : ALLOCATION ITSELF - ONLY THE OBJECT'S <OTHER> BOUND METHODS NEED AN    : *|
|* : EXPLICIT object__eject INSIDE THE DESTRUCTOR.                          : *|
|* :          ^^^^^^^^^^^^^                                                 : *|
|* : AFTER THE CALL THE POINTER IS <0>; NOTHING IN THE OBJECT MAY BE        : *|
|* : TOUCHED AGAIN.                                                         : *|
|* : ______                                                                 : *|
|* : DELETE IS HEAP-ONLY. CALLING IT ON A STACK OBJECT (CREATED WITH        : *|
|* : obj) IS UNDEFINED - USE DESTROY FOR THOSE INSTEAD.                     : *|
|* : ^^^                     ^^^^^^^                                        : *|
|* : IF THE POINTER WAS DECLARED <const>, DELETE IT FROM INSIDE A METHOD,   : *|
|* : WHERE THE <this> PRODUCED BY <OBJECT__CONNECT> CARRIES NO QUALIFIER,   : *|
|* : OR CAST IT AT THE CALL SITE - DEPENDING ON HOW STRICT THE COMPILER IS  : *|
|* : ABOUT QUALIFIERS ON <free>.                                            : *|
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
|* :                                             ____________               : *|
|* : RUNS THE DESTRUCTOR OF AN OBJECT THAT LIVES ON THE STACK (CREATED      : *|
|* : WITH <OBJ>/<obj>). IT CALLS <THE_OBJECT.__DESTRUCTOR__()> AND FREES    : *|
|* : THAT DESTRUCTOR'S OWN TRAMPOLINE - NOTHING ELSE.                       : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| obj (o_test, test) ();                                              : *|
|* : 3| ...                                                                 : *|
|* : 4| destroy (test);                                                     : *|
|* : 5|                                                                     : *|
|* :        ______  _______                                                 : *|
|* : UNLIKE DELETE, DESTROY DOES NOT CHECK FOR NULL, DOES NOT TOUCH ANY     : *|
|* : ALLOCATION, AND DOES NOT NULL OUT ITS ARGUMENT - THERE IS NO           : *|
|* : ALLOCATION TO RELEASE FOR A STACK OBJECT, AND THE VARIABLE ITSELF GOES : *|
|* : OUT OF SCOPE NORMALLY AT THE END OF THE BLOCK. AS WITH <DELETE>, THE   : *|
|* : DESTRUCTOR FUNCTION IS STILL RESPONSIBLE FOR EJECTING EVERY OTHER      : *|
|* : INJECTED MEMBER:                                                       : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void    my_destructor(void)                                        : *|
|* :  3| {                                                                  : *|
|* :  4|     object__connect (o_test);                                      : *|
|* :  5|                                                                    : *|
|* :  6|     object__eject (this->test);                                    : *|
|* :  7| }                                                                  : *|
|* :  8|                                                                    : *|
|* :  9| obj (o_test, test) ();                                             : *|
|* : 10| ...                                                                : *|
|* : 11| destroy (test); // runs __DESTRUCTOR__, frees its trampoline       : *|
|* : 12|                                                                    : *|
|* : _______                                                                : *|
|* : DESTROY DOES NOT DISTINGUISH STACK OBJECTS FROM HEAP OBJECTS BY        : *|
|* : ITSELF - CALLING IT ON A HEAP POINTER RUNS THE DESTRUCTOR AND FREES    : *|
|* : ITS TRAMPOLINE BUT LEAKS THE OBJECT ALLOCATION, SINCE ONLY <DELETE>    : *|
|* : KNOWS HOW TO GIVE THAT BACK. USE <DESTROY> FOR STACK OBJECTS AND       : *|
|* : <DELETE> FOR HEAP OBJECTS.                                             : *|
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
|*            ....................................................            *|
|* ...........: OBJECT__PROTOTYPE_ALLOC / OBJECT__PROTOTYPE_FREE :........... *|
|* :          ''''''''''''''''''''''''''''''''''''''''''''''''''''          : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT__PROTOTYPE_ALLOC(ALLOC)                              : *|
|* : 3| #define object__prototype_alloc(alloc)                              : *|
|* : 4|                                                                     : *|
|* : 5| #define OBJECT__PROTOTYPE_FREE(FREE)                                : *|
|* : 6| #define object__prototype_free(free)                                : *|
|* : 7|                                                                     : *|
|* :                                        ___                   _____     : *|
|* : BY DEFAULT, A HEAP OBJECT CREATED WITH NEW IS ALLOCATED WITH ALLOC     : *|
|* : AND RELEASED WITH <FREE>.                                              : *|
|* : <OBJECT__PROTOTYPE_ALLOC>/<OBJECT__PROTOTYPE_FREE> LET A CONSTRUCTOR   : *|
|* : OVERRIDE THAT PAIR FOR ITS OWN OBJECT TYPE - FOR EXAMPLE, TO USE A     : *|
|* : POOL ALLOCATOR, A TRACKING ALLOCATOR, OR ANYTHING ELSE WITH THE SAME   : *|
|* : SIGNATURE AS ALLOC/FREE.                                               : *|
|* :              ^^^^^ ^^^^                                                : *|
|* : BOTH GO WHERE <OBJECT__CONNECT> WOULD OTHERWISE GO, AS THE <FIRST      : *|
|* : STATEMENT OF THE CONSTRUCTOR, AND BOTH ARE NEEDED TOGETHER -           : *|
|* : <MY_ALLOCATOR> PERFORMS THE ALLOCATION BUT DOES <NOT> BY ITSELF RECORD : *|
|* : WHAT TO CALL TO FREE IT; MY_FREER RECORDS THAT:                        : *|
|* :                          ^^^^^^^^                                      : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void o_test(void)                                                  : *|
|* :  3| {                                                                  : *|
|* :  4|     OBJECT__PROTOTYPE_ALLOC (my_alloc);                            : *|
|* :  5|     OBJECT__PROTOTYPE_FREE (my_free);                              : *|
|* :  6|                                                                    : *|
|* :  7|     OBJECT__CONNECT (o_test);                                      : *|
|* :  8|                                                                    : *|
|* :  9|     ...                                                            : *|
|* : 10| }                                                                  : *|
|* : 11|                                                                    : *|
|* : _________                      ___                   ___               : *|
|* : ALLOCATOR MUST ACCEPT A SINGLE LET SIZE AND RETURN A PTR,              : *|
|* : EXACTLY LIKE <ALLOC>. <FREER> MUST ACCEPT A SINGLE <PTR> AND RETURN    : *|
|* : <void>, EXACTLY LIKE <FREE>; IT IS WHAT <DELETE> WILL CALL ON THE      : *|
|* : ALLOCATION LATER.                                                      : *|
|* :     __________________ _______________________                         : *|
|* : /!\ ALWAYS PAIR THESE. OBJECT__PROTOTYPE_ALLOC ON ITS OWN LEAVES THE   : *|
|* : ALLOCATION'S STORED FREE-FUNCTION UNINITIALIZED - <DELETE> WILL READ   : *|
|* : GARBAGE THERE AND CALL IT, WHICH IS UNDEFINED BEHAVIOR. THERE IS NO    : *|
|* : COMPILER CHECK FOR "THE CONSTRUCTOR CALLED THE ALLOCATOR BUT FORGOT    : *|
|* : THE FREER": IT IS THE CONSTRUCTOR AUTHOR'S RESPONSIBILITY TO ALWAYS    : *|
|* : CALL BOTH, IN THAT ORDER, EVERY TIME THE OBJECT TYPE IS CONSTRUCTED.   : *|
|* :                                                        _______         : *|
|* : IF A CONSTRUCTOR ONLY NEEDS A CUSTOM ALLOCATOR BUT THE DEFAULT FREER   : *|
|* : (FREE) IS STILL CORRECT FOR IT, CALL <OBJECT__PROTOTYPE_FREE (FREE)>   : *|
|* : EXPLICITLY RATHER THAN ASSUMING THE SLOT DEFAULTS TO IT.               : *|
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
|* :  6|     object__inject (this->test, test); // this->test  = test       : *|
|* :  7|     object__inject (this->abc, test); // this->abc = test          : *|
|* :  8|     object__inject (struct_ptr->abc, test); // any lvalue works    : *|
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
|* : AGAIN WITH <OBJECT__EJECT>.                                            : *|
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
|* : RELEASES THE EXECUTABLE TRAMPOLINE BEHIND AN INJECTED MEMBER. EVERY    : *|
|* : BOUND METHOD INJECTED WITH <OBJECT__INJECT> OWNS ONE SUCH ALLOCATION,  : *|
|* : AND IT HAS TO BE GIVEN BACK EXPLICITLY - NOTHING DOES THIS             : *|
|* : AUTOMATICALLY EXCEPT <__DESTRUCTOR__>'S OWN TRAMPOLINE, WHICH          : *|
|* : DELETE/DESTROY FREE BY THEMSELVES.                                     : *|
|* : ^^^^^^ ^^^^^^^                                                         : *|
|* : THE NATURAL PLACE TO EJECT EVERY <OTHER> MEMBER IS THE OBJECT'S OWN    : *|
|* : <__DESTRUCTOR__> FUNCTION, SO A SINGLE CALL TO <delete>/<destroy>      : *|
|* : CLEANS UP THE WHOLE OBJECT:                                            : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| object o_test                                                      : *|
|* :  3| {                                                                  : *|
|* :  4|     void    (*test)(void);                                         : *|
|* :  5|     void    (*__DESTRUCTOR__)(void);                               : *|
|* :  6| };                                                                 : *|
|* :  7|                                                                    : *|
|* :  8| void test(void)                                                    : *|
|* :  9| {                                                                  : *|
|* : 10|     object__connect (o_test);                                      : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* : 13| void my_destructor(void)                                           : *|
|* : 14| {                                                                  : *|
|* : 15|     object__connect (o_test);                                      : *|
|* : 16|                                                                    : *|
|* : 17|     object__eject (this->test); // every member except __DESTRUCTO : *|
|* : 18|         R__ itself                                                 : *|
|* : 19| }                                                                  : *|
|* : 20|                                                                    : *|
|* : 21| void o_test(void)                                                  : *|
|* : 22| {                                                                  : *|
|* : 23|     object__connect (o_test);                                      : *|
|* : 24|                                                                    : *|
|* : 25|     object__inject (this->test, test);                             : *|
|* : 26|     object__inject (this->__DESTRUCTOR__, my_destructor);          : *|
|* : 27| }                                                                  : *|
|* : 28|                                                                    : *|
|* :    ___       ______________                                            : *|
|* : DO NOT EJECT __DESTRUCTOR__'S OWN MEMBER FROM INSIDE ITSELF -          : *|
|* : <DELETE> AND <DESTROY> FREE THAT TRAMPOLINE RIGHT AFTER CALLING IT, SO : *|
|* : EJECTING IT MANUALLY AS WELL WOULD DOUBLE-FREE IT.                     : *|
|* :                          ___                                           : *|
|* : FOR OBJECTS CREATED WITH new, EJECTING ONLY GIVES BACK THE             : *|
|* : EXECUTABLE MEMORY OF THE INJECTED METHODS. THE OBJECT ALLOCATION       : *|
|* : ITSELF IS RELEASED BY <DELETE> (SEE <DELETE>), NOT BY <OBJECT__EJECT>. : *|
|* :........................................................................: *|
|*                                                                            *|
|*                           ......................                           *|
|* ..........................: OBJECT__INITIALIZE :.......................... *|
|* :                         ''''''''''''''''''''''                         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT__INITIALIZE(VARIABLE, TYPE)                          : *|
|* : 3| #define object__initialize(variable, type)                          : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : USED TO INITIALIZE OR MODIFY A VARIABLE THAT IS NORMALLY DECLARED AS   : *|
|* : const, WHILE KEEPING THE VARIABLE READ-ONLY TO NORMAL USER CODE.       : *|
|* : ^^^^^                                                                  : *|
|* : <VARIABLE> IS THE VARIABLE OR OBJECT MEMBER TO INITIALIZE, AND <TYPE>  : *|
|* : IS ITS DECLARED TYPE:                                                  : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| object test_object_type                                            : *|
|* :  3| {                                                                  : *|
|* :  4|     void        (*add)(int);                                       : *|
|* :  5|     const int   value;                                             : *|
|* :  6|     void        (*free)(void);                                     : *|
|* :  7| };                                                                 : *|
|* :  8|                                                                    : *|
|* :  9| void test_object_type(int start_var)                               : *|
|* : 10| {                                                                  : *|
|* : 11|     object__connect (test_object_type);                            : *|
|* : 12|                                                                    : *|
|* : 13|     object__initialize (this->value, int) = start_var;             : *|
|* : 14| }                                                                  : *|
|* : 15|                                                                    : *|
|* :                                                                        : *|
|* : ONCE INITIALIZED, value CAN BE READ NORMALLY:                          : *|
|* :                   ^^^^^                                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| printf("%d\n", test.value);                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : BUT ATTEMPTING TO MODIFY IT DIRECTLY IS REJECTED BY THE COMPILER:      : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| test.value = 33; // Error: value is const                           : *|
|* : 3|                                                                     : *|
|* :                                           __________________           : *|
|* : WHEN MODIFICATION IS REQUIRED INTERNALLY, object__initialize CAN BE    : *|
|* : USED AGAIN TO ACCESS THE UNDERLYING STORAGE:                           : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| object__initialize (test.value, int) = 33;                          : *|
|* : 3|                                                                     : *|
|* :                                          ________                      : *|
|* : THE MACRO WORKS BY TAKING THE ADDRESS OF VARIABLE, CASTING THAT        : *|
|* : ADDRESS TO A POINTER TO TYPE, AND DEREFERENCING IT:                    : *|
|* :                         ^^^^                                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| *(TYPE *)(&VARIABLE)                                                : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : THIS ALLOWS THE OBJECT IMPLEMENTATION TO WRITE TO STORAGE DECLARED AS  : *|
|* : <const> WITHOUT REMOVING THE <const> QUALIFIER FROM THE PUBLIC OBJECT  : *|
|* : INTERFACE.                                                             : *|
|* :                                                       _______________  : *|
|* : THE INTENDED USE IS FOR OBJECT MEMBERS THAT SHOULD BE READABLE BY THE  : *|
|* : USER BUT ONLY WRITABLE BY THE OBJECT IMPLEMENTATION, SUCH AS INTERNAL  : *|
|* : STATE, CONFIGURATION VALUES, OR CONSTRUCTOR-INITIALIZED PROPERTIES.    : *|
|* :                                                                        : *|
|* : FOR EXAMPLE:                                                           : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| object test_object_type                                            : *|
|* :  3| {                                                                  : *|
|* :  4|     const int value;                                               : *|
|* :  5| };                                                                 : *|
|* :  6|                                                                    : *|
|* :  7| void test_object_type(int start_var)                               : *|
|* :  8| {                                                                  : *|
|* :  9|     object__connect (test_object_type);                            : *|
|* : 10|                                                                    : *|
|* : 11|     object__initialize (this->value, int) = start_var;             : *|
|* : 12| }                                                                  : *|
|* : 13|                                                                    : *|
|* :                                                                        : *|
|* : THE USER CAN THEN READ THE VALUE:                                      : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| printf("%d\n", test.value);                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : WHILE DIRECT MODIFICATION IS PREVENTED:                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| test.value = 33; // Error                                           : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : THE IMPLEMENTATION CAN STILL EXPLICITLY INITIALIZE OR UPDATE THE       : *|
|* : VALUE:                                                                 : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| object__initialize (test.value, int) = 33;                          : *|
|* : 3|                                                                     : *|
|* : __________________     __________________                              : *|
|* : OBJECT__INITIALIZE AND object__initialize ARE EQUIVALENT FORMS.        : *|
|* : THE UPPERCASE FORM FOLLOWS THE MACRO NAMING CONVENTION, WHILE THE      : *|
|* : LOWERCASE FORM IS INTENDED FOR NORMAL OBJECT-ORIENTED USAGE.           : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ................                              *|
|* .............................: OBJECT__COPY :............................. *|
|* :                            ''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define OBJECT__COPY(DST, SRC)                                      : *|
|* : 3| #define object__copy(dst, src)                                      : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : IT COPIES YOUR OBJECT TO DESTINATION.                                  : *|
|* :                                                                        : *|
|* : YOU CAN ALSO USE MEMCPY FOR THAT INSTEAD OF THIS MACRO.                : *|
|* :                                                                        : *|
|* : AND BE AWARE: THIS IS NOT CREATING A NEW OBJECT!!!                     : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| object o_object test;                                               : *|
|* : 3| obj (o_object, test2) ();                                           : *|
|* : 4|                                                                     : *|
|* : 5| object__copy (&test, &test2);                                       : *|
|* : 6| // Now both test and test2 are same                                 : *|
|* : 7|                                                                     : *|
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
|* | 11|     void    (*__DESTRUCTOR__)(void);                               | *|
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
|* | 28| void    my_destructor(void)                                        | *|
|* | 29| {                                                                  | *|
|* | 30|     object__connect (test_object_type);                            | *|
|* | 31|                                                                    | *|
|* | 32|     object__eject (this->add);                                     | *|
|* | 33|     object__eject (this->set);                                     | *|
|* | 34|     // __DESTRUCTOR__'s own trampoline is freed automatically      | *|
|* | 35|     // by DELETE/DESTROY - don't eject it here yourself            | *|
|* | 36| }                                                                  | *|
|* | 37|                                                                    | *|
|* | 38| void    test_object_type(int start_var)                            | *|
|* | 39| {                                                                  | *|
|* | 40|     object__connect (test_object_type);                            | *|
|* | 41|                                                                    | *|
|* | 42|     object__inject (this->add, add);                               | *|
|* | 43|     object__inject (this->set, set);                               | *|
|* | 44|     object__inject (this->__DESTRUCTOR__, my_destructor);          | *|
|* | 45|     this->value = start_var;                                       | *|
|* | 46| }                                                                  | *|
|* | 47|                                                                    | *|
|* | 48| void    *a_function(void)                                          | *|
|* | 49| {                                                                  | *|
|* | 50|     new (test_object_type, result) (1); // Heap                    | *|
|* | 51|                                                                    | *|
|* | 52|     return (result);                                               | *|
|* | 53| }                                                                  | *|
|* | 54|                                                                    | *|
|* | 55| int    main(void)                                                  | *|
|* | 56| {                                                                  | *|
|* | 57|     object test_object_type    *a;                                 | *|
|* | 58|                                                                    | *|
|* | 59|     // Yeah, variable attributes works too                         | *|
|* | 60|     const new (test_object_type, test_h) (42);                     | *|
|* | 61|     obj (test_object_type, test_s) (22); // Stack                  | *|
|* | 62|                                                                    | *|
|* | 63|     printf("%d\n", test_h->value); // 42                           | *|
|* | 64|     test_h->add(42);                                               | *|
|* | 65|     printf("%d\n", test_h->value); // 84                           | *|
|* | 66|     printf("%d\n", test_s.value); // 22                            | *|
|* | 67|                                                                    | *|
|* | 68|     test_s.value = 33;                                             | *|
|* | 69|     test_h->set(33); // I needed to do this in C++ way.            | *|
|* | 70|     // test_h->value = 33;                                         | *|
|* | 71|     // error: assignment of member 'value' in read-only object     | *|
|* | 72|                                                                    | *|
|* | 73|     printf("%d\n", test_h->value); // 33                           | *|
|* | 74|     printf("%d\n", test_s.value); // 33                            | *|
|* | 75|                                                                    | *|
|* | 76|     delete (test_h); // Heap: runs __DESTRUCTOR__, then frees the  | *|
|* | 77|                      // allocation                                 | *|
|* | 78|     destroy (test_s); // Stack: runs __DESTRUCTOR__ only, nothing  | *|
|* | 79|                       // to free                                   | *|
|* | 80|                                                                    | *|
|* | 81|     a = a_function();                                              | *|
|* | 82|     printf("%d\n", a->value); // 1                                 | *|
|* | 83|     delete (a);                                                    | *|
|* | 84|     return (0);                                                    | *|
|* | 85| }                                                                  | *|
|* | 86|                                                                    | *|
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

/* ****************************** [v] C++ [v] ******************************* */
#ifdef __cplusplus /* C++ */
#define OBJECT_H
#endif /* __cplusplus */
/* ****************************** [^] C++ [^] ******************************* */

#ifndef OBJECT_H
#define OBJECT_H 202609 /* VERSION */

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
#undef INCL_CMT_ASM_MOV_PTR

/* **************************** [v] INCLUDES [v] **************************** */
#define INCL_CMT_ASM_SIZEOF /* INSTEAD OF GETTING EVERYING, */
#define INCL_CMT_ASM_OP /* JUST GET WHAT WE NEED. */
#define INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER /* NO NEED */
#define INCL_CMT_ASM_OTHERS
#define INCL_CMT_ASM_MOV_PTR
#define INCL_CMT_ASM_MOV
#define INCL_CMT_ASM_MOVABS
#define INCL_CMT_ASM_JMP
#define INCL_CMT_ASM_PUSH
#include "ASM.H"
/******* """""""
 * #define _ENDBR64
 * #define _MOVABS_R10_(IMM64)
 * #define _MOVABS_R11_(IMM64)
 * #define _MOV_R10_TO_PTR_R11
 * #define _JMP_R11
 * #define _ENDBR32
 * #define _MOV_PTR32_(IMM32, IMM32)
 * #define _JMP_REL32_(IMM32)
 * #define _PUSH_DX
 * #define _MOV_AX
 * #define _MOV_DX
 * #define _MOV_AX_TO_PTR_DX
 * #define _POP_DX
 * #define _PUSH_(VAR)
 * #define _RET
 * #define SIZEOF_ENDBR64
 * #define SIZEOF_MOVABS_R10_
 * #define SIZEOF_MOVABS_R11_
 * #define SIZEOF_MOV_R10_TO_PTR_R11
 * #define SIZEOF_JMP_R11
 * #define SIZEOF_ENDBR32
 * #define SIZEOF_MOV_PTR32_
 * #define SIZEOF_JMP_REL32_
 * #define SIZEOF_PUSH_DX
 * #define SIZEOF_MOV_AX
 * #define SIZEOF_MOV_DX
 * #define SIZEOF_MOV_AX_TO_PTR_DX
 * #define SIZEOF_POP_DX
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
#include "ATTRIBUTES/EXTERN_C.H"
/******* """"""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
#include "ATTRIBUTES/VOLATILE.H"
/******* """""""""""""""""""""""
 * #define VOLATILE
 */
#include "ATTRIBUTES/LOCAL.H"
/******* """"""""""""""""""""
 * #define LOCAL
 */
#include "ATTRIBUTES/MAYBE_ARGS.H"
/******* """""""""""""""""""""""""
 * #define MAYBE_ARGS
 */
#include "ENVIRONMENTS/KNR_STYLE.H"
/******* """"""""""""""""""""""""""
 * #define KNR_STYLE
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
#include "KEYWORDS/TYPES.H"
/******* """"""""""""""""""
 * typedef	PTR;
 * typedef	VAR;
 * typedef	LET;
 * typedef	BYTE;
 */
#include "OS_API/MEMORY.H"
/******* """""""""""""""""
 * PTR		ALLOC(LET);
 * PTR		ALLOC_EXE(PTR, LET);
 * void		FREE(PTR);
 * void		FREE_EXE(PTR);
 * BOOLEAN	IS_HEAP(PTR);
 */
#include "LIB/SETJMP.H"
/******* """"""""""""""
 * #define JMP_BUF
 * #define SETJMP(ENV)
 * #define LONGJMP(ENV, VAL)
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ***************************** [v] STDLIB [v] ***************************** */
#ifndef LOCALMACRO__STDLIB
#ifdef __STDC_HOSTED__
#if (__STDC_HOSTED__ == 1)
#define LOCALMACRO__STDLIB
#endif /* __STDC_HOSTED__ == 1 */
#else /* !__STDC_HOSTED__ */
#ifdef __has_include
#if (__has_include(<stdlib.h>))
#define LOCALMACRO__STDLIB
#endif /* __has_include(<stdlib.h>) */
#endif /* __has_include */
#endif /* __STDC_HOSTED__ */
#endif /* !LOCALMACRO__STDLIB */
/* ***************************** [^] STDLIB [^] ***************************** */

/* *********************** [v] DEFAULT ALLOCATOR [v] ************************ */
#ifdef LOCALMACRO__STDLIB
#ifndef CMT_OBJECT_DEFAULT_ALLOC
#include <stdlib.h>
/******* """"""""""
 * void	*malloc(size_t);
 */
#define CMT_OBJECT_DEFAULT_ALLOC malloc
#endif /* !CMT_OBJECT_DEFAULT_ALLOC */

#ifndef CMT_OBJECT_DEFAULT_FREE
#include <stdlib.h>
/******* """"""""""
 * void	free(void *);
 */
#define CMT_OBJECT_DEFAULT_FREE free
#endif /* !CMT_OBJECT_DEFAULT_FREE */
#else /* !LOCALMACRO__STDLIB */
#ifndef CMT_OBJECT_DEFAULT_ALLOC
#define CMT_OBJECT_DEFAULT_ALLOC ALLOC
#endif /* !CMT_OBJECT_DEFAULT_ALLOC */

#ifndef CMT_OBJECT_DEFAULT_FREE
#define CMT_OBJECT_DEFAULT_FREE FREE
#endif /* !CMT_OBJECT_DEFAULT_FREE */
#endif /* LOCALMACRO__STDLIB */
/* *********************** [^] DEFAULT ALLOCATOR [^] ************************ */

/* ********************** [v] CHECK FUNCTION SIZE [v] *********************** */
#ifdef __CPU_INTEL__
#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__FUNCTION_SIZE \
	(\
		SIZEOF_ENDBR64 + SIZEOF_MOVABS_R10_ + SIZEOF_MOVABS_R11_ + \
		SIZEOF_MOV_R10_TO_PTR_R11 + SIZEOF_MOVABS_R11_ + SIZEOF_JMP_R11\
	)
#endif /* __SYSTEM_64_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define LOCALMACRO__FUNCTION_SIZE \
	(SIZEOF_ENDBR32 + SIZEOF_MOV_PTR32_ + SIZEOF_JMP_REL32_)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_16_BIT__
#define LOCALMACRO__FUNCTION_SIZE \
	(\
		SIZEOF_PUSH_DX + SIZEOF_MOV_AX + SIZEOF_MOV_DX + \
		SIZEOF_MOV_AX_TO_PTR_DX + SIZEOF_POP_DX + SIZEOF_PUSH_ + SIZEOF_RET\
	)
#endif /* __SYSTEM_16_BIT__ */
#endif /* __CPU_INTEL__ */
/* ********************** [^] CHECK FUNCTION SIZE [^] *********************** */

#define OBJECT struct
#define object struct

#define OBJECT__CONNECT(OBJECT_TYPE_NAME) \
	if (G_OBJECT_SIGNAL_TRANSFER == 1)\
	{\
		G_OBJECT_SIGNAL_TRANSFER = 0;\
		G_OBJECT_NEW_PTR_TRANSFER = (PTR)(\
			(\
				(unsigned char *)ALLOC(\
					sizeof(PTR) + G_OBJECT_SIZE\
				)\
			) + (sizeof(PTR))\
		);\
		\
		if (G_OBJECT_NEW_PTR_TRANSFER)\
		{\
			*(void (**)(PTR))(\
				((unsigned char *)G_OBJECT_NEW_PTR_TRANSFER) - sizeof(PTR)\
			) = FREE;\
		}\
		\
		LONGJMP(G_OBJECT_CONSTURCTOR_JUMP, 1);\
	}\
	\
	OBJECT OBJECT_TYPE_NAME	*const THIS = \
		(OBJECT OBJECT_TYPE_NAME * const)G_OBJECT_THIS_TRANSFER
#define object__connect(object_type_name) \
	if (G_OBJECT_SIGNAL_TRANSFER == 1)\
	{\
		G_OBJECT_SIGNAL_TRANSFER = 0;\
		G_OBJECT_NEW_PTR_TRANSFER = (PTR)(\
			(\
				(unsigned char *)CMT_OBJECT_DEFAULT_ALLOC(\
					sizeof(PTR) + G_OBJECT_SIZE\
				)\
			) + (sizeof(PTR))\
		);\
		\
		if (G_OBJECT_NEW_PTR_TRANSFER)\
		{\
			*(void (**)(PTR))(\
				((unsigned char *)G_OBJECT_NEW_PTR_TRANSFER) - sizeof(PTR)\
			) = FREE;\
		}\
		\
		LONGJMP(G_OBJECT_CONSTURCTOR_JUMP, 1);\
	}\
	\
	OBJECT object_type_name	*const this = \
		(OBJECT object_type_name * const)G_OBJECT_THIS_TRANSFER

#define OBJECT__PROTOTYPE_ALLOC(ALLOC) \
	if (G_OBJECT_SIGNAL_TRANSFER == 1)\
	{\
		G_OBJECT_SIGNAL_TRANSFER = 0;\
		G_OBJECT_NEW_PTR_TRANSFER = (PTR)(\
			(\
				(unsigned char *)(ALLOC)(\
					sizeof(PTR) + G_OBJECT_SIZE\
				)\
			) + (sizeof(PTR))\
		);\
		return ;\
	}
#define object__prototype_alloc(alloc) OBJECT__PROTOTYPE_ALLOC(alloc)

#define OBJECT__PROTOTYPE_FREE(FREE) \
	if (G_OBJECT_NEW_PTR_TRANSFER)\
	{\
		*(void (**)(PTR))(\
			((unsigned char *)G_OBJECT_NEW_PTR_TRANSFER) - sizeof(PTR)\
		) = (FREE);\
	}
#define object__prototype_free(free) OBJECT__PROTOTYPE_FREE(free)

#define OBJ(OBJECT_NAME, VARIABLE_NAME) \
	OBJECT OBJECT_NAME	VARIABLE_NAME;\
	\
	LOCALMACRO__OBJECT_SENDER(&(VARIABLE_NAME));\
	OBJECT_NAME
#define NEW(OBJECT_NAME, VARIABLE_NAME) \
	OBJECT OBJECT_NAME	*VARIABLE_NAME;\
	\
	G_OBJECT_SIGNAL_TRANSFER = 1;\
	G_OBJECT_SIZE = sizeof(OBJECT OBJECT_NAME);\
	\
	do\
	{\
		PTR				__CONSTRUCT_ALLOCATION_OBJECT__ = (PTR)(OBJECT_NAME);\
		\
		if (SETJMP(G_OBJECT_CONSTURCTOR_JUMP) == 0)\
			((void (*)(MAYBE_ARGS))__CONSTRUCT_ALLOCATION_OBJECT__)();\
	}\
	while (0);\
	\
	VARIABLE_NAME = (OBJECT OBJECT_NAME *)G_OBJECT_NEW_PTR_TRANSFER;\
	\
	if ((VARIABLE_NAME))\
		LOCALMACRO__OBJECT_SENDER((VARIABLE_NAME));\
	\
	if (VARIABLE_NAME)\
		OBJECT_NAME

#define DELETE(OBJECT_POINTER) \
	do\
	{\
		if (OBJECT_POINTER)\
		{\
			unsigned char	*__BASE__;\
			void			(*__FREEFN__)(PTR);\
			\
			(OBJECT_POINTER)->__DESTRUCTOR__();\
			FREE_EXE((OBJECT_POINTER)->__DESTRUCTOR__);\
			__BASE__ = ((unsigned char *)(OBJECT_POINTER)) - sizeof(PTR);\
			__FREEFN__ = *(void (**)(PTR))__BASE__;\
			__FREEFN__((PTR)__BASE__);\
			(OBJECT_POINTER) = 0;\
		}\
	}\
	while (0)
#define delete(object_pointer) DELETE (object_pointer)

#define DESTROY(OBJECT_POINTER) \
	do\
	{\
		(OBJECT_POINTER).__DESTRUCTOR__();\
		FREE_EXE((OBJECT_POINTER).__DESTRUCTOR__);\
	}\
	while (0)
#define destroy(object_pointer) DESTROY (object_pointer)

#undef object__initialize
#undef OBJECT__INITIALIZE
#define object__initialize(variable, type) *(type *)(&variable)
#define OBJECT__INITIALIZE(VARIABLE, TYPE) *(TYPE *)(&VARIABLE)
#define obj(object_name, variable_name) OBJ(object_name, variable_name)
#define new(object_name, variable_name) NEW(object_name, variable_name)

#define OBJECT__INJECT(TARGET, SOURCE) \
	do\
	{\
		register LET	INDEX;\
		BYTE			__OP__[LOCALMACRO__FUNCTION_SIZE];\
		\
		INDEX = 0;\
		LOCALMACRO__OBJECT_INJECTOR(THIS, SOURCE) \
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
		LOCALMACRO__OBJECT_INJECTOR(this, source) \
		(target) = ALLOC_EXE(__OP__, LOCALMACRO__FUNCTION_SIZE);\
		/* DO NOT BE AFRAID MY CHILD, IT IS W^X SAFE. I KNOW WHAT I AM DOING */\
	}\
	while (0)

#define OBJECT__EJECT(MEMBER_NAME) FREE_EXE(MEMBER_NAME)
#define object__eject(member_name) FREE_EXE(member_name)

#define OBJECT__COPY(DST, SRC) \
	do\
	{\
		register LET		SIZE = sizeof(*(DST));\
		unsigned char		*DESTINATION = (unsigned char *)(DST);\
		const unsigned char	*SOURCE = (const unsigned char *)(SRC);\
		\
		while (SIZE--)\
			*DESTINATION++ = *SOURCE++;\
	}\
	while (0)
#define object__copy(dst, src) OBJECT__COPY(dst, src)
#define LOCALMACRO__OBJECT_SENDER(OBJECT_VARIABLE) \
	G_OBJECT_THIS_TRANSFER = (PTR)(OBJECT_VARIABLE)
#define LOCALMACRO__OBJECT_RECEIVER(__SELF__) \
	(__SELF__) = G_OBJECT_THIS_TRANSFER

/* ####################### [v] TRAMPOLINE CONTENT [v] ####################### */
#ifdef __CPU_INTEL__
#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__OBJECT_INJECTOR(OBJECT_PTR, SOURCE) \
	_ENDBR64\
	_MOVABS_R10_(OBJECT_PTR)\
	_MOVABS_R11_(&G_OBJECT_THIS_TRANSFER)\
	_MOV_R10_TO_PTR_R11\
	_MOVABS_R11_(SOURCE)\
	_JMP_R11
#else /* !__SYSTEM_64_BIT__ */
#ifdef __SYSTEM_32_BIT__
#define LOCALMACRO__OBJECT_INJECTOR(OBJECT_PTR, SOURCE) \
	_ENDBR32\
	_MOV_PTR32_(&G_OBJECT_THIS_TRANSFER, OBJECT_PTR)\
	_JMP_REL32_(SOURCE)
#else /* !__SYSTEM_32_BIT__ */
#ifdef __SYSTEM_16_BIT__
#define LOCALMACRO__OBJECT_INJECTOR(OBJECT_PTR, SOURCE) /* WIP */\
	_PUSH_DX\
	_MOV_AX_(OBJECT_PTR)\
	_MOV_DX_(&G_OBJECT_THIS_TRANSFER)\
	_MOV_AX_TO_PTR_DX\
	_POP_DX\
	_PUSH_(SOURCE)\
	_RET
#endif /* __SYSTEM_16_BIT__ */
#endif /* __SYSTEM_32_BIT__ */
#endif /* __SYSTEM_64_BIT__ */
#endif /* __CPU_INTEL__ */

/* WIP: ARM, POWERPC, ETC... */
/* ####################### [^] TRAMPOLINE CONTENT [^] ####################### */

#ifndef LOCALMACRO__OBJECT_INJECTOR
#define LOCALMACRO__OBJECT_INJECTOR \
	"ERROR: CMT-OBJECTS DOESN'T SUPPORT YOUR CPU (YET)"
#endif /* !LOCALMACRO__OBJECT_INJECTOR */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define G_OBJECT_THIS_TRANSFER MTGOBJTT
#define G_OBJECT_SIGNAL_TRANSFER MTGOBJST
#define G_OBJECT_NEW_PTR_TRANSFER MTGOBJPT
#define G_OBJECT_SIZE MTGOBJSZ
#define G_OBJECT_CONSTURCTOR_JUMP MTGOBJCP
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
extern LOCAL VOLATILE PTR	G_OBJECT_THIS_TRANSFER;
extern LOCAL VAR			G_OBJECT_SIGNAL_TRANSFER;
extern LOCAL PTR			G_OBJECT_NEW_PTR_TRANSFER;
extern LOCAL LET			G_OBJECT_SIZE;
extern LOCAL JMP_BUF		G_OBJECT_CONSTURCTOR_JUMP;
EXTERN_C_END
/* **************************** [^] EXTERNS [^] ***************************** */

/**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**\
|**@                                                                        @**|
|**@            @@@@@@@@@   @@@@@  @@@@@ @@@@@@@@@@@    @@@@@@@             @**|
|**@           @@@:::::@@@ ::@@@  ::@@@ :@:::@@@:::@  @@@:::::@@@           @**|
|**@          :@@@    :@@@  :@@@   :@@@ :   :@@@  :  @@@     ::@@@          @**|
|**@          :@@@@@@@@@@@  :@@@   :@@@     :@@@    :@@@      :@@@          @**|
|**@          :@@@:::::@@@  :@@@   :@@@     :@@@    :@@@      :@@@          @**|
|**@          :@@@    :@@@  :@@@   :@@@     :@@@    ::@@@     @@@           @**|
|**@          @@@@@   @@@@@ ::@@@@@@@@      @@@@@    :::@@@@@@@:            @**|
|**@         :::::   :::::   ::::::::      :::::       :::::::              @**|
|**@                                                                        @**|
|**@ @@@@@       @@@@@ @@@@@@   @@@@@ @@@@@   @@@@ @@@@@@@@@@ @@@@@@@@@@@   @**|
|**@::@@@       ::@@@ ::@@@@@@ ::@@@ ::@@@   @@@: ::@@@:::::@::@@@:::::@@@  @**|
|**@ :@@@        :@@@  :@@@:@@@ :@@@  :@@@  @@@    :@@@  @ :  :@@@    :@@@  @**|
|**@ :@@@        :@@@  :@@@::@@@:@@@  :@@@@@@@     :@@@@@@    :@@@@@@@@@@   @**|
|**@ :@@@        :@@@  :@@@ ::@@@@@@  :@@@::@@@    :@@@::@    :@@@:::::@@@  @**|
|**@ :@@@      @ :@@@  :@@@  ::@@@@@  :@@@ ::@@@   :@@@ :   @ :@@@    :@@@  @**|
|**@ @@@@@@@@@@@ @@@@@ @@@@@  ::@@@@@ @@@@@ ::@@@@ @@@@@@@@@@ @@@@@   @@@@@ @**|
|**@::::::::::: ::::: :::::    ::::: :::::   :::: :::::::::: :::::   :::::  @**|
|**@                                                                        @**|
\**@@[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v][v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]@@**/

/* ******************* [v] LOCALMACRO__SETUP_LINKABLE [v] ******************* */
#ifdef CMT_SETUP
#define LOCALMACRO__SETUP_LINKABLE
#else /* !CMT_SETUP */
#ifndef CMT_EXTERN /* MEANS BOTH NOT DEFINED */
#define LOCALMACRO__SETUP_LINKABLE
#endif /* !CMT_EXTERN */
#endif /* !CMT_SETUP */
/* ******************* [^] LOCALMACRO__SETUP_LINKABLE [^] ******************* */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#define LOCALLINKER__OBJECT \
	EXTERN_C_START\
	LOCAL VOLATILE PTR	G_OBJECT_THIS_TRANSFER = (PTR)0;\
	LOCAL VAR			G_OBJECT_SIGNAL_TRANSFER = (VAR)0;\
	LOCAL PTR			G_OBJECT_NEW_PTR_TRANSFER = (PTR)0;\
	LOCAL LET			G_OBJECT_SIZE = (LET)0;\
	LOCAL JMP_BUF		G_OBJECT_CONSTURCTOR_JUMP;\
	EXTERN_C_END

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
EXTERN_C_START
LOCALLINKER__OBJECT
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "CMT/CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__OBJECT
#define GLOBALLINKER__OBJECT LOCALLINKER__OBJECT
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "CMT/LINKER.INL"
#endif /* CMT_SETUP */
#else /* !LOCALMACRO__SETUP_LINKABLE */
#include "CMT/CONSTRUCTOR.INL"
#endif /* LOCALMACRO__SETUP_LINKABLE */

/**@@[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^][^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]@@**\
|**@          _    _ _______ ____    _      _____ _   _ _  ________ _____   @**|
|**@     /\  | |  | |__   __/ __ \  | |    |_   _| \ | | |/ /  ____|  __ \  @**|
|**@    /  \ | |  | |  | | | |  | |_| |      | | |  \| | ' /| |__  | |__) | @**|
|**@   / /\ \| |  | |  | | | |  | |_| |      | | | . ` |  < |  __| |  _  /  @**|
|**@  / ____ \ |__| |  | | | |__| | | |____ _| |_| |\  | . \| |____| | \ \  @**|
|**@ /_/    \_\____/   |_|  \____/  |______|_____|_| \_|_|\_\______|_|  \_\ @**|
|**@                                                                        @**|
\**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**/

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
