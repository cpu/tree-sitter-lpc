#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_void = 5,
  anon_sym_RPAREN = 6,
  anon_sym_varargs = 7,
  anon_sym_EQ = 8,
  anon_sym_DOT_DOT_DOT = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_DOT = 11,
  anon_sym_QMARK = 12,
  anon_sym_COLON = 13,
  anon_sym_STAR_EQ = 14,
  anon_sym_SLASH_EQ = 15,
  anon_sym_PERCENT_EQ = 16,
  anon_sym_PLUS_EQ = 17,
  anon_sym_DASH_EQ = 18,
  anon_sym_LT_LT_EQ = 19,
  anon_sym_GT_GT_EQ = 20,
  anon_sym_GT_GT_GT_EQ = 21,
  anon_sym_AMP_EQ = 22,
  anon_sym_AMP_AMP_EQ = 23,
  anon_sym_CARET_EQ = 24,
  anon_sym_PIPE_EQ = 25,
  anon_sym_PIPE_PIPE_EQ = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_char_literal_token1 = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_literal_token1 = 30,
  sym_escape_sequence = 31,
  sym_number_literal = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_return = 35,
  anon_sym_nomask = 36,
  anon_sym_static = 37,
  anon_sym_private = 38,
  anon_sym_public = 39,
  anon_sym_protected = 40,
  anon_sym_nosave = 41,
  anon_sym_deprecated = 42,
  anon_sym_visible = 43,
  anon_sym_PIPE = 44,
  anon_sym_status = 45,
  anon_sym_int = 46,
  anon_sym_bytes = 47,
  anon_sym_string = 48,
  anon_sym_closure = 49,
  anon_sym_coroutine = 50,
  anon_sym_symbol = 51,
  anon_sym_float = 52,
  anon_sym_mapping = 53,
  anon_sym_mixed = 54,
  anon_sym_object = 55,
  anon_sym_lwobject = 56,
  anon_sym_struct = 57,
  anon_sym_STAR = 58,
  anon_sym_LT = 59,
  anon_sym_GT = 60,
  sym_comment = 61,
  sym_source_file = 62,
  sym__definition = 63,
  sym_global_definition = 64,
  sym__name_list = 65,
  sym_function_definition = 66,
  sym_parameter_list = 67,
  sym_parameter = 68,
  sym_opt_default_value = 69,
  sym__expression = 70,
  sym_function_call = 71,
  sym_member_operator = 72,
  sym__call_other_name = 73,
  sym_conditional_expression = 74,
  sym_assignment_expression = 75,
  sym_char_literal = 76,
  sym_concatenated_string = 77,
  sym_string_literal = 78,
  sym__lvalue = 79,
  sym__function_body = 80,
  sym_block = 81,
  sym__statement = 82,
  sym_return_statement = 83,
  sym_type_modifier = 84,
  sym__basic_type = 85,
  sym_non_void_type = 86,
  sym__single_non_void_type = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym__name_list_repeat1 = 89,
  aux_sym_parameter_list_repeat1 = 90,
  aux_sym_function_call_repeat1 = 91,
  aux_sym_concatenated_string_repeat1 = 92,
  aux_sym_string_literal_repeat1 = 93,
  aux_sym_block_repeat1 = 94,
  aux_sym_non_void_type_repeat1 = 95,
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
  [anon_sym_DOT_DOT_DOT] = "...",
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
  [anon_sym_GT_GT_GT_EQ] = ">>>=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_AMP_AMP_EQ] = "&&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_PIPE_PIPE_EQ] = "||=",
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
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
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
  [anon_sym_GT_GT_GT_EQ] = anon_sym_GT_GT_GT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_AMP_AMP_EQ] = anon_sym_AMP_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_PIPE_PIPE_EQ] = anon_sym_PIPE_PIPE_EQ,
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
  [anon_sym_DOT_DOT_DOT] = {
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
  [anon_sym_GT_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP_EQ] = {
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
  [anon_sym_PIPE_PIPE_EQ] = {
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
  [20] = {.index = 59, .length = 6},
  [21] = {.index = 65, .length = 5},
  [22] = {.index = 70, .length = 6},
  [23] = {.index = 76, .length = 7},
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
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 0},
  [65] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 2},
    {field_target, 0},
  [70] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_function, 2},
    {field_target, 0},
  [76] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_arguments, 7},
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
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '\\') SKIP(41)
      if (lookahead == '^') ADVANCE(27);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
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
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(27);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '|') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == '=') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(49);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(88);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(111);
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(40)
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(94);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '0') ADVANCE(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '0') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
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
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 9},
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
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
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
  [92] = {.lex_state = 7},
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
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
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
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
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
    [anon_sym_AMP_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(114),
    [sym__definition] = STATE(3),
    [sym_global_definition] = STATE(3),
    [sym__name_list] = STATE(113),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(4),
    [sym__basic_type] = STATE(82),
    [sym_non_void_type] = STATE(82),
    [sym__single_non_void_type] = STATE(59),
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
    STATE(59), 1,
      sym__single_non_void_type,
    STATE(113), 1,
      sym__name_list,
    STATE(4), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(82), 2,
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
    STATE(59), 1,
      sym__single_non_void_type,
    STATE(113), 1,
      sym__name_list,
    STATE(4), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(82), 2,
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
    STATE(59), 1,
      sym__single_non_void_type,
    STATE(5), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(81), 2,
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
  [484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(79), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(81), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE_EQ,
  [517] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      anon_sym_void,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      anon_sym_varargs,
    STATE(59), 1,
      sym__single_non_void_type,
    STATE(86), 1,
      sym_parameter,
    STATE(104), 1,
      sym_non_void_type,
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
  [557] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      anon_sym_varargs,
    STATE(59), 1,
      sym__single_non_void_type,
    STATE(97), 1,
      sym_parameter,
    STATE(104), 1,
      sym_non_void_type,
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
  [591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_parameter_list,
    ACTIONS(81), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE_EQ,
  [620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_parameter_list,
    ACTIONS(81), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE_EQ,
  [649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(59), 1,
      sym__single_non_void_type,
    STATE(111), 1,
      sym_non_void_type,
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
  [677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(59), 1,
      sym__single_non_void_type,
    STATE(99), 1,
      sym_non_void_type,
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
  [705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(76), 1,
      sym__single_non_void_type,
    ACTIONS(99), 13,
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
  [730] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(46), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE_EQ,
  [786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE_EQ,
  [806] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(121), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(48), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [842] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(125), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(57), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [875] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(53), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [905] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(40), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(52), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [965] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(56), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(35), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(79), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(54), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [1049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOT,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(137), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1073] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(58), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [1103] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_DOT,
    STATE(33), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(146), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1127] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_number_literal,
    STATE(24), 1,
      sym__lvalue,
    STATE(31), 1,
      sym_string_literal,
    STATE(38), 6,
      sym__expression,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(152), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [1175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_DASH_GT,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym_member_operator,
    ACTIONS(156), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(164), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [1217] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_DASH_GT,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    STATE(55), 1,
      sym_member_operator,
    ACTIONS(168), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COLON,
  [1243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(172), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(176), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(180), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(184), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DOT,
    ACTIONS(188), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1328] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_DASH_GT,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(55), 1,
      sym_member_operator,
    STATE(66), 1,
      aux_sym_function_call_repeat1,
  [1359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(198), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1376] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_DASH_GT,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(55), 1,
      sym_member_operator,
    STATE(72), 1,
      aux_sym_function_call_repeat1,
  [1407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(206), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DOT,
    ACTIONS(210), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(214), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1458] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_DASH_GT,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    STATE(55), 1,
      sym_member_operator,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [1482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    STATE(55), 1,
      sym_member_operator,
    ACTIONS(160), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    STATE(55), 1,
      sym_member_operator,
    ACTIONS(160), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1523] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_string_literal,
    STATE(108), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [1543] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    ACTIONS(226), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_member_operator,
    ACTIONS(160), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1563] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    ACTIONS(228), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_member_operator,
    ACTIONS(160), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_member_operator,
    ACTIONS(160), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [1603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    ACTIONS(236), 1,
      anon_sym_STAR,
    STATE(69), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(232), 2,
      anon_sym_GT,
      sym_identifier,
  [1620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      anon_sym_return,
    STATE(62), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [1635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(60), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [1650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      anon_sym_return,
    STATE(62), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [1665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_EQ,
    STATE(93), 1,
      sym_opt_default_value,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(8), 2,
      sym__function_body,
      sym_block,
  [1693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    STATE(7), 2,
      sym__function_body,
      sym_block,
  [1707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(70), 1,
      aux_sym_function_call_repeat1,
  [1723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [1733] = 5,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_escape_sequence,
    ACTIONS(271), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_string_literal_repeat1,
  [1749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(273), 2,
      anon_sym_GT,
      sym_identifier,
  [1763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(218), 2,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [1777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [1787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(70), 1,
      aux_sym_function_call_repeat1,
  [1803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_SEMI,
    STATE(9), 2,
      sym__function_body,
      sym_block,
  [1817] = 5,
    ACTIONS(271), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      aux_sym_string_literal_token1,
    ACTIONS(290), 1,
      sym_escape_sequence,
    STATE(68), 1,
      aux_sym_string_literal_repeat1,
  [1833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    STATE(11), 2,
      sym__function_body,
      sym_block,
  [1847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_STAR,
    ACTIONS(294), 3,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [1859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(294), 2,
      anon_sym_GT,
      sym_identifier,
  [1873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym_opt_default_value,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(35), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [1901] = 5,
    ACTIONS(271), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      aux_sym_string_literal_token1,
    ACTIONS(308), 1,
      sym_escape_sequence,
    STATE(80), 1,
      aux_sym_string_literal_repeat1,
  [1917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(23), 1,
      sym__lvalue,
    STATE(112), 1,
      sym_assignment_expression,
  [1930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(23), 1,
      sym__lvalue,
    STATE(106), 1,
      sym_assignment_expression,
  [1943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
  [1956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [1978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_parameter_list,
  [2017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [2025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [2033] = 2,
    ACTIONS(271), 1,
      sym_comment,
    ACTIONS(336), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_parameter_list,
  [2059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [2090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_identifier,
  [2097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [2104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
  [2111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
  [2118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [2125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_identifier,
  [2132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
  [2139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
  [2146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
  [2153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
  [2167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
  [2174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_GT,
  [2181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SEMI,
  [2188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_SEMI,
  [2195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
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
  [SMALL_STATE(15)] = 517,
  [SMALL_STATE(16)] = 557,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 620,
  [SMALL_STATE(19)] = 649,
  [SMALL_STATE(20)] = 677,
  [SMALL_STATE(21)] = 705,
  [SMALL_STATE(22)] = 730,
  [SMALL_STATE(23)] = 766,
  [SMALL_STATE(24)] = 786,
  [SMALL_STATE(25)] = 806,
  [SMALL_STATE(26)] = 842,
  [SMALL_STATE(27)] = 875,
  [SMALL_STATE(28)] = 905,
  [SMALL_STATE(29)] = 935,
  [SMALL_STATE(30)] = 965,
  [SMALL_STATE(31)] = 995,
  [SMALL_STATE(32)] = 1019,
  [SMALL_STATE(33)] = 1049,
  [SMALL_STATE(34)] = 1073,
  [SMALL_STATE(35)] = 1103,
  [SMALL_STATE(36)] = 1127,
  [SMALL_STATE(37)] = 1157,
  [SMALL_STATE(38)] = 1175,
  [SMALL_STATE(39)] = 1199,
  [SMALL_STATE(40)] = 1217,
  [SMALL_STATE(41)] = 1243,
  [SMALL_STATE(42)] = 1260,
  [SMALL_STATE(43)] = 1277,
  [SMALL_STATE(44)] = 1294,
  [SMALL_STATE(45)] = 1311,
  [SMALL_STATE(46)] = 1328,
  [SMALL_STATE(47)] = 1359,
  [SMALL_STATE(48)] = 1376,
  [SMALL_STATE(49)] = 1407,
  [SMALL_STATE(50)] = 1424,
  [SMALL_STATE(51)] = 1441,
  [SMALL_STATE(52)] = 1458,
  [SMALL_STATE(53)] = 1482,
  [SMALL_STATE(54)] = 1503,
  [SMALL_STATE(55)] = 1523,
  [SMALL_STATE(56)] = 1543,
  [SMALL_STATE(57)] = 1563,
  [SMALL_STATE(58)] = 1583,
  [SMALL_STATE(59)] = 1603,
  [SMALL_STATE(60)] = 1620,
  [SMALL_STATE(61)] = 1635,
  [SMALL_STATE(62)] = 1650,
  [SMALL_STATE(63)] = 1665,
  [SMALL_STATE(64)] = 1679,
  [SMALL_STATE(65)] = 1693,
  [SMALL_STATE(66)] = 1707,
  [SMALL_STATE(67)] = 1723,
  [SMALL_STATE(68)] = 1733,
  [SMALL_STATE(69)] = 1749,
  [SMALL_STATE(70)] = 1763,
  [SMALL_STATE(71)] = 1777,
  [SMALL_STATE(72)] = 1787,
  [SMALL_STATE(73)] = 1803,
  [SMALL_STATE(74)] = 1817,
  [SMALL_STATE(75)] = 1833,
  [SMALL_STATE(76)] = 1847,
  [SMALL_STATE(77)] = 1859,
  [SMALL_STATE(78)] = 1873,
  [SMALL_STATE(79)] = 1887,
  [SMALL_STATE(80)] = 1901,
  [SMALL_STATE(81)] = 1917,
  [SMALL_STATE(82)] = 1930,
  [SMALL_STATE(83)] = 1943,
  [SMALL_STATE(84)] = 1956,
  [SMALL_STATE(85)] = 1969,
  [SMALL_STATE(86)] = 1978,
  [SMALL_STATE(87)] = 1991,
  [SMALL_STATE(88)] = 1999,
  [SMALL_STATE(89)] = 2007,
  [SMALL_STATE(90)] = 2017,
  [SMALL_STATE(91)] = 2025,
  [SMALL_STATE(92)] = 2033,
  [SMALL_STATE(93)] = 2041,
  [SMALL_STATE(94)] = 2049,
  [SMALL_STATE(95)] = 2059,
  [SMALL_STATE(96)] = 2067,
  [SMALL_STATE(97)] = 2075,
  [SMALL_STATE(98)] = 2083,
  [SMALL_STATE(99)] = 2090,
  [SMALL_STATE(100)] = 2097,
  [SMALL_STATE(101)] = 2104,
  [SMALL_STATE(102)] = 2111,
  [SMALL_STATE(103)] = 2118,
  [SMALL_STATE(104)] = 2125,
  [SMALL_STATE(105)] = 2132,
  [SMALL_STATE(106)] = 2139,
  [SMALL_STATE(107)] = 2146,
  [SMALL_STATE(108)] = 2153,
  [SMALL_STATE(109)] = 2160,
  [SMALL_STATE(110)] = 2167,
  [SMALL_STATE(111)] = 2174,
  [SMALL_STATE(112)] = 2181,
  [SMALL_STATE(113)] = 2188,
  [SMALL_STATE(114)] = 2195,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(74),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_string, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 18),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 17),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 17),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 8, .production_id = 23),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 8, .production_id = 23),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 20),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 20),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 21),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 21),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 15),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 15),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 22),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 22),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 11),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(29),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(21),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(80),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(80),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(16),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 14),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 12),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
