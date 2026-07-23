
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/refs/heads/main/images/repo_projects/libcmt/HEADER3.png" ALT="Header" STYLE="WIDTH: 100%;"/>

**CMT (C Maximum Tension)** is a header-only systems programming library for C that pushes the language far beyond its conventional limits without sacrificing portability or performance. It introduces a unified runtime layer that enhances ergonomics, abstraction, and developer control while staying compatible with both ANSI and K&R C.

The library is built around low-level mechanisms rather than syntactic tricks, enabling natural and efficient usage patterns that integrate directly with the compiler, ABI, and architecture. It avoids hidden globals, minimizes overhead, and leverages register-level behavior and inline assembly to deliver predictable, high-performance execution across platforms.

CMT also provides a structured meta-layer over assembly, bridging differences between architectures, compilers, and calling conventions. It includes feature detection, environment introspection, and compatibility layers that allow code to adapt at compile-time and runtime to the exact system it is targeting.

Designed with longevity in mind, the project maintains support for legacy systems and toolchains while scaling up to modern environments. It emphasizes consistency across platforms, modular expansion, and deep control over system resources-from CPU instructions to OS-level APIs.

The repository includes multiple documentation formats, test matrices across compilers and architectures, and a stripped release variant optimized for minimal footprint.

---

## Clone

For a minimal, stripped build (no documentation or comments), download the latest release from **[Releases](https://github.com/TeomanDeniz/CMT/releases)** area.

For the full source (including documentation), clone the repository:

```sh
git clone --depth 1 "git@github.com:TeomanDeniz/CMT.git"
```

`--depth 1` clones only the latest snapshot and skips full history.

### Optional (if you want to be stricter)

Add SSH as alternative, not default:

#### HTTPS (recommended)

```sh
git clone --depth 1 "https://github.com/TeomanDeniz/CMT.git"
```

#### SSH (if configured)

```sh
git clone --depth 1 "git@github.com:TeomanDeniz/CMT.git"
```

---

## Usage

Place the `CMT` directory inside your project and include the main header:

```c
#include "CMT/CMT.H"
```

CMT is **header-only**.

No build system changes or linking steps are required.

But since it is a heavy macro library, it might slow the compiling process if you try to include everything while compiling your project. So, **Modular Include** is highly recommended.
 
### Include Everything (Might be slow)

```c
#include "CMT/CMT.H"   // C
// or
#include "CMT/CMT.HPP" // C++
```

This does not include modules such as `PNG`, `MAP`, `SERVER`, etc., which depend on the `OBJECT` module.

---

## Modular Include

You can include **individual modules** by defining `INCL_CMT_<MODULE>` before including `CMT.H`.

```c
#define INCL_CMT_FAR
#include "CMT/CMT.H"
```

Multiple modules can be combined:

```c
#define INCL_CMT_INLINE
#define INCL_CMT_OBJECT
#include "CMT/CMT.H"
```

Only the specified modules will be pulled in.

---

## Sectional Include (Optional)

Entire **sections** can be enabled using `INCL_CMT_<SECTION>` macros.

```c
#define INCL_CMT_KEYWORDS
#include "CMT/CMT.H"
```

Multiple sections can be combined:

```c
#define INCL_CMT_ATTRIBUTES
#define INCL_CMT_KEYWORDS
#define INCL_CMT_RAX
#include "CMT/CMT.H"
```

This includes:

* All ATTRIBUTES
* All KEYWORDS
* The RAX section

---

## Available Section Macros

Currently supported section-level include macros:

* `INCL_CMT_ASM` - `ASM.H`
* `INCL_CMT_ATTRIBUTES` - `/ATTRIBUTES/*.H`
* `INCL_CMT_CHECK_FEATURE` - `/CHECK_FEATURE/*.H`
* `INCL_CMT_ENVIRONMENTS` - `/ENVIRONMENTS/*.H`
* `INCL_CMT_KEYWORDS` - `/KEYWORDS/*.H`
* `INCL_CMT_LIB` - `/LIB/*.H`
* `INCL_CMT_OS_API` - `/OS_API/*.H`
* `INCL_CMT_WIN_CORE` - `/WIN_CORE/*.H`

---

## Default Behavior

If **no** `INCL_CMT_...` macro is defined:

* **All sections and modules are included automatically** except `OBJECTS`.

Redundant definitions are safe:

* Defining a module that belongs to an already-included section has **no effect**
* No warnings or errors are generated

---

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/OBJECT.gif">
	<a ID="object"><b>OBJECT</b></a> - Implements basic OOP (Object-Oriented Programming) features in C.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/OBJECT.H](https://github.com/TeomanDeniz/CMT/blob/main/OBJECT.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_OBJECT
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/OBJECT.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/OBJECT_128.gif"/>
</p>

**OBJECT** provides **C-style object-oriented programming**:

* Object definitions (`object`) and constructors (`new`)
* Dynamic function tables for runtime binding
* Assembly-level injection for performance
* Cross-platform support (16/32/64-bit) and major compilers
* Memory-efficient and flexible

## Contents

| Contents List                                            |
| -------------------------------------------------------- |
| `#define OBJECT`                                         |
| `#define object`                                         |
| `#define NEW(NAME, TYPE)`                                |
| `#define new(name, type)`                                |
| `#define OBJECT__CONNECT(OBJECT_TYPE_NAME)`              |
| `#define object__connect(object_type_name)`              |
| `#define OBJECT__INJECT(MEMBER)`                         |
| `#define object__inject(member)`                         |
| `#define OBJECT__INJECT_2(MEMBER, FUNCTION)`             |
| `#define object__inject_2(member, function)`             |
| `#define OBJECT__INJECT_3(OBJECT_PTR, MEMBER, FUNCTION)` |
| `#define object__inject_3(object_ptr, member, function)` |
| `#define OBJECT__EJECT(MEMBER)`                          |
| `#define object__eject(member)`                          |

### OBJECT

```c
#define OBJECT struct
#define object struct
```

Used to visually distinguish objects from regular structs.

This macro has no functional impact.

Example:
```c
object o_object
{
	void (*worked)(int);
	int value;
};
```

----
### NEW

```c
#define NEW(NAME, TYPE)
#define new(name, type)
```

Used to instantiate an object.

Calling `new` automatically invokes the constructor.

The constructor must be named exactly the same as the object type.

For example:

```c
object o_test
{
	...
};

void o_test()
{
	...
}
```

Constructors may accept parameters:

```c
void o_test(int arg, char *arg2)
{
	...
}
```

Usage:
```c
new (o_object, test) ();
```
With parameters:
```c
new (o_object, test) (42, "test");
```

---
### OBJECT__CONNECT

```c
#define OBJECT__CONNECT(OBJECT_TYPE_NAME)
#define object__connect(object_type_name)
```

Connects a function to an object instance.

This macro automatically defines a pointer named `this` that refers to the parent object.

**Examples**:
```c
void test1(int a)
{
	OBJECT__CONNECT (o_object);

	THIS->value = a;
}

void test2(int a)
{
	object__connect (o_object);

	this->value = a;
}
```

---
### OBJECT__INJECT, OBJECT__INJECT_2, OBJECT__INJECT_3

```c
#define OBJECT__INJECT(MEMBER)
#define object__inject(member)
#define OBJECT__INJECT_2(MEMBER, FUNCTION)
#define object__inject_2(member, function)
#define OBJECT__INJECT_3(OBJECT_PTR, MEMBER, FUNCTION)
#define object__inject_3(object_ptr, member, function)
```

Used to inject functions into an object instance.

Functions are **not** automatically bound; injection must be done manually.

Example:
```c
void o_object(int a)
{
	object__connect (o_object);

	object__inject (test);                    // this->test = test;
	object__inject_2 (abc, test);             // this->abc = test;
	object__inject_3 (struct_ptr, abc, test); // struct_ptr->abc = test;

	this->value = a;
}
```

---
### OBJECT__EJECT

```c
#define OBJECT__EJECT(MEMBER)
#define object__eject(member)
```

Since no automatic destructor exists, members must be ejected manually.

A custom destructor must be implemented by the user.

Example:
```c
object o_test
{
	void (*free)();
	void (*test)();
};

void test()
{
	object__connect (o_test);
}

void test_free()
{
	object__connect (o_test);

	object__eject (test);
	object__eject (free); // Always on the end!
}

void o_test()
{
	object__connect (o_test);

	object__inject (test);
	object__inject_2 (free, test_free);
}
```

## Full Example

```c
struct test_object_type
{
	void	(*add)(int);
	int		value;
	void	(*free)(void);
};

void	add(int value)
{
	object__connect (test_object_type);

	this->value += value;
}

void	free_self(void)
{
	object__connect (test_object_type);

	object__eject (this->add);
	object__eject (this->free);
}

void	test_object_type(int start_var)
{
	object__connect (test_object_type);

	object__inject (add);
	object__inject_2 (free, free_self);
	this->value = start_var;
}

int	main(void)
{
	new (test_object_type, test1) (42);
	new (test_object_type, test2) (10);

	printf("%d\n", test1.value); // 42
	test1.add(42);
	printf("%d\n", test2.value); // 10
	printf("%d\n", test1.value); // 84

	test1.free();
	test2.free();
	return (0);
}
```

---
## References

 - [CMT - BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES](https://github.com/TeomanDeniz/CMT/blob/main/DOCS/BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES.DOCX)

----
</details>

---

# ![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/asm2.gif) Assembly

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/push_pop.gif">
	<a ID="asm"><b>ASM</b></a> - Use ASM inside C Language
</summary>

> ⚠️ Important
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

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/PUSH_POP_128.gif"/>
</p>

**⚠️ WARNING - Please use this addon If You TRULY know what are you doing!!! And most importantly, for love of Terry Davis Read ABI Rules at ABI.H Module!!!**

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

---
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

---
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

---
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

---
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

---
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

---

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

---
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

---
### CPUs

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/INTEL_ASM.gif">
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

---
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

---
### JMP `INCL_CMT_ASM_JMP`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `JMP_NEAR_(?)`                 | `jmp ?`                            | ✅ IMM16 | ✅ IMM32 | ✅ IMM32 | (3)                | (5)                | (5)                |
| `JMP_SHORT_(IMM8)`             | `jmp imm8`                         | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `JMP_R11`                      | `jmp r11`                          | ❌       | ❌       | ✅       | ---                | ---                | (3)                |
| `JMP_EDX`                      | `jmp edx`                          | ⚠️       | ✅       | ⚠️       | ---                | (2)                | ---                |

---
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

---
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

---
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

---
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

---
### OTHERS `INCL_CMT_ASM_OTHERS`

| **Macro**                      | **Intel Syntax**                   | **16-BIT** | **32-BIT** | **64-BIT** | **OP-Size 16-BIT** | **OP-Size 32-BIT** | **OP-Size 64-BIT** |
| ------------------------------ | ---------------------------------- | ---------- | ---------- | ---------- | ------------------ | ------------------ | ------------------ |
| `CPUID`                        | `cpuid`                            | 💥 CRASH | ✅       | ✅       | (2)                | (2)                | (2)                |
| `INT_(IMM8)`                   | `int IMM8`                         | ✅       | ✅       | ✅       | (2)                | (2)                | (2)                |
| `RET`                          | `ret`                              | ✅       | ✅       | ✅       | (2)                | (1)                | (1)                |

</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ARM_ASM.gif">
	<b>ARM32 (1 Assembly Code in total)</b>
</summary>

| **Macro**     | **Unified Assembly Syntax (UAS)** | **OP-Size** |
| ------------- | --------------------------------- | ----------- |
| `MRC_R0_MIDR` | `mrc p15, 0, r0, c0, c0, 0`       | (4)         |

</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ARM_ASM.gif">
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
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/POWERPC_ASM.gif">
	<b>PowerPC (2 Assembly Codes in total)</b>
</summary>

### MFSPR

| **Macro**      | **Unified Assembly Syntax (UAS)**  | **OP-Size** |
| -------------- | ---------------------------------- | ----------- |
| `MFSPR_R3_287` | `mfspr 3, 287`                     | (4)         |

---
### OTHERS

| **Macro** | **Unified Assembly Syntax (UAS)**  | **OP-Size** |
| --------- | ---------------------------------- | ----------- |
| `BLR`     | `blr`                              | (4)         |

</details>

---
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

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/INTEL_ASM.gif">
	<b>Intel</b>
</summary>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT.gif">
	<b>RAX</b> - Read or Write the register RAX in Intel CPU
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ASM/C/INTEL/RAX.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM/C/INTEL/RAX.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_RAX
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ASM/C/INTEL/RAX.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT_128.gif"/>
</p>

With these functions, you're able to move and get values from the Intel CPU register RAX and stack with different data sizes and archs.

Using `GET_RAX` or `SET_RAX` on a non-Intel CPU will cause an error on compiling time.

> ⚠️ Note
> 
> On Intel 32-BIT, EAX register is used.
> On Intel 16-BIT, AX register is used.

## Contents

| Contents List               |
| --------------------------- |
| `#define GET_RAX(VARIABLE)` |
| `#define get_rax(variable)` |
| `#define SET_RAX(VALUE)`    |
| `#define set_rax(VALUE)`    |

---
### GET_RAX

```c
#define GET_RAX(VARIABLE)
#define get_rax(variable)
```

Sets the value of `RAX` register holding to your variable.

Example:

```c
long long test = 0;

volatile_function_that_returns_42();

get_rax(test);

printf("%d\n", test); // 42
```

---
### SET_RAX

```c
#define SET_RAX(VALUE)
#define set_rax(value)
```

Sets the `RAX` register's value to given value or variable.

**Examples**:
```c
set_rax(42);
```

```c
long long value = 42;

set_rax(value);
```

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT.gif">
	<b>CPUID</b> - Query processor identification and feature information.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ASM/C/INTEL/CPUID.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM/C/INTEL/CPUID.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CPUID
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ASM/C/INTEL/CPUID.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT_128.gif"/>
</p>

These macros execute the `CPUID` instruction and return the values stored in the CPU registers after execution.

`CPUID` is used to query processor information such as vendor ID, feature flags, supported instruction sets, cache details, and extended processor capabilities.

The requested information is selected using the **leaf value**, which is placed in the `EAX` register before executing `CPUID`.

## Contents

| Contents List                             |
| ----------------------------------------- |
| `#define GET_CPUID(LEAF, AX, BX, CX, DX)` |
| `#define get_cpuid(leaf, ax, bx, cx, dx)` |

| Vendor Strings (CPUs)                |
| ------------------------------------ |
| `#define CPUID_VENDOR_AMD`           |
| `#define CPUID_VENDOR_AMD_OLD`       |
| `#define CPUID_VENDOR_INTEL`         |
| `#define CPUID_VENDOR_VIA`           |
| `#define CPUID_VENDOR_TRANSMETA`     |
| `#define CPUID_VENDOR_TRANSMETA_OLD` |
| `#define CPUID_VENDOR_CYRIX`         |
| `#define CPUID_VENDOR_CENTAUR`       |
| `#define CPUID_VENDOR_NEXGEN`        |
| `#define CPUID_VENDOR_UMC`           |
| `#define CPUID_VENDOR_SIS`           |
| `#define CPUID_VENDOR_NSC`           |
| `#define CPUID_VENDOR_RISE`          |
| `#define CPUID_VENDOR_VORTEX`        |
| `#define CPUID_VENDOR_AO486`         |
| `#define CPUID_VENDOR_AO486_OLD`     |
| `#define CPUID_VENDOR_ZHAOXIN`       |
| `#define CPUID_VENDOR_HYGON`         |
| `#define CPUID_VENDOR_ELBRUS`        |

| Vendor Strings (Hypervisors)         |
| ------------------------------------ |
| `#define CPUID_VENDOR_QEMU`          |
| `#define CPUID_VENDOR_KVM`           |
| `#define CPUID_VENDOR_VMWARE`        |
| `#define CPUID_VENDOR_VIRTUALBOX`    |
| `#define CPUID_VENDOR_XEN`           |
| `#define CPUID_VENDOR_HYPERV`        |
| `#define CPUID_VENDOR_PARALLELS`     |
| `#define CPUID_VENDOR_PARALLELS_ALT` |
| `#define CPUID_VENDOR_BHYVE`         |
| `#define CPUID_VENDOR_QNX`           |

| CPU Features                               |
| ------------------------------------------ |
| `#define CPUID_FEAT_EBX_BRAND_INDEX`       |
| `#define CPUID_FEAT_EBX_CLFLUSH_LINE_SIZE` |
| `#define CPUID_FEAT_EBX_APIC_ID_SPACE`     |
| `#define CPUID_FEAT_EBX_INITIAL_APIC_ID`   |
| `#define CPUID_FEAT_ECX_SSE3`              |
| `#define CPUID_FEAT_ECX_PCLMUL`            |
| `#define CPUID_FEAT_ECX_DTES64`            |
| `#define CPUID_FEAT_ECX_MONITOR`           |
| `#define CPUID_FEAT_ECX_DS_CPL`            |
| `#define CPUID_FEAT_ECX_VMX`               |
| `#define CPUID_FEAT_ECX_SMX`               |
| `#define CPUID_FEAT_ECX_EST`               |
| `#define CPUID_FEAT_ECX_TM2`               |
| `#define CPUID_FEAT_ECX_SSSE3`             |
| `#define CPUID_FEAT_ECX_CID`               |
| `#define CPUID_FEAT_ECX_SDBG`              |
| `#define CPUID_FEAT_ECX_FMA`               |
| `#define CPUID_FEAT_ECX_CX16`              |
| `#define CPUID_FEAT_ECX_XTPR`              |
| `#define CPUID_FEAT_ECX_PDCM`              |
| `#define CPUID_FEAT_ECX_PCID`              |
| `#define CPUID_FEAT_ECX_DCA`               |
| `#define CPUID_FEAT_ECX_SSE4_1`            |
| `#define CPUID_FEAT_ECX_SSE4_2`            |
| `#define CPUID_FEAT_ECX_X2APIC`            |
| `#define CPUID_FEAT_ECX_MOVBE`             |
| `#define CPUID_FEAT_ECX_POPCNT`            |
| `#define CPUID_FEAT_ECX_TSC`               |
| `#define CPUID_FEAT_ECX_AES`               |
| `#define CPUID_FEAT_ECX_XSAVE`             |
| `#define CPUID_FEAT_ECX_OSXSAVE`           |
| `#define CPUID_FEAT_ECX_AVX`               |
| `#define CPUID_FEAT_ECX_F16C`              |
| `#define CPUID_FEAT_ECX_RDRAND`            |
| `#define CPUID_FEAT_ECX_HYPERVISOR`        |
| `#define CPUID_FEAT_EDX_FPU`               |
| `#define CPUID_FEAT_EDX_VME`               |
| `#define CPUID_FEAT_EDX_DE`                |
| `#define CPUID_FEAT_EDX_PSE`               |
| `#define CPUID_FEAT_EDX_TSC`               |
| `#define CPUID_FEAT_EDX_MSR`               |
| `#define CPUID_FEAT_EDX_PAE`               |
| `#define CPUID_FEAT_EDX_MCE`               |
| `#define CPUID_FEAT_EDX_CX8`               |
| `#define CPUID_FEAT_EDX_APIC`              |
| `#define CPUID_FEAT_EDX_SEP`               |
| `#define CPUID_FEAT_EDX_MTRR`              |
| `#define CPUID_FEAT_EDX_PGE`               |
| `#define CPUID_FEAT_EDX_MCA`               |
| `#define CPUID_FEAT_EDX_CMOV`              |
| `#define CPUID_FEAT_EDX_PAT`               |
| `#define CPUID_FEAT_EDX_PSE36`             |
| `#define CPUID_FEAT_EDX_PSN`               |
| `#define CPUID_FEAT_EDX_CLFLUSH`           |
| `#define CPUID_FEAT_EDX_DS`                |
| `#define CPUID_FEAT_EDX_ACPI`              |
| `#define CPUID_FEAT_EDX_MMX`               |
| `#define CPUID_FEAT_EDX_FXSR`              |
| `#define CPUID_FEAT_EDX_SSE`               |
| `#define CPUID_FEAT_EDX_SSE2`              |
| `#define CPUID_FEAT_EDX_SS`                |
| `#define CPUID_FEAT_EDX_HTT`               |
| `#define CPUID_FEAT_EDX_TM`                |
| `#define CPUID_FEAT_EDX_IA64`              |
| `#define CPUID_FEAT_EDX_PBE`               |

---

### CPUID

```c
#define GET_CPUID(LEAF, AX, BX, CX, DX)
#define get_cpuid(leaf, ax, bx, cx, dx)
```

Executes the `CPUID` instruction with the specified **leaf** value and stores the resulting register outputs in the provided variables.

The macro places the leaf value into `EAX`, runs the `CPUID` instruction, and then writes the resulting values of `EAX`, `EBX`, `ECX`, and `EDX` into the given variables.

Example:

```c
unsigned int eax, ebx, ecx, edx;

get_cpuid(0, eax, ebx, ecx, edx);
```

After execution:

* `eax` contains the **maximum supported CPUID leaf**.
* `ebx`, `edx`, and `ecx` together contain the **CPU vendor string**.

The **leaf** selects which processor information block is returned.

Common examples:

| Leaf         | Description                          |
| ------------ | ------------------------------------ |
| `0x0`        | Maximum supported leaf and vendor ID |
| `0x1`        | Processor version and feature flags  |
| `0x7`        | Structured extended feature flags    |
| `0x80000000` | Maximum supported extended leaf      |

Different leaves return different data layouts in the output registers.

Example extracting the vendor string:

```c
unsigned int	eax, ebx, ecx, edx;
char			vendor[13];

get_cpuid(0, eax, ebx, ecx, edx);

((unsigned int*)vendor)[0] = ebx;
((unsigned int*)vendor)[1] = edx;
((unsigned int*)vendor)[2] = ecx;

vendor[12] = 0;

printf("[%s]\n", vendor); // [GenuineIntel] (Aka: CPUID_VENDOR_INTEL)
```

## References

 - [Intel® Processor Identification and the CPUID Instruction - datasheets.chipdb.org](https://datasheets.chipdb.org/Intel/x86/CPUID/24161821.pdf)
 - [CPUID - wiki.osdev.org](https://wiki.osdev.org/CPUID)

</details>
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ARM_ASM.gif">
	<b>ARM</b>
</summary>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT.gif">
	<b>MIDR</b> - Read the Main ID Register in ARM CPU
</summary>

> ⚠️ Important
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

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT_128.gif"/>
</p>

With this function, you're able to read the ARM CPU **Main ID Register (MIDR)**.

Using `GET_MIDR` on a non-Arm CPU will cause an error on compiling time.

## Contents

| Contents List                |
| ---------------------------- |
| `#define GET_MIDR(VARIABLE)` |
| `#define get_midr(variable)` |

---

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

---

</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT.gif">
	<b>X17</b> - Read or Write the register X17 in ARM CPU
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ASM/C/ARM/X17.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM/C/ARM/X17.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_X17
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ASM/C/ARM/X17.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT_128.gif"/>
</p>

With these functions, you're able to move and get values from the ARM CPU register X17 and stack with different data sizes and archs.

Using `GET_X17` or `SET_X17` on a non-Arm CPU will cause an error on compiling time.

## Contents

| Contents List               |
| --------------------------- |
| `#define GET_X17(VARIABLE)` |
| `#define get_x17(variable)` |
| `#define SET_X17(VALUE)`    |
| `#define set_x17(value)`    |

---
### GET_X17

```c
#define GET_X17(VARIABLE)
#define get_x17(variable)
```

Sets the value of `X17` register holding to your variable.

Example:

```c
long long test = 0;

get_x17(test);

printf("%d\n", test); // Some random value X17 was holding
```

---
### SET_X17

```c
#define SET_X17(VALUE)
#define set_x17(value)
```

Sets the `X17` register's value to given value or variable.

**Examples**:
```c
set_x17(42);
```

```c
long long value = 42;

set_x17(value);
```

## References

 - [Chapter 2: Understanding ARM64 Registers - cybersandeep.gitbook.io](https://cybersandeep.gitbook.io/arm64basicguide/chapter-2-understanding-arm64-registers)
 - [M Series ARM64 Registers - simplifycpp.org](https://www.simplifycpp.org/?id=a0352)

----
</details>
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/POWERPC_ASM.gif">
	<b>PowerPC</b>
</summary>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT.gif">
	<b>MFSPR_287</b> - Read the Processor Version Register (PVR) for basic CPU identification.
</summary>

> ⚠️ Important
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

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ASM_CONTENT_128.gif"/>
</p>

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

---

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

</details>

</details>

---

# ![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/Attributes.png) Attributes

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ALIGN.gif">
	<a ID="align"><b>ALIGN</b></a> - Macros and types for aligning objects, structs, and arrays to system-defined boundaries.
</summary>

> ⚠ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/ALIGN.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/ALIGN.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_ALIGN
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/ALIGN.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ALIGN_128.gif"/>
</p>

This header defines utilities for managing memory alignment in the library.

It provides a union representing the maximum alignment requirements and macros for calculating aligned memory addresses.

Using these macros changes:
- Where an object may start in memory
- How much padding the compiler inserts
- The effective size and layout of struct types
- The generated load/store instructions
- ABI compatibility with other code

Alignment does **not** change:
- The value representation
- The semantics of the type
- The language rules of C
- Access order or atomicity

For variables:
- The object address will be a multiple of the given alignment
- Misaligned accesses are avoided
- Over-alignment may increase stack or data segment size

For structs:
- The struct type itself becomes aligned
- All instances of the type follow that alignment
- `sizeof(struct)` may increase due to tail padding
- Binary layout changes -> ABI break if shared

For arrays:
- Each element respects the type alignment
- Stride may increase

For performance:
- Proper alignment enables SIMD and wide loads
- Bad alignment may force slow or faulting accesses
- Over-alignment may hurt cache density

For ABI:
- Changing alignment changes calling and memory contracts
- Structs passed across modules must match alignment exactly

Allocators:
- Alignment only applies to the type
- Dynamic allocation must provide compatible alignment
- `malloc` is not required to satisfy over-aligned types

Failure modes:
- Silent padding changes
- ABI mismatches
- Incompatible serialized data
- Crashes on strict-alignment architectures

Alignment is a layout constraint, not a safety feature.

## Contents

| Contents List                      |
| ---------------------------------- |
| `#define MAX_ALIGNMENT`            |
| `#define ALIGN_UP(VALUE)`          |
| `#define align_up(value)`          |
| `#define ALIGN_VARIABLE(VALUE)`    |
| `#define align_variable(value)`    |
| `#define ALIGN_STRUCT_PUSH(VALUE)` |
| `#define align_struct_push(value)` |
| `#define ALIGN_STRUCT_POP(VALUE)`  |
| `#define align_struct_pop(value)`  |

---
### MAX_ALIGNMENT

```c
#define MAX_ALIGNMENT
```

Returns the size of maximum required alignment supported but compiler or operating system.

---
### ALIGN_UP

```c
#define ALIGN_UP(VALUE)
#define align_up(value)
```

Rounds `VALUE` up to the nearest multiple of `MAX_ALIGNMENT` to ensure proper memory alignment.

This ensures that `offset` is aligned according to the largest type in `MAX_ALIGNMENT`.

Example:
```c
size_t	offset = ALIGN_UP(current_offset);
```

---
### ALIGN_VARIABLE

```c
#define ALIGN_VARIABLE(VALUE)
#define align_variable(value)
```

Rounds a `VALUE` up to the next multiple of the maximum required alignment for a variable.

**Examples**:
```c
ALIGN_VARIABLE(16) int var;
align_variable(16) int var = 42;
```

---
### ALIGN_STRUCT_PUSH, ALIGN_STRUCT_POP

```c
#define ALIGN_STRUCT_PUSH(VALUE)
#define align_struct_push(value)

#define ALIGN_STRUCT_POP(VALUE)
#define align_struct_pop(value)
```

Rounds a `VALUE` up to the next multiple of the maximum required alignment for the start of struct.

**Examples**:
```c
ALIGN_STRUCT_PUSH(MAX_ALIGNMENT)
struct s_struct
{
	. . .
} ALIGN_STRUCT_POP(MAX_ALIGNMENT);

align_struct_push(MAX_ALIGNMENT)
typedef struct s_struct
{
	. . .
} align_struct_pop(MAX_ALIGNMENT) t_struct;
```

## References

 - [Data structure alignment - wikipedia.org](https://en.wikipedia.org/wiki/Data_structure_alignment)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/CDECL.gif">
	<b>CDECL</b> - A calling convention where the caller cleans the stack and parameters are passed right-to-left
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/CDECL.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/CDECL.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CDECL
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/CDECL.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/CDECL_128.gif"/>
</p>

Defines a calling convention where arguments are passed on the stack, the caller cleans the stack, and (on 32-bit systems) the function name may be decorated.

This is the default calling convention used by most C compilers and allows functions with a variable number of arguments.

## Contents

| Contents List   |
| --------------- |
| `#define CDECL` |

### CDECL

```c
#define CDECL
```

**Examples**:
```c
int CDECL	add(int a, int b)
{
	return a + b;
}

extern CDECL int	printf(const char *format, ...);
```

## References

 - [__cdecl - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/cdecl)
 - [x86 calling conventions - wikipedia.org](https://wikipedia.org/wiki/X86_calling_conventions)

</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/EXTERN_C.gif">
	<a ID="extern_c"><b>EXTERN_C</b></a> - Specifies C linkage for a declaration, preventing C++ name mangling so the symbol can be linked from C code.
</summary>

> ⚠ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/EXTERN_C.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/EXTERN_C.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_EXTERN_C
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/EXTERN_C.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/EXTERN_C_128.gif"/>
</p>

A lightweight header that provides portable macros for declaring C linkage in shared C/C++ headers.

When included in C++ builds, it expands to `extern "C"` blocks to prevent name mangling; in C builds, it expands to nothing.

This ensures seamless interoperability between C and C++ translation units.

## Contents

| Contents List            |
| ------------------------ |
| `#define EXTERN_C_START` |
| `#define extern_c_start` |
| `#define EXTERN_C_END`   |
| `#define extern_c_end`   |

---
## Usage

```c
#define EXTERN_C_START
#define extern_c_start

#define EXTERN_C_END
#define extern_c_end
```

**Examples**:
```c
extern_c_start

const char *global_variable = "test";

void func()
{
	printf("42");
}

extern_c_end
```

```c
#define CREATE_FUNCTION(NAME) \
	extern_c_start\
	\
	static void NAME()\
	{\
		printf("42\n");\
	}\
	\
	extern_c_end

CREATE_FUNCTION(test_function)
```

## References

 - [`extern` (C++) - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/extern-cpp?view=msvc-170)
 - [Mixing C and C++: extern C - embeddedartistry.com](https://embeddedartistry.com/blog/2017/05/01/mixing-c-and-c-extern-c/)
 - [Name Mangling and extern "C" in C++ - geeksforgeeks.or](https://www.geeksforgeeks.org/cpp/extern-c-in-c/)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/far.gif">
	<a ID="far"><b>FAR</b></a> - If a program compiles on a 16-BIT system and needs to access memory outside the current segment.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/FAR.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/FAR.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_FAR
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/FAR.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/FAR_128.gif"/>
</p>

This header provides a minimal, portable abstraction for far-pointer support across compilers and platforms used to access memory locations beyond the current segment in **16-bit architectures**.

In 16-bit compilers (MS-DOS, Turbo C, Watcom, etc.), pointers are:
* **Near**: within a single segment
* **Far**: across segments

Memory segmentation in 16-bit systems uses 64KB segments:
* **Near pointer** -> 16-bit offset
* **Far pointer** -> 32-bit (segment:offset)

It defines the `FAR` macro to annotate far memory qualifiers where supported, and the `IS__FAR__SUPPORTED` macro to allow compile-time detection of far-pointer availability.

When far pointers are not supported, the macros safely degrade to no-ops, preserving source compatibility without impacting behavior.

Note: On classic 16-bit segmented systems (e.g. real-mode x86), the theoretical physical address space is up to 1 MB (20-bit addressing via segment:offset). Far pointers allow access outside the current segment but do not increase object size limits. The practically usable memory is often much smaller and depends on the CPU mode, memory model, and compiler/runtime support (EMS/XMS, huge pointers, etc.). Always consult and trust your compiler and target hardware documentation.

> **Pro-Tip**:
> * Check your compiler documentation for memory models and pointer types.
> * On **modern systems** (32/64-bit), far pointers are obsolete and mostly ignored.
> * Far pointers are slower (due to segment switching).
> * Use `FAR` only if you're planning to compile your code on 16-bit real mode environments.

## Contents

| Contents List                |
| ---------------------------- |
| `#define FAR`                |
| `#define IS__FAR__SUPPORTED` |

---
### FAR

```c
#define FAR
```

The memory access type depending on the compiler and platform.

* On **16-bit systems**, it expands to a far pointer keyword (e.g., `far`, `_far`).
* On **modern systems**, it's often empty or unused.

Since GNU does not support the `far` keyword (the `__attribute__((far))` extension is excluded, as it works differently), this keyword is defined as empty in GNU.

**Examples**:
```c
char FAR *far_ptr = far_malloc(128000);
```

For function pointers:
```c
void (FAR *far_function)();
```

For type casting:
```c
// "variable" and "function" must refer to FAR-addressable storage

void FAR *test1 = (void FAR *)variable;
void (FAR *test2)() = (void (FAR *)())function;
```

---
### IS__FAR__SUPPORTED

```c
#define IS__FAR__SUPPORTED
```

Checks whether the `FAR` macro is defined as non-empty. This indicates that the compiler truly supports the `far` keyword.

> Note:
> 
> Checking `IS__FAR__SUPPORTED` alone is not sufficient.
> 
> You must also verify that your target architecture and compiler runtime support far memory allocation and memory access routines compatible with far pointers.

Example:

```c
#ifdef IS__FAR__SUPPORTED
void FAR *	test = far_malloc(128000);
...
#else
#ifdef __SYSTEM_16_BIT__
// You must really gotta do something in here
...
#else // No trouble at all (hope)
void *test = malloc(128000);
...
#endif
#endif
```

## References

 - [Near, Far and Huge Pointers in C - geeksforgeeks.org](https://www.geeksforgeeks.org/c/what-are-near-far-and-huge-pointers/)
 - [Far pointer - wikipedia.org](https://wikipedia.org/wiki/Far_pointer)
 - [The __far Keyword for Open Watcom C/16 - open-watcom.github.io](https://open-watcom.github.io/open-watcom-v2-wikidocs/clr.html#The___far_Keyword_for_Open_Watcom_CD16)
 - [c++ - loop optimization and farmalloc(64KB) - digitalmars.com](https://digitalmars.com/archives/cplusplus/987.html)
 - [16 Bit Pointer Types and Type Modifiers - digitalmars.com](https://digitalmars.com/ctg/pointers16.html)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/FASTCALL.gif">
	<a ID="fastcall"><b>FASTCALL</b></a> - Pass arguments to a function via using CPU registers. I am not like REGPARM.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/FASTCALL.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/FASTCALL.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_FASTCALL
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/FASTCALL.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/FASTCALL_128.gif"/>
</p>

This header provides a **minimal abstraction for register-based argument passing** on **32-bit x86 systems**, using the compiler-specific `fastcall` calling convention where supported.

On classic **32-bit x86 (i386)** systems, the default C calling convention (`cdecl`) passes **all function arguments on the stack**.
Some compilers (notably **MSVC and GCC-compatible**) provide extensions that allow **a limited number of arguments to be passed via CPU registers**, reducing call overhead for small, frequently called functions.

The `FASTCALL` macro annotates a function (or function pointer) to request that arguments be passed using the compiler's **fastcall** convention, when supported by the compiler and target architecture.

When unsupported, `FASTCALL` safely degrades to a no-op, preserving source compatibility without altering behavior.

> **Important**:
> `fastcall` is **not a standardized ABI**.
> It is compiler-specific and must be used consistently across declarations, definitions, and function pointers.

## Contents

| Contents List                     |
| --------------------------------- |
| `#define FASTCALL`                |
| `#define fastcall`                |
| `#define IS__FASTCALL__SUPPORTED` |

---

### FASTCALL

```c
#define FASTCALL
#define fastcall
```

Requests that function arguments be passed in registers according to the compiler's **fastcall** convention instead of entirely on the stack.

Typical **32-bit x86 fastcall** register usage:

| Register usage (in order) |
| ------------------------- |
|  `ECX`, `EDX`             |

* Register usage is **compiler-defined**
* Usually limited to **two arguments**
* Remaining arguments (if any) are passed on the stack
* Return values are unaffected

**Examples**:
```c
int fastcall func(int a, void *b);
```

```c
int FASTCALL func(int a, int b, int c, int d, int e);
```

* `a` -> `ECX`
* `b` -> `EDX`
* `c`, `d`, `e` -> stack

Prototype:

```c
extern int fastcall func(int, int, void *);
```

Function pointer:

```c
int (FASTCALL *test)(int, int, void *);
```

Function pointer type casting:

```c
test = (int (FASTCALL *)(int))pointer;
```

---

### IS__FASTCALL__SUPPORTED

```c
#define IS__FASTCALL__SUPPORTED
```

Checks whether the `FASTCALL` macro is defined as non-empty. This indicates that the compiler truly supports the `fastcall` calling convention.

> Note:
>
> Checking `IS__FASTCALL__SUPPORTED` alone is not sufficient.
>
> You must also verify that your target architecture and compiler supports fastcall.

Example:

```c
#ifdef IS__FASTCALL__SUPPORTED
int FASTCALL fast_add(int a, int b);
#else
int fast_add(int a, int b);
#endif
```

## References

 - [\_\_fastcall - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/fastcall?view=msvc-170)
 - [\_fastcall, \_\_fastcall - embarcadero.com](https://docwiki.embarcadero.com/RADStudio/Athens/en/Fastcall,_fastcall)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/PACK.gif">
	<a ID="pack"><b>PACK</b></a> - Packs and removes the padding bytes from your struct.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/PACK.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/PACK.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_PACK
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/PACK.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/PACK_128.gif"/>
</p>

This header defines macros that remove padding bytes from structures, reducing their memory footprint.

Do not use this by default. Packed structures should be limited to cases where the memory layout must be exact (binary formats, network protocols, file I/O). Removing padding can introduce unaligned memory access and measurable performance penalties.

Before the solution, the problem:

CPUs access memory more efficiently when data is aligned to natural boundaries (typically 1, 2, 4, 8, 16 bytes). To satisfy these requirements, compilers automatically insert padding bytes into structures.

**Examples**:

A single `int` is naturally aligned-no padding needed:
```c
struct test
{
	int a;
}; // sizeof = 4 bytes
```

Padding is inserted so the structure size remains aligned:
```c
struct test
{
	int a;  // 4
	char b; // 1 + 3 (4)
}; // sizeof = 8 bytes (3 bytes padding)
```

Pointer alignment forces additional padding:
```c
struct test
{
	void *a; // 8
	char b;  // 1 + 7 (8)
}; // sizeof = 16 bytes (7 bytes padding)
```

Trailing members are padded to preserve alignment rules:
```c
struct test
{
	void *a; // 8
	void *b; // 8
	short c; // 2 + 6 (8)
}; // sizeof = 24 bytes (6 bytes padding)
```

Large alignment requirements can waste significant space:
```c
struct test
{
	long double a; // 16
	char b;        // 1 + 15 (16)
}; // sizeof = 32 bytes (15 bytes padding... What a waste)
```

Padding exists to keep memory accesses aligned and fast.

If the structure is packed:

```c
PRAGMA_PACK_PUSH
struct test
{
	int a;
	char b;
} PACK;
PRAGMA_PACK_POP
```
`sizeof(struct test)` becomes **5 bytes**.

This eliminates padding but may cause unaligned accesses, which can be slower or even fault on some architectures.

Sharing packed structures across APIs, modules, or hot paths is a common source of unnecessary performance loss. Use them deliberately, not habitually.

## Contents

| Contents List              |
| -------------------------- |
| `#define PRAGMA_PACK_PUSH` |
| `#define PRAGMA_PACK_POP`  |
| `#define PACK`             |

---
### PRAGMA_PACK_PUSH

Begins a structure packing scope by pushing the current alignment and setting packed alignment for subsequent declarations.

Example:
```c
PRAGMA_PACK_PUSH
struct test
{
...
```

---
### PRAGMA_PACK_POP

Ends a structure packing scope by restoring the previous alignment pushed by `PRAGMA_PACK_PUSH`.

Example:
```c
...
};
PRAGMA_PACK_POP
```

---
### PACK

Applies the packed attribute to a structure declaration, forcing minimal alignment and preventing padding within the structure.

Must be used inside a `PRAGMA_PACK_PUSH` / `PRAGMA_PACK_POP` scope.

**Examples**:
```c
PRAGMA_PACK_PUSH
struct test
{
	. . .
} PACK;
PRAGMA_PACK_POP
```

```c
PRAGMA_PACK_PUSH
typedef struct test
{
	. . .
} PACK t_test;
PRAGMA_PACK_POP
```

## References

 - [C Struct Alignment and Padding - w3schools.com](https://www.w3schools.com/c/c_structs_padding.php)
 - [Packed Structures - gnu.org](https://www.gnu.org/software/c-intro-and-ref/manual/html_node/Packed-Structures.html)
 - [How to Pack a Struct in C - geeksforgeeks.org](https://www.geeksforgeeks.org/c/how-to-pack-a-struct-in-c/)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/PASCAL.gif">
	<b>PASCAL</b> - A calling convention where arguments are passed right-to-left and the callee is responsible for stack cleanup (legacy Pascal-style ABI)
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/PASCAL.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/PASCAL.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_PASCAL
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/PASCAL.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/PASCAL_128.gif"/>
</p>

Defines a legacy calling convention where arguments are pushed right-to-left, and the callee performs stack cleanup.

Mostly associated with 16-bit/legacy Windows and older compilers, but still exposed in some toolchains for ABI compatibility.

In **16-bit Windows**, system APIs use the `FAR PASCAL` calling convention (`far` call + `pascal` stack cleanup). They are invoked normally; no manual far pointer handling is required.

## Contents

| Contents List    |
| ---------------- |
| `#define PASCAL` |

### PASCAL

```c
#define PASCAL
```

**Examples**:
```c
int PASCAL	WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, ...)
{
	. . .
}

extern PASCAL int	WinMain(...);
```

## References

 - [Obsolete Calling Conventions - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/obsolete-calling-conventions?view=msvc-170)
 - [BORLAND® C++ PROGRAMMER'S GUIDE (page 50) - http://bitsavers.informatik.uni-stuttgart.de](http://bitsavers.informatik.uni-stuttgart.de/pdf/borland/borland_C++/Borland_C++_Version_3.1_Programmers_Guide_1992.pdf#page=65)
 - [Index of Topics - open-watcom.github.io](https://open-watcom.github.io/open-watcom-v2-wikidocs/clr.html#Keywords)
 - [pascal - clang.llvm.org](https://clang.llvm.org/docs/AttributeReference.html#pascal)

</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/REGPARM.gif">
	<a ID="regparm"><b>REGPARM</b></a> - Pass arguments to a function via using CPU registers. I am not like FASTCALL.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/REGPARM.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/REGPARM.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_REGPARM
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/REGPARM.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/REGPARM_128.gif"/>
</p>

This header provides a **minimal abstraction for register-based argument passing** on **32-bit x86 systems**, using the compiler-specific `regparm` calling convention where supported.

On classic **32-bit x86 (i386)** systems, the default C calling convention (`cdecl`) passes **all function arguments on the stack**.
Some compilers (notably **GCC-compatible**) provide extensions that allow **a limited number of arguments to be passed via CPU registers**, reducing call overhead for small, frequently called functions.

The `REGPARM(N)` macro annotates a function (or function pointer) to request that up to **N arguments** be passed in registers, when supported by the compiler and target architecture.

When unsupported, `REGPARM(N)` safely degrades to a no-op, preserving source compatibility without altering behavior.

> **Important**:
> `regparm` is **not a standardized ABI**.
> It is a compiler and architecture-specific optimization and must be used consistently across declarations, definitions, and function pointers.

## Contents

| Contents List                    |
| -------------------------------- |
| `#define REGPARM(ARGS)`          |
| `#define regparm(args)`          |
| `#define IS__REGPARM__SUPPORTED` |

---
### REGPARM

```c
#define REGPARM(ARGS)
#define regparm(args)
```

Requests that up to N function arguments be passed in registers instead of on the stack.

| `REGPARM(N)` | Register usage (in order) |
| ------------ | ------------------------- |
| `REGPARM(1)` | `EAX`                     |
| `REGPARM(2)` | `EAX`, `EDX`              |
| `REGPARM(3)` | `EAX`, `EDX`, `ECX`       |

- Maximum supported value: 3
- Remaining arguments (if any) are passed on the stack
- Argument count does not need to match N
- Return values are unaffected

**Examples**:
```c
int regparm(2) func(int a, void *b);
```

```c
int REGPARM(3) func(int a, int b, int c, int d, int e);
```

- `a` -> `EAX`
- `b` -> `EDX`
- `c` -> `ECX`
- `d`, `e` -> stack

Prototype:
```c
extern int regparm(3) func(int, int, void *);
```

Function pointer:
```c
int (REGPARM(3) *test)(int, int, void *);
```

Function pointer type casting:
```c
test = (int (REGPARM(1) *)(int))pointer;
```

---
### IS__REGPARM__SUPPORTED

```c
#define IS__REGPARM__SUPPORTED
```

Checks whether the `REGPARM` macro is defined as non-empty. This indicates that the compiler truly supports the `regparm` attribute.

> Note:
> 
> Checking `IS__REGPARM__SUPPORTED` alone is not sufficient.
> 
> You must also verify that your target architecture and compiler supports regparm.

Example:

```c
#ifdef IS__REGPARM__SUPPORTED
int REGPARM(3) fast_add(int a, int b, int c);
#else
int fast_add(int a, int b, int c);
#endif
```

## References

 - [Function Attributes - gnu.org](https://gcc.gnu.org/onlinedocs/gcc-3.3.5/gcc/Function-Attributes.html)
 - [x86 calling conventions - wikipedia.org](https://wikipedia.org/wiki/X86_calling_conventions)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/REGPASS.gif">
	<a ID="regpass"><b>REGPASS</b></a> - Pass arguments to a function via using CPU registers. I either FASTCALL or REGPARM.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/REGPASS.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/REGPASS.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_REGPASS
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/REGPASS.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/REGPASS_128.gif"/>
</p>

Combination of both `REGPARM` and `FASTCALL`. THe purpose of this addon exist is always trying to pass parameters as registers. Or at least two or three of them.

> **Important**:
> `REGPASS` is **not a standardized ABI**.
> It is a compiler and architecture-specific optimization and must be used consistently across declarations, definitions, and function pointers.

## Contents

| Contents List     |
| ----------------- |
| `#define REGPASS` |
| `#define regpass` |

---
### REGPASS

```c
#define REGPASS
#define regpass
```

Using one of avaliable "passing arguments via register" method, else does nothing.

| `REGPASS`    | Register usage (in order) |
| ------------ | ------------------------- |
| `REGPARM(3)` | `EAX`, `EDX`, `ECX`       |
| `FASTCALL`   | `ECX`, `EDX`,             |

**Examples**:
```c
int regpass func(int a, void *b);
```

Prototype:
```c
extern int REGPASS func(int, int, void *);
```

Function pointer:
```c
int (regpass *test)(int, int, void *);
```

Function pointer type casting:
```c
test = (int (REGPASS *)(int))pointer;
```

## References

 - FASTCALL ASM - CMT
 - REGPARM ASM - CMT

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/STDCALL.gif">
	<b>STDCALL</b> - A calling convention (mainly on Windows) where the callee cleans the stack and parameters are passed right-to-left
</summary>

> ⚠️ Important
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

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/STDCALL_128.gif"/>
</p>

Defines a calling convention where arguments are passed on the stack, the callee cleans the stack, and (on 32-bit systems) the function name may be decorated.

Primarily associated with Windows APIs but supported by multiple compilers for binary-interface compatibility.

In **16-bit Windows**, system APIs use the `FAR STDCALL` calling convention (`far` call + `stdcall` stack cleanup). They are invoked normally; no manual far pointer handling is required.

## Contents

| Contents List     |
| ----------------- |
| `#define STDCALL` |

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

----
</details>

---

# ![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/CHECK_FEATURE.gif) Check Feature

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/COMMA_OPERATOR.gif">
	<a ID="comma_operator"><b>COMMA OPERATOR</b></a> - Defines a macro if comma operator is supported on your compiler
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/CHECK_FEATURE/COMMA_OPERATOR.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/COMMA_OPERATOR.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_COMMA_OPERATOR
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CHECK_FEATURE/COMMA_OPERATOR.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/COMMA_OPERATOR_128.gif"/>
</p>

Defines `IS__COMMA_OPERATOR__SUPPORTED` if the compiler supports the comma operator.

## Contents

| Contents List                           |
| --------------------------------------- |
| `#define IS__COMMA_OPERATOR__SUPPORTED` |

---
### IS__COMMA_OPERATOR__SUPPORTED

```c
#define IS__COMMA_OPERATOR__SUPPORTED
```

The comma operator refers to the `(,)` operator in macros or expressions, used to evaluate multiple expressions in sequence and return the last.

**Example**:
```c
#ifdef IS__COMMA_OPERATOR__SUPPORTED
int a = (b++, funct(), c = 42, b += c, 66); // Performs all actions and returns 66
#else
b++;
funct();
c = 42;
b += c;
int a = 66;
#endif
```

## References

 - [ISO/IEC 9899:1999(E) Page 94 - dii.uchile.cl (Universidad de Chile)](https://www.dii.uchile.cl/~daespino/files/Iso_C_1999_definition.pdf)
 - [Comma operator - wikipedia.org](https://wikipedia.org/wiki/Comma_operator)
 - [Comma Operator - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/comma-operator?view=msvc-170)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/INLINE_ASM.gif">
	<a ID="inline_asm"><b>INLINE ASM</b></a> - Defines a macro if inline asm is supported on your compiler and which type of syntax it is using
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/CHECK_FEATURE/INLINE_ASM.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/INLINE_ASM.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_INLINE_ASM
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CHECK_FEATURE/INLINE_ASM.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/INLINE_ASM_128.gif"/>
</p>

This header indicates whether your compiler supports inline assembly and defines a specific macro that identifies which inline assembly syntax the compiler uses.

List of all compilers that support inline assembly:

| Compiler Name           | Supported CPUs                                                                                                                                             |
| ----------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ARM C Compiler          | ARM, AArch64                                                                                                                                               |
| ARM Compiler            | ARM (ARM/Thumb)                                                                                                                                            |
| Aztec C Compiler        | 6502, Z80, m68k                                                                                                                                            |
| Borland C Compiler      | x86 (16/32-bit), x86_64                                                                                                                                    |
| CC65                    | 6502/65C02                                                                                                                                                 |
| Clang                   | x86 (32-bit), x86_64, ARM, AArch64, PowerPC, RISC-V, MIPS, SystemZ, Hexagon                                                                                |
| Digital Mars Compiler   | x86 (32-bit)                                                                                                                                               |
| EKOPath                 | x86_64                                                                                                                                                     |
| GCC C/C++               | x86 (32-bit), x86_64, ARM, AArch64, PowerPC, RISC-V, MIPS, SPARC, SystemZ, AVR, MSP430, m68k, ColdFire, SH, Xtensa, ARC, MicroBlaze, Nios II, Alpha, IA-64 |
| Green Hill C/C++        | ARM, PowerPC, x86 (16/32-bit), x86_64                                                                                                                      |
| HP ANSI C               | PA-RISC, Itanium (IA-64)                                                                                                                                   |
| IAR C/C++               | ARM, AVR, MSP430, 8051, RL78, RX, RISC-V, STM8                                                                                                             |
| IBM XL C/C++ (Clang)    | PowerPC, z/Architecture                                                                                                                                    |
| ImageCraft C            | M8C / PSoC 1, AVR, ARM, MCS51 / 8051, HC11/HC12, MSP430                                                                                                    |
| Intel Compiler          | x86 (32-bit), x86_64, Intel Itanium                                                                                                                        |
| KEIL CARM               | ARM                                                                                                                                                        |
| KEIL C166               | C166                                                                                                                                                       |
| Metrowerks CodeWarrior  | ARM, PowerPC, m68k, ColdFire, HC12, HCS08, DSP56K                                                                                                          |
| Microsoft C Compiler    | x86 (32-bit)                                                                                                                                               |
| Oracle Solaris Studio   | x86, x86_64, SPARC                                                                                                                                         |
| Pelles C                | x86 (32-bit)                                                                                                                                               |
| Portland Group C/C++    | x86, x86_64, PowerPC (older)                                                                                                                               |
| Renesas C Compiler      | SH, H8, RX, RL78, M16C, V850                                                                                                                               |
| Small Device C Compiler | 8051 (MCS51), Z80, STM8, HC08                                                                                                                              |
| Tiny C Compiler         | x86 (32-bit), x86_64, ARM, AArch64                                                                                                                         |
| Turbo C Compiler        | x86 (16/32-bit)                                                                                                                                            |
| TI Compiler             | TMS320C6x, C28x, MSP430, ARM                                                                                                                               |
| VBCC                    | m68k, PowerPC, ARM                                                                                                                                         |
| Watcom C Compiler       | x86 (16/32-bit)                                                                                                                                            |
| Zortech C++             | x86 (16/32-bit)                                                                                                                                            |

## Contents

| Contents List                           |
| --------------------------------------- |
| `#define IS__INLINE_ASM__SUPPORTED`     |
| `#define INLINE_ASM_TYPE__AZTEC`        |
| `#define INLINE_ASM_TYPE__BORLAND`      |
| `#define INLINE_ASM_TYPE__CC65`         |
| `#define INLINE_ASM_TYPE__CODEWARRIOR`  |
| `#define INLINE_ASM_TYPE__DIGITAL_MARS` |
| `#define INLINE_ASM_TYPE__GNU`          |
| `#define INLINE_ASM_TYPE__IMAGECRAFT`   |
| `#define INLINE_ASM_TYPE__GNU_EXTENDED` |
| `#define INLINE_ASM_TYPE__KEIL_C166`    |
| `#define INLINE_ASM_TYPE__LATTICE`      |
| `#define INLINE_ASM_TYPE__MSVC`         |
| `#define INLINE_ASM_TYPE__RENESAS`      |
| `#define INLINE_ASM_TYPE__SDCC_OLD`     |
| `#define INLINE_ASM_TYPE__SDCC`         |
| `#define INLINE_ASM_TYPE__SOLARIS`      |
| `#define INLINE_ASM_TYPE__TI`           |
| `#define INLINE_ASM_TYPE__VBCC`         |
| `#define INLINE_ASM_TYPE__WATCOM`       |

---
### IS__INLINE_ASM__SUPPORTED

Defined if the compiler supports inline assembly.

---
### ACC (ARM C Compiler) - `INLINE_ASM_TYPE__MSVC`

```c
int VARIABLE_1;
int VARIABLE_2;
	
__asm
{
	MRS VARIABLE_1, CPSR /* COMMENT LINE */
	ORR VARIABLE_1, VARIABLE_1, #0x80
	BIC VARIABLE_1, VARIABLE_1, VARIABLE_2, LSL #7
	MSR CPSR_c, VARIABLE_1
}
```

---
### Aztec C Compiler - `INLINE_ASM_TYPE__AZTEC`

```c
#asm
* COMMENT LINE

LOAD equ $ffd5
	lda #0
	ldx #0
	ldy #$18
	jsr LOAD
	rts
#endasm
```

---
### Borland C Compiler - `INLINE_ASM_TYPE__BORLAND`

```c

asm mov ax, ds; /* COMMENT LINE */
asm {
	pop ax;
	pop ds;
	iret;
}
asm {
	pop ax /* COMMENT LINE */
	pop ds
	iret
}
asm push ds
```

---
### CC65 - `INLINE_ASM_TYPE__CC65`

```c
int foo;
int bar () { return 1; }

asm ("lda %v", foo);
__asm__ ("jsr %v", bar);
__asm__ (
	"lda #0\n" /* COMMENT LINE */
	"sta $0200\n"
	"inx\n"
	"dex\n"
	"jmp $F000\n"
);
```

---
### Clang - `INLINE_ASM_TYPE__GNU`

```c
asm volatile (
	"movl   %%eax, %%ebx\n" /* COMMENT LINE */
	"addl   %%ebx, %%esi" :::
);
asm volatile (
	"movl   %%eax, %%ebx\n" 
	"addl   %%ebx, %0" 
	 : 
	"=r"(out_var)
	::
);
```

---
### Digital Mars Compiler - `INLINE_ASM_TYPE__DIGITAL_MARS`

```c
short VARIABLE;

asm mov AX, VARIABLE

asm mov AH,2
asm mov DL,7
asm int 21H
asm
{
	mov AH,2 /* COMMENT LINE */
	mov DL,7
	int 21H
}
```

---
### EKOPath - `INLINE_ASM_TYPE__GNU`

No Document Found.

---
### GCC - `INLINE_ASM_TYPE__GNU`

```c
asm("int $3");
asm volatile (
	"mov %1, %0\n\t" /* COMMENT LINE */
	"add $1, %0"
	: "=r" (dst) 
	: "r" (src)
);
```

---
### Green Hill C/C++ - `INLINE_ASM_TYPE__GNU`

The documents are not being published and are inaccessible.

---
### HP ANSI C - `INLINE_ASM_TYPE__GNU`

No Document Found.

---
### IAR C/C++ - `INLINE_ASM_TYPE__LATTICE`

```c
int VARIABLE;
asm(
	"IN R0, PIND \n" /* COMMENT LINE */
	"STS VARIABLE, R0"
);
__asm("IN R0, PIND");
```

---
### IBM XL C/C++ - `INLINE_ASM_TYPE__GNU`

```c
int x = func1();
int y = func2();

asm(" LR %0, %1\n": "={r0}"(x) : "{r1}"(y));

asm(
	" SYSSTATE ARCHLVL=2\n" /* COMMENT LINE */
	" WTO 'This is a test',DESC=9,ROUTCDE=2 \\n"
);
asm(" dc x'b93c008a'" :::);
```

---
### ImageCraft C - `INLINE_ASM_TYPE__IMAGECRAFT`
```c
asm ("mov A,5");

asm(
	".LITERAL \n" /* COMMENT LINE */
	"S:: db 40h \n"
	".ENDLITERAL \n"
);

int	VARIABLE = 0;

asm ("mov A,_VARIABLE");
```

---
### Intel Compiler - `INLINE_ASM_TYPE__GNU`, `INLINE_ASM_TYPE__MSVC`

No Document Found.

---
### GNU Extended - `INLINE_ASM_TYPE__GNU_EXTENDED`
```c
__asm__ __volatile__ (
	"movl %0, %%eax;"
	"movl %%eax, %1;" /* COMMENT LINE */
	: "r"(input_var), "r"(result)
	: "=r"(result)   // %0
	: "r"(input_var) // %1
	: "%eax"
);
```

---
### KEIL CARM - `INLINE_ASM_TYPE__MSVC`

```c
int VARIABLE_1;
int VARIABLE_2;

__asm
{
	ADD VARIABLE_1, VARIABLE_2, 1 /* COMMENT LINE */
	EOR VARIABLE_2, VARIABLE_1, VARIABLE_2
}
```

---
### KEIL C166 - `INLINE_ASM_TYPE__KEIL_C166`

```c
#pragma ASM
INC   R8
#pragma ENDASM
```

---
### Metrowerks CodeWarrior - `INLINE_ASM_TYPE__CODEWARRIOR`

```c
asm void foo(void)
{
	x1:  dc.b "Hello world!\n" /* COMMENT LINE */
	@x2: dc.w 5
}

long int VARIABLE;

struct STRUCT {
	long int VALUE;
};

static asm long f(void)
{
	move.l struct(STRUCT.VALUE)(A0), D0
	add.l VARIABLE, D0
	D0.
	rts
}
```

---
### Microsoft C Compiler - `INLINE_ASM_TYPE__MSVC`

```c
__asm
{
	push ebp /* COMMENT LINE */
	mov  ebp, esp
	sub  esp, __LOCAL_SIZE
}

__asm push ebp
__asm mov  ebp, esp
__asm sub  esp, __LOCAL_SIZE
```

---
### Oracle Solaris Studio - `INLINE_ASM_TYPE__SOLARIS`

```c
__asm("\n\
	movl  8(%ebp), %ecx / COMMENT LINE \n\
	addl  12(%ebp), %ecx \n\
	addl  16(%ebp), %ecx \n\
	movl  %ecx, (%esp) \n\
	movl  %ecx, %eax \n\
");
```

---
### Pelles C - `INLINE_ASM_TYPE__MSVC`

```c
__asm mov eax, 0

__asm {
	push eax /* COMMENT LINE */
	mov  eax, 1
	add  eax, 2
	pop  eax
}
```

---
### Portland Group C/C++ - `INLINE_ASM_TYPE__GNU`

```c
asm ("cli");
__asm__ ("sti");

asm( "pushl %eax\n\t" "movl $0, %eax\n\t" "popl %eax");
asm(
	"movl %1, %%eax\n" /* COMMENT LINE */
	"movl %%eax, %0"
	: "=r" (x) : "r" (y) : "%eax"
);
```

---
### Renesas C Compiler - `INLINE_ASM_TYPE__RENESAS`

```c
#pragma ASM
FCLR
MOV.W #0FFH, R0
FSET
#pragma ENDASM
```

Also Supports:

```c
int VARIABLE = 0x07;

asm("MOV.W $$[FB], R0", VARIABLE);

asm("FSET I");
```

---
### Small Device C Compiler (OLD) - `INLINE_ASM_TYPE__SDCC_OLD`

```c
__asm
; COMMENT LINE
label:
	nop
__endasm;
```

---
### Small Device C Compiler - `INLINE_ASM_TYPE__SDCC`

```c
__asm__ ("; COMMENT LINE\nlabel:\n\tnop");
__asm__ (
"; COMMENT LINE\n"
"label:\n"
	"nop"
);
```

---
### Turbo C Compiler - `INLINE_ASM_TYPE__BORLAND`

```c
asm mov ax, ds;
asm {pop ax; pop ds; iret;}
```

---
### TI Compiler - `INLINE_ASM_TYPE__TI`

The documents are not being published and are inaccessible.

---
### VBCC - `INLINE_ASM_TYPE__VBCC`

```c
__asm("nop");

double sin(__reg("fp0") double) = "\tfsin.x\tfp0\n";
```

---
### Watcom C Compiler - `INLINE_ASM_TYPE__WATCOM`

```c
int read_key_stroke();
#pragma aux read_key_stroke = \
	"int 0x16" \
	value [eax];
```

---
### Zortech C++ - `INLINE_ASM_TYPE__DIGITAL_MARS`

```c
short VARIABLE;

asm mov AX, VARIABLE

asm mov AH,2
asm mov DL,7
asm int 21H
asm
{
	mov AH,2 /* COMMENT LINE */
	mov DL,7
	int 21H
}
```

## References

 - [ISO C - wikipedia.org](https://wikipedia.org/wiki/Inline_assembler)
 - [Pre-defined Compiler Macros Wiki - sourceforge.net](https://sourceforge.net/p/predef/wiki/Compilers/)

 - [ACC - arm.com **(Downloading PDF File)**](https://documentation-service.arm.com/static/64008a9d56ea36189d4e8082)
 - [Aztec C Compiler - aztecmuseum.ca](https://www.aztecmuseum.ca/docs/Aztec64_AssemblerNotes_Aug2013.pdf)
 - [Borland C Compiler - unicamp.br](https://www.ic.unicamp.br/~celio/mc404-2004/embedded.htm)
 - [CC65 - cc65.org](https://www.cc65.org/doc/cc65-9.html)
 - [Clang - llvm.org](https://llvm.org/devmtg/2021-11/slides/2021-handling-inline-assembly-in-clang-and-llvm.pdf)
 - [Digital Mars Compiler - digitalmars.com](https://digitalmars.com/ctg/ctgInlineAsm.html)
 - EKOPath - **/!\ NOT EXIST /!\\**
 - [GCC - gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Using-Assembly-Language-with-C.html)
 - Green Hill C/C++ - **/!\ RESTRICTED /!\\**
 - HP ANSI C - **/!\ NOT EXIST /!\\**
 - [IAR C/C++ - iar.com](https://netstorage.iar.com/SuppDB/Public/UPDINFO/007722/ew/doc/EWAVR_CompilerReference.pdf)
 - [IAR C/C++ Development Guide - iar.com](https://wwwfiles.iar.com/arm/webic/doc/ewarm_developmentguide.enu.pdf)
 - [IBM XL C/C++ (Clang) - ibm.com](https://www.ibm.com/docs/en/open-xl-c-cpp-zos/2.1.0?topic=reference-inline-assembly-support)
 - [ImageCraft C Compiler Guide - infineon.com](https://www.infineon.com/assets/row/public/documents/cross-divisions/44/infineon-c-language-compiler-user-guide-usermanual-en.pdf)
 - [ImageCraft Product Features Overview (08-Aug-2006) - media.digikey.com](https://media.digikey.com/pdf/Data%20Sheets/Imagecraft%20PDFs/C-COMPILERS.pdf)
 - Intel Compiler - **/!\ NOT EXIST /!\\**
 - [KEIL CARM - keil.com](https://www.keil.com/support/man/docs/armcc/default.htm)
 - [KEIL C166 - keil.com](https://www.keil.com/support/man/docs/c166/c166_le_tradinline.asp)
 - [Metrowerks CodeWarrior - epac.to](https://lira.epac.to/DOCS-TECH/Programming/C%20-%20C++%20-%20Cpp%20-%20CPlusPlus/C++/CodeWarrior%20C%20and%20C++%20and%20Assembly%20Language%20Reference.pdf)
 - [Microsoft C Compiler - microsoft.com](https://learn.microsoft.com/en-us/cpp/c-language/inline-assembler-c?view=msvc-170)
 - [Oracle Solaris Studio - oracle.com](https://www.oracle.com/application-development/technologies/assembly-language-techniques-solaris-x86-platforms.html)
 - [Pelles C - npackd.org](https://www.npackd.org/p/pelles-c/10)
 - [Portland Group C/C++ - unican.es](https://www.ce.unican.es/man/compiladores/Portland/pgiug.pdf)
 - [Renesas C Compiler - renesas.com](https://www.renesas.com/en/document/apn/programming-guidelines-c-language-0)
 - [Small Device C Compiler - sourceforge.net](https://sdcc.sourceforge.net/doc/sdccman.pdf)
 - [Turbo C Compiler](https://www.ic.unicamp.br/~celio/mc404-2004/embedded.htm)
 - TI Compiler - **/!\ RESTRICTED /!\\**
 - [VBCC - ibaug.de](http://www.ibaug.de/vbcc/doc/vbcc.pdf)
 - [Watcom C Compiler - tuttlem.github.io](https://tuttlem.github.io/2015/10/04/inline-assembly-with-watcom.html)
 - [Watcom C Compiler - pja.edu.pl](https://users.pja.edu.pl/~jms/qnx/help/watcom/compiler-tools/cpasm.html)
 - [Zortech C++ - digitalmars.com](https://digitalmars.com/ctg/ctgInlineAsm.html)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/STRINGIFICATION.gif">
	<a ID="stringification"><b>STRINGIFICATION</b></a> - Defines a macro if stringification is supported on your compiler
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/CHECK_FEATURE/STRINGIFICATION.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/STRINGIFICATION.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_STRINGIFICATION
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CHECK_FEATURE/STRINGIFICATION.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/STRINGIFICATION_128.gif"/>
</p>

Defines `IS__STRINGIFICATION__SUPPORTED` if the compiler supports the stringification (`#`) feature.

## Contents

| Contents List                            |
| ---------------------------------------- |
| `#define IS__STRINGIFICATION__SUPPORTED` |

---
### IS__STRINGIFICATION__SUPPORTED

```c
#define IS__STRINGIFICATION__SUPPORTED
```

Stringification refers to the `#` operator in macros, used to convert pure inputs to strings.

Example:
```c
#define X(A) #A

printf( X( i am testing something ) ); // Will return: "i am testing something" without a new line.
```

## References

 - [Stringification - informatik.haw-hamburg.de](https://users.informatik.haw-hamburg.de/~krabat/FH-Labor/gnupro/2_GNUPro_Compiler_Tools/The_C_Preprocessor/cppStringification.html)
 - [26.5.4 Stringification - gnu.org](https://www.gnu.org/software/c-intro-and-ref/manual/html_node/Stringification.html)
 - [Stringification - stanford.edu](http://gloworm.stanford.edu/local/DOC/cpp_15.html)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/TOKEN_PASTING.gif">
	<a ID="token_pastng"><b>TOKEN PASTNG</b></a> - Defines a macro if token pasting is supported on your compiler
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/CHECK_FEATURE/TOKEN_PASTING.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/TOKEN_PASTING.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_TOKEN_PASTING
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CHECK_FEATURE/TOKEN_PASTING.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/TOKEN_PASTING_128.gif"/>
</p>

Defines `IS__TOKEN_PASTING__SUPPORTED` if the compiler supports the token pasting (`##`) feature.

## Contents

| Contents List                          |
| -------------------------------------- |
| `#define IS__TOKEN_PASTING__SUPPORTED` |

### IS__TOKEN_PASTING__SUPPORTED

```c
#define IS__TOKEN_PASTING__SUPPORTED
```

Token pasting refers to the `##` operator in macros, used to merge two tokens into one during preprocessing.

Example:
```c
#define AB(A, B) A##B

int AB(ma, in)(void) // Expands to: int main(void)
{
	. . .
}
```

## References

 - [Token-pasting operator (##) - microsoft.com](https://learn.microsoft.com/en-us/cpp/preprocessor/token-pasting-operator-hash-hash?view=msvc-170)
 - [3.5 Concatenation - gnu.org](https://gcc.gnu.org/onlinedocs/cpp/Concatenation.html)
 - [# and ## Operators in C - geeksforgeeks.org](https://www.geeksforgeeks.org/c/stringizing-and-token-pasting-operators-in-c/)

----
</details>

---

# ![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/environments.png) Environments

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ABI.gif">
	<a ID="abi"><b>ABI</b></a> - Platform-specific calling convention: endianness, register usage, and argument passing rules.
</summary>

> ⚠️ Important
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

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ABI_128.gif"/>
</p>

The **ABI** layer provides a centralized set of macros and definitions that adapt low-level code to the target platform's Application Binary Interface.

It detects and exposes platform-specific properties including:

* **Endianness** (little-endian vs big-endian)

<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/refs/heads/main/images/repo_projects/libcmt/ENDIANS_TABLE.png" ALT="Endian Table" STYLE="WIDTH: 100%;"/>

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

---
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

---
### \_\_ABI__BIG_ENDIAN\_\_

```c
#define __ABI__BIG_ENDIAN__
```

Defined when the target architecture uses big-endian byte order (most significant byte stored first).

```
  Input         Output
0xABCDEF12 -> 0xABCDEF12
```

---
### \_\_ABI__ENDIAN\_\_

```c
#define __ABI__ENDIAN__
```

Defined `1` if `__ABI__LITTLE_ENDIAN__` defined or defined `2` if `__ABI__BIG_ENDIAN__` defined.

---
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

---
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

---
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

---
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

---
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

---
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

---
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

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ARCHITECTURE.gif">
	<a ID="architecture"><b>ARCHITECTURE</b></a> - You can get information about your CPU architecture.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/ARCHITECTURE.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/ARCHITECTURE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_ARCHITECTURE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/ARCHITECTURE.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ARCHITECTURE_128.gif"/>
</p>

These defines indicate the bit-width supported or used by the system.

`__SYSTEM__BIT__` is a macro that evaluates to the number of bits of the target architecture-typically `8`, `16`, `32`, or `64`-based on the CPU or compiler settings.

## Contents

| CPU Architecture Word Size  |
| --------------------------- |
| `#define __SYSTEM_64_BIT__` |
| `#define __SYSTEM_32_BIT__` |
| `#define __SYSTEM_31_BIT__` |
| `#define __SYSTEM_16_BIT__` |
| `#define __SYSTEM_8_BIT__`  |
| `#define __SYSTEM_BIT__`    |

| Forced / Compiler-Supported Extended Integer Sizes |
| -------------------------------------------------- |
| `#define __HAS_128_BIT__`                          |
| `#define __HAS_64_BIT__`                           |

| Vector Register Sizes            |
| -------------------------------- |
| `#define __HAS_512_BIT_VECTOR__` |
| `#define __HAS_256_BIT_VECTOR__` |
| `#define __HAS_128_BIT_VECTOR__` |

---
### \_\_SYSTEM_64_BIT\_\_

```c
#define __SYSTEM_64_BIT__
```

This macro indicates that the target architecture of the system is 64-bit.

If this macro is defined, the other `32`, `16`, and `8` bit macros might not be defined.

---
### \_\_SYSTEM_32_BIT\_\_

```c
#define __SYSTEM_32_BIT__
```

This macro indicates that the target architecture of the system is 32-bit.

If this macro is defined, the other `64`, `16`, and `8` bit macros might not be defined.

---
### \_\_SYSTEM_31_BIT\_\_

```c
#define __SYSTEM_31_BIT__
```

This macro indicates that the target architecture supports 31-bit addressing (IBM System/390).

`__SYSTEM_32_BIT__` is also defined for this target.

---
### \_\_SYSTEM_16_BIT\_\_

```c
#define __SYSTEM_16_BIT__
```

This macro indicates that the target architecture of the system is 16-bit.

If this macro is defined, the other `64`, `32`, and `8` bit macros might not be defined.

---
### \_\_SYSTEM_8_BIT\_\_

```c
#define __SYSTEM_8_BIT__
```

This macro indicates that the target architecture of the system is 8-bit.

If this macro is defined, the other `64`, `32`, and `16` bit macros might not be defined.

---
### \_\_SYSTEM_BIT\_\_

```c
#define __SYSTEM_BIT__
```

This macro is defined as `64`, `32`, `16`, or `8`, depending on the architecture.

---
### \_\_HAS_128_BIT\_\_

```c
#define __HAS_128_BIT__
```

Defined if the compiler provides a native 128-bit integer type (i.e., `__int128` is available and its size is 16 bytes).

This macro indicates type support, not the system's architecture.

---
### \_\_HAS_64_BIT\_\_

```c
#define __HAS_64_BIT__
```

Defined if the implementation supports 64-bit integer types (e.g., `long long`), even on 16-bit or 32-bit systems.

This macro indicates language/compiler support for 64-bit integers, not that the architecture is 64-bit.

---
### \_\_HAS_512_BIT_VECTOR\_\_

```c
#define __HAS_512_BIT_VECTOR__
```

Defined if the target architecture and compiler provide native 512-bit SIMD vector types (e.g., AVX-512) or ARM SVE 512-bit.

Indicates availability of 512-bit vector registers/types, not general vectorization capability.

---
### \_\_HAS_256_BIT_VECTOR\_\_

```c
#define __HAS_256_BIT_VECTOR__
```

Defined if the target architecture and compiler provide native 256-bit SIMD vector types (e.g., AVX/AVX2) or ARM SVE 256-bit.

Indicates availability of 256-bit vector registers/types.

---
### \_\_HAS_128_BIT_VECTOR\_\_

```c
#define __HAS_128_BIT_VECTOR__
```

Defined if the target architecture and compiler provide native 128-bit SIMD vector types (e.g., SSE, NEON).

Indicates availability of 128-bit vector registers/types.

## References

 - [Pre-defined Compiler Macros Wiki (Architectures) - sourceforge.net](https://sourceforge.net/p/predef/wiki/Architectures/)
 - [IBM System/390 - wikipedia.org](https://wikipedia.org/wiki/IBM_System/390)
 - [Additional Predefined Macros - intel.com](https://www.intel.com/content/www/us/en/docs/dpcpp-cpp-compiler/developer-guide-reference/2024-2/additional-predefined-macros.html)
 - [Predefined macros - microsoft.com](https://learn.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-170)
 - [Using Predefined Preprocessor Symbols - ahamodel.uib.no](https://ahamodel.uib.no/intel/GUID-34CFF5B7-4F26-4FCA-B73B-494A28C9E226.html)
 - [Chapter 3. CPU Platform Detection - aussieai.com](https://www.aussieai.com/book/avx-3-cpu-platform-detection)
 - [Arm C Language Extensions (17.2.6.2 The \_\_ARM_FEATURE_SVE_BITS macro) - arm-software.github.io](https://arm-software.github.io/acle/main/acle.html#the-__arm_feature_sve_bits-macro)
 - [Freescale HC12 Compiler - Motorola HC12 Specific Defines (Page 367) - nxp.com](https://www.nxp.com/docs/en/reference-manual/HC12COMPILERRM.pdf)
 - [HC(S)08 Compiler Manual - Freescale HC08 Specific Defines (Page 352) - ece-classes.usc.edu](https://ece-classes.usc.edu/ee459/library/documents/Compiler_HC08.pdf)
 - [CrossCore® Embeded Studio 1.1 - C/C++ Compiler Manual for SHARC® Processors - analog.com](https://www.analog.com/media/en/dsp-documentation/software-manuals/cces_1-1-0_sharc_comp_man_rev_1-2.pdf)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/CPU.gif">
	<a ID="cpu"><b>CPU</b></a> - You can get information about CPU in runtime.
</summary>

> ⚠️ Important
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

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/CPU_128.gif"/>
</p>

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

---
### \_\_CPU_INTEL\_\_

```c
#define __CPU_INTEL__
```

Indicates the target architecture is Intel CPU.

In `ARCHITECTURE.H`; `__SYSTEM_64_BIT__`, `__SYSTEM_32_BIT__`, and `__SYSTEM_16_BIT__` are defined.

---
### \_\_CPU_ARM\_\_

```c
#define __CPU_ARM__
```

Indicates the target architecture is ARM CPU.

In `ARCHITECTURE.H`; `__SYSTEM_64_BIT__` and `__SYSTEM_32_BIT__` are defined.

---
### \_\_CPU_AMD_X86\_\_

```c
#define __CPU_AMD_X86__
```

Indicates the target architecture is Intel AMD CPU.

In `ARCHITECTURE.H`; `__SYSTEM_64_BIT__` and `__SYSTEM_32_BIT__` are defined.

---
### \_\_CPU_POWERPC\_\_

```c
#define __CPU_POWERPC__
```

Indicates the target architecture is IBM PowerPC CPU.

In `ARCHITECTURE.H`; `__SYSTEM_64_BIT__` and `__SYSTEM_32_BIT__` are defined.

---
### \_\_CPU_RISCV\_\_

```c
#define __CPU_RISCV__
```

Indicates the target architecture is RISC-V CPU.

---
### \_\_CPU_HC12\_\_

```c
#define __CPU_HC12__
```

Indicates the target architecture is Motorola/Freescale HC12 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_16_BIT__` is defined.

---
### \_\_CPU_HCS08\_\_

```c
#define __CPU_HCS08__
```

Indicates the target architecture is Freescale HC08 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_16_BIT__` is defined.

---
### \_\_CPU_HC08\_\_

```c
#define __CPU_HC08__
```

Indicates the target architecture is Motorola HCS08 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_16_BIT__` is defined.

---
### \_\_CPU_COLDFIRE\_\_

```c
#define __CPU_COLDFIRE__
```

Indicates the target architecture is Motorola/Freescale ColdFire CPU.

---
### \_\_CPU_M68K\_\_

```c
#define __CPU_M68K__
```

Indicates the target architecture is Motorola 680x0 (M68K) CPU family.

---
### \_\_CPU_SH\_\_

```c
#define __CPU_SH__
```

Indicates the target architecture is SuperH (SH) CPU family.

---
### \_\_CPU_MIPS\_\_

```c
#define __CPU_MIPS__
```

Indicates the target architecture is MIPS CPU family.

---
### \_\_CPU_SPARC\_\_

```c
#define __CPU_SPARC__
```

Indicates the target architecture is SPARC CPU family.

---
### \_\_CPU_6502\_\_

```c
#define __CPU_6502__
```

Indicates the target architecture is MOS Technology 6502 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_8_BIT__` is defined.

---
### \_\_CPU_Z80\_\_

```c
#define __CPU_Z80__
```

Indicates the target architecture is Zilog Z80 CPU.

In `ARCHITECTURE.H`: `__SYSTEM_8_BIT__` is defined.

---
### \_\_CPU_TI\_\_

```c
#define __CPU_TI__
```

Indicates the target architecture is Texas Instruments CPU/DSP family.

---
### \_\_CPU_SHARC\_\_

```c
#define __CPU_SHARC__
```

Indicates the target architecture is Analog Devices SHARC DSP.

In `ARCHITECTURE.H`: `__SYSTEM_32_BIT__` is defined.

---
### \_\_CPU_BLACKFIN\_\_

```c
#define __CPU_BLACKFIN__
```

Indicates the target architecture is Analog Devices Blackfin DSP.

---
### \_\_CPU_DSP56K\_\_

```c
#define __CPU_DSP56K__
```

Indicates the target architecture is Motorola/Freescale DSP56000 family.

---
### \_\_SYSTEM_370\_\_
```c
#define __SYSTEM_370__
```

Indicates that the compiled, hosted, or targeted hardware is System/370.

---
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

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/is_stdc.gif">
	<a ID="knr_style"><b>KNR_STYLE</b></a> - Creates a macro that determines whether the compiler uses the STD ANSI C standard or the K&R substandard 1989.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/KNR_STYLE.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/KNR_STYLE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_KNR_STYLE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/KNR_STYLE.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/KNR_STYLE_128.gif"/>
</p>

Provides compatibility macros for pre-ANSI (K&R) C compilers.

If the compiler does not support ANSI C syntax, `KNR_STYLE` is defined and missing language keywords are replaced with empty macro definitions to allow the codebase to compile under legacy environments.

## Contents

| Contents List       |
| ------------------- |
| `#define KNR_STYLE` |
| `#define void`      |
| `#define const`     |
| `#define volatile`  |
| `#define signed`    |
| `#define unsigned`  |

### KNR_STYLE

```c
#define KNR_STYLE
```

Defined if the compiler is not using ANSI C syntax (i.e., K&R / pre-C89 mode).

Indicates that the compiler lacks support for standard function prototypes and modern type qualifiers.

### void

```c
#define void
```

Defined as `char` for K&R compilers that do not support the `void` keyword.

### const

```c
#define const
```

Defined as an empty macro for K&R compilers that do not support the `const` type qualifier.

### volatile

```c
#define volatile
```

Defined as an empty macro for K&R compilers that do not support the `volatile` type qualifier.

### signed

```c
#define signed
```

Defined as an empty macro for K&R compilers that do not support the explicit `signed` keyword.

### unsigned

```c
#define unsigned
```

Defined as an empty macro for Microsoft C Compiler version 2.03 and earlier, where explicit `unsigned` keyword handling may be incomplete or incompatible.

 - ["Microsoft C Compiler Versions 2.03 and earlier treat the **`char`** type as unsigned." - Microsoft C Compiler Page 202](https://archive.computerhistory.org/resources/access/text/2024/05/102734492-05-0002-acc.pdf#page=111&zoom=400,180,500)

## References

 - [ANSI C (C89/C90) Standard Overview - open-std.org](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf)
 - [Lattice C 8086 1982 - bitsavers.org](http://www.bitsavers.org/pdf/lattice/Lattice_C_8086_1982.pdf)
 - [Microsoft C Compiler - computerhistory.org](https://archive.computerhistory.org/resources/access/text/2024/05/102734492-05-0002-acc.pdf)
 - [C (programming language) (K&R C) - wikipedia.org](https://en.wikipedia.org/wiki/C_(programming_language)#K&R_C)
 - [Differences between ANSI C and K&R C - sanfoundry.com](https://www.sanfoundry.com/difference-between-ansi-c-knr-c/#:~:text=Explanation%3A,safer%20and%20easier%20to%20understand.)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/PLATFORM.gif">
	<a ID="platform"><b>PLATFORM</b></a> - Centralized platform detection macros for operating systems and environments.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/PLATFORM.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/PLATFORM.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_PLATFORM
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/PLATFORM.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/PLATFORM_128.gif"/>
</p>

Provides a unified compile-time platform detection layer.

The header exposes macros identifying the target operating system or execution environment, allowing portable platform-specific code paths through conditional compilation.

All platform identification is centralized here so the rest of the codebase avoids compiler-specific predefined macros.

## Contents

| Content                                    | Platform Name                                                                               |
| ------------------------------------------ | ------------------------------------------------------------------------------------------- |
| `#define __PLATFORM_AIX__`                 | [IBM AIX](https://wikipedia.org/wiki/IBM_AIX)                                               |
| `#define __PLATFORM_ANDROID__`             | [Android](https://wikipedia.org/wiki/Android_(operating_system))                            |
| `#define __PLATFORM_AMDAHL_UTS__`          | [Amdahl UTS](https://wikipedia.org/wiki/Amdahl_UTS)                                         |
| `#define __PLATFORM_AMIGAOS__`             | [AmigaOS](https://wikipedia.org/wiki/AmigaOS)                                               |
| `#define __PLATFORM_APOLLO_AEGIS__`        | [Apollo - AEGIS](https://wikipedia.org/wiki/Domain/OS)                                      |
| `#define __PLATFORM_APOLLO_DOMAIN_OS__`    | [Apollo - Domain/OS](https://wikipedia.org/wiki/Domain/OS)                                  |
| `#define __PLATFORM_BEOS__`                | [BeOS](https://wikipedia.org/wiki/BeOS)                                                     |
| `#define __PLATFORM_BLUE_GENE__`           | [IBM Blue Gene](https://wikipedia.org/wiki/IBM_Blue_Gene)                                   |
| `#define __PLATFORM_BSD_ENVIRONMENT__`     | [Berkeley Software Distribution](https://wikipedia.org/wiki/Berkeley_Software_Distribution) |
| `#define __PLATFORM_BSD_OS__`              | [BSD/OS](https://wikipedia.org/wiki/BSD/OS)                                                 |
| `#define __PLATFORM_CONVEXOS__`            | [Convex Computer](https://wikipedia.org/wiki/Convex_Computer)                               |
| `#define __PLATFORM_CYGWIN_ENVIRONMENT__`  | [Cygwin](https://wikipedia.org/wiki/Cygwin)                                                 |
| `#define __PLATFORM_DG_UX__`               | [DG/UX](https://wikipedia.org/wiki/DG/UX)                                                   |
| `#define __PLATFORM_DRAGONFLY__`           | [DragonFly BSD](https://wikipedia.org/wiki/DragonFly_BSD)                                   |
| `#define __PLATFORM_DYNIX_PTX__`           | [DYNIX](https://wikipedia.org/wiki/DYNIX)                                                   |
| `#define __PLATFORM_ECOS__`                | [ECos](https://wikipedia.org/wiki/ECos)                                                     |
| `#define __PLATFORM_EMX_ENVIRONMENT__`     | [EMX (programming environment)](https://wikipedia.org/wiki/EMX_(programming_environment))   |
| `#define __PLATFORM_FREEBSD__`             | [FreeBSD](https://wikipedia.org/wiki/FreeBSD)                                               |
| `#define __PLATFORM_GNU_HURD__`            | [GNU Hurd](https://wikipedia.org/wiki/GNU_Hurd)                                             |
| `#define __PLATFORM_GNU_KFREEBSD__`        | [Debian GNU/kFreeBSD](https://wikipedia.org/wiki/Debian_GNU/kFreeBSD)                       |
| `#define __PLATFORM_GNU_LINUX__`           | [Linux](https://wikipedia.org/wiki/Linux)                                                   |
| `#define __PLATFORM_HI_UX_MPP__`           | [OSF/1](https://wikipedia.org/wiki/OSF/1#OSF/1_AD)                                          |
| `#define __PLATFORM_HP_UX__`               | [HP-UX](https://wikipedia.org/wiki/HP-UX)                                                   |
| `#define __PLATFORM_IBM_OS_400__`          | [IBM iSeries OS/400](https://public.dhe.ibm.com/as400/marketing/pdf/v5r1/os.pdf)            |
| `#define __PLATFORM_INTEGRITY__`           | [Integrity (operating system)](https://wikipedia.org/wiki/Integrity_(operating_system))     |
| `#define __PLATFORM_INTERIX_ENVIRONMENT__` | [Interix](https://wikipedia.org/wiki/Interix)                                               |
| `#define __PLATFORM_IRIX__`                | [IRIX](https://wikipedia.org/wiki/IRIX)                                                     |
| `#define __PLATFORM_LINUX_KERNEL__`        | [Linux kernel](https://wikipedia.org/wiki/Linux_kernel)                                     |
| `#define __PLATFORM_LYNXOS__`              | [LynxOS](https://wikipedia.org/wiki/LynxOS)                                                 |
| `#define __PLATFORM_MACOS__`               | [macOS](https://wikipedia.org/wiki/MacOS)                                                   |
| `#define __PLATFORM_MICROWARE_OS_9__`      | [OS-9](https://wikipedia.org/wiki/OS-9)                                                     |
| `#define __PLATFORM_MINIX__`               | [Minix](https://wikipedia.org/wiki/Minix)                                                   |
| `#define __PLATFORM_MORPHOS__`             | [MorphOS](https://wikipedia.org/wiki/MorphOS)                                               |
| `#define __PLATFORM_MPE_IX__`              | [MPE/iX](https://wikipedia.org/wiki/MPE)                                                    |
| `#define __PLATFORM_MSDOS__`               | [MS-DOS](https://wikipedia.org/wiki/MS-DOS)                                                 |
| `#define __PLATFORM_NETBSD__`              | [NetBSD](https://wikipedia.org/wiki/NetBSD)                                                 |
| `#define __PLATFORM_NONSTOP__`             | [NonStop (server computers)](https://wikipedia.org/wiki/NonStop_(server_computers))         |
| `#define __PLATFORM_NUCLEUS_RTOS__`        | [Nucleus RTOS](https://wikipedia.org/wiki/Nucleus_RTOS)                                     |
| `#define __PLATFORM_OPENBSD__`             | [OpenBSD](https://wikipedia.org/wiki/OpenBSD)                                               |
| `#define __PLATFORM_OS2__`                 | [OS/2](https://wikipedia.org/wiki/OS/2)                                                     |
| `#define __PLATFORM_PALM_OS__`             | [Palm OS](https://wikipedia.org/wiki/Palm_OS)                                               |
| `#define __PLATFORM_PLAN9__`               | [Plan 9 from Bell Labs](https://wikipedia.org/wiki/Plan_9_from_Bell_Labs)                   |
| `#define __PLATFORM_PYRAMID_DC_OSX__`      | [DC/OSx](https://wikipedia.org/wiki/DC/OSx)                                                 |
| `#define __PLATFORM_QNX__`                 | [QNX](https://wikipedia.org/wiki/QNX)                                                       |
| `#define __PLATFORM_RELIANT_UNIX__`        | [Reliant UNIX (SINIX)](https://wikipedia.org/wiki/SINIX)                                    |
| `#define __PLATFORM_SCO_OPENSERVER__`      | [OpenServer](https://wikipedia.org/wiki/OpenServer)                                         |
| `#define __PLATFORM_SOLARIS__`             | [Oracle Solaris](https://wikipedia.org/wiki/Oracle_Solaris)                                 |
| `#define __PLATFORM_STRATUS_VOS__`         | [Stratus VOS](https://wikipedia.org/wiki/Stratus_VOS)                                       |
| `#define __PLATFORM_SVR4_ENVIRONMENT__`    | [SVR4 (UNIX System V)](https://wikipedia.org/wiki/UNIX_System_V)                            |
| `#define __PLATFORM_SYLLABLE__`            | [Syllable Desktop](https://wikipedia.org/wiki/Syllable_Desktop)                             |
| `#define __PLATFORM_SYMBIAN_OS__`          | [Symbian](https://wikipedia.org/wiki/Symbian)                                               |
| `#define __PLATFORM_TRU64_OSF__`           | [Tru64 UNIX](https://wikipedia.org/wiki/Tru64_UNIX)                                         |
| `#define __PLATFORM_ULTRIX__`              | [Ultrix](https://wikipedia.org/wiki/Ultrix)                                                 |
| `#define __PLATFORM_UNICOS__`              | [UNICOS](https://wikipedia.org/wiki/UNICOS)                                                 |
| `#define __PLATFORM_UNICOS_MP__`           | [UNICOS/mp](https://wikipedia.org/wiki/UNICOS)                                              |
| `#define __PLATFORM_UNIX_ENVIRONMENT__`    | [Unix](https://wikipedia.org/wiki/Unix)                                                     |
| `#define __PLATFORM_UNIXWARE__`            | [UnixWare](https://wikipedia.org/wiki/UnixWare)                                             |
| `#define __PLATFORM_UWIN_ENVIRONMENT__`    | [UWIN](https://wikipedia.org/wiki/UWIN)                                                     |
| `#define __PLATFORM_VMS__`                 | [VMS](https://wikipedia.org/wiki/VMS)                                                       |
| `#define __PLATFORM_VXWORKS__`             | [VxWorks](https://wikipedia.org/wiki/VxWorks)                                               |
| `#define __PLATFORM_WINDOWS__`             | [Microsoft Windows](https://wikipedia.org/wiki/Microsoft_Windows)                           |
| `#define __PLATFORM_WINDOWS_CE__`          | [Windows CE](https://wikipedia.org/wiki/Windows_CE)                                         |
| `#define __PLATFORM_WINDU_ENVIRONMENT__`   | [Wind/U (Bristol Technology)](https://wikipedia.org/wiki/Bristol_Technology)                |
| `#define __PLATFORM_ZOS__`                 | [IBM z/OS](https://wikipedia.org/wiki/Z/OS)                                                 |

## References

 - [Pre-defined Compiler Macros Wiki (Operating Systems) - sourceforge.net](https://sourceforge.net/p/predef/wiki/OperatingSystems/)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/W_XOR_X.gif">
	<a ID="w_xor_x"><b>W_XOR_X</b></a> - Detects whether the target platform enforces W^X or W!->X policies and exposes the result through preprocessor macros.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/W_XOR_X.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/W_XOR_X.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_W_XOR_X
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/W_XOR_X.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/W_XOR_X_128.gif"/>
</p>

Compile-time detection of platform-enforced W^X memory policy.

This only covers platforms with default, out-of-the-box enforcement.

Optional/opt-in mechanisms (Linux grsecurity/PaX MPROTECT, Windows ACG, Android per-SDK-level policy, NetBSD PaX) depend on runtime or build configuration this file cannot see, so they are left undefined here -- check for them yourself if relevant.
 
See platform-specific memory protection APIs in your own code for how to actually allocate/transition memory on each platform (e.g. `mmap/mprotect`, `VirtualAlloc`/`VirtualProtect`, `pthread_jit_write_protect_np`).

## Contents

| Contents List           |
| ----------------------- |
| `#define W_XOR_X`       |
| `#define W_NOT_TO_X`    |
| `#define IS_W_XOR_X`    |
| `#define IS_W_NOT_TO_X` |

### W_XOR_X

```c
#define W_XOR_X
```

Defined if a memory page can only ever be RW or RX, never RWX at the same time, as enforced by the OS.

### W_NOT_TO_X

```c
#define W_NOT_TO_X
```

Defined if a page, once writable, can NEVER become executable at all (no W->X transition permitted by any means, not even dual-mapping).

Stricter than W_XOR_X; only defined where that stronger guarantee holds.

### IS_W_XOR_X

```c
#define IS_W_XOR_X
```

Always defined, 0 or 1. Same information as W_XOR_X, usable in runtime expressions (if (IS_W_XOR_X)) where a possibly-undefined macro can't be.

### IS_W_NOT_TO_X

```c
#define IS_W_NOT_TO_X
```

Always defined, 0 or 1. Same information as W_NOT_TO_X, usable in runtime expressions (if (IS_W_NOT_TO_X)) where a possibly-undefined macro can't be.

## References

 - [W^X - wikipedia.org](https://wikipedia.org/wiki/W%5EX)
 - [Enforcing a write-xor-execute memory policy from usermode - labs.portcullis.co.uk](https://labs.portcullis.co.uk/blog/enforcing-a-write-xor-execute-memory-policy-from-usermode/)

----
</details>

---

# ![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/KEYWORDS.gif) KEYWORDS

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/BOOLEAN.gif">
	<a ID="boolean"><b>BOOLEAN</b></a> - Boolean definitions.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/BOOLEAN.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/BOOLEAN.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_BOOLEAN
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/BOOLEAN.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/BOOLEAN_128.gif"/>
</p>

Provides a portable boolean interface for C that automatically adapts to the compiler's native boolean implementation whenever available.

Rather than forcing a fixed type or value definitions, `BOOLEAN.H` detects the most suitable compiler-supported boolean type and constants, falling back to a portable implementation only when necessary.

If a standard compiler boolean header (such as `stdbool.h` or an equivalent implementation) has already been included, this module transparently adopts it.

Otherwise, it includes the appropriate compiler header itself before exposing a consistent set of boolean definitions.

The result is a single, compiler-independent interface that remains fully compatible with existing code while preserving the compiler's preferred boolean representation whenever possible.

## Contents

| Contents List                           |
| --------------------------------------- |
| `#define BOOLEAN`                       |
| `#define boolean`                       |
| `#define TRUE`                          |
| `#define true`                          |
| `#define FALSE`                         |
| `#define false`                         |
| `#define __bool_true_false_are_defined` |

---
### BOOLEAN

```c
#define BOOLEAN
#define boolean
```

Defines the project's portable boolean type.

When supported, it aliases the compiler's native boolean type; otherwise it falls back to an implementation based on `unsigned char`.

---
### TRUE

```c
#define TRUE
#define true
```

Defines the boolean true value.

Uses the compiler's native definition whenever available, otherwise provides a portable fallback value.

---
### FALSE

```c
#define FALSE
#define false
```

Defines the boolean false value.

Uses the compiler's native definition whenever available, otherwise provides a portable fallback value.

---
### \_\_bool\_true\_false\_are\_defined

```c
#define __bool_true_false_are_defined
```

Defines the standard compatibility macro indicating that boolean definitions are available, matching the behavior expected by implementations compatible with `stdbool.h`.

---
## References

 - [Arithmetic types - cppreference.com](https://cppreference.com/c/language/arithmetic_types#Boolean_type)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/ignore.gif">
	<b>IGNORE_VAR</b> - Tag the variables that may not be used in the project. (For ignoring warnings)
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/IGNORE_VAR.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/IGNORE_VAR.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_IGNORE_VAR
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/IGNORE_VAR.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/IGNORE_VAR_128.gif"/>
</p>

```c
#define IGNORE_VAR(VARIABLE)
#define ignore_var(variable)
```

This keyword tells the compiler that the variable may not be used in the program.

If unused, the compiler ignores this variable and continues compiling the program without generating any warnings.

To use, simply add the tag in front of the variable.

```c
IGNORE_VAR(test);

ignore_var(i);
```

**Example**:
```c
int main(int argc, char **argv)
{
	ignore_var(argc);

	...
}
```

## References
 - [Cast to void to silence warnings - seas.harvard.edu](https://cs61.seas.harvard.edu/site/2019/Patterns/)
 - [`warning` pragma - microsoft.com](https://learn.microsoft.com/en-us/cpp/preprocessor/warning?view=msvc-170)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/plaltform_corssing.gif">
	<b>TYPES</b> - Standard and fixed-size types with support macros for portability
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/TYPES.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/TYPES.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_TYPES
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/TYPES.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/TYPES_128.gif"/>
</p>

This header defines:

- Platform-independent **standard types**

- Fixed-width integer and floating-point types

- **Feature macros** to detect compiler and architecture support

All definitions are conditional and portable. Unsupported types are not defined.
## Contents

### Standard Types

Use these when you want **semantic clarity** instead of raw C types.

| Name                 | Description                                         |
| -------------------- | --------------------------------------------------- |
| `BYTE`, `byte`       | Unsigned one byte storage unit (char)               |
| `LET`, `let`         | Type for array indexing and sizes (like `size_t`)   |
| `VAR`, `var`         | Signed integer type with the same width as `void *` |
| `PTR`, `ptr`         | Generic pointer type                                |
| `FAR_PTR`, `far_ptr` | Far pointer type                                    |

### Types with Fixed Sizes

Signedness depends on context and naming convention used internally.

| Name               | Description                                                                 |
| ------------------ | --------------------------------------------------------------------------- |
| `BIT8`, `bit8`     | 8-bit unsigned or signed integer                                            |
| `BIT16`, `bit16`   | 16-bit unsigned or signed integer                                           |
| `BIT32`, `bit32`   | 32-bit unsigned or signed integer                                           |
| `BIT64`, `bit64`   | 64-bit unsigned or signed integer (if supported in non64-bit architectures) |
| `BIT128`, `bit128` | 128-bit unsigned or signed integer (if supported)                           |

### Floating-Point Types

These map to the **closest native compiler types**.

| Name                   | Description                               |
| ---------------------- | ----------------------------------------- |
| `FLOAT32`, `float32`   | 32-bit single-precision floating-point    |
| `FLOAT64`, `float64`   | 64-bit double-precision floating-point    |
| `FLOAT128`, `float128` | 128-bit extended-precision floating-point |

### Support Detection Macros

Check these **before using the corresponding types**:

| Name                  | Description                                                                         |
| --------------------- | ----------------------------------------------------------------------------------- |
| `SUPPORTED__BIT64`    | Defined if compiler supports BIT64 type (Mostly for 16-bit or 32-bit architectures) |
| `SUPPORTED__BIT128`   | Defined if compiler supports BIT128 type                                            |
| `SUPPORTED__FLOAT64`  | Defined if compiler supports FLOAT64 type                                           |
| `SUPPORTED__FLOAT128` | Defined if compiler supports FLOAT128 type                                          |

No macro -> no guarantee -> do not use the type.

> **Portability Notes:**  
> Types are **only defined when natively supported**.
> `BIT128` and `FLOAT128` depend entirely on compiler + architecture.
> On some platforms, double may be 32-bit. Which `FLOAT64` will not defined.
> `SUPPORTED__BIT64` is still defined on true 64-bit architectures.

Always guard usage with the corresponding `SUPPORTED__*` macro.

## References

 - [C Data Types - os.mbed.com](https://os.mbed.com/handbook/C-Data-Types)
 - [ILP32 and LP64 data models and data type sizes - ibm.com](https://www.ibm.com/docs/en/ent-metalc-zos/3.1.0?topic=environments-ilp32-lp64-data-models-data-type-sizes)
 - [Data Type Ranges - microsoft.com](https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170)
 - [Data Types and Sizes - oracle.com](https://docs.oracle.com/cd/E19253-01/817-6223/chp-typeopexpr-2/index.html)
 - [8-bit computing - wikipedia.org](https://wikipedia.org/wiki/8-bit_computing)
 - [16-bit computing - wikipedia.org](https://wikipedia.org/wiki/16-bit_computing)
 - [32-bit computing - wikipedia.org](https://wikipedia.org/wiki/32-bit_computing)
 - [64-bit computing - wikipedia.org](https://wikipedia.org/wiki/64-bit_computing)
 - [128-bit computing - wikipedia.org](https://wikipedia.org/wiki/128-bit_computing)
 - [C data types - wikipedia.org](https://en.wikipedia.org/wiki/C_data_types)
 - [6.1.1 128-bit Integers - gnu.org](https://gcc.gnu.org/onlinedocs/gcc-16.1.0/gcc/_005f_005fint128.html)
 - [FAR Keyword - CMT](#far)

----
</details>

---

# ![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/LIB.gif) LIB







---

# ![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/OS_API.gif) OS API

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/CLEAR_INSTRUCTION_CACHE.gif">
	<a ID="clear_instruction_cache"><b>CLEAR_INSTRUCTION_CACHE</b></a> - Ensure freshly written machine code is executed
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/OS_API/CLEAR_INSTRUCTION_CACHE.H](https://github.com/TeomanDeniz/CMT/blob/main/OS_API/CLEAR_INSTRUCTION_CACHE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CLEAR_INSTRUCTION_CACHE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/OS_API/CLEAR_INSTRUCTION_CACHE.H"
> ```

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/CLEAR_INSTRUCTION_CACHE_128.gif"/>
</p>

Modern CPUs commonly use separate **data** and **instruction** caches.

When you write executable memory (e.g., JIT, trampolines, runtime patching), the write updates the **data cache** only.
The **instruction cache** may still hold stale instructions for the same address range.

Without explicit synchronization, the CPU can execute outdated or invalid instructions.

After invoking the macro:

* Data cache lines covering `[begin, end)` are written back (if required by architecture)
* Instruction cache lines covering `[begin, end)` are invalidated
* Subsequent execution fetches updated instructions from memory

**Architecture notes:**

* **x86 / x86_64**: Typically coherent; often no visible effect
* **ARM / RISC-V / MIPS / PowerPC**: Explicit cache maintenance required

---
## Contents

| Contents List                                 |
| --------------------------------------------- |
| `#define CLEAR_INSTRUCTION_CACHE(BEGIN, END)` |
| `#define clear_instruction_cache(begin, end)` |

---
### CLEAR_INSTRUCTION_CACHE

```c
#define CLEAR_INSTRUCTION_CACHE(BEGIN, END)
#define clear_instruction_cache(begin, end)
```

Forces instruction cache synchronization for the address range `[BEGIN, END)`.

Both macro variants are provided for stylistic preference.
They perform identical operations.

* `BEGIN` - start address (inclusive)
* `END` - end address (exclusive)

Intended for:

* JIT compilers
* Runtime code generation
* Hot patching
* Trampoline injection
* Self-modifying code

**Examples:**

```c
memcpy(code_ptr, bytes, size);
CLEAR_INSTRUCTION_CACHE(code_ptr, code_ptr + size);
mprotect(page, RX);
```

Call it **after writing executable bytes** and **before execution**.

Failure to do so on non-coherent architectures results in undefined behavior.

Another example:

```c
#include <stdio.h>
#include <CMT/OS_API/CLEAR_INSTRUCTION_CACHE.H>

void foo(void)
{
	printf("Hello before cache flush\n");
}

int main(void) {
	void *begin = (void *)&foo;
	void *end = (void *)((char *)&foo + 64); // fake range

	CLEAR_INSTRUCTION_CACHE(begin, end);

	foo();

	return (0);
}
```

---
## References

 - [7.12 Other Built-in Functions Provided by GCC (void \_\_builtin\_\_\_clear_cache (void \*begin, void \*end)) - gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html#index-_005f_005fbuiltin_005f_005f_005fclear_005fcache)
 - [FlushInstructionCache function (processthreadsapi.h) - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-flushinstructioncache)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/MEMORY.gif">
	<a ID="memory"><b>MEMORY</b></a> - Memory allocation, protection, paging, and executable memory utilities.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/OS_API/MEMORY.H](https://github.com/TeomanDeniz/CMT/blob/main/OS_API/MEMORY.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_MEMORY
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/OS_API/MEMORY.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/MEMORY_128.gif"/>
</p>

Cross-platform memory management utilities for normal, far, paged, and executable memory allocation.

Provides lightweight wrappers around standard allocators while exposing low-level features such as page allocation, runtime memory protection changes, executable memory regions, and far-pointer compatibility for legacy architectures.

Designed to work across 16-bit, 32-bit, and 64-bit environments with automatic architecture-aware behavior and fallback handling.

If `stdlib` exists in your compiler, the function will simply uses the `malloc`, `calloc`, and `free` functions for best performance.

Far pointer functions are automatically downgrades to normal functions in 32-bit and 64-bit architectures.

---
## Contents

| Normal Memory Allocation Functions   |
| ------------------------------------ |
| `LET LENGTH(PTR);`                   |
| `PTR ALLOC(LEN);`                    |
| `PTR CALLOC(LEN);`                   |
| `PTR REALLOC(PTR, LEN);`             |
| `void FREE(PTR);`                    |

| Far Memory Allocation Functions      |
| ------------------------------------ |
| `LET FAR_LENGTH(FAR_PTR);`           |
| `FAR_PTR FAR_ALLOC(LEN);`            |
| `FAR_PTR FAR_CALLOC(LEN);`           |
| `FAR_PTR FAR_REALLOC(FAR_PTR, LEN);` |
| `void FAR_FREE(FAR_PTR);`            |

| Memory Management Functions                     |
| ----------------------------------------------- |
| `#define PTR_MODE_NONE`                         |
| `#define PTR_MODE_RWX`                          |
| `#define PTR_MODE_RW`                           |
| `#define PTR_MODE_RX`                           |
| `#define PTR_MODE_WX`                           |
| `#define PTR_MODE_R`                            |
| `#define PTR_MODE_W`                            |
| `#define PTR_MODE_X`                            |
| `BOOLEAN MEMORY_MODE(PTR, LET, BIT32);`         |
| `BOOLEAN FAR_MEMORY_MODE(FAR_PTR, LET, BIT32);` |

| Executable Memory Allocation Functions          |
| ----------------------------------------------- |
| `PTR ALLOC_EXE(const PTR OP_CODES, LET);`       |
| `LET LENGTH_EXE(PTR);`                          |
| `void FREE_EXE(PTR);`                           |
| `FAR_PTR FAR_ALLOC_EXE(const PTR OP_CODES, LET);` |
| `LET FAR_LENGTH_EXE(FAR_PTR);`                  |
| `void FAR_FREE_EXE(FAR_PTR);`                   |

| Page Memory Management Objects       |
| ------------------------------------ |
| `LET PAGE_SIZE;`                     |
| `PTR ALLOC_PAGE(LET, BIT32, BIT32);` |
| `void FREE_PAGE(PTR);`               |
| `LET GET_PAGE_SIZE(void)`            |

---
### ALLOC

```c
PTR	ALLOC(LEN);
```

Allocates a raw block of memory of size `LEN` bytes. The returned memory is uninitialized, meaning it may contain garbage data.

This is a direct wrapper over `malloc` when available.

Use it when you intend to immediately overwrite the allocated memory.

For not conflicting functions like `calloc`, `realloc` and `free`, there is no lowercase version of these functions.

Example:
```c
char	*test_memory = (char *)ALLOC(42);

test_memory[0] = 't'
test_memory[1] = 'e'
test_memory[2] = 's'
test_memory[3] = 't'
test_memory[4] = 0

...
```

---
### CALLOC

```c
PTR	CALLOC(LEN);
```

Allocates a block of memory of size `LEN` bytes and initializes all bytes to zero.

This is a direct wrapper over `calloc` when available.

Use it when you need predictable zero-initialized memory (e.g. arrays, structs, buffers).

> ⚠️ Unlike the standard `calloc(count, size)`, `CALLOC` takes a **single** total byte count. There is no separate element-count argument, so no internal multiplication overflow check is performed. If you are allocating an array, calculate and validate `count * size` yourself before calling.

Example:
```c
char	*test_memory = (char *)CALLOC(42);

test_memory[0] = 't'
test_memory[1] = 'e'
test_memory[2] = 's'
test_memory[3] = 't'

...
```

---
### REALLOC

```c
PTR	REALLOC(PTR, LEN);
```

Resizes a previously allocated memory block (`PTR`) to `LEN` bytes.

* If the new size is larger, the existing data is preserved and the extra memory is uninitialized.
* If smaller, the block is truncated.
* May move the memory to a new location - always use the returned pointer.
* If `PTR` is `NULL`, behaves like `malloc`.
* If `LEN` is `0`, behaves like `free`.

Use it when you need to dynamically grow or shrink buffers.

Example:
```c
char	*buffer = (char *)CALLOC(4);

buffer[0] = 't';
buffer[1] = 'e';
buffer[2] = 's';
buffer[3] = 't';

// resize to hold more data
buffer = (char *)REALLOC(buffer, 8);

buffer[4] = '!';
buffer[5] = '!';
buffer[6] = '!';
buffer[7] = '\0';

// buffer now contains "test!!!"
```

---
### FREE

```c
void	FREE(PTR);
```

Deallocates a previously allocated memory block.

The pointer must either come from `ALLOC` or `CALLOC`. After calling `FREE`, the pointer becomes invalid and must not be dereferenced.

This is a direct wrapper over `free` when available.

Example:
```c
char	*test_memory = (char *)ALLOC(42);

...

FREE(test_memory);
```

---
### LENGTH

```c
LET	LENGTH(PTR);
```

Returns the usable size, in bytes, of a block previously returned by `ALLOC`, `CALLOC` or `REALLOC`.

Every allocation carries a small hidden header immediately before the address you receive, and `LENGTH` simply reads the size field back out of it. This means the lookup is O(1) - no scanning, no bookkeeping table.

* Returns `0` if the pointer is `NULL`.
* The value may be **larger** than what you originally requested, because requests are rounded up to the allocator's alignment granularity.
* Passing a pointer that did not come from this allocator (a stack address, a string literal, a pointer from the system `malloc`) reads whatever bytes happen to sit before it. The result is meaningless and the program may crash.

Use it when you want to carry a buffer around without carrying a separate size variable next to it.

Example:
```c
char	*buffer = (char *)ALLOC(42);

...

/* NO NEED TO REMEMBER "42" ANYMORE */
LET	size = LENGTH(buffer);

while (size--)
	buffer[size] = 0;

FREE(buffer);
```

---
### FAR_ALLOC

```c
FAR_PTR	FAR_ALLOC(LEN);
```

Allocates `LEN` bytes of memory reachable through a far pointer.

On 16-bit targets this reaches memory outside the current data segment, allowing allocations larger than 64 KB and beyond the near heap. On 32-bit and 64-bit targets there is no segmentation, so `FAR_PTR` collapses to a normal pointer and this function simply forwards to [`ALLOC`](#alloc).

Use it only when you are writing code that must also build for a segmented 16-bit memory model. On every modern target it is a no-cost alias.

Example:
```c
FAR_PTR	huge_buffer = FAR_ALLOC(70000); /* > 64 KB */

if (!huge_buffer)
	return (1);

...

FAR_FREE(huge_buffer);
```

---
### FAR_CALLOC

```c
FAR_PTR	FAR_CALLOC(LEN);
```

Same as [`FAR_ALLOC`](#far_alloc), except every byte of the returned block is set to zero.

Like `CALLOC`, this takes a single total byte count rather than an element count and an element size.

Example:
```c
FAR_PTR	table = FAR_CALLOC(70000);

/* ALL 70000 BYTES ARE GUARANTEED TO BE 0 */

...

FAR_FREE(table);
```

---
### FAR_REALLOC

```c
FAR_PTR	FAR_REALLOC(FAR_PTR, LEN);
```

Resizes a block previously returned by `FAR_ALLOC` or `FAR_CALLOC` to `LEN` bytes.

Behaves exactly like [`REALLOC`](#realloc), including the `NULL` and zero-length special cases, but operates on far pointers. The block may move, so always use the returned value and discard the old pointer.

Example:
```c
FAR_PTR	buffer = FAR_ALLOC(70000);

...

buffer = FAR_REALLOC(buffer, 140000);

if (!buffer)
	return (1); /* OLD BLOCK IS STILL ALIVE ON FAILURE */
```

---
### FAR_FREE

```c
void	FAR_FREE(FAR_PTR);
```

Releases a block previously returned by `FAR_ALLOC`, `FAR_CALLOC` or `FAR_REALLOC`.

Do not mix allocator families: a pointer from `FAR_ALLOC` must be released with `FAR_FREE`, and a pointer from `ALLOC` must be released with `FREE`. On 16-bit builds these use genuinely different underlying allocators, and crossing them corrupts the heap.

Example:
```c
FAR_PTR	buffer = FAR_ALLOC(70000);

...

FAR_FREE(buffer);
```

---
### FAR_LENGTH

```c
LET	FAR_LENGTH(FAR_PTR);
```

Returns the usable size, in bytes, of a far block.

This is the far-pointer counterpart of [`LENGTH`](#length) and follows exactly the same rules: `0` for a `NULL` pointer, possibly rounded up from your original request, and undefined for pointers this module did not hand out.

Example:
```c
FAR_PTR	buffer = FAR_ALLOC(70000);

...

if (FAR_LENGTH(buffer) < needed)
	buffer = FAR_REALLOC(buffer, needed);
```

---
### PTR_MODE

```c
#define PTR_MODE_NONE
#define PTR_MODE_R
#define PTR_MODE_W
#define PTR_MODE_X
#define PTR_MODE_RW
#define PTR_MODE_RX
#define PTR_MODE_WX
#define PTR_MODE_RWX
```

Protection flags describing what the CPU is allowed to do with a region of memory: **R**ead, **W**rite, e**X**ecute.

They are consumed by [`MEMORY_MODE`](#memory_mode), [`FAR_MEMORY_MODE`](#far_memory_mode) and [`ALLOC_PAGE`](#alloc_page).

| Constant       | Meaning                                             |
| -------------- | --------------------------------------------------- |
| `PTR_MODE_NONE` | No access at all. Any touch faults.                |
| `PTR_MODE_R`   | Read only.                                          |
| `PTR_MODE_W`   | Write only.                                         |
| `PTR_MODE_X`   | Execute only.                                       |
| `PTR_MODE_RW`  | Read and write. Ordinary data memory.               |
| `PTR_MODE_RX`  | Read and execute. Finished code.                    |
| `PTR_MODE_WX`  | Write and execute.                                  |
| `PTR_MODE_RWX` | Read, write and execute.                            |

> ⚠️ **Do not combine these with `|`.**
>
> On UNIX these expand to `PROT_*` bit flags, so `PTR_MODE_R | PTR_MODE_X` happens to work. On Windows they expand to `PAGE_*` **enumerated values**, where `PTR_MODE_R | PTR_MODE_X` produces the number `18`, which is not a valid protection constant and makes the call fail. Always pass one of the combined constants directly.

Two more platform notes worth knowing:

* Most hardware cannot express "write but not read". On Windows `PTR_MODE_W` is the same value as `PTR_MODE_RW`, and on most UNIX kernels `PROT_WRITE` implies read as well. Treat `PTR_MODE_W` as "at least writable", never as a way to hide data from a reader.
* `PTR_MODE_X` alone is likewise unavailable on many targets and is usually widened to `PTR_MODE_RX` by the kernel.

---
### MEMORY_MODE

```c
BOOLEAN	MEMORY_MODE(PTR, LET, BIT32);
```

Changes the protection of an already-mapped region at runtime. Returns a non-zero value on success and `0` on failure.

Arguments are the starting address, the length in bytes, and one of the [`PTR_MODE`](#ptr_mode) constants.

> ⚠️ **The address must be page-aligned.**
>
> Protection is a property of whole pages, not of individual bytes. On UNIX, passing an address that is not a multiple of [`PAGE_SIZE`](#page_size) makes the underlying `mprotect` fail outright. On Windows the call quietly succeeds but rounds outward, changing the protection of *every* byte on the pages you touched - including data belonging to unrelated allocations that happen to share the page.
>
> In practice this means `MEMORY_MODE` is safe on memory from [`ALLOC_PAGE`](#alloc_page), and unsafe on memory from `ALLOC` / `CALLOC`.

Also note that revoking write access does not scrub the contents; the bytes are still there, they are just no longer writable.

Example:
```c
PTR	region = ALLOC_PAGE(4096, PTR_MODE_RW, 0);

...

/* FILL IT FIRST */
memset(region, 0, 4096);

/* THEN FREEZE IT */
if (!MEMORY_MODE(region, 4096, PTR_MODE_R))
	return (1);

/* region[0] = 1; <-- WOULD NOW CRASH */

FREE_PAGE(region);
```

---
### FAR_MEMORY_MODE

```c
BOOLEAN	FAR_MEMORY_MODE(FAR_PTR, LET, BIT32);
```

Far-pointer counterpart of [`MEMORY_MODE`](#memory_mode). Identical semantics, identical page-alignment requirement.

On 32-bit and 64-bit targets it forwards directly to `MEMORY_MODE`.

Example:
```c
FAR_PTR	region = (FAR_PTR)ALLOC_PAGE(4096, PTR_MODE_RW, 0);

...

FAR_MEMORY_MODE(region, 4096, PTR_MODE_RX);
```

---
### ALLOC_EXE

```c
PTR	ALLOC_EXE(const PTR OP_CODES, LET);
```

Allocates a block of **executable** memory, copies `LEN` bytes of machine code from `OP_CODES` into it, flushes the instruction cache for that range, and returns a pointer you can cast to a function pointer and call.

If `OP_CODES` is `NULL` the region is allocated but left uninitialized.

Allocations are served from internally managed slabs, so many small stubs share one mapping instead of burning a page each. Freed segments are coalesced with their neighbours and reused, and a slab is returned to the operating system once every segment inside it is free.

This is the primitive you build a JIT, a trampoline, a thunk, or a runtime patch out of.

Example:
```c
/* x86-64: mov eax, 42 ; ret */
static const unsigned char	CODE[] = {
	0XB8, 0X2A, 0X00, 0X00, 0X00,
	0XC3
};

LET	(*answer)(void);

answer = (LET (*)(void))ALLOC_EXE((PTR)CODE, sizeof(CODE));

if (!answer)
	return (1);

...

/* PRINTS 42 */
printf("%lu\n", answer());

FREE_EXE((PTR)answer);
```

#### Memory protection and what you may assume about the pointer

Executable memory is the one allocation the operating system genuinely argues
with you about, so `ALLOC_EXE` tries strategies in order of **speed** and takes
the first the host permits.

| Tier | Strategy | `RW` vs `RX` | Cost |
| ---- | -------- | ------------ | ---- |
| 1 | One `PTR_MODE_RWX` region. The returned pointer is readable, writable and executable. | Same address | One syscall per slab, nothing afterwards |
| 2 | Two views of one anonymous object (`memfd_create`, an unlinked temp file, or a pagefile-backed section on Windows), mapped `PTR_MODE_RW` and `PTR_MODE_RX`. The allocator writes through the private `RW` view and returns the `RX` view. | Different addresses | More setup per slab, then free |

Tier 1 is what virtually every host takes. Tier 2 only appears where the kernel
refuses executable anonymous memory outright - OpenBSD's W^X enforcement,
SELinux with `deny_execmem`, or Windows with Arbitrary Code Guard enabled.

A third strategy - mapping `PTR_MODE_RW`, filling it, then flipping the whole
slab to `PTR_MODE_RX` and back - was implemented and then removed on measurement.
It costs two `mprotect` calls per allocation *and* two per free, plus a TLB
shootdown each time, which benchmarked around **6600 ns** per allocate/free pair
against **10 ns** for both tiers above. It also almost never helps: hosts that
refuse `PROT_EXEC` on anonymous memory generally refuse `mprotect(PROT_EXEC)`
for the same reason.

macOS is a special case. Apple does not permit tier 2 under the Hardened
Runtime, so tier 1 falls back to `MAP_JIT` plus `pthread_jit_write_protect_np`,
which toggles the write permission of JIT pages **per thread** in hardware. Two
consequences follow: the toggle is thread-local, so a slab written on one thread
is not writable from another; and it covers every `MAP_JIT` region on that
thread at once, so you cannot hold one JIT region writable while another
executes.

> ⚠️ **Do not assume the returned pointer is writable.**
>
> On tier 1 it happens to be, because the whole region is `PTR_MODE_RWX`. On
> tier 2 and under `MAP_JIT` it is not, and writing through it faults. Since the
> tier is chosen by the host and not by you, portable code must hand all machine
> code over in the `OP_CODES` argument at allocation time. If you need to modify
> a stub, allocate a new one and free the old one.

Regardless of tier, the instruction cache is flushed over the new code before
the pointer is returned. This matters enormously on ARM, MIPS and POWER, where
the data and instruction caches are not coherent and freshly written bytes are
otherwise invisible to the fetch unit.

---
### LENGTH_EXE

```c
LET	LENGTH_EXE(PTR);
```

Returns the size, in bytes, of an executable segment previously returned by [`ALLOC_EXE`](#alloc_exe).

Executable segments carry their own header, separate from the one used by `ALLOC`, so **`LENGTH` and `LENGTH_EXE` are not interchangeable**. Calling `LENGTH` on an `ALLOC_EXE` pointer reads the wrong header and returns garbage.

Returns `0` for a `NULL` pointer. As with `LENGTH`, the value may exceed what you requested because of alignment rounding.

Example:
```c
PTR	stub = ALLOC_EXE((PTR)CODE, sizeof(CODE));

...

printf("STUB OCCUPIES %lu BYTES\n", LENGTH_EXE(stub));

FREE_EXE(stub);
```

---
### FREE_EXE

```c
void	FREE_EXE(PTR);
```

Releases an executable segment obtained from [`ALLOC_EXE`](#alloc_exe).

The pointer is located by searching the slab list, so passing an address that was never returned by `ALLOC_EXE` is detected and ignored rather than corrupting anything. Double frees are likewise detected and ignored.

The segment is merged with any adjacent free segments. When the whole slab becomes free, every mapping backing it is unmapped and the memory goes back to the operating system.

> ⚠️ Make absolutely sure no thread is still executing inside the stub, and that no function pointer still refers to it. Unlike a freed data block, a freed code block is unmapped rather than recycled, so a stale call jumps into an unmapped page and the process dies immediately.

Example:
```c
PTR	stub = ALLOC_EXE((PTR)CODE, sizeof(CODE));

...

FREE_EXE(stub);
stub = (PTR)0; /* DON'T LEAVE A DANGLING CODE POINTER AROUND */
```

---
### FAR_ALLOC_EXE

```c
FAR_PTR	FAR_ALLOC_EXE(const PTR OP_CODES, LET);
```

Far-pointer counterpart of [`ALLOC_EXE`](#alloc_exe). Same slab allocator, same tier ladder, same instruction-cache flush; only the returned pointer type differs.

On 32-bit and 64-bit targets it forwards directly to `ALLOC_EXE`.

Example:
```c
FAR_PTR	stub = FAR_ALLOC_EXE((PTR)CODE, sizeof(CODE));

...

FAR_FREE_EXE(stub);
```

---
### FAR_LENGTH_EXE

```c
LET	FAR_LENGTH_EXE(FAR_PTR);
```

Far-pointer counterpart of [`LENGTH_EXE`](#length_exe). Returns the size of a far executable segment, or `0` for a `NULL` pointer.

Example:
```c
FAR_PTR	stub = FAR_ALLOC_EXE((PTR)CODE, sizeof(CODE));

...

printf("%lu\n", FAR_LENGTH_EXE(stub));
```

---
### FAR_FREE_EXE

```c
void	FAR_FREE_EXE(FAR_PTR);
```

Far-pointer counterpart of [`FREE_EXE`](#free_exe). Releases a far executable segment and carries the same warning about dangling code pointers.

Example:
```c
FAR_PTR	stub = FAR_ALLOC_EXE((PTR)CODE, sizeof(CODE));

...

FAR_FREE_EXE(stub);
```

---
### PAGE_SIZE

```c
extern LET	PAGE_SIZE;
```

The size of a single memory page on the host, in bytes.

The value is cached once by the module's constructor at startup, so reading it costs nothing - no syscall, no branch. Commonly `4096`, but do not hardcode that: it is `16384` on Apple Silicon, and `65536` on some other configurations.

> ⚠️ `PAGE_SIZE` is only valid **after** the module constructor has run. If you call into this module from your own constructor, or from anything that runs before `main`, use [`GET_PAGE_SIZE`](#get_page_size) instead, which computes the value on demand.
>
> Note also that `PAGE_SIZE` is a name several system headers like to define as a macro of their own. Include `MEMORY.H` after your system headers if you hit a redefinition.

Example:
```c
/* ROUND A REQUEST UP TO A WHOLE NUMBER OF PAGES */
LET	rounded = ((wanted + PAGE_SIZE - 1) / PAGE_SIZE) * PAGE_SIZE;
```

---
### GET_PAGE_SIZE

```c
LET	GET_PAGE_SIZE(void);
```

Queries the host for its page size and returns it.

Returns the cached [`PAGE_SIZE`](#page_size) when it is already populated, and otherwise asks the operating system directly - `sysconf(_SC_PAGESIZE)` on UNIX, `GetSystemInfo` on Windows. If the query fails, a conservative `4096` is returned so callers always get a usable number.

Prefer `PAGE_SIZE` in ordinary code and reach for this only when you cannot rely on the constructor having run yet.

Example:
```c
LET	page = GET_PAGE_SIZE();

printf("PAGE SIZE: %lu\n", page);
```

---
### ALLOC_PAGE

```c
PTR	ALLOC_PAGE(LET, BIT32, BIT32);
```

Allocates whole pages directly from the operating system, bypassing the block allocator entirely.

Arguments are the requested size in bytes, one of the [`PTR_MODE`](#ptr_mode) protection constants, and a field of extra platform flags passed straight through to the underlying `mmap` or `VirtualAlloc` (pass `0` if you have none).

The request is rounded up to a whole number of pages, and the returned address is page-aligned. This is what makes it the right input for [`MEMORY_MODE`](#memory_mode).

Use this when you need protection control, a guard page, a large arena, or memory that is genuinely returned to the OS on release rather than kept on a free list. For ordinary allocations, `ALLOC` is far cheaper.

Returns `NULL` on failure. Release with [`FREE_PAGE`](#free_page) only - never with `FREE`.

Example:
```c
/* A READ-ONLY LOOKUP TABLE NOBODY CAN CORRUPT LATER */
PTR	table = ALLOC_PAGE(8192, PTR_MODE_RW, 0);

if (!table)
	return (1);

...

/* FILL IT, THEN SEAL IT */
MEMORY_MODE(table, 8192, PTR_MODE_R);

...

FREE_PAGE(table);
```

---
### FREE_PAGE

```c
void	FREE_PAGE(PTR);
```

Releases pages obtained from [`ALLOC_PAGE`](#alloc_page), returning them to the operating system immediately.

The original length is recovered from a header stored alongside the mapping, so you do not have to remember it.

Passing `NULL` is safe and does nothing. Passing anything that did not come from `ALLOC_PAGE` is undefined.

> ⚠️ Unlike `FREE`, this genuinely unmaps the address range. Any later read, write or execute through that pointer faults immediately rather than silently touching recycled memory.

Example:
```c
PTR	region = ALLOC_PAGE(4096, PTR_MODE_RW, 0);

...

FREE_PAGE(region);
region = (PTR)0;
```

---
## References

 - [malloc(3) — Linux manual page - man7.org](https://man7.org/linux/man-pages/man3/free.3.html)
 - [malloc - cppreference.com](https://cppreference.com/w/c/memory/malloc)
 - [mmap - wikipedia.org](https://wikipedia.org/wiki/Mmap#:~:text=In%20computing%2C%20mmap(2),no%20physical%20RAM%20at%20all.)
 - [mmap(2) — Linux manual page - man7.org](https://man7.org/linux/man-pages/man2/mmap.2.html)
 - [mprotect(2) — Linux manual page - man7.org](https://man7.org/linux/man-pages/man2/mprotect.2.html)
 - [memfd_create(2) — Linux manual page - man7.org](https://man7.org/linux/man-pages/man2/memfd_create.2.html)
 - [sysconf(3) — Linux manual page - man7.org](https://man7.org/linux/man-pages/man3/sysconf.3.html)
 - [W^X - wikipedia.org](https://wikipedia.org/wiki/W%5EX)
 - [VirtualAlloc function (memoryapi.h) - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualalloc)
 - [VirtualProtect function (memoryapi.h) - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualprotect)
 - [Memory Protection Constants - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/memory/memory-protection-constants)
 - [farmalloc() - itlnet.net](https://www.itlnet.net/programming/program/Reference/tc/ng1d887.html)
 - [PTHREAD_JIT_WRITE_PROTECT_NP(3) - keith.github.io](https://keith.github.io/xcode-man-pages/pthread_jit_write_protect_np.3.html)
 - [macOS JIT Memory - outflank.nl](https://www.outflank.nl/blog/2026/02/19/macos-jit-memory/)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/MUTEX.gif">
	<b>MUTEX</b> - Use and manage multithreading in your application across platforms.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/OS_API/MUTEX.H](https://github.com/TeomanDeniz/CMT/blob/main/OS_API/MUTEX.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_MUTEX
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/OS_API/MUTEX.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/MUTEX_128.gif"/>
</p>

MUTEX provides a lightweight, cross-platform mutual exclusion primitive for synchronizing access to shared resources between multiple threads.

It is primarily intended for use alongside `THREAD.H`, allowing threads to safely coordinate access to data and prevent race conditions.

A mutex can be created, locked, unlocked, and destroyed through a unified API that maps to the native synchronization mechanisms of each supported operating system.

This allows the same source code to be used across a wide range of platforms without modification.

Typical use cases include:

* Protecting shared variables and data structures.
* Serializing access to files, devices, or other resources.
* Coordinating work between threads created with THREAD.H.
* Preventing race conditions in multithreaded applications.

MUTEX is designed to be simple, portable, and suitable for both desktop and embedded environments.

Supported platforms:
* FreeRTOS (define `CMT_TRY_FREE_RTOS`)
* Haiku
* OS/2 (Both 32-bit and 16-bit)
* Plan9 (define `CMT_TRY_PLAN9`)
* TI-RTOS (define `CMT_TRY_TIRTOS`)
* Unix (MacOS included)
* VxWorks
* Windows
* Zephyr (define `CMT_TRY_ZEPHYR`)

If CMT indicates a `CMT_TRY_*` macro for your platform, you must define it manually.

The build system cannot reliably auto-detect these platforms because most compilers do not expose a consistent platform identification macro.

I am SO sorry about that ;-;

Also, as an extra: If you can't find your platform in the list, don't worry; CMT also provides a `GO`-like multitasking system, or its own multithreading management, for your platform (for example, "MS-DOS"), allowing it to work on platforms that aren't officially supported.

## Contents

| Contents List                                         |
| ----------------------------------------------------- |
| `#define MUTEX_LOCK(MUTEX)`                           |
| `#define mutex_lock(MUTEX)`                           |
| `#define MUTEX_UNLOCK(MUTEX)`                         |
| `#define mutex_unlock(MUTEX)`                         |
| `typedef T_MUTEX;`                                    |
| `typedef t_mutex;`                                    |
| `int MUTEX_CREATE(T_MUTEX *);`                        |
| `int mutex_create(t_mutex *);`                        |
| `int MUTEX_DESTROY(T_MUTEX *);`                       |
| `int mutex_destroy(t_mutex *);`                       |

---
### `MUTEX_CREATE`

```c
int	MUTEX_CREATE(T_MUTEX *);
int	mutex_create(t_mutex *);
```

Initializes a mutex object.

The argument is a pointer to a mutex handle that will be initialized by the function.

Returns `0` on success, or a non-zero value on failure.

**Example**:
```c
t_mutex	mutex;

mutex_create(&mutex);

if (!mutex)
{
	// handle error
}
```

---
### `MUTEX_DESTROY`

```c
int	MUTEX_DESTROY(T_MUTEX *);
int	mutex_destroy(t_mutex *);
```

Destroys a mutex created with `mutex_create`.

The mutex becomes invalid after this call.

Returns `0` on success, or a non-zero value on failure.

**Example**:
```c
mutex_destroy(&mutex);
```

---
### `MUTEX_LOCK`

```c
#define MUTEX_LOCK(MUTEX)
#define mutex_lock(MUTEX)
```

Blocks until the mutex is acquired.

**Example**:
```c
mutex_lock(mutex);
```

---
### `MUTEX_UNLOCK`

```c
#define MUTEX_UNLOCK(MUTEX)
#define mutex_unlock(MUTEX)
```

Releases a previously acquired mutex.

**Example**:
```c
mutex_unlock(mutex);
```

---
## References

 - [Semaphores - freertos.org](https://www.freertos.org/Documentation/02-Kernel/04-API-references/10-Semaphore-and-Mutexes/00-Semaphores)
 - [Semaphores - haiku-os.org](https://www.haiku-os.org/legacy-docs/bebook/TheKernelKit_Semaphores_Overview.html)
 - [Introduction to OS/2 Programming - os2site.com](https://www.os2site.com/sw/info/books/Introduction_to_OS2_Programming.pdf)
 - [REAL TIME OPERATING SYSTEM PROGRAMMING-I: µC/OS-II and VxWorks - dauniv.ac.in](https://www.dauniv.ac.in/frontassets/coursematerial/embeddedsystems/Chap_11Lesson06Emsys3EMucosSem.pdf)
 - [THREAD(3) - 9fans.github.io](https://9fans.github.io/plan9port/man/man3/thread.html)
 - [Introduction to Operating Systems Abstractions Using Plan 9 from Bell Labs - material.karlov.mff.cuni.cz](https://material.karlov.mff.cuni.cz/people/hajek/files/p9.pdf)
 - [Thread Synchronization - software-dl.ti.com](https://software-dl.ti.com/simplelink/esd/simplelink_cc13x2_26x2_sdk/3.40.00.02/exports/docs/proprietary-rf/proprietary-rf-users-guide/tirtos/synchronization.html#semaphores)
 - [Using mutexes - ibm.com](https://www.ibm.com/docs/en/aix/7.1.0?topic=programming-using-mutexes)
 - [Generic Mutex Subsystem - kernel.org](https://docs.kernel.org/locking/mutex-design.html)
 - [Binary POSIX Mutexes - cgi.di.uoa.gr](https://cgi.di.uoa.gr/~antoulas/k24/lectures/l13.pdf)
 - [semMLib - ee.torontomu.ca](https://www.ee.torontomu.ca/~courses/ee8205/Data-Sheets/Tornado-VxWorks/vxworks/ref/semMLib.html)
 - [Critical Section Objects - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/sync/critical-section-objects)
 - [Mutexes - docs.zephyrproject.org](https://docs.zephyrproject.org/latest/kernel/services/synchronization/mutexes.html)
 - [CMT - THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS](https://github.com/TeomanDeniz/CMT/blob/main/DOCS/THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS.DOCX)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/THREAD.gif">
	<b>THREAD</b> - Use and manage multithreading in your application across platforms.
</summary>

> ⚠️ Important
> ### File location: [**[📜 CMT/OS_API/THREAD.H](https://github.com/TeomanDeniz/CMT/blob/main/OS_API/THREAD.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_THREAD
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/OS_API/THREAD.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/THREAD_128.gif"/>
</p>

`THREAD.H` provides a small cross-platform thread abstraction layer for creating and synchronizing threads using a single, consistent API. The goal of the module is to hide platform-specific threading implementations behind a common interface, allowing applications and libraries to create and manage threads without directly depending on operating system APIs.

The module automatically maps its functions and types to the native threading facilities available on the target platform. While the underlying implementation differs between operating systems and RTOSes, the behavior and usage remain consistent across all supported environments.

`THREAD.H` is intended for projects that require portable multithreading support while minimizing platform-specific code and conditional compilation.

Supported platforms:
* FreeRTOS (define `CMT_TRY_FREE_RTOS`)
* Haiku
* OS/2 (Both 32-bit and 16-bit)
* Plan9 (define `CMT_TRY_PLAN9`)
* TI-RTOS (define `CMT_TRY_TIRTOS`)
* Unix (MacOS included)
* VxWorks
* Windows
* Zephyr (define `CMT_TRY_ZEPHYR`)

If CMT indicates a `CMT_TRY_*` macro for your platform, you must define it manually.

The build system cannot reliably auto-detect these platforms because most compilers do not expose a consistent platform identification macro.

I am SO sorry about that ;-;

Also, as an extra: If you can't find your platform in the list, don't worry; CMT also provides a `GO`-like multitasking system, or its own multithreading management, for your platform (for example, "MS-DOS"), allowing it to work on platforms that aren't officially supported.

## Contents

| Contents List                                         |
| ----------------------------------------------------- |
| `typedef T_THREAD;`                                   |
| `typedef t_thread;`                                   |
| `T_THREAD THREAD_CREATE(void *(*) (void *), void *);` |
| `t_thread thread_create(void *(*) (void *), void *);` |
| `int THREAD_JOIN(T_THREAD, void **);`                 |
| `int thread_join(t_thread, void **);`                 |

### THREAD_CREATE

```c
T_THREAD	THREAD_CREATE(void *(*) (void *), void *);
t_thread	thread_create(void *(*) (void *), void *);
```

Creates a new thread and starts execution immediately.

The first argument is the thread entry function, which must have signature `void *(*)(void *)`.

The second argument is passed as the input parameter to the thread function.

Returns a thread handle (`t_thread` / `T_THREAD`) on success, or `NULL` on failure.

**Example**:
```c
void	*my_thread(void *arg)
{
	// ...
	return (0);
}

{
	t_thread	thread = thread_create(my_thread, NULL);

	if (!thread)
	{
		// handle error
	}
}
```

---
### `THREAD_JOIN`

```c
int	THREAD_JOIN(T_THREAD, void **);
int	thread_join(t_thread, void **);
```

Waits for the specified thread to terminate.

The second argument is an optional output parameter used to retrieve the thread's return value.

It may be `NULL` if the return value is not needed.

Returns `0` on success, or a non-zero value on failure.

**Examples**:
```c
void *ret;

thread_join(thread, &ret);
```

```c
thread_join(thread, NULL);
```

---
## References

 - [xTaskCreate - freertos.org](https://www.freertos.org/Documentation/02-Kernel/04-API-references/01-Task-creation/01-xTaskCreate)
 - [Threads And Teams - haiku-os.org](https://www.haiku-os.org/legacy-docs/bebook/TheKernelKit_ThreadsAndTeams_Overview.html)
 - [Design of OS/2 by Michael S. Kogan, Harvey M. Deitel - os2site.com](https://www.os2site.com/sw/info/design_of_os2.pdf)
 - [Task Management - os2.kr](https://www.os2.kr/komh/os2books/gg243774/480_L2_TaskManagement.html)
 - [Borland® C++ for OS/2® Version 1.5 - bitsavers.informatik.uni-stuttgart.de](http://bitsavers.informatik.uni-stuttgart.de/pdf/borland/borland_C++/Borland_C++_for_OS2_Version_1.5_Library_Reference_1994.pdf)
 - [The Art of OS/2 Warp Programming (Katheleen Panov, Larry Salomon Jr., and Arthur Panov) - dn721502.ca.archive.org (I love you archive.org <3)](https://dn721502.ca.archive.org/0/items/TheArtOfOS2WarpProgramming/The%20Art%20of%20OS2%20Warp%20Programming.pdf)
 - [THREAD(3) - 9fans.github.io](https://9fans.github.io/plan9port/man/man3/thread.html)
 - [Plan9 (thread.h) - 9p.io](https://9p.io/magic/man2html/2/thread)
 - [Tasks - software-dl.ti.com](https://software-dl.ti.com/simplelink/esd/simplelink_cc26x2_sdk/2.10.00.44/exports/docs/thread/html/tirtos/tasks.html)
 - [Threads - opengroup.org](https://pubs.opengroup.org/onlinepubs/7908799/xsh/threads.html)
 - [POSIX thread (pthread) libraries - cs.cmu.edu](https://www.cs.cmu.edu/afs/cs/academic/class/15492-f07/www/pthreads.html)
 - [POSIX Threads and Synchronization (CSE 220: Systems Programming) - cse.buffalo.edu](https://cse.buffalo.edu/courses/cse220/2025-Spring/33-pthreads.pdf)
 - [Extrait du manuel VxWorks (Excerpt from the VxWorks manual) - beru.univ-brest.fr (I still can't believe I found this doc)](https://beru.univ-brest.fr/~singhoff/ENS/UE_temps_reel/TP-VXWORKS/CORRECTION/Man-VxWorks-1.pdf)
 - [taskLib - ee.torontomu.ca](https://www.ee.torontomu.ca/~courses/ee8205/Data-Sheets/Tornado-VxWorks/vxworks/ref/taskLib.html)
 - [CreateThread function (processthreadsapi.h) - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread)
 - [Threads - zephyrproject.org](https://docs.zephyrproject.org/latest/kernel/services/threads/index.html)
 - [CMT - THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS](https://github.com/TeomanDeniz/CMT/blob/main/DOCS/THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS.DOCX)

----
</details>

---
# ![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/WIN_CORE.gif) WINDOWS CORE

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/WIN_PEB_LOADER.gif">
	<a ID="peb_loader"><b>__PEB_LOADER__</b></a> - Windows PEB-based module and export resolver without Win32 loader APIs.
</summary>

> ⚠️ Important
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

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/WIN_PEB_LOADER_128.gif"/>
</p>

`PEB_LOADER` provides lightweight routines for locating loaded modules and exported functions without relying on the Windows loader APIs.
Instead of calling functions such as `GetModuleHandleW()` or `GetProcAddress()`, the module walks the Process Environment Block (PEB) and parses PE export tables manually.

This is useful for low-level runtime environments, shellcode, custom loaders, dependency-free applications, and situations where direct interaction with the Windows API is undesirable.

---
## Contents

| Contents List                                                |
| ------------------------------------------------------------ |
| `void *PEB_GET_MODULE_BASE(const char *);`                   |
| `void *peb_get_module_base(const char *);`                   |
| `void *PEB_GET_EXPORT(const unsigned char *, const char *);` |
| `void *peb_get_export(const unsigned char *, const char *);` |

---
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

---
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

---
## References

 - [PEB structure (winternl.h) - learn.microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/winternl/ns-winternl-peb)
 - [Process Environment Block - wikipedia.org](https://wikipedia.org/wiki/Process_Environment_Block)
 - [Locating Modules Via The PEB (Process Environment Block) - malwaretech.com](https://malwaretech.com/wiki/locating-modules-via-the-peb-x64)
 - [Using PEB to Get Base Address of Kernelbase.dll - nagareshwar.securityxploded.com](https://nagareshwar.securityxploded.com/2013/09/21/using-peb-to-get-base-address-of-kernelbase-dll/)
 - [struct _PEB (wine-mirror/wine/include/winternl.h) - github.com](https://github.com/wine-mirror/wine/blob/1aff1e6a370ee8c0213a0fd4b220d121da8527aa/include/winternl.h#L271)
 - [Win32 Thread Information Block - wikipedia.org](https://wikipedia.org/wiki/Win32_Thread_Information_Block)

----
</details>

<details>
<summary>
	<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/KERNEL32.gif">
	<a ID="kernel32"><b>KERNEL32</b></a>
</summary>

> ⚠️ Important
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

[![](https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/AUTO_LINKER_MODULE_HEADER.png)](#cmt-auto-linker)

## Abstract

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/main/images/repo_projects/libcmt/KERNEL32_128.gif"/>
</p>

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

---
## References

 - [Hunting for Windows API prototypes and descriptions... - hexacorn.com](https://www.hexacorn.com/blog/2023/10/25/hunting-for-windows-api-prototypes-and-descriptions/)
 - [kernel32.dll - source.winehq.org](https://source.winehq.org/WineAPI/kernel32.html)
 - [KERNEL32 Functions - geoffchappell.com](https://www.geoffchappell.com/studies/windows/win32/kernel32/api/index.htm)

----
</details>










# Extras

## CMT Auto-Linker

<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/TeomanDeniz/refs/heads/main/images/repo_projects/libcmt/AUTO_LINKER_HEADER.png" ALT="Header" STYLE="WIDTH: 100%;"/>

If you encounter a module marked with the **`AUTO-LINKER`** tag, it indicates that the module contains functions or global variables designed to be shared (linked) across your entire project.

If you're using CMT in a single `.c` file, you don't need to fully understand how this system works. You can simply do:

```c
// Your INCL_CMT_* definitions
#include <CMT.H>

// or

#include "CMT/<SECTION>/<MODULE>.H"

... /* Your code in the C file */
```

without any additional steps, and everything will work as expected.

However, if you plan to use CMT in a project containing multiple `.c` files, you should familiarize yourself with how the `AUTO-LINKER` system works.

Before starting, as an extra detail: `CMT_AUTO_LINKER.INL` does NOT define `main` or `WinMain`; `CMT_AUTO_CONSTRUCTOR.INL` does. They work together.

The reason `CMT_AUTO_CONSTRUCTOR.INL` exists is that some global variables, structures, and mutexes must be initialized or prepared before the `main` function starts at runtime.

So `CMT_AUTO_CONSTRUCTOR.INL` handles all of that without using compiler-specific syntax like `__attribute__((constructor))`, and ensures all necessary and critical global variables are initialized in runtime before the `main` function is called.

The auto-linker system works by redefining `main` (or `WinMain`) internally. This ensures that the actual definitions of functions or global variables are generated only once-typically within your `main.c` file-while remaining accessible throughout the project.

This approach is mainly intended for **small projects** or for simplifying usage when working with modules that expose linkable symbols. However, it is not entirely reliable for larger or more complex setups. For example, if a module is used in a `.c` file but not included in `main.c`, the auto-linker may fail to generate the required definitions.

For better control and reliability, it is recommended to use the following approach for projects that has multiple `.c` files:

### 1. Define `CMT_EXTERN`

Defined a macro named `CMT_EXTERN` at the top of "CMT.H" header or direct module include in your C files (Including the file that has `main` or `WinMain` function).

```c
#define CMT_EXTERN

// Your INCL_CMT_* definitions
#include <CMT.H>

// or

#include "CMT/<SECTION>/<MODULE>.H"

... /* Your code in the C file */
```

### 2. Create a dedicated setup file (e.g., `CMT.c`)

Add this file to your build system (`Makefile`, `make.bat`, or CMake). In this file, define the `CMT_SETUP` macro before including any CMT headers, list all modules used across your project, and just put `CMT_SETUP` end of the file:

```c
#define CMT_SETUP

// Your INCL_CMT_* definitions
#include <CMT.H>
// or
#include "CMT/<SECTION>/<MODULE>.H"

CMT_SETUP // Yes, Don't forget to put it at the end.
```

### Why this approach?

Although this method may seem less elegant, it provides:

* Better control over which modules are linked
* More predictable behavior across different build environments
* Independence from shell, platform, or build tool variations

In short, while the auto-linker feature is convenient, relying on a dedicated setup file like `CMT.c` is the most robust and portable way to use it.

Important note: It is not recommended to SETUP the entire CMT unless you're actually not using all modules.

---

## Icons

* Yes, you can use them for free.
* These icons are inspired by the style of Windows 95 icons.
* They are all created by me and are not affiliated with or endorsed by Microsoft.
* Not mandatory but I'll be glad if you credit me when you are using my icon(s) on a project or something.

---

## Openning Issues & Reporting Bugs

* There are no rules. You can swear at me, ask questions, suggest something, or report bugs.
* I am open to all kinds of criticisms and that would be so kind if criticisms are helpful or teachfull.

## Copyright

- CMT is licensed under the GPL-3.0 License.
- This means it can be freely used in open source projects compatible with GPL-3.0.
- If you want to use CMT in proprietary or closed-source software, a commercial license is required.
- For commercial licensing inquiries, contact me.
- *© Maximum Tension all rights NOT reserved - 2023*
