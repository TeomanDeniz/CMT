# CLEAR_INSTRUCTION_CACHE

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CLEAR_INSTRUCTION_CACHE.gif"/>
</p>

> ## ⚠️ Important
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

----

## Content

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

## References

 - [7.12 Other Built-in Functions Provided by GCC (void \_\_builtin\_\_\_clear_cache (void \*begin, void \*end)) - gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html#index-_005f_005fbuiltin_005f_005f_005fclear_005fcache)
 - [FlushInstructionCache function (processthreadsapi.h) - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-flushinstructioncache)
