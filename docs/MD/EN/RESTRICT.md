# RESTRICT

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/RESTRICT.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/RESTRICT.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_RESTRICT
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/RESTRICT.H"
> ```

## Abstract

One pointer qualifier that only C99 standardised and every compiler spells its own way.

`restrict` promises the compiler that, for the lifetime of the pointer, the object it points to is reached through that pointer and nothing else. The compiler may then keep values in registers and reorder loads and stores across writes through other pointers. Breaking the promise is undefined behaviour, so use it only where it is true.

Expanding to nothing is always correct: `restrict` only ever allows optimisations, it never changes what a correct program means.

## Contents

| Contents List                     |
| --------------------------------- |
| `#define RESTRICT`                |
| `#define restrict`                |
| `#define IS__RESTRICT__SUPPORTED` |
| `#define CMT_NO_RESTRICT_FIX`     |

----

### RESTRICT

```c
#define RESTRICT
```

The restrict qualifier of the compiler in use, or nothing. It goes where `restrict` goes, after the `*`:

```c
void	COPY(BYTE *RESTRICT DESTINATION, const BYTE *RESTRICT SOURCE, LET SIZE);
```

----

### restrict

```c
#define restrict
```

Defined as `RESTRICT` only where `restrict` is not a keyword (C89 and C++), so code written for C99 also compiles there.

Never defined on MSVC: its own headers say `__declspec(restrict)`, which a `restrict` macro would break. Use `RESTRICT` there.

C99 and later are never touched.

----

### IS\_\_RESTRICT\_\_SUPPORTED

```c
#define IS__RESTRICT__SUPPORTED
```

Defined when `RESTRICT` is a real qualifier rather than nothing.

----

### CMT\_NO\_RESTRICT\_FIX

```c
#define CMT_NO_RESTRICT_FIX
#include "CMT/ATTRIBUTES/RESTRICT.H"
```

Define it before the first CMT header to leave the identifier `restrict` alone, for example in C++ code that uses `restrict` as a variable or function name. `RESTRICT` is still defined.

## References

 - [restrict type qualifier - cppreference.com](https://en.cppreference.com/w/c/language/restrict)
 - [Restricted Pointers - GCC manual](https://gcc.gnu.org/onlinedocs/gcc/Restricted-Pointers.html)
 - [__restrict - Microsoft Learn](https://learn.microsoft.com/en-us/cpp/cpp/extension-restrict)
