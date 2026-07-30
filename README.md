
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/BANNERS/HEADER.png" ALT="Header" STYLE="WIDTH: 100%;"/>

**CMT (C Maximum Tension)** is a header-only systems programming library for C that pushes the language far beyond its conventional limits without sacrificing portability or performance. It introduces a unified runtime layer that enhances ergonomics, abstraction, and developer control while staying compatible with both ANSI and K&R C.

The library is built around low-level mechanisms rather than syntactic tricks, enabling natural and efficient usage patterns that integrate directly with the compiler, ABI, and architecture. It avoids hidden globals, minimizes overhead, and leverages register-level behavior and inline assembly to deliver predictable, high-performance execution across platforms.

CMT also provides a structured meta-layer over assembly, bridging differences between architectures, compilers, and calling conventions. It includes feature detection, environment introspection, and compatibility layers that allow code to adapt at compile-time and runtime to the exact system it is targeting.

Designed with longevity in mind, the project maintains support for legacy systems and toolchains while scaling up to modern environments. It emphasizes consistency across platforms, modular expansion, and deep control over system resources-from CPU instructions to OS-level APIs.

The repository includes multiple documentation formats, test matrices across compilers and architectures, and a stripped release variant optimized for minimal footprint.

## [To view CMT's documentation, click here.](https://github.com/TeomanDeniz/CMT-DOCS)

## CMT Contents

### ![][__GENERAL_GIF__] General
 * [![][__OBJECT_GIF__] **OBJECT**][__OBJECT_MD__]

### ![][__PUSH_POP_GIF__] Assembly
 * [![][__ASM_GIF__] **ASM**][__ASM_MD__]
   * ![][__INTEL_ASM_GIF__] Intel
     * [![][__ASM_CONTENT_GIF__] **RAX**][__RAX_MD__]
     * [![][__ASM_CONTENT_GIF__] **CPUID**][__CPUID_MD__]
   * ![][__ARM_ASM_GIF__] ARM
     * [![][__ASM_CONTENT_GIF__] **MIDR**][__MIDR_MD__]
     * [![][__ASM_CONTENT_GIF__] **X17**][__X17_MD__]
   * ![][__POWERPC_ASM_GIF__] ARM
     * [![][__ASM_CONTENT_GIF__] **MFSPR_287**][__MFSPR_287_MD__]

### ![][__ATTRIBUTES_GIF__] Attributes
 * [![][__ALIGN_GIF__] **ALIGN**][__ALIGN_MD__]
 * [![][__CDECL_GIF__] **CDECL**][__CDECL_MD__]
 * [![][__EXTERN_C_GIF__] **EXTERN_C**][__EXTERN_C_MD__]
 * [![][__FAR_GIF__] **FAR**][__FAR_MD__]
 * [![][__FASTCALL_GIF__] **FASTCALL**][__FASTCALL_MD__]
 * [![][__PACK_GIF__] **PACK**][__PACK_MD__]
 * [![][__PASCAL_GIF__] **PASCAL**][__PASCAL_MD__]
 * [![][__REGPARM_GIF__] **REGPARM**][__REGPARM_MD__]
 * [![][__REGPASS_GIF__] **REGPASS**][__REGPASS_MD__]
 * [![][__STDCALL_GIF__] **STDCALL**][__STDCALL_MD__]

### ![][__CHECK_FEATURE_GIF__] Check Feature
 * [![][__COMMA_OPERATOR_GIF__] **COMMA_OPERATOR**][__COMMA_OPERATOR_MD__]
 * [![][__INLINE_ASM_GIF__] **INLINE_ASM**][__INLINE_ASM_MD__]
 * [![][__STRINGIFICATION_GIF__] **STRINGIFICATION**][__STRINGIFICATION_MD__]
 * [![][__TOKEN_PASTING_GIF__] **TOKEN_PASTING**][__TOKEN_PASTING_MD__]

### ![][__ENVIRONMENTS_GIF__] Environments
 * [![][__ABI_GIF__] **ABI**][__ABI_MD__]
 * [![][__ARCHITECTURE_GIF__] **ARCHITECTURE**][__ARCHITECTURE_MD__]
 * [![][__CPU_GIF__] **CPU**][__CPU_MD__]
 * [![][__KNR_STYLE_GIF__] **KNR_STYLE**][__KNR_STYLE_MD__]
 * [![][__PLATFORM_GIF__] **PLATFORM**][__PLATFORM_MD__]
 * [![][__W_XOR_X_GIF__] **W_XOR_X**][__W_XOR_X_MD__]

### ![][__KEYWORDS_GIF__] Keywords
 * [![][__BOOLEAN_GIF__] **BOOLEAN**][__BOOLEAN_MD__]
 * [![][__IGNORE_VAR_GIF__] **IGNORE_VAR**][__IGNORE_VAR_MD__]
 * [![][__TYPES_GIF__] **TYPES**][__TYPES_MD__]

### ![][__LIB_GIF__] LIB

### ![][__OS_API_GIF__] OS_API
 * [![][__CLEAR_INSTRUCTION_CACHE_GIF__] **CLEAR_INSTRUCTION_CACHE**][__CLEAR_INSTRUCTION_CACHE_MD__]
 * [![][__MEMORY_GIF__] **MEMORY**][__MEMORY_MD__]
 * [![][__MUTEX_GIF__] **MUTEX**][__MUTEX_MD__]
 * [![][__THREAD_GIF__] **THREAD**][__THREAD_MD__]

### ![][__WIN_CORE_GIF__] WINDOWS CORE
 * [![][__PEB_LOADER_GIF__] **\_\_PEB_LOADER\_\_**][__PEB_LOADER_MD__]
 * [![][__KERNEL32_GIF__] **KERNEL32**][__KERNEL32_MD__]
 * [![][__USER32_GIF__] **USER32**][__USER32_MD__]

---

## Clone or Download CMT

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

This does not include modules such as `PNG`, `MAP`, `SERVER`, `GRAPHICS`, `AUDIO` etc., which depend on the `OBJECT` module.

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

## Icons

* Yes, you can use them for free.
* These icons are inspired by the style of Windows 95 icons.
* They are all created by me and are not affiliated with or endorsed by Microsoft.
* Not mandatory but I'll be glad if you credit me when you are using my icon(s) on a project or something.

List of the icons:

<details>
<summary>
	<h2>32x32 (Original Size)</h2>
</summary>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ABI.gif" ALT="ABI" TITLE="ABI"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ALIGN.gif" ALT="ALIGN" TITLE="ALIGN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ARCHITECTURE.gif" ALT="ARCHITECTURE" TITLE="ARCHITECTURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ARM_ASM.gif" ALT="ARM_ASM" TITLE="ARM_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ASM.gif" ALT="ASM" TITLE="ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ASM_CONTENT.gif" ALT="ASM_CONTENT" TITLE="ASM_CONTENT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ATTRIBUTES.gif" ALT="ATTRIBUTES" TITLE="ATTRIBUTES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/BOOLEAN.gif" ALT="BOOLEAN" TITLE="BOOLEAN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/CDECL.gif" ALT="CDECL" TITLE="CDECL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/CHECK_FEATURE.gif" ALT="CHECK_FEATURE" TITLE="CHECK_FEATURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/CLEAR_INSTRUCTION_CACHE.gif" ALT="CLEAR_INSTRUCTION_CACHE" TITLE="CLEAR_INSTRUCTION_CACHE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/COMMA_OPERATOR.gif" ALT="COMMA_OPERATOR" TITLE="COMMA_OPERATOR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/CPU.gif" ALT="CPU" TITLE="CPU"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ENVIRONMENTS.gif" ALT="ENVIRONMENTS" TITLE="ENVIRONMENTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/EXTERN_C.gif" ALT="EXTERN_C" TITLE="EXTERN_C"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/FAR.gif" ALT="FAR" TITLE="FAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/FASTCALL.gif" ALT="FASTCALL" TITLE="FASTCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/GENERAL.gif" ALT="GENERAL" TITLE="GENERAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/GRAPHICS.gif" ALT="GRAPHICS" TITLE="GRAPHICS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/IGNORE_VAR.gif" ALT="IGNORE_VAR" TITLE="IGNORE_VAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/INLINE_ASM.gif" ALT="INLINE_ASM" TITLE="INLINE_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/INTEL_ASM.gif" ALT="INTEL_ASM" TITLE="INTEL_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/KERNEL32.gif" ALT="KERNEL32" TITLE="KERNEL32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/KEYWORDS.gif" ALT="KEYWORDS" TITLE="KEYWORDS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/KNR_STYLE.gif" ALT="KNR_STYLE" TITLE="KNR_STYLE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/LIB.gif" ALT="LIB" TITLE="LIB"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/LOCAL.gif" ALT="LOCAL" TITLE="LOCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/MEMORY.gif" ALT="MEMORY" TITLE="MEMORY"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/MUTEX.gif" ALT="MUTEX" TITLE="MUTEX"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/OBJECT.gif" ALT="OBJECT" TITLE="OBJECT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/OBJECTS.gif" ALT="OBJECTS" TITLE="OBJECTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/OS_API.gif" ALT="OS_API" TITLE="OS_API"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/PACK.gif" ALT="PACK" TITLE="PACK"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/PASCAL.gif" ALT="PASCAL" TITLE="PASCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/PLATFORM.gif" ALT="PLATFORM" TITLE="PLATFORM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/POWERPC_ASM.gif" ALT="POWERPC_ASM" TITLE="POWERPC_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/PUSH_POP.gif" ALT="PUSH_POP" TITLE="PUSH_POP"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/READ_FILE.gif" ALT="READ_FILE" TITLE="READ_FILE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/REGPARM.gif" ALT="REGPARM" TITLE="REGPARM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/REGPASS.gif" ALT="REGPASS" TITLE="REGPASS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ROM.gif" ALT="ROM" TITLE="ROM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/STDCALL.gif" ALT="STDCALL" TITLE="STDCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/STRINGIFICATION.gif" ALT="STRINGIFICATION" TITLE="STRINGIFICATION"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/THREAD.gif" ALT="THREAD" TITLE="THREAD"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/TOKEN_PASTING.gif" ALT="TOKEN_PASTING" TITLE="TOKEN_PASTING"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/TRY_CATCH.gif" ALT="TRY_CATCH" TITLE="TRY_CATCH"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/TYPES.gif" ALT="TYPES" TITLE="TYPES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/UNUSED.gif" ALT="UNUSED" TITLE="UNUSED"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/USER32.gif" ALT="USER32" TITLE="USER32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/VA_ARGS.gif" ALT="VA_ARGS" TITLE="VA_ARGS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/WIN_CORE.gif" ALT="WIN_CORE" TITLE="WIN_CORE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/W_XOR_X.gif" ALT="W_XOR_X" TITLE="W_XOR_X"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/__PEB_LOADER__.gif" ALT="__PEB_LOADER__" TITLE="__PEB_LOADER__"/>
</details>

<details>
<summary>
	<h2>128x128 (Extended for a better view)</h2>
</summary>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ABI.gif" ALT="ABI" TITLE="ABI"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ALIGN.gif" ALT="ALIGN" TITLE="ALIGN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ARCHITECTURE.gif" ALT="ARCHITECTURE" TITLE="ARCHITECTURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ARM_ASM.gif" ALT="ARM_ASM" TITLE="ARM_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ASM.gif" ALT="ASM" TITLE="ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ASM_CONTENT.gif" ALT="ASM_CONTENT" TITLE="ASM_CONTENT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ATTRIBUTES.gif" ALT="ATTRIBUTES" TITLE="ATTRIBUTES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/BOOLEAN.gif" ALT="BOOLEAN" TITLE="BOOLEAN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CDECL.gif" ALT="CDECL" TITLE="CDECL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CHECK_FEATURE.gif" ALT="CHECK_FEATURE" TITLE="CHECK_FEATURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CLEAR_INSTRUCTION_CACHE.gif" ALT="CLEAR_INSTRUCTION_CACHE" TITLE="CLEAR_INSTRUCTION_CACHE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/COMMA_OPERATOR.gif" ALT="COMMA_OPERATOR" TITLE="COMMA_OPERATOR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CPU.gif" ALT="CPU" TITLE="CPU"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ENVIRONMENTS.gif" ALT="ENVIRONMENTS" TITLE="ENVIRONMENTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/EXTERN_C.gif" ALT="EXTERN_C" TITLE="EXTERN_C"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/FAR.gif" ALT="FAR" TITLE="FAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/FASTCALL.gif" ALT="FASTCALL" TITLE="FASTCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/GENERAL.gif" ALT="GENERAL" TITLE="GENERAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/GRAPHICS.gif" ALT="GRAPHICS" TITLE="GRAPHICS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/IGNORE_VAR.gif" ALT="IGNORE_VAR" TITLE="IGNORE_VAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/INLINE_ASM.gif" ALT="INLINE_ASM" TITLE="INLINE_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/INTEL_ASM.gif" ALT="INTEL_ASM" TITLE="INTEL_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/KERNEL32.gif" ALT="KERNEL32" TITLE="KERNEL32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/KEYWORDS.gif" ALT="KEYWORDS" TITLE="KEYWORDS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/KNR_STYLE.gif" ALT="KNR_STYLE" TITLE="KNR_STYLE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/LIB.gif" ALT="LIB" TITLE="LIB"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/LOCAL.gif" ALT="LOCAL" TITLE="LOCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/MEMORY.gif" ALT="MEMORY" TITLE="MEMORY"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/MUTEX.gif" ALT="MUTEX" TITLE="MUTEX"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/OBJECT.gif" ALT="OBJECT" TITLE="OBJECT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/OBJECTS.gif" ALT="OBJECTS" TITLE="OBJECTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/OS_API.gif" ALT="OS_API" TITLE="OS_API"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PACK.gif" ALT="PACK" TITLE="PACK"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PASCAL.gif" ALT="PASCAL" TITLE="PASCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PLATFORM.gif" ALT="PLATFORM" TITLE="PLATFORM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/POWERPC_ASM.gif" ALT="POWERPC_ASM" TITLE="POWERPC_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PUSH_POP.gif" ALT="PUSH_POP" TITLE="PUSH_POP"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/READ_FILE.gif" ALT="READ_FILE" TITLE="READ_FILE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/REGPARM.gif" ALT="REGPARM" TITLE="REGPARM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/REGPASS.gif" ALT="REGPASS" TITLE="REGPASS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ROM.gif" ALT="ROM" TITLE="ROM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/STDCALL.gif" ALT="STDCALL" TITLE="STDCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/STRINGIFICATION.gif" ALT="STRINGIFICATION" TITLE="STRINGIFICATION"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/THREAD.gif" ALT="THREAD" TITLE="THREAD"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/TOKEN_PASTING.gif" ALT="TOKEN_PASTING" TITLE="TOKEN_PASTING"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/TRY_CATCH.gif" ALT="TRY_CATCH" TITLE="TRY_CATCH"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/TYPES.gif" ALT="TYPES" TITLE="TYPES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/UNUSED.gif" ALT="UNUSED" TITLE="UNUSED"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/USER32.gif" ALT="USER32" TITLE="USER32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/VA_ARGS.gif" ALT="VA_ARGS" TITLE="VA_ARGS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/WIN_CORE.gif" ALT="WIN_CORE" TITLE="WIN_CORE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/W_XOR_X.gif" ALT="W_XOR_X" TITLE="W_XOR_X"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/__PEB_LOADER__.gif" ALT="__PEB_LOADER__" TITLE="__PEB_LOADER__"/>
</details>

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
<!-- ICONS -->

<!-- ICONS 128 -->
[__ABI_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/ABI.gif
[__ALIGN_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/ALIGN.gif
[__ARCHITECTURE_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/ARCHITECTURE.gif
[__ASM_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/ASM.gif
[__ARM_ASM_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/ARM_ASM.gif
[__ASM_CONTENT_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/ASM_CONTENT.gif
[__ATTRIBUTES_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/ATTRIBUTES.gif
[__BOOLEAN_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/BOOLEAN.gif
[__CDECL_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/CDECL.gif
[__CLEAR_INSTRUCTION_CACHE_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/CLEAR_INSTRUCTION_CACHE.gif
[__COMMA_OPERATOR_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/COMMA_OPERATOR.gif
[__CPU_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/CPU.gif
[__EXTERN_C_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/EXTERN_C.gif
[__FAR_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/FAR.gif
[__FASTCALL_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/FASTCALL.gif
[__GENERAL_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/GENERAL.gif
[__GRAPHICS_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/GRAPHICS.gif
[__IGNORE_VAR_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/IGNORE_VAR.gif
[__INLINE_ASM_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/INLINE_ASM.gif
[__INTEL_ASM_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/INTEL_ASM.gif
[__KERNEL32_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/KERNEL32.gif
[__KEYWORDS_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/KEYWORDS.gif
[__KNR_STYLE_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/KNR_STYLE.gif
[__LIB_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/LIB.gif
[__LOCAL_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/LOCAL.gif
[__MEMORY_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/MEMORY.gif
[__MUTEX_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/MUTEX.gif
[__OBJECT_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/OBJECT.gif
[__OBJECTS_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/OBJECTS.gif
[__OS_API_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/OS_API.gif
[__PACK_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/PACK.gif
[__POWERPC_ASM_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/POWERPC_ASM.gif
[__CHECK_FEATURE_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/CHECK_FEATURE.gif
[__ENVIRONMENTS_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/ENVIRONMENTS.gif
[__PLATFORM_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/PLATFORM.gif
[__W_XOR_X_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/W_XOR_X.gif
[__PASCAL_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/PASCAL.gif
[__REGPARM_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/REGPARM.gif
[__REGPASS_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/REGPASS.gif
[__STDCALL_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/STDCALL.gif
[__STRINGIFICATION_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/STRINGIFICATION.gif
[__TOKEN_PASTING_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/TOKEN_PASTING.gif
[__TYPES_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/TYPES.gif
[__THREAD_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/THREAD.gif
[__WIN_CORE_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/WIN_CORE.gif
[__PEB_LOADER_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/__PEB_LOADER__.gif
[__USER32_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/USER32.gif
[__PUSH_POP_128_GIF__]: https://github.com/TeomanDeniz/CMT/blob/main/docs/IMAGES/128/PUSH_POP.gif
<!-- ICONS 128 -->
