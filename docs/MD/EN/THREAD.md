# THREAD

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/THREAD.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/OS_API/THREAD.H](https://github.com/TeomanDeniz/CMT/blob/main/OS_API/THREAD.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_THREAD
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/OS_API/THREAD.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

`THREAD.H` provides a small cross-platform thread abstraction layer for creating and synchronizing threads using a single, consistent API. The goal of the module is to hide platform-specific threading implementations behind a common interface, allowing applications and libraries to create and manage threads without directly depending on operating system APIs.

The module automatically maps its functions and types to the native threading facilities available on the target platform. While the underlying implementation differs between operating systems and RTOSes, the behavior and usage remain consistent across all supported environments.

`THREAD.H` is intended for projects that require portable multithreading support while minimizing platform-specific code and conditional compilation.

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
| `typedef T_THREAD;`                                   |
| `typedef t_thread;`                                   |
| `T_THREAD THREAD_CREATE(void *(*) (void *), void *);` |
| `t_thread thread_create(void *(*) (void *), void *);` |
| `int THREAD_JOIN(T_THREAD, void **);`                 |
| `int thread_join(t_thread, void **);`                 |

### THREAD_CREATE

```c
T_THREAD	THREAD_CREATE(void *(*) (void *), void *);
t_thread	thread_create(void *(*) (void *), void *);
```

Creates a new thread and starts execution immediately.

The first argument is the thread entry function, which must have signature `void *(*)(void *)`.

The second argument is passed as the input parameter to the thread function.

Returns a thread handle (`t_thread` / `T_THREAD`) on success, or `NULL` on failure.

**Example**:
```c
void	*my_thread(void *arg)
{
	// ...
	return (0);
}

{
	t_thread	thread = thread_create(my_thread, NULL);

	if (!thread)
	{
		// handle error
	}
}
```

----

### `THREAD_JOIN`

```c
int	THREAD_JOIN(T_THREAD, void **);
int	thread_join(t_thread, void **);
```

Waits for the specified thread to terminate.

The second argument is an optional output parameter used to retrieve the thread's return value.

It may be `NULL` if the return value is not needed.

Returns `0` on success, or a non-zero value on failure.

**Examples**:
```c
void *ret;

thread_join(thread, &ret);
```

```c
thread_join(thread, NULL);
```

## References

 - [xTaskCreate - freertos.org](https://www.freertos.org/Documentation/02-Kernel/04-API-references/01-Task-creation/01-xTaskCreate)
 - [Threads And Teams - haiku-os.org](https://www.haiku-os.org/legacy-docs/bebook/TheKernelKit_ThreadsAndTeams_Overview.html)
 - [Design of OS/2 by Michael S. Kogan, Harvey M. Deitel - os2site.com](https://www.os2site.com/sw/info/design_of_os2.pdf)
 - [Task Management - os2.kr](https://www.os2.kr/komh/os2books/gg243774/480_L2_TaskManagement.html)
 - [Borland® C++ for OS/2® Version 1.5 - bitsavers.informatik.uni-stuttgart.de](http://bitsavers.informatik.uni-stuttgart.de/pdf/borland/borland_C++/Borland_C++_for_OS2_Version_1.5_Library_Reference_1994.pdf)
 - [The Art of OS/2 Warp Programming (Katheleen Panov, Larry Salomon Jr., and Arthur Panov) - dn721502.ca.archive.org (I love you archive.org <3)](https://dn721502.ca.archive.org/0/items/TheArtOfOS2WarpProgramming/The%20Art%20of%20OS2%20Warp%20Programming.pdf)
 - [THREAD(3) - 9fans.github.io](https://9fans.github.io/plan9port/man/man3/thread.html)
 - [Plan9 (thread.h) - 9p.io](https://9p.io/magic/man2html/2/thread)
 - [Tasks - software-dl.ti.com](https://software-dl.ti.com/simplelink/esd/simplelink_cc26x2_sdk/2.10.00.44/exports/docs/thread/html/tirtos/tasks.html)
 - [Threads - opengroup.org](https://pubs.opengroup.org/onlinepubs/7908799/xsh/threads.html)
 - [POSIX thread (pthread) libraries - cs.cmu.edu](https://www.cs.cmu.edu/afs/cs/academic/class/15492-f07/www/pthreads.html)
 - [POSIX Threads and Synchronization (CSE 220: Systems Programming) - cse.buffalo.edu](https://cse.buffalo.edu/courses/cse220/2025-Spring/33-pthreads.pdf)
 - [Extrait du manuel VxWorks (Excerpt from the VxWorks manual) - beru.univ-brest.fr (I still can't believe I found this doc)](https://beru.univ-brest.fr/~singhoff/ENS/UE_temps_reel/TP-VXWORKS/CORRECTION/Man-VxWorks-1.pdf)
 - [taskLib - ee.torontomu.ca](https://www.ee.torontomu.ca/~courses/ee8205/Data-Sheets/Tornado-VxWorks/vxworks/ref/taskLib.html)
 - [CreateThread function (processthreadsapi.h) - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread)
 - [Threads - zephyrproject.org](https://docs.zephyrproject.org/latest/kernel/services/threads/index.html)
 - [**THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS.pdf** - CMT](https://docs.google.com/viewer?url=https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/ARTICLES/EN/THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS.pdf)
