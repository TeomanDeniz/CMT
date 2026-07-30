# FASTCALL

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/FASTCALL.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/FASTCALL.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/FASTCALL.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_FASTCALL
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/FASTCALL.H"
> ```

## Abstract

This header provides a **minimal abstraction for register-based argument passing** on **32-bit x86 systems**, using the compiler-specific `fastcall` calling convention where supported.

On classic **32-bit x86 (i386)** systems, the default C calling convention (`cdecl`) passes **all function arguments on the stack**.
Some compilers (notably **MSVC and GCC-compatible**) provide extensions that allow **a limited number of arguments to be passed via CPU registers**, reducing call overhead for small, frequently called functions.

The `FASTCALL` macro annotates a function (or function pointer) to request that arguments be passed using the compiler's **fastcall** convention, when supported by the compiler and target architecture.

When unsupported, `FASTCALL` safely degrades to a no-op, preserving source compatibility without altering behavior.

> **Important**:
> `fastcall` is **not a standardized ABI**.
> It is compiler-specific and must be used consistently across declarations, definitions, and function pointers.

## Contents

| Contents List                     |
| --------------------------------- |
| `#define FASTCALL`                |
| `#define fastcall`                |
| `#define IS__FASTCALL__SUPPORTED` |

----

### FASTCALL

```c
#define FASTCALL
#define fastcall
```

Requests that function arguments be passed in registers according to the compiler's **fastcall** convention instead of entirely on the stack.

Typical **32-bit x86 fastcall** register usage:

| Register usage (in order) |
| ------------------------- |
|  `ECX`, `EDX`             |

* Register usage is **compiler-defined**
* Usually limited to **two arguments**
* Remaining arguments (if any) are passed on the stack
* Return values are unaffected

**Examples**:
```c
int fastcall func(int a, void *b);
```

```c
int FASTCALL func(int a, int b, int c, int d, int e);
```

* `a` -> `ECX`
* `b` -> `EDX`
* `c`, `d`, `e` -> stack

Prototype:

```c
extern int fastcall func(int, int, void *);
```

Function pointer:

```c
int (FASTCALL *test)(int, int, void *);
```

Function pointer type casting:

```c
test = (int (FASTCALL *)(int))pointer;
```

----

### IS__FASTCALL__SUPPORTED

```c
#define IS__FASTCALL__SUPPORTED
```

Checks whether the `FASTCALL` macro is defined as non-empty. This indicates that the compiler truly supports the `fastcall` calling convention.

> Note:
>
> Checking `IS__FASTCALL__SUPPORTED` alone is not sufficient.
>
> You must also verify that your target architecture and compiler supports fastcall.

Example:

```c
#ifdef IS__FASTCALL__SUPPORTED
int FASTCALL fast_add(int a, int b);
#else
int fast_add(int a, int b);
#endif
```

## References

 - [\_\_fastcall - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/fastcall?view=msvc-170)
 - [\_fastcall, \_\_fastcall - embarcadero.com](https://docwiki.embarcadero.com/RADStudio/Athens/en/Fastcall,_fastcall)
