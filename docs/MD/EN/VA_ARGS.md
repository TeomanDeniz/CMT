# VA_ARGS

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/VA_ARGS.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/VA_ARGS.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/VA_ARGS.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_VA_ARGS
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/VA_ARGS.H"
> ```

## Abstract

Provides a lightweight, cross-compiler interface for handling variable argument lists in C.

`VA_ARGS.H` combines the standard `<stdarg.h>` interface, legacy `<varargs.h>`-style conventions, and a custom fallback implementation to provide a consistent set of variable-argument keywords across different compilers and language environments.

The library exposes both uppercase and lowercase forms of its variable-argument objects. Standard implementations are used when available, while unsupported environments can fall back to the library's own implementation.

The interface provides equivalents for declaring, starting, accessing, copying, and ending variable argument lists. It also provides `VA_ARGS`, which represents the variable argument portion of a function declaration in environments where the standard `...` syntax is unavailable or unsuitable.

The header is intended to make variable-argument functions more portable without requiring the rest of the source code to depend directly on compiler-specific variable-argument facilities.

### Portability

`VA_ARGS.H` is designed around three possible sources for variable-argument support:

1. **Standard `<stdarg.h>` support**
   When the compiler provides the standard C variable-argument interface, the library can map its keywords directly to `va_list`, `va_start`, `va_arg`, `va_copy`, and `va_end`.

2. **Legacy `<varargs.h>`-style support**
   Older compilers may use conventions such as `va_alist` and `va_dcl`. The library provides `VA_ARGS` and `VA_DECLARE` so these conventions can be represented through the same source-level interface.

3. **Library fallback implementation**
   When neither supported interface is available, `VA_ARGS.H` can provide its own implementation of the required operations.

Consequently, source code using `VA_ARGS.H` does not need to select the variable-argument mechanism directly for each compiler.

Every primary variable-argument operation is exposed in both uppercase and lowercase forms.

| Uppercase    | Lowercase    | Purpose                             |
| ------------ | ------------ | ----------------------------------- |
| `VA_LIST`    | `va_list`    | Variable-argument list type         |
| `VA_ARG`     | `va_arg`     | Retrieve the next argument          |
| `VA_COPY`    | `va_copy`    | Copy a variable-argument list       |
| `VA_BEGIN`   | `va_begin`   | Initialize a variable-argument list |
| `VA_END`     | `va_end`     | Terminate a variable-argument list  |
| `VA_ARGS`    | `va_args`    | Variable-argument declaration       |
| `VA_DECLARE` | `va_declare` | Variable-argument declaration/setup |

The lowercase names generally preserve the conventional C variable-argument naming style, while the uppercase names provide a library-level abstraction that is easy to distinguish from compiler-provided primitives.

## Contents

| Contents List        |
| -------------------- |
| `typedef VA_LIST;`   |
| `typedef va_list;`   |
| `#define VA_ARG`     |
| `#define va_arg`     |
| `#define VA_COPY`    |
| `#define va_copy`    |
| `#define VA_BEGIN`   |
| `#define va_begin`   |
| `#define VA_END`     |
| `#define va_end`     |
| `#define VA_ARGS`    |
| `#define va_args`    |
| `#define VA_DECLARE` |
| `#define va_declare` |

----

### VA_LIST

```c
typedef	va_list;
typedef	VA_LIST;
```

Provides an uppercase alias for the standard `va_list` type.

`VA_LIST` can be used to declare a variable-argument list object without referring directly to the implementation-provided `va_list` type.

The lowercase `va_list` remains available as provided by the underlying variable-argument implementation.

#### Example

```c
VA_LIST args;

VA_BEGIN(args, count);
```

----

### VA_ARG

```c
#define VA_ARG
#define va_arg
```

Retrieves the next argument from a variable-argument list.

`VA_ARG` is the uppercase form of `va_arg` and follows the behavior of the active variable-argument implementation.

The first argument specifies the variable-argument list, while the second specifies the expected type of the next argument.

#### Example

```c
int value;

value = VA_ARG(args, int);
```

The lowercase form can be used equivalently:

```c
value = va_arg(args, int);
```

----

### VA_COPY

```c
#define VA_COPY
#define va_copy
```

Copies the current state of a variable-argument list into another variable-argument list.

This is useful when the same argument sequence needs to be traversed more than once.

`VA_COPY` is the uppercase form of `va_copy` and uses the implementation supplied by the compiler or the fallback provided by `VA_ARGS.H`.

#### Example

```c
VA_LIST copy;

VA_COPY(copy, args);
```

The copied list should be terminated independently:

```c
VA_END(copy);
```

----

### VA_BEGIN

```c
#define VA_BEGIN
#define va_begin
```

Initializes a variable-argument list before its arguments are accessed.

The exact behavior is provided by the active variable-argument implementation.

#### Example

```c
VA_LIST args;

VA_BEGIN(args, count);

value = VA_ARG(args, int);

VA_END(args);
```

The lowercase form is equivalent:

```c
va_begin(args, count);
```

----

### VA_END

```c
#define VA_END
#define va_end
```

Terminates a variable-argument list after it has been used.

Every variable-argument list initialized with `VA_BEGIN` or otherwise initialized according to the active implementation should be passed to `VA_END` when it is no longer needed.

#### Example

```c
VA_LIST args;

VA_BEGIN(args, count);

/* Use args. */

VA_END(args);
```

The lowercase form can be used equivalently:

```c
va_end(args);
```

----

### VA_ARGS

```c
#define VA_ARGS
#define va_args
```

Represents the variable-argument portion of a function declaration.

`VA_ARGS` provides a portable abstraction for declaring functions that accept a variable number of arguments. It is intended to serve the role of the standard `...` syntax or the `va_alist` convention used by older variable-argument implementations.

This allows a function declaration to use the library's variable-argument syntax without directly depending on a particular compiler's declaration convention.

#### Example

```c
int print_values(int count, VA_ARGS);
```

On implementations where standard C variable arguments are available, `VA_ARGS` can correspond to the appropriate `...`-style declaration.

On implementations requiring an alternative variable-argument convention, `VA_ARGS` can instead be mapped to the corresponding implementation-specific representation.

> **Note:** `VA_ARGS` is a declaration keyword provided by `VA_ARGS.H`; it should not be confused with the C preprocessor's `__VA_ARGS__` macro.

----

### VA_DECLARE

```c
#define VA_DECLARE
#define va_declare
```

Declares or prepares the variable-argument portion of a function according to the active `VA_ARGS.H` implementation.

`VA_DECLARE` provides a portable abstraction for the variable-argument declaration mechanism required by implementations that cannot use the standard `...` syntax directly.

It is intended as the library's equivalent of the declaration operation used by the underlying variable-argument system, including implementations based on the older `va_dcl` convention.

#### Example

```c
int print_values(count)
	int count;
	VA_DECLARE
{
	VA_LIST args;

	VA_BEGIN(args, count);

	/* Process variable arguments. */

	VA_END(args);
}
```

The lowercase form is equivalent:

```c
va_declare
```

The actual expansion of `VA_DECLARE` depends on the compiler and variable-argument implementation selected by `VA_ARGS.H`.

----

## Usage

A typical variable-argument function can be written using the portable interface provided by the header:

```c
#include <VA_ARGS.H>

int sum(int count, VA_ARGS)
{
	VA_LIST args;
	int     total;
	int     i;

	total = 0;
	VA_BEGIN(args, count);

	i = 0;
	while (i < count)
	{
		total += VA_ARG(args, int);
		i++;
	}

	VA_END(args);
	return (total);
}
```

The same interface is available in lowercase form:

```c
#include <VA_ARGS.H>

int sum(int count, va_args)
{
	va_list args;
	int     total;
	int     i;

	total = 0;
	va_begin(args, count);

	i = 0;
	while (i < count)
	{
		total += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (total);
}
```

Using the uppercase interface is useful when the source code is intended to make library-provided portability abstractions visually distinct from the underlying compiler implementation.

## References

 - [varargs - delorie.com](https://www.delorie.com/djgpp/doc/libc/libc_849.html)
 - [Old-Style Variadic Functions - gnu.org](https://ftp.gnu.org/old-gnu/Manuals/glibc-2.2.5/html_node/Old-Varargs.html)
 - [varargs.h - handle variable argument list (LEGACY) - opengroup.org](https://pubs.opengroup.org/onlinepubs/7908799/xsh/varargs.h.html)
 - [stdarg.h - wikipedia.org](https://wikipedia.org/wiki/Stdarg.h)
 - [Variadic functions - cppreference.com](https://cppreference.com/c/variadic)
 - [Standard library header \<cstdarg\> - cppreference.com](https://en.cppreference.com/cpp/header/cstdarg)
 - [stdarg.h - handle variable argument list - opengroup.org](https://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdarg.h.html)
 - [6.13.3 Pointer Arguments in Variadic Functions - gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Variadic-Pointer-Args.html)
