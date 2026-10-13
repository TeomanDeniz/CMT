# language-cmt (Atom / Pulsar)

Adds CMT keywords, types and the `SECTION ... END` assembly DSL on top of the
normal C / C++ highlighting. The grammar is the same one the VS Code extension uses.

## Install

Copy the whole `language-cmt` folder into your packages folder and restart:

* Atom: `~/.atom/packages/` (Windows: `%USERPROFILE%\.atom\packages\`)
* Pulsar: `~/.pulsar/packages/` (Windows: `%USERPROFILE%\.pulsar\packages\`)

## Important: turn off Tree-sitter for C

This is a TextMate grammar add-on. Newer Atom and Pulsar versions highlight C with
Tree-sitter by default, and add-ons like this one don't apply on top of that.
Add this to your `config.cson` (Edit > Config...):

```cson
".c.source":
  core:
    useTreeSitterParsers: false
".cpp.source":
  core:
    useTreeSitterParsers: false
```

## .INL files

To open CMT's `.INL` files as C, add to `config.cson` under `"*": core:`

```cson
    customFileTypes:
      "source.c": ["inl", "INL"]
```
