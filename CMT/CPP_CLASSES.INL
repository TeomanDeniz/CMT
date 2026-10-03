#ifndef SEAL_CMT_CPP_CLASSES
#define SEAL_CMT_CPP_CLASSES

/******************************************************************************\
|* THE C++ BINDING OF AN OOP MODULE, WRITTEN ONCE FOR EVERY MODULE.           *|
|*                                                                            *|
|* A MODULE DESCRIBES ITS API IN TABLES (X-MACROS), ONE TABLE PER GROUP:      *|
|*                                                                            *|
|*   METHOD(UPPER, lower, KEY, (PARAMETERS), (ARGUMENTS), PROLOGUE)           *|
|*     A CHAINABLE MEMBER: RETURNS THE OWNING OBJECT.                         *|
|*   QUERY(TYPE, UPPER, lower, KEY, (PARAMETERS), (ARGUMENTS), PROLOGUE)      *|
|*     A MEMBER THAT RETURNS TYPE; ITS CONTENT DOES THE "return" ITSELF.      *|
|*   FIELD(TYPE, UPPER, lower)                                                *|
|*     A VALUE: READ-ONLY OR WRITABLE DEPENDING ON THE HELPER THAT EXPANDS IT *|
|*                                                                            *|
|* KEY NAMES THE SHARED CONTENT MACRO; THE MODULE TURNS IT INTO THE MACRO     *|
|* NAME. PROLOGUE ADAPTS PARAMETERS BEFORE THE CONTENT RUNS, OR IS            *|
|* CMT__OOP__NOTHING.                                                         *|
|*                                                                            *|
|* EVERY UPPER CASE MEMBER GETS ITS lower CASE TWIN IN THE SAME CLASS:        *|
|*   METHODS - AN INLINE ONE-LINE FORWARDER,                                  *|
|*   VALUES AND GROUPS - A REFERENCE TO THE SAME OBJECT.                      *|
|* SO THERE IS ONE CLASS, ONE LAYOUT, AND NO CASTS BETWEEN CLASSES.           *|
|*                                                                            *|
|* A GROUP (console.put, console.cursor, ...) IS A SMALL CLASS THAT KEEPS A   *|
|* POINTER TO ITS OWNER, SO ITS MEMBERS FIND THE OBJECT WITHOUT offsetof.     *|
|* EVERY CLASS THAT DEFINES MEMBERS (THE OBJECT ITSELF INCLUDED) ANSWERS      *|
|* CMT__METHOD__OWNER(), SO EVERY MEMBER BODY STARTS THE SAME WAY.            *|
\******************************************************************************/

/* *************************** [v] PROLOGUES [v] **************************** */
/*  NOT EMPTY ON PURPOSE: AN EMPTY MACRO ARGUMENT IS UNDEFINED IN C89/C++98   */
/*   AN UNNAMED enum IS A DECLARATION, SO IT IS ALSO LEGAL BEFORE C89 CODE    */
#define CMT__OOP__NOTHING \
	enum\
	{\
		CMT__VALUE__OOP_NOTHING\
	};

/* THE CONTENT WANTS "char *NAME", THE API TAKES "const char *NAME_VALUE" */
#define CMT__OOP__TEXT(NAME) \
	char	*NAME = const_cast<char *>(NAME##_VALUE);
/* *************************** [^] PROLOGUES [^] **************************** */

/* ************************** [v] DECLARATIONS [v] ************************** */
/* INSIDE THE CLASS: THE UPPER CASE MEMBER AND ITS lower CASE FORWARDER */
#define CMT__OOP_CPP__DECLARE_METHOD(\
	OWNER, \
	UPPER, \
	LOWER, \
	PARAMETERS, \
	ARGUMENTS\
) \
	OWNER	*UPPER PARAMETERS;\
	OWNER	*LOWER PARAMETERS\
	{\
		return (UPPER ARGUMENTS);\
	}

#define CMT__OOP_CPP__DECLARE_QUERY(\
	TYPE, \
	UPPER, \
	LOWER, \
	PARAMETERS, \
	ARGUMENTS\
) \
	TYPE	UPPER PARAMETERS;\
	TYPE	LOWER PARAMETERS\
	{\
		return (UPPER ARGUMENTS);\
	}
/* ************************** [^] DECLARATIONS [^] ************************** */

/* *************************** [v] DEFINITIONS [v] ************************** */
/* OUTSIDE THE CLASS, EMITTED ONCE BY THE MODULE'S LINKER */
#define CMT__OOP_CPP__DEFINE_METHOD(\
	OWNER, \
	SCOPE, \
	UPPER, \
	CONTENT, \
	PARAMETERS, \
	PROLOGUE\
) \
	OWNER\
		*SCOPE::UPPER PARAMETERS\
	{\
		OWNER	*THIS = CMT__METHOD__OWNER();\
		\
		PROLOGUE\
		CONTENT\
		\
		return (THIS);\
	}

#define CMT__OOP_CPP__DEFINE_QUERY(\
	OWNER, \
	TYPE, \
	SCOPE, \
	UPPER, \
	CONTENT, \
	PARAMETERS, \
	PROLOGUE\
) \
	TYPE\
		SCOPE::UPPER PARAMETERS\
	{\
		OWNER	*THIS = CMT__METHOD__OWNER();\
		\
		PROLOGUE\
		CONTENT\
	}
/* *************************** [^] DEFINITIONS [^] ************************** */

/* ****************************** [v] VALUES [v] **************************** */
/******************************************************************************\
|* READ-ONLY VALUES: THE STORAGE IS PRIVATE AND WRITABLE; UPPER AND lower ARE *|
|* BOTH "const TYPE &" TO IT. THE CONTENT STILL WRITES THROUGH                *|
|* OBJECT__INITIALIZE(THIS->GET.UPPER, TYPE), WHICH NOW LANDS ON NON-const    *|
|* STORAGE, SO THE WRITE IS WELL DEFINED.                                     *|
|*                                                                            *|
|* EXPAND THE TABLE ONCE PER HELPER, IN THIS ORDER:                           *|
|*   private:  TABLE(..._STORE)     public:  TABLE(..._EXPOSE)                *|
|*   CONSTRUCTOR:  : FIRST() TABLE(..._INIT_STORE) TABLE(..._INIT_EXPOSE)     *|
\******************************************************************************/
#define CMT__OOP_CPP__READONLY_STORE(TYPE, UPPER, LOWER) \
	TYPE	CMT__VALUE__##UPPER;
#define CMT__OOP_CPP__READONLY_EXPOSE(TYPE, UPPER, LOWER) \
	const TYPE	&UPPER;\
	const TYPE	&LOWER;
#define CMT__OOP_CPP__READONLY_INIT_STORE(TYPE, UPPER, LOWER) \
	, CMT__VALUE__##UPPER()
#define CMT__OOP_CPP__READONLY_INIT_EXPOSE(TYPE, UPPER, LOWER) \
	, UPPER(CMT__VALUE__##UPPER), LOWER(CMT__VALUE__##UPPER)

/* WRITABLE VALUES: UPPER IS THE VALUE, lower IS A REFERENCE TO IT */
#define CMT__OOP_CPP__WRITABLE_STORE(TYPE, UPPER, LOWER) \
	TYPE	UPPER;
#define CMT__OOP_CPP__WRITABLE_EXPOSE(TYPE, UPPER, LOWER) \
	TYPE	&LOWER;
#define CMT__OOP_CPP__WRITABLE_INIT_STORE(TYPE, UPPER, LOWER) \
	, UPPER()
#define CMT__OOP_CPP__WRITABLE_INIT_EXPOSE(TYPE, UPPER, LOWER) \
	, LOWER(UPPER)
/* ****************************** [^] VALUES [^] **************************** */

/* ****************************** [v] GROUPS [v] **************************** */
/******************************************************************************\
|* AN EMPTY FIRST BASE FOR CLASSES THAT ONLY HOLD VALUES. THE GENERATED       *|
|* INITIALIZERS ALL START WITH A COMMA, SO THE LIST NEEDS A FIRST ENTRY; THE  *|
|* EMPTY BASE COSTS NO BYTES.                                                 *|
\******************************************************************************/
namespace cmt
{
	class CMT__OOP_START {};
}

/* THE PART EVERY GROUP SHARES: WHO OWNS IT, AND HOW ITS MEMBERS FIND OUT */
#define CMT__OOP_CPP__GROUP_OWNER(OWNER) \
	public:\
		OWNER	*CMT__METHOD__OWNER(void) const\
		{\
			return (CMT__VALUE__OWNER);\
		}\
	private:\
		OWNER	*CMT__VALUE__OWNER;\
	public:

/* THE OBJECT ITSELF: ITS OWN MEMBERS START FROM "this" */
#define CMT__OOP_CPP__ROOT_OWNER(OWNER) \
	public:\
		OWNER	*CMT__METHOD__OWNER(void)\
		{\
			return (this);\
		}
/* ****************************** [^] GROUPS [^] **************************** */
#endif /* !SEAL_CMT_CPP_CLASSES */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
