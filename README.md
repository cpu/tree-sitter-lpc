# tree-sitter-lpc

A [tree-sitter](https://tree-sitter.github.io) grammar for the
**[LDMud](https://ldmud.eu) dialect of LPC**, built rule-by-rule against the
canonical bison grammar in
[`ldmud/src/prolang.y`](https://github.com/ldmud/ldmud/blob/master/src/prolang.y).

Structural limits the grammar deliberately doesn't model are documented in
[`limitations.md`](./limitations.md).

## Usage

```sh
tree-sitter generate           # regenerate src/parser.c from grammar.js
tree-sitter test               # run test/corpus/*.txt
tree-sitter parse <file>       # parse a file, print the CST
```

A Nix dev shell with `tree-sitter`, `nodejs`, and `gcc` is wired up via
`flake.nix` + `.envrc`; `direnv allow` once and the shell auto-loads.

## Bindings

The generated parser is committed to `src/`, so consumers don't need the
tree-sitter CLI. Language bindings ship under `bindings/`:

- **C** (`bindings/c/`) — `tree_sitter_lpc()` symbol exported via
  `tree-sitter-lpc.h`. Link with `src/parser.c`.
- **Rust** (`bindings/rust/`) — published as the `tree-sitter-lpc`
  crate; exposes `LANGUAGE` for use with `tree-sitter`.
- **Go** (`bindings/go/`) — `Language()` returns the `*sitter.Language`
  for [`go-tree-sitter`](https://github.com/tree-sitter/go-tree-sitter).
- **Python** (`bindings/python/`) — `tree_sitter_lpc.language()`
  returns a `tree_sitter.Language` for the
  [`tree-sitter` Python package](https://pypi.org/project/tree-sitter/).
- **Node.js** (`bindings/node/`) — default export is a binding object
  whose `language` property plugs into the
  [`tree-sitter` npm package](https://www.npmjs.com/package/tree-sitter).

## Contributing

See [`CONTRIBUTING.md`](./CONTRIBUTING.md) for the dev environment,
grammar workflow, and per-binding test invocations.

## License

MIT.
