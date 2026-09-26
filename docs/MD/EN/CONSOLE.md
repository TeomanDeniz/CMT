# CONSOLE

<p align="center">
 <img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CONSOLE.gif"/>
</p>

> ## ⚠️ Important
> ### File locations: [**[📜 CMT/CONSOLE.H](https://github.com/TeomanDeniz/CMT/blob/main/CONSOLE.H)**] and [**[📜 CMT/CONSOLE.HPP](https://github.com/TeomanDeniz/CMT/blob/main/CONSOLE.HPP)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CONSOLE
> // or/and
> #define INCL_CMT_CONSOLE_OOP
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CONSOLE.H"
> // or/and
> #include "CMT/CONSOLE.HPP"
> ```

> ## 📖 Other versions of this document
> This page is the **module overview**. It explains what `CONSOLE` is, which of the three interfaces you get, and how the same code looks in each one. The member-by-member reference lives in the interface pages.
>
> * **CONSOLE.md** - module overview *(you are here)*
> * [**CONSOLE_C.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/C.md) - plain C functions, no object
> * [**CONSOLE_OOP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/OOP.md) - C with the CMT object system
> * [**CONSOLE_CPP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/CPP.md) - the C++ class

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

`CONSOLE.HPP` provides everything a text console can do: writing text, drawing shapes into the screen buffer, colouring cells, moving and resizing the window, reading the buffer back, and receiving keyboard and mouse input. The goal is to hide the platform's console API behind one interface, so the same drawing code runs wherever CMT runs.

One header ships **three interfaces over one implementation**. You do not pick a different file, and you do not link anything different. The interface you get is decided by how you compile, and all three drive exactly the same engine underneath, so nothing is faster or more capable than the others.

----

## Which interface do I get?

| You are compiling             | You get                 | Reference page                                                                               |
| ----------------------------- | ----------------------- | -------------------------------------------------------------------------------------------- |
| C++                           | The `CMT_CONSOLE` class | [**CONSOLE_CPP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/CPP.md) |
| C *(default)*                 | The CMT object          | [**CONSOLE_OOP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/OOP.md) |
| C, with the object system off | Plain functions         | [**CONSOLE_C.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/C.md)     |

### Choosing

**Compiling as C++?** The choice is made for you. You get the class, and the two C interfaces are not compiled at all.

**Compiling as C?** You get the object interface by default, because it is the one this module was designed around: members are grouped (`put.colored.line`, `input.wait.key`, `cursor.move_xy`), and every member returns the object so calls chain.

**Take the plain C interface when** you want none of the object machinery: no generated trampolines, no executable allocation at startup, no chaining. Every member becomes a flat function taking the console as its first argument. This is the interface to use on a target where the object system cannot run, when you are auditing exactly what the module does, or when you simply prefer plain C.

> ### ⚠️ One interface per translation unit
> The three interfaces are not meant to be mixed inside a single `.c` file. Pick one per translation unit. Different files in the same program may use different ones, because they all resolve to the same implementation.

----

## The same program in each style

Two programs, written three times. Nothing here is a feature comparison; every version does exactly the same thing. The point is the shape of the code, so you can see which one you want to read for the next six months.

### Example 1 - say something and wait

**C++**

```cpp
#include "CMT/CONSOLE.HPP"

int	main(void)
{
	console.title("Demo")
		->log("Hello\n");

	console.input.wait.key();
	console.free();

	return (0);
}
```

**C OOP**

```c
#include "CMT/CONSOLE.HPP"

int	main(void)
{
	console.title("Demo")
		->log("Hello\n");

	console.input.wait.key();
	console.free();

	return (0);
}
```

**Plain C**

```c
#include "CMT/CONSOLE.HPP"

int	main(void)
{
	console_title(&console, "Demo");
	console_log(&console, "Hello\n");

	console_input_wait_key(&console);
	console_free(&console);

	return (0);
}
```

The C++ and C OOP versions are identical here, which is the intended outcome: the object interface was shaped so that moving a file between C and C++ does not rewrite it. The plain C version says the same thing with the grouping flattened into the function name and the console passed explicitly.

----

### Example 2 - draw a framed box and label it

**C++**

```cpp
console.cursor.color(0X1E)
	->put.frame('#', 5, 3, 40, 12)
	->put.colored.string("MENU", 0X4F, 7, 3)
	->put.line('-', 6, 5, 39, 5);
```

**C OOP**

```c
console.cursor.color(0X1E)
	->put.frame('#', 5, 3, 40, 12)
	->put.colored.string("MENU", 0X4F, 7, 3)
	->put.line('-', 6, 5, 39, 5);
```

**Plain C**

```c
console_cursor_color(&console, 0X1E);
console_put_frame(&console, '#', 5, 3, 40, 12);
console_put_colored_string(&console, "MENU", 0X4F, 7, 3);
console_put_line(&console, '-', 6, 5, 39, 5);
```

This is where the interfaces genuinely diverge. Chaining collapses four statements into one expression and states the pen colour once, at the front, where it reads as a mode. The plain C version repeats `&console` on every line and cannot chain, because the functions return a status rather than the console.

Neither is wrong. The chained form is shorter and groups a drawing operation into one unit; the flat form is easier to step through in a debugger and has nothing between your call and the implementation.

----

## What every interface shares

These are properties of the module, not of a particular interface, so they are documented once here rather than three times.

### Colour

Every colour argument is one byte: the low nibble is the foreground, the high nibble is the background.

```c
0X0F /* white on black */
0X1E /* yellow on blue */
0X4F /* white on red */
```

| Value | Colour     | Value | Colour         |
| ----- | ---------- | ----- | -------------- |
| `0X0` | Black      | `0X8` | Grey           |
| `0X1` | Blue       | `0X9` | Bright blue    |
| `0X2` | Green      | `0XA` | Bright green   |
| `0X3` | Cyan       | `0XB` | Bright cyan    |
| `0X4` | Red        | `0XC` | Bright red     |
| `0X5` | Magenta    | `0XD` | Bright magenta |
| `0X6` | Brown      | `0XE` | Yellow         |
| `0X7` | Light grey | `0XF` | White          |

### Two ways to get a console

**The namespace console** always exists and attaches to the console that started your program. It never creates one. If the program was launched without a console, every member quietly does nothing, the way an `assert` compiled out does nothing.

**A created console** opens one if the process does not have any yet. This is how a `-mwindows` program gives itself a window on demand. How you create it is the one thing that differs per interface, so each reference page shows its own spelling.

### Drawing never moves the cursor

Everything in the `put` group writes directly into the screen buffer, so drawing never disturbs the log stream. Coordinates are in character cells and are clipped, which makes drawing off screen safe rather than fatal.

### Nothing fails silently

Members that cannot do their job print a warning saying which entry point or which condition stopped them, rather than returning quietly. If a call appears to do nothing and says nothing, that is a bug worth reporting.

> ### ⚠️ One console per process
> This is a Windows OS rule, not a CMT one. `AllocConsole` fails while a console is already attached and there is no call that grants a second. So two created consoles cannot each have a window, and a created console inside a program started from `cmd` shares that window instead of opening its own. Freeing only closes a console that was opened by CMT itself, so an inherited shell window is never taken down.

----

## Where to go next

| I want to                                    | Page                                                                                         |
| -------------------------------------------- | -------------------------------------------------------------------------------------------- |
| Read the full member list for the C++ class  | [**CONSOLE_CPP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/CPP.md) |
| Read the full member list for the CMT object | [**CONSOLE_OOP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/OOP.md) |
| Read the full function list for plain C      | [**CONSOLE_C.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/C.md)     |

## References

- [Console Functions - microsoft.com](https://learn.microsoft.com/en-us/windows/console/console-functions)
- [SetConsoleScreenBufferSize - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsolescreenbuffersize)
- [SetConsoleWindowInfo - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsolewindowinfo)
- [SetConsoleTitle - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsoletitle)
- [AttachConsole - microsoft.com](https://learn.microsoft.com/en-us/windows/console/attachconsole)
- [AllocConsole - microsoft.com](https://learn.microsoft.com/en-us/windows/console/allocconsole)
- [SetWindowPos - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowpos)
- [Console Virtual Terminal Sequences - microsoft.com](https://learn.microsoft.com/en-us/windows/console/console-virtual-terminal-sequences)
- [INPUT_RECORD structure - microsoft.com](https://learn.microsoft.com/en-us/windows/console/input-record-str)
- [Virtual-Key Codes - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes)
- [XTWINOPS window manipulation - invisible-island.net](https://invisible-island.net/xterm/ctlseqs/ctlseqs.html)
- [Bresenham's line algorithm - Jack E. Bresenham, IBM Systems Journal (1965)](https://ieeexplore.ieee.org/document/5388473)
- [A Rasterizing Algorithm for Drawing Curves - Alois Zingl](http://members.chello.at/easyfilter/Bresenham.pdf)
