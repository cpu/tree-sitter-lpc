#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 215
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 38

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
  anon_sym_inherit = 13,
  anon_sym_virtual = 14,
  anon_sym_function = 15,
  anon_sym_DOT_DOT_DOT = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_DOT = 18,
  anon_sym_QMARK = 19,
  anon_sym_COLON = 20,
  anon_sym_STAR_EQ = 21,
  anon_sym_SLASH_EQ = 22,
  anon_sym_PERCENT_EQ = 23,
  anon_sym_PLUS_EQ = 24,
  anon_sym_DASH_EQ = 25,
  anon_sym_LT_LT_EQ = 26,
  anon_sym_GT_GT_EQ = 27,
  anon_sym_GT_GT_GT_EQ = 28,
  anon_sym_AMP_EQ = 29,
  anon_sym_AMP_AMP_EQ = 30,
  anon_sym_CARET_EQ = 31,
  anon_sym_PIPE_EQ = 32,
  anon_sym_PIPE_PIPE_EQ = 33,
  anon_sym_SQUOTE = 34,
  aux_sym_char_literal_token1 = 35,
  anon_sym_DQUOTE = 36,
  aux_sym_string_literal_token1 = 37,
  anon_sym_b_DQUOTE = 38,
  sym_escape_sequence = 39,
  sym_number_literal = 40,
  anon_sym_STAR = 41,
  anon_sym_return = 42,
  anon_sym_nomask = 43,
  anon_sym_static = 44,
  anon_sym_private = 45,
  anon_sym_public = 46,
  anon_sym_protected = 47,
  anon_sym_nosave = 48,
  anon_sym_deprecated = 49,
  anon_sym_visible = 50,
  anon_sym_PIPE = 51,
  anon_sym_status = 52,
  anon_sym_int = 53,
  anon_sym_bytes = 54,
  anon_sym_string = 55,
  anon_sym_closure = 56,
  anon_sym_coroutine = 57,
  anon_sym_symbol = 58,
  anon_sym_float = 59,
  anon_sym_mapping = 60,
  anon_sym_mixed = 61,
  anon_sym_object = 62,
  anon_sym_lwobject = 63,
  anon_sym_LT = 64,
  anon_sym_GT = 65,
  sym_comment = 66,
  sym_source_file = 67,
  sym__definition = 68,
  sym_function_definition = 69,
  sym_parameter_list = 70,
  sym_parameter = 71,
  sym_opt_default_value = 72,
  sym_struct_definition = 73,
  sym_struct_member_list = 74,
  sym_struct_member = 75,
  sym_inheritance = 76,
  sym_inheritance_modifier = 77,
  sym__expression = 78,
  sym_inline_func = 79,
  sym_function_call = 80,
  sym_member_operator = 81,
  sym__call_other_name = 82,
  sym_conditional_expression = 83,
  sym_assignment_operator = 84,
  sym_assignment_expression = 85,
  sym_char_literal = 86,
  sym_concatenated_string = 87,
  sym_string_literal = 88,
  sym_concatenated_bytes_string = 89,
  sym_bytes_literal = 90,
  sym__lvalue = 91,
  sym__function_body = 92,
  sym_block = 93,
  sym__statement = 94,
  sym__comma_expr = 95,
  sym_global_var = 96,
  sym_local_var = 97,
  sym_return_statement = 98,
  sym_type_modifier = 99,
  sym__basic_type = 100,
  sym_non_void_type = 101,
  sym__single_non_void_type = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym_function_definition_repeat1 = 104,
  aux_sym_parameter_list_repeat1 = 105,
  aux_sym_struct_member_list_repeat1 = 106,
  aux_sym_inheritance_repeat1 = 107,
  aux_sym_function_call_repeat1 = 108,
  aux_sym_concatenated_string_repeat1 = 109,
  aux_sym_string_literal_repeat1 = 110,
  aux_sym_concatenated_bytes_string_repeat1 = 111,
  aux_sym_block_repeat1 = 112,
  aux_sym_global_var_repeat1 = 113,
  aux_sym_non_void_type_repeat1 = 114,
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
  [anon_sym_inherit] = "inherit",
  [anon_sym_virtual] = "virtual",
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
  [sym_inheritance] = "inheritance",
  [sym_inheritance_modifier] = "inheritance_modifier",
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
  [aux_sym_inheritance_repeat1] = "inheritance_repeat1",
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
  [anon_sym_inherit] = anon_sym_inherit,
  [anon_sym_virtual] = anon_sym_virtual,
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
  [sym_inheritance] = sym_inheritance,
  [sym_inheritance_modifier] = sym_inheritance_modifier,
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
  [aux_sym_inheritance_repeat1] = aux_sym_inheritance_repeat1,
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
  [anon_sym_inherit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
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
  [sym_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_inheritance_modifier] = {
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
  [aux_sym_inheritance_repeat1] = {
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
  field_inherit_path = 13,
  field_inheritance_modifiers = 14,
  field_left = 15,
  field_modifiers = 16,
  field_name = 17,
  field_operator = 18,
  field_right = 19,
  field_target = 20,
  field_type = 21,
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
  [field_inherit_path] = "inherit_path",
  [field_inheritance_modifiers] = "inheritance_modifiers",
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
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 4},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 4},
  [10] = {.index = 20, .length = 3},
  [11] = {.index = 23, .length = 2},
  [12] = {.index = 25, .length = 2},
  [13] = {.index = 27, .length = 4},
  [14] = {.index = 31, .length = 3},
  [15] = {.index = 34, .length = 2},
  [16] = {.index = 36, .length = 2},
  [17] = {.index = 38, .length = 5},
  [18] = {.index = 43, .length = 5},
  [19] = {.index = 48, .length = 2},
  [20] = {.index = 50, .length = 3},
  [21] = {.index = 53, .length = 3},
  [22] = {.index = 56, .length = 5},
  [23] = {.index = 61, .length = 3},
  [24] = {.index = 64, .length = 6},
  [25] = {.index = 70, .length = 3},
  [26] = {.index = 73, .length = 2},
  [27] = {.index = 75, .length = 3},
  [28] = {.index = 78, .length = 3},
  [29] = {.index = 81, .length = 3},
  [30] = {.index = 84, .length = 4},
  [31] = {.index = 88, .length = 5},
  [32] = {.index = 93, .length = 3},
  [33] = {.index = 96, .length = 4},
  [34] = {.index = 100, .length = 6},
  [35] = {.index = 106, .length = 5},
  [36] = {.index = 111, .length = 6},
  [37] = {.index = 117, .length = 7},
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
    {field_inherit_path, 1},
  [5] =
    {field_arguments, 1},
    {field_body, 2},
    {field_name, 0},
  [8] =
    {field_arguments, 2},
    {field_async, 0},
    {field_body, 3},
    {field_name, 1},
  [12] =
    {field_definition, 2},
    {field_name, 1},
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
    {field_modifiers, 0},
    {field_name, 2},
  [25] =
    {field_inherit_path, 2},
    {field_modifiers, 0},
  [27] =
    {field_arguments, 2},
    {field_body, 3},
    {field_modifiers, 0},
    {field_name, 1},
  [31] =
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [34] =
    {field_modifiers, 0},
    {field_type, 1},
  [36] =
    {field_inherit_path, 2},
    {field_inheritance_modifiers, 0},
  [38] =
    {field_arguments, 3},
    {field_async, 0},
    {field_body, 4},
    {field_name, 2},
    {field_type, 1},
  [43] =
    {field_arguments, 3},
    {field_async, 0},
    {field_body, 4},
    {field_modifiers, 1},
    {field_name, 2},
  [48] =
    {field_arg_name, 2},
    {field_arg_type, 1},
  [50] =
    {field_arg_default, 2},
    {field_arg_name, 1},
    {field_arg_type, 0},
  [53] =
    {field_definition, 3},
    {field_modifiers, 0},
    {field_name, 2},
  [56] =
    {field_arguments, 3},
    {field_body, 4},
    {field_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [61] =
    {field_inherit_path, 3},
    {field_inheritance_modifiers, 0},
    {field_modifiers, 1},
  [64] =
    {field_arguments, 4},
    {field_async, 0},
    {field_body, 5},
    {field_modifiers, 1},
    {field_name, 3},
    {field_type, 2},
  [70] =
    {field_arg_default, 3},
    {field_arg_name, 2},
    {field_arg_type, 1},
  [73] =
    {field_arguments, 1},
    {field_body, 2},
  [75] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_function, 0},
  [78] =
    {field_base_struct, 0},
    {field_base_struct, 1},
    {field_base_struct, 2},
  [81] =
    {field_arguments, 2},
    {field_body, 3},
    {field_type, 1},
  [84] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [88] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 0},
  [93] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [96] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_function, 2},
    {field_target, 0},
  [100] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 0},
  [106] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_function, 2},
    {field_target, 0},
  [111] =
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
    {field_arguments, 6},
    {field_function, 2},
    {field_target, 0},
  [117] =
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
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'j') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'j') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_nomask);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_nosave);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_closure);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_visible);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_lwobject);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_coroutine);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 158:
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 45},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 45},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 0},
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
  [96] = {.lex_state = 45},
  [97] = {.lex_state = 45},
  [98] = {.lex_state = 45},
  [99] = {.lex_state = 45},
  [100] = {.lex_state = 45},
  [101] = {.lex_state = 45},
  [102] = {.lex_state = 45},
  [103] = {.lex_state = 45},
  [104] = {.lex_state = 45},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 45},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 45},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 45},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 5},
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
  [150] = {.lex_state = 8},
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
  [167] = {.lex_state = 7},
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
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
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
    [anon_sym_inherit] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
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
    [sym_source_file] = STATE(187),
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_struct_definition] = STATE(8),
    [sym_inheritance] = STATE(8),
    [sym_inheritance_modifier] = STATE(73),
    [sym_global_var] = STATE(8),
    [sym_local_var] = STATE(214),
    [sym_type_modifier] = STATE(11),
    [sym__basic_type] = STATE(145),
    [sym_non_void_type] = STATE(145),
    [sym__single_non_void_type] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(11),
    [aux_sym_inheritance_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_varargs] = ACTIONS(13),
    [anon_sym_struct] = ACTIONS(15),
    [anon_sym_inherit] = ACTIONS(17),
    [anon_sym_virtual] = ACTIONS(19),
    [anon_sym_nomask] = ACTIONS(13),
    [anon_sym_static] = ACTIONS(13),
    [anon_sym_private] = ACTIONS(13),
    [anon_sym_public] = ACTIONS(13),
    [anon_sym_protected] = ACTIONS(13),
    [anon_sym_nosave] = ACTIONS(13),
    [anon_sym_deprecated] = ACTIONS(13),
    [anon_sym_visible] = ACTIONS(13),
    [anon_sym_status] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_bytes] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_closure] = ACTIONS(21),
    [anon_sym_coroutine] = ACTIONS(21),
    [anon_sym_symbol] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_mapping] = ACTIONS(21),
    [anon_sym_mixed] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(21),
    [anon_sym_lwobject] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_void,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(45), 1,
      sym_number_literal,
    ACTIONS(47), 1,
      anon_sym_return,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(169), 1,
      sym_local_var,
    STATE(149), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(194), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(4), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(103), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(21), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
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
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_void,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(45), 1,
      sym_number_literal,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(169), 1,
      sym_local_var,
    STATE(149), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(194), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(2), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(103), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(21), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
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
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(169), 1,
      sym_local_var,
    STATE(149), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(194), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(4), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(103), 8,
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
  [285] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_void,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(45), 1,
      sym_number_literal,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(169), 1,
      sym_local_var,
    STATE(149), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(194), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(4), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(103), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(21), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
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
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_void,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(45), 1,
      sym_number_literal,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(169), 1,
      sym_local_var,
    STATE(149), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(194), 2,
      sym__comma_expr,
      sym_return_statement,
    STATE(5), 3,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(103), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
    ACTIONS(21), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [475] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_async,
    ACTIONS(108), 1,
      anon_sym_void,
    ACTIONS(114), 1,
      anon_sym_struct,
    ACTIONS(117), 1,
      anon_sym_inherit,
    ACTIONS(120), 1,
      anon_sym_virtual,
    ACTIONS(126), 1,
      anon_sym_LT,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(214), 1,
      sym_local_var,
    STATE(11), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(73), 2,
      sym_inheritance_modifier,
      aux_sym_inheritance_repeat1,
    STATE(145), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 6,
      sym__definition,
      sym_function_definition,
      sym_struct_definition,
      sym_inheritance,
      sym_global_var,
      aux_sym_source_file_repeat1,
    ACTIONS(111), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(123), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [554] = 17,
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
    ACTIONS(17), 1,
      anon_sym_inherit,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(214), 1,
      sym_local_var,
    STATE(11), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(73), 2,
      sym_inheritance_modifier,
      aux_sym_inheritance_repeat1,
    STATE(145), 2,
      sym__basic_type,
      sym_non_void_type,
    STATE(7), 6,
      sym__definition,
      sym_function_definition,
      sym_struct_definition,
      sym_inheritance,
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
    ACTIONS(21), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 10,
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
    ACTIONS(133), 28,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 10,
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
    ACTIONS(137), 28,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [725] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_void,
    ACTIONS(143), 1,
      anon_sym_struct,
    ACTIONS(145), 1,
      anon_sym_inherit,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(36), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(151), 2,
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
    ACTIONS(21), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [780] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_void,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(13), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(178), 2,
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
    ACTIONS(21), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [832] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_void,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(36), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    STATE(189), 2,
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
    ACTIONS(21), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(157), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(161), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(165), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(169), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(173), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(177), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(181), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(185), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(189), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(193), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(197), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(201), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(205), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(209), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(213), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(217), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(221), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(225), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(229), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(233), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(237), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(241), 27,
      anon_sym_async,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_virtual,
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
  [1698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LT,
    STATE(36), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(245), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(243), 16,
      anon_sym_void,
      anon_sym_struct,
      anon_sym_inherit,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
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
  [1738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LT,
    ACTIONS(250), 25,
      anon_sym_void,
      anon_sym_varargs,
      anon_sym_struct,
      anon_sym_inherit,
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
  [1772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_LT,
    ACTIONS(254), 17,
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
  [1805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_LT,
    ACTIONS(137), 17,
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
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
      anon_sym_LT,
    ACTIONS(133), 17,
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
  [1871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(258), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(260), 14,
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
  [1904] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(264), 1,
      anon_sym_void,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      anon_sym_varargs,
    ACTIONS(270), 1,
      anon_sym_struct,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(144), 1,
      sym_parameter,
    STATE(191), 1,
      sym_non_void_type,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [1946] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_struct,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_void,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(135), 1,
      sym_parameter_list,
    STATE(172), 2,
      sym__basic_type,
      sym_non_void_type,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [1986] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_struct,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(202), 1,
      sym_non_void_type,
    STATE(46), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2023] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_struct,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 1,
      anon_sym_LT,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(202), 1,
      sym_non_void_type,
    STATE(45), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(285), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2060] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_struct,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(202), 1,
      sym_non_void_type,
    STATE(45), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2097] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(45), 1,
      sym_number_literal,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(198), 1,
      sym__comma_expr,
    STATE(103), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2144] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(299), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(102), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2191] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_struct,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(202), 1,
      sym_non_void_type,
    STATE(45), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2228] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(307), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(98), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2275] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_struct,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(202), 1,
      sym_non_void_type,
    STATE(49), 2,
      sym_struct_member,
      aux_sym_struct_member_list_repeat1,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2312] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(268), 1,
      anon_sym_varargs,
    ACTIONS(270), 1,
      anon_sym_struct,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(171), 1,
      sym_parameter,
    STATE(191), 1,
      sym_non_void_type,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      sym_parameter_list,
    ACTIONS(260), 14,
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
  [2380] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(315), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(109), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2421] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(317), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(106), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2462] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(319), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
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
  [2503] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(321), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(101), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2544] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(323), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
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
  [2585] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(325), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(104), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym_parameter_list,
    ACTIONS(260), 14,
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
  [2655] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(329), 1,
      sym_number_literal,
    STATE(72), 1,
      sym__lvalue,
    STATE(77), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_bytes_literal,
    STATE(112), 8,
      sym__expression,
      sym_inline_func,
      sym_function_call,
      sym_conditional_expression,
      sym_assignment_expression,
      sym_char_literal,
      sym_concatenated_string,
      sym_concatenated_bytes_string,
  [2696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(260), 14,
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
  [2720] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_struct,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(177), 1,
      sym_non_void_type,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_struct,
    STATE(108), 1,
      sym__single_non_void_type,
    STATE(200), 1,
      sym_non_void_type,
    ACTIONS(272), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(260), 14,
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
  [2804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(260), 14,
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
  [2830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(260), 14,
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
  [2856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(260), 14,
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
  [2880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_struct,
    STATE(120), 1,
      sym__single_non_void_type,
    ACTIONS(339), 12,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
      anon_sym_string,
      anon_sym_closure,
      anon_sym_coroutine,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_mapping,
      anon_sym_mixed,
      anon_sym_object,
      anon_sym_lwobject,
  [2907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_assignment_operator,
    ACTIONS(341), 14,
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
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 15,
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
  [2951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym_assignment_operator,
    ACTIONS(341), 14,
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
  [2974] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_inherit,
    ACTIONS(349), 1,
      anon_sym_virtual,
    STATE(74), 2,
      sym_inheritance_modifier,
      aux_sym_inheritance_repeat1,
    STATE(80), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(345), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
  [3003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_virtual,
    STATE(74), 2,
      sym_inheritance_modifier,
      aux_sym_inheritance_repeat1,
    ACTIONS(351), 10,
      anon_sym_varargs,
      anon_sym_inherit,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
  [3026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(356), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_DOT,
    ACTIONS(367), 1,
      anon_sym_b_DQUOTE,
    STATE(76), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(363), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3074] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_DOT,
    STATE(81), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(258), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_DOT,
    STATE(79), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(258), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_b_DQUOTE,
    ACTIONS(372), 1,
      anon_sym_DOT,
    STATE(76), 2,
      sym_bytes_literal,
      aux_sym_concatenated_bytes_string_repeat1,
    ACTIONS(370), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_inherit,
    STATE(36), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(345), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
  [3168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      anon_sym_DOT,
    STATE(75), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
    ACTIONS(376), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 11,
      anon_sym_varargs,
      anon_sym_inherit,
      anon_sym_virtual,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
  [3209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(382), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_DOT,
    ACTIONS(386), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [3245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(390), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(394), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_b_DQUOTE,
  [3281] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_DASH_GT,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    STATE(111), 1,
      sym_member_operator,
    ACTIONS(400), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COLON,
  [3307] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_DASH_GT,
    ACTIONS(404), 1,
      anon_sym_DOT,
    STATE(111), 1,
      sym_member_operator,
    ACTIONS(408), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(410), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(414), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    ACTIONS(418), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(422), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(426), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DOT,
    ACTIONS(430), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DOT,
    ACTIONS(434), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(438), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(442), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3484] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_DASH_GT,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(450), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(111), 1,
      sym_member_operator,
    STATE(130), 1,
      aux_sym_function_call_repeat1,
  [3515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_DOT,
    ACTIONS(452), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(456), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3549] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_DASH_GT,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    STATE(111), 1,
      sym_member_operator,
    ACTIONS(460), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
  [3574] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_DASH_GT,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(111), 1,
      sym_member_operator,
    STATE(137), 1,
      aux_sym_function_call_repeat1,
  [3605] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_member_operator,
    STATE(146), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(402), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3631] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    STATE(111), 1,
      sym_member_operator,
    ACTIONS(402), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_struct_member_list,
    ACTIONS(470), 3,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_identifier,
  [3673] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    STATE(111), 1,
      sym_member_operator,
    ACTIONS(402), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3694] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      sym_struct_member_list,
    ACTIONS(470), 3,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_identifier,
  [3715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_STAR,
    ACTIONS(484), 1,
      anon_sym_PIPE,
    STATE(116), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(480), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3733] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    ACTIONS(486), 1,
      anon_sym_COLON,
    STATE(111), 1,
      sym_member_operator,
    ACTIONS(402), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_function,
      sym_identifier,
    ACTIONS(490), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_b_DQUOTE,
      sym_number_literal,
  [3767] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_string_literal,
    STATE(179), 2,
      sym__call_other_name,
      sym_concatenated_string,
  [3787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_QMARK,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_member_operator,
    ACTIONS(402), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    STATE(113), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(498), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_STAR,
    STATE(70), 1,
      sym__lvalue,
    STATE(150), 1,
      aux_sym_global_var_repeat1,
    STATE(170), 1,
      sym_assignment_expression,
  [3841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(509), 1,
      anon_sym_STAR,
    STATE(70), 1,
      sym__lvalue,
    STATE(122), 1,
      aux_sym_global_var_repeat1,
    STATE(174), 1,
      sym_assignment_expression,
  [3860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_PIPE,
    STATE(113), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(511), 3,
      anon_sym_LPAREN,
      anon_sym_GT,
      sym_identifier,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(460), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
  [3912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_STAR,
    ACTIONS(498), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [3925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_STAR,
    STATE(70), 1,
      sym__lvalue,
    STATE(114), 1,
      aux_sym_global_var_repeat1,
    STATE(175), 1,
      sym_assignment_expression,
  [3944] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(70), 1,
      sym__lvalue,
    STATE(150), 1,
      aux_sym_global_var_repeat1,
    STATE(168), 1,
      sym_assignment_expression,
  [3963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(29), 2,
      sym__function_body,
      sym_block,
  [3977] = 5,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 1,
      aux_sym_string_literal_token1,
    ACTIONS(532), 1,
      sym_escape_sequence,
    ACTIONS(534), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_string_literal_repeat1,
  [3993] = 5,
    ACTIONS(534), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 1,
      aux_sym_string_literal_token1,
    ACTIONS(540), 1,
      sym_escape_sequence,
    STATE(138), 1,
      aux_sym_string_literal_repeat1,
  [4009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    STATE(20), 2,
      sym__function_body,
      sym_block,
  [4023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    STATE(14), 2,
      sym__function_body,
      sym_block,
  [4037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(546), 1,
      anon_sym_SEMI,
    STATE(34), 2,
      sym__function_body,
      sym_block,
  [4051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_opt_default_value,
    ACTIONS(548), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
  [4081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(81), 2,
      sym_string_literal,
      aux_sym_concatenated_string_repeat1,
  [4095] = 5,
    ACTIONS(534), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    ACTIONS(560), 1,
      aux_sym_string_literal_token1,
    ACTIONS(562), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym_string_literal_repeat1,
  [4111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(564), 1,
      anon_sym_SEMI,
    STATE(24), 2,
      sym__function_body,
      sym_block,
  [4125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_EQ,
    STATE(173), 1,
      sym_opt_default_value,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    STATE(95), 2,
      sym__function_body,
      sym_block,
  [4153] = 5,
    ACTIONS(534), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_literal_token1,
    ACTIONS(575), 1,
      sym_escape_sequence,
    STATE(136), 1,
      aux_sym_string_literal_repeat1,
  [4169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
  [4185] = 5,
    ACTIONS(530), 1,
      aux_sym_string_literal_token1,
    ACTIONS(532), 1,
      sym_escape_sequence,
    ACTIONS(534), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_string_literal_repeat1,
  [4201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(584), 1,
      anon_sym_SEMI,
    STATE(91), 2,
      sym__function_body,
      sym_block,
  [4215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    STATE(33), 2,
      sym__function_body,
      sym_block,
  [4229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(31), 2,
      sym__function_body,
      sym_block,
  [4243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(28), 2,
      sym__function_body,
      sym_block,
  [4257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_parameter_list_repeat1,
  [4270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_parameter_list_repeat1,
  [4283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_identifier,
    STATE(70), 1,
      sym__lvalue,
    STATE(153), 1,
      sym_assignment_expression,
  [4296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
  [4309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_parameter_list_repeat1,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
  [4331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_identifier,
    STATE(70), 1,
      sym__lvalue,
    STATE(155), 1,
      sym_assignment_expression,
  [4344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_identifier,
    ACTIONS(613), 1,
      anon_sym_STAR,
    STATE(150), 1,
      aux_sym_global_var_repeat1,
  [4357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(70), 1,
      sym__lvalue,
    STATE(190), 1,
      sym_assignment_expression,
  [4370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_parameter_list,
  [4380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_SEMI,
  [4390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_parameter_list,
  [4400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_string_literal,
  [4418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_string_literal,
  [4428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_parameter_list,
  [4438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_string_literal,
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_string_literal,
  [4458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_parameter_list,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_parameter_list,
  [4486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_parameter_list,
  [4512] = 2,
    ACTIONS(534), 1,
      sym_comment,
    ACTIONS(628), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [4520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      anon_sym_SEMI,
  [4538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [4548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_parameter_list,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_GT,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_identifier,
  [4614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_SEMI,
  [4628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_SEMI,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_SEMI,
  [4642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
  [4649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
  [4656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_SEMI,
  [4663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [4670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
  [4677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SEMI,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym_identifier,
  [4691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_SEMI,
  [4698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym_identifier,
  [4705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
  [4719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SEMI,
  [4726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
  [4733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_SQUOTE,
  [4740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SEMI,
  [4754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
  [4761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_identifier,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_SEMI,
  [4775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_identifier,
  [4782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [4789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
  [4803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
  [4810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [4817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_SEMI,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_identifier,
  [4831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
  [4838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_identifier,
  [4845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_SEMI,
  [4852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_identifier,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 285,
  [SMALL_STATE(6)] = 380,
  [SMALL_STATE(7)] = 475,
  [SMALL_STATE(8)] = 554,
  [SMALL_STATE(9)] = 633,
  [SMALL_STATE(10)] = 679,
  [SMALL_STATE(11)] = 725,
  [SMALL_STATE(12)] = 780,
  [SMALL_STATE(13)] = 832,
  [SMALL_STATE(14)] = 884,
  [SMALL_STATE(15)] = 921,
  [SMALL_STATE(16)] = 958,
  [SMALL_STATE(17)] = 995,
  [SMALL_STATE(18)] = 1032,
  [SMALL_STATE(19)] = 1069,
  [SMALL_STATE(20)] = 1106,
  [SMALL_STATE(21)] = 1143,
  [SMALL_STATE(22)] = 1180,
  [SMALL_STATE(23)] = 1217,
  [SMALL_STATE(24)] = 1254,
  [SMALL_STATE(25)] = 1291,
  [SMALL_STATE(26)] = 1328,
  [SMALL_STATE(27)] = 1365,
  [SMALL_STATE(28)] = 1402,
  [SMALL_STATE(29)] = 1439,
  [SMALL_STATE(30)] = 1476,
  [SMALL_STATE(31)] = 1513,
  [SMALL_STATE(32)] = 1550,
  [SMALL_STATE(33)] = 1587,
  [SMALL_STATE(34)] = 1624,
  [SMALL_STATE(35)] = 1661,
  [SMALL_STATE(36)] = 1698,
  [SMALL_STATE(37)] = 1738,
  [SMALL_STATE(38)] = 1772,
  [SMALL_STATE(39)] = 1805,
  [SMALL_STATE(40)] = 1838,
  [SMALL_STATE(41)] = 1871,
  [SMALL_STATE(42)] = 1904,
  [SMALL_STATE(43)] = 1946,
  [SMALL_STATE(44)] = 1986,
  [SMALL_STATE(45)] = 2023,
  [SMALL_STATE(46)] = 2060,
  [SMALL_STATE(47)] = 2097,
  [SMALL_STATE(48)] = 2144,
  [SMALL_STATE(49)] = 2191,
  [SMALL_STATE(50)] = 2228,
  [SMALL_STATE(51)] = 2275,
  [SMALL_STATE(52)] = 2312,
  [SMALL_STATE(53)] = 2348,
  [SMALL_STATE(54)] = 2380,
  [SMALL_STATE(55)] = 2421,
  [SMALL_STATE(56)] = 2462,
  [SMALL_STATE(57)] = 2503,
  [SMALL_STATE(58)] = 2544,
  [SMALL_STATE(59)] = 2585,
  [SMALL_STATE(60)] = 2626,
  [SMALL_STATE(61)] = 2655,
  [SMALL_STATE(62)] = 2696,
  [SMALL_STATE(63)] = 2720,
  [SMALL_STATE(64)] = 2750,
  [SMALL_STATE(65)] = 2780,
  [SMALL_STATE(66)] = 2804,
  [SMALL_STATE(67)] = 2830,
  [SMALL_STATE(68)] = 2856,
  [SMALL_STATE(69)] = 2880,
  [SMALL_STATE(70)] = 2907,
  [SMALL_STATE(71)] = 2930,
  [SMALL_STATE(72)] = 2951,
  [SMALL_STATE(73)] = 2974,
  [SMALL_STATE(74)] = 3003,
  [SMALL_STATE(75)] = 3026,
  [SMALL_STATE(76)] = 3050,
  [SMALL_STATE(77)] = 3074,
  [SMALL_STATE(78)] = 3098,
  [SMALL_STATE(79)] = 3122,
  [SMALL_STATE(80)] = 3146,
  [SMALL_STATE(81)] = 3168,
  [SMALL_STATE(82)] = 3192,
  [SMALL_STATE(83)] = 3209,
  [SMALL_STATE(84)] = 3227,
  [SMALL_STATE(85)] = 3245,
  [SMALL_STATE(86)] = 3263,
  [SMALL_STATE(87)] = 3281,
  [SMALL_STATE(88)] = 3307,
  [SMALL_STATE(89)] = 3331,
  [SMALL_STATE(90)] = 3348,
  [SMALL_STATE(91)] = 3365,
  [SMALL_STATE(92)] = 3382,
  [SMALL_STATE(93)] = 3399,
  [SMALL_STATE(94)] = 3416,
  [SMALL_STATE(95)] = 3433,
  [SMALL_STATE(96)] = 3450,
  [SMALL_STATE(97)] = 3467,
  [SMALL_STATE(98)] = 3484,
  [SMALL_STATE(99)] = 3515,
  [SMALL_STATE(100)] = 3532,
  [SMALL_STATE(101)] = 3549,
  [SMALL_STATE(102)] = 3574,
  [SMALL_STATE(103)] = 3605,
  [SMALL_STATE(104)] = 3631,
  [SMALL_STATE(105)] = 3652,
  [SMALL_STATE(106)] = 3673,
  [SMALL_STATE(107)] = 3694,
  [SMALL_STATE(108)] = 3715,
  [SMALL_STATE(109)] = 3733,
  [SMALL_STATE(110)] = 3753,
  [SMALL_STATE(111)] = 3767,
  [SMALL_STATE(112)] = 3787,
  [SMALL_STATE(113)] = 3807,
  [SMALL_STATE(114)] = 3822,
  [SMALL_STATE(115)] = 3841,
  [SMALL_STATE(116)] = 3860,
  [SMALL_STATE(117)] = 3875,
  [SMALL_STATE(118)] = 3886,
  [SMALL_STATE(119)] = 3897,
  [SMALL_STATE(120)] = 3912,
  [SMALL_STATE(121)] = 3925,
  [SMALL_STATE(122)] = 3944,
  [SMALL_STATE(123)] = 3963,
  [SMALL_STATE(124)] = 3977,
  [SMALL_STATE(125)] = 3993,
  [SMALL_STATE(126)] = 4009,
  [SMALL_STATE(127)] = 4023,
  [SMALL_STATE(128)] = 4037,
  [SMALL_STATE(129)] = 4051,
  [SMALL_STATE(130)] = 4065,
  [SMALL_STATE(131)] = 4081,
  [SMALL_STATE(132)] = 4095,
  [SMALL_STATE(133)] = 4111,
  [SMALL_STATE(134)] = 4125,
  [SMALL_STATE(135)] = 4139,
  [SMALL_STATE(136)] = 4153,
  [SMALL_STATE(137)] = 4169,
  [SMALL_STATE(138)] = 4185,
  [SMALL_STATE(139)] = 4201,
  [SMALL_STATE(140)] = 4215,
  [SMALL_STATE(141)] = 4229,
  [SMALL_STATE(142)] = 4243,
  [SMALL_STATE(143)] = 4257,
  [SMALL_STATE(144)] = 4270,
  [SMALL_STATE(145)] = 4283,
  [SMALL_STATE(146)] = 4296,
  [SMALL_STATE(147)] = 4309,
  [SMALL_STATE(148)] = 4322,
  [SMALL_STATE(149)] = 4331,
  [SMALL_STATE(150)] = 4344,
  [SMALL_STATE(151)] = 4357,
  [SMALL_STATE(152)] = 4370,
  [SMALL_STATE(153)] = 4380,
  [SMALL_STATE(154)] = 4390,
  [SMALL_STATE(155)] = 4400,
  [SMALL_STATE(156)] = 4408,
  [SMALL_STATE(157)] = 4418,
  [SMALL_STATE(158)] = 4428,
  [SMALL_STATE(159)] = 4438,
  [SMALL_STATE(160)] = 4448,
  [SMALL_STATE(161)] = 4458,
  [SMALL_STATE(162)] = 4468,
  [SMALL_STATE(163)] = 4476,
  [SMALL_STATE(164)] = 4486,
  [SMALL_STATE(165)] = 4494,
  [SMALL_STATE(166)] = 4502,
  [SMALL_STATE(167)] = 4512,
  [SMALL_STATE(168)] = 4520,
  [SMALL_STATE(169)] = 4528,
  [SMALL_STATE(170)] = 4538,
  [SMALL_STATE(171)] = 4548,
  [SMALL_STATE(172)] = 4556,
  [SMALL_STATE(173)] = 4566,
  [SMALL_STATE(174)] = 4574,
  [SMALL_STATE(175)] = 4582,
  [SMALL_STATE(176)] = 4592,
  [SMALL_STATE(177)] = 4600,
  [SMALL_STATE(178)] = 4607,
  [SMALL_STATE(179)] = 4614,
  [SMALL_STATE(180)] = 4621,
  [SMALL_STATE(181)] = 4628,
  [SMALL_STATE(182)] = 4635,
  [SMALL_STATE(183)] = 4642,
  [SMALL_STATE(184)] = 4649,
  [SMALL_STATE(185)] = 4656,
  [SMALL_STATE(186)] = 4663,
  [SMALL_STATE(187)] = 4670,
  [SMALL_STATE(188)] = 4677,
  [SMALL_STATE(189)] = 4684,
  [SMALL_STATE(190)] = 4691,
  [SMALL_STATE(191)] = 4698,
  [SMALL_STATE(192)] = 4705,
  [SMALL_STATE(193)] = 4712,
  [SMALL_STATE(194)] = 4719,
  [SMALL_STATE(195)] = 4726,
  [SMALL_STATE(196)] = 4733,
  [SMALL_STATE(197)] = 4740,
  [SMALL_STATE(198)] = 4747,
  [SMALL_STATE(199)] = 4754,
  [SMALL_STATE(200)] = 4761,
  [SMALL_STATE(201)] = 4768,
  [SMALL_STATE(202)] = 4775,
  [SMALL_STATE(203)] = 4782,
  [SMALL_STATE(204)] = 4789,
  [SMALL_STATE(205)] = 4796,
  [SMALL_STATE(206)] = 4803,
  [SMALL_STATE(207)] = 4810,
  [SMALL_STATE(208)] = 4817,
  [SMALL_STATE(209)] = 4824,
  [SMALL_STATE(210)] = 4831,
  [SMALL_STATE(211)] = 4838,
  [SMALL_STATE(212)] = 4845,
  [SMALL_STATE(213)] = 4852,
  [SMALL_STATE(214)] = 4859,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(41),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(149),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(209),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(167),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(132),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(108),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(63),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 24),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 24),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance, 4, .production_id = 16),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance, 4, .production_id = 16),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 7),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 7),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 3, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 9),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 9),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance, 4, .production_id = 12),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance, 4, .production_id = 12),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 21),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 21),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 11),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 11),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance, 5, .production_id = 23),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance, 5, .production_id = 23),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4, .production_id = 14),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4, .production_id = 14),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 4, .production_id = 15),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 4, .production_id = 15),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 22),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 22),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 13),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 13),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 3, .production_id = 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 3, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_var, 3, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_var, 3, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 18),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 18),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance, 3, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inheritance, 3, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(37),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_member_list_repeat1, 2), SHIFT_REPEAT(209),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_member_list_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_member_list_repeat1, 2), SHIFT_REPEAT(108),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_member_list_repeat1, 2), SHIFT_REPEAT(63),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inheritance_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inheritance_repeat1, 2), SHIFT_REPEAT(82),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_string_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_string_repeat1, 2), SHIFT_REPEAT(132),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenated_bytes_string_repeat1, 2), SHIFT_REPEAT(125),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_bytes_string, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_bytes_string, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenated_string, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenated_string, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_modifier, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_literal, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_literal, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 32),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 10),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 34),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 34),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 4, .production_id = 29),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 4, .production_id = 29),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 31),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 31),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 33),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 33),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 8, .production_id = 37),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 8, .production_id = 37),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func, 3, .production_id = 26),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func, 3, .production_id = 26),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 27),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 27),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 36),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 36),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 35),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 35),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 30),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 30),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(69),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_non_void_type, 3),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(57),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 19),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(136),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(136),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(52),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_expr, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_operator, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_var_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_var_repeat1, 2), SHIFT_REPEAT(150),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 25),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 20),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_list, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_list, 5, .production_id = 28),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [656] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_list, 6, .production_id = 28),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_other_name, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_list, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
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
