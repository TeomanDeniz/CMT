# USER32

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/USER32.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/WIN_CORE/USER32.H](https://github.com/TeomanDeniz/CMT/blob/main/WIN_CORE/USER32.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_USER32
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/WIN_CORE/USER32.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

| Contents List               |
| --------------------------- |
| `struct S_USER32;`          |
| `struct S_USER32 USER32;`   |

The Windows `USER32.DLL` API is exposed through a single global structure named `USER32`.

This structure is populated at runtime using `KERNEL32.LoadLibraryA`, so some function pointers may be `NULL` depending on the target Windows version or execution environment. So, always verify that a function pointer is valid before calling it.

Available functions are declared in `USER32.H`. You can extend the struct manually if you need additional exports that are not currently included.

Example:
```c
#include <CMT/WIN_CORE/USER32.H>

int main()
{
	USER32.MessageBoxA(0, "Hello, World!", "CMT", 0);
	return (0);
}
```

## References

 - [user32.dll - source.winehq.org](https://source.winehq.org/WineAPI/user32.html)
 - [USER32 Functions - geoffchappell.com](https://www.geoffchappell.com/studies/windows/win32/user32/api/index.htm)
 - [Windows API Index (User Interface) - learn.microsoft.com](https://learn.microsoft.com/en-us/windows/win32/apiindex/windows-api-list#user-interface)
