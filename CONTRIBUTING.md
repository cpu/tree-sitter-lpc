# Contributing to tree-sitter-lpc

## Dev environment

A Nix flake provides everything you need: `tree-sitter`, `nodejs`,
`gcc`, `cargo`, `go`, and `python3` with `tree-sitter`/`setuptools`/
`wheel`. Either `direnv allow` once and let `.envrc` load the shell,
or run `nix develop` ad-hoc.

The `tree-sitter` binary in nixpkgs is currently 0.26.x; `package.json`
and `Cargo.toml` are pinned to `^0.26.0` to match. Keep those in sync
with the flake when you bump versions.

## Grammar workflow

```sh
tree-sitter generate           # regenerate src/parser.c from grammar.js
tree-sitter test               # run all corpus tests
tree-sitter test -i "Name$"    # run a single test by header (regex)
tree-sitter test -u            # update expected trees from current output
tree-sitter parse <file>       # parse a file, print the CST
```

Every grammar change should be paired with a corpus test.

## Testing the language bindings

Each binding under `bindings/` ships a small smoke test that loads the
compiled grammar. They're not wired into a single runner; invoke each
in its own toolchain:

```sh
# Rust: builds bindings/rust/ via build.rs and runs any #[test] blocks.
cargo test

# Go: TestCanLoadGrammar in bindings/go/binding_test.go.
go test ./bindings/go/

# Python: build the C extension in place, then run the unittest suite.
python setup.py build_ext --inplace
PYTHONPATH=bindings/python python -m unittest discover bindings/python/tests

# Node.js: install npm deps and run the smoke test in bindings/node/.
npm install
npm test

# C: there is no test harness yet; build via the generated parser and
# link your own program against tree_sitter_lpc().
make
```

The bindings are thin shims around `src/parser.c`. The authoritative
correctness signal is `tree-sitter test` at the grammar level — if
that's green, the binding tests should be too.
