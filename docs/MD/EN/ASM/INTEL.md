# Intel Assembly

**Note**: `MOV_RAX_`, `ADD_RAX_`, `..._PTR_` etc. commands automatically downscale on 32/16-bit modes.

When performing jumps, you must calculate the jump offset **manually**. The jump value represents the **number of bytes to skip**, not the label itself.

* Offsets can be **positive or negative**. For example, to jump backward, use `-(size_of_forward_code + size_of_jump_instruction)`.
* All jump instructions (`JMP`, `JE`, etc.) work with **signed values**.

Key points:

* `JE_SHORT_` and `JMP_SHORT_` use **byte offsets**, so you must include the size of any instructions between the jump and target.
* Counting instruction sizes (`SIZEOF_...`) ensures your jump lands exactly at the intended segment.

Example:

```c
SECTION (void, test, (int input))
	CMP_ARG1_(1)                             // cmp (first_argument) (Cross OS & ABI), 1
	JE_SHORT_(SIZEOF_MOV_RAX_ + SIZEOF_JMP_) // je layer_50
	MOV_RAX_(42)                             // mov rax, 42
	JMP_SHORT_(SIZEOF_MOV_RAX_)              // jmp layer_end
	// layer_50:                             // layer_50:
	MOV_RAX_(50)                             // mov rax, 50
	// layer_end:                            // layer_end:
	RET                                      // ret
END
```

Icons at the list works like that:

- **(✅)** Exists.
- **(❌)** Doesn't exist.
- **(⚠️)** Doesn't exist but automatically loweres to smaller/bigger architecture.

 * [ADC](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/ADC.md) `INCL_CMT_ASM_ADC`
 * [ADC - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/ADC_PTR.md) `INCL_CMT_ASM_ADC_PTR`
 * [ADD](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/ADD.md) `INCL_CMT_ASM_ADD`
 * [ADD - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/ADD_PTR.md) `INCL_CMT_ASM_ADD_PTR`
 * [AND](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/AND.md) `INCL_CMT_ASM_AND`
 * [AND - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/AND_PTR.md) `INCL_CMT_ASM_AND_PTR`
 * [CMP](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/CMP.md) `INCL_CMT_ASM_CMP`
 * [CMP - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/CMP_PTR.md) `INCL_CMT_ASM_CMP_PTR`
 * [JMP](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/JMP.md) `INCL_CMT_ASM_JMP`
 * [MOV](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/MOV.md) `INCL_CMT_ASM_MOV`
 * [MOV - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/MOV_PTR.md) `INCL_CMT_ASM_MOV_PTR`
 * [MOV - Segments](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/MOV_SEGMENT.md) `INCL_CMT_ASM_MOV_PTR_SEGMENT`
 * [MOV - ABI Specific](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/MOV_ABI.md) `INCL_CMT_ASM_MOV_ABI`
 * [MOVABS](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/MOVABS.md) `INCL_CMT_ASM_MOVABS`
 * [OR](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/OR.md) `INCL_CMT_ASM_OR`
 * [OR - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/OR_PTR.md) `INCL_CMT_ASM_OR_PTR`
 * [OTHERS](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/OTHERS.md) `INCL_CMT_ASM_OTHERS`
 * [POP](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/POP.md) `INCL_CMT_ASM_POP`
 * [PUSH](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/PUSH.md) `INCL_CMT_ASM_PUSH`
 * [SBB](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/SBB.md) `INCL_CMT_ASM_SBB`
 * [SBB - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/SBB_PTR.md) `INCL_CMT_ASM_SBB_PTR`
 * [SUB](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/SUB.md) `INCL_CMT_ASM_SUB`
 * [SUB - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/SUB_PTR.md) `INCL_CMT_ASM_SUB_PTR`
 * [TEST](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/TEST.md) `INCL_CMT_ASM_TEST`
 * [TEST - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/TEST_PTR.md) `INCL_CMT_ASM_TEST_PTR`
 * [XCHG](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/XCHG.md) `INCL_CMT_ASM_XCHG`
 * [XCHG - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/XCHG_PTR.md) `INCL_CMT_ASM_XCHG_PTR`
 * [XOR](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/XOR.md) `INCL_CMT_ASM_XOR`
 * [XOR - Pointers](https://github.com/TeomanDeniz/CMT/blob/main/docs/MD/EN/ASM/INTEL/XOR_PTR.md) `INCL_CMT_ASM_XOR_PTR`
