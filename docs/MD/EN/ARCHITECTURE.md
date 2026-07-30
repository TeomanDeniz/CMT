# ARCHITECTURE

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ARCHITECTURE.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/ARCHITECTURE.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/ARCHITECTURE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_ARCHITECTURE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/ARCHITECTURE.H"
> ```

## Abstract

These defines indicate the bit-width supported or used by the system.

`__SYSTEM__BIT__` is a macro that evaluates to the number of bits of the target architecture-typically `8`, `16`, `32`, or `64`-based on the CPU or compiler settings.

## Contents

| CPU Architecture Word Size  |
| --------------------------- |
| `#define __SYSTEM_64_BIT__` |
| `#define __SYSTEM_32_BIT__` |
| `#define __SYSTEM_31_BIT__` |
| `#define __SYSTEM_16_BIT__` |
| `#define __SYSTEM_8_BIT__`  |
| `#define __SYSTEM_BIT__`    |

| Forced / Compiler-Supported Extended Integer Sizes |
| -------------------------------------------------- |
| `#define __HAS_128_BIT__`                          |
| `#define __HAS_64_BIT__`                           |

| Vector Register Sizes            |
| -------------------------------- |
| `#define __HAS_512_BIT_VECTOR__` |
| `#define __HAS_256_BIT_VECTOR__` |
| `#define __HAS_128_BIT_VECTOR__` |

----

### \_\_SYSTEM_64_BIT\_\_

```c
#define __SYSTEM_64_BIT__
```

This macro indicates that the target architecture of the system is 64-bit.

If this macro is defined, the other `32`, `16`, and `8` bit macros might not be defined.

----

### \_\_SYSTEM_32_BIT\_\_

```c
#define __SYSTEM_32_BIT__
```

This macro indicates that the target architecture of the system is 32-bit.

If this macro is defined, the other `64`, `16`, and `8` bit macros might not be defined.

----

### \_\_SYSTEM_31_BIT\_\_

```c
#define __SYSTEM_31_BIT__
```

This macro indicates that the target architecture supports 31-bit addressing (IBM System/390).

`__SYSTEM_32_BIT__` is also defined for this target.

----

### \_\_SYSTEM_16_BIT\_\_

```c
#define __SYSTEM_16_BIT__
```

This macro indicates that the target architecture of the system is 16-bit.

If this macro is defined, the other `64`, `32`, and `8` bit macros might not be defined.

----

### \_\_SYSTEM_8_BIT\_\_

```c
#define __SYSTEM_8_BIT__
```

This macro indicates that the target architecture of the system is 8-bit.

If this macro is defined, the other `64`, `32`, and `16` bit macros might not be defined.

----

### \_\_SYSTEM_BIT\_\_

```c
#define __SYSTEM_BIT__
```

This macro is defined as `64`, `32`, `16`, or `8`, depending on the architecture.

----

### \_\_HAS_128_BIT\_\_

```c
#define __HAS_128_BIT__
```

Defined if the compiler provides a native 128-bit integer type (i.e., `__int128` is available and its size is 16 bytes).

This macro indicates type support, not the system's architecture.

----

### \_\_HAS_64_BIT\_\_

```c
#define __HAS_64_BIT__
```

Defined if the implementation supports 64-bit integer types (e.g., `long long`), even on 16-bit or 32-bit systems.

This macro indicates language/compiler support for 64-bit integers, not that the architecture is 64-bit.

----

### \_\_HAS_512_BIT_VECTOR\_\_

```c
#define __HAS_512_BIT_VECTOR__
```

Defined if the target architecture and compiler provide native 512-bit SIMD vector types (e.g., AVX-512) or ARM SVE 512-bit.

Indicates availability of 512-bit vector registers/types, not general vectorization capability.

----

### \_\_HAS_256_BIT_VECTOR\_\_

```c
#define __HAS_256_BIT_VECTOR__
```

Defined if the target architecture and compiler provide native 256-bit SIMD vector types (e.g., AVX/AVX2) or ARM SVE 256-bit.

Indicates availability of 256-bit vector registers/types.

----

### \_\_HAS_128_BIT_VECTOR\_\_

```c
#define __HAS_128_BIT_VECTOR__
```

Defined if the target architecture and compiler provide native 128-bit SIMD vector types (e.g., SSE, NEON).

Indicates availability of 128-bit vector registers/types.

## References

 - [Pre-defined Compiler Macros Wiki (Architectures) - sourceforge.net](https://sourceforge.net/p/predef/wiki/Architectures/)
 - [IBM System/390 - wikipedia.org](https://wikipedia.org/wiki/IBM_System/390)
 - [Additional Predefined Macros - intel.com](https://www.intel.com/content/www/us/en/docs/dpcpp-cpp-compiler/developer-guide-reference/2024-2/additional-predefined-macros.html)
 - [Predefined macros - microsoft.com](https://learn.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-170)
 - [Using Predefined Preprocessor Symbols - ahamodel.uib.no](https://ahamodel.uib.no/intel/GUID-34CFF5B7-4F26-4FCA-B73B-494A28C9E226.html)
 - [Chapter 3. CPU Platform Detection - aussieai.com](https://www.aussieai.com/book/avx-3-cpu-platform-detection)
 - [Arm C Language Extensions (17.2.6.2 The \_\_ARM_FEATURE_SVE_BITS macro) - arm-software.github.io](https://arm-software.github.io/acle/main/acle.html#the-__arm_feature_sve_bits-macro)
 - [Freescale HC12 Compiler - Motorola HC12 Specific Defines (Page 367) - nxp.com](https://www.nxp.com/docs/en/reference-manual/HC12COMPILERRM.pdf)
 - [HC(S)08 Compiler Manual - Freescale HC08 Specific Defines (Page 352) - ece-classes.usc.edu](https://ece-classes.usc.edu/ee459/library/documents/Compiler_HC08.pdf)
 - [CrossCore® Embeded Studio 1.1 - C/C++ Compiler Manual for SHARC® Processors - analog.com](https://www.analog.com/media/en/dsp-documentation/software-manuals/cces_1-1-0_sharc_comp_man_rev_1-2.pdf)
