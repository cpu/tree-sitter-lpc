package tree_sitter_lpc_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_lpc "github.com/cpu/tree-sitter-lpc/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lpc.Language())
	if language == nil {
		t.Errorf("Error loading LPC grammar")
	}
}
