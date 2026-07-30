# MUTEX

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/MUTEX.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/OS_API/MUTEX.H](https://github.com/TeomanDeniz/CMT/blob/main/OS_API/MUTEX.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_MUTEX
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/OS_API/MUTEX.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

MUTEX provides a lightweight, cross-platform mutual exclusion primitive for synchronizing access to shared resources between multiple threads.

It is primarily intended for use alongside `THREAD.H`, allowing threads to safely coordinate access to data and prevent race conditions.

A mutex can be created, locked, unlocked, and destroyed through a unified API that maps to the native synchronization mechanisms of each supported operating system.

This allows the same source code to be used across a wide range of platforms without modification.

Typical use cases include:

* Protecting shared variables and data structures.
* Serializing access to files, devices, or other resources.
* Coordinating work between threads created with THREAD.H.
* Preventing race conditions in multithreaded applications.

MUTEX is designed to be simple, portable, and suitable for both desktop and embedded environments.

Supported platforms:
* FreeRTOS (define `CMT_TRY_FREE_RTOS`)
* Haiku
* OS/2 (Both 32-bit and 16-bit)
* Plan9 (define `CMT_TRY_PLAN9`)
* TI-RTOS (define `CMT_TRY_TIRTOS`)
* Unix (MacOS included)
* VxWorks
* Windows
* Zephyr (define `CMT_TRY_ZEPHYR`)

If CMT indicates a `CMT_TRY_*` macro for your platform, you must define it manually.

The build system cannot reliably auto-detect these platforms because most compilers do not expose a consistent platform identification macro.

I am SO sorry about that ;-;

Also, as an extra: If you can't find your platform in the list, don't worry; CMT also provides a `GO`-like multitasking system, or its own multithreading management, for your platform (for example, "MS-DOS"), allowing it to work on platforms that aren't officially supported.

## Contents

| Contents List                                         |
| ----------------------------------------------------- |
| `#define MUTEX_LOCK(MUTEX)`                           |
| `#define mutex_lock(MUTEX)`                           |
| `#define MUTEX_UNLOCK(MUTEX)`                         |
| `#define mutex_unlock(MUTEX)`                         |
| `typedef T_MUTEX;`                                    |
| `typedef t_mutex;`                                    |
| `int MUTEX_CREATE(T_MUTEX *);`                        |
| `int mutex_create(t_mutex *);`                        |
| `int MUTEX_DESTROY(T_MUTEX *);`                       |
| `int mutex_destroy(t_mutex *);`                       |

----

### `MUTEX_CREATE`

```c
int	MUTEX_CREATE(T_MUTEX *);
int	mutex_create(t_mutex *);
```

Initializes a mutex object.

The argument is a pointer to a mutex handle that will be initialized by the function.

Returns `0` on success, or a non-zero value on failure.

**Example**:
```c
t_mutex	mutex;

mutex_create(&mutex);

if (!mutex)
{
	// handle error
}
```

----

### `MUTEX_DESTROY`

```c
int	MUTEX_DESTROY(T_MUTEX *);
int	mutex_destroy(t_mutex *);
```

Destroys a mutex created with `mutex_create`.

The mutex becomes invalid after this call.

Returns `0` on success, or a non-zero value on failure.

**Example**:
```c
mutex_destroy(&mutex);
```

----

### `MUTEX_LOCK`

```c
#define MUTEX_LOCK(MUTEX)
#define mutex_lock(MUTEX)
```

Blocks until the mutex is acquired.

**Example**:
```c
mutex_lock(mutex);
```

----

### `MUTEX_UNLOCK`

```c
#define MUTEX_UNLOCK(MUTEX)
#define mutex_unlock(MUTEX)
```

Releases a previously acquired mutex.

**Example**:
```c
mutex_unlock(mutex);
```

## References

 - [Semaphores - freertos.org](https://www.freertos.org/Documentation/02-Kernel/04-API-references/10-Semaphore-and-Mutexes/00-Semaphores)
 - [Semaphores - haiku-os.org](https://www.haiku-os.org/legacy-docs/bebook/TheKernelKit_Semaphores_Overview.html)
 - [Introduction to OS/2 Programming - os2site.com](https://www.os2site.com/sw/info/books/Introduction_to_OS2_Programming.pdf)
 - [REAL TIME OPERATING SYSTEM PROGRAMMING-I: µC/OS-II and VxWorks - dauniv.ac.in](https://www.dauniv.ac.in/frontassets/coursematerial/embeddedsystems/Chap_11Lesson06Emsys3EMucosSem.pdf)
 - [THREAD(3) - 9fans.github.io](https://9fans.github.io/plan9port/man/man3/thread.html)
 - [Introduction to Operating Systems Abstractions Using Plan 9 from Bell Labs - material.karlov.mff.cuni.cz](https://material.karlov.mff.cuni.cz/people/hajek/files/p9.pdf)
 - [Thread Synchronization - software-dl.ti.com](https://software-dl.ti.com/simplelink/esd/simplelink_cc13x2_26x2_sdk/3.40.00.02/exports/docs/proprietary-rf/proprietary-rf-users-guide/tirtos/synchronization.html#semaphores)
 - [Using mutexes - ibm.com](https://www.ibm.com/docs/en/aix/7.1.0?topic=programming-using-mutexes)
 - [Generic Mutex Subsystem - kernel.org](https://docs.kernel.org/locking/mutex-design.html)
 - [Binary POSIX Mutexes - cgi.di.uoa.gr](https://cgi.di.uoa.gr/~antoulas/k24/lectures/l13.pdf)
 - [semMLib - ee.torontomu.ca](https://www.ee.torontomu.ca/~courses/ee8205/Data-Sheets/Tornado-VxWorks/vxworks/ref/semMLib.html)
 - [Critical Section Objects - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/sync/critical-section-objects)
 - [Mutexes - docs.zephyrproject.org](https://docs.zephyrproject.org/latest/kernel/services/synchronization/mutexes.html)
 - [**THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS.pdf** - CMT](https://docs.google.com/viewer?url=https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/ARTICLES/EN/THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS.pdf)
