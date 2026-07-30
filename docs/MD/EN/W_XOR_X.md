# W_XOR_X

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/W_XOR_X.gif"/>
</p>

> ## ⚠️ Important
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

----

### W_XOR_X

```c
#define W_XOR_X
```

Defined if a memory page can only ever be RW or RX, never RWX at the same time, as enforced by the OS.

----

### W_NOT_TO_X

```c
#define W_NOT_TO_X
```

Defined if a page, once writable, can NEVER become executable at all (no W->X transition permitted by any means, not even dual-mapping).

Stricter than W_XOR_X; only defined where that stronger guarantee holds.

----

### IS_W_XOR_X

```c
#define IS_W_XOR_X
```

Always defined, 0 or 1. Same information as W_XOR_X, usable in runtime expressions (if (IS_W_XOR_X)) where a possibly-undefined macro can't be.

----

### IS_W_NOT_TO_X

```c
#define IS_W_NOT_TO_X
```

Always defined, 0 or 1. Same information as W_NOT_TO_X, usable in runtime expressions (if (IS_W_NOT_TO_X)) where a possibly-undefined macro can't be.

## References

 - [W^X - wikipedia.org](https://wikipedia.org/wiki/W%5EX)
 - [Enforcing a write-xor-execute memory policy from usermode - labs.portcullis.co.uk](https://labs.portcullis.co.uk/blog/enforcing-a-write-xor-execute-memory-policy-from-usermode/)
