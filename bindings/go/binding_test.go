package tree_sitter_apparmor_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_apparmor "github.com/su3h7am/tree-sitter-apparmor/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_apparmor.Language())
	if language == nil {
		t.Errorf("Error loading Apparmor grammar")
	}
}
