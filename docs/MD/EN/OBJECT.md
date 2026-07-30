# OBJECT

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/OBJECT.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/OBJECT.H](https://github.com/TeomanDeniz/CMT/blob/main/OBJECT.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_OBJECT
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/OBJECT.H"
> ```

## Abstract

**OBJECT** provides **C-style object-oriented programming**:

* Object definitions (`object`)
* Stack constructors (`obj`) and heap constructors (`new`)
* Bound methods through runtime generated trampolines
* Assembly-level injection for performance
* Cross-platform support (16/32/64-bit Intel) and major compilers
* Memory-efficient and flexible

## Contents

| Contents List                                    |
| ------------------------------------------------ |
| `#define OBJECT`                                 |
| `#define object`                                 |
| `#define OBJ(OBJECT_NAME, VARIABLE_NAME)`        |
| `#define obj(object_name, variable_name)`        |
| `#define NEW(OBJECT_NAME, VARIABLE_NAME)`        |
| `#define new(object_name, variable_name)`        |
| `#define OBJECT__CONNECT(OBJECT_TYPE_NAME)`      |
| `#define object__connect(object_type_name)`      |
| `#define OBJECT__INJECT(TARGET, SOURCE)`         |
| `#define object__inject(target, source)`         |
| `#define OBJECT__EJECT(MEMBER_NAME)`             |
| `#define object__eject(member_name)`             |

### OBJECT

```c
#define OBJECT struct
#define object struct
```

Used to visually distinguish objects from regular structs.

This macro has no functional impact.

Example:
```c
object o_object
{
	void	(*worked)(int);
	int		value;
};
```

-----

### OBJ

```c
#define OBJ(OBJECT_NAME, VARIABLE_NAME)
#define obj(object_name, variable_name)
```

Instantiates an object **on the stack**.

The variable is a plain object value, so its members are reached with `.`.

Calling `obj` automatically invokes the constructor.

The constructor must be named exactly the same as the object type:

```c
object o_test
{
	...
};

void o_test()
{
	...
}
```

Constructors may accept parameters:

```c
void o_test(int arg, char *arg2)
{
	...
}
```

Usage:
```c
obj (o_test, test) ();
```
With parameters:
```c
obj (o_test, test) (42, "test");
```

Since the macro expands to an ordinary declaration, qualifiers and attributes
may be written in front of it:

```c
const obj (o_test, test) (42);
```

-----

### NEW

```c
#define NEW(OBJECT_NAME, VARIABLE_NAME)
#define new(object_name, variable_name)
```

Instantiates an object **on the heap**.

The variable is a pointer to the object, so its members are reached with `->`.

The allocation is checked before the constructor runs: if `ALLOC` fails, the
variable is `NULL` and the constructor is never called.

Usage:
```c
new (o_test, test) ();
```
With parameters:
```c
new (o_test, test) (42, "test");
```

Because the object lives on the heap, it can outlive the scope it was created
in and be returned from a function:

```c
void	*a_function(void)
{
	new (test_object_type, result) (1);

	return (result);
}
```

Qualifiers work here too. Note that `const` makes the *object* read-only, so
its fields can no longer be assigned directly and have to go through a method:

```c
const new (test_object_type, test) (42);

test->set(33);
/* test->value = 33; -> error: assignment of member 'value' in read-only object */
```

----

### OBJECT__CONNECT

```c
#define OBJECT__CONNECT(OBJECT_TYPE_NAME)
#define object__connect(object_type_name)
```

Connects a function to an object instance.

This macro defines a pointer named `THIS` (or `this` in the lowercase form)
that refers to the parent object. It reads the object address straight out of
the register the trampoline placed it in, so it must be the **first statement**
of the function.

**Examples**:
```c
void test1(int a)
{
	OBJECT__CONNECT (o_object);

	THIS->value = a;
}

void test2(int a)
{
	object__connect (o_object);

	this->value = a;
}
```

----

### OBJECT__INJECT

```c
#define OBJECT__INJECT(TARGET, SOURCE)
#define object__inject(target, source)
```

Used to inject a function into an object instance.

Functions are **not** automatically bound; injection must be done manually,
usually inside the constructor.

`TARGET` is the member that will hold the bound method, `SOURCE` is the plain
function that implements it. Both names are given explicitly, so the member and
the function do not have to share a name:

```c
void o_object(int a)
{
	object__connect (o_object);

	object__inject (this->test, test);       /* this->test  = test  */
	object__inject (this->abc, test);        /* this->abc   = test  */
	object__inject (struct_ptr->abc, test);  /* any lvalue works    */

	this->value = a;
}
```

Under the hood the macro assembles a small trampoline that loads the object
address into a register and jumps to `SOURCE`, then copies it into executable
memory with `ALLOC_EXE`. That trampoline is what makes `OBJECT__CONNECT` able
to recover `this`, and it is why every injected member owns a small executable
allocation that has to be released again with `OBJECT__EJECT`.

> The older `OBJECT__INJECT_2` / `OBJECT__INJECT_3` variants no longer exist.
> The two-argument form replaces all of them.

----

### OBJECT__EJECT

```c
#define OBJECT__EJECT(MEMBER_NAME)
#define object__eject(member_name)
```

Since no automatic destructor exists, members must be ejected manually.

A custom destructor must be implemented by the user.

Ejecting releases the trampoline behind a member, so the member that holds the
destructor itself has to be ejected **last**.

Example:
```c
object o_test
{
	void	(*free)(void);
	void	(*test)(void);
};

void test(void)
{
	object__connect (o_test);
}

void test_free(void)
{
	object__connect (o_test);

	object__eject (this->test);
	object__eject (this->free); /* Always on the end! */
}

void o_test(void)
{
	object__connect (o_test);

	object__inject (this->test, test);
	object__inject (this->free, test_free);
}
```

For objects created with `new`, ejecting only gives back the executable memory
of the injected methods. The object allocation itself still belongs to the
caller and has to be released separately.

## Full Example

```c
#define INCL_CMT_OBJECT /* DEFINE OOP */
#include "CMT/CMT.H"
#include <stdio.h>

object test_object_type
{
	void	(*add)(int);
	void	(*set)(int);
	int		value;
	void	(*free)(void);
};

void	add(int value)
{
	object__connect (test_object_type);

	this->value += value;
}

void	set(int value)
{
	object__connect (test_object_type);

	this->value = value;
}

void	free_self(void)
{
	object__connect (test_object_type);

	object__eject (this->add);
	object__eject (this->set);

	object__eject (this->free); /* Always on the end! */
}

void	test_object_type(int start_var)
{
	object__connect (test_object_type);

	object__inject (this->add, add);
	object__inject (this->set, set);
	object__inject (this->free, free_self);
	this->value = start_var;
}

void	*a_function(void)
{
	new (test_object_type, result) (1); /* Heap */

	return (result);
}

int	main(void)
{
	object test_object_type	*a;

	const new (test_object_type, test_h) (42); /* Yeah, variable attributes works too */
	obj (test_object_type, test_s) (22); /* Stack */

	printf("%d\n", test_h->value); /* 42 */
	test_h->add(42);
	printf("%d\n", test_h->value); /* 84 */
	printf("%d\n", test_s.value); /* 22 */

	test_s.value = 33;
	test_h->set(33); /* I needed to do this in C++ way. */
	/* test_h->value = 33; | error: assignment of member 'value' in read-only object */

	printf("%d\n", test_h->value); /* 33 */
	printf("%d\n", test_s.value); /* 33 */

	test_h->free();
	test_s.free();

	a = a_function();
	printf("%d\n", a->value); /* 1 */
	a->free();
	return (0);
}
```

## Notes

* Trampolines are currently generated for **Intel** CPUs in 16, 32 and 64-bit
  mode. ARM and PowerPC are work in progress.
* The header suppresses the stack protector around its own code, because GCC's
  canary prologue clobbers the register the trampoline delivers the object
  pointer in. The suppression is pushed and popped, so it does not leak into
  the translation unit that included the header.

## References

 - [**BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES.pdf** - CMT](https://docs.google.com/viewer?url=https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/ARTICLES/EN/BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES.pdf)
