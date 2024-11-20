; highlights.scm

[
 "="
 "+="
] @operator

; Punctuation
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "<"
  ">"
] @punctuation.bracket

[
  ","
] @punctuation.delimiter

(comment) @comment

(abi) @keyword
(abs_path) @string
(magic_path) @string.special

(profile
    "profile" @keyword
   (identifier) @function.method
   (fileglob) @function
   (profile_flags) @function.parameter
)

"include" @keyword.import

(aare) @number
(variable) @variable


