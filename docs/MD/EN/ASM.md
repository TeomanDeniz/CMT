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
	<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/INTEL_ASM.gif">
	<b>Intel (12920 Assembly Codes in total)</b>
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

#### [Go to the list of Intel Commands](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/TXT/ASM/INTEL.txt)

</details>

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ARM_ASM.gif) **ARM32 (1 Assembly Code in total)**](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/TXT/ASM/ARM32.txt)

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ARM_ASM.gif) **ARM64 (3 Assembly Code in total)**](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/TXT/ASM/ARM64.txt)

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/POWERPC_ASM.gif) **PowerPC (2 Assembly Code in total)**](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/TXT/ASM/POWERPC.txt)

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
