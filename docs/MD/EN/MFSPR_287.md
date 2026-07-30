# MFSPR_287

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ASM_CONTENT.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ASM/C/INTEL/MFSPR_287.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM/C/POWERPC/MFSPR_287.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_MFSPR_287
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ASM/C/POWERPC/MFSPR_287.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

These macros execute the `mfspr` instruction to read the contents of **Special-Purpose Register (SPR) 287** on PowerPC processors.

`mfspr` transfers the value of a specified SPR into a general-purpose register (GPR), allowing software to inspect processor state or control information maintained in that register.

SPR **287** is implementation-specific but is commonly associated with **Processor Version Register (PVR)** on many PowerPC variants.

* `mfspr` is a privileged or semi-privileged instruction on some implementations; availability may depend on execution level.

* The meaning of **SPR 287** is **implementation-dependent**, though widely used as:
  * **Processor identification**
  * **Version and revision encoding**

* The returned value is typically structured as:
  * Upper bits: **Processor family / model**
  * Lower bits: **Revision level**

* The instruction performs a direct register transfer:
  * `SPR[287] -> GPR -> variable`

* Does not modify condition registers unless explicitly implemented by the compiler backend.

* Behavior and interpretation of SPR 287 may differ across:
  * Embedded PowerPC variants
  * Server-class processors
  * Custom implementations

Software should not assume a fixed layout unless targeting a known processor family.

## Contents

| Contents List                     |
| --------------------------------- |
| `#define GET_MFSPR_287(VARIABLE)` |
| `#define get_mfspr_287(variable)` |

----

### GET_MFSPR_287

```c
#define GET_MFSPR_287(VARIABLE)
#define get_mfspr_287(variable)
```

Executes the `mfspr` instruction targeting **SPR 287**, storing the retrieved value into the provided variable.

The macro emits an `mfspr` instruction where:

* The destination is a general-purpose register mapped to the given variable
* The source is **SPR 287**

After execution, the variable contains the raw 32-bit or 64-bit value of the register (depending on the processor mode).

Example:

```c
unsigned int value;

get_mfspr_287(value);
```

After execution:

* `value` contains the contents of **SPR 287**

## References

 - [PowerPC™ Microprocessor Family: The Programming Environments - nxp.com](https://www.nxp.com/docs/en/user-guide/MPCFPE_AD_R1.pdf)
 - [mfspr extended mnemonics for PowerPC® - ibm.com](https://www.ibm.com/docs/en/aix/7.2.0?topic=registers-mfspr-extended-mnemonics-powerpc)
 - [e200z3 PowerPC core Reference manual - st.com.cn](https://www.st.com.cn/resource/en/user_manual/um0434-e200z3-powerpc-core-reference-manual-stmicroelectronics.pdf)
 - [PowerPC 460-S Embedded Processor Core User’s Manual - iczhiku.com](https://picture.iczhiku.com/resource/eetop/SHkequZYrYSUjcxn.pdf)
