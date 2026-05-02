/**
 * @file Grammar for the LDMud dialect of LPC
 * @author Daniel McCarney <daniel@binaryparadox.net>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Precedence table — ordered low-to-high to match prolang.y's
// %left/%right/%nonassoc declarations (prolang.y line 9577).
const PREC = {
  COMMA: -1,
  ASSIGNMENT: 1,
  CONDITIONAL: 2,
  LOGICAL_OR: 3,
  LOGICAL_AND: 4,
  INCLUSIVE_OR: 5,
  EXCLUSIVE_OR: 6,
  BITWISE_AND: 7,
  EQUAL: 8,
  RELATIONAL: 9,
  SHIFT: 10,
  ADD: 11,
  MULTIPLY: 12,
  UNARY: 14,
  CAST: 15,
  POSTFIX: 16, // postfix ++ / --, member access, indexing, call
  CALL: 17,
};

export default grammar({
  name: "lpc",

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    // Modifier prefixes are shared by function def, global var, struct def,
    // inherit, and the inheritance scope qualifier. The parser can't tell
    // which one we're in until it sees the first non-modifier token.
    [$.function_definition, $.global_var, $.struct_definition, $.inheritance],
    // `int*` may be an array type or `int` followed by `*` from the next
    // production. Prefer to consume `*` into the type.
    [$.non_void_type, $._single_non_void_type],
    // `IDENT::` and `STRING::` collide with `_expr_primary` (an
    // identifier or string used as a value) until the parser sees `::`.
    [$._expr_primary, $.scoped_function_name],
    // `for(int x` — could be the start of the single-type
    // `for(type d1, d2, ...)` shape or the mixed-type
    // `for(for_init_decl, ...)` shape. Decided once we see the next
    // type or expression after the first comma. `prec.dynamic` on the
    // single-type alternative tilts the resolution toward it when both
    // paths are valid.
    [$._for_init, $.for_init_decl],
  ],

  rules: {
    source_file: $ => repeat($._definition),

    // ---------------------------------------------------------------------
    // Top-level definitions  (prolang.y `def`, line ~9790)
    // ---------------------------------------------------------------------

    _definition: $ => choice(
      $.function_definition,
      $.global_var,
      $.struct_definition,
      $.inheritance,
      $.default_visibility,
      $.preproc_include,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_undef,
      $.preproc_pragma,
      $.preproc_if,
      $.preproc_ifdef,
      $.preproc_call,
    ),

    // ---------------------------------------------------------------------
    // Preprocessor (handled in lex.c, but we expose a tree-sitter-c-style
    // approximation so editors can navigate). Adapted from tree-sitter-c.
    // ---------------------------------------------------------------------

    preproc_include: $ => seq(
      preprocessor('include'),
      field('path', choice(
        $.string_literal,
        $.system_lib_string,
        $.identifier,
      )),
      token.immediate(/\r?\n/),
    ),

    system_lib_string: $ => token(seq(
      '<',
      repeat(choice(/[^>\n]/, '\\>')),
      '>',
    )),

    preproc_def: $ => seq(
      preprocessor('define'),
      field('name', $.identifier),
      field('value', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),

    preproc_function_def: $ => seq(
      preprocessor('define'),
      field('name', $.identifier),
      field('parameters', $.preproc_params),
      field('value', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),

    preproc_params: $ => seq(
      token.immediate('('),
      commaSep(choice($.identifier, '...')),
      ')',
    ),

    preproc_undef: $ => seq(
      preprocessor('undef'),
      field('name', $.identifier),
      token.immediate(/\r?\n/),
    ),

    preproc_pragma: $ => seq(
      preprocessor('pragma'),
      field('value', commaSep1($.identifier)),
      token.immediate(/\r?\n/),
    ),

    preproc_call: $ => seq(
      field('directive', $.preproc_directive),
      field('argument', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),

    preproc_directive: $ => /#[ \t]*[a-zA-Z]\w*/,
    preproc_arg: $ => token(prec(-1, repeat1(/.|\\\r?\n/))),

    ...preprocIf('', $ => $._definition),
    ...preprocIf('_in_statement', $ => $._statement),
    // For aggregate literals (`({ ... })`, `'({ ... })`, struct
    // literals) and call argument lists. The slot is an expression with
    // an optional trailing comma, e.g. same shape as a regular slot so the
    // branch contents are interchangeable with inline elements.
    ...preprocIf('_in_aggregate', $ => $._aggregate_slot),

    _aggregate_slot: $ => choice(
      seq($._expression, ','),
      $._expression,
    ),

    // A separate flavor of preproc for mapping literals: same `#if/#elif/
    // #else/#endif` shape, but the wrapped slot is a `mapping_entry`
    // (`"k": v[,]`) rather than a bare expression. The dunemud corpus
    // frequently `#if`-wraps whole mapping entries (obj/soul2.c:756,
    // obj/cmds/player/calc.c:434, etc.). Surfacing this as its own
    // family — instead of widening `_aggregate_slot` — avoids the
    // `_expression` vs `mapping_entry` ambiguity on a leading identifier
    // that the comment above used to warn about: `mapping_entry`'s `:`
    // half is optional, so adding it to `_aggregate_slot` would make
    // every bare expression also match as a key-only `mapping_entry`.
    ...preprocIf('_in_mapping', $ => $._mapping_slot),

    _mapping_slot: $ => choice(
      seq($.mapping_entry, ','),
      $.mapping_entry,
    ),

    _preproc_expression: $ => choice(
      $.identifier,
      $.number_literal,
      $.string_literal,
      $.preproc_defined,
      alias($.preproc_unary_expression, $.unary_expression),
      alias($.preproc_binary_expression, $.binary_expression),
      alias($.preproc_parenthesized_expression, $.parenthesized_expression),
      alias($.preproc_call_expression, $.function_call),
    ),

    preproc_parenthesized_expression: $ => seq(
      '(', $._preproc_expression, ')',
    ),

    preproc_defined: $ => choice(
      seq('defined', '(', $.identifier, ')'),
      seq('defined', $.identifier),
    ),

    preproc_unary_expression: $ => prec.left(PREC.UNARY, seq(
      field('operator', choice('!', '~', '-', '+')),
      field('argument', $._preproc_expression),
    )),

    preproc_call_expression: $ => prec(PREC.CALL, seq(
      field('function', $.identifier),
      field('arguments', alias($.preproc_argument_list, $.argument_list)),
    )),

    preproc_argument_list: $ => seq(
      '(', commaSep($._preproc_expression), ')',
    ),

    preproc_binary_expression: $ => {
      const table = [
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULTIPLY],
        ['/', PREC.MULTIPLY],
        ['%', PREC.MULTIPLY],
        ['||', PREC.LOGICAL_OR],
        ['&&', PREC.LOGICAL_AND],
        ['|', PREC.INCLUSIVE_OR],
        ['^', PREC.EXCLUSIVE_OR],
        ['&', PREC.BITWISE_AND],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
        ['>', PREC.RELATIONAL],
        ['>=', PREC.RELATIONAL],
        ['<=', PREC.RELATIONAL],
        ['<', PREC.RELATIONAL],
        ['<<', PREC.SHIFT],
        ['>>', PREC.SHIFT],
        ['>>>', PREC.SHIFT],
      ];
      return choice(...table.map(([op, p]) =>
        prec.left(p, seq(
          field('left', $._preproc_expression),
          field('operator', op),
          field('right', $._preproc_expression),
        ))));
    },

    // ---------------------------------------------------------------------
    // Functions
    // ---------------------------------------------------------------------

    // prolang.y `function_def` (line 9804): `type L_IDENTIFIER ( argument )
    // body`. `type` is `type_modifier_list opt_basic_type`, the basic
    // type is optional (a typeless function defaults to mixed).
    function_definition: $ => seq(
      optional($.async_modifier),
      repeat($.type_modifier),
      field('type', optional($._basic_type)),
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('body', choice($.block, ';')),
    ),

    parameter_list: $ => seq(
      '(',
      choice(
        commaSep($.parameter),
        'void',
      ),
      ')',
    ),

    // prolang.y `new_arg_name` (line 11176): `non_void_type L_IDENTIFIER
    // opt_default_value`. The basic-type half of `non_void_type` is
    // optional (defaults to mixed). See `t-language/ti-types.c` for
    // typeless params. `varargs` is technically part of
    // `type_modifier_list` (the only modifier the driver lets through);
    // we surface it as its own slot since real usage is always a single
    // `varargs` prefix.
    parameter: $ => seq(
      optional('varargs'),
      field('type', optional($.non_void_type)),
      field('name', $.identifier),
      optional(seq('=', field('default', $._expression))),
    ),

    // ---------------------------------------------------------------------
    // Globals: `int x, *y, z = 1;`: type then comma-separated names, each
    // with optional `*`-prefix (legacy pointer-array decl) and initializer.
    // ---------------------------------------------------------------------

    global_var: $ => seq(
      repeat($.type_modifier),
      field('type', $._basic_type),
      commaSep1($._global_declarator),
      ';',
    ),

    _global_declarator: $ => seq(
      repeat('*'),
      field('name', $.identifier),
      optional(seq('=', field('value', $._expression))),
    ),

    // ---------------------------------------------------------------------
    // Structs: prolang.y `struct_decl` (line 10434) covers forward-decl
    // (`struct foo;`), full def (`struct foo { ... }`), and base-struct
    // extension (`struct foo (bar) { ... }`).
    // ---------------------------------------------------------------------

    struct_definition: $ => seq(
      repeat($.type_modifier),
      'struct',
      field('name', $.identifier),
      optional($.struct_member_list),
      ';',
    ),

    struct_member_list: $ => seq(
      optional(seq('(', field('base', $.identifier), ')')),
      '{',
      repeat($.struct_member),
      '}',
    ),

    struct_member: $ => seq(
      field('type', $.non_void_type),
      commaSep1(seq(
        repeat('*'),
        field('name', $.identifier),
      )),
      ';',
    ),

    // ---------------------------------------------------------------------
    // Inheritance & default visibility
    // ---------------------------------------------------------------------

    // prolang.y line 10560: `type_modifier_list inheritance_qualifier
    // inheritance_modifier_list 'inherit' string_constant ';'`. We collapse
    // the three pre-`inherit` lists into a single repeat(choice(...)).
    //
    // The source is a `string_constant` (prolang.y:13207). `identifier` is
    // accepted as a macro stand-in: `inherit FOO+"x";` after preprocessor
    // expansion is `inherit "...path..."+"x"`, which the bison grammar
    // handles via `string_constant '+' L_STRING`. We accept the unexpanded
    // form by admitting an identifier wherever a string literal would
    // appear, since macro expansion happens in lex.c before bison sees it.
    inheritance: $ => seq(
      repeat(choice(
        $.type_modifier,
        $.inheritance_modifier,
        $.inheritance_scope,
      )),
      'inherit',
      field('source', $._string_constant),
      ';',
    ),

    // prolang.y line 13207. Adjacent string literals (`"a" "b"`, no `+`)
    // are also valid, but lex.c handles them by concatenating tokens
    // before bison sees the result (see prolang.y:13217 fatal). Our
    // `concatenated_string` covers the adjacent form; this rule covers
    // the explicit `+` and parenthesised forms. `+` is left-associative
    // per the bison rule `string_constant '+' L_STRING` (left-recursive).
    _string_constant: $ => choice(
      $.string_literal,
      $.concatenated_string,
      $.identifier,                              // macro stand-in
      prec.left(seq($._string_constant, '+', $._string_constant)),
      seq('(', $._string_constant, ')'),
    ),

    inheritance_modifier: $ => 'virtual',

    // prolang.y inheritance_qualifier (line 10814): the scope name
    // (`functions` / `variables` / `structs`) isn't a lexer keyword.
    // prolang.y string-compares the L_IDENTIFIER. Literal-string tokens
    // here only match in inherit/default position, so these stay usable
    // as ordinary identifiers elsewhere.
    inheritance_scope: $ => choice('variables', 'functions', 'structs'),

    default_visibility: $ => seq(
      'default',
      repeat(choice(
        $.type_modifier,
        $.inheritance_scope,
      )),
      ';',
    ),

    // ---------------------------------------------------------------------
    // Types — prolang.y line 10948.
    //
    //   non_void_type = type_modifier_list opt_basic_non_void_type
    //   basic_non_void_type = single_basic_non_void_type ('|' single...)*
    //   single_basic_non_void_type = atom | single...'*' | '<' non_void_type '>'
    //
    // `void` is only allowed at the top of `basic_type` (return type /
    // parameter list "void"); arrays (`*`) and unions (`|`) are not.
    // ---------------------------------------------------------------------

    type_modifier: $ => choice(
      'nomask',
      'static',
      'private',
      'public',
      'varargs',
      'protected',
      'nosave',
      'deprecated',
      'visible',
    ),

    async_modifier: $ => 'async',

    _basic_type: $ => choice(
      $.non_void_type,
      'void',
    ),

    non_void_type: $ => sep1('|', $._single_non_void_type),

    _single_non_void_type: $ => choice(
      $._atomic_type,
      prec.left(seq($._single_non_void_type, '*')),
    ),

    _atomic_type: $ => choice(
      'status',
      'int',
      'bytes',
      'string',
      'closure',
      'coroutine',
      'symbol',
      'float',
      'mapping',
      'mixed',
      'lpctype',
      // `object "/blueprint"` / `lwobject "/blueprint"`. Blueprint slot
      // takes a `simple_string_constant` (prolang.y:13190). We don't
      // accept a bare identifier there, it would make `object obj;`
      // ambiguous. We *do* accept the LDMud predefined `__FOO__` macros
      // since they expand to strings before bison sees them and using
      // them in this slot is idiomatic (`object __FILE__ var`).
      prec.right(seq('object', optional(field('blueprint',
        choice($.string_literal, $.concatenated_string, $.predefined_macro))))),
      prec.right(seq('lwobject', optional(field('blueprint',
        choice($.string_literal, $.concatenated_string, $.predefined_macro))))),
      // `struct mixed` is the type-erased struct (prolang.y:11024);
      // otherwise the struct_name shape from line 17264.
      seq('struct', choice($.struct_name, 'mixed')),
      seq('<', $.non_void_type, '>'),
    ),

    // ---------------------------------------------------------------------
    // Statements
    // ---------------------------------------------------------------------

    block: $ => seq('{', repeat($._statement), '}'),

    _statement: $ => choice(
      $.expression_statement,
      $.local_var_decl,
      $.return_statement,
      $.if_statement,
      $.while_statement,
      $.do_statement,
      $.for_statement,
      $.foreach_statement,
      $.switch_statement,
      $.break_statement,
      $.continue_statement,
      $.block,
      ';',
      $.preproc_if_in_statement,
      $.preproc_ifdef_in_statement,
      // Leaf preprocessor directives mid-function. `#pragma` flips a
      // parser-state flag in the LDMud driver; we don't honor the
      // semantic effect, but it has to *parse*. Real-world LPC also
      // has stray `#define` / `#undef` / `#include` mid-function.
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_undef,
      $.preproc_pragma,
      $.preproc_include,
    ),

    expression_statement: $ => seq($._comma_expression, ';'),

    local_var_decl: $ => seq(
      field('type', $._basic_type),
      commaSep1($._local_declarator),
      ';',
    ),

    _local_declarator: $ => seq(
      repeat('*'),
      field('name', $.identifier),
      optional(seq('=', field('value', $._expression))),
    ),

    return_statement: $ => seq(
      'return',
      optional($._comma_expression),
      ';',
    ),

    break_statement: $ => seq('break', ';'),
    continue_statement: $ => seq('continue', ';'),

    if_statement: $ => prec.right(seq(
      'if',
      '(',
      field('condition', $._comma_expression),
      ')',
      field('consequence', $._statement),
      optional(seq('else', field('alternative', $._statement))),
    )),

    while_statement: $ => seq(
      'while',
      '(', field('condition', $._comma_expression), ')',
      field('body', $._statement),
    ),

    do_statement: $ => seq(
      'do',
      field('body', $._statement),
      'while',
      '(', field('condition', $._comma_expression), ')',
      ';',
    ),

    for_statement: $ => seq(
      'for', '(',
      field('init', optional($._for_init)),
      ';',
      field('condition', optional($._comma_expression)),
      ';',
      field('update', optional($._comma_expression)),
      ')',
      field('body', $._statement),
    ),

    // prolang.y `for_init_expr` (line 12182) → `comma_expr_decl` (line
    // 12194), where each comma-separated element is either an `expr0`
    // or a `local_name_lvalue ('=' expr0)?` typed declaration. Each
    // element carries its own type, so `for(int i = 0, int j; ...; ...)`
    // is valid LPC (surfaced by the dunemud lib).
    //
    // The single-type form `for(type d1, d2; ...)` is a dedicated shape
    // — when every declarator shares a type, the tree mirrors a
    // `local_var_decl` for parity. The mixed form admits each item as
    // either an expression or a typed `for_init_decl`.
    _for_init: $ => choice(
      // Dynamic prec: when the for-init can be parsed *both* as a
      // single-type list of declarators AND as the mixed-type list, we
      // prefer the single-type shape (cleaner tree, matches the
      // existing corpus). `prec.dynamic` resolves at parse time so the
      // mixed-type form still wins when it's the only valid parse
      // (e.g. the second item has its own type or is a bare expression).
      prec.dynamic(1, seq(
        field('type', $._basic_type),
        commaSep1($._local_declarator),
      )),
      commaSep1($._for_init_item),
    ),

    _for_init_item: $ => choice(
      $._expression,
      $.for_init_decl,
    ),

    for_init_decl: $ => seq(
      field('type', $._basic_type),
      $._local_declarator,
    ),

    foreach_statement: $ => seq(
      'foreach', '(',
      field('vars', sep1(',', $._foreach_var)),
      choice(':', 'in'),
      field('source', choice($._expression, $.foreach_range)),
      ')',
      field('body', $._statement),
    ),

    _foreach_var: $ => choice(
      $.identifier,
      seq(
        field('type', $._basic_type),
        repeat('*'),
        field('name', $.identifier),
      ),
    ),

    // `lower .. upper` form of foreach source. Distinct from the range
    // syntax used in subscripts (`x[a..b]`) and in switch case ranges.
    foreach_range: $ => seq(
      field('lower', $._expression),
      '..',
      field('upper', $._expression),
    ),

    switch_statement: $ => seq(
      'switch',
      '(', field('value', $._comma_expression), ')',
      '{',
      repeat(choice($.switch_case, $.preproc_if_in_statement, $.preproc_ifdef_in_statement)),
      '}',
    ),

    switch_case: $ => prec.right(seq(
      choice(
        'default',
        seq('case', field('label', $.case_label),
            optional(seq('..', field('upper', $.case_label)))),
      ),
      ':',
      repeat($._statement),
    )),

    // prolang.y `case_label` (line 12948) accepts a folded numeric
    // constant or a string/bytes constant. We additionally accept bare
    // identifiers. They cover #defined constants like `case FOO:` that
    // we can't expand without a real preprocessor.
    case_label: $ => prec(1, choice(
      $.number_literal,
      $.string_literal,
      $.concatenated_string,
      $.bytes_literal,
      $.char_literal,
      $.identifier,
      seq('-', $.case_label),
      seq('+', $.case_label),
      seq('!', $.case_label),
      seq('~', $.case_label),
      seq('(', $.case_label, ')'),
    )),

    // ---------------------------------------------------------------------
    // Expressions
    //
    // prolang.y's precedence (lowest → highest):
    //   = += ...   (right)         ASSIGNMENT
    //   ?:         (right)         CONDITIONAL
    //   ||                         LOGICAL_OR
    //   &&                         LOGICAL_AND
    //   |                          INCLUSIVE_OR
    //   ^                          EXCLUSIVE_OR
    //   &                          BITWISE_AND
    //   == != in                   EQUAL
    //   < <= > >=                  RELATIONAL
    //   << >> >>>                  SHIFT
    //   + -                        ADD
    //   * / %                      MULTIPLY
    //   prefix ! ~ - (cast)        UNARY
    //   ++ -- . -> [ (             POSTFIX
    // ---------------------------------------------------------------------

    _comma_expression: $ => prec.left(PREC.COMMA, commaSep1($._expression)),

    _expression: $ => choice(
      $.assignment_expression,
      $.conditional_expression,
      $.binary_expression,
      $.unary_expression,
      $.update_expression,
      $.cast_expression,
      $.decl_cast_expression,
      $.lvalue_ref_expression,
      $._expr_primary,
    ),

    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      field('left', $._expression),
      field('operator', $.assignment_operator),
      field('right', $._expression),
    )),

    assignment_operator: $ => choice(
      '=', '*=', '/=', '%=', '+=', '-=',
      '<<=', '>>=', '>>>=',
      '&=', '&&=', '^=', '|=', '||=',
    ),

    conditional_expression: $ => prec.right(PREC.CONDITIONAL, seq(
      field('condition', $._expression),
      '?',
      field('consequence', $._expression),
      ':',
      field('alternative', $._expression),
    )),

    // All LPC binary operators are left-associative (prolang.y line 9577,
    // every relevant token under `%left`).
    binary_expression: $ => {
      const table = [
        ['||',  PREC.LOGICAL_OR],
        ['&&',  PREC.LOGICAL_AND],
        ['|',   PREC.INCLUSIVE_OR],
        ['^',   PREC.EXCLUSIVE_OR],
        ['&',   PREC.BITWISE_AND],
        ['==',  PREC.EQUAL],
        ['!=',  PREC.EQUAL],
        ['in',  PREC.EQUAL],
        ['<',   PREC.RELATIONAL],
        ['<=',  PREC.RELATIONAL],
        ['>',   PREC.RELATIONAL],
        ['>=',  PREC.RELATIONAL],
        ['<<',  PREC.SHIFT],
        ['>>',  PREC.SHIFT],
        ['>>>', PREC.SHIFT],
        ['+',   PREC.ADD],
        ['-',   PREC.ADD],
        ['*',   PREC.MULTIPLY],
        ['/',   PREC.MULTIPLY],
        ['%',   PREC.MULTIPLY],
      ];
      return choice(...table.map(([op, p]) =>
        prec.left(p, seq(
          field('left', $._expression),
          field('operator', op),
          field('right', $._expression),
        ))));
    },

    unary_expression: $ => prec.right(PREC.UNARY, seq(
      field('operator', choice('!', '~', '-', '+')),
      field('argument', $._expression),
    )),

    update_expression: $ => {
      const arg = field('argument', $._expression);
      const op = field('operator', choice('--', '++'));
      return choice(
        prec.right(PREC.UNARY, seq(op, arg)),
        prec.left(PREC.POSTFIX, seq(arg, op)),
      );
    },

    // prolang.y `cast` (line 11074): `'(' single_basic_non_void_type ')'`.
    // `void` is not accepted; a bare union must wrap in `<...>`, e.g.
    // `(<int|string>)x`. We type the field as `non_void_type` (which is a
    // single type or a `|`-union), slightly looser than prolang.y, but
    // the union-without-`<...>` case is a semantic concern, not syntax.
    cast_expression: $ => prec.right(PREC.CAST, seq(
      '(', field('type', $.non_void_type), ')',
      field('value', $._expression),
    )),

    // Decl-cast: `({ type })` value. prolang.y comments mark this as
    // candidate for removal but it's still parsed (line 11081).
    decl_cast_expression: $ => prec.right(PREC.CAST, seq(
      '(', '{', field('type', $._basic_type), '}', ')',
      field('value', $._expression),
    )),

    lvalue_ref_expression: $ => prec.right(PREC.UNARY, choice(
      seq('&', $.identifier),
      seq('&', '(', $._expression, ')'),
    )),

    // Primary expressions / postfix chain
    _expr_primary: $ => choice(
      $.identifier,
      // LDMud predefined `__FOO__` macros. See `predefined_macro`. They
      // expand to a string or integer at preprocessor time, so they
      // appear in expression position; we don't expand, so the node
      // stands in as an opaque primary.
      $.predefined_macro,
      // Function-like predefined macros: `__PATH__(n)` is the only one
      // that takes an argument in practice (lex.c:858). The others
      // (`__FILE__`, `__DIR__`, `__VERSION__`, …) are registered as
      // nullary in lex.c (`-1` argcount) but the bare-token form is
      // already covered by `predefined_macro` above.
      $.predefined_macro_call,
      $.number_literal,
      $.string_literal,
      $.concatenated_string,
      $.bytes_literal,
      $.concatenated_bytes_string,
      $.char_literal,
      $.symbol,
      $.closure,
      $.lpctype_literal,
      $.array_literal,
      $.quoted_aggregate,
      $.mapping_literal,
      $.empty_mapping_literal,
      $.struct_literal,
      $.parenthesized_expression,
      $.function_call,
      // `::ident` and `anchestor::ident` aren't valid as a bare value
      // (the bison grammar wants the call-args), but admitting them as
      // a primary lets `function_call`'s `(args)` postfix complete the
      // form even when the parser entered through `parenthesized_expression`
      // and the FIRST set otherwise blocked `::`. Surfaced by
      // `return(::lfun(args))` in the dunemud lib (see
      // `inherited_function_calls.txt`).
      $.scoped_function_name,
      $.call_other,
      $.member_access,
      $.subscript_expression,
      $.range_expression,
      $.inline_func,
      $.inline_closure,
      $.catch_expression,
      $.await_expression,
      $.yield_expression,
    ),

    // `[basic_type]`. first-class lpctype value (prolang.y line 15369).
    // E.g. `[int]`, `[int|string]`, `[mixed]`, `[void]`. Distinct from the
    // subscript expression `x[i]` because it appears in primary position
    // (no preceding object).
    lpctype_literal: $ => seq('[', $._basic_type, ']'),

    parenthesized_expression: $ => seq(
      '(', $._comma_expression, ')',
    ),

    // ----- Function call & call-other -----

    // prolang.y `function_name` (line 18471): `ident`, `::ident`, or
    // `anchestor::ident` where `anchestor` is a single string or
    // identifier (line 18558 — concatenation isn't allowed there).
    // Inlined into `function_call` (rather than a hidden helper) so
    // that the `::ident(...)` form is reachable without precedence
    // games — when the parser sees `(` followed by `::`, the only
    // valid expansion is `parenthesized_expression → ... →
    // function_call(scoped_function_name)`. Keeping `function_call` as
    // a single rule with a top-level choice on the function slot lets
    // tree-sitter compute that path without losing the `::` token to a
    // ternary/mapping/struct-init context.
    function_call: $ => prec(PREC.CALL, seq(
      field('function', choice(
        $.identifier,
        $.scoped_function_name,
      )),
      field('arguments', $.argument_list),
    )),

    scoped_function_name: $ => choice(
      seq('::', field('name', $.identifier)),
      seq(field('anchestor', choice($.identifier, $.string_literal)),
          '::', field('name', $.identifier)),
    ),

    argument_list: $ => seq(
      '(',
      aggregateBody(seq($._expression, optional('...')), $),
      ')',
    ),

    // Higher precedence than `member_access` so that `obj->fun(...)`
    // shifts `(` into the call rather than reducing to a bare member
    // access. (Surfaced once `_aggregate_slot` allowed bare-expression
    // slots without a trailing comma to disambiguate.)
    call_other: $ => prec(PREC.CALL, seq(
      field('object', $._expression),
      field('operator', choice('->', '.')),
      field('function', $._member_or_lookup),
      field('arguments', $.argument_list),
    )),

    member_access: $ => prec(PREC.POSTFIX, seq(
      field('object', $._expression),
      field('operator', choice('->', '.')),
      field('member', $._member_or_lookup),
    )),

    // The name half of `obj->fun` / `obj->fun()` / `obj.field`. prolang.y
    // accepts an identifier, a string constant, or a parenthesized
    // expression that resolves to a string at runtime.
    _member_or_lookup: $ => choice(
      $.identifier,
      $.string_literal,
      $.concatenated_string,
      seq('(', $._expression, ')'),
    ),

    // ----- Indexing & ranges -----

    subscript_expression: $ => prec(PREC.POSTFIX, seq(
      field('object', $._expression),
      '[',
      optional($._index_anchor),
      field('index', $._expression),
      optional(seq(',', optional($._index_anchor), field('index2', $._expression))),
      ']',
    )),

    // `x[a..b]`: single-key range subscript.
    // `x[k, a..b]` : two-key map range subscript: takes key `k` then a
    // range over the value column. prolang.y has the full suite of
    // anchor combos at lines 16760+; we model it permissively as an
    // optional `key,` prefix.
    range_expression: $ => prec(PREC.POSTFIX, seq(
      field('object', $._expression),
      '[',
      optional(seq(field('key', $._expression), ',')),
      optional(seq(optional($._index_anchor), field('lower', $._expression))),
      '..',
      optional(seq(optional($._index_anchor), field('upper', $._expression))),
      ']',
    )),

    // `<` = count from end, `>` = explicit from start (rare).
    _index_anchor: $ => choice('<', '>'),

    // ----- Catch / await / yield -----

    // prolang.y `catch` (line 18655) + `opt_catch_mods` (line 18755).
    // The modifier list is introduced by `;` and modifiers are
    // comma-separated. `reserve`/`limit` take an expression, `nolog`/
    // `publish` don't.
    catch_expression: $ => seq(
      'catch',
      '(',
      $._comma_expression,
      optional(seq(';', commaSep1($.catch_modifier))),
      ')',
    ),

    // prolang.y `opt_catch_modifier` (line 18803). LDMud parses every
    // modifier as a bare identifier and validates names in the action;
    // we bake the four documented names in directly. `reserve <expr>`
    // and `limit <expr>` take an int expression; `nolog`/`publish` are
    // bare.
    catch_modifier: $ => choice(
      'nolog',
      'publish',
      seq('reserve', $._expression),
      seq('limit', $._expression),
    ),

    // prolang.y coroutine_call (line 18578).
    //   await(coro)            await(coro, expr)
    //   yield()  yield(value)  yield(value, coro)
    await_expression: $ => seq(
      'await', '(', $._expression, optional(seq(',', $._expression)), ')',
    ),

    yield_expression: $ => seq(
      'yield', '(',
      optional(seq($._expression, optional(seq(',', $._expression)))),
      ')',
    ),

    // ----- Closures and inline functions -----

    // prolang.y `inline_func` (line 10063):
    //   inline_opt_async L_FUNC inline_opt_type inline_opt_args
    //                                          inline_opt_context inline_block
    // `inline_opt_args` is either empty (synthesizing $1..$9 implicits)
    // or `'(' argument ')'`, so the parameter list is *optional*. Body is
    // always a block — no prototype form.
    inline_func: $ => prec.right(seq(
      optional($.async_modifier),
      'function',
      field('type', optional($._basic_type)),
      field('parameters', optional($.parameter_list)),
      field('context', optional($.inline_context)),
      field('body', $.block),
    )),

    inline_context: $ => prec.right(seq(
      ':',
      sep(';', $.local_var_decl_no_semi),
      optional(';'),
    )),

    // Variant of local_var_decl without a trailing `;`, used inside the
    // `: ... ;` context list of an inline function.
    local_var_decl_no_semi: $ => seq(
      field('type', $._basic_type),
      commaSep1($._local_declarator),
    ),

    // `(: ... :)` short-form closure. lex.c emits L_BEGIN_INLINE /
    // L_END_INLINE as atomic tokens (lex.c:6119,6137) — no whitespace
    // allowed between `(` and `:` or between `:` and `)`. Body is
    // `statements inline_comma_expr` per prolang.y line 10260.
    //
    // We can't tokenize `(:` atomically because the corpus also
    // contains `return(::lfun())` (no space between `(` and `::`); a
    // greedy `(:` token swallows the first `:` of `::` and breaks the
    // parse. tree-sitter's regex tokens don't support negative
    // lookahead, so we instead spell the open as `(` immediately
    // followed by `:`, where `token.immediate` enforces "no whitespace
    // between" without committing the `:` early. The same applies to
    // `:)` for symmetry with `:)`-vs-`:` (e.g., `x?:y` Elvis-of-if-else).
    inline_closure: $ => seq(
      '(', token.immediate(':'),
      repeat($._statement),
      commaSep($._expression),
      ':', token.immediate(')'),
    ),

    // `#'<thing>` closure. lex.c's closure() emits a single L_CLOSURE
    // token covering the whole form, so we tokenize as one atom too —
    // avoids ambiguity with `#` preproc and `'` symbols. The full
    // operator-closure list is lex.c symbol_operator (lines 1148–1677);
    // longest-match in the tokenizer DFA handles ordering.
    closure: $ => $._closure_token,
    _closure_token: $ => token(seq(
      '#',
      "'",
      choice(
        // ident with optional leading `<scope>::`. lex.c special-cases
        // efun/sefun/lfun/var; any other scope is an inherit-name.
        seq(
          optional(seq(/[a-zA-Z_$][a-zA-Z0-9_$]*/, '::')),
          /[a-zA-Z_$][a-zA-Z0-9_$]*/,
        ),
        // `::name` — next outer same-named lfun.
        seq('::', /[a-zA-Z_$][a-zA-Z0-9_$]*/),

        // Compound assignments
        '+=', '-=', '*=', '/=', '%=', '^=',
        '<<=', '>>=', '>>>=',
        '&=', '|=', '&&=', '||=',

        // Arithmetic, bitwise, logical, equality, relational, shifts
        '+', '-', '*', '/', '%', '^',
        '==', '!=', '<=', '>=', '<<', '>>>', '>>',
        '&&', '||', '&', '|',
        '<', '>', '!', '~', '=',

        // Increment/decrement
        '++', '--',

        // Conditional / sequencing
        '?!', '?',
        '.', ',', ':',

        // Call-other / struct-index operators
        '->',

        // Aggregate openers used as closure values:
        // `#'({` array, `#'([` mapping, `#'(<` struct.
        '({', '([', '(<',

        // Map indexing / range forms (lex.c lines 1549–1646).
        // Two-arg map indices: `[,]`, `[,<]`, `[,>]`.
        '[,]', '[,<]', '[,>]',
        // Two-arg map ranges (with optional <,> anchors on each side):
        '[,..]',  '[,..<]',  '[,..>]',
        '[,<..]', '[,<..<]', '[,<..>]',
        '[,>..]', '[,>..<]', '[,>..>]',
        // Two-arg map open ranges (no closing anchor):
        '[,..',  '[,<..', '[,>..',

        // Single-arg index range forms (lex.c lines 1470–1547).
        '[..]',  '[..<]',  '[..>]',
        '[<..]', '[<..<]', '[<..>]',
        '[>..]', '[>..<]', '[>..>]',
        // Open-ended range forms (no closing `]`):
        '[..',   '[<..',  '[>..',

        // Bracket-anchored single indices and bare bracket
        '[<', '[>', '[',
      ),
    )),

    // ----- Aggregate literals -----

    // `({ ... })` array literal. Trailing comma allowed; preproc `#if`
    // / `#ifdef` may wrap individual elements (very common in the LDMud
    // corpus, e.g. `({ #'fun, #if __EFUN_DEFINED__(x) #'x, #endif })`).
    array_literal: $ => seq(
      '(', '{',
      aggregateBody($._expression, $),
      '}', ')',
    ),

    // `'({ ... })` — quoted aggregate (lex.c ~6223). One or more `'`
    // glued to `({` opens the form; the quote count is preserved at
    // runtime but doesn't change parse shape. Distinct from `#'({` which
    // is the AGGREGATE operator-closure (lex.c symbol_operator:1648).
    quoted_aggregate: $ => seq(
      $._quoted_aggregate_open,
      aggregateBody($._expression, $),
      '}', ')',
    ),

    // Tokenized as a single atom so it wins over `char_literal` (needs
    // closing `'`) and `symbol` (needs alpha after the quotes).
    _quoted_aggregate_open: $ => token(seq("'", repeat("'"), '({')),

    mapping_literal: $ => seq(
      '(', '[',
      aggregateBody($.mapping_entry, $, 'mapping'),
      ']', ')',
    ),

    mapping_entry: $ => seq(
      field('key', $._expression),
      optional(seq(
        ':',
        sep1(';', field('value', $._expression)),
      )),
    ),

    // `([ : N ])` declares a mapping with N value-columns and 0 entries.
    empty_mapping_literal: $ => seq(
      '(', '[',
      ':',
      field('width', $._expression),
      ']', ')',
    ),

    struct_literal: $ => seq(
      '(', '<',
      field('type', $.struct_name),
      '>',
      aggregateBody(choice($.struct_field_init, $._expression), $),
      ')',
    ),

    // prolang.y `struct_name` (line 17264) — same shape as
    // `_function_name`: bare identifier, leading `::name` for the next
    // outer same-named struct, or `scope::name` where scope is `efun` /
    // `sefun`.
    struct_name: $ => choice(
      $.identifier,
      seq('::', $.identifier),
      seq($.identifier, '::', $.identifier),
    ),

    struct_field_init: $ => seq(
      field('name', $.identifier),
      ':',
      field('value', $._expression),
    ),

    // ---------------------------------------------------------------------
    // Lexical primitives
    // ---------------------------------------------------------------------

    // lex.c ~line 6470: identifier starts with `$` or any unicode_isalunum
    // character (digits get dispatched to the number rule first), continues
    // with the same class.
    identifier: $ => /[\p{L}_$][\p{L}\p{N}_$]*/u,

    // lex.c ~line 6428: int (decimal/0x/0o/0b) or float (1.0, .5, 1e10).
    // Trailing-dot floats (`4.`) are deliberately rejected as a token.
    // lex.c only treats `.` as a float separator when not followed by
    // another `.`, and we can't express that lookahead in a token regex.
    // Forbidding `4.` lets `1..5` lex correctly as `1`, `..`, `5`.
    number_literal: $ => {
      const decimal = /[0-9]+/;
      return token(choice(
        // hex, octal, binary
        seq(/0[xX]/, /[0-9a-fA-F]+/),
        seq(/0[oO]/, /[0-7]+/),
        seq(/0[bB]/, /[01]+/),
        // float forms (require digits both sides of `.`, OR leading dot, OR
        // exponent without dot)
        seq(decimal, '.', decimal, optional(/[eE][-+]?[0-9]+/)),
        seq('.', decimal, optional(/[eE][-+]?[0-9]+/)),
        seq(decimal, /[eE][-+]?[0-9]+/),
        // plain decimal
        decimal,
      ));
    },

    string_literal: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence,
      )),
      '"',
    ),

    // Adjacent string literals concatenate at compile time. We also
    // accept LDMud's predefined `__FOO__` macros here, since they expand
    // to strings before parsing and the resulting concatenation is a
    // common idiom (`__DIR__ ".tmp.c"`, `__MASTER_OBJECT__ ".gc.log"`).
    // The function-like form `__PATH__(n)"x"` is common in the dunemud
    // corpus — admitted as the first or subsequent slot.
    concatenated_string: $ => prec(PREC.ADD, seq(
      choice($.string_literal, $.predefined_macro, $.predefined_macro_call),
      repeat1(choice($.string_literal, $.predefined_macro, $.predefined_macro_call)),
    )),

    // LDMud predefines macros named `__FOO__` (lex.c init_lexer:850)
    // that expand to strings: `__FILE__`, `__DIR__`, `__FUNCTION__`,
    // `__VERSION__`, `__MASTER_OBJECT__`, `__HOST_NAME__`, etc. The
    // grammar can't expand them, but it admits them in positions where
    // a string is expected (concatenation with a `string_literal`,
    // blueprint slot of `object`/`lwobject`).
    //
    // Token precedence above `identifier` so that `__FILE__` lexes as
    // `predefined_macro` whenever the surrounding rule allows it. In
    // contexts that only accept `identifier`, tree-sitter still picks
    // `identifier` because the lexer is per-state — `predefined_macro`
    // is only valid where we explicitly listed it. The ordering only
    // matters at states where *both* are valid.
    predefined_macro: $ => token(prec(2, /__[A-Z][A-Z0-9_]*__/)),

    // `__PATH__(n)` (lex.c:858) — the only predefined macro that takes
    // an argument. Surfaced by the dunemud lib (~30+ files, often
    // followed by an adjacent string for path concatenation).
    predefined_macro_call: $ => prec(PREC.CALL, seq(
      field('macro', $.predefined_macro),
      field('arguments', $.argument_list),
    )),

    bytes_literal: $ => seq(
      'b"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence,
      )),
      '"',
    ),

    concatenated_bytes_string: $ => prec(PREC.ADD,
      seq($.bytes_literal, repeat1($.bytes_literal)),
    ),

    // lex.c parse_escaped_char (~4812) + parse_numeric_escape (~4507).
    // LDMud is permissive: `\a \b \e \f \n \r \t` are named, `\<digits>`
    // is decimal, `\x..`/`\u..`/`\U..` consume hex digits, and a leading
    // `\0` followed by `x`/`o`/`b`/`X`/`O`/`B` selects hex/octal/binary.
    // Crucially, **anything else** falls through to "the printable char
    // itself" (lex.c:4875), and even `\x`/`\u`/`\U`/`\0o` with no
    // following digits falls back to the literal letter (lex.c:4870).
    // We also admit `\<newline>` so a string can be continued across
    // lines (the in-string handler in lex.c:6351 ignores `\<lf>`); per
    // LDMud the cross-line splice happens *before* string scanning at
    // lex.c:8194, but treating `\<newline>` as an in-string escape gives
    // the same effect for the parser.
    escape_sequence: $ => token.immediate(prec(1, seq(
      '\\',
      choice(
        /[0-9]{1,3}/,
        seq(/[xX]/, /[0-9a-fA-F]+/),
        seq(/[uU]/, /[0-9a-fA-F]+/),
        seq('0', /[oO]/, /[0-7]+/),
        seq('0', /[bB]/, /[01]+/),
        /./,
        /\r?\n/,
      ),
    ))),

    // Char literal: `'X'` where X is one char or one escape. Higher token
    // precedence than `symbol` so `'a'` lexes as a char literal, not as a
    // symbol followed by a stray quote. Escapes mirror string-literal
    // rules (see `escape_sequence` above): structured numeric forms with
    // digits, otherwise `\<any printable>` falls back to the literal.
    // Char literals can't span lines, so `\<newline>` is rejected here.
    char_literal: $ => token(prec(2, seq(
      "'",
      choice(
        seq('\\', choice(
          /[0-9]{1,3}/,
          seq(/[xX]/, /[0-9a-fA-F]+/),
          seq(/[uU]/, /[0-9a-fA-F]+/),
          seq('0', /[oO]/, /[0-7]+/),
          seq('0', /[bB]/, /[01]+/),
          /./,
        )),
        /[^\\'\n]/,
      ),
      "'",
    ))),

    // Symbol: `'foo`, `''foo`, etc. Starts with one or more `'` followed by
    // an identifier. Lower token precedence than char_literal.
    symbol: $ => token(prec(1, seq(
      "'",
      repeat("'"),
      /[a-zA-Z_$][a-zA-Z0-9_$]*/,
    ))),

    // C-style line and block comments. Multiline form taken from
    // tree-sitter-c.
    comment: $ => token(choice(
      seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    )),
  },
});

// ---------- helpers ----------

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep(rule) {
  return sep(',', rule);
}

function commaSep1(rule) {
  return sep1(',', rule);
}

// Body of an aggregate literal / argument list that may have `#if` / `#ifdef`
// blocks between (or in lieu of) elements, plus leaf preproc directives
// (`#define`, `#undef`, `#pragma`, ...) which appear in real-world LPC
// between elements of long aggregate literals. Each slot is either a
// normal element followed by `,`, a preproc block (whose contents are
// themselves comma-terminated elements), a leaf directive, or the final
// element without a trailing comma. Empty bodies are allowed.
//
// Mapping-flavor (`flavor: 'mapping'`) swaps the preproc-wrap rules for
// the `_in_mapping` family so that `#if` blocks inside a mapping literal
// can wrap whole `key: value` entries rather than bare expressions.
function aggregateBody(elem, $, flavor) {
  const preprocIfRule = flavor === 'mapping'
    ? $.preproc_if_in_mapping
    : $.preproc_if_in_aggregate;
  const preprocIfdefRule = flavor === 'mapping'
    ? $.preproc_ifdef_in_mapping
    : $.preproc_ifdef_in_aggregate;
  return optional(seq(
    repeat(choice(
      seq(elem, ','),
      preprocIfRule,
      preprocIfdefRule,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_undef,
      $.preproc_pragma,
      $.preproc_include,
      // Deliberately no `preproc_call`. Its regex matches `#ifdef`,
      // `#endif`, etc., and would outcompete the structured rules.
    )),
    optional(elem),
  ));
}

// Adapted from tree-sitter-c.
function preprocessor(command) {
  return alias(new RegExp('#[ \\t]*' + command), '#' + command);
}

function preprocIf(suffix, content) {
  function elseBlock($) {
    return choice(
      suffix ? alias($['preproc_else' + suffix], $.preproc_else) : $.preproc_else,
      suffix ? alias($['preproc_elif' + suffix], $.preproc_elif) : $.preproc_elif,
    );
  }
  return {
    ['preproc_if' + suffix]: $ => seq(
      preprocessor('if'),
      field('condition', $._preproc_expression),
      token.immediate(/\r?\n/),
      repeat(content($)),
      field('alternative', optional(elseBlock($))),
      preprocessor('endif'),
    ),
    ['preproc_ifdef' + suffix]: $ => seq(
      choice(preprocessor('ifdef'), preprocessor('ifndef')),
      field('name', $.identifier),
      repeat(content($)),
      field('alternative', optional(elseBlock($))),
      preprocessor('endif'),
    ),
    ['preproc_else' + suffix]: $ => seq(
      preprocessor('else'),
      repeat(content($)),
    ),
    ['preproc_elif' + suffix]: $ => seq(
      preprocessor('elif'),
      field('condition', $._preproc_expression),
      token.immediate(/\r?\n/),
      repeat(content($)),
      field('alternative', optional(elseBlock($))),
    ),
  };
}
