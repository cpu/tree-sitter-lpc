#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 22

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_void = 5,
  anon_sym_RPAREN = 6,
  anon_sym_varargs = 7,
  anon_sym_EQ = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_DOT = 10,
  anon_sym_QMARK = 11,
  anon_sym_COLON = 12,
  anon_sym_STAR_EQ = 13,
  anon_sym_SLASH_EQ = 14,
  anon_sym_PERCENT_EQ = 15,
  anon_sym_PLUS_EQ = 16,
  anon_sym_DASH_EQ = 17,
  anon_sym_LT_LT_EQ = 18,
  anon_sym_GT_GT_EQ = 19,
  anon_sym_AMP_EQ = 20,
  anon_sym_CARET_EQ = 21,
  anon_sym_PIPE_EQ = 22,
  anon_sym_SQUOTE = 23,
  aux_sym_char_literal_token1 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_literal_token1 = 26,
  sym_escape_sequence = 27,
  sym_number_literal = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_return = 31,
  anon_sym_nomask = 32,
  anon_sym_static = 33,
  anon_sym_private = 34,
  anon_sym_public = 35,
  anon_sym_protected = 36,
  anon_sym_nosave = 37,
  anon_sym_deprecated = 38,
  anon_sym_visible = 39,
  anon_sym_PIPE = 40,
  anon_sym_status = 41,
  anon_sym_int = 42,
  anon_sym_bytes = 43,
  anon_sym_string = 44,
  anon_sym_closure = 45,
  anon_sym_coroutine = 46,
  anon_sym_symbol = 47,
  anon_sym_float = 48,
  anon_sym_mapping = 49,
  anon_sym_mixed = 50,
  anon_sym_object = 51,
  anon_sym_lwobject = 52,
  anon_sym_struct = 53,
  anon_sym_STAR = 54,
  anon_sym_LT = 55,
  anon_sym_GT = 56,
  sym_comment = 57,
  sym_source_file = 58,
  sym__definition = 59,
  sym_global_definition = 60,
  sym__name_list = 61,
  sym_function_definition = 62,
  sym_parameter_list = 63,
  sym_parameter = 64,
  sym_opt_default_value = 65,
  sym__expression = 66,
  sym_function_call = 67,
  sym_member_operator = 68,
  sym__call_other_name = 69,
  sym_conditional_expression = 70,
  sym_assignment_expression = 71,
  sym_char_literal = 72,
  sym_concatenated_string = 73,
  sym_string_literal = 74,
  sym__lvalue = 75,
  sym__function_body = 76,
  sym_block = 77,
  sym__statement = 78,
  sym_return_statement = 79,
  sym_type_modifier = 80,
  sym__basic_type = 81,
  sym_non_void_type = 82,
  sym__single_non_void_type = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym__name_list_repeat1 = 85,
  aux_sym_parameter_list_repeat1 = 86,
  aux_sym_function_call_repeat1 = 87,
  aux_sym_concatenated_string_repeat1 = 88,
  aux_sym_string_literal_repeat1 = 89,
  aux_sym_block_repeat1 = 90,
  aux_sym_non_void_type_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_void] = "void",
  [anon_sym_RPAREN] = ")",
  [anon_sym_varargs] = "varargs",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number_literal] = "number_literal",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_nomask] = "nomask",
  [anon_sym_static] = "static",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_nosave] = "nosave",
  [anon_sym_deprecated] = "deprecated",
  [anon_sym_visible] = "visible",
  [anon_sym_PIPE] = "|",
  [anon_sym_status] = "status",
  [anon_sym_int] = "int",
  [anon_sym_bytes] = "bytes",
  [anon_sym_string] = "string",
  [anon_sym_closure] = "closure",
  [anon_sym_coroutine] = "coroutine",
  [anon_sym_symbol] = "symbol",
  [anon_sym_float] = "float",
  [anon_sym_mapping] = "mapping",
  [anon_sym_mixed] = "mixed",
  [anon_sym_object] = "object",
  [anon_sym_lwobject] = "lwobject",
  [anon_sym_struct] = "struct",
  [anon_sym_STAR] = "*",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_global_definition] = "global_definition",
  [sym__name_list] = "_name_list",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_opt_default_value] = "opt_default_value",
  [sym__expression] = "_expression",
  [sym_function_call] = "function_call",
  [sym_member_operator] = "member_operator",
  [sym__call_other_name] = "_call_other_name",
  [sym_conditional_expression] = "conditional_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_char_literal] = "char_literal",
  [sym_concatenated_string] = "concatenated_string",
  [sym_string_literal] = "string_literal",
  [sym__lvalue] = "_lvalue",
  [sym__function_body] = "_function_body",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_type_modifier] = "type_modifier",
  [sym__basic_type] = "_basic_type",
  [sym_non_void_type] = "non_void_type",
  [sym__single_non_void_type] = "_single_non_void_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__name_list_repeat1] = "_name_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_concatenated_string_repeat1] = "concatenated_string_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_non_void_type_repeat1] = "non_void_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_varargs] = anon_sym_varargs,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_nomask] = anon_sym_nomask,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_nosave] = anon_sym_nosave,
  [anon_sym_deprecated] = anon_sym_deprecated,
  [anon_sym_visible] = anon_sym_visible,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_closure] = anon_sym_closure,
  [anon_sym_coroutine] = anon_sym_coroutine,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_mapping] = anon_sym_mapping,
  [anon_sym_mixed] = anon_sym_mixed,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_lwobject] = anon_sym_lwobject,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_global_definition] = sym_global_definition,
  [sym__name_list] = sym__name_list,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_opt_default_value] = sym_opt_default_value,
  [sym__expression] = sym__expression,
  [sym_function_call] = sym_function_call,
  [sym_member_operator] = sym_member_operator,
  [sym__call_other_name] = sym__call_other_name,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_char_literal] = sym_char_literal,
  [sym_concatenated_string] = sym_concatenated_string,
  [sym_string_literal] = sym_string_literal,
  [sym__lvalue] = sym__lvalue,
  [sym__function_body] = sym__function_body,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_type_modifier] = sym_type_modifier,
  [sym__basic_type] = sym__basic_type,
  [sym_non_void_type] = sym_non_void_type,
  [sym__single_non_void_type] = sym__single_non_void_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__name_list_repeat1] = aux_sym__name_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_concatenated_string_repeat1] = aux_sym_concatenated_string_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_non_void_type_repeat1] = aux_sym_non_void_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varargs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nosave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deprecated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_closure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coroutine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lwobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_global_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__name_list] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_member_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__call_other_name] = {
    .visible = false,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_concatenated_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__lvalue] = {
    .visible = false,
    .named = true,
  },
  [sym__function_body] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_type_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_type] = {
    .visible = false,
    .named = true,
  },
  [sym_non_void_type] = {
    .visible = true,
    .named = true,
  },
  [sym__single_non_void_type] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concatenated_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_non_void_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_arg_default = 2,
  field_arg_name = 3,
  field_arg_type = 4,
  field_arguments = 5,
  field_body = 6,
  field_condition = 7,
  field_consequence = 8,
  field_function = 9,
  field_left = 10,
  field_modifiers = 11,
  field_name = 12,
  field_operator = 13,
  field_right = 14,
  field_target = 15,
  field_type = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arg_default] = "arg_default",
  [field_arg_name] = "arg_name",
  [field_arg_type] = "arg_type",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_function] = "function",
  [field_left] = "left",
  [field_modifiers] = "modifiers",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_target] = "target",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 2},
  [7] = {.index = 14, .length = 2},
  [8] = {.index = 16, .length = 4},
  [9] = {.index = 20, .length = 3},
  [10] = {.index = 23, .length = 4},
  [11] = {.index = 27, .length = 2},
  [12] = {.index = 29, .length = 3},
  [13] = {.index = 32, .length = 5},
  [14] = {.index = 37, .length = 3},
  [15] = {.index = 40, .length = 3},
  [16] = {.index = 43, .length = 4},
  [17] = {.index = 47, .length = 5},
  [18] = {.index = 52, .length = 3},
  [19] = {.index = 55, .length = 4},
  [20] = {.index = 59, .length = 5},
  [21] = {.index = 64, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_modifiers, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [3] =
    {field_name, 1},
    {field_type, 0},
  [5] =
    {field_type, 0},
  [6] =
    {field_arguments, 1},
    {field_body, 2},
    {field_name, 0},
  [9] =
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [12] =
    {field_modifiers, 0},
    {field_type, 1},
  [14] =
    {field_arg_name, 1},
    {field_arg_type, 0},
  [16] =
    {field_arguments, 2},
    {field_body, 3},
    {field_name, 1},
    {field_type, 0},
  [20] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [23] =
    {field_arguments, 2},
    {field_body, 3},
    {field_modifiers, 0},
    {field_name, 1},
  [27] =
    {field_arg_name, 2},
    {field_arg_type, 1},
  [29] =
    {field_arg_default, 2},
    {field_arg_name, 1},
    {field_arg_type, 0},
  [32] =
    {field_arguments, 3},
    {field_body, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [37] =
    {field_arg_default, 3},
    {field_arg_name, 2},
    {field_arg_type, 1},
  [40] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_function, 0},
  [43] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [47] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 0},
  [52] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [55] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 2},
    {field_target, 0},
  [59] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 2},
    {field_target, 0},
  [64] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_function, 2},
    {field_target, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == '=') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '0') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(72);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(85);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(81);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(34);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
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
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'j') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'j') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_nomask);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_nosave);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_closure);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_visible);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_lwobject);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_coroutine);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_deprecated);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
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
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_varargs] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_nomask] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_nosave] = ACTIONS(1),
    [anon_sym_deprecated] = ACTIONS(1),
    [anon_sym_visible] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_closure] = ACTIONS(1),
    [anon_sym_coroutine] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_mapping] = ACTIONS(1),
    [anon_sym_mixed] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_lwobject] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(106),
    [sym__definition] = STATE(3),
    [sym_global_definition] = STATE(3),
    [sym__name_list] = STATE(105),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(4),
    [sym__basic_type] = STATE(78),
    [sym_non_void_type] = STATE(78),
    [sym__single_non_void_type] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__name_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_varargs] = ACTIONS(11),
    [anon_sym_nomask] = ACTIONS(11),
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(11),
    [anon_sym_nosave] = ACTIONS(11),
    [anon_sym_deprecated] = ACTIONS(11),
    [anon_sym_visible] = ACTIONS(11),
    [anon_sym_status] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_bytes] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_closure] = ACTIONS(13),
    [anon_sym_coroutine] = ACTIONS(13),
    [anon_sym_symbol] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_mapping] = ACTIONS(13),
    [anon_sym_mixed] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(13),
    [anon_sym_lwobject] = ACTIONS(13),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_void,
    ACTIONS(31), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym__single_non_void_type,
    STATE(105), 1,
      sym__name_list,
    STATE(4), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(78), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(2), 4,
      sym__definition,
      sym_global_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(25), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(28), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
  [62] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_void,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym__single_non_void_type,
    STATE(105), 1,
      sym__name_list,
    STATE(4), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(78), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(2), 4,
      sym__definition,
      sym_global_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(13), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
  [124] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_void,
    STATE(57), 1,
      sym__single_non_void_type,
    STATE(5), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(79), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(11), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(13), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
  [174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LT,
    STATE(5), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    ACTIONS(42), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(40), 15,
      anon_sym_void,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(49), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(53), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(57), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(61), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(65), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(69), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(73), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(75), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
      sym_identifier,
  [484] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_void,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      anon_sym_varargs,
    STATE(57), 1,
      sym__single_non_void_type,
    STATE(83), 1,
      sym_parameter,
    STATE(100), 1,
      sym_non_void_type,
    ACTIONS(85), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
  [524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(89), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [551] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      anon_sym_varargs,
    STATE(57), 1,
      sym__single_non_void_type,
    STATE(85), 1,
      sym_parameter,
    STATE(100), 1,
      sym_non_void_type,
    ACTIONS(85), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
  [585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym__single_non_void_type,
    STATE(103), 1,
      sym_non_void_type,
    ACTIONS(85), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
  [613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym__single_non_void_type,
    STATE(101), 1,
      sym_non_void_type,
    ACTIONS(85), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
  [641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(66), 1,
      sym__single_non_void_type,
    ACTIONS(91), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
      anon_sym_struct,
  [666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_parameter_list,
    ACTIONS(89), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_parameter_list,
    ACTIONS(89), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [718] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(44), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [751] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(49), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [784] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(56), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [817] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(55), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [847] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(53), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [877] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(50), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [907] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(38), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [937] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(51), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [967] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(54), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [997] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_number_literal,
    STATE(32), 1,
      sym__lvalue,
    STATE(36), 1,
      sym_string_literal,
    STATE(40), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [1027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [1044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(35), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(133), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [1082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    STATE(35), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(137), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(87), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [1139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_member_operator,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(144), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [1175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    STATE(52), 1,
      sym_member_operator,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(152), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_member_operator,
    STATE(81), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1322] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_member_operator,
    STATE(77), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    STATE(52), 1,
      sym_member_operator,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1369] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    STATE(52), 1,
      sym_member_operator,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1390] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_string_literal,
    STATE(104), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [1410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    ACTIONS(184), 1,
      anon_sym_COLON,
    STATE(52), 1,
      sym_member_operator,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1430] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    STATE(52), 1,
      sym_member_operator,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_member_operator,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1470] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_member_operator,
    ACTIONS(148), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    ACTIONS(194), 1,
      anon_sym_STAR,
    STATE(70), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(190), 2,
      anon_sym_GT,
      sym_identifier,
  [1507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      anon_sym_return,
    STATE(59), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [1522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_return,
    STATE(59), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [1537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_return,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(58), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [1552] = 5,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      aux_sym_string_literal_token1,
    ACTIONS(212), 1,
      sym_escape_sequence,
    ACTIONS(215), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_string_literal_repeat1,
  [1568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    STATE(9), 2,
      sym__function_body,
      sym_block,
  [1582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    STATE(12), 2,
      sym__function_body,
      sym_block,
  [1596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(223), 2,
      anon_sym_GT,
      sym_identifier,
  [1610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [1620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(223), 3,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [1632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_EQ,
    STATE(89), 1,
      sym_opt_default_value,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1646] = 5,
    ACTIONS(215), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_token1,
    ACTIONS(238), 1,
      sym_escape_sequence,
    STATE(61), 1,
      aux_sym_string_literal_repeat1,
  [1662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(33), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [1676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(242), 2,
      anon_sym_GT,
      sym_identifier,
  [1690] = 5,
    ACTIONS(215), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      sym_escape_sequence,
    STATE(68), 1,
      aux_sym_string_literal_repeat1,
  [1706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    STATE(7), 2,
      sym__function_body,
      sym_block,
  [1720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_SEMI,
    STATE(10), 2,
      sym__function_body,
      sym_block,
  [1734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [1744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_EQ,
    STATE(95), 1,
      sym_opt_default_value,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_parameter_list_repeat1,
  [1771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_function_call_repeat1,
  [1784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(34), 1,
      sym__lvalue,
    STATE(99), 1,
      sym_assignment_expression,
  [1797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(34), 1,
      sym__lvalue,
    STATE(96), 1,
      sym_assignment_expression,
  [1810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_parameter_list_repeat1,
  [1823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_function_call_repeat1,
  [1836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [1845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_parameter_list_repeat1,
  [1858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_function_call_repeat1,
  [1871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [1887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1911] = 2,
    ACTIONS(215), 1,
      sym_comment,
    ACTIONS(290), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [1919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_parameter_list,
  [1929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_parameter_list,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
  [1970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SEMI,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [1998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_GT,
  [2005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
  [2012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_identifier,
  [2019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
  [2033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 281,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 349,
  [SMALL_STATE(11)] = 383,
  [SMALL_STATE(12)] = 417,
  [SMALL_STATE(13)] = 451,
  [SMALL_STATE(14)] = 484,
  [SMALL_STATE(15)] = 524,
  [SMALL_STATE(16)] = 551,
  [SMALL_STATE(17)] = 585,
  [SMALL_STATE(18)] = 613,
  [SMALL_STATE(19)] = 641,
  [SMALL_STATE(20)] = 666,
  [SMALL_STATE(21)] = 692,
  [SMALL_STATE(22)] = 718,
  [SMALL_STATE(23)] = 751,
  [SMALL_STATE(24)] = 784,
  [SMALL_STATE(25)] = 817,
  [SMALL_STATE(26)] = 847,
  [SMALL_STATE(27)] = 877,
  [SMALL_STATE(28)] = 907,
  [SMALL_STATE(29)] = 937,
  [SMALL_STATE(30)] = 967,
  [SMALL_STATE(31)] = 997,
  [SMALL_STATE(32)] = 1027,
  [SMALL_STATE(33)] = 1044,
  [SMALL_STATE(34)] = 1065,
  [SMALL_STATE(35)] = 1082,
  [SMALL_STATE(36)] = 1103,
  [SMALL_STATE(37)] = 1124,
  [SMALL_STATE(38)] = 1139,
  [SMALL_STATE(39)] = 1160,
  [SMALL_STATE(40)] = 1175,
  [SMALL_STATE(41)] = 1198,
  [SMALL_STATE(42)] = 1212,
  [SMALL_STATE(43)] = 1226,
  [SMALL_STATE(44)] = 1240,
  [SMALL_STATE(45)] = 1266,
  [SMALL_STATE(46)] = 1280,
  [SMALL_STATE(47)] = 1294,
  [SMALL_STATE(48)] = 1308,
  [SMALL_STATE(49)] = 1322,
  [SMALL_STATE(50)] = 1348,
  [SMALL_STATE(51)] = 1369,
  [SMALL_STATE(52)] = 1390,
  [SMALL_STATE(53)] = 1410,
  [SMALL_STATE(54)] = 1430,
  [SMALL_STATE(55)] = 1450,
  [SMALL_STATE(56)] = 1470,
  [SMALL_STATE(57)] = 1490,
  [SMALL_STATE(58)] = 1507,
  [SMALL_STATE(59)] = 1522,
  [SMALL_STATE(60)] = 1537,
  [SMALL_STATE(61)] = 1552,
  [SMALL_STATE(62)] = 1568,
  [SMALL_STATE(63)] = 1582,
  [SMALL_STATE(64)] = 1596,
  [SMALL_STATE(65)] = 1610,
  [SMALL_STATE(66)] = 1620,
  [SMALL_STATE(67)] = 1632,
  [SMALL_STATE(68)] = 1646,
  [SMALL_STATE(69)] = 1662,
  [SMALL_STATE(70)] = 1676,
  [SMALL_STATE(71)] = 1690,
  [SMALL_STATE(72)] = 1706,
  [SMALL_STATE(73)] = 1720,
  [SMALL_STATE(74)] = 1734,
  [SMALL_STATE(75)] = 1744,
  [SMALL_STATE(76)] = 1758,
  [SMALL_STATE(77)] = 1771,
  [SMALL_STATE(78)] = 1784,
  [SMALL_STATE(79)] = 1797,
  [SMALL_STATE(80)] = 1810,
  [SMALL_STATE(81)] = 1823,
  [SMALL_STATE(82)] = 1836,
  [SMALL_STATE(83)] = 1845,
  [SMALL_STATE(84)] = 1858,
  [SMALL_STATE(85)] = 1871,
  [SMALL_STATE(86)] = 1879,
  [SMALL_STATE(87)] = 1887,
  [SMALL_STATE(88)] = 1895,
  [SMALL_STATE(89)] = 1903,
  [SMALL_STATE(90)] = 1911,
  [SMALL_STATE(91)] = 1919,
  [SMALL_STATE(92)] = 1929,
  [SMALL_STATE(93)] = 1937,
  [SMALL_STATE(94)] = 1947,
  [SMALL_STATE(95)] = 1955,
  [SMALL_STATE(96)] = 1963,
  [SMALL_STATE(97)] = 1970,
  [SMALL_STATE(98)] = 1977,
  [SMALL_STATE(99)] = 1984,
  [SMALL_STATE(100)] = 1991,
  [SMALL_STATE(101)] = 1998,
  [SMALL_STATE(102)] = 2005,
  [SMALL_STATE(103)] = 2012,
  [SMALL_STATE(104)] = 2019,
  [SMALL_STATE(105)] = 2026,
  [SMALL_STATE(106)] = 2033,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(71),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 18),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 20),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 15),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 21),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 17),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(61),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(61),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(19),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(16),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 14),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 12),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_LPC(void) {
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
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
