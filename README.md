# tree-sitter-apparmor

This project is an implementation of a parser for AppArmor profiles using [Tree-sitter](https://tree-sitter.github.io/tree-sitter).

## Objective

This project is being developed as a way to learn how to create a parser using Tree-sitter. The initial aim is to provide **syntax highlighting** for AppArmor profile files in Neovim. Long-term, the goal is to extend the functionality to include tools like a **linter** and an **LSP** to improve productivity and code quality when working with AppArmor profiles.

## Features

- **Syntax Highlighting**: Syntax highlighting for AppArmor profile files in Neovim.
- **Future (Planned)**:
    - Linter for syntax validation and error feedback.
    - LSP support for autocompletion, navigation, and other IDE-like features.

## How to Use

1. **Setup**:
    To get started with `tree-sitter-apparmor`, you'll need to have [Neovim](https://neovim.io/) with [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) configured. 

2. Example using **lazy.vim**:

    ```lua
    {
        "nvim-treesitter/nvim-treesitter",
        event = { "BufReadPre", "BufNewFile" },
        main = "nvim-treesitter.configs",
        opts = {
            ensure_installed = { 'apparmor' },
            sync_install = false,
            auto_install = true,
            highlight = {
                enable = true,
                disable = {}
            },
        },
        config = function ()
            local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
            parser_config.apparmor = {
                install_info = {
                    url = "https://github.com/Su3h7aM/tree-sitter-apparmor",
                    files = {"src/parser.c"},
                    branch = "main",
                }
            }
        end,
        build = ":TSUpdate"
    }
   ```

## Contribution

This project is a work in progress. If you want to contribute, feel free to open issues, submit pull requests, or discuss ideas for improving the project!
