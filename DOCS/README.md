
# Documentations

This section contains additional documentation explaining how I achieved the features in my ecosystem.

## [**[📜 BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES](https://github.com/TeomanDeniz/CMT/blob/main/DOCS/BOUND_METHODS_IN_ISO_C_VIA_TRAMPOLINES.DOCX)**]

It explains how I managed to create real OOP ergonomics in pure C.

Instead of calling `struct.member(&struct, 42);`, you can simply write: `struct.member(42);`.

### Tree

 * [[CMT/OBJECT.H](https://github.com/TeomanDeniz/CMT/blob/main/OBJECT.H)]
   * [[CMT/ASM.H](https://github.com/TeomanDeniz/CMT/blob/main/ASM.H)]
     * [[CMT/ENVIRONMENTS/CPU.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/CPU.H)]
     * [[CMT/ENVIRONMENTS/ARCHITECTURE.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/ARCHITECTURE.H)]
     * [[CMT/CHECK_FEATURE/INLINE_ASM.H](https://github.com/TeomanDeniz/CMT/blob/main/CHECK_FEATURE/INLINE_ASM.H)]
   * [[CMT/OS_API/MEMORY.H](https://github.com/TeomanDeniz/CMT/blob/main/OS_API/MEMORY.H)]
     * [[CMT/ENVIRONMENTS/ABI.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/ABI.H)]
     * [[CMT/ENVIRONMENTS/W_XOR_X.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/W_XOR_X.H)]
     * [[CMT/ENVIRONMENTS/PLATFORM.H](https://github.com/TeomanDeniz/CMT/blob/main/ENVIRONMENTS/PLATFORM.H)]

## [**[📜 CROSS_COMPILER_AUTO_LINKING_AND_CONSTRUCTION_METHOD_WITH_MACROS_ONLY](https://github.com/TeomanDeniz/CMT/blob/main/DOCS/CROSS_COMPILER_AUTO_LINKING_AND_CONSTRUCTION_METHOD_WITH_MACROS_ONLY.DOCX)**]

It explains how I managed to define linkable functions and global variables only once, even though they are defined inside a header.

It also explains how I created a custom constructor and destructor system that runs before and after the `main` function.

## [**[📜 USE_ASSEMBLY_IN_PURE_C_WITHOUT_NEEDING_INLINE_ASSEMBLY](https://github.com/TeomanDeniz/CMT/blob/main/DOCS/USE_ASSEMBLY_IN_PURE_C_WITHOUT_NEEDING_INLINE_ASSEMBLY.DOCX)**]

It explains how I made Assembly code written in a `.c` file using my macro-based DSL continue to work even when the compiler does not support inline assembly.

## [**[📜 THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS](https://github.com/TeomanDeniz/CMT/blob/main/DOCS/THREAD_SUPPORT_IN_NON_MULTI_THREAD_PLATFORMS.DOCX)**]

It explains how I implemented a custom threading system for platforms like MS-DOS that do not support multithreading at all.
