# CONSOLE (C)

<p align="center">
 <img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/CONSOLE.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/CONSOLE.H](https://github.com/TeomanDeniz/CMT/blob/main/CONSOLE.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CONSOLE
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CONSOLE.H"
> ```

> ## 📖 Other versions of this document
> This page documents the **plain C** interface: flat functions, no object system, no chaining.
> 
> [**Go to the root CONSOLE documentation**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE.md)
> 
> * **CONSOLE_C.md** - plain C functions, no object *(you are here)*
> * [**CONSOLE_OOP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/OOP.md) - C with the CMT object system
> * [**CONSOLE_CPP.md**](https://github.com/TeomanDeniz/CMT/tree/main/docs/MD/EN/CONSOLE/CPP.md) - the C++ class

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

`CONSOLE.H` exposes everything a text console can do as a set of ordinary C functions: writing text, drawing shapes into the screen buffer, colouring cells, moving and resizing the window, reading the buffer back, and receiving keyboard and mouse input. It drives exactly the same engine as the object and C++ interfaces, so nothing here is slower or less capable than there.

What changes is the shape of the code. There is no object and no hidden `this`: you own a console structure, you pass its address as the **first argument** of every call, and every member name is flattened into the function name.

```c
console_put_string(&con, "@====@", 10, 10);
console_put_string(&con, "@----@", 10, 11);
console_log(&con, "This is a log\n");
```

This is the interface to use when you want none of the object machinery (no generated trampolines, no executable allocation at startup), when the object system cannot run on your target, when you want to step through every call in a debugger with nothing in between, or when you simply prefer plain C.

### The structure

There is no global console in this interface. You declare one, initialise it, use it, and destroy it:

```c
struct s_console	con;

console_init(&con);

console_log(&con, "Worked\n");
console_input_wait_key(&con);

console_destroy(&con);
```

`console_init` attaches the structure to the console the program is running in and reads its current state (size, colours, cursor). `console_destroy` restores the input mode it changed and releases the buffers the structure allocated for `push` and for `get_line` / `get_area`. Calling any other function on a structure that was not initialised, or after it was destroyed, is undefined.

The structure lives wherever you put it - a local, a global, inside your own `struct` - and costs nothing beyond its size. Several structures may exist at once; they all talk to the same console window (see the warning below).

### Two spellings

Every function and every structure exists twice, once in upper case and once in lower case. They are the same thing; pick the one that matches your code base.

| Upper case                | Lower case                |
| ------------------------- | ------------------------- |
| `struct S_CONSOLE`        | `struct s_console`        |
| `CONSOLE_INIT(&CON)`      | `console_init(&con)`      |
| `CONSOLE_PUT_LINE(&CON…)` | `console_put_line(&con…)` |
| `CON.GET.WIDTH`           | `con.get.width`           |

The upper case functions take a `struct S_CONSOLE *`, the lower case functions a `struct s_console *`. Keep each structure with its own family of functions.

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

Every `console_put_*` function writes directly into the screen buffer. None of them moves the cursor, so drawing never disturbs the log stream. Coordinates are in character cells and are clipped, so drawing off screen is safe.

Each shape has a plain form and a `colored` form. The plain form uses the current pen (`console_cursor_color`); the coloured form takes the attribute as its **third** argument, right after the console and the character or string.

```c
console_put_line         (&con, character,        x_start, y_start, x_end, y_end);
console_put_colored_line (&con, character, color, x_start, y_start, x_end, y_end);
```

----

### No chaining

Every function returns `void` (except the three that hand data back: `console_export`, `console_get_line` and `console_get_area`). A sequence of operations is a sequence of statements:

```c
console_cursor_color(&con, 0X1E);
console_put_frame(&con, '#', 5, 3, 40, 12);
console_put_colored_string(&con, "MENU", 0X4F, 7, 3);
console_put_line(&con, '-', 6, 5, 39, 5);
```

This is the deliberate trade of this interface: a little more typing, and in exchange nothing at all between your call and the implementation.

----

> ### ⚠️ One console per process
> This is a Windows OS rule, not a CMT one. `AllocConsole` fails while a console is already attached and there is no call that grants a second. So two structures cannot each have a window of their own: every `struct s_console` you initialise draws into the same console, and a program started from `cmd` shares that window instead of opening its own. `console_destroy` only closes a console that CMT opened itself, so an inherited shell window is never taken down.

## Contents

| Contents List         |
| --------------------- |
| `struct S_CONSOLE;`   |
| `struct s_console;`   |
| `#define LOG_CURRENT` |

| Functions                                                                                                                                                  |
| ---------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `void CONSOLE_INIT(struct S_CONSOLE *);`                                                                                                                   |
| `void console_init(struct s_console *);`                                                                                                                   |
| `void CONSOLE_DESTROY(struct S_CONSOLE *);`                                                                                                                |
| `void console_destroy(struct s_console *);`                                                                                                                |
| `void CONSOLE_X(struct S_CONSOLE *, int);`                                                                                                                 |
| `void console_x(struct s_console *, int);`                                                                                                                 |
| `void CONSOLE_Y(struct S_CONSOLE *, int);`                                                                                                                 |
| `void console_y(struct s_console *, int);`                                                                                                                 |
| `void CONSOLE_XY(struct S_CONSOLE *, int, int);`                                                                                                           |
| `void console_xy(struct s_console *, int, int);`                                                                                                           |
| `void CONSOLE_WIDTH(struct S_CONSOLE *, unsigned int);`                                                                                                    |
| `void console_width(struct s_console *, unsigned int);`                                                                                                    |
| `void CONSOLE_HEIGHT(struct S_CONSOLE *, unsigned int);`                                                                                                   |
| `void console_height(struct s_console *, unsigned int);`                                                                                                   |
| `void CONSOLE_TITLE(struct S_CONSOLE *, const char *);`                                                                                                    |
| `void console_title(struct s_console *, const char *);`                                                                                                    |
| `void CONSOLE_COLOR(struct S_CONSOLE *, unsigned int);`                                                                                                    |
| `void console_color(struct s_console *, unsigned int);`                                                                                                    |
| `void CONSOLE_DEFAULT_COLOR(struct S_CONSOLE *);`                                                                                                          |
| `void console_default_color(struct s_console *);`                                                                                                          |
| `void CONSOLE_CLEAR(struct S_CONSOLE *);`                                                                                                                  |
| `void console_clear(struct s_console *);`                                                                                                                  |
| `void CONSOLE_LOG(struct S_CONSOLE *, char *);`                                                                                                            |
| `void console_log(struct s_console *, char *);`                                                                                                            |
| `void CONSOLE_WARNING(struct S_CONSOLE *, char *);`                                                                                                        |
| `void console_warning(struct s_console *, char *);`                                                                                                        |
| `void CONSOLE_WARNING_AT(struct S_CONSOLE *, char *, char *, unsigned int);`                                                                               |
| `void console_warning_at(struct s_console *, char *, char *, unsigned int);`                                                                               |
| `void CONSOLE_ERROR(struct S_CONSOLE *, char *);`                                                                                                          |
| `void console_error(struct s_console *, char *);`                                                                                                          |
| `void CONSOLE_ERROR_AT(struct S_CONSOLE *, char *, char *, unsigned int);`                                                                                 |
| `void console_error_at(struct s_console *, char *, char *, unsigned int);`                                                                                 |
| `void CONSOLE_PRINT(struct S_CONSOLE *, const char *, VA_ARGS);`                                                                                           |
| `void console_print(struct s_console *, const char *, va_args);`                                                                                           |
| `void CONSOLE_PUSH(struct S_CONSOLE *);`                                                                                                                   |
| `void console_push(struct s_console *);`                                                                                                                   |
| `void CONSOLE_POP(struct S_CONSOLE *);`                                                                                                                    |
| `void console_pop(struct s_console *);`                                                                                                                    |
| `void CONSOLE_PUT_STRING(struct S_CONSOLE *, char *, unsigned int, unsigned int);`                                                                         |
| `void console_put_string(struct s_console *, char *, unsigned int, unsigned int);`                                                                         |
| `void CONSOLE_PUT_LINE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                 |
| `void console_put_line(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                 |
| `void CONSOLE_PUT_CURVE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`                                  |
| `void console_put_curve(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`                                  |
| `void CONSOLE_PUT_FRAME(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                |
| `void console_put_frame(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                                |
| `void CONSOLE_PUT_FRAME_RADIUS(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `void console_put_frame_radius(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `void CONSOLE_PUT_RECTANGLE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                            |
| `void console_put_rectangle(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                            |
| `void CONSOLE_PUT_RECTANGLE_RADIUS(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                       |
| `void console_put_rectangle_radius(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                       |
| `void CONSOLE_PUT_CIRCLE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                               |
| `void console_put_circle(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                               |
| `void CONSOLE_PUT_ELLIPSE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                              |
| `void console_put_ellipse(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);`                                              |
| `void CONSOLE_PUT_COLORED_STRING(struct S_CONSOLE *, char *, unsigned int, unsigned int, unsigned int);`                                                   |
| `void console_put_colored_string(struct s_console *, char *, unsigned int, unsigned int, unsigned int);`                                                   |
| `void CONSOLE_PUT_COLORED_LINE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `void console_put_colored_line(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                           |
| `void CONSOLE_PUT_COLORED_CURVE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`            |
| `void console_put_colored_curve(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);`            |
| `void CONSOLE_PUT_COLORED_FRAME(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                          |
| `void console_put_colored_frame(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                          |
| `void CONSOLE_PUT_COLORED_FRAME_RADIUS(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`     |
| `void console_put_colored_frame_radius(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`     |
| `void CONSOLE_PUT_COLORED_RECTANGLE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                      |
| `void console_put_colored_rectangle(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                      |
| `void CONSOLE_PUT_COLORED_RECTANGLE_RADIUS(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);` |
| `void console_put_colored_rectangle_radius(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);` |
| `void CONSOLE_PUT_COLORED_CIRCLE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                         |
| `void console_put_colored_circle(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                         |
| `void CONSOLE_PUT_COLORED_ELLIPSE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                        |
| `void console_put_colored_ellipse(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);`                        |
| `void CONSOLE_CURSOR_COLOR(struct S_CONSOLE *, unsigned int);`                                                                                             |
| `void console_cursor_color(struct s_console *, unsigned int);`                                                                                             |
| `void CONSOLE_CURSOR_DEFAULT_COLOR(struct S_CONSOLE *);`                                                                                                   |
| `void console_cursor_default_color(struct s_console *);`                                                                                                   |
| `void CONSOLE_CURSOR_X(struct S_CONSOLE *, unsigned int);`                                                                                                 |
| `void console_cursor_x(struct s_console *, unsigned int);`                                                                                                 |
| `void CONSOLE_CURSOR_Y(struct S_CONSOLE *, unsigned int);`                                                                                                 |
| `void console_cursor_y(struct s_console *, unsigned int);`                                                                                                 |
| `void CONSOLE_CURSOR_XY(struct S_CONSOLE *, unsigned int, unsigned int);`                                                                                  |
| `void console_cursor_xy(struct s_console *, unsigned int, unsigned int);`                                                                                  |
| `void CONSOLE_CURSOR_MOVE_X(struct S_CONSOLE *, int);`                                                                                                     |
| `void console_cursor_move_x(struct s_console *, int);`                                                                                                     |
| `void CONSOLE_CURSOR_MOVE_Y(struct S_CONSOLE *, int);`                                                                                                     |
| `void console_cursor_move_y(struct s_console *, int);`                                                                                                     |
| `void CONSOLE_CURSOR_MOVE_XY(struct S_CONSOLE *, int, int);`                                                                                               |
| `void console_cursor_move_xy(struct s_console *, int, int);`                                                                                               |
| `void CONSOLE_CURSOR_SHOW(struct S_CONSOLE *, BOOLEAN);`                                                                                                   |
| `void console_cursor_show(struct s_console *, boolean);`                                                                                                   |
| `void CONSOLE_CURSOR_SIZE(struct S_CONSOLE *, unsigned long);`                                                                                             |
| `void console_cursor_size(struct s_console *, unsigned long);`                                                                                             |
| `PTR CONSOLE_EXPORT(struct S_CONSOLE *);`                                                                                                                  |
| `ptr console_export(struct s_console *);`                                                                                                                  |
| `void CONSOLE_IMPORT(struct S_CONSOLE *, PTR);`                                                                                                            |
| `void console_import(struct s_console *, ptr);`                                                                                                            |
| `void CONSOLE_INPUT_WAIT_ANY(struct S_CONSOLE *);`                                                                                                         |
| `void console_input_wait_any(struct s_console *);`                                                                                                         |
| `void CONSOLE_INPUT_WAIT_KEY(struct S_CONSOLE *);`                                                                                                         |
| `void console_input_wait_key(struct s_console *);`                                                                                                         |
| `void CONSOLE_INPUT_WAIT_MOUSE(struct S_CONSOLE *);`                                                                                                       |
| `void console_input_wait_mouse(struct s_console *);`                                                                                                       |
| `void CONSOLE_INPUT_WAIT_MOUSE_ACTION(struct S_CONSOLE *);`                                                                                                |
| `void console_input_wait_mouse_action(struct s_console *);`                                                                                                |
| `void CONSOLE_INPUT_WAIT_MOUSE_MOVE(struct S_CONSOLE *);`                                                                                                  |
| `void console_input_wait_mouse_move(struct s_console *);`                                                                                                  |
| `char *CONSOLE_GET_LINE(struct S_CONSOLE *, unsigned int, unsigned int, unsigned int, unsigned int);`                                                      |
| `char *console_get_line(struct s_console *, unsigned int, unsigned int, unsigned int, unsigned int);`                                                      |
| `char **CONSOLE_GET_AREA(struct S_CONSOLE *, unsigned int, unsigned int, unsigned int, unsigned int);`                                                     |
| `char **console_get_area(struct s_console *, unsigned int, unsigned int, unsigned int, unsigned int);`                                                     |

| `struct s_console` members (read and assign)                                                                          |
| --------------------------------------------------------------------------------------------------------------------- |
| `void (*EVENT.ON_RESIZE)(unsigned int, unsigned int);`                                                                |
| `void (*event.on_resize)(unsigned int, unsigned int);`                                                                |
| `void (*EVENT.ON_MOVE)(int, int);`                                                                                    |
| `void (*event.on_move)(int, int);`                                                                                    |
| `void (*EVENT.ON_CLOSE)(void);`                                                                                       |
| `void (*event.on_close)(void);`                                                                                       |
| `void (*EVENT.ON_FOCUS)(void);`                                                                                       |
| `void (*event.on_focus)(void);`                                                                                       |
| `void (*EVENT.ON_BLUR)(void);`                                                                                        |
| `void (*event.on_blur)(void);`                                                                                        |
| `void (*EVENT.ON_KEY)(unsigned int);`                                                                                 |
| `void (*event.on_key)(unsigned int);`                                                                                 |
| `void (*EVENT.ON_MOUSE)(unsigned int, unsigned int, unsigned int);`                                                   |
| `void (*event.on_mouse)(unsigned int, unsigned int, unsigned int);`                                                   |
| `const unsigned int INPUT.GET.KEY;`, `MOUSE`, `MOUSE_X`, `MOUSE_Y`                                                    |
| `const unsigned int input.get.key;`, `mouse`, `mouse_x`, `mouse_y`                                                    |
| `const BOOLEAN GET.ACTIVE;`, `GET.TERMINAL;`                                                                          |
| `const boolean get.active;`, `get.terminal;`                                                                          |
| `const unsigned int GET.ROWS;`, `COLUMNS`, `PIXEL_WIDTH`, `PIXEL_HEIGHT`, `COLOR`, `DEFAULT_COLOR`, `WIDTH`, `HEIGHT` |
| `const unsigned int get.rows;`, `columns`, `pixel_width`, `pixel_height`, `color`, `default_color`, `width`, `height` |
| `const int GET.X;`, `GET.Y;`                                                                                          |
| `const int get.x;`, `get.y;`                                                                                          |
| `const unsigned long GET.CURSOR.SIZE;`                                                                                |
| `const unsigned long get.cursor.size;`                                                                                |
| `const int GET.CURSOR.X;`, `GET.CURSOR.Y;`                                                                            |
| `const int get.cursor.x;`, `get.cursor.y;`                                                                            |
| `const unsigned int GET.CURSOR.COLOR;`, `GET.CURSOR.DEFAULT_COLOR;`                                                   |
| `const unsigned int get.cursor.color;`, `get.cursor.default_color;`                                                   |
| `const BOOLEAN GET.CURSOR.VISIBLE;`                                                                                   |
| `const boolean get.cursor.visible;`                                                                                   |
| `BOOLEAN HIGHLIGHTER;`                                                                                                |
| `boolean highlighter;`                                                                                                |

### `CONSOLE_INIT`, `CONSOLE_DESTROY`

```c
void	CONSOLE_INIT(struct S_CONSOLE *);
void	console_init(struct s_console *);
void	CONSOLE_DESTROY(struct S_CONSOLE *);
void	console_destroy(struct s_console *);
```

`init` fills the structure: it finds the console's input and output handles, reads the current colours, cursor position, cursor shape and window position, clears every `event` callback, turns `highlighter` on, and switches the input into the mode `input_wait_*` needs (mouse and window events on, quick edit off).

`destroy` puts the input mode back the way `init` found it and frees the memory the structure allocated for itself. The structure itself is yours; `destroy` does not free it.

Example:

```c
struct s_console	con;

console_init(&con);
/* ... */
console_destroy(&con);
```

> ### ⚠️ Always pair them
> Skipping `console_destroy` leaves the console in mouse input mode after your program exits, which the shell that started you will notice. Call it on every exit path.

----

### `X`, `Y`, `XY`

```c
void	CONSOLE_X(struct S_CONSOLE *, int);
void	console_x(struct s_console *, int);
void	CONSOLE_Y(struct S_CONSOLE *, int);
void	console_y(struct s_console *, int);
void	CONSOLE_XY(struct S_CONSOLE *, int, int);
void	console_xy(struct s_console *, int, int);
```

Moves the console window, in **pixels**, relative to the top left of the screen.

The coordinates are signed because a window may legitimately sit at a negative position on a multiple monitor desktop.

The size is never touched, so moving a window cannot resize it.

Example:

```c
console_xy(&con, 100, 100);
console_x(&con, 400); /* moves horizontally, keeps the current y */
```

> ### ⚠️ Windows Terminal
> Terminal manages its own window and animates moves, so a move may land slightly off or look "snapped". The call still works. If a move genuinely fails you get a warning on the console rather than silence.

----

### `WIDTH`, `HEIGHT`

```c
void	CONSOLE_WIDTH(struct S_CONSOLE *, unsigned int);
void	console_width(struct s_console *, unsigned int);
void	CONSOLE_HEIGHT(struct S_CONSOLE *, unsigned int);
void	console_height(struct s_console *, unsigned int);
```

Resizes the console in **character cells**, not pixels. The request is clamped to what the screen can actually carry, so asking for more than fits gives you the largest that does.

Read the result back from `get.width` and `get.height`; they report what the console really became, which may be smaller than what you asked for.

Example:

```c
console_width(&con, 100);
console_height(&con, 30);
console_print(&con, "actually %u x %u\n", con.get.width, con.get.height);
```

----

### `TITLE`

```c
void	CONSOLE_TITLE(struct S_CONSOLE *, const char *);
void	console_title(struct s_console *, const char *);
```

Sets the console window title. Works under both the classic console host and Windows Terminal.

Example:

```c
console_title(&con, "My Program");
```

----

### `COLOR`, `DEFAULT_COLOR`

```c
void	CONSOLE_COLOR(struct S_CONSOLE *, unsigned int);
void	console_color(struct s_console *, unsigned int);
void	CONSOLE_DEFAULT_COLOR(struct S_CONSOLE *);
void	console_default_color(struct s_console *);
```

`console_color` repaints **every cell** on the screen with the given attribute.

`console_default_color` puts the screen back to the colour it had when `console_init` ran.

To change the colour of *new* output without touching what is already on screen, use `console_cursor_color` instead.

----

### `CLEAR`

```c
void	CONSOLE_CLEAR(struct S_CONSOLE *);
void	console_clear(struct s_console *);
```

Blanks the screen buffer and puts the cursor back at the top left.

----

### `LOG`

```c
void	CONSOLE_LOG(struct S_CONSOLE *, char *);
void	console_log(struct s_console *, char *);
```

Writes a string at the cursor and advances it. This is the one call every other text function is built on, so anything that affects `log` affects all of them.

----

### `WARNING`, `ERROR`, `WARNING_AT`, `ERROR_AT`

```c
void	CONSOLE_WARNING(struct S_CONSOLE *, char *);
void	console_warning(struct s_console *, char *);
void	CONSOLE_ERROR(struct S_CONSOLE *, char *);
void	console_error(struct s_console *, char *);
void	CONSOLE_WARNING_AT(struct S_CONSOLE *, char *, char *, unsigned int);
void	console_warning_at(struct s_console *, char *, char *, unsigned int);
void	CONSOLE_ERROR_AT(struct S_CONSOLE *, char *, char *, unsigned int);
void	console_error_at(struct s_console *, char *, char *, unsigned int);
```

Same as `log` with a coloured prefix. The `_at` forms take a file name and a line number and print them with the message.

`LOG_CURRENT` expands to `__FILE__, __LINE__`, so it fills both of those in for you:

```c
#define LOG_CURRENT __FILE__, __LINE__
```

Example:

```c
console_warning(&con, "something looks odd\n");
console_error_at(&con, "could not open the file\n", LOG_CURRENT);
```

> ### 💡 `WARNING_HERE` and `ERROR_HERE`
> Those two shortcut macros belong to the object and C++ interfaces, where the console is implied. In plain C the console has to be passed, so write `console_warning_at(&con, "...", LOG_CURRENT)` instead.

----

### `PRINT`

```c
void	CONSOLE_PRINT(struct S_CONSOLE *, const char *, VA_ARGS);
void	console_print(struct s_console *, const char *, va_args);
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
console_print(&con, "[%5d] [%-5d] [%05d]\n", 42, 42, 42);
console_print(&con, "[%#x] [%#b] [%.3s]\n", 255, 5, "abcdefg");
```

> ### ⚠️ One deviation
> `%.0f` of `2.5` prints `3`. Rounding is half away from zero, not half to even.
> 
> Banker's rounding without `libm` costs more than it is worth for a console logger.

----

### `PUSH`, `POP`

```c
void	CONSOLE_PUSH(struct S_CONSOLE *);
void	console_push(struct s_console *);
void	CONSOLE_POP(struct S_CONSOLE *);
void	console_pop(struct s_console *);
```

Collects log output in memory instead of drawing it, and releases it all at once on `pop`. Useful when you want a block of text to appear without flicker.

`push` nests; only the outermost `pop` flushes.

Example:

```c
console_push(&con);
console_log(&con, "these three lines\n");
console_log(&con, "appear together\n");
console_log(&con, "when pop runs\n");
console_pop(&con);
```

> ### ⚠️ Only sequential output is buffered
> Positional functions (`console_put_*`) go straight to the screen even between `push` and `pop`. Replaying a positioned write later would land it in the wrong place, so buffering it would be worse than not buffering it.

----

### `PUT_STRING`

```c
void	CONSOLE_PUT_STRING(struct S_CONSOLE *, char *, unsigned int, unsigned int);
void	console_put_string(struct s_console *, char *, unsigned int, unsigned int);
void	CONSOLE_PUT_COLORED_STRING(struct S_CONSOLE *, char *, unsigned int, unsigned int, unsigned int);
void	console_put_colored_string(struct s_console *, char *, unsigned int, unsigned int, unsigned int);
```

Writes a string at a position. Arguments are console, string, x, y - and for the coloured form, console, string, colour, x, y.

Example:

```c
console_put_colored_string(&con, "MENU", 0X4F, 7, 3);
```

----

### `PUT_LINE`

```c
void	CONSOLE_PUT_LINE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_line(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_COLORED_LINE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_colored_line(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

A straight line between two cells, drawn with Bresenham's algorithm.

Example:

```c
console_put_line(&con, '#', 10, 10, 40, 20);
```

----

### `PUT_CURVE`

```c
void	CONSOLE_PUT_CURVE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
void	console_put_curve(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
void	CONSOLE_PUT_COLORED_CURVE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
void	console_put_colored_curve(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, float);
```

A cubic Bézier between two points. The two floats are the **bulge in cells** at each end, measured perpendicular to the straight line between the points.

| Floats        | Shape                      |
| ------------- | -------------------------- |
| `0.0F, 0.0F`  | a straight line            |
| `4.0F, 4.0F`  | an arc bulging to one side |
| `4.0F, -4.0F` | an S curve                 |

Example:

```c
console_put_curve(&con, '.', 2, 24, 50, 24, 4.0F, -4.0F);
```

----

### `PUT_FRAME`, `PUT_RECTANGLE`

```c
void	CONSOLE_PUT_FRAME(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_frame(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_RECTANGLE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_rectangle(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_COLORED_FRAME(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_colored_frame(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_COLORED_RECTANGLE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_colored_rectangle(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

`frame` draws the outline of a box. `rectangle` fills it. The four numbers are the two opposite corners: x start, y start, x end, y end.

----

### `PUT_FRAME_RADIUS`, `PUT_RECTANGLE_RADIUS`

```c
void	CONSOLE_PUT_FRAME_RADIUS(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_frame_radius(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_RECTANGLE_RADIUS(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_rectangle_radius(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_COLORED_FRAME_RADIUS(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_colored_frame_radius(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_COLORED_RECTANGLE_RADIUS(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_colored_rectangle_radius(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

The same two shapes with rounded corners. The last argument is the corner radius in cells. A radius of `0` gives the square version, and a radius larger than the box is clamped.

Example:

```c
console_put_colored_frame_radius(&con, '*', 0X0B, 2, 2, 30, 10, 3);
```

----

### `PUT_CIRCLE`, `PUT_ELLIPSE`

```c
void	CONSOLE_PUT_CIRCLE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_circle(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_ELLIPSE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_ellipse(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_COLORED_CIRCLE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_colored_circle(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	CONSOLE_PUT_COLORED_ELLIPSE(struct S_CONSOLE *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void	console_put_colored_ellipse(struct s_console *, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
```

Both are bounded by the rectangle you give them (two opposite corners, not a centre and a radius), so both are ellipses in the general case. `circle` draws the **outline**, `ellipse` draws it **filled**.

----

### `CURSOR_COLOR`, `CURSOR_DEFAULT_COLOR`

```c
void	CONSOLE_CURSOR_COLOR(struct S_CONSOLE *, unsigned int);
void	console_cursor_color(struct s_console *, unsigned int);
void	CONSOLE_CURSOR_DEFAULT_COLOR(struct S_CONSOLE *);
void	console_cursor_default_color(struct s_console *);
```

Sets the attribute used for output from here on, without touching what is already on the screen. This is also the pen the plain `console_put_*` shapes draw with.

----

### `CURSOR_X`, `CURSOR_Y`, `CURSOR_XY`

```c
void	CONSOLE_CURSOR_X(struct S_CONSOLE *, unsigned int);
void	console_cursor_x(struct s_console *, unsigned int);
void	CONSOLE_CURSOR_Y(struct S_CONSOLE *, unsigned int);
void	console_cursor_y(struct s_console *, unsigned int);
void	CONSOLE_CURSOR_XY(struct S_CONSOLE *, unsigned int, unsigned int);
void	console_cursor_xy(struct s_console *, unsigned int, unsigned int);
```

Moves the cursor to an absolute cell.

----

### `CURSOR_MOVE_X`, `CURSOR_MOVE_Y`, `CURSOR_MOVE_XY`

```c
void	CONSOLE_CURSOR_MOVE_X(struct S_CONSOLE *, int);
void	console_cursor_move_x(struct s_console *, int);
void	CONSOLE_CURSOR_MOVE_Y(struct S_CONSOLE *, int);
void	console_cursor_move_y(struct s_console *, int);
void	CONSOLE_CURSOR_MOVE_XY(struct S_CONSOLE *, int, int);
void	console_cursor_move_xy(struct s_console *, int, int);
```

Moves the cursor **relative** to where it is. The arguments are signed and the result is clamped at the screen edges.

Example:

```c
console_cursor_xy(&con, 4, 4);
console_cursor_move_xy(&con, 2, -1); /* now at 6, 3 */
```

----

### `CURSOR_SHOW`, `CURSOR_SIZE`

```c
void	CONSOLE_CURSOR_SHOW(struct S_CONSOLE *, BOOLEAN);
void	console_cursor_show(struct s_console *, boolean);
void	CONSOLE_CURSOR_SIZE(struct S_CONSOLE *, unsigned long);
void	console_cursor_size(struct s_console *, unsigned long);
```

`show` turns the caret on or off. `size` is the fill percentage of the cell, from `1` to `100`.

----

### `EXPORT`, `IMPORT`

```c
PTR		CONSOLE_EXPORT(struct S_CONSOLE *);
ptr		console_export(struct s_console *);
void	CONSOLE_IMPORT(struct S_CONSOLE *, PTR);
void	console_import(struct s_console *, ptr);
```

`export` takes a snapshot of the whole screen - characters, attributes, cursor position and colours - and returns it as one block. `import` puts it back. `export` returns `NULL` if the block could not be allocated.

The block is **yours**. Release it with `FREE` from `OS_API/MEMORY.H`:

```c
ptr	snapshot = console_export(&con);

console_clear(&con);
/* ... */
console_import(&con, snapshot);
FREE(snapshot);
```

`import` checks a magic value and a version, and replays the snapshot row by row when the console has been resized since, so restoring into a different sized window does the sane thing instead of shearing. A snapshot from one structure can be imported into another.

----

### `GET_LINE`, `GET_AREA`

```c
char	*CONSOLE_GET_LINE(struct S_CONSOLE *, unsigned int, unsigned int, unsigned int, unsigned int);
char	*console_get_line(struct s_console *, unsigned int, unsigned int, unsigned int, unsigned int);
char	**CONSOLE_GET_AREA(struct S_CONSOLE *, unsigned int, unsigned int, unsigned int, unsigned int);
char	**console_get_area(struct s_console *, unsigned int, unsigned int, unsigned int, unsigned int);
```

`get_line` reads the wrapping span between two buffer positions and returns a NUL-terminated string. `get_area` reads a rectangle and returns a NULL-terminated array of rows. Both return `NULL` when the request lies completely outside the buffer.

Example:

```c
char	*text = console_get_line(&con, 4, 6, 12, 6);

console_print(&con, "[%s]\n", text);
```

> ### ⚠️ They share one buffer
> Both return memory owned by the structure, valid **only until the next call to either one** on that same structure. Use the result before you call again, or copy it out. This is wrong:
> ```c
> char	*line = console_get_line(&con, 4, 3, 12, 3);
> char	**area = console_get_area(&con, 4, 2, 12, 5); /* overwrites line */
> 
> console_print(&con, "%s\n", line); /* garbage */
> ```
> You do not free either of them; `console_destroy` does it.

----

### `INPUT_WAIT_*`

```c
void	CONSOLE_INPUT_WAIT_ANY(struct S_CONSOLE *);
void	console_input_wait_any(struct s_console *);
void	CONSOLE_INPUT_WAIT_KEY(struct S_CONSOLE *);
void	console_input_wait_key(struct s_console *);
void	CONSOLE_INPUT_WAIT_MOUSE(struct S_CONSOLE *);
void	console_input_wait_mouse(struct s_console *);
void	CONSOLE_INPUT_WAIT_MOUSE_ACTION(struct S_CONSOLE *);
void	console_input_wait_mouse_action(struct s_console *);
void	CONSOLE_INPUT_WAIT_MOUSE_MOVE(struct S_CONSOLE *);
void	console_input_wait_mouse_move(struct s_console *);
```

Blocks until the matching event arrives. `mouse_action` waits for a button or a wheel and ignores movement; `mouse_move` waits for movement only; `any` returns on the first event of any kind.

While waiting, any `event` callback you have set is dispatched, so a wait loop doubles as an event pump.

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

The result of the last wait, read straight from the structure.

`key` packs two values into one integer: the virtual key code in the high half and the character in the low half.

```c
console_input_wait_key(&con);

console_print(&con, "virtual key 0x%02X, character '%c'\n",
	con.input.get.key >> 16,
	(char)(con.input.get.key & 0xFF));
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

Plain function pointers inside the structure. Assign a function to any of them and it fires from inside `console_input_wait_*`. `console_init` sets all of them to null.

`on_key` receives the same packed value as `input.get.key`; `on_mouse` receives the packed state followed by x and y.

The callbacks are not told which structure they came from. If you need it, keep the structure where the callback can reach it (a global, or a `static` next to the function).

Example:

```c
static struct s_console	con;

void	my_key(unsigned int key)
{
	console_print(&con, "key 0x%08X\n", key);
}

int	main(void)
{
	console_init(&con);
	con.event.on_key = my_key;
	console_input_wait_key(&con);
	console_destroy(&con);
	return (0);
}
```

> ### ⚠️ `on_close` is not wired
> It needs `SetConsoleCtrlHandler`, whose handler runs on its own thread. The member exists and is null; nothing calls it yet.

----

### `GET.*`

Read only. Everything here is `const` and maintained by the functions; writing to it is not supported.

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

Example:

```c
if (!con.get.active)
	return (1); /* launched without a console */
```

----

### `HIGHLIGHTER`

```c
BOOLEAN	HIGHLIGHTER;
boolean	highlighter;
```

When true, `warning` and `error` colour their prefix. Set it to `FALSE` for plain output, for example when you are piping to a file. `console_init` sets it to `TRUE`.

```c
con.highlighter = FALSE;
```

----

## Notes

### Nothing fails silently

Functions that cannot do their job print a warning saying which entry point or which condition stopped them, rather than returning quietly. If a call appears to do nothing and says nothing, that is a bug worth reporting.

### Old compilers

The header carries a K&R declaration of every function, used automatically when `KNR_STYLE` is set, so the interface builds on compilers that predate ANSI prototypes.

Two linkers need the names changed, and the header does it for you, so your source stays the same:

* **IBM z/OS (MVS)** only keeps 8 characters of an external name. Every function is renamed to an 8-character alias (`console_put_line` becomes `mtlccptl`, `CONSOLE_PUT_LINE` becomes `CMTCCPTL`).
* **MetaWare High C** cannot link lower case function names, so each lower case function gets an upper case alias (`console_log` links as `L_CONSOLE_LOG`).

## References

- [Console Functions - microsoft.com](https://learn.microsoft.com/en-us/windows/console/console-functions)
- [SetConsoleScreenBufferSize - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsolescreenbuffersize)
- [SetConsoleWindowInfo - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsolewindowinfo)
- [SetConsoleTitle - microsoft.com](https://learn.microsoft.com/en-us/windows/console/setconsoletitle)
- [AllocConsole - microsoft.com](https://learn.microsoft.com/en-us/windows/console/allocconsole)
- [INPUT_RECORD structure - microsoft.com](https://learn.microsoft.com/en-us/windows/console/input-record-str)
- [Virtual-Key Codes - microsoft.com](https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes)
- [Bresenham's line algorithm - Jack E. Bresenham, IBM Systems Journal (1965)](https://ieeexplore.ieee.org/document/5388473)
- [A Rasterizing Algorithm for Drawing Curves - Alois Zingl](http://members.chello.at/easyfilter/Bresenham.pdf)
