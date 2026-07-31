# REGPASS

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/REGPASS.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/REGPASS.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/REGPASS.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_REGPASS
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/REGPASS.H"
> ```

## Abstract

Combination of both `REGPARM` and `FASTCALL`. THe purpose of this addon exist is always trying to pass parameters as registers. Or at least two or three of them.

> **Important**:
> `REGPASS` is **not a standardized ABI**.
> It is a compiler and architecture-specific optimization and must be used consistently across declarations, definitions, and function pointers.

## Content

```c
#define REGPASS
#define regpass
```

Using one of avaliable "passing arguments via register" method, else does nothing.

| `REGPASS`    | Register usage (in order) |
| ------------ | ------------------------- |
| `REGPARM(3)` | `EAX`, `EDX`, `ECX`       |
| `FASTCALL`   | `ECX`, `EDX`,             |

**Examples**:
```c
int regpass func(int a, void *b);
```

Prototype:
```c
extern int REGPASS func(int, int, void *);
```

Function pointer:
```c
int (regpass *test)(int, int, void *);
```

Function pointer type casting:
```c
test = (int (REGPASS *)(int))pointer;
```

## References

 - [![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/FASTCALL.gif) **FASTCALL** - CMT](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/FASTCALL.md)
 - [![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/REGPARM.gif) **REGPARM** - CMT](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/REGPASS.md)
