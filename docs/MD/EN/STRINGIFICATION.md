# STRINGIFICATION

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/STRINGIFICATION.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/CHECK_FEATURE/STRINGIFICATION.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/STRINGIFICATION.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_STRINGIFICATION
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CHECK_FEATURE/STRINGIFICATION.H"
> ```

## Abstract

Defines `IS__STRINGIFICATION__SUPPORTED` if the compiler supports the stringification (`#`) feature.

## Contents

| Contents List                            |
| ---------------------------------------- |
| `#define IS__STRINGIFICATION__SUPPORTED` |

----

### IS__STRINGIFICATION__SUPPORTED

```c
#define IS__STRINGIFICATION__SUPPORTED
```

Stringification refers to the `#` operator in macros, used to convert pure inputs to strings.

Example:
```c
#define X(A) #A

printf( X( i am testing something ) ); // Will return: "i am testing something" without a new line.
```

## References

 - [Stringification - informatik.haw-hamburg.de](https://users.informatik.haw-hamburg.de/~krabat/FH-Labor/gnupro/2_GNUPro_Compiler_Tools/The_C_Preprocessor/cppStringification.html)
 - [26.5.4 Stringification - gnu.org](https://www.gnu.org/software/c-intro-and-ref/manual/html_node/Stringification.html)
 - [Stringification - stanford.edu](http://gloworm.stanford.edu/local/DOC/cpp_15.html)
