# \_\_PEB_LOADER\_\_

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/__PEB_LOADER__.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/WIN_CORE/\_\_PEB_LOADER\_\_.H](https://github.com/TeomanDeniz/CMT/blob/main/WIN_CORE/__PEB_LOADER__.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_PEB_LOADER
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/WIN_CORE/__PEB_LOADER__.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

`PEB_LOADER` provides lightweight routines for locating loaded modules and exported functions without relying on the Windows loader APIs.
Instead of calling functions such as `GetModuleHandleW()` or `GetProcAddress()`, the module walks the Process Environment Block (PEB) and parses PE export tables manually.

This is useful for low-level runtime environments, shellcode, custom loaders, dependency-free applications, and situations where direct interaction with the Windows API is undesirable.

----

## Contents

| Contents List                                                |
| ------------------------------------------------------------ |
| `void *PEB_GET_MODULE_BASE(const char *);`                   |
| `void *peb_get_module_base(const char *);`                   |
| `void *PEB_GET_EXPORT(const unsigned char *, const char *);` |
| `void *peb_get_export(const unsigned char *, const char *);` |

----

### PEB_GET_MODULE_BASE

```c
void	*PEB_GET_MODULE_BASE(const char *);
void	*peb_get_module_base(const char *);
```

Searches the process loader's module list through the PEB and returns the base address of a loaded module whose Unicode filename matches the target argument.

The function traverses the loader's `InLoadOrderModuleList`, compares each module's `BaseDllName`, and returns the corresponding `DllBase` when a match is found.

Returns:

* Module base address on success.
* `0` if the module is not loaded.
* `0` if the PEB or loader structures are unavailable.

Example:
```c
void	*KERNEL32 = PEB_GET_MODULE_BASE("KERNEL32.DLL");

if (!KERNEL32)
{
	/* Module somehow not found */
}
else
{
	/* KERNEL32.DeleteFileA("KERNEL32.DLL") */
}
```

----

### PEB_GET_EXPORT

```c
void	*PEB_GET_EXPORT(const unsigned char *, const char *);
void	*peb_get_export(const unsigned char *, const char *);
```

Retrieves the address of an exported function by manually parsing a module's PE export directory.

The function validates the DOS header, locates the PE header, resolves the export table, and performs a string comparison against exported names until the requested symbol is found.

Unlike `GetProcAddress()`, no Windows API calls are used.

Returns:

* Exported function address on success.
* `0` if the export does not exist.
* `0` if the module is invalid or lacks an export table.

Example:
```c
#define INCL_CMT_STDCALL
#include <CMT.H> // STDCALL

void	*KERNEL32 = PEB_GET_MODULE_BASE("KERNEL32.DLL");

typedef void	*(STDCALL *FN_GETPROCADDRESS)(void *, const char *);

FN_GETPROCADDRESS	GET_PROC_ADDRESS = (FN_GETPROCADDRESS)PEB_GET_EXPORT(KERNEL32, "GetProcAddress");

if (GET_PROC_ADDRESS)
{
	/* Export resolved */
	/* You can now use GetProcAddress function as GET_PROC_ADDRESS */
}
```

## References

 - [PEB structure (winternl.h) - learn.microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/winternl/ns-winternl-peb)
 - [Process Environment Block - wikipedia.org](https://wikipedia.org/wiki/Process_Environment_Block)
 - [Locating Modules Via The PEB (Process Environment Block) - malwaretech.com](https://malwaretech.com/wiki/locating-modules-via-the-peb-x64)
 - [Using PEB to Get Base Address of Kernelbase.dll - nagareshwar.securityxploded.com](https://nagareshwar.securityxploded.com/2013/09/21/using-peb-to-get-base-address-of-kernelbase-dll/)
 - [struct _PEB (wine-mirror/wine/include/winternl.h) - github.com](https://github.com/wine-mirror/wine/blob/1aff1e6a370ee8c0213a0fd4b220d121da8527aa/include/winternl.h#L271)
 - [Win32 Thread Information Block - wikipedia.org](https://wikipedia.org/wiki/Win32_Thread_Information_Block)
