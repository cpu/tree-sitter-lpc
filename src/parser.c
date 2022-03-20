#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 146
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
  sym_local_var = 88,
  sym_return_statement = 89,
  sym_assignment_statement = 90,
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
  [sym_local_var] = "local_var",
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
  [sym_local_var] = sym_local_var,
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
  [sym_local_var] = {
    .visible = true,
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
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '?') ADVANCE(56);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
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
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(83);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(76);
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
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(27);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '=') ADVANCE(59);
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
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '=') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(52);
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
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
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
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '|') ADVANCE(110);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(83);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_b_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(99);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(97);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '0') ADVANCE(94);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
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
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(69);
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
      if (lookahead == '"') ADVANCE(82);
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
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
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
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 45},
  [46] = {.lex_state = 45},
  [47] = {.lex_state = 45},
  [48] = {.lex_state = 45},
  [49] = {.lex_state = 45},
  [50] = {.lex_state = 45},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 45},
  [58] = {.lex_state = 45},
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
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 45},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 45},
  [83] = {.lex_state = 45},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 45},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 45},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 45},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 45},
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
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
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
    [sym_source_file] = STATE(145),
    [sym__definition] = STATE(3),
    [sym_global_definition] = STATE(3),
    [sym__name_list] = STATE(144),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(6),
    [sym__basic_type] = STATE(106),
    [sym_non_void_type] = STATE(106),
    [sym__single_non_void_type] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__name_list_repeat1] = STATE(6),
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
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(144), 1,
      sym__name_list,
    STATE(6), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(106), 2,
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
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(144), 1,
      sym__name_list,
    STATE(6), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(106), 2,
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
  [124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LT,
    ACTIONS(38), 25,
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
  [167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LT,
    ACTIONS(42), 25,
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
  [210] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_void,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(7), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    STATE(107), 2,
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
  [260] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LT,
    STATE(7), 2,
      sym_type_modifier,
      aux_sym__name_list_repeat1,
    ACTIONS(50), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(48), 15,
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
  [299] = 3,
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
  [333] = 3,
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
  [367] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_void,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_return,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(125), 1,
      sym_local_var,
    STATE(140), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(14), 4,
      sym__statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
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
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(77), 24,
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
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(81), 24,
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
  [519] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_void,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_LT,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(125), 1,
      sym_local_var,
    STATE(140), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(14), 4,
      sym__statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
    ACTIONS(94), 13,
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
  [569] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_void,
    ACTIONS(69), 1,
      anon_sym_return,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(125), 1,
      sym_local_var,
    STATE(140), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(10), 4,
      sym__statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
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
  [619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(102), 24,
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
  [652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(106), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(108), 14,
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
  [685] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(112), 1,
      anon_sym_void,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 1,
      anon_sym_varargs,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(104), 1,
      sym_parameter,
    STATE(128), 1,
      sym_non_void_type,
    ACTIONS(118), 13,
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
  [725] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_void,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(92), 1,
      sym_parameter_list,
    STATE(122), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(118), 13,
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
  [763] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(130), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(138), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(61), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [810] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(144), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(58), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(146), 16,
      anon_sym_void,
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
  [883] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
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
  [927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(154), 16,
      anon_sym_void,
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
  [953] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(116), 1,
      anon_sym_varargs,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(126), 1,
      sym_parameter,
    STATE(128), 1,
      sym_non_void_type,
    ACTIONS(118), 13,
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
  [987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(158), 16,
      anon_sym_void,
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
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(162), 16,
      anon_sym_void,
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
  [1039] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(166), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(55), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1080] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(168), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(70), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1121] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(170), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(56), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1162] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(172), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(73), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1203] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(174), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(71), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1244] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(176), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(74), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1285] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(178), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(76), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_parameter_list,
    ACTIONS(108), 14,
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
  [1355] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(182), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(72), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1396] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(184), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
      sym_bytes_literal,
    STATE(79), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_parameter_list,
    ACTIONS(108), 14,
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
  [1466] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_function,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(188), 1,
      sym_number_literal,
    STATE(44), 1,
      sym__lvalue,
    STATE(49), 1,
      sym_string_literal,
    STATE(50), 1,
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
  [1507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(142), 1,
      sym_non_void_type,
    ACTIONS(118), 13,
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
  [1535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(80), 1,
      sym__single_non_void_type,
    STATE(136), 1,
      sym_non_void_type,
    ACTIONS(118), 13,
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
  [1563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(84), 1,
      sym__single_non_void_type,
    ACTIONS(190), 13,
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
  [1588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 14,
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
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 14,
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
  [1628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_DOT,
    STATE(48), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(196), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(202), 1,
      anon_sym_DOT,
    STATE(47), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(200), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(208), 1,
      anon_sym_b_DQUOTE,
    STATE(47), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(204), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(48), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(211), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(45), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(106), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_b_DQUOTE,
    STATE(46), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(106), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DOT,
    ACTIONS(218), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(222), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [1808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(226), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
  [1826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(230), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [1844] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_DASH_GT,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(234), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COLON,
  [1870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_DASH_GT,
    ACTIONS(240), 1,
      anon_sym_DOT,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(244), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(246), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1911] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_DASH_GT,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(254), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 1,
      sym_member_operator,
    STATE(96), 1,
      aux_sym_function_call_repeat1,
  [1942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(256), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(260), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [1976] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_DASH_GT,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(266), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 1,
      sym_member_operator,
    STATE(91), 1,
      aux_sym_function_call_repeat1,
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(268), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(272), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(276), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(280), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DOT,
    ACTIONS(284), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DOT,
    ACTIONS(288), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(292), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOT,
    ACTIONS(296), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2143] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_DASH_GT,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(300), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [2167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(238), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(302), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(238), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(238), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(306), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(238), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(308), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(238), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(238), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2291] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_string_literal,
    STATE(132), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [2311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(238), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2331] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_QMARK,
    ACTIONS(318), 1,
      anon_sym_COLON,
    STATE(77), 1,
      sym_member_operator,
    ACTIONS(238), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [2351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_STAR,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    STATE(82), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(320), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [2369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [2380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    STATE(85), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(328), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [2395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [2406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_STAR,
    ACTIONS(332), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [2419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    STATE(85), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(332), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [2434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(45), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(12), 2,
      sym__function_body,
      sym_block,
  [2462] = 5,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_string_literal_token1,
    ACTIONS(347), 1,
      sym_escape_sequence,
    ACTIONS(349), 1,
      sym_comment,
    STATE(101), 1,
      aux_sym_string_literal_repeat1,
  [2478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_EQ,
    STATE(116), 1,
      sym_opt_default_value,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    STATE(13), 2,
      sym__function_body,
      sym_block,
  [2506] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(102), 1,
      aux_sym_function_call_repeat1,
  [2522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(67), 2,
      sym__function_body,
      sym_block,
  [2536] = 5,
    ACTIONS(345), 1,
      aux_sym_string_literal_token1,
    ACTIONS(347), 1,
      sym_escape_sequence,
    ACTIONS(349), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_string_literal_repeat1,
  [2552] = 5,
    ACTIONS(349), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_escape_sequence,
    STATE(93), 1,
      aux_sym_string_literal_repeat1,
  [2568] = 5,
    ACTIONS(349), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      aux_sym_string_literal_token1,
    ACTIONS(375), 1,
      sym_escape_sequence,
    STATE(88), 1,
      aux_sym_string_literal_repeat1,
  [2584] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(102), 1,
      aux_sym_function_call_repeat1,
  [2600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    STATE(9), 2,
      sym__function_body,
      sym_block,
  [2614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    STATE(63), 2,
      sym__function_body,
      sym_block,
  [2628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_opt_default_value,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    STATE(11), 2,
      sym__function_body,
      sym_block,
  [2656] = 5,
    ACTIONS(349), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_string_literal_token1,
    ACTIONS(394), 1,
      sym_escape_sequence,
    STATE(101), 1,
      aux_sym_string_literal_repeat1,
  [2672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(300), 2,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [2686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(400), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_parameter_list_repeat1,
  [2710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_parameter_list_repeat1,
  [2723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(43), 1,
      sym__lvalue,
    STATE(137), 1,
      sym_assignment_expression,
  [2736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(43), 1,
      sym__lvalue,
    STATE(135), 1,
      sym_assignment_expression,
  [2749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_parameter_list_repeat1,
  [2762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_STAR,
    STATE(111), 1,
      aux_sym_local_var_repeat1,
  [2775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(423), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_STAR,
    STATE(114), 1,
      aux_sym_local_var_repeat1,
  [2799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(43), 1,
      sym__lvalue,
    STATE(139), 1,
      sym_assignment_expression,
  [2812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(302), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_STAR,
    STATE(114), 1,
      aux_sym_local_var_repeat1,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [2845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_parameter_list,
  [2879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_parameter_list,
  [2889] = 2,
    ACTIONS(349), 1,
      sym_comment,
    ACTIONS(448), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [2897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_parameter_list,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    ACTIONS(456), 1,
      anon_sym_COMMA,
  [2933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_identifier,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
  [2990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [3004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_SEMI,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_SEMI,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_GT,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [3060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SEMI,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 210,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 299,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 367,
  [SMALL_STATE(11)] = 417,
  [SMALL_STATE(12)] = 451,
  [SMALL_STATE(13)] = 485,
  [SMALL_STATE(14)] = 519,
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 619,
  [SMALL_STATE(17)] = 652,
  [SMALL_STATE(18)] = 685,
  [SMALL_STATE(19)] = 725,
  [SMALL_STATE(20)] = 763,
  [SMALL_STATE(21)] = 810,
  [SMALL_STATE(22)] = 857,
  [SMALL_STATE(23)] = 883,
  [SMALL_STATE(24)] = 927,
  [SMALL_STATE(25)] = 953,
  [SMALL_STATE(26)] = 987,
  [SMALL_STATE(27)] = 1013,
  [SMALL_STATE(28)] = 1039,
  [SMALL_STATE(29)] = 1080,
  [SMALL_STATE(30)] = 1121,
  [SMALL_STATE(31)] = 1162,
  [SMALL_STATE(32)] = 1203,
  [SMALL_STATE(33)] = 1244,
  [SMALL_STATE(34)] = 1285,
  [SMALL_STATE(35)] = 1326,
  [SMALL_STATE(36)] = 1355,
  [SMALL_STATE(37)] = 1396,
  [SMALL_STATE(38)] = 1437,
  [SMALL_STATE(39)] = 1466,
  [SMALL_STATE(40)] = 1507,
  [SMALL_STATE(41)] = 1535,
  [SMALL_STATE(42)] = 1563,
  [SMALL_STATE(43)] = 1588,
  [SMALL_STATE(44)] = 1608,
  [SMALL_STATE(45)] = 1628,
  [SMALL_STATE(46)] = 1652,
  [SMALL_STATE(47)] = 1676,
  [SMALL_STATE(48)] = 1700,
  [SMALL_STATE(49)] = 1724,
  [SMALL_STATE(50)] = 1748,
  [SMALL_STATE(51)] = 1772,
  [SMALL_STATE(52)] = 1790,
  [SMALL_STATE(53)] = 1808,
  [SMALL_STATE(54)] = 1826,
  [SMALL_STATE(55)] = 1844,
  [SMALL_STATE(56)] = 1870,
  [SMALL_STATE(57)] = 1894,
  [SMALL_STATE(58)] = 1911,
  [SMALL_STATE(59)] = 1942,
  [SMALL_STATE(60)] = 1959,
  [SMALL_STATE(61)] = 1976,
  [SMALL_STATE(62)] = 2007,
  [SMALL_STATE(63)] = 2024,
  [SMALL_STATE(64)] = 2041,
  [SMALL_STATE(65)] = 2058,
  [SMALL_STATE(66)] = 2075,
  [SMALL_STATE(67)] = 2092,
  [SMALL_STATE(68)] = 2109,
  [SMALL_STATE(69)] = 2126,
  [SMALL_STATE(70)] = 2143,
  [SMALL_STATE(71)] = 2167,
  [SMALL_STATE(72)] = 2188,
  [SMALL_STATE(73)] = 2209,
  [SMALL_STATE(74)] = 2230,
  [SMALL_STATE(75)] = 2251,
  [SMALL_STATE(76)] = 2271,
  [SMALL_STATE(77)] = 2291,
  [SMALL_STATE(78)] = 2311,
  [SMALL_STATE(79)] = 2331,
  [SMALL_STATE(80)] = 2351,
  [SMALL_STATE(81)] = 2369,
  [SMALL_STATE(82)] = 2380,
  [SMALL_STATE(83)] = 2395,
  [SMALL_STATE(84)] = 2406,
  [SMALL_STATE(85)] = 2419,
  [SMALL_STATE(86)] = 2434,
  [SMALL_STATE(87)] = 2448,
  [SMALL_STATE(88)] = 2462,
  [SMALL_STATE(89)] = 2478,
  [SMALL_STATE(90)] = 2492,
  [SMALL_STATE(91)] = 2506,
  [SMALL_STATE(92)] = 2522,
  [SMALL_STATE(93)] = 2536,
  [SMALL_STATE(94)] = 2552,
  [SMALL_STATE(95)] = 2568,
  [SMALL_STATE(96)] = 2584,
  [SMALL_STATE(97)] = 2600,
  [SMALL_STATE(98)] = 2614,
  [SMALL_STATE(99)] = 2628,
  [SMALL_STATE(100)] = 2642,
  [SMALL_STATE(101)] = 2656,
  [SMALL_STATE(102)] = 2672,
  [SMALL_STATE(103)] = 2686,
  [SMALL_STATE(104)] = 2697,
  [SMALL_STATE(105)] = 2710,
  [SMALL_STATE(106)] = 2723,
  [SMALL_STATE(107)] = 2736,
  [SMALL_STATE(108)] = 2749,
  [SMALL_STATE(109)] = 2762,
  [SMALL_STATE(110)] = 2775,
  [SMALL_STATE(111)] = 2786,
  [SMALL_STATE(112)] = 2799,
  [SMALL_STATE(113)] = 2812,
  [SMALL_STATE(114)] = 2823,
  [SMALL_STATE(115)] = 2836,
  [SMALL_STATE(116)] = 2845,
  [SMALL_STATE(117)] = 2853,
  [SMALL_STATE(118)] = 2861,
  [SMALL_STATE(119)] = 2869,
  [SMALL_STATE(120)] = 2879,
  [SMALL_STATE(121)] = 2889,
  [SMALL_STATE(122)] = 2897,
  [SMALL_STATE(123)] = 2907,
  [SMALL_STATE(124)] = 2915,
  [SMALL_STATE(125)] = 2923,
  [SMALL_STATE(126)] = 2933,
  [SMALL_STATE(127)] = 2941,
  [SMALL_STATE(128)] = 2948,
  [SMALL_STATE(129)] = 2955,
  [SMALL_STATE(130)] = 2962,
  [SMALL_STATE(131)] = 2969,
  [SMALL_STATE(132)] = 2976,
  [SMALL_STATE(133)] = 2983,
  [SMALL_STATE(134)] = 2990,
  [SMALL_STATE(135)] = 2997,
  [SMALL_STATE(136)] = 3004,
  [SMALL_STATE(137)] = 3011,
  [SMALL_STATE(138)] = 3018,
  [SMALL_STATE(139)] = 3025,
  [SMALL_STATE(140)] = 3032,
  [SMALL_STATE(141)] = 3039,
  [SMALL_STATE(142)] = 3046,
  [SMALL_STATE(143)] = 3053,
  [SMALL_STATE(144)] = 3060,
  [SMALL_STATE(145)] = 3067,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(140),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_string, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_bytes_string, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_bytes_string, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2), SHIFT_REPEAT(95),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(94),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 20),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 16),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 16),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 8, .production_id = 25),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 8, .production_id = 25),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 24),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 24),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 18),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 18),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 4, .production_id = 17),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 4, .production_id = 17),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 23),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 23),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 22),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 22),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 3, .production_id = 15),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 3, .production_id = 15),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(42),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 11),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(101),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(101),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(29),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(25),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_var_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_var_repeat1, 2), SHIFT_REPEAT(114),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 12),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 14),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3, .production_id = 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [484] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
