# SETJMP

<p align="center">
 <img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/SETJMP.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/LIB/SETJMP.H](https://github.com/TeomanDeniz/CMT/blob/main/LIB/SETJMP.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_SETJMP
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/LIB/SETJMP.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

SETJMP provides a unified interface for non-local control flow using the standard C `setjmp` and `longjmp` mechanisms.

It allows an execution environment to be saved and later restored, making it possible to return to a previously established point in the call stack without propagating normal function returns through every intermediate function.

Typical use cases include:

* Recovering from deeply nested error conditions.
* Implementing lightweight exception-like control flow in C.
* Returning to a known execution point after an error or exceptional condition.
* Supporting control-flow mechanisms in environments where a conventional exception system is unavailable.

SETJMP maps the CMT uppercase interface to the native `setjmp.h` implementation when a compatible implementation is available.

The interface is intentionally kept small:

* `JMP_BUF` - jump-buffer type.
* `SETJMP` - saves an execution environment.
* `LONGJMP` - restores a previously saved environment.

On platforms where a native `setjmp.h` implementation cannot be detected, a fallback implementation may be provided in the future.

## Contents

| Contents List               |
| --------------------------- |
| `#define jmp_buf`           |
| `#define JMP_BUF`           |
| `#define setjmp(env)`       |
| `#define SETJMP(ENV)`       |
| `#define longjmp(env, val)` |
| `#define LONGJMP(ENV, VAL)` |

Buffer

----

### `JMP_BUF`

```c
#define jmp_buf
#define JMP_BUF
```

Defines the jump-buffer type used by `SETJMP` and `LONGJMP`.

----

### `SETJMP`

```c
#define setjmp(env)
#define SETJMP(ENV)
```

Saves the current execution environment into `ENV`.

Returns `0` when the environment is saved normally.

When execution later returns through `LONGJMP`, `SETJMP` returns the value supplied to `LONGJMP`.

**Example**:

```c
JMP_BUF	ENV;

if (SETJMP(ENV) == 0)
{
	/* normal execution */
}
else
{
	/* returned through LONGJMP */
}
```

----

### `LONGJMP`

```c
#define longjmp(env, val)
#define LONGJMP(ENV, VAL)
```

Restores the execution environment previously saved by `SETJMP`.

Execution continues at the corresponding `SETJMP` call.

`VAL` becomes the return value of `SETJMP`.

**Example**:

```c
JMP_BUF	ENV;

if (SETJMP(ENV) == 0)
{
	LONGJMP(ENV, 1);
}
else
{
	/* execution resumes here */
}
```

## References

 - [longjmp.S - docs.fd.io](https://docs.fd.io/vpp/16.09/dd/d58/longjmp_8_s_source.html)
 - [setjmp - cppreference.com](https://en.cppreference.com/w/c/program/setjmp)
 - [longjmp - cppreference.com](https://en.cppreference.com/w/c/program/longjmp)
 - [Program support utilities - cppreference.com](https://en.cppreference.com/w/c/program)
 - [setjmp - Microsoft Learn](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/setjmp?view=msvc-170)
 - [longjmp - Microsoft Learn](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/longjmp?view=msvc-170)
