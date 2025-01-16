#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON_COLON_EQ = 1,
  anon_sym_u03b5 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym_identifier = 5,
  anon_sym_LF = 6,
  sym_string = 7,
  sym_regex = 8,
  sym_modifier = 9,
  sym_grammar = 10,
  sym_rule = 11,
  sym_rule_entry = 12,
  sym_rule_token = 13,
  sym__newline = 14,
  aux_sym_grammar_repeat1 = 15,
  aux_sym_rule_repeat1 = 16,
  aux_sym_rule_repeat2 = 17,
  aux_sym_rule_entry_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_u03b5] = "\u03b5",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [sym_string] = "string",
  [sym_regex] = "regex",
  [sym_modifier] = "modifier",
  [sym_grammar] = "grammar",
  [sym_rule] = "rule",
  [sym_rule_entry] = "rule_entry",
  [sym_rule_token] = "rule_token",
  [sym__newline] = "_newline",
  [aux_sym_grammar_repeat1] = "grammar_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_rule_repeat2] = "rule_repeat2",
  [aux_sym_rule_entry_repeat1] = "rule_entry_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_u03b5] = anon_sym_u03b5,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [sym_string] = sym_string,
  [sym_regex] = sym_regex,
  [sym_modifier] = sym_modifier,
  [sym_grammar] = sym_grammar,
  [sym_rule] = sym_rule,
  [sym_rule_entry] = sym_rule_entry,
  [sym_rule_token] = sym_rule_token,
  [sym__newline] = sym__newline,
  [aux_sym_grammar_repeat1] = aux_sym_grammar_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_rule_repeat2] = aux_sym_rule_repeat2,
  [aux_sym_rule_entry_repeat1] = aux_sym_rule_entry_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u03b5] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_token] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_grammar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_entry_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\t'}, {0x0b, '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f},
  {0x205f, 0x205f}, {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '\n', 13,
        '"', 1,
        '/', 2,
        ':', 3,
        '{', 10,
        '}', 11,
        0x3b5, 9,
        '*', 16,
        '+', 16,
        '?', 16,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_u03b5);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_modifier);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_u03b5] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_modifier] = ACTIONS(1),
  },
  [1] = {
    [sym_grammar] = STATE(20),
    [sym_rule] = STATE(16),
    [aux_sym_grammar_repeat1] = STATE(16),
    [sym_identifier] = ACTIONS(3),
  },
  [2] = {
    [sym_rule_entry] = STATE(18),
    [sym_rule_token] = STATE(5),
    [sym__newline] = STATE(13),
    [aux_sym_rule_repeat1] = STATE(3),
    [aux_sym_rule_repeat2] = STATE(13),
    [aux_sym_rule_entry_repeat1] = STATE(5),
    [anon_sym_u03b5] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [sym_regex] = ACTIONS(5),
  },
  [3] = {
    [sym_rule_entry] = STATE(18),
    [sym_rule_token] = STATE(5),
    [aux_sym_rule_repeat1] = STATE(3),
    [aux_sym_rule_entry_repeat1] = STATE(5),
    [anon_sym_u03b5] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(14),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(17),
    [sym_string] = ACTIONS(11),
    [sym_regex] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_rule_repeat1,
    STATE(18), 1,
      sym_rule_entry,
    STATE(5), 2,
      sym_rule_token,
      aux_sym_rule_entry_repeat1,
    ACTIONS(5), 4,
      anon_sym_u03b5,
      sym_identifier,
      sym_string,
      sym_regex,
  [20] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
    STATE(6), 2,
      sym_rule_token,
      aux_sym_rule_entry_repeat1,
    ACTIONS(5), 4,
      anon_sym_u03b5,
      sym_identifier,
      sym_string,
      sym_regex,
  [38] = 4,
    ACTIONS(24), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
    STATE(6), 2,
      sym_rule_token,
      aux_sym_rule_entry_repeat1,
    ACTIONS(21), 4,
      anon_sym_u03b5,
      sym_identifier,
      sym_string,
      sym_regex,
  [56] = 2,
    ACTIONS(31), 1,
      sym_modifier,
    ACTIONS(29), 7,
      anon_sym_u03b5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LF,
      sym_string,
      sym_regex,
  [69] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_rule_entry,
    STATE(5), 2,
      sym_rule_token,
      aux_sym_rule_entry_repeat1,
    ACTIONS(5), 4,
      anon_sym_u03b5,
      sym_identifier,
      sym_string,
      sym_regex,
  [86] = 2,
    ACTIONS(35), 1,
      sym_modifier,
    ACTIONS(33), 7,
      anon_sym_u03b5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LF,
      sym_string,
      sym_regex,
  [99] = 1,
    ACTIONS(37), 7,
      anon_sym_u03b5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LF,
      sym_string,
      sym_regex,
  [109] = 1,
    ACTIONS(39), 7,
      anon_sym_u03b5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LF,
      sym_string,
      sym_regex,
  [119] = 1,
    ACTIONS(17), 6,
      anon_sym_u03b5,
      anon_sym_LBRACE,
      sym_identifier,
      anon_sym_LF,
      sym_string,
      sym_regex,
  [128] = 3,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(14), 2,
      sym__newline,
      aux_sym_rule_repeat2,
  [140] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(14), 2,
      sym__newline,
      aux_sym_rule_repeat2,
  [152] = 3,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(15), 2,
      sym_rule,
      aux_sym_grammar_repeat1,
  [163] = 3,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_rule,
      aux_sym_grammar_repeat1,
  [174] = 2,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(4), 1,
      sym__newline,
  [181] = 2,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__newline,
  [188] = 1,
    ACTIONS(61), 1,
      anon_sym_COLON_COLON_EQ,
  [192] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [196] = 1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 163,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 181,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 192,
  [SMALL_STATE(21)] = 196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_entry, 1, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_entry_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_token, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_token, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_token, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_token, 4, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat2, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bnf(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
