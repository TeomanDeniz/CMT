# CMT Syntax Highlighters

Highlighting for CMT keywords, types, attributes, the OBJECT macros and the `SECTION ... END` assembly DSL, on top of each editor's normal C/C++ highlighting.

| Editor                                         | Folder              | Install                                                                                                          | SECTION body  |
| ---------------------------------------------- | ------------------- | ---------------------------------------------------------------------------------------------------------------- | ------------- |
| Sublime Text                                   | `SUBLIME_TEXT`      | see the file header                                                                                              | yes           |
| VS Code                                        | `VS_CODE`           | `code --install-extension CMT-HIGHLIGHTER-<ver>.vsix`                                                            | yes           |
| Cursor, VSCodium, Windsurf (VS Code forks)     | `VS_CODE`           | same `.vsix`: "Install from VSIX..." or `cursor --install-extension CMT-HIGHLIGHTER-<ver>.vsix`                  | yes           |
| Atom, Pulsar                                   | `ATOM`              | copy `language-cmt` into `~/.atom/packages` or `~/.pulsar/packages` (see its README: turn off Tree-sitter for C) | yes           |
| Helix                                          | `HELIX`             | `python INSTALL_CMT_HELIX.py` (re-run after Helix updates)                                                       | keywords only |
| Vim / Neovim (classic syntax)                  | `VIM`               | copy `after/` and `ftdetect/` into `~/.vim` or `~/.config/nvim`                                                  | yes           |
| Neovim + nvim-treesitter                       | `NEOVIM_TREESITTER` | copy `after/` into `~/.config/nvim`                                                                              | keywords only |
| Emacs                                          | `EMACS`             | add to `load-path`, then `(require 'cmt-mode)`                                                                   | yes           |
| Kate, KWrite, KDevelop, Qt Creator             | `KATE`              | copy `cmt.xml` into `~/.local/share/org.kde.syntax-highlighting/syntax/`                                         | yes           |
| GNOME Text Editor, gedit, Pluma, Mousepad, Xed | `GTKSOURCEVIEW`     | copy `cmt.lang` into `~/.local/share/gtksourceview-5/language-specs/`                                            | yes           |
| nano                                           | `NANO`              | see the file header                                                                                              | keywords only |
| micro                                          | `MICRO`             | copy `cmt.yaml` into `~/.config/micro/syntax/`                                                                   | keywords only |
| Notepad++                                      | `NOTEPAD++`         | paste the lists from `CMT_KEYWORDS.txt` (steps inside)                                                           | keywords only |
| Geany                                          | `GEANY`             | copy into `~/.config/geany/filedefs/`                                                                            | keywords only |
