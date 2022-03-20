#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 28

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_void = 5,
  anon_sym_RPAREN = 6,
  anon_sym_varargs = 7,
  anon_sym_EQ = 8,
  anon_sym_function = 9,
  anon_sym_DOT_DOT_DOT = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_DOT = 12,
  anon_sym_QMARK = 13,
  anon_sym_COLON = 14,
  anon_sym_STAR_EQ = 15,
  anon_sym_SLASH_EQ = 16,
  anon_sym_PERCENT_EQ = 17,
  anon_sym_PLUS_EQ = 18,
  anon_sym_DASH_EQ = 19,
  anon_sym_LT_LT_EQ = 20,
  anon_sym_GT_GT_EQ = 21,
  anon_sym_GT_GT_GT_EQ = 22,
  anon_sym_AMP_EQ = 23,
  anon_sym_AMP_AMP_EQ = 24,
  anon_sym_CARET_EQ = 25,
  anon_sym_PIPE_EQ = 26,
  anon_sym_PIPE_PIPE_EQ = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_char_literal_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_string_literal_token1 = 31,
  anon_sym_b_DQUOTE = 32,
  sym_escape_sequence = 33,
  sym_number_literal = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_return = 37,
  anon_sym_nomask = 38,
  anon_sym_static = 39,
  anon_sym_private = 40,
  anon_sym_public = 41,
  anon_sym_protected = 42,
  anon_sym_nosave = 43,
  anon_sym_deprecated = 44,
  anon_sym_visible = 45,
  anon_sym_PIPE = 46,
  anon_sym_status = 47,
  anon_sym_int = 48,
  anon_sym_bytes = 49,
  anon_sym_string = 50,
  anon_sym_closure = 51,
  anon_sym_coroutine = 52,
  anon_sym_symbol = 53,
  anon_sym_float = 54,
  anon_sym_mapping = 55,
  anon_sym_mixed = 56,
  anon_sym_object = 57,
  anon_sym_lwobject = 58,
  anon_sym_struct = 59,
  anon_sym_STAR = 60,
  anon_sym_LT = 61,
  anon_sym_GT = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym__definition = 65,
  sym_global_definition = 66,
  sym__name_list = 67,
  sym_function_definition = 68,
  sym_parameter_list = 69,
  sym_parameter = 70,
  sym_opt_default_value = 71,
  sym__expression = 72,
  sym_inline_func = 73,
  sym_function_call = 74,
  sym_member_operator = 75,
  sym__call_other_name = 76,
  sym_conditional_expression = 77,
  sym_assignment_expression = 78,
  sym_char_literal = 79,
  sym_concatenated_string = 80,
  sym_string_literal = 81,
  sym_concatenated_bytes_string = 82,
  sym_bytes_literal = 83,
  sym__lvalue = 84,
  sym__function_body = 85,
  sym_block = 86,
  sym__statement = 87,
  sym_return_statement = 88,
  sym_assignment_statement = 89,
  sym_type_modifier = 90,
  sym__basic_type = 91,
  sym_non_void_type = 92,
  sym__single_non_void_type = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym__name_list_repeat1 = 95,
  aux_sym_parameter_list_repeat1 = 96,
  aux_sym_function_call_repeat1 = 97,
  aux_sym_concatenated_string_repeat1 = 98,
  aux_sym_string_literal_repeat1 = 99,
  aux_sym_concatenated_bytes_string_repeat1 = 100,
  aux_sym_block_repeat1 = 101,
  aux_sym_non_void_type_repeat1 = 102,
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
  [anon_sym_function] = "function",
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
  [anon_sym_b_DQUOTE] = "b\"",
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
  [sym_inline_func] = "inline_func",
  [sym_function_call] = "function_call",
  [sym_member_operator] = "member_operator",
  [sym__call_other_name] = "_call_other_name",
  [sym_conditional_expression] = "conditional_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_char_literal] = "char_literal",
  [sym_concatenated_string] = "concatenated_string",
  [sym_string_literal] = "string_literal",
  [sym_concatenated_bytes_string] = "concatenated_bytes_string",
  [sym_bytes_literal] = "bytes_literal",
  [sym__lvalue] = "_lvalue",
  [sym__function_body] = "_function_body",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_assignment_statement] = "assignment_statement",
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
  [aux_sym_concatenated_bytes_string_repeat1] = "concatenated_bytes_string_repeat1",
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
  [anon_sym_function] = anon_sym_function,
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
  [anon_sym_b_DQUOTE] = anon_sym_b_DQUOTE,
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
  [sym_inline_func] = sym_inline_func,
  [sym_function_call] = sym_function_call,
  [sym_member_operator] = sym_member_operator,
  [sym__call_other_name] = sym__call_other_name,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_char_literal] = sym_char_literal,
  [sym_concatenated_string] = sym_concatenated_string,
  [sym_string_literal] = sym_string_literal,
  [sym_concatenated_bytes_string] = sym_concatenated_bytes_string,
  [sym_bytes_literal] = sym_bytes_literal,
  [sym__lvalue] = sym__lvalue,
  [sym__function_body] = sym__function_body,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_assignment_statement] = sym_assignment_statement,
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
  [aux_sym_concatenated_bytes_string_repeat1] = aux_sym_concatenated_bytes_string_repeat1,
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
  [anon_sym_function] = {
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
  [anon_sym_b_DQUOTE] = {
    .visible = true,
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
  [sym_inline_func] = {
    .visible = true,
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
  [sym_concatenated_bytes_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes_literal] = {
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
  [sym_assignment_statement] = {
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
  [aux_sym_concatenated_bytes_string_repeat1] = {
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
  [13] = {.index = 32, .length = 3},
  [14] = {.index = 35, .length = 6},
  [15] = {.index = 41, .length = 5},
  [16] = {.index = 46, .length = 3},
  [17] = {.index = 49, .length = 2},
  [18] = {.index = 51, .length = 3},
  [19] = {.index = 54, .length = 3},
  [20] = {.index = 57, .length = 4},
  [21] = {.index = 61, .length = 5},
  [22] = {.index = 66, .length = 3},
  [23] = {.index = 69, .length = 4},
  [24] = {.index = 73, .length = 6},
  [25] = {.index = 79, .length = 5},
  [26] = {.index = 84, .length = 6},
  [27] = {.index = 90, .length = 7},
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
    {field_modifiers, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [35] =
    {field_modifiers, 0, .inherited = true},
    {field_modifiers, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [41] =
    {field_arguments, 3},
    {field_body, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [46] =
    {field_arg_default, 3},
    {field_arg_name, 2},
    {field_arg_type, 1},
  [49] =
    {field_arguments, 1},
    {field_body, 2},
  [51] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_function, 0},
  [54] =
    {field_arguments, 2},
    {field_body, 3},
    {field_type, 1},
  [57] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [61] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 0},
  [66] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [69] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 2},
    {field_target, 0},
  [73] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 0},
  [79] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 2},
    {field_target, 0},
  [84] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_function, 2},
    {field_target, 0},
  [90] =
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
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '\\') SKIP(41)
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '=') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '>') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(51);
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
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(86);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 40:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 41:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(40)
      END_STATE();
    case 42:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(42)
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '\\') SKIP(43)
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_b_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(98);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '0') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '0') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(29);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
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
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'j') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'j') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_nomask);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_nosave);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_closure);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_visible);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_lwobject);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_coroutine);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_deprecated);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 44},
  [20] = {.lex_state = 44},
  [21] = {.lex_state = 44},
  [22] = {.lex_state = 44},
  [23] = {.lex_state = 44},
  [24] = {.lex_state = 44},
  [25] = {.lex_state = 44},
  [26] = {.lex_state = 44},
  [27] = {.lex_state = 44},
  [28] = {.lex_state = 44},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 44},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 44},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 44},
  [36] = {.lex_state = 44},
  [37] = {.lex_state = 44},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 44},
  [40] = {.lex_state = 44},
  [41] = {.lex_state = 44},
  [42] = {.lex_state = 44},
  [43] = {.lex_state = 44},
  [44] = {.lex_state = 44},
  [45] = {.lex_state = 44},
  [46] = {.lex_state = 44},
  [47] = {.lex_state = 44},
  [48] = {.lex_state = 44},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 44},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 44},
  [75] = {.lex_state = 44},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 44},
  [83] = {.lex_state = 44},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 44},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
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
    [anon_sym_function] = ACTIONS(1),
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
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_b_DQUOTE] = ACTIONS(1),
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
    [sym_source_file] = STATE(137),
    [sym__definition] = STATE(24),
    [sym_global_definition] = STATE(24),
    [sym__name_list] = STATE(136),
    [sym_function_definition] = STATE(24),
    [sym_type_modifier] = STATE(36),
    [sym__basic_type] = STATE(105),
    [sym_non_void_type] = STATE(105),
    [sym__single_non_void_type] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym__name_list_repeat1] = STATE(36),
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
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(21), 14,
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
    ACTIONS(17), 27,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
      anon_sym_LT,
      sym_identifier,
  [60] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 14,
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
    ACTIONS(23), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
      anon_sym_LT,
      sym_identifier,
  [111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 14,
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
    ACTIONS(27), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
      anon_sym_LT,
      sym_identifier,
  [162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    STATE(9), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(19), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(17), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_b_DQUOTE,
    STATE(6), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(35), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(33), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    STATE(8), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(42), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(40), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(8), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(48), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(46), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    STATE(6), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(55), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(53), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    STATE(7), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(19), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(17), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [468] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_DASH_GT,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(79), 1,
      sym_member_operator,
    ACTIONS(59), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(57), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(67), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [611] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_void,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(92), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_block_repeat1,
    STATE(43), 1,
      sym__name_list,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(37), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(106), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(44), 3,
      sym__statement,
      sym_return_statement,
      sym_assignment_statement,
    ACTIONS(81), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
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
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(97), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(99), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(103), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [813] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_void,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_return,
    STATE(14), 1,
      aux_sym_block_repeat1,
    STATE(43), 1,
      sym__name_list,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(37), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(106), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(44), 3,
      sym__statement,
      sym_return_statement,
      sym_assignment_statement,
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
  [880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(117), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [925] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_void,
    ACTIONS(113), 1,
      anon_sym_return,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_block_repeat1,
    STATE(43), 1,
      sym__name_list,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(37), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(106), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(44), 3,
      sym__statement,
      sym_return_statement,
      sym_assignment_statement,
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
  [992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_DASH_GT,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    STATE(79), 1,
      sym_member_operator,
    ACTIONS(123), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(121), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [1047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(127), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(131), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1135] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_void,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(136), 1,
      sym__name_list,
    STATE(36), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(105), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(25), 4,
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
  [1197] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_void,
    ACTIONS(151), 1,
      anon_sym_LT,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(136), 1,
      sym__name_list,
    STATE(36), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(105), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(25), 4,
      sym__definition,
      sym_global_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(145), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(148), 13,
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
  [1259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(154), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(158), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(162), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(166), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(170), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(174), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(178), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(182), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(186), 26,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
      anon_sym_return,
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
  [1655] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    STATE(79), 1,
      sym_member_operator,
    ACTIONS(63), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(59), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(57), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [1704] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_void,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(40), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(103), 2,
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
  [1754] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(194), 1,
      anon_sym_void,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(40), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(108), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(196), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(198), 13,
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
  [1801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(200), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [1837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(204), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [1873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LT,
    STATE(40), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    ACTIONS(210), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(208), 15,
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
  [1912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(215), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [1947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(219), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(223), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(227), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [2052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(231), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_return,
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
  [2087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(237), 24,
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
  [2121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(241), 24,
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
  [2155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(245), 24,
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
  [2189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(249), 24,
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
  [2223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(253), 24,
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
  [2257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(255), 24,
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
  [2290] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_void,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 1,
      anon_sym_varargs,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(110), 1,
      sym_parameter,
    STATE(132), 1,
      sym_non_void_type,
    ACTIONS(198), 13,
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
  [2330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_void,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(94), 1,
      sym_parameter_list,
    STATE(116), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(198), 13,
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
  [2368] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(275), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(73), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2415] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(285), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(72), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2462] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    ACTIONS(289), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(76), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      anon_sym_varargs,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(115), 1,
      sym_parameter,
    STATE(132), 1,
      sym_non_void_type,
    ACTIONS(198), 13,
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
  [2540] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(75), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_parameter_list,
    ACTIONS(21), 14,
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
  [2610] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(293), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(74), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2651] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(21), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2692] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(78), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2733] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(77), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2774] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(11), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2815] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_function,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(303), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_bytes_literal,
    STATE(10), 1,
      sym_string_literal,
    STATE(70), 1,
      sym__lvalue,
    STATE(35), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_parameter_list,
    ACTIONS(21), 14,
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
  [2885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(134), 1,
      sym_non_void_type,
    ACTIONS(198), 13,
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
  [2913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(125), 1,
      sym_non_void_type,
    ACTIONS(198), 13,
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
  [2941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(81), 1,
      sym__single_non_void_type,
    ACTIONS(305), 13,
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
  [2966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 14,
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
  [2986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 14,
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
  [3006] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_DASH_GT,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(79), 1,
      sym_member_operator,
    STATE(93), 1,
      aux_sym_function_call_repeat1,
  [3037] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_DASH_GT,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(79), 1,
      sym_member_operator,
    STATE(88), 1,
      aux_sym_function_call_repeat1,
  [3068] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_DASH_GT,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    STATE(79), 1,
      sym_member_operator,
    ACTIONS(321), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    STATE(79), 1,
      sym_member_operator,
    ACTIONS(63), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_member_operator,
    ACTIONS(63), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_member_operator,
    ACTIONS(63), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(329), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_member_operator,
    ACTIONS(63), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3173] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_string_literal,
    STATE(135), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [3193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      anon_sym_STAR,
    STATE(82), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(335), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_STAR,
    ACTIONS(341), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(343), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(341), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 5,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [3276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(46), 2,
      sym__function_body,
      sym_block,
  [3290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    STATE(48), 2,
      sym__function_body,
      sym_block,
  [3304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(91), 1,
      aux_sym_function_call_repeat1,
  [3320] = 5,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      aux_sym_string_literal_token1,
    ACTIONS(366), 1,
      sym_escape_sequence,
    ACTIONS(368), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
  [3336] = 5,
    ACTIONS(364), 1,
      aux_sym_string_literal_token1,
    ACTIONS(366), 1,
      sym_escape_sequence,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
  [3352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(321), 2,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    STATE(7), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [3380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(91), 1,
      aux_sym_function_call_repeat1,
  [3396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    STATE(29), 2,
      sym__function_body,
      sym_block,
  [3410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    STATE(49), 2,
      sym__function_body,
      sym_block,
  [3424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_EQ,
    STATE(121), 1,
      sym_opt_default_value,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    STATE(32), 2,
      sym__function_body,
      sym_block,
  [3452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    STATE(47), 2,
      sym__function_body,
      sym_block,
  [3466] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      aux_sym_string_literal_token1,
    ACTIONS(397), 1,
      sym_escape_sequence,
    STATE(90), 1,
      aux_sym_string_literal_repeat1,
  [3482] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      aux_sym_string_literal_token1,
    ACTIONS(404), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
  [3498] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      aux_sym_string_literal_token1,
    ACTIONS(411), 1,
      sym_escape_sequence,
    STATE(89), 1,
      aux_sym_string_literal_repeat1,
  [3514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_opt_default_value,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(38), 1,
      sym_assignment_expression,
    STATE(71), 1,
      sym__lvalue,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [3550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
    STATE(39), 1,
      sym_assignment_expression,
    STATE(71), 1,
      sym__lvalue,
  [3563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(39), 1,
      sym_assignment_expression,
    STATE(71), 1,
      sym__lvalue,
  [3576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_identifier,
    STATE(71), 1,
      sym__lvalue,
    STATE(129), 1,
      sym_assignment_expression,
  [3589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(38), 1,
      sym_assignment_expression,
    STATE(71), 1,
      sym__lvalue,
  [3602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_parameter_list_repeat1,
  [3615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_parameter_list_repeat1,
  [3628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_parameter_list_repeat1,
  [3641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_parameter_list,
  [3651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_parameter_list,
  [3685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3693] = 2,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(444), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [3701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_parameter_list,
  [3719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_identifier,
  [3755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SEMI,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SQUOTE,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_identifier,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
  [3811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_GT,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 111,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 264,
  [SMALL_STATE(8)] = 315,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 417,
  [SMALL_STATE(11)] = 468,
  [SMALL_STATE(12)] = 521,
  [SMALL_STATE(13)] = 566,
  [SMALL_STATE(14)] = 611,
  [SMALL_STATE(15)] = 678,
  [SMALL_STATE(16)] = 723,
  [SMALL_STATE(17)] = 768,
  [SMALL_STATE(18)] = 813,
  [SMALL_STATE(19)] = 880,
  [SMALL_STATE(20)] = 925,
  [SMALL_STATE(21)] = 992,
  [SMALL_STATE(22)] = 1047,
  [SMALL_STATE(23)] = 1091,
  [SMALL_STATE(24)] = 1135,
  [SMALL_STATE(25)] = 1197,
  [SMALL_STATE(26)] = 1259,
  [SMALL_STATE(27)] = 1303,
  [SMALL_STATE(28)] = 1347,
  [SMALL_STATE(29)] = 1391,
  [SMALL_STATE(30)] = 1435,
  [SMALL_STATE(31)] = 1479,
  [SMALL_STATE(32)] = 1523,
  [SMALL_STATE(33)] = 1567,
  [SMALL_STATE(34)] = 1611,
  [SMALL_STATE(35)] = 1655,
  [SMALL_STATE(36)] = 1704,
  [SMALL_STATE(37)] = 1754,
  [SMALL_STATE(38)] = 1801,
  [SMALL_STATE(39)] = 1837,
  [SMALL_STATE(40)] = 1873,
  [SMALL_STATE(41)] = 1912,
  [SMALL_STATE(42)] = 1947,
  [SMALL_STATE(43)] = 1982,
  [SMALL_STATE(44)] = 2017,
  [SMALL_STATE(45)] = 2052,
  [SMALL_STATE(46)] = 2087,
  [SMALL_STATE(47)] = 2121,
  [SMALL_STATE(48)] = 2155,
  [SMALL_STATE(49)] = 2189,
  [SMALL_STATE(50)] = 2223,
  [SMALL_STATE(51)] = 2257,
  [SMALL_STATE(52)] = 2290,
  [SMALL_STATE(53)] = 2330,
  [SMALL_STATE(54)] = 2368,
  [SMALL_STATE(55)] = 2415,
  [SMALL_STATE(56)] = 2462,
  [SMALL_STATE(57)] = 2506,
  [SMALL_STATE(58)] = 2540,
  [SMALL_STATE(59)] = 2581,
  [SMALL_STATE(60)] = 2610,
  [SMALL_STATE(61)] = 2651,
  [SMALL_STATE(62)] = 2692,
  [SMALL_STATE(63)] = 2733,
  [SMALL_STATE(64)] = 2774,
  [SMALL_STATE(65)] = 2815,
  [SMALL_STATE(66)] = 2856,
  [SMALL_STATE(67)] = 2885,
  [SMALL_STATE(68)] = 2913,
  [SMALL_STATE(69)] = 2941,
  [SMALL_STATE(70)] = 2966,
  [SMALL_STATE(71)] = 2986,
  [SMALL_STATE(72)] = 3006,
  [SMALL_STATE(73)] = 3037,
  [SMALL_STATE(74)] = 3068,
  [SMALL_STATE(75)] = 3092,
  [SMALL_STATE(76)] = 3113,
  [SMALL_STATE(77)] = 3133,
  [SMALL_STATE(78)] = 3153,
  [SMALL_STATE(79)] = 3173,
  [SMALL_STATE(80)] = 3193,
  [SMALL_STATE(81)] = 3211,
  [SMALL_STATE(82)] = 3224,
  [SMALL_STATE(83)] = 3239,
  [SMALL_STATE(84)] = 3254,
  [SMALL_STATE(85)] = 3265,
  [SMALL_STATE(86)] = 3276,
  [SMALL_STATE(87)] = 3290,
  [SMALL_STATE(88)] = 3304,
  [SMALL_STATE(89)] = 3320,
  [SMALL_STATE(90)] = 3336,
  [SMALL_STATE(91)] = 3352,
  [SMALL_STATE(92)] = 3366,
  [SMALL_STATE(93)] = 3380,
  [SMALL_STATE(94)] = 3396,
  [SMALL_STATE(95)] = 3410,
  [SMALL_STATE(96)] = 3424,
  [SMALL_STATE(97)] = 3438,
  [SMALL_STATE(98)] = 3452,
  [SMALL_STATE(99)] = 3466,
  [SMALL_STATE(100)] = 3482,
  [SMALL_STATE(101)] = 3498,
  [SMALL_STATE(102)] = 3514,
  [SMALL_STATE(103)] = 3528,
  [SMALL_STATE(104)] = 3541,
  [SMALL_STATE(105)] = 3550,
  [SMALL_STATE(106)] = 3563,
  [SMALL_STATE(107)] = 3576,
  [SMALL_STATE(108)] = 3589,
  [SMALL_STATE(109)] = 3602,
  [SMALL_STATE(110)] = 3615,
  [SMALL_STATE(111)] = 3628,
  [SMALL_STATE(112)] = 3641,
  [SMALL_STATE(113)] = 3651,
  [SMALL_STATE(114)] = 3659,
  [SMALL_STATE(115)] = 3667,
  [SMALL_STATE(116)] = 3675,
  [SMALL_STATE(117)] = 3685,
  [SMALL_STATE(118)] = 3693,
  [SMALL_STATE(119)] = 3701,
  [SMALL_STATE(120)] = 3709,
  [SMALL_STATE(121)] = 3719,
  [SMALL_STATE(122)] = 3727,
  [SMALL_STATE(123)] = 3734,
  [SMALL_STATE(124)] = 3741,
  [SMALL_STATE(125)] = 3748,
  [SMALL_STATE(126)] = 3755,
  [SMALL_STATE(127)] = 3762,
  [SMALL_STATE(128)] = 3769,
  [SMALL_STATE(129)] = 3776,
  [SMALL_STATE(130)] = 3783,
  [SMALL_STATE(131)] = 3790,
  [SMALL_STATE(132)] = 3797,
  [SMALL_STATE(133)] = 3804,
  [SMALL_STATE(134)] = 3811,
  [SMALL_STATE(135)] = 3818,
  [SMALL_STATE(136)] = 3825,
  [SMALL_STATE(137)] = 3832,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name_list, 2, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name_list, 3, .production_id = 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2), SHIFT_REPEAT(99),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_string, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(101),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_bytes_string, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_bytes_string, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 14), SHIFT_REPEAT(107),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 14), SHIFT_REPEAT(106),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 14), SHIFT_REPEAT(51),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 14),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 14), SHIFT_REPEAT(56),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 14), SHIFT_REPEAT(80),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 14), SHIFT_REPEAT(67),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 13),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 13),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5, .production_id = 22),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 22),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 23),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 23),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 26),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 26),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 25),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 25),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 3, .production_id = 17),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 3, .production_id = 17),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 24),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 24),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 4, .production_id = 19),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 4, .production_id = 19),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 8, .production_id = 27),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 8, .production_id = 27),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 18),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 18),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name_list, 3, .production_id = 6),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 6),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name_list, 2, .production_id = 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2), SHIFT_REPEAT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 15),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 15),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(69),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(60),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 11),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(100),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(100),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(57),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 12),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 16),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [470] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
