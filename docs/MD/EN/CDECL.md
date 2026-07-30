# CDECL

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CDECL.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/CDECL.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/CDECL.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CDECL
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/CDECL.H"
> ```

## Abstract

Defines a calling convention where arguments are passed on the stack, the caller cleans the stack, and (on 32-bit systems) the function name may be decorated.

This is the default calling convention used by most C compilers and allows functions with a variable number of arguments.

## Content

```c
#define CDECL
```

**Examples**:
```c
int CDECL	add(int a, int b)
{
	return a + b;
}

extern CDECL int	printf(const char *format, ...);
```

## References

 - [__cdecl - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/cdecl)
 - [x86 calling conventions - wikipedia.org](https://wikipedia.org/wiki/X86_calling_conventions)
