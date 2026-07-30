# KERNEL32

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/KERNEL32.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/WIN_CORE/KERNEL32.H](https://github.com/TeomanDeniz/CMT/blob/main/WIN_CORE/KERNEL32.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_KERNEL32
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/WIN_CORE/KERNEL32.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT-DOCS/tree/main#cmt-auto-linker)

## Abstract

| Contents List                 |
| ----------------------------- |
| `struct S_KERNEL32;`          |
| `struct S_KERNEL32 KERNEL32;` |

The Windows `KERNEL32.DLL` API is exposed through a single global structure named `KERNEL32`.

This structure is populated at runtime, so some function pointers may be `NULL` depending on the target Windows version (especially on older systems such as Windows 2000). So, always verify that a function pointer is valid before calling it.

Available functions are declared in `KERNEL32.H`. You can extend the struct manually if you need additional exports that are not currently included.

Example:
```c
#include <CMT/WIN_CORE/KERNEL32.H>

int main()
{
	KERNEL32.Sleep(42);
	return (0);
}
```

## References

 - [Hunting for Windows API prototypes and descriptions... - hexacorn.com](https://www.hexacorn.com/blog/2023/10/25/hunting-for-windows-api-prototypes-and-descriptions/)
 - [kernel32.dll - source.winehq.org](https://source.winehq.org/WineAPI/kernel32.html)
 - [KERNEL32 Functions - geoffchappell.com](https://www.geoffchappell.com/studies/windows/win32/kernel32/api/index.htm)
