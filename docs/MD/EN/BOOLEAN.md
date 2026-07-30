# BOOLEAN

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/BOOLEAN.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/BOOLEAN.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/BOOLEAN.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_BOOLEAN
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/BOOLEAN.H"
> ```

## Abstract

Provides a portable boolean interface for C that automatically adapts to the compiler's native boolean implementation whenever available.

Rather than forcing a fixed type or value definitions, `BOOLEAN.H` detects the most suitable compiler-supported boolean type and constants, falling back to a portable implementation only when necessary.

If a standard compiler boolean header (such as `stdbool.h` or an equivalent implementation) has already been included, this module transparently adopts it.

Otherwise, it includes the appropriate compiler header itself before exposing a consistent set of boolean definitions.

The result is a single, compiler-independent interface that remains fully compatible with existing code while preserving the compiler's preferred boolean representation whenever possible.

## Contents

| Contents List                           |
| --------------------------------------- |
| `#define BOOLEAN`                       |
| `#define boolean`                       |
| `#define TRUE`                          |
| `#define true`                          |
| `#define FALSE`                         |
| `#define false`                         |
| `#define __bool_true_false_are_defined` |

----

### BOOLEAN

```c
#define BOOLEAN
#define boolean
```

Defines the project's portable boolean type.

When supported, it aliases the compiler's native boolean type; otherwise it falls back to an implementation based on `unsigned char`.

----

### TRUE

```c
#define TRUE
#define true
```

Defines the boolean true value.

Uses the compiler's native definition whenever available, otherwise provides a portable fallback value.

----

### FALSE

```c
#define FALSE
#define false
```

Defines the boolean false value.

Uses the compiler's native definition whenever available, otherwise provides a portable fallback value.

----

### \_\_bool\_true\_false\_are\_defined

```c
#define __bool_true_false_are_defined
```

Defines the standard compatibility macro indicating that boolean definitions are available, matching the behavior expected by implementations compatible with `stdbool.h`.

## References

 - [Arithmetic types - cppreference.com](https://cppreference.com/c/language/arithmetic_types#Boolean_type)
