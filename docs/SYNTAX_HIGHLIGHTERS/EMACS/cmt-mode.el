;;; cmt-mode.el --- Highlighting for the CMT C library  -*- lexical-binding: t; -*-
;; Author: Teoman Deniz - maximum-tension.com - License: Apache-2.0
;;
;; INSTALL: put this file in your load-path, then in your init file:
;;   (require 'cmt-mode)
;; It turns itself on in c-mode, c++-mode, c-ts-mode and c++-ts-mode.

;;; Code:

(defgroup cmt nil "Highlighting for the CMT C library." :group 'languages)

(defface cmt-asm-face '((t :inherit font-lock-builtin-face))
  "Face for assembly instruction macros inside SECTION ... END." :group 'cmt)
(defface cmt-section-face '((t :inherit font-lock-preprocessor-face))
  "Face for SECTION / END of the CMT assembly DSL." :group 'cmt)

(defconst cmt--control-words
  '(
    "TRY" "try" "CATCH" "catch" "THROW" "throw" "CANCEL" "cancel"
    "IS_IN_TRY" "is_in_try"))

(defconst cmt--keyword-words
  '(
    "LOCAL" "local" "VA_ARGS" "va_args" "VA_ARG" "va_arg" "VA_BEGIN"
    "va_begin" "VA_END" "va_end" "VA_DECLARE" "va_declare"))

(defconst cmt--modifier-words
  '(
    "FASTCALL" "fastcall" "STDCALL" "stdcall" "REGPASS" "regpass"
    "REGPARM" "regparm" "IGNORE_VAR" "ignore_var" "CDECL" "cdecl" "FAR"
    "far" "NOINLINE" "noinline" "PASCAL" "pascal" "EXTERN_C_START"
    "extern_c_start" "EXTERN_C_END" "extern_c_end" "PACK" "pack"
    "PRAGMA_PACK_PUSH" "pragma_pack_push" "PRAGMA_PACK_POP"
    "pragma_pack_pop" "ALIGN_UP" "align_up" "ALIGN_VARIABLE"
    "align_variable" "ALIGN_STRUCT_PUSH" "align_struct_push"
    "ALIGN_STRUCT_POP" "align_struct_pop" "MAYBE_ARGS" "maybe_args"
    "VOLATILE" "volatile" "INLINE" "inline" "REGISTER" "register"
    "RESTRICT" "restrict" "UNUSED" "FORCE_INLINE"))

(defconst cmt--type-words
  '(
    "VAR" "var" "LET" "let" "PTR" "ptr" "FAR_PTR" "far_ptr" "BOOLEAN"
    "boolean" "BYTE" "byte" "BIT8" "bit8" "BIT16" "bit16" "BIT32" "bit32"
    "BIT64" "bit64" "BIT128" "bit128" "FLOAT32" "float32" "FLOAT64"
    "float64" "FLOAT128" "float128" "JMP_BUF" "jmp_buf" "VA_LIST"
    "va_list" "CONSOLE" "console" "KERNEL32" "USER32"))

(defconst cmt--oop-words
  '(
    "NEW" "new" "OBJ" "obj" "DELETE" "delete" "DESTROY" "destroy"
    "OBJECT__CONNECT" "object__connect" "OBJECT__INJECT" "object__inject"
    "OBJECT__EJECT" "object__eject" "OBJECT__INITIALIZE"
    "object__initialize" "OBJECT__COPY" "object__copy"
    "OBJECT__PROTOTYPE_ALLOC" "object__prototype_alloc"
    "OBJECT__PROTOTYPE_FREE" "object__prototype_free" "__DESTRUCTOR__"))

(defconst cmt--object-words
  '(
    "OBJECT" "object"))

(defconst cmt--this-words
  '(
    "THIS" "this"))

(defconst cmt--section-words
  '(
    "SECTION" "STATIC_SECTION" "SECTION_KNR" "STATIC_SECTION_KNR" "END"))

(defconst cmt--section-regexp
  "\\_<\\(?:\\(END\\)\\|\\(?:STATIC_\\)?SECTION\\(?:_KNR\\)?\\)\\_>")

(defun cmt--in-section-p (pos)
  "Non-nil when POS is inside a SECTION ... END block."
  (save-match-data
  (save-excursion
    (goto-char pos)
    (let ((case-fold-search nil)
          (bound (max (point-min) (- pos 20000)))
          (result nil)
          (done nil))
      (while (and (not done) (re-search-backward cmt--section-regexp bound t))
        (unless (nth 8 (syntax-ppss))
          (setq done t
                result (not (match-beginning 1)))))
      result))))

(defun cmt--match-asm (limit)
  "Font-lock matcher: next assembly macro before LIMIT inside a section."
  (let (found)
    (while (and (not found)
                (let ((case-fold-search nil))
                  (re-search-forward "\\_<[A-Z]+\\(?:_[A-Z0-9]+\\)*_?\\_>" limit t)))
      (let ((beg (match-beginning 0)))
        (when (and (not (save-excursion (nth 8 (syntax-ppss beg))))
                   (not (member (match-string 0) cmt--section-words))
                   (cmt--in-section-p beg))
          (setq found t))))
    found))

(defconst cmt-font-lock-keywords
  (list
   (cons (regexp-opt cmt--control-words 'symbols) ''font-lock-keyword-face)
   (cons (regexp-opt cmt--keyword-words 'symbols) ''font-lock-keyword-face)
   (cons (regexp-opt cmt--modifier-words 'symbols) ''font-lock-type-face)
   (cons (regexp-opt cmt--type-words 'symbols) ''font-lock-type-face)
   (cons (regexp-opt cmt--oop-words 'symbols) ''font-lock-keyword-face)
   (cons (regexp-opt cmt--object-words 'symbols) ''font-lock-keyword-face)
   (cons (regexp-opt cmt--this-words 'symbols) ''font-lock-constant-face)
   (cons (regexp-opt cmt--section-words 'symbols) ''cmt-section-face)
   '(cmt--match-asm 0 'cmt-asm-face t))
  "Extra font-lock rules added by `cmt-mode'.")

;;;###autoload
(define-minor-mode cmt-mode
  "Highlight CMT keywords, types and the SECTION ... END assembly DSL."
  :lighter " CMT"
  (let ((font-lock-keywords-case-fold-search nil))
    (if cmt-mode
        (font-lock-add-keywords nil cmt-font-lock-keywords)
      (font-lock-remove-keywords nil cmt-font-lock-keywords)))
  (font-lock-flush))

(dolist (hook '(c-mode-hook c++-mode-hook c-ts-mode-hook c++-ts-mode-hook))
  (add-hook hook #'cmt-mode))

;;;###autoload
(add-to-list 'auto-mode-alist '("\\.\\(INL\\|inl\\)\\'" . c-mode))
;;;###autoload
(add-to-list 'auto-mode-alist '("\\.HPP\\'" . c++-mode))

(provide 'cmt-mode)
;;; cmt-mode.el ends here
