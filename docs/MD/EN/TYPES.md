# TYPES

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/TYPES.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/TYPES.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/TYPES.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_TYPES
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/TYPES.H"
> ```

## Abstract

This header defines:

- Platform-independent **standard types**

- Fixed-width integer and floating-point types

- **Feature macros** to detect compiler and architecture support

All definitions are conditional and portable. Unsupported types are not defined.
## Contents

### Standard Types

Use these when you want **semantic clarity** instead of raw C types.

| Name                 | Description                                         |
| -------------------- | --------------------------------------------------- |
| `BYTE`, `byte`       | Unsigned one byte storage unit (char)               |
| `LET`, `let`         | Type for array indexing and sizes (like `size_t`)   |
| `VAR`, `var`         | Signed integer type with the same width as `void *` |
| `PTR`, `ptr`         | Generic pointer type                                |
| `FAR_PTR`, `far_ptr` | Far pointer type                                    |

----

### Types with Fixed Sizes

Signedness depends on context and naming convention used internally.

| Name               | Description                                                                 |
| ------------------ | --------------------------------------------------------------------------- |
| `BIT8`, `bit8`     | 8-bit unsigned or signed integer                                            |
| `BIT16`, `bit16`   | 16-bit unsigned or signed integer                                           |
| `BIT32`, `bit32`   | 32-bit unsigned or signed integer                                           |
| `BIT64`, `bit64`   | 64-bit unsigned or signed integer (if supported in non64-bit architectures) |
| `BIT128`, `bit128` | 128-bit unsigned or signed integer (if supported)                           |

----

### Floating-Point Types

These map to the **closest native compiler types**.

| Name                   | Description                               |
| ---------------------- | ----------------------------------------- |
| `FLOAT32`, `float32`   | 32-bit single-precision floating-point    |
| `FLOAT64`, `float64`   | 64-bit double-precision floating-point    |
| `FLOAT128`, `float128` | 128-bit extended-precision floating-point |

----

### Support Detection Macros

Check these **before using the corresponding types**:

| Name                  | Description                                                                         |
| --------------------- | ----------------------------------------------------------------------------------- |
| `SUPPORTED__BIT64`    | Defined if compiler supports BIT64 type (Mostly for 16-bit or 32-bit architectures) |
| `SUPPORTED__BIT128`   | Defined if compiler supports BIT128 type                                            |
| `SUPPORTED__FLOAT64`  | Defined if compiler supports FLOAT64 type                                           |
| `SUPPORTED__FLOAT128` | Defined if compiler supports FLOAT128 type                                          |

No macro -> no guarantee -> do not use the type.

> **Portability Notes:**  
> Types are **only defined when natively supported**.
> `BIT128` and `FLOAT128` depend entirely on compiler + architecture.
> On some platforms, double may be 32-bit. Which `FLOAT64` will not defined.
> `SUPPORTED__BIT64` is still defined on true 64-bit architectures.

Always guard usage with the corresponding `SUPPORTED__*` macro.

## References

 - [C Data Types - os.mbed.com](https://os.mbed.com/handbook/C-Data-Types)
 - [ILP32 and LP64 data models and data type sizes - ibm.com](https://www.ibm.com/docs/en/ent-metalc-zos/3.1.0?topic=environments-ilp32-lp64-data-models-data-type-sizes)
 - [Data Type Ranges - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170)
 - [Data Types and Sizes - oracle.com](https://docs.oracle.com/cd/E19253-01/817-6223/chp-typeopexpr-2/index.html)
 - [8-bit computing - wikipedia.org](https://wikipedia.org/wiki/8-bit_computing)
 - [16-bit computing - wikipedia.org](https://wikipedia.org/wiki/16-bit_computing)
 - [32-bit computing - wikipedia.org](https://wikipedia.org/wiki/32-bit_computing)
 - [64-bit computing - wikipedia.org](https://wikipedia.org/wiki/64-bit_computing)
 - [128-bit computing - wikipedia.org](https://wikipedia.org/wiki/128-bit_computing)
 - [C data types - wikipedia.org](https://en.wikipedia.org/wiki/C_data_types)
 - [6.1.1 128-bit Integers - gnu.org](https://gcc.gnu.org/onlinedocs/gcc-16.1.0/gcc/_005f_005fint128.html)
 - [![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/FAR.gif) **FAR** - CMT](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/MD/EN/FAR.md)
