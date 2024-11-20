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
		profile_file: ($) => seq($.preamble, repeat($.profile)),

		preamble: ($) =>
			repeat1(choice($.comment, $.include, $.abi, $.variable_assignment)),

		integer: ($) => /[+-]?\d+/,

		_identifier: ($) => /[0-9A-Za-z._\-\/]+/,

		fileglob: ($) =>
			prec(2, repeat1(choice($._identifier, $.variable, $.aare))),

		aare: ($) =>
			choice(
				seq("{", optional(","), commaSep1($._identifier), "}"),
				seq("[", optional("^"), $._identifier, "]"),
				"?",
				"*",
				"^",
			),

		comment: ($) => seq("#", /.+/),

		include: ($) => seq("include", choice($.abs_path, $.magic_path)),

		abi: ($) => seq("abi ", $.magic_path, ","),

		variable: ($) => seq("@{", $._identifier, "}"),

		variable_assignment: ($) =>
			prec.right(
				seq(
					field("left", $.variable),
					choice("=", "+="),
					field("right", seq(repeat1($.fileglob), "\n")),
				),
			),

		abs_path: ($) => seq('"', $._identifier, '"'),

		magic_path: ($) => seq("<", $._identifier, ">"),

		profile: ($) =>
			seq(
				"profile",
				$.fileglob,
				$.fileglob,
				optional($.profile_flags),
				"{",
				repeat(choice($.comment, $.include)),
				optional($.rules),
				"}",
			),

		profile_flags: ($) =>
			seq(optional("flags="), "(", commaSep1($.profile_flag), ")"),

		profile_mode: ($) =>
			choice(
				"enforce",
				"complain",
				"kill",
				"default_allow",
				"unconfined",
				"prompt",
			),

		profile_flag: ($) =>
			choice(
				$.profile_mode,
				"audit", // Audit mode
				"mediate_deleted",
				"attach_disconnected",
				seq("attach_disconneced.path=", $.abs_path),
				"chroot_relative",
				"debug",
				"interruptible",

				// 'kill.signal='SIGNAL | 'error='ERROR CODE
			),

		// TODO
		rules: ($) => repeat1(seq(choice($.file_rule, $.network_rule), ",")),

		access_type: ($) => choice("allow", "deny"),

		access: ($) => choice("r", "w", "a", "l", "k", "m", $.exec_transition),

		exec_transition: ($) =>
			choice(
				"ix",
				"ux",
				"Ux",
				"px",
				"Px",
				"cx",
				"Cx",
				"pix",
				"Pix",
				"cix",
				"Cix",
				"pux",
				"PUx",
				"cux",
				"CUx",
				"x",
			),

		qualifier: ($) =>
			choice(seq("priority=", $.integer), "audit", $.access_type),

		file_rule: ($) =>
			seq(
				optional($.qualifier),
				optional("owner"),
				choice(
					seq($.fileglob, repeat1($.access)),
					seq($.fileglob, repeat1($.access), optional(seq("->", $.fileglob))),
				),
			),

		// TODO
		network_rule: ($) => seq("network", $._identifier, $._identifier),
	},
});

/**
 * Creates a rule to match one or more occurrences of `rule` separated by `sep`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @returns {SeqRule}
 */
function sep1(rule, separator) {
	return seq(rule, repeat(seq(separator, rule)));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @returns {SeqRule}
 */
function commaSep1(rule) {
	return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @returns {ChoiceRule}
 */
function commaSep(rule) {
	return optional(commaSep1(rule));
}
