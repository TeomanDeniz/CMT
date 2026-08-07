# TRY_CATCH

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/TRY_CATCH.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/KEYWORDS/TRY_CATCH.H](https://github.com/TeomanDeniz/CMT/blob/main/KEYWORDS/TRY_CATCH.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_TRY_CATCH
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/KEYWORDS/TRY_CATCH.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

Provides a lightweight exception-style control flow interface for C based on `setjmp`/`longjmp`.

Rather than requiring compiler-specific language extensions, `TRY_CATCH.H` implements portable `TRY`, `CATCH`, and `THROW` constructs using the standard C runtime.

Nested `TRY` blocks are fully supported, allowing exceptions to propagate to the most recently active handler.

When an exception is thrown, execution immediately transfers to the matching `CATCH` block, carrying a user-defined value that represents the exception.

The result is a simple, compiler-independent exception mechanism that closely resembles higher-level language exception handling while remaining entirely compatible with standard C.

## Contents

| Contents List                   |
| ------------------------------- |
| `#define TRY`                   |
| `#define try`                   |
| `#define CATCH(ERROR_VARIABLE)` |
| `#define catch(error_variable)` |
| `static int THROW(VAR);`        |
| `static int throw(var);`        |
| `#define IS_IN_TRY`             |
| `#define is_in_try`             |

----

### TRY

```c
#define TRY
#define try
```

Begins a protected execution block.

If no exception is thrown, execution continues normally through the block. Exceptions raised with `THROW` immediately transfer execution to the matching `CATCH` block.

#### Example

```c
TRY
{
	printf("Before exception.\n");
	THROW("Something went wrong.");
	printf("This line is never reached.\n");
}
CATCH(var error)
{
	printf("%s\n", error);
}
```

----

### CATCH

```c
#define CATCH(ERROR_VARIABLE)
#define catch(error_variable)
```

Handles an exception raised by a matching `TRY` block.

The specified variable receives the value supplied to `THROW`. If no exception was thrown, the `CATCH` block is skipped.

#### Example

```c
PTR error;

TRY
{
	THROW("File not found.");
}
CATCH(error)
{
	printf("Error: %s\n", (char *)error);
}
```

----

### THROW

```c
static int	THROW(VAR);
static int	throw(var);
```

Raises an exception from within an active `TRY` block.

Execution immediately leaves the current protected block and resumes in its matching `CATCH` block, passing the supplied value as the exception.

If no `TRY` block is currently active, the macro has no effect.

#### Example

```cpp
if (file == NULL)
{
	throw("Unable to open file.");
}
```

----

### IS_IN_TRY

```c
#define IS_IN_TRY
#define is_in_try
```

Evaluates to a non-zero value when execution is currently inside one or more active `TRY` blocks.

This can be used to determine whether calling `THROW` would transfer control to an exception handler.

#### Example

```c
if (IS_IN_TRY)
{
	THROW("Unexpected error.");
}
```

----

### Examples

#### Basic Try/Catch

```cpp
try
{
	if (1)
		throw (99);
}
catch (var err)
{
	printf("ERROR: %d\n", err);
}
```

----

#### TCC (Tiny C Compiler) Compatibility

Compilers like TCC do not allow variable declarations inside control clauses (e.g. `for (int a;...)`).

So, declare `var err;` outside the `catch()` scope:
```cpp
var	err;

try
{
	if (1)
		throw (99);
}
catch (err)
{
	printf("ERROR: %d\n", err);
}
```

----

#### Try/Catch Inside a Called Function

```cpp
#include <stdio.h>
#include "CMT/KEYWORDS/TRY_CATCH.H"

int test(void)
{
	if (is_in_try)
		throw ("test runned in TRY block");
	else
		return (-1);

	return (0);
}

int main(void)
{
	try
	{
		test();
	}
	catch (char *err)
	{
		printf("ERROR: %s\n", err);
	}

	return (0);
}
```

----

#### Nested Try/Catch

```cpp
try
{
	try {
		throw (42);
	}
	catch (var error) {
		printf("err_1: %d\n", error);
		throw (32);
	}
}
catch (var error)
{
	printf("err_2: %d\n", error);
}
```

----

#### Between `try` and `catch`

```cpp
void test()
{
	throw (0);
}

int	main(void)
{
	try
	{
		try
		{
			test();
		}
		catch (ptr error_message)
		{
			printf("[%s]\n", error_message);
		}

		throw ("2");
	}

	printf("Test\n"); // Yeah, you can also do that, it always prints "Test"

	catch (ptr error_message)
	{
		printf("[%s]\n", error_message);
	}

	return (0);
}
```
