# RAX

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ASM_CONTENT.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ASM/C/INTEL/RAX.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM/C/INTEL/RAX.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_RAX
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ASM/C/INTEL/RAX.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

With these functions, you're able to move and get values from the Intel CPU register RAX and stack with different data sizes and archs.

Using `GET_RAX` or `SET_RAX` on a non-Intel CPU will cause an error on compiling time.

> ⚠️ Note
> 
> On Intel 32-BIT, EAX register is used.
> On Intel 16-BIT, AX register is used.

## Contents

| Contents List               |
| --------------------------- |
| `#define GET_RAX(VARIABLE)` |
| `#define get_rax(variable)` |
| `#define SET_RAX(VALUE)`    |
| `#define set_rax(VALUE)`    |

----

### GET_RAX

```c
#define GET_RAX(VARIABLE)
#define get_rax(variable)
```

Sets the value of `RAX` register holding to your variable.

Example:

```c
long long test = 0;

volatile_function_that_returns_42();

get_rax(test);

printf("%d\n", test); // 42
```

----

### SET_RAX

```c
#define SET_RAX(VALUE)
#define set_rax(value)
```

Sets the `RAX` register's value to given value or variable.

**Examples**:
```c
set_rax(42);
```

```c
long long value = 42;

set_rax(value);
```