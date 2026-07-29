
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/BANNERS/HEADER.png" ALT="Header" STYLE="WIDTH: 100%;"/>

**CMT (C Maximum Tension)** is a header-only systems programming library for C that pushes the language far beyond its conventional limits without sacrificing portability or performance. It introduces a unified runtime layer that enhances ergonomics, abstraction, and developer control while staying compatible with both ANSI and K&R C.

The library is built around low-level mechanisms rather than syntactic tricks, enabling natural and efficient usage patterns that integrate directly with the compiler, ABI, and architecture. It avoids hidden globals, minimizes overhead, and leverages register-level behavior and inline assembly to deliver predictable, high-performance execution across platforms.

CMT also provides a structured meta-layer over assembly, bridging differences between architectures, compilers, and calling conventions. It includes feature detection, environment introspection, and compatibility layers that allow code to adapt at compile-time and runtime to the exact system it is targeting.

Designed with longevity in mind, the project maintains support for legacy systems and toolchains while scaling up to modern environments. It emphasizes consistency across platforms, modular expansion, and deep control over system resources-from CPU instructions to OS-level APIs.

The repository includes multiple documentation formats, test matrices across compilers and architectures, and a stripped release variant optimized for minimal footprint.

[To view CMT's documentation, click here.](https://github.com/TeomanDeniz/CMT-DOCS)

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
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ABI.gif" ALT="ABI"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ALIGN.gif" ALT="ALIGN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ARCHITECTURE.gif" ALT="ARCHITECTURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ARM_ASM.gif" ALT="ARM_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ASM.gif" ALT="ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ASM_CONTENT.gif" ALT="ASM_CONTENT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ATTRIBUTES.gif" ALT="ATTRIBUTES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/BOOLEAN.gif" ALT="BOOLEAN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/CDECL.gif" ALT="CDECL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/CHECK_FEATURE.gif" ALT="CHECK_FEATURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/CLEAR_INSTRUCTION_CACHE.gif" ALT="CLEAR_INSTRUCTION_CACHE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/COMMA_OPERATOR.gif" ALT="COMMA_OPERATOR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/CPU.gif" ALT="CPU"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ENVIRONMENTS.gif" ALT="ENVIRONMENTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/EXTERN_C.gif" ALT="EXTERN_C"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/FAR.gif" ALT="FAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/FASTCALL.gif" ALT="FASTCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/GENERAL.gif" ALT="GENERAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/GRAPHICS.gif" ALT="GRAPHICS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/IGNORE_VAR.gif" ALT="IGNORE_VAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/INLINE_ASM.gif" ALT="INLINE_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/INTEL_ASM.gif" ALT="INTEL_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/KERNEL32.gif" ALT="KERNEL32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/KEYWORDS.gif" ALT="KEYWORDS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/KNR_STYLE.gif" ALT="KNR_STYLE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/LIB.gif" ALT="LIB"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/LOCAL.gif" ALT="LOCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/MEMORY.gif" ALT="MEMORY"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/MUTEX.gif" ALT="MUTEX"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/OBJECT.gif" ALT="OBJECT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/OBJECTS.gif" ALT="OBJECTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/OS_API.gif" ALT="OS_API"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/PACK.gif" ALT="PACK"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/PASCAL.gif" ALT="PASCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/PLATFORM.gif" ALT="PLATFORM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/POWERPC_ASM.gif" ALT="POWERPC_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/PUSH_POP.gif" ALT="PUSH_POP"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/READ_FILE.gif" ALT="READ_FILE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/REGPARM.gif" ALT="REGPARM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/REGPASS.gif" ALT="REGPASS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/ROM.gif" ALT="ROM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/STDCALL.gif" ALT="STDCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/STRINGIFICATION.gif" ALT="STRINGIFICATION"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/THREAD.gif" ALT="THREAD"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/TOKEN_PASTING.gif" ALT="TOKEN_PASTING"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/TRY_CATCH.gif" ALT="TRY_CATCH"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/TYPES.gif" ALT="TYPES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/UNUSED.gif" ALT="UNUSED"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/USER32.gif" ALT="USER32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/VA_ARGS.gif" ALT="VA_ARGS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/WIN_CORE.gif" ALT="WIN_CORE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/W_XOR_X.gif" ALT="W_XOR_X"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/32/__PEB_LOADER__.gif" ALT="__PEB_LOADER__"/>
</details>

<details>
<summary>
	<h2>128x128 (Extended for a better view)</h2>
</summary>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ABI.gif" ALT="ABI"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ALIGN.gif" ALT="ALIGN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ARCHITECTURE.gif" ALT="ARCHITECTURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ARM_ASM.gif" ALT="ARM_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ASM.gif" ALT="ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ASM_CONTENT.gif" ALT="ASM_CONTENT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ATTRIBUTES.gif" ALT="ATTRIBUTES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/BOOLEAN.gif" ALT="BOOLEAN"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CDECL.gif" ALT="CDECL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CHECK_FEATURE.gif" ALT="CHECK_FEATURE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CLEAR_INSTRUCTION_CACHE.gif" ALT="CLEAR_INSTRUCTION_CACHE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/COMMA_OPERATOR.gif" ALT="COMMA_OPERATOR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/CPU.gif" ALT="CPU"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ENVIRONMENTS.gif" ALT="ENVIRONMENTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/EXTERN_C.gif" ALT="EXTERN_C"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/FAR.gif" ALT="FAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/FASTCALL.gif" ALT="FASTCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/GENERAL.gif" ALT="GENERAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/GRAPHICS.gif" ALT="GRAPHICS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/IGNORE_VAR.gif" ALT="IGNORE_VAR"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/INLINE_ASM.gif" ALT="INLINE_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/INTEL_ASM.gif" ALT="INTEL_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/KERNEL32.gif" ALT="KERNEL32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/KEYWORDS.gif" ALT="KEYWORDS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/KNR_STYLE.gif" ALT="KNR_STYLE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/LIB.gif" ALT="LIB"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/LOCAL.gif" ALT="LOCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/MEMORY.gif" ALT="MEMORY"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/MUTEX.gif" ALT="MUTEX"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/OBJECT.gif" ALT="OBJECT"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/OBJECTS.gif" ALT="OBJECTS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/OS_API.gif" ALT="OS_API"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PACK.gif" ALT="PACK"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PASCAL.gif" ALT="PASCAL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PLATFORM.gif" ALT="PLATFORM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/POWERPC_ASM.gif" ALT="POWERPC_ASM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PUSH_POP.gif" ALT="PUSH_POP"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/READ_FILE.gif" ALT="READ_FILE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/REGPARM.gif" ALT="REGPARM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/REGPASS.gif" ALT="REGPASS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/ROM.gif" ALT="ROM"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/STDCALL.gif" ALT="STDCALL"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/STRINGIFICATION.gif" ALT="STRINGIFICATION"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/THREAD.gif" ALT="THREAD"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/TOKEN_PASTING.gif" ALT="TOKEN_PASTING"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/TRY_CATCH.gif" ALT="TRY_CATCH"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/TYPES.gif" ALT="TYPES"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/UNUSED.gif" ALT="UNUSED"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/USER32.gif" ALT="USER32"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/VA_ARGS.gif" ALT="VA_ARGS"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/WIN_CORE.gif" ALT="WIN_CORE"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/W_XOR_X.gif" ALT="W_XOR_X"/>
<IMG SRC="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/__PEB_LOADER__.gif" ALT="__PEB_LOADER__"/>
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
