#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym__identifier = 1,
  sym_integer = 2,
  anon_sym_SLASH = 3,
  anon_sym_LBRACE = 4,
  anon_sym_COMMA = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LBRACK = 7,
  anon_sym_CARET = 8,
  anon_sym_RBRACK = 9,
  anon_sym_QMARK = 10,
  anon_sym_STAR_STAR = 11,
  anon_sym_STAR = 12,
  sym_comment = 13,
  anon_sym_include = 14,
  anon_sym_POUNDinclude = 15,
  anon_sym_abi = 16,
  anon_sym_AT_LBRACE = 17,
  anon_sym_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_SPACE = 20,
  anon_sym_DQUOTE = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_profile = 24,
  anon_sym_flags_EQ = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_enforce = 28,
  anon_sym_complain = 29,
  anon_sym_kill = 30,
  anon_sym_default_allow = 31,
  anon_sym_unconfined = 32,
  anon_sym_prompt = 33,
  anon_sym_audit = 34,
  anon_sym_mediate_deleted = 35,
  anon_sym_attach_disconnected = 36,
  anon_sym_attach_disconneced_DOTpath_EQ = 37,
  anon_sym_chroot_relative = 38,
  anon_sym_debug = 39,
  anon_sym_interruptible = 40,
  anon_sym_allow = 41,
  anon_sym_deny = 42,
  aux_sym_access_token1 = 43,
  anon_sym_ix = 44,
  anon_sym_ux = 45,
  anon_sym_Ux = 46,
  anon_sym_px = 47,
  anon_sym_Px = 48,
  anon_sym_cx = 49,
  anon_sym_Cx = 50,
  anon_sym_pix = 51,
  anon_sym_Pix = 52,
  anon_sym_cix = 53,
  anon_sym_Cix = 54,
  anon_sym_pux = 55,
  anon_sym_PUx = 56,
  anon_sym_cux = 57,
  anon_sym_CUx = 58,
  anon_sym_x = 59,
  anon_sym_priority_EQ = 60,
  anon_sym_owner = 61,
  anon_sym_DASH_GT = 62,
  anon_sym_network = 63,
  sym_profile_file = 64,
  sym_preamble = 65,
  sym_identifier = 66,
  sym_fileglob = 67,
  sym_aare = 68,
  sym_include = 69,
  sym_abi = 70,
  sym_variable = 71,
  sym_variable_assignment = 72,
  sym_abs_path = 73,
  sym_magic_path = 74,
  sym_profile = 75,
  sym_profile_flags = 76,
  sym_profile_mode = 77,
  sym_profile_flag = 78,
  sym_rules = 79,
  sym_access_type = 80,
  sym_access = 81,
  sym_exec_transition = 82,
  sym_qualifier = 83,
  sym_file_rule = 84,
  sym_network_rule = 85,
  aux_sym_profile_file_repeat1 = 86,
  aux_sym_preamble_repeat1 = 87,
  aux_sym_fileglob_repeat1 = 88,
  aux_sym_aare_repeat1 = 89,
  aux_sym_variable_assignment_repeat1 = 90,
  aux_sym_profile_repeat1 = 91,
  aux_sym_profile_flags_repeat1 = 92,
  aux_sym_rules_repeat1 = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_integer] = "integer",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_CARET] = "^",
  [anon_sym_RBRACK] = "]",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [sym_comment] = "comment",
  [anon_sym_include] = "include",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_abi] = "abi",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SPACE] = " ",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_profile] = "profile",
  [anon_sym_flags_EQ] = "flags=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_enforce] = "enforce",
  [anon_sym_complain] = "complain",
  [anon_sym_kill] = "kill",
  [anon_sym_default_allow] = "default_allow",
  [anon_sym_unconfined] = "unconfined",
  [anon_sym_prompt] = "prompt",
  [anon_sym_audit] = "audit",
  [anon_sym_mediate_deleted] = "mediate_deleted",
  [anon_sym_attach_disconnected] = "attach_disconnected",
  [anon_sym_attach_disconneced_DOTpath_EQ] = "attach_disconneced.path=",
  [anon_sym_chroot_relative] = "chroot_relative",
  [anon_sym_debug] = "debug",
  [anon_sym_interruptible] = "interruptible",
  [anon_sym_allow] = "allow",
  [anon_sym_deny] = "deny",
  [aux_sym_access_token1] = "access_token1",
  [anon_sym_ix] = "ix",
  [anon_sym_ux] = "ux",
  [anon_sym_Ux] = "Ux",
  [anon_sym_px] = "px",
  [anon_sym_Px] = "Px",
  [anon_sym_cx] = "cx",
  [anon_sym_Cx] = "Cx",
  [anon_sym_pix] = "pix",
  [anon_sym_Pix] = "Pix",
  [anon_sym_cix] = "cix",
  [anon_sym_Cix] = "Cix",
  [anon_sym_pux] = "pux",
  [anon_sym_PUx] = "PUx",
  [anon_sym_cux] = "cux",
  [anon_sym_CUx] = "CUx",
  [anon_sym_x] = "x",
  [anon_sym_priority_EQ] = "priority=",
  [anon_sym_owner] = "owner",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_network] = "network",
  [sym_profile_file] = "profile_file",
  [sym_preamble] = "preamble",
  [sym_identifier] = "identifier",
  [sym_fileglob] = "fileglob",
  [sym_aare] = "aare",
  [sym_include] = "include",
  [sym_abi] = "abi",
  [sym_variable] = "variable",
  [sym_variable_assignment] = "variable_assignment",
  [sym_abs_path] = "abs_path",
  [sym_magic_path] = "magic_path",
  [sym_profile] = "profile",
  [sym_profile_flags] = "profile_flags",
  [sym_profile_mode] = "profile_mode",
  [sym_profile_flag] = "profile_flag",
  [sym_rules] = "rules",
  [sym_access_type] = "access_type",
  [sym_access] = "access",
  [sym_exec_transition] = "exec_transition",
  [sym_qualifier] = "qualifier",
  [sym_file_rule] = "file_rule",
  [sym_network_rule] = "network_rule",
  [aux_sym_profile_file_repeat1] = "profile_file_repeat1",
  [aux_sym_preamble_repeat1] = "preamble_repeat1",
  [aux_sym_fileglob_repeat1] = "fileglob_repeat1",
  [aux_sym_aare_repeat1] = "aare_repeat1",
  [aux_sym_variable_assignment_repeat1] = "variable_assignment_repeat1",
  [aux_sym_profile_repeat1] = "profile_repeat1",
  [aux_sym_profile_flags_repeat1] = "profile_flags_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_integer] = sym_integer,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_comment] = sym_comment,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_abi] = anon_sym_abi,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_profile] = anon_sym_profile,
  [anon_sym_flags_EQ] = anon_sym_flags_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_enforce] = anon_sym_enforce,
  [anon_sym_complain] = anon_sym_complain,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_default_allow] = anon_sym_default_allow,
  [anon_sym_unconfined] = anon_sym_unconfined,
  [anon_sym_prompt] = anon_sym_prompt,
  [anon_sym_audit] = anon_sym_audit,
  [anon_sym_mediate_deleted] = anon_sym_mediate_deleted,
  [anon_sym_attach_disconnected] = anon_sym_attach_disconnected,
  [anon_sym_attach_disconneced_DOTpath_EQ] = anon_sym_attach_disconneced_DOTpath_EQ,
  [anon_sym_chroot_relative] = anon_sym_chroot_relative,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_interruptible] = anon_sym_interruptible,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_deny] = anon_sym_deny,
  [aux_sym_access_token1] = aux_sym_access_token1,
  [anon_sym_ix] = anon_sym_ix,
  [anon_sym_ux] = anon_sym_ux,
  [anon_sym_Ux] = anon_sym_Ux,
  [anon_sym_px] = anon_sym_px,
  [anon_sym_Px] = anon_sym_Px,
  [anon_sym_cx] = anon_sym_cx,
  [anon_sym_Cx] = anon_sym_Cx,
  [anon_sym_pix] = anon_sym_pix,
  [anon_sym_Pix] = anon_sym_Pix,
  [anon_sym_cix] = anon_sym_cix,
  [anon_sym_Cix] = anon_sym_Cix,
  [anon_sym_pux] = anon_sym_pux,
  [anon_sym_PUx] = anon_sym_PUx,
  [anon_sym_cux] = anon_sym_cux,
  [anon_sym_CUx] = anon_sym_CUx,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_priority_EQ] = anon_sym_priority_EQ,
  [anon_sym_owner] = anon_sym_owner,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_network] = anon_sym_network,
  [sym_profile_file] = sym_profile_file,
  [sym_preamble] = sym_preamble,
  [sym_identifier] = sym_identifier,
  [sym_fileglob] = sym_fileglob,
  [sym_aare] = sym_aare,
  [sym_include] = sym_include,
  [sym_abi] = sym_abi,
  [sym_variable] = sym_variable,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_abs_path] = sym_abs_path,
  [sym_magic_path] = sym_magic_path,
  [sym_profile] = sym_profile,
  [sym_profile_flags] = sym_profile_flags,
  [sym_profile_mode] = sym_profile_mode,
  [sym_profile_flag] = sym_profile_flag,
  [sym_rules] = sym_rules,
  [sym_access_type] = sym_access_type,
  [sym_access] = sym_access,
  [sym_exec_transition] = sym_exec_transition,
  [sym_qualifier] = sym_qualifier,
  [sym_file_rule] = sym_file_rule,
  [sym_network_rule] = sym_network_rule,
  [aux_sym_profile_file_repeat1] = aux_sym_profile_file_repeat1,
  [aux_sym_preamble_repeat1] = aux_sym_preamble_repeat1,
  [aux_sym_fileglob_repeat1] = aux_sym_fileglob_repeat1,
  [aux_sym_aare_repeat1] = aux_sym_aare_repeat1,
  [aux_sym_variable_assignment_repeat1] = aux_sym_variable_assignment_repeat1,
  [aux_sym_profile_repeat1] = aux_sym_profile_repeat1,
  [aux_sym_profile_flags_repeat1] = aux_sym_profile_flags_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_profile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flags_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enforce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unconfined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mediate_deleted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attach_disconnected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attach_disconneced_DOTpath_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chroot_relative] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interruptible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deny] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_access_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ux] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ux] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_px] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Px] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pux] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cux] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CUx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priority_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_owner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_network] = {
    .visible = true,
    .named = false,
  },
  [sym_profile_file] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_fileglob] = {
    .visible = true,
    .named = true,
  },
  [sym_aare] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_abi] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_path] = {
    .visible = true,
    .named = true,
  },
  [sym_magic_path] = {
    .visible = true,
    .named = true,
  },
  [sym_profile] = {
    .visible = true,
    .named = true,
  },
  [sym_profile_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_profile_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_profile_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_access_type] = {
    .visible = true,
    .named = true,
  },
  [sym_access] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_transition] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_file_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_network_rule] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_profile_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preamble_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fileglob_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aare_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_profile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_profile_flags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_left = 1,
  field_name = 2,
  field_path = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_path] = "path",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_left, 0},
    {field_right, 2},
  [3] =
    {field_path, 1},
  [4] =
    {field_left, 0},
    {field_right, 2},
    {field_right, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 9,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 10,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 10,
  [42] = 9,
  [43] = 10,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 25,
  [48] = 18,
  [49] = 23,
  [50] = 20,
  [51] = 26,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 15,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 29,
  [63] = 18,
  [64] = 20,
  [65] = 23,
  [66] = 25,
  [67] = 26,
  [68] = 68,
  [69] = 16,
  [70] = 70,
  [71] = 14,
  [72] = 60,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 81,
  [91] = 87,
  [92] = 80,
  [93] = 86,
  [94] = 81,
  [95] = 87,
  [96] = 80,
  [97] = 86,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 101,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 98,
  [123] = 103,
  [124] = 110,
  [125] = 118,
  [126] = 101,
  [127] = 118,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 128,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 128,
  [143] = 143,
  [144] = 133,
  [145] = 145,
  [146] = 130,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 151,
  [158] = 158,
  [159] = 159,
  [160] = 151,
  [161] = 161,
  [162] = 154,
  [163] = 163,
  [164] = 161,
  [165] = 163,
  [166] = 145,
  [167] = 167,
  [168] = 161,
  [169] = 163,
  [170] = 154,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '"', 147,
        '#', 133,
        '(', 153,
        ')', 154,
        '*', 129,
        '+', 4,
        ',', 122,
        '-', 53,
        '/', 120,
        '<', 148,
        '=', 144,
        '>', 149,
        '?', 127,
        '@', 42,
        'C', 54,
        'P', 55,
        'U', 106,
        '[', 124,
        ']', 126,
        '^', 125,
        'a', 60,
        'c', 83,
        'f', 85,
        'i', 88,
        'p', 84,
        'u', 107,
        'x', 188,
        '{', 121,
        '}', 123,
      );
      if (('k' <= lookahead && lookahead <= 'm') ||
          lookahead == 'r' ||
          lookahead == 'w') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == '^') ADVANCE(125);
      if (lookahead == '{') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 147,
        '(', 153,
        '*', 129,
        ',', 122,
        '>', 149,
        '?', 127,
        '@', 42,
        '[', 124,
        '^', 125,
        'f', 85,
        'p', 98,
        '{', 121,
        '}', 123,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 133,
        '*', 129,
        '?', 127,
        '@', 42,
        '[', 124,
        '^', 125,
        'i', 89,
        'p', 98,
        '{', 121,
        '}', 123,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'C', 8,
        'P', 9,
        'U', 31,
        'c', 21,
        'i', 32,
        'p', 22,
        'u', 33,
        'x', 187,
      );
      if (lookahead == 'a' ||
          ('k' <= lookahead && lookahead <= 'm') ||
          lookahead == 'r' ||
          lookahead == 'w') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(161);
      END_STATE();
    case 32:
      if (lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 33:
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 34:
      if (lookahead == 'x') ADVANCE(185);
      END_STATE();
    case 35:
      if (lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 36:
      if (lookahead == 'x') ADVANCE(181);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(175);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 41:
      if (lookahead == 'x') ADVANCE(179);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(143);
      END_STATE();
    case 43:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        ' ', 146,
        '#', 133,
        '*', 129,
        '?', 127,
        '@', 42,
        '[', 124,
        '^', 125,
        'a', 61,
        'i', 89,
        'p', 97,
        '{', 121,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(43);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(44);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '#', 133,
        '(', 153,
        ')', 154,
        '+', 4,
        ',', 122,
        '-', 6,
        '/', 119,
        '=', 144,
        '@', 42,
        'a', 12,
        'f', 23,
        'i', 26,
        'p', 28,
        '{', 121,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.') ADVANCE(95);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(152);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(189);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(155);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '>') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(170);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(166);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(68);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(74);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(62);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == 'a' ||
          ('k' <= lookahead && lookahead <= 'm') ||
          lookahead == 'r' ||
          lookahead == 'w') ADVANCE(117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(77);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(75);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(86);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(94);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(71);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(69);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(49);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(81);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(82);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(99);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(56);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(52);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(142);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(73);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(93);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(100);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(168);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(164);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(105);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(70);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(158);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(63);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(72);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(73);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(90);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(59);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(80);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(79);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(50);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(64);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(103);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(58);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(66);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(162);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(186);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(178);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(182);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(174);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(176);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(184);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(172);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(180);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(51);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a' ||
          ('k' <= lookahead && lookahead <= 'm') ||
          lookahead == 'r' ||
          lookahead == 'w') ADVANCE(117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_include);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_abi);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_abi);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_profile);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_flags_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_attach_disconneced_DOTpath_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_access_token1);
      if (lookahead == 'a' ||
          ('k' <= lookahead && lookahead <= 'm') ||
          lookahead == 'r' ||
          lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_ix);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_ix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_ux);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ux);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Ux);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Ux);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_px);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Px);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_Px);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_cx);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_cx);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Cx);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Cx);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_pix);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_pix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Pix);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Pix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_cix);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_cix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Cix);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_Cix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_pux);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_pux);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PUx);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_PUx);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_cux);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_cux);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_CUx);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_CUx);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_x);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_priority_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'c', 2,
        'd', 3,
        'e', 4,
        'i', 5,
        'k', 6,
        'm', 7,
        'n', 8,
        'o', 9,
        'p', 10,
        'u', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'w') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_deny);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_audit);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_owner);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_enforce);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_network);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_complain);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_unconfined);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 117:
      if (lookahead == 'w') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_default_allow);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_interruptible);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_chroot_relative);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_mediate_deleted);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_attach_disconnected);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 45},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 45},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 45},
  [100] = {.lex_state = 45},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 45},
  [113] = {.lex_state = 45},
  [114] = {.lex_state = 45},
  [115] = {.lex_state = 45},
  [116] = {.lex_state = 45},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 45},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 45},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 45},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 45},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 45},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 43},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 43},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_abi] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_profile] = ACTIONS(1),
    [anon_sym_flags_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_enforce] = ACTIONS(1),
    [anon_sym_complain] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_default_allow] = ACTIONS(1),
    [anon_sym_unconfined] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [anon_sym_audit] = ACTIONS(1),
    [anon_sym_mediate_deleted] = ACTIONS(1),
    [anon_sym_attach_disconnected] = ACTIONS(1),
    [anon_sym_attach_disconneced_DOTpath_EQ] = ACTIONS(1),
    [anon_sym_chroot_relative] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_interruptible] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_deny] = ACTIONS(1),
    [aux_sym_access_token1] = ACTIONS(1),
    [anon_sym_ix] = ACTIONS(1),
    [anon_sym_ux] = ACTIONS(1),
    [anon_sym_Ux] = ACTIONS(1),
    [anon_sym_px] = ACTIONS(1),
    [anon_sym_Px] = ACTIONS(1),
    [anon_sym_cx] = ACTIONS(1),
    [anon_sym_Cx] = ACTIONS(1),
    [anon_sym_pix] = ACTIONS(1),
    [anon_sym_Pix] = ACTIONS(1),
    [anon_sym_cix] = ACTIONS(1),
    [anon_sym_Cix] = ACTIONS(1),
    [anon_sym_pux] = ACTIONS(1),
    [anon_sym_PUx] = ACTIONS(1),
    [anon_sym_cux] = ACTIONS(1),
    [anon_sym_CUx] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_priority_EQ] = ACTIONS(1),
    [anon_sym_owner] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_network] = ACTIONS(1),
  },
  [1] = {
    [sym_profile_file] = STATE(141),
    [sym_preamble] = STATE(77),
    [sym_include] = STATE(44),
    [sym_abi] = STATE(44),
    [sym_variable] = STATE(102),
    [sym_variable_assignment] = STATE(44),
    [aux_sym_preamble_repeat1] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(5),
    [anon_sym_abi] = ACTIONS(7),
    [anon_sym_AT_LBRACE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_POUNDinclude,
    ACTIONS(29), 1,
      anon_sym_audit,
    ACTIONS(33), 1,
      anon_sym_priority_EQ,
    ACTIONS(35), 1,
      anon_sym_owner,
    ACTIONS(37), 1,
      anon_sym_network,
    STATE(6), 1,
      aux_sym_rules_repeat1,
    STATE(30), 1,
      sym_qualifier,
    STATE(55), 1,
      sym_access_type,
    STATE(137), 1,
      sym_variable,
    STATE(147), 1,
      sym_fileglob,
    STATE(150), 1,
      sym_rules,
    ACTIONS(31), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(5), 2,
      sym_include,
      aux_sym_profile_repeat1,
    STATE(159), 2,
      sym_file_rule,
      sym_network_rule,
    ACTIONS(19), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [80] = 24,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_POUNDinclude,
    ACTIONS(29), 1,
      anon_sym_audit,
    ACTIONS(33), 1,
      anon_sym_priority_EQ,
    ACTIONS(35), 1,
      anon_sym_owner,
    ACTIONS(37), 1,
      anon_sym_network,
    ACTIONS(39), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_rules_repeat1,
    STATE(30), 1,
      sym_qualifier,
    STATE(55), 1,
      sym_access_type,
    STATE(137), 1,
      sym_variable,
    STATE(147), 1,
      sym_fileglob,
    STATE(150), 1,
      sym_rules,
    ACTIONS(31), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(8), 2,
      sym_include,
      aux_sym_profile_repeat1,
    STATE(159), 2,
      sym_file_rule,
      sym_network_rule,
    ACTIONS(19), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [160] = 24,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_POUNDinclude,
    ACTIONS(29), 1,
      anon_sym_audit,
    ACTIONS(33), 1,
      anon_sym_priority_EQ,
    ACTIONS(35), 1,
      anon_sym_owner,
    ACTIONS(37), 1,
      anon_sym_network,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_rules_repeat1,
    STATE(30), 1,
      sym_qualifier,
    STATE(55), 1,
      sym_access_type,
    STATE(137), 1,
      sym_variable,
    STATE(147), 1,
      sym_fileglob,
    STATE(153), 1,
      sym_rules,
    ACTIONS(31), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(3), 2,
      sym_include,
      aux_sym_profile_repeat1,
    STATE(159), 2,
      sym_file_rule,
      sym_network_rule,
    ACTIONS(19), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [240] = 24,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_POUNDinclude,
    ACTIONS(29), 1,
      anon_sym_audit,
    ACTIONS(33), 1,
      anon_sym_priority_EQ,
    ACTIONS(35), 1,
      anon_sym_owner,
    ACTIONS(37), 1,
      anon_sym_network,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_rules_repeat1,
    STATE(30), 1,
      sym_qualifier,
    STATE(55), 1,
      sym_access_type,
    STATE(135), 1,
      sym_rules,
    STATE(137), 1,
      sym_variable,
    STATE(147), 1,
      sym_fileglob,
    ACTIONS(31), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(8), 2,
      sym_include,
      aux_sym_profile_repeat1,
    STATE(159), 2,
      sym_file_rule,
      sym_network_rule,
    ACTIONS(19), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [320] = 19,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_audit,
    ACTIONS(33), 1,
      anon_sym_priority_EQ,
    ACTIONS(35), 1,
      anon_sym_owner,
    ACTIONS(37), 1,
      anon_sym_network,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_rules_repeat1,
    STATE(30), 1,
      sym_qualifier,
    STATE(55), 1,
      sym_access_type,
    STATE(137), 1,
      sym_variable,
    STATE(147), 1,
      sym_fileglob,
    ACTIONS(31), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(159), 2,
      sym_file_rule,
      sym_network_rule,
    ACTIONS(19), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [384] = 19,
    ACTIONS(49), 1,
      sym__identifier,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(66), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(69), 1,
      anon_sym_audit,
    ACTIONS(75), 1,
      anon_sym_priority_EQ,
    ACTIONS(78), 1,
      anon_sym_owner,
    ACTIONS(81), 1,
      anon_sym_network,
    STATE(7), 1,
      aux_sym_rules_repeat1,
    STATE(30), 1,
      sym_qualifier,
    STATE(55), 1,
      sym_access_type,
    STATE(137), 1,
      sym_variable,
    STATE(147), 1,
      sym_fileglob,
    ACTIONS(72), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(159), 2,
      sym_file_rule,
      sym_network_rule,
    ACTIONS(60), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [448] = 6,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_include,
    ACTIONS(94), 1,
      anon_sym_POUNDinclude,
    STATE(8), 2,
      sym_include,
      aux_sym_profile_repeat1,
    ACTIONS(84), 7,
      sym__identifier,
      anon_sym_STAR,
      anon_sym_audit,
      anon_sym_allow,
      anon_sym_deny,
      anon_sym_owner,
      anon_sym_network,
    ACTIONS(86), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_priority_EQ,
  [481] = 9,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_AT_LBRACE,
    STATE(142), 1,
      sym_variable,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    STATE(9), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
    ACTIONS(108), 4,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
    ACTIONS(111), 5,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_profile,
  [519] = 8,
    ACTIONS(118), 1,
      sym__identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym_variable,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    STATE(9), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
    ACTIONS(124), 4,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
    ACTIONS(126), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [555] = 4,
    ACTIONS(128), 1,
      aux_sym_access_token1,
    STATE(100), 1,
      sym_access,
    STATE(112), 1,
      sym_exec_transition,
    ACTIONS(130), 16,
      anon_sym_ix,
      anon_sym_ux,
      anon_sym_Ux,
      anon_sym_px,
      anon_sym_Px,
      anon_sym_cx,
      anon_sym_Cx,
      anon_sym_pix,
      anon_sym_Pix,
      anon_sym_cix,
      anon_sym_Cix,
      anon_sym_pux,
      anon_sym_PUx,
      anon_sym_cux,
      anon_sym_CUx,
      anon_sym_x,
  [583] = 4,
    ACTIONS(128), 1,
      aux_sym_access_token1,
    STATE(112), 1,
      sym_exec_transition,
    STATE(114), 1,
      sym_access,
    ACTIONS(130), 16,
      anon_sym_ix,
      anon_sym_ux,
      anon_sym_Ux,
      anon_sym_px,
      anon_sym_Px,
      anon_sym_cx,
      anon_sym_Cx,
      anon_sym_pix,
      anon_sym_Pix,
      anon_sym_cix,
      anon_sym_Cix,
      anon_sym_pux,
      anon_sym_PUx,
      anon_sym_cux,
      anon_sym_CUx,
      anon_sym_x,
  [611] = 4,
    ACTIONS(128), 1,
      aux_sym_access_token1,
    STATE(112), 1,
      sym_exec_transition,
    STATE(119), 1,
      sym_access,
    ACTIONS(130), 16,
      anon_sym_ix,
      anon_sym_ux,
      anon_sym_Ux,
      anon_sym_px,
      anon_sym_Px,
      anon_sym_cx,
      anon_sym_Cx,
      anon_sym_pix,
      anon_sym_Pix,
      anon_sym_cix,
      anon_sym_Cix,
      anon_sym_pux,
      anon_sym_PUx,
      anon_sym_cux,
      anon_sym_CUx,
      anon_sym_x,
  [639] = 2,
    ACTIONS(132), 9,
      sym__identifier,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_audit,
      anon_sym_allow,
      anon_sym_deny,
      anon_sym_owner,
      anon_sym_network,
    ACTIONS(134), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_POUNDinclude,
      anon_sym_AT_LBRACE,
      anon_sym_priority_EQ,
  [662] = 2,
    ACTIONS(136), 9,
      sym__identifier,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_audit,
      anon_sym_allow,
      anon_sym_deny,
      anon_sym_owner,
      anon_sym_network,
    ACTIONS(138), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_POUNDinclude,
      anon_sym_AT_LBRACE,
      anon_sym_priority_EQ,
  [685] = 2,
    ACTIONS(140), 9,
      sym__identifier,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_audit,
      anon_sym_allow,
      anon_sym_deny,
      anon_sym_owner,
      anon_sym_network,
    ACTIONS(142), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_POUNDinclude,
      anon_sym_AT_LBRACE,
      anon_sym_priority_EQ,
  [708] = 5,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_SPACE,
    STATE(61), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(149), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
    ACTIONS(147), 7,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
  [735] = 2,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(157), 13,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [755] = 5,
    ACTIONS(163), 1,
      anon_sym_attach_disconneced_DOTpath_EQ,
    STATE(88), 1,
      sym_profile_flag,
    STATE(105), 1,
      sym_profile_mode,
    ACTIONS(159), 6,
      anon_sym_enforce,
      anon_sym_complain,
      anon_sym_kill,
      anon_sym_default_allow,
      anon_sym_unconfined,
      anon_sym_prompt,
    ACTIONS(161), 6,
      anon_sym_audit,
      anon_sym_mediate_deleted,
      anon_sym_attach_disconnected,
      anon_sym_chroot_relative,
      anon_sym_debug,
      anon_sym_interruptible,
  [781] = 2,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(167), 13,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [801] = 3,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(172), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
    ACTIONS(147), 7,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
  [823] = 9,
    ACTIONS(175), 1,
      sym__identifier,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      anon_sym_AT_LBRACE,
    STATE(128), 1,
      sym_variable,
    ACTIONS(97), 3,
      anon_sym_COMMA,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
    ACTIONS(184), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(22), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [857] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(111), 13,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [877] = 5,
    ACTIONS(163), 1,
      anon_sym_attach_disconneced_DOTpath_EQ,
    STATE(82), 1,
      sym_profile_flag,
    STATE(105), 1,
      sym_profile_mode,
    ACTIONS(159), 6,
      anon_sym_enforce,
      anon_sym_complain,
      anon_sym_kill,
      anon_sym_default_allow,
      anon_sym_unconfined,
      anon_sym_prompt,
    ACTIONS(161), 6,
      anon_sym_audit,
      anon_sym_mediate_deleted,
      anon_sym_attach_disconnected,
      anon_sym_chroot_relative,
      anon_sym_debug,
      anon_sym_interruptible,
  [903] = 2,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(195), 13,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [923] = 2,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(199), 13,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [943] = 5,
    ACTIONS(163), 1,
      anon_sym_attach_disconneced_DOTpath_EQ,
    STATE(105), 1,
      sym_profile_mode,
    STATE(117), 1,
      sym_profile_flag,
    ACTIONS(159), 6,
      anon_sym_enforce,
      anon_sym_complain,
      anon_sym_kill,
      anon_sym_default_allow,
      anon_sym_unconfined,
      anon_sym_prompt,
    ACTIONS(161), 6,
      anon_sym_audit,
      anon_sym_mediate_deleted,
      anon_sym_attach_disconnected,
      anon_sym_chroot_relative,
      anon_sym_debug,
      anon_sym_interruptible,
  [969] = 2,
    ACTIONS(201), 7,
      sym__identifier,
      anon_sym_STAR,
      anon_sym_audit,
      anon_sym_allow,
      anon_sym_deny,
      anon_sym_owner,
      anon_sym_network,
    ACTIONS(55), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_priority_EQ,
  [989] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(205), 13,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1009] = 10,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      anon_sym_owner,
    STATE(137), 1,
      sym_variable,
    STATE(148), 1,
      sym_fileglob,
    ACTIONS(19), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [1044] = 2,
    ACTIONS(205), 2,
      sym__identifier,
      anon_sym_STAR,
    ACTIONS(203), 12,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_GT,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
  [1063] = 8,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(209), 1,
      sym__identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_STAR,
    STATE(128), 1,
      sym_variable,
    ACTIONS(116), 3,
      anon_sym_LBRACE,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
    ACTIONS(213), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(22), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [1094] = 9,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      sym__identifier,
    STATE(137), 1,
      sym_variable,
    STATE(158), 1,
      sym_fileglob,
    ACTIONS(19), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [1126] = 10,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      sym__identifier,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_identifier,
    STATE(73), 1,
      sym_variable,
    STATE(75), 1,
      sym_fileglob,
    STATE(32), 2,
      sym_aare,
      aux_sym_fileglob_repeat1,
    ACTIONS(213), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
  [1160] = 10,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_AT_LBRACE,
    STATE(17), 1,
      sym_identifier,
    STATE(52), 1,
      sym_variable,
    STATE(57), 1,
      sym_fileglob,
    STATE(10), 2,
      sym_aare,
      aux_sym_fileglob_repeat1,
    ACTIONS(229), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
  [1194] = 9,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      sym__identifier,
    STATE(137), 1,
      sym_variable,
    STATE(148), 1,
      sym_fileglob,
    ACTIONS(19), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(41), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [1226] = 9,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      sym__identifier,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_variable,
    STATE(149), 1,
      sym_fileglob,
    ACTIONS(213), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(43), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [1258] = 10,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_AT_LBRACE,
    STATE(21), 1,
      sym_identifier,
    STATE(53), 1,
      sym_variable,
    STATE(68), 1,
      sym_fileglob,
    STATE(10), 2,
      sym_aare,
      aux_sym_fileglob_repeat1,
    ACTIONS(229), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
  [1292] = 9,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      sym__identifier,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_variable,
    STATE(152), 1,
      sym_fileglob,
    ACTIONS(213), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(43), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [1324] = 9,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      sym__identifier,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_variable,
    STATE(155), 1,
      sym_fileglob,
    ACTIONS(213), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(43), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [1356] = 8,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(116), 1,
      anon_sym_SPACE,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_AT_LBRACE,
    STATE(137), 1,
      sym_variable,
    STATE(42), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
    ACTIONS(21), 4,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
  [1386] = 8,
    ACTIONS(97), 1,
      anon_sym_SPACE,
    ACTIONS(113), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    STATE(137), 1,
      sym_variable,
    STATE(42), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
    ACTIONS(248), 4,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
  [1416] = 9,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      sym__identifier,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_variable,
    ACTIONS(213), 3,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(22), 3,
      sym_identifier,
      sym_aare,
      aux_sym_fileglob_repeat1,
  [1448] = 7,
    ACTIONS(7), 1,
      anon_sym_abi,
    ACTIONS(9), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(253), 1,
      sym_comment,
    STATE(102), 1,
      sym_variable,
    ACTIONS(5), 2,
      anon_sym_include,
      anon_sym_POUNDinclude,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
    STATE(45), 4,
      sym_include,
      sym_abi,
      sym_variable_assignment,
      aux_sym_preamble_repeat1,
  [1475] = 7,
    ACTIONS(257), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_abi,
    ACTIONS(266), 1,
      anon_sym_AT_LBRACE,
    STATE(102), 1,
      sym_variable,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
    ACTIONS(260), 2,
      anon_sym_include,
      anon_sym_POUNDinclude,
    STATE(45), 4,
      sym_include,
      sym_abi,
      sym_variable_assignment,
      aux_sym_preamble_repeat1,
  [1502] = 6,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_flags_EQ,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_profile_flags,
    ACTIONS(147), 2,
      sym__identifier,
      anon_sym_STAR,
    ACTIONS(272), 5,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
  [1526] = 2,
    ACTIONS(195), 2,
      sym__identifier,
      anon_sym_STAR,
    ACTIONS(193), 9,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
  [1542] = 2,
    ACTIONS(157), 2,
      sym__identifier,
      anon_sym_STAR,
    ACTIONS(155), 9,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
  [1558] = 2,
    ACTIONS(111), 2,
      sym__identifier,
      anon_sym_STAR,
    ACTIONS(97), 9,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
  [1574] = 2,
    ACTIONS(167), 2,
      sym__identifier,
      anon_sym_STAR,
    ACTIONS(165), 9,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
  [1590] = 2,
    ACTIONS(199), 2,
      sym__identifier,
      anon_sym_STAR,
    ACTIONS(197), 9,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
  [1606] = 5,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    ACTIONS(286), 1,
      anon_sym_SPACE,
    STATE(61), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(284), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1627] = 3,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(290), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1643] = 4,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      anon_sym_SPACE,
    STATE(54), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(290), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1661] = 2,
    ACTIONS(295), 3,
      sym__identifier,
      anon_sym_STAR,
      anon_sym_owner,
    ACTIONS(297), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
  [1675] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
      anon_sym_RPAREN,
  [1689] = 4,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_SPACE,
    STATE(61), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(284), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1707] = 2,
    ACTIONS(299), 3,
      sym__identifier,
      anon_sym_STAR,
      anon_sym_owner,
    ACTIONS(301), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
  [1721] = 2,
    ACTIONS(303), 3,
      sym__identifier,
      anon_sym_STAR,
      anon_sym_owner,
    ACTIONS(305), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_AT_LBRACE,
  [1735] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(309), 7,
      anon_sym_SLASH,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1749] = 4,
    ACTIONS(286), 1,
      anon_sym_SPACE,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_variable_assignment_repeat1,
    ACTIONS(313), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1767] = 2,
    ACTIONS(203), 1,
      anon_sym_SPACE,
    ACTIONS(205), 8,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
  [1781] = 2,
    ACTIONS(155), 1,
      anon_sym_SPACE,
    ACTIONS(157), 8,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
  [1795] = 2,
    ACTIONS(165), 1,
      anon_sym_SPACE,
    ACTIONS(167), 8,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
  [1809] = 2,
    ACTIONS(97), 1,
      anon_sym_SPACE,
    ACTIONS(111), 8,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
  [1823] = 2,
    ACTIONS(193), 1,
      anon_sym_SPACE,
    ACTIONS(195), 8,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
  [1837] = 2,
    ACTIONS(197), 1,
      anon_sym_SPACE,
    ACTIONS(199), 8,
      sym__identifier,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
  [1851] = 2,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_SPACE,
    ACTIONS(290), 6,
      sym_comment,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1864] = 2,
    ACTIONS(140), 1,
      sym_comment,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1877] = 2,
    ACTIONS(317), 1,
      sym_comment,
    ACTIONS(315), 6,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1889] = 2,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_POUNDinclude,
      anon_sym_abi,
      anon_sym_AT_LBRACE,
      anon_sym_profile,
  [1901] = 1,
    ACTIONS(307), 6,
      anon_sym_SLASH,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_flags_EQ,
      anon_sym_LPAREN,
  [1910] = 5,
    ACTIONS(319), 1,
      anon_sym_SLASH,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 1,
      anon_sym_flags_EQ,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_profile_flags,
  [1926] = 3,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_LT,
    STATE(71), 2,
      sym_abs_path,
      sym_magic_path,
  [1937] = 4,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 1,
      anon_sym_flags_EQ,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_profile_flags,
  [1950] = 3,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_LT,
    STATE(14), 2,
      sym_abs_path,
      sym_magic_path,
  [1961] = 3,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 1,
      anon_sym_profile,
    STATE(78), 2,
      sym_profile,
      aux_sym_profile_file_repeat1,
  [1972] = 3,
    ACTIONS(337), 1,
      anon_sym_profile,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(79), 2,
      sym_profile,
      aux_sym_profile_file_repeat1,
  [1983] = 3,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      anon_sym_profile,
    STATE(79), 2,
      sym_profile,
      aux_sym_profile_file_repeat1,
  [1994] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_aare_repeat1,
  [2004] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_aare_repeat1,
  [2014] = 3,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_profile_flags_repeat1,
  [2024] = 3,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_profile_flags_repeat1,
  [2034] = 3,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_profile_flags_repeat1,
  [2044] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_profile_flags_repeat1,
  [2054] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_aare_repeat1,
  [2064] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_aare_repeat1,
  [2074] = 3,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_profile_flags_repeat1,
  [2084] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_aare_repeat1,
  [2094] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_aare_repeat1,
  [2104] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_aare_repeat1,
  [2114] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_aare_repeat1,
  [2124] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_aare_repeat1,
  [2134] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_aare_repeat1,
  [2144] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_aare_repeat1,
  [2154] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_aare_repeat1,
  [2164] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_aare_repeat1,
  [2174] = 2,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
  [2181] = 1,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [2186] = 2,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_DASH_GT,
  [2193] = 2,
    ACTIONS(390), 1,
      sym__identifier,
    ACTIONS(392), 1,
      anon_sym_CARET,
  [2200] = 1,
    ACTIONS(394), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [2205] = 2,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(166), 1,
      sym_identifier,
  [2212] = 1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2217] = 1,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2222] = 2,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_abs_path,
  [2229] = 2,
    ACTIONS(400), 1,
      sym__identifier,
    ACTIONS(402), 1,
      anon_sym_CARET,
  [2236] = 2,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(34), 1,
      sym_identifier,
  [2243] = 1,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2248] = 2,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
  [2255] = 2,
    ACTIONS(329), 1,
      anon_sym_LT,
    STATE(167), 1,
      sym_magic_path,
  [2262] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2267] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2272] = 2,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_DASH_GT,
  [2279] = 1,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [2284] = 1,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [2289] = 1,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2294] = 2,
    ACTIONS(416), 1,
      sym__identifier,
    ACTIONS(418), 1,
      anon_sym_COMMA,
  [2301] = 2,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_DASH_GT,
  [2308] = 1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2313] = 1,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [2318] = 2,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(144), 1,
      sym_identifier,
  [2325] = 2,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(145), 1,
      sym_identifier,
  [2332] = 2,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(146), 1,
      sym_identifier,
  [2339] = 2,
    ACTIONS(428), 1,
      sym__identifier,
    ACTIONS(430), 1,
      anon_sym_COMMA,
  [2346] = 2,
    ACTIONS(432), 1,
      sym__identifier,
    ACTIONS(434), 1,
      anon_sym_CARET,
  [2353] = 2,
    ACTIONS(436), 1,
      sym__identifier,
    ACTIONS(438), 1,
      anon_sym_COMMA,
  [2360] = 1,
    ACTIONS(319), 1,
      anon_sym_SLASH,
  [2364] = 1,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
  [2368] = 1,
    ACTIONS(442), 1,
      anon_sym_GT,
  [2372] = 1,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
  [2376] = 1,
    ACTIONS(446), 1,
      sym__identifier,
  [2380] = 1,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
  [2384] = 1,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
  [2388] = 1,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
  [2392] = 1,
    ACTIONS(454), 1,
      sym_integer,
  [2396] = 1,
    ACTIONS(456), 1,
      anon_sym_SLASH,
  [2400] = 1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
  [2404] = 1,
    ACTIONS(460), 1,
      sym__identifier,
  [2408] = 1,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [2412] = 1,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [2416] = 1,
    ACTIONS(466), 1,
      anon_sym_SLASH,
  [2420] = 1,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
  [2424] = 1,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
  [2428] = 1,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
  [2432] = 1,
    ACTIONS(474), 1,
      anon_sym_GT,
  [2436] = 1,
    ACTIONS(476), 1,
      anon_sym_SPACE,
  [2440] = 1,
    ACTIONS(478), 1,
      anon_sym_SPACE,
  [2444] = 1,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [2448] = 1,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
  [2452] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
  [2456] = 1,
    ACTIONS(480), 1,
      anon_sym_COMMA,
  [2460] = 1,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
  [2464] = 1,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
  [2468] = 1,
    ACTIONS(482), 1,
      anon_sym_COMMA,
  [2472] = 1,
    ACTIONS(484), 1,
      sym__identifier,
  [2476] = 1,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
  [2480] = 1,
    ACTIONS(486), 1,
      anon_sym_SPACE,
  [2484] = 1,
    ACTIONS(488), 1,
      anon_sym_COMMA,
  [2488] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
  [2492] = 1,
    ACTIONS(490), 1,
      sym__identifier,
  [2496] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
  [2500] = 1,
    ACTIONS(492), 1,
      sym__identifier,
  [2504] = 1,
    ACTIONS(494), 1,
      sym__identifier,
  [2508] = 1,
    ACTIONS(496), 1,
      sym__identifier,
  [2512] = 1,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
  [2516] = 1,
    ACTIONS(500), 1,
      anon_sym_COMMA,
  [2520] = 1,
    ACTIONS(502), 1,
      sym__identifier,
  [2524] = 1,
    ACTIONS(504), 1,
      sym__identifier,
  [2528] = 1,
    ACTIONS(374), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 240,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 384,
  [SMALL_STATE(8)] = 448,
  [SMALL_STATE(9)] = 481,
  [SMALL_STATE(10)] = 519,
  [SMALL_STATE(11)] = 555,
  [SMALL_STATE(12)] = 583,
  [SMALL_STATE(13)] = 611,
  [SMALL_STATE(14)] = 639,
  [SMALL_STATE(15)] = 662,
  [SMALL_STATE(16)] = 685,
  [SMALL_STATE(17)] = 708,
  [SMALL_STATE(18)] = 735,
  [SMALL_STATE(19)] = 755,
  [SMALL_STATE(20)] = 781,
  [SMALL_STATE(21)] = 801,
  [SMALL_STATE(22)] = 823,
  [SMALL_STATE(23)] = 857,
  [SMALL_STATE(24)] = 877,
  [SMALL_STATE(25)] = 903,
  [SMALL_STATE(26)] = 923,
  [SMALL_STATE(27)] = 943,
  [SMALL_STATE(28)] = 969,
  [SMALL_STATE(29)] = 989,
  [SMALL_STATE(30)] = 1009,
  [SMALL_STATE(31)] = 1044,
  [SMALL_STATE(32)] = 1063,
  [SMALL_STATE(33)] = 1094,
  [SMALL_STATE(34)] = 1126,
  [SMALL_STATE(35)] = 1160,
  [SMALL_STATE(36)] = 1194,
  [SMALL_STATE(37)] = 1226,
  [SMALL_STATE(38)] = 1258,
  [SMALL_STATE(39)] = 1292,
  [SMALL_STATE(40)] = 1324,
  [SMALL_STATE(41)] = 1356,
  [SMALL_STATE(42)] = 1386,
  [SMALL_STATE(43)] = 1416,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1475,
  [SMALL_STATE(46)] = 1502,
  [SMALL_STATE(47)] = 1526,
  [SMALL_STATE(48)] = 1542,
  [SMALL_STATE(49)] = 1558,
  [SMALL_STATE(50)] = 1574,
  [SMALL_STATE(51)] = 1590,
  [SMALL_STATE(52)] = 1606,
  [SMALL_STATE(53)] = 1627,
  [SMALL_STATE(54)] = 1643,
  [SMALL_STATE(55)] = 1661,
  [SMALL_STATE(56)] = 1675,
  [SMALL_STATE(57)] = 1689,
  [SMALL_STATE(58)] = 1707,
  [SMALL_STATE(59)] = 1721,
  [SMALL_STATE(60)] = 1735,
  [SMALL_STATE(61)] = 1749,
  [SMALL_STATE(62)] = 1767,
  [SMALL_STATE(63)] = 1781,
  [SMALL_STATE(64)] = 1795,
  [SMALL_STATE(65)] = 1809,
  [SMALL_STATE(66)] = 1823,
  [SMALL_STATE(67)] = 1837,
  [SMALL_STATE(68)] = 1851,
  [SMALL_STATE(69)] = 1864,
  [SMALL_STATE(70)] = 1877,
  [SMALL_STATE(71)] = 1889,
  [SMALL_STATE(72)] = 1901,
  [SMALL_STATE(73)] = 1910,
  [SMALL_STATE(74)] = 1926,
  [SMALL_STATE(75)] = 1937,
  [SMALL_STATE(76)] = 1950,
  [SMALL_STATE(77)] = 1961,
  [SMALL_STATE(78)] = 1972,
  [SMALL_STATE(79)] = 1983,
  [SMALL_STATE(80)] = 1994,
  [SMALL_STATE(81)] = 2004,
  [SMALL_STATE(82)] = 2014,
  [SMALL_STATE(83)] = 2024,
  [SMALL_STATE(84)] = 2034,
  [SMALL_STATE(85)] = 2044,
  [SMALL_STATE(86)] = 2054,
  [SMALL_STATE(87)] = 2064,
  [SMALL_STATE(88)] = 2074,
  [SMALL_STATE(89)] = 2084,
  [SMALL_STATE(90)] = 2094,
  [SMALL_STATE(91)] = 2104,
  [SMALL_STATE(92)] = 2114,
  [SMALL_STATE(93)] = 2124,
  [SMALL_STATE(94)] = 2134,
  [SMALL_STATE(95)] = 2144,
  [SMALL_STATE(96)] = 2154,
  [SMALL_STATE(97)] = 2164,
  [SMALL_STATE(98)] = 2174,
  [SMALL_STATE(99)] = 2181,
  [SMALL_STATE(100)] = 2186,
  [SMALL_STATE(101)] = 2193,
  [SMALL_STATE(102)] = 2200,
  [SMALL_STATE(103)] = 2205,
  [SMALL_STATE(104)] = 2212,
  [SMALL_STATE(105)] = 2217,
  [SMALL_STATE(106)] = 2222,
  [SMALL_STATE(107)] = 2229,
  [SMALL_STATE(108)] = 2236,
  [SMALL_STATE(109)] = 2243,
  [SMALL_STATE(110)] = 2248,
  [SMALL_STATE(111)] = 2255,
  [SMALL_STATE(112)] = 2262,
  [SMALL_STATE(113)] = 2267,
  [SMALL_STATE(114)] = 2272,
  [SMALL_STATE(115)] = 2279,
  [SMALL_STATE(116)] = 2284,
  [SMALL_STATE(117)] = 2289,
  [SMALL_STATE(118)] = 2294,
  [SMALL_STATE(119)] = 2301,
  [SMALL_STATE(120)] = 2308,
  [SMALL_STATE(121)] = 2313,
  [SMALL_STATE(122)] = 2318,
  [SMALL_STATE(123)] = 2325,
  [SMALL_STATE(124)] = 2332,
  [SMALL_STATE(125)] = 2339,
  [SMALL_STATE(126)] = 2346,
  [SMALL_STATE(127)] = 2353,
  [SMALL_STATE(128)] = 2360,
  [SMALL_STATE(129)] = 2364,
  [SMALL_STATE(130)] = 2368,
  [SMALL_STATE(131)] = 2372,
  [SMALL_STATE(132)] = 2376,
  [SMALL_STATE(133)] = 2380,
  [SMALL_STATE(134)] = 2384,
  [SMALL_STATE(135)] = 2388,
  [SMALL_STATE(136)] = 2392,
  [SMALL_STATE(137)] = 2396,
  [SMALL_STATE(138)] = 2400,
  [SMALL_STATE(139)] = 2404,
  [SMALL_STATE(140)] = 2408,
  [SMALL_STATE(141)] = 2412,
  [SMALL_STATE(142)] = 2416,
  [SMALL_STATE(143)] = 2420,
  [SMALL_STATE(144)] = 2424,
  [SMALL_STATE(145)] = 2428,
  [SMALL_STATE(146)] = 2432,
  [SMALL_STATE(147)] = 2436,
  [SMALL_STATE(148)] = 2440,
  [SMALL_STATE(149)] = 2444,
  [SMALL_STATE(150)] = 2448,
  [SMALL_STATE(151)] = 2452,
  [SMALL_STATE(152)] = 2456,
  [SMALL_STATE(153)] = 2460,
  [SMALL_STATE(154)] = 2464,
  [SMALL_STATE(155)] = 2468,
  [SMALL_STATE(156)] = 2472,
  [SMALL_STATE(157)] = 2476,
  [SMALL_STATE(158)] = 2480,
  [SMALL_STATE(159)] = 2484,
  [SMALL_STATE(160)] = 2488,
  [SMALL_STATE(161)] = 2492,
  [SMALL_STATE(162)] = 2496,
  [SMALL_STATE(163)] = 2500,
  [SMALL_STATE(164)] = 2504,
  [SMALL_STATE(165)] = 2508,
  [SMALL_STATE(166)] = 2512,
  [SMALL_STATE(167)] = 2516,
  [SMALL_STATE(168)] = 2520,
  [SMALL_STATE(169)] = 2524,
  [SMALL_STATE(170)] = 2528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileglob, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fileglob, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_path, 3, 0, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_path, 3, 0, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_magic_path, 3, 0, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_magic_path, 3, 0, 3),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0), REDUCE(sym_variable_assignment, 3, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0), REDUCE(sym_variable_assignment, 3, 0, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0), SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aare, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aare, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aare, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aare, 3, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0), REDUCE(aux_sym_variable_assignment_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0), REDUCE(aux_sym_variable_assignment_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aare, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aare, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aare, 5, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aare, 5, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fileglob_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0), SHIFT(4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0), SHIFT(134),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fileglob_repeat1, 1, 0, 0), SHIFT(19),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 3, 0, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_assignment_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualifier, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualifier, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_type, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_type, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abi, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abi, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_file, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_file, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_file_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_flags_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_flags_repeat1, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aare_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aare_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 6, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_rule, 5, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_mode, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_flag, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_transition, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_rule, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 7, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_rule, 4, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_flag, 2, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 8, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_flags, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_flags, 4, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_rule, 3, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_flags, 5, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_rule, 6, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_rule, 7, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_apparmor(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
