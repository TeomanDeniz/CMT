# CONSOLE (C OOP)

<p align="center">
 <img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CONSOLE.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/CONSOLE.HPP](https://github.com/TeomanDeniz/CMT/blob/main/CONSOLE.HPP)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CONSOLE_OOP
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CONSOLE.HPP"
> ```

> ## 📖 Other versions of this document
> This page documents the **C OOP** interface, the one you get by default when compiling as C.
> 
> [**Go to the root CONSOLE documentation**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE.md)
> 
> * [**CONSOLE_C.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/C.md) - plain C functions, no object
> * **CONSOLE_OOP.md** - C with the CMT object system *(you are here)*
> * [**CONSOLE_CPP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/CPP.md) - the C++ class

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

`CONSOLE.HPP` provides a single object for everything a text console can do: writing text, drawing shapes into the screen buffer, colouring cells, moving and resizing the window, reading the buffer back, and receiving keyboard and mouse input. The goal is to hide the platform's console API behind one interface, so the same drawing code runs wherever CMT runs.

Every member returns the object itself, so calls chain:

```c
console.put.string("@====@", 10, 10)
	->put.string("@----@", 10, 11)
	->log("This is a log\n");
```

### The object

There are two ways to get a console.

**The namespace object.** `console` always exists and attaches to the console that started your program. It never creates one. If the program was launched without a console (a `-mwindows` build double-clicked from Explorer), every member quietly does nothing, the way an `assert` compiled out does nothing.

```c
console.log("Hello\n");
```

**A created object.** `new (CMT_CONSOLE, name)` will open a console if the process does not have one yet. This is how a `-mwindows` program gives itself a window on demand.

```c
new (CMT_CONSOLE, term) ();

term->log("Worked\n");
term->input.wait.key();
delete (term);
```

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

----

### Drawing

Everything in `put` writes directly into the screen buffer. None of it moves the cursor, so drawing never disturbs the log stream. Coordinates are in character cells and are clipped, so drawing off screen is safe.

Each shape has a plain form and a `colored` form. The plain form uses the current pen (`cursor.color`); the coloured form takes the attribute as its **second** argument, right after the character or string.

```c
console.put.line         (character,        x_start, y_start, x_end, y_end);
console.put.colored.line (character, color, x_start, y_start, x_end, y_end);
```

----

> ### ⚠️ One console per process
> This is a Windows OS rule, not a CMT one. `AllocConsole` fails while a console is already attached and there is no call that grants a second. So two created objects cannot each have a window, and a created object inside a program started from `cmd` shares that window instead of opening its own.

## Contents

| Contents List                  |
| ------------------------------ |
| `OBJECT CMT_CONSOLE;`          |
| `object cmt_console;`          |
| `OBJECT CMT_CONSOLE CONSOLE;`  |
| `object cmt_console console;`  |
| `#define WARNING_HERE(STRING)` |
| `#define warning_here(STRING)` |
| `#define ERROR_HERE(STRING)`   |
| `#define error_here(STRING)`   |
| `#define LOG_CURRENT`          |

| `object cmt_console`                                                                                                                          |
| --------------------------------------------------------------------------------------------------------------------------------------------- |
| `OBJECT CMT_CONSOLE *X(int);`                                                                                                                 |
| `object cmt_console *x(int);`                                                                                                                 |
| `OBJECT CMT_CONSOLE *Y(int);`                                                                                                                 |
| `object cmt_console *y(int);`                                                                                                                 |
| `OBJECT CMT_CONSOLE *XY(int, int);`                                                                                                           |
| `object cmt_console *xy(int, int);`                                                                                                           |
| `OBJECT CMT_CONSOLE *WIDTH(unsigned int);`                                                                                                    |
| `object cmt_console *width(unsigned int);`                                                                                                    |
| `OBJECT CMT_CONSOLE *HEIGHT(unsigned int);`                                                                                                   |
| `object cmt_console *height(unsigned int);`                                                                                                   |
| `OBJECT CMT_CONSOLE *TITLE(const char *);`                                                                                                    |
| `object cmt_console *title(const char *);`                                                                                                    |
| `OBJECT CMT_CONSOLE *COLOR(unsigned int);`                                                                                                    |
| `object cmt_console *color(unsigned int);`                                                                                                    |
| `OBJECT CMT_CONSOLE *DEFAULT_COLOR(void);`                                                                                                    |
| `object cmt_console *default_color(void);`                                                                                                    |
| `OBJECT CMT_CONSOLE *CLEAR(void);`                                                                                                            |
| `object cmt_console *clear(void);`                                                                                                            |
| `OBJECT CMT_CONSOLE *LOG(char *);`                                                                                                            |
| `object cmt_console *log(char *);`                                                                                                            |
| `OBJECT CMT_CONSOLE *WARNING(char *);`                                                                                                        |
| `object cmt_console *warning(char *);`                                                                                                        |
| `OBJECT CMT_CONSOLE *WARNING_AT(char *, char *, unsigned int);`                                                                               |
| `object cmt_console *warning_at(char *, char *, unsigned int);`                                                                               |
| `OBJECT CMT_CONSOLE *ERROR(char *);`                                                                                                          |
| `object cmt_console *error(char *);`                                                                                                          |
| `OBJECT CMT_CONSOLE *ERROR_AT(char *, char *, unsigned int);`                                                                                 |
| `object cmt_console *error_at(char *, char *, unsigned int);`                                                                                 |
| `OBJECT CMT_CONSOLE *PRINT(const char *, VA_ARGS);`                                                                                           |
| `object cmt_console *print(const char *, va_args);`                                                                                           |
| `OBJECT CMT_CONSOLE *PUSH(void);`                                                                                                             |
| `object cmt_console *push(void);`                                                                                                             |
| `OBJECT CMT_CONSOLE *POP(void);`                                                                                                              |
| `object cmt_console *pop(void);`                                                                                                              |
| `OBJECT CMT_CONSOLE *PUT.STRING(char *, unsigned int, unsigned int);`                                                                         |
| `object cmt_console *put.string(char *, unsigned int, unsigned int);`                                                                         |
| `OBJECT CMT_CONSOLE *PUT.LINE(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                 |
| `object cmt_console *put.line(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                 |
| `OBJECT CMT_CONSOLE *PUT.CURVE(char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`                                  |
| `object cmt_console *put.curve(char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`                                  |
| `OBJECT CMT_CONSOLE *PUT.FRAME(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                |
| `object cmt_console *put.frame(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                |
| `OBJECT CMT_CONSOLE *PUT.FRAME_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `object cmt_console *put.frame_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `OBJECT CMT_CONSOLE *PUT.RECTANGLE(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                            |
| `object cmt_console *put.rectangle(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                            |
| `OBJECT CMT_CONSOLE *PUT.RECTANGLE_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                       |
| `object cmt_console *put.rectangle_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                       |
| `OBJECT CMT_CONSOLE *PUT.CIRCLE(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                               |
| `object cmt_console *put.circle(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                               |
| `OBJECT CMT_CONSOLE *PUT.ELLIPSE(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                              |
| `object cmt_console *put.ellipse(char, unsigned int, unsigned int, unsigned int, unsigned int);`                                              |
| `OBJECT CMT_CONSOLE *PUT.COLORED.STRING(char *, unsigned int, unsigned int, unsigned int);`                                                   |
| `object cmt_console *put.colored.string(char *, unsigned int, unsigned int, unsigned int);`                                                   |
| `OBJECT CMT_CONSOLE *PUT.COLORED.LINE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `object cmt_console *put.colored.line(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `OBJECT CMT_CONSOLE *PUT.COLORED.CURVE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`            |
| `object cmt_console *put.colored.curve(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`            |
| `OBJECT CMT_CONSOLE *PUT.COLORED.FRAME(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                          |
| `object cmt_console *put.colored.frame(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                          |
| `OBJECT CMT_CONSOLE *PUT.COLORED.FRAME_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`     |
| `object cmt_console *put.colored.frame_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`     |
| `OBJECT CMT_CONSOLE *PUT.COLORED.RECTANGLE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                      |
| `object cmt_console *put.colored.rectangle(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                      |
| `OBJECT CMT_CONSOLE *PUT.COLORED.RECTANGLE_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);` |
| `object cmt_console *put.colored.rectangle_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);` |
| `OBJECT CMT_CONSOLE *PUT.COLORED.CIRCLE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                         |
| `object cmt_console *put.colored.circle(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                         |
| `OBJECT CMT_CONSOLE *PUT.COLORED.ELLIPSE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                        |
| `object cmt_console *put.colored.ellipse(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                        |
| `OBJECT CMT_CONSOLE *CURSOR.COLOR(unsigned int);`                                                                                             |
| `object cmt_console *cursor.color(unsigned int);`                                                                                             |
| `OBJECT CMT_CONSOLE *CURSOR.DEFAULT_COLOR(void);`                                                                                             |
| `object cmt_console *cursor.default_color(void);`                                                                                             |
| `OBJECT CMT_CONSOLE *CURSOR.X(unsigned int);`                                                                                                 |
| `object cmt_console *cursor.x(unsigned int);`                                                                                                 |
| `OBJECT CMT_CONSOLE *CURSOR.Y(unsigned int);`                                                                                                 |
| `object cmt_console *cursor.y(unsigned int);`                                                                                                 |
| `OBJECT CMT_CONSOLE *CURSOR.XY(unsigned int, unsigned int);`                                                                                  |
| `object cmt_console *cursor.xy(unsigned int, unsigned int);`                                                                                  |
| `OBJECT CMT_CONSOLE *CURSOR.MOVE_X(int);`                                                                                                     |
| `object cmt_console *cursor.move_x(int);`                                                                                                     |
| `OBJECT CMT_CONSOLE *CURSOR.MOVE_Y(int);`                                                                                                     |
| `object cmt_console *cursor.move_y(int);`                                                                                                     |
| `OBJECT CMT_CONSOLE *CURSOR.MOVE_XY(int, int);`                                                                                               |
| `object cmt_console *cursor.move_xy(int, int);`                                                                                               |
| `OBJECT CMT_CONSOLE *CURSOR.SHOW(BOOLEAN);`                                                                                                   |
| `object cmt_console *cursor.show(boolean);`                                                                                                   |
| `OBJECT CMT_CONSOLE *CURSOR.SIZE(unsigned long);`                                                                                             |
| `object cmt_console *cursor.size(unsigned long);`                                                                                             |
| `PTR EXPORT(void);`                                                                                                                           |
| `ptr export(void);`                                                                                                                           |
| `OBJECT CMT_CONSOLE *IMPORT(PTR);`                                                                                                            |
| `object cmt_console *import(ptr);`                                                                                                            |
| `OBJECT CMT_CONSOLE *INPUT.WAIT.ANY(void);`                                                                                                   |
| `object cmt_console *input.wait.any(void);`                                                                                                   |
| `OBJECT CMT_CONSOLE *INPUT.WAIT.KEY(void);`                                                                                                   |
| `object cmt_console *input.wait.key(void);`                                                                                                   |
| `OBJECT CMT_CONSOLE *INPUT.WAIT.MOUSE(void);`                                                                                                 |
| `object cmt_console *input.wait.mouse(void);`                                                                                                 |
| `OBJECT CMT_CONSOLE *INPUT.WAIT.MOUSE_ACTION(void);`                                                                                          |
| `object cmt_console *input.wait.mouse_action(void);`                                                                                          |
| `OBJECT CMT_CONSOLE *INPUT.WAIT.MOUSE_MOVE(void);`                                                                                            |
| `object cmt_console *input.wait.mouse_move(void);`                                                                                            |
| `void (*EVENT.ON_RESIZE)(unsigned int, unsigned int);`                                                                                        |
| `void (*event.on_resize)(unsigned int, unsigned int);`                                                                                        |
| `void (*EVENT.ON_MOVE)(int, int);`                                                                                                            |
| `void (*event.on_move)(int, int);`                                                                                                            |
| `void (*EVENT.ON_CLOSE)(void);`                                                                                                               |
| `void (*event.on_close)(void);`                                                                                                               |
| `void (*EVENT.ON_FOCUS)(void);`                                                                                                               |
| `void (*event.on_focus)(void);`                                                                                                               |
| `void (*EVENT.ON_BLUR)(void);`                                                                                                                |
| `void (*event.on_blur)(void);`                                                                                                                |
| `void (*EVENT.ON_KEY)(unsigned int);`                                                                                                         |
| `void (*event.on_key)(unsigned int);`                                                                                                         |
| `void (*EVENT.ON_MOUSE)(unsigned int, unsigned int, unsigned int);`                                                                           |
| `void (*event.on_mouse)(unsigned int, unsigned int, unsigned int);`                                                                           |
| `char *GET.LINE(unsigned int, unsigned int, unsigned int, unsigned int);`                                                                     |
| `char *get.line(unsigned int, unsigned int, unsigned int, unsigned int);`                                                                     |
| `char **GET.AREA(unsigned int, unsigned int, unsigned int, unsigned int);`                                                                    |
| `char **get.area(unsigned int, unsigned int, unsigned int, unsigned int);`                                                                    |
| `const BOOLEAN GET.ACTIVE;`                                                                                                                   |
| `const boolean get.active;`                                                                                                                   |
| `const BOOLEAN GET.TERMINAL;`                                                                                                                 |
| `const boolean get.terminal;`                                                                                                                 |
| `const unsigned int GET.ROWS;`                                                                                                                |
| `const unsigned int get.rows;`                                                                                                                |
| `const unsigned int GET.COLUMNS;`                                                                                                             |
| `const unsigned int get.columns;`                                                                                                             |
| `const unsigned int GET.PIXEL_WIDTH;`                                                                                                         |
| `const unsigned int get.pixel_width;`                                                                                                         |
| `const unsigned int GET.PIXEL_HEIGHT;`                                                                                                        |
| `const unsigned int get.pixel_height;`                                                                                                        |
| `const int GET.X;`                                                                                                                            |
| `const int get.x;`                                                                                                                            |
| `const int GET.Y;`                                                                                                                            |
| `const int get.y;`                                                                                                                            |
| `const unsigned int GET.COLOR;`                                                                                                               |
| `const unsigned int get.color;`                                                                                                               |
| `const unsigned int GET.DEFAULT_COLOR;`                                                                                                       |
| `const unsigned int get.default_color;`                                                                                                       |
| `const unsigned int GET.WIDTH;`                                                                                                               |
| `const unsigned int get.width;`                                                                                                               |
| `const unsigned int GET.HEIGHT;`                                                                                                              |
| `const unsigned int get.height;`                                                                                                              |
| `const unsigned long GET.CURSOR.SIZE;`                                                                                                        |
| `const unsigned long get.cursor.size;`                                                                                                        |
| `const int GET.CURSOR.X;`                                                                                                                     |
| `const int get.cursor.x;`                                                                                                                     |
| `const int GET.CURSOR.Y;`                                                                                                                     |
| `const int get.cursor.y;`                                                                                                                     |
| `const unsigned int GET.CURSOR.COLOR;`                                                                                                        |
| `const unsigned int get.cursor.color;`                                                                                                        |
| `const unsigned int GET.CURSOR.DEFAULT_COLOR;`                                                                                                |
| `const unsigned int get.cursor.default_color;`                                                                                                |
| `const BOOLEAN GET.CURSOR.VISIBLE;`                                                                                                           |
| `const boolean get.cursor.visible;`                                                                                                           |
| `BOOLEAN HIGHLIGHTER;`                                                                                                                        |
| `boolean highlighter;`                                                                                                                        |

### `X`, `Y`, `XY`

```c
OBJECT CMT_CONSOLE	*X(int);
object cmt_console	*x(int);
OBJECT CMT_CONSOLE	*Y(int);
object cmt_console	*y(int);
OBJECT CMT_CONSOLE	*XY(int, int);
object cmt_console	*xy(int, int);
```

Moves the console window, in **pixels**, relative to the top left of the screen.

The coordinates are signed because a window may legitimately sit at a negative position on a multiple monitor desktop.

The size is never touched, so moving a window cannot resize it.

Example:

```c
console.xy(100, 100);
console.x(400); /* moves horizontally, keeps the current y */
```

> ### ⚠️ Windows Terminal
> Terminal manages its own window and animates moves, so a move may land slightly off or look "snapped". The call still works. If a move genuinely fails you get a warning on the console rather than silence.

----

### `WIDTH`, `HEIGHT`

```c
OBJECT CMT_CONSOLE	*WIDTH(unsigned int);
object cmt_console	*width(unsigned int);
OBJECT CMT_CONSOLE	*HEIGHT(unsigned int);
object cmt_console	*height(unsigned int);
```

Resizes the console in **character cells**, not pixels. The request is clamped to what the screen can actually carry, so asking for more than fits gives you the largest that does.

Read the result back from `get.width` and `get.height`; they report what the console really became, which may be smaller than what you asked for.

Example:

```c
console.width(100)->height(30);
console.print("actually %u x %u\n", console.get.width, console.get.height);
```

----

### `TITLE`

```c
OBJECT CMT_CONSOLE	*TITLE(const char *);
object cmt_console	*title(const char *);
```

Sets the console window title. Works under both the classic console host and Windows Terminal.

Example:

```c
console.title("My Program");
```

----

### `COLOR`, `DEFAULT_COLOR`

```c
OBJECT CMT_CONSOLE	*COLOR(unsigned int);
object cmt_console	*color(unsigned int);
OBJECT CMT_CONSOLE	*DEFAULT_COLOR(void);
object cmt_console	*default_color(void);
```

`color` repaints **every cell** on the screen with the given attribute.

`default_color` puts the screen back to the colour it had when the object was constructed.

To change the colour of *new* output without touching what is already on screen, use `cursor.color` instead.

----

### `CLEAR`

```c
OBJECT CMT_CONSOLE	*CLEAR(void);
object cmt_console	*clear(void);
```

Blanks the screen buffer and puts the cursor back at the top left.

----

### `LOG`

```c
OBJECT CMT_CONSOLE	*LOG(char *);
object cmt_console	*log(char *);
```

Writes a string at the cursor and advances it. This is the one call every other text member is built on, so anything that affects `log` affects all of them.

----

### `WARNING`, `ERROR`, `WARNING_AT`, `ERROR_AT`

```c
OBJECT CMT_CONSOLE	*WARNING(char *);
object cmt_console	*warning(char *);
OBJECT CMT_CONSOLE	*ERROR(char *);
object cmt_console	*error(char *);
OBJECT CMT_CONSOLE	*WARNING_AT(char *, char *, unsigned int);
object cmt_console	*warning_at(char *, char *, unsigned int);
OBJECT CMT_CONSOLE	*ERROR_AT(char *, char *, unsigned int);
object cmt_console	*error_at(char *, char *, unsigned int);
```

Same as `log` with a coloured prefix. The `_at` forms take a file name and a line number and print them with the message.

Two macros fill those in for you:

```c
#define WARNING_HERE(STRING) warning_at((STRING), LOG_CURRENT)
#define ERROR_HERE(STRING) error_at((STRING), LOG_CURRENT)
```

Example:

```c
console.warning("something looks odd\n");
CONSOLE.ERROR_HERE("could not open the file\n");
```

----

### `PRINT`

```c
OBJECT CMT_CONSOLE	*PRINT(const char *, VA_ARGS);
object cmt_console	*print(const char *, va_args);
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

```c
console.print("[%5d] [%-5d] [%05d]\n", 42, 42, 42);
console.print("[%#x] [%#b] [%.3s]\n", 255, 5, "abcdefg");
```

> ### ⚠️ One deviation
> `%.0f` of `2.5` prints `3`. Rounding is half away from zero, not half to even.
> 
> Banker's rounding without `libm` costs more than it is worth for a console logger.

----

### `PUSH`, `POP`

```c
OBJECT CMT_CONSOLE	*PUSH(void);
object cmt_console	*push(void);
OBJECT CMT_CONSOLE	*POP(void);
object cmt_console	*pop(void);
```

Collects log output in memory instead of drawing it, and releases it all at once on `pop`. Useful when you want a block of text to appear without flicker.

`push` nests; only the outermost `pop` flushes.

Example:

```c
console.push();
console.log("these three lines\n")
	->log("appear together\n")
	->log("when pop runs\n");
console.pop();
```

> ### ⚠️ Only sequential output is buffered
> Positional members (`put.*`) go straight to the screen even between `push` and `pop`. Replaying a positioned write later would land it in the wrong place, so buffering it would be worse than not buffering it.

----

### `PUT.STRING`

```c
OBJECT CMT_CONSOLE	*PUT.STRING(char *, unsigned int, unsigned int);
object cmt_console	*put.string(char *, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.COLORED.STRING(char *, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.colored.string(char *, unsigned int, unsigned int, unsigned int);
```

Writes a string at a position. Arguments are string, x, y - and for the coloured form, string, colour, x, y.

----

### `PUT.LINE`

```c
OBJECT CMT_CONSOLE	*PUT.LINE(char, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.line(char, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.COLORED.LINE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.colored.line(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

A straight line between two cells, drawn with Bresenham's algorithm.

Example:

```c
console.put.line('#', 10, 10, 40, 20);
```

----

### `PUT.CURVE`

```c
OBJECT CMT_CONSOLE	*PUT.CURVE(char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
object cmt_console	*put.curve(char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
OBJECT CMT_CONSOLE	*PUT.COLORED.CURVE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
object cmt_console	*put.colored.curve(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
```

A cubic Bézier between two points. The two floats are the **bulge in cells** at each end, measured perpendicular to the straight line between the points.

| Floats        | Shape                      |
| ------------- | -------------------------- |
| `0.0F, 0.0F`  | a straight line            |
| `4.0F, 4.0F`  | an arc bulging to one side |
| `4.0F, -4.0F` | an S curve                 |

Example:

```c
console.put.curve('.', 2, 24, 50, 24, 4.0F, -4.0F);
```

----

### `PUT.FRAME`, `PUT.RECTANGLE`

```c
OBJECT CMT_CONSOLE	*PUT.FRAME(char, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.frame(char, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.RECTANGLE(char, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.rectangle(char, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.COLORED.FRAME(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.colored.frame(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.COLORED.RECTANGLE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.colored.rectangle(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

`frame` draws the outline of a box. `rectangle` fills it.

----

### `PUT.FRAME_RADIUS`, `PUT.RECTANGLE_RADIUS`

```c
OBJECT CMT_CONSOLE	*PUT.FRAME_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.frame_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.RECTANGLE_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.rectangle_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.COLORED.FRAME_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.colored.frame_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.COLORED.RECTANGLE_RADIUS(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.colored.rectangle_radius(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

The same two shapes with rounded corners. The last argument is the corner radius in cells. A radius of `0` gives the square version, and a radius larger than the box is clamped.

----

### `PUT.CIRCLE`, `PUT.ELLIPSE`

```c
OBJECT CMT_CONSOLE	*PUT.CIRCLE(char, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.circle(char, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.ELLIPSE(char, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.ellipse(char, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.COLORED.CIRCLE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.colored.circle(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
OBJECT CMT_CONSOLE	*PUT.COLORED.ELLIPSE(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
object cmt_console	*put.colored.ellipse(char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

Both are bounded by the rectangle you give them, so both are ellipses in the general case. `circle` draws the **outline**, `ellipse` draws it **filled**.

----

### `CURSOR.COLOR`, `CURSOR.DEFAULT_COLOR`

```c
OBJECT CMT_CONSOLE	*CURSOR.COLOR(unsigned int);
object cmt_console	*cursor.color(unsigned int);
OBJECT CMT_CONSOLE	*CURSOR.DEFAULT_COLOR(void);
object cmt_console	*cursor.default_color(void);
```

Sets the attribute used for output from here on, without touching what is already on the screen. This is also the pen the plain `put.*` shapes draw with.

----

### `cursor.x`, `cursor.y`, `cursor.xy`

```c
OBJECT CMT_CONSOLE	*CURSOR.X(unsigned int);
object cmt_console	*cursor.x(unsigned int);
OBJECT CMT_CONSOLE	*CURSOR.Y(unsigned int);
object cmt_console	*cursor.y(unsigned int);
OBJECT CMT_CONSOLE	*CURSOR.XY(unsigned int, unsigned int);
object cmt_console	*cursor.xy(unsigned int, unsigned int);
```

Moves the cursor to an absolute cell.

----

### `CURSOR.MOVE_X`, `CURSOR.MOVE_Y`, `CURSOR.MOVE_XY`

```c
OBJECT CMT_CONSOLE	*CURSOR.MOVE_X(int);
object cmt_console	*cursor.move_x(int);
OBJECT CMT_CONSOLE	*CURSOR.MOVE_Y(int);
object cmt_console	*cursor.move_y(int);
OBJECT CMT_CONSOLE	*CURSOR.MOVE_XY(int, int);
object cmt_console	*cursor.move_xy(int, int);
```

Moves the cursor **relative** to where it is. The arguments are signed and the result is clamped at the screen edges.

Example:

```c
console.cursor.xy(4, 4)->cursor.move_xy(2, -1);
```

----

### `CURSOR.SHOW`, `CURSOR.SIZE`

```c
OBJECT CMT_CONSOLE	*CURSOR.SHOW(BOOLEAN);
object cmt_console	*cursor.show(boolean);
OBJECT CMT_CONSOLE	*CURSOR.SIZE(unsigned long);
object cmt_console	*cursor.size(unsigned long);
```

`show` turns the caret on or off. `size` is the fill percentage of the cell, from `1` to `100`.

----

### `EXPORT`, `IMPORT`

```c
PTR					EXPORT(void);
ptr					export(void);
OBJECT CMT_CONSOLE	*IMPORT(PTR);
object cmt_console	*import(ptr);
```

`export` takes a snapshot of the whole screen - characters, attributes, cursor position and colours - and returns it as one block. `import` puts it back.

The block is **yours**. Release it with `FREE` from `OS_API/MEMORY.H`:

```c
ptr	snapshot = console.export();

console.clear();
// ...
console.import(snapshot);
FREE(snapshot);
```

`import` checks a magic value and a version, and replays the snapshot row by row when the console has been resized since, so restoring into a different sized window does the sane thing instead of shearing.

----

### `GET.LINE`, `GET.AREA`

```c
char	*GET.LINE(unsigned int, unsigned int, unsigned int, unsigned int);
char	*get.line(unsigned int, unsigned int, unsigned int, unsigned int);
char	**GET.AREA(unsigned int, unsigned int, unsigned int, unsigned int);
char	**get.area(unsigned int, unsigned int, unsigned int, unsigned int);
```

`get.line` reads the wrapping span between two buffer positions and returns a NUL-terminated string. `get.area` reads a rectangle and returns a NULL-terminated array of rows.

Example:

```c
char	*text = console.get.line(4, 6, 12, 6);

console.print("[%s]\n", text);
```

> ### ⚠️ They share one buffer
> Both return memory owned by the object, valid **only until the next call to either one**. Use the result before you call again, or copy it out. This is wrong:
> ```c
> char	*line = console.get.line(4, 3, 12, 3);
> char	**area = console.get.area(4, 2, 12, 5); /* overwrites line */
> 
> console.print("%s\n", line); /* garbage */
> ```
> You do not free either of them.

----

### `INPUT.WAIT.*`

```c
OBJECT CMT_CONSOLE	*INPUT.WAIT.ANY(void);
object cmt_console	*input.wait.any(void);
OBJECT CMT_CONSOLE	*INPUT.WAIT.KEY(void);
object cmt_console	*input.wait.key(void);
OBJECT CMT_CONSOLE	*INPUT.WAIT.MOUSE(void);
object cmt_console	*input.wait.mouse(void);
OBJECT CMT_CONSOLE	*INPUT.WAIT.MOUSE_ACTION(void);
object cmt_console	*input.wait.mouse_action(void);
OBJECT CMT_CONSOLE	*INPUT.WAIT.MOUSE_MOVE(void);
object cmt_console	*input.wait.mouse_move(void);
```

Blocks until the matching event arrives. `mouse_action` waits for a button or a wheel and ignores movement; `mouse_move` waits for movement only; `any` returns on the first event of any kind.

While waiting, any `event.*` callback you have set is dispatched, so a wait loop doubles as an event pump.

----

### `INPUT.GET.KEY`, `INPUT.GET.MOUSE`, `INPUT.GET.MOUSE_X`, `INPUT.GET.MOUSE_Y`

```c
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

```c
console.input.wait.key();

console.print("virtual key 0x%02X, character '%c'\n",
	console.input.get.key >> 16,
	(char)(console.input.get.key & 0xFF));
```

So `q` reads as `0X00510071` - `0X51` is the virtual code for Q, `0X71` is ASCII `q`. Printed as a decimal that is `5308529`, which looks arbitrary until you see it in hex.

`mouse` packs the same way: event flags in the high half, button state in the low half. `mouse_x` and `mouse_y` are the cell the pointer was over.

----

### `EVENT.*`

```c
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

Example:

```c
void	my_key(unsigned int key)
{
	console.print("key 0x%08X\n", key);
}

{
	console.event.on_key = my_key;
	console.input.wait.key();
}
```

> ### ⚠️ `on_close` is not wired
> It needs `SetConsoleCtrlHandler`, whose handler runs on its own thread. The member exists and is null; nothing calls it yet.

----

### `GET.*`

Read only. Everything here is `const` and maintained by the module.

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

```c
BOOLEAN	HIGHLIGHTER;
boolean	highlighter;
```

When true, `warning` and `error` colour their prefix. Set it to `FALSE` for plain output, for example when you are piping to a file.

----

## Notes

### Nothing fails silently

Members that cannot do their job print a warning saying which entry point or which condition stopped them, rather than returning quietly. If a call appears to do nothing and says nothing, that is a bug worth reporting.

### The known inconsistency

`CONSOLE/C_OOP.INL` declares `object CMT_CONSOLE` twice: once for standard C and once for K&R. The K&R copy is currently missing `get.terminal` and the private `_ACTIVE`, `_VT`, `_OWNED` and `_TERMINAL` members. Building with `KNR_STYLE` therefore produces a different structure layout from the standard C build. The two definitions need to be brought back in step.
