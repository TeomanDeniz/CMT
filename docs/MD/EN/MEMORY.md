# MEMORY

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/MEMORY.gif"/>
</p>

> ## ⚠️ Important
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

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT-DOCS/tree/main#cmt-auto-linker)

## Abstract

Cross-platform memory management utilities for normal, far, paged, and executable memory allocation.

Provides lightweight wrappers around standard allocators while exposing low-level features such as page allocation, runtime memory protection changes, executable memory regions, and far-pointer compatibility for legacy architectures.

Designed to work across 16-bit, 32-bit, and 64-bit environments with automatic architecture-aware behavior and fallback handling.

If `stdlib` exists in your compiler, the function will simply uses the `malloc`, `calloc`, and `free` functions for best performance.

Far pointer functions are automatically downgrades to normal functions in 32-bit and 64-bit architectures.

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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

----

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
