#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_varargs = 5,
  anon_sym_EQ = 6,
  anon_sym_SEMI = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_return = 10,
  anon_sym_nomask = 11,
  anon_sym_static = 12,
  anon_sym_private = 13,
  anon_sym_public = 14,
  anon_sym_protected = 15,
  anon_sym_nosave = 16,
  anon_sym_deprecated = 17,
  anon_sym_visible = 18,
  anon_sym_void = 19,
  anon_sym_PIPE = 20,
  anon_sym_status = 21,
  anon_sym_int = 22,
  anon_sym_bytes = 23,
  anon_sym_string = 24,
  anon_sym_closure = 25,
  anon_sym_coroutine = 26,
  anon_sym_symbol = 27,
  anon_sym_float = 28,
  anon_sym_mapping = 29,
  anon_sym_mixed = 30,
  anon_sym_object = 31,
  anon_sym_lwobject = 32,
  anon_sym_struct = 33,
  anon_sym_STAR = 34,
  anon_sym_LT = 35,
  anon_sym_GT = 36,
  sym_number = 37,
  sym_source_file = 38,
  sym__definition = 39,
  sym_function_definition = 40,
  sym_parameter_list = 41,
  sym_parameter = 42,
  sym_opt_default_value = 43,
  sym_expr0 = 44,
  sym_lvalue = 45,
  sym__function_body = 46,
  sym_block = 47,
  sym__statement = 48,
  sym_return_statement = 49,
  sym_type_modifier = 50,
  sym_basic_type = 51,
  sym_non_void_type = 52,
  sym_single_non_void_type = 53,
  sym__expression = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_function_definition_repeat1 = 56,
  aux_sym_parameter_list_repeat1 = 57,
  aux_sym_block_repeat1 = 58,
  aux_sym_non_void_type_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_varargs] = "varargs",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_void] = "void",
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
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_opt_default_value] = "opt_default_value",
  [sym_expr0] = "expr0",
  [sym_lvalue] = "lvalue",
  [sym__function_body] = "_function_body",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_type_modifier] = "type_modifier",
  [sym_basic_type] = "basic_type",
  [sym_non_void_type] = "non_void_type",
  [sym_single_non_void_type] = "single_non_void_type",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_non_void_type_repeat1] = "non_void_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_varargs] = anon_sym_varargs,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_void] = anon_sym_void,
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
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_opt_default_value] = sym_opt_default_value,
  [sym_expr0] = sym_expr0,
  [sym_lvalue] = sym_lvalue,
  [sym__function_body] = sym__function_body,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_type_modifier] = sym_type_modifier,
  [sym_basic_type] = sym_basic_type,
  [sym_non_void_type] = sym_non_void_type,
  [sym_single_non_void_type] = sym_single_non_void_type,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_void] = {
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
  [sym_number] = {
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
  [sym_expr0] = {
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
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_non_void_type] = {
    .visible = true,
    .named = true,
  },
  [sym_single_non_void_type] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
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
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_non_void_type_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == ')') ADVANCE(4);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
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
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_varargs] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_void] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(51),
    [sym_non_void_type] = STATE(58),
    [sym_single_non_void_type] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_varargs] = ACTIONS(7),
    [anon_sym_nomask] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_nosave] = ACTIONS(7),
    [anon_sym_deprecated] = ACTIONS(7),
    [anon_sym_visible] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(9),
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
  [2] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(51),
    [sym_non_void_type] = STATE(58),
    [sym_single_non_void_type] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_varargs] = ACTIONS(7),
    [anon_sym_nomask] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_nosave] = ACTIONS(7),
    [anon_sym_deprecated] = ACTIONS(7),
    [anon_sym_visible] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(9),
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
  [3] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(51),
    [sym_non_void_type] = STATE(58),
    [sym_single_non_void_type] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_varargs] = ACTIONS(22),
    [anon_sym_nomask] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_private] = ACTIONS(22),
    [anon_sym_public] = ACTIONS(22),
    [anon_sym_protected] = ACTIONS(22),
    [anon_sym_nosave] = ACTIONS(22),
    [anon_sym_deprecated] = ACTIONS(22),
    [anon_sym_visible] = ACTIONS(22),
    [anon_sym_void] = ACTIONS(25),
    [anon_sym_status] = ACTIONS(28),
    [anon_sym_int] = ACTIONS(28),
    [anon_sym_bytes] = ACTIONS(28),
    [anon_sym_string] = ACTIONS(28),
    [anon_sym_closure] = ACTIONS(28),
    [anon_sym_coroutine] = ACTIONS(28),
    [anon_sym_symbol] = ACTIONS(28),
    [anon_sym_float] = ACTIONS(28),
    [anon_sym_mapping] = ACTIONS(28),
    [anon_sym_mixed] = ACTIONS(28),
    [anon_sym_object] = ACTIONS(28),
    [anon_sym_lwobject] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_LT] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_void,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      sym_identifier,
    STATE(19), 1,
      sym_single_non_void_type,
    STATE(55), 1,
      sym_basic_type,
    STATE(58), 1,
      sym_non_void_type,
    STATE(5), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(7), 9,
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
  [49] = 4,
    ACTIONS(41), 1,
      anon_sym_LT,
    STATE(5), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(38), 9,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
    ACTIONS(36), 15,
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
  [85] = 2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(45), 24,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
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
  [116] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(49), 24,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
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
  [147] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(53), 24,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
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
  [178] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(57), 24,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
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
  [209] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(61), 24,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
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
  [240] = 2,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(63), 24,
      anon_sym_varargs,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_nosave,
      anon_sym_deprecated,
      anon_sym_visible,
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
  [270] = 7,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_varargs,
    STATE(19), 1,
      sym_single_non_void_type,
    STATE(35), 1,
      sym_parameter,
    STATE(59), 1,
      sym_non_void_type,
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
  [304] = 6,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_varargs,
    STATE(19), 1,
      sym_single_non_void_type,
    STATE(45), 1,
      sym_parameter,
    STATE(59), 1,
      sym_non_void_type,
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
  [335] = 4,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_single_non_void_type,
    STATE(50), 1,
      sym_non_void_type,
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
  [360] = 4,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_single_non_void_type,
    STATE(57), 1,
      sym_non_void_type,
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
  [385] = 3,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(21), 1,
      sym_single_non_void_type,
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
  [407] = 3,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_return,
    STATE(17), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [419] = 3,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_return,
    STATE(17), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [431] = 4,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_STAR,
    STATE(27), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(82), 2,
      anon_sym_GT,
      sym_identifier,
  [445] = 3,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(18), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [457] = 2,
    ACTIONS(86), 1,
      anon_sym_STAR,
    ACTIONS(90), 3,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [466] = 3,
    ACTIONS(94), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_opt_default_value,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [477] = 1,
    ACTIONS(96), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [484] = 1,
    ACTIONS(98), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [491] = 3,
    ACTIONS(94), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_opt_default_value,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [502] = 3,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(6), 2,
      sym__function_body,
      sym_block,
  [513] = 3,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(106), 2,
      anon_sym_GT,
      sym_identifier,
  [524] = 3,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(10), 2,
      sym__function_body,
      sym_block,
  [535] = 3,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    STATE(8), 2,
      sym__function_body,
      sym_block,
  [546] = 1,
    ACTIONS(112), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [553] = 3,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_non_void_type_repeat1,
    ACTIONS(90), 2,
      anon_sym_GT,
      sym_identifier,
  [564] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameter_list_repeat1,
  [574] = 2,
    STATE(52), 1,
      sym__expression,
    ACTIONS(121), 2,
      sym_identifier,
      sym_number,
  [582] = 3,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(42), 1,
      sym_expr0,
    STATE(56), 1,
      sym_lvalue,
  [592] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parameter_list_repeat1,
  [602] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameter_list_repeat1,
  [612] = 3,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(38), 1,
      sym_expr0,
    STATE(56), 1,
      sym_lvalue,
  [622] = 1,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [627] = 2,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_parameter_list,
  [634] = 1,
    ACTIONS(136), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [639] = 1,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [644] = 1,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [649] = 2,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parameter_list,
  [656] = 1,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [661] = 1,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [666] = 1,
    ACTIONS(144), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [671] = 1,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [676] = 2,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_parameter_list,
  [683] = 1,
    ACTIONS(146), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [688] = 1,
    ACTIONS(148), 1,
      anon_sym_GT,
  [692] = 1,
    ACTIONS(150), 1,
      sym_identifier,
  [696] = 1,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [700] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [704] = 1,
    ACTIONS(156), 1,
      anon_sym_EQ,
  [708] = 1,
    ACTIONS(158), 1,
      sym_identifier,
  [712] = 1,
    ACTIONS(160), 1,
      anon_sym_EQ,
  [716] = 1,
    ACTIONS(162), 1,
      sym_identifier,
  [720] = 1,
    ACTIONS(164), 1,
      sym_identifier,
  [724] = 1,
    ACTIONS(166), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 304,
  [SMALL_STATE(14)] = 335,
  [SMALL_STATE(15)] = 360,
  [SMALL_STATE(16)] = 385,
  [SMALL_STATE(17)] = 407,
  [SMALL_STATE(18)] = 419,
  [SMALL_STATE(19)] = 431,
  [SMALL_STATE(20)] = 445,
  [SMALL_STATE(21)] = 457,
  [SMALL_STATE(22)] = 466,
  [SMALL_STATE(23)] = 477,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 491,
  [SMALL_STATE(26)] = 502,
  [SMALL_STATE(27)] = 513,
  [SMALL_STATE(28)] = 524,
  [SMALL_STATE(29)] = 535,
  [SMALL_STATE(30)] = 546,
  [SMALL_STATE(31)] = 553,
  [SMALL_STATE(32)] = 564,
  [SMALL_STATE(33)] = 574,
  [SMALL_STATE(34)] = 582,
  [SMALL_STATE(35)] = 592,
  [SMALL_STATE(36)] = 602,
  [SMALL_STATE(37)] = 612,
  [SMALL_STATE(38)] = 622,
  [SMALL_STATE(39)] = 627,
  [SMALL_STATE(40)] = 634,
  [SMALL_STATE(41)] = 639,
  [SMALL_STATE(42)] = 644,
  [SMALL_STATE(43)] = 649,
  [SMALL_STATE(44)] = 656,
  [SMALL_STATE(45)] = 661,
  [SMALL_STATE(46)] = 666,
  [SMALL_STATE(47)] = 671,
  [SMALL_STATE(48)] = 676,
  [SMALL_STATE(49)] = 683,
  [SMALL_STATE(50)] = 688,
  [SMALL_STATE(51)] = 692,
  [SMALL_STATE(52)] = 696,
  [SMALL_STATE(53)] = 700,
  [SMALL_STATE(54)] = 704,
  [SMALL_STATE(55)] = 708,
  [SMALL_STATE(56)] = 712,
  [SMALL_STATE(57)] = 716,
  [SMALL_STATE(58)] = 720,
  [SMALL_STATE(59)] = 724,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_non_void_type, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_non_void_type, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_void_type, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_non_void_type, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_void_type_repeat1, 2), SHIFT_REPEAT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(13),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_default_value, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr0, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
