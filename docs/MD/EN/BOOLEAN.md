# BOOLEAN

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/BOOLEAN.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/BOOLEAN.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/BOOLEAN.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_BOOLEAN
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/BOOLEAN.H"
> ```

## Abstract

One boolean type and one pair of truth values that mean the same thing on every compiler, from K&R C to C23 and from Turbo C++ to today.

The header asks one question, *"what does this language already give me?"*, and the first rule that matches wins:

| Rule | Language / compiler               | `BOOLEAN` is              |
| ---- | --------------------------------- | ------------------------- |
| 1    | C++ older than the `bool` keyword | `unsigned char`           |
| 2    | C++                               | `bool`                    |
| 3    | C, `<stdbool.h>` already included | `bool` (adopted as it is) |
| 4    | C23 and later                     | `bool`                    |
| 5    | C99, C11, C17                     | `bool` (`<stdbool.h>`)    |
| 6    | MSVC 2013+ in its default C mode  | `bool` (`<stdbool.h>`)    |
| 7    | C89 on GCC 3+ or Clang            | `_Bool` (extension)       |
| 8    | Anything else                     | `unsigned char`           |

Turbo C++, Borland C++ before 5.0, Watcom C++ before 11.0, Visual C++ before 5.0.

`TRUE` and `FALSE` always follow the chosen type, so in C++ they are real `bool` values, not integers.

`bool`, `true` and `false` are only defined when the language has none of its own.

## Contents

| Contents List                           |
| --------------------------------------- |
| `#define BOOLEAN`                       |
| `#define boolean`                       |
| `#define TRUE`                          |
| `#define true`                          |
| `#define FALSE`                         |
| `#define false`                         |
| `#define bool`                          |
| `#define __bool_true_false_are_defined` |

----

### BOOLEAN

```c
#define BOOLEAN
#define boolean
```

The portable boolean type.

It is `bool` wherever the language has one, `_Bool` on C89 compilers that accept it as an extension, and `unsigned char` everywhere else.

Converting any nonzero value to `BOOLEAN` gives `TRUE`, except on the `unsigned char` fallback, where only the low 8 bits survive. Write `(BOOLEAN)(VALUE != 0)` when that matters.

`boolean` is the lowercase alias.

----

### TRUE

```c
#define TRUE
#define true
```

The true value of the chosen type: `true` wherever `bool` exists, `1` everywhere else.

An earlier `TRUE` (for example from `<windows.h>`) is replaced. It always meant `1`, so nothing changes for code that used it.

`true` is only defined when the language has none of its own.

----

### FALSE

```c
#define FALSE
#define false
```

The false value of the chosen type: `false` wherever `bool` exists, `0` everywhere else.

An earlier `FALSE` (for example from `<windows.h>`) is replaced. It always meant `0`, so nothing changes for code that used it.

`false` is only defined when the language has none of its own.

----

### bool

```c
#define bool
```

Only defined when the language has no `bool` of its own: C89 and older, and C++ compilers older than the keyword. It names the same type as `BOOLEAN`, so code written for `<stdbool.h>` still compiles.

The guards of the known `<stdbool.h>` headers are closed at the same time, so a later `#include <stdbool.h>` is a no-op instead of a clash.

----

### \_\_bool\_true\_false\_are\_defined

```c
#define __bool_true_false_are_defined
```

The standard macro that says `bool`, `true` and `false` are ready to use, the same way `<stdbool.h>` defines it. Always `1`.

## References

 - [Arithmetic types - cppreference.com](https://cppreference.com/c/language/arithmetic_types#Boolean_type)
 - [Boolean type support library - cppreference.com](https://en.cppreference.com/w/c/types/boolean)
