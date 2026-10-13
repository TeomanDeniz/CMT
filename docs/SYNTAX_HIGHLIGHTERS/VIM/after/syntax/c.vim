" CMT (C MAXIMUM TENSION) - EXTRA HIGHLIGHTING ON TOP OF VIM'S C/C++ SYNTAX
"
" INSTALL (VIM):    COPY THE "after" AND "ftdetect" FOLDERS INTO ~/.vim
"                   (WINDOWS: %USERPROFILE%\vimfiles)
" INSTALL (NEOVIM): COPY THEM INTO ~/.config/nvim (WINDOWS: %LOCALAPPDATA%\nvim)
" C++ FILES ARE COVERED TOO: VIM'S cpp.vim LOADS c.vim (AND THIS FILE).

syn case match
syn keyword cmtControl TRY try CATCH catch THROW throw CANCEL cancel IS_IN_TRY is_in_try
syn keyword cmtKeyword LOCAL local VA_ARGS va_args VA_ARG va_arg VA_BEGIN va_begin VA_END va_end
syn keyword cmtKeyword VA_DECLARE va_declare
syn keyword cmtModifier FASTCALL fastcall STDCALL stdcall REGPASS regpass REGPARM regparm
syn keyword cmtModifier IGNORE_VAR ignore_var CDECL cdecl FAR far NOINLINE noinline PASCAL pascal
syn keyword cmtModifier EXTERN_C_START extern_c_start EXTERN_C_END extern_c_end PACK pack
syn keyword cmtModifier PRAGMA_PACK_PUSH pragma_pack_push PRAGMA_PACK_POP pragma_pack_pop ALIGN_UP
syn keyword cmtModifier align_up ALIGN_VARIABLE align_variable ALIGN_STRUCT_PUSH align_struct_push
syn keyword cmtModifier ALIGN_STRUCT_POP align_struct_pop MAYBE_ARGS maybe_args VOLATILE volatile
syn keyword cmtModifier INLINE inline REGISTER register RESTRICT restrict UNUSED FORCE_INLINE
syn keyword cmtType VAR var LET let PTR ptr FAR_PTR far_ptr BOOLEAN boolean BYTE byte BIT8 bit8
syn keyword cmtType BIT16 bit16 BIT32 bit32 BIT64 bit64 BIT128 bit128 FLOAT32 float32 FLOAT64
syn keyword cmtType float64 FLOAT128 float128 JMP_BUF jmp_buf VA_LIST va_list CONSOLE console
syn keyword cmtType KERNEL32 USER32
syn keyword cmtOop NEW new OBJ obj DELETE delete DESTROY destroy OBJECT__CONNECT
syn keyword cmtOop object__connect OBJECT__INJECT object__inject OBJECT__EJECT object__eject
syn keyword cmtOop OBJECT__INITIALIZE object__initialize OBJECT__COPY object__copy
syn keyword cmtOop OBJECT__PROTOTYPE_ALLOC object__prototype_alloc OBJECT__PROTOTYPE_FREE
syn keyword cmtOop object__prototype_free __DESTRUCTOR__
syn keyword cmtObject OBJECT object
syn keyword cmtThis THIS this

" ASSEMBLY DSL: SECTION(...) ... END
syn keyword cmtSectionKnr SECTION_KNR STATIC_SECTION_KNR contained
syn match cmtAsm "\<[A-Z]\+\%(_[A-Z0-9]\+\)*_\=\>" contained
syn region cmtSection matchgroup=cmtSectionKeyword start="\<\%(STATIC_\)\=SECTION\%(_KNR\)\=\>" end="\<END\>" end="^\ze\s*\%(STATIC_\)\=SECTION\>" contains=cmtSectionKnr,cmtType,cmtModifier,cmtAsm,cComment,cCommentL,cString,cCharacter,cNumbers,cType,cStorageClass,cStructure

hi def link cmtControl Exception
hi def link cmtKeyword Keyword
hi def link cmtModifier StorageClass
hi def link cmtType Type
hi def link cmtOop Keyword
hi def link cmtObject Structure
hi def link cmtThis Special
hi def link cmtSectionKeyword PreProc
hi def link cmtSectionKnr PreProc
hi def link cmtAsm Function
