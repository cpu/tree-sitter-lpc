#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_void = 4,
  anon_sym_COMMA = 5,
  anon_sym_SEMI = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_return = 9,
  anon_sym_nomask = 10,
  anon_sym_static = 11,
  anon_sym_private = 12,
  anon_sym_public = 13,
  anon_sym_varargs = 14,
  anon_sym_protected = 15,
  anon_sym_nosave = 16,
  anon_sym_deprecated = 17,
  anon_sym_visible = 18,
  anon_sym_PIPE = 19,
  anon_sym_status = 20,
  anon_sym_int = 21,
  anon_sym_bytes = 22,
  anon_sym_string = 23,
  anon_sym_closure = 24,
  anon_sym_coroutine = 25,
  anon_sym_symbol = 26,
  anon_sym_float = 27,
  anon_sym_mapping = 28,
  anon_sym_mixed = 29,
  anon_sym_object = 30,
  anon_sym_lwobject = 31,
  anon_sym_struct = 32,
  anon_sym_STAR = 33,
  anon_sym_LT = 34,
  anon_sym_GT = 35,
  sym_number = 36,
  sym_source_file = 37,
  sym__definition = 38,
  sym_function_definition = 39,
  sym_parameter_list = 40,
  sym_argument = 41,
  sym_argument_list = 42,
  sym_new_arg_name = 43,
  sym__function_body = 44,
  sym_block = 45,
  sym__statement = 46,
  sym_return_statement = 47,
  sym_type_modifier = 48,
  sym_basic_type = 49,
  sym_basic_non_void_type = 50,
  sym_single_basic_non_void_type = 51,
  sym__expression = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_function_definition_repeat1 = 54,
  aux_sym_block_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_void] = "void",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_nomask] = "nomask",
  [anon_sym_static] = "static",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_varargs] = "varargs",
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
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_argument] = "argument",
  [sym_argument_list] = "argument_list",
  [sym_new_arg_name] = "new_arg_name",
  [sym__function_body] = "_function_body",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_type_modifier] = "type_modifier",
  [sym_basic_type] = "basic_type",
  [sym_basic_non_void_type] = "basic_non_void_type",
  [sym_single_basic_non_void_type] = "single_basic_non_void_type",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_nomask] = anon_sym_nomask,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_varargs] = anon_sym_varargs,
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
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_argument] = sym_argument,
  [sym_argument_list] = sym_argument_list,
  [sym_new_arg_name] = sym_new_arg_name,
  [sym__function_body] = sym__function_body,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_type_modifier] = sym_type_modifier,
  [sym_basic_type] = sym_basic_type,
  [sym_basic_non_void_type] = sym_basic_non_void_type,
  [sym_single_basic_non_void_type] = sym_single_basic_non_void_type,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_varargs] = {
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
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_new_arg_name] = {
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
  [sym_basic_non_void_type] = {
    .visible = true,
    .named = true,
  },
  [sym_single_basic_non_void_type] = {
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
  [aux_sym_block_repeat1] = {
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
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '|') ADVANCE(8);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_nomask] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_varargs] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(46),
    [sym_basic_non_void_type] = STATE(37),
    [sym_single_basic_non_void_type] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_nomask] = ACTIONS(9),
    [anon_sym_static] = ACTIONS(9),
    [anon_sym_private] = ACTIONS(9),
    [anon_sym_public] = ACTIONS(9),
    [anon_sym_varargs] = ACTIONS(9),
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
  [2] = {
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(46),
    [sym_basic_non_void_type] = STATE(37),
    [sym_single_basic_non_void_type] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(20),
    [anon_sym_nomask] = ACTIONS(23),
    [anon_sym_static] = ACTIONS(23),
    [anon_sym_private] = ACTIONS(23),
    [anon_sym_public] = ACTIONS(23),
    [anon_sym_varargs] = ACTIONS(23),
    [anon_sym_protected] = ACTIONS(23),
    [anon_sym_nosave] = ACTIONS(23),
    [anon_sym_deprecated] = ACTIONS(23),
    [anon_sym_visible] = ACTIONS(23),
    [anon_sym_status] = ACTIONS(26),
    [anon_sym_int] = ACTIONS(26),
    [anon_sym_bytes] = ACTIONS(26),
    [anon_sym_string] = ACTIONS(26),
    [anon_sym_closure] = ACTIONS(26),
    [anon_sym_coroutine] = ACTIONS(26),
    [anon_sym_symbol] = ACTIONS(26),
    [anon_sym_float] = ACTIONS(26),
    [anon_sym_mapping] = ACTIONS(26),
    [anon_sym_mixed] = ACTIONS(26),
    [anon_sym_object] = ACTIONS(26),
    [anon_sym_lwobject] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_LT] = ACTIONS(29),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(46),
    [sym_basic_non_void_type] = STATE(37),
    [sym_single_basic_non_void_type] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_nomask] = ACTIONS(9),
    [anon_sym_static] = ACTIONS(9),
    [anon_sym_private] = ACTIONS(9),
    [anon_sym_public] = ACTIONS(9),
    [anon_sym_varargs] = ACTIONS(9),
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
  [4] = {
    [sym_type_modifier] = STATE(5),
    [sym_basic_type] = STATE(44),
    [sym_basic_non_void_type] = STATE(37),
    [sym_single_basic_non_void_type] = STATE(19),
    [aux_sym_function_definition_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(34),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_nomask] = ACTIONS(9),
    [anon_sym_static] = ACTIONS(9),
    [anon_sym_private] = ACTIONS(9),
    [anon_sym_public] = ACTIONS(9),
    [anon_sym_varargs] = ACTIONS(9),
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
  [0] = 4,
    ACTIONS(41), 1,
      anon_sym_LT,
    STATE(5), 2,
      sym_type_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(38), 9,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [36] = 2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(45), 24,
      anon_sym_void,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [67] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(49), 24,
      anon_sym_void,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [98] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(53), 24,
      anon_sym_void,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [129] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(57), 24,
      anon_sym_void,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [160] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(61), 24,
      anon_sym_void,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [191] = 2,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(63), 24,
      anon_sym_void,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [221] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_void,
    STATE(19), 1,
      sym_single_basic_non_void_type,
    STATE(29), 1,
      sym_argument_list,
    STATE(30), 1,
      sym_new_arg_name,
    STATE(33), 1,
      sym_basic_non_void_type,
    STATE(42), 1,
      sym_argument,
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
  [261] = 5,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_single_basic_non_void_type,
    STATE(33), 1,
      sym_basic_non_void_type,
    STATE(38), 1,
      sym_new_arg_name,
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
  [289] = 4,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_single_basic_non_void_type,
    STATE(36), 1,
      sym_basic_non_void_type,
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
  [314] = 3,
    ACTIONS(13), 1,
      anon_sym_LT,
    STATE(26), 1,
      sym_single_basic_non_void_type,
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
  [336] = 3,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_return,
    STATE(16), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [348] = 3,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_return,
    STATE(16), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [360] = 3,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [372] = 2,
    ACTIONS(86), 1,
      anon_sym_STAR,
    ACTIONS(84), 3,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [381] = 1,
    ACTIONS(88), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [388] = 1,
    ACTIONS(90), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [395] = 1,
    ACTIONS(92), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [402] = 3,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(10), 2,
      sym__function_body,
      sym_block,
  [413] = 3,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    STATE(8), 2,
      sym__function_body,
      sym_block,
  [424] = 3,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    STATE(9), 2,
      sym__function_body,
      sym_block,
  [435] = 2,
    ACTIONS(86), 1,
      anon_sym_STAR,
    ACTIONS(102), 3,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [444] = 2,
    STATE(45), 1,
      sym__expression,
    ACTIONS(104), 2,
      sym_identifier,
      sym_number,
  [452] = 1,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [457] = 2,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      anon_sym_COMMA,
  [464] = 1,
    ACTIONS(112), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [469] = 2,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_parameter_list,
  [476] = 1,
    ACTIONS(116), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [481] = 2,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_PIPE,
  [488] = 1,
    ACTIONS(122), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [493] = 2,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parameter_list,
  [500] = 2,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_GT,
  [507] = 2,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      sym_identifier,
  [514] = 1,
    ACTIONS(128), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [519] = 2,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_parameter_list,
  [526] = 1,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [531] = 1,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
  [535] = 1,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
  [539] = 1,
    ACTIONS(126), 1,
      sym_identifier,
  [543] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [547] = 1,
    ACTIONS(136), 1,
      anon_sym_SEMI,
  [551] = 1,
    ACTIONS(138), 1,
      sym_identifier,
  [555] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 261,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 314,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 348,
  [SMALL_STATE(18)] = 360,
  [SMALL_STATE(19)] = 372,
  [SMALL_STATE(20)] = 381,
  [SMALL_STATE(21)] = 388,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 435,
  [SMALL_STATE(27)] = 444,
  [SMALL_STATE(28)] = 452,
  [SMALL_STATE(29)] = 457,
  [SMALL_STATE(30)] = 464,
  [SMALL_STATE(31)] = 469,
  [SMALL_STATE(32)] = 476,
  [SMALL_STATE(33)] = 481,
  [SMALL_STATE(34)] = 488,
  [SMALL_STATE(35)] = 493,
  [SMALL_STATE(36)] = 500,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 514,
  [SMALL_STATE(39)] = 519,
  [SMALL_STATE(40)] = 526,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 535,
  [SMALL_STATE(43)] = 539,
  [SMALL_STATE(44)] = 543,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 551,
  [SMALL_STATE(47)] = 555,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_non_void_type, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_basic_non_void_type, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_basic_non_void_type, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_basic_non_void_type, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_non_void_type, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_arg_name, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
