# ABI

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ABI.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/ABI.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/ABI.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_ABI
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/ABI.H"
> ```

## Abstract

The **ABI** layer provides a centralized set of macros and definitions that adapt low-level code to the target platform's Application Binary Interface.

It detects and exposes platform-specific properties including:

* **Endianness** (little-endian vs big-endian)

<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/ENDIANS_TABLE.png" ALT="Endian Table" STYLE="WIDTH: 100%;"/>

* **Register conventions**, especially callee-saved vs caller-saved registers

* **Function calling conventions**, including:

  * Argument passing (registers vs stack, ordering)
  * Return value mechanisms (registers, multiple registers, or memory)

These definitions ensure consistent behavior across architectures and operating systems by abstracting ABI differences behind a uniform interface.

The header is intended for use in low-level systems code, compilers, or cross-platform runtimes where direct control over calling conventions and binary interfaces is required.

Incorrect assumptions about ABI details can lead to subtle corruption bugs; this layer exists to make those constraints explicit and enforceable at compile time.

Stack offsets shown assume no compiler-generated prologue/epilogue adjustments. Actual offsets may vary depending on function frame setup.

## Contents

| Endians                          |
| -------------------------------- |
| `#define __ABI__LITTLE_ENDIAN__` |
| `#define __ABI__BIG_ENDIAN__`    |
| `#define __ABI__ENDIAN__`        |

| Callee-Saved Registers                  |
| --------------------------------------- |
| `#define __ABI__CALLEE_SAVED_WINDOWS__` |
| `#define __ABI__CALLEE_SAVED_UNIX__`    |

| Caller-Saved Registers                  |
| --------------------------------------- |
| `#define __ABI__CALLER_SAVED_WINDOWS__` |
| `#define __ABI__CALLER_SAVED_UNIX__`    |

| Argument Passing Ways               |
| ----------------------------------- |
| `#define __ABI__PASS_REG_WINDOWS__` |
| `#define __ABI__PASS_REG_UNIX__`    |
| `#define __ABI__PASS_STACK__`       |

----

### \_\_ABI__LITTLE_ENDIAN\_\_

```c
#define __ABI__LITTLE_ENDIAN__
```

Defined when the target architecture uses little-endian byte order (least significant byte stored first).

Example:

```
  Input         Output
0xABCDEF12 -> 0x12EFCDAB
```

----

### \_\_ABI__BIG_ENDIAN\_\_

```c
#define __ABI__BIG_ENDIAN__
```

Defined when the target architecture uses big-endian byte order (most significant byte stored first).

```
  Input         Output
0xABCDEF12 -> 0xABCDEF12
```

----

### \_\_ABI__ENDIAN\_\_

```c
#define __ABI__ENDIAN__
```

Defined `1` if `__ABI__LITTLE_ENDIAN__` defined or defined `2` if `__ABI__BIG_ENDIAN__` defined.

----

### \_\_ABI__CALLEE_SAVED_WINDOWS\_\_

```c
#define __ABI__CALLEE_SAVED_WINDOWS__
```

Defined for Microsoft Windows Platforms.

For Intel CPU - 64-bit Architecture:
 * `RBX`, `RBP`, `RDI`, `RSI`, `R12`, `R13`, `R14`, and `R15` registers are callee-saved.
 * `RSP` Stack pointer must be preserved (not treated as a callee-saved GPR)
 * `XMM6`, `XMM7`, `XMM8`, `XMM9`, `XMM10`, `XMM11`, `XMM12`, `XMM13`, `XMM14`, and `XMM15` floating-point registers are callee-saved.

For Intel CPU - 32-bit Architecture:
 * `EBX`, `EBP`, `EDI`, and `ESI` registers are callee-saved.
 * `ESP` Stack pointer must be preserved (not treated as a callee-saved GPR)

For Intel CPU - 16-bit Architecture:
 * `BX`, `BP`, `DI`, and `SI` registers are callee-saved.
 * `SP` Stack pointer must be preserved (not treated as a callee-saved GPR)

----

### \_\_ABI__CALLEE_SAVED_UNIX\_\_

```c
#define __ABI__CALLEE_SAVED_UNIX__
```

Defined for common Unix-like ABIs (e.g., System V ABI).

Platform-specific variations may exist.

For Intel CPU - 64-bit Architecture:
 * `RBX`, `RBP`, `R12`, `R13`, `R14`, and `R15` registers are callee-saved.
 * `RSP` Stack pointer must be preserved (not treated as a callee-saved GPR)
 * `XMM6`, `XMM7`, `XMM8`, `XMM9`, `XMM10`, `XMM11`, `XMM12`, `XMM13`, `XMM14`, and `XMM15` floating-point registers are callee-saved.

For Intel CPU - 32-bit Architecture:
 * `EBX`, `EBP`, `EDI`, and `ESI` registers are callee-saved.
 * `ESP` Stack pointer must be preserved (not treated as a callee-saved GPR)

For Intel CPU - 16-bit Architecture:
 * `BX`, `BP`, `DI`, and `SI` registers are callee-saved.
 * `SP` Stack pointer must be preserved (not treated as a callee-saved GPR)

For PowerPC CPU - 32-bit and 64-bit Architectures:
 * `R14`, `R15`, `R16`, `R17`, `R18`, `R19`, `R20`, `R21`, `R22`, `R23`, `R24`, `R25`, `R26`, `R27`, `R28`, `R29`, `R30`, and `R31` registers are callee-saved.
 * `R1` (stack pointer - must always be preserved)
 * `R2` (TOC pointer on PPC64 - important in many environments)
 * `R13` (often used as small data pointer, platform-dependent)
 * `F14`, `F15`, `F16`, `F17`, `F18`, `F19`, `F20`, `F21`, `F22`, `F23`, `F24`, `F25`, `F26`, `F27`, `F28`, `F29`, `F30`, and `F31` floating-point registers are callee-saved.

----

### \_\_ABI__CALLER_SAVED_WINDOWS\_\_

```c
#define __ABI__CALLER_SAVED_WINDOWS__
```

Defined for Microsoft Windows Platforms.

For Intel CPU - 64-bit Architecture:
 * `RAX`, `RCX`, `RDX`, `R8`, `R9`, `R10`, and `R11` registers are caller-saved.
 * `XMM0`, `XMM1`, `XMM2`, `XMM3`, `XMM4`, and `XMM5` floating-point registers are caller-saved.

For Intel CPU - 32-bit Architecture:
 * `EAX`, `ECX`, and `EDX` registers are caller-saved.
 * `XMM0`, `XMM1`, `XMM2`, `XMM3`, `XMM4`, `XMM5`, `XMM6`, and `XMM7` floating-point registers are caller-saved.

For Intel CPU - 16-bit Architecture:
 * `AX`, `CX`, and `DX` registers are commonly treated as caller-saved in typical 16-bit calling conventions.

----

### \_\_ABI__CALLER_SAVED_UNIX\_\_

```c
#define __ABI__CALLER_SAVED_UNIX__
```

Defined for common Unix-like ABIs (e.g., System V ABI).

Platform-specific variations may exist.

For Intel CPU - 64-bit Architecture:
 * `RAX`, `RCX`, `RDX`, `RSI`, `RDI`, `R8`, `R9`, `R10`, and `R11` registers are caller-saved.
 * `XMM0`, `XMM1`, `XMM2`, `XMM3`, `XMM4`, and `XMM5` floating-point registers are caller-saved.

For Intel CPU - 32-bit Architecture:
 * `EAX`, `ECX`, and `EDX` registers are caller-saved.
 * `XMM0`, `XMM1`, `XMM2`, `XMM3`, `XMM4`, `XMM5`, `XMM6`, and `XMM7` floating-point registers are caller-saved **if SSE is used**.

For Intel CPU - 16-bit Architecture:
 * `AX`, `CX`, and `DX`, registers are caller-saved.
 * (FPU/x87 is caller-managed in practice)

For PowerPC CPU - 32-bit and 64-bit Architectures:
 * `R0`, `R3`, `R4`, `R5`, `R6`, `R7`, `R8`, `R9`, `R10`, `R11`, and `R12` registers are caller-saved.
 * `F0`, `F1`, `F2`, `F3`, `F4`, `F5`, `F6`, `F7`, `F8`, `F9`, `F10`, `F11`, `F12`, and `F13` floating-point registers are caller-saved.

----

### \_\_ABI__PASS_REG_WINDOWS\_\_

```c
#define __ABI__PASS_REG_WINDOWS__
```

Defined for Windows Platform

For Intel CPU - 64-bit Architecture:

| Argument Index | Register / Stack |
| -------------- | ---------------- |
| 1              | `RCX`            |
| 2              | `RDX`            |
| 3              | `R8`             |
| 4              | `R9`             |
| 5              | `[RSP + 40]`     |
| 6              | `[RSP + 48]`     |
| ...            | `[RSP + ...]`    |

----

### \_\_ABI__PASS_REG_UNIX\_\_

```c
#define __ABI__PASS_REG_UNIX__
```

Defined for any Unix Platform.

For Intel CPU - 64-bit Architecture:

Return register is `RAX`.

| Argument Index | Register / Stack |
| -------------- | ---------------- |
| 1              | `RDI`            |
| 2              | `RSI`            |
| 3              | `RDX`            |
| 4              | `RCX`            |
| 5              | `R8`             |
| 6              | `R9`             |
| 7              | `[RSP + 16]`     |
| 8              | `[RSP + 24]`     |
| ...            | `[RSP + ...]`    |

For PowerPC CPU - 32-bit Architecture:

Return register is `R3`.

| Argument Index | Register / Stack |
| -------------- | ---------------- |
| 1              | `R3`             |
| 2              | `R4`             |
| 3              | `R5`             |
| 4              | `R6`             |
| 5              | `R7`             |
| 6              | `R8`             |
| 7              | `R9`             |
| 8              | `R10`            |
| 9              | `8(R1)`          |
| 10             | `12(R1)`         |
| ...            | `...(R1)`        |

For PowerPC CPU - 64-bit Architecture:

Return register is `R3`.

| Argument Index | Register / Stack |
| -------------- | ---------------- |
| 1              | `R3`             |
| 2              | `R4`             |
| 3              | `R5`             |
| 4              | `R6`             |
| 5              | `R7`             |
| 6              | `R8`             |
| 7              | `R9`             |
| 8              | `R10`            |
| 9              | `16(R1)`         |
| 10             | `24(R1)`         |
| ...            | `...(R1)`        |

----

### \_\_ABI__PASS_STACK\_\_

```c
#define __ABI__PASS_STACK__
```

Defined for any Unix or Windows Platform.

For Intel CPU - 32-bit Architecture:

| Argument Index | Register / Stack |
| -------------- | ---------------- |
| 1              | `[ESP + 8]`      |
| 2              | `[ESP + 12]`     |
| 3              | `[ESP + 16]`     |
| ...            | `[ESP + ...]`    |

For Intel CPU - 16-bit Architecture:

| Argument Index | Register / Stack |
| -------------- | ---------------- |
| 1              | `[BP + 4]`       |
| 2              | `[BP + 6]`       |
| 3              | `[BP + 8]`       |
| ...            | `[BP + ...]`     |

To be honest, this is a "teaching shortcut", not a spec.

Like for Intel 16-bit CPU, this stack address layout is not always same thanks to far pointers which mostly used.

And arguments are located according to a calling convention, which defines stack frame layout.

## References

 - [Pre-defined Compiler Macros Wiki (Endianness) - sourceforge.net](https://sourceforge.net/p/predef/wiki/Endianness/)
 - [Endianness - wikipedia.org](https://wikipedia.org/wiki/Endianness)
 - [Big Endian Format - sciencedirect.com](https://www.sciencedirect.com/topics/computer-science/big-endian-format)
 - [System V ABI - osdev.org](https://wiki.osdev.org/System_V_ABI)
 - [x64 calling convention - microsoft.com](https://learn.microsoft.com/en-us/cpp/build/x64-calling-convention?view=msvc-170)
 - [x86 calling conventions - wikipedia.org](https://wikipedia.org/wiki/X86_calling_conventions)
 - [PowerPC™ e500 Application Binary Interface User’s Guide - nxp.com](https://www.nxp.com/docs/en/reference-manual/E500ABIUG.pdf)
