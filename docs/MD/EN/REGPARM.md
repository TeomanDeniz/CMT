# REGPARM

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/REGPARM.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/REGPARM.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/REGPARM.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_REGPARM
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/REGPARM.H"
> ```

## Abstract

This header provides a **minimal abstraction for register-based argument passing** on **32-bit x86 systems**, using the compiler-specific `regparm` calling convention where supported.

On classic **32-bit x86 (i386)** systems, the default C calling convention (`cdecl`) passes **all function arguments on the stack**.
Some compilers (notably **GCC-compatible**) provide extensions that allow **a limited number of arguments to be passed via CPU registers**, reducing call overhead for small, frequently called functions.

The `REGPARM(N)` macro annotates a function (or function pointer) to request that up to **N arguments** be passed in registers, when supported by the compiler and target architecture.

When unsupported, `REGPARM(N)` safely degrades to a no-op, preserving source compatibility without altering behavior.

> **Important**:
> `regparm` is **not a standardized ABI**.
> It is a compiler and architecture-specific optimization and must be used consistently across declarations, definitions, and function pointers.

## Contents

| Contents List                    |
| -------------------------------- |
| `#define REGPARM(ARGS)`          |
| `#define regparm(args)`          |
| `#define IS__REGPARM__SUPPORTED` |

----

### REGPARM

```c
#define REGPARM(ARGS)
#define regparm(args)
```

Requests that up to N function arguments be passed in registers instead of on the stack.

| `REGPARM(N)` | Register usage (in order) |
| ------------ | ------------------------- |
| `REGPARM(1)` | `EAX`                     |
| `REGPARM(2)` | `EAX`, `EDX`              |
| `REGPARM(3)` | `EAX`, `EDX`, `ECX`       |

- Maximum supported value: 3
- Remaining arguments (if any) are passed on the stack
- Argument count does not need to match N
- Return values are unaffected

**Examples**:
```c
int regparm(2) func(int a, void *b);
```

```c
int REGPARM(3) func(int a, int b, int c, int d, int e);
```

- `a` -> `EAX`
- `b` -> `EDX`
- `c` -> `ECX`
- `d`, `e` -> stack

Prototype:
```c
extern int regparm(3) func(int, int, void *);
```

Function pointer:
```c
int (REGPARM(3) *test)(int, int, void *);
```

Function pointer type casting:
```c
test = (int (REGPARM(1) *)(int))pointer;
```

----

### IS__REGPARM__SUPPORTED

```c
#define IS__REGPARM__SUPPORTED
```

Checks whether the `REGPARM` macro is defined as non-empty. This indicates that the compiler truly supports the `regparm` attribute.

> Note:
> 
> Checking `IS__REGPARM__SUPPORTED` alone is not sufficient.
> 
> You must also verify that your target architecture and compiler supports regparm.

Example:

```c
#ifdef IS__REGPARM__SUPPORTED
int REGPARM(3) fast_add(int a, int b, int c);
#else
int fast_add(int a, int b, int c);
#endif
```

## References

 - [Function Attributes - gnu.org](https://gcc.gnu.org/onlinedocs/gcc-3.3.5/gcc/Function-Attributes.html)
 - [x86 calling conventions - wikipedia.org](https://wikipedia.org/wiki/X86_calling_conventions)
