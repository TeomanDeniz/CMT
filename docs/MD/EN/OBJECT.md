# OBJECT

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/OBJECT.gif"/>
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

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

**OBJECT** provides **C-style object-oriented programming**:

 * Object definitions (`object`)
 * Stack constructors (`obj`) and heap constructors (`new`)
 * Automatic destructor dispatch on heap release (`delete`), driven by an injected `__DESTRUCTOR__` member
 * Bound methods through runtime generated trampolines
 * Assembly-level injection for performance
 * Pluggable heap allocator/deallocator per object type (`OBJECT__PROTOTYPE_ALLOC` / `OBJECT__PROTOTYPE_FREE`)
 * Cross-platform support (16/32/64-bit Intel) and major compilers
 * Memory-efficient and flexible

## Contents

| Contents List                                |
| -------------------------------------------- |
| `#define OBJECT`                             |
| `#define object`                             |
| `#define OBJ(OBJECT_NAME, VARIABLE_NAME)`    |
| `#define obj(object_name, variable_name)`    |
| `#define NEW(OBJECT_NAME, VARIABLE_NAME)`    |
| `#define new(object_name, variable_name)`    |
| `#define DELETE(OBJECT_POINTER)`             |
| `#define delete(object_pointer)`             |
| `#define DESTROY(THE_OBJECT)`                |
| `#define destroy(the_object)`                |
| `#define OBJECT__CONNECT(OBJECT_TYPE_NAME)`  |
| `#define object__connect(object_type_name)`  |
| `#define OBJECT__PROTOTYPE_ALLOC(ALLOC)`     |
| `#define object__prototype_alloc(alloc)`     |
| `#define OBJECT__PROTOTYPE_FREE(FREE)`       |
| `#define object__prototype_free(free)`       |
| `#define OBJECT__INJECT(TARGET, SOURCE)`     |
| `#define object__inject(target, source)`     |
| `#define OBJECT__EJECT(MEMBER_NAME)`         |
| `#define object__eject(member_name)`         |
| `#define OBJECT__INITIALIZE(VARIABLE, TYPE)` |
| `#define object__initialize(variable, type)` |
| `#define OBJECT__COPY(DST, SRC)`             |
| `#define object__copy(dst, src)`             |

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

----

### OBJ

```c
#define OBJ(OBJECT_NAME, VARIABLE_NAME)
#define obj(object_name, variable_name)
```

Instantiates an object **on the stack**.

The variable is a plain object value, so its members are reached with `.`.

Calling `OBJ` automatically invokes the constructor.

Call `DESTROY` on the object when it's done with, to run its `__DESTRUCTOR__` and free that destructor's own trampoline (see [`DESTROY`](#destroy)). There is no allocation to release for a stack object - it goes away with its scope as usual.

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

Since the macro expands to an ordinary declaration, qualifiers and attributes may be written in front of it:

```c
const obj (o_test, test) (42);

test.setName("test");
```

----

### NEW

```c
#define NEW(OBJECT_NAME, VARIABLE_NAME)
#define new(object_name, variable_name)
```

Instantiates an object **on the heap**.

The variable is a pointer to the object, so its members are reached with `->`.

The allocation is checked before the constructor runs: if `ALLOC` fails, the variable is `NULL` and the constructor is never called.

Unlike `OBJ`, heap instances own their storage. Call `DELETE` on the object when it's done with - it runs `__DESTRUCTOR__`, frees that destructor's trampoline, then releases the underlying allocation and nulls the pointer (see [`DELETE`](#delete)).

Usage:
```c
new (o_test, test) ();
```
With parameters:
```c
new (o_test, test) (42, "test");
```

Because the object lives on the heap, it can outlive the scope it was created in and be returned from a function:

```c
void	*a_function(void)
{
	new (test_object_type, result) (1);

	return (result);
}
```

Qualifiers work here too. Note that `const` makes the *object* read-only, so its fields can no longer be assigned directly and have to go through a method:

```c
const new (test_object_type, test) (42);

test->set(33);
// test->value = 33; -> error: assignment of member 'value' in read-only object
```

----

### The `__DESTRUCTOR__` convention

Both `DELETE` and `DESTROY` (below) call a member named exactly `__DESTRUCTOR__` on the object. This member is **not** created automatically - like every other bound method, it has to be injected by the constructor with `object__inject`:

```c
object o_test
{
	void	(*test)(void);
	void	(*__DESTRUCTOR__)(void);
};

void my_destructor(void)
{
	object__connect (o_test);

	object__eject (this->test); // eject every OTHER member here
}

void o_test(void)
{
	object__connect (o_test);

	object__inject (this->test, test);
	object__inject (this->__DESTRUCTOR__, my_destructor);
}
```

> ⚠️ The name is **always uppercase**, exactly `__DESTRUCTOR__`, regardless of whether the object was declared with the uppercase or lowercase macro family. The double-underscore, all-caps shape is the signal that this member is framework-recognized and reserved: don't reuse it for anything else, and don't rely on any other casing being recognized by `DELETE`/`DESTROY`.

Nothing checks that `__DESTRUCTOR__` was actually injected. Calling `DELETE` or `DESTROY` on an object whose constructor never injected `__DESTRUCTOR__` jumps through an uninitialized function pointer. Every `object` used with `DELETE`/`DESTROY` **must** declare and inject `__DESTRUCTOR__`.

The destructor's own job is to eject every *other* injected member of the object (see [`OBJECT__EJECT`](#object__eject) below) - `DELETE`/`DESTROY` only take care of the destructor member itself and, for `DELETE`, the underlying allocation.

----

### DELETE

```c
#define DELETE(OBJECT_POINTER)
#define delete(object_pointer)
```

Releases an object that was created **on the heap** with `NEW`.

The argument is the object pointer itself, so from outside it is the variable `NEW` produced, and from inside a method it is simply `THIS`:

```c
new (o_test, test) ();
...
delete (test);
```

```c
void	free_self(void)
{
	object__connect (o_test);

	delete (this);
}
```

`DELETE` is a no-op on a null pointer. Otherwise it, in order:

 1. Calls `OBJECT_POINTER->__DESTRUCTOR__()`.
 2. Frees the executable trampoline behind `__DESTRUCTOR__` itself.
 3. Recovers the allocator/freer pair that was stored for this object when it was created (by `NEW`, or by `OBJECT__PROTOTYPE_ALLOC`/`OBJECT__PROTOTYPE_FREE`, see below), and calls it on the allocation.
 4. Sets `OBJECT_POINTER` to `0`.

The destructor is still responsible for ejecting every **other** injected member first - `DELETE` does not walk the object's members, it only knows about `__DESTRUCTOR__` and the underlying allocation:

```c
void	my_destructor(void)
{
	object__connect (o_test);

	object__eject (this->test); // every member except __DESTRUCTOR__ itself
}

void	free_self(void)
{
	object__connect (o_test);

	delete (this); // runs __DESTRUCTOR__ (ejects `test`), then frees
}
```

Because step 2 and the pointer-null happen automatically, nothing needs to be ejected or nulled by hand for the destructor member or the allocation itself - only the object's *other* bound methods need an explicit `object__eject` inside the destructor.

After the call the pointer is `0`; nothing in the object may be touched again.

`DELETE` is heap-only. Calling it on a stack object (created with `obj`) is undefined - use `DESTROY` for those instead.

If the pointer was declared `const`, delete it from inside a method, where the `this` produced by `OBJECT__CONNECT` carries no qualifier, or cast it at the call site - depending on how strict the compiler is about qualifiers on `free`.

----

### DESTROY

```c
#define DESTROY(THE_OBJECT)
#define destroy(the_object)
```

Runs the destructor of an object that lives **on the stack** (created with `OBJ`/`obj`). It calls `THE_OBJECT.__DESTRUCTOR__()` and frees that destructor's own trampoline - nothing else.

```c
obj (o_test, test) ();
...
destroy (test);
```

Unlike `DELETE`, `DESTROY` does not check for null, does not touch any allocation, and does not null out its argument - there is no allocation to release for a stack object, and the variable itself goes out of scope normally at the end of the block. As with `DELETE`, the destructor function is still responsible for ejecting every other injected member:

```c
void	my_destructor(void)
{
	object__connect (o_test);

	object__eject (this->test);
}

obj (o_test, test) ();
...
destroy (test); // runs __DESTRUCTOR__, frees its trampoline
```

`DESTROY` does not distinguish stack objects from heap objects by itself - calling it on a heap pointer runs the destructor and frees its trampoline but leaks the object allocation, since only `DELETE` knows how to give that back. Use `DESTROY` for stack objects and `DELETE` for heap objects.

----

### OBJECT__CONNECT

```c
#define OBJECT__CONNECT(OBJECT_TYPE_NAME)
#define object__connect(object_type_name)
```

Connects a function to an object instance.

This macro defines a pointer named `THIS` (or `this` in the lowercase form) that refers to the parent object. It reads the object address straight out of the register the trampoline placed it in, so it must be the **first statement** of the function.

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

### OBJECT__PROTOTYPE_ALLOC / OBJECT__PROTOTYPE_FREE

```c
#define OBJECT__PROTOTYPE_ALLOC(ALLOCATOR)
#define OBJECT__PROTOTYPE_FREE(FREER)
```

By default, a heap object created with `NEW` is allocated with `ALLOC` and released with `FREE`. `OBJECT__PROTOTYPE_ALLOC`/`OBJECT__PROTOTYPE_FREE` let a constructor override that pair for its own object type - for example, to use a pool allocator, a tracking allocator, or anything else with the same signature as `ALLOC`/`FREE`.

Both go where `OBJECT__CONNECT` would otherwise go, as the **first statement** of the constructor, and both are needed together - `MY_ALLOCATOR` performs the allocation but does **not** by itself record what to call to free it; `MY_FREER` records that:

```c
void o_test(void)
{
	OBJECT__PROTOTYPE_ALLOC (my_alloc);
	OBJECT__PROTOTYPE_FREE (my_free);

	OBJECT__CONNECT (o_test);

	...
}
```

`ALLOCATOR` must accept a single `LET` size and return a `PTR`, exactly like `ALLOC`. `FREER` must accept a single `PTR` and return `void`, exactly like `FREE`; it is what `DELETE` will call on the allocation later.

> ⚠️ **Always pair these.** `OBJECT__PROTOTYPE_ALLOC` on its own leaves the allocation's stored free-function uninitialized - `DELETE` will read garbage there and call it, which is undefined behavior. There is no compiler check for "the constructor called the allocator but forgot the freer": it is the constructor author's responsibility to always call both, in that order, every time the object type is constructed.
> 
> If a constructor only needs a custom allocator but the *default* freer (`FREE`) is still correct for it, call `OBJECT__PROTOTYPE_FREE (FREE)` explicitly rather than assuming the slot defaults to it.

----

### OBJECT__INJECT

```c
#define OBJECT__INJECT(TARGET, SOURCE)
#define object__inject(target, source)
```

Used to inject a function into an object instance.

Functions are **not** automatically bound; injection must be done manually, usually inside the constructor.

`TARGET` is the member that will hold the bound method, `SOURCE` is the plain function that implements it. Both names are given explicitly, so the member and the function do not have to share a name:

```cpp
void o_object(int a)
{
	object__connect (o_object);

	object__inject (this->test, test); // this->test  = test
	object__inject (this->abc, test); // this->abc = test
	object__inject (struct_ptr->abc, test); // any lvalue works

	this->value = a;
}
```

Under the hood the macro assembles a small trampoline that loads the object address into a register and jumps to `SOURCE`, then copies it into executable memory with `ALLOC_EXE`. That trampoline is what makes `OBJECT__CONNECT` able to recover `this`, and it is why every injected member owns a small executable allocation that has to be released again with `OBJECT__EJECT`.

----

### OBJECT__EJECT

```c
#define OBJECT__EJECT(MEMBER_NAME)
#define object__eject(member_name)
```

Releases the executable trampoline behind an injected member. Every bound method injected with `OBJECT__INJECT` owns one such allocation, and it has to be given back explicitly - nothing does this automatically except `__DESTRUCTOR__`'s own trampoline, which `DELETE`/`DESTROY` free by themselves.

The natural place to eject every *other* member is the object's own `__DESTRUCTOR__` function, so a single call to `delete`/`destroy` cleans up the whole object:

```cpp
object o_test
{
	void	(*test)(void);
	void	(*__DESTRUCTOR__)(void);
};

void test(void)
{
	object__connect (o_test);
}

void my_destructor(void)
{
	object__connect (o_test);

	object__eject (this->test); // every member except __DESTRUCTOR__ itself
}

void o_test(void)
{
	object__connect (o_test);

	object__inject (this->test, test);
	object__inject (this->__DESTRUCTOR__, my_destructor);
}
```

Do **not** eject `__DESTRUCTOR__`'s own member from inside itself - `DELETE` and `DESTROY` free that trampoline right after calling it, so ejecting it manually as well would double-free it.

For objects created with `new`, ejecting only gives back the executable memory of the injected methods. The object allocation itself is released by `DELETE` (see [`DELETE`](#delete)), not by `OBJECT__EJECT`.

----

### OBJECT__INITIALIZE

```c
#define OBJECT__INITIALIZE(VARIABLE, TYPE)
#define object__initialize(variable, type)
```

Used to initialize or modify a variable that is normally declared as `const`, while keeping the variable read-only to normal user code.

`VARIABLE` is the variable or object member to initialize, and `TYPE` is its declared type:

```cpp
object test_object_type
{
	void        (*add)(int);
	const int   value;
	void        (*free)(void);
};

void test_object_type(int start_var)
{
	object__connect (test_object_type);

	object__initialize (this->value, int) = start_var;
}
```

Once initialized, `value` can be read normally:

```cpp
printf("%d\n", test.value);
```

But attempting to modify it directly is rejected by the compiler:

```cpp
test.value = 33; // Error: value is const
```

When modification is required internally, `object__initialize` can be used again to access the underlying storage:

```cpp
object__initialize (test.value, int) = 33;
```

The macro works by taking the address of `VARIABLE`, casting that address to a pointer to `TYPE`, and dereferencing it:

```c
*(TYPE *)(&VARIABLE)
```

This allows the object implementation to write to storage declared as `const` without removing the `const` qualifier from the public object interface.

The intended use is for object members that should be **readable by the user but only writable by the object implementation**, such as internal state, configuration values, or constructor-initialized properties.

For example:

```cpp
object test_object_type
{
	const int value;
};

void test_object_type(int start_var)
{
	object__connect (test_object_type);

	object__initialize (this->value, int) = start_var;
}
```

The user can then read the value:

```cpp
printf("%d\n", test.value);
```

while direct modification is prevented:

```cpp
test.value = 33; // Error
```

The implementation can still explicitly initialize or update the value:

```cpp
object__initialize (test.value, int) = 33;
```

> `OBJECT__INITIALIZE` and `object__initialize` are equivalent forms. The uppercase form follows the macro naming convention, while the lowercase form is intended for normal object-oriented usage.

----

### OBJECT__COPY

```c
#define OBJECT__COPY(DST, SRC)
#define object__copy(dst, src)
```

It copies your object to destination.

You can also use memcpy for that instead of this macro.

And be aware: this is not creating a new object!!!

Example:
```c
object o_object test;
obj (o_object, test2) ();

object__copy (&test, &test2);
// Now both test and test2 are same
```

## Full Example

```cpp
#define INCL_CMT_OBJECT // DEFINE OOP
#include "CMT/CMT.H"
#include <stdio.h>

object test_object_type
{
	void	(*add)(int);
	void	(*set)(int);
	int		value;
	void	(*__DESTRUCTOR__)(void);
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

void	my_destructor(void)
{
	object__connect (test_object_type);

	object__eject (this->add);
	object__eject (this->set);
	// __DESTRUCTOR__'s own trampoline is freed automatically
	// by DELETE/DESTROY - don't eject it here yourself
}

void	test_object_type(int start_var)
{
	object__connect (test_object_type);

	object__inject (this->add, add);
	object__inject (this->set, set);
	object__inject (this->__DESTRUCTOR__, my_destructor);
	this->value = start_var;
}

void	*a_function(void)
{
	new (test_object_type, result) (1); // Heap

	return (result);
}

int	main(void)
{
	object test_object_type	*a;

	// Yeah, variable attributes works too
	const new (test_object_type, test_h) (42);
	obj (test_object_type, test_s) (22); // Stack

	printf("%d\n", test_h->value); // 42
	test_h->add(42);
	printf("%d\n", test_h->value); // 84
	printf("%d\n", test_s.value); // 22

	test_s.value = 33;
	test_h->set(33); // I needed to do this in C++ way.
	// test_h->value = 33;
	// error: assignment of member 'value' in read-only object

	printf("%d\n", test_h->value); // 33
	printf("%d\n", test_s.value); // 33

	delete (test_h); // Heap: runs __DESTRUCTOR__, then frees the allocation
	destroy (test_s); // Stack: runs __DESTRUCTOR__ only, nothing to free

	a = a_function();
	printf("%d\n", a->value); // 1
	delete (a);
	return (0);
}
```

## Notes

Trampolines are currently generated for **Intel** CPUs in 16, 32 and 64-bit mode. ARM and PowerPC are work in progress.

The header suppresses the stack protector around its own code, because GCC's canary prologue clobbers the register the trampoline delivers the object pointer in. The suppression is pushed and popped, so it does not leak into the translation unit that included the header.

## References

 - [**BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES.pdf** - CMT](https://docs.google.com/viewer?url=https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/ARTICLES/EN/BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES.pdf)
