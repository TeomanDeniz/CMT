# INLINE_ASM

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/INLINE_ASM.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/CHECK_FEATURE/INLINE_ASM.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/INLINE_ASM.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_INLINE_ASM
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/CHECK_FEATURE/INLINE_ASM.H"
> ```

## Abstract

This header indicates whether your compiler supports inline assembly and defines a specific macro that identifies which inline assembly syntax the compiler uses.

List of all compilers that support inline assembly:

| Compiler Name           | Supported CPUs                                                                                                                                             |
| ----------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ARM C Compiler          | ARM, AArch64                                                                                                                                               |
| ARM Compiler            | ARM (ARM/Thumb)                                                                                                                                            |
| Aztec C Compiler        | 6502, Z80, m68k                                                                                                                                            |
| Borland C Compiler      | x86 (16/32-bit), x86_64                                                                                                                                    |
| CC65                    | 6502/65C02                                                                                                                                                 |
| Clang                   | x86 (32-bit), x86_64, ARM, AArch64, PowerPC, RISC-V, MIPS, SystemZ, Hexagon                                                                                |
| Digital Mars Compiler   | x86 (32-bit)                                                                                                                                               |
| EKOPath                 | x86_64                                                                                                                                                     |
| GCC C/C++               | x86 (32-bit), x86_64, ARM, AArch64, PowerPC, RISC-V, MIPS, SPARC, SystemZ, AVR, MSP430, m68k, ColdFire, SH, Xtensa, ARC, MicroBlaze, Nios II, Alpha, IA-64 |
| Green Hill C/C++        | ARM, PowerPC, x86 (16/32-bit), x86_64                                                                                                                      |
| HP ANSI C               | PA-RISC, Itanium (IA-64)                                                                                                                                   |
| IAR C/C++               | ARM, AVR, MSP430, 8051, RL78, RX, RISC-V, STM8                                                                                                             |
| IBM XL C/C++ (Clang)    | PowerPC, z/Architecture                                                                                                                                    |
| ImageCraft C            | M8C / PSoC 1, AVR, ARM, MCS51 / 8051, HC11/HC12, MSP430                                                                                                    |
| Intel Compiler          | x86 (32-bit), x86_64, Intel Itanium                                                                                                                        |
| KEIL CARM               | ARM                                                                                                                                                        |
| KEIL C166               | C166                                                                                                                                                       |
| Metrowerks CodeWarrior  | ARM, PowerPC, m68k, ColdFire, HC12, HCS08, DSP56K                                                                                                          |
| Microsoft C Compiler    | x86 (32-bit)                                                                                                                                               |
| Oracle Solaris Studio   | x86, x86_64, SPARC                                                                                                                                         |
| Pelles C                | x86 (32-bit)                                                                                                                                               |
| Portland Group C/C++    | x86, x86_64, PowerPC (older)                                                                                                                               |
| Renesas C Compiler      | SH, H8, RX, RL78, M16C, V850                                                                                                                               |
| Small Device C Compiler | 8051 (MCS51), Z80, STM8, HC08                                                                                                                              |
| Tiny C Compiler         | x86 (32-bit), x86_64, ARM, AArch64                                                                                                                         |
| Turbo C Compiler        | x86 (16/32-bit)                                                                                                                                            |
| TI Compiler             | TMS320C6x, C28x, MSP430, ARM                                                                                                                               |
| VBCC                    | m68k, PowerPC, ARM                                                                                                                                         |
| Watcom C Compiler       | x86 (16/32-bit)                                                                                                                                            |
| Zortech C++             | x86 (16/32-bit)                                                                                                                                            |

## Contents

| Contents List                           |
| --------------------------------------- |
| `#define IS__INLINE_ASM__SUPPORTED`     |
| `#define INLINE_ASM_TYPE__AZTEC`        |
| `#define INLINE_ASM_TYPE__BORLAND`      |
| `#define INLINE_ASM_TYPE__CC65`         |
| `#define INLINE_ASM_TYPE__CODEWARRIOR`  |
| `#define INLINE_ASM_TYPE__DIGITAL_MARS` |
| `#define INLINE_ASM_TYPE__GNU`          |
| `#define INLINE_ASM_TYPE__IMAGECRAFT`   |
| `#define INLINE_ASM_TYPE__GNU_EXTENDED` |
| `#define INLINE_ASM_TYPE__KEIL_C166`    |
| `#define INLINE_ASM_TYPE__LATTICE`      |
| `#define INLINE_ASM_TYPE__MSVC`         |
| `#define INLINE_ASM_TYPE__RENESAS`      |
| `#define INLINE_ASM_TYPE__SDCC_OLD`     |
| `#define INLINE_ASM_TYPE__SDCC`         |
| `#define INLINE_ASM_TYPE__SOLARIS`      |
| `#define INLINE_ASM_TYPE__TI`           |
| `#define INLINE_ASM_TYPE__VBCC`         |
| `#define INLINE_ASM_TYPE__WATCOM`       |

----

### IS__INLINE_ASM__SUPPORTED

Defined if the compiler supports inline assembly.

----

### ACC (ARM C Compiler) - `INLINE_ASM_TYPE__MSVC`

```c
int VARIABLE_1;
int VARIABLE_2;
	
__asm
{
	MRS VARIABLE_1, CPSR /* COMMENT LINE */
	ORR VARIABLE_1, VARIABLE_1, #0x80
	BIC VARIABLE_1, VARIABLE_1, VARIABLE_2, LSL #7
	MSR CPSR_c, VARIABLE_1
}
```

----

### Aztec C Compiler - `INLINE_ASM_TYPE__AZTEC`

```c
#asm
* COMMENT LINE

LOAD equ $ffd5
	lda #0
	ldx #0
	ldy #$18
	jsr LOAD
	rts
#endasm
```

----

### Borland C Compiler - `INLINE_ASM_TYPE__BORLAND`

```c

asm mov ax, ds; /* COMMENT LINE */
asm {
	pop ax;
	pop ds;
	iret;
}
asm {
	pop ax /* COMMENT LINE */
	pop ds
	iret
}
asm push ds
```

----

### CC65 - `INLINE_ASM_TYPE__CC65`

```c
int foo;
int bar () { return 1; }

asm ("lda %v", foo);
__asm__ ("jsr %v", bar);
__asm__ (
	"lda #0\n" /* COMMENT LINE */
	"sta $0200\n"
	"inx\n"
	"dex\n"
	"jmp $F000\n"
);
```

----

### Clang - `INLINE_ASM_TYPE__GNU`

```c
asm volatile (
	"movl   %%eax, %%ebx\n" /* COMMENT LINE */
	"addl   %%ebx, %%esi" :::
);
asm volatile (
	"movl   %%eax, %%ebx\n" 
	"addl   %%ebx, %0" 
	 : 
	"=r"(out_var)
	::
);
```

----

### Digital Mars Compiler - `INLINE_ASM_TYPE__DIGITAL_MARS`

```c
short VARIABLE;

asm mov AX, VARIABLE

asm mov AH,2
asm mov DL,7
asm int 21H
asm
{
	mov AH,2 /* COMMENT LINE */
	mov DL,7
	int 21H
}
```

----

### EKOPath - `INLINE_ASM_TYPE__GNU`

No Document Found.

----

### GCC - `INLINE_ASM_TYPE__GNU`

```c
asm("int $3");
asm volatile (
	"mov %1, %0\n\t" /* COMMENT LINE */
	"add $1, %0"
	: "=r" (dst) 
	: "r" (src)
);
```

----

### Green Hill C/C++ - `INLINE_ASM_TYPE__GNU`

The documents are not being published and are inaccessible.

----

### HP ANSI C - `INLINE_ASM_TYPE__GNU`

No Document Found.

----

### IAR C/C++ - `INLINE_ASM_TYPE__LATTICE`

```c
int VARIABLE;
asm(
	"IN R0, PIND \n" /* COMMENT LINE */
	"STS VARIABLE, R0"
);
__asm("IN R0, PIND");
```

----

### IBM XL C/C++ - `INLINE_ASM_TYPE__GNU`

```c
int x = func1();
int y = func2();

asm(" LR %0, %1\n": "={r0}"(x) : "{r1}"(y));

asm(
	" SYSSTATE ARCHLVL=2\n" /* COMMENT LINE */
	" WTO 'This is a test',DESC=9,ROUTCDE=2 \\n"
);
asm(" dc x'b93c008a'" :::);
```

----

### ImageCraft C - `INLINE_ASM_TYPE__IMAGECRAFT`
```c
asm ("mov A,5");

asm(
	".LITERAL \n" /* COMMENT LINE */
	"S:: db 40h \n"
	".ENDLITERAL \n"
);

int	VARIABLE = 0;

asm ("mov A,_VARIABLE");
```

----

### Intel Compiler - `INLINE_ASM_TYPE__GNU`, `INLINE_ASM_TYPE__MSVC`

No Document Found.

----

### GNU Extended - `INLINE_ASM_TYPE__GNU_EXTENDED`
```c
__asm__ __volatile__ (
	"movl %0, %%eax;"
	"movl %%eax, %1;" /* COMMENT LINE */
	: "r"(input_var), "r"(result)
	: "=r"(result)   // %0
	: "r"(input_var) // %1
	: "%eax"
);
```

----

### KEIL CARM - `INLINE_ASM_TYPE__MSVC`

```c
int VARIABLE_1;
int VARIABLE_2;

__asm
{
	ADD VARIABLE_1, VARIABLE_2, 1 /* COMMENT LINE */
	EOR VARIABLE_2, VARIABLE_1, VARIABLE_2
}
```

----

### KEIL C166 - `INLINE_ASM_TYPE__KEIL_C166`

```c
#pragma ASM
INC   R8
#pragma ENDASM
```

----

### Metrowerks CodeWarrior - `INLINE_ASM_TYPE__CODEWARRIOR`

```c
asm void foo(void)
{
	x1:  dc.b "Hello world!\n" /* COMMENT LINE */
	@x2: dc.w 5
}

long int VARIABLE;

struct STRUCT {
	long int VALUE;
};

static asm long f(void)
{
	move.l struct(STRUCT.VALUE)(A0), D0
	add.l VARIABLE, D0
	D0.
	rts
}
```

----

### Microsoft C Compiler - `INLINE_ASM_TYPE__MSVC`

```c
__asm
{
	push ebp /* COMMENT LINE */
	mov  ebp, esp
	sub  esp, __LOCAL_SIZE
}

__asm push ebp
__asm mov  ebp, esp
__asm sub  esp, __LOCAL_SIZE
```

----

### Oracle Solaris Studio - `INLINE_ASM_TYPE__SOLARIS`

```c
__asm("\n\
	movl  8(%ebp), %ecx / COMMENT LINE \n\
	addl  12(%ebp), %ecx \n\
	addl  16(%ebp), %ecx \n\
	movl  %ecx, (%esp) \n\
	movl  %ecx, %eax \n\
");
```

----

### Pelles C - `INLINE_ASM_TYPE__MSVC`

```c
__asm mov eax, 0

__asm {
	push eax /* COMMENT LINE */
	mov  eax, 1
	add  eax, 2
	pop  eax
}
```

----

### Portland Group C/C++ - `INLINE_ASM_TYPE__GNU`

```c
asm ("cli");
__asm__ ("sti");

asm( "pushl %eax\n\t" "movl $0, %eax\n\t" "popl %eax");
asm(
	"movl %1, %%eax\n" /* COMMENT LINE */
	"movl %%eax, %0"
	: "=r" (x) : "r" (y) : "%eax"
);
```

----

### Renesas C Compiler - `INLINE_ASM_TYPE__RENESAS`

```c
#pragma ASM
FCLR
MOV.W #0FFH, R0
FSET
#pragma ENDASM
```

Also Supports:

```c
int VARIABLE = 0x07;

asm("MOV.W $$[FB], R0", VARIABLE);

asm("FSET I");
```

----

### Small Device C Compiler (OLD) - `INLINE_ASM_TYPE__SDCC_OLD`

```c
__asm
; COMMENT LINE
label:
	nop
__endasm;
```

----

### Small Device C Compiler - `INLINE_ASM_TYPE__SDCC`

```c
__asm__ ("; COMMENT LINE\nlabel:\n\tnop");
__asm__ (
"; COMMENT LINE\n"
"label:\n"
	"nop"
);
```

----

### Turbo C Compiler - `INLINE_ASM_TYPE__BORLAND`

```c
asm mov ax, ds;
asm {pop ax; pop ds; iret;}
```

----

### TI Compiler - `INLINE_ASM_TYPE__TI`

The documents are not being published and are inaccessible.

----

### VBCC - `INLINE_ASM_TYPE__VBCC`

```c
__asm("nop");

double sin(__reg("fp0") double) = "\tfsin.x\tfp0\n";
```

----

### Watcom C Compiler - `INLINE_ASM_TYPE__WATCOM`

```c
int read_key_stroke();
#pragma aux read_key_stroke = \
	"int 0x16" \
	value [eax];
```

----

### Zortech C++ - `INLINE_ASM_TYPE__DIGITAL_MARS`

```c
short VARIABLE;

asm mov AX, VARIABLE

asm mov AH,2
asm mov DL,7
asm int 21H
asm
{
	mov AH,2 /* COMMENT LINE */
	mov DL,7
	int 21H
}
```

## References

 - [ISO C - wikipedia.org](https://wikipedia.org/wiki/Inline_assembler)
 - [Pre-defined Compiler Macros Wiki - sourceforge.net](https://sourceforge.net/p/predef/wiki/Compilers/)

 - [ACC - arm.com **(Downloading PDF File)**](https://documentation-service.arm.com/static/64008a9d56ea36189d4e8082)
 - [Aztec C Compiler - aztecmuseum.ca](https://www.aztecmuseum.ca/docs/Aztec64_AssemblerNotes_Aug2013.pdf)
 - [Borland C Compiler - unicamp.br](https://www.ic.unicamp.br/~celio/mc404-2004/embedded.htm)
 - [CC65 - cc65.org](https://www.cc65.org/doc/cc65-9.html)
 - [Clang - llvm.org](https://llvm.org/devmtg/2021-11/slides/2021-handling-inline-assembly-in-clang-and-llvm.pdf)
 - [Digital Mars Compiler - digitalmars.com](https://digitalmars.com/ctg/ctgInlineAsm.html)
 - EKOPath - **/!\ NOT EXIST /!\\**
 - [GCC - gnu.org](https://gcc.gnu.org/onlinedocs/gcc/Using-Assembly-Language-with-C.html)
 - Green Hill C/C++ - **/!\ RESTRICTED /!\\**
 - HP ANSI C - **/!\ NOT EXIST /!\\**
 - [IAR C/C++ - iar.com](https://netstorage.iar.com/SuppDB/Public/UPDINFO/007722/ew/doc/EWAVR_CompilerReference.pdf)
 - [IAR C/C++ Development Guide - iar.com](https://wwwfiles.iar.com/arm/webic/doc/ewarm_developmentguide.enu.pdf)
 - [IBM XL C/C++ (Clang) - ibm.com](https://www.ibm.com/docs/en/open-xl-c-cpp-zos/2.1.0?topic=reference-inline-assembly-support)
 - [ImageCraft C Compiler Guide - infineon.com](https://www.infineon.com/assets/row/public/documents/cross-divisions/44/infineon-c-language-compiler-user-guide-usermanual-en.pdf)
 - [ImageCraft Product Features Overview (08-Aug-2006) - media.digikey.com](https://media.digikey.com/pdf/Data%20Sheets/Imagecraft%20PDFs/C-COMPILERS.pdf)
 - Intel Compiler - **/!\ NOT EXIST /!\\**
 - [KEIL CARM - keil.com](https://www.keil.com/support/man/docs/armcc/default.htm)
 - [KEIL C166 - keil.com](https://www.keil.com/support/man/docs/c166/c166_le_tradinline.asp)
 - [Metrowerks CodeWarrior - epac.to](https://lira.epac.to/DOCS-TECH/Programming/C%20-%20C++%20-%20Cpp%20-%20CPlusPlus/C++/CodeWarrior%20C%20and%20C++%20and%20Assembly%20Language%20Reference.pdf)
 - [Microsoft C Compiler - microsoft.com](https://learn.microsoft.com/en-us/cpp/c-language/inline-assembler-c?view=msvc-170)
 - [Oracle Solaris Studio - oracle.com](https://www.oracle.com/application-development/technologies/assembly-language-techniques-solaris-x86-platforms.html)
 - [Pelles C - npackd.org](https://www.npackd.org/p/pelles-c/10)
 - [Portland Group C/C++ - unican.es](https://www.ce.unican.es/man/compiladores/Portland/pgiug.pdf)
 - [Renesas C Compiler - renesas.com](https://www.renesas.com/en/document/apn/programming-guidelines-c-language-0)
 - [Small Device C Compiler - sourceforge.net](https://sdcc.sourceforge.net/doc/sdccman.pdf)
 - [Turbo C Compiler](https://www.ic.unicamp.br/~celio/mc404-2004/embedded.htm)
 - TI Compiler - **/!\ RESTRICTED /!\\**
 - [VBCC - ibaug.de](http://www.ibaug.de/vbcc/doc/vbcc.pdf)
 - [Watcom C Compiler - tuttlem.github.io](https://tuttlem.github.io/2015/10/04/inline-assembly-with-watcom.html)
 - [Watcom C Compiler - pja.edu.pl](https://users.pja.edu.pl/~jms/qnx/help/watcom/compiler-tools/cpasm.html)
 - [Zortech C++ - digitalmars.com](https://digitalmars.com/ctg/ctgInlineAsm.html)
