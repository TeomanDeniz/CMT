# FAR

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/FAR.gif"/>
</p>

> ## ⚠️ Important
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

----

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

----

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
