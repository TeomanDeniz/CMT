# COMMA_OPERATOR

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/COMMA_OPERATOR.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/CHECK_FEATURE/COMMA_OPERATOR.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/COMMA_OPERATOR.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_COMMA_OPERATOR
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CHECK_FEATURE/COMMA_OPERATOR.H"
> ```

## Abstract

Defines `IS__COMMA_OPERATOR__SUPPORTED` if the compiler supports the comma operator.

## Content

```c
#define IS__COMMA_OPERATOR__SUPPORTED
```

The comma operator refers to the `(,)` operator in macros or expressions, used to evaluate multiple expressions in sequence and return the last.

**Example**:
```c
#ifdef IS__COMMA_OPERATOR__SUPPORTED
int a = (b++, funct(), c = 42, b += c, 66); // Performs all actions and returns 66
#else
b++;
funct();
c = 42;
b += c;
int a = 66;
#endif
```

## References

 - [ISO/IEC 9899:1999(E) Page 94 - dii.uchile.cl (Universidad de Chile)](https://www.dii.uchile.cl/~daespino/files/Iso_C_1999_definition.pdf)
 - [Comma operator - wikipedia.org](https://wikipedia.org/wiki/Comma_operator)
 - [Comma Operator - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/comma-operator?view=msvc-170)
