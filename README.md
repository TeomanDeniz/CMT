
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/HEADER.png" ALT="Header" STYLE="WIDTH: 100%;"/>

**CMT (C Maximum Tension)** is a header-only systems programming library for C that pushes the language far beyond its conventional limits without sacrificing portability or performance. It introduces a unified runtime layer that enhances ergonomics, abstraction, and developer control while staying compatible with both ANSI and K&R C.

The library is built around low-level mechanisms rather than syntactic tricks, enabling natural and efficient usage patterns that integrate directly with the compiler, ABI, and architecture. It avoids hidden globals, minimizes overhead, and leverages register-level behavior and inline assembly to deliver predictable, high-performance execution across platforms.

CMT also provides a structured meta-layer over assembly, bridging differences between architectures, compilers, and calling conventions. It includes feature detection, environment introspection, and compatibility layers that allow code to adapt at compile-time and runtime to the exact system it is targeting.

Designed with longevity in mind, the project maintains support for legacy systems and toolchains while scaling up to modern environments. It emphasizes consistency across platforms, modular expansion, and deep control over system resources-from CPU instructions to OS-level APIs.

The repository includes multiple documentation formats, test matrices across compilers and architectures, and a stripped release variant optimized for minimal footprint.

> # Contents
> - [Clone or Download CMT and Use it](#clone-or-download-cmt-and-use-it)
>   - [Download](#download)
>   - [Clone](#clone)
>     - [Clone as HTTPS](#clone-as-https)
>     - [Clone as SSH](#clone-as-ssh)
>   - [Usage](#usage)
>     - [Include Everything](#include-everything)
>     - [Modular Include](#modular-include)
>     - [Sectional Include](#sectional-include)
>       - [Available Section Macros](#available-section-macros)
>   - [Default Behavior](#default-behavior)
> - [CMT Contents](#cmt-contents)
>   - [General](#-general)
>   - [Assembly](#-assembly)
>   - [Check Feature](#-check-feature)
>   - [Attributes](#-attributes)
>   - [Check Feature](#-check-feature)
>   - [Environments](#-environments)
>   - [Keywords](#-keywords)
>   - [LIB](#-lib)
>   - [OS_API](#-os_api)
>   - [WINDOWS CORE](#-windows-core)
> - [Documentations](#documentations)
>   - [BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES](#-bound_methods_in_iso_c_via_trampolines)
>   - [CROSS_COMPILER_AUTO_LINKING_AND_CONSTRUCTION_METHOD_WITH_MACROS_ONLY](#-cross_compiler_auto_linking_and_construction_method_with_macros_only)
>   - [USE_ASSEMBLY_IN_PURE_C_WITHOUT_NEEDING_INLINE_ASSEMBLY](#-use_assembly_in_pure_c_without_needing_inline_assembly)
>   - [THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS](#-thread_support_in_non_multi_thread_platforms)
> - [Extras](#extras)
>   - [CMT Auto-Linker](#cmt-auto-linker)
>   - [Icons](#icons)
>     - [32x32 (Original Size)](#32x32-original-size)
>     - [128x128 (Extended for a better view))](#128x128-extended-for-a-better-view)
>   - [Openning Issues and Reporting Bugs](#openning-issues-and-reporting-bugs)
>   - [Copyright](#copyright)

# Clone or Download CMT and Use it

## Download

> **The stable downloadable version is currently available:**
> 
> **WIP**

For a minimal, stripped build (no documentation or comments), download the latest release from **[Releases](https://github.com/TeomanDeniz/CMT/releases)** area.

## Clone

For the full source (including documentation), clone the repository:

```sh
git clone --depth 1 "git@github.com:TeomanDeniz/CMT.git"
```

`--depth 1` clones only the latest snapshot and skips full history.

### Clone as HTTPS

```sh
git clone --depth 1 "https://github.com/TeomanDeniz/CMT.git"
```

### Clone as SSH

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
 
### Include Everything

```c
#include "CMT/CMT.H"   // C
// or
#include "CMT/CMT.HPP" // C++
```

This does not include modules such as `PNG`, `MAP`, `SERVER`, `GRAPHICS`, `AUDIO` etc., which depend on the `OBJECT` module.

---

### Modular Include

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

### Sectional Include

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

#### Available Section Macros

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

### Default Behavior

If **no** `INCL_CMT_...` macro is defined:

* **All sections and modules are included automatically** except `OBJECTS`.

Redundant definitions are safe:

* Defining a module that belongs to an already-included section has **no effect**
* No warnings or errors are generated

# CMT Contents

<IMG SRC="https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/BANNERS/DOC_HEADER.gif" ALT="DOC-Header" STYLE="WIDTH: 100%;"/>
<p align="center">Come my child! I will show you the way.</p>

## ![][__GENERAL_GIF__] General
 * [![][__OBJECT_GIF__] **OBJECT**][__OBJECT_MD__]

## ![][__PUSH_POP_GIF__] Assembly
 * [![][__ASM_GIF__] **ASM**][__ASM_MD__]
   * ![][__INTEL_ASM_GIF__] Intel
     * [![][__ASM_CONTENT_GIF__] **RAX**][__RAX_MD__]
     * [![][__ASM_CONTENT_GIF__] **CPUID**][__CPUID_MD__]
   * ![][__ARM_ASM_GIF__] ARM
     * [![][__ASM_CONTENT_GIF__] **MIDR**][__MIDR_MD__]
     * [![][__ASM_CONTENT_GIF__] **X17**][__X17_MD__]
   * ![][__POWERPC_ASM_GIF__] ARM
     * [![][__ASM_CONTENT_GIF__] **MFSPR_287**][__MFSPR_287_MD__]

## ![][__ATTRIBUTES_GIF__] Attributes
 * [![][__ALIGN_GIF__] **ALIGN**][__ALIGN_MD__]
 * [![][__CDECL_GIF__] **CDECL**][__CDECL_MD__]
 * [![][__EXTERN_C_GIF__] **EXTERN_C**][__EXTERN_C_MD__]
 * [![][__FAR_GIF__] **FAR**][__FAR_MD__]
 * [![][__FASTCALL_GIF__] **FASTCALL**][__FASTCALL_MD__]
 * [![][__LOCAL_GIF__] **LOCAL**][__LOCAL_MD__]
 * [![][__NOINLINE_GIF__] **NOINLINE**][__NOINLINE_MD__]
 * [![][__PACK_GIF__] **PACK**][__PACK_MD__]
 * [![][__PASCAL_GIF__] **PASCAL**][__PASCAL_MD__]
 * [![][__REGPARM_GIF__] **REGPARM**][__REGPARM_MD__]
 * [![][__REGPASS_GIF__] **REGPASS**][__REGPASS_MD__]
 * [![][__STDCALL_GIF__] **STDCALL**][__STDCALL_MD__]
 * [![][__UNUSED_GIF__] **UNUSED**][__UNUSED_MD__]

## ![][__CHECK_FEATURE_GIF__] Check Feature
 * [![][__COMMA_OPERATOR_GIF__] **COMMA_OPERATOR**][__COMMA_OPERATOR_MD__]
 * [![][__INLINE_ASM_GIF__] **INLINE_ASM**][__INLINE_ASM_MD__]
 * [![][__STRINGIFICATION_GIF__] **STRINGIFICATION**][__STRINGIFICATION_MD__]
 * [![][__TOKEN_PASTING_GIF__] **TOKEN_PASTING**][__TOKEN_PASTING_MD__]

## ![][__ENVIRONMENTS_GIF__] Environments
 * [![][__ABI_GIF__] **ABI**][__ABI_MD__]
 * [![][__ARCHITECTURE_GIF__] **ARCHITECTURE**][__ARCHITECTURE_MD__]
 * [![][__CPU_GIF__] **CPU**][__CPU_MD__]
 * [![][__KNR_STYLE_GIF__] **KNR_STYLE**][__KNR_STYLE_MD__]
 * [![][__PLATFORM_GIF__] **PLATFORM**][__PLATFORM_MD__]
 * [![][__W_XOR_X_GIF__] **W_XOR_X**][__W_XOR_X_MD__]

## ![][__KEYWORDS_GIF__] Keywords
 * [![][__BOOLEAN_GIF__] **BOOLEAN**][__BOOLEAN_MD__]
 * [![][__IGNORE_VAR_GIF__] **IGNORE_VAR**][__IGNORE_VAR_MD__]
 * [![][__TRY_CATCH_GIF__] **TRY_CATCH**][__TRY_CATCH_MD__]
 * [![][__TYPES_GIF__] **TYPES**][__TYPES_MD__]

## ![][__LIB_GIF__] LIB

## ![][__OS_API_GIF__] OS_API
 * [![][__CLEAR_INSTRUCTION_CACHE_GIF__] **CLEAR_INSTRUCTION_CACHE**][__CLEAR_INSTRUCTION_CACHE_MD__]
 * [![][__MEMORY_GIF__] **MEMORY**][__MEMORY_MD__]
 * [![][__MUTEX_GIF__] **MUTEX**][__MUTEX_MD__]
 * [![][__THREAD_GIF__] **THREAD**][__THREAD_MD__]

## ![][__WIN_CORE_GIF__] WIN_CORE
 * [![][__PEB_LOADER_GIF__] **\_\_PEB_LOADER\_\_**][__PEB_LOADER_MD__]
 * [![][__KERNEL32_GIF__] **KERNEL32**][__KERNEL32_MD__]
 * [![][__USER32_GIF__] **USER32**][__USER32_MD__]

# Documentations

This section contains additional documentation explaining how I achieved the features in my ecosystem.

## [**[📜 BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES](https://docs.google.com/viewer?url=https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/ARTICLES/EN/BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES.pdf)**]

It explains how I managed to create real OOP ergonomics in pure C.

Instead of calling `struct.member(&struct, 42);`, you can simply write: `struct.member(42);`.

## [**[📜 CROSS_COMPILER_AUTO_LINKING_AND_CONSTRUCTION_METHOD_WITH_MACROS_ONLY](https://docs.google.com/viewer?url=https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/ARTICLES/EN/CROSS_COMPILER_AUTO_LINKING_AND_CONSTRUCTION_METHOD_WITH_MACROS_ONLY.pdf)**]

It explains how I managed to define linkable functions and global variables only once, even though they are defined inside a header.

It also explains how I created a custom constructor and destructor system that runs before and after the `main` function.

## [**[📜 USE_ASSEMBLY_IN_PURE_C_WITHOUT_NEEDING_INLINE_ASSEMBLY](https://docs.google.com/viewer?url=https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/ARTICLES/EN/USE_ASSEMBLY_IN_PURE_C_WITHOUT_NEEDING_INLINE_ASSEMBLY.pdf)**]

It explains how I made Assembly code written in a `.c` file using my macro-based DSL continue to work even when the compiler does not support inline assembly.

## [**[📜 THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS](https://docs.google.com/viewer?url=https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/ARTICLES/EN/THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS.pdf)**]

It explains how I implemented a custom threading system for platforms like MS-DOS that do not support multithreading at all.

# Extras

## CMT Auto-Linker

<IMG SRC="https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/BANNERS/AUTO_LINKER_HEADER.png" ALT="Header" STYLE="WIDTH: 100%;"/>

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

## Icons

* Yes, you can use them for free.
* These icons are inspired by the style of Windows 95 icons.
* They are all created by me and are not affiliated with or endorsed by Microsoft.
* Not mandatory but I'll be glad if you credit me when you are using my icon(s) on a project or something.

List of the icons:

<details>
<summary>
	<h3>32x32 (Original Size)</h3>
</summary>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ABI.gif" ALT="ABI" TITLE="ABI"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ALIGN.gif" ALT="ALIGN" TITLE="ALIGN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ARCHITECTURE.gif" ALT="ARCHITECTURE" TITLE="ARCHITECTURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ARM_ASM.gif" ALT="ARM_ASM" TITLE="ARM_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ASM.gif" ALT="ASM" TITLE="ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ASM_CONTENT.gif" ALT="ASM_CONTENT" TITLE="ASM_CONTENT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ATTRIBUTES.gif" ALT="ATTRIBUTES" TITLE="ATTRIBUTES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/BOOLEAN.gif" ALT="BOOLEAN" TITLE="BOOLEAN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/CDECL.gif" ALT="CDECL" TITLE="CDECL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/CHECK_FEATURE.gif" ALT="CHECK_FEATURE" TITLE="CHECK_FEATURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/CLEAR_INSTRUCTION_CACHE.gif" ALT="CLEAR_INSTRUCTION_CACHE" TITLE="CLEAR_INSTRUCTION_CACHE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/COMMA_OPERATOR.gif" ALT="COMMA_OPERATOR" TITLE="COMMA_OPERATOR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/CPU.gif" ALT="CPU" TITLE="CPU"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ENVIRONMENTS.gif" ALT="ENVIRONMENTS" TITLE="ENVIRONMENTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/EXTERN_C.gif" ALT="EXTERN_C" TITLE="EXTERN_C"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/FAR.gif" ALT="FAR" TITLE="FAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/FASTCALL.gif" ALT="FASTCALL" TITLE="FASTCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/GENERAL.gif" ALT="GENERAL" TITLE="GENERAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/GRAPHICS.gif" ALT="GRAPHICS" TITLE="GRAPHICS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/IGNORE_VAR.gif" ALT="IGNORE_VAR" TITLE="IGNORE_VAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/INLINE_ASM.gif" ALT="INLINE_ASM" TITLE="INLINE_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/INTEL_ASM.gif" ALT="INTEL_ASM" TITLE="INTEL_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/KERNEL32.gif" ALT="KERNEL32" TITLE="KERNEL32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/KEYWORDS.gif" ALT="KEYWORDS" TITLE="KEYWORDS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/KNR_STYLE.gif" ALT="KNR_STYLE" TITLE="KNR_STYLE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/LIB.gif" ALT="LIB" TITLE="LIB"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/LOCAL.gif" ALT="LOCAL" TITLE="LOCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/MEMORY.gif" ALT="MEMORY" TITLE="MEMORY"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/MUTEX.gif" ALT="MUTEX" TITLE="MUTEX"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/OBJECT.gif" ALT="OBJECT" TITLE="OBJECT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/OBJECTS.gif" ALT="OBJECTS" TITLE="OBJECTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/OS_API.gif" ALT="OS_API" TITLE="OS_API"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/PACK.gif" ALT="PACK" TITLE="PACK"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/PASCAL.gif" ALT="PASCAL" TITLE="PASCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/PLATFORM.gif" ALT="PLATFORM" TITLE="PLATFORM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/POWERPC_ASM.gif" ALT="POWERPC_ASM" TITLE="POWERPC_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/PUSH_POP.gif" ALT="PUSH_POP" TITLE="PUSH_POP"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/READ_FILE.gif" ALT="READ_FILE" TITLE="READ_FILE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/REGPARM.gif" ALT="REGPARM" TITLE="REGPARM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/REGPASS.gif" ALT="REGPASS" TITLE="REGPASS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/ROM.gif" ALT="ROM" TITLE="ROM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/STDCALL.gif" ALT="STDCALL" TITLE="STDCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/STRINGIFICATION.gif" ALT="STRINGIFICATION" TITLE="STRINGIFICATION"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/THREAD.gif" ALT="THREAD" TITLE="THREAD"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/TOKEN_PASTING.gif" ALT="TOKEN_PASTING" TITLE="TOKEN_PASTING"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/TRY_CATCH.gif" ALT="TRY_CATCH" TITLE="TRY_CATCH"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/TYPES.gif" ALT="TYPES" TITLE="TYPES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/UNUSED.gif" ALT="UNUSED" TITLE="UNUSED"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/USER32.gif" ALT="USER32" TITLE="USER32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/VA_ARGS.gif" ALT="VA_ARGS" TITLE="VA_ARGS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/WIN_CORE.gif" ALT="WIN_CORE" TITLE="WIN_CORE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/W_XOR_X.gif" ALT="W_XOR_X" TITLE="W_XOR_X"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/__PEB_LOADER__.gif" ALT="__PEB_LOADER__" TITLE="__PEB_LOADER__"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/32/NOINLINE.gif" ALT="NOINLINE" TITLE="NOINLINE"/>
</details>

<details>
<summary>
	<h3>128x128 (Extended for a better view)</h3>
</summary>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ABI.gif" ALT="ABI" TITLE="ABI"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ALIGN.gif" ALT="ALIGN" TITLE="ALIGN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ARCHITECTURE.gif" ALT="ARCHITECTURE" TITLE="ARCHITECTURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ARM_ASM.gif" ALT="ARM_ASM" TITLE="ARM_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ASM.gif" ALT="ASM" TITLE="ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ASM_CONTENT.gif" ALT="ASM_CONTENT" TITLE="ASM_CONTENT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ATTRIBUTES.gif" ALT="ATTRIBUTES" TITLE="ATTRIBUTES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/BOOLEAN.gif" ALT="BOOLEAN" TITLE="BOOLEAN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CDECL.gif" ALT="CDECL" TITLE="CDECL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CHECK_FEATURE.gif" ALT="CHECK_FEATURE" TITLE="CHECK_FEATURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CLEAR_INSTRUCTION_CACHE.gif" ALT="CLEAR_INSTRUCTION_CACHE" TITLE="CLEAR_INSTRUCTION_CACHE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/COMMA_OPERATOR.gif" ALT="COMMA_OPERATOR" TITLE="COMMA_OPERATOR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CPU.gif" ALT="CPU" TITLE="CPU"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ENVIRONMENTS.gif" ALT="ENVIRONMENTS" TITLE="ENVIRONMENTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/EXTERN_C.gif" ALT="EXTERN_C" TITLE="EXTERN_C"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/FAR.gif" ALT="FAR" TITLE="FAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/FASTCALL.gif" ALT="FASTCALL" TITLE="FASTCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/GENERAL.gif" ALT="GENERAL" TITLE="GENERAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/GRAPHICS.gif" ALT="GRAPHICS" TITLE="GRAPHICS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/IGNORE_VAR.gif" ALT="IGNORE_VAR" TITLE="IGNORE_VAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/INLINE_ASM.gif" ALT="INLINE_ASM" TITLE="INLINE_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/INTEL_ASM.gif" ALT="INTEL_ASM" TITLE="INTEL_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/KERNEL32.gif" ALT="KERNEL32" TITLE="KERNEL32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/KEYWORDS.gif" ALT="KEYWORDS" TITLE="KEYWORDS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/KNR_STYLE.gif" ALT="KNR_STYLE" TITLE="KNR_STYLE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/LIB.gif" ALT="LIB" TITLE="LIB"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/LOCAL.gif" ALT="LOCAL" TITLE="LOCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/MEMORY.gif" ALT="MEMORY" TITLE="MEMORY"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/MUTEX.gif" ALT="MUTEX" TITLE="MUTEX"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/OBJECT.gif" ALT="OBJECT" TITLE="OBJECT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/OBJECTS.gif" ALT="OBJECTS" TITLE="OBJECTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/OS_API.gif" ALT="OS_API" TITLE="OS_API"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/PACK.gif" ALT="PACK" TITLE="PACK"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/PASCAL.gif" ALT="PASCAL" TITLE="PASCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/PLATFORM.gif" ALT="PLATFORM" TITLE="PLATFORM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/POWERPC_ASM.gif" ALT="POWERPC_ASM" TITLE="POWERPC_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/PUSH_POP.gif" ALT="PUSH_POP" TITLE="PUSH_POP"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/READ_FILE.gif" ALT="READ_FILE" TITLE="READ_FILE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/REGPARM.gif" ALT="REGPARM" TITLE="REGPARM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/REGPASS.gif" ALT="REGPASS" TITLE="REGPASS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ROM.gif" ALT="ROM" TITLE="ROM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/STDCALL.gif" ALT="STDCALL" TITLE="STDCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/STRINGIFICATION.gif" ALT="STRINGIFICATION" TITLE="STRINGIFICATION"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/THREAD.gif" ALT="THREAD" TITLE="THREAD"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/TOKEN_PASTING.gif" ALT="TOKEN_PASTING" TITLE="TOKEN_PASTING"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/TRY_CATCH.gif" ALT="TRY_CATCH" TITLE="TRY_CATCH"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/TYPES.gif" ALT="TYPES" TITLE="TYPES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/UNUSED.gif" ALT="UNUSED" TITLE="UNUSED"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/USER32.gif" ALT="USER32" TITLE="USER32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/VA_ARGS.gif" ALT="VA_ARGS" TITLE="VA_ARGS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/WIN_CORE.gif" ALT="WIN_CORE" TITLE="WIN_CORE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/W_XOR_X.gif" ALT="W_XOR_X" TITLE="W_XOR_X"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/__PEB_LOADER__.gif" ALT="__PEB_LOADER__" TITLE="__PEB_LOADER__"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/NOINLINE.gif" ALT="NOINLINE" TITLE="NOINLINE"/>
</details>

---

## Openning Issues and Reporting Bugs

* There are no rules. You can swear at me, ask questions, suggest something, or report bugs.
* I am open to all kinds of criticisms and that would be so kind if criticisms are helpful or teachfull.

## Copyright

- CMT is licensed under the GPL-3.0 License.
- This means it can be freely used in open source projects compatible with GPL-3.0.
- If you want to use CMT in proprietary or closed-source software, a commercial license is required.
- For commercial licensing inquiries, contact me.
- *© Maximum Tension all rights NOT reserved - 2023*

<!-- MARKDOWNS -->
[__OBJECT_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/OBJECT.md
[__ASM_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM.md
[__RAX_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/RAX.md
[__CPUID_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/CPUID.md
[__MIDR_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/MIDR.md
[__X17_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/X17.md
[__MFSPR_287_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/MFSPR_287.md
[__ALIGN_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ALIGN.md
[__CDECL_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/CDECL.md
[__EXTERN_C_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/EXTERN_C.md
[__FAR_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/FAR.md
[__FASTCALL_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/FASTCALL.md
[__NOINLINE_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/NOINLINE.md
[__PACK_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/PACK.md
[__PASCAL_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/PASCAL.md
[__REGPARM_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/REGPARM.md
[__REGPASS_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/REGPASS.md
[__STDCALL_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/STDCALL.md
[__COMMA_OPERATOR_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/COMMA_OPERATOR.md
[__INLINE_ASM_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/INLINE_ASM.md
[__STRINGIFICATION_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/STRINGIFICATION.md
[__TOKEN_PASTING_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/TOKEN_PASTING.md
[__ABI_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ABI.md
[__ARCHITECTURE_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ARCHITECTURE.md
[__CPU_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/CPU.md
[__KNR_STYLE_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/KNR_STYLE.md
[__PLATFORM_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/PLATFORM.md
[__W_XOR_X_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/W_XOR_X.md
[__BOOLEAN_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/BOOLEAN.md
[__IGNORE_VAR_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/IGNORE_VAR.md
[__TYPES_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/TYPES.md
[__CLEAR_INSTRUCTION_CACHE_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/CLEAR_INSTRUCTION_CACHE.md
[__MEMORY_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/MEMORY.md
[__MUTEX_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/MUTEX.md
[__THREAD_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/THREAD.md
[__PEB_LOADER_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/__PEB_LOADER__.md
[__KERNEL32_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/KERNEL32.md
[__USER32_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/USER32.md
[__LOCAL_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/LOCAL.md
[__TRY_CATCH_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/TRY_CATCH.md
[__UNUSED_MD__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/UNUSED.md
<!-- MARKDOWNS -->

<!-- ICONS -->
[__ABI_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/ABI.gif
[__ALIGN_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/ALIGN.gif
[__ARCHITECTURE_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/ARCHITECTURE.gif
[__ASM_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/ASM.gif
[__ARM_ASM_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/ARM_ASM.gif
[__ASM_CONTENT_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/ASM_CONTENT.gif
[__ATTRIBUTES_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/ATTRIBUTES.gif
[__BOOLEAN_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/BOOLEAN.gif
[__CDECL_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/CDECL.gif
[__CLEAR_INSTRUCTION_CACHE_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/CLEAR_INSTRUCTION_CACHE.gif
[__COMMA_OPERATOR_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/COMMA_OPERATOR.gif
[__CPU_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/CPU.gif
[__EXTERN_C_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/EXTERN_C.gif
[__FAR_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/FAR.gif
[__FASTCALL_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/FASTCALL.gif
[__NOINLINE_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/NOINLINE.gif
[__GENERAL_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/GENERAL.gif
[__GRAPHICS_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/GRAPHICS.gif
[__IGNORE_VAR_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/IGNORE_VAR.gif
[__INLINE_ASM_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/INLINE_ASM.gif
[__INTEL_ASM_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/INTEL_ASM.gif
[__KERNEL32_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/KERNEL32.gif
[__KEYWORDS_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/KEYWORDS.gif
[__KNR_STYLE_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/KNR_STYLE.gif
[__LIB_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/LIB.gif
[__LOCAL_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/LOCAL.gif
[__MEMORY_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/MEMORY.gif
[__MUTEX_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/MUTEX.gif
[__OBJECT_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/OBJECT.gif
[__OBJECTS_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/OBJECTS.gif
[__OS_API_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/OS_API.gif
[__PACK_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/PACK.gif
[__POWERPC_ASM_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/POWERPC_ASM.gif
[__CHECK_FEATURE_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/CHECK_FEATURE.gif
[__ENVIRONMENTS_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/ENVIRONMENTS.gif
[__PLATFORM_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/PLATFORM.gif
[__W_XOR_X_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/W_XOR_X.gif
[__PASCAL_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/PASCAL.gif
[__REGPARM_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/REGPARM.gif
[__REGPASS_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/REGPASS.gif
[__STDCALL_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/STDCALL.gif
[__STRINGIFICATION_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/STRINGIFICATION.gif
[__TOKEN_PASTING_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/TOKEN_PASTING.gif
[__TYPES_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/TYPES.gif
[__THREAD_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/THREAD.gif
[__WIN_CORE_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/WIN_CORE.gif
[__PEB_LOADER_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/__PEB_LOADER__.gif
[__USER32_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/USER32.gif
[__PUSH_POP_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/PUSH_POP.gif
[__TRY_CATCH_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/TRY_CATCH.gif
[__UNUSED_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/32/UNUSED.gif
<!-- ICONS -->
