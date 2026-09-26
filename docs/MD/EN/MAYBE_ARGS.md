# MAYBE_ARGS

<p align="center">
 <img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/MAYBE_ARGS.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/MAYBE_ARGS.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/MAYBE_ARGS.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_MAYBE_ARGS
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/MAYBE_ARGS.H"
> ```

## Abstract

Declares a function parameter list that can accept **any number of arguments of any type**, in a way that keeps working across C standards.

Before C23, an empty parameter list `()` meant "unspecified arguments" (a non-prototype declaration), so `int f();` could be called with anything. **C23 changed this**: `()` now means exactly the same as `(void)`, which breaks code that relied on the old behavior. At the same time, C23 started allowing a variadic list with no named parameter before it, `(...)`, which C++ has always allowed.

`MAYBE_ARGS` picks the right form for the current compiler:

| Environment                 | `MAYBE_ARGS` expands to | Result                                  |
| --------------------------- | ----------------------- | --------------------------------------- |
| C23 and above (non-MSVC)    | `...`                   | `f(...)` - variadic, no named parameter |
| C++                         | `...`                   | `f(...)` - variadic, no named parameter |
| C89 / C99 / C11 / C17, MSVC | *(nothing)*             | `f()` - unspecified arguments           |

In the pre-C23 case, the header also silences the `-Wstrict-prototypes` (GCC / Clang) and `-Wdeprecated-non-prototype` (Clang) warnings that `f()` would otherwise produce.

## Content

```c
#define MAYBE_ARGS
#define maybe_args
```

**Examples**:
```c
// A generic function pointer type that can hold "any" callback
typedef void	(*t_callback)(MAYBE_ARGS);

// A declaration that accepts any arguments on every standard
extern int	legacy_handler(maybe_args);
```

> [!NOTE]
> The warning suppression uses `#pragma ... diagnostic ignored` without a push/pop pair, so on pre-C23 C it stays in effect for the rest of the translation unit after this header is included.

> [!WARNING]
> `f(...)` and `f()` are not identical at the ABI level. Calling a non-variadic function through a `(...)` pointer (C23 / C++) is undefined behavior; cast the pointer back to its real type before calling it.

## References

 - [Variadic arguments - cppreference.com](https://en.cppreference.com/w/c/language/variadic)
 - [Function declaration - cppreference.com](https://en.cppreference.com/w/c/language/function_declaration)
 - [N2841: No function declarators without prototypes - open-std.org](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2841.htm)
 - [N2975: Relax requirements for variadic parameter lists - open-std.org](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2975.pdf)
