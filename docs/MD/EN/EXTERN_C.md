# EXTERN_C

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/EXTERN_C.gif"/>
</p>

> ## ⚠ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/EXTERN_C.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/EXTERN_C.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_EXTERN_C
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/EXTERN_C.H"
> ```

## Abstract

A lightweight header that provides portable macros for declaring C linkage in shared C/C++ headers.

When included in C++ builds, it expands to `extern "C"` blocks to prevent name mangling; in C builds, it expands to nothing.

This ensures seamless interoperability between C and C++ translation units.

## Contents

| Contents List            |
| ------------------------ |
| `#define EXTERN_C_START` |
| `#define extern_c_start` |
| `#define EXTERN_C_END`   |
| `#define extern_c_end`   |

----

## Usage

```c
#define EXTERN_C_START
#define extern_c_start

#define EXTERN_C_END
#define extern_c_end
```

**Examples**:
```c
extern_c_start

const char *global_variable = "test";

void func()
{
	printf("42");
}

extern_c_end
```

```c
#define CREATE_FUNCTION(NAME) \
	extern_c_start\
	\
	static void NAME()\
	{\
		printf("42\n");\
	}\
	\
	extern_c_end

CREATE_FUNCTION(test_function)
```

## References

 - [`extern` (C++) - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/extern-cpp?view=msvc-170)
 - [Mixing C and C++: extern C - embeddedartistry.com](https://embeddedartistry.com/blog/2017/05/01/mixing-c-and-c-extern-c/)
 - [Name Mangling and extern "C" in C++ - geeksforgeeks.or](https://www.geeksforgeeks.org/cpp/extern-c-in-c/)
