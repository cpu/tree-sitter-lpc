#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_SEMI = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_return = 6,
  anon_sym_nomask = 7,
  anon_sym_static = 8,
  anon_sym_private = 9,
  anon_sym_public = 10,
  anon_sym_varargs = 11,
  anon_sym_protected = 12,
  anon_sym_nosave = 13,
  anon_sym_deprecated = 14,
  anon_sym_visible = 15,
  anon_sym_void = 16,
  anon_sym_PIPE = 17,
  anon_sym_status = 18,
  anon_sym_int = 19,
  anon_sym_bytes = 20,
  anon_sym_string = 21,
  anon_sym_closure = 22,
  anon_sym_coroutine = 23,
  anon_sym_symbol = 24,
  anon_sym_float = 25,
  anon_sym_mapping = 26,
  anon_sym_mixed = 27,
  anon_sym_object = 28,
  anon_sym_lwobject = 29,
  anon_sym_struct = 30,
  anon_sym_STAR = 31,
  anon_sym_LT = 32,
  anon_sym_GT = 33,
  sym_identifier = 34,
  sym_number = 35,
  sym_source_file = 36,
  sym__definition = 37,
  sym_function_definition = 38,
  sym_parameter_list = 39,
  sym__function_body = 40,
  sym_block = 41,
  sym__statement = 42,
  sym_return_statement = 43,
  sym_type_modifier = 44,
  sym_basic_type = 45,
  sym_basic_non_void_type = 46,
  sym_single_basic_non_void_type = 47,
  sym__expression = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_function_definition_repeat1 = 50,
  aux_sym_block_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(113);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(2);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'j') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 'j') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 107:
      if (lookahead == 'v') ADVANCE(9);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 109:
      if (lookahead == 'w') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 112:
      if (eof) ADVANCE(113);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 'v') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_nomask);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_nomask);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_static);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_private);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_public);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_varargs);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_nosave);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_nosave);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_deprecated);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_deprecated);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_visible);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_visible);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_void);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_status);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_int);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_string);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_closure);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_closure);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_coroutine);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_coroutine);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_float);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_mapping);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_mapping);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_object);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_lwobject);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_lwobject);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(213);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(273);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(271);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(214);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(265);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(267);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(226);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(227);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(238);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(258);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(260);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(266);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(232);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(184);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(235);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 's') ADVANCE(172);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(209);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(256);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(210);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(201);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(268);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(246);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(215);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(175);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(237);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(217);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'y') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(263);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(248);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(239);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(261);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 112},
  [2] = {.lex_state = 112},
  [3] = {.lex_state = 112},
  [4] = {.lex_state = 112},
  [5] = {.lex_state = 112},
  [6] = {.lex_state = 112},
  [7] = {.lex_state = 112},
  [8] = {.lex_state = 112},
  [9] = {.lex_state = 112},
  [10] = {.lex_state = 112},
  [11] = {.lex_state = 112},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(37),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(35),
    [sym_basic_non_void_type] = STATE(29),
    [sym_single_basic_non_void_type] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_nomask] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_varargs] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_nosave] = ACTIONS(5),
    [anon_sym_deprecated] = ACTIONS(5),
    [anon_sym_visible] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_status] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_bytes] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_closure] = ACTIONS(9),
    [anon_sym_coroutine] = ACTIONS(9),
    [anon_sym_symbol] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_mapping] = ACTIONS(9),
    [anon_sym_mixed] = ACTIONS(9),
    [anon_sym_object] = ACTIONS(9),
    [anon_sym_lwobject] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(35),
    [sym_basic_non_void_type] = STATE(29),
    [sym_single_basic_non_void_type] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_nomask] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_varargs] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_nosave] = ACTIONS(5),
    [anon_sym_deprecated] = ACTIONS(5),
    [anon_sym_visible] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_status] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_bytes] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_closure] = ACTIONS(9),
    [anon_sym_coroutine] = ACTIONS(9),
    [anon_sym_symbol] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_mapping] = ACTIONS(9),
    [anon_sym_mixed] = ACTIONS(9),
    [anon_sym_object] = ACTIONS(9),
    [anon_sym_lwobject] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_type_modifier] = STATE(4),
    [sym_basic_type] = STATE(35),
    [sym_basic_non_void_type] = STATE(29),
    [sym_single_basic_non_void_type] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_nomask] = ACTIONS(19),
    [anon_sym_static] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_varargs] = ACTIONS(19),
    [anon_sym_protected] = ACTIONS(19),
    [anon_sym_nosave] = ACTIONS(19),
    [anon_sym_deprecated] = ACTIONS(19),
    [anon_sym_visible] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(22),
    [anon_sym_status] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_bytes] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(25),
    [anon_sym_closure] = ACTIONS(25),
    [anon_sym_coroutine] = ACTIONS(25),
    [anon_sym_symbol] = ACTIONS(25),
    [anon_sym_float] = ACTIONS(25),
    [anon_sym_mapping] = ACTIONS(25),
    [anon_sym_mixed] = ACTIONS(25),
    [anon_sym_object] = ACTIONS(25),
    [anon_sym_lwobject] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(28),
    [sym_identifier] = ACTIONS(31),
  },
  [4] = {
    [sym_type_modifier] = STATE(5),
    [sym_basic_type] = STATE(33),
    [sym_basic_non_void_type] = STATE(29),
    [sym_single_basic_non_void_type] = STATE(24),
    [aux_sym_function_definition_repeat1] = STATE(5),
    [anon_sym_nomask] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_varargs] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_nosave] = ACTIONS(5),
    [anon_sym_deprecated] = ACTIONS(5),
    [anon_sym_visible] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_status] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_bytes] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_closure] = ACTIONS(9),
    [anon_sym_coroutine] = ACTIONS(9),
    [anon_sym_symbol] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_mapping] = ACTIONS(9),
    [anon_sym_mixed] = ACTIONS(9),
    [anon_sym_object] = ACTIONS(9),
    [anon_sym_lwobject] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_identifier] = ACTIONS(34),
  },
  [5] = {
    [sym_type_modifier] = STATE(5),
    [aux_sym_function_definition_repeat1] = STATE(5),
    [anon_sym_nomask] = ACTIONS(36),
    [anon_sym_static] = ACTIONS(36),
    [anon_sym_private] = ACTIONS(36),
    [anon_sym_public] = ACTIONS(36),
    [anon_sym_varargs] = ACTIONS(36),
    [anon_sym_protected] = ACTIONS(36),
    [anon_sym_nosave] = ACTIONS(36),
    [anon_sym_deprecated] = ACTIONS(36),
    [anon_sym_visible] = ACTIONS(36),
    [anon_sym_void] = ACTIONS(39),
    [anon_sym_status] = ACTIONS(39),
    [anon_sym_int] = ACTIONS(39),
    [anon_sym_bytes] = ACTIONS(39),
    [anon_sym_string] = ACTIONS(39),
    [anon_sym_closure] = ACTIONS(39),
    [anon_sym_coroutine] = ACTIONS(39),
    [anon_sym_symbol] = ACTIONS(39),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_mapping] = ACTIONS(39),
    [anon_sym_mixed] = ACTIONS(39),
    [anon_sym_object] = ACTIONS(39),
    [anon_sym_lwobject] = ACTIONS(39),
    [anon_sym_struct] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [sym_identifier] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(45), 24,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [31] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(49), 24,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [62] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(53), 24,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [93] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(57), 24,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [124] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
    ACTIONS(61), 24,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [155] = 2,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(63), 24,
      anon_sym_nomask,
      anon_sym_static,
      anon_sym_private,
      anon_sym_public,
      anon_sym_varargs,
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
  [185] = 4,
    ACTIONS(11), 1,
      anon_sym_LT,
    STATE(24), 1,
      sym_single_basic_non_void_type,
    STATE(27), 1,
      sym_basic_non_void_type,
    ACTIONS(67), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
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
  [210] = 3,
    ACTIONS(11), 1,
      anon_sym_LT,
    STATE(17), 1,
      sym_single_basic_non_void_type,
    ACTIONS(67), 13,
      anon_sym_status,
      anon_sym_int,
      anon_sym_bytes,
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
  [232] = 3,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_return,
    STATE(14), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [244] = 3,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_return,
    STATE(14), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [256] = 3,
    ACTIONS(76), 1,
      anon_sym_return,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(15), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [268] = 2,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(80), 3,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [277] = 3,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    STATE(8), 2,
      sym__function_body,
      sym_block,
  [288] = 1,
    ACTIONS(88), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [295] = 1,
    ACTIONS(90), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [302] = 3,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(6), 2,
      sym__function_body,
      sym_block,
  [313] = 1,
    ACTIONS(94), 4,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [320] = 3,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    STATE(10), 2,
      sym__function_body,
      sym_block,
  [331] = 2,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(98), 3,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_identifier,
  [340] = 2,
    STATE(36), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
  [348] = 1,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [353] = 2,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_GT,
  [360] = 2,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_parameter_list,
  [367] = 2,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(110), 1,
      sym_identifier,
  [374] = 2,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_parameter_list,
  [381] = 2,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_parameter_list,
  [388] = 1,
    ACTIONS(112), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [393] = 1,
    ACTIONS(114), 1,
      sym_identifier,
  [397] = 1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
  [401] = 1,
    ACTIONS(118), 1,
      sym_identifier,
  [405] = 1,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [409] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [413] = 1,
    ACTIONS(110), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 31,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 244,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 277,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 295,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 320,
  [SMALL_STATE(24)] = 331,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 348,
  [SMALL_STATE(27)] = 353,
  [SMALL_STATE(28)] = 360,
  [SMALL_STATE(29)] = 367,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 381,
  [SMALL_STATE(32)] = 388,
  [SMALL_STATE(33)] = 393,
  [SMALL_STATE(34)] = 397,
  [SMALL_STATE(35)] = 401,
  [SMALL_STATE(36)] = 405,
  [SMALL_STATE(37)] = 409,
  [SMALL_STATE(38)] = 413,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
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
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_non_void_type, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_basic_non_void_type, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_basic_non_void_type, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_basic_non_void_type, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_non_void_type, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
