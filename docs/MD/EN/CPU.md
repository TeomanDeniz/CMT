# CPU

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CPU.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/CPU.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/CPU.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CPU
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/CPU.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT-DOCS/tree/main#cmt-auto-linker)

## Abstract

This header provides CPU vendor/architecture detection and a runtime version query function with a unified signature across supported CPUs.

- At compile time, preprocessor checks detect the target CPU architecture (Intel x86/x86-64, AMD x86, ARM/AArch32/AArch64, PowerPC, RISC-V, etc.) and define the corresponding __CPU_xxx__ macro.
- At runtime, `CPU_VERSION` global variable gives you a static C-string containing the CPU vendor ID and a short model/version/stepping description.
- For x86-family CPUs, CPUID is used to obtain vendor and version fields.
- For ARM-family CPUs, MIDR_EL1 or MIDR is read and parsed.
- For other architectures, similar native registers or instructions can be implemented in the same interface.

Purpose: Allows any codebase to get a consistent CPU identification string without linking extra libraries, calling OS APIs, or using sprintf/printf.

## Contents

| Contents List              |
| -------------------------- |
| `#define __CPU_INTEL__`    |
| `#define __CPU_ARM__`      |
| `#define __CPU_AMD_X86__`  |
| `#define __CPU_POWERPC__`  |
| `#define __CPU_RISCV__`    |
| `#define __CPU_HC12__`     |
| `#define __CPU_HCS08__`    |
| `#define __CPU_HC08__`     |
| `#define __CPU_COLDFIRE__` |
| `#define __CPU_M68K__`     |
| `#define __CPU_SH__`       |
| `#define __CPU_MIPS__`     |
| `#define __CPU_SPARC__`    |
| `#define __CPU_6502__`     |
| `#define __CPU_Z80__`      |
| `#define __CPU_TI__`       |
| `#define __CPU_SHARC__`    |
| `#define __CPU_BLACKFIN__` |
| `#define __CPU_DSP56K__`   |
| `#define __SYSTEM_370__`   |
| `const char *CPU_VERSION;` |

----

### \_\_CPU_INTEL\_\_

```c
#define __CPU_INTEL__
```

Indicates the target architecture is Intel CPU.

In `ARCHITECTURE.H`; `__SYSTEM_64_BIT__`, `__SYSTEM_32_BIT__`, and `__SYSTEM_16_BIT__` are defined.

----

### \_\_CPU_ARM\_\_

```c
#define __CPU_ARM__
```

Indicates the target architecture is ARM CPU.

In `ARCHITECTURE.H`; `__SYSTEM_64_BIT__` and `__SYSTEM_32_BIT__` are defined.

----

### \_\_CPU_AMD_X86\_\_

```c
#define __CPU_AMD_X86__
```

Indicates the target architecture is Intel AMD CPU.

In `ARCHITECTURE.H`; `__SYSTEM_64_BIT__` and `__SYSTEM_32_BIT__` are defined.

----

### \_\_CPU_POWERPC\_\_

```c
#define __CPU_POWERPC__
```

Indicates the target architecture is IBM PowerPC CPU.

In `ARCHITECTURE.H`; `__SYSTEM_64_BIT__` and `__SYSTEM_32_BIT__` are defined.

----

### \_\_CPU_RISCV\_\_

```c
#define __CPU_RISCV__
```

Indicates the target architecture is RISC-V CPU.

----

### \_\_CPU_HC12\_\_

```c
#define __CPU_HC12__
```

Indicates the target architecture is Motorola/Freescale HC12 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_16_BIT__` is defined.

----

### \_\_CPU_HCS08\_\_

```c
#define __CPU_HCS08__
```

Indicates the target architecture is Freescale HC08 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_16_BIT__` is defined.

----

### \_\_CPU_HC08\_\_

```c
#define __CPU_HC08__
```

Indicates the target architecture is Motorola HCS08 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_16_BIT__` is defined.

----

### \_\_CPU_COLDFIRE\_\_

```c
#define __CPU_COLDFIRE__
```

Indicates the target architecture is Motorola/Freescale ColdFire CPU.

----

### \_\_CPU_M68K\_\_

```c
#define __CPU_M68K__
```

Indicates the target architecture is Motorola 680x0 (M68K) CPU family.

----

### \_\_CPU_SH\_\_

```c
#define __CPU_SH__
```

Indicates the target architecture is SuperH (SH) CPU family.

----

### \_\_CPU_MIPS\_\_

```c
#define __CPU_MIPS__
```

Indicates the target architecture is MIPS CPU family.

----

### \_\_CPU_SPARC\_\_

```c
#define __CPU_SPARC__
```

Indicates the target architecture is SPARC CPU family.

----

### \_\_CPU_6502\_\_

```c
#define __CPU_6502__
```

Indicates the target architecture is MOS Technology 6502 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_8_BIT__` is defined.

----

### \_\_CPU_Z80\_\_

```c
#define __CPU_Z80__
```

Indicates the target architecture is Zilog Z80 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_8_BIT__` is defined.

----

### \_\_CPU_TI\_\_

```c
#define __CPU_TI__
```

Indicates the target architecture is Texas Instruments CPU/DSP family.

----

### \_\_CPU_SHARC\_\_

```c
#define __CPU_SHARC__
```

Indicates the target architecture is Analog Devices SHARC DSP.

In `ARCHITECTURE.H`: `__SYSTEM_32_BIT__` is defined.

----

### \_\_CPU_BLACKFIN\_\_

```c
#define __CPU_BLACKFIN__
```

Indicates the target architecture is Analog Devices Blackfin DSP.

----

### \_\_CPU_DSP56K\_\_

```c
#define __CPU_DSP56K__
```

Indicates the target architecture is Motorola/Freescale DSP56000 family.

----

### \_\_SYSTEM_370\_\_
```c
#define __SYSTEM_370__
```

Indicates that the compiled, hosted, or targeted hardware is System/370.

----

### CPU_VERSION

```c
const char	*CPU_VERSION;
```

Holds a static string containing additional details about your CPU.

Example:
```c
printf(CPU_VERSION);
```

Example Results will be:

> For `__CPU_INTEL__`, `__CPU_AMD_X86__`
> 
> Syntax: `<CPU vendor> FAM<family (hex)>-MODy<model (hex)>-STP<stepping (hex)>`
> 
> Return examples:
> - `"GenuineIntel FAM6-MODA-STP5"`
> - `"AuthenticAMD FAMF-MOD1-STP2"`

> For `__CPU_ARM__`
> 
> Syntax: `<implementer_char>-<variant>-<architecture>-<partnum>-<revision>`
> 
> Return examples:
> - `"A-0-?-=08-3"`
> - `"A-0-?-=03-4"`
> - `"Q-1-8-205-2"`

> For `__CPU_POWERPC__`
> 
> Syntax: `PPC-<version (4 or 3 hex nibbles)>-<revision (4 hex nibbles)>`
> 
> Return examples:
> - `"PPC-003C-0001"`
> - `"PPC-0044-0200"`
> - `"PPC-0070-0102"`
> - `"PPC-0440-0000"`
> - `"PPC-0603-0000"`
> - `"PPC-????-????"`

> For `__CPU_RISCV__`
> 
> Syntax: `RISC-V<XLEN>`
> 
> Return examples:
> - `"RISC-V32"`
> - `"RISC-V64"`
> - `"RISC-V??"`

> For `__CPU_HC12__`
> 
> Return example: `"HC12"`

> For `__CPU_HCS08__`
> 
> Return example: `"HCS08"`

> For `__CPU_HC08__`
> 
> Return example: `"HC08"`

> For `__CPU_COLDFIRE__`
> 
> Return example: `"ColdFire"`

> For `__CPU_M68K__`
> 
> Syntax: `M68K<major>0`
> 
> Return examples:
> - `"M68K00"`
> - `"M68K10"`
> - `"M68K20"`
> - `"M68K60"`
> - `"M68K??"`

> For `__CPU_SH__`
> 
> Syntax: `SH-<version>`
> 
> Return examples:
> - `"SH-1"`
> - `"SH-2"`
> - `"SH-3"`
> - `"SH-4"`
> - `"SH-?"`

> For `__CPU_MIPS__`
> 
> Syntax: `MIPS-<vesion or type>`
> 
> Return examples:
> - `"MIPS-ISA1"`
> - `"MIPS-ISA4"`
> - `"MIPS-32"`
> - `"MIPS-64"`
> - `"MIPS-?"`

> For `__CPU_SPARC__`
> 
> Syntax: `SPARCv<version>`
> 
> Return examples:
> - `"SPARCv8"`
> - `"SPARCv9"`
> - `"SPARCv?"`

> For `__CPU_6502__`
> 
> Syntax: `65<variant>`
> 
> Return examples:
> - `"6502"`
> - `"65C02"`
> - `"65SC02"`
> - `"65816"`

> For `__CPU_Z80__`
> 
> Return examples:
> - `"Z80"`
> - `"Z80R"`
> - `"Z80GB"`

> For `__CPU_TI__`
> 
> Syntax: `TI-<family>`
> 
> Return examples:
> - `"TI-MSP430"`
> - `"TI-C55X"`
> - `"TI-C28XX"`
> - `"TI-C2000"`
> - `"TI-C6X"`
> - `"TI-C6740"`
> - `"TI-C67+"`
> - `"TI-C6700"`
> - `"TI-C6600"`
> - `"TI-C64+"`
> - `"TI-C6400"`
> - `"TI-C6200"`
> - `"TI-C5XX"`
> - `"TI-C5X"`
> - `"TI-TMS470"`
> - `"TI-???"`

> For `__CPU_SHARC__`
> 
> Syntax: `ADSP-<model>`
> 
> Return examples:
> - `"ADSP-21000"`
> - `"ADSP-21160"`
> - `"ADSP-?????"`

> For `__CPU_BLACKFIN__`
> 
> Syntax: `ADSP-BF<model>`
> 
> Return examples:
> - `"ADSP-BF512"`
> - `"ADSP-BF525"`
> - `"ADSP-BF533"`
> - `"ADSP-BF548M"`
> - `"ADSP-BF???"`

> For `__CPU_DSP56K__`
> 
> Return example: `"MOT-DSP56K"`

> For `__SYSTEM_370__`
> 
> Return example: `"System/370"`

## References

 - [Pre-defined Compiler Macros Wiki (Architectures) - sourceforge.net](https://sourceforge.net/p/predef/wiki/Architectures/)
 - [Freescale HC12 Compiler - Motorola HC12 Specific Defines (Page 367) - nxp.com](https://www.nxp.com/docs/en/reference-manual/HC12COMPILERRM.pdf)
 - [HC(S)08 Compiler Manual - Freescale HC08 Specific Defines (Page 352) - ece-classes.usc.edu](https://ece-classes.usc.edu/ee459/library/documents/Compiler_HC08.pdf)
 - [CrossCore® Embeded Studio 1.1 - C/C++ Compiler Manual for SHARC® Processors - analog.com](https://www.analog.com/media/en/dsp-documentation/software-manuals/cces_1-1-0_sharc_comp_man_rev_1-2.pdf)
 - [VisualDSP++® 5.0 Assembler and Preprocessor Manual - analog.com](https://www.analog.com/media/en/dsp-documentation/software-manuals/50_asm_mn_rev_3.4.pdf)
 - [z/OS (Macros related to the platform) - ibm.com](https://www.ibm.com/docs/en/zos/3.1.0?topic=macros-related-platform)
 - [Broadway (processor) - wikipedia.org](https://wikipedia.org/wiki/Broadway_%28processor%29)
 - [Xenon (processor) - wikipedia.org](https://wikipedia.org/wiki/Xenon_%28processor%29)
 - [Gekko (processor) - wikipedia.org](https://wikipedia.org/wiki/Gekko_%28processor%29)
