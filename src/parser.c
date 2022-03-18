#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_void = 6,
  anon_sym_RPAREN = 7,
  anon_sym_varargs = 8,
  anon_sym_QMARK = 9,
  anon_sym_COLON = 10,
  anon_sym_STAR_EQ = 11,
  anon_sym_SLASH_EQ = 12,
  anon_sym_PERCENT_EQ = 13,
  anon_sym_PLUS_EQ = 14,
  anon_sym_DASH_EQ = 15,
  anon_sym_LT_LT_EQ = 16,
  anon_sym_GT_GT_EQ = 17,
  anon_sym_AMP_EQ = 18,
  anon_sym_CARET_EQ = 19,
  anon_sym_PIPE_EQ = 20,
  anon_sym_SQUOTE = 21,
  aux_sym_char_literal_token1 = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_literal_token1 = 24,
  sym_escape_sequence = 25,
  sym_number_literal = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_return = 29,
  anon_sym_nomask = 30,
  anon_sym_static = 31,
  anon_sym_private = 32,
  anon_sym_public = 33,
  anon_sym_protected = 34,
  anon_sym_nosave = 35,
  anon_sym_deprecated = 36,
  anon_sym_visible = 37,
  anon_sym_PIPE = 38,
  anon_sym_status = 39,
  anon_sym_int = 40,
  anon_sym_bytes = 41,
  anon_sym_string = 42,
  anon_sym_closure = 43,
  anon_sym_coroutine = 44,
  anon_sym_symbol = 45,
  anon_sym_float = 46,
  anon_sym_mapping = 47,
  anon_sym_mixed = 48,
  anon_sym_object = 49,
  anon_sym_lwobject = 50,
  anon_sym_struct = 51,
  anon_sym_STAR = 52,
  anon_sym_LT = 53,
  anon_sym_GT = 54,
  sym_source_file = 55,
  sym__definition = 56,
  sym_global_definition = 57,
  sym__name_list = 58,
  sym_function_definition = 59,
  sym_parameter_list = 60,
  sym_parameter = 61,
  sym_opt_default_value = 62,
  sym__expression = 63,
  sym_conditional_expression = 64,
  sym_assignment_expression = 65,
  sym_char_literal = 66,
  sym_concatenated_string = 67,
  sym_string_literal = 68,
  sym_lvalue = 69,
  sym__function_body = 70,
  sym_block = 71,
  sym__statement = 72,
  sym_return_statement = 73,
  sym_type_modifier = 74,
  sym__basic_type = 75,
  sym_non_void_type = 76,
  sym__single_non_void_type = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym__name_list_repeat1 = 79,
  aux_sym_parameter_list_repeat1 = 80,
  aux_sym_concatenated_string_repeat1 = 81,
  aux_sym_string_literal_repeat1 = 82,
  aux_sym_block_repeat1 = 83,
  aux_sym_non_void_type_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_void] = "void",
  [anon_sym_RPAREN] = ")",
  [anon_sym_varargs] = "varargs",
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_global_definition] = "global_definition",
  [sym__name_list] = "_name_list",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_opt_default_value] = "opt_default_value",
  [sym__expression] = "_expression",
  [sym_conditional_expression] = "conditional_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_char_literal] = "char_literal",
  [sym_concatenated_string] = "concatenated_string",
  [sym_string_literal] = "string_literal",
  [sym_lvalue] = "lvalue",
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
  [aux_sym_concatenated_string_repeat1] = "concatenated_string_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_non_void_type_repeat1] = "non_void_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_varargs] = anon_sym_varargs,
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_global_definition] = sym_global_definition,
  [sym__name_list] = sym__name_list,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_opt_default_value] = sym_opt_default_value,
  [sym__expression] = sym__expression,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_char_literal] = sym_char_literal,
  [sym_concatenated_string] = sym_concatenated_string,
  [sym_string_literal] = sym_string_literal,
  [sym_lvalue] = sym_lvalue,
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
  [anon_sym_EQ] = {
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
  [sym_lvalue] = {
    .visible = true,
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
  field_initializer = 9,
  field_left = 10,
  field_modifiers = 11,
  field_name = 12,
  field_operator = 13,
  field_right = 14,
  field_type = 15,
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
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_modifiers] = "modifiers",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 2},
  [3] = {.index = 6, .length = 3},
  [4] = {.index = 9, .length = 3},
  [5] = {.index = 12, .length = 2},
  [6] = {.index = 14, .length = 3},
  [7] = {.index = 17, .length = 4},
  [8] = {.index = 21, .length = 4},
  [9] = {.index = 25, .length = 2},
  [10] = {.index = 27, .length = 3},
  [11] = {.index = 30, .length = 4},
  [12] = {.index = 34, .length = 5},
  [13] = {.index = 39, .length = 3},
  [14] = {.index = 42, .length = 3},
  [15] = {.index = 45, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_initializer, 0, .inherited = true},
    {field_modifiers, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [4] =
    {field_name, 1},
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
    {field_arg_name, 1},
    {field_arg_type, 0},
  [14] =
    {field_initializer, 3},
    {field_name, 1},
    {field_type, 0},
  [17] =
    {field_arguments, 2},
    {field_body, 3},
    {field_name, 1},
    {field_type, 0},
  [21] =
    {field_arguments, 2},
    {field_body, 3},
    {field_modifiers, 0},
    {field_name, 1},
  [25] =
    {field_arg_name, 2},
    {field_arg_type, 1},
  [27] =
    {field_arg_default, 2},
    {field_arg_name, 1},
    {field_arg_type, 0},
  [30] =
    {field_initializer, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [34] =
    {field_arguments, 3},
    {field_body, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [39] =
    {field_arg_default, 3},
    {field_arg_name, 2},
    {field_arg_type, 1},
  [42] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [45] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
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
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == '=') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == '=') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '<') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(66);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'j') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'j') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_nomask);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_nosave);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_closure);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_visible);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_lwobject);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_coroutine);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 134:
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_varargs] = ACTIONS(1),
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
    [sym_escape_sequence] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(82),
    [sym__definition] = STATE(3),
    [sym_global_definition] = STATE(3),
    [sym__name_list] = STATE(80),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(4),
    [sym__basic_type] = STATE(77),
    [sym_non_void_type] = STATE(77),
    [sym__single_non_void_type] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__name_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_varargs] = ACTIONS(9),
    [anon_sym_nomask] = ACTIONS(9),
    [anon_sym_static] = ACTIONS(9),
    [anon_sym_private] = ACTIONS(9),
    [anon_sym_public] = ACTIONS(9),
    [anon_sym_protected] = ACTIONS(9),
    [anon_sym_nosave] = ACTIONS(9),
    [anon_sym_deprecated] = ACTIONS(9),
    [anon_sym_visible] = ACTIONS(9),
    [anon_sym_status] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_bytes] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_closure] = ACTIONS(11),
    [anon_sym_coroutine] = ACTIONS(11),
    [anon_sym_symbol] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_mapping] = ACTIONS(11),
    [anon_sym_mixed] = ACTIONS(11),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_lwobject] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(20), 1,
      anon_sym_void,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(35), 1,
      sym__single_non_void_type,
    STATE(80), 1,
      sym__name_list,
    STATE(4), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(77), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(2), 4,
      sym__definition,
      sym_global_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(23), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(26), 13,
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
  [59] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_void,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym__single_non_void_type,
    STATE(80), 1,
      sym__name_list,
    STATE(4), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(77), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(2), 4,
      sym__definition,
      sym_global_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(11), 13,
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
  [118] = 8,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 1,
      anon_sym_void,
    STATE(35), 1,
      sym__single_non_void_type,
    STATE(5), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(79), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(9), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(11), 13,
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
  [165] = 4,
    ACTIONS(43), 1,
      anon_sym_LT,
    STATE(5), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    ACTIONS(40), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(38), 15,
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
  [201] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(47), 24,
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
  [232] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(51), 24,
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
  [263] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(55), 24,
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
  [294] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(59), 24,
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
  [325] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(63), 24,
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
  [356] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(67), 24,
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
  [387] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(71), 24,
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
  [418] = 2,
    ACTIONS(75), 1,
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
  [448] = 8,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_void,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_varargs,
    STATE(35), 1,
      sym__single_non_void_type,
    STATE(58), 1,
      sym_parameter,
    STATE(75), 1,
      sym_non_void_type,
    ACTIONS(83), 13,
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
  [485] = 6,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      anon_sym_varargs,
    STATE(35), 1,
      sym__single_non_void_type,
    STATE(68), 1,
      sym_parameter,
    STATE(75), 1,
      sym_non_void_type,
    ACTIONS(83), 13,
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
  [516] = 4,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(35), 1,
      sym__single_non_void_type,
    STATE(76), 1,
      sym_non_void_type,
    ACTIONS(83), 13,
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
  [541] = 2,
    ACTIONS(85), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(87), 11,
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
  [562] = 4,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(35), 1,
      sym__single_non_void_type,
    STATE(83), 1,
      sym_non_void_type,
    ACTIONS(83), 13,
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
  [587] = 3,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(43), 1,
      sym__single_non_void_type,
    ACTIONS(89), 13,
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
  [609] = 8,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      sym_number_literal,
    STATE(25), 1,
      sym_lvalue,
    STATE(29), 1,
      sym_string_literal,
    STATE(62), 5,
      sym__expression,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [638] = 7,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_number_literal,
    STATE(25), 1,
      sym_lvalue,
    STATE(29), 1,
      sym_string_literal,
    STATE(57), 5,
      sym__expression,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [664] = 7,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_number_literal,
    STATE(25), 1,
      sym_lvalue,
    STATE(29), 1,
      sym_string_literal,
    STATE(61), 5,
      sym__expression,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [690] = 7,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_number_literal,
    STATE(25), 1,
      sym_lvalue,
    STATE(29), 1,
      sym_string_literal,
    STATE(39), 5,
      sym__expression,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [716] = 7,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym_number_literal,
    STATE(25), 1,
      sym_lvalue,
    STATE(29), 1,
      sym_string_literal,
    STATE(67), 5,
      sym__expression,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [742] = 1,
    ACTIONS(109), 11,
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
  [756] = 7,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number_literal,
    STATE(25), 1,
      sym_lvalue,
    STATE(29), 1,
      sym_string_literal,
    STATE(34), 5,
      sym__expression,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [782] = 7,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_number_literal,
    STATE(25), 1,
      sym_lvalue,
    STATE(29), 1,
      sym_string_literal,
    STATE(70), 5,
      sym__expression,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [808] = 3,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(30), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(115), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [823] = 3,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(28), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(85), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [838] = 3,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(30), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(117), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [853] = 1,
    ACTIONS(122), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [862] = 1,
    ACTIONS(124), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [871] = 3,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_return,
    STATE(33), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [883] = 1,
    ACTIONS(131), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [891] = 4,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_STAR,
    STATE(45), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(133), 2,
      anon_sym_GT,
      sym_identifier,
  [905] = 3,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      anon_sym_return,
    STATE(38), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [917] = 1,
    ACTIONS(143), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [925] = 3,
    ACTIONS(141), 1,
      anon_sym_return,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(33), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [937] = 2,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(147), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [947] = 4,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym_string_literal_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym_string_literal_repeat1,
  [960] = 3,
    ACTIONS(157), 1,
      anon_sym_EQ,
    STATE(66), 1,
      sym_opt_default_value,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [971] = 4,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      sym_escape_sequence,
    STATE(42), 1,
      aux_sym_string_literal_repeat1,
  [984] = 2,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [993] = 4,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(173), 1,
      anon_sym_EQ,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_parameter_list,
  [1006] = 3,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(177), 2,
      anon_sym_GT,
      sym_identifier,
  [1017] = 3,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    STATE(10), 2,
      sym__function_body,
      sym_block,
  [1028] = 3,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(169), 2,
      anon_sym_GT,
      sym_identifier,
  [1039] = 3,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(7), 2,
      sym__function_body,
      sym_block,
  [1050] = 4,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_EQ,
    STATE(54), 1,
      sym_parameter_list,
  [1063] = 1,
    ACTIONS(192), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [1070] = 3,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    STATE(8), 2,
      sym__function_body,
      sym_block,
  [1081] = 3,
    ACTIONS(157), 1,
      anon_sym_EQ,
    STATE(73), 1,
      sym_opt_default_value,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1092] = 4,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      aux_sym_string_literal_token1,
    ACTIONS(202), 1,
      sym_escape_sequence,
    STATE(42), 1,
      aux_sym_string_literal_repeat1,
  [1105] = 3,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    STATE(9), 2,
      sym__function_body,
      sym_block,
  [1116] = 1,
    ACTIONS(206), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [1123] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
  [1133] = 2,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1141] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_parameter_list_repeat1,
  [1151] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
  [1161] = 1,
    ACTIONS(221), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1166] = 2,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(223), 1,
      anon_sym_SEMI,
  [1173] = 2,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(225), 1,
      anon_sym_SEMI,
  [1180] = 2,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameter_list,
  [1187] = 1,
    ACTIONS(227), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1192] = 2,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_parameter_list,
  [1199] = 1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1204] = 2,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(231), 1,
      anon_sym_COLON,
  [1211] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1216] = 1,
    ACTIONS(233), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [1221] = 2,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(235), 1,
      anon_sym_SEMI,
  [1228] = 1,
    ACTIONS(237), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [1233] = 1,
    ACTIONS(239), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1238] = 1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1243] = 1,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [1248] = 1,
    ACTIONS(245), 1,
      sym_identifier,
  [1252] = 1,
    ACTIONS(247), 1,
      anon_sym_GT,
  [1256] = 1,
    ACTIONS(249), 1,
      sym_identifier,
  [1260] = 1,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [1264] = 1,
    ACTIONS(251), 1,
      sym_identifier,
  [1268] = 1,
    ACTIONS(253), 1,
      anon_sym_SEMI,
  [1272] = 1,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
  [1276] = 1,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
  [1280] = 1,
    ACTIONS(259), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 201,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 325,
  [SMALL_STATE(11)] = 356,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 448,
  [SMALL_STATE(15)] = 485,
  [SMALL_STATE(16)] = 516,
  [SMALL_STATE(17)] = 541,
  [SMALL_STATE(18)] = 562,
  [SMALL_STATE(19)] = 587,
  [SMALL_STATE(20)] = 609,
  [SMALL_STATE(21)] = 638,
  [SMALL_STATE(22)] = 664,
  [SMALL_STATE(23)] = 690,
  [SMALL_STATE(24)] = 716,
  [SMALL_STATE(25)] = 742,
  [SMALL_STATE(26)] = 756,
  [SMALL_STATE(27)] = 782,
  [SMALL_STATE(28)] = 808,
  [SMALL_STATE(29)] = 823,
  [SMALL_STATE(30)] = 838,
  [SMALL_STATE(31)] = 853,
  [SMALL_STATE(32)] = 862,
  [SMALL_STATE(33)] = 871,
  [SMALL_STATE(34)] = 883,
  [SMALL_STATE(35)] = 891,
  [SMALL_STATE(36)] = 905,
  [SMALL_STATE(37)] = 917,
  [SMALL_STATE(38)] = 925,
  [SMALL_STATE(39)] = 937,
  [SMALL_STATE(40)] = 947,
  [SMALL_STATE(41)] = 960,
  [SMALL_STATE(42)] = 971,
  [SMALL_STATE(43)] = 984,
  [SMALL_STATE(44)] = 993,
  [SMALL_STATE(45)] = 1006,
  [SMALL_STATE(46)] = 1017,
  [SMALL_STATE(47)] = 1028,
  [SMALL_STATE(48)] = 1039,
  [SMALL_STATE(49)] = 1050,
  [SMALL_STATE(50)] = 1063,
  [SMALL_STATE(51)] = 1070,
  [SMALL_STATE(52)] = 1081,
  [SMALL_STATE(53)] = 1092,
  [SMALL_STATE(54)] = 1105,
  [SMALL_STATE(55)] = 1116,
  [SMALL_STATE(56)] = 1123,
  [SMALL_STATE(57)] = 1133,
  [SMALL_STATE(58)] = 1141,
  [SMALL_STATE(59)] = 1151,
  [SMALL_STATE(60)] = 1161,
  [SMALL_STATE(61)] = 1166,
  [SMALL_STATE(62)] = 1173,
  [SMALL_STATE(63)] = 1180,
  [SMALL_STATE(64)] = 1187,
  [SMALL_STATE(65)] = 1192,
  [SMALL_STATE(66)] = 1199,
  [SMALL_STATE(67)] = 1204,
  [SMALL_STATE(68)] = 1211,
  [SMALL_STATE(69)] = 1216,
  [SMALL_STATE(70)] = 1221,
  [SMALL_STATE(71)] = 1228,
  [SMALL_STATE(72)] = 1233,
  [SMALL_STATE(73)] = 1238,
  [SMALL_STATE(74)] = 1243,
  [SMALL_STATE(75)] = 1248,
  [SMALL_STATE(76)] = 1252,
  [SMALL_STATE(77)] = 1256,
  [SMALL_STATE(78)] = 1260,
  [SMALL_STATE(79)] = 1264,
  [SMALL_STATE(80)] = 1268,
  [SMALL_STATE(81)] = 1272,
  [SMALL_STATE(82)] = 1276,
  [SMALL_STATE(83)] = 1280,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2), SHIFT_REPEAT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 12),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 14),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 15),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(42),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(19),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 9),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(15),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 5, .production_id = 11),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 4, .production_id = 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 13),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [257] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
