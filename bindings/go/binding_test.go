package tree_sitter_rbnf_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_rbnf "github.com/tree-sitter/tree-sitter-rbnf/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rbnf.Language())
	if language == nil {
		t.Errorf("Error loading Rbnf grammar")
	}
}
