# MIDR

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ASM_CONTENT.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ASM/C/ARM/MIDR.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM/C/ARM/MIDR.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_MIDR
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ASM/C/ARM/MIDR.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

With this function, you're able to read the ARM CPU **Main ID Register (MIDR)**.

Using `GET_MIDR` on a non-Arm CPU will cause an error on compiling time.

## Contents

| Contents List                |
| ---------------------------- |
| `#define GET_MIDR(VARIABLE)` |
| `#define get_midr(variable)` |

----

### GET_MIDR

```c
#define GET_MIDR(VARIABLE)
#define get_midr(variable)
```

Sets the value of the `MIDR` register to your variable.

Example:

```c
unsigned int midr = 0;

get_midr(midr);

printf("%x\n", midr); // CPU Main ID Register value
```

## References

**Note: If the documentation page does not load, ensure cookies are enabled. Some pages on `developer.arm.com` require them.**

* [Assembly ASM - developer.arm.com](https://developer.arm.com/documentation/ddi0601/2025-12/AArch64-Registers/MIDR-EL1--Main-ID-Register)
* [MIDR, Main ID Register - developer.arm.com](https://developer.arm.com/documentation/100442/0200/Register-descriptions/AArch32-system-registers/MIDR--Main-ID-Register)
