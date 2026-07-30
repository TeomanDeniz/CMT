# PACK

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PACK.gif"/>
</p>

> ## ⚠️ Important
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

----

### PRAGMA_PACK_PUSH

Begins a structure packing scope by pushing the current alignment and setting packed alignment for subsequent declarations.

Example:
```c
PRAGMA_PACK_PUSH
struct test
{
...
```

----

### PRAGMA_PACK_POP

Ends a structure packing scope by restoring the previous alignment pushed by `PRAGMA_PACK_PUSH`.

Example:
```c
...
};
PRAGMA_PACK_POP
```

----

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
