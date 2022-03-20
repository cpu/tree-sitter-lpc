#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 26

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
  sym__comma_expr = 88,
  sym_local_var = 89,
  sym_return_statement = 90,
  sym_type_modifier = 91,
  sym__basic_type = 92,
  sym_non_void_type = 93,
  sym__single_non_void_type = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym__name_list_repeat1 = 96,
  aux_sym_parameter_list_repeat1 = 97,
  aux_sym_function_call_repeat1 = 98,
  aux_sym_concatenated_string_repeat1 = 99,
  aux_sym_string_literal_repeat1 = 100,
  aux_sym_concatenated_bytes_string_repeat1 = 101,
  aux_sym_block_repeat1 = 102,
  aux_sym_local_var_repeat1 = 103,
  aux_sym_non_void_type_repeat1 = 104,
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
  [sym__comma_expr] = "_comma_expr",
  [sym_local_var] = "local_var",
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
  [aux_sym_concatenated_bytes_string_repeat1] = "concatenated_bytes_string_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_local_var_repeat1] = "local_var_repeat1",
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
  [sym__comma_expr] = sym__comma_expr,
  [sym_local_var] = sym_local_var,
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
  [aux_sym_concatenated_bytes_string_repeat1] = aux_sym_concatenated_bytes_string_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_local_var_repeat1] = aux_sym_local_var_repeat1,
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
  [sym__comma_expr] = {
    .visible = false,
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
  [aux_sym_local_var_repeat1] = {
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
  [15] = {.index = 40, .length = 2},
  [16] = {.index = 42, .length = 3},
  [17] = {.index = 45, .length = 3},
  [18] = {.index = 48, .length = 4},
  [19] = {.index = 52, .length = 5},
  [20] = {.index = 57, .length = 3},
  [21] = {.index = 60, .length = 4},
  [22] = {.index = 64, .length = 6},
  [23] = {.index = 70, .length = 5},
  [24] = {.index = 75, .length = 6},
  [25] = {.index = 81, .length = 7},
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
    {field_body, 2},
  [42] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_function, 0},
  [45] =
    {field_arguments, 2},
    {field_body, 3},
    {field_type, 1},
  [48] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [52] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 0},
  [57] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [60] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 2},
    {field_target, 0},
  [64] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 0},
  [70] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 2},
    {field_target, 0},
  [75] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_function, 2},
    {field_target, 0},
  [81] =
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
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(53);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
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
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '?') ADVANCE(53);
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
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ';') ADVANCE(44);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '=') ADVANCE(56);
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
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '=') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(49);
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
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '|') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_b_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(96);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(94);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '0') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '0') ADVANCE(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
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
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(66);
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
      if (lookahead == '"') ADVANCE(79);
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
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
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
  [55] = {.lex_state = 8},
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
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
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
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
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
    [sym_source_file] = STATE(143),
    [sym__definition] = STATE(8),
    [sym_global_definition] = STATE(8),
    [sym__name_list] = STATE(142),
    [sym_function_definition] = STATE(8),
    [sym_type_modifier] = STATE(9),
    [sym__basic_type] = STATE(102),
    [sym_non_void_type] = STATE(102),
    [sym__single_non_void_type] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym__name_list_repeat1] = STATE(9),
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
      anon_sym_SEMI,
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
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_return,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(123), 1,
      sym_local_var,
    STATE(125), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(133), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(3), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(68), 8,
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
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
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
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(123), 1,
      sym_local_var,
    STATE(125), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(133), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(4), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(68), 8,
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
  [186] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_void,
    ACTIONS(52), 1,
      anon_sym_function,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(64), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(78), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(123), 1,
      sym_local_var,
    STATE(125), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(133), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(4), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(68), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(75), 13,
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
      anon_sym_SEMI,
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
      anon_sym_SEMI,
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
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(142), 1,
      sym__name_list,
    STATE(9), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(102), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 4,
      sym__definition,
      sym_global_definition,
      sym_function_definition,
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
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(142), 1,
      sym__name_list,
    STATE(9), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(102), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 4,
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
  [505] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_void,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(10), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(105), 2,
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
      aux_sym__name_list_repeat1,
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
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(139), 24,
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
  [797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 8,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(143), 17,
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
  [830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(149), 14,
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
  [863] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_void,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_varargs,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(107), 1,
      sym_parameter,
    STATE(132), 1,
      sym_non_void_type,
    ACTIONS(159), 13,
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
  [903] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_void,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(84), 1,
      sym_parameter_list,
    STATE(120), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(159), 13,
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
  [941] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
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
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(141), 1,
      sym__comma_expr,
    STATE(68), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [988] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(171), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(58), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1035] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(177), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(56), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1082] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_varargs,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(116), 1,
      sym_parameter,
    STATE(132), 1,
      sym_non_void_type,
    ACTIONS(159), 13,
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
  [1116] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(179), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(60), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1157] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(181), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(48), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1198] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(183), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(77), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_parameter_list,
    ACTIONS(149), 14,
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
  [1268] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(187), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(71), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1309] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(189), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(74), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1350] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(191), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(70), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1391] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(193), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(72), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1432] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(195), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(76), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1473] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(197), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
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
  [1514] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(199), 1,
      sym_number_literal,
    STATE(40), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_bytes_literal,
    STATE(47), 1,
      sym_string_literal,
    STATE(51), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_parameter_list,
    ACTIONS(149), 14,
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
  [1584] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(127), 1,
      sym_non_void_type,
    ACTIONS(159), 13,
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
  [1612] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(75), 1,
      sym__single_non_void_type,
    STATE(140), 1,
      sym_non_void_type,
    ACTIONS(159), 13,
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
  [1640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(81), 1,
      sym__single_non_void_type,
    ACTIONS(203), 13,
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
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 14,
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
  [1685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 14,
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
  [1705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(46), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOT,
    ACTIONS(213), 1,
      anon_sym_b_DQUOTE,
    STATE(43), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(44), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(216), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(44), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(223), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(43), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(227), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1825] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(45), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DASH_GT,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(231), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(239), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
  [1891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DOT,
    ACTIONS(243), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [1909] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DASH_GT,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(247), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COLON,
  [1935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(251), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [1953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(255), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(259), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(263), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2005] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DASH_GT,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 1,
      sym_member_operator,
    STATE(91), 1,
      aux_sym_function_call_repeat1,
  [2036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(273), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2053] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DASH_GT,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 1,
      sym_member_operator,
    STATE(85), 1,
      aux_sym_function_call_repeat1,
  [2084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(281), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2101] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DASH_GT,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(285), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(287), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(291), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(295), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(299), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(303), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(307), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(311), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2245] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_member_operator,
    STATE(103), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2292] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(319), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(321), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(323), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_string_literal,
    STATE(136), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [2375] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    ACTIONS(329), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_STAR,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    STATE(82), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(331), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [2413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_QMARK,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_member_operator,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(339), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [2468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [2479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(285), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_STAR,
    ACTIONS(339), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [2507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(349), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [2533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    STATE(64), 2,
      sym__function_body,
      sym_block,
  [2547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(80), 1,
      aux_sym_function_call_repeat1,
  [2563] = 5,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      aux_sym_string_literal_token1,
    ACTIONS(363), 1,
      sym_escape_sequence,
    ACTIONS(365), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
  [2579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    STATE(15), 2,
      sym__function_body,
      sym_block,
  [2593] = 5,
    ACTIONS(361), 1,
      aux_sym_string_literal_token1,
    ACTIONS(363), 1,
      sym_escape_sequence,
    ACTIONS(365), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
  [2609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_EQ,
    STATE(119), 1,
      sym_opt_default_value,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    STATE(11), 2,
      sym__function_body,
      sym_block,
  [2637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(80), 1,
      aux_sym_function_call_repeat1,
  [2653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(45), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [2667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    STATE(14), 2,
      sym__function_body,
      sym_block,
  [2681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    STATE(61), 2,
      sym__function_body,
      sym_block,
  [2695] = 5,
    ACTIONS(365), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      aux_sym_string_literal_token1,
    ACTIONS(391), 1,
      sym_escape_sequence,
    STATE(88), 1,
      aux_sym_string_literal_repeat1,
  [2711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_opt_default_value,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2725] = 5,
    ACTIONS(365), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_string_literal_token1,
    ACTIONS(400), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
  [2741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    STATE(13), 2,
      sym__function_body,
      sym_block,
  [2755] = 5,
    ACTIONS(365), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      aux_sym_string_literal_token1,
    ACTIONS(409), 1,
      sym_escape_sequence,
    STATE(86), 1,
      aux_sym_string_literal_repeat1,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_STAR,
    STATE(108), 1,
      aux_sym_local_var_repeat1,
  [2784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_EQ,
    ACTIONS(323), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(41), 1,
      sym__lvalue,
    STATE(137), 1,
      sym_assignment_expression,
  [2808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      aux_sym_function_call_repeat1,
  [2821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_STAR,
    STATE(100), 1,
      aux_sym_local_var_repeat1,
  [2834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(41), 1,
      sym__lvalue,
    STATE(138), 1,
      sym_assignment_expression,
  [2847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(427), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_parameter_list_repeat1,
  [2871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_STAR,
    STATE(108), 1,
      aux_sym_local_var_repeat1,
  [2884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_parameter_list_repeat1,
  [2897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(445), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [2917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_parameter_list_repeat1,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_parameter_list,
  [2972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_parameter_list,
  [2998] = 2,
    ACTIONS(365), 1,
      sym_comment,
    ACTIONS(463), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [3006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_parameter_list,
  [3016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(467), 1,
      anon_sym_COMMA,
  [3026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SEMI,
  [3040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [3047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
  [3061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
  [3068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [3082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_identifier,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_identifier,
  [3096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_SQUOTE,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_SEMI,
  [3124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_SEMI,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_GT,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [3152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
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
  [SMALL_STATE(17)] = 797,
  [SMALL_STATE(18)] = 830,
  [SMALL_STATE(19)] = 863,
  [SMALL_STATE(20)] = 903,
  [SMALL_STATE(21)] = 941,
  [SMALL_STATE(22)] = 988,
  [SMALL_STATE(23)] = 1035,
  [SMALL_STATE(24)] = 1082,
  [SMALL_STATE(25)] = 1116,
  [SMALL_STATE(26)] = 1157,
  [SMALL_STATE(27)] = 1198,
  [SMALL_STATE(28)] = 1239,
  [SMALL_STATE(29)] = 1268,
  [SMALL_STATE(30)] = 1309,
  [SMALL_STATE(31)] = 1350,
  [SMALL_STATE(32)] = 1391,
  [SMALL_STATE(33)] = 1432,
  [SMALL_STATE(34)] = 1473,
  [SMALL_STATE(35)] = 1514,
  [SMALL_STATE(36)] = 1555,
  [SMALL_STATE(37)] = 1584,
  [SMALL_STATE(38)] = 1612,
  [SMALL_STATE(39)] = 1640,
  [SMALL_STATE(40)] = 1665,
  [SMALL_STATE(41)] = 1685,
  [SMALL_STATE(42)] = 1705,
  [SMALL_STATE(43)] = 1729,
  [SMALL_STATE(44)] = 1753,
  [SMALL_STATE(45)] = 1777,
  [SMALL_STATE(46)] = 1801,
  [SMALL_STATE(47)] = 1825,
  [SMALL_STATE(48)] = 1849,
  [SMALL_STATE(49)] = 1873,
  [SMALL_STATE(50)] = 1891,
  [SMALL_STATE(51)] = 1909,
  [SMALL_STATE(52)] = 1935,
  [SMALL_STATE(53)] = 1953,
  [SMALL_STATE(54)] = 1971,
  [SMALL_STATE(55)] = 1988,
  [SMALL_STATE(56)] = 2005,
  [SMALL_STATE(57)] = 2036,
  [SMALL_STATE(58)] = 2053,
  [SMALL_STATE(59)] = 2084,
  [SMALL_STATE(60)] = 2101,
  [SMALL_STATE(61)] = 2126,
  [SMALL_STATE(62)] = 2143,
  [SMALL_STATE(63)] = 2160,
  [SMALL_STATE(64)] = 2177,
  [SMALL_STATE(65)] = 2194,
  [SMALL_STATE(66)] = 2211,
  [SMALL_STATE(67)] = 2228,
  [SMALL_STATE(68)] = 2245,
  [SMALL_STATE(69)] = 2271,
  [SMALL_STATE(70)] = 2292,
  [SMALL_STATE(71)] = 2313,
  [SMALL_STATE(72)] = 2334,
  [SMALL_STATE(73)] = 2355,
  [SMALL_STATE(74)] = 2375,
  [SMALL_STATE(75)] = 2395,
  [SMALL_STATE(76)] = 2413,
  [SMALL_STATE(77)] = 2433,
  [SMALL_STATE(78)] = 2453,
  [SMALL_STATE(79)] = 2468,
  [SMALL_STATE(80)] = 2479,
  [SMALL_STATE(81)] = 2494,
  [SMALL_STATE(82)] = 2507,
  [SMALL_STATE(83)] = 2522,
  [SMALL_STATE(84)] = 2533,
  [SMALL_STATE(85)] = 2547,
  [SMALL_STATE(86)] = 2563,
  [SMALL_STATE(87)] = 2579,
  [SMALL_STATE(88)] = 2593,
  [SMALL_STATE(89)] = 2609,
  [SMALL_STATE(90)] = 2623,
  [SMALL_STATE(91)] = 2637,
  [SMALL_STATE(92)] = 2653,
  [SMALL_STATE(93)] = 2667,
  [SMALL_STATE(94)] = 2681,
  [SMALL_STATE(95)] = 2695,
  [SMALL_STATE(96)] = 2711,
  [SMALL_STATE(97)] = 2725,
  [SMALL_STATE(98)] = 2741,
  [SMALL_STATE(99)] = 2755,
  [SMALL_STATE(100)] = 2771,
  [SMALL_STATE(101)] = 2784,
  [SMALL_STATE(102)] = 2795,
  [SMALL_STATE(103)] = 2808,
  [SMALL_STATE(104)] = 2821,
  [SMALL_STATE(105)] = 2834,
  [SMALL_STATE(106)] = 2847,
  [SMALL_STATE(107)] = 2858,
  [SMALL_STATE(108)] = 2871,
  [SMALL_STATE(109)] = 2884,
  [SMALL_STATE(110)] = 2897,
  [SMALL_STATE(111)] = 2908,
  [SMALL_STATE(112)] = 2917,
  [SMALL_STATE(113)] = 2930,
  [SMALL_STATE(114)] = 2938,
  [SMALL_STATE(115)] = 2946,
  [SMALL_STATE(116)] = 2954,
  [SMALL_STATE(117)] = 2962,
  [SMALL_STATE(118)] = 2972,
  [SMALL_STATE(119)] = 2980,
  [SMALL_STATE(120)] = 2988,
  [SMALL_STATE(121)] = 2998,
  [SMALL_STATE(122)] = 3006,
  [SMALL_STATE(123)] = 3016,
  [SMALL_STATE(124)] = 3026,
  [SMALL_STATE(125)] = 3033,
  [SMALL_STATE(126)] = 3040,
  [SMALL_STATE(127)] = 3047,
  [SMALL_STATE(128)] = 3054,
  [SMALL_STATE(129)] = 3061,
  [SMALL_STATE(130)] = 3068,
  [SMALL_STATE(131)] = 3075,
  [SMALL_STATE(132)] = 3082,
  [SMALL_STATE(133)] = 3089,
  [SMALL_STATE(134)] = 3096,
  [SMALL_STATE(135)] = 3103,
  [SMALL_STATE(136)] = 3110,
  [SMALL_STATE(137)] = 3117,
  [SMALL_STATE(138)] = 3124,
  [SMALL_STATE(139)] = 3131,
  [SMALL_STATE(140)] = 3138,
  [SMALL_STATE(141)] = 3145,
  [SMALL_STATE(142)] = 3152,
  [SMALL_STATE(143)] = 3159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(133),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(121),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(99),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(95),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2), SHIFT_REPEAT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2), SHIFT_REPEAT(95),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(99),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_string, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_bytes_string, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_bytes_string, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 20),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 24),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 24),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 16),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 16),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 8, .production_id = 25),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 8, .production_id = 25),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 4, .production_id = 17),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 4, .production_id = 17),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 18),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 18),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 3, .production_id = 15),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 3, .production_id = 15),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 22),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 22),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 23),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 23),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 6),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(39),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(25),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 11),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(97),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(97),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_var_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_var_repeat1, 2), SHIFT_REPEAT(108),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(24),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 14),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 12),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 6),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [495] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
