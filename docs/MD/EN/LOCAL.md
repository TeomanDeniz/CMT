# LOCAL

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/LOCAL.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ATTRIBUTES/LOCAL.H](https://github.com/TeomanDeniz/CMT/blob/main/ATTRIBUTES/LOCAL.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_LOCAL
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ATTRIBUTES/LOCAL.H"
> ```

## Abstract

This keyword must only be used with **global** or `static` variables when needed.

It marks the variable as **thread-local**, meaning **each thread gets its own separate instance** of that variable.

This ensures the variable is **not shared between threads**, preventing race conditions or unintended data sharing.

```c
extern local int g_variable;
//     ^^^^^
```

Add that if you're trying to access your global variable using the `extern` keyword.

### Side Notes

Yes, you must use the `local` keyword in the **prototypes of global variables** too.

## Contents

| Contents List   |
| --------------- |
| `#define LOCAL` |
| `#define local` |

```c
#define LOCAL
#define local
```

**For Global Variables**:
```c
local int g_variable = 0;
```

**For Static Variables**:
```c
void test(void)
{
	static local int	variable = 0;
}
```

## References

 - [thread_local - cppreference.com](https://cppreference.com/c/thread/thread_local)
 - [Chapter 8 Thread-Local Storage - docs.oracle.com](https://docs.oracle.com/cd/E19683-01/817-3677/chapter8-1/index.html)
 - [Thread Local Storage (TLS) - microsoft.com](https://learn.microsoft.com/cpp/parallel/thread-local-storage-tls)
 - [6.64 Thread-Local Storage - gnu.org](https://gcc.gnu.org/onlinedocs/gcc-11.5.0/gcc/Thread-Local.html)
 - [\_Thread_local for better C++ interoperability with C - open-std.org](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2850.pdf)
 - [6.49. Thread-Local Storage - bris.ac.uk](https://www.acrc.bris.ac.uk/acrc/RedHat/rhel-gcc-en-4/thread-local.html)
 - [The __thread storage class specifier - ibm.com](https://www.ibm.com/docs/en/xl-c-and-cpp-linux/16.1.0?topic=compatibility-thread-storage-class-specifier)
 - [thread - llvm.org](https://clang.llvm.org/docs/AttributeReference.html#thread)
