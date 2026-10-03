# REGISTER

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/REGISTER.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/REGISTER.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/REGISTER.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_REGISTER
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/REGISTER.H"
> ```

## Abstract

One storage class that C still has and C++ threw away.

C keeps `register` up to and including C23. C++11 deprecated it and C++17 removed it: Clang rejects it as an error, GCC and MSVC warn.

`REGISTER.H` does two things:

1. `REGISTER` is `register` where `register` still means something (C, and C++ before C++11), and nothing in C++11 and later. Code written with `REGISTER` compiles cleanly everywhere.
2. In C++11 and later, plain `register` in existing code is made to compile quietly: the compiler's own diagnostic is switched off where it can be, and `register` is defined as nothing only where it can not.

The C++ level is read from `_MSVC_LANG` on MSVC, which keeps `__cplusplus` at `199711L` unless `/Zc:__cplusplus` is given.

Library code should say `REGISTER`, never `register`: then it compiles everywhere, with or without the fix below.

## Contents

| Contents List                 |
| ----------------------------- |
| `#define REGISTER`            |
| `#define register`            |
| `#define CMT_NO_REGISTER_FIX` |

----

### REGISTER

```c
#define REGISTER
```

A `register` storage class that is valid in every language mode.

| Language        | `REGISTER`  |
| --------------- | ----------- |
| C, K&R to C23   | `register`  |
| C++98, C++03    | `register`  |
| C++11 and later | *(nothing)* |

Like `register` itself it is only a hint. C still forbids taking the address of a register variable, so code that compiles as C also compiles as C++.

```c
REGISTER unsigned int	INDEX;
```

----

### register

```c
#define register
```

In C++11 and later, existing code that still says `register` is made to compile without errors or warnings:

| Compiler      | What `REGISTER.H` does                           |
| ------------- | ------------------------------------------------ |
| Clang         | Ignores `-Wregister` and `-Wdeprecated-register` |
| GCC 7+        | Ignores `-Wregister`                             |
| MSVC 2017+    | Disables warning C5033                           |
| Anything else | `#define register` (C++17 and later only)        |

The diagnostics stay off for the rest of the translation unit, because a macro that uses `register` expands later, in the code that calls it.

Only the last row touches the keyword itself. A macro named `register` hides a keyword: Clang warns about it (`-Wkeyword-macro`), the MSVC standard library refuses it (`<xkeycheck.h>`), and GNU explicit register variables (`register int X asm("r10")`) stop working. So it is the last resort, not the first.

C is never touched.

----

### CMT\_NO\_REGISTER\_FIX

```c
#define CMT_NO_REGISTER_FIX
#include "CMT/ATTRIBUTES/REGISTER.H"
```

Define it before the first CMT header to leave the `register` keyword and the compiler's diagnostics exactly as they are.

`REGISTER` is still defined, so code written with `REGISTER` keeps compiling in C++17 and later either way. Code that still says `register` will hit the compiler's own error again (Clang) or warning (GCC, MSVC).

## References

 - [Storage-class specifiers - cppreference.com (C)](https://en.cppreference.com/w/c/language/storage_duration)
 - [Storage class specifiers - cppreference.com (C++)](https://en.cppreference.com/w/cpp/language/storage_duration)
 - [P0001R1 - Remove Deprecated Use of the register Keyword](https://wg21.link/p0001r1)
