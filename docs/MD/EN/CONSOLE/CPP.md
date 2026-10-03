# CONSOLE (C++)

<p align="center">
 <img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CONSOLE.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/CONSOLE.HPP](https://github.com/TeomanDeniz/CMT/blob/main/CONSOLE.HPP)**]
> ### How to include:
> Recommended (via master header):
> ```cpp
> #define INCL_CMT_CONSOLE_OOP
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```cpp
> #include "CMT/CONSOLE.HPP"
> ```
> ### Requires C++11 or newer.

> ## 📖 Other versions of this document
> This page documents the **C++** interface, the one you get automatically when compiling as C++.
> 
> [**Go to the root CONSOLE documentation**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE.md)
> 
> * [**CONSOLE_C.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/C.md) - plain C functions, no object
> * [**CONSOLE_OOP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/OOP.md) - C with the CMT object system
> * **CONSOLE_CPP.md** - the C++ class *(you are here)*

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

`CONSOLE.HPP` provides a single class for everything a text console can do: writing text, drawing shapes into the screen buffer, colouring cells, moving and resizing the window, reading the buffer back, and receiving keyboard and mouse input. The goal is to hide the platform's console API behind one interface, so the same drawing code runs wherever CMT runs.

When the header is compiled as C++, the two C interfaces are not compiled at all; you get the class. It was shaped to read exactly like the C object interface, so a file can move between C and C++ without being rewritten.

Every member returns a **pointer** to the console, so calls chain with `->`:

```cpp
console.put.string("@====@", 10, 10)
	->put.string("@----@", 10, 11)
	->log("This is a log\n");
```

The first call uses `.` because `console` is an object; every call after it uses `->` because it is working on the pointer the previous call returned.

### The classes

The class exists twice, in upper and in lower case. They are the same bytes seen through two sets of names, so pick the one that matches your code base:

| Upper case     | Lower case     |
| -------------- | -------------- |
| `cmt::CONSOLE` | `cmt::console` |
| `CONSOLE`      | `console`      |
| `CONSOLE.LOG`  | `console.log`  |

### The object

There are two ways to get a console.

**The global object.** `console` (and its upper case twin `CONSOLE`) always exists and attaches to the console that started your program. It never creates one. It is constructed by CMT at startup and destroyed by CMT at exit, so you never construct, copy or delete it. If the program was launched without a console (a `-mwindows` build double-clicked from Explorer), every member quietly does nothing, the way an `assert` compiled out does nothing.

```cpp
console.log("Hello\n");
```

`console` and `CONSOLE` are references to the very same object. Anything you do through one is visible through the other.

**A local object.** Declare one like any other C++ object. It is set up by its constructor and released by its destructor when it goes out of scope:

```cpp
{
	cmt::console	term;

	term.log("Worked\n")
		->input.wait.key();
} /* term's buffers are released here */
```

----

### Colour

Every colour argument is one byte: the low nibble is the foreground, the high nibble is the background.

```cpp
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

----

### Drawing

Everything in `put` writes directly into the screen buffer. None of it moves the cursor, so drawing never disturbs the log stream. Coordinates are in character cells and are clipped, so drawing off screen is safe.

Each shape has a plain form and a `colored` form. The plain form uses the current pen (`cursor.color`); the coloured form takes the attribute as its **second** argument, right after the character or string.

```cpp
console.put.line         (character,        x_start, y_start, x_end, y_end);
console.put.colored.line (character, color, x_start, y_start, x_end, y_end);
```

----

> ### ⚠️ One console per process
> This is a Windows OS rule, not a CMT one. `AllocConsole` fails while a console is already attached and there is no call that grants a second. So two console objects cannot each have a window: a local `cmt::console` draws into the same window as the global `console`. The destructor only closes a console that CMT opened itself, so an inherited shell window is never taken down.

## Contents

| Contents List                   |
| ------------------------------- |
| `class cmt::CONSOLE;`           |
| `class cmt::console;`           |
| `extern cmt::CONSOLE &CONSOLE;` |
| `extern cmt::console &console;` |
| `#define WARNING_HERE(STRING)`  |
| `#define warning_here(STRING)`  |
| `#define ERROR_HERE(STRING)`    |
| `#define error_here(STRING)`    |
| `#define LOG_CURRENT`           |

| `class cmt::CONSOLE`, `class cmt::console`                                                                                         |
| ---------------------------------------------------------------------------------------------------------------------------------- |
| `CONSOLE(void);`                                                                                                                   |
| `console(void);`                                                                                                                   |
| `~CONSOLE(void);`                                                                                                                  |
| `~console(void);`                                                                                                                  |
| `CONSOLE *X(int);`                                                                                                                 |
| `console *x(int);`                                                                                                                 |
| `CONSOLE *Y(int);`                                                                                                                 |
| `console *y(int);`                                                                                                                 |
| `CONSOLE *XY(int, int);`                                                                                                           |
| `console *xy(int, int);`                                                                                                           |
| `CONSOLE *WIDTH(unsigned int);`                                                                                                    |
| `console *width(unsigned int);`                                                                                                    |
| `CONSOLE *HEIGHT(unsigned int);`                                                                                                   |
| `console *height(unsigned int);`                                                                                                   |
| `CONSOLE *TITLE(const char *);`                                                                                                    |
| `console *title(const char *);`                                                                                                    |
| `CONSOLE *COLOR(unsigned int);`                                                                                                    |
| `console *color(unsigned int);`                                                                                                    |
| `CONSOLE *DEFAULT_COLOR(void);`                                                                                                    |
| `console *default_color(void);`                                                                                                    |
| `CONSOLE *CLEAR(void);`                                                                                                            |
| `console *clear(void);`                                                                                                            |
| `CONSOLE *LOG(const char *);`                                                                                                      |
| `console *log(const char *);`                                                                                                      |
| `CONSOLE *WARNING(const char *);`                                                                                                  |
| `console *warning(const char *);`                                                                                                  |
| `CONSOLE *WARNING_AT(const char *, const char *, unsigned int);`                                                                   |
| `console *warning_at(const char *, const char *, unsigned int);`                                                                   |
| `CONSOLE *ERROR(const char *);`                                                                                                    |
| `console *error(const char *);`                                                                                                    |
| `CONSOLE *ERROR_AT(const char *, const char *, unsigned int);`                                                                     |
| `console *error_at(const char *, const char *, unsigned int);`                                                                     |
| `CONSOLE *PRINT(const char *, ...);`                                                                                               |
| `console *print(const char *, ...);`                                                                                               |
| `CONSOLE *PUSH(void);`                                                                                                             |
| `console *push(void);`                                                                                                             |
| `CONSOLE *POP(void);`                                                                                                              |
| `console *pop(void);`                                                                                                              |
| `CONSOLE *PUT.STRING(const char *, unsigned int, unsigned int);`                                                                   |
| `console *put.string(const char *, unsigned int, unsigned int);`                                                                   |
| `CONSOLE *PUT.LINE(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                 |
| `console *put.line(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                 |
| `CONSOLE *PUT.CURVE(char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`                                  |
| `console *put.curve(char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`                                  |
| `CONSOLE *PUT.FRAME(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                |
| `console *put.frame(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                |
| `CONSOLE *PUT.FRAME_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `console *put.frame_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `CONSOLE *PUT.RECTANGLE(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                            |
| `console *put.rectangle(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                            |
| `CONSOLE *PUT.RECTANGLE_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                       |
| `console *put.rectangle_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                       |
| `CONSOLE *PUT.CIRCLE(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                               |
| `console *put.circle(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                               |
| `CONSOLE *PUT.ELLIPSE(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                              |
| `console *put.ellipse(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                              |
| `CONSOLE *PUT.COLORED.STRING(const char *, unsigned int, unsigned int, unsigned int);`                                             |
| `console *put.colored.string(const char *, unsigned int, unsigned int, unsigned int);`                                             |
| `CONSOLE *PUT.COLORED.LINE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `console *put.colored.line(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `CONSOLE *PUT.COLORED.CURVE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`            |
| `console *put.colored.curve(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`            |
| `CONSOLE *PUT.COLORED.FRAME(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                          |
| `console *put.colored.frame(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                          |
| `CONSOLE *PUT.COLORED.FRAME_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`     |
| `console *put.colored.frame_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`     |
| `CONSOLE *PUT.COLORED.RECTANGLE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                      |
| `console *put.colored.rectangle(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                      |
| `CONSOLE *PUT.COLORED.RECTANGLE_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);` |
| `console *put.colored.rectangle_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);` |
| `CONSOLE *PUT.COLORED.CIRCLE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                         |
| `console *put.colored.circle(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                         |
| `CONSOLE *PUT.COLORED.ELLIPSE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                        |
| `console *put.colored.ellipse(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                        |
| `CONSOLE *CURSOR.COLOR(unsigned int);`                                                                                             |
| `console *cursor.color(unsigned int);`                                                                                             |
| `CONSOLE *CURSOR.DEFAULT_COLOR(void);`                                                                                             |
| `console *cursor.default_color(void);`                                                                                             |
| `CONSOLE *CURSOR.X(unsigned int);`                                                                                                 |
| `console *cursor.x(unsigned int);`                                                                                                 |
| `CONSOLE *CURSOR.Y(unsigned int);`                                                                                                 |
| `console *cursor.y(unsigned int);`                                                                                                 |
| `CONSOLE *CURSOR.XY(unsigned int, unsigned int);`                                                                                  |
| `console *cursor.xy(unsigned int, unsigned int);`                                                                                  |
| `CONSOLE *CURSOR.MOVE_X(int);`                                                                                                     |
| `console *cursor.move_x(int);`                                                                                                     |
| `CONSOLE *CURSOR.MOVE_Y(int);`                                                                                                     |
| `console *cursor.move_y(int);`                                                                                                     |
| `CONSOLE *CURSOR.MOVE_XY(int, int);`                                                                                               |
| `console *cursor.move_xy(int, int);`                                                                                               |
| `CONSOLE *CURSOR.SHOW(BOOLEAN);`                                                                                                   |
| `console *cursor.show(boolean);`                                                                                                   |
| `CONSOLE *CURSOR.SIZE(unsigned long);`                                                                                             |
| `console *cursor.size(unsigned long);`                                                                                             |
| `PTR EXPORT(void);`                                                                                                                |
| `ptr export_(void);`                                                                                                               |
| `CONSOLE *IMPORT(PTR);`                                                                                                            |
| `console *import(ptr);`                                                                                                            |
| `CONSOLE *INPUT.WAIT.ANY(void);`                                                                                                   |
| `console *input.wait.any(void);`                                                                                                   |
| `CONSOLE *INPUT.WAIT.KEY(void);`                                                                                                   |
| `console *input.wait.key(void);`                                                                                                   |
| `CONSOLE *INPUT.WAIT.MOUSE(void);`                                                                                                 |
| `console *input.wait.mouse(void);`                                                                                                 |
| `CONSOLE *INPUT.WAIT.MOUSE_ACTION(void);`                                                                                          |
| `console *input.wait.mouse_action(void);`                                                                                          |
| `CONSOLE *INPUT.WAIT.MOUSE_MOVE(void);`                                                                                            |
| `console *input.wait.mouse_move(void);`                                                                                            |
| `const unsigned int INPUT.GET.KEY;`, `MOUSE`, `MOUSE_X`, `MOUSE_Y`                                                                 |
| `const unsigned int input.get.key;`, `mouse`, `mouse_x`, `mouse_y`                                                                 |
| `void (*EVENT.ON_RESIZE)(unsigned int, unsigned int);`                                                                             |
| `void (*event.on_resize)(unsigned int, unsigned int);`                                                                             |
| `void (*EVENT.ON_MOVE)(int, int);`                                                                                                 |
| `void (*event.on_move)(int, int);`                                                                                                 |
| `void (*EVENT.ON_CLOSE)(void);`                                                                                                    |
| `void (*event.on_close)(void);`                                                                                                    |
| `void (*EVENT.ON_FOCUS)(void);`                                                                                                    |
| `void (*event.on_focus)(void);`                                                                                                    |
| `void (*EVENT.ON_BLUR)(void);`                                                                                                     |
| `void (*event.on_blur)(void);`                                                                                                     |
| `void (*EVENT.ON_KEY)(unsigned int);`                                                                                              |
| `void (*event.on_key)(unsigned int);`                                                                                              |
| `void (*EVENT.ON_MOUSE)(unsigned int, unsigned int, unsigned int);`                                                                |
| `void (*event.on_mouse)(unsigned int, unsigned int, unsigned int);`                                                                |
| `char *GET.LINE(unsigned int, unsigned int, unsigned int, unsigned int);`                                                          |
| `char *get.line(unsigned int, unsigned int, unsigned int, unsigned int);`                                                          |
| `char **GET.AREA(unsigned int, unsigned int, unsigned int, unsigned int);`                                                         |
| `char **get.area(unsigned int, unsigned int, unsigned int, unsigned int);`                                                         |
| `const BOOLEAN GET.ACTIVE;`, `GET.TERMINAL;`                                                                                       |
| `const boolean get.active;`, `get.terminal;`                                                                                       |
| `const unsigned int GET.ROWS;`, `COLUMNS`, `PIXEL_WIDTH`, `PIXEL_HEIGHT`, `COLOR`, `DEFAULT_COLOR`, `WIDTH`, `HEIGHT`              |
| `const unsigned int get.rows;`, `columns`, `pixel_width`, `pixel_height`, `color`, `default_color`, `width`, `height`              |
| `const int GET.X;`, `GET.Y;`                                                                                                       |
| `const int get.x;`, `get.y;`                                                                                                       |
| `const unsigned long GET.CURSOR.SIZE;`                                                                                             |
| `const unsigned long get.cursor.size;`                                                                                             |
| `const int GET.CURSOR.X;`, `GET.CURSOR.Y;`                                                                                         |
| `const int get.cursor.x;`, `get.cursor.y;`                                                                                         |
| `const unsigned int GET.CURSOR.COLOR;`, `GET.CURSOR.DEFAULT_COLOR;`                                                                |
| `const unsigned int get.cursor.color;`, `get.cursor.default_color;`                                                                |
| `const BOOLEAN GET.CURSOR.VISIBLE;`                                                                                                |
| `const boolean get.cursor.visible;`                                                                                                |
| `BOOLEAN HIGHLIGHTER;`                                                                                                             |
| `boolean highlighter;`                                                                                                             |

### Constructor, destructor

```cpp
cmt::CONSOLE::CONSOLE(void);
cmt::console::console(void);
cmt::CONSOLE::~CONSOLE(void);
cmt::console::~console(void);
```

The constructor zeroes every member, finds the console's input and output handles, reads the current colours, cursor position, cursor shape and window position, and switches the input into the mode `input.wait` needs (mouse and window events on, quick edit off). `highlighter` starts as `TRUE` and every `event` callback starts as null.

The destructor puts the input mode back the way the constructor found it and releases the buffers the object allocated for `push` and for `get.line` / `get.area`.

You only call these through ordinary C++ object lifetime - a local variable, a member of your own class, `new` and `delete`. The global `console` is constructed and destroyed by CMT; never call its destructor yourself.

```cpp
cmt::console	*term = new cmt::console;

term->log("heap console\n");
delete term;
```

The copy constructor and copy assignment are deleted.

----

### `X`, `Y`, `XY`

```cpp
CONSOLE	*X(int);
console	*x(int);
CONSOLE	*Y(int);
console	*y(int);
CONSOLE	*XY(int, int);
console	*xy(int, int);
```

Moves the console window, in **pixels**, relative to the top left of the screen.

The coordinates are signed because a window may legitimately sit at a negative position on a multiple monitor desktop.

The size is never touched, so moving a window cannot resize it.

Example:

```cpp
console.xy(100, 100);
console.x(400); // moves horizontally, keeps the current y
```

> ### ⚠️ Windows Terminal
> Terminal manages its own window and animates moves, so a move may land slightly off or look "snapped". The call still works. If a move genuinely fails you get a warning on the console rather than silence.

----

### `WIDTH`, `HEIGHT`

```cpp
CONSOLE	*WIDTH(unsigned int);
console	*width(unsigned int);
CONSOLE	*HEIGHT(unsigned int);
console	*height(unsigned int);
```

Resizes the console in **character cells**, not pixels. The request is clamped to what the screen can actually carry, so asking for more than fits gives you the largest that does.

Read the result back from `get.width` and `get.height`; they report what the console really became, which may be smaller than what you asked for.

Example:

```cpp
console.width(100)->height(30);
console.print("actually %u x %u\n", console.get.width, console.get.height);
```

----

### `TITLE`

```cpp
CONSOLE	*TITLE(const char *);
console	*title(const char *);
```

Sets the console window title. Works under both the classic console host and Windows Terminal.

Example:

```cpp
console.title("My Program");
```

----

### `COLOR`, `DEFAULT_COLOR`

```cpp
CONSOLE	*COLOR(unsigned int);
console	*color(unsigned int);
CONSOLE	*DEFAULT_COLOR(void);
console	*default_color(void);
```

`color` repaints **every cell** on the screen with the given attribute.

`default_color` puts the screen back to the colour it had when the object was constructed.

To change the colour of *new* output without touching what is already on screen, use `cursor.color` instead.

----

### `CLEAR`

```cpp
CONSOLE	*CLEAR(void);
console	*clear(void);
```

Blanks the screen buffer and puts the cursor back at the top left.

----

### `LOG`

```cpp
CONSOLE	*LOG(const char *);
console	*log(const char *);
```

Writes a string at the cursor and advances it. This is the one call every other text member is built on, so anything that affects `log` affects all of them.

Every text parameter in the C++ interface is `const char *`, so string literals and `std::string::c_str()` can be passed directly.

```cpp
std::string	name = "world";

console.log("hello ")->log(name.c_str())->log("\n");
```

----

### `WARNING`, `ERROR`, `WARNING_AT`, `ERROR_AT`

```cpp
CONSOLE	*WARNING(const char *);
console	*warning(const char *);
CONSOLE	*ERROR(const char *);
console	*error(const char *);
CONSOLE	*WARNING_AT(const char *, const char *, unsigned int);
console	*warning_at(const char *, const char *, unsigned int);
CONSOLE	*ERROR_AT(const char *, const char *, unsigned int);
console	*error_at(const char *, const char *, unsigned int);
```

Same as `log` with a coloured prefix. The `_at` forms take a file name and a line number and print them with the message.

Two macros fill those in for you:

```cpp
#define WARNING_HERE(STRING) warning_at((STRING), LOG_CURRENT)
#define ERROR_HERE(STRING) error_at((STRING), LOG_CURRENT)
```

They expand to the lower case member, so use them after `console.` or `->`.

Example:

```cpp
console.warning("something looks odd\n");
console.ERROR_HERE("could not open the file\n");
```

> ### ⚠️ `ERROR` and `<windows.h>`
> `<windows.h>` defines `ERROR` as a macro. If it is included **before** `CONSOLE.HPP`, the class itself no longer compiles. Include `CONSOLE.HPP` first, or define `NOGDI` before `<windows.h>`, or stay with the lower case `console.error`. CMT itself never includes `<windows.h>`.

----

### `PRINT`

```cpp
CONSOLE	*PRINT(const char *, ...);
console	*print(const char *, ...);
```

A formatter written from scratch: no C runtime, no `libm`. Output goes through `log`, so `print` honours `push` and `pop` like everything else.

| Conversion | Meaning                                    |
| ---------- | ------------------------------------------ |
| `%d` `%i`  | signed decimal                             |
| `%u`       | unsigned decimal                           |
| `%o`       | octal                                      |
| `%x` `%X`  | hexadecimal                                |
| `%b`       | binary *(not standard C, but useful here)* |
| `%c`       | character                                  |
| `%s`       | string                                     |
| `%p`       | pointer                                    |
| `%f` `%F`  | floating point                             |
| `%%`       | a literal `%`                              |

Flags `-`, `0`, `+`, space and `#`; width and precision including `*`; length modifiers `l`, `ll`, `h`, `hh`, `z`, `j`, `t`.

Example:

```cpp
console.print("[%5d] [%-5d] [%05d]\n", 42, 42, 42);
console.print("[%#x] [%#b] [%.3s]\n", 255, 5, "abcdefg");
```

> ### ⚠️ It is a C variadic
> Like `printf`, `print` cannot check its arguments. Pass `%s` a `const char *` (use `.c_str()` for a `std::string`), and never pass a class object through `...`.

> ### ⚠️ One deviation
> `%.0f` of `2.5` prints `3`. Rounding is half away from zero, not half to even.
> 
> Banker's rounding without `libm` costs more than it is worth for a console logger.

----

### `PUSH`, `POP`

```cpp
CONSOLE	*PUSH(void);
console	*push(void);
CONSOLE	*POP(void);
console	*pop(void);
```

Collects log output in memory instead of drawing it, and releases it all at once on `pop`. Useful when you want a block of text to appear without flicker.

`push` nests; only the outermost `pop` flushes.

Example:

```cpp
console.push()
	->log("these three lines\n")
	->log("appear together\n")
	->log("when pop runs\n")
	->pop();
```

> ### ⚠️ Only sequential output is buffered
> Positional members (`put.*`) go straight to the screen even between `push` and `pop`. Replaying a positioned write later would land it in the wrong place, so buffering it would be worse than not buffering it.

----

### `PUT.STRING`

```cpp
CONSOLE	*PUT.STRING(const char *, unsigned int, unsigned int);
console	*put.string(const char *, unsigned int, unsigned int);
CONSOLE	*PUT.COLORED.STRING(const char *, unsigned int, unsigned int, unsigned int);
console	*put.colored.string(const char *, unsigned int, unsigned int, unsigned int);
```

Writes a string at a position. Arguments are string, x, y - and for the coloured form, string, colour, x, y.

----

### `PUT.LINE`

```cpp
CONSOLE	*PUT.LINE(char, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.line(char, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.COLORED.LINE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.colored.line(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

A straight line between two cells, drawn with Bresenham's algorithm.

Example:

```cpp
console.put.line('#', 10, 10, 40, 20);
```

----

### `PUT.CURVE`

```cpp
CONSOLE	*PUT.CURVE(char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
console	*put.curve(char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
CONSOLE	*PUT.COLORED.CURVE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
console	*put.colored.curve(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
```

A cubic Bézier between two points. The two floats are the **bulge in cells** at each end, measured perpendicular to the straight line between the points.

| Floats        | Shape                      |
| ------------- | -------------------------- |
| `0.0F, 0.0F`  | a straight line            |
| `4.0F, 4.0F`  | an arc bulging to one side |
| `4.0F, -4.0F` | an S curve                 |

Example:

```cpp
console.put.curve('.', 2, 24, 50, 24, 4.0F, -4.0F);
```

----

### `PUT.FRAME`, `PUT.RECTANGLE`

```cpp
CONSOLE	*PUT.FRAME(char, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.frame(char, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.RECTANGLE(char, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.rectangle(char, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.COLORED.FRAME(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.colored.frame(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.COLORED.RECTANGLE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.colored.rectangle(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

`frame` draws the outline of a box. `rectangle` fills it. The four numbers are the two opposite corners: x start, y start, x end, y end.

Example:

```cpp
console.cursor.color(0X1E)
	->put.frame('#', 5, 3, 40, 12)
	->put.colored.string("MENU", 0X4F, 7, 3)
	->put.line('-', 6, 5, 39, 5);
```

----

### `PUT.FRAME_RADIUS`, `PUT.RECTANGLE_RADIUS`

```cpp
CONSOLE	*PUT.FRAME_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.frame_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.RECTANGLE_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.rectangle_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.COLORED.FRAME_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.colored.frame_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.COLORED.RECTANGLE_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.colored.rectangle_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

The same two shapes with rounded corners. The last argument is the corner radius in cells. A radius of `0` gives the square version, and a radius larger than the box is clamped.

----

### `PUT.CIRCLE`, `PUT.ELLIPSE`

```cpp
CONSOLE	*PUT.CIRCLE(char, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.circle(char, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.ELLIPSE(char, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.ellipse(char, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.COLORED.CIRCLE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.colored.circle(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
CONSOLE	*PUT.COLORED.ELLIPSE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
console	*put.colored.ellipse(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

Both are bounded by the rectangle you give them (two opposite corners, not a centre and a radius), so both are ellipses in the general case. `circle` draws the **outline**, `ellipse` draws it **filled**.

----

### `CURSOR.COLOR`, `CURSOR.DEFAULT_COLOR`

```cpp
CONSOLE	*CURSOR.COLOR(unsigned int);
console	*cursor.color(unsigned int);
CONSOLE	*CURSOR.DEFAULT_COLOR(void);
console	*cursor.default_color(void);
```

Sets the attribute used for output from here on, without touching what is already on the screen. This is also the pen the plain `put.*` shapes draw with.

----

### `CURSOR.X`, `CURSOR.Y`, `CURSOR.XY`

```cpp
CONSOLE	*CURSOR.X(unsigned int);
console	*cursor.x(unsigned int);
CONSOLE	*CURSOR.Y(unsigned int);
console	*cursor.y(unsigned int);
CONSOLE	*CURSOR.XY(unsigned int, unsigned int);
console	*cursor.xy(unsigned int, unsigned int);
```

Moves the cursor to an absolute cell.

----

### `CURSOR.MOVE_X`, `CURSOR.MOVE_Y`, `CURSOR.MOVE_XY`

```cpp
CONSOLE	*CURSOR.MOVE_X(int);
console	*cursor.move_x(int);
CONSOLE	*CURSOR.MOVE_Y(int);
console	*cursor.move_y(int);
CONSOLE	*CURSOR.MOVE_XY(int, int);
console	*cursor.move_xy(int, int);
```

Moves the cursor **relative** to where it is. The arguments are signed and the result is clamped at the screen edges.

Example:

```cpp
console.cursor.xy(4, 4)->cursor.move_xy(2, -1); // now at 6, 3
```

----

### `CURSOR.SHOW`, `CURSOR.SIZE`

```cpp
CONSOLE	*CURSOR.SHOW(BOOLEAN);
console	*cursor.show(boolean);
CONSOLE	*CURSOR.SIZE(unsigned long);
console	*cursor.size(unsigned long);
```

`show` turns the caret on or off. `size` is the fill percentage of the cell, from `1` to `100`.

----

### `EXPORT`, `IMPORT`

```cpp
PTR		EXPORT(void);
ptr		export_(void);
CONSOLE	*IMPORT(PTR);
console	*import(ptr);
```

`export` takes a snapshot of the whole screen - characters, attributes, cursor position and colours - and returns it as one block. `import` puts it back. The snapshot is returned as a plain pointer, so `EXPORT` ends a chain rather than continuing one. It returns `nullptr` if the block could not be allocated.

> ### 💡 Why `export_`
> `export` is a reserved word in C++, so it cannot be a member name. The lower case member is spelled `export_`; the upper case `EXPORT` is unaffected.

The block is **yours**. Release it with `FREE` from `OS_API/MEMORY.H`:

```cpp
ptr	snapshot = console.export_();

console.clear();
// ...
console.import(snapshot);
FREE(snapshot);
```

`import` checks a magic value and a version, and replays the snapshot row by row when the console has been resized since, so restoring into a different sized window does the sane thing instead of shearing.

----

### `GET.LINE`, `GET.AREA`

```cpp
char	*GET.LINE(unsigned int, unsigned int, unsigned int, unsigned int);
char	*get.line(unsigned int, unsigned int, unsigned int, unsigned int);
char	**GET.AREA(unsigned int, unsigned int, unsigned int, unsigned int);
char	**get.area(unsigned int, unsigned int, unsigned int, unsigned int);
```

`get.line` reads the wrapping span between two buffer positions and returns a NUL-terminated string. `get.area` reads a rectangle and returns a null-terminated array of rows. Both return `nullptr` when the request lies completely outside the buffer.

Example:

```cpp
char	*text = console.get.line(4, 6, 12, 6);

console.print("[%s]\n", text);
```

> ### ⚠️ They share one buffer
> Both return memory owned by the object, valid **only until the next call to either one**. Use the result before you call again, or copy it out (into a `std::string`, for example). This is wrong:
> ```cpp
> char	*line = console.get.line(4, 3, 12, 3);
> char	**area = console.get.area(4, 2, 12, 5); // overwrites line
> 
> console.print("%s\n", line); // garbage
> ```
> You do not free either of them; the destructor does it.

----

### `INPUT.WAIT.*`

```cpp
CONSOLE	*INPUT.WAIT.ANY(void);
console	*input.wait.any(void);
CONSOLE	*INPUT.WAIT.KEY(void);
console	*input.wait.key(void);
CONSOLE	*INPUT.WAIT.MOUSE(void);
console	*input.wait.mouse(void);
CONSOLE	*INPUT.WAIT.MOUSE_ACTION(void);
console	*input.wait.mouse_action(void);
CONSOLE	*INPUT.WAIT.MOUSE_MOVE(void);
console	*input.wait.mouse_move(void);
```

Blocks until the matching event arrives. `mouse_action` waits for a button or a wheel and ignores movement; `mouse_move` waits for movement only; `any` returns on the first event of any kind.

While waiting, any `event.*` callback you have set is dispatched, so a wait loop doubles as an event pump.

----

### `INPUT.GET.KEY`, `INPUT.GET.MOUSE`, `INPUT.GET.MOUSE_X`, `INPUT.GET.MOUSE_Y`

```cpp
const unsigned int	KEY;
const unsigned int	key;
const unsigned int	MOUSE;
const unsigned int	mouse;
const unsigned int	MOUSE_X;
const unsigned int	mouse_x;
const unsigned int	MOUSE_Y;
const unsigned int	mouse_y;
```

`key` packs two values into one integer: the virtual key code in the high half and the character in the low half.

```cpp
console.input.wait.key();

console.print("virtual key 0x%02X, character '%c'\n",
	console.input.get.key >> 16,
	(char)(console.input.get.key & 0xFF));
```

So `q` reads as `0X00510071` - `0X51` is the virtual code for Q, `0X71` is ASCII `q`. Printed as a decimal that is `5308529`, which looks arbitrary until you see it in hex.

`mouse` packs the same way: event flags in the high half, button state in the low half. `mouse_x` and `mouse_y` are the cell the pointer was over.

----

### `EVENT.*`

```cpp
void	(*ON_RESIZE)(unsigned int, unsigned int);
void	(*on_resize)(unsigned int, unsigned int);
void	(*ON_MOVE)(int, int);
void	(*on_move)(int, int);
void	(*ON_CLOSE)(void);
void	(*on_close)(void);
void	(*ON_FOCUS)(void);
void	(*on_focus)(void);
void	(*ON_BLUR)(void);
void	(*on_blur)(void);
void	(*ON_KEY)(unsigned int);
void	(*on_key)(unsigned int);
void	(*ON_MOUSE)(unsigned int, unsigned int, unsigned int);
void	(*on_mouse)(unsigned int, unsigned int, unsigned int);
```

Assign a function to any of these and it fires from inside `input.wait.*`.

`on_key` receives the same packed value as `input.get.key`; `on_mouse` receives the packed state followed by x and y.

These are plain function pointers, not `std::function`. A free function or a **capture-less** lambda works; a lambda that captures, or a member function, does not.

Example:

```cpp
console.event.on_key = [](unsigned int key)
{
	console.print("key 0x%08X\n", key);
};
console.input.wait.key();
```

> ### ⚠️ `on_close` is not wired
> It needs `SetConsoleCtrlHandler`, whose handler runs on its own thread. The member exists and is null; nothing calls it yet.

----

### `GET.*`

Read only. Everything here is `const` and maintained by the class.

| Member                                                                                         | Meaning                                                     |
| ---------------------------------------------------------------------------------------------- | ----------------------------------------------------------- |
| `GET.ACTIVE`, `get.active`                                                                     | is there a console at all                                   |
| `GET.TERMINAL`, `get.terminal`                                                                 | running under Windows Terminal rather than the classic host |
| `GET.WIDTH`, `GET.HEIGHT`, `get.width`, `get.height`                                           | visible window, in cells                                    |
| `GET.COLUMNS`, `GET.ROWS`, `get.columns`, `get.rows`                                           | screen buffer, in cells (usually taller than the window)    |
| `GET.PIXEL_WIDTH`, `GET.PIXEL_HEIGHT`, `get.pixel_width`, `get.pixel_height`                   | window size in pixels                                       |
| `GET.X`, `GET.Y`, `get.x`, `get.y`                                                             | window position in pixels                                   |
| `GET.COLOR`, `GET.DEFAULT_COLOR`, `get.color`, `get.default_color`                             | screen attributes                                           |
| `GET.CURSOR.X`, `GET.CURSOR.Y`, `get.cursor.x`, `get.cursor.y`                                 | cursor cell                                                 |
| `GET.CURSOR.SIZE`, `GET.CURSOR.VISIBLE`, `get.cursor.size`, `get.cursor.visible`               | caret shape                                                 |
| `GET.CURSOR.COLOR`, `GET.CURSOR.DEFAULT_COLOR`, `get.cursor.color`, `get.cursor.default_color` | pen attributes                                              |

----

### `HIGHLIGHTER`

```cpp
BOOLEAN	HIGHLIGHTER;
boolean	highlighter;
```

When true, `warning` and `error` colour their prefix. Set it to `FALSE` for plain output, for example when you are piping to a file.

----

## Notes

### Nothing fails silently

Members that cannot do their job print a warning saying which entry point or which condition stopped them, rather than returning quietly. If a call appears to do nothing and says nothing, that is a bug worth reporting.

### One interface per program

The C++ globals `console` and `CONSOLE` use the same symbol names as the C object interface's globals, but they are different types. Do not link C files that use the object interface with C++ files that use this class into one program. A C++ program that also needs plain C files can use [**CONSOLE_C.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/C.md) there, because the plain C interface has no globals.

### How the two classes share one object

`cmt::console` is a lower case view of the same bytes as `cmt::CONSOLE`; the two class definitions are kept member-for-member identical, and the header refuses to compile (`static_assert`) if their layouts ever drift apart. That is why `console` and `CONSOLE` can be references to one object, and why a lower case call is exactly as fast as an upper case one.

## References

 - [Console Functions - microsoft.com](https://learn.microsoft.com/en-us/windows/console/console-functions)
 - [SetConsoleScreenBufferSize - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsolescreenbuffersize)
 - [SetConsoleWindowInfo - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsolewindowinfo)
 - [SetConsoleTitle - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsoletitle)
 - [AllocConsole - microsoft.com](https://learn.microsoft.com/en-us/windows/console/allocconsole)
 - [INPUT_RECORD structure - microsoft.com](https://learn.microsoft.com/en-us/windows/console/input-record-str)
 - [Virtual-Key Codes - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes)
 - [Keywords (export) - cppreference.com](https://en.cppreference.com/w/cpp/keyword/export)
 - [Bresenham's line algorithm - Jack E. Bresenham, IBM Systems Journal (1965)](https://ieeexplore.ieee.org/document/5388473)
 - [A Rasterizing Algorithm for Drawing Curves - Alois Zingl](http://members.chello.at/easyfilter/Bresenham.pdf)
