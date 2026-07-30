# STDCALL

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/STDCALL.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/STDCALL.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/STDCALL.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_STDCALL
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/STDCALL.H"
> ```

## Abstract

Defines a calling convention where arguments are passed on the stack, the callee cleans the stack, and (on 32-bit systems) the function name may be decorated.

Primarily associated with Windows APIs but supported by multiple compilers for binary-interface compatibility.

In **16-bit Windows**, system APIs use the `FAR STDCALL` calling convention (`far` call + `stdcall` stack cleanup). They are invoked normally; no manual far pointer handling is required.

## Contents

| Contents List     |
| ----------------- |
| `#define STDCALL` |

----

### STDCALL

```c
#define STDCALL
```

**Examples**:
```c
int STDCALL	WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, ...)
{
	. . .
}

extern STDCALL int WinMain(...);
```

## References

 - [__stdcall - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/stdcall)
 - [x86 calling conventions - wikipedia.org](https://wikipedia.org/wiki/X86_calling_conventions)
