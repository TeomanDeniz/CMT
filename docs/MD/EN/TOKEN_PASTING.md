# TOKEN_PASTING

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/TOKEN_PASTING.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/CHECK_FEATURE/TOKEN_PASTING.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/TOKEN_PASTING.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_TOKEN_PASTING
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CHECK_FEATURE/TOKEN_PASTING.H"
> ```

## Abstract

Defines `IS__TOKEN_PASTING__SUPPORTED` if the compiler supports the token pasting (`##`) feature.

## Contents

| Contents List                          |
| -------------------------------------- |
| `#define IS__TOKEN_PASTING__SUPPORTED` |

----

### IS__TOKEN_PASTING__SUPPORTED

```c
#define IS__TOKEN_PASTING__SUPPORTED
```

Token pasting refers to the `##` operator in macros, used to merge two tokens into one during preprocessing.

Example:
```c
#define AB(A, B) A##B

int AB(ma, in)(void) // Expands to: int main(void)
{
	. . .
}
```

## References

 - [Token-pasting operator (##) - microsoft.com](https://learn.microsoft.com/en-us/cpp/preprocessor/token-pasting-operator-hash-hash?view=msvc-170)
 - [3.5 Concatenation - gnu.org](https://gcc.gnu.org/onlinedocs/cpp/Concatenation.html)
 - [# and ## Operators in C - geeksforgeeks.org](https://www.geeksforgeeks.org/c/stringizing-and-token-pasting-operators-in-c/)
