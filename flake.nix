{
  description = "Tree-sitter grammar for the LDMud dialect of LPC";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in
      {
        devShells.default = pkgs.mkShell {
          packages = with pkgs; [
            # Grammar generation + corpus tests.
            tree-sitter
            # Node 22 LTS: tree-sitter@0.25 (the npm package needed by
            # the Node binding) doesn't build against Node 24's V8
            # headers (C++20 required, gyp config still C++17). Bump
            # together if/when upstream catches up.
            nodejs_22
            gcc

            # Per-language binding toolchains. Each binding's smoke test
            # (e.g. `cargo test`, `go test ./bindings/go/`,
            # `python -m unittest discover bindings/python/tests`)
            # needs its own runtime.
            cargo
            go
            (python3.withPackages (ps: with ps; [ tree-sitter setuptools wheel ]))

            # Formatter for flake.nix (CI runs `nixpkgs-fmt --check`).
            nixpkgs-fmt
          ];
        };
      });
}
