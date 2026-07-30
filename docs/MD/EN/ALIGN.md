# ALIGN

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ALIGN.gif"/>
</p>

> ## ⚠ Important
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

----

### MAX_ALIGNMENT

```c
#define MAX_ALIGNMENT
```

Returns the size of maximum required alignment supported but compiler or operating system.

----

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

----

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

----

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
