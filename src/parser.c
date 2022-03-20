#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 199
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 34

enum {
  sym_identifier = 1,
  anon_sym_async = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_void = 5,
  anon_sym_RPAREN = 6,
  anon_sym_varargs = 7,
  anon_sym_EQ = 8,
  anon_sym_struct = 9,
  anon_sym_SEMI = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_function = 13,
  anon_sym_DOT_DOT_DOT = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_DOT = 16,
  anon_sym_QMARK = 17,
  anon_sym_COLON = 18,
  anon_sym_STAR_EQ = 19,
  anon_sym_SLASH_EQ = 20,
  anon_sym_PERCENT_EQ = 21,
  anon_sym_PLUS_EQ = 22,
  anon_sym_DASH_EQ = 23,
  anon_sym_LT_LT_EQ = 24,
  anon_sym_GT_GT_EQ = 25,
  anon_sym_GT_GT_GT_EQ = 26,
  anon_sym_AMP_EQ = 27,
  anon_sym_AMP_AMP_EQ = 28,
  anon_sym_CARET_EQ = 29,
  anon_sym_PIPE_EQ = 30,
  anon_sym_PIPE_PIPE_EQ = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_char_literal_token1 = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_literal_token1 = 35,
  anon_sym_b_DQUOTE = 36,
  sym_escape_sequence = 37,
  sym_number_literal = 38,
  anon_sym_STAR = 39,
  anon_sym_return = 40,
  anon_sym_nomask = 41,
  anon_sym_static = 42,
  anon_sym_private = 43,
  anon_sym_public = 44,
  anon_sym_protected = 45,
  anon_sym_nosave = 46,
  anon_sym_deprecated = 47,
  anon_sym_visible = 48,
  anon_sym_PIPE = 49,
  anon_sym_status = 50,
  anon_sym_int = 51,
  anon_sym_bytes = 52,
  anon_sym_string = 53,
  anon_sym_closure = 54,
  anon_sym_coroutine = 55,
  anon_sym_symbol = 56,
  anon_sym_float = 57,
  anon_sym_mapping = 58,
  anon_sym_mixed = 59,
  anon_sym_object = 60,
  anon_sym_lwobject = 61,
  anon_sym_LT = 62,
  anon_sym_GT = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym__definition = 66,
  sym_function_definition = 67,
  sym_parameter_list = 68,
  sym_parameter = 69,
  sym_opt_default_value = 70,
  sym_struct_definition = 71,
  sym_struct_member_list = 72,
  sym_struct_member = 73,
  sym__expression = 74,
  sym_inline_func = 75,
  sym_function_call = 76,
  sym_member_operator = 77,
  sym__call_other_name = 78,
  sym_conditional_expression = 79,
  sym_assignment_operator = 80,
  sym_assignment_expression = 81,
  sym_char_literal = 82,
  sym_concatenated_string = 83,
  sym_string_literal = 84,
  sym_concatenated_bytes_string = 85,
  sym_bytes_literal = 86,
  sym__lvalue = 87,
  sym__function_body = 88,
  sym_block = 89,
  sym__statement = 90,
  sym__comma_expr = 91,
  sym_global_var = 92,
  sym_local_var = 93,
  sym_return_statement = 94,
  sym_type_modifier = 95,
  sym__basic_type = 96,
  sym_non_void_type = 97,
  sym__single_non_void_type = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_function_definition_repeat1 = 100,
  aux_sym_parameter_list_repeat1 = 101,
  aux_sym_struct_member_list_repeat1 = 102,
  aux_sym_function_call_repeat1 = 103,
  aux_sym_concatenated_string_repeat1 = 104,
  aux_sym_string_literal_repeat1 = 105,
  aux_sym_concatenated_bytes_string_repeat1 = 106,
  aux_sym_block_repeat1 = 107,
  aux_sym_global_var_repeat1 = 108,
  aux_sym_non_void_type_repeat1 = 109,
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
  [anon_sym_struct] = "struct",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_opt_default_value] = "opt_default_value",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_member_list] = "struct_member_list",
  [sym_struct_member] = "struct_member",
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
  [aux_sym_struct_member_list_repeat1] = "struct_member_list_repeat1",
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
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_opt_default_value] = sym_opt_default_value,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_member_list] = sym_struct_member_list,
  [sym_struct_member] = sym_struct_member,
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
  [aux_sym_struct_member_list_repeat1] = aux_sym_struct_member_list_repeat1,
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
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
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
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member_list] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member] = {
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
  [aux_sym_struct_member_list_repeat1] = {
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
  field_base_struct = 7,
  field_body = 8,
  field_condition = 9,
  field_consequence = 10,
  field_definition = 11,
  field_function = 12,
  field_left = 13,
  field_modifiers = 14,
  field_name = 15,
  field_operator = 16,
  field_right = 17,
  field_target = 18,
  field_type = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arg_default] = "arg_default",
  [field_arg_name] = "arg_name",
  [field_arg_type] = "arg_type",
  [field_arguments] = "arguments",
  [field_async] = "async",
  [field_base_struct] = "base_struct",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_definition] = "definition",
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
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 4},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 2},
  [8] = {.index = 15, .length = 4},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 2},
  [11] = {.index = 24, .length = 4},
  [12] = {.index = 28, .length = 3},
  [13] = {.index = 31, .length = 2},
  [14] = {.index = 33, .length = 5},
  [15] = {.index = 38, .length = 5},
  [16] = {.index = 43, .length = 2},
  [17] = {.index = 45, .length = 3},
  [18] = {.index = 48, .length = 3},
  [19] = {.index = 51, .length = 5},
  [20] = {.index = 56, .length = 6},
  [21] = {.index = 62, .length = 3},
  [22] = {.index = 65, .length = 2},
  [23] = {.index = 67, .length = 3},
  [24] = {.index = 70, .length = 3},
  [25] = {.index = 73, .length = 3},
  [26] = {.index = 76, .length = 4},
  [27] = {.index = 80, .length = 5},
  [28] = {.index = 85, .length = 3},
  [29] = {.index = 88, .length = 4},
  [30] = {.index = 92, .length = 6},
  [31] = {.index = 98, .length = 5},
  [32] = {.index = 103, .length = 6},
  [33] = {.index = 109, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_type, 0},
  [3] =
    {field_name, 1},
  [4] =
    {field_arguments, 1},
    {field_body, 2},
    {field_name, 0},
  [7] =
    {field_arguments, 2},
    {field_async, 0},
    {field_body, 3},
    {field_name, 1},
  [11] =
    {field_definition, 2},
    {field_name, 1},
  [13] =
    {field_arg_name, 1},
    {field_arg_type, 0},
  [15] =
    {field_arguments, 2},
    {field_body, 3},
    {field_name, 1},
    {field_type, 0},
  [19] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [22] =
    {field_modifiers, 0},
    {field_name, 2},
  [24] =
    {field_arguments, 2},
    {field_body, 3},
    {field_modifiers, 0},
    {field_name, 1},
  [28] =
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [31] =
    {field_modifiers, 0},
    {field_type, 1},
  [33] =
    {field_arguments, 3},
    {field_async, 0},
    {field_body, 4},
    {field_name, 2},
    {field_type, 1},
  [38] =
    {field_arguments, 3},
    {field_async, 0},
    {field_body, 4},
    {field_modifiers, 1},
    {field_name, 2},
  [43] =
    {field_arg_name, 2},
    {field_arg_type, 1},
  [45] =
    {field_arg_default, 2},
    {field_arg_name, 1},
    {field_arg_type, 0},
  [48] =
    {field_definition, 3},
    {field_modifiers, 0},
    {field_name, 2},
  [51] =
    {field_arguments, 3},
    {field_body, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [56] =
    {field_arguments, 4},
    {field_async, 0},
    {field_body, 5},
    {field_modifiers, 1},
    {field_name, 3},
    {field_type, 2},
  [62] =
    {field_arg_default, 3},
    {field_arg_name, 2},
    {field_arg_type, 1},
  [65] =
    {field_arguments, 1},
    {field_body, 2},
  [67] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_function, 0},
  [70] =
    {field_base_struct, 0},
    {field_base_struct, 1},
    {field_base_struct, 2},
  [73] =
    {field_arguments, 2},
    {field_body, 3},
    {field_type, 1},
  [76] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [80] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 0},
  [85] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [88] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 2},
    {field_target, 0},
  [92] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 0},
  [98] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 2},
    {field_target, 0},
  [103] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_function, 2},
    {field_target, 0},
  [109] =
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
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == '^') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
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
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(78);
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
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '?') ADVANCE(58);
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
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '=') ADVANCE(61);
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
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '=') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(54);
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
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
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
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '?') ADVANCE(58);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_b_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(101);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'x') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '0') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '0') ADVANCE(94);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(71);
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
      if (lookahead == '"') ADVANCE(84);
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
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 0},
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
  [88] = {.lex_state = 45},
  [89] = {.lex_state = 45},
  [90] = {.lex_state = 45},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 45},
  [93] = {.lex_state = 45},
  [94] = {.lex_state = 45},
  [95] = {.lex_state = 45},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 45},
  [98] = {.lex_state = 45},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 45},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 45},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 7},
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
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
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
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(195),
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_struct_definition] = STATE(8),
    [sym_global_var] = STATE(8),
    [sym_local_var] = STATE(194),
    [sym_type_modifier] = STATE(13),
    [sym__basic_type] = STATE(139),
    [sym_non_void_type] = STATE(139),
    [sym__single_non_void_type] = STATE(104),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_varargs] = ACTIONS(13),
    [anon_sym_struct] = ACTIONS(15),
    [anon_sym_nomask] = ACTIONS(13),
    [anon_sym_static] = ACTIONS(13),
    [anon_sym_private] = ACTIONS(13),
    [anon_sym_public] = ACTIONS(13),
    [anon_sym_protected] = ACTIONS(13),
    [anon_sym_nosave] = ACTIONS(13),
    [anon_sym_deprecated] = ACTIONS(13),
    [anon_sym_visible] = ACTIONS(13),
    [anon_sym_status] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_bytes] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_closure] = ACTIONS(17),
    [anon_sym_coroutine] = ACTIONS(17),
    [anon_sym_symbol] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_mapping] = ACTIONS(17),
    [anon_sym_mixed] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_lwobject] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_void,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(43), 1,
      anon_sym_return,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(149), 1,
      sym_local_var,
    STATE(143), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(196), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(5), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(95), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(17), 12,
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
  [95] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_void,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(149), 1,
      sym_local_var,
    STATE(143), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(196), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(2), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(95), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(17), 12,
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
  [190] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_void,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(149), 1,
      sym_local_var,
    STATE(143), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(196), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(6), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(95), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(17), 12,
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
  [285] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_void,
    ACTIONS(59), 1,
      anon_sym_struct,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_function,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(82), 1,
      sym_number_literal,
    ACTIONS(85), 1,
      anon_sym_return,
    ACTIONS(91), 1,
      anon_sym_LT,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(149), 1,
      sym_local_var,
    STATE(143), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(196), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(5), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(95), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(88), 12,
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
  [380] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_void,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(149), 1,
      sym_local_var,
    STATE(143), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(196), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(5), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(95), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(17), 12,
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
  [475] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_async,
    ACTIONS(104), 1,
      anon_sym_void,
    ACTIONS(110), 1,
      anon_sym_struct,
    ACTIONS(116), 1,
      anon_sym_LT,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(194), 1,
      sym_local_var,
    STATE(13), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(139), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 5,
      sym__definition,
      sym_function_definition,
      sym_struct_definition,
      sym_global_var,
      aux_sym_source_file_repeat1,
    ACTIONS(107), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(113), 12,
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
  [543] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_async,
    ACTIONS(11), 1,
      anon_sym_void,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(194), 1,
      sym_local_var,
    STATE(13), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(139), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 5,
      sym__definition,
      sym_function_definition,
      sym_struct_definition,
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
    ACTIONS(17), 12,
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
  [611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LT,
    ACTIONS(123), 26,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LT,
    ACTIONS(127), 26,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [699] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_void,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(31), 2,
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
    ACTIONS(17), 12,
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
  [751] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_void,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(11), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(185), 2,
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
    ACTIONS(17), 12,
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
  [803] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_void,
    ACTIONS(141), 1,
      anon_sym_struct,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(31), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(141), 2,
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
    ACTIONS(17), 12,
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
  [855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(145), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(149), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(153), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(157), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(161), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(165), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(169), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(173), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(177), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(181), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(185), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(189), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(193), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(197), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(201), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(205), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(209), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LT,
    STATE(31), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(213), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(211), 15,
      anon_sym_void,
      anon_sym_struct,
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
      sym_identifier,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(220), 25,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_LT,
    ACTIONS(127), 17,
      anon_sym_void,
      anon_sym_struct,
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
      sym_identifier,
  [1557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_LT,
    ACTIONS(123), 17,
      anon_sym_void,
      anon_sym_struct,
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
      sym_identifier,
  [1590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_LT,
    ACTIONS(222), 17,
      anon_sym_void,
      anon_sym_struct,
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
      sym_identifier,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LT,
    ACTIONS(226), 24,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
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
      sym_identifier,
  [1656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(230), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(232), 14,
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
  [1689] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_void,
    ACTIONS(240), 1,
      anon_sym_struct,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(120), 1,
      sym_parameter_list,
    STATE(160), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(242), 12,
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
  [1729] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    ACTIONS(244), 1,
      anon_sym_void,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 1,
      anon_sym_varargs,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(136), 1,
      sym_parameter,
    STATE(186), 1,
      sym_non_void_type,
    ACTIONS(242), 12,
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
  [1771] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(180), 1,
      sym_non_void_type,
    STATE(46), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(242), 12,
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
  [1808] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_struct,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      anon_sym_LT,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(180), 1,
      sym_non_void_type,
    STATE(41), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(257), 12,
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
  [1845] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(180), 1,
      sym_non_void_type,
    STATE(45), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(242), 12,
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
  [1882] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(269), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
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
  [1929] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(175), 1,
      sym__comma_expr,
    STATE(95), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [1976] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(180), 1,
      sym_non_void_type,
    STATE(41), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(242), 12,
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
  [2013] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(180), 1,
      sym_non_void_type,
    STATE(41), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(242), 12,
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
  [2050] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(281), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(94), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2097] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    ACTIONS(248), 1,
      anon_sym_varargs,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(153), 1,
      sym_parameter,
    STATE(186), 1,
      sym_non_void_type,
    ACTIONS(242), 12,
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
  [2133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym_parameter_list,
    ACTIONS(232), 14,
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
  [2165] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_parameter_list,
    ACTIONS(232), 14,
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
  [2194] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(289), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(75), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2235] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(291), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(97), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2276] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(293), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(85), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2317] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(295), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(101), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2358] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(297), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(103), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2399] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(299), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(79), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2440] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(301), 1,
      sym_number_literal,
    STATE(65), 1,
      sym__lvalue,
    STATE(69), 1,
      sym_bytes_literal,
    STATE(73), 1,
      sym_string_literal,
    STATE(98), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(232), 14,
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
  [2507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(232), 14,
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
  [2531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(173), 1,
      sym_non_void_type,
    ACTIONS(242), 12,
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
  [2561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(232), 14,
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
  [2585] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    STATE(104), 1,
      sym__single_non_void_type,
    STATE(188), 1,
      sym_non_void_type,
    ACTIONS(242), 12,
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
  [2615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(232), 14,
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
  [2641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(232), 14,
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
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym_assignment_operator,
    ACTIONS(311), 14,
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
  [2688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_struct,
    STATE(113), 1,
      sym__single_non_void_type,
    ACTIONS(313), 12,
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
  [2715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym_assignment_operator,
    ACTIONS(311), 14,
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
  [2738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 15,
      anon_sym_struct,
      anon_sym_RBRACE,
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
      anon_sym_LT,
  [2759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(72), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(230), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    STATE(70), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(317), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(70), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(324), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_DOT,
    STATE(74), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(328), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(71), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(230), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_b_DQUOTE,
    STATE(74), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(332), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2903] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DASH_GT,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(100), 1,
      sym_member_operator,
    ACTIONS(341), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(347), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [2945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(351), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [2963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_DOT,
    ACTIONS(355), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
  [2981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DASH_GT,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    STATE(100), 1,
      sym_member_operator,
    ACTIONS(359), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COLON,
  [3007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_DOT,
    ACTIONS(363), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(367), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(371), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DOT,
    ACTIONS(375), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(379), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3093] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DASH_GT,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    STATE(100), 1,
      sym_member_operator,
    ACTIONS(383), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
  [3118] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DASH_GT,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(100), 1,
      sym_member_operator,
    STATE(125), 1,
      aux_sym_function_call_repeat1,
  [3149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(391), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DOT,
    ACTIONS(395), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_DOT,
    ACTIONS(399), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(403), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOT,
    ACTIONS(407), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(411), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(415), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3268] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DASH_GT,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(421), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(100), 1,
      sym_member_operator,
    STATE(133), 1,
      aux_sym_function_call_repeat1,
  [3299] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_member_operator,
    STATE(138), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(343), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      sym_struct_member_list,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_identifier,
  [3346] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    STATE(100), 1,
      sym_member_operator,
    ACTIONS(343), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    STATE(100), 1,
      sym_member_operator,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(343), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      sym_struct_member_list,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_identifier,
  [3409] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_string_literal,
    STATE(165), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [3429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    ACTIONS(441), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_member_operator,
    ACTIONS(343), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_function,
      sym_identifier,
    ACTIONS(445), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
  [3463] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_member_operator,
    ACTIONS(343), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_STAR,
    ACTIONS(453), 1,
      anon_sym_PIPE,
    STATE(112), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(449), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3501] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 1,
      anon_sym_STAR,
    STATE(67), 1,
      sym__lvalue,
    STATE(137), 1,
      aux_sym_global_var_repeat1,
    STATE(161), 1,
      sym_assignment_expression,
  [3520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(459), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_STAR,
    STATE(67), 1,
      sym__lvalue,
    STATE(114), 1,
      aux_sym_global_var_repeat1,
    STATE(155), 1,
      sym_assignment_expression,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_STAR,
    STATE(67), 1,
      sym__lvalue,
    STATE(105), 1,
      aux_sym_global_var_repeat1,
    STATE(164), 1,
      sym_assignment_expression,
  [3595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(383), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
  [3610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(477), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_STAR,
    ACTIONS(459), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3638] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_STAR,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(67), 1,
      sym__lvalue,
    STATE(137), 1,
      aux_sym_global_var_repeat1,
    STATE(147), 1,
      sym_assignment_expression,
  [3657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    STATE(16), 2,
      sym__function_body,
      sym_block,
  [3671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    STATE(19), 2,
      sym__function_body,
      sym_block,
  [3685] = 5,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      aux_sym_string_literal_token1,
    ACTIONS(491), 1,
      sym_escape_sequence,
    ACTIONS(493), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_string_literal_repeat1,
  [3701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    STATE(83), 2,
      sym__function_body,
      sym_block,
  [3715] = 5,
    ACTIONS(493), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_literal_token1,
    ACTIONS(502), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym_string_literal_repeat1,
  [3731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(505), 1,
      anon_sym_SEMI,
    STATE(89), 2,
      sym__function_body,
      sym_block,
  [3745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    STATE(20), 2,
      sym__function_body,
      sym_block,
  [3759] = 5,
    ACTIONS(493), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    ACTIONS(511), 1,
      aux_sym_string_literal_token1,
    ACTIONS(513), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym_string_literal_repeat1,
  [3775] = 5,
    ACTIONS(493), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym_string_literal_token1,
    ACTIONS(513), 1,
      sym_escape_sequence,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym_string_literal_repeat1,
  [3791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_SEMI,
    STATE(15), 2,
      sym__function_body,
      sym_block,
  [3805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(111), 1,
      aux_sym_function_call_repeat1,
  [3821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(523), 1,
      anon_sym_SEMI,
    STATE(32), 2,
      sym__function_body,
      sym_block,
  [3835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    STATE(26), 2,
      sym__function_body,
      sym_block,
  [3849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    STATE(17), 2,
      sym__function_body,
      sym_block,
  [3863] = 5,
    ACTIONS(493), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      aux_sym_string_literal_token1,
    ACTIONS(533), 1,
      sym_escape_sequence,
    STATE(122), 1,
      aux_sym_string_literal_repeat1,
  [3879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_opt_default_value,
    ACTIONS(535), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(71), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [3907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(541), 1,
      anon_sym_SEMI,
    STATE(18), 2,
      sym__function_body,
      sym_block,
  [3921] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(111), 1,
      aux_sym_function_call_repeat1,
  [3937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym_opt_default_value,
    ACTIONS(547), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      aux_sym_parameter_list_repeat1,
  [3964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_parameter_list_repeat1,
  [3977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(557), 1,
      anon_sym_STAR,
    STATE(137), 1,
      aux_sym_global_var_repeat1,
  [3990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym_function_call_repeat1,
  [4003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_identifier,
    STATE(67), 1,
      sym__lvalue,
    STATE(158), 1,
      sym_assignment_expression,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [4025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(67), 1,
      sym__lvalue,
    STATE(174), 1,
      sym_assignment_expression,
  [4038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      aux_sym_parameter_list_repeat1,
  [4051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(67), 1,
      sym__lvalue,
    STATE(154), 1,
      sym_assignment_expression,
  [4064] = 2,
    ACTIONS(493), 1,
      sym_comment,
    ACTIONS(575), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_parameter_list,
  [4082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_parameter_list,
  [4092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_parameter_list,
  [4138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_parameter_list,
  [4148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_SEMI,
  [4174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_SEMI,
  [4200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_parameter_list,
  [4218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_parameter_list,
  [4236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_parameter_list,
  [4246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_identifier,
  [4268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
  [4275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SEMI,
  [4282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
  [4289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [4296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_identifier,
  [4303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_identifier,
  [4310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_GT,
  [4317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
  [4324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [4338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SEMI,
  [4345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SQUOTE,
  [4352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_identifier,
  [4366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [4380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_SEMI,
  [4394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
  [4401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
  [4408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [4415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
  [4422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
  [4429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
  [4436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [4443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_SEMI,
  [4450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [4457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
  [4464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [4478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
  [4485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 285,
  [SMALL_STATE(6)] = 380,
  [SMALL_STATE(7)] = 475,
  [SMALL_STATE(8)] = 543,
  [SMALL_STATE(9)] = 611,
  [SMALL_STATE(10)] = 655,
  [SMALL_STATE(11)] = 699,
  [SMALL_STATE(12)] = 751,
  [SMALL_STATE(13)] = 803,
  [SMALL_STATE(14)] = 855,
  [SMALL_STATE(15)] = 890,
  [SMALL_STATE(16)] = 925,
  [SMALL_STATE(17)] = 960,
  [SMALL_STATE(18)] = 995,
  [SMALL_STATE(19)] = 1030,
  [SMALL_STATE(20)] = 1065,
  [SMALL_STATE(21)] = 1100,
  [SMALL_STATE(22)] = 1135,
  [SMALL_STATE(23)] = 1170,
  [SMALL_STATE(24)] = 1205,
  [SMALL_STATE(25)] = 1240,
  [SMALL_STATE(26)] = 1275,
  [SMALL_STATE(27)] = 1310,
  [SMALL_STATE(28)] = 1345,
  [SMALL_STATE(29)] = 1380,
  [SMALL_STATE(30)] = 1415,
  [SMALL_STATE(31)] = 1450,
  [SMALL_STATE(32)] = 1489,
  [SMALL_STATE(33)] = 1524,
  [SMALL_STATE(34)] = 1557,
  [SMALL_STATE(35)] = 1590,
  [SMALL_STATE(36)] = 1623,
  [SMALL_STATE(37)] = 1656,
  [SMALL_STATE(38)] = 1689,
  [SMALL_STATE(39)] = 1729,
  [SMALL_STATE(40)] = 1771,
  [SMALL_STATE(41)] = 1808,
  [SMALL_STATE(42)] = 1845,
  [SMALL_STATE(43)] = 1882,
  [SMALL_STATE(44)] = 1929,
  [SMALL_STATE(45)] = 1976,
  [SMALL_STATE(46)] = 2013,
  [SMALL_STATE(47)] = 2050,
  [SMALL_STATE(48)] = 2097,
  [SMALL_STATE(49)] = 2133,
  [SMALL_STATE(50)] = 2165,
  [SMALL_STATE(51)] = 2194,
  [SMALL_STATE(52)] = 2235,
  [SMALL_STATE(53)] = 2276,
  [SMALL_STATE(54)] = 2317,
  [SMALL_STATE(55)] = 2358,
  [SMALL_STATE(56)] = 2399,
  [SMALL_STATE(57)] = 2440,
  [SMALL_STATE(58)] = 2481,
  [SMALL_STATE(59)] = 2507,
  [SMALL_STATE(60)] = 2531,
  [SMALL_STATE(61)] = 2561,
  [SMALL_STATE(62)] = 2585,
  [SMALL_STATE(63)] = 2615,
  [SMALL_STATE(64)] = 2641,
  [SMALL_STATE(65)] = 2665,
  [SMALL_STATE(66)] = 2688,
  [SMALL_STATE(67)] = 2715,
  [SMALL_STATE(68)] = 2738,
  [SMALL_STATE(69)] = 2759,
  [SMALL_STATE(70)] = 2783,
  [SMALL_STATE(71)] = 2807,
  [SMALL_STATE(72)] = 2831,
  [SMALL_STATE(73)] = 2855,
  [SMALL_STATE(74)] = 2879,
  [SMALL_STATE(75)] = 2903,
  [SMALL_STATE(76)] = 2927,
  [SMALL_STATE(77)] = 2945,
  [SMALL_STATE(78)] = 2963,
  [SMALL_STATE(79)] = 2981,
  [SMALL_STATE(80)] = 3007,
  [SMALL_STATE(81)] = 3025,
  [SMALL_STATE(82)] = 3042,
  [SMALL_STATE(83)] = 3059,
  [SMALL_STATE(84)] = 3076,
  [SMALL_STATE(85)] = 3093,
  [SMALL_STATE(86)] = 3118,
  [SMALL_STATE(87)] = 3149,
  [SMALL_STATE(88)] = 3166,
  [SMALL_STATE(89)] = 3183,
  [SMALL_STATE(90)] = 3200,
  [SMALL_STATE(91)] = 3217,
  [SMALL_STATE(92)] = 3234,
  [SMALL_STATE(93)] = 3251,
  [SMALL_STATE(94)] = 3268,
  [SMALL_STATE(95)] = 3299,
  [SMALL_STATE(96)] = 3325,
  [SMALL_STATE(97)] = 3346,
  [SMALL_STATE(98)] = 3367,
  [SMALL_STATE(99)] = 3388,
  [SMALL_STATE(100)] = 3409,
  [SMALL_STATE(101)] = 3429,
  [SMALL_STATE(102)] = 3449,
  [SMALL_STATE(103)] = 3463,
  [SMALL_STATE(104)] = 3483,
  [SMALL_STATE(105)] = 3501,
  [SMALL_STATE(106)] = 3520,
  [SMALL_STATE(107)] = 3535,
  [SMALL_STATE(108)] = 3546,
  [SMALL_STATE(109)] = 3565,
  [SMALL_STATE(110)] = 3576,
  [SMALL_STATE(111)] = 3595,
  [SMALL_STATE(112)] = 3610,
  [SMALL_STATE(113)] = 3625,
  [SMALL_STATE(114)] = 3638,
  [SMALL_STATE(115)] = 3657,
  [SMALL_STATE(116)] = 3671,
  [SMALL_STATE(117)] = 3685,
  [SMALL_STATE(118)] = 3701,
  [SMALL_STATE(119)] = 3715,
  [SMALL_STATE(120)] = 3731,
  [SMALL_STATE(121)] = 3745,
  [SMALL_STATE(122)] = 3759,
  [SMALL_STATE(123)] = 3775,
  [SMALL_STATE(124)] = 3791,
  [SMALL_STATE(125)] = 3805,
  [SMALL_STATE(126)] = 3821,
  [SMALL_STATE(127)] = 3835,
  [SMALL_STATE(128)] = 3849,
  [SMALL_STATE(129)] = 3863,
  [SMALL_STATE(130)] = 3879,
  [SMALL_STATE(131)] = 3893,
  [SMALL_STATE(132)] = 3907,
  [SMALL_STATE(133)] = 3921,
  [SMALL_STATE(134)] = 3937,
  [SMALL_STATE(135)] = 3951,
  [SMALL_STATE(136)] = 3964,
  [SMALL_STATE(137)] = 3977,
  [SMALL_STATE(138)] = 3990,
  [SMALL_STATE(139)] = 4003,
  [SMALL_STATE(140)] = 4016,
  [SMALL_STATE(141)] = 4025,
  [SMALL_STATE(142)] = 4038,
  [SMALL_STATE(143)] = 4051,
  [SMALL_STATE(144)] = 4064,
  [SMALL_STATE(145)] = 4072,
  [SMALL_STATE(146)] = 4082,
  [SMALL_STATE(147)] = 4092,
  [SMALL_STATE(148)] = 4102,
  [SMALL_STATE(149)] = 4110,
  [SMALL_STATE(150)] = 4120,
  [SMALL_STATE(151)] = 4128,
  [SMALL_STATE(152)] = 4138,
  [SMALL_STATE(153)] = 4148,
  [SMALL_STATE(154)] = 4156,
  [SMALL_STATE(155)] = 4164,
  [SMALL_STATE(156)] = 4174,
  [SMALL_STATE(157)] = 4182,
  [SMALL_STATE(158)] = 4190,
  [SMALL_STATE(159)] = 4200,
  [SMALL_STATE(160)] = 4208,
  [SMALL_STATE(161)] = 4218,
  [SMALL_STATE(162)] = 4226,
  [SMALL_STATE(163)] = 4236,
  [SMALL_STATE(164)] = 4246,
  [SMALL_STATE(165)] = 4254,
  [SMALL_STATE(166)] = 4261,
  [SMALL_STATE(167)] = 4268,
  [SMALL_STATE(168)] = 4275,
  [SMALL_STATE(169)] = 4282,
  [SMALL_STATE(170)] = 4289,
  [SMALL_STATE(171)] = 4296,
  [SMALL_STATE(172)] = 4303,
  [SMALL_STATE(173)] = 4310,
  [SMALL_STATE(174)] = 4317,
  [SMALL_STATE(175)] = 4324,
  [SMALL_STATE(176)] = 4331,
  [SMALL_STATE(177)] = 4338,
  [SMALL_STATE(178)] = 4345,
  [SMALL_STATE(179)] = 4352,
  [SMALL_STATE(180)] = 4359,
  [SMALL_STATE(181)] = 4366,
  [SMALL_STATE(182)] = 4373,
  [SMALL_STATE(183)] = 4380,
  [SMALL_STATE(184)] = 4387,
  [SMALL_STATE(185)] = 4394,
  [SMALL_STATE(186)] = 4401,
  [SMALL_STATE(187)] = 4408,
  [SMALL_STATE(188)] = 4415,
  [SMALL_STATE(189)] = 4422,
  [SMALL_STATE(190)] = 4429,
  [SMALL_STATE(191)] = 4436,
  [SMALL_STATE(192)] = 4443,
  [SMALL_STATE(193)] = 4450,
  [SMALL_STATE(194)] = 4457,
  [SMALL_STATE(195)] = 4464,
  [SMALL_STATE(196)] = 4471,
  [SMALL_STATE(197)] = 4478,
  [SMALL_STATE(198)] = 4485,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(143),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(172),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(144),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(129),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(95),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 18),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 18),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 14),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 14),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 20),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 20),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 19),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 19),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 3, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 3, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 3, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4, .production_id = 13),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 3, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 3, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4, .production_id = 12),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4, .production_id = 12),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 10),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 10),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(36),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 15),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 15),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_member_list_repeat1, 2), SHIFT_REPEAT(172),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_member_list_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_member_list_repeat1, 2), SHIFT_REPEAT(104),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_member_list_repeat1, 2), SHIFT_REPEAT(60),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(129),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_string, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_bytes_string, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_bytes_string, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2), SHIFT_REPEAT(117),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 28),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 31),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 31),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 27),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 27),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 4, .production_id = 25),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 4, .production_id = 25),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 8, .production_id = 33),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 8, .production_id = 33),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 23),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 23),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 3, .production_id = 22),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 3, .production_id = 22),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 32),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 32),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 29),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 29),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 26),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 26),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 30),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 30),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(66),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(53),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(119),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(119),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 16),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_var_repeat1, 2),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_var_repeat1, 2), SHIFT_REPEAT(137),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(48),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 21),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2, .production_id = 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 17),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_list, 5, .production_id = 24),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_list, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_list, 6, .production_id = 24),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_list, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [643] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
