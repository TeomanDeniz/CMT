# NOINLINE

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/NOINLINE.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/NOINLINE.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/NOINLINE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_NOINLINE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/NOINLINE.H"
> ```

## Abstract

Defines the `NOINLINE` function attribute as a cross-compiler macro that prevents the compiler from inlining a function.

This provides a single portable macro that maps to the appropriate compiler-specific attribute or keyword.

## Content

```c
#define NOINLINE
```

**Examples**:
```c
NOINLINE void log_message(const char *message);

extern NOINLINE int compute_value(int value);

NOINLINE void log_message(const char *message)
{
	/* ... */
}
```

## References

 - [noinline - clang.llvm.org](https://clang.llvm.org/docs/AttributeReference.html#noinline)
 - [noinline - ibm.com](https://www.ibm.com/docs/en/xl-c-and-cpp-linux/16.1.1?topic=attributes-noinline)
 - [The noinline function attribute - ibm.com](https://www.ibm.com/docs/en/i/7.5.0?topic=attributes-noinline-function-attribute)
 - [noinline - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/noinline?view=msvc-170)
 - [\_\_attribute\_\_((noinline)) function attribute - arm.com](https://support.arm.com/documentation/dui0472/k/Compiler-specific-Features/--attribute----noinline---function-attribute)
 - [noinline - gcc.gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Common-Attributes.html#index-noinline)
 - [Intel® C++ Compiler Classic Developer
Guide and Reference - intel.com](https://www.intel.com/content/dam/develop/external/us/en/documents/cpp_compiler_classic.pdf)
 - [Attributes - intel.com](https://www.intel.com/content/www/us/en/docs/dpcpp-cpp-compiler/developer-guide-reference/2023-1/attributes.html)
 - [2.9 Supported Attributes - docs.oracle.com](https://docs.oracle.com/cd/E18659_01/html/821-1384/gjzke.html)
 - [2.7.2.15. noinline¶ - software-dl.ti.com](https://software-dl.ti.com/codegen/docs/tiarmclang/compiler_tools_user_guide/compiler_manual/c_cpp_language_implementation/attributes/function_attributes.html#noinline)
