# KNR_STYLE

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/KNR_STYLE.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/KNR_STYLE.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/KNR_STYLE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_KNR_STYLE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/KNR_STYLE.H"
> ```

## Abstract

Provides compatibility macros for pre-ANSI (K&R) C compilers.

If the compiler does not support ANSI C syntax, `KNR_STYLE` is defined and missing language keywords are replaced with empty macro definitions to allow the codebase to compile under legacy environments.

## Contents

| Contents List       |
| ------------------- |
| `#define KNR_STYLE` |
| `#define void`      |
| `#define const`     |
| `#define volatile`  |
| `#define signed`    |
| `#define unsigned`  |

----

### KNR_STYLE

```c
#define KNR_STYLE
```

Defined if the compiler is not using ANSI C syntax (i.e., K&R / pre-C89 mode).

Indicates that the compiler lacks support for standard function prototypes and modern type qualifiers.

----

### void

```c
#define void
```

Defined as `char` for K&R compilers that do not support the `void` keyword.

----

### const

```c
#define const
```

Defined as an empty macro for K&R compilers that do not support the `const` type qualifier.

----

### volatile

```c
#define volatile
```

Defined as an empty macro for K&R compilers that do not support the `volatile` type qualifier.

----

### signed

```c
#define signed
```

Defined as an empty macro for K&R compilers that do not support the explicit `signed` keyword.

----

### unsigned

```c
#define unsigned
```

Defined as an empty macro for Microsoft C Compiler version 2.03 and earlier, where explicit `unsigned` keyword handling may be incomplete or incompatible.

 - ["Microsoft C Compiler Versions 2.03 and earlier treat the **`char`** type as unsigned." - Microsoft C Compiler Page 202](https://archive.computerhistory.org/resources/access/text/2024/05/102734492-05-0002-acc.pdf#page=111&zoom=400,180,500)

## References

 - [ANSI C (C89/C90) Standard Overview - open-std.org](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf)
 - [Lattice C 8086 1982 - bitsavers.org](http://www.bitsavers.org/pdf/lattice/Lattice_C_8086_1982.pdf)
 - [Microsoft C Compiler - computerhistory.org](https://archive.computerhistory.org/resources/access/text/2024/05/102734492-05-0002-acc.pdf)
 - [C (programming language) (K&R C) - wikipedia.org](https://en.wikipedia.org/wiki/C_(programming_language)#K&R_C)
 - [Differences between ANSI C and K&R C - sanfoundry.com](https://www.sanfoundry.com/difference-between-ansi-c-knr-c/#:~:text=Explanation%3A,safer%20and%20easier%20to%20understand.)
