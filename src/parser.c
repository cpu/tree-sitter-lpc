#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 27

enum {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_void = 4,
  anon_sym_RPAREN = 5,
  anon_sym_varargs = 6,
  anon_sym_EQ = 7,
  anon_sym_function = 8,
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
  anon_sym_b_DQUOTE = 31,
  sym_escape_sequence = 32,
  sym_number_literal = 33,
  anon_sym_SEMI = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_STAR = 37,
  anon_sym_return = 38,
  anon_sym_nomask = 39,
  anon_sym_static = 40,
  anon_sym_private = 41,
  anon_sym_public = 42,
  anon_sym_protected = 43,
  anon_sym_nosave = 44,
  anon_sym_deprecated = 45,
  anon_sym_visible = 46,
  anon_sym_PIPE = 47,
  anon_sym_status = 48,
  anon_sym_int = 49,
  anon_sym_bytes = 50,
  anon_sym_string = 51,
  anon_sym_closure = 52,
  anon_sym_coroutine = 53,
  anon_sym_symbol = 54,
  anon_sym_float = 55,
  anon_sym_mapping = 56,
  anon_sym_mixed = 57,
  anon_sym_object = 58,
  anon_sym_lwobject = 59,
  anon_sym_struct = 60,
  anon_sym_LT = 61,
  anon_sym_GT = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym__definition = 65,
  sym_function_definition = 66,
  sym_parameter_list = 67,
  sym_parameter = 68,
  sym_opt_default_value = 69,
  sym__expression = 70,
  sym_inline_func = 71,
  sym_function_call = 72,
  sym_member_operator = 73,
  sym__call_other_name = 74,
  sym_conditional_expression = 75,
  sym_assignment_operator = 76,
  sym_assignment_expression = 77,
  sym_char_literal = 78,
  sym_concatenated_string = 79,
  sym_string_literal = 80,
  sym_concatenated_bytes_string = 81,
  sym_bytes_literal = 82,
  sym__lvalue = 83,
  sym__function_body = 84,
  sym_block = 85,
  sym__statement = 86,
  sym__comma_expr = 87,
  sym_global_var = 88,
  sym_local_var = 89,
  sym_return_statement = 90,
  sym_type_modifier = 91,
  sym__basic_type = 92,
  sym_non_void_type = 93,
  sym__single_non_void_type = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym_function_definition_repeat1 = 96,
  aux_sym_parameter_list_repeat1 = 97,
  aux_sym_function_call_repeat1 = 98,
  aux_sym_concatenated_string_repeat1 = 99,
  aux_sym_string_literal_repeat1 = 100,
  aux_sym_concatenated_bytes_string_repeat1 = 101,
  aux_sym_block_repeat1 = 102,
  aux_sym_global_var_repeat1 = 103,
  aux_sym_non_void_type_repeat1 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
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
  [sym_assignment_operator] = "assignment_operator",
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
  [sym__comma_expr] = "_comma_expr",
  [sym_global_var] = "global_var",
  [sym_local_var] = "local_var",
  [sym_return_statement] = "return_statement",
  [sym_type_modifier] = "type_modifier",
  [sym__basic_type] = "_basic_type",
  [sym_non_void_type] = "non_void_type",
  [sym__single_non_void_type] = "_single_non_void_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_concatenated_string_repeat1] = "concatenated_string_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_concatenated_bytes_string_repeat1] = "concatenated_bytes_string_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_global_var_repeat1] = "global_var_repeat1",
  [aux_sym_non_void_type_repeat1] = "non_void_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
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
  [sym_assignment_operator] = sym_assignment_operator,
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
  [sym__comma_expr] = sym__comma_expr,
  [sym_global_var] = sym_global_var,
  [sym_local_var] = sym_local_var,
  [sym_return_statement] = sym_return_statement,
  [sym_type_modifier] = sym_type_modifier,
  [sym__basic_type] = sym__basic_type,
  [sym_non_void_type] = sym_non_void_type,
  [sym__single_non_void_type] = sym__single_non_void_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_concatenated_string_repeat1] = aux_sym_concatenated_string_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_concatenated_bytes_string_repeat1] = aux_sym_concatenated_bytes_string_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_global_var_repeat1] = aux_sym_global_var_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [sym_assignment_operator] = {
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
  [sym__comma_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_global_var] = {
    .visible = true,
    .named = true,
  },
  [sym_local_var] = {
    .visible = true,
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
  [aux_sym_function_definition_repeat1] = {
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
  [aux_sym_global_var_repeat1] = {
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
  field_initial_val = 10,
  field_left = 11,
  field_modifiers = 12,
  field_name = 13,
  field_operator = 14,
  field_right = 15,
  field_target = 16,
  field_type = 17,
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
  [field_initial_val] = "initial_val",
  [field_left] = "left",
  [field_modifiers] = "modifiers",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_target] = "target",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 4},
  [5] = {.index = 11, .length = 4},
  [6] = {.index = 15, .length = 4},
  [7] = {.index = 19, .length = 3},
  [8] = {.index = 22, .length = 2},
  [9] = {.index = 24, .length = 3},
  [10] = {.index = 27, .length = 1},
  [11] = {.index = 28, .length = 5},
  [12] = {.index = 33, .length = 3},
  [13] = {.index = 36, .length = 2},
  [14] = {.index = 38, .length = 3},
  [15] = {.index = 41, .length = 3},
  [16] = {.index = 44, .length = 1},
  [17] = {.index = 45, .length = 5},
  [18] = {.index = 50, .length = 3},
  [19] = {.index = 53, .length = 4},
  [20] = {.index = 57, .length = 5},
  [21] = {.index = 62, .length = 3},
  [22] = {.index = 65, .length = 4},
  [23] = {.index = 69, .length = 6},
  [24] = {.index = 75, .length = 5},
  [25] = {.index = 80, .length = 6},
  [26] = {.index = 86, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_arguments, 1},
    {field_body, 2},
    {field_name, 0},
  [5] =
    {field_arg_name, 1},
    {field_arg_type, 0},
  [7] =
    {field_arguments, 2},
    {field_body, 3},
    {field_name, 1},
    {field_type, 0},
  [11] =
    {field_initial_val, 3},
    {field_name, 1},
    {field_operator, 2},
    {field_type, 0},
  [15] =
    {field_arguments, 2},
    {field_body, 3},
    {field_modifiers, 0},
    {field_name, 1},
  [19] =
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [22] =
    {field_arg_name, 2},
    {field_arg_type, 1},
  [24] =
    {field_arg_default, 2},
    {field_arg_name, 1},
    {field_arg_type, 0},
  [27] =
    {field_operator, 3},
  [28] =
    {field_arguments, 3},
    {field_body, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [33] =
    {field_arg_default, 3},
    {field_arg_name, 2},
    {field_arg_type, 1},
  [36] =
    {field_arguments, 1},
    {field_body, 2},
  [38] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_function, 0},
  [41] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [44] =
    {field_operator, 4},
  [45] =
    {field_initial_val, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_operator, 3},
    {field_type, 1},
  [50] =
    {field_arguments, 2},
    {field_body, 3},
    {field_type, 1},
  [53] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [57] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 0},
  [62] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [65] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 2},
    {field_target, 0},
  [69] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 0},
  [75] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 2},
    {field_target, 0},
  [80] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_function, 2},
    {field_target, 0},
  [86] =
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
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
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
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(22)
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
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '=') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(49);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '<') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '|') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(113);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
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
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(112);
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
      ACCEPT_TOKEN(anon_sym_b_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(95);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(91);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '0') ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '0') ADVANCE(88);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '|') ADVANCE(31);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
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
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_b_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(158),
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_global_var] = STATE(8),
    [sym_local_var] = STATE(156),
    [sym_type_modifier] = STATE(9),
    [sym__basic_type] = STATE(155),
    [sym_non_void_type] = STATE(155),
    [sym__single_non_void_type] = STATE(94),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(9),
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
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_void,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_return,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(135), 1,
      sym_local_var,
    STATE(148), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(149), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(3), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(82), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
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
  [93] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_void,
    ACTIONS(45), 1,
      anon_sym_function,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(57), 1,
      sym_number_literal,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_return,
    ACTIONS(74), 1,
      anon_sym_LT,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(135), 1,
      sym_local_var,
    STATE(148), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(149), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(3), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(82), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(71), 13,
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
  [186] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_void,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(135), 1,
      sym_local_var,
    STATE(148), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(149), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(2), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(82), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
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
  [279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(83), 27,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_function,
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
  [330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(87), 27,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_function,
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
  [381] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_void,
    ACTIONS(103), 1,
      anon_sym_LT,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(156), 1,
      sym_local_var,
    STATE(9), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(155), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 4,
      sym__definition,
      sym_function_definition,
      sym_global_var,
      aux_sym_source_file_repeat1,
    ACTIONS(97), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(100), 13,
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
  [443] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_void,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(156), 1,
      sym_local_var,
    STATE(9), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(155), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 4,
      sym__definition,
      sym_function_definition,
      sym_global_var,
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
  [505] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_void,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(10), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(144), 2,
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
  [555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LT,
    STATE(10), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(114), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(112), 15,
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
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(121), 24,
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
  [628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(125), 24,
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
  [662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(129), 24,
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
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(133), 24,
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
  [730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(137), 24,
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
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(141), 24,
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
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(145), 24,
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
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(149), 24,
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
  [866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(153), 24,
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
  [900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(157), 24,
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
  [934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(161), 24,
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
  [968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(165), 24,
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
  [1002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 8,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(167), 17,
      anon_sym_void,
      anon_sym_function,
      anon_sym_return,
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
  [1035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(171), 24,
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
  [1068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(175), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
    ACTIONS(177), 14,
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
  [1101] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_void,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(108), 1,
      sym_parameter_list,
    STATE(133), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(185), 13,
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
  [1139] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(187), 1,
      anon_sym_void,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_varargs,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(122), 1,
      sym_parameter,
    STATE(146), 1,
      sym_non_void_type,
    ACTIONS(185), 13,
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
  [1179] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(197), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(68), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1226] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(203), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(75), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1273] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(29), 1,
      sym_number_literal,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(154), 1,
      sym__comma_expr,
    STATE(82), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_assignment_operator,
    STATE(102), 1,
      sym_parameter_list,
    ACTIONS(209), 14,
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
  [1355] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_varargs,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(138), 1,
      sym_parameter,
    STATE(146), 1,
      sym_non_void_type,
    ACTIONS(185), 13,
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
  [1389] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_assignment_operator,
    STATE(116), 1,
      sym_parameter_list,
    ACTIONS(209), 14,
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
  [1421] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(215), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(85), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1462] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(217), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(64), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1503] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(219), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(78), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1544] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(221), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(89), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1585] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(223), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(86), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1626] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(225), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(84), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1667] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(227), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(90), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym_assignment_operator,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(209), 14,
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
  [1735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_assignment_operator,
    ACTIONS(209), 14,
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
  [1764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_assignment_operator,
    ACTIONS(209), 14,
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
  [1793] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(237), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(83), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym_assignment_operator,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(209), 14,
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
  [1861] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(239), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(93), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym_assignment_operator,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(209), 14,
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
  [1929] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(241), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(87), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1970] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(243), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(92), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2011] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(245), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2052] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(247), 1,
      sym_number_literal,
    STATE(54), 1,
      sym__lvalue,
    STATE(58), 1,
      sym_string_literal,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(88), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(142), 1,
      sym_non_void_type,
    ACTIONS(185), 13,
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
  [2121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(94), 1,
      sym__single_non_void_type,
    STATE(152), 1,
      sym_non_void_type,
    ACTIONS(185), 13,
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
  [2149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      sym_assignment_operator,
    ACTIONS(209), 14,
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
  [2172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(99), 1,
      sym__single_non_void_type,
    ACTIONS(249), 13,
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
  [2197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_b_DQUOTE,
    STATE(56), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(251), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(56), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(258), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2245] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(59), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(175), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_DOT,
    STATE(61), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(262), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(57), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(175), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(61), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(266), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2341] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_GT,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(275), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(283), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
      anon_sym_SEMI,
  [2385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_GT,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(287), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(289), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(293), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
  [2445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DOT,
    ACTIONS(297), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
      anon_sym_SEMI,
  [2463] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_GT,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(91), 1,
      sym_member_operator,
    STATE(113), 1,
      aux_sym_function_call_repeat1,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(307), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(311), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(315), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(319), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(323), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(327), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2596] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_GT,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(91), 1,
      sym_member_operator,
    STATE(114), 1,
      aux_sym_function_call_repeat1,
  [2627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(335), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOT,
    ACTIONS(339), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2661] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_GT,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(343), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SEMI,
  [2686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(345), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOT,
    ACTIONS(349), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DOT,
    ACTIONS(353), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2737] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_member_operator,
    STATE(125), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2763] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2786] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2807] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2849] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2893] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2916] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_string_literal,
    STATE(139), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [2956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_COLON,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2976] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_member_operator,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_STAR,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(383), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_function,
      sym_identifier,
    ACTIONS(391), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
  [3028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_PIPE,
    STATE(96), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(393), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(343), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SEMI,
  [3069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_STAR,
    ACTIONS(393), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    STATE(96), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(403), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    STATE(22), 2,
      sym__function_body,
      sym_block,
  [3122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_EQ,
    STATE(132), 1,
      sym_opt_default_value,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_opt_default_value,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3150] = 5,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      aux_sym_string_literal_token1,
    ACTIONS(419), 1,
      sym_escape_sequence,
    ACTIONS(421), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_string_literal_repeat1,
  [3166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    STATE(11), 2,
      sym__function_body,
      sym_block,
  [3180] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      aux_sym_string_literal_token1,
    ACTIONS(429), 1,
      sym_escape_sequence,
    STATE(112), 1,
      aux_sym_string_literal_repeat1,
  [3196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    STATE(76), 2,
      sym__function_body,
      sym_block,
  [3210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(73), 2,
      sym__function_body,
      sym_block,
  [3224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    STATE(12), 2,
      sym__function_body,
      sym_block,
  [3238] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      aux_sym_string_literal_token1,
    ACTIONS(442), 1,
      sym_escape_sequence,
    STATE(111), 1,
      aux_sym_string_literal_repeat1,
  [3254] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      sym_escape_sequence,
    STATE(111), 1,
      aux_sym_string_literal_repeat1,
  [3270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
  [3286] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
  [3302] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      sym_escape_sequence,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      aux_sym_string_literal_repeat1,
  [3318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    STATE(18), 2,
      sym__function_body,
      sym_block,
  [3332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    STATE(59), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [3346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_parameter_list_repeat1,
  [3359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [3368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_STAR,
    STATE(120), 1,
      aux_sym_global_var_repeat1,
  [3381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_STAR,
    STATE(120), 1,
      aux_sym_global_var_repeat1,
  [3394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_parameter_list_repeat1,
  [3407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_parameter_list_repeat1,
  [3420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_STAR,
    STATE(121), 1,
      aux_sym_global_var_repeat1,
  [3433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
  [3446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_STAR,
    ACTIONS(493), 1,
      sym_identifier,
    STATE(120), 1,
      aux_sym_global_var_repeat1,
  [3459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_identifier,
    ACTIONS(497), 1,
      anon_sym_STAR,
    STATE(126), 1,
      aux_sym_global_var_repeat1,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_parameter_list,
  [3498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_parameter_list,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_SEMI,
  [3542] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(513), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [3550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_parameter_list,
  [3560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [3582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_identifier,
  [3624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_identifier,
  [3638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
  [3659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_GT,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [3673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SEMI,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_identifier,
  [3687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COMMA,
  [3694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [3701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 279,
  [SMALL_STATE(6)] = 330,
  [SMALL_STATE(7)] = 381,
  [SMALL_STATE(8)] = 443,
  [SMALL_STATE(9)] = 505,
  [SMALL_STATE(10)] = 555,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 628,
  [SMALL_STATE(13)] = 662,
  [SMALL_STATE(14)] = 696,
  [SMALL_STATE(15)] = 730,
  [SMALL_STATE(16)] = 764,
  [SMALL_STATE(17)] = 798,
  [SMALL_STATE(18)] = 832,
  [SMALL_STATE(19)] = 866,
  [SMALL_STATE(20)] = 900,
  [SMALL_STATE(21)] = 934,
  [SMALL_STATE(22)] = 968,
  [SMALL_STATE(23)] = 1002,
  [SMALL_STATE(24)] = 1035,
  [SMALL_STATE(25)] = 1068,
  [SMALL_STATE(26)] = 1101,
  [SMALL_STATE(27)] = 1139,
  [SMALL_STATE(28)] = 1179,
  [SMALL_STATE(29)] = 1226,
  [SMALL_STATE(30)] = 1273,
  [SMALL_STATE(31)] = 1320,
  [SMALL_STATE(32)] = 1355,
  [SMALL_STATE(33)] = 1389,
  [SMALL_STATE(34)] = 1421,
  [SMALL_STATE(35)] = 1462,
  [SMALL_STATE(36)] = 1503,
  [SMALL_STATE(37)] = 1544,
  [SMALL_STATE(38)] = 1585,
  [SMALL_STATE(39)] = 1626,
  [SMALL_STATE(40)] = 1667,
  [SMALL_STATE(41)] = 1708,
  [SMALL_STATE(42)] = 1735,
  [SMALL_STATE(43)] = 1764,
  [SMALL_STATE(44)] = 1793,
  [SMALL_STATE(45)] = 1834,
  [SMALL_STATE(46)] = 1861,
  [SMALL_STATE(47)] = 1902,
  [SMALL_STATE(48)] = 1929,
  [SMALL_STATE(49)] = 1970,
  [SMALL_STATE(50)] = 2011,
  [SMALL_STATE(51)] = 2052,
  [SMALL_STATE(52)] = 2093,
  [SMALL_STATE(53)] = 2121,
  [SMALL_STATE(54)] = 2149,
  [SMALL_STATE(55)] = 2172,
  [SMALL_STATE(56)] = 2197,
  [SMALL_STATE(57)] = 2221,
  [SMALL_STATE(58)] = 2245,
  [SMALL_STATE(59)] = 2269,
  [SMALL_STATE(60)] = 2293,
  [SMALL_STATE(61)] = 2317,
  [SMALL_STATE(62)] = 2341,
  [SMALL_STATE(63)] = 2367,
  [SMALL_STATE(64)] = 2385,
  [SMALL_STATE(65)] = 2409,
  [SMALL_STATE(66)] = 2427,
  [SMALL_STATE(67)] = 2445,
  [SMALL_STATE(68)] = 2463,
  [SMALL_STATE(69)] = 2494,
  [SMALL_STATE(70)] = 2511,
  [SMALL_STATE(71)] = 2528,
  [SMALL_STATE(72)] = 2545,
  [SMALL_STATE(73)] = 2562,
  [SMALL_STATE(74)] = 2579,
  [SMALL_STATE(75)] = 2596,
  [SMALL_STATE(76)] = 2627,
  [SMALL_STATE(77)] = 2644,
  [SMALL_STATE(78)] = 2661,
  [SMALL_STATE(79)] = 2686,
  [SMALL_STATE(80)] = 2703,
  [SMALL_STATE(81)] = 2720,
  [SMALL_STATE(82)] = 2737,
  [SMALL_STATE(83)] = 2763,
  [SMALL_STATE(84)] = 2786,
  [SMALL_STATE(85)] = 2807,
  [SMALL_STATE(86)] = 2828,
  [SMALL_STATE(87)] = 2849,
  [SMALL_STATE(88)] = 2872,
  [SMALL_STATE(89)] = 2893,
  [SMALL_STATE(90)] = 2916,
  [SMALL_STATE(91)] = 2936,
  [SMALL_STATE(92)] = 2956,
  [SMALL_STATE(93)] = 2976,
  [SMALL_STATE(94)] = 2996,
  [SMALL_STATE(95)] = 3014,
  [SMALL_STATE(96)] = 3028,
  [SMALL_STATE(97)] = 3043,
  [SMALL_STATE(98)] = 3054,
  [SMALL_STATE(99)] = 3069,
  [SMALL_STATE(100)] = 3082,
  [SMALL_STATE(101)] = 3097,
  [SMALL_STATE(102)] = 3108,
  [SMALL_STATE(103)] = 3122,
  [SMALL_STATE(104)] = 3136,
  [SMALL_STATE(105)] = 3150,
  [SMALL_STATE(106)] = 3166,
  [SMALL_STATE(107)] = 3180,
  [SMALL_STATE(108)] = 3196,
  [SMALL_STATE(109)] = 3210,
  [SMALL_STATE(110)] = 3224,
  [SMALL_STATE(111)] = 3238,
  [SMALL_STATE(112)] = 3254,
  [SMALL_STATE(113)] = 3270,
  [SMALL_STATE(114)] = 3286,
  [SMALL_STATE(115)] = 3302,
  [SMALL_STATE(116)] = 3318,
  [SMALL_STATE(117)] = 3332,
  [SMALL_STATE(118)] = 3346,
  [SMALL_STATE(119)] = 3359,
  [SMALL_STATE(120)] = 3368,
  [SMALL_STATE(121)] = 3381,
  [SMALL_STATE(122)] = 3394,
  [SMALL_STATE(123)] = 3407,
  [SMALL_STATE(124)] = 3420,
  [SMALL_STATE(125)] = 3433,
  [SMALL_STATE(126)] = 3446,
  [SMALL_STATE(127)] = 3459,
  [SMALL_STATE(128)] = 3472,
  [SMALL_STATE(129)] = 3480,
  [SMALL_STATE(130)] = 3488,
  [SMALL_STATE(131)] = 3498,
  [SMALL_STATE(132)] = 3506,
  [SMALL_STATE(133)] = 3514,
  [SMALL_STATE(134)] = 3524,
  [SMALL_STATE(135)] = 3532,
  [SMALL_STATE(136)] = 3542,
  [SMALL_STATE(137)] = 3550,
  [SMALL_STATE(138)] = 3560,
  [SMALL_STATE(139)] = 3568,
  [SMALL_STATE(140)] = 3575,
  [SMALL_STATE(141)] = 3582,
  [SMALL_STATE(142)] = 3589,
  [SMALL_STATE(143)] = 3596,
  [SMALL_STATE(144)] = 3603,
  [SMALL_STATE(145)] = 3610,
  [SMALL_STATE(146)] = 3617,
  [SMALL_STATE(147)] = 3624,
  [SMALL_STATE(148)] = 3631,
  [SMALL_STATE(149)] = 3638,
  [SMALL_STATE(150)] = 3645,
  [SMALL_STATE(151)] = 3652,
  [SMALL_STATE(152)] = 3659,
  [SMALL_STATE(153)] = 3666,
  [SMALL_STATE(154)] = 3673,
  [SMALL_STATE(155)] = 3680,
  [SMALL_STATE(156)] = 3687,
  [SMALL_STATE(157)] = 3694,
  [SMALL_STATE(158)] = 3701,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(148),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(136),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(94),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(53),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 5, .production_id = 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 5, .production_id = 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 3, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 3, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 6, .production_id = 10),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 6, .production_id = 10),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4, .production_id = 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 11),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 11),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 7, .production_id = 16),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 7, .production_id = 16),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 6, .production_id = 17),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 6, .production_id = 17),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2), SHIFT_REPEAT(107),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_bytes_string, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_bytes_string, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_string, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(105),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 21),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 15),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 23),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 23),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 14),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 14),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 25),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 25),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 4, .production_id = 18),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 4, .production_id = 18),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 3, .production_id = 13),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 3, .production_id = 13),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 24),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 24),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 20),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 20),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 8, .production_id = 26),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 8, .production_id = 26),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 22),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 22),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 4, .production_id = 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 5, .production_id = 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 6, .production_id = 16),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(55),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(36),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 8),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(111),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(111),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_var_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_var_repeat1, 2), SHIFT_REPEAT(120),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(32),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 12),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 9),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [541] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
