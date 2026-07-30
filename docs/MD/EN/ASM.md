# ASM

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/PUSH_POP.gif"/>
</p>

> ## ⚠️ Important
> ### File at: [**[📜 CMT/ASM.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_ASM
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ASM.H"
> ```

## Abstract

**⚠️ WARNING - Please use this addon If You TRULY know what are you doing!!! And most importantly, for love of Terry Davis Read ABI Rules at [`ABI.H`](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ABI.md) Module!!!**

This header provides a unified macro layer that lets you write inline assembly with minimal compiler-specific boilerplate.

The system:
- Detects compiler ASM support
- Detects architecture: **16-bit / 32-bit / 64-bit**
- Detects backend syntax: **AT&T**, **Intel**, or **MSVC inline asm**
- If your compiler doesn't support inline assembly at all, your static or linkable functions going to be self-editable, and puts the wanted OP codes on your function on first run. (That mostly means on DOS systems which W^X is not an issue)
- Defines stable macro keywords so your ASM blocks stay portable

This allows you to create sections (functions) that are entirely built with Assembly code, using a single standard syntax, across compilers.

If inline assembly doesn't supported by your compiler, worry not. This system will ensure your program supports it.

## Compile-Time Module Selection System (IMPORTANT)

This module uses a compile-time inclusion model to reduce build cost and allow selective opcode feature activation.

Instead of compiling the full instruction set, the system uses macro-gated feature flags:

```c
#define INCL_CMT_ASM_ADD

#define INCL_CMT_ASM_OP
#define INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER

#include <CMT/ASM.H>

...
```

or

```c
#define INCL_CMT_ASM_ADD
#define INCL_CMT_ASM_OTHERS

#define INCL_CMT_ASM_INLINE
#define INCL_CMT_ASM_SIZEOF

#include <CMT/ASM.H>

...
```

Each feature group is guarded by nested preprocessor switches:

```c
#ifdef INCL_CMT_ASM_ADD
#include "INTEL/ADD.INL"
#endif
```

In direct include of `ASM.H`, it is going to include everything automatically. We are not suggesting to directly include `ASM.H` without macro-gated feature flags.

The goal of this purpose is:
* Minimize compile-time overhead by excluding unused instruction sets
* Allow per-project opcode surface selection
* Prevent unnecessary template / macro expansion across full ISA
* Enable modular ISA slicing (ADD / JMP / MOV / etc.)

The command-specific flags exist in the CPU documentations at the bottom of this module's documentation.

For `ASM.H`-specific flags, the available options are:

* `INCL_CMT_ASM_OP`: includes opcode definitions for commands (Example: `_MOV_RAX_RBX`)
* `INCL_CMT_ASM_SIZEOF`: includes sizeof values for opcode sequences (Example: `SIZEOF_MOV_RAX_RBX`)
* `INCL_CMT_ASM_INLINE`: includes inline assembly syntax versions of commands (Example: `MOV_RAX_RBX`)
* `INCL_CMT_ASM_DISABLE_AUTO_DOWNGRADER`: disables the automatic downgrading system (e.g., `RAX` becomes `EAX` automatically)

If none of `INCL_CMT_ASM_OP`, `INCL_CMT_ASM_SIZEOF`, or `INCL_CMT_ASM_INLINE` are defined, all three are enabled automatically.

## Contents

| Contents List                                              |
| ---------------------------------------------------------- |
| `#define SECTION(RETURN_TYPE, NAME, ARGUMENTS)`            |
| `#define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS)`     |
| `#define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)`        |
| `#define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)` |
| `#define END`                                              |
| `#define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS`             |

----

### SECTION

```c
#define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
```

Create a Linkable section (Function) in Assembly code.

Only works in ASNI C and does nothing in K&R C.

- **`RETURN_TYPE`**: The return type of your function
- **`NAME`**: Name of your function
- **`ARGUMENTS`**: Arguments to your function.

Example:
```c
SECTION(void, test, (int a, char b))
```

----

### STATIC_SECTION

```c
#define STATIC_SECTION(RETURN_TYPE, NAME, ARGUMENTS)
```

Create a Unlinkable static section (Function) in Assembly code.

Only works in ASNI C and does nothing in K&R C.

- **`RETURN_TYPE`**: The return type of your function
- **`NAME`**: Name of your function
- **`ARGUMENTS`**: Arguments to your function.

Example:
```c
STATIC_SECTION(void, test, (int a, char b))
```

----

### SECTION_KNR

```c
#define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
```

Same as **`SECTION`** but you have to write your arguments in K&R syntax.

Only works in K&R C and does nothing in ANSI C.

- **`RETURN_TYPE`**: The return type of your function
- **`NAME`**: Name of your function
- **`ARGUMENTS`**: Arguments to your function.

**Examples**:
```c
SECTION_KNR(void, test, (a, b) int a; char b;)
```
You can also use both ANSI and K&R section creation at the same time:

```c
SECTION(void, test, (int a, char b))
SECTION_KNR(void, test, (a, b) int a; char b;)
```

----

### STATIC_SECTION_KNR

```c
#define STATIC_SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
```

Same as **`STATIC_SECTION`** but you have to write your arguments in K&R syntax.

Only works in K&R C and does nothing in ANSI C.

- **`RETURN_TYPE`**: The return type of your function
- **`NAME`**: Name of your function
- **`ARGUMENTS`**: Arguments to your function.

**Examples**:
```c
STATIC_SECTION_KNR(void, test, (a, b) int a; char b;)
```
You can also use both ANSI and K&R section creation at the same time:

```c
STATIC_SECTION(void, test, (int a, char b))
STATIC_SECTION_KNR(void, test, (a, b) int a; char b;)
```

----

### END

```c
#define END
```

End of your section.

**Examples**:
```c
SECTION(void, test, (int a, char b))
. . .
END
```

----

### CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS

```c
#define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
```

Indicates that CMT's section system cannot be fully realized using inline assembly in the current build/configuration.

Section setup may require runtime initialization or alternative code paths instead of compile-time placement.

This is a purely optional solution for the section you created in your project.

If you're already using a modern compiler, you don't need to take any additional steps like this.

Example:

```c
#define INCL_CMT_ASM_INLINE
#define INCL_CMT_ASM_OTHERS
#define INCL_CMT_ASM_MOV
#include <CMT/ASM.H>

SECTION (int, test, (void))
	MOV_EAX_(42)
	RET
END

int main()
{
#ifdef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
	((void (*) (void))test)(); // Run your function once to make it set itself up
#endif
	printf("%d\n", test());
	return (0);
}
```

----

## Assembly Contents

Instead of explaining every single command one by one, this section lists what is currently available in the library.

If you want to use the opcode (pure binary) versions instead of inline assembly, simply add a `_` character at the beginning of the name.

For example, `MOV_RBX_(IMM32)` becames `_MOV_RBX_(IMM32)` and `MOV_RAX_RBX` becames `_MOV_RAX_RBX`.

These macros do not emit raw byte lists such as `0xFF, 0x##, 0x##, ....` Instead, they are defined as:

```c
__OP__[INDEX] = 0XFF;
++INDEX;
__OP__[INDEX] = 0X##;
++INDEX;
__OP__[INDEX] = 0X##;
++INDEX;
...
```

Before using them, make sure the following are defined:

```c
unsigned char *__OP__;
unsigned int INDEX;
```

And if you want to learn or get size of the Assembly command you are using, you can just write `SIZEOF_` at the left side of your macro.

For example, `MOV_RBX_(IMM32)` becames `SIZEOF_MOV_RBX_` and `MOV_RAX_RBX` becames `SIZEOF_MOV_RAX_RBX`.

----

### CPUs

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/INTEL_ASM.gif">
	<b>Intel (2175 Assembly Codes in total)</b>
</summary>

**Note**: `MOV_RAX_`, `ADD_RAX_`, `..._PTR_` etc. commands automatically downscale on 32/16-bit modes.

When performing jumps, you must calculate the jump offset **manually**. The jump value represents the **number of bytes to skip**, not the label itself.

* Offsets can be **positive or negative**. For example, to jump backward, use `-(size_of_forward_code + size_of_jump_instruction)`.
* All jump instructions (`JMP`, `JE`, etc.) work with **signed values**.

Key points:

* `JE_SHORT_` and `JMP_SHORT_` use **byte offsets**, so you must include the size of any instructions between the jump and target.
* Counting instruction sizes (`SIZEOF_...`) ensures your jump lands exactly at the intended segment.

Example:

```c
SECTION (void, test, (int input))
	CMP_ARG1_(1)                             // cmp (first_argument) (Cross OS & ABI), 1
	JE_SHORT_(SIZEOF_MOV_RAX_ + SIZEOF_JMP_) // je layer_50
	MOV_RAX_(42)                             // mov rax, 42
	JMP_SHORT_(SIZEOF_MOV_RAX_)              // jmp layer_end
	// layer_50:                             // layer_50:
	MOV_RAX_(50)                             // mov rax, 50
	// layer_end:                            // layer_end:
	RET                                      // ret
END
```

Icons at the list works like that:

- **(✅)** Exists.
- **(❌)** Doesn't exist.
- **(⚠️)** Doesn't exist but automatically loweres to smaller/bigger architecture.

----

### ADD `INCL_CMT_ASM_ADD`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `ADD_RAX_(IMM32)`              | `add rax, imm32`                   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (7)          |
| `ADD_EAX_(IMM32)`              | `add eax, imm32`                   | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `ADD_AX_(IMM16)`               | `add ax, imm16`                    | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `ADD_AL_(IMM8)`                | `add al, imm8`                     | ✅       | ✅       | ✅       | 1 + 1 (2)          | 1 + 1 (2)          | 1 + 1 (2)          |
| `ADD_RBX_(IMM32)`              | `add rbx, imm32`                   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `ADD_EBX_(IMM32)`              | `add ebx, imm32`                   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 2 + 4 (6)          |
| `ADD_BX_(IMM16)`               | `add bx, imm16`                    | ✅       | ✅       | ✅       | 2 + 2 (4)          | 3 + 2 (5)          | 3 + 2 (5)          |
| `ADD_BL_(IMM8)`                | `add bl, imm8`                     | ✅       | ✅       | ✅       | 2 + 1 (3)          | 2 + 1 (3)          | 2 + 1 (3)          |
| `ADD_RCX_(IMM32)`              | `add rcx, imm32`                   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `ADD_ECX_(IMM32)`              | `add ecx, imm32`                   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 2 + 4 (6)          |
| `ADD_CX_(IMM16)`               | `add cx, imm16`                    | ✅       | ✅       | ✅       | 2 + 2 (4)          | 3 + 2 (5)          | 3 + 2 (5)          |
| `ADD_CL_(IMM8)`                | `add cl, imm8`                     | ✅       | ✅       | ✅       | 2 + 1 (3)          | 2 + 1 (3)          | 2 + 1 (3)          |
| `ADD_RDX_(IMM32)`              | `add rdx, imm32`                   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `ADD_EDX_(IMM32)`              | `add edx, imm32`                   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 2 + 4 (6)          |
| `ADD_DX_(IMM16)`               | `add dx, imm16`                    | ✅       | ✅       | ✅       | 2 + 2 (4)          | 3 + 2 (5)          | 3 + 2 (5)          |
| `ADD_DL_(IMM8)`                | `add dl, imm8`                     | ✅       | ✅       | ✅       | 2 + 1 (3)          | 2 + 1 (3)          | 2 + 1 (3)          |

----

### JMP `INCL_CMT_ASM_JMP`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `JMP_NEAR_(?)`                 | `jmp ?`                            | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | (3)                | (5)                | (5)                |
| `JMP_SHORT_(IMM8)`             | `jmp imm8`                         | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `JMP_R11`                      | `jmp r11`                          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `JMP_EDX`                      | `jmp edx`                          | ⚠️       | ✅       | ⚠️       | ---                | (2)                | ---                |

----

### MOV `INCL_CMT_ASM_MOV`

| **Macro**          | **Intel Syntax**  | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------ | ----------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `MOV_AL_AL`        | `mov al, al`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_AL_BL`        | `mov al, bl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_AL_CL`        | `mov al, cl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_AL_DL`        | `mov al, dl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_AL_DIL`       | `mov al, dil`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_SIL`       | `mov al, sil`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_BPL`       | `mov al, bpl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_SPL`       | `mov al, spl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_R8B`       | `mov al, r8b`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_R9B`       | `mov al, r9b`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_R10B`      | `mov al, r10b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_R11B`      | `mov al, r11b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_R12B`      | `mov al, r12b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_R13B`      | `mov al, r13b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_R14B`      | `mov al, r14b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_R15B`      | `mov al, r15b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_AL`        | `mov bl, al`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_BL_BL`        | `mov bl, bl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_BL_CL`        | `mov bl, cl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_BL_DL`        | `mov bl, dl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_BL_DIL`       | `mov bl, dil`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_SIL`       | `mov bl, sil`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_BPL`       | `mov bl, bpl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_SPL`       | `mov bl, spl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_R8B`       | `mov bl, r8b`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_R9B`       | `mov bl, r9b`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_R10B`      | `mov bl, r10b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_R11B`      | `mov bl, r11b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_R12B`      | `mov bl, r12b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_R13B`      | `mov bl, r13b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_R14B`      | `mov bl, r14b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BL_R15B`      | `mov bl, r15b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_AL`        | `mov cl, al`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_CL_BL`        | `mov cl, bl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_CL_CL`        | `mov cl, cl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_CL_DL`        | `mov cl, dl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_CL_DIL`       | `mov cl, dil`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_SIL`       | `mov cl, sil`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_BPL`       | `mov cl, bpl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_SPL`       | `mov cl, spl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_R8B`       | `mov cl, r8b`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_R9B`       | `mov cl, r9b`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_R10B`      | `mov cl, r10b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_R11B`      | `mov cl, r11b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_R12B`      | `mov cl, r12b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_R13B`      | `mov cl, r13b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_R14B`      | `mov cl, r14b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_CL_R15B`      | `mov cl, r15b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_DL`        | `mov dl, dl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_DL_AL`        | `mov dl, al`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_DL_BL`        | `mov dl, bl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_DL_CL`        | `mov dl, cl`      | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `MOV_DL_DIL`       | `mov dl, dil`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_SIL`       | `mov dl, sil`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_BPL`       | `mov dl, bpl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_SPL`       | `mov dl, spl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_R8B`       | `mov dl, r8b`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_R9B`       | `mov dl, r9b`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_R10B`      | `mov dl, r10b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_R11B`      | `mov dl, r11b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_R12B`      | `mov dl, r12b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_R13B`      | `mov dl, r13b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_R14B`      | `mov dl, r14b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DL_R15B`      | `mov dl, r15b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_AL`       | `mov dil, al`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_BL`       | `mov dil, bl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_CL`       | `mov dil, cl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_DL`       | `mov dil, dl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_DIL`      | `mov dil, dil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_SIL`      | `mov dil, sil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_BPL`      | `mov dil, bpl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_SPL`      | `mov dil, spl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_R8B`      | `mov dil, r8b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_R9B`      | `mov dil, r9b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_R10B`     | `mov dil, r10b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_R11B`     | `mov dil, r11b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_R12B`     | `mov dil, r12b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_R13B`     | `mov dil, r13b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_R14B`     | `mov dil, r14b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_DIL_R15B`     | `mov dil, r15b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_AL`       | `mov sil, al`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_BL`       | `mov sil, bl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_CL`       | `mov sil, cl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_DL`       | `mov sil, dl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_DIL`      | `mov sil, dil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_SIL`      | `mov sil, sil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_BPL`      | `mov sil, bpl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_SPL`      | `mov sil, spl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_R8B`      | `mov sil, r8b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_R9B`      | `mov sil, r9b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_R10B`     | `mov sil, r10b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_R11B`     | `mov sil, r11b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_R12B`     | `mov sil, r12b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_R13B`     | `mov sil, r13b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_R14B`     | `mov sil, r14b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SIL_R15B`     | `mov sil, r15b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_AL`       | `mov bpl, al`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_BL`       | `mov bpl, bl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_CL`       | `mov bpl, cl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_DL`       | `mov bpl, dl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_DIL`      | `mov bpl, dil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_SIL`      | `mov bpl, sil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_BPL`      | `mov bpl, bpl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_SPL`      | `mov bpl, spl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_R8B`      | `mov bpl, r8b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_R9B`      | `mov bpl, r9b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_R10B`     | `mov bpl, r10b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_R11B`     | `mov bpl, r11b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_R12B`     | `mov bpl, r12b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_R13B`     | `mov bpl, r13b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_R14B`     | `mov bpl, r14b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_BPL_R15B`     | `mov bpl, r15b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_AL`       | `mov spl, al`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_BL`       | `mov spl, bl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_CL`       | `mov spl, cl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_DL`       | `mov spl, dl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_DIL`      | `mov spl, dil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_SIL`      | `mov spl, sil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_BPL`      | `mov spl, bpl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_SPL`      | `mov spl, spl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_R8B`      | `mov spl, r8b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_R9B`      | `mov spl, r9b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_R10B`     | `mov spl, r10b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_R11B`     | `mov spl, r11b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_R12B`     | `mov spl, r12b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_R13B`     | `mov spl, r13b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_R14B`     | `mov spl, r14b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_SPL_R15B`     | `mov spl, r15b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_AL`       | `mov r8b, al`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_BL`       | `mov r8b, bl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_CL`       | `mov r8b, cl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_DL`       | `mov r8b, dl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_DIL`      | `mov r8b, dil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_SIL`      | `mov r8b, sil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_BPL`      | `mov r8b, bpl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_SPL`      | `mov r8b, spl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_R8B`      | `mov r8b, r8b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_R9B`      | `mov r8b, r9b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_R10B`     | `mov r8b, r10b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_R11B`     | `mov r8b, r11b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_R12B`     | `mov r8b, r12b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_R13B`     | `mov r8b, r13b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_R14B`     | `mov r8b, r14b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8B_R15B`     | `mov r8b, r15b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_AL`       | `mov r9b, al`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_BL`       | `mov r9b, bl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_CL`       | `mov r9b, cl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_DL`       | `mov r9b, dl`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_DIL`      | `mov r9b, dil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_SIL`      | `mov r9b, sil`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_BPL`      | `mov r9b, bpl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_SPL`      | `mov r9b, spl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_R8B`      | `mov r9b, r8b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_R9B`      | `mov r9b, r9b`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_R10B`     | `mov r9b, r10b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_R11B`     | `mov r9b, r11b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_R12B`     | `mov r9b, r12b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_R13B`     | `mov r9b, r13b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_R14B`     | `mov r9b, r14b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9B_R15B`     | `mov r9b, r15b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_AL`      | `mov r10b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_BL`      | `mov r10b, bl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_CL`      | `mov r10b, cl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_DL`      | `mov r10b, dl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_DIL`     | `mov r10b, dil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_SIL`     | `mov r10b, sil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_BPL`     | `mov r10b, bpl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_SPL`     | `mov r10b, spl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_R8B`     | `mov r10b, r8b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_R9B`     | `mov r10b, r9b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_R10B`    | `mov r10b, r10b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_R11B`    | `mov r10b, r11b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_R12B`    | `mov r10b, r12b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_R13B`    | `mov r10b, r13b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_R14B`    | `mov r10b, r14b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10B_R15B`    | `mov r10b, r15b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_AL`      | `mov r11b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_BL`      | `mov r11b, bl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_CL`      | `mov r11b, cl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_DL`      | `mov r11b, dl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_DIL`     | `mov r11b, dil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_SIL`     | `mov r11b, sil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_BPL`     | `mov r11b, bpl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_SPL`     | `mov r11b, spl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_R8B`     | `mov r11b, r8b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_R9B`     | `mov r11b, r9b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_R10B`    | `mov r11b, r10b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_R11B`    | `mov r11b, r11b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_R12B`    | `mov r11b, r12b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_R13B`    | `mov r11b, r13b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_R14B`    | `mov r11b, r14b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11B_R15B`    | `mov r11b, r15b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_AL`      | `mov r12b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_BL`      | `mov r12b, bl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_CL`      | `mov r12b, cl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_DL`      | `mov r12b, dl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_DIL`     | `mov r12b, dil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_SIL`     | `mov r12b, sil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_BPL`     | `mov r12b, bpl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_SPL`     | `mov r12b, spl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_R8B`     | `mov r12b, r8b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_R9B`     | `mov r12b, r9b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_R10B`    | `mov r12b, r10b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_R11B`    | `mov r12b, r11b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_R12B`    | `mov r12b, r12b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_R13B`    | `mov r12b, r13b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_R14B`    | `mov r12b, r14b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12B_R15B`    | `mov r12b, r15b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_AL`      | `mov r13b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_BL`      | `mov r13b, bl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_CL`      | `mov r13b, cl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_DL`      | `mov r13b, dl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_DIL`     | `mov r13b, dil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_SIL`     | `mov r13b, sil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_BPL`     | `mov r13b, bpl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_SPL`     | `mov r13b, spl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_R8B`     | `mov r13b, r8b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_R9B`     | `mov r13b, r9b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_R10B`    | `mov r13b, r10b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_R11B`    | `mov r13b, r11b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_R12B`    | `mov r13b, r12b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_R13B`    | `mov r13b, r13b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_R14B`    | `mov r13b, r14b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13B_R15B`    | `mov r13b, r15b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_AL`      | `mov r14b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_BL`      | `mov r14b, bl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_CL`      | `mov r14b, cl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_DL`      | `mov r14b, dl`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_DIL`     | `mov r14b, dil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_SIL`     | `mov r14b, sil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_BPL`     | `mov r14b, bpl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_SPL`     | `mov r14b, spl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_R8B`     | `mov r14b, r8b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_R9B`     | `mov r14b, r9b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_R10B`    | `mov r14b, r10b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_R11B`    | `mov r14b, r11b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_R12B`    | `mov r14b, r12b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_R13B`    | `mov r14b, r13b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_R14B`    | `mov r14b, r14b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14B_R15B`    | `mov r14b, r15b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_AL`      | `mov r15b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_BL`      | `mov r15b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_CL`      | `mov r15b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_DL`      | `mov r15b, al`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_DIL`     | `mov r15b, dil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_SIL`     | `mov r15b, sil`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_BPL`     | `mov r15b, bpl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_SPL`     | `mov r15b, spl`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_R8B`     | `mov r15b, r8b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_R9B`     | `mov r15b, r9b`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_R10B`    | `mov r15b, r10b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_R11B`    | `mov r15b, r11b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_R12B`    | `mov r15b, r12b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_R13B`    | `mov r15b, r13b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_R14B`    | `mov r15b, r14b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15B_R15B`    | `mov r15b, r15b`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_AL_(IMM8)`    | `mov imm8, al`    | ✅       | ✅       | ✅       | 1 + 1 (2)          | 1 + 1 (2)          | 1 + 1 (2)          |
| `MOV_BL_(IMM8)`    | `mov imm8, bl`    | ✅       | ✅       | ✅       | 1 + 1 (2)          | 1 + 1 (2)          | 1 + 1 (2)          |
| `MOV_CL_(IMM8)`    | `mov imm8, cl`    | ✅       | ✅       | ✅       | 1 + 1 (2)          | 1 + 1 (2)          | 1 + 1 (2)          |
| `MOV_DL_(IMM8)`    | `mov imm8, dl`    | ✅       | ✅       | ✅       | 1 + 1 (2)          | 1 + 1 (2)          | 1 + 1 (2)          |
| `MOV_DIL_(IMM8)`   | `mov imm8, dil`   | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_SIL_(IMM8)`   | `mov imm8, sil`   | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_BPL_(IMM8)`   | `mov imm8, bpl`   | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_SPL_(IMM8)`   | `mov imm8, spl`   | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_R8B_(IMM8)`   | `mov imm8, r8b`   | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_R9B_(IMM8)`   | `mov imm8, r9b`   | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_R10B_(IMM8)`  | `mov imm8, r10b`  | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_R11B_(IMM8)`  | `mov imm8, r11b`  | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_R12B_(IMM8)`  | `mov imm8, r12b`  | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_R13B_(IMM8)`  | `mov imm8, r13b`  | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_R14B_(IMM8)`  | `mov imm8, r14b`  | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_R15B_(IMM8)`  | `mov imm8, r15b`  | ❌       | ❌       | ✅       | ---                | ---                | 2 + 1 (3)          |
| `MOV_AX_AX`        | `mov ax, ax`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_AX_BX`        | `mov ax, bx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_AX_CX`        | `mov ax, cx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_AX_DX`        | `mov ax, dx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_AX_DI`        | `mov ax, di`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_AX_SI`        | `mov ax, si`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_AX_BP`        | `mov ax, bp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_AX_SP`        | `mov ax, sp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_AX_R8W`       | `mov ax, r8w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_AX_R9W`       | `mov ax, r9w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_AX_R10W`      | `mov ax, r10w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_AX_R11W`      | `mov ax, r11w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_AX_R12W`      | `mov ax, r12w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_AX_R13W`      | `mov ax, r13w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_AX_R14W`      | `mov ax, r14w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_AX_R15W`      | `mov ax, r15w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BX_AX`        | `mov bx, ax`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BX_BX`        | `mov bx, bx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BX_CX`        | `mov bx, cx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BX_DX`        | `mov bx, dx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BX_DI`        | `mov bx, di`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BX_SI`        | `mov bx, si`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BX_BP`        | `mov bx, bp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BX_SP`        | `mov bx, sp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BX_R8W`       | `mov bx, r8w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BX_R9W`       | `mov bx, r9w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BX_R10W`      | `mov bx, r10w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BX_R11W`      | `mov bx, r11w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BX_R12W`      | `mov bx, r12w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BX_R13W`      | `mov bx, r13w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BX_R14W`      | `mov bx, r14w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BX_R15W`      | `mov bx, r15w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_CX_AX`        | `mov cx, ax`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_CX_BX`        | `mov cx, bx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_CX_CX`        | `mov cx, cx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_CX_DX`        | `mov cx, dx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_CX_DI`        | `mov cx, di`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_CX_SI`        | `mov cx, si`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_CX_BP`        | `mov cx, bp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_CX_SP`        | `mov cx, sp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_CX_R8W`       | `mov cx, r8w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_CX_R9W`       | `mov cx, r9w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_CX_R10W`      | `mov cx, r10w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_CX_R11W`      | `mov cx, r11w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_CX_R12W`      | `mov cx, r12w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_CX_R13W`      | `mov cx, r13w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_CX_R14W`      | `mov cx, r14w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_CX_R15W`      | `mov cx, r15w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DX_AX`        | `mov dx, ax`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DX_BX`        | `mov dx, bx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DX_CX`        | `mov dx, cx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DX_DX`        | `mov dx, dx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DX_DI`        | `mov dx, di`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DX_SI`        | `mov dx, si`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DX_BP`        | `mov dx, bp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DX_SP`        | `mov dx, sp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DX_R8W`       | `mov dx, r8w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DX_R9W`       | `mov dx, r9w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DX_R10W`      | `mov dx, r10w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DX_R11W`      | `mov dx, r11w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DX_R12W`      | `mov dx, r12w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DX_R13W`      | `mov dx, r13w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DX_R14W`      | `mov dx, r14w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DX_R15W`      | `mov dx, r15w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DI_AX`        | `mov di, ax`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DI_BX`        | `mov di, bx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DI_CX`        | `mov di, cx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DI_DX`        | `mov di, dx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DI_DI`        | `mov di, di`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DI_SI`        | `mov di, si`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DI_BP`        | `mov di, bp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DI_SP`        | `mov di, sp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_DI_R8W`       | `mov di, r8w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DI_R9W`       | `mov di, r9w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DI_R10W`      | `mov di, r10w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DI_R11W`      | `mov di, r11w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DI_R12W`      | `mov di, r12w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DI_R13W`      | `mov di, r13w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DI_R14W`      | `mov di, r14w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_DI_R15W`      | `mov di, r15w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SI_AX`        | `mov si, ax`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SI_BX`        | `mov si, bx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SI_CX`        | `mov si, cx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SI_DX`        | `mov si, dx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SI_DI`        | `mov si, di`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SI_SI`        | `mov si, si`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SI_BP`        | `mov si, bp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SI_SP`        | `mov si, sp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SI_R8W`       | `mov si, r8w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SI_R9W`       | `mov si, r9w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SI_R10W`      | `mov si, r10w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SI_R11W`      | `mov si, r11w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SI_R12W`      | `mov si, r12w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SI_R13W`      | `mov si, r13w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SI_R14W`      | `mov si, r14w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SI_R15W`      | `mov si, r15w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BP_AX`        | `mov bp, ax`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BP_BX`        | `mov bp, bx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BP_CX`        | `mov bp, cx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BP_DX`        | `mov bp, dx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BP_DI`        | `mov bp, di`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BP_SI`        | `mov bp, si`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BP_BP`        | `mov bp, bp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BP_SP`        | `mov bp, sp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_BP_R8W`       | `mov bp, r8w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BP_R9W`       | `mov bp, r9w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BP_R10W`      | `mov bp, r10w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BP_R11W`      | `mov bp, r11w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BP_R12W`      | `mov bp, r12w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BP_R13W`      | `mov bp, r13w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BP_R14W`      | `mov bp, r14w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_BP_R15W`      | `mov bp, r15w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SP_AX`        | `mov sp, ax`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SP_BX`        | `mov sp, bx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SP_CX`        | `mov sp, cx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SP_DX`        | `mov sp, dx`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SP_DI`        | `mov sp, di`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SP_SI`        | `mov sp, si`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SP_BP`        | `mov sp, bp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SP_SP`        | `mov sp, sp`      | ✅       | ✅       | ✅       | (2)                | (3)                | (3)                |
| `MOV_SP_R8W`       | `mov sp, r8w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SP_R9W`       | `mov sp, r9w`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SP_R10W`      | `mov sp, r10w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SP_R11W`      | `mov sp, r11w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SP_R12W`      | `mov sp, r12w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SP_R13W`      | `mov sp, r13w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SP_R14W`      | `mov sp, r14w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_SP_R15W`      | `mov sp, r15w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_AX`       | `mov r8w, ax`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_BX`       | `mov r8w, bx`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_CX`       | `mov r8w, cx`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_DX`       | `mov r8w, dx`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_SI`       | `mov r8w, si`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_DI`       | `mov r8w, di`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_BP`       | `mov r8w, bp`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_SP`       | `mov r8w, sp`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_R8W`      | `mov r8w, r8w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_R9W`      | `mov r8w, r9w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_R10W`     | `mov r8w, r10w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_R11W`     | `mov r8w, r11w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_R12W`     | `mov r8w, r12w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_R13W`     | `mov r8w, r13w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_R14W`     | `mov r8w, r14w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8W_R15W`     | `mov r8w, r15w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_AX`       | `mov r9w, ax`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_BX`       | `mov r9w, bx`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_CX`       | `mov r9w, cx`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_DX`       | `mov r9w, dx`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_SI`       | `mov r9w, si`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_DI`       | `mov r9w, di`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_BP`       | `mov r9w, bp`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_SP`       | `mov r9w, sp`     | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_R8W`      | `mov r9w, r8w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_R9W`      | `mov r9w, r9w`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_R10W`     | `mov r9w, r10w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_R11W`     | `mov r9w, r11w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_R12W`     | `mov r9w, r12w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_R13W`     | `mov r9w, r13w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_R14W`     | `mov r9w, r14w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9W_R15W`     | `mov r9w, r15w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_AX`      | `mov r10w, ax`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_BX`      | `mov r10w, bx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_CX`      | `mov r10w, cx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_DX`      | `mov r10w, dx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_SI`      | `mov r10w, si`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_DI`      | `mov r10w, di`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_BP`      | `mov r10w, bp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_SP`      | `mov r10w, sp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_R8W`     | `mov r10w, r8w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_R9W`     | `mov r10w, r9w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_R10W`    | `mov r10w, r10w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_R11W`    | `mov r10w, r11w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_R12W`    | `mov r10w, r12w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_R13W`    | `mov r10w, r13w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_R14W`    | `mov r10w, r14w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10W_R15W`    | `mov r10w, r15w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_AX`      | `mov r11w, ax`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_BX`      | `mov r11w, bx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_CX`      | `mov r11w, cx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_DX`      | `mov r11w, dx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_SI`      | `mov r11w, si`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_DI`      | `mov r11w, di`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_BP`      | `mov r11w, bp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_SP`      | `mov r11w, sp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_R8W`     | `mov r11w, r8w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_R9W`     | `mov r11w, r9w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_R10W`    | `mov r11w, r10w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_R11W`    | `mov r11w, r11w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_R12W`    | `mov r11w, r12w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_R13W`    | `mov r11w, r13w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_R14W`    | `mov r11w, r14w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11W_R15W`    | `mov r11w, r15w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_AX`      | `mov r12w, ax`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_BX`      | `mov r12w, bx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_CX`      | `mov r12w, cx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_DX`      | `mov r12w, dx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_SI`      | `mov r12w, si`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_DI`      | `mov r12w, di`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_BP`      | `mov r12w, bp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_SP`      | `mov r12w, sp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_R8W`     | `mov r12w, r8w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_R9W`     | `mov r12w, r9w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_R10W`    | `mov r12w, r10w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_R11W`    | `mov r12w, r11w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_R12W`    | `mov r12w, r12w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_R13W`    | `mov r12w, r13w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_R14W`    | `mov r12w, r14w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12W_R15W`    | `mov r12w, r15w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_AX`      | `mov r13w, ax`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_BX`      | `mov r13w, bx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_CX`      | `mov r13w, cx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_DX`      | `mov r13w, dx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_SI`      | `mov r13w, si`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_DI`      | `mov r13w, di`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_BP`      | `mov r13w, bp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_SP`      | `mov r13w, sp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_R8W`     | `mov r13w, r8w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_R9W`     | `mov r13w, r9w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_R10W`    | `mov r13w, r10w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_R11W`    | `mov r13w, r11w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_R12W`    | `mov r13w, r12w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_R13W`    | `mov r13w, r13w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_R14W`    | `mov r13w, r14w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13W_R15W`    | `mov r13w, r15w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_AX`      | `mov r14w, ax`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_BX`      | `mov r14w, bx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_CX`      | `mov r14w, cx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_DX`      | `mov r14w, dx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_SI`      | `mov r14w, si`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_DI`      | `mov r14w, di`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_BP`      | `mov r14w, bp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_SP`      | `mov r14w, sp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_R8W`     | `mov r14w, r8w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_R9W`     | `mov r14w, r9w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_R10W`    | `mov r14w, r10w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_R11W`    | `mov r14w, r11w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_R12W`    | `mov r14w, r12w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_R13W`    | `mov r14w, r13w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_R14W`    | `mov r14w, r14w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14W_R15W`    | `mov r14w, r15w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_AX`      | `mov r15w, ax`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_BX`      | `mov r15w, bx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_CX`      | `mov r15w, cx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_DX`      | `mov r15w, dx`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_SI`      | `mov r15w, si`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_DI`      | `mov r15w, di`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_BP`      | `mov r15w, bp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_SP`      | `mov r15w, sp`    | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_R8W`     | `mov r15w, r8w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_R9W`     | `mov r15w, r9w`   | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_R10W`    | `mov r15w, r10w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_R11W`    | `mov r15w, r11w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_R12W`    | `mov r15w, r12w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_R13W`    | `mov r15w, r13w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_R14W`    | `mov r15w, r14w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15W_R15W`    | `mov r15w, r15w`  | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_AX_(IMM16)`   | `mov imm16, ax`   | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `MOV_BX_(IMM16)`   | `mov imm16, bx`   | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `MOV_CX_(IMM16)`   | `mov imm16, cx`   | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `MOV_DX_(IMM16)`   | `mov imm16, dx`   | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `MOV_DI_(IMM16)`   | `mov imm16, di`   | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `MOV_SI_(IMM16)`   | `mov imm16, si`   | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `MOV_BP_(IMM16)`   | `mov imm16, bp`   | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `MOV_SP_(IMM16)`   | `mov imm16, sp`   | ✅       | ✅       | ✅       | 1 + 2 (3)          | 2 + 2 (4)          | 2 + 2 (4)          |
| `MOV_R8W_(IMM16)`  | `mov imm16, r8w`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 2 (5)          |
| `MOV_R9W_(IMM16)`  | `mov imm16, r9w`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 2 (5)          |
| `MOV_R10W_(IMM16)` | `mov imm16, r10w` | ❌       | ❌       | ✅       | ---                | ---                | 3 + 2 (5)          |
| `MOV_R11W_(IMM16)` | `mov imm16, r11w` | ❌       | ❌       | ✅       | ---                | ---                | 3 + 2 (5)          |
| `MOV_R12W_(IMM16)` | `mov imm16, r12w` | ❌       | ❌       | ✅       | ---                | ---                | 3 + 2 (5)          |
| `MOV_R13W_(IMM16)` | `mov imm16, r13w` | ❌       | ❌       | ✅       | ---                | ---                | 3 + 2 (5)          |
| `MOV_R14W_(IMM16)` | `mov imm16, r14w` | ❌       | ❌       | ✅       | ---                | ---                | 3 + 2 (5)          |
| `MOV_R15W_(IMM16)` | `mov imm16, r15w` | ❌       | ❌       | ✅       | ---                | ---                | 3 + 2 (5)          |
| `MOV_EAX_EAX`      | `mov eax, eax`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EAX_EBX`      | `mov eax, ebx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EAX_ECX`      | `mov eax, ecx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EAX_EDX`      | `mov eax, edx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EAX_EDI`      | `mov eax, edi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EAX_ESI`      | `mov eax, esi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EAX_EBP`      | `mov eax, ebp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EAX_ESP`      | `mov eax, esp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EAX_R8D`      | `mov eax, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EAX_R9D`      | `mov eax, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EAX_R10D`     | `mov eax, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EAX_R11D`     | `mov eax, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EAX_R12D`     | `mov eax, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EAX_R13D`     | `mov eax, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EAX_R14D`     | `mov eax, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EAX_R15D`     | `mov eax, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBX_EAX`      | `mov ebx, eax`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBX_EBX`      | `mov ebx, ebx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBX_ECX`      | `mov ebx, ecx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBX_EDX`      | `mov ebx, edx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBX_EDI`      | `mov ebx, edi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBX_ESI`      | `mov ebx, esi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBX_EBP`      | `mov ebx, ebp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBX_ESP`      | `mov ebx, esp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBX_R8D`      | `mov ebx, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBX_R9D`      | `mov ebx, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBX_R10D`     | `mov ebx, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBX_R11D`     | `mov ebx, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBX_R12D`     | `mov ebx, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBX_R13D`     | `mov ebx, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBX_R14D`     | `mov ebx, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBX_R15D`     | `mov ebx, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ECX_EAX`      | `mov ecx, eax`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ECX_EBX`      | `mov ecx, ebx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ECX_ECX`      | `mov ecx, ecx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ECX_EDX`      | `mov ecx, edx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ECX_EDI`      | `mov ecx, edi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ECX_ESI`      | `mov ecx, esi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ECX_EBP`      | `mov ecx, ebp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ECX_ESP`      | `mov ecx, esp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ECX_R8D`      | `mov ecx, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ECX_R9D`      | `mov ecx, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ECX_R10D`     | `mov ecx, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ECX_R11D`     | `mov ecx, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ECX_R12D`     | `mov ecx, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ECX_R13D`     | `mov ecx, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ECX_R14D`     | `mov ecx, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ECX_R15D`     | `mov ecx, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDX_EAX`      | `mov edx, eax`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDX_EBX`      | `mov edx, ebx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDX_ECX`      | `mov edx, ecx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDX_EDX`      | `mov edx, edx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDX_EDI`      | `mov edx, edi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDX_ESI`      | `mov edx, esi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDX_EBP`      | `mov edx, ebp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDX_ESP`      | `mov edx, esp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDX_R8D`      | `mov edx, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDX_R9D`      | `mov edx, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDX_R10D`     | `mov edx, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDX_R11D`     | `mov edx, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDX_R12D`     | `mov edx, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDX_R13D`     | `mov edx, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDX_R14D`     | `mov edx, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDX_R15D`     | `mov edx, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDI_EAX`      | `mov edi, eax`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDI_EBX`      | `mov edi, ebx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDI_ECX`      | `mov edi, ecx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDI_EDX`      | `mov edi, edx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDI_EDI`      | `mov edi, edi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDI_ESI`      | `mov edi, esi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDI_EBP`      | `mov edi, ebp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDI_ESP`      | `mov edi, esp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EDI_R8D`      | `mov edi, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDI_R9D`      | `mov edi, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDI_R10D`     | `mov edi, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDI_R11D`     | `mov edi, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDI_R12D`     | `mov edi, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDI_R13D`     | `mov edi, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDI_R14D`     | `mov edi, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EDI_R15D`     | `mov edi, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESI_EAX`      | `mov esi, eax`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESI_EBX`      | `mov esi, ebx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESI_ECX`      | `mov esi, ecx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESI_EDX`      | `mov esi, edx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESI_EDI`      | `mov esi, edi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESI_ESI`      | `mov esi, esi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESI_EBP`      | `mov esi, ebp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESI_ESP`      | `mov esi, esp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESI_R8D`      | `mov esi, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESI_R9D`      | `mov esi, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESI_R10D`     | `mov esi, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESI_R11D`     | `mov esi, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESI_R12D`     | `mov esi, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESI_R13D`     | `mov esi, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESI_R14D`     | `mov esi, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESI_R15D`     | `mov esi, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBP_EAX`      | `mov ebp, eax`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBP_EBX`      | `mov ebp, ebx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBP_ECX`      | `mov ebp, ecx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBP_EDX`      | `mov ebp, edx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBP_EDI`      | `mov ebp, edi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBP_ESI`      | `mov ebp, esi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBP_EBP`      | `mov ebp, ebp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBP_ESP`      | `mov ebp, esp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_EBP_R8D`      | `mov ebp, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBP_R9D`      | `mov ebp, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBP_R10D`     | `mov ebp, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBP_R11D`     | `mov ebp, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBP_R12D`     | `mov ebp, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBP_R13D`     | `mov ebp, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBP_R14D`     | `mov ebp, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EBP_R15D`     | `mov ebp, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESP_EAX`      | `mov esp, eax`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESP_EBX`      | `mov esp, ebx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESP_ECX`      | `mov esp, ecx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESP_EDX`      | `mov esp, edx`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESP_EDI`      | `mov esp, edi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESP_ESI`      | `mov esp, esi`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESP_EBP`      | `mov esp, ebp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESP_ESP`      | `mov esp, esp`    | ⚠️       | ✅       | ✅       | ---                | (2)                | (2)                |
| `MOV_ESP_R8D`      | `mov esp, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESP_R9D`      | `mov esp, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESP_R10D`     | `mov esp, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESP_R11D`     | `mov esp, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESP_R12D`     | `mov esp, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESP_R13D`     | `mov esp, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESP_R14D`     | `mov esp, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_ESP_R15D`     | `mov esp, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_EAX`      | `mov r8d, eax`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_EBX`      | `mov r8d, ebx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_ECX`      | `mov r8d, ecx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_EDX`      | `mov r8d, edx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_ESI`      | `mov r8d, esi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_EDI`      | `mov r8d, edi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_EBP`      | `mov r8d, ebp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_ESP`      | `mov r8d, esp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_R8D`      | `mov r8d, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_R9D`      | `mov r8d, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_R10D`     | `mov r8d, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_R11D`     | `mov r8d, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_R12D`     | `mov r8d, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_R13D`     | `mov r8d, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_R14D`     | `mov r8d, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8D_R15D`     | `mov r8d, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_EAX`      | `mov r9d, eax`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_EBX`      | `mov r9d, ebx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_ECX`      | `mov r9d, ecx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_EDX`      | `mov r9d, edx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_ESI`      | `mov r9d, esi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_EDI`      | `mov r9d, edi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_EBP`      | `mov r9d, ebp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_ESP`      | `mov r9d, esp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_R8D`      | `mov r9d, r8d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_R9D`      | `mov r9d, r9d`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_R10D`     | `mov r9d, r10d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_R11D`     | `mov r9d, r11d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_R12D`     | `mov r9d, r12d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_R13D`     | `mov r9d, r13d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_R14D`     | `mov r9d, r14d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9D_R15D`     | `mov r9d, r15d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_EAX`     | `mov r10d, eax`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_EBX`     | `mov r10d, ebx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_ECX`     | `mov r10d, ecx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_EDX`     | `mov r10d, edx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_ESI`     | `mov r10d, esi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_EDI`     | `mov r10d, edi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_EBP`     | `mov r10d, ebp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_ESP`     | `mov r10d, esp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_R8D`     | `mov r10d, r8d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_R9D`     | `mov r10d, r9d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_R10D`    | `mov r10d, r10d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_R11D`    | `mov r10d, r11d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_R12D`    | `mov r10d, r12d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_R13D`    | `mov r10d, r13d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_R14D`    | `mov r10d, r14d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10D_R15D`    | `mov r10d, r15d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_EAX`     | `mov r11d, eax`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_EBX`     | `mov r11d, ebx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_ECX`     | `mov r11d, ecx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_EDX`     | `mov r11d, edx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_ESI`     | `mov r11d, esi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_EDI`     | `mov r11d, edi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_EBP`     | `mov r11d, ebp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_ESP`     | `mov r11d, esp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_R8D`     | `mov r11d, r8d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_R9D`     | `mov r11d, r9d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_R10D`    | `mov r11d, r10d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_R11D`    | `mov r11d, r11d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_R12D`    | `mov r11d, r12d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_R13D`    | `mov r11d, r13d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_R14D`    | `mov r11d, r14d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11D_R15D`    | `mov r11d, r15d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_EAX`     | `mov r12d, eax`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_EBX`     | `mov r12d, ebx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_ECX`     | `mov r12d, ecx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_EDX`     | `mov r12d, edx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_ESI`     | `mov r12d, esi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_EDI`     | `mov r12d, edi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_EBP`     | `mov r12d, ebp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_ESP`     | `mov r12d, esp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_R8D`     | `mov r12d, r8d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_R9D`     | `mov r12d, r9d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_R10D`    | `mov r12d, r10d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_R11D`    | `mov r12d, r11d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_R12D`    | `mov r12d, r12d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_R13D`    | `mov r12d, r13d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_R14D`    | `mov r12d, r14d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12D_R15D`    | `mov r12d, r15d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_EAX`     | `mov r13d, eax`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_EBX`     | `mov r13d, ebx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_ECX`     | `mov r13d, ecx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_EDX`     | `mov r13d, edx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_ESI`     | `mov r13d, esi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_EDI`     | `mov r13d, edi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_EBP`     | `mov r13d, ebp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_ESP`     | `mov r13d, esp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_R8D`     | `mov r13d, r8d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_R9D`     | `mov r13d, r9d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_R10D`    | `mov r13d, r10d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_R11D`    | `mov r13d, r11d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_R12D`    | `mov r13d, r12d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_R13D`    | `mov r13d, r13d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_R14D`    | `mov r13d, r14d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13D_R15D`    | `mov r13d, r15d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_EAX`     | `mov r14d, eax`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_EBX`     | `mov r14d, ebx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_ECX`     | `mov r14d, ecx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_EDX`     | `mov r14d, edx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_ESI`     | `mov r14d, esi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_EDI`     | `mov r14d, edi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_EBP`     | `mov r14d, ebp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_ESP`     | `mov r14d, esp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_R8D`     | `mov r14d, r8d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_R9D`     | `mov r14d, r9d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_R10D`    | `mov r14d, r10d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_R11D`    | `mov r14d, r11d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_R12D`    | `mov r14d, r12d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_R13D`    | `mov r14d, r13d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_R14D`    | `mov r14d, r14d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14D_R15D`    | `mov r14d, r15d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_EAX`     | `mov r15d, eax`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_EBX`     | `mov r15d, ebx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_ECX`     | `mov r15d, ecx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_EDX`     | `mov r15d, edx`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_ESI`     | `mov r15d, esi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_EDI`     | `mov r15d, edi`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_EBP`     | `mov r15d, ebp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_ESP`     | `mov r15d, esp`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_R8D`     | `mov r15d, r8d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_R9D`     | `mov r15d, r9d`   | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_R10D`    | `mov r15d, r10d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_R11D`    | `mov r15d, r11d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_R12D`    | `mov r15d, r12d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_R13D`    | `mov r15d, r13d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_R14D`    | `mov r15d, r14d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15D_R15D`    | `mov r15d, r15d`  | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_EAX_(IMM32)`  | `mov imm32, eax`  | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `MOV_EBX_(IMM32)`  | `mov imm32, ebx`  | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `MOV_ECX_(IMM32)`  | `mov imm32, ecx`  | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `MOV_EDX_(IMM32)`  | `mov imm32, edx`  | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `MOV_EDI_(IMM32)`  | `mov imm32, edi`  | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `MOV_ESI_(IMM32)`  | `mov imm32, esi`  | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `MOV_EBP_(IMM32)`  | `mov imm32, ebp`  | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `MOV_ESP_(IMM32)`  | `mov imm32, esp`  | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 1 + 4 (5)          |
| `MOV_R8D_(IMM32)`  | `mov imm32, r8d`  | ❌       | ❌       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_R9D_(IMM32)`  | `mov imm32, r9d`  | ❌       | ❌       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_R10D_(IMM32)` | `mov imm32, r10d` | ❌       | ❌       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_R11D_(IMM32)` | `mov imm32, r11d` | ❌       | ❌       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_R12D_(IMM32)` | `mov imm32, r12d` | ❌       | ❌       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_R13D_(IMM32)` | `mov imm32, r13d` | ❌       | ❌       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_R14D_(IMM32)` | `mov imm32, r14d` | ❌       | ❌       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_R15D_(IMM32)` | `mov imm32, r15d` | ❌       | ❌       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_RAX_RAX`      | `mov rax, rax`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_RBX`      | `mov rax, rbx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_RCX`      | `mov rax, rcx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_RDX`      | `mov rax, rdx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_RDI`      | `mov rax, rdi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_RSI`      | `mov rax, rsi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_RBP`      | `mov rax, rbp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_RSP`      | `mov rax, rsp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_R8`       | `mov rax, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_R9`       | `mov rax, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_R10`      | `mov rax, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_R11`      | `mov rax, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_R12`      | `mov rax, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_R13`      | `mov rax, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_R14`      | `mov rax, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_R15`      | `mov rax, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_RAX`      | `mov rbx, rax`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_RBX`      | `mov rbx, rbx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_RCX`      | `mov rbx, rcx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_RDX`      | `mov rbx, rdx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_RDI`      | `mov rbx, rdi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_RSI`      | `mov rbx, rsi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_RBP`      | `mov rbx, rbp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_RSP`      | `mov rbx, rsp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_R8`       | `mov rbx, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_R9`       | `mov rbx, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_R10`      | `mov rbx, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_R11`      | `mov rbx, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_R12`      | `mov rbx, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_R13`      | `mov rbx, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_R14`      | `mov rbx, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_R15`      | `mov rbx, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_RAX`      | `mov rcx, rax`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_RBX`      | `mov rcx, rbx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_RCX`      | `mov rcx, rcx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_RDX`      | `mov rcx, rdx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_RDI`      | `mov rcx, rdi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_RSI`      | `mov rcx, rsi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_RBP`      | `mov rcx, rbp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_RSP`      | `mov rcx, rsp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_R8`       | `mov rcx, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_R9`       | `mov rcx, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_R10`      | `mov rcx, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_R11`      | `mov rcx, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_R12`      | `mov rcx, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_R13`      | `mov rcx, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_R14`      | `mov rcx, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_R15`      | `mov rcx, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_RAX`      | `mov rdx, rax`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_RBX`      | `mov rdx, rbx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_RCX`      | `mov rdx, rcx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_RDX`      | `mov rdx, rdx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_RDI`      | `mov rdx, rdi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_RSI`      | `mov rdx, rsi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_RBP`      | `mov rdx, rbp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_RSP`      | `mov rdx, rsp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_R8`       | `mov rdx, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_R9`       | `mov rdx, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_R10`      | `mov rdx, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_R11`      | `mov rdx, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_R12`      | `mov rdx, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_R13`      | `mov rdx, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_R14`      | `mov rdx, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_R15`      | `mov rdx, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_RAX`      | `mov rdi, rax`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_RBX`      | `mov rdi, rbx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_RCX`      | `mov rdi, rcx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_RDX`      | `mov rdi, rdx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_RDI`      | `mov rdi, rdi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_RSI`      | `mov rdi, rsi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_RBP`      | `mov rdi, rbp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_RSP`      | `mov rdi, rsp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_R8`       | `mov rdi, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_R9`       | `mov rdi, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_R10`      | `mov rdi, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_R11`      | `mov rdi, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_R12`      | `mov rdi, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_R13`      | `mov rdi, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_R14`      | `mov rdi, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_R15`      | `mov rdi, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_RAX`      | `mov rsi, rax`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_RBX`      | `mov rsi, rbx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_RCX`      | `mov rsi, rcx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_RDX`      | `mov rsi, rdx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_RDI`      | `mov rsi, rdi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_RSI`      | `mov rsi, rsi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_RBP`      | `mov rsi, rbp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_RSP`      | `mov rsi, rsp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_R8`       | `mov rsi, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_R9`       | `mov rsi, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_R10`      | `mov rsi, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_R11`      | `mov rsi, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_R12`      | `mov rsi, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_R13`      | `mov rsi, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_R14`      | `mov rsi, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_R15`      | `mov rsi, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_RAX`      | `mov rbp, rax`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_RBX`      | `mov rbp, rbx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_RCX`      | `mov rbp, rcx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_RDX`      | `mov rbp, rdx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_RDI`      | `mov rbp, rdi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_RSI`      | `mov rbp, rsi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_RBP`      | `mov rbp, rbp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_RSP`      | `mov rbp, rsp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_R8`       | `mov rbp, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_R9`       | `mov rbp, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_R10`      | `mov rbp, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_R11`      | `mov rbp, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_R12`      | `mov rbp, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_R13`      | `mov rbp, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_R14`      | `mov rbp, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_R15`      | `mov rbp, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_RAX`      | `mov rsp, rax`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_RBX`      | `mov rsp, rbx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_RCX`      | `mov rsp, rcx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_RDX`      | `mov rsp, rdx`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_RDI`      | `mov rsp, rdi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_RSI`      | `mov rsp, rsi`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_RBP`      | `mov rsp, rbp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_RSP`      | `mov rsp, rsp`    | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_R8`       | `mov rsp, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_R9`       | `mov rsp, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_R10`      | `mov rsp, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_R11`      | `mov rsp, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_R12`      | `mov rsp, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_R13`      | `mov rsp, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_R14`      | `mov rsp, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_R15`      | `mov rsp, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_RAX`       | `mov r8, rax`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_RBX`       | `mov r8, rbx`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_RCX`       | `mov r8, rcx`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_RDX`       | `mov r8, rdx`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_RDI`       | `mov r8, rdi`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_RSI`       | `mov r8, rsi`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_RBP`       | `mov r8, rbp`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_RSP`       | `mov r8, rsp`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_R8`        | `mov r8, r8`      | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_R9`        | `mov r8, r9`      | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_R10`       | `mov r8, r10`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_R11`       | `mov r8, r11`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_R12`       | `mov r8, r12`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_R13`       | `mov r8, r13`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_R14`       | `mov r8, r14`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_R15`       | `mov r8, r15`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_RAX`       | `mov r9, rax`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_RBX`       | `mov r9, rbx`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_RCX`       | `mov r9, rcx`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_RDX`       | `mov r9, rdx`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_RDI`       | `mov r9, rdi`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_RSI`       | `mov r9, rsi`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_RBP`       | `mov r9, rbp`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_RSP`       | `mov r9, rsp`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_R8`        | `mov r9, r8`      | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_R9`        | `mov r9, r9`      | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_R10`       | `mov r9, r10`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_R11`       | `mov r9, r11`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_R12`       | `mov r9, r12`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_R13`       | `mov r9, r13`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_R14`       | `mov r9, r14`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_R15`       | `mov r9, r15`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_RAX`      | `mov r10, rax`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_RBX`      | `mov r10, rbx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_RCX`      | `mov r10, rcx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_RDX`      | `mov r10, rdx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_RDI`      | `mov r10, rdi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_RSI`      | `mov r10, rsi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_RBP`      | `mov r10, rbp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_RSP`      | `mov r10, rsp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_R8`       | `mov r10, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_R9`       | `mov r10, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_R10`      | `mov r10, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_R11`      | `mov r10, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_R12`      | `mov r10, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_R13`      | `mov r10, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_R14`      | `mov r10, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_R15`      | `mov r10, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_RAX`      | `mov r11, rax`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_RBX`      | `mov r11, rbx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_RCX`      | `mov r11, rcx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_RDX`      | `mov r11, rdx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_RDI`      | `mov r11, rdi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_RSI`      | `mov r11, rsi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_RBP`      | `mov r11, rbp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_RSP`      | `mov r11, rsp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_R8`       | `mov r11, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_R9`       | `mov r11, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_R10`      | `mov r11, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_R11`      | `mov r11, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_R12`      | `mov r11, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_R13`      | `mov r11, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_R14`      | `mov r11, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_R15`      | `mov r11, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_RAX`      | `mov r12, rax`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_RBX`      | `mov r12, rbx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_RCX`      | `mov r12, rcx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_RDX`      | `mov r12, rdx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_RDI`      | `mov r12, rdi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_RSI`      | `mov r12, rsi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_RBP`      | `mov r12, rbp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_RSP`      | `mov r12, rsp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_R8`       | `mov r12, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_R9`       | `mov r12, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_R10`      | `mov r12, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_R11`      | `mov r12, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_R12`      | `mov r12, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_R13`      | `mov r12, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_R14`      | `mov r12, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_R15`      | `mov r12, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_RAX`      | `mov r13, rax`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_RBX`      | `mov r13, rbx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_RCX`      | `mov r13, rcx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_RDX`      | `mov r13, rdx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_RDI`      | `mov r13, rdi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_RSI`      | `mov r13, rsi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_RBP`      | `mov r13, rbp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_RSP`      | `mov r13, rsp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_R8`       | `mov r13, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_R9`       | `mov r13, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_R10`      | `mov r13, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_R11`      | `mov r13, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_R12`      | `mov r13, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_R13`      | `mov r13, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_R14`      | `mov r13, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_R15`      | `mov r13, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_RAX`      | `mov r14, rax`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_RBX`      | `mov r14, rbx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_RCX`      | `mov r14, rcx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_RDX`      | `mov r14, rdx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_RDI`      | `mov r14, rdi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_RSI`      | `mov r14, rsi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_RBP`      | `mov r14, rbp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_RSP`      | `mov r14, rsp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_R8`       | `mov r14, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_R9`       | `mov r14, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_R10`      | `mov r14, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_R11`      | `mov r14, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_R12`      | `mov r14, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_R13`      | `mov r14, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_R14`      | `mov r14, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_R15`      | `mov r14, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_RAX`      | `mov r15, rax`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_RBX`      | `mov r15, rbx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_RCX`      | `mov r15, rcx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_RDX`      | `mov r15, rdx`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_RDI`      | `mov r15, rdi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_RSI`      | `mov r15, rsi`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_RBP`      | `mov r15, rbp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_RSP`      | `mov r15, rsp`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_R8`       | `mov r15, r8`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_R9`       | `mov r15, r9`     | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_R10`      | `mov r15, r10`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_R11`      | `mov r15, r11`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_R12`      | `mov r15, r12`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_R13`      | `mov r15, r13`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_R14`      | `mov r15, r14`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_R15`      | `mov r15, r15`    | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_(IMM32)`  | `mov imm32, rax`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RBX_(IMM32)`  | `mov imm32, rbx`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RCX_(IMM32)`  | `mov imm32, rcx`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RDX_(IMM32)`  | `mov imm32, rdx`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RDI_(IMM32)`  | `mov imm32, rdi`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RSI_(IMM32)`  | `mov imm32, rsi`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RBP_(IMM32)`  | `mov imm32, rbp`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RSP_(IMM32)`  | `mov imm32, rsp`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_R8_(IMM32)`   | `mov imm32, r8`   | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_R9_(IMM32)`   | `mov imm32, r9`   | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_R10_(IMM32)`  | `mov imm32, r10`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_R11_(IMM32)`  | `mov imm32, r11`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_R12_(IMM32)`  | `mov imm32, r12`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_R13_(IMM32)`  | `mov imm32, r13`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_R14_(IMM32)`  | `mov imm32, r14`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_R15_(IMM32)`  | `mov imm32, r15`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |

#### Pointers `INCL_CMT_ASM_MOV_PTR`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `MOV_RAX_FROM_PTR_(IMM32)`     | `mov rax, qword ptr [imm32]`       | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_EAX_FROM_PTR_(IMM32)`     | `mov eax, dword ptr [imm32]`       | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 3 + 4 (7)          |
| `MOV_AX_FROM_PTR_(?)`          | `mov ax, word ptr [?]`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 1 + 2 (3)          | 2 + 4 (5)          | 4 + 4 (8)          |
| `MOV_AL_FROM_PTR_(?)`          | `mov al, byte ptr [?]`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 1 + 2 (3)          | 1 + 4 (5)          | 3 + 4 (7)          |
| `MOV_RBX_FROM_PTR_(IMM32)`     | `mov rbx, qword ptr [imm32]`       | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_EBX_FROM_PTR_(IMM32)`     | `mov ebx, dword ptr [imm32]`       | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (5)          | 3 + 4 (7)          |
| `MOV_BX_FROM_PTR_(?)`          | `mov bx, word ptr [?]`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_BL_FROM_PTR_(?)`          | `mov bl, byte ptr [?]`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_RCX_FROM_PTR_(IMM32)`     | `mov rcx, qword ptr [imm32]`       | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_ECX_FROM_PTR_(IMM32)`     | `mov ecx, dword ptr [imm32]`       | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (5)          | 3 + 4 (7)          |
| `MOV_CX_FROM_PTR_(?)`          | `mov cx, word ptr [?]`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CL_FROM_PTR_(?)`          | `mov cl, byte ptr [?]`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_RDX_FROM_PTR_(IMM32)`     | `mov rdx, qword ptr [imm32]`       | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_EDX_FROM_PTR_(IMM32)`     | `mov edx, dword ptr [imm32]`       | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_DX_FROM_PTR_(?)`          | `mov dx, word ptr [?]`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DL_FROM_PTR_(?)`          | `mov dl, byte ptr [?]`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_RAX_TO_PTR_(IMM32)`       | `mov qword ptr [imm32], rax`       | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_EAX_TO_PTR_(IMM32)`       | `mov dword ptr [imm32], eax`       | ⚠️       | ✅       | ✅       | ---                | 1 + 4 (5)          | 3 + 4 (7)          |
| `MOV_AX_TO_PTR_(?)`            | `mov word ptr [?], ax`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 1 + 2 (3)          | 2 + 4 (5)          | 4 + 4 (8)          |
| `MOV_AL_TO_PTR_(?)`            | `mov byte ptr [?], al`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 1 + 2 (3)          | 1 + 4 (5)          | 3 + 4 (7)          |
| `MOV_RBX_TO_PTR_(IMM32)`       | `mov qword ptr [imm32], rbx`       | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_EBX_TO_PTR_(IMM32)`       | `mov dword ptr [imm32], ebx`       | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_BX_TO_PTR_(?)`            | `mov word ptr [?], bx`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_BL_TO_PTR_(?)`            | `mov byte ptr [?], bl`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_RCX_TO_PTR_(IMM32)`       | `mov qword ptr [imm32], rcx`       | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_ECX_TO_PTR_(IMM32)`       | `mov dword ptr [imm32], ecx`       | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_CX_TO_PTR_(?)`            | `mov word ptr [?], cx`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CL_TO_PTR_(?)`            | `mov byte ptr [?], cl`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_RDX_TO_PTR_(IMM32)`       | `mov qword ptr [imm32], rdx`       | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_EDX_TO_PTR_(IMM32)`       | `mov dword ptr [imm32], edx`       | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_DX_TO_PTR_(?)`            | `mov word ptr [?], dx`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DL_TO_PTR_(?)`            | `mov byte ptr [?], dl`             | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_RAX_TO_PTR_RAX`           | `mov qword ptr [rax], rax`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_TO_PTR_RBX`           | `mov qword ptr [rbx], rax`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_TO_PTR_RCX`           | `mov qword ptr [rcx], rax`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_TO_PTR_RDX`           | `mov qword ptr [rdx], rax`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_TO_PTR_RSI`           | `mov qword ptr [rsi], rax`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_TO_PTR_RDI`           | `mov qword ptr [rdi], rax`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_TO_PTR_RBP`           | `mov qword ptr [rbp], rax`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RAX_TO_PTR_RSP`           | `mov qword ptr [rsp], rax`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RBX_TO_PTR_RAX`           | `mov qword ptr [rax], rbx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_TO_PTR_RBX`           | `mov qword ptr [rbx], rbx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_TO_PTR_RCX`           | `mov qword ptr [rcx], rbx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_TO_PTR_RDX`           | `mov qword ptr [rdx], rbx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_TO_PTR_RSI`           | `mov qword ptr [rsi], rbx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_TO_PTR_RDI`           | `mov qword ptr [rdi], rbx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_TO_PTR_RBP`           | `mov qword ptr [rbp], rbx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RBX_TO_PTR_RSP`           | `mov qword ptr [rsp], rbx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RCX_TO_PTR_RAX`           | `mov qword ptr [rax], rcx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_TO_PTR_RBX`           | `mov qword ptr [rbx], rcx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_TO_PTR_RCX`           | `mov qword ptr [rcx], rcx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_TO_PTR_RDX`           | `mov qword ptr [rdx], rcx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_TO_PTR_RSI`           | `mov qword ptr [rsi], rcx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_TO_PTR_RDI`           | `mov qword ptr [rdi], rcx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_TO_PTR_RBP`           | `mov qword ptr [rbp], rcx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RCX_TO_PTR_RSP`           | `mov qword ptr [rsp], rcx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RDX_TO_PTR_RAX`           | `mov qword ptr [rax], rdx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_TO_PTR_RBX`           | `mov qword ptr [rbx], rdx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_TO_PTR_RCX`           | `mov qword ptr [rcx], rdx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_TO_PTR_RDX`           | `mov qword ptr [rdx], rdx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_TO_PTR_RSI`           | `mov qword ptr [rsi], rdx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_TO_PTR_RDI`           | `mov qword ptr [rdi], rdx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_TO_PTR_RBP`           | `mov qword ptr [rbp], rdx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RDX_TO_PTR_RSP`           | `mov qword ptr [rsp], rdx`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RSI_TO_PTR_RAX`           | `mov qword ptr [rax], rsi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_TO_PTR_RBX`           | `mov qword ptr [rbx], rsi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_TO_PTR_RCX`           | `mov qword ptr [rcx], rsi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_TO_PTR_RDX`           | `mov qword ptr [rdx], rsi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_TO_PTR_RSI`           | `mov qword ptr [rsi], rsi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_TO_PTR_RDI`           | `mov qword ptr [rdi], rsi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_TO_PTR_RBP`           | `mov qword ptr [rbp], rsi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RSI_TO_PTR_RSP`           | `mov qword ptr [rsp], rsi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RDI_TO_PTR_RAX`           | `mov qword ptr [rax], rdi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_TO_PTR_RBX`           | `mov qword ptr [rbx], rdi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_TO_PTR_RCX`           | `mov qword ptr [rcx], rdi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_TO_PTR_RDX`           | `mov qword ptr [rdx], rdi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_TO_PTR_RSI`           | `mov qword ptr [rsi], rdi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_TO_PTR_RDI`           | `mov qword ptr [rdi], rdi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_TO_PTR_RBP`           | `mov qword ptr [rbp], rdi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RDI_TO_PTR_RSP`           | `mov qword ptr [rsp], rdi`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RBP_TO_PTR_RAX`           | `mov qword ptr [rax], rbp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_TO_PTR_RBX`           | `mov qword ptr [rbx], rbp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_TO_PTR_RCX`           | `mov qword ptr [rcx], rbp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_TO_PTR_RDX`           | `mov qword ptr [rdx], rbp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_TO_PTR_RSI`           | `mov qword ptr [rsi], rbp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_TO_PTR_RDI`           | `mov qword ptr [rdi], rbp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_TO_PTR_RBP`           | `mov qword ptr [rbp], rbp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RBP_TO_PTR_RSP`           | `mov qword ptr [rsp], rbp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RSP_TO_PTR_RAX`           | `mov qword ptr [rax], rsp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_TO_PTR_RBX`           | `mov qword ptr [rbx], rsp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_TO_PTR_RCX`           | `mov qword ptr [rcx], rsp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_TO_PTR_RDX`           | `mov qword ptr [rdx], rsp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_TO_PTR_RSI`           | `mov qword ptr [rsi], rsp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_TO_PTR_RDI`           | `mov qword ptr [rdi], rsp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_TO_PTR_RBP`           | `mov qword ptr [rbp], rsp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RSP_TO_PTR_RSP`           | `mov qword ptr [rsp], rsp`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_R8_TO_PTR_RAX`            | `mov qword ptr [rax], r8`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_TO_PTR_RBX`            | `mov qword ptr [rbx], r8`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_TO_PTR_RCX`            | `mov qword ptr [rcx], r8`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_TO_PTR_RDX`            | `mov qword ptr [rdx], r8`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_TO_PTR_RSI`            | `mov qword ptr [rsi], r8`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_TO_PTR_RDI`            | `mov qword ptr [rdi], r8`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_TO_PTR_RBP`            | `mov qword ptr [rbp], r8`          | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8_TO_PTR_RSP`            | `mov qword ptr [rsp], r8`          | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9_TO_PTR_RAX`            | `mov qword ptr [rax], r9`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_TO_PTR_RBX`            | `mov qword ptr [rbx], r9`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_TO_PTR_RCX`            | `mov qword ptr [rcx], r9`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_TO_PTR_RDX`            | `mov qword ptr [rdx], r9`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_TO_PTR_RSI`            | `mov qword ptr [rsi], r9`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_TO_PTR_RDI`            | `mov qword ptr [rdi], r9`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_TO_PTR_RBP`            | `mov qword ptr [rbp], r9`          | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9_TO_PTR_RSP`            | `mov qword ptr [rsp], r9`          | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10_TO_PTR_RAX`           | `mov qword ptr [rax], r10`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_TO_PTR_RBX`           | `mov qword ptr [rbx], r10`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_TO_PTR_RCX`           | `mov qword ptr [rcx], r10`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_TO_PTR_RDX`           | `mov qword ptr [rdx], r10`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_TO_PTR_RSI`           | `mov qword ptr [rsi], r10`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_TO_PTR_RDI`           | `mov qword ptr [rdi], r10`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_TO_PTR_RBP`           | `mov qword ptr [rbp], r10`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10_TO_PTR_RSP`           | `mov qword ptr [rsp], r10`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11_TO_PTR_RAX`           | `mov qword ptr [rax], r11`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_TO_PTR_RBX`           | `mov qword ptr [rbx], r11`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_TO_PTR_RCX`           | `mov qword ptr [rcx], r11`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_TO_PTR_RDX`           | `mov qword ptr [rdx], r11`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_TO_PTR_RSI`           | `mov qword ptr [rsi], r11`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_TO_PTR_RDI`           | `mov qword ptr [rdi], r11`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_TO_PTR_RBP`           | `mov qword ptr [rbp], r11`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11_TO_PTR_RSP`           | `mov qword ptr [rsp], r11`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12_TO_PTR_RAX`           | `mov qword ptr [rax], r12`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_TO_PTR_RBX`           | `mov qword ptr [rbx], r12`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_TO_PTR_RCX`           | `mov qword ptr [rcx], r12`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_TO_PTR_RDX`           | `mov qword ptr [rdx], r12`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_TO_PTR_RSI`           | `mov qword ptr [rsi], r12`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_TO_PTR_RDI`           | `mov qword ptr [rdi], r12`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_TO_PTR_RBP`           | `mov qword ptr [rbp], r12`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12_TO_PTR_RSP`           | `mov qword ptr [rsp], r12`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13_TO_PTR_RAX`           | `mov qword ptr [rax], r13`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_TO_PTR_RBX`           | `mov qword ptr [rbx], r13`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_TO_PTR_RCX`           | `mov qword ptr [rcx], r13`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_TO_PTR_RDX`           | `mov qword ptr [rdx], r13`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_TO_PTR_RSI`           | `mov qword ptr [rsi], r13`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_TO_PTR_RDI`           | `mov qword ptr [rdi], r13`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_TO_PTR_RBP`           | `mov qword ptr [rbp], r13`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13_TO_PTR_RSP`           | `mov qword ptr [rsp], r13`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14_TO_PTR_RAX`           | `mov qword ptr [rax], r14`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_TO_PTR_RBX`           | `mov qword ptr [rbx], r14`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_TO_PTR_RCX`           | `mov qword ptr [rcx], r14`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_TO_PTR_RDX`           | `mov qword ptr [rdx], r14`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_TO_PTR_RSI`           | `mov qword ptr [rsi], r14`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_TO_PTR_RDI`           | `mov qword ptr [rdi], r14`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_TO_PTR_RBP`           | `mov qword ptr [rbp], r14`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14_TO_PTR_RSP`           | `mov qword ptr [rsp], r14`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15_TO_PTR_RAX`           | `mov qword ptr [rax], r15`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_TO_PTR_RBX`           | `mov qword ptr [rbx], r15`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_TO_PTR_RCX`           | `mov qword ptr [rcx], r15`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_TO_PTR_RDX`           | `mov qword ptr [rdx], r15`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_TO_PTR_RSI`           | `mov qword ptr [rsi], r15`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_TO_PTR_RDI`           | `mov qword ptr [rdi], r15`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_TO_PTR_RBP`           | `mov qword ptr [rbp], r15`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15_TO_PTR_RSP`           | `mov qword ptr [rsp], r15`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_RAX_FROM_PTR_RAX`         | `mov rax, qword ptr [rax]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_FROM_PTR_RBX`         | `mov rax, qword ptr [rbx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_FROM_PTR_RCX`         | `mov rax, qword ptr [rcx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_FROM_PTR_RDX`         | `mov rax, qword ptr [rdx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_FROM_PTR_RSI`         | `mov rax, qword ptr [rsi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_FROM_PTR_RDI`         | `mov rax, qword ptr [rdi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RAX_FROM_PTR_RBP`         | `mov rax, qword ptr [rbp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RAX_FROM_PTR_RSP`         | `mov rax, qword ptr [rsp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RBX_FROM_PTR_RAX`         | `mov rbx, qword ptr [rax]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_FROM_PTR_RBX`         | `mov rbx, qword ptr [rbx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_FROM_PTR_RCX`         | `mov rbx, qword ptr [rcx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_FROM_PTR_RDX`         | `mov rbx, qword ptr [rdx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_FROM_PTR_RSI`         | `mov rbx, qword ptr [rsi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_FROM_PTR_RDI`         | `mov rbx, qword ptr [rdi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBX_FROM_PTR_RBP`         | `mov rbx, qword ptr [rbp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RBX_FROM_PTR_RSP`         | `mov rbx, qword ptr [rsp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RCX_FROM_PTR_RAX`         | `mov rcx, qword ptr [rax]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_FROM_PTR_RBX`         | `mov rcx, qword ptr [rbx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_FROM_PTR_RCX`         | `mov rcx, qword ptr [rcx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_FROM_PTR_RDX`         | `mov rcx, qword ptr [rdx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_FROM_PTR_RSI`         | `mov rcx, qword ptr [rsi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_FROM_PTR_RDI`         | `mov rcx, qword ptr [rdi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RCX_FROM_PTR_RBP`         | `mov rcx, qword ptr [rbp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RCX_FROM_PTR_RSP`         | `mov rcx, qword ptr [rsp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RDX_FROM_PTR_RAX`         | `mov rdx, qword ptr [rax]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_FROM_PTR_RBX`         | `mov rdx, qword ptr [rbx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_FROM_PTR_RCX`         | `mov rdx, qword ptr [rcx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_FROM_PTR_RDX`         | `mov rdx, qword ptr [rdx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_FROM_PTR_RSI`         | `mov rdx, qword ptr [rsi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_FROM_PTR_RDI`         | `mov rdx, qword ptr [rdi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDX_FROM_PTR_RBP`         | `mov rdx, qword ptr [rbp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RDX_FROM_PTR_RSP`         | `mov rdx, qword ptr [rsp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RSI_FROM_PTR_RAX`         | `mov rsi, qword ptr [rax]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_FROM_PTR_RBX`         | `mov rsi, qword ptr [rbx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_FROM_PTR_RCX`         | `mov rsi, qword ptr [rcx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_FROM_PTR_RDX`         | `mov rsi, qword ptr [rdx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_FROM_PTR_RSI`         | `mov rsi, qword ptr [rsi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_FROM_PTR_RDI`         | `mov rsi, qword ptr [rdi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSI_FROM_PTR_RBP`         | `mov rsi, qword ptr [rbp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RSI_FROM_PTR_RSP`         | `mov rsi, qword ptr [rsp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RDI_FROM_PTR_RAX`         | `mov rdi, qword ptr [rax]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_FROM_PTR_RBX`         | `mov rdi, qword ptr [rbx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_FROM_PTR_RCX`         | `mov rdi, qword ptr [rcx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_FROM_PTR_RDX`         | `mov rdi, qword ptr [rdx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_FROM_PTR_RSI`         | `mov rdi, qword ptr [rsi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_FROM_PTR_RDI`         | `mov rdi, qword ptr [rdi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RDI_FROM_PTR_RBP`         | `mov rdi, qword ptr [rbp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RDI_FROM_PTR_RSP`         | `mov rdi, qword ptr [rsp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RBP_FROM_PTR_RAX`         | `mov rbp, qword ptr [rax]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_FROM_PTR_RBX`         | `mov rbp, qword ptr [rbx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_FROM_PTR_RCX`         | `mov rbp, qword ptr [rcx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_FROM_PTR_RDX`         | `mov rbp, qword ptr [rdx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_FROM_PTR_RSI`         | `mov rbp, qword ptr [rsi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_FROM_PTR_RDI`         | `mov rbp, qword ptr [rdi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RBP_FROM_PTR_RBP`         | `mov rbp, qword ptr [rbp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RBP_FROM_PTR_RSP`         | `mov rbp, qword ptr [rsp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RSP_FROM_PTR_RAX`         | `mov rsp, qword ptr [rax]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_FROM_PTR_RBX`         | `mov rsp, qword ptr [rbx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_FROM_PTR_RCX`         | `mov rsp, qword ptr [rcx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_FROM_PTR_RDX`         | `mov rsp, qword ptr [rdx]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_FROM_PTR_RSI`         | `mov rsp, qword ptr [rsi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_FROM_PTR_RDI`         | `mov rsp, qword ptr [rdi]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (3)                |
| `MOV_RSP_FROM_PTR_RBP`         | `mov rsp, qword ptr [rbp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_RSP_FROM_PTR_RSP`         | `mov rsp, qword ptr [rsp]`         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |
| `MOV_R8_FROM_PTR_RAX`          | `mov r8, qword ptr [rax]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_FROM_PTR_RBX`          | `mov r8, qword ptr [rbx]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_FROM_PTR_RCX`          | `mov r8, qword ptr [rcx]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_FROM_PTR_RDX`          | `mov r8, qword ptr [rdx]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_FROM_PTR_RSI`          | `mov r8, qword ptr [rsi]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_FROM_PTR_RDI`          | `mov r8, qword ptr [rdi]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R8_FROM_PTR_RBP`          | `mov r8, qword ptr [rbp]`          | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R8_FROM_PTR_RSP`          | `mov r8, qword ptr [rsp]`          | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9_FROM_PTR_RAX`          | `mov r9, qword ptr [rax]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_FROM_PTR_RBX`          | `mov r9, qword ptr [rbx]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_FROM_PTR_RCX`          | `mov r9, qword ptr [rcx]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_FROM_PTR_RDX`          | `mov r9, qword ptr [rdx]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_FROM_PTR_RSI`          | `mov r9, qword ptr [rsi]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_FROM_PTR_RDI`          | `mov r9, qword ptr [rdi]`          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R9_FROM_PTR_RBP`          | `mov r9, qword ptr [rbp]`          | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R9_FROM_PTR_RSP`          | `mov r9, qword ptr [rsp]`          | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10_FROM_PTR_RAX`         | `mov r10, qword ptr [rax]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_FROM_PTR_RBX`         | `mov r10, qword ptr [rbx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_FROM_PTR_RCX`         | `mov r10, qword ptr [rcx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_FROM_PTR_RDX`         | `mov r10, qword ptr [rdx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_FROM_PTR_RSI`         | `mov r10, qword ptr [rsi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_FROM_PTR_RDI`         | `mov r10, qword ptr [rdi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R10_FROM_PTR_RBP`         | `mov r10, qword ptr [rbp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R10_FROM_PTR_RSP`         | `mov r10, qword ptr [rsp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11_FROM_PTR_RAX`         | `mov r11, qword ptr [rax]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_FROM_PTR_RBX`         | `mov r11, qword ptr [rbx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_FROM_PTR_RCX`         | `mov r11, qword ptr [rcx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_FROM_PTR_RDX`         | `mov r11, qword ptr [rdx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_FROM_PTR_RSI`         | `mov r11, qword ptr [rsi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_FROM_PTR_RDI`         | `mov r11, qword ptr [rdi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R11_FROM_PTR_RBP`         | `mov r11, qword ptr [rbp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R11_FROM_PTR_RSP`         | `mov r11, qword ptr [rsp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12_FROM_PTR_RAX`         | `mov r12, qword ptr [rax]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_FROM_PTR_RBX`         | `mov r12, qword ptr [rbx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_FROM_PTR_RCX`         | `mov r12, qword ptr [rcx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_FROM_PTR_RDX`         | `mov r12, qword ptr [rdx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_FROM_PTR_RSI`         | `mov r12, qword ptr [rsi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_FROM_PTR_RDI`         | `mov r12, qword ptr [rdi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R12_FROM_PTR_RBP`         | `mov r12, qword ptr [rbp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R12_FROM_PTR_RSP`         | `mov r12, qword ptr [rsp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13_FROM_PTR_RAX`         | `mov r13, qword ptr [rax]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_FROM_PTR_RBX`         | `mov r13, qword ptr [rbx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_FROM_PTR_RCX`         | `mov r13, qword ptr [rcx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_FROM_PTR_RDX`         | `mov r13, qword ptr [rdx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_FROM_PTR_RSI`         | `mov r13, qword ptr [rsi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_FROM_PTR_RDI`         | `mov r13, qword ptr [rdi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R13_FROM_PTR_RBP`         | `mov r13, qword ptr [rbp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R13_FROM_PTR_RSP`         | `mov r13, qword ptr [rsp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14_FROM_PTR_RAX`         | `mov r14, qword ptr [rax]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_FROM_PTR_RBX`         | `mov r14, qword ptr [rbx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_FROM_PTR_RCX`         | `mov r14, qword ptr [rcx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_FROM_PTR_RDX`         | `mov r14, qword ptr [rdx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_FROM_PTR_RSI`         | `mov r14, qword ptr [rsi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_FROM_PTR_RDI`         | `mov r14, qword ptr [rdi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R14_FROM_PTR_RBP`         | `mov r14, qword ptr [rbp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R14_FROM_PTR_RSP`         | `mov r14, qword ptr [rsp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15_FROM_PTR_RAX`         | `mov r15, qword ptr [rax]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_FROM_PTR_RBX`         | `mov r15, qword ptr [rbx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_FROM_PTR_RCX`         | `mov r15, qword ptr [rcx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_FROM_PTR_RDX`         | `mov r15, qword ptr [rdx]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_FROM_PTR_RSI`         | `mov r15, qword ptr [rsi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_FROM_PTR_RDI`         | `mov r15, qword ptr [rdi]`         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `MOV_R15_FROM_PTR_RBP`         | `mov r15, qword ptr [rbp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_R15_FROM_PTR_RSP`         | `mov r15, qword ptr [rsp]`         | ❌       | ❌       | ✅       | ---                | ---                | (4)                |
| `MOV_EAX_TO_PTR_ESI`           | `mov dword ptr [esi], eax`         | ⚠️       | ✅       | ✅       | ---                | (2)                | (3)                |
| `MOV_EBX_TO_PTR_ESI`           | `mov dword ptr [esi], ebx`         | ⚠️       | ✅       | ✅       | ---                | (2)                | (3)                |
| `MOV_ECX_TO_PTR_ESI`           | `mov dword ptr [esi], ecx`         | ⚠️       | ✅       | ✅       | ---                | (2)                | (3)                |
| `MOV_EDX_TO_PTR_ESI`           | `mov dword ptr [esi], edx`         | ⚠️       | ✅       | ✅       | ---                | (2)                | (3)                |
| `MOV_RAX_FROM_PTR_RBP_(IMM32)` | `mov rax, qword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RAX_FROM_PTR_RSP_(IMM32)` | `mov rax, qword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RAX_FROM_PTR_EBP_(IMM32)` | `mov rax, qword ptr [ebp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RAX_FROM_PTR_ESP_(IMM32)` | `mov rax, qword ptr [esp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EAX_FROM_PTR_RBP_(IMM32)` | `mov eax, dword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EAX_FROM_PTR_RSP_(IMM32)` | `mov eax, dword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EAX_FROM_PTR_EBP_(IMM32)` | `mov eax, dword ptr [ebp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EAX_FROM_PTR_ESP_(IMM32)` | `mov eax, dword ptr [esp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EAX_FROM_PTR_BP_(IMM16)`  | `mov eax, dword ptr [bp + imm16]`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_AX_FROM_PTR_RBP_(IMM32)`  | `mov ax, word ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_AX_FROM_PTR_RSP_(IMM32)`  | `mov ax, word ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_AX_FROM_PTR_EBP_(IMM32)`  | `mov ax, word ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_AX_FROM_PTR_ESP_(IMM32)`  | `mov ax, word ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_AX_FROM_PTR_BP_(IMM16)`   | `mov ax, word ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_AL_FROM_PTR_RBP_(IMM32)`  | `mov al, byte ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_AL_FROM_PTR_RSP_(IMM32)`  | `mov al, byte ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_AL_FROM_PTR_EBP_(IMM32)`  | `mov al, byte ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_AL_FROM_PTR_ESP_(IMM32)`  | `mov al, byte ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_AL_FROM_PTR_BP_(IMM16)`   | `mov al, byte ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 3 + 2 (5)          | ---                |
| `MOV_RBX_FROM_PTR_RBP_(IMM32)` | `mov rbx, qword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RBX_FROM_PTR_RSP_(IMM32)` | `mov rbx, qword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RBX_FROM_PTR_EBP_(IMM32)` | `mov rbx, qword ptr [ebp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RBX_FROM_PTR_ESP_(IMM32)` | `mov rbx, qword ptr [esp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EBX_FROM_PTR_RBP_(IMM32)` | `mov ebx, dword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EBX_FROM_PTR_RSP_(IMM32)` | `mov ebx, dword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EBX_FROM_PTR_EBP_(IMM32)` | `mov ebx, dword ptr [ebp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EBX_FROM_PTR_ESP_(IMM32)` | `mov ebx, dword ptr [esp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EBX_FROM_PTR_BP_(IMM16)`  | `mov ebx, dword ptr [bp + imm16]`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_BX_FROM_PTR_RBP_(IMM32)`  | `mov bx, word ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BX_FROM_PTR_RSP_(IMM32)`  | `mov bx, word ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BX_FROM_PTR_EBP_(IMM32)`  | `mov bx, word ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_BX_FROM_PTR_ESP_(IMM32)`  | `mov bx, word ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_BX_FROM_PTR_BP_(IMM16)`   | `mov bx, word ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_BL_FROM_PTR_RBP_(IMM32)`  | `mov bl, byte ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_BL_FROM_PTR_RSP_(IMM32)`  | `mov bl, byte ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_BL_FROM_PTR_EBP_(IMM32)`  | `mov bl, byte ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_BL_FROM_PTR_ESP_(IMM32)`  | `mov bl, byte ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_BL_FROM_PTR_BP_(IMM16)`   | `mov bl, byte ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 3 + 2 (5)          | ---                |
| `MOV_RCX_FROM_PTR_RBP_(IMM32)` | `mov rcx, qword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RCX_FROM_PTR_RSP_(IMM32)` | `mov rcx, qword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RCX_FROM_PTR_EBP_(IMM32)` | `mov rcx, qword ptr [ebp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RCX_FROM_PTR_ESP_(IMM32)` | `mov rcx, qword ptr [esp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_ECX_FROM_PTR_RBP_(IMM32)` | `mov ecx, dword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_ECX_FROM_PTR_RSP_(IMM32)` | `mov ecx, dword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_ECX_FROM_PTR_EBP_(IMM32)` | `mov ecx, dword ptr [ebp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_ECX_FROM_PTR_ESP_(IMM32)` | `mov ecx, dword ptr [esp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ECX_FROM_PTR_BP_(IMM16)`  | `mov ecx, dword ptr [bp + imm16]`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_CX_FROM_PTR_RBP_(IMM32)`  | `mov cx, word ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_CX_FROM_PTR_RSP_(IMM32)`  | `mov cx, word ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_CX_FROM_PTR_EBP_(IMM32)`  | `mov cx, word ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CX_FROM_PTR_ESP_(IMM32)`  | `mov cx, word ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_CX_FROM_PTR_BP_(IMM16)`   | `mov cx, word ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_CL_FROM_PTR_RBP_(IMM32)`  | `mov cl, byte ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_CL_FROM_PTR_RSP_(IMM32)`  | `mov cl, byte ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_CL_FROM_PTR_EBP_(IMM32)`  | `mov cl, byte ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_CL_FROM_PTR_ESP_(IMM32)`  | `mov cl, byte ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CL_FROM_PTR_BP_(IMM16)`   | `mov cl, byte ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 3 + 2 (5)          | ---                |
| `MOV_RDX_FROM_PTR_RBP_(IMM32)` | `mov rdx, qword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDX_FROM_PTR_RSP_(IMM32)` | `mov rdx, qword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDX_FROM_PTR_EBP_(IMM32)` | `mov rdx, qword ptr [ebp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDX_FROM_PTR_ESP_(IMM32)` | `mov rdx, qword ptr [esp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EDX_FROM_PTR_RBP_(IMM32)` | `mov edx, dword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EDX_FROM_PTR_RSP_(IMM32)` | `mov edx, dword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EDX_FROM_PTR_EBP_(IMM32)` | `mov edx, dword ptr [ebp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EDX_FROM_PTR_ESP_(IMM32)` | `mov edx, dword ptr [esp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDX_FROM_PTR_BP_(IMM16)`  | `mov edx, dword ptr [bp + imm16]`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_DX_FROM_PTR_RBP_(IMM32)`  | `mov dx, word ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DX_FROM_PTR_RSP_(IMM32)`  | `mov dx, word ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DX_FROM_PTR_EBP_(IMM32)`  | `mov dx, word ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DX_FROM_PTR_ESP_(IMM32)`  | `mov dx, word ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DX_FROM_PTR_BP_(IMM16)`   | `mov dx, word ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_DL_FROM_PTR_RBP_(IMM32)`  | `mov dl, byte ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_DL_FROM_PTR_RSP_(IMM32)`  | `mov dl, byte ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_DL_FROM_PTR_EBP_(IMM32)`  | `mov dl, byte ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_DL_FROM_PTR_ESP_(IMM32)`  | `mov dl, byte ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DL_FROM_PTR_BP_(IMM16)`   | `mov dl, byte ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 3 + 2 (5)          | ---                |
| `MOV_RAX_TO_PTR_RBP_(IMM32)`   | `mov qword ptr [rbp + imm32], rax` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RAX_TO_PTR_RSP_(IMM32)`   | `mov qword ptr [rsp + imm32], rax` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RAX_TO_PTR_EBP_(IMM32)`   | `mov qword ptr [ebp + imm32], rax` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RAX_TO_PTR_ESP_(IMM32)`   | `mov qword ptr [esp + imm32], rax` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EAX_TO_PTR_RBP_(IMM32)`   | `mov dword ptr [rbp + imm32], eax` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (7)          |
| `MOV_EAX_TO_PTR_RSP_(IMM32)`   | `mov dword ptr [rsp + imm32], eax` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EAX_TO_PTR_EBP_(IMM32)`   | `mov dword ptr [ebp + imm32], eax` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EAX_TO_PTR_ESP_(IMM32)`   | `mov dword ptr [esp + imm32], eax` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EAX_TO_PTR_BP_(IMM16)`    | `mov dword ptr [bp + imm16], eax`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_AX_TO_PTR_RBP_(IMM32)`    | `mov word ptr [rbp + imm32], ax`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (8)          |
| `MOV_AX_TO_PTR_RSP_(IMM32)`    | `mov word ptr [rsp + imm32], ax`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_AX_TO_PTR_EBP_(IMM32)`    | `mov word ptr [ebp + imm32], ax`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_AX_TO_PTR_ESP_(IMM32)`    | `mov word ptr [esp + imm32], ax`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_AX_TO_PTR_BP_(IMM16)`     | `mov word ptr [bp + imm16], ax`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_AL_TO_PTR_RBP_(IMM32)`    | `mov byte ptr [rbp + imm32], al`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (7)          |
| `MOV_AL_TO_PTR_RSP_(IMM32)`    | `mov byte ptr [rsp + imm32], al`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_AL_TO_PTR_EBP_(IMM32)`    | `mov byte ptr [ebp + imm32], al`   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_AL_TO_PTR_ESP_(IMM32)`    | `mov byte ptr [esp + imm32], al`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_AL_TO_PTR_BP_(IMM16)`     | `mov byte ptr [bp + imm16], al`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 3 + 2 (5)          | ---                |
| `MOV_RBX_TO_PTR_RBP_(IMM32)`   | `mov qword ptr [rbp + imm32], rbx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RBX_TO_PTR_RSP_(IMM32)`   | `mov qword ptr [rsp + imm32], rbx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RBX_TO_PTR_EBP_(IMM32)`   | `mov qword ptr [ebp + imm32], rbx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RBX_TO_PTR_ESP_(IMM32)`   | `mov qword ptr [esp + imm32], rbx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EBX_TO_PTR_RBP_(IMM32)`   | `mov dword ptr [rbp + imm32], ebx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_EBX_TO_PTR_RSP_(IMM32)`   | `mov dword ptr [rsp + imm32], ebx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EBX_TO_PTR_EBP_(IMM32)`   | `mov dword ptr [ebp + imm32], ebx` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EBX_TO_PTR_ESP_(IMM32)`   | `mov dword ptr [esp + imm32], ebx` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EBX_TO_PTR_BP_(IMM16)`    | `mov dword ptr [bp + imm16], ebx`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_BX_TO_PTR_RBP_(IMM32)`    | `mov word ptr [rbp + imm32], bx`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_BX_TO_PTR_RSP_(IMM32)`    | `mov word ptr [rsp + imm32], bx`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BX_TO_PTR_EBP_(IMM32)`    | `mov word ptr [ebp + imm32], bx`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_BX_TO_PTR_ESP_(IMM32)`    | `mov word ptr [esp + imm32], bx`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_BX_TO_PTR_BP_(IMM16)`     | `mov word ptr [bp + imm16], bx`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_BL_TO_PTR_RBP_(IMM32)`    | `mov byte ptr [rbp + imm32], bl`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_BL_TO_PTR_RSP_(IMM32)`    | `mov byte ptr [rsp + imm32], bl`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_BL_TO_PTR_EBP_(IMM32)`    | `mov byte ptr [ebp + imm32], bl`   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_BL_TO_PTR_ESP_(IMM32)`    | `mov byte ptr [esp + imm32], bl`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_BL_TO_PTR_BP_(IMM16)`     | `mov byte ptr [bp + imm16], bl`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 3 + 2 (5)          | ---                |
| `MOV_RCX_TO_PTR_RBP_(IMM32)`   | `mov qword ptr [rbp + imm32], rcx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RCX_TO_PTR_RSP_(IMM32)`   | `mov qword ptr [rsp + imm32], rcx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RCX_TO_PTR_EBP_(IMM32)`   | `mov qword ptr [ebp + imm32], rcx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RCX_TO_PTR_ESP_(IMM32)`   | `mov qword ptr [esp + imm32], rcx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_ECX_TO_PTR_RBP_(IMM32)`   | `mov dword ptr [rbp + imm32], ecx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_ECX_TO_PTR_RSP_(IMM32)`   | `mov dword ptr [rsp + imm32], ecx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_ECX_TO_PTR_EBP_(IMM32)`   | `mov dword ptr [ebp + imm32], ecx` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_ECX_TO_PTR_ESP_(IMM32)`   | `mov dword ptr [esp + imm32], ecx` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ECX_TO_PTR_BP_(IMM16)`    | `mov dword ptr [bp + imm16], ecx`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_CX_TO_PTR_RBP_(IMM32)`    | `mov word ptr [rbp + imm32], cx`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_CX_TO_PTR_RSP_(IMM32)`    | `mov word ptr [rsp + imm32], cx`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_CX_TO_PTR_EBP_(IMM32)`    | `mov word ptr [ebp + imm32], cx`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CX_TO_PTR_ESP_(IMM32)`    | `mov word ptr [esp + imm32], cx`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_CX_TO_PTR_BP_(IMM16)`     | `mov word ptr [bp + imm16], cx`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_CL_TO_PTR_RBP_(IMM32)`    | `mov byte ptr [rbp + imm32], cl`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_CL_TO_PTR_RSP_(IMM32)`    | `mov byte ptr [rsp + imm32], cl`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_CL_TO_PTR_EBP_(IMM32)`    | `mov byte ptr [ebp + imm32], cl`   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_CL_TO_PTR_ESP_(IMM32)`    | `mov byte ptr [esp + imm32], cl`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CL_TO_PTR_BP_(IMM16)`     | `mov byte ptr [bp + imm16], cl`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 3 + 2 (5)          | ---                |
| `MOV_RDX_TO_PTR_RBP_(IMM32)`   | `mov qword ptr [rbp + imm32], rdx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RDX_TO_PTR_RSP_(IMM32)`   | `mov qword ptr [rsp + imm32], rdx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDX_TO_PTR_EBP_(IMM32)`   | `mov qword ptr [ebp + imm32], rdx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDX_TO_PTR_ESP_(IMM32)`   | `mov qword ptr [esp + imm32], rdx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EDX_TO_PTR_RBP_(IMM32)`   | `mov dword ptr [rbp + imm32], edx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_EDX_TO_PTR_RSP_(IMM32)`   | `mov dword ptr [rsp + imm32], edx` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EDX_TO_PTR_EBP_(IMM32)`   | `mov dword ptr [ebp + imm32], edx` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EDX_TO_PTR_ESP_(IMM32)`   | `mov dword ptr [esp + imm32], edx` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDX_TO_PTR_BP_(IMM16)`    | `mov dword ptr [bp + imm16], edx`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_DX_TO_PTR_RBP_(IMM32)`    | `mov word ptr [rbp + imm32], dx`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_DX_TO_PTR_RSP_(IMM32)`    | `mov word ptr [rsp + imm32], dx`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DX_TO_PTR_EBP_(IMM32)`    | `mov word ptr [ebp + imm32], dx`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DX_TO_PTR_ESP_(IMM32)`    | `mov word ptr [esp + imm32], dx`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DX_TO_PTR_BP_(IMM16)`     | `mov word ptr [bp + imm16], dx`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_DL_TO_PTR_RBP_(IMM32)`    | `mov byte ptr [rbp + imm32], dl`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_DL_TO_PTR_RSP_(IMM32)`    | `mov byte ptr [rsp + imm32], dl`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_DL_TO_PTR_EBP_(IMM32)`    | `mov byte ptr [ebp + imm32], dl`   | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_DL_TO_PTR_ESP_(IMM32)`    | `mov byte ptr [esp + imm32], dl`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DL_TO_PTR_BP_(IMM16)`     | `mov byte ptr [bp + imm16], dl`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 3 + 2 (5)          | ---                |
| `MOV_RSI_TO_PTR_RBP_(IMM32)`   | `mov qword ptr [rbp + imm32], rsi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RSI_TO_PTR_RSP_(IMM32)`   | `mov qword ptr [rsp + imm32], rsi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RSI_TO_PTR_EBP_(IMM32)`   | `mov qword ptr [ebp + imm32], rsi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RSI_TO_PTR_ESP_(IMM32)`   | `mov qword ptr [esp + imm32], rsi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_ESI_TO_PTR_RBP_(IMM32)`   | `mov dword ptr [rbp + imm32], esi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_ESI_TO_PTR_RSP_(IMM32)`   | `mov dword ptr [rsp + imm32], esi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_ESI_TO_PTR_EBP_(IMM32)`   | `mov dword ptr [ebp + imm32], esi` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_ESI_TO_PTR_ESP_(IMM32)`   | `mov dword ptr [esp + imm32], esi` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESI_TO_PTR_BP_(IMM16)`    | `mov dword ptr [bp + imm16], esi`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_SI_TO_PTR_RBP_(IMM32)`    | `mov word ptr [rbp + imm32], si`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_SI_TO_PTR_RSP_(IMM32)`    | `mov word ptr [rsp + imm32], si`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SI_TO_PTR_EBP_(IMM32)`    | `mov word ptr [ebp + imm32], si`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_SI_TO_PTR_ESP_(IMM32)`    | `mov word ptr [esp + imm32], si`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SI_TO_PTR_BP_(IMM16)`     | `mov word ptr [bp + imm16], si`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_SIL_TO_PTR_RBP_(IMM32)`   | `mov byte ptr [rbp + imm32], sil`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_SIL_TO_PTR_RSP_(IMM32)`   | `mov byte ptr [rsp + imm32], sil`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SIL_TO_PTR_EBP_(IMM32)`   | `mov byte ptr [ebp + imm32], sil`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SIL_TO_PTR_ESP_(IMM32)`   | `mov byte ptr [esp + imm32], sil`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDI_TO_PTR_RBP_(IMM32)`   | `mov qword ptr [rbp + imm32], rdi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RDI_TO_PTR_RSP_(IMM32)`   | `mov qword ptr [rsp + imm32], rdi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDI_TO_PTR_EBP_(IMM32)`   | `mov qword ptr [ebp + imm32], rdi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDI_TO_PTR_ESP_(IMM32)`   | `mov qword ptr [esp + imm32], rdi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EDI_TO_PTR_RBP_(IMM32)`   | `mov dword ptr [rbp + imm32], edi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_EDI_TO_PTR_RSP_(IMM32)`   | `mov dword ptr [rsp + imm32], edi` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EDI_TO_PTR_EBP_(IMM32)`   | `mov dword ptr [ebp + imm32], edi` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EDI_TO_PTR_ESP_(IMM32)`   | `mov dword ptr [esp + imm32], edi` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDI_TO_PTR_BP_(IMM16)`    | `mov dword ptr [bp + imm16], edi`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_DI_TO_PTR_RBP_(IMM32)`    | `mov word ptr [rbp + imm32], di`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_DI_TO_PTR_RSP_(IMM32)`    | `mov word ptr [rsp + imm32], di`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DI_TO_PTR_EBP_(IMM32)`    | `mov word ptr [ebp + imm32], di`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DI_TO_PTR_ESP_(IMM32)`    | `mov word ptr [esp + imm32], di`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DI_TO_PTR_BP_(IMM16)`     | `mov word ptr [bp + imm16], di`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_DIL_TO_PTR_RBP_(IMM32)`   | `mov byte ptr [rbp + imm32], dil`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_DIL_TO_PTR_RSP_(IMM32)`   | `mov byte ptr [rsp + imm32], dil`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DIL_TO_PTR_EBP_(IMM32)`   | `mov byte ptr [ebp + imm32], dil`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DIL_TO_PTR_ESP_(IMM32)`   | `mov byte ptr [esp + imm32], dil`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBP_TO_PTR_RBP_(IMM32)`   | `mov qword ptr [rbp + imm32], rbp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RBP_TO_PTR_RSP_(IMM32)`   | `mov qword ptr [rsp + imm32], rbp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RBP_TO_PTR_EBP_(IMM32)`   | `mov qword ptr [ebp + imm32], rbp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RBP_TO_PTR_ESP_(IMM32)`   | `mov qword ptr [esp + imm32], rbp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EBP_TO_PTR_RBP_(IMM32)`   | `mov dword ptr [rbp + imm32], ebp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_EBP_TO_PTR_RSP_(IMM32)`   | `mov dword ptr [rsp + imm32], ebp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EBP_TO_PTR_EBP_(IMM32)`   | `mov dword ptr [ebp + imm32], ebp` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EBP_TO_PTR_ESP_(IMM32)`   | `mov dword ptr [esp + imm32], ebp` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EBP_TO_PTR_BP_(IMM16)`    | `mov dword ptr [bp + imm16], ebp`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_BP_TO_PTR_RBP_(IMM32)`    | `mov word ptr [rbp + imm32], bp`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_BP_TO_PTR_RSP_(IMM32)`    | `mov word ptr [rsp + imm32], bp`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BP_TO_PTR_EBP_(IMM32)`    | `mov word ptr [ebp + imm32], bp`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_BP_TO_PTR_ESP_(IMM32)`    | `mov word ptr [esp + imm32], bp`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_BP_TO_PTR_BP_(IMM16)`     | `mov word ptr [bp + imm16], bp`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_BPL_TO_PTR_RBP_(IMM32)`   | `mov byte ptr [rbp + imm32], bpl`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_BPL_TO_PTR_RSP_(IMM32)`   | `mov byte ptr [rsp + imm32], bpl`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BPL_TO_PTR_EBP_(IMM32)`   | `mov byte ptr [ebp + imm32], bpl`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BPL_TO_PTR_ESP_(IMM32)`   | `mov byte ptr [esp + imm32], bpl`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSP_TO_PTR_RBP_(IMM32)`   | `mov qword ptr [rbp + imm32], rsp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RSP_TO_PTR_RSP_(IMM32)`   | `mov qword ptr [rsp + imm32], rsp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RSP_TO_PTR_EBP_(IMM32)`   | `mov qword ptr [ebp + imm32], rsp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RSP_TO_PTR_ESP_(IMM32)`   | `mov qword ptr [esp + imm32], rsp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_ESP_TO_PTR_RBP_(IMM32)`   | `mov dword ptr [rbp + imm32], esp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_ESP_TO_PTR_RSP_(IMM32)`   | `mov dword ptr [rsp + imm32], esp` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_ESP_TO_PTR_EBP_(IMM32)`   | `mov dword ptr [ebp + imm32], esp` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_ESP_TO_PTR_ESP_(IMM32)`   | `mov dword ptr [esp + imm32], esp` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESP_TO_PTR_BP_(IMM16)`    | `mov dword ptr [bp + imm16], esp`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_SP_TO_PTR_RBP_(IMM32)`    | `mov word ptr [rbp + imm32], sp`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_SP_TO_PTR_RSP_(IMM32)`    | `mov word ptr [rsp + imm32], sp`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SP_TO_PTR_EBP_(IMM32)`    | `mov word ptr [ebp + imm32], sp`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_SP_TO_PTR_ESP_(IMM32)`    | `mov word ptr [esp + imm32], sp`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SP_TO_PTR_BP_(IMM16)`     | `mov word ptr [bp + imm16], sp`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_SPL_TO_PTR_RBP_(IMM32)`   | `mov byte ptr [rbp + imm32], spl`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_SPL_TO_PTR_RSP_(IMM32)`   | `mov byte ptr [rsp + imm32], spl`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SPL_TO_PTR_EBP_(IMM32)`   | `mov byte ptr [ebp + imm32], spl`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SPL_TO_PTR_ESP_(IMM32)`   | `mov byte ptr [esp + imm32], spl`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSI_FROM_PTR_RBP_(IMM32)` | `mov rsi, qword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RSI_FROM_PTR_RSP_(IMM32)` | `mov rsi, qword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RSI_FROM_PTR_EBP_(IMM32)` | `mov rsi, qword ptr [ebp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RSI_FROM_PTR_ESP_(IMM32)` | `mov rsi, qword ptr [esp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_ESI_FROM_PTR_RBP_(IMM32)` | `mov esi, dword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_ESI_FROM_PTR_RSP_(IMM32)` | `mov esi, dword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_ESI_FROM_PTR_EBP_(IMM32)` | `mov esi, dword ptr [ebp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_ESI_FROM_PTR_ESP_(IMM32)` | `mov esi, dword ptr [esp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESI_FROM_PTR_BP_(IMM16)`  | `mov esi, dword ptr [bp + imm16]`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_SI_FROM_PTR_RBP_(IMM32)`  | `mov si, word ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_SI_FROM_PTR_RSP_(IMM32)`  | `mov si, word ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SI_FROM_PTR_EBP_(IMM32)`  | `mov si, word ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_SI_FROM_PTR_ESP_(IMM32)`  | `mov si, word ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SI_FROM_PTR_BP_(IMM16)`   | `mov si, word ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_SIL_FROM_PTR_RBP_(IMM32)` | `mov sil, byte ptr [rbp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_SIL_FROM_PTR_RSP_(IMM32)` | `mov sil, byte ptr [rsp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SIL_FROM_PTR_EBP_(IMM32)` | `mov sil, byte ptr [ebp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SIL_FROM_PTR_ESP_(IMM32)` | `mov sil, byte ptr [esp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDI_FROM_PTR_RBP_(IMM32)` | `mov rdi, qword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RDI_FROM_PTR_RSP_(IMM32)` | `mov rdi, qword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDI_FROM_PTR_EBP_(IMM32)` | `mov rdi, qword ptr [ebp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RDI_FROM_PTR_ESP_(IMM32)` | `mov rdi, qword ptr [esp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EDI_FROM_PTR_RBP_(IMM32)` | `mov edi, dword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_EDI_FROM_PTR_RSP_(IMM32)` | `mov edi, dword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EDI_FROM_PTR_EBP_(IMM32)` | `mov edi, dword ptr [ebp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EDI_FROM_PTR_ESP_(IMM32)` | `mov edi, dword ptr [esp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDI_FROM_PTR_BP_(IMM16)`  | `mov edi, dword ptr [bp + imm16]`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_DI_FROM_PTR_RBP_(IMM32)`  | `mov di, word ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_DI_FROM_PTR_RSP_(IMM32)`  | `mov di, word ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DI_FROM_PTR_EBP_(IMM32)`  | `mov di, word ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DI_FROM_PTR_ESP_(IMM32)`  | `mov di, word ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DI_FROM_PTR_BP_(IMM16)`   | `mov di, word ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_DIL_FROM_PTR_RBP_(IMM32)` | `mov dil, byte ptr [rbp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_DIL_FROM_PTR_RSP_(IMM32)` | `mov dil, byte ptr [rsp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DIL_FROM_PTR_EBP_(IMM32)` | `mov dil, byte ptr [ebp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_DIL_FROM_PTR_ESP_(IMM32)` | `mov dil, byte ptr [esp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBP_FROM_PTR_RBP_(IMM32)` | `mov rbp, qword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RBP_FROM_PTR_RSP_(IMM32)` | `mov rbp, qword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RBP_FROM_PTR_EBP_(IMM32)` | `mov rbp, qword ptr [ebp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RBP_FROM_PTR_ESP_(IMM32)` | `mov rbp, qword ptr [esp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EBP_FROM_PTR_RBP_(IMM32)` | `mov ebp, dword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_EBP_FROM_PTR_RSP_(IMM32)` | `mov ebp, dword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_EBP_FROM_PTR_EBP_(IMM32)` | `mov ebp, dword ptr [ebp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_EBP_FROM_PTR_ESP_(IMM32)` | `mov ebp, dword ptr [esp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EBP_FROM_PTR_BP_(IMM16)`  | `mov ebp, dword ptr [bp + imm16]`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_BP_FROM_PTR_RBP_(IMM32)`  | `mov bp, word ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_BP_FROM_PTR_RSP_(IMM32)`  | `mov bp, word ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BP_FROM_PTR_EBP_(IMM32)`  | `mov bp, word ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_BP_FROM_PTR_ESP_(IMM32)`  | `mov bp, word ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_BP_FROM_PTR_BP_(IMM16)`   | `mov bp, word ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_BPL_FROM_PTR_RBP_(IMM32)` | `mov bpl, byte ptr [rbp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_BPL_FROM_PTR_RSP_(IMM32)` | `mov bpl, byte ptr [rsp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BPL_FROM_PTR_EBP_(IMM32)` | `mov bpl, byte ptr [ebp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_BPL_FROM_PTR_ESP_(IMM32)` | `mov bpl, byte ptr [esp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSP_FROM_PTR_RBP_(IMM32)` | `mov rsp, qword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_RSP_FROM_PTR_RSP_(IMM32)` | `mov rsp, qword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RSP_FROM_PTR_EBP_(IMM32)` | `mov rsp, qword ptr [ebp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_RSP_FROM_PTR_ESP_(IMM32)` | `mov rsp, qword ptr [esp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_ESP_FROM_PTR_RBP_(IMM32)` | `mov esp, dword ptr [rbp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 4 (6)          |
| `MOV_ESP_FROM_PTR_RSP_(IMM32)` | `mov esp, dword ptr [rsp + imm32]` | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_ESP_FROM_PTR_EBP_(IMM32)` | `mov esp, dword ptr [ebp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 3 + 4 (7)          |
| `MOV_ESP_FROM_PTR_ESP_(IMM32)` | `mov esp, dword ptr [esp + imm32]` | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESP_FROM_PTR_BP_(IMM16)`  | `mov esp, dword ptr [bp + imm16]`  | ⚠️       | ✅       | ❌       | ---                | 3 + 2 (5)          | ---                |
| `MOV_SP_FROM_PTR_RBP_(IMM32)`  | `mov sp, word ptr [rbp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_SP_FROM_PTR_RSP_(IMM32)`  | `mov sp, word ptr [rsp + imm32]`   | ⚠️       | ⚠️       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SP_FROM_PTR_EBP_(IMM32)`  | `mov sp, word ptr [ebp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_SP_FROM_PTR_ESP_(IMM32)`  | `mov sp, word ptr [esp + imm32]`   | ⚠️       | ✅       | ✅       | ---                | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SP_FROM_PTR_BP_(IMM16)`   | `mov sp, word ptr [bp + imm16]`    | ✅       | ✅       | ❌       | 2 + 2 (4)          | 4 + 2 (6)          | ---                |
| `MOV_SPL_FROM_PTR_RBP_(IMM32)` | `mov spl, byte ptr [rbp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 3 + 4 (7)          |
| `MOV_SPL_FROM_PTR_RSP_(IMM32)` | `mov spl, byte ptr [rsp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SPL_FROM_PTR_EBP_(IMM32)` | `mov spl, byte ptr [ebp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 4 + 4 (8)          |
| `MOV_SPL_FROM_PTR_ESP_(IMM32)` | `mov spl, byte ptr [esp + imm32]`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |

#### Segments `INCL_CMT_ASM_MOV_PTR_SEGMENT`

| **Macro**                      | **Intel Syntax**               | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ------------------------------ | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `MOV_AL_FROM_PTR_FS_(?)`       | `mov al, byte ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 2 + 4 (6)          | 4 + 4 (8)          |
| `MOV_BL_FROM_PTR_FS_(?)`       | `mov bl, byte ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CL_FROM_PTR_FS_(?)`       | `mov cl, byte ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DL_FROM_PTR_FS_(?)`       | `mov dl, byte ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_SIL_FROM_PTR_FS_(IMM32)`  | `mov sil, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_DIL_FROM_PTR_FS_(IMM32)`  | `mov dil, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_BPL_FROM_PTR_FS_(IMM32)`  | `mov bpl, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_SPL_FROM_PTR_FS_(IMM32)`  | `mov spl, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R8B_FROM_PTR_FS_(IMM32)`  | `mov r8b, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9B_FROM_PTR_FS_(IMM32)`  | `mov r9b, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10B_FROM_PTR_FS_(IMM32)` | `mov r10b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11B_FROM_PTR_FS_(IMM32)` | `mov r11b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12B_FROM_PTR_FS_(IMM32)` | `mov r12b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13B_FROM_PTR_FS_(IMM32)` | `mov r13b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14B_FROM_PTR_FS_(IMM32)` | `mov r14b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15B_FROM_PTR_FS_(IMM32)` | `mov r15b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_AX_FROM_PTR_FS_(?)`       | `mov ax, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 5 + 4 (9)          |
| `MOV_BX_FROM_PTR_FS_(?)`       | `mov bx, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_CX_FROM_PTR_FS_(?)`       | `mov cx, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DX_FROM_PTR_FS_(?)`       | `mov dx, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SI_FROM_PTR_FS_(?)`       | `mov si, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DI_FROM_PTR_FS_(?)`       | `mov di, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_BP_FROM_PTR_FS_(?)`       | `mov bp, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SP_FROM_PTR_FS_(?)`       | `mov sp, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_R8W_FROM_PTR_FS_(IMM32)`  | `mov r8w, word ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R9W_FROM_PTR_FS_(IMM32)`  | `mov r9w, word ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R10W_FROM_PTR_FS_(IMM32)` | `mov r10w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R11W_FROM_PTR_FS_(IMM32)` | `mov r11w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R12W_FROM_PTR_FS_(IMM32)` | `mov r12w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R13W_FROM_PTR_FS_(IMM32)` | `mov r13w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R14W_FROM_PTR_FS_(IMM32)` | `mov r14w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R15W_FROM_PTR_FS_(IMM32)` | `mov r15w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_EAX_FROM_PTR_FS_(IMM32)`  | `mov eax, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 4 + 4 (8)          |
| `MOV_EBX_FROM_PTR_FS_(IMM32)`  | `mov ebx, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ECX_FROM_PTR_FS_(IMM32)`  | `mov ecx, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDX_FROM_PTR_FS_(IMM32)`  | `mov edx, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESI_FROM_PTR_FS_(IMM32)`  | `mov esi, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDI_FROM_PTR_FS_(IMM32)`  | `mov edi, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EBP_FROM_PTR_FS_(IMM32)`  | `mov ebp, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESP_FROM_PTR_FS_(IMM32)`  | `mov esp, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_R8D_FROM_PTR_FS_(IMM32)`  | `mov r8d, dword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9D_FROM_PTR_FS_(IMM32)`  | `mov r9d, dword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10D_FROM_PTR_FS_(IMM32)` | `mov r10d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11D_FROM_PTR_FS_(IMM32)` | `mov r11d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12D_FROM_PTR_FS_(IMM32)` | `mov r12d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13D_FROM_PTR_FS_(IMM32)` | `mov r13d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14D_FROM_PTR_FS_(IMM32)` | `mov r14d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15D_FROM_PTR_FS_(IMM32)` | `mov r15d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RAX_FROM_PTR_FS_(IMM32)`  | `mov rax, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBX_FROM_PTR_FS_(IMM32)`  | `mov rbx, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RCX_FROM_PTR_FS_(IMM32)`  | `mov rcx, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDX_FROM_PTR_FS_(IMM32)`  | `mov rdx, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSI_FROM_PTR_FS_(IMM32)`  | `mov rsi, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDI_FROM_PTR_FS_(IMM32)`  | `mov rdi, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBP_FROM_PTR_FS_(IMM32)`  | `mov rbp, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSP_FROM_PTR_FS_(IMM32)`  | `mov rsp, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R8_FROM_PTR_FS_(IMM32)`   | `mov r8, qword ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9_FROM_PTR_FS_(IMM32)`   | `mov r9, qword ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10_FROM_PTR_FS_(IMM32)`  | `mov r10, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11_FROM_PTR_FS_(IMM32)`  | `mov r11, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12_FROM_PTR_FS_(IMM32)`  | `mov r12, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13_FROM_PTR_FS_(IMM32)`  | `mov r13, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14_FROM_PTR_FS_(IMM32)`  | `mov r14, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15_FROM_PTR_FS_(IMM32)`  | `mov r15, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_AL_TO_PTR_FS_(?)`         | `mov al, byte ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 2 + 4 (6)          | 4 + 4 (8)          |
| `MOV_BL_TO_PTR_FS_(?)`         | `mov bl, byte ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CL_TO_PTR_FS_(?)`         | `mov cl, byte ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DL_TO_PTR_FS_(?)`         | `mov dl, byte ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_SIL_TO_PTR_FS_(IMM32)`    | `mov sil, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_DIL_TO_PTR_FS_(IMM32)`    | `mov dil, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_BPL_TO_PTR_FS_(IMM32)`    | `mov bpl, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_SPL_TO_PTR_FS_(IMM32)`    | `mov spl, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R8B_TO_PTR_FS_(IMM32)`    | `mov r8b, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9B_TO_PTR_FS_(IMM32)`    | `mov r9b, byte ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10B_TO_PTR_FS_(IMM32)`   | `mov r10b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11B_TO_PTR_FS_(IMM32)`   | `mov r11b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12B_TO_PTR_FS_(IMM32)`   | `mov r12b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13B_TO_PTR_FS_(IMM32)`   | `mov r13b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14B_TO_PTR_FS_(IMM32)`   | `mov r14b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15B_TO_PTR_FS_(IMM32)`   | `mov r15b, byte ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_AX_TO_PTR_FS_(?)`         | `mov ax, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 5 + 4 (9)          |
| `MOV_BX_TO_PTR_FS_(?)`         | `mov bx, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_CX_TO_PTR_FS_(?)`         | `mov cx, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DX_TO_PTR_FS_(?)`         | `mov dx, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SI_TO_PTR_FS_(?)`         | `mov si, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DI_TO_PTR_FS_(?)`         | `mov di, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_BP_TO_PTR_FS_(?)`         | `mov bp, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SP_TO_PTR_FS_(?)`         | `mov sp, word ptr fs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_R8W_TO_PTR_FS_(IMM32)`    | `mov r8w, word ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R9W_TO_PTR_FS_(IMM32)`    | `mov r9w, word ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R10W_TO_PTR_FS_(IMM32)`   | `mov r10w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R11W_TO_PTR_FS_(IMM32)`   | `mov r11w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R12W_TO_PTR_FS_(IMM32)`   | `mov r12w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R13W_TO_PTR_FS_(IMM32)`   | `mov r13w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R14W_TO_PTR_FS_(IMM32)`   | `mov r14w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R15W_TO_PTR_FS_(IMM32)`   | `mov r15w, word ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_EAX_TO_PTR_FS_(IMM32)`    | `mov eax, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 4 + 4 (8)          |
| `MOV_EBX_TO_PTR_FS_(IMM32)`    | `mov ebx, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ECX_TO_PTR_FS_(IMM32)`    | `mov ecx, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDX_TO_PTR_FS_(IMM32)`    | `mov edx, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESI_TO_PTR_FS_(IMM32)`    | `mov esi, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDI_TO_PTR_FS_(IMM32)`    | `mov edi, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EBP_TO_PTR_FS_(IMM32)`    | `mov ebp, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESP_TO_PTR_FS_(IMM32)`    | `mov esp, dword ptr fs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_R8D_TO_PTR_FS_(IMM32)`    | `mov r8d, dword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9D_TO_PTR_FS_(IMM32)`    | `mov r9d, dword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10D_TO_PTR_FS_(IMM32)`   | `mov r10d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11D_TO_PTR_FS_(IMM32)`   | `mov r11d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12D_TO_PTR_FS_(IMM32)`   | `mov r12d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13D_TO_PTR_FS_(IMM32)`   | `mov r13d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14D_TO_PTR_FS_(IMM32)`   | `mov r14d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15D_TO_PTR_FS_(IMM32)`   | `mov r15d, dword ptr fs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RAX_TO_PTR_FS_(IMM32)`    | `mov rax, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBX_TO_PTR_FS_(IMM32)`    | `mov rbx, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RCX_TO_PTR_FS_(IMM32)`    | `mov rcx, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDX_TO_PTR_FS_(IMM32)`    | `mov rdx, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSI_TO_PTR_FS_(IMM32)`    | `mov rsi, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDI_TO_PTR_FS_(IMM32)`    | `mov rdi, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBP_TO_PTR_FS_(IMM32)`    | `mov rbp, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSP_TO_PTR_FS_(IMM32)`    | `mov rsp, qword ptr fs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R8_TO_PTR_FS_(IMM32)`     | `mov r8, qword ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9_TO_PTR_FS_(IMM32)`     | `mov r9, qword ptr fs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10_TO_PTR_FS_(IMM32)`    | `mov r10, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11_TO_PTR_FS_(IMM32)`    | `mov r11, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12_TO_PTR_FS_(IMM32)`    | `mov r12, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13_TO_PTR_FS_(IMM32)`    | `mov r13, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14_TO_PTR_FS_(IMM32)`    | `mov r14, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15_TO_PTR_FS_(IMM32)`    | `mov r15, qword ptr fs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_EAX_FROM_PTR_FS_EAX`      | `mov eax, dword ptr fs:[eax]`  | ⚠️       | ✅       | ✅       | ---                | (3)                | (4)                |
| `MOV_AL_FROM_PTR_GS_(?)`       | `mov al, byte ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 2 + 4 (6)          | 4 + 4 (8)          |
| `MOV_BL_FROM_PTR_GS_(?)`       | `mov bl, byte ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CL_FROM_PTR_GS_(?)`       | `mov cl, byte ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DL_FROM_PTR_GS_(?)`       | `mov dl, byte ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_SIL_FROM_PTR_GS_(IMM32)`  | `mov sil, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_DIL_FROM_PTR_GS_(IMM32)`  | `mov dil, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_BPL_FROM_PTR_GS_(IMM32)`  | `mov bpl, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_SPL_FROM_PTR_GS_(IMM32)`  | `mov spl, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R8B_FROM_PTR_GS_(IMM32)`  | `mov r8b, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9B_FROM_PTR_GS_(IMM32)`  | `mov r9b, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10B_FROM_PTR_GS_(IMM32)` | `mov r10b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11B_FROM_PTR_GS_(IMM32)` | `mov r11b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12B_FROM_PTR_GS_(IMM32)` | `mov r12b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13B_FROM_PTR_GS_(IMM32)` | `mov r13b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14B_FROM_PTR_GS_(IMM32)` | `mov r14b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15B_FROM_PTR_GS_(IMM32)` | `mov r15b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_AX_FROM_PTR_GS_(?)`       | `mov ax, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 5 + 4 (9)          |
| `MOV_BX_FROM_PTR_GS_(?)`       | `mov bx, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_CX_FROM_PTR_GS_(?)`       | `mov cx, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DX_FROM_PTR_GS_(?)`       | `mov dx, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SI_FROM_PTR_GS_(?)`       | `mov si, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DI_FROM_PTR_GS_(?)`       | `mov di, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_BP_FROM_PTR_GS_(?)`       | `mov bp, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SP_FROM_PTR_GS_(?)`       | `mov sp, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_R8W_FROM_PTR_GS_(IMM32)`  | `mov r8w, word ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R9W_FROM_PTR_GS_(IMM32)`  | `mov r9w, word ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R10W_FROM_PTR_GS_(IMM32)` | `mov r10w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R11W_FROM_PTR_GS_(IMM32)` | `mov r11w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R12W_FROM_PTR_GS_(IMM32)` | `mov r12w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R13W_FROM_PTR_GS_(IMM32)` | `mov r13w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R14W_FROM_PTR_GS_(IMM32)` | `mov r14w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R15W_FROM_PTR_GS_(IMM32)` | `mov r15w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_EAX_FROM_PTR_GS_(IMM32)`  | `mov eax, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 4 + 4 (8)          |
| `MOV_EBX_FROM_PTR_GS_(IMM32)`  | `mov ebx, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ECX_FROM_PTR_GS_(IMM32)`  | `mov ecx, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDX_FROM_PTR_GS_(IMM32)`  | `mov edx, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESI_FROM_PTR_GS_(IMM32)`  | `mov esi, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDI_FROM_PTR_GS_(IMM32)`  | `mov edi, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EBP_FROM_PTR_GS_(IMM32)`  | `mov ebp, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESP_FROM_PTR_GS_(IMM32)`  | `mov esp, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_R8D_FROM_PTR_GS_(IMM32)`  | `mov r8d, dword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9D_FROM_PTR_GS_(IMM32)`  | `mov r9d, dword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10D_FROM_PTR_GS_(IMM32)` | `mov r10d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11D_FROM_PTR_GS_(IMM32)` | `mov r11d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12D_FROM_PTR_GS_(IMM32)` | `mov r12d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13D_FROM_PTR_GS_(IMM32)` | `mov r13d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14D_FROM_PTR_GS_(IMM32)` | `mov r14d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15D_FROM_PTR_GS_(IMM32)` | `mov r15d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RAX_FROM_PTR_GS_(IMM32)`  | `mov rax, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBX_FROM_PTR_GS_(IMM32)`  | `mov rbx, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RCX_FROM_PTR_GS_(IMM32)`  | `mov rcx, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDX_FROM_PTR_GS_(IMM32)`  | `mov rdx, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSI_FROM_PTR_GS_(IMM32)`  | `mov rsi, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDI_FROM_PTR_GS_(IMM32)`  | `mov rdi, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBP_FROM_PTR_GS_(IMM32)`  | `mov rbp, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSP_FROM_PTR_GS_(IMM32)`  | `mov rsp, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R8_FROM_PTR_GS_(IMM32)`   | `mov r8, qword ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9_FROM_PTR_GS_(IMM32)`   | `mov r9, qword ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10_FROM_PTR_GS_(IMM32)`  | `mov r10, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11_FROM_PTR_GS_(IMM32)`  | `mov r11, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12_FROM_PTR_GS_(IMM32)`  | `mov r12, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13_FROM_PTR_GS_(IMM32)`  | `mov r13, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14_FROM_PTR_GS_(IMM32)`  | `mov r14, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15_FROM_PTR_GS_(IMM32)`  | `mov r15, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_AL_TO_PTR_GS_(?)`         | `mov al, byte ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 2 + 4 (6)          | 4 + 4 (8)          |
| `MOV_BL_TO_PTR_GS_(?)`         | `mov bl, byte ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_CL_TO_PTR_GS_(?)`         | `mov cl, byte ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_DL_TO_PTR_GS_(?)`         | `mov dl, byte ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_SIL_TO_PTR_GS_(IMM32)`    | `mov sil, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_DIL_TO_PTR_GS_(IMM32)`    | `mov dil, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_BPL_TO_PTR_GS_(IMM32)`    | `mov bpl, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_SPL_TO_PTR_GS_(IMM32)`    | `mov spl, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R8B_TO_PTR_GS_(IMM32)`    | `mov r8b, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9B_TO_PTR_GS_(IMM32)`    | `mov r9b, byte ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10B_TO_PTR_GS_(IMM32)`   | `mov r10b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11B_TO_PTR_GS_(IMM32)`   | `mov r11b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12B_TO_PTR_GS_(IMM32)`   | `mov r12b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13B_TO_PTR_GS_(IMM32)`   | `mov r13b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14B_TO_PTR_GS_(IMM32)`   | `mov r14b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15B_TO_PTR_GS_(IMM32)`   | `mov r15b, byte ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_AX_TO_PTR_GS_(?)`         | `mov ax, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 2 + 2 (4)          | 3 + 4 (7)          | 5 + 4 (9)          |
| `MOV_BX_TO_PTR_GS_(?)`         | `mov bx, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_CX_TO_PTR_GS_(?)`         | `mov cx, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DX_TO_PTR_GS_(?)`         | `mov dx, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SI_TO_PTR_GS_(?)`         | `mov si, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_DI_TO_PTR_GS_(?)`         | `mov di, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_BP_TO_PTR_GS_(?)`         | `mov bp, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_SP_TO_PTR_GS_(?)`         | `mov sp, word ptr gs:?`        | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 3 + 2 (5)          | 4 + 4 (8)          | 5 + 4 (9)          |
| `MOV_R8W_TO_PTR_GS_(IMM32)`    | `mov r8w, word ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R9W_TO_PTR_GS_(IMM32)`    | `mov r9w, word ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R10W_TO_PTR_GS_(IMM32)`   | `mov r10w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R11W_TO_PTR_GS_(IMM32)`   | `mov r11w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R12W_TO_PTR_GS_(IMM32)`   | `mov r12w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R13W_TO_PTR_GS_(IMM32)`   | `mov r13w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R14W_TO_PTR_GS_(IMM32)`   | `mov r14w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_R15W_TO_PTR_GS_(IMM32)`   | `mov r15w, word ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 6 + 4 (10)         |
| `MOV_EAX_TO_PTR_GS_(IMM32)`    | `mov eax, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 2 + 4 (6)          | 4 + 4 (8)          |
| `MOV_EBX_TO_PTR_GS_(IMM32)`    | `mov ebx, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ECX_TO_PTR_GS_(IMM32)`    | `mov ecx, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDX_TO_PTR_GS_(IMM32)`    | `mov edx, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESI_TO_PTR_GS_(IMM32)`    | `mov esi, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EDI_TO_PTR_GS_(IMM32)`    | `mov edi, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_EBP_TO_PTR_GS_(IMM32)`    | `mov ebp, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_ESP_TO_PTR_GS_(IMM32)`    | `mov esp, dword ptr gs:imm32`  | ⚠️       | ✅       | ✅       | ---                | 3 + 4 (7)          | 4 + 4 (8)          |
| `MOV_R8D_TO_PTR_GS_(IMM32)`    | `mov r8d, dword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9D_TO_PTR_GS_(IMM32)`    | `mov r9d, dword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10D_TO_PTR_GS_(IMM32)`   | `mov r10d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11D_TO_PTR_GS_(IMM32)`   | `mov r11d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12D_TO_PTR_GS_(IMM32)`   | `mov r12d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13D_TO_PTR_GS_(IMM32)`   | `mov r13d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14D_TO_PTR_GS_(IMM32)`   | `mov r14d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15D_TO_PTR_GS_(IMM32)`   | `mov r15d, dword ptr gs:imm32` | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RAX_TO_PTR_GS_(IMM32)`    | `mov rax, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBX_TO_PTR_GS_(IMM32)`    | `mov rbx, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RCX_TO_PTR_GS_(IMM32)`    | `mov rcx, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDX_TO_PTR_GS_(IMM32)`    | `mov rdx, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSI_TO_PTR_GS_(IMM32)`    | `mov rsi, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RDI_TO_PTR_GS_(IMM32)`    | `mov rdi, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RBP_TO_PTR_GS_(IMM32)`    | `mov rbp, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RSP_TO_PTR_GS_(IMM32)`    | `mov rsp, qword ptr gs:imm32`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R8_TO_PTR_GS_(IMM32)`     | `mov r8, qword ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R9_TO_PTR_GS_(IMM32)`     | `mov r9, qword ptr gs:imm32`   | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R10_TO_PTR_GS_(IMM32)`    | `mov r10, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R11_TO_PTR_GS_(IMM32)`    | `mov r11, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R12_TO_PTR_GS_(IMM32)`    | `mov r12, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R13_TO_PTR_GS_(IMM32)`    | `mov r13, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R14_TO_PTR_GS_(IMM32)`    | `mov r14, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_R15_TO_PTR_GS_(IMM32)`    | `mov r15, qword ptr gs:imm32`  | ❌       | ❌       | ✅       | ---                | ---                | 5 + 4 (9)          |
| `MOV_RAX_FROM_PTR_GS_RCX`      | `mov rax, qword ptr gs:[rcx]`  | ⚠️       | ⚠️       | ✅       | ---                | ---                | (4)                |

#### ABI Specific `INCL_CMT_ASM_MOV_ABI`

See `ENVIRONMENTS/ABI.H` to determine what `ARG$` expands to if you want.

`ARG$` refers to argument placeholders, typically `ARG1` through `ARG9`.

| **Macro**       | **16-BIT** | **32-BIT** | **64-BIT** |
| --------------- | ---------- | ---------- | ---------- |
| `MOV_AL_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_BL_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_CL_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_DL_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_SIL_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_DIL_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_BPL_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_SPL_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R8B_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R9B_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R10B_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R11B_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R12B_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R13B_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R14B_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R15B_ARG$` | ❌       | ❌       | ✅       |
| `MOV_ARG$_AL`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_BL`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_CL`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_DL`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_SIL`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_DIL`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_BPL`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_SPL`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R8B`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R9B`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R10B` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R11B` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R12B` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R13B` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R14B` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R15B` | ❌       | ❌       | ✅       |
| `MOV_AX_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_BX_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_CX_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_DX_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_SI_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_DI_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_BP_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_SP_ARG$`   | ✅       | ✅       | ✅       |
| `MOV_R8W_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R9W_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R10W_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R11W_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R12W_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R13W_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R14W_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R15W_ARG$` | ❌       | ❌       | ✅       |
| `MOV_ARG$_AX`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_BX`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_CX`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_DX`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_SI`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_DI`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_BP`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_SP`   | ✅       | ✅       | ✅       |
| `MOV_ARG$_R8W`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R9W`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R10W` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R11W` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R12W` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R13W` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R14W` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R15W` | ❌       | ❌       | ✅       |
| `MOV_EAX_ARG$`  | ⚠️       | ✅       | ✅       |
| `MOV_EBX_ARG$`  | ⚠️       | ✅       | ✅       |
| `MOV_ECX_ARG$`  | ⚠️       | ✅       | ✅       |
| `MOV_EDX_ARG$`  | ⚠️       | ✅       | ✅       |
| `MOV_ESI_ARG$`  | ⚠️       | ✅       | ✅       |
| `MOV_EDI_ARG$`  | ⚠️       | ✅       | ✅       |
| `MOV_EBP_ARG$`  | ⚠️       | ✅       | ✅       |
| `MOV_ESP_ARG$`  | ⚠️       | ✅       | ✅       |
| `MOV_R8D_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R9D_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R10D_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R11D_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R12D_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R13D_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R14D_ARG$` | ❌       | ❌       | ✅       |
| `MOV_R15D_ARG$` | ❌       | ❌       | ✅       |
| `MOV_ARG$_EAX`  | ⚠️       | ✅       | ✅       |
| `MOV_ARG$_EBX`  | ⚠️       | ✅       | ✅       |
| `MOV_ARG$_ECX`  | ⚠️       | ✅       | ✅       |
| `MOV_ARG$_EDX`  | ⚠️       | ✅       | ✅       |
| `MOV_ARG$_ESI`  | ⚠️       | ✅       | ✅       |
| `MOV_ARG$_EDI`  | ⚠️       | ✅       | ✅       |
| `MOV_ARG$_EBP`  | ⚠️       | ✅       | ✅       |
| `MOV_ARG$_ESP`  | ⚠️       | ✅       | ✅       |
| `MOV_ARG$_R8D`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R9D`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R10D` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R11D` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R12D` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R13D` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R14D` | ❌       | ❌       | ✅       |
| `MOV_ARG$_R15D` | ❌       | ❌       | ✅       |
| `MOV_RAX_ARG$`  | ⚠️       | ⚠️       | ✅       |
| `MOV_RBX_ARG$`  | ⚠️       | ⚠️       | ✅       |
| `MOV_RCX_ARG$`  | ⚠️       | ⚠️       | ✅       |
| `MOV_RDX_ARG$`  | ⚠️       | ⚠️       | ✅       |
| `MOV_RSI_ARG$`  | ⚠️       | ⚠️       | ✅       |
| `MOV_RDI_ARG$`  | ⚠️       | ⚠️       | ✅       |
| `MOV_RBP_ARG$`  | ⚠️       | ⚠️       | ✅       |
| `MOV_RSP_ARG$`  | ⚠️       | ⚠️       | ✅       |
| `MOV_R8_ARG$`   | ❌       | ❌       | ✅       |
| `MOV_R9_ARG$`   | ❌       | ❌       | ✅       |
| `MOV_R10_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R11_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R12_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R13_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R14_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_R15_ARG$`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_RAX`  | ⚠️       | ⚠️       | ✅       |
| `MOV_ARG$_RBX`  | ⚠️       | ⚠️       | ✅       |
| `MOV_ARG$_RCX`  | ⚠️       | ⚠️       | ✅       |
| `MOV_ARG$_RDX`  | ⚠️       | ⚠️       | ✅       |
| `MOV_ARG$_RSI`  | ⚠️       | ⚠️       | ✅       |
| `MOV_ARG$_RDI`  | ⚠️       | ⚠️       | ✅       |
| `MOV_ARG$_RBP`  | ⚠️       | ⚠️       | ✅       |
| `MOV_ARG$_RSP`  | ⚠️       | ⚠️       | ✅       |
| `MOV_ARG$_R8`   | ❌       | ❌       | ✅       |
| `MOV_ARG$_R9`   | ❌       | ❌       | ✅       |
| `MOV_ARG$_R10`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R11`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R12`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R13`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R14`  | ❌       | ❌       | ✅       |
| `MOV_ARG$_R15`  | ❌       | ❌       | ✅       |

----

### MOVABS `INCL_CMT_ASM_MOVABS`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `MOVABS_RAX_(IMM64)`           | `movabs rax, imm64`                | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_RBX_(IMM64)`           | `movabs rbx, imm64`                | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_RCX_(IMM64)`           | `movabs rcx, imm64`                | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_RDX_(IMM64)`           | `movabs rdx, imm64`                | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_RSI_(IMM64)`           | `movabs rsi, imm64`                | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_RDI_(IMM64)`           | `movabs rdi, imm64`                | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_RBP_(IMM64)`           | `movabs rbp, imm64`                | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_RSP_(IMM64)`           | `movabs rsp, imm64`                | ⚠️       | ⚠️       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_R8_(IMM64)`            | `movabs r8, imm64`                 | ❌       | ❌       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_R9_(IMM64)`            | `movabs r9, imm64`                 | ❌       | ❌       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_R10_(IMM64)`           | `movabs r10, imm64`                | ❌       | ❌       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_R11_(IMM64)`           | `movabs r11, imm64`                | ❌       | ❌       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_R12_(IMM64)`           | `movabs r12, imm64`                | ❌       | ❌       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_R13_(IMM64)`           | `movabs r13, imm64`                | ❌       | ❌       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_R14_(IMM64)`           | `movabs r14, imm64`                | ❌       | ❌       | ✅       | ---                | ---                | 2 + 8 (10)         |
| `MOVABS_R15_(IMM64)`           | `movabs r15, imm64`                | ❌       | ❌       | ✅       | ---                | ---                | 2 + 8 (10)         |

----

### PUSH `INCL_CMT_ASM_PUSH`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `PUSH_(?)`                     | `push ?`                           | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | 1 + 2 (3)          | 1 + 4 (5)          | 1 + 4 (5)          |
| `PUSH_RAX`                     | `push rax`                         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `PUSH_RBX`                     | `push rbx`                         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `PUSH_RCX`                     | `push rcx`                         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `PUSH_RDX`                     | `push rdx`                         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `PUSH_RSI`                     | `push rsi`                         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `PUSH_RDI`                     | `push rdi`                         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `PUSH_RBP`                     | `push rbp`                         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `PUSH_RSP`                     | `push rsp`                         | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `PUSH_R8`                      | `push r8`                          | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `PUSH_R9`                      | `push r9`                          | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `PUSH_R10`                     | `push r10`                         | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `PUSH_R11`                     | `push r11`                         | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `PUSH_R12`                     | `push r12`                         | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `PUSH_R13`                     | `push r13`                         | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `PUSH_R14`                     | `push r14`                         | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `PUSH_R15`                     | `push r15`                         | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `PUSH_EAX`                     | `push eax`                         | ⚠️       | ✅       | ❌       | ---                | (1)                | ---                |
| `PUSH_EBX`                     | `push ebx`                         | ⚠️       | ✅       | ❌       | ---                | (1)                | ---                |
| `PUSH_ECX`                     | `push ecx`                         | ⚠️       | ✅       | ❌       | ---                | (1)                | ---                |
| `PUSH_EDX`                     | `push edx`                         | ⚠️       | ✅       | ❌       | ---                | (1)                | ---                |
| `PUSH_ESI`                     | `push esi`                         | ⚠️       | ✅       | ❌       | ---                | ---                | (1)                |
| `PUSH_EDI`                     | `push edi`                         | ⚠️       | ✅       | ❌       | ---                | ---                | (1)                |
| `PUSH_EBP`                     | `push ebp`                         | ⚠️       | ✅       | ❌       | ---                | ---                | (1)                |
| `PUSH_ESP`                     | `push esp`                         | ⚠️       | ✅       | ❌       | ---                | ---                | (1)                |
| `PUSH_AX`                      | `push ax`                          | ✅       | ✅       | ✅       | (1)                | (2)                | (2)                |
| `PUSH_BX`                      | `push bx`                          | ✅       | ✅       | ✅       | (1)                | (2)                | (2)                |
| `PUSH_CX`                      | `push cx`                          | ✅       | ✅       | ✅       | (1)                | (2)                | (2)                |
| `PUSH_DX`                      | `push dx`                          | ✅       | ✅       | ✅       | (1)                | (2)                | (2)                |
| `PUSH_SI`                      | `push si`                          | ✅       | ✅       | ✅       | ---                | ---                | (1)                |
| `PUSH_DI`                      | `push di`                          | ✅       | ✅       | ✅       | ---                | ---                | (1)                |
| `PUSH_BP`                      | `push bp`                          | ✅       | ✅       | ✅       | ---                | ---                | (1)                |
| `PUSH_SP`                      | `push sp`                          | ✅       | ✅       | ✅       | ---                | ---                | (1)                |
| `PUSH_R8W`                     | `push r8w`                         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `PUSH_R9W`                     | `push r9w`                         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `PUSH_R10W`                    | `push r10w`                        | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `PUSH_R11W`                    | `push r11w`                        | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `PUSH_R12W`                    | `push r12w`                        | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `PUSH_R13W`                    | `push r13w`                        | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `PUSH_R14W`                    | `push r14w`                        | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `PUSH_R15W`                    | `push r15w`                        | ❌       | ❌       | ✅       | ---                | ---                | (3)                |

----

### POP `INCL_CMT_ASM_POP`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `POP_RAX`                      | `pop rax`                          | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `POP_RBX`                      | `pop rbx`                          | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `POP_RCX`                      | `pop rcx`                          | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `POP_RDX`                      | `pop rdx`                          | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `POP_RSI`                      | `pop rsi`                          | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `POP_RDI`                      | `pop rdi`                          | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `POP_RBP`                      | `pop rbp`                          | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `POP_RSP`                      | `pop rsp`                          | ⚠️       | ⚠️       | ✅       | ---                | ---                | (1)                |
| `POP_R8`                       | `pop r8`                           | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `POP_R9`                       | `pop r9`                           | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `POP_R10`                      | `pop r10`                          | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `POP_R11`                      | `pop r11`                          | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `POP_R12`                      | `pop r12`                          | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `POP_R13`                      | `pop r13`                          | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `POP_R14`                      | `pop r14`                          | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `POP_R15`                      | `pop r15`                          | ❌       | ❌       | ✅       | ---                | ---                | (2)                |
| `POP_EAX`                      | `pop eax`                          | ⚠️       | ✅       | ❌       | ---                | (1)                | ---                |
| `POP_EBX`                      | `pop ebx`                          | ⚠️       | ✅       | ❌       | ---                | (1)                | ---                |
| `POP_ECX`                      | `pop ecx`                          | ⚠️       | ✅       | ❌       | ---                | (1)                | ---                |
| `POP_EDX`                      | `pop edx`                          | ⚠️       | ✅       | ❌       | ---                | (1)                | ---                |
| `POP_ESI`                      | `pop esi`                          | ⚠️       | ✅       | ❌       | ---                | ---                | (1)                |
| `POP_EDI`                      | `pop edi`                          | ⚠️       | ✅       | ❌       | ---                | ---                | (1)                |
| `POP_EBP`                      | `pop ebp`                          | ⚠️       | ✅       | ❌       | ---                | ---                | (1)                |
| `POP_ESP`                      | `pop esp`                          | ⚠️       | ✅       | ❌       | ---                | ---                | (1)                |
| `POP_AX`                       | `pop ax`                           | ✅       | ✅       | ✅       | (1)                | (2)                | (2)                |
| `POP_BX`                       | `pop bx`                           | ✅       | ✅       | ✅       | (1)                | (2)                | (2)                |
| `POP_CX`                       | `pop cx`                           | ✅       | ✅       | ✅       | (1)                | (2)                | (2)                |
| `POP_DX`                       | `pop dx`                           | ✅       | ✅       | ✅       | (1)                | (2)                | (2)                |
| `POP_SI`                       | `pop si`                           | ✅       | ✅       | ✅       | ---                | ---                | (1)                |
| `POP_DI`                       | `pop di`                           | ✅       | ✅       | ✅       | ---                | ---                | (1)                |
| `POP_BP`                       | `pop bp`                           | ✅       | ✅       | ✅       | ---                | ---                | (1)                |
| `POP_SP`                       | `pop sp`                           | ✅       | ✅       | ✅       | ---                | ---                | (1)                |
| `POP_R8W`                      | `pop r8w`                          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `POP_R9W`                      | `pop r9w`                          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `POP_R10W`                     | `pop r10w`                         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `POP_R11W`                     | `pop r11w`                         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `POP_R12W`                     | `pop r12w`                         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `POP_R13W`                     | `pop r13w`                         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `POP_R14W`                     | `pop r14w`                         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `POP_R15W`                     | `pop r15w`                         | ❌       | ❌       | ✅       | ---                | ---                | (3)                |

----

### OTHERS `INCL_CMT_ASM_OTHERS`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `CPUID`                        | `cpuid`                            | 💥 CRASH | ✅       | ✅       | (2)                | (2)                | (2)                |
| `INT_(IMM8)`                   | `int IMM8`                         | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `RET`                          | `ret`                              | ✅       | ✅       | ✅       | (2)                | (1)                | (1)                |

</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ARM_ASM.gif">
	<b>ARM32 (1 Assembly Code in total)</b>
</summary>

| **Macro**     | **Unified Assembly Syntax (UAS)** | **OP-Size** |
| ------------- | --------------------------------- | ----------- |
| `MRC_R0_MIDR` | `mrc p15, 0, r0, c0, c0, 0`       | (4)         |

</details>

<details>
<summary>
	<img src="IMAGES/32/ARM_ASM.gif">
	<b>ARM64 (3 Assembly Codes in total)</b>
</summary>

| **Macro**         | **Unified Assembly Syntax (UAS)**  | **OP-Size** |
| ----------------- | ---------------------------------- | ----------- |
| `MOV_X0_X17`      | `mov x0, x17`                      | (4)         |
| `MOV_X17_X0`      | `mov x17, x0`                      | (4)         |
| `MRS_X0_MIDR_EL1` | `mrs x0, midr_el1`                 | (4)         |

</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/POWERPC_ASM.gif">
	<b>PowerPC (2 Assembly Codes in total)</b>
</summary>

### MFSPR

| **Macro**      | **Unified Assembly Syntax (UAS)**  | **OP-Size** |
| -------------- | ---------------------------------- | ----------- |
| `MFSPR_R3_287` | `mfspr 3, 287`                     | (4)         |

----

### OTHERS

| **Macro** | **Unified Assembly Syntax (UAS)**  | **OP-Size** |
| --------- | ---------------------------------- | ----------- |
| `BLR`     | `blr`                              | (4)         |

</details>

----

## Examples

```c
SECTION(void *, random_example, ())
	MOV_RAX_RBX // mov rax, rbx
	ADD_RAX_(1) // add rax, 1
	RET         // ret
END
```
Example - Byte Copy Routine
```c
SECTION(int, is_zero, (int x))
	XOR_EAX_EAX  // xor eax, eax
	TEST_EDI_EDI // test edi, edi
	SETE_AL      // sete al
	RET          // ret
END
```
```c
SECTION(int, add_with_temp, (int a, int b))
SECTION_KNR(int, add_with_temp, (a, b) int a; int b;)
	PUSH_RBX    // push rbx
	MOV_EBX_EDI // mov ebx, edi
	ADD_EBX_ESI // add ebx, esi
	MOV_EAX_EBX // mov eax, ebx
	POP_RBX     // pop ebx
	RET         // ret
END
```
```c
SECTION (int, return_42, ())
	MOV_EAX_(42) // mov eax, 42
	RET          // ret
END
```
```c
SECTION (void, jump, (void *jump_address))
	MOV_RAX_ARG1 // mov rax, (first_argument) (Cross OS & ABI)
	JMP_RAX      // jmp rax
END
```
Or if you just need OP codes:
```c
char			__OP__[SIZEOF_MOV_RAX_RBX + SIZEOF_ADD_RAX_ + SIZEOF_RET];
register int	INDEX = 0;

_MOV_RAX_RBX
_ADD_RAX_(1)
_RET

void *(*func)() = MEM_EXECUTABLE_ALLOC(__OP__, INDEX);

func();

MEM_EXECUTABLE_FREE(func);
```

```c
#define INCL_CMT_ASM_CMP
#define INCL_CMT_ASM_JE
#define INCL_CMT_ASM_JMP
#define INCL_CMT_ASM_MOV
#define INCL_CMT_ASM_SIZEOF
#define INCL_CMT_ASM_INLINE
#include <CMT/ASM.H>

SECTION (void, test, (int input))
	CMP_ARG1_(1)                             // cmp (first_argument) (Cross OS & ABI), 1
	JE_SHORT_(SIZEOF_MOV_RAX_ + SIZEOF_JMP_) // je layer_50
	MOV_RAX_(42)                             // mov rax, 42
	JMP_SHORT_(SIZEOF_MOV_RAX_)              // jmp layer_end
	// layer_50:                             // layer_50:
	MOV_RAX_(50)                             // mov rax, 50
	// layer_end:                            // layer_end:
	RET                                      // ret
END
```

## References

 - [Online x86 / x64 Assembler and Disassembler (Actually, GCC but I used this tool) - defuse.ca](https://defuse.ca/online-x86-assembler.htm)
 - [Assembly Toolkit (I used this tool) - malware-decoded.github.io](https://malware-decoded.github.io/asm-toolkit/)
 - [List of Intel x86 OP Codes - ref.x86asm.net](http://ref.x86asm.net/coder32.html)
 - [List of Intel x64 OP Codes - ref.x86asm.net](http://ref.x86asm.net/coder32.html)
 - [x86 Assembly Guide - cs.virginia.edu](https://www.cs.virginia.edu/~evans/cs216/guides/x86.html)
 - [List of x86 instructions - wikipedia.org](https://en.wikipedia.org/wiki/List_of_x86_instructions)
 - [Using Assembly Language with C - gcc.gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Using-Assembly-Language-with-C.html)
 - [MSC Inline Assembler C - microsoft.com](https://learn.microsoft.com/en-us/cpp/c-language/inline-assembler-c)
 - [IBM XL C/C++ Inline Assembly - ibm.com](https://www.ibm.com/docs/en/xl-c-and-cpp-aix/16.1.0?topic=statements-examples-inline-assembly)
 - [ARM Instruction Set](https://iitd-plos.github.io/col718/ref/arm-instructionset.pdf)
 - [PowerPC Full Beginner's Assembly Tutorial - mariokartwii.com](https://mariokartwii.com/ppc/)
 - [Appendix F PowerPC® instructions - ibm.com](https://www.ibm.com/docs/vi/aix/7.1.0?topic=reference-appendix-f-powerpc-instructions)
 - [PowerPC Assembly Cheatsheet - nsmbu.net](https://zenith.nsmbu.net/wiki/Custom_Code/PowerPC_Assembly_Cheatsheet)
