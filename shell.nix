{ pkgs ? import <nixpkgs> { } }:
pkgs.mkShell { nativeBuildInputs = with pkgs; [ tree-sitter nodejs-18_x ]; }
