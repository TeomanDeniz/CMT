# CPUID

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/128/ASM_CONTENT.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ASM/C/INTEL/CPUID.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM/C/INTEL/CPUID.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_CPUID
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ASM/C/INTEL/CPUID.H"
> ```

[![](https://raw.githubusercontent.com/TeomanDeniz/CMT/main/docs/IMAGES/BANNERS/AUTO_LINKER_MODULE_HEADER.png)](https://github.com/TeomanDeniz/CMT/tree/main#cmt-auto-linker)

## Abstract

These macros execute the `CPUID` instruction and return the values stored in the CPU registers after execution.

`CPUID` is used to query processor information such as vendor ID, feature flags, supported instruction sets, cache details, and extended processor capabilities.

The requested information is selected using the **leaf value**, which is placed in the `EAX` register before executing `CPUID`.

## Contents

| Contents List                             |
| ----------------------------------------- |
| `#define GET_CPUID(LEAF, AX, BX, CX, DX)` |
| `#define get_cpuid(leaf, ax, bx, cx, dx)` |

| Vendor Strings (CPUs)                |
| ------------------------------------ |
| `#define CPUID_VENDOR_AMD`           |
| `#define CPUID_VENDOR_AMD_OLD`       |
| `#define CPUID_VENDOR_INTEL`         |
| `#define CPUID_VENDOR_VIA`           |
| `#define CPUID_VENDOR_TRANSMETA`     |
| `#define CPUID_VENDOR_TRANSMETA_OLD` |
| `#define CPUID_VENDOR_CYRIX`         |
| `#define CPUID_VENDOR_CENTAUR`       |
| `#define CPUID_VENDOR_NEXGEN`        |
| `#define CPUID_VENDOR_UMC`           |
| `#define CPUID_VENDOR_SIS`           |
| `#define CPUID_VENDOR_NSC`           |
| `#define CPUID_VENDOR_RISE`          |
| `#define CPUID_VENDOR_VORTEX`        |
| `#define CPUID_VENDOR_AO486`         |
| `#define CPUID_VENDOR_AO486_OLD`     |
| `#define CPUID_VENDOR_ZHAOXIN`       |
| `#define CPUID_VENDOR_HYGON`         |
| `#define CPUID_VENDOR_ELBRUS`        |

| Vendor Strings (Hypervisors)         |
| ------------------------------------ |
| `#define CPUID_VENDOR_QEMU`          |
| `#define CPUID_VENDOR_KVM`           |
| `#define CPUID_VENDOR_VMWARE`        |
| `#define CPUID_VENDOR_VIRTUALBOX`    |
| `#define CPUID_VENDOR_XEN`           |
| `#define CPUID_VENDOR_HYPERV`        |
| `#define CPUID_VENDOR_PARALLELS`     |
| `#define CPUID_VENDOR_PARALLELS_ALT` |
| `#define CPUID_VENDOR_BHYVE`         |
| `#define CPUID_VENDOR_QNX`           |

| CPU Features                               |
| ------------------------------------------ |
| `#define CPUID_FEAT_EBX_BRAND_INDEX`       |
| `#define CPUID_FEAT_EBX_CLFLUSH_LINE_SIZE` |
| `#define CPUID_FEAT_EBX_APIC_ID_SPACE`     |
| `#define CPUID_FEAT_EBX_INITIAL_APIC_ID`   |
| `#define CPUID_FEAT_ECX_SSE3`              |
| `#define CPUID_FEAT_ECX_PCLMUL`            |
| `#define CPUID_FEAT_ECX_DTES64`            |
| `#define CPUID_FEAT_ECX_MONITOR`           |
| `#define CPUID_FEAT_ECX_DS_CPL`            |
| `#define CPUID_FEAT_ECX_VMX`               |
| `#define CPUID_FEAT_ECX_SMX`               |
| `#define CPUID_FEAT_ECX_EST`               |
| `#define CPUID_FEAT_ECX_TM2`               |
| `#define CPUID_FEAT_ECX_SSSE3`             |
| `#define CPUID_FEAT_ECX_CID`               |
| `#define CPUID_FEAT_ECX_SDBG`              |
| `#define CPUID_FEAT_ECX_FMA`               |
| `#define CPUID_FEAT_ECX_CX16`              |
| `#define CPUID_FEAT_ECX_XTPR`              |
| `#define CPUID_FEAT_ECX_PDCM`              |
| `#define CPUID_FEAT_ECX_PCID`              |
| `#define CPUID_FEAT_ECX_DCA`               |
| `#define CPUID_FEAT_ECX_SSE4_1`            |
| `#define CPUID_FEAT_ECX_SSE4_2`            |
| `#define CPUID_FEAT_ECX_X2APIC`            |
| `#define CPUID_FEAT_ECX_MOVBE`             |
| `#define CPUID_FEAT_ECX_POPCNT`            |
| `#define CPUID_FEAT_ECX_TSC`               |
| `#define CPUID_FEAT_ECX_AES`               |
| `#define CPUID_FEAT_ECX_XSAVE`             |
| `#define CPUID_FEAT_ECX_OSXSAVE`           |
| `#define CPUID_FEAT_ECX_AVX`               |
| `#define CPUID_FEAT_ECX_F16C`              |
| `#define CPUID_FEAT_ECX_RDRAND`            |
| `#define CPUID_FEAT_ECX_HYPERVISOR`        |
| `#define CPUID_FEAT_EDX_FPU`               |
| `#define CPUID_FEAT_EDX_VME`               |
| `#define CPUID_FEAT_EDX_DE`                |
| `#define CPUID_FEAT_EDX_PSE`               |
| `#define CPUID_FEAT_EDX_TSC`               |
| `#define CPUID_FEAT_EDX_MSR`               |
| `#define CPUID_FEAT_EDX_PAE`               |
| `#define CPUID_FEAT_EDX_MCE`               |
| `#define CPUID_FEAT_EDX_CX8`               |
| `#define CPUID_FEAT_EDX_APIC`              |
| `#define CPUID_FEAT_EDX_SEP`               |
| `#define CPUID_FEAT_EDX_MTRR`              |
| `#define CPUID_FEAT_EDX_PGE`               |
| `#define CPUID_FEAT_EDX_MCA`               |
| `#define CPUID_FEAT_EDX_CMOV`              |
| `#define CPUID_FEAT_EDX_PAT`               |
| `#define CPUID_FEAT_EDX_PSE36`             |
| `#define CPUID_FEAT_EDX_PSN`               |
| `#define CPUID_FEAT_EDX_CLFLUSH`           |
| `#define CPUID_FEAT_EDX_DS`                |
| `#define CPUID_FEAT_EDX_ACPI`              |
| `#define CPUID_FEAT_EDX_MMX`               |
| `#define CPUID_FEAT_EDX_FXSR`              |
| `#define CPUID_FEAT_EDX_SSE`               |
| `#define CPUID_FEAT_EDX_SSE2`              |
| `#define CPUID_FEAT_EDX_SS`                |
| `#define CPUID_FEAT_EDX_HTT`               |
| `#define CPUID_FEAT_EDX_TM`                |
| `#define CPUID_FEAT_EDX_IA64`              |
| `#define CPUID_FEAT_EDX_PBE`               |

----

### CPUID

```c
#define GET_CPUID(LEAF, AX, BX, CX, DX)
#define get_cpuid(leaf, ax, bx, cx, dx)
```

Executes the `CPUID` instruction with the specified **leaf** value and stores the resulting register outputs in the provided variables.

The macro places the leaf value into `EAX`, runs the `CPUID` instruction, and then writes the resulting values of `EAX`, `EBX`, `ECX`, and `EDX` into the given variables.

Example:

```c
unsigned int eax, ebx, ecx, edx;

get_cpuid(0, eax, ebx, ecx, edx);
```

After execution:

* `eax` contains the **maximum supported CPUID leaf**.
* `ebx`, `edx`, and `ecx` together contain the **CPU vendor string**.

The **leaf** selects which processor information block is returned.

Common examples:

| Leaf         | Description                          |
| ------------ | ------------------------------------ |
| `0x0`        | Maximum supported leaf and vendor ID |
| `0x1`        | Processor version and feature flags  |
| `0x7`        | Structured extended feature flags    |
| `0x80000000` | Maximum supported extended leaf      |

Different leaves return different data layouts in the output registers.

Example extracting the vendor string:

```c
unsigned int	eax, ebx, ecx, edx;
char			vendor[13];

get_cpuid(0, eax, ebx, ecx, edx);

((unsigned int*)vendor)[0] = ebx;
((unsigned int*)vendor)[1] = edx;
((unsigned int*)vendor)[2] = ecx;

vendor[12] = 0;

printf("[%s]\n", vendor); // [GenuineIntel] (Aka: CPUID_VENDOR_INTEL)
```

## References

 - [Intel® Processor Identification and the CPUID Instruction - datasheets.chipdb.org](https://datasheets.chipdb.org/Intel/x86/CPUID/24161821.pdf)
 - [CPUID - wiki.osdev.org](https://wiki.osdev.org/CPUID)
