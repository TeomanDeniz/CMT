# PLATFORM

<p align="center">
<img src="https://raw.githubusercontent.com/TeomanDeniz/CMT-DOCS/main/IMAGES/128/PLATFORM.gif"/>
</p>

> ## ⚠️ Important
> ### File location: [**[📜 CMT/ENVIRONMENTS/PLATFORM.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/PLATFORM.H)**]
> ### How to include:
> Recommended (via master header):
> ```c
> #define INCL_CMT_PLATFORM
> #include "CMT/CMT.H"
> ```
> Direct include:
> ```c
> #include "CMT/ENVIRONMENTS/PLATFORM.H"
> ```

## Abstract

Provides a unified compile-time platform detection layer.

The header exposes macros identifying the target operating system or execution environment, allowing portable platform-specific code paths through conditional compilation.

All platform identification is centralized here so the rest of the codebase avoids compiler-specific predefined macros.

## Contents

| Content                                    | Platform Name                                                                               |
| ------------------------------------------ | ------------------------------------------------------------------------------------------- |
| `#define __PLATFORM_AIX__`                 | [IBM AIX](https://wikipedia.org/wiki/IBM_AIX)                                               |
| `#define __PLATFORM_ANDROID__`             | [Android](https://wikipedia.org/wiki/Android_(operating_system))                            |
| `#define __PLATFORM_AMDAHL_UTS__`          | [Amdahl UTS](https://wikipedia.org/wiki/Amdahl_UTS)                                         |
| `#define __PLATFORM_AMIGAOS__`             | [AmigaOS](https://wikipedia.org/wiki/AmigaOS)                                               |
| `#define __PLATFORM_APOLLO_AEGIS__`        | [Apollo - AEGIS](https://wikipedia.org/wiki/Domain/OS)                                      |
| `#define __PLATFORM_APOLLO_DOMAIN_OS__`    | [Apollo - Domain/OS](https://wikipedia.org/wiki/Domain/OS)                                  |
| `#define __PLATFORM_BEOS__`                | [BeOS](https://wikipedia.org/wiki/BeOS)                                                     |
| `#define __PLATFORM_BLUE_GENE__`           | [IBM Blue Gene](https://wikipedia.org/wiki/IBM_Blue_Gene)                                   |
| `#define __PLATFORM_BSD_ENVIRONMENT__`     | [Berkeley Software Distribution](https://wikipedia.org/wiki/Berkeley_Software_Distribution) |
| `#define __PLATFORM_BSD_OS__`              | [BSD/OS](https://wikipedia.org/wiki/BSD/OS)                                                 |
| `#define __PLATFORM_CONVEXOS__`            | [Convex Computer](https://wikipedia.org/wiki/Convex_Computer)                               |
| `#define __PLATFORM_CYGWIN_ENVIRONMENT__`  | [Cygwin](https://wikipedia.org/wiki/Cygwin)                                                 |
| `#define __PLATFORM_DG_UX__`               | [DG/UX](https://wikipedia.org/wiki/DG/UX)                                                   |
| `#define __PLATFORM_DRAGONFLY__`           | [DragonFly BSD](https://wikipedia.org/wiki/DragonFly_BSD)                                   |
| `#define __PLATFORM_DYNIX_PTX__`           | [DYNIX](https://wikipedia.org/wiki/DYNIX)                                                   |
| `#define __PLATFORM_ECOS__`                | [ECos](https://wikipedia.org/wiki/ECos)                                                     |
| `#define __PLATFORM_EMX_ENVIRONMENT__`     | [EMX (programming environment)](https://wikipedia.org/wiki/EMX_(programming_environment))   |
| `#define __PLATFORM_FREEBSD__`             | [FreeBSD](https://wikipedia.org/wiki/FreeBSD)                                               |
| `#define __PLATFORM_GNU_HURD__`            | [GNU Hurd](https://wikipedia.org/wiki/GNU_Hurd)                                             |
| `#define __PLATFORM_GNU_KFREEBSD__`        | [Debian GNU/kFreeBSD](https://wikipedia.org/wiki/Debian_GNU/kFreeBSD)                       |
| `#define __PLATFORM_GNU_LINUX__`           | [Linux](https://wikipedia.org/wiki/Linux)                                                   |
| `#define __PLATFORM_HI_UX_MPP__`           | [OSF/1](https://wikipedia.org/wiki/OSF/1#OSF/1_AD)                                          |
| `#define __PLATFORM_HP_UX__`               | [HP-UX](https://wikipedia.org/wiki/HP-UX)                                                   |
| `#define __PLATFORM_IBM_OS_400__`          | [IBM iSeries OS/400](https://public.dhe.ibm.com/as400/marketing/pdf/v5r1/os.pdf)            |
| `#define __PLATFORM_INTEGRITY__`           | [Integrity (operating system)](https://wikipedia.org/wiki/Integrity_(operating_system))     |
| `#define __PLATFORM_INTERIX_ENVIRONMENT__` | [Interix](https://wikipedia.org/wiki/Interix)                                               |
| `#define __PLATFORM_IRIX__`                | [IRIX](https://wikipedia.org/wiki/IRIX)                                                     |
| `#define __PLATFORM_LINUX_KERNEL__`        | [Linux kernel](https://wikipedia.org/wiki/Linux_kernel)                                     |
| `#define __PLATFORM_LYNXOS__`              | [LynxOS](https://wikipedia.org/wiki/LynxOS)                                                 |
| `#define __PLATFORM_MACOS__`               | [macOS](https://wikipedia.org/wiki/MacOS)                                                   |
| `#define __PLATFORM_MICROWARE_OS_9__`      | [OS-9](https://wikipedia.org/wiki/OS-9)                                                     |
| `#define __PLATFORM_MINIX__`               | [Minix](https://wikipedia.org/wiki/Minix)                                                   |
| `#define __PLATFORM_MORPHOS__`             | [MorphOS](https://wikipedia.org/wiki/MorphOS)                                               |
| `#define __PLATFORM_MPE_IX__`              | [MPE/iX](https://wikipedia.org/wiki/MPE)                                                    |
| `#define __PLATFORM_MSDOS__`               | [MS-DOS](https://wikipedia.org/wiki/MS-DOS)                                                 |
| `#define __PLATFORM_NETBSD__`              | [NetBSD](https://wikipedia.org/wiki/NetBSD)                                                 |
| `#define __PLATFORM_NONSTOP__`             | [NonStop (server computers)](https://wikipedia.org/wiki/NonStop_(server_computers))         |
| `#define __PLATFORM_NUCLEUS_RTOS__`        | [Nucleus RTOS](https://wikipedia.org/wiki/Nucleus_RTOS)                                     |
| `#define __PLATFORM_OPENBSD__`             | [OpenBSD](https://wikipedia.org/wiki/OpenBSD)                                               |
| `#define __PLATFORM_OS2__`                 | [OS/2](https://wikipedia.org/wiki/OS/2)                                                     |
| `#define __PLATFORM_PALM_OS__`             | [Palm OS](https://wikipedia.org/wiki/Palm_OS)                                               |
| `#define __PLATFORM_PLAN9__`               | [Plan 9 from Bell Labs](https://wikipedia.org/wiki/Plan_9_from_Bell_Labs)                   |
| `#define __PLATFORM_PYRAMID_DC_OSX__`      | [DC/OSx](https://wikipedia.org/wiki/DC/OSx)                                                 |
| `#define __PLATFORM_QNX__`                 | [QNX](https://wikipedia.org/wiki/QNX)                                                       |
| `#define __PLATFORM_RELIANT_UNIX__`        | [Reliant UNIX (SINIX)](https://wikipedia.org/wiki/SINIX)                                    |
| `#define __PLATFORM_SCO_OPENSERVER__`      | [OpenServer](https://wikipedia.org/wiki/OpenServer)                                         |
| `#define __PLATFORM_SOLARIS__`             | [Oracle Solaris](https://wikipedia.org/wiki/Oracle_Solaris)                                 |
| `#define __PLATFORM_STRATUS_VOS__`         | [Stratus VOS](https://wikipedia.org/wiki/Stratus_VOS)                                       |
| `#define __PLATFORM_SVR4_ENVIRONMENT__`    | [SVR4 (UNIX System V)](https://wikipedia.org/wiki/UNIX_System_V)                            |
| `#define __PLATFORM_SYLLABLE__`            | [Syllable Desktop](https://wikipedia.org/wiki/Syllable_Desktop)                             |
| `#define __PLATFORM_SYMBIAN_OS__`          | [Symbian](https://wikipedia.org/wiki/Symbian)                                               |
| `#define __PLATFORM_TRU64_OSF__`           | [Tru64 UNIX](https://wikipedia.org/wiki/Tru64_UNIX)                                         |
| `#define __PLATFORM_ULTRIX__`              | [Ultrix](https://wikipedia.org/wiki/Ultrix)                                                 |
| `#define __PLATFORM_UNICOS__`              | [UNICOS](https://wikipedia.org/wiki/UNICOS)                                                 |
| `#define __PLATFORM_UNICOS_MP__`           | [UNICOS/mp](https://wikipedia.org/wiki/UNICOS)                                              |
| `#define __PLATFORM_UNIX_ENVIRONMENT__`    | [Unix](https://wikipedia.org/wiki/Unix)                                                     |
| `#define __PLATFORM_UNIXWARE__`            | [UnixWare](https://wikipedia.org/wiki/UnixWare)                                             |
| `#define __PLATFORM_UWIN_ENVIRONMENT__`    | [UWIN](https://wikipedia.org/wiki/UWIN)                                                     |
| `#define __PLATFORM_VMS__`                 | [VMS](https://wikipedia.org/wiki/VMS)                                                       |
| `#define __PLATFORM_VXWORKS__`             | [VxWorks](https://wikipedia.org/wiki/VxWorks)                                               |
| `#define __PLATFORM_WINDOWS__`             | [Microsoft Windows](https://wikipedia.org/wiki/Microsoft_Windows)                           |
| `#define __PLATFORM_WINDOWS_CE__`          | [Windows CE](https://wikipedia.org/wiki/Windows_CE)                                         |
| `#define __PLATFORM_WINDU_ENVIRONMENT__`   | [Wind/U (Bristol Technology)](https://wikipedia.org/wiki/Bristol_Technology)                |
| `#define __PLATFORM_ZOS__`                 | [IBM z/OS](https://wikipedia.org/wiki/Z/OS)                                                 |

## References

 - [Pre-defined Compiler Macros Wiki (Operating Systems) - sourceforge.net](https://sourceforge.net/p/predef/wiki/OperatingSystems/)
