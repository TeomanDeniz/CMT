;; extends
;; CMT (C MAXIMUM TENSION)
;;
;; FOR NEOVIM WITH nvim-treesitter HIGHLIGHTING ENABLED (VIM SYNTAX FILES ARE
;; IGNORED THEN). INSTALL: COPY "after" INTO ~/.config/nvim
;; TREE-SITTER SEES MACROS AS PLAIN IDENTIFIERS, SO SECTION ... END BODIES
;; ARE NOT COLORED HERE (ONLY THE SECTION/END WORDS THEMSELVES).

((identifier) @keyword.exception
  (#any-of? @keyword.exception "TRY" "try" "CATCH" "catch" "THROW" "throw" "CANCEL" "cancel" "IS_IN_TRY" "is_in_try")
  (#set! priority 105))
((type_identifier) @keyword.exception
  (#any-of? @keyword.exception "TRY" "try" "CATCH" "catch" "THROW" "throw" "CANCEL" "cancel" "IS_IN_TRY" "is_in_try")
  (#set! priority 105))

((identifier) @keyword
  (#any-of? @keyword "LOCAL" "local" "VA_ARGS" "va_args" "VA_ARG" "va_arg" "VA_BEGIN" "va_begin" "VA_END" "va_end" "VA_DECLARE" "va_declare")
  (#set! priority 105))
((type_identifier) @keyword
  (#any-of? @keyword "LOCAL" "local" "VA_ARGS" "va_args" "VA_ARG" "va_arg" "VA_BEGIN" "va_begin" "VA_END" "va_end" "VA_DECLARE" "va_declare")
  (#set! priority 105))

((identifier) @keyword.modifier
  (#any-of? @keyword.modifier "FASTCALL" "fastcall" "STDCALL" "stdcall" "REGPASS" "regpass" "REGPARM" "regparm" "IGNORE_VAR" "ignore_var" "CDECL" "cdecl" "FAR" "far" "NOINLINE" "noinline" "PASCAL" "pascal" "EXTERN_C_START" "extern_c_start" "EXTERN_C_END" "extern_c_end" "PACK" "pack" "PRAGMA_PACK_PUSH" "pragma_pack_push" "PRAGMA_PACK_POP" "pragma_pack_pop" "ALIGN_UP" "align_up" "ALIGN_VARIABLE" "align_variable" "ALIGN_STRUCT_PUSH" "align_struct_push" "ALIGN_STRUCT_POP" "align_struct_pop" "MAYBE_ARGS" "maybe_args" "VOLATILE" "volatile" "INLINE" "inline" "REGISTER" "register" "RESTRICT" "restrict" "UNUSED" "FORCE_INLINE")
  (#set! priority 105))
((type_identifier) @keyword.modifier
  (#any-of? @keyword.modifier "FASTCALL" "fastcall" "STDCALL" "stdcall" "REGPASS" "regpass" "REGPARM" "regparm" "IGNORE_VAR" "ignore_var" "CDECL" "cdecl" "FAR" "far" "NOINLINE" "noinline" "PASCAL" "pascal" "EXTERN_C_START" "extern_c_start" "EXTERN_C_END" "extern_c_end" "PACK" "pack" "PRAGMA_PACK_PUSH" "pragma_pack_push" "PRAGMA_PACK_POP" "pragma_pack_pop" "ALIGN_UP" "align_up" "ALIGN_VARIABLE" "align_variable" "ALIGN_STRUCT_PUSH" "align_struct_push" "ALIGN_STRUCT_POP" "align_struct_pop" "MAYBE_ARGS" "maybe_args" "VOLATILE" "volatile" "INLINE" "inline" "REGISTER" "register" "RESTRICT" "restrict" "UNUSED" "FORCE_INLINE")
  (#set! priority 105))

((identifier) @type.builtin
  (#any-of? @type.builtin "VAR" "var" "LET" "let" "PTR" "ptr" "FAR_PTR" "far_ptr" "BOOLEAN" "boolean" "BYTE" "byte" "BIT8" "bit8" "BIT16" "bit16" "BIT32" "bit32" "BIT64" "bit64" "BIT128" "bit128" "FLOAT32" "float32" "FLOAT64" "float64" "FLOAT128" "float128" "JMP_BUF" "jmp_buf" "VA_LIST" "va_list" "CONSOLE" "console" "KERNEL32" "USER32")
  (#set! priority 105))
((type_identifier) @type.builtin
  (#any-of? @type.builtin "VAR" "var" "LET" "let" "PTR" "ptr" "FAR_PTR" "far_ptr" "BOOLEAN" "boolean" "BYTE" "byte" "BIT8" "bit8" "BIT16" "bit16" "BIT32" "bit32" "BIT64" "bit64" "BIT128" "bit128" "FLOAT32" "float32" "FLOAT64" "float64" "FLOAT128" "float128" "JMP_BUF" "jmp_buf" "VA_LIST" "va_list" "CONSOLE" "console" "KERNEL32" "USER32")
  (#set! priority 105))

((identifier) @keyword
  (#any-of? @keyword "NEW" "new" "OBJ" "obj" "DELETE" "delete" "DESTROY" "destroy" "OBJECT__CONNECT" "object__connect" "OBJECT__INJECT" "object__inject" "OBJECT__EJECT" "object__eject" "OBJECT__INITIALIZE" "object__initialize" "OBJECT__COPY" "object__copy" "OBJECT__PROTOTYPE_ALLOC" "object__prototype_alloc" "OBJECT__PROTOTYPE_FREE" "object__prototype_free" "__DESTRUCTOR__")
  (#set! priority 105))
((type_identifier) @keyword
  (#any-of? @keyword "NEW" "new" "OBJ" "obj" "DELETE" "delete" "DESTROY" "destroy" "OBJECT__CONNECT" "object__connect" "OBJECT__INJECT" "object__inject" "OBJECT__EJECT" "object__eject" "OBJECT__INITIALIZE" "object__initialize" "OBJECT__COPY" "object__copy" "OBJECT__PROTOTYPE_ALLOC" "object__prototype_alloc" "OBJECT__PROTOTYPE_FREE" "object__prototype_free" "__DESTRUCTOR__")
  (#set! priority 105))

((identifier) @keyword.type
  (#any-of? @keyword.type "OBJECT" "object")
  (#set! priority 105))
((type_identifier) @keyword.type
  (#any-of? @keyword.type "OBJECT" "object")
  (#set! priority 105))

((identifier) @variable.builtin
  (#any-of? @variable.builtin "THIS" "this")
  (#set! priority 105))
((type_identifier) @variable.builtin
  (#any-of? @variable.builtin "THIS" "this")
  (#set! priority 105))

((identifier) @keyword.directive
  (#any-of? @keyword.directive "SECTION" "STATIC_SECTION" "SECTION_KNR" "STATIC_SECTION_KNR" "END")
  (#set! priority 105))
