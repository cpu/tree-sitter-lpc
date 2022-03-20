#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 173
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 29

enum {
  sym_identifier = 1,
  anon_sym_async = 2,
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
  anon_sym_SEMI = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_STAR = 38,
  anon_sym_return = 39,
  anon_sym_nomask = 40,
  anon_sym_static = 41,
  anon_sym_private = 42,
  anon_sym_public = 43,
  anon_sym_protected = 44,
  anon_sym_nosave = 45,
  anon_sym_deprecated = 46,
  anon_sym_visible = 47,
  anon_sym_PIPE = 48,
  anon_sym_status = 49,
  anon_sym_int = 50,
  anon_sym_bytes = 51,
  anon_sym_string = 52,
  anon_sym_closure = 53,
  anon_sym_coroutine = 54,
  anon_sym_symbol = 55,
  anon_sym_float = 56,
  anon_sym_mapping = 57,
  anon_sym_mixed = 58,
  anon_sym_object = 59,
  anon_sym_lwobject = 60,
  anon_sym_struct = 61,
  anon_sym_LT = 62,
  anon_sym_GT = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym__definition = 66,
  sym_function_definition = 67,
  sym_parameter_list = 68,
  sym_parameter = 69,
  sym_opt_default_value = 70,
  sym__expression = 71,
  sym_inline_func = 72,
  sym_function_call = 73,
  sym_member_operator = 74,
  sym__call_other_name = 75,
  sym_conditional_expression = 76,
  sym_assignment_operator = 77,
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
  sym__comma_expr = 88,
  sym_global_var = 89,
  sym_local_var = 90,
  sym_return_statement = 91,
  sym_type_modifier = 92,
  sym__basic_type = 93,
  sym_non_void_type = 94,
  sym__single_non_void_type = 95,
  aux_sym_source_file_repeat1 = 96,
  aux_sym_function_definition_repeat1 = 97,
  aux_sym_parameter_list_repeat1 = 98,
  aux_sym_function_call_repeat1 = 99,
  aux_sym_concatenated_string_repeat1 = 100,
  aux_sym_string_literal_repeat1 = 101,
  aux_sym_concatenated_bytes_string_repeat1 = 102,
  aux_sym_block_repeat1 = 103,
  aux_sym_global_var_repeat1 = 104,
  aux_sym_non_void_type_repeat1 = 105,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_async] = "async",
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
  [anon_sym_async] = anon_sym_async,
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
  [anon_sym_async] = {
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
  field_async = 6,
  field_body = 7,
  field_condition = 8,
  field_consequence = 9,
  field_function = 10,
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
  [field_async] = "async",
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 4},
  [5] = {.index = 10, .length = 2},
  [6] = {.index = 12, .length = 4},
  [7] = {.index = 16, .length = 3},
  [8] = {.index = 19, .length = 4},
  [9] = {.index = 23, .length = 3},
  [10] = {.index = 26, .length = 2},
  [11] = {.index = 28, .length = 5},
  [12] = {.index = 33, .length = 5},
  [13] = {.index = 38, .length = 2},
  [14] = {.index = 40, .length = 3},
  [15] = {.index = 43, .length = 5},
  [16] = {.index = 48, .length = 6},
  [17] = {.index = 54, .length = 3},
  [18] = {.index = 57, .length = 2},
  [19] = {.index = 59, .length = 3},
  [20] = {.index = 62, .length = 3},
  [21] = {.index = 65, .length = 4},
  [22] = {.index = 69, .length = 5},
  [23] = {.index = 74, .length = 3},
  [24] = {.index = 77, .length = 4},
  [25] = {.index = 81, .length = 6},
  [26] = {.index = 87, .length = 5},
  [27] = {.index = 92, .length = 6},
  [28] = {.index = 98, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_type, 0},
  [3] =
    {field_arguments, 1},
    {field_body, 2},
    {field_name, 0},
  [6] =
    {field_arguments, 2},
    {field_async, 0},
    {field_body, 3},
    {field_name, 1},
  [10] =
    {field_arg_name, 1},
    {field_arg_type, 0},
  [12] =
    {field_arguments, 2},
    {field_body, 3},
    {field_name, 1},
    {field_type, 0},
  [16] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [19] =
    {field_arguments, 2},
    {field_body, 3},
    {field_modifiers, 0},
    {field_name, 1},
  [23] =
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [26] =
    {field_modifiers, 0},
    {field_type, 1},
  [28] =
    {field_arguments, 3},
    {field_async, 0},
    {field_body, 4},
    {field_name, 2},
    {field_type, 1},
  [33] =
    {field_arguments, 3},
    {field_async, 0},
    {field_body, 4},
    {field_modifiers, 1},
    {field_name, 2},
  [38] =
    {field_arg_name, 2},
    {field_arg_type, 1},
  [40] =
    {field_arg_default, 2},
    {field_arg_name, 1},
    {field_arg_type, 0},
  [43] =
    {field_arguments, 3},
    {field_body, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [48] =
    {field_arguments, 4},
    {field_async, 0},
    {field_body, 5},
    {field_modifiers, 1},
    {field_name, 3},
    {field_type, 2},
  [54] =
    {field_arg_default, 3},
    {field_arg_name, 2},
    {field_arg_type, 1},
  [57] =
    {field_arguments, 1},
    {field_body, 2},
  [59] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_function, 0},
  [62] =
    {field_arguments, 2},
    {field_body, 3},
    {field_type, 1},
  [65] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [69] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 0},
  [74] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [77] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 2},
    {field_target, 0},
  [81] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 0},
  [87] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 2},
    {field_target, 0},
  [92] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_function, 2},
    {field_target, 0},
  [98] =
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
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == '^') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(107);
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
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
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
      if (lookahead == 'x') ADVANCE(39);
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
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(107);
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
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(27);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(29);
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
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '=') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '>') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(38);
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
      if (lookahead == '<') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(86);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 41:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 42:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      if (lookahead == 'x') ADVANCE(39);
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
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(39);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(40);
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
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 17:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'j') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'j') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_nomask);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_nosave);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_closure);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_visible);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_lwobject);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_coroutine);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_deprecated);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 45},
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 45},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 45},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 45},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 45},
  [83] = {.lex_state = 45},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 45},
  [86] = {.lex_state = 45},
  [87] = {.lex_state = 45},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 45},
  [90] = {.lex_state = 45},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
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
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 7},
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
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
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
    [sym_source_file] = STATE(172),
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_global_var] = STATE(8),
    [sym_local_var] = STATE(171),
    [sym_type_modifier] = STATE(13),
    [sym__basic_type] = STATE(125),
    [sym_non_void_type] = STATE(125),
    [sym__single_non_void_type] = STATE(91),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_varargs] = ACTIONS(13),
    [anon_sym_nomask] = ACTIONS(13),
    [anon_sym_static] = ACTIONS(13),
    [anon_sym_private] = ACTIONS(13),
    [anon_sym_public] = ACTIONS(13),
    [anon_sym_protected] = ACTIONS(13),
    [anon_sym_nosave] = ACTIONS(13),
    [anon_sym_deprecated] = ACTIONS(13),
    [anon_sym_visible] = ACTIONS(13),
    [anon_sym_status] = ACTIONS(15),
    [anon_sym_int] = ACTIONS(15),
    [anon_sym_bytes] = ACTIONS(15),
    [anon_sym_string] = ACTIONS(15),
    [anon_sym_closure] = ACTIONS(15),
    [anon_sym_coroutine] = ACTIONS(15),
    [anon_sym_symbol] = ACTIONS(15),
    [anon_sym_float] = ACTIONS(15),
    [anon_sym_mapping] = ACTIONS(15),
    [anon_sym_mixed] = ACTIONS(15),
    [anon_sym_object] = ACTIONS(15),
    [anon_sym_lwobject] = ACTIONS(15),
    [anon_sym_struct] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_void,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(31), 1,
      sym_number_literal,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_return,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(132), 1,
      sym_local_var,
    STATE(124), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(154), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(4), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(85), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(15), 13,
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
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_void,
    ACTIONS(47), 1,
      anon_sym_function,
    ACTIONS(50), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(59), 1,
      sym_number_literal,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_return,
    ACTIONS(76), 1,
      anon_sym_LT,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(132), 1,
      sym_local_var,
    STATE(124), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(154), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(3), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(85), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(73), 13,
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
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_void,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(31), 1,
      sym_number_literal,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(132), 1,
      sym_local_var,
    STATE(124), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(154), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(3), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(85), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(15), 13,
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
  [279] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_void,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(31), 1,
      sym_number_literal,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(132), 1,
      sym_local_var,
    STATE(124), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(154), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(3), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(85), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(15), 13,
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
  [372] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_void,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(31), 1,
      sym_number_literal,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(132), 1,
      sym_local_var,
    STATE(124), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(154), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(5), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(85), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(15), 13,
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
  [465] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_async,
    ACTIONS(97), 1,
      anon_sym_void,
    ACTIONS(106), 1,
      anon_sym_LT,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(171), 1,
      sym_local_var,
    STATE(13), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(125), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 4,
      sym__definition,
      sym_function_definition,
      sym_global_var,
      aux_sym_source_file_repeat1,
    ACTIONS(100), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(103), 13,
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
  [530] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_async,
    ACTIONS(11), 1,
      anon_sym_void,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(171), 1,
      sym_local_var,
    STATE(13), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(125), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 4,
      sym__definition,
      sym_function_definition,
      sym_global_var,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(15), 13,
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
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LT,
    ACTIONS(113), 26,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
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
  [639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LT,
    ACTIONS(117), 26,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_DOT,
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
  [683] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_void,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(27), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(158), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(13), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(15), 13,
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
  [733] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_void,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(11), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(167), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(13), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(15), 13,
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
  [783] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      anon_sym_void,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(27), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(123), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(13), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(15), 13,
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
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(133), 25,
      anon_sym_async,
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
  [868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(137), 25,
      anon_sym_async,
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
  [903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(141), 25,
      anon_sym_async,
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
  [938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(145), 25,
      anon_sym_async,
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
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(149), 25,
      anon_sym_async,
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
  [1008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(153), 25,
      anon_sym_async,
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
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(157), 25,
      anon_sym_async,
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
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(161), 25,
      anon_sym_async,
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
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(165), 25,
      anon_sym_async,
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
  [1148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(169), 25,
      anon_sym_async,
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
  [1183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(173), 25,
      anon_sym_async,
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
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(177), 25,
      anon_sym_async,
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
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(181), 25,
      anon_sym_async,
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
  [1288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LT,
    STATE(27), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(185), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(183), 15,
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
  [1327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(192), 25,
      anon_sym_async,
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
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 8,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(117), 17,
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
  [1395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 8,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(194), 17,
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
  [1428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(198), 24,
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
  [1461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 8,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(113), 17,
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
  [1494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(202), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
    ACTIONS(204), 14,
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
  [1527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_void,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(117), 1,
      sym_parameter_list,
    STATE(140), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(212), 13,
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
  [1565] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(214), 1,
      anon_sym_void,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 1,
      anon_sym_varargs,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(131), 1,
      sym_parameter,
    STATE(159), 1,
      sym_non_void_type,
    ACTIONS(212), 13,
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
  [1605] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(222), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(224), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(78), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1652] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(31), 1,
      sym_number_literal,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(160), 1,
      sym__comma_expr,
    STATE(85), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1699] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(232), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(84), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1746] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_parameter_list,
    ACTIONS(204), 14,
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
  [1778] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      anon_sym_varargs,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(133), 1,
      sym_parameter,
    STATE(159), 1,
      sym_non_void_type,
    ACTIONS(212), 13,
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
  [1812] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(238), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(89), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1853] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(240), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(69), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1894] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(242), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(90), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1935] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(244), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(86), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1976] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(246), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(83), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      sym_parameter_list,
    ACTIONS(204), 14,
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
  [2046] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(250), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(68), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2087] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(252), 1,
      sym_number_literal,
    STATE(56), 1,
      sym__lvalue,
    STATE(60), 1,
      sym_bytes_literal,
    STATE(62), 1,
      sym_string_literal,
    STATE(87), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(204), 14,
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
  [2154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(166), 1,
      sym_non_void_type,
    ACTIONS(212), 13,
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
  [2182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(204), 14,
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
  [2206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(204), 14,
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
  [2230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(204), 14,
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
  [2256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    STATE(91), 1,
      sym__single_non_void_type,
    STATE(165), 1,
      sym_non_void_type,
    ACTIONS(212), 13,
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
  [2284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(204), 14,
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
  [2308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_assignment_operator,
    ACTIONS(262), 14,
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
  [2331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    STATE(99), 1,
      sym__single_non_void_type,
    ACTIONS(264), 13,
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
  [2356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym_assignment_operator,
    ACTIONS(262), 14,
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
  [2379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_DOT,
    STATE(63), 2,
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
  [2403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(64), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(202), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(274), 1,
      anon_sym_b_DQUOTE,
    STATE(61), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(270), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(59), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(202), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    STATE(63), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(277), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(61), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(284), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DOT,
    ACTIONS(288), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
  [2541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(292), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
  [2559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOT,
    ACTIONS(296), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
      anon_sym_SEMI,
  [2577] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    STATE(92), 1,
      sym_member_operator,
    ACTIONS(302), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(92), 1,
      sym_member_operator,
    ACTIONS(310), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(312), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
      anon_sym_SEMI,
  [2645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(316), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(320), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(324), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(328), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(332), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(336), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(340), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2764] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(348), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(92), 1,
      sym_member_operator,
    STATE(105), 1,
      aux_sym_function_call_repeat1,
  [2795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DOT,
    ACTIONS(350), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(354), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_DOT,
    ACTIONS(358), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DOT,
    ACTIONS(362), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2863] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    STATE(92), 1,
      sym_member_operator,
    ACTIONS(366), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SEMI,
  [2888] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(92), 1,
      sym_member_operator,
    STATE(116), 1,
      aux_sym_function_call_repeat1,
  [2919] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_member_operator,
    STATE(128), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(304), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    STATE(92), 1,
      sym_member_operator,
    ACTIONS(304), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2966] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    STATE(92), 1,
      sym_member_operator,
    ACTIONS(304), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_function,
      sym_identifier,
    ACTIONS(378), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
  [3001] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(380), 1,
      anon_sym_COLON,
    STATE(92), 1,
      sym_member_operator,
    ACTIONS(304), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3021] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_member_operator,
    ACTIONS(304), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(384), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_string_literal,
    STATE(168), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [3079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(398), 1,
      anon_sym_STAR,
    STATE(58), 1,
      sym__lvalue,
    STATE(129), 1,
      aux_sym_global_var_repeat1,
    STATE(144), 1,
      sym_assignment_expression,
  [3109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(402), 1,
      anon_sym_STAR,
    STATE(58), 1,
      sym__lvalue,
    STATE(94), 1,
      aux_sym_global_var_repeat1,
    STATE(152), 1,
      sym_assignment_expression,
  [3128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_STAR,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(58), 1,
      sym__lvalue,
    STATE(129), 1,
      aux_sym_global_var_repeat1,
    STATE(151), 1,
      sym_assignment_expression,
  [3147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_PIPE,
    STATE(102), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(406), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(366), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SEMI,
  [3177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(411), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_STAR,
    STATE(58), 1,
      sym__lvalue,
    STATE(96), 1,
      aux_sym_global_var_repeat1,
    STATE(142), 1,
      sym_assignment_expression,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    STATE(102), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(411), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(15), 2,
      sym__function_body,
      sym_block,
  [3249] = 5,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    ACTIONS(428), 1,
      aux_sym_string_literal_token1,
    ACTIONS(431), 1,
      sym_escape_sequence,
    ACTIONS(434), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_string_literal_repeat1,
  [3265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
  [3281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    STATE(22), 2,
      sym__function_body,
      sym_block,
  [3295] = 5,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
    ACTIONS(444), 1,
      aux_sym_string_literal_token1,
    ACTIONS(446), 1,
      sym_escape_sequence,
    STATE(104), 1,
      aux_sym_string_literal_repeat1,
  [3311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_EQ,
    STATE(143), 1,
      sym_opt_default_value,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3325] = 5,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_string_literal_token1,
    ACTIONS(446), 1,
      sym_escape_sequence,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_string_literal_repeat1,
  [3341] = 5,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    ACTIONS(456), 1,
      aux_sym_string_literal_token1,
    ACTIONS(458), 1,
      sym_escape_sequence,
    STATE(107), 1,
      aux_sym_string_literal_repeat1,
  [3357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    STATE(21), 2,
      sym__function_body,
      sym_block,
  [3371] = 5,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      aux_sym_string_literal_token1,
    ACTIONS(466), 1,
      sym_escape_sequence,
    STATE(109), 1,
      aux_sym_string_literal_repeat1,
  [3387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(16), 2,
      sym__function_body,
      sym_block,
  [3401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(470), 1,
      anon_sym_SEMI,
    STATE(28), 2,
      sym__function_body,
      sym_block,
  [3415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    STATE(17), 2,
      sym__function_body,
      sym_block,
  [3429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
  [3445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    STATE(73), 2,
      sym__function_body,
      sym_block,
  [3459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    STATE(59), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [3473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    STATE(23), 2,
      sym__function_body,
      sym_block,
  [3487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    STATE(82), 2,
      sym__function_body,
      sym_block,
  [3501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_opt_default_value,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    STATE(18), 2,
      sym__function_body,
      sym_block,
  [3529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(58), 1,
      sym__lvalue,
    STATE(162), 1,
      sym_assignment_expression,
  [3542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(58), 1,
      sym__lvalue,
    STATE(147), 1,
      sym_assignment_expression,
  [3555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_identifier,
    STATE(58), 1,
      sym__lvalue,
    STATE(149), 1,
      sym_assignment_expression,
  [3568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_parameter_list_repeat1,
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [3590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
  [3603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_STAR,
    STATE(129), 1,
      aux_sym_global_var_repeat1,
  [3616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_parameter_list_repeat1,
  [3629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_parameter_list_repeat1,
  [3642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_SEMI,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_parameter_list,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_parameter_list,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_parameter_list,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_parameter_list,
  [3724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_parameter_list,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_SEMI,
  [3760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_parameter_list,
  [3770] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(528), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [3778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_SEMI,
  [3804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_parameter_list,
  [3814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_SEMI,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_SEMI,
  [3846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
  [3853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_identifier,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_identifier,
  [3881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [3909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_identifier,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_GT,
  [3930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_identifier,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_SQUOTE,
  [3951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [3958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 279,
  [SMALL_STATE(6)] = 372,
  [SMALL_STATE(7)] = 465,
  [SMALL_STATE(8)] = 530,
  [SMALL_STATE(9)] = 595,
  [SMALL_STATE(10)] = 639,
  [SMALL_STATE(11)] = 683,
  [SMALL_STATE(12)] = 733,
  [SMALL_STATE(13)] = 783,
  [SMALL_STATE(14)] = 833,
  [SMALL_STATE(15)] = 868,
  [SMALL_STATE(16)] = 903,
  [SMALL_STATE(17)] = 938,
  [SMALL_STATE(18)] = 973,
  [SMALL_STATE(19)] = 1008,
  [SMALL_STATE(20)] = 1043,
  [SMALL_STATE(21)] = 1078,
  [SMALL_STATE(22)] = 1113,
  [SMALL_STATE(23)] = 1148,
  [SMALL_STATE(24)] = 1183,
  [SMALL_STATE(25)] = 1218,
  [SMALL_STATE(26)] = 1253,
  [SMALL_STATE(27)] = 1288,
  [SMALL_STATE(28)] = 1327,
  [SMALL_STATE(29)] = 1362,
  [SMALL_STATE(30)] = 1395,
  [SMALL_STATE(31)] = 1428,
  [SMALL_STATE(32)] = 1461,
  [SMALL_STATE(33)] = 1494,
  [SMALL_STATE(34)] = 1527,
  [SMALL_STATE(35)] = 1565,
  [SMALL_STATE(36)] = 1605,
  [SMALL_STATE(37)] = 1652,
  [SMALL_STATE(38)] = 1699,
  [SMALL_STATE(39)] = 1746,
  [SMALL_STATE(40)] = 1778,
  [SMALL_STATE(41)] = 1812,
  [SMALL_STATE(42)] = 1853,
  [SMALL_STATE(43)] = 1894,
  [SMALL_STATE(44)] = 1935,
  [SMALL_STATE(45)] = 1976,
  [SMALL_STATE(46)] = 2017,
  [SMALL_STATE(47)] = 2046,
  [SMALL_STATE(48)] = 2087,
  [SMALL_STATE(49)] = 2128,
  [SMALL_STATE(50)] = 2154,
  [SMALL_STATE(51)] = 2182,
  [SMALL_STATE(52)] = 2206,
  [SMALL_STATE(53)] = 2230,
  [SMALL_STATE(54)] = 2256,
  [SMALL_STATE(55)] = 2284,
  [SMALL_STATE(56)] = 2308,
  [SMALL_STATE(57)] = 2331,
  [SMALL_STATE(58)] = 2356,
  [SMALL_STATE(59)] = 2379,
  [SMALL_STATE(60)] = 2403,
  [SMALL_STATE(61)] = 2427,
  [SMALL_STATE(62)] = 2451,
  [SMALL_STATE(63)] = 2475,
  [SMALL_STATE(64)] = 2499,
  [SMALL_STATE(65)] = 2523,
  [SMALL_STATE(66)] = 2541,
  [SMALL_STATE(67)] = 2559,
  [SMALL_STATE(68)] = 2577,
  [SMALL_STATE(69)] = 2603,
  [SMALL_STATE(70)] = 2627,
  [SMALL_STATE(71)] = 2645,
  [SMALL_STATE(72)] = 2662,
  [SMALL_STATE(73)] = 2679,
  [SMALL_STATE(74)] = 2696,
  [SMALL_STATE(75)] = 2713,
  [SMALL_STATE(76)] = 2730,
  [SMALL_STATE(77)] = 2747,
  [SMALL_STATE(78)] = 2764,
  [SMALL_STATE(79)] = 2795,
  [SMALL_STATE(80)] = 2812,
  [SMALL_STATE(81)] = 2829,
  [SMALL_STATE(82)] = 2846,
  [SMALL_STATE(83)] = 2863,
  [SMALL_STATE(84)] = 2888,
  [SMALL_STATE(85)] = 2919,
  [SMALL_STATE(86)] = 2945,
  [SMALL_STATE(87)] = 2966,
  [SMALL_STATE(88)] = 2987,
  [SMALL_STATE(89)] = 3001,
  [SMALL_STATE(90)] = 3021,
  [SMALL_STATE(91)] = 3041,
  [SMALL_STATE(92)] = 3059,
  [SMALL_STATE(93)] = 3079,
  [SMALL_STATE(94)] = 3090,
  [SMALL_STATE(95)] = 3109,
  [SMALL_STATE(96)] = 3128,
  [SMALL_STATE(97)] = 3147,
  [SMALL_STATE(98)] = 3162,
  [SMALL_STATE(99)] = 3177,
  [SMALL_STATE(100)] = 3190,
  [SMALL_STATE(101)] = 3209,
  [SMALL_STATE(102)] = 3220,
  [SMALL_STATE(103)] = 3235,
  [SMALL_STATE(104)] = 3249,
  [SMALL_STATE(105)] = 3265,
  [SMALL_STATE(106)] = 3281,
  [SMALL_STATE(107)] = 3295,
  [SMALL_STATE(108)] = 3311,
  [SMALL_STATE(109)] = 3325,
  [SMALL_STATE(110)] = 3341,
  [SMALL_STATE(111)] = 3357,
  [SMALL_STATE(112)] = 3371,
  [SMALL_STATE(113)] = 3387,
  [SMALL_STATE(114)] = 3401,
  [SMALL_STATE(115)] = 3415,
  [SMALL_STATE(116)] = 3429,
  [SMALL_STATE(117)] = 3445,
  [SMALL_STATE(118)] = 3459,
  [SMALL_STATE(119)] = 3473,
  [SMALL_STATE(120)] = 3487,
  [SMALL_STATE(121)] = 3501,
  [SMALL_STATE(122)] = 3515,
  [SMALL_STATE(123)] = 3529,
  [SMALL_STATE(124)] = 3542,
  [SMALL_STATE(125)] = 3555,
  [SMALL_STATE(126)] = 3568,
  [SMALL_STATE(127)] = 3581,
  [SMALL_STATE(128)] = 3590,
  [SMALL_STATE(129)] = 3603,
  [SMALL_STATE(130)] = 3616,
  [SMALL_STATE(131)] = 3629,
  [SMALL_STATE(132)] = 3642,
  [SMALL_STATE(133)] = 3652,
  [SMALL_STATE(134)] = 3660,
  [SMALL_STATE(135)] = 3670,
  [SMALL_STATE(136)] = 3680,
  [SMALL_STATE(137)] = 3688,
  [SMALL_STATE(138)] = 3696,
  [SMALL_STATE(139)] = 3706,
  [SMALL_STATE(140)] = 3714,
  [SMALL_STATE(141)] = 3724,
  [SMALL_STATE(142)] = 3734,
  [SMALL_STATE(143)] = 3742,
  [SMALL_STATE(144)] = 3750,
  [SMALL_STATE(145)] = 3760,
  [SMALL_STATE(146)] = 3770,
  [SMALL_STATE(147)] = 3778,
  [SMALL_STATE(148)] = 3786,
  [SMALL_STATE(149)] = 3794,
  [SMALL_STATE(150)] = 3804,
  [SMALL_STATE(151)] = 3814,
  [SMALL_STATE(152)] = 3822,
  [SMALL_STATE(153)] = 3832,
  [SMALL_STATE(154)] = 3839,
  [SMALL_STATE(155)] = 3846,
  [SMALL_STATE(156)] = 3853,
  [SMALL_STATE(157)] = 3860,
  [SMALL_STATE(158)] = 3867,
  [SMALL_STATE(159)] = 3874,
  [SMALL_STATE(160)] = 3881,
  [SMALL_STATE(161)] = 3888,
  [SMALL_STATE(162)] = 3895,
  [SMALL_STATE(163)] = 3902,
  [SMALL_STATE(164)] = 3909,
  [SMALL_STATE(165)] = 3916,
  [SMALL_STATE(166)] = 3923,
  [SMALL_STATE(167)] = 3930,
  [SMALL_STATE(168)] = 3937,
  [SMALL_STATE(169)] = 3944,
  [SMALL_STATE(170)] = 3951,
  [SMALL_STATE(171)] = 3958,
  [SMALL_STATE(172)] = 3965,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(124),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(146),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(85),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(50),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4, .production_id = 10),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4, .production_id = 10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 15),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 15),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 12),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 12),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 16),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 16),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4, .production_id = 9),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4, .production_id = 9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 11),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 3, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 3, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 3, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 3, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(31),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_string, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2), SHIFT_REPEAT(112),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(110),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_bytes_string, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_bytes_string, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 23),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 7),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 19),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 19),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 3, .production_id = 18),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 3, .production_id = 18),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 8, .production_id = 28),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 8, .production_id = 28),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 27),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 27),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 26),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 26),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 25),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 25),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 24),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 24),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 22),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 22),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 21),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 21),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 4, .production_id = 20),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 4, .production_id = 20),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(45),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(57),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(104),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(104),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 13),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_var_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_var_repeat1, 2), SHIFT_REPEAT(129),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(40),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 14),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2, .production_id = 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 17),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [562] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
