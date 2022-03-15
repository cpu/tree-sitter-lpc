#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_SEMI = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_return = 6,
  sym_identifier = 7,
  sym_number = 8,
  sym_source_file = 9,
  sym__definition = 10,
  sym_function_definition = 11,
  sym_parameter_list = 12,
  sym__function_body = 13,
  sym_block = 14,
  sym__statement = 15,
  sym_return_statement = 16,
  sym__expression = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_block_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
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
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(1);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(3), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [24] = 3,
    ACTIONS(14), 1,
      anon_sym_RBRACE,
    ACTIONS(16), 1,
      anon_sym_return,
    STATE(5), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [36] = 3,
    ACTIONS(16), 1,
      anon_sym_return,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    STATE(6), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [48] = 3,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_return,
    STATE(6), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [60] = 3,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(11), 2,
      sym__function_body,
      sym_block,
  [71] = 2,
    STATE(17), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
  [79] = 2,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_parameter_list,
  [86] = 1,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [91] = 1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [96] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [101] = 1,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [106] = 1,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [111] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [115] = 1,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
  [119] = 1,
    ACTIONS(47), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 71,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 91,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 101,
  [SMALL_STATE(14)] = 106,
  [SMALL_STATE(15)] = 111,
  [SMALL_STATE(16)] = 115,
  [SMALL_STATE(17)] = 119,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [43] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
