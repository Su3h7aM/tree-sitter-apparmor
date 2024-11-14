/**
 * @file Apparmor profiles
 * @author Su3h7aM <matheusgasorce@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "apparmor",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
