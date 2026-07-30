# PASCAL

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PASCAL.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/PASCAL.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/PASCAL.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_PASCAL
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/PASCAL.H"
> ```

## Abstract

Defines a legacy calling convention where arguments are pushed right-to-left, and the callee performs stack cleanup.

Mostly associated with 16-bit/legacy Windows and older compilers, but still exposed in some toolchains for ABI compatibility.

In **16-bit Windows**, system APIs use the `FAR PASCAL` calling convention (`far` call + `pascal` stack cleanup). They are invoked normally; no manual far pointer handling is required.

## Contents

| Contents List    |
| ---------------- |
| `#define PASCAL` |

----

### PASCAL

```c
#define PASCAL
```

**Examples**:
```c
int PASCAL	WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, ...)
{
	. . .
}

extern PASCAL int	WinMain(...);
```

## References

 - [Obsolete Calling Conventions - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/obsolete-calling-conventions?view=msvc-170)
 - [BORLAND® C++ PROGRAMMER'S GUIDE (page 50) - http://bitsavers.informatik.uni-stuttgart.de](http://bitsavers.informatik.uni-stuttgart.de/pdf/borland/borland_C++/Borland_C++_Version_3.1_Programmers_Guide_1992.pdf#page=65)
 - [Index of Topics - open-watcom.github.io](https://open-watcom.github.io/open-watcom-v2-wikidocs/clr.html#Keywords)
 - [pascal - clang.llvm.org](https://clang.llvm.org/docs/AttributeReference.html#pascal)
