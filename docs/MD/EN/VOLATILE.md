# VOLATILE

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/VOLATILE.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/VOLATILE.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/VOLATILE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_VOLATILE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/VOLATILE.H"
> ```

## Abstract

Defines the `volatile` type qualifier as a cross-compiler macro that forbids the optimizer from caching, folding, reordering or eliding accesses to an object.

This provides a single portable macro that maps to the appropriate compiler-specific qualifier or alternate keyword, and degrades safely to a no-op on pre-ANSI (K&R) compilers that have no such qualifier at all.

If you want all the volatiles to be disabled, you can define `CMT_NO_VOLATILE`.

When pre-defined by the user before including the header, the keyword is stripped and `IS__VOLATILE__SUPPORTED` is undefined even on a compiler that supports it.

Intended for working around a broken toolchain, and for exercising the degraded K&R path from a modern host without having to find a K&R compiler.

## Contents

| Contents List                     |
| --------------------------------- |
| `#define VOLATILE`                |
| `#define IS__VOLATILE__SUPPORTED` |

----

### VOLATILE

```c
#define VOLATILE
```

Marks an object as volatile, telling the compiler that its value may change by means outside the visible flow of the program, so every read and write written in the source must actually be performed.

Typical reasons an object needs it:

- It is written by generated code the compiler cannot see
- It is written by another thread, a signal handler or an interrupt
- It is a memory-mapped hardware register
- It is modified across `setjmp` / `longjmp`

When unsupported, `VOLATILE` safely degrades to a no-op, preserving source compatibility without altering behavior.

**/!\\** - This is the part that is worth reading twice, because both spellings compile and only one of them does what is usually wanted.

The qualifier binds to whatever sits on its **left**, or to the thing on its right when there is nothing on its left:

```c
VOLATILE void	*a; /* POINTER TO VOLATILE DATA - THE POINTER ITSELF IS NOT */
void			*VOLATILE b; /* VOLATILE POINTER - THE POINTED DATA IS NOT */
VOLATILE void	*VOLATILE c; /* BOTH */
```

To make the **pointer variable** itself volatile, the qualifier must come after the `*`.

There is one convenient exception. When the pointer type is hidden behind a `typedef`, the qualifier applies to the pointer, which is the intuitive result:

```c
typedef void	*PTR;

VOLATILE PTR	p; /* SAME AS: void *VOLATILE p; */
```

So `VOLATILE PTR` is a volatile pointer, while hand-expanding that typedef into `VOLATILE void *` silently flips the meaning and qualifies the data instead.

### WHY IT MATTERS FOR GENERATED CODE

If a global is written only by runtime-generated machine code, nothing in the translation unit ever assigns it as far as the compiler is concerned. Under whole-program visibility the optimizer is then entitled to conclude the object still holds its initializer and replace every read with that constant:

```c
static PTR	g_this; /* NEVER ASSIGNED IN VISIBLE C CODE */

void	*connect(void)
{
	return (g_this); /* -O2 -> "xorl %eax, %eax"  (FOLDED TO NULL!) */
}
```

Adding the qualifier forces the load to happen:

```c
static VOLATILE PTR	g_this;

void	*connect(void)
{
	return (g_this); /* -O2 -> "movq g_this(%rip), %rax" */
}
```

**NOTE:** `volatile` orders accesses **only** with respect to other volatile accesses, and it is **not** a synchronization primitive. It does not provide atomicity and it does not emit CPU memory barriers (except under MSVC's `/volatile:ms`). For sharing mutable data between threads, a real lock or an atomic type is still required.

**Examples**:
```c
VOLATILE int	flag;

extern VOLATILE unsigned char	*port;
```

```c
VOLATILE int	counter;

void	tick(void)
{
	counter++;
}
```

----

### IS__VOLATILE__SUPPORTED

```c
#define IS__VOLATILE__SUPPORTED
```

Checks whether the `VOLATILE` macro is defined as non-empty.

This indicates that the compiler truly supports the `volatile` qualifier.

**NOTES:**
 - The macro is undefined only on pre-ANSI (K&R) compilers, or when the user explicitly requested `CMT_NO_VOLATILE`.
 - Any algorithm whose **correctness** depends on the qualifier being honored must be guarded, since on such a target nothing enforces the access.

**Example**:

```c
#ifdef IS__VOLATILE__SUPPORTED
VOLATILE PTR	g_this;
#else
#error "THIS MODULE REQUIRES A COMPILER WITH VOLATILE SUPPORT"
#endif
```

## NOTES

 - **GNU-GCC** uses the alternate spelling `__volatile__` on purpose. Pre-4.x GCC disables the plain `volatile` under `-traditional`, while the `__`-wrapped spelling keeps working. It is accepted everywhere the plain keyword is, so it costs nothing on modern GCC. Note that `-ansi` and `-std=c90` do **not** disable `volatile` — it is a standard C89 keyword.

 - **MSVC** has two modes. `/volatile:ms` (the default on x86 and x64) adds acquire/release semantics on top of the standard behavior, while `/volatile:iso` gives exactly the standard behavior. The MS mode is strictly stronger, never weaker, so both are safe here.

 - Any unknown compiler that announces itself as ANSI C through `__STDC__` or `__STDC_VERSION__` is trusted without needing a vendor tag, since the keyword is part of the language by definition from C89 onward.

 - On the degraded path the lowercase `volatile` is also defined as empty, exactly like `KNR_STYLE.H` does for `void` and `const`. Without that, any hand-written `volatile` in user code would fail to parse on a K&R compiler. On every supported compiler the lowercase spelling is left completely untouched, because the native keyword already works and redefining it would only risk disturbing system headers.

 - The qualifier costs nothing when it is not read. It only suppresses optimization of the accesses to the object it marks, so marking a hot variable volatile without needing it will pessimize the surrounding code.


## References

 - [volatile type qualifier - cppreference.com](https://en.cppreference.com/w/c/language/volatile)
 - [Alternate Keywords - gcc.gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Alternate-Keywords.html)
 - [Alternate Keywords (GCC 3.2.2, `-traditional` era) - gcc.gnu.org](https://gcc.gnu.org/onlinedocs/gcc-3.2.2/gcc/Alternate-Keywords.html)
 - [volatile (C++) - learn.microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/volatile-cpp)
 - [/volatile (volatile Keyword Interpretation) - learn.microsoft.com](https://learn.microsoft.com/en-us/cpp/build/reference/volatile-volatile-keyword-interpretation)
 - [Compiler Warning C4746 - learn.microsoft.com](https://learn.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warning-c4746)
 - [Combining C's volatile and const keywords - embedded.com](https://www.embedded.com/combining-cs-volatile-and-const-keywords/)
