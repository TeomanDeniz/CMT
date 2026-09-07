# FAR

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/INLINE.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/INLINE.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/INLINE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_INLINE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/INLINE.H"
> ```

## Abstract

`INLINE` and `FORCE_INLINE` are function modifiers used to request that a compiler treat a function as an inline function.

`INLINE` provides a portable way to request normal inlining. The compiler may choose whether or not to actually substitute the function's code at each call site.

`FORCE_INLINE` expresses a stronger request: when the compiler supports such a feature, it tells the compiler to make a stronger effort to inline the function. It may use compiler-specific extensions such as `__forceinline` or `__attribute__((always_inline))`.

Inlining can reduce the overhead of a function call, but it may also increase the size of the generated program. **Neither `INLINE` nor `FORCE_INLINE` should be interpreted as a guarantee that the resulting machine code will contain no function call.** The exact behaviour depends on the compiler and its optimisation settings.

**Example**:

```c
// Inline function:
INLINE int test(void)
{
	return (15 + 42);
}

// Used in main:
int main(void)
{
	printf("%d", test());
	return (0);
}
```

A compiler may effectively turn the call into something equivalent to:

```c
int main(void)
{
	printf("%d", (15 + 42));
	return (0);
}
```

The exact generated code is compiler-dependent.

This is only an example. You are free to put whatever valid code is appropriate inside an inline function, but some constructs can prevent or complicate inlining. See **How Not to Use It** below.

## Contents

| Contents List          |
| ---------------------- |
| `#define INLINE`       |
| `#define FORCE_INLINE` |

----

### INLINE

```c
#define INLINE
```

`INLINE` requests normal inline semantics for a function.

The exact definition of `INLINE` depends on the compiler. For example, it may expand to the standard C/C++ `inline` keyword or to a compiler-specific equivalent such as `__inline` or `__inline__`.

Just put this tag at the beginning of the function declaration.

**Example**:

```c
INLINE void function(void)
{
	. . .
}
```

`INLINE` is a **request**, not a guarantee. The compiler is still free to emit an ordinary function call when it determines that inlining is undesirable or impossible.

----

### FORCE_INLINE

```c
#define FORCE_INLINE
```

`FORCE_INLINE` is intended for functions where inlining is particularly desirable.

Where supported, it uses the compiler's strongest practical inline mechanism. For example, MSVC may use `__forceinline`, while GCC and Clang may use `__attribute__((always_inline))`.

**Example**:

```c
FORCE_INLINE int function(int a, int b)
{
	return (a + b);
}
```

Unlike `INLINE`, `FORCE_INLINE` communicates that the programmer considers inlining especially important.

However, **`FORCE_INLINE` is still not an absolute guarantee**. The compiler can reject or ignore an aggressive inline request in situations where inlining is impossible, incompatible with the current compilation mode, or otherwise unsupported.

Use `FORCE_INLINE` sparingly. Overusing it can increase executable size, increase instruction-cache pressure, and sometimes make performance worse rather than better.

----

## INLINE vs FORCE_INLINE

| Macro          | Purpose                   | Strength   |
| -------------- | ------------------------- | ---------- |
| `INLINE`       | Request ordinary inlining | Normal     |
| `FORCE_INLINE` | Strongly request inlining | Aggressive |

In general:

```c
INLINE int normal_function(void)
{
	. . .
}
```

should be preferred when the function is simply a good candidate for inlining.

Use:

```c
FORCE_INLINE int performance_critical_function(void)
{
	. . .
}
```

when you have a specific reason to strongly encourage inlining.

----

## **How NOT to Use It**

There are no universal rules saying that an inline function **cannot** contain particular C or C++ constructs. Most of the following constructs are legal.

The important question is whether they make inlining impossible, undesirable, compiler-dependent, or less useful.

### 1. **Don't assume `static inline` prevents inlining.**

`static inline` does **not** cancel the effect of `INLINE`.

In fact, `static inline` is often useful for functions defined in headers because it gives the function internal linkage.

For example:

```c
static INLINE int test(void)
{
	return (15 + 42);
}
```

is perfectly valid on compilers supporting the corresponding inline semantics.

However, `static inline` has different linkage semantics from a non-static inline function. Whether it is appropriate depends on how the function is declared and where the header is used.

**Don't use `static` merely because you think it makes a function inline faster.** It does not.

----

### 2. **Don't assume every function can be completely inlined.**

Some functions are simply poor candidates for inlining.

For example:

```c
INLINE void test(void)
{
	LAYER:

	. . .

	goto LAYER;
}
```

`goto` itself does **not** make an inline function invalid.

However, complicated control flow can make optimisation and inlining more difficult, especially when combined with other constructs.

The same applies to large functions:

```c
FORCE_INLINE void enormous_function(void)
{
	. . .
	/* Hundreds or thousands of lines of code... */
}
```

Forcing a huge function to be inlined everywhere can make the resulting program larger and potentially slower.

----

### 3. **Static local variables are not inherently forbidden.**

A static local variable can legally exist inside an inline function in many C and C++ contexts:

```c
INLINE int test(void)
{
	static int dog;

	return (++dog);
}
```

However, static local variables have **persistent storage and shared state**, which may make the function behave very differently from a simple, side-effect-free inline function.

They can also interact with language-specific inline and linkage rules.

Therefore, avoid static local variables in small utility functions unless their persistent state is intentional.

----

### 4. **Recursion cannot generally be completely inlined.**

An inline function can call itself:

```c
INLINE int factorial(int a)
{
	if (a <= 1)
		return (1);

	return (a * factorial(a - 1));
}
```

This is legal.

However, a recursive call cannot normally be expanded indefinitely. Eventually the compiler must leave a function call, transform the recursion, or otherwise handle it without fully inlining every recursive invocation.

Therefore, `INLINE` does **not** mean:

> "Every call must disappear."

Recursive functions are generally poor candidates for `FORCE_INLINE`.

----

### 5. **Variadic functions may have compiler-specific limitations.**

A variadic function such as:

```c
INLINE void inline_test(int a, ...)
{
	va_list list;

	. . .
}
```

is not universally forbidden from being inline.

However, variadic functions can be more complicated for compilers to optimise, and their exact interaction with inline semantics can depend on the compiler and language standard.

In particular, don't assume that `FORCE_INLINE` can make every variadic function disappear completely at every call site.

If a function does not actually need to be variadic, prefer a fixed parameter list.

----

### 6. **Don't make everything `FORCE_INLINE`.**

This is probably the most important rule.

Inlining is not automatically an optimisation.

For example:

```c
FORCE_INLINE void enormous_function(void)
{
	. . .
}
```

If this function is called from many different places, forcing its body into every call site can significantly increase the size of the generated program.

Larger code can cause worse instruction-cache behaviour and can sometimes make the program **slower**.

Use `FORCE_INLINE` when there is a specific performance or implementation reason for it, not simply because the function is small.

----

### 7. **Don't rely on the source code to determine the final machine code.**

This:

```c
INLINE int test(void)
{
	return (15 + 42);
}
```

does not guarantee that the compiler will generate a function containing the addition.

The compiler may instead constant-fold the expression:

```c
return (57);
```

or optimise the entire call away.

Likewise, a compiler may decide that a function marked `INLINE` should remain an ordinary function call.

The final machine code depends on the compiler, target architecture, compilation options, optimisation level, and surrounding code.

## References

 - [Inline (C and C++) - wikipedia.org](https://wikipedia.org/wiki/Inline_(C_and_C%2B%2B))
 - [Inline functions (C++) - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/inline-functions-cpp)
 - [Introduction to C - open-watcom.github.io](https://open-watcom.github.io/open-watcom-v2-wikidocs/clr.html)
 - [Watcom C/C++ Tools User’s Guide - openwatcom.org](https://openwatcom.org/ftp/archive/11.0c/docs/ctoolsuserguide.pdf)
 - [3.2. Inlining - clang.llvm.org](https://clang.llvm.org/docs/analyzer/developer-docs/IPA.html)
 - [6.9 An Inline Function is As Fast As a Macro - gcc.gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Inline.html)
 - [inline specifier - cppreference.com](https://en.cppreference.com/cpp/language/inline)
 - [__inline - arm.com](https://support.arm.com/documentation/dui0491/i/Compiler-specific-Features/--inline?lang=en)
 - [__forceinline - arm.com](https://support.arm.com/documentation/dui0491/i/Compiler-specific-Features/--forceinline?lang=en)
