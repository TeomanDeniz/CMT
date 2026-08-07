# UNUSED

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/UNUSED.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/UNUSED.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/UNUSED.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_UNUSED
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/UNUSED.H"
> ```

## Abstract

This macro tells the compiler that the function may not be used in the program.

If unused, the compiler ignores this function and continues compiling the program without giving any warnings.

## Content

| Contents List    |
| ---------------- |
| `#define UNUSED` |

```c
#define UNUSED
```

Just put this tag at the beginning of the function.

**Example**:
```c
UNUSED void function(void)
{
	. . .
}
```

## References

 - [C++ attribute: maybe_unused (since C++17) - cppreference.com](https://cppreference.com/cpp/language/attributes/maybe_unused)
 - [maybe_unused, unused - clang.llvm.org](https://clang.llvm.org/docs/AttributeReference.html#maybe-unused-unused)
 - [\_\_attribute\_\_((unused)) function attribute
 - arm.com](https://support.arm.com/documentation/dui0774/l/Compiler-specific-Function--Variable--and-Type-Attributes/--attribute----unused---function-attribute)
 - [2.7.3.9. unused - ti.com](https://software-dl.ti.com/codegen/docs/c29clang/compiler_tools_user_guide/compiler_manual/c_cpp_language_implementation/attributes/variable_attributes.html#unused)
 - [5.32 Specifying Attributes of Variables - gcc.gnu.org](https://gcc.gnu.org/onlinedocs/gcc-3.4.3/gcc/Variable-Attributes.html)
