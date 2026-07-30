# IGNORE_VAR

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/IGNORE_VAR.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/IGNORE_VAR.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/IGNORE_VAR.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_IGNORE_VAR
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/IGNORE_VAR.H"
> ```

## Abstract

```c
#define IGNORE_VAR(VARIABLE)
#define ignore_var(variable)
```

This keyword tells the compiler that the variable may not be used in the program.

If unused, the compiler ignores this variable and continues compiling the program without generating any warnings.

To use, simply add the tag in front of the variable.

```c
IGNORE_VAR(test);

ignore_var(i);
```

**Example**:
```c
int main(int argc, char **argv)
{
	ignore_var(argc);

	...
}
```

## References
 - [Cast to void to silence warnings - seas.harvard.edu](https://cs61.seas.harvard.edu/site/2019/Patterns/)
 - [`warning` pragma - microsoft.com](https://learn.microsoft.com/en-us/cpp/preprocessor/warning?view=msvc-170)
