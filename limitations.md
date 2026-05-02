# Known limitations

Things this grammar deliberately does not (or cannot) handle.

## Source encoding

Tree-sitter parsers consume UTF-8. LDMud accepts other encodings via a
`coding:` modeline (`-*- coding: ISO8859-7 -*-`) and the `set_encoding()`
driver hook. Files in non-UTF-8 encodings (e.g.
`ldmud/test/t-0000432/iso8859-7.c`) will not parse cleanly. The
non-ASCII bytes are invalid UTF-8 and tree-sitter rejects them at the
lexer level. We treat this as out of scope.

## Python-defined types as `[type]` literals

LDMud lets Python extensions register types with the driver at runtime,
and `prolang.y` accepts an `L_PYTHON_TYPE` token in basic-type position
(line 11059) — e.g. `[box]`, `[box*]` where `box` is a Python-registered
type. The classification is dynamic: the lexer only knows a name is a
Python type because the embedded interpreter told it so. A static
grammar can't know which identifiers qualify, and admitting bare
identifiers as basic types creates ambiguity with var-decls. Encountered
in `ldmud/test/t-python/master.c` (line 182 onward). Out of scope.

## Intentionally invalid sources

LDMud ships test fixtures designed to exercise its error-reporting
paths: `t-language/tf-cpptrailing*.c`, `tf-cppmissinginclude*.c`,
`tl-0000833.c`, `tf-private-struct-ref*.c`, `tf-0000866.c`,
`ti-private-struct2.c`, `t-0000432/utf-8-in-error.c`, and similar.
These are not valid LPC, and the grammar deliberately rejects them.

## Duff's-device / case labels in nested blocks

LPC inherits C's switch-case-in-arbitrary-position quirk:

```lpc
switch (x) {
  case 0: do { dest[pos] = src[pos]; pos++;
  case 3:      dest[pos] = src[pos]; pos++;
  case 2:      dest[pos] = src[pos]; pos++;
  } while (--n > 0);
}
```

Tree-sitter grammars assume statements nest cleanly; modeling this would
require admitting `case` / `default` labels in any statement position,
which destroys the structural hierarchy editors and tools rely on.
Encountered in `t-language/tf-switch2.c`. Not planning to support.

## Preprocessor branches inside expressions

`#if` / `#ifdef` are wired into:

- The top-level `_definition` choice. `#if` may wrap whole functions,
  globals, struct definitions, or inherits.
- The `_statement` choice. `#if` may wrap one or more statements
  inside a function body. Leaf directives (`#pragma`, `#define`, etc.)
  are also valid statements, since LDMud allows them mid-function.
- The aggregate body (`aggregateBody` helper). `#if` may wrap whole
  comma-terminated elements of `({ ... })`, `'({ ... })`, struct
  literals (`(< type > ... )`), and call argument lists. Leaf
  directives between elements work too.
- Mapping literals (`([ ... ])`) get a parallel `preproc_*_in_mapping`
  family so a `#if` block inside a mapping wraps whole `key: value`
  entries (e.g. `obj/soul2.c:756`, `obj/cmds/player/calc.c:434`) rather
  than bare expressions. Surfaced as a separate rule family rather than
  widening `_aggregate_slot` because `mapping_entry`'s `: value` half is
  optional, so admitting it generically would make every bare expression
  also match as a key-only `mapping_entry`.

`#if` is **not** wired into:

- The middle of an unfinished construct. `#if` between `if (...) {...}`
  and `else {...}` (`crasher/crasher.c`), splitting an inline closure
  body across the directive (`tl-operators.c`), or splitting an
  operator and closing paren across branches such as
  `tests = ({...}) #ifdef X + (...) #endif` (`t-efuns.c`) all require
  picking one branch — i.e. real preprocessor expansion.
- Struct field initializers. The pattern doesn't appear in the LDMud
  corpus, so we don't pay the cost.

## Preprocessor expansion

This grammar approximates LDMud's preprocessor with tree-sitter-c-style
productions: `#include`, `#define`, `#if`/`#ifdef`/`#elif`/`#else`/
`#endif`, `#pragma`, etc. are *parsed* but not *expanded*. Concretely:

- Object-like and function-like macros are not substituted at use sites,
  so a file that does `#define FOO virtual` followed by
  `FOO inherit "x";` will fail (LDMud sees `virtual inherit "x";` after
  expansion). The 12 files under `ldmud/test/t-0000233/` and
  `t-0000152/` fail for this reason.
- Macros that expand to operator tokens (e.g. `MAKE_OP_TEST(=, 1, 10)`)
  cannot be parsed since the bare `=` isn't an expression. Encountered
  in `t-operators.c` and `t-lvalues.c`.
- Token-pasting / stringifying macro arguments where the literal
  source-text payload isn't itself a syntactic LPC expression, e.g.
  `CHECK_PREFIX(inh::geteuid, ...)` in `t-0000669/unpriv.c`. The parser
  correctly rejects the unexpanded form; expansion is needed.
- Conditional compilation (`#if BIG_INTS`) is not evaluated, so any
  branch may be parsed; if the branches contain incompatible constructs
  the parser will succeed on one branch and fail on the other.
- Backslash-newline line continuation inside a string literal is
  collapsed by `lex.c:8194` (the same path that strips
  backslash-newline outside strings). Files that split a long
  `"..."` literal across lines with a trailing `\` will not parse —
  the grammar treats the `\` as an in-string escape and the newline
  closes the string.

LDMud predefines a family of `__FOO__` macros that expand to strings or
integers (`__FILE__`, `__DIR__`, `__VERSION__`, `__MASTER_OBJECT__`,
etc.). The grammar accepts a `predefined_macro` token in expression
position, in adjacent-string concatenation, and in the blueprint slot
of `object`/`lwobject` types. These are syntactic stand-ins for the
post-expansion value, not a semantic equivalent. A user who defines a
non-predefined identifier of the form `__FOO__` will see it parsed as
`predefined_macro`, which is technically a tree-shape lie; the trade-
off is worth it because (a) such names are reserved by convention and
(b) it lets common idioms like `__DIR__ ".tmp.c"` parse cleanly.

A complete fix would mean a preprocessor pass before tree-sitter sees
the text, or a much richer external scanner. Out of scope for now.

